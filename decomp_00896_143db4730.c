// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143db4730 ripemd160_block_data_order body=6093 status=ok
// SIG undefined ripemd160_block_data_order(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ripemd160_block_data_order(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  
  if (param_3 != 0) {
    uVar26 = param_1[1];
    iVar19 = param_1[4];
    uVar16 = param_1[3];
    uVar33 = param_1[2];
    do {
      param_3 = param_3 + -1;
      uVar23 = uVar33 << 10 | uVar33 >> 0x16;
      iVar3 = *param_2;
      uVar25 = uVar26 << 10 | uVar26 >> 0x16;
      uVar17 = (uVar33 ^ uVar16 ^ uVar26) + *param_1 + iVar3;
      iVar4 = param_2[1];
      uVar17 = (uVar17 * 0x800 | uVar17 >> 0x15) + iVar19;
      uVar27 = (uVar26 ^ uVar23 ^ uVar17) + iVar19 + iVar4;
      iVar5 = param_2[2];
      uVar27 = (uVar27 * 0x4000 | uVar27 >> 0x12) + uVar16;
      uVar18 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar17 = (uVar27 ^ uVar25 ^ uVar17) + uVar16 + iVar5;
      iVar6 = param_2[3];
      uVar17 = (uVar17 * 0x8000 | uVar17 >> 0x11) + uVar23;
      iVar7 = param_2[4];
      uVar28 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar27 = (uVar27 ^ uVar17 ^ uVar18) + iVar6 + uVar23;
      iVar8 = param_2[5];
      uVar21 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar25;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar17 = (uVar28 ^ uVar17 ^ uVar21) + iVar7 + uVar25;
      uVar17 = (uVar17 * 0x20 | uVar17 >> 0x1b) + uVar18;
      iVar9 = param_2[6];
      uVar22 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar18 = (uVar27 ^ uVar21 ^ uVar17) + iVar8 + uVar18;
      uVar18 = (uVar18 * 0x100 | uVar18 >> 0x18) + uVar28;
      uVar24 = uVar17 * 0x400 | uVar17 >> 0x16;
      iVar1 = param_2[7];
      uVar28 = (uVar22 ^ uVar17 ^ uVar18) + iVar9 + uVar28;
      uVar21 = (uVar28 * 0x80 | uVar28 >> 0x19) + uVar27;
      iVar10 = param_2[8];
      uVar27 = (uVar21 ^ uVar24 ^ uVar18) + iVar1 + uVar27;
      uVar18 = uVar18 * 0x400 | uVar18 >> 0x16;
      iVar20 = param_2[9];
      uVar28 = (uVar27 * 0x200 | uVar27 >> 0x17) + uVar22;
      uVar17 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar22 = (uVar21 ^ uVar28 ^ uVar18) + iVar10 + uVar22;
      iVar11 = param_2[10];
      uVar27 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar24;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar24 = (uVar17 ^ uVar28 ^ uVar27) + iVar20 + uVar24;
      uVar28 = (uVar24 * 0x2000 | uVar24 >> 0x13) + uVar18;
      iVar12 = param_2[0xb];
      uVar22 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar18 = (uVar21 ^ uVar27 ^ uVar28) + iVar11 + uVar18;
      uVar27 = (uVar18 * 0x4000 | uVar18 >> 0x12) + uVar17;
      iVar13 = param_2[0xc];
      uVar17 = (uVar22 ^ uVar28 ^ uVar27) + iVar12 + uVar17;
      uVar24 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar17 = (uVar17 * 0x8000 | uVar17 >> 0x11) + uVar21;
      uVar21 = (uVar17 ^ uVar24 ^ uVar27) + iVar13 + uVar21;
      iVar14 = param_2[0xd];
      uVar18 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      iVar2 = param_2[0xe];
      uVar28 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar22;
      uVar22 = (uVar17 ^ uVar28 ^ uVar18) + iVar14 + uVar22;
      iVar15 = param_2[0xf];
      uVar17 = (uVar22 * 0x80 | uVar22 >> 0x19) + uVar24;
      param_2 = param_2 + 0x10;
      uVar22 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar24 = (uVar27 ^ uVar28 ^ uVar17) + iVar2 + uVar24;
      uVar21 = (uVar24 * 0x200 | uVar24 >> 0x17) + uVar18;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar22 ^ uVar17 ^ uVar21) + iVar15 + uVar18;
      uVar18 = (uVar18 * 0x100 | uVar18 >> 0x18) + uVar27;
      uVar27 = uVar27 + ((uVar28 ^ uVar21) & uVar18 ^ uVar28) + 0x5a827999 + iVar1;
      uVar17 = (uVar27 * 0x80 | uVar27 >> 0x19) + uVar22;
      uVar21 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar24 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar22 = uVar22 + ((uVar21 ^ uVar18) & uVar17 ^ uVar21) + 0x5a827999 + iVar7;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar22 * 0x40 | uVar22 >> 0x1a) + uVar28;
      uVar28 = uVar28 + ((uVar17 ^ uVar24) & uVar18 ^ uVar24) + 0x5a827999 + iVar14;
      uVar17 = (uVar28 * 0x100 | uVar28 >> 0x18) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar27 ^ uVar18) & uVar17 ^ uVar27) + 0x5a827999 + iVar4;
      uVar18 = (uVar21 * 0x2000 | uVar21 >> 0x13) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((uVar22 ^ uVar17) & uVar18 ^ uVar22) + 0x5a827999 + iVar11;
      uVar24 = (uVar24 * 0x800 | uVar24 >> 0x15) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar28 ^ uVar18) & uVar24 ^ uVar28) + 0x5a827999 + iVar9;
      uVar17 = (uVar27 * 0x200 | uVar27 >> 0x17) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((uVar21 ^ uVar24) & uVar17 ^ uVar21) + 0x5a827999 + iVar15;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar22 * 0x80 | uVar22 >> 0x19) + uVar28;
      uVar28 = uVar28 + ((uVar17 ^ uVar29) & uVar18 ^ uVar29) + 0x5a827999 + iVar6;
      uVar17 = (uVar28 * 0x8000 | uVar28 >> 0x11) + uVar21;
      uVar21 = uVar21 + ((uVar27 ^ uVar18) & uVar17 ^ uVar27) + 0x5a827999 + iVar13;
      uVar28 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar29;
      uVar18 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar22 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar18 ^ uVar17) & uVar28 ^ uVar18) + 0x5a827999 + iVar3;
      uVar24 = (uVar29 * 0x1000 | uVar29 >> 0x14) + uVar27;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar27 = uVar27 + ((uVar22 ^ uVar28) & uVar24 ^ uVar22) + 0x5a827999 + iVar20;
      uVar17 = (uVar27 * 0x8000 | uVar27 >> 0x11) + uVar18;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar18 = uVar18 + ((uVar21 ^ uVar24) & uVar17 ^ uVar21) + 0x5a827999 + iVar8;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar18 * 0x200 | uVar18 >> 0x17) + uVar22;
      uVar22 = uVar22 + ((uVar17 ^ uVar29) & uVar18 ^ uVar29) + 0x5a827999 + iVar5;
      uVar17 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar27 ^ uVar18) & uVar17 ^ uVar27) + 0x5a827999 + iVar2;
      uVar18 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar22 ^ uVar17) & uVar18 ^ uVar22) + 0x5a827999 + iVar12;
      uVar24 = (uVar29 * 0x2000 | uVar29 >> 0x13) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar28 ^ uVar18) & uVar24 ^ uVar28) + 0x5a827999 + iVar10;
      uVar17 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar22;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar21) + 0x6ed9eba1 + iVar6;
      uVar18 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar28;
      uVar24 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar24) + 0x6ed9eba1 + iVar11;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar17 = (uVar28 * 0x2000 | uVar28 >> 0x13) + uVar21;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6ed9eba1 + iVar2;
      uVar18 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((~uVar17 | uVar18) ^ uVar22) + 0x6ed9eba1 + iVar7;
      uVar24 = (uVar24 * 0x80 | uVar24 >> 0x19) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar24) ^ uVar28) + 0x6ed9eba1 + iVar20;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar17 = (uVar27 * 0x4000 | uVar27 >> 0x12) + uVar22;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar21) + 0x6ed9eba1 + iVar15;
      uVar18 = (uVar22 * 0x200 | uVar22 >> 0x17) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar29) + 0x6ed9eba1 + iVar10;
      uVar17 = (uVar28 * 0x2000 | uVar28 >> 0x13) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6ed9eba1 + iVar4;
      uVar18 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar29;
      uVar29 = uVar29 + ((~uVar17 | uVar18) ^ uVar22) + 0x6ed9eba1 + iVar5;
      uVar24 = (uVar29 * 0x4000 | uVar29 >> 0x12) + uVar27;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar24) ^ uVar28) + 0x6ed9eba1 + iVar1;
      uVar17 = (uVar27 * 0x100 | uVar27 >> 0x18) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar21) + 0x6ed9eba1 + iVar3;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar22 * 0x2000 | uVar22 >> 0x13) + uVar28;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar29) + 0x6ed9eba1 + iVar9;
      uVar17 = (uVar28 * 0x40 | uVar28 >> 0x1a) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6ed9eba1 + iVar14;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar29;
      uVar29 = uVar29 + ((~uVar17 | uVar18) ^ uVar22) + 0x6ed9eba1 + iVar12;
      uVar24 = (uVar29 * 0x1000 | uVar29 >> 0x14) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar24) ^ uVar28) + 0x6ed9eba1 + iVar8;
      uVar17 = (uVar27 * 0x80 | uVar27 >> 0x19) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar21) + 0x6ed9eba1 + iVar13;
      uVar18 = (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar17 ^ uVar18) & uVar29 ^ uVar17) + 0x8f1bbcdc + iVar4;
      uVar17 = (uVar28 * 0x800 | uVar28 >> 0x15) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x8f1bbcdc + iVar20;
      uVar18 = (uVar21 * 0x1000 | uVar21 >> 0x14) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x8f1bbcdc + iVar12;
      uVar24 = (uVar29 * 0x4000 | uVar29 >> 0x12) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar24) & uVar28 ^ uVar18) + 0x8f1bbcdc + iVar11;
      uVar17 = (uVar27 * 0x8000 | uVar27 >> 0x11) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((uVar17 ^ uVar24) & uVar21 ^ uVar24) + 0x8f1bbcdc + iVar3;
      uVar18 = (uVar22 * 0x4000 | uVar22 >> 0x12) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar17 ^ uVar18) & uVar29 ^ uVar17) + 0x8f1bbcdc + iVar10;
      uVar17 = (uVar28 * 0x8000 | uVar28 >> 0x11) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x8f1bbcdc + iVar13;
      uVar18 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x8f1bbcdc + iVar7;
      uVar24 = (uVar29 * 0x100 | uVar29 >> 0x18) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar24) & uVar28 ^ uVar18) + 0x8f1bbcdc + iVar14;
      uVar17 = (uVar27 * 0x200 | uVar27 >> 0x17) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((uVar17 ^ uVar24) & uVar21 ^ uVar24) + 0x8f1bbcdc + iVar6;
      uVar18 = (uVar22 * 0x4000 | uVar22 >> 0x12) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar17 ^ uVar18) & uVar29 ^ uVar17) + 0x8f1bbcdc + iVar1;
      uVar17 = (uVar28 * 0x20 | uVar28 >> 0x1b) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x8f1bbcdc + iVar15;
      uVar18 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x8f1bbcdc + iVar2;
      uVar24 = (uVar29 * 0x100 | uVar29 >> 0x18) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar24) & uVar28 ^ uVar18) + 0x8f1bbcdc + iVar8;
      uVar17 = (uVar27 * 0x40 | uVar27 >> 0x1a) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((uVar17 ^ uVar24) & uVar21 ^ uVar24) + 0x8f1bbcdc + iVar9;
      uVar18 = (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar17 ^ uVar18) & uVar29 ^ uVar17) + 0x8f1bbcdc + iVar5;
      uVar17 = (uVar28 * 0x1000 | uVar28 >> 0x14) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar27 | uVar18) ^ uVar17) + 0xa953fd4e + iVar7;
      uVar18 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((~uVar22 | uVar17) ^ uVar18) + 0xa953fd4e + iVar3;
      uVar24 = (uVar29 * 0x8000 | uVar29 >> 0x11) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar28 | uVar18) ^ uVar24) + 0xa953fd4e + iVar8;
      uVar17 = (uVar27 * 0x20 | uVar27 >> 0x1b) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((~uVar21 | uVar24) ^ uVar17) + 0xa953fd4e + iVar20;
      uVar18 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar29 | uVar17) ^ uVar18) + 0xa953fd4e + iVar1;
      uVar17 = (uVar28 * 0x40 | uVar28 >> 0x1a) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar27 | uVar18) ^ uVar17) + 0xa953fd4e + iVar13;
      uVar28 = (uVar21 * 0x100 | uVar21 >> 0x18) + uVar29;
      uVar18 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((~uVar22 | uVar17) ^ uVar28) + 0xa953fd4e + iVar5;
      uVar24 = (uVar29 * 0x2000 | uVar29 >> 0x13) + uVar27;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar28) ^ uVar24) + 0xa953fd4e + iVar11;
      uVar17 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((~uVar21 | uVar24) ^ uVar17) + 0xa953fd4e + iVar2;
      uVar27 = (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar18;
      uVar18 = uVar18 + ((~uVar29 | uVar17) ^ uVar27) + 0xa953fd4e + iVar4;
      uVar17 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar22 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar21;
      uVar18 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar21 = uVar21 + ((~uVar17 | uVar27) ^ uVar22) + 0xa953fd4e + iVar6;
      uVar28 = (uVar21 * 0x2000 | uVar21 >> 0x13) + uVar29;
      uVar27 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar29 = uVar29 + ((~uVar18 | uVar22) ^ uVar28) + iVar10 + -0x56ac02b2;
      uVar21 = (uVar29 * 0x4000 | uVar29 >> 0x12) + uVar17;
      uVar22 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar17 = ((~uVar27 | uVar28) ^ uVar21) + iVar12 + -0x56ac02b2 + uVar17;
      uVar29 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar28 = (uVar17 * 0x800 | uVar17 >> 0x15) + uVar18;
      uVar17 = uVar18 + 0xa953fd4e + ((~uVar22 | uVar21) ^ uVar28) + iVar9;
      uVar30 = (uVar17 * 0x100 | uVar17 >> 0x18) + uVar27;
      uVar31 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar17 = uVar27 + 0xa953fd4e + ((~uVar29 | uVar28) ^ uVar30) + iVar15;
      uVar34 = (uVar17 * 0x20 | uVar17 >> 0x1b) + uVar22;
      uVar32 = uVar22 + 0xa953fd4e + ((~uVar31 | uVar30) ^ uVar34) + iVar14;
      uVar17 = iVar8 + 0x50a28be6 + ((~uVar16 | uVar33) ^ uVar26) + *param_1;
      uVar17 = (uVar17 * 0x100 | uVar17 >> 0x18) + iVar19;
      uVar27 = ((uVar26 | ~uVar23) ^ uVar17) + iVar19 + 0x50a28be6 + iVar2;
      uVar18 = (uVar27 * 0x200 | uVar27 >> 0x17) + uVar16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar17 = iVar1 + 0x50a28be6 + ((~uVar25 | uVar17) ^ uVar18) + uVar16;
      uVar17 = (uVar17 * 0x200 | uVar17 >> 0x17) + uVar23;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar18 = uVar23 + 0x50a28be6 + ((~uVar27 | uVar18) ^ uVar17) + iVar3;
      uVar18 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar25;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar17 = uVar25 + 0x50a28be6 + ((~uVar22 | uVar17) ^ uVar18) + iVar20;
      uVar23 = (uVar17 * 0x2000 | uVar17 >> 0x13) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar28 | uVar18) ^ uVar23) + 0x50a28be6 + iVar5;
      uVar17 = (uVar27 * 0x8000 | uVar27 >> 0x11) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((~uVar21 | uVar23) ^ uVar17) + 0x50a28be6 + iVar12;
      uVar18 = (uVar22 * 0x8000 | uVar22 >> 0x11) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar24 | uVar17) ^ uVar18) + 0x50a28be6 + iVar7;
      uVar17 = (uVar28 * 0x20 | uVar28 >> 0x1b) + uVar21;
      uVar21 = uVar21 + ((~uVar27 | uVar18) ^ uVar17) + 0x50a28be6 + iVar14;
      uVar28 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar24;
      uVar18 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar22 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((~uVar18 | uVar17) ^ uVar28) + 0x50a28be6 + iVar9;
      uVar23 = (uVar24 * 0x80 | uVar24 >> 0x19) + uVar27;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar27 = uVar27 + ((~uVar22 | uVar28) ^ uVar23) + 0x50a28be6 + iVar15;
      uVar17 = (uVar27 * 0x100 | uVar27 >> 0x18) + uVar18;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar18 = uVar18 + ((~uVar21 | uVar23) ^ uVar17) + 0x50a28be6 + iVar10;
      uVar18 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar22;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar18) + 0x50a28be6 + iVar4;
      uVar17 = (uVar22 * 0x4000 | uVar22 >> 0x12) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar27 | uVar18) ^ uVar17) + 0x50a28be6 + iVar11;
      uVar18 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((~uVar22 | uVar17) ^ uVar18) + 0x50a28be6 + iVar6;
      uVar23 = (uVar24 * 0x1000 | uVar24 >> 0x14) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar28 | uVar18) ^ uVar23) + 0x50a28be6 + iVar13;
      uVar17 = (uVar27 * 0x40 | uVar27 >> 0x1a) + uVar22;
      uVar22 = uVar22 + ((uVar23 ^ uVar17) & uVar21 ^ uVar23) + 0x5c4dd124 + iVar9;
      uVar18 = (uVar22 * 0x200 | uVar22 >> 0x17) + uVar28;
      uVar23 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar18 ^ uVar17) & uVar23 ^ uVar17) + 0x5c4dd124 + iVar12;
      uVar17 = (uVar28 * 0x2000 | uVar28 >> 0x13) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x5c4dd124 + iVar6;
      uVar18 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar23;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar23 = uVar23 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x5c4dd124 + iVar1;
      uVar23 = (uVar23 * 0x80 | uVar23 >> 0x19) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar23) & uVar28 ^ uVar18) + 0x5c4dd124 + iVar3;
      uVar17 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((uVar23 ^ uVar17) & uVar21 ^ uVar23) + 0x5c4dd124 + iVar14;
      uVar18 = (uVar22 * 0x100 | uVar22 >> 0x18) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar18 ^ uVar17) & uVar24 ^ uVar17) + 0x5c4dd124 + iVar8;
      uVar17 = (uVar28 * 0x200 | uVar28 >> 0x17) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x5c4dd124 + iVar11;
      uVar18 = (uVar21 * 0x800 | uVar21 >> 0x15) + uVar24;
      uVar24 = uVar24 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x5c4dd124 + iVar2;
      uVar23 = (uVar24 * 0x80 | uVar24 >> 0x19) + uVar27;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar23) & uVar28 ^ uVar18) + 0x5c4dd124 + iVar15;
      uVar17 = (uVar27 * 0x80 | uVar27 >> 0x19) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((uVar23 ^ uVar17) & uVar21 ^ uVar23) + 0x5c4dd124 + iVar10;
      uVar18 = (uVar22 * 0x1000 | uVar22 >> 0x14) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar18 ^ uVar17) & uVar24 ^ uVar17) + 0x5c4dd124 + iVar13;
      uVar17 = (uVar28 * 0x80 | uVar28 >> 0x19) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x5c4dd124 + iVar7;
      uVar28 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar24;
      uVar18 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((uVar17 ^ uVar28) & uVar22 ^ uVar17) + 0x5c4dd124 + iVar20;
      uVar23 = (uVar24 * 0x8000 | uVar24 >> 0x11) + uVar27;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar27 = uVar27 + ((uVar28 ^ uVar23) & uVar18 ^ uVar28) + 0x5c4dd124 + iVar4;
      uVar17 = (uVar27 * 0x2000 | uVar27 >> 0x13) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((uVar23 ^ uVar17) & uVar21 ^ uVar23) + 0x5c4dd124 + iVar5;
      uVar27 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar18;
      uVar18 = uVar18 + ((~uVar17 | uVar27) ^ uVar24) + 0x6d703ef3 + iVar15;
      uVar22 = (uVar18 * 0x200 | uVar18 >> 0x17) + uVar21;
      uVar17 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar21 = uVar21 + ((~uVar27 | uVar22) ^ uVar17) + 0x6d703ef3 + iVar8;
      uVar27 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar24;
      uVar28 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar24 = uVar24 + ((~uVar22 | uVar27) ^ uVar18) + 0x6d703ef3 + iVar4;
      uVar21 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar22 = (uVar24 * 0x8000 | uVar24 >> 0x11) + uVar17;
      uVar17 = uVar17 + ((~uVar27 | uVar22) ^ uVar28) + 0x6d703ef3 + iVar6;
      uVar17 = (uVar17 * 0x800 | uVar17 >> 0x15) + uVar18;
      uVar23 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar18 = uVar18 + ((~uVar22 | uVar17) ^ uVar21) + 0x6d703ef3 + iVar1;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar18 * 0x100 | uVar18 >> 0x18) + uVar28;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar23) + 0x6d703ef3 + iVar2;
      uVar17 = (uVar28 * 0x40 | uVar28 >> 0x1a) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6d703ef3 + iVar9;
      uVar18 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar23;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar23 = uVar23 + ((~uVar17 | uVar18) ^ uVar22) + 0x6d703ef3 + iVar20;
      uVar23 = (uVar23 * 0x4000 | uVar23 >> 0x12) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar23) ^ uVar28) + 0x6d703ef3 + iVar12;
      uVar17 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((~uVar23 | uVar17) ^ uVar21) + 0x6d703ef3 + iVar10;
      uVar18 = (uVar22 * 0x2000 | uVar22 >> 0x13) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar24) + 0x6d703ef3 + iVar13;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar17 = (uVar28 * 0x20 | uVar28 >> 0x1b) + uVar21;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6d703ef3 + iVar5;
      uVar18 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((~uVar17 | uVar18) ^ uVar22) + 0x6d703ef3 + iVar11;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar23 = (uVar24 * 0x2000 | uVar24 >> 0x13) + uVar27;
      uVar27 = uVar27 + ((~uVar18 | uVar23) ^ uVar28) + 0x6d703ef3 + iVar3;
      uVar17 = (uVar27 * 0x2000 | uVar27 >> 0x13) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((~uVar23 | uVar17) ^ uVar21) + 0x6d703ef3 + iVar7;
      uVar18 = (uVar22 * 0x80 | uVar22 >> 0x19) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar24) + 0x6d703ef3 + iVar14;
      uVar17 = (uVar28 * 0x20 | uVar28 >> 0x1b) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar27) & uVar17 ^ uVar27) + 0x7a6d76e9 + iVar10;
      uVar18 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((uVar22 ^ uVar17) & uVar18 ^ uVar22) + 0x7a6d76e9 + iVar9;
      uVar23 = (uVar24 * 0x20 | uVar24 >> 0x1b) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar28 ^ uVar18) & uVar23 ^ uVar28) + 0x7a6d76e9 + iVar7;
      uVar17 = (uVar27 * 0x100 | uVar27 >> 0x18) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((uVar21 ^ uVar23) & uVar17 ^ uVar21) + 0x7a6d76e9 + iVar4;
      uVar22 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar24 ^ uVar17) & uVar22 ^ uVar24) + 0x7a6d76e9 + iVar6;
      uVar18 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar17 = (uVar28 * 0x4000 | uVar28 >> 0x12) + uVar21;
      uVar21 = uVar21 + ((uVar22 ^ uVar27) & uVar17 ^ uVar27) + 0x7a6d76e9 + iVar12;
      uVar21 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar22 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar24 = uVar24 + ((uVar18 ^ uVar17) & uVar21 ^ uVar18) + iVar15 + 0x7a6d76e9;
      uVar23 = (uVar24 * 0x40 | uVar24 >> 0x1a) + uVar27;
      uVar17 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar27 = ((uVar28 ^ uVar21) & uVar23 ^ uVar28) + 0x7a6d76e9 + iVar3 + uVar27;
      uVar27 = (uVar27 * 0x4000 | uVar27 >> 0x12) + uVar18;
      uVar18 = ((uVar22 ^ uVar23) & uVar27 ^ uVar22) + 0x7a6d76e9 + iVar8 + uVar18;
      uVar23 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar28;
      uVar18 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar28 = iVar13 + 0x7a6d76e9 + ((uVar17 ^ uVar27) & uVar23 ^ uVar17) + uVar28;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar27 = (uVar28 * 0x200 | uVar28 >> 0x17) + uVar22;
      uVar21 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar22 = ((uVar23 ^ uVar18) & uVar27 ^ uVar18) + 0x7a6d76e9 + iVar5 + uVar22;
      uVar22 = (uVar22 * 0x1000 | uVar22 >> 0x14) + uVar17;
      uVar28 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar17 = ((uVar24 ^ uVar27) & uVar22 ^ uVar24) + 0x7a6d76e9 + iVar14 + uVar17;
      uVar27 = (uVar17 * 0x200 | uVar17 >> 0x17) + uVar18;
      uVar17 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar18 = uVar18 + 0x7a6d76e9 + ((uVar21 ^ uVar22) & uVar27 ^ uVar21) + iVar20;
      uVar22 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar24;
      uVar18 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar24 = ((uVar28 ^ uVar27) & uVar22 ^ uVar28) + 0x7a6d76e9 + iVar1 + uVar24;
      uVar27 = (uVar24 * 0x20 | uVar24 >> 0x1b) + uVar21;
      uVar23 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar21 = ((uVar17 ^ uVar22) & uVar27 ^ uVar17) + 0x7a6d76e9 + iVar11 + uVar21;
      uVar22 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar28;
      uVar21 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar28 = ((uVar27 ^ uVar18) & uVar22 ^ uVar18) + 0x7a6d76e9 + iVar2 + uVar28;
      uVar27 = (uVar28 * 0x100 | uVar28 >> 0x18) + uVar17;
      uVar17 = (uVar23 ^ uVar22 ^ uVar27) + iVar13 + uVar17;
      uVar17 = (uVar17 * 0x100 | uVar17 >> 0x18) + uVar18;
      uVar18 = (uVar21 ^ uVar27 ^ uVar17) + iVar15 + uVar18;
      uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar23;
      uVar28 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar23 = (uVar28 ^ uVar17 ^ uVar18) + iVar11 + uVar23;
      uVar22 = (uVar23 * 0x1000 | uVar23 >> 0x14) + uVar21;
      uVar17 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = (uVar22 ^ uVar27 ^ uVar18) + iVar7 + uVar21;
      uVar21 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar28;
      uVar18 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar28 = (uVar22 ^ uVar21 ^ uVar17) + iVar4 + uVar28;
      uVar22 = (uVar28 * 0x1000 | uVar28 >> 0x14) + uVar27;
      uVar28 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar27 = (uVar18 ^ uVar21 ^ uVar22) + iVar8 + uVar27;
      uVar27 = (uVar27 * 0x20 | uVar27 >> 0x1b) + uVar17;
      uVar21 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar17 = (uVar28 ^ uVar22 ^ uVar27) + iVar10 + uVar17;
      uVar23 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar17 = (uVar17 * 0x4000 | uVar17 >> 0x12) + uVar18;
      uVar18 = (uVar21 ^ uVar27 ^ uVar17) + iVar1 + uVar18;
      uVar18 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar28;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = (uVar18 ^ uVar23 ^ uVar17) + iVar9 + uVar28;
      uVar17 = (uVar28 * 0x100 | uVar28 >> 0x18) + uVar21;
      uVar21 = (uVar18 ^ uVar17 ^ uVar27) + iVar5 + uVar21;
      uVar28 = (uVar21 * 0x2000 | uVar21 >> 0x13) + uVar23;
      uVar18 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar23 = (uVar22 ^ uVar17 ^ uVar28) + iVar14 + uVar23;
      uVar21 = (uVar23 * 0x40 | uVar23 >> 0x1a) + uVar27;
      uVar27 = (uVar18 ^ uVar28 ^ uVar21) + iVar2 + uVar27;
      uVar23 = (uVar27 * 0x20 | uVar27 >> 0x1b) + uVar22;
      uVar27 = uVar28 * 0x400 | uVar28 >> 0x16;
      iVar1 = *param_1;
      uVar17 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar22 = (uVar27 ^ uVar21 ^ uVar23) + iVar3 + uVar22;
      uVar22 = (uVar22 * 0x8000 | uVar22 >> 0x11) + uVar18;
      uVar28 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar18 = (uVar22 ^ uVar17 ^ uVar23) + iVar6 + uVar18;
      uVar21 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar18 = (uVar18 * 0x2000 | uVar18 >> 0x13) + uVar27;
      uVar27 = (uVar22 ^ uVar18 ^ uVar21) + iVar20 + uVar27;
      iVar20 = iVar19 + uVar29;
      uVar22 = uVar16 + uVar31 + uVar21;
      uVar16 = (uVar27 * 0x800 | uVar27 >> 0x15) + uVar17;
      param_1[2] = uVar22;
      *param_1 = (uVar18 * 0x400 | uVar18 >> 0x16) + uVar26 + uVar34;
      iVar19 = iVar1 + (uVar32 * 0x40 | uVar32 >> 0x1a) + uVar29 + uVar16;
      uVar17 = (uVar28 ^ uVar18 ^ uVar16) + iVar12 + uVar17;
      uVar16 = iVar20 + (uVar17 * 0x800 | uVar17 >> 0x15) + uVar21;
      uVar26 = uVar33 + (uVar30 * 0x400 | uVar30 >> 0x16) + uVar28;
      param_1[1] = uVar26;
      param_1[3] = uVar16;
      param_1[4] = iVar19;
      uVar33 = uVar22;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143db5f00 WHIRLPOOL_BitUpdate body=681 status=ok
// SIG undefined WHIRLPOOL_BitUpdate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void WHIRLPOOL_BitUpdate(longlong param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  uint uVar2;
  longlong *plVar3;
  sbyte sVar4;
  sbyte sVar5;
  ulonglong uVar6;
  void *_Dst;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar7 = *(uint *)(param_1 + 0x80);
  *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + param_3;
  uVar11 = -(int)param_3 & 7;
  uVar8 = uVar7 & 7;
  if (*(ulonglong *)(param_1 + 0x88) < param_3) {
    uVar6 = 1;
    plVar3 = (longlong *)(param_1 + 0x90);
    do {
      *plVar3 = *plVar3 + 1;
      if (*plVar3 != 0) break;
      uVar6 = uVar6 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar6 < 4);
  }
  do {
    if ((uVar11 == 0) && (uVar8 == 0)) {
      while (param_3 != 0) {
        if ((uVar7 == 0) && (uVar6 = param_3 >> 9, uVar6 != 0)) {
          FUN_1400c8a00(param_1,param_2,uVar6);
          param_2 = param_2 + uVar6 * 0x40;
          param_3 = (ulonglong)((uint)param_3 & 0x1ff);
          uVar7 = 0;
        }
        else {
          uVar8 = 0x200 - uVar7;
          _Dst = (void *)(param_1 + 0x40 + (ulonglong)(uVar7 >> 3));
          if (param_3 < uVar8) {
            _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3 >> 3);
            uVar7 = uVar7 + (uint)param_3;
            param_3 = 0;
          }
          else {
            param_3 = param_3 - uVar8;
            _guard_xfg_dispatch_icall_nop(_Dst,param_2,(ulonglong)(uVar8 >> 3));
            param_2 = param_2 + (uVar8 >> 3);
            FUN_1400c8a00(param_1,param_1 + 0x40,1);
            uVar7 = 0;
          }
          *(uint *)(param_1 + 0x80) = uVar7;
        }
      }
      return;
    }
    uVar12 = 8 - uVar11;
    while( true ) {
      if (param_3 == 0) {
        return;
      }
      uVar2 = uVar7 >> 3;
      uVar6 = (ulonglong)uVar2;
      sVar4 = (sbyte)uVar11;
      if (uVar8 == uVar11) break;
      uVar10 = (ulonglong)(uVar2 + 1);
      sVar5 = (sbyte)uVar8;
      if (param_3 < 9) {
        bVar9 = *param_2 << sVar4;
        if (uVar8 == 0) {
          *(byte *)((ulonglong)uVar2 + 0x40 + param_1) = bVar9;
        }
        else {
          pbVar1 = (byte *)(uVar6 + 0x40 + param_1);
          *pbVar1 = *pbVar1 | bVar9 >> sVar5;
        }
        uVar7 = uVar7 + (int)param_3;
        if (uVar7 == 0x200) {
          FUN_1400c8a00(param_1,param_1 + 0x40);
          uVar10 = 0;
          uVar7 = 0;
        }
        if (uVar8 != 0) {
          *(byte *)(uVar10 + 0x40 + param_1) = bVar9 << (8U - sVar5 & 0x1f);
        }
        param_3 = 0;
LAB_143db608b:
        *(uint *)(param_1 + 0x80) = uVar7;
      }
      else {
        bVar9 = param_2[1] >> ((byte)uVar12 & 0x1f) | *param_2 << sVar4;
        if (uVar8 == 0) {
          *(byte *)(uVar6 + 0x40 + param_1) = bVar9;
        }
        else {
          pbVar1 = (byte *)(uVar6 + 0x40 + param_1);
          *pbVar1 = *pbVar1 | bVar9 >> sVar5;
        }
        uVar7 = uVar7 + 8;
        param_3 = param_3 - 8;
        param_2 = param_2 + 1;
        if (0x1ff < uVar7) {
          FUN_1400c8a00(param_1,param_1 + 0x40);
          uVar10 = 0;
          uVar7 = uVar7 & 0x1ff;
        }
        if (uVar8 == 0) goto LAB_143db608b;
        *(byte *)(uVar10 + 0x40 + param_1) = bVar9 << (8U - sVar5 & 0x1f);
        *(uint *)(param_1 + 0x80) = uVar7;
      }
    }
    uVar7 = uVar7 + uVar12;
    uVar8 = 0;
    pbVar1 = (byte *)(uVar6 + 0x40 + param_1);
    *pbVar1 = *pbVar1 | (byte)(0xff >> sVar4) & *param_2;
    uVar11 = 0;
    param_2 = param_2 + 1;
    param_3 = param_3 - uVar12;
    if (uVar7 == 0x200) {
      FUN_1400c8a00(param_1,param_1 + 0x40,1);
      uVar7 = 0;
    }
    *(uint *)(param_1 + 0x80) = uVar7;
  } while( true );
}



// FUNCTION 143db61b0 WHIRLPOOL_Final body=339 status=ok
// SIG undefined WHIRLPOOL_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WHIRLPOOL_Final(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar10 = *(uint *)(param_2 + 0x10) >> 3;
  pbVar1 = (byte *)((longlong)param_2 + (ulonglong)uVar10 + 0x40);
  uVar7 = *(uint *)(param_2 + 0x10) & 7;
  if (uVar7 == 0) {
    *pbVar1 = 0x80;
  }
  else {
    *pbVar1 = *pbVar1 | (byte)(0x80 >> (sbyte)uVar7);
  }
  uVar10 = uVar10 + 1;
  uVar11 = (ulonglong)uVar10;
  if (uVar10 < 0x21) {
    if (0x1f < uVar10) goto LAB_143db624d;
  }
  else {
    if (uVar10 < 0x40) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 + uVar11 + 0x40),0,(ulonglong)(0x40 - uVar10));
    }
    FUN_1400c8a00(param_2,param_2 + 8,1);
    uVar11 = 0;
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)param_2 + uVar11 + 0x40),0,(ulonglong)(0x20 - (int)uVar11));
LAB_143db624d:
  lVar9 = 4;
  puVar8 = param_2 + 0x11;
  puVar6 = (undefined1 *)((longlong)param_2 + 0x7f);
  do {
    uVar2 = *puVar8;
    puVar8 = puVar8 + 1;
    *puVar6 = (char)uVar2;
    puVar6[-1] = (char)((ulonglong)uVar2 >> 8);
    puVar6[-2] = (char)((ulonglong)uVar2 >> 0x10);
    puVar6[-3] = (char)((ulonglong)uVar2 >> 0x18);
    puVar6[-4] = (char)((ulonglong)uVar2 >> 0x20);
    puVar6[-5] = (char)((ulonglong)uVar2 >> 0x28);
    puVar6[-6] = (char)((ulonglong)uVar2 >> 0x30);
    puVar6[-7] = (char)((ulonglong)uVar2 >> 0x38);
    lVar9 = lVar9 + -1;
    puVar6 = puVar6 + -8;
  } while (lVar9 != 0);
  FUN_1400c8a00(param_2,param_2 + 8,1);
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar4 = *(undefined4 *)(param_2 + 5);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 5) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar4 = *(undefined4 *)(param_2 + 7);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
    *(undefined4 *)(param_1 + 7) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
    FUN_14004ff40(param_2,0xa8);
    return 1;
  }
  return 0;
}



// FUNCTION 143db6310 WHIRLPOOL_Init body=36 status=ok
// SIG undefined WHIRLPOOL_Init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WHIRLPOOL_Init(void *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0xa8);
  return 1;
}



// FUNCTION 143db6340 WHIRLPOOL_Update body=616 status=ok
// SIG undefined WHIRLPOOL_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 WHIRLPOOL_Update(longlong param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  sbyte sVar4;
  ulonglong uVar5;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong local_res10;
  
  if (0xfffffffffffffff < param_3) {
    local_res10 = param_3 >> 0x3c;
    do {
      uVar6 = *(uint *)(param_1 + 0x80);
      uVar7 = 0x8000000000000000;
      *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + -0x8000000000000000;
      uVar9 = uVar6 & 7;
      if (*(ulonglong *)(param_1 + 0x88) < 0x8000000000000000) {
        uVar5 = 1;
        plVar3 = (longlong *)(param_1 + 0x90);
        do {
          *plVar3 = *plVar3 + 1;
          if (*plVar3 != 0) break;
          uVar5 = uVar5 + 1;
          plVar3 = plVar3 + 1;
        } while (uVar5 < 4);
      }
      pbVar8 = param_2;
      if (uVar9 == 0) {
        do {
          if ((uVar6 == 0) && (uVar5 = uVar7 >> 9, uVar5 != 0)) {
            FUN_1400c8a00(param_1,pbVar8,uVar5);
            pbVar8 = pbVar8 + uVar5 * 0x40;
            uVar7 = (ulonglong)((uint)uVar7 & 0x1ff);
          }
          else {
            uVar9 = 0x200 - uVar6;
            _Dst = (void *)(param_1 + 0x40 + (ulonglong)(uVar6 >> 3));
            if (uVar7 < uVar9) {
              _guard_xfg_dispatch_icall_nop(_Dst,pbVar8,uVar7 >> 3);
              uVar6 = uVar6 + (uint)uVar7;
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 - uVar9;
              _guard_xfg_dispatch_icall_nop(_Dst,pbVar8,(ulonglong)(uVar9 >> 3));
              pbVar8 = pbVar8 + (uVar9 >> 3);
              FUN_1400c8a00(param_1,param_1 + 0x40,1);
              uVar6 = 0;
            }
            *(uint *)(param_1 + 0x80) = uVar6;
          }
        } while (uVar7 != 0);
      }
      else {
        while (uVar7 != 0) {
          bVar1 = *pbVar8;
          uVar2 = uVar6 >> 3;
          uVar5 = (ulonglong)(uVar2 + 1);
          sVar4 = (sbyte)uVar9;
          *(byte *)((ulonglong)uVar2 + 0x40 + param_1) =
               bVar1 >> sVar4 | *(byte *)((ulonglong)uVar2 + 0x40 + param_1);
          if (uVar7 < 9) {
            uVar6 = uVar6 + (int)uVar7;
            if (uVar6 == 0x200) {
              FUN_1400c8a00(param_1,param_1 + 0x40,1);
              uVar5 = 0;
              uVar6 = 0;
            }
            *(byte *)(uVar5 + 0x40 + param_1) = bVar1 << (8U - sVar4 & 0x1f);
            uVar7 = 0;
            *(uint *)(param_1 + 0x80) = uVar6;
          }
          else {
            uVar6 = uVar6 + 8;
            uVar7 = uVar7 - 8;
            pbVar8 = pbVar8 + 1;
            if (0x1ff < uVar6) {
              FUN_1400c8a00(param_1,param_1 + 0x40,1);
              uVar5 = 0;
              uVar6 = uVar6 & 0x1ff;
            }
            *(byte *)(uVar5 + 0x40 + param_1) = bVar1 << (8U - sVar4 & 0x1f);
            *(uint *)(param_1 + 0x80) = uVar6;
          }
        }
      }
      param_3 = param_3 + 0xf000000000000000;
      param_2 = param_2 + 0x1000000000000000;
      local_res10 = local_res10 - 1;
    } while (local_res10 != 0);
  }
  if (param_3 != 0) {
    WHIRLPOOL_BitUpdate(param_1,param_2,param_3 * 8);
  }
  return 1;
}



// FUNCTION 143db65b0 sm3_block_data_order body=10523 status=ok
// SIG undefined sm3_block_data_order(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void sm3_block_data_order(uint *param_1,byte *param_2,longlong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint local_64;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  
  if (param_3 != 0) {
    local_64 = param_1[2];
    uVar33 = param_1[4];
    local_4c = param_1[5];
    local_5c = param_1[6];
    local_50 = param_1[3];
    local_58 = param_1[1];
    local_48 = param_1[7];
    do {
      param_3 = param_3 + -1;
      pbVar1 = param_2 + 0x10;
      pbVar2 = param_2 + 0x14;
      pbVar3 = param_2 + 0x18;
      pbVar4 = param_2 + 0x1c;
      uVar25 = (uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[2] << 8 |
               (uint)param_2[3];
      uVar27 = (uint)param_2[4] << 0x18 | (uint)param_2[5] << 0x10 | (uint)param_2[6] << 8 |
               (uint)param_2[7];
      uVar14 = (uint)param_2[8] << 0x18 | (uint)param_2[9] << 0x10 | (uint)param_2[10] << 8 |
               (uint)param_2[0xb];
      pbVar5 = param_2 + 0xc;
      uVar15 = (uint)*pbVar5 << 0x18 | (uint)param_2[0xd] << 0x10 | (uint)param_2[0xe] << 8 |
               (uint)param_2[0xf];
      uVar34 = (uint)*pbVar1 << 0x18 | (uint)param_2[0x11] << 0x10 | (uint)param_2[0x12] << 8 |
               (uint)param_2[0x13];
      uVar42 = (uint)*pbVar2 << 0x18 | (uint)param_2[0x15] << 0x10 | (uint)param_2[0x16] << 8 |
               (uint)param_2[0x17];
      uVar38 = (uint)*pbVar3 << 0x18 | (uint)param_2[0x19] << 0x10 | (uint)param_2[0x1a] << 8 |
               (uint)param_2[0x1b];
      pbVar6 = param_2 + 0x20;
      pbVar7 = param_2 + 0x28;
      uVar39 = (uint)*pbVar4 << 0x18 | (uint)param_2[0x1d] << 0x10 | (uint)param_2[0x1e] << 8 |
               (uint)param_2[0x1f];
      pbVar8 = param_2 + 0x34;
      uVar16 = (uint)*pbVar6 << 0x18 | (uint)param_2[0x21] << 0x10 | (uint)param_2[0x22] << 8 |
               (uint)param_2[0x23];
      pbVar9 = param_2 + 0x24;
      uVar17 = (uint)*pbVar9 << 0x18 | (uint)param_2[0x25] << 0x10 | (uint)param_2[0x26] << 8 |
               (uint)param_2[0x27];
      pbVar10 = param_2 + 0x2c;
      uVar36 = (uint)*pbVar7 << 0x18 | (uint)param_2[0x29] << 0x10 | (uint)param_2[0x2a] << 8 |
               (uint)param_2[0x2b];
      uVar18 = (uint)*pbVar10 << 0x18 | (uint)param_2[0x2d] << 0x10 | (uint)param_2[0x2e] << 8 |
               (uint)param_2[0x2f];
      pbVar11 = param_2 + 0x30;
      uVar19 = (uint)*pbVar11 << 0x18 | (uint)param_2[0x31] << 0x10 | (uint)param_2[0x32] << 8 |
               (uint)param_2[0x33];
      uVar28 = (uint)*pbVar8 << 0x18 | (uint)param_2[0x35] << 0x10;
      pbVar12 = param_2 + 0x38;
      uVar29 = uVar28 | (uint)param_2[0x36] << 8 | (uint)param_2[0x37];
      uVar20 = (uint)*pbVar12 << 0x18 | (uint)param_2[0x39] << 0x10;
      uVar21 = uVar20 | (uint)param_2[0x3a] << 8 | (uint)param_2[0x3b];
      pbVar13 = param_2 + 0x3c;
      uVar22 = (uint)*pbVar13 << 0x18 | (uint)param_2[0x3d] << 0x10;
      uVar23 = uVar22 | (uint)param_2[0x3e] << 8 | (uint)param_2[0x3f];
      param_2 = param_2 + 0x40;
      uVar24 = *param_1 << 0xc | *param_1 >> 0x14;
      uVar31 = uVar33 + 0x79cc4519 + uVar24;
      uVar31 = uVar31 * 0x80 | uVar31 >> 0x19;
      uVar40 = (uVar34 ^ uVar25) + (uVar31 ^ uVar24) + local_50 + (local_64 ^ local_58 ^ *param_1);
      uVar31 = (uVar33 ^ local_5c ^ local_4c) + local_48 + uVar31 + uVar25;
      uVar30 = uVar29 << 0xf | uVar28 >> 0x11;
      uVar35 = local_58 << 9 | local_58 >> 0x17;
      uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
      uVar26 = local_4c >> 0xd | local_4c << 0x13;
      uVar28 = uVar30 ^ uVar39 ^ uVar25;
      uVar24 = *param_1;
      uVar25 = uVar25 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                        (uVar15 << 7 | (uint)(*pbVar5 >> 1)) ^ uVar30 ^ uVar36 ^ uVar39;
      uVar28 = uVar40 * 0x1000 | uVar40 >> 0x14;
      uVar30 = uVar31 + 0xf3988a32 + uVar28;
      uVar32 = uVar30 * 0x80 | uVar30 >> 0x19;
      uVar43 = (uVar42 ^ uVar27) + (uVar32 ^ uVar28) + local_64 + (uVar40 ^ uVar35 ^ uVar24);
      uVar30 = uVar21 << 0xf | uVar20 >> 0x11;
      uVar28 = (uVar33 ^ uVar31 ^ uVar26) + local_5c + uVar32 + uVar27;
      uVar20 = uVar33 >> 0xd | uVar33 << 0x13;
      uVar37 = uVar24 << 9 | uVar24 >> 0x17;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar24 = uVar30 ^ uVar16 ^ uVar27;
      uVar27 = uVar27 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar34 << 7 | (uint)(*pbVar1 >> 1)) ^ uVar30 ^ uVar18 ^ uVar16;
      uVar24 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar30 = uVar28 + 0xe7311465 + uVar24;
      uVar41 = uVar40 * 0x200 | uVar40 >> 0x17;
      uVar32 = uVar30 * 0x80 | uVar30 >> 0x19;
      uVar30 = uVar31 >> 0xd | uVar31 << 0x13;
      uVar22 = uVar23 << 0xf | uVar22 >> 0x11;
      uVar35 = (uVar38 ^ uVar14) + (uVar32 ^ uVar24) + uVar35 + (uVar43 ^ uVar40 ^ uVar37);
      uVar26 = (uVar31 ^ uVar28 ^ uVar20) + uVar32 + uVar14 + uVar26;
      uVar26 = (uVar26 >> 0xf | uVar26 * 0x20000) ^ (uVar26 * 0x200 | uVar26 >> 0x17) ^ uVar26;
      uVar24 = uVar22 ^ uVar17 ^ uVar14;
      uVar14 = uVar14 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar42 << 7 | (uint)(*pbVar2 >> 1)) ^ uVar22 ^ uVar19 ^ uVar17;
      uVar24 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar22 = uVar26 + 0xce6228cb + uVar24;
      uVar32 = uVar22 * 0x80 | uVar22 >> 0x19;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar31 = uVar25 << 0xf | uVar25 >> 0x11;
      uVar22 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar20 = (uVar30 ^ uVar28 ^ uVar26) + uVar32 + uVar15 + uVar20;
      uVar40 = (uVar39 ^ uVar15) + (uVar32 ^ uVar24) + uVar37 + (uVar35 ^ uVar43 ^ uVar41);
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar24 = uVar31 ^ uVar36 ^ uVar15;
      uVar15 = uVar15 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar38 << 7 | (uint)(*pbVar3 >> 1)) ^ uVar31 ^ uVar29 ^ uVar36;
      uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar24 = uVar40 * 0x1000 | uVar40 >> 0x14;
      uVar28 = uVar20 + 0x9cc45197 + uVar24;
      uVar32 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar31 = uVar27 << 0xf | uVar27 >> 0x11;
      uVar28 = uVar26 >> 0xd | uVar26 << 0x13;
      uVar30 = (uVar22 ^ uVar26 ^ uVar20) + uVar32 + uVar34 + uVar30;
      uVar35 = (uVar16 ^ uVar34) + (uVar32 ^ uVar24) + uVar41 + (uVar40 ^ uVar35 ^ uVar44);
      uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
      uVar24 = uVar31 ^ uVar18 ^ uVar34;
      uVar34 = uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar39 << 7 | (uint)(*pbVar4 >> 1)) ^ uVar31 ^ uVar21 ^ uVar18;
      uVar41 = uVar40 * 0x200 | uVar40 >> 0x17;
      uVar24 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar31 = uVar30 + 0x3988a32f + uVar24;
      uVar31 = uVar31 * 0x80 | uVar31 >> 0x19;
      uVar26 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar22 = (uVar30 ^ uVar28 ^ uVar20) + uVar31 + uVar42 + uVar22;
      uVar20 = uVar14 << 0xf | uVar14 >> 0x11;
      uVar32 = (uVar17 ^ uVar42) + (uVar31 ^ uVar24) + uVar44 + (uVar35 ^ uVar40 ^ uVar37);
      uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
      uVar24 = uVar20 ^ uVar19 ^ uVar42;
      uVar42 = uVar42 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar16 << 7 | (uint)(*pbVar6 >> 1)) ^ uVar20 ^ uVar23 ^ uVar19;
      uVar43 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar24 = uVar32 * 0x1000 | uVar32 >> 0x14;
      uVar20 = uVar22 + 0x7311465e + uVar24;
      uVar20 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar35 = (uVar36 ^ uVar38) + (uVar20 ^ uVar24) + uVar37 + (uVar32 ^ uVar35 ^ uVar41);
      uVar28 = (uVar30 ^ uVar22 ^ uVar26) + uVar20 + uVar38 + uVar28;
      uVar30 = uVar30 >> 0xd | uVar30 << 0x13;
      uVar40 = uVar32 * 0x200 | uVar32 >> 0x17;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar20 = uVar15 << 0xf | uVar15 >> 0x11;
      uVar24 = uVar20 ^ uVar29 ^ uVar38;
      uVar31 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar38 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar17 << 7 | (uint)(*pbVar9 >> 1)) ^ uVar20 ^ uVar29 ^ uVar38 ^ uVar25;
      uVar24 = uVar28 + 0xe6228cbc + uVar31;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar44 = (uVar18 ^ uVar39) + (uVar24 ^ uVar31) + uVar41 + (uVar35 ^ uVar32 ^ uVar43);
      uVar31 = uVar22 >> 0xd | uVar22 << 0x13;
      uVar26 = (uVar30 ^ uVar22 ^ uVar28) + uVar24 + uVar39 + uVar26;
      uVar26 = (uVar26 >> 0xf | uVar26 * 0x20000) ^ (uVar26 * 0x200 | uVar26 >> 0x17) ^ uVar26;
      uVar20 = uVar34 << 0xf | uVar34 >> 0x11;
      uVar24 = uVar20 ^ uVar21 ^ uVar39;
      uVar22 = uVar44 * 0x1000 | uVar44 >> 0x14;
      uVar39 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar36 << 7 | (uint)(*pbVar7 >> 1)) ^ uVar20 ^ uVar21 ^ uVar39 ^ uVar27;
      uVar24 = uVar26 + 0xcc451979 + uVar22;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar32 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar43 = (uVar19 ^ uVar16) + (uVar24 ^ uVar22) + uVar43 + (uVar44 ^ uVar35 ^ uVar40);
      uVar30 = (uVar31 ^ uVar28 ^ uVar26) + uVar24 + uVar16 + uVar30;
      uVar45 = uVar44 * 0x200 | uVar44 >> 0x17;
      uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
      uVar28 = uVar42 << 0xf | uVar42 >> 0x11;
      uVar24 = uVar28 ^ uVar23 ^ uVar16;
      uVar20 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar41 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar18 << 7 | (uint)(*pbVar10 >> 1)) ^ uVar28 ^ uVar23 ^ uVar16 ^ uVar14;
      uVar24 = uVar30 + 0x988a32f3 + uVar20;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar22 = (uVar29 ^ uVar17) + (uVar24 ^ uVar20) + uVar40 + (uVar43 ^ uVar44 ^ uVar37);
      uVar20 = uVar26 >> 0xd | uVar26 << 0x13;
      uVar31 = (uVar30 ^ uVar32 ^ uVar26) + uVar24 + uVar17 + uVar31;
      uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
      uVar28 = uVar38 << 0xf | uVar38 >> 0x11;
      uVar24 = uVar28 ^ uVar17 ^ uVar25;
      uVar35 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar19 << 7 | (uint)(*pbVar11 >> 1)) ^ uVar28 ^ uVar17 ^ uVar15 ^ uVar25;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar28 = uVar31 + 0x311465e7 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar26 = (uVar21 ^ uVar36) + (uVar28 ^ uVar24) + uVar37 + (uVar22 ^ uVar43 ^ uVar45);
      uVar17 = uVar30 >> 0xd | uVar30 << 0x13;
      uVar32 = (uVar30 ^ uVar31 ^ uVar20) + uVar28 + uVar36 + uVar32;
      uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
      uVar28 = uVar39 << 0xf | uVar39 >> 0x11;
      uVar24 = uVar28 ^ uVar36 ^ uVar27;
      uVar16 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar30 = uVar32 + 0x6228cbce + uVar16;
      uVar37 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar29 << 7 | (uint)(*pbVar8 >> 1)) ^ uVar28 ^ uVar36 ^ uVar34 ^ uVar27;
      uVar24 = uVar30 * 0x80 | uVar30 >> 0x19;
      uVar30 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar43 = (uVar23 ^ uVar18) + (uVar24 ^ uVar16) + uVar45 + (uVar26 ^ uVar22 ^ uVar44);
      uVar22 = uVar31 >> 0xd | uVar31 << 0x13;
      uVar20 = (uVar17 ^ uVar31 ^ uVar32) + uVar24 + uVar18 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar41 << 0xf | uVar41 >> 0x11;
      uVar24 = uVar28 ^ uVar18 ^ uVar14;
      uVar16 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar31 = uVar20 + 0xc451979c + uVar16;
      uVar40 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar21 << 7 | (uint)(*pbVar12 >> 1)) ^ uVar28 ^ uVar18 ^ uVar42 ^ uVar14;
      uVar24 = uVar31 * 0x80 | uVar31 >> 0x19;
      uVar31 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar18 = uVar32 >> 0xd | uVar32 << 0x13;
      uVar36 = (uVar19 ^ uVar25) + (uVar24 ^ uVar16) + uVar44 + (uVar43 ^ uVar26 ^ uVar30);
      uVar17 = (uVar22 ^ uVar32 ^ uVar20) + uVar24 + uVar19 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar28 = uVar35 << 0xf | uVar35 >> 0x11;
      uVar24 = uVar28 ^ uVar19 ^ uVar15;
      uVar16 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar26 = uVar17 + 0x88a32f39 + uVar16;
      uVar32 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar23 << 7 | (uint)(*pbVar13 >> 1)) ^ uVar28 ^ uVar19 ^ uVar38 ^ uVar15;
      uVar24 = uVar26 * 0x80 | uVar26 >> 0x19;
      uVar26 = (uVar29 ^ uVar27) + (uVar24 ^ uVar16) + uVar30 + (uVar36 ^ uVar43 ^ uVar31);
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar16 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar22 = (uVar17 ^ uVar18 ^ uVar20) + uVar24 + uVar29 + uVar22;
      uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
      uVar28 = uVar37 << 0xf | uVar37 >> 0x11;
      uVar24 = uVar28 ^ uVar29 ^ uVar34;
      uVar30 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar25 << 7 | uVar25 >> 0x19) ^ uVar28 ^ uVar29 ^ uVar39 ^ uVar34;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar24 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar28 = uVar22 + 0x11465e73 + uVar24;
      uVar19 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar31 = (uVar28 ^ uVar24) + (uVar21 ^ uVar14) + uVar31 + (uVar26 ^ uVar36 ^ uVar44);
      uVar18 = (uVar17 ^ uVar22 ^ uVar16) + uVar28 + uVar21 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar40 << 0xf | uVar40 >> 0x11;
      uVar24 = uVar28 ^ uVar21 ^ uVar42;
      uVar29 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar27 << 7 | uVar27 >> 0x19) ^ uVar28 ^ uVar21 ^ uVar41 ^ uVar42;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar28 = uVar18 + 0x228cbce6 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar20 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar44 = (uVar28 ^ uVar24) + (uVar23 ^ uVar15) + uVar44 + (uVar31 ^ uVar26 ^ uVar43);
      uVar17 = uVar22 >> 0xd | uVar22 << 0x13;
      uVar16 = (uVar19 ^ uVar22 ^ uVar18) + uVar28 + uVar23 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar32 << 0xf | uVar32 >> 0x11;
      uVar24 = uVar28 ^ uVar23 ^ uVar38;
      uVar26 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar14 << 7 | uVar14 >> 0x19) ^ uVar28 ^ uVar23 ^ uVar35 ^ uVar38;
      uVar24 = uVar44 * 0x1000 | uVar44 >> 0x14;
      uVar28 = uVar16 + 0x9d8a7a87 + uVar24;
      uVar22 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar23 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar36 = (uVar34 ^ uVar25) +
               (uVar22 ^ uVar24) + uVar43 + ((uVar44 | uVar31) & uVar20 | uVar44 & uVar31);
      uVar21 = uVar30 << 0xf | uVar30 >> 0x11;
      uVar28 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar19 = ((uVar17 ^ uVar18) & uVar16 ^ uVar17) + uVar22 + uVar25 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar24 = uVar21 ^ uVar39 ^ uVar25;
      uVar25 = uVar25 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar15 << 7 | uVar15 >> 0x19) ^ uVar21 ^ uVar37 ^ uVar39;
      uVar45 = uVar44 * 0x200 | uVar44 >> 0x17;
      uVar24 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar18 = uVar19 + 0x3b14f50f + uVar24;
      uVar22 = uVar18 * 0x80 | uVar18 >> 0x19;
      uVar20 = (uVar42 ^ uVar27) +
               (uVar22 ^ uVar24) + uVar20 + ((uVar36 | uVar44) & uVar23 | uVar36 & uVar44);
      uVar21 = uVar29 << 0xf | uVar29 >> 0x11;
      uVar18 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar17 = ((uVar28 ^ uVar16) & uVar19 ^ uVar28) + uVar22 + uVar27 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar24 = uVar21 ^ uVar41 ^ uVar27;
      uVar27 = uVar27 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar34 << 7 | uVar34 >> 0x19) ^ uVar21 ^ uVar40 ^ uVar41;
      uVar24 = uVar20 * 0x1000 | uVar20 >> 0x14;
      uVar16 = uVar17 + 0x7629ea1e + uVar24;
      uVar22 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar31 = (uVar38 ^ uVar14) +
               (uVar22 ^ uVar24) + uVar23 + ((uVar20 | uVar36) & uVar45 | uVar20 & uVar36);
      uVar21 = uVar26 << 0xf | uVar26 >> 0x11;
      uVar16 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar28 = ((uVar19 ^ uVar18) & uVar17 ^ uVar18) + uVar22 + uVar14 + uVar28;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar24 = uVar21 ^ uVar35 ^ uVar14;
      uVar14 = uVar14 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar42 << 7 | uVar42 >> 0x19) ^ uVar21 ^ uVar32 ^ uVar35;
      uVar22 = uVar20 * 0x200 | uVar20 >> 0x17;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar19 = uVar28 + 0xec53d43c + uVar24;
      uVar21 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar19 = uVar25 << 0xf | uVar25 >> 0x11;
      uVar44 = (uVar39 ^ uVar15) +
               (uVar21 ^ uVar24) + uVar45 + ((uVar31 | uVar20) & uVar43 | uVar31 & uVar20);
      uVar18 = ((uVar16 ^ uVar17) & uVar28 ^ uVar16) + uVar21 + uVar15 + uVar18;
      uVar17 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar24 = uVar19 ^ uVar37 ^ uVar15;
      uVar15 = uVar15 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar38 << 7 | uVar38 >> 0x19) ^ uVar19 ^ uVar30 ^ uVar37;
      uVar24 = uVar44 * 0x1000 | uVar44 >> 0x14;
      uVar19 = uVar18 + 0xd8a7a879 + uVar24;
      uVar23 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar19 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar20 = uVar27 << 0xf | uVar27 >> 0x11;
      uVar21 = (uVar41 ^ uVar34) +
               (uVar23 ^ uVar24) + uVar43 + ((uVar44 | uVar31) & uVar22 | uVar44 & uVar31);
      uVar16 = ((uVar17 ^ uVar28) & uVar18 ^ uVar17) + uVar23 + uVar34 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar24 = uVar20 ^ uVar40 ^ uVar34;
      uVar34 = uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar39 << 7 | uVar39 >> 0x19) ^ uVar20 ^ uVar29 ^ uVar40;
      uVar43 = uVar44 * 0x200 | uVar44 >> 0x17;
      uVar24 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar28 = uVar16 + 0xb14f50f3 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar20 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar17 = ((uVar19 ^ uVar18) & uVar16 ^ uVar19) + uVar28 + uVar42 + uVar17;
      uVar23 = (uVar35 ^ uVar42) +
               (uVar28 ^ uVar24) + uVar22 + ((uVar21 | uVar44) & uVar36 | uVar21 & uVar44);
      uVar28 = uVar14 << 0xf | uVar14 >> 0x11;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar24 = uVar28 ^ uVar32 ^ uVar42;
      uVar42 = uVar42 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar41 << 7 | uVar41 >> 0x19) ^ uVar28 ^ uVar26 ^ uVar32;
      uVar22 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar24 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar28 = uVar17 + 0x629ea1e7 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar18 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar21 = (uVar37 ^ uVar38) +
               (uVar28 ^ uVar24) + uVar36 + ((uVar23 | uVar21) & uVar43 | uVar23 & uVar21);
      uVar19 = ((uVar16 ^ uVar20) & uVar17 ^ uVar20) + uVar28 + uVar38 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar28 = uVar15 << 0xf | uVar15 >> 0x11;
      uVar24 = uVar28 ^ uVar30 ^ uVar38;
      uVar16 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar38 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar35 << 7 | uVar35 >> 0x19) ^ uVar28 ^ uVar30 ^ uVar38 ^ uVar25;
      uVar24 = uVar19 + 0xc53d43ce + uVar16;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar31 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar36 = (uVar40 ^ uVar39) +
               (uVar24 ^ uVar16) + uVar43 + ((uVar21 | uVar23) & uVar22 | uVar21 & uVar23);
      uVar16 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar20 = ((uVar18 ^ uVar17) & uVar19 ^ uVar18) + uVar24 + uVar39 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar34 << 0xf | uVar34 >> 0x11;
      uVar24 = uVar28 ^ uVar29 ^ uVar39;
      uVar23 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar39 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar37 << 7 | uVar37 >> 0x19) ^ uVar28 ^ uVar29 ^ uVar39 ^ uVar27;
      uVar24 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar28 = uVar20 + 0x8a7a879d + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar17 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar21 = (uVar32 ^ uVar41) +
               (uVar28 ^ uVar24) + uVar22 + ((uVar36 | uVar21) & uVar31 | uVar36 & uVar21);
      uVar18 = ((uVar16 ^ uVar19) & uVar20 ^ uVar16) + uVar28 + uVar41 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar42 << 0xf | uVar42 >> 0x11;
      uVar24 = uVar28 ^ uVar26 ^ uVar41;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar41 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar40 << 7 | uVar40 >> 0x19) ^ uVar28 ^ uVar26 ^ uVar41 ^ uVar14;
      uVar24 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar28 = uVar18 + 0x14f50f3b + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar22 = (uVar30 ^ uVar35) +
               (uVar28 ^ uVar24) + uVar31 + ((uVar21 | uVar36) & uVar23 | uVar21 & uVar36);
      uVar16 = ((uVar17 ^ uVar20) & uVar18 ^ uVar17) + uVar28 + uVar35 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar38 << 0xf | uVar38 >> 0x11;
      uVar24 = uVar28 ^ uVar35 ^ uVar25;
      uVar35 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar32 << 7 | uVar32 >> 0x19) ^ uVar28 ^ uVar35 ^ uVar15 ^ uVar25;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar28 = uVar16 + 0x29ea1e76 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar31 = (uVar29 ^ uVar37) +
               (uVar24 ^ uVar28) + uVar23 + ((uVar22 | uVar21) & uVar43 | uVar22 & uVar21);
      uVar20 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar21 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar17 = ((uVar18 ^ uVar19) & uVar16 ^ uVar19) + uVar28 + uVar37 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar28 = uVar39 << 0xf | uVar39 >> 0x11;
      uVar24 = uVar28 ^ uVar37 ^ uVar27;
      uVar37 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar30 << 7 | uVar30 >> 0x19) ^ uVar28 ^ uVar37 ^ uVar34 ^ uVar27;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar28 = uVar17 + 0x53d43cec + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar23 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar18 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar22 = (uVar26 ^ uVar40) +
               (uVar28 ^ uVar24) + uVar43 + ((uVar22 | uVar31) & uVar21 | uVar22 & uVar31);
      uVar19 = ((uVar20 ^ uVar16) & uVar17 ^ uVar20) + uVar28 + uVar40 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar28 = uVar41 << 0xf | uVar41 >> 0x11;
      uVar24 = uVar28 ^ uVar40 ^ uVar14;
      uVar40 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar29 << 7 | uVar29 >> 0x19) ^ uVar28 ^ uVar40 ^ uVar42 ^ uVar14;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar28 = uVar19 + 0xa7a879d8 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar16 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar31 = (uVar32 ^ uVar25) +
               (uVar28 ^ uVar24) + uVar21 + ((uVar22 | uVar31) & uVar23 | uVar22 & uVar31);
      uVar20 = ((uVar18 ^ uVar17) & uVar19 ^ uVar18) + uVar28 + uVar32 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar35 << 0xf | uVar35 >> 0x11;
      uVar24 = uVar28 ^ uVar32 ^ uVar15;
      uVar32 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar26 << 7 | uVar26 >> 0x19) ^ uVar28 ^ uVar32 ^ uVar38 ^ uVar15;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar28 = uVar20 + 0x4f50f3b1 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar43 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar21 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar18 = ((uVar16 ^ uVar19) & uVar20 ^ uVar16) + uVar28 + uVar30 + uVar18;
      uVar22 = (uVar30 ^ uVar27) +
               (uVar28 ^ uVar24) + uVar23 + ((uVar31 | uVar22) & uVar36 | uVar31 & uVar22);
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar37 << 0xf | uVar37 >> 0x11;
      uVar24 = uVar28 ^ uVar30 ^ uVar34;
      uVar30 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar25 << 7 | uVar25 >> 0x19) ^ uVar28 ^ uVar30 ^ uVar39 ^ uVar34;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar28 = uVar18 + 0x9ea1e762 + uVar24;
      uVar23 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar36 = (uVar29 ^ uVar14) +
               (uVar28 ^ uVar24) + uVar36 + ((uVar22 | uVar31) & uVar43 | uVar22 & uVar31);
      uVar16 = ((uVar20 ^ uVar21) & uVar18 ^ uVar21) + uVar28 + uVar29 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar40 << 0xf | uVar40 >> 0x11;
      uVar24 = uVar28 ^ uVar29 ^ uVar42;
      uVar17 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar20 = uVar16 + 0x3d43cec5 + uVar17;
      uVar29 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar27 << 7 | uVar27 >> 0x19) ^ uVar28 ^ uVar29 ^ uVar41 ^ uVar42;
      uVar24 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar31 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar44 = (uVar26 ^ uVar15) +
               (uVar24 ^ uVar17) + uVar43 + ((uVar36 | uVar22) & uVar23 | uVar36 & uVar22);
      uVar17 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar21 = ((uVar19 ^ uVar18) & uVar16 ^ uVar19) + uVar24 + uVar26 + uVar21;
      uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
      uVar28 = uVar32 << 0xf | uVar32 >> 0x11;
      uVar24 = uVar28 ^ uVar26 ^ uVar38;
      uVar26 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar14 << 7 | uVar14 >> 0x19) ^ uVar28 ^ uVar26 ^ uVar35 ^ uVar38;
      uVar24 = uVar44 * 0x1000 | uVar44 >> 0x14;
      uVar28 = uVar21 + 0x7a879d8a + uVar24;
      uVar20 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar28 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar18 = uVar30 << 0xf | uVar30 >> 0x11;
      uVar22 = (uVar34 ^ uVar25) +
               (uVar20 ^ uVar24) + uVar23 + ((uVar44 | uVar36) & uVar31 | uVar44 & uVar36);
      uVar19 = ((uVar17 ^ uVar16) & uVar21 ^ uVar17) + uVar20 + uVar25 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar24 = uVar18 ^ uVar39 ^ uVar25;
      uVar25 = uVar25 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar15 << 7 | uVar15 >> 0x19) ^ uVar18 ^ uVar37 ^ uVar39;
      uVar36 = uVar44 * 0x200 | uVar44 >> 0x17;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar19 + 0xf50f3b14 + uVar24;
      uVar23 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar18 = uVar29 << 0xf | uVar29 >> 0x11;
      uVar16 = uVar21 >> 0xd | uVar21 << 0x13;
      uVar20 = (uVar42 ^ uVar27) +
               (uVar23 ^ uVar24) + uVar31 + ((uVar22 | uVar44) & uVar43 | uVar22 & uVar44);
      uVar17 = ((uVar28 ^ uVar21) & uVar19 ^ uVar28) + uVar23 + uVar27 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar24 = uVar18 ^ uVar41 ^ uVar27;
      uVar27 = uVar27 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar34 << 7 | uVar34 >> 0x19) ^ uVar18 ^ uVar40 ^ uVar41;
      uVar24 = uVar20 * 0x1000 | uVar20 >> 0x14;
      uVar18 = uVar17 + 0xea1e7629 + uVar24;
      uVar23 = uVar18 * 0x80 | uVar18 >> 0x19;
      uVar31 = (uVar38 ^ uVar14) +
               (uVar23 ^ uVar24) + uVar43 + ((uVar20 | uVar22) & uVar36 | uVar20 & uVar22);
      uVar21 = uVar26 << 0xf | uVar26 >> 0x11;
      uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar22 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar28 = ((uVar19 ^ uVar16) & uVar17 ^ uVar16) + uVar23 + uVar14 + uVar28;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar24 = uVar21 ^ uVar35 ^ uVar14;
      uVar14 = uVar14 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar42 << 7 | uVar42 >> 0x19) ^ uVar21 ^ uVar32 ^ uVar35;
      uVar21 = uVar20 * 0x200 | uVar20 >> 0x17;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar19 = uVar28 + 0xd43cec53 + uVar24;
      uVar23 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar43 = (uVar39 ^ uVar15) +
               (uVar23 ^ uVar24) + uVar36 + ((uVar31 | uVar20) & uVar22 | uVar31 & uVar20);
      uVar20 = uVar25 << 0xf | uVar25 >> 0x11;
      uVar19 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar16 = ((uVar18 ^ uVar17) & uVar28 ^ uVar18) + uVar23 + uVar15 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar24 = uVar20 ^ uVar37 ^ uVar15;
      uVar15 = uVar15 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar38 << 7 | uVar38 >> 0x19) ^ uVar20 ^ uVar30 ^ uVar37;
      uVar24 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar17 = uVar16 + 0xa879d8a7 + uVar24;
      uVar23 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar20 = uVar27 << 0xf | uVar27 >> 0x11;
      uVar17 = (uVar41 ^ uVar34) +
               (uVar23 ^ uVar24) + uVar22 + ((uVar43 | uVar31) & uVar21 | uVar43 & uVar31);
      uVar18 = ((uVar19 ^ uVar28) & uVar16 ^ uVar19) + uVar23 + uVar34 + uVar18;
      uVar28 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar24 = uVar20 ^ uVar40 ^ uVar34;
      uVar34 = uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar39 << 7 | uVar39 >> 0x19) ^ uVar20 ^ uVar29 ^ uVar40;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar24 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar20 = uVar18 + 0x50f3b14f + uVar24;
      uVar20 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar22 = (uVar35 ^ uVar42) +
               (uVar20 ^ uVar24) + uVar21 + ((uVar17 | uVar43) & uVar36 | uVar17 & uVar43);
      uVar19 = ((uVar28 ^ uVar16) & uVar18 ^ uVar28) + uVar20 + uVar42 + uVar19;
      uVar20 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar16 = uVar14 << 0xf | uVar14 >> 0x11;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar24 = uVar16 ^ uVar32 ^ uVar42;
      uVar42 = uVar42 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar41 << 7 | uVar41 >> 0x19) ^ uVar16 ^ uVar26 ^ uVar32;
      uVar31 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar19 + 0xa1e7629e + uVar24;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar21 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar36 = (uVar37 ^ uVar38) +
               (uVar16 ^ uVar24) + uVar36 + ((uVar22 | uVar17) & uVar44 | uVar22 & uVar17);
      uVar28 = ((uVar18 ^ uVar20) & uVar19 ^ uVar20) + uVar16 + uVar38 + uVar28;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar16 = uVar15 << 0xf | uVar15 >> 0x11;
      uVar24 = uVar16 ^ uVar30 ^ uVar38;
      uVar17 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar38 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar35 << 7 | uVar35 >> 0x19) ^ uVar16 ^ uVar30 ^ uVar38 ^ uVar25;
      uVar24 = uVar28 + 0x43cec53d + uVar17;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar23 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar22 = (uVar40 ^ uVar39) +
               (uVar24 ^ uVar17) + uVar44 + ((uVar36 | uVar22) & uVar31 | uVar36 & uVar22);
      uVar20 = ((uVar21 ^ uVar19) & uVar28 ^ uVar21) + uVar24 + uVar39 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar16 = uVar34 << 0xf | uVar34 >> 0x11;
      uVar24 = uVar16 ^ uVar29 ^ uVar39;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar39 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar37 << 7 | uVar37 >> 0x19) ^ uVar16 ^ uVar29 ^ uVar39 ^ uVar27;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar20 + 0x879d8a7a + uVar24;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar17 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar31 = (uVar32 ^ uVar41) +
               (uVar16 ^ uVar24) + uVar31 + ((uVar22 | uVar36) & uVar23 | uVar22 & uVar36);
      uVar21 = ((uVar18 ^ uVar28) & uVar20 ^ uVar18) + uVar16 + uVar41 + uVar21;
      uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
      uVar28 = uVar42 << 0xf | uVar42 >> 0x11;
      uVar24 = uVar28 ^ uVar26 ^ uVar41;
      uVar16 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar24 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar40 << 7 | uVar40 >> 0x19) ^ uVar28 ^ uVar26 ^ uVar41 ^ uVar14;
      uVar28 = uVar21 + 0xf3b14f5 + uVar16;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar36 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar22 = (uVar30 ^ uVar35) +
               (uVar28 ^ uVar16) + uVar23 + ((uVar31 | uVar22) & uVar43 | uVar31 & uVar22);
      uVar18 = ((uVar17 ^ uVar20) & uVar21 ^ uVar17) + uVar28 + uVar35 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar16 = uVar38 << 0xf | uVar38 >> 0x11;
      uVar28 = uVar16 ^ uVar35 ^ uVar25;
      uVar35 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar32 << 7 | uVar32 >> 0x19) ^ uVar16 ^ uVar35 ^ uVar15 ^ uVar25;
      uVar28 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar18 + 0x1e7629ea + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar41 = (uVar29 ^ uVar37) +
               (uVar16 ^ uVar28) + uVar43 + ((uVar22 | uVar31) & uVar36 | uVar22 & uVar31);
      uVar31 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar20 = uVar21 >> 0xd | uVar21 << 0x13;
      uVar17 = ((uVar21 ^ uVar19) & uVar18 ^ uVar19) + uVar16 + uVar37 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar16 = uVar39 << 0xf | uVar39 >> 0x11;
      uVar28 = uVar16 ^ uVar37 ^ uVar27;
      uVar37 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar30 << 7 | uVar30 >> 0x19) ^ uVar16 ^ uVar37 ^ uVar34 ^ uVar27;
      uVar28 = uVar41 * 0x1000 | uVar41 >> 0x14;
      uVar16 = uVar17 + 0x3cec53d4 + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar23 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar21 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar22 = (uVar26 ^ uVar40) +
               (uVar16 ^ uVar28) + uVar36 + ((uVar41 | uVar22) & uVar31 | uVar41 & uVar22);
      uVar19 = ((uVar20 ^ uVar18) & uVar17 ^ uVar20) + uVar16 + uVar40 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar16 = uVar24 << 0xf | uVar24 >> 0x11;
      uVar28 = uVar16 ^ uVar40 ^ uVar14;
      uVar40 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar29 << 7 | uVar29 >> 0x19) ^ uVar16 ^ uVar40 ^ uVar42 ^ uVar14;
      uVar28 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar19 + 0x79d8a7a8 + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar43 = uVar41 * 0x200 | uVar41 >> 0x17;
      uVar18 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar41 = (uVar32 ^ uVar25) +
               (uVar16 ^ uVar28) + uVar31 + ((uVar22 | uVar41) & uVar23 | uVar22 & uVar41);
      uVar20 = ((uVar21 ^ uVar17) & uVar19 ^ uVar21) + uVar16 + uVar32 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar16 = uVar35 << 0xf | uVar35 >> 0x11;
      uVar28 = uVar16 ^ uVar32 ^ uVar15;
      uVar32 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar26 << 7 | uVar26 >> 0x19) ^ uVar16 ^ uVar32 ^ uVar38 ^ uVar15;
      uVar28 = uVar41 * 0x1000 | uVar41 >> 0x14;
      uVar16 = uVar20 + 0xf3b14f50 + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar21 = ((uVar18 ^ uVar19) & uVar20 ^ uVar18) + uVar16 + uVar30 + uVar21;
      uVar31 = (uVar30 ^ uVar27) +
               (uVar16 ^ uVar28) + uVar23 + ((uVar41 | uVar22) & uVar43 | uVar41 & uVar22);
      uVar44 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar19 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
      uVar16 = uVar37 << 0xf | uVar37 >> 0x11;
      uVar28 = uVar16 ^ uVar30 ^ uVar34;
      uVar30 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar25 << 7 | uVar25 >> 0x19) ^ uVar16 ^ uVar30 ^ uVar39 ^ uVar34;
      uVar28 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar16 = uVar21 + 0xe7629ea1 + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar36 = uVar41 * 0x200 | uVar41 >> 0x17;
      uVar22 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar23 = (uVar29 ^ uVar14) +
               (uVar16 ^ uVar28) + uVar43 + ((uVar31 | uVar41) & uVar44 | uVar31 & uVar41);
      uVar18 = ((uVar20 ^ uVar19) & uVar21 ^ uVar19) + uVar16 + uVar29 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar16 = uVar40 << 0xf | uVar40 >> 0x11;
      uVar28 = uVar16 ^ uVar29 ^ uVar42;
      uVar17 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar20 = uVar18 + 0xcec53d43 + uVar17;
      uVar29 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar27 << 7 | uVar27 >> 0x19) ^ uVar16 ^ uVar29 ^ uVar24 ^ uVar42;
      uVar28 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar41 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar20 = uVar21 >> 0xd | uVar21 << 0x13;
      uVar31 = (uVar26 ^ uVar15) +
               (uVar28 ^ uVar17) + uVar44 + ((uVar23 | uVar31) & uVar36 | uVar23 & uVar31);
      uVar19 = ((uVar22 ^ uVar21) & uVar18 ^ uVar22) + uVar28 + uVar26 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar16 = uVar32 << 0xf | uVar32 >> 0x11;
      uVar28 = uVar16 ^ uVar26 ^ uVar38;
      uVar26 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar14 << 7 | uVar14 >> 0x19) ^ uVar16 ^ uVar26 ^ uVar35 ^ uVar38;
      uVar28 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar16 = uVar19 + 0x9d8a7a87 + uVar28;
      uVar17 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar21 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar16 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar43 = (uVar34 ^ uVar25) +
               (uVar17 ^ uVar28) + uVar36 + ((uVar31 | uVar23) & uVar41 | uVar31 & uVar23);
      uVar22 = ((uVar20 ^ uVar18) & uVar19 ^ uVar20) + uVar17 + uVar25 + uVar22;
      uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
      uVar17 = uVar30 << 0xf | uVar30 >> 0x11;
      uVar28 = uVar17 ^ uVar39 ^ uVar25;
      uVar25 = uVar25 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                        (uVar15 << 7 | uVar15 >> 0x19) ^ uVar17 ^ uVar37 ^ uVar39;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar28 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar17 = uVar22 + 0x3b14f50f + uVar28;
      uVar18 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar17 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar23 = (uVar42 ^ uVar27) +
               (uVar18 ^ uVar28) + uVar41 + ((uVar43 | uVar31) & uVar21 | uVar43 & uVar31);
      uVar20 = ((uVar16 ^ uVar19) & uVar22 ^ uVar16) + uVar18 + uVar27 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar28 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar18 = uVar20 + 0x7629ea1e + uVar28;
      uVar19 = uVar18 * 0x80 | uVar18 >> 0x19;
      uVar18 = uVar22 >> 0xd | uVar22 << 0x13;
      uVar21 = (uVar38 ^ uVar14) +
               (uVar19 ^ uVar28) + uVar21 + ((uVar23 | uVar43) & uVar36 | uVar23 & uVar43);
      uVar16 = ((uVar22 ^ uVar17) & uVar20 ^ uVar17) + uVar19 + uVar14 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar19 = uVar16 + 0xec53d43c + uVar28;
      uVar31 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar22 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar41 = (uVar39 ^ uVar15) +
               (uVar22 ^ uVar28) + uVar36 + ((uVar21 | uVar23) & uVar44 | uVar21 & uVar23);
      uVar17 = ((uVar18 ^ uVar20) & uVar16 ^ uVar18) + uVar22 + uVar15 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar22 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar28 = uVar41 * 0x1000 | uVar41 >> 0x14;
      uVar20 = uVar17 + 0xd8a7a879 + uVar28;
      uVar23 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar20 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar43 = (uVar24 ^ uVar34) +
               (uVar23 ^ uVar28) + uVar44 + ((uVar41 | uVar21) & uVar31 | uVar41 & uVar21);
      uVar18 = ((uVar19 ^ uVar16) & uVar17 ^ uVar19) + uVar23 + uVar34 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar16 = uVar18 + 0xb14f50f3 + uVar28;
      uVar21 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar36 = uVar41 * 0x200 | uVar41 >> 0x17;
      uVar23 = (uVar35 ^ uVar42) +
               (uVar21 ^ uVar28) + uVar31 + ((uVar41 | uVar43) & uVar22 | uVar41 & uVar43);
      uVar16 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar19 = ((uVar20 ^ uVar17) & uVar18 ^ uVar20) + uVar21 + uVar42 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar28 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar17 = uVar19 + 0x629ea1e7 + uVar28;
      uVar21 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar17 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar20 = ((uVar18 ^ uVar16) & uVar19 ^ uVar16) + uVar21 + uVar38 + uVar20;
      uVar21 = (uVar37 ^ uVar38) +
               (uVar21 ^ uVar28) + uVar22 + ((uVar23 | uVar43) & uVar36 | uVar23 & uVar43);
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar31 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar18 = uVar20 + 0xc53d43ce + uVar28;
      uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
      uVar41 = (uVar40 ^ uVar39) +
               (uVar18 ^ uVar28) + uVar36 + ((uVar21 | uVar23) & uVar44 | uVar21 & uVar23);
      uVar16 = ((uVar17 ^ uVar19) & uVar20 ^ uVar17) + uVar18 + uVar39 + uVar16;
      uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar41 * 0x1000 | uVar41 >> 0x14;
      uVar22 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar19 = uVar16 + 0x8a7a879d + uVar28;
      uVar23 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar39 = (uVar32 ^ uVar24) +
               (uVar23 ^ uVar28) + uVar44 + ((uVar41 | uVar21) & uVar31 | uVar41 & uVar21);
      uVar17 = ((uVar18 ^ uVar20) & uVar16 ^ uVar18) + uVar23 + uVar24 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar28 = uVar39 * 0x1000 | uVar39 >> 0x14;
      uVar36 = uVar41 * 0x200 | uVar41 >> 0x17;
      uVar20 = uVar17 + 0x14f50f3b + uVar28;
      uVar21 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar20 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar23 = (uVar30 ^ uVar35) +
               (uVar21 ^ uVar28) + uVar31 + ((uVar39 | uVar41) & uVar22 | uVar39 & uVar41);
      uVar18 = ((uVar19 ^ uVar16) & uVar17 ^ uVar19) + uVar21 + uVar35 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar16 = uVar18 + 0x29ea1e76 + uVar28;
      uVar21 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar41 = uVar39 * 0x200 | uVar39 >> 0x17;
      uVar16 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar31 = (uVar29 ^ uVar37) +
               (uVar21 ^ uVar28) + uVar22 + ((uVar23 | uVar39) & uVar36 | uVar23 & uVar39);
      uVar19 = ((uVar17 ^ uVar20) & uVar18 ^ uVar20) + uVar21 + uVar37 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar39 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar28 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar17 = uVar19 + 0x53d43cec + uVar28;
      uVar17 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar21 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar23 = (uVar26 ^ uVar40) +
               (uVar17 ^ uVar28) + uVar36 + ((uVar31 | uVar23) & uVar41 | uVar31 & uVar23);
      uVar20 = ((uVar16 ^ uVar18) & uVar19 ^ uVar16) + uVar17 + uVar40 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar17 = uVar20 + 0xa7a879d8 + uVar28;
      uVar17 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar22 = (uVar32 ^ uVar25) +
               (uVar17 ^ uVar28) + uVar41 + ((uVar23 | uVar31) & uVar39 | uVar23 & uVar31);
      uVar16 = ((uVar21 ^ uVar19) & uVar20 ^ uVar21) + uVar17 + uVar32 + uVar16;
      uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar19 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar17 = uVar29 << 0xf | uVar29 >> 0x11;
      uVar28 = uVar17 ^ uVar24 ^ uVar27;
      uVar31 = uVar16 + 0x4f50f3b1 + uVar19;
      uVar31 = uVar31 * 0x80 | uVar31 >> 0x19;
      uVar41 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar28 = (uVar31 ^ uVar19) +
               ((uVar22 | uVar23) & uVar36 | uVar22 & uVar23) + uVar39 +
               ((uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                (uVar34 << 7 | uVar34 >> 0x19) ^ uVar17 ^ uVar30 ^ uVar40 ^ uVar24 ^ uVar27);
      uVar17 = uVar28 * 0x1000 | uVar28 >> 0x14;
      uVar23 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar21 = ((uVar18 ^ uVar20) & uVar16 ^ uVar18) + uVar31 + uVar30 + uVar21;
      uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
      uVar34 = uVar26 << 0xf | uVar26 >> 0x11;
      uVar27 = uVar34 ^ uVar35 ^ uVar14;
      uVar24 = uVar21 + 0x9ea1e762 + uVar17;
      uVar19 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar24 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar42 = (uVar19 ^ uVar17) +
               ((uVar28 | uVar22) & uVar41 | uVar28 & uVar22) + uVar36 +
               ((uVar27 << 0xf | uVar27 >> 0x11) ^ (uVar27 >> 9 | uVar27 << 0x17) ^
                (uVar42 << 7 | uVar42 >> 0x19) ^ uVar34 ^ uVar29 ^ uVar32 ^ uVar35 ^ uVar14);
      uVar17 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar14 = uVar42 * 0x1000 | uVar42 >> 0x14;
      uVar18 = ((uVar16 ^ uVar23) & uVar21 ^ uVar23) + uVar19 + uVar29 + uVar18;
      uVar27 = uVar25 << 0xf | uVar25 >> 0x11;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar34 = uVar27 ^ uVar37 ^ uVar15;
      uVar16 = uVar18 + 0x3d43cec5 + uVar14;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar23 = ((uVar17 ^ uVar21) & uVar18 ^ uVar17) + uVar16 + uVar26 + uVar23;
      local_58 = local_58 ^ uVar42;
      param_1[1] = local_58;
      *param_1 = *param_1 ^
                 (uVar16 ^ uVar14) +
                 ((uVar42 | uVar28) & uVar24 | uVar42 & uVar28) + uVar41 +
                 ((uVar34 << 0xf | uVar34 >> 0x11) ^ (uVar34 >> 9 | uVar34 << 0x17) ^
                  (uVar38 << 7 | uVar38 >> 0x19) ^ uVar27 ^ uVar26 ^ uVar30 ^ uVar37 ^ uVar15);
      local_64 = local_64 ^ (uVar28 * 0x200 | uVar28 >> 0x17);
      param_1[2] = local_64;
      local_50 = local_50 ^ uVar24;
      param_1[3] = local_50;
      local_4c = local_4c ^ uVar18;
      uVar33 = (uVar23 >> 0xf | uVar23 * 0x20000) ^ (uVar23 * 0x200 | uVar23 >> 0x17) ^ uVar33 ^
               uVar23;
      param_1[5] = local_4c;
      local_5c = local_5c ^ (uVar21 >> 0xd | uVar21 << 0x13);
      param_1[6] = local_5c;
      local_48 = local_48 ^ uVar17;
      param_1[4] = uVar33;
      param_1[7] = local_48;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143db8ed0 sm3_final body=488 status=ok
// SIG undefined sm3_final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sm3_final(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x1a];
  puVar1 = param_2 + 10;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    sm3_block_data_order(param_2,puVar1,1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(undefined1 *)((longlong)param_2 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_2 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_2 + 99) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)((longlong)param_2 + 0x65) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_2 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_2 + 0x67) = *(undefined1 *)(param_2 + 8);
  sm3_block_data_order(param_2,puVar1,1);
  param_2[0x1a] = 0;
  FUN_14004ff40(puVar1,0x40);
  uVar3 = *param_2;
  *param_1 = (char)((uint)uVar3 >> 0x18);
  param_1[1] = (char)((uint)uVar3 >> 0x10);
  param_1[2] = (char)((uint)uVar3 >> 8);
  param_1[3] = (char)uVar3;
  uVar3 = param_2[1];
  param_1[4] = (char)((uint)uVar3 >> 0x18);
  param_1[5] = (char)((uint)uVar3 >> 0x10);
  param_1[6] = (char)((uint)uVar3 >> 8);
  param_1[7] = (char)uVar3;
  uVar3 = param_2[2];
  param_1[8] = (char)((uint)uVar3 >> 0x18);
  param_1[9] = (char)((uint)uVar3 >> 0x10);
  param_1[10] = (char)((uint)uVar3 >> 8);
  param_1[0xb] = (char)uVar3;
  uVar3 = param_2[3];
  param_1[0xc] = (char)((uint)uVar3 >> 0x18);
  param_1[0xd] = (char)((uint)uVar3 >> 0x10);
  param_1[0xe] = (char)((uint)uVar3 >> 8);
  param_1[0xf] = (char)uVar3;
  uVar3 = param_2[4];
  param_1[0x10] = (char)((uint)uVar3 >> 0x18);
  param_1[0x11] = (char)((uint)uVar3 >> 0x10);
  param_1[0x12] = (char)((uint)uVar3 >> 8);
  param_1[0x13] = (char)uVar3;
  uVar3 = param_2[5];
  param_1[0x14] = (char)((uint)uVar3 >> 0x18);
  param_1[0x15] = (char)((uint)uVar3 >> 0x10);
  param_1[0x16] = (char)((uint)uVar3 >> 8);
  param_1[0x17] = (char)uVar3;
  uVar3 = param_2[6];
  param_1[0x18] = (char)((uint)uVar3 >> 0x18);
  param_1[0x19] = (char)((uint)uVar3 >> 0x10);
  param_1[0x1a] = (char)((uint)uVar3 >> 8);
  param_1[0x1b] = (char)uVar3;
  uVar3 = param_2[7];
  param_1[0x1c] = (char)((uint)uVar3 >> 0x18);
  param_1[0x1d] = (char)((uint)uVar3 >> 0x10);
  param_1[0x1e] = (char)((uint)uVar3 >> 8);
  param_1[0x1f] = (char)uVar3;
  return 1;
}



// FUNCTION 143db90c0 FUN_143db90c0 body=102 status=ok
// SIG undefined FUN_143db90c0(void)

undefined8 FUN_143db90c0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *param_1 = 0x7380166f;
  param_1[1] = 0x4914b2b9;
  param_1[2] = 0x172442d7;
  param_1[3] = 0xda8a0600;
  param_1[4] = 0xa96f30bc;
  param_1[5] = 0x163138aa;
  param_1[6] = 0xe38dee4d;
  param_1[7] = 0xb0fb0e4e;
  return 1;
}



// FUNCTION 143db9130 sm3_update body=307 status=ok
// SIG undefined sm3_update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sm3_update(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    uVar3 = *(uint *)(param_1 + 0x20) + (int)param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x20)) {
      iVar2 = iVar2 + 1;
    }
    *(uint *)(param_1 + 0x20) = uVar3;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x68);
    *(int *)(param_1 + 0x24) = (int)(param_3 >> 0x1d) + iVar2;
    if (uVar4 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x28);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar4;
      _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),param_2,_Size);
      sm3_block_data_order(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x68) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    uVar4 = param_3 >> 6;
    if (uVar4 != 0) {
      sm3_block_data_order(param_1,param_2,uVar4);
      param_2 = (void *)((longlong)param_2 + uVar4 * 0x40);
      param_3 = param_3 + uVar4 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x68) = (int)param_3;
      _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x28),param_2,param_3);
    }
  }
  return 1;
}



// FUNCTION 143db9270 BN_mod_exp2_mont body=1712 status=ok
// SIG undefined BN_mod_exp2_mont(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong BN_mod_exp2_mont(ulonglong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                          longlong param_5,undefined8 *param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined8 local_2a8;
  uint local_2a0;
  longlong local_298;
  ulonglong local_290;
  int local_288;
  ulonglong local_280;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  longlong local_260 [32];
  longlong alStack_160 [33];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  local_270 = param_8;
  local_260[0] = param_5;
  local_2a8 = param_7;
  local_298 = 0;
  local_280 = param_1;
  local_268 = param_3;
  if ((*(byte *)*param_6 & 1) == 0) {
    local_2b8 = CONCAT44(local_2b8._4_4_,0x24);
    ERR_put_error(3,0x76,0x66,"crypto\\bn\\bn_exp2.c");
    return 0;
  }
  iVar1 = BN_num_bits(param_3);
  iVar2 = BN_num_bits(param_5);
  if ((iVar1 == 0) && (iVar2 == 0)) {
    uVar5 = BN_set_word(param_1,1);
    return uVar5;
  }
  local_288 = iVar2;
  if (iVar2 < iVar1) {
    local_288 = iVar1;
  }
  BN_CTX_start(param_7);
  local_290 = BN_CTX_get(param_7);
  local_278 = BN_CTX_get(param_7);
  lVar6 = BN_CTX_get(param_7);
  local_260[1] = lVar6;
  lVar7 = BN_CTX_get(param_7);
  alStack_160[1] = lVar7;
  if (lVar7 == 0) goto LAB_143db98cd;
  if (local_270 == 0) {
    local_298 = BN_MONT_CTX_new();
    if (local_298 == 0) {
      uVar10 = 0;
    }
    else {
      iVar3 = BN_MONT_CTX_set(local_298,param_6,param_7);
      if (iVar3 != 0) goto LAB_143db93e4;
      uVar10 = 0;
    }
  }
  else {
    local_298 = local_270;
LAB_143db93e4:
    local_2a0 = 1;
    if (iVar1 < 0x2a0) {
      if (iVar1 < 0xf0) {
        if (iVar1 < 0x50) {
          if (0x17 < iVar1) {
            local_2a0 = 3;
          }
        }
        else {
          local_2a0 = 4;
        }
      }
      else {
        local_2a0 = 5;
      }
    }
    else {
      local_2a0 = 6;
    }
    uVar13 = local_2a0;
    uVar16 = 6;
    if (iVar2 < 0x2a0) {
      if (iVar2 < 0xf0) {
        if (iVar2 < 0x50) {
          uVar16 = 1;
          if (0x17 < iVar2) {
            uVar16 = 3;
          }
        }
        else {
          uVar16 = 4;
        }
      }
      else {
        uVar16 = 5;
      }
    }
    if ((*(int *)(param_2 + 0x10) != 0) ||
       (iVar1 = BN_ucmp(param_2,param_6), uVar9 = local_2a8, -1 < iVar1)) {
      uVar9 = local_2a8;
      local_2b8 = local_2a8;
      iVar1 = BN_div(0,lVar6,param_2,param_6);
      param_2 = lVar6;
      param_7 = uVar9;
      if (iVar1 == 0) goto LAB_143db98cd;
    }
    iVar1 = BN_is_zero(param_2);
    if (iVar1 == 0) {
      iVar1 = BN_to_montgomery(lVar6,param_2,local_298,uVar9);
      uVar5 = local_290;
      param_7 = local_2a8;
      if (iVar1 != 0) {
        uVar11 = local_2a8;
        if (1 < uVar13) {
          local_2b8 = uVar9;
          iVar1 = BN_mod_mul_montgomery(local_290,lVar6,lVar6,local_298);
          uVar11 = local_2a8;
          param_7 = uVar11;
          if (iVar1 == 0) goto LAB_143db98cd;
          lVar6 = 1;
          lVar14 = (longlong)(1 << ((char)uVar13 - 1U & 0x1f));
          if (1 < lVar14) {
            do {
              lVar8 = BN_CTX_get(uVar11);
              local_260[lVar6 + 1] = lVar8;
              if (lVar8 == 0) goto LAB_143db98cd;
              local_2b8 = uVar11;
              iVar1 = BN_mod_mul_montgomery(lVar8,local_260[lVar6],uVar5,local_298);
              if (iVar1 == 0) goto LAB_143db98cd;
              lVar6 = lVar6 + 1;
            } while (lVar6 < lVar14);
          }
        }
        uVar10 = 1;
        if (((*(int *)(param_4 + 0x10) == 0) && (iVar1 = BN_ucmp(param_4,param_6), iVar1 < 0)) ||
           (local_2b8 = uVar11, iVar1 = BN_div(0,lVar7,param_4,param_6), param_4 = lVar7,
           param_7 = local_2a8, iVar1 != 0)) {
          iVar1 = BN_is_zero(param_4);
          lVar6 = local_298;
          if (iVar1 != 0) {
            BN_set_word(local_280,0);
            param_7 = local_2a8;
            goto LAB_143db98cf;
          }
          iVar1 = BN_to_montgomery(lVar7,param_4,local_298,uVar11);
          param_7 = local_2a8;
          if (iVar1 != 0) {
            if (1 < uVar16) {
              local_2b8 = uVar11;
              iVar1 = BN_mod_mul_montgomery(uVar5,lVar7,lVar7,lVar6);
              param_7 = local_2a8;
              if (iVar1 == 0) goto LAB_143db98cd;
              lVar7 = (longlong)(1 << ((char)uVar16 - 1U & 0x1f));
              if (1 < lVar7) {
                do {
                  lVar14 = BN_CTX_get(uVar11);
                  alStack_160[uVar10 + 1] = lVar14;
                  param_7 = local_2a8;
                  if ((lVar14 == 0) ||
                     (local_2b8 = uVar11,
                     iVar1 = BN_mod_mul_montgomery(lVar14,alStack_160[uVar10],uVar5,lVar6),
                     param_7 = local_2a8, iVar1 == 0)) goto LAB_143db98cd;
                  uVar10 = uVar10 + 1;
                } while ((longlong)uVar10 < lVar7);
              }
            }
            uVar10 = 0;
            local_290 = CONCAT44(local_290._4_4_,1);
            uVar9 = BN_value_one();
            iVar1 = BN_to_montgomery(local_278,uVar9,lVar6,local_2a8);
            param_7 = local_2a8;
            if (iVar1 != 0) {
              iVar1 = local_288 + -1;
              if (-1 < iVar1) {
                iVar2 = local_288 + -2;
                local_288 = uVar16 - local_2a0;
                local_2a0 = 2 - uVar16;
                uVar12 = uVar10;
                uVar5 = uVar10;
                uVar15 = uVar10;
                iVar3 = (int)local_290;
                do {
                  uVar13 = local_2a0;
                  param_7 = local_2a8;
                  if (iVar3 == 0) {
                    local_2b8 = local_2a8;
                    iVar3 = BN_mod_mul_montgomery(local_278,local_278,local_278,local_298);
                    if (iVar3 == 0) goto LAB_143db98cd;
                  }
                  uVar9 = local_268;
                  if (((int)uVar10 == 0) && (iVar3 = BN_is_bit_set(local_268,iVar1), iVar3 != 0)) {
                    uVar15 = (ulonglong)(local_288 + uVar13 + iVar2);
                    iVar3 = BN_is_bit_set(uVar9,uVar15);
                    while (iVar3 == 0) {
                      uVar15 = (ulonglong)((int)uVar15 + 1);
                      iVar3 = BN_is_bit_set(uVar9,uVar15);
                    }
                    uVar10 = 1;
                    for (iVar3 = iVar2; (int)uVar15 <= iVar3; iVar3 = iVar3 + -1) {
                      uVar13 = (int)uVar10 * 2;
                      iVar4 = BN_is_bit_set(uVar9,iVar3);
                      if (iVar4 != 0) {
                        uVar13 = uVar13 + 1;
                      }
                      uVar10 = (ulonglong)uVar13;
                    }
                  }
                  lVar6 = local_260[0];
                  if (((int)uVar5 == 0) && (iVar3 = BN_is_bit_set(local_260[0],iVar1), iVar3 != 0))
                  {
                    uVar12 = (ulonglong)(local_2a0 + iVar2);
                    iVar3 = BN_is_bit_set(lVar6,uVar12);
                    while (iVar3 == 0) {
                      uVar12 = (ulonglong)((int)uVar12 + 1);
                      iVar3 = BN_is_bit_set(lVar6,uVar12);
                    }
                    uVar5 = 1;
                    for (iVar3 = iVar2; (int)uVar12 <= iVar3; iVar3 = iVar3 + -1) {
                      uVar13 = (int)uVar5 * 2;
                      iVar4 = BN_is_bit_set(lVar6,iVar3);
                      if (iVar4 != 0) {
                        uVar13 = uVar13 + 1;
                      }
                      uVar5 = (ulonglong)uVar13;
                    }
                  }
                  param_7 = local_2a8;
                  if (((int)uVar10 == 0) || (iVar1 != (int)uVar15)) {
                    iVar3 = (int)local_290;
                  }
                  else {
                    local_2b8 = local_2a8;
                    iVar3 = BN_mod_mul_montgomery
                                      (local_278,local_278,
                                       local_260[((longlong)(int)uVar10 >> 1) + 1],local_298);
                    uVar10 = 0;
                    if (iVar3 == 0) goto LAB_143db98cf;
                    local_290 = local_290 & 0xffffffff00000000;
                    iVar3 = 0;
                  }
                  if (((int)uVar5 != 0) && (iVar1 == (int)uVar12)) {
                    local_2b8 = param_7;
                    iVar3 = BN_mod_mul_montgomery
                                      (local_278,local_278,
                                       alStack_160[((longlong)(int)uVar5 >> 1) + 1],local_298);
                    if (iVar3 == 0) goto LAB_143db98cd;
                    iVar3 = 0;
                    local_290 = local_290 & 0xffffffff00000000;
                    uVar5 = 0;
                  }
                  iVar2 = iVar2 + -1;
                  iVar1 = iVar1 + -1;
                  lVar6 = local_298;
                } while (-1 < iVar1);
              }
              iVar1 = BN_from_montgomery(local_280,local_278,lVar6,param_7);
              uVar10 = (ulonglong)(iVar1 != 0);
              local_280 = uVar10;
            }
            goto LAB_143db98cf;
          }
        }
      }
LAB_143db98cd:
      uVar10 = 0;
    }
    else {
      BN_set_word(local_280,0);
      local_280 = CONCAT44(local_280._4_4_,1);
      uVar10 = local_280;
      param_7 = local_2a8;
    }
LAB_143db98cf:
    if (local_270 != 0) goto LAB_143db98e4;
  }
  BN_MONT_CTX_free(local_298);
LAB_143db98e4:
  BN_CTX_end(param_7);
  return uVar10 & 0xffffffff;
}



// FUNCTION 143db9930 ERR_print_errors body=32 status=ok
// SIG undefined ERR_print_errors(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ERR_print_errors(undefined8 param_1)

{
  ERR_print_errors_cb(write_bio,param_1);
  return;
}



// FUNCTION 143db9950 ERR_print_errors_cb body=304 status=ok
// SIG undefined ERR_print_errors_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ERR_print_errors_cb(code *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_1178 [32];
  undefined1 *local_1158;
  undefined8 local_1150;
  undefined4 local_1148;
  undefined1 *local_1140;
  byte local_1138 [4];
  undefined4 local_1134;
  undefined1 *local_1130;
  undefined8 local_1128 [2];
  undefined1 local_1118 [256];
  char local_1018 [4096];
  ulonglong local_18;
  undefined8 local_10;
  longlong lVar5;
  
  local_10 = 0x143db9965;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1178;
  uVar2 = CRYPTO_THREAD_get_current_id();
  iVar3 = ERR_get_error_line_data(local_1128,&local_1134,&local_1130,local_1138);
  while( true ) {
    if (iVar3 == 0) {
      return;
    }
    ERR_error_string_n(iVar3,local_1118,0x100);
    local_1140 = &DAT_143f3f584;
    if ((local_1138[0] & 2) != 0) {
      local_1140 = local_1130;
    }
    local_1148 = local_1134;
    local_1150 = local_1128[0];
    local_1158 = local_1118;
    BIO_snprintf(local_1018,0x1000,"%lu:%s:%s:%d:%s\n",uVar2);
    lVar5 = -1;
    do {
      lVar4 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = lVar4;
    } while (local_1018[lVar1] != '\0');
    iVar3 = (*param_1)(local_1018,lVar4,param_2);
    if (iVar3 < 1) break;
    iVar3 = ERR_get_error_line_data(local_1128,&local_1134,&local_1130,local_1138);
  }
  return;
}



// FUNCTION 143db9a80 X509V3_EXT_print body=848 status=ok
// SIG undefined X509V3_EXT_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509V3_EXT_print(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar11;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 uStack_30;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uStack_30 = 0x143db9aa2;
  uVar10 = 1;
  uVar8 = 0;
  local_38 = 0;
  uVar9 = 0;
  uVar3 = X509_EXTENSION_get_data(param_2);
  local_48 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
             ::GetBoundProgramCounterForTimerManager(uVar3);
  uVar1 = FRollingHash::GetWindowSize(uVar3);
  lVar4 = X509V3_EXT_get(param_2);
  if (lVar4 == 0) {
    if ((param_3 & 0xf0000) == 0) {
      return 0;
    }
    lVar4 = local_40;
    if ((param_3 & 0xf0000) == 0x10000) {
      BIO_printf(param_1,"%*s<Not Supported>",param_4,&DAT_143f3f584);
      return 1;
    }
LAB_143db9b07:
    local_40 = lVar4;
    if ((param_3 & 0xf0000) == 0x20000) {
      uVar10 = ASN1_parse_dump(param_1,local_48,uVar1,param_4,CONCAT44(uVar11,0xffffffff));
    }
    else if ((param_3 & 0xf0000) == 0x30000) {
      uVar10 = BIO_dump_indent(param_1,local_48,uVar1,param_4);
    }
    return uVar10;
  }
  if (*(code **)(lVar4 + 8) == (code *)0x0) {
    local_40 = (**(code **)(lVar4 + 0x20))(0,&local_48,uVar1);
  }
  else {
    uVar3 = (**(code **)(lVar4 + 8))();
    local_40 = ASN1_item_d2i(0,&local_48,uVar1,uVar3);
  }
  if (local_40 == 0) {
    if ((param_3 & 0xf0000) == 0) {
      return 0;
    }
    lVar4 = 0;
    if ((param_3 & 0xf0000) == 0x10000) {
      BIO_printf(param_1,"%*s<Parse Error>",param_4,&DAT_143f3f584);
      return 1;
    }
    goto LAB_143db9b07;
  }
  if (*(code **)(lVar4 + 0x30) == (code *)0x0) {
    if (*(code **)(lVar4 + 0x40) == (code *)0x0) {
      if ((*(code **)(lVar4 + 0x50) != (code *)0x0) &&
         (iVar2 = (**(code **)(lVar4 + 0x50))(lVar4,local_40,param_1,param_4), uVar10 = 1,
         iVar2 != 0)) goto LAB_143db9d67;
    }
    else {
      uVar9 = (**(code **)(lVar4 + 0x40))(lVar4,local_40,0);
      if (uVar9 != 0) {
        uVar6 = *(uint *)(lVar4 + 4) & 4;
        if ((uVar6 == 0) || (iVar2 = OPENSSL_sk_num(uVar9), iVar2 == 0)) {
          BIO_printf(param_1,&DAT_145d811b8,param_4,&DAT_143f3f584);
          iVar2 = OPENSSL_sk_num(uVar9);
          if (iVar2 == 0) {
            BIO_puts(param_1,"<EMPTY>\n");
          }
        }
        iVar2 = OPENSSL_sk_num(uVar9);
        if (0 < iVar2) {
          do {
            if (uVar6 == 0) {
              if (0 < (int)uVar8) {
                BIO_printf(param_1,&DAT_145cbbc74);
              }
            }
            else {
              BIO_printf(param_1,&DAT_145d811b8,param_4,&DAT_143f3f584);
            }
            lVar5 = OPENSSL_sk_value(uVar9,uVar8);
            if (*(longlong *)(lVar5 + 8) == 0) {
              BIO_puts(param_1,*(undefined8 *)(lVar5 + 0x10));
            }
            else if (*(longlong *)(lVar5 + 0x10) == 0) {
              BIO_puts(param_1,*(longlong *)(lVar5 + 8));
            }
            else {
              BIO_printf(param_1,"%s:%s");
            }
            if (uVar6 != 0) {
              BIO_puts(param_1,&DAT_143fc48d8);
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            iVar2 = OPENSSL_sk_num(uVar9);
            uVar10 = 1;
          } while ((int)uVar7 < iVar2);
        }
        goto LAB_143db9d67;
      }
    }
  }
  else {
    local_38 = (**(code **)(lVar4 + 0x30))(lVar4,local_40);
    uVar9 = uVar8;
    if (local_38 != 0) {
      BIO_printf(param_1,"%*s%s",param_4,&DAT_143f3f584,local_38);
      goto LAB_143db9d67;
    }
  }
  uVar10 = 0;
LAB_143db9d67:
  OPENSSL_sk_pop_free(uVar9,X509V3_conf_free);
  CRYPTO_free(local_38,"crypto\\x509v3\\v3_prn.c",0x82);
  if (*(code **)(lVar4 + 8) == (code *)0x0) {
    (**(code **)(lVar4 + 0x18))(local_40);
    return uVar10;
  }
  uVar3 = (**(code **)(lVar4 + 8))();
  ASN1_item_free(local_40,uVar3);
  return uVar10;
}



// FUNCTION 143db9dd0 X509V3_extensions_print body=405 status=ok
// SIG undefined X509V3_extensions_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509V3_extensions_print
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143db9df2;
  iVar1 = OPENSSL_sk_num(param_3);
  if (0 < iVar1) {
    if (param_2 != 0) {
      BIO_printf(param_1,"%*s%s:\n",param_5,&DAT_143f3f584,param_2,uVar5);
      param_5 = param_5 + 4;
    }
    iVar3 = 0;
    iVar1 = OPENSSL_sk_num(param_3);
    if (0 < iVar1) {
      do {
        uVar5 = OPENSSL_sk_value(param_3,iVar3);
        if ((param_5 != 0) &&
           (iVar1 = BIO_printf(param_1,&DAT_145d811b8,param_5,&DAT_143f3f584), iVar1 < 1)) {
          return 0;
        }
        uVar2 = EVP_MD_CTX_md(uVar5);
        i2a_ASN1_OBJECT(param_1,uVar2);
        iVar1 = X509_EXTENSION_get_critical(uVar5);
        pcVar4 = "";
        if (iVar1 != 0) {
          pcVar4 = "critical";
        }
        iVar1 = BIO_printf(param_1,": %s\n",pcVar4);
        if (iVar1 < 1) {
          return 0;
        }
        iVar1 = X509V3_EXT_print(param_1,uVar5,param_4,param_5 + 4);
        if (iVar1 == 0) {
          BIO_printf(param_1,&DAT_145d811b8,param_5 + 4,&DAT_143f3f584);
          uVar5 = X509_EXTENSION_get_data(uVar5);
          ASN1_STRING_print(param_1,uVar5);
        }
        iVar1 = BIO_write(param_1,&DAT_143fc48d8,1);
        if (iVar1 < 1) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        iVar1 = OPENSSL_sk_num(param_3);
      } while (iVar3 < iVar1);
    }
  }
  return 1;
}



// FUNCTION 143db9f70 PKCS12_verify_mac body=248 status=ok
// SIG undefined PKCS12_verify_mac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 PKCS12_verify_mac(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  int *local_78;
  code *local_70;
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143db9f7c;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 8) == 0) {
    local_78 = (int *)CONCAT44(local_78._4_4_,0x9d);
    uVar3 = 0x6c;
  }
  else {
    local_70 = PKCS12_key_gen_utf8;
    local_78 = local_68;
    iVar1 = pkcs12_gen_mac();
    if (iVar1 != 0) {
      ECDSA_SIG_get0(**(undefined8 **)(param_1 + 8),0,&local_60);
      iVar1 = FRollingHash::GetWindowSize(local_60);
      if (local_68[0] != iVar1) {
        return 0;
      }
      uVar2 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
              ::GetBoundProgramCounterForTimerManager(local_60);
      iVar1 = FUN_14004ffa0(local_58,uVar2,local_68[0]);
      if (iVar1 != 0) {
        return 0;
      }
      return 1;
    }
    local_78 = (int *)CONCAT44(local_78._4_4_,0xa2);
    uVar3 = 0x6d;
  }
  ERR_put_error(0x23,0x7e,uVar3,"crypto\\pkcs12\\p12_mutl.c");
  return 0;
}



// FUNCTION 143dba070 pkcs12_gen_mac body=865 status=ok
// SIG undefined pkcs12_gen_mac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
pkcs12_gen_mac(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined8 param_5,code *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *pcVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  longlong local_160;
  int local_158;
  undefined4 *local_150;
  longlong local_148;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_b8 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined8 uVar14;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar14 = 0;
  uVar13 = 0;
  local_110 = param_5;
  local_118 = PKCS12_key_gen_utf8;
  if (param_6 != (code *)0x0) {
    local_118 = param_6;
  }
  lVar12 = 0;
  local_138 = param_3;
  local_130 = param_2;
  local_108 = param_4;
  iVar4 = OBJ_obj2nid(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  if (iVar4 != 0x15) {
    _local_168 = CONCAT44(uStack_164,0x5c);
    ERR_put_error(0x23,0x6b,0x79,"crypto\\pkcs12\\p12_mutl.c");
    return 0;
  }
  puVar11 = *(undefined8 **)(param_1 + 8);
  uVar2 = *(undefined8 *)((undefined4 *)puVar11[1] + 2);
  uVar1 = *(undefined4 *)puVar11[1];
  if (puVar11[2] == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = ASN1_INTEGER_get(puVar11[2]);
    puVar11 = *(undefined8 **)(param_1 + 8);
  }
  ECDSA_SIG_get0(*puVar11,&local_128,0);
  X509_ALGOR_get0(&local_120,0,0,local_128);
  uVar6 = OBJ_obj2nid(local_120);
  uVar8 = OBJ_nid2sn(uVar6);
  lVar9 = EVP_get_digestbyname(uVar8);
  if (lVar9 == 0) {
    _local_168 = CONCAT44(uStack_164,0x69);
    ERR_put_error(0x23,0x6b,0x76,"crypto\\pkcs12\\p12_mutl.c");
    return 0;
  }
  iVar4 = EVP_MD_size(lVar9);
  iVar7 = FRollingHash::GetWindowSize(lVar9);
  if (iVar4 < 0) {
    return 0;
  }
  if (((iVar7 == 0x329) || (iVar7 - 0x3d6U < 2)) &&
     (pcVar10 = getenv("LEGACY_GOST_PKCS12"), pcVar10 == (char *)0x0)) {
    iVar4 = 0x20;
    local_150 = local_b8;
    local_158 = 0x60;
    local_160 = lVar9;
    local_168 = uVar5;
    iVar7 = PKCS5_PBKDF2_HMAC(local_130,local_138,uVar2,uVar1);
    if (iVar7 == 0) {
      local_168 = 0x77;
      ERR_put_error(0x23,0x6b,0x6b,"crypto\\pkcs12\\p12_mutl.c");
      goto LAB_143dba2eb;
    }
    local_f8 = local_78;
    uStack_f4 = uStack_74;
    uStack_f0 = uStack_70;
    uStack_ec = uStack_6c;
    local_e8 = local_68;
    uStack_e4 = uStack_64;
    uStack_e0 = uStack_60;
    uStack_dc = uStack_5c;
    FUN_14004ff40(local_b8,0x60);
  }
  else {
    local_150 = &local_f8;
    local_160 = CONCAT44(local_160._4_4_,uVar5);
    local_168 = 3;
    local_158 = iVar4;
    local_148 = lVar9;
    iVar7 = (*local_118)(local_130,local_138,uVar2,uVar1);
    if (iVar7 == 0) {
      local_168 = 0x7d;
      ERR_put_error(0x23,0x6b,0x6b,"crypto\\pkcs12\\p12_mutl.c");
      goto LAB_143dba2eb;
    }
  }
  lVar12 = HMAC_CTX_new();
  uVar13 = uVar14;
  if (lVar12 != 0) {
    local_168 = 0;
    uStack_164 = 0;
    iVar4 = HMAC_Init_ex(lVar12,&local_f8,iVar4,lVar9);
    if ((iVar4 != 0) &&
       (piVar3 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x20),
       iVar4 = HMAC_Update(lVar12,*(undefined8 *)(piVar3 + 2),(longlong)*piVar3), iVar4 != 0)) {
      iVar4 = HMAC_Final(lVar12,local_108,local_110);
      uVar13 = 0;
      if (iVar4 != 0) {
        uVar13 = 1;
      }
    }
  }
LAB_143dba2eb:
  FUN_14004ff40(&local_f8,0x40);
  HMAC_CTX_free(lVar12);
  return uVar13;
}



// FUNCTION 143dba430 PKCS12_AUTHSAFES_it body=8 status=ok
// SIG undefined PKCS12_AUTHSAFES_it(void)

undefined * PKCS12_AUTHSAFES_it(void)

{
  return &DAT_145db6b20;
}



// FUNCTION 143dba440 PKCS12_SAFEBAGS_it body=8 status=ok
// SIG undefined PKCS12_SAFEBAGS_it(void)

undefined * PKCS12_SAFEBAGS_it(void)

{
  return &DAT_145db6ad0;
}



// FUNCTION 143dba450 FUN_143dba450 body=29 status=ok
// SIG undefined FUN_143dba450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143dba450(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145db6a80);
  return;
}



// FUNCTION 143dba470 X509_free body=29 status=ok
// SIG undefined X509_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145db66e0);
  return;
}



// FUNCTION 143dba490 X509_free body=29 status=ok
// SIG undefined X509_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_free(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143dba4b0 PKCS12_parse body=796 status=ok
// SIG undefined PKCS12_parse(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PKCS12_parse(longlong param_1,char *param_2,longlong *param_3,longlong *param_4,longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143dba4c6;
  lVar2 = 0;
  lVar5 = 0;
  if (param_3 != (longlong *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (longlong *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
    ERR_put_error(0x23,0x76,0x69,"crypto\\pkcs12\\p12_kiss.c",0x2f,0x143dba4c6);
    return 0;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    iVar1 = PKCS12_verify_mac(param_1,0,0);
    if (iVar1 == 0) {
      param_2 = "";
      iVar1 = PKCS12_verify_mac(param_1,&DAT_143f3f584,0);
      if (iVar1 == 0) {
        uVar8 = 0x42;
        goto LAB_143dba756;
      }
    }
    else {
      param_2 = (char *)0x0;
    }
  }
  else {
    iVar1 = PKCS12_verify_mac(param_1,param_2,0xffffffff);
    if (iVar1 == 0) {
      uVar8 = 0x46;
LAB_143dba756:
      uVar6 = 0x71;
      goto LAB_143dba75c;
    }
  }
  lVar2 = OPENSSL_sk_new_null();
  if (lVar2 == 0) {
    uVar8 = 0x4e;
    uVar6 = 0x41;
  }
  else {
    lVar3 = PKCS12_unpack_authsafes(param_1);
    if (lVar3 != 0) {
      iVar7 = 0;
      iVar1 = OPENSSL_sk_num(lVar3);
      if (0 < iVar1) {
        do {
          lVar4 = OPENSSL_sk_value(lVar3,iVar7);
          iVar1 = OBJ_obj2nid(*(undefined8 *)(lVar4 + 0x18));
          if (iVar1 == 0x15) {
            lVar4 = PKCS12_unpack_p7data(lVar4);
LAB_143dba60a:
            if (lVar4 != 0) {
              iVar1 = parse_bags(lVar4,param_2,0xffffffff,param_3,lVar2);
              OPENSSL_sk_pop_free(lVar4,FUN_143dba450);
              if (iVar1 != 0) goto LAB_143dba64d;
            }
            OPENSSL_sk_pop_free(lVar3,FUN_143d70280);
            goto LAB_143dba73e;
          }
          if (iVar1 == 0x1a) {
            lVar4 = PKCS12_unpack_p7encdata(lVar4,param_2,0xffffffff);
            goto LAB_143dba60a;
          }
LAB_143dba64d:
          iVar7 = iVar7 + 1;
          iVar1 = OPENSSL_sk_num(lVar3);
        } while (iVar7 < iVar1);
      }
      OPENSSL_sk_pop_free(lVar3,FUN_143d70280);
      lVar5 = OPENSSL_sk_pop(lVar2);
      do {
        if (lVar5 == 0) {
          OPENSSL_sk_pop_free(lVar2,X509_free);
          return 1;
        }
        if ((((param_3 != (longlong *)0x0) && (*param_3 != 0)) && (param_4 != (longlong *)0x0)) &&
           (*param_4 == 0)) {
          ERR_set_mark();
          iVar1 = X509_check_private_key(lVar5,*param_3);
          if (iVar1 != 0) {
            *param_4 = lVar5;
            lVar5 = 0;
          }
          ERR_pop_to_mark();
        }
        if ((param_5 != (longlong *)0x0) && (lVar5 != 0)) {
          lVar3 = *param_5;
          if (lVar3 == 0) {
            lVar3 = OPENSSL_sk_new_null();
            *param_5 = lVar3;
            if (lVar3 == 0) goto LAB_143dba770;
          }
          iVar1 = OPENSSL_sk_push(lVar3,lVar5);
          if (iVar1 == 0) goto LAB_143dba770;
          lVar5 = 0;
        }
        X509_free(lVar5);
        lVar5 = OPENSSL_sk_pop(lVar2);
      } while( true );
    }
LAB_143dba73e:
    uVar8 = 0x53;
    uVar6 = 0x72;
  }
LAB_143dba75c:
  ERR_put_error(0x23,0x76,uVar6,"crypto\\pkcs12\\p12_kiss.c",uVar8,uVar9);
LAB_143dba770:
  if (param_3 != (longlong *)0x0) {
    EVP_PKEY_free(*param_3);
    *param_3 = 0;
  }
  if (param_4 != (longlong *)0x0) {
    X509_free(*param_4);
    *param_4 = 0;
  }
  X509_free(lVar5);
  OPENSSL_sk_pop_free(lVar2,X509_free);
  return 0;
}



// FUNCTION 143dba7d0 parse_bags body=552 status=ok
// SIG undefined parse_bags(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
parse_bags(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143dba7f4;
  iVar6 = 0;
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    do {
      uVar2 = OPENSSL_sk_value(param_1,iVar6);
      lVar4 = 0;
      puVar5 = (undefined4 *)0x0;
      lVar3 = PKCS12_SAFEBAG_get0_attr(uVar2,0x9c);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 8);
      }
      lVar3 = PKCS12_SAFEBAG_get0_attr(uVar2,0x9d);
      if (lVar3 != 0) {
        puVar5 = *(undefined4 **)(lVar3 + 8);
      }
      iVar1 = PKCS12_SAFEBAG_get_nid(uVar2);
      if (iVar1 == 0x96) {
        if ((param_4 != (longlong *)0x0) && (*param_4 == 0)) {
          uVar2 = PKCS12_SAFEBAG_get0_p8inf(uVar2);
          lVar4 = EVP_PKCS82PKEY(uVar2);
          *param_4 = lVar4;
          bVar7 = lVar4 == 0;
LAB_143dba9b9:
          if (bVar7) {
            return 0;
          }
        }
      }
      else if (iVar1 == 0x97) {
        if ((param_4 != (longlong *)0x0) && (*param_4 == 0)) {
          lVar4 = PKCS12_decrypt_skey(uVar2,param_2,param_3);
          if (lVar4 == 0) {
            return 0;
          }
          lVar3 = EVP_PKCS82PKEY(lVar4);
          *param_4 = lVar3;
          PKCS8_PRIV_KEY_INFO_free(lVar4);
          bVar7 = *param_4 == 0;
          goto LAB_143dba9b9;
        }
      }
      else if (iVar1 == 0x98) {
        iVar1 = PKCS12_SAFEBAG_get_bag_nid(uVar2);
        if (iVar1 == 0x9e) {
          lVar3 = PKCS12_SAFEBAG_get1_cert(uVar2);
          if (lVar3 == 0) {
            return 0;
          }
          if ((puVar5 != (undefined4 *)0x0) &&
             (iVar1 = X509_keyid_set1(lVar3,*(undefined8 *)(puVar5 + 2),*puVar5), iVar1 == 0)) {
LAB_143dba9ec:
            X509_free(lVar3);
            return 0;
          }
          if ((lVar4 != 0) && (iVar1 = ASN1_STRING_to_UTF8(&local_48,lVar4), -1 < iVar1)) {
            iVar1 = X509_alias_set1(lVar3,local_48,iVar1);
            CRYPTO_free(local_48,"crypto\\pkcs12\\p12_kiss.c",0xe3);
            if (iVar1 == 0) goto LAB_143dba9ec;
          }
          iVar1 = OPENSSL_sk_push(param_5,lVar3);
          if (iVar1 == 0) goto LAB_143dba9ec;
        }
      }
      else if (iVar1 == 0x9b) {
        uVar2 = PKCS12_SAFEBAG_get0_safes(uVar2);
        iVar1 = parse_bags(uVar2,param_2,param_3,param_4,param_5);
        bVar7 = iVar1 == 0;
        goto LAB_143dba9b9;
      }
      iVar6 = iVar6 + 1;
      iVar1 = OPENSSL_sk_num(param_1);
    } while (iVar6 < iVar1);
  }
  return 1;
}



// FUNCTION 143dbaa00 FUN_143dbaa00 body=177 status=ok
// SIG undefined FUN_143dbaa00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143dbaa00(undefined4 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  switch(*param_1) {
  case 1:
    CRYPTO_free(*(undefined8 *)(param_1 + 2),"crypto\\store\\store_lib.c",0x1c3);
    uVar1 = 0x1c4;
LAB_143dbaa47:
    CRYPTO_free(*(undefined8 *)(param_1 + 4),"crypto\\store\\store_lib.c",uVar1);
    break;
  case 2:
  case 3:
    EVP_PKEY_free(*(undefined8 *)(param_1 + 2));
    break;
  case 4:
    X509_free(*(undefined8 *)(param_1 + 2));
    break;
  case 5:
    X509_CRL_free(*(undefined8 *)(param_1 + 2));
    break;
  case 0xffffffff:
    BUF_MEM_free(*(undefined8 *)(param_1 + 2));
    uVar1 = 0x1c0;
    goto LAB_143dbaa47;
  }
  CRYPTO_free(param_1,"crypto\\store\\store_lib.c",0x1d3);
  return;
}



// FUNCTION 143dbaad0 OSSL_STORE_INFO_new_CERT body=98 status=ok
// SIG undefined OSSL_STORE_INFO_new_CERT(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OSSL_STORE_INFO_new_CERT(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143dbaadc;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x18,"crypto\\store\\store_lib.c",0xec);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x2c,0x6a,0x41,"crypto\\store\\store_lib.c",300,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 4;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}



// FUNCTION 143dbab40 OSSL_STORE_INFO_new_CRL body=98 status=ok
// SIG undefined OSSL_STORE_INFO_new_CRL(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OSSL_STORE_INFO_new_CRL(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143dbab4c;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x18,"crypto\\store\\store_lib.c",0xec);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x2c,0x6b,0x41,"crypto\\store\\store_lib.c",0x136,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 5;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}



// FUNCTION 143dbabb0 OSSL_STORE_INFO_new_NAME body=108 status=ok
// SIG undefined OSSL_STORE_INFO_new_NAME(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OSSL_STORE_INFO_new_NAME(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143dbabbc;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x18,"crypto\\store\\store_lib.c",0xec);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + 2) = param_1;
    *(undefined8 *)(puVar1 + 4) = 0;
    return puVar1;
  }
  ERR_put_error(0x2c,0x6d,0x41,"crypto\\store\\store_lib.c",0xfc,uVar2);
  return (undefined4 *)0x0;
}



// FUNCTION 143dbac20 OSSL_STORE_INFO_new_PARAMS body=98 status=ok
// SIG undefined OSSL_STORE_INFO_new_PARAMS(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OSSL_STORE_INFO_new_PARAMS(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143dbac2c;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x18,"crypto\\store\\store_lib.c",0xec);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x2c,0x6e,0x41,"crypto\\store\\store_lib.c",0x118,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 2;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}



// FUNCTION 143dbac90 OSSL_STORE_INFO_new_PKEY body=98 status=ok
// SIG undefined OSSL_STORE_INFO_new_PKEY(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * OSSL_STORE_INFO_new_PKEY(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143dbac9c;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x18,"crypto\\store\\store_lib.c",0xec);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x2c,0x6f,0x41,"crypto\\store\\store_lib.c",0x122,uVar2);
    return (undefined4 *)0x0;
  }
  *puVar1 = 3;
  *(undefined8 *)(puVar1 + 2) = param_1;
  return puVar1;
}



// FUNCTION 143dbad00 ossl_store_info_get0_EMBEDDED_buffer body=13 status=ok
// SIG undefined ossl_store_info_get0_EMBEDDED_buffer(void)

undefined8 ossl_store_info_get0_EMBEDDED_buffer(int *param_1)

{
  if (*param_1 == -1) {
    return *(undefined8 *)(param_1 + 2);
  }
  return 0;
}



// FUNCTION 143dbad10 ossl_store_info_get0_EMBEDDED_pem_name body=13 status=ok
// SIG undefined ossl_store_info_get0_EMBEDDED_pem_name(void)

undefined8 ossl_store_info_get0_EMBEDDED_pem_name(int *param_1)

{
  if (*param_1 == -1) {
    return *(undefined8 *)(param_1 + 4);
  }
  return 0;
}



// FUNCTION 143dbad20 ossl_store_info_new_EMBEDDED body=222 status=ok
// SIG undefined ossl_store_info_new_EMBEDDED(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * ossl_store_info_new_EMBEDDED(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143dbad35;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x18,"crypto\\store\\store_lib.c",0xec);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xffffffff;
    *(undefined8 *)(puVar1 + 2) = param_2;
    if (param_1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = CRYPTO_strdup(param_1,"crypto\\store\\store_lib.c",0x266);
    }
    *(longlong *)(puVar1 + 4) = lVar2;
    if ((param_1 != 0) && (lVar2 == 0)) {
      ERR_put_error(0x2c,0x7b,0x41,"crypto\\store\\store_lib.c",0x26a,uVar3);
      FUN_143dbaa00(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
    return puVar1;
  }
  ERR_put_error(0x2c,0x7b,0x41,"crypto\\store\\store_lib.c",0x260,uVar3);
  return (undefined4 *)0x0;
}



// FUNCTION 143dbae00 PBEPARAM_free body=29 status=ok
// SIG undefined PBEPARAM_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PBEPARAM_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145db6cd0);
  return;
}



// FUNCTION 143dbae20 PBEPARAM_it body=8 status=ok
// SIG undefined PBEPARAM_it(void)

undefined * PBEPARAM_it(void)

{
  return &DAT_145db6cd0;
}



// FUNCTION 143dbae30 PBE2PARAM_free body=29 status=ok
// SIG undefined PBE2PARAM_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PBE2PARAM_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145db6d50);
  return;
}



// FUNCTION 143dbae50 PBE2PARAM_it body=8 status=ok
// SIG undefined PBE2PARAM_it(void)

undefined * PBE2PARAM_it(void)

{
  return &DAT_145db6d50;
}



// FUNCTION 143dbae60 PBKDF2PARAM_free body=29 status=ok
// SIG undefined PBKDF2PARAM_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PBKDF2PARAM_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145db6e00);
  return;
}



// FUNCTION 143dbae80 PBKDF2PARAM_it body=8 status=ok
// SIG undefined PBKDF2PARAM_it(void)

undefined * PBKDF2PARAM_it(void)

{
  return &DAT_145db6e00;
}



// FUNCTION 143dbae90 PKCS12_key_gen_uni body=1100 status=ok
// SIG undefined PKCS12_key_gen_uni(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PKCS12_key_gen_uni(longlong param_1,int param_2,longlong param_3,int param_4,undefined1 param_5,
                  int param_6,int param_7,void *param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  byte *pbVar4;
  longlong lVar5;
  ushort uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  longlong local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = (undefined1 *)0x0;
  lVar3 = EVP_MD_CTX_new();
  _Src = (void *)0x0;
  if (lVar3 != 0) {
    iVar1 = ULevelVariantSets::GetNumVariantSets(param_9);
    lVar7 = (longlong)iVar1;
    iVar2 = EVP_MD_size(param_9);
    _Src = (void *)0x0;
    if ((-1 < iVar2) && (0 < iVar1)) {
      local_58 = (undefined1 *)CRYPTO_malloc(lVar7,"crypto\\pkcs12\\p12_key.c",0x6a);
      _Src = (void *)CRYPTO_malloc((longlong)iVar2,"crypto\\pkcs12\\p12_key.c",0x6b);
      local_60 = CRYPTO_malloc((longlong)(iVar1 + 1),"crypto\\pkcs12\\p12_key.c",0x6c);
      iVar18 = param_4 + -1 + iVar1;
      iVar18 = iVar18 - iVar18 % iVar1;
      if (param_2 == 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = param_2 + -1 + iVar1;
        iVar17 = iVar17 - iVar17 % iVar1;
      }
      lVar5 = (longlong)(iVar17 + iVar18);
      local_50 = (undefined1 *)CRYPTO_malloc(lVar5,"crypto\\pkcs12\\p12_key.c");
      if ((((local_58 != (undefined1 *)0x0) && (_Src != (void *)0x0)) && (local_60 != 0)) &&
         (local_50 != (undefined1 *)0x0)) {
        lVar14 = lVar7;
        puVar8 = local_58;
        if (0 < iVar1) {
          for (; lVar14 != 0; lVar14 = lVar14 + -1) {
            *puVar8 = param_5;
            puVar8 = puVar8 + 1;
          }
        }
        iVar1 = 0;
        puVar8 = local_50;
        if (0 < iVar18) {
          do {
            iVar10 = iVar1 + 1;
            *puVar8 = *(undefined1 *)(iVar1 % param_4 + param_3);
            puVar8 = puVar8 + 1;
            iVar1 = iVar10;
          } while (iVar10 < iVar18);
        }
        uVar15 = 0;
        uVar9 = uVar15;
        if (0 < iVar17) {
          do {
            uVar11 = (int)uVar9 + 1;
            *puVar8 = *(undefined1 *)((int)uVar9 % param_2 + param_1);
            puVar8 = puVar8 + 1;
            uVar9 = (ulonglong)uVar11;
          } while ((int)uVar11 < iVar17);
        }
        iVar1 = EVP_DigestInit_ex(lVar3,param_9,0);
        while (iVar1 != 0) {
          iVar18 = 1;
          iVar1 = EVP_DigestUpdate(lVar3,local_58,lVar7);
          if (((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(lVar3,local_50,lVar5), iVar1 == 0)) ||
             (iVar1 = EVP_DigestFinal_ex(lVar3,_Src,0), iVar1 == 0)) break;
          if (1 < param_6) {
            do {
              iVar1 = EVP_DigestInit_ex(lVar3,param_9,0);
              if (((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(lVar3,_Src), iVar1 == 0)) ||
                 (iVar1 = EVP_DigestFinal_ex(lVar3,_Src), iVar1 == 0)) goto LAB_143dbb23f;
              iVar18 = iVar18 + 1;
            } while (iVar18 < param_6);
          }
          iVar1 = iVar2;
          if (param_7 < iVar2) {
            iVar1 = param_7;
          }
          _guard_xfg_dispatch_icall_nop(param_8,_Src,(longlong)iVar1);
          if (param_7 <= iVar2) {
            uVar16 = 1;
            goto LAB_143dbb25f;
          }
          param_8 = (void *)((longlong)param_8 + (longlong)iVar2);
          param_7 = param_7 - iVar2;
          uVar9 = uVar15;
          uVar12 = uVar15;
          if (0 < lVar7) {
            do {
              *(undefined1 *)(uVar9 + local_60) =
                   *(undefined1 *)((longlong)((int)uVar12 % iVar2) + (longlong)_Src);
              uVar9 = uVar9 + 1;
              uVar12 = (ulonglong)((int)uVar12 + 1);
            } while ((longlong)uVar9 < lVar7);
          }
          if (0 < lVar5) {
            lVar14 = local_60 - (longlong)local_50;
            uVar9 = uVar15;
            do {
              uVar6 = 1;
              if (0 < lVar7) {
                pbVar4 = local_50 + uVar9 + lVar7 + -1;
                lVar13 = lVar7;
                do {
                  uVar6 = uVar6 + (ushort)pbVar4[lVar14] + (ushort)*pbVar4;
                  *pbVar4 = (byte)uVar6;
                  uVar6 = uVar6 >> 8;
                  lVar13 = lVar13 + -1;
                  pbVar4 = pbVar4 + -1;
                } while (lVar13 != 0);
              }
              uVar9 = uVar9 + lVar7;
              lVar14 = lVar14 - lVar7;
            } while ((longlong)uVar9 < lVar5);
          }
          iVar1 = EVP_DigestInit_ex(lVar3,param_9,0);
        }
      }
    }
  }
LAB_143dbb23f:
  uVar16 = 0;
  ERR_put_error(0x23,0x6f,0x41,"crypto\\pkcs12\\p12_key.c",0xa5);
LAB_143dbb25f:
  CRYPTO_free(_Src,"crypto\\pkcs12\\p12_key.c",0xa8);
  CRYPTO_free(local_60,"crypto\\pkcs12\\p12_key.c",0xa9);
  CRYPTO_free(local_58,"crypto\\pkcs12\\p12_key.c",0xaa);
  CRYPTO_free(local_50,"crypto\\pkcs12\\p12_key.c",0xab);
  EVP_MD_CTX_free(lVar3);
  return uVar16;
}



// FUNCTION 143dbb2e0 PKCS12_key_gen_utf8 body=232 status=ok
// SIG undefined PKCS12_key_gen_utf8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int PKCS12_key_gen_utf8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143dbb2f0;
  if (param_1 == 0) {
    local_res8[0] = 0;
    local_18 = 0;
  }
  else {
    lVar2 = OPENSSL_utf82uni(param_1,param_2,&local_18,local_res8);
    if (lVar2 == 0) {
      ERR_put_error(0x23,0x74,0x41,"crypto\\pkcs12\\p12_key.c",0x41);
      return 0;
    }
  }
  iVar1 = PKCS12_key_gen_uni(local_18,local_res8[0],param_3,param_4,param_5,param_6,param_7,param_8,
                             param_9);
  if (iVar1 < 1) {
    return 0;
  }
  CRYPTO_clear_free(local_18,(longlong)local_res8[0],"crypto\\pkcs12\\p12_key.c",0x48);
  return iVar1;
}



// FUNCTION 143dbb3d0 i2a_ASN1_STRING body=270 status=ok
// SIG undefined i2a_ASN1_STRING(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2a_ASN1_STRING(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 local_res10;
  undefined1 local_res11;
  
  uVar3 = 0;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_2 == 0) {
    iVar1 = BIO_write(param_1,&DAT_145cc5568,1);
    if (iVar1 == 1) {
      uVar3 = 1;
    }
    else {
LAB_143dbb4d4:
      uVar3 = 0xffffffff;
    }
  }
  else {
    uVar4 = uVar3;
    uVar5 = uVar3;
    if (0 < *param_2) {
      do {
        iVar6 = (int)uVar3;
        iVar1 = (int)uVar4;
        if ((iVar1 != 0) && (iVar1 == (iVar1 / 0x23) * 0x23)) {
          iVar2 = BIO_write(param_1,&DAT_145db2520,2);
          if (iVar2 != 2) goto LAB_143dbb4d4;
          iVar6 = iVar6 + 2;
        }
        local_res10 = PTR_s_0123456789ABCDEF_146838218
                      [*(byte *)(*(longlong *)(param_2 + 2) + uVar5) >> 4];
        local_res11 = PTR_s_0123456789ABCDEF_146838218
                      [*(byte *)(*(longlong *)(param_2 + 2) + uVar5) & 0xf];
        iVar2 = BIO_write(param_1,&local_res10,2);
        if (iVar2 != 2) goto LAB_143dbb4d4;
        uVar3 = (ulonglong)(iVar6 + 2);
        uVar4 = (ulonglong)(iVar1 + 1U);
        uVar5 = uVar5 + 1;
      } while ((int)(iVar1 + 1U) < *param_2);
    }
  }
  return uVar3;
}



// FUNCTION 143dbb4e0 SCT_LIST_print body=915 status=ok
// SIG undefined SCT_LIST_print(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void SCT_LIST_print(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                   longlong param_5)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_88;
  int local_84;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_80 = param_5;
  local_88 = param_3;
  local_78 = param_4;
  local_84 = OPENSSL_sk_num();
  iVar13 = 0;
  if (0 < local_84) {
    iVar11 = param_3 + 4;
    param_3 = param_3 + 0x10;
    do {
      piVar6 = (int *)OPENSSL_sk_value(param_1,iVar13);
      lVar7 = 0;
      if (param_5 != 0) {
        lVar7 = CTLOG_STORE_get0_log_by_id
                          (param_5,*(undefined8 *)(piVar6 + 6),*(undefined8 *)(piVar6 + 8));
      }
      BIO_printf(param_2,"%*sSigned Certificate Timestamp:",local_88,&DAT_143f3f584);
      BIO_printf(param_2,"\n%*sVersion   : ",iVar11,&DAT_143f3f584);
      if (*piVar6 == 0) {
        BIO_printf(param_2,"v1 (0x0)");
        if (lVar7 != 0) {
          local_98 = FHardwareCursor::GetHandle(lVar7);
          BIO_printf(param_2,"\n%*sLog       : %s",iVar11,&DAT_143f3f584);
        }
        BIO_printf(param_2,"\n%*sLog ID    : ",iVar11,&DAT_143f3f584);
        local_98 = CONCAT44(local_98._4_4_,piVar6[8]);
        BIO_hex_string(param_2,param_3,0x10,*(undefined8 *)(piVar6 + 6));
        BIO_printf(param_2,"\n%*sTimestamp : ",iVar11,&DAT_143f3f584);
        uVar1 = *(ulonglong *)(piVar6 + 10);
        lVar7 = ASN1_GENERALIZEDTIME_new();
        if (lVar7 != 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar1;
          lVar10 = SUB168(ZEXT816(0x8daea1d7f4cf721b) * auVar2,8);
          uVar12 = (uVar1 - lVar10 >> 1) + lVar10 >> 0x1a;
          uVar9 = uVar1 + uVar12 * -86400000;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar9;
          lVar10 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar3,8);
          ASN1_GENERALIZEDTIME_adj(lVar7,0,uVar12,lVar10 + (uVar9 - lVar10 >> 1) >> 9);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar1;
          lVar10 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar4,8);
          uVar8 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                  ::GetBoundProgramCounterForTimerManager(lVar7);
          local_98 = CONCAT44(local_98._4_4_,
                              (int)uVar1 + (int)((uVar1 - lVar10 >> 1) + lVar10 >> 9) * -1000);
          BIO_snprintf(local_70,0x14,"%.14s.%03dZ",uVar8);
          iVar5 = ASN1_GENERALIZEDTIME_set_string(lVar7,local_70);
          if (iVar5 != 0) {
            ASN1_GENERALIZEDTIME_print(param_2,lVar7);
          }
          ASN1_BIT_STRING_free(lVar7);
        }
        BIO_printf(param_2,"\n%*sExtensions: ",iVar11,&DAT_143f3f584);
        if (*(longlong *)(piVar6 + 0xe) == 0) {
          BIO_printf(param_2,&DAT_145d82b38);
        }
        else {
          local_98 = CONCAT44(local_98._4_4_,(int)*(longlong *)(piVar6 + 0xe));
          BIO_hex_string(param_2,param_3,0x10,*(undefined8 *)(piVar6 + 0xc));
        }
        BIO_printf(param_2,"\n%*sSignature : ",iVar11,&DAT_143f3f584);
        iVar5 = SCT_get_signature_nid(piVar6);
        if (iVar5 == 0) {
          BIO_printf(param_2,"%02X%02X",(char)piVar6[0x10],*(undefined1 *)((longlong)piVar6 + 0x41))
          ;
        }
        else {
          uVar8 = OBJ_nid2ln(iVar5);
          BIO_printf(param_2,&DAT_145cc6210,uVar8);
        }
        BIO_printf(param_2,"\n%*s            ",iVar11,&DAT_143f3f584);
        uVar8 = *(undefined8 *)(piVar6 + 0x12);
        iVar5 = piVar6[0x14];
        param_5 = local_80;
      }
      else {
        BIO_printf(param_2,"unknown\n%*s",param_3,&DAT_143f3f584);
        uVar8 = *(undefined8 *)(piVar6 + 2);
        iVar5 = piVar6[4];
      }
      local_98 = CONCAT44(local_98._4_4_,iVar5);
      BIO_hex_string(param_2,param_3,0x10,uVar8);
      iVar5 = OPENSSL_sk_num(param_1);
      if (iVar13 < iVar5 + -1) {
        BIO_printf(param_2,&DAT_145cc6210,local_78);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < local_84);
  }
  return;
}



// FUNCTION 143dbb880 read_string body=402 status=ok
// SIG undefined read_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 read_string(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  iVar3 = FRollingHash::GetWindowSize(param_2);
  if (iVar3 == 1) {
    pcVar5 = (char *)TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                     ::GetBoundProgramCounterForTimerManager(param_2);
    fputs(pcVar5,DAT_146bcbb90);
    fflush(DAT_146bcbb90);
    uVar4 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_2);
    uVar7 = 1;
  }
  else {
    if (iVar3 == 2) {
      uVar7 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
              ::GetBoundProgramCounterForTimerManager(param_2);
      fwprintf(DAT_146bcbb90,(wchar_t *)"Verifying - %s",uVar7);
      fflush(DAT_146bcbb90);
      uVar4 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_2);
      uVar7 = read_string_inner(param_1,param_2,uVar4 & 1,1);
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      lVar6 = UI_get0_test_string(param_2);
      pcVar5 = (char *)UI_get0_result_string(param_2);
      lVar6 = lVar6 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar6];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return 1;
      }
      fwprintf(DAT_146bcbb90,(wchar_t *)"Verify failure\n");
      fflush(DAT_146bcbb90);
      return 0;
    }
    if (iVar3 != 3) {
      return 1;
    }
    pcVar5 = (char *)TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                     ::GetBoundProgramCounterForTimerManager(param_2);
    fputs(pcVar5,DAT_146bcbb90);
    pcVar5 = (char *)UI_get0_action_string(param_2);
    fputs(pcVar5,DAT_146bcbb90);
    fflush(DAT_146bcbb90);
    uVar4 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_2);
    uVar7 = 0;
  }
  uVar7 = read_string_inner(param_1,param_2,uVar4 & 1,uVar7);
  return uVar7;
}



// FUNCTION 143dbba20 write_string body=82 status=ok
// SIG undefined write_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 write_string(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *_Str;
  
  iVar1 = FRollingHash::GetWindowSize(param_2);
  if (iVar1 - 4U < 2) {
    _Str = (char *)TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                   ::GetBoundProgramCounterForTimerManager(param_2);
    fputs(_Str,DAT_146bcbb90);
    fflush(DAT_146bcbb90);
  }
  return 1;
}



// FUNCTION 143dbba80 open_console body=174 status=ok
// SIG undefined open_console(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 open_console(longlong param_1)

{
  BOOL BVar1;
  HANDLE hConsoleHandle;
  
  CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x28));
  DAT_146bcbb98 = 1;
  DAT_146bcbb90 = fopen("conout$","w");
  if (DAT_146bcbb90 == (FILE *)0x0) {
    DAT_146bcbb90 = (FILE *)__acrt_iob_func(2);
  }
  hConsoleHandle = GetStdHandle(0xfffffff6);
  BVar1 = GetConsoleMode(hConsoleHandle,&DAT_146bcbb80);
  if ((BVar1 == 0) &&
     (DAT_146bcbb98 = BVar1, DAT_146bcbb88 = fopen("conin$","r"), DAT_146bcbb88 != (FILE *)0x0)) {
    return 1;
  }
  DAT_146bcbb88 = (FILE *)__acrt_iob_func(0);
  return 1;
}



// FUNCTION 143dbbb30 close_console body=93 status=ok
// SIG undefined close_console(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 close_console(longlong param_1)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)__acrt_iob_func(0);
  if (DAT_146bcbb88 != pFVar1) {
    fclose(DAT_146bcbb88);
  }
  pFVar1 = (FILE *)__acrt_iob_func(2);
  if (DAT_146bcbb90 != pFVar1) {
    fclose(DAT_146bcbb90);
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 143dbbb90 FUN_143dbbb90 body=8 status=ok
// SIG undefined FUN_143dbbb90(void)

undefined * FUN_143dbbb90(void)

{
  return PTR_PTR_146838270;
}



// FUNCTION 143dbbba0 read_string_inner body=1127 status=ok
// SIG undefined read_string_inner(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * read_string_inner(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  FILE *_File;
  DWORD DVar1;
  BOOL BVar2;
  int iVar3;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 extraout_RAX_02;
  undefined8 extraout_RAX_03;
  undefined8 extraout_RAX_04;
  HANDLE pvVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auStackY_698 [32];
  uint local_658;
  char local_654 [12];
  CHAR local_648 [512];
  WCHAR local_448 [512];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143dbbbc2;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStackY_698;
  pcVar6 = (char *)0x0;
  pcVar9 = (char *)0x0;
  DAT_146bcbb9c = 0;
  DAT_146bcbba0 = 0;
  signal(0x16);
  DAT_146bcbb30 = extraout_RAX;
  signal(8);
  DAT_146bcbac0 = extraout_RAX_00;
  signal(4);
  DAT_146bcbaa0 = extraout_RAX_01;
  signal(2);
  DAT_146bcba90 = extraout_RAX_02;
  signal(0xb);
  DAT_146bcbad8 = extraout_RAX_03;
  signal(0xf);
  DAT_146bcbba0 = 1;
  DAT_146bcbaf8 = extraout_RAX_04;
  if ((param_3 == 0) && (DAT_146bcbb98 != 0)) {
    DAT_146bcbb84 = DAT_146bcbb80 & 0xfffffffb;
    pvVar4 = GetStdHandle(0xfffffff6);
    SetConsoleMode(pvVar4,DAT_146bcbb84);
  }
  DAT_146bcbba0 = 2;
  local_648[0] = '\0';
  pcVar10 = pcVar6;
  if (DAT_146bcbb98 == 0) {
    pcVar5 = fgets(local_648,0x1ff,DAT_146bcbb88);
LAB_143dbbe55:
    if (pcVar5 == (char *)0x0) goto LAB_143dbbee6;
  }
  else {
    DVar1 = GetEnvironmentVariableW(L"OPENSSL_WIN32_UTF8",(LPWSTR)0x0,0);
    if (DVar1 != 0) {
      pvVar4 = GetStdHandle(0xfffffff6);
      BVar2 = ReadConsoleW(pvVar4,local_448,0x1ff,&local_658,(PCONSOLE_READCONSOLE_CONTROL)0x0);
      if (BVar2 == 0) goto LAB_143dbbee6;
      uVar8 = (ulonglong)local_658;
      if (((1 < local_658) && (local_448[local_658 - 2] == L'\r')) &&
         (uVar7 = local_658 - 1, local_448[uVar7] == L'\n')) {
        local_448[local_658 - 2] = L'\n';
        uVar8 = (ulonglong)uVar7;
        local_658 = uVar7;
      }
      if (0x3ff < uVar8 * 2) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      local_448[uVar8] = L'\0';
      iVar3 = WideCharToMultiByte(0xfde9,0,local_448,-1,local_648,0x200,(LPCSTR)0x0,(LPBOOL)0x0);
      pcVar5 = local_648;
      if (iVar3 < 1) {
        pcVar5 = pcVar6;
      }
      FUN_14004ff40(local_448,0x400);
      goto LAB_143dbbe55;
    }
    pvVar4 = GetStdHandle(0xfffffff6);
    BVar2 = ReadConsoleA(pvVar4,local_648,0x1ff,&local_658,(PCONSOLE_READCONSOLE_CONTROL)0x0);
    pcVar10 = pcVar9;
    if (BVar2 == 0) goto LAB_143dbbee6;
    uVar8 = (ulonglong)local_658;
    if (((1 < local_658) && (local_648[local_658 - 2] == '\r')) &&
       (uVar7 = local_658 - 1, local_648[uVar7] == '\n')) {
      local_648[local_658 - 2] = '\n';
      uVar8 = (ulonglong)uVar7;
      local_658 = uVar7;
    }
    if (0x1ff < uVar8) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_648[uVar8] = '\0';
  }
  iVar3 = feof(DAT_146bcbb88);
  pcVar10 = pcVar6;
  if ((iVar3 == 0) && (iVar3 = ferror(DAT_146bcbb88), pcVar10 = pcVar9, iVar3 == 0)) {
    pcVar6 = _guard_xfg_dispatch_icall_nop(local_648,10);
    _File = DAT_146bcbb88;
    if (pcVar6 == (char *)0x0) {
      do {
        pcVar6 = fgets(local_654,4,_File);
        if (pcVar6 == (char *)0x0) goto LAB_143dbbee6;
        pcVar6 = _guard_xfg_dispatch_icall_nop(local_654,10);
      } while (pcVar6 == (char *)0x0);
    }
    else if (param_4 != 0) {
      *pcVar6 = '\0';
    }
    iVar3 = UI_set_result(param_1,param_2,local_648);
    pcVar10 = (char *)0x0;
    if (-1 < iVar3) {
      pcVar10 = (char *)0x1;
    }
  }
LAB_143dbbee6:
  if (DAT_146bcbb9c == 2) {
    pcVar10 = (char *)0xffffffff;
  }
  if (param_3 == 0) {
    fwprintf(DAT_146bcbb90,L"\n");
  }
  if (((1 < DAT_146bcbba0) && (param_3 == 0)) && (DAT_146bcbb98 != 0)) {
    DAT_146bcbb84 = DAT_146bcbb80;
    pvVar4 = GetStdHandle(0xfffffff6);
    SetConsoleMode(pvVar4,DAT_146bcbb84);
  }
  if (0 < DAT_146bcbba0) {
    signal(0x16);
    signal(8);
    signal(4);
    signal(2);
    signal(0xb);
    signal(0xf);
  }
  FUN_14004ff40(local_648,0x200);
  return pcVar10;
}



// FUNCTION 143dbc020 FUN_143dbc020 body=8 status=ok
// SIG undefined FUN_143dbc020(void)

undefined ** FUN_143dbc020(void)

{
  return &PTR_s_OpenSSL_NULL_UI_145db7020;
}



// FUNCTION 143dbc030 CMS_dataFinal body=387 status=ok
// SIG undefined CMS_dataFinal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_dataFinal(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 local_res18 [2];
  undefined8 uVar6;
  
  uVar6 = 0x143dbc03f;
  plVar3 = (longlong *)CMS_get0_content();
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  if ((*plVar3 != 0) && ((*(byte *)(*plVar3 + 0x10) & 0x20) != 0)) {
    lVar4 = BIO_find_type(param_2,0x401);
    if (lVar4 == 0) {
      ERR_put_error(0x2e,0x6e,0x69,"crypto\\cms\\cms_lib.c",0x77,uVar6);
      return 0;
    }
    uVar1 = BIO_ctrl(lVar4,3,0,local_res18);
    BIO_set_flags(lVar4,0x200);
    BIO_ctrl(lVar4,0x82,0,0);
    ASN1_STRING_set0(*plVar3,local_res18[0],uVar1);
    *(uint *)(*plVar3 + 0x10) = *(uint *)(*plVar3 + 0x10) & 0xffffffdf;
  }
  iVar2 = OBJ_obj2nid(*param_1);
  if (iVar2 < 0x1a) {
    if (iVar2 == 0x19) {
      uVar6 = cms_DigestedData_do_final(param_1,param_2,0);
      return uVar6;
    }
    if (iVar2 == 0x15) {
      return 1;
    }
    if (iVar2 == 0x16) {
      uVar6 = cms_SignedData_final(param_1,param_2);
      return uVar6;
    }
    bVar5 = iVar2 == 0x17;
  }
  else {
    if (iVar2 == 0x1a) {
      return 1;
    }
    bVar5 = iVar2 == 0x312;
  }
  if (bVar5) {
    return 1;
  }
  ERR_put_error(0x2e,0x6e,0x9c,"crypto\\cms\\cms_lib.c",0x92,uVar6);
  return 0;
}



// FUNCTION 143dbc1c0 CMS_dataInit body=352 status=ok
// SIG undefined CMS_dataInit(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong CMS_dataInit(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143dbc1d5;
  lVar5 = param_2;
  if (param_2 == 0) {
    puVar3 = (undefined8 *)CMS_get0_content();
    if (puVar3 != (undefined8 *)0x0) {
      puVar1 = (undefined4 *)*puVar3;
      if (puVar1 == (undefined4 *)0x0) {
        uVar6 = BIO_s_mem();
      }
      else {
        if (puVar1[4] != 0x20) {
          lVar5 = BIO_new_mem_buf(*(undefined8 *)(puVar1 + 2),*puVar1);
          goto LAB_143dbc228;
        }
        uVar6 = BIO_s_mem();
      }
      lVar5 = BIO_new(uVar6);
      goto LAB_143dbc228;
    }
  }
  else {
LAB_143dbc228:
    if (lVar5 != 0) {
      iVar2 = OBJ_obj2nid(*param_1);
      if (iVar2 < 0x1a) {
        if (iVar2 == 0x19) {
          lVar4 = cms_DigestedData_init_bio(param_1);
          goto LAB_143dbc2ae;
        }
        if (iVar2 == 0x15) {
          return lVar5;
        }
        if (iVar2 == 0x16) {
          lVar4 = cms_SignedData_init_bio(param_1);
          goto LAB_143dbc2ae;
        }
        if (iVar2 == 0x17) {
          lVar4 = cms_EnvelopedData_init_bio(param_1);
          goto LAB_143dbc2ae;
        }
      }
      else {
        if (iVar2 == 0x1a) {
          lVar4 = cms_EncryptedData_init_bio(param_1);
LAB_143dbc2ae:
          if (lVar4 != 0) {
            lVar5 = BIO_push(lVar4,lVar5);
            return lVar5;
          }
          if (param_2 != 0) {
            return 0;
          }
          BIO_free(lVar5);
          return 0;
        }
        if (iVar2 == 0x312) {
          lVar4 = cms_CompressedData_init_bio(param_1);
          goto LAB_143dbc2ae;
        }
      }
      uVar7 = 0x5e;
      uVar6 = 0x9c;
      goto LAB_143dbc2fa;
    }
  }
  uVar7 = 0x40;
  uVar6 = 0x7f;
LAB_143dbc2fa:
  ERR_put_error(0x2e,0x6f,uVar6,"crypto\\cms\\cms_lib.c",uVar7,uVar8);
  return 0;
}



// FUNCTION 143dbc320 CMS_get0_content body=216 status=ok
// SIG undefined CMS_get0_content(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * CMS_get0_content(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143dbc32c;
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 < 0x1a) {
    if (iVar1 != 0x19) {
      if (iVar1 == 0x15) {
        return (int *)(param_1 + 1);
      }
      if (iVar1 != 0x16) {
        if (iVar1 == 0x17) {
          return (int *)(*(longlong *)(param_1[1] + 0x18) + 0x10);
        }
        goto LAB_143dbc391;
      }
    }
    piVar2 = *(int **)(param_1[1] + 0x10);
  }
  else {
    if (iVar1 == 0x1a) {
      return (int *)(*(longlong *)(param_1[1] + 8) + 0x10);
    }
    if (iVar1 == 0xcd) {
      return (int *)(*(longlong *)(param_1[1] + 0x28) + 8);
    }
    if (iVar1 == 0x312) {
      return (int *)(*(longlong *)(param_1[1] + 0x18) + 8);
    }
LAB_143dbc391:
    piVar2 = (int *)param_1[1];
    if (*piVar2 != 4) {
      ERR_put_error(0x2e,0x81,0x98,"crypto\\cms\\cms_lib.c",0xb8,uVar3);
      return (int *)0x0;
    }
  }
  return piVar2 + 2;
}



// FUNCTION 143dbc400 cms_DigestAlgorithm_find_ctx body=253 status=ok
// SIG undefined cms_DigestAlgorithm_find_ctx(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_DigestAlgorithm_find_ctx(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 uVar5;
  
  uVar5 = 0x143dbc415;
  X509_ALGOR_get0(&local_res20,0,0,param_3);
  iVar1 = OBJ_obj2nid(local_res20);
  lVar3 = BIO_find_type(param_2,0x208);
  while( true ) {
    if (lVar3 == 0) {
      ERR_put_error(0x2e,0x73,0x83,"crypto\\cms\\cms_lib.c",0x144,uVar5);
      return 0;
    }
    BIO_ctrl(lVar3,0x78,0,&local_res10);
    uVar4 = EVP_MD_CTX_md(local_res10);
    iVar2 = FRollingHash::GetWindowSize(uVar4);
    if (iVar2 == iVar1) break;
    uVar4 = EVP_MD_CTX_md(local_res10);
    iVar2 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(uVar4);
    if (iVar2 == iVar1) break;
    uVar4 = BIO_next(lVar3);
    lVar3 = BIO_find_type(uVar4,0x208);
  }
  uVar5 = EVP_MD_CTX_copy_ex(param_1,local_res10);
  return uVar5;
}



// FUNCTION 143dbc500 cms_DigestAlgorithm_init_bio body=198 status=ok
// SIG undefined cms_DigestAlgorithm_init_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong cms_DigestAlgorithm_init_bio(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res10 [3];
  
  lVar5 = 0;
  X509_ALGOR_get0(local_res10,0,0,param_1);
  uVar1 = OBJ_obj2nid(local_res10[0]);
  uVar3 = OBJ_nid2sn(uVar1);
  lVar4 = EVP_get_digestbyname(uVar3);
  if (lVar4 == 0) {
    uVar1 = 0x127;
    uVar3 = 0x95;
  }
  else {
    uVar3 = BIO_f_md();
    lVar5 = BIO_new(uVar3);
    if (lVar5 != 0) {
      iVar2 = BIO_ctrl(lVar5,0x6f,0,lVar4);
      if (iVar2 != 0) {
        return lVar5;
      }
    }
    uVar1 = 300;
    uVar3 = 0x77;
  }
  ERR_put_error(0x2e,0x74,uVar3,"crypto\\cms\\cms_lib.c",uVar1);
  BIO_free(lVar5);
  return 0;
}



// FUNCTION 143dbc5d0 AES_wrap_key body=44 status=ok
// SIG undefined AES_wrap_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void AES_wrap_key(void)

{
  CRYPTO_128_wrap();
  return;
}



// FUNCTION 143dbc600 cms_EncryptedContent_init_bio body=1038 status=ok
// SIG undefined cms_EncryptedContent_init_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong cms_EncryptedContent_init_bio(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar11;
  bool bVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  uint local_60;
  undefined8 local_58;
  uint local_50;
  int local_4c;
  undefined1 local_48 [16];
  ulonglong local_38;
  undefined8 local_30;
  longlong lVar10;
  ulonglong uVar15;
  
  local_30 = 0x143dbc622;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar8 = *(longlong *)(param_1 + 0x18);
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar10 = 0;
  lVar9 = 0;
  puVar13 = (undefined1 *)0x0;
  local_4c = 0;
  uVar15 = 0;
  uVar14 = 0;
  bVar2 = false;
  bVar12 = false;
  local_50 = (uint)(lVar8 != 0);
  uVar5 = BIO_f_cipher();
  lVar6 = BIO_new(uVar5);
  if (lVar6 == 0) {
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x29);
    ERR_put_error(0x2e,0x78,0x41,"crypto\\cms\\cms_enc.c");
    return 0;
  }
  BIO_ctrl(lVar6,0x81,0,&local_58);
  bVar11 = bVar12;
  if (lVar8 == 0) {
    uVar4 = OBJ_obj2nid(*puVar1);
    uVar5 = OBJ_nid2sn(uVar4);
    lVar7 = EVP_get_cipherbyname(uVar5);
    if (lVar7 != 0) goto LAB_143dbc6ba;
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x3a);
    ERR_put_error(0x2e,0x78,0x94,"crypto\\cms\\cms_enc.c");
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
LAB_143dbc6ba:
    local_60 = local_50;
    local_68 = (undefined1 *)0x0;
    iVar3 = FUN_143cf75a0(local_58,lVar7,0,0);
    uVar14 = uVar15;
    if (iVar3 < 1) {
      local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x41);
      ERR_put_error(0x2e,0x78,0x65,"crypto\\cms\\cms_enc.c");
      lVar9 = lVar10;
      bVar11 = bVar2;
    }
    else {
      if (lVar8 == 0) {
        iVar3 = EVP_CIPHER_asn1_to_param(local_58,puVar1[1]);
        if (iVar3 < 1) {
          local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x51);
          ERR_put_error(0x2e,0x78,0x66,"crypto\\cms\\cms_enc.c");
          goto LAB_143dbc995;
        }
      }
      else {
        uVar5 = FHardwareCursor::GetHandle();
        uVar4 = FUN_143cf6400(uVar5);
        uVar5 = OBJ_nid2obj(uVar4);
        *puVar1 = uVar5;
        iVar3 = EVP_CIPHER_CTX_iv_length(local_58);
        if (0 < iVar3) {
          iVar3 = RAND_bytes(local_48,iVar3);
          lVar9 = lVar10;
          bVar11 = bVar2;
          if (iVar3 < 1) goto LAB_143dbc995;
          puVar13 = local_48;
        }
      }
      iVar3 = UVariantSet::GetNumVariants(local_58);
      uVar14 = (ulonglong)iVar3;
      if ((lVar8 == 0) || (lVar9 = lVar10, *(longlong *)(param_1 + 0x20) == 0)) {
        lVar9 = CRYPTO_malloc(uVar14,"crypto\\cms\\cms_enc.c",0x57);
        if (lVar9 == 0) {
          local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x59);
          ERR_put_error(0x2e,0x78,0x41,"crypto\\cms\\cms_enc.c");
          bVar11 = bVar2;
        }
        else {
          iVar3 = EVP_CIPHER_CTX_rand_key(local_58,lVar9);
          bVar11 = bVar12;
          if (0 < iVar3) goto LAB_143dbc831;
        }
      }
      else {
LAB_143dbc831:
        if (*(longlong *)(param_1 + 0x20) == 0) {
          *(longlong *)(param_1 + 0x20) = lVar9;
          lVar9 = 0;
          *(ulonglong *)(param_1 + 0x28) = uVar14;
          if (lVar8 == 0) {
            ERR_clear_error();
          }
          else {
            local_4c = 1;
          }
        }
        if ((*(ulonglong *)(param_1 + 0x28) == uVar14) ||
           (iVar3 = EVP_CIPHER_CTX_set_key_length
                              (local_58,*(ulonglong *)(param_1 + 0x28) & 0xffffffff), 0 < iVar3)) {
LAB_143dbc8a0:
          local_60 = local_50;
          local_68 = puVar13;
          iVar3 = FUN_143cf75a0(local_58,0,0,*(undefined8 *)(param_1 + 0x20));
          bVar12 = bVar2;
          if (iVar3 < 1) {
            local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x83);
            ERR_put_error(0x2e,0x78,0x65,"crypto\\cms\\cms_enc.c");
          }
          else if (lVar8 == 0) {
LAB_143dbc983:
            bVar12 = true;
          }
          else {
            lVar8 = ASN1_TYPE_new();
            puVar1[1] = lVar8;
            if (lVar8 == 0) {
              local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x89);
              ERR_put_error(0x2e,0x78,0x41,"crypto\\cms\\cms_enc.c");
            }
            else {
              iVar3 = EVP_CIPHER_param_to_asn1(local_58,lVar8);
              if (0 < iVar3) {
                if (*(int *)puVar1[1] == -1) {
                  ASN1_TYPE_free();
                  puVar1[1] = 0;
                }
                goto LAB_143dbc983;
              }
              local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x8e);
              ERR_put_error(0x2e,0x78,0x66,"crypto\\cms\\cms_enc.c");
            }
          }
        }
        else {
          if ((lVar8 == 0) && (*(int *)(param_1 + 0x30) == 0)) {
            CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                              "crypto\\cms\\cms_enc.c",0x78);
            *(longlong *)(param_1 + 0x20) = lVar9;
            lVar9 = 0;
            *(ulonglong *)(param_1 + 0x28) = uVar14;
            ERR_clear_error();
            goto LAB_143dbc8a0;
          }
          local_68 = (undefined1 *)CONCAT44(local_68._4_4_,0x74);
          ERR_put_error(0x2e,0x78,0x76,"crypto\\cms\\cms_enc.c");
        }
        bVar11 = bVar12;
        if ((local_4c != 0) && (bVar12)) goto LAB_143dbc9b7;
      }
    }
  }
LAB_143dbc995:
  CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                    "crypto\\cms\\cms_enc.c",0x9b);
  *(undefined8 *)(param_1 + 0x20) = 0;
  bVar12 = bVar11;
LAB_143dbc9b7:
  CRYPTO_clear_free(lVar9,uVar14,"crypto\\cms\\cms_enc.c",0x9e);
  if (!bVar12) {
    BIO_free(lVar6);
    return 0;
  }
  return lVar6;
}



// FUNCTION 143dbca10 cms_EncryptedData_init_bio body=50 status=ok
// SIG undefined cms_EncryptedData_init_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cms_EncryptedData_init_bio(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if ((*(longlong *)(*(longlong *)(puVar1 + 2) + 0x18) != 0) && (*(longlong *)(puVar1 + 4) != 0)) {
    *puVar1 = 2;
  }
  cms_EncryptedContent_init_bio();
  return;
}



// FUNCTION 143dbca50 cms_RecipientInfo_pwri_crypt body=919 status=ok
// SIG undefined cms_RecipientInfo_pwri_crypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong cms_RecipientInfo_pwri_crypt(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar16;
  undefined4 uVar17;
  longlong lVar13;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar16 = 0x143dbca62;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar13 = 0;
  lVar12 = 0;
  lVar11 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    ERR_put_error(0x2e,0xa7,0xb2,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar14,0x125),0x143dbca62);
    return 0;
  }
  puVar7 = *(undefined8 **)(lVar1 + 0x10);
  if ((puVar7 == (undefined8 *)0x0) || (iVar4 = OBJ_obj2nid(*puVar7), iVar4 != 0x37d)) {
    ERR_put_error(0x2e,0xa7,0xb3,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar14,300),uVar16);
    return 0;
  }
  uVar6 = X509_ALGOR_it();
  puVar7 = (undefined8 *)ASN1_TYPE_unpack_sequence(uVar6,puVar7[1]);
  if (puVar7 == (undefined8 *)0x0) {
    ERR_put_error(0x2e,0xa7,0xb0,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar14,0x135),uVar16);
    return 0;
  }
  uVar5 = OBJ_obj2nid(*puVar7);
  uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar16 = OBJ_nid2sn(uVar5);
  lVar8 = EVP_get_cipherbyname(uVar16);
  if (lVar8 == 0) {
    uVar16 = CONCAT44(uVar14,0x13c);
    uVar14 = 0x94;
  }
  else {
    lVar9 = EVP_CIPHER_CTX_new();
    if (lVar9 != 0) {
      uVar16 = CONCAT44(uVar17,param_3);
      uVar14 = 0;
      iVar4 = FUN_143cf75a0(lVar9,lVar8,0,0,0,uVar16);
      uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
      lVar8 = lVar13;
      if (iVar4 != 0) {
        EVP_CIPHER_CTX_set_padding(lVar9,0);
        iVar4 = EVP_CIPHER_asn1_to_param(lVar9,puVar7[1]);
        lVar8 = lVar11;
        if (iVar4 < 1) {
          ERR_put_error(0x2e,0xa7,0x66,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar14,0x14b));
        }
        else {
          lVar11 = lVar9;
          iVar4 = EVP_PBE_CipherInit(**(undefined8 **)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x20),
                                     *(undefined4 *)(lVar1 + 0x28),(*(undefined8 **)(lVar1 + 8))[1],
                                     lVar9,CONCAT44(uVar5,param_3));
          uVar14 = (undefined4)((ulonglong)lVar11 >> 0x20);
          if (iVar4 < 0) {
            ERR_put_error(0x2e,0xa7,6,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar14,0x156));
          }
          else {
            lVar13 = lVar12;
            if (param_3 == 0) {
              lVar8 = CRYPTO_malloc((longlong)**(int **)(lVar1 + 0x18),"crypto\\cms\\cms_pwri.c",
                                    0x16b);
              if (lVar8 == 0) {
                ERR_put_error(0x2e,0xa7,0x41,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar14,0x16e));
                goto LAB_143dbcd84;
              }
              iVar4 = kek_unwrap_key(lVar8,&local_res8,*(undefined8 *)(*(int **)(lVar1 + 0x18) + 2),
                                     (longlong)**(int **)(lVar1 + 0x18),lVar9);
              if (iVar4 == 0) {
                ERR_put_error(0x2e,0xa7,0xb4,"crypto\\cms\\cms_pwri.c",0x174);
                goto LAB_143dbcd84;
              }
              *(ulonglong *)(lVar2 + 0x28) = local_res8;
              *(longlong *)(lVar2 + 0x20) = lVar8;
            }
            else {
              uVar3 = *(ulonglong *)(lVar2 + 0x28);
              iVar4 = EVP_CIPHER_CTX_block_size(lVar9);
              uVar15 = (ulonglong)iVar4;
              uVar10 = uVar3 + 3 + uVar15;
              uVar10 = uVar10 - uVar10 % uVar15;
              if ((((uVar10 < uVar15 * 2) || (0xff < uVar3)) ||
                  (local_res8 = uVar10,
                  lVar8 = CRYPTO_malloc(uVar10,"crypto\\cms\\cms_pwri.c",0x161), lVar8 == 0)) ||
                 (iVar4 = kek_wrap_key(lVar8,&local_res8,*(undefined8 *)(lVar2 + 0x20),
                                       *(undefined8 *)(lVar2 + 0x28),lVar9), iVar4 == 0))
              goto LAB_143dbcd84;
              *(longlong *)(*(longlong *)(lVar1 + 0x18) + 8) = lVar8;
              **(undefined4 **)(lVar1 + 0x18) = (undefined4)local_res8;
            }
            lVar13 = 1;
          }
        }
      }
LAB_143dbcd84:
      EVP_CIPHER_CTX_free(lVar9);
      if ((int)lVar13 == 0) {
        CRYPTO_free(lVar8,"crypto\\cms\\cms_pwri.c",0x184);
      }
      X509_ALGOR_free(puVar7);
      return lVar13;
    }
    uVar16 = CONCAT44(uVar14,0x142);
    uVar14 = 0x41;
  }
  ERR_put_error(0x2e,0xa7,uVar14,"crypto\\cms\\cms_pwri.c",uVar16);
  return 0;
}



// FUNCTION 143dbcdf0 kek_unwrap_key body=473 status=ok
// SIG undefined kek_unwrap_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
kek_unwrap_key(void *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4,
              undefined8 param_5)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 local_res20 [8];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar8 = 0x143dbce0a;
  iVar1 = EVP_CIPHER_CTX_block_size(param_5);
  uVar6 = (ulonglong)iVar1;
  uVar5 = 0;
  uVar4 = 0;
  if ((uVar6 * 2 <= param_4) && (param_4 % uVar6 == 0)) {
    pbVar3 = (byte *)CRYPTO_malloc(param_4,"crypto\\cms\\cms_pwri.c",0xbf);
    if (pbVar3 == (byte *)0x0) {
      ERR_put_error(0x2e,0xb4,0x41,"crypto\\cms\\cms_pwri.c",CONCAT44(uVar7,0xc0));
      uVar5 = 0;
    }
    else {
      iVar2 = EVP_DecryptUpdate(param_5,pbVar3 + param_4 + uVar6 * -2,local_res20,
                                param_3 + uVar6 * -2 + param_4,CONCAT44(uVar7,iVar1 * 2),uVar8);
      if (iVar2 != 0) {
        iVar2 = EVP_DecryptUpdate(param_5,pbVar3,local_res20,pbVar3 + (param_4 - uVar6),iVar1,uVar8)
        ;
        if (iVar2 != 0) {
          iVar1 = EVP_DecryptUpdate(param_5,pbVar3,local_res20,param_3,(int)param_4 - iVar1,uVar8);
          if (iVar1 != 0) {
            uVar7 = 0;
            iVar1 = EVP_DecryptInit_ex(param_5,0,0,0,0);
            uVar5 = uVar4;
            if (iVar1 != 0) {
              iVar1 = EVP_DecryptUpdate(param_5,pbVar3,local_res20,pbVar3,
                                        CONCAT44(uVar7,(int)param_4));
              if (((iVar1 != 0) &&
                  ((byte)((pbVar3[6] ^ pbVar3[3]) & (pbVar3[5] ^ pbVar3[2]) &
                         (pbVar3[1] ^ pbVar3[4])) == 0xff)) &&
                 (uVar6 = (ulonglong)*pbVar3, uVar6 - 4 <= param_4)) {
                *param_2 = uVar6;
                _guard_xfg_dispatch_icall_nop(param_1,pbVar3 + 4,uVar6);
                uVar5 = 1;
              }
            }
          }
        }
      }
      CRYPTO_clear_free(pbVar3,param_4,"crypto\\cms\\cms_pwri.c",0xe2);
    }
    return uVar5;
  }
  return 0;
}



// FUNCTION 143dbcfd0 kek_wrap_key body=288 status=ok
// SIG undefined kek_wrap_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
kek_wrap_key(undefined1 *param_1,ulonglong *param_2,byte *param_3,ulonglong param_4,
            undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_res20 [8];
  undefined8 uVar5;
  
  uVar5 = 0x143dbcfee;
  iVar1 = EVP_CIPHER_CTX_block_size(param_5);
  uVar4 = (ulonglong)iVar1;
  uVar3 = param_4 + 3 + uVar4;
  uVar3 = uVar3 - uVar3 % uVar4;
  if ((uVar3 < uVar4 * 2) || (0xff < param_4)) {
    return 0;
  }
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_4;
    param_1[1] = ~*param_3;
    param_1[2] = ~param_3[1];
    param_1[3] = ~param_3[2];
    _guard_xfg_dispatch_icall_nop(param_1 + 4,param_3,param_4);
    iVar1 = (int)uVar3;
    if ((param_4 + 4 < uVar3) &&
       (iVar2 = RAND_bytes(param_1 + param_4 + 4,(iVar1 - (int)param_4) + -4), iVar2 < 1)) {
      return 0;
    }
    iVar2 = EVP_EncryptUpdate(param_5,param_1,local_res20,param_1,iVar1,uVar5);
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = EVP_EncryptUpdate(param_5,param_1,local_res20,param_1,iVar1,uVar5);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *param_2 = uVar3;
  return 1;
}



// FUNCTION 143dbd0f0 CMS_signed_add1_attr_by_NID body=45 status=ok
// SIG undefined CMS_signed_add1_attr_by_NID(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CMS_signed_add1_attr_by_NID(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = X509at_add1_attr_by_NID(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 143dbd120 CMS_signed_get_attr_by_NID body=26 status=ok
// SIG undefined CMS_signed_get_attr_by_NID(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_signed_get_attr_by_NID(longlong param_1)

{
  X509at_get_attr_by_NID(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 143dbd140 CMS_signed_get_attr_count body=26 status=ok
// SIG undefined CMS_signed_get_attr_count(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CMS_signed_get_attr_count(longlong param_1)

{
  FUN_143da7700(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 143dbd160 EC_POINT_point2bn body=99 status=ok
// SIG undefined EC_POINT_point2bn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EC_POINT_point2bn(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  undefined8 local_18;
  
  uVar1 = EC_POINT_point2buf();
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = BN_bin2bn(local_18,uVar1 & 0xffffffff,in_R9);
  CRYPTO_free(local_18,"crypto\\ec\\ec_print.c",0x1d);
  return uVar2;
}



// FUNCTION 143dbd1d0 CMS_stream body=141 status=ok
// SIG undefined CMS_stream(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CMS_stream(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143dbd1e0;
  plVar1 = (longlong *)CMS_get0_content(param_2);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    lVar2 = ASN1_OCTET_STRING_new();
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      ERR_put_error(0x2e,0x9b,0x41,"crypto\\cms\\cms_io.c",0x1f,uVar3);
      return 0;
    }
  }
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 0x10;
  *(uint *)(*plVar1 + 0x10) = *(uint *)(*plVar1 + 0x10) & 0xffffffdf;
  *param_1 = *plVar1 + 8;
  return 1;
}



// FUNCTION 143dbd260 gf_add body=190 status=ok
// SIG undefined gf_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void gf_add(int *param_1,int *param_2,int *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  
  if (((param_3 + 0xf < param_1) || (param_1 + 0xf < param_3)) &&
     ((param_2 + 0xf < param_1 || (param_1 + 0xf < param_2)))) {
    iVar2 = param_3[1];
    iVar3 = param_3[2];
    iVar4 = param_3[3];
    iVar5 = param_2[1];
    iVar6 = param_2[2];
    iVar7 = param_2[3];
    iVar8 = param_2[4];
    iVar9 = param_2[5];
    iVar10 = param_2[6];
    iVar11 = param_2[7];
    iVar12 = param_3[4];
    iVar13 = param_3[5];
    iVar14 = param_3[6];
    iVar15 = param_3[7];
    *param_1 = *param_2 + *param_3;
    param_1[1] = iVar5 + iVar2;
    param_1[2] = iVar6 + iVar3;
    param_1[3] = iVar7 + iVar4;
    iVar2 = param_2[8];
    iVar3 = param_2[9];
    iVar4 = param_2[10];
    iVar5 = param_2[0xb];
    iVar6 = param_3[8];
    iVar7 = param_3[9];
    iVar16 = param_3[10];
    iVar17 = param_3[0xb];
    param_1[4] = iVar8 + iVar12;
    param_1[5] = iVar9 + iVar13;
    param_1[6] = iVar10 + iVar14;
    param_1[7] = iVar11 + iVar15;
    iVar8 = param_2[0xc];
    iVar9 = param_2[0xd];
    iVar10 = param_2[0xe];
    iVar11 = param_2[0xf];
    auVar1 = *(undefined1 (*) [16])(param_3 + 0xc);
    param_1[8] = iVar2 + iVar6;
    param_1[9] = iVar3 + iVar7;
    param_1[10] = iVar4 + iVar16;
    param_1[0xb] = iVar5 + iVar17;
    param_1[0xc] = iVar8 + auVar1._0_4_;
    param_1[0xd] = iVar9 + auVar1._4_4_;
    param_1[0xe] = iVar10 + auVar1._8_4_;
    param_1[0xf] = iVar11 + auVar1._12_4_;
    gf_weak_reduce(param_1);
    return;
  }
  lVar19 = (longlong)param_2 - (longlong)param_3;
  lVar20 = (longlong)param_1 - (longlong)param_3;
  lVar18 = 0x10;
  do {
    *(int *)(lVar20 + (longlong)param_3) = *(int *)(lVar19 + (longlong)param_3) + *param_3;
    param_3 = param_3 + 1;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  gf_weak_reduce(param_1);
  return;
}



// FUNCTION 143dbd320 gf_deserialize body=1182 status=ok
// SIG undefined gf_deserialize(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint gf_deserialize(int *param_1,longlong param_2,int param_3,byte param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  int *piVar25;
  uint *puVar26;
  undefined1 auStack_98 [32];
  uint local_78 [4];
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x143dbd342;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar8 = 0;
  puVar26 = &DAT_145db7184;
  uVar24 = 0;
  uVar20 = 0;
  lVar23 = 0;
  piVar25 = param_1 + -0x5176dc61;
  uVar18 = 2;
  do {
    for (; (uVar24 < 0x1c && (uVar8 < 0x38)); uVar8 = uVar8 + 1) {
      bVar11 = *(byte *)((ulonglong)uVar8 + param_2);
      if (uVar8 == 0x37) {
        bVar11 = bVar11 & ~param_4;
      }
      bVar9 = (byte)uVar24;
      uVar24 = uVar24 + 8;
      uVar20 = uVar20 | (ulonglong)bVar11 << (bVar9 & 0x3f);
    }
    uVar10 = puVar26[-1];
    uVar12 = (uint)uVar20 & 0xfffffff;
    if (0xe < uVar18 - 2) {
      uVar12 = (uint)uVar20;
    }
    uVar24 = uVar24 - 0x1c;
    *(uint *)((longlong)puVar26 + (longlong)piVar25) = uVar12;
    uVar20 = uVar20 >> 0x1c;
    for (; (uVar24 < 0x1c && (uVar8 < 0x38)); uVar8 = uVar8 + 1) {
      bVar11 = *(byte *)((ulonglong)uVar8 + param_2);
      if (uVar8 == 0x37) {
        bVar11 = bVar11 & ~param_4;
      }
      bVar9 = (byte)uVar24;
      uVar24 = uVar24 + 8;
      uVar20 = uVar20 | (ulonglong)bVar11 << (bVar9 & 0x3f);
    }
    uVar1 = *puVar26;
    uVar13 = (uint)uVar20 & 0xfffffff;
    if (0xe < uVar18 - 1) {
      uVar13 = (uint)uVar20;
    }
    uVar24 = uVar24 - 0x1c;
    *(uint *)((longlong)(puVar26 + 1) + (longlong)piVar25) = uVar13;
    uVar20 = uVar20 >> 0x1c;
    for (; (uVar24 < 0x1c && (uVar8 < 0x38)); uVar8 = uVar8 + 1) {
      bVar11 = *(byte *)((ulonglong)uVar8 + param_2);
      if (uVar8 == 0x37) {
        bVar11 = bVar11 & ~param_4;
      }
      bVar9 = (byte)uVar24;
      uVar24 = uVar24 + 8;
      uVar20 = uVar20 | (ulonglong)bVar11 << (bVar9 & 0x3f);
    }
    uVar2 = puVar26[1];
    uVar21 = (ulonglong)((uint)uVar20 & 0xfffffff);
    if (0xe < uVar18) {
      uVar21 = uVar20 & 0xffffffff;
    }
    uVar24 = uVar24 - 0x1c;
    *(int *)((longlong)(puVar26 + 2) + (longlong)piVar25) = (int)uVar21;
    uVar20 = uVar20 >> 0x1c;
    for (; (uVar24 < 0x1c && (uVar8 < 0x38)); uVar8 = uVar8 + 1) {
      bVar11 = *(byte *)((ulonglong)uVar8 + param_2);
      if (uVar8 == 0x37) {
        bVar11 = bVar11 & ~param_4;
      }
      bVar9 = (byte)uVar24;
      uVar24 = uVar24 + 8;
      uVar20 = uVar20 | (ulonglong)bVar11 << (bVar9 & 0x3f);
    }
    uVar3 = puVar26[2];
    uVar14 = (uint)uVar20 & 0xfffffff;
    if (0xe < uVar18 + 1) {
      uVar14 = (uint)uVar20;
    }
    uVar24 = uVar24 - 0x1c;
    *(uint *)((longlong)(puVar26 + 3) + (longlong)piVar25) = uVar14;
    uVar20 = uVar20 >> 0x1c;
    for (; (uVar24 < 0x1c && (uVar8 < 0x38)); uVar8 = uVar8 + 1) {
      bVar11 = *(byte *)((ulonglong)uVar8 + param_2);
      if (uVar8 == 0x37) {
        bVar11 = bVar11 & ~param_4;
      }
      bVar9 = (byte)uVar24;
      uVar24 = uVar24 + 8;
      uVar20 = uVar20 | (ulonglong)bVar11 << (bVar9 & 0x3f);
    }
    uVar4 = puVar26[3];
    uVar15 = (uint)uVar20 & 0xfffffff;
    if (0xe < uVar18 + 2) {
      uVar15 = (uint)uVar20;
    }
    uVar24 = uVar24 - 0x1c;
    *(uint *)((longlong)(puVar26 + 4) + (longlong)piVar25) = uVar15;
    uVar20 = uVar20 >> 0x1c;
    for (; (uVar24 < 0x1c && (uVar8 < 0x38)); uVar8 = uVar8 + 1) {
      bVar11 = *(byte *)((ulonglong)uVar8 + param_2);
      if (uVar8 == 0x37) {
        bVar11 = bVar11 & ~param_4;
      }
      bVar9 = (byte)uVar24;
      uVar24 = uVar24 + 8;
      uVar20 = uVar20 | (ulonglong)bVar11 << (bVar9 & 0x3f);
    }
    uVar5 = puVar26[4];
    uVar16 = (uint)uVar20 & 0xfffffff;
    if (0xe < uVar18 + 3) {
      uVar16 = (uint)uVar20;
    }
    uVar24 = uVar24 - 0x1c;
    *(uint *)((longlong)(puVar26 + 5) + (longlong)piVar25) = uVar16;
    uVar20 = uVar20 >> 0x1c;
    for (; (uVar24 < 0x1c && (uVar8 < 0x38)); uVar8 = uVar8 + 1) {
      bVar11 = *(byte *)((ulonglong)uVar8 + param_2);
      if (uVar8 == 0x37) {
        bVar11 = bVar11 & ~param_4;
      }
      bVar9 = (byte)uVar24;
      uVar24 = uVar24 + 8;
      uVar20 = uVar20 | (ulonglong)bVar11 << (bVar9 & 0x3f);
    }
    uVar6 = puVar26[5];
    uVar17 = (uint)uVar20 & 0xfffffff;
    if (0xe < uVar18 + 4) {
      uVar17 = (uint)uVar20;
    }
    uVar24 = uVar24 - 0x1c;
    *(uint *)((longlong)(puVar26 + 6) + (longlong)piVar25) = uVar17;
    uVar20 = uVar20 >> 0x1c;
    for (; (uVar24 < 0x1c && (uVar8 < 0x38)); uVar8 = uVar8 + 1) {
      bVar11 = *(byte *)((ulonglong)uVar8 + param_2);
      if (uVar8 == 0x37) {
        bVar11 = bVar11 & ~param_4;
      }
      bVar9 = (byte)uVar24;
      uVar24 = uVar24 + 8;
      uVar20 = uVar20 | (ulonglong)bVar11 << (bVar9 & 0x3f);
    }
    uVar7 = puVar26[6];
    uVar19 = (ulonglong)((uint)uVar20 & 0xfffffff);
    if (0xe < uVar18 + 5) {
      uVar19 = uVar20 & 0xffffffff;
    }
    uVar24 = uVar24 - 0x1c;
    *(int *)((longlong)(puVar26 + 7) + (longlong)piVar25) = (int)uVar19;
    lVar22 = (uVar19 - uVar7) +
             ((longlong)
              (((ulonglong)uVar17 - (ulonglong)uVar6) +
              ((longlong)
               (((ulonglong)uVar16 - (ulonglong)uVar5) +
               ((longlong)
                (((ulonglong)uVar15 - (ulonglong)uVar4) +
                ((longlong)
                 (((ulonglong)uVar14 - (ulonglong)uVar3) +
                 ((longlong)
                  ((uVar21 - uVar2) +
                  ((longlong)
                   (((ulonglong)uVar13 - (ulonglong)uVar1) +
                   ((longlong)(((ulonglong)uVar12 - (ulonglong)uVar10) + lVar23) >> 0x20)) >> 0x20))
                 >> 0x20)) >> 0x20)) >> 0x20)) >> 0x20)) >> 0x20);
    uVar20 = uVar20 >> 0x1c;
    lVar23 = lVar22 >> 0x20;
    uVar10 = uVar18 + 6;
    puVar26 = puVar26 + 8;
    uVar18 = uVar18 + 8;
  } while (uVar10 < 0x10);
  if (param_3 == 0) {
    if ((param_1 + 0xf < local_78) || (&iStack_3c < param_1)) {
      local_78[0] = *param_1 * 2;
      local_78[1] = param_1[1] * 2;
      local_78[2] = param_1[2] * 2;
      local_78[3] = param_1[3] * 2;
      local_68 = param_1[4] * 2;
      iStack_64 = param_1[5] * 2;
      iStack_60 = param_1[6] * 2;
      iStack_5c = param_1[7] * 2;
      local_58 = param_1[8] * 2;
      iStack_54 = param_1[9] * 2;
      iStack_50 = param_1[10] * 2;
      iStack_4c = param_1[0xb] * 2;
      local_48 = param_1[0xc] * 2;
      iStack_44 = param_1[0xd] * 2;
      iStack_40 = param_1[0xe] * 2;
      iStack_3c = param_1[0xf] * 2;
    }
    else {
      lVar23 = 0x10;
      puVar26 = local_78;
      do {
        *puVar26 = *(int *)(((longlong)param_1 - (longlong)local_78) + (longlong)puVar26) * 2;
        lVar23 = lVar23 + -1;
        puVar26 = puVar26 + 1;
      } while (lVar23 != 0);
    }
    gf_weak_reduce(local_78);
    gf_strong_reduce(local_78);
    uVar18 = (local_78[0] & 1) - 1;
  }
  else {
    uVar18 = 0xffffffff;
  }
  uVar8 = (uint)((ulonglong)lVar22 >> 0x20);
  return (int)((uint)uVar20 - 1 & ~(uint)uVar20) >> 0x1f &
         0xffffffffU - ((int)(uVar8 - 1 & ~uVar8) >> 0x1f) & uVar18;
}



// FUNCTION 143dbd7c0 gf_eq body=178 status=ok
// SIG undefined gf_eq(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int gf_eq(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint auStack_78 [8];
  uint local_58 [16];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x143dbd7ca;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  gf_sub(local_58,param_1,param_2);
  gf_strong_reduce(local_58);
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar2 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  lVar3 = 2;
  puVar1 = auStack_78;
  do {
    uVar7 = uVar7 | puVar1[8];
    uVar8 = uVar8 | puVar1[9];
    uVar9 = uVar9 | puVar1[10];
    uVar10 = uVar10 | puVar1[0xb];
    uVar2 = puVar1[0xc] | uVar2;
    uVar4 = puVar1[0xd] | uVar4;
    uVar5 = puVar1[0xe] | uVar5;
    uVar6 = puVar1[0xf] | uVar6;
    lVar3 = lVar3 + -1;
    puVar1 = puVar1 + 8;
  } while (lVar3 != 0);
  uVar2 = uVar2 | uVar7 | uVar5 | uVar9 | uVar4 | uVar8 | uVar6 | uVar10;
  return (int)(uVar2 - 1 & ~uVar2) >> 0x1f;
}



// FUNCTION 143dbd880 gf_isr body=1256 status=ok
// SIG undefined gf_isr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int gf_isr(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_148 [32];
  int local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8 [11];
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x143dbd89d;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  gf_sqr(&local_a8);
  gf_mul(local_e8,param_2,&local_a8);
  gf_sqr(&local_a8,local_e8);
  gf_mul(local_e8,param_2,&local_a8);
  gf_sqr(&local_a8,local_e8);
  gf_sqr(local_68,&local_a8);
  gf_sqr(&local_a8,local_68);
  gf_mul(&local_128,local_e8,&local_a8);
  gf_sqr(&local_a8,&local_128);
  gf_sqr(local_68,&local_a8);
  gf_sqr(&local_a8,local_68);
  gf_mul(&local_128,local_e8,&local_a8);
  gf_sqr(local_e8,&local_128);
  lVar6 = 4;
  do {
    gf_sqr(local_68,local_e8);
    gf_sqr(local_e8,local_68);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  gf_mul(&local_a8,&local_128,local_e8);
  gf_sqr(&local_128,&local_a8);
  gf_mul(local_e8,param_2,&local_128);
  gf_sqr(local_68,local_e8);
  gf_sqr(&local_128,local_68);
  lVar6 = 8;
  do {
    gf_sqr(local_68,&local_128);
    gf_sqr(&local_128,local_68);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  gf_mul(local_e8,&local_a8,&local_128);
  gf_sqr(&local_128,local_e8);
  lVar6 = 0x12;
  lVar7 = 0x12;
  do {
    gf_sqr(local_68,&local_128);
    gf_sqr(&local_128,local_68);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  gf_mul(&local_a8,local_e8,&local_128);
  gf_sqr(&local_128,&local_a8);
  do {
    gf_sqr(local_68,&local_128);
    gf_sqr(&local_128,local_68);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  gf_mul(&local_a8,local_e8,&local_128);
  gf_sqr(&local_128,&local_a8);
  lVar6 = 0x37;
  do {
    gf_sqr(local_68,&local_128);
    gf_sqr(&local_128,local_68);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  gf_mul(local_e8,&local_a8,&local_128);
  gf_sqr(&local_128,local_e8);
  gf_mul(&local_a8,param_2,&local_128);
  gf_sqr(&local_128,&local_a8);
  lVar6 = 0x6f;
  do {
    gf_sqr(local_68,&local_128);
    gf_sqr(&local_128,local_68);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  gf_mul(&local_a8,local_e8,&local_128);
  gf_sqr(local_e8,&local_a8);
  gf_mul(&local_128,local_e8,param_2);
  auVar2 = _DAT_145daa7a0;
  auVar1 = _DAT_145daa790;
  *param_1 = local_a8;
  param_1[1] = uStack_a0;
  param_1[2] = local_98;
  param_1[3] = uStack_90;
  param_1[4] = local_88;
  param_1[5] = uStack_80;
  param_1[6] = local_78;
  param_1[7] = uStack_70;
  local_e8[4] = local_118;
  local_e8[5] = uStack_114;
  local_e8[6] = uStack_110;
  local_e8[7] = uStack_10c;
  local_e8[0] = local_128 - 1;
  local_e8[1] = uStack_124;
  local_e8[2] = uStack_120;
  local_e8[3] = uStack_11c;
  local_b8 = local_f8;
  uStack_b4 = uStack_f4;
  uStack_b0 = uStack_f0;
  uStack_ac = uStack_ec;
  local_e8[8] = local_108;
  local_e8[9] = uStack_104;
  local_e8[10] = uStack_100;
  uStack_bc = uStack_fc;
  puVar3 = local_e8;
  uVar4 = 0;
  do {
    auVar14._0_4_ = -(uint)(uVar4 == 8);
    auVar14._4_4_ = -(uint)(uVar4 == 7);
    auVar14._8_4_ = -(uint)(uVar4 == 6);
    auVar14._12_4_ = -(uint)(uVar4 == 5);
    uVar5 = uVar4 + 8;
    auVar14 = auVar1 & auVar14 | ~auVar14 & auVar2;
    auVar15._0_4_ = -(uint)(uVar4 == 4);
    auVar15._4_4_ = -(uint)(uVar4 == 3);
    auVar15._8_4_ = -(uint)(uVar4 == 2);
    auVar15._12_4_ = -(uint)(uVar4 == 1);
    *puVar3 = auVar14._0_4_ + *puVar3;
    puVar3[1] = auVar14._4_4_ + puVar3[1];
    puVar3[2] = auVar14._8_4_ + puVar3[2];
    puVar3[3] = auVar14._12_4_ + puVar3[3];
    auVar15 = auVar1 & auVar15 | ~auVar15 & auVar2;
    auVar14 = *(undefined1 (*) [16])(puVar3 + 4);
    puVar3[4] = auVar15._0_4_ + auVar14._0_4_;
    puVar3[5] = auVar15._4_4_ + auVar14._4_4_;
    puVar3[6] = auVar15._8_4_ + auVar14._8_4_;
    puVar3[7] = auVar15._12_4_ + auVar14._12_4_;
    puVar3 = puVar3 + 8;
    uVar4 = uVar5;
  } while (uVar5 < 0x10);
  gf_weak_reduce(local_e8);
  gf_strong_reduce(local_e8);
  uVar4 = 0;
  uVar8 = 0;
  uVar10 = 0;
  uVar12 = 0;
  uVar5 = 0;
  uVar9 = 0;
  uVar11 = 0;
  uVar13 = 0;
  lVar6 = 2;
  puVar3 = local_e8;
  do {
    uVar4 = *puVar3 | uVar4;
    uVar8 = puVar3[1] | uVar8;
    uVar10 = puVar3[2] | uVar10;
    uVar12 = puVar3[3] | uVar12;
    uVar5 = puVar3[4] | uVar5;
    uVar9 = puVar3[5] | uVar9;
    uVar11 = puVar3[6] | uVar11;
    uVar13 = puVar3[7] | uVar13;
    lVar6 = lVar6 + -1;
    puVar3 = puVar3 + 8;
  } while (lVar6 != 0);
  uVar4 = uVar5 | uVar4 | uVar11 | uVar10 | uVar9 | uVar8 | uVar13 | uVar12;
  return (int)(uVar4 - 1 & ~uVar4) >> 0x1f;
}



// FUNCTION 143dbdd70 gf_lobit body=100 status=ok
// SIG undefined gf_lobit(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int gf_lobit(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x143dbdd7a;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  local_38 = *(undefined4 *)(param_1 + 4);
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 5);
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_28 = *(undefined4 *)(param_1 + 6);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_20 = *(undefined4 *)(param_1 + 7);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x3c);
  gf_strong_reduce(&local_58);
  return -((uint)local_58 & 1);
}



// FUNCTION 143dbdde0 gf_serialize body=712 status=ok
// SIG undefined gf_serialize(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void gf_serialize(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143dbddf2;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  uStack_60 = param_2[1];
  uVar4 = 0;
  local_58 = param_2[2];
  uStack_50 = param_2[3];
  uVar3 = 0;
  uVar5 = 0;
  local_48 = *(undefined4 *)(param_2 + 4);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_40 = *(undefined4 *)(param_2 + 5);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_38 = *(undefined4 *)(param_2 + 6);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_30 = *(undefined4 *)(param_2 + 7);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x3c);
  gf_strong_reduce(&local_68);
  lVar6 = 0;
  do {
    uVar1 = uVar3;
    if ((uVar3 < 8) && (uVar4 < 0x10)) {
      uVar1 = uVar3 + 0x1c;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar3 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + param_1) = (char)uVar5;
    uVar2 = uVar1 - 8;
    uVar5 = uVar5 >> 8;
    uVar3 = uVar2;
    if ((uVar2 < 8) && (uVar4 < 0x10)) {
      uVar3 = uVar1 + 0x14;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + 1 + param_1) = (char)uVar5;
    uVar2 = uVar3 - 8;
    uVar5 = uVar5 >> 8;
    uVar1 = uVar2;
    if ((uVar2 < 8) && (uVar4 < 0x10)) {
      uVar1 = uVar3 + 0x14;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + 2 + param_1) = (char)uVar5;
    uVar2 = uVar1 - 8;
    uVar5 = uVar5 >> 8;
    uVar3 = uVar2;
    if ((uVar2 < 8) && (uVar4 < 0x10)) {
      uVar3 = uVar1 + 0x14;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + 3 + param_1) = (char)uVar5;
    uVar2 = uVar3 - 8;
    uVar5 = uVar5 >> 8;
    uVar1 = uVar2;
    if ((uVar2 < 8) && (uVar4 < 0x10)) {
      uVar1 = uVar3 + 0x14;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + 4 + param_1) = (char)uVar5;
    uVar2 = uVar1 - 8;
    uVar5 = uVar5 >> 8;
    uVar3 = uVar2;
    if ((uVar2 < 8) && (uVar4 < 0x10)) {
      uVar3 = uVar1 + 0x14;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + 5 + param_1) = (char)uVar5;
    uVar2 = uVar3 - 8;
    uVar5 = uVar5 >> 8;
    uVar1 = uVar2;
    if ((uVar2 < 8) && (uVar4 < 0x10)) {
      uVar1 = uVar3 + 0x14;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + 6 + param_1) = (char)uVar5;
    uVar2 = uVar1 - 8;
    uVar5 = uVar5 >> 8;
    uVar3 = uVar2;
    if ((uVar2 < 8) && (uVar4 < 0x10)) {
      uVar3 = uVar1 + 0x14;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + 7 + param_1) = (char)uVar5;
    uVar2 = uVar3 - 8;
    uVar5 = uVar5 >> 8;
    uVar1 = uVar2;
    if ((uVar2 < 8) && (uVar4 < 0x10)) {
      uVar1 = uVar3 + 0x14;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + 8 + param_1) = (char)uVar5;
    uVar2 = uVar1 - 8;
    uVar5 = uVar5 >> 8;
    uVar3 = uVar2;
    if ((uVar2 < 8) && (uVar4 < 0x10)) {
      uVar3 = uVar1 + 0x14;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + 9 + param_1) = (char)uVar5;
    uVar2 = uVar3 - 8;
    uVar5 = uVar5 >> 8;
    uVar1 = uVar2;
    if ((uVar2 < 8) && (uVar4 < 0x10)) {
      uVar1 = uVar3 + 0x14;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + 10 + param_1) = (char)uVar5;
    uVar2 = uVar1 - 8;
    uVar5 = uVar5 >> 8;
    uVar3 = uVar2;
    if ((uVar2 < 8) && (uVar4 < 0x10)) {
      uVar3 = uVar1 + 0x14;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + 0xb + param_1) = (char)uVar5;
    uVar2 = uVar3 - 8;
    uVar5 = uVar5 >> 8;
    uVar1 = uVar2;
    if ((uVar2 < 8) && (uVar4 < 0x10)) {
      uVar1 = uVar3 + 0x14;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + 0xc + param_1) = (char)uVar5;
    uVar2 = uVar1 - 8;
    uVar5 = uVar5 >> 8;
    uVar3 = uVar2;
    if ((uVar2 < 8) && (uVar4 < 0x10)) {
      uVar3 = uVar1 + 0x14;
      uVar5 = uVar5 | (ulonglong)*(uint *)((longlong)&local_68 + (ulonglong)uVar4 * 4) <<
                      ((byte)uVar2 & 0x3f);
      uVar4 = uVar4 + 1;
    }
    *(char *)(lVar6 + 0xd + param_1) = (char)uVar5;
    uVar3 = uVar3 - 8;
    uVar5 = uVar5 >> 8;
    lVar6 = lVar6 + 0xe;
  } while (lVar6 < 0x38);
  return;
}



// FUNCTION 143dbe0b0 gf_strong_reduce body=943 status=ok
// SIG undefined gf_strong_reduce(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void gf_strong_reduce(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  
  gf_weak_reduce();
  lVar11 = ((ulonglong)param_1[1] - 0xfffffff) +
           ((longlong)((ulonglong)*param_1 - 0xfffffff) >> 0x1c);
  lVar6 = ((ulonglong)param_1[2] - 0xfffffff) + (lVar11 >> 0x1c);
  lVar12 = ((ulonglong)param_1[3] - 0xfffffff) + (lVar6 >> 0x1c);
  lVar7 = ((ulonglong)param_1[4] - 0xfffffff) + (lVar12 >> 0x1c);
  lVar13 = ((ulonglong)param_1[5] - 0xfffffff) + (lVar7 >> 0x1c);
  lVar8 = ((ulonglong)param_1[6] - 0xfffffff) + (lVar13 >> 0x1c);
  lVar14 = ((ulonglong)param_1[7] - 0xfffffff) + (lVar8 >> 0x1c);
  lVar9 = ((ulonglong)param_1[8] - 0xffffffe) + (lVar14 >> 0x1c);
  lVar15 = ((ulonglong)param_1[9] - 0xfffffff) + (lVar9 >> 0x1c);
  lVar10 = ((ulonglong)param_1[10] - 0xfffffff) + (lVar15 >> 0x1c);
  uVar18 = (uint)lVar10 & 0xfffffff;
  lVar16 = ((ulonglong)param_1[0xb] - 0xfffffff) + (lVar10 >> 0x1c);
  param_1[10] = uVar18;
  lVar10 = ((ulonglong)param_1[0xc] - 0xfffffff) + (lVar16 >> 0x1c);
  uVar19 = (uint)lVar16 & 0xfffffff;
  uVar1 = (uint)lVar10 & 0xfffffff;
  lVar10 = ((ulonglong)param_1[0xd] - 0xfffffff) + (lVar10 >> 0x1c);
  param_1[0xc] = uVar1;
  param_1[0xb] = uVar19;
  uVar2 = (uint)lVar10 & 0xfffffff;
  param_1[0xd] = uVar2;
  lVar10 = ((ulonglong)param_1[0xe] - 0xfffffff) + (lVar10 >> 0x1c);
  uVar3 = (uint)lVar10 & 0xfffffff;
  param_1[0xe] = uVar3;
  lVar10 = (lVar10 >> 0x1c) + ((ulonglong)param_1[0xf] - 0xfffffff);
  uVar4 = (uint)lVar10 & 0xfffffff;
  uVar5 = (uint)(lVar10 >> 0x1c);
  param_1[0xf] = uVar4;
  uVar17 = (ulonglong)(uVar5 & 0xfffffff) +
           (ulonglong)((uint)((ulonglong)*param_1 - 0xfffffff) & 0xfffffff);
  *param_1 = (uint)uVar17 & 0xfffffff;
  uVar20 = (ulonglong)(uVar5 & 0xfffffff);
  uVar17 = (uVar17 >> 0x1c) + uVar20 + ((uint)lVar11 & 0xfffffff);
  param_1[1] = (uint)uVar17 & 0xfffffff;
  uVar17 = (uVar17 >> 0x1c) + uVar20 + ((uint)lVar6 & 0xfffffff);
  param_1[2] = (uint)uVar17 & 0xfffffff;
  uVar17 = (uVar17 >> 0x1c) + uVar20 + ((uint)lVar12 & 0xfffffff);
  param_1[3] = (uint)uVar17 & 0xfffffff;
  uVar17 = (uVar17 >> 0x1c) + uVar20 + ((uint)lVar7 & 0xfffffff);
  param_1[4] = (uint)uVar17 & 0xfffffff;
  uVar17 = (uVar17 >> 0x1c) + uVar20 + ((uint)lVar13 & 0xfffffff);
  param_1[5] = (uint)uVar17 & 0xfffffff;
  uVar17 = (uVar17 >> 0x1c) + uVar20 + ((uint)lVar8 & 0xfffffff);
  param_1[6] = (uint)uVar17 & 0xfffffff;
  uVar17 = (uVar17 >> 0x1c) + uVar20 + ((uint)lVar14 & 0xfffffff);
  param_1[7] = (uint)uVar17 & 0xfffffff;
  uVar17 = (ulonglong)((uint)lVar9 & 0xfffffff) + (ulonglong)(uVar5 & 0xffffffe) + (uVar17 >> 0x1c);
  param_1[8] = (uint)uVar17 & 0xfffffff;
  uVar17 = (uVar17 >> 0x1c) + uVar20 + ((uint)lVar15 & 0xfffffff);
  param_1[9] = (uint)uVar17 & 0xfffffff;
  uVar17 = (ulonglong)uVar18 + uVar20 + (uVar17 >> 0x1c);
  param_1[10] = (uint)uVar17 & 0xfffffff;
  uVar17 = (ulonglong)uVar19 + uVar20 + (uVar17 >> 0x1c);
  param_1[0xb] = (uint)uVar17 & 0xfffffff;
  uVar17 = (ulonglong)uVar1 + uVar20 + (uVar17 >> 0x1c);
  param_1[0xc] = (uint)uVar17 & 0xfffffff;
  uVar17 = (ulonglong)uVar2 + uVar20 + (uVar17 >> 0x1c);
  param_1[0xd] = (uint)uVar17 & 0xfffffff;
  uVar17 = (ulonglong)uVar3 + uVar20 + (uVar17 >> 0x1c);
  param_1[0xe] = (uint)uVar17 & 0xfffffff;
  param_1[0xf] = uVar4 + (uVar5 & 0xfffffff) + (int)(uVar17 >> 0x1c) & 0xfffffff;
  return;
}



// FUNCTION 143dbe460 gf_sub body=329 status=ok
// SIG undefined gf_sub(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gf_sub(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  if (((param_3 + 0xf < param_1) || (param_1 + 0xf < param_3)) &&
     ((param_2 + 0xf < param_1 || (param_1 + 0xf < param_2)))) {
    iVar1 = param_3[1];
    iVar2 = param_3[2];
    iVar3 = param_3[3];
    iVar4 = param_2[1];
    iVar5 = param_2[2];
    iVar6 = param_2[3];
    iVar7 = param_2[4];
    iVar8 = param_2[5];
    iVar9 = param_2[6];
    iVar10 = param_2[7];
    iVar11 = param_3[4];
    iVar12 = param_3[5];
    iVar13 = param_3[6];
    iVar14 = param_3[7];
    *param_1 = *param_2 - *param_3;
    param_1[1] = iVar4 - iVar1;
    param_1[2] = iVar5 - iVar2;
    param_1[3] = iVar6 - iVar3;
    iVar1 = param_2[8];
    iVar2 = param_2[9];
    iVar3 = param_2[10];
    iVar4 = param_2[0xb];
    iVar5 = param_3[8];
    iVar6 = param_3[9];
    iVar15 = param_3[10];
    iVar16 = param_3[0xb];
    param_1[4] = iVar7 - iVar11;
    param_1[5] = iVar8 - iVar12;
    param_1[6] = iVar9 - iVar13;
    param_1[7] = iVar10 - iVar14;
    iVar7 = param_2[0xc];
    iVar8 = param_2[0xd];
    iVar9 = param_2[0xe];
    iVar10 = param_2[0xf];
    iVar11 = param_3[0xc];
    iVar12 = param_3[0xd];
    iVar13 = param_3[0xe];
    iVar14 = param_3[0xf];
    param_1[8] = iVar1 - iVar5;
    param_1[9] = iVar2 - iVar6;
    param_1[10] = iVar3 - iVar15;
    param_1[0xb] = iVar4 - iVar16;
    param_1[0xc] = iVar7 - iVar11;
    param_1[0xd] = iVar8 - iVar12;
    param_1[0xe] = iVar9 - iVar13;
    param_1[0xf] = iVar10 - iVar14;
  }
  else {
    lVar23 = (longlong)param_2 - (longlong)param_3;
    lVar24 = (longlong)param_1 - (longlong)param_3;
    lVar19 = 0x10;
    do {
      *(int *)(lVar24 + (longlong)param_3) = *(int *)(lVar23 + (longlong)param_3) - *param_3;
      param_3 = param_3 + 1;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  auVar18 = _DAT_145daa7a0;
  auVar17 = _DAT_145daa790;
  piVar20 = param_1;
  uVar21 = 0;
  do {
    uVar22 = uVar21 + 8;
    auVar25._0_4_ = -(uint)(uVar21 == 8);
    auVar25._4_4_ = -(uint)(uVar21 == 7);
    auVar25._8_4_ = -(uint)(uVar21 == 6);
    auVar25._12_4_ = -(uint)(uVar21 == 5);
    auVar25 = ~auVar25 & auVar18 | auVar25 & auVar17;
    auVar26._0_4_ = -(uint)(uVar21 == 4);
    auVar26._4_4_ = -(uint)(uVar21 == 3);
    auVar26._8_4_ = -(uint)(uVar21 == 2);
    auVar26._12_4_ = -(uint)(uVar21 == 1);
    *piVar20 = auVar25._0_4_ + *piVar20;
    piVar20[1] = auVar25._4_4_ + piVar20[1];
    piVar20[2] = auVar25._8_4_ + piVar20[2];
    piVar20[3] = auVar25._12_4_ + piVar20[3];
    auVar26 = ~auVar26 & auVar18 | auVar26 & auVar17;
    auVar25 = *(undefined1 (*) [16])(piVar20 + 4);
    piVar20[4] = auVar26._0_4_ + auVar25._0_4_;
    piVar20[5] = auVar26._4_4_ + auVar25._4_4_;
    piVar20[6] = auVar26._8_4_ + auVar25._8_4_;
    piVar20[7] = auVar26._12_4_ + auVar25._12_4_;
    piVar20 = piVar20 + 8;
    uVar21 = uVar22;
  } while (uVar22 < 0x10);
  gf_weak_reduce(param_1);
  return;
}



// FUNCTION 143dbe5b0 gf_mul body=700 status=ok
// SIG undefined gf_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void gf_mul(uint *param_1,longlong param_2,uint *param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  undefined1 local_98 [40];
  uint local_70 [4];
  int local_60;
  int local_5c;
  int local_58;
  uint local_54 [5];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)local_98;
  uVar8 = 0;
  uVar2 = 0;
  lVar5 = 1;
  iVar11 = 1;
  local_54[2] = param_3[9] + param_3[1];
  local_70[2] = *(int *)(param_2 + 0x28) + *(int *)(param_2 + 8);
  local_54[3] = param_3[10] + param_3[2];
  local_70[3] = *(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0xc);
  local_54[4] = param_3[0xb] + param_3[3];
  local_60 = *(int *)(param_2 + 0x30) + *(int *)(param_2 + 0x10);
  local_40 = param_3[0xc] + param_3[4];
  local_5c = *(int *)(param_2 + 0x34) + *(int *)(param_2 + 0x14);
  local_3c = param_3[0xd] + param_3[5];
  local_58 = *(int *)(param_2 + 0x38) + *(int *)(param_2 + 0x18);
  local_38 = param_3[0xe] + param_3[6];
  local_54[0] = *(int *)(param_2 + 0x3c) + *(int *)(param_2 + 0x1c);
  local_34 = param_3[0xf] + param_3[7];
  puVar1 = param_1 + 8;
  local_70[1] = *(int *)(param_2 + 0x24) + *(int *)(param_2 + 4);
  local_54[1] = param_3[8] + *param_3;
  puVar12 = puVar1;
  do {
    lVar9 = 0;
    lVar3 = (longlong)iVar11;
    if (0 < iVar11) {
      puVar6 = param_3;
      puVar7 = (uint *)((param_2 - (longlong)param_1) + -0x20 + (longlong)puVar12);
      do {
        lVar9 = lVar9 + (ulonglong)*puVar7 * (ulonglong)*puVar6;
        uVar2 = uVar2 + (ulonglong)
                        *(uint *)((longlong)local_70 + (4 - param_2) + (longlong)(puVar7 + -1)) *
                        (ulonglong)
                        *(uint *)(((longlong)local_54 - (longlong)param_3) + (longlong)(puVar6 + 1))
        ;
        uVar8 = uVar8 + (ulonglong)puVar7[8] * (ulonglong)puVar6[8];
        lVar3 = lVar3 + -1;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + -1;
      } while (lVar3 != 0);
    }
    lVar3 = uVar2 - lVar9;
    lVar9 = uVar8 + lVar9;
    lVar10 = 0;
    if (lVar5 < 8) {
      lVar4 = 8 - lVar5;
      puVar6 = (uint *)((longlong)param_3 + (-0x1c - (longlong)param_1) + (longlong)puVar12);
      puVar7 = local_54;
      do {
        lVar9 = lVar9 - (ulonglong)
                        *(uint *)((param_2 - (longlong)(local_54 + 1)) + 0x20 + (longlong)puVar7) *
                        (ulonglong)*puVar6;
        lVar10 = lVar10 + (ulonglong)
                          *(uint *)(((longlong)local_54 - (longlong)param_3) +
                                   (longlong)(puVar6 + 1)) * (ulonglong)*puVar7;
        lVar3 = lVar3 + (ulonglong)
                        *(uint *)((param_2 - (longlong)(local_54 + 1)) + 0x44 +
                                 (longlong)(puVar7 + -1)) * (ulonglong)puVar6[8];
        lVar4 = lVar4 + -1;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + -1;
      } while (lVar4 != 0);
    }
    uVar8 = (ulonglong)(lVar9 + lVar10) >> 0x1c;
    puVar12[-8] = (uint)(lVar9 + lVar10) & 0xfffffff;
    iVar11 = iVar11 + 1;
    uVar2 = (ulonglong)(lVar3 + lVar10) >> 0x1c;
    *puVar12 = (uint)(lVar3 + lVar10) & 0xfffffff;
    lVar5 = lVar5 + 1;
    puVar12 = puVar12 + 1;
  } while (lVar5 < 9);
  uVar8 = uVar8 + *puVar1 + uVar2;
  param_1[9] = param_1[9] + (int)(uVar8 >> 0x1c);
  *puVar1 = (uint)uVar8 & 0xfffffff;
  param_1[1] = param_1[1] + (int)(uVar2 + *param_1 >> 0x1c);
  *param_1 = (uint)(uVar2 + *param_1) & 0xfffffff;
  return;
}



// FUNCTION 143dbe870 gf_mulw_unsigned body=515 status=ok
// SIG undefined gf_mulw_unsigned(void)

void gf_mulw_unsigned(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar1 = *param_2;
  uVar8 = (ulonglong)param_3;
  uVar7 = param_2[8];
  uVar5 = (uint)(uVar1 * uVar8) & 0xfffffff;
  *param_1 = uVar5;
  uVar4 = (uint)(uVar7 * uVar8) & 0xfffffff;
  param_1[8] = uVar4;
  uVar3 = param_2[1] * uVar8 + (uVar1 * uVar8 >> 0x1c);
  uVar2 = param_2[9] * uVar8 + (uVar7 * uVar8 >> 0x1c);
  uVar9 = (uint)uVar3 & 0xfffffff;
  param_1[1] = uVar9;
  uVar7 = (uint)uVar2 & 0xfffffff;
  param_1[9] = uVar7;
  uVar3 = param_2[2] * uVar8 + (uVar3 >> 0x1c);
  uVar2 = param_2[10] * uVar8 + (uVar2 >> 0x1c);
  param_1[2] = (uint)uVar3 & 0xfffffff;
  param_1[10] = (uint)uVar2 & 0xfffffff;
  uVar3 = param_2[3] * uVar8 + (uVar3 >> 0x1c);
  uVar2 = param_2[0xb] * uVar8 + (uVar2 >> 0x1c);
  param_1[3] = (uint)uVar3 & 0xfffffff;
  param_1[0xb] = (uint)uVar2 & 0xfffffff;
  uVar3 = param_2[4] * uVar8 + (uVar3 >> 0x1c);
  uVar1 = param_2[0xc];
  param_1[4] = (uint)uVar3 & 0xfffffff;
  uVar6 = uVar1 * uVar8 + (uVar2 >> 0x1c);
  param_1[0xc] = (uint)uVar6 & 0xfffffff;
  uVar2 = param_2[5] * uVar8 + (uVar3 >> 0x1c);
  uVar3 = param_2[0xd] * uVar8 + (uVar6 >> 0x1c);
  param_1[5] = (uint)uVar2 & 0xfffffff;
  param_1[0xd] = (uint)uVar3 & 0xfffffff;
  uVar6 = param_2[6] * uVar8 + (uVar2 >> 0x1c);
  uVar1 = param_2[0xe];
  param_1[6] = (uint)uVar6 & 0xfffffff;
  uVar2 = uVar1 * uVar8 + (uVar3 >> 0x1c);
  param_1[0xe] = (uint)uVar2 & 0xfffffff;
  uVar3 = param_2[7] * uVar8 + (uVar6 >> 0x1c);
  uVar1 = param_2[0xf];
  param_1[7] = (uint)uVar3 & 0xfffffff;
  uVar2 = uVar1 * uVar8 + (uVar2 >> 0x1c);
  uVar6 = uVar2 >> 0x1c;
  param_1[0xf] = (uint)uVar2 & 0xfffffff;
  uVar2 = (uVar3 >> 0x1c) + uVar4 + uVar6;
  param_1[8] = (uint)uVar2 & 0xfffffff;
  uVar6 = uVar6 + uVar5;
  param_1[9] = (int)(uVar2 >> 0x1c) + uVar7;
  *param_1 = (uint)uVar6 & 0xfffffff;
  param_1[1] = (int)(uVar6 >> 0x1c) + uVar9;
  return;
}



// FUNCTION 143dbea80 gf_sqr body=25 status=ok
// SIG undefined gf_sqr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void gf_sqr(undefined8 param_1,undefined8 param_2)

{
  gf_mul(param_1,param_2,param_2);
  return;
}



// FUNCTION 143dbeaa0 curve448_scalar_add body=887 status=ok
// SIG undefined curve448_scalar_add(void)

void curve448_scalar_add(uint *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*param_2 + (ulonglong)*param_3;
  *param_1 = (uint)uVar5;
  uVar3 = (ulonglong)param_2[1] + (ulonglong)param_3[1] + (uVar5 >> 0x20);
  param_1[1] = (uint)uVar3;
  uVar3 = (ulonglong)param_2[2] + (ulonglong)param_3[2] + (uVar3 >> 0x20);
  param_1[2] = (uint)uVar3;
  uVar3 = (ulonglong)param_2[3] + (ulonglong)param_3[3] + (uVar3 >> 0x20);
  param_1[3] = (uint)uVar3;
  uVar3 = (ulonglong)param_2[4] + (ulonglong)param_3[4] + (uVar3 >> 0x20);
  param_1[4] = (uint)uVar3;
  uVar3 = (ulonglong)param_2[5] + (ulonglong)param_3[5] + (uVar3 >> 0x20);
  param_1[5] = (uint)uVar3;
  uVar3 = (ulonglong)param_2[6] + (ulonglong)param_3[6] + (uVar3 >> 0x20);
  param_1[6] = (uint)uVar3;
  uVar3 = (ulonglong)param_2[7] + (ulonglong)param_3[7] + (uVar3 >> 0x20);
  param_1[7] = (uint)uVar3;
  uVar3 = (ulonglong)param_2[8] + (ulonglong)param_3[8] + (uVar3 >> 0x20);
  param_1[8] = (uint)uVar3;
  uVar3 = (ulonglong)param_2[9] + (ulonglong)param_3[9] + (uVar3 >> 0x20);
  param_1[9] = (uint)uVar3;
  uVar3 = (ulonglong)param_2[10] + (ulonglong)param_3[10] + (uVar3 >> 0x20);
  param_1[10] = (uint)uVar3;
  uVar3 = (ulonglong)param_2[0xb] + (ulonglong)param_3[0xb] + (uVar3 >> 0x20);
  param_1[0xb] = (uint)uVar3;
  uVar3 = (ulonglong)param_2[0xc] + (ulonglong)param_3[0xc] + (uVar3 >> 0x20);
  param_1[0xc] = (uint)uVar3;
  lVar4 = (ulonglong)param_2[0xd] + (ulonglong)param_3[0xd] + (uVar3 >> 0x20);
  param_1[0xd] = (uint)lVar4;
  lVar1 = (uVar5 & 0xffffffff) - 0xab5844f3;
  *param_1 = (uint)lVar1;
  lVar1 = ((ulonglong)param_1[1] - 0x2378c292) + (lVar1 >> 0x20);
  param_1[1] = (uint)lVar1;
  lVar1 = (lVar1 >> 0x20) + -0x8dc58f55 + (ulonglong)param_1[2];
  param_1[2] = (uint)lVar1;
  lVar1 = ((ulonglong)param_1[3] - 0x216cc272) + (lVar1 >> 0x20);
  param_1[3] = (uint)lVar1;
  lVar1 = (lVar1 >> 0x20) + -0xaed63690 + (ulonglong)param_1[4];
  param_1[4] = (uint)lVar1;
  lVar1 = (lVar1 >> 0x20) + -0xc44edb49 + (ulonglong)param_1[5];
  param_1[5] = (uint)lVar1;
  lVar1 = ((ulonglong)param_1[6] - 0x7cca23e9) + (lVar1 >> 0x20);
  param_1[6] = (uint)lVar1;
  lVar1 = (lVar1 >> 0x20) + -0xffffffff + (ulonglong)param_1[7];
  param_1[7] = (uint)lVar1;
  lVar1 = (lVar1 >> 0x20) + -0xffffffff + (ulonglong)param_1[8];
  param_1[8] = (uint)lVar1;
  lVar1 = (lVar1 >> 0x20) + -0xffffffff + (ulonglong)param_1[9];
  param_1[9] = (uint)lVar1;
  lVar1 = (lVar1 >> 0x20) + -0xffffffff + (ulonglong)param_1[10];
  param_1[10] = (uint)lVar1;
  lVar1 = (lVar1 >> 0x20) + -0xffffffff + (ulonglong)param_1[0xb];
  param_1[0xb] = (uint)lVar1;
  lVar1 = (lVar1 >> 0x20) + -0xffffffff + (ulonglong)param_1[0xc];
  param_1[0xc] = (uint)lVar1;
  lVar1 = ((ulonglong)param_1[0xd] - 0x3fffffff) + (lVar1 >> 0x20);
  param_1[0xd] = (uint)lVar1;
  uVar2 = (int)((ulonglong)lVar1 >> 0x20) + (int)((ulonglong)lVar4 >> 0x20);
  uVar5 = (ulonglong)uVar2;
  uVar3 = (ulonglong)*param_1 + ((ulonglong)uVar2 & 0xab5844f3);
  *param_1 = (uint)uVar3;
  uVar3 = (ulonglong)(uVar2 & 0x2378c292) + (uVar3 >> 0x20) + (ulonglong)param_1[1];
  param_1[1] = (uint)uVar3;
  uVar3 = (uVar5 & 0x8dc58f55) + (uVar3 >> 0x20) + (ulonglong)param_1[2];
  param_1[2] = (uint)uVar3;
  uVar3 = (ulonglong)(uVar2 & 0x216cc272) + (uVar3 >> 0x20) + (ulonglong)param_1[3];
  param_1[3] = (uint)uVar3;
  uVar3 = (uVar5 & 0xaed63690) + (uVar3 >> 0x20) + (ulonglong)param_1[4];
  param_1[4] = (uint)uVar3;
  uVar3 = (uVar3 >> 0x20) + (uVar5 & 0xc44edb49) + (ulonglong)param_1[5];
  param_1[5] = (uint)uVar3;
  uVar3 = (ulonglong)(uVar2 & 0x7cca23e9) + (uVar3 >> 0x20) + (ulonglong)param_1[6];
  param_1[6] = (uint)uVar3;
  uVar3 = (uVar3 >> 0x20) + uVar5 + (ulonglong)param_1[7];
  param_1[7] = (uint)uVar3;
  uVar3 = (uVar3 >> 0x20) + uVar5 + (ulonglong)param_1[8];
  param_1[8] = (uint)uVar3;
  lVar1 = (ulonglong)param_1[9] + uVar5 + (uVar3 >> 0x20);
  param_1[9] = (uint)lVar1;
  lVar1 = (ulonglong)param_1[10] + uVar5 + (lVar1 >> 0x20);
  param_1[10] = (uint)lVar1;
  lVar1 = (ulonglong)param_1[0xb] + uVar5 + (lVar1 >> 0x20);
  param_1[0xb] = (uint)lVar1;
  lVar1 = (ulonglong)param_1[0xc] + uVar5 + (lVar1 >> 0x20);
  param_1[0xc] = (uint)lVar1;
  param_1[0xd] = (uVar2 & 0x3fffffff) + (int)((ulonglong)lVar1 >> 0x20) + param_1[0xd];
  return;
}



// FUNCTION 143dbee20 curve448_scalar_decode_long body=467 status=ok
// SIG undefined curve448_scalar_decode_long(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void curve448_scalar_decode_long(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50 [7];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x143dbee35;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    lVar2 = ((param_3 - lVar4 >> 1) + lVar4 >> 5) * 0x38;
    lVar4 = lVar2 + -0x38;
    if (lVar2 - param_3 != 0) {
      lVar4 = lVar2;
    }
    scalar_decode_short(&local_88,lVar4 + param_2,param_3 - lVar4);
    if (param_3 == 0x38) {
      sc_montmul(param_1,&local_88,&DAT_145db72c0);
      sc_montmul(param_1,param_1,&DAT_145db7370);
      puVar3 = &local_88;
    }
    else {
      while (lVar4 != 0) {
        lVar4 = lVar4 + -0x38;
        sc_montmul(&local_88,&local_88,&DAT_145db7370);
        scalar_decode_short(local_50,lVar4 + param_2,0x38);
        sc_montmul(local_50,local_50,&DAT_145db72c0);
        sc_montmul(local_50,local_50,&DAT_145db7370);
        curve448_scalar_add(&local_88,&local_88,local_50);
      }
      *param_1 = local_88;
      param_1[1] = uStack_80;
      param_1[2] = local_78;
      param_1[3] = uStack_70;
      *(undefined4 *)(param_1 + 4) = local_68;
      *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
      *(undefined4 *)(param_1 + 5) = uStack_60;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
      param_1[6] = local_58;
      FUN_14004ff40(&local_88,0x38);
      puVar3 = local_50;
    }
    FUN_14004ff40(puVar3,0x38);
  }
  return;
}



// FUNCTION 143dbf000 curve448_scalar_destroy body=25 status=ok
// SIG undefined curve448_scalar_destroy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void curve448_scalar_destroy(undefined8 param_1)

{
  FUN_14004ff40(param_1,0x38);
  return;
}



// FUNCTION 143dbf020 curve448_scalar_encode body=82 status=ok
// SIG undefined curve448_scalar_encode(void)

void curve448_scalar_encode(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar3 = 0xe;
  do {
    iVar1 = (int)uVar2;
    *(undefined1 *)(uVar2 + param_1) = *(undefined1 *)param_2;
    *(char *)((ulonglong)(iVar1 + 1) + param_1) = (char)((uint)*param_2 >> 8);
    *(undefined1 *)((ulonglong)(iVar1 + 2) + param_1) = *(undefined1 *)((longlong)param_2 + 2);
    uVar2 = (ulonglong)(iVar1 + 4);
    *(undefined1 *)((ulonglong)(iVar1 + 3) + param_1) = *(undefined1 *)((longlong)param_2 + 3);
    lVar3 = lVar3 + -1;
    param_2 = param_2 + 1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 143dbf080 curve448_scalar_halve body=439 status=ok
// SIG undefined curve448_scalar_halve(void)

void curve448_scalar_halve(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = -(*param_2 & 1);
  uVar6 = (ulonglong)uVar3;
  uVar5 = ((ulonglong)uVar3 & 0xab5844f3) + (ulonglong)*param_2;
  *param_1 = (uint)uVar5;
  uVar5 = (ulonglong)param_2[1] + (ulonglong)(uVar3 & 0x2378c292) + (uVar5 >> 0x20);
  param_1[1] = (uint)uVar5;
  uVar5 = (ulonglong)param_2[2] + ((ulonglong)uVar3 & 0x8dc58f55) + (uVar5 >> 0x20);
  param_1[2] = (uint)uVar5;
  uVar5 = (ulonglong)param_2[3] + (ulonglong)(uVar3 & 0x216cc272) + (uVar5 >> 0x20);
  param_1[3] = (uint)uVar5;
  uVar5 = (ulonglong)param_2[4] + ((ulonglong)uVar3 & 0xaed63690) + (uVar5 >> 0x20);
  param_1[4] = (uint)uVar5;
  uVar5 = (ulonglong)param_2[5] + ((ulonglong)uVar3 & 0xc44edb49) + (uVar5 >> 0x20);
  param_1[5] = (uint)uVar5;
  uVar5 = (ulonglong)param_2[6] + (ulonglong)(uVar3 & 0x7cca23e9) + (uVar5 >> 0x20);
  param_1[6] = (uint)uVar5;
  uVar5 = (uVar5 >> 0x20) + param_2[7] + uVar6;
  param_1[7] = (uint)uVar5;
  uVar5 = (uVar5 >> 0x20) + param_2[8] + uVar6;
  param_1[8] = (uint)uVar5;
  uVar5 = (uVar5 >> 0x20) + param_2[9] + uVar6;
  param_1[9] = (uint)uVar5;
  uVar5 = (uVar5 >> 0x20) + param_2[10] + uVar6;
  param_1[10] = (uint)uVar5;
  uVar5 = (uVar5 >> 0x20) + param_2[0xb] + uVar6;
  param_1[0xb] = (uint)uVar5;
  puVar1 = param_1 + 0xc;
  uVar5 = (uVar5 >> 0x20) + param_2[0xc] + uVar6;
  *puVar1 = (uint)uVar5;
  uVar5 = (ulonglong)param_2[0xd] + (ulonglong)(uVar3 & 0x3fffffff) + (uVar5 >> 0x20);
  puVar2 = param_1 + 0xd;
  *puVar2 = (uint)uVar5;
  lVar4 = 3;
  do {
    *param_1 = param_1[1] << 0x1f | *param_1 >> 1;
    param_1[1] = param_1[2] << 0x1f | param_1[1] >> 1;
    param_1[2] = param_1[3] << 0x1f | param_1[2] >> 1;
    param_1[3] = param_1[4] << 0x1f | param_1[3] >> 1;
    lVar4 = lVar4 + -1;
    param_1 = param_1 + 4;
  } while (lVar4 != 0);
  *puVar1 = *puVar2 << 0x1f | *puVar1 >> 1;
  *puVar2 = (uint)((uVar5 >> 0x20) << 0x1f) | *puVar2 >> 1;
  return;
}



// FUNCTION 143dbf240 curve448_scalar_mul body=46 status=ok
// SIG undefined curve448_scalar_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void curve448_scalar_mul(undefined8 param_1)

{
  sc_montmul();
  sc_montmul(param_1,param_1,&DAT_145db7370);
  return;
}



// FUNCTION 143dbf270 curve448_scalar_sub body=38 status=ok
// SIG undefined curve448_scalar_sub(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void curve448_scalar_sub(void)

{
  sc_subx();
  return;
}



// FUNCTION 143dbf2a0 sc_montmul body=1229 status=ok
// SIG undefined sc_montmul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sc_montmul(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  uint *local_118;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_a0 = (ulonglong)*param_3;
  local_98 = (ulonglong)param_3[1];
  local_90 = (ulonglong)param_3[2];
  local_88 = (ulonglong)param_3[3];
  local_80 = (ulonglong)param_3[4];
  local_150 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_40 = 0;
  local_120 = 0;
  local_108 = (ulonglong)param_3[5];
  local_100 = (ulonglong)param_3[6];
  local_f8 = (ulonglong)param_3[7];
  local_f0 = (ulonglong)param_3[8];
  local_e8 = (ulonglong)param_3[9];
  local_e0 = (ulonglong)param_3[10];
  local_d8 = (ulonglong)param_3[0xb];
  local_d0 = (ulonglong)param_3[0xc];
  local_c8 = (ulonglong)param_3[0xd];
  local_b8 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_c0 = 0;
  local_110 = 0xe;
  do {
    uVar3 = (ulonglong)*param_2;
    uVar8 = local_a0 * uVar3 + (local_c0 & 0xffffffff);
    uVar7 = local_98 * uVar3 + (uVar8 >> 0x20) + (local_b8 & 0xffffffff);
    uVar17 = local_90 * uVar3 + (uVar7 >> 0x20) + (local_b0 & 0xffffffff);
    uVar14 = local_88 * uVar3 + (uVar17 >> 0x20) + (local_150 & 0xffffffff);
    uVar4 = local_80 * uVar3 + (uVar14 >> 0x20) + (local_a8 & 0xffffffff);
    uVar9 = local_108 * uVar3 + (uVar4 >> 0x20) + (local_168 & 0xffffffff);
    uVar5 = local_100 * uVar3 + (uVar9 >> 0x20) + (local_160 & 0xffffffff);
    uVar10 = local_f8 * uVar3 + (uVar5 >> 0x20) + (local_158 & 0xffffffff);
    uVar15 = local_f0 * uVar3 + (uVar10 >> 0x20) + (local_148 & 0xffffffff);
    uVar16 = local_e8 * uVar3 + (uVar15 >> 0x20) + (local_140 & 0xffffffff);
    uVar13 = local_e0 * uVar3 + (uVar16 >> 0x20) + (local_138 & 0xffffffff);
    uVar12 = local_d8 * uVar3 + (uVar13 >> 0x20) + (local_130 & 0xffffffff);
    uVar11 = local_d0 * uVar3 + (uVar12 >> 0x20) + (local_40 & 0xffffffff);
    uVar6 = local_c8 * uVar3 + (uVar11 >> 0x20) + (local_128 & 0xffffffff);
    uVar1 = (int)uVar8 * -0x516e743b;
    local_38 = (undefined4)(uVar6 >> 0x20);
    uVar3 = (ulonglong)uVar1;
    local_c0 = uVar3 * 0x2378c292 + ((ulonglong)uVar1 * 0xab5844f3 + (uVar8 & 0xffffffff) >> 0x20) +
               (uVar7 & 0xffffffff);
    local_b8 = uVar3 * 0x8dc58f55 + (local_c0 >> 0x20) + (uVar17 & 0xffffffff);
    local_70 = CONCAT44((int)local_b8,(int)local_c0);
    local_b0 = (local_b8 >> 0x20) + uVar3 * 0x216cc272 + (uVar14 & 0xffffffff);
    local_150 = (ulonglong)uVar1 * 0xaed63690 + (local_b0 >> 0x20) + (uVar4 & 0xffffffff);
    local_68 = CONCAT44((int)local_150,(int)local_b0);
    local_a8 = uVar3 * 0xc44edb49 + (local_150 >> 0x20) + (uVar9 & 0xffffffff);
    local_168 = uVar3 * 0x7cca23e9 + (local_a8 >> 0x20) + (uVar5 & 0xffffffff);
    local_60 = CONCAT44((int)local_168,(int)local_a8);
    lVar2 = (ulonglong)uVar1 * 0xffffffff;
    local_160 = (uVar10 & 0xffffffff) + (local_168 >> 0x20) + lVar2;
    local_158 = (uVar15 & 0xffffffff) + (local_160 >> 0x20) + lVar2;
    local_58 = CONCAT44((int)local_158,(int)local_160);
    local_148 = (uVar16 & 0xffffffff) + (local_158 >> 0x20) + lVar2;
    local_140 = (uVar13 & 0xffffffff) + (local_148 >> 0x20) + lVar2;
    local_50 = CONCAT44((int)local_140,(int)local_148);
    local_138 = (uVar12 & 0xffffffff) + (local_140 >> 0x20) + lVar2;
    local_130 = (uVar11 & 0xffffffff) + (local_138 >> 0x20) + lVar2;
    param_2 = param_2 + 1;
    uVar3 = uVar3 * 0x3fffffff + (local_130 >> 0x20) + (uVar6 & 0xffffffff);
    local_128 = (uVar3 >> 0x20) + local_120 + (uVar6 >> 0x20);
    local_48 = CONCAT44((int)local_130,(int)local_138);
    local_120 = local_128 >> 0x20;
    local_110 = local_110 + -1;
    local_40 = CONCAT44((int)local_128,(int)uVar3);
  } while (local_110 != 0);
  local_178 = (undefined4)(local_128 >> 0x20);
  local_118 = param_2;
  local_78 = param_1;
  sc_subx(param_1,&local_70,&DAT_145db7338,&DAT_145db7338);
  return;
}



// FUNCTION 143dbf770 sc_subx body=687 status=ok
// SIG undefined sc_subx(void)

void sc_subx(undefined4 *param_1,uint *param_2,uint *param_3,uint *param_4,int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)*param_2 - (ulonglong)*param_3;
  *param_1 = (int)uVar2;
  lVar3 = ((ulonglong)param_2[1] - (ulonglong)param_3[1]) + ((longlong)uVar2 >> 0x20);
  param_1[1] = (int)lVar3;
  lVar3 = ((ulonglong)param_2[2] - (ulonglong)param_3[2]) + (lVar3 >> 0x20);
  param_1[2] = (int)lVar3;
  lVar3 = ((ulonglong)param_2[3] - (ulonglong)param_3[3]) + (lVar3 >> 0x20);
  param_1[3] = (int)lVar3;
  lVar3 = ((ulonglong)param_2[4] - (ulonglong)param_3[4]) + (lVar3 >> 0x20);
  param_1[4] = (int)lVar3;
  lVar3 = ((ulonglong)param_2[5] - (ulonglong)param_3[5]) + (lVar3 >> 0x20);
  param_1[5] = (int)lVar3;
  lVar3 = ((ulonglong)param_2[6] - (ulonglong)param_3[6]) + (lVar3 >> 0x20);
  param_1[6] = (int)lVar3;
  lVar3 = ((ulonglong)param_2[7] - (ulonglong)param_3[7]) + (lVar3 >> 0x20);
  param_1[7] = (int)lVar3;
  lVar3 = ((ulonglong)param_2[8] - (ulonglong)param_3[8]) + (lVar3 >> 0x20);
  param_1[8] = (int)lVar3;
  lVar3 = ((ulonglong)param_2[9] - (ulonglong)param_3[9]) + (lVar3 >> 0x20);
  param_1[9] = (int)lVar3;
  lVar3 = ((ulonglong)param_2[10] - (ulonglong)param_3[10]) + (lVar3 >> 0x20);
  param_1[10] = (int)lVar3;
  lVar3 = ((ulonglong)param_2[0xb] - (ulonglong)param_3[0xb]) + (lVar3 >> 0x20);
  param_1[0xb] = (int)lVar3;
  lVar3 = ((ulonglong)param_2[0xc] - (ulonglong)param_3[0xc]) + (lVar3 >> 0x20);
  param_1[0xc] = (int)lVar3;
  lVar3 = ((ulonglong)param_2[0xd] - (ulonglong)param_3[0xd]) + (lVar3 >> 0x20);
  param_1[0xd] = (int)lVar3;
  uVar1 = (int)((ulonglong)lVar3 >> 0x20) + param_5;
  uVar2 = (ulonglong)(uVar1 & *param_4) + (uVar2 & 0xffffffff);
  *param_1 = (int)uVar2;
  uVar2 = (ulonglong)(param_4[1] & uVar1) + (uVar2 >> 0x20) + (ulonglong)(uint)param_1[1];
  param_1[1] = (int)uVar2;
  uVar2 = (uVar2 >> 0x20) + (ulonglong)(param_4[2] & uVar1) + (ulonglong)(uint)param_1[2];
  param_1[2] = (int)uVar2;
  uVar2 = (uVar2 >> 0x20) + (ulonglong)(param_4[3] & uVar1) + (ulonglong)(uint)param_1[3];
  param_1[3] = (int)uVar2;
  uVar2 = (uVar2 >> 0x20) + (ulonglong)(param_4[4] & uVar1) + (ulonglong)(uint)param_1[4];
  param_1[4] = (int)uVar2;
  uVar2 = (uVar2 >> 0x20) + (ulonglong)(param_4[5] & uVar1) + (ulonglong)(uint)param_1[5];
  param_1[5] = (int)uVar2;
  uVar2 = (uVar2 >> 0x20) + (ulonglong)(param_4[6] & uVar1) + (ulonglong)(uint)param_1[6];
  param_1[6] = (int)uVar2;
  uVar2 = (uVar2 >> 0x20) + (ulonglong)(param_4[7] & uVar1) + (ulonglong)(uint)param_1[7];
  param_1[7] = (int)uVar2;
  uVar2 = (uVar2 >> 0x20) + (ulonglong)(param_4[8] & uVar1) + (ulonglong)(uint)param_1[8];
  param_1[8] = (int)uVar2;
  uVar2 = (uVar2 >> 0x20) + (ulonglong)(param_4[9] & uVar1) + (ulonglong)(uint)param_1[9];
  param_1[9] = (int)uVar2;
  uVar2 = (uVar2 >> 0x20) + (ulonglong)(param_4[10] & uVar1) + (ulonglong)(uint)param_1[10];
  param_1[10] = (int)uVar2;
  uVar2 = (uVar2 >> 0x20) + (ulonglong)(param_4[0xb] & uVar1) + (ulonglong)(uint)param_1[0xb];
  param_1[0xb] = (int)uVar2;
  lVar3 = (uVar2 >> 0x20) + (ulonglong)(param_4[0xc] & uVar1) + (ulonglong)(uint)param_1[0xc];
  param_1[0xc] = (int)lVar3;
  param_1[0xd] = (param_4[0xd] & uVar1) + (int)((ulonglong)lVar3 >> 0x20) + param_1[0xd];
  return;
}



// FUNCTION 143dbfa20 scalar_decode_short body=582 status=ok
// SIG undefined scalar_decode_short(void)

void scalar_decode_short(uint *param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  uVar2 = uVar5;
  uVar4 = uVar5;
  uVar7 = uVar5;
  do {
    uVar6 = (uint)uVar7;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar7 = (ulonglong)uVar6;
  } while (uVar4 < 0x20);
  *param_1 = uVar6;
  uVar4 = uVar5;
  uVar7 = uVar5;
  do {
    uVar6 = (uint)uVar7;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar7 = (ulonglong)uVar6;
  } while (uVar4 < 0x20);
  param_1[1] = uVar6;
  uVar4 = uVar5;
  uVar7 = uVar5;
  do {
    uVar6 = (uint)uVar7;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar7 = (ulonglong)uVar6;
  } while (uVar4 < 0x20);
  param_1[2] = uVar6;
  uVar4 = uVar5;
  uVar7 = uVar5;
  do {
    uVar6 = (uint)uVar7;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar7 = (ulonglong)uVar6;
  } while (uVar4 < 0x20);
  param_1[3] = uVar6;
  uVar4 = uVar5;
  uVar7 = uVar5;
  do {
    uVar6 = (uint)uVar7;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar7 = (ulonglong)uVar6;
  } while (uVar4 < 0x20);
  param_1[4] = uVar6;
  uVar4 = uVar5;
  uVar7 = uVar5;
  do {
    uVar6 = (uint)uVar7;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar7 = (ulonglong)uVar6;
  } while (uVar4 < 0x20);
  param_1[5] = uVar6;
  uVar4 = uVar5;
  uVar7 = uVar5;
  do {
    uVar6 = (uint)uVar7;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar7 = (ulonglong)uVar6;
  } while (uVar4 < 0x20);
  param_1[6] = uVar6;
  uVar4 = uVar5;
  uVar7 = uVar5;
  do {
    uVar6 = (uint)uVar7;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar7 = (ulonglong)uVar6;
  } while (uVar4 < 0x20);
  param_1[7] = uVar6;
  uVar4 = uVar5;
  uVar7 = uVar5;
  do {
    uVar6 = (uint)uVar7;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar7 = (ulonglong)uVar6;
  } while (uVar4 < 0x20);
  param_1[8] = uVar6;
  uVar4 = uVar5;
  uVar7 = uVar5;
  do {
    uVar6 = (uint)uVar7;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar7 = (ulonglong)uVar6;
  } while (uVar4 < 0x20);
  param_1[9] = uVar6;
  uVar4 = uVar5;
  uVar7 = uVar5;
  do {
    uVar6 = (uint)uVar7;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar7 = (ulonglong)uVar6;
  } while (uVar4 < 0x20);
  param_1[10] = uVar6;
  uVar4 = uVar5;
  uVar7 = uVar5;
  do {
    uVar6 = (uint)uVar7;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar7 = (ulonglong)uVar6;
  } while (uVar4 < 0x20);
  param_1[0xb] = uVar6;
  uVar4 = uVar5;
  uVar7 = uVar5;
  do {
    uVar6 = (uint)uVar7;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar4;
    uVar4 = uVar4 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar7 = (ulonglong)uVar6;
  } while (uVar4 < 0x20);
  param_1[0xc] = uVar6;
  uVar4 = uVar5;
  do {
    uVar6 = (uint)uVar4;
    if (param_3 <= uVar2) break;
    pbVar1 = (byte *)(uVar2 + param_2);
    uVar2 = uVar2 + 1;
    bVar3 = (byte)uVar5;
    uVar5 = uVar5 + 8;
    uVar6 = uVar6 | (uint)*pbVar1 << (bVar3 & 0x1f);
    uVar4 = (ulonglong)uVar6;
  } while (uVar5 < 0x20);
  param_1[0xd] = uVar6;
  return;
}



// FUNCTION 143dbfc70 BN_GF2m_add body=221 status=ok
// SIG undefined BN_GF2m_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_GF2m_add(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar4 = param_2;
  if ((int)param_3[1] <= (int)param_2[1]) {
    plVar4 = param_3;
    param_3 = param_2;
  }
  lVar2 = bn_wexpand(param_1,(int)param_3[1]);
  if (lVar2 != 0) {
    iVar1 = 0;
    if (0 < (int)plVar4[1]) {
      lVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        *(ulonglong *)(lVar2 + *param_1) =
             *(ulonglong *)(lVar2 + *plVar4) ^ *(ulonglong *)(lVar2 + *param_3);
        lVar2 = lVar2 + 8;
      } while (iVar1 < (int)plVar4[1]);
    }
    iVar3 = (int)param_3[1];
    if (iVar1 < iVar3) {
      lVar2 = (longlong)iVar1 * 8;
      do {
        iVar1 = iVar1 + 1;
        *(undefined8 *)(lVar2 + *param_1) = *(undefined8 *)(lVar2 + *param_3);
        iVar3 = (int)param_3[1];
        lVar2 = lVar2 + 8;
      } while (iVar1 < iVar3);
    }
    *(int *)(param_1 + 1) = iVar3;
    bn_correct_top(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 143dbfd50 BN_GF2m_mod_arr body=603 status=ok
// SIG undefined BN_GF2m_mod_arr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BN_GF2m_mod_arr(longlong *param_1,longlong *param_2,uint *param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar9 = *param_3;
  if (uVar9 == 0) {
    BN_set_word(param_1,0);
    return 1;
  }
  uVar13 = 0;
  if (param_2 != param_1) {
    lVar3 = bn_wexpand(param_1,(int)param_2[1]);
    if (lVar3 == 0) {
      return 0;
    }
    iVar8 = (int)param_2[1];
    uVar10 = uVar13;
    uVar4 = uVar13;
    if (0 < iVar8) {
      do {
        uVar9 = (int)uVar4 + 1;
        *(undefined8 *)(uVar10 + *param_1) = *(undefined8 *)(uVar10 + *param_2);
        iVar8 = (int)param_2[1];
        uVar10 = uVar10 + 8;
        uVar4 = (ulonglong)uVar9;
      } while ((int)uVar9 < iVar8);
    }
    *(int *)(param_1 + 1) = iVar8;
    uVar9 = *param_3;
  }
  puVar2 = (ulonglong *)*param_1;
  iVar8 = (int)param_1[1] + -1;
  lVar7 = (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x3fU)) >> 6);
  lVar3 = (longlong)iVar8;
  while (lVar7 < lVar3) {
    uVar10 = puVar2[lVar3];
    if (uVar10 == 0) {
      iVar8 = iVar8 + -1;
      lVar3 = lVar3 + -1;
    }
    else {
      puVar2[lVar3] = 0;
      lVar12 = 1;
      uVar9 = param_3[1];
      while (uVar9 != 0) {
        uVar9 = *param_3 - uVar9;
        uVar6 = uVar9 & 0x8000003f;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xffffffc0) + 1;
        }
        lVar11 = (longlong)(iVar8 - ((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x3fU)) >> 6));
        puVar2[lVar11] = puVar2[lVar11] ^ uVar10 >> ((byte)uVar6 & 0x3f);
        if (uVar6 != 0) {
          puVar2[lVar11 + -1] = puVar2[lVar11 + -1] ^ uVar10 << (0x40 - (byte)uVar6 & 0x3f);
        }
        lVar11 = lVar12 + 1;
        lVar12 = lVar12 + 1;
        uVar9 = param_3[lVar11];
      }
      uVar9 = *param_3 & 0x8000003f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
      }
      puVar1 = puVar2 + (lVar3 - lVar7);
      *puVar1 = *puVar1 ^ uVar10 >> ((byte)uVar9 & 0x3f);
      if (uVar9 != 0) {
        puVar1[-1] = puVar1[-1] ^ uVar10 << (0x40 - (byte)uVar9 & 0x3f);
      }
    }
  }
  if (iVar8 == lVar7) {
    while( true ) {
      uVar9 = *param_3 & 0x8000003f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffc0) + 1;
      }
      uVar10 = puVar2[lVar7] >> ((byte)uVar9 & 0x3f);
      if (uVar10 == 0) break;
      bVar5 = 0x40 - (byte)uVar9;
      uVar4 = uVar13;
      if (uVar9 != 0) {
        uVar4 = (puVar2[lVar7] << (bVar5 & 0x3f)) >> (bVar5 & 0x3f);
      }
      puVar2[lVar7] = uVar4;
      lVar3 = 1;
      *puVar2 = *puVar2 ^ uVar10;
      uVar9 = param_3[1];
      while (uVar9 != 0) {
        uVar6 = (int)uVar9 >> 0x1f & 0x3f;
        uVar9 = uVar9 + uVar6;
        iVar8 = (uVar9 & 0x3f) - uVar6;
        lVar12 = (longlong)((int)uVar9 >> 6);
        bVar5 = (byte)iVar8;
        puVar2[lVar12] = puVar2[lVar12] ^ uVar10 << (bVar5 & 0x3f);
        if ((iVar8 != 0) && (uVar4 = uVar10 >> (0x40 - bVar5 & 0x3f), uVar4 != 0)) {
          puVar2[lVar12 + 1] = puVar2[lVar12 + 1] ^ uVar4;
        }
        lVar12 = lVar3 + 1;
        lVar3 = lVar3 + 1;
        uVar9 = param_3[lVar12];
      }
    }
  }
  bn_correct_top(param_1);
  return 1;
}



// FUNCTION 143dbffb0 BN_GF2m_mod_div body=176 status=ok
// SIG undefined BN_GF2m_mod_div(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_GF2m_mod_div(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143dbffd4;
  BN_CTX_start(param_5);
  lVar2 = BN_CTX_get(param_5);
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = BN_GF2m_mod_inv(lVar2,param_3,param_4,param_5);
    uVar3 = 0;
    if (iVar1 != 0) {
      iVar1 = BN_GF2m_mod_mul(param_1,param_2,lVar2,param_4,param_5,uVar4);
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = 1;
      }
    }
  }
  BN_CTX_end(param_5);
  return uVar3;
}



// FUNCTION 143dc0060 BN_GF2m_mod_exp_arr body=333 status=ok
// SIG undefined BN_GF2m_mod_exp_arr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BN_GF2m_mod_exp_arr(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                             undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  iVar1 = BN_is_zero(param_3);
  if (iVar1 != 0) {
    uVar3 = BN_set_word(param_1,1);
    return uVar3;
  }
  iVar1 = BN_abs_is_word(param_3,1);
  if (iVar1 == 0) {
    BN_CTX_start(param_5);
    lVar4 = BN_CTX_get(param_5);
    uVar5 = uVar3;
    if ((lVar4 != 0) && (iVar1 = BN_GF2m_mod_arr(lVar4,param_2,param_4), iVar1 != 0)) {
      iVar1 = BN_num_bits(param_3);
      for (iVar1 = iVar1 + -2; -1 < iVar1; iVar1 = iVar1 + -1) {
        iVar2 = BN_GF2m_mod_sqr_arr(lVar4,lVar4,param_4,param_5);
        uVar5 = uVar3;
        if ((iVar2 == 0) ||
           ((iVar2 = BN_is_bit_set(param_3,iVar1), iVar2 != 0 &&
            (iVar2 = BN_GF2m_mod_mul_arr(lVar4,lVar4,param_2,param_4,param_5), uVar5 = 0, iVar2 == 0
            )))) goto LAB_143dc0186;
      }
      lVar4 = BN_copy(param_1,lVar4);
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar5 = 1;
      }
    }
LAB_143dc0186:
    BN_CTX_end(param_5);
  }
  else {
    lVar4 = BN_copy(param_1,param_2);
    uVar5 = (ulonglong)(lVar4 != 0);
  }
  return uVar5;
}



// FUNCTION 143dc01b0 BN_GF2m_mod_inv body=227 status=ok
// SIG undefined BN_GF2m_mod_inv(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_GF2m_mod_inv(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  BN_CTX_start(param_4);
  lVar2 = BN_CTX_get(param_4);
  uVar4 = 0;
  if (lVar2 != 0) {
    do {
      iVar1 = BN_num_bits(param_3);
      iVar1 = BN_priv_rand(lVar2,iVar1 + -1,0xffffffff);
      uVar4 = uVar3;
      if (iVar1 == 0) goto LAB_143dc0270;
      iVar1 = BN_is_zero(lVar2);
    } while (iVar1 != 0);
    iVar1 = BN_GF2m_mod_mul(param_1,param_2,lVar2,param_3,param_4);
    if (iVar1 != 0) {
      iVar1 = BN_GF2m_mod_inv_vartime(param_1,param_1,param_3,param_4);
      if (iVar1 != 0) {
        iVar1 = BN_GF2m_mod_mul(param_1,param_1,lVar2,param_3,param_4);
        uVar4 = 0;
        if (iVar1 != 0) {
          uVar4 = 1;
        }
      }
    }
  }
LAB_143dc0270:
  BN_CTX_end(param_4);
  return uVar4;
}



// FUNCTION 143dc02a0 BN_GF2m_mod_inv_vartime body=1262 status=ok
// SIG undefined BN_GF2m_mod_inv_vartime(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong BN_GF2m_mod_inv_vartime
                    (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_b8;
  int local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  ulonglong *local_98;
  ulonglong *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  ulonglong local_58;
  undefined8 uStack_48;
  ulonglong uVar17;
  
  uStack_48 = 0x143dc02b7;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar17 = 0;
  uVar16 = 0;
  local_80 = param_1;
  local_78 = param_4;
  BN_CTX_start(param_4);
  local_a0 = (undefined8 *)BN_CTX_get(param_4);
  local_b8 = (undefined8 *)BN_CTX_get(param_4);
  puVar8 = (undefined8 *)BN_CTX_get(param_4);
  local_88 = puVar8;
  puVar9 = (undefined8 *)BN_CTX_get(param_4);
  local_a8 = puVar9;
  if (puVar9 != (undefined8 *)0x0) {
    iVar5 = BN_GF2m_poly2arr(param_3,local_70,6);
    if ((iVar5 == 0) || (6 < iVar5)) {
      local_c8 = 0x18e;
      ERR_put_error(3,0x83,0x6a,"crypto\\bn\\bn_gf2m.c");
      uVar17 = uVar16;
    }
    else {
      iVar5 = BN_GF2m_mod_arr(puVar8,param_2,local_70);
      if (((iVar5 != 0) && (iVar5 = BN_is_zero(puVar8), iVar5 == 0)) &&
         (lVar10 = BN_copy(puVar9,param_3), uVar17 = uVar16, lVar10 != 0)) {
        iVar5 = BN_num_bits(puVar8);
        iVar6 = BN_num_bits(puVar9);
        uVar3 = *(uint *)(param_3 + 1);
        lVar23 = (longlong)(int)uVar3;
        local_b0 = iVar6;
        lVar10 = bn_wexpand(puVar8,uVar3);
        if (lVar10 != 0) {
          lVar10 = (longlong)*(int *)(puVar8 + 1);
          puVar15 = (ulonglong *)*puVar8;
          if (lVar10 < lVar23) {
            puVar18 = puVar15 + lVar10;
            for (lVar14 = lVar23 - lVar10; lVar14 != 0; lVar14 = lVar14 + -1) {
              *puVar18 = 0;
              puVar18 = puVar18 + 1;
            }
          }
          *(uint *)(puVar8 + 1) = uVar3;
          lVar10 = bn_wexpand(local_a0,uVar3);
          if (lVar10 != 0) {
            puVar18 = (ulonglong *)*local_a0;
            *puVar18 = 1;
            if (1 < (int)uVar3) {
              puVar12 = puVar18;
              for (lVar10 = (longlong)(int)(uVar3 - 1); puVar12 = puVar12 + 1, lVar10 != 0;
                  lVar10 = lVar10 + -1) {
                *puVar12 = 0;
              }
            }
            *(uint *)(local_a0 + 1) = uVar3;
            lVar10 = bn_wexpand(local_b8,uVar3);
            if (lVar10 != 0) {
              local_98 = (ulonglong *)*local_b8;
              lVar10 = lVar23;
              puVar12 = local_98;
              if (0 < (int)uVar3) {
                for (; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar12 = 0;
                  puVar12 = puVar12 + 1;
                }
              }
              *(uint *)(local_b8 + 1) = uVar3;
              local_90 = (ulonglong *)*local_a8;
              puVar12 = local_90;
joined_r0x000143dc0462:
              for (; puVar9 = local_a8, puVar8 = local_b8, iVar7 = iVar6, iVar5 != 0;
                  iVar5 = iVar5 + -1) {
                uVar17 = *puVar15;
                puVar12 = local_90;
                iVar7 = local_b0;
                if ((uVar17 & 1) != 0) break;
                uVar21 = -(ulonglong)((uint)*puVar18 & 1);
                iVar6 = uVar3 - 1;
                uVar16 = *puVar18 ^ *(ulonglong *)*param_3 & uVar21;
                lVar10 = 0;
                if (0 < iVar6) {
                  lVar22 = (longlong)puVar15 - (longlong)puVar18;
                  puVar20 = puVar18 + 1;
                  lVar14 = (longlong)iVar6;
                  do {
                    puVar4 = puVar20 + 1;
                    uVar19 = uVar17 >> 1;
                    uVar11 = uVar16 >> 1;
                    uVar17 = *(ulonglong *)(lVar22 + -8 + (longlong)puVar4);
                    *(ulonglong *)(lVar22 + -0x10 + (longlong)puVar4) =
                         *(longlong *)(lVar22 + (longlong)puVar20) << 0x3f | uVar19;
                    uVar16 = *(ulonglong *)((longlong)puVar20 + (*param_3 - (longlong)puVar18)) &
                             uVar21 ^ *puVar20;
                    puVar20[-1] = uVar16 << 0x3f | uVar11;
                    lVar14 = lVar14 + -1;
                    puVar20 = puVar4;
                    lVar10 = (longlong)iVar6;
                  } while (lVar14 != 0);
                }
                puVar15[lVar10] = uVar17 >> 1;
                puVar18[lVar10] = uVar16 >> 1;
                iVar6 = local_b0;
              }
              uVar17 = 0;
              if (iVar5 < 0x41) {
                if (*puVar15 == 0) goto LAB_143dc075e;
                if (*puVar15 == 1) goto LAB_143dc0718;
              }
              puVar20 = puVar12;
              iVar6 = iVar7;
              if (iVar5 < iVar7) {
                puVar20 = (ulonglong *)*local_88;
                puVar4 = (ulonglong *)*local_a0;
                local_a8 = local_88;
                local_b8 = local_a0;
                puVar15 = puVar12;
                puVar18 = local_98;
                local_b0 = iVar5;
                local_a0 = puVar8;
                local_98 = puVar4;
                local_90 = puVar20;
                local_88 = puVar9;
                iVar6 = iVar5;
                iVar5 = iVar7;
              }
              uVar21 = 0;
              uVar16 = uVar17;
              if ((0 < (int)uVar3) && (uVar16 = uVar21, 1 < uVar3)) {
                iVar7 = uVar3 - 1;
                puVar12 = puVar18 + iVar7;
                if (((((local_98 + iVar7 < puVar18) || (puVar12 < local_98)) &&
                     ((puVar4 = puVar15 + iVar7, puVar4 < puVar18 || (puVar12 < puVar15)))) &&
                    ((puVar20 + iVar7 < puVar18 || (puVar12 < puVar20)))) &&
                   (((local_98 + iVar7 < puVar15 || (puVar4 < local_98)) &&
                    ((puVar20 + iVar7 < puVar15 || (puVar4 < puVar20)))))) {
                  uVar13 = uVar3 & 0x80000001;
                  if ((int)uVar13 < 0) {
                    uVar13 = (uVar13 - 1 | 0xfffffffe) + 1;
                  }
                  puVar12 = puVar15;
                  uVar16 = uVar17;
                  do {
                    uVar16 = uVar16 + 2;
                    puVar1 = (ulonglong *)
                             (((longlong)puVar20 - (longlong)puVar15) + (longlong)puVar12);
                    uVar11 = puVar1[1];
                    puVar4 = puVar12 + 2;
                    puVar2 = (ulonglong *)
                             ((longlong)puVar18 + (-0x10 - (longlong)puVar15) + (longlong)puVar4);
                    uVar17 = *puVar2;
                    uVar21 = puVar2[1];
                    *puVar12 = *puVar1 ^ *puVar12;
                    puVar12[1] = uVar11 ^ puVar12[1];
                    puVar12 = (ulonglong *)
                              ((longlong)local_98 + (-0x10 - (longlong)puVar15) + (longlong)puVar4);
                    uVar11 = puVar12[1];
                    puVar1 = (ulonglong *)
                             ((longlong)puVar18 + (-0x10 - (longlong)puVar15) + (longlong)puVar4);
                    *puVar1 = *puVar12 ^ uVar17;
                    puVar1[1] = uVar11 ^ uVar21;
                    puVar12 = puVar4;
                  } while ((longlong)uVar16 < (longlong)(int)(uVar3 - uVar13));
                }
              }
              if ((longlong)uVar16 < lVar23) {
                puVar12 = puVar15 + uVar16;
                lVar10 = lVar23 - uVar16;
                do {
                  *puVar12 = *puVar12 ^
                             *(ulonglong *)
                              ((longlong)puVar12 + ((longlong)puVar20 - (longlong)puVar15));
                  puVar4 = (ulonglong *)
                           ((longlong)puVar12 + ((longlong)puVar18 - (longlong)puVar15));
                  *puVar4 = *puVar4 ^ *(ulonglong *)
                                       ((longlong)puVar12 + ((longlong)local_98 - (longlong)puVar15)
                                       );
                  puVar12 = puVar12 + 1;
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
              }
              puVar12 = puVar20;
              if (iVar5 == iVar6) {
                uVar13 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x3fU)) >> 6;
                uVar16 = (ulonglong)(int)uVar13;
                uVar17 = puVar15[uVar16];
                uVar21 = uVar16;
                for (; (uVar17 == 0 && (uVar13 = (uint)uVar21, uVar16 != 0)); uVar16 = uVar16 - 1) {
                  uVar17 = puVar15[uVar16 - 1];
                  uVar13 = uVar13 - 1;
                  uVar21 = (ulonglong)uVar13;
                }
                iVar5 = BN_num_bits_word();
                iVar5 = uVar13 * 0x40 + iVar5;
                puVar12 = local_90;
              }
              goto joined_r0x000143dc0462;
            }
          }
        }
      }
    }
  }
LAB_143dc075e:
  BN_CTX_end(local_78);
  return uVar17;
LAB_143dc0718:
  bn_correct_top(local_a0);
  lVar10 = BN_copy(local_80,local_a0);
  uVar17 = (ulonglong)(lVar10 != 0);
  goto LAB_143dc075e;
}



// FUNCTION 143dc0790 BN_GF2m_mod_mul body=240 status=ok
// SIG undefined BN_GF2m_mod_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BN_GF2m_mod_mul(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar5 = 0x143dc07b4;
  iVar2 = 0;
  iVar1 = BN_num_bits(param_4);
  iVar1 = iVar1 + 1;
  lVar3 = CRYPTO_malloc((longlong)iVar1 << 2,"crypto\\bn\\bn_gf2m.c",0x1da);
  if (lVar3 != 0) {
    iVar2 = BN_GF2m_poly2arr(param_4,lVar3,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      ERR_put_error(3,0x85,0x6a,"crypto\\bn\\bn_gf2m.c",CONCAT44(uVar4,0x1de),uVar5);
    }
    else {
      iVar2 = BN_GF2m_mod_mul_arr(param_1,param_2,param_3,lVar3,param_5);
    }
  }
  CRYPTO_free(lVar3,"crypto\\bn\\bn_gf2m.c",0x1e4);
  return iVar2;
}



// FUNCTION 143dc0880 BN_GF2m_mod_mul_arr body=719 status=ok
// SIG undefined BN_GF2m_mod_mul_arr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong BN_GF2m_mod_mul_arr(undefined8 param_1,longlong *param_2,longlong *param_3,
                             undefined8 param_4,undefined8 param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uint local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar5 = 0;
  local_90 = param_5;
  local_b0 = param_3;
  local_88 = param_4;
  local_80 = param_1;
  if (param_2 == param_3) {
    uVar5 = BN_GF2m_mod_sqr_arr(param_1,param_2,param_4,param_5);
  }
  else {
    BN_CTX_start(param_5);
    plVar6 = (longlong *)BN_CTX_get(param_5);
    if (plVar6 != (longlong *)0x0) {
      uVar10 = (int)param_3[1] + (int)param_2[1] + 4;
      lVar7 = bn_wexpand(plVar6,uVar10);
      if (lVar7 != 0) {
        *(uint *)(plVar6 + 1) = uVar10;
        uVar13 = 0;
        if ((0 < (int)uVar10) && (1 < uVar10)) {
          plVar11 = (longlong *)*plVar6;
          param_3 = local_b0;
          if ((plVar6 < plVar11) || (uVar13 = 0, plVar11 + (int)(uVar10 - 1) < plVar6)) {
            uVar3 = uVar10 & 0x80000001;
            if ((int)uVar3 < 0) {
              uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
            }
            uVar8 = uVar5;
            do {
              uVar13 = (int)uVar8 + 2;
              uVar8 = (ulonglong)uVar13;
            } while ((int)uVar13 < (int)(uVar10 - uVar3));
            for (lVar7 = ((longlong)((int)((uVar10 - uVar3) + 1) / 2) & 0xfffffffffffffffU) << 1;
                lVar7 != 0; lVar7 = lVar7 + -1) {
              *plVar11 = 0;
              plVar11 = plVar11 + 1;
            }
          }
        }
        for (lVar7 = (longlong)(int)uVar13; lVar7 < (int)uVar10; lVar7 = lVar7 + 1) {
          *(undefined8 *)(*plVar6 + lVar7 * 8) = 0;
        }
        iVar4 = (int)param_3[1];
        local_b8 = 0;
        if (0 < iVar4) {
          local_a0 = 0x10;
          lVar7 = -8;
          lVar14 = -0x10;
          uVar8 = uVar5;
          do {
            local_98 = *(undefined8 *)(*param_3 + -0x10 + local_a0);
            if ((int)uVar8 + 1 == iVar4) {
              local_a8 = 0;
            }
            else {
              local_a8 = *(undefined8 *)(*param_3 + -8 + local_a0);
            }
            uVar2 = local_a8;
            iVar4 = (int)param_2[1];
            uVar8 = uVar5;
            lVar12 = local_a0;
            if (0 < iVar4) {
              do {
                uVar9 = uVar5;
                if ((int)uVar8 + 1 != iVar4) {
                  uVar9 = *(ulonglong *)(lVar12 + *param_2 + lVar7);
                }
                local_c8 = local_98;
                FUN_1400ca750(&local_78,uVar9,*(undefined8 *)(lVar12 + *param_2 + lVar14),uVar2);
                uVar10 = (int)uVar8 + 2;
                puVar1 = (ulonglong *)(*plVar6 + -0x10 + lVar12);
                *puVar1 = *puVar1 ^ local_78;
                puVar1 = (ulonglong *)(*plVar6 + -8 + lVar12);
                *puVar1 = *puVar1 ^ local_70;
                *(ulonglong *)(*plVar6 + lVar12) = *(ulonglong *)(*plVar6 + lVar12) ^ local_68;
                puVar1 = (ulonglong *)(*plVar6 + 8 + lVar12);
                *puVar1 = *puVar1 ^ local_60;
                iVar4 = (int)param_2[1];
                uVar8 = (ulonglong)uVar10;
                param_3 = local_b0;
                lVar12 = lVar12 + 0x10;
              } while ((int)uVar10 < iVar4);
            }
            local_a0 = local_a0 + 0x10;
            iVar4 = (int)param_3[1];
            local_b8 = local_b8 + 2;
            uVar8 = (ulonglong)local_b8;
            lVar7 = lVar7 + -0x10;
            lVar14 = lVar14 + -0x10;
            param_5 = local_90;
          } while ((int)local_b8 < iVar4);
        }
        bn_correct_top(plVar6);
        iVar4 = BN_GF2m_mod_arr(local_80,plVar6,local_88);
        if (iVar4 != 0) {
          uVar5 = 1;
        }
      }
    }
    BN_CTX_end(param_5);
  }
  return uVar5;
}



// FUNCTION 143dc0b50 BN_GF2m_mod_solve_quad_arr body=889 status=ok
// SIG undefined BN_GF2m_mod_solve_quad_arr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool BN_GF2m_mod_solve_quad_arr
               (undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  bool bVar11;
  int local_res18;
  undefined8 in_stack_ffffffffffffffa8;
  
  local_res18 = 0;
  if (*(int *)param_3 == 0) {
    BN_set_word(param_1,0);
    return true;
  }
  BN_CTX_start(param_4);
  uVar3 = BN_CTX_get(param_4);
  uVar4 = BN_CTX_get(param_4);
  lVar5 = BN_CTX_get(param_4);
  if ((lVar5 != 0) && (iVar1 = BN_GF2m_mod_arr(uVar3,param_2,param_3), iVar1 != 0)) {
    iVar1 = BN_is_zero(uVar3);
    if (iVar1 != 0) {
      BN_set_word(param_1,0);
      bVar11 = true;
      goto LAB_143dc0e1b;
    }
    if ((*param_3 & 1) == 0) {
      uVar7 = BN_CTX_get(param_4);
      uVar8 = BN_CTX_get(param_4);
      lVar6 = BN_CTX_get(param_4);
      if (lVar6 != 0) {
        do {
          iVar2 = 1;
          iVar1 = BN_priv_rand(uVar7,*(undefined4 *)param_3,0,0);
          if ((iVar1 == 0) || (iVar1 = BN_GF2m_mod_arr(uVar7,uVar7), iVar1 == 0))
          goto LAB_143dc0e18;
          BN_set_word(uVar4,0);
          lVar9 = BN_copy(lVar5,uVar7);
          if (lVar9 == 0) goto LAB_143dc0e18;
          if (0 < *(int *)param_3 + -1) {
            do {
              iVar1 = BN_GF2m_mod_sqr_arr(uVar4,uVar4,param_3,param_4);
              if ((((iVar1 == 0) ||
                   (iVar1 = BN_GF2m_mod_sqr_arr(uVar8,lVar5,param_3,param_4), iVar1 == 0)) ||
                  (in_stack_ffffffffffffffa8 = param_4,
                  iVar1 = BN_GF2m_mod_mul_arr(lVar6,uVar8,uVar3,param_3,param_4), iVar1 == 0)) ||
                 ((iVar1 = BN_GF2m_add(uVar4,uVar4,lVar6), iVar1 == 0 ||
                  (iVar1 = BN_GF2m_add(lVar5,uVar8), iVar1 == 0)))) goto LAB_143dc0e18;
              iVar2 = iVar2 + 1;
            } while (iVar2 <= *(int *)param_3 + -1);
          }
          local_res18 = local_res18 + 1;
          iVar1 = BN_is_zero(lVar5);
          uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
        } while ((iVar1 != 0) && (local_res18 < 0x32));
        iVar1 = BN_is_zero(lVar5);
        if (iVar1 == 0) goto LAB_143dc0e52;
        uVar3 = CONCAT44(uVar10,0x420);
        uVar10 = 0x71;
LAB_143dc0e13:
        ERR_put_error(3,0x87,uVar10,"crypto\\bn\\bn_gf2m.c",uVar3);
      }
    }
    else {
      lVar6 = BN_copy(uVar4,uVar3);
      uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
      if (lVar6 != 0) {
        iVar1 = 1;
        if (0 < (*(int *)param_3 + -1) / 2) {
          do {
            iVar2 = BN_GF2m_mod_sqr_arr(uVar4,uVar4,param_3,param_4);
            if ((iVar2 == 0) ||
               (iVar2 = BN_GF2m_mod_sqr_arr(uVar4,uVar4,param_3,param_4), iVar2 == 0))
            goto LAB_143dc0e18;
            iVar2 = BN_GF2m_add(uVar4,uVar4,uVar3);
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
            if (iVar2 == 0) goto LAB_143dc0e18;
            iVar1 = iVar1 + 1;
          } while (iVar1 <= (*(int *)param_3 + -1) / 2);
        }
LAB_143dc0e52:
        iVar1 = BN_GF2m_mod_sqr_arr(lVar5,uVar4,param_3,param_4);
        if ((iVar1 != 0) && (iVar1 = BN_GF2m_add(lVar5,uVar4,lVar5), iVar1 != 0)) {
          iVar1 = BN_ucmp(lVar5,uVar3);
          if (iVar1 == 0) {
            lVar5 = BN_copy(param_1,uVar4);
            bVar11 = lVar5 != 0;
            goto LAB_143dc0e1b;
          }
          uVar3 = CONCAT44(uVar10,0x42a);
          uVar10 = 0x74;
          goto LAB_143dc0e13;
        }
      }
    }
  }
LAB_143dc0e18:
  bVar11 = false;
LAB_143dc0e1b:
  BN_CTX_end(param_4);
  return bVar11;
}



// FUNCTION 143dc0ed0 BN_GF2m_mod_sqr_arr body=1682 status=ok
// SIG undefined BN_GF2m_mod_sqr_arr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_GF2m_mod_sqr_arr(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  BN_CTX_start(param_4);
  plVar4 = (longlong *)BN_CTX_get(param_4);
  uVar6 = 0;
  if (plVar4 != (longlong *)0x0) {
    lVar5 = bn_wexpand(plVar4,(int)param_2[1] * 2);
    uVar6 = 0;
    if (lVar5 != 0) {
      iVar3 = (int)param_2[1];
      lVar5 = (longlong)(iVar3 + -1);
      if (-1 < iVar3 + -1) {
        lVar7 = lVar5 << 4;
        do {
          uVar1 = *(ulonglong *)(*param_2 + lVar5 * 8);
          *(ulonglong *)(*plVar4 + 8 + lVar7) =
               (((((((((((((((((((((((((((((((uVar1 >> 1 & 0x80000000 | uVar1 & 0x200000000) >> 1 |
                                            uVar1 & 0x400000000) >> 1 | uVar1 & 0x800000000) >> 1 |
                                          uVar1 & 0x1000000000) >> 1 | uVar1 & 0x2000000000) >> 1 |
                                        uVar1 & 0x4000000000) >> 1 | uVar1 & 0x8000000000) >> 1 |
                                      uVar1 & 0x10000000000) >> 1 | uVar1 & 0x20000000000) >> 1 |
                                    uVar1 & 0x40000000000) >> 1 | uVar1 & 0x80000000000) >> 1 |
                                  uVar1 & 0x100000000000) >> 1 | uVar1 & 0x200000000000) >> 1 |
                                uVar1 & 0x400000000000) >> 1 | uVar1 & 0x800000000000) >> 1 |
                              uVar1 & 0x1000000000000) >> 1 | uVar1 & 0x2000000000000) >> 1 |
                            uVar1 & 0x4000000000000) >> 1 | uVar1 & 0x8000000000000) >> 1 |
                          uVar1 & 0x10000000000000) >> 1 | uVar1 & 0x20000000000000) >> 1 |
                        uVar1 & 0x40000000000000) >> 1 | uVar1 & 0x80000000000000) >> 1 |
                      uVar1 & 0x100000000000000) >> 1 | uVar1 & 0x200000000000000) >> 1 |
                    uVar1 & 0x400000000000000) >> 1 | uVar1 & 0x800000000000000) >> 1 |
                  uVar1 & 0x1000000000000000) >> 1 | uVar1 & 0x2000000000000000) >> 1 |
                uVar1 & 0x4000000000000000) >> 1 | uVar1 & 0x8000000000000001) >> 1;
          uVar1 = *(ulonglong *)(*param_2 + lVar5 * 8);
          uVar2 = (uint)uVar1;
          lVar5 = lVar5 + -1;
          *(ulonglong *)(lVar7 + *plVar4) =
               (((((((((((((((((((((((((((((((uVar1 & 0x80000000) * 2 |
                                            (ulonglong)(uVar2 & 0x40000000)) * 2 |
                                           (ulonglong)(uVar2 & 0x20000000)) * 2 |
                                          (ulonglong)(uVar2 & 0x10000000)) * 2 |
                                         (ulonglong)(uVar2 & 0x8000000)) * 2 |
                                        (ulonglong)(uVar2 & 0x4000000)) * 2 |
                                       (ulonglong)(uVar2 & 0x2000000)) * 2 |
                                      (ulonglong)(uVar2 & 0x1000000)) * 2 |
                                     (ulonglong)(uVar2 & 0x800000)) * 2 |
                                    (ulonglong)(uVar2 & 0x400000)) * 2 |
                                   (ulonglong)(uVar2 & 0x200000)) * 2 |
                                  (ulonglong)(uVar2 & 0x100000)) * 2 | (ulonglong)(uVar2 & 0x80000))
                                 * 2 | (ulonglong)(uVar2 & 0x40000)) * 2 |
                               (ulonglong)(uVar2 & 0x20000)) * 2 | (ulonglong)(uVar2 & 0x10000)) * 2
                             | (ulonglong)(uVar2 & 0x8000)) * 2 | (ulonglong)(uVar2 & 0x4000)) * 2 |
                           (ulonglong)(uVar2 & 0x2000)) * 2 | (ulonglong)(uVar2 & 0x1000)) * 2 |
                         (ulonglong)(uVar2 & 0x800)) * 2 | (ulonglong)(uVar2 & 0x400)) * 2 |
                       (ulonglong)(uVar2 & 0x200)) * 2 | (ulonglong)(uVar2 & 0x100)) * 2 |
                     (ulonglong)(uVar2 & 0x80)) * 2 | (ulonglong)(uVar2 & 0x40)) * 2 |
                   (ulonglong)(uVar2 & 0x20)) * 2 | (ulonglong)(uVar2 & 0x10)) * 2 |
                 (ulonglong)(uVar2 & 8)) * 2 | (ulonglong)(uVar2 & 4)) * 2 | (ulonglong)(uVar2 & 2))
               * 2 | (ulonglong)(uVar2 & 1);
          lVar7 = lVar7 + -0x10;
        } while (-1 < lVar5);
        iVar3 = (int)param_2[1];
      }
      *(int *)(plVar4 + 1) = iVar3 * 2;
      bn_correct_top(plVar4);
      iVar3 = BN_GF2m_mod_arr(param_1,plVar4,param_3);
      uVar6 = 0;
      if (iVar3 != 0) {
        uVar6 = 1;
      }
    }
  }
  BN_CTX_end(param_4);
  return uVar6;
}



// FUNCTION 143dc1570 BN_GF2m_mod_sqrt_arr body=164 status=ok
// SIG undefined BN_GF2m_mod_sqrt_arr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
BN_GF2m_mod_sqrt_arr(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (*param_3 == 0) {
    BN_set_word(param_1,0);
    uVar2 = 1;
  }
  else {
    BN_CTX_start(param_4);
    lVar3 = BN_CTX_get(param_4);
    uVar2 = 0;
    if (lVar3 != 0) {
      iVar1 = BN_set_bit(lVar3,*param_3 + -1);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = BN_GF2m_mod_exp_arr(param_1,param_2,lVar3,param_3,param_4);
      }
    }
    BN_CTX_end(param_4);
  }
  return uVar2;
}



// FUNCTION 143dc1620 BN_GF2m_poly2arr body=718 status=ok
// SIG undefined BN_GF2m_poly2arr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BN_GF2m_poly2arr(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar4 = 0;
  iVar1 = BN_is_zero();
  if (iVar1 == 0) {
    iVar1 = (int)param_1[1] + -1;
    if (-1 < iVar1) {
      iVar7 = iVar1 * 0x40 + -2;
      lVar6 = (longlong)iVar1 * 8;
      do {
        if (*(longlong *)(lVar6 + *param_1) != 0) {
          uVar3 = 0x8000000000000000;
          iVar5 = 0x3f;
          do {
            lVar2 = *param_1;
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + 2 + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 1) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + 1 + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 2) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar7 + iVar5;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 3) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + -1 + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 4) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + -2 + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 5) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + -3 + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 6) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + -4 + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 7) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + -5 + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 8) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + -6 + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 9) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + -7 + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 10) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + -8 + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 0xb) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + -9 + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 0xc) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + -10 + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 0xd) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + -0xb + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 0xe) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + -0xc + iVar7;
                lVar2 = *param_1;
              }
              iVar4 = iVar4 + 1;
            }
            if ((*(ulonglong *)(lVar2 + lVar6) & uVar3 >> 0xf) != 0) {
              if (iVar4 < param_3) {
                *(int *)(param_2 + (longlong)iVar4 * 4) = iVar5 + -0xd + iVar7;
              }
              iVar4 = iVar4 + 1;
            }
            uVar3 = uVar3 >> 0x10;
            iVar5 = iVar5 + -0x10;
          } while (-1 < iVar5);
        }
        iVar7 = iVar7 + -0x40;
        lVar6 = lVar6 + -8;
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
    }
    if (iVar4 < param_3) {
      lVar6 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(param_2 + lVar6 * 4) = 0xffffffff;
    }
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}



// FUNCTION 143dc18f0 BN_kronecker body=645 status=ok
// SIG undefined BN_kronecker(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint BN_kronecker(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  
  uVar11 = 0xfffffffe;
  uVar12 = 0;
  uVar8 = 0;
  BN_CTX_start(param_3);
  puVar4 = (undefined8 *)BN_CTX_get(param_3);
  puVar5 = (undefined8 *)BN_CTX_get(param_3);
  uVar13 = uVar8;
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = BN_copy(puVar4,param_1);
    uVar13 = (uint)(lVar6 == 0);
    if (lVar6 != 0) {
      lVar6 = BN_copy(puVar5,param_2);
      uVar13 = (uint)(lVar6 == 0);
      if (lVar6 != 0) {
        iVar3 = BN_is_zero(puVar5);
        if (iVar3 == 0) {
          iVar3 = BN_is_odd(puVar4);
          if ((iVar3 != 0) || (iVar3 = BN_is_odd(puVar5), uVar11 = uVar8, iVar3 != 0)) {
            iVar3 = BN_is_bit_set(puVar5,0);
            uVar7 = uVar12;
            while (iVar3 == 0) {
              uVar8 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar8;
              iVar3 = BN_is_bit_set(puVar5,uVar7);
            }
            iVar3 = BN_rshift(puVar5,puVar5,uVar8);
            bVar14 = iVar3 == 0;
            uVar13 = (uint)bVar14;
            uVar11 = 0xfffffffe;
            if (iVar3 != 0) {
              if ((uVar8 & 1) == 0) {
                uVar8 = 1;
              }
              else if (*(int *)(puVar4 + 1) == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(uint *)(&DAT_145dbc848 + (ulonglong)((uint)*(undefined8 *)*puVar4 & 7) * 4
                                 );
              }
              if ((*(int *)(puVar5 + 2) != 0) &&
                 (*(undefined4 *)(puVar5 + 2) = 0, *(int *)(puVar4 + 2) != 0)) {
                uVar8 = -uVar8;
              }
              iVar3 = BN_is_zero(puVar4);
              while (puVar1 = puVar4, iVar3 == 0) {
                uVar9 = 0;
                iVar3 = BN_is_bit_set(puVar1,0);
                uVar7 = uVar12;
                uVar10 = uVar9;
                while (iVar3 == 0) {
                  uVar10 = (int)uVar7 + 1;
                  uVar7 = (ulonglong)uVar10;
                  iVar3 = BN_is_bit_set(puVar1,uVar7);
                }
                iVar3 = BN_rshift(puVar1,puVar1,uVar10);
                uVar13 = (uint)(iVar3 == 0);
                uVar11 = uVar8;
                if (iVar3 == 0) goto LAB_143dc1b43;
                if ((uVar10 & 1) != 0) {
                  if (*(int *)(puVar5 + 1) != 0) {
                    uVar9 = (uint)*(undefined8 *)*puVar5;
                  }
                  uVar8 = uVar8 * *(int *)(&DAT_145dbc848 + (ulonglong)(uVar9 & 7) * 4);
                }
                if (*(int *)(puVar1 + 2) == 0) {
                  uVar7 = uVar12;
                  if (*(int *)(puVar1 + 1) != 0) {
                    uVar7 = *(ulonglong *)*puVar1;
                  }
                }
                else if (*(int *)(puVar1 + 1) == 0) {
                  uVar7 = 0xffffffffffffffff;
                }
                else {
                  uVar7 = ~*(ulonglong *)*puVar1;
                }
                if (*(int *)(puVar5 + 1) == 0) {
                  bVar2 = 0;
                }
                else {
                  bVar2 = (byte)*(undefined8 *)*puVar5;
                }
                uVar11 = -uVar8;
                if ((bVar2 & (byte)uVar7 & 2) == 0) {
                  uVar11 = uVar8;
                }
                iVar3 = BN_nnmod(puVar5,puVar5,puVar1,param_3);
                bVar14 = iVar3 == 0;
                uVar13 = (uint)bVar14;
                if (iVar3 == 0) goto LAB_143dc1b43;
                *(undefined4 *)(puVar1 + 2) = 0;
                iVar3 = BN_is_zero(puVar5);
                puVar4 = puVar5;
                puVar5 = puVar1;
                uVar8 = uVar11;
              }
              uVar13 = (uint)bVar14;
              iVar3 = BN_is_one(puVar5);
              uVar11 = 0;
              if (iVar3 != 0) {
                uVar11 = uVar8;
              }
            }
          }
        }
        else {
          uVar11 = BN_abs_is_word(puVar4,1);
        }
      }
    }
  }
LAB_143dc1b43:
  BN_CTX_end(param_3);
  if (uVar13 != 0) {
    uVar11 = 0xfffffffe;
  }
  return uVar11;
}



// FUNCTION 143dc1b80 BN_mod_sqrt body=1931 status=ok
// SIG undefined BN_mod_sqrt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

longlong BN_mod_sqrt(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  undefined8 in_stack_ffffffffffffffa8;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  iVar1 = BN_is_odd(param_3);
  lVar7 = param_1;
  if ((iVar1 == 0) || (iVar1 = BN_abs_is_word(param_3,1), iVar1 != 0)) {
    iVar1 = BN_abs_is_word(param_3,2);
    if (iVar1 == 0) {
      ERR_put_error(3,0x79,0x70,"crypto\\bn\\bn_sqrt.c",CONCAT44(uVar3,0x29));
      return 0;
    }
    if ((param_1 != 0) || (lVar7 = BN_new(), lVar7 != 0)) {
      iVar1 = BN_is_bit_set(param_2,0);
      iVar1 = BN_set_word(lVar7,(longlong)iVar1);
joined_r0x000143dc22ba:
      if (iVar1 == 0) {
        if (lVar7 != param_1) {
          BN_free(lVar7);
        }
        return 0;
      }
      return lVar7;
    }
  }
  else {
    iVar1 = BN_is_zero(param_2);
    if ((iVar1 == 0) && (iVar1 = BN_is_one(param_2), iVar1 == 0)) {
      BN_CTX_start(param_4);
      uVar5 = BN_CTX_get(param_4);
      uVar6 = BN_CTX_get(param_4);
      lVar7 = BN_CTX_get(param_4);
      uVar8 = BN_CTX_get(param_4);
      uVar9 = BN_CTX_get(param_4);
      lVar10 = BN_CTX_get(param_4);
      if ((lVar10 != 0) && ((lVar11 = param_1, param_1 != 0 || (lVar11 = BN_new(), lVar11 != 0)))) {
        iVar1 = BN_nnmod(uVar5,param_2,param_3,param_4);
        if (iVar1 == 0) goto LAB_143dc221d;
        iVar1 = 1;
        iVar2 = BN_is_bit_set(param_3,1);
        if (iVar2 == 0) {
          do {
            iVar1 = iVar1 + 1;
            iVar2 = BN_is_bit_set(param_3,iVar1);
          } while (iVar2 == 0);
          if (iVar1 == 1) goto LAB_143dc217d;
          if (iVar1 != 2) {
            lVar12 = BN_copy(lVar7,param_3);
            if (lVar12 == 0) goto LAB_143dc221d;
            *(undefined4 *)(lVar7 + 0x10) = 0;
            iVar2 = 2;
            do {
              if (iVar2 < 0x16) {
LAB_143dc1e5c:
                iVar4 = BN_set_word(lVar10,(longlong)iVar2);
                if (iVar4 == 0) goto LAB_143dc221d;
              }
              else {
                uVar3 = BN_num_bits(param_3);
                iVar4 = BN_priv_rand(lVar10,uVar3,0,0);
                if (iVar4 == 0) goto LAB_143dc221d;
                iVar4 = BN_ucmp(lVar10,param_3);
                if (-1 < iVar4) {
                  pcVar13 = BN_sub;
                  if (*(int *)(param_3 + 0x10) != 0) {
                    pcVar13 = BN_add;
                  }
                  iVar4 = (*pcVar13)(lVar10,lVar10,param_3);
                  if (iVar4 == 0) goto LAB_143dc221d;
                }
                iVar4 = BN_is_zero(lVar10);
                if (iVar4 != 0) goto LAB_143dc1e5c;
              }
              iVar4 = BN_kronecker(lVar10,lVar7);
              if (iVar4 < -1) goto LAB_143dc221d;
              if (iVar4 == 0) {
                uVar5 = 199;
                uVar3 = 0x70;
                goto LAB_143dc2209;
              }
              if (iVar4 != 1) {
                if (iVar4 != -1) {
                  uVar5 = 0xd3;
                  uVar3 = 0x71;
                  goto LAB_143dc2209;
                }
                iVar2 = BN_rshift(lVar7,lVar7,iVar1);
                if ((iVar2 == 0) ||
                   (iVar2 = BN_mod_exp(lVar10,lVar10,lVar7,param_3,param_4), iVar2 == 0))
                goto LAB_143dc221d;
                iVar2 = BN_is_one(lVar10);
                if (iVar2 != 0) {
                  uVar5 = 0xe2;
                  uVar3 = 0x70;
                  goto LAB_143dc2209;
                }
                iVar2 = BN_rshift1(uVar8,lVar7);
                if (iVar2 == 0) goto LAB_143dc221d;
                iVar2 = BN_is_zero(uVar8);
                if (iVar2 == 0) {
                  iVar2 = BN_mod_exp(uVar9,uVar5,uVar8,param_3,param_4);
                  if (iVar2 == 0) goto LAB_143dc221d;
                  iVar2 = BN_is_zero(uVar9);
                  if (iVar2 != 0) goto LAB_143dc1f60;
                }
                else {
                  iVar2 = BN_nnmod(uVar8,uVar5,param_3,param_4);
                  if (iVar2 == 0) goto LAB_143dc221d;
                  iVar2 = BN_is_zero(uVar8);
                  if (iVar2 != 0) {
LAB_143dc1f60:
                    BN_set_word(lVar11,0);
                    BN_CTX_end(param_4);
                    return lVar11;
                  }
                  iVar2 = BN_set_word(uVar9,1);
                  if (iVar2 == 0) goto LAB_143dc221d;
                }
                iVar2 = BN_mod_sqr(uVar6,uVar9,param_3,param_4);
                if (((iVar2 == 0) ||
                    (iVar2 = BN_mod_mul(uVar6,uVar6,uVar5,param_3,param_4), iVar2 == 0)) ||
                   (iVar2 = BN_mod_mul(uVar9,uVar9,uVar5,param_3,param_4), iVar2 == 0))
                goto LAB_143dc221d;
                iVar2 = BN_is_one(uVar6);
                goto joined_r0x000143dc202a;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < 0x52);
            uVar5 = 0xd3;
            uVar3 = 0x71;
            goto LAB_143dc2209;
          }
          iVar1 = BN_mod_lshift1_quick(uVar8,uVar5,param_3);
          if ((iVar1 != 0) && (iVar1 = BN_rshift(lVar7,param_3,3), iVar1 != 0)) {
            *(undefined4 *)(lVar7 + 0x10) = 0;
            iVar1 = BN_mod_exp(uVar6,uVar8,lVar7,param_3,param_4);
            if (((iVar1 != 0) &&
                ((((iVar1 = BN_mod_sqr(lVar10,uVar6,param_3,param_4), iVar1 != 0 &&
                   (iVar1 = BN_mod_mul(uVar8,uVar8,lVar10,param_3,param_4), iVar1 != 0)) &&
                  (iVar1 = BN_sub_word(uVar8,1), iVar1 != 0)) &&
                 ((iVar1 = BN_mod_mul(uVar9,uVar5,uVar6,param_3,param_4), iVar1 != 0 &&
                  (iVar1 = BN_mod_mul(uVar9,uVar9,uVar8,param_3,param_4), iVar1 != 0)))))) &&
               (lVar7 = BN_copy(lVar11,uVar9), lVar7 != 0)) goto LAB_143dc21d3;
          }
        }
        else {
LAB_143dc217d:
          iVar1 = BN_rshift(lVar7,param_3,2);
          if (iVar1 != 0) {
            *(undefined4 *)(lVar7 + 0x10) = 0;
            iVar1 = BN_add_word(lVar7,1);
            if ((iVar1 != 0) && (iVar1 = BN_mod_exp(lVar11,uVar5,lVar7,param_3,param_4), iVar1 != 0)
               ) goto LAB_143dc21d3;
          }
        }
        goto LAB_143dc221d;
      }
    }
    else if ((param_1 != 0) || (lVar7 = BN_new(), lVar7 != 0)) {
      iVar1 = BN_is_one(param_2);
      iVar1 = BN_set_word(lVar7,(longlong)iVar1);
      goto joined_r0x000143dc22ba;
    }
  }
LAB_143dc2293:
  lVar11 = 0;
LAB_143dc2296:
  BN_CTX_end(param_4);
  return lVar11;
joined_r0x000143dc202a:
  if (iVar2 != 0) goto LAB_143dc2142;
  iVar4 = 1;
  iVar2 = BN_mod_sqr(uVar8,uVar6,param_3,param_4);
  if (iVar2 == 0) goto LAB_143dc221d;
  iVar2 = BN_is_one(uVar8);
  while (iVar2 == 0) {
    iVar4 = iVar4 + 1;
    if (iVar4 == iVar1) {
      uVar5 = 0x136;
      goto LAB_143dc2203;
    }
    iVar2 = BN_mod_mul(uVar8,uVar8,uVar8,param_3,param_4);
    if (iVar2 == 0) goto LAB_143dc221d;
    iVar2 = BN_is_one(uVar8);
  }
  lVar7 = BN_copy(uVar8,lVar10);
  if (lVar7 == 0) goto LAB_143dc221d;
  iVar1 = iVar1 - iVar4;
  while (iVar1 = iVar1 + -1, 0 < iVar1) {
    iVar2 = BN_mod_sqr(uVar8,uVar8,param_3,param_4);
    if (iVar2 == 0) goto LAB_143dc221d;
  }
  iVar1 = BN_mod_mul(lVar10,uVar8,uVar8,param_3,param_4);
  if (((iVar1 == 0) || (iVar1 = BN_mod_mul(uVar9,uVar9,uVar8,param_3,param_4), iVar1 == 0)) ||
     (iVar1 = BN_mod_mul(uVar6,uVar6,lVar10,param_3,param_4), iVar1 == 0)) goto LAB_143dc221d;
  iVar2 = BN_is_one(uVar6);
  iVar1 = iVar4;
  goto joined_r0x000143dc202a;
LAB_143dc2142:
  lVar7 = BN_copy(lVar11,uVar9);
  if (lVar7 == 0) goto LAB_143dc221d;
LAB_143dc21d3:
  iVar1 = BN_mod_sqr(uVar9,lVar11,param_3,param_4);
  if (iVar1 != 0) {
    iVar1 = BN_cmp(uVar9,uVar5);
    if (iVar1 == 0) goto LAB_143dc2296;
    uVar5 = 0x158;
LAB_143dc2203:
    uVar3 = 0x6f;
LAB_143dc2209:
    ERR_put_error(3,0x79,uVar3,"crypto\\bn\\bn_sqrt.c",uVar5);
  }
LAB_143dc221d:
  if (lVar11 != param_1) {
    BN_clear_free(lVar11);
    BN_CTX_end(param_4);
    return 0;
  }
  goto LAB_143dc2293;
}



// FUNCTION 143dc23a0 BIO_s_mem body=8 status=ok
// SIG undefined BIO_s_mem(void)

undefined * BIO_s_mem(void)

{
  return &DAT_145dbc880;
}



// FUNCTION 143dc23b0 md_write body=223 status=ok
// SIG undefined md_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int md_write(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = 0;
  if ((param_2 != 0) && (0 < param_3)) {
    lVar3 = UNiagaraSystem::GetEffectType();
    lVar4 = BIO_next(param_1);
    if ((lVar3 != 0) && (lVar4 != 0)) {
      iVar1 = BIO_write(lVar4,param_2,param_3);
    }
    iVar2 = TMeshAttributeArraySet<int>::GetNumIndices(param_1);
    if (((iVar2 == 0) || (iVar1 < 1)) || (iVar2 = EVP_DigestUpdate(lVar3,param_2,iVar1), iVar2 != 0)
       ) {
      if (lVar4 != 0) {
        BIO_clear_flags(param_1,0xf);
        BIO_copy_next_retry(param_1);
      }
    }
    else {
      BIO_clear_flags(param_1,0xf);
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}



// FUNCTION 143dc2490 md_read body=174 status=ok
// SIG undefined md_read(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int md_read(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar3 = UNiagaraSystem::GetEffectType();
    lVar4 = BIO_next(param_1);
    if ((lVar3 != 0) && (lVar4 != 0)) {
      iVar1 = BIO_read(lVar4,param_2,param_3);
      iVar2 = TMeshAttributeArraySet<int>::GetNumIndices(param_1);
      if ((iVar2 != 0) &&
         ((0 < iVar1 && (iVar2 = EVP_DigestUpdate(lVar3,param_2,iVar1), iVar2 < 1)))) {
        return -1;
      }
      BIO_clear_flags(param_1,0xf);
      BIO_copy_next_retry(param_1);
      return iVar1;
    }
  }
  return 0;
}



// FUNCTION 143dc2540 md_gets body=94 status=ok
// SIG undefined md_gets(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 md_gets(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined4 local_res18 [4];
  
  plVar2 = (longlong *)UNiagaraSystem::GetEffectType();
  if (param_3 < *(int *)(*plVar2 + 8)) {
    return 0;
  }
  iVar1 = EVP_DigestFinal_ex(plVar2,param_2,local_res18);
  if (iVar1 < 1) {
    local_res18[0] = 0xffffffff;
  }
  return local_res18[0];
}



// FUNCTION 143dc25a0 FUN_143dc25a0 body=376 status=ok
// SIG undefined FUN_143dc25a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143dc25a0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4
                       )

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar1 = 1;
  puVar3 = (undefined8 *)UNiagaraSystem::GetEffectType();
  uVar4 = BIO_next(param_1);
  switch(param_2) {
  case 1:
    iVar2 = TMeshAttributeArraySet<int>::GetNumIndices(param_1);
    if (iVar2 == 0) goto LAB_143dc2676;
    uVar1 = EVP_DigestInit_ex(puVar3,*puVar3,0);
    if ((int)uVar1 < 1) break;
  default:
    uVar1 = BIO_ctrl(uVar4,param_2,param_3,param_4);
    break;
  case 0xc:
    uVar4 = UNiagaraSystem::GetEffectType(param_4);
    uVar5 = EVP_MD_CTX_copy_ex(uVar4,puVar3);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    goto LAB_143dc267d;
  case 0x65:
    BIO_clear_flags(param_1,0xf);
    uVar1 = BIO_ctrl(uVar4,param_2,param_3,param_4);
    BIO_copy_next_retry(param_1);
    break;
  case 0x6f:
    uVar1 = EVP_DigestInit_ex(puVar3,param_4,0);
    if (0 < (int)uVar1) {
      CAkMatrixAwareCtx::SetRegisteredNotif(param_1,1);
    }
    break;
  case 0x70:
    iVar2 = TMeshAttributeArraySet<int>::GetNumIndices(param_1);
    if (iVar2 != 0) {
      *param_4 = *puVar3;
      break;
    }
    goto LAB_143dc2676;
  case 0x78:
    *param_4 = puVar3;
LAB_143dc267d:
    CAkMatrixAwareCtx::SetRegisteredNotif(param_1,1);
    break;
  case 0x94:
    iVar2 = TMeshAttributeArraySet<int>::GetNumIndices(param_1);
    if (iVar2 != 0) {
      FMemFileIn::seekg(param_1,param_4);
      uVar1 = 1;
      break;
    }
LAB_143dc2676:
    uVar1 = 0;
  }
  return (ulonglong)uVar1;
}



// FUNCTION 143dc27d0 md_new body=86 status=ok
// SIG undefined md_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 md_new(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = EVP_MD_CTX_new();
  if (lVar1 == 0) {
    return 0;
  }
  CAkMatrixAwareCtx::SetRegisteredNotif(param_1,1);
  FMemFileIn::seekg(param_1,lVar1);
  return 1;
}



// FUNCTION 143dc2830 md_free body=75 status=ok
// SIG undefined md_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 md_free(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = UNiagaraSystem::GetEffectType();
  EVP_MD_CTX_free(uVar1);
  FMemFileIn::seekg(param_1,0);
  CAkMatrixAwareCtx::SetRegisteredNotif(param_1,0);
  return 1;
}



// FUNCTION 143dc2880 BIO_f_md body=8 status=ok
// SIG undefined BIO_f_md(void)

undefined * BIO_f_md(void)

{
  return &DAT_145dbc8e0;
}



// FUNCTION 143dc2890 enc_write body=404 status=ok
// SIG undefined enc_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int enc_write(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)UNiagaraSystem::GetEffectType();
  lVar3 = BIO_next(param_1);
  if ((piVar2 != (int *)0x0) && (lVar3 != 0)) {
    BIO_clear_flags(param_1,0xf);
    iVar4 = piVar2[1];
    for (iVar5 = *piVar2 - iVar4; 0 < iVar5; iVar5 = iVar5 - iVar1) {
      iVar1 = BIO_write(lVar3,(longlong)piVar2 + (longlong)iVar4 + 0x30,iVar5);
      if (iVar1 < 1) {
        BIO_copy_next_retry(param_1);
        return iVar1;
      }
      piVar2[1] = piVar2[1] + iVar1;
      iVar4 = piVar2[1];
    }
    if ((param_2 != 0) && (0 < param_3)) {
      piVar2[1] = 0;
      iVar4 = param_3;
      while( true ) {
        iVar5 = iVar4;
        if (0x1000 < iVar4) {
          iVar5 = 0x1000;
        }
        iVar1 = EVP_CipherUpdate(*(undefined8 *)(piVar2 + 6),piVar2 + 0xc,piVar2,param_2,iVar5);
        if (iVar1 == 0) break;
        iVar4 = iVar4 - iVar5;
        iVar1 = *piVar2;
        param_2 = param_2 + iVar5;
        piVar2[1] = 0;
        if (0 < iVar1) {
          iVar5 = 0;
          do {
            iVar5 = BIO_write(lVar3,(longlong)piVar2 + (longlong)iVar5 + 0x30,iVar1);
            if (iVar5 < 1) {
              BIO_copy_next_retry(param_1);
              if (param_3 != iVar4) {
                iVar5 = param_3 - iVar4;
              }
              return iVar5;
            }
            piVar2[1] = piVar2[1] + iVar5;
            iVar1 = iVar1 - iVar5;
            iVar5 = piVar2[1];
          } while (0 < iVar1);
        }
        piVar2[0] = 0;
        piVar2[1] = 0;
        if (iVar4 < 1) {
          BIO_copy_next_retry(param_1);
          return param_3;
        }
      }
      BIO_clear_flags(param_1,0xf);
      piVar2[4] = 0;
    }
  }
  return 0;
}



// FUNCTION 143dc2a30 enc_read body=684 status=ok
// SIG undefined enc_read(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong enc_read(undefined8 param_1,void *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int local_res20 [2];
  
  uVar11 = 0;
  if (param_2 != (void *)0x0) {
    puVar6 = (uint *)UNiagaraSystem::GetEffectType();
    lVar7 = BIO_next(param_1);
    if ((puVar6 != (uint *)0x0) && (lVar7 != 0)) {
      if (0 < (int)*puVar6) {
        uVar10 = *puVar6 - puVar6[1];
        if ((int)param_3 < (int)uVar10) {
          uVar10 = param_3;
        }
        uVar11 = (ulonglong)uVar10;
        _guard_xfg_dispatch_icall_nop
                  (param_2,(void *)((longlong)(int)puVar6[1] + 0x30 + (longlong)puVar6),
                   (longlong)(int)uVar10);
        puVar6[1] = puVar6[1] + uVar10;
        param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar10);
        param_3 = param_3 - uVar10;
        if (*puVar6 == puVar6[1]) {
          puVar6[0] = 0;
          puVar6[1] = 0;
        }
      }
      iVar2 = EVP_CIPHER_CTX_block_size(*(undefined8 *)(puVar6 + 6));
      if (iVar2 == 1) {
        iVar2 = 0;
      }
      if (0 < (int)param_3) {
        while (0 < (int)puVar6[2]) {
          if (*(longlong *)(puVar6 + 8) == *(longlong *)(puVar6 + 10)) {
            puVar1 = puVar6 + 0x54;
            *(uint **)(puVar6 + 8) = puVar1;
            *(uint **)(puVar6 + 10) = puVar1;
            iVar3 = BIO_read(lVar7,puVar1,0x1000);
            uVar9 = (ulonglong)iVar3;
            if (0 < iVar3) {
              *(ulonglong *)(puVar6 + 10) = *(longlong *)(puVar6 + 10) + uVar9;
              goto LAB_143dc2b4a;
            }
LAB_143dc2b4e:
            iVar3 = BIO_test_flags(lVar7,8);
            if (iVar3 != 0) {
              if ((int)uVar11 == 0) {
                uVar11 = uVar9 & 0xffffffff;
              }
              break;
            }
            puVar6[2] = (uint)uVar9;
            uVar4 = EVP_CipherFinal_ex(*(undefined8 *)(puVar6 + 6),puVar6 + 0xc,puVar6);
            uVar10 = *puVar6;
            puVar6[4] = uVar4;
            puVar6[1] = 0;
LAB_143dc2c23:
            if ((int)param_3 < (int)uVar10) {
              uVar10 = param_3;
            }
            if ((int)uVar10 < 1) break;
            _guard_xfg_dispatch_icall_nop(param_2,puVar6 + 0xc,(longlong)(int)uVar10);
            uVar11 = (ulonglong)((int)uVar11 + uVar10);
            puVar6[1] = uVar10;
            param_3 = param_3 - uVar10;
            param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar10);
          }
          else {
            uVar9 = (ulonglong)
                    (uint)((int)*(longlong *)(puVar6 + 10) - (int)*(longlong *)(puVar6 + 8));
LAB_143dc2b4a:
            iVar3 = (int)uVar9;
            if (iVar3 < 1) goto LAB_143dc2b4e;
            if ((int)param_3 < 0x101) {
LAB_143dc2be5:
              if (0x100 < iVar3) {
                iVar3 = 0x100;
              }
              iVar5 = EVP_CipherUpdate(*(undefined8 *)(puVar6 + 6),puVar6 + 0xc,puVar6,
                                       *(undefined8 *)(puVar6 + 8),iVar3);
              if (iVar5 == 0) {
                BIO_clear_flags(param_1,0xf);
                puVar6[4] = 0;
                return 0;
              }
              uVar10 = *puVar6;
              *(longlong *)(puVar6 + 8) = *(longlong *)(puVar6 + 8) + (longlong)iVar3;
              puVar6[2] = 1;
              if (uVar10 == 0) goto LAB_143dc2c4e;
              goto LAB_143dc2c23;
            }
            iVar8 = param_3 - iVar2;
            iVar5 = iVar3;
            if (iVar8 < iVar3) {
              iVar5 = iVar8;
            }
            iVar5 = EVP_CipherUpdate(*(undefined8 *)(puVar6 + 6),param_2,local_res20,
                                     *(undefined8 *)(puVar6 + 8),iVar5);
            if (iVar5 == 0) {
              BIO_clear_flags(param_1,0xf);
              return 0;
            }
            iVar3 = iVar3 - iVar8;
            uVar11 = (ulonglong)(uint)((int)uVar11 + local_res20[0]);
            param_2 = (void *)((longlong)param_2 + (longlong)local_res20[0]);
            param_3 = param_3 - local_res20[0];
            if (0 < iVar3) {
              *(longlong *)(puVar6 + 8) = *(longlong *)(puVar6 + 8) + (longlong)iVar8;
              goto LAB_143dc2be5;
            }
            *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar6 + 10);
          }
LAB_143dc2c4e:
          if ((int)param_3 < 1) break;
        }
      }
      BIO_clear_flags(param_1,0xf);
      BIO_copy_next_retry(param_1);
      if ((int)uVar11 == 0) {
        uVar11 = (ulonglong)puVar6[2];
      }
      return uVar11;
    }
  }
  return 0;
}



// FUNCTION 143dc2ce0 FUN_143dc2ce0 body=646 status=ok
// SIG undefined FUN_143dc2ce0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143dc2ce0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4
                       )

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar13 = 0x143dc2d07;
  uVar3 = 1;
  piVar5 = (int *)UNiagaraSystem::GetEffectType();
  uVar6 = BIO_next(param_1);
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  switch(param_2) {
  case 1:
    piVar5[4] = 1;
    piVar5[3] = 0;
    uVar12 = uVar6;
    uVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(*(undefined8 *)(piVar5 + 6));
    iVar2 = FUN_143cf75a0(*(undefined8 *)(piVar5 + 6),0,0,0,0,uVar1,uVar12,uVar13);
    if (iVar2 == 0) {
      return 0;
    }
    break;
  case 2:
    if (piVar5[2] < 1) goto LAB_143dc2dac;
    break;
  case 10:
  case 0xd:
    uVar3 = *piVar5 - piVar5[1];
    if (0 < (int)uVar3) goto LAB_143dc2dac;
    break;
  case 0xb:
    do {
      if (*piVar5 != piVar5[1]) {
        do {
          piVar7 = (int *)UNiagaraSystem::GetEffectType(param_1);
          lVar9 = BIO_next(param_1);
          if ((piVar7 != (int *)0x0) && (lVar9 != 0)) {
            BIO_clear_flags(param_1,0xf);
            iVar2 = piVar7[1];
            for (iVar11 = *piVar7 - iVar2; 0 < iVar11; iVar11 = iVar11 - uVar3) {
              uVar3 = BIO_write(lVar9,(longlong)piVar7 + (longlong)iVar2 + 0x30,iVar11);
              if ((int)uVar3 < 1) {
                BIO_copy_next_retry(param_1);
                if ((int)uVar3 < 0) {
                  return (ulonglong)uVar3;
                }
                break;
              }
              piVar7[1] = piVar7[1] + uVar3;
              iVar2 = piVar7[1];
            }
          }
        } while (*piVar5 != piVar5[1]);
      }
      if (piVar5[3] != 0) {
        uVar8 = BIO_ctrl(uVar6,param_2,param_3,param_4);
        return uVar8;
      }
      piVar5[3] = 1;
      piVar5[1] = 0;
      uVar8 = EVP_CipherFinal_ex(*(undefined8 *)(piVar5 + 6),piVar5 + 0xc,piVar5);
      piVar5[4] = (int)uVar8;
      if ((int)uVar8 < 1) {
        return uVar8;
      }
    } while( true );
  case 0xc:
    lVar9 = UNiagaraSystem::GetEffectType(param_4);
    lVar10 = EVP_CIPHER_CTX_new();
    *(longlong *)(lVar9 + 0x18) = lVar10;
    if (lVar10 == 0) {
      return 0;
    }
    uVar4 = EVP_CIPHER_CTX_copy(lVar10,*(undefined8 *)(piVar5 + 6));
    uVar3 = 0;
    if (uVar4 != 0) {
      CAkMatrixAwareCtx::SetRegisteredNotif(param_4,1);
      return (ulonglong)uVar4;
    }
    goto LAB_143dc2dac;
  case 0x65:
    BIO_clear_flags(param_1,0xf);
    uVar3 = BIO_ctrl(uVar6,param_2,param_3,param_4);
    BIO_copy_next_retry(param_1);
    return (ulonglong)uVar3;
  case 0x71:
    return (ulonglong)(uint)piVar5[4];
  case 0x81:
    *param_4 = *(undefined8 *)(piVar5 + 6);
    CAkMatrixAwareCtx::SetRegisteredNotif(param_1,1);
    return 1;
  }
  uVar3 = BIO_ctrl(uVar6,param_2,param_3,param_4);
LAB_143dc2dac:
  return (ulonglong)uVar3;
}



// FUNCTION 143dc3020 enc_new body=211 status=ok
// SIG undefined enc_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 enc_new(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143dc3030;
  lVar1 = CRYPTO_zalloc(0x1150,"crypto\\evp\\bio_enc.c",0x44);
  if (lVar1 == 0) {
    ERR_put_error(6,199,0x41,"crypto\\evp\\bio_enc.c",0x45,uVar3);
    return 0;
  }
  lVar2 = EVP_CIPHER_CTX_new();
  *(longlong *)(lVar1 + 0x18) = lVar2;
  if (lVar2 == 0) {
    CRYPTO_free(lVar1,"crypto\\evp\\bio_enc.c",0x4b);
    return 0;
  }
  *(undefined4 *)(lVar1 + 8) = 1;
  *(longlong *)(lVar1 + 0x20) = lVar1 + 0x150;
  *(longlong *)(lVar1 + 0x28) = lVar1 + 0x150;
  *(undefined4 *)(lVar1 + 0x10) = 1;
  FMemFileIn::seekg(param_1,lVar1);
  CAkMatrixAwareCtx::SetRegisteredNotif(param_1,1);
  return 1;
}



// FUNCTION 143dc3100 enc_free body=124 status=ok
// SIG undefined enc_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 enc_free(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = UNiagaraSystem::GetEffectType();
    if (lVar1 != 0) {
      EVP_CIPHER_CTX_free(*(undefined8 *)(lVar1 + 0x18));
      CRYPTO_clear_free(lVar1,0x1150,"crypto\\evp\\bio_enc.c",99);
      FMemFileIn::seekg(param_1,0);
      CAkMatrixAwareCtx::SetRegisteredNotif(param_1,0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143dc3180 BIO_f_cipher body=8 status=ok
// SIG undefined BIO_f_cipher(void)

undefined * BIO_f_cipher(void)

{
  return &DAT_145dbc950;
}



// FUNCTION 143dc3190 PKCS7_add0_attrib_signing_time body=103 status=ok
// SIG undefined PKCS7_add0_attrib_signing_time(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_add0_attrib_signing_time(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x143dc319c;
  if (param_2 == 0) {
    param_2 = X509_gmtime_adj(0);
    if (param_2 == 0) {
      ERR_put_error(0x21,0x87,0x41,"crypto\\pkcs7\\pk7_attr.c",100,uVar1);
      return 0;
    }
  }
  uVar1 = PKCS7_add_signed_attribute(param_1,0x34,0x17,param_2);
  return uVar1;
}



// FUNCTION 143dc3200 PKCS7_add1_attrib_digest body=131 status=ok
// SIG undefined PKCS7_add1_attrib_digest(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_add1_attrib_digest(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ASN1_OCTET_STRING_new();
  if (lVar2 != 0) {
    iVar1 = ASN1_STRING_set(lVar2,param_2,param_3);
    if ((iVar1 != 0) && (iVar1 = PKCS7_add_signed_attribute(param_1,0x33,4,lVar2), iVar1 != 0)) {
      return 1;
    }
    ASN1_BIT_STRING_free(lVar2);
  }
  return 0;
}



// FUNCTION 143dc3290 PKCS12_SAFEBAG_get0_attr body=26 status=ok
// SIG undefined PKCS12_SAFEBAG_get0_attr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_SAFEBAG_get0_attr(longlong param_1)

{
  PKCS12_get_attr_gen(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 143dc32b0 PKCS12_SAFEBAG_get0_p8inf body=51 status=ok
// SIG undefined PKCS12_SAFEBAG_get0_p8inf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_SAFEBAG_get0_p8inf(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 != 0x96) {
    return 0;
  }
  return param_1[1];
}



// FUNCTION 143dc32f0 PKCS12_SAFEBAG_get0_safes body=51 status=ok
// SIG undefined PKCS12_SAFEBAG_get0_safes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_SAFEBAG_get0_safes(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 != 0x9b) {
    return 0;
  }
  return param_1[1];
}



// FUNCTION 143dc3330 PKCS12_SAFEBAG_get1_cert body=86 status=ok
// SIG undefined PKCS12_SAFEBAG_get1_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_SAFEBAG_get1_cert(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 == 0x98) {
    iVar1 = OBJ_obj2nid(*(undefined8 *)param_1[1]);
    if (iVar1 == 0x9e) {
      uVar2 = X509_it();
      uVar2 = ASN1_item_unpack(*(undefined8 *)(param_1[1] + 8),uVar2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143dc3390 PKCS12_SAFEBAG_get_bag_nid body=64 status=ok
// SIG undefined PKCS12_SAFEBAG_get_bag_nid(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_SAFEBAG_get_bag_nid(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OBJ_obj2nid(*param_1);
  if (2 < iVar1 - 0x98U) {
    return 0xffffffff;
  }
  uVar2 = OBJ_obj2nid(*(undefined8 *)param_1[1]);
  return uVar2;
}



// FUNCTION 143dc33d0 PKCS12_SAFEBAG_get_nid body=25 status=ok
// SIG undefined PKCS12_SAFEBAG_get_nid(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_SAFEBAG_get_nid(undefined8 *param_1)

{
  OBJ_obj2nid(*param_1);
  return;
}



// FUNCTION 143dc33f0 PKCS12_decrypt_skey body=26 status=ok
// SIG undefined PKCS12_decrypt_skey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_decrypt_skey(longlong param_1)

{
  PKCS8_decrypt(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 143dc3410 PKCS12_unpack_authsafes body=102 status=ok
// SIG undefined PKCS12_unpack_authsafes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_unpack_authsafes(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143dc341c;
  iVar1 = OBJ_obj2nid(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  if (iVar1 != 0x15) {
    ERR_put_error(0x23,0x82,0x79,"crypto\\pkcs12\\p12_add.c",0x9f,uVar2);
    return 0;
  }
  uVar2 = PKCS12_AUTHSAFES_it();
  uVar2 = ASN1_item_unpack(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),uVar2);
  return uVar2;
}



// FUNCTION 143dc3480 PKCS12_unpack_p7data body=94 status=ok
// SIG undefined PKCS12_unpack_p7data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_unpack_p7data(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143dc348c;
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 != 0x15) {
    ERR_put_error(0x23,0x83,0x79,"crypto\\pkcs12\\p12_add.c",0x4c,uVar2);
    return 0;
  }
  uVar2 = PKCS12_SAFEBAGS_it();
  uVar2 = ASN1_item_unpack(*(undefined8 *)(param_1 + 0x20),uVar2);
  return uVar2;
}



// FUNCTION 143dc34e0 PKCS12_unpack_p7encdata body=147 status=ok
// SIG undefined PKCS12_unpack_p7encdata(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS12_unpack_p7encdata(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (iVar2 != 0x1a) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
  uVar3 = PKCS12_SAFEBAGS_it();
  uVar3 = PKCS12_item_decrypt_d2i
                    (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + 8),uVar3,
                     param_2,param_3,*(undefined8 *)(lVar1 + 0x10),CONCAT44(uVar4,1));
  return uVar3;
}



// FUNCTION 143dc3580 OPENSSL_utf82uni body=611 status=ok
// SIG undefined OPENSSL_utf82uni(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined2 * OPENSSL_utf82uni(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint local_res10 [2];
  undefined8 uVar14;
  
  uVar14 = 0x143dc35a2;
  uVar10 = 0;
  lVar7 = -1;
  uVar12 = 0;
  local_res10[0] = 0;
  uVar6 = (ulonglong)param_2;
  if (param_2 == 0xffffffff) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(char *)(uVar6 + param_1) != '\0');
  }
  iVar5 = (int)uVar6;
  uVar6 = uVar10;
  uVar13 = uVar10;
  if (0 < iVar5) {
    do {
      iVar9 = (int)uVar6;
      iVar1 = UTF8_getc(iVar9 + param_1,iVar5 - iVar9,local_res10);
      if (iVar1 < 0) {
        if (iVar5 == -1) {
          do {
            lVar7 = lVar7 + 1;
          } while (*(char *)(lVar7 + param_1) != '\0');
          iVar5 = (int)lVar7;
        }
        iVar5 = iVar5 * 2;
        puVar2 = (undefined2 *)CRYPTO_malloc((longlong)iVar5 + 2,"crypto\\pkcs12\\p12_utl.c",0x19);
        if (puVar2 == (undefined2 *)0x0) {
          ERR_put_error(0x23,0x79,0x41,"crypto\\pkcs12\\p12_utl.c",0x1a);
          return (undefined2 *)0x0;
        }
        if (0 < iVar5) {
          uVar6 = (ulonglong)((iVar5 - 1U >> 1) + 1);
          puVar11 = (undefined1 *)((longlong)puVar2 + 1);
          do {
            puVar11[-1] = 0;
            lVar7 = (longlong)uVar10 >> 1;
            uVar10 = uVar10 + 2;
            *puVar11 = *(undefined1 *)(lVar7 + param_1);
            uVar6 = uVar6 - 1;
            puVar11 = puVar11 + 2;
          } while (uVar6 != 0);
        }
        *(undefined2 *)((longlong)iVar5 + (longlong)puVar2) = 0;
        if (param_4 != (int *)0x0) {
          *param_4 = iVar5 + 2;
        }
        if (param_3 == (longlong *)0x0) {
          return puVar2;
        }
        *param_3 = (longlong)puVar2;
        return puVar2;
      }
      if (0x10ffff < local_res10[0]) goto LAB_143dc3668;
      iVar3 = 2;
      if (0xffff < local_res10[0]) {
        iVar3 = 4;
      }
      uVar12 = (int)uVar13 + iVar3;
      uVar6 = (ulonglong)(uint)(iVar9 + iVar1);
      uVar13 = (ulonglong)uVar12;
    } while (iVar9 + iVar1 < iVar5);
  }
  puVar2 = (undefined2 *)CRYPTO_malloc((longlong)(int)(uVar12 + 2),"crypto\\pkcs12\\p12_utl.c",0x75)
  ;
  if (puVar2 == (undefined2 *)0x0) {
    ERR_put_error(0x23,0x81,0x41,"crypto\\pkcs12\\p12_utl.c",0x76,uVar14);
LAB_143dc3668:
    puVar2 = (undefined2 *)0x0;
  }
  else {
    puVar8 = puVar2;
    if (0 < iVar5) {
      do {
        iVar9 = (int)uVar10;
        iVar1 = UTF8_getc(iVar9 + param_1,iVar5 - iVar9,local_res10);
        puVar11 = (undefined1 *)((longlong)puVar8 + 1);
        if (local_res10[0] < 0x10000) {
          *(char *)puVar8 = (char)(local_res10[0] >> 8);
          *puVar11 = (undefined1)local_res10[0];
        }
        else {
          local_res10[0] = local_res10[0] - 0x10000;
          iVar3 = (local_res10[0] >> 10) + 0xd800;
          iVar4 = (local_res10[0] & 0x3ff) + 0xdc00;
          *(char *)puVar8 = (char)((uint)iVar3 >> 8);
          *puVar11 = (char)iVar3;
          *(char *)(puVar8 + 1) = (char)((uint)iVar4 >> 8);
          puVar11 = (undefined1 *)((longlong)puVar8 + 3);
          *puVar11 = (char)iVar4;
        }
        uVar10 = (ulonglong)(uint)(iVar9 + iVar1);
        puVar8 = (undefined2 *)(puVar11 + 1);
      } while (iVar9 + iVar1 < iVar5);
    }
    *puVar8 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = uVar12 + 2;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = (longlong)puVar2;
    }
  }
  return puVar2;
}



// FUNCTION 143dc37f0 cms_DigestedData_do_final body=352 status=ok
// SIG undefined cms_DigestedData_do_final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool cms_DigestedData_do_final(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint local_78 [4];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x143dc3808;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar3 = EVP_MD_CTX_new();
  bVar4 = false;
  if (lVar3 == 0) {
    local_88 = 0x40;
    ERR_put_error(0x2e,0x75,0x41,"crypto\\cms\\cms_dd.c");
    bVar4 = false;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    iVar2 = cms_DigestAlgorithm_find_ctx(lVar3,param_2,*(undefined8 *)(lVar1 + 8));
    if ((iVar2 != 0) && (iVar2 = EVP_DigestFinal_ex(lVar3,local_68,local_78), 0 < iVar2)) {
      if (param_3 == 0) {
        iVar2 = ASN1_STRING_set(*(undefined8 *)(lVar1 + 0x18),local_68,local_78[0]);
        bVar4 = iVar2 != 0;
      }
      else if (local_78[0] == **(uint **)(lVar1 + 0x18)) {
        iVar2 = _guard_xfg_dispatch_icall_nop
                          (local_68,*(void **)(*(uint **)(lVar1 + 0x18) + 2),(ulonglong)local_78[0])
        ;
        if (iVar2 == 0) {
          bVar4 = true;
        }
        else {
          local_88 = 0x55;
          ERR_put_error(0x2e,0x75,0x9e,"crypto\\cms\\cms_dd.c");
        }
      }
      else {
        local_88 = 0x4f;
        ERR_put_error(0x2e,0x75,0x79,"crypto\\cms\\cms_dd.c");
      }
    }
  }
  EVP_MD_CTX_free(lVar3);
  return bVar4;
}



// FUNCTION 143dc3950 cms_DigestedData_init_bio body=30 status=ok
// SIG undefined cms_DigestedData_init_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cms_DigestedData_init_bio(longlong param_1)

{
  cms_DigestAlgorithm_init_bio(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
  return;
}



// FUNCTION 143dc3970 cms_CompressedData_init_bio body=169 status=ok
// SIG undefined cms_CompressedData_init_bio(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cms_CompressedData_init_bio(undefined8 *param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined8 uVar2;
  
  uVar2 = 0x143dc397c;
  iVar1 = OBJ_obj2nid(*param_1);
  if (iVar1 != 0x312) {
    ERR_put_error(0x2e,0x6a,0x6a,"crypto\\cms\\cms_cd.c",0x45,uVar2);
    return 0;
  }
  X509_ALGOR_get0(local_res8,0,0,*(undefined8 *)(param_1[1] + 8));
  iVar1 = OBJ_obj2nid(local_res8[0]);
  if (iVar1 != 0x7d) {
    ERR_put_error(0x2e,0x6a,0x97,"crypto\\cms\\cms_cd.c",0x4c,uVar2);
    return 0;
  }
  uVar2 = BIO_f_zlib();
  uVar2 = BIO_new(uVar2);
  return uVar2;
}



// FUNCTION 143dc3a20 PKCS12_get_attr_gen body=52 status=ok
// SIG undefined PKCS12_get_attr_gen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_get_attr_gen(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = X509at_get_attr_by_NID(param_1,param_2,0xffffffff);
  uVar2 = X509v3_get_ext(param_1,uVar1);
  X509_ATTRIBUTE_get0_type(uVar2,0);
  return;
}



// FUNCTION 143dc3a60 FUN_143dc3a60 body=472 status=ok
// SIG undefined FUN_143dc3a60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143dc3a60(undefined8 param_1,longlong param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 local_res10;
  undefined8 uVar8;
  
  uVar8 = 0x143dc3a82;
  puVar4 = (undefined4 *)UNiagaraSystem::GetEffectType();
  lVar5 = BIO_next(param_1);
  if ((((param_2 == 0) || (param_3 < 0)) || (puVar4 == (undefined4 *)0x0)) || (lVar5 == 0)) {
    return 0;
  }
  uVar7 = 0;
switchD_143dc3ae3_default:
  switch(*puVar4) {
  case 0:
    iVar3 = asn1_bio_setup_ex(param_1,puVar4,*(undefined8 *)(puVar4 + 10),1,2);
    if (iVar3 == 0) {
      return 0;
    }
    goto switchD_143dc3ae3_default;
  case 1:
    uVar2 = asn1_bio_flush_ex(param_1,puVar4,*(undefined8 *)(puVar4 + 0xc),2);
    uVar6 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) break;
    goto switchD_143dc3ae3_default;
  case 2:
    iVar3 = ASN1_object_size(0,param_3,puVar4[9]);
    puVar4[6] = iVar3 - param_3;
    if ((int)puVar4[4] < iVar3 - param_3) {
      return 0;
    }
    local_res10 = *(undefined8 *)(puVar4 + 2);
    ASN1_put_object(&local_res10,0,param_3,puVar4[9],puVar4[8],uVar8);
    puVar4[7] = param_3;
    *puVar4 = 3;
    goto switchD_143dc3ae3_default;
  case 3:
    uVar2 = BIO_write(lVar5,(longlong)(int)puVar4[5] + *(longlong *)(puVar4 + 2),puVar4[6]);
    uVar6 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      piVar1 = puVar4 + 6;
      *piVar1 = *piVar1 - uVar2;
      if (*piVar1 == 0) {
        puVar4[5] = 0;
        *puVar4 = 4;
      }
      else {
        puVar4[5] = puVar4[5] + uVar2;
      }
      goto switchD_143dc3ae3_default;
    }
    break;
  case 4:
    iVar3 = puVar4[7];
    if (param_3 <= (int)puVar4[7]) {
      iVar3 = param_3;
    }
    iVar3 = BIO_write(lVar5,param_2,iVar3);
    uVar6 = (ulonglong)iVar3;
    if (iVar3 < 1) break;
    puVar4[7] = puVar4[7] - iVar3;
    uVar7 = uVar7 + iVar3;
    param_2 = param_2 + uVar6;
    param_3 = param_3 - iVar3;
    if (puVar4[7] == 0) {
      *puVar4 = 2;
    }
    if (param_3 != 0) goto switchD_143dc3ae3_default;
    break;
  case 5:
  case 6:
    goto switchD_143dc3ae3_caseD_5;
  default:
    goto switchD_143dc3ae3_default;
  }
  BIO_clear_flags(param_1,0xf);
  BIO_copy_next_retry(param_1);
  if (0 < (int)uVar7) {
    return (ulonglong)uVar7;
  }
  return uVar6 & 0xffffffff;
switchD_143dc3ae3_caseD_5:
  BIO_clear_flags(param_1,0xf);
  return 0;
}



// FUNCTION 143dc3c60 FUN_143dc3c60 body=70 status=ok
// SIG undefined FUN_143dc3c60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143dc3c60(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = BIO_next();
  if (lVar1 == 0) {
    return;
  }
  BIO_read(lVar1,param_2,param_3);
  return;
}



// FUNCTION 143dc3cb0 FUN_143dc3cb0 body=39 status=ok
// SIG undefined FUN_143dc3cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143dc3cb0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_143dc3a60();
  return;
}



// FUNCTION 143dc3ce0 FUN_143dc3ce0 body=70 status=ok
// SIG undefined FUN_143dc3ce0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143dc3ce0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = BIO_next();
  if (lVar1 == 0) {
    return;
  }
  BIO_gets(lVar1,param_2,param_3);
  return;
}



// FUNCTION 143dc3d30 FUN_143dc3d30 body=390 status=ok
// SIG undefined FUN_143dc3d30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_143dc3d30(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143dc3d4e;
  piVar2 = (int *)UNiagaraSystem::GetEffectType();
  if (piVar2 == (int *)0x0) goto LAB_143dc3e9b;
  lVar3 = BIO_next(param_1);
  switch(param_2) {
  case 0xb:
    if ((lVar3 != 0) &&
       ((*piVar2 != 2 ||
        (iVar1 = asn1_bio_setup_ex(param_1,piVar2,*(undefined8 *)(piVar2 + 0xe),5,6,uVar4),
        iVar1 != 0)))) {
      if ((*piVar2 == 5) &&
         (uVar4 = asn1_bio_flush_ex(param_1,piVar2,*(undefined8 *)(piVar2 + 0x10),6), (int)uVar4 < 1
         )) {
        return uVar4;
      }
      if (*piVar2 == 6) goto LAB_143dc3e74;
      BIO_clear_flags(param_1,0xf);
    }
    goto LAB_143dc3e9b;
  default:
    if (lVar3 != 0) {
LAB_143dc3e74:
      uVar4 = BIO_ctrl(lVar3,param_2,param_3,param_4);
      return uVar4;
    }
LAB_143dc3e9b:
    uVar4 = 0;
    break;
  case 0x95:
    *(undefined8 *)(piVar2 + 10) = *param_4;
    *(undefined8 *)(piVar2 + 0xc) = param_4[1];
    uVar4 = 1;
    break;
  case 0x96:
    *param_4 = *(undefined8 *)(piVar2 + 10);
    param_4[1] = *(undefined8 *)(piVar2 + 0xc);
    uVar4 = 1;
    break;
  case 0x97:
    *(undefined8 *)(piVar2 + 0xe) = *param_4;
    *(undefined8 *)(piVar2 + 0x10) = param_4[1];
    uVar4 = 1;
    break;
  case 0x98:
    *param_4 = *(undefined8 *)(piVar2 + 0xe);
    param_4[1] = *(undefined8 *)(piVar2 + 0x10);
    uVar4 = 1;
    break;
  case 0x99:
    *(undefined8 **)(piVar2 + 0x16) = param_4;
    uVar4 = 1;
    break;
  case 0x9a:
    *param_4 = *(undefined8 *)(piVar2 + 0x16);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143dc3f70 asn1_bio_new body=205 status=ok
// SIG undefined asn1_bio_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 asn1_bio_new(undefined8 param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143dc3f80;
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x60,"crypto\\asn1\\bio_asn1.c",0x67);
  if (puVar1 != (undefined4 *)0x0) {
    lVar2 = CRYPTO_malloc(0x14,"crypto\\asn1\\bio_asn1.c");
    *(longlong *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) {
      puVar1[4] = 0x14;
      puVar1[8] = 0;
      *puVar1 = 0;
      puVar1[9] = 4;
      FMemFileIn::seekg(param_1,puVar1);
      CAkMatrixAwareCtx::SetRegisteredNotif(param_1,1);
      return 1;
    }
    ERR_put_error(0xd,0x71,0x41,"crypto\\asn1\\bio_asn1.c",0x78,uVar3);
    CRYPTO_free(puVar1,"crypto\\asn1\\bio_asn1.c",0x6c);
  }
  return 0;
}



// FUNCTION 143dc4040 asn1_bio_free body=132 status=ok
// SIG undefined asn1_bio_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 asn1_bio_free(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = UNiagaraSystem::GetEffectType();
    if (lVar1 != 0) {
      CRYPTO_free(*(undefined8 *)(lVar1 + 8),"crypto\\asn1\\bio_asn1.c",0x8d);
      CRYPTO_free(lVar1,"crypto\\asn1\\bio_asn1.c",0x8e);
      FMemFileIn::seekg(param_1,0);
      CAkMatrixAwareCtx::SetRegisteredNotif(param_1,0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143dc40d0 asn1_bio_flush_ex body=226 status=ok
// SIG undefined asn1_bio_flush_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int asn1_bio_flush_ex(undefined8 param_1,undefined4 *param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = param_2[0x14];
  if (iVar3 < 1) {
    return 1;
  }
  iVar1 = param_2[0x15];
  lVar2 = *(longlong *)(param_2 + 0x12);
  uVar4 = BIO_next();
  iVar3 = BIO_write(uVar4,iVar1 + lVar2,iVar3);
  while( true ) {
    if (iVar3 < 1) {
      return iVar3;
    }
    param_2[0x14] = param_2[0x14] - iVar3;
    iVar1 = param_2[0x14];
    if (iVar1 < 1) break;
    param_2[0x15] = param_2[0x15] + iVar3;
    iVar3 = param_2[0x15];
    lVar2 = *(longlong *)(param_2 + 0x12);
    uVar4 = BIO_next(param_1);
    iVar3 = BIO_write(uVar4,iVar3 + lVar2,iVar1);
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(param_1,param_2 + 0x12,param_2 + 0x14,param_2 + 0x16);
  }
  *param_2 = param_4;
  param_2[0x15] = 0;
  return iVar3;
}



// FUNCTION 143dc41c0 asn1_bio_setup_ex body=120 status=ok
// SIG undefined asn1_bio_setup_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
asn1_bio_setup_ex(undefined8 param_1,undefined4 *param_2,code *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  if (param_3 != (code *)0x0) {
    iVar1 = (*param_3)(param_1,param_2 + 0x12,param_2 + 0x14,param_2 + 0x16);
    if (iVar1 == 0) {
      BIO_clear_flags(param_1,0xf);
      return 0;
    }
  }
  if ((int)param_2[0x14] < 1) {
    param_4 = param_5;
  }
  *param_2 = param_4;
  return 1;
}



// FUNCTION 143dc4240 b64_write body=1127 status=ok
// SIG undefined b64_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int b64_write(undefined8 param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar6 = 0;
  piVar4 = (int *)UNiagaraSystem::GetEffectType();
  lVar5 = BIO_next(param_1);
  if ((piVar4 != (int *)0x0) && (lVar5 != 0)) {
    BIO_clear_flags(param_1,0xf);
    if (piVar4[4] != 1) {
      piVar4[4] = 1;
      piVar4[0] = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      EVP_EncodeInit(*(undefined8 *)(piVar4 + 8));
    }
    if (0x5dd < piVar4[1]) {
      OPENSSL_die("assertion failed: ctx->buf_off < (int)sizeof(ctx->buf)","crypto\\evp\\bio_b64.c",
                  0x15f);
    }
    iVar7 = *piVar4;
    if (0x5de < iVar7) {
      OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)","crypto\\evp\\bio_b64.c"
                  ,0x160);
      iVar7 = *piVar4;
    }
    iVar2 = piVar4[1];
    if (iVar7 < iVar2) {
      OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",0x161);
      iVar2 = piVar4[1];
      iVar7 = *piVar4;
    }
    for (iVar7 = iVar7 - iVar2; 0 < iVar7; iVar7 = iVar7 - iVar2) {
      iVar2 = BIO_write(lVar5,(longlong)piVar4[1] + 0x28 + (longlong)piVar4,iVar7);
      if (iVar2 < 1) {
        BIO_copy_next_retry(param_1);
        return iVar2;
      }
      if (iVar7 < iVar2) {
        OPENSSL_die("assertion failed: i <= n","crypto\\evp\\bio_b64.c",0x169);
      }
      piVar4[1] = piVar4[1] + iVar2;
      iVar1 = piVar4[1];
      if (0x5de < iVar1) {
        OPENSSL_die("assertion failed: ctx->buf_off <= (int)sizeof(ctx->buf)",
                    "crypto\\evp\\bio_b64.c",0x16b);
        iVar1 = piVar4[1];
      }
      if (*piVar4 < iVar1) {
        OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",0x16c)
        ;
      }
    }
    piVar4[0] = 0;
    piVar4[1] = 0;
    if ((param_2 != (void *)0x0) && (0 < param_3)) {
      do {
        iVar7 = param_3;
        if (0x400 < param_3) {
          iVar7 = 0x400;
        }
        uVar3 = BIO_test_flags(param_1,0xffffffff);
        if ((uVar3 >> 8 & 1) == 0) {
          iVar2 = EVP_EncodeUpdate(*(undefined8 *)(piVar4 + 8),piVar4 + 10,piVar4,param_2,iVar7);
          if (iVar2 == 0) {
            if (iVar6 != 0) {
              return iVar6;
            }
            return -1;
          }
          iVar2 = *piVar4;
          if (0x5de < iVar2) {
            OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                        "crypto\\evp\\bio_b64.c",0x1a5);
            iVar2 = *piVar4;
          }
          if (iVar2 < piVar4[1]) {
            uVar8 = 0x1a6;
LAB_143dc4587:
            OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",
                        uVar8);
          }
LAB_143dc459a:
          iVar6 = iVar6 + iVar7;
        }
        else {
          iVar2 = piVar4[2];
          if (iVar2 < 1) {
            if (iVar7 < 3) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)piVar4 + 0x606),param_2,(longlong)iVar7);
              piVar4[2] = iVar7;
              return iVar6 + iVar7;
            }
            iVar7 = (iVar7 / 3 + (iVar7 >> 0x1f) +
                    (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * 3;
            iVar2 = EVP_EncodeBlock(piVar4 + 10,param_2,iVar7);
            *piVar4 = iVar2;
            if (0x5de < iVar2) {
              OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                          "crypto\\evp\\bio_b64.c",0x19c);
              iVar2 = *piVar4;
            }
            if (iVar2 < piVar4[1]) {
              uVar8 = 0x19d;
              goto LAB_143dc4587;
            }
            goto LAB_143dc459a;
          }
          if (3 < iVar2) {
            OPENSSL_die("assertion failed: ctx->tmp_len <= 3","crypto\\evp\\bio_b64.c",0x17b);
            iVar2 = piVar4[2];
          }
          iVar7 = param_3;
          if (3 - iVar2 <= param_3) {
            iVar7 = 3 - iVar2;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)piVar4 + (longlong)iVar2 + 0x606),param_2,(longlong)iVar7);
          iVar2 = piVar4[2];
          iVar6 = iVar6 + iVar7;
          piVar4[2] = iVar2 + iVar7;
          if (iVar2 + iVar7 < 3) {
            return iVar6;
          }
          iVar2 = EVP_EncodeBlock(piVar4 + 10,(longlong)piVar4 + 0x606);
          *piVar4 = iVar2;
          if (0x5de < iVar2) {
            OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                        "crypto\\evp\\bio_b64.c",0x18a);
            iVar2 = *piVar4;
          }
          if (iVar2 < piVar4[1]) {
            OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",
                        0x18b);
          }
          piVar4[2] = 0;
        }
        param_3 = param_3 - iVar7;
        param_2 = (void *)((longlong)param_2 + (longlong)iVar7);
        piVar4[1] = 0;
        iVar7 = *piVar4;
        while (0 < iVar7) {
          iVar2 = BIO_write(lVar5,(longlong)piVar4[1] + 0x28 + (longlong)piVar4,iVar7);
          if (iVar2 < 1) {
            BIO_copy_next_retry(param_1);
            if (iVar6 != 0) {
              return iVar6;
            }
            return iVar2;
          }
          if (iVar7 < iVar2) {
            OPENSSL_die("assertion failed: i <= n","crypto\\evp\\bio_b64.c",0x1b4);
          }
          piVar4[1] = piVar4[1] + iVar2;
          iVar7 = iVar7 - iVar2;
          iVar2 = piVar4[1];
          if (0x5de < iVar2) {
            OPENSSL_die("assertion failed: ctx->buf_off <= (int)sizeof(ctx->buf)",
                        "crypto\\evp\\bio_b64.c",0x1b7);
            iVar2 = piVar4[1];
          }
          if (*piVar4 < iVar2) {
            OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",
                        0x1b8);
          }
        }
        piVar4[0] = 0;
        piVar4[1] = 0;
        if (param_3 < 1) {
          return iVar6;
        }
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 143dc46b0 b64_read body=1164 status=ok
// SIG undefined b64_read(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint b64_read(undefined8 param_1,void *param_2,uint param_3)

{
  uint *_Src;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  void *local_res10;
  uint local_res20;
  int local_48 [2];
  longlong local_40;
  
  local_40 = 0x143dc46cf;
  uVar12 = 0;
  if (param_2 != (void *)0x0) {
    puVar4 = (uint *)UNiagaraSystem::GetEffectType();
    lVar5 = BIO_next(param_1);
    if ((puVar4 != (uint *)0x0) && (lVar5 != 0)) {
      local_40 = lVar5;
      BIO_clear_flags(param_1,0xf);
      if (puVar4[4] != 2) {
        puVar4[4] = 2;
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        EVP_DecodeInit(*(undefined8 *)(puVar4 + 8));
      }
      local_res10 = param_2;
      if (0 < (int)*puVar4) {
        uVar3 = puVar4[1];
        if ((int)*puVar4 < (int)uVar3) {
          OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",0x89
                     );
          uVar3 = puVar4[1];
        }
        uVar12 = *puVar4 - uVar3;
        if ((int)param_3 < (int)(*puVar4 - uVar3)) {
          uVar12 = param_3;
        }
        if (0x5dd < (int)(uVar3 + uVar12)) {
          OPENSSL_die("assertion failed: ctx->buf_off + i < (int)sizeof(ctx->buf)",
                      "crypto\\evp\\bio_b64.c",0x8d);
          uVar3 = puVar4[1];
        }
        _guard_xfg_dispatch_icall_nop
                  (param_2,(void *)((longlong)puVar4 + (longlong)(int)uVar3 + 0x28),
                   (longlong)(int)uVar12);
        puVar4[1] = puVar4[1] + uVar12;
        local_res10 = (void *)((longlong)param_2 + (longlong)(int)uVar12);
        param_3 = param_3 - uVar12;
        if (*puVar4 == puVar4[1]) {
          puVar4[0] = 0;
          puVar4[1] = 0;
        }
      }
      uVar3 = 0;
joined_r0x000143dc47e8:
      do {
        if ((int)param_3 < 1) {
LAB_143dc49d9:
          BIO_copy_next_retry(param_1);
          if (uVar12 == 0) {
            uVar12 = uVar3;
          }
          return uVar12;
        }
        uVar10 = 0;
        if (((int)puVar4[6] < 1) ||
           ((uVar1 = BIO_read(lVar5,(longlong)(int)puVar4[2] + 0x606 + (longlong)puVar4,
                              0x400 - puVar4[2]), uVar8 = uVar1, local_res20 = uVar3, (int)uVar1 < 1
            && ((iVar2 = BIO_test_flags(lVar5,8), uVar3 = uVar1, iVar2 != 0 ||
                (puVar4[6] = uVar1, uVar8 = uVar10, local_res20 = uVar1, puVar4[2] == 0))))))
        goto LAB_143dc49d9;
        puVar4[2] = puVar4[2] + uVar8;
        uVar8 = puVar4[2];
        uVar3 = local_res20;
        if (puVar4[5] == 0) {
LAB_143dc4a14:
          if ((0x3ff < (int)uVar8) || ((int)puVar4[6] < 1)) {
LAB_143dc4a22:
            uVar3 = BIO_test_flags(param_1,0xffffffff);
            _Src = puVar4 + 10;
            if ((uVar3 >> 8 & 1) == 0) {
              uVar10 = EVP_DecodeUpdate(*(undefined8 *)(puVar4 + 8),_Src,puVar4,
                                        (longlong)puVar4 + 0x606,uVar8);
              puVar4[2] = 0;
            }
            else {
              uVar1 = uVar8 & 0xfffffffc;
              uVar3 = EVP_DecodeBlock(_Src,(longlong)puVar4 + 0x606,uVar1);
              uVar10 = uVar3;
              if (((2 < (int)uVar1) &&
                  (*(char *)((longlong)(int)uVar1 + 0x605 + (longlong)puVar4) == '=')) &&
                 (uVar10 = uVar3 - 1,
                 *(char *)((longlong)(int)uVar1 + 0x604 + (longlong)puVar4) == '=')) {
                uVar10 = uVar3 - 2;
              }
              if (uVar1 != uVar8) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)puVar4 + 0x606),
                           (void *)((longlong)puVar4 + (longlong)(int)uVar1 + 0x606),
                           (longlong)(int)(uVar8 - uVar1));
                puVar4[2] = uVar8 - uVar1;
              }
              uVar3 = 0;
              if (0 < (int)uVar10) {
                uVar3 = uVar10;
              }
              *puVar4 = uVar3;
            }
            puVar4[6] = uVar10;
            uVar3 = 0;
            puVar4[1] = 0;
            if ((int)uVar10 < 0) {
              *puVar4 = 0;
              goto LAB_143dc49d9;
            }
            uVar3 = *puVar4;
            if ((int)param_3 < (int)*puVar4) {
              uVar3 = param_3;
            }
            _guard_xfg_dispatch_icall_nop(local_res10,_Src,(longlong)(int)uVar3);
            uVar12 = uVar12 + uVar3;
            puVar4[1] = uVar3;
            if (uVar3 == *puVar4) {
              puVar4[0] = 0;
              puVar4[1] = 0;
            }
            param_3 = param_3 - uVar3;
            local_res10 = (void *)((longlong)local_res10 + (longlong)(int)uVar3);
            uVar3 = local_res20;
            lVar5 = local_40;
          }
          goto joined_r0x000143dc47e8;
        }
        uVar1 = BIO_test_flags(param_1,0xffffffff);
        if ((uVar1 >> 8 & 1) != 0) {
          puVar4[2] = 0;
          goto LAB_143dc4a22;
        }
        if (puVar4[5] == 0) goto LAB_143dc4a14;
        local_48[0] = 0;
        pcVar13 = (char *)((longlong)puVar4 + 0x606);
        pcVar9 = pcVar13;
        pcVar11 = pcVar13;
        pcVar6 = pcVar13;
        uVar1 = 0;
        if (0 < (int)uVar8) {
LAB_143dc48a0:
          uVar10 = uVar1;
          pcVar11 = pcVar6 + 1;
          if (*pcVar6 != '\n') goto LAB_143dc48f3;
          if (puVar4[3] != 0) {
            puVar4[3] = 0;
            pcVar9 = pcVar11;
            goto LAB_143dc48f3;
          }
          iVar2 = EVP_DecodeUpdate(*(undefined8 *)(puVar4 + 8),puVar4 + 10,local_48,pcVar9,
                                   (int)pcVar11 - (int)pcVar9);
          if (((iVar2 < 1) && (local_48[0] == 0)) && (puVar4[5] != 0)) {
            EVP_DecodeInit(*(undefined8 *)(puVar4 + 8));
            pcVar9 = pcVar11;
            goto LAB_143dc48f3;
          }
          if (pcVar9 != pcVar13) {
            uVar8 = uVar8 + 0x606 + ((int)puVar4 - (int)pcVar9);
            lVar5 = (longlong)(int)uVar8;
            if (0 < (int)uVar8) {
              pcVar6 = pcVar13;
              do {
                *pcVar6 = pcVar6[(longlong)(pcVar9 + (-0x606 - (longlong)puVar4))];
                pcVar6 = pcVar6 + 1;
                lVar5 = lVar5 + -1;
              } while (lVar5 != 0);
            }
          }
          EVP_DecodeInit(*(undefined8 *)(puVar4 + 8));
          puVar4[5] = 0;
        }
LAB_143dc4945:
        if ((uVar10 != uVar8) || (local_48[0] != 0)) {
          puVar4[2] = 0;
          goto LAB_143dc4a22;
        }
        lVar5 = local_40;
        if (pcVar9 == pcVar13) {
          if (uVar8 == 0x400) {
            puVar4[3] = 1;
            puVar4[2] = 0;
          }
        }
        else if (pcVar9 != pcVar11) {
          uVar10 = (int)pcVar11 - (int)pcVar9;
          lVar7 = (longlong)(int)uVar10;
          if (0 < (int)uVar10) {
            do {
              *pcVar13 = pcVar13[(longlong)(pcVar9 + (-0x606 - (longlong)puVar4))];
              pcVar13 = pcVar13 + 1;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          puVar4[2] = uVar10;
        }
      } while( true );
    }
  }
  return 0;
LAB_143dc48f3:
  uVar10 = uVar10 + 1;
  pcVar6 = pcVar11;
  uVar1 = uVar10;
  if ((int)uVar8 <= (int)uVar10) goto LAB_143dc4945;
  goto LAB_143dc48a0;
}



// FUNCTION 143dc4b40 FUN_143dc4b40 body=39 status=ok
// SIG undefined FUN_143dc4b40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143dc4b40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  b64_write();
  return;
}



// FUNCTION 143dc4b70 FUN_143dc4b70 body=531 status=ok
// SIG undefined FUN_143dc4b70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143dc4b70(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar6 = 1;
  piVar3 = (int *)UNiagaraSystem::GetEffectType();
  lVar4 = BIO_next(param_1);
  if ((piVar3 == (int *)0x0) || (lVar4 == 0)) {
    return 0;
  }
  switch(param_2) {
  case 1:
    piVar3[6] = 1;
    piVar3[5] = 1;
    piVar3[4] = 0;
    break;
  case 2:
    if (piVar3[6] < 1) goto switchD_143dc4bef_caseD_c;
    break;
  case 10:
    iVar2 = *piVar3;
    iVar1 = piVar3[1];
    if (iVar2 < iVar1) {
      OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",0x1e3);
      iVar1 = piVar3[1];
      iVar2 = *piVar3;
    }
    uVar6 = iVar2 - iVar1;
LAB_143dc4c90:
    if (0 < (int)uVar6) goto switchD_143dc4bef_caseD_c;
    break;
  case 0xb:
    while( true ) {
      while( true ) {
        if (*piVar3 != piVar3[1]) {
          do {
            uVar5 = b64_write(param_1,0,0);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
          } while (*piVar3 != piVar3[1]);
        }
        uVar6 = BIO_test_flags(param_1,0xffffffff);
        if ((uVar6 >> 8 & 1) != 0) break;
        if ((piVar3[4] == 0) ||
           (iVar2 = FRollingHash::GetWindowSize(*(undefined8 *)(piVar3 + 8)), iVar2 == 0))
        goto switchD_143dc4bef_caseD_3;
        piVar3[1] = 0;
        EVP_EncodeFinal(*(undefined8 *)(piVar3 + 8));
      }
      if (piVar3[2] == 0) break;
      iVar2 = EVP_EncodeBlock(piVar3 + 10);
      *piVar3 = iVar2;
      piVar3[1] = 0;
      piVar3[2] = 0;
    }
    break;
  case 0xc:
    goto switchD_143dc4bef_caseD_c;
  case 0xd:
    iVar2 = *piVar3;
    iVar1 = piVar3[1];
    if (iVar2 < iVar1) {
      OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto\\evp\\bio_b64.c",0x1da);
      iVar1 = piVar3[1];
      iVar2 = *piVar3;
    }
    uVar6 = iVar2 - iVar1;
    if (uVar6 != 0) goto LAB_143dc4c90;
    if ((piVar3[4] != 0) &&
       (iVar2 = FRollingHash::GetWindowSize(*(undefined8 *)(piVar3 + 8)), iVar2 != 0)) {
      return 1;
    }
    break;
  case 0x65:
    BIO_clear_flags(param_1,0xf);
    uVar6 = BIO_ctrl(lVar4,param_2,param_3,param_4);
    BIO_copy_next_retry(param_1);
    return (ulonglong)uVar6;
  }
switchD_143dc4bef_caseD_3:
  uVar6 = BIO_ctrl(lVar4,param_2,param_3,param_4);
switchD_143dc4bef_caseD_c:
  return (ulonglong)uVar6;
}



// FUNCTION 143dc4e10 b64_new body=196 status=ok
// SIG undefined b64_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 b64_new(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143dc4e20;
  lVar1 = CRYPTO_zalloc(0xa08,"crypto\\evp\\bio_b64.c",0x49);
  if (lVar1 == 0) {
    ERR_put_error(6,0xc6,0x41,"crypto\\evp\\bio_b64.c",0x4a,uVar3);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x18) = 1;
  *(undefined4 *)(lVar1 + 0x14) = 1;
  lVar2 = EVP_ENCODE_CTX_new();
  *(longlong *)(lVar1 + 0x20) = lVar2;
  if (lVar2 == 0) {
    CRYPTO_free(lVar1,"crypto\\evp\\bio_b64.c",0x52);
    return 0;
  }
  FMemFileIn::seekg(param_1,lVar1);
  CAkMatrixAwareCtx::SetRegisteredNotif(param_1,1);
  return 1;
}



// FUNCTION 143dc4ee0 b64_free body=119 status=ok
// SIG undefined b64_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 b64_free(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = UNiagaraSystem::GetEffectType();
    if (lVar1 != 0) {
      EVP_ENCODE_CTX_free(*(undefined8 *)(lVar1 + 0x20));
      CRYPTO_free(lVar1,"crypto\\evp\\bio_b64.c",0x67);
      FMemFileIn::seekg(param_1,0);
      CAkMatrixAwareCtx::SetRegisteredNotif(param_1,0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143dc4f57 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143dc4f57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  inet_ntop();
  return;
}



// FUNCTION 143dc4f60 FUN_143dc4f60 body=1717 status=ok
// SIG undefined FUN_143dc4f60(void)

void FUN_143dc4f60(longlong param_1,int param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    freeaddrinfo();
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x1c7);
  lVar9 = *(longlong *)(param_1 + 0x78);
  thunk_FUN_143dd4bc0(*(undefined8 *)(param_1 + 0xf8),0,&DAT_145dbcdec);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    if (*(longlong **)(param_1 + 0x108) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0x108) = *(longlong *)(param_1 + 0x100);
    }
    if (*(longlong *)(param_1 + 0x100) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 8) = *(undefined8 *)(param_1 + 0x108);
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x118);
    while (lVar10 != 0) {
      lVar4 = *(longlong *)(lVar10 + 8);
      FUN_143dc4f60(lVar10 + -0x120,0xffffffff,"trans q leader closing");
      lVar10 = lVar4;
    }
    if (*(longlong *)(param_1 + 0x120) != 0) {
      if (*(longlong **)(param_1 + 0x128) != (longlong *)0x0) {
        **(longlong **)(param_1 + 0x128) = *(longlong *)(param_1 + 0x120);
      }
      if (*(longlong *)(param_1 + 0x120) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 8) = *(undefined8 *)(param_1 + 0x128);
      }
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    do {
      lVar4 = *(longlong *)(lVar10 + 0x98);
      *(uint *)(lVar10 + 0x1b8) = *(uint *)(lVar10 + 0x1b8) | 0x80;
      *(undefined8 *)(lVar10 + 0x88) = 0;
      FUN_143dc4f60(lVar10,param_2,"general child recurse");
      lVar10 = lVar4;
    } while (lVar4 != 0);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(undefined ***)(param_1 + 0x68) == &PTR_s_raw_file_146838450) {
    FUN_143dc68e0();
    FUN_143dcd650(param_1);
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
              (param_1,*(undefined2 *)(*(longlong *)(param_1 + 0x68) + 0xa4),
               *(undefined8 *)(param_1 + 0x130),0,0);
    goto LAB_143dc55d1;
  }
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
  FUN_143dcbf50(param_1);
  if (*(undefined ***)(param_1 + 0x68) == &PTR_s_raw_skt_1468383a0) {
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
  }
  else {
    if (((*(undefined ***)(param_1 + 0x68) == &PTR_DAT_146838500) &&
        ((*(uint *)(param_1 + 0x70) & 0x20000000) != 0)) && (*(longlong *)(param_1 + 0x28) != 0)) {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8))();
    }
    uVar7 = *(uint *)(param_1 + 0x70) & 0xffff;
    if (uVar7 == 0x1e) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1b8);
    if (((-1 < (char)uVar3) && (param_2 != 9999)) && (uVar7 != 0x1d)) {
      uVar6 = *(uint *)(param_1 + 0x74) & 0xffff;
      if (uVar6 == 0x1e) {
        return;
      }
      if (uVar6 < 0x119) {
LAB_143dc5208:
        if (*(int *)(param_1 + 0x1ac) != 0) {
          *(undefined2 *)(param_1 + 0x70) = 0x11c;
          FUN_143dc5a70(param_1,0xc,5);
          return;
        }
        if ((uVar7 != 0x201) && (uVar7 != 0x11)) {
          if (((uVar3 >> 0x12 & 1) == 0) &&
             ((((*(undefined ***)(param_1 + 0x68) == &PTR_DAT_146838500 &&
                ((*(uint *)(param_1 + 0x70) >> 0x1d & 1) != 0)) &&
               (*(longlong *)(param_1 + 0x130) != 0)) &&
              ((*(longlong *)(param_1 + 0xa0) != 0 && (0x7fffffff < uVar3)))))) {
            (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                      (param_1,0x32,*(longlong *)(param_1 + 0x130),0,0);
            *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0x7fffffff;
          }
          pcVar5 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x80);
          if ((pcVar5 != (code *)0x0) && (iVar8 = (*pcVar5)(param_1,param_2), iVar8 != 0)) {
            return;
          }
        }
      }
      else if (0x11b < uVar6) {
        if (uVar6 != 0x11c) goto LAB_143dc5208;
        if (*(int *)(param_1 + 0x1ac) != 0) {
          FUN_143dcdd70(param_1);
          return;
        }
      }
    }
  }
  pcVar5 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x90);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(param_1,param_2);
  }
  FUN_143dc68e0(param_1);
  if ((((*(uint *)(param_1 + 0x1b8) >> 0x12 & 1) == 0) && (*(longlong *)(param_1 + 0x130) != 0)) &&
     (0x7fffffff < *(uint *)(param_1 + 0x1b8))) {
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
              (param_1,0x32,*(longlong *)(param_1 + 0x130),0,0);
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0x7fffffff;
  }
  uVar7 = *(uint *)(param_1 + 0x70) & 0xffff;
  if (((uVar7 == 0x20a) || (uVar7 == 0x201)) && ((*(uint *)(param_1 + 0x1b8) & 0x20000) == 0)) {
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))(param_1,1,*(undefined8 *)(param_1 + 0x130),0,0)
    ;
  }
  if (((*(undefined ***)(param_1 + 0x68) != &PTR_s_raw_skt_1468383a0) &&
      ((*(uint *)(param_1 + 0x70) >> 0x1c & 1) == 0)) &&
     ((uVar7 = *(uint *)(param_1 + 0x70) & 0xffff, uVar7 != 0x1d &&
      (((uVar7 != 0x200 && (param_2 != 9999)) && (-1 < (char)*(uint *)(param_1 + 0x1b8))))))) {
    if (((*(byte *)(param_1 + 0x170) & 1) == 0) || (*(longlong *)(param_1 + 0x150) == 0)) {
      if (*(longlong *)(param_1 + 0x178) != -1) {
        *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
        Ordinal_22(*(longlong *)(param_1 + 0x178),1);
      }
    }
    else {
      FUN_143dd3780(param_1);
    }
    if ((((*(byte *)(param_1 + 0x1b8) & 0x80) == 0) && (*(longlong *)(param_1 + 0x178) != -1)) &&
       ((*(short *)(param_1 + 0x70) != 0x1d &&
        ((*(byte *)(*(longlong *)(lVar9 + 0x3d0) + 0x70) & 1) != 0)))) {
      FUN_143dcd530(param_1,2,9);
      *(undefined2 *)(param_1 + 0x70) = 0x1d;
      FUN_143dc5a70(param_1,0xd,*(undefined4 *)(lVar9 + 0x4b8));
      return;
    }
  }
  FUN_143dd42f0(param_1);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xb8);
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8) = *(undefined8 *)(param_1 + 0xc0);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xd0) = *(longlong *)(param_1 + 200);
    }
    if (*(longlong *)(param_1 + 200) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 200) + 8) = *(undefined8 *)(param_1 + 0xd0);
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if ((*(uint *)(param_1 + 0x1b8) & 0x80000) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x178) == -1) {
    FUN_143dcdf20(param_1);
  }
  else {
    FUN_143dcd650();
  }
  *(undefined2 *)(param_1 + 0x70) = 0x1e;
  FUN_143dc6070(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xd8);
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 8) = *(undefined8 *)(param_1 + 0xe0);
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  pcVar5 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x88);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(lVar9 + 0xa0 + (longlong)cVar1 * 0xa8,param_1);
  }
  if (((*(uint *)(param_1 + 0x74) & 0x200) == 0) && ((*(uint *)(param_1 + 0x1b8) >> 0x12 & 1) == 0))
  {
    sVar2 = *(short *)(*(longlong *)(param_1 + 0x68) + 0xa4 +
                      (ulonglong)(*(uint *)(param_1 + 0x70) >> 0x1d & 1) * 2);
    if (sVar2 != 0) {
      lVar9 = *(longlong *)(param_1 + 0xa0);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170);
      }
      if (((*(uint *)(param_1 + 0x1b8) & 4) == 0) || ((*(uint *)(param_1 + 0x70) >> 0x1c & 1) == 0))
      {
        (**(code **)(lVar9 + 8))(param_1,sVar2,*(undefined8 *)(param_1 + 0x130),0,0);
      }
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x40000;
    }
  }
LAB_143dc55d1:
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
  pcVar5 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x3d0) + 0x30);
  if ((pcVar5 == (code *)0x0) || (iVar8 = (*pcVar5)(param_1), iVar8 == 0)) {
    FUN_143dc5620(param_1);
  }
  return;
}



// FUNCTION 143dc5620 FUN_143dc5620 body=113 status=ok
// SIG undefined FUN_143dc5620(void)

void FUN_143dc5620(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x178) != -1) {
    iVar1 = FUN_143dd3c40();
    if (iVar1 == 0) {
      Ordinal_3(*(undefined8 *)(param_1 + 0x178));
      *(undefined8 *)(param_1 + 0x178) = 0xffffffffffffffff;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
              (param_1,0x1e,*(undefined8 *)(param_1 + 0x130),0,0);
  }
  FUN_143dc56a0(param_1);
  return;
}



// FUNCTION 143dc56a0 FUN_143dc56a0 body=368 status=ok
// SIG undefined FUN_143dc56a0(void)

void FUN_143dc56a0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  
  if (param_1 != 0) {
    if ((((*(longlong *)(param_1 + 0xa0) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10) != 0)) &&
        (*(longlong *)(param_1 + 0x130) != 0)) && ((*(byte *)(param_1 + 0x1b8) & 0x40) == 0)) {
      thunk_FUN_143dd4bc0(*(longlong *)(param_1 + 0x130),0,"lws_free");
    }
    puVar5 = *(undefined8 **)(param_1 + 0x140);
    while (puVar5 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar5;
      *puVar5 = 0;
      thunk_FUN_143dd4bc0(puVar5,0,"lws_free");
      puVar5 = puVar2;
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
    thunk_FUN_143dd4bc0(*(undefined8 *)(param_1 + 0x148),0,&DAT_145dbcdec);
    *(undefined8 *)(param_1 + 0x148) = 0;
    thunk_FUN_143dd4bc0(*(undefined8 *)(param_1 + 0xe8),0,&DAT_145dbcdec);
    lVar3 = *(longlong *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x158) == param_1)) {
      *(undefined8 *)(lVar3 + 0x158) = 0;
    }
    pcVar4 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x98);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(param_1);
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
        **(longlong **)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xb8);
      }
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8) = *(undefined8 *)(param_1 + 0xc0);
      }
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    pcVar4 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x3d0) + 0x68);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(param_1);
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0x78) + 0x4a8);
    *piVar1 = *piVar1 + -1;
    thunk_FUN_143dd4bc0(param_1,0,"lws_free");
  }
  return;
}



// FUNCTION 143dc5810 FUN_143dc5810 body=344 status=ok
// SIG undefined FUN_143dc5810(void)

longlong FUN_143dc5810(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8;
  int local_resc;
  
  FUN_143dd4b00(&local_res8,0);
  lVar4 = (longlong)local_res8;
  lVar5 = (longlong)local_resc;
  plVar1 = *(longlong **)(param_1 + 0x28);
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[1];
    if (lVar4 * 1000000 + lVar5 < plVar2[0x19]) break;
    if (*plVar2 != 0) {
      if ((longlong *)plVar2[1] != (longlong *)0x0) {
        *(longlong *)plVar2[1] = *plVar2;
      }
      if (*plVar2 != 0) {
        *(longlong *)(*plVar2 + 8) = plVar2[1];
      }
      *plVar2 = 0;
      plVar2[1] = 0;
    }
    if ((plVar2[-5] != 0) &&
       (iVar3 = (**(code **)(plVar2[-5] + 8))(plVar2 + -0x19,0x49,plVar2[0xd],0,0), iVar3 != 0)) {
      FUN_143dc4f60(plVar2 + -0x19,0,"timer cb errored");
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    return 0x7fffffffffffffff;
  }
  FUN_143dd4b00(&local_res8,0);
  lVar5 = (longlong)local_res8 * 1000000 + (longlong)local_resc;
  lVar4 = *(longlong *)(lVar4 + 200);
  if (lVar5 <= lVar4) {
    return lVar4 - lVar5;
  }
  return 0;
}



// FUNCTION 143dc5970 FUN_143dc5970 body=251 status=ok
// SIG undefined FUN_143dc5970(void)

undefined8 FUN_143dc5970(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (((*(byte *)(param_1 + 0x1b8) & 2) == 0) &&
     ((*(uint *)(param_1 + 0x70) & 0xf000000) != 0x1000000)) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x98)) {
      if ((*(uint *)(lVar1 + 0x1b8) & 0x200) != 0) {
        FUN_143dc5970(lVar1);
      }
    }
    if ((*(uint *)(param_1 + 0x1b8) & 0x200) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x140);
      if (plVar2 != (longlong *)0x0) {
        if ((plVar2[1] == 0) && (*plVar2 != 0)) {
          FUN_143dc60c0(param_1 + 0x140);
        }
        lVar1 = *(longlong *)(param_1 + 0x140);
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != *(longlong *)(lVar1 + 0x10))) {
          FUN_143dcdd70(param_1);
          return 0;
        }
      }
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffdff;
      if ((*(uint *)(param_1 + 0x1b8) & 0x100) == 0) {
        uVar5 = 0;
        uVar4 = 9;
      }
      else {
        uVar4 = 0;
        uVar5 = 9;
      }
      iVar3 = FUN_143dcd530(param_1,uVar4,uVar5);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}



// FUNCTION 143dc5a70 FUN_143dc5a70 body=220 status=ok
// SIG undefined FUN_143dc5a70(void)

void FUN_143dc5a70(longlong param_1,int param_2,undefined2 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  __time64_t local_res8;
  
  lVar2 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  _time64(&local_res8);
  *(__time64_t *)(param_1 + 0x198) = local_res8;
  *(undefined2 *)(param_1 + 0x1c2) = param_3;
  *(char *)(param_1 + 0x1c6) = (char)param_2;
  if (param_2 == 0) {
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
        **(longlong **)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xb8);
      }
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8) = *(undefined8 *)(param_1 + 0xc0);
      }
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
  }
  else {
    plVar3 = (longlong *)(param_1 + 0xb8);
    if (*plVar3 == 0) {
      puVar1 = *(undefined8 **)(lVar2 + 0xb8);
      *(undefined8 **)(param_1 + 0xc0) = puVar1;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = plVar3;
      }
      *plVar3 = lVar2 + 0xb0;
      *(longlong **)(lVar2 + 0xb8) = plVar3;
    }
  }
  return;
}



// FUNCTION 143dc5b50 Curl_pp_sendf body=34 status=ok
// SIG undefined Curl_pp_sendf(void)

void Curl_pp_sendf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_143dc5b80(param_1,param_2,&local_res18);
  return;
}



// FUNCTION 143dc5b80 FUN_143dc5b80 body=179 status=ok
// SIG undefined FUN_143dc5b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc5b80(uint param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong *puVar2;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if ((_DAT_146838290 & param_1) == 0) {
    return;
  }
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  local_138 = 0;
  local_130 = param_3;
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,local_128,0xff,param_2);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (iVar1 < 0x100) {
    if (iVar1 < 1) goto LAB_143dc5c06;
  }
  else {
    iVar1 = 0xff;
  }
  if (0xff < (ulonglong)(longlong)iVar1) {
                    /* WARNING: Subroutine does not return */
    __report_rangecheckfailure();
  }
  local_128[iVar1] = 0;
LAB_143dc5c06:
  (*(code *)PTR_FUN_146838298)(param_1,local_128);
  return;
}



// FUNCTION 143dc5c40 FUN_143dc5c40 body=36 status=ok
// SIG undefined FUN_143dc5c40(void)

ulonglong FUN_143dc5c40(int param_1)

{
  if ((byte)((char)param_1 - 0x30U) < 10) {
    return (ulonglong)(param_1 - 0x30);
  }
  if ((byte)((char)param_1 + 0x9fU) < 6) {
    return (ulonglong)(param_1 - 0x57);
  }
  if ((byte)(param_1 + -0x41) < 6) {
    return (ulonglong)(param_1 - 0x37);
  }
  return CONCAT71((uint7)(uint3)((uint)(param_1 + -0x41) >> 8),0xff);
}



// FUNCTION 143dc5c70 FUN_143dc5c70 body=524 status=ok
// SIG undefined FUN_143dc5c70(void)

undefined8 FUN_143dc5c70(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  longlong *plVar7;
  
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x170);
  if ((*(longlong *)(param_1 + 0xa0) != 0) && (0x7fffffff < *(uint *)(param_1 + 0x1b8))) {
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
              (param_1,0x32,*(undefined8 *)(param_1 + 0x130),0,0);
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0x7fffffff;
  }
  if ((*(byte *)(param_1 + 0x1b8) & 0x40) == 0) {
    thunk_FUN_143dd4bc0(*(undefined8 *)(param_1 + 0x130),0,&DAT_145dbcdec);
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  FUN_143dcdf20(param_1);
  *(longlong **)(param_1 + 0xa0) = param_2;
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  iVar5 = FUN_143dc6320(param_1);
  if (iVar5 == 0) {
    if ((plVar3 < param_2) &&
       (param_2 < plVar3 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x230) * 7)) {
      FUN_143dcde20(param_1,((longlong)param_2 - (longlong)plVar3) / 0x38);
    }
    else {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x230);
      if (iVar5 != 0) {
        pcVar4 = (char *)*param_2;
        plVar7 = plVar3;
        do {
          iVar5 = iVar5 + -1;
          if ((pcVar4 != (char *)0x0) && (*plVar7 != 0)) {
            pcVar6 = pcVar4;
            do {
              cVar1 = *pcVar6;
              cVar2 = pcVar6[*plVar7 - (longlong)pcVar4];
              if (cVar1 != cVar2) break;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) {
              FUN_143dcde20(param_1,((longlong)plVar7 - (longlong)plVar3) / 0x38);
              goto LAB_143dc5e0c;
            }
          }
          plVar7 = plVar7 + 7;
        } while (iVar5 != 0);
      }
      Curl_pp_sendf(1,"%s: %p is not in vhost \'%s\' protocols list\n","lws_bind_protocol",param_2,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x160));
    }
LAB_143dc5e0c:
    iVar5 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                      (param_1,0x31,*(undefined8 *)(param_1 + 0x130),0,0);
    if (iVar5 == 0) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80000000;
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143dc5e80 FUN_143dc5e80 body=242 status=ok
// SIG undefined FUN_143dc5e80(void)

undefined4 FUN_143dc5e80(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_1e8 [120];
  longlong local_170;
  longlong local_168;
  undefined8 *local_148;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  uVar4 = 0;
  _guard_xfg_dispatch_icall_nop(local_1e8,0,0x1d0);
  local_170 = param_1;
  for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x150)) {
    iVar5 = 0;
    if (0 < *(int *)(lVar1 + 0x230)) {
      puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 0x170) + 8);
      local_168 = lVar1;
      do {
        local_148 = puVar3 + -1;
        if (((code *)*puVar3 != (code *)0x0) &&
           (iVar2 = (*(code *)*puVar3)(local_1e8,param_2,0,param_3,param_4), iVar2 != 0)) {
          uVar4 = 1;
        }
        puVar3 = puVar3 + 7;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0x230));
    }
  }
  return uVar4;
}



// FUNCTION 143dc5f80 FUN_143dc5f80 body=227 status=ok
// SIG undefined FUN_143dc5f80(void)

ulonglong FUN_143dc5f80(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  
  lVar1 = *param_1;
  uVar4 = (ulonglong)(lVar1 == 0);
  iVar5 = 0x400;
  while( true ) {
    if (lVar1 == 0) {
      puVar3 = (undefined8 *)thunk_FUN_143dd4bc0(0,param_3 + 0x20,"lws_buflist_append_segment");
      if (puVar3 == (undefined8 *)0x0) {
        Curl_pp_sendf(1,"%s: OOM\n","lws_buflist_append_segment");
        uVar4 = 0xffffffff;
      }
      else {
        puVar3[1] = param_3;
        puVar3[2] = 0;
        *puVar3 = 0;
        _guard_xfg_dispatch_icall_nop(puVar3 + 3,param_2,param_3);
        *param_1 = (longlong)puVar3;
      }
      return uVar4;
    }
    iVar5 = iVar5 + -1;
    if ((iVar5 == 0) || (plVar2 = (longlong *)*param_1, param_1 == plVar2)) break;
    lVar1 = *plVar2;
    param_1 = plVar2;
  }
  Curl_pp_sendf(1,"%s: corrupt list points to self\n","lws_buflist_append_segment");
  return 0xffffffff;
}



// FUNCTION 143dc6070 FUN_143dc6070 body=79 status=ok
// SIG undefined FUN_143dc6070(void)

void FUN_143dc6070(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = 0;
    thunk_FUN_143dd4bc0(puVar2,0,"lws_free");
    puVar2 = puVar1;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 143dc60c0 FUN_143dc60c0 body=60 status=ok
// SIG undefined FUN_143dc60c0(void)

bool FUN_143dc60c0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  *param_1 = *plVar1;
  *plVar1 = 0;
  thunk_FUN_143dd4bc0(plVar1,0,"lws_free");
  return *param_1 == 0;
}



// FUNCTION 143dc6100 FUN_143dc6100 body=136 status=ok
// SIG undefined FUN_143dc6100(void)

longlong FUN_143dc6100(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    if (param_2 != (longlong *)0x0) {
      *param_2 = 0;
    }
    return 0;
  }
  if ((plVar1[1] == 0) && (*plVar1 != 0)) {
    FUN_143dc60c0();
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    if (param_2 != (longlong *)0x0) {
      *param_2 = 0;
    }
    return 0;
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = lVar2 + 0x18 + *(longlong *)(lVar2 + 0x10);
  }
  return *(longlong *)(*param_1 + 8) - *(longlong *)(*param_1 + 0x10);
}



// FUNCTION 143dc6190 FUN_143dc6190 body=84 status=ok
// SIG undefined FUN_143dc6190(void)

int FUN_143dc6190(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(longlong *)(*param_1 + 0x10) = *(longlong *)(*param_1 + 0x10) + param_2;
  plVar1 = (longlong *)*param_1;
  if (plVar1[2] == plVar1[1]) {
    *param_1 = *plVar1;
    *plVar1 = 0;
    thunk_FUN_143dd4bc0(plVar1,0,"lws_free");
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0;
  }
  return *(int *)(lVar2 + 8) - *(int *)(lVar2 + 0x10);
}



// FUNCTION 143dc61f0 FUN_143dc61f0 body=165 status=ok
// SIG undefined FUN_143dc61f0(void)

undefined8 FUN_143dc61f0(byte *param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  while( true ) {
    while( true ) {
      if (param_3 == 0) {
        *param_1 = bVar2;
        return 0;
      }
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      if (bVar2 != 0) break;
      bVar2 = 0;
      if (0x7f < bVar1) {
        if (0x32 < (byte)(bVar1 + 0x3e)) {
          return 1;
        }
        if (bVar1 < 0xe0) {
          bVar2 = 0x8c;
        }
        else {
          bVar2 = (&DAT_145dbcd18)[(int)(bVar1 - 0xe0)];
        }
      }
    }
    if (bVar1 < (bVar2 & 0xf0)) break;
    if ((bVar2 & 0xf0) + (bVar2 & 0xc) * 4 + 0x10 <= (uint)bVar1) {
      return 1;
    }
    bVar2 = (&DAT_145dbcd2d)[bVar2 & 3];
  }
  return 1;
}



// FUNCTION 143dc62a0 thunk_FUN_143dc4f60 body=5 status=ok
// SIG undefined thunk_FUN_143dc4f60(void)

void thunk_FUN_143dc4f60(longlong param_1,int param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    freeaddrinfo();
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x1c7);
  lVar9 = *(longlong *)(param_1 + 0x78);
  thunk_FUN_143dd4bc0(*(undefined8 *)(param_1 + 0xf8),0,&DAT_145dbcdec);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    if (*(longlong **)(param_1 + 0x108) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0x108) = *(longlong *)(param_1 + 0x100);
    }
    if (*(longlong *)(param_1 + 0x100) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 8) = *(undefined8 *)(param_1 + 0x108);
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x118);
    while (lVar10 != 0) {
      lVar4 = *(longlong *)(lVar10 + 8);
      FUN_143dc4f60(lVar10 + -0x120,0xffffffff,"trans q leader closing");
      lVar10 = lVar4;
    }
    if (*(longlong *)(param_1 + 0x120) != 0) {
      if (*(longlong **)(param_1 + 0x128) != (longlong *)0x0) {
        **(longlong **)(param_1 + 0x128) = *(longlong *)(param_1 + 0x120);
      }
      if (*(longlong *)(param_1 + 0x120) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 8) = *(undefined8 *)(param_1 + 0x128);
      }
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    do {
      lVar4 = *(longlong *)(lVar10 + 0x98);
      *(uint *)(lVar10 + 0x1b8) = *(uint *)(lVar10 + 0x1b8) | 0x80;
      *(undefined8 *)(lVar10 + 0x88) = 0;
      FUN_143dc4f60(lVar10,param_2,"general child recurse");
      lVar10 = lVar4;
    } while (lVar4 != 0);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(undefined ***)(param_1 + 0x68) == &PTR_s_raw_file_146838450) {
    FUN_143dc68e0();
    FUN_143dcd650(param_1);
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
              (param_1,*(undefined2 *)(*(longlong *)(param_1 + 0x68) + 0xa4),
               *(undefined8 *)(param_1 + 0x130),0,0);
    goto LAB_143dc55d1;
  }
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
  FUN_143dcbf50(param_1);
  if (*(undefined ***)(param_1 + 0x68) == &PTR_s_raw_skt_1468383a0) {
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
  }
  else {
    if (((*(undefined ***)(param_1 + 0x68) == &PTR_DAT_146838500) &&
        ((*(uint *)(param_1 + 0x70) & 0x20000000) != 0)) && (*(longlong *)(param_1 + 0x28) != 0)) {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8))();
    }
    uVar7 = *(uint *)(param_1 + 0x70) & 0xffff;
    if (uVar7 == 0x1e) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1b8);
    if (((-1 < (char)uVar3) && (param_2 != 9999)) && (uVar7 != 0x1d)) {
      uVar6 = *(uint *)(param_1 + 0x74) & 0xffff;
      if (uVar6 == 0x1e) {
        return;
      }
      if (uVar6 < 0x119) {
LAB_143dc5208:
        if (*(int *)(param_1 + 0x1ac) != 0) {
          *(undefined2 *)(param_1 + 0x70) = 0x11c;
          FUN_143dc5a70(param_1,0xc,5);
          return;
        }
        if ((uVar7 != 0x201) && (uVar7 != 0x11)) {
          if (((uVar3 >> 0x12 & 1) == 0) &&
             ((((*(undefined ***)(param_1 + 0x68) == &PTR_DAT_146838500 &&
                ((*(uint *)(param_1 + 0x70) >> 0x1d & 1) != 0)) &&
               (*(longlong *)(param_1 + 0x130) != 0)) &&
              ((*(longlong *)(param_1 + 0xa0) != 0 && (0x7fffffff < uVar3)))))) {
            (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                      (param_1,0x32,*(longlong *)(param_1 + 0x130),0,0);
            *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0x7fffffff;
          }
          pcVar5 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x80);
          if ((pcVar5 != (code *)0x0) && (iVar8 = (*pcVar5)(param_1,param_2), iVar8 != 0)) {
            return;
          }
        }
      }
      else if (0x11b < uVar6) {
        if (uVar6 != 0x11c) goto LAB_143dc5208;
        if (*(int *)(param_1 + 0x1ac) != 0) {
          FUN_143dcdd70(param_1);
          return;
        }
      }
    }
  }
  pcVar5 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x90);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(param_1,param_2);
  }
  FUN_143dc68e0(param_1);
  if ((((*(uint *)(param_1 + 0x1b8) >> 0x12 & 1) == 0) && (*(longlong *)(param_1 + 0x130) != 0)) &&
     (0x7fffffff < *(uint *)(param_1 + 0x1b8))) {
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
              (param_1,0x32,*(longlong *)(param_1 + 0x130),0,0);
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0x7fffffff;
  }
  uVar7 = *(uint *)(param_1 + 0x70) & 0xffff;
  if (((uVar7 == 0x20a) || (uVar7 == 0x201)) && ((*(uint *)(param_1 + 0x1b8) & 0x20000) == 0)) {
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))(param_1,1,*(undefined8 *)(param_1 + 0x130),0,0)
    ;
  }
  if (((*(undefined ***)(param_1 + 0x68) != &PTR_s_raw_skt_1468383a0) &&
      ((*(uint *)(param_1 + 0x70) >> 0x1c & 1) == 0)) &&
     ((uVar7 = *(uint *)(param_1 + 0x70) & 0xffff, uVar7 != 0x1d &&
      (((uVar7 != 0x200 && (param_2 != 9999)) && (-1 < (char)*(uint *)(param_1 + 0x1b8))))))) {
    if (((*(byte *)(param_1 + 0x170) & 1) == 0) || (*(longlong *)(param_1 + 0x150) == 0)) {
      if (*(longlong *)(param_1 + 0x178) != -1) {
        *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
        Ordinal_22(*(longlong *)(param_1 + 0x178),1);
      }
    }
    else {
      FUN_143dd3780(param_1);
    }
    if ((((*(byte *)(param_1 + 0x1b8) & 0x80) == 0) && (*(longlong *)(param_1 + 0x178) != -1)) &&
       ((*(short *)(param_1 + 0x70) != 0x1d &&
        ((*(byte *)(*(longlong *)(lVar9 + 0x3d0) + 0x70) & 1) != 0)))) {
      FUN_143dcd530(param_1,2,9);
      *(undefined2 *)(param_1 + 0x70) = 0x1d;
      FUN_143dc5a70(param_1,0xd,*(undefined4 *)(lVar9 + 0x4b8));
      return;
    }
  }
  FUN_143dd42f0(param_1);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xb8);
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8) = *(undefined8 *)(param_1 + 0xc0);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xd0) = *(longlong *)(param_1 + 200);
    }
    if (*(longlong *)(param_1 + 200) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 200) + 8) = *(undefined8 *)(param_1 + 0xd0);
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if ((*(uint *)(param_1 + 0x1b8) & 0x80000) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x178) == -1) {
    FUN_143dcdf20(param_1);
  }
  else {
    FUN_143dcd650();
  }
  *(undefined2 *)(param_1 + 0x70) = 0x1e;
  FUN_143dc6070(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xd8);
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 8) = *(undefined8 *)(param_1 + 0xe0);
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  pcVar5 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x88);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(lVar9 + 0xa0 + (longlong)cVar1 * 0xa8,param_1);
  }
  if (((*(uint *)(param_1 + 0x74) & 0x200) == 0) && ((*(uint *)(param_1 + 0x1b8) >> 0x12 & 1) == 0))
  {
    sVar2 = *(short *)(*(longlong *)(param_1 + 0x68) + 0xa4 +
                      (ulonglong)(*(uint *)(param_1 + 0x70) >> 0x1d & 1) * 2);
    if (sVar2 != 0) {
      lVar9 = *(longlong *)(param_1 + 0xa0);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170);
      }
      if (((*(uint *)(param_1 + 0x1b8) & 4) == 0) || ((*(uint *)(param_1 + 0x70) >> 0x1c & 1) == 0))
      {
        (**(code **)(lVar9 + 8))(param_1,sVar2,*(undefined8 *)(param_1 + 0x130),0,0);
      }
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x40000;
    }
  }
LAB_143dc55d1:
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
  pcVar5 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x3d0) + 0x30);
  if ((pcVar5 == (code *)0x0) || (iVar8 = (*pcVar5)(param_1), iVar8 == 0)) {
    FUN_143dc5620(param_1);
  }
  return;
}



// FUNCTION 143dc62b0 FUN_143dc62b0 body=28 status=ok
// SIG undefined FUN_143dc62b0(void)

ulonglong FUN_143dc62b0(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_2 < *(longlong *)(param_1 + 0x18)) {
    param_2 = param_2 + *(longlong *)(param_1 + 0x20);
  }
  if (param_3 < *(longlong *)(param_1 + 0x18)) {
    param_3 = param_3 + *(longlong *)(param_1 + 0x20);
  }
  return param_2 - param_3 & 0xffffffff;
}



// FUNCTION 143dc62d0 FUN_143dc62d0 body=30 status=ok
// SIG undefined FUN_143dc62d0(void)

void FUN_143dc62d0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 == 0) {
    puVar1 = *(undefined8 **)(param_2 + 8);
    param_1[1] = (longlong)puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
    }
    *param_1 = param_2;
    *(longlong **)(param_2 + 8) = param_1;
  }
  return;
}



// FUNCTION 143dc62f0 FUN_143dc62f0 body=46 status=ok
// SIG undefined FUN_143dc62f0(void)

void FUN_143dc62f0(longlong *param_1)

{
  if (*param_1 != 0) {
    if ((longlong *)param_1[1] != (longlong *)0x0) {
      *(longlong *)param_1[1] = *param_1;
    }
    if (*param_1 != 0) {
      *(longlong *)(*param_1 + 8) = param_1[1];
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 143dc6320 FUN_143dc6320 body=105 status=ok
// SIG undefined FUN_143dc6320(void)

undefined8 FUN_143dc6320(longlong param_1)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_1 + 0xa0) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10), lVar1 != 0)) &&
     (*(longlong *)(param_1 + 0x130) == 0)) {
    lVar1 = FUN_143dd4c00(lVar1,"user space");
    *(longlong *)(param_1 + 0x130) = lVar1;
    if (lVar1 == 0) {
      Curl_pp_sendf(1,"%s: OOM\n","lws_ensure_user_space");
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143dc6390 FUN_143dc6390 body=96 status=ok
// SIG undefined FUN_143dc6390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dc6390(longlong param_1)

{
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [92];
  undefined4 local_17c;
  undefined4 local_178;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_178 = *(undefined4 *)(param_1 + 0x49c);
  local_17c = *(undefined4 *)(param_1 + 0x4a0);
  if ((*(uint *)(param_1 + 0x4b0) & 0x2000) != 0) {
    FUN_140447710(local_1d8);
  }
  return 0;
}



// FUNCTION 143dc63f0 FUN_143dc63f0 body=413 status=ok
// SIG undefined FUN_143dc63f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_143dc63f0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  short *psVar5;
  int iVar6;
  void *_Memory;
  char *pcVar7;
  void *pvVar8;
  uint uVar9;
  longlong lVar10;
  void *pvVar11;
  void *pvVar12;
  undefined1 auStack_478 [32];
  uint *local_458;
  uint local_448 [4];
  char local_438 [1040];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  pvVar11 = (void *)0x0;
  local_448[0] = 0;
  _Memory = pvVar11;
  pvVar8 = pvVar11;
  do {
    local_458 = local_448;
    iVar6 = _guard_xfg_dispatch_icall_nop(0x17,0x10,0,_Memory);
    if (iVar6 == 0) {
      pvVar8 = _Memory;
      pvVar12 = pvVar11;
      if (_Memory == (void *)0x0) {
        return (void *)0x0;
      }
      goto LAB_143dc64d7;
    }
    if (iVar6 == 0xe8) break;
    if (iVar6 != 0x6f) {
      if (_Memory != (void *)0x0) {
        free(_Memory);
        _Memory = pvVar11;
      }
      Curl_pp_sendf(1,"Failed to get IPv6 address table (%d)",iVar6);
      break;
    }
    if (_Memory != (void *)0x0) {
      free(_Memory);
    }
    _Memory = malloc((ulonglong)local_448[0]);
    uVar9 = (int)pvVar8 + 1;
    pvVar8 = (void *)(ulonglong)uVar9;
  } while (uVar9 < 5);
  goto LAB_143dc654e;
LAB_143dc64d7:
  do {
    if ((int)pvVar12 != 0) break;
    for (lVar4 = *(longlong *)((longlong)pvVar8 + 0x18); lVar4 != 0;
        lVar4 = *(longlong *)(lVar4 + 8)) {
      psVar5 = *(short **)(lVar4 + 0x10);
      if (*psVar5 == 0x17) {
        FUN_143dd2cc0(*psVar5,psVar5 + 4,local_438,0x401);
        pcVar7 = local_438;
        lVar10 = param_1 - (longlong)pcVar7;
        do {
          cVar2 = *pcVar7;
          cVar3 = pcVar7[lVar10];
          if (cVar2 != cVar3) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        if (cVar2 == cVar3) {
          pvVar11 = (void *)(ulonglong)*(uint *)(psVar5 + 0xc);
          pvVar12 = (void *)0x1;
          break;
        }
      }
    }
    plVar1 = (longlong *)((longlong)pvVar8 + 8);
    pvVar8 = (void *)*plVar1;
  } while ((void *)*plVar1 != (void *)0x0);
LAB_143dc654e:
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  return pvVar11;
}



// FUNCTION 143dc6590 FUN_143dc6590 body=260 status=ok
// SIG undefined FUN_143dc6590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dc6590(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  int local_68 [2];
  undefined1 local_60 [4];
  undefined1 local_5c [12];
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar6 = 2;
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1;
  }
  if ((*(uint *)(lVar8 + 0x1b8) & 0x800000) != 0) {
    lVar8 = *(longlong *)(lVar8 + 0x88);
  }
  if (((*(byte *)(*(longlong *)(*(longlong *)(lVar8 + 0x80) + 0x148) + 0x4b0) & 0x20) == 0) &&
     ((*(byte *)(*(longlong *)(lVar8 + 0x80) + 0x22c) & 0x20) == 0)) {
    iVar2 = 0x1c;
    puVar5 = local_50;
    puVar7 = local_48;
    uVar6 = 0x17;
  }
  else {
    iVar2 = 0x10;
    puVar5 = local_60;
    puVar7 = local_5c;
  }
  local_68[0] = iVar2;
  iVar1 = Ordinal_5(*(undefined8 *)(lVar8 + 0x178),puVar5,local_68);
  if ((iVar1 < 0) || (iVar2 < local_68[0])) {
    iVar2 = Ordinal_111();
    pcVar4 = strerror(iVar2);
    Curl_pp_sendf(2,"getpeername: %s\n",pcVar4);
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143dd2cc0(uVar6,puVar7,param_2,param_3);
  }
  return uVar3;
}



// FUNCTION 143dc66a0 FUN_143dc66a0 body=10 status=ok
// SIG undefined FUN_143dc66a0(void)

uint FUN_143dc66a0(longlong param_1)

{
  return *(uint *)(param_1 + 0x170) & 1;
}



// FUNCTION 143dc66b0 FUN_143dc66b0 body=25 status=ok
// SIG undefined FUN_143dc66b0(void)

undefined4 FUN_143dc66b0(void)

{
  undefined4 local_res8 [8];
  
  FUN_143dd4b00(local_res8,0);
  return local_res8[0];
}



// FUNCTION 143dc66d0 FUN_143dc66d0 body=79 status=ok
// SIG undefined FUN_143dc66d0(void)

int FUN_143dc66d0(char *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 >> 8 & 1) != 0) {
    iVar1 = _open(param_1,param_2);
    FUN_140447710(iVar1);
    return iVar1;
  }
  iVar1 = _open(param_1,param_2);
  FUN_140447710(iVar1);
  return iVar1;
}



// FUNCTION 143dc6720 FUN_143dc6720 body=419 status=ok
// SIG undefined FUN_143dc6720(void)

undefined8
FUN_143dc6720(char *param_1,undefined8 *param_2,longlong *param_3,int *param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  
  *param_2 = param_1;
  pcVar6 = param_1;
  if (*param_1 == '\0') {
LAB_143dc6767:
    *param_2 = pcVar6;
  }
  else {
    do {
      if (((*pcVar6 == ':') && (pcVar6[1] == '/')) && (pcVar6[2] == '/')) break;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    if (*pcVar6 == '\0') goto LAB_143dc6767;
    *pcVar6 = '\0';
    param_1 = pcVar6 + 3;
  }
  *param_3 = (longlong)param_1;
  pcVar6 = (char *)*param_2;
  lVar3 = 0;
  lVar4 = lVar3;
  do {
    lVar5 = lVar4 + 1;
    if (pcVar6[lVar4] != (&DAT_145b6766c)[lVar4]) {
      lVar4 = lVar3;
      if (((*pcVar6 != 'w') || (pcVar6[1] != 's')) || (pcVar6[2] != '\0')) goto LAB_143dc67e0;
      *param_4 = 0x50;
      goto LAB_143dc681a;
    }
    lVar4 = lVar5;
  } while (lVar5 != 5);
  *param_4 = 0x50;
  goto LAB_143dc681a;
  while (lVar4 = lVar5, lVar5 != 6) {
LAB_143dc67e0:
    lVar5 = lVar4 + 1;
    if (pcVar6[lVar4] != (&DAT_145b67674)[lVar4]) goto LAB_143dc6800;
  }
  goto LAB_143dc6814;
  while (lVar3 = lVar4, lVar4 != 4) {
LAB_143dc6800:
    lVar4 = lVar3 + 1;
    if (pcVar6[lVar3] != (&DAT_145dbd06c)[lVar3]) goto LAB_143dc681a;
  }
LAB_143dc6814:
  *param_4 = 0x1bb;
LAB_143dc681a:
  cVar1 = *param_1;
  if (cVar1 == '[') {
    *param_3 = *param_3 + 1;
    if (*param_1 != '\0') {
      do {
        if (*param_1 == ']') break;
        param_1 = param_1 + 1;
      } while (*param_1 != '\0');
      if (*param_1 != '\0') {
        *param_1 = '\0';
        param_1 = param_1 + 1;
      }
    }
  }
  else {
    while (((cVar1 != '\0' && (cVar1 != ':')) && (cVar1 != '/'))) {
      pcVar6 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar1 = *pcVar6;
    }
  }
  if (*param_1 == ':') {
    *param_1 = '\0';
    param_1 = param_1 + 1;
    iVar2 = atoi(param_1);
    *param_4 = iVar2;
    cVar1 = *param_1;
    while ((cVar1 != '\0' && (cVar1 != '/'))) {
      pcVar6 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar1 = *pcVar6;
    }
  }
  *param_5 = PTR_DAT_1468382a0;
  if (*param_1 != '\0') {
    *param_1 = '\0';
    pcVar6 = (char *)*param_5;
    if (param_1[1] != '\0') {
      pcVar6 = param_1 + 1;
    }
    *param_5 = pcVar6;
  }
  return 0;
}



// FUNCTION 143dc68d0 FUN_143dc68d0 body=12 status=ok
// SIG undefined FUN_143dc68d0(void)

bool FUN_143dc68d0(longlong param_1)

{
  return *(int *)(param_1 + 0x1ac) != 0;
}



// FUNCTION 143dc68e0 FUN_143dc68e0 body=157 status=ok
// SIG undefined FUN_143dc68e0(void)

void FUN_143dc68e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x90);
    lVar3 = *plVar1;
    while (lVar3 != 0) {
      if (*plVar1 == param_1) {
        if (*(longlong *)(lVar2 + 0xa0) != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0xa0) + 8))
                    (param_1,0x45,*(undefined8 *)(lVar2 + 0x130),param_1,0);
        }
        *plVar1 = *(longlong *)(param_1 + 0x98);
        goto LAB_143dc6934;
      }
      plVar1 = (longlong *)(*plVar1 + 0x98);
      lVar3 = *plVar1;
    }
    Curl_pp_sendf(1,"%s: failed to detach from parent\n","lws_remove_child_from_any_parent");
LAB_143dc6934:
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}



// FUNCTION 143dc6980 FUN_143dc6980 body=67 status=ok
// SIG undefined FUN_143dc6980(void)

void FUN_143dc6980(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xb8);
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8) = *(undefined8 *)(param_1 + 0xc0);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 143dc69d0 FUN_143dc69d0 body=16 status=ok
// SIG undefined FUN_143dc69d0(void)

void FUN_143dc69d0(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  *(uint *)(param_1 + 0x70) = param_2 | param_3;
  if (param_4 != 0) {
    *(longlong *)(param_1 + 0x68) = param_4;
  }
  return;
}



// FUNCTION 143dc69e0 FUN_143dc69e0 body=178 status=ok
// SIG undefined FUN_143dc69e0(void)

undefined8 FUN_143dc69e0(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (((*(byte *)(param_1 + 0x1b8) & 2) == 0) &&
     ((*(uint *)(param_1 + 0x70) & 0xf000000) != 0x1000000)) {
    uVar3 = param_2;
    if (((param_2 >> 0xe & 1) == 0) && (uVar3 = 0x4001, (param_2 & 1) != 0)) {
      uVar3 = 0x6001;
    }
    if ((uVar3 >> 0xd & 1) == 0) {
      *(byte *)(param_1 + 0x1ca) = *(byte *)(param_1 + 0x1ca) | (byte)uVar3;
    }
    else {
      *(byte *)(param_1 + 0x1ca) = *(byte *)(param_1 + 0x1ca) & ~(byte)uVar3;
    }
    uVar3 = *(uint *)(param_1 + 0x1b8);
    if (3 - (*(char *)(param_1 + 0x1ca) != '\0') != (uVar3 >> 8 & 3)) {
      uVar1 = 0x200;
      if (*(char *)(param_1 + 0x1ca) == '\0') {
        uVar1 = 0x300;
      }
      *(uint *)(param_1 + 0x1b8) = uVar1 | uVar3 & 0xfffffeff;
      if (((param_2 >> 0xc & 1) != 0) || ((uVar3 >> 0x1b & 1) == 0)) {
        uVar2 = FUN_143dc5970(param_1);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 143dc6aa0 FUN_143dc6aa0 body=28 status=ok
// SIG undefined FUN_143dc6aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc6aa0(undefined4 param_1,undefined *param_2)

{
  _DAT_146838290 = param_1;
  if (param_2 != (undefined *)0x0) {
    PTR_FUN_146838298 = param_2;
  }
  return;
}



// FUNCTION 143dc6ac0 FUN_143dc6ac0 body=371 status=ok
// SIG undefined FUN_143dc6ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dc6ac0(undefined1 *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_a8 [32];
  char local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (param_2 == (char *)0x0) {
    return 0xffffffff;
  }
  iVar1 = strncmp(param_2,"http://",7);
  if (iVar1 == 0) {
    param_2 = param_2 + 7;
  }
  pcVar2 = strrchr(param_2,0x40);
  if (pcVar2 == (char *)0x0) {
    *param_1 = 0;
LAB_143dc6b9c:
    strncpy(param_1 + 0x80,param_2,0x7f);
    param_1[0xff] = 0;
    pcVar2 = strchr(param_1 + 0x80,0x3a);
    if (pcVar2 == (char *)0x0) {
      if (*(int *)(param_1 + 0x110) == 0) {
        Curl_pp_sendf(1,"http_proxy needs to be ads:port\n");
        return 0xffffffff;
      }
    }
    else {
      *pcVar2 = '\0';
      iVar1 = atoi(pcVar2 + 1);
      *(int *)(param_1 + 0x110) = iVar1;
    }
    uVar3 = 0;
  }
  else {
    uVar4 = (int)pcVar2 - (int)param_2;
    if (uVar4 < 0x60) {
      strncpy(local_88,param_2,(longlong)pcVar2 - (longlong)param_2);
      local_88[(longlong)pcVar2 - (longlong)param_2] = '\0';
      iVar1 = FUN_143dd36f0(local_88,uVar4,param_1,0x80);
      if (-1 < iVar1) {
        param_2 = pcVar2 + 1;
        goto LAB_143dc6b9c;
      }
    }
    Curl_pp_sendf(1,"proxy auth too long\n");
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143dc6c40 FUN_143dc6c40 body=104 status=ok
// SIG undefined FUN_143dc6c40(void)

void FUN_143dc6c40(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == -2) {
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
        **(longlong **)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xb8);
      }
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8) = *(undefined8 *)(param_1 + 0xc0);
      }
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    FUN_143dc4f60(param_1,0,"to sync kill");
    return;
  }
  iVar1 = 0;
  if (param_3 != -1) {
    iVar1 = param_3;
  }
  FUN_143dc5a70(param_1,param_2,iVar1);
  return;
}



// FUNCTION 143dc6cb0 FUN_143dc6cb0 body=118 status=ok
// SIG undefined FUN_143dc6cb0(void)

ulonglong FUN_143dc6cb0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 local_res20;
  
  if (param_2 == 0) {
    return 0;
  }
  local_res20 = param_4;
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  uVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,param_2,param_3,0,&local_res20);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  uVar3 = (ulonglong)uVar1;
  if ((int)param_2 <= (int)uVar1) {
    uVar3 = param_2 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143dc6d30 FUN_143dc6d30 body=519 status=ok
// SIG undefined FUN_143dc6d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143dc6d30(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_128 [32];
  int local_108;
  undefined4 local_100;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [2];
  undefined2 local_b6;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_f8[0] = 0x80;
  lVar1 = *(longlong *)(param_1 + 0x148);
  if (((*(byte *)(lVar1 + 0x4b0) & 0x20) == 0) && ((*(byte *)(param_1 + 0x22c) & 0x20) == 0)) {
    puVar8 = &local_e0;
    local_e0 = 0;
    uVar7 = 0x1c;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    if (param_4 != 0) {
      iVar4 = FUN_143dd29c0((byte)~*(byte *)(lVar1 + 0x4b0) >> 5 & 1,param_4,&local_e0,0x1c);
      if (iVar4 == -2) {
        return 0xfffffffe;
      }
      if (iVar4 == -1) {
        return 0xffffffff;
      }
      local_c8 = FUN_143dc63f0(param_4);
    }
    local_e0 = CONCAT62(local_e0._2_6_,0x17);
    uVar2 = Ordinal_9(param_3 & 0xffff);
    local_e0._0_4_ = CONCAT22(uVar2,(undefined2)local_e0);
  }
  else {
    uVar5 = 0;
    puVar8 = &local_f0;
    uVar7 = 0x10;
    local_f0 = 2;
    local_e8 = 0;
    if (param_4 != 0) {
      if (((*(byte *)(lVar1 + 0x4b0) & 0x20) == 0) && ((*(byte *)(param_1 + 0x22c) & 0x20) == 0)) {
        uVar5 = 1;
      }
      iVar4 = FUN_143dd29c0(uVar5,param_4,&local_f0,0x10);
      if (iVar4 == -2) {
        return 0xfffffffe;
      }
      if (iVar4 == -1) {
        return 0xffffffff;
      }
    }
    uVar2 = Ordinal_9(param_3 & 0xffff);
    local_f0._0_4_ = CONCAT22(uVar2,(undefined2)local_f0);
  }
  if (param_2 == -1) {
    return 0;
  }
  iVar4 = Ordinal_2(param_2,puVar8,uVar7);
  if (iVar4 < 0) {
    local_100 = Ordinal_111();
    local_108 = iVar4;
    Curl_pp_sendf(1,"ERROR on binding fd %d to port %d (%d %d)\n",param_2,param_3);
    return 0xffffffff;
  }
  iVar4 = Ordinal_6(param_2,local_b8,local_f8);
  if (iVar4 != -1) {
    uVar3 = Ordinal_15(local_b6);
    return (uint)uVar3;
  }
  iVar4 = Ordinal_111();
  pcVar6 = strerror(iVar4);
  Curl_pp_sendf(2,"getsockname: %s\n",pcVar6);
  return param_3;
}



// FUNCTION 143dc6f40 FUN_143dc6f40 body=44 status=ok
// SIG undefined FUN_143dc6f40(void)

char * FUN_143dc6f40(char *param_1,char *param_2,longlong param_3)

{
  strncpy(param_1,param_2,param_3 - 1);
  param_1[param_3 + -1] = '\0';
  return param_1;
}



// FUNCTION 143dc6f70 FUN_143dc6f70 body=77 status=ok
// SIG undefined FUN_143dc6f70(void)

undefined8 FUN_143dc6f70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x218);
  plVar3 = (longlong *)(param_1 + 0x218);
  while( true ) {
    if (lVar1 == 0) {
      return 1;
    }
    plVar2 = (longlong *)*plVar3;
    if (plVar2 == param_2) break;
    lVar1 = *plVar2;
    plVar3 = plVar2;
  }
  *plVar3 = *param_2;
  thunk_FUN_143dd4bc0(param_2,0,"lws_free");
  return 0;
}



// FUNCTION 143dc6fc0 FUN_143dc6fc0 body=234 status=ok
// SIG undefined FUN_143dc6fc0(void)

longlong FUN_143dc6fc0(longlong param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  int iVar5;
  size_t _MaxCount;
  
  *param_3 = 0;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return param_1;
  }
  pcVar4 = param_2;
  if (param_2 != (char *)0x0) {
    while (*pcVar4 != '\0') {
      if (*pcVar4 == '/') {
        for (lVar1 = *(longlong *)(param_1 + 0x58); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x58))
        {
          iVar5 = 0;
          puVar3 = (undefined8 *)(lVar1 + 0x28);
          do {
            if ((char *)*puVar3 == (char *)0x0) break;
            if ((param_2 + *(byte *)(puVar3 + 1) <= pcVar4) &&
               (_MaxCount = (size_t)(int)(*(byte *)(puVar3 + 1) - 1),
               iVar2 = strncmp(pcVar4 + -_MaxCount,(char *)*puVar3,_MaxCount), iVar2 == 0)) {
              *param_3 = (longlong)(pcVar4 + 1);
              return lVar1;
            }
            iVar5 = iVar5 + 1;
            puVar3 = puVar3 + 2;
          } while (iVar5 < 3);
        }
      }
      pcVar4 = pcVar4 + 1;
      if (pcVar4 == (char *)0x0) {
        return param_1;
      }
    }
  }
  return param_1;
}



// FUNCTION 143dc70b0 FUN_143dc70b0 body=146 status=ok
// SIG undefined FUN_143dc70b0(void)

longlong * FUN_143dc70b0(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x230)) {
    plVar5 = *(longlong **)(param_1 + 0x170);
    uVar6 = uVar4;
    do {
      pcVar3 = param_2;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[*plVar5 - (longlong)param_2];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return *(longlong **)(param_1 + 0x170) + (longlong)(int)uVar6 * 7;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 7;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x230));
  }
  return (longlong *)0x0;
}



// FUNCTION 143dc7150 FUN_143dc7150 body=250 status=ok
// SIG undefined FUN_143dc7150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143dc7150(uint param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  FILE *pFVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  iVar4 = 10;
  if (DAT_146838294 == 0) {
    iVar1 = _isatty(2);
    DAT_146838294 = (byte)iVar1 | 2;
  }
  FUN_143dc7420(param_1,local_48,0x32);
  if (DAT_146838294 == 3) {
    uVar2 = 0x400;
    do {
      if ((param_1 & uVar2) != 0) break;
      iVar4 = iVar4 + -1;
      uVar2 = (int)uVar2 >> 1;
    } while (uVar2 != 0);
    pFVar3 = (FILE *)__acrt_iob_func(2);
    local_58 = 0x1b;
    local_68 = local_48;
    local_60 = param_2;
    fwprintf(pFVar3,(wchar_t *)"%c%s%s%s%c[0m",0x1b,(&PTR_s__31_1m_145dbcd30)[iVar4]);
  }
  else {
    pFVar3 = (FILE *)__acrt_iob_func(2);
    fwprintf(pFVar3,L"猥猥",local_48,param_2);
  }
  return;
}



// FUNCTION 143dc7250 FUN_143dc7250 body=452 status=ok
// SIG undefined FUN_143dc7250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143dc7250(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  char local_88 [80];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if ((((_DAT_146838290 & (uint)param_1) != 0) && (param_3 != 0)) && (param_2 != 0)) {
    Curl_pp_sendf(param_1,&DAT_145af0af0);
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        iVar1 = sprintf(local_88,"%04X: ",uVar3);
        pcVar4 = local_88 + iVar1;
        uVar6 = 0;
        uVar8 = uVar3;
        do {
          if (param_3 <= uVar8) {
            if (uVar6 < 0x10) {
              uVar7 = (ulonglong)(0x10 - uVar6);
              do {
                iVar1 = sprintf(pcVar4,"   ");
                pcVar4 = pcVar4 + iVar1;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            break;
          }
          iVar1 = sprintf(pcVar4,"%02X ",(ulonglong)*(byte *)(uVar8 + param_2));
          uVar8 = (ulonglong)((int)uVar8 + 1);
          pcVar4 = pcVar4 + iVar1;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0x10);
        iVar1 = sprintf(pcVar4,"   ");
        uVar6 = 0;
        pcVar4 = pcVar4 + iVar1;
        do {
          if (param_3 <= uVar3) {
            pcVar5 = pcVar4;
            if (uVar6 < 0x10) {
              uVar3 = (ulonglong)(0x10 - uVar6);
              pcVar5 = pcVar4 + uVar3;
              for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                *pcVar4 = ' ';
                pcVar4 = pcVar4 + 1;
              }
            }
            break;
          }
          cVar2 = '.';
          if ((byte)(*(char *)(uVar3 + param_2) - 0x20U) < 0x5f) {
            cVar2 = *(char *)(uVar3 + param_2);
          }
          uVar6 = uVar6 + 1;
          *pcVar4 = cVar2;
          uVar3 = (ulonglong)((int)uVar3 + 1);
          pcVar5 = pcVar4 + 1;
          pcVar4 = pcVar5;
        } while (uVar6 < 0x10);
        pcVar5[0] = '\n';
        pcVar5[1] = '\0';
        Curl_pp_sendf(param_1 & 0xffffffff,&DAT_145afa01c,local_88);
        uVar3 = uVar8;
      } while (uVar8 < param_3);
    }
    Curl_pp_sendf(param_1 & 0xffffffff,&DAT_145af0af0);
  }
  return;
}



// FUNCTION 143dc7420 FUN_143dc7420 body=321 status=ok
// SIG undefined FUN_143dc7420(void)

undefined8 FUN_143dc7420(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 auVar1 [16];
  tm *ptVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  __time64_t local_res10;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  local_res10 = _time64((__time64_t *)0x0);
  ptVar2 = _localtime64(&local_res10);
  *param_2 = 0;
  iVar6 = 0;
  do {
    if (param_1 == 1 << ((byte)iVar6 & 0x1f)) {
      uVar3 = FUN_143dd3370();
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar3;
      lVar5 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
      uVar3 = (uVar3 - lVar5 >> 1) + lVar5 >> 6;
      if (ptVar2 != (tm *)0x0) {
        uVar4 = FUN_143dc6cb0(param_2,(longlong)param_3,"[%04d/%02d/%02d %02d:%02d:%02d:%04d] %s: ",
                              ptVar2->tm_year + 0x76c,ptVar2->tm_mon + 1,
                              CONCAT44(uVar7,ptVar2->tm_mday),ptVar2->tm_hour,ptVar2->tm_min,
                              ptVar2->tm_sec,(int)uVar3 + (int)(uVar3 / 10000) * -10000,
                              (&PTR_DAT_145dbccb0)[iVar6]);
        return uVar4;
      }
      uVar4 = FUN_143dc6cb0(param_2,(longlong)param_3,"[%llu:%04d] %s: ",uVar3 / 10000,
                            (int)uVar3 + (int)(uVar3 / 10000) * -10000,(&PTR_DAT_145dbccb0)[iVar6]);
      return uVar4;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xb);
  return 0;
}



// FUNCTION 143dc7570 FUN_143dc7570 body=91 status=ok
// SIG undefined FUN_143dc7570(void)

void FUN_143dc7570(code *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  *(uint *)(param_2 + 0x1b8) = *(uint *)(param_2 + 0x1b8) | 0x8000000;
  iVar1 = (*param_1)(param_2,param_3,param_4,param_5,param_6);
  *(uint *)(param_2 + 0x1b8) = *(uint *)(param_2 + 0x1b8) & 0xf7ffffff;
  if (iVar1 == 0) {
    FUN_143dc5970(param_2);
  }
  return;
}



// FUNCTION 143dc75d0 FUN_143dc75d0 body=841 status=ok
// SIG undefined FUN_143dc75d0(void)

int FUN_143dc75d0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 local_38;
  uint local_30;
  
  uVar3 = 0;
  cVar5 = '\0';
  if (*(longlong *)(param_2 + 0x60) == 0) {
    Curl_pp_sendf(1,"ws role wsi with no ws\n");
    return 1;
  }
  uVar1 = *(uint *)(param_2 + 0x70) & 0xffff;
  if (uVar1 == 0x209) {
    *(uint *)(param_2 + 0x1b8) = *(uint *)(param_2 + 0x1b8) | 0x80;
  }
  else {
    local_38 = 0;
    local_30 = 0;
    if (uVar1 != 0x201) {
      if ((((*(byte *)(param_3 + 10) & 2) != 0) && ((*(uint *)(param_2 + 0x70) >> 8 & 1) != 0)) &&
         (iVar2 = FUN_143dcc3a0(param_2,param_3), iVar2 != 0)) {
        if (*(short *)(param_2 + 0x70) == 0x11a) {
          *(undefined2 *)(param_2 + 0x70) = 0x11c;
        }
        return 5;
      }
      if (*(ushort *)(param_2 + 0x70) - 0x119 < 2) {
        FUN_143dc69e0(param_2,1);
      }
      if (*(char *)(param_2 + 0x1ca) != '\0') {
        return 4;
      }
      do {
        local_30 = FUN_143dc6100(param_2 + 0x140,&local_38);
        if (local_30 == 0) {
          if (((*(byte *)(param_3 + 8) & *(byte *)(param_3 + 10) & 9) == 0) &&
             (*(longlong *)(param_2 + 8) == 0)) {
            return 4;
          }
          if (*(char *)(param_2 + 0x1ca) != '\0') {
            return 4;
          }
          if (((*(uint *)(param_2 + 0x70) >> 0x1c & 1) == 0) ||
             ((uVar1 = (*(uint *)(param_2 + 0x70) & 0xffff) - 0x10e, uVar1 < 0xe &&
              ((0x2201U >> (uVar1 & 0x1f) & 1) != 0)))) {
            local_38 = *(undefined8 *)(param_1 + 8);
            cVar5 = '\0';
            if (*(undefined ***)(param_2 + 0x68) == &PTR_DAT_1468382b0) {
              local_30 = *(uint *)(*(longlong *)(param_2 + 0x60) + 0xb4);
            }
            else {
              local_30 = *(uint *)(*(longlong *)(param_2 + 0x78) + 0x4bc);
            }
            uVar1 = *(uint *)(*(longlong *)(param_2 + 0x78) + 0x4bc);
            if (uVar1 < local_30) {
              local_30 = uVar1;
            }
            if ((int)local_30 < (int)uVar3) {
              uVar3 = local_30;
            }
            uVar1 = local_30;
            if (uVar3 != 0) {
              uVar1 = uVar3;
            }
            local_30 = FUN_143dd39d0(param_2,local_38,uVar1);
            if (local_30 == 0xfffffffc) {
              return 4;
            }
            if (local_30 == 0xffffffff) {
              return 5;
            }
            if (local_30 == 0) {
              return 5;
            }
            if ((*(short *)(*(longlong *)(param_2 + 0x78) + 0x4e4) != 0) &&
               (*(undefined ***)(param_2 + 0x68) == &PTR_DAT_1468382b0)) {
              uVar3 = FUN_143dc66b0();
              *(ulonglong *)(*(longlong *)(param_2 + 0x60) + 0xa0) = (ulonglong)uVar3;
            }
            local_30 = local_30 & 0x7fffffff;
            goto LAB_143dc784a;
          }
        }
        else {
          cVar5 = '\x01';
LAB_143dc784a:
          if (local_30 != 0) {
            iVar2 = FUN_143dd53f0(param_2,local_38,(longlong)(int)local_30);
            if (iVar2 < 0) {
              return 3;
            }
            iVar2 = FUN_143dcc1c0(param_2,&local_38,iVar2,cVar5);
            if (iVar2 != 0) {
              return 5;
            }
          }
        }
        local_38 = 0;
        local_30 = 0;
        if ((*(longlong *)(param_2 + 8) != 0) && ((*(uint *)(param_2 + 0x1bc) & 0x400) == 0)) {
          thunk_FUN_143dcdf90(param_2,0);
        }
        uVar3 = FUN_143dd3e60(param_2);
        if (uVar3 == 0) {
          if ((cVar5 != '\0') && (lVar4 = FUN_143dc6100(param_2 + 0x140,0), lVar4 == 0)) {
            FUN_143dc5970(param_2);
          }
          return 4;
        }
        uVar1 = *(uint *)(*(longlong *)(param_2 + 0x78) + 0x4bc);
        if (uVar1 < uVar3) {
          uVar3 = uVar1;
        }
      } while( true );
    }
    if (((*(byte *)(param_3 + 10) & 2) == 0) || (iVar2 = FUN_143dcc3a0(param_2,param_3), iVar2 == 0)
       ) {
      iVar2 = FUN_143dd5d90(param_2,param_3,0);
      return 4 - (uint)(iVar2 != 0);
    }
  }
  return 5;
}



// FUNCTION 143dc7920 FUN_143dc7920 body=463 status=ok
// SIG undefined FUN_143dc7920(void)

byte FUN_143dc7920(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  uVar6 = 6;
  uVar4 = *(uint *)(param_1 + 0x70) & 0xffff;
  if (uVar4 == 0x119) {
    FUN_143dc7250(0x10,*(longlong *)(param_1 + 0x60) + 0x18,
                  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbd));
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xffefffff;
    iVar2 = FUN_143dcd250(param_1,*(longlong *)(param_1 + 0x60) + 0x18,
                          *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbd),4);
    if (iVar2 < 0) {
      return 1;
    }
    if ((*(uint *)(param_1 + 0x1b8) >> 0x15 & 1) == 0) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xffdfffff;
      *(undefined2 *)(param_1 + 0x70) = 0x11a;
      return 1;
    }
    *(undefined2 *)(param_1 + 0x70) = 0x11b;
    FUN_143dc6c40(param_1,6,5);
    return 0;
  }
  if (*(undefined ***)(param_1 + 0x68) == &PTR_DAT_1468382b0) {
    lVar5 = *(longlong *)(param_1 + 0x60);
    uVar3 = *(uint *)(lVar5 + 0xc4);
    if ((char)uVar3 < '\0') goto LAB_143dc7a0b;
  }
  if (uVar4 == 0x11a) {
    lVar5 = *(longlong *)(param_1 + 0x60);
    uVar3 = *(uint *)(lVar5 + 0xc4);
    if ((uVar3 & 0x40) != 0) {
LAB_143dc7a0b:
      if ((uVar3 & 0x40) == 0) {
        if (*(int *)(param_1 + 0x74) != 0) {
          *(uint *)(lVar5 + 0xc4) = uVar3 & 0xffffff7f;
          return 0;
        }
      }
      else {
        uVar6 = 4;
      }
      iVar2 = FUN_143dcd250(param_1,lVar5 + 0x18,*(undefined1 *)(lVar5 + 0xb8),uVar6);
      if (iVar2 < 0) {
        return 1;
      }
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar1 = *puVar1 & 0xffffff7f;
      return *(byte *)(*(longlong *)(param_1 + 0x60) + 0xc4) >> 6 & 1;
    }
  }
  if ((*(byte *)(param_1 + 0x1b8) & 0x80) == 0) {
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
    if ((uVar4 >> 0xd & 1) != 0) {
      *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) = uVar4 & 0xffffdfff;
      iVar2 = FUN_143dcd250(param_1,*(longlong *)(param_1 + 0x60) + 0x18,0,5);
      if (iVar2 < 0) {
        return 1;
      }
      FUN_143dc6c40(param_1,0x11,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x4b8));
      return 0;
    }
  }
  return 2;
}



// FUNCTION 143dc7af0 FUN_143dc7af0 body=352 status=ok
// SIG undefined FUN_143dc7af0(void)

undefined8 FUN_143dc7af0(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if ((*(short *)(param_1 + 0x4e4) != 0) && (*(longlong *)(param_1 + 8) < param_3 + 10)) {
    lVar2 = *(longlong *)(param_1 + 0x378);
    *(longlong *)(param_1 + 8) = param_3;
    for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x150)) {
      iVar5 = 0;
      if (0 < *(int *)(lVar2 + 0x230)) {
        lVar6 = 0;
        do {
          for (lVar3 = *(longlong *)(lVar6 + *(longlong *)(lVar2 + 400)); lVar3 != 0;
              lVar3 = *(longlong *)(lVar3 + 0xb0)) {
            if ((((*(undefined ***)(lVar3 + 0x68) == &PTR_DAT_1468382b0) &&
                 ((*(byte *)(lVar3 + 0x1b8) & 0x80) == 0)) &&
                ((*(uint *)(*(longlong *)(lVar3 + 0x60) + 0xc4) & 0x2000) == 0)) &&
               ((*(longlong *)(*(longlong *)(lVar3 + 0x60) + 0xa0) != 0 &&
                (iVar4 = FUN_143dc62b0(param_1,param_3),
                (int)(uint)*(ushort *)(param_1 + 0x4e4) < iVar4)))) {
              puVar1 = (uint *)(*(longlong *)(lVar3 + 0x60) + 0xc4);
              *puVar1 = *puVar1 | 0x2000;
              FUN_143dc6c40(lVar3,0x10,*(undefined4 *)(param_1 + 0x4b8));
              FUN_143dcdd70(lVar3);
              *(longlong *)(*(longlong *)(lVar3 + 0x60) + 0xa0) = param_3;
            }
          }
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 8;
        } while (iVar5 < *(int *)(lVar2 + 0x230));
      }
    }
  }
  return 0;
}



// FUNCTION 143dc7c50 FUN_143dc7c50 body=129 status=ok
// SIG undefined FUN_143dc7c50(void)

undefined8 FUN_143dc7c50(longlong param_1,int param_2)

{
  if (*(char *)(*(longlong *)(param_1 + 0x60) + 0xbd) == '\0') {
    if ((param_2 == 0) || (param_2 == 9999)) {
      return 0;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbd) = 2;
    *(char *)(*(longlong *)(param_1 + 0x60) + 0x18) = (char)((uint)param_2 >> 8);
    *(char *)(*(longlong *)(param_1 + 0x60) + 0x19) = (char)param_2;
  }
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x300000;
  *(undefined2 *)(param_1 + 0x70) = 0x119;
  FUN_143dc5a70(param_1,0x18,5);
  FUN_143dcdd70(param_1);
  return 1;
}



// FUNCTION 143dc7ce0 FUN_143dc7ce0 body=111 status=ok
// SIG undefined FUN_143dc7ce0(void)

undefined8 FUN_143dc7ce0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  thunk_FUN_143dd4bc0(**(undefined8 **)(param_2 + 0x60),0,&DAT_145dbcdec);
  **(undefined8 **)(param_2 + 0x60) = 0;
  if (*(longlong *)(param_2 + 0x148) != 0) {
    thunk_FUN_143dd4bc0(*(longlong *)(param_2 + 0x148),0,&DAT_145dbcdec);
    *(undefined8 *)(param_2 + 0x148) = 0;
  }
  *(undefined1 *)(*(longlong *)(param_2 + 0x60) + 0xb8) = 0;
  puVar1 = (uint *)(*(longlong *)(param_2 + 0x60) + 0xc4);
  *puVar1 = *puVar1 & 0xffffff7f;
  return 0;
}



// FUNCTION 143dc7d50 FUN_143dc7d50 body=1040 status=ok
// SIG undefined FUN_143dc7d50(void)

ulonglong FUN_143dc7d50(longlong param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  byte *pbVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined4 *local_res8;
  
  bVar10 = 0;
  bVar13 = 0;
  uVar12 = *(uint *)(param_1 + 0x70) >> 0x1c & 1;
  local_res8 = (undefined4 *)0x0;
  iVar4 = 0;
  if ((*(short *)(*(longlong *)(param_1 + 0x78) + 0x4e4) != 0) &&
     (*(undefined ***)(param_1 + 0x68) == &PTR_DAT_1468382b0)) {
    uVar3 = FUN_143dc66b0();
    *(ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa0) = (ulonglong)uVar3;
  }
  uVar7 = 0;
  uVar14 = param_3;
  if (((*param_4 & 0x1f) != 3) && (uVar7 = 0, 2 < (*param_4 & 0x1f) - 7)) {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
    uVar7 = 0;
    if ((uVar3 & 0x10) == 0) {
      *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) = uVar3 | 0x20;
      if ((2 < *param_4 - 4) && ((int)param_3 != 0)) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
        if ((uVar3 >> 0xc & 1) != 0) {
          *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) = uVar3 & 0xffffefff;
          *param_4 = (uint)*(byte *)(*(longlong *)(param_1 + 0x60) + 0xbf) | *param_4 & 0xc0;
        }
      }
      uVar14 = (ulonglong)(int)param_3;
      if (param_2 == 0) {
        Curl_pp_sendf(1,"null buf (%d)\n",param_3 & 0xffffffff);
        return 0xffffffff;
      }
      uVar7 = 0;
      if (*(char *)(*(longlong *)(param_1 + 0x60) + 0xc1) == '\r') {
        if (uVar12 != 0) {
          local_res8 = (undefined4 *)(param_2 + -4);
          iVar4 = 4;
          bVar13 = 0x80;
        }
        switch(*param_4 & 0xf) {
        case 0:
          bVar10 = 1;
          break;
        case 1:
          bVar10 = 2;
          break;
        case 2:
          break;
        default:
          Curl_pp_sendf(2,"lws_write: unknown write opc / wp\n");
          return 0xffffffff;
        case 4:
          bVar10 = 8;
          break;
        case 5:
          bVar10 = 9;
          break;
        case 6:
          bVar10 = 10;
        }
        if ((*param_4 & 0x40) == 0) {
          bVar10 = bVar10 | 0x80;
        }
        if (uVar14 < 0x7e) {
          uVar7 = (ulonglong)(iVar4 + 2U);
          *(byte *)(param_2 - uVar7) = bVar10;
          *(byte *)((int)(1 - (iVar4 + 2U)) + param_2) = (byte)param_3 | bVar13;
        }
        else {
          uVar8 = (undefined1)(param_3 >> 8);
          if (uVar14 < 0x10000) {
            uVar3 = iVar4 + 4;
            uVar7 = (ulonglong)uVar3;
            *(byte *)(param_2 - uVar7) = bVar10;
            *(byte *)((int)(1 - uVar3) + param_2) = bVar13 | 0x7e;
            *(undefined1 *)((int)(2 - uVar3) + param_2) = uVar8;
            iVar4 = 3 - uVar3;
          }
          else {
            uVar3 = iVar4 + 10;
            uVar7 = (ulonglong)uVar3;
            *(byte *)(param_2 - uVar7) = bVar10;
            *(byte *)((int)(1 - uVar3) + param_2) = bVar13 | 0x7f;
            *(undefined1 *)((int)(2 - uVar3) + param_2) = 0;
            *(undefined1 *)((int)(3 - uVar3) + param_2) = 0;
            *(undefined1 *)((int)(4 - uVar3) + param_2) = 0;
            *(undefined1 *)((int)(5 - uVar3) + param_2) = 0;
            *(char *)((int)(6 - uVar3) + param_2) = (char)(param_3 >> 0x18);
            *(char *)((int)(7 - uVar3) + param_2) = (char)(param_3 >> 0x10);
            iVar4 = 9 - uVar3;
            *(undefined1 *)((int)(8 - uVar3) + param_2) = uVar8;
          }
          *(byte *)(iVar4 + param_2) = (byte)param_3;
        }
      }
    }
    if (uVar12 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x60);
      if ((*(byte *)(lVar6 + 0xc4) & 0x10) == 0) {
        uVar5 = FUN_1407891a0(param_1);
        iVar4 = FUN_143dd2960(uVar5,lVar6 + 0x95,4);
        if (iVar4 != 4) {
          Curl_pp_sendf(1,"frame mask generation failed\n");
          return 0xffffffff;
        }
        *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb9) = 0;
      }
      if (local_res8 != (undefined4 *)0x0) {
        if (4 < (int)uVar14 + 4) {
          uVar11 = uVar14 & 0xffffffff;
          pbVar9 = (byte *)(local_res8 + 1);
          do {
            *pbVar9 = *pbVar9 ^ *(byte *)((ulonglong)
                                          (*(byte *)(*(longlong *)(param_1 + 0x60) + 0xb9) & 3) +
                                          0x95 + *(longlong *)(param_1 + 0x60));
            pcVar1 = (char *)(*(longlong *)(param_1 + 0x60) + 0xb9);
            *pcVar1 = *pcVar1 + '\x01';
            uVar11 = uVar11 - 1;
            pbVar9 = pbVar9 + 1;
          } while (uVar11 != 0);
        }
        *local_res8 = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x95);
      }
    }
    if ((*(uint *)(param_1 + 0x70) & 0xf000000) == 0x1000000) {
      lVar6 = UWaterWaves::GetWaterWaves(param_1);
      uVar7 = (**(code **)(*(longlong *)(lVar6 + 0x68) + 0x68))
                        (param_1,param_2 - uVar7,uVar7 + uVar14,param_4);
      return uVar7;
    }
    if ((((byte)*param_4 & 0x1f) < 3) && ((*(byte *)(param_1 + 0x1b8) & 8) == 0)) {
      uVar12 = FUN_143dccd70(param_1,param_2 - uVar7,uVar7 + uVar14);
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar2 = *puVar2 | 0x10;
      if (0 < (int)uVar12) {
        if (uVar12 == (int)uVar14 + (int)uVar7) {
          puVar2 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
          *puVar2 = *puVar2 & 0xffffffef;
          return param_3 & 0xffffffff;
        }
        uVar12 = uVar12 - (int)uVar7;
      }
      return (ulonglong)uVar12;
    }
  }
  uVar7 = FUN_143dccd70(param_1,param_2 - uVar7,uVar7 + uVar14);
  return uVar7;
}



// FUNCTION 143dc8180 FUN_143dc8180 body=43 status=ok
// SIG undefined FUN_143dc8180(void)

undefined8 FUN_143dc8180(longlong param_1)

{
  thunk_FUN_143dd4bc0(*(undefined8 *)(param_1 + 0x60),0,&DAT_145dbcdec);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 0;
}



// FUNCTION 143dc81b0 FUN_143dc81b0 body=92 status=ok
// SIG undefined FUN_143dc81b0(void)

void FUN_143dc81b0(longlong param_1,undefined4 param_2,undefined1 *param_3,longlong param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  *(char *)(lVar2 + 0x18) = (char)((uint)param_2 >> 8);
  *(char *)(lVar2 + 0x19) = (char)param_2;
  puVar3 = (undefined1 *)(lVar2 + 0x1a);
  if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
    do {
      param_4 = param_4 + -1;
      if ((undefined1 *)(lVar2 + 0x95U) <= puVar3) break;
      uVar1 = *param_3;
      param_3 = param_3 + 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (param_4 != 0);
  }
  *(char *)(*(longlong *)(param_1 + 0x60) + 0xbd) = (char)puVar3 - ((char)lVar2 + '\x18');
  return;
}



// FUNCTION 143dc8210 FUN_143dc8210 body=12 status=ok
// SIG undefined FUN_143dc8210(void)

undefined8 FUN_143dc8210(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xa8);
}



// FUNCTION 143dc8220 FUN_143dc8220 body=60 status=ok
// SIG undefined FUN_143dc8220(void)

void FUN_143dc8220(longlong param_1)

{
  uint uVar1;
  
  if ((*(short *)(*(longlong *)(param_1 + 0x78) + 0x4e4) != 0) &&
     (*(undefined ***)(param_1 + 0x68) == &PTR_DAT_1468382b0)) {
    uVar1 = FUN_143dc66b0();
    *(ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa0) = (ulonglong)uVar1;
  }
  return;
}



// FUNCTION 143dc8260 FUN_143dc8260 body=336 status=ok
// SIG undefined FUN_143dc8260(void)

undefined8 FUN_143dc8260(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_res8 [8];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  *(undefined2 *)(param_1 + 0x70) = 0x117;
  if ((*(short *)(*(longlong *)(param_1 + 0x78) + 0x4e4) != 0) &&
     (*(undefined ***)(param_1 + 0x68) == &PTR_DAT_1468382b0)) {
    uVar2 = FUN_143dc66b0();
    *(ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa0) = (ulonglong)uVar2;
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x18);
  if (iVar3 == 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x4bc);
  }
  local_res8[0] = iVar3 + 0x10;
  uVar4 = thunk_FUN_143dd4bc0(0,(longlong)(iVar3 + 0x14),"rx_ubuf");
  **(undefined8 **)(param_1 + 0x60) = uVar4;
  if (**(longlong **)(param_1 + 0x60) == 0) {
    Curl_pp_sendf(1,"Out of Mem allocating rx buffer %d\n",local_res8[0]);
    return 1;
  }
  *(int *)((longlong)*(longlong **)(param_1 + 0x60) + 0xb4) = local_res8[0];
  if (((*(uint *)(param_1 + 0x1b8) & 0x800008) == 0) &&
     (iVar3 = Ordinal_21(*(undefined8 *)(param_1 + 0x178),0xffff,0x1001,local_res8,CONCAT44(uVar5,4)
                        ), iVar3 != 0)) {
    Curl_pp_sendf(2,"Failed to set SNDBUF to %d",local_res8[0]);
    return 1;
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0xa0) + 8);
  if ((pcVar1 != (code *)0x0) &&
     (iVar3 = (*pcVar1)(param_1,0,*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x150),
                        *(uint *)(param_1 + 0x1b8) >> 3 & 1), iVar3 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143dc83b0 FUN_143dc83b0 body=3025 status=ok
// SIG undefined FUN_143dc83b0(void)

ulonglong FUN_143dc83b0(longlong param_1,byte param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ushort uVar9;
  longlong lVar10;
  uint uVar11;
  char *pcVar12;
  longlong lVar13;
  byte bVar14;
  longlong *plVar15;
  char *pcVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  uVar8 = 0;
  iVar6 = 6;
  uVar7 = 0;
  uVar18 = 0;
  if ((*(byte *)(param_1 + 0x1b8) & 0x80) != 0) {
    return 0xffffffff;
  }
  bVar14 = (byte)param_3;
  switch(*(undefined1 *)(param_1 + 0x1c4)) {
  case 0:
    cVar4 = *(char *)(*(longlong *)(param_1 + 0x60) + 0xc1);
    if (cVar4 != '\r') {
      Curl_pp_sendf(2,"lws_ws_rx_sm: unknown spec version %d\n",cVar4);
      return 0;
    }
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
    *puVar3 = *puVar3 | 4;
  case 4:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0xba) = bVar14 & 0xf;
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0xbb) = bVar14 & 0x70;
    *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) =
         (uint)((param_3 & 0xff) >> 7) |
         *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) & 0xfffffffe;
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
    *puVar3 = *puVar3 & 0xfffff7ff;
    lVar13 = *(longlong *)(param_1 + 0x60);
    if (((*(byte *)(lVar13 + 0xba) & 8) != 0) && ((*(byte *)(lVar13 + 0xc4) & 1) == 0)) {
      puVar17 = (undefined2 *)(lVar13 + 0x18);
      lVar10 = 8;
      *puVar17 = 0xea03;
      pcVar16 = "frag ctl";
      pcVar12 = (char *)(lVar13 + 0x1a);
      do {
        lVar10 = lVar10 + -1;
        if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
        cVar4 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar12 = cVar4;
        pcVar12 = pcVar12 + 1;
      } while (lVar10 != 0);
      goto LAB_143dc8839;
    }
    switch(*(byte *)(lVar13 + 0xba)) {
    case 0:
      if ((*(uint *)(lVar13 + 0xc4) & 0x100) == 0) {
        puVar17 = (undefined2 *)(lVar13 + 0x18);
        lVar10 = 8;
        *puVar17 = 0xea03;
        pcVar16 = "bad cont";
        pcVar12 = (char *)(lVar13 + 0x1a);
        do {
          lVar10 = lVar10 + -1;
          if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
          cVar4 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          *pcVar12 = cVar4;
          pcVar12 = pcVar12 + 1;
        } while (lVar10 != 0);
        goto LAB_143dc8839;
      }
      break;
    case 1:
      *(uint *)(lVar13 + 0xc4) =
           *(uint *)(lVar13 + 0xc4) ^
           (*(int *)(*(longlong *)(param_1 + 0x78) + 0x4b0) << 2 ^ *(uint *)(lVar13 + 0xc4)) & 0x400
      ;
    case 2:
      if (*(char *)(*(longlong *)(param_1 + 0x60) + 0xba) == '\x02') {
        puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
        *puVar3 = *puVar3 & 0xfffffbff;
      }
      lVar13 = *(longlong *)(param_1 + 0x60);
      if ((*(uint *)(lVar13 + 0xc4) & 0x100) == 0) {
        *(byte *)(lVar13 + 0xbc) = bVar14 & 0x70;
        lVar13 = *(longlong *)(param_1 + 0x60);
        if (*(char *)(lVar13 + 0xba) == '\x02') {
          uVar7 = 2;
        }
        *(uint *)(lVar13 + 0xc4) = uVar7 | *(uint *)(lVar13 + 0xc4) & 0xfffffffd;
        puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
        *puVar3 = *puVar3 | 0x4000;
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
        *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) = (~(uVar7 << 8) ^ uVar7) & 0x100 ^ uVar7;
        break;
      }
      puVar17 = (undefined2 *)(lVar13 + 0x18);
      lVar10 = 8;
      *puVar17 = 0xea03;
      pcVar16 = "bad cont";
      pcVar12 = (char *)(lVar13 + 0x1a);
      do {
        lVar10 = lVar10 + -1;
        if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
        cVar4 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar12 = cVar4;
        pcVar12 = pcVar12 + 1;
      } while (lVar10 != 0);
      goto LAB_143dc8839;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      puVar17 = (undefined2 *)(lVar13 + 0x18);
      lVar10 = 7;
      *puVar17 = 0xea03;
      pcVar16 = "bad opc";
      pcVar12 = (char *)(lVar13 + 0x1a);
      do {
        lVar10 = lVar10 + -1;
        if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
        cVar4 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar12 = cVar4;
        pcVar12 = pcVar12 + 1;
      } while (lVar10 != 0);
      goto LAB_143dc86dc;
    case 8:
      *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) & 0xfffffbff;
      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbe) = 0;
    }
    lVar13 = *(longlong *)(param_1 + 0x60);
    uVar7 = *(uint *)(lVar13 + 0xc4);
    if (((uVar7 >> 9 & 1) == 0) || (1 < (byte)(*(char *)(lVar13 + 0xba) - 1U))) {
      if (((*(byte *)(lVar13 + 0xba) & 8) == 0) && ((uVar7 & 1) != 0)) {
        *(uint *)(lVar13 + 0xc4) = uVar7 & 0xfffffeff;
        puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
        *puVar3 = *puVar3 & 0xfffffdff;
      }
      uVar7 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) = uVar7 | 0x200;
      }
      lVar13 = *(longlong *)(param_1 + 0x60);
      *(undefined1 *)(param_1 + 0x1c4) = 5;
      uVar8 = uVar18;
      if ((*(byte *)(lVar13 + 0xbb) != 0) && ((*(byte *)(lVar13 + 0xbb) & 0xbf) != 0)) {
        puVar17 = (undefined2 *)(lVar13 + 0x18);
        *(undefined2 *)(lVar13 + 0x18) = 0xea03;
        lVar10 = 8;
        pcVar16 = "rsv bits";
        pcVar12 = (char *)(lVar13 + 0x1a);
        do {
          lVar10 = lVar10 + -1;
          if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
          cVar4 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          *pcVar12 = cVar4;
          pcVar12 = pcVar12 + 1;
        } while (lVar10 != 0);
LAB_143dc8839:
        *(char *)(*(longlong *)(param_1 + 0x60) + 0xbd) = (char)pcVar12 - (char)puVar17;
        uVar8 = 0xffffffff;
      }
    }
    else {
      puVar17 = (undefined2 *)(lVar13 + 0x18);
      *(undefined2 *)(lVar13 + 0x18) = 0xea03;
      lVar10 = 7;
      pcVar16 = "bad fin";
      pcVar12 = (char *)(lVar13 + 0x1a);
      do {
        lVar10 = lVar10 + -1;
        if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
        cVar4 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar12 = cVar4;
        pcVar12 = pcVar12 + 1;
      } while (lVar10 != 0);
LAB_143dc86dc:
      *(char *)(*(longlong *)(param_1 + 0x60) + 0xbd) = (char)pcVar12 - (char)puVar17;
      uVar8 = 0xffffffff;
    }
    break;
  case 1:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x96) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 2;
    uVar8 = uVar18;
    break;
  case 2:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x97) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 3;
    uVar8 = uVar18;
    break;
  case 3:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x98) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb9) = 0;
    *(undefined1 *)(param_1 + 0x1c4) = 4;
    uVar8 = uVar18;
    break;
  case 5:
    lVar13 = *(longlong *)(param_1 + 0x60);
    uVar11 = (uint)(param_3 & 0xff) & 0x7f;
    puVar3 = (uint *)(lVar13 + 0xc4);
    *puVar3 = *puVar3 & 0xfffffff7;
    puVar3 = (uint *)(lVar13 + 0xc4);
    *puVar3 = *puVar3 | (uint)((param_3 & 0xff) >> 4) & 0xffffff8;
    lVar13 = *(longlong *)(param_1 + 0x60);
    if (uVar11 == 0x7e) {
      if ((*(byte *)(lVar13 + 0xba) & 8) == 0) {
        *(undefined1 *)(param_1 + 0x1c4) = 6;
        return 0;
      }
    }
    else {
      if (uVar11 != 0x7f) {
        *(ulonglong *)(lVar13 + 0xa8) = (ulonglong)((uint)param_3 & 0x7f);
        plVar15 = *(longlong **)(param_1 + 0x60);
        if ((*(byte *)((longlong)plVar15 + 0xc4) & 8) != 0) {
          *(undefined1 *)(param_1 + 0x1c4) = 0x10;
          return 0;
        }
        if (plVar15[0x15] != 0) {
          *(undefined1 *)(param_1 + 0x1c4) = 0x14;
          return 0;
        }
        goto LAB_143dc8b61;
      }
      if ((*(byte *)(lVar13 + 0xba) & 8) == 0) {
        *(undefined1 *)(param_1 + 0x1c4) = 8;
        return 0;
      }
    }
    Curl_pp_sendf(2,"Control frame with xtended length is illegal\n");
    uVar8 = 0xffffffff;
    break;
  case 6:
    *(ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8) = (param_3 & 0xff) << 8;
    *(undefined1 *)(param_1 + 0x1c4) = 7;
    uVar8 = uVar18;
    break;
  case 7:
  case 0xf:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | param_3 & 0xff;
    *(byte *)(param_1 + 0x1c4) = ~(*(byte *)(*(longlong *)(param_1 + 0x60) + 0xc4) >> 1) & 4 | 0x10;
    uVar8 = uVar18;
    break;
  case 8:
    if ((char)bVar14 < '\0') {
      Curl_pp_sendf(2,"b63 of length must be zero\n");
      uVar8 = 0xffffffff;
    }
    else {
      *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xa8) = 0;
      *(undefined1 *)(param_1 + 0x1c4) = 9;
      uVar8 = uVar18;
    }
    break;
  case 9:
    *(undefined1 *)(param_1 + 0x1c4) = 10;
    uVar8 = uVar18;
    break;
  case 10:
    *(undefined1 *)(param_1 + 0x1c4) = 0xb;
    uVar8 = uVar18;
    break;
  case 0xb:
    *(undefined1 *)(param_1 + 0x1c4) = 0xc;
    uVar8 = uVar18;
    break;
  case 0xc:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | (param_3 & 0xff) << 0x18;
    *(undefined1 *)(param_1 + 0x1c4) = 0xd;
    uVar8 = uVar18;
    break;
  case 0xd:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | (param_3 & 0xff) << 0x10;
    *(undefined1 *)(param_1 + 0x1c4) = 0xe;
    uVar8 = uVar18;
    break;
  case 0xe:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | (param_3 & 0xff) << 8;
    *(undefined1 *)(param_1 + 0x1c4) = 0xf;
    uVar8 = uVar18;
    break;
  case 0x10:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x95) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x11;
    uVar8 = uVar18;
    break;
  case 0x11:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x96) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x12;
    uVar8 = uVar18;
    break;
  case 0x12:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x97) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x13;
    uVar8 = uVar18;
    break;
  case 0x13:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x98) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x14;
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb9) = 0;
    plVar15 = *(longlong **)(param_1 + 0x60);
    if (plVar15[0x15] != 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0;
    goto LAB_143dc8ba6;
  case 0x14:
    plVar15 = *(longlong **)(param_1 + 0x60);
    uVar11 = (int)plVar15[0x16] + 0x10;
    if (*(uint *)((longlong)plVar15 + 0xb4) <= uVar11) {
      Curl_pp_sendf(1,"Attempted overflow \n");
      return 0xffffffff;
    }
    if ((param_2 & 1) == 0) {
      if ((*(byte *)((longlong)plVar15 + 0xc4) & 4) == 0) {
        *(byte *)((ulonglong)uVar11 + *plVar15) =
             *(byte *)((ulonglong)(*(byte *)((longlong)plVar15 + 0xb9) & 3) + 0x95 +
                      (longlong)plVar15) ^ bVar14;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x60) + 0xb0);
        *piVar2 = *piVar2 + 1;
        pcVar12 = (char *)(*(longlong *)(param_1 + 0x60) + 0xb9);
        *pcVar12 = *pcVar12 + '\x01';
      }
      else {
        *(byte *)((ulonglong)uVar11 + *plVar15) = bVar14;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x60) + 0xb0);
        *piVar2 = *piVar2 + 1;
      }
      plVar15 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
      *plVar15 = *plVar15 + -1;
    }
    plVar15 = *(longlong **)(param_1 + 0x60);
    if (plVar15[0x15] == 0) {
LAB_143dc8b61:
      *(undefined1 *)(param_1 + 0x1c4) = 0;
    }
    else {
      uVar20 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
      if (uVar20 == 0) {
        if ((int)plVar15[0x16] != *(int *)(*(longlong *)(param_1 + 0x78) + 0x4bc)) {
          return 0;
        }
      }
      else if (*(uint *)(plVar15 + 0x16) != uVar20) {
        return 0;
      }
    }
LAB_143dc8ba6:
    bVar14 = *(byte *)((longlong)plVar15 + 0xba);
    if (bVar14 < 3) {
LAB_143dc8bf8:
      plVar15 = *(longlong **)(param_1 + 0x60);
      uVar7 = *(uint *)(plVar15 + 0x16);
      lVar13 = (longlong)(int)uVar7;
      uVar20 = *plVar15 + 0x10;
      if ((((*(char *)((longlong)plVar15 + 0xba) != '\n') || (uVar19 = uVar8, uVar7 != 0)) &&
          (uVar19 = uVar18, 1 < *(ushort *)(param_1 + 0x70) - 0x11a)) && (uVar7 != 0)) {
        if (((*(uint *)((longlong)plVar15 + 0xc4) >> 10 & 1) != 0) &&
           ((*(uint *)((longlong)plVar15 + 0xc4) >> 0xb & 1) == 0)) {
          iVar5 = FUN_143dc61f0((longlong)plVar15 + 0xbe,uVar20,lVar13);
          if (iVar5 == 0) {
            lVar10 = *(longlong *)(param_1 + 0x60);
            if (((*(longlong *)(lVar10 + 0xa8) != 0) || ((*(byte *)(lVar10 + 0xc4) & 1) == 0)) ||
               (*(char *)(lVar10 + 0xbe) == '\0')) goto LAB_143dc8eff;
            *(undefined2 *)(lVar10 + 0x18) = 0xef03;
            lVar13 = 0xc;
            pcVar16 = "partial utf8";
            pcVar12 = (char *)(lVar10 + 0x1a);
            do {
              lVar13 = lVar13 + -1;
              if ((char *)(lVar10 + 0x95U) <= pcVar12) break;
              cVar4 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar12 = cVar4;
              pcVar12 = pcVar12 + 1;
            } while (lVar13 != 0);
            *(char *)(*(longlong *)(param_1 + 0x60) + 0xbd) =
                 (char)pcVar12 - ((char)lVar10 + '\x18');
            uVar8 = uVar20;
          }
          else {
            lVar13 = *(longlong *)(param_1 + 0x60);
            pcVar16 = "bad utf8";
            lVar10 = 8;
            *(undefined2 *)(lVar13 + 0x18) = 0xef03;
            pcVar12 = (char *)(lVar13 + 0x1a);
            do {
              lVar10 = lVar10 + -1;
              if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
              cVar4 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar12 = cVar4;
              pcVar12 = pcVar12 + 1;
            } while (lVar10 != 0);
            *(char *)(*(longlong *)(param_1 + 0x60) + 0xbd) =
                 (char)pcVar12 - ((char)lVar13 + '\x18');
            uVar8 = uVar20;
          }
LAB_143dc8ed9:
          Curl_pp_sendf(4,"utf8 error\n");
          FUN_143dc7250(4,uVar8,(longlong)(int)uVar7);
          goto LAB_143dc8efa;
        }
LAB_143dc8eff:
        if ((*(int *)(param_1 + 0x74) == 0) && ((-1 < (int)uVar7 || (iVar6 == 7)))) {
          *(undefined1 *)(lVar13 + uVar20) = 0;
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 8);
          uVar19 = uVar8;
          if ((lVar10 != 0) && (uVar19 = uVar18, (param_2 & 2) == 0)) {
            uVar7 = FUN_143dc7570(lVar10,param_1,iVar6,*(undefined8 *)(param_1 + 0x130),uVar20,
                                  lVar13);
            uVar19 = (ulonglong)uVar7;
          }
          puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
          *puVar3 = *puVar3 & 0xffffbfff;
        }
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
      uVar8 = uVar19;
    }
    else {
      if (bVar14 == 8) {
        if ((*(uint *)((longlong)plVar15 + 0xc4) >> 0xf & 1) != 0) goto LAB_143dc8bf8;
        *(uint *)((longlong)plVar15 + 0xc4) = *(uint *)((longlong)plVar15 + 0xc4) | 0x8000;
        plVar15 = *(longlong **)(param_1 + 0x60);
        lVar13 = *plVar15;
        if ((((*(uint *)(*(longlong *)(param_1 + 0x78) + 0x4b0) & 0x100) == 0) ||
            (*(uint *)(plVar15 + 0x16) < 3)) ||
           (iVar6 = FUN_143dc61f0((longlong)plVar15 + 0xbe,lVar13 + 0x12,
                                  *(uint *)(plVar15 + 0x16) - 2), iVar6 == 0)) {
          uVar7 = *(uint *)(param_1 + 0x70) & 0xffff;
          if ((uVar7 != 0x11b) && (uVar7 != 0x11a)) {
            iVar6 = FUN_143dc68d0(param_1);
            if (iVar6 != 0) {
              *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
              return 0xffffffff;
            }
            if (1 < *(uint *)(*(longlong *)(param_1 + 0x60) + 0xb0)) {
              uVar9 = CONCAT11(*(undefined1 *)(lVar13 + 0x10),*(undefined1 *)(lVar13 + 0x11));
              if ((((0xb < (ushort)(uVar9 - 1000)) ||
                   ((0xf8fU >> ((ushort)(uVar9 - 1000) & 0x1f) & 1) == 0)) && (uVar9 < 0x3f8)) ||
                 ((ushort)(uVar9 - 0x3f8) < 0x7c0)) {
                *(undefined2 *)(lVar13 + 0x10) = 0xea03;
              }
            }
            iVar6 = FUN_143dc7570(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8),param_1,0x26,
                                  *(undefined8 *)(param_1 + 0x130),
                                  **(longlong **)(param_1 + 0x60) + 0x10,
                                  (int)(*(longlong **)(param_1 + 0x60))[0x16]);
            if (iVar6 == 0) {
              *(undefined2 *)(param_1 + 0x70) = 0x11a;
              puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
              *puVar3 = *puVar3 | 0x40;
              goto LAB_143dc8e1a;
            }
          }
          goto LAB_143dc8efa;
        }
        goto LAB_143dc8ed9;
      }
      if (bVar14 == 9) {
        if ((*(byte *)((longlong)plVar15 + 0xc4) & 0x80) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
          return 0;
        }
LAB_143dc8e1a:
        plVar15 = *(longlong **)(param_1 + 0x60);
        if (*(uint *)(plVar15 + 0x16) < 0x7e) {
          _guard_xfg_dispatch_icall_nop
                    (plVar15 + 3,(void *)(*plVar15 + 0x10),(ulonglong)*(uint *)(plVar15 + 0x16));
          *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb8) =
               *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb0);
          puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
          *puVar3 = *puVar3 | 0x80;
          FUN_143dcdd70(param_1);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
        return 0;
      }
      if (bVar14 == 10) {
        FUN_140447710(*plVar15 + 0x10,(int)plVar15[0x16]);
        if (*(char *)(param_1 + 0x1c6) == '\x11') {
          FUN_143dc6c40(param_1,0,0);
        }
        iVar6 = 7;
        goto LAB_143dc8bf8;
      }
LAB_143dc8efa:
      uVar8 = 0xffffffff;
    }
  }
  return uVar8;
}



// FUNCTION 143dc9020 FUN_143dc9020 body=114 status=ok
// SIG undefined FUN_143dc9020(void)

undefined8 FUN_143dc9020(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_2 != 0xc) {
    if (param_2 == 0xf) {
      iVar1 = FUN_143dd1670();
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    else if (param_2 == 0x43) {
      Curl_pp_sendf(4,"LWS_CALLBACK_SSL_INFO: where: 0x%x, ret: 0x%x\n",*param_4,param_4[1]);
      return 0;
    }
    return 0;
  }
  iVar1 = FUN_143dd6ab0(param_1,0x194,0);
  if ((iVar1 == 0) && (iVar1 = FUN_143dd1670(param_1), iVar1 == 0)) {
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 143dc90a0 FUN_143dc90a0 body=87 status=ok
// SIG undefined FUN_143dc90a0(void)

void FUN_143dc90a0(longlong param_1)

{
  short sVar1;
  longlong *plVar2;
  
  sVar1 = *(short *)(param_1 + 0x4dc);
  if (((*(byte *)(param_1 + 0x4d0) & 4) == 0) && (sVar1 != 0)) {
    plVar2 = (longlong *)(param_1 + 0x110);
    do {
      sVar1 = sVar1 + -1;
      if (*plVar2 != 0) {
        FUN_143dd3150();
      }
      plVar2 = plVar2 + 0x15;
    } while (sVar1 != 0);
  }
  return;
}



// FUNCTION 143dc9100 thunk_FUN_143dd3150 body=5 status=ok
// SIG undefined thunk_FUN_143dd3150(void)

undefined8 thunk_FUN_143dd3150(longlong param_1)

{
  WSASetEvent(**(undefined8 **)
                ((longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + 0xf8 + *(longlong *)(param_1 + 0x78))
             );
  return 0;
}



// FUNCTION 143dc9110 FUN_143dc9110 body=626 status=ok
// SIG undefined FUN_143dc9110(void)

undefined8 FUN_143dc9110(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Dst;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined **ppuVar11;
  longlong *plVar12;
  
  uVar8 = FUN_143dc66b0();
  plVar12 = (longlong *)(param_1 + 0x398);
  lVar2 = *plVar12;
  do {
    if (lVar2 == 0) {
      return 0;
    }
    if ((param_2 == 0) &&
       (iVar9 = FUN_143dc62b0(param_1,uVar8,*(undefined8 *)(*plVar12 + 8)), iVar9 < 6)) {
      plVar12 = (longlong *)*plVar12;
    }
    else {
      plVar3 = (longlong *)*plVar12;
      *plVar12 = *plVar3;
      Curl_pp_sendf(4,"deferred vh %p destroy\n",plVar3[2]);
      _Dst = (void *)plVar3[2];
      lVar2 = *(longlong *)((longlong)_Dst + 0x148);
      lVar10 = *(longlong *)(lVar2 + 0x398);
      plVar1 = (longlong *)(lVar2 + 0x398);
      while (lVar10 != 0) {
        plVar4 = (longlong *)*plVar1;
        if ((void *)plVar4[2] == _Dst) {
          *plVar1 = *plVar4;
          thunk_FUN_143dd4bc0(plVar4,0,"lws_free");
          break;
        }
        plVar1 = plVar4;
        lVar10 = *plVar4;
      }
      plVar1 = (longlong *)(lVar2 + 0x388);
      lVar10 = *plVar1;
      while (lVar10 != 0) {
        pvVar5 = (void *)*plVar1;
        if (pvVar5 == _Dst) {
          *plVar1 = *(longlong *)((longlong)pvVar5 + 0x150);
          break;
        }
        plVar1 = (longlong *)((longlong)pvVar5 + 0x150);
        lVar10 = *plVar1;
      }
      if ((*(longlong *)((longlong)_Dst + 0x170) != 0) &&
         (iVar9 = 0, 0 < *(int *)((longlong)_Dst + 0x230))) {
        lVar10 = 0;
        do {
          if ((*(longlong *)((longlong)_Dst + 0x178) != 0) &&
             (lVar6 = *(longlong *)(lVar10 + *(longlong *)((longlong)_Dst + 0x178)), lVar6 != 0)) {
            thunk_FUN_143dd4bc0(lVar6,0,"lws_free");
            *(undefined8 *)(lVar10 + *(longlong *)((longlong)_Dst + 0x178)) = 0;
          }
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 8;
        } while (iVar9 < *(int *)((longlong)_Dst + 0x230));
      }
      if (*(longlong *)((longlong)_Dst + 0x178) != 0) {
        thunk_FUN_143dd4bc0(*(longlong *)((longlong)_Dst + 0x178),0,"lws_free");
      }
      FUN_143dd3960(_Dst);
      thunk_FUN_143dd4bc0(*(undefined8 *)((longlong)_Dst + 400),0,"lws_free");
      if ((*(longlong *)(lVar2 + 0x390) != 0) || ((*(uint *)(lVar2 + 0x4b0) & 0x2000) != 0)) {
        thunk_FUN_143dd4bc0(*(undefined8 *)((longlong)_Dst + 0x170),0,"lws_free");
      }
      ppuVar11 = &PTR_PTR_146838370;
      puVar7 = PTR_PTR_146838370;
      while (puVar7 != (undefined *)0x0) {
        puVar7 = *ppuVar11;
        ppuVar11 = ppuVar11 + 1;
        if (*(code **)(puVar7 + 0x28) != (code *)0x0) {
          (**(code **)(puVar7 + 0x28))(_Dst);
        }
        puVar7 = *ppuVar11;
      }
      thunk_FUN_143dd4bc0(*(undefined8 *)((longlong)_Dst + 0x1d0),0,&DAT_145dbcdec);
      *(undefined8 *)((longlong)_Dst + 0x1d0) = 0;
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x250);
      thunk_FUN_143dd4bc0(_Dst,0,"lws_free");
      thunk_FUN_143dd4bc0(plVar3,0,"lws_free");
    }
    lVar2 = *plVar12;
  } while( true );
}



// FUNCTION 143dc9390 FUN_143dc9390 body=496 status=ok
// SIG undefined FUN_143dc9390(void)

void FUN_143dc9390(longlong param_1)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_1e8 [120];
  longlong local_170;
  
  if (param_1 != 0) {
    uVar5 = *(uint *)(param_1 + 0x4d0);
    if ((uVar5 >> 8 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x18);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)();
      }
      FUN_143dc96b0(param_1);
      return;
    }
    if ((uVar5 & 4) == 0) {
      *(uint *)(param_1 + 0x4d0) = uVar5 | 0x16;
      _guard_xfg_dispatch_icall_nop(local_1e8,0,0x1d0);
      lVar7 = (longlong)*(short *)(param_1 + 0x4dc);
      local_170 = param_1;
      if (lVar7 != 0) {
        puVar6 = (undefined8 *)(param_1 + 0xf0 + lVar7 * 0xa8);
        do {
          puVar1 = puVar6 + -0x15;
          lVar7 = lVar7 + -1;
          puVar3 = (undefined8 *)*puVar1;
          while (puVar3 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar3;
            thunk_FUN_143dd4bc0(puVar3,0,"lws_free");
            puVar3 = puVar2;
          }
          *puVar1 = 0;
          uVar5 = 0;
          if (*(int *)((longlong)puVar6 + -0x5c) != 0) {
            do {
              lVar4 = FUN_143dd33b0(param_1);
              if (lVar4 != 0) {
                if ((*(uint *)(lVar4 + 0x1b8) & 0x10000000) == 0) {
                  thunk_FUN_143dc4f60(lVar4,9999,"ctx destroy");
                }
                else {
                  FUN_143dca540();
                }
                uVar5 = uVar5 - 1;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(uint *)((longlong)puVar6 + -0x5c));
          }
          puVar6 = puVar1;
        } while (lVar7 != 0);
      }
      if ((*(byte *)(param_1 + 0x4d0) & 0x20) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x378);
        while (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x150);
          FUN_143dca8e0();
        }
      }
      FUN_143dd2b50(param_1);
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x10);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143dc956f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1);
        return;
      }
    }
    else if ((uVar5 & 8) != 0) {
      FUN_143dc96b0();
      return;
    }
    FUN_143dc9580();
  }
  return;
}



// FUNCTION 143dc9580 FUN_143dc9580 body=296 status=ok
// SIG undefined FUN_143dc9580(void)

void FUN_143dc9580(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  *(uint *)(param_1 + 0x4d0) = *(uint *)(param_1 + 0x4d0) | 8;
  iVar5 = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    thunk_FUN_143dd4bc0(*(longlong *)(param_1 + 0xe8),0,&DAT_145dbcdec);
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x378);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x150);
    FUN_143dcabc0();
  }
  lVar1 = *(longlong *)(param_1 + 0x388);
  while (lVar1 != 0) {
    FUN_143dcabc0(*(undefined8 *)(param_1 + 0x388));
    lVar1 = *(longlong *)(param_1 + 0x388);
  }
  FUN_140447710(param_1);
  FUN_143dd2c30(param_1);
  if (*(void **)(param_1 + 0x3a0) != (void *)0x0) {
    free(*(void **)(param_1 + 0x3a0));
  }
  FUN_143dc9110(param_1,1);
  pcVar2 = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x18);
  if ((pcVar2 != (code *)0x0) && (iVar3 = (*pcVar2)(param_1), iVar3 != 0)) {
    *(uint *)(param_1 + 0x4d0) = *(uint *)(param_1 + 0x4d0) | 0x100;
    return;
  }
  pbVar4 = (byte *)(param_1 + 0x144);
  if (((*pbVar4 & 2) == 0) && (0 < *(short *)(param_1 + 0x4dc))) {
    do {
      if ((*pbVar4 & 1) != 0) {
        return;
      }
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 0xa8;
    } while (iVar5 < *(short *)(param_1 + 0x4dc));
  }
  FUN_143dc96b0(param_1);
  return;
}



// FUNCTION 143dc96b0 FUN_143dc96b0 body=220 status=ok
// SIG undefined FUN_143dc96b0(void)

void FUN_143dc96b0(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x90);
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x4dc)) {
    plVar4 = (longlong *)(param_1 + 0x118);
    do {
      pcVar2 = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x60);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_1,iVar5);
      }
      thunk_FUN_143dd4bc0(plVar4[-0xe],0,&DAT_145dbcdec);
      plVar4[-0xe] = 0;
      lVar3 = *plVar4;
      while (lVar3 != 0) {
        FUN_143dce310(plVar4 + -0xf);
        lVar3 = *plVar4;
      }
      iVar5 = iVar5 + 1;
      plVar4 = plVar4 + 0x15;
    } while (iVar5 < *(short *)(param_1 + 0x4dc));
  }
  thunk_FUN_143dd4bc0(param_1,0,"lws_free");
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 143dc9790 FUN_143dc9790 body=1529 status=ok
// SIG undefined FUN_143dc9790(void)

longlong FUN_143dc9790(longlong param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  __time64_t _Var8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined **ppuVar16;
  
  iVar6 = FUN_143dd2bb0();
  if (iVar6 != 0) {
    return 0;
  }
  lVar7 = FUN_143dd4c00(0x4f0,"context");
  if (lVar7 == 0) {
    Curl_pp_sendf(1,"No memory for websocket context\n");
    return 0;
  }
  *(undefined ***)(lVar7 + 0x98) = &PTR_LAB_145dbec58;
  if (*(int *)(param_1 + 0xd8) == 0) {
    *(undefined4 *)(lVar7 + 0x4bc) = 0x1000;
  }
  else {
    *(int *)(lVar7 + 0x4bc) = *(int *)(param_1 + 0xd8);
  }
  uVar15 = 0;
  *(undefined8 *)(lVar7 + 0x30) = FUN_143dd21b0;
  *(code **)(lVar7 + 0x38) = FUN_143dd2170;
  *(code **)(lVar7 + 0x40) = FUN_143dd2350;
  *(code **)(lVar7 + 0x48) = FUN_143dd22e0;
  *(code **)(lVar7 + 0x50) = FUN_143dd2370;
  *(undefined8 *)(lVar7 + 0x58) = 0;
  *(undefined8 **)(lVar7 + 0x28) = (undefined8 *)(lVar7 + 0x30);
  if (*(longlong *)(param_1 + 0x130) != 0) {
    *(longlong *)(lVar7 + 0x88) = *(longlong *)(param_1 + 0x130);
  }
  *(undefined8 *)(lVar7 + 0x3b8) = *(undefined8 *)(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    *(longlong *)(lVar7 + 0x3a0) = *(longlong *)(param_1 + 0x100);
  }
  _Var8 = _time64((__time64_t *)0x0);
  *(__time64_t *)(lVar7 + 0x10) = _Var8;
  *(undefined8 *)(lVar7 + 0x90) = *(undefined8 *)(param_1 + 0x198);
  *(undefined4 *)(lVar7 + 0x4c8) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(lVar7 + 0x490) = 30000;
  if (*(int *)(param_1 + 0x8c) == 0) {
    *(undefined2 *)(lVar7 + 0x4dc) = 1;
  }
  else {
    *(undefined2 *)(lVar7 + 0x4dc) = *(undefined2 *)(param_1 + 0x8c);
  }
  if (1 < *(short *)(lVar7 + 0x4dc)) {
    *(undefined2 *)(lVar7 + 0x4dc) = 1;
  }
  *(undefined8 *)(lVar7 + 0x3a8) = *(undefined8 *)(param_1 + 0x20);
  uVar12 = *(uint *)(param_1 + 100);
  *(uint *)(lVar7 + 0x4b0) = uVar12;
  *(undefined ***)(lVar7 + 0x3d0) = &PTR_DAT_1468385b0;
  if ((uVar12 & 0x200410) != 0) {
    Curl_pp_sendf(1,"Requested event library support not configured, available:\n");
    ppuVar16 = &PTR_PTR_146838360;
    puVar2 = (undefined8 *)PTR_PTR_146838360;
    while (puVar2 != (undefined8 *)0x0) {
      Curl_pp_sendf(1,"  - %s\n",*puVar2);
      ppuVar1 = ppuVar16 + 1;
      ppuVar16 = ppuVar16 + 1;
      puVar2 = (undefined8 *)*ppuVar1;
    }
    thunk_FUN_143dd4bc0(lVar7,0,"lws_free");
    return 0;
  }
  _time64((__time64_t *)(lVar7 + 0x400));
  if (*(longlong *)(param_1 + 0x180) == 0) {
    bVar5 = true;
    ppuVar16 = &PTR_PTR_146838370;
    puVar13 = (undefined1 *)(lVar7 + 0x3d8);
    puVar3 = PTR_PTR_146838370;
    while (puVar3 != (undefined *)0x0) {
      puVar3 = *ppuVar16;
      ppuVar16 = ppuVar16 + 1;
      if (*(longlong *)(puVar3 + 8) != 0) {
        if (!bVar5) {
          *puVar13 = 0x2c;
          puVar13 = puVar13 + 1;
        }
        iVar6 = FUN_143dc6cb0(puVar13,(lVar7 - (longlong)puVar13) + 0x3f6,&DAT_145afa01c,
                              *(undefined8 *)(puVar3 + 8));
        puVar13 = puVar13 + iVar6;
        bVar5 = false;
      }
      puVar3 = *ppuVar16;
    }
    *(undefined1 **)(lVar7 + 0x3f8) = (undefined1 *)(lVar7 + 0x3d8);
  }
  else {
    *(longlong *)(lVar7 + 0x3f8) = *(longlong *)(param_1 + 0x180);
  }
  iVar6 = 0x14;
  if (*(int *)(param_1 + 0x94) != 0) {
    iVar6 = *(int *)(param_1 + 0x94);
  }
  *(int *)(lVar7 + 0x4b8) = iVar6;
  *(undefined2 *)(lVar7 + 0x4e4) = *(undefined2 *)(param_1 + 0xe8);
  if (*(short *)(param_1 + 0x88) == 0) {
    iVar6 = 0x1000;
    if (*(int *)(param_1 + 0xdc) != 0) {
      iVar6 = *(int *)(param_1 + 0xdc);
    }
    *(int *)(lVar7 + 0x4c0) = iVar6;
  }
  else {
    *(int *)(lVar7 + 0x4c0) = (int)*(short *)(param_1 + 0x88);
  }
  iVar6 = (int)*(short *)(param_1 + 0x8a);
  if (*(short *)(param_1 + 0x8a) == 0) {
    iVar6 = *(int *)(lVar7 + 0x490);
  }
  *(int *)(lVar7 + 0x4c4) = iVar6;
  iVar6 = *(int *)(param_1 + 0x90);
  if (iVar6 == 0) {
    iVar6 = *(int *)(lVar7 + 0x490) / (int)*(short *)(lVar7 + 0x4dc);
  }
  *(int *)(lVar7 + 0x4b4) = iVar6;
  uVar14 = uVar15;
  if (0 < *(short *)(lVar7 + 0x4dc)) {
    do {
      lVar9 = thunk_FUN_143dd4bc0(0,*(undefined4 *)(lVar7 + 0x4bc),"pt_serv_buf");
      lVar10 = (longlong)(int)uVar14 * 0xa8;
      *(longlong *)(lVar10 + 0xa8 + lVar7) = lVar9;
      if (lVar9 == 0) {
        Curl_pp_sendf(1,&DAT_145dbd3e4);
        return 0;
      }
      *(char *)(lVar10 + 0x142 + lVar7) = (char)uVar14;
      uVar12 = (int)uVar14 + 1;
      *(longlong *)(lVar10 + 0xa0 + lVar7) = lVar7;
      *(undefined8 *)(lVar10 + 0x118 + lVar7) = 0;
      *(undefined4 *)(lVar10 + 300 + lVar7) = 0;
      uVar14 = (ulonglong)uVar12;
    } while ((int)uVar12 < (int)*(short *)(lVar7 + 0x4dc));
  }
  if ((*(int *)(param_1 + 0x78) == 0) && (0 < *(int *)(param_1 + 0x70))) {
    Curl_pp_sendf(1,"info->ka_interval can\'t be 0 if ka_time used\n");
  }
  else {
    lVar9 = FUN_143dd4c00((longlong)
                          ((int)*(short *)(lVar7 + 0x4dc) * *(int *)(lVar7 + 0x4b4) * 0x10),
                          "fds table");
    *(longlong *)(lVar7 + 0xe8) = lVar9;
    if (lVar9 == 0) {
      Curl_pp_sendf(1,"OOM allocating %d fds\n",*(undefined4 *)(lVar7 + 0x490));
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0xd0);
      if (lVar9 != 0) {
        *(longlong *)(lVar7 + 0x488) = lVar9;
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (*(char *)(lVar9 + lVar10) != '\0');
        *(short *)(lVar7 + 0x4e2) = (short)lVar10;
      }
      iVar6 = FUN_143dd2fe0(lVar7,param_1);
      if ((iVar6 == 0) &&
         ((pcVar4 = *(code **)(*(longlong *)(lVar7 + 0x3d0) + 8), pcVar4 == (code *)0x0 ||
          (iVar6 = (*pcVar4)(lVar7,param_1), iVar6 == 0)))) {
        if ((*(longlong *)(*(longlong *)(lVar7 + 0x3d0) + 0x28) != 0) &&
           (uVar14 = uVar15, 0 < *(short *)(lVar7 + 0x4dc))) {
          do {
            uVar11 = uVar15;
            if (*(longlong *)(param_1 + 0x188) != 0) {
              uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)(int)uVar14 * 8);
            }
            iVar6 = (**(code **)(*(longlong *)(lVar7 + 0x3d0) + 0x28))(lVar7,uVar11,uVar14);
            if (iVar6 != 0) goto LAB_143dc9b96;
            uVar12 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar12;
          } while ((int)uVar12 < (int)*(short *)(lVar7 + 0x4dc));
        }
        iVar6 = FUN_143dc9d90(lVar7);
        if (iVar6 == 0) {
          FUN_143dd3850(param_1);
          *(undefined8 *)(lVar7 + 0x3b0) = *(undefined8 *)(param_1 + 0x68);
          if (((*(uint *)(param_1 + 100) & 0x2000) == 0) &&
             (lVar9 = FUN_143dc9ed0(lVar7,param_1), lVar9 == 0)) {
            Curl_pp_sendf(1,"Failed to create default vhost\n");
            if (0 < *(short *)(lVar7 + 0x4dc)) {
              do {
                lVar9 = ((longlong)(int)uVar15 + 1) * 0xa8;
                thunk_FUN_143dd4bc0(*(undefined8 *)(lVar9 + lVar7),0,&DAT_145dbcdec);
                *(undefined8 *)(lVar9 + lVar7) = 0;
                uVar12 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar12;
              } while ((int)uVar12 < (int)*(short *)(lVar7 + 0x4dc));
            }
            thunk_FUN_143dd4bc0(*(undefined8 *)(lVar7 + 0xe8),0,&DAT_145dbcdec);
            *(undefined8 *)(lVar7 + 0xe8) = 0;
            FUN_143dd2c30(lVar7);
            thunk_FUN_143dd4bc0(lVar7,0,&DAT_145dbcdec);
            return 0;
          }
          *(undefined8 *)(lVar7 + 0x408) = 0x6e776f6e6b6e75;
          FUN_143dd2040(lVar7,param_1);
          *(undefined4 *)(lVar7 + 0x49c) = *(undefined4 *)(param_1 + 0x60);
          *(undefined4 *)(lVar7 + 0x4a0) = *(undefined4 *)(param_1 + 0x5c);
          if ((*(uint *)(param_1 + 100) & 0x2000) == 0) {
            FUN_140447710(param_1);
          }
          FUN_143dc90a0(lVar7);
          return lVar7;
        }
      }
    }
LAB_143dc9b96:
    FUN_143dc9390(lVar7);
  }
  return 0;
}



// FUNCTION 143dc9d90 FUN_143dc9d90 body=318 status=ok
// SIG undefined FUN_143dc9d90(void)

undefined8 FUN_143dc9d90(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x4dc)) {
    do {
      lVar4 = (longlong)iVar5 * 0xa8;
      if (*(longlong *)(lVar4 + 0x110 + param_1) == 0) {
        lVar3 = FUN_143dd4c00(0x1d0,"event pipe wsi");
        if (lVar3 == 0) {
          Curl_pp_sendf(1,"Out of mem\n");
          return 1;
        }
        *(longlong *)(lVar3 + 0x78) = param_1;
        FUN_143dc69d0(lVar3,0,0x200,&PTR_DAT_146838630);
        *(uint *)(lVar3 + 0x1b8) = *(uint *)(lVar3 + 0x1b8) | 0x10000000;
        *(undefined8 *)(lVar3 + 0xa0) = 0;
        *(char *)(lVar3 + 0x1c7) = (char)iVar5;
        *(undefined8 *)(lVar3 + 0x80) = 0;
        *(undefined8 *)(lVar3 + 0x178) = 0xffffffffffffffff;
        *(longlong *)(lVar4 + 0x110 + param_1) = lVar3;
        *(int *)(param_1 + 0x4a8) = *(int *)(param_1 + 0x4a8) + 1;
        iVar2 = CCallbackImpl<1>::GetCallbackSizeBytes(lVar3);
        if (iVar2 == 0) {
          *(undefined8 *)(lVar3 + 0x178) = *(undefined8 *)(lVar4 + 0x100 + param_1);
          pcVar1 = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x48);
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(lVar3);
          }
          iVar2 = FUN_143dcd320(param_1,lVar3);
          if (iVar2 != 0) {
            return 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(short *)(param_1 + 0x4dc));
  }
  return 0;
}



// FUNCTION 143dc9ed0 FUN_143dc9ed0 body=1635 status=ok
// SIG undefined FUN_143dc9ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143dc9ed0(longlong param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  void *_Dst;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined **ppuVar13;
  size_t _Size;
  undefined **_Src;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined *local_50;
  undefined8 local_48;
  char acStack_40 [4];
  undefined4 uStack_3c;
  undefined2 local_38;
  undefined1 local_36;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar6 = FUN_143dd4c00(0x250);
  ppuVar13 = *(undefined ***)(param_2 + 4);
  plVar16 = (longlong *)(param_1 + 0x378);
  if (lVar6 == 0) {
    return 0;
  }
  *(longlong *)(lVar6 + 0x148) = param_1;
  _Src = &PTR_s_http_only_145dbd2a0;
  if (ppuVar13 != (undefined **)0x0) {
    _Src = ppuVar13;
  }
  pcVar7 = *(char **)(param_2 + 0x28);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = "default";
  }
  *(char **)(lVar6 + 0x160) = pcVar7;
  *(undefined8 *)(lVar6 + 0x108) = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(lVar6 + 0x168) = *(undefined8 *)(param_2 + 2);
  *(undefined4 *)(lVar6 + 0x230) = 0;
  if (_Src[1] != (undefined *)0x0) {
    iVar12 = 0;
    do {
      iVar12 = iVar12 + 1;
      *(int *)(lVar6 + 0x230) = iVar12;
    } while (_Src[(longlong)iVar12 * 7 + 1] != (undefined *)0x0);
  }
  ppuVar13 = &PTR_PTR_146838370;
  *(int *)(lVar6 + 0x22c) = param_2[0x19];
  *(undefined8 *)(lVar6 + 0x180) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(lVar6 + 0x188) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(lVar6 + 0x220) = *(undefined8 *)(param_2 + 0x1a);
  puVar3 = PTR_PTR_146838370;
  while (puVar3 != (undefined *)0x0) {
    puVar3 = *ppuVar13;
    ppuVar13 = ppuVar13 + 1;
    if ((*(code **)(puVar3 + 0x20) != (code *)0x0) &&
       (iVar12 = (**(code **)(puVar3 + 0x20))(lVar6,param_2), iVar12 != 0)) {
      return 0;
    }
    puVar3 = *ppuVar13;
  }
  iVar12 = 5;
  if (param_2[0x2e] != 0) {
    iVar12 = param_2[0x2e];
  }
  *(int *)(lVar6 + 0x240) = iVar12;
  iVar12 = 10;
  if (param_2[0x55] != 0) {
    iVar12 = param_2[0x55];
  }
  *(int *)(lVar6 + 0x244) = iVar12;
  *(undefined8 *)(lVar6 + 0x1c0) = *(undefined8 *)(param_2 + 0x60);
  *(int *)(lVar6 + 0x210) = param_2[0x54];
  if (*(longlong *)(param_2 + 0x26) != 0) {
    FUN_143dc6f40(lVar6 + 0x1e0,*(longlong *)(param_2 + 0x26),0x10);
  }
  iVar12 = 0;
  if (*(longlong *)(param_2 + 0xc) != 0) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(*(longlong *)(param_2 + 0xc) + lVar8) != '\0');
    iVar12 = (int)lVar8 + 1;
  }
  if (*(longlong *)(param_2 + 0xe) != 0) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(*(longlong *)(param_2 + 0xe) + lVar8) != '\0');
    iVar12 = iVar12 + 1 + (int)lVar8;
  }
  if (iVar12 != 0) {
    _Dst = (void *)thunk_FUN_143dd4bc0(0,(longlong)iVar12,"vh paths");
    *(void **)(lVar6 + 0x1d0) = _Dst;
    *(void **)(lVar6 + 0x1d8) = _Dst;
    pvVar9 = *(void **)(param_2 + 0xc);
    if (pvVar9 != (void *)0x0) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(char *)((longlong)pvVar9 + lVar8) != '\0');
      _Size = (size_t)((int)lVar8 + 1);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar9,_Size);
      *(longlong *)(lVar6 + 0x1d8) = *(longlong *)(lVar6 + 0x1d8) + _Size;
    }
    pvVar9 = *(void **)(param_2 + 0xe);
    lVar8 = -1;
    if (pvVar9 != (void *)0x0) {
      do {
        lVar14 = lVar8;
        lVar8 = lVar14 + 1;
      } while (*(char *)((longlong)pvVar9 + lVar14 + 1) != '\0');
      _guard_xfg_dispatch_icall_nop(*(void **)(lVar6 + 0x1d8),pvVar9,lVar14 + 2);
    }
  }
  pvVar9 = (void *)FUN_143dd4c00((longlong)
                                 (*(int *)(lVar6 + 0x230) + *(short *)(param_1 + 0x4de) + 1) * 0x38,
                                 "vhost-specific plugin table");
  if (pvVar9 == (void *)0x0) {
    Curl_pp_sendf(1,&DAT_145dbd3e4);
    return 0;
  }
  _guard_xfg_dispatch_icall_nop(pvVar9,_Src,(longlong)*(int *)(lVar6 + 0x230) * 0x38);
  if ((*(uint *)(param_1 + 0x4b0) & 0x2000) == 0) {
    *(undefined ***)(lVar6 + 0x170) = _Src;
    thunk_FUN_143dd4bc0(pvVar9,0,"lws_free");
  }
  else {
    *(void **)(lVar6 + 0x170) = pvVar9;
  }
  uVar10 = FUN_143dd4c00((longlong)*(int *)(lVar6 + 0x230) << 3,"same vh list");
  *(undefined8 *)(lVar6 + 400) = uVar10;
  *(undefined8 *)(lVar6 + 0x100) = *(undefined8 *)(param_2 + 0x32);
  if (*param_2 == -2) {
    builtin_strncpy(acStack_40,"ener",4);
    uStack_3c._0_1_ = ')';
    uStack_3c._1_1_ = '\0';
    local_48 = 0x7473696c206f6e28;
  }
  else if (*param_2 == -1) {
    local_38 = 0x2964;
    local_36 = 0;
    local_48 = 0x676e697672657328;
    builtin_strncpy(acStack_40," dis",4);
    uStack_3c._0_1_ = 'a';
    uStack_3c._1_1_ = 'b';
    uStack_3c._2_1_ = 'l';
    uStack_3c._3_1_ = 'e';
  }
  else {
    FUN_143dc6cb0(&local_48,0x14,"port %u");
  }
  if (((*(byte *)(*(longlong *)(lVar6 + 0x148) + 0x4b0) & 0x20) != 0) ||
     (local_50 = &DAT_145d39b80, (*(byte *)(lVar6 + 0x22c) & 0x20) != 0)) {
    local_50 = &DAT_145d39b84;
  }
  local_58 = *(undefined4 *)(lVar6 + 0x230);
  Curl_pp_sendf(4,"Creating Vhost \'%s\' %s, %d protocols, IPv6 %s\n",*(undefined8 *)(lVar6 + 0x160)
               );
  for (puVar11 = *(undefined8 **)(param_2 + 0x32); puVar11 != (undefined8 *)0x0;
      puVar11 = (undefined8 *)*puVar11) {
    for (puVar4 = (undefined8 *)puVar11[7]; puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      iVar12 = 0;
      if (0 < *(int *)(lVar6 + 0x230)) {
        plVar15 = *(longlong **)(lVar6 + 0x170);
        do {
          pcVar7 = (char *)puVar4[3];
          do {
            cVar1 = *pcVar7;
            cVar2 = pcVar7[*plVar15 - (longlong)puVar4[3]];
            if (cVar1 != cVar2) break;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            puVar4[3] = (longlong)iVar12;
            break;
          }
          iVar12 = iVar12 + 1;
          plVar15 = plVar15 + 7;
        } while (iVar12 < *(int *)(lVar6 + 0x230));
      }
      if (iVar12 == *(int *)(lVar6 + 0x230)) {
        Curl_pp_sendf(1,"ignoring unknown interp pr %s\n",puVar4[3]);
      }
    }
  }
  *(int *)(lVar6 + 0x228) = *param_2;
  *(undefined4 *)(lVar6 + 0x110) = 0;
  *(undefined1 *)(lVar6 + 0x80) = 0;
  if (*(longlong *)(param_2 + 0x14) == 0) {
    pcVar7 = getenv("http_proxy");
    if (pcVar7 != (char *)0x0) goto LAB_143dca3c3;
  }
  else {
    iVar12 = *(int *)(lVar6 + 0x110);
    if (param_2[0x16] != 0) {
      iVar12 = param_2[0x16];
    }
    *(int *)(lVar6 + 0x110) = iVar12;
    pcVar7 = *(char **)(param_2 + 0x14);
LAB_143dca3c3:
    FUN_143dc6ac0(lVar6,pcVar7);
  }
  *(int *)(lVar6 + 0x234) = param_2[0x1c];
  *(int *)(lVar6 + 0x23c) = param_2[0x1e];
  *(int *)(lVar6 + 0x238) = param_2[0x1d];
  if ((*(uint *)(lVar6 + 0x22c) & 0x8000) != 0) {
    Curl_pp_sendf(4,"   STS enabled\n");
  }
  iVar12 = FUN_143dd6e70(param_2,lVar6);
  if (iVar12 == 0) {
    iVar12 = FUN_143dd7340(param_2,lVar6);
    if (iVar12 == 0) {
      iVar12 = FUN_143dcf2c0(param_2,lVar6);
      if (iVar12 < 0) {
        Curl_pp_sendf(1,"init server failed\n");
        goto LAB_143dca4a5;
      }
      lVar8 = *plVar16;
      while (lVar8 != 0) {
        plVar16 = (longlong *)(*plVar16 + 0x150);
        lVar8 = *plVar16;
      }
      *plVar16 = lVar6;
      if ((*(byte *)(param_1 + 0x4d0) & 0x20) == 0) {
        return lVar6;
      }
      iVar12 = FUN_143dca5b0(param_1);
      if (iVar12 == 0) {
        return lVar6;
      }
      pcVar7 = "%s: lws_protocol_init failed\n";
    }
    else {
      pcVar7 = "%s: lws_context_init_client_ssl failed\n";
    }
  }
  else {
    pcVar7 = "%s: lws_context_init_server_ssl failed\n";
  }
  Curl_pp_sendf(1,pcVar7,"lws_create_vhost");
LAB_143dca4a5:
  puVar11 = (undefined8 *)thunk_FUN_143dd4bc0(0,0x18,"deferred free");
  if (puVar11 != (undefined8 *)0x0) {
    FUN_143dca8e0(lVar6);
    *puVar11 = *(undefined8 *)(*(longlong *)(lVar6 + 0x148) + 0x398);
    uVar5 = FUN_143dc66b0();
    puVar11[1] = (ulonglong)uVar5;
    puVar11[2] = lVar6;
    *(undefined8 **)(*(longlong *)(lVar6 + 0x148) + 0x398) = puVar11;
  }
  FUN_143dcabc0(lVar6);
  return 0;
}



// FUNCTION 143dca540 FUN_143dca540 body=106 status=ok
// SIG undefined FUN_143dca540(void)

void FUN_143dca540(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  
  FUN_143dcd650();
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x3d0);
  pcVar3 = *(code **)(lVar2 + 0x30);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1);
    FUN_140447710(param_1);
    return;
  }
  pcVar3 = *(code **)(lVar2 + 0x68);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1);
  }
  FUN_140447710(param_1);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x78) + 0x4a8);
  *piVar1 = *piVar1 + -1;
  thunk_FUN_143dd4bc0(param_1,0,"lws_free");
  return;
}



// FUNCTION 143dca5b0 FUN_143dca5b0 body=685 status=ok
// SIG undefined FUN_143dca5b0(void)

undefined8 FUN_143dca5b0(longlong param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 local_1f8 [120];
  longlong local_180;
  longlong local_178;
  longlong local_158;
  
  bVar5 = false;
  lVar3 = *(longlong *)(param_1 + 0x378);
  if ((*(uint *)(param_1 + 0x4d0) & 0x40) == 0) {
    *(uint *)(param_1 + 0x4d0) = *(uint *)(param_1 + 0x4d0) | 0x40;
    _guard_xfg_dispatch_icall_nop(local_1f8,0,0x1d0);
    local_180 = param_1;
    for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x150)) {
      local_178 = lVar3;
      if (((*(byte *)(lVar3 + 0x248) & 1) == 0) && ((*(uint *)(lVar3 + 0x22c) & 0x2000000) == 0)) {
        iVar11 = 0;
        if (0 < *(int *)(lVar3 + 0x230)) {
          do {
            lVar9 = (longlong)iVar11;
            lVar10 = lVar9 * 0x38;
            local_158 = *(longlong *)(lVar3 + 0x170) + lVar10;
            lVar8 = *(longlong *)(*(longlong *)(lVar3 + 0x170) + lVar10);
            if (lVar8 != 0) {
              plVar13 = *(longlong **)(lVar3 + 0x180);
              if (plVar13 != (longlong *)0x0) {
LAB_143dca6c0:
                pcVar7 = (char *)plVar13[2];
                lVar12 = lVar8 - (longlong)pcVar7;
                do {
                  cVar1 = *pcVar7;
                  cVar2 = pcVar7[lVar12];
                  if (cVar1 != cVar2) break;
                  pcVar7 = pcVar7 + 1;
                } while (cVar2 != '\0');
                if (cVar1 != cVar2) goto code_r0x000143dca6eb;
                for (puVar4 = (undefined8 *)plVar13[1]; puVar4 != (undefined8 *)0x0;
                    puVar4 = (undefined8 *)*puVar4) {
                  lVar8 = 0;
                  do {
                    lVar12 = lVar8 + 1;
                    if (*(char *)(puVar4[2] + lVar8) != "default"[lVar8]) goto LAB_143dca82b;
                    lVar8 = lVar12;
                  } while (lVar12 != 8);
                  *(char *)(lVar3 + 0x24c) = (char)iVar11;
LAB_143dca82b:
                  lVar8 = 0;
                  do {
                    lVar12 = lVar8 + 1;
                    if (*(char *)(puVar4[2] + lVar8) != (&DAT_145dbd33c)[lVar8]) goto LAB_143dca84c;
                    lVar8 = lVar12;
                  } while (lVar12 != 4);
                  *(char *)(lVar3 + 0x24d) = (char)iVar11;
LAB_143dca84c:
                }
                lVar8 = plVar13[1];
                goto LAB_143dca6f6;
              }
LAB_143dca6f3:
              lVar8 = 0;
LAB_143dca6f6:
              bVar5 = (bool)(bVar5 | *(longlong *)(lVar3 + 0x1b0) != 0);
              iVar6 = (**(code **)(*(longlong *)(lVar3 + 0x170) + 8 + lVar10))
                                (local_1f8,0x1b,0,lVar8,0);
              if (iVar6 != 0) {
                thunk_FUN_143dd4bc0(*(undefined8 *)(*(longlong *)(lVar3 + 0x178) + lVar9 * 8),0,
                                    "lws_free");
                *(undefined8 *)(*(longlong *)(lVar3 + 0x178) + lVar9 * 8) = 0;
                Curl_pp_sendf(1,"%s: protocol %s failed init\n","lws_protocol_init",
                              *(undefined8 *)(*(longlong *)(lVar3 + 0x170) + lVar10));
              }
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(lVar3 + 0x230));
        }
        *(uint *)(lVar3 + 0x248) = *(uint *)(lVar3 + 0x248) | 1;
      }
    }
    *(uint *)(param_1 + 0x4d0) = *(uint *)(param_1 + 0x4d0) & 0xffffffbf;
    if ((*(byte *)(param_1 + 0x4d0) & 0x20) == 0) {
      FUN_143dc6390(param_1);
    }
    *(uint *)(param_1 + 0x4d0) = *(uint *)(param_1 + 0x4d0) | 0x20;
    if (bVar5) {
      FUN_143dd46a0(param_1);
    }
  }
  return 0;
code_r0x000143dca6eb:
  plVar13 = (longlong *)*plVar13;
  if (plVar13 == (longlong *)0x0) goto LAB_143dca6f3;
  goto LAB_143dca6c0;
}



// FUNCTION 143dca860 FUN_143dca860 body=115 status=ok
// SIG undefined FUN_143dca860(void)

undefined8 FUN_143dca860(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined **ppuVar7;
  
  if (param_2 != 0) {
    ppuVar7 = &PTR_PTR_146838370;
    puVar3 = PTR_PTR_146838370;
    while (puVar3 != (undefined *)0x0) {
      puVar3 = *ppuVar7;
      ppuVar7 = ppuVar7 + 1;
      pcVar4 = *(char **)(puVar3 + 8);
      if (pcVar4 != (char *)0x0) {
        lVar6 = param_2 - (longlong)pcVar4;
        do {
          cVar1 = *pcVar4;
          cVar2 = pcVar4[lVar6];
          if (cVar1 != cVar2) break;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        if ((cVar1 == cVar2) && (*(longlong *)(puVar3 + 0x78) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143dca8cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(puVar3 + 0x78))(param_1,param_2);
          return uVar5;
        }
      }
      puVar3 = *ppuVar7;
    }
  }
  return 0;
}



// FUNCTION 143dca8e0 FUN_143dca8e0 body=729 status=ok
// SIG undefined FUN_143dca8e0(void)

void FUN_143dca8e0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_1e8 [120];
  undefined8 local_170;
  longlong local_168;
  longlong local_148;
  
  lVar5 = *(longlong *)(param_1 + 0x148);
  sVar4 = *(short *)(lVar5 + 0x4dc);
  lVar9 = (longlong)sVar4;
  if ((*(uint *)(param_1 + 0x248) & 2) == 0) {
    uVar11 = 0;
    *(uint *)(param_1 + 0x248) = *(uint *)(param_1 + 0x248) | 2;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      for (lVar7 = *(longlong *)(lVar5 + 0x378); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x150)) {
        if (((lVar7 != param_1) && ((*(byte *)(lVar7 + 0x248) & 2) == 0)) &&
           (*(int *)(lVar7 + 0x228) == *(int *)(param_1 + 0x228))) {
          pcVar6 = *(char **)(lVar7 + 0x168);
          if (pcVar6 == (char *)0x0) {
            if (*(longlong *)(param_1 + 0x168) == 0) {
LAB_143dca9b5:
              *(longlong *)(lVar7 + 0x158) = *(longlong *)(param_1 + 0x158);
              *(undefined8 *)(param_1 + 0x158) = 0;
              if (*(longlong *)(lVar7 + 0x158) != 0) {
                *(longlong *)(*(longlong *)(lVar7 + 0x158) + 0x80) = lVar7;
              }
              Curl_pp_sendf(4,"%s: listen skt from %s to %s\n","lws_vhost_destroy1",
                            *(undefined8 *)(param_1 + 0x160),*(undefined8 *)(lVar7 + 0x160));
              break;
            }
          }
          else if (*(longlong *)(param_1 + 0x168) != 0) {
            lVar12 = *(longlong *)(param_1 + 0x168) - (longlong)pcVar6;
            do {
              cVar2 = *pcVar6;
              cVar3 = pcVar6[lVar12];
              if (cVar2 != cVar3) break;
              pcVar6 = pcVar6 + 1;
            } while (cVar3 != '\0');
            if (cVar2 == cVar3) goto LAB_143dca9b5;
          }
        }
      }
    }
    if (sVar4 != 0) {
      puVar10 = (uint *)(lVar5 + 0x13c + lVar9 * 0xa8);
      do {
        lVar9 = lVar9 + -1;
        puVar10 = puVar10 + -0x2a;
        uVar8 = uVar11;
        if (*puVar10 != 0) {
          do {
            lVar7 = FUN_143dd33b0(lVar5);
            if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x80) == param_1)) {
              thunk_FUN_143dc4f60(lVar7,9999,"vh destroy");
              uVar8 = uVar8 - 1;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *puVar10);
        }
      } while (lVar9 != 0);
    }
    lVar9 = *(longlong *)(param_1 + 0x218);
    while (lVar9 != 0) {
      FUN_143dc6f70(param_1);
      lVar9 = *(longlong *)(param_1 + 0x218);
    }
    _guard_xfg_dispatch_icall_nop(local_1e8,0,0x1d0);
    lVar9 = *(longlong *)(param_1 + 0x170);
    local_170 = *(undefined8 *)(param_1 + 0x148);
    if (((lVar9 != 0) && ((*(byte *)(param_1 + 0x248) & 1) != 0)) &&
       (local_168 = param_1, 0 < *(int *)(param_1 + 0x230))) {
      do {
        local_148 = lVar9;
        (**(code **)(lVar9 + 8))(local_1e8,0x1c,0,0,0);
        lVar9 = lVar9 + 0x38;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)(param_1 + 0x230));
    }
    plVar1 = (longlong *)(lVar5 + 0x378);
    lVar5 = *plVar1;
    while (lVar5 != 0) {
      if (*plVar1 == param_1) {
        *plVar1 = *(longlong *)(param_1 + 0x150);
        break;
      }
      plVar1 = (longlong *)(*plVar1 + 0x150);
      lVar5 = *plVar1;
    }
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x388);
    *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x388) = param_1;
  }
  return;
}



// FUNCTION 143dcabc0 FUN_143dcabc0 body=471 status=ok
// SIG undefined FUN_143dcabc0(void)

void FUN_143dcabc0(void *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar9;
  undefined **ppuVar10;
  ulonglong uVar8;
  
  lVar2 = *(longlong *)((longlong)param_1 + 0x148);
  lVar3 = *(longlong *)(lVar2 + 0x398);
  plVar1 = (longlong *)(lVar2 + 0x398);
  while (lVar3 != 0) {
    plVar4 = (longlong *)*plVar1;
    if ((void *)plVar4[2] == param_1) {
      *plVar1 = *plVar4;
      thunk_FUN_143dd4bc0(plVar4,0,"lws_free");
      break;
    }
    plVar1 = plVar4;
    lVar3 = *plVar4;
  }
  plVar1 = (longlong *)(lVar2 + 0x388);
  lVar3 = *plVar1;
  do {
    if (lVar3 == 0) {
LAB_143dcac49:
      uVar8 = 0;
      if ((*(longlong *)((longlong)param_1 + 0x170) != 0) &&
         (uVar9 = uVar8, 0 < *(int *)((longlong)param_1 + 0x230))) {
        do {
          if ((*(longlong *)((longlong)param_1 + 0x178) != 0) &&
             (lVar3 = *(longlong *)(uVar9 + *(longlong *)((longlong)param_1 + 0x178)), lVar3 != 0))
          {
            thunk_FUN_143dd4bc0(lVar3,0,"lws_free");
            *(undefined8 *)(uVar9 + *(longlong *)((longlong)param_1 + 0x178)) = 0;
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          uVar9 = uVar9 + 8;
        } while ((int)uVar7 < *(int *)((longlong)param_1 + 0x230));
      }
      if (*(longlong *)((longlong)param_1 + 0x178) != 0) {
        thunk_FUN_143dd4bc0(*(longlong *)((longlong)param_1 + 0x178),0,"lws_free");
      }
      FUN_143dd3960(param_1);
      thunk_FUN_143dd4bc0(*(undefined8 *)((longlong)param_1 + 400),0,"lws_free");
      if ((*(longlong *)(lVar2 + 0x390) != 0) || ((*(uint *)(lVar2 + 0x4b0) & 0x2000) != 0)) {
        thunk_FUN_143dd4bc0(*(undefined8 *)((longlong)param_1 + 0x170),0,"lws_free");
      }
      ppuVar10 = &PTR_PTR_146838370;
      puVar6 = PTR_PTR_146838370;
      while (puVar6 != (undefined *)0x0) {
        puVar6 = *ppuVar10;
        ppuVar10 = ppuVar10 + 1;
        if (*(code **)(puVar6 + 0x28) != (code *)0x0) {
          (**(code **)(puVar6 + 0x28))(param_1);
        }
        puVar6 = *ppuVar10;
      }
      thunk_FUN_143dd4bc0(*(undefined8 *)((longlong)param_1 + 0x1d0),0,&DAT_145dbcdec);
      *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
      _guard_xfg_dispatch_icall_nop(param_1,0,0x250);
      thunk_FUN_143dd4bc0(param_1,0,"lws_free");
      return;
    }
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == param_1) {
      *plVar1 = *(longlong *)((longlong)pvVar5 + 0x150);
      goto LAB_143dcac49;
    }
    plVar1 = (longlong *)((longlong)pvVar5 + 0x150);
    lVar3 = *plVar1;
  } while( true );
}



// FUNCTION 143dcada0 FUN_143dcada0 body=2351 status=ok
// SIG undefined FUN_143dcada0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143dcada0(longlong param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  char local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  pcVar15 = "";
  lVar4 = *(longlong *)(param_1 + 0x78);
  uVar16 = 0;
  lVar17 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + lVar4;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar9 = FUN_143dce730(param_1,0x5c);
    if (lVar9 != 0) {
      lVar14 = 0;
      do {
        lVar13 = lVar14 + 1;
        if (*(char *)(lVar9 + lVar14) != (&DAT_145b250c4)[lVar14]) {
          lVar14 = 0;
          goto LAB_143dcae60;
        }
        lVar14 = lVar13;
      } while (lVar13 != 4);
    }
    goto LAB_143dcae77;
  }
  pcVar15 = "ah was NULL at cc2";
  Curl_pp_sendf(1,&DAT_145af6478,"ah was NULL at cc2");
LAB_143dcb50e:
  if ((*(uint *)(param_1 + 0x70) & 0x10000200) == 0x10000000) {
    local_98 = -1;
    do {
      local_98 = local_98 + 1;
    } while (pcVar15[local_98] != '\0');
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
              (param_1,1,*(undefined8 *)(param_1 + 0x130),pcVar15);
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x20000;
  }
  if (*(int *)(param_1 + 0x1a0) == -1) {
    FUN_143dc6980(param_1);
    thunk_FUN_143dcdf90(param_1,0);
    FUN_143dcbf50(param_1);
    thunk_FUN_143dd4bc0(*(undefined8 *)(param_1 + 0xf8),0,&DAT_145dbcdec);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    thunk_FUN_143dd4bc0(param_1,0,"lws_free");
    return 0;
  }
  goto LAB_143dcb680;
  while (lVar14 = lVar13, lVar13 != 5) {
LAB_143dcae60:
    lVar13 = lVar14 + 1;
    if (*(char *)(lVar9 + lVar14) != (&DAT_145b250c8)[lVar14]) goto LAB_143dcaf18;
  }
LAB_143dcae77:
  if ((*(uint *)(param_1 + 0x1bc) & 0x200) == 0) {
LAB_143dcaf18:
    if (*(longlong *)(param_1 + 0xf8) == 0) {
      FUN_143dce730(param_1,0x58);
      uVar12 = FUN_143dcc0c0();
      *(undefined8 *)(param_1 + 0xf8) = uVar12;
    }
    if (lVar9 != 0) {
      lVar14 = 0;
      do {
        lVar13 = lVar14 + 1;
        if (*(char *)(lVar9 + lVar14) != (&DAT_145b250c4)[lVar14]) {
          lVar14 = 0;
          goto LAB_143dcafb3;
        }
        lVar14 = lVar13;
      } while (lVar13 != 4);
      goto LAB_143dcafc6;
    }
    goto LAB_143dcb000;
  }
  pcVar10 = (char *)FUN_143dce730(param_1,0x58);
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x1a8);
  do {
    do {
      lVar13 = lVar14;
      if (lVar13 == 0) goto LAB_143dcaf18;
      lVar14 = *(longlong *)(lVar13 + 8);
    } while ((lVar13 + -0x100 == param_1) || (*(longlong *)(lVar13 + -8) == 0));
    pcVar11 = pcVar10;
    do {
      cVar1 = *pcVar11;
      cVar2 = pcVar11[*(longlong *)(lVar13 + -8) - (longlong)pcVar10];
      if (cVar1 != cVar2) break;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
  } while (((cVar1 != cVar2) || (((*(uint *)(lVar13 + 0x70) ^ *(uint *)(param_1 + 0x170)) & 1) != 0)
           ) || (*(short *)(param_1 + 0x1c0) != *(short *)(lVar13 + 0xc0)));
  if ((*(uint *)(lVar13 + 0xbc) & 0x100) != 0) goto LAB_143dcaf18;
  FUN_143dc62d0(param_1 + 0x120,lVar13 + 0x10);
  if ((*(longlong *)(param_1 + 0x120) != 0) || (*(longlong *)(param_1 + 0x128) != 0)) {
    *(undefined2 *)(param_1 + 0x70) = 0x12;
    FUN_143dcdd70(lVar13 + -0x100);
    return param_1;
  }
LAB_143dcb603:
  *(undefined2 *)(param_1 + 0x70) = 0x11;
  FUN_143dc6c40(param_1,8,0x14);
  local_58 = *(undefined8 *)(param_1 + 0x178);
  local_50 = 0x90009;
  iVar7 = FUN_143dcc6e0(lVar4,&local_58);
  if (-1 < iVar7) {
    if (iVar7 != 0) {
      return 0;
    }
    return param_1;
  }
  pcVar15 = "first service failed";
  goto LAB_143dcb647;
  while (lVar14 = lVar13, lVar13 != 5) {
LAB_143dcafb3:
    lVar13 = lVar14 + 1;
    if (*(char *)(lVar9 + lVar14) != (&DAT_145b250c8)[lVar14]) goto LAB_143dcb000;
  }
LAB_143dcafc6:
  if (((*(longlong *)(param_1 + 0x120) == 0) && (*(longlong *)(param_1 + 0x128) == 0)) &&
     ((*(longlong *)(param_1 + 0x100) == 0 && (*(longlong *)(param_1 + 0x108) == 0)))) {
    FUN_143dc62d0((longlong *)(param_1 + 0x100),*(longlong *)(param_1 + 0x80) + 0x1a0);
  }
LAB_143dcb000:
  lVar9 = *(longlong *)(param_1 + 0x80);
  if (((*(byte *)(*(longlong *)(lVar9 + 0x148) + 0x4b0) & 0x20) == 0) &&
     ((*(byte *)(lVar9 + 0x22c) & 0x20) == 0)) {
    uVar6 = 0x400000;
  }
  else {
    uVar6 = 0;
  }
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xffbfffff;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | uVar6;
  if (*(int *)(lVar9 + 0x110) == 0) {
    lVar9 = FUN_143dce730(param_1,0x58);
  }
  else {
    uVar3 = *(ushort *)(param_1 + 0x1c0);
    uVar12 = FUN_143dce730(param_1,0x58);
    iVar7 = sprintf(*(char **)(lVar17 + 0xa8),
                    "CONNECT %s:%u HTTP/1.0\r\nUser-agent: libwebsockets\r\n",uVar12,
                    (ulonglong)uVar3);
    lVar9 = (longlong)iVar7;
    if (**(char **)(param_1 + 0x80) != '\0') {
      iVar7 = sprintf((char *)(*(longlong *)(lVar17 + 0xa8) + lVar9),
                      "Proxy-authorization: basic %s\r\n");
      lVar9 = lVar9 + iVar7;
    }
    iVar7 = sprintf((char *)(*(longlong *)(lVar17 + 0xa8) + lVar9),"\r\n");
    uVar16 = lVar9 + iVar7;
    lVar9 = *(longlong *)(param_1 + 0x80) + 0x80;
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    sprintf(local_48,"%i");
    local_80 = 1;
    local_88 = 0x200000008;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    if ((*(uint *)(param_1 + 0x1b8) & 0x400000) != 0) {
      local_88 = 0xc08;
    }
    iVar7 = getaddrinfo(lVar9,local_48,&local_88,param_1 + 0x180);
    if (iVar7 != 0) {
      Curl_pp_sendf(4,"%s: getaddrinfo failed %d\n","lws_client_connect_2",iVar7);
      pcVar15 = "getaddrinfo failed";
      goto LAB_143dcb50e;
    }
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x180);
  }
  lVar9 = *(longlong *)(param_1 + 0x188);
  while (lVar9 != 0) {
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x188) + 4);
    if ((iVar7 == 2) || (((*(uint *)(param_1 + 0x1b8) & 0x400000) != 0 && (iVar7 == 0x17)))) {
      if (*(longlong *)(param_1 + 0x178) == -1) {
        pcVar5 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x3d0) + 0x38);
        if ((pcVar5 != (code *)0x0) && (iVar7 = (*pcVar5)(param_1), iVar7 != 0)) {
          pcVar15 = "waiting for event loop watcher to close";
          goto LAB_143dcb50e;
        }
        lVar9 = Ordinal_23(*(undefined4 *)(*(longlong *)(param_1 + 0x188) + 4),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 8),0);
        *(longlong *)(param_1 + 0x178) = lVar9;
        if (lVar9 == -1) {
          if (*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x28) != 0) goto LAB_143dcb43e;
          Curl_pp_sendf(2,"Unable to open socket\n");
          pcVar15 = "unable to open socket";
          goto LAB_143dcb50e;
        }
        iVar7 = FUN_143dd31a0(*(undefined8 *)(param_1 + 0x80),lVar9);
        if (iVar7 != 0) {
          Curl_pp_sendf(1,"Failed to set wsi socket options\n");
          Ordinal_3(*(undefined8 *)(param_1 + 0x178));
          pcVar15 = "set socket opts failed";
          goto LAB_143dcb50e;
        }
        *(undefined2 *)(param_1 + 0x70) = 0x201;
        pcVar5 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x3d0) + 0x48);
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(param_1);
        }
        iVar7 = FUN_143dcd320(*(undefined8 *)(param_1 + 0x78),param_1);
        if (iVar7 != 0) {
          Ordinal_3(*(undefined8 *)(param_1 + 0x178));
          pcVar15 = "insert wsi failed";
          goto LAB_143dcb50e;
        }
        thunk_FUN_143dcd530(param_1,0,9);
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x170);
        }
        local_98 = 0;
        (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                  (param_1,0x1d,*(undefined8 *)(param_1 + 0x130));
        FUN_143dc6c40(param_1);
        lVar9 = FUN_143dce730(param_1,0x5d);
        if ((lVar9 == 0) ||
           (iVar7 = FUN_143dc6d30(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x178)),
           -1 < iVar7)) goto LAB_143dcb35c;
        if (*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x28) == 0) {
          pcVar15 = "unable to bind socket";
          goto LAB_143dcb647;
        }
      }
      else {
LAB_143dcb35c:
        iVar7 = Ordinal_4(*(undefined8 *)(param_1 + 0x178),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x20));
        if ((iVar7 != -1) && (iVar7 = Ordinal_111(), iVar7 != 0x2748)) break;
        iVar7 = Ordinal_111();
        if ((((iVar7 == 0x2735) || (iVar7 = Ordinal_111(), iVar7 == 0x2734)) ||
            (iVar7 = Ordinal_111(), iVar7 == 0x2733)) || (iVar7 = Ordinal_111(), iVar7 == 0x2726)) {
          iVar7 = FUN_143dd2ae0(param_1);
          if (iVar7 == 0) {
            iVar7 = thunk_FUN_143dcd530(param_1,0,2);
            if (iVar7 == 0) {
              return param_1;
            }
            pcVar15 = "POLLOUT set failed";
            goto LAB_143dcb647;
          }
          if (*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x28) == 0) {
            pcVar15 = "socket connect failed";
            goto LAB_143dcb647;
          }
        }
        else {
          iVar7 = Ordinal_111();
          if (iVar7 == 0x2748) break;
          if (*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x28) == 0) {
            uVar8 = Ordinal_111();
            Curl_pp_sendf(4,"Connect failed errno=%d\n",uVar8);
            pcVar15 = "connect failed";
            goto LAB_143dcb647;
          }
        }
      }
      FUN_143dcd650(param_1);
      Ordinal_3(*(undefined8 *)(param_1 + 0x178));
    }
LAB_143dcb43e:
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x28);
    *(longlong *)(param_1 + 0x188) = lVar9;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x110) == 0) goto LAB_143dcb603;
  iVar7 = FUN_143dce610(param_1,0x58,*(longlong *)(param_1 + 0x80) + 0x80);
  if (iVar7 == 0) {
    *(undefined2 *)(param_1 + 0x1c0) = *(undefined2 *)(*(longlong *)(param_1 + 0x80) + 0x110);
    iVar7 = Ordinal_19(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(lVar17 + 0xa8),
                       uVar16 & 0xffffffff,0);
    if (-1 < iVar7) {
      FUN_143dc6c40(param_1,1,0x14);
      *(undefined2 *)(param_1 + 0x70) = 0x202;
      return param_1;
    }
    pcVar15 = "proxy write failed";
  }
LAB_143dcb647:
  local_98 = -1;
  do {
    local_98 = local_98 + 1;
  } while (pcVar15[local_98] != '\0');
  (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
            (param_1,1,*(undefined8 *)(param_1 + 0x130),pcVar15);
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x20000;
LAB_143dcb680:
  thunk_FUN_143dc4f60(param_1,0,"client_connect2");
  return 0;
}



// FUNCTION 143dcb6d0 FUN_143dcb6d0 body=983 status=ok
// SIG undefined FUN_143dcb6d0(void)

longlong FUN_143dcb6d0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  lVar5 = param_1[6];
  if ((*(uint *)(*param_1 + 0x4d0) & 0x10) != 0) {
    return 0;
  }
  if ((*(uint *)(*param_1 + 0x4d0) & 0x20) == 0) {
    FUN_143dca5b0();
  }
  if (param_1[0x11] != 0) {
    lVar5 = param_1[0x11];
  }
  lVar4 = FUN_143dd4c00(0x1d0,"client wsi");
  if (lVar4 != 0) {
    *(longlong *)(lVar4 + 0x78) = *param_1;
    FUN_143dc69d0(lVar4,0x10000000,0x200,&PTR_DAT_146838500);
    *(undefined8 *)(lVar4 + 0x178) = 0xffffffffffffffff;
    if ((param_1[10] == 0) && (iVar3 = FUN_143dd7c90(param_1,lVar4), iVar3 != 0)) {
      return 0;
    }
    *(undefined8 *)(lVar4 + 0x130) = 0;
    *(undefined1 *)(lVar4 + 0x1c6) = 0;
    *(undefined4 *)(lVar4 + 0x1a0) = 0xffffffff;
    *(short *)(lVar4 + 0x1c0) = (short)param_1[2];
    lVar1 = param_1[0xe];
    *(longlong *)(lVar4 + 0x80) = lVar1;
    if (lVar1 == 0) {
      *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(*param_1 + 0x378);
    }
    if (*(longlong *)(lVar4 + 0x80) == 0) {
      Curl_pp_sendf(1,"At least one vhost in the context is required\n");
    }
    else {
      *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(*(longlong *)(lVar4 + 0x80) + 0x170);
      *(uint *)(lVar4 + 0x1bc) =
           *(uint *)(lVar4 + 0x1bc) ^
           (*(uint *)((longlong)param_1 + 0x14) >> 7 ^ *(uint *)(lVar4 + 0x1bc)) & 0x200;
      FUN_143dc69d0(lVar4,0x10000000,0x200,&PTR_DAT_146838500);
      if ((lVar5 != 0) && (lVar5 = FUN_143dc70b0(*(undefined8 *)(lVar4 + 0x80),lVar5), lVar5 != 0))
      {
        *(longlong *)(lVar4 + 0xa0) = lVar5;
      }
      if ((*(longlong *)(lVar4 + 0x130) == 0) && (param_1[8] != 0)) {
        *(uint *)(lVar4 + 0x1b8) = *(uint *)(lVar4 + 0x1b8) | 0x40;
        *(longlong *)(lVar4 + 0x130) = param_1[8];
      }
      else if ((param_1[10] != 0) && (iVar3 = FUN_143dc6320(lVar4), iVar3 != 0)) goto LAB_143dcb8bd;
      *(undefined4 *)(lVar4 + 0x170) = *(undefined4 *)((longlong)param_1 + 0x14);
      lVar5 = FUN_143dd4c00(0x40,"client stash");
      *(longlong *)(lVar4 + 0xf0) = lVar5;
      if (lVar5 == 0) {
        Curl_pp_sendf(1,"%s: OOM\n","lws_client_connect_via_info");
      }
      else {
        uVar6 = FUN_143dcc0c0(param_1[1]);
        **(undefined8 **)(lVar4 + 0xf0) = uVar6;
        uVar6 = FUN_143dcc0c0(param_1[3]);
        *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 8) = uVar6;
        uVar6 = FUN_143dcc0c0(param_1[4]);
        *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 0x10) = uVar6;
        plVar2 = *(longlong **)(lVar4 + 0xf0);
        if (((*plVar2 != 0) && (plVar2[1] != 0)) && (plVar2[2] != 0)) {
          if (param_1[5] != 0) {
            uVar6 = FUN_143dcc0c0();
            *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 0x18) = uVar6;
            if (*(longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x18) == 0) goto LAB_143dcb8b5;
          }
          if (param_1[6] != 0) {
            uVar6 = FUN_143dcc0c0();
            *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 0x20) = uVar6;
            if (*(longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x20) == 0) goto LAB_143dcb8b5;
          }
          if (param_1[10] != 0) {
            uVar6 = FUN_143dcc0c0();
            *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 0x28) = uVar6;
            if (*(longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x28) == 0) goto LAB_143dcb8b5;
          }
          if (param_1[0x10] != 0) {
            uVar6 = FUN_143dcc0c0();
            *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 0x30) = uVar6;
            if (*(longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x30) == 0) goto LAB_143dcb8b5;
          }
          if ((param_1[10] == 0) && (param_1[0x12] == 0)) {
            pcVar7 = "http/1.1";
LAB_143dcba27:
            uVar6 = FUN_143dcc0c0(pcVar7);
            *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 0x38) = uVar6;
            if (*(longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x38) == 0) goto LAB_143dcb8b5;
          }
          else {
            pcVar7 = (char *)param_1[0x12];
            if (pcVar7 != (char *)0x0) goto LAB_143dcba27;
          }
          if ((longlong *)param_1[0xf] != (longlong *)0x0) {
            *(longlong *)param_1[0xf] = lVar4;
          }
          iVar3 = FUN_143dce7a0(lVar4,0);
          if (-1 < iVar3) {
            if (param_1[0xb] != 0) {
              *(longlong *)(lVar4 + 0x88) = param_1[0xb];
              *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(param_1[0xb] + 0x90);
              *(longlong *)(param_1[0xb] + 0x90) = lVar4;
            }
            return lVar4;
          }
          goto LAB_143dcb8ce;
        }
      }
LAB_143dcb8b5:
      FUN_143dcbf50(lVar4);
    }
  }
LAB_143dcb8bd:
  thunk_FUN_143dd4bc0(lVar4,0,"lws_free");
LAB_143dcb8ce:
  if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xf] = 0;
  }
  return 0;
}



// FUNCTION 143dcbab0 FUN_143dcbab0 body=279 status=ok
// SIG undefined FUN_143dcbab0(void)

longlong FUN_143dcbab0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0xf0);
  if (puVar2 == (undefined8 *)0x0) {
    return param_1;
  }
  iVar3 = FUN_143dce610(param_1,0x58,*puVar2);
  if (((iVar3 != 0) || (iVar3 = FUN_143dce610(param_1,0x59,puVar2[1]), iVar3 != 0)) ||
     (iVar3 = FUN_143dce610(param_1,0x5a,puVar2[2]), iVar3 != 0)) {
    return 0;
  }
  if ((puVar2[3] != 0) && (iVar3 = FUN_143dce610(param_1,0x5b), iVar3 != 0)) {
    return 0;
  }
  if ((puVar2[4] != 0) && (iVar3 = FUN_143dce610(param_1,0x57), iVar3 != 0)) {
    return 0;
  }
  if ((puVar2[5] != 0) && (iVar3 = FUN_143dce610(param_1,0x5c), iVar3 != 0)) {
    return 0;
  }
  if ((puVar2[6] != 0) && (iVar3 = FUN_143dce610(param_1,0x5d), iVar3 != 0)) {
    return 0;
  }
  if ((puVar2[7] != 0) && (iVar3 = FUN_143dce610(param_1,0x5e), iVar3 != 0)) {
    return 0;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x78) + 0x4a8);
  *piVar1 = *piVar1 + 1;
  lVar4 = FUN_143dcada0(param_1);
  return lVar4;
}



// FUNCTION 143dcbbd0 FUN_143dcbbd0 body=882 status=ok
// SIG undefined FUN_143dcbbd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143dcbbd0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined2 param_4,
                      char *param_5,undefined8 param_6)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_318 [32];
  char local_2f8 [384];
  char local_178 [304];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  _guard_xfg_dispatch_icall_nop(local_2f8 + 0x50,0,300);
  _guard_xfg_dispatch_icall_nop(local_178,0,300);
  lVar4 = *param_1;
  local_2f8[0x10] = '\0';
  local_2f8[0x11] = '\0';
  local_2f8[0x12] = '\0';
  local_2f8[0x13] = '\0';
  local_2f8[0x14] = '\0';
  local_2f8[0x15] = '\0';
  local_2f8[0x16] = '\0';
  local_2f8[0x17] = '\0';
  local_2f8[0x18] = '\0';
  local_2f8[0x19] = '\0';
  local_2f8[0x1a] = '\0';
  local_2f8[0x1b] = '\0';
  local_2f8[0x1c] = '\0';
  local_2f8[0x1d] = '\0';
  local_2f8[0x1e] = '\0';
  local_2f8[0x1f] = '\0';
  local_2f8[0x20] = '\0';
  local_2f8[0x21] = '\0';
  local_2f8[0x22] = '\0';
  local_2f8[0x23] = '\0';
  local_2f8[0x24] = '\0';
  local_2f8[0x25] = '\0';
  local_2f8[0x26] = '\0';
  local_2f8[0x27] = '\0';
  local_2f8[0x28] = '\0';
  local_2f8[0x29] = '\0';
  local_2f8[0x2a] = '\0';
  local_2f8[0x2b] = '\0';
  local_2f8[0x2c] = '\0';
  local_2f8[0x2d] = '\0';
  local_2f8[0x2e] = '\0';
  local_2f8[0x2f] = 0;
  local_2f8[0] = '\0';
  local_2f8[1] = '\0';
  local_2f8[2] = '\0';
  local_2f8[3] = '\0';
  local_2f8[4] = '\0';
  local_2f8[5] = '\0';
  local_2f8[6] = '\0';
  local_2f8[7] = '\0';
  local_2f8[8] = '\0';
  local_2f8[9] = '\0';
  local_2f8[10] = '\0';
  local_2f8[0xb] = '\0';
  local_2f8[0xc] = '\0';
  local_2f8[0xd] = '\0';
  local_2f8[0xe] = '\0';
  local_2f8[0xf] = 0;
  local_2f8[0x30] = '\0';
  local_2f8[0x31] = '\0';
  local_2f8[0x32] = '\0';
  local_2f8[0x33] = '\0';
  local_2f8[0x34] = '\0';
  local_2f8[0x35] = '\0';
  local_2f8[0x36] = '\0';
  local_2f8[0x37] = '\0';
  local_2f8[0x38] = '\0';
  local_2f8[0x39] = '\0';
  local_2f8[0x3a] = '\0';
  local_2f8[0x3b] = '\0';
  local_2f8[0x3c] = '\0';
  local_2f8[0x3d] = '\0';
  local_2f8[0x3e] = '\0';
  local_2f8[0x3f] = '\0';
  local_2f8[0x40] = '\0';
  local_2f8[0x41] = '\0';
  local_2f8[0x42] = '\0';
  local_2f8[0x43] = '\0';
  local_2f8[0x44] = '\0';
  local_2f8[0x45] = '\0';
  local_2f8[0x46] = '\0';
  local_2f8[0x47] = '\0';
  local_2f8[0x48] = '\0';
  local_2f8[0x49] = '\0';
  local_2f8[0x4a] = '\0';
  local_2f8[0x4b] = '\0';
  local_2f8[0x4c] = '\0';
  local_2f8[0x4d] = '\0';
  local_2f8[0x4e] = '\0';
  local_2f8[0x4f] = 0;
  if (*(char *)(lVar4 + 0x1c9) == '\x03') {
    Curl_pp_sendf(1,"%s: Too many redirects\n","lws_client_reset");
  }
  else {
    *(char *)(lVar4 + 0x1c9) = *(char *)(lVar4 + 0x1c9) + '\x01';
    lVar3 = FUN_143dce730(lVar4,0x5b);
    if (lVar3 != 0) {
      FUN_143dc6f40(local_2f8 + 0x50,lVar3,300);
    }
    lVar3 = FUN_143dce730(lVar4,0x57);
    if (lVar3 != 0) {
      FUN_143dc6f40(local_178,lVar3,300);
    }
    lVar3 = FUN_143dce730(lVar4,0x5c);
    if (lVar3 != 0) {
      FUN_143dc6f40(local_2f8 + 0x10,lVar3,0x20);
    }
    lVar3 = FUN_143dce730(lVar4,0x5d);
    if (lVar3 != 0) {
      FUN_143dc6f40(local_2f8,lVar3,0x10);
    }
    lVar3 = FUN_143dce730(lVar4,0x5e);
    if (lVar3 != 0) {
      FUN_143dc6f40(local_2f8 + 0x30,lVar3,0x20);
    }
    FUN_143dd3c40(lVar4);
    pcVar1 = *(code **)(*(longlong *)(*(longlong *)(lVar4 + 0x78) + 0x3d0) + 0x40);
    if (pcVar1 == (code *)0x0) {
      Ordinal_3(*(undefined8 *)(lVar4 + 0x178));
    }
    else {
      (*pcVar1)(lVar4);
    }
    FUN_143dcd650(lVar4);
    *(uint *)(lVar4 + 0x1b8) = *(uint *)(lVar4 + 0x1b8) & 0xfffffffe;
    *(undefined2 *)(lVar4 + 0x70) = 0x200;
    *(undefined4 *)(lVar4 + 0x170) = param_2;
    *(undefined8 *)(lVar4 + 0x178) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0xa0) = 0;
    *(undefined1 *)(lVar4 + 0x1c6) = 0;
    *(undefined2 *)(lVar4 + 0x1c0) = param_4;
    FUN_143dce400(*(undefined8 *)(lVar4 + 8));
    iVar2 = FUN_143dce610(lVar4,0x58,param_3);
    if ((((iVar2 == 0) && (iVar2 = FUN_143dce610(lVar4,0x5a,param_6), iVar2 == 0)) &&
        ((local_2f8[0x50] == '\0' ||
         (iVar2 = FUN_143dce610(lVar4,0x5b,local_2f8 + 0x50), iVar2 == 0)))) &&
       ((((local_178[0] == '\0' || (iVar2 = FUN_143dce610(lVar4,0x57,local_178), iVar2 == 0)) &&
         ((local_2f8[0x10] == '\0' ||
          (iVar2 = FUN_143dce610(lVar4,0x5c,local_2f8 + 0x10), iVar2 == 0)))) &&
        (((local_2f8[0] == '\0' || (iVar2 = FUN_143dce610(lVar4,0x5d,local_2f8), iVar2 == 0)) &&
         ((local_2f8[0x30] == '\0' ||
          (iVar2 = FUN_143dce610(lVar4,0x5e,local_2f8 + 0x30), iVar2 == 0)))))))) {
      local_2f8[0x50] = 0x2f;
      strncpy(local_2f8 + 0x51,param_5,0x12a);
      iVar2 = FUN_143dce610(lVar4,0x59,local_2f8 + 0x50);
      if (iVar2 == 0) {
        lVar4 = FUN_143dcada0(lVar4);
        *param_1 = lVar4;
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 143dcbf50 FUN_143dcbf50 body=358 status=ok
// SIG undefined FUN_143dcbf50(void)

void FUN_143dcbf50(longlong param_1)

{
  if ((param_1 != 0) && (*(undefined8 **)(param_1 + 0xf0) != (undefined8 *)0x0)) {
    thunk_FUN_143dd4bc0(**(undefined8 **)(param_1 + 0xf0),0,&DAT_145dbcdec);
    **(undefined8 **)(param_1 + 0xf0) = 0;
    thunk_FUN_143dd4bc0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 8),0,&DAT_145dbcdec);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 8) = 0;
    thunk_FUN_143dd4bc0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x10),0,&DAT_145dbcdec);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x10) = 0;
    thunk_FUN_143dd4bc0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x18),0,&DAT_145dbcdec);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x18) = 0;
    thunk_FUN_143dd4bc0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x20),0,&DAT_145dbcdec);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x20) = 0;
    thunk_FUN_143dd4bc0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x28),0,&DAT_145dbcdec);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x28) = 0;
    thunk_FUN_143dd4bc0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x30),0,&DAT_145dbcdec);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x30) = 0;
    thunk_FUN_143dd4bc0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x38),0,&DAT_145dbcdec);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x38) = 0;
    thunk_FUN_143dd4bc0(*(undefined8 *)(param_1 + 0xf0),0,&DAT_145dbcdec);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 143dcc0c0 FUN_143dcc0c0 body=84 status=ok
// SIG undefined FUN_143dcc0c0(void)

void FUN_143dcc0c0(char *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = -1;
  do {
    lVar3 = lVar2;
    lVar2 = lVar3 + 1;
  } while (param_1[lVar2] != '\0');
  lVar2 = thunk_FUN_143dd4bc0(0,lVar3 + 2,"strdup");
  if (lVar2 != 0) {
    lVar2 = lVar2 - (longlong)param_1;
    do {
      cVar1 = *param_1;
      param_1[lVar2] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  return;
}



// FUNCTION 143dcc120 FUN_143dcc120 body=147 status=ok
// SIG undefined FUN_143dcc120(void)

undefined8 FUN_143dcc120(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    iVar1 = FUN_143dc62b0(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0x198));
    if ((int)(uint)*(ushort *)(param_1 + 0x1c2) < iVar1) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
      if ((*(short *)(param_1 + 0x70) == 0x203) && (*(longlong *)(param_1 + 0xa0) != 0)) {
        (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                  (param_1,1,*(undefined8 *)(param_1 + 0x130),"Timed out waiting SSL",0x15);
      }
      FUN_143dc4f60(param_1,0,"timeout");
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143dcc1c0 FUN_143dcc1c0 body=183 status=ok
// SIG undefined FUN_143dcc1c0(void)

undefined8 FUN_143dcc1c0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x1c7);
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (param_3 == 0) {
    if (param_4 != 0) {
      return 0;
    }
  }
  else if (param_4 != 0) {
    iVar3 = FUN_143dc6190(param_1 + 0x140,(longlong)param_3);
    if (iVar3 != 0) {
      return 0;
    }
    FUN_143dc62f0(param_1 + 0xd8);
    return 0;
  }
  if (param_3 != (int)param_2[1]) {
    iVar3 = FUN_143dc5f80(param_1 + 0x140,(longlong)param_3 + *param_2,
                          (longlong)((int)param_2[1] - param_3));
    if (iVar3 < 0) {
      return 1;
    }
    if (iVar3 != 0) {
      FUN_143dc62d0(param_1 + 0xd8,(longlong)cVar1 * 0xa8 + lVar2 + 0xd0);
    }
  }
  return 0;
}



// FUNCTION 143dcc280 FUN_143dcc280 body=205 status=ok
// SIG undefined FUN_143dcc280(void)

undefined8 FUN_143dcc280(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_143dc6100(param_2 + 0x140,0);
  *param_3 = *(undefined8 *)(param_1 + 8);
  iVar2 = FUN_143dd39d0(param_2,*(undefined8 *)(param_1 + 8),
                        *(undefined4 *)(*(longlong *)(param_2 + 0x78) + 0x4bc));
  *(int *)(param_3 + 1) = iVar2;
  if (iVar2 == -4) {
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    if ((iVar2 < 1) || (iVar1 == 0)) {
      return 0;
    }
    iVar1 = FUN_143dc5f80(param_2 + 0x140,*param_3,(longlong)iVar2);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    if (iVar1 != 0) {
      FUN_143dc62d0(param_2 + 0xd8,param_1 + 0x30);
    }
  }
  uVar3 = FUN_143dc6100(param_2 + 0x140,param_3);
  *(undefined4 *)(param_3 + 1) = uVar3;
  return 1;
}



// FUNCTION 143dcc350 FUN_143dcc350 body=73 status=ok
// SIG undefined FUN_143dcc350(void)

void FUN_143dcc350(longlong param_1)

{
  FUN_143dc7570(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8),param_1,
                *(undefined2 *)
                 (*(longlong *)(param_1 + 0x68) + 0xa0 +
                 (ulonglong)(*(uint *)(param_1 + 0x70) >> 0x1d & 1) * 2),
                *(undefined8 *)(param_1 + 0x130),0,0);
  return;
}



// FUNCTION 143dcc3a0 FUN_143dcc3a0 body=406 status=ok
// SIG undefined FUN_143dcc3a0(void)

ulonglong FUN_143dcc3a0(longlong param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x1cf) = 0;
  *(undefined1 *)(param_1 + 0x1ce) = 1;
  if (*(int *)(param_1 + 0x1ac) == 0) {
    if (*(short *)(param_1 + 0x70) == 0x11c) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
    }
    else {
      pcVar2 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x48);
      if ((pcVar2 == (code *)0x0) || (iVar3 = (*pcVar2)(), iVar3 == 0)) goto LAB_143dcc3e8;
      if (iVar3 != 1) {
        if ((*(uint *)(param_1 + 0x1b8) & 0x800000) != 0) {
          *(undefined1 *)(param_1 + 0x1ce) = 0;
          *(undefined1 *)(param_1 + 0x1cf) = 0;
          uVar5 = FUN_143dcc350(param_1);
          return uVar5;
        }
        if (param_2 != 0) {
          cVar1 = *(char *)(param_1 + 0x1cf);
          if (((cVar1 == '\0') && (iVar3 = thunk_FUN_143dcd530(param_1,2), iVar3 != 0)) ||
             ((*(undefined1 *)(param_1 + 0x1ce) = 0, cVar1 == '\0' &&
              ((*(char *)(param_1 + 0x1cf) != '\0' &&
               (iVar3 = thunk_FUN_143dcd530(param_1,0,2), iVar3 != 0)))))) goto LAB_143dcc415;
          *(undefined1 *)(param_1 + 0x1cf) = 0;
        }
        if (((((*(uint *)(param_1 + 0x70) >> 0x1c & 1) == 0) ||
             ((*(byte *)(param_1 + 0x1b8) & 1) != 0)) ||
            (uVar4 = *(uint *)(param_1 + 0x70) & 0xffff, uVar4 == 0x10e)) || (uVar4 == 0x13)) {
          pcVar2 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x50);
          if (pcVar2 == (code *)0x0) {
            *(undefined1 *)(param_1 + 0x1cf) = 0;
            uVar4 = FUN_143dcc350(param_1);
            *(undefined1 *)(param_1 + 0x1ce) = 0;
            if (*(char *)(param_1 + 0x1cf) != '\0') {
              thunk_FUN_143dcd530(param_1,0,2);
            }
            return (ulonglong)uVar4;
          }
          iVar3 = (*pcVar2)();
          if (iVar3 == -1) goto LAB_143dcc415;
        }
LAB_143dcc3e8:
        uVar5 = 0;
        goto LAB_143dcc3ea;
      }
    }
  }
  else {
    iVar3 = FUN_143dccd70(param_1,(ulonglong)*(uint *)(param_1 + 0x1a8) +
                                  *(longlong *)(param_1 + 0x148),*(int *)(param_1 + 0x1ac));
    if (-1 < iVar3) goto LAB_143dcc3e8;
  }
LAB_143dcc415:
  uVar5 = 0xffffffff;
LAB_143dcc3ea:
  *(undefined1 *)(param_1 + 0x1ce) = 0;
  *(undefined1 *)(param_1 + 0x1cf) = 0;
  return uVar5;
}



// FUNCTION 143dcc540 FUN_143dcc540 body=189 status=ok
// SIG undefined FUN_143dcc540(void)

undefined4 FUN_143dcc540(longlong param_1,ulonglong param_2,int param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong local_res8;
  
  cVar1 = *(char *)(param_1 + 0x1c7);
  lVar2 = *(longlong *)(param_1 + 0x78);
  uVar5 = 0;
  lVar4 = FUN_143dc6100(param_1 + 0x140,&local_res8);
  if (lVar4 != 0) {
    if ((local_res8 <= param_2) && (param_2 + (longlong)param_4 <= local_res8 + lVar4)) {
      return 1;
    }
    uVar5 = 1;
  }
  iVar3 = FUN_143dc5f80(param_1 + 0x140,param_2 + (longlong)param_3,(longlong)(param_4 - param_3));
  if (iVar3 < 0) {
    uVar5 = 0xffffffff;
  }
  else if (iVar3 != 0) {
    FUN_143dc62d0(param_1 + 0xd8,(longlong)cVar1 * 0xa8 + lVar2 + 0xd0);
  }
  return uVar5;
}



// FUNCTION 143dcc600 FUN_143dcc600 body=87 status=ok
// SIG undefined FUN_143dcc600(void)

undefined8 FUN_143dcc600(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  *(byte *)(param_1 + 0x144) = *(byte *)(param_1 + 0x144) | 1;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x58);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,0);
    *(byte *)(param_1 + 0x144) = *(byte *)(param_1 + 0x144) & 0xfe;
    return 1;
  }
  uVar2 = FUN_143dd3190();
  *(byte *)(param_1 + 0x144) = *(byte *)(param_1 + 0x144) & 0xfe;
  return uVar2;
}



// FUNCTION 143dcc660 FUN_143dcc660 body=126 status=ok
// SIG undefined FUN_143dcc660(void)

undefined4 FUN_143dcc660(longlong param_1,undefined4 param_2,int param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  
  param_1 = (longlong)param_3 * 0xa8 + param_1;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + 0x98);
  if (((puVar1 == (undefined8 *)0x0) || (pcVar2 = (code *)*puVar1, pcVar2 == (code *)0x0)) ||
     (iVar4 = (*pcVar2)(param_1 + 0xa0), iVar4 == 0)) {
    lVar3 = *(longlong *)(param_1 + 0xd8);
    while( true ) {
      if (lVar3 == 0) {
        return param_2;
      }
      if (*(short *)(lVar3 + -0x68) != 0x10f) break;
      lVar3 = *(longlong *)(lVar3 + 8);
    }
  }
  return 0;
}



// FUNCTION 143dcc6e0 FUN_143dcc6e0 body=8 status=ok
// SIG undefined FUN_143dcc6e0(void)

void FUN_143dcc6e0(undefined8 param_1,undefined8 param_2)

{
  FUN_143dcc6f0(param_1,param_2,0);
  return;
}



// FUNCTION 143dcc6f0 FUN_143dcc6f0 body=353 status=ok
// SIG undefined FUN_143dcc6f0(void)

undefined8 FUN_143dcc6f0(longlong param_1,undefined8 *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3 * 0xa8 + param_1;
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x4d0) & 4) != 0)) {
    return 0xffffffff;
  }
  iVar2 = FUN_143dcc930();
  if (iVar2 != 0) {
    return 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  lVar3 = FUN_143dd33b0(param_1,*param_2);
  if (lVar3 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)((longlong)param_2 + 10);
  if ((((byte)uVar1 & *(byte *)(param_2 + 1) & 9) != 0) || ((uVar1 & 0x20) == 0)) {
    if ((uVar1 & 2) != 0) {
      *(uint *)(lVar3 + 0x1bc) = *(uint *)(lVar3 + 0x1bc) & 0xffffefff;
    }
    if ((((byte)*(ushort *)((longlong)param_2 + 10) & *(byte *)(param_2 + 1) & 9) != 0) ||
       ((*(ushort *)((longlong)param_2 + 10) & 0x20) == 0)) {
      if ((*(short *)(lVar3 + 0x70) == 0x1d) &&
         (((iVar2 = FUN_143dc66a0(lVar3), iVar2 != 0 && (*(longlong *)(lVar3 + 0x150) != 0)) &&
          (iVar2 = FUN_143dd3780(lVar3), -5 < iVar2)))) {
        if (iVar2 < -1) goto LAB_143dcc81a;
        if (iVar2 < 1) goto LAB_143dcc772;
      }
      *(uint *)(lVar3 + 0x1bc) = *(uint *)(lVar3 + 0x1bc) & 0xfffffffe;
      iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x68) + 0x40))(lVar4 + 0xa0,lVar3,param_2);
      if (iVar2 == 3) {
        return 1;
      }
      if (iVar2 != 5) {
LAB_143dcc81a:
        *(undefined2 *)((longlong)param_2 + 10) = 0;
        FUN_143dc5810(lVar4 + 0xa0);
        return 0;
      }
      goto LAB_143dcc772;
    }
  }
  *(uint *)(lVar3 + 0x1b8) = *(uint *)(lVar3 + 0x1b8) | 0x80;
LAB_143dcc772:
  thunk_FUN_143dc4f60(lVar3,0,"close_and_handled");
  return 1;
}



// FUNCTION 143dcc860 FUN_143dcc860 body=195 status=ok
// SIG undefined FUN_143dcc860(void)

uint FUN_143dcc860(longlong param_1,int param_2)

{
  ushort *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  param_1 = (longlong)param_2 * 0xa8 + param_1;
  lVar3 = *(longlong *)(param_1 + 0xd8);
  do {
    uVar6 = 0;
    if (lVar3 == 0) {
LAB_143dcc89d:
      uVar5 = (*(code *)PTR_GetBoundProgramCounterForTimerManager_1468382e8)();
      uVar6 = uVar6 | uVar5;
      lVar3 = *(longlong *)(param_1 + 0xe0);
      while (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x168);
        lVar7 = (longlong)*(int *)(lVar3 + 0x1a0) * 0x10 + *(longlong *)(param_1 + 0xe8);
        puVar1 = (ushort *)(lVar7 + 10);
        *puVar1 = *puVar1 | *(ushort *)(lVar7 + 8) & 9;
        piVar2 = (int *)(lVar3 + 0x1a0);
        lVar3 = lVar4;
        if ((*(byte *)(*(longlong *)(param_1 + 0xe8) + 10 + (longlong)*piVar2 * 0x10) & 9) != 0) {
          uVar6 = 1;
          FUN_143dd42f0();
        }
      }
      return uVar6;
    }
    if (*(short *)(lVar3 + -0x68) != 0x10f) {
      uVar6 = 1;
      goto LAB_143dcc89d;
    }
    lVar3 = *(longlong *)(lVar3 + 8);
  } while( true );
}



// FUNCTION 143dcc930 FUN_143dcc930 body=1081 status=ok
// SIG undefined FUN_143dcc930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143dcc930(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_158 [2];
  undefined1 local_148 [255];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  lVar13 = (longlong)param_3;
  lVar12 = 0;
  uVar14 = 0;
  if (((*(byte *)(param_1 + 0x9a) & 0x20) == 0) && (iVar6 = FUN_143dca5b0(), iVar6 != 0)) {
    uVar9 = 0xffffffff;
  }
  else {
    _time64(local_158);
    if ((param_1[2] < 0x57442252) && (0x57442252 < local_158[0])) {
      param_1[2] = local_158[0];
    }
    lVar1 = *param_1;
    if ((lVar1 != 0) && (lVar8 = local_158[0] - lVar1, 100 < lVar8)) {
      param_1[3] = local_158[0];
      param_1[4] = lVar8;
      local_168 = lVar8;
      Curl_pp_sendf(4,"time discontiguity: at old time %llus, new time %llus: +%llus\n",lVar1,
                    local_158[0]);
      *param_1 = local_158[0] + -1;
    }
    uVar9 = FUN_143dc62b0(param_1,*param_1);
    if ((int)uVar9 != 0) {
      *param_1 = local_158[0];
      FUN_140447710(param_1);
      FUN_143dc9110(param_1,0);
      if (param_2 != (longlong *)0x0) {
        lVar12 = *param_2;
      }
      lVar1 = param_1[lVar13 * 0x15 + 0x17];
      while (lVar1 != 0) {
        lVar8 = *(longlong *)(lVar1 + 8);
        lVar2 = *(longlong *)(lVar1 + 0xc0);
        iVar6 = FUN_143dcc120(lVar1 + -0xb8,local_158[0]);
        lVar1 = lVar8;
        if ((iVar6 != 0) && (lVar2 == lVar12)) {
          uVar14 = 1;
        }
      }
      puVar3 = (undefined8 *)param_1[lVar13 * 0x15 + 0x23];
      while (puVar3 != (undefined8 *)0x0) {
        if ((((*(char *)((longlong)puVar3 + 0x3b2) == '\0') || (lVar1 = puVar3[1], lVar1 == 0)) ||
            (puVar3[99] == 0)) ||
           ((*(longlong *)(lVar1 + 0x80) != 0 &&
            (iVar6 = FUN_143dc62b0(param_1,local_158[0]),
            iVar6 < *(int *)(*(longlong *)(lVar1 + 0x80) + 0x244) + 0x168)))) {
          puVar3 = (undefined8 *)*puVar3;
        }
        else {
          local_148[0] = 0;
          FUN_143dc6590(lVar1,local_148,0x100);
          local_168 = CONCAT44(local_168._4_4_,*(undefined4 *)(puVar3 + 0x74));
          Curl_pp_sendf(4,"ah excessive hold: wsi %p\n  peer address: %s\n  ah pos %u\n",lVar1,
                        local_148);
          local_148[0] = 0;
          iVar6 = 0;
          pcVar10 = (char *)FUN_143dd6d90(0);
          while ((pcVar10 != (char *)0x0 && (*pcVar10 != '\0'))) {
            iVar7 = FUN_143dce760(lVar1,iVar6);
            if ((iVar7 != 0) &&
               ((iVar7 < 0x100 && (iVar7 = FUN_143dce530(lVar1,local_148,0x100,iVar6), 0 < iVar7))))
            {
              local_49 = 0;
              Curl_pp_sendf(4,"   %s = %s\n",pcVar10,local_148);
            }
            iVar6 = iVar6 + 1;
            pcVar10 = (char *)FUN_143dd6d90(iVar6);
          }
          thunk_FUN_143dcdf90(lVar1,0);
          uVar15 = uVar14;
          if ((*(longlong *)(lVar1 + 0x178) != lVar12) || (uVar15 = 1, uVar14 == 0)) {
            FUN_143dc4f60(lVar1,0,"excessive ah");
          }
          puVar3 = (undefined8 *)param_1[lVar13 * 0x15 + 0x23];
          uVar14 = uVar15;
        }
      }
      lVar12 = param_1[0x6f];
      lVar13 = 0;
      if (lVar12 != 0) {
        do {
          puVar3 = *(undefined8 **)(lVar12 + 0x218);
          while (puVar3 != (undefined8 *)0x0) {
            if (local_158[0] < (longlong)puVar3[2]) {
              puVar3 = (undefined8 *)*puVar3;
            }
            else {
              if (lVar13 == 0) {
                lVar13 = FUN_143dd4c00(0x1d0,"cbwsi");
              }
              *(longlong **)(lVar13 + 0x78) = param_1;
              *(longlong *)(lVar13 + 0x80) = lVar12;
              *(undefined8 *)(lVar13 + 0xa0) = puVar3[1];
              local_168 = 0;
              (**(code **)(puVar3[1] + 8))(lVar13,*(undefined4 *)(puVar3 + 3),0,0);
              puVar4 = (undefined8 *)*puVar3;
              FUN_143dc6f70(lVar12,puVar3);
              puVar3 = puVar4;
            }
          }
          lVar12 = *(longlong *)(lVar12 + 0x150);
        } while (lVar12 != 0);
        if (lVar13 != 0) {
          thunk_FUN_143dd4bc0(lVar13,0,"lws_free");
        }
      }
      plVar11 = param_1 + 0x70;
      lVar12 = *plVar11;
      while (lVar12 != 0) {
        lVar12 = *plVar11;
        iVar6 = FUN_143dcf2c0(0,lVar12);
        if (iVar6 == 0) {
          Curl_pp_sendf(4,"vh %s: became connected\n",*(undefined8 *)(lVar12 + 0x160));
          *plVar11 = *(longlong *)(lVar12 + 0x198);
          *(undefined8 *)(lVar12 + 0x198) = 0;
          break;
        }
        plVar11 = (longlong *)(*plVar11 + 0x198);
        lVar12 = *plVar11;
      }
      (*(code *)PTR_FUN_1468382e0)(param_1,param_3,local_158[0]);
      if ((param_1[0x13] != 0) && (pcVar5 = *(code **)(param_1[0x13] + 8), pcVar5 != (code *)0x0)) {
        (*pcVar5)(param_1,local_158[0]);
      }
      uVar9 = (ulonglong)uVar14;
    }
  }
  return uVar9;
}



// FUNCTION 143dccd70 FUN_143dccd70 body=834 status=ok
// SIG undefined FUN_143dccd70(void)

ulonglong FUN_143dccd70(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  size_t _Size;
  int iVar6;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  lVar5 = FUN_1407891a0();
  iVar6 = (int)param_3;
  if ((*(byte *)(param_1 + 0x1bc) & 1) != 0) {
    FUN_143dc7250(1,param_2,param_3);
    Curl_pp_sendf(1,
                  "** %p: vh: %s, prot: %s, role %s: Illegal back-to-back write of %lu detected...\n"
                  ,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x160),
                  **(undefined8 **)(param_1 + 0xa0),**(undefined8 **)(param_1 + 0x68),iVar6);
    return 0xffffffff;
  }
  if (param_3 == 0) {
    return 0;
  }
  if ((*(short *)(param_1 + 0x70) == 0x11c) && (*(int *)(param_1 + 0x1ac) == 0)) {
    return param_3 & 0xffffffff;
  }
  if ((*(uint *)(param_1 + 0x1ac) != 0) &&
     ((param_2 < *(ulonglong *)(param_1 + 0x148) ||
      ((ulonglong)*(uint *)(param_1 + 0x1ac) +
       (ulonglong)*(uint *)(param_1 + 0x1a8) + *(ulonglong *)(param_1 + 0x148) < param_2)))) {
    FUN_143dc7250(1,param_2,param_3);
    Curl_pp_sendf(1,
                  "** %p: vh: %s, prot: %s, Sending new %lu, pending truncated ...\n   It\'s illegal to do an lws_write outside of\n   the writable callback: fix your code\n"
                  ,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x160),
                  **(undefined8 **)(param_1 + 0xa0),CONCAT44(uVar8,iVar6));
    return 0xffffffff;
  }
  if (((*(byte *)(param_1 + 0x1b8) & 2) == 0) && (*(longlong *)(param_1 + 0x178) == -1)) {
    Curl_pp_sendf(2,"** error invalid sock but expected to send\n");
  }
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    iVar4 = *(int *)(lVar1 + 0x18);
    if (iVar4 == 0) {
      iVar4 = *(int *)(lVar5 + 0x4bc);
    }
  }
  else {
    iVar4 = *(int *)(lVar1 + 0x30);
  }
  uVar7 = (ulonglong)(iVar4 + 0x14U);
  if (param_3 < iVar4 + 0x14U) {
    uVar7 = param_3 & 0xffffffff;
  }
  uVar3 = FUN_143dd3b40(param_1,param_2,uVar7);
  *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) | 1;
  uVar7 = (ulonglong)uVar3;
  if (uVar3 == 0xfffffffc) {
    uVar7 = 0;
  }
  else if (uVar3 == 0xffffffff) {
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
    return 0xffffffff;
  }
  iVar4 = (int)uVar7;
  if (*(int *)(param_1 + 0x1ac) == 0) {
    if (uVar7 != param_3) {
      if ((*(longlong *)(param_1 + 0x148) == 0) ||
         (_Size = param_3 - uVar7, *(uint *)(param_1 + 0x1a4) < _Size)) {
        thunk_FUN_143dd4bc0(*(longlong *)(param_1 + 0x148),0,"lws_free");
        _Size = param_3 - uVar7;
        *(int *)(param_1 + 0x1a4) = iVar6 - iVar4;
        lVar5 = thunk_FUN_143dd4bc0(0,_Size,"truncated send alloc");
        *(longlong *)(param_1 + 0x148) = lVar5;
        if (lVar5 == 0) {
          Curl_pp_sendf(1,"truncated send: unable to malloc %lu\n",iVar6 - iVar4);
          return 0xffffffff;
        }
      }
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      *(int *)(param_1 + 0x1ac) = iVar6 - iVar4;
      _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x148),(void *)(uVar7 + param_2),_Size);
      puVar2 = *(undefined4 **)(param_1 + 0xe8);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[5] = *puVar2;
        puVar2[6] = puVar2[1];
        puVar2[7] = puVar2[2];
        puVar2[8] = puVar2[3];
        *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x24) =
             *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x10);
      }
      FUN_143dcdd70(param_1);
      uVar7 = param_3 & 0xffffffff;
    }
    return uVar7;
  }
  *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + iVar4;
  iVar4 = *(int *)(param_1 + 0x1ac) - iVar4;
  *(int *)(param_1 + 0x1ac) = iVar4;
  if (iVar4 == 0) {
    uVar7 = param_3 & 0xffffffff;
    if (*(short *)(param_1 + 0x70) == 0x11c) {
      return 0xffffffff;
    }
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      Curl_pp_sendf(4,"%s: partial completed, doing deferred transaction completed\n",
                    "lws_issue_raw");
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfffffffe;
      uVar7 = FUN_143dd1670(param_1);
      return uVar7;
    }
  }
  FUN_143dcdd70(param_1);
  return uVar7;
}



// FUNCTION 143dcd0c0 FUN_143dcd0c0 body=203 status=ok
// SIG undefined FUN_143dcd0c0(void)

int FUN_143dcd0c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    iVar2 = Ordinal_16(*(undefined8 *)(param_1 + 0x178),param_2,param_3,0);
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x10) = 0x10;
    iVar2 = Ordinal_17(*(undefined8 *)(param_1 + 0x178),param_2,param_3,0,
                       *(longlong *)(param_1 + 0xe8),*(longlong *)(param_1 + 0xe8) + 0x10);
  }
  if (-1 < iVar2) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x80) + 0x118);
      *plVar1 = *plVar1 + (longlong)iVar2;
    }
    return iVar2;
  }
  iVar2 = Ordinal_111();
  if (iVar2 != 0x2733) {
    iVar2 = Ordinal_111();
    if (iVar2 != 0x2733) {
      iVar2 = Ordinal_111();
      if (iVar2 != 0x2714) {
        uVar3 = Ordinal_111();
        Curl_pp_sendf(4,"error on reading from skt : %d\n",uVar3);
        return -1;
      }
    }
  }
  return -4;
}



// FUNCTION 143dcd190 FUN_143dcd190 body=180 status=ok
// SIG undefined FUN_143dcd190(void)

undefined8 FUN_143dcd190(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0xe8);
  if (lVar3 == 0) {
    uVar2 = Ordinal_19(*(undefined8 *)(param_1 + 0x178),param_2,param_3,0);
  }
  else {
    if (*(int *)(param_1 + 0x1ac) == 0) {
      uVar4 = *(undefined4 *)(lVar3 + 0x10);
    }
    else {
      uVar4 = *(undefined4 *)(lVar3 + 0x24);
      lVar3 = lVar3 + 0x14;
    }
    uVar2 = Ordinal_20(*(undefined8 *)(param_1 + 0x178),param_2,param_3,0,lVar3,uVar4);
  }
  if ((int)uVar2 < 0) {
    iVar1 = Ordinal_111();
    if (iVar1 != 0x2733) {
      iVar1 = Ordinal_111();
      if (iVar1 != 0x2733) {
        iVar1 = Ordinal_111();
        if (iVar1 != 0x2714) {
          return 0xffffffff;
        }
      }
    }
    iVar1 = Ordinal_111();
    if (iVar1 == 0x2733) {
      *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) | 0x1000;
    }
    uVar2 = 0xfffffffc;
  }
  return uVar2;
}



// FUNCTION 143dcd250 FUN_143dcd250 body=203 status=ok
// SIG undefined FUN_143dcd250(void)

ulonglong FUN_143dcd250(longlong param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  ulonglong uVar5;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  undefined4 local_10;
  
  if ((*(uint *)(param_1 + 0x1b8) & 0x800000) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    local_28 = param_1;
    local_20 = param_2;
    local_18 = param_3;
    local_10 = param_4;
    iVar4 = (**(code **)(*(longlong *)(lVar2 + 0xa0) + 8))
                      (lVar2,0x44,*(undefined8 *)(lVar2 + 0x130),&local_28,0);
    param_3 = param_3 & 0xffffffff;
    if (iVar4 != 0) {
      param_3 = 1;
    }
    return param_3;
  }
  if ((int)param_3 < 0) {
    Curl_pp_sendf(1,"%s: suspicious len int %d, ulong %lu\n","lws_write",param_3 & 0xffffffff,
                  param_3 & 0xffffffff);
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x80) + 0x120);
    *plVar1 = *plVar1 + param_3;
  }
  pcVar3 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x68);
  if (pcVar3 == (code *)0x0) {
    uVar5 = FUN_143dccd70();
    return uVar5;
  }
  uVar5 = (*pcVar3)();
  return uVar5;
}



// FUNCTION 143dcd320 FUN_143dcd320 body=520 status=ok
// SIG undefined FUN_143dcd320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dcd320(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = *(undefined8 *)(param_2 + 0x178);
  uVar2 = 0;
  lVar3 = param_1 + 0xa0 + (longlong)*(char *)(param_2 + 0x1c7) * 0xa8;
  local_50 = 9;
  if (*(uint *)(lVar3 + 0x9c) < *(uint *)(param_1 + 0x4b4)) {
    if (*(longlong *)(param_2 + 0x80) != 0) {
      local_68 = 1;
      iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x170) + 8))
                        (param_2,0x23,*(undefined8 *)(param_2 + 0x130),&local_58);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    *(int *)(lVar3 + 0x98) = *(int *)(lVar3 + 0x98) + 1;
    FUN_143dd28e0(param_1,param_2);
    iVar1 = *(int *)(lVar3 + 0x9c);
    *(int *)(param_2 + 0x1a0) = iVar1;
    *(undefined8 *)(*(longlong *)(lVar3 + 0x48) + (longlong)iVar1 * 0x10) =
         *(undefined8 *)(param_2 + 0x178);
    *(undefined2 *)(*(longlong *)(lVar3 + 0x48) + 8 + (longlong)*(int *)(param_2 + 0x1a0) * 0x10) =
         9;
    local_50 = CONCAT44(local_50._4_4_,
                        (int)*(short *)(*(longlong *)(lVar3 + 0x48) + 8 +
                                       (ulonglong)*(uint *)(lVar3 + 0x9c) * 0x10));
    FUN_143dd30e0(param_1,param_2);
    if (*(longlong *)(param_2 + 0x80) != 0) {
      local_68 = 0;
      iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x170) + 8))
                        (param_2,0x20,*(undefined8 *)(param_2 + 0x130),&local_58);
      if (iVar1 != 0) {
        uVar2 = 0xffffffff;
      }
    }
    if (*(int *)(lVar3 + 0x9c) == *(int *)(param_1 + 0x4b4) + -1) {
      for (lVar3 = *(longlong *)(param_1 + 0x378); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x150))
      {
        if (*(longlong *)(lVar3 + 0x158) != 0) {
          FUN_143dcd890(*(longlong *)(lVar3 + 0x158),9,0,local_48);
        }
      }
    }
    if (*(longlong *)(param_2 + 0x80) != 0) {
      local_68 = 1;
      iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x170) + 8))
                        (param_2,0x24,*(undefined8 *)(param_2 + 0x130),&local_58);
      if (iVar1 != 0) {
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    Curl_pp_sendf(1,"Too many fds (%d vs %d)\n",*(undefined4 *)(param_1 + 0x490));
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143dcd530 FUN_143dcd530 body=281 status=ok
// SIG undefined FUN_143dcd530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143dcd530(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((param_1 == 0) ||
     (((*(longlong *)(param_1 + 0xa0) == 0 && ((*(uint *)(param_1 + 0x1b8) & 0x10000000) == 0)) ||
      (*(int *)(param_1 + 0x1a0) == -1)))) {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_1407891a0();
    if (lVar3 == 0) {
      uVar2 = 1;
    }
    else {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        local_38 = 0;
        iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                          (param_1,0x23,*(undefined8 *)(param_1 + 0x130),local_28);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
      }
      uVar2 = FUN_143dcd890(param_1,param_2,param_3,local_28);
      if (*(longlong *)(param_1 + 0x80) != 0) {
        local_38 = 0;
        iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                          (param_1,0x24,*(undefined8 *)(param_1 + 0x130),local_28);
        if (iVar1 != 0) {
          uVar2 = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}



// FUNCTION 143dcd650 FUN_143dcd650 body=576 status=ok
// SIG undefined FUN_143dcd650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dcd650(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_48 = *(undefined8 *)(param_1 + 0x178);
  uVar10 = 0;
  lVar3 = *(longlong *)(param_1 + 0x78);
  local_40 = 0;
  lVar11 = lVar3 + 0xa0 + (longlong)*(char *)(param_1 + 0x1c7) * 0xa8;
  if ((*(uint *)(param_1 + 0x1b8) & 0x800000) == 0) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      local_58 = 1;
      iVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                        (param_1,0x23,*(undefined8 *)(param_1 + 0x130),&local_48);
      if (iVar8 != 0) {
        return 0xffffffff;
      }
    }
    FUN_143dcdf20(param_1);
    iVar8 = *(int *)(param_1 + 0x1a0);
    lVar12 = (longlong)iVar8;
    pcVar4 = *(code **)(*(longlong *)(lVar3 + 0x3d0) + 0x50);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(param_1,0x8000000b);
    }
    if (iVar8 != -1) {
      puVar1 = (undefined4 *)
               (*(longlong *)(lVar11 + 0x48) + (ulonglong)(*(int *)(lVar11 + 0x9c) - 1) * 0x10);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)(lVar11 + 0x48) + lVar12 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      FUN_143dd2c80(lVar3,param_1,iVar8);
      lVar9 = FUN_143dd33b0(lVar3,(longlong)*(int *)(*(longlong *)(lVar11 + 0x48) + lVar12 * 0x10));
      if (lVar9 == 0) {
        local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(lVar11 + 0x9c));
        Curl_pp_sendf(1,"no wsi for fd %d at pos %d, pt->fds_count=%d\n",
                      *(undefined4 *)(*(longlong *)(lVar11 + 0x48) + lVar12 * 0x10),iVar8);
      }
      else {
        *(int *)(lVar9 + 0x1a0) = iVar8;
      }
      FUN_143dd2810(lVar3,*(undefined8 *)(param_1 + 0x178));
      *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
    }
    if ((*(longlong *)(param_1 + 0x178) != -1) && (*(longlong *)(param_1 + 0x80) != 0)) {
      local_58 = 0;
      iVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                        (param_1,0x21,*(undefined8 *)(param_1 + 0x130),&local_48);
      uVar10 = 0;
      if (iVar8 != 0) {
        uVar10 = 0xffffffff;
      }
    }
    if (((*(byte *)(lVar3 + 0x4d0) & 2) == 0) &&
       (*(uint *)(lVar11 + 0x9c) < *(int *)(lVar3 + 0x4b4) - 1U)) {
      FUN_143dcdb00(lVar3,lVar11,1);
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      local_58 = 1;
      iVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                        (param_1,0x24,*(undefined8 *)(param_1 + 0x130),&local_48);
      if (iVar8 != 0) {
        uVar10 = 0xffffffff;
      }
    }
  }
  else {
    FUN_143dcdf20();
    uVar10 = 0;
  }
  return uVar10;
}



// FUNCTION 143dcd890 FUN_143dcd890 body=624 status=ok
// SIG undefined FUN_143dcd890(void)

undefined8 FUN_143dcd890(longlong param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ushort uVar7;
  longlong lVar8;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x1a0) == -1)) {
    return 0;
  }
  if (((*(char *)(param_1 + 0x1ce) != '\0') && (param_2 == 0)) && (param_3 == 2)) {
    *(undefined1 *)(param_1 + 0x1cf) = 1;
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  lVar8 = lVar2 + 0xa0 + (longlong)*(char *)(param_1 + 0x1c7) * 0xa8;
  *(undefined1 *)(lVar8 + 0xa1) = 1;
  if (*(char *)(lVar8 + 0xa0) == '\0') {
    *(undefined1 *)(lVar8 + 0xa1) = 0;
    lVar8 = (longlong)*(int *)(param_1 + 0x1a0) * 0x10 + *(longlong *)(lVar8 + 0x48);
    *param_4 = *(undefined8 *)(param_1 + 0x178);
    *(int *)((longlong)param_4 + 0xc) = (int)*(short *)(lVar8 + 8);
    uVar7 = *(ushort *)(lVar8 + 8) & ~(ushort)param_2 | (ushort)param_3;
    *(ushort *)(lVar8 + 8) = uVar7;
    *(int *)(param_4 + 1) = (int)(short)uVar7;
    if ((*(byte *)(param_1 + 0x1b8) & 2) == 0) {
      if ((*(longlong *)(param_1 + 0x80) != 0) &&
         (iVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                            (param_1,0x22,*(undefined8 *)(param_1 + 0x130),param_4,0), iVar4 != 0))
      {
        return 0xffffffff;
      }
      pcVar3 = *(code **)(*(longlong *)(lVar2 + 0x3d0) + 0x50);
      if (pcVar3 != (code *)0x0) {
        if ((param_2 & 9) != 0) {
          (*pcVar3)(param_1,9);
        }
        if ((param_3 & 9) != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0x3d0) + 0x50))(param_1,5);
        }
        if ((param_2 & 2) != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0x3d0) + 0x50))(param_1,10);
        }
        if ((param_3 & 2) != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0x3d0) + 0x50))(param_1,6);
        }
      }
      if (*(int *)((longlong)param_4 + 0xc) == *(int *)(param_4 + 1)) {
        return 0;
      }
      iVar4 = FUN_143dd2a60(lVar2,param_1,lVar8);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      iVar4 = *(int *)(lVar2 + 0x4d4);
      if (iVar4 == 0) {
        return 0;
      }
      if (*(longlong *)(param_1 + 0x80) == 0) {
        return 0;
      }
      iVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                        (param_1,0x1f,0,0,0);
      if (iVar5 == -1) {
        return 0xffffffff;
      }
      if (iVar5 != iVar4) {
        thunk_FUN_143dd3150(param_1);
        return 0;
      }
      return 0;
    }
  }
  else {
    puVar6 = (undefined8 *)thunk_FUN_143dd4bc0(0,0x18,&DAT_145b67658);
    if (puVar6 == (undefined8 *)0x0) {
      *(undefined1 *)(lVar8 + 0xa1) = 0;
      return 0xffffffff;
    }
    *(uint *)((longlong)puVar6 + 0xc) = param_2;
    *(uint *)(puVar6 + 2) = param_3;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 0x1a0);
    plVar1 = (longlong *)(lVar8 + 0x50);
    *puVar6 = 0;
    lVar2 = *plVar1;
    while (lVar2 != 0) {
      plVar1 = (longlong *)*plVar1;
      lVar2 = *plVar1;
    }
    *plVar1 = (longlong)puVar6;
    *(undefined1 *)(lVar8 + 0xa1) = 0;
    thunk_FUN_143dd3150(param_1);
  }
  return 0;
}



// FUNCTION 143dcdb00 FUN_143dcdb00 body=615 status=ok
// SIG undefined FUN_143dcdb00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143dcdb00(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x378);
  do {
    if (lVar2 == 0) {
      return;
    }
    lVar3 = *(longlong *)(lVar2 + 0x158);
    if (lVar3 != 0) {
      if (param_3 == 0) {
        FUN_143dcd890(lVar3,9,0,&local_48);
      }
      else if (*(int *)(lVar3 + 0x1a0) != -1) {
        lVar4 = *(longlong *)(lVar3 + 0x78);
        lVar10 = lVar4 + 0xa0 + (longlong)*(char *)(lVar3 + 0x1c7) * 0xa8;
        *(undefined1 *)(lVar10 + 0xa1) = 1;
        if (*(char *)(lVar10 + 0xa0) == '\0') {
          *(undefined1 *)(lVar10 + 0xa1) = 0;
          local_48 = *(undefined8 *)(lVar3 + 0x178);
          lVar10 = (longlong)*(int *)(lVar3 + 0x1a0) * 0x10 + *(longlong *)(lVar10 + 0x48);
          local_3c = (int)*(short *)(lVar10 + 8);
          uVar6 = *(ushort *)(lVar10 + 8) | 9;
          *(ushort *)(lVar10 + 8) = uVar6;
          local_40 = (int)(short)uVar6;
          if ((*(byte *)(lVar3 + 0x1b8) & 2) == 0) {
            if (*(longlong *)(lVar3 + 0x80) != 0) {
              local_58 = 0;
              iVar7 = (**(code **)(*(longlong *)(*(longlong *)(lVar3 + 0x80) + 0x170) + 8))
                                (lVar3,0x22,*(undefined8 *)(lVar3 + 0x130),&local_48);
              if (iVar7 != 0) goto LAB_143dcdd23;
            }
            pcVar5 = *(code **)(*(longlong *)(lVar4 + 0x3d0) + 0x50);
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(lVar3,5);
            }
            if ((((local_3c != local_40) && (iVar7 = FUN_143dd2a60(lVar4,lVar3), iVar7 == 0)) &&
                (iVar7 = *(int *)(lVar4 + 0x4d4), iVar7 != 0)) && (*(longlong *)(lVar3 + 0x80) != 0)
               ) {
              local_58 = 0;
              iVar8 = (**(code **)(*(longlong *)(*(longlong *)(lVar3 + 0x80) + 0x170) + 8))
                                (lVar3,0x1f);
              if ((iVar8 != -1) && (iVar8 != iVar7)) {
                thunk_FUN_143dd3150(lVar3);
              }
            }
          }
        }
        else {
          puVar9 = (undefined8 *)thunk_FUN_143dd4bc0(0,0x18);
          if (puVar9 == (undefined8 *)0x0) {
            *(undefined1 *)(lVar10 + 0xa1) = 0;
          }
          else {
            *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
            *(undefined4 *)(puVar9 + 2) = 9;
            *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar3 + 0x1a0);
            plVar1 = (longlong *)(lVar10 + 0x50);
            *puVar9 = 0;
            lVar4 = *plVar1;
            while (lVar4 != 0) {
              plVar1 = (longlong *)*plVar1;
              lVar4 = *plVar1;
            }
            *plVar1 = (longlong)puVar9;
            *(undefined1 *)(lVar10 + 0xa1) = 0;
            thunk_FUN_143dd3150(lVar3);
          }
        }
      }
    }
LAB_143dcdd23:
    lVar2 = *(longlong *)(lVar2 + 0x150);
  } while( true );
}



// FUNCTION 143dcdd70 FUN_143dcdd70 body=160 status=ok
// SIG undefined FUN_143dcdd70(void)

ulonglong FUN_143dcdd70(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if ((*(short *)(param_1 + 0x70) == 0x1d) || ((char)*(uint *)(param_1 + 0x1b8) < '\0')) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x1b8) >> 0x17 & 1) == 0) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x58);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        return 1;
      }
      param_1 = UWaterWaves::GetWaterWaves(param_1);
    }
    if (*(int *)(param_1 + 0x1a0) == -1) {
      return 0xffffffff;
    }
    iVar2 = FUN_143dcd530(param_1,0,2);
    uVar4 = 1;
    if (iVar2 != 0) {
      uVar4 = 0xffffffff;
    }
    uVar3 = (ulonglong)uVar4;
  }
  else {
    uVar3 = FUN_143dcdd70(*(undefined8 *)(param_1 + 0x88));
    if (-1 < (int)uVar3) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x1000000;
      return 1;
    }
  }
  return uVar3;
}



// FUNCTION 143dcde10 thunk_FUN_143dcd530 body=5 status=ok
// SIG undefined thunk_FUN_143dcd530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 thunk_FUN_143dcd530(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  undefined1 auStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((param_1 == 0) ||
     (((*(longlong *)(param_1 + 0xa0) == 0 && ((*(uint *)(param_1 + 0x1b8) & 0x10000000) == 0)) ||
      (*(int *)(param_1 + 0x1a0) == -1)))) {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_1407891a0();
    if (lVar3 == 0) {
      uVar2 = 1;
    }
    else {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        uStack_38 = 0;
        iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                          (param_1,0x23,*(undefined8 *)(param_1 + 0x130),auStack_28);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
      }
      uVar2 = FUN_143dcd890(param_1,param_2,param_3,auStack_28);
      if (*(longlong *)(param_1 + 0x80) != 0) {
        uStack_38 = 0;
        iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                          (param_1,0x24,*(undefined8 *)(param_1 + 0x130),auStack_28);
        if (iVar1 != 0) {
          uVar2 = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}


