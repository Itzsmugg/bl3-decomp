// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d8b8b0 curve448_point_mul_by_ratio_and_encode_like_eddsa body=669 status=ok
// SIG undefined curve448_point_mul_by_ratio_and_encode_like_eddsa(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void curve448_point_mul_by_ratio_and_encode_like_eddsa(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 local_218 [64];
  undefined1 local_1d8 [64];
  undefined1 local_198 [64];
  undefined1 local_158 [64];
  undefined8 local_118 [8];
  undefined1 local_d8 [64];
  undefined1 local_98 [128];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d8b8c8;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  lVar15 = 2;
  puVar14 = local_118;
  do {
    uVar9 = param_2[1];
    uVar10 = param_2[2];
    uVar11 = param_2[3];
    *puVar14 = *param_2;
    puVar14[1] = uVar9;
    uVar9 = param_2[4];
    uVar12 = param_2[5];
    puVar14[2] = uVar10;
    puVar14[3] = uVar11;
    uVar10 = param_2[6];
    uVar11 = param_2[7];
    puVar14[4] = uVar9;
    puVar14[5] = uVar12;
    uVar9 = param_2[8];
    uVar12 = param_2[9];
    puVar14[6] = uVar10;
    puVar14[7] = uVar11;
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    puVar14[8] = uVar9;
    puVar14[9] = uVar12;
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    uVar2 = *(undefined4 *)((longlong)param_2 + 100);
    uVar3 = *(undefined4 *)(param_2 + 0xd);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x6c);
    puVar14[10] = uVar10;
    puVar14[0xb] = uVar11;
    uVar5 = *(undefined4 *)(param_2 + 0xe);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x74);
    uVar7 = *(undefined4 *)(param_2 + 0xf);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)(puVar14 + 0xc) = uVar1;
    *(undefined4 *)((longlong)puVar14 + 100) = uVar2;
    *(undefined4 *)(puVar14 + 0xd) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0x6c) = uVar4;
    *(undefined4 *)(puVar14 + 0xe) = uVar5;
    *(undefined4 *)((longlong)puVar14 + 0x74) = uVar6;
    *(undefined4 *)(puVar14 + 0xf) = uVar7;
    *(undefined4 *)((longlong)puVar14 + 0x7c) = uVar8;
    lVar15 = lVar15 + -1;
    puVar14 = puVar14 + 0x10;
    param_2 = param_2 + 0x10;
  } while (lVar15 != 0);
  gf_sqr(local_218,local_118);
  gf_sqr(local_1d8,local_d8);
  gf_add(&local_258,local_218,local_1d8);
  gf_add(&local_298,local_d8,local_118);
  gf_sqr(local_198,&local_298);
  gf_sub(local_198,local_198,&local_258);
  gf_sub(&local_298,local_1d8,local_218);
  gf_sqr(local_218,local_98);
  gf_add(local_1d8,local_218,local_218);
  gf_sub(local_1d8,local_1d8,&local_298);
  gf_mul(local_218,local_1d8,local_198);
  gf_mul(local_198,&local_298,&local_258);
  gf_mul(&local_298,&local_258,local_1d8);
  FUN_14004ff40(&local_258,0x40);
  gf_sqr(local_158,&local_298);
  gf_isr(&local_258,local_158);
  gf_sqr(local_158,&local_258);
  gf_mul(&local_258,local_158,&local_298);
  local_298 = local_258;
  uStack_290 = uStack_250;
  local_288 = local_248;
  uStack_280 = uStack_240;
  local_278 = local_238;
  uStack_274 = uStack_234;
  uStack_270 = uStack_230;
  uStack_26c = uStack_22c;
  local_268 = local_228;
  uStack_264 = uStack_224;
  uStack_260 = uStack_220;
  uStack_25c = uStack_21c;
  gf_mul(local_1d8,local_218,&local_298);
  gf_mul(local_218,local_198,&local_298);
  *(undefined1 *)(param_1 + 0x38) = 0;
  gf_serialize(param_1,local_218,1);
  bVar13 = gf_lobit(local_1d8);
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | bVar13 & 0x80;
  FUN_14004ff40(local_218,0x40);
  FUN_14004ff40(local_198,0x40);
  FUN_14004ff40(&local_298,0x40);
  FUN_14004ff40(local_1d8,0x40);
  FUN_14004ff40(local_118,0x100);
  return;
}



// FUNCTION 143d8bb50 curve448_precomputed_scalarmul body=970 status=ok
// SIG undefined curve448_precomputed_scalarmul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void curve448_precomputed_scalarmul(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  undefined1 auStack_158 [32];
  uint local_138 [16];
  uint local_f8 [32];
  uint local_78 [15];
  undefined1 local_39 [9];
  undefined8 local_30;
  
  local_30 = 0x143d8bb6c;
  local_39._1_8_ = DAT_1468387a8 ^ (ulonglong)auStack_158;
  curve448_scalar_add(local_138,param_3);
  curve448_scalar_halve(local_138,local_138);
  iVar16 = 0x12;
  do {
    iVar19 = iVar16;
    if (iVar19 != 0x12) {
      point_double_internal(param_1,param_1);
    }
    uVar12 = 0;
    do {
      uVar14 = 0;
      iVar16 = uVar12 * 0x5a + iVar19;
      uVar17 = iVar16 - 1;
      if (uVar17 < 0x1be) {
        uVar14 = local_138[uVar17 >> 5] >> ((byte)uVar17 & 0x1f) & 1;
      }
      uVar17 = iVar16 + 0x11;
      if (uVar17 < 0x1be) {
        uVar14 = uVar14 | (local_138[uVar17 >> 5] >> ((byte)uVar17 & 0x1f) & 1) * 2;
      }
      uVar17 = iVar16 + 0x23;
      if (uVar17 < 0x1be) {
        uVar14 = uVar14 | (local_138[uVar17 >> 5] >> ((byte)uVar17 & 0x1f) & 1) << 2;
      }
      uVar17 = iVar16 + 0x35;
      if (uVar17 < 0x1be) {
        uVar14 = uVar14 | (local_138[uVar17 >> 5] >> ((byte)uVar17 & 0x1f) & 1) << 3;
      }
      uVar17 = iVar16 + 0x47;
      if (uVar17 < 0x1be) {
        uVar14 = uVar14 | (local_138[uVar17 >> 5] >> ((byte)uVar17 & 0x1f) & 1) << 4;
      }
      uVar13 = (ulonglong)(((uVar14 >> 4) - 1 ^ uVar14) & 0xf);
      puVar11 = (uint *)((ulonglong)(uVar12 << 4) * 0xc0 + param_2);
      _guard_xfg_dispatch_icall_nop(local_f8,0,0xc0);
      lVar18 = 0x10;
      uVar15 = uVar13;
      do {
        uVar15 = uVar15 - 1;
        uVar10 = 0;
        bVar1 = (char)(~(byte)(uVar13 >> 0x38) & (byte)(uVar15 >> 0x38)) >> 7;
        uVar17 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
        if (((uint *)((longlong)puVar11 + 0xbfU) < local_f8) ||
           ((uint *)((longlong)local_f8 + 0xbfU) < puVar11)) {
          do {
            uVar6 = puVar11[1];
            uVar7 = puVar11[2];
            uVar8 = puVar11[3];
            uVar2 = puVar11[4];
            uVar3 = puVar11[5];
            uVar4 = puVar11[6];
            uVar5 = puVar11[7];
            *(uint *)((longlong)local_f8 + uVar10) =
                 uVar17 & *puVar11 | *(uint *)((longlong)local_f8 + uVar10);
            *(uint *)((longlong)local_f8 + uVar10 + 4) =
                 uVar17 & uVar6 | *(uint *)((longlong)local_f8 + uVar10 + 4);
            *(uint *)((longlong)local_f8 + uVar10 + 8) =
                 uVar17 & uVar7 | *(uint *)((longlong)local_f8 + uVar10 + 8);
            *(uint *)((longlong)local_f8 + uVar10 + 0xc) =
                 uVar17 & uVar8 | *(uint *)((longlong)local_f8 + uVar10 + 0xc);
            uVar6 = puVar11[8];
            uVar7 = puVar11[9];
            uVar8 = puVar11[10];
            uVar9 = puVar11[0xb];
            *(uint *)((longlong)local_f8 + uVar10 + 0x10) =
                 uVar17 & uVar2 | *(uint *)((longlong)local_f8 + uVar10 + 0x10);
            *(uint *)((longlong)local_f8 + uVar10 + 0x14) =
                 uVar17 & uVar3 | *(uint *)((longlong)local_f8 + uVar10 + 0x14);
            *(uint *)((longlong)local_f8 + uVar10 + 0x18) =
                 uVar17 & uVar4 | *(uint *)((longlong)local_f8 + uVar10 + 0x18);
            *(uint *)((longlong)local_f8 + uVar10 + 0x1c) =
                 uVar17 & uVar5 | *(uint *)((longlong)local_f8 + uVar10 + 0x1c);
            uVar2 = puVar11[0xc];
            uVar3 = puVar11[0xd];
            uVar4 = puVar11[0xe];
            uVar5 = puVar11[0xf];
            puVar11 = puVar11 + 0x10;
            *(uint *)((longlong)local_f8 + uVar10 + 0x20) =
                 uVar17 & uVar6 | *(uint *)((longlong)local_f8 + uVar10 + 0x20);
            *(uint *)((longlong)local_f8 + uVar10 + 0x24) =
                 uVar17 & uVar7 | *(uint *)((longlong)local_f8 + uVar10 + 0x24);
            *(uint *)((longlong)local_f8 + uVar10 + 0x28) =
                 uVar17 & uVar8 | *(uint *)((longlong)local_f8 + uVar10 + 0x28);
            *(uint *)((longlong)local_f8 + uVar10 + 0x2c) =
                 uVar17 & uVar9 | *(uint *)((longlong)local_f8 + uVar10 + 0x2c);
            *(uint *)((longlong)local_f8 + uVar10 + 0x30) =
                 uVar17 & uVar2 | *(uint *)((longlong)local_f8 + uVar10 + 0x30);
            *(uint *)((longlong)local_f8 + uVar10 + 0x34) =
                 uVar17 & uVar3 | *(uint *)((longlong)local_f8 + uVar10 + 0x34);
            *(uint *)((longlong)local_f8 + uVar10 + 0x38) =
                 uVar17 & uVar4 | *(uint *)((longlong)local_f8 + uVar10 + 0x38);
            *(uint *)((longlong)local_f8 + uVar10 + 0x3c) =
                 uVar17 & uVar5 | *(uint *)((longlong)local_f8 + uVar10 + 0x3c);
            uVar10 = uVar10 + 0x40;
          } while (uVar10 < 0xc0);
        }
        else {
          do {
            uVar17 = *puVar11;
            puVar11 = (uint *)((longlong)puVar11 + 1);
            *(byte *)((longlong)local_f8 + uVar10) =
                 *(byte *)((longlong)local_f8 + uVar10) | (byte)uVar17 & bVar1;
            uVar10 = uVar10 + 1;
          } while (uVar10 < 0xc0);
        }
        uVar13 = uVar13 - 1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      gf_cond_swap(local_f8,local_f8 + 0x10);
      gf_cond_neg(local_f8 + 0x20,(uVar14 >> 4) - 1);
      if ((iVar19 == 0x12) && (uVar12 == 0)) {
        gf_add(param_1 + 0x40,local_f8 + 0x10,local_f8);
        gf_sub(param_1,local_f8 + 0x10,local_f8);
        gf_mul(param_1 + 0xc0,param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x80) = 1;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        *(undefined4 *)(param_1 + 0xb4) = 0;
        *(undefined4 *)(param_1 + 0xb8) = 0;
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
      else {
        add_niels_to_pt(param_1,local_f8);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 5);
    iVar16 = iVar19 + -1;
  } while (iVar19 + -1 != 0);
  FUN_14004ff40(local_f8,0xc0);
  FUN_14004ff40(local_138,iVar19 + 0x37);
  return;
}



// FUNCTION 143d8bf20 gf_add_RAW body=148 status=ok
// SIG undefined gf_add_RAW(void)

void gf_add_RAW(int *param_1,int *param_2,int *param_3)

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
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  
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
    *param_1 = *param_2 + *param_3;
    param_1[1] = iVar4 + iVar1;
    param_1[2] = iVar5 + iVar2;
    param_1[3] = iVar6 + iVar3;
    iVar1 = param_2[8];
    iVar2 = param_2[9];
    iVar3 = param_2[10];
    iVar4 = param_2[0xb];
    iVar5 = param_3[8];
    iVar6 = param_3[9];
    iVar15 = param_3[10];
    iVar16 = param_3[0xb];
    param_1[4] = iVar7 + iVar11;
    param_1[5] = iVar8 + iVar12;
    param_1[6] = iVar9 + iVar13;
    param_1[7] = iVar10 + iVar14;
    iVar7 = param_2[0xc];
    iVar8 = param_2[0xd];
    iVar9 = param_2[0xe];
    iVar10 = param_2[0xf];
    iVar11 = param_3[0xc];
    iVar12 = param_3[0xd];
    iVar13 = param_3[0xe];
    iVar14 = param_3[0xf];
    param_1[8] = iVar1 + iVar5;
    param_1[9] = iVar2 + iVar6;
    param_1[10] = iVar3 + iVar15;
    param_1[0xb] = iVar4 + iVar16;
    param_1[0xc] = iVar7 + iVar11;
    param_1[0xd] = iVar8 + iVar12;
    param_1[0xe] = iVar9 + iVar13;
    param_1[0xf] = iVar10 + iVar14;
    return;
  }
  lVar18 = (longlong)param_2 - (longlong)param_3;
  lVar19 = 0x10;
  lVar17 = (longlong)param_1 - (longlong)param_3;
  do {
    *(int *)(lVar17 + (longlong)param_3) = *(int *)(lVar18 + (longlong)param_3) + *param_3;
    param_3 = param_3 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  return;
}



// FUNCTION 143d8bfc0 gf_bias body=158 status=ok
// SIG undefined gf_bias(void)

void gf_bias(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_2 * 0xfffffff;
  uVar1 = param_2 * 0xffffffe;
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 8;
    *param_1 = (~-(uint)(uVar3 == 8) & uVar2 | -(uint)(uVar3 == 8) & uVar1) + *param_1;
    param_1[1] = (~-(uint)(uVar3 == 7) & uVar2 | -(uint)(uVar3 == 7) & uVar1) + param_1[1];
    param_1[2] = (~-(uint)(uVar3 == 6) & uVar2 | -(uint)(uVar3 == 6) & uVar1) + param_1[2];
    param_1[3] = (~-(uint)(uVar3 == 5) & uVar2 | -(uint)(uVar3 == 5) & uVar1) + param_1[3];
    param_1[4] = (~-(uint)(uVar3 == 4) & uVar2 | -(uint)(uVar3 == 4) & uVar1) + param_1[4];
    param_1[5] = (~-(uint)(uVar3 == 3) & uVar2 | -(uint)(uVar3 == 3) & uVar1) + param_1[5];
    param_1[6] = (~-(uint)(uVar3 == 2) & uVar2 | -(uint)(uVar3 == 2) & uVar1) + param_1[6];
    param_1[7] = (~-(uint)(uVar3 == 1) & uVar2 | -(uint)(uVar3 == 1) & uVar1) + param_1[7];
    param_1 = param_1 + 8;
    uVar3 = uVar4;
  } while (uVar4 < 0x10);
  return;
}



// FUNCTION 143d8c060 gf_cond_neg body=364 status=ok
// SIG undefined gf_cond_neg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void gf_cond_neg(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d8c070;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  gf_sub(&local_58,&DAT_145daa5c0,param_1);
  uVar1 = ~param_2;
  *param_1 = uVar1 & *param_1 | local_58 & param_2;
  param_1[1] = uVar1 & param_1[1] | local_54 & param_2;
  param_1[2] = uVar1 & param_1[2] | local_50 & param_2;
  param_1[3] = uVar1 & param_1[3] | local_4c & param_2;
  param_1[4] = uVar1 & param_1[4] | local_48 & param_2;
  param_1[5] = uVar1 & param_1[5] | local_44 & param_2;
  param_1[6] = uVar1 & param_1[6] | local_40 & param_2;
  param_1[7] = uVar1 & param_1[7] | local_3c & param_2;
  param_1[8] = uVar1 & param_1[8] | local_38 & param_2;
  param_1[9] = uVar1 & param_1[9] | local_34 & param_2;
  param_1[10] = local_30 & param_2 | uVar1 & param_1[10];
  param_1[0xb] = local_2c & param_2 | uVar1 & param_1[0xb];
  param_1[0xc] = local_28 & param_2 | uVar1 & param_1[0xc];
  param_1[0xd] = local_24 & param_2 | uVar1 & param_1[0xd];
  param_1[0xe] = local_20 & param_2 | uVar1 & param_1[0xe];
  param_1[0xf] = local_1c & param_2 | uVar1 & param_1[0xf];
  return;
}



// FUNCTION 143d8c1d0 gf_cond_swap body=153 status=ok
// SIG undefined gf_cond_swap(void)

void gf_cond_swap(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  if ((param_2 <= param_1 + 0xf) && (param_1 <= param_2 + 0xf)) {
    lVar11 = 0x10;
    puVar10 = param_2;
    do {
      uVar3 = *(uint *)((longlong)puVar10 + ((longlong)param_1 - (longlong)param_2));
      uVar9 = (uVar3 ^ *puVar10) & param_3;
      *(uint *)((longlong)puVar10 + ((longlong)param_1 - (longlong)param_2)) = uVar3 ^ uVar9;
      *puVar10 = *puVar10 ^ uVar9;
      lVar11 = lVar11 + -1;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
    return;
  }
  lVar11 = 4;
  puVar10 = param_2;
  do {
    puVar1 = (uint *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar10);
    uVar3 = puVar1[1];
    uVar9 = puVar1[2];
    uVar4 = puVar1[3];
    uVar5 = *puVar10;
    uVar6 = puVar10[1];
    uVar7 = puVar10[2];
    uVar8 = puVar10[3];
    uVar12 = (*puVar1 ^ uVar5) & param_3;
    uVar13 = (uVar3 ^ uVar6) & param_3;
    uVar14 = (uVar9 ^ uVar7) & param_3;
    uVar15 = (uVar4 ^ uVar8) & param_3;
    puVar2 = (uint *)(((longlong)param_1 - (longlong)param_2) + -0x10 + (longlong)(puVar10 + 4));
    *puVar2 = uVar12 ^ *puVar1;
    puVar2[1] = uVar13 ^ uVar3;
    puVar2[2] = uVar14 ^ uVar9;
    puVar2[3] = uVar15 ^ uVar4;
    *puVar10 = uVar12 ^ uVar5;
    puVar10[1] = uVar13 ^ uVar6;
    puVar10[2] = uVar14 ^ uVar7;
    puVar10[3] = uVar15 ^ uVar8;
    lVar11 = lVar11 + -1;
    puVar10 = puVar10 + 4;
  } while (lVar11 != 0);
  return;
}



// FUNCTION 143d8c270 gf_sub_RAW body=148 status=ok
// SIG undefined gf_sub_RAW(void)

void gf_sub_RAW(int *param_1,int *param_2,int *param_3)

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
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  
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
    return;
  }
  lVar18 = (longlong)param_2 - (longlong)param_3;
  lVar19 = 0x10;
  lVar17 = (longlong)param_1 - (longlong)param_3;
  do {
    *(int *)(lVar17 + (longlong)param_3) = *(int *)(lVar18 + (longlong)param_3) - *param_3;
    param_3 = param_3 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  return;
}



// FUNCTION 143d8c310 gf_weak_reduce body=369 status=ok
// SIG undefined gf_weak_reduce(void)

void gf_weak_reduce(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[0xf] >> 0x1c;
  param_1[8] = param_1[8] + uVar1;
  param_1[0xf] = (param_1[0xf] & 0xfffffff) + (param_1[0xe] >> 0x1c);
  param_1[0xe] = (param_1[0xe] & 0xfffffff) + (param_1[0xd] >> 0x1c);
  param_1[0xd] = (param_1[0xd] & 0xfffffff) + (param_1[0xc] >> 0x1c);
  param_1[0xc] = (param_1[0xc] & 0xfffffff) + (param_1[0xb] >> 0x1c);
  param_1[0xb] = (param_1[0xb] & 0xfffffff) + (param_1[10] >> 0x1c);
  param_1[10] = (param_1[10] & 0xfffffff) + (param_1[9] >> 0x1c);
  param_1[9] = (param_1[9] & 0xfffffff) + (param_1[8] >> 0x1c);
  param_1[8] = (param_1[8] & 0xfffffff) + (param_1[7] >> 0x1c);
  param_1[7] = (param_1[7] & 0xfffffff) + (param_1[6] >> 0x1c);
  param_1[6] = (param_1[6] & 0xfffffff) + (param_1[5] >> 0x1c);
  param_1[5] = (param_1[5] & 0xfffffff) + (param_1[4] >> 0x1c);
  param_1[4] = (param_1[4] & 0xfffffff) + (param_1[3] >> 0x1c);
  param_1[3] = (param_1[3] & 0xfffffff) + (param_1[2] >> 0x1c);
  param_1[2] = (param_1[2] & 0xfffffff) + (param_1[1] >> 0x1c);
  param_1[1] = (*param_1 >> 0x1c) + (param_1[1] & 0xfffffff);
  *param_1 = (*param_1 & 0xfffffff) + uVar1;
  return;
}



// FUNCTION 143d8c490 niels_to_pt body=162 status=ok
// SIG undefined niels_to_pt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void niels_to_pt(longlong param_1,longlong param_2)

{
  gf_add(param_1 + 0x40,param_2 + 0x40,param_2);
  gf_sub(param_1,param_2 + 0x40,param_2);
  gf_mul(param_1 + 0xc0,param_1 + 0x40,param_1);
  *(undefined8 *)(param_1 + 0x80) = 1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}



// FUNCTION 143d8c540 pniels_to_pt body=184 status=ok
// SIG undefined pniels_to_pt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void pniels_to_pt(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d8c552;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  gf_add(local_68,param_2 + 0x40,param_2);
  gf_sub(param_1 + 0x40,param_2 + 0x40,param_2);
  gf_mul(param_1 + 0xc0,param_1 + 0x40,local_68);
  gf_mul(param_1,param_2 + 0xc0,param_1 + 0x40);
  gf_mul(param_1 + 0x40,param_2 + 0xc0,local_68);
  gf_sqr(param_1 + 0x80,param_2 + 0xc0);
  return;
}



// FUNCTION 143d8c600 point_double_internal body=1136 status=ok
// SIG undefined point_double_internal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void point_double_internal(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_178 [32];
  int local_158 [11];
  int iStack_12c;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int local_118 [11];
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_d8 [4];
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  gf_sqr(local_d8);
  gf_sqr(local_158,param_2 + 0x40);
  piVar1 = (int *)(param_1 + 0xc0);
  local_98 = local_d8[0] + local_158[0];
  iStack_94 = local_d8[1] + local_158[1];
  iStack_90 = local_d8[2] + local_158[2];
  iStack_8c = local_d8[3] + local_158[3];
  local_88 = local_c8 + local_158[4];
  iStack_84 = iStack_c4 + local_158[5];
  iStack_80 = iStack_c0 + local_158[6];
  iStack_7c = iStack_bc + local_158[7];
  local_78 = local_b8 + local_158[8];
  iStack_74 = iStack_b4 + local_158[9];
  iStack_70 = iStack_b0 + local_158[10];
  iStack_6c = iStack_ac + iStack_12c;
  local_68 = local_a8 + local_128;
  iStack_64 = iStack_a4 + iStack_124;
  iStack_60 = iStack_a0 + iStack_120;
  iStack_5c = iStack_9c + iStack_11c;
  gf_add_RAW(piVar1,param_2 + 0x40,param_2);
  gf_sqr(local_118,piVar1);
  uVar6 = 0;
  local_118[0] = local_118[0] - local_98;
  local_118[1] = local_118[1] - iStack_94;
  local_118[2] = local_118[2] - iStack_90;
  local_118[3] = local_118[3] - iStack_8c;
  local_118[4] = local_118[4] - local_88;
  local_118[5] = local_118[5] - iStack_84;
  local_118[6] = local_118[6] - iStack_80;
  local_118[7] = local_118[7] - iStack_7c;
  local_118[8] = local_118[8] - local_78;
  local_118[9] = local_118[9] - iStack_74;
  local_118[10] = local_118[10] - iStack_70;
  iStack_ec = iStack_ec - iStack_6c;
  local_e8 = local_e8 - local_68;
  iStack_e4 = iStack_e4 - iStack_64;
  iStack_e0 = iStack_e0 - iStack_60;
  iStack_dc = iStack_dc - iStack_5c;
  piVar3 = local_118;
  uVar2 = uVar6;
  do {
    iVar4 = (int)uVar2;
    uVar2 = (ulonglong)(iVar4 + 8U);
    auVar9._0_4_ = -(uint)(iVar4 == 8);
    auVar9._4_4_ = -(uint)(iVar4 == 7);
    auVar9._8_4_ = -(uint)(iVar4 == 6);
    auVar9._12_4_ = -(uint)(iVar4 == 5);
    auVar9 = ~auVar9 & _DAT_145daa7c0 | auVar9 & _DAT_145daa7b0;
    auVar10._0_4_ = -(uint)(iVar4 == 4);
    auVar10._4_4_ = -(uint)(iVar4 == 3);
    auVar10._8_4_ = -(uint)(iVar4 == 2);
    auVar10._12_4_ = -(uint)(iVar4 == 1);
    *piVar3 = auVar9._0_4_ + *piVar3;
    piVar3[1] = auVar9._4_4_ + piVar3[1];
    piVar3[2] = auVar9._8_4_ + piVar3[2];
    piVar3[3] = auVar9._12_4_ + piVar3[3];
    auVar10 = ~auVar10 & _DAT_145daa7c0 | auVar10 & _DAT_145daa7b0;
    auVar9 = *(undefined1 (*) [16])(piVar3 + 4);
    piVar3[4] = auVar10._0_4_ + auVar9._0_4_;
    piVar3[5] = auVar10._4_4_ + auVar9._4_4_;
    piVar3[6] = auVar10._8_4_ + auVar9._8_4_;
    piVar3[7] = auVar10._12_4_ + auVar9._12_4_;
    piVar3 = piVar3 + 8;
  } while (iVar4 + 8U < 0x10);
  gf_weak_reduce(local_118);
  if (((&iStack_9c < piVar1) || ((int *)(param_1 + 0xfcU) < local_d8)) &&
     ((&iStack_11c < piVar1 || ((int *)(param_1 + 0xfcU) < local_158)))) {
    *piVar1 = local_158[0] - local_d8[0];
    *(int *)(param_1 + 0xc4) = local_158[1] - local_d8[1];
    *(int *)(param_1 + 200) = local_158[2] - local_d8[2];
    *(int *)(param_1 + 0xcc) = local_158[3] - local_d8[3];
    *(int *)(param_1 + 0xd0) = local_158[4] - local_c8;
    *(int *)(param_1 + 0xd4) = local_158[5] - iStack_c4;
    *(int *)(param_1 + 0xd8) = local_158[6] - iStack_c0;
    *(int *)(param_1 + 0xdc) = local_158[7] - iStack_bc;
    *(int *)(param_1 + 0xe0) = local_158[8] - local_b8;
    *(int *)(param_1 + 0xe4) = local_158[9] - iStack_b4;
    *(int *)(param_1 + 0xe8) = local_158[10] - iStack_b0;
    *(int *)(param_1 + 0xec) = iStack_12c - iStack_ac;
    *(int *)(param_1 + 0xf0) = local_128 - local_a8;
    *(int *)(param_1 + 0xf4) = iStack_124 - iStack_a4;
    *(int *)(param_1 + 0xf8) = iStack_120 - iStack_a0;
    *(int *)(param_1 + 0xfc) = iStack_11c - iStack_9c;
  }
  else {
    lVar5 = 0x10;
    uVar2 = uVar6;
    do {
      *(int *)(uVar2 + (longlong)piVar1) =
           *(int *)((longlong)local_158 + uVar2) - *(int *)((longlong)local_d8 + uVar2);
      uVar2 = uVar2 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  gf_bias(piVar1,2);
  gf_weak_reduce(piVar1);
  gf_sqr(param_1,param_2 + 0x80);
  gf_add_RAW(param_1 + 0x80,param_1,param_1);
  local_158[0] = *(int *)(param_1 + 0x80) - *piVar1;
  local_158[1] = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0xc4);
  local_158[2] = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 200);
  local_158[3] = *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0xcc);
  local_158[4] = *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0xd0);
  local_158[5] = *(int *)(param_1 + 0x94) - *(int *)(param_1 + 0xd4);
  local_158[6] = *(int *)(param_1 + 0x98) - *(int *)(param_1 + 0xd8);
  local_158[7] = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0xdc);
  local_158[8] = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0xe0);
  local_158[9] = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xe4);
  local_158[10] = *(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xe8);
  iStack_12c = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xec);
  local_128 = *(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xf0);
  iStack_124 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xf4);
  iStack_120 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xf8);
  iStack_11c = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xfc);
  piVar3 = local_158;
  do {
    iVar4 = (int)uVar6;
    uVar6 = (ulonglong)(iVar4 + 8U);
    auVar7._0_4_ = -(uint)(iVar4 == 8);
    auVar7._4_4_ = -(uint)(iVar4 == 7);
    auVar7._8_4_ = -(uint)(iVar4 == 6);
    auVar7._12_4_ = -(uint)(iVar4 == 5);
    auVar9 = ~auVar7 & _DAT_145daa7e0 | auVar7 & _DAT_145daa7d0;
    auVar8._0_4_ = -(uint)(iVar4 == 4);
    auVar8._4_4_ = -(uint)(iVar4 == 3);
    auVar8._8_4_ = -(uint)(iVar4 == 2);
    auVar8._12_4_ = -(uint)(iVar4 == 1);
    *piVar3 = auVar9._0_4_ + *piVar3;
    piVar3[1] = auVar9._4_4_ + piVar3[1];
    piVar3[2] = auVar9._8_4_ + piVar3[2];
    piVar3[3] = auVar9._12_4_ + piVar3[3];
    auVar10 = ~auVar8 & _DAT_145daa7e0 | auVar8 & _DAT_145daa7d0;
    auVar9 = *(undefined1 (*) [16])(piVar3 + 4);
    piVar3[4] = auVar10._0_4_ + auVar9._0_4_;
    piVar3[5] = auVar10._4_4_ + auVar9._4_4_;
    piVar3[6] = auVar10._8_4_ + auVar9._8_4_;
    piVar3[7] = auVar10._12_4_ + auVar9._12_4_;
    piVar3 = piVar3 + 8;
  } while (iVar4 + 8U < 0x10);
  gf_weak_reduce(local_158);
  gf_mul(param_1,local_158,local_118);
  gf_mul(param_1 + 0x80,piVar1,local_158);
  gf_mul(param_1 + 0x40,piVar1,&local_98);
  if (param_3 == 0) {
    gf_mul(piVar1,local_118,&local_98);
  }
  return;
}



// FUNCTION 143d8ca70 prepare_wnaf_table body=668 status=ok
// SIG undefined prepare_wnaf_table(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void prepare_wnaf_table(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228 [64];
  undefined1 local_1e8 [64];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [64];
  undefined1 local_128 [64];
  undefined1 local_e8 [64];
  undefined1 local_a8 [64];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d8ca8b;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  pt_to_pniels();
  if (param_3 != 0) {
    point_double_internal(local_228,param_2,0);
    gf_sub(local_128,local_1e8,local_228);
    gf_add(local_e8,local_228,local_1e8);
    gf_mulw_unsigned(local_a8,local_168,0x13154);
    gf_sub(local_a8,&DAT_145daa5c0,local_a8);
    gf_add(local_68,&local_1a8,&local_1a8);
    gf_mul(&local_268,&local_1a8,param_1 + 0xc0);
    local_1a8 = local_268;
    uStack_1a0 = uStack_260;
    local_198 = local_258;
    uStack_190 = uStack_250;
    local_188 = local_248;
    uStack_184 = uStack_244;
    uStack_180 = uStack_240;
    uStack_17c = uStack_23c;
    local_178 = local_238;
    uStack_174 = uStack_234;
    uStack_170 = uStack_230;
    uStack_16c = uStack_22c;
    add_niels_to_pt(local_228,param_1,0);
    gf_sub(param_1 + 0x100,local_1e8,local_228);
    gf_add(param_1 + 0x140,local_228,local_1e8);
    gf_mulw_unsigned(param_1 + 0x180,local_168,0x13154);
    gf_sub(param_1 + 0x180,&DAT_145daa5c0,param_1 + 0x180);
    gf_add(param_1 + 0x1c0,&local_1a8,&local_1a8);
    iVar1 = 1 << ((byte)param_3 & 0x1f);
    if (2 < iVar1) {
      param_1 = param_1 + 0x280;
      uVar2 = (ulonglong)(iVar1 - 2);
      do {
        gf_mul(&local_268,&local_1a8,local_68);
        local_1a8 = local_268;
        uStack_1a0 = uStack_260;
        local_198 = local_258;
        uStack_190 = uStack_250;
        local_188 = local_248;
        uStack_184 = uStack_244;
        uStack_180 = uStack_240;
        uStack_17c = uStack_23c;
        local_178 = local_238;
        uStack_174 = uStack_234;
        uStack_170 = uStack_230;
        uStack_16c = uStack_22c;
        add_niels_to_pt(local_228,local_128,0);
        gf_sub(param_1 + -0x80,local_1e8,local_228);
        gf_add(param_1 + -0x40,local_228,local_1e8);
        gf_mulw_unsigned(param_1,local_168,0x13154);
        gf_sub(param_1,&DAT_145daa5c0,param_1);
        gf_add(param_1 + 0x40,&local_1a8,&local_1a8);
        param_1 = param_1 + 0x100;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    FUN_14004ff40(local_228,0x100);
    FUN_14004ff40(local_128,0x100);
  }
  return;
}



// FUNCTION 143d8cd10 pt_to_pniels body=146 status=ok
// SIG undefined pt_to_pniels(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pt_to_pniels(longlong param_1,longlong param_2)

{
  gf_sub(param_1,param_2 + 0x40,param_2);
  gf_add(param_1 + 0x40,param_2,param_2 + 0x40);
  gf_mulw_unsigned(param_1 + 0x80,param_2 + 0xc0,0x13154);
  gf_sub(param_1 + 0x80,&DAT_145daa5c0,param_1 + 0x80);
  gf_add(param_1 + 0xc0,param_2 + 0x80,param_2 + 0x80);
  return;
}



// FUNCTION 143d8cdb0 recode_wnaf body=444 status=ok
// SIG undefined recode_wnaf(void)

int recode_wnaf(undefined8 *param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  
  uVar15 = 0;
  uVar12 = (ulonglong)*param_2;
  bVar4 = (byte)(param_3 + 1U);
  uVar10 = 1;
  iVar16 = 0;
  iVar2 = (int)(0x1be / (ulonglong)(param_3 + 1U));
  iVar9 = iVar2 + 1;
  lVar11 = (longlong)iVar9;
  *(undefined4 *)(param_1 + (iVar2 + 2)) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + (longlong)(iVar2 + 2) * 8 + 4) = 0;
  do {
    if (uVar10 < 0x1c) {
      uVar12 = uVar12 + ((*(uint *)(param_2 + (ulonglong)(uVar10 >> 1) * 2) >>
                         (sbyte)((uVar10 & 1) << 4)) << 0x10);
    }
    if ((short)uVar12 != 0) {
      bVar1 = bVar4 & 0x1f;
      uVar14 = 1 << bVar1 | 1U >> 0x20 - bVar1;
      do {
        uVar7 = (uint)uVar12;
        if (uVar7 == 0) {
          iVar13 = 0x20;
        }
        else {
          bVar17 = (uVar12 & 0xffff) == 0;
          uVar6 = uVar7 << 0x10;
          if (bVar17) {
            uVar6 = uVar7;
          }
          iVar13 = 0xf;
          if (bVar17) {
            iVar13 = 0x1f;
          }
          uVar5 = uVar6 << 8;
          iVar3 = iVar13 + -8;
          if ((uVar6 & 0xffffff) == 0) {
            uVar5 = uVar6;
            iVar3 = iVar13;
          }
          iVar13 = iVar3 + -4;
          uVar6 = uVar5 << 4;
          if ((uVar5 & 0xfffffff) == 0) {
            iVar13 = iVar3;
            uVar6 = uVar5;
          }
          uVar5 = uVar6 * 4;
          iVar3 = iVar13 + -2;
          if (uVar6 * 4 == 0) {
            uVar5 = uVar6;
            iVar3 = iVar13;
          }
          iVar13 = iVar3 + -1;
          if ((uVar5 & 0x7fffffff) == 0) {
            iVar13 = iVar3;
          }
        }
        uVar7 = uVar7 >> ((byte)iVar13 & 0x1f);
        uVar5 = uVar7 & (1 << (bVar4 & 0x1f)) - 1U;
        uVar6 = uVar5 - uVar14;
        if ((uVar14 & uVar7) == 0) {
          uVar6 = uVar5;
        }
        iVar9 = iVar9 + -1;
        *(uint *)((longlong)param_1 + lVar11 * 8 + 4) = uVar6;
        uVar12 = uVar12 - (longlong)(int)((1 << ((byte)iVar13 & 0x1f)) * uVar6);
        *(int *)(param_1 + lVar11) = iVar13 + iVar16;
        lVar11 = lVar11 + -1;
      } while ((short)uVar12 != 0);
    }
    uVar12 = uVar12 >> 0x10;
    uVar10 = uVar10 + 1;
    iVar16 = iVar16 + 0x10;
  } while (uVar10 < 0x1e);
  uVar10 = (iVar2 + 3) - (iVar9 + 1);
  puVar8 = param_1;
  if (uVar10 != 0) {
    do {
      uVar14 = uVar15 + iVar9 + 1;
      uVar15 = uVar15 + 1;
      *puVar8 = param_1[uVar14];
      puVar8 = puVar8 + 1;
    } while (uVar15 < uVar10);
  }
  return uVar10 - 1;
}



// FUNCTION 143d8cf70 sub_niels_from_pt body=1614 status=ok
// SIG undefined sub_niels_from_pt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void sub_niels_from_pt(int *param_1,longlong param_2,int param_3)

{
  undefined1 auVar1 [16];
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_178 [32];
  int local_158;
  int *local_150;
  int local_148 [11];
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108 [11];
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  piVar3 = param_1 + 0x10;
  local_148[0] = param_1[0x10] - *param_1;
  local_148[1] = param_1[0x11] - param_1[1];
  local_148[2] = param_1[0x12] - param_1[2];
  local_148[3] = param_1[0x13] - param_1[3];
  local_148[4] = param_1[0x14] - param_1[4];
  local_148[5] = param_1[0x15] - param_1[5];
  local_148[6] = param_1[0x16] - param_1[6];
  local_148[7] = param_1[0x17] - param_1[7];
  local_148[8] = param_1[0x18] - param_1[8];
  local_148[9] = param_1[0x19] - param_1[9];
  local_148[10] = param_1[0x1a] - param_1[10];
  local_11c = param_1[0x1b] - param_1[0xb];
  local_118 = param_1[0x1c] - param_1[0xc];
  local_114 = param_1[0x1d] - param_1[0xd];
  local_110 = param_1[0x1e] - param_1[0xe];
  local_10c = param_1[0x1f] - param_1[0xf];
  piVar2 = local_148;
  uVar4 = 0;
  do {
    uVar5 = uVar4 + 8;
    *piVar2 = (~-(uint)(uVar4 == 8) & 0x1ffffffe | -(uint)(uVar4 == 8) & 0x1ffffffc) + *piVar2;
    piVar2[1] = (~-(uint)(uVar4 == 7) & 0x1ffffffe | -(uint)(uVar4 == 7) & 0x1ffffffc) + piVar2[1];
    piVar2[2] = (~-(uint)(uVar4 == 6) & 0x1ffffffe | -(uint)(uVar4 == 6) & 0x1ffffffc) + piVar2[2];
    piVar2[3] = (~-(uint)(uVar4 == 5) & 0x1ffffffe | -(uint)(uVar4 == 5) & 0x1ffffffc) + piVar2[3];
    auVar1 = *(undefined1 (*) [16])(piVar2 + 4);
    piVar2[4] = (~-(uint)(uVar4 == 4) & 0x1ffffffe | -(uint)(uVar4 == 4) & 0x1ffffffc) +
                auVar1._0_4_;
    piVar2[5] = (~-(uint)(uVar4 == 3) & 0x1ffffffe | -(uint)(uVar4 == 3) & 0x1ffffffc) +
                auVar1._4_4_;
    piVar2[6] = (~-(uint)(uVar4 == 2) & 0x1ffffffe | -(uint)(uVar4 == 2) & 0x1ffffffc) +
                auVar1._8_4_;
    piVar2[7] = (~-(uint)(uVar4 == 1) & 0x1ffffffe | -(uint)(uVar4 == 1) & 0x1ffffffc) +
                auVar1._12_4_;
    piVar2 = piVar2 + 8;
    uVar4 = uVar5;
  } while (uVar5 < 0x10);
  local_158 = param_3;
  local_150 = piVar3;
  gf_weak_reduce(local_148);
  gf_mul(local_108,param_2 + 0x40,local_148);
  local_148[0] = *piVar3 + *param_1;
  local_148[1] = param_1[0x11] + param_1[1];
  local_148[2] = param_1[0x12] + param_1[2];
  local_148[3] = param_1[0x13] + param_1[3];
  local_148[4] = param_1[4] + param_1[0x14];
  local_148[5] = param_1[0x15] + param_1[5];
  local_148[6] = param_1[0x16] + param_1[6];
  local_148[7] = param_1[0x17] + param_1[7];
  local_148[8] = param_1[8] + param_1[0x18];
  local_148[9] = param_1[0x19] + param_1[9];
  local_148[10] = param_1[0x1a] + param_1[10];
  local_11c = param_1[0x1b] + param_1[0xb];
  local_118 = param_1[0xc] + param_1[0x1c];
  local_114 = param_1[0x1d] + param_1[0xd];
  local_110 = param_1[0x1e] + param_1[0xe];
  local_10c = param_1[0x1f] + param_1[0xf];
  gf_mul(piVar3,param_2,local_148);
  gf_mul(param_1,param_2 + 0x80,param_1 + 0x30);
  local_c8 = local_108[0] + *piVar3;
  local_c4 = local_108[1] + param_1[0x11];
  local_c0 = local_108[2] + param_1[0x12];
  local_bc = local_108[3] + param_1[0x13];
  local_b8 = local_108[4] + param_1[0x14];
  local_b4 = local_108[5] + param_1[0x15];
  local_b0 = local_108[6] + param_1[0x16];
  local_ac = local_108[7] + param_1[0x17];
  local_a8 = local_108[8] + param_1[0x18];
  local_a4 = param_1[0x19] + local_108[9];
  local_a0 = param_1[0x1a] + local_108[10];
  local_9c = local_dc + param_1[0x1b];
  local_11c = param_1[0x1b] - local_dc;
  local_98 = local_d8 + param_1[0x1c];
  local_118 = param_1[0x1c] - local_d8;
  local_94 = local_d4 + param_1[0x1d];
  local_114 = param_1[0x1d] - local_d4;
  local_90 = local_d0 + param_1[0x1e];
  local_110 = param_1[0x1e] - local_d0;
  local_8c = local_cc + param_1[0x1f];
  local_148[0] = *local_150 - local_108[0];
  local_148[1] = param_1[0x11] - local_108[1];
  local_148[2] = param_1[0x12] - local_108[2];
  local_148[3] = param_1[0x13] - local_108[3];
  local_148[4] = param_1[0x14] - local_108[4];
  local_148[5] = param_1[0x15] - local_108[5];
  local_148[6] = param_1[0x16] - local_108[6];
  local_148[7] = param_1[0x17] - local_108[7];
  local_148[8] = param_1[0x18] - local_108[8];
  local_148[9] = param_1[0x19] - local_108[9];
  uVar8 = 0;
  local_148[10] = param_1[0x1a] - local_108[10];
  local_10c = param_1[0x1f] - local_cc;
  piVar3 = local_148;
  uVar7 = uVar8;
  do {
    iVar6 = (int)uVar7;
    uVar7 = (ulonglong)(iVar6 + 8U);
    *piVar3 = (-(uint)(iVar6 == 8) & 0x1ffffffc | ~-(uint)(iVar6 == 8) & 0x1ffffffe) + *piVar3;
    piVar3[1] = (-(uint)(iVar6 == 7) & 0x1ffffffc | ~-(uint)(iVar6 == 7) & 0x1ffffffe) + piVar3[1];
    piVar3[2] = (-(uint)(iVar6 == 6) & 0x1ffffffc | ~-(uint)(iVar6 == 6) & 0x1ffffffe) + piVar3[2];
    piVar3[3] = (-(uint)(iVar6 == 5) & 0x1ffffffc | ~-(uint)(iVar6 == 5) & 0x1ffffffe) + piVar3[3];
    auVar1 = *(undefined1 (*) [16])(piVar3 + 4);
    piVar3[4] = (-(uint)(iVar6 == 4) & 0x1ffffffc | ~-(uint)(iVar6 == 4) & 0x1ffffffe) +
                auVar1._0_4_;
    piVar3[5] = (-(uint)(iVar6 == 3) & 0x1ffffffc | ~-(uint)(iVar6 == 3) & 0x1ffffffe) +
                auVar1._4_4_;
    piVar3[6] = (-(uint)(iVar6 == 2) & 0x1ffffffc | ~-(uint)(iVar6 == 2) & 0x1ffffffe) +
                auVar1._8_4_;
    piVar3[7] = (-(uint)(iVar6 == 1) & 0x1ffffffc | ~-(uint)(iVar6 == 1) & 0x1ffffffe) +
                auVar1._12_4_;
    piVar3 = piVar3 + 8;
  } while (iVar6 + 8U < 0x10);
  gf_weak_reduce(local_148);
  gf_add_RAW(param_1 + 0x10,param_1 + 0x20,param_1);
  local_108[0] = param_1[0x20] - *param_1;
  local_108[1] = param_1[0x21] - param_1[1];
  local_108[2] = param_1[0x22] - param_1[2];
  local_108[3] = param_1[0x23] - param_1[3];
  local_108[4] = param_1[0x24] - param_1[4];
  local_108[5] = param_1[0x25] - param_1[5];
  local_108[6] = param_1[0x26] - param_1[6];
  local_108[7] = param_1[0x27] - param_1[7];
  local_108[8] = param_1[0x28] - param_1[8];
  local_108[9] = param_1[0x29] - param_1[9];
  local_108[10] = param_1[0x2a] - param_1[10];
  local_dc = param_1[0x2b] - param_1[0xb];
  local_d8 = param_1[0x2c] - param_1[0xc];
  local_d4 = param_1[0x2d] - param_1[0xd];
  local_d0 = param_1[0x2e] - param_1[0xe];
  local_cc = param_1[0x2f] - param_1[0xf];
  piVar3 = local_108;
  do {
    iVar6 = (int)uVar8;
    uVar8 = (ulonglong)(iVar6 + 8U);
    *piVar3 = (-(uint)(iVar6 == 8) & 0x1ffffffc | ~-(uint)(iVar6 == 8) & 0x1ffffffe) + *piVar3;
    piVar3[1] = (-(uint)(iVar6 == 7) & 0x1ffffffc | ~-(uint)(iVar6 == 7) & 0x1ffffffe) + piVar3[1];
    piVar3[2] = (-(uint)(iVar6 == 6) & 0x1ffffffc | ~-(uint)(iVar6 == 6) & 0x1ffffffe) + piVar3[2];
    piVar3[3] = (-(uint)(iVar6 == 5) & 0x1ffffffc | ~-(uint)(iVar6 == 5) & 0x1ffffffe) + piVar3[3];
    auVar1 = *(undefined1 (*) [16])(piVar3 + 4);
    piVar3[4] = (-(uint)(iVar6 == 4) & 0x1ffffffc | ~-(uint)(iVar6 == 4) & 0x1ffffffe) +
                auVar1._0_4_;
    piVar3[5] = (-(uint)(iVar6 == 3) & 0x1ffffffc | ~-(uint)(iVar6 == 3) & 0x1ffffffe) +
                auVar1._4_4_;
    piVar3[6] = (-(uint)(iVar6 == 2) & 0x1ffffffc | ~-(uint)(iVar6 == 2) & 0x1ffffffe) +
                auVar1._8_4_;
    piVar3[7] = (-(uint)(iVar6 == 1) & 0x1ffffffc | ~-(uint)(iVar6 == 1) & 0x1ffffffe) +
                auVar1._12_4_;
    piVar3 = piVar3 + 8;
  } while (iVar6 + 8U < 0x10);
  gf_weak_reduce(local_108);
  gf_mul(param_1 + 0x20,local_108,param_1 + 0x10);
  gf_mul(param_1,param_1 + 0x10,local_148);
  gf_mul(param_1 + 0x10,local_108,&local_c8);
  if (local_158 == 0) {
    gf_mul(param_1 + 0x30,local_148,&local_c8);
  }
  return;
}



// FUNCTION 143d8d5c0 x448_int body=2352 status=ok
// SIG undefined x448_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint x448_int(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int aiStack_318 [8];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  int local_278 [16];
  int local_238 [17];
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int local_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int local_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int local_1b8 [11];
  int iStack_18c;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [64];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)aiStack_318;
  uVar7 = 0;
  gf_deserialize(&local_178,param_2,1,0);
  uVar8 = 0x1bf;
  local_2f8._0_4_ = 0;
  local_2f8._4_4_ = 0;
  uStack_2f0._0_4_ = 0;
  uStack_2f0._4_4_ = 0;
  local_2e8._0_4_ = 0;
  local_2e8._4_4_ = 0;
  uStack_2e0._0_4_ = 0;
  uStack_2e0._4_4_ = 0;
  local_2d8._0_4_ = 0;
  local_2d8._4_4_ = 0;
  uStack_2d0._0_4_ = 0;
  uStack_2d0._4_4_ = 0;
  local_2c8._0_4_ = 0;
  local_2c8._4_4_ = 0;
  uStack_2c0._0_4_ = 0;
  uStack_2c0._4_4_ = 0;
  local_2b8 = local_178;
  uStack_2b0 = uStack_170;
  local_2a8 = local_168;
  uStack_2a0 = uStack_160;
  local_298 = local_158;
  uStack_290 = uStack_150;
  local_288 = local_148;
  uStack_280 = uStack_140;
  local_238[0] = 1;
  local_238[1] = 0;
  local_238[2] = 0;
  local_238[3] = 0;
  local_238[4] = 0;
  local_238[5] = 0;
  local_238[6] = 0;
  local_238[7] = 0;
  local_238[8] = 0;
  local_238[9] = 0;
  local_238[10] = 0;
  local_238[0xb] = 0;
  local_238[0xc] = 0;
  local_238[0xd] = 0;
  local_238[0xe] = 0;
  local_238[0xf] = 0;
  local_278[0] = 1;
  local_278[1] = 0;
  local_278[2] = 0;
  local_278[3] = 0;
  local_278[4] = 0;
  local_278[5] = 0;
  local_278[6] = 0;
  local_278[7] = 0;
  local_278[8] = 0;
  local_278[9] = 0;
  local_278[10] = 0;
  local_278[0xb] = 0;
  local_278[0xc] = 0;
  local_278[0xd] = 0;
  local_278[0xe] = 0;
  local_278[0xf] = 0;
  uVar2 = uVar7;
  do {
    uVar1 = (uint)uVar8;
    bVar3 = *(byte *)((uVar8 >> 3) + param_3);
    if (uVar1 < 8) {
      bVar3 = bVar3 & 0xfc;
    }
    else if (uVar1 == 0x1bf) {
      bVar3 = 0xff;
    }
    uVar9 = -(bVar3 >> ((byte)uVar8 & 7) & 1);
    uVar10 = (uint)uVar2 ^ uVar9;
    auVar12._4_4_ = uVar10;
    auVar12._0_4_ = uVar10;
    auVar12._8_4_ = uVar10;
    auVar12._12_4_ = uVar10;
    uVar2 = uVar7;
    do {
      auVar11 = (*(undefined1 (*) [16])((longlong)local_238 + uVar2) ^
                *(undefined1 (*) [16])((longlong)&local_2b8 + uVar2)) & auVar12;
      *(undefined1 (*) [16])((longlong)local_238 + uVar2) =
           auVar11 ^ *(undefined1 (*) [16])((longlong)local_238 + uVar2);
      *(undefined1 (*) [16])((longlong)&local_2b8 + uVar2) =
           auVar11 ^ *(undefined1 (*) [16])((longlong)&local_2b8 + uVar2);
      uVar2 = uVar2 + 0x10;
      uVar8 = uVar7;
    } while (uVar2 < 0x40);
    do {
      auVar11 = (*(undefined1 (*) [16])((longlong)&local_2f8 + uVar8) ^
                *(undefined1 (*) [16])((longlong)local_278 + uVar8)) & auVar12;
      *(undefined1 (*) [16])((longlong)&local_2f8 + uVar8) =
           auVar11 ^ *(undefined1 (*) [16])((longlong)&local_2f8 + uVar8);
      *(undefined1 (*) [16])((longlong)local_278 + uVar8) =
           auVar11 ^ *(undefined1 (*) [16])((longlong)local_278 + uVar8);
      uVar8 = uVar8 + 0x10;
    } while (uVar8 < 0x40);
    uVar2 = (ulonglong)uVar9;
    local_238[0x10] = local_238[0] + (int)local_2f8;
    iStack_1f4 = local_238[1] + local_2f8._4_4_;
    iStack_1f0 = local_238[2] + (int)uStack_2f0;
    iStack_1ec = local_238[3] + uStack_2f0._4_4_;
    local_1e8 = local_238[4] + (int)local_2e8;
    iStack_1e4 = local_238[5] + local_2e8._4_4_;
    iStack_1e0 = local_238[6] + (int)uStack_2e0;
    iStack_1dc = local_238[7] + uStack_2e0._4_4_;
    local_1d8 = local_238[8] + (int)local_2d8;
    iStack_1d4 = local_238[9] + local_2d8._4_4_;
    iStack_1d0 = local_238[10] + (int)uStack_2d0;
    iStack_1cc = local_238[0xb] + uStack_2d0._4_4_;
    local_1c8 = local_238[0xc] + (int)local_2c8;
    iStack_1c4 = local_238[0xd] + local_2c8._4_4_;
    iStack_1c0 = local_238[0xe] + (int)uStack_2c0;
    iStack_1bc = local_238[0xf] + uStack_2c0._4_4_;
    local_1b8[0] = local_238[0] - (int)local_2f8;
    local_1b8[1] = local_238[1] - local_2f8._4_4_;
    local_1b8[2] = local_238[2] - (int)uStack_2f0;
    local_1b8[3] = local_238[3] - uStack_2f0._4_4_;
    local_1b8[4] = local_238[4] - (int)local_2e8;
    local_1b8[5] = local_238[5] - local_2e8._4_4_;
    local_1b8[6] = local_238[6] - (int)uStack_2e0;
    local_1b8[7] = local_238[7] - uStack_2e0._4_4_;
    local_1b8[8] = local_238[8] - (int)local_2d8;
    local_1b8[9] = local_238[9] - local_2d8._4_4_;
    local_1b8[10] = local_238[10] - (int)uStack_2d0;
    iStack_18c = local_238[0xb] - uStack_2d0._4_4_;
    local_188 = local_238[0xc] - (int)local_2c8;
    iStack_184 = local_238[0xd] - local_2c8._4_4_;
    iStack_180 = local_238[0xe] - (int)uStack_2c0;
    iStack_17c = local_238[0xf] - uStack_2c0._4_4_;
    piVar5 = local_1b8;
    uVar8 = uVar7;
    do {
      iVar6 = (int)uVar8;
      uVar8 = (ulonglong)(iVar6 + 8U);
      *piVar5 = (~-(uint)(iVar6 == 8) & 0x1ffffffe | -(uint)(iVar6 == 8) & 0x1ffffffc) + *piVar5;
      piVar5[1] = (~-(uint)(iVar6 == 7) & 0x1ffffffe | -(uint)(iVar6 == 7) & 0x1ffffffc) + piVar5[1]
      ;
      piVar5[2] = (~-(uint)(iVar6 == 6) & 0x1ffffffe | -(uint)(iVar6 == 6) & 0x1ffffffc) + piVar5[2]
      ;
      piVar5[3] = (~-(uint)(iVar6 == 5) & 0x1ffffffe | -(uint)(iVar6 == 5) & 0x1ffffffc) + piVar5[3]
      ;
      auVar12 = *(undefined1 (*) [16])(piVar5 + 4);
      piVar5[4] = (~-(uint)(iVar6 == 4) & 0x1ffffffe | -(uint)(iVar6 == 4) & 0x1ffffffc) +
                  auVar12._0_4_;
      piVar5[5] = (~-(uint)(iVar6 == 3) & 0x1ffffffe | -(uint)(iVar6 == 3) & 0x1ffffffc) +
                  auVar12._4_4_;
      piVar5[6] = (~-(uint)(iVar6 == 2) & 0x1ffffffe | -(uint)(iVar6 == 2) & 0x1ffffffc) +
                  auVar12._8_4_;
      piVar5[7] = (~-(uint)(iVar6 == 1) & 0x1ffffffe | -(uint)(iVar6 == 1) & 0x1ffffffc) +
                  auVar12._12_4_;
      piVar5 = piVar5 + 8;
    } while (iVar6 + 8U < 0x10);
    gf_weak_reduce(local_1b8);
    local_2f8 = CONCAT44(local_2b8._4_4_ - local_278[1],(int)local_2b8 - local_278[0]);
    uStack_2f0 = CONCAT44(uStack_2b0._4_4_ - local_278[3],(int)uStack_2b0 - local_278[2]);
    local_2e8 = CONCAT44(local_2a8._4_4_ - local_278[5],(int)local_2a8 - local_278[4]);
    uStack_2e0 = CONCAT44(uStack_2a0._4_4_ - local_278[7],(int)uStack_2a0 - local_278[6]);
    local_2d8 = CONCAT44(local_298._4_4_ - local_278[9],(int)local_298 - local_278[8]);
    uStack_2d0 = CONCAT44(uStack_290._4_4_ - local_278[0xb],(int)uStack_290 - local_278[10]);
    local_2c8 = CONCAT44(local_288._4_4_ - local_278[0xd],(int)local_288 - local_278[0xc]);
    uStack_2c0 = CONCAT44(uStack_280._4_4_ - local_278[0xf],(int)uStack_280 - local_278[0xe]);
    uVar8 = uVar7;
    piVar5 = aiStack_318;
    do {
      piVar4 = piVar5 + 8;
      iVar6 = (int)uVar8;
      uVar8 = (ulonglong)(iVar6 + 8U);
      *piVar4 = (-(uint)(iVar6 == 8) & 0x1ffffffc | ~-(uint)(iVar6 == 8) & 0x1ffffffe) + *piVar4;
      piVar5[9] = (-(uint)(iVar6 == 7) & 0x1ffffffc | ~-(uint)(iVar6 == 7) & 0x1ffffffe) + piVar5[9]
      ;
      piVar5[10] = (-(uint)(iVar6 == 6) & 0x1ffffffc | ~-(uint)(iVar6 == 6) & 0x1ffffffe) +
                   piVar5[10];
      piVar5[0xb] = (-(uint)(iVar6 == 5) & 0x1ffffffc | ~-(uint)(iVar6 == 5) & 0x1ffffffe) +
                    piVar5[0xb];
      auVar12 = *(undefined1 (*) [16])(piVar5 + 0xc);
      piVar5[0xc] = (-(uint)(iVar6 == 4) & 0x1ffffffc | ~-(uint)(iVar6 == 4) & 0x1ffffffe) +
                    auVar12._0_4_;
      piVar5[0xd] = (-(uint)(iVar6 == 3) & 0x1ffffffc | ~-(uint)(iVar6 == 3) & 0x1ffffffe) +
                    auVar12._4_4_;
      piVar5[0xe] = (-(uint)(iVar6 == 2) & 0x1ffffffc | ~-(uint)(iVar6 == 2) & 0x1ffffffe) +
                    auVar12._8_4_;
      piVar5[0xf] = (-(uint)(iVar6 == 1) & 0x1ffffffc | ~-(uint)(iVar6 == 1) & 0x1ffffffe) +
                    auVar12._12_4_;
      piVar5 = piVar4;
    } while (iVar6 + 8U < 0x10);
    gf_weak_reduce(&local_2f8);
    gf_mul(local_238,local_238 + 0x10,&local_2f8);
    local_2f8 = CONCAT44(local_278[1] + local_2b8._4_4_,local_278[0] + (int)local_2b8);
    uStack_2f0 = CONCAT44(local_278[3] + uStack_2b0._4_4_,local_278[2] + (int)uStack_2b0);
    local_2e8 = CONCAT44(local_278[5] + local_2a8._4_4_,local_278[4] + (int)local_2a8);
    uStack_2e0 = CONCAT44(local_278[7] + uStack_2a0._4_4_,local_278[6] + (int)uStack_2a0);
    local_2d8 = CONCAT44(local_278[9] + local_298._4_4_,local_278[8] + (int)local_298);
    uStack_2d0 = CONCAT44(local_278[0xb] + uStack_290._4_4_,local_278[10] + (int)uStack_290);
    local_2c8 = CONCAT44(local_278[0xd] + local_288._4_4_,local_278[0xc] + (int)local_288);
    uStack_2c0 = CONCAT44(local_278[0xf] + uStack_280._4_4_,local_278[0xe] + (int)uStack_280);
    gf_mul(&local_2b8,local_1b8,&local_2f8);
    local_278[1] = local_238[1] - local_2b8._4_4_;
    local_278[0] = local_238[0] - (int)local_2b8;
    local_278[3] = local_238[3] - uStack_2b0._4_4_;
    local_278[2] = local_238[2] - (int)uStack_2b0;
    local_278[5] = local_238[5] - local_2a8._4_4_;
    local_278[4] = local_238[4] - (int)local_2a8;
    local_278[7] = local_238[7] - uStack_2a0._4_4_;
    local_278[6] = local_238[6] - (int)uStack_2a0;
    local_278[9] = local_238[9] - local_298._4_4_;
    local_278[8] = local_238[8] - (int)local_298;
    local_278[0xb] = local_238[0xb] - uStack_290._4_4_;
    local_278[10] = local_238[10] - (int)uStack_290;
    local_278[0xd] = local_238[0xd] - local_288._4_4_;
    local_278[0xc] = local_238[0xc] - (int)local_288;
    local_278[0xf] = local_238[0xf] - uStack_280._4_4_;
    local_278[0xe] = local_238[0xe] - (int)uStack_280;
    piVar5 = local_278;
    uVar8 = uVar7;
    do {
      iVar6 = (int)uVar8;
      uVar8 = (ulonglong)(iVar6 + 8U);
      *piVar5 = (~-(uint)(iVar6 == 8) & 0x1ffffffe | -(uint)(iVar6 == 8) & 0x1ffffffc) + *piVar5;
      piVar5[1] = (~-(uint)(iVar6 == 7) & 0x1ffffffe | -(uint)(iVar6 == 7) & 0x1ffffffc) + piVar5[1]
      ;
      piVar5[2] = (~-(uint)(iVar6 == 6) & 0x1ffffffe | -(uint)(iVar6 == 6) & 0x1ffffffc) + piVar5[2]
      ;
      piVar5[3] = (~-(uint)(iVar6 == 5) & 0x1ffffffe | -(uint)(iVar6 == 5) & 0x1ffffffc) + piVar5[3]
      ;
      auVar12 = *(undefined1 (*) [16])(piVar5 + 4);
      piVar5[4] = (~-(uint)(iVar6 == 4) & 0x1ffffffe | -(uint)(iVar6 == 4) & 0x1ffffffc) +
                  auVar12._0_4_;
      piVar5[5] = (~-(uint)(iVar6 == 3) & 0x1ffffffe | -(uint)(iVar6 == 3) & 0x1ffffffc) +
                  auVar12._4_4_;
      piVar5[6] = (~-(uint)(iVar6 == 2) & 0x1ffffffe | -(uint)(iVar6 == 2) & 0x1ffffffc) +
                  auVar12._8_4_;
      piVar5[7] = (~-(uint)(iVar6 == 1) & 0x1ffffffe | -(uint)(iVar6 == 1) & 0x1ffffffc) +
                  auVar12._12_4_;
      piVar5 = piVar5 + 8;
    } while (iVar6 + 8U < 0x10);
    gf_weak_reduce(local_278);
    gf_sqr(&local_2f8,local_278);
    gf_mul(local_278,&local_178,&local_2f8);
    local_2f8._0_4_ = (int)local_2b8 + local_238[0];
    local_2f8._4_4_ = local_2b8._4_4_ + local_238[1];
    uStack_2f0._0_4_ = (int)uStack_2b0 + local_238[2];
    uStack_2f0._4_4_ = uStack_2b0._4_4_ + local_238[3];
    local_2e8._0_4_ = (int)local_2a8 + local_238[4];
    local_2e8._4_4_ = local_2a8._4_4_ + local_238[5];
    uStack_2e0._0_4_ = (int)uStack_2a0 + local_238[6];
    uStack_2e0._4_4_ = uStack_2a0._4_4_ + local_238[7];
    local_2d8._0_4_ = (int)local_298 + local_238[8];
    local_2d8._4_4_ = local_298._4_4_ + local_238[9];
    uStack_2d0._0_4_ = (int)uStack_290 + local_238[10];
    uStack_2d0._4_4_ = uStack_290._4_4_ + local_238[0xb];
    local_2c8._0_4_ = (int)local_288 + local_238[0xc];
    local_2c8._4_4_ = local_288._4_4_ + local_238[0xd];
    uStack_2c0._0_4_ = (int)uStack_280 + local_238[0xe];
    uStack_2c0._4_4_ = uStack_280._4_4_ + local_238[0xf];
    gf_sqr(&local_2b8,&local_2f8);
    gf_sqr(&local_2f8,local_238 + 0x10);
    gf_sqr(local_238 + 0x10,local_1b8);
    gf_mul(local_238,&local_2f8,local_238 + 0x10);
    local_1b8[0] = (int)local_2f8 - local_238[0x10];
    local_1b8[1] = local_2f8._4_4_ - iStack_1f4;
    local_1b8[2] = (int)uStack_2f0 - iStack_1f0;
    local_1b8[3] = uStack_2f0._4_4_ - iStack_1ec;
    local_1b8[4] = (int)local_2e8 - local_1e8;
    local_1b8[5] = local_2e8._4_4_ - iStack_1e4;
    local_1b8[6] = (int)uStack_2e0 - iStack_1e0;
    local_1b8[7] = uStack_2e0._4_4_ - iStack_1dc;
    local_1b8[8] = (int)local_2d8 - local_1d8;
    local_1b8[9] = local_2d8._4_4_ - iStack_1d4;
    local_1b8[10] = (int)uStack_2d0 - iStack_1d0;
    iStack_18c = uStack_2d0._4_4_ - iStack_1cc;
    local_188 = (int)local_2c8 - local_1c8;
    iStack_184 = local_2c8._4_4_ - iStack_1c4;
    iStack_180 = (int)uStack_2c0 - iStack_1c0;
    iStack_17c = uStack_2c0._4_4_ - iStack_1bc;
    piVar5 = local_1b8;
    uVar8 = uVar7;
    do {
      iVar6 = (int)uVar8;
      uVar8 = (ulonglong)(iVar6 + 8U);
      *piVar5 = (-(uint)(iVar6 == 8) & 0x1ffffffc | ~-(uint)(iVar6 == 8) & 0x1ffffffe) + *piVar5;
      piVar5[1] = (-(uint)(iVar6 == 7) & 0x1ffffffc | ~-(uint)(iVar6 == 7) & 0x1ffffffe) + piVar5[1]
      ;
      piVar5[2] = (-(uint)(iVar6 == 6) & 0x1ffffffc | ~-(uint)(iVar6 == 6) & 0x1ffffffe) + piVar5[2]
      ;
      piVar5[3] = (-(uint)(iVar6 == 5) & 0x1ffffffc | ~-(uint)(iVar6 == 5) & 0x1ffffffe) + piVar5[3]
      ;
      auVar12 = *(undefined1 (*) [16])(piVar5 + 4);
      piVar5[4] = (-(uint)(iVar6 == 4) & 0x1ffffffc | ~-(uint)(iVar6 == 4) & 0x1ffffffe) +
                  auVar12._0_4_;
      piVar5[5] = (-(uint)(iVar6 == 3) & 0x1ffffffc | ~-(uint)(iVar6 == 3) & 0x1ffffffe) +
                  auVar12._4_4_;
      piVar5[6] = (-(uint)(iVar6 == 2) & 0x1ffffffc | ~-(uint)(iVar6 == 2) & 0x1ffffffe) +
                  auVar12._8_4_;
      piVar5[7] = (-(uint)(iVar6 == 1) & 0x1ffffffc | ~-(uint)(iVar6 == 1) & 0x1ffffffe) +
                  auVar12._12_4_;
      piVar5 = piVar5 + 8;
    } while (iVar6 + 8U < 0x10);
    gf_weak_reduce(local_1b8);
    gf_mulw_unsigned(local_238 + 0x10,local_1b8,0x98a9);
    local_238[0x10] = local_238[0x10] + (int)local_2f8;
    iStack_1f4 = iStack_1f4 + local_2f8._4_4_;
    iStack_1f0 = iStack_1f0 + (int)uStack_2f0;
    iStack_1ec = iStack_1ec + uStack_2f0._4_4_;
    local_1e8 = local_1e8 + (int)local_2e8;
    iStack_1e4 = iStack_1e4 + local_2e8._4_4_;
    iStack_1e0 = iStack_1e0 + (int)uStack_2e0;
    iStack_1dc = iStack_1dc + uStack_2e0._4_4_;
    local_1d8 = local_1d8 + (int)local_2d8;
    iStack_1d4 = iStack_1d4 + local_2d8._4_4_;
    iStack_1d0 = iStack_1d0 + (int)uStack_2d0;
    iStack_1cc = iStack_1cc + uStack_2d0._4_4_;
    local_1c8 = local_1c8 + (int)local_2c8;
    iStack_1c4 = iStack_1c4 + local_2c8._4_4_;
    iStack_1c0 = iStack_1c0 + (int)uStack_2c0;
    iStack_1bc = iStack_1bc + uStack_2c0._4_4_;
    gf_mul(&local_2f8,local_1b8,local_238 + 0x10);
    uVar8 = (ulonglong)(uVar1 - 1);
  } while (-1 < (int)(uVar1 - 1));
  auVar11._4_4_ = uVar9;
  auVar11._0_4_ = uVar9;
  auVar11._8_4_ = uVar9;
  auVar11._12_4_ = uVar9;
  uVar2 = uVar7;
  do {
    auVar12 = (*(undefined1 (*) [16])((longlong)local_238 + uVar2) ^
              *(undefined1 (*) [16])((longlong)&local_2b8 + uVar2)) & auVar11;
    *(undefined1 (*) [16])((longlong)local_238 + uVar2) =
         auVar12 ^ *(undefined1 (*) [16])((longlong)local_238 + uVar2);
    *(undefined1 (*) [16])((longlong)&local_2b8 + uVar2) =
         auVar12 ^ *(undefined1 (*) [16])((longlong)&local_2b8 + uVar2);
    uVar2 = uVar2 + 0x10;
  } while (uVar2 < 0x40);
  do {
    auVar12 = (*(undefined1 (*) [16])((longlong)&local_2f8 + uVar7) ^
              *(undefined1 (*) [16])((longlong)local_278 + uVar7)) & auVar11;
    *(undefined1 (*) [16])((longlong)&local_2f8 + uVar7) =
         auVar12 ^ *(undefined1 (*) [16])((longlong)&local_2f8 + uVar7);
    *(undefined1 (*) [16])((longlong)local_278 + uVar7) =
         auVar12 ^ *(undefined1 (*) [16])((longlong)local_278 + uVar7);
    uVar7 = uVar7 + 0x10;
  } while (uVar7 < 0x40);
  gf_sqr(local_f8,&local_2f8);
  gf_isr(&local_138,local_f8);
  gf_sqr(local_f8,&local_138);
  gf_mul(&local_138,local_f8,&local_2f8);
  local_2f8 = local_138;
  uStack_2f0 = uStack_130;
  local_2e8 = local_128;
  uStack_2e0 = uStack_120;
  local_2d8 = local_118;
  uStack_2d0 = uStack_110;
  local_2c8 = local_108;
  uStack_2c0 = uStack_100;
  gf_mul(&local_178,local_238,&local_2f8);
  gf_serialize(param_1,&local_178,1);
  uVar1 = gf_eq(&local_178,&DAT_145daa5c0);
  FUN_14004ff40(&local_178,0x40);
  FUN_14004ff40(local_238,0x40);
  FUN_14004ff40(&local_2f8,0x40);
  FUN_14004ff40(&local_2b8,0x40);
  FUN_14004ff40(local_278,0x40);
  FUN_14004ff40(local_238 + 0x10,0x40);
  FUN_14004ff40(local_1b8,0x40);
  return ~uVar1;
}



// FUNCTION 143d8def0 ED448_public_from_private body=364 status=ok
// SIG undefined ED448_public_from_private(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool ED448_public_from_private(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [64];
  undefined1 local_168 [256];
  byte local_68 [55];
  byte local_31;
  undefined1 local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d8df02;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  lVar2 = EVP_MD_CTX_new();
  if (lVar2 != 0) {
    uVar3 = EVP_shake256();
    iVar1 = EVP_DigestInit_ex(lVar2,uVar3,0);
    if (iVar1 != 0) {
      iVar1 = EVP_DigestUpdate(lVar2,param_2,0x39);
      if (iVar1 != 0) {
        iVar1 = EVP_DigestFinalXOF(lVar2,local_68,0x39);
        if (iVar1 != 0) {
          EVP_MD_CTX_free(lVar2);
          local_68[0] = local_68[0] & 0xfc;
          local_31 = local_31 | 0x80;
          local_30 = 0;
          curve448_scalar_decode_long(local_1a8,local_68,0x39);
          uVar4 = 1;
          do {
            curve448_scalar_halve(local_1a8,local_1a8);
            uVar4 = uVar4 * 2;
          } while (uVar4 < 4);
          curve448_precomputed_scalarmul(local_168,PTR_DAT_146838280,local_1a8);
          curve448_point_mul_by_ratio_and_encode_like_eddsa(param_1,local_168);
          curve448_scalar_destroy(local_1a8);
          curve448_point_destroy(local_168);
          FUN_14004ff40(local_68,0x39);
          iVar1 = -1;
          goto LAB_143d8e030;
        }
      }
    }
    EVP_MD_CTX_free(lVar2);
  }
  iVar1 = 0;
LAB_143d8e030:
  return iVar1 == -1;
}



// FUNCTION 143d8e060 ED448_sign body=80 status=ok
// SIG undefined ED448_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ED448_sign(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  
  iVar1 = c448_ed448_sign(param_1,param_5,param_4,param_2,param_3,0,param_6,param_7,0x143d8e06a);
  return iVar1 == -1;
}



// FUNCTION 143d8e0b0 ED448_verify body=75 status=ok
// SIG undefined ED448_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ED448_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = c448_ed448_verify(param_3,param_4,param_1,param_2,0,param_5,param_6);
  return iVar1 == -1;
}



// FUNCTION 143d8e100 c448_ed448_sign body=1013 status=ok
// SIG undefined c448_ed448_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
c448_ed448_sign(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 *local_308;
  undefined1 local_300 [56];
  undefined1 local_2c8 [56];
  undefined1 local_290 [56];
  undefined1 local_258 [64];
  undefined1 local_218 [256];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  byte local_d8 [55];
  byte local_a1;
  undefined1 local_a0;
  undefined1 local_9f [71];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  local_318 = param_7;
  local_310 = param_3;
  local_308 = param_1;
  lVar4 = EVP_MD_CTX_new();
  uVar7 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  if (lVar4 != 0) {
    lVar5 = EVP_MD_CTX_new();
    uVar8 = 0;
    if (lVar5 != 0) {
      uVar6 = EVP_shake256();
      iVar3 = EVP_DigestInit_ex(lVar5,uVar6,0);
      uVar8 = uVar7;
      if (((iVar3 == 0) || (iVar3 = EVP_DigestUpdate(lVar5,param_2,0x39), iVar3 == 0)) ||
         (iVar3 = EVP_DigestFinalXOF(lVar5,local_d8,0x72), iVar3 == 0)) {
        EVP_MD_CTX_free(lVar5);
      }
      else {
        EVP_MD_CTX_free(lVar5);
        local_d8[0] = local_d8[0] & 0xfc;
        local_a1 = local_a1 | 0x80;
        local_a0 = 0;
        curve448_scalar_decode_long(local_258,local_d8,0x39);
        local_328 = param_8;
        iVar3 = hash_init_with_dom(lVar4,param_6,0,param_7);
        if (((iVar3 == 0) || (iVar3 = EVP_DigestUpdate(lVar4,local_9f,0x39), iVar3 == 0)) ||
           (iVar3 = EVP_DigestUpdate(lVar4,param_4,param_5), iVar3 == 0)) {
          FUN_14004ff40(local_d8,0x72);
        }
        else {
          FUN_14004ff40(local_d8,0x72);
          iVar3 = EVP_DigestFinalXOF(lVar4,local_d8,0x72);
          if (iVar3 != 0) {
            curve448_scalar_decode_long(local_290,local_d8,0x72);
            FUN_14004ff40(local_d8,0x72);
            curve448_scalar_halve(local_2c8,local_290);
            uVar1 = 2;
            do {
              curve448_scalar_halve(local_2c8,local_2c8);
              uVar1 = uVar1 * 2;
            } while (uVar1 < 4);
            curve448_precomputed_scalarmul(local_218,PTR_DAT_146838280,local_2c8);
            curve448_point_mul_by_ratio_and_encode_like_eddsa(&local_118,local_218);
            curve448_point_destroy(local_218);
            curve448_scalar_destroy(local_2c8);
            local_328 = param_8;
            iVar3 = hash_init_with_dom(lVar4,param_6,0,local_318);
            if (((iVar3 != 0) && (iVar3 = EVP_DigestUpdate(lVar4,&local_118,0x39), iVar3 != 0)) &&
               ((iVar3 = EVP_DigestUpdate(lVar4,local_310,0x39), iVar3 != 0 &&
                ((iVar3 = EVP_DigestUpdate(lVar4,param_4,param_5), iVar3 != 0 &&
                 (iVar3 = EVP_DigestFinalXOF(lVar4,local_d8,0x72), iVar3 != 0)))))) {
              curve448_scalar_decode_long(local_300,local_d8,0x72);
              FUN_14004ff40(local_d8,0x72);
              curve448_scalar_mul(local_300,local_300,local_258);
              curve448_scalar_add(local_300,local_300,local_290);
              puVar2 = local_308;
              FUN_14004ff40(local_308,0x72);
              *puVar2 = local_118;
              puVar2[1] = uStack_110;
              puVar2[2] = local_108;
              puVar2[3] = uStack_100;
              *(undefined4 *)(puVar2 + 4) = (undefined4)local_f8;
              *(undefined4 *)((longlong)puVar2 + 0x24) = local_f8._4_4_;
              *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_f0;
              *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_f0._4_4_;
              puVar2[6] = local_e8;
              *(undefined1 *)(puVar2 + 7) = local_e0;
              curve448_scalar_encode((longlong)puVar2 + 0x39,local_300);
              curve448_scalar_destroy(local_258);
              curve448_scalar_destroy(local_290);
              curve448_scalar_destroy(local_300);
              uVar8 = 0xffffffff;
            }
          }
        }
      }
    }
    EVP_MD_CTX_free(lVar4);
    return uVar8;
  }
  return 0;
}



// FUNCTION 143d8e500 c448_ed448_verify body=471 status=ok
// SIG undefined c448_ed448_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
c448_ed448_verify(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6,byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_368 [32];
  ulonglong local_348;
  undefined1 local_338 [56];
  undefined1 local_300 [56];
  undefined1 local_2c8 [256];
  undefined1 local_1c8 [256];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  uVar2 = curve448_point_decode_like_eddsa_and_mul_by_ratio(local_2c8);
  if (((int)uVar2 == -1) &&
     (uVar2 = curve448_point_decode_like_eddsa_and_mul_by_ratio(local_1c8,param_1), (int)uVar2 == -1
     )) {
    lVar3 = EVP_MD_CTX_new();
    if (lVar3 != 0) {
      local_348 = (ulonglong)param_7;
      iVar1 = hash_init_with_dom(lVar3,param_5,0,param_6);
      if ((((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(lVar3,param_1,0x39), iVar1 != 0)) &&
          (iVar1 = EVP_DigestUpdate(lVar3,param_2,0x39), iVar1 != 0)) &&
         ((iVar1 = EVP_DigestUpdate(lVar3,param_3,param_4), iVar1 != 0 &&
          (iVar1 = EVP_DigestFinalXOF(lVar3,local_c8,0x72), iVar1 != 0)))) {
        EVP_MD_CTX_free(lVar3);
        curve448_scalar_decode_long(local_338,local_c8,0x72);
        FUN_14004ff40(local_c8,0x72);
        curve448_scalar_sub(local_338,&DAT_145db72f8,local_338);
        curve448_scalar_decode_long(local_300,param_1 + 0x39,0x39);
        curve448_base_double_scalarmul_non_secret(local_2c8,local_300,local_2c8,local_338);
        uVar2 = curve448_point_eq(local_2c8,local_1c8);
        return uVar2;
      }
    }
    EVP_MD_CTX_free(lVar3);
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143d8e6e0 hash_init_with_dom body=200 status=ok
// SIG undefined hash_init_with_dom(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
hash_init_with_dom(undefined8 param_1,char param_2,char param_3,undefined8 param_4,ulonglong param_5
                  )

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = param_5;
  if (param_5 < 0x100) {
    param_5._1_1_ = (char)param_5;
    param_5._0_1_ = ((param_2 != '\0') + '\x01') - (param_3 == '\0');
    uVar3 = EVP_shake256();
    iVar2 = EVP_DigestInit_ex(param_1,uVar3,0);
    if (iVar2 != 0) {
      iVar2 = EVP_DigestUpdate(param_1,"SigEd448",8);
      if (iVar2 != 0) {
        iVar2 = EVP_DigestUpdate(param_1,&param_5,2);
        if (iVar2 != 0) {
          iVar2 = EVP_DigestUpdate(param_1,param_4,uVar1);
          if (iVar2 != 0) {
            return 0xffffffff;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143d8e7b0 ED25519_public_from_private body=254 status=ok
// SIG undefined ED25519_public_from_private(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ED25519_public_from_private(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_198 [32];
  char local_178 [40];
  undefined1 local_150 [40];
  undefined1 local_128 [48];
  undefined1 local_f8 [40];
  undefined1 local_d0 [40];
  undefined1 local_a8 [80];
  byte local_58 [31];
  byte local_39;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d8e7bc;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  SHA512(param_2,0x20,local_58);
  local_58[0] = local_58[0] & 0xf8;
  local_39 = local_39 & 0x3f | 0x40;
  ge_scalarmult_base(local_f8,local_58);
  fe_invert(local_178,local_a8);
  fe_mul(local_128,local_f8,local_178);
  fe_mul(local_150,local_d0,local_178);
  fe_tobytes(param_1,local_150);
  fe_tobytes(local_178,local_128);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_178[0] << 7;
  FUN_14004ff40(local_58,0x40);
  return;
}



// FUNCTION 143d8e8b0 ED25519_sign body=529 status=ok
// SIG undefined ED25519_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
ED25519_sign(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined1 auStack_328 [32];
  char local_308 [40];
  undefined1 local_2e0 [40];
  undefined1 local_2b8 [48];
  undefined1 local_288 [224];
  undefined1 local_1a8 [40];
  undefined1 local_180 [40];
  undefined1 local_158 [80];
  byte local_108 [31];
  byte local_e9;
  undefined1 local_e8 [32];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x143d8e8cb;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  SHA512_Init(local_288);
  SHA512_Update(local_288,param_5,0x20);
  SHA512_Final(local_108,local_288);
  local_108[0] = local_108[0] & 0xf8;
  local_e9 = local_e9 & 0x3f | 0x40;
  SHA512_Init(local_288);
  SHA512_Update(local_288,local_e8,0x20);
  SHA512_Update(local_288,param_2,param_3);
  SHA512_Final(local_c8,local_288);
  x25519_sc_reduce(local_c8);
  ge_scalarmult_base(local_1a8,local_c8);
  fe_invert(local_308,local_158);
  fe_mul(local_2b8,local_1a8,local_308);
  fe_mul(local_2e0,local_180,local_308);
  fe_tobytes(param_1,local_2e0);
  fe_tobytes(local_308,local_2b8);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_308[0] << 7;
  SHA512_Init(local_288);
  SHA512_Update(local_288,param_1,0x20);
  SHA512_Update(local_288,param_4,0x20);
  SHA512_Update(local_288,param_2,param_3);
  SHA512_Final(local_88,local_288);
  x25519_sc_reduce(local_88);
  sc_muladd(param_1 + 0x20,local_88,local_108,local_c8);
  FUN_14004ff40(local_288,0xd8);
  FUN_14004ff40(local_c8,0x40);
  FUN_14004ff40(local_108,0x40);
  return 1;
}



// FUNCTION 143d8ead0 ED25519_verify body=502 status=ok
// SIG undefined ED25519_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool ED25519_verify(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_358 [32];
  undefined1 local_338 [40];
  undefined1 local_310 [40];
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  undefined1 local_248 [40];
  undefined1 local_220 [40];
  undefined1 local_1f8 [48];
  undefined1 local_1c8 [224];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c0 [31];
  byte local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d8eae9;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  if (((*(byte *)((longlong)param_3 + 0x3f) & 0xe0) == 0) &&
     (iVar1 = ge_frombytes_vartime(&local_2e8,param_4), iVar1 == 0)) {
    local_a0 = *param_3;
    uStack_98 = param_3[1];
    local_2e8 = -local_2e8;
    local_90 = param_3[2];
    uStack_88 = param_3[3];
    local_2e4 = -local_2e4;
    local_2e0 = -local_2e0;
    local_2dc = -local_2dc;
    local_2d8 = -local_2d8;
    local_2d4 = -local_2d4;
    local_2d0 = -local_2d0;
    local_2cc = -local_2cc;
    local_2c8 = -local_2c8;
    local_2c4 = -local_2c4;
    local_270 = -local_270;
    local_26c = -local_26c;
    local_268 = -local_268;
    local_264 = -local_264;
    local_260 = -local_260;
    local_25c = -local_25c;
    local_258 = -local_258;
    local_254 = -local_254;
    local_250 = -local_250;
    local_24c = -local_24c;
    local_e8 = *(undefined4 *)(param_3 + 4);
    uStack_e4 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_e0 = *(undefined4 *)(param_3 + 5);
    uStack_dc = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_d8 = *(undefined4 *)(param_3 + 6);
    uStack_d4 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_d0 = *(undefined4 *)(param_3 + 7);
    uStack_cc = *(undefined4 *)((longlong)param_3 + 0x3c);
    SHA512_Init(local_1c8);
    SHA512_Update(local_1c8,param_3,0x20);
    SHA512_Update(local_1c8,param_4,0x20);
    SHA512_Update(local_1c8,param_1,param_2);
    SHA512_Final(local_78,local_1c8);
    x25519_sc_reduce(local_78);
    ge_double_scalarmult_vartime(local_248,local_78,&local_2e8,&local_e8);
    fe_invert(&local_e8,local_1f8);
    fe_mul(local_310,local_248,&local_e8);
    fe_mul(local_338,local_220,&local_e8);
    fe_tobytes(local_c0,local_338);
    fe_tobytes(&local_e8,local_310);
    local_a1 = local_a1 ^ (char)local_e8 << 7;
    iVar1 = FUN_14004ffa0(local_c0,&local_a0,0x20);
    return iVar1 == 0;
  }
  return false;
}



// FUNCTION 143d8ecd0 X25519 body=59 status=ok
// SIG undefined X25519(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X25519(undefined8 param_1)

{
  int iVar1;
  
  x25519_scalar_mult();
  iVar1 = FUN_14004ffa0(&DAT_145db2500,param_1,0x20);
  return iVar1 != 0;
}



// FUNCTION 143d8ed10 X25519_public_from_private body=363 status=ok
// SIG undefined X25519_public_from_private(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void X25519_public_from_private(undefined8 param_1,uint *param_2)

{
  undefined1 auStack_178 [32];
  undefined1 local_158 [48];
  undefined1 local_128 [40];
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 local_28 [15];
  byte bStack_19;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d8ed25;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_38 = *param_2 & 0xfffffff8;
  local_28 = SUB1615(*(undefined1 (*) [16])(param_2 + 4),0);
  bStack_19 = SUB161(*(undefined1 (*) [16])(param_2 + 4),0xf) & 0x3f | 0x40;
  ge_scalarmult_base(local_128,&local_38);
  local_88 = local_100 + local_d8;
  local_60 = local_d8 - local_100;
  local_84 = local_fc + local_d4;
  local_5c = local_d4 - local_fc;
  local_80 = local_f8 + local_d0;
  local_58 = local_d0 - local_f8;
  local_7c = local_f4 + local_cc;
  local_54 = local_cc - local_f4;
  local_78 = local_f0 + local_c8;
  local_50 = local_c8 - local_f0;
  local_74 = local_ec + local_c4;
  local_4c = local_c4 - local_ec;
  local_70 = local_e8 + local_c0;
  local_48 = local_c0 - local_e8;
  local_6c = local_e4 + local_bc;
  local_44 = local_bc - local_e4;
  local_68 = local_e0 + local_b8;
  local_40 = local_b8 - local_e0;
  local_64 = local_dc + local_b4;
  local_3c = local_b4 - local_dc;
  fe_invert(local_158,&local_60);
  fe_mul(&local_88,&local_88,local_158);
  fe_tobytes(param_1,&local_88);
  FUN_14004ff40(&local_38,0x20);
  return;
}



// FUNCTION 143d8ee80 cmov body=429 status=ok
// SIG undefined cmov(void)

void cmov(uint *param_1,uint *param_2,byte param_3)

{
  uint uVar1;
  
  uVar1 = -(uint)param_3;
  *param_1 = *param_1 ^ (*param_2 ^ *param_1) & uVar1;
  param_1[1] = param_1[1] ^ (param_2[1] ^ param_1[1]) & uVar1;
  param_1[2] = param_1[2] ^ (param_2[2] ^ param_1[2]) & uVar1;
  param_1[3] = param_1[3] ^ (param_2[3] ^ param_1[3]) & uVar1;
  param_1[4] = param_1[4] ^ (param_2[4] ^ param_1[4]) & uVar1;
  param_1[5] = param_1[5] ^ (param_2[5] ^ param_1[5]) & uVar1;
  param_1[6] = param_1[6] ^ (param_2[6] ^ param_1[6]) & uVar1;
  param_1[7] = param_1[7] ^ (param_2[7] ^ param_1[7]) & uVar1;
  param_1[8] = param_1[8] ^ (param_2[8] ^ param_1[8]) & uVar1;
  param_1[9] = param_1[9] ^ (param_2[9] ^ param_1[9]) & uVar1;
  param_1[10] = param_1[10] ^ (param_2[10] ^ param_1[10]) & uVar1;
  param_1[0xb] = param_1[0xb] ^ (param_2[0xb] ^ param_1[0xb]) & uVar1;
  param_1[0xc] = param_1[0xc] ^ (param_2[0xc] ^ param_1[0xc]) & uVar1;
  param_1[0xd] = param_1[0xd] ^ (param_2[0xd] ^ param_1[0xd]) & uVar1;
  param_1[0xe] = param_1[0xe] ^ (param_2[0xe] ^ param_1[0xe]) & uVar1;
  param_1[0xf] = param_1[0xf] ^ (param_2[0xf] ^ param_1[0xf]) & uVar1;
  param_1[0x10] = param_1[0x10] ^ (param_2[0x10] ^ param_1[0x10]) & uVar1;
  param_1[0x11] = param_1[0x11] ^ (param_2[0x11] ^ param_1[0x11]) & uVar1;
  param_1[0x12] = param_1[0x12] ^ (param_2[0x12] ^ param_1[0x12]) & uVar1;
  param_1[0x13] = param_1[0x13] ^ (param_2[0x13] ^ param_1[0x13]) & uVar1;
  param_1[0x14] = param_1[0x14] ^ (param_2[0x14] ^ param_1[0x14]) & uVar1;
  param_1[0x15] = param_1[0x15] ^ (param_2[0x15] ^ param_1[0x15]) & uVar1;
  param_1[0x16] = param_1[0x16] ^ (param_2[0x16] ^ param_1[0x16]) & uVar1;
  param_1[0x17] = param_1[0x17] ^ (param_2[0x17] ^ param_1[0x17]) & uVar1;
  param_1[0x18] = param_1[0x18] ^ (param_2[0x18] ^ param_1[0x18]) & uVar1;
  param_1[0x19] = param_1[0x19] ^ (param_2[0x19] ^ param_1[0x19]) & uVar1;
  param_1[0x1a] = param_1[0x1a] ^ (param_2[0x1a] ^ param_1[0x1a]) & uVar1;
  param_1[0x1b] = param_1[0x1b] ^ (param_2[0x1b] ^ param_1[0x1b]) & uVar1;
  param_1[0x1c] = param_1[0x1c] ^ (param_2[0x1c] ^ param_1[0x1c]) & uVar1;
  param_1[0x1d] = param_1[0x1d] ^ (param_2[0x1d] ^ param_1[0x1d]) & uVar1;
  return;
}



// FUNCTION 143d8f030 fe51_frombytes body=458 status=ok
// SIG undefined fe51_frombytes(void)

void fe51_frombytes(ulonglong *param_1,uint7 *param_2)

{
  uint7 uVar1;
  uint6 uVar2;
  uint6 uVar3;
  uint7 uVar4;
  uint6 uVar5;
  
  uVar1 = *param_2;
  uVar2 = *(uint6 *)((longlong)param_2 + 0x1a);
  uVar3 = *(uint6 *)((longlong)param_2 + 7);
  uVar4 = *(uint7 *)((longlong)param_2 + 0xd);
  uVar5 = *(uint6 *)((longlong)param_2 + 0x14);
  *param_1 = (ulonglong)uVar1 & 0x7ffffffffffff;
  param_1[1] = ((ulonglong)uVar3 & 0x3fffffffffff) << 5 | (ulonglong)(uVar1 >> 0x33);
  param_1[3] = ((ulonglong)uVar5 & 0xfffffffffff) << 7 | (ulonglong)(uVar4 >> 0x31);
  param_1[2] = ((ulonglong)uVar4 & 0x1ffffffffffff) << 2 | (ulonglong)(uVar3 >> 0x2e);
  param_1[4] = ((ulonglong)uVar2 & 0x7fffffffffff) << 4 | (ulonglong)(uVar5 >> 0x2c);
  return;
}



// FUNCTION 143d8f200 fe51_invert body=644 status=ok
// SIG undefined fe51_invert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void fe51_invert(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x143d8f21a;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_1400c8040(local_40);
  FUN_1400c8040(local_90,local_40);
  FUN_1400c8040(local_90,local_90);
  FUN_1400c7e80(local_90,param_2,local_90);
  FUN_1400c7e80(local_40,local_40,local_90);
  FUN_1400c8040(local_b8,local_40);
  FUN_1400c7e80(local_90,local_90,local_b8);
  FUN_1400c8040(local_b8,local_90);
  lVar1 = 4;
  do {
    FUN_1400c8040(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c7e80(local_90,local_b8,local_90);
  FUN_1400c8040(local_b8,local_90);
  lVar1 = 9;
  do {
    FUN_1400c8040(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c7e80(local_b8,local_b8,local_90);
  FUN_1400c8040(local_68,local_b8);
  lVar1 = 0x13;
  do {
    FUN_1400c8040(local_68,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c7e80(local_b8,local_68,local_b8);
  lVar1 = 10;
  do {
    FUN_1400c8040(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c7e80(local_90,local_b8,local_90);
  FUN_1400c8040(local_b8,local_90);
  lVar1 = 0x31;
  do {
    FUN_1400c8040(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c7e80(local_b8,local_b8,local_90);
  FUN_1400c8040(local_68,local_b8);
  lVar1 = 99;
  do {
    FUN_1400c8040(local_68,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c7e80(local_b8,local_68,local_b8);
  lVar1 = 0x32;
  do {
    FUN_1400c8040(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c7e80(local_90,local_b8,local_90);
  lVar1 = 5;
  do {
    FUN_1400c8040(local_90,local_90);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c7e80(param_1,local_90,local_40);
  return;
}



// FUNCTION 143d8f490 fe51_tobytes body=478 status=ok
// SIG undefined fe51_tobytes(void)

void fe51_tobytes(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar1 = param_2[2];
  lVar2 = param_2[3];
  lVar3 = param_2[4];
  uVar4 = *param_2 +
          (((((*param_2 + 0x13U >> 0x33) + param_2[1] >> 0x33) + lVar1 >> 0x33) + lVar2 >> 0x33) +
           lVar3 >> 0x33) * 0x13;
  uVar5 = uVar4 & 0x7ffffffffffff;
  uVar4 = param_2[1] + (uVar4 >> 0x33);
  *param_1 = (char)uVar5;
  uVar6 = uVar4 & 0x7ffffffffffff;
  uVar4 = lVar1 + (uVar4 >> 0x33);
  uVar7 = uVar4 & 0x7ffffffffffff;
  uVar4 = lVar2 + (uVar4 >> 0x33);
  uVar8 = uVar4 & 0x7ffffffffffff;
  uVar4 = lVar3 + (uVar4 >> 0x33) & 0x7ffffffffffff;
  param_1[1] = (char)(uVar5 >> 8);
  param_1[2] = (char)(uVar5 >> 0x10);
  param_1[3] = (char)(uVar5 >> 0x18);
  param_1[4] = (char)(uVar5 >> 0x20);
  param_1[5] = (char)(uVar5 >> 0x28);
  param_1[7] = (char)(uVar6 >> 5);
  param_1[8] = (char)(uVar6 >> 0xd);
  param_1[9] = (char)(uVar6 >> 0x15);
  param_1[10] = (char)(uVar6 >> 0x1d);
  param_1[0xb] = (char)(uVar6 >> 0x25);
  param_1[6] = (byte)(uVar5 >> 0x30) | (char)uVar6 << 3;
  param_1[0xc] = (byte)(uVar6 >> 0x2d) | (char)uVar7 << 6;
  param_1[0xd] = (char)(uVar7 >> 2);
  param_1[0xe] = (char)(uVar7 >> 10);
  param_1[0xf] = (char)(uVar7 >> 0x12);
  param_1[0x10] = (char)(uVar7 >> 0x1a);
  param_1[0x11] = (char)(uVar7 >> 0x22);
  param_1[0x12] = (char)(uVar7 >> 0x2a);
  param_1[0x14] = (char)(uVar8 >> 7);
  param_1[0x15] = (char)(uVar8 >> 0xf);
  param_1[0x16] = (char)(uVar8 >> 0x17);
  param_1[0x17] = (char)(uVar8 >> 0x1f);
  param_1[0x18] = (char)(uVar8 >> 0x27);
  param_1[0x13] = (byte)(uVar7 >> 0x32) | (char)uVar8 * '\x02';
  param_1[0x19] = (byte)(uVar8 >> 0x2f) | (char)uVar4 << 4;
  param_1[0x1a] = (char)(uVar4 >> 4);
  param_1[0x1b] = (char)(uVar4 >> 0xc);
  param_1[0x1c] = (char)(uVar4 >> 0x14);
  param_1[0x1d] = (char)(uVar4 >> 0x1c);
  param_1[0x1e] = (char)(uVar4 >> 0x24);
  param_1[0x1f] = (char)(uVar4 >> 0x2c);
  return;
}



// FUNCTION 143d8f670 fe64_invert body=644 status=ok
// SIG undefined fe64_invert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void fe64_invert(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x143d8f68a;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_1400c8460(local_38);
  FUN_1400c8460(local_78,local_38);
  FUN_1400c8460(local_78,local_78);
  FUN_1400c82e0(local_78,param_2,local_78);
  FUN_1400c82e0(local_38,local_38,local_78);
  FUN_1400c8460(local_98,local_38);
  FUN_1400c82e0(local_78,local_78,local_98);
  FUN_1400c8460(local_98,local_78);
  lVar1 = 4;
  do {
    FUN_1400c8460(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c82e0(local_78,local_98,local_78);
  FUN_1400c8460(local_98,local_78);
  lVar1 = 9;
  do {
    FUN_1400c8460(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c82e0(local_98,local_98,local_78);
  FUN_1400c8460(local_58,local_98);
  lVar1 = 0x13;
  do {
    FUN_1400c8460(local_58,local_58);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c82e0(local_98,local_58,local_98);
  lVar1 = 10;
  do {
    FUN_1400c8460(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c82e0(local_78,local_98,local_78);
  FUN_1400c8460(local_98,local_78);
  lVar1 = 0x31;
  do {
    FUN_1400c8460(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c82e0(local_98,local_98,local_78);
  FUN_1400c8460(local_58,local_98);
  lVar1 = 99;
  do {
    FUN_1400c8460(local_58,local_58);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c82e0(local_98,local_58,local_98);
  lVar1 = 0x32;
  do {
    FUN_1400c8460(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c82e0(local_78,local_98,local_78);
  lVar1 = 5;
  do {
    FUN_1400c8460(local_78,local_78);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1400c82e0(param_1,local_78,local_38);
  return;
}



// FUNCTION 143d8f900 fe_frombytes body=719 status=ok
// SIG undefined fe_frombytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void fe_frombytes(int *param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int local_res10;
  int local_res18;
  int local_58;
  
  lVar17 = (ulonglong)(uint3)param_2[1] * 0x40;
  uVar1 = lVar17 + 0x1000000;
  lVar10 = (ulonglong)*(uint3 *)((longlong)param_2 + 10) * 8;
  uVar14 = param_2[4];
  uVar2 = lVar10 + 0x1000000;
  lVar16 = (ulonglong)*(uint3 *)((longlong)param_2 + 0x17) * 0x20;
  lVar11 = ((ulonglong)
            ((*(byte *)((longlong)param_2 + 0x1f) & 0x7f) << 0x10 |
            (uint)*(byte *)((longlong)param_2 + 0x1d)) |
           (ulonglong)*(byte *)((longlong)param_2 + 0x1e) << 8) * 4;
  lVar18 = (ulonglong)*param_2 + (lVar11 + 0x1000000U >> 0x19) * 0x13;
  lVar19 = (ulonglong)*(uint3 *)((longlong)param_2 + 7) * 0x20 + (uVar1 >> 0x19);
  uVar3 = (ulonglong)uVar14 + 0x1000000;
  uVar4 = lVar16 + 0x1000000;
  lVar9 = (uVar2 >> 0x19) + (ulonglong)*(uint3 *)((longlong)param_2 + 0xd) * 4;
  uVar12 = lVar18 + 0x2000000;
  uVar5 = lVar9 + 0x2000000;
  lVar20 = (ulonglong)(uint3)param_2[5] * 0x80 + (uVar3 >> 0x19);
  uVar6 = lVar19 + 0x2000000;
  uVar7 = lVar20 + 0x2000000;
  lVar15 = (ulonglong)*(uint3 *)((longlong)param_2 + 0x1a) * 0x10 + (uVar4 >> 0x19);
  local_res10 = (int)lVar17;
  uVar8 = lVar15 + 0x2000000;
  param_1[1] = ((int)(uVar12 >> 0x1a) - ((uint)uVar1 & 0xfe000000)) + local_res10;
  *param_1 = (int)lVar18 - ((uint)uVar12 & 0xfc000000);
  local_res18 = (int)lVar10;
  param_1[2] = (int)lVar19 - ((uint)uVar6 & 0xfc000000);
  param_1[3] = ((int)(uVar6 >> 0x1a) - ((uint)uVar2 & 0xfe000000)) + local_res18;
  param_1[4] = (int)lVar9 - ((uint)uVar5 & 0xfc000000);
  param_1[6] = (int)lVar20 - ((uint)uVar7 & 0xfc000000);
  iVar13 = (int)lVar11;
  param_1[5] = ((int)(uVar5 >> 0x1a) - ((uint)uVar3 & 0xfe000000)) + uVar14;
  local_58 = (int)lVar16;
  param_1[7] = ((int)(uVar7 >> 0x1a) - ((uint)uVar4 & 0xfe000000)) + local_58;
  param_1[8] = (int)lVar15 - ((uint)uVar8 & 0xfc000000);
  param_1[9] = ((int)(uVar8 >> 0x1a) - (iVar13 + 0x1000000U & 0xfe000000)) + iVar13;
  return;
}



// FUNCTION 143d8fbd0 fe_invert body=626 status=ok
// SIG undefined fe_invert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void fe_invert(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  undefined1 local_58 [40];
  undefined1 local_30 [32];
  undefined8 uStack_10;
  
  uStack_10 = 0x143d8fbf4;
  fe_sq(local_30);
  fe_sq(local_80,local_30);
  fe_sq(local_80,local_80);
  fe_mul(local_80,param_2,local_80);
  fe_mul(local_30,local_30,local_80);
  fe_sq(local_a8,local_30);
  fe_mul(local_80,local_80,local_a8);
  fe_sq(local_a8,local_80);
  lVar2 = 4;
  lVar1 = 4;
  do {
    fe_sq(local_a8,local_a8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  fe_mul(local_80,local_a8,local_80);
  fe_sq(local_a8,local_80);
  lVar1 = 9;
  do {
    fe_sq(local_a8,local_a8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  fe_mul(local_a8,local_a8,local_80);
  fe_sq(local_58,local_a8);
  lVar1 = 0x13;
  do {
    fe_sq(local_58,local_58);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  fe_mul(local_a8,local_58,local_a8);
  lVar1 = 10;
  do {
    fe_sq(local_a8,local_a8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  fe_mul(local_80,local_a8,local_80);
  fe_sq(local_a8,local_80);
  lVar1 = 0x31;
  lVar3 = 0x31;
  do {
    fe_sq(local_a8,local_a8);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fe_mul(local_a8,local_a8,local_80);
  fe_sq(local_58,local_a8);
  lVar3 = 99;
  do {
    fe_sq(local_58,local_58);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fe_mul(local_a8,local_58,local_a8);
  fe_sq(local_a8,local_a8);
  do {
    fe_sq(local_a8,local_a8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  fe_mul(local_80,local_a8,local_80);
  fe_sq(local_80,local_80);
  do {
    fe_sq(local_80,local_80);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  fe_mul(param_1,local_80,local_30);
  return;
}



// FUNCTION 143d8fe50 fe_mul body=2407 status=ok
// SIG undefined fe_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void fe_mul(int *param_1,int *param_2,int *param_3)

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
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  int local_70;
  
  iVar1 = *param_2;
  iVar2 = param_3[5];
  iVar3 = param_2[5];
  iVar4 = param_2[7];
  iVar5 = param_3[4];
  lVar33 = (longlong)param_2[6];
  lVar41 = (longlong)param_2[8];
  lVar35 = (longlong)*param_3;
  iVar6 = param_2[1];
  iVar7 = param_2[2];
  iVar8 = param_2[3];
  iVar9 = param_2[4];
  iVar10 = param_2[9];
  iVar11 = param_3[3];
  lVar12 = (longlong)(iVar10 * 2);
  lVar13 = (longlong)(param_2[1] * 2);
  lVar14 = (longlong)(param_3[9] * 0x13);
  lVar15 = (longlong)(iVar8 * 2);
  lVar21 = (longlong)param_3[2];
  lVar16 = (longlong)(param_3[7] * 0x13);
  lVar17 = (longlong)(iVar3 * 2);
  lVar18 = (longlong)(iVar4 * 2);
  lVar25 = (longlong)(iVar2 * 0x13);
  lVar40 = (longlong)(param_3[8] * 0x13);
  lVar31 = (longlong)(param_3[6] * 0x13);
  lVar32 = (longlong)(iVar5 * 0x13);
  lVar28 = (longlong)(param_3[2] * 0x13);
  lVar30 = (longlong)(iVar11 * 0x13);
  lVar19 = (longlong)param_3[1];
  lVar27 = (longlong)iVar3;
  lVar36 = (param_3[1] * 0x13) * lVar12 + iVar1 * lVar35 + iVar7 * lVar40 + iVar9 * lVar31 +
           lVar33 * lVar32 + lVar41 * lVar28 + lVar30 * lVar18 + lVar25 * lVar17 + lVar16 * lVar15 +
           lVar14 * lVar13;
  lVar42 = (longlong)iVar6;
  lVar22 = (longlong)iVar5 * (longlong)iVar1 + lVar21 * iVar7 + lVar35 * iVar9 + lVar40 * lVar33 +
           lVar31 * lVar41 + lVar19 * lVar15 + iVar11 * lVar13 + lVar18 * lVar16 + lVar17 * lVar14 +
           lVar25 * lVar12;
  lVar29 = (longlong)iVar2;
  uVar20 = lVar22 + 0x2000000;
  lVar37 = lVar42 * lVar35 + iVar8 * lVar40 + lVar27 * lVar31 + lVar19 * iVar1 + iVar4 * lVar32 +
           iVar10 * lVar28 + lVar41 * lVar30 + lVar33 * lVar25 + iVar9 * lVar16 + iVar7 * lVar14 +
           (lVar36 + 0x2000000 >> 0x1a);
  lVar38 = lVar42 * iVar5 + iVar8 * lVar21 + lVar29 * iVar1 + lVar27 * lVar35 + iVar4 * lVar40 +
           iVar10 * lVar31 + (longlong)iVar11 * (longlong)iVar7 + lVar19 * iVar9 + lVar41 * lVar16 +
           lVar33 * lVar14 + ((longlong)uVar20 >> 0x1a);
  lVar39 = lVar38 + 0x1000000;
  lVar34 = (longlong)param_3[6];
  lVar26 = lVar21 * iVar1 + lVar35 * iVar7 + lVar40 * iVar9 + lVar31 * lVar33 + lVar32 * lVar41 +
           lVar19 * lVar13 + lVar18 * lVar25 + lVar17 * lVar16 + lVar30 * lVar12 + lVar15 * lVar14 +
           (lVar37 + 0x1000000 >> 0x19);
  lVar28 = lVar26 + 0x2000000;
  lVar23 = lVar34 * iVar1 + (longlong)iVar5 * (longlong)iVar7 + lVar29 * lVar13 + lVar21 * iVar9 +
           lVar35 * lVar33 + lVar40 * lVar41 + lVar19 * lVar17 + iVar11 * lVar15 + lVar18 * lVar14 +
           lVar16 * lVar12 + (lVar39 >> 0x19);
  lVar30 = lVar23 + 0x2000000;
  lVar24 = (longlong)param_3[7];
  lVar32 = lVar42 * lVar21 + iVar8 * lVar35 + lVar27 * lVar40 + iVar4 * lVar31 +
           (longlong)iVar11 * (longlong)iVar1 + iVar10 * lVar32 + lVar19 * iVar7 + lVar41 * lVar25 +
           lVar33 * lVar16 + iVar9 * lVar14 + (lVar28 >> 0x1a);
  lVar16 = lVar32 + 0x1000000;
  lVar31 = lVar24 * iVar1 + (longlong)iVar8 * (longlong)iVar5 + iVar3 * lVar21 + lVar29 * iVar7 +
           iVar4 * lVar35 + iVar10 * lVar40 + (longlong)iVar11 * (longlong)iVar9 + lVar19 * lVar33 +
           lVar41 * lVar14 + lVar34 * iVar6 + (lVar30 >> 0x1a);
  lVar22 = lVar22 + ((lVar16 >> 0x19) - (uVar20 & 0xfffffffffc000000));
  lVar25 = lVar31 + 0x1000000;
  lVar27 = lVar22 + 0x2000000;
  lVar15 = lVar34 * iVar7 + lVar24 * lVar13 + lVar29 * lVar15 + (longlong)iVar5 * (longlong)iVar9 +
           lVar21 * lVar33 + lVar19 * lVar18 + lVar35 * lVar41 + iVar11 * lVar17 + lVar14 * lVar12 +
           (longlong)param_3[8] * (longlong)iVar1 + (lVar25 >> 0x19);
  lVar12 = lVar15 + 0x2000000;
  lVar17 = (longlong)param_3[9] * (longlong)iVar1 + lVar24 * iVar7 +
           (longlong)iVar3 * (longlong)iVar5 + iVar4 * lVar21 + (longlong)iVar2 * (longlong)iVar9 +
           iVar10 * lVar35 + iVar11 * lVar33 + lVar19 * lVar41 +
           (longlong)param_3[8] * (longlong)iVar6 + lVar34 * iVar8 + (lVar12 >> 0x1a);
  lVar13 = lVar17 + 0x1000000;
  lVar36 = lVar36 + ((lVar13 >> 0x19) * 0x13 - (lVar36 + 0x2000000U & 0xfffffffffc000000));
  lVar14 = lVar36 + 0x2000000;
  *param_1 = (int)lVar36 - ((uint)lVar14 & 0xfc000000);
  iVar1 = (int)lVar37;
  param_1[2] = (int)lVar26 - ((uint)lVar28 & 0xfc000000);
  param_1[1] = ((int)(lVar14 >> 0x1a) - (iVar1 + 0x1000000U & 0xfe000000)) + iVar1;
  local_70 = (int)lVar38;
  param_1[3] = (int)lVar32 - ((uint)lVar16 & 0xfe000000);
  param_1[4] = (int)lVar22 - ((uint)lVar27 & 0xfc000000);
  param_1[5] = ((int)(lVar27 >> 0x1a) - ((uint)lVar39 & 0xfe000000)) + local_70;
  param_1[6] = (int)lVar23 - ((uint)lVar30 & 0xfc000000);
  param_1[9] = (int)lVar17 - ((uint)lVar13 & 0xfe000000);
  param_1[7] = (int)lVar31 - ((uint)lVar25 & 0xfe000000);
  param_1[8] = (int)lVar15 - ((uint)lVar12 & 0xfc000000);
  return;
}



// FUNCTION 143d907c0 fe_pow22523 body=619 status=ok
// SIG undefined fe_pow22523(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void fe_pow22523(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  undefined8 uStack_10;
  
  uStack_10 = 0x143d907e4;
  fe_sq(local_60);
  fe_sq(local_88,local_60);
  fe_sq(local_88,local_88);
  fe_mul(local_88,param_2,local_88);
  fe_mul(local_60,local_60,local_88);
  fe_sq(local_60,local_60);
  fe_mul(local_60,local_88,local_60);
  fe_sq(local_88,local_60);
  lVar1 = 4;
  do {
    fe_sq(local_88,local_88);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  fe_mul(local_60,local_88,local_60);
  fe_sq(local_88,local_60);
  lVar1 = 9;
  lVar2 = 9;
  do {
    fe_sq(local_88,local_88);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  fe_mul(local_88,local_88,local_60);
  fe_sq(local_38,local_88);
  lVar2 = 0x13;
  do {
    fe_sq(local_38,local_38);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  fe_mul(local_88,local_38,local_88);
  fe_sq(local_88,local_88);
  do {
    fe_sq(local_88,local_88);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  fe_mul(local_60,local_88,local_60);
  fe_sq(local_88,local_60);
  lVar1 = 0x31;
  lVar2 = 0x31;
  do {
    fe_sq(local_88,local_88);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  fe_mul(local_88,local_88,local_60);
  fe_sq(local_38,local_88);
  lVar2 = 99;
  do {
    fe_sq(local_38,local_38);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  fe_mul(local_88,local_38,local_88);
  fe_sq(local_88,local_88);
  do {
    fe_sq(local_88,local_88);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  fe_mul(local_60,local_88,local_60);
  fe_sq(local_60,local_60);
  fe_sq(local_60,local_60);
  fe_mul(param_1,local_60,param_2);
  return;
}



// FUNCTION 143d90a30 fe_sq body=1404 status=ok
// SIG undefined fe_sq(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void fe_sq(int *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  int local_68;
  int local_58;
  
  iVar3 = param_2[5];
  lVar27 = (longlong)iVar3;
  lVar34 = (longlong)param_2[4];
  lVar29 = (longlong)param_2[2];
  iVar4 = param_2[7];
  lVar32 = (longlong)iVar4;
  iVar5 = param_2[6];
  iVar6 = param_2[3];
  iVar7 = *param_2;
  iVar8 = param_2[1];
  iVar9 = param_2[9];
  lVar10 = (longlong)(iVar5 * 0x13);
  lVar11 = (longlong)(param_2[4] * 2);
  lVar23 = (longlong)(param_2[2] * 2);
  lVar13 = (longlong)(iVar4 * 0x26);
  lVar12 = (longlong)(iVar6 * 2);
  lVar16 = (longlong)(iVar9 * 0x26);
  lVar21 = (longlong)(iVar8 * 2);
  lVar14 = (longlong)(param_2[8] * 0x13);
  lVar17 = (longlong)iVar5;
  lVar24 = (longlong)(iVar3 * 2);
  lVar19 = (longlong)(iVar7 * 2);
  lVar26 = (iVar3 * 0x26) * lVar27 + (longlong)iVar7 * (longlong)iVar7 + lVar21 * lVar16 +
           lVar23 * lVar14 + lVar12 * lVar13 + lVar11 * lVar10;
  lVar35 = (iVar5 * 2) * lVar14 + lVar29 * lVar29 + lVar34 * lVar19 + lVar24 * lVar16 +
           lVar32 * lVar13 + lVar21 * lVar12;
  uVar25 = lVar35 + 0x2000000;
  lVar18 = iVar8 * lVar19 + lVar29 * lVar16 + lVar34 * lVar13 + lVar24 * lVar10 + lVar14 * lVar12 +
           (lVar26 + 0x2000000 >> 0x1a);
  lVar36 = (longlong)(iVar4 * 2);
  lVar1 = lVar18 + 0x1000000;
  lVar15 = (longlong)param_2[8];
  lVar30 = lVar17 * lVar16 + iVar6 * lVar23 + lVar36 * lVar14 + lVar34 * lVar21 + lVar19 * lVar27 +
           ((longlong)uVar25 >> 0x1a);
  lVar31 = lVar30 + 0x1000000;
  lVar20 = lVar29 * lVar19 + iVar8 * lVar21 + lVar17 * lVar10 + lVar24 * lVar13 + lVar16 * lVar12 +
           lVar14 * lVar11 + (lVar1 >> 0x19);
  lVar10 = lVar20 + 0x2000000;
  lVar22 = lVar17 * lVar19 + lVar15 * lVar14 + lVar36 * lVar16 + iVar6 * lVar12 + lVar24 * lVar21 +
           lVar34 * lVar23 + (lVar31 >> 0x19);
  lVar2 = lVar22 + 0x2000000;
  lVar28 = iVar6 * lVar19 + lVar17 * lVar13 + lVar29 * lVar21 + lVar34 * lVar16 + lVar24 * lVar14 +
           (lVar10 >> 0x1a);
  lVar13 = lVar28 + 0x1000000;
  lVar33 = lVar15 * lVar16 + lVar19 * lVar32 + lVar17 * lVar21 + lVar34 * lVar12 + lVar23 * lVar27 +
           (lVar2 >> 0x1a);
  lVar35 = lVar35 + ((lVar13 >> 0x19) - (uVar25 & 0xfffffffffc000000));
  lVar14 = lVar33 + 0x1000000;
  lVar29 = lVar35 + 0x2000000;
  lVar24 = iVar9 * lVar16 + lVar15 * lVar19 + lVar34 * lVar34 + lVar36 * lVar21 + lVar17 * lVar23 +
           lVar24 * lVar12 + (lVar14 >> 0x19);
  lVar16 = lVar24 + 0x2000000;
  lVar15 = iVar9 * lVar19 + lVar15 * lVar21 + lVar17 * lVar12 + lVar32 * lVar23 + lVar11 * lVar27 +
           (lVar16 >> 0x1a);
  lVar11 = lVar15 + 0x1000000;
  lVar26 = lVar26 + ((lVar11 >> 0x19) * 0x13 - (lVar26 + 0x2000000U & 0xfffffffffc000000));
  lVar12 = lVar26 + 0x2000000;
  local_68 = (int)lVar18;
  param_1[1] = ((int)(lVar12 >> 0x1a) - ((uint)lVar1 & 0xfe000000)) + local_68;
  *param_1 = (int)lVar26 - ((uint)lVar12 & 0xfc000000);
  param_1[2] = (int)lVar20 - ((uint)lVar10 & 0xfc000000);
  param_1[7] = (int)lVar33 - ((uint)lVar14 & 0xfe000000);
  param_1[3] = (int)lVar28 - ((uint)lVar13 & 0xfe000000);
  param_1[8] = (int)lVar24 - ((uint)lVar16 & 0xfc000000);
  local_58 = (int)lVar30;
  param_1[4] = (int)lVar35 - ((uint)lVar29 & 0xfc000000);
  param_1[9] = (int)lVar15 - ((uint)lVar11 & 0xfe000000);
  param_1[5] = ((int)(lVar29 >> 0x1a) - ((uint)lVar31 & 0xfe000000)) + local_58;
  param_1[6] = (int)lVar22 - ((uint)lVar2 & 0xfc000000);
  return;
}



// FUNCTION 143d90fb0 fe_sq2 body=1408 status=ok
// SIG undefined fe_sq2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void fe_sq2(int *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  
  lVar28 = (longlong)param_2[2];
  iVar5 = param_2[5];
  lVar27 = (longlong)iVar5;
  lVar32 = (longlong)param_2[4];
  iVar6 = param_2[7];
  lVar31 = (longlong)iVar6;
  iVar7 = param_2[6];
  iVar8 = *param_2;
  iVar9 = param_2[1];
  iVar10 = param_2[9];
  lVar11 = (longlong)(iVar7 * 0x13);
  lVar12 = (longlong)(param_2[4] * 2);
  lVar13 = (longlong)(iVar6 * 0x26);
  lVar14 = (longlong)(param_2[3] * 2);
  lVar20 = (longlong)(iVar10 * 0x26);
  lVar17 = (longlong)(param_2[8] * 0x13);
  lVar15 = (longlong)(param_2[2] * 2);
  lVar23 = (longlong)(iVar9 * 2);
  lVar21 = (longlong)iVar7;
  lVar16 = (longlong)(iVar8 * 2);
  lVar19 = ((iVar5 * 0x26) * lVar27 + (longlong)iVar8 * (longlong)iVar8 + lVar23 * lVar20 +
            lVar15 * lVar17 + lVar14 * lVar13 + lVar12 * lVar11) * 2;
  lVar24 = (longlong)(iVar5 * 2);
  lVar30 = (longlong)(iVar6 * 2);
  lVar26 = ((iVar7 * 2) * lVar17 + lVar28 * lVar28 + lVar32 * lVar16 + lVar24 * lVar20 +
            lVar31 * lVar13 + lVar23 * lVar14) * 2;
  uVar25 = lVar26 + 0x2000000;
  lVar22 = (longlong)param_2[3];
  lVar1 = (lVar19 + 0x2000000 >> 0x1a) +
          (iVar9 * lVar16 + lVar28 * lVar20 + lVar32 * lVar13 + lVar24 * lVar11 + lVar17 * lVar14) *
          2;
  lVar18 = (longlong)param_2[8];
  lVar2 = ((longlong)uVar25 >> 0x1a) +
          (lVar21 * lVar20 + lVar22 * lVar15 + lVar30 * lVar17 + lVar32 * lVar23 + lVar16 * lVar27)
          * 2;
  lVar3 = (lVar1 + 0x1000000 >> 0x19) +
          (lVar28 * lVar16 + iVar9 * lVar23 + lVar21 * lVar11 + lVar24 * lVar13 + lVar20 * lVar14 +
          lVar17 * lVar12) * 2;
  lVar33 = lVar3 + 0x2000000;
  lVar4 = (lVar2 + 0x1000000 >> 0x19) +
          (lVar21 * lVar16 + lVar18 * lVar17 + lVar30 * lVar20 + lVar22 * lVar14 + lVar24 * lVar23 +
          lVar32 * lVar15) * 2;
  lVar29 = lVar4 + 0x2000000;
  lVar22 = (lVar33 >> 0x1a) +
           (lVar22 * lVar16 + lVar21 * lVar13 + lVar28 * lVar23 + lVar32 * lVar20 + lVar24 * lVar17)
           * 2;
  lVar11 = lVar22 + 0x1000000;
  lVar28 = (lVar29 >> 0x1a) +
           (lVar18 * lVar20 + lVar16 * lVar31 + lVar21 * lVar23 + lVar32 * lVar14 + lVar15 * lVar27)
           * 2;
  lVar13 = lVar28 + 0x1000000;
  lVar26 = lVar26 + ((lVar11 >> 0x19) - (uVar25 & 0xfffffffffc000000));
  lVar17 = lVar26 + 0x2000000;
  lVar20 = (lVar13 >> 0x19) +
           (iVar10 * lVar20 + lVar18 * lVar16 + lVar32 * lVar32 + lVar30 * lVar23 + lVar21 * lVar15
           + lVar24 * lVar14) * 2;
  param_1[3] = (int)lVar22 - ((uint)lVar11 & 0xfe000000);
  lVar11 = lVar20 + 0x2000000;
  param_1[7] = (int)lVar28 - ((uint)lVar13 & 0xfe000000);
  param_1[8] = (int)lVar20 - ((uint)lVar11 & 0xfc000000);
  lVar22 = (lVar11 >> 0x1a) +
           (iVar10 * lVar16 + lVar18 * lVar23 + lVar21 * lVar14 + lVar31 * lVar15 + lVar12 * lVar27)
           * 2;
  lVar11 = lVar22 + 0x1000000;
  lVar19 = lVar19 + ((lVar11 >> 0x19) * 0x13 - (lVar19 + 0x2000000U & 0xfffffffffc000000));
  lVar13 = lVar19 + 0x2000000;
  *param_1 = (int)lVar19 - ((uint)lVar13 & 0xfc000000);
  iVar5 = (int)lVar1;
  param_1[2] = (int)lVar3 - ((uint)lVar33 & 0xfc000000);
  param_1[1] = ((int)(lVar13 >> 0x1a) - (iVar5 + 0x1000000U & 0xfe000000)) + iVar5;
  param_1[4] = (int)lVar26 - ((uint)lVar17 & 0xfc000000);
  iVar5 = (int)lVar2;
  param_1[5] = ((int)(lVar17 >> 0x1a) - (iVar5 + 0x1000000U & 0xfe000000)) + iVar5;
  param_1[9] = (int)lVar22 - ((uint)lVar11 & 0xfe000000);
  param_1[6] = (int)lVar4 - ((uint)lVar29 & 0xfc000000);
  return;
}



// FUNCTION 143d91530 fe_tobytes body=691 status=ok
// SIG undefined fe_tobytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void fe_tobytes(undefined1 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar1 = param_2[9];
  uVar9 = *param_2 +
          (((((((((((iVar1 * 0x13 + 0x1000000 >> 0x19) + *param_2 >> 0x1a) + param_2[1] >> 0x19) +
                  param_2[2] >> 0x1a) + param_2[3] >> 0x19) + param_2[4] >> 0x1a) + param_2[5] >>
              0x19) + param_2[6] >> 0x1a) + param_2[7] >> 0x19) + param_2[8] >> 0x1a) + iVar1 >>
          0x19) * 0x13;
  uVar10 = uVar9 & 0x3ffffff;
  uVar9 = param_2[1] + ((int)uVar9 >> 0x1a);
  uVar11 = uVar9 & 0x1ffffff;
  uVar9 = param_2[2] + ((int)uVar9 >> 0x19);
  uVar7 = uVar9 & 0x3ffffff;
  uVar9 = param_2[3] + ((int)uVar9 >> 0x1a);
  uVar8 = uVar9 & 0x1ffffff;
  uVar9 = param_2[4] + ((int)uVar9 >> 0x19);
  uVar5 = uVar9 & 0x3ffffff;
  uVar9 = param_2[5] + ((int)uVar9 >> 0x1a);
  uVar6 = uVar9 & 0x1ffffff;
  uVar9 = param_2[6] + ((int)uVar9 >> 0x19);
  uVar2 = uVar9 & 0x3ffffff;
  uVar3 = param_2[7] + ((int)uVar9 >> 0x1a);
  uVar9 = param_2[8] + ((int)uVar3 >> 0x19);
  uVar3 = uVar3 & 0x1ffffff;
  uVar4 = uVar9 & 0x3ffffff;
  uVar9 = ((int)uVar9 >> 0x1a) + iVar1 & 0x1ffffff;
  *param_1 = (char)uVar10;
  param_1[1] = (char)(uVar10 >> 8);
  param_1[2] = (char)(uVar10 >> 0x10);
  param_1[4] = (char)(uVar11 >> 6);
  param_1[3] = (byte)(uVar10 >> 0x18) | (char)uVar11 << 2;
  param_1[7] = (char)(uVar7 >> 5);
  param_1[10] = (char)(uVar8 >> 3);
  param_1[5] = (char)(uVar11 >> 0xe);
  param_1[0xd] = (char)(uVar5 >> 2);
  param_1[0xe] = (char)(uVar5 >> 10);
  param_1[0xf] = (char)(uVar5 >> 0x12);
  param_1[0x10] = (char)uVar6;
  param_1[0x11] = (char)(uVar6 >> 8);
  param_1[0x12] = (char)(uVar6 >> 0x10);
  param_1[6] = (byte)(uVar11 >> 0x16) | (char)uVar7 << 3;
  param_1[8] = (char)(uVar7 >> 0xd);
  param_1[9] = (byte)(uVar7 >> 0x15) | (char)uVar8 << 5;
  param_1[0x14] = (char)(uVar2 >> 7);
  param_1[0xb] = (char)(uVar8 >> 0xb);
  param_1[0xc] = (byte)(uVar8 >> 0x13) | (char)uVar5 << 6;
  param_1[0x13] = (byte)(uVar6 >> 0x18) | (char)uVar2 * '\x02';
  param_1[0x15] = (char)(uVar2 >> 0xf);
  param_1[0x18] = (char)(uVar3 >> 0xd);
  param_1[0x16] = (byte)(uVar2 >> 0x17) | (char)uVar3 << 3;
  param_1[0x17] = (char)(uVar3 >> 5);
  param_1[0x19] = (byte)(uVar3 >> 0x15) | (char)uVar4 << 4;
  param_1[0x1b] = (char)(uVar4 >> 0xc);
  param_1[0x1a] = (char)(uVar4 >> 4);
  param_1[0x1c] = (byte)(uVar4 >> 0x14) | (char)uVar9 << 6;
  param_1[0x1d] = (char)(uVar9 >> 2);
  param_1[0x1f] = (char)(uVar9 >> 0x12);
  param_1[0x1e] = (char)(uVar9 >> 10);
  return;
}



// FUNCTION 143d917f0 ge_add body=767 status=ok
// SIG undefined ge_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ge_add(int *param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
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
  
  piVar1 = param_1 + 10;
  piVar2 = param_1 + 0x14;
  *param_1 = *param_2 + param_2[10];
  param_1[1] = param_2[0xb] + param_2[1];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[3] + param_2[0xd];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[0xf] + param_2[5];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[7] + param_2[0x11];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[0x13] + param_2[9];
  *piVar1 = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  fe_mul(piVar2,param_1);
  fe_mul(piVar1,piVar1,param_3 + 0x28);
  piVar3 = param_1 + 0x1e;
  fe_mul(piVar3,param_3 + 0x78,param_2 + 0x1e);
  fe_mul(param_1,param_2 + 0x14,param_3 + 0x50);
  iVar4 = *param_1;
  iVar5 = param_1[1];
  iVar6 = param_1[2];
  iVar7 = param_1[3];
  iVar8 = param_1[4];
  iVar9 = param_1[5];
  iVar10 = param_1[6];
  iVar11 = param_1[7];
  iVar12 = param_1[8];
  iVar13 = param_1[9];
  *param_1 = *piVar2 - *piVar1;
  param_1[1] = param_1[0x15] - param_1[0xb];
  param_1[2] = param_1[0x16] - param_1[0xc];
  param_1[3] = param_1[0x17] - param_1[0xd];
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  param_1[8] = param_1[0x1c] - param_1[0x12];
  param_1[9] = param_1[0x1d] - param_1[0x13];
  *piVar1 = *piVar1 + *piVar2;
  param_1[0xb] = param_1[0xb] + param_1[0x15];
  param_1[0xc] = param_1[0xc] + param_1[0x16];
  param_1[0xd] = param_1[0xd] + param_1[0x17];
  param_1[0xe] = param_1[0xe] + param_1[0x18];
  param_1[0xf] = param_1[0xf] + param_1[0x19];
  param_1[0x10] = param_1[0x10] + param_1[0x1a];
  param_1[0x11] = param_1[0x11] + param_1[0x1b];
  param_1[0x12] = param_1[0x12] + param_1[0x1c];
  param_1[0x13] = param_1[0x13] + param_1[0x1d];
  *piVar2 = *piVar3 + iVar4 * 2;
  param_1[0x15] = param_1[0x1f] + iVar5 * 2;
  param_1[0x16] = param_1[0x20] + iVar6 * 2;
  param_1[0x17] = param_1[0x21] + iVar7 * 2;
  param_1[0x18] = param_1[0x22] + iVar8 * 2;
  param_1[0x19] = param_1[0x23] + iVar9 * 2;
  param_1[0x1a] = param_1[0x24] + iVar10 * 2;
  param_1[0x1b] = param_1[0x25] + iVar11 * 2;
  param_1[0x1c] = param_1[0x26] + iVar12 * 2;
  param_1[0x1d] = param_1[0x27] + iVar13 * 2;
  *piVar3 = iVar4 * 2 - *piVar3;
  param_1[0x1f] = iVar5 * 2 - param_1[0x1f];
  param_1[0x20] = iVar6 * 2 - param_1[0x20];
  param_1[0x21] = iVar7 * 2 - param_1[0x21];
  param_1[0x22] = iVar8 * 2 - param_1[0x22];
  param_1[0x23] = iVar9 * 2 - param_1[0x23];
  param_1[0x24] = iVar10 * 2 - param_1[0x24];
  param_1[0x25] = iVar11 * 2 - param_1[0x25];
  param_1[0x26] = iVar12 * 2 - param_1[0x26];
  param_1[0x27] = iVar13 * 2 - param_1[0x27];
  return;
}



// FUNCTION 143d91af0 ge_double_scalarmult_vartime body=1869 status=ok
// SIG undefined ge_double_scalarmult_vartime(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ge_double_scalarmult_vartime
               (undefined8 *param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_938 [32];
  undefined1 local_918 [40];
  undefined1 local_8f0 [40];
  undefined1 local_8c8 [40];
  undefined1 local_8a0 [40];
  undefined1 local_878 [40];
  undefined1 local_850 [40];
  undefined1 local_828 [40];
  undefined1 local_800 [40];
  undefined1 local_7d8 [40];
  undefined1 local_7b0 [40];
  undefined1 local_788 [40];
  undefined1 local_760 [40];
  undefined1 local_738 [160];
  undefined1 local_698 [160];
  undefined1 local_5f8 [160];
  undefined1 local_558 [160];
  undefined1 local_4b8 [160];
  undefined1 local_418 [160];
  undefined1 local_378 [160];
  undefined1 local_2d8 [160];
  char local_238 [252];
  char acStack_13c [256];
  char acStack_3c [4];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d91b0e;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_938;
  slide(local_238);
  slide(acStack_13c + 4,param_4);
  ge_p3_to_cached(local_738,param_3);
  _guard_xfg_dispatch_icall_nop(local_878,param_3,0x28);
  _guard_xfg_dispatch_icall_nop(local_850,(void *)((longlong)param_3 + 0x28),0x28);
  _guard_xfg_dispatch_icall_nop(local_828,(void *)((longlong)param_3 + 0x50),0x28);
  ge_p2_dbl(local_918,local_878);
  fe_mul(local_7d8,local_918,local_8a0);
  fe_mul(local_7b0,local_8f0,local_8c8);
  fe_mul(local_788,local_8c8,local_8a0);
  fe_mul(local_760,local_918,local_8f0);
  ge_add(local_918,local_7d8,local_738);
  fe_mul(local_878,local_918,local_8a0);
  fe_mul(local_850,local_8f0,local_8c8);
  fe_mul(local_828,local_8c8,local_8a0);
  fe_mul(local_800,local_918,local_8f0);
  ge_p3_to_cached(local_698,local_878);
  ge_add(local_918,local_7d8,local_698);
  fe_mul(local_878,local_918,local_8a0);
  fe_mul(local_850,local_8f0,local_8c8);
  fe_mul(local_828,local_8c8,local_8a0);
  fe_mul(local_800,local_918,local_8f0);
  ge_p3_to_cached(local_5f8,local_878);
  ge_add(local_918,local_7d8,local_5f8);
  fe_mul(local_878,local_918,local_8a0);
  fe_mul(local_850,local_8f0,local_8c8);
  fe_mul(local_828,local_8c8,local_8a0);
  fe_mul(local_800,local_918,local_8f0);
  ge_p3_to_cached(local_558,local_878);
  ge_add(local_918,local_7d8,local_558);
  fe_mul(local_878,local_918,local_8a0);
  fe_mul(local_850,local_8f0,local_8c8);
  fe_mul(local_828,local_8c8,local_8a0);
  fe_mul(local_800,local_918,local_8f0);
  ge_p3_to_cached(local_4b8,local_878);
  ge_add(local_918,local_7d8,local_4b8);
  fe_mul(local_878,local_918,local_8a0);
  fe_mul(local_850,local_8f0,local_8c8);
  fe_mul(local_828,local_8c8,local_8a0);
  fe_mul(local_800,local_918,local_8f0);
  ge_p3_to_cached(local_418,local_878);
  ge_add(local_918,local_7d8,local_418);
  fe_mul(local_878,local_918,local_8a0);
  fe_mul(local_850,local_8f0,local_8c8);
  fe_mul(local_828,local_8c8,local_8a0);
  fe_mul(local_800,local_918,local_8f0);
  ge_p3_to_cached(local_378,local_878);
  ge_add(local_918,local_7d8,local_378);
  fe_mul(local_878,local_918,local_8a0);
  fe_mul(local_850,local_8f0,local_8c8);
  fe_mul(local_828,local_8c8,local_8a0);
  fe_mul(local_800,local_918,local_8f0);
  ge_p3_to_cached(local_2d8,local_878);
  iVar3 = 0xff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  lVar4 = 0;
  do {
    if ((acStack_13c[lVar4 + 3] != '\0') || (acStack_3c[lVar4 + 3] != '\0')) break;
    if ((acStack_13c[lVar4 + 2] != '\0') || (acStack_3c[lVar4 + 2] != '\0')) {
      iVar3 = iVar3 + -1;
      break;
    }
    if ((acStack_13c[lVar4 + 1] != '\0') || (acStack_3c[lVar4 + 1] != '\0')) {
      iVar3 = iVar3 + -2;
      break;
    }
    if ((acStack_13c[lVar4] != '\0') || (acStack_3c[lVar4] != '\0')) {
      iVar3 = iVar3 + -3;
      break;
    }
    iVar3 = iVar3 + -4;
    lVar1 = lVar4 + 0xfb;
    lVar4 = lVar4 + -4;
  } while (-1 < lVar1);
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      ge_p2_dbl(local_918,param_1);
      cVar2 = local_238[lVar4];
      if (cVar2 < '\x01') {
        if (cVar2 < '\0') {
          fe_mul(local_878,local_918,local_8a0);
          fe_mul(local_850,local_8f0,local_8c8);
          fe_mul(local_828,local_8c8,local_8a0);
          fe_mul(local_800,local_918,local_8f0);
          ge_sub(local_918,local_878,local_738 + (longlong)-((int)cVar2 / 2) * 0xa0);
        }
      }
      else {
        fe_mul(local_878,local_918,local_8a0);
        fe_mul(local_850,local_8f0,local_8c8);
        fe_mul(local_828,local_8c8,local_8a0);
        fe_mul(local_800,local_918,local_8f0);
        ge_add(local_918,local_878,local_738 + (longlong)((int)cVar2 / 2) * 0xa0);
      }
      cVar2 = acStack_13c[lVar4 + 4];
      if (cVar2 < '\x01') {
        if (cVar2 < '\0') {
          fe_mul(local_878,local_918,local_8a0);
          fe_mul(local_850,local_8f0,local_8c8);
          fe_mul(local_828,local_8c8,local_8a0);
          fe_mul(local_800,local_918,local_8f0);
          ge_msub(local_918,local_878,&DAT_145db2140 + (longlong)-((int)cVar2 / 2) * 0x78);
        }
      }
      else {
        fe_mul(local_878,local_918,local_8a0);
        fe_mul(local_850,local_8f0,local_8c8);
        fe_mul(local_828,local_8c8,local_8a0);
        fe_mul(local_800,local_918,local_8f0);
        ge_madd(local_918,local_878,&DAT_145db2140 + (longlong)((int)cVar2 / 2) * 0x78);
      }
      fe_mul(param_1,local_918,local_8a0);
      fe_mul(param_1 + 5,local_8f0,local_8c8);
      fe_mul(param_1 + 10,local_8c8,local_8a0);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 143d92240 ge_frombytes_vartime body=850 status=ok
// SIG undefined ge_frombytes_vartime(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ge_frombytes_vartime(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d9225f;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  fe_frombytes(param_1 + 10);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x14] = 1;
  fe_sq(&local_e8,param_1 + 10);
  fe_mul(&local_c0,&local_e8,&DAT_145daa8c8);
  iVar4 = local_e4 - param_1[0x15];
  iVar5 = local_e0 - param_1[0x16];
  local_cc = local_cc - param_1[0x1b];
  local_c8 = local_c8 - param_1[0x1c];
  local_a4 = local_a4 + param_1[0x1b];
  local_a0 = local_a0 + param_1[0x1c];
  local_e8 = local_e8 + -1;
  local_dc = local_dc - param_1[0x17];
  local_d8 = local_d8 - param_1[0x18];
  local_d4 = local_d4 - param_1[0x19];
  local_d0 = local_d0 - param_1[0x1a];
  local_c4 = local_c4 - param_1[0x1d];
  local_c0 = local_c0 + 1;
  local_bc = local_bc + param_1[0x15];
  local_b8 = local_b8 + param_1[0x16];
  local_b4 = local_b4 + param_1[0x17];
  local_b0 = local_b0 + param_1[0x18];
  local_ac = local_ac + param_1[0x19];
  local_a8 = local_a8 + param_1[0x1a];
  local_9c = local_9c + param_1[0x1d];
  local_e4 = iVar4;
  local_e0 = iVar5;
  fe_sq(&local_98,&local_c0);
  fe_mul(&local_98,&local_98,&local_c0);
  fe_sq(param_1,&local_98);
  fe_mul(param_1,param_1,&local_c0);
  fe_mul(param_1,param_1,&local_e8);
  fe_pow22523(param_1,param_1);
  fe_mul(param_1,param_1,&local_98);
  fe_mul(param_1,param_1,&local_e8);
  fe_sq(&local_70,param_1);
  fe_mul(&local_70,&local_70,&local_c0);
  iVar1 = local_d8;
  iVar3 = local_dc;
  local_98 = local_70 - local_e8;
  local_94 = local_6c - iVar4;
  local_90 = local_68 - iVar5;
  local_8c = local_64 - local_dc;
  local_88 = local_60 - local_d8;
  local_84 = local_5c - local_d4;
  local_80 = local_58 - local_d0;
  local_7c = local_54 - local_cc;
  local_78 = local_50 - local_c8;
  local_74 = local_4c - local_c4;
  fe_tobytes(&local_c0,&local_98);
  iVar2 = FUN_14004ffa0(&local_c0,&DAT_145daa8a8,0x20);
  if (iVar2 != 0) {
    local_98 = local_e8 + local_70;
    local_94 = local_6c + iVar4;
    local_90 = local_68 + iVar5;
    local_8c = local_64 + iVar3;
    local_88 = local_60 + iVar1;
    local_84 = local_d4 + local_5c;
    local_80 = local_d0 + local_58;
    local_7c = local_cc + local_54;
    local_78 = local_c8 + local_50;
    local_74 = local_c4 + local_4c;
    fe_tobytes(&local_c0,&local_98);
    iVar3 = FUN_14004ffa0(&local_c0,&DAT_145daa8a8,0x20);
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    fe_mul(param_1,param_1,&DAT_145daa8f0);
  }
  fe_tobytes(&local_c0,param_1);
  if (((byte)local_c0 & 1) != *(byte *)(param_2 + 0x1f) >> 7) {
    *param_1 = -*param_1;
    param_1[1] = -param_1[1];
    param_1[2] = -param_1[2];
    param_1[3] = -param_1[3];
    param_1[4] = -param_1[4];
    param_1[5] = -param_1[5];
    param_1[6] = -param_1[6];
    param_1[7] = -param_1[7];
    param_1[8] = -param_1[8];
    param_1[9] = -param_1[9];
  }
  fe_mul(param_1 + 0x1e,param_1,param_1 + 10);
  return 0;
}



// FUNCTION 143d925a0 ge_madd body=773 status=ok
// SIG undefined ge_madd(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ge_madd(int *param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
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
  
  piVar1 = param_1 + 10;
  piVar2 = param_1 + 0x14;
  *param_1 = *param_2 + param_2[10];
  param_1[1] = param_2[0xb] + param_2[1];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[3] + param_2[0xd];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[0xf] + param_2[5];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[7] + param_2[0x11];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[0x13] + param_2[9];
  *piVar1 = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  fe_mul(piVar2,param_1);
  fe_mul(piVar1,piVar1,param_3 + 0x28);
  fe_mul(param_1 + 0x1e,param_3 + 0x50,param_2 + 0x1e);
  iVar3 = param_2[0x14];
  iVar4 = param_2[0x15];
  iVar5 = param_2[0x16];
  iVar6 = param_2[0x17];
  iVar7 = param_2[0x18];
  iVar8 = param_2[0x19];
  iVar9 = param_2[0x1a];
  iVar10 = param_2[0x1b];
  iVar11 = param_2[0x1c];
  iVar12 = param_2[0x1d];
  *param_1 = *piVar2 - *piVar1;
  param_1[1] = param_1[0x15] - param_1[0xb];
  param_1[2] = param_1[0x16] - param_1[0xc];
  param_1[3] = param_1[0x17] - param_1[0xd];
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  param_1[8] = param_1[0x1c] - param_1[0x12];
  param_1[9] = param_1[0x1d] - param_1[0x13];
  *piVar1 = *piVar1 + *piVar2;
  param_1[0xb] = param_1[0xb] + param_1[0x15];
  param_1[0xc] = param_1[0xc] + param_1[0x16];
  param_1[0xd] = param_1[0xd] + param_1[0x17];
  param_1[0xe] = param_1[0xe] + param_1[0x18];
  param_1[0xf] = param_1[0xf] + param_1[0x19];
  param_1[0x10] = param_1[0x10] + param_1[0x1a];
  param_1[0x11] = param_1[0x11] + param_1[0x1b];
  param_1[0x12] = param_1[0x12] + param_1[0x1c];
  param_1[0x13] = param_1[0x13] + param_1[0x1d];
  *piVar2 = param_1[0x1e] + iVar3 * 2;
  param_1[0x15] = param_1[0x1f] + iVar4 * 2;
  param_1[0x16] = param_1[0x20] + iVar5 * 2;
  param_1[0x17] = param_1[0x21] + iVar6 * 2;
  param_1[0x18] = param_1[0x22] + iVar7 * 2;
  param_1[0x19] = param_1[0x23] + iVar8 * 2;
  param_1[0x1a] = param_1[0x24] + iVar9 * 2;
  param_1[0x1b] = param_1[0x25] + iVar10 * 2;
  param_1[0x1c] = param_1[0x26] + iVar11 * 2;
  param_1[0x1d] = param_1[0x27] + iVar12 * 2;
  param_1[0x1e] = iVar3 * 2 - param_1[0x1e];
  param_1[0x1f] = iVar4 * 2 - param_1[0x1f];
  param_1[0x20] = iVar5 * 2 - param_1[0x20];
  param_1[0x21] = iVar6 * 2 - param_1[0x21];
  param_1[0x22] = iVar7 * 2 - param_1[0x22];
  param_1[0x23] = iVar8 * 2 - param_1[0x23];
  param_1[0x24] = iVar9 * 2 - param_1[0x24];
  param_1[0x25] = iVar10 * 2 - param_1[0x25];
  param_1[0x26] = iVar11 * 2 - param_1[0x26];
  param_1[0x27] = iVar12 * 2 - param_1[0x27];
  return;
}



// FUNCTION 143d928b0 ge_msub body=736 status=ok
// SIG undefined ge_msub(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ge_msub(int *param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
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
  
  piVar1 = param_1 + 0x14;
  *param_1 = *param_2 + param_2[10];
  param_1[1] = param_2[0xb] + param_2[1];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[3] + param_2[0xd];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[0xf] + param_2[5];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[7] + param_2[0x11];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[0x13] + param_2[9];
  param_1[10] = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  fe_mul(piVar1,param_1,param_3 + 0x28);
  fe_mul(param_1 + 10,param_1 + 10,param_3);
  piVar2 = param_1 + 0x1e;
  fe_mul(piVar2,param_3 + 0x50,param_2 + 0x1e);
  iVar3 = param_2[0x14];
  iVar4 = param_2[0x15];
  iVar5 = param_2[0x16];
  iVar6 = param_2[0x17];
  iVar7 = param_2[0x18];
  iVar8 = param_2[0x19];
  iVar9 = param_2[0x1a];
  iVar10 = param_2[0x1b];
  iVar11 = param_2[0x1c];
  iVar12 = param_2[0x1d];
  *param_1 = *piVar1 - param_1[10];
  param_1[1] = param_1[0x15] - param_1[0xb];
  param_1[2] = param_1[0x16] - param_1[0xc];
  param_1[3] = param_1[0x17] - param_1[0xd];
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  param_1[8] = param_1[0x1c] - param_1[0x12];
  param_1[9] = param_1[0x1d] - param_1[0x13];
  param_1[10] = *piVar1 + param_1[10];
  param_1[0xb] = param_1[0xb] + param_1[0x15];
  param_1[0xc] = param_1[0xc] + param_1[0x16];
  param_1[0xd] = param_1[0xd] + param_1[0x17];
  param_1[0xe] = param_1[0xe] + param_1[0x18];
  param_1[0xf] = param_1[0xf] + param_1[0x19];
  param_1[0x10] = param_1[0x10] + param_1[0x1a];
  param_1[0x11] = param_1[0x11] + param_1[0x1b];
  param_1[0x12] = param_1[0x12] + param_1[0x1c];
  param_1[0x13] = param_1[0x13] + param_1[0x1d];
  *piVar1 = iVar3 * 2 - *piVar2;
  param_1[0x15] = iVar4 * 2 - param_1[0x1f];
  param_1[0x16] = iVar5 * 2 - param_1[0x20];
  param_1[0x17] = iVar6 * 2 - param_1[0x21];
  param_1[0x18] = iVar7 * 2 - param_1[0x22];
  param_1[0x19] = iVar8 * 2 - param_1[0x23];
  param_1[0x1a] = iVar9 * 2 - param_1[0x24];
  param_1[0x1b] = iVar10 * 2 - param_1[0x25];
  param_1[0x1c] = iVar11 * 2 - param_1[0x26];
  param_1[0x1d] = iVar12 * 2 - param_1[0x27];
  *piVar2 = *piVar2 + iVar3 * 2;
  param_1[0x1f] = param_1[0x1f] + iVar4 * 2;
  param_1[0x20] = param_1[0x20] + iVar5 * 2;
  param_1[0x21] = param_1[0x21] + iVar6 * 2;
  param_1[0x22] = param_1[0x22] + iVar7 * 2;
  param_1[0x23] = param_1[0x23] + iVar8 * 2;
  param_1[0x24] = param_1[0x24] + iVar9 * 2;
  param_1[0x25] = param_1[0x25] + iVar10 * 2;
  param_1[0x26] = param_1[0x26] + iVar11 * 2;
  param_1[0x27] = param_1[0x27] + iVar12 * 2;
  return;
}



// FUNCTION 143d92b90 ge_p2_dbl body=644 status=ok
// SIG undefined ge_p2_dbl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ge_p2_dbl(int *param_1,int *param_2)

{
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  fe_sq();
  fe_sq(param_1 + 0x14,param_2 + 10);
  fe_sq2(param_1 + 0x1e,param_2 + 0x14);
  param_1[10] = *param_2 + param_2[10];
  param_1[0xb] = param_2[0xb] + param_2[1];
  param_1[0xc] = param_2[0xc] + param_2[2];
  param_1[0xd] = param_2[0xd] + param_2[3];
  param_1[0xe] = param_2[0xe] + param_2[4];
  param_1[0xf] = param_2[0xf] + param_2[5];
  param_1[0x10] = param_2[0x10] + param_2[6];
  param_1[0x11] = param_2[0x11] + param_2[7];
  param_1[0x12] = param_2[0x12] + param_2[8];
  param_1[0x13] = param_2[0x13] + param_2[9];
  fe_sq(&local_58,param_1 + 10);
  param_1[10] = *param_1 + param_1[0x14];
  param_1[0xb] = param_1[0x15] + param_1[1];
  param_1[0xc] = param_1[0x16] + param_1[2];
  param_1[0xd] = param_1[3] + param_1[0x17];
  param_1[0xe] = param_1[0x18] + param_1[4];
  param_1[0xf] = param_1[0x19] + param_1[5];
  param_1[0x10] = param_1[0x1a] + param_1[6];
  param_1[0x11] = param_1[7] + param_1[0x1b];
  param_1[0x12] = param_1[0x1c] + param_1[8];
  param_1[0x13] = param_1[0x1d] + param_1[9];
  param_1[0x14] = param_1[0x14] - *param_1;
  param_1[0x15] = param_1[0x15] - param_1[1];
  param_1[0x16] = param_1[0x16] - param_1[2];
  param_1[0x17] = param_1[0x17] - param_1[3];
  param_1[0x18] = param_1[0x18] - param_1[4];
  param_1[0x19] = param_1[0x19] - param_1[5];
  param_1[0x1a] = param_1[0x1a] - param_1[6];
  param_1[0x1b] = param_1[0x1b] - param_1[7];
  param_1[0x1c] = param_1[0x1c] - param_1[8];
  param_1[0x1d] = param_1[0x1d] - param_1[9];
  *param_1 = local_58 - param_1[10];
  param_1[1] = local_54 - param_1[0xb];
  param_1[2] = local_50 - param_1[0xc];
  param_1[3] = local_4c - param_1[0xd];
  param_1[4] = local_48 - param_1[0xe];
  param_1[5] = local_44 - param_1[0xf];
  param_1[6] = local_40 - param_1[0x10];
  param_1[7] = local_3c - param_1[0x11];
  param_1[8] = local_38 - param_1[0x12];
  param_1[9] = local_34 - param_1[0x13];
  param_1[0x1e] = param_1[0x1e] - param_1[0x14];
  param_1[0x1f] = param_1[0x1f] - param_1[0x15];
  param_1[0x20] = param_1[0x20] - param_1[0x16];
  param_1[0x21] = param_1[0x21] - param_1[0x17];
  param_1[0x22] = param_1[0x22] - param_1[0x18];
  param_1[0x23] = param_1[0x23] - param_1[0x19];
  param_1[0x24] = param_1[0x24] - param_1[0x1a];
  param_1[0x25] = param_1[0x25] - param_1[0x1b];
  param_1[0x26] = param_1[0x26] - param_1[0x1c];
  param_1[0x27] = param_1[0x27] - param_1[0x1d];
  return;
}



// FUNCTION 143d92e20 ge_p3_to_cached body=251 status=ok
// SIG undefined ge_p3_to_cached(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ge_p3_to_cached(int *param_1,int *param_2)

{
  *param_1 = param_2[10] + *param_2;
  param_1[1] = param_2[0xb] + param_2[1];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[3] + param_2[0xd];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[0xf] + param_2[5];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[7] + param_2[0x11];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[0x13] + param_2[9];
  param_1[10] = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  _guard_xfg_dispatch_icall_nop(param_1 + 0x14,param_2 + 0x14,0x28);
  fe_mul(param_1 + 0x1e,param_2 + 0x1e,&DAT_145daa918);
  return;
}



// FUNCTION 143d92f20 ge_scalarmult_base body=2363 status=ok
// SIG undefined ge_scalarmult_base(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void ge_scalarmult_base(undefined8 *param_1,byte *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  char cVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_238 [32];
  undefined1 local_218 [40];
  undefined1 local_1f0 [40];
  undefined1 local_1c8 [40];
  undefined1 local_1a0 [40];
  undefined1 local_178 [40];
  undefined1 local_150 [40];
  undefined1 local_128 [48];
  undefined1 local_f8 [128];
  byte local_78 [24];
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  byte local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x143d92f4a;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_78[1] = *param_2 >> 4;
  local_78[0] = *param_2 & 0xf;
  local_78[3] = param_2[1] >> 4;
  local_78[2] = param_2[1] & 0xf;
  local_78[5] = param_2[2] >> 4;
  local_78[4] = param_2[2] & 0xf;
  local_78[7] = param_2[3] >> 4;
  local_78[6] = param_2[3] & 0xf;
  local_78[9] = param_2[4] >> 4;
  local_78[8] = param_2[4] & 0xf;
  local_78[0xb] = param_2[5] >> 4;
  local_78[10] = param_2[5] & 0xf;
  local_78[0xd] = param_2[6] >> 4;
  local_78[0xc] = param_2[6] & 0xf;
  local_78[0xf] = param_2[7] >> 4;
  local_78[0xe] = param_2[7] & 0xf;
  local_78[0x11] = param_2[8] >> 4;
  local_78[0x10] = param_2[8] & 0xf;
  local_78[0x13] = param_2[9] >> 4;
  local_78[0x12] = param_2[9] & 0xf;
  local_78[0x15] = param_2[10] >> 4;
  local_78[0x14] = param_2[10] & 0xf;
  local_78[0x17] = param_2[0xb] >> 4;
  local_78[0x16] = param_2[0xb] & 0xf;
  local_5f = param_2[0xc] >> 4;
  local_60 = param_2[0xc] & 0xf;
  local_5d = param_2[0xd] >> 4;
  local_5e = param_2[0xd] & 0xf;
  local_5b = param_2[0xe] >> 4;
  local_5c = param_2[0xe] & 0xf;
  local_59 = param_2[0xf] >> 4;
  local_5a = param_2[0xf] & 0xf;
  local_57 = param_2[0x10] >> 4;
  local_58 = param_2[0x10] & 0xf;
  local_55 = param_2[0x11] >> 4;
  local_56 = param_2[0x11] & 0xf;
  local_53 = param_2[0x12] >> 4;
  local_54 = param_2[0x12] & 0xf;
  local_51 = param_2[0x13] >> 4;
  local_52 = param_2[0x13] & 0xf;
  local_4f = param_2[0x14] >> 4;
  local_50 = param_2[0x14] & 0xf;
  local_4d = param_2[0x15] >> 4;
  local_4e = param_2[0x15] & 0xf;
  local_4b = param_2[0x16] >> 4;
  local_4c = param_2[0x16] & 0xf;
  local_49 = param_2[0x17] >> 4;
  local_4a = param_2[0x17] & 0xf;
  local_47 = param_2[0x18] >> 4;
  local_48 = param_2[0x18] & 0xf;
  local_45 = param_2[0x19] >> 4;
  local_46 = param_2[0x19] & 0xf;
  local_44 = param_2[0x1a] & 0xf;
  local_43 = param_2[0x1a] >> 4;
  local_41 = param_2[0x1b] >> 4;
  local_42 = param_2[0x1b] & 0xf;
  local_3f = param_2[0x1c] >> 4;
  local_40 = param_2[0x1c] & 0xf;
  local_3d = param_2[0x1d] >> 4;
  local_3e = param_2[0x1d] & 0xf;
  local_3b = param_2[0x1e] >> 4;
  cVar2 = '\0';
  local_3c = param_2[0x1e] & 0xf;
  uVar8 = 0;
  local_3a = param_2[0x1f] & 0xf;
  local_39 = param_2[0x1f] >> 4;
  uVar7 = uVar8;
  do {
    cVar1 = (char)(cVar2 + local_78[uVar7] + '\b') >> 4;
    local_78[uVar7] = cVar2 + local_78[uVar7] + cVar1 * -0x10;
    cVar1 = local_78[uVar7 + 1] + cVar1;
    cVar2 = (char)(cVar1 + '\b') >> 4;
    local_78[uVar7 + 1] = cVar1 + cVar2 * -0x10;
    cVar2 = local_78[uVar7 + 2] + cVar2;
    cVar1 = (char)(cVar2 + '\b') >> 4;
    cVar5 = cVar1 + local_78[uVar7 + 3];
    local_78[uVar7 + 2] = cVar2 + cVar1 * -0x10;
    cVar2 = (char)(cVar5 + '\b') >> 4;
    cVar1 = local_78[uVar7 + 4] + cVar2;
    local_78[uVar7 + 3] = cVar5 + cVar2 * -0x10;
    cVar2 = (char)(cVar1 + '\b') >> 4;
    cVar5 = cVar2 + local_78[uVar7 + 5];
    local_78[uVar7 + 4] = cVar1 + cVar2 * -0x10;
    cVar2 = (char)(cVar5 + '\b') >> 4;
    cVar1 = local_78[uVar7 + 6] + cVar2;
    local_78[uVar7 + 5] = cVar5 + cVar2 * -0x10;
    cVar2 = (char)(cVar1 + '\b') >> 4;
    cVar5 = cVar2 + local_78[uVar7 + 7];
    local_78[uVar7 + 6] = cVar1 + cVar2 * -0x10;
    cVar2 = (char)(cVar5 + '\b') >> 4;
    cVar1 = local_78[uVar7 + 8] + cVar2;
    local_78[uVar7 + 7] = cVar5 + cVar2 * -0x10;
    cVar2 = (char)(cVar1 + '\b') >> 4;
    cVar5 = cVar2 + local_78[uVar7 + 9];
    local_78[uVar7 + 8] = cVar1 + cVar2 * -0x10;
    cVar2 = (char)(cVar5 + '\b') >> 4;
    cVar1 = local_78[uVar7 + 10] + cVar2;
    local_78[uVar7 + 9] = cVar5 + cVar2 * -0x10;
    cVar2 = (char)(cVar1 + '\b') >> 4;
    cVar5 = cVar2 + local_78[uVar7 + 0xb];
    local_78[uVar7 + 10] = cVar1 + cVar2 * -0x10;
    cVar2 = (char)(cVar5 + '\b') >> 4;
    cVar1 = local_78[uVar7 + 0xc] + cVar2;
    local_78[uVar7 + 0xb] = cVar5 + cVar2 * -0x10;
    cVar2 = (char)(cVar1 + '\b') >> 4;
    cVar5 = cVar2 + local_78[uVar7 + 0xd];
    local_78[uVar7 + 0xc] = cVar1 + cVar2 * -0x10;
    cVar2 = (char)(cVar5 + '\b') >> 4;
    cVar1 = local_78[uVar7 + 0xe] + cVar2;
    local_78[uVar7 + 0xd] = cVar5 + cVar2 * -0x10;
    cVar2 = (char)(cVar1 + '\b') >> 4;
    cVar5 = cVar2 + local_78[uVar7 + 0xf];
    local_78[uVar7 + 0xe] = cVar1 + cVar2 * -0x10;
    cVar2 = (char)(cVar5 + '\b') >> 4;
    cVar1 = local_78[uVar7 + 0x10] + cVar2;
    local_78[uVar7 + 0xf] = cVar5 + cVar2 * -0x10;
    cVar2 = (char)(cVar1 + '\b') >> 4;
    cVar6 = cVar2 + local_78[uVar7 + 0x11];
    local_78[uVar7 + 0x10] = cVar1 + cVar2 * -0x10;
    cVar2 = (char)(cVar6 + '\b') >> 4;
    cVar5 = local_78[uVar7 + 0x12] + cVar2;
    local_78[uVar7 + 0x11] = cVar6 + cVar2 * -0x10;
    cVar2 = (char)(cVar5 + '\b') >> 4;
    local_78[uVar7 + 0x13] = local_78[uVar7 + 0x13] + cVar2;
    cVar1 = (char)(local_78[uVar7 + 0x13] + 8) >> 4;
    local_78[uVar7 + 0x14] = local_78[uVar7 + 0x14] + cVar1;
    local_78[uVar7 + 0x12] = cVar5 + cVar2 * -0x10;
    local_78[uVar7 + 0x13] = local_78[uVar7 + 0x13] + cVar1 * -0x10;
    cVar2 = (char)(local_78[uVar7 + 0x14] + 8) >> 4;
    local_78[uVar7 + 0x14] = local_78[uVar7 + 0x14] + cVar2 * -0x10;
    uVar7 = uVar7 + 0x15;
  } while ((longlong)uVar7 < 0x3f);
  local_39 = local_39 + cVar2;
  pbVar4 = local_78 + 1;
  uVar3 = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  do {
    table_select(local_f8,uVar3 >> 1,*pbVar4);
    ge_madd(local_218,param_1,local_f8);
    fe_mul(param_1,local_218,local_1a0);
    fe_mul(param_1 + 5,local_1f0,local_1c8);
    fe_mul(param_1 + 10,local_1c8,local_1a0);
    fe_mul(param_1 + 0xf,local_218,local_1f0);
    uVar3 = uVar3 + 2;
    pbVar4 = pbVar4 + 2;
  } while ((int)uVar3 < 0x40);
  _guard_xfg_dispatch_icall_nop(local_178,param_1,0x28);
  _guard_xfg_dispatch_icall_nop(local_150,param_1 + 5,0x28);
  _guard_xfg_dispatch_icall_nop(local_128,param_1 + 10,0x28);
  ge_p2_dbl(local_218,local_178);
  fe_mul(local_178,local_218,local_1a0);
  fe_mul(local_150,local_1f0,local_1c8);
  fe_mul(local_128,local_1c8,local_1a0);
  ge_p2_dbl(local_218,local_178);
  fe_mul(local_178,local_218,local_1a0);
  fe_mul(local_150,local_1f0,local_1c8);
  fe_mul(local_128,local_1c8,local_1a0);
  ge_p2_dbl(local_218,local_178);
  fe_mul(local_178,local_218,local_1a0);
  fe_mul(local_150,local_1f0,local_1c8);
  fe_mul(local_128,local_1c8,local_1a0);
  ge_p2_dbl(local_218,local_178);
  fe_mul(param_1,local_218,local_1a0);
  fe_mul(param_1 + 5,local_1f0,local_1c8);
  fe_mul(param_1 + 10,local_1c8,local_1a0);
  fe_mul(param_1 + 0xf,local_218,local_1f0);
  pbVar4 = local_78;
  do {
    table_select(local_f8,uVar8 >> 1,*pbVar4);
    ge_madd(local_218,param_1,local_f8);
    fe_mul(param_1,local_218,local_1a0);
    fe_mul(param_1 + 5,local_1f0,local_1c8);
    fe_mul(param_1 + 10,local_1c8,local_1a0);
    fe_mul(param_1 + 0xf,local_218,local_1f0);
    uVar3 = (int)uVar8 + 2;
    uVar8 = (ulonglong)uVar3;
    pbVar4 = pbVar4 + 2;
  } while ((int)uVar3 < 0x40);
  FUN_14004ff40(local_78,0x40);
  return;
}



// FUNCTION 143d93860 ge_sub body=759 status=ok
// SIG undefined ge_sub(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ge_sub(int *param_1,int *param_2,longlong param_3)

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
  
  *param_1 = *param_2 + param_2[10];
  param_1[1] = param_2[0xb] + param_2[1];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[3] + param_2[0xd];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[0xf] + param_2[5];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[7] + param_2[0x11];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[0x13] + param_2[9];
  param_1[10] = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  fe_mul(param_1 + 0x14,param_1,param_3 + 0x28);
  fe_mul(param_1 + 10,param_1 + 10,param_3);
  fe_mul(param_1 + 0x1e,param_3 + 0x78,param_2 + 0x1e);
  fe_mul(param_1,param_2 + 0x14,param_3 + 0x50);
  iVar1 = *param_1;
  *param_1 = param_1[0x14] - param_1[10];
  iVar2 = param_1[1];
  param_1[1] = param_1[0x15] - param_1[0xb];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar5 = param_1[4];
  iVar6 = param_1[5];
  iVar7 = param_1[6];
  iVar8 = param_1[7];
  iVar9 = param_1[8];
  param_1[2] = param_1[0x16] - param_1[0xc];
  iVar10 = param_1[9];
  param_1[3] = param_1[0x17] - param_1[0xd];
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  param_1[8] = param_1[0x1c] - param_1[0x12];
  param_1[9] = param_1[0x1d] - param_1[0x13];
  param_1[10] = param_1[10] + param_1[0x14];
  param_1[0xb] = param_1[0xb] + param_1[0x15];
  param_1[0xc] = param_1[0xc] + param_1[0x16];
  param_1[0xd] = param_1[0xd] + param_1[0x17];
  param_1[0xe] = param_1[0xe] + param_1[0x18];
  param_1[0xf] = param_1[0xf] + param_1[0x19];
  param_1[0x10] = param_1[0x10] + param_1[0x1a];
  param_1[0x11] = param_1[0x11] + param_1[0x1b];
  param_1[0x12] = param_1[0x12] + param_1[0x1c];
  param_1[0x13] = param_1[0x13] + param_1[0x1d];
  param_1[0x14] = iVar1 * 2 - param_1[0x1e];
  param_1[0x15] = iVar2 * 2 - param_1[0x1f];
  param_1[0x16] = iVar3 * 2 - param_1[0x20];
  param_1[0x17] = iVar4 * 2 - param_1[0x21];
  param_1[0x18] = iVar5 * 2 - param_1[0x22];
  param_1[0x19] = iVar6 * 2 - param_1[0x23];
  param_1[0x1a] = iVar7 * 2 - param_1[0x24];
  param_1[0x1b] = iVar8 * 2 - param_1[0x25];
  param_1[0x1c] = iVar9 * 2 - param_1[0x26];
  param_1[0x1d] = iVar10 * 2 - param_1[0x27];
  param_1[0x1e] = param_1[0x1e] + iVar1 * 2;
  param_1[0x1f] = param_1[0x1f] + iVar2 * 2;
  param_1[0x20] = param_1[0x20] + iVar3 * 2;
  param_1[0x21] = param_1[0x21] + iVar4 * 2;
  param_1[0x22] = param_1[0x22] + iVar5 * 2;
  param_1[0x23] = param_1[0x23] + iVar6 * 2;
  param_1[0x24] = param_1[0x24] + iVar7 * 2;
  param_1[0x25] = param_1[0x25] + iVar8 * 2;
  param_1[0x26] = param_1[0x26] + iVar9 * 2;
  param_1[0x27] = param_1[0x27] + iVar10 * 2;
  return;
}



// FUNCTION 143d93b60 sc_muladd body=7388 status=ok
// SIG undefined sc_muladd(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void sc_muladd(undefined1 *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  longlong lVar54;
  ulonglong uVar55;
  longlong lVar56;
  longlong lVar57;
  ulonglong uVar58;
  longlong lVar59;
  ulonglong uVar60;
  longlong lVar61;
  ulonglong uVar62;
  longlong lVar63;
  ulonglong uVar64;
  longlong lVar65;
  longlong lVar66;
  
  uVar4 = (ulonglong)((param_2[2] & 0x1f) << 0x10 | (uint)*param_2) | (ulonglong)param_2[1] << 8;
  uVar46 = (ulonglong)((uint6)*(uint3 *)(param_2 + 3) & 0x3ffff) << 3 | (ulonglong)(param_2[2] >> 5)
  ;
  uVar47 = (ulonglong)((uint5)*(ushort *)(param_2 + 6) & 0x7fff) << 6 | (ulonglong)(param_2[5] >> 2)
  ;
  uVar5 = (ulonglong)((uint6)*(uint3 *)(param_2 + 8) & 0xfffff) * 2 | (ulonglong)(param_2[7] >> 7);
  uVar48 = (ulonglong)((uint5)*(ushort *)(param_2 + 0xc) & 0x1ff) << 0xc |
           (ulonglong)((uint)param_2[0xb] << 4 | (uint)(param_2[10] >> 4));
  uVar6 = (ulonglong)((uint5)*(ushort *)(param_2 + 0xe) & 0x3fff) << 7 |
          (ulonglong)(param_2[0xd] >> 1);
  uVar7 = (ulonglong)((uint6)*(uint3 *)(param_2 + 0x10) & 0x7ffff) << 2 |
          (ulonglong)(param_2[0xf] >> 6);
  uVar8 = (ulonglong)*(ushort *)(param_2 + 0x13) << 5 | (ulonglong)(param_2[0x12] >> 3);
  uVar9 = (ulonglong)((param_2[0x17] & 0x1f) << 0x10 | (uint)param_2[0x15]) |
          (ulonglong)param_2[0x16] << 8;
  uVar10 = (ulonglong)((uint6)*(uint3 *)(param_2 + 0x18) & 0x3ffff) << 3 |
           (ulonglong)(param_2[0x17] >> 5);
  uVar11 = (ulonglong)((uint)param_2[0x1b] << 6 | (uint)(param_2[0x1a] >> 2)) |
           (ulonglong)(param_2[0x1c] & 0x7f) << 0xe;
  uVar53 = (ulonglong)*(uint3 *)(param_2 + 0x1d) * 2 | (ulonglong)(param_2[0x1c] >> 7);
  uVar38 = (ulonglong)((param_3[2] & 0x1f) << 0x10 | (uint)*param_3) | (ulonglong)param_3[1] << 8;
  uVar55 = (ulonglong)((uint6)*(uint3 *)(param_3 + 3) & 0x3ffff) << 3 | (ulonglong)(param_3[2] >> 5)
  ;
  uVar14 = (ulonglong)((uint5)*(ushort *)(param_3 + 6) & 0x7fff) << 6 | (ulonglong)(param_3[5] >> 2)
  ;
  uVar35 = (ulonglong)((uint6)*(uint3 *)(param_3 + 8) & 0xfffff) * 2 | (ulonglong)(param_3[7] >> 7);
  uVar49 = (ulonglong)((uint6)*(uint3 *)(param_3 + 0xb) & 0x1ffff) << 4 |
           (ulonglong)(param_3[10] >> 4);
  uVar30 = (ulonglong)((uint5)*(ushort *)(param_3 + 0xe) & 0x3fff) << 7 |
           (ulonglong)(param_3[0xd] >> 1);
  uVar12 = (ulonglong)((uint6)*(uint3 *)(param_3 + 0x10) & 0x7ffff) << 2 |
           (ulonglong)(param_3[0xf] >> 6);
  uVar62 = (ulonglong)*(ushort *)(param_3 + 0x13) << 5 | (ulonglong)(param_3[0x12] >> 3);
  uVar60 = (ulonglong)((param_3[0x17] & 0x1f) << 0x10 | (uint)param_3[0x15]) |
           (ulonglong)param_3[0x16] << 8;
  uVar64 = (ulonglong)((uint6)*(uint3 *)(param_3 + 0x18) & 0x3ffff) << 3 |
           (ulonglong)(param_3[0x17] >> 5);
  uVar58 = (ulonglong)((uint5)*(ushort *)(param_3 + 0x1b) & 0x7fff) << 6 |
           (ulonglong)(param_3[0x1a] >> 2);
  uVar28 = (ulonglong)*(uint3 *)(param_3 + 0x1d) * 2 | (ulonglong)(param_3[0x1c] >> 7);
  lVar40 = (((ulonglong)param_4[2] & 0x1f) << 0x10 | (ulonglong)*param_4 |
           (ulonglong)param_4[1] << 8) + uVar38 * uVar4;
  lVar33 = ((ulonglong)((uint5)*(ushort *)(param_4 + 6) & 0x7fff) << 6 |
           (ulonglong)(param_4[5] >> 2)) + uVar38 * uVar47 + uVar55 * uVar46 + uVar14 * uVar4;
  lVar34 = ((ulonglong)((uint6)*(uint3 *)(param_4 + 0xb) & 0x1ffff) << 4 |
           (ulonglong)(param_4[10] >> 4)) + uVar38 * uVar48 + uVar55 * uVar5 + uVar14 * uVar47 +
           uVar35 * uVar46 + uVar49 * uVar4;
  lVar41 = ((ulonglong)((uint6)*(uint3 *)(param_4 + 0x10) & 0x7ffff) << 2 |
           (ulonglong)(param_4[0xf] >> 6)) + uVar38 * uVar7 + uVar55 * uVar6 + uVar14 * uVar48 +
           uVar35 * uVar5 + uVar49 * uVar47 + uVar30 * uVar46 + uVar12 * uVar4;
  lVar57 = (((ulonglong)param_4[0x17] & 0x1f) << 0x10 | (ulonglong)param_4[0x15] |
           (ulonglong)param_4[0x16] << 8) + uVar38 * uVar9 + uVar55 * uVar8 + uVar14 * uVar7 +
           uVar35 * uVar6 + uVar49 * uVar48 + uVar30 * uVar5 + uVar12 * uVar47 + uVar62 * uVar46 +
           uVar60 * uVar4;
  lVar42 = ((ulonglong)((uint5)*(ushort *)(param_4 + 0x1b) & 0x7fff) << 6 |
           (ulonglong)(param_4[0x1a] >> 2)) + uVar38 * uVar11 + uVar55 * uVar10 + uVar14 * uVar9 +
           uVar35 * uVar8 + uVar49 * uVar7 + uVar30 * uVar6 + uVar12 * uVar48 + uVar62 * uVar5 +
           uVar60 * uVar47 + uVar64 * uVar46 + uVar58 * uVar4;
  lVar43 = uVar55 * uVar53 + uVar14 * uVar11 + uVar35 * uVar10 + uVar49 * uVar9 + uVar30 * uVar8 +
           uVar12 * uVar7 + uVar62 * uVar6 + uVar60 * uVar48 + uVar64 * uVar5 + uVar58 * uVar47 +
           uVar28 * uVar46;
  lVar15 = uVar35 * uVar53 + uVar49 * uVar11 + uVar30 * uVar10 + uVar12 * uVar9 + uVar62 * uVar8 +
           uVar60 * uVar7 + uVar64 * uVar6 + uVar58 * uVar48 + uVar28 * uVar5;
  lVar16 = uVar30 * uVar53 + uVar12 * uVar11 + uVar62 * uVar10 + uVar60 * uVar9 + uVar64 * uVar8 +
           uVar58 * uVar7 + uVar28 * uVar6;
  uVar17 = lVar40 + 0x100000U >> 0x15;
  lVar50 = uVar62 * uVar53 + uVar60 * uVar11 + uVar64 * uVar10 + uVar58 * uVar9 + uVar28 * uVar8;
  lVar54 = uVar64 * uVar53 + uVar58 * uVar11 + uVar28 * uVar10;
  lVar18 = uVar55 * uVar4 +
           uVar38 * uVar46 + uVar17 +
           ((ulonglong)((uint6)*(uint3 *)(param_4 + 3) & 0x3ffff) << 3 |
           (ulonglong)(param_4[2] >> 5));
  lVar19 = lVar33 + 0x100000 >> 0x15;
  lVar20 = uVar35 * uVar4 +
           uVar14 * uVar46 + lVar19 +
           ((ulonglong)((uint6)*(uint3 *)(param_4 + 8) & 0xfffff) * 2 | (ulonglong)(param_4[7] >> 7)
           ) + uVar38 * uVar5 + uVar55 * uVar47;
  lVar21 = lVar34 + 0x100000 >> 0x15;
  lVar22 = uVar30 * uVar4 +
           uVar49 * uVar46 + lVar21 +
           ((ulonglong)((uint5)*(ushort *)(param_4 + 0xe) & 0x3fff) << 7 |
           (ulonglong)(param_4[0xd] >> 1)) + uVar38 * uVar6 + uVar55 * uVar48 + uVar14 * uVar5 +
           uVar35 * uVar47;
  lVar23 = lVar41 + 0x100000 >> 0x15;
  lVar24 = uVar62 * uVar4 +
           uVar12 * uVar46 + lVar23 +
           ((ulonglong)*(ushort *)(param_4 + 0x13) << 5 | (ulonglong)(param_4[0x12] >> 3)) +
           uVar38 * uVar8 + uVar55 * uVar7 + uVar14 * uVar6 + uVar35 * uVar48 + uVar49 * uVar5 +
           uVar30 * uVar47;
  lVar25 = lVar57 + 0x100000 >> 0x15;
  lVar61 = lVar42 + 0x100000 >> 0x15;
  lVar26 = uVar64 * uVar4 +
           uVar60 * uVar46 + lVar25 +
           ((ulonglong)((uint6)*(uint3 *)(param_4 + 0x18) & 0x3ffff) << 3 |
           (ulonglong)(param_4[0x17] >> 5)) + uVar38 * uVar10 + uVar55 * uVar9 + uVar14 * uVar8 +
           uVar35 * uVar7 + uVar49 * uVar6 + uVar30 * uVar48 + uVar12 * uVar5 + uVar62 * uVar47;
  lVar39 = lVar43 + 0x100000 >> 0x15;
  lVar44 = uVar28 * uVar4 +
           uVar58 * uVar46 + lVar61 +
           ((ulonglong)*(uint3 *)(param_4 + 0x1d) * 2 | (ulonglong)(param_4[0x1c] >> 7)) +
           uVar38 * uVar53 + uVar55 * uVar11 + uVar14 * uVar10 + uVar35 * uVar9 + uVar49 * uVar8 +
           uVar30 * uVar7 + uVar12 * uVar6 + uVar62 * uVar48 + uVar60 * uVar5 + uVar64 * uVar47;
  lVar36 = uVar28 * uVar47 +
           uVar58 * uVar5 + lVar39 +
           uVar14 * uVar53 + uVar35 * uVar11 + uVar49 * uVar10 + uVar30 * uVar9 + uVar12 * uVar8 +
           uVar62 * uVar7 + uVar60 * uVar6 + uVar64 * uVar48;
  lVar56 = lVar15 + 0x100000 >> 0x15;
  lVar31 = uVar28 * uVar48 +
           uVar58 * uVar6 + lVar56 +
           uVar49 * uVar53 + uVar30 * uVar11 + uVar12 * uVar10 + uVar62 * uVar9 + uVar60 * uVar8 +
           uVar64 * uVar7;
  lVar45 = lVar16 + 0x100000 >> 0x15;
  lVar65 = uVar28 * uVar7 +
           uVar58 * uVar8 + lVar45 +
           uVar12 * uVar53 + uVar62 * uVar11 + uVar60 * uVar10 + uVar64 * uVar9;
  lVar13 = lVar50 + 0x100000 >> 0x15;
  lVar63 = uVar28 * uVar9 + uVar58 * uVar10 + lVar13 + uVar60 * uVar53 + uVar64 * uVar11;
  lVar27 = lVar54 + 0x100000 >> 0x15;
  lVar51 = uVar28 * uVar11 + lVar27 + uVar58 * uVar53;
  lVar59 = (longlong)(uVar28 * uVar53 + 0x100000) >> 0x15;
  lVar1 = lVar18 + 0x100000 >> 0x15;
  lVar2 = lVar20 + 0x100000 >> 0x15;
  lVar3 = lVar22 + 0x100000 >> 0x15;
  lVar66 = lVar65 + 0x100000 >> 0x15;
  lVar32 = lVar31 + 0x100000 >> 0x15;
  lVar50 = lVar50 + lVar66 + lVar13 * -0x200000;
  lVar13 = lVar63 + 0x100000 >> 0x15;
  lVar37 = lVar36 + 0x100000 >> 0x15;
  lVar54 = lVar54 + lVar13 + lVar27 * -0x200000;
  lVar63 = lVar63 + lVar13 * -0x200000;
  lVar27 = lVar51 + 0x100000 >> 0x15;
  lVar29 = lVar44 + 0x100000 >> 0x15;
  lVar52 = lVar24 + 0x100000 >> 0x15;
  lVar13 = uVar28 * uVar53 + lVar27 + lVar59 * -0x200000;
  lVar51 = lVar51 + lVar27 * -0x200000;
  lVar27 = lVar26 + 0x100000 >> 0x15;
  lVar16 = lVar16 + lVar59 * -0xa6f7d + lVar45 * -0x200000 + lVar32;
  lVar15 = lVar15 + lVar59 * -0xf39ad + lVar51 * -0xa6f7d + lVar13 * 0x215d1 + lVar56 * -0x200000 +
                    lVar37;
  lVar43 = lVar43 + lVar13 * 0x9fb67 +
                    lVar54 * 0x215d1 + lVar59 * 0x72d18 + lVar63 * -0xa6f7d + lVar51 * -0xf39ad +
                    lVar39 * -0x200000 + lVar29;
  lVar41 = lVar41 + lVar50 * 0xa2c13 + lVar23 * -0x200000 + lVar3;
  lVar23 = lVar41 + 0x100000 >> 0x15;
  lVar57 = lVar57 + lVar50 * 0x9fb67 +
                    lVar52 + lVar63 * 0x72d18 + lVar54 * 0xa2c13 + lVar25 * -0x200000;
  lVar45 = lVar57 + 0x100000 >> 0x15;
  lVar42 = lVar42 + lVar54 * 0x9fb67 +
                    lVar50 * 0x215d1 + lVar51 * 0x72d18 + lVar63 * -0xf39ad + lVar13 * 0xa2c13 +
                    lVar61 * -0x200000 + lVar27;
  lVar24 = lVar24 + lVar50 * 0x72d18 + lVar63 * 0xa2c13 + lVar52 * -0x200000 + lVar23;
  lVar25 = lVar43 + 0x100000 >> 0x15;
  lVar39 = lVar42 + 0x100000 >> 0x15;
  lVar26 = lVar26 + lVar63 * 0x9fb67 +
                    lVar51 * 0xa2c13 + lVar54 * 0x72d18 + lVar50 * -0xf39ad + lVar27 * -0x200000 +
                    lVar45;
  lVar44 = lVar44 + lVar51 * 0x9fb67 +
                    lVar63 * 0x215d1 +
                    lVar59 * 0xa2c13 + lVar50 * -0xa6f7d + lVar54 * -0xf39ad + lVar13 * 0x72d18 +
                    lVar29 * -0x200000 + lVar39;
  lVar36 = lVar36 + lVar59 * 0x9fb67 +
                    lVar51 * 0x215d1 + lVar13 * -0xf39ad + lVar54 * -0xa6f7d + lVar37 * -0x200000 +
                    lVar25;
  lVar54 = lVar15 + 0x100000 >> 0x15;
  lVar27 = lVar44 + 0x100000 >> 0x15;
  lVar51 = lVar24 + 0x100000 >> 0x15;
  lVar31 = lVar31 + lVar59 * 0x215d1 + lVar13 * -0xa6f7d + lVar32 * -0x200000 + lVar54;
  lVar50 = lVar36 + 0x100000 >> 0x15;
  lVar13 = lVar16 + 0x100000 >> 0x15;
  lVar65 = lVar65 + lVar13 + lVar66 * -0x200000;
  lVar32 = lVar26 + 0x100000 >> 0x15;
  lVar43 = lVar43 + lVar27 + lVar25 * -0x200000;
  lVar15 = lVar15 + lVar50 + lVar54 * -0x200000;
  lVar36 = lVar36 + lVar50 * -0x200000;
  lVar50 = lVar31 + 0x100000 >> 0x15;
  lVar31 = lVar31 + lVar50 * -0x200000;
  lVar16 = lVar16 + lVar50 + lVar13 * -0x200000;
  lVar42 = lVar42 + lVar39 * -0x200000 + lVar65 * -0xa6f7d + lVar32;
  lVar57 = lVar57 + lVar65 * -0xf39ad + lVar31 * -0xa6f7d + lVar16 * 0x215d1 + lVar45 * -0x200000 +
                    lVar51;
  lVar23 = lVar16 * 0x9fb67 + lVar41 +
           lVar31 * -0xf39ad + lVar36 * -0xa6f7d + lVar65 * 0x72d18 + lVar15 * 0x215d1 +
           lVar23 * -0x200000;
  lVar40 = lVar40 + lVar43 * 0xa2c13 + uVar17 * -0x200000;
  lVar33 = lVar33 + lVar43 * 0x9fb67 +
                    lVar1 + lVar36 * 0x72d18 + lVar15 * 0xa2c13 + lVar19 * -0x200000;
  lVar13 = lVar40 + 0x100000 >> 0x15;
  lVar34 = lVar34 + lVar15 * 0x9fb67 +
                    lVar2 + lVar31 * 0x72d18 + lVar36 * -0xf39ad + lVar16 * 0xa2c13 +
                            lVar43 * 0x215d1 + lVar21 * -0x200000;
  lVar29 = lVar33 + 0x100000 >> 0x15;
  lVar18 = lVar18 + lVar43 * 0x72d18 + lVar36 * 0xa2c13 + lVar1 * -0x200000 + lVar13;
  lVar1 = lVar34 + 0x100000 >> 0x15;
  lVar20 = lVar20 + lVar36 * 0x9fb67 +
                    lVar31 * 0xa2c13 + lVar15 * 0x72d18 + lVar43 * -0xf39ad + lVar2 * -0x200000 +
                    lVar29;
  lVar19 = lVar23 + 0x100000 >> 0x15;
  lVar22 = lVar22 + lVar31 * 0x9fb67 +
                    lVar1 + lVar15 * -0xf39ad + lVar43 * -0xa6f7d + lVar16 * 0x72d18 +
                            lVar65 * 0xa2c13 + lVar36 * 0x215d1 + lVar3 * -0x200000;
  lVar21 = lVar18 + 0x100000 >> 0x15;
  lVar25 = lVar20 + 0x100000 >> 0x15;
  lVar24 = lVar24 + lVar65 * 0x9fb67 +
                    lVar31 * 0x215d1 + lVar16 * -0xf39ad + lVar15 * -0xa6f7d + lVar51 * -0x200000 +
                    lVar19;
  lVar50 = lVar57 + 0x100000 >> 0x15;
  lVar51 = lVar22 + 0x100000 >> 0x15;
  lVar26 = lVar26 + lVar65 * 0x215d1 + lVar16 * -0xa6f7d + lVar32 * -0x200000 + lVar50;
  lVar54 = lVar42 + 0x100000 >> 0x15;
  lVar44 = lVar44 + lVar54 + lVar27 * -0x200000;
  lVar3 = lVar24 + 0x100000 >> 0x15;
  lVar43 = lVar26 + 0x100000 >> 0x15;
  lVar2 = lVar44 + 0x100000 >> 0x15;
  lVar40 = lVar40 + lVar2 * 0xa2c13 + lVar13 * -0x200000;
  lVar13 = lVar40 >> 0x15;
  lVar18 = lVar18 + lVar2 * 0x72d18 + lVar21 * -0x200000 + lVar13;
  lVar16 = lVar18 >> 0x15;
  lVar33 = lVar33 + lVar2 * 0x9fb67 + lVar29 * -0x200000 + lVar21 + lVar16;
  lVar21 = lVar33 >> 0x15;
  lVar20 = lVar20 + lVar25 * -0x200000 + lVar2 * -0xf39ad + lVar21;
  lVar27 = lVar20 >> 0x15;
  lVar15 = lVar34 + lVar2 * 0x215d1 + lVar1 * -0x200000 + lVar25 + lVar27;
  lVar1 = lVar15 >> 0x15;
  lVar22 = lVar22 + lVar2 * -0xa6f7d + lVar51 * -0x200000 + lVar1;
  lVar25 = lVar22 >> 0x15;
  lVar19 = lVar23 + lVar51 + lVar19 * -0x200000 + lVar25;
  lVar34 = lVar19 >> 0x15;
  lVar24 = lVar24 + lVar34 + lVar3 * -0x200000;
  lVar51 = lVar24 >> 0x15;
  lVar50 = lVar57 + lVar3 + lVar50 * -0x200000 + lVar51;
  lVar3 = lVar50 >> 0x15;
  lVar26 = lVar26 + lVar3 + lVar43 * -0x200000;
  lVar57 = lVar26 >> 0x15;
  lVar54 = lVar42 + lVar43 + lVar54 * -0x200000 + lVar57;
  lVar42 = lVar54 >> 0x15;
  lVar44 = lVar44 + lVar42 + lVar2 * -0x200000;
  lVar43 = lVar44 >> 0x15;
  lVar40 = lVar40 + lVar43 * 0xa2c13 + lVar13 * -0x200000;
  lVar13 = lVar40 >> 0x15;
  lVar18 = lVar18 + lVar43 * 0x72d18 + lVar16 * -0x200000 + lVar13;
  lVar40 = lVar40 + lVar13 * -0x200000;
  lVar13 = lVar18 >> 0x15;
  lVar33 = lVar33 + lVar43 * 0x9fb67 + lVar21 * -0x200000 + lVar13;
  lVar18 = lVar18 + lVar13 * -0x200000;
  lVar13 = lVar33 >> 0x15;
  lVar20 = lVar20 + lVar27 * -0x200000 + lVar43 * -0xf39ad + lVar13;
  lVar33 = lVar33 + lVar13 * -0x200000;
  lVar13 = lVar20 >> 0x15;
  lVar15 = lVar15 + lVar43 * 0x215d1 + lVar1 * -0x200000 + lVar13;
  lVar20 = lVar20 + lVar13 * -0x200000;
  lVar13 = lVar15 >> 0x15;
  lVar22 = lVar22 + lVar43 * -0xa6f7d + lVar25 * -0x200000 + lVar13;
  lVar15 = lVar15 + lVar13 * -0x200000;
  lVar13 = lVar22 >> 0x15;
  lVar19 = lVar19 + lVar13 + lVar34 * -0x200000;
  lVar22 = lVar22 + lVar13 * -0x200000;
  lVar13 = lVar19 >> 0x15;
  lVar19 = lVar19 + lVar13 * -0x200000;
  lVar24 = lVar24 + lVar13 + lVar51 * -0x200000;
  lVar13 = lVar24 >> 0x15;
  lVar50 = lVar50 + lVar13 + lVar3 * -0x200000;
  lVar24 = lVar24 + lVar13 * -0x200000;
  lVar13 = lVar50 >> 0x15;
  lVar26 = lVar26 + lVar13 + lVar57 * -0x200000;
  lVar50 = lVar50 + lVar13 * -0x200000;
  lVar13 = lVar26 >> 0x15;
  lVar54 = lVar54 + lVar13 + lVar42 * -0x200000;
  lVar26 = lVar26 + lVar13 * -0x200000;
  lVar13 = lVar54 >> 0x15;
  lVar44 = lVar44 + lVar13 + lVar43 * -0x200000;
  lVar54 = lVar54 + lVar13 * -0x200000;
  param_1[1] = (char)((ulonglong)lVar40 >> 8);
  *param_1 = (char)lVar40;
  param_1[2] = (char)lVar18 << 5 | (byte)((ulonglong)lVar40 >> 0x10);
  param_1[3] = (char)(lVar18 >> 3);
  param_1[4] = (char)(lVar18 >> 0xb);
  param_1[6] = (char)(lVar33 >> 6);
  param_1[5] = (byte)(lVar18 >> 0x13) | (char)lVar33 << 2;
  param_1[7] = (char)lVar20 << 7 | (byte)(lVar33 >> 0xe);
  param_1[8] = (char)(lVar20 >> 1);
  param_1[9] = (char)(lVar20 >> 9);
  param_1[0xb] = (char)(lVar15 >> 4);
  param_1[10] = (byte)(lVar20 >> 0x11) | (char)lVar15 << 4;
  param_1[0x15] = (char)lVar50;
  param_1[0xc] = (char)(lVar15 >> 0xc);
  param_1[0xe] = (char)(lVar22 >> 7);
  param_1[0xd] = (byte)(lVar15 >> 0x14) | (char)lVar22 * '\x02';
  param_1[0xf] = (char)lVar19 << 6 | (byte)(lVar22 >> 0xf);
  param_1[0x10] = (char)(lVar19 >> 2);
  param_1[0x11] = (char)(lVar19 >> 10);
  param_1[0x13] = (char)(lVar24 >> 5);
  param_1[0x16] = (char)((ulonglong)lVar50 >> 8);
  param_1[0x17] = (char)lVar26 << 5 | (byte)((ulonglong)lVar50 >> 0x10);
  param_1[0x18] = (char)(lVar26 >> 3);
  param_1[0x19] = (char)(lVar26 >> 0xb);
  param_1[0x12] = (byte)(lVar19 >> 0x12) | (char)lVar24 << 3;
  param_1[0x14] = (char)(lVar24 >> 0xd);
  param_1[0x1b] = (char)(lVar54 >> 6);
  param_1[0x1a] = (byte)(lVar26 >> 0x13) | (char)lVar54 << 2;
  param_1[0x1c] = (char)lVar44 << 7 | (byte)(lVar54 >> 0xe);
  param_1[0x1d] = (char)(lVar44 >> 1);
  param_1[0x1f] = (char)(lVar44 >> 0x11);
  param_1[0x1e] = (char)(lVar44 >> 9);
  return;
}



// FUNCTION 143d95840 slide body=306 status=ok
// SIG undefined slide(void)

void slide(char *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  
  iVar6 = 0;
  iVar8 = 0;
  lVar9 = 0;
  do {
    bVar4 = (byte)iVar8;
    iVar8 = iVar8 + 1;
    param_1[lVar9] = *(byte *)((lVar9 >> 3) + param_2) >> (bVar4 & 7) & 1;
    lVar9 = lVar9 + 1;
    pcVar10 = param_1;
  } while (iVar8 < 0x100);
  do {
    if (*pcVar10 != '\0') {
      iVar8 = 1;
      do {
        iVar5 = iVar8 + iVar6;
        if (0xff < iVar5) break;
        lVar9 = (longlong)iVar5;
        cVar1 = param_1[lVar9];
        pcVar3 = param_1 + lVar9;
        if (cVar1 != '\0') {
          cVar2 = *pcVar10;
          bVar4 = (byte)iVar8;
          iVar7 = (int)cVar1 << (bVar4 & 0x1f);
          if (cVar2 + iVar7 < 0x10) {
            *pcVar10 = (cVar1 << (bVar4 & 0x1f)) + cVar2;
            *pcVar3 = '\0';
          }
          else {
            if (cVar2 - iVar7 < -0xf) break;
            *pcVar10 = cVar2 - (cVar1 << (bVar4 & 0x1f));
            while (lVar9 < 0x100) {
              if (*pcVar3 == '\0') {
                param_1[iVar5] = '\x01';
                break;
              }
              *pcVar3 = '\0';
              iVar5 = iVar5 + 1;
              pcVar3 = pcVar3 + 1;
              lVar9 = (longlong)pcVar3 - (longlong)param_1;
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 7);
    }
    iVar6 = iVar6 + 1;
    pcVar10 = pcVar10 + 1;
    if (0xff < iVar6) {
      return;
    }
  } while( true );
}



// FUNCTION 143d95980 table_select body=619 status=ok
// SIG undefined table_select(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void table_select(undefined8 *param_1,int param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x143d95998;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)param_1 = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  bVar2 = param_3 + ((char)param_3 >> 7 & param_3) * -2;
  lVar3 = (longlong)param_2 * 0x3c0;
  cmov(param_1,&DAT_145daa940 + lVar3,(bVar2 ^ 1) - 1 >> 0x1f);
  cmov(param_1,&DAT_145daa9b8 + lVar3,(bVar2 ^ 2) - 1 >> 0x1f);
  uVar1 = (uint)bVar2;
  cmov(param_1,&DAT_145daaa30 + lVar3,(uVar1 ^ 3) - 1 >> 0x1f);
  cmov(param_1,&DAT_145daaaa8 + lVar3,(uVar1 ^ 4) - 1 >> 0x1f);
  cmov(param_1,&DAT_145daab20 + lVar3,(uVar1 ^ 5) - 1 >> 0x1f);
  cmov(param_1,&DAT_145daab98 + lVar3,(uVar1 ^ 6) - 1 >> 0x1f);
  cmov(param_1,&DAT_145daac10 + lVar3,(bVar2 ^ 7) - 1 >> 0x1f);
  cmov(param_1,&DAT_145daac88 + lVar3,(bVar2 ^ 8) - 1 >> 0x1f);
  _guard_xfg_dispatch_icall_nop(local_a8,param_1 + 5,0x28);
  _guard_xfg_dispatch_icall_nop(local_80,param_1,0x28);
  local_58 = -*(int *)(param_1 + 10);
  local_54 = -*(int *)((longlong)param_1 + 0x54);
  local_50 = -*(int *)(param_1 + 0xb);
  local_4c = -*(int *)((longlong)param_1 + 0x5c);
  local_48 = -*(int *)(param_1 + 0xc);
  local_44 = -*(int *)((longlong)param_1 + 100);
  local_40 = -*(int *)(param_1 + 0xd);
  local_3c = -*(int *)((longlong)param_1 + 0x6c);
  local_38 = -*(int *)(param_1 + 0xe);
  local_34 = -*(int *)((longlong)param_1 + 0x74);
  cmov(param_1,local_a8,(uint)(int)(char)param_3 >> 0x1f);
  return;
}



// FUNCTION 143d95bf0 x25519_sc_reduce body=3620 status=ok
// SIG undefined x25519_sc_reduce(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void x25519_sc_reduce(byte *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  
  uVar9 = (ulonglong)((uint5)*(ushort *)(param_1 + 0x30) & 0x7fff) << 6 |
          (ulonglong)(param_1[0x2f] >> 2);
  uVar17 = (ulonglong)((uint6)*(uint3 *)(param_1 + 0x32) & 0xfffff) * 2 |
           (ulonglong)(param_1[0x31] >> 7);
  uVar6 = (ulonglong)((uint6)*(uint3 *)(param_1 + 0x35) & 0x1ffff) << 4 |
          (ulonglong)(param_1[0x34] >> 4);
  uVar14 = (ulonglong)((uint5)*(ushort *)(param_1 + 0x38) & 0x3fff) << 7 |
           (ulonglong)(param_1[0x37] >> 1);
  uVar12 = (ulonglong)((uint6)*(uint3 *)(param_1 + 0x3a) & 0x7ffff) << 2 |
           (ulonglong)(param_1[0x39] >> 6);
  uVar3 = (ulonglong)*(uint3 *)(param_1 + 0x3d) << 5 | (ulonglong)(param_1[0x3c] >> 3);
  lVar29 = ((ulonglong)((param_1[0x2c] & 0x1f) << 0x10 | (uint)param_1[0x2a]) |
           (ulonglong)param_1[0x2b] << 8) + uVar3 * -0xa6f7d;
  lVar34 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x25) & 0x7ffff) << 2 |
           (ulonglong)(param_1[0x24] >> 6)) + uVar14 * -0xa6f7d + uVar3 * -0xf39ad +
           uVar12 * 0x215d1;
  lVar33 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x20) & 0x1ffff) << 4 |
           (ulonglong)(param_1[0x1f] >> 4)) + uVar12 * 0x9fb67 + uVar17 * -0xa6f7d +
           uVar14 * -0xf39ad + uVar3 * 0x72d18 + uVar6 * 0x215d1;
  lVar1 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x10) & 0x7ffff) << 2 |
          (ulonglong)(param_1[0xf] >> 6)) + uVar9 * 0xa2c13;
  lVar25 = ((ulonglong)((param_1[0x17] & 0x1f) << 0x10 | (uint)param_1[0x15]) |
           (ulonglong)param_1[0x16] << 8) + uVar9 * 0x9fb67 + uVar17 * 0x72d18 + uVar6 * 0xa2c13;
  lVar5 = lVar1 + 0x100000 >> 0x15;
  uVar26 = lVar25 + 0x100000U >> 0x15;
  lVar31 = ((ulonglong)((uint5)*(ushort *)(param_1 + 0x1b) & 0x7fff) << 6 |
           (ulonglong)(param_1[0x1a] >> 2)) + uVar6 * 0x9fb67 + uVar17 * -0xf39ad + uVar14 * 0x72d18
           + uVar12 * 0xa2c13 + uVar9 * 0x215d1;
  lVar21 = uVar17 * 0xa2c13 +
           uVar9 * 0x72d18 + lVar5 +
           ((ulonglong)*(ushort *)(param_1 + 0x13) << 5 | (ulonglong)(param_1[0x12] >> 3));
  lVar22 = uVar14 * 0xa2c13 +
           uVar6 * 0x72d18 + uVar26 +
           ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x18) & 0x3ffff) << 3 |
           (ulonglong)(param_1[0x17] >> 5)) + uVar17 * 0x9fb67 + uVar9 * -0xf39ad;
  lVar23 = lVar31 + 0x100000 >> 0x15;
  lVar18 = uVar17 * 0x215d1 +
           uVar3 * 0xa2c13 + lVar23 +
           ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x1d) & 0xfffff) * 2 |
           (ulonglong)(param_1[0x1c] >> 7)) + uVar14 * 0x9fb67 + uVar9 * -0xa6f7d + uVar6 * -0xf39ad
           + uVar12 * 0x72d18;
  lVar19 = lVar33 + 0x100000 >> 0x15;
  lVar15 = lVar34 + 0x100000 >> 0x15;
  lVar35 = lVar22 + 0x100000 >> 0x15;
  lVar10 = uVar14 * 0x215d1 +
           lVar19 + ((ulonglong)((uint5)*(ushort *)(param_1 + 0x23) & 0x3fff) << 7 |
                    (ulonglong)(param_1[0x22] >> 1)) + uVar3 * 0x9fb67 + uVar6 * -0xa6f7d +
                    uVar12 * -0xf39ad;
  lVar4 = lVar29 + 0x100000 >> 0x15;
  lVar30 = lVar18 + 0x100000 >> 0x15;
  lVar13 = lVar21 + 0x100000 >> 0x15;
  lVar32 = uVar3 * 0x215d1 +
           lVar15 + ((ulonglong)*(ushort *)(param_1 + 0x28) << 5 | (ulonglong)(param_1[0x27] >> 3))
                    + uVar12 * -0xa6f7d;
  lVar2 = lVar10 + 0x100000 >> 0x15;
  lVar7 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x2d) & 0x3ffff) << 3 |
          (ulonglong)(param_1[0x2c] >> 5)) + lVar4;
  lVar33 = lVar33 + lVar30 + lVar19 * -0x200000;
  lVar34 = lVar34 + lVar2 + lVar15 * -0x200000;
  lVar10 = lVar10 + lVar2 * -0x200000;
  lVar2 = lVar32 + 0x100000 >> 0x15;
  lVar29 = lVar29 + lVar2 + lVar4 * -0x200000;
  lVar32 = lVar32 + lVar2 * -0x200000;
  lVar31 = lVar31 + lVar23 * -0x200000 + lVar7 * -0xa6f7d + lVar35;
  lVar25 = lVar25 + lVar7 * -0xf39ad + lVar32 * -0xa6f7d + lVar29 * 0x215d1 + uVar26 * -0x200000 +
                    lVar13;
  lVar1 = lVar1 + lVar29 * 0x9fb67 + lVar10 * -0xa6f7d + lVar32 * -0xf39ad + lVar7 * 0x72d18 +
                  lVar34 * 0x215d1 + lVar5 * -0x200000;
  lVar2 = ((ulonglong)((param_1[2] & 0x1f) << 0x10 | (uint)*param_1) | (ulonglong)param_1[1] << 8) +
          lVar33 * 0xa2c13;
  lVar15 = ((ulonglong)((uint5)*(ushort *)(param_1 + 6) & 0x7fff) << 6 |
           (ulonglong)(param_1[5] >> 2)) + lVar33 * 0x9fb67 + lVar10 * 0x72d18 + lVar34 * 0xa2c13;
  lVar20 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0xb) & 0x1ffff) << 4 |
           (ulonglong)(param_1[10] >> 4)) + lVar34 * 0x9fb67 + lVar10 * -0xf39ad + lVar32 * 0x72d18
           + lVar29 * 0xa2c13 + lVar33 * 0x215d1;
  lVar5 = lVar2 + 0x100000 >> 0x15;
  lVar8 = lVar15 + 0x100000 >> 0x15;
  lVar24 = lVar10 * 0xa2c13 +
           lVar33 * 0x72d18 + lVar5 +
           ((ulonglong)((uint6)*(uint3 *)(param_1 + 3) & 0x3ffff) << 3 |
           (ulonglong)(param_1[2] >> 5));
  lVar11 = lVar20 + 0x100000 >> 0x15;
  lVar19 = lVar32 * 0xa2c13 +
           lVar34 * 0x72d18 + lVar8 +
           ((ulonglong)((uint6)*(uint3 *)(param_1 + 8) & 0xfffff) * 2 | (ulonglong)(param_1[7] >> 7)
           ) + lVar10 * 0x9fb67 + lVar33 * -0xf39ad;
  lVar16 = lVar1 + 0x100000 >> 0x15;
  lVar10 = lVar10 * 0x215d1 +
           lVar7 * 0xa2c13 + lVar11 +
           ((ulonglong)((uint5)*(ushort *)(param_1 + 0xe) & 0x3fff) << 7 |
           (ulonglong)(param_1[0xd] >> 1)) + lVar32 * 0x9fb67 + lVar33 * -0xa6f7d +
           lVar34 * -0xf39ad + lVar29 * 0x72d18;
  lVar23 = lVar25 + 0x100000 >> 0x15;
  lVar21 = lVar21 + lVar7 * 0x9fb67 + lVar34 * -0xa6f7d + lVar29 * -0xf39ad + lVar32 * 0x215d1 +
                    lVar13 * -0x200000 + lVar16;
  lVar34 = lVar24 + 0x100000 >> 0x15;
  lVar27 = lVar10 + 0x100000 >> 0x15;
  lVar22 = lVar22 + lVar7 * 0x215d1 + lVar29 * -0xa6f7d + lVar35 * -0x200000 + lVar23;
  lVar4 = lVar31 + 0x100000 >> 0x15;
  lVar18 = lVar18 + lVar4 + lVar30 * -0x200000;
  lVar13 = lVar22 + 0x100000 >> 0x15;
  lVar30 = lVar18 + 0x100000 >> 0x15;
  lVar32 = lVar21 + 0x100000 >> 0x15;
  lVar29 = lVar19 + 0x100000 >> 0x15;
  lVar2 = lVar2 + lVar30 * 0xa2c13 + lVar5 * -0x200000;
  lVar5 = lVar2 >> 0x15;
  lVar24 = lVar24 + lVar30 * 0x72d18 + lVar34 * -0x200000 + lVar5;
  lVar7 = lVar24 >> 0x15;
  lVar8 = lVar15 + lVar30 * 0x9fb67 + lVar8 * -0x200000 + lVar34 + lVar7;
  lVar33 = lVar8 >> 0x15;
  lVar19 = lVar19 + lVar29 * -0x200000 + lVar30 * -0xf39ad + lVar33;
  lVar35 = lVar19 >> 0x15;
  lVar29 = lVar20 + lVar30 * 0x215d1 + lVar11 * -0x200000 + lVar29 + lVar35;
  lVar20 = lVar29 >> 0x15;
  lVar10 = lVar10 + lVar30 * -0xa6f7d + lVar27 * -0x200000 + lVar20;
  lVar28 = lVar10 >> 0x15;
  lVar34 = lVar1 + lVar27 + lVar16 * -0x200000 + lVar28;
  lVar11 = lVar34 >> 0x15;
  lVar21 = lVar21 + lVar11 + lVar32 * -0x200000;
  lVar16 = lVar21 >> 0x15;
  lVar25 = lVar25 + lVar32 + lVar23 * -0x200000 + lVar16;
  lVar23 = lVar25 >> 0x15;
  lVar22 = lVar22 + lVar23 + lVar13 * -0x200000;
  lVar15 = lVar22 >> 0x15;
  lVar31 = lVar31 + lVar13 + lVar4 * -0x200000 + lVar15;
  lVar13 = lVar31 >> 0x15;
  lVar18 = lVar18 + lVar13 + lVar30 * -0x200000;
  lVar4 = lVar18 >> 0x15;
  lVar2 = lVar2 + lVar4 * 0xa2c13 + lVar5 * -0x200000;
  lVar1 = lVar2 >> 0x15;
  lVar24 = lVar24 + lVar4 * 0x72d18 + lVar7 * -0x200000 + lVar1;
  lVar2 = lVar2 + lVar1 * -0x200000;
  lVar1 = lVar24 >> 0x15;
  lVar8 = lVar8 + lVar4 * 0x9fb67 + lVar33 * -0x200000 + lVar1;
  lVar24 = lVar24 + lVar1 * -0x200000;
  lVar1 = lVar8 >> 0x15;
  lVar19 = lVar19 + lVar35 * -0x200000 + lVar4 * -0xf39ad + lVar1;
  lVar8 = lVar8 + lVar1 * -0x200000;
  lVar1 = lVar19 >> 0x15;
  lVar29 = lVar29 + lVar4 * 0x215d1 + lVar20 * -0x200000 + lVar1;
  lVar19 = lVar19 + lVar1 * -0x200000;
  lVar1 = lVar29 >> 0x15;
  lVar10 = lVar10 + lVar4 * -0xa6f7d + lVar28 * -0x200000 + lVar1;
  lVar29 = lVar29 + lVar1 * -0x200000;
  lVar1 = lVar10 >> 0x15;
  lVar10 = lVar10 + lVar1 * -0x200000;
  lVar34 = lVar34 + lVar1 + lVar11 * -0x200000;
  lVar1 = lVar34 >> 0x15;
  lVar34 = lVar34 + lVar1 * -0x200000;
  lVar21 = lVar21 + lVar1 + lVar16 * -0x200000;
  lVar1 = lVar21 >> 0x15;
  lVar25 = lVar25 + lVar1 + lVar23 * -0x200000;
  lVar21 = lVar21 + lVar1 * -0x200000;
  lVar1 = lVar25 >> 0x15;
  lVar22 = lVar22 + lVar1 + lVar15 * -0x200000;
  lVar25 = lVar25 + lVar1 * -0x200000;
  lVar1 = lVar22 >> 0x15;
  lVar31 = lVar31 + lVar1 + lVar13 * -0x200000;
  lVar22 = lVar22 + lVar1 * -0x200000;
  lVar1 = lVar31 >> 0x15;
  lVar18 = lVar18 + lVar1 + lVar4 * -0x200000;
  lVar31 = lVar31 + lVar1 * -0x200000;
  param_1[1] = (byte)((ulonglong)lVar2 >> 8);
  *param_1 = (byte)lVar2;
  param_1[2] = (char)lVar24 << 5 | (byte)((ulonglong)lVar2 >> 0x10);
  param_1[3] = (byte)(lVar24 >> 3);
  param_1[4] = (byte)(lVar24 >> 0xb);
  param_1[6] = (byte)(lVar8 >> 6);
  param_1[5] = (byte)(lVar24 >> 0x13) | (char)lVar8 << 2;
  param_1[7] = (char)lVar19 << 7 | (byte)(lVar8 >> 0xe);
  param_1[8] = (byte)(lVar19 >> 1);
  param_1[9] = (byte)(lVar19 >> 9);
  param_1[0xb] = (byte)(lVar29 >> 4);
  param_1[0xc] = (byte)(lVar29 >> 0xc);
  param_1[10] = (byte)(lVar19 >> 0x11) | (char)lVar29 << 4;
  param_1[0xd] = (byte)(lVar29 >> 0x14) | (char)lVar10 * '\x02';
  param_1[0xe] = (byte)(lVar10 >> 7);
  param_1[0xf] = (char)lVar34 << 6 | (byte)(lVar10 >> 0xf);
  param_1[0x10] = (byte)(lVar34 >> 2);
  param_1[0x11] = (byte)(lVar34 >> 10);
  param_1[0x15] = (byte)lVar25;
  param_1[0x13] = (byte)(lVar21 >> 5);
  param_1[0x16] = (byte)((ulonglong)lVar25 >> 8);
  param_1[0x17] = (char)lVar22 << 5 | (byte)((ulonglong)lVar25 >> 0x10);
  param_1[0x18] = (byte)(lVar22 >> 3);
  param_1[0x19] = (byte)(lVar22 >> 0xb);
  param_1[0x12] = (byte)(lVar34 >> 0x12) | (char)lVar21 << 3;
  param_1[0x14] = (byte)(lVar21 >> 0xd);
  param_1[0x1b] = (byte)(lVar31 >> 6);
  param_1[0x1a] = (byte)(lVar22 >> 0x13) | (char)lVar31 << 2;
  param_1[0x1c] = (char)lVar18 << 7 | (byte)(lVar31 >> 0xe);
  param_1[0x1d] = (byte)(lVar18 >> 1);
  param_1[0x1f] = (byte)(lVar18 >> 0x11);
  param_1[0x1e] = (byte)(lVar18 >> 9);
  return;
}



// FUNCTION 143d96a20 x25519_scalar_mult body=1648 status=ok
// SIG undefined x25519_scalar_mult(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void x25519_scalar_mult(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_218 [32];
  ulonglong local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  longlong local_190;
  undefined8 local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
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
  ulonglong local_78;
  ulonglong local_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined1 local_58 [15];
  byte bStack_49;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  uVar3 = 0;
  local_188 = param_1;
  iVar1 = FUN_1400c82c0();
  if (iVar1 == 0) {
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    local_68 = *param_2 & 0xfffffff8;
    local_58 = SUB1615(*(undefined1 (*) [16])(param_2 + 4),0);
    bStack_49 = SUB161(*(undefined1 (*) [16])(param_2 + 4),0xf) & 0x3f | 0x40;
    fe51_frombytes(&local_90,param_3);
    local_b8 = 1;
    local_130 = 1;
    iVar1 = 0xfe;
    local_190 = 0xfffffffffffda;
    local_1e8 = 0xffffffffffffe;
    local_1c8 = 0;
    local_1d0 = 0;
    local_1d8 = 0;
    local_1e0 = 0;
    local_1b0 = 0;
    local_1b8 = 0;
    local_1c0 = 0;
    local_1f0 = 0;
    local_1f8 = 0;
    local_198 = 0;
    local_1a0 = 0;
    local_1a8 = 0;
    local_128 = uVar3;
    while( true ) {
      iVar2 = iVar1;
      if (iVar1 < 0) {
        iVar2 = iVar1 + 7;
      }
      uVar5 = *(byte *)((longlong)&local_68 + (longlong)(iVar2 >> 3)) >> ((byte)iVar1 & 7) & 1;
      uVar4 = -(uVar5 ^ uVar3);
      uVar3 = (local_90 ^ local_b8) & uVar4;
      local_e0 = local_90 ^ uVar3;
      local_b8 = local_b8 ^ uVar3;
      local_d8 = (local_1c8 ^ local_88) & uVar4;
      local_1c8 = local_1c8 ^ local_d8;
      local_d8 = local_88 ^ local_d8;
      local_d0 = (local_1d0 ^ local_80) & uVar4;
      local_1d0 = local_1d0 ^ local_d0;
      local_d0 = local_80 ^ local_d0;
      local_c8 = (local_1d8 ^ local_78) & uVar4;
      local_1d8 = local_1d8 ^ local_c8;
      local_c8 = local_78 ^ local_c8;
      local_c0 = (local_1e0 ^ local_70) & uVar4;
      local_1e0 = local_1e0 ^ local_c0;
      local_c0 = local_70 ^ local_c0;
      uVar3 = (local_130 ^ local_1b0) & uVar4;
      local_1b0 = local_1b0 ^ uVar3;
      local_130 = local_130 ^ uVar3;
      uVar3 = (local_128 ^ local_1b8) & uVar4;
      local_1b8 = local_1b8 ^ uVar3;
      local_128 = local_128 ^ uVar3;
      local_120 = (local_198 ^ local_1c0) & uVar4;
      local_1c0 = local_1c0 ^ local_120;
      local_120 = local_198 ^ local_120;
      uVar3 = (local_1a0 ^ local_1f0) & uVar4;
      local_1f0 = local_1f0 ^ uVar3;
      local_1a0 = local_1a0 ^ uVar3;
      uVar4 = (local_1a8 ^ local_1f8) & uVar4;
      local_1f8 = local_1f8 ^ uVar4;
      local_1a8 = local_1a8 ^ uVar4;
      local_158 = (local_e0 - local_130) + 0xfffffffffffda;
      uVar3 = (ulonglong)uVar5;
      local_150 = (local_d8 - local_128) + 0xffffffffffffe;
      local_148 = (local_d0 - local_120) + 0xffffffffffffe;
      local_140 = (local_c8 - local_1a0) + 0xffffffffffffe;
      local_138 = (local_c0 - local_1a8) + local_1e8;
      local_108 = (local_b8 - local_1b0) + local_190;
      local_100 = (local_1c8 - local_1b8) + local_1e8;
      local_f8 = (local_1d0 - local_1c0) + local_1e8;
      local_f0 = (local_1d8 - local_1f0) + local_1e8;
      local_e8 = (local_1e0 - local_1f8) + local_1e8;
      local_b8 = local_1b0 + local_b8;
      local_b0 = local_1c8 + local_1b8;
      local_a8 = local_1d0 + local_1c0;
      local_a0 = local_1d8 + local_1f0;
      local_98 = local_1e0 + local_1f8;
      local_180 = local_e0 + local_130;
      local_178 = local_d8 + local_128;
      local_170 = local_120 + local_d0;
      local_168 = local_c8 + local_1a0;
      local_160 = local_c0 + local_1a8;
      local_118 = local_1a0;
      local_110 = local_1a8;
      FUN_1400c7e80(&local_130,&local_158,&local_b8);
      FUN_1400c7e80(&local_180,&local_180,&local_108);
      FUN_1400c8040(&local_158,&local_108);
      FUN_1400c8040(&local_108,&local_b8);
      local_e0 = local_130 + local_180;
      local_d8 = local_128 + local_178;
      local_d0 = local_120 + local_170;
      local_178 = (local_128 - local_178) + 0xffffffffffffe;
      local_c8 = local_118 + local_168;
      local_c0 = local_110 + local_160;
      local_180 = (local_130 - local_180) + 0xfffffffffffda;
      local_170 = (local_120 - local_170) + 0xffffffffffffe;
      local_168 = (local_118 - local_168) + 0xffffffffffffe;
      local_160 = (local_110 - local_160) + 0xffffffffffffe;
      FUN_1400c7e80(&local_b8,&local_108,&local_158);
      local_108 = local_108 + (0xfffffffffffda - local_158);
      local_100 = local_100 + (0xffffffffffffe - local_150);
      local_f8 = local_f8 + (0xffffffffffffe - local_148);
      local_f0 = local_f0 + (0xffffffffffffe - local_140);
      local_e8 = local_e8 + (0xffffffffffffe - local_138);
      FUN_1400c8040(&local_180,&local_180);
      FUN_1400c8240(&local_130,&local_108);
      FUN_1400c8040(&local_e0,&local_e0);
      local_158 = local_158 + local_130;
      local_150 = local_150 + local_128;
      local_148 = local_148 + local_120;
      local_140 = local_140 + local_118;
      local_138 = local_138 + local_110;
      FUN_1400c7e80(&local_130,&local_90,&local_180);
      FUN_1400c7e80(&local_180,&local_108,&local_158);
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) break;
      local_1e0 = local_98;
      local_1f0 = local_168;
      local_1a8 = local_110;
      local_1a0 = local_118;
      local_1d8 = local_a0;
      local_1d0 = local_a8;
      local_1c8 = local_b0;
      local_1f8 = local_160;
      local_1c0 = local_170;
      local_1b8 = local_178;
      local_1b0 = local_180;
      local_198 = local_120;
      local_80 = local_d0;
      local_70 = local_c0;
      local_78 = local_c8;
      local_90 = local_e0;
      local_88 = local_d8;
    }
    fe51_invert(&local_180,&local_180);
    FUN_1400c7e80(&local_b8,&local_b8,&local_180);
    fe51_tobytes(local_188,&local_b8);
    FUN_14004ff40(&local_68,0x20);
  }
  else {
    x25519_scalar_mulx(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 143d97090 x25519_scalar_mulx body=1200 status=ok
// SIG undefined x25519_scalar_mulx(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void x25519_scalar_mulx(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_148 [32];
  ulonglong local_128 [16];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  byte local_48 [32];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x143d970ad;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar10 = 0;
  local_48[0x10] = param_2[0x10];
  local_48[0x11] = param_2[0x11];
  local_48[0x12] = param_2[0x12];
  local_48[0x13] = param_2[0x13];
  local_48[0x14] = param_2[0x14];
  local_48[0x15] = param_2[0x15];
  local_48[0x16] = param_2[0x16];
  local_48[0x17] = param_2[0x17];
  local_48[0x18] = param_2[0x18];
  local_48[0x19] = param_2[0x19];
  local_48[0x1a] = param_2[0x1a];
  local_48[0x1b] = param_2[0x1b];
  local_48[0x1c] = param_2[0x1c];
  local_48[0x1d] = param_2[0x1d];
  local_48[0x1e] = param_2[0x1e];
  local_48[1] = param_2[1];
  local_48[2] = param_2[2];
  local_48[3] = param_2[3];
  local_48[4] = param_2[4];
  local_48[5] = param_2[5];
  local_48[6] = param_2[6];
  local_48[7] = param_2[7];
  local_48[8] = param_2[8];
  local_48[9] = param_2[9];
  local_48[10] = param_2[10];
  local_48[0xb] = param_2[0xb];
  local_48[0xc] = param_2[0xc];
  local_48[0xd] = param_2[0xd];
  local_48[0xe] = param_2[0xe];
  local_48[0xf] = param_2[0xf];
  local_48[0] = *param_2 & 0xf8;
  local_48[0x1f] = param_2[0x1f] & 0x3f | 0x40;
  local_68 = *param_3;
  local_60 = param_3[1];
  iVar9 = 0xfe;
  local_128[4] = 1;
  local_58 = param_3[2];
  local_128[5] = 0;
  local_128[6] = 0;
  local_128[7] = 0;
  local_128[0] = 0;
  local_128[1] = 0;
  local_128[2] = 0;
  local_50 = (ulonglong)*(uint5 *)((longlong)param_3 + 0x19) << 8 |
             ((ulonglong)*(ushort *)((longlong)param_3 + 0x1e) & 0x7fff) << 0x30 |
             (ulonglong)*(byte *)(param_3 + 3);
  local_128[3] = 0;
  local_128[0xf] = local_50;
  local_128[0xc] = *param_3;
  local_128[0xd] = param_3[1];
  local_128[0xe] = param_3[2];
  local_128[8] = 1;
  local_128[9] = 0;
  local_128[10] = 0;
  local_128[0xb] = 0;
  uVar5 = uVar10;
  do {
    iVar4 = iVar9;
    if (iVar9 < 0) {
      iVar4 = iVar9 + 7;
    }
    uVar8 = local_48[iVar4 >> 3] >> ((byte)iVar9 & 7) & 1;
    uVar6 = -(uVar8 ^ uVar5);
    lVar7 = 2;
    uVar5 = uVar10;
    do {
      uVar1 = *(ulonglong *)((longlong)local_128 + uVar5 + 0x20);
      uVar2 = *(ulonglong *)((longlong)local_128 + uVar5 + 0x28);
      uVar3 = *(ulonglong *)((longlong)local_128 + uVar5 + 0x60);
      uVar11 = *(ulonglong *)((longlong)local_128 + uVar5 + 0x68);
      uVar13 = (uVar1 ^ uVar3) & uVar6;
      uVar12 = (uVar2 ^ uVar11) & uVar6;
      *(ulonglong *)((longlong)local_128 + uVar5 + 0x20) = uVar13 ^ uVar1;
      *(ulonglong *)((longlong)local_128 + uVar5 + 0x28) = uVar12 ^ uVar2;
      *(ulonglong *)((longlong)local_128 + uVar5 + 0x60) = uVar13 ^ uVar3;
      *(ulonglong *)((longlong)local_128 + uVar5 + 0x68) = uVar12 ^ uVar11;
      lVar7 = lVar7 + -1;
      uVar5 = uVar5 + 0x10;
    } while (lVar7 != 0);
    lVar7 = 2;
    uVar5 = uVar10;
    do {
      uVar1 = *(ulonglong *)((longlong)local_128 + uVar5 + 8);
      uVar2 = *(ulonglong *)((longlong)local_128 + uVar5 + 0x40);
      uVar3 = *(ulonglong *)((longlong)local_128 + uVar5 + 0x48);
      uVar11 = (*(ulonglong *)((longlong)local_128 + uVar5) ^ uVar2) & uVar6;
      uVar13 = (uVar1 ^ uVar3) & uVar6;
      *(ulonglong *)((longlong)local_128 + uVar5) =
           uVar11 ^ *(ulonglong *)((longlong)local_128 + uVar5);
      *(ulonglong *)((longlong)local_128 + uVar5 + 8) = uVar13 ^ uVar1;
      *(ulonglong *)((longlong)local_128 + uVar5 + 0x40) = uVar11 ^ uVar2;
      *(ulonglong *)((longlong)local_128 + uVar5 + 0x48) = uVar13 ^ uVar3;
      lVar7 = lVar7 + -1;
      uVar5 = uVar5 + 0x10;
    } while (lVar7 != 0);
    uVar5 = (ulonglong)uVar8;
    FUN_1400c8740(local_88,local_128 + 0xc,local_128 + 8);
    FUN_1400c8740(local_a8,local_128 + 4,local_128);
    FUN_1400c86c0(local_128 + 4,local_128 + 4,local_128);
    FUN_1400c86c0(local_128,local_128 + 0xc,local_128 + 8);
    FUN_1400c82e0(local_128 + 8,local_128 + 4,local_88);
    FUN_1400c82e0(local_128,local_128,local_a8);
    FUN_1400c8460(local_88,local_a8);
    FUN_1400c8460(local_a8,local_128 + 4);
    FUN_1400c86c0(local_128 + 0xc,local_128 + 8,local_128);
    FUN_1400c8740(local_128,local_128 + 8,local_128);
    FUN_1400c82e0(local_128 + 4,local_a8,local_88);
    FUN_1400c8740(local_a8,local_a8,local_88);
    FUN_1400c8460(local_128,local_128);
    FUN_1400c8640(local_128 + 8,local_a8);
    FUN_1400c8460(local_128 + 0xc,local_128 + 0xc);
    FUN_1400c86c0(local_88,local_88,local_128 + 8);
    FUN_1400c82e0(local_128 + 8,&local_68,local_128);
    FUN_1400c82e0(local_128,local_a8,local_88);
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  fe64_invert(local_128,local_128);
  FUN_1400c82e0(local_128 + 4,local_128 + 4,local_128);
  FUN_1400c87c0(param_1,local_128 + 4);
  FUN_14004ff40(local_48,0x20);
  return;
}



// FUNCTION 143d97540 i2a_ASN1_INTEGER body=315 status=ok
// SIG undefined i2a_ASN1_INTEGER(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2a_ASN1_INTEGER(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 local_res10;
  undefined1 local_res11;
  
  uVar3 = 0;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  uVar6 = uVar3;
  if ((param_2[1] & 0x100U) != 0) {
    uVar6 = 1;
    iVar1 = BIO_write(param_1,&DAT_145cc6554,1);
    if (iVar1 != 1) {
      return 0xffffffff;
    }
  }
  if (*param_2 == 0) {
    iVar1 = BIO_write(param_1,&DAT_145d778fc,2);
    if (iVar1 != 2) {
      return 0xffffffff;
    }
    return (ulonglong)((int)uVar6 + 2);
  }
  uVar4 = uVar3;
  if (*param_2 < 1) {
    return uVar6;
  }
  while( true ) {
    iVar5 = (int)uVar6;
    iVar1 = (int)uVar3;
    if ((iVar1 != 0) && (iVar1 == (iVar1 / 0x23) * 0x23)) {
      iVar2 = BIO_write(param_1,&DAT_145db2520,2);
      if (iVar2 != 2) {
        return 0xffffffff;
      }
      iVar5 = iVar5 + 2;
    }
    local_res10 = PTR_s_0123456789ABCDEF_1468381f0
                  [*(byte *)(*(longlong *)(param_2 + 2) + uVar4) >> 4];
    local_res11 = PTR_s_0123456789ABCDEF_1468381f0
                  [*(byte *)(*(longlong *)(param_2 + 2) + uVar4) & 0xf];
    iVar2 = BIO_write(param_1,&local_res10,2);
    if (iVar2 != 2) break;
    uVar6 = (ulonglong)(iVar5 + 2);
    uVar3 = (ulonglong)(iVar1 + 1U);
    uVar4 = uVar4 + 1;
    if (*param_2 <= (int)(iVar1 + 1U)) {
      return uVar6;
    }
  }
  return 0xffffffff;
}



// FUNCTION 143d97680 RSA_check_key_ex body=1828 status=ok
// SIG undefined RSA_check_key_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint RSA_check_key_ex(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar15;
  
  iVar1 = 0;
  if ((((*(longlong *)(param_1 + 0x30) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) ||
      (*(longlong *)(param_1 + 0x18) == 0)) ||
     ((*(longlong *)(param_1 + 0x20) == 0 || (*(longlong *)(param_1 + 0x28) == 0)))) {
    uVar15 = 0x1c;
    uVar14 = 0x93;
    goto LAB_143d97d82;
  }
  if (*(int *)(param_1 + 4) == 1) {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x58));
    if (0 < iVar1) {
      uVar2 = BN_num_bits(*(undefined8 *)(param_1 + 0x18));
      iVar3 = rsa_multip_cap(uVar2);
      if (iVar1 + 2 <= iVar3) goto LAB_143d97713;
    }
    uVar15 = 0x25;
    uVar14 = 0xa7;
LAB_143d97d82:
    ERR_put_error(4,0xa0,uVar14,"crypto\\rsa\\rsa_chk.c",uVar15);
    return 0;
  }
LAB_143d97713:
  lVar5 = BN_new();
  lVar6 = BN_new();
  lVar7 = BN_new();
  lVar8 = BN_new();
  lVar9 = BN_new();
  lVar10 = BN_CTX_new();
  if (((lVar5 == 0) || (lVar6 == 0)) ||
     ((lVar7 == 0 || (((lVar8 == 0 || (lVar9 == 0)) || (lVar10 == 0)))))) {
    uVar13 = 0xffffffff;
    ERR_put_error(4,0xa0,0x41,"crypto\\rsa\\rsa_chk.c",0x33);
    goto LAB_143d97d18;
  }
  iVar3 = BN_is_one(*(undefined8 *)(param_1 + 0x20));
  if (iVar3 != 0) {
    in_stack_ffffffffffffffb8 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x39);
    ERR_put_error(4,0xa0,0x65,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
  }
  uVar13 = (uint)(iVar3 == 0);
  iVar3 = BN_is_odd(*(undefined8 *)(param_1 + 0x20));
  if (iVar3 == 0) {
    uVar13 = 0;
    in_stack_ffffffffffffffb8 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x3d);
    ERR_put_error(4,0xa0,0x65,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
  }
  iVar3 = BN_is_prime_ex(*(undefined8 *)(param_1 + 0x30),0,0,param_2);
  if (iVar3 != 1) {
    uVar13 = 0;
    in_stack_ffffffffffffffb8 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x43);
    ERR_put_error(4,0xa0,0x80,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
  }
  iVar3 = BN_is_prime_ex(*(undefined8 *)(param_1 + 0x38),0,0,param_2);
  if (iVar3 != 1) {
    uVar13 = 0;
    in_stack_ffffffffffffffb8 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x49);
    ERR_put_error(4,0xa0,0x81,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar11 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),iVar3);
      iVar4 = BN_is_prime_ex(*puVar11,0,0,param_2);
      if (iVar4 != 1) {
        uVar13 = 0;
        in_stack_ffffffffffffffb8 =
             CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x51);
        ERR_put_error(4,0xa0,0xaa,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = BN_mul(lVar5,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar10);
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (iVar3 != 0) {
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        puVar11 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),iVar3);
        iVar4 = BN_mul(lVar5,lVar5,*puVar11,lVar10);
        uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
        if (iVar4 == 0) goto LAB_143d978e0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    iVar3 = BN_cmp(lVar5,*(undefined8 *)(param_1 + 0x18));
    if (iVar3 != 0) {
      uVar13 = 0;
      if (iVar1 == 0) {
        uVar15 = CONCAT44(uVar2,0x67);
        uVar14 = 0x7f;
      }
      else {
        uVar15 = CONCAT44(uVar2,0x65);
        uVar14 = 0xac;
      }
      ERR_put_error(4,0xa0,uVar14,"crypto\\rsa\\rsa_chk.c",uVar15);
    }
    uVar14 = BN_value_one();
    iVar3 = BN_sub(lVar5,*(undefined8 *)(param_1 + 0x30),uVar14);
    if (iVar3 != 0) {
      uVar14 = BN_value_one();
      iVar3 = BN_sub(lVar6,*(undefined8 *)(param_1 + 0x38),uVar14);
      if (((iVar3 != 0) && (iVar3 = BN_mul(lVar8,lVar5,lVar6,lVar10), iVar3 != 0)) &&
         (iVar3 = BN_gcd(lVar9,lVar5,lVar6,lVar10), iVar3 != 0)) {
        iVar3 = 0;
        if (0 < iVar1) {
          do {
            puVar11 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),iVar3);
            uVar14 = BN_value_one();
            iVar4 = BN_sub(lVar7,*puVar11,uVar14);
            if (((iVar4 == 0) || (iVar4 = BN_mul(lVar8,lVar8,lVar7,lVar10), iVar4 == 0)) ||
               (iVar4 = BN_gcd(lVar9,lVar9,lVar7,lVar10), iVar4 == 0)) goto LAB_143d978e0;
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar1);
        }
        iVar3 = BN_div(lVar7,0,lVar8,lVar9,lVar10);
        if (iVar3 != 0) {
          lVar12 = lVar10;
          iVar3 = BN_mod_mul(lVar5,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
                             lVar7,lVar10);
          uVar2 = (undefined4)((ulonglong)lVar12 >> 0x20);
          if (iVar3 != 0) {
            iVar3 = BN_is_one(lVar5);
            if (iVar3 == 0) {
              uVar13 = 0;
              ERR_put_error(4,0xa0,0x7b,"crypto\\rsa\\rsa_chk.c",CONCAT44(uVar2,0x97));
            }
            if (((*(longlong *)(param_1 + 0x40) == 0) || (*(longlong *)(param_1 + 0x48) == 0)) ||
               (*(longlong *)(param_1 + 0x50) == 0)) {
LAB_143d97c14:
              iVar3 = 0;
              if (0 < iVar1) {
                do {
                  puVar11 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x58),iVar3);
                  uVar14 = BN_value_one();
                  iVar4 = BN_sub(lVar5,*puVar11,uVar14);
                  if (iVar4 == 0) goto LAB_143d978e0;
                  lVar12 = lVar10;
                  iVar4 = BN_div(0,lVar6,*(undefined8 *)(param_1 + 0x28),lVar5,lVar10);
                  uVar2 = (undefined4)((ulonglong)lVar12 >> 0x20);
                  if (iVar4 == 0) goto LAB_143d978e0;
                  iVar4 = BN_cmp(lVar6,puVar11[1]);
                  if (iVar4 != 0) {
                    uVar13 = 0;
                    uVar14 = CONCAT44(uVar2,0xcf);
                    ERR_put_error(4,0xa0,0xa9,"crypto\\rsa\\rsa_chk.c",uVar14);
                    uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
                  }
                  lVar12 = BN_mod_inverse(lVar5,puVar11[3],*puVar11,lVar10);
                  if (lVar12 == 0) goto LAB_143d978e0;
                  iVar4 = BN_cmp(lVar5,puVar11[2]);
                  if (iVar4 != 0) {
                    uVar13 = 0;
                    ERR_put_error(4,0xa0,0xa8,"crypto\\rsa\\rsa_chk.c",CONCAT44(uVar2,0xd8));
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iVar1);
              }
              goto LAB_143d97d18;
            }
            uVar14 = BN_value_one();
            iVar3 = BN_sub(lVar5,*(undefined8 *)(param_1 + 0x30),uVar14);
            if (iVar3 != 0) {
              lVar12 = lVar10;
              iVar3 = BN_div(0,lVar6,*(undefined8 *)(param_1 + 0x28),lVar5,lVar10);
              uVar2 = (undefined4)((ulonglong)lVar12 >> 0x20);
              if (iVar3 != 0) {
                iVar3 = BN_cmp(lVar6,*(undefined8 *)(param_1 + 0x40));
                if (iVar3 != 0) {
                  uVar13 = 0;
                  ERR_put_error(4,0xa0,0x7c,"crypto\\rsa\\rsa_chk.c",CONCAT44(uVar2,0xa6));
                }
                uVar14 = BN_value_one();
                iVar3 = BN_sub(lVar5,*(undefined8 *)(param_1 + 0x38),uVar14);
                if (iVar3 != 0) {
                  lVar12 = lVar10;
                  iVar3 = BN_div(0,lVar6,*(undefined8 *)(param_1 + 0x28),lVar5,lVar10);
                  uVar2 = (undefined4)((ulonglong)lVar12 >> 0x20);
                  if (iVar3 != 0) {
                    iVar3 = BN_cmp(lVar6,*(undefined8 *)(param_1 + 0x48));
                    if (iVar3 != 0) {
                      uVar13 = 0;
                      uVar14 = CONCAT44(uVar2,0xb4);
                      ERR_put_error(4,0xa0,0x7d,"crypto\\rsa\\rsa_chk.c",uVar14);
                      uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
                    }
                    lVar12 = BN_mod_inverse(lVar5,*(undefined8 *)(param_1 + 0x38),
                                            *(undefined8 *)(param_1 + 0x30),lVar10);
                    if (lVar12 != 0) {
                      iVar3 = BN_cmp(lVar5,*(undefined8 *)(param_1 + 0x50));
                      if (iVar3 != 0) {
                        uVar13 = 0;
                        ERR_put_error(4,0xa0,0x7e,"crypto\\rsa\\rsa_chk.c",CONCAT44(uVar2,0xbe));
                      }
                      goto LAB_143d97c14;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_143d978e0:
  uVar13 = 0xffffffff;
LAB_143d97d18:
  BN_free(lVar5);
  BN_free(lVar6);
  BN_free(lVar7);
  BN_free(lVar8);
  BN_free(lVar9);
  BN_CTX_free(lVar10);
  return uVar13;
}



// FUNCTION 143d97db0 bn_compute_wNAF body=521 status=ok
// SIG undefined bn_compute_wNAF(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 * bn_compute_wNAF(longlong *param_1,int param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  
  puVar11 = (undefined1 *)0x0;
  iVar3 = BN_is_zero();
  if (iVar3 == 0) {
    if (param_2 - 1U < 7) {
      uVar8 = 1 << ((byte)param_2 & 0x1f);
      uVar2 = uVar8 * 2;
      iVar3 = BN_is_negative(param_1);
      cVar1 = '\x01';
      if (iVar3 != 0) {
        cVar1 = -1;
      }
      if ((*param_1 == 0) || ((int)param_1[1] == 0)) {
        uVar5 = 0x37;
      }
      else {
        iVar3 = BN_num_bits(param_1);
        uVar10 = (ulonglong)iVar3;
        puVar11 = (undefined1 *)CRYPTO_malloc(uVar10 + 1,"crypto\\bn\\bn_intern.c",0x3c);
        if (puVar11 == (undefined1 *)0x0) {
          uVar5 = 0x42;
          uVar9 = 0x41;
          goto LAB_143d97f70;
        }
        uVar6 = *(uint *)*param_1 & uVar2 - 1;
        uVar7 = 0;
        do {
          if ((uVar6 == 0) && (uVar10 <= uVar7 + (longlong)param_2 + 1)) {
            if (uVar7 <= uVar10 + 1) {
              *param_3 = uVar7;
              return puVar11;
            }
            uVar5 = 0x82;
            goto LAB_143d97f6a;
          }
          uVar4 = 0;
          if ((uVar6 & 1) != 0) {
            uVar4 = uVar6;
            if (((uVar8 & uVar6) != 0) &&
               (uVar4 = uVar6 + uVar8 * -2, uVar10 <= uVar7 + (longlong)param_2 + 1)) {
              uVar4 = (int)(uVar2 - 1) >> 1 & uVar6;
            }
            if ((((int)uVar4 <= (int)-uVar8) || ((int)uVar8 <= (int)uVar4)) || ((uVar4 & 1) == 0)) {
              uVar5 = 0x65;
              goto LAB_143d97f6a;
            }
            uVar6 = uVar6 - uVar4;
            if (((uVar6 != 0) && (uVar6 != uVar2)) && (uVar6 != uVar8)) {
              uVar5 = 0x71;
              goto LAB_143d97f6a;
            }
          }
          puVar11[uVar7] = cVar1 * (char)uVar4;
          uVar7 = uVar7 + 1;
          iVar3 = BN_is_bit_set(param_1,(int)uVar7 + param_2);
          uVar6 = ((int)uVar6 >> 1) + iVar3 * uVar8;
        } while ((int)uVar6 <= (int)uVar2);
        uVar5 = 0x7c;
      }
    }
    else {
      uVar5 = 0x2b;
    }
LAB_143d97f6a:
    uVar9 = 0x44;
  }
  else {
    puVar11 = (undefined1 *)CRYPTO_malloc(1,"crypto\\bn\\bn_intern.c",0x1f);
    if (puVar11 != (undefined1 *)0x0) {
      *puVar11 = 0;
      *param_3 = 1;
      return puVar11;
    }
    uVar5 = 0x21;
    uVar9 = 0x41;
    puVar11 = (undefined1 *)0x0;
  }
LAB_143d97f70:
  ERR_put_error(3,0x8e,uVar9,"crypto\\bn\\bn_intern.c",uVar5);
  CRYPTO_free(puVar11,"crypto\\bn\\bn_intern.c",0x89);
  return (undefined1 *)0x0;
}



// FUNCTION 143d97fc0 bn_copy_words body=98 status=ok
// SIG undefined bn_copy_words(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bn_copy_words(void *param_1,undefined8 *param_2,int param_3)

{
  if (param_3 < *(int *)(param_2 + 1)) {
    return 0;
  }
  _guard_xfg_dispatch_icall_nop(param_1,0,(longlong)param_3 << 3);
  if ((void *)*param_2 != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(param_1,(void *)*param_2,(longlong)*(int *)(param_2 + 1) << 3);
  }
  return 1;
}



// FUNCTION 143d98030 bn_set_all_zero body=52 status=ok
// SIG undefined bn_set_all_zero(void)

void bn_set_all_zero(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)(int)param_1[1];
  if ((int)param_1[1] < *(int *)((longlong)param_1 + 0xc)) {
    lVar3 = uVar2 * 8;
    do {
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      *(undefined8 *)(lVar3 + *param_1) = 0;
      lVar3 = lVar3 + 8;
    } while ((int)uVar1 < *(int *)((longlong)param_1 + 0xc));
  }
  return;
}



// FUNCTION 143d98070 bn_set_words body=145 status=ok
// SIG undefined bn_set_words(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bn_set_words(undefined8 *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x143d98085;
  lVar1 = bn_wexpand(param_1,param_3);
  if (lVar1 == 0) {
    ERR_put_error(3,0x90,0x41,"crypto\\bn\\bn_intern.c",0xbf,uVar2);
    return 0;
  }
  _guard_xfg_dispatch_icall_nop((void *)*param_1,param_2,(longlong)param_3 << 3);
  *(int *)(param_1 + 1) = param_3;
  bn_correct_top(param_1);
  return 1;
}



// FUNCTION 143d98110 RSA_padding_add_PKCS1_type_1 body=173 status=ok
// SIG undefined RSA_padding_add_PKCS1_type_1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_padding_add_PKCS1_type_1(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  longlong lVar1;
  
  if (param_2 + -0xb < (int)param_4) {
    ERR_put_error(4,0x6c,0x6e,"crypto\\rsa\\rsa_pk1.c",0x1a,0x143d98120);
    return 0;
  }
  lVar1 = (longlong)(int)(param_2 - param_4);
  *param_1 = 0;
  param_1[1] = 1;
  _guard_xfg_dispatch_icall_nop(param_1 + 2,0xff,lVar1 - 3);
  param_1[lVar1 + -1] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + lVar1,param_3,(ulonglong)param_4);
  return 1;
}



// FUNCTION 143d981c0 RSA_padding_add_PKCS1_type_2 body=245 status=ok
// SIG undefined RSA_padding_add_PKCS1_type_2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_padding_add_PKCS1_type_2(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (param_2 + -0xb < (int)param_4) {
    ERR_put_error(4,0x6d,0x6e,"crypto\\rsa\\rsa_pk1.c",0x7d,0x143d981d6);
    return 0;
  }
  *param_1 = 0;
  param_1[1] = 2;
  iVar6 = (param_2 - param_4) + -3;
  pcVar5 = param_1 + 2;
  iVar2 = RAND_bytes(pcVar5,iVar6);
  if (iVar2 < 1) {
LAB_143d98298:
    uVar4 = 0;
  }
  else {
    iVar2 = 0;
    if (0 < iVar6) {
      do {
        cVar1 = *pcVar5;
        while (cVar1 == '\0') {
          iVar3 = RAND_bytes(pcVar5,1);
          if (iVar3 < 1) goto LAB_143d98298;
          cVar1 = *pcVar5;
        }
        pcVar5 = pcVar5 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar6);
    }
    *pcVar5 = '\0';
    _guard_xfg_dispatch_icall_nop(pcVar5 + 1,param_3,(ulonglong)param_4);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143d982c0 RSA_padding_check_PKCS1_type_1 body=380 status=ok
// SIG undefined RSA_padding_check_PKCS1_type_1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint RSA_padding_check_PKCS1_type_1(void *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char *_Src;
  undefined4 uVar5;
  
  if (param_5 < 0xb) {
    return 0xffffffff;
  }
  if (param_5 == param_4) {
    cVar1 = *param_3;
    param_3 = param_3 + 1;
    if (cVar1 != '\0') {
      ERR_put_error(4,0x70,0x8a,"crypto\\rsa\\rsa_pk1.c",0x43);
      return 0xffffffff;
    }
    param_4 = param_4 + -1;
  }
  if ((param_5 != param_4 + 1) || (_Src = param_3 + 1, *param_3 != '\x01')) {
    ERR_put_error(4,0x70,0x6a,"crypto\\rsa\\rsa_pk1.c",0x4b);
    return 0xffffffff;
  }
  iVar2 = 0;
  param_4 = param_4 + -1;
  if (0 < param_4) {
    do {
      if (*_Src != -1) {
        if (*_Src != '\0') {
          uVar5 = 0x58;
          uVar4 = 0x66;
          goto LAB_143d98373;
        }
        _Src = _Src + 1;
        break;
      }
      _Src = _Src + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  if (iVar2 == param_4) {
    uVar5 = 0x61;
    uVar4 = 0x71;
  }
  else if (iVar2 < 8) {
    uVar5 = 0x67;
    uVar4 = 0x67;
  }
  else {
    uVar3 = param_4 + (-1 - iVar2);
    if ((int)uVar3 <= param_2) {
      _guard_xfg_dispatch_icall_nop(param_1,_Src,(ulonglong)uVar3);
      return uVar3;
    }
    uVar5 = 0x6d;
    uVar4 = 0x6d;
  }
LAB_143d98373:
  ERR_put_error(4,0x70,uVar4,"crypto\\rsa\\rsa_pk1.c",uVar5);
  return 0xffffffff;
}



// FUNCTION 143d98440 RSA_padding_check_PKCS1_type_2 body=477 status=ok
// SIG undefined RSA_padding_check_PKCS1_type_2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint RSA_padding_check_PKCS1_type_2
               (void *param_1,uint param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  
  uVar11 = 0x143d9845d;
  uVar6 = 0;
  uVar7 = 0xffffffff;
  pbVar10 = (byte *)0x0;
  if ((-1 < (int)param_2) && (-1 < param_4)) {
    lVar5 = (longlong)param_5;
    if ((param_4 <= param_5) && (10 < param_5)) {
      pbVar2 = param_3;
      if (param_4 != param_5) {
        pbVar2 = (byte *)CRYPTO_zalloc(lVar5,"crypto\\rsa\\rsa_pk1.c",0xb3);
        if (pbVar2 == (byte *)0x0) {
          ERR_put_error(4,0x71,0x41,"crypto\\rsa\\rsa_pk1.c",0xb5,uVar11);
          return 0xffffffff;
        }
        _guard_xfg_dispatch_icall_nop(pbVar2 + (lVar5 - param_4),param_3,(longlong)param_4);
        pbVar10 = pbVar2;
      }
      uVar7 = 2;
      uVar9 = 0;
      if (2 < param_5) {
        pbVar8 = pbVar2 + 2;
        do {
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          uVar4 = (int)(bVar1 - 1) >> 0x1f;
          uVar3 = ~uVar9 & uVar4;
          uVar9 = uVar9 | uVar4;
          uVar4 = uVar3 & uVar7;
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 & ~uVar3 | uVar4;
        } while ((int)uVar7 < param_5);
      }
      uVar7 = param_5 - (uVar6 + 1);
      if (((int)((pbVar2[1] ^ 2) - 1 & ~(pbVar2[1] ^ 2) & *pbVar2 - 1) >> 0x1f &
          0xffffffffU - ((int)((param_2 - uVar7 ^ uVar7 | uVar7 ^ param_2) ^ param_2) >> 0x1f) &
          0xffffffffU - ((int)((uVar6 - 10 | uVar6) ^ uVar6) >> 0x1f)) == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        _guard_xfg_dispatch_icall_nop(param_1,pbVar2 + (int)(uVar6 + 1),(longlong)(int)uVar7);
      }
    }
    CRYPTO_clear_free(pbVar10,lVar5,"crypto\\rsa\\rsa_pk1.c",0xf1);
    if (uVar7 == 0xffffffff) {
      ERR_put_error(4,0x71,0x9f,"crypto\\rsa\\rsa_pk1.c",0xf4,uVar11);
    }
  }
  return uVar7;
}



// FUNCTION 143d98620 PKCS1_MGF1 body=412 status=ok
// SIG undefined PKCS1_MGF1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
PKCS1_MGF1(longlong param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined4 uVar7;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a8 = param_5;
  iVar4 = 0;
  local_b4 = param_4;
  local_b0 = param_3;
  lVar3 = EVP_MD_CTX_new();
  uVar6 = 0xffffffff;
  uVar7 = 0xffffffff;
  uVar8 = uVar6;
  if ((lVar3 != 0) && (iVar1 = EVP_MD_size(param_5), -1 < iVar1)) {
    iVar5 = 0;
    if (0 < param_2) {
      do {
        local_b5 = (undefined1)iVar5;
        local_b7 = (undefined1)((uint)iVar5 >> 0x10);
        local_b8 = (undefined1)((uint)iVar5 >> 0x18);
        local_b6 = (undefined1)((uint)iVar5 >> 8);
        iVar2 = EVP_DigestInit_ex(lVar3,param_5,0);
        uVar8 = uVar6;
        if (((iVar2 == 0) ||
            (iVar2 = EVP_DigestUpdate(lVar3,local_b0,(longlong)local_b4), iVar2 == 0)) ||
           (iVar2 = EVP_DigestUpdate(lVar3,&local_b8), uVar8 = uVar7, iVar2 == 0))
        goto LAB_143d98781;
        if (param_2 < iVar1 + iVar4) {
          iVar2 = EVP_DigestFinal_ex(lVar3,local_98);
          if (iVar2 == 0) goto LAB_143d98781;
          _guard_xfg_dispatch_icall_nop
                    ((void *)(iVar4 + param_1),local_98,(longlong)(param_2 - iVar4));
          iVar4 = param_2;
        }
        else {
          iVar2 = EVP_DigestFinal_ex(lVar3,iVar4 + param_1);
          iVar4 = iVar1 + iVar4;
          if (iVar2 == 0) goto LAB_143d98781;
        }
        iVar5 = iVar5 + 1;
        param_5 = local_a8;
      } while (iVar4 < param_2);
    }
    uVar8 = 0;
  }
LAB_143d98781:
  FUN_14004ff40(local_98,0x40);
  EVP_MD_CTX_free(lVar3);
  return uVar8;
}



// FUNCTION 143d987c0 RSA_padding_add_PKCS1_OAEP body=53 status=ok
// SIG undefined RSA_padding_add_PKCS1_OAEP(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_padding_add_PKCS1_OAEP(void)

{
  RSA_padding_add_PKCS1_OAEP_mgf1();
  return;
}



// FUNCTION 143d98800 RSA_padding_add_PKCS1_OAEP_mgf1 body=1186 status=ok
// SIG undefined RSA_padding_add_PKCS1_OAEP_mgf1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
RSA_padding_add_PKCS1_OAEP_mgf1
          (undefined1 *param_1,int param_2,void *param_3,uint param_4,undefined8 param_5,int param_6
          ,longlong param_7,longlong param_8)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong *puVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar20;
  ulonglong *puVar21;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined1 *local_d0;
  int local_c8;
  longlong local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  void *local_a8;
  longlong local_a0;
  ulonglong local_98 [11];
  undefined1 *puVar19;
  
  local_98[10] = 0x143d98817;
  local_98[8] = DAT_1468387a8 ^ (ulonglong)auStack_108;
  param_2 = param_2 + -1;
  puVar15 = (undefined1 *)0x0;
  uVar14 = 0;
  uVar20 = 0;
  local_b0 = param_5;
  local_d8 = param_4;
  local_c8 = param_2;
  local_b8 = param_1;
  local_a8 = param_3;
  if (param_7 == 0) {
    param_7 = EVP_sha1();
  }
  local_c0 = param_8;
  if (param_8 == 0) {
    local_c0 = param_7;
  }
  uVar4 = EVP_MD_size(param_7);
  lVar17 = (longlong)(int)uVar4;
  iVar12 = param_2 + uVar4 * -2;
  if (iVar12 + -1 < (int)local_d8) {
    local_e8 = CONCAT44(local_e8._4_4_,0x3e);
    ERR_put_error(4,0x9a,0x6e,"crypto\\rsa\\rsa_oaep.c");
    puVar16 = (undefined1 *)0x0;
  }
  else if (param_2 < (int)(uVar4 * 2 + 1)) {
    local_e8 = CONCAT44(local_e8._4_4_,0x44);
    ERR_put_error(4,0x9a,0x78,"crypto\\rsa\\rsa_oaep.c");
    puVar16 = (undefined1 *)0x0;
  }
  else {
    local_d0 = local_b8 + lVar17;
    *param_1 = 0;
    puVar21 = (ulonglong *)(param_1 + 1);
    local_e0 = 0;
    puVar10 = (ulonglong *)(local_d0 + 1);
    local_e8 = param_7;
    local_a0 = lVar17;
    iVar5 = EVP_Digest(local_b0,(longlong)param_6,puVar10,0);
    puVar16 = puVar15;
    puVar6 = puVar15;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                (local_d0 + lVar17 + 1,0,(longlong)(int)((iVar12 - local_d8) + -1));
      iVar12 = local_c8;
      local_d0[(int)((local_c8 - local_d8) - uVar4)] = 1;
      _guard_xfg_dispatch_icall_nop
                (local_d0 + (((longlong)local_c8 - (longlong)(int)local_d8) - lVar17) + 1,local_a8,
                 (ulonglong)local_d8);
      iVar5 = RAND_bytes(puVar21,uVar4);
      puVar6 = (undefined1 *)0x0;
      if (0 < iVar5) {
        uVar20 = iVar12 - uVar4;
        lVar13 = (longlong)(int)uVar20;
        puVar6 = (undefined1 *)CRYPTO_malloc(lVar13,"crypto\\rsa\\rsa_oaep.c",0x55);
        if (puVar6 == (undefined1 *)0x0) {
          local_e8 = CONCAT44(local_e8._4_4_,0x57);
          ERR_put_error(4,0x9a,0x41,"crypto\\rsa\\rsa_oaep.c");
        }
        else {
          local_e8 = local_c0;
          iVar12 = PKCS1_MGF1(puVar6,uVar20,puVar21,uVar4);
          puVar16 = (undefined1 *)0x0;
          if (-1 < iVar12) {
            uVar18 = 0;
            if (((0 < (int)uVar20) && (0x3f < uVar20)) &&
               ((puVar6 + (int)(uVar20 - 1) < puVar10 ||
                ((undefined1 *)((longlong)(int)(uVar20 - 1) + (longlong)puVar10) < puVar6)))) {
              uVar7 = uVar20 & 0x8000003f;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
              }
              lVar11 = (longlong)puVar6 - (longlong)puVar10;
              puVar8 = puVar10;
              puVar19 = puVar15;
              do {
                uVar18 = (int)puVar19 + 0x40;
                puVar19 = (undefined1 *)(ulonglong)uVar18;
                uVar3 = ((ulonglong *)(lVar11 + (longlong)puVar8))[1];
                puVar1 = puVar8 + 8;
                *puVar8 = *(ulonglong *)(lVar11 + (longlong)puVar8) ^ *puVar8;
                puVar8[1] = uVar3 ^ puVar8[1];
                puVar2 = (ulonglong *)(lVar11 + -0x30 + (longlong)puVar1);
                uVar3 = puVar2[1];
                puVar8[2] = *puVar2 ^ puVar8[2];
                puVar8[3] = uVar3 ^ puVar8[3];
                puVar2 = (ulonglong *)(lVar11 + -0x20 + (longlong)puVar1);
                uVar3 = puVar2[1];
                puVar8[4] = *puVar2 ^ puVar8[4];
                puVar8[5] = uVar3 ^ puVar8[5];
                puVar2 = (ulonglong *)(lVar11 + -0x10 + (longlong)puVar1);
                uVar3 = puVar2[1];
                puVar8[6] = *puVar2 ^ puVar8[6];
                puVar8[7] = uVar3 ^ puVar8[7];
                puVar8 = puVar1;
              } while ((longlong)((longlong)puVar1 + ~(ulonglong)local_d0) <
                       (longlong)(int)(uVar20 - uVar7));
            }
            lVar11 = (longlong)(int)uVar18;
            if (lVar11 < lVar13) {
              pbVar9 = local_d0 + lVar11 + 1;
              lVar13 = lVar13 - lVar11;
              do {
                *pbVar9 = *pbVar9 ^ pbVar9[(longlong)puVar6 - (longlong)puVar10];
                pbVar9 = pbVar9 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
            local_e8 = local_c0;
            iVar12 = PKCS1_MGF1(local_98,uVar4,puVar10,uVar20);
            if (-1 < iVar12) {
              if (((0 < (int)uVar4) && (0x3f < uVar4)) &&
                 (((ulonglong *)((longlong)local_98 + (longlong)(int)(uVar4 - 1)) < puVar21 ||
                  ((ulonglong *)((longlong)(int)(uVar4 - 1) + (longlong)puVar21) < local_98)))) {
                uVar18 = uVar4 & 0x8000003f;
                if ((int)uVar18 < 0) {
                  uVar18 = (uVar18 - 1 | 0xffffffc0) + 1;
                }
                puVar10 = puVar21;
                do {
                  uVar14 = (int)puVar15 + 0x40;
                  puVar15 = (undefined1 *)(ulonglong)uVar14;
                  puVar1 = (ulonglong *)
                           (((longlong)local_98 - (longlong)puVar21) + (longlong)puVar10);
                  uVar3 = puVar1[1];
                  puVar8 = puVar10 + 8;
                  *puVar10 = *puVar1 ^ *puVar10;
                  puVar10[1] = uVar3 ^ puVar10[1];
                  puVar1 = (ulonglong *)
                           (((longlong)&local_c8 - (longlong)puVar21) + (longlong)puVar8);
                  uVar3 = puVar1[1];
                  puVar10[2] = *puVar1 ^ puVar10[2];
                  puVar10[3] = uVar3 ^ puVar10[3];
                  puVar1 = (ulonglong *)
                           (((longlong)&local_b8 - (longlong)puVar21) + (longlong)puVar8);
                  uVar3 = puVar1[1];
                  puVar10[4] = *puVar1 ^ puVar10[4];
                  puVar10[5] = uVar3 ^ puVar10[5];
                  puVar1 = (ulonglong *)
                           (((longlong)&local_a8 - (longlong)puVar21) + (longlong)puVar8);
                  uVar3 = puVar1[1];
                  puVar10[6] = *puVar1 ^ puVar10[6];
                  puVar10[7] = uVar3 ^ puVar10[7];
                  puVar10 = puVar8;
                  lVar17 = local_a0;
                } while ((longlong)(~(ulonglong)local_b8 + (longlong)puVar8) <
                         (longlong)(int)(uVar4 - uVar18));
              }
              lVar13 = (longlong)(int)uVar14;
              if (lVar13 < lVar17) {
                pbVar9 = (byte *)(lVar13 + (longlong)puVar21);
                lVar17 = lVar17 - lVar13;
                do {
                  *pbVar9 = *pbVar9 ^ pbVar9[(longlong)local_98 - (longlong)puVar21];
                  pbVar9 = pbVar9 + 1;
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
              }
              puVar16 = (undefined1 *)0x1;
            }
          }
        }
      }
    }
    FUN_14004ff40(local_98,0x40);
    CRYPTO_clear_free(puVar6,(longlong)(int)uVar20,"crypto\\rsa\\rsa_oaep.c",0x68);
  }
  return puVar16;
}



// FUNCTION 143d98cb0 RSA_padding_check_PKCS1_OAEP body=70 status=ok
// SIG undefined RSA_padding_check_PKCS1_OAEP(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_padding_check_PKCS1_OAEP(void)

{
  RSA_padding_check_PKCS1_OAEP_mgf1();
  return;
}



// FUNCTION 143d98d00 RSA_padding_check_PKCS1_OAEP_mgf1 body=1372 status=ok
// SIG undefined RSA_padding_check_PKCS1_OAEP_mgf1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int RSA_padding_check_PKCS1_OAEP_mgf1
              (void *param_1,int param_2,byte *param_3,int param_4,int param_5,undefined8 param_6,
              int param_7,longlong param_8,longlong param_9)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  byte *pbVar11;
  uint uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined8 local_110;
  int local_108;
  int local_104;
  int local_100;
  byte *local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined1 local_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 local_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 local_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 local_98 [8];
  undefined1 auStack_90 [8];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d98d1a;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  puVar13 = (ulonglong *)0x0;
  uVar4 = 0;
  local_e0 = param_6;
  local_100 = param_5;
  local_e8 = param_8;
  local_108 = -1;
  local_f8 = (byte *)0x0;
  local_104 = param_2;
  local_d8 = param_1;
  if (param_8 == 0) {
    param_8 = EVP_sha1();
  }
  if (param_9 == 0) {
    param_9 = param_8;
  }
  local_f0 = param_9;
  local_e8 = param_8;
  uVar2 = EVP_MD_size(param_8);
  uVar14 = (ulonglong)(int)uVar2;
  if ((local_104 < 1) || (param_4 < 1)) {
    return -1;
  }
  puVar5 = puVar13;
  uVar19 = 0;
  if ((param_4 <= param_5) &&
     (puVar5 = (ulonglong *)0x0, uVar19 = 0, (int)(uVar2 * 2 + 2) <= param_5)) {
    uVar19 = (param_5 - uVar2) - 1;
    puVar5 = (ulonglong *)CRYPTO_malloc((longlong)(int)uVar19,"crypto\\rsa\\rsa_oaep.c",0x9a);
    if (puVar5 == (ulonglong *)0x0) {
      local_118 = CONCAT44(local_118._4_4_,0x9c);
LAB_143d98e01:
      ERR_put_error(4,0x99,0x41,"crypto\\rsa\\rsa_oaep.c");
      goto LAB_143d991ce;
    }
    if (param_4 != param_5) {
      local_f8 = (byte *)CRYPTO_zalloc((longlong)param_5,"crypto\\rsa\\rsa_oaep.c",0xa1);
      if (local_f8 == (byte *)0x0) {
        local_118 = CONCAT44(local_118._4_4_,0xa4);
        goto LAB_143d98e01;
      }
      _guard_xfg_dispatch_icall_nop
                (local_f8 + ((longlong)param_5 - (longlong)param_4),param_3,(longlong)param_4);
      param_3 = local_f8;
    }
    bVar1 = *param_3;
    pbVar11 = param_3 + 1;
    local_118 = local_f0;
    param_3 = param_3 + uVar14 + 1;
    iVar3 = PKCS1_MGF1(local_c8,uVar2,param_3,uVar19);
    if (iVar3 != 0) goto LAB_143d991ce;
    uVar12 = uVar4;
    if (((0 < (int)uVar2) && (0x3f < uVar2)) &&
       ((pbVar11 + (int)(uVar2 - 1) < local_c8 || (local_c8 + (int)(uVar2 - 1) < pbVar11)))) {
      uVar7 = uVar2 & 0x8000003f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
      }
      lVar8 = (longlong)pbVar11 - (longlong)local_c8;
      puVar10 = puVar13;
      puVar17 = puVar13;
      do {
        uVar12 = (int)puVar10 + 0x40;
        puVar10 = (ulonglong *)(ulonglong)uVar12;
        puVar6 = (ulonglong *)(local_c8 + (longlong)puVar17);
        puVar16 = puVar17 + 8;
        uVar15 = ((ulonglong *)((longlong)puVar6 + lVar8))[1];
        *puVar6 = *(ulonglong *)((longlong)puVar6 + lVar8) ^ *puVar6;
        *(ulonglong *)(auStack_c0 + (longlong)puVar17) =
             uVar15 ^ *(ulonglong *)(auStack_c0 + (longlong)puVar17);
        uVar15 = *(ulonglong *)((longlong)(local_b8 + (longlong)puVar17 + lVar8) + 8);
        *(ulonglong *)(local_b8 + (longlong)puVar17) =
             *(ulonglong *)(local_b8 + (longlong)puVar17 + lVar8) ^
             *(ulonglong *)(local_b8 + (longlong)puVar17);
        *(ulonglong *)(auStack_b0 + (longlong)puVar17) =
             uVar15 ^ *(ulonglong *)(auStack_b0 + (longlong)puVar17);
        uVar15 = *(ulonglong *)((longlong)(local_a8 + (longlong)puVar17 + lVar8) + 8);
        *(ulonglong *)(local_a8 + (longlong)puVar17) =
             *(ulonglong *)(local_a8 + (longlong)puVar17 + lVar8) ^
             *(ulonglong *)(local_a8 + (longlong)puVar17);
        *(ulonglong *)(auStack_a0 + (longlong)puVar17) =
             uVar15 ^ *(ulonglong *)(auStack_a0 + (longlong)puVar17);
        uVar15 = *(ulonglong *)((longlong)(local_98 + (longlong)puVar17 + lVar8) + 8);
        *(ulonglong *)(local_98 + (longlong)puVar17) =
             *(ulonglong *)(local_98 + (longlong)puVar17 + lVar8) ^
             *(ulonglong *)(local_98 + (longlong)puVar17);
        *(ulonglong *)(auStack_90 + (longlong)puVar17) =
             uVar15 ^ *(ulonglong *)(auStack_90 + (longlong)puVar17);
        puVar17 = puVar16;
      } while ((longlong)puVar16 < (longlong)(int)(uVar2 - uVar7));
    }
    lVar8 = (longlong)(int)uVar12;
    if (lVar8 < (longlong)uVar14) {
      do {
        pbVar9 = local_c8 + lVar8;
        lVar8 = lVar8 + 1;
        *pbVar9 = *pbVar9 ^ pbVar9[(longlong)pbVar11 - (longlong)local_c8];
      } while (lVar8 < (longlong)uVar14);
    }
    local_118 = local_f0;
    iVar3 = PKCS1_MGF1(puVar5,uVar19,local_c8,uVar2);
    if (iVar3 != 0) goto LAB_143d991ce;
    uVar12 = 0;
    uVar7 = uVar12;
    if (((0 < (int)uVar19) && (0x3f < uVar19)) &&
       ((lVar8 = (longlong)(int)((param_5 - uVar2) + -2), param_3 + lVar8 < puVar5 ||
        ((byte *)(lVar8 + (longlong)puVar5) < param_3)))) {
      uVar2 = uVar19 & 0x8000003f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
      }
      lVar8 = (longlong)param_3 - (longlong)puVar5;
      puVar10 = puVar5;
      puVar17 = puVar13;
      do {
        uVar7 = (int)puVar17 + 0x40;
        puVar17 = (ulonglong *)(ulonglong)uVar7;
        uVar15 = ((ulonglong *)(lVar8 + (longlong)puVar10))[1];
        *puVar10 = *(ulonglong *)(lVar8 + (longlong)puVar10) ^ *puVar10;
        puVar10[1] = uVar15 ^ puVar10[1];
        puVar6 = (ulonglong *)(lVar8 + 0x10 + (longlong)puVar10);
        uVar15 = puVar6[1];
        puVar10[2] = *puVar6 ^ puVar10[2];
        puVar10[3] = uVar15 ^ puVar10[3];
        puVar6 = (ulonglong *)(lVar8 + 0x20 + (longlong)puVar10);
        uVar15 = puVar6[1];
        puVar10[4] = *puVar6 ^ puVar10[4];
        puVar10[5] = uVar15 ^ puVar10[5];
        puVar6 = (ulonglong *)(lVar8 + 0x30 + (longlong)puVar10);
        uVar15 = puVar6[1];
        puVar10[6] = *puVar6 ^ puVar10[6];
        puVar10[7] = uVar15 ^ puVar10[7];
        puVar10 = puVar10 + 8;
      } while ((longlong)puVar10 - (longlong)puVar5 < (longlong)(int)(uVar19 - uVar2));
    }
    lVar8 = (longlong)(int)uVar7;
    lVar18 = (longlong)(int)uVar19;
    if (lVar8 < lVar18) {
      pbVar11 = (byte *)(lVar8 + (longlong)puVar5);
      lVar8 = lVar18 - lVar8;
      do {
        *pbVar11 = *pbVar11 ^ pbVar11[(longlong)param_3 - (longlong)puVar5];
        pbVar11 = pbVar11 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    local_110 = 0;
    local_118 = local_e8;
    iVar3 = EVP_Digest(local_e0,(longlong)param_7,local_88,0);
    if (iVar3 == 0) goto LAB_143d991ce;
    uVar2 = FUN_14004ffa0(puVar5,local_88,uVar14);
    uVar2 = (int)(bVar1 - 1 & uVar2 - 1 & ~uVar2) >> 0x1f;
    uVar15 = uVar14;
    puVar10 = puVar13;
    for (; (longlong)uVar14 < lVar18; uVar14 = uVar14 + 1) {
      uVar4 = *(byte *)(uVar14 + (longlong)puVar5) ^ 1;
      uVar12 = (int)(uVar4 - 1 & ~uVar4) >> 0x1f;
      uVar4 = ~(uint)puVar10 & uVar12;
      uVar12 = (uint)puVar10 | uVar12;
      puVar10 = (ulonglong *)(ulonglong)uVar12;
      uVar7 = (uint)uVar15;
      uVar15 = (ulonglong)(uVar7 + 1);
      uVar4 = (uint)puVar13 & ~uVar4 | uVar4 & uVar7;
      puVar13 = (ulonglong *)(ulonglong)uVar4;
      uVar2 = uVar2 & ((int)(*(byte *)(uVar14 + (longlong)puVar5) - 1) >> 0x1f | uVar12);
    }
    if ((uVar2 & uVar12) != 0) {
      local_108 = uVar19 - (uVar4 + 1);
      if (local_108 <= local_104) {
        _guard_xfg_dispatch_icall_nop
                  (local_d8,(byte *)((longlong)(int)(uVar4 + 1) + (longlong)puVar5),
                   (longlong)local_108);
        goto LAB_143d991ce;
      }
      local_118 = CONCAT44(local_118._4_4_,0xe8);
      ERR_put_error(4,0x99,0x6d,"crypto\\rsa\\rsa_oaep.c");
    }
  }
  local_118 = CONCAT44(local_118._4_4_,0xf5);
  ERR_put_error(4,0x99,0x79,"crypto\\rsa\\rsa_oaep.c");
  local_108 = -1;
LAB_143d991ce:
  FUN_14004ff40(local_c8,0x40);
  CRYPTO_clear_free(puVar5,(longlong)(int)uVar19,"crypto\\rsa\\rsa_oaep.c",0xf8);
  CRYPTO_clear_free(local_f8,(longlong)local_100,"crypto\\rsa\\rsa_oaep.c",0xf9);
  return local_108;
}



// FUNCTION 143d99260 RSA_padding_add_SSLv23 body=259 status=ok
// SIG undefined RSA_padding_add_SSLv23(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_padding_add_SSLv23(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  
  if (param_2 + -0xb < (int)param_4) {
    ERR_put_error(4,0x6e,0x6e,"crypto\\rsa\\rsa_ssl.c",0x18,0x143d99276);
    return 0;
  }
  *param_1 = 0;
  param_1[1] = 2;
  iVar6 = (param_2 - param_4) + -0xb;
  pcVar5 = param_1 + 2;
  iVar2 = RAND_bytes(pcVar5,iVar6);
  if (iVar2 < 1) {
LAB_143d99346:
    uVar4 = 0;
  }
  else {
    iVar2 = 0;
    if (0 < iVar6) {
      do {
        cVar1 = *pcVar5;
        while (cVar1 == '\0') {
          iVar3 = RAND_bytes(pcVar5,1);
          if (iVar3 < 1) goto LAB_143d99346;
          cVar1 = *pcVar5;
        }
        pcVar5 = pcVar5 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar6);
    }
    builtin_strncpy(pcVar5,"\x03\x03\x03\x03\x03\x03\x03\x03",9);
    _guard_xfg_dispatch_icall_nop(pcVar5 + 9,param_3,(ulonglong)param_4);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143d99370 RSA_padding_check_SSLv23 body=401 status=ok
// SIG undefined RSA_padding_check_SSLv23(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint RSA_padding_check_SSLv23(void *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  char *_Src;
  undefined4 uVar7;
  
  if (param_4 < 10) {
    ERR_put_error(4,0x72,0x6f,"crypto\\rsa\\rsa_ssl.c",0x3f);
    return 0xffffffff;
  }
  if (param_4 == param_5) {
    cVar1 = *param_3;
    param_3 = param_3 + 1;
    if (cVar1 != '\0') {
      uVar7 = 0x45;
      goto LAB_143d993d0;
    }
    param_4 = param_4 + -1;
  }
  if ((param_5 == param_4 + 1) && (_Src = param_3 + 1, *param_3 == '\x02')) {
    iVar3 = 0;
    param_4 = param_4 + -1;
    if (0 < param_4) {
      do {
        cVar1 = *_Src;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_4);
    }
    if ((iVar3 == param_4) || (iVar3 < 8)) {
      uVar7 = 0x57;
      uVar6 = 0x71;
    }
    else {
      iVar4 = -9;
      lVar2 = -9;
      do {
        if (_Src[lVar2] != '\x03') break;
        iVar4 = iVar4 + 1;
        lVar2 = lVar2 + 1;
      } while (lVar2 < -1);
      if (iVar4 == -1) {
        uVar7 = 0x5f;
        uVar6 = 0x73;
      }
      else {
        uVar5 = param_4 + (-1 - iVar3);
        if ((int)uVar5 <= param_2) {
          _guard_xfg_dispatch_icall_nop(param_1,_Src,(ulonglong)uVar5);
          return uVar5;
        }
        uVar7 = 0x66;
        uVar6 = 0x6d;
      }
    }
    ERR_put_error(4,0x72,uVar6,"crypto\\rsa\\rsa_ssl.c",uVar7);
    return 0xffffffff;
  }
  uVar7 = 0x4b;
LAB_143d993d0:
  ERR_put_error(4,0x72,0x6b,"crypto\\rsa\\rsa_ssl.c",uVar7);
  return 0xffffffff;
}



// FUNCTION 143d99510 RSA_padding_add_none body=122 status=ok
// SIG undefined RSA_padding_add_none(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_padding_add_none(void *param_1,int param_2,void *param_3,uint param_4)

{
  if (param_2 < (int)param_4) {
    ERR_put_error(4,0x6b,0x6e,"crypto\\rsa\\rsa_none.c",0x12);
    return 0;
  }
  if ((int)param_4 < param_2) {
    ERR_put_error(4,0x6b,0x7a,"crypto\\rsa\\rsa_none.c",0x17);
    return 0;
  }
  _guard_xfg_dispatch_icall_nop(param_1,param_3,(ulonglong)param_4);
  return 1;
}



// FUNCTION 143d99590 RSA_X931_hash_id body=53 status=ok
// SIG undefined RSA_X931_hash_id(void)

undefined8 RSA_X931_hash_id(int param_1)

{
  if (param_1 == 0x40) {
    return 0x33;
  }
  if (param_1 == 0x2a0) {
    return 0x34;
  }
  if (param_1 == 0x2a1) {
    return 0x36;
  }
  if (param_1 != 0x2a2) {
    return 0xffffffff;
  }
  return 0x35;
}



// FUNCTION 143d995d0 RSA_padding_add_X931 body=184 status=ok
// SIG undefined RSA_padding_add_X931(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RSA_padding_add_X931(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  undefined1 *_Dst;
  
  param_2 = param_2 - param_4;
  if (param_2 + -2 < 0) {
    ERR_put_error(4,0x7f,0x6e,"crypto\\rsa\\rsa_x931.c",0x1e,0x143d995e0);
    return 0xffffffff;
  }
  _Dst = param_1 + 1;
  if (param_2 == 2) {
    *param_1 = 0x6a;
  }
  else {
    *param_1 = 0x6b;
    if (1 < param_2 + -2) {
      _guard_xfg_dispatch_icall_nop(_Dst,0xbb,(longlong)(param_2 + -3));
      _Dst = _Dst + (param_2 + -3);
    }
    *_Dst = 0xba;
    _Dst = _Dst + 1;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,param_3,(ulonglong)param_4);
  _Dst[(int)param_4] = 0xcc;
  return 1;
}



// FUNCTION 143d99690 RSA_padding_check_X931 body=278 status=ok
// SIG undefined RSA_padding_check_X931(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint RSA_padding_check_X931(void *param_1,undefined8 param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  char *_Src;
  uint uVar3;
  undefined4 uVar4;
  
  if ((param_5 != param_4) || (1 < (byte)(*param_3 + 0x96U))) {
    ERR_put_error(4,0x80,0x89,"crypto\\rsa\\rsa_x931.c",0x3d);
    return 0xffffffff;
  }
  _Src = param_3 + 1;
  if (*param_3 == 'k') {
    param_4 = param_4 + -3;
    iVar2 = 0;
    if (0 < param_4) {
      do {
        cVar1 = *_Src;
        _Src = _Src + 1;
        if (cVar1 == -0x46) break;
        if (cVar1 != -0x45) {
          uVar4 = 0x48;
          goto LAB_143d996f8;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
    }
    uVar3 = param_4 - iVar2;
    if (iVar2 == 0) {
      uVar4 = 0x50;
LAB_143d996f8:
      ERR_put_error(4,0x80,0x8a,"crypto\\rsa\\rsa_x931.c",uVar4);
      return 0xffffffff;
    }
  }
  else {
    uVar3 = param_4 - 2;
  }
  if (_Src[(int)uVar3] != -0x34) {
    ERR_put_error(4,0x80,0x8b,"crypto\\rsa\\rsa_x931.c",0x59);
    return 0xffffffff;
  }
  _guard_xfg_dispatch_icall_nop(param_1,_Src,(ulonglong)uVar3);
  return uVar3;
}



// FUNCTION 143d997b0 DH_generate_parameters_ex body=42 status=ok
// SIG undefined DH_generate_parameters_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DH_generate_parameters_ex(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x78) + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d997ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  dh_builtin_genparams();
  return;
}



// FUNCTION 143d997e0 dh_builtin_genparams body=495 status=ok
// SIG undefined dh_builtin_genparams(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dh_builtin_genparams(longlong param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar2 = BN_CTX_new();
  if (lVar2 != 0) {
    BN_CTX_start(lVar2);
    uVar3 = BN_CTX_get(lVar2);
    lVar4 = BN_CTX_get(lVar2);
    if (lVar4 != 0) {
      if (*(longlong *)(param_1 + 8) == 0) {
        lVar5 = BN_new();
        *(longlong *)(param_1 + 8) = lVar5;
        if (lVar5 == 0) goto LAB_143d99971;
      }
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar5 = BN_new();
        *(longlong *)(param_1 + 0x10) = lVar5;
        if (lVar5 == 0) goto LAB_143d99971;
      }
      if (param_3 < 2) {
        uVar3 = CONCAT44(uVar7,0x51);
        ERR_put_error(5,0x6a,0x65,"crypto\\dh\\dh_gen.c",uVar3);
        uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      else {
        uVar6 = 1;
        if (param_3 == 2) {
          iVar1 = BN_set_word(uVar3,0x18);
          if (iVar1 != 0) {
            iVar1 = BN_set_word(lVar4,0xb);
            goto joined_r0x000143d99928;
          }
        }
        else if (param_3 == 5) {
          iVar1 = BN_set_word(uVar3,10);
          if (iVar1 != 0) {
            iVar1 = BN_set_word(lVar4,3);
joined_r0x000143d99928:
            if (iVar1 != 0) {
              iVar1 = BN_generate_prime_ex
                                (*(undefined8 *)(param_1 + 8),param_2,1,uVar3,lVar4,param_4);
              uVar7 = (undefined4)((ulonglong)lVar4 >> 0x20);
              if (((iVar1 != 0) && (iVar1 = BN_GENCB_call(param_4,3), iVar1 != 0)) &&
                 (iVar1 = BN_set_word(*(undefined8 *)(param_1 + 0x10),(longlong)param_3), iVar1 != 0
                 )) goto LAB_143d99993;
            }
          }
        }
        else {
          iVar1 = BN_set_word(uVar3,2);
          if (iVar1 != 0) {
            iVar1 = BN_set_word(lVar4,1);
            goto joined_r0x000143d99928;
          }
        }
      }
    }
  }
LAB_143d99971:
  ERR_put_error(5,0x6a,3,"crypto\\dh\\dh_gen.c",CONCAT44(uVar7,0x79));
  uVar6 = 0;
LAB_143d99993:
  if (lVar2 != 0) {
    BN_CTX_end(lVar2);
    BN_CTX_free(lVar2);
  }
  return uVar6;
}



// FUNCTION 143d999d0 DH_new_by_nid body=318 status=ok
// SIG undefined DH_new_by_nid(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DH_new_by_nid(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0x466) {
    lVar1 = DH_new();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0xe1;
      *(undefined ***)(lVar1 + 8) = &PTR_DAT_145d8b3a8;
      *(undefined ***)(lVar1 + 0x10) = &PTR_DAT_145d8b420;
      return lVar1;
    }
  }
  else if (param_1 == 0x467) {
    lVar1 = DH_new();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0x113;
      *(undefined ***)(lVar1 + 8) = &PTR_DAT_145d8b3c0;
      *(undefined ***)(lVar1 + 0x10) = &PTR_DAT_145d8b420;
      return lVar1;
    }
  }
  else if (param_1 == 0x468) {
    lVar1 = DH_new();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0x145;
      *(undefined ***)(lVar1 + 8) = &PTR_DAT_145d8b3d8;
      *(undefined ***)(lVar1 + 0x10) = &PTR_DAT_145d8b420;
      return lVar1;
    }
  }
  else if (param_1 == 0x469) {
    lVar1 = DH_new();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0x177;
      *(undefined ***)(lVar1 + 8) = &PTR_DAT_145d8b3f0;
      *(undefined ***)(lVar1 + 0x10) = &PTR_DAT_145d8b420;
      return lVar1;
    }
  }
  else if (param_1 == 0x46a) {
    lVar1 = DH_new();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 400;
      *(undefined ***)(lVar1 + 8) = &PTR_DAT_145d8b408;
      *(undefined ***)(lVar1 + 0x10) = &PTR_DAT_145d8b420;
      return lVar1;
    }
  }
  else {
    ERR_put_error(5,0x68,0x72,"crypto\\dh\\dh_rfc7919.c",0x2a);
  }
  return 0;
}



// FUNCTION 143d99b10 DH_KDF_X9_42 body=489 status=ok
// SIG undefined DH_KDF_X9_42(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
DH_KDF_X9_42(void *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,undefined8 param_5
            ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uVar7;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar7 = 0;
  uVar6 = 0;
  local_c0 = 0;
  if ((param_4 < 0x40000001) &&
     (local_b0 = param_4, local_a8 = param_3, lVar3 = EVP_MD_CTX_new(), lVar3 != 0)) {
    iVar1 = EVP_MD_size(param_8);
    uVar5 = (ulonglong)iVar1;
    local_d0 = param_7;
    local_d8 = param_6;
    local_c8 = dh_sharedinfo_encode(&local_c0,&local_b8,param_5,param_2);
    uVar4 = uVar7;
    if (local_c8 != 0) {
      iVar1 = 0;
      iVar2 = EVP_DigestInit_ex(lVar3,param_8,0);
      if (iVar2 != 0) {
        while( true ) {
          iVar1 = iVar1 + 1;
          iVar2 = EVP_DigestUpdate(lVar3,local_a8,local_b0);
          uVar4 = uVar7;
          if (iVar2 == 0) break;
          local_b8[3] = (char)iVar1;
          local_b8[2] = (char)((uint)iVar1 >> 8);
          local_b8[1] = (char)((uint)iVar1 >> 0x10);
          *local_b8 = (char)((uint)iVar1 >> 0x18);
          iVar2 = EVP_DigestUpdate(lVar3,local_c0,(longlong)local_c8);
          uVar4 = uVar6;
          if (iVar2 == 0) break;
          if (param_2 < uVar5) {
            iVar1 = EVP_DigestFinal(lVar3,local_98,0);
            if (iVar1 != 0) {
              _guard_xfg_dispatch_icall_nop(param_1,local_98,param_2);
              FUN_14004ff40(local_98,uVar5);
LAB_143d99ca2:
              uVar4 = 1;
            }
            break;
          }
          iVar2 = EVP_DigestFinal(lVar3,param_1,0);
          if (iVar2 == 0) break;
          param_2 = param_2 - uVar5;
          if (param_2 == 0) goto LAB_143d99ca2;
          param_1 = (void *)((longlong)param_1 + uVar5);
          iVar2 = EVP_DigestInit_ex(lVar3,param_8,0);
          if (iVar2 == 0) break;
        }
      }
    }
    CRYPTO_free(local_c0,"crypto\\dh\\dh_kdf.c",0x92);
    EVP_MD_CTX_free(lVar3);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143d99d00 dh_sharedinfo_encode body=507 status=ok
// SIG undefined dh_sharedinfo_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int dh_sharedinfo_encode
              (longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
              longlong param_5,ulonglong param_6)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined4 local_58;
  int local_50 [2];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined4 *local_30;
  undefined8 local_28;
  undefined4 *local_20;
  
  if ((param_6 < 0x40000001) && (param_4 < 0x40000001)) {
    local_20 = local_38;
    local_60 = &DAT_1468381f8;
    piVar6 = (int *)0x0;
    local_30 = &local_68;
    local_68 = 4;
    local_58 = 0;
    local_64 = 4;
    local_38[0] = 4;
    if (param_5 != 0) {
      local_40 = 0;
      piVar6 = local_50;
      local_50[1] = 4;
      local_48 = param_5;
      local_50[0] = (int)param_6;
    }
    local_28 = param_3;
    iVar3 = CMS_SharedInfo_encode(param_1,&local_28,piVar6);
    if (0 < iVar3) {
      lVar1 = *param_1;
      local_90 = lVar1;
      cVar2 = ASN1_get_object(&local_90,local_78,&param_6,&local_b8,iVar3);
      if (((-1 < cVar2) && ((int)param_6 == 0x10)) && (local_b8 == 0)) {
        iVar7 = (int)local_90;
        local_88 = local_90;
        iVar4 = ((int)lVar1 - iVar7) + iVar3;
        cVar2 = ASN1_get_object(&local_88,local_74,&local_b4,&local_b0,iVar4);
        if (((-1 < cVar2) && (local_b4 == 0x10)) && (local_b0 == 0)) {
          iVar5 = (int)local_88;
          local_98 = local_88;
          iVar4 = iVar4 + (iVar7 - iVar5);
          cVar2 = ASN1_get_object(&local_98,&local_a4,&local_ac,&local_a8,iVar4);
          if (((-1 < cVar2) && (local_ac == 6)) && (local_a8 == 0)) {
            local_98 = local_98 + local_a4;
            local_80 = local_98;
            cVar2 = ASN1_get_object(&local_80,local_70,&local_a0,&local_9c,
                                    iVar4 + (iVar5 - (int)local_98));
            lVar1 = local_80;
            if ((((-1 < cVar2) && (local_a0 == 4)) && (local_9c == 0)) &&
               (iVar4 = FUN_14004ffa0(local_80,&DAT_1468381f8,4), iVar4 == 0)) {
              *param_2 = lVar1;
              return iVar3;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143d99f00 dsa_builtin_paramgen body=2146 status=ok
// SIG undefined dsa_builtin_paramgen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
dsa_builtin_paramgen
          (longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,void *param_5,
          ulonglong param_6,void *param_7,int *param_8,undefined4 *param_9,longlong param_10)

{
  char *pcVar1;
  byte *pbVar2;
  ulonglong uVar3;
  size_t sVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  uint uVar17;
  size_t _Size;
  int iVar18;
  undefined4 uVar19;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  undefined4 local_178;
  longlong local_170;
  int local_168;
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  void *local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  int *local_f0;
  undefined4 *local_e8;
  undefined8 local_e0;
  ulonglong local_d8 [4];
  ulonglong local_b8 [3];
  char cStack_99;
  ulonglong local_98 [4];
  undefined1 local_78 [32];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d99f1c;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar12 = 0;
  param_3 = param_3 >> 3;
  local_e0 = param_7;
  local_e8 = param_9;
  iVar7 = (int)param_3;
  local_120 = param_5;
  local_f0 = param_8;
  local_140 = param_10;
  local_178 = 0;
  local_168 = 0;
  local_108 = 2;
  if (((iVar7 - 0x14U & 0xfffffff3) == 0) && (iVar7 != 0x18)) {
    local_158 = param_4;
    local_f8 = param_1;
    if (param_4 == 0) {
      if (iVar7 == 0x14) {
        param_4 = EVP_sha1();
        local_158 = param_4;
      }
      else if (iVar7 == 0x1c) {
        param_4 = FUN_143cf0fb0();
        local_158 = param_4;
      }
      else {
        param_4 = EVP_sha256();
        local_158 = param_4;
      }
    }
    else {
      uVar6 = EVP_MD_size(param_4);
      param_3 = (ulonglong)uVar6;
    }
    uVar10 = 0x200;
    if (0x1ff < param_2) {
      uVar10 = param_2;
    }
    local_118 = uVar10 + 0x3f & 0xffffffffffffffc0;
    uVar6 = (uint)param_3;
    if (param_5 != (void *)0x0) {
      uVar10 = (ulonglong)(int)uVar6;
      if (param_6 < uVar10) {
        local_188 = CONCAT44(local_188._4_4_,0x55);
        ERR_put_error(10,0x7d,0x6e,"crypto\\dsa\\dsa_gen.c");
        goto LAB_143d9a040;
      }
      if (param_6 != uVar10) {
        param_6 = uVar10;
      }
      _guard_xfg_dispatch_icall_nop(local_78,param_5,param_6);
    }
    lVar11 = BN_MONT_CTX_new();
    uVar19 = 0;
    local_170 = lVar11;
    if ((lVar11 != 0) && (lVar12 = BN_CTX_new(), uVar19 = 0, local_160 = lVar12, lVar12 != 0)) {
      BN_CTX_start(lVar12);
      uVar13 = BN_CTX_get(lVar12);
      lVar12 = local_160;
      local_128 = BN_CTX_get(local_160);
      local_110 = BN_CTX_get(lVar12);
      local_150 = BN_CTX_get(lVar12);
      local_148 = BN_CTX_get(lVar12);
      local_100 = BN_CTX_get(lVar12);
      local_138 = BN_CTX_get(lVar12);
      local_130 = BN_CTX_get(lVar12);
      uVar10 = local_118;
      uVar19 = local_178;
      if (local_130 != 0) {
        _Size = (size_t)(int)uVar6;
        uVar14 = BN_value_one();
        iVar7 = BN_lshift(local_130,uVar14,(int)uVar10 + -1);
        lVar11 = local_170;
        uVar19 = local_178;
        if (iVar7 != 0) {
LAB_143d9a140:
          do {
            iVar7 = BN_GENCB_call(param_10,0,local_168);
            local_168 = local_168 + 1;
            lVar11 = local_170;
            uVar19 = local_178;
            if (iVar7 == 0) break;
            if (local_120 == (void *)0x0) {
              iVar7 = RAND_bytes(local_78,param_3 & 0xffffffff);
              lVar11 = local_170;
              uVar19 = local_178;
              if (iVar7 < 1) break;
            }
            else {
              local_120 = (void *)0x0;
            }
            _guard_xfg_dispatch_icall_nop(local_98,local_78,_Size);
            _guard_xfg_dispatch_icall_nop(local_b8,local_78,_Size);
            sVar4 = _Size;
            do {
              if ((longlong)(sVar4 - 1) < 0) break;
              pcVar1 = &cStack_99 + sVar4;
              *pcVar1 = *pcVar1 + '\x01';
              sVar4 = sVar4 - 1;
            } while (*pcVar1 == '\0');
            local_180 = 0;
            local_188 = param_4;
            iVar7 = EVP_Digest(local_78,_Size,local_d8,0);
            lVar11 = local_170;
            uVar19 = local_178;
            if (iVar7 == 0) break;
            local_180 = 0;
            local_188 = param_4;
            iVar7 = EVP_Digest(local_98,_Size,local_b8,0);
            lVar11 = local_170;
            uVar19 = local_178;
            if (iVar7 == 0) break;
            lVar11 = 0;
            if ((0 < (int)uVar6) && (0x3f < uVar6)) {
              uVar17 = uVar6 & 0x8000003f;
              if ((int)uVar17 < 0) {
                uVar17 = (uVar17 - 1 | 0xffffffc0) + 1;
              }
              do {
                uVar10 = *(ulonglong *)((longlong)local_b8 + lVar11 + 8);
                *(ulonglong *)((longlong)local_d8 + lVar11) =
                     *(ulonglong *)((longlong)local_b8 + lVar11) ^
                     *(ulonglong *)((longlong)local_d8 + lVar11);
                *(ulonglong *)((longlong)local_d8 + lVar11 + 8) =
                     uVar10 ^ *(ulonglong *)((longlong)local_d8 + lVar11 + 8);
                uVar10 = *(ulonglong *)(&stack0xffffffffffffff60 + lVar11);
                *(ulonglong *)((longlong)local_d8 + lVar11 + 0x10) =
                     *(ulonglong *)((longlong)local_b8 + lVar11 + 0x10) ^
                     *(ulonglong *)((longlong)local_d8 + lVar11 + 0x10);
                *(ulonglong *)((longlong)local_d8 + lVar11 + 0x18) =
                     uVar10 ^ *(ulonglong *)((longlong)local_d8 + lVar11 + 0x18);
                uVar10 = *(ulonglong *)((longlong)local_98 + lVar11 + 8);
                *(ulonglong *)((longlong)local_b8 + lVar11) =
                     *(ulonglong *)((longlong)local_98 + lVar11) ^
                     *(ulonglong *)((longlong)local_b8 + lVar11);
                *(ulonglong *)((longlong)local_b8 + lVar11 + 8) =
                     uVar10 ^ *(ulonglong *)((longlong)local_b8 + lVar11 + 8);
                uVar10 = *(ulonglong *)(&stack0xffffffffffffff60 + lVar11);
                uVar3 = *(ulonglong *)((longlong)local_98 + lVar11 + 0x18);
                *(ulonglong *)((longlong)local_b8 + lVar11 + 0x10) =
                     *(ulonglong *)((longlong)local_98 + lVar11 + 0x10) ^
                     *(ulonglong *)((longlong)local_b8 + lVar11 + 0x10);
                *(ulonglong *)(&stack0xffffffffffffff60 + lVar11) = uVar3 ^ uVar10;
                lVar11 = lVar11 + 0x40;
              } while (lVar11 < (int)(uVar6 - uVar17));
            }
            for (; lVar11 < (longlong)_Size; lVar11 = lVar11 + 1) {
              *(byte *)((longlong)local_d8 + lVar11) =
                   *(byte *)((longlong)local_d8 + lVar11) ^ *(byte *)((longlong)local_b8 + lVar11);
            }
            local_d8[0]._0_1_ = (byte)local_d8[0] | 0x80;
            pbVar2 = (byte *)((longlong)local_d8 + (_Size - 1));
            *pbVar2 = *pbVar2 | 1;
            lVar15 = BN_bin2bn(local_d8,param_3 & 0xffffffff,local_150);
            lVar11 = local_170;
            uVar19 = local_178;
            if (lVar15 == 0) break;
            local_188 = param_10;
            iVar7 = BN_is_prime_fasttest_ex(local_150,0x40,lVar12);
            if (0 < iVar7) {
              iVar7 = BN_GENCB_call(param_10,2);
              lVar11 = local_170;
              uVar19 = local_178;
              if ((iVar7 == 0) ||
                 (iVar7 = BN_GENCB_call(param_10,3), lVar11 = local_170, uVar19 = local_178,
                 iVar7 == 0)) break;
              uVar10 = local_118 - 1;
              iVar7 = 0;
              uVar14 = local_110;
              do {
                if ((iVar7 != 0) &&
                   (iVar8 = BN_GENCB_call(local_140,0,iVar7), lVar11 = local_170, uVar19 = local_178
                   , iVar8 == 0)) goto LAB_143d9a181;
                BN_set_word(uVar14,0);
                iVar8 = 0;
                iVar18 = (int)(uVar10 / 0xa0);
                sVar4 = _Size;
                if (-1 < iVar18) {
joined_r0x000143d9a3c8:
                  do {
                    if (-1 < (longlong)(sVar4 - 1)) {
                      pcVar1 = (char *)((longlong)local_98 + (sVar4 - 1));
                      *pcVar1 = *pcVar1 + '\x01';
                      sVar4 = sVar4 - 1;
                      if (*pcVar1 == '\0') goto joined_r0x000143d9a3c8;
                    }
                    local_180 = 0;
                    local_188 = local_158;
                    iVar9 = EVP_Digest(local_98,_Size,local_d8,0);
                    lVar11 = local_170;
                    uVar19 = local_178;
                    if ((((iVar9 == 0) ||
                         (lVar12 = BN_bin2bn(local_d8,param_3 & 0xffffffff,uVar13),
                         lVar11 = local_170, uVar19 = local_178, lVar12 == 0)) ||
                        (iVar9 = BN_lshift(uVar13,uVar13,uVar6 * 8 * iVar8), lVar11 = local_170,
                        uVar19 = local_178, iVar9 == 0)) ||
                       (iVar9 = BN_add(local_110,local_110,uVar13), lVar11 = local_170,
                       uVar19 = local_178, iVar9 == 0)) goto LAB_143d9a181;
                    iVar8 = iVar8 + 1;
                    sVar4 = _Size;
                  } while (iVar8 <= iVar18);
                }
                uVar14 = local_110;
                iVar8 = BN_mask_bits(local_110,(int)local_118 + -1);
                lVar11 = local_170;
                uVar19 = local_178;
                if (((iVar8 == 0) ||
                    (lVar12 = BN_copy(local_148,uVar14), lVar11 = local_170, uVar19 = local_178,
                    lVar12 == 0)) ||
                   ((iVar8 = BN_add(local_148,local_148,local_130), lVar11 = local_170,
                    uVar19 = local_178, iVar8 == 0 ||
                    (iVar8 = BN_lshift1(uVar13,local_150), lVar11 = local_170, uVar19 = local_178,
                    iVar8 == 0)))) goto LAB_143d9a181;
                local_188 = local_160;
                iVar8 = BN_div(0,local_100,local_148);
                lVar11 = local_170;
                uVar19 = local_178;
                if (iVar8 == 0) goto LAB_143d9a181;
                uVar16 = BN_value_one();
                iVar8 = BN_sub(uVar13,local_100,uVar16);
                lVar11 = local_170;
                uVar19 = local_178;
                if ((iVar8 == 0) ||
                   (iVar8 = BN_sub(local_138,local_148,uVar13), lVar11 = local_170,
                   uVar19 = local_178, iVar8 == 0)) goto LAB_143d9a181;
                iVar8 = BN_cmp(local_138);
                if (-1 < iVar8) {
                  local_188 = local_140;
                  iVar8 = BN_is_prime_fasttest_ex(local_138,0x40,local_160);
                  lVar12 = local_140;
                  if (0 < iVar8) {
                    iVar8 = BN_GENCB_call(local_140,2,1);
                    lVar11 = local_170;
                    uVar19 = local_178;
                    if (iVar8 == 0) goto LAB_143d9a181;
                    uVar16 = BN_value_one();
                    lVar5 = local_130;
                    uVar14 = local_138;
                    iVar8 = BN_sub(local_130,local_138,uVar16);
                    lVar15 = local_160;
                    lVar11 = local_170;
                    uVar19 = local_178;
                    if (iVar8 == 0) goto LAB_143d9a181;
                    local_188 = local_160;
                    iVar8 = BN_div(uVar13,0,lVar5,local_150);
                    lVar11 = local_170;
                    uVar19 = local_178;
                    if (((iVar8 == 0) ||
                        (iVar8 = BN_set_word(lVar5,2), lVar11 = local_170, uVar19 = local_178,
                        iVar8 == 0)) ||
                       (iVar8 = BN_MONT_CTX_set(local_170,uVar14,lVar15), lVar11 = local_170,
                       uVar19 = local_178, iVar8 == 0)) goto LAB_143d9a181;
                    local_180 = local_170;
                    local_188 = lVar15;
                    iVar8 = BN_mod_exp_mont(local_128,lVar5,uVar13,uVar14);
                    goto joined_r0x000143d9a639;
                  }
                  lVar11 = local_170;
                  uVar19 = local_178;
                  if (iVar8 != 0) goto LAB_143d9a181;
                }
                iVar7 = iVar7 + 1;
                param_10 = local_140;
                lVar12 = local_160;
                param_4 = local_158;
              } while (iVar7 < 0x1000);
              goto LAB_143d9a140;
            }
            lVar11 = local_170;
            uVar19 = local_178;
          } while (iVar7 == 0);
        }
      }
LAB_143d9a181:
      lVar12 = local_160;
      BN_CTX_end(local_160);
    }
    BN_CTX_free(lVar12);
    BN_MONT_CTX_free(lVar11);
  }
  else {
LAB_143d9a040:
    uVar19 = 0;
  }
  return uVar19;
joined_r0x000143d9a639:
  lVar11 = local_170;
  uVar19 = local_178;
  if (iVar8 == 0) goto LAB_143d9a181;
  iVar8 = BN_is_one(local_128);
  if (iVar8 == 0) {
    iVar8 = BN_GENCB_call(lVar12,3,1);
    lVar12 = local_f8;
    lVar11 = local_170;
    uVar19 = local_178;
    if (iVar8 != 0) {
      local_178 = 1;
      BN_free(*(undefined8 *)(local_f8 + 8));
      BN_free(*(undefined8 *)(lVar12 + 0x10));
      BN_free(*(undefined8 *)(lVar12 + 0x18));
      uVar13 = BN_dup(uVar14);
      *(undefined8 *)(lVar12 + 8) = uVar13;
      uVar13 = BN_dup(local_150);
      *(undefined8 *)(lVar12 + 0x10) = uVar13;
      lVar15 = BN_dup(local_128);
      *(longlong *)(lVar12 + 0x18) = lVar15;
      lVar11 = local_170;
      if (((*(longlong *)(lVar12 + 8) == 0) || (*(longlong *)(lVar12 + 0x10) == 0)) || (lVar15 == 0)
         ) {
        uVar19 = 0;
      }
      else {
        if (local_f0 != (int *)0x0) {
          *local_f0 = iVar7;
        }
        if (local_e8 != (undefined4 *)0x0) {
          *local_e8 = (int)local_108;
        }
        uVar19 = local_178;
        if (local_e0 != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(local_e0,local_78,_Size);
          lVar11 = local_170;
          uVar19 = local_178;
        }
      }
    }
    goto LAB_143d9a181;
  }
  uVar16 = BN_value_one();
  iVar8 = BN_add(lVar5,lVar5,uVar16);
  lVar11 = local_170;
  uVar19 = local_178;
  if (iVar8 == 0) goto LAB_143d9a181;
  local_108 = CONCAT44(local_108._4_4_,(int)local_108 + 1);
  local_180 = local_170;
  local_188 = lVar15;
  iVar8 = BN_mod_exp_mont(local_128,lVar5,uVar13,uVar14);
  goto joined_r0x000143d9a639;
}



// FUNCTION 143d9a770 dsa_builtin_paramgen2 body=2831 status=ok
// SIG undefined dsa_builtin_paramgen2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
dsa_builtin_paramgen2
          (longlong param_1,longlong param_2,ulonglong param_3,void *param_4,void *param_5,
          size_t param_6,int param_7,void *param_8,undefined4 *param_9,undefined4 *param_10,
          void *param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined1 auStack_198 [32];
  void *local_178;
  longlong local_170;
  undefined4 local_168;
  longlong local_160;
  void *local_158;
  int local_150;
  uint local_14c;
  void *local_148;
  longlong local_140;
  ulonglong local_138;
  longlong local_130;
  longlong local_128;
  void *local_120;
  ulonglong local_118;
  void *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  void *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined4 *local_b0;
  undefined4 *local_a8;
  byte local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143d9a787;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_e8 = param_8;
  local_a8 = param_10;
  local_120 = param_11;
  pvVar4 = (void *)0x0;
  uVar20 = param_3 >> 3;
  local_110 = (void *)0x0;
  local_150 = 0;
  local_c8 = param_5;
  local_138 = param_6;
  local_b0 = param_9;
  local_168 = 0xffffffff;
  local_148 = param_4;
  local_108 = param_2;
  local_f8 = param_1;
  local_b8 = uVar20;
  local_128 = EVP_MD_CTX_new();
  local_118 = 2;
  pvVar5 = pvVar4;
  if (local_128 == 0) {
    lVar18 = 0;
    pvVar7 = (void *)0x0;
    uVar22 = local_168;
    goto LAB_143d9b1f5;
  }
  if (param_4 == (void *)0x0) {
    if (param_3 == 0xa0) {
      param_4 = (void *)EVP_sha1();
      local_148 = param_4;
    }
    else if (param_3 == 0xe0) {
      param_4 = (void *)FUN_143cf0fb0();
      local_148 = param_4;
    }
    else {
      param_4 = (void *)EVP_sha256();
      local_148 = param_4;
    }
  }
  local_14c = EVP_MD_size(param_4);
  uVar19 = (ulonglong)(int)local_14c;
  if (((*(longlong *)(local_f8 + 8) == 0) || (*(longlong *)(local_f8 + 0x10) == 0)) ||
     (-1 < param_7)) {
    if (param_6 == 0) {
      param_6 = uVar19;
      local_138 = uVar19;
    }
    pvVar5 = (void *)CRYPTO_malloc(param_6,"crypto\\dsa\\dsa_gen.c",0x159);
    pvVar6 = local_e8;
    if (local_e8 == (void *)0x0) {
      pvVar6 = (void *)CRYPTO_malloc(param_6,"crypto\\dsa\\dsa_gen.c",0x15e);
    }
    pvVar7 = pvVar4;
    local_110 = pvVar6;
    if ((pvVar5 != (void *)0x0) && (pvVar7 = (void *)0x0, pvVar6 != (void *)0x0)) {
      if (param_5 != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(pvVar5,param_5,param_6);
      }
      goto LAB_143d9a944;
    }
  }
  else {
LAB_143d9a944:
    pvVar7 = (void *)BN_CTX_new();
    local_158 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      local_160 = BN_MONT_CTX_new();
      lVar18 = local_160;
      uVar22 = local_168;
      if (local_160 != 0) {
        BN_CTX_start(pvVar7);
        uVar8 = BN_CTX_get(pvVar7);
        local_f0 = BN_CTX_get(pvVar7);
        uVar9 = BN_CTX_get(pvVar7);
        local_d8 = uVar9;
        local_c0 = BN_CTX_get(local_158);
        local_d0 = BN_CTX_get(local_158);
        local_100 = BN_CTX_get(local_158);
        lVar18 = local_160;
        pvVar7 = local_158;
        uVar22 = local_168;
        if (local_100 != 0) {
          local_140 = *(longlong *)(local_f8 + 8);
          if ((local_140 == 0) || (local_130 = *(longlong *)(local_f8 + 0x10), local_130 == 0)) {
            local_140 = BN_CTX_get(local_158);
            local_130 = BN_CTX_get(local_158);
            lVar14 = local_108;
            lVar18 = local_160;
            pvVar7 = local_158;
            uVar22 = local_168;
            if (local_130 != 0) {
              uVar10 = BN_value_one();
              iVar3 = BN_lshift(local_100,uVar10,(int)lVar14 + -1);
              lVar18 = local_160;
              pvVar7 = local_158;
              uVar22 = local_168;
              if (iVar3 != 0) {
                local_e0 = (longlong)(int)uVar20;
                pvVar6 = local_120;
                pvVar4 = local_c8;
                do {
                  while( true ) {
                    iVar3 = BN_GENCB_call(pvVar6,0,local_150);
                    local_150 = local_150 + 1;
                    lVar18 = local_160;
                    pvVar7 = local_158;
                    uVar22 = local_168;
                    if ((iVar3 == 0) ||
                       ((pvVar4 == (void *)0x0 &&
                        (iVar3 = RAND_bytes(pvVar5,param_6 & 0xffffffff), lVar18 = local_160,
                        pvVar7 = local_158, uVar22 = local_168, iVar3 < 1)))) goto LAB_143d9b1f5;
                    local_170 = 0;
                    local_178 = local_148;
                    iVar3 = EVP_Digest(pvVar5,param_6,local_98,0);
                    lVar18 = local_160;
                    pvVar7 = local_158;
                    uVar22 = local_168;
                    if (iVar3 == 0) goto LAB_143d9b1f5;
                    iVar3 = (int)uVar19;
                    pbVar17 = local_98;
                    iVar1 = (int)uVar20;
                    if (iVar1 < iVar3) {
                      pbVar17 = pbVar17 + (iVar3 - local_e0);
                    }
                    if (iVar3 < iVar1) {
                      _guard_xfg_dispatch_icall_nop(local_98 + iVar3,0,(longlong)(iVar1 - iVar3));
                    }
                    *pbVar17 = *pbVar17 | 0x80;
                    pbVar17[local_e0 + -1] = pbVar17[local_e0 + -1] | 1;
                    lVar14 = BN_bin2bn(pbVar17,uVar20 & 0xffffffff,local_130);
                    pvVar6 = local_120;
                    lVar18 = local_160;
                    pvVar7 = local_158;
                    uVar22 = local_168;
                    if (lVar14 == 0) goto LAB_143d9b1f5;
                    local_178 = local_120;
                    iVar1 = BN_is_prime_fasttest_ex(local_130);
                    if (iVar1 < 1) break;
                    if (local_e8 != (void *)0x0) {
                      _guard_xfg_dispatch_icall_nop(local_e8,pvVar5,param_6);
                    }
                    iVar1 = BN_GENCB_call(pvVar6,2);
                    lVar18 = local_160;
                    pvVar7 = local_158;
                    uVar22 = local_168;
                    if ((iVar1 == 0) ||
                       (iVar1 = BN_GENCB_call(pvVar6), lVar18 = local_160, pvVar7 = local_158,
                       uVar22 = local_168, iVar1 == 0)) goto LAB_143d9b1f5;
                    uVar20 = local_108 - 1;
                    pvVar4 = (void *)0x0;
                    do {
                      if (((int)pvVar4 != 0) &&
                         (iVar1 = BN_GENCB_call(pvVar6,0,pvVar4), lVar18 = local_160,
                         pvVar7 = local_158, uVar22 = local_168, iVar1 == 0)) goto LAB_143d9b1f5;
                      BN_set_word(uVar9,0);
                      iVar1 = 0;
                      iVar21 = (int)(uVar20 / (ulonglong)(longlong)(iVar3 * 8));
                      if (-1 < iVar21) {
                        iVar16 = 0;
                        lVar14 = (longlong)((int)local_138 + -1);
                        do {
                          if (-1 < lVar14) {
                            pcVar11 = (char *)(lVar14 + (longlong)pvVar5);
                            do {
                              *pcVar11 = *pcVar11 + '\x01';
                              if (*pcVar11 != '\0') break;
                              pcVar11 = pcVar11 + -1;
                            } while (-1 < (longlong)pcVar11 - (longlong)pvVar5);
                          }
                          local_170 = 0;
                          local_178 = local_148;
                          iVar2 = EVP_Digest(pvVar5,local_138,local_98,0);
                          lVar18 = local_160;
                          pvVar7 = local_158;
                          uVar22 = local_168;
                          if ((((iVar2 == 0) ||
                               (lVar13 = BN_bin2bn(local_98,local_14c,uVar8), lVar18 = local_160,
                               pvVar7 = local_158, uVar22 = local_168, lVar13 == 0)) ||
                              (iVar2 = BN_lshift(uVar8,uVar8,iVar16), lVar18 = local_160,
                              pvVar7 = local_158, uVar22 = local_168, iVar2 == 0)) ||
                             (iVar2 = BN_add(local_d8,local_d8,uVar8), lVar18 = local_160,
                             pvVar7 = local_158, uVar22 = local_168, iVar2 == 0))
                          goto LAB_143d9b1f5;
                          iVar1 = iVar1 + 1;
                          iVar16 = iVar16 + iVar3 * 8;
                          uVar9 = local_d8;
                        } while (iVar1 <= iVar21);
                      }
                      iVar1 = BN_mask_bits(uVar9,(int)local_108 + -1);
                      uVar10 = local_c0;
                      lVar18 = local_160;
                      pvVar7 = local_158;
                      uVar22 = local_168;
                      if (((iVar1 == 0) ||
                          (lVar14 = BN_copy(local_c0,uVar9), lVar18 = local_160, pvVar7 = local_158,
                          uVar22 = local_168, lVar14 == 0)) ||
                         ((iVar1 = BN_add(uVar10,uVar10,local_100), lVar18 = local_160,
                          pvVar7 = local_158, uVar22 = local_168, iVar1 == 0 ||
                          (iVar1 = BN_lshift1(uVar8,local_130), pvVar7 = local_158,
                          lVar18 = local_160, uVar22 = local_168, iVar1 == 0)))) goto LAB_143d9b1f5;
                      local_178 = local_158;
                      iVar1 = BN_div(0,local_d0,uVar10);
                      lVar18 = local_160;
                      uVar22 = local_168;
                      if (iVar1 == 0) goto LAB_143d9b1f5;
                      uVar12 = BN_value_one();
                      iVar1 = BN_sub(uVar8,local_d0,uVar12);
                      lVar14 = local_140;
                      lVar18 = local_160;
                      uVar22 = local_168;
                      if ((iVar1 == 0) ||
                         (iVar1 = BN_sub(local_140,uVar10,uVar8), lVar18 = local_160,
                         uVar22 = local_168, iVar1 == 0)) goto LAB_143d9b1f5;
                      iVar1 = BN_cmp(lVar14);
                      pvVar6 = local_120;
                      if (-1 < iVar1) {
                        local_178 = local_120;
                        iVar1 = BN_is_prime_fasttest_ex(local_140,0x40,pvVar7);
                        if (0 < iVar1) {
                          iVar3 = BN_GENCB_call(pvVar6,2,1);
                          lVar18 = local_160;
                          uVar22 = local_168;
                          if (iVar3 == 0) goto LAB_143d9b1f5;
                          uVar19 = (ulonglong)local_14c;
                          param_4 = local_148;
                          param_6 = local_138;
                          goto LAB_143d9aebc;
                        }
                        lVar18 = local_160;
                        uVar22 = local_168;
                        if (iVar1 != 0) goto LAB_143d9b1f5;
                      }
                      uVar15 = (int)pvVar4 + 1;
                      pvVar4 = (void *)(ulonglong)uVar15;
                    } while ((int)uVar15 < (int)local_108 * 4);
                    if (local_c8 != (void *)0x0) {
                      local_178 = (void *)CONCAT44(local_178._4_4_,0x208);
                      ERR_put_error(10,0x7e,0x70,"crypto\\dsa\\dsa_gen.c");
                      lVar18 = local_160;
                      uVar22 = 0;
                      goto LAB_143d9b1f5;
                    }
                    uVar19 = (ulonglong)local_14c;
                    pvVar4 = (void *)0x0;
                    pvVar6 = local_120;
                    param_6 = local_138;
                    uVar20 = local_b8;
                  }
                  lVar18 = local_160;
                  pvVar7 = local_158;
                  uVar22 = local_168;
                  if (iVar1 != 0) goto LAB_143d9b1f5;
                } while (pvVar4 == (void *)0x0);
                local_178 = (void *)CONCAT44(local_178._4_4_,0x1af);
                ERR_put_error(10,0x7e,0x71,"crypto\\dsa\\dsa_gen.c");
                lVar18 = local_160;
                pvVar7 = local_158;
                uVar22 = 0;
              }
            }
          }
          else {
            if (-1 < param_7) {
              _guard_xfg_dispatch_icall_nop(local_110,pvVar5,param_6);
              pvVar4 = (void *)0x0;
            }
LAB_143d9aebc:
            uVar9 = BN_value_one();
            lVar14 = local_100;
            iVar3 = BN_sub(local_100,local_140,uVar9);
            pvVar7 = local_158;
            lVar18 = local_160;
            uVar22 = local_168;
            if (iVar3 != 0) {
              local_178 = local_158;
              iVar3 = BN_div(uVar8,0,lVar14,local_130);
              lVar18 = local_160;
              uVar22 = local_168;
              if (iVar3 != 0) {
                if (param_7 < 0) {
                  iVar3 = BN_set_word(lVar14,2);
                  lVar18 = local_160;
                  uVar22 = local_168;
                  if (iVar3 == 0) goto LAB_143d9b1f5;
                }
                else {
                  local_118 = CONCAT44(local_118._4_4_,1);
                }
                iVar3 = BN_MONT_CTX_set(local_160,local_140,pvVar7);
                lVar18 = local_160;
                uVar22 = local_168;
                if (iVar3 != 0) {
                  do {
                    if (-1 < param_7) {
                      local_98[0] = (byte)param_7;
                      local_98[2] = (byte)local_118;
                      local_98[1] = (byte)(local_118 >> 8);
                      iVar3 = EVP_DigestInit_ex(local_128,param_4,0);
                      lVar18 = local_160;
                      uVar22 = local_168;
                      if ((((iVar3 == 0) ||
                           (iVar3 = EVP_DigestUpdate(local_128,local_110,param_6),
                           lVar18 = local_160, uVar22 = local_168, iVar3 == 0)) ||
                          (iVar3 = EVP_DigestUpdate(local_128,"ggencrypto\\dsa\\dsa_gen.c",4),
                          lVar18 = local_160, uVar22 = local_168, iVar3 == 0)) ||
                         (((iVar3 = EVP_DigestUpdate(local_128,local_98,3), lVar18 = local_160,
                           uVar22 = local_168, iVar3 == 0 ||
                           (iVar3 = EVP_DigestFinal_ex(local_128,local_98,0), lVar18 = local_160,
                           uVar22 = local_168, iVar3 == 0)) ||
                          (lVar13 = BN_bin2bn(local_98,uVar19 & 0xffffffff,lVar14),
                          lVar18 = local_160, uVar22 = local_168, lVar13 == 0)))) break;
                    }
                    do {
                      local_170 = local_160;
                      local_178 = pvVar7;
                      iVar3 = BN_mod_exp_mont(local_f0,lVar14,uVar8,local_140);
                      lVar18 = local_160;
                      uVar22 = local_168;
                      if (iVar3 == 0) goto LAB_143d9b1f5;
                      iVar3 = BN_is_one(local_f0);
                      if (iVar3 == 0) {
                        iVar3 = BN_GENCB_call(local_120,3,1);
                        lVar13 = local_f8;
                        lVar14 = local_140;
                        lVar18 = local_160;
                        uVar22 = local_168;
                        if (iVar3 != 0) {
                          if (local_140 != *(longlong *)(local_f8 + 8)) {
                            BN_free();
                            uVar9 = BN_dup(lVar14);
                            *(undefined8 *)(lVar13 + 8) = uVar9;
                          }
                          lVar18 = local_130;
                          if (local_130 != *(longlong *)(lVar13 + 0x10)) {
                            BN_free();
                            uVar9 = BN_dup(lVar18);
                            *(undefined8 *)(lVar13 + 0x10) = uVar9;
                          }
                          BN_free(*(undefined8 *)(lVar13 + 0x18));
                          lVar14 = BN_dup(local_f0);
                          *(longlong *)(lVar13 + 0x18) = lVar14;
                          lVar18 = local_160;
                          if (((*(longlong *)(lVar13 + 8) == 0) ||
                              (*(longlong *)(lVar13 + 0x10) == 0)) || (lVar14 == 0)) {
                            uVar22 = 0xffffffff;
                          }
                          else {
                            if (local_b0 != (undefined4 *)0x0) {
                              *local_b0 = (int)pvVar4;
                            }
                            uVar22 = 1;
                            if (local_a8 != (undefined4 *)0x0) {
                              *local_a8 = (int)local_118;
                            }
                          }
                        }
                        goto LAB_143d9b1f5;
                      }
                      if (param_7 < 0) {
                        BN_value_one();
                        iVar3 = BN_add(lVar14,lVar14);
                        lVar18 = local_160;
                        uVar22 = local_168;
                        if (iVar3 == 0) goto LAB_143d9b1f5;
                      }
                      uVar15 = (int)local_118 + 1;
                      local_118 = (ulonglong)uVar15;
                    } while (param_7 < 0);
                    lVar18 = local_160;
                    uVar22 = local_168;
                    if (0xffff < uVar15) break;
                  } while( true );
                }
              }
            }
          }
        }
      }
      goto LAB_143d9b1f5;
    }
  }
  lVar18 = 0;
  uVar22 = local_168;
LAB_143d9b1f5:
  CRYPTO_free(pvVar5,"crypto\\dsa\\dsa_gen.c",0x259);
  if (local_e8 != local_110) {
    CRYPTO_free(local_110,"crypto\\dsa\\dsa_gen.c",0x25b);
  }
  if (pvVar7 != (void *)0x0) {
    BN_CTX_end(pvVar7);
  }
  BN_CTX_free(pvVar7);
  BN_MONT_CTX_free(lVar18);
  EVP_MD_CTX_free(local_128);
  return uVar22;
}



// FUNCTION 143d9b280 DSA_generate_key body=333 status=ok
// SIG undefined DSA_generate_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong DSA_generate_key(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x50) + 0x58);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d9b2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*UNRECOVERED_JUMPTABLE)();
    return lVar2;
  }
  lVar6 = 0;
  lVar3 = BN_CTX_new();
  lVar4 = lVar6;
  lVar2 = lVar6;
  lVar7 = lVar6;
  if ((lVar3 != 0) &&
     ((lVar2 = *(longlong *)(param_1 + 0x28), lVar4 = 0, lVar2 != 0 ||
      (lVar2 = BN_secure_new(), lVar2 != 0)))) {
    do {
      iVar1 = BN_priv_rand_range(lVar2,*(undefined8 *)(param_1 + 0x10));
      if (iVar1 == 0) goto LAB_143d9b38c;
      iVar1 = BN_is_zero(lVar2);
    } while (iVar1 != 0);
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (((lVar4 != 0) || (lVar4 = BN_new(), lVar7 = 0, lVar4 != 0)) &&
       (lVar5 = BN_new(), lVar7 = lVar6, lVar5 != 0)) {
      BN_with_flags(lVar5,lVar2,4);
      iVar1 = BN_mod_exp(lVar4,*(undefined8 *)(param_1 + 0x18),lVar5,*(undefined8 *)(param_1 + 8),
                         lVar3);
      BN_free(lVar5);
      if (iVar1 != 0) {
        *(longlong *)(param_1 + 0x28) = lVar2;
        lVar7 = 1;
        *(longlong *)(param_1 + 0x20) = lVar4;
      }
    }
  }
LAB_143d9b38c:
  if (lVar4 != *(longlong *)(param_1 + 0x20)) {
    BN_free(lVar4);
  }
  if (lVar2 != *(longlong *)(param_1 + 0x28)) {
    BN_free(lVar2);
  }
  BN_CTX_free(lVar3);
  return lVar7;
}



// FUNCTION 143d9b3d0 ECDH_KDF_X9_62 body=485 status=ok
// SIG undefined ECDH_KDF_X9_62(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
ECDH_KDF_X9_62(void *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
              undefined8 param_5,ulonglong param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a8 = param_5;
  local_b4 = 0;
  if ((((param_6 < 0x40000001) && (param_2 < 0x40000001)) && (param_4 < 0x40000001)) &&
     (local_b0 = param_3, lVar3 = EVP_MD_CTX_new(), lVar3 != 0)) {
    iVar1 = EVP_MD_size(param_7);
    uVar4 = (ulonglong)iVar1;
    iVar1 = 1;
    iVar2 = EVP_DigestInit_ex(lVar3,param_7,0);
    while (iVar2 != 0) {
      local_b6 = (undefined1)((uint)iVar1 >> 8);
      local_b5 = (undefined1)iVar1;
      local_b7 = (undefined1)((uint)iVar1 >> 0x10);
      local_b8 = (undefined1)((uint)iVar1 >> 0x18);
      iVar2 = EVP_DigestUpdate(lVar3,local_b0,param_4);
      if (((iVar2 == 0) || (iVar2 = EVP_DigestUpdate(lVar3,&local_b8,4), iVar2 == 0)) ||
         (iVar2 = EVP_DigestUpdate(lVar3,local_a8,param_6), iVar2 == 0)) break;
      if (param_2 < uVar4) {
        iVar1 = EVP_DigestFinal(lVar3,local_98,0);
        if (iVar1 != 0) {
          _guard_xfg_dispatch_icall_nop(param_1,local_98,param_2);
          FUN_14004ff40(local_98,uVar4);
LAB_143d9b56b:
          local_b4 = 1;
        }
        break;
      }
      iVar2 = EVP_DigestFinal(lVar3,param_1,0);
      if (iVar2 == 0) break;
      param_2 = param_2 - uVar4;
      if (param_2 == 0) goto LAB_143d9b56b;
      param_1 = (void *)((longlong)param_1 + uVar4);
      iVar1 = iVar1 + 1;
      iVar2 = EVP_DigestInit_ex(lVar3,param_7,0);
    }
    EVP_MD_CTX_free(lVar3);
  }
  else {
    local_b4 = 0;
  }
  return local_b4;
}



// FUNCTION 143d9b5c0 ECDSA_do_sign_ex body=78 status=ok
// SIG undefined ECDSA_do_sign_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_do_sign_ex(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000028;
  
  if (*(code **)(*in_stack_00000028 + 0x60) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d9b5e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_stack_00000028 + 0x60))();
    return uVar1;
  }
  ERR_put_error(0x10,0xfb,0x98,"crypto\\ec\\ecdsa_sign.c",0x19);
  return 0;
}



// FUNCTION 143d9b610 ECDSA_sign body=112 status=ok
// SIG undefined ECDSA_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_sign(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000030;
  
  if (*(code **)(*in_stack_00000030 + 0x50) != (code *)0x0) {
    uVar1 = (**(code **)(*in_stack_00000030 + 0x50))();
    return uVar1;
  }
  ERR_put_error(0x10,0xfe,0x98,"crypto\\ec\\ecdsa_sign.c",0x29);
  return 0;
}



// FUNCTION 143d9b680 ECDSA_do_verify body=73 status=ok
// SIG undefined ECDSA_do_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_do_verify(void)

{
  undefined8 uVar1;
  longlong *in_R9;
  
  if (*(code **)(*in_R9 + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d9b69d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_R9 + 0x70))();
    return uVar1;
  }
  ERR_put_error(0x10,0xfc,0x98,"crypto\\ec\\ecdsa_vrf.c",0x19);
  return 0;
}



// FUNCTION 143d9b6d0 ECDSA_verify body=78 status=ok
// SIG undefined ECDSA_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ECDSA_verify(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000030;
  
  if (*(code **)(*in_stack_00000030 + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d9b6f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_stack_00000030 + 0x68))();
    return uVar1;
  }
  ERR_put_error(0x10,0xfd,0x98,"crypto\\ec\\ecdsa_vrf.c",0x29);
  return 0;
}



// FUNCTION 143d9b720 sm2_compute_z_digest body=1031 status=ok
// SIG undefined sm2_compute_z_digest(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sm2_compute_z_digest
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  short sVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143d9b747;
  uVar4 = FUniqueNetIdString::GetBytes(param_5);
  lVar12 = 0;
  lVar10 = 0;
  local_68[0] = 0;
  lVar5 = EVP_MD_CTX_new();
  lVar6 = BN_CTX_new();
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar4 = 0x2e;
LAB_143d9bac6:
    uVar13 = 0x41;
    lVar10 = lVar12;
  }
  else {
    local_58 = BN_CTX_get(lVar6);
    uVar7 = BN_CTX_get(lVar6);
    local_60 = BN_CTX_get(lVar6);
    local_48 = BN_CTX_get(lVar6);
    local_50 = BN_CTX_get(lVar6);
    local_38 = BN_CTX_get(lVar6);
    local_40 = BN_CTX_get(lVar6);
    if (local_40 == 0) {
      uVar4 = 0x3b;
      goto LAB_143d9bac6;
    }
    iVar2 = EVP_DigestInit(lVar5,param_2);
    if (iVar2 == 0) {
      uVar4 = 0x40;
      uVar13 = 6;
      lVar10 = lVar12;
    }
    else if (param_4 < 0x1fff) {
      sVar11 = (short)param_4 << 3;
      local_68[0] = (undefined1)((ushort)sVar11 >> 8);
      iVar2 = EVP_DigestUpdate(lVar5,local_68,1);
      if (iVar2 == 0) {
        uVar4 = 0x50;
        uVar13 = 6;
        lVar10 = lVar12;
      }
      else {
        local_68[0] = (undefined1)sVar11;
        iVar2 = EVP_DigestUpdate(lVar5,local_68,1);
        if (iVar2 == 0) {
          uVar4 = 0x55;
          uVar13 = 6;
        }
        else {
          if (param_4 != 0) {
            iVar2 = EVP_DigestUpdate(lVar5,param_3,param_4);
            if (iVar2 == 0) {
              uVar4 = 0x5a;
              uVar13 = 6;
              goto LAB_143d9bacc;
            }
          }
          uVar8 = local_58;
          uVar9 = local_60;
          iVar2 = EC_GROUP_get_curve(uVar4,local_58,uVar7,local_60,lVar6);
          if (iVar2 == 0) {
            uVar4 = 0x5f;
            uVar13 = 0x10;
          }
          else {
            iVar2 = BN_num_bits(uVar8);
            iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
            lVar12 = (longlong)iVar2;
            lVar10 = CRYPTO_zalloc(lVar12,"crypto\\sm2\\sm2_sign.c",100);
            if (lVar10 == 0) {
              uVar4 = 0x66;
              lVar12 = lVar10;
              goto LAB_143d9bac6;
            }
            iVar3 = BN_bn2binpad(uVar7,lVar10,iVar2);
            if (-1 < iVar3) {
              iVar3 = EVP_DigestUpdate(lVar5,lVar10,lVar12);
              if (iVar3 != 0) {
                iVar3 = BN_bn2binpad(uVar9,lVar10,iVar2);
                if (-1 < iVar3) {
                  iVar3 = EVP_DigestUpdate(lVar5,lVar10,lVar12);
                  if (iVar3 != 0) {
                    uVar8 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
                            ::GetBoundProgramCounterForTimerManager(uVar4);
                    uVar9 = local_48;
                    uVar7 = local_50;
                    iVar3 = EC_POINT_get_affine_coordinates(uVar4,uVar8,local_48,local_50,lVar6);
                    if (iVar3 != 0) {
                      iVar3 = BN_bn2binpad(uVar9,lVar10,iVar2);
                      if (-1 < iVar3) {
                        iVar3 = EVP_DigestUpdate(lVar5,lVar10,lVar12);
                        if (iVar3 != 0) {
                          iVar3 = BN_bn2binpad(uVar7,lVar10,iVar2);
                          if (-1 < iVar3) {
                            iVar3 = EVP_DigestUpdate(lVar5,lVar10,lVar12);
                            if (iVar3 != 0) {
                              uVar9 = USignificanceManager::GetWorld(param_5);
                              uVar7 = local_38;
                              lVar1 = local_40;
                              iVar3 = EC_POINT_get_affine_coordinates
                                                (uVar4,uVar9,local_38,local_40,lVar6);
                              if (iVar3 != 0) {
                                iVar3 = BN_bn2binpad(uVar7,lVar10,iVar2);
                                if (-1 < iVar3) {
                                  iVar3 = EVP_DigestUpdate(lVar5,lVar10,lVar12);
                                  if (iVar3 != 0) {
                                    iVar2 = BN_bn2binpad(lVar1,lVar10,iVar2);
                                    if (-1 < iVar2) {
                                      iVar2 = EVP_DigestUpdate(lVar5,lVar10,lVar12);
                                      if (iVar2 != 0) {
                                        iVar2 = EVP_DigestFinal(lVar5,param_1,0);
                                        if (iVar2 != 0) {
                                          uVar4 = 1;
                                          goto LAB_143d9bae2;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar4 = 0x7d;
            uVar13 = 0x44;
          }
        }
      }
    }
    else {
      uVar4 = 0x48;
      uVar13 = 0x6f;
      lVar10 = lVar12;
    }
  }
LAB_143d9bacc:
  ERR_put_error(0x35,0x71,uVar13,"crypto\\sm2\\sm2_sign.c",uVar4);
  uVar4 = 0;
LAB_143d9bae2:
  CRYPTO_free(lVar10,"crypto\\sm2\\sm2_sign.c",0x84);
  BN_CTX_free(lVar6);
  EVP_MD_CTX_free(lVar5);
  return uVar4;
}



// FUNCTION 143d9bb30 sm2_sig_gen body=758 status=ok
// SIG undefined sm2_sig_gen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong sm2_sig_gen(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  WriteBytesMem *this;
  uchar *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar14;
  longlong in_stack_ffffffffffffffa8;
  longlong lVar15;
  undefined4 uVar16;
  longlong lVar13;
  
  uVar3 = FNiagaraEmitterHandle::GetInstance();
  this = (WriteBytesMem *)FUniqueNetIdString::GetBytes(param_1);
  puVar4 = AK::WriteBytesMem::Bytes(this);
  lVar13 = 0;
  lVar12 = 0;
  lVar11 = 0;
  lVar14 = 0;
  lVar5 = EC_POINT_new(this);
  lVar6 = BN_CTX_new();
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar2 = 0xca;
LAB_143d9bdc8:
    uVar3 = 0x41;
  }
  else {
    BN_CTX_start(lVar6);
    uVar7 = BN_CTX_get(lVar6);
    uVar8 = BN_CTX_get(lVar6);
    uVar9 = BN_CTX_get(lVar6);
    lVar10 = BN_CTX_get(lVar6);
    uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
    if (lVar10 == 0) {
      uVar2 = 0xd4;
      lVar11 = lVar13;
      lVar12 = lVar13;
      lVar14 = lVar13;
      goto LAB_143d9bdc8;
    }
    lVar11 = BN_new();
    lVar14 = BN_new();
    uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
    if ((lVar11 == 0) || (lVar14 == 0)) {
      uVar2 = 0xe0;
      lVar12 = lVar13;
      goto LAB_143d9bdc8;
    }
    do {
      do {
        uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
        iVar1 = BN_priv_rand_range(uVar7,puVar4);
        if (iVar1 == 0) {
          uVar2 = 0xe6;
          uVar3 = 0x44;
          goto LAB_143d9bdce;
        }
        uVar16 = 0;
        iVar1 = EC_POINT_mul(this,lVar5,uVar7,0,0,lVar6);
        if (iVar1 == 0) {
LAB_143d9bda2:
          uVar2 = 0xee;
          uVar3 = 0x44;
          lVar12 = lVar13;
          goto LAB_143d9bdce;
        }
        lVar15 = lVar6;
        iVar1 = EC_POINT_get_affine_coordinates(this,lVar5,uVar9,0,lVar6);
        uVar16 = (undefined4)((ulonglong)lVar15 >> 0x20);
        if (iVar1 == 0) goto LAB_143d9bda2;
        in_stack_ffffffffffffffa8 = lVar6;
        iVar1 = BN_mod_add(lVar11,param_2,uVar9,puVar4,lVar6);
        uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
        if (iVar1 == 0) goto LAB_143d9bda2;
        iVar1 = BN_is_zero(lVar11);
      } while (iVar1 != 0);
      iVar1 = BN_add(uVar8,lVar11,uVar7);
      uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
      if (iVar1 == 0) {
        uVar2 = 0xf7;
        uVar3 = 0x44;
        lVar12 = lVar13;
        goto LAB_143d9bdce;
      }
      iVar1 = BN_cmp(uVar8,puVar4);
      uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
    } while (iVar1 == 0);
    uVar8 = BN_value_one();
    iVar1 = BN_add(lVar14,uVar3,uVar8);
    if ((iVar1 != 0) && (iVar1 = ec_group_do_inverse_ord(this,lVar14,lVar14,lVar6), iVar1 != 0)) {
      lVar12 = lVar6;
      iVar1 = BN_mod_mul(lVar10,uVar3,lVar11,puVar4,lVar6);
      uVar16 = (undefined4)((ulonglong)lVar12 >> 0x20);
      if ((iVar1 != 0) && (iVar1 = BN_sub(lVar10,uVar7,lVar10), iVar1 != 0)) {
        lVar12 = lVar6;
        iVar1 = BN_mod_mul(lVar14,lVar14,lVar10,puVar4,lVar6);
        uVar16 = (undefined4)((ulonglong)lVar12 >> 0x20);
        if (iVar1 != 0) {
          lVar12 = ECDSA_SIG_new();
          if (lVar12 != 0) {
            ECDSA_SIG_set0(lVar12,lVar11,lVar14);
            goto LAB_143d9bdf6;
          }
          uVar2 = 0x109;
          goto LAB_143d9bdc8;
        }
      }
    }
    uVar2 = 0x103;
    uVar3 = 3;
    lVar12 = lVar13;
  }
LAB_143d9bdce:
  ERR_put_error(0x35,0x6a,uVar3,"crypto\\sm2\\sm2_sign.c",CONCAT44(uVar16,uVar2));
  BN_free(lVar11);
  BN_free(lVar14);
LAB_143d9bdf6:
  BN_CTX_free(lVar6);
  EC_POINT_free(lVar5);
  return lVar12;
}



// FUNCTION 143d9be30 sm2_sig_verify body=616 status=ok
// SIG undefined sm2_sig_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 sm2_sig_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  WriteBytesMem *this;
  uchar *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143d9be54;
  uVar9 = 0;
  this = (WriteBytesMem *)FUniqueNetIdString::GetBytes();
  puVar2 = AK::WriteBytesMem::Bytes(this);
  local_48 = 0;
  local_res20 = 0;
  lVar3 = BN_CTX_new();
  lVar4 = EC_POINT_new(this);
  if ((lVar3 == 0) || (lVar4 == 0)) {
    uVar5 = 0x12d;
LAB_143d9c053:
    uVar8 = 0x41;
  }
  else {
    BN_CTX_start(lVar3);
    uVar5 = BN_CTX_get(lVar3);
    lVar6 = BN_CTX_get(lVar3);
    if (lVar6 == 0) {
      uVar5 = 0x135;
      goto LAB_143d9c053;
    }
    ECDSA_SIG_get0(param_2,&local_48,&local_res20);
    uVar7 = BN_value_one();
    iVar1 = BN_cmp(local_48,uVar7);
    if (iVar1 < 0) {
LAB_143d9c03b:
      uVar5 = 0x149;
      uVar8 = 0x65;
    }
    else {
      uVar7 = BN_value_one();
      iVar1 = BN_cmp(local_res20,uVar7);
      if (iVar1 < 0) goto LAB_143d9c03b;
      iVar1 = BN_cmp(puVar2,local_48);
      if (iVar1 < 1) goto LAB_143d9c03b;
      iVar1 = BN_cmp(puVar2,local_res20);
      if (iVar1 < 1) goto LAB_143d9c03b;
      iVar1 = BN_mod_add(uVar5,local_48,local_res20,puVar2,lVar3);
      if (iVar1 == 0) {
        uVar5 = 0x14e;
        uVar8 = 3;
      }
      else {
        iVar1 = BN_is_zero(uVar5);
        if (iVar1 == 0) {
          uVar7 = USignificanceManager::GetWorld(param_1);
          iVar1 = EC_POINT_mul(this,lVar4,local_res20,uVar7,uVar5,lVar3);
          if (iVar1 != 0) {
            iVar1 = EC_POINT_get_affine_coordinates(this,lVar4,lVar6,0,lVar3);
            if (iVar1 != 0) {
              iVar1 = BN_mod_add(uVar5,param_3,lVar6,puVar2,lVar3);
              if (iVar1 != 0) {
                iVar1 = BN_cmp(local_48,uVar5);
                if (iVar1 == 0) {
                  uVar9 = 1;
                }
                goto LAB_143d9c06d;
              }
              uVar5 = 0x15e;
              uVar8 = 3;
              goto LAB_143d9c059;
            }
          }
          uVar5 = 0x159;
          uVar8 = 0x10;
        }
        else {
          uVar5 = 0x153;
          uVar8 = 0x65;
        }
      }
    }
  }
LAB_143d9c059:
  ERR_put_error(0x35,0x6b,uVar8,"crypto\\sm2\\sm2_sign.c",uVar5);
LAB_143d9c06d:
  EC_POINT_free(lVar4);
  BN_CTX_free(lVar3);
  return uVar9;
}



// FUNCTION 143d9c0a0 sm2_sign body=206 status=ok
// SIG undefined sm2_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
sm2_sign(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_res18;
  undefined8 uVar5;
  
  uVar5 = 0x143d9c0c0;
  uVar4 = 0xffffffff;
  uVar3 = 0;
  local_res18 = param_3;
  lVar2 = BN_bin2bn(param_1,param_2,0);
  if (lVar2 == 0) {
    ERR_put_error(0x35,0x69,3,"crypto\\sm2\\sm2_sign.c",0x1a2,uVar5);
  }
  else {
    uVar3 = sm2_sig_gen(param_5,lVar2);
    iVar1 = i2d_ECDSA_SIG(uVar3,&local_res18);
    if (iVar1 < 0) {
      ERR_put_error(0x35,0x69,0x44,"crypto\\sm2\\sm2_sign.c",0x1aa,uVar5);
    }
    else {
      *param_4 = iVar1;
      uVar4 = 1;
    }
  }
  ECDSA_SIG_free(uVar3);
  BN_free(lVar2);
  return uVar4;
}



// FUNCTION 143d9c170 sm2_verify body=327 status=ok
// SIG undefined sm2_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
sm2_verify(undefined8 param_1,undefined4 param_2,void *param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong local_res18;
  undefined4 uVar6;
  void *local_28;
  void *local_20;
  
  lVar3 = 0;
  local_28 = (void *)0x0;
  uVar4 = 0xffffffff;
  local_20 = param_3;
  local_res18 = ECDSA_SIG_new();
  if (local_res18 == 0) {
    uVar6 = 0x1c3;
    uVar5 = 0x41;
  }
  else {
    lVar2 = i2d_ECDSA_SIG(&local_res18,&local_20,param_4);
    if (lVar2 == 0) {
      uVar6 = 0x1c7;
    }
    else {
      iVar1 = i2d_ECDSA_SIG(local_res18,&local_28);
      if (iVar1 == param_4) {
        iVar1 = _guard_xfg_dispatch_icall_nop(param_3,local_28,(longlong)iVar1);
        if (iVar1 == 0) {
          lVar3 = BN_bin2bn(param_1,param_2,0);
          if (lVar3 != 0) {
            uVar4 = sm2_sig_verify(param_5,local_res18,lVar3);
            goto LAB_143d9c273;
          }
          uVar6 = 0x1d3;
          uVar5 = 3;
          goto LAB_143d9c25f;
        }
      }
      uVar6 = 0x1cd;
    }
    uVar5 = 0x68;
  }
LAB_143d9c25f:
  ERR_put_error(0x35,0x6c,uVar5,"crypto\\sm2\\sm2_sign.c",uVar6);
LAB_143d9c273:
  CRYPTO_free(local_28,"crypto\\sm2\\sm2_sign.c",0x1da);
  BN_free(lVar3);
  ECDSA_SIG_free(local_res18);
  return uVar4;
}



// FUNCTION 143d9c2c0 ec_field_size body=182 status=ok
// SIG undefined ec_field_size(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_field_size(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143d9c2e0;
  lVar2 = BN_new();
  lVar3 = BN_new();
  lVar4 = BN_new();
  lVar5 = 0;
  if (((lVar2 != 0) && (lVar3 != 0)) && (lVar4 != 0)) {
    iVar1 = EC_GROUP_get_curve(param_1,lVar2,lVar3,lVar4,0,uVar6);
    lVar5 = 0;
    if (iVar1 != 0) {
      iVar1 = BN_num_bits(lVar2);
      lVar5 = (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
    }
  }
  BN_free(lVar2);
  BN_free(lVar3);
  BN_free(lVar4);
  return lVar5;
}



// FUNCTION 143d9c380 sm2_ciphertext_size body=187 status=ok
// SIG undefined sm2_ciphertext_size(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sm2_ciphertext_size(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = FUniqueNetIdString::GetBytes();
  lVar5 = ec_field_size(uVar4);
  iVar1 = EVP_MD_size(param_2);
  if ((lVar5 == 0) || (iVar1 < 0)) {
    uVar4 = 0;
  }
  else {
    iVar2 = ASN1_object_size(0,(int)lVar5 + 1,2);
    iVar3 = ASN1_object_size(0,param_3,4);
    iVar1 = ASN1_object_size(0,iVar1,4);
    iVar1 = ASN1_object_size(1,iVar2 * 2 + iVar3 + iVar1,0x10);
    uVar4 = 1;
    *param_4 = (longlong)iVar1;
  }
  return uVar4;
}



// FUNCTION 143d9c440 sm2_decrypt body=1563 status=ok
// SIG undefined sm2_decrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong *
sm2_decrypt(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,void *param_5
           ,size_t *param_6)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong *puVar3;
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
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  undefined8 uVar20;
  longlong lVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  undefined8 uVar24;
  size_t sVar25;
  ulonglong *puVar26;
  byte *pbVar27;
  ulonglong *puVar28;
  size_t sVar29;
  ulonglong *puVar30;
  undefined4 uVar31;
  undefined8 uVar32;
  longlong lVar33;
  undefined8 local_res18;
  ulonglong local_res20;
  undefined8 in_stack_ffffffffffffff48;
  longlong local_90;
  longlong local_80;
  undefined8 *local_70;
  
  uVar31 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  puVar28 = (ulonglong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar17 = FUniqueNetIdString::GetBytes();
  local_80 = 0;
  local_70 = (undefined8 *)0x0;
  local_90 = 0;
  uVar18 = ec_field_size(uVar17);
  iVar14 = EVP_MD_size(param_2);
  puVar30 = (ulonglong *)0x0;
  puVar26 = puVar28;
  puVar22 = puVar28;
  puVar23 = puVar28;
  puVar19 = puVar28;
  if ((uVar18 != 0) && (puVar19 = (ulonglong *)0x0, 0 < iVar14)) {
    _guard_xfg_dispatch_icall_nop(param_5,0xff,*param_6);
    local_70 = (undefined8 *)ASN1_item_d2i(0,&local_res18,local_res20 & 0xffffffff,&DAT_145db2700);
    if (local_70 == (undefined8 *)0x0) {
      uVar17 = CONCAT44(uVar31,0x125);
      uVar31 = 100;
      puVar19 = puVar28;
    }
    else if (*(int *)local_70[2] == iVar14) {
      uVar32 = *(undefined8 *)((int *)local_70[2] + 2);
      puVar3 = *(ulonglong **)((uint *)local_70[3] + 2);
      uVar2 = *(uint *)local_70[3];
      sVar29 = (size_t)(int)uVar2;
      puVar19 = (ulonglong *)BN_CTX_new();
      if (puVar19 == (ulonglong *)0x0) {
        uVar17 = CONCAT44(uVar31,0x134);
        uVar31 = 0x41;
      }
      else {
        BN_CTX_start(puVar19);
        uVar20 = BN_CTX_get(puVar19);
        lVar21 = BN_CTX_get(puVar19);
        if (lVar21 != 0) {
          puVar22 = (ulonglong *)CRYPTO_zalloc(sVar29,"crypto\\sm2\\sm2_crypt.c",0x141);
          local_90 = CRYPTO_zalloc(uVar18 * 2,"crypto\\sm2\\sm2_crypt.c",0x142);
          puVar23 = (ulonglong *)CRYPTO_zalloc((longlong)iVar14,"crypto\\sm2\\sm2_crypt.c",0x143);
          if (((puVar22 == (ulonglong *)0x0) || (local_90 == 0)) || (puVar23 == (ulonglong *)0x0)) {
            uVar17 = CONCAT44(uVar31,0x146);
LAB_143d9c700:
            uVar32 = 0x41;
          }
          else {
            local_80 = EC_POINT_new(uVar17);
            if (local_80 == 0) {
              uVar17 = CONCAT44(uVar31,0x14c);
              puVar30 = puVar28;
              goto LAB_143d9c700;
            }
            puVar26 = puVar19;
            iVar15 = EC_POINT_set_affine_coordinates(uVar17,local_80,*local_70,local_70[1],puVar19);
            uVar31 = (undefined4)((ulonglong)puVar26 >> 0x20);
            if (iVar15 == 0) {
LAB_143d9ca3b:
              uVar17 = CONCAT44(uVar31,0x155);
              uVar32 = 0x10;
            }
            else {
              uVar24 = FNiagaraEmitterHandle::GetInstance(param_1);
              iVar15 = EC_POINT_mul(uVar17,local_80,0,local_80,uVar24,puVar19);
              uVar31 = (undefined4)((ulonglong)uVar24 >> 0x20);
              if (iVar15 == 0) goto LAB_143d9ca3b;
              puVar26 = puVar19;
              iVar15 = EC_POINT_get_affine_coordinates(uVar17,local_80,uVar20,lVar21,puVar19);
              uVar31 = (undefined4)((ulonglong)puVar26 >> 0x20);
              if (iVar15 == 0) goto LAB_143d9ca3b;
              iVar15 = BN_bn2binpad(uVar20,local_90,uVar18 & 0xffffffff);
              if (-1 < iVar15) {
                iVar15 = BN_bn2binpad(lVar21,local_90 + uVar18,uVar18 & 0xffffffff);
                if (-1 < iVar15) {
                  uVar31 = 0;
                  iVar15 = ECDH_KDF_X9_62(puVar22,sVar29,local_90,uVar18 * 2,0,0,param_2);
                  if (iVar15 != 0) {
                    puVar30 = (ulonglong *)0x0;
                    puVar26 = puVar28;
                    if ((uVar2 != 0) && (puVar26 = puVar30, 0x3f < uVar2)) {
                      lVar21 = (longlong)(int)(uVar2 - 1);
                      if ((((void *)(lVar21 + (longlong)puVar22) < param_5) ||
                          ((ulonglong *)(lVar21 + (longlong)param_5) < puVar22)) &&
                         (((void *)(lVar21 + (longlong)puVar3) < param_5 ||
                          ((ulonglong *)(lVar21 + (longlong)param_5) < puVar3)))) {
                        uVar16 = uVar2 & 0x8000003f;
                        if ((int)uVar16 < 0) {
                          uVar16 = (uVar16 - 1 | 0xffffffc0) + 1;
                        }
                        lVar21 = (longlong)puVar3 - (longlong)puVar22;
                        lVar33 = (longlong)param_5 - (longlong)puVar22;
                        puVar30 = puVar22;
                        puVar26 = puVar28;
                        do {
                          uVar4 = puVar30[1];
                          puVar26 = (ulonglong *)(ulonglong)((int)puVar26 + 0x40);
                          uVar5 = ((ulonglong *)(lVar21 + (longlong)puVar30))[1];
                          puVar1 = (ulonglong *)(lVar21 + 0x10 + (longlong)puVar30);
                          uVar6 = *puVar1;
                          uVar7 = puVar1[1];
                          uVar8 = puVar30[2];
                          uVar9 = puVar30[3];
                          *(ulonglong *)(lVar33 + (longlong)puVar30) =
                               *(ulonglong *)(lVar21 + (longlong)puVar30) ^ *puVar30;
                          ((ulonglong *)(lVar33 + (longlong)puVar30))[1] = uVar5 ^ uVar4;
                          puVar1 = (ulonglong *)(lVar21 + 0x20 + (longlong)puVar30);
                          uVar10 = *puVar1;
                          uVar11 = puVar1[1];
                          uVar12 = puVar30[4];
                          uVar13 = puVar30[5];
                          puVar1 = (ulonglong *)(lVar33 + 0x10 + (longlong)puVar30);
                          *puVar1 = uVar6 ^ uVar8;
                          puVar1[1] = uVar7 ^ uVar9;
                          puVar1 = (ulonglong *)(lVar21 + 0x30 + (longlong)puVar30);
                          uVar6 = *puVar1;
                          uVar7 = puVar1[1];
                          uVar4 = puVar30[6];
                          uVar5 = puVar30[7];
                          puVar1 = (ulonglong *)(lVar33 + 0x20 + (longlong)puVar30);
                          *puVar1 = uVar10 ^ uVar12;
                          puVar1[1] = uVar11 ^ uVar13;
                          puVar1 = (ulonglong *)(lVar33 + 0x30 + (longlong)puVar30);
                          *puVar1 = uVar6 ^ uVar4;
                          puVar1[1] = uVar7 ^ uVar5;
                          puVar30 = puVar30 + 8;
                        } while ((longlong)puVar30 - (longlong)puVar22 !=
                                 (longlong)(int)(uVar2 - uVar16));
                      }
                    }
                    sVar25 = (size_t)(int)puVar26;
                    if (sVar25 != sVar29) {
                      pbVar27 = (byte *)(sVar25 + (longlong)puVar22);
                      lVar21 = sVar29 - sVar25;
                      do {
                        pbVar27[(longlong)param_5 - (longlong)puVar22] =
                             pbVar27[(longlong)puVar3 - (longlong)puVar22] ^ *pbVar27;
                        pbVar27 = pbVar27 + 1;
                        lVar21 = lVar21 + -1;
                      } while (lVar21 != 0);
                    }
                    puVar26 = (ulonglong *)EVP_MD_CTX_new();
                    if (puVar26 != (ulonglong *)0x0) {
                      iVar15 = EVP_DigestInit(puVar26,param_2);
                      if ((((iVar15 == 0) ||
                           (iVar15 = EVP_DigestUpdate(puVar26,local_90,uVar18), iVar15 == 0)) ||
                          (iVar15 = EVP_DigestUpdate(puVar26,param_5,sVar29), iVar15 == 0)) ||
                         ((iVar15 = EVP_DigestUpdate(puVar26,local_90 + uVar18,uVar18), iVar15 == 0
                          || (iVar15 = EVP_DigestFinal(puVar26,puVar23,0), iVar15 == 0)))) {
                        ERR_put_error(0x35,0x66,6,"crypto\\sm2\\sm2_crypt.c",CONCAT44(uVar31,0x16f))
                        ;
                      }
                      else {
                        iVar14 = FUN_14004ffa0(puVar23,uVar32,(longlong)iVar14);
                        if (iVar14 == 0) {
                          puVar28 = (ulonglong *)0x1;
                          *param_6 = sVar29;
                          goto LAB_143d9c539;
                        }
                        ERR_put_error(0x35,0x66,0x66,"crypto\\sm2\\sm2_crypt.c",
                                      CONCAT44(uVar31,0x174));
                      }
                      goto LAB_143d9c524;
                    }
                    uVar17 = CONCAT44(uVar31,0x166);
                    puVar30 = puVar26;
                    goto LAB_143d9c700;
                  }
                }
              }
              uVar17 = CONCAT44(uVar31,0x15d);
              uVar32 = 0x44;
              puVar30 = puVar28;
            }
          }
          ERR_put_error(0x35,0x66,uVar32,"crypto\\sm2\\sm2_crypt.c",uVar17);
          puVar26 = puVar30;
          goto LAB_143d9c524;
        }
        uVar17 = CONCAT44(uVar31,0x13d);
        uVar31 = 3;
      }
    }
    else {
      uVar17 = CONCAT44(uVar31,0x12a);
      uVar31 = 0x68;
    }
    ERR_put_error(0x35,0x66,uVar31,"crypto\\sm2\\sm2_crypt.c",uVar17);
  }
LAB_143d9c524:
  _guard_xfg_dispatch_icall_nop(param_5,0,*param_6);
LAB_143d9c539:
  CRYPTO_free(puVar22,"crypto\\sm2\\sm2_crypt.c",0x17f);
  CRYPTO_free(local_90,"crypto\\sm2\\sm2_crypt.c",0x180);
  CRYPTO_free(puVar23,"crypto\\sm2\\sm2_crypt.c",0x181);
  EC_POINT_free(local_80);
  BN_CTX_free(puVar19);
  ASN1_item_free(local_70,&DAT_145db2700);
  EVP_MD_CTX_free(puVar26);
  return puVar28;
}



// FUNCTION 143d9ca60 sm2_encrypt body=1760 status=ok
// SIG undefined sm2_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong *
sm2_encrypt(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong *param_4,void *param_5
           ,size_t *param_6)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  WriteBytesMem *this;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  longlong lVar15;
  byte *pbVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  undefined4 uVar20;
  undefined8 in_stack_ffffffffffffff28;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  uchar *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong *puVar19;
  
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uStack_40 = 0x143d9ca84;
  puVar19 = (ulonglong *)0x0;
  puVar18 = (ulonglong *)0x0;
  lVar6 = EVP_MD_CTX_new();
  this = (WriteBytesMem *)FUniqueNetIdString::GetBytes(param_1);
  local_58 = AK::WriteBytesMem::Bytes(this);
  local_50 = USignificanceManager::GetWorld(param_1);
  local_a8 = 0;
  puVar17 = (ulonglong *)0x0;
  local_a0 = 0;
  local_98 = 0;
  iVar4 = EVP_MD_size(param_2);
  local_60 = 0;
  local_68 = 0;
  if ((lVar6 == 0) || (iVar4 < 1)) {
    uVar9 = CONCAT44(uVar20,0x8c);
LAB_143d9d087:
    uVar20 = 0x44;
    puVar8 = puVar19;
  }
  else {
    uVar7 = ec_field_size(this);
    if (uVar7 == 0) {
      uVar9 = CONCAT44(uVar20,0x92);
      goto LAB_143d9d087;
    }
    local_a8 = EC_POINT_new(this);
    local_a0 = EC_POINT_new(this);
    puVar8 = (ulonglong *)BN_CTX_new();
    if (((local_a8 == 0) || (local_a0 == 0)) || (puVar8 == (ulonglong *)0x0)) {
      uVar9 = CONCAT44(uVar20,0x9a);
      uVar20 = 0x41;
    }
    else {
      BN_CTX_start(puVar8);
      uVar9 = BN_CTX_get(puVar8);
      uVar10 = BN_CTX_get(puVar8);
      uVar11 = BN_CTX_get(puVar8);
      uVar12 = BN_CTX_get(puVar8);
      local_48 = BN_CTX_get(puVar8);
      if (local_48 != 0) {
        local_98 = CRYPTO_zalloc(uVar7 * 2,"crypto\\sm2\\sm2_crypt.c",0xaa);
        puVar13 = (ulonglong *)CRYPTO_zalloc((longlong)iVar4,"crypto\\sm2\\sm2_crypt.c",0xab);
        if ((local_98 == 0) || (puVar13 == (ulonglong *)0x0)) {
          uVar9 = CONCAT44(uVar20,0xae);
          puVar17 = puVar19;
LAB_143d9d04e:
          uVar20 = 0x41;
LAB_143d9d054:
          ERR_put_error(0x35,0x67,uVar20,"crypto\\sm2\\sm2_crypt.c",uVar9);
          puVar18 = puVar19;
          goto LAB_143d9d0a4;
        }
        _guard_xfg_dispatch_icall_nop(param_5,0,*param_6);
        iVar5 = BN_priv_rand_range(uVar9,local_58);
        if (iVar5 == 0) {
          uVar9 = CONCAT44(uVar20,0xb5);
LAB_143d9cc45:
          ERR_put_error(0x35,0x67,0x44,"crypto\\sm2\\sm2_crypt.c",uVar9);
          puVar18 = puVar19;
        }
        else {
          uVar20 = 0;
          iVar5 = EC_POINT_mul(this,local_a8,uVar9,0,0,puVar8);
          if (iVar5 != 0) {
            puVar14 = puVar8;
            iVar5 = EC_POINT_get_affine_coordinates(this,local_a8,uVar10,uVar12,puVar8);
            uVar20 = (undefined4)((ulonglong)puVar14 >> 0x20);
            if (iVar5 != 0) {
              iVar5 = EC_POINT_mul(this,local_a0,0,local_50,uVar9,puVar8);
              lVar15 = local_48;
              uVar20 = (undefined4)((ulonglong)uVar9 >> 0x20);
              if (iVar5 != 0) {
                puVar14 = puVar8;
                iVar5 = EC_POINT_get_affine_coordinates(this,local_a0,uVar11,local_48,puVar8);
                uVar20 = (undefined4)((ulonglong)puVar14 >> 0x20);
                if (iVar5 != 0) {
                  iVar5 = BN_bn2binpad(uVar11,local_98,uVar7 & 0xffffffff);
                  if ((-1 < iVar5) &&
                     (iVar5 = BN_bn2binpad(lVar15,uVar7 + local_98,uVar7 & 0xffffffff), -1 < iVar5))
                  {
                    puVar17 = (ulonglong *)CRYPTO_zalloc(param_4,"crypto\\sm2\\sm2_crypt.c",199);
                    if (puVar17 == (ulonglong *)0x0) {
                      uVar9 = CONCAT44(uVar20,0xc9);
                      goto LAB_143d9d04e;
                    }
                    uVar20 = 0;
                    iVar5 = ECDH_KDF_X9_62(puVar17,param_4,local_98,uVar7 * 2,0,0,param_2);
                    if (iVar5 != 0) {
                      if (param_4 != (ulonglong *)0x0) {
                        if (((ulonglong *)0x3f < param_4) &&
                           (((ulonglong *)((param_3 - 1) + (longlong)param_4) < puVar17 ||
                            ((ulonglong)((longlong)param_4 + -1 + (longlong)puVar17) < param_3)))) {
                          lVar15 = param_3 - (longlong)puVar17;
                          puVar14 = puVar17;
                          do {
                            puVar19 = puVar19 + 8;
                            uVar3 = ((ulonglong *)(lVar15 + (longlong)puVar14))[1];
                            puVar1 = puVar14 + 8;
                            *puVar14 = *(ulonglong *)(lVar15 + (longlong)puVar14) ^ *puVar14;
                            puVar14[1] = uVar3 ^ puVar14[1];
                            puVar2 = (ulonglong *)(lVar15 + -0x30 + (longlong)puVar1);
                            uVar3 = puVar2[1];
                            puVar14[2] = *puVar2 ^ puVar14[2];
                            puVar14[3] = uVar3 ^ puVar14[3];
                            puVar2 = (ulonglong *)(lVar15 + -0x20 + (longlong)puVar1);
                            uVar3 = puVar2[1];
                            puVar14[4] = *puVar2 ^ puVar14[4];
                            puVar14[5] = uVar3 ^ puVar14[5];
                            puVar2 = (ulonglong *)(lVar15 + -0x10 + (longlong)puVar1);
                            uVar3 = puVar2[1];
                            puVar14[6] = *puVar2 ^ puVar14[6];
                            puVar14[7] = uVar3 ^ puVar14[7];
                            puVar14 = puVar1;
                          } while (puVar19 != (ulonglong *)((ulonglong)param_4 & 0xffffffffffffffc0)
                                  );
                        }
                        if (puVar19 != param_4) {
                          pbVar16 = (byte *)((longlong)puVar19 + (longlong)puVar17);
                          lVar15 = (longlong)param_4 - (longlong)puVar19;
                          do {
                            *pbVar16 = *pbVar16 ^ pbVar16[param_3 - (longlong)puVar17];
                            pbVar16 = pbVar16 + 1;
                            lVar15 = lVar15 + -1;
                          } while (lVar15 != 0);
                        }
                      }
                      iVar5 = EVP_DigestInit(lVar6,param_2);
                      if ((((iVar5 == 0) ||
                           (iVar5 = EVP_DigestUpdate(lVar6,local_98,uVar7), iVar5 == 0)) ||
                          (iVar5 = EVP_DigestUpdate(lVar6,param_3,param_4), iVar5 == 0)) ||
                         ((iVar5 = EVP_DigestUpdate(lVar6,uVar7 + local_98,uVar7), iVar5 == 0 ||
                          (iVar5 = EVP_DigestFinal(lVar6,puVar13,0), iVar5 == 0)))) {
                        ERR_put_error(0x35,0x67,6,"crypto\\sm2\\sm2_crypt.c",CONCAT44(uVar20,0xdc));
                      }
                      else {
                        local_78 = uVar10;
                        local_70 = uVar12;
                        local_68 = ASN1_OCTET_STRING_new();
                        local_60 = ASN1_OCTET_STRING_new();
                        if ((local_68 == 0) || (local_60 == 0)) {
                          ERR_put_error(0x35,0x67,0x41,"crypto\\sm2\\sm2_crypt.c",
                                        CONCAT44(uVar20,0xe6));
                        }
                        else {
                          iVar4 = ASN1_OCTET_STRING_set(local_68,puVar13,iVar4);
                          if ((iVar4 == 0) ||
                             (iVar4 = ASN1_OCTET_STRING_set
                                                (local_60,puVar17,(ulonglong)param_4 & 0xffffffff),
                             iVar4 == 0)) {
                            uVar9 = CONCAT44(uVar20,0xeb);
                          }
                          else {
                            iVar4 = ASN1_item_i2d(&local_78,&param_5,&DAT_145db2700);
                            if (-1 < iVar4) {
                              puVar18 = (ulonglong *)0x1;
                              *param_6 = (longlong)iVar4;
                              goto LAB_143d9d0a4;
                            }
                            uVar9 = CONCAT44(uVar20,0xf2);
                          }
                          ERR_put_error(0x35,0x67,0x44,"crypto\\sm2\\sm2_crypt.c",uVar9);
                        }
                      }
                      goto LAB_143d9d0a4;
                    }
                    uVar9 = CONCAT44(uVar20,0xd0);
                    uVar20 = 6;
                    goto LAB_143d9d054;
                  }
                  uVar9 = CONCAT44(uVar20,0xc3);
                  goto LAB_143d9cc45;
                }
              }
            }
          }
          ERR_put_error(0x35,0x67,0x10,"crypto\\sm2\\sm2_crypt.c",CONCAT44(uVar20,0xbd));
        }
        goto LAB_143d9d0a4;
      }
      uVar9 = CONCAT44(uVar20,0xa6);
      uVar20 = 3;
    }
  }
  ERR_put_error(0x35,0x67,uVar20,"crypto\\sm2\\sm2_crypt.c",uVar9);
  puVar17 = puVar19;
  puVar13 = puVar19;
  puVar18 = puVar19;
LAB_143d9d0a4:
  ASN1_BIT_STRING_free(local_60);
  ASN1_BIT_STRING_free(local_68);
  CRYPTO_free(puVar17,"crypto\\sm2\\sm2_crypt.c",0xfc);
  CRYPTO_free(local_98,"crypto\\sm2\\sm2_crypt.c",0xfd);
  CRYPTO_free(puVar13,"crypto\\sm2\\sm2_crypt.c",0xfe);
  EVP_MD_CTX_free(lVar6);
  BN_CTX_free(puVar8);
  EC_POINT_free(local_a8);
  EC_POINT_free(local_a0);
  return puVar18;
}



// FUNCTION 143d9d140 sm2_plaintext_size body=226 status=ok
// SIG undefined sm2_plaintext_size(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sm2_plaintext_size(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143d9d15b;
  uVar3 = FUniqueNetIdString::GetBytes();
  lVar4 = ec_field_size(uVar3);
  iVar2 = EVP_MD_size(param_2);
  if (iVar2 < 0) {
    ERR_put_error(0x35,0x68,0x66,"crypto\\sm2\\sm2_crypt.c",0x47,uVar5);
    uVar3 = 0;
  }
  else if (lVar4 == 0) {
    ERR_put_error(0x35,0x68,0x69,"crypto\\sm2\\sm2_crypt.c",0x4b,uVar5);
    uVar3 = 0;
  }
  else {
    uVar1 = (longlong)iVar2 + 10 + lVar4 * 2;
    if (uVar1 < param_3) {
      uVar3 = 1;
      *param_4 = param_3 - uVar1;
    }
    else {
      ERR_put_error(0x35,0x68,0x68,"crypto\\sm2\\sm2_crypt.c",0x51,uVar5);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 143d9d230 RSA_generate_multi_prime_key body=82 status=ok
// SIG undefined RSA_generate_multi_prime_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
RSA_generate_multi_prime_key
          (longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(longlong *)(param_1 + 8) + 0x70);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d9d251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE_00)();
    return uVar1;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(longlong *)(param_1 + 8) + 0x68);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000143d9d26f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_4,param_5);
      return uVar1;
    }
    return 0;
  }
  uVar1 = rsa_builtin_keygen();
  return uVar1;
}



// FUNCTION 143d9d290 rsa_builtin_keygen body=2385 status=ok
// SIG undefined rsa_builtin_keygen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong rsa_builtin_keygen(longlong param_1,int param_2,uint param_3,undefined8 param_4,
                            undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined1 (*pauVar17) [16];
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  int local_98;
  int local_94;
  undefined8 *local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70 [6];
  ulonglong uStack_58;
  undefined1 local_50 [8];
  undefined8 uStack_48;
  
  uStack_48 = 0x143d9d2a7;
  uStack_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar18 = 0;
  local_bc = 0;
  local_a8 = param_5;
  local_90 = (undefined8 *)0x0;
  local_c0 = param_3;
  if (param_2 < 0x200) {
    local_d8 = CONCAT44(local_d8._4_4_,0x4e);
    uVar16 = 0x78;
  }
  else {
    if ((1 < (int)param_3) && (iVar1 = rsa_multip_cap(param_2), (int)param_3 <= iVar1)) {
      uVar5 = BN_CTX_new();
      local_c8 = uVar5;
      if (uVar5 == 0) {
LAB_143d9d86a:
        local_d8 = CONCAT44(local_d8._4_4_,0x183);
        ERR_put_error(4,0x81,3,"crypto\\rsa\\rsa_gen.c");
      }
      else {
        BN_CTX_start(uVar5);
        local_80 = BN_CTX_get(uVar5);
        local_b0 = BN_CTX_get(uVar5);
        lVar6 = BN_CTX_get(uVar5);
        uVar20 = local_c0;
        local_78 = lVar6;
        if (lVar6 == 0) goto LAB_143d9d86a;
        uVar13 = 0;
        local_88 = (longlong)(int)local_c0;
        iVar1 = param_2 / (int)local_c0;
        param_2 = param_2 % (int)local_c0;
        auVar25._4_4_ = iVar1;
        auVar25._0_4_ = iVar1;
        auVar25._8_4_ = iVar1;
        auVar25._12_4_ = iVar1;
        if (0xf < local_c0) {
          uVar2 = local_c0 & 0x8000000f;
          if ((int)uVar2 < 0) {
            uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
          }
          auVar26._0_4_ = iVar1 + 1;
          auVar26._4_4_ = iVar1 + 1;
          auVar26._8_4_ = iVar1 + 1;
          auVar26._12_4_ = iVar1 + 1;
          uVar7 = uVar18;
          pauVar17 = (undefined1 (*) [16])local_50;
          iVar19 = 8;
          do {
            iVar3 = (int)uVar7;
            auVar21._0_4_ = -(uint)(iVar3 < param_2);
            auVar21._4_4_ = -(uint)(iVar3 + 1 < param_2);
            auVar21._8_4_ = -(uint)(iVar3 + 2 < param_2);
            auVar21._12_4_ = -(uint)(iVar3 + 3 < param_2);
            uVar13 = iVar3 + 0x10;
            uVar7 = (ulonglong)uVar13;
            pauVar17[-2] = auVar26 & auVar21 | ~auVar21 & auVar25;
            auVar22._0_4_ = -(uint)(iVar19 + -4 < param_2);
            auVar22._4_4_ = -(uint)(iVar19 + -3 < param_2);
            auVar22._8_4_ = -(uint)(iVar19 + -2 < param_2);
            auVar22._12_4_ = -(uint)(iVar19 + -1 < param_2);
            pauVar17[-1] = auVar26 & auVar22 | ~auVar22 & auVar25;
            auVar23._0_4_ = -(uint)(iVar19 < param_2);
            auVar23._4_4_ = -(uint)(iVar19 + 1 < param_2);
            auVar23._8_4_ = -(uint)(iVar19 + 2 < param_2);
            auVar23._12_4_ = -(uint)(iVar19 + 3 < param_2);
            *pauVar17 = auVar26 & auVar23 | ~auVar23 & auVar25;
            auVar24._0_4_ = -(uint)(iVar19 + 4 < param_2);
            auVar24._4_4_ = -(uint)(iVar19 + 5 < param_2);
            auVar24._8_4_ = -(uint)(iVar19 + 6 < param_2);
            auVar24._12_4_ = -(uint)(iVar19 + 7 < param_2);
            pauVar17[1] = auVar26 & auVar24 | ~auVar24 & auVar25;
            pauVar17 = pauVar17 + 4;
            iVar19 = iVar19 + 0x10;
          } while ((int)uVar13 < (int)(local_c0 - uVar2));
        }
        for (lVar14 = (longlong)(int)uVar13; lVar14 < local_88; lVar14 = lVar14 + 1) {
          iVar19 = iVar1 + 1;
          if (param_2 <= lVar14) {
            iVar19 = iVar1;
          }
          local_70[lVar14] = iVar19;
        }
        if (*(longlong *)(param_1 + 0x18) == 0) {
          lVar14 = BN_new();
          *(longlong *)(param_1 + 0x18) = lVar14;
          if (lVar14 == 0) goto LAB_143d9d86a;
        }
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar14 = BN_secure_new();
          *(longlong *)(param_1 + 0x28) = lVar14;
          if (lVar14 == 0) goto LAB_143d9d86a;
        }
        if (*(longlong *)(param_1 + 0x20) == 0) {
          lVar14 = BN_new();
          *(longlong *)(param_1 + 0x20) = lVar14;
          if (lVar14 == 0) goto LAB_143d9d86a;
        }
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar14 = BN_secure_new();
          *(longlong *)(param_1 + 0x30) = lVar14;
          if (lVar14 == 0) goto LAB_143d9d86a;
        }
        if (*(longlong *)(param_1 + 0x38) == 0) {
          lVar14 = BN_secure_new();
          *(longlong *)(param_1 + 0x38) = lVar14;
          if (lVar14 == 0) goto LAB_143d9d86a;
        }
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar14 = BN_secure_new();
          *(longlong *)(param_1 + 0x40) = lVar14;
          if (lVar14 == 0) goto LAB_143d9d86a;
        }
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar14 = BN_secure_new();
          *(longlong *)(param_1 + 0x48) = lVar14;
          if (lVar14 == 0) goto LAB_143d9d86a;
        }
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar14 = BN_secure_new();
          *(longlong *)(param_1 + 0x50) = lVar14;
          if (lVar14 == 0) goto LAB_143d9d86a;
        }
        uVar7 = uVar18;
        if (2 < (int)uVar20) {
          *(undefined4 *)(param_1 + 4) = 1;
          uVar7 = OPENSSL_sk_new_reserve(0,uVar20 - 2);
          if (uVar7 == 0) goto LAB_143d9d86a;
          if (*(longlong *)(param_1 + 0x58) != 0) {
            OPENSSL_sk_pop_free(*(longlong *)(param_1 + 0x58),rsa_multip_info_free);
          }
          iVar1 = 2;
          *(ulonglong *)(param_1 + 0x58) = uVar7;
          if (2 < (int)local_c0) {
            do {
              local_90 = (undefined8 *)rsa_multip_info_new();
              if (local_90 == (undefined8 *)0x0) goto LAB_143d9d86a;
              OPENSSL_sk_push(uVar7,local_90);
              iVar1 = iVar1 + 1;
            } while (iVar1 < (int)local_c0);
          }
        }
        lVar14 = BN_copy(*(undefined8 *)(param_1 + 0x20),param_4);
        if (lVar14 == 0) goto LAB_143d9d86a;
        if (0 < local_88) {
          local_a0 = 0;
          uVar5 = uVar18;
          uVar15 = uVar18;
          do {
            lVar6 = local_a0;
            local_94 = (int)uVar15;
            local_b8 = 0;
            iVar1 = (int)uVar5;
            if (iVar1 == 0) {
              uVar16 = *(undefined8 *)(param_1 + 0x30);
            }
            else if (iVar1 == 1) {
              uVar16 = *(undefined8 *)(param_1 + 0x38);
            }
            else {
              local_90 = (undefined8 *)OPENSSL_sk_value(uVar7,iVar1 + -2);
              uVar16 = *local_90;
            }
            BN_set_flags(uVar16,4);
            iVar19 = local_70[lVar6];
            uVar11 = local_a8;
            local_98 = iVar19;
LAB_143d9d690:
            local_d8 = 0;
            local_d0 = uVar11;
            iVar3 = BN_generate_prime_ex(uVar16,iVar19,0,0);
            uVar15 = uVar18;
            uVar5 = local_c8;
            if (iVar3 == 0) goto LAB_143d9d86a;
            while (iVar3 = (int)uVar15, iVar3 < iVar1) {
              if (iVar3 == 0) {
                uVar9 = *(undefined8 *)(param_1 + 0x30);
              }
              else if (iVar3 == 1) {
                uVar9 = *(undefined8 *)(param_1 + 0x38);
              }
              else {
                puVar8 = (undefined8 *)OPENSSL_sk_value(uVar7,iVar3 + -2);
                uVar9 = *puVar8;
              }
              iVar4 = BN_cmp(uVar16,uVar9);
              if (iVar4 == 0) goto LAB_143d9d690;
              uVar15 = (ulonglong)(iVar3 + 1);
            }
            uVar9 = BN_value_one();
            lVar6 = local_78;
            iVar3 = BN_sub(local_78,uVar16,uVar9);
            uVar5 = local_c8;
            if (iVar3 == 0) goto LAB_143d9d86a;
            ERR_set_mark();
            BN_set_flags(lVar6,4);
            lVar14 = BN_mod_inverse(local_b0,lVar6,*(undefined8 *)(param_1 + 0x20));
            if (lVar14 == 0) {
              uVar20 = ERR_peek_last_error();
              uVar5 = local_c8;
              if (((uVar20 & 0xff000000) != 0x3000000) || ((uVar20 & 0xfff) != 0x6c))
              goto LAB_143d9d86a;
              ERR_pop_to_mark();
              iVar3 = local_bc;
              iVar4 = BN_GENCB_call(uVar11,2);
              local_bc = iVar3 + 1;
              uVar5 = local_c8;
              if (iVar4 == 0) goto LAB_143d9d86a;
              goto LAB_143d9d690;
            }
            uVar20 = local_94 + local_98;
            uVar15 = (ulonglong)uVar20;
            if (local_a0 != 1) {
              if (local_a0 != 0) {
                uVar11 = *(undefined8 *)(param_1 + 0x18);
                uVar9 = uVar16;
                goto LAB_143d9d770;
              }
LAB_143d9d8e0:
              iVar19 = BN_GENCB_call(local_a8,3);
              uVar5 = local_c8;
              if (iVar19 != 0) goto LAB_143d9d8ff;
              goto LAB_143d9d86a;
            }
            uVar11 = *(undefined8 *)(param_1 + 0x30);
            uVar9 = *(undefined8 *)(param_1 + 0x38);
LAB_143d9d770:
            iVar3 = BN_mul(local_b0,uVar11,uVar9);
            uVar5 = local_c8;
            if ((iVar3 == 0) ||
               (iVar3 = BN_rshift(lVar6,local_b0,uVar20 - 4), uVar5 = local_c8, iVar3 == 0))
            goto LAB_143d9d86a;
            uVar10 = BN_get_word(lVar6);
            uVar11 = local_a8;
            if (uVar10 - 9 < 7) {
              if (((1 < iVar1) &&
                  (lVar6 = BN_copy(local_90[3],*(undefined8 *)(param_1 + 0x18)), uVar5 = local_c8,
                  lVar6 == 0)) ||
                 (lVar6 = BN_copy(*(undefined8 *)(param_1 + 0x18),local_b0), uVar5 = local_c8,
                 lVar6 == 0)) goto LAB_143d9d86a;
              goto LAB_143d9d8e0;
            }
            iVar3 = BN_GENCB_call(local_a8,2);
            local_bc = local_bc + 1;
            uVar5 = local_c8;
            if (iVar3 == 0) goto LAB_143d9d86a;
            if (4 < local_88) {
              iVar3 = -1;
              if (uVar10 < 9) {
                iVar3 = 1;
              }
              iVar19 = iVar19 + iVar3;
              local_b8 = local_b8 + 1;
              goto LAB_143d9d690;
            }
            if (local_b8 != 4) {
              local_b8 = local_b8 + 1;
              goto LAB_143d9d690;
            }
            iVar1 = -1;
            local_a0 = -1;
            uVar15 = uVar18;
LAB_143d9d8ff:
            local_a0 = local_a0 + 1;
            uVar5 = (ulonglong)(iVar1 + 1);
            lVar6 = local_78;
          } while (local_a0 < local_88);
        }
        iVar1 = BN_cmp(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
        if (iVar1 < 0) {
          uVar16 = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 *)(param_1 + 0x38) = uVar16;
        }
        uVar11 = BN_value_one();
        uVar16 = local_b0;
        iVar1 = BN_sub(local_b0,*(undefined8 *)(param_1 + 0x30),uVar11);
        uVar5 = local_c8;
        if (iVar1 == 0) goto LAB_143d9d86a;
        uVar11 = BN_value_one();
        iVar1 = BN_sub(lVar6,*(undefined8 *)(param_1 + 0x38),uVar11);
        uVar5 = local_c8;
        if ((iVar1 == 0) || (iVar1 = BN_mul(local_80,uVar16,lVar6,local_c8), iVar1 == 0))
        goto LAB_143d9d86a;
        iVar1 = 2;
        if (2 < (int)local_c0) {
          do {
            puVar8 = (undefined8 *)OPENSSL_sk_value(uVar7,iVar1 + -2);
            uVar11 = BN_value_one();
            iVar19 = BN_sub(puVar8[1],*puVar8,uVar11);
            if ((iVar19 == 0) || (iVar19 = BN_mul(local_80,local_80,puVar8[1],uVar5), iVar19 == 0))
            goto LAB_143d9d86a;
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)local_c0);
        }
        lVar14 = BN_new();
        if (lVar14 == 0) goto LAB_143d9d86a;
        BN_with_flags(lVar14,local_80,4);
        lVar12 = BN_mod_inverse(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
                                lVar14,uVar5);
        BN_free(lVar14);
        if ((lVar12 == 0) || (lVar14 = BN_new(), lVar14 == 0)) goto LAB_143d9d86a;
        BN_with_flags(lVar14,*(undefined8 *)(param_1 + 0x28),4);
        local_d8 = uVar5;
        iVar1 = BN_div(0,*(undefined8 *)(param_1 + 0x40),lVar14,uVar16);
        if (iVar1 == 0) {
LAB_143d9db83:
          BN_free(lVar14);
          goto LAB_143d9d86a;
        }
        local_d8 = uVar5;
        iVar1 = BN_div(0,*(undefined8 *)(param_1 + 0x48),lVar14,lVar6);
        uVar20 = local_c0;
        if (iVar1 == 0) goto LAB_143d9db83;
        iVar19 = 2;
        iVar1 = 2;
        if (2 < (int)local_c0) {
          do {
            lVar6 = OPENSSL_sk_value(uVar7,iVar1 + -2);
            local_d8 = uVar5;
            iVar3 = BN_div(0,*(undefined8 *)(lVar6 + 8),lVar14,*(undefined8 *)(lVar6 + 8));
            if (iVar3 == 0) goto LAB_143d9db83;
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)uVar20);
        }
        BN_free(lVar14);
        lVar14 = BN_new();
        if (lVar14 == 0) goto LAB_143d9d86a;
        BN_with_flags(lVar14,*(undefined8 *)(param_1 + 0x30),4);
        lVar6 = BN_mod_inverse(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x38),
                               lVar14,uVar5);
        if (lVar6 == 0) goto LAB_143d9db83;
        if (2 < (int)uVar20) {
          do {
            puVar8 = (undefined8 *)OPENSSL_sk_value(uVar7,iVar19 + -2);
            BN_with_flags(lVar14,*puVar8,4);
            lVar6 = BN_mod_inverse(puVar8[2],puVar8[3],lVar14,uVar5);
            if (lVar6 == 0) goto LAB_143d9db83;
            iVar19 = iVar19 + 1;
          } while (iVar19 < (int)uVar20);
        }
        BN_free(lVar14);
        uVar18 = 1;
      }
      if (uVar5 != 0) {
        BN_CTX_end(uVar5);
      }
      goto LAB_143d9dbb2;
    }
    local_d8 = CONCAT44(local_d8._4_4_,0x54);
    uVar16 = 0xa5;
  }
  ERR_put_error(4,0x81,uVar16,"crypto\\rsa\\rsa_gen.c");
  uVar5 = uVar18;
LAB_143d9dbb2:
  BN_CTX_free(uVar5);
  return uVar18;
}



// FUNCTION 143d9dbf0 RSA_sign body=339 status=ok
// SIG undefined RSA_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
RSA_sign(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int *param_5,longlong param_6
        )

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar6;
  int local_28 [2];
  undefined8 local_20;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar3 = 0;
  local_28[0] = 0;
  local_20 = 0;
  pcVar1 = *(code **)(*(longlong *)(param_6 + 8) + 0x58);
  if (pcVar1 != (code *)0x0) {
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (param_1 == 0x72) {
    if (param_3 != 0x24) {
      ERR_put_error(4,0x75,0x83,"crypto\\rsa\\rsa_sign.c",CONCAT44(uVar6,0x58));
      return 0;
    }
    iVar4 = 0x24;
  }
  else {
    uVar5 = CONCAT44(uVar6,param_3);
    iVar2 = encode_pkcs1(&local_20,local_28,param_1,param_2,uVar5);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    param_2 = local_20;
    uVar5 = local_20;
    iVar4 = local_28[0];
    if (iVar2 == 0) goto LAB_143d9dd10;
  }
  uVar5 = local_20;
  iVar2 = RSA_size(param_6);
  if (iVar2 + -0xb < iVar4) {
    ERR_put_error(4,0x75,0x70,"crypto\\rsa\\rsa_sign.c",CONCAT44(uVar6,100));
  }
  else {
    iVar2 = RSA_private_encrypt(iVar4,param_2,param_4,param_6,CONCAT44(uVar6,1));
    if (0 < iVar2) {
      uVar3 = 1;
      *param_5 = iVar2;
    }
  }
LAB_143d9dd10:
  CRYPTO_clear_free(uVar5,(longlong)iVar4,"crypto\\rsa\\rsa_sign.c",0x70);
  return uVar3;
}



// FUNCTION 143d9dd50 RSA_verify body=79 status=ok
// SIG undefined RSA_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RSA_verify(void)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong in_stack_00000030;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(in_stack_00000030 + 8) + 0x60);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d9dd73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  int_rsa_verify();
  return;
}



// FUNCTION 143d9dda0 encode_pkcs1 body=286 status=ok
// SIG undefined encode_pkcs1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
encode_pkcs1(undefined8 *param_1,int *param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_58;
  longlong *local_50;
  undefined4 *local_48;
  undefined4 local_40 [2];
  undefined8 local_38;
  longlong local_30 [2];
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143d9ddb5;
  local_58 = 0;
  local_50 = local_30;
  lVar2 = OBJ_nid2obj(param_3);
  *local_50 = lVar2;
  if (*local_50 == 0) {
    ERR_put_error(4,0x92,0x75,"crypto\\rsa\\rsa_sign.c",0x2c);
  }
  else {
    lVar2 = OBJ_length();
    if (lVar2 == 0) {
      ERR_put_error(4,0x92,0x74,"crypto\\rsa\\rsa_sign.c",0x31);
      return 0;
    }
    local_40[0] = 5;
    local_38 = 0;
    local_50[1] = (longlong)local_40;
    local_48 = local_20;
    local_20[0] = param_5;
    local_18 = param_4;
    iVar1 = i2d_X509_SIG(&local_50,&local_58);
    if (-1 < iVar1) {
      *param_1 = local_58;
      *param_2 = iVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d9dec0 int_rsa_verify body=846 status=ok
// SIG undefined int_rsa_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
int_rsa_verify(int param_1,longlong *param_2,uint param_3,undefined8 *param_4,size_t *param_5,
              undefined8 param_6,longlong param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  char *_Buf2;
  undefined8 uVar6;
  longlong lVar7;
  size_t _Size;
  undefined4 uVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uVar11;
  int local_38 [2];
  void *local_30;
  
  pvVar5 = (void *)0x0;
  _Size = (size_t)param_3;
  local_38[0] = 0;
  local_30 = (void *)0x0;
  iVar4 = 0;
  iVar2 = 0;
  iVar9 = 0;
  pvVar10 = (void *)0x0;
  iVar1 = RSA_size(param_8);
  if (param_7 != iVar1) {
    ERR_put_error(4,0x91,0x77,"crypto\\rsa\\rsa_sign.c",0x84);
    return 0;
  }
  _Buf2 = (char *)CRYPTO_malloc(param_7,"crypto\\rsa\\rsa_sign.c",0x89);
  if (_Buf2 == (char *)0x0) {
    ERR_put_error(4,0x91,0x41,"crypto\\rsa\\rsa_sign.c",0x8b);
    pvVar10 = pvVar5;
    iVar2 = 0;
  }
  else {
    iVar1 = RSA_public_decrypt((undefined4)param_7,param_6,_Buf2,param_8,1);
    if (0 < iVar1) {
      if (param_1 == 0x72) {
        if (iVar1 == 0x24) {
          if (param_4 != (undefined8 *)0x0) {
            uVar6 = *(undefined8 *)(_Buf2 + 8);
            uVar11 = 1;
            *param_4 = *(undefined8 *)_Buf2;
            param_4[1] = uVar6;
            uVar6 = *(undefined8 *)(_Buf2 + 0x18);
            param_4[2] = *(undefined8 *)(_Buf2 + 0x10);
            param_4[3] = uVar6;
            *(undefined4 *)(param_4 + 4) = *(undefined4 *)(_Buf2 + 0x20);
            *param_5 = 0x24;
            pvVar10 = pvVar5;
            goto LAB_143d9e1b7;
          }
          if (param_3 != 0x24) {
            ERR_put_error(4,0x91,0x83,"crypto\\rsa\\rsa_sign.c",0xa4);
            goto LAB_143d9e1b5;
          }
          iVar2 = _guard_xfg_dispatch_icall_nop(_Buf2,param_2,0x24);
          iVar9 = 0;
          if (iVar2 != 0) {
            uVar11 = 0xa9;
            pvVar5 = pvVar10;
            iVar9 = 0;
            goto LAB_143d9dfd0;
          }
LAB_143d9e19c:
          uVar11 = 1;
          pvVar10 = pvVar5;
          goto LAB_143d9e1b7;
        }
        uVar11 = 0x9b;
        iVar9 = 0;
LAB_143d9dfd0:
        uVar8 = 0x68;
        pvVar10 = pvVar5;
        iVar4 = iVar9;
      }
      else if ((((param_1 == 0x5f) && (iVar1 == 0x12)) && (*_Buf2 == '\x04')) &&
              (_Buf2[1] == '\x10')) {
        if (param_4 != (undefined8 *)0x0) {
          uVar6 = *(undefined8 *)(_Buf2 + 10);
          uVar11 = 1;
          *param_4 = *(undefined8 *)(_Buf2 + 2);
          param_4[1] = uVar6;
          *param_5 = 0x10;
          goto LAB_143d9e1b7;
        }
        if (param_3 == 0x10) {
          if ((*param_2 == *(longlong *)(_Buf2 + 2)) &&
             (pvVar5 = pvVar10, iVar9 = iVar2, param_2[1] == *(longlong *)(_Buf2 + 10)))
          goto LAB_143d9e19c;
          uVar11 = 0xbd;
          pvVar5 = pvVar10;
          iVar9 = 0;
          goto LAB_143d9dfd0;
        }
        uVar11 = 0xb8;
        uVar8 = 0x83;
        pvVar10 = pvVar5;
        iVar4 = 0;
      }
      else {
        if (param_4 == (undefined8 *)0x0) {
LAB_143d9e140:
          iVar4 = encode_pkcs1(&local_30,local_38,param_1,param_2,(int)_Size);
          pvVar5 = local_30;
          iVar9 = local_38[0];
          pvVar10 = local_30;
          iVar2 = local_38[0];
          if (iVar4 != 0) {
            if ((local_38[0] != iVar1) ||
               (iVar2 = _guard_xfg_dispatch_icall_nop(local_30,_Buf2,(longlong)local_38[0]),
               iVar2 != 0)) {
              uVar11 = 0xdc;
              goto LAB_143d9dfd0;
            }
            if (param_4 != (undefined8 *)0x0) {
              _guard_xfg_dispatch_icall_nop(param_4,param_2,_Size);
              *param_5 = _Size;
            }
            goto LAB_143d9e19c;
          }
          goto LAB_143d9e1b5;
        }
        uVar6 = OBJ_nid2sn(param_1);
        lVar7 = EVP_get_digestbyname(uVar6);
        if (lVar7 == 0) {
          uVar11 = 0xca;
          uVar8 = 0x75;
        }
        else {
          uVar3 = EVP_MD_size(lVar7);
          _Size = (size_t)uVar3;
          if (_Size <= (ulonglong)(longlong)iVar1) {
            param_2 = (longlong *)(_Buf2 + ((longlong)iVar1 - _Size));
            goto LAB_143d9e140;
          }
          uVar11 = 0xd0;
          uVar8 = 0x8f;
        }
      }
      ERR_put_error(4,0x91,uVar8,"crypto\\rsa\\rsa_sign.c",uVar11);
      iVar2 = iVar4;
    }
  }
LAB_143d9e1b5:
  iVar9 = iVar2;
  uVar11 = 0;
LAB_143d9e1b7:
  CRYPTO_clear_free(pvVar10,(longlong)iVar9,"crypto\\rsa\\rsa_sign.c",0xea);
  CRYPTO_clear_free(_Buf2,param_7,"crypto\\rsa\\rsa_sign.c",0xeb);
  return uVar11;
}



// FUNCTION 143d9e210 RSA_sign_ASN1_OCTET_STRING body=310 status=ok
// SIG undefined RSA_sign_ASN1_OCTET_STRING(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool RSA_sign_ASN1_OCTET_STRING
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               int *param_5,undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res10;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_20;
  
  uStack_20 = 0x143d9e21f;
  local_34 = 4;
  local_38 = param_3;
  local_30 = param_2;
  iVar2 = i2d_ASN1_OCTET_STRING(&local_38,0);
  iVar3 = RSA_size(param_6);
  if (iVar2 <= iVar3 + -0xb) {
    lVar4 = CRYPTO_malloc(iVar3 + 1,"crypto\\rsa\\rsa_saos.c",0x25);
    if (lVar4 == 0) {
      ERR_put_error(4,0x76,0x41,"crypto\\rsa\\rsa_saos.c",0x27);
      bVar1 = false;
    }
    else {
      local_res10 = lVar4;
      i2d_ASN1_OCTET_STRING(&local_38,&local_res10);
      iVar2 = RSA_private_encrypt(iVar2,lVar4,param_4,param_6,1);
      bVar1 = 0 < iVar2;
      if (bVar1) {
        *param_5 = iVar2;
      }
      CRYPTO_clear_free(lVar4,iVar3 + 1,"crypto\\rsa\\rsa_saos.c",0x32);
    }
    return bVar1;
  }
  ERR_put_error(4,0x76,0x70,"crypto\\rsa\\rsa_saos.c",0x22);
  return false;
}



// FUNCTION 143d9e350 RSA_padding_add_PKCS1_PSS_mgf1 body=903 status=ok
// SIG undefined RSA_padding_add_PKCS1_PSS_mgf1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * RSA_padding_add_PKCS1_PSS_mgf1
                 (longlong param_1,byte *param_2,undefined8 param_3,longlong param_4,
                 longlong param_5,uint param_6)

{
  ulonglong *puVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  byte *pbVar18;
  byte bVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar23;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar24;
  byte *pbVar22;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  pbVar22 = (byte *)0x0;
  pbVar21 = (byte *)0x0;
  uVar20 = 0;
  pbVar18 = (byte *)0x0;
  lVar17 = param_4;
  if (param_5 != 0) {
    lVar17 = param_5;
  }
  uVar7 = EVP_MD_size(param_4);
  pbVar10 = pbVar22;
  pbVar11 = pbVar22;
  pbVar23 = pbVar22;
  if ((int)uVar7 < 0) goto LAB_143d9e69c;
  uVar14 = uVar7;
  pbVar11 = pbVar18;
  if (param_6 != 0xffffffff) {
    if (param_6 == 0xfffffffe) {
      uVar14 = 0xfffffffd;
    }
    else {
      uVar14 = param_6;
      if ((int)param_6 < -3) {
        ERR_put_error(4,0x98,0x88,"crypto\\rsa\\rsa_pss.c",CONCAT44(uVar16,0xae));
        pbVar10 = (byte *)0x0;
        pbVar23 = pbVar21;
        goto LAB_143d9e69c;
      }
    }
  }
  cVar6 = BN_num_bits(*(undefined8 *)(param_1 + 0x18));
  iVar8 = RSA_size(param_1);
  bVar19 = cVar6 - 1U & 7;
  if (bVar19 == 0) {
    *param_2 = 0;
    param_2 = param_2 + 1;
    iVar8 = iVar8 + -1;
  }
  if (iVar8 < (int)(uVar7 + 2)) {
    uVar24 = CONCAT44(uVar16,0xba);
LAB_143d9e402:
    uVar16 = 0x6e;
    param_6 = uVar14;
  }
  else {
    iVar15 = iVar8 - uVar7;
    param_6 = iVar15 - 2;
    if ((uVar14 != 0xfffffffd) && (bVar2 = (int)param_6 < (int)uVar14, param_6 = uVar14, bVar2)) {
      uVar24 = CONCAT44(uVar16,0xc1);
      goto LAB_143d9e402;
    }
    if ((int)param_6 < 1) {
LAB_143d9e4bf:
      pbVar11 = (byte *)EVP_MD_CTX_new();
      pbVar23 = pbVar21;
      if (((((pbVar11 != (byte *)0x0) && (iVar9 = EVP_DigestInit_ex(pbVar11,param_4,0), iVar9 != 0))
           && (iVar9 = EVP_DigestUpdate(pbVar11,&DAT_145db27b0,8), iVar9 != 0)) &&
          (iVar9 = EVP_DigestUpdate(pbVar11,param_3,(longlong)(int)uVar7), iVar9 != 0)) &&
         (((param_6 == 0 ||
           (iVar9 = EVP_DigestUpdate(pbVar11,pbVar10,(longlong)(int)param_6), iVar9 != 0)) &&
          ((iVar9 = EVP_DigestFinal_ex(pbVar11,param_2 + (iVar15 + -1),0), iVar9 != 0 &&
           (iVar9 = PKCS1_MGF1(param_2,iVar15 + -1,param_2 + (iVar15 + -1),uVar7,lVar17), iVar9 == 0
           )))))) {
        param_2[(longlong)(int)(iVar15 - param_6) + -2] =
             param_2[(longlong)(int)(iVar15 - param_6) + -2] ^ 1;
        puVar12 = (ulonglong *)(param_2 + (longlong)(int)(iVar15 - param_6) + -1);
        if (0 < (int)param_6) {
          if ((0x3f < param_6) &&
             ((pbVar10 + (int)(param_6 - 1) < puVar12 ||
              ((byte *)((longlong)(int)(param_6 - 1) + (longlong)puVar12) < pbVar10)))) {
            uVar7 = param_6 & 0x8000003f;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
            }
            puVar13 = (ulonglong *)(pbVar10 + 0x10);
            do {
              uVar20 = (int)pbVar22 + 0x40;
              pbVar22 = (byte *)(ulonglong)uVar20;
              uVar3 = puVar13[-1];
              puVar1 = puVar13 + 8;
              uVar4 = *puVar13;
              uVar5 = puVar13[1];
              *puVar12 = puVar13[-2] ^ *puVar12;
              puVar12[1] = uVar3 ^ puVar12[1];
              puVar12[2] = puVar12[2] ^ uVar4;
              puVar12[3] = puVar12[3] ^ uVar5;
              uVar3 = puVar13[3];
              puVar12[4] = puVar13[2] ^ puVar12[4];
              puVar12[5] = uVar3 ^ puVar12[5];
              uVar3 = puVar13[5];
              puVar12[6] = puVar13[4] ^ puVar12[6];
              puVar12[7] = uVar3 ^ puVar12[7];
              puVar12 = puVar12 + 8;
              puVar13 = puVar1;
            } while ((longlong)((-0x10 - (longlong)pbVar10) + (longlong)puVar1) <
                     (longlong)(int)(param_6 - uVar7));
          }
          for (lVar17 = (longlong)(int)uVar20; lVar17 < (int)param_6; lVar17 = lVar17 + 1) {
            *(byte *)puVar12 = (byte)*puVar12 ^ pbVar10[lVar17];
            puVar12 = (ulonglong *)((longlong)puVar12 + 1);
          }
        }
        if (bVar19 != 0) {
          *param_2 = *param_2 & (byte)(0xff >> (8 - bVar19 & 0x1f));
        }
        param_2[(longlong)iVar8 + -1] = 0xbc;
        pbVar23 = (byte *)0x1;
      }
      goto LAB_143d9e69c;
    }
    pbVar10 = (byte *)CRYPTO_malloc((longlong)(int)param_6,"crypto\\rsa\\rsa_pss.c",0xc5);
    if (pbVar10 != (byte *)0x0) {
      iVar9 = RAND_bytes(pbVar10,param_6);
      if (iVar9 < 1) goto LAB_143d9e69c;
      goto LAB_143d9e4bf;
    }
    uVar24 = CONCAT44(uVar16,200);
    uVar16 = 0x41;
  }
  ERR_put_error(4,0x98,uVar16,"crypto\\rsa\\rsa_pss.c",uVar24);
LAB_143d9e69c:
  EVP_MD_CTX_free(pbVar11);
  CRYPTO_clear_free(pbVar10,(longlong)(int)param_6,"crypto\\rsa\\rsa_pss.c",0xf7);
  return pbVar23;
}



// FUNCTION 143d9e6e0 RSA_verify_PKCS1_PSS_mgf1 body=1100 status=ok
// SIG undefined RSA_verify_PKCS1_PSS_mgf1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong *
RSA_verify_PKCS1_PSS_mgf1
          (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,byte *param_5,
          int param_6)

{
  ulonglong *puVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong *puVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  byte bVar21;
  longlong lVar22;
  byte bVar23;
  size_t _Size;
  ulonglong *puVar24;
  ulonglong *puVar25;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_c8;
  int local_c0;
  byte *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  ulonglong *puVar14;
  ulonglong *puVar20;
  
  uStack_48 = 0x143d9e6f7;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  puVar14 = (ulonglong *)0x0;
  puVar24 = (ulonglong *)0x0;
  uVar13 = 0;
  local_a8 = param_3;
  local_a0 = param_2;
  local_c8 = EVP_MD_CTX_new();
  lVar16 = local_c8;
  puVar8 = (ulonglong *)0x0;
  puVar25 = puVar24;
  if (local_c8 == 0) goto LAB_143d9eae8;
  local_b0 = param_4;
  if (param_4 == 0) {
    local_b0 = param_3;
  }
  iVar5 = EVP_MD_size(param_3);
  lVar16 = local_c8;
  puVar8 = puVar14;
  puVar25 = puVar14;
  local_c0 = iVar5;
  if (iVar5 < 0) goto LAB_143d9eae8;
  iVar7 = iVar5;
  if ((param_6 != -1) && (iVar7 = param_6, param_6 < -3)) {
    local_d8 = CONCAT44(local_d8._4_4_,0x3f);
LAB_143d9e7d8:
    ERR_put_error(4,0x7e,0x88,"crypto\\rsa\\rsa_pss.c");
    lVar16 = local_c8;
    goto LAB_143d9eae8;
  }
  cVar4 = BN_num_bits(*(undefined8 *)(param_1 + 0x18));
  bVar23 = cVar4 - 1U & 7;
  iVar6 = RSA_size(param_1);
  if ((*param_5 & (byte)(0xff << bVar23)) != 0) {
    local_d8 = CONCAT44(local_d8._4_4_,0x46);
    ERR_put_error(4,0x7e,0x85,"crypto\\rsa\\rsa_pss.c");
    lVar16 = local_c8;
    goto LAB_143d9eae8;
  }
  if (bVar23 == 0) {
    iVar6 = iVar6 + -1;
    param_5 = param_5 + 1;
  }
  if (iVar6 < iVar5 + 2) {
    local_d8 = CONCAT44(local_d8._4_4_,0x4e);
LAB_143d9e81e:
    uVar18 = 0x6d;
  }
  else {
    iVar5 = iVar6 - iVar5;
    iVar15 = iVar5 + -2;
    if ((iVar7 != -3) && (bVar2 = iVar15 < iVar7, iVar15 = iVar7, bVar2)) {
      local_d8 = CONCAT44(local_d8._4_4_,0x54);
      goto LAB_143d9e81e;
    }
    if (param_5[(longlong)iVar6 + -1] == 0xbc) {
      uVar17 = iVar5 - 1;
      lVar22 = (longlong)(int)uVar17;
      local_b8 = param_5 + lVar22;
      puVar8 = (ulonglong *)CRYPTO_malloc(lVar22,"crypto\\rsa\\rsa_pss.c",0x5d);
      if (puVar8 == (ulonglong *)0x0) {
        local_d8 = CONCAT44(local_d8._4_4_,0x5f);
        uVar18 = 0x41;
      }
      else {
        local_d8 = local_b0;
        iVar7 = PKCS1_MGF1(puVar8,uVar17,local_b8,local_c0);
        lVar16 = local_c8;
        if (iVar7 < 0) goto LAB_143d9eae8;
        uVar19 = uVar13;
        if (((0 < (int)uVar17) && (0x3f < uVar17)) &&
           ((param_5 + (iVar5 + -2) < puVar8 ||
            ((byte *)((longlong)(iVar5 + -2) + (longlong)puVar8) < param_5)))) {
          uVar11 = uVar17 & 0x8000003f;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xffffffc0) + 1;
          }
          lVar12 = (longlong)param_5 - (longlong)puVar8;
          puVar10 = puVar8;
          puVar20 = puVar14;
          do {
            uVar19 = (int)puVar20 + 0x40;
            puVar20 = (ulonglong *)(ulonglong)uVar19;
            uVar3 = ((ulonglong *)((longlong)puVar10 + lVar12))[1];
            *puVar10 = *(ulonglong *)((longlong)puVar10 + lVar12) ^ *puVar10;
            puVar10[1] = uVar3 ^ puVar10[1];
            puVar1 = (ulonglong *)((longlong)puVar10 + lVar12 + 0x10);
            uVar3 = puVar1[1];
            puVar10[2] = *puVar1 ^ puVar10[2];
            puVar10[3] = uVar3 ^ puVar10[3];
            puVar1 = (ulonglong *)((longlong)puVar10 + lVar12 + 0x20);
            uVar3 = puVar1[1];
            puVar10[4] = *puVar1 ^ puVar10[4];
            puVar10[5] = uVar3 ^ puVar10[5];
            puVar1 = (ulonglong *)((longlong)puVar10 + lVar12 + 0x30);
            uVar3 = puVar1[1];
            puVar10[6] = *puVar1 ^ puVar10[6];
            puVar10[7] = uVar3 ^ puVar10[7];
            puVar10 = puVar10 + 8;
          } while ((longlong)puVar10 - (longlong)puVar8 < (longlong)(int)(uVar17 - uVar11));
        }
        if ((int)uVar19 < lVar22) {
          pbVar9 = (byte *)((longlong)(int)uVar19 + (longlong)puVar8);
          do {
            *pbVar9 = *pbVar9 ^ pbVar9[(longlong)param_5 - (longlong)puVar8];
            pbVar9 = pbVar9 + 1;
          } while ((longlong)pbVar9 - (longlong)puVar8 < lVar22);
        }
        bVar21 = (byte)*puVar8;
        if (bVar23 != 0) {
          bVar21 = (byte)(0xff >> (8 - bVar23 & 0x1f)) & bVar21;
          *(byte *)puVar8 = bVar21;
        }
        if (bVar21 == 0) {
          puVar10 = puVar8;
          do {
            uVar13 = (uint)puVar14;
            if (iVar5 + -2 <= (int)uVar13) break;
            puVar10 = (ulonglong *)((longlong)puVar10 + 1);
            uVar13 = uVar13 + 1;
            puVar14 = (ulonglong *)(ulonglong)uVar13;
          } while (*(byte *)puVar10 == 0);
        }
        if (*(byte *)((longlong)(int)uVar13 + (longlong)puVar8) == 1) {
          iVar5 = uVar17 - (uVar13 + 1);
          if ((iVar15 == -2) || (iVar5 == iVar15)) {
            iVar7 = EVP_DigestInit_ex(local_c8,local_a8,0);
            puVar25 = puVar24;
            if ((iVar7 != 0) && (iVar7 = EVP_DigestUpdate(lVar16,&DAT_145db27b0,8), iVar7 != 0)) {
              _Size = (size_t)local_c0;
              iVar7 = EVP_DigestUpdate(lVar16,local_a0,_Size);
              if ((iVar7 != 0) &&
                 (((iVar5 == 0 ||
                   (iVar5 = EVP_DigestUpdate(lVar16,(byte *)((longlong)(int)(uVar13 + 1) +
                                                            (longlong)puVar8),(longlong)iVar5),
                   iVar5 != 0)) && (iVar5 = EVP_DigestFinal_ex(lVar16,local_98,0), iVar5 != 0)))) {
                iVar5 = _guard_xfg_dispatch_icall_nop(local_98,local_b8,_Size);
                if (iVar5 == 0) {
                  puVar25 = (ulonglong *)0x1;
                }
                else {
                  local_d8 = CONCAT44(local_d8._4_4_,0x7c);
                  ERR_put_error(4,0x7e,0x68,"crypto\\rsa\\rsa_pss.c");
                }
              }
            }
            goto LAB_143d9eae8;
          }
          local_d8 = CONCAT44(local_d8._4_4_,0x6e);
          goto LAB_143d9e7d8;
        }
        local_d8 = CONCAT44(local_d8._4_4_,0x6a);
        uVar18 = 0x87;
      }
    }
    else {
      local_d8 = CONCAT44(local_d8._4_4_,0x58);
      uVar18 = 0x86;
      puVar8 = (ulonglong *)0x0;
    }
  }
  ERR_put_error(4,0x7e,uVar18,"crypto\\rsa\\rsa_pss.c");
  lVar16 = local_c8;
LAB_143d9eae8:
  CRYPTO_free(puVar8,"crypto\\rsa\\rsa_pss.c",0x83);
  EVP_MD_CTX_free(lVar16);
  return puVar25;
}



// FUNCTION 143d9eb30 EVP_PBE_scrypt body=876 status=ok
// SIG undefined EVP_PBE_scrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
EVP_PBE_scrypt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
              ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8,
              longlong param_9,undefined4 param_10)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 local_68;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_68 = 0;
  if (param_6 == 0) {
    return 0;
  }
  if (param_7 == 0) {
    return 0;
  }
  if (param_5 < 2) {
    return 0;
  }
  if ((param_5 & param_5 - 1) != 0) {
    return 0;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_6;
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x3fffffff)) / auVar3,0) < param_7) {
    uVar7 = CONCAT44(uVar14,0xae);
LAB_143d9eba4:
    ERR_put_error(6,0xb5,0xac,"crypto\\evp\\pbe_scrypt.c",uVar7);
    return 0;
  }
  if ((param_6 << 4 < 0x40) && ((ulonglong)(1L << ((byte)(param_6 << 4) & 0x3f)) <= param_5)) {
    uVar7 = CONCAT44(uVar14,0xb9);
    goto LAB_143d9eba4;
  }
  uVar9 = param_6 * param_7 * 0x80;
  if (0x7fffffff < uVar9) {
    uVar7 = CONCAT44(uVar14,0xcb);
LAB_143d9ec57:
    ERR_put_error(6,0xb5,0xac,"crypto\\evp\\pbe_scrypt.c",uVar7);
    return 0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_6;
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ffffffffffffff)) / auVar4,0) < param_5 + 2) {
    uVar7 = CONCAT44(uVar14,0xd5);
    goto LAB_143d9ec57;
  }
  uVar10 = (param_5 + 2) * param_6 * 0x80;
  if (~uVar10 < uVar9) {
    uVar7 = CONCAT44(uVar14,0xdc);
    goto LAB_143d9ec57;
  }
  uVar10 = uVar10 + uVar9;
  uVar8 = 0x2000000;
  if (param_8 != 0) {
    uVar8 = param_8;
  }
  if (uVar8 < uVar10) {
    ERR_put_error(6,0xb5,0xac,"crypto\\evp\\pbe_scrypt.c",CONCAT44(uVar14,0xe8));
    return 0;
  }
  if (param_9 == 0) {
    return 1;
  }
  lVar6 = CRYPTO_malloc(uVar10,"crypto\\evp\\pbe_scrypt.c",0xf0);
  if (lVar6 == 0) {
    ERR_put_error(6,0xb5,0x41,"crypto\\evp\\pbe_scrypt.c",CONCAT44(uVar14,0xf2));
    return 0;
  }
  lVar1 = lVar6 + uVar9;
  uVar7 = EVP_sha256();
  uVar12 = CONCAT44(uVar14,1);
  iVar5 = PKCS5_PBKDF2_HMAC(param_1,param_2,param_3,param_4,uVar12,uVar7,(int)uVar9,lVar6);
  uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (iVar5 != 0) {
    if (param_7 != 0) {
      lVar2 = param_6 * 0x80 + lVar1;
      lVar11 = lVar6;
      do {
        lVar13 = lVar2;
        scryptROMix(lVar11,param_6,param_5,lVar1,lVar2,param_6 * 0x100 + lVar1);
        uVar14 = (undefined4)((ulonglong)lVar13 >> 0x20);
        lVar11 = lVar11 + param_6 * 0x80;
        param_7 = param_7 - 1;
      } while (param_7 != 0);
    }
    uVar7 = EVP_sha256();
    uVar12 = CONCAT44(uVar14,1);
    iVar5 = PKCS5_PBKDF2_HMAC(param_1,param_2,lVar6,uVar9 & 0xffffffff,uVar12,uVar7,param_10,param_9
                             );
    uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if (iVar5 != 0) {
      local_68 = 1;
      goto LAB_143d9ee56;
    }
  }
  ERR_put_error(6,0xb5,0xb5,"crypto\\evp\\pbe_scrypt.c",CONCAT44(uVar14,0x105));
LAB_143d9ee56:
  CRYPTO_clear_free(lVar6,uVar10,"crypto\\evp\\pbe_scrypt.c",0x107);
  return local_68;
}



// FUNCTION 143d9eea0 scryptBlockMix body=1162 status=ok
// SIG undefined scryptBlockMix(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void scryptBlockMix(longlong param_1,ulonglong *param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_158 [32];
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  longlong local_100;
  ulonglong local_f8;
  ulonglong *local_f0;
  longlong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 local_b8 [8];
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined1 auStack_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_f8 = 0;
  uVar12 = param_2[param_3 * 0x10 + -6];
  uVar16 = (param_2 + param_3 * 0x10 + -6)[1];
  local_88 = param_2[param_3 * 0x10 + -8];
  uStack_80 = (param_2 + param_3 * 0x10 + -8)[1];
  uVar4 = param_2[param_3 * 0x10 + -4];
  uVar5 = (param_2 + param_3 * 0x10 + -4)[1];
  local_78 = (uint)uVar12;
  uStack_74 = (uint)(uVar12 >> 0x20);
  uStack_70 = (uint)uVar16;
  uStack_6c = (uint)(uVar16 >> 0x20);
  local_d8 = param_3 * 2;
  local_68 = (uint)uVar4;
  uStack_64 = (uint)(uVar4 >> 0x20);
  uStack_60 = (uint)uVar5;
  uStack_5c = (uint)(uVar5 >> 0x20);
  local_58 = param_2[param_3 * 0x10 + -2];
  auStack_50 = (undefined1  [8])(param_2 + param_3 * 0x10 + -2)[1];
  local_e8 = param_3;
  local_e0 = param_1;
  if (local_d8 != 0) {
    do {
      uVar12 = 0;
      if (((uint *)((longlong)param_2 + 0x3cU) < &local_88) || (auStack_50 + 4 < param_2)) {
        local_88 = *param_2 ^ local_88;
        uStack_80 = param_2[1] ^ uStack_80;
        uVar12 = param_2[2] ^ CONCAT44(uStack_74,local_78);
        uVar16 = param_2[3] ^ CONCAT44(uStack_6c,uStack_70);
        local_78 = (uint)uVar12;
        uStack_74 = (uint)(uVar12 >> 0x20);
        uStack_70 = (uint)uVar16;
        uStack_6c = (uint)(uVar16 >> 0x20);
        uVar12 = param_2[4] ^ CONCAT44(uStack_64,local_68);
        uVar16 = param_2[5] ^ CONCAT44(uStack_5c,uStack_60);
        local_68 = (uint)uVar12;
        uStack_64 = (uint)(uVar12 >> 0x20);
        uStack_60 = (uint)uVar16;
        uStack_5c = (uint)(uVar16 >> 0x20);
        puVar3 = param_2 + 6;
        puVar6 = param_2 + 7;
        param_2 = param_2 + 8;
        local_58 = *puVar3 ^ local_58;
        auStack_50 = (undefined1  [8])(*puVar6 ^ (ulonglong)auStack_50);
      }
      else {
        do {
          uVar16 = *param_2;
          param_2 = (ulonglong *)((longlong)param_2 + 4);
          puVar1 = (uint *)((longlong)&local_88 + uVar12 * 4);
          *puVar1 = *puVar1 ^ (uint)uVar16;
          uVar12 = uVar12 + 1;
        } while (uVar12 < 0x10);
      }
      local_a8._4_4_ = uStack_64;
      local_a8._0_4_ = local_68;
      local_a8._8_4_ = uStack_60;
      local_a8._12_4_ = uStack_5c;
      local_b8._4_4_ = uStack_74;
      local_b8._0_4_ = local_78;
      uStack_b0._0_4_ = uStack_70;
      uStack_b0._4_4_ = uStack_6c;
      local_120 = auStack_50._0_4_;
      local_124 = uStack_64;
      local_128 = uStack_6c;
      local_12c = uStack_80._4_4_;
      local_130 = (uint)uStack_80;
      local_100 = 4;
      local_134 = uStack_60;
      local_104 = (uint)local_88;
      uVar15 = local_78;
      local_108 = uStack_74;
      uVar14 = uStack_5c;
      local_138 = auStack_50._4_4_;
      uVar11 = local_68;
      local_110 = uStack_70;
      local_98 = (uint)local_58;
      uStack_94 = local_58._4_4_;
      local_10c = local_88._4_4_;
      do {
        auVar10 = local_a8;
        uVar15 = ((local_104 + local_98) * 0x80 | local_104 + local_98 >> 0x19) ^ uVar15;
        local_124 = ((local_10c + local_108) * 0x80 | local_10c + local_108 >> 0x19) ^ local_124;
        local_11c = ((uVar15 + local_104) * 0x200 | uVar15 + local_104 >> 0x17) ^ uVar11;
        local_118 = ((uVar15 + local_11c) * 0x2000 | uVar15 + local_11c >> 0x13) ^ local_98;
        local_104 = (local_11c + local_118 >> 0xe | (local_11c + local_118) * 0x40000) ^ local_104;
        local_114 = ((local_124 + local_108) * 0x200 | local_124 + local_108 >> 0x17) ^ uStack_94;
        local_10c = ((local_124 + local_114) * 0x2000 | local_124 + local_114 >> 0x13) ^ local_10c;
        uVar11 = local_10c + local_114;
        local_108 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ local_108;
        local_12c = ((uVar14 + local_138) * 0x80 | uVar14 + local_138 >> 0x19) ^ local_12c;
        local_120 = ((local_110 + local_134) * 0x80 | local_110 + local_134 >> 0x19) ^ local_120;
        local_128 = ((local_12c + local_138) * 0x200 | local_12c + local_138 >> 0x17) ^ local_128;
        local_130 = ((local_134 + local_120) * 0x200 | local_134 + local_120 >> 0x17) ^ local_130;
        local_110 = ((local_130 + local_120) * 0x2000 | local_130 + local_120 >> 0x13) ^ local_110;
        uVar14 = ((local_128 + local_12c) * 0x2000 | local_128 + local_12c >> 0x13) ^ uVar14;
        local_10c = ((local_12c + local_104) * 0x80 | local_12c + local_104 >> 0x19) ^ local_10c;
        uVar11 = local_130 + local_110;
        local_134 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ local_134;
        uVar11 = local_128 + uVar14;
        local_138 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ local_138;
        local_130 = ((local_10c + local_104) * 0x200 | local_10c + local_104 >> 0x17) ^ local_130;
        local_12c = ((local_10c + local_130) * 0x2000 | local_10c + local_130 >> 0x13) ^ local_12c;
        local_104 = (local_130 + local_12c >> 0xe | (local_130 + local_12c) * 0x40000) ^ local_104;
        local_110 = ((uVar15 + local_108) * 0x80 | uVar15 + local_108 >> 0x19) ^ local_110;
        uStack_b0._0_4_ = local_110;
        local_128 = ((local_108 + local_110) * 0x200 | local_108 + local_110 >> 0x17) ^ local_128;
        uStack_b0._4_4_ = local_128;
        local_98 = ((local_138 + local_120) * 0x80 | local_138 + local_120 >> 0x19) ^ local_118;
        uVar15 = ((local_128 + local_110) * 0x2000 | local_128 + local_110 >> 0x13) ^ uVar15;
        uVar14 = ((local_134 + local_124) * 0x80 | local_134 + local_124 >> 0x19) ^ uVar14;
        local_108 = (uVar15 + local_128 >> 0xe | (uVar15 + local_128) * 0x40000) ^ local_108;
        uStack_94 = ((local_98 + local_138) * 0x200 | local_98 + local_138 >> 0x17) ^ local_114;
        auVar7._4_8_ = uStack_b0;
        auVar7._0_4_ = local_108;
        auVar9._12_4_ = 0;
        auVar9._0_12_ = auVar7;
        _local_b8 = auVar9 << 0x20;
        uVar11 = ((local_134 + uVar14) * 0x200 | local_134 + uVar14 >> 0x17) ^ local_11c;
        local_124 = ((uVar11 + uVar14) * 0x2000 | uVar11 + uVar14 >> 0x13) ^ local_124;
        auVar8._4_8_ = local_a8._8_8_;
        auVar8._0_4_ = local_124;
        local_a8._0_8_ = auVar8._0_8_ << 0x20;
        local_134 = (local_124 + uVar11 >> 0xe | (local_124 + uVar11) * 0x40000) ^ local_134;
        local_a8._12_4_ = auVar10._12_4_;
        local_a8._8_4_ = local_134;
        local_120 = ((local_98 + uStack_94) * 0x2000 | local_98 + uStack_94 >> 0x13) ^ local_120;
        local_138 = (local_120 + uStack_94 >> 0xe | (local_120 + uStack_94) * 0x40000) ^ local_138;
        local_100 = local_100 + -1;
      } while (local_100 != 0);
      local_a8._0_4_ = uVar11;
      local_88 = CONCAT44(local_10c + local_88._4_4_,local_104 + (uint)local_88);
      uStack_80 = CONCAT44(local_12c + uStack_80._4_4_,local_130 + (uint)uStack_80);
      stack0xffffffffffffff4c = auVar7;
      local_b8._0_4_ = uVar15;
      local_78 = uVar15 + local_78;
      uStack_74 = local_108 + uStack_74;
      uStack_70 = local_110 + uStack_70;
      uStack_6c = local_128 + uStack_6c;
      local_a8._12_4_ = uVar14;
      local_68 = uVar11 + local_68;
      uStack_64 = local_124 + uStack_64;
      uStack_60 = local_134 + uStack_60;
      uStack_5c = uVar14 + uStack_5c;
      local_58 = CONCAT44(uStack_94 + local_58._4_4_,local_98 + (uint)local_58);
      auStack_50._4_4_ = local_138 + auStack_50._4_4_;
      auStack_50._0_4_ = local_120 + auStack_50._0_4_;
      local_f0 = param_2;
      local_c8 = local_104;
      uStack_c4 = local_10c;
      uStack_c0 = local_130;
      uStack_bc = local_12c;
      uStack_90 = local_120;
      uStack_8c = local_138;
      FUN_14004ff40(&local_c8,0x40);
      uVar15 = (uint)local_f8;
      uVar12 = local_f8 >> 1;
      local_f8 = local_f8 + 1;
      lVar13 = ((ulonglong)(uVar15 & 1) * local_e8 + uVar12) * 0x40;
      *(ulonglong *)(lVar13 + local_e0) = local_88;
      ((ulonglong *)(lVar13 + local_e0))[1] = uStack_80;
      puVar2 = (undefined8 *)(lVar13 + 0x10 + local_e0);
      *puVar2 = CONCAT44(uStack_74,local_78);
      puVar2[1] = CONCAT44(uStack_6c,uStack_70);
      puVar2 = (undefined8 *)(lVar13 + 0x20 + local_e0);
      *puVar2 = CONCAT44(uStack_64,local_68);
      puVar2[1] = CONCAT44(uStack_5c,uStack_60);
      puVar3 = (ulonglong *)(lVar13 + 0x30 + local_e0);
      *puVar3 = local_58;
      puVar3[1] = (ulonglong)auStack_50;
      param_2 = local_f0;
    } while (local_f8 < local_d8);
  }
  FUN_14004ff40(&local_88,0x40);
  return;
}



// FUNCTION 143d9f330 scryptROMix body=626 status=ok
// SIG undefined scryptROMix(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void scryptROMix(byte *param_1,longlong param_2,ulonglong param_3,ulonglong *param_4,uint *param_5,
                uint *param_6)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  uint3 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  
  uVar18 = param_2 * 0x20;
  pbVar13 = param_1;
  puVar16 = param_6;
  for (uVar19 = uVar18; uVar19 != 0; uVar19 = uVar19 - 1) {
    bVar3 = *pbVar13;
    *puVar16 = (uint)bVar3;
    uVar5 = CONCAT11(pbVar13[1],bVar3);
    *puVar16 = (uint)uVar5;
    uVar6 = CONCAT12(pbVar13[2],uVar5);
    *puVar16 = (uint)uVar6;
    *puVar16 = CONCAT13(pbVar13[3],uVar6);
    puVar16 = puVar16 + 1;
    pbVar13 = pbVar13 + 4;
  }
  if (1 < param_3) {
    lVar21 = param_3 - 1;
    do {
      scryptBlockMix(puVar16,puVar16 + param_2 * -0x20,param_2);
      puVar16 = puVar16 + param_2 * 0x20;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  scryptBlockMix(param_4,(uint *)((param_3 * 0x80 + -0x80) * param_2 + (longlong)param_6),param_2);
  uVar17 = 0;
  for (uVar19 = param_3; uVar19 != 0; uVar19 = uVar19 - 1) {
    puVar14 = (ulonglong *)
              (param_6 +
              ((ulonglong)(uint)param_4[param_2 * 0x10 + -8] % param_3 & 0xffffffff) * param_2 *
              0x20);
    if (uVar18 != 0) {
      uVar20 = uVar17;
      if (((0xf < uVar18) &&
          (((uint *)((longlong)puVar14 + (uVar18 - 1) * 4) < param_5 ||
           (param_5 + param_2 * 0x20 + -1 < puVar14)))) &&
         (((uint *)((longlong)param_4 + param_2 * 0x80 + -4) < param_5 ||
          (uVar20 = 0, param_5 + param_2 * 0x20 + -1 < param_4)))) {
        puVar15 = (ulonglong *)(param_5 + 4);
        uVar20 = uVar17;
        do {
          uVar7 = puVar14[1];
          uVar20 = uVar20 + 0x10;
          puVar2 = (ulonglong *)
                   ((longlong)param_4 + (-0x10 - (longlong)param_5) + (longlong)puVar15);
          uVar8 = puVar2[1];
          puVar1 = puVar15 + 8;
          uVar9 = puVar14[2];
          uVar10 = puVar14[3];
          puVar15[-2] = *puVar2 ^ *puVar14;
          puVar15[-1] = uVar8 ^ uVar7;
          puVar2 = (ulonglong *)((longlong)param_4 + (-0x40 - (longlong)param_5) + (longlong)puVar1)
          ;
          uVar7 = puVar2[1];
          uVar11 = puVar14[4];
          uVar12 = puVar14[5];
          *puVar15 = *puVar2 ^ uVar9;
          puVar15[1] = uVar7 ^ uVar10;
          puVar2 = (ulonglong *)((longlong)param_4 + (-0x30 - (longlong)param_5) + (longlong)puVar1)
          ;
          uVar9 = puVar2[1];
          uVar7 = puVar14[6];
          uVar8 = puVar14[7];
          puVar14 = puVar14 + 8;
          puVar15[2] = *puVar2 ^ uVar11;
          puVar15[3] = uVar9 ^ uVar12;
          puVar2 = (ulonglong *)((longlong)param_4 + (-0x20 - (longlong)param_5) + (longlong)puVar1)
          ;
          uVar9 = puVar2[1];
          puVar15[4] = *puVar2 ^ uVar7;
          puVar15[5] = uVar9 ^ uVar8;
          puVar15 = puVar1;
        } while (uVar20 < uVar18);
      }
      if (uVar20 < uVar18) {
        lVar21 = uVar18 - uVar20;
        puVar16 = param_5 + uVar20;
        do {
          uVar20 = *puVar14;
          puVar14 = (ulonglong *)((longlong)puVar14 + 4);
          *puVar16 = *(uint *)(((longlong)param_4 - (longlong)param_5) + (longlong)puVar16) ^
                     (uint)uVar20;
          lVar21 = lVar21 + -1;
          puVar16 = puVar16 + 1;
        } while (lVar21 != 0);
      }
    }
    scryptBlockMix(param_4,param_5,param_2);
  }
  if (uVar18 != 0) {
    do {
      uVar4 = *(uint *)((longlong)param_4 + uVar17 * 4);
      *param_1 = (byte)uVar4;
      uVar17 = uVar17 + 1;
      param_1[1] = (byte)(uVar4 >> 8);
      param_1[2] = (byte)(uVar4 >> 0x10);
      param_1[3] = (byte)(uVar4 >> 0x18);
      param_1 = param_1 + 4;
    } while (uVar17 < uVar18);
  }
  return;
}



// FUNCTION 143d9f5b0 FUN_143d9f5b0 body=601 status=ok
// SIG undefined FUN_143d9f5b0(void)

undefined8 FUN_143d9f5b0(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = param_1[1];
  uVar7 = param_1[2];
  uVar6 = param_1[3];
  uVar5 = *param_1 << 0x38;
  if (param_3 == *(int *)((longlong)param_1 + 0x2c)) {
    switch((int)param_1[5]) {
    case 7:
      uVar5 = uVar5 | (ulonglong)*(byte *)((longlong)param_1 + 0x3e) << 0x30;
    case 6:
      uVar5 = uVar5 | (ulonglong)*(byte *)((longlong)param_1 + 0x3d) << 0x28;
    case 5:
      uVar5 = uVar5 | (ulonglong)*(byte *)((longlong)param_1 + 0x3c) << 0x20;
    case 4:
      uVar5 = uVar5 | (ulonglong)*(byte *)((longlong)param_1 + 0x3b) << 0x18;
    case 3:
      uVar5 = uVar5 | (ulonglong)*(byte *)((longlong)param_1 + 0x3a) << 0x10;
    case 2:
      uVar5 = uVar5 | (ulonglong)*(byte *)((longlong)param_1 + 0x39) << 8;
    case 1:
      uVar5 = uVar5 | *(byte *)(param_1 + 7);
    default:
      uVar1 = param_1[4] ^ uVar5;
      if (0 < (int)*(uint *)(param_1 + 6)) {
        uVar4 = (ulonglong)*(uint *)(param_1 + 6);
        do {
          uVar8 = uVar8 + uVar7;
          uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar8;
          uVar2 = (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar6 + uVar1;
          uVar6 = uVar6 + uVar1 + uVar7;
          uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar2;
          uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar6;
          uVar1 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar8;
          uVar6 = uVar6 << 0x20 | uVar6 >> 0x20;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar8 = uVar8 ^ uVar5;
      uVar5 = 0xee;
      if (*(int *)((longlong)param_1 + 0x2c) != 0x10) {
        uVar5 = 0xff;
      }
      uVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
      uVar5 = uVar5 ^ uVar6;
      if (0 < (int)*(uint *)((longlong)param_1 + 0x34)) {
        do {
          uVar8 = uVar8 + uVar7;
          uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar8;
          uVar6 = (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar5 + uVar1;
          uVar5 = uVar5 + uVar1 + uVar7;
          uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar6;
          uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar5;
          uVar1 = (uVar6 << 0x15 | uVar6 >> 0x2b) ^ uVar8;
          uVar5 = uVar5 << 0x20 | uVar5 >> 0x20;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar6 = uVar1 ^ uVar5 ^ uVar7 ^ uVar8;
      *param_2 = (char)uVar6;
      param_2[1] = (char)(uVar6 >> 8);
      param_2[2] = (char)(uVar6 >> 0x10);
      param_2[3] = (char)(uVar6 >> 0x18);
      param_2[5] = (char)(uVar6 >> 0x28);
      param_2[4] = (char)(uVar6 >> 0x20);
      param_2[6] = (char)(uVar6 >> 0x30);
      param_2[7] = (char)(uVar6 >> 0x38);
      if (*(int *)((longlong)param_1 + 0x2c) != 8) {
        uVar6 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
        uVar7 = uVar7 ^ 0xdd;
        if (0 < (int)*(uint *)((longlong)param_1 + 0x34)) {
          do {
            uVar8 = uVar8 + uVar7;
            uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar8;
            uVar4 = (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar5 + uVar1;
            uVar5 = uVar5 + uVar1 + uVar7;
            uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar4;
            uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar5;
            uVar1 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar8;
            uVar5 = uVar5 << 0x20 | uVar5 >> 0x20;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        uVar8 = uVar1 ^ uVar5 ^ uVar7 ^ uVar8;
        param_2[8] = (char)uVar8;
        param_2[9] = (char)(uVar8 >> 8);
        param_2[10] = (char)(uVar8 >> 0x10);
        param_2[0xb] = (char)(uVar8 >> 0x18);
        param_2[0xd] = (char)(uVar8 >> 0x28);
        param_2[0xc] = (char)(uVar8 >> 0x20);
        param_2[0xf] = (char)(uVar8 >> 0x38);
        param_2[0xe] = (char)(uVar8 >> 0x30);
      }
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143d9f830 SipHash_Init body=331 status=ok
// SIG undefined SipHash_Init(void)

undefined8 SipHash_Init(undefined8 *param_1,ulonglong *param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0x2c);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (iVar4 == 0) {
    iVar4 = 0x10;
  }
  *(int *)((longlong)param_1 + 0x2c) = iVar4;
  iVar3 = 2;
  if (param_3 != 0) {
    iVar3 = param_3;
  }
  *(int *)(param_1 + 6) = iVar3;
  iVar3 = 4;
  if (param_4 != 0) {
    iVar3 = param_4;
  }
  *(int *)((longlong)param_1 + 0x34) = iVar3;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = uVar1 ^ 0x736f6d6570736575;
  param_1[2] = uVar2 ^ 0x646f72616e646f6d;
  param_1[3] = uVar1 ^ 0x6c7967656e657261;
  param_1[4] = uVar2 ^ 0x7465646279746573;
  if (iVar4 == 0x10) {
    param_1[2] = uVar2 ^ 0x646f72616e646f83;
  }
  return 1;
}



// FUNCTION 143d9f980 SipHash_Update body=559 status=ok
// SIG undefined SipHash_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SipHash_Update(longlong *param_1,undefined2 *param_2,ulonglong param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  void *_Dst;
  undefined2 *_Src;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  uint uVar10;
  
  *param_1 = *param_1 + param_3;
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  uVar6 = param_1[3];
  uVar3 = param_1[4];
  uVar10 = *(uint *)(param_1 + 5);
  if (uVar10 != 0) {
    uVar2 = (ulonglong)(8 - uVar10);
    _Dst = (void *)((longlong)param_1 + (ulonglong)uVar10 + 0x38);
    if (param_3 < uVar2) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3);
      *(int *)(param_1 + 5) = (int)param_1[5] + (int)param_3;
      return;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,uVar2);
    param_3 = param_3 - uVar2;
    param_2 = (undefined2 *)((longlong)param_2 + uVar2);
    uVar2 = (ulonglong)*(uint *)(param_1 + 6);
    uVar3 = uVar3 ^ param_1[7];
    if (0 < (int)*(uint *)(param_1 + 6)) {
      do {
        uVar7 = uVar7 + uVar8;
        uVar8 = (uVar8 << 0xd | uVar8 >> 0x33) ^ uVar7;
        uVar4 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar6 + uVar3;
        uVar6 = uVar6 + uVar3 + uVar8;
        uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar4;
        uVar8 = (uVar8 << 0x11 | uVar8 >> 0x2f) ^ uVar6;
        uVar3 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar7;
        uVar6 = uVar6 << 0x20 | uVar6 >> 0x20;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar7 = uVar7 ^ param_1[7];
  }
  uVar10 = (uint)param_3 & 7;
  _Src = (undefined2 *)((longlong)param_2 + (param_3 - uVar10));
  if (param_2 != _Src) {
    puVar9 = param_2 + 3;
    do {
      uVar4 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(*puVar9,*(undefined1 *)
                                                                             ((longlong)puVar9 + -1)
                                                                   ),*(undefined1 *)(puVar9 + -1)),
                                                  *(undefined1 *)((longlong)puVar9 + -3)),
                                         *(undefined1 *)(puVar9 + -2)),
                                *(undefined1 *)((longlong)puVar9 + -5)),*(undefined1 *)(puVar9 + -3)
                      );
      uVar3 = uVar3 ^ uVar4;
      uVar2 = (ulonglong)*(uint *)(param_1 + 6);
      if (0 < (int)*(uint *)(param_1 + 6)) {
        do {
          uVar7 = uVar7 + uVar8;
          uVar8 = (uVar8 << 0xd | uVar8 >> 0x33) ^ uVar7;
          uVar5 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar6 + uVar3;
          uVar6 = uVar6 + uVar3 + uVar8;
          uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar5;
          uVar8 = (uVar8 << 0x11 | uVar8 >> 0x2f) ^ uVar6;
          uVar3 = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar7;
          uVar6 = uVar6 << 0x20 | uVar6 >> 0x20;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      uVar7 = uVar7 ^ uVar4;
      puVar1 = puVar9 + 1;
      puVar9 = puVar9 + 4;
    } while (puVar1 != _Src);
  }
  if ((param_3 & 7) != 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 7,_Src,(ulonglong)uVar10);
  }
  *(uint *)(param_1 + 5) = uVar10;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  return;
}



// FUNCTION 143d9fbb0 SipHash_hash_size body=5 status=ok
// SIG undefined SipHash_hash_size(void)

longlong SipHash_hash_size(longlong param_1)

{
  return (longlong)*(int *)(param_1 + 0x2c);
}



// FUNCTION 143d9fbc0 SipHash_set_hash_size body=34 status=ok
// SIG undefined SipHash_set_hash_size(void)

undefined8 SipHash_set_hash_size(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    param_2 = 0x10;
  }
  else if ((param_2 - 8U & 0xfffffffffffffff7) != 0) {
    return 0;
  }
  *(int *)(param_1 + 0x2c) = (int)param_2;
  return 1;
}



// FUNCTION 143d9fbf0 ec_GFp_simple_group_init body=115 status=ok
// SIG undefined ec_GFp_simple_group_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_simple_group_init(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  lVar2 = BN_new();
  *(longlong *)(param_1 + 0x68) = lVar2;
  if (((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) && (lVar2 != 0)
     ) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    return 1;
  }
  BN_free();
  BN_free(*(undefined8 *)(param_1 + 0x60));
  BN_free(*(undefined8 *)(param_1 + 0x68));
  return 0;
}



// FUNCTION 143d9fc70 ec_GF2m_simple_group_finish body=50 status=ok
// SIG undefined ec_GF2m_simple_group_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_group_finish(longlong param_1)

{
  BN_free(*(undefined8 *)(param_1 + 0x40));
  BN_free(*(undefined8 *)(param_1 + 0x60));
  BN_free(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 143d9fcb0 ec_GFp_simple_group_clear_finish body=50 status=ok
// SIG undefined ec_GFp_simple_group_clear_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_simple_group_clear_finish(longlong param_1)

{
  BN_clear_free(*(undefined8 *)(param_1 + 0x40));
  BN_clear_free(*(undefined8 *)(param_1 + 0x60));
  BN_clear_free(*(undefined8 *)(param_1 + 0x68));
  return;
}



// FUNCTION 143d9fcf0 ec_GFp_simple_group_copy body=114 status=ok
// SIG undefined ec_GFp_simple_group_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_simple_group_copy(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = BN_copy(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  if (lVar1 != 0) {
    lVar1 = BN_copy(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_2 + 0x60));
    if (lVar1 != 0) {
      lVar1 = BN_copy(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68));
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143d9fd70 ec_GFp_simple_group_set_curve body=463 status=ok
// SIG undefined ec_GFp_simple_group_set_curve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_simple_group_set_curve
                   (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143d9fd88;
  lVar6 = 0;
  lVar5 = 0;
  iVar1 = BN_num_bits(param_2);
  if ((iVar1 < 3) || (iVar1 = BN_is_odd(param_2), iVar1 == 0)) {
    ERR_put_error(0x10,0xa6,0x67,"crypto\\ec\\ecp_smpl.c",0x8f,uVar8);
    return 0;
  }
  lVar4 = lVar6;
  if ((param_5 == 0) && (param_5 = BN_CTX_new(), lVar4 = param_5, param_5 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  lVar2 = BN_CTX_get(param_5);
  if ((lVar2 != 0) && (lVar3 = BN_copy(param_1[8],param_2), lVar3 != 0)) {
    BN_set_negative(param_1[8],0);
    iVar1 = BN_nnmod(lVar2,param_3,param_2,param_5);
    if (iVar1 != 0) {
      if (*(code **)(*param_1 + 0x120) == (code *)0x0) {
        lVar6 = BN_copy(param_1[0xc],lVar2);
        bVar7 = lVar6 == 0;
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x120))(param_1,param_1[0xc],lVar2,param_5);
        bVar7 = iVar1 == 0;
      }
      lVar6 = lVar5;
      if ((((!bVar7) && (iVar1 = BN_nnmod(param_1[0xd],param_4,param_2,param_5), iVar1 != 0)) &&
          ((*(code **)(*param_1 + 0x120) == (code *)0x0 ||
           (iVar1 = (**(code **)(*param_1 + 0x120))(param_1,param_1[0xd],param_1[0xd],param_5),
           iVar1 != 0)))) && (iVar1 = BN_add_word(lVar2,3), iVar1 != 0)) {
        iVar1 = BN_cmp(lVar2,param_1[8]);
        *(uint *)(param_1 + 0xe) = (uint)(iVar1 == 0);
        lVar6 = 1;
      }
    }
  }
  BN_CTX_end(param_5);
  BN_CTX_free(lVar4);
  return lVar6;
}



// FUNCTION 143d9ff40 ec_GFp_simple_group_get_curve body=277 status=ok
// SIG undefined ec_GFp_simple_group_get_curve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_simple_group_get_curve
                   (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                   longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = 0;
  if ((param_2 != 0) && (lVar2 = BN_copy(param_2,param_1[8]), lVar2 == 0)) {
    return 0;
  }
  lVar2 = lVar4;
  if ((param_3 != 0) || (param_4 != 0)) {
    if (*(longlong *)(*param_1 + 0x128) == 0) {
      if ((param_3 != 0) && (lVar3 = BN_copy(param_3,param_1[0xc]), lVar3 == 0)) goto LAB_143da0031;
      lVar2 = 0;
      if (param_4 != 0) {
        lVar2 = BN_copy(param_4,param_1[0xd]);
        bVar5 = lVar2 == 0;
        lVar2 = lVar4;
        goto LAB_143da0029;
      }
    }
    else {
      if ((param_5 == 0) && (param_5 = BN_CTX_new(), lVar2 = param_5, param_5 == 0)) {
        return 0;
      }
      if ((param_3 != 0) &&
         (iVar1 = (**(code **)(*param_1 + 0x128))(param_1,param_3,param_1[0xc],param_5), iVar1 == 0)
         ) goto LAB_143da0031;
      if (param_4 != 0) {
        iVar1 = (**(code **)(*param_1 + 0x128))(param_1,param_4,param_1[0xd],param_5);
        bVar5 = iVar1 == 0;
LAB_143da0029:
        if (bVar5) goto LAB_143da0031;
      }
    }
  }
  lVar4 = 1;
LAB_143da0031:
  BN_CTX_free(lVar2);
  return lVar4;
}



// FUNCTION 143da0060 FUN_143da0060 body=26 status=ok
// SIG undefined FUN_143da0060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143da0060(longlong param_1)

{
  BN_num_bits(*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 143da0080 ec_GFp_simple_group_check_discriminant body=531 status=ok
// SIG undefined ec_GFp_simple_group_check_discriminant(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_simple_group_check_discriminant(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar12;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong lVar11;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar14 = 0x143da0092;
  lVar1 = param_1[8];
  lVar11 = 0;
  lVar10 = 0;
  lVar4 = lVar11;
  lVar9 = lVar11;
  if (param_2 == 0) {
    lVar4 = BN_CTX_new();
    param_2 = lVar4;
    if (lVar4 == 0) {
      ERR_put_error(0x10,0xa5,0x41,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar13,0xfd),uVar14);
      goto LAB_143da027c;
    }
  }
  BN_CTX_start(param_2);
  uVar14 = BN_CTX_get(param_2);
  uVar5 = BN_CTX_get(param_2);
  uVar6 = BN_CTX_get(param_2);
  uVar7 = BN_CTX_get(param_2);
  lVar8 = BN_CTX_get(param_2);
  if (lVar8 != 0) {
    if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
      lVar8 = BN_copy(uVar14);
      lVar9 = lVar10;
      if (lVar8 != 0) {
        lVar9 = BN_copy(uVar5,param_1[0xd]);
        bVar12 = lVar9 == 0;
        goto LAB_143da0199;
      }
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x128))(param_1,uVar14,param_1[0xc],param_2);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*param_1 + 0x128))(param_1,uVar5,param_1[0xd],param_2);
        bVar12 = iVar2 == 0;
LAB_143da0199:
        lVar9 = lVar11;
        if (!bVar12) {
          iVar2 = BN_is_zero(uVar14);
          iVar3 = BN_is_zero(uVar5);
          if (iVar2 == 0) {
            if (iVar3 != 0) goto LAB_143da025a;
            iVar2 = BN_mod_sqr(uVar6,uVar14,lVar1,param_2);
            lVar9 = lVar10;
            if (iVar2 != 0) {
              iVar2 = BN_mod_mul(uVar7,uVar6,uVar14,lVar1,param_2);
              if (iVar2 != 0) {
                iVar2 = BN_lshift(uVar6,uVar7,2);
                if (iVar2 != 0) {
                  iVar2 = BN_mod_sqr(uVar7,uVar5,lVar1,param_2);
                  if (iVar2 != 0) {
                    iVar2 = BN_mul_word(uVar7,0x1b);
                    if (iVar2 != 0) {
                      iVar2 = BN_mod_add(uVar14,uVar6,uVar7,lVar1,param_2);
                      if (iVar2 != 0) {
                        iVar3 = BN_is_zero(uVar14);
                        goto LAB_143da0256;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_143da0256:
            lVar9 = lVar10;
            if (iVar3 == 0) {
LAB_143da025a:
              lVar9 = 1;
            }
          }
        }
      }
    }
  }
  if (param_2 != 0) {
    BN_CTX_end(param_2);
  }
LAB_143da027c:
  BN_CTX_free(lVar4);
  return lVar9;
}



// FUNCTION 143da02a0 ec_GFp_simple_point_init body=115 status=ok
// SIG undefined ec_GFp_simple_point_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_simple_point_init(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  lVar2 = BN_new();
  *(longlong *)(param_1 + 0x20) = lVar2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) && (lVar2 != 0)
     ) {
    return 1;
  }
  BN_free();
  BN_free(*(undefined8 *)(param_1 + 0x18));
  BN_free(*(undefined8 *)(param_1 + 0x20));
  return 0;
}



// FUNCTION 143da0320 ec_GF2m_simple_point_finish body=50 status=ok
// SIG undefined ec_GF2m_simple_point_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_point_finish(longlong param_1)

{
  BN_free(*(undefined8 *)(param_1 + 0x10));
  BN_free(*(undefined8 *)(param_1 + 0x18));
  BN_free(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143da0360 ec_GF2m_simple_point_clear_finish body=58 status=ok
// SIG undefined ec_GF2m_simple_point_clear_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_point_clear_finish(longlong param_1)

{
  BN_clear_free(*(undefined8 *)(param_1 + 0x10));
  BN_clear_free(*(undefined8 *)(param_1 + 0x18));
  BN_clear_free(*(undefined8 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 143da03a0 ec_GF2m_simple_point_copy body=120 status=ok
// SIG undefined ec_GF2m_simple_point_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GF2m_simple_point_copy(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = BN_copy(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
  if (lVar1 != 0) {
    lVar1 = BN_copy(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
    if (lVar1 != 0) {
      lVar1 = BN_copy(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143da0420 ec_GF2m_simple_point_set_to_infinity body=41 status=ok
// SIG undefined ec_GF2m_simple_point_set_to_infinity(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GF2m_simple_point_set_to_infinity
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_2 + 0x28) = 0;
  BN_set_word(*(undefined8 *)(param_2 + 0x20),0,param_3,param_4,0x143da042a);
  return 1;
}



// FUNCTION 143da0450 ec_GFp_simple_set_Jprojective_coordinates_GFp body=384 status=ok
// SIG undefined ec_GFp_simple_set_Jprojective_coordinates_GFp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_simple_set_Jprojective_coordinates_GFp
                   (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                   longlong param_5,longlong param_6)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0;
  lVar5 = 0;
  if ((param_6 == 0) && (lVar5 = BN_CTX_new(), param_6 = lVar5, lVar5 == 0)) {
    return 0;
  }
  if (((param_3 == 0) ||
      ((iVar3 = BN_nnmod(*(undefined8 *)(param_2 + 0x10),param_3,param_1[8],param_6), lVar7 = 0,
       iVar3 != 0 &&
       ((*(code **)(*param_1 + 0x120) == (code *)0x0 ||
        (iVar3 = (**(code **)(*param_1 + 0x120))
                           (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                            param_6), lVar7 = lVar6, iVar3 != 0)))))) &&
     ((param_4 == 0 ||
      ((iVar3 = BN_nnmod(*(undefined8 *)(param_2 + 0x18),param_4,param_1[8],param_6), lVar7 = lVar6,
       iVar3 != 0 &&
       ((*(code **)(*param_1 + 0x120) == (code *)0x0 ||
        (iVar3 = (**(code **)(*param_1 + 0x120))
                           (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x18),
                            param_6), iVar3 != 0)))))))) {
    if (param_5 != 0) {
      iVar3 = BN_nnmod(*(undefined8 *)(param_2 + 0x20),param_5,param_1[8],param_6);
      lVar7 = lVar6;
      if (iVar3 == 0) goto LAB_143da05a6;
      iVar3 = BN_is_one(*(undefined8 *)(param_2 + 0x20));
      pcVar1 = *(code **)(*param_1 + 0x120);
      if (pcVar1 != (code *)0x0) {
        if ((iVar3 == 0) || (pcVar2 = *(code **)(*param_1 + 0x130), pcVar2 == (code *)0x0)) {
          iVar4 = (*pcVar1)(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),
                            param_6);
        }
        else {
          iVar4 = (*pcVar2)(param_1,*(undefined8 *)(param_2 + 0x20),param_6);
        }
        if (iVar4 == 0) goto LAB_143da05a6;
      }
      *(int *)(param_2 + 0x28) = iVar3;
    }
    lVar7 = 1;
  }
LAB_143da05a6:
  BN_CTX_free(lVar5);
  return lVar7;
}



// FUNCTION 143da05d0 ec_GFp_simple_get_Jprojective_coordinates_GFp body=317 status=ok
// SIG undefined ec_GFp_simple_get_Jprojective_coordinates_GFp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_simple_get_Jprojective_coordinates_GFp
                   (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                   longlong param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = 0;
  lVar5 = 0;
  lVar2 = lVar4;
  lVar6 = lVar5;
  if (*(longlong *)(*param_1 + 0x128) == 0) {
    if (((param_3 != 0) && (lVar3 = BN_copy(param_3,*(undefined8 *)(param_2 + 0x10)), lVar3 == 0))
       || ((param_4 != 0 && (lVar3 = BN_copy(param_4,*(undefined8 *)(param_2 + 0x18)), lVar3 == 0)))
       ) goto LAB_143da06e3;
    if (param_5 != 0) {
      lVar2 = BN_copy(param_5,*(undefined8 *)(param_2 + 0x20));
      bVar7 = lVar2 == 0;
      goto LAB_143da06db;
    }
  }
  else {
    if ((param_6 == 0) && (lVar2 = BN_CTX_new(), param_6 = lVar2, lVar2 == 0)) {
      return 0;
    }
    if (((param_3 != 0) &&
        (iVar1 = (**(code **)(*param_1 + 0x128))
                           (param_1,param_3,*(undefined8 *)(param_2 + 0x10),param_6), lVar6 = lVar4,
        iVar1 == 0)) ||
       ((param_4 != 0 &&
        (iVar1 = (**(code **)(*param_1 + 0x128))
                           (param_1,param_4,*(undefined8 *)(param_2 + 0x18),param_6), lVar6 = lVar5,
        iVar1 == 0)))) goto LAB_143da06e3;
    lVar4 = lVar2;
    if (param_5 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x128))
                        (param_1,param_5,*(undefined8 *)(param_2 + 0x20),param_6);
      bVar7 = iVar1 == 0;
LAB_143da06db:
      lVar2 = lVar4;
      lVar6 = lVar5;
      if (bVar7) goto LAB_143da06e3;
    }
  }
  lVar2 = lVar4;
  lVar6 = 1;
LAB_143da06e3:
  BN_CTX_free(lVar2);
  return lVar6;
}



// FUNCTION 143da0710 ec_GFp_simple_point_set_affine_coordinates body=147 status=ok
// SIG undefined ec_GFp_simple_point_set_affine_coordinates(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GFp_simple_point_set_affine_coordinates
          (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    ERR_put_error(0x10,0xa8,0x43,"crypto\\ec\\ecp_smpl.c",0x1e7,0x143da072a);
    uVar1 = 0;
  }
  else {
    uVar1 = BN_value_one();
    uVar1 = EC_POINT_set_Jprojective_coordinates_GFp(param_1,param_2,param_3,param_4,uVar1,param_5);
  }
  return uVar1;
}



// FUNCTION 143da07b0 ec_GFp_simple_point_get_affine_coordinates body=739 status=ok
// SIG undefined ec_GFp_simple_point_get_affine_coordinates(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ec_GFp_simple_point_get_affine_coordinates
          (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar10;
  undefined4 local_48;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_48 = 0;
  iVar1 = EC_POINT_is_at_infinity();
  if (iVar1 != 0) {
    ERR_put_error(0x10,0xa7,0x6a,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar10,0x1fb));
    return 0;
  }
  lVar8 = 0;
  if ((param_5 == 0) && (param_5 = BN_CTX_new(), lVar8 = param_5, param_5 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  uVar2 = BN_CTX_get(param_5);
  uVar3 = BN_CTX_get(param_5);
  uVar4 = BN_CTX_get(param_5);
  lVar5 = BN_CTX_get(param_5);
  if (lVar5 == 0) goto LAB_143da0a5b;
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  if ((*(code **)(*param_1 + 0x128) != (code *)0x0) &&
     (iVar1 = (**(code **)(*param_1 + 0x128))(param_1,uVar2,*(undefined8 *)(param_2 + 0x20),param_5)
     , uVar7 = uVar2, iVar1 == 0)) goto LAB_143da0a5b;
  iVar1 = BN_is_one(uVar7);
  if (iVar1 == 0) {
    lVar6 = BN_mod_inverse(uVar3,uVar7,param_1[8],param_5);
    if (lVar6 == 0) {
      ERR_put_error(0x10,0xa7,3,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar10,0x22e));
      goto LAB_143da0a5b;
    }
    if (*(longlong *)(*param_1 + 0x120) == 0) {
      iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar4,uVar3);
    }
    else {
      iVar1 = BN_mod_sqr(uVar4,uVar3,param_1[8],param_5);
    }
    if ((iVar1 == 0) ||
       ((param_3 != 0 &&
        (iVar1 = (**(code **)(*param_1 + 0x108))
                           (param_1,param_3,*(undefined8 *)(param_2 + 0x10),uVar4,param_5),
        iVar1 == 0)))) goto LAB_143da0a5b;
    if (param_4 != 0) {
      if (*(longlong *)(*param_1 + 0x120) == 0) {
        iVar1 = (**(code **)(*param_1 + 0x108))(param_1,lVar5,uVar4,uVar3);
      }
      else {
        iVar1 = BN_mod_mul(lVar5,uVar4,uVar3,param_1[8],param_5);
      }
      if (iVar1 == 0) goto LAB_143da0a5b;
      iVar1 = (**(code **)(*param_1 + 0x108))
                        (param_1,param_4,*(undefined8 *)(param_2 + 0x18),lVar5,param_5);
      goto LAB_143da0a4f;
    }
  }
  else if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
    if ((param_3 != 0) && (lVar5 = BN_copy(param_3,*(undefined8 *)(param_2 + 0x10)), lVar5 == 0))
    goto LAB_143da0a5b;
    if (param_4 != 0) {
      lVar5 = BN_copy(param_4,*(undefined8 *)(param_2 + 0x18));
      bVar9 = lVar5 == 0;
      goto LAB_143da0a51;
    }
  }
  else {
    if ((param_3 != 0) &&
       (iVar1 = (**(code **)(*param_1 + 0x128))
                          (param_1,param_3,*(undefined8 *)(param_2 + 0x10),param_5), iVar1 == 0))
    goto LAB_143da0a5b;
    if (param_4 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x128))
                        (param_1,param_4,*(undefined8 *)(param_2 + 0x18),param_5);
LAB_143da0a4f:
      bVar9 = iVar1 == 0;
LAB_143da0a51:
      if (bVar9) goto LAB_143da0a5b;
    }
  }
  local_48 = 1;
LAB_143da0a5b:
  BN_CTX_end(param_5);
  BN_CTX_free(lVar8);
  return local_48;
}



// FUNCTION 143da0aa0 ec_GFp_simple_add body=1439 status=ok
// SIG undefined ec_GFp_simple_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_simple_add(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                           longlong param_5)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar16;
  bool bVar17;
  longlong local_48;
  ulonglong uVar15;
  
  uVar15 = 0;
  uVar14 = 0;
  local_48 = 0;
  if (param_3 == param_4) {
    uVar14 = EC_POINT_dbl();
    return uVar14;
  }
  iVar3 = EC_POINT_is_at_infinity(param_1,param_3);
  lVar13 = param_4;
  if ((iVar3 != 0) ||
     (iVar3 = EC_POINT_is_at_infinity(param_1,param_4), lVar13 = param_3, iVar3 != 0)) {
    uVar14 = EC_POINT_copy(param_2,lVar13);
    return uVar14;
  }
  pcVar1 = *(code **)(*param_1 + 0x108);
  pcVar2 = *(code **)(*param_1 + 0x110);
  lVar13 = param_1[8];
  if ((param_5 == 0) && (param_5 = BN_CTX_new(), local_48 = param_5, param_5 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  uVar5 = BN_CTX_get(param_5);
  uVar6 = BN_CTX_get(param_5);
  uVar7 = BN_CTX_get(param_5);
  uVar8 = BN_CTX_get(param_5);
  uVar9 = BN_CTX_get(param_5);
  uVar10 = BN_CTX_get(param_5);
  lVar11 = BN_CTX_get(param_5);
  uVar16 = uVar15;
  if (lVar11 != 0) {
    uVar16 = uVar14;
    if (*(int *)(param_4 + 0x28) == 0) {
      iVar3 = (*pcVar2)(param_1,uVar5,*(undefined8 *)(param_4 + 0x20),param_5);
      if (((iVar3 != 0) &&
          (iVar3 = (*pcVar1)(param_1,uVar6,*(undefined8 *)(param_3 + 0x10),uVar5,param_5),
          iVar3 != 0)) &&
         (iVar3 = (*pcVar1)(param_1,uVar5,uVar5,*(undefined8 *)(param_4 + 0x20),param_5), iVar3 != 0
         )) {
        iVar3 = (*pcVar1)(param_1,uVar7,*(undefined8 *)(param_3 + 0x18),uVar5,param_5);
        bVar17 = iVar3 == 0;
        goto LAB_143da0c82;
      }
    }
    else {
      lVar12 = BN_copy(uVar6,*(undefined8 *)(param_3 + 0x10));
      uVar16 = uVar15;
      if (lVar12 != 0) {
        lVar12 = BN_copy(uVar7,*(undefined8 *)(param_3 + 0x18));
        bVar17 = lVar12 == 0;
LAB_143da0c82:
        uVar16 = uVar15;
        if (!bVar17) {
          if (*(int *)(param_3 + 0x28) == 0) {
            iVar3 = (*pcVar2)(param_1,uVar5,*(undefined8 *)(param_3 + 0x20),param_5);
            uVar16 = uVar14;
            if (((iVar3 != 0) &&
                (iVar3 = (*pcVar1)(param_1,uVar8,*(undefined8 *)(param_4 + 0x10),uVar5,param_5),
                iVar3 != 0)) &&
               (iVar3 = (*pcVar1)(param_1,uVar5,uVar5,*(undefined8 *)(param_3 + 0x20),param_5),
               iVar3 != 0)) {
              iVar3 = (*pcVar1)(param_1,uVar9,*(undefined8 *)(param_4 + 0x18),uVar5,param_5);
              bVar17 = iVar3 == 0;
              goto LAB_143da0d32;
            }
          }
          else {
            lVar12 = BN_copy(uVar8,*(undefined8 *)(param_4 + 0x10));
            uVar16 = uVar14;
            if (lVar12 != 0) {
              lVar12 = BN_copy(uVar9,*(undefined8 *)(param_4 + 0x18));
              bVar17 = lVar12 == 0;
LAB_143da0d32:
              uVar16 = uVar14;
              if (((!bVar17) && (iVar3 = BN_mod_sub_quick(uVar10,uVar6,uVar8,lVar13), iVar3 != 0))
                 && (iVar3 = BN_mod_sub_quick(lVar11,uVar7,uVar9,lVar13), iVar3 != 0)) {
                iVar3 = BN_is_zero(uVar10);
                if (iVar3 == 0) {
                  iVar3 = BN_mod_add_quick(uVar6,uVar6,uVar8,lVar13);
                  if ((iVar3 != 0) &&
                     (iVar3 = BN_mod_add_quick(uVar7,uVar7,uVar9,lVar13), iVar3 != 0)) {
                    if (*(int *)(param_3 + 0x28) == 0) {
                      if (*(int *)(param_4 + 0x28) == 0) {
                        iVar3 = (*pcVar1)(param_1,uVar5,*(undefined8 *)(param_3 + 0x20),
                                          *(undefined8 *)(param_4 + 0x20),param_5);
                        bVar17 = iVar3 == 0;
                      }
                      else {
                        lVar12 = BN_copy(uVar5,*(undefined8 *)(param_3 + 0x20));
                        bVar17 = lVar12 == 0;
                      }
LAB_143da0e7d:
                      if (bVar17) goto LAB_143da1003;
                      iVar3 = (*pcVar1)(param_1,*(undefined8 *)(param_2 + 0x20),uVar5,uVar10,param_5
                                       );
                      bVar17 = iVar3 == 0;
                    }
                    else {
                      if (*(int *)(param_4 + 0x28) == 0) {
                        lVar12 = BN_copy(uVar5,*(undefined8 *)(param_4 + 0x20));
                        bVar17 = lVar12 == 0;
                        goto LAB_143da0e7d;
                      }
                      lVar12 = BN_copy(*(undefined8 *)(param_2 + 0x20),uVar10);
                      bVar17 = lVar12 == 0;
                    }
                    if (!bVar17) {
                      *(undefined4 *)(param_2 + 0x28) = 0;
                      iVar3 = (*pcVar2)(param_1,uVar5,lVar11,param_5);
                      if (((((((iVar3 != 0) &&
                              (iVar3 = (*pcVar2)(param_1,uVar9,uVar10,param_5), iVar3 != 0)) &&
                             (iVar3 = (*pcVar1)(param_1,uVar8,uVar6,uVar9,param_5), iVar3 != 0)) &&
                            ((iVar3 = BN_mod_sub_quick(*(undefined8 *)(param_2 + 0x10),uVar5,uVar8,
                                                       lVar13), iVar3 != 0 &&
                             (iVar3 = BN_mod_lshift1_quick
                                                (uVar5,*(undefined8 *)(param_2 + 0x10),lVar13),
                             iVar3 != 0)))) &&
                           ((iVar3 = BN_mod_sub_quick(uVar5,uVar8,uVar5,lVar13), iVar3 != 0 &&
                            ((iVar3 = (*pcVar1)(param_1,uVar5,uVar5,lVar11,param_5), iVar3 != 0 &&
                             (iVar3 = (*pcVar1)(param_1,uVar10,uVar9,uVar10,param_5), iVar3 != 0))))
                           )) && (iVar3 = (*pcVar1)(param_1,uVar6,uVar7,uVar10,param_5), iVar3 != 0)
                          ) && ((iVar3 = BN_mod_sub_quick(uVar5,uVar5,uVar6,lVar13), iVar3 != 0 &&
                                ((iVar3 = BN_is_odd(uVar5), iVar3 == 0 ||
                                 (iVar3 = BN_add(uVar5,uVar5,lVar13), iVar3 != 0)))))) {
                        iVar3 = BN_rshift1(*(undefined8 *)(param_2 + 0x18),uVar5);
                        uVar16 = 0;
                        if (iVar3 != 0) {
                          uVar16 = 1;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar3 = BN_is_zero(lVar11);
                  if (iVar3 != 0) {
                    BN_CTX_end(param_5);
                    uVar4 = EC_POINT_dbl(param_1,param_2,param_3,param_5);
                    uVar16 = (ulonglong)uVar4;
                    goto LAB_143da1010;
                  }
                  BN_set_word(*(undefined8 *)(param_2 + 0x20),0);
                  *(undefined4 *)(param_2 + 0x28) = 0;
                  uVar16 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_143da1003:
  if (param_5 != 0) {
    BN_CTX_end(param_5);
  }
LAB_143da1010:
  BN_CTX_free(local_48);
  return uVar16;
}



// FUNCTION 143da1040 ec_GFp_simple_dbl body=1077 status=ok
// SIG undefined ec_GFp_simple_dbl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_simple_dbl(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar13;
  longlong local_38;
  undefined8 uVar12;
  
  uVar12 = 0;
  uVar11 = 0;
  local_38 = 0;
  iVar4 = EC_POINT_is_at_infinity(param_1,param_3);
  if (iVar4 != 0) {
    BN_set_word(*(undefined8 *)(param_2 + 0x20),0);
    *(undefined4 *)(param_2 + 0x28) = 0;
    return 1;
  }
  lVar1 = param_1[8];
  pcVar2 = *(code **)(*param_1 + 0x108);
  pcVar3 = *(code **)(*param_1 + 0x110);
  if ((param_4 == 0) && (param_4 = BN_CTX_new(), local_38 = param_4, param_4 == 0)) {
    return 0;
  }
  BN_CTX_start(param_4);
  lVar5 = BN_CTX_get(param_4);
  lVar6 = BN_CTX_get(param_4);
  uVar7 = BN_CTX_get(param_4);
  lVar8 = BN_CTX_get(param_4);
  if (lVar8 != 0) {
    lVar9 = lVar5;
    if (*(int *)(param_3 + 0x28) == 0) {
      if ((int)param_1[0xe] == 0) {
        iVar4 = (*pcVar3)(param_1,lVar5,*(undefined8 *)(param_3 + 0x10),param_4);
        uVar12 = uVar11;
        if ((((iVar4 == 0) || (iVar4 = BN_mod_lshift1_quick(lVar6,lVar5,lVar1), iVar4 == 0)) ||
            (iVar4 = BN_mod_add_quick(lVar5,lVar5,lVar6,lVar1), iVar4 == 0)) ||
           ((iVar4 = (*pcVar3)(param_1,lVar6,*(undefined8 *)(param_3 + 0x20),param_4), iVar4 == 0 ||
            (iVar4 = (*pcVar3)(param_1,lVar6,lVar6,param_4), iVar4 == 0)))) goto LAB_143da143b;
        iVar4 = (*pcVar2)(param_1,lVar6,lVar6,param_1[0xc],param_4);
        lVar10 = lVar5;
        lVar9 = lVar6;
      }
      else {
        iVar4 = (*pcVar3)(param_1,lVar6,*(undefined8 *)(param_3 + 0x20));
        uVar12 = uVar11;
        if (((iVar4 == 0) ||
            (iVar4 = BN_mod_add_quick(lVar5,*(undefined8 *)(param_3 + 0x10),lVar6,lVar1), iVar4 == 0
            )) || ((iVar4 = BN_mod_sub_quick(uVar7,*(undefined8 *)(param_3 + 0x10),lVar6,lVar1),
                   iVar4 == 0 || (iVar4 = (*pcVar2)(param_1,lVar6,lVar5,uVar7,param_4), iVar4 == 0))
                  )) goto LAB_143da143b;
        iVar4 = BN_mod_lshift1_quick(lVar5,lVar6,lVar1);
        lVar10 = lVar6;
      }
      uVar12 = uVar11;
      if (iVar4 == 0) goto LAB_143da143b;
    }
    else {
      iVar4 = (*pcVar3)(param_1,lVar5,*(undefined8 *)(param_3 + 0x10));
      if (((iVar4 == 0) || (iVar4 = BN_mod_lshift1_quick(lVar6,lVar5,lVar1), iVar4 == 0)) ||
         (iVar4 = BN_mod_add_quick(lVar5,lVar5,lVar6,lVar1), uVar12 = uVar11, iVar4 == 0))
      goto LAB_143da143b;
      lVar10 = param_1[0xc];
    }
    iVar4 = BN_mod_add_quick(lVar6,lVar9,lVar10,lVar1);
    uVar12 = uVar11;
    if (iVar4 != 0) {
      if (*(int *)(param_3 + 0x28) == 0) {
        iVar4 = (*pcVar2)(param_1,lVar5,*(undefined8 *)(param_3 + 0x18),
                          *(undefined8 *)(param_3 + 0x20),param_4);
        bVar13 = iVar4 == 0;
      }
      else {
        lVar9 = BN_copy(lVar5,*(undefined8 *)(param_3 + 0x18));
        bVar13 = lVar9 == 0;
      }
      if ((!bVar13) &&
         (iVar4 = BN_mod_lshift1_quick(*(undefined8 *)(param_2 + 0x20),lVar5,lVar1), iVar4 != 0)) {
        *(undefined4 *)(param_2 + 0x28) = 0;
        iVar4 = (*pcVar3)(param_1,lVar8,*(undefined8 *)(param_3 + 0x18),param_4);
        if (((((iVar4 != 0) &&
              ((iVar4 = (*pcVar2)(param_1,uVar7,*(undefined8 *)(param_3 + 0x10),lVar8,param_4),
               iVar4 != 0 && (iVar4 = BN_mod_lshift_quick(uVar7,uVar7,2,lVar1), iVar4 != 0)))) &&
             (iVar4 = BN_mod_lshift1_quick(lVar5,uVar7,lVar1), iVar4 != 0)) &&
            ((((iVar4 = (*pcVar3)(param_1,*(undefined8 *)(param_2 + 0x10),lVar6,param_4), iVar4 != 0
               && (iVar4 = BN_mod_sub_quick(*(undefined8 *)(param_2 + 0x10),
                                            *(undefined8 *)(param_2 + 0x10),lVar5,lVar1), iVar4 != 0
                  )) && (iVar4 = (*pcVar3)(param_1,lVar5,lVar8,param_4), iVar4 != 0)) &&
             ((iVar4 = BN_mod_lshift_quick(lVar8,lVar5,3,lVar1), iVar4 != 0 &&
              (iVar4 = BN_mod_sub_quick(lVar5,uVar7,*(undefined8 *)(param_2 + 0x10),lVar1),
              iVar4 != 0)))))) && (iVar4 = (*pcVar2)(param_1,lVar5,lVar6,lVar5,param_4), iVar4 != 0)
           ) {
          iVar4 = BN_mod_sub_quick(*(undefined8 *)(param_2 + 0x18),lVar5,lVar8,lVar1);
          uVar12 = 0;
          if (iVar4 != 0) {
            uVar12 = 1;
          }
        }
      }
    }
  }
LAB_143da143b:
  BN_CTX_end(param_4);
  BN_CTX_free(local_38);
  return uVar12;
}



// FUNCTION 143da1480 ec_GFp_simple_invert body=89 status=ok
// SIG undefined ec_GFp_simple_invert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_simple_invert(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EC_POINT_is_at_infinity();
  if (iVar1 == 0) {
    iVar1 = BN_is_zero(*(undefined8 *)(param_2 + 0x18));
    if (iVar1 == 0) {
      uVar2 = BN_usub(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_2 + 0x18));
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 143da14e0 ec_GF2m_simple_is_at_infinity body=26 status=ok
// SIG undefined ec_GF2m_simple_is_at_infinity(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_is_at_infinity(undefined8 param_1,longlong param_2)

{
  BN_is_zero(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 143da1500 ec_GFp_simple_is_on_curve body=715 status=ok
// SIG undefined ec_GFp_simple_is_on_curve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_simple_is_on_curve(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong local_38;
  ulonglong uVar10;
  
  local_38 = 0;
  uVar10 = 0xffffffff;
  uVar9 = 0xffffffff;
  iVar4 = EC_POINT_is_at_infinity();
  if (iVar4 != 0) {
    return 1;
  }
  lVar1 = param_1[8];
  pcVar2 = *(code **)(*param_1 + 0x108);
  pcVar3 = *(code **)(*param_1 + 0x110);
  if ((param_3 == 0) && (param_3 = BN_CTX_new(), local_38 = param_3, param_3 == 0)) {
    return 0xffffffff;
  }
  BN_CTX_start(param_3);
  uVar5 = BN_CTX_get(param_3);
  lVar6 = BN_CTX_get(param_3);
  uVar7 = BN_CTX_get(param_3);
  lVar8 = BN_CTX_get(param_3);
  if ((lVar8 == 0) ||
     (iVar4 = (*pcVar3)(param_1,uVar5,*(undefined8 *)(param_2 + 0x10),param_3), iVar4 == 0))
  goto LAB_143da178e;
  if (*(int *)(param_2 + 0x28) == 0) {
    iVar4 = (*pcVar3)(param_1,lVar6,*(undefined8 *)(param_2 + 0x20),param_3);
    if (((iVar4 == 0) || (iVar4 = (*pcVar3)(param_1,uVar7,lVar6,param_3), iVar4 == 0)) ||
       (iVar4 = (*pcVar2)(param_1,lVar8,uVar7,lVar6,param_3), iVar4 == 0)) goto LAB_143da178e;
    if ((int)param_1[0xe] == 0) {
      iVar4 = (*pcVar2)(param_1,lVar6,uVar7,param_1[0xc],param_3);
      uVar10 = uVar9;
      if (iVar4 == 0) goto LAB_143da178e;
      iVar4 = BN_mod_add_quick(uVar5,uVar5,lVar6,lVar1);
    }
    else {
      iVar4 = BN_mod_lshift1_quick(lVar6,uVar7,lVar1);
      uVar10 = uVar9;
      if ((iVar4 == 0) || (iVar4 = BN_mod_add_quick(lVar6,lVar6,uVar7,lVar1), iVar4 == 0))
      goto LAB_143da178e;
      iVar4 = BN_mod_sub_quick(uVar5,uVar5,lVar6,lVar1);
    }
    uVar10 = uVar9;
    if (((iVar4 == 0) ||
        (iVar4 = (*pcVar2)(param_1,uVar5,uVar5,*(undefined8 *)(param_2 + 0x10),param_3), iVar4 == 0)
        ) || (iVar4 = (*pcVar2)(param_1,lVar6,param_1[0xd],lVar8,param_3), lVar8 = lVar6, iVar4 == 0
             )) goto LAB_143da178e;
  }
  else {
    iVar4 = BN_mod_add_quick(uVar5,uVar5,param_1[0xc],lVar1);
    uVar10 = uVar9;
    if ((iVar4 == 0) ||
       (iVar4 = (*pcVar2)(param_1,uVar5,uVar5,*(undefined8 *)(param_2 + 0x10),param_3), iVar4 == 0))
    goto LAB_143da178e;
    lVar8 = param_1[0xd];
  }
  iVar4 = BN_mod_add_quick(uVar5,uVar5,lVar8,lVar1);
  uVar10 = uVar9;
  if ((iVar4 != 0) &&
     (iVar4 = (*pcVar3)(param_1,lVar6,*(undefined8 *)(param_2 + 0x18),param_3), iVar4 != 0)) {
    iVar4 = BN_ucmp(lVar6,uVar5);
    uVar10 = (ulonglong)(iVar4 == 0);
  }
LAB_143da178e:
  BN_CTX_end(param_3);
  BN_CTX_free(local_38);
  return uVar10;
}



// FUNCTION 143da17d0 ec_GFp_simple_cmp body=684 status=ok
// SIG undefined ec_GFp_simple_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_simple_cmp(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong local_38;
  
  uVar11 = 0xffffffff;
  uVar10 = 0xffffffff;
  local_38 = 0;
  iVar3 = EC_POINT_is_at_infinity();
  iVar4 = EC_POINT_is_at_infinity(param_1,param_3);
  if (iVar3 != 0) {
    return (ulonglong)(iVar4 == 0);
  }
  if (iVar4 != 0) {
    return 1;
  }
  if ((*(int *)(param_2 + 0x28) != 0) && (*(int *)(param_3 + 0x28) != 0)) {
    iVar3 = BN_cmp(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10));
    if ((iVar3 == 0) &&
       (iVar3 = BN_cmp(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x18)), iVar3 == 0)
       ) {
      return 0;
    }
    return 1;
  }
  pcVar1 = *(code **)(*param_1 + 0x108);
  pcVar2 = *(code **)(*param_1 + 0x110);
  if ((param_4 == 0) && (param_4 = BN_CTX_new(), local_38 = param_4, param_4 == 0)) {
    return 0xffffffff;
  }
  BN_CTX_start(param_4);
  uVar5 = BN_CTX_get(param_4);
  uVar6 = BN_CTX_get(param_4);
  uVar7 = BN_CTX_get(param_4);
  lVar8 = BN_CTX_get(param_4);
  if (lVar8 != 0) {
    if (*(int *)(param_3 + 0x28) == 0) {
      iVar3 = (*pcVar2)(param_1,lVar8,*(undefined8 *)(param_3 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,uVar5,*(undefined8 *)(param_2 + 0x10),lVar8,param_4),
         uVar12 = uVar5, iVar3 == 0)) goto LAB_143da1a47;
    }
    else {
      uVar12 = *(undefined8 *)(param_2 + 0x10);
    }
    if (*(int *)(param_2 + 0x28) == 0) {
      iVar3 = (*pcVar2)(param_1,uVar7,*(undefined8 *)(param_2 + 0x20),param_4);
      if ((iVar3 == 0) ||
         (iVar3 = (*pcVar1)(param_1,uVar6,*(undefined8 *)(param_3 + 0x10),uVar7,param_4),
         uVar9 = uVar6, iVar3 == 0)) goto LAB_143da1a47;
    }
    else {
      uVar9 = *(undefined8 *)(param_3 + 0x10);
    }
    iVar3 = BN_cmp(uVar12,uVar9);
    if (iVar3 == 0) {
      uVar11 = uVar10;
      if (*(int *)(param_3 + 0x28) == 0) {
        iVar3 = (*pcVar1)(param_1,lVar8,lVar8,*(undefined8 *)(param_3 + 0x20),param_4);
        if ((iVar3 == 0) ||
           (iVar3 = (*pcVar1)(param_1,uVar5,*(undefined8 *)(param_2 + 0x18),lVar8,param_4),
           iVar3 == 0)) goto LAB_143da1a47;
      }
      else {
        uVar12 = *(undefined8 *)(param_2 + 0x18);
      }
      if (*(int *)(param_2 + 0x28) == 0) {
        iVar3 = (*pcVar1)(param_1,uVar7,uVar7,*(undefined8 *)(param_2 + 0x20),param_4);
        if ((iVar3 == 0) ||
           (iVar3 = (*pcVar1)(param_1,uVar6,*(undefined8 *)(param_3 + 0x18),uVar7,param_4),
           iVar3 == 0)) goto LAB_143da1a47;
      }
      else {
        uVar9 = *(undefined8 *)(param_3 + 0x18);
      }
      iVar3 = BN_cmp(uVar12,uVar9);
      uVar11 = (ulonglong)(iVar3 != 0);
    }
    else {
      uVar11 = 1;
    }
  }
LAB_143da1a47:
  BN_CTX_end(param_4);
  BN_CTX_free(local_38);
  return uVar11;
}



// FUNCTION 143da1a80 ec_GFp_simple_make_affine body=282 status=ok
// SIG undefined ec_GFp_simple_make_affine(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GFp_simple_make_affine(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0;
  if ((*(int *)(param_2 + 0x28) != 0) || (iVar1 = EC_POINT_is_at_infinity(), iVar1 != 0)) {
    return 1;
  }
  lVar4 = 0;
  if ((param_3 == 0) && (param_3 = BN_CTX_new(), lVar4 = param_3, param_3 == 0)) {
    return 0;
  }
  BN_CTX_start(param_3);
  uVar2 = BN_CTX_get(param_3);
  lVar3 = BN_CTX_get(param_3);
  lVar6 = 0;
  if (((lVar3 != 0) &&
      (iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,uVar2,lVar3,param_3), lVar6 = lVar5,
      iVar1 != 0)) &&
     (iVar1 = EC_POINT_set_affine_coordinates(param_1,param_2,uVar2,lVar3,param_3), iVar1 != 0)) {
    if (*(int *)(param_2 + 0x28) == 0) {
      ERR_put_error(0x10,0x66,0x44,"crypto\\ec\\ecp_smpl.c",0x4a5);
    }
    else {
      lVar6 = 1;
    }
  }
  BN_CTX_end(param_3);
  BN_CTX_free(lVar4);
  return lVar6;
}



// FUNCTION 143da1ba0 ec_GFp_simple_points_make_affine body=1205 status=ok
// SIG undefined ec_GFp_simple_points_make_affine(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
ec_GFp_simple_points_make_affine
          (longlong *param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  longlong in_stack_ffffffffffffff98;
  undefined4 uVar13;
  longlong local_48;
  
  puVar8 = (undefined8 *)0x0;
  local_48 = 0;
  puVar10 = (undefined8 *)0x0;
  if (param_2 == (undefined8 *)0x0) {
    return (undefined8 *)0x1;
  }
  if ((param_4 == 0) && (param_4 = BN_CTX_new(), local_48 = param_4, param_4 == 0)) {
    return (undefined8 *)0x0;
  }
  BN_CTX_start(param_4);
  uVar3 = BN_CTX_get(param_4);
  lVar4 = BN_CTX_get(param_4);
  puVar5 = puVar8;
  puVar11 = puVar8;
  if ((lVar4 != 0) &&
     (puVar5 = (undefined8 *)CRYPTO_malloc((longlong)param_2 * 8,"crypto\\ec\\ecp_smpl.c",0x4c9),
     puVar11 = puVar10, puVar5 != (undefined8 *)0x0)) {
    puVar10 = puVar8;
    if (param_2 != (undefined8 *)0x0) {
      do {
        lVar6 = BN_new();
        puVar5[(longlong)puVar10] = lVar6;
        if (lVar6 == 0) goto LAB_143da1dc5;
        puVar10 = (undefined8 *)((longlong)puVar10 + 1);
      } while (puVar10 < param_2);
    }
    iVar2 = BN_is_zero(*(undefined8 *)(*param_3 + 0x20));
    uVar1 = *puVar5;
    if (iVar2 == 0) {
      lVar6 = BN_copy(uVar1,*(undefined8 *)(*param_3 + 0x20));
      bVar12 = lVar6 == 0;
    }
    else {
      if (*(code **)(*param_1 + 0x130) == (code *)0x0) {
        iVar2 = BN_set_word(uVar1,1);
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x130))(param_1,uVar1,param_4);
      }
      bVar12 = iVar2 == 0;
    }
    uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    if (!bVar12) {
      puVar10 = (undefined8 *)0x1;
      if ((undefined8 *)0x1 < param_2) {
        lVar6 = (longlong)puVar5 - (longlong)param_3;
        plVar9 = param_3;
        do {
          plVar9 = plVar9 + 1;
          iVar2 = BN_is_zero(*(undefined8 *)(*plVar9 + 0x20));
          if (iVar2 == 0) {
            in_stack_ffffffffffffff98 = param_4;
            iVar2 = (**(code **)(*param_1 + 0x108))
                              (param_1,*(undefined8 *)(lVar6 + (longlong)plVar9),
                               *(undefined8 *)(lVar6 + -8 + (longlong)plVar9),
                               *(undefined8 *)(*plVar9 + 0x20),param_4);
            bVar12 = iVar2 == 0;
          }
          else {
            lVar7 = BN_copy(*(undefined8 *)(lVar6 + (longlong)plVar9),
                            *(undefined8 *)
                             ((longlong)plVar9 + (-8 - (longlong)param_3) + (longlong)puVar5));
            bVar12 = lVar7 == 0;
          }
          uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
          if (bVar12) goto LAB_143da1dc2;
          puVar10 = (undefined8 *)((longlong)puVar10 + 1);
        } while (puVar10 < param_2);
      }
      lVar6 = BN_mod_inverse(uVar3,puVar5[(longlong)param_2 + -1],param_1[8],param_4);
      if (lVar6 == 0) {
        ERR_put_error(0x10,0x89,3,"crypto\\ec\\ecp_smpl.c",CONCAT44(uVar13,0x4f6));
      }
      else if ((*(code **)(*param_1 + 0x120) == (code *)0x0) ||
              ((iVar2 = (**(code **)(*param_1 + 0x120))(param_1,uVar3,uVar3,param_4), iVar2 != 0 &&
               (iVar2 = (**(code **)(*param_1 + 0x120))(param_1,uVar3,uVar3,param_4), iVar2 != 0))))
      {
        lVar6 = (longlong)param_2 + -1;
        if (lVar6 != 0) {
          plVar9 = param_3 + lVar6;
          do {
            iVar2 = BN_is_zero(*(undefined8 *)(*plVar9 + 0x20));
            if ((iVar2 == 0) &&
               (((iVar2 = (**(code **)(*param_1 + 0x108))
                                    (param_1,lVar4,
                                     *(undefined8 *)
                                      ((longlong)plVar9 +
                                      (longlong)puVar5 + (-8 - (longlong)param_3)),uVar3,param_4),
                 iVar2 == 0 ||
                 (iVar2 = (**(code **)(*param_1 + 0x108))
                                    (param_1,uVar3,uVar3,*(undefined8 *)(*plVar9 + 0x20),param_4),
                 iVar2 == 0)) ||
                (lVar7 = BN_copy(*(undefined8 *)(*plVar9 + 0x20),lVar4), lVar7 == 0))))
            goto LAB_143da1dc2;
            plVar9 = plVar9 + -1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        iVar2 = BN_is_zero(*(undefined8 *)(*param_3 + 0x20));
        if ((iVar2 != 0) || (lVar4 = BN_copy(*(undefined8 *)(*param_3 + 0x20),uVar3), lVar4 != 0)) {
          puVar10 = puVar8;
          if (param_2 != (undefined8 *)0x0) {
            do {
              lVar4 = param_3[(longlong)puVar10];
              iVar2 = BN_is_zero(*(undefined8 *)(lVar4 + 0x20));
              if (iVar2 == 0) {
                iVar2 = (**(code **)(*param_1 + 0x110))
                                  (param_1,uVar3,*(undefined8 *)(lVar4 + 0x20),param_4);
                if (((iVar2 == 0) ||
                    (iVar2 = (**(code **)(*param_1 + 0x108))
                                       (param_1,*(undefined8 *)(lVar4 + 0x10),
                                        *(undefined8 *)(lVar4 + 0x10),uVar3,param_4), iVar2 == 0))
                   || ((iVar2 = (**(code **)(*param_1 + 0x108))
                                          (param_1,uVar3,uVar3,*(undefined8 *)(lVar4 + 0x20),param_4
                                          ), iVar2 == 0 ||
                       (iVar2 = (**(code **)(*param_1 + 0x108))
                                          (param_1,*(undefined8 *)(lVar4 + 0x18),
                                           *(undefined8 *)(lVar4 + 0x18),uVar3,param_4), iVar2 == 0)
                       ))) goto LAB_143da1dc2;
                if (*(code **)(*param_1 + 0x130) == (code *)0x0) {
                  iVar2 = BN_set_word(*(undefined8 *)(lVar4 + 0x20),1);
                }
                else {
                  iVar2 = (**(code **)(*param_1 + 0x130))
                                    (param_1,*(undefined8 *)(lVar4 + 0x20),param_4);
                }
                if (iVar2 == 0) goto LAB_143da1dc2;
                *(undefined4 *)(lVar4 + 0x28) = 1;
              }
              puVar10 = (undefined8 *)((longlong)puVar10 + 1);
            } while (puVar10 < param_2);
          }
          puVar11 = (undefined8 *)0x1;
          goto LAB_143da1dc5;
        }
      }
LAB_143da1dc2:
      puVar11 = (undefined8 *)0x0;
    }
  }
LAB_143da1dc5:
  BN_CTX_end(param_4);
  BN_CTX_free(local_48);
  if (puVar5 != (undefined8 *)0x0) {
    if (param_2 != (undefined8 *)0x0) {
      do {
        if (puVar5[(longlong)puVar8] == 0) break;
        BN_clear_free();
        puVar8 = (undefined8 *)((longlong)puVar8 + 1);
      } while (puVar8 < param_2);
    }
    CRYPTO_free(puVar5,"crypto\\ec\\ecp_smpl.c",0x54b);
  }
  return puVar11;
}



// FUNCTION 143da2060 FUN_143da2060 body=47 status=ok
// SIG undefined FUN_143da2060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143da2060(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BN_mod_mul(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 143da2090 ec_GFp_simple_field_sqr body=38 status=ok
// SIG undefined ec_GFp_simple_field_sqr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_simple_field_sqr(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  BN_mod_sqr(param_2,param_3,*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 143da20c0 ec_GFp_simple_blind_coordinates body=404 status=ok
// SIG undefined ec_GFp_simple_blind_coordinates(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ec_GFp_simple_blind_coordinates(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143da20de;
  uVar4 = 0;
  BN_CTX_start(param_3);
  uVar2 = BN_CTX_get(param_3);
  lVar3 = BN_CTX_get(param_3);
  if (lVar3 == 0) {
    uVar5 = 0x56e;
    uVar2 = 0x41;
LAB_143da221b:
    ERR_put_error(0x10,0x11f,uVar2,"crypto\\ec\\ecp_smpl.c",uVar5,uVar6);
    uVar4 = 0;
  }
  else {
    do {
      iVar1 = BN_priv_rand_range(uVar2,param_1[8]);
      if (iVar1 == 0) {
        uVar5 = 0x575;
        uVar2 = 3;
        goto LAB_143da221b;
      }
      iVar1 = BN_is_zero(uVar2);
    } while (iVar1 != 0);
    if (*(code **)(*param_1 + 0x120) != (code *)0x0) {
      iVar1 = (**(code **)(*param_1 + 0x120))(param_1,uVar2,uVar2,param_3);
      if (iVar1 == 0) goto LAB_143da2231;
    }
    iVar1 = (**(code **)(*param_1 + 0x108))
                      (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),uVar2
                       ,param_3);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x110))(param_1,lVar3,uVar2,param_3);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*param_1 + 0x108))
                          (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                           lVar3,param_3);
        if (iVar1 != 0) {
          iVar1 = (**(code **)(*param_1 + 0x108))(param_1,lVar3,lVar3,uVar2,param_3);
          if (iVar1 != 0) {
            iVar1 = (**(code **)(*param_1 + 0x108))
                              (param_1,*(undefined8 *)(param_2 + 0x18),
                               *(undefined8 *)(param_2 + 0x18),lVar3,param_3);
            if (iVar1 != 0) {
              *(undefined4 *)(param_2 + 0x28) = 0;
              uVar4 = 1;
            }
          }
        }
      }
    }
  }
LAB_143da2231:
  BN_CTX_end(param_3);
  return uVar4;
}



// FUNCTION 143da2260 ec_GFp_simple_ladder_pre body=725 status=ok
// SIG undefined ec_GFp_simple_ladder_pre(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GFp_simple_ladder_pre
          (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  iVar7 = (**(code **)(*param_1 + 0x108))
                    (param_1,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x10),
                     *(undefined8 *)(param_4 + 0x20),param_5,0x143da227a);
  if (((((((iVar7 != 0) &&
          (iVar7 = (**(code **)(*param_1 + 0x110))
                             (param_1,uVar2,*(undefined8 *)(param_4 + 0x20),param_5), iVar7 != 0))
         && (iVar7 = (**(code **)(*param_1 + 0x108))
                               (param_1,*(undefined8 *)(param_4 + 0x20),
                                *(undefined8 *)(param_4 + 0x20),uVar2,param_5), iVar7 != 0)) &&
        ((iVar7 = (**(code **)(*param_1 + 0x110))
                            (param_1,uVar3,*(undefined8 *)(param_4 + 0x10),param_5), iVar7 != 0 &&
         (iVar7 = (**(code **)(*param_1 + 0x110))
                            (param_1,uVar1,*(undefined8 *)(param_4 + 0x20),param_5), iVar7 != 0))))
       && ((iVar7 = (**(code **)(*param_1 + 0x108))(param_1,uVar4,uVar1,param_1[0xc],param_5),
           iVar7 != 0 &&
           ((iVar7 = BN_mod_sub_quick(uVar5,uVar3,uVar4,param_1[8]), iVar7 != 0 &&
            (iVar7 = BN_mod_add_quick(uVar3,uVar3,uVar4,param_1[8]), iVar7 != 0)))))) &&
      (iVar7 = (**(code **)(*param_1 + 0x110))(param_1,uVar5,uVar5,param_5), iVar7 != 0)) &&
     (((((iVar7 = (**(code **)(*param_1 + 0x108))(param_1,uVar6,uVar1,param_1[0xd],param_5),
         iVar7 != 0 &&
         (iVar7 = (**(code **)(*param_1 + 0x108))
                            (param_1,uVar2,*(undefined8 *)(param_4 + 0x10),
                             *(undefined8 *)(param_4 + 0x20),param_5), iVar7 != 0)) &&
        (iVar7 = (**(code **)(*param_1 + 0x108))(param_1,uVar4,uVar2,uVar6,param_5), iVar7 != 0)) &&
       (((iVar7 = BN_mod_lshift_quick(uVar4,uVar4,3,param_1[8]), iVar7 != 0 &&
         (iVar7 = BN_mod_sub_quick(*(undefined8 *)(param_2 + 0x10),uVar5,uVar4,param_1[8]),
         iVar7 != 0)) &&
        ((iVar7 = (**(code **)(*param_1 + 0x108))(param_1,uVar2,uVar2,uVar3,param_5), iVar7 != 0 &&
         ((iVar7 = (**(code **)(*param_1 + 0x108))(param_1,uVar3,uVar1,uVar6,param_5), iVar7 != 0 &&
          (iVar7 = BN_mod_add_quick(uVar2,uVar2,uVar3,param_1[8]), iVar7 != 0)))))))) &&
      ((iVar7 = BN_mod_lshift_quick(*(undefined8 *)(param_2 + 0x20),uVar2,2,param_1[8]), iVar7 != 0
       && (iVar7 = EC_POINT_copy(param_3,param_4), iVar7 != 0)))))) {
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_3 + 0x28) = 0;
    *(undefined4 *)(param_4 + 0x28) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 143da2540 ec_GFp_simple_ladder_step body=1427 status=ok
// SIG undefined ec_GFp_simple_ladder_step(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ec_GFp_simple_ladder_step
               (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
               undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  
  bVar10 = false;
  BN_CTX_start(param_5);
  uVar2 = BN_CTX_get(param_5);
  uVar3 = BN_CTX_get(param_5);
  uVar4 = BN_CTX_get(param_5);
  uVar5 = BN_CTX_get(param_5);
  uVar6 = BN_CTX_get(param_5);
  uVar7 = BN_CTX_get(param_5);
  uVar8 = BN_CTX_get(param_5);
  lVar9 = BN_CTX_get(param_5);
  if ((((((((lVar9 != 0) &&
           (iVar1 = (**(code **)(*param_1 + 0x108))
                              (param_1,uVar2,*(undefined8 *)(param_2 + 0x10),
                               *(undefined8 *)(param_3 + 0x10),param_5), iVar1 != 0)) &&
          (iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,uVar3,*(undefined8 *)(param_2 + 0x20),
                              *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0)) &&
         ((iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,uVar4,*(undefined8 *)(param_2 + 0x10),
                              *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0 &&
          (iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,uVar5,*(undefined8 *)(param_2 + 0x20),
                              *(undefined8 *)(param_3 + 0x10),param_5), iVar1 != 0)))) &&
        ((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar6,param_1[0xc],uVar3,param_5),
         iVar1 != 0 &&
         ((iVar1 = BN_mod_add_quick(uVar2,uVar2,uVar6,param_1[8]), iVar1 != 0 &&
          (iVar1 = BN_mod_add_quick(uVar6,uVar5,uVar4,param_1[8]), iVar1 != 0)))))) &&
       (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar2,uVar6,uVar2,param_5), iVar1 != 0)) &&
      (((((iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar3,uVar3,param_5), iVar1 != 0 &&
          (iVar1 = BN_mod_lshift_quick(lVar9,param_1[0xd],2,param_1[8]), iVar1 != 0)) &&
         (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar3,lVar9,uVar3,param_5), iVar1 != 0))
        && (((iVar1 = BN_mod_lshift1_quick(uVar2,uVar2,param_1[8]), iVar1 != 0 &&
             (iVar1 = BN_mod_add_quick(uVar2,uVar3,uVar2,param_1[8]), iVar1 != 0)) &&
            ((iVar1 = BN_mod_sub_quick(uVar3,uVar4,uVar5,param_1[8]), iVar1 != 0 &&
             ((iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar3,uVar3,param_5), iVar1 != 0 &&
              (iVar1 = (**(code **)(*param_1 + 0x108))
                                 (param_1,uVar5,uVar3,*(undefined8 *)(param_4 + 0x10),param_5),
              iVar1 != 0)))))))) &&
       ((((iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,uVar2,*(undefined8 *)(param_4 + 0x20),uVar2,param_5),
          iVar1 != 0 &&
          (((iVar1 = BN_mod_sub_quick(*(undefined8 *)(param_3 + 0x10),uVar2,uVar5,param_1[8]),
            iVar1 != 0 &&
            (iVar1 = (**(code **)(*param_1 + 0x108))
                               (param_1,*(undefined8 *)(param_3 + 0x20),
                                *(undefined8 *)(param_4 + 0x20),uVar3,param_5), iVar1 != 0)) &&
           (iVar1 = (**(code **)(*param_1 + 0x110))
                              (param_1,uVar5,*(undefined8 *)(param_2 + 0x10),param_5), iVar1 != 0)))
          ) && (((iVar1 = (**(code **)(*param_1 + 0x110))
                                    (param_1,uVar4,*(undefined8 *)(param_2 + 0x20),param_5),
                 iVar1 != 0 &&
                 (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar6,uVar4,param_1[0xc],param_5),
                 iVar1 != 0)) &&
                (((iVar1 = BN_mod_add_quick(uVar7,*(undefined8 *)(param_2 + 0x10),
                                            *(undefined8 *)(param_2 + 0x20),param_1[8]), iVar1 != 0
                  && ((iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar7,uVar7,param_5),
                      iVar1 != 0 &&
                      (iVar1 = BN_mod_sub_quick(uVar7,uVar7,uVar5,param_1[8]), iVar1 != 0)))) &&
                 (iVar1 = BN_mod_sub_quick(uVar7,uVar7,uVar4,param_1[8]), iVar1 != 0)))))) &&
        ((((iVar1 = BN_mod_sub_quick(uVar8,uVar5,uVar6,param_1[8]), iVar1 != 0 &&
           (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar8,uVar8,param_5), iVar1 != 0)) &&
          (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar2,uVar4,uVar7,param_5), iVar1 != 0))
         && ((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar2,lVar9,uVar2,param_5), iVar1 != 0
             && (iVar1 = BN_mod_sub_quick(*(undefined8 *)(param_2 + 0x10),uVar8,uVar2,param_1[8]),
                iVar1 != 0)))))))))) &&
     ((((iVar1 = BN_mod_add_quick(uVar8,uVar5,uVar6,param_1[8]), iVar1 != 0 &&
        ((iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar5,uVar4,param_5), iVar1 != 0 &&
         (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,lVar9,uVar5,lVar9,param_5), iVar1 != 0))))
       && (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar7,uVar7,uVar8,param_5), iVar1 != 0))
      && (iVar1 = BN_mod_lshift1_quick(uVar7,uVar7,param_1[8]), iVar1 != 0)))) {
    iVar1 = BN_mod_add_quick(*(undefined8 *)(param_2 + 0x20),lVar9,uVar7,param_1[8]);
    bVar10 = iVar1 != 0;
  }
  BN_CTX_end(param_5);
  return bVar10;
}



// FUNCTION 143da2ae0 ec_GFp_simple_ladder_post body=1358 status=ok
// SIG undefined ec_GFp_simple_ladder_post(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_simple_ladder_post
                    (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                    undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint local_res10;
  
  local_res10 = 0;
  iVar1 = BN_is_zero(*(undefined8 *)(param_2 + 0x20));
  if (iVar1 != 0) {
    uVar2 = EC_POINT_set_to_infinity(param_1,param_2);
    return uVar2;
  }
  iVar1 = BN_is_zero(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))
                      (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_4 + 0x10),
                       *(undefined8 *)(param_4 + 0x20),param_5);
    if ((((iVar1 != 0) &&
         (iVar1 = (**(code **)(*param_1 + 0x110))
                            (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_4 + 0x20)
                             ,param_5), iVar1 != 0)) &&
        (iVar1 = (**(code **)(*param_1 + 0x108))
                           (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_4 + 0x18),
                            *(undefined8 *)(param_2 + 0x20),param_5), iVar1 != 0)) &&
       ((lVar3 = BN_copy(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_4 + 0x20)),
        lVar3 != 0 && (iVar1 = EC_POINT_invert(param_1,param_2,param_5), iVar1 != 0)))) {
      return 1;
    }
    return 0;
  }
  BN_CTX_start(param_5);
  uVar4 = BN_CTX_get(param_5);
  uVar5 = BN_CTX_get(param_5);
  uVar6 = BN_CTX_get(param_5);
  uVar7 = BN_CTX_get(param_5);
  uVar8 = BN_CTX_get(param_5);
  uVar9 = BN_CTX_get(param_5);
  lVar3 = BN_CTX_get(param_5);
  if ((((((lVar3 != 0) &&
         (iVar1 = BN_mod_lshift1_quick(uVar4,*(undefined8 *)(param_4 + 0x18),param_1[8]), iVar1 != 0
         )) && (iVar1 = (**(code **)(*param_1 + 0x108))
                                  (param_1,uVar5,*(undefined8 *)(param_2 + 0x10),
                                   *(undefined8 *)(param_4 + 0x20),param_5), iVar1 != 0)) &&
       (((iVar1 = (**(code **)(*param_1 + 0x108))
                            (param_1,uVar6,*(undefined8 *)(param_2 + 0x20),
                             *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0 &&
         (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar6,uVar5,uVar6,param_5), iVar1 != 0))
        && ((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar7,uVar6,uVar4,param_5), iVar1 != 0
            && ((iVar1 = (**(code **)(*param_1 + 0x108))
                                   (param_1,uVar6,*(undefined8 *)(param_2 + 0x20),
                                    *(undefined8 *)(param_4 + 0x20),param_5), iVar1 != 0 &&
                (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar8,uVar6,param_5), iVar1 != 0)))
            ))))) &&
      (((iVar1 = BN_mod_lshift1_quick(uVar9,param_1[0xd],param_1[8]), iVar1 != 0 &&
        ((((((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar8,uVar8,uVar9,param_5), iVar1 != 0
             && (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,lVar3,uVar6,param_1[0xc],param_5),
                iVar1 != 0)) &&
            (iVar1 = (**(code **)(*param_1 + 0x108))
                               (param_1,uVar9,*(undefined8 *)(param_2 + 0x10),
                                *(undefined8 *)(param_4 + 0x10),param_5), iVar1 != 0)) &&
           ((iVar1 = BN_mod_add_quick(uVar9,lVar3,uVar9,param_1[8]), iVar1 != 0 &&
            (iVar1 = (**(code **)(*param_1 + 0x108))
                               (param_1,lVar3,*(undefined8 *)(param_2 + 0x20),
                                *(undefined8 *)(param_4 + 0x10),param_5), iVar1 != 0)))) &&
          (iVar1 = BN_mod_add_quick(uVar6,lVar3,uVar5,param_1[8]), iVar1 != 0)) &&
         ((iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar9,uVar9,uVar6,param_5), iVar1 != 0 &&
          (iVar1 = BN_mod_sub_quick(lVar3,lVar3,uVar5,param_1[8]), iVar1 != 0)))))) &&
       ((iVar1 = (**(code **)(*param_1 + 0x110))(param_1,lVar3,lVar3,param_5), iVar1 != 0 &&
        (((iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,lVar3,lVar3,*(undefined8 *)(param_3 + 0x10),param_5),
          iVar1 != 0 && (iVar1 = BN_mod_add_quick(uVar8,uVar9,uVar8,param_1[8]), iVar1 != 0)) &&
         (iVar1 = (**(code **)(*param_1 + 0x108))
                            (param_1,uVar8,uVar8,*(undefined8 *)(param_3 + 0x20),param_5),
         iVar1 != 0)))))))) &&
     (((((iVar1 = BN_mod_sub_quick(uVar8,uVar8,lVar3,param_1[8]), iVar1 != 0 &&
         (iVar1 = (**(code **)(*param_1 + 0x110))
                            (param_1,uVar9,*(undefined8 *)(param_2 + 0x20),param_5), iVar1 != 0)) &&
        (iVar1 = (**(code **)(*param_1 + 0x108))
                           (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_4 + 0x20),
                            *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0)) &&
       ((iVar1 = (**(code **)(*param_1 + 0x108))
                           (param_1,*(undefined8 *)(param_2 + 0x20),uVar9,
                            *(undefined8 *)(param_2 + 0x20),param_5), iVar1 != 0 &&
        (iVar1 = (**(code **)(*param_1 + 0x108))
                           (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),
                            uVar4,param_5), iVar1 != 0)))) &&
      ((iVar1 = (**(code **)(*param_1 + 0x108))
                          (param_1,*(undefined8 *)(param_2 + 0x10),uVar7,
                           *(undefined8 *)(param_2 + 0x20),param_5), iVar1 != 0 &&
       (iVar1 = (**(code **)(*param_1 + 0x110))
                          (param_1,uVar7,*(undefined8 *)(param_2 + 0x20),param_5), iVar1 != 0))))))
  {
    iVar1 = (**(code **)(*param_1 + 0x108))
                      (param_1,*(undefined8 *)(param_2 + 0x18),uVar8,uVar7,param_5);
    local_res10 = (uint)(iVar1 != 0);
  }
  BN_CTX_end(param_5);
  return (ulonglong)local_res10;
}



// FUNCTION 143da3030 ec_GFp_mont_group_init body=42 status=ok
// SIG undefined ec_GFp_mont_group_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_mont_group_init(longlong param_1)

{
  ec_GFp_simple_group_init();
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 143da3060 ec_GFp_mont_group_set_curve body=370 status=ok
// SIG undefined ec_GFp_mont_group_set_curve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_mont_group_set_curve
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    ulonglong param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar5 = 0;
  uVar7 = 0;
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_free(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar3 = uVar5;
  if ((param_5 == 0) && (uVar3 = BN_CTX_new(), param_5 = uVar3, uVar3 == 0)) {
    return 0;
  }
  lVar4 = BN_MONT_CTX_new();
  uVar8 = uVar5;
  if (lVar4 != 0) {
    iVar1 = BN_MONT_CTX_set(lVar4,param_2,param_5);
    uVar8 = uVar7;
    if (iVar1 == 0) {
      ERR_put_error(0x10,0xbd,3,"crypto\\ec\\ecp_mont.c",CONCAT44(uVar9,0x9d));
      uVar5 = 0;
    }
    else {
      uVar5 = BN_new();
      if (uVar5 != 0) {
        uVar6 = BN_value_one();
        iVar1 = BN_to_montgomery(uVar5,uVar6,lVar4,param_5);
        if (iVar1 != 0) {
          *(longlong *)(param_1 + 0x78) = lVar4;
          *(ulonglong *)(param_1 + 0x80) = uVar5;
          lVar4 = 0;
          uVar5 = 0;
          uVar2 = ec_GFp_simple_group_set_curve(param_1,param_2,param_3,param_4,param_5);
          uVar8 = (ulonglong)uVar2;
          if (uVar2 == 0) {
            BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
            *(undefined8 *)(param_1 + 0x78) = 0;
            BN_free(*(undefined8 *)(param_1 + 0x80));
            *(undefined8 *)(param_1 + 0x80) = 0;
          }
        }
      }
    }
  }
  BN_free(uVar5);
  BN_CTX_free(uVar3);
  BN_MONT_CTX_free(lVar4);
  return uVar8;
}



// FUNCTION 143da31e0 ec_GFp_mont_group_finish body=71 status=ok
// SIG undefined ec_GFp_mont_group_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_mont_group_finish(longlong param_1)

{
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_free(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  ec_GF2m_simple_group_finish(param_1);
  return;
}



// FUNCTION 143da3230 ec_GFp_mont_group_clear_finish body=71 status=ok
// SIG undefined ec_GFp_mont_group_clear_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GFp_mont_group_clear_finish(longlong param_1)

{
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_clear_free(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  ec_GFp_simple_group_clear_finish(param_1);
  return;
}



// FUNCTION 143da3280 ec_GFp_mont_group_copy body=193 status=ok
// SIG undefined ec_GFp_mont_group_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_mont_group_copy(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_clear_free(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar1 = ec_GFp_simple_group_copy(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_2 + 0x78) != 0) {
    lVar2 = BN_MONT_CTX_new();
    *(longlong *)(param_1 + 0x78) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = BN_MONT_CTX_copy(lVar2,*(undefined8 *)(param_2 + 0x78));
    if (lVar2 == 0) goto LAB_143da3313;
  }
  if (*(longlong *)(param_2 + 0x80) == 0) {
    return 1;
  }
  lVar2 = BN_dup();
  *(longlong *)(param_1 + 0x80) = lVar2;
  if (lVar2 != 0) {
    return 1;
  }
LAB_143da3313:
  BN_MONT_CTX_free(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 0;
}



// FUNCTION 143da3350 ec_GFp_mont_field_mul body=90 status=ok
// SIG undefined ec_GFp_mont_field_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GFp_mont_field_mul(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    ERR_put_error(0x10,0x83,0x6f,"crypto\\ec\\ecp_mont.c",0xbf,0x143da335c);
    return 0;
  }
  uVar1 = BN_mod_mul_montgomery(param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 143da33b0 ec_GFp_mont_field_sqr body=86 status=ok
// SIG undefined ec_GFp_mont_field_sqr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GFp_mont_field_sqr(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    ERR_put_error(0x10,0x84,0x6f,"crypto\\ec\\ecp_mont.c",0xca);
    return 0;
  }
  uVar1 = BN_mod_mul_montgomery(param_2,param_3,param_3,*(longlong *)(param_1 + 0x78),param_4);
  return uVar1;
}



// FUNCTION 143da3410 ec_GFp_mont_field_encode body=82 status=ok
// SIG undefined ec_GFp_mont_field_encode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_mont_field_encode(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    ERR_put_error(0x10,0x86,0x6f,"crypto\\ec\\ecp_mont.c",0xd5);
    return 0;
  }
  uVar1 = BN_to_montgomery(param_2,param_3);
  return uVar1;
}



// FUNCTION 143da3470 ec_GFp_mont_field_decode body=82 status=ok
// SIG undefined ec_GFp_mont_field_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GFp_mont_field_decode(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    ERR_put_error(0x10,0x85,0x6f,"crypto\\ec\\ecp_mont.c",0xe0);
    return 0;
  }
  uVar1 = BN_from_montgomery(param_2,param_3);
  return uVar1;
}



// FUNCTION 143da34d0 ec_GFp_mont_field_set_to_one body=91 status=ok
// SIG undefined ec_GFp_mont_field_set_to_one(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ec_GFp_mont_field_set_to_one(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    ERR_put_error(0x10,0xd1,0x6f,"crypto\\ec\\ecp_mont.c",0xeb);
    return false;
  }
  lVar1 = BN_copy(param_2);
  return lVar1 != 0;
}



// FUNCTION 143da3530 EC_GF2m_simple_method body=8 status=ok
// SIG undefined EC_GF2m_simple_method(void)

undefined * EC_GF2m_simple_method(void)

{
  return &DAT_145db29b0;
}



// FUNCTION 143da3540 ecdh_simple_compute_key body=768 status=ok
// SIG undefined ecdh_simple_compute_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * ecdh_simple_compute_key
                 (undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *_Dst;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  void *pvVar12;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar13;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  pvVar12 = (void *)0x0;
  pvVar8 = (void *)0x0;
  _Dst = (void *)0x0;
  lVar3 = BN_CTX_new();
  pvVar7 = pvVar12;
  pvVar9 = pvVar12;
  if (lVar3 == 0) goto LAB_143da37f8;
  BN_CTX_start(lVar3);
  lVar4 = BN_CTX_get(lVar3);
  if (lVar4 == 0) {
    ERR_put_error(0x10,0x101,0x41,"crypto\\ec\\ecdh_ossl.c",CONCAT44(uVar13,0x37));
    goto LAB_143da37f8;
  }
  lVar5 = FNiagaraEmitterHandle::GetInstance(param_4);
  if (lVar5 == 0) {
    ERR_put_error(0x10,0x101,0x9a,"crypto\\ec\\ecdh_ossl.c",CONCAT44(uVar13,0x3d));
    goto LAB_143da37f8;
  }
  uVar6 = FUniqueNetIdString::GetBytes(param_4);
  uVar1 = UPartyBeaconState::GetMaxPlayersPerTeam(param_4);
  if (((uVar1 >> 0xc & 1) == 0) ||
     ((iVar2 = EC_GROUP_get_cofactor(uVar6,lVar4,0), iVar2 != 0 &&
      (iVar2 = BN_mul(lVar4,lVar4,lVar5,lVar3), lVar5 = lVar4, iVar2 != 0)))) {
    pvVar8 = (void *)EC_POINT_new(uVar6);
    if (pvVar8 != (void *)0x0) {
      iVar2 = EC_POINT_mul(uVar6,pvVar8,0,param_3,lVar5,lVar3);
      pvVar9 = pvVar8;
      if (iVar2 == 0) {
        uVar6 = 0x52;
      }
      else {
        lVar5 = lVar3;
        iVar2 = EC_POINT_get_affine_coordinates(uVar6,pvVar8,lVar4,0,lVar3);
        uVar13 = (undefined4)((ulonglong)lVar5 >> 0x20);
        if (iVar2 != 0) {
          iVar2 = EC_GROUP_get_degree(uVar6);
          uVar11 = (ulonglong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
          iVar2 = BN_num_bits(lVar4);
          uVar10 = (ulonglong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
          if (uVar11 < uVar10) {
            ERR_put_error(0x10,0x101,0x44,"crypto\\ec\\ecdh_ossl.c",CONCAT44(uVar13,0x5e));
            pvVar7 = _Dst;
            goto LAB_143da37f8;
          }
          _Dst = (void *)CRYPTO_malloc(uVar11,"crypto\\ec\\ecdh_ossl.c",0x61);
          if (_Dst != (void *)0x0) {
            _guard_xfg_dispatch_icall_nop(_Dst,0,uVar11 - uVar10);
            iVar2 = BN_bn2bin(lVar4,(uVar11 - uVar10) + (longlong)_Dst);
            if (uVar10 == (longlong)iVar2) {
              *param_1 = _Dst;
              pvVar7 = (void *)0x0;
              pvVar12 = (void *)0x1;
              *param_2 = uVar11;
            }
            else {
              ERR_put_error(0x10,0x101,3,"crypto\\ec\\ecdh_ossl.c",CONCAT44(uVar13,0x68));
              pvVar7 = _Dst;
              pvVar12 = (void *)0x0;
            }
            goto LAB_143da37f8;
          }
          uVar6 = CONCAT44(uVar13,0x62);
          goto LAB_143da3766;
        }
        uVar6 = CONCAT44(uVar13,0x57);
      }
      ERR_put_error(0x10,0x101,0x9b,"crypto\\ec\\ecdh_ossl.c",uVar6);
      goto LAB_143da37f8;
    }
    uVar6 = CONCAT44(uVar13,0x4d);
    _Dst = pvVar12;
  }
  else {
    uVar6 = CONCAT44(uVar13,0x46);
  }
LAB_143da3766:
  ERR_put_error(0x10,0x101,0x41,"crypto\\ec\\ecdh_ossl.c",uVar6);
  pvVar7 = _Dst;
  pvVar9 = pvVar8;
LAB_143da37f8:
  EC_POINT_free(pvVar9);
  if (lVar3 != 0) {
    BN_CTX_end(lVar3);
  }
  BN_CTX_free(lVar3);
  CRYPTO_free(pvVar7,"crypto\\ec\\ecdh_ossl.c",0x77);
  return pvVar12;
}



// FUNCTION 143da3840 ossl_ecdh_compute_key body=78 status=ok
// SIG undefined ossl_ecdh_compute_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_ecdh_compute_key(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong in_R9;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(in_R9 + 0x18) + 0x178);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    ERR_put_error(0x10,0xf7,0xa0,"crypto\\ec\\ecdh_ossl.c",0x1a);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143da388b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}



// FUNCTION 143da3890 ec_GF2m_simple_group_init body=108 status=ok
// SIG undefined ec_GF2m_simple_group_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GF2m_simple_group_init(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  lVar2 = BN_new();
  *(longlong *)(param_1 + 0x68) = lVar2;
  if (((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) && (lVar2 != 0)
     ) {
    return 1;
  }
  BN_free();
  BN_free(*(undefined8 *)(param_1 + 0x60));
  BN_free(*(undefined8 *)(param_1 + 0x68));
  return 0;
}



// FUNCTION 143da3900 ec_GF2m_simple_group_clear_finish body=71 status=ok
// SIG undefined ec_GF2m_simple_group_clear_finish(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_group_clear_finish(longlong param_1)

{
  BN_clear_free(*(undefined8 *)(param_1 + 0x40));
  BN_clear_free(*(undefined8 *)(param_1 + 0x60));
  BN_clear_free(*(undefined8 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 143da3950 ec_GF2m_simple_group_copy body=225 status=ok
// SIG undefined ec_GF2m_simple_group_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GF2m_simple_group_copy(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = BN_copy(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  if (lVar2 != 0) {
    lVar2 = BN_copy(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_2 + 0x60));
    if (lVar2 != 0) {
      lVar2 = BN_copy(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x68));
      if (lVar2 != 0) {
        iVar1 = *(int *)(param_2 + 0x48);
        *(int *)(param_1 + 0x48) = iVar1;
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
        iVar1 = iVar1 + 0x3f;
        lVar2 = bn_wexpand(*(undefined8 *)(param_1 + 0x60),
                           (int)((iVar1 >> 0x1f & 0x3fU) + iVar1) >> 6);
        if (lVar2 != 0) {
          iVar1 = *(int *)(param_1 + 0x48) + 0x3f;
          lVar2 = bn_wexpand(*(undefined8 *)(param_1 + 0x68),
                             (int)((iVar1 >> 0x1f & 0x3fU) + iVar1) >> 6);
          if (lVar2 != 0) {
            bn_set_all_zero(*(undefined8 *)(param_1 + 0x60));
            bn_set_all_zero(*(undefined8 *)(param_1 + 0x68));
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143da3a40 ec_GF2m_simple_group_set_curve body=292 status=ok
// SIG undefined ec_GF2m_simple_group_set_curve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GF2m_simple_group_set_curve
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143da3a55;
  lVar2 = BN_copy(*(undefined8 *)(param_1 + 0x40));
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = BN_GF2m_poly2arr(*(undefined8 *)(param_1 + 0x40),param_1 + 0x48,6);
  if ((iVar1 - 4U & 0xfffffffd) == 0) {
    iVar1 = BN_GF2m_mod_arr(*(undefined8 *)(param_1 + 0x60),param_3,param_1 + 0x48);
    if ((iVar1 != 0) &&
       (iVar1 = *(int *)(param_1 + 0x48) + 0x3f,
       lVar2 = bn_wexpand(*(undefined8 *)(param_1 + 0x60),
                          (int)((iVar1 >> 0x1f & 0x3fU) + iVar1) >> 6), lVar2 != 0)) {
      bn_set_all_zero(*(undefined8 *)(param_1 + 0x60));
      iVar1 = BN_GF2m_mod_arr(*(undefined8 *)(param_1 + 0x68),param_4,param_1 + 0x48);
      if ((iVar1 != 0) &&
         (iVar1 = *(int *)(param_1 + 0x48) + 0x3f,
         lVar2 = bn_wexpand(*(undefined8 *)(param_1 + 0x68),
                            (int)((iVar1 >> 0x1f & 0x3fU) + iVar1) >> 6), lVar2 != 0)) {
        bn_set_all_zero(*(undefined8 *)(param_1 + 0x68));
        return 1;
      }
    }
  }
  else {
    ERR_put_error(0x10,0xc3,0x83,"crypto\\ec\\ec2_smpl.c",0x6a,uVar3);
  }
  return 0;
}



// FUNCTION 143da3b70 ec_GF2m_simple_group_get_curve body=137 status=ok
// SIG undefined ec_GF2m_simple_group_get_curve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GF2m_simple_group_get_curve(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (lVar1 = BN_copy(param_2,*(undefined8 *)(param_1 + 0x40)), lVar1 == 0)) {
    return 0;
  }
  if (((param_3 == 0) || (lVar1 = BN_copy(param_3,*(undefined8 *)(param_1 + 0x60)), lVar1 != 0)) &&
     ((param_4 == 0 || (lVar1 = BN_copy(param_4,*(undefined8 *)(param_1 + 0x68)), lVar1 != 0)))) {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143da3c00 ec_GF2m_simple_group_get_degree body=29 status=ok
// SIG undefined ec_GF2m_simple_group_get_degree(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ec_GF2m_simple_group_get_degree(longlong param_1)

{
  int iVar1;
  
  iVar1 = BN_num_bits(*(undefined8 *)(param_1 + 0x40));
  return iVar1 + -1;
}



// FUNCTION 143da3c20 ec_GF2m_simple_group_check_discriminant body=212 status=ok
// SIG undefined ec_GF2m_simple_group_check_discriminant(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ec_GF2m_simple_group_check_discriminant(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143da3c3b;
  uVar3 = 0;
  lVar4 = 0;
  if (param_2 == 0) {
    param_2 = BN_CTX_new();
    lVar4 = param_2;
    if (param_2 == 0) {
      ERR_put_error(0x10,0x9f,0x41,"crypto\\ec\\ec2_smpl.c",0xb9,uVar5);
      goto LAB_143da3cd4;
    }
  }
  BN_CTX_start(param_2);
  lVar2 = BN_CTX_get(param_2);
  if (lVar2 != 0) {
    iVar1 = BN_GF2m_mod_arr(lVar2,*(undefined8 *)(param_1 + 0x68),param_1 + 0x48);
    uVar3 = 0;
    if (iVar1 != 0) {
      iVar1 = BN_is_zero(lVar2);
      uVar3 = 0;
      if (iVar1 == 0) {
        uVar3 = 1;
      }
    }
  }
  if (param_2 != 0) {
    BN_CTX_end(param_2);
  }
LAB_143da3cd4:
  BN_CTX_free(lVar4);
  return uVar3;
}



// FUNCTION 143da3d00 ec_GF2m_simple_point_init body=108 status=ok
// SIG undefined ec_GF2m_simple_point_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GF2m_simple_point_init(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = BN_new();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  lVar2 = BN_new();
  *(longlong *)(param_1 + 0x20) = lVar2;
  if (((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) && (lVar2 != 0)
     ) {
    return 1;
  }
  BN_free();
  BN_free(*(undefined8 *)(param_1 + 0x18));
  BN_free(*(undefined8 *)(param_1 + 0x20));
  return 0;
}



// FUNCTION 143da3d70 ec_GF2m_simple_point_set_affine_coordinates body=208 status=ok
// SIG undefined ec_GF2m_simple_point_set_affine_coordinates(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GF2m_simple_point_set_affine_coordinates
          (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = BN_copy(*(undefined8 *)(param_2 + 0x10),param_3);
    if (lVar1 != 0) {
      BN_set_negative(*(undefined8 *)(param_2 + 0x10),0);
      lVar1 = BN_copy(*(undefined8 *)(param_2 + 0x18),param_4);
      if (lVar1 != 0) {
        BN_set_negative(*(undefined8 *)(param_2 + 0x18),0);
        uVar2 = BN_value_one();
        lVar1 = BN_copy(*(undefined8 *)(param_2 + 0x20),uVar2);
        if (lVar1 != 0) {
          BN_set_negative(*(undefined8 *)(param_2 + 0x20),0);
          uVar3 = 1;
          *(undefined4 *)(param_2 + 0x28) = 1;
        }
      }
    }
    return uVar3;
  }
  ERR_put_error(0x10,0xa3,0x43,"crypto\\ec\\ec2_smpl.c",0x120,0x143da3d85);
  return 0;
}



// FUNCTION 143da3e40 ec_GF2m_simple_point_get_affine_coordinates body=239 status=ok
// SIG undefined ec_GF2m_simple_point_get_affine_coordinates(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ec_GF2m_simple_point_get_affine_coordinates
          (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143da3e5a;
  iVar1 = EC_POINT_is_at_infinity();
  if (iVar1 == 0) {
    uVar2 = BN_value_one();
    iVar1 = BN_cmp(*(undefined8 *)(param_2 + 0x20),uVar2);
    if (iVar1 == 0) {
      if (param_3 != 0) {
        lVar3 = BN_copy(param_3,*(undefined8 *)(param_2 + 0x10));
        if (lVar3 == 0) {
          return 0;
        }
        BN_set_negative(param_3,0);
      }
      if (param_4 != 0) {
        lVar3 = BN_copy(param_4,*(undefined8 *)(param_2 + 0x18));
        if (lVar3 == 0) {
          return 0;
        }
        BN_set_negative(param_4,0);
      }
      uVar4 = 1;
    }
    else {
      ERR_put_error(0x10,0xa2,0x42,"crypto\\ec\\ec2_smpl.c",0x147,uVar5);
      uVar4 = 0;
    }
  }
  else {
    ERR_put_error(0x10,0xa2,0x6a,"crypto\\ec\\ec2_smpl.c",0x141,uVar5);
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143da3f30 ec_GF2m_simple_add body=1047 status=ok
// SIG undefined ec_GF2m_simple_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GF2m_simple_add(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                            longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  longlong local_30;
  
  local_30 = 0;
  uVar11 = 0;
  iVar1 = EC_POINT_is_at_infinity(param_1,param_3);
  if (iVar1 == 0) {
    iVar1 = EC_POINT_is_at_infinity(param_1,param_4);
    if (iVar1 == 0) {
      if ((param_5 != 0) || (param_5 = BN_CTX_new(), local_30 = param_5, param_5 != 0)) {
        BN_CTX_start(param_5);
        uVar2 = BN_CTX_get(param_5);
        uVar3 = BN_CTX_get(param_5);
        uVar4 = BN_CTX_get(param_5);
        uVar5 = BN_CTX_get(param_5);
        uVar6 = BN_CTX_get(param_5);
        uVar7 = BN_CTX_get(param_5);
        uVar8 = BN_CTX_get(param_5);
        lVar9 = BN_CTX_get(param_5);
        uVar12 = 0;
        if (lVar9 != 0) {
          uVar12 = uVar11;
          if (*(int *)(param_3 + 0x28) == 0) {
            iVar1 = EC_POINT_get_affine_coordinates(param_1,param_3,uVar2,uVar3,param_5);
            bVar13 = iVar1 == 0;
          }
          else {
            lVar10 = BN_copy(uVar2,*(undefined8 *)(param_3 + 0x10));
            if (lVar10 == 0) goto LAB_143da430d;
            lVar10 = BN_copy(uVar3,*(undefined8 *)(param_3 + 0x18));
            bVar13 = lVar10 == 0;
          }
          if (!bVar13) {
            if (*(int *)(param_4 + 0x28) == 0) {
              iVar1 = EC_POINT_get_affine_coordinates(param_1,param_4,uVar4,uVar5,param_5);
              if (iVar1 == 0) goto LAB_143da430d;
            }
            else {
              lVar10 = BN_copy(uVar4,*(undefined8 *)(param_4 + 0x10));
              if ((lVar10 == 0) ||
                 (lVar10 = BN_copy(uVar5,*(undefined8 *)(param_4 + 0x18)), lVar10 == 0))
              goto LAB_143da430d;
            }
            iVar1 = BN_ucmp(uVar2,uVar4);
            if (iVar1 == 0) {
              iVar1 = BN_ucmp(uVar3,uVar5);
              if ((iVar1 != 0) || (iVar1 = BN_is_zero(uVar4), iVar1 != 0)) {
                iVar1 = EC_POINT_set_to_infinity(param_1,param_2);
                uVar12 = (ulonglong)(iVar1 != 0);
                goto LAB_143da430d;
              }
              iVar1 = (**(code **)(*param_1 + 0x118))(param_1,uVar8,uVar5,uVar4,param_5);
              if ((((iVar1 == 0) || (iVar1 = BN_GF2m_add(uVar8,uVar8,uVar4), iVar1 == 0)) ||
                  (iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar6,uVar8,param_5), iVar1 == 0)
                  ) || (iVar1 = BN_GF2m_add(uVar6,uVar6,uVar8), iVar1 == 0)) goto LAB_143da430d;
              lVar9 = param_1[0xc];
            }
            else {
              iVar1 = BN_GF2m_add(lVar9,uVar2,uVar4);
              if ((((iVar1 == 0) || (iVar1 = BN_GF2m_add(uVar8,uVar3,uVar5), iVar1 == 0)) ||
                  ((iVar1 = (**(code **)(*param_1 + 0x118))(param_1,uVar8,uVar8,lVar9,param_5),
                   iVar1 == 0 ||
                   ((iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar6,uVar8,param_5),
                    iVar1 == 0 || (iVar1 = BN_GF2m_add(uVar6,uVar6,param_1[0xc]), iVar1 == 0))))))
                 || (iVar1 = BN_GF2m_add(uVar6,uVar6,uVar8), iVar1 == 0)) goto LAB_143da430d;
            }
            iVar1 = BN_GF2m_add(uVar6,uVar6,lVar9);
            if (((((iVar1 != 0) && (iVar1 = BN_GF2m_add(uVar7,uVar4,uVar6), iVar1 != 0)) &&
                 (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar7,uVar7,uVar8,param_5),
                 iVar1 != 0)) &&
                ((iVar1 = BN_GF2m_add(uVar7,uVar7,uVar6), iVar1 != 0 &&
                 (iVar1 = BN_GF2m_add(uVar7,uVar7,uVar5), iVar1 != 0)))) &&
               (iVar1 = EC_POINT_set_affine_coordinates(param_1,param_2,uVar6,uVar7,param_5),
               iVar1 != 0)) {
              uVar12 = 1;
            }
          }
        }
LAB_143da430d:
        BN_CTX_end(param_5);
        BN_CTX_free(local_30);
        return uVar12;
      }
    }
    else {
      iVar1 = EC_POINT_copy(param_2,param_3);
      if (iVar1 != 0) goto LAB_143da3fa0;
    }
    uVar11 = 0;
  }
  else {
    uVar11 = EC_POINT_copy(param_2);
    if ((int)uVar11 == 0) {
      return uVar11;
    }
LAB_143da3fa0:
    uVar11 = 1;
  }
  return uVar11;
}



// FUNCTION 143da4350 ec_GF2m_simple_dbl body=31 status=ok
// SIG undefined ec_GF2m_simple_dbl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_dbl(void)

{
  ec_GF2m_simple_add();
  return;
}



// FUNCTION 143da4370 ec_GF2m_simple_invert body=141 status=ok
// SIG undefined ec_GF2m_simple_invert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ec_GF2m_simple_invert(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EC_POINT_is_at_infinity();
  if (iVar1 == 0) {
    iVar1 = BN_is_zero(*(undefined8 *)(param_2 + 0x18));
    if (iVar1 == 0) {
      uVar2 = EC_POINT_make_affine(param_1,param_2,param_3);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      uVar2 = BN_GF2m_add(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
                          *(undefined8 *)(param_2 + 0x18));
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 143da4400 ec_GF2m_simple_is_on_curve body=381 status=ok
// SIG undefined ec_GF2m_simple_is_on_curve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 ec_GF2m_simple_is_on_curve(longlong *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = 0xffffffff;
  uVar8 = 0xffffffff;
  iVar3 = EC_POINT_is_at_infinity();
  if (iVar3 != 0) {
    return 1;
  }
  pcVar1 = *(code **)(*param_1 + 0x108);
  pcVar2 = *(code **)(*param_1 + 0x110);
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar6 = 0;
    if ((param_3 == 0) && (param_3 = BN_CTX_new(), lVar6 = param_3, param_3 == 0)) {
      return 0xffffffff;
    }
    BN_CTX_start(param_3);
    uVar4 = BN_CTX_get(param_3);
    lVar5 = BN_CTX_get(param_3);
    if (((((lVar5 != 0) &&
          (iVar3 = BN_GF2m_add(lVar5,*(undefined8 *)(param_2 + 0x10),param_1[0xc]), iVar3 != 0)) &&
         (iVar3 = (*pcVar1)(param_1,lVar5,lVar5,*(undefined8 *)(param_2 + 0x10),param_3), iVar3 != 0
         )) && ((iVar3 = BN_GF2m_add(lVar5,lVar5,*(undefined8 *)(param_2 + 0x18)), uVar7 = uVar8,
                iVar3 != 0 &&
                (iVar3 = (*pcVar1)(param_1,lVar5,lVar5,*(undefined8 *)(param_2 + 0x10),param_3),
                iVar3 != 0)))) &&
       ((iVar3 = BN_GF2m_add(lVar5,lVar5,param_1[0xd]), iVar3 != 0 &&
        ((iVar3 = (*pcVar2)(param_1,uVar4,*(undefined8 *)(param_2 + 0x18),param_3), iVar3 != 0 &&
         (iVar3 = BN_GF2m_add(lVar5,lVar5,uVar4), iVar3 != 0)))))) {
      uVar7 = BN_is_zero(lVar5);
    }
    BN_CTX_end(param_3);
    BN_CTX_free(lVar6);
  }
  return uVar7;
}



// FUNCTION 143da4580 ec_GF2m_simple_cmp body=405 status=ok
// SIG undefined ec_GF2m_simple_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint ec_GF2m_simple_cmp(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0xffffffff;
  iVar1 = EC_POINT_is_at_infinity();
  iVar2 = EC_POINT_is_at_infinity(param_1,param_3);
  if (iVar1 != 0) {
    return (uint)(iVar2 == 0);
  }
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(int *)(param_2 + 0x28) != 0) && (*(int *)(param_3 + 0x28) != 0)) {
    iVar1 = BN_cmp(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10));
    if ((iVar1 == 0) &&
       (iVar1 = BN_cmp(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x18)), iVar1 == 0)
       ) {
      return 0;
    }
    return 1;
  }
  lVar8 = 0;
  if ((param_4 == 0) && (param_4 = BN_CTX_new(), lVar8 = param_4, param_4 == 0)) {
    return 0xffffffff;
  }
  BN_CTX_start(param_4);
  uVar3 = BN_CTX_get(param_4);
  uVar4 = BN_CTX_get(param_4);
  uVar5 = BN_CTX_get(param_4);
  lVar6 = BN_CTX_get(param_4);
  if (((lVar6 != 0) &&
      (iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,uVar3,uVar4,param_4), iVar1 != 0)) &&
     (iVar1 = EC_POINT_get_affine_coordinates(param_1,param_3,uVar5,lVar6,param_4), iVar1 != 0)) {
    iVar1 = BN_cmp(uVar3,uVar5);
    if (iVar1 == 0) {
      iVar1 = BN_cmp(uVar4,lVar6);
      uVar7 = 0;
      if (iVar1 == 0) goto LAB_143da46e5;
    }
    uVar7 = 1;
  }
LAB_143da46e5:
  BN_CTX_end(param_4);
  BN_CTX_free(lVar8);
  return uVar7;
}



// FUNCTION 143da4720 ec_GF2m_simple_make_affine body=276 status=ok
// SIG undefined ec_GF2m_simple_make_affine(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GF2m_simple_make_affine(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0;
  if ((*(int *)(param_2 + 0x28) != 0) || (iVar1 = EC_POINT_is_at_infinity(), iVar1 != 0)) {
    return 1;
  }
  lVar2 = 0;
  if ((param_3 == 0) && (lVar2 = BN_CTX_new(), param_3 = lVar2, lVar2 == 0)) {
    return 0;
  }
  BN_CTX_start(param_3);
  uVar3 = BN_CTX_get(param_3);
  lVar4 = BN_CTX_get(param_3);
  lVar6 = 0;
  if ((((lVar4 != 0) &&
       (iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,uVar3,lVar4,param_3), lVar6 = lVar5,
       iVar1 != 0)) && (lVar5 = BN_copy(*(undefined8 *)(param_2 + 0x10),uVar3), lVar5 != 0)) &&
     ((lVar5 = BN_copy(*(undefined8 *)(param_2 + 0x18),lVar4), lVar5 != 0 &&
      (iVar1 = BN_set_word(*(undefined8 *)(param_2 + 0x20),1), iVar1 != 0)))) {
    *(undefined4 *)(param_2 + 0x28) = 1;
    lVar6 = 1;
  }
  BN_CTX_end(param_3);
  BN_CTX_free(lVar2);
  return lVar6;
}



// FUNCTION 143da4840 ec_GF2m_simple_points_make_affine body=131 status=ok
// SIG undefined ec_GF2m_simple_points_make_affine(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GF2m_simple_points_make_affine
          (longlong *param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined8 *)(param_3 + uVar2 * 8),param_4);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return 1;
}



// FUNCTION 143da48d0 ec_GF2m_simple_field_mul body=47 status=ok
// SIG undefined ec_GF2m_simple_field_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_field_mul
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BN_GF2m_mod_mul_arr(param_2,param_3,param_4,param_1 + 0x48);
  return;
}



// FUNCTION 143da4900 ec_GF2m_simple_field_sqr body=38 status=ok
// SIG undefined ec_GF2m_simple_field_sqr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ec_GF2m_simple_field_sqr(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  BN_GF2m_mod_sqr_arr(param_2,param_3,param_1 + 0x48);
  return;
}



// FUNCTION 143da4930 FUN_143da4930 body=47 status=ok
// SIG undefined FUN_143da4930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143da4930(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BN_GF2m_mod_div(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 143da4960 ec_GF2m_simple_ladder_pre body=517 status=ok
// SIG undefined ec_GF2m_simple_ladder_pre(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GF2m_simple_ladder_pre
          (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143da4980;
  if (*(int *)(param_4 + 0x28) != 0) {
    do {
      iVar1 = BN_num_bits(param_1[8]);
      iVar1 = BN_priv_rand(*(undefined8 *)(param_3 + 0x20),iVar1 + -1,0xffffffff);
      if (iVar1 == 0) {
        uVar2 = 0x2be;
        goto LAB_143da4b2d;
      }
      iVar1 = BN_is_zero(*(undefined8 *)(param_3 + 0x20));
    } while (iVar1 != 0);
    if (((*(code **)(*param_1 + 0x120) == (code *)0x0) ||
        (iVar1 = (**(code **)(*param_1 + 0x120))
                           (param_1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x20),
                            param_5), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0x108))
                          (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10),
                           *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0)) {
      do {
        iVar1 = BN_num_bits(param_1[8]);
        iVar1 = BN_priv_rand(*(undefined8 *)(param_2 + 0x18),iVar1 + -1,0xffffffff);
        if (iVar1 == 0) {
          uVar2 = 0x2cd;
LAB_143da4b2d:
          ERR_put_error(0x10,0x120,3,"crypto\\ec\\ec2_smpl.c",uVar2,uVar3);
          return 0;
        }
        iVar1 = BN_is_zero(*(undefined8 *)(param_2 + 0x18));
      } while (iVar1 != 0);
      if (((((*(code **)(*param_1 + 0x120) == (code *)0x0) ||
            (iVar1 = (**(code **)(*param_1 + 0x120))
                               (param_1,*(undefined8 *)(param_2 + 0x18),
                                *(undefined8 *)(param_2 + 0x18),param_5), iVar1 != 0)) &&
           ((iVar1 = (**(code **)(*param_1 + 0x110))
                               (param_1,*(undefined8 *)(param_2 + 0x20),
                                *(undefined8 *)(param_4 + 0x10),param_5), iVar1 != 0 &&
            ((iVar1 = (**(code **)(*param_1 + 0x110))
                                (param_1,*(undefined8 *)(param_2 + 0x10),
                                 *(undefined8 *)(param_2 + 0x20),param_5), iVar1 != 0 &&
             (iVar1 = BN_GF2m_add(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),
                                  param_1[0xd]), iVar1 != 0)))))) &&
          (iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,*(undefined8 *)(param_2 + 0x20),
                              *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x18),
                              param_5), iVar1 != 0)) &&
         (iVar1 = (**(code **)(*param_1 + 0x108))
                            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10)
                             ,*(undefined8 *)(param_2 + 0x18),param_5), iVar1 != 0)) {
        *(undefined4 *)(param_3 + 0x28) = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143da4b70 ec_GF2m_simple_ladder_step body=511 status=ok
// SIG undefined ec_GF2m_simple_ladder_step(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GF2m_simple_ladder_step
          (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x108))
                    (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                     *(undefined8 *)(param_3 + 0x10),param_5,0x143da4b90);
  if (((((iVar1 != 0) &&
        (iVar1 = (**(code **)(*param_1 + 0x108))
                           (param_1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_2 + 0x10),
                            *(undefined8 *)(param_3 + 0x20),param_5), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0x110))
                          (param_1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_2 + 0x20),
                           param_5), iVar1 != 0)) &&
      ((((iVar1 = (**(code **)(*param_1 + 0x110))
                            (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10)
                             ,param_5), iVar1 != 0 &&
         (iVar1 = BN_GF2m_add(*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_2 + 0x18),
                              *(undefined8 *)(param_3 + 0x10)), iVar1 != 0)) &&
        ((iVar1 = (**(code **)(*param_1 + 0x110))
                            (param_1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x20)
                             ,param_5), iVar1 != 0 &&
         ((iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,*(undefined8 *)(param_3 + 0x10),
                              *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x10),
                              param_5), iVar1 != 0 &&
          (iVar1 = (**(code **)(*param_1 + 0x108))
                             (param_1,*(undefined8 *)(param_2 + 0x18),
                              *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_4 + 0x10),
                              param_5), iVar1 != 0)))))) &&
       (iVar1 = BN_GF2m_add(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x10),
                            *(undefined8 *)(param_2 + 0x18)), iVar1 != 0)))) &&
     ((((iVar1 = (**(code **)(*param_1 + 0x110))
                           (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                            param_5), iVar1 != 0 &&
        (iVar1 = (**(code **)(*param_1 + 0x108))
                           (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x20),
                            *(undefined8 *)(param_3 + 0x18),param_5), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0x110))
                          (param_1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x18),
                           param_5), iVar1 != 0)) &&
      ((iVar1 = (**(code **)(*param_1 + 0x108))
                          (param_1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x18),
                           param_1[0xd],param_5), iVar1 != 0 &&
       (iVar1 = BN_GF2m_add(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                            *(undefined8 *)(param_3 + 0x18)), iVar1 != 0)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143da4d70 ec_GF2m_simple_ladder_post body=926 status=ok
// SIG undefined ec_GF2m_simple_ladder_post(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GF2m_simple_ladder_post
                    (longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                    undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint local_res10;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  local_res10 = 0;
  iVar1 = BN_is_zero(*(undefined8 *)(param_2 + 0x20));
  if (iVar1 != 0) {
    uVar2 = EC_POINT_set_to_infinity(param_1,param_2);
    return uVar2;
  }
  iVar1 = BN_is_zero(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 0) {
    iVar1 = EC_POINT_copy(param_2,param_4);
    if (iVar1 != 0) {
      iVar1 = EC_POINT_invert(param_1,param_2,param_5);
      if (iVar1 != 0) {
        return 1;
      }
    }
    ERR_put_error(0x10,0x11d,0x10,"crypto\\ec\\ec2_smpl.c",CONCAT44(uVar6,0x312));
    return 0;
  }
  BN_CTX_start(param_5);
  uVar3 = BN_CTX_get(param_5);
  uVar4 = BN_CTX_get(param_5);
  lVar5 = BN_CTX_get(param_5);
  if (lVar5 == 0) {
    ERR_put_error(0x10,0x11d,0x41,"crypto\\ec\\ec2_smpl.c",CONCAT44(uVar6,0x31d));
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x108))
                      (param_1,uVar3,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_3 + 0x20)
                       ,param_5);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x108))
                        (param_1,uVar4,*(undefined8 *)(param_4 + 0x10),
                         *(undefined8 *)(param_2 + 0x20),param_5);
      if (iVar1 != 0) {
        iVar1 = BN_GF2m_add(uVar4,*(undefined8 *)(param_2 + 0x10),uVar4);
        if (iVar1 != 0) {
          iVar1 = (**(code **)(*param_1 + 0x108))
                            (param_1,lVar5,*(undefined8 *)(param_4 + 0x10),
                             *(undefined8 *)(param_3 + 0x20),param_5);
          if (iVar1 != 0) {
            iVar1 = (**(code **)(*param_1 + 0x108))
                              (param_1,*(undefined8 *)(param_2 + 0x20),
                               *(undefined8 *)(param_2 + 0x10),lVar5,param_5);
            if (iVar1 != 0) {
              iVar1 = BN_GF2m_add(lVar5,lVar5,*(undefined8 *)(param_3 + 0x10));
              if (iVar1 != 0) {
                iVar1 = (**(code **)(*param_1 + 0x108))(param_1,uVar4,uVar4,lVar5,param_5);
                if (iVar1 != 0) {
                  iVar1 = (**(code **)(*param_1 + 0x110))
                                    (param_1,lVar5,*(undefined8 *)(param_4 + 0x10),param_5);
                  if (iVar1 != 0) {
                    iVar1 = BN_GF2m_add(lVar5,*(undefined8 *)(param_4 + 0x18),lVar5);
                    if (iVar1 != 0) {
                      iVar1 = (**(code **)(*param_1 + 0x108))(param_1,lVar5,lVar5,uVar3,param_5);
                      if (iVar1 != 0) {
                        iVar1 = BN_GF2m_add(uVar4,lVar5,uVar4);
                        if (iVar1 != 0) {
                          iVar1 = (**(code **)(*param_1 + 0x108))
                                            (param_1,lVar5,*(undefined8 *)(param_4 + 0x10),uVar3,
                                             param_5);
                          if (iVar1 != 0) {
                            iVar1 = BN_GF2m_mod_inv(lVar5,lVar5,param_1[8],param_5);
                            if (iVar1 != 0) {
                              iVar1 = (**(code **)(*param_1 + 0x108))
                                                (param_1,uVar4,uVar4,lVar5,param_5);
                              if (iVar1 != 0) {
                                iVar1 = (**(code **)(*param_1 + 0x108))
                                                  (param_1,*(undefined8 *)(param_2 + 0x10),
                                                   *(undefined8 *)(param_2 + 0x20),lVar5,param_5);
                                if (iVar1 != 0) {
                                  iVar1 = BN_GF2m_add(lVar5,*(undefined8 *)(param_4 + 0x10),
                                                      *(undefined8 *)(param_2 + 0x10));
                                  if (iVar1 != 0) {
                                    iVar1 = (**(code **)(*param_1 + 0x108))
                                                      (param_1,lVar5,lVar5,uVar4,param_5);
                                    if (iVar1 != 0) {
                                      iVar1 = BN_GF2m_add(*(undefined8 *)(param_2 + 0x18),
                                                          *(undefined8 *)(param_4 + 0x18),lVar5);
                                      if (iVar1 != 0) {
                                        iVar1 = BN_set_word(*(undefined8 *)(param_2 + 0x20),1);
                                        if (iVar1 != 0) {
                                          *(undefined4 *)(param_2 + 0x28) = 1;
                                          BN_set_negative(*(undefined8 *)(param_2 + 0x10),0);
                                          BN_set_negative(*(undefined8 *)(param_2 + 0x18),0);
                                          local_res10 = 1;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  BN_CTX_end(param_5);
  return (ulonglong)local_res10;
}



// FUNCTION 143da5110 ec_GF2m_simple_points_mul body=450 status=ok
// SIG undefined ec_GF2m_simple_points_mul(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GF2m_simple_points_mul
                    (longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                    undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar6 = 0x143da5128;
  if (((1 < param_4) || (iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) ||
     (iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) {
    uVar2 = ec_wNAF_mul(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar6);
    return uVar2;
  }
  if (param_3 == 0) {
    if (param_4 == 1) {
      uVar2 = ec_scalar_mul_ladder(param_1,param_2,*param_6,*param_5,param_7);
      return uVar2;
    }
  }
  else if (param_4 == 0) {
    uVar2 = ec_scalar_mul_ladder(param_1,param_2,param_3,0,param_7);
    return uVar2;
  }
  lVar3 = EC_POINT_new(param_1);
  if (lVar3 == 0) {
    ERR_put_error(0x10,0x121,0x41,"crypto\\ec\\ec2_smpl.c",CONCAT44(uVar5,0x36c));
    return 0;
  }
  iVar1 = ec_scalar_mul_ladder(param_1,lVar3,param_3,0,param_7);
  uVar4 = 0;
  if ((iVar1 != 0) &&
     (iVar1 = ec_scalar_mul_ladder(param_1,param_2,*param_6,*param_5,param_7), uVar4 = 0, iVar1 != 0
     )) {
    iVar1 = EC_POINT_add(param_1,param_2,lVar3,param_2,param_7);
    uVar4 = 0;
    if (iVar1 != 0) {
      uVar4 = 1;
    }
  }
  EC_POINT_free(lVar3);
  return (ulonglong)uVar4;
}



// FUNCTION 143da52e0 EC_GF2m_simple_method body=8 status=ok
// SIG undefined EC_GF2m_simple_method(void)

undefined * EC_GF2m_simple_method(void)

{
  return &DAT_145db2b90;
}



// FUNCTION 143da52f0 ec_GFp_simple_oct2point body=664 status=ok
// SIG undefined ec_GFp_simple_oct2point(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_simple_oct2point
                    (longlong param_1,undefined8 param_2,byte *param_3,longlong param_4,
                    longlong param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar12;
  uint local_48;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_48 = 0;
  if (param_4 == 0) {
    ERR_put_error(0x10,0x67,100,"crypto\\ec\\ecp_oct.c",0x118);
    return 0;
  }
  bVar1 = *param_3;
  uVar11 = bVar1 & 1;
  uVar10 = bVar1 & 0xfffffffe;
  if ((bVar1 & 0xfe) == 0) {
LAB_143da5382:
    if ((bVar1 & 1) != 0) {
      uVar6 = 0x125;
      goto LAB_143da53ef;
    }
  }
  else {
    if (uVar10 != 2) {
      if (uVar10 == 4) goto LAB_143da5382;
      if (uVar10 != 6) {
        uVar6 = 0x121;
        goto LAB_143da53ef;
      }
    }
    if (uVar10 == 4) goto LAB_143da5382;
  }
  if ((bVar1 & 0xfe) == 0) {
    if (param_4 == 1) {
      uVar4 = EC_POINT_set_to_infinity();
      return uVar4;
    }
    uVar6 = 299;
LAB_143da53ef:
    ERR_put_error(0x10,0x67,0x66,"crypto\\ec\\ecp_oct.c",uVar6);
    return 0;
  }
  iVar2 = BN_num_bits(*(undefined8 *)(param_1 + 0x40));
  iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
  lVar5 = (longlong)iVar2;
  lVar9 = lVar5;
  if (uVar10 != 2) {
    lVar9 = lVar5 * 2;
  }
  if (param_4 != lVar9 + 1) {
    uVar6 = 0x138;
    goto LAB_143da53ef;
  }
  lVar9 = 0;
  if ((param_5 == 0) && (param_5 = BN_CTX_new(), lVar9 = param_5, param_5 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  uVar6 = BN_CTX_get(param_5);
  lVar7 = BN_CTX_get(param_5);
  if ((lVar7 == 0) || (lVar8 = BN_bin2bn(param_3 + 1,iVar2,uVar6), lVar8 == 0)) goto LAB_143da5552;
  iVar3 = BN_ucmp(uVar6,*(undefined8 *)(param_1 + 0x40));
  if (iVar3 < 0) {
    if (uVar10 == 2) {
      iVar2 = EC_POINT_set_compressed_coordinates(param_1,param_2,uVar6,uVar11,param_5);
LAB_143da5546:
      if (iVar2 != 0) {
        local_48 = 1;
      }
      goto LAB_143da5552;
    }
    lVar5 = BN_bin2bn(param_3 + lVar5 + 1,iVar2,lVar7);
    if (lVar5 == 0) goto LAB_143da5552;
    iVar2 = BN_ucmp(lVar7,*(undefined8 *)(param_1 + 0x40));
    if (iVar2 < 0) {
      if ((uVar10 != 6) || (uVar10 = BN_is_odd(lVar7), uVar11 == uVar10)) {
        iVar2 = EC_POINT_set_affine_coordinates(param_1,param_2,uVar6,lVar7,param_5);
        goto LAB_143da5546;
      }
      uVar6 = CONCAT44(uVar12,0x15b);
    }
    else {
      uVar6 = CONCAT44(uVar12,0x156);
    }
  }
  else {
    uVar6 = CONCAT44(uVar12,0x14b);
  }
  ERR_put_error(0x10,0x67,0x66,"crypto\\ec\\ecp_oct.c",uVar6);
LAB_143da5552:
  BN_CTX_end(param_5);
  BN_CTX_free(lVar9);
  return (ulonglong)local_48;
}



// FUNCTION 143da5590 ec_GFp_simple_point2oct body=736 status=ok
// SIG undefined ec_GFp_simple_point2oct(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GFp_simple_point2oct
                    (longlong param_1,undefined8 param_2,int param_3,char *param_4,ulonglong param_5
                    ,longlong param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar13;
  undefined8 uVar12;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar11 = 0;
  cVar1 = (char)param_3;
  if (((param_3 - 2U & 0xfffffff9) == 0) && (param_3 != 8)) {
    iVar2 = EC_POINT_is_at_infinity();
    if (iVar2 != 0) {
      if (param_4 == (char *)0x0) {
        return 1;
      }
      if (param_5 == 0) {
        ERR_put_error(0x10,0x68,100,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar13,0xaf));
        return 0;
      }
      *param_4 = '\0';
      return 1;
    }
    iVar2 = BN_num_bits(*(undefined8 *)(param_1 + 0x40));
    uVar5 = (ulonglong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
    uVar6 = uVar5;
    if (param_3 != 2) {
      uVar6 = uVar5 * 2;
    }
    uVar6 = uVar6 + 1;
    if (param_4 == (char *)0x0) goto LAB_143da5818;
    if (uVar6 <= param_5) {
      if ((param_6 == 0) && (param_6 = BN_CTX_new(), lVar11 = param_6, param_6 == 0)) {
        return 0;
      }
      BN_CTX_start(param_6);
      uVar3 = BN_CTX_get(param_6);
      lVar4 = BN_CTX_get(param_6);
      if (lVar4 != 0) {
        lVar9 = param_6;
        iVar2 = EC_POINT_get_affine_coordinates(param_1,param_2,uVar3,lVar4,param_6);
        uVar13 = (undefined4)((ulonglong)lVar9 >> 0x20);
        if (iVar2 != 0) {
          if (((param_3 - 2U & 0xfffffffb) == 0) && (iVar2 = BN_is_odd(lVar4), iVar2 != 0)) {
            cVar1 = cVar1 + '\x01';
          }
          lVar9 = 1;
          *param_4 = cVar1;
          iVar2 = BN_num_bits(uVar3);
          uVar7 = uVar5 - (longlong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
          if (uVar5 < uVar7) {
            uVar3 = CONCAT44(uVar13,0xde);
          }
          else {
            if (uVar7 != 0) {
              lVar9 = uVar7 + 1;
              pcVar10 = param_4;
              for (; pcVar10 = pcVar10 + 1, uVar7 != 0; uVar7 = uVar7 - 1) {
                *pcVar10 = '\0';
              }
            }
            iVar2 = BN_bn2bin(uVar3,param_4 + lVar9);
            uVar7 = lVar9 + iVar2;
            if (uVar7 == uVar5 + 1) {
              if ((param_3 - 4U & 0xfffffffd) == 0) {
                iVar2 = BN_num_bits(lVar4);
                uVar8 = uVar5 - (longlong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
                if (uVar5 < uVar8) {
                  uVar3 = CONCAT44(uVar13,0xf0);
                  goto LAB_143da573b;
                }
                if (uVar8 != 0) {
                  pcVar10 = param_4 + uVar7;
                  uVar7 = uVar7 + uVar8;
                  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + 1;
                  }
                }
                iVar2 = BN_bn2bin(lVar4,param_4 + uVar7);
                uVar7 = uVar7 + (longlong)iVar2;
              }
              if (uVar7 == uVar6) {
                BN_CTX_end(param_6);
LAB_143da5818:
                BN_CTX_free(lVar11);
                return uVar6;
              }
              uVar3 = CONCAT44(uVar13,0xfc);
            }
            else {
              uVar3 = CONCAT44(uVar13,0xe8);
            }
          }
LAB_143da573b:
          ERR_put_error(0x10,0x68,0x44,"crypto\\ec\\ecp_oct.c",uVar3);
        }
      }
      BN_CTX_end(param_6);
      goto LAB_143da5846;
    }
    uVar12 = 0xc0;
    uVar3 = 100;
  }
  else {
    uVar12 = 0xa7;
    uVar3 = 0x68;
  }
  ERR_put_error(0x10,0x68,uVar3,"crypto\\ec\\ecp_oct.c",uVar12);
LAB_143da5846:
  BN_CTX_free(lVar11);
  return 0;
}



// FUNCTION 143da5870 ec_GFp_simple_set_compressed_coordinates body=907 status=ok
// SIG undefined ec_GFp_simple_set_compressed_coordinates(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ec_GFp_simple_set_compressed_coordinates
          (longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  longlong local_38;
  
  uVar10 = 0;
  uVar11 = 0;
  local_38 = 0;
  ERR_clear_error();
  if ((param_5 == 0) && (param_5 = BN_CTX_new(), local_38 = param_5, param_5 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  uVar5 = BN_CTX_get(param_5);
  lVar6 = BN_CTX_get(param_5);
  uVar7 = BN_CTX_get(param_5);
  lVar8 = BN_CTX_get(param_5);
  if ((lVar8 == 0) || (iVar2 = BN_nnmod(uVar7,param_3,param_1[8],param_5), iVar2 == 0))
  goto LAB_143da5bc5;
  if (*(longlong *)(*param_1 + 0x128) == 0) {
    iVar2 = (**(code **)(*param_1 + 0x110))(param_1,lVar6,param_3);
    if (iVar2 == 0) goto LAB_143da5bc5;
    lVar9 = param_5;
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,uVar5,lVar6,param_3,param_5);
    uVar12 = (undefined4)((ulonglong)lVar9 >> 0x20);
  }
  else {
    iVar2 = BN_mod_sqr(lVar6,param_3,param_1[8],param_5);
    uVar10 = uVar11;
    if (iVar2 == 0) goto LAB_143da5bc5;
    lVar9 = param_5;
    iVar2 = BN_mod_mul(uVar5,lVar6,param_3,param_1[8],param_5);
    uVar12 = (undefined4)((ulonglong)lVar9 >> 0x20);
  }
  uVar10 = uVar11;
  if (iVar2 == 0) goto LAB_143da5bc5;
  if ((int)param_1[0xe] == 0) {
    pcVar1 = *(code **)(*param_1 + 0x128);
    if (pcVar1 == (code *)0x0) {
      lVar9 = param_5;
      iVar2 = (**(code **)(*param_1 + 0x108))(param_1,lVar6,param_1[0xc],uVar7,param_5);
      uVar12 = (undefined4)((ulonglong)lVar9 >> 0x20);
    }
    else {
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) goto LAB_143da5bc5;
      lVar9 = param_5;
      iVar2 = BN_mod_mul(lVar6,lVar6,uVar7,param_1[8],param_5);
      uVar12 = (undefined4)((ulonglong)lVar9 >> 0x20);
    }
    if (iVar2 == 0) goto LAB_143da5bc5;
    iVar2 = BN_mod_add_quick(uVar5,uVar5,lVar6,param_1[8]);
  }
  else {
    iVar2 = BN_mod_lshift1_quick(lVar6,uVar7,param_1[8]);
    if ((iVar2 == 0) || (iVar2 = BN_mod_add_quick(lVar6,lVar6,uVar7,param_1[8]), iVar2 == 0))
    goto LAB_143da5bc5;
    iVar2 = BN_mod_sub_quick(uVar5,uVar5,lVar6,param_1[8]);
  }
  if (iVar2 == 0) goto LAB_143da5bc5;
  lVar9 = param_1[0xd];
  if (((*(code **)(*param_1 + 0x128) != (code *)0x0) &&
      (iVar2 = (**(code **)(*param_1 + 0x128))(param_1,lVar6,param_1[0xd],param_5), lVar9 = lVar6,
      iVar2 == 0)) || (iVar2 = BN_mod_add_quick(uVar5,uVar5,lVar9,param_1[8]), iVar2 == 0))
  goto LAB_143da5bc5;
  lVar6 = BN_mod_sqrt(lVar8,uVar5,param_1[8],param_5);
  if (lVar6 == 0) {
    uVar3 = ERR_peek_last_error();
    if (((uVar3 & 0xff000000) == 0x3000000) && ((uVar3 & 0xfff) == 0x6f)) {
      ERR_clear_error();
      uVar4 = 0x6c;
      uVar10 = 0x6e;
    }
    else {
      uVar4 = 0x6f;
      uVar10 = 3;
    }
LAB_143da5b07:
    uVar5 = CONCAT44(uVar12,uVar4);
  }
  else {
    uVar3 = BN_is_odd(lVar8);
    if ((param_4 != 0) != uVar3) {
      iVar2 = BN_is_zero(lVar8);
      if (iVar2 != 0) {
        iVar2 = BN_kronecker(uVar7,param_1[8],param_5);
        if (iVar2 == -2) goto LAB_143da5bc5;
        if (iVar2 == 1) {
          uVar4 = 0x7d;
          uVar10 = 0x6d;
        }
        else {
          uVar4 = 0x83;
          uVar10 = 0x6e;
        }
        goto LAB_143da5b07;
      }
      iVar2 = BN_usub(lVar8,param_1[8],lVar8);
      if (iVar2 == 0) goto LAB_143da5bc5;
    }
    uVar3 = BN_is_odd(lVar8);
    if ((param_4 != 0) == uVar3) {
      iVar2 = EC_POINT_set_affine_coordinates(param_1,param_2,uVar7,lVar8,param_5);
      uVar10 = 0;
      if (iVar2 != 0) {
        uVar10 = 1;
      }
      goto LAB_143da5bc5;
    }
    uVar5 = CONCAT44(uVar12,0x8b);
    uVar10 = 0x44;
  }
  ERR_put_error(0x10,0xa9,uVar10,"crypto\\ec\\ecp_oct.c",uVar5);
  uVar10 = uVar11;
LAB_143da5bc5:
  BN_CTX_end(param_5);
  BN_CTX_free(local_38);
  return uVar10;
}



// FUNCTION 143da5c00 ec_GF2m_simple_oct2point body=714 status=ok
// SIG undefined ec_GF2m_simple_oct2point(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GF2m_simple_oct2point
                    (longlong *param_1,undefined8 param_2,byte *param_3,longlong param_4,
                    longlong param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar13;
  uint local_58;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar6 = 0;
  local_58 = 0;
  if (param_4 == 0) {
    ERR_put_error(0x10,0xa0,100,"crypto\\ec\\ec2_oct.c",0xf7);
    return 0;
  }
  bVar1 = *param_3;
  uVar12 = bVar1 & 1;
  uVar11 = bVar1 & 0xfffffffe;
  if ((bVar1 & 0xfe) == 0) {
LAB_143da5c90:
    if ((bVar1 & 1) != 0) {
      uVar7 = 0x104;
      goto LAB_143da5cfa;
    }
  }
  else {
    if (uVar11 != 2) {
      if (uVar11 == 4) goto LAB_143da5c90;
      if (uVar11 != 6) {
        uVar7 = 0x100;
        goto LAB_143da5cfa;
      }
    }
    if (uVar11 == 4) goto LAB_143da5c90;
  }
  if ((bVar1 & 0xfe) == 0) {
    if (param_4 == 1) {
      uVar4 = EC_POINT_set_to_infinity();
      return uVar4;
    }
    uVar7 = 0x10a;
LAB_143da5cfa:
    ERR_put_error(0x10,0xa0,0x66,"crypto\\ec\\ec2_oct.c",uVar7);
    return 0;
  }
  iVar2 = EC_GROUP_get_degree();
  iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
  lVar5 = (longlong)iVar2;
  lVar9 = lVar5;
  if (uVar11 != 2) {
    lVar9 = lVar5 * 2;
  }
  if (param_4 != lVar9 + 1) {
    uVar7 = 0x117;
    goto LAB_143da5cfa;
  }
  if ((param_5 == 0) && (lVar6 = BN_CTX_new(), param_5 = lVar6, lVar6 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  uVar7 = BN_CTX_get(param_5);
  uVar8 = BN_CTX_get(param_5);
  lVar9 = BN_CTX_get(param_5);
  if ((lVar9 == 0) || (lVar10 = BN_bin2bn(param_3 + 1,iVar2,uVar7), lVar10 == 0))
  goto LAB_143da5e95;
  iVar3 = BN_ucmp(uVar7,param_1[8]);
  if (iVar3 < 0) {
    if (uVar11 == 2) {
      iVar2 = EC_POINT_set_compressed_coordinates(param_1,param_2,uVar7,uVar12,param_5);
    }
    else {
      lVar5 = BN_bin2bn(param_3 + lVar5 + 1,iVar2,uVar8);
      if (lVar5 == 0) goto LAB_143da5e95;
      iVar2 = BN_ucmp(uVar8,param_1[8]);
      if (-1 < iVar2) {
        uVar7 = CONCAT44(uVar13,0x136);
        goto LAB_143da5db1;
      }
      if (uVar11 == 6) {
        lVar5 = param_5;
        iVar2 = (**(code **)(*param_1 + 0x118))(param_1,lVar9,uVar8,uVar7,param_5);
        uVar13 = (undefined4)((ulonglong)lVar5 >> 0x20);
        if (iVar2 == 0) goto LAB_143da5e95;
        uVar11 = BN_is_odd(lVar9);
        if (uVar12 != uVar11) {
          uVar7 = CONCAT44(uVar13,0x13d);
          goto LAB_143da5db1;
        }
      }
      iVar2 = EC_POINT_set_affine_coordinates(param_1,param_2,uVar7,uVar8,param_5);
    }
    if (iVar2 != 0) {
      local_58 = 1;
    }
  }
  else {
    uVar7 = CONCAT44(uVar13,299);
LAB_143da5db1:
    ERR_put_error(0x10,0xa0,0x66,"crypto\\ec\\ec2_oct.c",uVar7);
  }
LAB_143da5e95:
  BN_CTX_end(param_5);
  BN_CTX_free(lVar6);
  return (ulonglong)local_58;
}



// FUNCTION 143da5ed0 ec_GF2m_simple_point2oct body=791 status=ok
// SIG undefined ec_GF2m_simple_point2oct(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ec_GF2m_simple_point2oct
                    (longlong *param_1,undefined8 param_2,int param_3,char *param_4,
                    ulonglong param_5,longlong param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar12;
  longlong lVar11;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar10 = 0;
  if (((param_3 - 2U & 0xfffffff9) == 0) && (param_3 != 8)) {
    iVar1 = EC_POINT_is_at_infinity();
    if (iVar1 != 0) {
      if (param_4 == (char *)0x0) {
        return 1;
      }
      if (param_5 == 0) {
        ERR_put_error(0x10,0xa1,100,"crypto\\ec\\ec2_oct.c",CONCAT44(uVar12,0x86));
        return 0;
      }
      *param_4 = '\0';
      return 1;
    }
    iVar1 = EC_GROUP_get_degree(param_1);
    uVar4 = (ulonglong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
    uVar5 = uVar4;
    if (param_3 != 2) {
      uVar5 = uVar4 * 2;
    }
    uVar5 = uVar5 + 1;
    if (param_4 == (char *)0x0) goto LAB_143da618e;
    if (uVar5 <= param_5) {
      if ((param_6 == 0) && (param_6 = BN_CTX_new(), lVar10 = param_6, param_6 == 0)) {
        return 0;
      }
      BN_CTX_start(param_6);
      uVar9 = BN_CTX_get(param_6);
      uVar2 = BN_CTX_get(param_6);
      lVar3 = BN_CTX_get(param_6);
      if (lVar3 != 0) {
        lVar11 = param_6;
        iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,uVar9,uVar2,param_6);
        uVar12 = (undefined4)((ulonglong)lVar11 >> 0x20);
        if (iVar1 != 0) {
          *param_4 = (char)param_3;
          if ((param_3 != 4) && (iVar1 = BN_is_zero(uVar9), iVar1 == 0)) {
            lVar11 = param_6;
            iVar1 = (**(code **)(*param_1 + 0x118))(param_1,lVar3,uVar2,uVar9,param_6);
            uVar12 = (undefined4)((ulonglong)lVar11 >> 0x20);
            if (iVar1 == 0) goto LAB_143da60c5;
            iVar1 = BN_is_odd(lVar3);
            if (iVar1 != 0) {
              *param_4 = *param_4 + '\x01';
            }
          }
          lVar3 = 1;
          iVar1 = BN_num_bits(uVar9);
          uVar6 = uVar4 - (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
          if (uVar4 < uVar6) {
            uVar9 = CONCAT44(uVar12,0xb8);
          }
          else {
            if (uVar6 != 0) {
              lVar3 = uVar6 + 1;
              pcVar8 = param_4;
              for (; pcVar8 = pcVar8 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar8 = '\0';
              }
            }
            iVar1 = BN_bn2bin(uVar9,param_4 + lVar3);
            uVar6 = lVar3 + iVar1;
            if (uVar6 == uVar4 + 1) {
              if ((param_3 - 4U & 0xfffffffd) == 0) {
                iVar1 = BN_num_bits(uVar2);
                uVar7 = uVar4 - (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
                if (uVar4 < uVar7) {
                  uVar9 = CONCAT44(uVar12,0xca);
                  goto LAB_143da60ab;
                }
                if (uVar7 != 0) {
                  pcVar8 = param_4 + uVar6;
                  uVar6 = uVar6 + uVar7;
                  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *pcVar8 = '\0';
                    pcVar8 = pcVar8 + 1;
                  }
                }
                iVar1 = BN_bn2bin(uVar2,param_4 + uVar6);
                uVar6 = uVar6 + (longlong)iVar1;
              }
              if (uVar6 == uVar5) {
                BN_CTX_end(param_6);
LAB_143da618e:
                BN_CTX_free(lVar10);
                return uVar5;
              }
              uVar9 = CONCAT44(uVar12,0xd6);
            }
            else {
              uVar9 = CONCAT44(uVar12,0xc2);
            }
          }
LAB_143da60ab:
          ERR_put_error(0x10,0xa1,0x44,"crypto\\ec\\ec2_oct.c",uVar9);
        }
      }
LAB_143da60c5:
      BN_CTX_end(param_6);
      goto LAB_143da61bf;
    }
    uVar2 = 0x97;
    uVar9 = 100;
  }
  else {
    uVar2 = 0x7e;
    uVar9 = 0x68;
  }
  ERR_put_error(0x10,0xa1,uVar9,"crypto\\ec\\ec2_oct.c",uVar2);
LAB_143da61bf:
  BN_CTX_free(lVar10);
  return 0;
}



// FUNCTION 143da61f0 ec_GF2m_simple_set_compressed_coordinates body=617 status=ok
// SIG undefined ec_GF2m_simple_set_compressed_coordinates(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ec_GF2m_simple_set_compressed_coordinates
                   (longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                   longlong param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  longlong lVar10;
  
  lVar10 = 0;
  lVar9 = 0;
  ERR_clear_error();
  lVar13 = lVar10;
  if ((param_5 == 0) && (param_5 = BN_CTX_new(), lVar13 = param_5, param_5 == 0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  uVar5 = BN_CTX_get(param_5);
  uVar6 = BN_CTX_get(param_5);
  uVar7 = BN_CTX_get(param_5);
  lVar8 = BN_CTX_get(param_5);
  lVar11 = lVar10;
  if ((lVar8 == 0) || (iVar1 = BN_GF2m_mod_arr(uVar6,param_3,param_1 + 9), iVar1 == 0))
  goto LAB_143da642f;
  iVar1 = BN_is_zero(uVar6);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar5,uVar6,param_5);
    if (iVar1 == 0) goto LAB_143da642f;
    lVar11 = param_5;
    iVar1 = (**(code **)(*param_1 + 0x118))(param_1,uVar5,param_1[0xd],uVar5,param_5);
    uVar14 = (undefined4)((ulonglong)lVar11 >> 0x20);
    lVar11 = lVar9;
    if (((iVar1 == 0) || (iVar1 = BN_GF2m_add(uVar5,param_1[0xc],uVar5), iVar1 == 0)) ||
       (iVar1 = BN_GF2m_add(uVar5,uVar6,uVar5), iVar1 == 0)) goto LAB_143da642f;
    iVar1 = BN_GF2m_mod_solve_quad_arr(lVar8,uVar5,param_1 + 9,param_5);
    if (iVar1 == 0) {
      uVar2 = ERR_peek_last_error();
      if (((uVar2 & 0xff000000) == 0x3000000) && ((uVar2 & 0xfff) == 0x74)) {
        ERR_clear_error();
        uVar3 = 0x52;
        uVar12 = 0x6e;
      }
      else {
        uVar3 = 0x55;
        uVar12 = 3;
      }
      ERR_put_error(0x10,0xa4,uVar12,"crypto\\ec\\ec2_oct.c",CONCAT44(uVar14,uVar3));
      goto LAB_143da642f;
    }
    iVar1 = BN_is_odd(lVar8);
    iVar4 = (**(code **)(*param_1 + 0x108))(param_1,uVar7,uVar6,lVar8,param_5);
    if (iVar4 == 0) goto LAB_143da642f;
    if ((iVar1 != 0) != (param_4 != 0)) {
      iVar1 = BN_GF2m_add(uVar7,uVar7,uVar6);
      goto LAB_143da6401;
    }
  }
  else {
    iVar1 = BN_GF2m_mod_sqrt_arr(uVar7,param_1[0xd],param_1 + 9);
LAB_143da6401:
    lVar11 = lVar10;
    if (iVar1 == 0) goto LAB_143da642f;
  }
  iVar1 = EC_POINT_set_affine_coordinates(param_1,param_2,uVar6,uVar7,param_5);
  lVar11 = 0;
  if (iVar1 != 0) {
    lVar11 = 1;
  }
LAB_143da642f:
  BN_CTX_end(param_5);
  BN_CTX_free(lVar13);
  return lVar11;
}



// FUNCTION 143da6460 ecdsa_sign_setup body=1052 status=ok
// SIG undefined ecdsa_sign_setup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ecdsa_sign_setup(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                longlong param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  WriteBytesMem *this;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uchar *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong local_58;
  
  local_58 = 0;
  if ((param_1 == 0) ||
     (this = (WriteBytesMem *)FUniqueNetIdString::GetBytes(), this == (WriteBytesMem *)0x0)) {
    ERR_put_error(0x10,0xf8,0x43,"crypto\\ec\\ecdsa_ossl.c",0x2e);
    return 0;
  }
  iVar1 = EC_KEY_can_sign(param_1);
  if (iVar1 == 0) {
    ERR_put_error(0x10,0xf8,0x9f,"crypto\\ec\\ecdsa_ossl.c",0x33);
    return 0;
  }
  lVar3 = param_2;
  if ((param_2 == 0) && (lVar3 = BN_CTX_new(), lVar3 == 0)) {
    ERR_put_error(0x10,0xf8,0x41,"crypto\\ec\\ecdsa_ossl.c",0x39);
    return 0;
  }
  lVar4 = BN_new();
  lVar5 = BN_new();
  lVar6 = BN_new();
  if (((lVar4 == 0) || (lVar5 == 0)) || (lVar6 == 0)) {
    ERR_put_error(0x10,0xf8,0x41,"crypto\\ec\\ecdsa_ossl.c",0x42);
  }
  else {
    local_58 = EC_POINT_new(this);
    if (local_58 == 0) {
      ERR_put_error(0x10,0xf8,0x10,"crypto\\ec\\ecdsa_ossl.c",0x46);
    }
    else {
      puVar7 = AK::WriteBytesMem::Bytes(this);
      uVar2 = BN_num_bits(puVar7);
      iVar1 = BN_set_bit(lVar4,uVar2);
      if (((iVar1 != 0) && (iVar1 = BN_set_bit(lVar5,uVar2), iVar1 != 0)) &&
         (iVar1 = BN_set_bit(lVar6,uVar2), iVar1 != 0)) {
        do {
          do {
            if (param_5 != 0) {
              uVar8 = FNiagaraEmitterHandle::GetInstance(param_1);
              iVar1 = BN_generate_dsa_nonce(lVar4,puVar7,uVar8,param_5,(longlong)param_6,lVar3);
              if (iVar1 != 0) goto LAB_143da668a;
              uVar8 = 0x5a;
LAB_143da664c:
              uVar9 = 0x9e;
LAB_143da6657:
              ERR_put_error(0x10,0xf8,uVar9,"crypto\\ec\\ecdsa_ossl.c",uVar8);
              goto LAB_143da67f8;
            }
            iVar1 = BN_priv_rand_range(lVar4,puVar7);
            if (iVar1 == 0) {
              uVar8 = 0x60;
              goto LAB_143da664c;
            }
LAB_143da668a:
            iVar1 = BN_is_zero(lVar4);
          } while (iVar1 != 0);
          iVar1 = EC_POINT_mul(this,local_58,lVar4,0,0,lVar3);
          if (iVar1 == 0) {
            uVar8 = 0x68;
            uVar9 = 0x10;
            goto LAB_143da6657;
          }
          iVar1 = EC_POINT_get_affine_coordinates(this,local_58,lVar6,0,lVar3);
          if (iVar1 == 0) {
            ERR_put_error(0x10,0xf8,0x10,"crypto\\ec\\ecdsa_ossl.c",0x6d);
            goto LAB_143da67f8;
          }
          iVar1 = BN_nnmod(lVar5,lVar6,puVar7);
          if (iVar1 == 0) {
            uVar8 = 0x72;
            goto LAB_143da6767;
          }
          iVar1 = BN_is_zero(lVar5);
        } while (iVar1 != 0);
        iVar1 = ec_group_do_inverse_ord(this,lVar4,lVar4,lVar3);
        if (iVar1 != 0) {
          BN_clear_free(*param_4);
          BN_clear_free(*param_3);
          *param_4 = lVar5;
          uVar8 = 1;
          *param_3 = lVar4;
          goto LAB_143da6808;
        }
        uVar8 = 0x79;
LAB_143da6767:
        ERR_put_error(0x10,0xf8,3,"crypto\\ec\\ecdsa_ossl.c",uVar8);
      }
    }
  }
LAB_143da67f8:
  uVar8 = 0;
  BN_clear_free(lVar4);
  BN_clear_free(lVar5);
LAB_143da6808:
  if (lVar3 != param_2) {
    BN_CTX_free(lVar3);
  }
  EC_POINT_free(local_58);
  BN_clear_free(lVar6);
  return uVar8;
}



// FUNCTION 143da6880 ossl_ecdsa_sign body=115 status=ok
// SIG undefined ossl_ecdsa_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_ecdsa_sign(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  lVar2 = ECDSA_do_sign_ex(param_2,param_3,param_6,param_7,param_8,0x143da6890);
  if (lVar2 == 0) {
    *param_5 = 0;
    return 0;
  }
  uVar1 = i2d_ECDSA_SIG(lVar2,&local_res20);
  *param_5 = uVar1;
  ECDSA_SIG_free(lVar2);
  return 1;
}



// FUNCTION 143da6900 ossl_ecdsa_sign_setup body=34 status=ok
// SIG undefined ossl_ecdsa_sign_setup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_ecdsa_sign_setup(void)

{
  ecdsa_sign_setup();
  return;
}



// FUNCTION 143da6930 ossl_ecdsa_sign_sig body=985 status=ok
// SIG undefined ossl_ecdsa_sign_sig(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
ossl_ecdsa_sign_sig(longlong param_1,int param_2,longlong param_3,longlong param_4,
                   undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  WriteBytesMem *this;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong in_stack_ffffffffffffff98;
  undefined4 uVar11;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  uchar *local_40;
  
  lVar10 = 0;
  local_50 = 0;
  local_58 = 0;
  lVar6 = 0;
  this = (WriteBytesMem *)FUniqueNetIdString::GetBytes(param_5);
  local_48 = FNiagaraEmitterHandle::GetInstance(param_5);
  if ((this == (WriteBytesMem *)0x0) || (local_48 == 0)) {
    ERR_put_error(0x10,0xf9,0x43,"crypto\\ec\\ecdsa_ossl.c",0xa6);
    return (longlong *)0x0;
  }
  iVar1 = EC_KEY_can_sign(param_5);
  if (iVar1 == 0) {
    ERR_put_error(0x10,0xf9,0x9f,"crypto\\ec\\ecdsa_ossl.c",0xab);
    return (longlong *)0x0;
  }
  plVar4 = (longlong *)ECDSA_SIG_new();
  if (plVar4 == (longlong *)0x0) {
    ERR_put_error(0x10,0xf9,0x41,"crypto\\ec\\ecdsa_ossl.c",0xb1);
    return (longlong *)0x0;
  }
  lVar5 = BN_new();
  *plVar4 = lVar5;
  lVar5 = BN_new();
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  plVar4[1] = lVar5;
  if ((*plVar4 == 0) || (lVar5 == 0)) {
    uVar3 = 0xb7;
  }
  else {
    lVar6 = BN_CTX_new();
    uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    if (lVar6 != 0) {
      local_58 = BN_new();
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
      if (local_58 != 0) {
        local_40 = AK::WriteBytesMem::Bytes(this);
        uVar2 = BN_num_bits(local_40);
        if ((int)uVar2 < param_2 * 8) {
          param_2 = (int)(uVar2 + 7 + ((int)(uVar2 + 7) >> 0x1f & 7U)) >> 3;
        }
        lVar7 = BN_bin2bn(param_1,param_2,local_58);
        uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
        if (lVar7 != 0) {
          if ((int)uVar2 < param_2 * 8) {
            iVar1 = BN_rshift(local_58,local_58,8 - (uVar2 & 7));
            uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
            if (iVar1 == 0) {
              uVar3 = 0xcf;
              uVar9 = 3;
              goto LAB_143da6c8b;
            }
          }
LAB_143da6b20:
          if (param_3 == 0) goto LAB_143da6b47;
          if (param_4 == 0) goto LAB_143da6b47;
          lVar8 = BN_copy(*plVar4,param_4);
          uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
          lVar7 = param_3;
          if (lVar8 != 0) {
            do {
              uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
              iVar1 = bn_to_mont_fixed_top(lVar5,*plVar4,*(undefined8 *)(this + 0x90),lVar6);
              if (iVar1 == 0) {
LAB_143da6c5f:
                uVar3 = 0xea;
                uVar9 = 3;
                goto LAB_143da6c8b;
              }
              lVar8 = lVar6;
              iVar1 = bn_mul_mont_fixed_top(lVar5,lVar5,local_48,*(undefined8 *)(this + 0x90),lVar6)
              ;
              uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
              if (iVar1 == 0) goto LAB_143da6c5f;
              iVar1 = bn_mod_add_fixed_top(lVar5,lVar5,local_58,local_40);
              if (iVar1 == 0) {
                uVar3 = 0xee;
                uVar9 = 3;
                goto LAB_143da6c8b;
              }
              iVar1 = bn_to_mont_fixed_top(lVar5,lVar5,*(undefined8 *)(this + 0x90),lVar6);
              if (iVar1 == 0) {
LAB_143da6c45:
                uVar3 = 0xf7;
                uVar9 = 3;
                goto LAB_143da6c8b;
              }
              in_stack_ffffffffffffff98 = lVar6;
              iVar1 = BN_mod_mul_montgomery(lVar5,lVar5,lVar7,*(undefined8 *)(this + 0x90),lVar6);
              uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
              if (iVar1 == 0) goto LAB_143da6c45;
              iVar1 = BN_is_zero(lVar5);
              uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
              if (iVar1 == 0) goto LAB_143da6caf;
              if (param_3 != 0) goto code_r0x000143da6c31;
LAB_143da6b47:
              in_stack_ffffffffffffff98 = param_1;
              iVar1 = ecdsa_sign_setup(param_5,lVar6,&local_50,plVar4,param_1,param_2);
              uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
              lVar7 = local_50;
              lVar10 = local_50;
              if (iVar1 == 0) {
                uVar3 = 0xd5;
                uVar9 = 0x2a;
                goto LAB_143da6c8b;
              }
            } while( true );
          }
          uVar3 = 0xdc;
          goto LAB_143da6c85;
        }
        uVar3 = 0xca;
        uVar9 = 3;
        goto LAB_143da6c8b;
      }
    }
    uVar3 = 0xbe;
  }
LAB_143da6c85:
  uVar9 = 0x41;
LAB_143da6c8b:
  ERR_put_error(0x10,0xf9,uVar9,"crypto\\ec\\ecdsa_ossl.c",CONCAT44(uVar11,uVar3));
  ECDSA_SIG_free(plVar4);
  plVar4 = (longlong *)0x0;
LAB_143da6caf:
  BN_CTX_free(lVar6);
  BN_clear_free(local_58);
  BN_clear_free(lVar10);
  return plVar4;
code_r0x000143da6c31:
  if (param_4 != 0) goto code_r0x000143da6c3a;
  goto LAB_143da6b20;
code_r0x000143da6c3a:
  uVar3 = 0x101;
  uVar9 = 0x9d;
  goto LAB_143da6c8b;
}



// FUNCTION 143da6d10 ossl_ecdsa_verify body=230 status=ok
// SIG undefined ossl_ecdsa_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ossl_ecdsa_verify(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4,int param_5
                 ,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong local_res20;
  void *local_28;
  void *local_20;
  
  iVar1 = -1;
  local_28 = (void *)0x0;
  local_20 = param_4;
  local_res20 = ECDSA_SIG_new();
  if (local_res20 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = i2d_ECDSA_SIG(&local_res20,&local_20,param_5);
    uVar3 = 0xffffffff;
    if (lVar4 != 0) {
      iVar1 = i2d_ECDSA_SIG(local_res20,&local_28);
      uVar3 = 0xffffffff;
      if (iVar1 == param_5) {
        iVar2 = _guard_xfg_dispatch_icall_nop(param_4,local_28,(longlong)iVar1);
        if (iVar2 == 0) {
          uVar3 = ECDSA_do_verify(param_2,param_3,local_res20,param_6);
        }
      }
    }
    CRYPTO_clear_free(local_28,(longlong)iVar1,"crypto\\ec\\ecdsa_ossl.c",0x130);
    ECDSA_SIG_free(local_res20);
  }
  return uVar3;
}



// FUNCTION 143da6e00 ossl_ecdsa_verify_sig body=1099 status=ok
// SIG undefined ossl_ecdsa_verify_sig(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ossl_ecdsa_verify_sig(undefined8 param_1,int param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  WriteBytesMem *this;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uchar *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 in_stack_ffffffffffffff98;
  longlong lVar14;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar14 = 0;
  lVar13 = 0;
  uVar11 = 0xffffffff;
  if ((((param_4 == 0) ||
       (this = (WriteBytesMem *)FUniqueNetIdString::GetBytes(param_4), this == (WriteBytesMem *)0x0)
       ) || (lVar3 = USignificanceManager::GetWorld(param_4), lVar3 == 0)) ||
     (param_3 == (undefined8 *)0x0)) {
    uVar5 = CONCAT44(uVar12,0x143);
    uVar12 = 0x7c;
LAB_143da7225:
    ERR_put_error(0x10,0xfa,uVar12,"crypto\\ec\\ecdsa_ossl.c",uVar5);
    return 0xffffffff;
  }
  iVar1 = EC_KEY_can_sign(param_4);
  if (iVar1 == 0) {
    uVar5 = CONCAT44(uVar12,0x148);
    uVar12 = 0x9f;
    goto LAB_143da7225;
  }
  lVar4 = BN_CTX_new();
  if (lVar4 == 0) {
    uVar5 = CONCAT44(uVar12,0x14e);
    uVar12 = 0x41;
    goto LAB_143da7225;
  }
  BN_CTX_start(lVar4);
  uVar5 = BN_CTX_get(lVar4);
  uVar6 = BN_CTX_get(lVar4);
  uVar7 = BN_CTX_get(lVar4);
  lVar8 = BN_CTX_get(lVar4);
  if (lVar8 == 0) {
    ERR_put_error(0x10,0xfa,3,"crypto\\ec\\ecdsa_ossl.c",CONCAT44(uVar12,0x157));
    lVar13 = lVar14;
    goto LAB_143da71e7;
  }
  puVar9 = AK::WriteBytesMem::Bytes(this);
  if (puVar9 == (uchar *)0x0) {
    uVar5 = CONCAT44(uVar12,0x15d);
    uVar6 = 0x10;
    lVar13 = lVar14;
  }
  else {
    iVar1 = BN_is_zero(*param_3);
    if ((((iVar1 != 0) || (iVar1 = BN_is_negative(*param_3), iVar1 != 0)) ||
        ((iVar1 = BN_ucmp(*param_3,puVar9), -1 < iVar1 ||
         ((iVar1 = BN_is_zero(param_3[1]), iVar1 != 0 ||
          (iVar1 = BN_is_negative(param_3[1]), iVar1 != 0)))))) ||
       (iVar1 = BN_ucmp(param_3[1],puVar9), -1 < iVar1)) {
      ERR_put_error(0x10,0xfa,0x9c,"crypto\\ec\\ecdsa_ossl.c",CONCAT44(uVar12,0x164));
      uVar11 = 0;
      goto LAB_143da71e7;
    }
    iVar1 = ec_group_do_inverse_ord(this,uVar6,param_3[1],lVar4);
    if (iVar1 == 0) {
      uVar5 = 0x16a;
      lVar13 = lVar14;
    }
    else {
      uVar2 = BN_num_bits(puVar9);
      if ((int)uVar2 < param_2 * 8) {
        param_2 = (int)(((int)(uVar2 + 7) >> 0x1f & 7U) + uVar2 + 7) >> 3;
      }
      lVar10 = BN_bin2bn(param_1,param_2,uVar7);
      if (lVar10 == 0) {
        uVar5 = 0x175;
        lVar13 = lVar14;
      }
      else if (((int)uVar2 < param_2 * 8) &&
              (iVar1 = BN_rshift(uVar7,uVar7,8 - (uVar2 & 7)), iVar1 == 0)) {
        uVar5 = 0x17a;
        lVar13 = lVar14;
      }
      else {
        iVar1 = BN_mod_mul(uVar5,uVar7,uVar6,puVar9,lVar4);
        if (iVar1 == 0) {
          uVar5 = 0x17f;
        }
        else {
          lVar14 = lVar4;
          iVar1 = BN_mod_mul(uVar6,*param_3,uVar6,puVar9,lVar4);
          uVar12 = (undefined4)((ulonglong)lVar14 >> 0x20);
          if (iVar1 == 0) {
            uVar5 = 0x184;
          }
          else {
            lVar13 = EC_POINT_new(this);
            if (lVar13 == 0) {
              ERR_put_error(0x10,0xfa,0x41,"crypto\\ec\\ecdsa_ossl.c",CONCAT44(uVar12,0x189));
              goto LAB_143da71e7;
            }
            iVar1 = EC_POINT_mul(this,lVar13,uVar5,lVar3,uVar6,lVar4);
            if (iVar1 == 0) {
              ERR_put_error(0x10,0xfa,0x10,"crypto\\ec\\ecdsa_ossl.c",0x18d);
              goto LAB_143da71e7;
            }
            iVar1 = EC_POINT_get_affine_coordinates(this,lVar13,lVar8,0,lVar4);
            if (iVar1 == 0) {
              ERR_put_error(0x10,0xfa,0x10,"crypto\\ec\\ecdsa_ossl.c",0x192);
              goto LAB_143da71e7;
            }
            iVar1 = BN_nnmod(uVar5,lVar8,puVar9,lVar4);
            if (iVar1 != 0) {
              iVar1 = BN_ucmp(uVar5,*param_3);
              uVar11 = (ulonglong)(iVar1 == 0);
              goto LAB_143da71e7;
            }
            uVar5 = 0x197;
          }
        }
      }
    }
    uVar6 = 3;
  }
  ERR_put_error(0x10,0xfa,uVar6,"crypto\\ec\\ecdsa_ossl.c",uVar5);
LAB_143da71e7:
  BN_CTX_end(lVar4);
  BN_CTX_free(lVar4);
  EC_POINT_free(lVar13);
  return uVar11;
}



// FUNCTION 143da7250 X509_ATTRIBUTE_create_by_OBJ body=542 status=ok
// SIG undefined X509_ATTRIBUTE_create_by_OBJ(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
X509_ATTRIBUTE_create_by_OBJ
          (longlong *param_1,longlong param_2,uint param_3,undefined8 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  if (((param_1 == (longlong *)0x0) || (plVar3 = (longlong *)*param_1, plVar3 == (longlong *)0x0))
     && (plVar3 = (longlong *)FUN_143d3b510(), plVar3 == (longlong *)0x0)) {
    ERR_put_error(0xb,0x89,0x41,"crypto\\x509\\x509_att.c",0xc4);
    return (longlong *)0x0;
  }
  if (param_2 == 0) goto LAB_143da7405;
  ASN1_OBJECT_free(*plVar3);
  lVar4 = OBJ_dup(param_2);
  *plVar3 = lVar4;
  if (lVar4 == 0) goto LAB_143da7405;
  lVar6 = 0;
  lVar5 = 0;
  if ((param_3 & 0x1000) == 0) {
    uVar7 = 0;
    if ((param_5 == -1) ||
       ((lVar5 = ASN1_STRING_type_new(param_3), lVar5 != 0 &&
        (iVar2 = ASN1_STRING_set(lVar5,param_4,param_5), uVar7 = param_3, iVar2 != 0))))
    goto LAB_143da7397;
  }
  else {
    uVar1 = OBJ_obj2nid(lVar4);
    lVar5 = ASN1_STRING_set_by_NID(0,param_4,param_5,param_3,uVar1);
    if (lVar5 == 0) {
      ERR_put_error(0xb,0x8a,0xd,"crypto\\x509\\x509_att.c",0x101);
      goto LAB_143da7405;
    }
    uVar7 = *(uint *)(lVar5 + 4);
LAB_143da7397:
    if (param_3 == 0) {
      ASN1_STRING_free(lVar5);
      goto LAB_143da745b;
    }
    lVar6 = ASN1_TYPE_new();
    if (lVar6 != 0) {
      if ((param_5 == -1) && ((param_3 & 0x1000) == 0)) {
        iVar2 = ASN1_TYPE_set1(lVar6,param_3,param_4);
        if (iVar2 == 0) goto LAB_143da73d5;
      }
      else {
        ASN1_TYPE_set(lVar6,uVar7,lVar5);
        lVar5 = 0;
      }
      iVar2 = OPENSSL_sk_push(plVar3[1],lVar6);
      if (iVar2 != 0) {
LAB_143da745b:
        if (param_1 == (longlong *)0x0) {
          return plVar3;
        }
        if (*param_1 != 0) {
          return plVar3;
        }
        *param_1 = (longlong)plVar3;
        return plVar3;
      }
    }
  }
LAB_143da73d5:
  ERR_put_error(0xb,0x8a,0x41,"crypto\\x509\\x509_att.c",0x122);
  ASN1_TYPE_free(lVar6);
  ASN1_STRING_free(lVar5);
LAB_143da7405:
  if ((param_1 == (longlong *)0x0) || (plVar3 != (longlong *)*param_1)) {
    X509_ATTRIBUTE_free(plVar3);
  }
  return (longlong *)0x0;
}



// FUNCTION 143da7470 X509_ATTRIBUTE_get0_type body=38 status=ok
// SIG undefined X509_ATTRIBUTE_get0_type(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_ATTRIBUTE_get0_type(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 8));
  return uVar1;
}



// FUNCTION 143da74a0 X509at_add1_attr body=208 status=ok
// SIG undefined X509at_add1_attr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509at_add1_attr(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143da74ba;
  lVar3 = 0;
  if (param_1 == (longlong *)0x0) {
    uVar5 = 0x50;
    uVar4 = 0x43;
    lVar2 = lVar3;
  }
  else {
    lVar2 = *param_1;
    if ((lVar2 != 0) || (lVar2 = OPENSSL_sk_new_null(), lVar2 != 0)) {
      lVar3 = X509_ATTRIBUTE_dup(param_2);
      if (lVar3 == 0) goto LAB_143da74ea;
      iVar1 = OPENSSL_sk_push(lVar2,lVar3);
      if (iVar1 != 0) {
        if (*param_1 != 0) {
          return lVar2;
        }
        *param_1 = lVar2;
        return lVar2;
      }
    }
    uVar5 = 0x62;
    uVar4 = 0x41;
  }
  ERR_put_error(0xb,0x87,uVar4,"crypto\\x509\\x509_att.c",uVar5,uVar6);
LAB_143da74ea:
  X509_ATTRIBUTE_free(lVar3);
  OPENSSL_sk_free(lVar2);
  return 0;
}



// FUNCTION 143da7570 X509at_add1_attr_by_NID body=179 status=ok
// SIG undefined X509at_add1_attr_by_NID(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509at_add1_attr_by_NID
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143da758a;
  lVar1 = OBJ_nid2obj(param_2);
  if (lVar1 == 0) {
    ERR_put_error(0xb,0x88,0x6d,"crypto\\x509\\x509_att.c",0xb1);
    uVar3 = 0;
  }
  else {
    lVar2 = X509_ATTRIBUTE_create_by_OBJ(0,lVar1,param_3,param_4,param_5,uVar3);
    if (lVar2 == 0) {
      ASN1_OBJECT_free(lVar1);
      uVar3 = 0;
    }
    else {
      uVar3 = X509at_add1_attr(param_1,lVar2);
      X509_ATTRIBUTE_free(lVar2);
    }
  }
  return uVar3;
}



// FUNCTION 143da7630 X509at_get_attr_by_NID body=77 status=ok
// SIG undefined X509at_get_attr_by_NID(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509at_get_attr_by_NID(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = OBJ_nid2obj(param_2);
  if (lVar1 == 0) {
    return 0xfffffffe;
  }
  uVar2 = X509at_get_attr_by_OBJ(param_1,lVar1,param_3);
  return uVar2;
}



// FUNCTION 143da7680 X509at_get_attr_by_OBJ body=125 status=ok
// SIG undefined X509at_get_attr_by_OBJ(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509at_get_attr_by_OBJ(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar4 = 0;
    if (-1 < param_3 + 1) {
      iVar4 = param_3 + 1;
    }
    iVar1 = OPENSSL_sk_num();
    for (; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_1,iVar4);
      iVar2 = OBJ_cmp(*puVar3,param_2);
      if (iVar2 == 0) {
        return iVar4;
      }
    }
  }
  return -1;
}



// FUNCTION 143da7700 FUN_143da7700 body=22 status=ok
// SIG undefined FUN_143da7700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143da7700(void)

{
  OPENSSL_sk_num();
  return;
}



// FUNCTION 143da7720 PKCS12_item_decrypt_d2i body=262 status=ok
// SIG undefined PKCS12_item_decrypt_d2i(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS12_item_decrypt_d2i
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 *param_5,int param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_18 [2];
  undefined8 local_10;
  
  local_10 = 0x143da772c;
  lVar2 = PKCS12_pbe_crypt(param_1,param_3,param_4,*(undefined8 *)(param_5 + 2),*param_5,&local_10,
                           local_18,0);
  uVar1 = local_10;
  if (lVar2 == 0) {
    ERR_put_error(0x23,0x6a,0x75,"crypto\\pkcs12\\p12_decr.c",0x5e);
    return 0;
  }
  param_5 = (undefined4 *)local_10;
  lVar2 = ASN1_item_d2i(0,&param_5,local_18[0],param_2);
  if (param_6 != 0) {
    FUN_14004ff40(uVar1,(longlong)local_18[0]);
  }
  if (lVar2 == 0) {
    ERR_put_error(0x23,0x6a,0x65,"crypto\\pkcs12\\p12_decr.c",0x72);
  }
  CRYPTO_free(uVar1,"crypto\\pkcs12\\p12_decr.c",0x73);
  return lVar2;
}



// FUNCTION 143da7830 PKCS12_pbe_crypt body=433 status=ok
// SIG undefined PKCS12_pbe_crypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS12_pbe_crypt(undefined8 *param_1,undefined8 param_2,undefined4 param_3,
                         undefined8 param_4,int param_5,longlong *param_6,int *param_7,
                         undefined4 param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar8;
  undefined8 uVar6;
  longlong lVar7;
  int local_28 [2];
  undefined8 uStack_20;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uStack_20 = 0x143da784e;
  lVar4 = 0;
  lVar3 = EVP_CIPHER_CTX_new();
  if (lVar3 == 0) {
    uVar6 = CONCAT44(uVar8,0x21);
LAB_143da7874:
    uVar5 = 0x41;
  }
  else {
    lVar7 = lVar3;
    iVar1 = EVP_PBE_CipherInit(*param_1,param_2,param_3,param_1[1],lVar3,param_8);
    uVar8 = (undefined4)((ulonglong)lVar7 >> 0x20);
    if (iVar1 == 0) {
      ERR_put_error(0x23,0x77,0x73,"crypto\\pkcs12\\p12_decr.c",CONCAT44(uVar8,0x29));
      goto LAB_143da79bd;
    }
    iVar1 = EVP_CIPHER_CTX_block_size(lVar3);
    lVar4 = CRYPTO_malloc((longlong)(iVar1 + param_5),"crypto\\pkcs12\\p12_decr.c",0x2d);
    if (lVar4 == 0) {
      uVar6 = CONCAT44(uVar8,0x2f);
      goto LAB_143da7874;
    }
    uVar5 = CONCAT44(uVar8,param_5);
    iVar2 = EVP_CipherUpdate(lVar3,lVar4,local_28,param_4,uVar5);
    iVar1 = local_28[0];
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (iVar2 == 0) {
      CRYPTO_free(lVar4,"crypto\\pkcs12\\p12_decr.c",0x34);
      lVar4 = 0;
      uVar6 = CONCAT44(uVar8,0x36);
      uVar5 = 6;
    }
    else {
      iVar2 = EVP_CipherFinal_ex(lVar3,lVar4 + local_28[0],local_28);
      if (iVar2 != 0) {
        if (param_7 != (int *)0x0) {
          *param_7 = local_28[0] + iVar1;
        }
        if (param_6 != (longlong *)0x0) {
          *param_6 = lVar4;
        }
        goto LAB_143da79bd;
      }
      CRYPTO_free(lVar4,"crypto\\pkcs12\\p12_decr.c",0x3c);
      lVar4 = 0;
      uVar6 = CONCAT44(uVar8,0x3f);
      uVar5 = 0x74;
    }
  }
  ERR_put_error(0x23,0x77,uVar5,"crypto\\pkcs12\\p12_decr.c",uVar6);
LAB_143da79bd:
  EVP_CIPHER_CTX_free(lVar3);
  return lVar4;
}



// FUNCTION 143da79f0 DSA_do_sign body=25 status=ok
// SIG undefined DSA_do_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_do_sign(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000143da7a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_3 + 0x50) + 8))();
  return;
}



// FUNCTION 143da7a10 DSA_do_verify body=25 status=ok
// SIG undefined DSA_do_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DSA_do_verify(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x000143da7a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 0x50) + 0x18))();
  return;
}



// FUNCTION 143da7a30 PKCS7_SIGNER_INFO_sign body=545 status=ok
// SIG undefined PKCS7_SIGNER_INFO_sign(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_SIGNER_INFO_sign(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143da7a3e;
  local_res10 = 0;
  local_res8 = 0;
  uVar1 = OBJ_obj2nid(**(undefined8 **)(param_1 + 0x10));
  uVar3 = OBJ_nid2sn(uVar1);
  lVar4 = EVP_get_digestbyname(uVar3);
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = EVP_MD_CTX_new();
  if (lVar5 == 0) {
    uVar3 = 0x33e;
    uVar1 = 0x41;
  }
  else {
    uVar6 = *(ulonglong *)(param_1 + 0x38);
    iVar2 = EVP_DigestSignInit(lVar5,&local_res10,lVar4,0,uVar6,uVar7);
    if (iVar2 < 1) goto LAB_143da7ab2;
    uVar6 = uVar6 & 0xffffffff00000000;
    iVar2 = EVP_PKEY_CTX_ctrl(local_res10,0xffffffff,8,5,uVar6,param_1);
    uVar1 = (undefined4)(uVar6 >> 0x20);
    if (iVar2 < 1) {
      uVar3 = CONCAT44(uVar1,0x347);
    }
    else {
      uVar3 = PKCS7_ATTR_SIGN_it();
      iVar2 = ASN1_item_i2d(*(undefined8 *)(param_1 + 0x18),&local_res8,uVar3);
      if ((local_res8 == 0) ||
         (iVar2 = EVP_DigestUpdate(lVar5,local_res8,(longlong)iVar2), iVar2 < 1))
      goto LAB_143da7ab2;
      CRYPTO_free(local_res8,"crypto\\pkcs7\\pk7_doit.c",0x351);
      local_res8 = 0;
      iVar2 = EVP_DigestSignFinal(lVar5,0,&local_res18);
      if ((iVar2 < 1) ||
         ((local_res8 = CRYPTO_malloc(CONCAT44(uStackX_1c,local_res18),"crypto\\pkcs7\\pk7_doit.c",
                                      0x355), local_res8 == 0 ||
          (iVar2 = EVP_DigestSignFinal(lVar5,local_res8,&local_res18), iVar2 < 1))))
      goto LAB_143da7ab2;
      iVar2 = EVP_PKEY_CTX_ctrl(local_res10,0xffffffff,8,5,CONCAT44(uVar1,1),param_1);
      if (0 < iVar2) {
        EVP_MD_CTX_free(lVar5);
        ASN1_STRING_set0(*(undefined8 *)(param_1 + 0x28),local_res8,local_res18);
        return 1;
      }
      uVar3 = 0x35d;
    }
    uVar1 = 0x98;
  }
  ERR_put_error(0x21,0x8b,uVar1,"crypto\\pkcs7\\pk7_doit.c",uVar3);
LAB_143da7ab2:
  CRYPTO_free(local_res8,"crypto\\pkcs7\\pk7_doit.c",0x368);
  EVP_MD_CTX_free(lVar5);
  return 0;
}



// FUNCTION 143da7c60 PKCS7_add_signed_attribute body=26 status=ok
// SIG undefined PKCS7_add_signed_attribute(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS7_add_signed_attribute(longlong param_1)

{
  add_attribute(param_1 + 0x18);
  return;
}



// FUNCTION 143da7c80 PKCS7_bio_add_digest body=219 status=ok
// SIG undefined PKCS7_bio_add_digest(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_bio_add_digest(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143da7c95;
  uVar2 = BIO_f_md();
  lVar3 = BIO_new(uVar2);
  if (lVar3 == 0) {
    uVar1 = 0x3c;
  }
  else {
    uVar1 = OBJ_obj2nid(*param_2);
    uVar2 = OBJ_nid2sn(uVar1);
    lVar4 = EVP_get_digestbyname(uVar2);
    if (lVar4 == 0) {
      uVar1 = 0x42;
      uVar2 = 0x6d;
      goto LAB_143da7d29;
    }
    BIO_ctrl(lVar3,0x6f,0,lVar4);
    if (*param_1 == 0) {
      *param_1 = lVar3;
      return 1;
    }
    lVar4 = BIO_push(*param_1,lVar3);
    if (lVar4 != 0) {
      return 1;
    }
    uVar1 = 0x4a;
  }
  uVar2 = 0x20;
LAB_143da7d29:
  ERR_put_error(0x21,0x7d,uVar2,"crypto\\pkcs7\\pk7_doit.c",uVar1,uVar5);
  BIO_free(lVar3);
  return 0;
}



// FUNCTION 143da7d60 PKCS7_dataFinal body=1471 status=ok
// SIG undefined PKCS7_dataFinal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int PKCS7_dataFinal(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined1 local_88 [64];
  ulonglong local_48;
  int iVar12;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  iVar11 = 0;
  iVar12 = 0;
  local_a0 = param_2;
  if (param_1 == 0) {
    local_b8 = 0x28d;
    ERR_put_error(0x21,0x80,0x8f,"crypto\\pkcs7\\pk7_doit.c");
    return 0;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_b8 = 0x292;
    ERR_put_error(0x21,0x80,0x7a,"crypto\\pkcs7\\pk7_doit.c");
    return 0;
  }
  lVar5 = EVP_MD_CTX_new();
  if (lVar5 == 0) {
    local_b8 = 0x298;
    ERR_put_error(0x21,0x80,0x41,"crypto\\pkcs7\\pk7_doit.c");
    return 0;
  }
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = iVar11;
  if (iVar1 == 0x15) {
    lVar6 = *(longlong *)(param_1 + 0x20);
LAB_143da8141:
    iVar3 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
    if ((iVar3 != 0x16) || (iVar3 = PKCS7_ctrl(param_1,2,0,0), iVar3 == 0)) {
      iVar3 = iVar12;
      if (lVar6 == 0) goto LAB_143da82d0;
      if ((*(byte *)(lVar6 + 0x10) & 0x10) == 0) {
        lVar9 = BIO_find_type(param_2,0x401);
        if (lVar9 == 0) {
          local_b8 = 0x31c;
          uVar4 = 0x6b;
          uVar10 = 0x80;
          goto LAB_143da7f1c;
        }
        uVar4 = BIO_ctrl(lVar9,3,0,&local_a0);
        BIO_set_flags(lVar9,0x200);
        BIO_ctrl(lVar9,0x82,0,0);
        ASN1_STRING_set0(lVar6,local_a0,uVar4);
      }
    }
    iVar3 = 1;
  }
  else {
    if (iVar1 == 0x16) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
      lVar6 = PKCS7_get_octet_string(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      iVar2 = OBJ_obj2nid(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x18));
      if ((iVar2 == 0x15) && (*(int *)(param_1 + 0x10) != 0)) {
        ASN1_BIT_STRING_free(lVar6);
        lVar6 = 0;
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x20) = 0;
      }
LAB_143da7fc7:
      if (lVar9 == 0) {
        if (iVar1 == 0x19) {
LAB_143da821a:
          uVar4 = OBJ_obj2nid(**(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8));
          lVar9 = PKCS7_find_digest(local_98,param_2,uVar4);
          if (((lVar9 == 0) ||
              (iVar1 = EVP_DigestFinal_ex(local_98[0],local_88,&local_a8), iVar1 == 0)) ||
             (iVar1 = ASN1_OCTET_STRING_set
                                (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18),local_88,
                                 local_a8), iVar3 = iVar12, iVar1 == 0)) goto LAB_143da82d0;
        }
      }
      else {
        iVar3 = OPENSSL_sk_num(lVar9);
        iVar1 = iVar11;
        if (0 < iVar3) {
          do {
            lVar7 = OPENSSL_sk_value(lVar9,iVar1);
            if (*(longlong *)(lVar7 + 0x38) != 0) {
              uVar4 = OBJ_obj2nid(**(undefined8 **)(lVar7 + 0x10));
              lVar8 = PKCS7_find_digest(local_98,local_a0,uVar4);
              iVar3 = iVar12;
              if ((lVar8 == 0) || (iVar2 = EVP_MD_CTX_copy_ex(lVar5,local_98[0]), iVar2 == 0))
              goto LAB_143da82d0;
              iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar7 + 0x18));
              if (iVar3 < 1) {
                local_a4 = EVP_PKEY_size(*(undefined8 *)(lVar7 + 0x38));
                lVar8 = CRYPTO_malloc(local_a4,"crypto\\pkcs7\\pk7_doit.c",0x2f8);
                iVar3 = iVar12;
                if (lVar8 == 0) goto LAB_143da82d0;
                iVar3 = EVP_SignFinal(lVar5,lVar8,&local_a4,*(undefined8 *)(lVar7 + 0x38));
                if (iVar3 == 0) {
                  CRYPTO_free(lVar8,"crypto\\pkcs7\\pk7_doit.c",0x2fd);
                  uVar10 = 0x80;
                  local_b8 = 0x2fe;
                  uVar4 = 6;
                  goto LAB_143da7f1c;
                }
                ASN1_STRING_set0(*(undefined8 *)(lVar7 + 0x28),lVar8,local_a4);
              }
              else {
                uVar10 = *(undefined8 *)(lVar7 + 0x18);
                uVar4 = X509at_get_attr_by_NID(uVar10,0x34,0xffffffff);
                uVar10 = X509v3_get_ext(uVar10,uVar4);
                lVar8 = X509_ATTRIBUTE_get0_type(uVar10,0);
                if ((lVar8 == 0) && (iVar3 = PKCS7_add0_attrib_signing_time(lVar7,0), iVar3 == 0)) {
                  local_b8 = 0x26b;
                  uVar10 = 0x88;
                  goto LAB_143da7f16;
                }
                iVar3 = EVP_DigestFinal_ex(lVar5,local_88,&local_a8);
                if (iVar3 == 0) {
                  local_b8 = 0x272;
                  uVar10 = 0x88;
                  uVar4 = 6;
                  goto LAB_143da7f1c;
                }
                iVar3 = PKCS7_add1_attrib_digest(lVar7,local_88,local_a8);
                if (iVar3 == 0) {
                  local_b8 = 0x276;
                  uVar10 = 0x88;
                  goto LAB_143da7f16;
                }
                iVar2 = PKCS7_SIGNER_INFO_sign(lVar7);
                iVar3 = iVar12;
                if (iVar2 == 0) goto LAB_143da82d0;
              }
            }
            iVar1 = iVar1 + 1;
            iVar3 = OPENSSL_sk_num(lVar9);
            param_2 = local_a0;
          } while (iVar1 < iVar3);
        }
      }
      goto LAB_143da8141;
    }
    if (iVar1 == 0x17) {
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x10);
      if (lVar6 == 0) {
        lVar6 = ASN1_OCTET_STRING_new();
        if (lVar6 == 0) {
          local_b8 = 0x2b6;
LAB_143da7f11:
          uVar10 = 0x80;
LAB_143da7f16:
          uVar4 = 0x41;
          goto LAB_143da7f1c;
        }
        *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x10) = lVar6;
      }
      goto LAB_143da8141;
    }
    if (iVar1 == 0x18) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x10);
      if (lVar6 == 0) {
        lVar6 = ASN1_OCTET_STRING_new();
        if (lVar6 == 0) {
          local_b8 = 0x2aa;
          goto LAB_143da7f11;
        }
        *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 0x10) = lVar6;
      }
      goto LAB_143da7fc7;
    }
    if (iVar1 == 0x19) {
      lVar6 = PKCS7_get_octet_string(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10));
      iVar1 = OBJ_obj2nid(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x18));
      if ((iVar1 == 0x15) && (*(int *)(param_1 + 0x10) != 0)) {
        ASN1_BIT_STRING_free(lVar6);
        lVar6 = 0;
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x20) = 0;
      }
      goto LAB_143da821a;
    }
    uVar10 = 0x80;
    local_b8 = 0x2d2;
    uVar4 = 0x70;
LAB_143da7f1c:
    ERR_put_error(0x21,uVar10,uVar4,"crypto\\pkcs7\\pk7_doit.c");
    iVar3 = iVar11;
  }
LAB_143da82d0:
  EVP_MD_CTX_free(lVar5);
  return iVar3;
}



// FUNCTION 143da8320 PKCS7_dataInit body=1477 status=ok
// SIG undefined PKCS7_dataInit(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * PKCS7_dataInit(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int *local_a8;
  undefined1 local_a0 [24];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143da833a;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puVar8 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)0x0;
  local_c8 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)0x0;
  local_d0 = 0;
  local_a8 = (int *)0x0;
  if (param_1 == 0) {
    local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0xce);
    ERR_put_error(0x21,0x69,0x8f,"crypto\\pkcs7\\pk7_doit.c");
    return (undefined8 *)0x0;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0xdc);
    ERR_put_error(0x21,0x69,0x7a,"crypto\\pkcs7\\pk7_doit.c");
    return (undefined8 *)0x0;
  }
  iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar10 = puVar8;
  puVar12 = puVar8;
  puVar14 = puVar8;
  puVar15 = puVar8;
  if (iVar1 != 0x15) {
    if (iVar1 == 0x16) {
      puVar12 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8);
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28);
LAB_143da8499:
      local_a8 = (int *)PKCS7_get_octet_string(uVar3);
      puVar10 = (undefined8 *)0x0;
      puVar14 = (undefined8 *)0x0;
      goto LAB_143da84a3;
    }
    puVar15 = (undefined8 *)0x0;
    if (iVar1 == 0x17) {
      local_d0 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
      puVar10 = *(undefined8 **)(lVar4 + 0x18);
      puVar14 = *(undefined8 **)(lVar4 + 8);
      puVar12 = (undefined8 *)0x0;
      if (puVar10 != (undefined8 *)0x0) goto LAB_143da84a3;
      local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0xf7);
LAB_143da8446:
      uVar13 = 0x74;
    }
    else {
      if (iVar1 == 0x18) {
        lVar4 = *(longlong *)(param_1 + 0x20);
        local_d0 = *(undefined8 *)(lVar4 + 0x30);
        puVar10 = *(undefined8 **)(*(longlong *)(lVar4 + 0x28) + 0x18);
        puVar14 = *(undefined8 **)(*(longlong *)(lVar4 + 0x28) + 8);
        puVar12 = *(undefined8 **)(lVar4 + 8);
        if (puVar10 == (undefined8 *)0x0) {
          local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0xee);
          goto LAB_143da8446;
        }
        goto LAB_143da84a3;
      }
      if (iVar1 == 0x19) {
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10);
        puVar15 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8);
        goto LAB_143da8499;
      }
      local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x102);
      uVar13 = 0x70;
      puVar9 = puVar8;
    }
LAB_143da844c:
    ERR_put_error(0x21,0x69,uVar13,"crypto\\pkcs7\\pk7_doit.c");
LAB_143da888c:
    BIO_free_all(puVar9);
    BIO_free_all(local_c8);
    return (undefined8 *)0x0;
  }
LAB_143da84a3:
  iVar1 = OPENSSL_sk_num(puVar12);
  puVar9 = puVar8;
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(puVar12,puVar8);
      iVar1 = PKCS7_bio_add_digest(&local_d8,uVar3);
      puVar9 = local_d8;
      if (iVar1 == 0) goto LAB_143da888c;
      uVar7 = (int)puVar8 + 1;
      puVar8 = (undefined8 *)(ulonglong)uVar7;
      iVar1 = OPENSSL_sk_num(puVar12);
      puVar9 = local_d8;
    } while ((int)uVar7 < iVar1);
  }
  if ((puVar15 != (undefined8 *)0x0) &&
     (iVar1 = PKCS7_bio_add_digest(&local_d8,puVar15), puVar9 = local_d8, iVar1 == 0))
  goto LAB_143da888c;
  puVar8 = puVar9;
  if (puVar10 != (undefined8 *)0x0) {
    uVar3 = BIO_f_cipher();
    local_c8 = (undefined8 *)BIO_new(uVar3);
    if (local_c8 == (undefined8 *)0x0) {
      local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x114);
      uVar13 = 0x20;
      goto LAB_143da844c;
    }
    BIO_ctrl(local_c8,0x81,0,&local_b8);
    uVar13 = IStreamingManager::GetNumWantingResources(puVar10);
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar13);
    iVar1 = IStreamingManager::GetNumWantingResourcesID(puVar10);
    uVar13 = FUN_143cf6400(puVar10);
    uVar3 = OBJ_nid2obj(uVar13);
    *puVar14 = uVar3;
    if ((0 < iVar1) && (iVar2 = RAND_bytes(local_a0,iVar1), iVar2 < 1)) goto LAB_143da888c;
    local_e0 = CONCAT44(local_e0._4_4_,1);
    local_e8 = (undefined1 *)0x0;
    iVar2 = FUN_143cf75a0(local_b8,puVar10,0,0);
    if ((iVar2 < 1) || (iVar2 = EVP_CIPHER_CTX_rand_key(local_b8,local_88), iVar2 < 1))
    goto LAB_143da888c;
    local_e8 = local_a0;
    local_e0 = CONCAT44(local_e0._4_4_,1);
    iVar2 = FUN_143cf75a0(local_b8,0,0,local_88);
    if (iVar2 < 1) goto LAB_143da888c;
    if (0 < iVar1) {
      lVar4 = puVar14[1];
      if (lVar4 == 0) {
        lVar4 = ASN1_TYPE_new();
        puVar14[1] = lVar4;
        if (lVar4 == 0) goto LAB_143da888c;
      }
      iVar1 = EVP_CIPHER_param_to_asn1(local_b8,lVar4);
      if (iVar1 < 0) goto LAB_143da888c;
    }
    uVar3 = local_d0;
    iVar2 = 0;
    iVar1 = OPENSSL_sk_num(local_d0);
    if (0 < iVar1) {
      do {
        lVar4 = OPENSSL_sk_value(uVar3,iVar2);
        lVar6 = 0;
        local_c0 = 0;
        lVar5 = X509_get0_pubkey(*(undefined8 *)(lVar4 + 0x20));
        if ((lVar5 == 0) || (lVar5 = EVP_PKEY_CTX_new(lVar5,0), lVar5 == 0)) goto LAB_143da888c;
        iVar1 = EVP_PKEY_encrypt_init(lVar5);
        if (0 < iVar1) {
          local_e8 = (undefined1 *)((ulonglong)local_e8 & 0xffffffff00000000);
          local_e0 = lVar4;
          iVar1 = EVP_PKEY_CTX_ctrl(lVar5,0xffffffff,0x100,3);
          if (iVar1 < 1) {
            local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x6e);
            ERR_put_error(0x21,0x84,0x98,"crypto\\pkcs7\\pk7_doit.c");
          }
          else {
            puVar11 = (undefined1 *)(longlong)(int)local_d8;
            local_e8 = puVar11;
            iVar1 = EVP_PKEY_encrypt(lVar5,0,&local_b0,local_88);
            uVar3 = local_d0;
            if (0 < iVar1) {
              lVar6 = CRYPTO_malloc(CONCAT44(uStack_ac,local_b0),"crypto\\pkcs7\\pk7_doit.c",0x75);
              if (lVar6 == 0) {
                local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,0x78);
                ERR_put_error(0x21,0x84,0x41,"crypto\\pkcs7\\pk7_doit.c");
                uVar3 = local_d0;
              }
              else {
                local_e8 = puVar11;
                iVar1 = EVP_PKEY_encrypt(lVar5,lVar6,&local_b0,local_88);
                uVar3 = local_d0;
                if (0 < iVar1) {
                  ASN1_STRING_set0(*(undefined8 *)(lVar4 + 0x18),lVar6,local_b0);
                  lVar6 = 0;
                  local_c0 = 1;
                  uVar3 = local_d0;
                }
              }
            }
          }
        }
        EVP_PKEY_CTX_free(lVar5);
        CRYPTO_free(lVar6,"crypto\\pkcs7\\pk7_doit.c",0x86);
        if (local_c0 == 0) goto LAB_143da888c;
        iVar2 = iVar2 + 1;
        iVar1 = OPENSSL_sk_num(uVar3);
      } while (iVar2 < iVar1);
    }
    FUN_14004ff40(local_88,(longlong)(int)local_d8);
    puVar8 = local_c8;
    if (puVar9 != (undefined8 *)0x0) {
      BIO_push(puVar9,local_c8);
      puVar8 = puVar9;
    }
  }
  if (param_2 == (undefined8 *)0x0) {
    iVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
    puVar9 = puVar8;
    if ((iVar1 == 0x16) && (iVar1 = PKCS7_ctrl(param_1,2,0,0), iVar1 != 0)) {
      uVar3 = BIO_s_mem();
      param_2 = (undefined8 *)BIO_new(uVar3);
    }
    else if ((local_a8 == (int *)0x0) || (*local_a8 < 1)) {
      uVar3 = BIO_s_mem();
      param_2 = (undefined8 *)BIO_new(uVar3);
      local_c8 = (undefined8 *)0x0;
      if (param_2 == (undefined8 *)0x0) goto LAB_143da888c;
      BIO_ctrl(param_2,0x82,0,0);
    }
    else {
      param_2 = (undefined8 *)BIO_new_mem_buf(*(undefined8 *)(local_a8 + 2));
    }
    local_c8 = (undefined8 *)0x0;
    if (param_2 == (undefined8 *)0x0) goto LAB_143da888c;
  }
  if (puVar8 == (undefined8 *)0x0) {
    return param_2;
  }
  BIO_push(puVar8,param_2);
  return puVar8;
}



// FUNCTION 143da88f0 PKCS7_find_digest body=223 status=ok
// SIG undefined PKCS7_find_digest(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong PKCS7_find_digest(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143da8905;
  lVar2 = BIO_find_type(param_2,0x208);
  do {
    if (lVar2 == 0) {
      uVar4 = 0x254;
      uVar3 = 0x6c;
LAB_143da8986:
      ERR_put_error(0x21,0x7f,uVar3,"crypto\\pkcs7\\pk7_doit.c",uVar4,uVar5);
      return 0;
    }
    BIO_ctrl(lVar2,0x78,0,param_1);
    if (*param_1 == 0) {
      uVar4 = 0x259;
      uVar3 = 0x44;
      goto LAB_143da8986;
    }
    uVar3 = EVP_MD_CTX_md();
    iVar1 = FRollingHash::GetWindowSize(uVar3);
    if (iVar1 == param_3) {
      return lVar2;
    }
    uVar3 = BIO_next(lVar2);
    lVar2 = BIO_find_type(uVar3,0x208);
  } while( true );
}



// FUNCTION 143da89d0 PKCS7_get_octet_string body=91 status=ok
// SIG undefined PKCS7_get_octet_string(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PKCS7_get_octet_string(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (iVar2 == 0x15) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  iVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x18));
  if (((5 < iVar2 - 0x15U) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) &&
     (*piVar1 == 4)) {
    return *(undefined8 *)(piVar1 + 2);
  }
  return 0;
}



// FUNCTION 143da8a30 add_attribute body=269 status=ok
// SIG undefined add_attribute(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 add_attribute(longlong *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  else {
    iVar6 = 0;
    iVar1 = OPENSSL_sk_num();
    if (0 < iVar1) {
      do {
        uVar3 = OPENSSL_sk_value(*param_1,iVar6);
        uVar4 = EVP_MD_CTX_md(uVar3);
        iVar1 = OBJ_obj2nid(uVar4);
        if (iVar1 == param_2) {
          X509_ATTRIBUTE_free(uVar3);
          lVar2 = X509_ATTRIBUTE_create(param_2,param_3,param_4);
          if (lVar2 == 0) {
            return 0;
          }
          lVar5 = OPENSSL_sk_set(*param_1,iVar6,lVar2);
          if (lVar5 != 0) {
            return 1;
          }
          X509_ATTRIBUTE_free(lVar2);
          return 0;
        }
        iVar6 = iVar6 + 1;
        iVar1 = OPENSSL_sk_num(*param_1);
      } while (iVar6 < iVar1);
    }
  }
  lVar2 = X509_ATTRIBUTE_create(param_2,param_3,param_4);
  if (lVar2 != 0) {
    iVar1 = OPENSSL_sk_push(*param_1,lVar2);
    if (iVar1 != 0) {
      return 1;
    }
    X509_ATTRIBUTE_free(lVar2);
  }
  return 0;
}



// FUNCTION 143da8b40 FUN_143da8b40 body=1530 status=ok
// SIG undefined FUN_143da8b40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143da8b40(uint *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,uint *param_5,
                  uint *param_6,uint *param_7,int param_8)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143da8b5f;
  uVar9 = *param_6;
  uVar5 = param_6[1];
  uVar3 = *param_7;
  uVar4 = param_7[1];
  uVar10 = *param_5;
  uVar12 = param_5[1];
  if (param_8 == 0) {
    iVar8 = param_3 - 8;
    if (0 < iVar8) {
      uVar11 = (param_3 - 9 >> 3) + 1;
      local_48 = (ulonglong)uVar11;
      iVar8 = iVar8 + uVar11 * -8;
      uVar11 = uVar10;
      uVar13 = uVar12;
      do {
        uVar10 = *param_1;
        local_50 = uVar10 ^ uVar3;
        uVar12 = param_1[1];
        param_1 = param_1 + 2;
        local_4c = uVar12 ^ uVar4;
        DES_encrypt1(&local_50,param_4,0);
        uVar11 = local_50 ^ uVar11 ^ uVar9;
        uVar13 = local_4c ^ uVar13 ^ uVar5;
        *param_2 = (char)uVar11;
        param_2[1] = (char)(uVar11 >> 8);
        param_2[2] = (char)(uVar11 >> 0x10);
        param_2[3] = (char)(uVar11 >> 0x18);
        param_2[4] = (char)uVar13;
        param_2[5] = (char)(uVar13 >> 8);
        param_2[6] = (char)(uVar13 >> 0x10);
        param_2[7] = (char)(uVar13 >> 0x18);
        param_2 = param_2 + 8;
        local_48 = local_48 - 1;
        uVar11 = uVar10;
        uVar13 = uVar12;
      } while (local_48 != 0);
      local_48 = 0;
    }
    uVar11 = uVar10;
    uVar13 = uVar12;
    if (iVar8 != -8) {
      uVar11 = *param_1;
      local_50 = uVar11 ^ uVar3;
      uVar13 = param_1[1];
      local_4c = uVar13 ^ uVar4;
      DES_encrypt1(&local_50,param_4,0);
      uVar5 = local_4c ^ uVar12 ^ uVar5;
      uVar9 = local_50 ^ uVar10 ^ uVar9;
      param_2 = param_2 + (iVar8 + 8);
      switch(iVar8) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar5 >> 0x18);
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar5 >> 0x10);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar5 >> 8);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)uVar5;
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar9 >> 0x18);
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar9 >> 0x10);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar9 >> 8);
      case -7:
        param_2[-1] = (char)uVar9;
      }
    }
  }
  else {
    iVar8 = param_3 - 8;
    if (-1 < iVar8) {
      uVar7 = (ulonglong)(param_3 >> 3);
      iVar8 = iVar8 + (param_3 >> 3) * -8;
      do {
        puVar1 = param_1 + 1;
        local_50 = *param_1 ^ uVar10 ^ uVar9;
        param_1 = param_1 + 2;
        local_4c = *puVar1 ^ uVar12 ^ uVar5;
        DES_encrypt1(&local_50,param_4,1);
        uVar10 = local_50 ^ uVar3;
        uVar12 = local_4c ^ uVar4;
        *param_2 = (char)uVar10;
        param_2[1] = (char)(uVar10 >> 8);
        param_2[2] = (char)(uVar10 >> 0x10);
        param_2[3] = (char)(uVar10 >> 0x18);
        param_2[4] = (char)uVar12;
        param_2[5] = (char)(uVar12 >> 8);
        param_2[6] = (char)(uVar12 >> 0x10);
        param_2[7] = (char)(uVar12 >> 0x18);
        param_2 = param_2 + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar11 = uVar10;
    uVar13 = uVar12;
    if (iVar8 != -8) {
      lVar6 = (longlong)param_1 + (longlong)(iVar8 + 8);
      uVar11 = 0;
      uVar13 = 0;
      switch(iVar8) {
      case 0:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar11 = (uint)*pbVar2 << 0x18;
      case -1:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar11 = uVar11 | (uint)*pbVar2 << 0x10;
      case -2:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar11 = uVar11 | (uint)*pbVar2 << 8;
      case -3:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar11 = uVar11 | *pbVar2;
      case -4:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar13 = (uint)*pbVar2 << 0x18;
      case -5:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar13 = uVar13 | (uint)*pbVar2 << 0x10;
      case -6:
        pbVar2 = (byte *)(lVar6 + -1);
        lVar6 = lVar6 + -1;
        uVar13 = uVar13 | (uint)*pbVar2 << 8;
      case -7:
        uVar13 = uVar13 | *(byte *)(lVar6 + -1);
      default:
        local_50 = uVar13 ^ uVar10 ^ uVar9;
        local_4c = uVar11 ^ uVar12 ^ uVar5;
        DES_encrypt1(&local_50,param_4,1);
        uVar11 = local_50 ^ uVar3;
        uVar13 = local_4c ^ uVar4;
        *param_2 = (char)uVar11;
        param_2[1] = (char)(uVar11 >> 8);
        param_2[2] = (char)(uVar11 >> 0x10);
        param_2[3] = (char)(uVar11 >> 0x18);
        param_2[4] = (char)uVar13;
        param_2[5] = (char)(uVar13 >> 8);
        param_2[6] = (char)(uVar13 >> 0x10);
        param_2[7] = (char)(uVar13 >> 0x18);
      }
    }
  }
  *(char *)param_5 = (char)uVar11;
  *(char *)((longlong)param_5 + 1) = (char)(uVar11 >> 8);
  *(char *)((longlong)param_5 + 2) = (char)(uVar11 >> 0x10);
  *(char *)((longlong)param_5 + 3) = (char)(uVar11 >> 0x18);
  *(char *)(param_5 + 1) = (char)uVar13;
  *(char *)((longlong)param_5 + 5) = (char)(uVar13 >> 8);
  *(char *)((longlong)param_5 + 6) = (char)(uVar13 >> 0x10);
  *(char *)((longlong)param_5 + 7) = (char)(uVar13 >> 0x18);
  return;
}



// FUNCTION 143da9180 BF_set_key body=858 status=ok
// SIG undefined BF_set_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BF_set_key(void *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint *puVar9;
  longlong lVar10;
  undefined8 local_res8;
  
  _guard_xfg_dispatch_icall_nop(param_1,&DAT_145db2e10,0x1048);
  lVar10 = 2;
  iVar1 = 0x48;
  if (param_2 < 0x49) {
    iVar1 = param_2;
  }
  puVar8 = param_3 + iVar1;
  puVar6 = param_3;
  puVar9 = (uint *)((longlong)param_1 + 8);
  do {
    puVar3 = puVar6 + 1;
    if (puVar8 <= puVar6 + 1) {
      puVar3 = param_3;
    }
    puVar4 = puVar3 + 1;
    if (puVar8 <= puVar3 + 1) {
      puVar4 = param_3;
    }
    puVar2 = puVar4 + 1;
    if (puVar8 <= puVar4 + 1) {
      puVar2 = param_3;
    }
    puVar5 = puVar2 + 1;
    if (puVar8 <= puVar2 + 1) {
      puVar5 = param_3;
    }
    puVar9[-2] = puVar9[-2] ^ CONCAT31(CONCAT21(CONCAT11(*puVar6,*puVar3),*puVar4),*puVar2);
    puVar6 = puVar5 + 1;
    if (puVar8 <= puVar5 + 1) {
      puVar6 = param_3;
    }
    puVar3 = puVar6 + 1;
    if (puVar8 <= puVar6 + 1) {
      puVar3 = param_3;
    }
    puVar4 = puVar3 + 1;
    if (puVar8 <= puVar3 + 1) {
      puVar4 = param_3;
    }
    puVar2 = puVar4 + 1;
    if (puVar8 <= puVar4 + 1) {
      puVar2 = param_3;
    }
    puVar9[-1] = puVar9[-1] ^ CONCAT31(CONCAT21(CONCAT11(*puVar5,*puVar6),*puVar3),*puVar4);
    puVar6 = puVar2 + 1;
    if (puVar8 <= puVar2 + 1) {
      puVar6 = param_3;
    }
    puVar3 = puVar6 + 1;
    if (puVar8 <= puVar6 + 1) {
      puVar3 = param_3;
    }
    puVar4 = puVar3 + 1;
    if (puVar8 <= puVar3 + 1) {
      puVar4 = param_3;
    }
    puVar5 = puVar4 + 1;
    if (puVar8 <= puVar4 + 1) {
      puVar5 = param_3;
    }
    *puVar9 = *puVar9 ^ CONCAT31(CONCAT21(CONCAT11(*puVar2,*puVar6),*puVar3),*puVar4);
    puVar6 = puVar5 + 1;
    if (puVar8 <= puVar5 + 1) {
      puVar6 = param_3;
    }
    puVar3 = puVar6 + 1;
    if (puVar8 <= puVar6 + 1) {
      puVar3 = param_3;
    }
    puVar4 = puVar3 + 1;
    if (puVar8 <= puVar3 + 1) {
      puVar4 = param_3;
    }
    puVar2 = puVar4 + 1;
    if (puVar8 <= puVar4 + 1) {
      puVar2 = param_3;
    }
    puVar9[1] = puVar9[1] ^ CONCAT31(CONCAT21(CONCAT11(*puVar5,*puVar6),*puVar3),*puVar4);
    puVar6 = puVar2 + 1;
    if (puVar8 <= puVar2 + 1) {
      puVar6 = param_3;
    }
    puVar3 = puVar6 + 1;
    if (puVar8 <= puVar6 + 1) {
      puVar3 = param_3;
    }
    puVar4 = puVar3 + 1;
    if (puVar8 <= puVar3 + 1) {
      puVar4 = param_3;
    }
    puVar5 = puVar4 + 1;
    if (puVar8 <= puVar4 + 1) {
      puVar5 = param_3;
    }
    puVar9[2] = puVar9[2] ^ CONCAT31(CONCAT21(CONCAT11(*puVar2,*puVar6),*puVar3),*puVar4);
    puVar6 = puVar5 + 1;
    if (puVar8 <= puVar5 + 1) {
      puVar6 = param_3;
    }
    puVar3 = puVar6 + 1;
    if (puVar8 <= puVar6 + 1) {
      puVar3 = param_3;
    }
    puVar4 = puVar3 + 1;
    if (puVar8 <= puVar3 + 1) {
      puVar4 = param_3;
    }
    puVar2 = puVar4 + 1;
    if (puVar8 <= puVar4 + 1) {
      puVar2 = param_3;
    }
    puVar9[3] = puVar9[3] ^ CONCAT31(CONCAT21(CONCAT11(*puVar5,*puVar6),*puVar3),*puVar4);
    puVar6 = puVar2 + 1;
    if (puVar8 <= puVar2 + 1) {
      puVar6 = param_3;
    }
    puVar3 = puVar6 + 1;
    if (puVar8 <= puVar6 + 1) {
      puVar3 = param_3;
    }
    puVar4 = puVar3 + 1;
    if (puVar8 <= puVar3 + 1) {
      puVar4 = param_3;
    }
    puVar5 = puVar4 + 1;
    if (puVar8 <= puVar4 + 1) {
      puVar5 = param_3;
    }
    puVar9[4] = puVar9[4] ^ CONCAT31(CONCAT21(CONCAT11(*puVar2,*puVar6),*puVar3),*puVar4);
    puVar6 = puVar5 + 1;
    if (puVar8 <= puVar5 + 1) {
      puVar6 = param_3;
    }
    puVar3 = puVar6 + 1;
    if (puVar8 <= puVar6 + 1) {
      puVar3 = param_3;
    }
    puVar4 = puVar3 + 1;
    if (puVar8 <= puVar3 + 1) {
      puVar4 = param_3;
    }
    puVar2 = puVar4 + 1;
    if (puVar8 <= puVar4 + 1) {
      puVar2 = param_3;
    }
    puVar9[5] = puVar9[5] ^ CONCAT31(CONCAT21(CONCAT11(*puVar5,*puVar6),*puVar3),*puVar4);
    puVar3 = puVar2 + 1;
    if (puVar8 <= puVar2 + 1) {
      puVar3 = param_3;
    }
    puVar4 = puVar3 + 1;
    if (puVar8 <= puVar3 + 1) {
      puVar4 = param_3;
    }
    puVar5 = puVar4 + 1;
    if (puVar8 <= puVar4 + 1) {
      puVar5 = param_3;
    }
    puVar6 = puVar5 + 1;
    if (puVar8 <= puVar5 + 1) {
      puVar6 = param_3;
    }
    puVar9[6] = puVar9[6] ^ CONCAT31(CONCAT21(CONCAT11(*puVar2,*puVar3),*puVar4),*puVar5);
    lVar10 = lVar10 + -1;
    puVar9 = puVar9 + 9;
  } while (lVar10 != 0);
  lVar7 = 0;
  local_res8 = 0;
  lVar10 = lVar7;
  do {
    BF_encrypt(&local_res8,param_1);
    *(undefined4 *)((longlong)param_1 + lVar10 * 4) = (undefined4)local_res8;
    *(undefined4 *)((longlong)param_1 + lVar10 * 4 + 4) = local_res8._4_4_;
    lVar10 = lVar10 + 2;
  } while (lVar10 < 0x12);
  do {
    BF_encrypt(&local_res8,param_1);
    *(undefined4 *)((longlong)param_1 + lVar7 * 4 + 0x48) = (undefined4)local_res8;
    *(undefined4 *)((longlong)param_1 + lVar7 * 4 + 0x4c) = local_res8._4_4_;
    lVar7 = lVar7 + 2;
  } while (lVar7 < 0x400);
  return;
}



// FUNCTION 143da94e0 BF_ecb_encrypt body=195 status=ok
// SIG undefined BF_ecb_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BF_ecb_encrypt(byte *param_1,undefined1 *param_2,undefined8 param_3,int param_4)

{
  uint local_res8;
  uint local_resc;
  
  local_res8 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
               (uint)param_1[3];
  local_resc = (uint)CONCAT11(param_1[6],param_1[7]) |
               (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10;
  if (param_4 == 0) {
    BF_decrypt(&local_res8,param_3);
  }
  else {
    BF_encrypt();
  }
  *param_2 = (char)(local_res8 >> 0x18);
  param_2[1] = (char)(local_res8 >> 0x10);
  param_2[2] = (char)(local_res8 >> 8);
  param_2[3] = (undefined1)local_res8;
  param_2[4] = (char)(local_resc >> 0x18);
  param_2[5] = (char)(local_resc >> 0x10);
  param_2[6] = (char)(local_resc >> 8);
  param_2[7] = (undefined1)local_resc;
  return;
}



// FUNCTION 143da95b0 FUN_143da95b0 body=1243 status=ok
// SIG undefined FUN_143da95b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143da95b0(byte *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,
                  undefined1 *param_5,int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  
  local_30 = (undefined1 *)0x143da95d7;
  uVar11 = (uint)CONCAT11(*param_5,param_5[1]) << 0x10 | (uint)(byte)param_5[2] << 8 |
           (uint)(byte)param_5[3];
  uVar10 = (uint)(byte)param_5[4] << 0x18 | (uint)(byte)param_5[5] << 0x10 |
           (uint)(byte)param_5[6] << 8 | (uint)(byte)param_5[7];
  if (param_6 == 0) {
    iVar5 = param_3 - 8;
    local_30 = param_5;
    if (-1 < iVar5) {
      uVar8 = (ulonglong)(param_3 >> 3);
      iVar5 = iVar5 + (param_3 >> 3) * -8;
      uVar6 = uVar11;
      uVar7 = uVar10;
      do {
        uVar11 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                 (uint)param_1[3];
        uVar10 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[6] << 8 |
                 (uint)param_1[7];
        param_1 = param_1 + 8;
        local_38 = uVar11;
        local_34 = uVar10;
        BF_decrypt(&local_38,param_4);
        local_38 = local_38 ^ uVar6;
        local_34 = local_34 ^ uVar7;
        *param_2 = (char)(local_38 >> 0x18);
        param_2[1] = (char)(local_38 >> 0x10);
        param_2[2] = (char)(local_38 >> 8);
        param_2[3] = (char)local_38;
        param_2[4] = (char)(local_34 >> 0x18);
        param_2[5] = (char)(local_34 >> 0x10);
        param_2[6] = (char)(local_34 >> 8);
        param_2[7] = (char)local_34;
        param_2 = param_2 + 8;
        uVar8 = uVar8 - 1;
        uVar6 = uVar11;
        uVar7 = uVar10;
      } while (uVar8 != 0);
    }
    param_5 = local_30;
    puVar9 = local_30;
    local_38 = uVar11;
    local_34 = uVar10;
    if (iVar5 != -8) {
      uVar7 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
              (uint)param_1[3];
      uVar6 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 |
              (uint)CONCAT11(param_1[6],param_1[7]);
      local_38 = uVar7;
      local_34 = uVar6;
      BF_decrypt(&local_38,param_4);
      uVar11 = local_38 ^ uVar11;
      uVar10 = local_34 ^ uVar10;
      param_2 = param_2 + (iVar5 + 8);
      puVar9 = local_30;
      local_38 = uVar7;
      local_34 = uVar6;
      switch(iVar5) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)uVar10;
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 8);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 0x10);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 0x18);
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)uVar11;
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar11 >> 8);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar11 >> 0x10);
      case -7:
        param_2[-1] = (char)(uVar11 >> 0x18);
      }
    }
  }
  else {
    iVar5 = param_3 - 8;
    local_38 = uVar11;
    local_34 = uVar10;
    if (-1 < iVar5) {
      uVar8 = (ulonglong)(param_3 >> 3);
      iVar5 = iVar5 + (param_3 >> 3) * -8;
      do {
        pbVar1 = param_1 + 4;
        pbVar2 = param_1 + 5;
        local_38 = ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                   (uint)param_1[3]) ^ local_38;
        pbVar3 = param_1 + 6;
        pbVar4 = param_1 + 7;
        param_1 = param_1 + 8;
        local_34 = ((uint)*pbVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 |
                   (uint)*pbVar4) ^ local_34;
        BF_encrypt(&local_38,param_4);
        *param_2 = (char)(local_38 >> 0x18);
        param_2[1] = (char)(local_38 >> 0x10);
        param_2[2] = (char)(local_38 >> 8);
        param_2[3] = (char)local_38;
        param_2[4] = (char)(local_34 >> 0x18);
        param_2[5] = (char)(local_34 >> 0x10);
        param_2[6] = (char)(local_34 >> 8);
        param_2[7] = (char)local_34;
        param_2 = param_2 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar9 = param_5;
    if (iVar5 != -8) {
      param_1 = param_1 + (iVar5 + 8);
      uVar11 = 0;
      uVar10 = 0;
      switch(iVar5) {
      case 0:
        uVar11 = (uint)param_1[-1];
        param_1 = param_1 + -1;
      case -1:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar11 = uVar11 | (uint)*pbVar1 << 8;
      case -2:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar11 = uVar11 | (uint)*pbVar1 << 0x10;
      case -3:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar11 = uVar11 | (uint)*pbVar1 << 0x18;
      case -4:
        uVar10 = (uint)param_1[-1];
        param_1 = param_1 + -1;
      case -5:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar10 = uVar10 | (uint)*pbVar1 << 8;
      case -6:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar10 = uVar10 | (uint)*pbVar1 << 0x10;
      case -7:
        uVar10 = uVar10 | (uint)param_1[-1] << 0x18;
      default:
        local_38 = uVar10 ^ local_38;
        local_34 = uVar11 ^ local_34;
        BF_encrypt(&local_38,param_4);
        *param_2 = (char)(local_38 >> 0x18);
        param_2[1] = (char)(local_38 >> 0x10);
        param_2[2] = (char)(local_38 >> 8);
        param_2[3] = (char)local_38;
        param_2[4] = (char)(local_34 >> 0x18);
        param_2[5] = (char)(local_34 >> 0x10);
        param_2[6] = (char)(local_34 >> 8);
        param_2[7] = (char)local_34;
      }
    }
  }
  *puVar9 = (char)(local_38 >> 0x18);
  param_5[1] = (char)(local_38 >> 0x10);
  param_5[2] = (char)(local_38 >> 8);
  param_5[3] = (char)local_38;
  param_5[4] = (char)(local_34 >> 0x18);
  param_5[5] = (char)(local_34 >> 0x10);
  param_5[6] = (char)(local_34 >> 8);
  param_5[7] = (char)local_34;
  return;
}



// FUNCTION 143da9ad0 BF_decrypt body=1180 status=ok
// SIG undefined BF_decrypt(void)

void BF_decrypt(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_2[0x11] ^ *param_1;
  uVar6 = (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
           param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
          param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0x10] ^ param_1[1];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xf];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xe];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xd];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xc];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xb];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[10];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[9];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[8];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[7];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[6];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[5];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[4];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[3];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[2];
  uVar1 = param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12];
  uVar2 = param_2[(ulonglong)(uVar6 >> 0x18) + 0x12];
  uVar3 = param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12];
  uVar4 = param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12];
  uVar5 = param_2[1];
  *param_1 = uVar6 ^ *param_2;
  param_1[1] = uVar7 ^ (uVar1 + uVar2 ^ uVar3) + uVar4 ^ uVar5;
  return;
}



// FUNCTION 143da9f70 BF_encrypt body=1180 status=ok
// SIG undefined BF_encrypt(void)

void BF_encrypt(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *param_1 ^ *param_2;
  uVar6 = (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
           param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
          param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[1] ^ param_1[1];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[2];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[3];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[4];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[5];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[6];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[7];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[8];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[9];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[10];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xb];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xc];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xd];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xe];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xf];
  uVar1 = param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12];
  uVar2 = param_2[(ulonglong)(uVar6 >> 0x18) + 0x12];
  uVar3 = param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12];
  uVar4 = param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12];
  uVar5 = param_2[0x10];
  *param_1 = uVar6 ^ param_2[0x11];
  param_1[1] = uVar7 ^ (uVar1 + uVar2 ^ uVar3) + uVar4 ^ uVar5;
  return;
}



// FUNCTION 143daa410 BF_cfb64_encrypt body=546 status=ok
// SIG undefined BF_cfb64_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BF_cfb64_encrypt(byte *param_1,byte *param_2,int param_3,undefined8 param_4,undefined1 *param_5
                     ,uint *param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar4 = param_6;
  puVar3 = param_5;
  uVar5 = *param_6;
  if (param_3 != 0) {
    if (param_7 == 0) {
      do {
        if (uVar5 == 0) {
          param_5._0_4_ =
               (uint)CONCAT11(*puVar3,puVar3[1]) << 0x10 | (uint)(byte)puVar3[2] << 8 |
               (uint)(byte)puVar3[3];
          param_5._4_4_ =
               (uint)CONCAT11(puVar3[6],puVar3[7]) |
               (uint)(byte)puVar3[4] << 0x18 | (uint)(byte)puVar3[5] << 0x10;
          BF_encrypt(&param_5,param_4);
          *puVar3 = (char)((uint)param_5 >> 0x18);
          puVar3[1] = (char)((uint)param_5 >> 0x10);
          puVar3[2] = (char)((uint)param_5 >> 8);
          puVar3[3] = param_5._0_1_;
          puVar3[4] = (char)(param_5._4_4_ >> 0x18);
          puVar3[5] = (char)(param_5._4_4_ >> 0x10);
          puVar3[6] = (char)(param_5._4_4_ >> 8);
          puVar3[7] = param_5._4_1_;
        }
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        bVar2 = puVar3[(int)uVar5];
        puVar3[(int)uVar5] = bVar1;
        *param_2 = bVar1 ^ bVar2;
        param_2 = param_2 + 1;
        uVar5 = uVar5 + 1 & 7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    else {
      lVar6 = (longlong)param_1 - (longlong)param_2;
      do {
        if (uVar5 == 0) {
          param_5._0_4_ =
               (uint)CONCAT11(*puVar3,puVar3[1]) << 0x10 | (uint)(byte)puVar3[2] << 8 |
               (uint)(byte)puVar3[3];
          param_5._4_4_ =
               (uint)CONCAT11(puVar3[6],puVar3[7]) |
               (uint)(byte)puVar3[4] << 0x18 | (uint)(byte)puVar3[5] << 0x10;
          BF_encrypt(&param_5,param_4);
          *puVar3 = (char)((uint)param_5 >> 0x18);
          puVar3[1] = (char)((uint)param_5 >> 0x10);
          puVar3[2] = (char)((uint)param_5 >> 8);
          puVar3[3] = param_5._0_1_;
          puVar3[4] = (char)(param_5._4_4_ >> 0x18);
          puVar3[5] = (char)(param_5._4_4_ >> 0x10);
          puVar3[6] = (char)(param_5._4_4_ >> 8);
          puVar3[7] = param_5._4_1_;
        }
        bVar1 = param_2[lVar6];
        bVar2 = puVar3[(int)uVar5];
        *param_2 = bVar1 ^ bVar2;
        param_2 = param_2 + 1;
        puVar3[(int)uVar5] = bVar1 ^ bVar2;
        uVar5 = uVar5 + 1 & 7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  *puVar4 = uVar5;
  return;
}



// FUNCTION 143daa640 BF_ofb64_encrypt body=492 status=ok
// SIG undefined BF_ofb64_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void BF_ofb64_encrypt(byte *param_1,longlong param_2,int param_3,undefined8 param_4,byte *param_5,
                     uint *param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_64;
  undefined8 local_60;
  uint *local_58;
  byte *local_50;
  byte local_48 [4];
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_50 = param_5;
  iVar6 = 0;
  local_48[1] = param_5[1];
  uVar2 = *param_6;
  uVar4 = (uint)param_5[3];
  uVar5 = (uint)*param_5 << 0x18 | (uint)local_48[1] << 0x10 | (uint)param_5[2] << 8 | uVar4;
  local_58 = param_6;
  uVar1 = (uint)CONCAT11(param_5[6],param_5[7]);
  local_64 = (uint)param_5[4] << 0x18 | (uint)param_5[5] << 0x10 | uVar1;
  uVar3 = (ulonglong)local_64;
  local_48[3] = param_5[3];
  local_48[0] = *param_5;
  local_48[2] = param_5[2];
  local_44 = param_5[4];
  local_43 = param_5[5];
  local_42 = param_5[6];
  local_41 = param_5[7];
  if (param_3 != 0) {
    param_2 = param_2 - (longlong)param_1;
    uVar1 = uVar1 & 0xff;
    local_68 = uVar5;
    local_60 = param_4;
    do {
      param_3 = param_3 + -1;
      if (uVar2 == 0) {
        BF_encrypt(&local_68,param_4);
        uVar3 = (ulonglong)local_64;
        uVar4 = local_68 & 0xff;
        uVar1 = local_64 & 0xff;
        local_48[0] = (byte)(local_68 >> 0x18);
        local_48[1] = (byte)(local_68 >> 0x10);
        local_48[2] = (byte)(local_68 >> 8);
        local_44 = (byte)(local_64 >> 0x18);
        local_43 = (byte)(local_64 >> 0x10);
        local_42 = (byte)(local_64 >> 8);
        iVar6 = iVar6 + 1;
        local_48[3] = (byte)local_68;
        local_41 = (byte)local_64;
        uVar5 = local_68;
      }
      param_1[param_2] = local_48[(int)uVar2] ^ *param_1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 + 1 & 7;
    } while (param_3 != 0);
    param_6 = local_58;
    if (iVar6 != 0) {
      *local_50 = (byte)(uVar5 >> 0x18);
      param_5[1] = (byte)(uVar5 >> 0x10);
      param_5[2] = (byte)(uVar5 >> 8);
      param_5[3] = (byte)uVar4;
      param_5[4] = (byte)(uVar3 >> 0x18);
      param_5[5] = (byte)(uVar3 >> 0x10);
      param_5[6] = (byte)(uVar3 >> 8);
      param_5[7] = (byte)uVar1;
    }
  }
  *param_6 = uVar2;
  return;
}



// FUNCTION 143daa830 FUN_143daa830 body=6014 status=ok
// SIG undefined FUN_143daa830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143daa830(uint *param_1,uint param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
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
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  uint uVar120;
  uint uVar121;
  uint uVar122;
  uint uVar123;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  uint uVar127;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  uint uVar131;
  uint uVar132;
  uint uVar133;
  uint uVar134;
  uint uVar135;
  uint uVar136;
  uint uVar137;
  uint uVar138;
  uint uVar139;
  uint uVar140;
  uint uVar141;
  uint uVar142;
  uint uVar143;
  uint uVar144;
  uint uVar145;
  undefined1 auVar146 [13];
  undefined1 auVar147 [13];
  undefined1 auVar148 [13];
  undefined1 auVar149 [13];
  undefined1 auVar150 [13];
  undefined1 auVar151 [13];
  undefined1 auVar152 [13];
  undefined1 auVar153 [13];
  undefined1 auVar154 [13];
  undefined1 auVar155 [13];
  undefined1 auVar156 [13];
  undefined1 auVar157 [13];
  undefined1 auVar158 [13];
  undefined1 auVar159 [13];
  undefined1 auVar160 [13];
  undefined1 auVar161 [13];
  uint uVar162;
  undefined4 *puVar163;
  ulonglong uVar164;
  ulonglong uVar165;
  uint uVar166;
  uint uVar167;
  longlong lVar168;
  ulonglong uVar169;
  uint uVar170;
  undefined1 (*pauVar171) [16];
  ulonglong uVar172;
  uint uVar173;
  ulonglong uVar174;
  ulonglong uVar175;
  ulonglong uVar176;
  uint uVar177;
  uint uVar178;
  uint uVar179;
  uint uVar180;
  uint uVar181;
  uint uVar182;
  uint uVar183;
  uint uVar184;
  uint uVar185;
  uint uVar186;
  uint uVar187;
  uint uVar188;
  uint uVar189;
  uint uVar190;
  ulonglong uVar191;
  uint uVar192;
  uint uVar193;
  uint uVar194;
  uint uVar195;
  uint uVar196;
  uint uVar197;
  uint uVar198;
  ulonglong uVar199;
  ulonglong uVar200;
  ulonglong uVar201;
  undefined1 uVar204;
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 uVar207;
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  uint local_178;
  uint local_170;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_78 [8];
  uint local_58;
  undefined8 uStack_54;
  uint uStack_4c;
  uint local_48;
  undefined8 uStack_44;
  uint uStack_3c;
  
  uVar164 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  uVar177 = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  uVar192 = 0x10;
  if ((int)param_2 < 0x11) {
    uVar192 = param_2;
  }
  local_78[6] = 0;
  local_78[7] = 0;
  local_170 = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  local_48 = 0;
  local_15c = 0;
  uStack_44 = 0;
  local_158 = 0;
  uStack_3c = 0;
  uVar165 = uVar164;
  uVar169 = uVar164;
  uVar172 = uVar164;
  uVar174 = uVar164;
  uStack_54._4_4_ = 0;
  if ((0 < (int)uVar192) &&
     (uVar165 = 0, uVar169 = 0, uVar172 = 0, uVar174 = 0, uStack_54._4_4_ = 0, 0xf < uVar192)) {
    uVar166 = uVar192 & 0x8000000f;
    if ((int)uVar166 < 0) {
      uVar166 = (uVar166 - 1 | 0xfffffff0) + 1;
    }
    puVar163 = (undefined4 *)(param_3 + 4);
    pauVar171 = (undefined1 (*) [16])&local_58;
    do {
      uVar14 = puVar163[-1];
      uVar15 = *puVar163;
      puVar1 = puVar163 + 4;
      uVar204 = (undefined1)((uint)uVar14 >> 8);
      uVar165 = (ulonglong)CONCAT12(uVar204,(short)uVar14) & 0xffffffffffff00ff;
      uVar207 = (undefined1)((uint)uVar15 >> 8);
      uVar169 = (ulonglong)CONCAT12(uVar207,(short)uVar15) & 0xffffffffffff00ff;
      auVar146._8_4_ = 0;
      auVar146._0_8_ = uVar165;
      auVar146[0xc] = (char)((uint)uVar14 >> 0x18);
      auVar147[8] = (char)((uint)uVar14 >> 0x10);
      auVar147._0_8_ = uVar165;
      auVar147[9] = 0;
      auVar147._10_3_ = auVar146._10_3_;
      auVar158._5_8_ = 0;
      auVar158._0_5_ = auVar147._8_5_;
      auVar148[4] = uVar204;
      auVar148._0_4_ = (uint)uVar165;
      auVar148[5] = 0;
      auVar148._6_7_ = SUB137(auVar158 << 0x40,6);
      auVar202._0_4_ = (uint)uVar165 & 0xffff;
      auVar202._4_9_ = auVar148._4_9_;
      auVar202._13_3_ = 0;
      uVar177 = (int)uVar164 + 0x10;
      uVar164 = (ulonglong)uVar177;
      auVar149._8_4_ = 0;
      auVar149._0_8_ = uVar169;
      auVar149[0xc] = (char)((uint)uVar15 >> 0x18);
      auVar150[8] = (char)((uint)uVar15 >> 0x10);
      auVar150._0_8_ = uVar169;
      auVar150[9] = 0;
      auVar150._10_3_ = auVar149._10_3_;
      auVar159._5_8_ = 0;
      auVar159._0_5_ = auVar150._8_5_;
      auVar151[4] = uVar207;
      auVar151._0_4_ = (uint)uVar169;
      auVar151[5] = 0;
      auVar151._6_7_ = SUB137(auVar159 << 0x40,6);
      auVar205._0_4_ = (uint)uVar169 & 0xffff;
      auVar205._4_9_ = auVar151._4_9_;
      auVar205._13_3_ = 0;
      pauVar171[-2] = auVar202;
      uVar14 = puVar163[1];
      uVar204 = (undefined1)((uint)uVar14 >> 8);
      uVar165 = (ulonglong)CONCAT12(uVar204,(short)uVar14) & 0xffffffffffff00ff;
      auVar152._8_4_ = 0;
      auVar152._0_8_ = uVar165;
      auVar152[0xc] = (char)((uint)uVar14 >> 0x18);
      auVar153[8] = (char)((uint)uVar14 >> 0x10);
      auVar153._0_8_ = uVar165;
      auVar153[9] = 0;
      auVar153._10_3_ = auVar152._10_3_;
      auVar160._5_8_ = 0;
      auVar160._0_5_ = auVar153._8_5_;
      auVar154[4] = uVar204;
      auVar154._0_4_ = (uint)uVar165;
      auVar154[5] = 0;
      auVar154._6_7_ = SUB137(auVar160 << 0x40,6);
      auVar203._0_4_ = (uint)uVar165 & 0xffff;
      auVar203._4_9_ = auVar154._4_9_;
      auVar203._13_3_ = 0;
      pauVar171[-1] = auVar205;
      uVar14 = puVar163[2];
      uVar204 = (undefined1)((uint)uVar14 >> 8);
      uVar165 = (ulonglong)CONCAT12(uVar204,(short)uVar14) & 0xffffffffffff00ff;
      auVar155._8_4_ = 0;
      auVar155._0_8_ = uVar165;
      auVar155[0xc] = (char)((uint)uVar14 >> 0x18);
      auVar156[8] = (char)((uint)uVar14 >> 0x10);
      auVar156._0_8_ = uVar165;
      auVar156[9] = 0;
      auVar156._10_3_ = auVar155._10_3_;
      auVar161._5_8_ = 0;
      auVar161._0_5_ = auVar156._8_5_;
      auVar157[4] = uVar204;
      auVar157._0_4_ = (uint)uVar165;
      auVar157[5] = 0;
      auVar157._6_7_ = SUB137(auVar161 << 0x40,6);
      auVar206._0_4_ = (uint)uVar165 & 0xffff;
      auVar206._4_9_ = auVar157._4_9_;
      auVar206._13_3_ = 0;
      *pauVar171 = auVar203;
      pauVar171[1] = auVar206;
      puVar163 = puVar1;
      pauVar171 = pauVar171 + 4;
    } while ((-4 - param_3) + (longlong)puVar1 < (longlong)(int)(uVar192 - uVar166));
    uVar172 = (ulonglong)uStack_3c;
    uVar169 = (ulonglong)uStack_44._4_4_;
    uVar174 = uStack_44 & 0xffffffff;
    uVar165 = (ulonglong)local_58;
    local_158 = uStack_44._4_4_;
    local_15c = (uint)uStack_44;
    local_170 = (uint)uStack_54;
  }
  lVar168 = (longlong)(int)uVar177;
  local_178 = uStack_4c;
  local_160 = local_48;
  if (lVar168 < (int)uVar192) {
    do {
      local_78[lVar168] = (uint)*(byte *)(lVar168 + param_3);
      lVar168 = lVar168 + 1;
    } while (lVar168 < (int)uVar192);
    uVar172 = (ulonglong)uStack_3c;
    uVar169 = (ulonglong)uStack_44._4_4_;
    uVar174 = uStack_44 & 0xffffffff;
    uVar165 = (ulonglong)local_58;
    local_158 = uStack_44._4_4_;
    local_15c = (uint)uStack_44;
    local_160 = local_48;
    local_178 = uStack_4c;
    local_170 = (uint)uStack_54;
  }
  param_1[0x20] = (uint)((int)uVar192 < 0xb);
  uVar178 = (((local_78[0] << 8 | local_78[1]) << 8 | local_78[2]) << 8 | local_78[3]) ^
            *(uint *)(&DAT_145db5260 + uVar172 * 4) ^ *(uint *)(&DAT_145db5a60 + uVar169 * 4) ^
            *(uint *)(&DAT_145db4e60 + uVar174 * 4) ^
            *(uint *)(&DAT_145db5660 + (ulonglong)local_160 * 4) ^
            *(uint *)(&DAT_145db5660 + uVar165 * 4);
  uVar172 = (ulonglong)(byte)(uVar178 >> 0x10);
  uVar200 = (ulonglong)(byte)(uVar178 >> 8);
  uVar175 = (ulonglong)(uVar178 & 0xff);
  uVar169 = (ulonglong)(uVar178 >> 0x18);
  uVar173 = ((((int)uVar165 << 8 | local_170) << 8 | uStack_54._4_4_) << 8 | local_178) ^
            *(uint *)(&DAT_145db5a60 + (ulonglong)uStack_54._4_4_ * 4) ^
            *(uint *)(&DAT_145db5a60 + uVar175 * 4) ^ *(uint *)(&DAT_145db5260 + uVar200 * 4) ^
            *(uint *)(&DAT_145db4e60 + uVar169 * 4) ^ *(uint *)(&DAT_145db5660 + uVar172 * 4);
  uVar164 = (ulonglong)(byte)(uVar173 >> 0x10);
  uVar192 = *(uint *)(&DAT_145db5660 + uVar164 * 4);
  uVar199 = (ulonglong)(byte)(uVar173 >> 8);
  uVar177 = *(uint *)(&DAT_145db5a60 + (ulonglong)(uVar173 >> 0x18) * 4);
  uVar201 = (ulonglong)(uVar173 & 0xff);
  uVar166 = *(uint *)(&DAT_145db5260 + uVar199 * 4);
  uVar193 = (((local_160 << 8 | local_15c) << 8 | local_158) << 8 | uStack_3c) ^
            *(uint *)(&DAT_145db4e60 + (ulonglong)local_170 * 4) ^
            *(uint *)(&DAT_145db4e60 + uVar201 * 4) ^ uVar177 ^ uVar166 ^ uVar192;
  uVar174 = (ulonglong)(byte)(uVar193 >> 0x10);
  uVar16 = *(uint *)(&DAT_145db4e60 + (ulonglong)(byte)(uVar193 >> 8) * 4);
  uVar194 = (((local_78[4] << 8 | local_78[5]) << 8 | local_78[6]) << 8 | local_78[7]) ^
            *(uint *)(&DAT_145db5260 + (ulonglong)local_178 * 4) ^
            *(uint *)(&DAT_145db5660 + (ulonglong)(uVar193 & 0xff) * 4) ^
            *(uint *)(&DAT_145db5a60 + (ulonglong)(uVar193 >> 0x18) * 4) ^ uVar16 ^
            *(uint *)(&DAT_145db5260 + uVar174 * 4);
  uVar17 = *(uint *)(&DAT_145db5260 + (ulonglong)(uVar193 & 0xff) * 4);
  uVar18 = *(uint *)(&DAT_145db5a60 + uVar200 * 4);
  lVar168 = (ulonglong)(uVar194 >> 0x18) * 4;
  uVar19 = *(uint *)(&DAT_145db5260 + (ulonglong)(byte)(uVar194 >> 0x10) * 4);
  uVar20 = *(uint *)(&DAT_145db5660 + uVar174 * 4);
  uVar21 = *(uint *)(&DAT_145db5660 + uVar175 * 4);
  uVar22 = *(uint *)(&DAT_145db4e60 + lVar168);
  uVar23 = *(uint *)(&DAT_145db4e60 + (ulonglong)(byte)(uVar194 >> 8) * 4);
  uVar24 = *(uint *)(&DAT_145db5260 + (ulonglong)(uVar194 & 0xff) * 4);
  uVar25 = *(uint *)(&DAT_145db5a60 + uVar169 * 4);
  uVar26 = *(uint *)(&DAT_145db5a60 + lVar168);
  uVar27 = *(uint *)(&DAT_145db5660 + uVar172 * 4);
  uVar182 = *(uint *)(&DAT_145db5260 + uVar201 * 4) ^ *(uint *)(&DAT_145db4e60 + uVar164 * 4) ^
            *(uint *)(&DAT_145db5660 + (ulonglong)(uVar173 >> 0x18) * 4) ^
            *(uint *)(&DAT_145db5660 + uVar169 * 4) ^ uVar193 ^
            *(uint *)(&DAT_145db5a60 + uVar199 * 4);
  uVar28 = *(uint *)(&DAT_145db5260 + (ulonglong)(uVar182 >> 8 & 0xff) * 4);
  lVar168 = (ulonglong)(uVar182 >> 0x18) * 4;
  lVar2 = (ulonglong)(uVar182 >> 0x10 & 0xff) * 4;
  lVar3 = (ulonglong)(uVar182 & 0xff) * 4;
  uVar183 = *(uint *)(&DAT_145db4e60 + lVar168) ^ *(uint *)(&DAT_145db5660 + lVar2) ^
            *(uint *)(&DAT_145db5a60 + lVar3) ^ uVar178 ^ uVar28 ^ uVar18;
  lVar4 = (ulonglong)(uVar183 & 0xff) * 4;
  uVar178 = *(uint *)(&DAT_145db4e60 + lVar4);
  uVar29 = *(uint *)(&DAT_145db5260 + (ulonglong)(uVar183 >> 8 & 0xff) * 4);
  lVar5 = (ulonglong)(uVar183 >> 0x10 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar183 >> 0x18) * 4;
  uVar173 = *(uint *)(&DAT_145db4e60 + uVar172 * 4) ^ *(uint *)(&DAT_145db5a60 + lVar6) ^
            *(uint *)(&DAT_145db5660 + lVar5) ^ uVar29 ^ uVar178 ^ uVar173;
  lVar7 = (ulonglong)(uVar173 & 0xff) * 4;
  lVar8 = (ulonglong)(uVar173 >> 8 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar173 >> 0x10 & 0xff) * 4;
  lVar10 = (ulonglong)(uVar173 >> 0x18) * 4;
  uVar194 = *(uint *)(&DAT_145db5260 + uVar175 * 4) ^ *(uint *)(&DAT_145db5660 + lVar7) ^
            *(uint *)(&DAT_145db5260 + lVar9) ^ *(uint *)(&DAT_145db4e60 + lVar8) ^
            *(uint *)(&DAT_145db5a60 + lVar10) ^ uVar194;
  uVar30 = *(uint *)(&DAT_145db5660 + (ulonglong)(uVar194 >> 0x18) * 4);
  lVar11 = (ulonglong)(uVar194 >> 0x10 & 0xff) * 4;
  uVar31 = *(uint *)(&DAT_145db4e60 + lVar3);
  uVar32 = *(uint *)(&DAT_145db4e60 + lVar10);
  lVar12 = (ulonglong)(uVar194 & 0xff) * 4;
  uVar33 = *(uint *)(&DAT_145db5a60 + lVar11);
  lVar13 = (ulonglong)(uVar194 >> 8 & 0xff) * 4;
  uVar34 = *(uint *)(&DAT_145db5260 + lVar168);
  uVar35 = *(uint *)(&DAT_145db4e60 + lVar2);
  uVar36 = *(uint *)(&DAT_145db5660 + lVar10);
  uVar37 = *(uint *)(&DAT_145db5260 + lVar11);
  uVar38 = *(uint *)(&DAT_145db5660 + lVar13);
  uVar39 = *(uint *)(&DAT_145db5a60 + lVar12);
  uVar40 = *(uint *)(&DAT_145db5260 + lVar6);
  uVar41 = *(uint *)(&DAT_145db4e60 + lVar5);
  uVar42 = *(uint *)(&DAT_145db5660 + lVar3);
  uVar43 = *(uint *)(&DAT_145db5a60 + lVar9);
  uVar44 = *(uint *)(&DAT_145db5a60 + lVar4);
  uVar45 = *(uint *)(&DAT_145db5a60 + lVar7);
  uVar46 = *(uint *)(&DAT_145db5660 + lVar8);
  uVar195 = *(uint *)(&DAT_145db4e60 + lVar11) ^ *(uint *)(&DAT_145db5a60 + lVar13) ^
            *(uint *)(&DAT_145db5260 + lVar12) ^ uVar182 ^ uVar36 ^ uVar30;
  lVar168 = (ulonglong)(uVar195 >> 0x10 & 0xff) * 4;
  lVar2 = (ulonglong)(uVar195 >> 0x18) * 4;
  lVar3 = (ulonglong)(uVar195 >> 8 & 0xff) * 4;
  uVar182 = *(uint *)(&DAT_145db5260 + lVar3);
  lVar4 = (ulonglong)(uVar195 & 0xff) * 4;
  uVar197 = *(uint *)(&DAT_145db5660 + lVar168) ^ *(uint *)(&DAT_145db4e60 + lVar2) ^
            *(uint *)(&DAT_145db5a60 + lVar4) ^ *(uint *)(&DAT_145db5a60 + lVar8) ^ uVar173 ^
            uVar182;
  lVar5 = (ulonglong)(uVar197 >> 8 & 0xff) * 4;
  uVar173 = *(uint *)(&DAT_145db5260 + lVar5);
  lVar6 = (ulonglong)(uVar197 >> 0x10 & 0xff) * 4;
  lVar8 = (ulonglong)(uVar197 >> 0x18) * 4;
  lVar10 = (ulonglong)(uVar197 & 0xff) * 4;
  uVar47 = *(uint *)(&DAT_145db4e60 + lVar10);
  uVar184 = *(uint *)(&DAT_145db5660 + lVar6) ^ *(uint *)(&DAT_145db5a60 + lVar8) ^
            *(uint *)(&DAT_145db4e60 + lVar9) ^ uVar194 ^ uVar47 ^ uVar173;
  lVar9 = (ulonglong)(uVar184 & 0xff) * 4;
  lVar11 = (ulonglong)(uVar184 >> 8 & 0xff) * 4;
  lVar12 = (ulonglong)(uVar184 >> 0x10 & 0xff) * 4;
  lVar13 = (ulonglong)(uVar184 >> 0x18) * 4;
  uVar183 = *(uint *)(&DAT_145db5660 + lVar9) ^ *(uint *)(&DAT_145db4e60 + lVar11) ^
            *(uint *)(&DAT_145db5a60 + lVar13) ^ *(uint *)(&DAT_145db5260 + lVar12) ^
            *(uint *)(&DAT_145db5260 + lVar7) ^ uVar183;
  lVar7 = (ulonglong)(uVar183 >> 0x18) * 4;
  uVar194 = *(uint *)(&DAT_145db5a60 + (ulonglong)(uVar183 >> 0x10 & 0xff) * 4);
  uVar48 = *(uint *)(&DAT_145db4e60 + lVar4);
  uVar49 = *(uint *)(&DAT_145db4e60 + lVar12);
  uVar50 = *(uint *)(&DAT_145db5660 + lVar7);
  uVar51 = *(uint *)(&DAT_145db4e60 + lVar168);
  uVar52 = *(uint *)(&DAT_145db5660 + (ulonglong)(uVar183 >> 8 & 0xff) * 4);
  uVar53 = *(uint *)(&DAT_145db5a60 + (ulonglong)(uVar183 & 0xff) * 4);
  uVar54 = *(uint *)(&DAT_145db5260 + lVar2);
  uVar55 = *(uint *)(&DAT_145db5260 + lVar7);
  uVar56 = *(uint *)(&DAT_145db5660 + lVar13);
  uVar57 = *(uint *)(&DAT_145db5660 + lVar3);
  uVar58 = *(uint *)(&DAT_145db5a60 + lVar12);
  uVar59 = *(uint *)(&DAT_145db5a60 + lVar9);
  uVar60 = *(uint *)(&DAT_145db5660 + lVar11);
  uVar61 = *(uint *)(&DAT_145db5260 + lVar8);
  uVar62 = *(uint *)(&DAT_145db4e60 + lVar6);
  uVar63 = *(uint *)(&DAT_145db5a60 + lVar5);
  uVar185 = *(uint *)(&DAT_145db5260 + lVar10) ^ *(uint *)(&DAT_145db5660 + lVar8) ^
            *(uint *)(&DAT_145db5660 + lVar2) ^ uVar184 ^ uVar63 ^ uVar62;
  lVar168 = (ulonglong)(uVar185 & 0xff) * 4;
  lVar2 = (ulonglong)(uVar185 >> 8 & 0xff) * 4;
  uVar184 = *(uint *)(&DAT_145db5660 + (ulonglong)(uVar185 >> 0x10 & 0xff) * 4);
  lVar5 = (ulonglong)(uVar185 >> 0x18) * 4;
  uVar186 = *(uint *)(&DAT_145db4e60 + lVar5) ^ *(uint *)(&DAT_145db5260 + lVar2) ^
            *(uint *)(&DAT_145db5a60 + lVar168) ^ *(uint *)(&DAT_145db5a60 + lVar3) ^ uVar195 ^
            uVar184;
  lVar3 = (ulonglong)(uVar186 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar186 >> 8 & 0xff) * 4;
  uVar195 = *(uint *)(&DAT_145db5660 + (ulonglong)(uVar186 >> 0x10 & 0xff) * 4);
  uVar64 = *(uint *)(&DAT_145db5a60 + (ulonglong)(uVar186 >> 0x18) * 4);
  uVar197 = *(uint *)(&DAT_145db5260 + lVar6) ^ *(uint *)(&DAT_145db4e60 + lVar3) ^ uVar64 ^ uVar195
            ^ uVar51 ^ uVar197;
  lVar7 = (ulonglong)(uVar197 & 0xff) * 4;
  lVar8 = (ulonglong)(uVar197 >> 8 & 0xff) * 4;
  uVar65 = *(uint *)(&DAT_145db4e60 + lVar8);
  lVar9 = (ulonglong)(uVar197 >> 0x10 & 0xff) * 4;
  uVar66 = *(uint *)(&DAT_145db5260 + lVar9);
  lVar10 = (ulonglong)(uVar197 >> 0x18) * 4;
  uVar170 = *(uint *)(&DAT_145db5260 + lVar4) ^ *(uint *)(&DAT_145db5660 + lVar7) ^
            *(uint *)(&DAT_145db5a60 + lVar10) ^ uVar183 ^ uVar66 ^ uVar65;
  uVar183 = *(uint *)(&DAT_145db5a60 + lVar6);
  uVar67 = *(uint *)(&DAT_145db5660 + lVar3);
  uVar68 = *(uint *)(&DAT_145db4e60 + lVar168);
  uVar69 = *(uint *)(&DAT_145db4e60 + lVar10);
  uVar70 = *(uint *)(&DAT_145db5260 + lVar7);
  lVar4 = (ulonglong)(uVar170 >> 0x18) * 4;
  uVar71 = *(uint *)(&DAT_145db5260 + lVar3);
  lVar3 = (ulonglong)(uVar170 >> 0x10 & 0xff) * 4;
  uVar72 = *(uint *)(&DAT_145db5660 + lVar10);
  uVar73 = *(uint *)(&DAT_145db5a60 + lVar2);
  uVar74 = *(uint *)(&DAT_145db5660 + lVar168);
  uVar75 = *(uint *)(&DAT_145db4e60 + lVar4);
  uVar76 = *(uint *)(&DAT_145db5260 + lVar3);
  lVar168 = (ulonglong)(uVar170 >> 8 & 0xff) * 4;
  uVar77 = *(uint *)(&DAT_145db5260 + (ulonglong)(uVar170 & 0xff) * 4);
  uVar179 = *(uint *)(&DAT_145db5660 + lVar4) ^ *(uint *)(&DAT_145db4e60 + lVar3) ^
            *(uint *)(&DAT_145db5a60 + lVar168) ^ uVar185 ^ uVar72 ^ uVar77;
  uVar185 = *(uint *)(&DAT_145db5a60 + lVar5);
  uVar78 = *(uint *)(&DAT_145db5a60 + lVar3);
  uVar79 = *(uint *)(&DAT_145db4e60 + lVar168);
  uVar191 = (ulonglong)(byte)(uVar179 >> 0x10);
  uVar169 = (ulonglong)(byte)(uVar179 >> 8);
  uVar172 = (ulonglong)(uVar179 >> 0x18);
  uVar180 = *(uint *)(&DAT_145db5a60 + (ulonglong)(uVar179 & 0xff) * 4) ^
            *(uint *)(&DAT_145db5260 + uVar169 * 4) ^ *(uint *)(&DAT_145db4e60 + uVar172 * 4) ^
            *(uint *)(&DAT_145db5a60 + lVar8) ^ uVar197 ^ *(uint *)(&DAT_145db5660 + uVar191 * 4);
  uVar176 = (ulonglong)(uVar180 >> 8 & 0xff);
  uVar197 = *(uint *)(&DAT_145db5a60 + (ulonglong)(uVar180 >> 0x18) * 4);
  uVar80 = *(uint *)(&DAT_145db5260 + uVar176 * 4);
  uVar164 = (ulonglong)(byte)(uVar180 >> 0x10);
  uVar81 = *(uint *)(&DAT_145db5660 + uVar164 * 4);
  uVar165 = (ulonglong)(uVar180 & 0xff);
  uVar167 = *(uint *)(&DAT_145db4e60 + uVar165 * 4) ^ *(uint *)(&DAT_145db4e60 + lVar9) ^ uVar170 ^
            uVar197 ^ uVar80 ^ uVar81;
  uVar175 = (ulonglong)(byte)(uVar167 >> 0x10);
  uVar170 = *(uint *)(&DAT_145db5260 + uVar175 * 4);
  uVar82 = *(uint *)(&DAT_145db4e60 + (ulonglong)(byte)(uVar167 >> 8) * 4);
  uVar83 = *(uint *)(&DAT_145db5a60 + uVar176 * 4);
  uVar162 = *(uint *)(&DAT_145db5660 + (ulonglong)(uVar167 & 0xff) * 4) ^
            *(uint *)(&DAT_145db5a60 + (ulonglong)(uVar167 >> 0x18) * 4) ^ uVar186 ^ uVar82 ^
            uVar170 ^ uVar70;
  uVar186 = *(uint *)(&DAT_145db5660 + uVar165 * 4);
  uVar84 = *(uint *)(&DAT_145db4e60 + uVar169 * 4);
  uVar85 = *(uint *)(&DAT_145db4e60 + (ulonglong)(uVar167 >> 0x18) * 4);
  uVar86 = *(uint *)(&DAT_145db5260 + (ulonglong)(uVar167 & 0xff) * 4);
  uVar87 = *(uint *)(&DAT_145db5a60 + uVar169 * 4);
  lVar168 = (ulonglong)(uVar179 & 0xff) * 4;
  uVar88 = *(uint *)(&DAT_145db5260 + (ulonglong)(byte)(uVar162 >> 0x10) * 4);
  uVar89 = *(uint *)(&DAT_145db5660 + uVar175 * 4);
  uVar90 = *(uint *)(&DAT_145db4e60 + (ulonglong)(uVar162 >> 0x18) * 4);
  uVar91 = *(uint *)(&DAT_145db5660 + lVar168);
  uVar92 = *(uint *)(&DAT_145db4e60 + (ulonglong)(uVar162 >> 8 & 0xff) * 4);
  uVar93 = *(uint *)(&DAT_145db5260 + (ulonglong)(uVar162 & 0xff) * 4);
  uVar94 = *(uint *)(&DAT_145db5a60 + (ulonglong)(uVar162 >> 0x18) * 4);
  uVar95 = *(uint *)(&DAT_145db5a60 + uVar172 * 4);
  uVar96 = *(uint *)(&DAT_145db5660 + uVar191 * 4);
  uVar187 = *(uint *)(&DAT_145db5260 + uVar165 * 4) ^ *(uint *)(&DAT_145db4e60 + uVar164 * 4) ^
            *(uint *)(&DAT_145db5660 + (ulonglong)(uVar180 >> 0x18) * 4) ^
            *(uint *)(&DAT_145db5660 + uVar172 * 4) ^ uVar167 ^ uVar83;
  uVar167 = *(uint *)(&DAT_145db5260 + (ulonglong)(uVar187 >> 8 & 0xff) * 4);
  lVar2 = (ulonglong)(uVar187 & 0xff) * 4;
  lVar3 = (ulonglong)(uVar187 >> 0x10 & 0xff) * 4;
  lVar4 = (ulonglong)(uVar187 >> 0x18) * 4;
  uVar188 = *(uint *)(&DAT_145db4e60 + lVar4) ^ *(uint *)(&DAT_145db5660 + lVar3) ^
            *(uint *)(&DAT_145db5a60 + lVar2) ^ uVar179 ^ uVar167 ^ uVar87;
  lVar5 = (ulonglong)(uVar188 & 0xff) * 4;
  uVar179 = *(uint *)(&DAT_145db4e60 + lVar5);
  uVar97 = *(uint *)(&DAT_145db5260 + (ulonglong)(uVar188 >> 8 & 0xff) * 4);
  lVar6 = (ulonglong)(uVar188 >> 0x10 & 0xff) * 4;
  lVar7 = (ulonglong)(uVar188 >> 0x18) * 4;
  uVar180 = *(uint *)(&DAT_145db4e60 + uVar191 * 4) ^ *(uint *)(&DAT_145db5a60 + lVar7) ^
            *(uint *)(&DAT_145db5660 + lVar6) ^ uVar97 ^ uVar179 ^ uVar180;
  lVar8 = (ulonglong)(uVar180 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar180 >> 8 & 0xff) * 4;
  lVar10 = (ulonglong)(uVar180 >> 0x10 & 0xff) * 4;
  lVar11 = (ulonglong)(uVar180 >> 0x18) * 4;
  uVar162 = *(uint *)(&DAT_145db5260 + lVar168) ^ *(uint *)(&DAT_145db5660 + lVar8) ^
            *(uint *)(&DAT_145db5260 + lVar10) ^ *(uint *)(&DAT_145db4e60 + lVar9) ^
            *(uint *)(&DAT_145db5a60 + lVar11) ^ uVar162;
  uVar98 = *(uint *)(&DAT_145db5660 + (ulonglong)(uVar162 >> 0x18) * 4);
  lVar168 = (ulonglong)(uVar162 >> 0x10 & 0xff) * 4;
  uVar99 = *(uint *)(&DAT_145db4e60 + lVar2);
  uVar100 = *(uint *)(&DAT_145db4e60 + lVar11);
  lVar12 = (ulonglong)(uVar162 & 0xff) * 4;
  uVar101 = *(uint *)(&DAT_145db5a60 + lVar168);
  lVar13 = (ulonglong)(uVar162 >> 8 & 0xff) * 4;
  uVar102 = *(uint *)(&DAT_145db5260 + lVar4);
  uVar103 = *(uint *)(&DAT_145db4e60 + lVar3);
  uVar104 = *(uint *)(&DAT_145db5660 + lVar11);
  uVar105 = *(uint *)(&DAT_145db5260 + lVar168);
  uVar106 = *(uint *)(&DAT_145db5660 + lVar13);
  uVar107 = *(uint *)(&DAT_145db5a60 + lVar12);
  uVar108 = *(uint *)(&DAT_145db5260 + lVar7);
  uVar109 = *(uint *)(&DAT_145db4e60 + lVar6);
  uVar110 = *(uint *)(&DAT_145db5660 + lVar2);
  uVar111 = *(uint *)(&DAT_145db5a60 + lVar10);
  uVar112 = *(uint *)(&DAT_145db5a60 + lVar5);
  uVar113 = *(uint *)(&DAT_145db5a60 + lVar8);
  uVar114 = *(uint *)(&DAT_145db5660 + lVar9);
  uVar196 = *(uint *)(&DAT_145db4e60 + lVar168) ^ *(uint *)(&DAT_145db5a60 + lVar13) ^
            *(uint *)(&DAT_145db5260 + lVar12) ^ uVar187 ^ uVar104 ^ uVar98;
  lVar168 = (ulonglong)(uVar196 >> 0x10 & 0xff) * 4;
  lVar2 = (ulonglong)(uVar196 >> 0x18) * 4;
  lVar3 = (ulonglong)(uVar196 >> 8 & 0xff) * 4;
  uVar187 = *(uint *)(&DAT_145db5260 + lVar3);
  lVar4 = (ulonglong)(uVar196 & 0xff) * 4;
  uVar198 = *(uint *)(&DAT_145db5660 + lVar168) ^ *(uint *)(&DAT_145db4e60 + lVar2) ^
            *(uint *)(&DAT_145db5a60 + lVar4) ^ *(uint *)(&DAT_145db5a60 + lVar9) ^ uVar180 ^
            uVar187;
  lVar5 = (ulonglong)(uVar198 >> 8 & 0xff) * 4;
  uVar180 = *(uint *)(&DAT_145db5260 + lVar5);
  lVar6 = (ulonglong)(uVar198 >> 0x10 & 0xff) * 4;
  lVar7 = (ulonglong)(uVar198 >> 0x18) * 4;
  lVar9 = (ulonglong)(uVar198 & 0xff) * 4;
  uVar115 = *(uint *)(&DAT_145db4e60 + lVar9);
  uVar189 = *(uint *)(&DAT_145db5660 + lVar6) ^ *(uint *)(&DAT_145db5a60 + lVar7) ^
            *(uint *)(&DAT_145db4e60 + lVar10) ^ uVar162 ^ uVar115 ^ uVar180;
  lVar10 = (ulonglong)(uVar189 & 0xff) * 4;
  lVar11 = (ulonglong)(uVar189 >> 8 & 0xff) * 4;
  lVar12 = (ulonglong)(uVar189 >> 0x10 & 0xff) * 4;
  lVar13 = (ulonglong)(uVar189 >> 0x18) * 4;
  uVar188 = *(uint *)(&DAT_145db5660 + lVar10) ^ *(uint *)(&DAT_145db4e60 + lVar11) ^
            *(uint *)(&DAT_145db5a60 + lVar13) ^ *(uint *)(&DAT_145db5260 + lVar12) ^
            *(uint *)(&DAT_145db5260 + lVar8) ^ uVar188;
  lVar8 = (ulonglong)(uVar188 >> 0x18) * 4;
  uVar162 = *(uint *)(&DAT_145db5a60 + (ulonglong)(uVar188 >> 0x10 & 0xff) * 4);
  uVar116 = *(uint *)(&DAT_145db4e60 + lVar4);
  uVar117 = *(uint *)(&DAT_145db4e60 + lVar12);
  uVar118 = *(uint *)(&DAT_145db5660 + lVar8);
  uVar119 = *(uint *)(&DAT_145db4e60 + lVar168);
  uVar120 = *(uint *)(&DAT_145db5660 + (ulonglong)(uVar188 >> 8 & 0xff) * 4);
  uVar121 = *(uint *)(&DAT_145db5a60 + (ulonglong)(uVar188 & 0xff) * 4);
  uVar122 = *(uint *)(&DAT_145db5260 + lVar2);
  uVar123 = *(uint *)(&DAT_145db5260 + lVar8);
  uVar124 = *(uint *)(&DAT_145db5660 + lVar13);
  uVar125 = *(uint *)(&DAT_145db4e60 + lVar6);
  uVar126 = *(uint *)(&DAT_145db5660 + lVar3);
  uVar127 = *(uint *)(&DAT_145db5a60 + lVar12);
  uVar128 = *(uint *)(&DAT_145db5a60 + lVar5);
  uVar129 = *(uint *)(&DAT_145db5a60 + lVar10);
  uVar130 = *(uint *)(&DAT_145db5660 + lVar11);
  uVar131 = *(uint *)(&DAT_145db5260 + lVar7);
  uVar189 = *(uint *)(&DAT_145db5260 + lVar9) ^ *(uint *)(&DAT_145db5660 + lVar7) ^
            *(uint *)(&DAT_145db5660 + lVar2) ^ uVar189 ^ uVar128 ^ uVar125;
  lVar168 = (ulonglong)(uVar189 & 0xff) * 4;
  lVar2 = (ulonglong)(uVar189 >> 8 & 0xff) * 4;
  lVar5 = (ulonglong)(uVar189 >> 0x18) * 4;
  uVar189 = *(uint *)(&DAT_145db5660 + (ulonglong)(uVar189 >> 0x10 & 0xff) * 4);
  uVar190 = *(uint *)(&DAT_145db4e60 + lVar5) ^ *(uint *)(&DAT_145db5260 + lVar2) ^
            *(uint *)(&DAT_145db5a60 + lVar168) ^ *(uint *)(&DAT_145db5a60 + lVar3) ^ uVar196 ^
            uVar189;
  lVar3 = (ulonglong)(uVar190 >> 8 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar190 & 0xff) * 4;
  uVar196 = *(uint *)(&DAT_145db5a60 + (ulonglong)(uVar190 >> 0x18) * 4);
  uVar190 = *(uint *)(&DAT_145db5660 + (ulonglong)(uVar190 >> 0x10 & 0xff) * 4);
  uVar198 = *(uint *)(&DAT_145db5260 + lVar3) ^ *(uint *)(&DAT_145db4e60 + lVar6) ^ uVar196 ^
            uVar190 ^ uVar119 ^ uVar198;
  lVar7 = (ulonglong)(uVar198 & 0xff) * 4;
  uVar132 = *(uint *)(&DAT_145db4e60 + (ulonglong)(uVar198 >> 8 & 0xff) * 4);
  uVar133 = *(uint *)(&DAT_145db5260 + (ulonglong)(uVar198 >> 0x10 & 0xff) * 4);
  lVar8 = (ulonglong)(uVar198 >> 0x18) * 4;
  uVar198 = *(uint *)(&DAT_145db5a60 + lVar3);
  uVar134 = *(uint *)(&DAT_145db5660 + lVar6);
  uVar181 = *(uint *)(&DAT_145db5260 + lVar4) ^ *(uint *)(&DAT_145db5660 + lVar7) ^
            *(uint *)(&DAT_145db5a60 + lVar8) ^ uVar188 ^ uVar133 ^ uVar132;
  uVar188 = *(uint *)(&DAT_145db4e60 + lVar168);
  uVar135 = *(uint *)(&DAT_145db4e60 + lVar8);
  uVar136 = *(uint *)(&DAT_145db5260 + lVar6);
  uVar137 = *(uint *)(&DAT_145db5260 + lVar7);
  lVar3 = (ulonglong)(uVar181 >> 0x10 & 0xff) * 4;
  uVar138 = *(uint *)(&DAT_145db4e60 + (ulonglong)(uVar181 >> 0x18) * 4);
  uVar139 = *(uint *)(&DAT_145db5260 + (ulonglong)(uVar181 & 0xff) * 4);
  uVar181 = *(uint *)(&DAT_145db4e60 + (ulonglong)(uVar181 >> 8 & 0xff) * 4);
  uVar140 = *(uint *)(&DAT_145db5a60 + lVar2);
  uVar141 = *(uint *)(&DAT_145db5660 + lVar168);
  uVar142 = *(uint *)(&DAT_145db5660 + lVar8);
  uVar143 = *(uint *)(&DAT_145db5260 + lVar3);
  uVar144 = *(uint *)(&DAT_145db5a60 + lVar5);
  uVar145 = *(uint *)(&DAT_145db5a60 + lVar3);
  *param_1 = *(uint *)(&DAT_145db4e60 + (ulonglong)(uVar193 >> 0x18) * 4) ^
             *(uint *)(&DAT_145db4e60 + uVar200 * 4) ^ *(uint *)(&DAT_145db5660 + uVar201 * 4) ^
             *(uint *)(&DAT_145db5260 + uVar174 * 4) ^ *(uint *)(&DAT_145db5a60 + uVar199 * 4);
  param_1[1] = (uVar186 ^ uVar84 ^ uVar85 ^ uVar170 ^ uVar83) - 0x10 & 0x1f;
  param_1[2] = uVar17 ^ uVar16 ^ uVar177 ^ uVar166 ^ uVar192;
  param_1[3] = (uVar86 ^ uVar82 ^ uVar197 ^ uVar80 ^ uVar81) - 0x10 & 0x1f;
  param_1[4] = uVar19 ^ uVar20 ^ uVar21 ^ uVar22 ^ uVar18;
  param_1[5] = (uVar88 ^ uVar89 ^ uVar90 ^ uVar91 ^ uVar87) - 0x10 & 0x1f;
  param_1[6] = uVar23 ^ uVar24 ^ uVar25 ^ uVar26 ^ uVar27;
  param_1[7] = (uVar92 ^ uVar93 ^ uVar94 ^ uVar95 ^ uVar96) - 0x10 & 0x1f;
  param_1[8] = uVar31 ^ uVar32 ^ uVar33 ^ uVar28 ^ uVar30;
  param_1[9] = (uVar99 ^ uVar100 ^ uVar101 ^ uVar167 ^ uVar98) - 0x10 & 0x1f;
  param_1[10] = uVar34 ^ uVar35 ^ uVar37 ^ uVar38 ^ uVar39;
  param_1[0xb] = (uVar102 ^ uVar103 ^ uVar105 ^ uVar106 ^ uVar107) - 0x10 & 0x1f;
  param_1[0xc] = uVar42 ^ uVar43 ^ uVar29 ^ uVar178 ^ uVar36;
  param_1[0xd] = (uVar110 ^ uVar111 ^ uVar97 ^ uVar179 ^ uVar104) - 0x10 & 0x1f;
  param_1[0xe] = uVar40 ^ uVar41 ^ uVar44 ^ uVar45 ^ uVar46;
  param_1[0xf] = (uVar108 ^ uVar109 ^ uVar112 ^ uVar113 ^ uVar114) - 0x10 & 0x1f;
  param_1[0x10] = uVar194 ^ uVar48 ^ uVar49 ^ uVar50 ^ uVar182;
  param_1[0x11] = (uVar162 ^ uVar116 ^ uVar117 ^ uVar118 ^ uVar187) - 0x10 & 0x1f;
  param_1[0x12] = uVar52 ^ uVar53 ^ uVar54 ^ uVar55 ^ uVar51;
  param_1[0x13] = (uVar120 ^ uVar121 ^ uVar122 ^ uVar123 ^ uVar119) - 0x10 & 0x1f;
  param_1[0x14] = uVar56 ^ uVar57 ^ uVar58 ^ uVar47 ^ uVar173;
  param_1[0x15] = (uVar124 ^ uVar126 ^ uVar127 ^ uVar115 ^ uVar180) - 0x10 & 0x1f;
  param_1[0x16] = uVar59 ^ uVar60 ^ uVar61 ^ uVar63 ^ uVar62;
  param_1[0x17] = (uVar129 ^ uVar130 ^ uVar131 ^ uVar128 ^ uVar125) - 0x10 & 0x1f;
  param_1[0x18] = uVar183 ^ uVar67 ^ uVar68 ^ uVar69 ^ uVar66;
  param_1[0x19] = (uVar198 ^ uVar134 ^ uVar188 ^ uVar135 ^ uVar133) - 0x10 & 0x1f;
  param_1[0x1a] = uVar71 ^ uVar65 ^ uVar64 ^ uVar195 ^ uVar70;
  param_1[0x1b] = (uVar136 ^ uVar137 ^ uVar132 ^ uVar196 ^ uVar190) - 0x10 & 0x1f;
  param_1[0x1c] = uVar73 ^ uVar74 ^ uVar75 ^ uVar76 ^ uVar72;
  param_1[0x1d] = (uVar138 ^ uVar140 ^ uVar141 ^ uVar142 ^ uVar143) - 0x10 & 0x1f;
  param_1[0x1e] = uVar185 ^ uVar78 ^ uVar79 ^ uVar184 ^ uVar77;
  param_1[0x1f] = (uVar139 ^ uVar181 ^ uVar144 ^ uVar145 ^ uVar189) - 0x10 & 0x1f;
  return;
}



// FUNCTION 143dabfb0 BF_ecb_encrypt body=195 status=ok
// SIG undefined BF_ecb_encrypt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BF_ecb_encrypt(byte *param_1,undefined1 *param_2,undefined8 param_3,int param_4)

{
  uint local_res8;
  uint local_resc;
  
  local_res8 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
               (uint)param_1[3];
  local_resc = (uint)CONCAT11(param_1[6],param_1[7]) |
               (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10;
  if (param_4 == 0) {
    FUN_143dac5a0(&local_res8,param_3);
  }
  else {
    FUN_143daca80();
  }
  *param_2 = (char)(local_res8 >> 0x18);
  param_2[1] = (char)(local_res8 >> 0x10);
  param_2[2] = (char)(local_res8 >> 8);
  param_2[3] = (undefined1)local_res8;
  param_2[4] = (char)(local_resc >> 0x18);
  param_2[5] = (char)(local_resc >> 0x10);
  param_2[6] = (char)(local_resc >> 8);
  param_2[7] = (undefined1)local_resc;
  return;
}



// FUNCTION 143dac080 FUN_143dac080 body=1243 status=ok
// SIG undefined FUN_143dac080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143dac080(byte *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,
                  undefined1 *param_5,int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  
  local_30 = (undefined1 *)0x143dac0a7;
  uVar11 = (uint)CONCAT11(*param_5,param_5[1]) << 0x10 | (uint)(byte)param_5[2] << 8 |
           (uint)(byte)param_5[3];
  uVar10 = (uint)(byte)param_5[4] << 0x18 | (uint)(byte)param_5[5] << 0x10 |
           (uint)(byte)param_5[6] << 8 | (uint)(byte)param_5[7];
  if (param_6 == 0) {
    iVar5 = param_3 - 8;
    local_30 = param_5;
    if (-1 < iVar5) {
      uVar8 = (ulonglong)(param_3 >> 3);
      iVar5 = iVar5 + (param_3 >> 3) * -8;
      uVar6 = uVar11;
      uVar7 = uVar10;
      do {
        uVar11 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                 (uint)param_1[3];
        uVar10 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[6] << 8 |
                 (uint)param_1[7];
        param_1 = param_1 + 8;
        local_38 = uVar11;
        local_34 = uVar10;
        FUN_143dac5a0(&local_38,param_4);
        local_38 = local_38 ^ uVar6;
        local_34 = local_34 ^ uVar7;
        *param_2 = (char)(local_38 >> 0x18);
        param_2[1] = (char)(local_38 >> 0x10);
        param_2[2] = (char)(local_38 >> 8);
        param_2[3] = (char)local_38;
        param_2[4] = (char)(local_34 >> 0x18);
        param_2[5] = (char)(local_34 >> 0x10);
        param_2[6] = (char)(local_34 >> 8);
        param_2[7] = (char)local_34;
        param_2 = param_2 + 8;
        uVar8 = uVar8 - 1;
        uVar6 = uVar11;
        uVar7 = uVar10;
      } while (uVar8 != 0);
    }
    param_5 = local_30;
    puVar9 = local_30;
    local_38 = uVar11;
    local_34 = uVar10;
    if (iVar5 != -8) {
      uVar7 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
              (uint)param_1[3];
      uVar6 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 |
              (uint)CONCAT11(param_1[6],param_1[7]);
      local_38 = uVar7;
      local_34 = uVar6;
      FUN_143dac5a0(&local_38,param_4);
      uVar11 = local_38 ^ uVar11;
      uVar10 = local_34 ^ uVar10;
      param_2 = param_2 + (iVar5 + 8);
      puVar9 = local_30;
      local_38 = uVar7;
      local_34 = uVar6;
      switch(iVar5) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)uVar10;
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 8);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 0x10);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 0x18);
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)uVar11;
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar11 >> 8);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar11 >> 0x10);
      case -7:
        param_2[-1] = (char)(uVar11 >> 0x18);
      }
    }
  }
  else {
    iVar5 = param_3 - 8;
    local_38 = uVar11;
    local_34 = uVar10;
    if (-1 < iVar5) {
      uVar8 = (ulonglong)(param_3 >> 3);
      iVar5 = iVar5 + (param_3 >> 3) * -8;
      do {
        pbVar1 = param_1 + 4;
        pbVar2 = param_1 + 5;
        local_38 = ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                   (uint)param_1[3]) ^ local_38;
        pbVar3 = param_1 + 6;
        pbVar4 = param_1 + 7;
        param_1 = param_1 + 8;
        local_34 = ((uint)*pbVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 |
                   (uint)*pbVar4) ^ local_34;
        FUN_143daca80(&local_38,param_4);
        *param_2 = (char)(local_38 >> 0x18);
        param_2[1] = (char)(local_38 >> 0x10);
        param_2[2] = (char)(local_38 >> 8);
        param_2[3] = (char)local_38;
        param_2[4] = (char)(local_34 >> 0x18);
        param_2[5] = (char)(local_34 >> 0x10);
        param_2[6] = (char)(local_34 >> 8);
        param_2[7] = (char)local_34;
        param_2 = param_2 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar9 = param_5;
    if (iVar5 != -8) {
      param_1 = param_1 + (iVar5 + 8);
      uVar11 = 0;
      uVar10 = 0;
      switch(iVar5) {
      case 0:
        uVar11 = (uint)param_1[-1];
        param_1 = param_1 + -1;
      case -1:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar11 = uVar11 | (uint)*pbVar1 << 8;
      case -2:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar11 = uVar11 | (uint)*pbVar1 << 0x10;
      case -3:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar11 = uVar11 | (uint)*pbVar1 << 0x18;
      case -4:
        uVar10 = (uint)param_1[-1];
        param_1 = param_1 + -1;
      case -5:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar10 = uVar10 | (uint)*pbVar1 << 8;
      case -6:
        pbVar1 = param_1 + -1;
        param_1 = param_1 + -1;
        uVar10 = uVar10 | (uint)*pbVar1 << 0x10;
      case -7:
        uVar10 = uVar10 | (uint)param_1[-1] << 0x18;
      default:
        local_38 = uVar10 ^ local_38;
        local_34 = uVar11 ^ local_34;
        FUN_143daca80(&local_38,param_4);
        *param_2 = (char)(local_38 >> 0x18);
        param_2[1] = (char)(local_38 >> 0x10);
        param_2[2] = (char)(local_38 >> 8);
        param_2[3] = (char)local_38;
        param_2[4] = (char)(local_34 >> 0x18);
        param_2[5] = (char)(local_34 >> 0x10);
        param_2[6] = (char)(local_34 >> 8);
        param_2[7] = (char)local_34;
      }
    }
  }
  *puVar9 = (char)(local_38 >> 0x18);
  param_5[1] = (char)(local_38 >> 0x10);
  param_5[2] = (char)(local_38 >> 8);
  param_5[3] = (char)local_38;
  param_5[4] = (char)(local_34 >> 0x18);
  param_5[5] = (char)(local_34 >> 0x10);
  param_5[6] = (char)(local_34 >> 8);
  param_5[7] = (char)local_34;
  return;
}



// FUNCTION 143dac5a0 FUN_143dac5a0 body=1241 status=ok
// SIG undefined FUN_143dac5a0(void)

void FUN_143dac5a0(uint *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar2 = param_1[1];
  if (param_2[0x20] == 0) {
    bVar1 = (byte)param_2[0x1f] & 0x1f;
    uVar3 = param_2[0x1e] + uVar2 << bVar1 | param_2[0x1e] + uVar2 >> 0x20 - bVar1;
    uVar4 = uVar4 ^ ((*(uint *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
                     *(uint *)(&DAT_145db4260 + (ulonglong)(uVar3 & 0xff) * 4)) +
                    *(int *)(&DAT_145db4a60 + (ulonglong)(byte)(uVar3 >> 0x10) * 4)) -
                    *(int *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4);
    uVar3 = param_2[0x1c] - uVar4;
    bVar1 = (byte)param_2[0x1d] & 0x1f;
    uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
    uVar2 = uVar2 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) +
                     *(int *)(&DAT_145db4260 + ((ulonglong)uVar3 & 0xff) * 4) ^
                    *(uint *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4)) -
                    *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
    uVar3 = param_2[0x1a] ^ uVar2;
    bVar1 = (byte)param_2[0x1b] & 0x1f;
    uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
    uVar4 = uVar4 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) -
                    *(int *)(&DAT_145db4260 + ((ulonglong)uVar3 & 0xff) * 4)) +
                    *(int *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                    *(uint *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
    bVar1 = (byte)param_2[0x19] & 0x1f;
    uVar3 = param_2[0x18] + uVar4 << bVar1 | param_2[0x18] + uVar4 >> 0x20 - bVar1;
    uVar2 = uVar2 ^ ((*(uint *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
                     *(uint *)(&DAT_145db4260 + (ulonglong)(uVar3 & 0xff) * 4)) +
                    *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4)) -
                    *(int *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4);
  }
  bVar1 = (byte)param_2[0x17] & 0x1f;
  uVar3 = param_2[0x16] - uVar2 << bVar1 | param_2[0x16] - uVar2 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) +
                   *(int *)(&DAT_145db4260 + ((ulonglong)uVar3 & 0xff) * 4) ^
                  *(uint *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4)) -
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[0x14] ^ uVar4;
  bVar1 = (byte)param_2[0x15] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar2 = uVar2 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) -
                  *(int *)(&DAT_145db4260 + ((ulonglong)uVar3 & 0xff) * 4)) +
                  *(int *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                  *(uint *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[0x12] + uVar2;
  bVar1 = (byte)param_2[0x13] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ ((*(uint *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
                   *(uint *)(&DAT_145db4260 + (ulonglong)(uVar3 & 0xff) * 4)) +
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4)) -
                  *(int *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_2[0x10] - uVar4;
  bVar1 = (byte)param_2[0x11] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar2 = uVar2 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) +
                   *(int *)(&DAT_145db4260 + ((ulonglong)uVar3 & 0xff) * 4) ^
                  *(uint *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4)) -
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[0xe] ^ uVar2;
  bVar1 = (byte)param_2[0xf] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) -
                  *(int *)(&DAT_145db4260 + ((ulonglong)uVar3 & 0xff) * 4)) +
                  *(int *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                  *(uint *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[0xc] + uVar4;
  bVar1 = (byte)param_2[0xd] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar2 = uVar2 ^ ((*(uint *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
                   *(uint *)(&DAT_145db4260 + (ulonglong)(uVar3 & 0xff) * 4)) +
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4)) -
                  *(int *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_2[10] - uVar2;
  bVar1 = (byte)param_2[0xb] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) +
                   *(int *)(&DAT_145db4260 + ((ulonglong)uVar3 & 0xff) * 4) ^
                  *(uint *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4)) -
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[8] ^ uVar4;
  bVar1 = (byte)param_2[9] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar2 = uVar2 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) -
                  *(int *)(&DAT_145db4260 + ((ulonglong)uVar3 & 0xff) * 4)) +
                  *(int *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                  *(uint *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[6] + uVar2;
  bVar1 = (byte)param_2[7] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ ((*(uint *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
                   *(uint *)(&DAT_145db4260 + (ulonglong)(uVar3 & 0xff) * 4)) +
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4)) -
                  *(int *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_2[4] - uVar4;
  bVar1 = (byte)param_2[5] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar2 = uVar2 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) +
                   *(int *)(&DAT_145db4260 + ((ulonglong)uVar3 & 0xff) * 4) ^
                  *(uint *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4)) -
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[2] ^ uVar2;
  bVar1 = (byte)param_2[3] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4) -
                  *(int *)(&DAT_145db4260 + ((ulonglong)uVar3 & 0xff) * 4)) +
                  *(int *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                  *(uint *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = *param_2 + uVar4;
  bVar1 = (byte)param_2[1] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  *param_1 = ((*(uint *)(&DAT_145db4260 + (ulonglong)(uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar3 >> 8) * 4)) -
             *(int *)(&DAT_145db4660 + (ulonglong)(uVar3 >> 0x18) * 4)) +
             *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4) ^ uVar2;
  param_1[1] = uVar4;
  return;
}



// FUNCTION 143daca80 FUN_143daca80 body=1217 status=ok
// SIG undefined FUN_143daca80(void)

void FUN_143daca80(uint *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *param_2 + param_1[1];
  bVar1 = (byte)param_2[1] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = ((*(uint *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
           *(uint *)(&DAT_145db4260 + ((ulonglong)uVar2 & 0xff) * 4)) +
          *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4)) -
          *(int *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4) ^ *param_1;
  uVar2 = param_2[2] ^ uVar3;
  bVar1 = (byte)param_2[3] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = param_1[1] ^
          (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) -
          *(int *)(&DAT_145db4260 + ((ulonglong)uVar2 & 0xff) * 4)) +
          *(int *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  uVar2 = param_2[4] - uVar4;
  bVar1 = (byte)param_2[5] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = uVar3 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) +
                   *(int *)(&DAT_145db4260 + ((ulonglong)uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4)) -
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  uVar2 = param_2[6] + uVar3;
  bVar1 = (byte)param_2[7] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ ((*(uint *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
                   *(uint *)(&DAT_145db4260 + (ulonglong)(uVar2 & 0xff) * 4)) +
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4)) -
                  *(int *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4);
  uVar2 = param_2[8] ^ uVar4;
  bVar1 = (byte)param_2[9] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = uVar3 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) -
                  *(int *)(&DAT_145db4260 + ((ulonglong)uVar2 & 0xff) * 4)) +
                  *(int *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4) ^
                  *(uint *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  uVar2 = param_2[10] - uVar3;
  bVar1 = (byte)param_2[0xb] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) +
                   *(int *)(&DAT_145db4260 + ((ulonglong)uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4)) -
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  uVar2 = param_2[0xc] + uVar4;
  bVar1 = (byte)param_2[0xd] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = uVar3 ^ ((*(uint *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
                   *(uint *)(&DAT_145db4260 + (ulonglong)(uVar2 & 0xff) * 4)) +
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4)) -
                  *(int *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4);
  uVar2 = param_2[0xe] ^ uVar3;
  bVar1 = (byte)param_2[0xf] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) -
                  *(int *)(&DAT_145db4260 + ((ulonglong)uVar2 & 0xff) * 4)) +
                  *(int *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4) ^
                  *(uint *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  uVar2 = param_2[0x10] - uVar4;
  bVar1 = (byte)param_2[0x11] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = uVar3 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) +
                   *(int *)(&DAT_145db4260 + ((ulonglong)uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4)) -
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  uVar2 = param_2[0x12] + uVar3;
  bVar1 = (byte)param_2[0x13] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ ((*(uint *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
                   *(uint *)(&DAT_145db4260 + (ulonglong)(uVar2 & 0xff) * 4)) +
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4)) -
                  *(int *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4);
  uVar2 = param_2[0x14] ^ uVar4;
  bVar1 = (byte)param_2[0x15] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = uVar3 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) -
                  *(int *)(&DAT_145db4260 + ((ulonglong)uVar2 & 0xff) * 4)) +
                  *(int *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4) ^
                  *(uint *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  bVar1 = (byte)param_2[0x17] & 0x1f;
  uVar2 = param_2[0x16] - uVar3 << bVar1 | param_2[0x16] - uVar3 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) +
                   *(int *)(&DAT_145db4260 + ((ulonglong)uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4)) -
                  *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  if (param_2[0x20] == 0) {
    bVar1 = (byte)param_2[0x19] & 0x1f;
    uVar2 = param_2[0x18] + uVar4 << bVar1 | param_2[0x18] + uVar4 >> 0x20 - bVar1;
    uVar3 = uVar3 ^ ((*(uint *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
                     *(uint *)(&DAT_145db4260 + (ulonglong)(uVar2 & 0xff) * 4)) +
                    *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4)) -
                    *(int *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4);
    uVar2 = param_2[0x1a] ^ uVar3;
    bVar1 = (byte)param_2[0x1b] & 0x1f;
    uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
    uVar4 = uVar4 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) -
                    *(int *)(&DAT_145db4260 + ((ulonglong)uVar2 & 0xff) * 4)) +
                    *(int *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4) ^
                    *(uint *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
    uVar2 = param_2[0x1c] - uVar4;
    bVar1 = (byte)param_2[0x1d] & 0x1f;
    uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
    uVar3 = uVar3 ^ (*(int *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) +
                     *(int *)(&DAT_145db4260 + ((ulonglong)uVar2 & 0xff) * 4) ^
                    *(uint *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4)) -
                    *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
    bVar1 = (byte)param_2[0x1f] & 0x1f;
    uVar2 = param_2[0x1e] + uVar3 << bVar1 | param_2[0x1e] + uVar3 >> 0x20 - bVar1;
    uVar4 = uVar4 ^ ((*(uint *)(&DAT_145db3e60 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
                     *(uint *)(&DAT_145db4260 + (ulonglong)(uVar2 & 0xff) * 4)) +
                    *(int *)(&DAT_145db4a60 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4)) -
                    *(int *)(&DAT_145db4660 + (ulonglong)(uVar2 >> 0x18) * 4);
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  return;
}



// FUNCTION 143dacf50 FUN_143dacf50 body=546 status=ok
// SIG undefined FUN_143dacf50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143dacf50(byte *param_1,byte *param_2,int param_3,undefined8 param_4,undefined1 *param_5,
                  uint *param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar4 = param_6;
  puVar3 = param_5;
  uVar5 = *param_6;
  if (param_3 != 0) {
    if (param_7 == 0) {
      do {
        if (uVar5 == 0) {
          param_5._0_4_ =
               (uint)CONCAT11(*puVar3,puVar3[1]) << 0x10 | (uint)(byte)puVar3[2] << 8 |
               (uint)(byte)puVar3[3];
          param_5._4_4_ =
               (uint)CONCAT11(puVar3[6],puVar3[7]) |
               (uint)(byte)puVar3[4] << 0x18 | (uint)(byte)puVar3[5] << 0x10;
          FUN_143daca80(&param_5,param_4);
          *puVar3 = (char)((uint)param_5 >> 0x18);
          puVar3[1] = (char)((uint)param_5 >> 0x10);
          puVar3[2] = (char)((uint)param_5 >> 8);
          puVar3[3] = param_5._0_1_;
          puVar3[4] = (char)(param_5._4_4_ >> 0x18);
          puVar3[5] = (char)(param_5._4_4_ >> 0x10);
          puVar3[6] = (char)(param_5._4_4_ >> 8);
          puVar3[7] = param_5._4_1_;
        }
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        bVar2 = puVar3[(int)uVar5];
        puVar3[(int)uVar5] = bVar1;
        *param_2 = bVar1 ^ bVar2;
        param_2 = param_2 + 1;
        uVar5 = uVar5 + 1 & 7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    else {
      lVar6 = (longlong)param_1 - (longlong)param_2;
      do {
        if (uVar5 == 0) {
          param_5._0_4_ =
               (uint)CONCAT11(*puVar3,puVar3[1]) << 0x10 | (uint)(byte)puVar3[2] << 8 |
               (uint)(byte)puVar3[3];
          param_5._4_4_ =
               (uint)CONCAT11(puVar3[6],puVar3[7]) |
               (uint)(byte)puVar3[4] << 0x18 | (uint)(byte)puVar3[5] << 0x10;
          FUN_143daca80(&param_5,param_4);
          *puVar3 = (char)((uint)param_5 >> 0x18);
          puVar3[1] = (char)((uint)param_5 >> 0x10);
          puVar3[2] = (char)((uint)param_5 >> 8);
          puVar3[3] = param_5._0_1_;
          puVar3[4] = (char)(param_5._4_4_ >> 0x18);
          puVar3[5] = (char)(param_5._4_4_ >> 0x10);
          puVar3[6] = (char)(param_5._4_4_ >> 8);
          puVar3[7] = param_5._4_1_;
        }
        bVar1 = param_2[lVar6];
        bVar2 = puVar3[(int)uVar5];
        *param_2 = bVar1 ^ bVar2;
        param_2 = param_2 + 1;
        puVar3[(int)uVar5] = bVar1 ^ bVar2;
        uVar5 = uVar5 + 1 & 7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  *puVar4 = uVar5;
  return;
}



// FUNCTION 143dad180 FUN_143dad180 body=492 status=ok
// SIG undefined FUN_143dad180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143dad180(byte *param_1,longlong param_2,int param_3,undefined8 param_4,byte *param_5,
                  uint *param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_64;
  undefined8 local_60;
  uint *local_58;
  byte *local_50;
  byte local_48 [4];
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_50 = param_5;
  iVar6 = 0;
  local_48[1] = param_5[1];
  uVar2 = *param_6;
  uVar4 = (uint)param_5[3];
  uVar5 = (uint)*param_5 << 0x18 | (uint)local_48[1] << 0x10 | (uint)param_5[2] << 8 | uVar4;
  local_58 = param_6;
  uVar1 = (uint)CONCAT11(param_5[6],param_5[7]);
  local_64 = (uint)param_5[4] << 0x18 | (uint)param_5[5] << 0x10 | uVar1;
  uVar3 = (ulonglong)local_64;
  local_48[3] = param_5[3];
  local_48[0] = *param_5;
  local_48[2] = param_5[2];
  local_44 = param_5[4];
  local_43 = param_5[5];
  local_42 = param_5[6];
  local_41 = param_5[7];
  if (param_3 != 0) {
    param_2 = param_2 - (longlong)param_1;
    uVar1 = uVar1 & 0xff;
    local_68 = uVar5;
    local_60 = param_4;
    do {
      param_3 = param_3 + -1;
      if (uVar2 == 0) {
        FUN_143daca80(&local_68,param_4);
        uVar3 = (ulonglong)local_64;
        uVar4 = local_68 & 0xff;
        uVar1 = local_64 & 0xff;
        local_48[0] = (byte)(local_68 >> 0x18);
        local_48[1] = (byte)(local_68 >> 0x10);
        local_48[2] = (byte)(local_68 >> 8);
        local_44 = (byte)(local_64 >> 0x18);
        local_43 = (byte)(local_64 >> 0x10);
        local_42 = (byte)(local_64 >> 8);
        iVar6 = iVar6 + 1;
        local_48[3] = (byte)local_68;
        local_41 = (byte)local_64;
        uVar5 = local_68;
      }
      param_1[param_2] = local_48[(int)uVar2] ^ *param_1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 + 1 & 7;
    } while (param_3 != 0);
    param_6 = local_58;
    if (iVar6 != 0) {
      *local_50 = (byte)(uVar5 >> 0x18);
      param_5[1] = (byte)(uVar5 >> 0x10);
      param_5[2] = (byte)(uVar5 >> 8);
      param_5[3] = (byte)uVar4;
      param_5[4] = (byte)(uVar3 >> 0x18);
      param_5[5] = (byte)(uVar3 >> 0x10);
      param_5[6] = (byte)(uVar3 >> 8);
      param_5[7] = (byte)uVar1;
    }
  }
  *param_6 = uVar2;
  return;
}



// FUNCTION 143dad370 FUN_143dad370 body=3483 status=ok
// SIG undefined FUN_143dad370(void)

void FUN_143dad370(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  ushort uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
  uVar4 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
  uVar3 = param_3[0x1f] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar7 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar7 = ((uint)(uVar2 >> 6) | uVar7 << 0x12) ^ (uVar7 << 10 | (uint)(uVar1 >> 6)) ^
          ((uint)uVar2 | uVar7 << 0x18) ^
          (uVar7 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^
          CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ uVar7;
  uVar3 = param_3[0x1e] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar5 = uVar5 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1d] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar6 = uVar6 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1c] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar4 = uVar4 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1b] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x1a] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x19] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x18] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x17] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x16] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x15] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x14] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x13] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x12] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x11] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x10] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xf] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xe] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xd] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xc] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xb] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[10] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[9] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[8] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[7] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[6] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[5] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[4] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[3] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar7 = uVar7 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[2] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar5 = uVar5 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[1] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar6 = uVar6 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = *param_3 ^ uVar6 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar4 = uVar4 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  *param_2 = (char)(uVar4 >> 0x18);
  param_2[1] = (char)(uVar4 >> 0x10);
  param_2[2] = (char)(uVar4 >> 8);
  param_2[3] = (char)uVar4;
  param_2[4] = (char)(uVar6 >> 0x18);
  param_2[5] = (char)(uVar6 >> 0x10);
  param_2[6] = (char)(uVar6 >> 8);
  param_2[7] = (char)uVar6;
  param_2[8] = (char)(uVar5 >> 0x18);
  param_2[9] = (char)(uVar5 >> 0x10);
  param_2[10] = (char)(uVar5 >> 8);
  param_2[0xb] = (char)uVar5;
  param_2[0xc] = (char)(uVar7 >> 0x18);
  param_2[0xd] = (char)(uVar7 >> 0x10);
  param_2[0xe] = (char)(uVar7 >> 8);
  param_2[0xf] = (char)uVar7;
  return;
}



// FUNCTION 143dae110 FUN_143dae110 body=3483 status=ok
// SIG undefined FUN_143dae110(void)

void FUN_143dae110(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  ushort uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
  uVar4 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
  uVar3 = *param_3 ^ uVar4 ^ uVar6 ^ uVar5;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar7 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar7 = ((uint)(uVar2 >> 6) | uVar7 << 0x12) ^ (uVar7 << 10 | (uint)(uVar1 >> 6)) ^
          ((uint)uVar2 | uVar7 << 0x18) ^
          (uVar7 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^
          CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ uVar7;
  uVar3 = param_3[1] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar5 = uVar5 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[2] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar6 = uVar6 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[3] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar4 = uVar4 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[4] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[5] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[6] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[7] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[8] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[9] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[10] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xb] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xc] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xd] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xe] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xf] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x10] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x11] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x12] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x13] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x14] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x15] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x16] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x17] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x18] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x19] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x1a] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x1b] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_145db5f60 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x1c] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar7 = uVar7 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1d] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar5 = uVar5 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1e] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar6 = uVar6 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1f] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_145db5e60)[uVar3 >> 0x18],(&DAT_145db5e60)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_145db5e60)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_145db5e60)[uVar3 & 0xff]);
  uVar4 = uVar4 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_145db5e60)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  *param_2 = (char)(uVar4 >> 0x18);
  param_2[1] = (char)(uVar4 >> 0x10);
  param_2[2] = (char)(uVar4 >> 8);
  param_2[3] = (char)uVar4;
  param_2[4] = (char)(uVar6 >> 0x18);
  param_2[5] = (char)(uVar6 >> 0x10);
  param_2[6] = (char)(uVar6 >> 8);
  param_2[7] = (char)uVar6;
  param_2[8] = (char)(uVar5 >> 0x18);
  param_2[9] = (char)(uVar5 >> 0x10);
  param_2[10] = (char)(uVar5 >> 8);
  param_2[0xb] = (char)uVar5;
  param_2[0xc] = (char)(uVar7 >> 0x18);
  param_2[0xd] = (char)(uVar7 >> 0x10);
  param_2[0xe] = (char)(uVar7 >> 8);
  param_2[0xf] = (char)uVar7;
  return;
}



// FUNCTION 143daeeb0 SM4_set_key body=946 status=ok
// SIG undefined SM4_set_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int SM4_set_key(undefined1 *param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint local_48 [4];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143daeecc;
  local_38 = DAT_1468387a8 ^ (ulonglong)local_48;
  puVar10 = (uint *)(param_2 + 4);
  local_48[0] = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ 0xa3b1bac6
  ;
  local_48[1] = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]) ^
                0x56aa3350;
  local_48[2] = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]) ^
                0x677d9197;
  local_48[3] = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]) ^
                0xb27022dc;
  uVar4 = 2;
  do {
    uVar9 = uVar4;
    uVar4 = uVar9 + 1 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    puVar1 = local_48 + (int)uVar4;
    uVar4 = uVar9 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    puVar2 = local_48 + (int)uVar4;
    uVar4 = uVar9 - 1 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    uVar6 = *(uint *)((longlong)&UNK_145db636c + -param_2 + (longlong)puVar10) ^ *puVar1 ^ *puVar2 ^
            local_48[(int)uVar4];
    uVar3 = CONCAT21(CONCAT11((&DAT_145db5e60)[uVar6 >> 0x18],(&DAT_145db5e60)[uVar6 >> 0x10 & 0xff]
                             ),(&DAT_145db5e60)[uVar6 >> 8 & 0xff]);
    uVar8 = CONCAT31(uVar3,(&DAT_145db5e60)[uVar6 & 0xff]);
    uVar5 = uVar9 - 2 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    uVar8 = (uVar8 << 0xd |
            (uint)(ushort)(CONCAT11((&DAT_145db5e60)[uVar6 >> 0x18],
                                    (&DAT_145db5e60)[uVar6 >> 0x10 & 0xff]) >> 3)) ^
            ((uint)(uVar3 >> 1) | uVar8 << 0x17) ^ local_48[(int)uVar5] ^ uVar8;
    local_48[(int)uVar5] = uVar8;
    puVar10[-1] = uVar8;
    uVar5 = uVar9 + 2 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    uVar8 = *(uint *)((longlong)&DAT_145db6370 + -param_2 + (longlong)puVar10) ^
            local_48[(int)uVar5] ^ *puVar1 ^ *puVar2;
    uVar3 = CONCAT21(CONCAT11((&DAT_145db5e60)[uVar8 >> 0x18],(&DAT_145db5e60)[uVar8 >> 0x10 & 0xff]
                             ),(&DAT_145db5e60)[uVar8 >> 8 & 0xff]);
    uVar6 = CONCAT31(uVar3,(&DAT_145db5e60)[uVar8 & 0xff]);
    uVar6 = (uVar6 << 0xd |
            (uint)(ushort)(CONCAT11((&DAT_145db5e60)[uVar8 >> 0x18],
                                    (&DAT_145db5e60)[uVar8 >> 0x10 & 0xff]) >> 3)) ^
            ((uint)(uVar3 >> 1) | uVar6 << 0x17) ^ local_48[(int)uVar4] ^ uVar6;
    local_48[(int)uVar4] = uVar6;
    *puVar10 = uVar6;
    uVar6 = uVar9 + 3 & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    uVar4 = uVar9 + 4;
    uVar7 = *(uint *)(((longlong)&DAT_145db6374 - param_2) + (longlong)puVar10) ^
            local_48[(int)uVar5] ^ local_48[(int)uVar6] ^ *puVar1;
    uVar3 = CONCAT21(CONCAT11((&DAT_145db5e60)[uVar7 >> 0x18],(&DAT_145db5e60)[uVar7 >> 0x10 & 0xff]
                             ),(&DAT_145db5e60)[uVar7 >> 8 & 0xff]);
    uVar8 = CONCAT31(uVar3,(&DAT_145db5e60)[uVar7 & 0xff]);
    uVar8 = (uVar8 << 0xd |
            (uint)(ushort)(CONCAT11((&DAT_145db5e60)[uVar7 >> 0x18],
                                    (&DAT_145db5e60)[uVar7 >> 0x10 & 0xff]) >> 3)) ^
            ((uint)(uVar3 >> 1) | uVar8 << 0x17) ^ *puVar2 ^ uVar8;
    *puVar2 = uVar8;
    puVar10[1] = uVar8;
    uVar8 = uVar4 & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    uVar6 = local_48[(int)uVar8] ^
            *(uint *)((longlong)puVar10 + ((longlong)&DAT_145db6378 - param_2)) ^
            local_48[(int)uVar5] ^ local_48[(int)uVar6];
    uVar3 = CONCAT21(CONCAT11((&DAT_145db5e60)[uVar6 >> 0x18],(&DAT_145db5e60)[uVar6 >> 0x10 & 0xff]
                             ),(&DAT_145db5e60)[uVar6 >> 8 & 0xff]);
    uVar5 = CONCAT31(uVar3,(&DAT_145db5e60)[uVar6 & 0xff]);
    uVar5 = (uVar5 << 0xd |
            (uint)(ushort)(CONCAT11((&DAT_145db5e60)[uVar6 >> 0x18],
                                    (&DAT_145db5e60)[uVar6 >> 0x10 & 0xff]) >> 3)) ^
            ((uint)(uVar3 >> 1) | uVar5 << 0x17) ^ *puVar1 ^ uVar5;
    puVar10[2] = uVar5;
    puVar10 = puVar10 + 4;
    *puVar1 = uVar5;
  } while (uVar4 != 0x22);
  return uVar9 - 0x1d;
}



// FUNCTION 143daf270 MD4_Final body=356 status=ok
// SIG undefined MD4_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 MD4_Final(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x16];
  puVar1 = param_2 + 6;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    md4_block_data_order(param_2,puVar1,1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_2 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(undefined1 *)((longlong)param_2 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x12);
  *(undefined1 *)((longlong)param_2 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x13);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_2 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined1 *)((longlong)param_2 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x17);
  md4_block_data_order(param_2,puVar1,1);
  param_2[0x16] = 0;
  FUN_14004ff40(puVar1,0x40);
  uVar3 = *param_2;
  *param_1 = (char)uVar3;
  param_1[1] = (char)((uint)uVar3 >> 8);
  param_1[2] = (char)((uint)uVar3 >> 0x10);
  param_1[3] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[1];
  param_1[4] = (char)uVar3;
  param_1[5] = (char)((uint)uVar3 >> 8);
  param_1[6] = (char)((uint)uVar3 >> 0x10);
  param_1[7] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[2];
  param_1[8] = (char)uVar3;
  param_1[9] = (char)((uint)uVar3 >> 8);
  param_1[10] = (char)((uint)uVar3 >> 0x10);
  param_1[0xb] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[3];
  param_1[0xc] = (char)uVar3;
  param_1[0xd] = (char)((uint)uVar3 >> 8);
  param_1[0xe] = (char)((uint)uVar3 >> 0x10);
  param_1[0xf] = (char)((uint)uVar3 >> 0x18);
  return 1;
}



// FUNCTION 143daf3e0 MD4_Update body=307 status=ok
// SIG undefined MD4_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 MD4_Update(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    uVar3 = *(uint *)(param_1 + 0x10) + (int)param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x10)) {
      iVar2 = iVar2 + 1;
    }
    *(uint *)(param_1 + 0x10) = uVar3;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x58);
    *(int *)(param_1 + 0x14) = (int)(param_3 >> 0x1d) + iVar2;
    if (uVar4 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x18);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar4;
      _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),param_2,_Size);
      md4_block_data_order(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x58) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    uVar4 = param_3 >> 6;
    if (uVar4 != 0) {
      md4_block_data_order(param_1,param_2,uVar4);
      param_2 = (void *)((longlong)param_2 + uVar4 * 0x40);
      param_3 = param_3 + uVar4 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x58) = (int)param_3;
      _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x18),param_2,param_3);
    }
  }
  return 1;
}



// FUNCTION 143daf520 md4_block_data_order body=2033 status=ok
// SIG undefined md4_block_data_order(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void md4_block_data_order(int *param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
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
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  
  if (param_3 != 0) {
    uVar25 = param_1[1];
    uVar19 = param_1[2];
    uVar20 = param_1[3];
    iVar21 = *param_1;
    do {
      param_3 = param_3 + -1;
      iVar5 = *param_2;
      uVar18 = ((uVar20 ^ uVar19) & uVar25 ^ uVar20) + iVar5 + iVar21;
      iVar6 = param_2[1];
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar22 = ((uVar19 ^ uVar25) & uVar18 ^ uVar19) + iVar6 + uVar20;
      iVar7 = param_2[2];
      uVar22 = uVar22 * 0x80 | uVar22 >> 0x19;
      uVar23 = ((uVar25 ^ uVar18) & uVar22 ^ uVar25) + iVar7 + uVar19;
      iVar8 = param_2[3];
      uVar24 = uVar23 * 0x800 | uVar23 >> 0x15;
      iVar9 = param_2[4];
      uVar23 = ((uVar22 ^ uVar18) & uVar24 ^ uVar18) + iVar8 + uVar25;
      uVar23 = uVar23 >> 0xd | uVar23 * 0x80000;
      iVar21 = param_2[5];
      uVar18 = ((uVar22 ^ uVar24) & uVar23 ^ uVar22) + iVar9 + uVar18;
      uVar26 = uVar18 * 8 | uVar18 >> 0x1d;
      iVar10 = param_2[6];
      uVar22 = ((uVar24 ^ uVar23) & uVar26 ^ uVar24) + iVar21 + uVar22;
      uVar18 = uVar22 * 0x80 | uVar22 >> 0x19;
      uVar24 = ((uVar23 ^ uVar26) & uVar18 ^ uVar23) + iVar10 + uVar24;
      iVar11 = param_2[7];
      uVar24 = uVar24 * 0x800 | uVar24 >> 0x15;
      uVar23 = ((uVar18 ^ uVar26) & uVar24 ^ uVar26) + iVar11 + uVar23;
      uVar22 = uVar23 >> 0xd | uVar23 * 0x80000;
      iVar12 = param_2[8];
      iVar13 = param_2[9];
      uVar26 = ((uVar18 ^ uVar24) & uVar22 ^ uVar18) + iVar12 + uVar26;
      uVar23 = uVar26 * 8 | uVar26 >> 0x1d;
      iVar14 = param_2[10];
      uVar18 = ((uVar24 ^ uVar22) & uVar23 ^ uVar24) + iVar13 + uVar18;
      uVar26 = uVar18 * 0x80 | uVar18 >> 0x19;
      iVar15 = param_2[0xb];
      uVar24 = ((uVar22 ^ uVar23) & uVar26 ^ uVar22) + iVar14 + uVar24;
      uVar24 = uVar24 * 0x800 | uVar24 >> 0x15;
      iVar16 = param_2[0xc];
      uVar22 = ((uVar26 ^ uVar23) & uVar24 ^ uVar23) + iVar15 + uVar22;
      uVar18 = uVar22 >> 0xd | uVar22 * 0x80000;
      uVar23 = ((uVar26 ^ uVar24) & uVar18 ^ uVar26) + iVar16 + uVar23;
      iVar17 = param_2[0xd];
      uVar22 = uVar23 * 8 | uVar23 >> 0x1d;
      piVar1 = param_2 + 0xe;
      piVar2 = param_2 + 0xf;
      param_2 = param_2 + 0x10;
      uVar26 = ((uVar24 ^ uVar18) & uVar22 ^ uVar24) + iVar17 + uVar26;
      uVar23 = uVar26 * 0x80 | uVar26 >> 0x19;
      iVar3 = *piVar1;
      uVar24 = ((uVar18 ^ uVar22) & uVar23 ^ uVar18) + iVar3 + uVar24;
      uVar24 = uVar24 * 0x800 | uVar24 >> 0x15;
      iVar4 = *piVar2;
      uVar18 = ((uVar23 ^ uVar22) & uVar24 ^ uVar22) + iVar4 + uVar18;
      uVar18 = uVar18 >> 0xd | uVar18 * 0x80000;
      uVar22 = uVar22 + 0x5a827999 + ((uVar24 | uVar18) & uVar23 | uVar24 & uVar18) + iVar5;
      uVar22 = uVar22 * 8 | uVar22 >> 0x1d;
      uVar23 = uVar23 + ((uVar18 | uVar22) & uVar24 | uVar18 & uVar22) + 0x5a827999 + iVar9;
      uVar23 = uVar23 * 0x20 | uVar23 >> 0x1b;
      uVar24 = uVar24 + ((uVar18 | uVar22) & uVar23 | uVar18 & uVar22) + 0x5a827999 + iVar12;
      uVar26 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar18 = uVar18 + ((uVar26 | uVar22) & uVar23 | uVar26 & uVar22) + 0x5a827999 + iVar16;
      uVar18 = uVar18 * 0x2000 | uVar18 >> 0x13;
      uVar22 = uVar22 + ((uVar26 | uVar18) & uVar23 | uVar26 & uVar18) + 0x5a827999 + iVar6;
      uVar22 = uVar22 * 8 | uVar22 >> 0x1d;
      uVar23 = uVar23 + ((uVar18 | uVar22) & uVar26 | uVar18 & uVar22) + 0x5a827999 + iVar21;
      uVar24 = uVar23 * 0x20 | uVar23 >> 0x1b;
      uVar26 = uVar26 + ((uVar18 | uVar22) & uVar24 | uVar18 & uVar22) + 0x5a827999 + iVar13;
      uVar26 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar18 = uVar18 + ((uVar26 | uVar22) & uVar24 | uVar26 & uVar22) + 0x5a827999 + iVar17;
      uVar18 = uVar18 * 0x2000 | uVar18 >> 0x13;
      uVar22 = uVar22 + ((uVar26 | uVar18) & uVar24 | uVar26 & uVar18) + 0x5a827999 + iVar7;
      uVar23 = uVar22 * 8 | uVar22 >> 0x1d;
      uVar24 = uVar24 + ((uVar18 | uVar23) & uVar26 | uVar18 & uVar23) + 0x5a827999 + iVar10;
      uVar24 = uVar24 * 0x20 | uVar24 >> 0x1b;
      uVar26 = uVar26 + ((uVar18 | uVar23) & uVar24 | uVar18 & uVar23) + 0x5a827999 + iVar14;
      uVar26 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar18 = uVar18 + 0x5a827999 + ((uVar26 | uVar23) & uVar24 | uVar26 & uVar23) + iVar3;
      uVar22 = uVar18 * 0x2000 | uVar18 >> 0x13;
      uVar18 = uVar23 + 0x5a827999 + ((uVar26 | uVar22) & uVar24 | uVar26 & uVar22) + iVar8;
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar23 = uVar24 + 0x5a827999 + ((uVar22 | uVar18) & uVar26 | uVar22 & uVar18) + iVar11;
      uVar23 = uVar23 * 0x20 | uVar23 >> 0x1b;
      uVar24 = uVar26 + 0x5a827999 + ((uVar22 | uVar18) & uVar23 | uVar22 & uVar18) + iVar15;
      uVar24 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar22 = ((uVar24 | uVar18) & uVar23 | uVar24 & uVar18) + 0x5a827999 + iVar4 + uVar22;
      uVar26 = uVar22 * 0x2000 | uVar22 >> 0x13;
      uVar18 = (uVar23 ^ uVar24 ^ uVar26) + 0x6ed9eba1 + iVar5 + uVar18;
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar23 = uVar23 + (uVar24 ^ uVar26 ^ uVar18) + 0x6ed9eba1 + iVar12;
      uVar22 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar24 = uVar24 + (uVar22 ^ uVar26 ^ uVar18) + 0x6ed9eba1 + iVar9;
      uVar23 = uVar24 * 0x800 | uVar24 >> 0x15;
      uVar26 = uVar26 + (uVar22 ^ uVar23 ^ uVar18) + 0x6ed9eba1 + iVar16;
      uVar26 = uVar26 * 0x8000 | uVar26 >> 0x11;
      uVar18 = uVar18 + (uVar22 ^ uVar23 ^ uVar26) + 0x6ed9eba1 + iVar7;
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar22 = uVar22 + (uVar23 ^ uVar26 ^ uVar18) + 0x6ed9eba1 + iVar14;
      uVar22 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar23 = uVar23 + (uVar22 ^ uVar26 ^ uVar18) + 0x6ed9eba1 + iVar10;
      uVar24 = uVar23 * 0x800 | uVar23 >> 0x15;
      uVar26 = uVar26 + (uVar22 ^ uVar24 ^ uVar18) + 0x6ed9eba1 + iVar3;
      uVar26 = uVar26 * 0x8000 | uVar26 >> 0x11;
      uVar18 = uVar18 + (uVar22 ^ uVar24 ^ uVar26) + 0x6ed9eba1 + iVar6;
      uVar23 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar18 = uVar22 + 0x6ed9eba1 + (uVar24 ^ uVar26 ^ uVar23) + iVar13;
      uVar18 = uVar18 * 0x200 | uVar18 >> 0x17;
      uVar22 = uVar24 + 0x6ed9eba1 + (uVar18 ^ uVar26 ^ uVar23) + iVar21;
      uVar22 = uVar22 * 0x800 | uVar22 >> 0x15;
      uVar26 = uVar26 + (uVar18 ^ uVar22 ^ uVar23) + 0x6ed9eba1 + iVar17;
      uVar26 = uVar26 * 0x8000 | uVar26 >> 0x11;
      uVar23 = uVar23 + 0x6ed9eba1 + (uVar18 ^ uVar22 ^ uVar26) + iVar8;
      uVar23 = uVar23 * 8 | uVar23 >> 0x1d;
      uVar18 = uVar18 + 0x6ed9eba1 + (uVar22 ^ uVar26 ^ uVar23) + iVar15;
      uVar24 = uVar18 * 0x200 | uVar18 >> 0x17;
      uVar18 = uVar22 + 0x6ed9eba1 + (uVar24 ^ uVar26 ^ uVar23) + iVar11;
      uVar22 = uVar18 * 0x800 | uVar18 >> 0x15;
      uVar18 = uVar26 + 0x6ed9eba1 + (uVar24 ^ uVar22 ^ uVar23) + iVar4;
      *param_1 = *param_1 + uVar23;
      iVar21 = *param_1;
      uVar25 = uVar25 + (uVar18 * 0x8000 | uVar18 >> 0x11);
      uVar19 = uVar19 + uVar22;
      param_1[1] = uVar25;
      param_1[2] = uVar19;
      uVar20 = uVar20 + uVar24;
      param_1[3] = uVar20;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143dafd20 BLAKE2b_Final body=142 status=ok
// SIG undefined BLAKE2b_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BLAKE2b_Final(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_2 + 0x50) = 0xffffffffffffffff;
  _guard_xfg_dispatch_icall_nop
            ((void *)(param_2 + 0x60 + *(longlong *)(param_2 + 0xe0)),0,
             0x80 - *(longlong *)(param_2 + 0xe0));
  blake2b_compress(param_2,param_2 + 0x60,*(undefined8 *)(param_2 + 0xe0));
  lVar1 = 8;
  lVar2 = param_2 - (longlong)param_1;
  do {
    *param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
    param_1 = param_1 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14004ff40(param_2,0xe8);
  return 1;
}



// FUNCTION 143dafdb0 BLAKE2b_Init body=278 status=ok
// SIG undefined BLAKE2b_Init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 BLAKE2b_Init(ulonglong *param_1)

{
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined2 local_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  undefined2 uStack_38;
  undefined6 local_36;
  undefined2 uStack_30;
  undefined6 local_2e;
  undefined2 uStack_28;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143dafdc0;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = 0x1010040;
  uStack_46 = 0;
  uStack_40 = 0;
  uStack_3e = 0;
  uStack_38 = 0;
  local_48 = 0;
  local_36 = 0;
  uStack_30 = 0;
  local_2e = 0;
  uStack_28 = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 8,0,0xa8);
  *param_1 = local_58 ^ 0x6a09e667f3bcc908;
  param_1[1] = 0xbb67ae8584caa73b;
  param_1[2] = CONCAT62(uStack_46,local_48) ^ 0x3c6ef372fe94f82b;
  param_1[3] = CONCAT62(uStack_3e,uStack_40) ^ 0xa54ff53a5f1d36f1;
  param_1[4] = CONCAT62(local_36,uStack_38) ^ 0x510e527fade682d1;
  param_1[5] = CONCAT62(local_2e,uStack_30) ^ 0x9b05688c2b3e6c1f;
  param_1[6] = 0x1f83d9abfb41bd6b;
  param_1[7] = 0x5be0cd19137e2179;
  return 1;
}



// FUNCTION 143dafed0 BLAKE2b_Update body=219 status=ok
// SIG undefined BLAKE2b_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BLAKE2b_Update(longlong param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong _Size;
  ulonglong _Size_00;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  _Size_00 = 0x80 - lVar1;
  _Size = param_3;
  if (_Size_00 < param_3) {
    if (lVar1 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x60 + lVar1),param_2,_Size_00);
      blake2b_compress(param_1,param_1 + 0x60,0x80);
      lVar1 = 0;
      param_2 = (void *)((longlong)param_2 + _Size_00);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      param_3 = param_3 - _Size_00;
    }
    _Size = param_3;
    if (0x80 < param_3) {
      _Size = 0x80;
      if ((param_3 & 0x7f) != 0) {
        _Size = (ulonglong)((uint)param_3 & 0x7f);
      }
      blake2b_compress(param_1,param_2,param_3 - _Size);
      lVar1 = *(longlong *)(param_1 + 0xe0);
      param_2 = (void *)((longlong)param_2 + (param_3 - _Size));
    }
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x60 + lVar1),param_2,_Size);
  *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + _Size;
  return 1;
}



// FUNCTION 143daffb0 blake2b_compress body=9646 status=ok
// SIG undefined blake2b_compress(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void blake2b_compress(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong local_128 [8];
  ulonglong local_e8;
  ulonglong local_d8;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x143daffd2;
  local_38 = DAT_1468387a8 ^ (ulonglong)local_128;
  local_128[0] = param_1[3];
  uVar3 = *param_1;
  uVar11 = param_1[1];
  uVar4 = param_1[2];
  uVar15 = 0x80;
  if (param_3 < 0x80) {
    uVar15 = param_3;
  }
  uVar22 = param_1[4];
  uVar19 = param_1[5];
  uVar13 = param_1[6];
  local_e8 = param_1[7];
  local_d8 = param_3;
  do {
    lVar2 = param_2 - (longlong)&local_b0;
    plVar1 = &local_b0;
    lVar8 = 2;
    do {
      plVar1[-1] = *(longlong *)(lVar2 + (longlong)plVar1);
      *plVar1 = *(longlong *)(lVar2 + 8 + (longlong)plVar1);
      plVar1[1] = *(longlong *)(lVar2 + 0x10 + (longlong)plVar1);
      plVar1[2] = *(longlong *)(lVar2 + 0x18 + (longlong)plVar1);
      plVar1[3] = *(longlong *)(lVar2 + 0x20 + (longlong)plVar1);
      plVar1[4] = *(longlong *)(lVar2 + 0x28 + (longlong)plVar1);
      plVar1[5] = *(longlong *)(lVar2 + 0x30 + (longlong)plVar1);
      plVar1[6] = *(longlong *)(lVar2 + 0x38 + (longlong)plVar1);
      plVar1 = plVar1 + 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    param_1[8] = param_1[8] + uVar15;
    param_1[9] = param_1[9] + (ulonglong)(param_1[8] < uVar15);
    uVar3 = uVar22 + uVar3 + local_b8;
    uVar9 = param_1[8] ^ uVar3 ^ 0x510e527fade682d1;
    uVar10 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar9 = uVar10 + 0x6a09e667f3bcc908;
    uVar22 = uVar9 ^ uVar22;
    uVar22 = uVar22 >> 0x18 | uVar22 << 0x28;
    uVar6 = uVar22 + uVar3 + local_b0;
    uVar10 = uVar6 ^ uVar10;
    uVar21 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar9 = uVar21 + uVar9;
    uVar22 = uVar22 ^ uVar9;
    uVar23 = uVar22 << 1 | (ulonglong)((longlong)uVar22 < 0);
    uVar3 = local_a8 + uVar19 + uVar11;
    uVar11 = uVar3 ^ param_1[9] ^ 0x9b05688c2b3e6c1f;
    uVar22 = uVar11 >> 0x20 | uVar11 << 0x20;
    uVar11 = uVar22 + 0xbb67ae8584caa73b;
    uVar19 = uVar19 ^ uVar11;
    uVar19 = uVar19 >> 0x18 | uVar19 << 0x28;
    uVar7 = uVar3 + uVar19 + local_a0;
    uVar22 = uVar22 ^ uVar7;
    uVar12 = uVar22 >> 0x10 | uVar22 << 0x30;
    uVar11 = uVar11 + uVar12;
    uVar19 = uVar19 ^ uVar11;
    uVar4 = local_98 + uVar13 + uVar4;
    uVar20 = uVar19 << 1 | (ulonglong)((longlong)uVar19 < 0);
    uVar3 = uVar4 ^ param_1[10] ^ 0x1f83d9abfb41bd6b;
    uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
    uVar22 = uVar3 + 0x3c6ef372fe94f82b;
    local_128[0] = local_88 + local_e8 + local_128[0];
    uVar13 = uVar22 ^ uVar13;
    uVar13 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar4 = local_90 + uVar4 + uVar13;
    uVar3 = uVar4 ^ uVar3;
    uVar10 = uVar3 >> 0x10 | uVar3 << 0x30;
    uVar3 = local_128[0] ^ param_1[0xb] ^ 0x5be0cd19137e2179;
    uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
    uVar22 = uVar22 + uVar10;
    uVar19 = uVar3 + 0xa54ff53a5f1d36f1;
    uVar13 = uVar22 ^ uVar13;
    local_e8 = uVar19 ^ local_e8;
    uVar13 = uVar13 << 1 | (ulonglong)((longlong)uVar13 < 0);
    uVar14 = local_e8 >> 0x18 | local_e8 << 0x28;
    local_128[0] = local_80 + local_128[0] + uVar14;
    uVar3 = local_128[0] ^ uVar3;
    uVar5 = uVar3 >> 0x10 | uVar3 << 0x30;
    uVar19 = uVar19 + uVar5;
    uVar3 = local_78 + uVar6 + uVar20;
    uVar14 = uVar19 ^ uVar14;
    uVar6 = uVar14 << 1 | (ulonglong)((longlong)uVar14 < 0);
    uVar5 = uVar3 ^ uVar5;
    uVar17 = uVar5 >> 0x20 | uVar5 << 0x20;
    uVar22 = uVar17 + uVar22;
    uVar20 = uVar22 ^ uVar20;
    uVar5 = uVar20 >> 0x18 | uVar20 << 0x28;
    uVar14 = uVar7 + local_68 + uVar13;
    uVar3 = local_70 + uVar5 + uVar3;
    uVar21 = uVar21 ^ uVar14;
    uVar17 = uVar17 ^ uVar3;
    uVar7 = uVar21 >> 0x20 | uVar21 << 0x20;
    uVar18 = uVar17 >> 0x10 | uVar17 << 0x30;
    uVar22 = uVar22 + uVar18;
    uVar19 = uVar19 + uVar7;
    uVar13 = uVar19 ^ uVar13;
    uVar5 = uVar22 ^ uVar5;
    uVar13 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar5 = uVar5 << 1 | (ulonglong)((longlong)uVar5 < 0);
    uVar14 = uVar14 + local_60 + uVar13;
    uVar7 = uVar14 ^ uVar7;
    uVar17 = uVar7 >> 0x10 | uVar7 << 0x30;
    uVar19 = uVar19 + uVar17;
    uVar13 = uVar19 ^ uVar13;
    uVar4 = uVar4 + local_58 + uVar6;
    uVar7 = uVar13 << 1 | (ulonglong)((longlong)uVar13 < 0);
    uVar12 = uVar12 ^ uVar4;
    uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
    uVar9 = uVar9 + uVar12;
    uVar6 = uVar9 ^ uVar6;
    uVar13 = uVar6 >> 0x18 | uVar6 << 0x28;
    uVar4 = uVar4 + local_50 + uVar13;
    uVar12 = uVar12 ^ uVar4;
    uVar20 = uVar12 >> 0x10 | uVar12 << 0x30;
    local_128[0] = local_128[0] + uVar23 + local_48;
    uVar9 = uVar9 + uVar20;
    uVar13 = uVar9 ^ uVar13;
    uVar12 = uVar13 << 1 | (ulonglong)((longlong)uVar13 < 0);
    uVar10 = local_128[0] ^ uVar10;
    uVar13 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar11 = uVar11 + uVar13;
    uVar23 = uVar11 ^ uVar23;
    uVar6 = uVar23 >> 0x18 | uVar23 << 0x28;
    local_128[0] = local_128[0] + uVar6 + local_40;
    uVar13 = local_128[0] ^ uVar13;
    uVar23 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar11 = uVar11 + uVar23;
    uVar6 = uVar11 ^ uVar6;
    uVar13 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar3 = uVar3 + uVar13 + local_48;
    uVar17 = uVar17 ^ uVar3;
    uVar6 = uVar17 >> 0x20 | uVar17 << 0x20;
    uVar9 = uVar9 + uVar6;
    uVar13 = uVar9 ^ uVar13;
    uVar13 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar3 = uVar3 + uVar13 + local_68;
    uVar6 = uVar6 ^ uVar3;
    uVar10 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar14 = uVar14 + local_98 + uVar5;
    uVar9 = uVar9 + uVar10;
    uVar13 = uVar9 ^ uVar13;
    uVar20 = uVar20 ^ uVar14;
    uVar17 = uVar13 << 1 | (ulonglong)((longlong)uVar13 < 0);
    uVar6 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar11 = uVar11 + uVar6;
    uVar5 = uVar11 ^ uVar5;
    uVar13 = uVar5 >> 0x18 | uVar5 << 0x28;
    uVar14 = uVar14 + uVar13 + local_78;
    uVar6 = uVar6 ^ uVar14;
    uVar5 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar11 = uVar11 + uVar5;
    uVar4 = uVar4 + local_70 + uVar7;
    uVar23 = uVar23 ^ uVar4;
    uVar13 = uVar11 ^ uVar13;
    uVar6 = uVar23 >> 0x20 | uVar23 << 0x20;
    uVar22 = uVar22 + uVar6;
    uVar21 = uVar13 << 1 | (ulonglong)((longlong)uVar13 < 0);
    uVar7 = uVar22 ^ uVar7;
    uVar13 = uVar7 >> 0x18 | uVar7 << 0x28;
    uVar4 = uVar4 + uVar13 + local_40;
    uVar6 = uVar6 ^ uVar4;
    uVar23 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar22 = uVar22 + uVar23;
    uVar13 = uVar22 ^ uVar13;
    uVar20 = uVar13 << 1 | (ulonglong)((longlong)uVar13 < 0);
    local_128[0] = local_128[0] + local_50 + uVar12;
    uVar18 = uVar18 ^ local_128[0];
    uVar6 = uVar18 >> 0x20 | uVar18 << 0x20;
    uVar19 = uVar19 + uVar6;
    uVar12 = uVar19 ^ uVar12;
    uVar13 = uVar12 >> 0x18 | uVar12 << 0x28;
    local_128[0] = local_128[0] + local_88 + uVar13;
    uVar6 = uVar6 ^ local_128[0];
    uVar3 = uVar3 + local_b0 + uVar21;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar19 = uVar19 + uVar6;
    uVar13 = uVar19 ^ uVar13;
    uVar6 = uVar3 ^ uVar6;
    uVar7 = uVar13 << 1 | (ulonglong)((longlong)uVar13 < 0);
    uVar13 = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar22 = uVar22 + uVar13;
    uVar21 = uVar21 ^ uVar22;
    uVar6 = uVar21 >> 0x18 | uVar21 << 0x28;
    uVar3 = uVar3 + uVar6 + local_58;
    uVar13 = uVar3 ^ uVar13;
    uVar21 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar22 = uVar22 + uVar21;
    uVar6 = uVar6 ^ uVar22;
    uVar12 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar14 = uVar14 + local_b8 + uVar20;
    uVar10 = uVar14 ^ uVar10;
    uVar13 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar19 = uVar19 + uVar13;
    uVar20 = uVar19 ^ uVar20;
    uVar6 = uVar20 >> 0x18 | uVar20 << 0x28;
    uVar14 = uVar14 + local_a8 + uVar6;
    uVar13 = uVar14 ^ uVar13;
    uVar18 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar19 = uVar19 + uVar18;
    uVar6 = uVar19 ^ uVar6;
    uVar4 = uVar4 + local_60 + uVar7;
    uVar10 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar5 = uVar5 ^ uVar4;
    uVar13 = uVar5 >> 0x20 | uVar5 << 0x20;
    uVar9 = uVar9 + uVar13;
    uVar7 = uVar9 ^ uVar7;
    uVar6 = uVar7 >> 0x18 | uVar7 << 0x28;
    uVar4 = uVar4 + local_80 + uVar6;
    uVar13 = uVar13 ^ uVar4;
    uVar20 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar9 = uVar9 + uVar20;
    uVar6 = uVar9 ^ uVar6;
    local_128[0] = local_128[0] + local_90 + uVar17;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar23 = local_128[0] ^ uVar23;
    uVar13 = uVar23 >> 0x20 | uVar23 << 0x20;
    uVar11 = uVar11 + uVar13;
    uVar17 = uVar11 ^ uVar17;
    uVar6 = uVar17 >> 0x18 | uVar17 << 0x28;
    local_128[0] = local_128[0] + local_a0 + uVar6;
    uVar13 = local_128[0] ^ uVar13;
    uVar16 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar11 = uVar11 + uVar16;
    uVar6 = uVar11 ^ uVar6;
    uVar13 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar3 = uVar3 + local_60 + uVar13;
    uVar18 = uVar18 ^ uVar3;
    uVar6 = uVar18 >> 0x20 | uVar18 << 0x20;
    uVar9 = uVar9 + uVar6;
    uVar13 = uVar9 ^ uVar13;
    uVar13 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar3 = uVar3 + uVar13 + local_78;
    uVar6 = uVar6 ^ uVar3;
    uVar7 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar9 = uVar9 + uVar7;
    uVar13 = uVar9 ^ uVar13;
    uVar14 = uVar14 + uVar12 + local_58;
    uVar17 = uVar13 << 1 | (ulonglong)((longlong)uVar13 < 0);
    uVar20 = uVar20 ^ uVar14;
    uVar13 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar11 = uVar11 + uVar13;
    uVar12 = uVar11 ^ uVar12;
    uVar6 = uVar12 >> 0x18 | uVar12 << 0x28;
    uVar14 = uVar14 + local_b8 + uVar6;
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar11 = uVar11 + uVar13;
    uVar6 = uVar11 ^ uVar6;
    uVar23 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar4 = uVar4 + local_90 + uVar10;
    uVar16 = uVar16 ^ uVar4;
    uVar12 = uVar16 >> 0x20 | uVar16 << 0x20;
    uVar22 = uVar22 + uVar12;
    uVar10 = uVar22 ^ uVar10;
    uVar6 = uVar10 >> 0x18 | uVar10 << 0x28;
    uVar4 = uVar4 + local_a8 + uVar6;
    uVar12 = uVar12 ^ uVar4;
    uVar12 = uVar12 >> 0x10 | uVar12 << 0x30;
    uVar22 = uVar22 + uVar12;
    uVar6 = uVar22 ^ uVar6;
    local_128[0] = local_128[0] + uVar5 + local_40;
    uVar20 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar21 = uVar21 ^ local_128[0];
    uVar10 = uVar21 >> 0x20 | uVar21 << 0x20;
    uVar19 = uVar19 + uVar10;
    uVar5 = uVar19 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    local_128[0] = local_128[0] + uVar6 + local_50;
    uVar10 = uVar10 ^ local_128[0];
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar19 = uVar19 + uVar10;
    uVar6 = uVar19 ^ uVar6;
    uVar3 = uVar3 + uVar23 + local_68;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar10 = uVar3 ^ uVar10;
    uVar6 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar22 = uVar22 + uVar6;
    uVar23 = uVar23 ^ uVar22;
    uVar10 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar3 = uVar3 + uVar10 + local_48;
    uVar6 = uVar3 ^ uVar6;
    uVar21 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar22 = uVar22 + uVar21;
    uVar10 = uVar10 ^ uVar22;
    uVar23 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar14 = uVar14 + local_a0 + uVar20;
    uVar7 = uVar14 ^ uVar7;
    uVar6 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar19 = uVar19 + uVar6;
    uVar20 = uVar19 ^ uVar20;
    uVar10 = uVar20 >> 0x18 | uVar20 << 0x28;
    uVar14 = uVar14 + local_88 + uVar10;
    uVar6 = uVar14 ^ uVar6;
    uVar20 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar19 = uVar19 + uVar20;
    uVar10 = uVar19 ^ uVar10;
    uVar4 = uVar4 + local_80 + uVar5;
    uVar7 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar9 = uVar9 + uVar13;
    uVar5 = uVar9 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    uVar4 = uVar4 + local_b0 + uVar6;
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar9 = uVar9 + uVar13;
    uVar6 = uVar9 ^ uVar6;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    local_128[0] = local_128[0] + uVar17 + local_70;
    uVar12 = local_128[0] ^ uVar12;
    uVar6 = uVar12 >> 0x20 | uVar12 << 0x20;
    uVar11 = uVar11 + uVar6;
    uVar17 = uVar11 ^ uVar17;
    uVar10 = uVar17 >> 0x18 | uVar17 << 0x28;
    local_128[0] = local_128[0] + local_98 + uVar10;
    uVar6 = local_128[0] ^ uVar6;
    uVar18 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar11 = uVar11 + uVar18;
    uVar10 = uVar11 ^ uVar10;
    uVar6 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar3 = uVar3 + local_80 + uVar6;
    uVar20 = uVar20 ^ uVar3;
    uVar10 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar9 = uVar9 + uVar10;
    uVar6 = uVar9 ^ uVar6;
    uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
    uVar3 = uVar3 + uVar6 + local_70;
    uVar10 = uVar10 ^ uVar3;
    uVar12 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar9 = uVar9 + uVar12;
    uVar6 = uVar9 ^ uVar6;
    uVar14 = uVar14 + local_a0 + uVar23;
    uVar20 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar11 = uVar11 + uVar13;
    uVar23 = uVar11 ^ uVar23;
    uVar6 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar14 = uVar14 + local_b0 + uVar6;
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar11 = uVar11 + uVar13;
    uVar6 = uVar11 ^ uVar6;
    uVar17 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar4 = uVar4 + uVar7 + local_50;
    uVar18 = uVar18 ^ uVar4;
    uVar10 = uVar18 >> 0x20 | uVar18 << 0x20;
    uVar22 = uVar22 + uVar10;
    uVar7 = uVar22 ^ uVar7;
    uVar6 = uVar7 >> 0x18 | uVar7 << 0x28;
    uVar4 = uVar4 + local_58 + uVar6;
    uVar10 = uVar10 ^ uVar4;
    uVar7 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar22 = uVar22 + uVar7;
    uVar6 = uVar22 ^ uVar6;
    local_128[0] = local_128[0] + local_60 + uVar5;
    uVar23 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar21 = uVar21 ^ local_128[0];
    uVar10 = uVar21 >> 0x20 | uVar21 << 0x20;
    uVar19 = uVar19 + uVar10;
    uVar5 = uVar19 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    local_128[0] = local_128[0] + uVar6 + local_48;
    uVar10 = uVar10 ^ local_128[0];
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar19 = uVar19 + uVar10;
    uVar6 = uVar19 ^ uVar6;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar3 = uVar3 + local_a8 + uVar17;
    uVar10 = uVar3 ^ uVar10;
    uVar6 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar22 = uVar22 + uVar6;
    uVar17 = uVar17 ^ uVar22;
    uVar10 = uVar17 >> 0x18 | uVar17 << 0x28;
    uVar3 = uVar3 + local_88 + uVar10;
    uVar14 = uVar14 + local_90 + uVar23;
    uVar6 = uVar3 ^ uVar6;
    uVar12 = uVar14 ^ uVar12;
    uVar18 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar22 = uVar22 + uVar18;
    uVar6 = uVar12 >> 0x20 | uVar12 << 0x20;
    uVar10 = uVar10 ^ uVar22;
    uVar19 = uVar19 + uVar6;
    uVar12 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar23 = uVar19 ^ uVar23;
    uVar10 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar14 = uVar14 + uVar10 + local_68;
    uVar6 = uVar14 ^ uVar6;
    uVar17 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar19 = uVar19 + uVar17;
    uVar10 = uVar19 ^ uVar10;
    uVar4 = uVar4 + local_98 + uVar5;
    uVar23 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar9 = uVar9 + uVar13;
    uVar5 = uVar9 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    uVar4 = uVar4 + local_b8 + uVar6;
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar9 = uVar9 + uVar13;
    uVar6 = uVar9 ^ uVar6;
    local_128[0] = local_128[0] + uVar20 + local_40;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar7 = local_128[0] ^ uVar7;
    uVar6 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar11 = uVar11 + uVar6;
    uVar20 = uVar11 ^ uVar20;
    uVar10 = uVar20 >> 0x18 | uVar20 << 0x28;
    local_128[0] = local_128[0] + local_78 + uVar10;
    uVar6 = local_128[0] ^ uVar6;
    uVar20 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar11 = uVar11 + uVar20;
    uVar10 = uVar11 ^ uVar10;
    uVar6 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar3 = uVar3 + uVar6 + local_70;
    uVar17 = uVar17 ^ uVar3;
    uVar10 = uVar17 >> 0x20 | uVar17 << 0x20;
    uVar9 = uVar9 + uVar10;
    uVar6 = uVar9 ^ uVar6;
    uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
    uVar3 = uVar3 + local_b8 + uVar6;
    uVar10 = uVar10 ^ uVar3;
    uVar7 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar9 = uVar9 + uVar7;
    uVar6 = uVar9 ^ uVar6;
    uVar14 = uVar14 + local_90 + uVar12;
    uVar17 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar11 = uVar11 + uVar13;
    uVar12 = uVar11 ^ uVar12;
    uVar6 = uVar12 >> 0x18 | uVar12 << 0x28;
    uVar14 = uVar14 + local_80 + uVar6;
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar11 = uVar11 + uVar13;
    uVar6 = uVar11 ^ uVar6;
    uVar4 = uVar4 + local_a8 + uVar23;
    uVar21 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar20 = uVar20 ^ uVar4;
    uVar10 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar22 = uVar22 + uVar10;
    uVar23 = uVar22 ^ uVar23;
    uVar6 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar4 = uVar4 + local_98 + uVar6;
    uVar10 = uVar10 ^ uVar4;
    uVar12 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar22 = uVar22 + uVar12;
    uVar6 = uVar22 ^ uVar6;
    local_128[0] = local_128[0] + uVar5 + local_68;
    uVar20 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar18 = uVar18 ^ local_128[0];
    uVar10 = uVar18 >> 0x20 | uVar18 << 0x20;
    uVar19 = uVar19 + uVar10;
    uVar5 = uVar19 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    local_128[0] = local_128[0] + uVar6 + local_40;
    uVar10 = uVar10 ^ local_128[0];
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar19 = uVar19 + uVar10;
    uVar6 = uVar19 ^ uVar6;
    uVar3 = uVar3 + uVar21 + local_48;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar10 = uVar3 ^ uVar10;
    uVar6 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar22 = uVar22 + uVar6;
    uVar21 = uVar21 ^ uVar22;
    uVar10 = uVar21 >> 0x18 | uVar21 << 0x28;
    uVar3 = uVar3 + local_b0 + uVar10;
    uVar6 = uVar3 ^ uVar6;
    uVar21 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar22 = uVar22 + uVar21;
    uVar10 = uVar10 ^ uVar22;
    uVar23 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar14 = uVar14 + local_60 + uVar20;
    uVar7 = uVar14 ^ uVar7;
    uVar6 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar19 = uVar19 + uVar6;
    uVar20 = uVar19 ^ uVar20;
    uVar10 = uVar20 >> 0x18 | uVar20 << 0x28;
    uVar14 = uVar14 + local_58 + uVar10;
    uVar6 = uVar14 ^ uVar6;
    uVar20 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar19 = uVar19 + uVar20;
    uVar10 = uVar19 ^ uVar10;
    uVar7 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar4 = uVar4 + local_88 + uVar5;
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar9 = uVar9 + uVar13;
    uVar5 = uVar9 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    uVar4 = uVar4 + local_78 + uVar6;
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar9 = uVar9 + uVar13;
    uVar6 = uVar9 ^ uVar6;
    local_128[0] = local_128[0] + local_a0 + uVar17;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar12 = local_128[0] ^ uVar12;
    uVar6 = uVar12 >> 0x20 | uVar12 << 0x20;
    uVar11 = uVar11 + uVar6;
    uVar17 = uVar11 ^ uVar17;
    uVar10 = uVar17 >> 0x18 | uVar17 << 0x28;
    local_128[0] = local_128[0] + uVar10 + local_50;
    uVar6 = local_128[0] ^ uVar6;
    uVar18 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar11 = uVar11 + uVar18;
    uVar10 = uVar11 ^ uVar10;
    uVar6 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar3 = uVar3 + local_a8 + uVar6;
    uVar20 = uVar20 ^ uVar3;
    uVar10 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar9 = uVar9 + uVar10;
    uVar6 = uVar9 ^ uVar6;
    uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
    uVar3 = uVar3 + local_58 + uVar6;
    uVar10 = uVar10 ^ uVar3;
    uVar12 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar9 = uVar9 + uVar12;
    uVar6 = uVar9 ^ uVar6;
    uVar14 = uVar14 + local_88 + uVar23;
    uVar17 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar11 = uVar11 + uVar13;
    uVar23 = uVar11 ^ uVar23;
    uVar6 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar14 = uVar14 + uVar6 + local_68;
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar11 = uVar11 + uVar13;
    uVar6 = uVar11 ^ uVar6;
    uVar4 = uVar4 + local_b8 + uVar7;
    uVar23 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar18 = uVar18 ^ uVar4;
    uVar10 = uVar18 >> 0x20 | uVar18 << 0x20;
    uVar22 = uVar22 + uVar10;
    uVar7 = uVar22 ^ uVar7;
    uVar6 = uVar7 >> 0x18 | uVar7 << 0x28;
    uVar4 = uVar4 + local_60 + uVar6;
    uVar10 = uVar10 ^ uVar4;
    uVar7 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar22 = uVar22 + uVar7;
    uVar6 = uVar22 ^ uVar6;
    local_128[0] = local_128[0] + local_78 + uVar5;
    uVar20 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar21 = uVar21 ^ local_128[0];
    uVar10 = uVar21 >> 0x20 | uVar21 << 0x20;
    uVar19 = uVar19 + uVar10;
    uVar5 = uVar19 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    local_128[0] = local_128[0] + local_a0 + uVar6;
    uVar10 = uVar10 ^ local_128[0];
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar19 = uVar19 + uVar10;
    uVar6 = uVar19 ^ uVar6;
    uVar3 = uVar3 + local_98 + uVar23;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar10 = uVar3 ^ uVar10;
    uVar6 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar22 = uVar22 + uVar6;
    uVar23 = uVar23 ^ uVar22;
    uVar10 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar3 = uVar3 + uVar10 + local_50;
    uVar6 = uVar3 ^ uVar6;
    uVar21 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar22 = uVar22 + uVar21;
    uVar10 = uVar10 ^ uVar22;
    uVar23 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar14 = uVar14 + local_80 + uVar20;
    uVar12 = uVar14 ^ uVar12;
    uVar6 = uVar12 >> 0x20 | uVar12 << 0x20;
    uVar19 = uVar19 + uVar6;
    uVar20 = uVar19 ^ uVar20;
    uVar10 = uVar20 >> 0x18 | uVar20 << 0x28;
    uVar14 = uVar14 + local_90 + uVar10;
    uVar6 = uVar14 ^ uVar6;
    uVar20 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar19 = uVar19 + uVar20;
    uVar10 = uVar19 ^ uVar10;
    uVar4 = uVar4 + uVar5 + local_40;
    uVar12 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar9 = uVar9 + uVar13;
    uVar5 = uVar9 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    uVar4 = uVar4 + uVar6 + local_48;
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar9 = uVar9 + uVar13;
    uVar6 = uVar9 ^ uVar6;
    local_128[0] = local_128[0] + local_b0 + uVar17;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar7 = local_128[0] ^ uVar7;
    uVar6 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar11 = uVar11 + uVar6;
    uVar17 = uVar11 ^ uVar17;
    uVar10 = uVar17 >> 0x18 | uVar17 << 0x28;
    local_128[0] = local_128[0] + uVar10 + local_70;
    uVar6 = local_128[0] ^ uVar6;
    uVar18 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar11 = uVar11 + uVar18;
    uVar10 = uVar11 ^ uVar10;
    uVar6 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar3 = uVar3 + local_58 + uVar6;
    uVar20 = uVar20 ^ uVar3;
    uVar10 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar9 = uVar9 + uVar10;
    uVar6 = uVar9 ^ uVar6;
    uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
    uVar3 = uVar3 + local_90 + uVar6;
    uVar10 = uVar10 ^ uVar3;
    uVar7 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar9 = uVar9 + uVar7;
    uVar6 = uVar9 ^ uVar6;
    uVar14 = uVar14 + local_b0 + uVar23;
    uVar17 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar11 = uVar11 + uVar13;
    uVar23 = uVar11 ^ uVar23;
    uVar6 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar14 = uVar14 + uVar6 + local_40;
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar11 = uVar11 + uVar13;
    uVar6 = uVar11 ^ uVar6;
    uVar4 = uVar4 + uVar12 + local_48;
    uVar23 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar18 = uVar18 ^ uVar4;
    uVar10 = uVar18 >> 0x20 | uVar18 << 0x20;
    uVar22 = uVar22 + uVar10;
    uVar12 = uVar22 ^ uVar12;
    uVar6 = uVar12 >> 0x18 | uVar12 << 0x28;
    uVar4 = uVar4 + uVar6 + local_50;
    uVar10 = uVar10 ^ uVar4;
    uVar12 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar22 = uVar22 + uVar12;
    uVar6 = uVar22 ^ uVar6;
    uVar20 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    local_128[0] = local_128[0] + local_98 + uVar5;
    uVar21 = uVar21 ^ local_128[0];
    uVar10 = uVar21 >> 0x20 | uVar21 << 0x20;
    uVar19 = uVar19 + uVar10;
    uVar5 = uVar19 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    local_128[0] = local_128[0] + uVar6 + local_68;
    uVar10 = uVar10 ^ local_128[0];
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar19 = uVar19 + uVar10;
    uVar6 = uVar19 ^ uVar6;
    uVar3 = uVar3 + local_b8 + uVar23;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar10 = uVar3 ^ uVar10;
    uVar6 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar22 = uVar22 + uVar6;
    uVar23 = uVar23 ^ uVar22;
    uVar10 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar3 = uVar3 + local_80 + uVar10;
    uVar6 = uVar3 ^ uVar6;
    uVar21 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar22 = uVar22 + uVar21;
    uVar10 = uVar10 ^ uVar22;
    uVar23 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar14 = uVar14 + local_88 + uVar20;
    uVar7 = uVar14 ^ uVar7;
    uVar6 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar19 = uVar19 + uVar6;
    uVar20 = uVar19 ^ uVar20;
    uVar10 = uVar20 >> 0x18 | uVar20 << 0x28;
    uVar14 = uVar14 + local_a0 + uVar10;
    uVar6 = uVar14 ^ uVar6;
    uVar20 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar19 = uVar19 + uVar20;
    uVar10 = uVar19 ^ uVar10;
    uVar4 = uVar4 + uVar5 + local_70;
    uVar7 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar9 = uVar9 + uVar13;
    uVar5 = uVar9 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    uVar4 = uVar4 + local_a8 + uVar6;
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar9 = uVar9 + uVar13;
    uVar6 = uVar9 ^ uVar6;
    local_128[0] = local_128[0] + local_78 + uVar17;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar12 = local_128[0] ^ uVar12;
    uVar6 = uVar12 >> 0x20 | uVar12 << 0x20;
    uVar11 = uVar11 + uVar6;
    uVar17 = uVar11 ^ uVar17;
    uVar10 = uVar17 >> 0x18 | uVar17 << 0x28;
    local_128[0] = local_128[0] + uVar10 + local_60;
    uVar6 = local_128[0] ^ uVar6;
    uVar18 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar11 = uVar11 + uVar18;
    uVar10 = uVar11 ^ uVar10;
    uVar6 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar3 = uVar3 + uVar6 + local_50;
    uVar20 = uVar20 ^ uVar3;
    uVar10 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar9 = uVar9 + uVar10;
    uVar6 = uVar9 ^ uVar6;
    uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
    uVar3 = uVar3 + uVar6 + local_60;
    uVar10 = uVar10 ^ uVar3;
    uVar12 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar9 = uVar9 + uVar12;
    uVar6 = uVar9 ^ uVar6;
    uVar14 = uVar14 + local_80 + uVar23;
    uVar17 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar11 = uVar11 + uVar13;
    uVar23 = uVar11 ^ uVar23;
    uVar6 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar14 = uVar14 + uVar6 + local_48;
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar11 = uVar11 + uVar13;
    uVar6 = uVar11 ^ uVar6;
    uVar4 = uVar4 + local_58 + uVar7;
    uVar23 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar18 = uVar18 ^ uVar4;
    uVar10 = uVar18 >> 0x20 | uVar18 << 0x20;
    uVar22 = uVar22 + uVar10;
    uVar7 = uVar22 ^ uVar7;
    uVar6 = uVar7 >> 0x18 | uVar7 << 0x28;
    uVar4 = uVar4 + local_b0 + uVar6;
    uVar10 = uVar10 ^ uVar4;
    uVar7 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar22 = uVar22 + uVar7;
    uVar6 = uVar22 ^ uVar6;
    local_128[0] = local_128[0] + local_a0 + uVar5;
    uVar20 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar21 = uVar21 ^ local_128[0];
    uVar10 = uVar21 >> 0x20 | uVar21 << 0x20;
    uVar19 = uVar19 + uVar10;
    uVar5 = uVar19 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    local_128[0] = local_128[0] + uVar6 + local_70;
    uVar10 = uVar10 ^ local_128[0];
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar19 = uVar19 + uVar10;
    uVar6 = uVar19 ^ uVar6;
    uVar3 = uVar3 + local_90 + uVar23;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar10 = uVar3 ^ uVar10;
    uVar6 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar22 = uVar22 + uVar6;
    uVar23 = uVar23 ^ uVar22;
    uVar10 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar3 = uVar3 + local_b8 + uVar10;
    uVar6 = uVar3 ^ uVar6;
    uVar21 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar22 = uVar22 + uVar21;
    uVar10 = uVar10 ^ uVar22;
    uVar23 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar14 = uVar14 + uVar20 + local_40;
    uVar12 = uVar14 ^ uVar12;
    uVar6 = uVar12 >> 0x20 | uVar12 << 0x20;
    uVar19 = uVar19 + uVar6;
    uVar20 = uVar19 ^ uVar20;
    uVar10 = uVar20 >> 0x18 | uVar20 << 0x28;
    uVar14 = uVar14 + local_98 + uVar10;
    uVar6 = uVar14 ^ uVar6;
    uVar20 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar19 = uVar19 + uVar20;
    uVar10 = uVar19 ^ uVar10;
    uVar4 = uVar4 + local_78 + uVar5;
    uVar12 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar9 = uVar9 + uVar13;
    uVar5 = uVar9 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    uVar4 = uVar4 + local_88 + uVar6;
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar9 = uVar9 + uVar13;
    uVar6 = uVar9 ^ uVar6;
    local_128[0] = local_128[0] + local_a8 + uVar17;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar7 = local_128[0] ^ uVar7;
    uVar6 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar11 = uVar11 + uVar6;
    uVar17 = uVar11 ^ uVar17;
    uVar10 = uVar17 >> 0x18 | uVar17 << 0x28;
    local_128[0] = local_128[0] + uVar10 + local_68;
    uVar6 = local_128[0] ^ uVar6;
    uVar18 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar11 = uVar11 + uVar18;
    uVar10 = uVar11 ^ uVar10;
    uVar6 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar3 = uVar3 + local_88 + uVar6;
    uVar20 = uVar20 ^ uVar3;
    uVar10 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar9 = uVar9 + uVar10;
    uVar6 = uVar9 ^ uVar6;
    uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
    uVar3 = uVar3 + uVar6 + local_40;
    uVar10 = uVar10 ^ uVar3;
    uVar7 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar9 = uVar9 + uVar7;
    uVar6 = uVar9 ^ uVar6;
    uVar14 = uVar14 + uVar23 + local_48;
    uVar17 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar11 = uVar11 + uVar13;
    uVar23 = uVar11 ^ uVar23;
    uVar6 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar14 = uVar14 + uVar6 + local_70;
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar11 = uVar11 + uVar13;
    uVar6 = uVar11 ^ uVar6;
    uVar4 = uVar4 + local_60 + uVar12;
    uVar23 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar18 = uVar18 ^ uVar4;
    uVar10 = uVar18 >> 0x20 | uVar18 << 0x20;
    uVar22 = uVar22 + uVar10;
    uVar12 = uVar22 ^ uVar12;
    uVar6 = uVar12 >> 0x18 | uVar12 << 0x28;
    uVar4 = uVar4 + local_a0 + uVar6;
    uVar10 = uVar10 ^ uVar4;
    uVar12 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar22 = uVar22 + uVar12;
    uVar6 = uVar22 ^ uVar6;
    uVar20 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    local_128[0] = local_128[0] + local_b8 + uVar5;
    uVar21 = uVar21 ^ local_128[0];
    uVar10 = uVar21 >> 0x20 | uVar21 << 0x20;
    uVar19 = uVar19 + uVar10;
    uVar5 = uVar19 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    local_128[0] = local_128[0] + local_78 + uVar6;
    uVar10 = uVar10 ^ local_128[0];
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar19 = uVar19 + uVar10;
    uVar6 = uVar19 ^ uVar6;
    uVar3 = uVar3 + local_58 + uVar23;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar10 = uVar3 ^ uVar10;
    uVar6 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar22 = uVar22 + uVar6;
    uVar23 = uVar23 ^ uVar22;
    uVar10 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar3 = uVar3 + local_a8 + uVar10;
    uVar6 = uVar3 ^ uVar6;
    uVar21 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar22 = uVar22 + uVar21;
    uVar10 = uVar10 ^ uVar22;
    uVar23 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar14 = uVar14 + uVar20 + local_50;
    uVar7 = uVar14 ^ uVar7;
    uVar6 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar19 = uVar19 + uVar6;
    uVar20 = uVar19 ^ uVar20;
    uVar10 = uVar20 >> 0x18 | uVar20 << 0x28;
    uVar14 = uVar14 + local_80 + uVar10;
    uVar6 = uVar14 ^ uVar6;
    uVar20 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar19 = uVar19 + uVar20;
    uVar10 = uVar19 ^ uVar10;
    uVar4 = uVar4 + local_b0 + uVar5;
    uVar7 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar9 = uVar9 + uVar13;
    uVar5 = uVar9 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    uVar4 = uVar4 + local_98 + uVar6;
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar9 = uVar9 + uVar13;
    uVar6 = uVar9 ^ uVar6;
    local_128[0] = local_128[0] + uVar17 + local_68;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar12 = local_128[0] ^ uVar12;
    uVar6 = uVar12 >> 0x20 | uVar12 << 0x20;
    uVar11 = uVar11 + uVar6;
    uVar17 = uVar11 ^ uVar17;
    uVar10 = uVar17 >> 0x18 | uVar17 << 0x28;
    local_128[0] = local_128[0] + local_90 + uVar10;
    uVar6 = local_128[0] ^ uVar6;
    uVar18 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar11 = uVar11 + uVar18;
    uVar10 = uVar11 ^ uVar10;
    uVar6 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar3 = uVar3 + uVar6 + local_68;
    uVar20 = uVar20 ^ uVar3;
    uVar10 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar9 = uVar9 + uVar10;
    uVar6 = uVar9 ^ uVar6;
    uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
    uVar3 = uVar3 + local_a8 + uVar6;
    uVar10 = uVar10 ^ uVar3;
    uVar12 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar9 = uVar9 + uVar12;
    uVar6 = uVar9 ^ uVar6;
    uVar14 = uVar14 + local_78 + uVar23;
    uVar17 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar11 = uVar11 + uVar13;
    uVar23 = uVar11 ^ uVar23;
    uVar6 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar14 = uVar14 + local_98 + uVar6;
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar11 = uVar11 + uVar13;
    uVar6 = uVar11 ^ uVar6;
    uVar4 = uVar4 + local_80 + uVar7;
    uVar23 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar18 = uVar18 ^ uVar4;
    uVar10 = uVar18 >> 0x20 | uVar18 << 0x20;
    uVar22 = uVar22 + uVar10;
    uVar7 = uVar22 ^ uVar7;
    uVar6 = uVar7 >> 0x18 | uVar7 << 0x28;
    uVar4 = uVar4 + local_88 + uVar6;
    uVar10 = uVar10 ^ uVar4;
    uVar7 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar22 = uVar22 + uVar7;
    uVar6 = uVar22 ^ uVar6;
    local_128[0] = local_128[0] + local_b0 + uVar5;
    uVar20 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar21 = uVar21 ^ local_128[0];
    uVar10 = uVar21 >> 0x20 | uVar21 << 0x20;
    uVar19 = uVar19 + uVar10;
    uVar5 = uVar19 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    local_128[0] = local_128[0] + local_90 + uVar6;
    uVar10 = uVar10 ^ local_128[0];
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar19 = uVar19 + uVar10;
    uVar6 = uVar19 ^ uVar6;
    uVar3 = uVar3 + uVar23 + local_40;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar10 = uVar3 ^ uVar10;
    uVar6 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar22 = uVar22 + uVar6;
    uVar23 = uVar23 ^ uVar22;
    uVar10 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar3 = uVar3 + local_60 + uVar10;
    uVar6 = uVar3 ^ uVar6;
    uVar21 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar22 = uVar22 + uVar21;
    uVar10 = uVar10 ^ uVar22;
    uVar23 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar14 = uVar14 + uVar20 + local_70;
    uVar12 = uVar14 ^ uVar12;
    uVar6 = uVar12 >> 0x20 | uVar12 << 0x20;
    uVar19 = uVar19 + uVar6;
    uVar20 = uVar19 ^ uVar20;
    uVar10 = uVar20 >> 0x18 | uVar20 << 0x28;
    uVar14 = uVar14 + uVar10 + local_48;
    uVar6 = uVar14 ^ uVar6;
    uVar20 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar19 = uVar19 + uVar20;
    uVar10 = uVar19 ^ uVar10;
    uVar4 = uVar4 + local_a0 + uVar5;
    uVar12 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar9 = uVar9 + uVar13;
    uVar5 = uVar9 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    uVar4 = uVar4 + local_58 + uVar6;
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar9 = uVar9 + uVar13;
    uVar6 = uVar9 ^ uVar6;
    local_128[0] = local_128[0] + uVar17 + local_50;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar7 = local_128[0] ^ uVar7;
    uVar6 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar11 = uVar11 + uVar6;
    uVar17 = uVar11 ^ uVar17;
    uVar10 = uVar17 >> 0x18 | uVar17 << 0x28;
    local_128[0] = local_128[0] + uVar10 + local_b8;
    uVar6 = local_128[0] ^ uVar6;
    uVar18 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar11 = uVar11 + uVar18;
    uVar10 = uVar11 ^ uVar10;
    uVar6 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar3 = uVar3 + uVar6 + local_b8;
    uVar20 = uVar20 ^ uVar3;
    uVar10 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar9 = uVar9 + uVar10;
    uVar6 = uVar9 ^ uVar6;
    uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
    uVar3 = uVar3 + local_b0 + uVar6;
    uVar10 = uVar10 ^ uVar3;
    uVar7 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar9 = uVar9 + uVar7;
    uVar6 = uVar9 ^ uVar6;
    uVar14 = uVar14 + local_a8 + uVar23;
    uVar20 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar11 = uVar11 + uVar13;
    uVar23 = uVar11 ^ uVar23;
    uVar6 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar14 = uVar14 + local_a0 + uVar6;
    uVar13 = uVar13 ^ uVar14;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar11 = uVar11 + uVar13;
    uVar6 = uVar11 ^ uVar6;
    uVar4 = uVar4 + local_98 + uVar12;
    uVar17 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar18 = uVar18 ^ uVar4;
    uVar10 = uVar18 >> 0x20 | uVar18 << 0x20;
    uVar22 = uVar22 + uVar10;
    uVar12 = uVar22 ^ uVar12;
    uVar6 = uVar12 >> 0x18 | uVar12 << 0x28;
    uVar4 = uVar4 + local_90 + uVar6;
    uVar10 = uVar10 ^ uVar4;
    uVar12 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar22 = uVar22 + uVar12;
    uVar6 = uVar22 ^ uVar6;
    local_128[0] = local_128[0] + local_88 + uVar5;
    uVar23 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar21 = uVar21 ^ local_128[0];
    uVar10 = uVar21 >> 0x20 | uVar21 << 0x20;
    uVar19 = uVar19 + uVar10;
    uVar5 = uVar19 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    local_128[0] = local_128[0] + local_80 + uVar6;
    uVar10 = uVar10 ^ local_128[0];
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar19 = uVar19 + uVar10;
    uVar6 = uVar19 ^ uVar6;
    uVar3 = uVar3 + local_78 + uVar17;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar10 = uVar3 ^ uVar10;
    uVar6 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar22 = uVar22 + uVar6;
    uVar17 = uVar17 ^ uVar22;
    uVar10 = uVar17 >> 0x18 | uVar17 << 0x28;
    uVar3 = uVar3 + uVar10 + local_70;
    uVar14 = uVar14 + uVar23 + local_68;
    uVar6 = uVar3 ^ uVar6;
    uVar7 = uVar14 ^ uVar7;
    uVar21 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar22 = uVar22 + uVar21;
    uVar6 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar10 = uVar10 ^ uVar22;
    uVar19 = uVar19 + uVar6;
    uVar7 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar23 = uVar19 ^ uVar23;
    uVar10 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar14 = uVar14 + local_60 + uVar10;
    uVar6 = uVar14 ^ uVar6;
    uVar17 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar19 = uVar19 + uVar17;
    uVar10 = uVar19 ^ uVar10;
    uVar4 = uVar4 + local_58 + uVar5;
    uVar23 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar9 = uVar9 + uVar13;
    uVar5 = uVar9 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    uVar4 = uVar4 + uVar6 + local_50;
    uVar13 = uVar13 ^ uVar4;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar9 = uVar9 + uVar13;
    local_128[0] = local_128[0] + uVar20 + local_48;
    uVar6 = uVar9 ^ uVar6;
    uVar5 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar12 = local_128[0] ^ uVar12;
    uVar6 = uVar12 >> 0x20 | uVar12 << 0x20;
    uVar11 = uVar11 + uVar6;
    uVar20 = uVar11 ^ uVar20;
    uVar10 = uVar20 >> 0x18 | uVar20 << 0x28;
    local_128[0] = local_128[0] + uVar10 + local_40;
    uVar6 = local_128[0] ^ uVar6;
    uVar18 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar11 = uVar11 + uVar18;
    uVar10 = uVar11 ^ uVar10;
    uVar6 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar3 = uVar3 + uVar6 + local_48;
    uVar17 = uVar17 ^ uVar3;
    uVar10 = uVar17 >> 0x20 | uVar17 << 0x20;
    uVar9 = uVar9 + uVar10;
    uVar6 = uVar9 ^ uVar6;
    uVar6 = uVar6 >> 0x18 | uVar6 << 0x28;
    uVar3 = uVar3 + uVar6 + local_68;
    uVar14 = uVar14 + local_98 + uVar7;
    uVar10 = uVar10 ^ uVar3;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar9 = uVar9 + uVar10;
    uVar6 = uVar9 ^ uVar6;
    uVar13 = uVar13 ^ uVar14;
    uVar20 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
    uVar6 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar11 = uVar11 + uVar6;
    uVar7 = uVar11 ^ uVar7;
    uVar13 = uVar7 >> 0x18 | uVar7 << 0x28;
    uVar14 = uVar14 + local_78 + uVar13;
    uVar6 = uVar6 ^ uVar14;
    uVar12 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar4 = uVar4 + local_70 + uVar23;
    uVar11 = uVar11 + uVar12;
    uVar13 = uVar11 ^ uVar13;
    uVar18 = uVar18 ^ uVar4;
    uVar17 = uVar13 << 1 | (ulonglong)((longlong)uVar13 < 0);
    uVar7 = uVar18 >> 0x20 | uVar18 << 0x20;
    uVar22 = uVar22 + uVar7;
    uVar23 = uVar22 ^ uVar23;
    uVar13 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar4 = uVar4 + uVar13 + local_40;
    local_128[0] = local_128[0] + uVar5 + local_50;
    uVar21 = uVar21 ^ local_128[0];
    uVar6 = uVar21 >> 0x20 | uVar21 << 0x20;
    uVar7 = uVar7 ^ uVar4;
    uVar19 = uVar19 + uVar6;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    uVar22 = uVar22 + uVar7;
    uVar13 = uVar22 ^ uVar13;
    uVar5 = uVar19 ^ uVar5;
    uVar23 = uVar13 << 1 | (ulonglong)((longlong)uVar13 < 0);
    uVar13 = uVar5 >> 0x18 | uVar5 << 0x28;
    local_128[0] = local_128[0] + local_88 + uVar13;
    uVar6 = uVar6 ^ local_128[0];
    uVar3 = uVar3 + local_b0 + uVar17;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x30;
    uVar19 = uVar19 + uVar6;
    uVar13 = uVar19 ^ uVar13;
    uVar6 = uVar3 ^ uVar6;
    uVar5 = uVar13 << 1 | (ulonglong)((longlong)uVar13 < 0);
    uVar13 = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar22 = uVar22 + uVar13;
    uVar17 = uVar17 ^ uVar22;
    uVar17 = uVar17 >> 0x18 | uVar17 << 0x28;
    uVar3 = uVar3 + local_58 + uVar17;
    uVar13 = uVar3 ^ uVar13;
    uVar21 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar22 = uVar22 + uVar21;
    uVar17 = uVar17 ^ uVar22;
    uVar14 = uVar14 + local_b8 + uVar23;
    uVar10 = uVar14 ^ uVar10;
    uVar13 = uVar10 >> 0x20 | uVar10 << 0x20;
    uVar19 = uVar19 + uVar13;
    uVar23 = uVar19 ^ uVar23;
    uVar23 = uVar23 >> 0x18 | uVar23 << 0x28;
    uVar14 = uVar14 + local_a8 + uVar23;
    uVar13 = uVar14 ^ uVar13;
    uVar13 = uVar13 >> 0x10 | uVar13 << 0x30;
    uVar19 = uVar19 + uVar13;
    uVar23 = uVar19 ^ uVar23;
    uVar4 = uVar4 + local_60 + uVar5;
    uVar12 = uVar12 ^ uVar4;
    uVar10 = uVar12 >> 0x20 | uVar12 << 0x20;
    uVar9 = uVar9 + uVar10;
    uVar5 = uVar9 ^ uVar5;
    uVar6 = uVar5 >> 0x18 | uVar5 << 0x28;
    uVar4 = uVar4 + local_80 + uVar6;
    uVar10 = uVar10 ^ uVar4;
    uVar12 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar9 = uVar9 + uVar12;
    uVar6 = uVar9 ^ uVar6;
    local_128[0] = local_128[0] + local_90 + uVar20;
    uVar7 = local_128[0] ^ uVar7;
    uVar10 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar11 = uVar11 + uVar10;
    uVar20 = uVar11 ^ uVar20;
    uVar5 = uVar20 >> 0x18 | uVar20 << 0x28;
    local_128[0] = local_128[0] + local_a0 + uVar5;
    uVar10 = local_128[0] ^ uVar10;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar11 = uVar11 + uVar10;
    uVar3 = uVar3 ^ *param_1 ^ uVar9;
    *param_1 = uVar3;
    uVar5 = uVar11 ^ uVar5;
    uVar11 = uVar11 ^ uVar14 ^ param_1[1];
    param_1[1] = uVar11;
    uVar4 = uVar22 ^ uVar4 ^ param_1[2];
    param_1[2] = uVar4;
    local_128[0] = local_128[0] ^ param_1[3] ^ uVar19;
    param_1[3] = local_128[0];
    uVar22 = uVar13 ^ (uVar5 << 1 | (ulonglong)((longlong)uVar5 < 0)) ^ param_1[4];
    param_1[4] = uVar22;
    uVar19 = uVar12 ^ (uVar17 << 1 | (ulonglong)((longlong)uVar17 < 0)) ^ param_1[5];
    param_1[5] = uVar19;
    uVar13 = uVar10 ^ (uVar23 << 1 | (ulonglong)((longlong)uVar23 < 0)) ^ param_1[6];
    param_1[6] = uVar13;
    local_e8 = (uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0)) ^ param_1[7] ^ uVar21;
    param_2 = param_2 + uVar15;
    local_d8 = local_d8 - uVar15;
    param_1[7] = local_e8;
  } while (local_d8 != 0);
  return;
}



// FUNCTION 143db2560 BLAKE2s_Final body=138 status=ok
// SIG undefined BLAKE2s_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BLAKE2s_Final(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  _guard_xfg_dispatch_icall_nop
            ((void *)(param_2 + 0x30 + *(longlong *)(param_2 + 0x70)),0,
             0x40 - *(longlong *)(param_2 + 0x70));
  blake2s_compress(param_2,param_2 + 0x30,*(undefined8 *)(param_2 + 0x70));
  lVar1 = 8;
  lVar2 = param_2 - (longlong)param_1;
  do {
    *param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
    param_1 = param_1 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14004ff40(param_2,0x78);
  return 1;
}



// FUNCTION 143db25f0 BLAKE2s_Init body=198 status=ok
// SIG undefined BLAKE2s_Init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 BLAKE2s_Init(uint *param_1)

{
  undefined1 auStack_58 [32];
  uint local_38;
  uint local_30;
  undefined2 local_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  uint uStack_28;
  uint uStack_24;
  undefined7 uStack_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143db2600;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = 0x1010020;
  local_30 = 0;
  local_2c = 0;
  uStack_2a = 0;
  uStack_29 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 8,0,0x58);
  param_1[1] = 0xbb67ae85;
  *param_1 = local_38 ^ 0x6a09e667;
  param_1[6] = 0x1f83d9ab;
  param_1[2] = local_30 ^ 0x3c6ef372;
  param_1[7] = 0x5be0cd19;
  param_1[3] = CONCAT13(uStack_29,CONCAT12(uStack_2a,local_2c)) ^ 0xa54ff53a;
  param_1[4] = uStack_28 ^ 0x510e527f;
  param_1[5] = uStack_24 ^ 0x9b05688c;
  return 1;
}



// FUNCTION 143db26c0 BLAKE2s_Update body=207 status=ok
// SIG undefined BLAKE2s_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BLAKE2s_Update(longlong param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong _Size;
  ulonglong _Size_00;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  _Size_00 = 0x40 - lVar1;
  _Size = param_3;
  if (_Size_00 < param_3) {
    if (lVar1 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x30 + lVar1),param_2,_Size_00);
      blake2s_compress(param_1,param_1 + 0x30,0x40);
      lVar1 = 0;
      param_2 = (void *)((longlong)param_2 + _Size_00);
      *(undefined8 *)(param_1 + 0x70) = 0;
      param_3 = param_3 - _Size_00;
    }
    _Size = param_3;
    if (0x40 < param_3) {
      _Size = 0x40;
      if ((param_3 & 0x3f) != 0) {
        _Size = (ulonglong)((uint)param_3 & 0x3f);
      }
      blake2s_compress(param_1,param_2,param_3 - _Size);
      lVar1 = *(longlong *)(param_1 + 0x70);
      param_2 = (void *)((longlong)param_2 + (param_3 - _Size));
    }
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x30 + lVar1),param_2,_Size);
  *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + _Size;
  return 1;
}



// FUNCTION 143db2790 blake2s_compress body=6479 status=ok
// SIG undefined blake2s_compress(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void blake2s_compress(uint *param_1,int *param_2,ulonglong param_3)

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
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
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
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_8c;
  uint local_88;
  ulonglong local_38;
  
  uVar18 = *param_1;
  uVar17 = param_1[1];
  uVar30 = param_1[4];
  uVar25 = 0x40;
  if (param_3 < 0x40) {
    uVar25 = param_3;
  }
  local_8c = param_1[2];
  local_a0 = param_1[3];
  local_98 = param_1[5];
  local_9c = param_1[6];
  local_88 = param_1[7];
  local_38 = param_3;
  do {
    iVar1 = param_2[1];
    iVar2 = param_2[2];
    iVar3 = param_2[3];
    iVar4 = param_2[6];
    iVar5 = *param_2;
    iVar6 = param_2[4];
    iVar7 = param_2[5];
    iVar8 = param_2[8];
    iVar9 = param_2[7];
    iVar10 = param_2[9];
    iVar11 = param_2[10];
    iVar12 = param_2[0xb];
    iVar13 = param_2[0xc];
    iVar14 = param_2[0xd];
    iVar15 = param_2[0xe];
    iVar16 = param_2[0xf];
    param_1[8] = param_1[8] + (int)uVar25;
    param_1[9] = param_1[9] + (uint)(param_1[8] < uVar25);
    uVar18 = iVar5 + uVar18 + uVar30;
    uVar34 = param_1[8] ^ uVar18 ^ 0x510e527f;
    uVar35 = uVar34 >> 0x10 | uVar34 << 0x10;
    uVar34 = uVar35 + 0x6a09e667;
    uVar30 = uVar30 ^ uVar34;
    uVar31 = uVar30 >> 0xc | uVar30 << 0x14;
    uVar23 = uVar18 + uVar31 + iVar1;
    uVar35 = uVar35 ^ uVar23;
    uVar36 = uVar35 >> 8 | uVar35 << 0x18;
    uVar19 = local_98 + uVar17 + iVar2;
    uVar34 = uVar36 + uVar34;
    uVar18 = param_1[9] ^ uVar19 ^ 0x9b05688c;
    uVar31 = uVar34 ^ uVar31;
    uVar30 = uVar18 >> 0x10 | uVar18 << 0x10;
    uVar32 = uVar31 >> 7 | uVar31 << 0x19;
    uVar17 = uVar30 + 0xbb67ae85;
    local_98 = local_98 ^ uVar17;
    uVar18 = local_98 >> 0xc | local_98 << 0x14;
    uVar19 = uVar18 + iVar3 + uVar19;
    uVar20 = local_8c + local_9c + iVar6;
    uVar30 = uVar19 ^ uVar30;
    uVar33 = uVar30 >> 8 | uVar30 << 0x18;
    uVar30 = uVar20 ^ param_1[10] ^ 0x1f83d9ab;
    uVar17 = uVar17 + uVar33;
    uVar18 = uVar17 ^ uVar18;
    uVar35 = uVar18 >> 7 | uVar18 << 0x19;
    uVar31 = uVar30 >> 0x10 | uVar30 << 0x10;
    uVar30 = uVar31 + 0x3c6ef372;
    local_9c = uVar30 ^ local_9c;
    uVar18 = uVar23 + uVar35 + iVar8;
    uVar23 = local_9c >> 0xc | local_9c << 0x14;
    uVar20 = iVar7 + uVar23 + uVar20;
    uVar31 = uVar20 ^ uVar31;
    uVar22 = uVar31 >> 8 | uVar31 << 0x18;
    uVar30 = uVar30 + uVar22;
    uVar23 = uVar30 ^ uVar23;
    uVar21 = uVar23 >> 7 | uVar23 << 0x19;
    uVar24 = local_a0 + local_88 + iVar4;
    uVar23 = uVar24 ^ param_1[0xb] ^ 0x5be0cd19;
    uVar28 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar23 = uVar28 + 0xa54ff53a;
    local_88 = local_88 ^ uVar23;
    uVar31 = local_88 >> 0xc | local_88 << 0x14;
    uVar24 = uVar31 + iVar9 + uVar24;
    uVar28 = uVar24 ^ uVar28;
    uVar26 = uVar28 >> 8 | uVar28 << 0x18;
    uVar28 = uVar18 ^ uVar26;
    uVar28 = uVar28 >> 0x10 | uVar28 << 0x10;
    uVar23 = uVar23 + uVar26;
    uVar31 = uVar31 ^ uVar23;
    uVar31 = uVar31 >> 7 | uVar31 << 0x19;
    uVar30 = uVar28 + uVar30;
    uVar35 = uVar30 ^ uVar35;
    uVar35 = uVar35 >> 0xc | uVar35 << 0x14;
    uVar18 = uVar18 + iVar10 + uVar35;
    uVar28 = uVar18 ^ uVar28;
    uVar28 = uVar28 >> 8 | uVar28 << 0x18;
    uVar30 = uVar30 + uVar28;
    uVar35 = uVar30 ^ uVar35;
    uVar19 = uVar19 + iVar11 + uVar21;
    uVar26 = uVar35 >> 7 | uVar35 << 0x19;
    uVar36 = uVar19 ^ uVar36;
    uVar35 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar23 = uVar23 + uVar35;
    uVar21 = uVar23 ^ uVar21;
    uVar36 = uVar21 >> 0xc | uVar21 << 0x14;
    uVar19 = uVar19 + iVar12 + uVar36;
    uVar35 = uVar19 ^ uVar35;
    uVar27 = uVar35 >> 8 | uVar35 << 0x18;
    uVar23 = uVar23 + uVar27;
    uVar36 = uVar23 ^ uVar36;
    uVar21 = uVar36 >> 7 | uVar36 << 0x19;
    uVar20 = uVar20 + iVar13 + uVar31;
    uVar33 = uVar20 ^ uVar33;
    uVar35 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar31 ^ uVar34;
    uVar33 = uVar31 >> 0xc | uVar31 << 0x14;
    uVar20 = uVar20 + iVar14 + uVar33;
    uVar24 = uVar24 + iVar15 + uVar32;
    uVar35 = uVar20 ^ uVar35;
    uVar22 = uVar24 ^ uVar22;
    uVar36 = uVar35 >> 8 | uVar35 << 0x18;
    uVar34 = uVar34 + uVar36;
    uVar31 = uVar22 >> 0x10 | uVar22 << 0x10;
    uVar33 = uVar33 ^ uVar34;
    uVar17 = uVar17 + uVar31;
    uVar29 = uVar33 >> 7 | uVar33 << 0x19;
    uVar32 = uVar17 ^ uVar32;
    uVar35 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar24 = uVar24 + uVar35 + iVar16;
    uVar31 = uVar24 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar17 = uVar17 + uVar33;
    uVar35 = uVar17 ^ uVar35;
    uVar31 = uVar35 >> 7 | uVar35 << 0x19;
    uVar18 = uVar18 + uVar31 + iVar15;
    uVar27 = uVar18 ^ uVar27;
    uVar35 = uVar27 >> 0x10 | uVar27 << 0x10;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar31 = uVar31 >> 0xc | uVar31 << 0x14;
    uVar18 = uVar18 + uVar31 + iVar11;
    uVar35 = uVar18 ^ uVar35;
    uVar35 = uVar35 >> 8 | uVar35 << 0x18;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar19 = uVar19 + iVar6 + uVar26;
    uVar32 = uVar31 >> 7 | uVar31 << 0x19;
    uVar36 = uVar19 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar26 = uVar17 ^ uVar26;
    uVar22 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar19 = uVar19 + iVar8 + uVar22;
    uVar31 = uVar19 ^ uVar31;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar20 = uVar20 + iVar10 + uVar21;
    uVar17 = uVar17 + uVar36;
    uVar33 = uVar20 ^ uVar33;
    uVar22 = uVar17 ^ uVar22;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar30 = uVar30 + uVar31;
    uVar26 = uVar22 >> 7 | uVar22 << 0x19;
    uVar21 = uVar30 ^ uVar21;
    uVar22 = uVar21 >> 0xc | uVar21 << 0x14;
    uVar20 = uVar20 + uVar22 + iVar16;
    uVar24 = uVar24 + iVar14 + uVar29;
    uVar31 = uVar20 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar28 = uVar24 ^ uVar28;
    uVar30 = uVar30 + uVar33;
    uVar31 = uVar28 >> 0x10 | uVar28 << 0x10;
    uVar23 = uVar23 + uVar31;
    uVar22 = uVar30 ^ uVar22;
    uVar29 = uVar23 ^ uVar29;
    uVar28 = uVar29 >> 0xc | uVar29 << 0x14;
    uVar21 = uVar22 >> 7 | uVar22 << 0x19;
    uVar24 = uVar24 + iVar4 + uVar28;
    uVar31 = uVar24 ^ uVar31;
    uVar31 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar31;
    uVar28 = uVar23 ^ uVar28;
    uVar18 = uVar18 + iVar1 + uVar26;
    uVar27 = uVar28 >> 7 | uVar28 << 0x19;
    uVar31 = uVar18 ^ uVar31;
    uVar31 = uVar31 >> 0x10 | uVar31 << 0x10;
    uVar30 = uVar30 + uVar31;
    uVar26 = uVar30 ^ uVar26;
    uVar28 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar18 = uVar18 + iVar13 + uVar28;
    uVar31 = uVar18 ^ uVar31;
    uVar22 = uVar31 >> 8 | uVar31 << 0x18;
    uVar30 = uVar30 + uVar22;
    uVar28 = uVar30 ^ uVar28;
    uVar19 = uVar19 + iVar5 + uVar21;
    uVar26 = uVar28 >> 7 | uVar28 << 0x19;
    uVar35 = uVar19 ^ uVar35;
    uVar31 = uVar35 >> 0x10 | uVar35 << 0x10;
    uVar23 = uVar23 + uVar31;
    uVar21 = uVar23 ^ uVar21;
    uVar35 = uVar21 >> 0xc | uVar21 << 0x14;
    uVar19 = uVar19 + iVar2 + uVar35;
    uVar31 = uVar19 ^ uVar31;
    uVar21 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar21;
    uVar35 = uVar23 ^ uVar35;
    uVar20 = uVar20 + iVar12 + uVar27;
    uVar28 = uVar35 >> 7 | uVar35 << 0x19;
    uVar36 = uVar20 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar34 = uVar34 + uVar31;
    uVar27 = uVar27 ^ uVar34;
    uVar35 = uVar27 >> 0xc | uVar27 << 0x14;
    uVar20 = uVar20 + iVar9 + uVar35;
    uVar24 = uVar24 + iVar7 + uVar32;
    uVar31 = uVar20 ^ uVar31;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar33 = uVar24 ^ uVar33;
    uVar34 = uVar34 + uVar36;
    uVar35 = uVar35 ^ uVar34;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar27 = uVar35 >> 7 | uVar35 << 0x19;
    uVar32 = uVar17 ^ uVar32;
    uVar35 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar24 = uVar24 + iVar3 + uVar35;
    uVar31 = uVar24 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar17 = uVar17 + uVar33;
    uVar35 = uVar17 ^ uVar35;
    uVar31 = uVar35 >> 7 | uVar35 << 0x19;
    uVar18 = uVar18 + iVar12 + uVar31;
    uVar21 = uVar18 ^ uVar21;
    uVar35 = uVar21 >> 0x10 | uVar21 << 0x10;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar31 = uVar31 >> 0xc | uVar31 << 0x14;
    uVar18 = uVar18 + iVar8 + uVar31;
    uVar35 = uVar18 ^ uVar35;
    uVar35 = uVar35 >> 8 | uVar35 << 0x18;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar32 = uVar31 >> 7 | uVar31 << 0x19;
    uVar19 = uVar19 + iVar13 + uVar26;
    uVar36 = uVar19 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar26 = uVar17 ^ uVar26;
    uVar21 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar19 = uVar19 + iVar5 + uVar21;
    uVar20 = uVar20 + iVar7 + uVar28;
    uVar31 = uVar19 ^ uVar31;
    uVar33 = uVar20 ^ uVar33;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar17 = uVar17 + uVar36;
    uVar30 = uVar30 + uVar31;
    uVar21 = uVar17 ^ uVar21;
    uVar28 = uVar30 ^ uVar28;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
    uVar20 = uVar20 + iVar2 + uVar28;
    uVar24 = uVar24 + iVar16 + uVar27;
    uVar31 = uVar20 ^ uVar31;
    uVar22 = uVar24 ^ uVar22;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar30 = uVar30 + uVar33;
    uVar31 = uVar22 >> 0x10 | uVar22 << 0x10;
    uVar23 = uVar23 + uVar31;
    uVar28 = uVar30 ^ uVar28;
    uVar26 = uVar28 >> 7 | uVar28 << 0x19;
    uVar27 = uVar23 ^ uVar27;
    uVar22 = uVar27 >> 0xc | uVar27 << 0x14;
    uVar24 = uVar24 + iVar14 + uVar22;
    uVar31 = uVar24 ^ uVar31;
    uVar31 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar31;
    uVar22 = uVar23 ^ uVar22;
    uVar18 = uVar18 + uVar21 + iVar11;
    uVar29 = uVar22 >> 7 | uVar22 << 0x19;
    uVar31 = uVar18 ^ uVar31;
    uVar31 = uVar31 >> 0x10 | uVar31 << 0x10;
    uVar30 = uVar30 + uVar31;
    uVar21 = uVar30 ^ uVar21;
    uVar28 = uVar21 >> 0xc | uVar21 << 0x14;
    uVar18 = uVar18 + iVar15 + uVar28;
    uVar19 = uVar19 + iVar3 + uVar26;
    uVar31 = uVar18 ^ uVar31;
    uVar35 = uVar19 ^ uVar35;
    uVar22 = uVar31 >> 8 | uVar31 << 0x18;
    uVar31 = uVar35 >> 0x10 | uVar35 << 0x10;
    uVar30 = uVar30 + uVar22;
    uVar23 = uVar23 + uVar31;
    uVar28 = uVar30 ^ uVar28;
    uVar26 = uVar23 ^ uVar26;
    uVar27 = uVar28 >> 7 | uVar28 << 0x19;
    uVar35 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar19 = uVar19 + iVar4 + uVar35;
    uVar31 = uVar19 ^ uVar31;
    uVar21 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar21;
    uVar35 = uVar23 ^ uVar35;
    uVar20 = uVar20 + iVar9 + uVar29;
    uVar28 = uVar35 >> 7 | uVar35 << 0x19;
    uVar36 = uVar20 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar34 = uVar34 + uVar31;
    uVar29 = uVar29 ^ uVar34;
    uVar35 = uVar29 >> 0xc | uVar29 << 0x14;
    uVar20 = uVar20 + iVar1 + uVar35;
    uVar31 = uVar20 ^ uVar31;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar34 = uVar34 + uVar36;
    uVar35 = uVar35 ^ uVar34;
    uVar24 = uVar24 + uVar32 + iVar10;
    uVar26 = uVar35 >> 7 | uVar35 << 0x19;
    uVar33 = uVar24 ^ uVar33;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar32 = uVar17 ^ uVar32;
    uVar35 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar24 = uVar24 + iVar6 + uVar35;
    uVar31 = uVar24 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar17 = uVar17 + uVar33;
    uVar35 = uVar17 ^ uVar35;
    uVar31 = uVar35 >> 7 | uVar35 << 0x19;
    uVar18 = uVar18 + iVar9 + uVar31;
    uVar21 = uVar18 ^ uVar21;
    uVar35 = uVar21 >> 0x10 | uVar21 << 0x10;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar31 = uVar31 >> 0xc | uVar31 << 0x14;
    uVar18 = uVar18 + uVar31 + iVar10;
    uVar35 = uVar18 ^ uVar35;
    uVar35 = uVar35 >> 8 | uVar35 << 0x18;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar19 = uVar19 + iVar3 + uVar27;
    uVar29 = uVar31 >> 7 | uVar31 << 0x19;
    uVar36 = uVar19 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar27 = uVar17 ^ uVar27;
    uVar21 = uVar27 >> 0xc | uVar27 << 0x14;
    uVar19 = uVar19 + iVar1 + uVar21;
    uVar20 = uVar20 + iVar14 + uVar28;
    uVar31 = uVar19 ^ uVar31;
    uVar33 = uVar20 ^ uVar33;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar17 = uVar17 + uVar36;
    uVar30 = uVar30 + uVar31;
    uVar21 = uVar17 ^ uVar21;
    uVar28 = uVar30 ^ uVar28;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
    uVar20 = uVar20 + iVar13 + uVar28;
    uVar31 = uVar20 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar24 = uVar24 + iVar12 + uVar26;
    uVar30 = uVar30 + uVar33;
    uVar22 = uVar24 ^ uVar22;
    uVar28 = uVar30 ^ uVar28;
    uVar31 = uVar22 >> 0x10 | uVar22 << 0x10;
    uVar23 = uVar23 + uVar31;
    uVar32 = uVar28 >> 7 | uVar28 << 0x19;
    uVar26 = uVar23 ^ uVar26;
    uVar22 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar24 = uVar24 + iVar15 + uVar22;
    uVar31 = uVar24 ^ uVar31;
    uVar31 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar31;
    uVar22 = uVar23 ^ uVar22;
    uVar18 = uVar18 + iVar2 + uVar21;
    uVar27 = uVar22 >> 7 | uVar22 << 0x19;
    uVar31 = uVar18 ^ uVar31;
    uVar31 = uVar31 >> 0x10 | uVar31 << 0x10;
    uVar30 = uVar30 + uVar31;
    uVar21 = uVar30 ^ uVar21;
    uVar28 = uVar21 >> 0xc | uVar21 << 0x14;
    uVar18 = uVar18 + iVar4 + uVar28;
    uVar19 = uVar19 + iVar7 + uVar32;
    uVar31 = uVar18 ^ uVar31;
    uVar22 = uVar31 >> 8 | uVar31 << 0x18;
    uVar35 = uVar19 ^ uVar35;
    uVar30 = uVar30 + uVar22;
    uVar31 = uVar35 >> 0x10 | uVar35 << 0x10;
    uVar23 = uVar23 + uVar31;
    uVar28 = uVar30 ^ uVar28;
    uVar32 = uVar23 ^ uVar32;
    uVar26 = uVar28 >> 7 | uVar28 << 0x19;
    uVar35 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar19 = uVar19 + uVar35 + iVar11;
    uVar31 = uVar19 ^ uVar31;
    uVar21 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar21;
    uVar35 = uVar23 ^ uVar35;
    uVar20 = uVar20 + iVar6 + uVar27;
    uVar28 = uVar35 >> 7 | uVar35 << 0x19;
    uVar36 = uVar20 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar34 = uVar34 + uVar31;
    uVar27 = uVar27 ^ uVar34;
    uVar35 = uVar27 >> 0xc | uVar27 << 0x14;
    uVar20 = uVar20 + iVar5 + uVar35;
    uVar31 = uVar20 ^ uVar31;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar24 = uVar24 + iVar16 + uVar29;
    uVar34 = uVar34 + uVar36;
    uVar33 = uVar24 ^ uVar33;
    uVar35 = uVar35 ^ uVar34;
    uVar32 = uVar35 >> 7 | uVar35 << 0x19;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar29 = uVar17 ^ uVar29;
    uVar35 = uVar29 >> 0xc | uVar29 << 0x14;
    uVar24 = uVar24 + iVar8 + uVar35;
    uVar31 = uVar24 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar17 = uVar17 + uVar33;
    uVar35 = uVar17 ^ uVar35;
    uVar31 = uVar35 >> 7 | uVar35 << 0x19;
    uVar18 = uVar18 + iVar10 + uVar31;
    uVar21 = uVar18 ^ uVar21;
    uVar35 = uVar21 >> 0x10 | uVar21 << 0x10;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar31 = uVar31 >> 0xc | uVar31 << 0x14;
    uVar18 = uVar18 + iVar5 + uVar31;
    uVar35 = uVar18 ^ uVar35;
    uVar35 = uVar35 >> 8 | uVar35 << 0x18;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar19 = uVar19 + iVar7 + uVar26;
    uVar27 = uVar31 >> 7 | uVar31 << 0x19;
    uVar36 = uVar19 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar26 = uVar17 ^ uVar26;
    uVar21 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar19 = uVar19 + iVar9 + uVar21;
    uVar20 = uVar20 + iVar2 + uVar28;
    uVar31 = uVar19 ^ uVar31;
    uVar33 = uVar20 ^ uVar33;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar17 = uVar17 + uVar36;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar30 = uVar30 + uVar31;
    uVar21 = uVar17 ^ uVar21;
    uVar28 = uVar30 ^ uVar28;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
    uVar20 = uVar20 + iVar6 + uVar28;
    uVar31 = uVar20 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar30 = uVar30 + uVar33;
    uVar28 = uVar30 ^ uVar28;
    uVar26 = uVar28 >> 7 | uVar28 << 0x19;
    uVar24 = uVar24 + uVar32 + iVar11;
    uVar22 = uVar24 ^ uVar22;
    uVar31 = uVar22 >> 0x10 | uVar22 << 0x10;
    uVar23 = uVar23 + uVar31;
    uVar32 = uVar23 ^ uVar32;
    uVar22 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar24 = uVar24 + iVar16 + uVar22;
    uVar31 = uVar24 ^ uVar31;
    uVar31 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar31;
    uVar22 = uVar23 ^ uVar22;
    uVar18 = uVar18 + iVar15 + uVar21;
    uVar29 = uVar22 >> 7 | uVar22 << 0x19;
    uVar31 = uVar18 ^ uVar31;
    uVar31 = uVar31 >> 0x10 | uVar31 << 0x10;
    uVar30 = uVar30 + uVar31;
    uVar21 = uVar30 ^ uVar21;
    uVar28 = uVar21 >> 0xc | uVar21 << 0x14;
    uVar18 = uVar18 + iVar1 + uVar28;
    uVar19 = uVar19 + iVar12 + uVar26;
    uVar31 = uVar18 ^ uVar31;
    uVar35 = uVar19 ^ uVar35;
    uVar22 = uVar31 >> 8 | uVar31 << 0x18;
    uVar31 = uVar35 >> 0x10 | uVar35 << 0x10;
    uVar30 = uVar30 + uVar22;
    uVar23 = uVar23 + uVar31;
    uVar28 = uVar30 ^ uVar28;
    uVar26 = uVar23 ^ uVar26;
    uVar32 = uVar28 >> 7 | uVar28 << 0x19;
    uVar35 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar19 = uVar19 + iVar13 + uVar35;
    uVar31 = uVar19 ^ uVar31;
    uVar21 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar21;
    uVar35 = uVar23 ^ uVar35;
    uVar20 = uVar20 + iVar4 + uVar29;
    uVar28 = uVar35 >> 7 | uVar35 << 0x19;
    uVar36 = uVar20 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar34 = uVar34 + uVar31;
    uVar29 = uVar29 ^ uVar34;
    uVar35 = uVar29 >> 0xc | uVar29 << 0x14;
    uVar20 = uVar20 + iVar8 + uVar35;
    uVar31 = uVar20 ^ uVar31;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar24 = uVar24 + iVar3 + uVar27;
    uVar34 = uVar34 + uVar36;
    uVar35 = uVar35 ^ uVar34;
    uVar26 = uVar35 >> 7 | uVar35 << 0x19;
    uVar33 = uVar24 ^ uVar33;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar27 = uVar17 ^ uVar27;
    uVar35 = uVar27 >> 0xc | uVar27 << 0x14;
    uVar24 = uVar24 + iVar14 + uVar35;
    uVar31 = uVar24 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar17 = uVar17 + uVar33;
    uVar35 = uVar17 ^ uVar35;
    uVar31 = uVar35 >> 7 | uVar35 << 0x19;
    uVar18 = uVar18 + iVar2 + uVar31;
    uVar21 = uVar18 ^ uVar21;
    uVar35 = uVar21 >> 0x10 | uVar21 << 0x10;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar31 = uVar31 >> 0xc | uVar31 << 0x14;
    uVar18 = uVar18 + iVar13 + uVar31;
    uVar35 = uVar18 ^ uVar35;
    uVar35 = uVar35 >> 8 | uVar35 << 0x18;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar19 = uVar19 + iVar4 + uVar32;
    uVar27 = uVar31 >> 7 | uVar31 << 0x19;
    uVar36 = uVar19 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar32 = uVar17 ^ uVar32;
    uVar21 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar19 = uVar19 + uVar21 + iVar11;
    uVar31 = uVar19 ^ uVar31;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar17 = uVar17 + uVar36;
    uVar20 = uVar20 + iVar5 + uVar28;
    uVar21 = uVar17 ^ uVar21;
    uVar33 = uVar20 ^ uVar33;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar30 = uVar30 + uVar31;
    uVar28 = uVar30 ^ uVar28;
    uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
    uVar20 = uVar20 + iVar12 + uVar28;
    uVar24 = uVar24 + iVar8 + uVar26;
    uVar31 = uVar20 ^ uVar31;
    uVar22 = uVar24 ^ uVar22;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar30 = uVar30 + uVar33;
    uVar31 = uVar22 >> 0x10 | uVar22 << 0x10;
    uVar23 = uVar23 + uVar31;
    uVar28 = uVar30 ^ uVar28;
    uVar32 = uVar28 >> 7 | uVar28 << 0x19;
    uVar26 = uVar23 ^ uVar26;
    uVar22 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar24 = uVar24 + iVar3 + uVar22;
    uVar31 = uVar24 ^ uVar31;
    uVar31 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar31;
    uVar22 = uVar23 ^ uVar22;
    uVar18 = uVar18 + iVar6 + uVar21;
    uVar29 = uVar22 >> 7 | uVar22 << 0x19;
    uVar31 = uVar18 ^ uVar31;
    uVar31 = uVar31 >> 0x10 | uVar31 << 0x10;
    uVar30 = uVar30 + uVar31;
    uVar21 = uVar30 ^ uVar21;
    uVar28 = uVar21 >> 0xc | uVar21 << 0x14;
    uVar18 = uVar18 + iVar14 + uVar28;
    uVar19 = uVar19 + iVar9 + uVar32;
    uVar31 = uVar18 ^ uVar31;
    uVar35 = uVar19 ^ uVar35;
    uVar22 = uVar31 >> 8 | uVar31 << 0x18;
    uVar30 = uVar30 + uVar22;
    uVar31 = uVar35 >> 0x10 | uVar35 << 0x10;
    uVar23 = uVar23 + uVar31;
    uVar28 = uVar30 ^ uVar28;
    uVar32 = uVar23 ^ uVar32;
    uVar26 = uVar28 >> 7 | uVar28 << 0x19;
    uVar35 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar19 = uVar19 + iVar7 + uVar35;
    uVar31 = uVar19 ^ uVar31;
    uVar21 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar21;
    uVar35 = uVar23 ^ uVar35;
    uVar28 = uVar35 >> 7 | uVar35 << 0x19;
    uVar20 = uVar20 + iVar16 + uVar29;
    uVar36 = uVar20 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar34 = uVar34 + uVar31;
    uVar29 = uVar29 ^ uVar34;
    uVar35 = uVar29 >> 0xc | uVar29 << 0x14;
    uVar20 = uVar20 + iVar15 + uVar35;
    uVar31 = uVar20 ^ uVar31;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar34 = uVar34 + uVar36;
    uVar35 = uVar35 ^ uVar34;
    uVar24 = uVar24 + uVar27 + iVar1;
    uVar32 = uVar35 >> 7 | uVar35 << 0x19;
    uVar33 = uVar24 ^ uVar33;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar27 = uVar17 ^ uVar27;
    uVar35 = uVar27 >> 0xc | uVar27 << 0x14;
    uVar24 = uVar24 + iVar10 + uVar35;
    uVar31 = uVar24 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar17 = uVar17 + uVar33;
    uVar35 = uVar17 ^ uVar35;
    uVar31 = uVar35 >> 7 | uVar35 << 0x19;
    uVar18 = uVar18 + iVar13 + uVar31;
    uVar21 = uVar18 ^ uVar21;
    uVar35 = uVar21 >> 0x10 | uVar21 << 0x10;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar31 = uVar31 >> 0xc | uVar31 << 0x14;
    uVar18 = uVar18 + iVar7 + uVar31;
    uVar35 = uVar18 ^ uVar35;
    uVar35 = uVar35 >> 8 | uVar35 << 0x18;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar19 = uVar19 + uVar26 + iVar1;
    uVar27 = uVar31 >> 7 | uVar31 << 0x19;
    uVar36 = uVar19 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar26 = uVar17 ^ uVar26;
    uVar21 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar19 = uVar19 + iVar16 + uVar21;
    uVar31 = uVar19 ^ uVar31;
    uVar20 = uVar20 + iVar15 + uVar28;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar33 = uVar20 ^ uVar33;
    uVar17 = uVar17 + uVar36;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar30 = uVar30 + uVar31;
    uVar21 = uVar17 ^ uVar21;
    uVar28 = uVar30 ^ uVar28;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
    uVar20 = uVar20 + iVar14 + uVar28;
    uVar24 = uVar24 + iVar6 + uVar32;
    uVar31 = uVar20 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar22 = uVar24 ^ uVar22;
    uVar30 = uVar30 + uVar33;
    uVar28 = uVar30 ^ uVar28;
    uVar31 = uVar22 >> 0x10 | uVar22 << 0x10;
    uVar23 = uVar23 + uVar31;
    uVar26 = uVar28 >> 7 | uVar28 << 0x19;
    uVar32 = uVar23 ^ uVar32;
    uVar22 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar24 = uVar24 + uVar22 + iVar11;
    uVar31 = uVar24 ^ uVar31;
    uVar31 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar31;
    uVar22 = uVar23 ^ uVar22;
    uVar18 = uVar18 + iVar5 + uVar21;
    uVar29 = uVar22 >> 7 | uVar22 << 0x19;
    uVar31 = uVar18 ^ uVar31;
    uVar31 = uVar31 >> 0x10 | uVar31 << 0x10;
    uVar30 = uVar30 + uVar31;
    uVar21 = uVar30 ^ uVar21;
    uVar28 = uVar21 >> 0xc | uVar21 << 0x14;
    uVar18 = uVar18 + iVar9 + uVar28;
    uVar31 = uVar18 ^ uVar31;
    uVar19 = uVar19 + iVar4 + uVar26;
    uVar22 = uVar31 >> 8 | uVar31 << 0x18;
    uVar30 = uVar30 + uVar22;
    uVar28 = uVar30 ^ uVar28;
    uVar32 = uVar28 >> 7 | uVar28 << 0x19;
    uVar35 = uVar19 ^ uVar35;
    uVar31 = uVar35 >> 0x10 | uVar35 << 0x10;
    uVar23 = uVar23 + uVar31;
    uVar26 = uVar23 ^ uVar26;
    uVar35 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar19 = uVar19 + iVar3 + uVar35;
    uVar31 = uVar19 ^ uVar31;
    uVar21 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar21;
    uVar35 = uVar23 ^ uVar35;
    uVar20 = uVar20 + iVar10 + uVar29;
    uVar28 = uVar35 >> 7 | uVar35 << 0x19;
    uVar36 = uVar20 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar34 = uVar34 + uVar31;
    uVar29 = uVar29 ^ uVar34;
    uVar35 = uVar29 >> 0xc | uVar29 << 0x14;
    uVar20 = uVar20 + iVar2 + uVar35;
    uVar24 = uVar24 + iVar8 + uVar27;
    uVar31 = uVar20 ^ uVar31;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar33 = uVar24 ^ uVar33;
    uVar34 = uVar34 + uVar36;
    uVar35 = uVar35 ^ uVar34;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar26 = uVar35 >> 7 | uVar35 << 0x19;
    uVar27 = uVar17 ^ uVar27;
    uVar35 = uVar27 >> 0xc | uVar27 << 0x14;
    uVar24 = uVar24 + uVar35 + iVar12;
    uVar31 = uVar24 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar17 = uVar17 + uVar33;
    uVar35 = uVar17 ^ uVar35;
    uVar31 = uVar35 >> 7 | uVar35 << 0x19;
    uVar18 = uVar18 + iVar14 + uVar31;
    uVar21 = uVar18 ^ uVar21;
    uVar35 = uVar21 >> 0x10 | uVar21 << 0x10;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar31 = uVar31 >> 0xc | uVar31 << 0x14;
    uVar18 = uVar18 + uVar31 + iVar12;
    uVar35 = uVar18 ^ uVar35;
    uVar35 = uVar35 >> 8 | uVar35 << 0x18;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar19 = uVar19 + iVar9 + uVar32;
    uVar27 = uVar31 >> 7 | uVar31 << 0x19;
    uVar36 = uVar19 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar32 = uVar17 ^ uVar32;
    uVar21 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar19 = uVar19 + iVar15 + uVar21;
    uVar20 = uVar20 + iVar13 + uVar28;
    uVar31 = uVar19 ^ uVar31;
    uVar33 = uVar20 ^ uVar33;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar17 = uVar17 + uVar36;
    uVar30 = uVar30 + uVar31;
    uVar21 = uVar17 ^ uVar21;
    uVar28 = uVar30 ^ uVar28;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
    uVar20 = uVar20 + iVar1 + uVar28;
    uVar24 = uVar24 + iVar3 + uVar26;
    uVar31 = uVar20 ^ uVar31;
    uVar22 = uVar24 ^ uVar22;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar30 = uVar30 + uVar33;
    uVar31 = uVar22 >> 0x10 | uVar22 << 0x10;
    uVar23 = uVar23 + uVar31;
    uVar28 = uVar30 ^ uVar28;
    uVar32 = uVar28 >> 7 | uVar28 << 0x19;
    uVar26 = uVar23 ^ uVar26;
    uVar22 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar24 = uVar24 + iVar10 + uVar22;
    uVar31 = uVar24 ^ uVar31;
    uVar31 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar31;
    uVar22 = uVar23 ^ uVar22;
    uVar18 = uVar18 + iVar7 + uVar21;
    uVar29 = uVar22 >> 7 | uVar22 << 0x19;
    uVar31 = uVar18 ^ uVar31;
    uVar31 = uVar31 >> 0x10 | uVar31 << 0x10;
    uVar30 = uVar30 + uVar31;
    uVar21 = uVar30 ^ uVar21;
    uVar28 = uVar21 >> 0xc | uVar21 << 0x14;
    uVar18 = uVar18 + iVar5 + uVar28;
    uVar19 = uVar19 + iVar16 + uVar32;
    uVar31 = uVar18 ^ uVar31;
    uVar35 = uVar19 ^ uVar35;
    uVar22 = uVar31 >> 8 | uVar31 << 0x18;
    uVar31 = uVar35 >> 0x10 | uVar35 << 0x10;
    uVar30 = uVar30 + uVar22;
    uVar23 = uVar23 + uVar31;
    uVar28 = uVar30 ^ uVar28;
    uVar32 = uVar23 ^ uVar32;
    uVar26 = uVar28 >> 7 | uVar28 << 0x19;
    uVar35 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar19 = uVar19 + iVar6 + uVar35;
    uVar31 = uVar19 ^ uVar31;
    uVar21 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar21;
    uVar35 = uVar23 ^ uVar35;
    uVar20 = uVar20 + iVar8 + uVar29;
    uVar28 = uVar35 >> 7 | uVar35 << 0x19;
    uVar36 = uVar20 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar34 = uVar34 + uVar31;
    uVar29 = uVar29 ^ uVar34;
    uVar35 = uVar29 >> 0xc | uVar29 << 0x14;
    uVar20 = uVar20 + uVar35 + iVar4;
    uVar31 = uVar20 ^ uVar31;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar34 = uVar34 + uVar36;
    uVar35 = uVar35 ^ uVar34;
    uVar24 = uVar24 + iVar2 + uVar27;
    uVar32 = uVar35 >> 7 | uVar35 << 0x19;
    uVar33 = uVar24 ^ uVar33;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar27 = uVar17 ^ uVar27;
    uVar35 = uVar27 >> 0xc | uVar27 << 0x14;
    uVar24 = uVar24 + uVar35 + iVar11;
    uVar31 = uVar24 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar17 = uVar17 + uVar33;
    uVar35 = uVar17 ^ uVar35;
    uVar31 = uVar35 >> 7 | uVar35 << 0x19;
    uVar18 = uVar18 + uVar31 + iVar4;
    uVar21 = uVar18 ^ uVar21;
    uVar35 = uVar21 >> 0x10 | uVar21 << 0x10;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar31 = uVar31 >> 0xc | uVar31 << 0x14;
    uVar18 = uVar18 + iVar16 + uVar31;
    uVar35 = uVar18 ^ uVar35;
    uVar35 = uVar35 >> 8 | uVar35 << 0x18;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar19 = uVar19 + iVar15 + uVar26;
    uVar27 = uVar31 >> 7 | uVar31 << 0x19;
    uVar36 = uVar19 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar26 = uVar17 ^ uVar26;
    uVar21 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar19 = uVar19 + iVar10 + uVar21;
    uVar20 = uVar20 + iVar12 + uVar28;
    uVar31 = uVar19 ^ uVar31;
    uVar33 = uVar20 ^ uVar33;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar17 = uVar17 + uVar36;
    uVar30 = uVar30 + uVar31;
    uVar21 = uVar17 ^ uVar21;
    uVar28 = uVar30 ^ uVar28;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
    uVar20 = uVar20 + iVar3 + uVar28;
    uVar31 = uVar20 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar24 = uVar24 + iVar5 + uVar32;
    uVar30 = uVar30 + uVar33;
    uVar22 = uVar24 ^ uVar22;
    uVar28 = uVar30 ^ uVar28;
    uVar31 = uVar22 >> 0x10 | uVar22 << 0x10;
    uVar23 = uVar23 + uVar31;
    uVar26 = uVar28 >> 7 | uVar28 << 0x19;
    uVar32 = uVar23 ^ uVar32;
    uVar22 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar24 = uVar24 + iVar8 + uVar22;
    uVar31 = uVar24 ^ uVar31;
    uVar31 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar31;
    uVar22 = uVar23 ^ uVar22;
    uVar18 = uVar18 + iVar13 + uVar21;
    uVar32 = uVar22 >> 7 | uVar22 << 0x19;
    uVar31 = uVar18 ^ uVar31;
    uVar31 = uVar31 >> 0x10 | uVar31 << 0x10;
    uVar30 = uVar30 + uVar31;
    uVar21 = uVar30 ^ uVar21;
    uVar28 = uVar21 >> 0xc | uVar21 << 0x14;
    uVar18 = uVar18 + iVar2 + uVar28;
    uVar19 = uVar19 + iVar14 + uVar26;
    uVar31 = uVar18 ^ uVar31;
    uVar35 = uVar19 ^ uVar35;
    uVar22 = uVar31 >> 8 | uVar31 << 0x18;
    uVar31 = uVar35 >> 0x10 | uVar35 << 0x10;
    uVar30 = uVar30 + uVar22;
    uVar23 = uVar23 + uVar31;
    uVar28 = uVar30 ^ uVar28;
    uVar26 = uVar23 ^ uVar26;
    uVar21 = uVar28 >> 7 | uVar28 << 0x19;
    uVar35 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar19 = uVar19 + iVar9 + uVar35;
    uVar31 = uVar19 ^ uVar31;
    uVar28 = uVar31 >> 8 | uVar31 << 0x18;
    uVar23 = uVar23 + uVar28;
    uVar35 = uVar23 ^ uVar35;
    uVar20 = uVar20 + iVar1 + uVar32;
    uVar26 = uVar35 >> 7 | uVar35 << 0x19;
    uVar36 = uVar20 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar34 = uVar34 + uVar31;
    uVar32 = uVar32 ^ uVar34;
    uVar35 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar20 = uVar20 + uVar35 + iVar6;
    uVar31 = uVar20 ^ uVar31;
    uVar36 = uVar31 >> 8 | uVar31 << 0x18;
    uVar34 = uVar34 + uVar36;
    uVar35 = uVar35 ^ uVar34;
    uVar24 = uVar24 + uVar27 + iVar11;
    uVar32 = uVar35 >> 7 | uVar35 << 0x19;
    uVar33 = uVar24 ^ uVar33;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar27 = uVar17 ^ uVar27;
    uVar35 = uVar27 >> 0xc | uVar27 << 0x14;
    uVar24 = uVar24 + iVar7 + uVar35;
    uVar31 = uVar24 ^ uVar31;
    uVar33 = uVar31 >> 8 | uVar31 << 0x18;
    uVar17 = uVar17 + uVar33;
    uVar35 = uVar17 ^ uVar35;
    uVar31 = uVar35 >> 7 | uVar35 << 0x19;
    uVar18 = uVar18 + uVar31 + iVar11;
    uVar28 = uVar18 ^ uVar28;
    uVar35 = uVar28 >> 0x10 | uVar28 << 0x10;
    uVar34 = uVar34 + uVar35;
    uVar31 = uVar34 ^ uVar31;
    uVar31 = uVar31 >> 0xc | uVar31 << 0x14;
    uVar18 = uVar18 + iVar2 + uVar31;
    uVar35 = uVar18 ^ uVar35;
    uVar28 = uVar35 >> 8 | uVar35 << 0x18;
    uVar34 = uVar34 + uVar28;
    uVar31 = uVar34 ^ uVar31;
    uVar19 = uVar19 + iVar8 + uVar21;
    uVar29 = uVar31 >> 7 | uVar31 << 0x19;
    uVar36 = uVar19 ^ uVar36;
    uVar31 = uVar36 >> 0x10 | uVar36 << 0x10;
    uVar17 = uVar17 + uVar31;
    uVar21 = uVar17 ^ uVar21;
    uVar35 = uVar21 >> 0xc | uVar21 << 0x14;
    uVar19 = uVar19 + uVar35 + iVar6;
    uVar20 = uVar20 + iVar9 + uVar26;
    uVar31 = uVar19 ^ uVar31;
    uVar33 = uVar20 ^ uVar33;
    uVar21 = uVar31 >> 8 | uVar31 << 0x18;
    uVar17 = uVar17 + uVar21;
    uVar31 = uVar33 >> 0x10 | uVar33 << 0x10;
    uVar30 = uVar30 + uVar31;
    uVar35 = uVar17 ^ uVar35;
    uVar26 = uVar30 ^ uVar26;
    uVar33 = uVar35 >> 7 | uVar35 << 0x19;
    uVar35 = uVar26 >> 0xc | uVar26 << 0x14;
    uVar20 = uVar20 + iVar4 + uVar35;
    uVar31 = uVar20 ^ uVar31;
    uVar26 = uVar31 >> 8 | uVar31 << 0x18;
    uVar30 = uVar30 + uVar26;
    uVar35 = uVar30 ^ uVar35;
    uVar27 = uVar35 >> 7 | uVar35 << 0x19;
    uVar24 = uVar24 + iVar1 + uVar32;
    uVar22 = uVar24 ^ uVar22;
    uVar35 = uVar22 >> 0x10 | uVar22 << 0x10;
    uVar23 = uVar23 + uVar35;
    uVar32 = uVar23 ^ uVar32;
    uVar31 = uVar32 >> 0xc | uVar32 << 0x14;
    uVar24 = uVar24 + iVar7 + uVar31;
    uVar35 = uVar24 ^ uVar35;
    uVar35 = uVar35 >> 8 | uVar35 << 0x18;
    uVar23 = uVar23 + uVar35;
    uVar31 = uVar23 ^ uVar31;
    uVar31 = uVar31 >> 7 | uVar31 << 0x19;
    uVar18 = uVar18 + iVar16 + uVar33;
    uVar35 = uVar18 ^ uVar35;
    uVar36 = uVar35 >> 0x10 | uVar35 << 0x10;
    uVar30 = uVar30 + uVar36;
    uVar33 = uVar30 ^ uVar33;
    uVar35 = uVar33 >> 0xc | uVar33 << 0x14;
    uVar18 = uVar18 + iVar12 + uVar35;
    uVar36 = uVar18 ^ uVar36;
    uVar22 = uVar36 >> 8 | uVar36 << 0x18;
    uVar30 = uVar30 + uVar22;
    uVar35 = uVar30 ^ uVar35;
    uVar19 = uVar19 + iVar10 + uVar27;
    uVar28 = uVar19 ^ uVar28;
    uVar33 = uVar28 >> 0x10 | uVar28 << 0x10;
    uVar23 = uVar23 + uVar33;
    uVar27 = uVar23 ^ uVar27;
    uVar36 = uVar27 >> 0xc | uVar27 << 0x14;
    uVar19 = uVar19 + iVar15 + uVar36;
    uVar33 = uVar19 ^ uVar33;
    uVar32 = uVar33 >> 8 | uVar33 << 0x18;
    uVar23 = uVar23 + uVar32;
    uVar36 = uVar23 ^ uVar36;
    uVar20 = uVar20 + iVar3 + uVar31;
    uVar21 = uVar20 ^ uVar21;
    uVar33 = uVar21 >> 0x10 | uVar21 << 0x10;
    uVar34 = uVar34 + uVar33;
    uVar31 = uVar31 ^ uVar34;
    uVar28 = uVar31 >> 0xc | uVar31 << 0x14;
    uVar20 = uVar20 + iVar13 + uVar28;
    uVar24 = uVar24 + iVar14 + uVar29;
    uVar33 = uVar20 ^ uVar33;
    uVar26 = uVar24 ^ uVar26;
    uVar21 = uVar33 >> 8 | uVar33 << 0x18;
    uVar34 = uVar34 + uVar21;
    uVar28 = uVar28 ^ uVar34;
    uVar33 = uVar26 >> 0x10 | uVar26 << 0x10;
    uVar17 = uVar17 + uVar33;
    uVar29 = uVar17 ^ uVar29;
    uVar31 = uVar29 >> 0xc | uVar29 << 0x14;
    uVar24 = uVar24 + iVar5 + uVar31;
    uVar33 = uVar24 ^ uVar33;
    uVar33 = uVar33 >> 8 | uVar33 << 0x18;
    uVar17 = uVar17 + uVar33;
    uVar31 = uVar17 ^ uVar31;
    uVar18 = uVar18 ^ *param_1 ^ uVar34;
    *param_1 = uVar18;
    uVar17 = uVar17 ^ uVar19 ^ param_1[1];
    param_1[1] = uVar17;
    local_8c = uVar30 ^ uVar20 ^ param_1[2];
    param_1[2] = local_8c;
    local_a0 = uVar23 ^ uVar24 ^ param_1[3];
    param_1[3] = local_a0;
    uVar30 = (uVar31 >> 7 | uVar31 << 0x19) ^ uVar32 ^ param_1[4];
    param_1[4] = uVar30;
    local_98 = (uVar35 >> 7 | uVar35 << 0x19) ^ uVar21 ^ param_1[5];
    param_1[5] = local_98;
    local_9c = (uVar36 >> 7 | uVar36 << 0x19) ^ uVar33 ^ param_1[6];
    param_2 = (int *)((longlong)param_2 + uVar25);
    param_1[6] = local_9c;
    local_88 = (uVar28 >> 7 | uVar28 << 0x19) ^ uVar22 ^ param_1[7];
    local_38 = local_38 - uVar25;
    param_1[7] = local_88;
  } while (local_38 != 0);
  return;
}



// FUNCTION 143db40e0 MDC2_Final body=127 status=ok
// SIG undefined MDC2_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 MDC2_Final(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_2;
  uVar2 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    if (param_2[7] != 2) goto LAB_143db4140;
LAB_143db410e:
    *(undefined1 *)(uVar2 + 4 + (longlong)param_2) = 0x80;
    uVar2 = (ulonglong)(uVar1 + 1);
  }
  else if (param_2[7] == 2) goto LAB_143db410e;
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)param_2 + uVar2 + 4),0,(ulonglong)(8 - (int)uVar2));
  mdc2_body(param_2,param_2 + 1,8);
LAB_143db4140:
  *param_1 = *(undefined8 *)(param_2 + 3);
  param_1[1] = *(undefined8 *)(param_2 + 5);
  return 1;
}



// FUNCTION 143db4160 FUN_143db4160 body=47 status=ok
// SIG undefined FUN_143db4160(void)

undefined8 FUN_143db4160(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[7] = 1;
  *(undefined8 *)(param_1 + 3) = 0x5252525252525252;
  *(undefined8 *)(param_1 + 5) = 0x2525252525252525;
  return 1;
}



// FUNCTION 143db4190 MDC2_Update body=204 status=ok
// SIG undefined MDC2_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 MDC2_Update(uint *param_1,void *param_2,ulonglong param_3)

{
  void *_Dst;
  size_t sVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_1;
  if (uVar2 != 0) {
    sVar1 = 8 - uVar2;
    _Dst = (void *)((longlong)param_1 + uVar2 + 4);
    if (param_3 < sVar1) {
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3);
      *param_1 = *param_1 + (int)param_3;
      return 1;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,sVar1);
    *param_1 = 0;
    param_3 = param_3 - sVar1;
    param_2 = (void *)((longlong)param_2 + sVar1);
    mdc2_body(param_1,param_1 + 1,8);
  }
  uVar2 = param_3 & 0xfffffffffffffff8;
  if (uVar2 != 0) {
    mdc2_body(param_1,param_2,uVar2);
  }
  sVar1 = param_3 - uVar2;
  if (sVar1 != 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 1,(void *)(uVar2 + (longlong)param_2),sVar1);
    *param_1 = (uint)sVar1;
  }
  return 1;
}



// FUNCTION 143db4260 mdc2_body body=507 status=ok
// SIG undefined mdc2_body(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void mdc2_body(longlong param_1,uint *param_2,longlong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  if (param_3 != 0) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
    pbVar1 = (byte *)(param_1 + 0xc);
    lVar3 = (param_3 - 1U >> 3) + 1;
    pbVar2 = (byte *)(param_1 + 0x14);
    do {
      uVar5 = *param_2;
      uVar4 = param_2[1];
      *pbVar1 = *pbVar1 & 0xdf;
      *pbVar2 = *pbVar2 & 0xbf;
      *pbVar1 = *pbVar1 | 0x40;
      *pbVar2 = *pbVar2 | 0x20;
      local_b8 = uVar5;
      local_b4 = uVar4;
      local_b0 = uVar5;
      local_ac = uVar4;
      DES_set_odd_parity(pbVar1);
      DES_set_key_unchecked(pbVar1,local_a8);
      DES_encrypt1(&local_b0,local_a8,1);
      DES_set_odd_parity(pbVar2);
      DES_set_key_unchecked(pbVar2,local_a8);
      DES_encrypt1(&local_b8,local_a8,1);
      local_b8 = local_b8 ^ uVar5;
      uVar5 = uVar5 ^ local_b0;
      local_b4 = local_b4 ^ uVar4;
      uVar4 = uVar4 ^ local_ac;
      *pbVar1 = (byte)uVar5;
      *(char *)(param_1 + 0xd) = (char)(uVar5 >> 8);
      *(char *)(param_1 + 0xe) = (char)(uVar5 >> 0x10);
      *(char *)(param_1 + 0xf) = (char)(uVar5 >> 0x18);
      *(char *)(param_1 + 0x10) = (char)local_b4;
      *(char *)(param_1 + 0x11) = (char)(local_b4 >> 8);
      *(char *)(param_1 + 0x12) = (char)(local_b4 >> 0x10);
      *(char *)(param_1 + 0x13) = (char)(local_b4 >> 0x18);
      *pbVar2 = (byte)local_b8;
      *(char *)(param_1 + 0x15) = (char)(local_b8 >> 8);
      *(char *)(param_1 + 0x16) = (char)(local_b8 >> 0x10);
      *(char *)(param_1 + 0x17) = (char)(local_b8 >> 0x18);
      *(char *)(param_1 + 0x18) = (char)uVar4;
      *(char *)(param_1 + 0x19) = (char)(uVar4 >> 8);
      *(char *)(param_1 + 0x1a) = (char)(uVar4 >> 0x10);
      *(char *)(param_1 + 0x1b) = (char)(uVar4 >> 0x18);
      lVar3 = lVar3 + -1;
      param_2 = param_2 + 2;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143db4460 RIPEMD160_Final body=385 status=ok
// SIG undefined RIPEMD160_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RIPEMD160_Final(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x17];
  puVar1 = param_2 + 7;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    ripemd160_block_data_order(param_2,puVar1,1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_2 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined1 *)((longlong)param_2 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x17);
  *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((longlong)param_2 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_2 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined1 *)((longlong)param_2 + 0x5b) = *(undefined1 *)((longlong)param_2 + 0x1b);
  ripemd160_block_data_order(param_2,puVar1,1);
  param_2[0x17] = 0;
  FUN_14004ff40(puVar1,0x40);
  uVar3 = *param_2;
  *param_1 = (char)uVar3;
  param_1[1] = (char)((uint)uVar3 >> 8);
  param_1[2] = (char)((uint)uVar3 >> 0x10);
  param_1[3] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[1];
  param_1[4] = (char)uVar3;
  param_1[5] = (char)((uint)uVar3 >> 8);
  param_1[6] = (char)((uint)uVar3 >> 0x10);
  param_1[7] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[2];
  param_1[8] = (char)uVar3;
  param_1[9] = (char)((uint)uVar3 >> 8);
  param_1[10] = (char)((uint)uVar3 >> 0x10);
  param_1[0xb] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[3];
  param_1[0xc] = (char)uVar3;
  param_1[0xd] = (char)((uint)uVar3 >> 8);
  param_1[0xe] = (char)((uint)uVar3 >> 0x10);
  param_1[0xf] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[4];
  param_1[0x10] = (char)uVar3;
  param_1[0x11] = (char)((uint)uVar3 >> 8);
  param_1[0x12] = (char)((uint)uVar3 >> 0x10);
  param_1[0x13] = (char)((uint)uVar3 >> 0x18);
  return 1;
}



// FUNCTION 143db45f0 RIPEMD160_Update body=307 status=ok
// SIG undefined RIPEMD160_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 RIPEMD160_Update(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0x14) + (int)param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x14)) {
      iVar2 = iVar2 + 1;
    }
    *(uint *)(param_1 + 0x14) = uVar3;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x18) = (int)(param_3 >> 0x1d) + iVar2;
    if (uVar4 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x1c);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar4;
      _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),param_2,_Size);
      ripemd160_block_data_order(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
    }
    uVar4 = param_3 >> 6;
    if (uVar4 != 0) {
      ripemd160_block_data_order(param_1,param_2,uVar4);
      param_2 = (void *)((longlong)param_2 + uVar4 * 0x40);
      param_3 = param_3 + uVar4 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x5c) = (int)param_3;
      _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x1c),param_2,param_3);
    }
  }
  return 1;
}


