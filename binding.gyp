{
  "variables": {
    "bcrypto_byteorder%":
      "<!(python -c \"from __future__ import print_function; import sys; print(sys.byteorder)\")",
    "bcrypto_bits%":
      "<!(python -c \"from __future__ import print_function; import struct; print(8 * struct.calcsize('P'))\")",
    "with_openssl%": "true"
  },
  "targets": [{
    "target_name": "bcrypto",
    "sources": [
      "./src/nettle/aes128-meta.c",
      "./src/nettle/aes128-set-decrypt-key.c",
      "./src/nettle/aes128-set-encrypt-key.c",
      "./src/nettle/aes192-meta.c",
      "./src/nettle/aes192-set-decrypt-key.c",
      "./src/nettle/aes192-set-encrypt-key.c",
      "./src/nettle/aes256-meta.c",
      "./src/nettle/aes256-set-decrypt-key.c",
      "./src/nettle/aes256-set-encrypt-key.c",
      "./src/nettle/aes-decrypt.c",
      "./src/nettle/aes-decrypt-internal.c",
      "./src/nettle/aes-encrypt.c",
      "./src/nettle/aes-encrypt-internal.c",
      "./src/nettle/aes-encrypt-table.c",
      "./src/nettle/aes-invert-internal.c",
      "./src/nettle/aes-set-decrypt-key.c",
      "./src/nettle/aes-set-encrypt-key.c",
      "./src/nettle/aes-set-key-internal.c",
      "./src/nettle/arcfour.c",
      "./src/nettle/arcfour-crypt.c",
      "./src/nettle/arctwo.c",
      "./src/nettle/arctwo-meta.c",
      "./src/nettle/base16-decode.c",
      "./src/nettle/base16-encode.c",
      "./src/nettle/base16-meta.c",
      "./src/nettle/base64-decode.c",
      "./src/nettle/base64-encode.c",
      "./src/nettle/base64-meta.c",
      "./src/nettle/base64url-decode.c",
      "./src/nettle/base64url-encode.c",
      "./src/nettle/base64url-meta.c",
      "./src/nettle/bignum.c",
      "./src/nettle/bignum-random.c",
      "./src/nettle/bignum-random-prime.c",
      "./src/nettle/blowfish.c",
      "./src/nettle/buffer.c",
      "./src/nettle/buffer-init.c",
      "./src/nettle/camellia128-crypt.c",
      "./src/nettle/camellia128-meta.c",
      "./src/nettle/camellia128-set-decrypt-key.c",
      "./src/nettle/camellia128-set-encrypt-key.c",
      "./src/nettle/camellia192-meta.c",
      "./src/nettle/camellia256-crypt.c",
      "./src/nettle/camellia256-meta.c",
      "./src/nettle/camellia256-set-decrypt-key.c",
      "./src/nettle/camellia256-set-encrypt-key.c",
      "./src/nettle/camellia-absorb.c",
      "./src/nettle/camellia-crypt-internal.c",
      "./src/nettle/camellia-invert-key.c",
      "./src/nettle/camellia-table.c",
      "./src/nettle/cast128.c",
      "./src/nettle/cast128-meta.c",
      "./src/nettle/cbc.c",
      "./src/nettle/ccm-aes128.c",
      "./src/nettle/ccm-aes192.c",
      "./src/nettle/ccm-aes256.c",
      "./src/nettle/ccm.c",
      "./src/nettle/cfb.c",
      "./src/nettle/chacha-core-internal.c",
      "./src/nettle/chacha-crypt.c",
      "./src/nettle/chacha-poly1305.c",
      "./src/nettle/chacha-poly1305-meta.c",
      "./src/nettle/chacha-set-key.c",
      "./src/nettle/chacha-set-nonce.c",
      "./src/nettle/cnd-copy.c",
      "./src/nettle/cnd-memcpy.c",
      "./src/nettle/ctr.c",
      "./src/nettle/curve25519-eh-to-x.c",
      "./src/nettle/curve25519-mul.c",
      "./src/nettle/curve25519-mul-g.c",
      "./src/nettle/der2dsa.c",
      "./src/nettle/der2rsa.c",
      "./src/nettle/der-iterator.c",
      "./src/nettle/des3.c",
      "./src/nettle/des.c",
      "./src/nettle/dsa2sexp.c",
      "./src/nettle/dsa.c",
      "./src/nettle/dsa-gen-params.c",
      "./src/nettle/dsa-hash.c",
      "./src/nettle/dsa-keygen.c",
      "./src/nettle/dsa-sha1-sign.c",
      "./src/nettle/dsa-sha1-verify.c",
      "./src/nettle/dsa-sha256-sign.c",
      "./src/nettle/dsa-sha256-verify.c",
      "./src/nettle/dsa-sign.c",
      "./src/nettle/dsa-verify.c",
      "./src/nettle/eax-aes128.c",
      "./src/nettle/eax-aes128-meta.c",
      "./src/nettle/eax.c",
      "./src/nettle/ecc-192.c",
      "./src/nettle/ecc-224.c",
      "./src/nettle/ecc-25519.c",
      "./src/nettle/ecc-256.c",
      "./src/nettle/ecc-384.c",
      "./src/nettle/ecc-521.c",
      "./src/nettle/ecc-add-eh.c",
      "./src/nettle/ecc-add-ehh.c",
      "./src/nettle/ecc-add-jja.c",
      "./src/nettle/ecc-add-jjj.c",
      "./src/nettle/ecc-a-to-j.c",
      "./src/nettle/ecc-dup-eh.c",
      "./src/nettle/ecc-dup-jj.c",
      "./src/nettle/ecc-ecdsa-sign.c",
      "./src/nettle/ecc-ecdsa-verify.c",
      "./src/nettle/ecc-eh-to-a.c",
      "./src/nettle/ecc-hash.c",
      "./src/nettle/ecc-j-to-a.c",
      "./src/nettle/ecc-mod-arith.c",
      "./src/nettle/ecc-mod.c",
      "./src/nettle/ecc-mod-inv.c",
      "./src/nettle/ecc-mul-a.c",
      "./src/nettle/ecc-mul-a-eh.c",
      "./src/nettle/ecc-mul-g.c",
      "./src/nettle/ecc-mul-g-eh.c",
      "./src/nettle/ecc-pm1-redc.c",
      "./src/nettle/ecc-point.c",
      "./src/nettle/ecc-point-mul.c",
      "./src/nettle/ecc-point-mul-g.c",
      "./src/nettle/ecc-pp1-redc.c",
      "./src/nettle/ecc-random.c",
      "./src/nettle/ecc-scalar.c",
      "./src/nettle/ecc-size.c",
      "./src/nettle/ecdsa-keygen.c",
      "./src/nettle/ecdsa-sign.c",
      "./src/nettle/ecdsa-verify.c",
      "./src/nettle/ed25519-sha512-pubkey.c",
      "./src/nettle/ed25519-sha512-sign.c",
      "./src/nettle/ed25519-sha512-verify.c",
      "./src/nettle/eddsa-compress.c",
      "./src/nettle/eddsa-decompress.c",
      "./src/nettle/eddsa-expand.c",
      "./src/nettle/eddsa-hash.c",
      "./src/nettle/eddsa-pubkey.c",
      "./src/nettle/eddsa-sign.c",
      "./src/nettle/eddsa-verify.c",
      "./src/nettle/gcm-aes128.c",
      "./src/nettle/gcm-aes128-meta.c",
      "./src/nettle/gcm-aes192.c",
      "./src/nettle/gcm-aes192-meta.c",
      "./src/nettle/gcm-aes256.c",
      "./src/nettle/gcm-aes256-meta.c",
      "./src/nettle/gcm-aes.c",
      "./src/nettle/gcm.c",
      "./src/nettle/gcm-camellia128.c",
      "./src/nettle/gcm-camellia128-meta.c",
      "./src/nettle/gcm-camellia256.c",
      "./src/nettle/gcm-camellia256-meta.c",
      "./src/nettle/gmp-glue.c",
      "./src/nettle/gosthash94.c",
      "./src/nettle/gosthash94-meta.c",
      "./src/nettle/hkdf.c",
      "./src/nettle/hmac.c",
      "./src/nettle/hmac-md5.c",
      "./src/nettle/hmac-ripemd160.c",
      "./src/nettle/hmac-sha1.c",
      "./src/nettle/hmac-sha224.c",
      "./src/nettle/hmac-sha256.c",
      "./src/nettle/hmac-sha384.c",
      "./src/nettle/hmac-sha512.c",
      "./src/nettle/knuth-lfib.c",
      "./src/nettle/md2.c",
      "./src/nettle/md2-meta.c",
      "./src/nettle/md4.c",
      "./src/nettle/md4-meta.c",
      "./src/nettle/md5.c",
      "./src/nettle/md5-compress.c",
      "./src/nettle/md5-meta.c",
      "./src/nettle/memeql-sec.c",
      "./src/nettle/memxor3.c",
      "./src/nettle/memxor.c",
      "./src/nettle/nettle-internal.c",
      "./src/nettle/nettle-lookup-hash.c",
      "./src/nettle/nettle-meta-aeads.c",
      "./src/nettle/nettle-meta-armors.c",
      "./src/nettle/nettle-meta-ciphers.c",
      "./src/nettle/nettle-meta-hashes.c",
      "./src/nettle/pbkdf2.c",
      "./src/nettle/pbkdf2-hmac-sha1.c",
      "./src/nettle/pbkdf2-hmac-sha256.c",
      "./src/nettle/pgp-encode.c",
      "./src/nettle/pkcs1.c",
      "./src/nettle/pkcs1-decrypt.c",
      "./src/nettle/pkcs1-encrypt.c",
      "./src/nettle/pkcs1-rsa-digest.c",
      "./src/nettle/pkcs1-rsa-md5.c",
      "./src/nettle/pkcs1-rsa-sha1.c",
      "./src/nettle/pkcs1-rsa-sha256.c",
      "./src/nettle/pkcs1-rsa-sha512.c",
      "./src/nettle/pkcs1-sec-decrypt.c",
      "./src/nettle/poly1305-aes.c",
      "./src/nettle/poly1305-internal.c",
      "./src/nettle/pss.c",
      "./src/nettle/pss-mgf1.c",
      "./src/nettle/realloc.c",
      "./src/nettle/ripemd160.c",
      "./src/nettle/ripemd160-compress.c",
      "./src/nettle/ripemd160-meta.c",
      "./src/nettle/rsa2openpgp.c",
      "./src/nettle/rsa2sexp.c",
      "./src/nettle/rsa-blind.c",
      "./src/nettle/rsa.c",
      "./src/nettle/rsa-decrypt.c",
      "./src/nettle/rsa-decrypt-tr.c",
      "./src/nettle/rsa-encrypt.c",
      "./src/nettle/rsa-keygen.c",
      "./src/nettle/rsa-md5-sign.c",
      "./src/nettle/rsa-md5-sign-tr.c",
      "./src/nettle/rsa-md5-verify.c",
      "./src/nettle/rsa-pkcs1-sign.c",
      "./src/nettle/rsa-pkcs1-sign-tr.c",
      "./src/nettle/rsa-pkcs1-verify.c",
      "./src/nettle/rsa-pss-sha256-sign-tr.c",
      "./src/nettle/rsa-pss-sha256-verify.c",
      "./src/nettle/rsa-pss-sha512-sign-tr.c",
      "./src/nettle/rsa-pss-sha512-verify.c",
      "./src/nettle/rsa-sec-compute-root.c",
      "./src/nettle/rsa-sec-decrypt.c",
      "./src/nettle/rsa-sha1-sign.c",
      "./src/nettle/rsa-sha1-sign-tr.c",
      "./src/nettle/rsa-sha1-verify.c",
      "./src/nettle/rsa-sha256-sign.c",
      "./src/nettle/rsa-sha256-sign-tr.c",
      "./src/nettle/rsa-sha256-verify.c",
      "./src/nettle/rsa-sha512-sign.c",
      "./src/nettle/rsa-sha512-sign-tr.c",
      "./src/nettle/rsa-sha512-verify.c",
      "./src/nettle/rsa-sign.c",
      "./src/nettle/rsa-sign-tr.c",
      "./src/nettle/rsa-verify.c",
      "./src/nettle/salsa20-128-set-key.c",
      "./src/nettle/salsa20-256-set-key.c",
      "./src/nettle/salsa20-core-internal.c",
      "./src/nettle/salsa20-crypt.c",
      "./src/nettle/salsa20r12-crypt.c",
      "./src/nettle/salsa20-set-key.c",
      "./src/nettle/salsa20-set-nonce.c",
      "./src/nettle/sec-add-1.c",
      "./src/nettle/sec-sub-1.c",
      "./src/nettle/sec-tabselect.c",
      "./src/nettle/serpent-decrypt.c",
      "./src/nettle/serpent-encrypt.c",
      "./src/nettle/serpent-meta.c",
      "./src/nettle/serpent-set-key.c",
      "./src/nettle/sexp2bignum.c",
      "./src/nettle/sexp2dsa.c",
      "./src/nettle/sexp2rsa.c",
      "./src/nettle/sexp.c",
      "./src/nettle/sexp-format.c",
      "./src/nettle/sexp-transport.c",
      "./src/nettle/sexp-transport-format.c",
      "./src/nettle/sha1.c",
      "./src/nettle/sha1-compress.c",
      "./src/nettle/sha1-meta.c",
      "./src/nettle/sha224-meta.c",
      "./src/nettle/sha256.c",
      "./src/nettle/sha256-compress.c",
      "./src/nettle/sha256-meta.c",
      "./src/nettle/sha3-224.c",
      "./src/nettle/sha3-224-meta.c",
      "./src/nettle/sha3-256.c",
      "./src/nettle/sha3-256-meta.c",
      "./src/nettle/sha3-384.c",
      "./src/nettle/sha3-384-meta.c",
      "./src/nettle/sha3-512.c",
      "./src/nettle/sha3-512-meta.c",
      "./src/nettle/sha384-meta.c",
      "./src/nettle/sha3.c",
      "./src/nettle/sha3-permute.c",
      "./src/nettle/sha512-224-meta.c",
      "./src/nettle/sha512-256-meta.c",
      "./src/nettle/sha512.c",
      "./src/nettle/sha512-compress.c",
      "./src/nettle/sha512-meta.c",
      "./src/nettle/twofish.c",
      "./src/nettle/twofish-meta.c",
      "./src/nettle/umac128.c",
      "./src/nettle/umac32.c",
      "./src/nettle/umac64.c",
      "./src/nettle/umac96.c",
      "./src/nettle/umac-l2.c",
      "./src/nettle/umac-l3.c",
      "./src/nettle/umac-nh.c",
      "./src/nettle/umac-nh-n.c",
      "./src/nettle/umac-poly128.c",
      "./src/nettle/umac-poly64.c",
      "./src/nettle/umac-set-key.c",
      "./src/nettle/version.c",
      "./src/nettle/write-be32.c",
      "./src/nettle/write-le32.c",
      "./src/nettle/write-le64.c",
      "./src/nettle/yarrow256.c",
      "./src/nettle/yarrow_key_event.c",

      "./src/aead/aead.c",
      "./src/aes/aes.c",
      "./src/base58/base58.c",
      "./src/bech32/bech32.c",
      "./src/blake2b/blake2b.c",
      "./src/blake2s/blake2s.c",
      "./src/cash32/cash32.c",
      "./src/chacha20/chacha20.c",
      "./src/hash/cipher.c",
      "./src/dsa/dsa.c",
      "./src/ecdsa/ecdsa.c",
      "./src/ed25519/ed25519.c",
      "./src/ed448/arch_32/f_impl.c",
      "./src/ed448/curve448.c",
      "./src/ed448/curve448_tables.c",
      "./src/ed448/eddsa.c",
      "./src/ed448/f_generic.c",
      "./src/ed448/scalar.c",
      "./src/hash/hash.c",
      "./src/murmur3/murmur3.c",
      "./src/pbkdf2/pbkdf2.c",
      "./src/poly1305/poly1305.c",
      "./src/random/random.cc",
      "./src/rsa/rsa.c",
      "./src/salsa20/salsa20.c",
      "./src/scrypt/insecure_memzero.c",
      "./src/scrypt/sha256.c",
      "./src/scrypt/scrypt.c",
      "./src/secp256k1/src/secp256k1.c",
      "./src/secp256k1/contrib/lax_der_parsing.c",
      "./src/secp256k1/contrib/lax_der_privatekey_parsing.c",
      "./src/siphash/siphash.c",
      "./src/keccak/keccak.c",
      "./src/aead.cc",
      "./src/aes.cc",
      "./src/base58.cc",
      "./src/bech32.cc",
      "./src/bcrypto.cc",
      "./src/blake2b.cc",
      "./src/blake2s.cc",
      "./src/cash32.cc",
      "./src/chacha20.cc",
      "./src/cipherbase.cc",
      "./src/dsa.cc",
      "./src/dsa_async.cc",
      "./src/ecdsa.cc",
      "./src/ed25519.cc",
      "./src/ed448.cc",
      "./src/hash160.cc",
      "./src/hash256.cc",
      "./src/keccak.cc",
      "./src/md4.cc",
      "./src/md5.cc",
      "./src/murmur3.cc",
      "./src/pbkdf2.cc",
      "./src/pbkdf2_async.cc",
      "./src/poly1305.cc",
      "./src/random.cc",
      "./src/ripemd160.cc",
      "./src/rsa.cc",
      "./src/rsa_async.cc",
      "./src/salsa20.cc",
      "./src/scrypt.cc",
      "./src/scrypt_async.cc",
      "./src/secp256k1.cc",
      "./src/sha1.cc",
      "./src/sha224.cc",
      "./src/sha256.cc",
      "./src/sha384.cc",
      "./src/sha512.cc",
      "./src/siphash.cc"
    ],
    "cflags": [
      "-Wall",
      "-Wno-implicit-fallthrough",
      "-Wno-uninitialized",
      "-Wno-unused-function",
      "-Wno-unknown-warning-option",
      "-Wno-maybe-uninitialized",
      "-Wno-cast-function-type",
      "-Wno-unused-result",
      "-Wno-nonnull-compare",
      "-Wextra",
      "-O3"
    ],
    "cflags_c": [
      "-std=c99",
      "-Wno-unused-parameter"
    ],
    "cflags_cc+": [
      "-std=c++0x",
      "-Wno-maybe-uninitialized",
      "-Wno-cast-function-type",
      "-Wno-unused-parameter",
      "-Wno-unknown-warning-option",
      "-Wno-unused-const-variable",
      "-Wno-undefined-internal"
    ],
    "include_dirs": [
      "/usr/local/include",
      "<!(node -e \"require('nan')\")"
    ],
    "defines": [
      "ENABLE_MODULE_RECOVERY=1",
      "ENABLE_MODULE_SCHNORRSIG=1",
      "NETTLE_HAVE_CONFIG_H"
    ],
    "variables": {
      "conditions": [
        ["OS!='win'", {
          "cc": "<!(echo $CC)"
        }],
        ["with_openssl=='true' and OS=='win'", {
          "conditions": [
            ["target_arch=='ia32'", {
              "openssl_root%": "C:/OpenSSL-Win32"
            }, {
              "openssl_root%": "C:/OpenSSL-Win64"
            }]
          ]
        }],
        ["OS=='win'", {
          "with_gmp%": "false"
        }, {
          "with_gmp%": "<!(utils/has_lib.sh gmp)"
        }]
      ]
    },
    "conditions": [
      ["target_arch=='x64' and OS!='win' and cc=='clang'", {
        "cflags": [
          "-msse4.1"
        ]
      }],
      ["bcrypto_byteorder=='little'", {
        "defines": [
          "BCRYPTO_LITTLE_ENDIAN"
        ]
      }, {
        "defines": [
          "BCRYPTO_BIG_ENDIAN"
        ]
      }],
      ["bcrypto_bits=='32'", {
        "defines": [
          "BCRYPTO_32BIT_ARCH"
        ]
      }, {
        "defines": [
          "BCRYPTO_64BIT_ARCH"
        ]
      }],
      ["target_arch=='x64' and OS!='win'", {
        "defines": [
          "BCRYPTO_POLY1305_64BIT",
          "BCRYPTO_SIPHASH_64BIT",
          "BCRYPTO_USE_ASM",
          "BCRYPTO_USE_SSE",
          "BCRYPTO_USE_SSE41",
          "HAVE___INT128=1",
          "USE_ASM_X86_64=1",
          "USE_FIELD_5X52=1",
          "USE_FIELD_5X52_INT128=1",
          "USE_SCALAR_4X64=1"
        ],
        "sources": [
          "./src/nettle/aes-decrypt-internal.s",
          "./src/nettle/aes-encrypt-internal.s",
          "./src/nettle/camellia-crypt-internal.s",
          "./src/nettle/chacha-core-internal.s",
          "./src/nettle/ecc-192-modp.s",
          "./src/nettle/ecc-224-modp.s",
          "./src/nettle/ecc-25519-modp.s",
          "./src/nettle/ecc-256-redc.s",
          "./src/nettle/ecc-384-modp.s",
          "./src/nettle/ecc-521-modp.s",
          "./src/nettle/gcm-hash8.s",
          "./src/nettle/md5-compress.s",
          "./src/nettle/memxor3.s",
          "./src/nettle/memxor.s",
          "./src/nettle/poly1305-internal.s",
          "./src/nettle/salsa20-core-internal.s",
          "./src/nettle/salsa20-crypt.s",
          "./src/nettle/serpent-decrypt.s",
          "./src/nettle/serpent-encrypt.s",
          "./src/nettle/sha1-compress.s",
          "./src/nettle/sha256-compress.s",
          "./src/nettle/sha3-permute.s",
          "./src/nettle/sha512-compress.s",
          "./src/nettle/umac-nh-n.s",
          "./src/nettle/umac-nh.s"
        ]
      }, {
        "defines": [
          "BCRYPTO_POLY1305_32BIT",
          "BCRYPTO_ED25519_NO_INLINE_ASM",
          "USE_FIELD_10X26=1",
          "USE_SCALAR_8X32=1"
        ]
      }],
      ["with_openssl=='true'", {
        "conditions": [
          ["OS=='win'", {
            "libraries": [
              "-l<(openssl_root)/lib/libeay32.lib"
            ],
            "include_dirs": [
              "<(openssl_root)/include"
            ],
            "msbuild_settings": {
              "ClCompile": {
                "ObjectFileName": "$(IntDir)/%(Directory)/%(Filename)",
              },
              "Link": {
                "ImageHasSafeExceptionHandlers": "false"
              }
            }
          }, {
            "include_dirs": [
              "<(node_root_dir)/deps/openssl/openssl/include"
            ]
          }]
        ],
        "defines": [
          "BCRYPTO_WITH_OPENSSL"
        ]
      }],
      ["with_gmp=='true'", {
        "defines": [
          "HAVE_LIBGMP=1",
          "USE_NUM_GMP=1",
          "USE_FIELD_INV_NUM=1",
          "USE_SCALAR_INV_NUM=1"
        ],
        "libraries": [
          "-lgmp"
        ]
      }, {
        "defines": [
          "USE_NUM_NONE=1",
          "USE_FIELD_INV_BUILTIN=1",
          "USE_SCALAR_INV_BUILTIN=1"
        ],
        "sources": [
          "./src/nettle/mini-gmp.c"
        ]
      }],
      ["OS=='mac'", {
        "libraries": [
          "-L/usr/local/lib"
        ],
        "xcode_settings": {
          "MACOSX_DEPLOYMENT_TARGET": "10.7",
          "OTHER_CPLUSPLUSFLAGS": [
            "-stdlib=libc++"
          ]
        }
      }]
    ]
  }]
}
