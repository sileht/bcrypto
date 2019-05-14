#include "common.h"
#include "chacha20.h"

static Nan::Persistent<v8::FunctionTemplate> chacha20_constructor;

BChaCha20::BChaCha20() {
  memset(&ctx, 0, sizeof(bcrypto_chacha20_ctx));
}

BChaCha20::~BChaCha20() {}

void
BChaCha20::Init(v8::Local<v8::Object> &target) {
  Nan::HandleScope scope;

  v8::Local<v8::FunctionTemplate> tpl =
    Nan::New<v8::FunctionTemplate>(BChaCha20::New);

  chacha20_constructor.Reset(tpl);

  tpl->SetClassName(Nan::New("ChaCha20").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Nan::SetPrototypeMethod(tpl, "init", BChaCha20::Init);
  Nan::SetPrototypeMethod(tpl, "encrypt", BChaCha20::Encrypt);
  Nan::SetPrototypeMethod(tpl, "crypt", BChaCha20::Crypt);

  v8::Local<v8::FunctionTemplate> ctor =
    Nan::New<v8::FunctionTemplate>(chacha20_constructor);

  Nan::Set(target, Nan::New("ChaCha20").ToLocalChecked(),
    Nan::GetFunction(ctor).ToLocalChecked());
}

NAN_METHOD(BChaCha20::New) {
  if (!info.IsConstructCall())
    return Nan::ThrowError("Could not create ChaCha20 instance.");

  BChaCha20 *chacha = new BChaCha20();
  chacha->Wrap(info.This());
  info.GetReturnValue().Set(info.This());
}

NAN_METHOD(BChaCha20::Init) {
  BChaCha20 *chacha = ObjectWrap::Unwrap<BChaCha20>(info.Holder());

  if (info.Length() < 1)
    return Nan::ThrowError("chacha20.init() requires arguments.");

  v8::Local<v8::Object> key_buf = info[0].As<v8::Object>();

  if (!node::Buffer::HasInstance(key_buf))
    return Nan::ThrowTypeError("First argument must be a buffer.");

  v8::Local<v8::Value> iv_buf = info[1].As<v8::Object>();

  if (!node::Buffer::HasInstance(iv_buf))
    return Nan::ThrowTypeError("Second argument must be a buffer.");

  const uint8_t *key = (const uint8_t *)node::Buffer::Data(key_buf);
  size_t key_len = node::Buffer::Length(key_buf);

  if (key_len < 32)
    return Nan::ThrowRangeError("Invalid key size.");

  const uint8_t *iv = (const uint8_t *)node::Buffer::Data(iv_buf);
  size_t iv_len = node::Buffer::Length(iv_buf);

  if (iv_len != 8 && iv_len != 12 && iv_len != 16)
    return Nan::ThrowRangeError("Invalid IV size.");

  uint64_t ctr = 0;

  if (info.Length() > 2 && !IsNull(info[2])) {
    if (!info[2]->IsNumber())
      return Nan::ThrowTypeError("Third argument must be a number.");

    ctr = (uint64_t)Nan::To<int64_t>(info[2]).FromJust();
  }

  bcrypto_chacha20_init(&chacha->ctx, key, 32, iv, iv_len, ctr);

  info.GetReturnValue().Set(info.This());
}

NAN_METHOD(BChaCha20::Encrypt) {
  BChaCha20 *chacha = ObjectWrap::Unwrap<BChaCha20>(info.Holder());

  if (info.Length() < 1)
    return Nan::ThrowError("chacha20.encrypt() requires arguments.");

  v8::Local<v8::Object> data_buf = info[0].As<v8::Object>();

  if (!node::Buffer::HasInstance(data_buf))
    return Nan::ThrowTypeError("First argument must be a buffer.");

  uint8_t *data = (uint8_t *)node::Buffer::Data(data_buf);
  size_t data_len = node::Buffer::Length(data_buf);

  bcrypto_chacha20_encrypt(&chacha->ctx, data, data, data_len);

  info.GetReturnValue().Set(data_buf);
}

NAN_METHOD(BChaCha20::Crypt) {
  BChaCha20 *chacha = ObjectWrap::Unwrap<BChaCha20>(info.Holder());

  if (info.Length() < 2)
    return Nan::ThrowError("chacha20.crypt() requires arguments.");

  v8::Local<v8::Object> input_buf = info[0].As<v8::Object>();
  v8::Local<v8::Object> output_buf = info[1].As<v8::Object>();

  if (!node::Buffer::HasInstance(input_buf))
    return Nan::ThrowTypeError("First argument must be a buffer.");

  if (!node::Buffer::HasInstance(output_buf))
    return Nan::ThrowTypeError("Second argument must be a buffer.");

  const uint8_t *input = (const uint8_t *)node::Buffer::Data(input_buf);
  size_t input_len = node::Buffer::Length(input_buf);

  uint8_t *output = (uint8_t *)node::Buffer::Data(output_buf);
  size_t output_len = node::Buffer::Length(output_buf);

  if (output_len < input_len)
    return Nan::ThrowRangeError("Invalid output size.");

  bcrypto_chacha20_encrypt(&chacha->ctx, output, input, input_len);

  info.GetReturnValue().Set(output_buf);
}

NAN_METHOD(BChaCha20::Destroy) {
  BChaCha20 *chacha = ObjectWrap::Unwrap<BChaCha20>(info.Holder());

  memset(&chacha->ctx, 0, sizeof(bcrypto_chacha20_ctx));

  info.GetReturnValue().Set(info.This());
}
