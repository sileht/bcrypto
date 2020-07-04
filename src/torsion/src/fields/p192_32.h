/* Autogenerated: /src/ExtractionOCaml/unsaturated_solinas --static p192 9 '2^192 - 2^64 - 1' 32 */
/* curve description: p192 */
/* requested operations: (all) */
/* n = 9 (from "9") */
/* s-c = 2^192 - [(2^64, 1), (1, 1)] (from "2^192 - 2^64 - 1") */
/* machine_wordsize = 32 (from "32") */

/* Computed values: */
/* carry_chain = [2, 8, 3, 0, 4, 1, 5, 2, 6, 7, 8, 3, 0] */

#include <stdint.h>
typedef unsigned char fiat_p192_uint1;
typedef signed char fiat_p192_int1;

#if (-1 & 3) != 3
#error "This code only works on a two's complement system"
#endif


/*
 * The function fiat_p192_addcarryx_u22 is an addition with carry.
 * Postconditions:
 *   out1 = (arg1 + arg2 + arg3) mod 2^22
 *   out2 = ⌊(arg1 + arg2 + arg3) / 2^22⌋
 *
 * Input Bounds:
 *   arg1: [0x0 ~> 0x1]
 *   arg2: [0x0 ~> 0x3fffff]
 *   arg3: [0x0 ~> 0x3fffff]
 * Output Bounds:
 *   out1: [0x0 ~> 0x3fffff]
 *   out2: [0x0 ~> 0x1]
 */
static void fiat_p192_addcarryx_u22(uint32_t* out1, fiat_p192_uint1* out2, fiat_p192_uint1 arg1, uint32_t arg2, uint32_t arg3) {
  uint32_t x1 = ((arg1 + arg2) + arg3);
  uint32_t x2 = (x1 & UINT32_C(0x3fffff));
  fiat_p192_uint1 x3 = (fiat_p192_uint1)(x1 >> 22);
  *out1 = x2;
  *out2 = x3;
}

/*
 * The function fiat_p192_subborrowx_u22 is a subtraction with borrow.
 * Postconditions:
 *   out1 = (-arg1 + arg2 + -arg3) mod 2^22
 *   out2 = -⌊(-arg1 + arg2 + -arg3) / 2^22⌋
 *
 * Input Bounds:
 *   arg1: [0x0 ~> 0x1]
 *   arg2: [0x0 ~> 0x3fffff]
 *   arg3: [0x0 ~> 0x3fffff]
 * Output Bounds:
 *   out1: [0x0 ~> 0x3fffff]
 *   out2: [0x0 ~> 0x1]
 */
static void fiat_p192_subborrowx_u22(uint32_t* out1, fiat_p192_uint1* out2, fiat_p192_uint1 arg1, uint32_t arg2, uint32_t arg3) {
  int32_t x1 = ((int32_t)(arg2 - arg1) - (int32_t)arg3);
  fiat_p192_int1 x2 = (fiat_p192_int1)(x1 >> 22);
  uint32_t x3 = (x1 & UINT32_C(0x3fffff));
  *out1 = x3;
  *out2 = (fiat_p192_uint1)(0x0 - x2);
}

/*
 * The function fiat_p192_addcarryx_u21 is an addition with carry.
 * Postconditions:
 *   out1 = (arg1 + arg2 + arg3) mod 2^21
 *   out2 = ⌊(arg1 + arg2 + arg3) / 2^21⌋
 *
 * Input Bounds:
 *   arg1: [0x0 ~> 0x1]
 *   arg2: [0x0 ~> 0x1fffff]
 *   arg3: [0x0 ~> 0x1fffff]
 * Output Bounds:
 *   out1: [0x0 ~> 0x1fffff]
 *   out2: [0x0 ~> 0x1]
 */
static void fiat_p192_addcarryx_u21(uint32_t* out1, fiat_p192_uint1* out2, fiat_p192_uint1 arg1, uint32_t arg2, uint32_t arg3) {
  uint32_t x1 = ((arg1 + arg2) + arg3);
  uint32_t x2 = (x1 & UINT32_C(0x1fffff));
  fiat_p192_uint1 x3 = (fiat_p192_uint1)(x1 >> 21);
  *out1 = x2;
  *out2 = x3;
}

/*
 * The function fiat_p192_subborrowx_u21 is a subtraction with borrow.
 * Postconditions:
 *   out1 = (-arg1 + arg2 + -arg3) mod 2^21
 *   out2 = -⌊(-arg1 + arg2 + -arg3) / 2^21⌋
 *
 * Input Bounds:
 *   arg1: [0x0 ~> 0x1]
 *   arg2: [0x0 ~> 0x1fffff]
 *   arg3: [0x0 ~> 0x1fffff]
 * Output Bounds:
 *   out1: [0x0 ~> 0x1fffff]
 *   out2: [0x0 ~> 0x1]
 */
static void fiat_p192_subborrowx_u21(uint32_t* out1, fiat_p192_uint1* out2, fiat_p192_uint1 arg1, uint32_t arg2, uint32_t arg3) {
  int32_t x1 = ((int32_t)(arg2 - arg1) - (int32_t)arg3);
  fiat_p192_int1 x2 = (fiat_p192_int1)(x1 >> 21);
  uint32_t x3 = (x1 & UINT32_C(0x1fffff));
  *out1 = x3;
  *out2 = (fiat_p192_uint1)(0x0 - x2);
}

/*
 * The function fiat_p192_cmovznz_u32 is a single-word conditional move.
 * Postconditions:
 *   out1 = (if arg1 = 0 then arg2 else arg3)
 *
 * Input Bounds:
 *   arg1: [0x0 ~> 0x1]
 *   arg2: [0x0 ~> 0xffffffff]
 *   arg3: [0x0 ~> 0xffffffff]
 * Output Bounds:
 *   out1: [0x0 ~> 0xffffffff]
 */
static void fiat_p192_cmovznz_u32(uint32_t* out1, fiat_p192_uint1 arg1, uint32_t arg2, uint32_t arg3) {
  fiat_p192_uint1 x1 = (!(!arg1));
  uint32_t x2 = ((fiat_p192_int1)(0x0 - x1) & UINT32_C(0xffffffff));
  uint32_t x3 = ((x2 & arg3) | ((~x2) & arg2));
  *out1 = x3;
}

/*
 * The function fiat_p192_carry_mul multiplies two field elements and reduces the result.
 * Postconditions:
 *   eval out1 mod m = (eval arg1 * eval arg2) mod m
 *
 * Input Bounds:
 *   arg1: [[0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999]]
 *   arg2: [[0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999]]
 * Output Bounds:
 *   out1: [[0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333]]
 */
static void fiat_p192_carry_mul(uint32_t out1[9], const uint32_t arg1[9], const uint32_t arg2[9]) {
  uint64_t x1 = ((uint64_t)(arg1[8]) * (arg2[8]));
  uint64_t x2 = ((uint64_t)(arg1[8]) * ((arg2[7]) * (uint32_t)0x2));
  uint64_t x3 = ((uint64_t)(arg1[7]) * ((arg2[8]) * (uint32_t)0x2));
  uint64_t x4 = ((uint64_t)(arg1[8]) * (arg2[8]));
  uint64_t x5 = ((uint64_t)(arg1[8]) * ((arg2[7]) * (uint32_t)0x2));
  uint64_t x6 = ((uint64_t)(arg1[7]) * ((arg2[8]) * (uint32_t)0x2));
  uint64_t x7 = ((uint64_t)(arg1[8]) * (arg2[8]));
  uint64_t x8 = ((uint64_t)(arg1[8]) * ((arg2[7]) * (uint32_t)0x2));
  uint64_t x9 = ((uint64_t)(arg1[8]) * (arg2[6]));
  uint64_t x10 = ((uint64_t)(arg1[8]) * (arg2[5]));
  uint64_t x11 = ((uint64_t)(arg1[8]) * ((arg2[4]) * (uint32_t)0x2));
  uint64_t x12 = ((uint64_t)(arg1[8]) * (arg2[3]));
  uint64_t x13 = ((uint64_t)(arg1[8]) * (arg2[2]));
  uint64_t x14 = ((uint64_t)(arg1[8]) * ((arg2[1]) * (uint32_t)0x2));
  uint64_t x15 = ((uint64_t)(arg1[7]) * ((arg2[8]) * (uint32_t)0x2));
  uint64_t x16 = ((uint64_t)(arg1[7]) * ((arg2[7]) * (uint32_t)0x2));
  uint64_t x17 = ((uint64_t)(arg1[7]) * (arg2[6]));
  uint64_t x18 = ((uint64_t)(arg1[7]) * ((arg2[5]) * (uint32_t)0x2));
  uint64_t x19 = ((uint64_t)(arg1[7]) * ((arg2[4]) * (uint32_t)0x2));
  uint64_t x20 = ((uint64_t)(arg1[7]) * (arg2[3]));
  uint64_t x21 = ((uint64_t)(arg1[7]) * ((arg2[2]) * (uint32_t)0x2));
  uint64_t x22 = ((uint64_t)(arg1[6]) * (arg2[8]));
  uint64_t x23 = ((uint64_t)(arg1[6]) * (arg2[7]));
  uint64_t x24 = ((uint64_t)(arg1[6]) * (arg2[6]));
  uint64_t x25 = ((uint64_t)(arg1[6]) * (arg2[5]));
  uint64_t x26 = ((uint64_t)(arg1[6]) * (arg2[4]));
  uint64_t x27 = ((uint64_t)(arg1[6]) * (arg2[3]));
  uint64_t x28 = ((uint64_t)(arg1[5]) * (arg2[8]));
  uint64_t x29 = ((uint64_t)(arg1[5]) * ((arg2[7]) * (uint32_t)0x2));
  uint64_t x30 = ((uint64_t)(arg1[5]) * (arg2[6]));
  uint64_t x31 = ((uint64_t)(arg1[5]) * (arg2[5]));
  uint64_t x32 = ((uint64_t)(arg1[5]) * ((arg2[4]) * (uint32_t)0x2));
  uint64_t x33 = ((uint64_t)(arg1[4]) * ((arg2[8]) * (uint32_t)0x2));
  uint64_t x34 = ((uint64_t)(arg1[4]) * ((arg2[7]) * (uint32_t)0x2));
  uint64_t x35 = ((uint64_t)(arg1[4]) * (arg2[6]));
  uint64_t x36 = ((uint64_t)(arg1[4]) * ((arg2[5]) * (uint32_t)0x2));
  uint64_t x37 = ((uint64_t)(arg1[3]) * (arg2[8]));
  uint64_t x38 = ((uint64_t)(arg1[3]) * (arg2[7]));
  uint64_t x39 = ((uint64_t)(arg1[3]) * (arg2[6]));
  uint64_t x40 = ((uint64_t)(arg1[2]) * (arg2[8]));
  uint64_t x41 = ((uint64_t)(arg1[2]) * ((arg2[7]) * (uint32_t)0x2));
  uint64_t x42 = ((uint64_t)(arg1[1]) * ((arg2[8]) * (uint32_t)0x2));
  uint64_t x43 = ((uint64_t)(arg1[8]) * (arg2[6]));
  uint64_t x44 = ((uint64_t)(arg1[8]) * (arg2[5]));
  uint64_t x45 = ((uint64_t)(arg1[8]) * ((arg2[4]) * (uint32_t)0x2));
  uint64_t x46 = ((uint64_t)(arg1[8]) * (arg2[3]));
  uint64_t x47 = ((uint64_t)(arg1[8]) * (arg2[2]));
  uint64_t x48 = ((uint64_t)(arg1[8]) * ((arg2[1]) * (uint32_t)0x2));
  uint64_t x49 = ((uint64_t)(arg1[7]) * ((arg2[7]) * (uint32_t)0x2));
  uint64_t x50 = ((uint64_t)(arg1[7]) * (arg2[6]));
  uint64_t x51 = ((uint64_t)(arg1[7]) * ((arg2[5]) * (uint32_t)0x2));
  uint64_t x52 = ((uint64_t)(arg1[7]) * ((arg2[4]) * (uint32_t)0x2));
  uint64_t x53 = ((uint64_t)(arg1[7]) * (arg2[3]));
  uint64_t x54 = ((uint64_t)(arg1[7]) * ((arg2[2]) * (uint32_t)0x2));
  uint64_t x55 = ((uint64_t)(arg1[6]) * (arg2[8]));
  uint64_t x56 = ((uint64_t)(arg1[6]) * (arg2[7]));
  uint64_t x57 = ((uint64_t)(arg1[6]) * (arg2[6]));
  uint64_t x58 = ((uint64_t)(arg1[6]) * (arg2[5]));
  uint64_t x59 = ((uint64_t)(arg1[6]) * (arg2[4]));
  uint64_t x60 = ((uint64_t)(arg1[6]) * (arg2[3]));
  uint64_t x61 = ((uint64_t)(arg1[5]) * (arg2[8]));
  uint64_t x62 = ((uint64_t)(arg1[5]) * ((arg2[7]) * (uint32_t)0x2));
  uint64_t x63 = ((uint64_t)(arg1[5]) * (arg2[6]));
  uint64_t x64 = ((uint64_t)(arg1[5]) * (arg2[5]));
  uint64_t x65 = ((uint64_t)(arg1[5]) * ((arg2[4]) * (uint32_t)0x2));
  uint64_t x66 = ((uint64_t)(arg1[4]) * ((arg2[8]) * (uint32_t)0x2));
  uint64_t x67 = ((uint64_t)(arg1[4]) * ((arg2[7]) * (uint32_t)0x2));
  uint64_t x68 = ((uint64_t)(arg1[4]) * (arg2[6]));
  uint64_t x69 = ((uint64_t)(arg1[4]) * ((arg2[5]) * (uint32_t)0x2));
  uint64_t x70 = ((uint64_t)(arg1[3]) * (arg2[8]));
  uint64_t x71 = ((uint64_t)(arg1[3]) * (arg2[7]));
  uint64_t x72 = ((uint64_t)(arg1[3]) * (arg2[6]));
  uint64_t x73 = ((uint64_t)(arg1[2]) * (arg2[8]));
  uint64_t x74 = ((uint64_t)(arg1[2]) * ((arg2[7]) * (uint32_t)0x2));
  uint64_t x75 = ((uint64_t)(arg1[1]) * ((arg2[8]) * (uint32_t)0x2));
  uint64_t x76 = ((uint64_t)(arg1[8]) * (arg2[0]));
  uint64_t x77 = ((uint64_t)(arg1[7]) * ((arg2[1]) * (uint32_t)0x2));
  uint64_t x78 = ((uint64_t)(arg1[7]) * (arg2[0]));
  uint64_t x79 = ((uint64_t)(arg1[6]) * (arg2[2]));
  uint64_t x80 = ((uint64_t)(arg1[6]) * (arg2[1]));
  uint64_t x81 = ((uint64_t)(arg1[6]) * (arg2[0]));
  uint64_t x82 = ((uint64_t)(arg1[5]) * (arg2[3]));
  uint64_t x83 = ((uint64_t)(arg1[5]) * (arg2[2]));
  uint64_t x84 = ((uint64_t)(arg1[5]) * ((arg2[1]) * (uint32_t)0x2));
  uint64_t x85 = ((uint64_t)(arg1[5]) * (arg2[0]));
  uint64_t x86 = ((uint64_t)(arg1[4]) * ((arg2[4]) * (uint32_t)0x2));
  uint64_t x87 = ((uint64_t)(arg1[4]) * (arg2[3]));
  uint64_t x88 = ((uint64_t)(arg1[4]) * ((arg2[2]) * (uint32_t)0x2));
  uint64_t x89 = ((uint64_t)(arg1[4]) * ((arg2[1]) * (uint32_t)0x2));
  uint64_t x90 = ((uint64_t)(arg1[4]) * (arg2[0]));
  uint64_t x91 = ((uint64_t)(arg1[3]) * (arg2[5]));
  uint64_t x92 = ((uint64_t)(arg1[3]) * (arg2[4]));
  uint64_t x93 = ((uint64_t)(arg1[3]) * (arg2[3]));
  uint64_t x94 = ((uint64_t)(arg1[3]) * (arg2[2]));
  uint64_t x95 = ((uint64_t)(arg1[3]) * (arg2[1]));
  uint64_t x96 = ((uint64_t)(arg1[3]) * (arg2[0]));
  uint64_t x97 = ((uint64_t)(arg1[2]) * (arg2[6]));
  uint64_t x98 = ((uint64_t)(arg1[2]) * (arg2[5]));
  uint64_t x99 = ((uint64_t)(arg1[2]) * ((arg2[4]) * (uint32_t)0x2));
  uint64_t x100 = ((uint64_t)(arg1[2]) * (arg2[3]));
  uint64_t x101 = ((uint64_t)(arg1[2]) * (arg2[2]));
  uint64_t x102 = ((uint64_t)(arg1[2]) * ((arg2[1]) * (uint32_t)0x2));
  uint64_t x103 = ((uint64_t)(arg1[2]) * (arg2[0]));
  uint64_t x104 = ((uint64_t)(arg1[1]) * ((arg2[7]) * (uint32_t)0x2));
  uint64_t x105 = ((uint64_t)(arg1[1]) * (arg2[6]));
  uint64_t x106 = ((uint64_t)(arg1[1]) * ((arg2[5]) * (uint32_t)0x2));
  uint64_t x107 = ((uint64_t)(arg1[1]) * ((arg2[4]) * (uint32_t)0x2));
  uint64_t x108 = ((uint64_t)(arg1[1]) * (arg2[3]));
  uint64_t x109 = ((uint64_t)(arg1[1]) * ((arg2[2]) * (uint32_t)0x2));
  uint64_t x110 = ((uint64_t)(arg1[1]) * ((arg2[1]) * (uint32_t)0x2));
  uint64_t x111 = ((uint64_t)(arg1[1]) * (arg2[0]));
  uint64_t x112 = ((uint64_t)(arg1[0]) * (arg2[8]));
  uint64_t x113 = ((uint64_t)(arg1[0]) * (arg2[7]));
  uint64_t x114 = ((uint64_t)(arg1[0]) * (arg2[6]));
  uint64_t x115 = ((uint64_t)(arg1[0]) * (arg2[5]));
  uint64_t x116 = ((uint64_t)(arg1[0]) * (arg2[4]));
  uint64_t x117 = ((uint64_t)(arg1[0]) * (arg2[3]));
  uint64_t x118 = ((uint64_t)(arg1[0]) * (arg2[2]));
  uint64_t x119 = ((uint64_t)(arg1[0]) * (arg2[1]));
  uint64_t x120 = ((uint64_t)(arg1[0]) * (arg2[0]));
  uint64_t x121 = (x118 + (x110 + (x103 + (x37 + (x34 + (x30 + (x25 + (x19 + x12))))))));
  uint32_t x122 = (uint32_t)(x121 >> 21);
  uint32_t x123 = (uint32_t)(x121 & UINT32_C(0x1fffff));
  uint64_t x124 = (x112 + (x104 + (x97 + (x91 + (x86 + (x82 + (x79 + (x77 + (x76 + (x55 + (x49 + x43)))))))))));
  uint64_t x125 = (x113 + (x105 + (x98 + (x92 + (x87 + (x83 + (x80 + (x78 + (x61 + (x56 + (x50 + (x44 + x7))))))))))));
  uint64_t x126 = (x114 + (x106 + (x99 + (x93 + (x88 + (x84 + (x81 + (x66 + (x62 + (x57 + (x51 + (x45 + (x15 + x8)))))))))))));
  uint64_t x127 = (x115 + (x107 + (x100 + (x94 + (x89 + (x85 + (x70 + (x67 + (x63 + (x58 + (x52 + (x46 + (x22 + (x16 + x9))))))))))))));
  uint64_t x128 = (x116 + (x108 + (x101 + (x95 + (x90 + (x73 + (x71 + (x68 + (x64 + (x59 + (x53 + (x47 + (x28 + (x23 + (x17 + (x10 + x4))))))))))))))));
  uint64_t x129 = (x117 + (x109 + (x102 + (x96 + (x75 + (x74 + (x72 + (x69 + (x65 + (x60 + (x54 + (x48 + (x33 + (x29 + (x24 + (x18 + (x11 + (x6 + x5))))))))))))))))));
  uint64_t x130 = (x119 + (x111 + (x40 + (x38 + (x35 + (x31 + (x26 + (x20 + (x13 + x1)))))))));
  uint64_t x131 = (x120 + (x42 + (x41 + (x39 + (x36 + (x32 + (x27 + (x21 + (x14 + (x3 + x2))))))))));
  uint64_t x132 = (x122 + x129);
  uint32_t x133 = (uint32_t)(x124 >> 21);
  uint32_t x134 = (uint32_t)(x124 & UINT32_C(0x1fffff));
  uint64_t x135 = (x132 + x133);
  uint32_t x136 = (uint32_t)(x135 >> 22);
  uint32_t x137 = (uint32_t)(x135 & UINT32_C(0x3fffff));
  uint64_t x138 = (x131 + x133);
  uint64_t x139 = (x136 + x128);
  uint32_t x140 = (uint32_t)(x138 >> 22);
  uint32_t x141 = (uint32_t)(x138 & UINT32_C(0x3fffff));
  uint64_t x142 = (x140 + x130);
  uint32_t x143 = (uint32_t)(x139 >> 21);
  uint32_t x144 = (uint32_t)(x139 & UINT32_C(0x1fffff));
  uint64_t x145 = (x143 + x127);
  uint32_t x146 = (uint32_t)(x142 >> 21);
  uint32_t x147 = (uint32_t)(x142 & UINT32_C(0x1fffff));
  uint32_t x148 = (x146 + x123);
  uint32_t x149 = (uint32_t)(x145 >> 21);
  uint32_t x150 = (uint32_t)(x145 & UINT32_C(0x1fffff));
  uint64_t x151 = (x149 + x126);
  uint32_t x152 = (x148 >> 21);
  uint32_t x153 = (x148 & UINT32_C(0x1fffff));
  uint32_t x154 = (x152 + x137);
  uint32_t x155 = (uint32_t)(x151 >> 22);
  uint32_t x156 = (uint32_t)(x151 & UINT32_C(0x3fffff));
  uint64_t x157 = (x155 + x125);
  uint32_t x158 = (uint32_t)(x157 >> 21);
  uint32_t x159 = (uint32_t)(x157 & UINT32_C(0x1fffff));
  uint32_t x160 = (x158 + x134);
  uint32_t x161 = (x160 >> 21);
  uint32_t x162 = (x160 & UINT32_C(0x1fffff));
  uint32_t x163 = (x154 + x161);
  fiat_p192_uint1 x164 = (fiat_p192_uint1)(x163 >> 22);
  uint32_t x165 = (x163 & UINT32_C(0x3fffff));
  uint32_t x166 = (x141 + x161);
  uint32_t x167 = (x164 + x144);
  fiat_p192_uint1 x168 = (fiat_p192_uint1)(x166 >> 22);
  uint32_t x169 = (x166 & UINT32_C(0x3fffff));
  uint32_t x170 = (x168 + x147);
  out1[0] = x169;
  out1[1] = x170;
  out1[2] = x153;
  out1[3] = x165;
  out1[4] = x167;
  out1[5] = x150;
  out1[6] = x156;
  out1[7] = x159;
  out1[8] = x162;
}

/*
 * The function fiat_p192_carry_square squares a field element and reduces the result.
 * Postconditions:
 *   eval out1 mod m = (eval arg1 * eval arg1) mod m
 *
 * Input Bounds:
 *   arg1: [[0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999]]
 * Output Bounds:
 *   out1: [[0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333]]
 */
static void fiat_p192_carry_square(uint32_t out1[9], const uint32_t arg1[9]) {
  uint32_t x1 = (arg1[8]);
  uint32_t x2 = (arg1[8]);
  uint32_t x3 = (x1 * (uint32_t)0x2);
  uint32_t x4 = (x2 * (uint32_t)0x2);
  uint32_t x5 = ((arg1[8]) * (uint32_t)0x2);
  uint32_t x6 = (arg1[7]);
  uint32_t x7 = (arg1[7]);
  uint32_t x8 = (x6 * (uint32_t)0x2);
  uint32_t x9 = (x7 * (uint32_t)0x2);
  uint32_t x10 = ((arg1[7]) * (uint32_t)0x2);
  uint32_t x11 = (arg1[6]);
  uint32_t x12 = (arg1[6]);
  uint32_t x13 = (x11 * (uint32_t)0x2);
  uint32_t x14 = (x12 * (uint32_t)0x2);
  uint32_t x15 = ((arg1[6]) * (uint32_t)0x2);
  uint32_t x16 = (arg1[5]);
  uint32_t x17 = (arg1[5]);
  uint32_t x18 = (x16 * (uint32_t)0x2);
  uint32_t x19 = (x17 * (uint32_t)0x2);
  uint32_t x20 = ((arg1[5]) * (uint32_t)0x2);
  uint32_t x21 = ((arg1[4]) * (uint32_t)0x2);
  uint32_t x22 = ((arg1[3]) * (uint32_t)0x2);
  uint32_t x23 = ((arg1[2]) * (uint32_t)0x2);
  uint32_t x24 = ((arg1[1]) * (uint32_t)0x2);
  uint64_t x25 = ((uint64_t)(arg1[8]) * x1);
  uint64_t x26 = ((uint64_t)(arg1[7]) * (x3 * (uint32_t)0x2));
  uint64_t x27 = ((uint64_t)(arg1[8]) * x1);
  uint64_t x28 = ((uint64_t)(arg1[7]) * (x3 * (uint32_t)0x2));
  uint64_t x29 = ((uint64_t)(arg1[8]) * x2);
  uint64_t x30 = ((uint64_t)(arg1[7]) * (x4 * (uint32_t)0x2));
  uint64_t x31 = ((uint64_t)(arg1[7]) * (x7 * (uint32_t)0x2));
  uint64_t x32 = ((uint64_t)(arg1[7]) * (x6 * (uint32_t)0x2));
  uint64_t x33 = ((uint64_t)(arg1[6]) * x4);
  uint64_t x34 = ((uint64_t)(arg1[6]) * x3);
  uint64_t x35 = ((uint64_t)(arg1[6]) * x9);
  uint64_t x36 = ((uint64_t)(arg1[6]) * x8);
  uint64_t x37 = ((uint64_t)(arg1[6]) * x12);
  uint64_t x38 = ((uint64_t)(arg1[6]) * x11);
  uint64_t x39 = ((uint64_t)(arg1[5]) * x4);
  uint64_t x40 = ((uint64_t)(arg1[5]) * x3);
  uint64_t x41 = ((uint64_t)(arg1[5]) * (x9 * (uint32_t)0x2));
  uint64_t x42 = ((uint64_t)(arg1[5]) * (x8 * (uint32_t)0x2));
  uint64_t x43 = ((uint64_t)(arg1[5]) * x14);
  uint64_t x44 = ((uint64_t)(arg1[5]) * x13);
  uint64_t x45 = ((uint64_t)(arg1[5]) * x17);
  uint64_t x46 = ((uint64_t)(arg1[5]) * x16);
  uint64_t x47 = ((uint64_t)(arg1[4]) * (x4 * (uint32_t)0x2));
  uint64_t x48 = ((uint64_t)(arg1[4]) * (x3 * (uint32_t)0x2));
  uint64_t x49 = ((uint64_t)(arg1[4]) * (x9 * (uint32_t)0x2));
  uint64_t x50 = ((uint64_t)(arg1[4]) * (x8 * (uint32_t)0x2));
  uint64_t x51 = ((uint64_t)(arg1[4]) * x14);
  uint64_t x52 = ((uint64_t)(arg1[4]) * x13);
  uint64_t x53 = ((uint64_t)(arg1[4]) * (x19 * (uint32_t)0x2));
  uint64_t x54 = ((uint64_t)(arg1[4]) * (x18 * (uint32_t)0x2));
  uint64_t x55 = ((uint64_t)(arg1[4]) * ((arg1[4]) * (uint32_t)0x2));
  uint64_t x56 = ((uint64_t)(arg1[3]) * x4);
  uint64_t x57 = ((uint64_t)(arg1[3]) * x3);
  uint64_t x58 = ((uint64_t)(arg1[3]) * x9);
  uint64_t x59 = ((uint64_t)(arg1[3]) * x8);
  uint64_t x60 = ((uint64_t)(arg1[3]) * x14);
  uint64_t x61 = ((uint64_t)(arg1[3]) * x13);
  uint64_t x62 = ((uint64_t)(arg1[3]) * x20);
  uint64_t x63 = ((uint64_t)(arg1[3]) * x21);
  uint64_t x64 = ((uint64_t)(arg1[3]) * (arg1[3]));
  uint64_t x65 = ((uint64_t)(arg1[2]) * x4);
  uint64_t x66 = ((uint64_t)(arg1[2]) * x3);
  uint64_t x67 = ((uint64_t)(arg1[2]) * (x9 * (uint32_t)0x2));
  uint64_t x68 = ((uint64_t)(arg1[2]) * (x8 * (uint32_t)0x2));
  uint64_t x69 = ((uint64_t)(arg1[2]) * x15);
  uint64_t x70 = ((uint64_t)(arg1[2]) * x20);
  uint64_t x71 = ((uint64_t)(arg1[2]) * (x21 * (uint32_t)0x2));
  uint64_t x72 = ((uint64_t)(arg1[2]) * x22);
  uint64_t x73 = ((uint64_t)(arg1[2]) * (arg1[2]));
  uint64_t x74 = ((uint64_t)(arg1[1]) * (x4 * (uint32_t)0x2));
  uint64_t x75 = ((uint64_t)(arg1[1]) * (x3 * (uint32_t)0x2));
  uint64_t x76 = ((uint64_t)(arg1[1]) * (x10 * (uint32_t)0x2));
  uint64_t x77 = ((uint64_t)(arg1[1]) * x15);
  uint64_t x78 = ((uint64_t)(arg1[1]) * (x20 * (uint32_t)0x2));
  uint64_t x79 = ((uint64_t)(arg1[1]) * (x21 * (uint32_t)0x2));
  uint64_t x80 = ((uint64_t)(arg1[1]) * x22);
  uint64_t x81 = ((uint64_t)(arg1[1]) * (x23 * (uint32_t)0x2));
  uint64_t x82 = ((uint64_t)(arg1[1]) * ((arg1[1]) * (uint32_t)0x2));
  uint64_t x83 = ((uint64_t)(arg1[0]) * x5);
  uint64_t x84 = ((uint64_t)(arg1[0]) * x10);
  uint64_t x85 = ((uint64_t)(arg1[0]) * x15);
  uint64_t x86 = ((uint64_t)(arg1[0]) * x20);
  uint64_t x87 = ((uint64_t)(arg1[0]) * x21);
  uint64_t x88 = ((uint64_t)(arg1[0]) * x22);
  uint64_t x89 = ((uint64_t)(arg1[0]) * x23);
  uint64_t x90 = ((uint64_t)(arg1[0]) * x24);
  uint64_t x91 = ((uint64_t)(arg1[0]) * (arg1[0]));
  uint64_t x92 = (x89 + (x82 + (x56 + (x49 + x43))));
  uint32_t x93 = (uint32_t)(x92 >> 21);
  uint32_t x94 = (uint32_t)(x92 & UINT32_C(0x1fffff));
  uint64_t x95 = (x83 + (x76 + (x69 + (x62 + (x55 + (x34 + x32))))));
  uint64_t x96 = (x84 + (x77 + (x70 + (x63 + (x40 + (x36 + x29))))));
  uint64_t x97 = (x85 + (x78 + (x71 + (x64 + (x48 + (x42 + (x38 + x30)))))));
  uint64_t x98 = (x86 + (x79 + (x72 + (x57 + (x50 + (x44 + (x33 + x31)))))));
  uint64_t x99 = (x87 + (x80 + (x73 + (x66 + (x59 + (x52 + (x46 + (x39 + (x35 + x27)))))))));
  uint64_t x100 = (x88 + (x81 + (x75 + (x68 + (x61 + (x54 + (x47 + (x41 + (x37 + x28)))))))));
  uint64_t x101 = (x90 + (x65 + (x58 + (x51 + (x45 + x25)))));
  uint64_t x102 = (x91 + (x74 + (x67 + (x60 + (x53 + x26)))));
  uint64_t x103 = (x93 + x100);
  uint32_t x104 = (uint32_t)(x95 >> 21);
  uint32_t x105 = (uint32_t)(x95 & UINT32_C(0x1fffff));
  uint64_t x106 = (x103 + x104);
  uint32_t x107 = (uint32_t)(x106 >> 22);
  uint32_t x108 = (uint32_t)(x106 & UINT32_C(0x3fffff));
  uint64_t x109 = (x102 + x104);
  uint64_t x110 = (x107 + x99);
  uint32_t x111 = (uint32_t)(x109 >> 22);
  uint32_t x112 = (uint32_t)(x109 & UINT32_C(0x3fffff));
  uint64_t x113 = (x111 + x101);
  uint32_t x114 = (uint32_t)(x110 >> 21);
  uint32_t x115 = (uint32_t)(x110 & UINT32_C(0x1fffff));
  uint64_t x116 = (x114 + x98);
  uint32_t x117 = (uint32_t)(x113 >> 21);
  uint32_t x118 = (uint32_t)(x113 & UINT32_C(0x1fffff));
  uint32_t x119 = (x117 + x94);
  uint32_t x120 = (uint32_t)(x116 >> 21);
  uint32_t x121 = (uint32_t)(x116 & UINT32_C(0x1fffff));
  uint64_t x122 = (x120 + x97);
  uint32_t x123 = (x119 >> 21);
  uint32_t x124 = (x119 & UINT32_C(0x1fffff));
  uint32_t x125 = (x123 + x108);
  uint32_t x126 = (uint32_t)(x122 >> 22);
  uint32_t x127 = (uint32_t)(x122 & UINT32_C(0x3fffff));
  uint64_t x128 = (x126 + x96);
  uint32_t x129 = (uint32_t)(x128 >> 21);
  uint32_t x130 = (uint32_t)(x128 & UINT32_C(0x1fffff));
  uint32_t x131 = (x129 + x105);
  uint32_t x132 = (x131 >> 21);
  uint32_t x133 = (x131 & UINT32_C(0x1fffff));
  uint32_t x134 = (x125 + x132);
  fiat_p192_uint1 x135 = (fiat_p192_uint1)(x134 >> 22);
  uint32_t x136 = (x134 & UINT32_C(0x3fffff));
  uint32_t x137 = (x112 + x132);
  uint32_t x138 = (x135 + x115);
  fiat_p192_uint1 x139 = (fiat_p192_uint1)(x137 >> 22);
  uint32_t x140 = (x137 & UINT32_C(0x3fffff));
  uint32_t x141 = (x139 + x118);
  out1[0] = x140;
  out1[1] = x141;
  out1[2] = x124;
  out1[3] = x136;
  out1[4] = x138;
  out1[5] = x121;
  out1[6] = x127;
  out1[7] = x130;
  out1[8] = x133;
}

/*
 * The function fiat_p192_carry reduces a field element.
 * Postconditions:
 *   eval out1 mod m = eval arg1 mod m
 *
 * Input Bounds:
 *   arg1: [[0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999]]
 * Output Bounds:
 *   out1: [[0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333]]
 */
static void fiat_p192_carry(uint32_t out1[9], const uint32_t arg1[9]) {
  uint32_t x1 = (arg1[2]);
  uint32_t x2 = (arg1[8]);
  uint32_t x3 = (x2 >> 21);
  uint32_t x4 = (((x1 >> 21) + (arg1[3])) + x3);
  uint32_t x5 = ((arg1[0]) + x3);
  uint32_t x6 = ((x4 >> 22) + (arg1[4]));
  uint32_t x7 = ((x5 >> 22) + (arg1[1]));
  uint32_t x8 = ((x6 >> 21) + (arg1[5]));
  uint32_t x9 = ((x7 >> 21) + (x1 & UINT32_C(0x1fffff)));
  uint32_t x10 = ((x8 >> 21) + (arg1[6]));
  uint32_t x11 = ((x10 >> 22) + (arg1[7]));
  uint32_t x12 = ((x11 >> 21) + (x2 & UINT32_C(0x1fffff)));
  fiat_p192_uint1 x13 = (fiat_p192_uint1)(x12 >> 21);
  uint32_t x14 = (((fiat_p192_uint1)(x9 >> 21) + (x4 & UINT32_C(0x3fffff))) + (uint32_t)x13);
  uint32_t x15 = ((x5 & UINT32_C(0x3fffff)) + (uint32_t)x13);
  uint32_t x16 = (x15 & UINT32_C(0x3fffff));
  uint32_t x17 = ((fiat_p192_uint1)(x15 >> 22) + (x7 & UINT32_C(0x1fffff)));
  uint32_t x18 = (x9 & UINT32_C(0x1fffff));
  uint32_t x19 = (x14 & UINT32_C(0x3fffff));
  uint32_t x20 = ((fiat_p192_uint1)(x14 >> 22) + (x6 & UINT32_C(0x1fffff)));
  uint32_t x21 = (x8 & UINT32_C(0x1fffff));
  uint32_t x22 = (x10 & UINT32_C(0x3fffff));
  uint32_t x23 = (x11 & UINT32_C(0x1fffff));
  uint32_t x24 = (x12 & UINT32_C(0x1fffff));
  out1[0] = x16;
  out1[1] = x17;
  out1[2] = x18;
  out1[3] = x19;
  out1[4] = x20;
  out1[5] = x21;
  out1[6] = x22;
  out1[7] = x23;
  out1[8] = x24;
}

/*
 * The function fiat_p192_add adds two field elements.
 * Postconditions:
 *   eval out1 mod m = (eval arg1 + eval arg2) mod m
 *
 * Input Bounds:
 *   arg1: [[0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333]]
 *   arg2: [[0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333]]
 * Output Bounds:
 *   out1: [[0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999]]
 */
static void fiat_p192_add(uint32_t out1[9], const uint32_t arg1[9], const uint32_t arg2[9]) {
  uint32_t x1 = ((arg1[0]) + (arg2[0]));
  uint32_t x2 = ((arg1[1]) + (arg2[1]));
  uint32_t x3 = ((arg1[2]) + (arg2[2]));
  uint32_t x4 = ((arg1[3]) + (arg2[3]));
  uint32_t x5 = ((arg1[4]) + (arg2[4]));
  uint32_t x6 = ((arg1[5]) + (arg2[5]));
  uint32_t x7 = ((arg1[6]) + (arg2[6]));
  uint32_t x8 = ((arg1[7]) + (arg2[7]));
  uint32_t x9 = ((arg1[8]) + (arg2[8]));
  out1[0] = x1;
  out1[1] = x2;
  out1[2] = x3;
  out1[3] = x4;
  out1[4] = x5;
  out1[5] = x6;
  out1[6] = x7;
  out1[7] = x8;
  out1[8] = x9;
}

/*
 * The function fiat_p192_sub subtracts two field elements.
 * Postconditions:
 *   eval out1 mod m = (eval arg1 - eval arg2) mod m
 *
 * Input Bounds:
 *   arg1: [[0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333]]
 *   arg2: [[0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333]]
 * Output Bounds:
 *   out1: [[0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999]]
 */
static void fiat_p192_sub(uint32_t out1[9], const uint32_t arg1[9], const uint32_t arg2[9]) {
  uint32_t x1 = ((UINT32_C(0x7ffffe) + (arg1[0])) - (arg2[0]));
  uint32_t x2 = ((UINT32_C(0x3ffffe) + (arg1[1])) - (arg2[1]));
  uint32_t x3 = ((UINT32_C(0x3ffffe) + (arg1[2])) - (arg2[2]));
  uint32_t x4 = ((UINT32_C(0x7ffffc) + (arg1[3])) - (arg2[3]));
  uint32_t x5 = ((UINT32_C(0x3ffffe) + (arg1[4])) - (arg2[4]));
  uint32_t x6 = ((UINT32_C(0x3ffffe) + (arg1[5])) - (arg2[5]));
  uint32_t x7 = ((UINT32_C(0x7ffffe) + (arg1[6])) - (arg2[6]));
  uint32_t x8 = ((UINT32_C(0x3ffffe) + (arg1[7])) - (arg2[7]));
  uint32_t x9 = ((UINT32_C(0x3ffffe) + (arg1[8])) - (arg2[8]));
  out1[0] = x1;
  out1[1] = x2;
  out1[2] = x3;
  out1[3] = x4;
  out1[4] = x5;
  out1[5] = x6;
  out1[6] = x7;
  out1[7] = x8;
  out1[8] = x9;
}

/*
 * The function fiat_p192_opp negates a field element.
 * Postconditions:
 *   eval out1 mod m = -eval arg1 mod m
 *
 * Input Bounds:
 *   arg1: [[0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333]]
 * Output Bounds:
 *   out1: [[0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999], [0x0 ~> 0xd33332], [0x0 ~> 0x699999], [0x0 ~> 0x699999]]
 */
static void fiat_p192_opp(uint32_t out1[9], const uint32_t arg1[9]) {
  uint32_t x1 = (UINT32_C(0x7ffffe) - (arg1[0]));
  uint32_t x2 = (UINT32_C(0x3ffffe) - (arg1[1]));
  uint32_t x3 = (UINT32_C(0x3ffffe) - (arg1[2]));
  uint32_t x4 = (UINT32_C(0x7ffffc) - (arg1[3]));
  uint32_t x5 = (UINT32_C(0x3ffffe) - (arg1[4]));
  uint32_t x6 = (UINT32_C(0x3ffffe) - (arg1[5]));
  uint32_t x7 = (UINT32_C(0x7ffffe) - (arg1[6]));
  uint32_t x8 = (UINT32_C(0x3ffffe) - (arg1[7]));
  uint32_t x9 = (UINT32_C(0x3ffffe) - (arg1[8]));
  out1[0] = x1;
  out1[1] = x2;
  out1[2] = x3;
  out1[3] = x4;
  out1[4] = x5;
  out1[5] = x6;
  out1[6] = x7;
  out1[7] = x8;
  out1[8] = x9;
}

/*
 * The function fiat_p192_selectznz is a multi-limb conditional select.
 * Postconditions:
 *   eval out1 = (if arg1 = 0 then eval arg2 else eval arg3)
 *
 * Input Bounds:
 *   arg1: [0x0 ~> 0x1]
 *   arg2: [[0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff]]
 *   arg3: [[0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff]]
 * Output Bounds:
 *   out1: [[0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff], [0x0 ~> 0xffffffff]]
 */
static void fiat_p192_selectznz(uint32_t out1[9], fiat_p192_uint1 arg1, const uint32_t arg2[9], const uint32_t arg3[9]) {
  uint32_t x1;
  fiat_p192_cmovznz_u32(&x1, arg1, (arg2[0]), (arg3[0]));
  uint32_t x2;
  fiat_p192_cmovznz_u32(&x2, arg1, (arg2[1]), (arg3[1]));
  uint32_t x3;
  fiat_p192_cmovznz_u32(&x3, arg1, (arg2[2]), (arg3[2]));
  uint32_t x4;
  fiat_p192_cmovznz_u32(&x4, arg1, (arg2[3]), (arg3[3]));
  uint32_t x5;
  fiat_p192_cmovznz_u32(&x5, arg1, (arg2[4]), (arg3[4]));
  uint32_t x6;
  fiat_p192_cmovznz_u32(&x6, arg1, (arg2[5]), (arg3[5]));
  uint32_t x7;
  fiat_p192_cmovznz_u32(&x7, arg1, (arg2[6]), (arg3[6]));
  uint32_t x8;
  fiat_p192_cmovznz_u32(&x8, arg1, (arg2[7]), (arg3[7]));
  uint32_t x9;
  fiat_p192_cmovznz_u32(&x9, arg1, (arg2[8]), (arg3[8]));
  out1[0] = x1;
  out1[1] = x2;
  out1[2] = x3;
  out1[3] = x4;
  out1[4] = x5;
  out1[5] = x6;
  out1[6] = x7;
  out1[7] = x8;
  out1[8] = x9;
}

/*
 * The function fiat_p192_to_bytes serializes a field element to bytes in little-endian order.
 * Postconditions:
 *   out1 = map (λ x, ⌊((eval arg1 mod m) mod 2^(8 * (x + 1))) / 2^(8 * x)⌋) [0..23]
 *
 * Input Bounds:
 *   arg1: [[0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333]]
 * Output Bounds:
 *   out1: [[0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff]]
 */
static void fiat_p192_to_bytes(uint8_t out1[24], const uint32_t arg1[9]) {
  uint32_t x1;
  fiat_p192_uint1 x2;
  fiat_p192_subborrowx_u22(&x1, &x2, 0x0, (arg1[0]), UINT32_C(0x3fffff));
  uint32_t x3;
  fiat_p192_uint1 x4;
  fiat_p192_subborrowx_u21(&x3, &x4, x2, (arg1[1]), UINT32_C(0x1fffff));
  uint32_t x5;
  fiat_p192_uint1 x6;
  fiat_p192_subborrowx_u21(&x5, &x6, x4, (arg1[2]), UINT32_C(0x1fffff));
  uint32_t x7;
  fiat_p192_uint1 x8;
  fiat_p192_subborrowx_u22(&x7, &x8, x6, (arg1[3]), UINT32_C(0x3ffffe));
  uint32_t x9;
  fiat_p192_uint1 x10;
  fiat_p192_subborrowx_u21(&x9, &x10, x8, (arg1[4]), UINT32_C(0x1fffff));
  uint32_t x11;
  fiat_p192_uint1 x12;
  fiat_p192_subborrowx_u21(&x11, &x12, x10, (arg1[5]), UINT32_C(0x1fffff));
  uint32_t x13;
  fiat_p192_uint1 x14;
  fiat_p192_subborrowx_u22(&x13, &x14, x12, (arg1[6]), UINT32_C(0x3fffff));
  uint32_t x15;
  fiat_p192_uint1 x16;
  fiat_p192_subborrowx_u21(&x15, &x16, x14, (arg1[7]), UINT32_C(0x1fffff));
  uint32_t x17;
  fiat_p192_uint1 x18;
  fiat_p192_subborrowx_u21(&x17, &x18, x16, (arg1[8]), UINT32_C(0x1fffff));
  uint32_t x19;
  fiat_p192_cmovznz_u32(&x19, x18, 0x0, UINT32_C(0xffffffff));
  uint32_t x20;
  fiat_p192_uint1 x21;
  fiat_p192_addcarryx_u22(&x20, &x21, 0x0, x1, (x19 & UINT32_C(0x3fffff)));
  uint32_t x22;
  fiat_p192_uint1 x23;
  fiat_p192_addcarryx_u21(&x22, &x23, x21, x3, (x19 & UINT32_C(0x1fffff)));
  uint32_t x24;
  fiat_p192_uint1 x25;
  fiat_p192_addcarryx_u21(&x24, &x25, x23, x5, (x19 & UINT32_C(0x1fffff)));
  uint32_t x26;
  fiat_p192_uint1 x27;
  fiat_p192_addcarryx_u22(&x26, &x27, x25, x7, (x19 & UINT32_C(0x3ffffe)));
  uint32_t x28;
  fiat_p192_uint1 x29;
  fiat_p192_addcarryx_u21(&x28, &x29, x27, x9, (x19 & UINT32_C(0x1fffff)));
  uint32_t x30;
  fiat_p192_uint1 x31;
  fiat_p192_addcarryx_u21(&x30, &x31, x29, x11, (x19 & UINT32_C(0x1fffff)));
  uint32_t x32;
  fiat_p192_uint1 x33;
  fiat_p192_addcarryx_u22(&x32, &x33, x31, x13, (x19 & UINT32_C(0x3fffff)));
  uint32_t x34;
  fiat_p192_uint1 x35;
  fiat_p192_addcarryx_u21(&x34, &x35, x33, x15, (x19 & UINT32_C(0x1fffff)));
  uint32_t x36;
  fiat_p192_uint1 x37;
  fiat_p192_addcarryx_u21(&x36, &x37, x35, x17, (x19 & UINT32_C(0x1fffff)));
  uint32_t x38 = (x36 << 3);
  uint32_t x39 = (x34 << 6);
  uint32_t x40 = (x30 << 3);
  uint32_t x41 = (x28 << 6);
  uint32_t x42 = (x24 << 3);
  uint32_t x43 = (x22 << 6);
  uint32_t x44 = (x20 >> 8);
  uint8_t x45 = (uint8_t)(x20 & UINT8_C(0xff));
  uint8_t x46 = (uint8_t)(x44 >> 8);
  uint8_t x47 = (uint8_t)(x44 & UINT8_C(0xff));
  uint32_t x48 = (x46 + x43);
  uint32_t x49 = (x48 >> 8);
  uint8_t x50 = (uint8_t)(x48 & UINT8_C(0xff));
  uint32_t x51 = (x49 >> 8);
  uint8_t x52 = (uint8_t)(x49 & UINT8_C(0xff));
  uint8_t x53 = (uint8_t)(x51 >> 8);
  uint8_t x54 = (uint8_t)(x51 & UINT8_C(0xff));
  uint32_t x55 = (x53 + x42);
  uint32_t x56 = (x55 >> 8);
  uint8_t x57 = (uint8_t)(x55 & UINT8_C(0xff));
  uint8_t x58 = (uint8_t)(x56 >> 8);
  uint8_t x59 = (uint8_t)(x56 & UINT8_C(0xff));
  uint8_t x60 = (uint8_t)(x58 & UINT8_C(0xff));
  uint32_t x61 = (x26 >> 8);
  uint8_t x62 = (uint8_t)(x26 & UINT8_C(0xff));
  uint8_t x63 = (uint8_t)(x61 >> 8);
  uint8_t x64 = (uint8_t)(x61 & UINT8_C(0xff));
  uint32_t x65 = (x63 + x41);
  uint32_t x66 = (x65 >> 8);
  uint8_t x67 = (uint8_t)(x65 & UINT8_C(0xff));
  uint32_t x68 = (x66 >> 8);
  uint8_t x69 = (uint8_t)(x66 & UINT8_C(0xff));
  uint8_t x70 = (uint8_t)(x68 >> 8);
  uint8_t x71 = (uint8_t)(x68 & UINT8_C(0xff));
  uint32_t x72 = (x70 + x40);
  uint32_t x73 = (x72 >> 8);
  uint8_t x74 = (uint8_t)(x72 & UINT8_C(0xff));
  uint8_t x75 = (uint8_t)(x73 >> 8);
  uint8_t x76 = (uint8_t)(x73 & UINT8_C(0xff));
  uint8_t x77 = (uint8_t)(x75 & UINT8_C(0xff));
  uint32_t x78 = (x32 >> 8);
  uint8_t x79 = (uint8_t)(x32 & UINT8_C(0xff));
  uint8_t x80 = (uint8_t)(x78 >> 8);
  uint8_t x81 = (uint8_t)(x78 & UINT8_C(0xff));
  uint32_t x82 = (x80 + x39);
  uint32_t x83 = (x82 >> 8);
  uint8_t x84 = (uint8_t)(x82 & UINT8_C(0xff));
  uint32_t x85 = (x83 >> 8);
  uint8_t x86 = (uint8_t)(x83 & UINT8_C(0xff));
  uint8_t x87 = (uint8_t)(x85 >> 8);
  uint8_t x88 = (uint8_t)(x85 & UINT8_C(0xff));
  uint32_t x89 = (x87 + x38);
  uint32_t x90 = (x89 >> 8);
  uint8_t x91 = (uint8_t)(x89 & UINT8_C(0xff));
  uint8_t x92 = (uint8_t)(x90 >> 8);
  uint8_t x93 = (uint8_t)(x90 & UINT8_C(0xff));
  out1[0] = x45;
  out1[1] = x47;
  out1[2] = x50;
  out1[3] = x52;
  out1[4] = x54;
  out1[5] = x57;
  out1[6] = x59;
  out1[7] = x60;
  out1[8] = x62;
  out1[9] = x64;
  out1[10] = x67;
  out1[11] = x69;
  out1[12] = x71;
  out1[13] = x74;
  out1[14] = x76;
  out1[15] = x77;
  out1[16] = x79;
  out1[17] = x81;
  out1[18] = x84;
  out1[19] = x86;
  out1[20] = x88;
  out1[21] = x91;
  out1[22] = x93;
  out1[23] = x92;
}

/*
 * The function fiat_p192_from_bytes deserializes a field element from bytes in little-endian order.
 * Postconditions:
 *   eval out1 mod m = bytes_eval arg1 mod m
 *
 * Input Bounds:
 *   arg1: [[0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff], [0x0 ~> 0xff]]
 * Output Bounds:
 *   out1: [[0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333], [0x0 ~> 0x466666], [0x0 ~> 0x233333], [0x0 ~> 0x233333]]
 */
static void fiat_p192_from_bytes(uint32_t out1[9], const uint8_t arg1[24]) {
  uint32_t x1 = ((uint32_t)(arg1[23]) << 13);
  uint32_t x2 = ((uint32_t)(arg1[22]) << 5);
  uint32_t x3 = ((uint32_t)(arg1[21]) << 18);
  uint32_t x4 = ((uint32_t)(arg1[20]) << 10);
  uint32_t x5 = ((uint32_t)(arg1[19]) << 2);
  uint32_t x6 = ((uint32_t)(arg1[18]) << 16);
  uint32_t x7 = ((uint32_t)(arg1[17]) << 8);
  uint8_t x8 = (arg1[16]);
  uint32_t x9 = ((uint32_t)(arg1[15]) << 13);
  uint32_t x10 = ((uint32_t)(arg1[14]) << 5);
  uint32_t x11 = ((uint32_t)(arg1[13]) << 18);
  uint32_t x12 = ((uint32_t)(arg1[12]) << 10);
  uint32_t x13 = ((uint32_t)(arg1[11]) << 2);
  uint32_t x14 = ((uint32_t)(arg1[10]) << 16);
  uint32_t x15 = ((uint32_t)(arg1[9]) << 8);
  uint8_t x16 = (arg1[8]);
  uint32_t x17 = ((uint32_t)(arg1[7]) << 13);
  uint32_t x18 = ((uint32_t)(arg1[6]) << 5);
  uint32_t x19 = ((uint32_t)(arg1[5]) << 18);
  uint32_t x20 = ((uint32_t)(arg1[4]) << 10);
  uint32_t x21 = ((uint32_t)(arg1[3]) << 2);
  uint32_t x22 = ((uint32_t)(arg1[2]) << 16);
  uint32_t x23 = ((uint32_t)(arg1[1]) << 8);
  uint8_t x24 = (arg1[0]);
  uint32_t x25 = (x24 + (x23 + x22));
  uint8_t x26 = (uint8_t)(x25 >> 22);
  uint32_t x27 = (x25 & UINT32_C(0x3fffff));
  uint32_t x28 = (x2 + x1);
  uint32_t x29 = (x5 + (x4 + x3));
  uint32_t x30 = (x8 + (x7 + x6));
  uint32_t x31 = (x10 + x9);
  uint32_t x32 = (x13 + (x12 + x11));
  uint32_t x33 = (x16 + (x15 + x14));
  uint32_t x34 = (x18 + x17);
  uint32_t x35 = (x21 + (x20 + x19));
  uint32_t x36 = (x26 + x35);
  uint8_t x37 = (uint8_t)(x36 >> 21);
  uint32_t x38 = (x36 & UINT32_C(0x1fffff));
  uint32_t x39 = (x37 + x34);
  uint32_t x40 = (x39 & UINT32_C(0x1fffff));
  uint8_t x41 = (uint8_t)(x33 >> 22);
  uint32_t x42 = (x33 & UINT32_C(0x3fffff));
  uint32_t x43 = (x41 + x32);
  uint8_t x44 = (uint8_t)(x43 >> 21);
  uint32_t x45 = (x43 & UINT32_C(0x1fffff));
  uint32_t x46 = (x44 + x31);
  uint32_t x47 = (x46 & UINT32_C(0x1fffff));
  uint8_t x48 = (uint8_t)(x30 >> 22);
  uint32_t x49 = (x30 & UINT32_C(0x3fffff));
  uint32_t x50 = (x48 + x29);
  uint8_t x51 = (uint8_t)(x50 >> 21);
  uint32_t x52 = (x50 & UINT32_C(0x1fffff));
  uint32_t x53 = (x51 + x28);
  out1[0] = x27;
  out1[1] = x38;
  out1[2] = x40;
  out1[3] = x42;
  out1[4] = x45;
  out1[5] = x47;
  out1[6] = x49;
  out1[7] = x52;
  out1[8] = x53;
}
