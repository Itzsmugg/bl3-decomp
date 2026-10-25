// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141fe5420 Eval body=924 status=ok
// SIG undefined Eval(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void F3DPathExecutionToken::Eval
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  uint local_178;
  uint local_174;
  uint local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [64];
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  fVar14 = *(float *)(param_1 + 0x20);
  uVar18 = 0;
  if (0.0 <= fVar14) {
    if (1.0 < fVar14) {
      *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
      fVar14 = 1.0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
    fVar14 = 0.0;
  }
  if (*(char *)(param_1 + 0x27) != '\0') {
    fVar14 = 1.0 - fVar14;
    *(float *)(param_1 + 0x20) = fVar14;
  }
  local_1a8 = 1;
  FUN_1423af140(param_3,&local_188,fVar14,1);
  *param_4 = local_188;
  *(undefined4 *)(param_4 + 1) = local_180;
  local_1a8 = 1;
  FUN_1423b0270(param_3,&local_188,*(undefined4 *)(param_1 + 0x20),1);
  *param_5 = local_188;
  *(undefined4 *)(param_5 + 1) = local_180;
  puVar9 = (undefined8 *)FRotationMatrix::FRotationMatrix(local_d8,param_5);
  local_168 = *puVar9;
  uStack_160 = puVar9[1];
  local_158 = puVar9[2];
  uStack_150 = puVar9[3];
  local_148 = puVar9[4];
  uStack_140 = puVar9[5];
  local_138 = puVar9[6];
  uStack_130 = puVar9[7];
  cVar1 = *(char *)(param_1 + 0x25);
  local_198 = 0;
  local_190 = 0;
  if (cVar1 == '\0') {
    local_198 = 0x3f800000;
  }
  else if (cVar1 == '\x03') {
    local_198 = 0xbf800000;
  }
  else if (cVar1 == '\x01') {
    local_198 = 0x3f80000000000000;
  }
  else if (cVar1 == '\x04') {
    local_198 = 0xbf80000000000000;
  }
  else if (cVar1 == '\x02') {
    local_190 = 0x3f800000;
  }
  else if (cVar1 == '\x05') {
    local_190 = 0xbf800000;
  }
  cVar1 = *(char *)(param_1 + 0x24);
  local_178 = 0;
  local_174 = 0;
  if (cVar1 == '\0') {
    local_178 = 0x3f800000;
  }
  else if (cVar1 == '\x03') {
    local_178 = 0xbf800000;
  }
  else if (cVar1 == '\x01') {
    local_174 = 0x3f800000;
  }
  else if (cVar1 == '\x04') {
    local_174 = 0xbf800000;
  }
  else if (cVar1 == '\x02') {
    uVar18 = 0x3f800000;
  }
  else if (cVar1 == '\x05') {
    uVar18 = 0xbf800000;
  }
  local_178 = local_178 ^ 0x80000000;
  local_174 = local_174 ^ 0x80000000;
  local_170 = uVar18 ^ 0x80000000;
  FRotationMatrix::MakeFromXZ(&local_118,&local_178,&local_198);
  fVar5 = (float)local_158;
  fVar6 = local_158._4_4_;
  fVar7 = (float)uStack_150;
  fVar8 = uStack_150._4_4_;
  fVar14 = (float)local_168;
  fVar2 = local_168._4_4_;
  fVar3 = (float)uStack_160;
  fVar4 = uStack_160._4_4_;
  fVar11 = local_108 * (float)local_168;
  fVar12 = local_108 * local_168._4_4_;
  fVar13 = local_108 * (float)uStack_160;
  local_108 = local_108 * uStack_160._4_4_;
  local_168 = CONCAT44(fStack_114 * local_158._4_4_ + local_118 * local_168._4_4_ +
                       fStack_110 * local_148._4_4_ + fStack_10c * local_138._4_4_,
                       fStack_114 * (float)local_158 + local_118 * (float)local_168 +
                       fStack_110 * (float)local_148 + fStack_10c * (float)local_138);
  uStack_160 = CONCAT44(fStack_114 * uStack_150._4_4_ + local_118 * uStack_160._4_4_ +
                        fStack_110 * uStack_140._4_4_ + fStack_10c * uStack_130._4_4_,
                        fStack_114 * (float)uStack_150 + local_118 * (float)uStack_160 +
                        fStack_110 * (float)uStack_140 + fStack_10c * (float)uStack_130);
  fVar15 = fStack_f4 * (float)local_158;
  fVar16 = fStack_f4 * local_158._4_4_;
  fVar17 = fStack_f4 * (float)uStack_150;
  fStack_f4 = fStack_f4 * uStack_150._4_4_;
  local_158 = CONCAT44(fStack_104 * local_158._4_4_ + fVar12 + fStack_100 * local_148._4_4_ +
                       fStack_fc * local_138._4_4_,
                       fStack_104 * (float)local_158 + fVar11 + fStack_100 * (float)local_148 +
                       fStack_fc * (float)local_138);
  uStack_150 = CONCAT44(fStack_104 * uStack_150._4_4_ + local_108 + fStack_100 * uStack_140._4_4_ +
                        fStack_fc * uStack_130._4_4_,
                        fStack_104 * (float)uStack_150 + fVar13 + fStack_100 * (float)uStack_140 +
                        fStack_fc * (float)uStack_130);
  fVar11 = fStack_e0 * (float)local_148;
  fVar12 = fStack_e0 * local_148._4_4_;
  fVar13 = fStack_e0 * (float)uStack_140;
  fStack_e0 = fStack_e0 * uStack_140._4_4_;
  local_148 = CONCAT44(fVar16 + local_f8 * fVar2 + fStack_f0 * local_148._4_4_ +
                       fStack_ec * local_138._4_4_,
                       fVar15 + local_f8 * fVar14 + fStack_f0 * (float)local_148 +
                       fStack_ec * (float)local_138);
  uStack_140 = CONCAT44(fStack_f4 + local_f8 * fVar4 + fStack_f0 * uStack_140._4_4_ +
                        fStack_ec * uStack_130._4_4_,
                        fVar17 + local_f8 * fVar3 + fStack_f0 * (float)uStack_140 +
                        fStack_ec * (float)uStack_130);
  local_138 = CONCAT44(fStack_e4 * fVar6 + local_e8 * fVar2 + fVar12 + fStack_dc * local_138._4_4_,
                       fStack_e4 * fVar5 + local_e8 * fVar14 + fVar11 + fStack_dc * (float)local_138
                      );
  uStack_130 = CONCAT44(fStack_e4 * fVar8 + local_e8 * fVar4 + fStack_e0 +
                        fStack_dc * uStack_130._4_4_,
                        fStack_e4 * fVar7 + local_e8 * fVar3 + fVar13 +
                        fStack_dc * (float)uStack_130);
  puVar9 = (undefined8 *)FMatrix::Rotator(&local_168,&local_188);
  *param_5 = *puVar9;
  *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar9 + 1);
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined4 *)param_5 = 0;
    *(undefined4 *)(param_5 + 1) = 0;
  }
  if (*(char *)(param_1 + 0x26) == '\0') {
    puVar10 = (undefined4 *)FUN_14238d0c0(param_2,local_d8);
    local_128 = *puVar10;
    uStack_124 = puVar10[1];
    uStack_120 = puVar10[2];
    uStack_11c = puVar10[3];
    puVar9 = (undefined8 *)FQuat::Rotator(&local_128,&local_188);
    *param_5 = *puVar9;
    *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar9 + 1);
  }
  return;
}



// FUNCTION 141fe57c0 Evaluate body=471 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieScene3DAttachSectionTemplate::Evaluate(longlong param_1)

{
  int iVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  longlong *in_stack_00000028;
  undefined1 auStack_198 [32];
  undefined8 **local_178;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *puStack_158;
  undefined4 local_148;
  undefined2 local_144;
  undefined8 **local_108 [8];
  byte local_c8;
  undefined1 local_c0 [104];
  undefined8 **local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_160 = *(undefined8 **)(param_1 + 0x20);
  puStack_158 = *(undefined8 **)(param_1 + 0x28);
  ppuVar2 = *(undefined8 ***)(param_1 + 0x38);
  ppuVar3 = *(undefined8 ***)(param_1 + 0x40);
  local_c8 = local_c8 & 0xfc;
  local_148 = *(undefined4 *)(param_1 + 0x48);
  local_144 = *(undefined2 *)(param_1 + 0x4c);
  local_168 = *(undefined8 **)(param_1 + 0x30);
  local_108[0] = (undefined8 **)FMemory::Malloc(0x48);
  pppuVar5 = local_108;
  if ((local_c8 & 2) == 0) {
    pppuVar5 = (undefined8 ***)local_108[0];
  }
  local_c8 = local_c8 | 1;
  *(undefined4 *)(pppuVar5 + 1) = local_148;
  *(undefined2 *)((longlong)pppuVar5 + 0xc) = local_144;
  *(undefined4 *)(pppuVar5 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)pppuVar5 + 0x14) = 0;
  pppuVar5[3] = ppuVar2;
  *(undefined1 *)(pppuVar5 + 4) = 1;
  pppuVar5[5] = (undefined8 **)local_160;
  pppuVar5[6] = (undefined8 **)puStack_158;
  *pppuVar5 = (undefined8 **)&PTR_FUN_144f45fc8;
  local_178 = local_108;
  pppuVar5[7] = (undefined8 **)local_168;
  pppuVar5[8] = ppuVar3;
  uVar4 = FMovieSceneExecutionTokens::FEntry::FEntry
                    (local_c0,in_stack_00000028 + 0x22,(longlong)in_stack_00000028 + 0x124,
                     (longlong)in_stack_00000028 + 0x134);
  iVar1 = (int)in_stack_00000028[1];
  *(int *)(in_stack_00000028 + 1) = iVar1 + 1;
  if (*(int *)((longlong)in_stack_00000028 + 0xc) < iVar1 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow
              (in_stack_00000028,iVar1);
  }
  FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar1 * 0xb0 + *in_stack_00000028,uVar4);
  if ((local_18 & 1) != 0) {
    pppuVar5 = local_58;
    if ((local_18 & 2) == 0) {
      pppuVar5 = (undefined8 ***)local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar5)(pppuVar5,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  if ((local_c8 & 1) != 0) {
    pppuVar5 = local_108;
    if ((local_c8 & 2) == 0) {
      pppuVar5 = (undefined8 ***)local_108[0];
    }
    local_c8 = local_c8 & 0xfe;
    (*(code *)**pppuVar5)(pppuVar5,0);
    if ((local_c8 & 2) == 0) {
      FMemory::Free(local_108[0]);
    }
  }
  return;
}



// FUNCTION 141fe59a0 Evaluate body=457 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieScene3DPathSectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong *param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined ****ppppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_158 [32];
  undefined ***local_138;
  undefined4 local_128;
  uint local_124;
  undefined4 uStack_120;
  undefined ***local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f3;
  byte local_f2;
  byte local_f1;
  byte local_f0;
  byte local_d8;
  undefined1 local_d0 [104];
  undefined8 **local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar1 = *(uint *)(param_3 + 0x24);
  local_128 = 0;
  if (uVar1 == 0x80000000) {
    lVar7 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar7 = 4;
    }
    uVar8 = *(ulonglong *)(lVar7 + param_3);
  }
  else {
    uStack_120 = 0;
    uVar8 = (ulonglong)uVar1;
    local_124 = uVar1;
  }
  cVar3 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x38,uVar8,&local_128);
  if (cVar3 != '\0') {
    local_f4 = *(undefined1 *)(param_1 + 0xd8);
    local_f3 = *(undefined1 *)(param_1 + 0xd9);
    local_f2 = *(byte *)(param_1 + 0xdc) & 1;
    local_110 = *(undefined4 *)(param_1 + 0x20);
    uStack_10c = *(undefined4 *)(param_1 + 0x24);
    uStack_108 = *(undefined4 *)(param_1 + 0x28);
    uStack_104 = *(undefined4 *)(param_1 + 0x2c);
    local_d8 = local_d8 | 3;
    local_100 = *(undefined8 *)(param_1 + 0x30);
    local_f1 = (byte)(*(uint *)(param_1 + 0xdc) >> 1) & 1;
    local_f0 = (byte)(*(uint *)(param_1 + 0xdc) >> 2) & 1;
    local_138 = (undefined ***)&local_118;
    local_f8 = local_128;
    local_118 = (undefined ***)&PTR_FUN_144f46320;
    uVar4 = FMovieSceneExecutionTokens::FEntry::FEntry
                      (local_d0,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
    iVar2 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
    }
    FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar2 * 0xb0 + *param_5,uVar4);
    if ((local_28 & 1) != 0) {
      pppuVar5 = local_68;
      if ((local_28 & 2) == 0) {
        pppuVar5 = (undefined8 ***)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**pppuVar5)(pppuVar5,0);
      if ((local_28 & 2) == 0) {
        FMemory::Free(local_68[0]);
      }
    }
    if ((local_d8 & 1) != 0) {
      ppppuVar6 = &local_118;
      if ((local_d8 & 2) == 0) {
        ppppuVar6 = (undefined ****)local_118;
      }
      local_d8 = local_d8 & 0xfe;
      (*(code *)**ppppuVar6)(ppppuVar6,0);
      if ((local_d8 & 2) == 0) {
        FMemory::Free(local_118);
      }
    }
  }
  return;
}



// FUNCTION 141fe5b70 Evaluate body=1973 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FMovieScene3DTransformTemplateData::Evaluate
          (longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  float *pfVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fStackX_1c;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [2];
  uint local_d0 [2];
  int local_c8 [4];
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar15 = 0;
  param_2[9] = 0;
  uVar5 = *(uint *)(param_1 + 0x644);
  local_d8[0] = 0;
  if (((uVar5 & 1) != 0) &&
     (cVar9 = FMovieSceneFloatChannel::Evaluate(param_1,param_3,local_d8), cVar9 != '\0')) {
    param_2[9] = param_2[9] | 1;
    *param_2 = local_d8[0];
  }
  local_d8[0] = 0;
  if (((uVar5 >> 1 & 1) != 0) &&
     (cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 0xa0,param_3,local_d8), cVar9 != '\0')) {
    param_2[1] = local_d8[0];
    param_2[9] = param_2[9] | 2;
  }
  local_d8[0] = 0;
  if (((uVar5 >> 2 & 1) != 0) &&
     (cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x140,param_3,local_d8), cVar9 != '\0')) {
    param_2[2] = local_d8[0];
    param_2[9] = param_2[9] | 4;
  }
  uVar18 = uVar5 >> 3;
  if (*(char *)(param_1 + 0x648) == '\0') {
    local_d8[0] = 0;
    if (((uVar18 & 1) != 0) &&
       (cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x1e0,param_3,local_d8), cVar9 != '\0'))
    {
      param_2[3] = local_d8[0];
      param_2[9] = param_2[9] | 8;
    }
    local_d8[0] = 0;
    if (((uVar5 >> 4 & 1) != 0) &&
       (cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x280,param_3,local_d8), cVar9 != '\0'))
    {
      param_2[4] = local_d8[0];
      param_2[9] = param_2[9] | 0x10;
    }
    local_d8[0] = 0;
    if (((uVar5 >> 5 & 1) == 0) ||
       (cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 800,param_3,local_d8),
       local_88 = local_d8[0], cVar9 == '\0')) goto LAB_141fe624c;
  }
  else {
    iVar21 = 0x7fffffff;
    iVar22 = -0x80000000;
    iVar14 = (int)param_3;
    if ((uVar18 & 1) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x1f0);
      uVar20 = (longlong)*(int *)(param_1 + 0x1f8);
      lVar8 = lVar15;
      while (uVar20 != 0) {
        uVar17 = uVar20 >> 1;
        uVar12 = (uint)uVar20;
        uVar20 = uVar17;
        if (*(int *)(lVar7 + (uVar17 + lVar8) * 4) <= iVar14) {
          lVar8 = (ulonglong)(uVar12 & 1) + uVar17 + lVar8;
        }
      }
      iVar6 = (int)lVar8;
      iVar13 = -1;
      if (-1 < iVar6 + -1) {
        iVar13 = iVar6 + -1;
      }
      iVar16 = -1;
      if (iVar6 < *(int *)(param_1 + 0x1f8)) {
        iVar16 = iVar6;
      }
      if ((iVar13 != -1) && (iVar16 != -1)) {
        iVar6 = *(int *)(lVar7 + (longlong)iVar13 * 4);
        if ((iVar6 != iVar14) && (iVar22 = -0x80000000, -0x80000000 < iVar6)) {
          iVar22 = iVar6;
        }
        iVar13 = *(int *)(lVar7 + (longlong)iVar16 * 4);
        if ((iVar13 != iVar14) && (iVar21 = 0x7fffffff, iVar6 < 0x7fffffff)) {
          iVar21 = iVar13;
        }
      }
    }
    local_a8 = uVar5 >> 4 & 0xffffff01;
    if ((uVar5 >> 4 & 1) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x290);
      uVar20 = (longlong)*(int *)(param_1 + 0x298);
      lVar8 = lVar15;
      while (uVar20 != 0) {
        uVar17 = uVar20 >> 1;
        uVar12 = (uint)uVar20;
        uVar20 = uVar17;
        if (*(int *)(lVar7 + (uVar17 + lVar8) * 4) <= iVar14) {
          lVar8 = (ulonglong)(uVar12 & 1) + uVar17 + lVar8;
        }
      }
      iVar6 = (int)lVar8;
      iVar13 = -1;
      if (-1 < iVar6 + -1) {
        iVar13 = iVar6 + -1;
      }
      iVar16 = -1;
      if (iVar6 < *(int *)(param_1 + 0x298)) {
        iVar16 = iVar6;
      }
      if ((iVar13 != -1) && (iVar16 != -1)) {
        iVar6 = *(int *)(lVar7 + (longlong)iVar13 * 4);
        if ((iVar6 != iVar14) && (iVar22 < iVar6)) {
          iVar22 = iVar6;
        }
        iVar13 = *(int *)(lVar7 + (longlong)iVar16 * 4);
        if ((iVar13 != iVar14) && (iVar6 < iVar21)) {
          iVar21 = iVar13;
        }
      }
    }
    local_d0[0] = uVar5 >> 5 & 0xffffff01;
    if ((uVar5 >> 5 & 1) != 0) {
      iVar6 = *(int *)(param_1 + 0x338);
      uVar20 = (ulonglong)iVar6;
      lVar7 = *(longlong *)(param_1 + 0x330);
      if (iVar6 != 0) {
        do {
          uVar17 = uVar20 >> 1;
          if (*(int *)(lVar7 + (uVar17 + lVar15) * 4) <= iVar14) {
            lVar15 = (ulonglong)((uint)uVar20 & 1) + uVar17 + lVar15;
          }
          uVar20 = uVar17;
        } while (uVar17 != 0);
      }
      iVar13 = (int)lVar15;
      iVar16 = -1;
      if (-1 < iVar13 + -1) {
        iVar16 = iVar13 + -1;
      }
      iVar19 = -1;
      if (iVar13 < iVar6) {
        iVar19 = iVar13;
      }
      if ((iVar16 != -1) && (iVar19 != -1)) {
        iVar6 = *(int *)(lVar7 + (longlong)iVar16 * 4);
        if ((iVar6 != iVar14) && (iVar22 < iVar6)) {
          iVar22 = iVar6;
        }
        iVar13 = *(int *)(lVar7 + (longlong)iVar19 * 4);
        if ((iVar13 != iVar14) && (iVar6 < iVar21)) {
          iVar21 = iVar13;
        }
      }
    }
    if ((iVar22 == -0x80000000) || (iVar21 == 0x7fffffff)) {
      local_b8 = 0;
      local_b0 = 0;
      if (((uVar18 & 1) != 0) &&
         (cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x1e0,param_3,local_d8), cVar9 != '\0'
         )) {
        local_b8 = CONCAT44(local_b8._4_4_,local_d8[0]);
      }
      if (((char)local_a8 != '\0') &&
         (cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x280,param_3,local_d8), cVar9 != '\0'
         )) {
        local_b8 = CONCAT44(local_d8[0],(undefined4)local_b8);
      }
      if (((char)local_d0[0] != '\0') &&
         (cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 800,param_3,local_d8), cVar9 != '\0'))
      {
        local_b0 = local_d8[0];
      }
      FQuat::MakeFromEuler(local_68,&local_b8);
      uVar11 = FRotator::FRotator(&local_a0,local_68);
      FRotator::Euler(uVar11,&local_90);
    }
    else {
      fStackX_1c = (float)((ulonglong)param_3 >> 0x20);
      local_a0 = 0;
      local_98 = 0;
      local_b8 = 0;
      local_b0 = 0;
      fVar1 = (((float)iVar14 + fStackX_1c) - (float)iVar22) / (float)(iVar21 - iVar22);
      if (0.0 <= fVar1) {
        if (1.0 <= fVar1) {
          fVar1 = 1.0;
        }
      }
      else {
        fVar1 = 0.0;
      }
      if ((uVar18 & 1) != 0) {
        local_c8[1] = 0;
        local_c8[0] = iVar22;
        cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x1e0,iVar22,local_d8);
        if (cVar9 != '\0') {
          local_a0 = CONCAT44(local_a0._4_4_,local_d8[0]);
        }
        local_c8[1] = 0;
        local_c8[0] = iVar21;
        cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x1e0,iVar21,local_d8);
        if (cVar9 != '\0') {
          local_b8 = CONCAT44(local_b8._4_4_,local_d8[0]);
        }
      }
      if ((char)local_a8 != '\0') {
        local_c8[1] = 0;
        local_c8[0] = iVar22;
        cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x280,iVar22,local_d8);
        if (cVar9 != '\0') {
          local_a0 = CONCAT44(local_d8[0],(undefined4)local_a0);
        }
        local_c8[1] = 0;
        local_c8[0] = iVar21;
        cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x280,iVar21,local_d8);
        if (cVar9 != '\0') {
          local_b8 = CONCAT44(local_d8[0],(undefined4)local_b8);
        }
      }
      if ((char)local_d0[0] != '\0') {
        local_c8[1] = 0;
        local_c8[0] = iVar22;
        cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 800,iVar22,local_d8);
        if (cVar9 != '\0') {
          local_98 = local_d8[0];
        }
        local_c8[1] = 0;
        local_c8[0] = iVar21;
        cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 800,iVar21,local_d8);
        if (cVar9 != '\0') {
          local_b0 = local_d8[0];
        }
      }
      FQuat::MakeFromEuler(local_68,&local_a0);
      FQuat::MakeFromEuler(local_58,&local_b8);
      pfVar10 = (float *)FQuat::Slerp_NotNormalized(local_c8,local_68,local_58,fVar1);
      fVar1 = *pfVar10;
      fVar2 = pfVar10[1];
      fVar3 = pfVar10[2];
      fVar4 = pfVar10[3];
      local_d0[0] = 0x322bcc77;
      auVar23._0_4_ = fVar1 * fVar1 + fVar3 * fVar3;
      auVar23._4_4_ = fVar2 * fVar2 + fVar4 * fVar4;
      auVar23._8_4_ = fVar3 * fVar3 + fVar1 * fVar1;
      auVar23._12_4_ = fVar4 * fVar4 + fVar2 * fVar2;
      fVar29 = auVar23._4_4_ + auVar23._0_4_;
      fVar30 = auVar23._8_4_ + auVar23._4_4_;
      fVar31 = auVar23._12_4_ + auVar23._8_4_;
      fVar32 = auVar23._0_4_ + auVar23._12_4_;
      auVar24._4_4_ = fVar30;
      auVar24._0_4_ = fVar29;
      auVar24._8_4_ = fVar31;
      auVar24._12_4_ = fVar32;
      auVar24 = rsqrtps(auVar23,auVar24);
      fVar25 = auVar24._0_4_;
      fVar26 = auVar24._4_4_;
      fVar27 = auVar24._8_4_;
      fVar28 = auVar24._12_4_;
      fVar25 = (_DAT_146acb920 - fVar25 * fVar25 * fVar29 * _DAT_146acb920) * fVar25 + fVar25;
      fVar26 = (fRam0000000146acb924 - fVar26 * fVar26 * fVar30 * fRam0000000146acb924) * fVar26 +
               fVar26;
      fVar27 = (fRam0000000146acb928 - fVar27 * fVar27 * fVar31 * fRam0000000146acb928) * fVar27 +
               fVar27;
      fVar28 = (fRam0000000146acb92c - fVar28 * fVar28 * fVar32 * fRam0000000146acb92c) * fVar28 +
               fVar28;
      local_78 = ((uint)(((_DAT_146acb920 - fVar25 * fVar25 * fVar29 * _DAT_146acb920) * fVar25 +
                         fVar25) * fVar1) ^ _DAT_146acb910) & -(uint)(1e-08 <= fVar29) ^
                 _DAT_146acb910;
      uStack_74 = ((uint)(((fRam0000000146acb924 - fVar26 * fVar26 * fVar30 * fRam0000000146acb924)
                           * fVar26 + fVar26) * fVar2) ^ uRam0000000146acb914) &
                  -(uint)(1e-08 <= fVar30) ^ uRam0000000146acb914;
      uStack_70 = ((uint)(((fRam0000000146acb928 - fVar27 * fVar27 * fVar31 * fRam0000000146acb928)
                           * fVar27 + fVar27) * fVar3) ^ uRam0000000146acb918) &
                  -(uint)(1e-08 <= fVar31) ^ uRam0000000146acb918;
      uStack_6c = ((uint)(((fRam0000000146acb92c - fVar28 * fVar28 * fVar32 * fRam0000000146acb92c)
                           * fVar28 + fVar28) * fVar4) ^ uRam0000000146acb91c) &
                  -(uint)(1e-08 <= fVar32) ^ uRam0000000146acb91c;
      uVar11 = FRotator::FRotator(local_c8,&local_78);
      FRotator::Euler(uVar11,&local_90);
    }
    param_2[3] = local_90;
    param_2[9] = param_2[9] | 8;
    param_2[4] = local_8c;
    param_2[9] = param_2[9] | 0x10;
  }
  param_2[5] = local_88;
  param_2[9] = param_2[9] | 0x20;
LAB_141fe624c:
  local_d0[0] = 0;
  if (((uVar5 >> 6 & 1) != 0) &&
     (cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x3c0,param_3,local_d0), cVar9 != '\0')) {
    param_2[6] = local_d0[0];
    param_2[9] = param_2[9] | 0x40;
  }
  local_d0[0] = 0;
  if (((uVar5 >> 7 & 1) != 0) &&
     (cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x460,param_3,local_d0), cVar9 != '\0')) {
    param_2[7] = local_d0[0];
    param_2[9] = param_2[9] | 0x80;
  }
  local_d0[0] = 0;
  if (((uVar5 >> 8 & 1) != 0) &&
     (cVar9 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x500,param_3,local_d0), cVar9 != '\0')) {
    param_2[8] = local_d0[0];
    param_2[9] = param_2[9] | 0x100;
  }
  return param_2;
}



// FUNCTION 141fe6330 Evaluate body=477 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneActorReferenceSectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong *param_5)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 ***pppuVar7;
  undefined ****ppppuVar8;
  ulonglong uVar9;
  undefined1 auStack_148 [32];
  undefined ***local_128;
  int local_118;
  undefined4 uStack_114;
  undefined ***local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  byte local_d0;
  undefined1 local_c8 [104];
  undefined8 **local_60 [8];
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  iVar3 = *(int *)(param_3 + 0x24);
  if (iVar3 == -0x80000000) {
    lVar4 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar4 = 4;
    }
    iVar3 = (int)*(undefined8 *)(lVar4 + param_3);
  }
  else {
    uStack_114 = 0;
    local_118 = iVar3;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    local_108 = *(undefined4 *)(param_1 + 0x60);
    uStack_104 = *(undefined4 *)(param_1 + 100);
    uStack_100 = *(undefined4 *)(param_1 + 0x68);
    uStack_fc = *(undefined4 *)(param_1 + 0x6c);
    local_f8 = *(undefined8 *)(param_1 + 0x70);
  }
  else {
    uVar2 = (longlong)*(int *)(param_1 + 0x58);
    lVar4 = 0;
    while (uVar2 != 0) {
      uVar9 = uVar2 >> 1;
      uVar6 = (uint)uVar2;
      uVar2 = uVar9;
      if (*(int *)(*(longlong *)(param_1 + 0x50) + (uVar9 + lVar4) * 4) <= iVar3) {
        lVar4 = (ulonglong)(uVar6 & 1) + uVar9 + lVar4;
      }
    }
    iVar3 = (int)lVar4 + -1;
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar3 * 0x18);
    local_108 = *puVar1;
    uStack_104 = puVar1[1];
    uStack_100 = puVar1[2];
    uStack_fc = puVar1[3];
    local_f8 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x10 + (longlong)iVar3 * 0x18);
  }
  local_d0 = local_d0 | 3;
  local_110 = (undefined ***)&PTR_FUN_144f473b8;
  local_128 = (undefined ***)&local_110;
  uVar5 = FMovieSceneExecutionTokens::FEntry::FEntry
                    (local_c8,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
  iVar3 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar3);
  }
  FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar3 * 0xb0 + *param_5,uVar5);
  if ((local_20 & 1) != 0) {
    pppuVar7 = local_60;
    if ((local_20 & 2) == 0) {
      pppuVar7 = (undefined8 ***)local_60[0];
    }
    local_20 = local_20 & 0xfe;
    (*(code *)**pppuVar7)(pppuVar7,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  if ((local_d0 & 1) != 0) {
    ppppuVar8 = &local_110;
    if ((local_d0 & 2) == 0) {
      ppppuVar8 = (undefined ****)local_110;
    }
    local_d0 = local_d0 & 0xfe;
    (*(code *)**ppppuVar8)(ppppuVar8,0);
    if ((local_d0 & 2) == 0) {
      FMemory::Free(local_110);
    }
  }
  return;
}



// FUNCTION 141fe6510 FUN_141fe6510 body=893 status=ok
// SIG undefined FUN_141fe6510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe6510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  undefined ****ppppuVar5;
  int *piVar6;
  undefined1 auStack_178 [32];
  undefined ***local_158;
  undefined4 local_148 [2];
  undefined1 local_140 [8];
  undefined4 *local_138;
  undefined ***local_130;
  undefined ***local_128;
  undefined8 local_120;
  byte local_108;
  byte local_e8;
  undefined **local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [8];
  undefined **local_88;
  undefined4 local_80;
  undefined8 **local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_e8 = local_e8 | 3;
  local_128 = (undefined ***)&PTR_FUN_144f48208;
  local_158 = (undefined ***)&local_128;
  local_120 = param_1;
  uVar2 = FMovieSceneExecutionTokens::FEntry::FEntry
                    (&local_d8,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
  iVar1 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
  }
  FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar1 * 0xb0 + *param_5,uVar2);
  if ((local_30 & 1) != 0) {
    pppuVar4 = local_70;
    if ((local_30 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_70[0];
    }
    local_30 = local_30 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
    if ((local_30 & 2) == 0) {
      FMemory::Free(local_70[0]);
    }
  }
  if ((local_e8 & 1) != 0) {
    ppppuVar5 = &local_128;
    if ((local_e8 & 2) == 0) {
      ppppuVar5 = (undefined ****)local_128;
    }
    local_e8 = local_e8 & 0xfe;
    (*(code *)**ppppuVar5)(ppppuVar5,0);
    if ((local_e8 & 2) == 0) {
      FMemory::Free(local_128);
    }
  }
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar6 < DAT_146acb9fc) {
    _Init_thread_header(&DAT_146acb9fc);
    if (DAT_146acb9fc == -1) {
      FKeyHandle::FKeyHandle(&DAT_146acb9f8);
      _Init_thread_footer(&DAT_146acb9fc);
    }
  }
  lVar3 = FMovieSceneExecutionTokens::FindShared(param_5,DAT_146acb9f8);
  if (lVar3 == 0) {
    local_d0 = 0;
    local_d8 = &PTR__scalar_deleting_destructor__144f481f8;
    local_c8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_88 = (undefined **)0x0;
    local_80 = 0;
    FUN_141fc79b0(&local_c8,local_148,param_2,0);
    local_d0 = 1000;
    if (*piVar6 < DAT_146acb9fc) {
      _Init_thread_header(&DAT_146acb9fc);
      if (DAT_146acb9fc == -1) {
        FKeyHandle::FKeyHandle(&DAT_146acb9f8);
        _Init_thread_footer(&DAT_146acb9fc);
      }
    }
    local_108 = local_108 & 0xfc;
    local_148[0] = DAT_146acb9f8;
    local_128 = (undefined ***)FMemory::Malloc(0x60);
    ppppuVar5 = &local_128;
    if ((local_108 & 2) == 0) {
      ppppuVar5 = (undefined ****)local_128;
    }
    local_108 = local_108 | 1;
    *ppppuVar5 = (undefined ***)&PTR_FUN_143f3edd8;
    *(undefined4 *)(ppppuVar5 + 1) = local_d0;
    *ppppuVar5 = (undefined ***)&PTR__scalar_deleting_destructor__144f481f8;
    ppppuVar5[2] = (undefined ***)0x0;
    ppppuVar5[3] = (undefined ***)0x0;
    ppppuVar5[6] = (undefined ***)0x0;
    ppppuVar5[7] = (undefined ***)0x0;
    *(undefined4 *)(ppppuVar5 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)ppppuVar5 + 0x44) = 0;
    ppppuVar5[10] = (undefined ***)0x0;
    *(undefined4 *)(ppppuVar5 + 0xb) = 0;
    TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=(ppppuVar5 + 2,&local_c8);
    if ((undefined ***)local_88 == (undefined ***)0x0) {
      _guard_xfg_dispatch_icall_nop(ppppuVar5 + 9,local_90,4);
    }
    if (ppppuVar5[10] != (undefined ***)0x0) {
      FMemory::Free();
    }
    ppppuVar5[10] = (undefined ***)local_88;
    local_88 = (undefined **)0x0;
    *(undefined4 *)(ppppuVar5 + 0xb) = local_80;
    local_138 = local_148;
    local_130 = (undefined ***)&local_128;
    local_80 = 0;
    FUN_140609050(param_5 + 2,local_140,&local_138,0);
    if ((local_108 & 1) != 0) {
      ppppuVar5 = &local_128;
      if ((local_108 & 2) == 0) {
        ppppuVar5 = (undefined ****)local_128;
      }
      local_108 = local_108 & 0xfe;
      (*(code *)**ppppuVar5)(ppppuVar5,0);
      if ((local_108 & 2) == 0) {
        FMemory::Free(local_128);
      }
    }
    local_80 = 0;
    if (local_88 != (undefined **)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_c8);
  }
  else {
    FUN_141fc79b0(lVar3 + 0x10,local_148,param_2);
  }
  return;
}



// FUNCTION 141fe6890 FUN_141fe6890 body=589 status=ok
// SIG undefined FUN_141fe6890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe6890(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_2e8 [32];
  undefined8 **local_2c8;
  undefined8 **local_2b8 [8];
  byte local_278;
  undefined1 local_270 [104];
  undefined8 **local_208 [8];
  byte local_1c8;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [160];
  undefined1 local_f8 [160];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  if (DAT_146b17150 != (longlong *)0x0) {
    cVar2 = (**(code **)(*DAT_146b17150 + 0x388))();
    if ((cVar2 != '\0') && (*(int *)(param_3 + 0x34) != 4)) {
      local_1b0 = *(undefined8 *)(param_1 + 0x20);
      local_1a8 = *(undefined4 *)(param_1 + 0x28);
      local_1a0 = *(undefined8 *)(param_1 + 0x30);
      local_1b8 = &PTR__scalar_deleting_destructor__144f47a78;
      FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_198,param_1 + 0x38);
      FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_f8,param_1 + 0xd8);
      local_58 = *(undefined4 *)(param_1 + 0x178);
      local_54 = *(undefined1 *)(param_1 + 0x17c);
      local_50 = *(undefined8 *)(param_1 + 0x180);
      local_48 = *(undefined4 *)(param_1 + 0x188);
      local_44 = *(undefined4 *)(param_1 + 0x18c);
      local_40 = *(undefined8 *)(param_1 + 400);
      TMulticastScriptDelegate<FWeakObjectPtr>::TMulticastScriptDelegate<FWeakObjectPtr>
                (local_38,param_1 + 0x198);
      TMulticastScriptDelegate<FWeakObjectPtr>::TMulticastScriptDelegate<FWeakObjectPtr>
                (local_28,param_1 + 0x1a8);
      local_278 = local_278 & 0xfc;
      local_2b8[0] = (undefined8 **)FMemory::Malloc(0x1a0,8);
      pppuVar4 = local_2b8;
      if ((local_278 & 2) == 0) {
        pppuVar4 = (undefined8 ***)local_2b8[0];
      }
      local_278 = local_278 | 1;
      *pppuVar4 = (undefined8 **)&PTR__scalar_deleting_destructor__144f47a78;
      FMovieSceneAudioSectionTemplateData::FMovieSceneAudioSectionTemplateData
                (pppuVar4 + 1,&local_1b0);
      local_2c8 = local_2b8;
      uVar3 = FMovieSceneExecutionTokens::FEntry::FEntry
                        (local_270,param_5 + 0x22,(longlong)param_5 + 0x124,
                         (longlong)param_5 + 0x134);
      iVar1 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
        TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
      }
      FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar1 * 0xb0 + *param_5,uVar3);
      if ((local_1c8 & 1) != 0) {
        pppuVar4 = local_208;
        if ((local_1c8 & 2) == 0) {
          pppuVar4 = (undefined8 ***)local_208[0];
        }
        local_1c8 = local_1c8 & 0xfe;
        (*(code *)**pppuVar4)(pppuVar4,0);
        if ((local_1c8 & 2) == 0) {
          FMemory::Free(local_208[0]);
        }
      }
      if ((local_278 & 1) != 0) {
        pppuVar4 = local_2b8;
        if ((local_278 & 2) == 0) {
          pppuVar4 = (undefined8 ***)local_2b8[0];
        }
        local_278 = local_278 & 0xfe;
        (*(code *)**pppuVar4)(pppuVar4,0);
        if ((local_278 & 2) == 0) {
          FMemory::Free(local_2b8[0]);
        }
      }
      FMovieSceneAudioSectionTemplateData::~FMovieSceneAudioSectionTemplateData(&local_1b0);
    }
  }
  return;
}



// FUNCTION 141fe6ae0 FUN_141fe6ae0 body=378 status=ok
// SIG undefined FUN_141fe6ae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe6ae0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined ****ppppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_158 [32];
  undefined ***local_138;
  undefined1 local_128 [4];
  uint local_124;
  undefined4 uStack_120;
  undefined ***local_118;
  undefined1 local_110;
  byte local_d8;
  undefined1 local_d0 [104];
  undefined8 **local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar1 = *(uint *)(param_3 + 0x24);
  local_128[0] = 0;
  if (uVar1 == 0x80000000) {
    lVar7 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar7 = 4;
    }
    uVar8 = *(ulonglong *)(lVar7 + param_3);
  }
  else {
    uStack_120 = 0;
    uVar8 = (ulonglong)uVar1;
    local_124 = uVar1;
  }
  cVar3 = FMovieSceneBoolChannel::Evaluate(param_1 + 0x48,uVar8,local_128);
  if (cVar3 != '\0') {
    local_d8 = local_d8 | 3;
    local_110 = local_128[0];
    local_118 = (undefined ***)&PTR_FUN_144f4c900;
    local_138 = (undefined ***)&local_118;
    uVar4 = FMovieSceneExecutionTokens::FEntry::FEntry
                      (local_d0,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
    iVar2 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
    }
    FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar2 * 0xb0 + *param_5,uVar4);
    if ((local_28 & 1) != 0) {
      pppuVar5 = local_68;
      if ((local_28 & 2) == 0) {
        pppuVar5 = (undefined8 ***)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**pppuVar5)(pppuVar5,0);
      if ((local_28 & 2) == 0) {
        FMemory::Free(local_68[0]);
      }
    }
    if ((local_d8 & 1) != 0) {
      ppppuVar6 = &local_118;
      if ((local_d8 & 2) == 0) {
        ppppuVar6 = (undefined ****)local_118;
      }
      local_d8 = local_d8 & 0xfe;
      (*(code *)**ppppuVar6)(ppppuVar6,0);
      if ((local_d8 & 2) == 0) {
        FMemory::Free(local_118);
      }
    }
  }
  return;
}



// FUNCTION 141fe6c60 FUN_141fe6c60 body=378 status=ok
// SIG undefined FUN_141fe6c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe6c60(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined ****ppppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_158 [32];
  undefined ***local_138;
  undefined1 local_128 [4];
  uint local_124;
  undefined4 uStack_120;
  undefined ***local_118;
  undefined1 local_110;
  byte local_d8;
  undefined1 local_d0 [104];
  undefined8 **local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar1 = *(uint *)(param_3 + 0x24);
  local_128[0] = 0;
  if (uVar1 == 0x80000000) {
    lVar7 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar7 = 4;
    }
    uVar8 = *(ulonglong *)(lVar7 + param_3);
  }
  else {
    uStack_120 = 0;
    uVar8 = (ulonglong)uVar1;
    local_124 = uVar1;
  }
  cVar3 = FMovieSceneBoolChannel::Evaluate(param_1 + 0x48,uVar8,local_128);
  if (cVar3 != '\0') {
    local_d8 = local_d8 | 3;
    local_110 = local_128[0];
    local_118 = (undefined ***)&PTR_FUN_144f4c910;
    local_138 = (undefined ***)&local_118;
    uVar4 = FMovieSceneExecutionTokens::FEntry::FEntry
                      (local_d0,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
    iVar2 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
    }
    FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar2 * 0xb0 + *param_5,uVar4);
    if ((local_28 & 1) != 0) {
      pppuVar5 = local_68;
      if ((local_28 & 2) == 0) {
        pppuVar5 = (undefined8 ***)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**pppuVar5)(pppuVar5,0);
      if ((local_28 & 2) == 0) {
        FMemory::Free(local_68[0]);
      }
    }
    if ((local_d8 & 1) != 0) {
      ppppuVar6 = &local_118;
      if ((local_d8 & 2) == 0) {
        ppppuVar6 = (undefined ****)local_118;
      }
      local_d8 = local_d8 & 0xfe;
      (*(code *)**ppppuVar6)(ppppuVar6,0);
      if ((local_d8 & 2) == 0) {
        FMemory::Free(local_118);
      }
    }
  }
  return;
}



// FUNCTION 141fe6de0 Evaluate body=543 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneCameraCutSectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong *param_5)

{
  undefined ***pppuVar1;
  undefined1 uVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined8 uVar12;
  undefined8 ***pppuVar13;
  undefined ****ppppuVar14;
  undefined1 auStack_188 [32];
  undefined ***local_168;
  undefined ***local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  byte local_118;
  undefined1 auStack_110 [104];
  undefined8 **local_a8 [8];
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if ((*(byte *)(param_3 + 0x40) & 0x14) == 0) {
    local_150 = *(undefined4 *)(param_1 + 0x20);
    uStack_14c = *(undefined4 *)(param_1 + 0x24);
    uStack_148 = *(undefined4 *)(param_1 + 0x28);
    uStack_144 = *(undefined4 *)(param_1 + 0x2c);
    local_118 = local_118 | 3;
    local_140 = *(undefined8 *)(param_1 + 0x30);
    local_158 = (undefined ***)&PTR_FUN_144f482d8;
    local_168 = (undefined ***)&local_158;
    uVar12 = FMovieSceneExecutionTokens::FEntry::FEntry
                       (auStack_110,param_5 + 0x22,(longlong)param_5 + 0x124,
                        (longlong)param_5 + 0x134);
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x70);
    local_118 = local_118 & 0xfc;
    pppuVar1 = *(undefined ****)(param_1 + 0x30);
    pppuVar4 = *(undefined ****)(param_1 + 0x20);
    pppuVar5 = *(undefined ****)(param_1 + 0x28);
    pppuVar6 = *(undefined ****)(param_1 + 0x40);
    pppuVar7 = *(undefined ****)(param_1 + 0x48);
    pppuVar8 = *(undefined ****)(param_1 + 0x50);
    pppuVar9 = *(undefined ****)(param_1 + 0x58);
    pppuVar10 = *(undefined ****)(param_1 + 0x60);
    pppuVar11 = *(undefined ****)(param_1 + 0x68);
    local_158 = (undefined ***)FMemory::Malloc(0x60);
    ppppuVar14 = &local_158;
    if ((local_118 & 2) == 0) {
      ppppuVar14 = (undefined ****)local_158;
    }
    local_118 = local_118 | 1;
    ppppuVar14[1] = pppuVar4;
    ppppuVar14[2] = pppuVar5;
    *ppppuVar14 = (undefined ***)&PTR_FUN_144f482b8;
    local_168 = (undefined ***)&local_158;
    ppppuVar14[3] = pppuVar1;
    ppppuVar14[4] = pppuVar6;
    ppppuVar14[5] = pppuVar7;
    ppppuVar14[6] = pppuVar8;
    ppppuVar14[7] = pppuVar9;
    ppppuVar14[8] = pppuVar10;
    ppppuVar14[9] = pppuVar11;
    *(undefined1 *)(ppppuVar14 + 10) = uVar2;
    uVar12 = FMovieSceneExecutionTokens::FEntry::FEntry
                       (auStack_110,param_5 + 0x22,(longlong)param_5 + 0x124,
                        (longlong)param_5 + 0x134);
  }
  iVar3 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar3);
  }
  FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar3 * 0xb0 + *param_5,uVar12);
  if ((local_68 & 1) != 0) {
    pppuVar13 = local_a8;
    if ((local_68 & 2) == 0) {
      pppuVar13 = (undefined8 ***)local_a8[0];
    }
    local_68 = local_68 & 0xfe;
    (*(code *)**pppuVar13)(pppuVar13,0);
    if ((local_68 & 2) == 0) {
      FMemory::Free(local_a8[0]);
    }
  }
  if ((local_118 & 1) != 0) {
    ppppuVar14 = &local_158;
    if ((local_118 & 2) == 0) {
      ppppuVar14 = (undefined ****)local_158;
    }
    local_118 = local_118 & 0xfe;
    (*(code *)**ppppuVar14)(ppppuVar14,0);
    if ((local_118 & 2) == 0) {
      FMemory::Free(local_158);
    }
  }
  return;
}



// FUNCTION 141fe7000 FUN_141fe7000 body=965 status=ok
// SIG undefined FUN_141fe7000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe7000(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *****pppppuVar8;
  ulonglong uVar9;
  undefined8 ****ppppuVar10;
  longlong *plVar11;
  byte bVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_128 [2];
  uint local_120 [4];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_f0 [8];
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined1 local_b0 [16];
  undefined8 ***local_a0;
  undefined8 ***pppuStack_98;
  uint local_90;
  undefined8 ****local_88 [2];
  byte bStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar4 = *(uint *)(param_3 + 0x24);
  if (uVar4 == 0x80000000) {
    lVar13 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar13 = 4;
    }
    uVar9 = *(ulonglong *)(lVar13 + param_3);
  }
  else {
    local_120[1] = 0;
    uVar9 = (ulonglong)uVar4;
    local_120[0] = uVar4;
  }
  local_90 = 0;
  ppppuVar10 = &local_a0;
  bVar12 = 0;
  lVar13 = param_1 + 0x48;
  do {
    local_128[0] = 0;
    cVar5 = FMovieSceneFloatChannel::Evaluate(lVar13,uVar9,local_128);
    if (cVar5 != '\0') {
      *(undefined4 *)ppppuVar10 = local_128[0];
      local_90 = local_90 | 1 << (bVar12 & 0x1f);
    }
    bVar12 = bVar12 + 1;
    lVar13 = lVar13 + 0xa0;
    ppppuVar10 = (undefined8 ****)((longlong)ppppuVar10 + 4);
  } while (bVar12 < 4);
  if (local_90 != 0) {
    FMovieScenePropertySectionTemplate::GetPropertyTypeID(param_1,&local_100);
    lVar13 = FUN_141fc9a40(param_5 + 0x60,local_100);
    if (lVar13 == 0) {
      PropertyTemplate::FSectionData::FSectionData(local_f0);
      plVar11 = (longlong *)0x0;
      local_110 = 0;
      local_108 = 0;
      uVar6 = FString::FString(local_b0,param_1 + 0x28);
      local_138 = 0;
      FUN_141f54e40(local_f0,*(undefined8 *)(param_1 + 0x20),uVar6,0);
      plVar7 = (longlong *)operator_new(0x60);
      if (plVar7 != (longlong *)0x0) {
        *(undefined4 *)(plVar7 + 1) = 1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        *plVar7 = (longlong)&PTR_FUN_144f51a88;
        plVar7[3] = 0;
        plVar7[4] = 0;
        plVar7[5] = 0;
        plVar7[6] = 0;
        plVar7[7] = local_d8;
        plVar7[2] = (longlong)&PTR_FUN_144f48988;
        plVar7[8] = (longlong)&PTR_FUN_144f1bc30;
        plVar7[9] = local_e8;
        plVar7[10] = (longlong)local_e0;
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
          UNLOCK();
        }
        plVar7[0xb] = local_d8;
        plVar11 = plVar7;
      }
      plVar7 = plVar11 + 2;
      local_d0 = plVar7;
      local_c8 = plVar11;
      FUN_14044f790(&local_d0,plVar7);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_c0 = plVar7;
      local_b8 = plVar11;
      FMovieSceneBlendingAccumulator::DefineActuator(param_5 + 0x60,local_100,&local_c0);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar11 + 1;
        lVar13 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_e0 + 1;
        lVar13 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
    }
    uVar14 = FMovieSceneEvalTemplate::EvaluateEasing(param_1,uVar9);
    uVar3 = *(undefined1 *)(param_1 + 0x2c8);
    bStack_78 = bStack_78 & 0xfc;
    local_88[0] = (undefined8 ****)FMemory::Malloc(0x20);
    pppppuVar8 = local_88;
    if ((bStack_78 & 2) == 0) {
      pppppuVar8 = (undefined8 *****)local_88[0];
    }
    bStack_78 = bStack_78 | 1;
    *pppppuVar8 = (undefined8 ****)&PTR_FUN_144f51a98;
    pppppuVar8[1] = (undefined8 ****)local_a0;
    pppppuVar8[2] = (undefined8 ****)pppuStack_98;
    *(uint *)(pppppuVar8 + 3) = local_90;
    local_70 = *(undefined4 *)(param_5 + 0x124);
    uStack_6c = *(undefined4 *)(param_5 + 0x128);
    uStack_68 = *(undefined4 *)(param_5 + 300);
    uStack_64 = *(undefined4 *)(param_5 + 0x130);
    local_60 = *(undefined4 *)(param_5 + 0x170);
    local_5c = uVar14;
    local_58 = uVar3;
    TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
    ::FindId(param_5 + 0xb0,local_120 + 2,param_5 + 0x110);
    if ((local_120[2] == -1) ||
       (lVar13 = (longlong)(int)local_120[2] * 0x30 + *(longlong *)(param_5 + 0xb0), lVar13 == 0)) {
      local_f8 = param_5 + 0x110;
      FUN_141fc7cb0(param_5 + 0xb0,local_120,&local_f8,0);
      lVar13 = (longlong)(int)local_120[0] * 0x30 + *(longlong *)(param_5 + 0xb0);
    }
    FUN_141fc5d20(lVar13 + 0x18,local_100,local_88);
    if ((bStack_78 & 1) != 0) {
      pppppuVar8 = local_88;
      if ((bStack_78 & 2) == 0) {
        pppppuVar8 = (undefined8 *****)local_88[0];
      }
      bStack_78 = bStack_78 & 0xfe;
      (*(code *)**pppppuVar8)(pppppuVar8,0);
      if ((bStack_78 & 2) == 0) {
        FMemory::Free(local_88[0]);
      }
    }
  }
  return;
}



// FUNCTION 141fe73d0 FUN_141fe73d0 body=480 status=ok
// SIG undefined FUN_141fe73d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe73d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_258 [32];
  undefined8 **local_238;
  undefined8 **local_228 [8];
  byte local_1e8;
  undefined **local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0 [32];
  longlong local_1b0;
  undefined8 local_1a8;
  longlong local_170;
  undefined8 local_168;
  longlong local_130;
  undefined8 local_128;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [104];
  undefined8 **local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_1d8 = *(undefined4 *)(param_1 + 0x60);
  local_1e0 = &PTR_FUN_144f4afc0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_170 = 0;
  local_168 = 0;
  local_130 = 0;
  local_128 = 0;
  local_e0 = 0;
  local_d8 = 0;
  FUN_141fea6d0(param_1,param_3,local_1d0);
  local_1e8 = local_1e8 & 0xfc;
  local_228[0] = (undefined8 **)FMemory::Malloc(0x110,8);
  pppuVar3 = local_228;
  if ((local_1e8 & 2) == 0) {
    pppuVar3 = (undefined8 ***)local_228[0];
  }
  local_1e8 = local_1e8 | 1;
  *pppuVar3 = (undefined8 **)&PTR_FUN_144f4afc0;
  *(undefined4 *)(pppuVar3 + 1) = local_1d8;
  FUN_141fcdf20(pppuVar3 + 2,local_1d0);
  local_238 = local_228;
  uVar2 = FMovieSceneExecutionTokens::FEntry::FEntry
                    (local_d0,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
  iVar1 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
  }
  FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar1 * 0xb0 + *param_5,uVar2);
  if ((local_28 & 1) != 0) {
    pppuVar3 = local_68;
    if ((local_28 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_68[0];
    }
    local_28 = local_28 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_28 & 2) == 0) {
      FMemory::Free(local_68[0]);
    }
  }
  if ((local_1e8 & 1) != 0) {
    pppuVar3 = local_228;
    if ((local_1e8 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_228[0];
    }
    local_1e8 = local_1e8 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_1e8 & 2) == 0) {
      FMemory::Free(local_228[0]);
    }
  }
  if (local_e0 != 0) {
    FMemory::Free();
  }
  if (local_130 != 0) {
    FMemory::Free();
  }
  if (local_170 != 0) {
    FMemory::Free();
  }
  if (local_1b0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141fe75b0 FUN_141fe75b0 body=2807 status=ok
// SIG undefined FUN_141fe75b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141fe75b0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 ****ppppuVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_368 [32];
  longlong local_348;
  undefined8 ***local_340;
  float local_338 [2];
  longlong local_330;
  int local_328 [2];
  undefined4 local_320;
  ulonglong local_318;
  longlong local_310;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  uint local_2c8;
  undefined4 uStack_2c4;
  uint local_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  longlong *local_288;
  longlong *local_280;
  longlong *local_278;
  longlong *local_270;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  uint uStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178 [4];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 **ppuStack_160;
  undefined4 local_158;
  uint uStack_154;
  undefined8 ***local_150 [5];
  byte local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined1 local_114;
  undefined4 local_110;
  float local_10c;
  undefined1 local_108;
  float local_100 [4];
  undefined4 local_f0;
  undefined4 local_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  local_330 = param_5;
  lVar23 = 0x10;
  if (*(uint *)(param_3 + 0x24) == 0x80000000) {
    lVar15 = lVar23;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar15 = 4;
    }
    local_318 = *(ulonglong *)(lVar15 + param_3);
  }
  else {
    local_318 = (ulonglong)*(uint *)(param_3 + 0x24);
  }
  FMovieScene3DTransformTemplateData::Evaluate(param_1 + 0x20,local_178,local_318);
  uVar20 = uStack_154;
  if (uStack_154 != 0) {
    plVar3 = *(longlong **)(param_4 + 8);
    TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
    ::FindId(plVar3,local_328,param_4 + 0x24);
    puVar18 = (undefined8 *)0x0;
    puVar16 = puVar18;
    if (local_328[0] != -1) {
      puVar16 = (undefined8 *)((longlong)local_328[0] * 0x20 + *plVar3);
    }
    puVar21 = puVar16 + 2;
    if (puVar16 == (undefined8 *)0x0) {
      puVar21 = puVar18;
    }
    puVar16 = puVar18;
    if (puVar21 != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)*puVar21;
    }
    if ((*(char *)(param_1 + 0x660) == '\x01') && (puVar16 != (undefined8 *)0x0)) {
      fVar36 = local_178[0];
      if ((uStack_154 & 1) == 0) {
        fVar36 = 0.0;
      }
      fVar37 = local_178[1];
      if ((uVar20 >> 1 & 1) == 0) {
        fVar37 = 0.0;
      }
      fVar38 = local_178[2];
      if ((uVar20 >> 2 & 1) == 0) {
        fVar38 = 0.0;
      }
      local_2b0 = local_178[3];
      if ((uVar20 >> 3 & 1) == 0) {
        local_2b0 = (float)0;
      }
      local_2b8 = local_168;
      if ((uVar20 >> 4 & 1) == 0) {
        local_2b8 = 0;
      }
      local_2b4 = uStack_164;
      if ((uVar20 >> 5 & 1) == 0) {
        local_2b4 = 0;
      }
      uVar11 = FRotator::Quaternion(&local_2b8,&local_268);
      fVar9 = fRam0000000146acb84c;
      fVar8 = fRam0000000146acb848;
      fVar7 = fRam0000000146acb844;
      fVar35 = _DAT_146acb840;
      fVar4 = *(float *)(puVar16 + 2);
      fVar5 = *(float *)((longlong)puVar16 + 0x14);
      fVar31 = *(float *)(puVar16 + 3);
      fVar6 = *(float *)((longlong)puVar16 + 0x1c);
      auVar24 = *(undefined1 (*) [16])(puVar16 + 6);
      fVar27 = auVar24._0_4_;
      fVar32 = auVar24._4_4_;
      fVar39 = auVar24._8_4_;
      fVar40 = auVar24._12_4_;
      auVar29._4_4_ = DAT_1464aa788._4_4_;
      auVar29._0_4_ = (float)DAT_1464aa788;
      auVar29._8_4_ = DAT_1464aa790;
      auVar29._12_4_ = 0;
      local_228 = local_268;
      fStack_224 = fStack_264;
      fStack_220 = fStack_260;
      fStack_21c = fStack_25c;
      auVar24 = minps(auVar29,auVar24);
      local_218._4_4_ = fVar37;
      local_218._0_4_ = fVar36;
      local_218._8_4_ = fVar38;
      local_218._12_4_ = 0;
      auVar25._4_4_ = -(uint)(auVar24._4_4_ < fRam0000000146acb934);
      auVar25._0_4_ = -(uint)(auVar24._0_4_ < _DAT_146acb930);
      auVar25._8_4_ = -(uint)(auVar24._8_4_ < fRam0000000146acb938);
      auVar25._12_4_ = -(uint)(auVar24._12_4_ < fRam0000000146acb93c);
      iVar12 = movmskps(uVar11,auVar25);
      local_208._4_4_ = DAT_1464aa788._4_4_;
      local_208._0_4_ = (float)DAT_1464aa788;
      local_208._8_4_ = DAT_1464aa790;
      local_208._12_4_ = 0;
      if (iVar12 == 0) {
        fVar27 = fVar27 * fVar36;
        fVar32 = fVar32 * fVar37;
        fVar39 = fVar39 * fVar38;
        fVar40 = fVar40 * 0.0;
        local_258 = fStack_264 * fVar31 * _DAT_146acb8e0 +
                    fVar6 * local_268 + fStack_25c * fVar4 * _DAT_146acb900 +
                    fStack_260 * fVar5 * _DAT_146acb8f0;
        fStack_254 = local_268 * fVar31 * fRam0000000146acb8e4 +
                     fVar6 * fStack_264 + fStack_260 * fVar4 * fRam0000000146acb904 +
                     fStack_25c * fVar5 * fRam0000000146acb8f4;
        fStack_250 = fStack_25c * fVar31 * fRam0000000146acb8e8 +
                     fVar6 * fStack_260 + fStack_264 * fVar4 * fRam0000000146acb908 +
                     local_268 * fVar5 * fRam0000000146acb8f8;
        fStack_24c = fStack_260 * fVar31 * fRam0000000146acb8ec +
                     fVar6 * fStack_25c + local_268 * fVar4 * fRam0000000146acb90c +
                     fStack_264 * fVar5 * fRam0000000146acb8fc;
        fVar36 = fVar39 * fVar5 - fVar32 * fVar31;
        fVar37 = fVar27 * fVar31 - fVar39 * fVar4;
        fVar38 = fVar32 * fVar4 - fVar27 * fVar5;
        fVar35 = fVar40 * fVar6 - fVar40 * fVar6;
        fVar36 = fVar36 + fVar36;
        fVar37 = fVar37 + fVar37;
        fVar38 = fVar38 + fVar38;
        fVar35 = fVar35 + fVar35;
        local_238 = (fVar38 * fVar5 - fVar37 * fVar31) + fVar36 * fVar6 + fVar27 +
                    *(float *)(puVar16 + 4);
        fStack_234 = (fVar36 * fVar31 - fVar38 * fVar4) + fVar37 * fVar6 + fVar32 +
                     *(float *)((longlong)puVar16 + 0x24);
        fStack_230 = (fVar37 * fVar4 - fVar36 * fVar5) + fVar38 * fVar6 + fVar39 +
                     *(float *)(puVar16 + 5);
        fStack_22c = (fVar35 * fVar6 - fVar35 * fVar6) + fVar35 * fVar6 + fVar40 +
                     *(float *)((longlong)puVar16 + 0x2c);
      }
      else {
        local_1c8 = *(float *)(puVar16 + 4);
        fStack_1c4 = *(float *)((longlong)puVar16 + 0x24);
        fStack_1c0 = *(float *)(puVar16 + 5);
        fVar30 = fVar5 + fVar5;
        fVar33 = fVar31 + fVar31;
        fVar41 = fVar27 * (float)DAT_1464aa788;
        fVar42 = fVar32 * DAT_1464aa788._4_4_;
        fVar43 = fVar39 * DAT_1464aa790;
        fVar26 = (fVar4 + fVar4) * fVar4;
        local_1f8 = (float)((uint)(fVar27 * (_DAT_146acb840 - (fVar33 * fVar31 + fVar30 * fVar5))) &
                           _DAT_146acb850);
        fStack_1e4 = (float)((uint)(fVar32 * (fRam0000000146acb844 - (fVar33 * fVar31 + fVar26))) &
                            uRam0000000146acb854);
        fStack_1d0 = (float)((uint)(fVar39 * (fRam0000000146acb848 - (fVar30 * fVar5 + fVar26))) &
                            uRam0000000146acb858);
        fStack_1ec = (float)((uint)(fVar40 * (fRam0000000146acb84c - (fVar26 + fVar26))) &
                            uRam0000000146acb85c);
        fVar31 = (fVar4 + fVar4) * fVar6;
        fVar26 = fStack_264 + fStack_264;
        fVar34 = fStack_260 + fStack_260;
        fStack_1f4 = fVar27 * (fVar33 * fVar6 + fVar30 * fVar4);
        fStack_1e0 = fVar32 * (fVar31 + fVar33 * fVar5);
        local_1d8 = fVar39 * (fVar30 * fVar6 + fVar33 * fVar4);
        local_1e8 = (fVar30 * fVar4 - fVar33 * fVar6) * fVar32;
        fStack_1d4 = (fVar33 * fVar5 - fVar31) * fVar39;
        fStack_1f0 = (fVar33 * fVar4 - fVar30 * fVar6) * fVar27;
        fVar27 = (local_268 + local_268) * local_268;
        fStack_1bc = fRam0000000146acb84c;
        fVar32 = (local_268 + local_268) * fStack_25c;
        local_1b8 = (float)((uint)((_DAT_146acb840 - (fVar34 * fStack_260 + fVar26 * fStack_264)) *
                                  (float)DAT_1464aa788) & _DAT_146acb850);
        fStack_1a4 = (float)((uint)((fRam0000000146acb844 - (fVar34 * fStack_260 + fVar27)) *
                                   DAT_1464aa788._4_4_) & uRam0000000146acb854);
        fStack_190 = (float)((uint)((fRam0000000146acb848 - (fVar26 * fStack_264 + fVar27)) *
                                   DAT_1464aa790) & uRam0000000146acb858);
        fStack_1ac = (float)((uint)((fRam0000000146acb84c - (fVar27 + fVar27)) * 0.0) &
                            uRam0000000146acb85c);
        fStack_1b4 = (fVar34 * fStack_25c + fVar26 * local_268) * (float)DAT_1464aa788;
        fStack_1a0 = (fVar32 + fVar34 * fStack_264) * DAT_1464aa788._4_4_;
        local_198 = (fVar26 * fStack_25c + fVar34 * local_268) * DAT_1464aa790;
        local_1a8 = (fVar26 * local_268 - fVar34 * fStack_25c) * DAT_1464aa788._4_4_;
        fStack_194 = (fVar34 * fStack_264 - fVar32) * DAT_1464aa790;
        fStack_1b0 = (fVar34 * local_268 - fVar26 * fStack_25c) * (float)DAT_1464aa788;
        fStack_17c = fRam0000000146acb84c;
        local_308 = local_1b8 * local_1f8 + fStack_1b4 * local_1e8 + fStack_1b0 * local_1d8 +
                    fStack_1ac * local_1c8;
        fStack_304 = local_1b8 * fStack_1f4 + fStack_1b4 * fStack_1e4 + fStack_1b0 * fStack_1d4 +
                     fStack_1ac * fStack_1c4;
        fStack_300 = local_1b8 * fStack_1f0 + fStack_1b4 * fStack_1e0 + fStack_1b0 * fStack_1d0 +
                     fStack_1ac * fStack_1c0;
        fStack_2fc = local_1b8 * fStack_1ec + fStack_1b4 * fStack_1ec + fStack_1b0 * fStack_1ec +
                     fStack_1ac * fRam0000000146acb84c;
        local_2f8 = local_1a8 * local_1f8 + fStack_1a4 * local_1e8 + fStack_1a0 * local_1d8 +
                    fStack_1ac * local_1c8;
        fStack_2f4 = local_1a8 * fStack_1f4 + fStack_1a4 * fStack_1e4 + fStack_1a0 * fStack_1d4 +
                     fStack_1ac * fStack_1c4;
        fStack_2f0 = local_1a8 * fStack_1f0 + fStack_1a4 * fStack_1e0 + fStack_1a0 * fStack_1d0 +
                     fStack_1ac * fStack_1c0;
        fStack_2ec = local_1a8 * fStack_1ec + fStack_1a4 * fStack_1ec + fStack_1a0 * fStack_1ec +
                     fStack_1ac * fRam0000000146acb84c;
        local_2e8 = local_198 * local_1f8 + fStack_194 * local_1e8 + fStack_190 * local_1d8 +
                    fStack_1ac * local_1c8;
        fStack_2e4 = local_198 * fStack_1f4 + fStack_194 * fStack_1e4 + fStack_190 * fStack_1d4 +
                     fStack_1ac * fStack_1c4;
        fStack_2e0 = local_198 * fStack_1f0 + fStack_194 * fStack_1e0 + fStack_190 * fStack_1d0 +
                     fStack_1ac * fStack_1c0;
        fStack_2dc = local_198 * fStack_1ec + fStack_194 * fStack_1ec + fStack_190 * fStack_1ec +
                     fStack_1ac * fRam0000000146acb84c;
        local_2d8 = fRam0000000146acb84c * local_1c8 +
                    fVar36 * local_1f8 + fVar37 * local_1e8 + fVar38 * local_1d8;
        fStack_2d4 = fRam0000000146acb84c * fStack_1c4 +
                     fVar36 * fStack_1f4 + fVar37 * fStack_1e4 + fVar38 * fStack_1d4;
        fStack_2d0 = fRam0000000146acb84c * fStack_1c0 +
                     fVar36 * fStack_1f0 + fVar37 * fStack_1e0 + fVar38 * fStack_1d0;
        fStack_2cc = fRam0000000146acb84c * fRam0000000146acb84c +
                     fVar36 * fStack_1ec + fVar37 * fStack_1ec + fVar38 * fStack_1ec;
        fStack_1dc = fStack_1ec;
        fStack_1cc = fStack_1ec;
        fStack_19c = fStack_1ac;
        fStack_18c = fStack_1ac;
        local_188 = fVar36;
        fStack_184 = fVar37;
        fStack_180 = fVar38;
        FMatrix::RemoveScaling(&local_308);
        local_248 = (float)((_DAT_146acb860 ^ (uint)fVar35) & -(uint)(_DAT_146acb930 <= fVar41) ^
                           _DAT_146acb860);
        fStack_244 = (float)((uRam0000000146acb864 ^ (uint)fVar7) &
                             -(uint)(fRam0000000146acb934 <= fVar42) ^ uRam0000000146acb864);
        fStack_240 = (float)((uRam0000000146acb868 ^ (uint)fVar8) &
                             -(uint)(fRam0000000146acb938 <= fVar43) ^ uRam0000000146acb868);
        uStack_23c = (uRam0000000146acb86c ^ (uint)fVar9) &
                     -(uint)(fRam0000000146acb93c <= fVar40 * 0.0) ^ uRam0000000146acb86c;
        fStack_300 = fStack_300 * local_248;
        fStack_304 = fStack_304 * local_248;
        local_308 = local_308 * local_248;
        local_2f8 = local_2f8 * fStack_244;
        fStack_2f4 = fStack_2f4 * fStack_244;
        fStack_2f0 = fStack_2f0 * fStack_244;
        fStack_2e4 = fStack_2e4 * fStack_240;
        local_2e8 = local_2e8 * fStack_240;
        fStack_2e0 = fStack_2e0 * fStack_240;
        FQuat::FQuat(&local_298,&local_308);
        local_320 = 0x322bcc77;
        auVar28._0_4_ = local_298 * local_298 + fStack_290 * fStack_290;
        auVar28._4_4_ = fStack_294 * fStack_294 + fStack_28c * fStack_28c;
        auVar28._8_4_ = fStack_290 * fStack_290 + local_298 * local_298;
        auVar28._12_4_ = fStack_28c * fStack_28c + fStack_294 * fStack_294;
        auVar24._0_4_ = auVar28._4_4_ + auVar28._0_4_;
        auVar24._4_4_ = auVar28._8_4_ + auVar28._4_4_;
        auVar24._8_4_ = auVar28._12_4_ + auVar28._8_4_;
        auVar24._12_4_ = auVar28._0_4_ + auVar28._12_4_;
        auVar29 = rsqrtps(auVar28,auVar24);
        fVar36 = auVar29._0_4_;
        fVar37 = auVar29._4_4_;
        fVar38 = auVar29._8_4_;
        fVar27 = auVar29._12_4_;
        fVar36 = (_DAT_146acb920 - fVar36 * fVar36 * auVar24._0_4_ * _DAT_146acb920) * fVar36 +
                 fVar36;
        fVar37 = (fRam0000000146acb924 - fVar37 * fVar37 * auVar24._4_4_ * fRam0000000146acb924) *
                 fVar37 + fVar37;
        fVar38 = (fRam0000000146acb928 - fVar38 * fVar38 * auVar24._8_4_ * fRam0000000146acb928) *
                 fVar38 + fVar38;
        fVar27 = (fRam0000000146acb92c - fVar27 * fVar27 * auVar24._12_4_ * fRam0000000146acb92c) *
                 fVar27 + fVar27;
        local_258 = (float)(((uint)((fVar36 + (_DAT_146acb920 -
                                              fVar36 * fVar36 * auVar24._0_4_ * _DAT_146acb920) *
                                              fVar36) * local_298) ^ _DAT_146acb910) &
                            -(uint)(1e-08 <= auVar24._0_4_) ^ _DAT_146acb910);
        fStack_254 = (float)(((uint)((fVar37 + (fRam0000000146acb924 -
                                               fVar37 * fVar37 *
                                               auVar24._4_4_ * fRam0000000146acb924) * fVar37) *
                                    fStack_294) ^ uRam0000000146acb914) &
                             -(uint)(1e-08 <= auVar24._4_4_) ^ uRam0000000146acb914);
        fStack_250 = (float)(((uint)((fVar38 + (fRam0000000146acb928 -
                                               fVar38 * fVar38 *
                                               auVar24._8_4_ * fRam0000000146acb928) * fVar38) *
                                    fStack_290) ^ uRam0000000146acb918) &
                             -(uint)(1e-08 <= auVar24._8_4_) ^ uRam0000000146acb918);
        fStack_24c = (float)(((uint)((fVar27 + (fRam0000000146acb92c -
                                               fVar27 * fVar27 *
                                               auVar24._12_4_ * fRam0000000146acb92c) * fVar27) *
                                    fStack_28c) ^ uRam0000000146acb91c) &
                             -(uint)(1e-08 <= auVar24._12_4_) ^ uRam0000000146acb91c);
        fStack_22c = 0.0;
        local_238 = local_2d8;
        fStack_234 = fStack_2d4;
        fStack_230 = fStack_2d0;
        local_298 = local_258;
        fStack_294 = fStack_254;
        fStack_290 = fStack_250;
        fStack_28c = fStack_24c;
      }
      local_100[0] = local_238;
      local_100[1] = fStack_234;
      local_100[2] = fStack_230;
      FQuat::Euler(&local_258,&local_2a8);
      local_100[3] = (float)local_2a8;
      local_ec = local_2a0;
      local_f0 = local_2a4;
      do {
        uVar22 = 1 << ((byte)puVar18 & 0x1f);
        if ((uVar20 & uVar22) != 0) {
          local_178[(ulonglong)puVar18 & 0xff] = local_100[(int)puVar18];
          uVar20 = uStack_154 | uVar22;
          uStack_154 = uVar20;
        }
        uVar22 = (int)puVar18 + 1;
        puVar18 = (undefined8 *)(ulonglong)uVar22;
      } while (uVar22 < 6);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146acb9e8) &&
       (_Init_thread_header(&DAT_146acb9e8), DAT_146acb9e8 == -1)) {
      lVar15 = DAT_146acb9e0;
      if (DAT_146acb9e0 == 0) {
        lVar15 = FMovieSceneAnimTypeID::Initialize(&DAT_146acb9e0,0);
      }
      DAT_146acb9d8 = lVar15;
      _Init_thread_footer(&DAT_146acb9e8);
    }
    lVar10 = DAT_146acb9d8;
    lVar15 = param_5 + 0x60;
    local_310 = lVar15;
    lVar13 = FUN_141fc9730(lVar15,DAT_146acb9d8);
    if (lVar13 == 0) {
      plVar14 = (longlong *)FUN_141fcb620();
      plVar3 = plVar14 + 2;
      local_288 = plVar3;
      local_280 = plVar14;
      FUN_14044f790(&local_288,plVar3);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_278 = plVar3;
      local_270 = plVar14;
      FMovieSceneBlendingAccumulator::DefineActuator(lVar15,lVar10,&local_278);
      param_5 = local_330;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar14 + 1;
        lVar13 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        lVar15 = local_310;
        if ((int)lVar13 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          param_5 = local_330;
          lVar15 = local_310;
          if (iVar12 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
            param_5 = local_330;
            lVar15 = local_310;
          }
        }
      }
    }
    uVar20 = *(uint *)(param_3 + 0x24);
    if (uVar20 == 0x80000000) {
      lVar13 = lVar23;
      if (*(int *)(param_3 + 0x20) != 0) {
        lVar13 = 4;
      }
      uVar19 = *(ulonglong *)(lVar13 + param_3);
    }
    else {
      uStack_2c4 = 0;
      uVar19 = (ulonglong)uVar20;
      local_2c8 = uVar20;
    }
    fVar36 = (float)FMovieSceneEvalTemplate::EvaluateEasing(param_1,uVar19);
    if ((*(uint *)(param_1 + 0x664) >> 9 & 1) != 0) {
      uVar20 = *(uint *)(param_3 + 0x24);
      local_338[0] = 1.0;
      if (uVar20 == 0x80000000) {
        if (*(int *)(param_3 + 0x20) != 0) {
          lVar23 = 4;
        }
        uVar19 = *(ulonglong *)(param_3 + lVar23);
      }
      else {
        uStack_2bc = 0;
        uVar19 = (ulonglong)uVar20;
        local_2c0 = uVar20;
      }
      FMovieSceneFloatChannel::Evaluate(param_1 + 0x5c0,uVar19,local_338);
      fVar36 = fVar36 * local_338[0];
    }
    uVar2 = *(undefined1 *)(param_1 + 0x660);
    local_128 = local_128 & 0xfc;
    local_150[0] = (undefined8 ***)FMemory::Malloc(0x30);
    ppppuVar17 = local_150;
    if ((local_128 & 2) == 0) {
      ppppuVar17 = (undefined8 ****)local_150[0];
    }
    local_128 = local_128 | 1;
    ppppuVar17[1] = (undefined8 ***)CONCAT44(local_178[1],local_178[0]);
    ppppuVar17[2] = (undefined8 ***)CONCAT44(local_178[3],local_178[2]);
    *ppppuVar17 = (undefined8 ***)&PTR_FUN_144f51a60;
    ppppuVar17[3] = (undefined8 ***)CONCAT44(uStack_164,local_168);
    ppppuVar17[4] = (undefined8 ***)ppuStack_160;
    ppppuVar17[5] = (undefined8 ***)CONCAT44(uStack_154,local_158);
    local_340 = local_150;
    local_120 = DAT_1464e8628;
    local_348 = param_5 + 0x134;
    local_11c = 0xffffffffffffffff;
    local_114 = 0;
    local_110 = 0;
    local_10c = fVar36;
    local_108 = uVar2;
    FMovieSceneBlendingAccumulator::BlendToken<F3DTransformTrackToken>
              (lVar15,param_5 + 0x110,lVar10,param_5 + 0x124);
    if ((local_128 & 1) != 0) {
      ppppuVar17 = local_150;
      if ((local_128 & 2) == 0) {
        ppppuVar17 = (undefined8 ****)local_150[0];
      }
      local_128 = local_128 & 0xfe;
      (*(code *)**ppppuVar17)(ppppuVar17,0);
      if ((local_128 & 2) == 0) {
        FMemory::Free(local_150[0]);
      }
    }
  }
  return;
}



// FUNCTION 141fe80b0 Evaluate body=601 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneEulerTransformPropertySectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong param_5)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 ***pppuVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  undefined1 auStack_f8 [32];
  float local_d8 [2];
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 **local_c0 [5];
  byte local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float local_7c;
  undefined1 local_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  fVar7 = *(float *)(param_3 + 0x24);
  lVar3 = 4;
  if (fVar7 == -0.0) {
    lVar5 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar5 = lVar3;
    }
    uVar6 = *(ulonglong *)(lVar5 + param_3);
  }
  else {
    local_d8[1] = 0.0;
    uVar6 = (ulonglong)(uint)fVar7;
    local_d8[0] = fVar7;
  }
  FMovieScene3DTransformTemplateData::Evaluate(param_1 + 0x48,&local_70,uVar6);
  FUN_141fc8d50(param_1,&local_c8,param_5 + 0x60);
  fVar7 = *(float *)(param_3 + 0x24);
  if (fVar7 == -0.0) {
    lVar5 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar5 = lVar3;
    }
    uVar6 = *(ulonglong *)(lVar5 + param_3);
  }
  else {
    local_d8[1] = 0.0;
    uVar6 = (ulonglong)(uint)fVar7;
    local_d8[0] = fVar7;
  }
  fVar7 = (float)FMovieSceneEvalTemplate::EvaluateEasing(param_1,uVar6);
  if ((*(uint *)(param_1 + 0x68c) >> 9 & 1) != 0) {
    local_d8[0] = 0.0;
    if (*(uint *)(param_3 + 0x24) == 0x80000000) {
      lVar5 = 0x10;
      if (*(int *)(param_3 + 0x20) != 0) {
        lVar5 = lVar3;
      }
      uVar6 = *(ulonglong *)(lVar5 + param_3);
    }
    else {
      local_d0 = (ulonglong)*(uint *)(param_3 + 0x24);
      uVar6 = local_d0;
    }
    cVar2 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x5e8,uVar6,local_d8);
    if (cVar2 != '\0') {
      fVar7 = fVar7 * local_d8[0];
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 0x688);
  local_98 = local_98 & 0xfc;
  local_c0[0] = (undefined8 **)FMemory::Malloc(0x30);
  pppuVar4 = local_c0;
  if ((local_98 & 2) == 0) {
    pppuVar4 = (undefined8 ***)local_c0[0];
  }
  local_98 = local_98 | 1;
  pppuVar4[1] = (undefined8 **)local_70;
  pppuVar4[2] = (undefined8 **)puStack_68;
  *pppuVar4 = (undefined8 **)&PTR_FUN_144f51c18;
  *(undefined4 *)(pppuVar4 + 3) = local_60;
  *(undefined4 *)((longlong)pppuVar4 + 0x1c) = uStack_5c;
  *(undefined4 *)(pppuVar4 + 4) = uStack_58;
  *(undefined4 *)((longlong)pppuVar4 + 0x24) = uStack_54;
  pppuVar4[5] = (undefined8 **)local_50;
  local_90 = *(undefined4 *)(param_5 + 0x124);
  uStack_8c = *(undefined4 *)(param_5 + 0x128);
  uStack_88 = *(undefined4 *)(param_5 + 300);
  uStack_84 = *(undefined4 *)(param_5 + 0x130);
  local_80 = *(undefined4 *)(param_5 + 0x170);
  local_7c = fVar7;
  local_78 = uVar1;
  TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
  ::FindId(param_5 + 0xb0,local_d8,param_5 + 0x110U);
  if ((local_d8[0] == -NAN) ||
     (lVar3 = (longlong)(int)local_d8[0] * 0x30 + *(longlong *)(param_5 + 0xb0), lVar3 == 0)) {
    local_d0 = param_5 + 0x110U;
    FUN_141fc7cb0(param_5 + 0xb0,local_d8,&local_d0,0);
    lVar3 = (longlong)(int)local_d8[0] * 0x30 + *(longlong *)(param_5 + 0xb0);
  }
  FMovieSceneAccumulatedBlendState::Add<FEulerTransform>(lVar3 + 0x18,local_c8,local_c0);
  if ((local_98 & 1) != 0) {
    pppuVar4 = local_c0;
    if ((local_98 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_c0[0];
    }
    local_98 = local_98 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
    if ((local_98 & 2) == 0) {
      FMemory::Free(local_c0[0]);
    }
  }
  return;
}



// FUNCTION 141fe8310 FUN_141fe8310 body=451 status=ok
// SIG undefined FUN_141fe8310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe8310(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined ****ppppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_188 [32];
  undefined ***local_168;
  float local_158;
  uint local_154;
  undefined4 uStack_150;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined ***local_128;
  float local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  ulonglong local_110;
  byte local_e8;
  undefined1 local_e0 [104];
  undefined8 **local_78 [8];
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar1 = *(uint *)(param_3 + 0x24);
  local_158 = 1.0;
  if (uVar1 == 0x80000000) {
    lVar7 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar7 = 4;
    }
    uVar8 = *(ulonglong *)(lVar7 + param_3);
  }
  else {
    uStack_150 = 0;
    uVar8 = (ulonglong)uVar1;
    local_154 = uVar1;
  }
  cVar3 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x20,uVar8,&local_158);
  if (cVar3 != '\0') {
    local_120 = 0.0;
    if ((0.0 <= local_158) && (local_120 = local_158, 1.0 <= local_158)) {
      local_120 = 1.0;
    }
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    local_e8 = local_e8 | 3;
    uStack_134 = (undefined4)*(undefined8 *)(param_1 + 200);
    uStack_130 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 200) >> 0x20);
    uStack_13c._0_4_ = (undefined4)uVar4;
    uStack_13c._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar1 = CONCAT31(uStack_12c._1_3_,*(undefined1 *)(param_1 + 0xd0));
    uStack_12c = uVar1 & 0xffffff01;
    local_128 = (undefined ***)&PTR_FUN_144f49d20;
    uStack_11c = (undefined4)uStack_13c;
    uStack_118 = uStack_13c._4_4_;
    uStack_114 = uStack_134;
    local_168 = (undefined ***)&local_128;
    local_110 = CONCAT44(uVar1,uStack_130) & 0xffffff01ffffffff;
    uStack_13c = uVar4;
    uVar4 = FMovieSceneExecutionTokens::FEntry::FEntry
                      (local_e0,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
    iVar2 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
    }
    FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar2 * 0xb0 + *param_5,uVar4);
    if ((local_38 & 1) != 0) {
      pppuVar5 = local_78;
      if ((local_38 & 2) == 0) {
        pppuVar5 = (undefined8 ***)local_78[0];
      }
      local_38 = local_38 & 0xfe;
      (*(code *)**pppuVar5)(pppuVar5,0);
      if ((local_38 & 2) == 0) {
        FMemory::Free(local_78[0]);
      }
    }
    if ((local_e8 & 1) != 0) {
      ppppuVar6 = &local_128;
      if ((local_e8 & 2) == 0) {
        ppppuVar6 = (undefined ****)local_128;
      }
      local_e8 = local_e8 & 0xfe;
      (*(code *)**ppppuVar6)(ppppuVar6,0);
      if ((local_e8 & 2) == 0) {
        FMemory::Free(local_128);
      }
    }
  }
  return;
}



// FUNCTION 141fe84e0 FUN_141fe84e0 body=406 status=ok
// SIG undefined FUN_141fe84e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe84e0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined ****ppppuVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_158 [32];
  undefined ***local_138;
  undefined4 local_128;
  uint local_124;
  undefined4 uStack_120;
  undefined ***local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined4 local_10c;
  byte local_d8;
  undefined1 local_d0 [104];
  undefined8 **local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar1 = *(uint *)(param_3 + 0x24);
  local_128 = 0;
  if (uVar1 == 0x80000000) {
    lVar6 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar6 = 4;
    }
    uVar7 = *(ulonglong *)(lVar6 + param_3);
  }
  else {
    uStack_120 = 0;
    uVar7 = (ulonglong)uVar1;
    local_124 = uVar1;
  }
  FMovieSceneFloatChannel::Evaluate(param_1 + 0x20,uVar7,&local_128);
  local_110 = *(undefined1 *)(param_1 + 0xc0);
  local_10f = *(undefined1 *)(param_1 + 0xc1);
  local_10e = *(undefined1 *)(param_1 + 0xc2);
  local_10d = *(undefined1 *)(param_1 + 0xc3);
  local_d8 = local_d8 | 3;
  local_138 = (undefined ***)&local_118;
  local_118 = (undefined ***)&PTR_FUN_144f4d830;
  local_10c = local_128;
  uVar3 = FMovieSceneExecutionTokens::FEntry::FEntry
                    (local_d0,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
  iVar2 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
  }
  FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar2 * 0xb0 + *param_5,uVar3);
  if ((local_28 & 1) != 0) {
    pppuVar4 = local_68;
    if ((local_28 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_68[0];
    }
    local_28 = local_28 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
    if ((local_28 & 2) == 0) {
      FMemory::Free(local_68[0]);
    }
  }
  if ((local_d8 & 1) != 0) {
    ppppuVar5 = &local_118;
    if ((local_d8 & 2) == 0) {
      ppppuVar5 = (undefined ****)local_118;
    }
    local_d8 = local_d8 & 0xfe;
    (*(code *)**ppppuVar5)(ppppuVar5,0);
    if ((local_d8 & 2) == 0) {
      FMemory::Free(local_118);
    }
  }
  return;
}



// FUNCTION 141fe8680 Evaluate body=525 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneFloatPropertySectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong param_5)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *****pppppuVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 auStack_b8 [32];
  uint local_98 [4];
  longlong local_88;
  undefined8 local_80;
  undefined8 ****local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar2 = *(uint *)(param_3 + 0x24);
  local_98[2] = 0;
  if (uVar2 == 0x80000000) {
    lVar4 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar4 = 4;
    }
    uVar6 = *(ulonglong *)(lVar4 + param_3);
  }
  else {
    local_98[1] = 0;
    uVar6 = (ulonglong)uVar2;
    local_98[0] = uVar2;
  }
  cVar3 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x48,uVar6,local_98 + 2);
  if (cVar3 != '\0') {
    FUN_141fc8b80(param_1,&local_80,param_5 + 0x60);
    uVar2 = *(uint *)(param_3 + 0x24);
    if (uVar2 == 0x80000000) {
      lVar4 = 0x10;
      if (*(int *)(param_3 + 0x20) != 0) {
        lVar4 = 4;
      }
      uVar6 = *(ulonglong *)(lVar4 + param_3);
    }
    else {
      local_98[1] = 0;
      uVar6 = (ulonglong)uVar2;
      local_98[0] = uVar2;
    }
    uVar7 = FMovieSceneEvalTemplate::EvaluateEasing(param_1,uVar6);
    uVar2 = local_98[2];
    uVar1 = *(undefined1 *)(param_1 + 0xe8);
    local_70 = local_70 & 0xfc;
    local_78 = (undefined8 ****)FMemory::Malloc(0x10);
    pppppuVar5 = &local_78;
    if ((local_70 & 2) == 0) {
      pppppuVar5 = (undefined8 *****)local_78;
    }
    local_70 = local_70 | 1;
    *(uint *)(pppppuVar5 + 1) = uVar2;
    *pppppuVar5 = (undefined8 ****)&PTR_FUN_144f51ad8;
    local_68 = *(undefined4 *)(param_5 + 0x124);
    uStack_64 = *(undefined4 *)(param_5 + 0x128);
    uStack_60 = *(undefined4 *)(param_5 + 300);
    uStack_5c = *(undefined4 *)(param_5 + 0x130);
    local_58 = *(undefined4 *)(param_5 + 0x170);
    local_54 = uVar7;
    local_50 = uVar1;
    TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
    ::FindId(param_5 + 0xb0,local_98,param_5 + 0x110);
    if ((local_98[0] == 0xffffffff) ||
       (lVar4 = (longlong)(int)local_98[0] * 0x30 + *(longlong *)(param_5 + 0xb0), lVar4 == 0)) {
      local_88 = param_5 + 0x110;
      FUN_141fc7cb0(param_5 + 0xb0,local_98,&local_88,0);
      lVar4 = (longlong)(int)local_98[0] * 0x30 + *(longlong *)(param_5 + 0xb0);
    }
    FMovieSceneAccumulatedBlendState::Add<float>(lVar4 + 0x18,local_80,&local_78);
    if ((local_70 & 1) != 0) {
      pppppuVar5 = &local_78;
      if ((local_70 & 2) == 0) {
        pppppuVar5 = (undefined8 *****)local_78;
      }
      local_70 = local_70 & 0xfe;
      (*(code *)**pppppuVar5)(pppppuVar5,0);
      if ((local_70 & 2) == 0) {
        FMemory::Free(local_78);
      }
    }
  }
  return;
}



// FUNCTION 141fe8890 FUN_141fe8890 body=457 status=ok
// SIG undefined FUN_141fe8890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe8890(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined ****ppppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_178 [32];
  undefined ***local_158;
  undefined1 local_148 [4];
  float local_144;
  uint local_140;
  undefined4 uStack_13c;
  float local_138;
  undefined4 uStack_134;
  undefined ***local_130;
  undefined8 local_128;
  byte local_f0;
  undefined1 local_e8 [104];
  undefined8 **local_80 [8];
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar1 = *(uint *)(param_3 + 0x24);
  local_144 = 1.0;
  local_148[0] = 1;
  if (uVar1 == 0x80000000) {
    lVar7 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar7 = 4;
    }
    uVar8 = *(ulonglong *)(lVar7 + param_3);
  }
  else {
    uStack_13c = 0;
    uVar8 = (ulonglong)uVar1;
    local_140 = uVar1;
  }
  cVar3 = FMovieSceneBoolChannel::Evaluate(param_1 + 0xc0,uVar8,local_148);
  if (cVar3 != '\0') {
    cVar3 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x20,uVar8,&local_144);
    if ((cVar3 != '\0') && (0.0 <= local_144)) {
      local_f0 = local_f0 | 3;
      uStack_134 = CONCAT31(uStack_134._1_3_,local_148[0]);
      local_138 = local_144;
      local_128 = CONCAT44(uStack_134,local_144);
      local_130 = (undefined ***)&PTR_FUN_144f4deb8;
      local_158 = (undefined ***)&local_130;
      uVar4 = FMovieSceneExecutionTokens::FEntry::FEntry
                        (local_e8,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134
                        );
      iVar2 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
        TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
      }
      FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar2 * 0xb0 + *param_5,uVar4);
      if ((local_40 & 1) != 0) {
        pppuVar5 = local_80;
        if ((local_40 & 2) == 0) {
          pppuVar5 = (undefined8 ***)local_80[0];
        }
        local_40 = local_40 & 0xfe;
        (*(code *)**pppuVar5)(pppuVar5,0);
        if ((local_40 & 2) == 0) {
          FMemory::Free(local_80[0]);
        }
      }
      if ((local_f0 & 1) != 0) {
        ppppuVar6 = &local_130;
        if ((local_f0 & 2) == 0) {
          ppppuVar6 = (undefined ****)local_130;
        }
        local_f0 = local_f0 & 0xfe;
        (*(code *)**ppppuVar6)(ppppuVar6,0);
        if ((local_f0 & 2) == 0) {
          FMemory::Free(local_130);
        }
      }
    }
  }
  return;
}



// FUNCTION 141fe8a60 Evaluate body=506 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneIntegerPropertySectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong param_5)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *****pppppuVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 auStack_a8 [32];
  uint local_88 [4];
  longlong local_78;
  undefined8 local_70;
  undefined8 ****local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar2 = *(uint *)(param_3 + 0x24);
  local_88[2] = 0;
  if (uVar2 == 0x80000000) {
    lVar4 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar4 = 4;
    }
    uVar6 = *(ulonglong *)(lVar4 + param_3);
  }
  else {
    local_88[1] = 0;
    uVar6 = (ulonglong)uVar2;
    local_88[0] = uVar2;
  }
  cVar3 = FMovieSceneIntegerChannel::Evaluate(param_1 + 0x48,uVar6,local_88 + 2);
  if (cVar3 != '\0') {
    FUN_141fc89b0(param_1,&local_70,param_5 + 0x60);
    uVar2 = *(uint *)(param_3 + 0x24);
    if (uVar2 == 0x80000000) {
      lVar4 = 0x10;
      if (*(int *)(param_3 + 0x20) != 0) {
        lVar4 = 4;
      }
      uVar6 = *(ulonglong *)(lVar4 + param_3);
    }
    else {
      local_88[1] = 0;
      uVar6 = (ulonglong)uVar2;
      local_88[0] = uVar2;
    }
    uVar7 = FMovieSceneEvalTemplate::EvaluateEasing(param_1,uVar6);
    uVar2 = local_88[2];
    uVar1 = *(undefined1 *)(param_1 + 0xd8);
    local_60 = local_60 & 0xfc;
    local_68 = (undefined8 ****)FMemory::Malloc(0x10);
    pppppuVar5 = &local_68;
    if ((local_60 & 2) == 0) {
      pppppuVar5 = (undefined8 *****)local_68;
    }
    local_60 = local_60 | 1;
    *pppppuVar5 = (undefined8 ****)&PTR_FUN_144f1c8d0;
    *(uint *)(pppppuVar5 + 1) = uVar2;
    local_58 = *(undefined4 *)(param_5 + 0x124);
    uStack_54 = *(undefined4 *)(param_5 + 0x128);
    uStack_50 = *(undefined4 *)(param_5 + 300);
    uStack_4c = *(undefined4 *)(param_5 + 0x130);
    local_48 = *(undefined4 *)(param_5 + 0x170);
    local_44 = uVar7;
    local_40 = uVar1;
    TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
    ::FindId(param_5 + 0xb0,local_88,param_5 + 0x110);
    if ((local_88[0] == 0xffffffff) ||
       (lVar4 = (longlong)(int)local_88[0] * 0x30 + *(longlong *)(param_5 + 0xb0), lVar4 == 0)) {
      local_78 = param_5 + 0x110;
      FUN_141fc7cb0(param_5 + 0xb0,local_88,&local_78,0);
      lVar4 = (longlong)(int)local_88[0] * 0x30 + *(longlong *)(param_5 + 0xb0);
    }
    FUN_141f30b40(lVar4 + 0x18,local_70,&local_68);
    if ((local_60 & 1) != 0) {
      pppppuVar5 = &local_68;
      if ((local_60 & 2) == 0) {
        pppppuVar5 = (undefined8 *****)local_68;
      }
      local_60 = local_60 & 0xfe;
      (*(code *)**pppppuVar5)(pppppuVar5,0);
      if ((local_60 & 2) == 0) {
        FMemory::Free(local_68);
      }
    }
  }
  return;
}



// FUNCTION 141fe8c60 FUN_141fe8c60 body=299 status=ok
// SIG undefined FUN_141fe8c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe8c60(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined ****ppppuVar3;
  longlong in_stack_00000028;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  undefined1 local_50 [8];
  undefined4 *local_48;
  undefined ***local_40;
  undefined ***local_38;
  undefined4 local_30;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146acba7c) {
    _Init_thread_header(&DAT_146acba7c);
    if (DAT_146acba7c == -1) {
      FKeyHandle::FKeyHandle(&DAT_146acba78);
      _Init_thread_footer(&DAT_146acba7c);
    }
  }
  uVar1 = DAT_146acba78;
  lVar2 = FMovieSceneExecutionTokens::FindShared(in_stack_00000028,DAT_146acba78);
  if (lVar2 == 0) {
    local_18 = local_18 | 3;
    local_58[0] = uVar1;
    local_38 = (undefined ***)&PTR_FUN_144f4a098;
    local_48 = local_58;
    local_30 = 0xffffff9c;
    local_40 = (undefined ***)&local_38;
    FUN_140609050(in_stack_00000028 + 0x10,local_50,&local_48,0);
    if ((local_18 & 1) != 0) {
      ppppuVar3 = &local_38;
      if ((local_18 & 2) == 0) {
        ppppuVar3 = (undefined ****)local_38;
      }
      local_18 = local_18 & 0xfe;
      (*(code *)**ppppuVar3)(ppppuVar3,0);
      if ((local_18 & 2) == 0) {
        FMemory::Free(local_38);
      }
    }
  }
  return;
}



// FUNCTION 141fe8d90 FUN_141fe8d90 body=484 status=ok
// SIG undefined FUN_141fe8d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe8d90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_258 [32];
  undefined8 **local_238;
  undefined8 **local_228 [8];
  byte local_1e8;
  undefined **local_1e0;
  undefined8 *local_1d8;
  undefined1 local_1d0 [32];
  longlong local_1b0;
  undefined8 local_1a8;
  longlong local_170;
  undefined8 local_168;
  longlong local_130;
  undefined8 local_128;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [104];
  undefined8 **local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_1d8 = *(undefined8 **)(param_1 + 0x60);
  local_1e0 = &PTR_FUN_144f4ae00;
  local_1b0 = 0;
  local_1a8 = 0;
  local_170 = 0;
  local_168 = 0;
  local_130 = 0;
  local_128 = 0;
  local_e0 = 0;
  local_d8 = 0;
  FUN_141fea6d0(param_1,param_3,local_1d0);
  local_1e8 = local_1e8 & 0xfc;
  local_228[0] = (undefined8 **)FMemory::Malloc(0x110,8);
  pppuVar3 = local_228;
  if ((local_1e8 & 2) == 0) {
    pppuVar3 = (undefined8 ***)local_228[0];
  }
  local_1e8 = local_1e8 | 1;
  *pppuVar3 = (undefined8 **)&PTR_FUN_144f4ae00;
  pppuVar3[1] = (undefined8 **)local_1d8;
  FUN_141fcdf20(pppuVar3 + 2,local_1d0);
  local_238 = local_228;
  uVar2 = FMovieSceneExecutionTokens::FEntry::FEntry
                    (local_d0,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
  iVar1 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
  }
  FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar1 * 0xb0 + *param_5,uVar2);
  if ((local_28 & 1) != 0) {
    pppuVar3 = local_68;
    if ((local_28 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_68[0];
    }
    local_28 = local_28 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_28 & 2) == 0) {
      FMemory::Free(local_68[0]);
    }
  }
  if ((local_1e8 & 1) != 0) {
    pppuVar3 = local_228;
    if ((local_1e8 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_228[0];
    }
    local_1e8 = local_1e8 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_1e8 & 2) == 0) {
      FMemory::Free(local_228[0]);
    }
  }
  if (local_e0 != 0) {
    FMemory::Free();
  }
  if (local_130 != 0) {
    FMemory::Free();
  }
  if (local_170 != 0) {
    FMemory::Free();
  }
  if (local_1b0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141fe8f80 FUN_141fe8f80 body=468 status=ok
// SIG undefined FUN_141fe8f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe8f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_258 [32];
  undefined8 **local_238;
  undefined8 **local_228 [8];
  byte local_1e8;
  undefined **local_1e0;
  undefined1 local_1d8 [32];
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_178;
  undefined8 local_170;
  longlong local_138;
  undefined8 local_130;
  longlong local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [104];
  undefined8 **local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_1e0 = &PTR_FUN_144f4b358;
  local_1b8 = 0;
  local_1b0 = 0;
  local_178 = 0;
  local_170 = 0;
  local_138 = 0;
  local_130 = 0;
  local_e8 = 0;
  local_e0 = 0;
  FUN_141fea6d0(param_1,param_3,local_1d8);
  local_1e8 = local_1e8 & 0xfc;
  local_228[0] = (undefined8 **)FMemory::Malloc(0x108,8);
  pppuVar3 = local_228;
  if ((local_1e8 & 2) == 0) {
    pppuVar3 = (undefined8 ***)local_228[0];
  }
  local_1e8 = local_1e8 | 1;
  *pppuVar3 = (undefined8 **)&PTR_FUN_144f4b358;
  FUN_141fcdf20(pppuVar3 + 1,local_1d8);
  local_238 = local_228;
  uVar2 = FMovieSceneExecutionTokens::FEntry::FEntry
                    (local_d8,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
  iVar1 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
  }
  FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar1 * 0xb0 + *param_5,uVar2);
  if ((local_30 & 1) != 0) {
    pppuVar3 = local_70;
    if ((local_30 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_70[0];
    }
    local_30 = local_30 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_30 & 2) == 0) {
      FMemory::Free(local_70[0]);
    }
  }
  if ((local_1e8 & 1) != 0) {
    pppuVar3 = local_228;
    if ((local_1e8 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_228[0];
    }
    local_1e8 = local_1e8 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_1e8 & 2) == 0) {
      FMemory::Free(local_228[0]);
    }
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141fe9160 FUN_141fe9160 body=651 status=ok
// SIG undefined FUN_141fe9160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141fe9160(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *******pppppppuVar9;
  undefined ********ppppppppuVar10;
  ulonglong uVar11;
  undefined1 auStack_158 [32];
  undefined ********local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  int local_10c;
  undefined ********local_108;
  char local_100;
  undefined1 local_f8;
  byte local_c8;
  undefined1 local_c0 [104];
  undefined8 *******local_58 [8];
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (*(int *)(param_3 + 0x20) == 0) {
    local_128._4_4_ = (float)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
    local_118._4_4_ = (float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
    local_128._4_4_ = local_128._4_4_ - local_118._4_4_;
    iVar7 = (int)ROUND((local_128._4_4_ + local_128._4_4_) - 0.5) >> 1;
    uVar8 = ((int)*(undefined8 *)(param_3 + 0x10) - (int)*(undefined8 *)(param_3 + 4)) + iVar7;
    local_128._4_4_ = local_128._4_4_ - (float)iVar7;
    if (0.0 <= local_128._4_4_) {
      if (0.99999994 <= local_128._4_4_) {
        local_128 = CONCAT44(0x3f7fffff,uVar8);
      }
      else {
        local_128 = CONCAT44(local_128._4_4_,uVar8);
      }
    }
    else {
      local_128 = (ulonglong)uVar8;
    }
    local_120 = 0;
    local_118 = local_128;
    uVar3 = local_118;
    local_118 = uVar3;
    if ((0 < (int)uVar8) ||
       ((uVar8 == 0 &&
        (local_118._4_4_ = (float)(local_128 >> 0x20), bVar2 = 0.0 <= local_118._4_4_, bVar2)))) {
      FMovieSceneEvaluationRange::TimeRangeToNumberRange(&local_118,param_3);
      lVar1 = *(longlong *)(param_1 + 0x28);
      uVar3 = (longlong)*(int *)(param_1 + 0x30);
      lVar5 = 0;
      while (uVar3 != 0) {
        uVar11 = uVar3 >> 1;
        uVar8 = (uint)uVar3;
        uVar3 = uVar11;
        if (*(int *)(lVar1 + (uVar11 + lVar5) * 4) <= local_10c) {
          lVar5 = (ulonglong)(uVar8 & 1) + uVar11 + lVar5;
        }
      }
      iVar7 = (int)lVar5;
      if (iVar7 < 1) {
        return;
      }
      local_100 = *(char *)((longlong)iVar7 + -1 + *(longlong *)(param_1 + 0x40));
      lVar5 = (longlong)iVar7 + -1;
      if (local_100 == '\x02') {
        cVar4 = TRange<FFrameNumber>::Contains(&local_118,lVar1 + lVar5 * 4);
        if (cVar4 == '\0') {
          return;
        }
        local_c8 = local_c8 | 3;
      }
      else {
        if ((local_100 == '\0') &&
           (cVar4 = TRange<FFrameNumber>::Contains(&local_118,lVar1 + lVar5 * 4), cVar4 == '\0')) {
          return;
        }
        local_c8 = local_c8 | 3;
      }
      goto LAB_141fe9303;
    }
  }
  local_c8 = local_c8 | 3;
  local_100 = '\x01';
LAB_141fe9303:
  local_108 = (undefined ********)&PTR__scalar_deleting_destructor__144f4b730;
  local_138 = (undefined ********)&local_108;
  local_f8 = 0;
  uVar6 = FMovieSceneExecutionTokens::FEntry::FEntry
                    (local_c0,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
  iVar7 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar7 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar7);
  }
  FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar7 * 0xb0 + *param_5,uVar6);
  if ((local_18 & 1) != 0) {
    pppppppuVar9 = local_58;
    if ((local_18 & 2) == 0) {
      pppppppuVar9 = local_58[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppppppuVar9)(pppppppuVar9,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_58[0]);
    }
  }
  if ((local_c8 & 1) != 0) {
    ppppppppuVar10 = (undefined ********)&local_108;
    if ((local_c8 & 2) == 0) {
      ppppppppuVar10 = local_108;
    }
    local_c8 = local_c8 & 0xfe;
    (*(code *)**ppppppppuVar10)(ppppppppuVar10,0);
    if ((local_c8 & 2) == 0) {
      FMemory::Free(local_108);
    }
  }
  return;
}



// FUNCTION 141fe93f0 FUN_141fe93f0 body=1055 status=ok
// SIG undefined FUN_141fe93f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe93f0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 ***pppuVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_168 [32];
  float local_148 [2];
  longlong local_140;
  int local_138;
  int local_134;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 *local_110;
  longlong local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 **local_a8 [2];
  byte bStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_140 = param_5;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar9 = 4;
    if (*(uint *)(param_3 + 0x24) == 0x80000000) {
      lVar7 = 0x10;
      if (*(int *)(param_3 + 0x20) != 0) {
        lVar7 = lVar9;
      }
      local_130 = *(ulonglong *)(lVar7 + param_3);
    }
    else {
      local_130 = (ulonglong)*(uint *)(param_3 + 0x24);
    }
    uVar11 = FUN_141ff7a70(param_1 + 0x20,local_130,*(undefined8 *)(param_3 + 0x18));
    local_148[0] = 1.0;
    if (*(uint *)(param_3 + 0x24) == 0x80000000) {
      lVar7 = 0x10;
      if (*(int *)(param_3 + 0x20) != 0) {
        lVar7 = lVar9;
      }
      local_128 = *(ulonglong *)(lVar7 + param_3);
    }
    else {
      local_128 = (ulonglong)*(uint *)(param_3 + 0x24);
    }
    FMovieSceneFloatChannel::Evaluate(param_1 + 0x48,local_128,local_148);
    if (*(uint *)(param_3 + 0x24) == 0x80000000) {
      lVar7 = 0x10;
      if (*(int *)(param_3 + 0x20) != 0) {
        lVar7 = lVar9;
      }
      local_120 = *(ulonglong *)(lVar7 + param_3);
    }
    else {
      local_120 = (ulonglong)*(uint *)(param_3 + 0x24);
    }
    fVar12 = (float)FMovieSceneEvalTemplate::EvaluateEasing(param_1,local_120);
    fVar12 = fVar12 * local_148[0];
    uVar4 = *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0xc9);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146acbad0) &&
       (_Init_thread_header(&DAT_146acbad0), DAT_146acbad0 == -1)) {
      lVar9 = DAT_146acbac8;
      if (DAT_146acbac8 == 0) {
        lVar9 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbac8,0);
      }
      DAT_146acbac0 = lVar9;
      _Init_thread_footer(&DAT_146acbad0);
    }
    lVar9 = DAT_146acbac0;
    lVar7 = FUN_141fc9850(param_5 + 0x60,DAT_146acbac0);
    if (lVar7 == 0) {
      plVar8 = (longlong *)FUN_141fcb4f0();
      plVar1 = plVar8 + 2;
      local_100 = plVar1;
      local_f8 = plVar8;
      FUN_14044f790(&local_100,plVar1);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_f0 = plVar1;
      local_e8 = plVar8;
      FMovieSceneBlendingAccumulator::DefineActuator(param_5 + 0x60,lVar9,&local_f0);
      param_5 = local_140;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          param_5 = local_140;
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
            param_5 = local_140;
          }
        }
      }
    }
    local_118 = 0xffffffff;
    uStack_114 = 0;
    if (*(longlong *)(param_1 + 0x18) == 0) {
      local_110 = (undefined8 **)0xffffffff;
    }
    else {
      FWeakObjectPtr::operator=(&local_110);
    }
    local_e0 = *(undefined8 *)(param_1 + 0x20);
    ppuVar5 = *(undefined8 ***)(param_5 + 0x124);
    ppuVar6 = *(undefined8 ***)(param_5 + 300);
    bStack_98 = bStack_98 & 0xfc;
    local_c0 = *(undefined8 **)(param_1 + 0x38);
    local_b0 = *(undefined1 *)(param_1 + 0xe8);
    puStack_b8 = local_110;
    local_a8[0] = (undefined8 **)FMemory::Malloc(0x40);
    pppuVar10 = local_a8;
    if ((bStack_98 & 2) == 0) {
      pppuVar10 = (undefined8 ***)local_a8[0];
    }
    bStack_98 = bStack_98 | 1;
    *(undefined4 *)(pppuVar10 + 1) = (undefined4)local_e0;
    *(undefined4 *)((longlong)pppuVar10 + 0xc) = local_e0._4_4_;
    *(undefined4 *)(pppuVar10 + 2) = uVar11;
    *(float *)((longlong)pppuVar10 + 0x14) = fVar12;
    *pppuVar10 = (undefined8 **)&PTR_FUN_144f51c38;
    pppuVar10[3] = ppuVar5;
    pppuVar10[4] = ppuVar6;
    pppuVar10[5] = (undefined8 **)local_c0;
    pppuVar10[6] = (undefined8 **)puStack_b8;
    pppuVar10[7] = (undefined8 **)CONCAT71(uStack_af,local_b0);
    local_90 = *(undefined4 *)(param_5 + 0x124);
    uStack_8c = *(undefined4 *)(param_5 + 0x128);
    uStack_88 = *(undefined4 *)(param_5 + 300);
    uStack_84 = *(undefined4 *)(param_5 + 0x130);
    local_80 = *(undefined4 *)(param_5 + 0x170);
    uStack_7c = 0x3f800000;
    uStack_78 = (undefined1)uVar4;
    TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
    ::FindId(param_5 + 0xb0,&local_138,param_5 + 0x110);
    if ((local_138 == -1) ||
       (lVar7 = (longlong)local_138 * 0x30 + *(longlong *)(param_5 + 0xb0), lVar7 == 0)) {
      local_108 = param_5 + 0x110;
      FUN_141fc7cb0(param_5 + 0xb0,&local_134,&local_108,0);
      lVar7 = (longlong)local_134 * 0x30 + *(longlong *)(param_5 + 0xb0);
    }
    FUN_141fc5950(lVar7 + 0x18,lVar9,local_a8);
    if ((bStack_98 & 1) != 0) {
      pppuVar10 = local_a8;
      if ((bStack_98 & 2) == 0) {
        pppuVar10 = (undefined8 ***)local_a8[0];
      }
      bStack_98 = bStack_98 & 0xfe;
      (*(code *)**pppuVar10)(pppuVar10,0);
      if ((bStack_98 & 2) == 0) {
        FMemory::Free(local_a8[0]);
      }
    }
  }
  return;
}



// FUNCTION 141fe9810 Evaluate body=417 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneSlomoSectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong *param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined ****ppppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_178 [32];
  undefined ***local_158;
  float local_148 [2];
  uint local_140;
  undefined4 uStack_13c;
  undefined ***local_130;
  float local_128;
  byte local_f0;
  undefined1 local_e8 [104];
  undefined8 **local_80 [8];
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar1 = *(uint *)(param_3 + 0x24);
  local_148[0] = 1.0;
  if (uVar1 == 0x80000000) {
    lVar7 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar7 = 4;
    }
    uVar8 = *(ulonglong *)(lVar7 + param_3);
  }
  else {
    uStack_13c = 0;
    uVar8 = (ulonglong)uVar1;
    local_140 = uVar1;
  }
  cVar3 = FMovieSceneFloatChannel::Evaluate(param_1 + 0x20,uVar8,local_148);
  if ((cVar3 != '\0') && (0.0 <= local_148[0])) {
    local_f0 = local_f0 | 3;
    local_128 = local_148[0];
    local_130 = (undefined ***)&PTR_FUN_144f4d0a8;
    local_158 = (undefined ***)&local_130;
    uVar4 = FMovieSceneExecutionTokens::FEntry::FEntry
                      (local_e8,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
    iVar2 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
    }
    FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar2 * 0xb0 + *param_5,uVar4);
    if ((local_40 & 1) != 0) {
      pppuVar5 = local_80;
      if ((local_40 & 2) == 0) {
        pppuVar5 = (undefined8 ***)local_80[0];
      }
      local_40 = local_40 & 0xfe;
      (*(code *)**pppuVar5)(pppuVar5,0);
      if ((local_40 & 2) == 0) {
        FMemory::Free(local_80[0]);
      }
    }
    if ((local_f0 & 1) != 0) {
      ppppuVar6 = &local_130;
      if ((local_f0 & 2) == 0) {
        ppppuVar6 = (undefined ****)local_130;
      }
      local_f0 = local_f0 & 0xfe;
      (*(code *)**ppppuVar6)(ppppuVar6,0);
      if ((local_f0 & 2) == 0) {
        FMemory::Free(local_130);
      }
    }
  }
  return;
}



// FUNCTION 141fe99c0 Evaluate body=378 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneSpawnSectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong *param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined ****ppppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_158 [32];
  undefined ***local_138;
  undefined1 local_128 [4];
  uint local_124;
  undefined4 uStack_120;
  undefined ***local_118;
  undefined1 local_110;
  byte local_d8;
  undefined1 local_d0 [104];
  undefined8 **local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar1 = *(uint *)(param_3 + 0x24);
  local_128[0] = 0;
  if (uVar1 == 0x80000000) {
    lVar7 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar7 = 4;
    }
    uVar8 = *(ulonglong *)(lVar7 + param_3);
  }
  else {
    uStack_120 = 0;
    uVar8 = (ulonglong)uVar1;
    local_124 = uVar1;
  }
  cVar3 = FMovieSceneBoolChannel::Evaluate(param_1 + 0x20,uVar8,local_128);
  if (cVar3 != '\0') {
    local_d8 = local_d8 | 3;
    local_110 = local_128[0];
    local_118 = (undefined ***)&PTR_FUN_144f4d130;
    local_138 = (undefined ***)&local_118;
    uVar4 = FMovieSceneExecutionTokens::FEntry::FEntry
                      (local_d0,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
    iVar2 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
    }
    FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar2 * 0xb0 + *param_5,uVar4);
    if ((local_28 & 1) != 0) {
      pppuVar5 = local_68;
      if ((local_28 & 2) == 0) {
        pppuVar5 = (undefined8 ***)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**pppuVar5)(pppuVar5,0);
      if ((local_28 & 2) == 0) {
        FMemory::Free(local_68[0]);
      }
    }
    if ((local_d8 & 1) != 0) {
      ppppuVar6 = &local_118;
      if ((local_d8 & 2) == 0) {
        ppppuVar6 = (undefined ****)local_118;
      }
      local_d8 = local_d8 & 0xfe;
      (*(code *)**ppppuVar6)(ppppuVar6,0);
      if ((local_d8 & 2) == 0) {
        FMemory::Free(local_118);
      }
    }
  }
  return;
}



// FUNCTION 141fe9b40 Evaluate body=122 status=ok
// SIG undefined Evaluate(void)

longlong FMovieSceneStringChannel::Evaluate(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar3 = param_1 + 0x28;
    if (*(char *)(param_1 + 0x38) == '\0') {
      lVar3 = 0;
    }
    return lVar3;
  }
  uVar1 = (longlong)*(int *)(param_1 + 0x10);
  lVar3 = 0;
  while (uVar1 != 0) {
    uVar5 = uVar1 >> 1;
    uVar4 = (uint)uVar1;
    uVar1 = uVar5;
    if (*(int *)(*(longlong *)(param_1 + 8) + (uVar5 + lVar3) * 4) <= param_2) {
      lVar3 = (ulonglong)(uVar4 & 1) + uVar5 + lVar3;
    }
  }
  iVar2 = (int)lVar3 + -1;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  return (longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 141fe9bc0 Evaluate body=477 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneStringPropertySectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined ****ppppuVar7;
  ulonglong uVar8;
  undefined1 auStack_158 [32];
  undefined ***local_138;
  uint local_128 [4];
  undefined ***local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 local_104;
  byte local_d8;
  undefined1 local_d0 [104];
  undefined8 **local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar1 = *(uint *)(param_3 + 0x24);
  if (uVar1 == 0x80000000) {
    lVar3 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar3 = 4;
    }
    uVar8 = *(ulonglong *)(lVar3 + param_3);
  }
  else {
    local_128[1] = 0;
    uVar8 = (ulonglong)uVar1;
    local_128[0] = uVar1;
  }
  lVar3 = FMovieSceneStringChannel::Evaluate(param_1 + 0x48,uVar8);
  if (lVar3 != 0) {
    plVar4 = (longlong *)FString::FString(local_128,lVar3);
    local_110 = *plVar4;
    *plVar4 = 0;
    local_108 = (undefined4)plVar4[1];
    local_104 = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    local_d8 = local_d8 | 3;
    local_118 = (undefined ***)&PTR_FUN_144f4c920;
    local_138 = (undefined ***)&local_118;
    uVar5 = FMovieSceneExecutionTokens::FEntry::FEntry
                      (local_d0,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
    iVar2 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
    }
    FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar2 * 0xb0 + *param_5,uVar5);
    if ((local_28 & 1) != 0) {
      pppuVar6 = local_68;
      if ((local_28 & 2) == 0) {
        pppuVar6 = (undefined8 ***)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**pppuVar6)(pppuVar6,0);
      if ((local_28 & 2) == 0) {
        FMemory::Free(local_68[0]);
      }
    }
    if ((local_d8 & 1) != 0) {
      ppppuVar7 = &local_118;
      if ((local_d8 & 2) == 0) {
        ppppuVar7 = (undefined ****)local_118;
      }
      local_d8 = local_d8 & 0xfe;
      (*(code *)**ppppuVar7)(ppppuVar7,0);
      if ((local_d8 & 2) == 0) {
        FMemory::Free(local_118);
      }
    }
  }
  return;
}



// FUNCTION 141fe9da0 Evaluate body=569 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneTransformPropertySectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong param_5)

{
  float fVar1;
  longlong lVar2;
  undefined ****ppppuVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_f8 [32];
  float local_d8 [2];
  ulonglong local_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  float local_74;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  fVar1 = *(float *)(param_3 + 0x24);
  lVar2 = 4;
  if (fVar1 == -0.0) {
    lVar4 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar4 = lVar2;
    }
    uVar5 = *(ulonglong *)(lVar4 + param_3);
  }
  else {
    local_d8[1] = 0.0;
    uVar5 = (ulonglong)(uint)fVar1;
    local_d8[0] = fVar1;
  }
  FMovieScene3DTransformTemplateData::Evaluate(param_1 + 0x48,&local_68,uVar5);
  FUN_141fc8f20(param_1,&local_c8,param_5 + 0x60);
  fVar1 = *(float *)(param_3 + 0x24);
  if (fVar1 == -0.0) {
    lVar4 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar4 = lVar2;
    }
    uVar5 = *(ulonglong *)(lVar4 + param_3);
  }
  else {
    local_d8[1] = 0.0;
    uVar5 = (ulonglong)(uint)fVar1;
    local_d8[0] = fVar1;
  }
  local_74 = (float)FMovieSceneEvalTemplate::EvaluateEasing(param_1,uVar5);
  if ((*(uint *)(param_1 + 0x68c) >> 9 & 1) != 0) {
    local_d8[0] = 1.0;
    if (*(uint *)(param_3 + 0x24) == 0x80000000) {
      lVar4 = 0x10;
      if (*(int *)(param_3 + 0x20) != 0) {
        lVar4 = lVar2;
      }
      uVar5 = *(ulonglong *)(lVar4 + param_3);
    }
    else {
      local_d0 = (ulonglong)*(uint *)(param_3 + 0x24);
      uVar5 = local_d0;
    }
    FMovieSceneFloatChannel::Evaluate(param_1 + 0x5e8,uVar5,local_d8);
    local_74 = local_74 * local_d8[0];
  }
  local_70 = *(undefined1 *)(param_1 + 0x688);
  local_90 = local_90 | 3;
  local_c0 = (undefined ***)&PTR_FUN_144f51bd8;
  local_b8 = local_68;
  uStack_b0 = uStack_60;
  local_a8 = local_58;
  uStack_a4 = uStack_54;
  uStack_a0 = uStack_50;
  uStack_9c = uStack_4c;
  local_98 = local_48;
  local_88 = *(undefined4 *)(param_5 + 0x124);
  uStack_84 = *(undefined4 *)(param_5 + 0x128);
  uStack_80 = *(undefined4 *)(param_5 + 300);
  uStack_7c = *(undefined4 *)(param_5 + 0x130);
  local_78 = *(undefined4 *)(param_5 + 0x170);
  TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
  ::FindId(param_5 + 0xb0,local_d8,param_5 + 0x110U);
  if ((local_d8[0] == -NAN) ||
     (lVar2 = (longlong)(int)local_d8[0] * 0x30 + *(longlong *)(param_5 + 0xb0), lVar2 == 0)) {
    local_d0 = param_5 + 0x110U;
    FUN_141fc7cb0(param_5 + 0xb0,local_d8,&local_d0,0);
    lVar2 = (longlong)(int)local_d8[0] * 0x30 + *(longlong *)(param_5 + 0xb0);
  }
  FMovieSceneAccumulatedBlendState::Add<FTransform>(lVar2 + 0x18,local_c8,&local_c0);
  if ((local_90 & 1) != 0) {
    ppppuVar3 = &local_c0;
    if ((local_90 & 2) == 0) {
      ppppuVar3 = (undefined ****)local_c0;
    }
    local_90 = local_90 & 0xfe;
    (*(code *)**ppppuVar3)(ppppuVar3,0);
    if ((local_90 & 2) == 0) {
      FMemory::Free(local_c0);
    }
  }
  return;
}



// FUNCTION 141fe9fe0 Evaluate body=1377 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneVectorPropertySectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  uint uVar9;
  byte bVar10;
  undefined8 ***pppuVar11;
  undefined4 uVar12;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  uint local_b0 [2];
  undefined1 local_a8 [8];
  undefined8 **local_a0;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  undefined8 ***local_88;
  byte local_80;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar9 = *(uint *)(param_3 + 0x24);
  if (uVar9 == 0x80000000) {
    lVar6 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar6 = 4;
    }
    uVar8 = *(ulonglong *)(lVar6 + param_3);
  }
  else {
    local_b0[1] = 0;
    uVar8 = (ulonglong)uVar9;
    local_a0 = (undefined8 **)(ulonglong)uVar9;
    local_b0[0] = uVar9;
  }
  uVar12 = FMovieSceneEvalTemplate::EvaluateEasing(param_1,uVar8);
  iVar1 = *(int *)(param_1 + 0x2c8);
  if (iVar1 == 2) {
    puVar5 = (undefined8 *)FUN_141fc90f0(param_1,local_a8,param_5 + 0x60);
    uVar9 = 0;
    pppuVar11 = &local_a0;
    bVar10 = 0;
    uStack_98 = 0;
    uVar2 = *puVar5;
    local_b8 = *(undefined1 *)(param_1 + 0x2cc);
    param_1 = param_1 + 0x48;
    do {
      local_b0[0] = 0;
      cVar4 = FMovieSceneFloatChannel::Evaluate(param_1,uVar8,local_b0);
      if (cVar4 != '\0') {
        *(uint *)pppuVar11 = local_b0[0];
        uVar9 = uStack_98 | 1 << (bVar10 & 0x1f);
        uStack_98 = uVar9;
      }
      bVar10 = bVar10 + 1;
      param_1 = param_1 + 0xa0;
      pppuVar11 = (undefined8 ***)((longlong)pppuVar11 + 4);
    } while (bVar10 < 2);
    if (uVar9 == 0) {
      return;
    }
    local_80 = local_80 & 0xfc;
    local_88 = (undefined8 ***)FMemory::Malloc(0x18);
    ppppuVar7 = &local_88;
    if ((local_80 & 2) == 0) {
      ppppuVar7 = (undefined8 ****)local_88;
    }
    local_80 = local_80 | 1;
    ppppuVar7[1] = (undefined8 ***)local_a0;
    *(uint *)(ppppuVar7 + 2) = uVar9;
    *ppppuVar7 = (undefined8 ***)&PTR_FUN_144f51de8;
    uStack_78 = *(uint *)(param_5 + 0x124);
    uStack_74 = *(undefined4 *)(param_5 + 0x128);
    local_70 = *(undefined4 *)(param_5 + 300);
    uStack_6c = *(undefined4 *)(param_5 + 0x130);
    local_60 = CONCAT31(local_60._1_3_,local_b8);
    uStack_68 = *(undefined4 *)(param_5 + 0x170);
    uStack_64 = uVar12;
    TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
    ::FindId(param_5 + 0xb0,local_b0,(undefined8 ***)(param_5 + 0x110));
    if ((local_b0[0] == 0xffffffff) ||
       (lVar6 = (longlong)(int)local_b0[0] * 0x30 + *(longlong *)(param_5 + 0xb0), lVar6 == 0)) {
      local_a0 = (undefined8 ***)(param_5 + 0x110);
      FUN_141fc7cb0(param_5 + 0xb0,local_b0,&local_a0,0);
      lVar6 = (longlong)(int)local_b0[0] * 0x30 + *(longlong *)(param_5 + 0xb0);
    }
    FMovieSceneAccumulatedBlendState::Add<FVector2D>(lVar6 + 0x18,uVar2,&local_88);
    if ((local_80 & 1) == 0) {
      return;
    }
    ppppuVar7 = &local_88;
    if ((local_80 & 2) == 0) {
      ppppuVar7 = (undefined8 ****)local_88;
    }
    local_80 = local_80 & 0xfe;
    (*(code *)**ppppuVar7)(ppppuVar7,0);
    bVar10 = local_80;
  }
  else {
    local_5c = uVar12;
    if (iVar1 == 3) {
      puVar5 = (undefined8 *)FUN_141fc9490(param_1,local_a8,param_5 + 0x60);
      uVar9 = 0;
      pppuVar11 = &local_a0;
      bVar10 = 0;
      uStack_94 = 0;
      uVar2 = *puVar5;
      local_b8 = *(undefined1 *)(param_1 + 0x2cc);
      param_1 = param_1 + 0x48;
      do {
        local_b0[0] = 0;
        cVar4 = FMovieSceneFloatChannel::Evaluate(param_1,uVar8,local_b0);
        if (cVar4 != '\0') {
          *(uint *)pppuVar11 = local_b0[0];
          uVar9 = uStack_94 | 1 << (bVar10 & 0x1f);
          uStack_94 = uVar9;
        }
        bVar10 = bVar10 + 1;
        param_1 = param_1 + 0xa0;
        pppuVar11 = (undefined8 ***)((longlong)pppuVar11 + 4);
      } while (bVar10 < 3);
      if (uVar9 == 0) {
        return;
      }
      uStack_78 = uStack_78 & 0xfffffffc;
      local_88 = (undefined8 ***)FMemory::Malloc(0x18);
      uVar9 = uStack_78;
      uStack_78 = uStack_78 | 1;
      ppppuVar7 = &local_88;
      if ((uVar9 & 2) == 0) {
        ppppuVar7 = (undefined8 ****)local_88;
      }
      *ppppuVar7 = (undefined8 ***)&PTR_FUN_144f51df8;
      ppppuVar7[1] = (undefined8 ***)local_a0;
      ppppuVar7[2] = (undefined8 ***)CONCAT44(uStack_94,uStack_98);
      local_58 = local_b8;
      local_70 = *(undefined4 *)(param_5 + 0x124);
      uStack_6c = *(undefined4 *)(param_5 + 0x128);
      uStack_68 = *(undefined4 *)(param_5 + 300);
      uStack_64 = *(undefined4 *)(param_5 + 0x130);
      local_60 = *(undefined4 *)(param_5 + 0x170);
      TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
      ::FindId(param_5 + 0xb0,local_b0,(undefined8 ***)(param_5 + 0x110));
      if ((local_b0[0] == 0xffffffff) ||
         (lVar6 = (longlong)(int)local_b0[0] * 0x30 + *(longlong *)(param_5 + 0xb0), lVar6 == 0)) {
        local_a0 = (undefined8 ***)(param_5 + 0x110);
        FUN_141fc7cb0(param_5 + 0xb0,local_b0,&local_a0,0);
        lVar6 = (longlong)(int)local_b0[0] * 0x30 + *(longlong *)(param_5 + 0xb0);
      }
      FUN_141fc65a0(lVar6 + 0x18,uVar2,&local_88);
    }
    else {
      if (iVar1 != 4) {
        return;
      }
      puVar5 = (undefined8 *)FUN_141fc92c0(param_1,local_a8,param_5 + 0x60);
      uVar9 = 0;
      pppuVar11 = &local_a0;
      bVar10 = 0;
      local_90 = 0;
      uVar2 = *puVar5;
      local_b8 = *(undefined1 *)(param_1 + 0x2cc);
      param_1 = param_1 + 0x48;
      do {
        local_b0[0] = 0;
        cVar4 = FMovieSceneFloatChannel::Evaluate(param_1,uVar8,local_b0);
        if (cVar4 != '\0') {
          *(uint *)pppuVar11 = local_b0[0];
          uVar9 = local_90 | 1 << (bVar10 & 0x1f);
          local_90 = uVar9;
        }
        bVar10 = bVar10 + 1;
        param_1 = param_1 + 0xa0;
        pppuVar11 = (undefined8 ***)((longlong)pppuVar11 + 4);
      } while (bVar10 < 4);
      if (uVar9 == 0) {
        return;
      }
      uStack_78 = uStack_78 & 0xfffffffc;
      local_88 = (undefined8 ***)FMemory::Malloc(0x20);
      uVar3 = uStack_78;
      uStack_78 = uStack_78 | 1;
      ppppuVar7 = &local_88;
      if ((uVar3 & 2) == 0) {
        ppppuVar7 = (undefined8 ****)local_88;
      }
      ppppuVar7[1] = (undefined8 ***)local_a0;
      ppppuVar7[2] = (undefined8 ***)CONCAT44(uStack_94,uStack_98);
      *(uint *)(ppppuVar7 + 3) = uVar9;
      *ppppuVar7 = (undefined8 ***)&PTR_FUN_144f51e08;
      local_70 = *(undefined4 *)(param_5 + 0x124);
      uStack_6c = *(undefined4 *)(param_5 + 0x128);
      uStack_68 = *(undefined4 *)(param_5 + 300);
      uStack_64 = *(undefined4 *)(param_5 + 0x130);
      local_58 = local_b8;
      local_60 = *(undefined4 *)(param_5 + 0x170);
      TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
      ::FindId(param_5 + 0xb0,local_b0,(undefined8 ***)(param_5 + 0x110));
      if ((local_b0[0] == 0xffffffff) ||
         (lVar6 = (longlong)(int)local_b0[0] * 0x30 + *(longlong *)(param_5 + 0xb0), lVar6 == 0)) {
        local_a0 = (undefined8 ***)(param_5 + 0x110);
        FUN_141fc7cb0(param_5 + 0xb0,local_b0,&local_a0,0);
        lVar6 = (longlong)(int)local_b0[0] * 0x30 + *(longlong *)(param_5 + 0xb0);
      }
      FUN_141fc63f0(lVar6 + 0x18,uVar2,&local_88);
    }
    if ((uStack_78 & 1) == 0) {
      return;
    }
    ppppuVar7 = &local_88;
    if ((uStack_78 & 2) == 0) {
      ppppuVar7 = (undefined8 ****)local_88;
    }
    uStack_78 = uStack_78 & 0xfffffffe;
    (*(code *)**ppppuVar7)(ppppuVar7,0);
    bVar10 = (byte)uStack_78;
  }
  if ((bVar10 & 2) == 0) {
    FMemory::Free(local_88);
  }
  return;
}



// FUNCTION 141fea550 Evaluate body=381 status=ok
// SIG undefined Evaluate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneVisibilitySectionTemplate::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong *param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined ****ppppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_158 [32];
  undefined ***local_138;
  char local_128 [4];
  uint local_124;
  undefined4 uStack_120;
  undefined ***local_118;
  undefined1 local_110;
  byte local_d8;
  undefined1 local_d0 [104];
  undefined8 **local_68 [8];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar1 = *(uint *)(param_3 + 0x24);
  local_128[0] = '\0';
  if (uVar1 == 0x80000000) {
    lVar7 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar7 = 4;
    }
    uVar8 = *(ulonglong *)(lVar7 + param_3);
  }
  else {
    uStack_120 = 0;
    uVar8 = (ulonglong)uVar1;
    local_124 = uVar1;
  }
  cVar3 = FMovieSceneBoolChannel::Evaluate(param_1 + 0x48,uVar8,local_128);
  if (cVar3 != '\0') {
    local_110 = local_128[0] == '\0';
    local_d8 = local_d8 | 3;
    local_118 = (undefined ***)&PTR_FUN_144f4d1d8;
    local_138 = (undefined ***)&local_118;
    uVar4 = FMovieSceneExecutionTokens::FEntry::FEntry
                      (local_d0,param_5 + 0x22,(longlong)param_5 + 0x124,(longlong)param_5 + 0x134);
    iVar2 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
    }
    FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar2 * 0xb0 + *param_5,uVar4);
    if ((local_28 & 1) != 0) {
      pppuVar5 = local_68;
      if ((local_28 & 2) == 0) {
        pppuVar5 = (undefined8 ***)local_68[0];
      }
      local_28 = local_28 & 0xfe;
      (*(code *)**pppuVar5)(pppuVar5,0);
      if ((local_28 & 2) == 0) {
        FMemory::Free(local_68[0]);
      }
    }
    if ((local_d8 & 1) != 0) {
      ppppuVar6 = &local_118;
      if ((local_d8 & 2) == 0) {
        ppppuVar6 = (undefined ****)local_118;
      }
      local_d8 = local_d8 & 0xfe;
      (*(code *)**ppppuVar6)(ppppuVar6,0);
      if ((local_d8 & 2) == 0) {
        FMemory::Free(local_118);
      }
    }
  }
  return;
}



// FUNCTION 141fea6d0 FUN_141fea6d0 body=930 status=ok
// SIG undefined FUN_141fea6d0(void)

void FUN_141fea6d0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong local_res10;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  uVar12 = *(uint *)(param_2 + 0x24);
  if (uVar12 == 0x80000000) {
    lVar15 = 0x10;
    if (*(int *)(param_2 + 0x20) != 0) {
      lVar15 = 4;
    }
    local_res10 = *(ulonglong *)(lVar15 + param_2);
    uVar12 = (uint)local_res10;
  }
  else {
    local_res10 = (ulonglong)uVar12;
  }
  uVar9 = local_res10;
  puVar11 = *(undefined8 **)(param_1 + 0x20);
  puVar14 = puVar11 + (longlong)*(int *)(param_1 + 0x28) * 0x15;
  for (; puVar11 != puVar14; puVar11 = puVar11 + 0x15) {
    local_res10 = local_res10 & 0xffffffff00000000;
    cVar4 = FMovieSceneFloatChannel::Evaluate(puVar11 + 1,uVar9,&local_res10);
    if (cVar4 != '\0') {
      iVar8 = *(int *)(param_3 + 0x28);
      *(int *)(param_3 + 0x28) = iVar8 + 1;
      if (*(int *)(param_3 + 0x2c) < iVar8 + 1) {
        TArray<TSharedPtr<FCachedTypefaceData,0>,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                  (param_3);
      }
      lVar15 = *(longlong *)(param_3 + 0x20);
      if (*(longlong *)(param_3 + 0x20) == 0) {
        lVar15 = param_3;
      }
      uVar3 = *puVar11;
      *(uint *)(lVar15 + 8 + (longlong)iVar8 * 0x10) = (uint)local_res10;
      *(undefined8 *)(lVar15 + (longlong)iVar8 * 0x10) = uVar3;
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0x30);
  puVar14 = puVar11 + (longlong)*(int *)(param_1 + 0x38) * 0x3d;
  for (; puVar11 != puVar14; puVar11 = puVar11 + 0x3d) {
    local_58 = 0;
    uStack_50 = 0;
    cVar4 = FMovieSceneFloatChannel::Evaluate(puVar11 + 1,uVar9,&local_58);
    cVar5 = FMovieSceneFloatChannel::Evaluate(puVar11 + 0x15,uVar9,(longlong)&local_58 + 4);
    cVar6 = FMovieSceneFloatChannel::Evaluate(puVar11 + 0x29,uVar9);
    if (cVar6 != '\0' || (cVar4 != '\0' || cVar5 != '\0')) {
      iVar8 = *(int *)(param_3 + 0x68);
      lVar15 = (longlong)iVar8;
      *(int *)(param_3 + 0x68) = iVar8 + 1;
      if (*(int *)(param_3 + 0x6c) < iVar8 + 1) {
        TArray<FColorParameterNameAndValue,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                  (param_3 + 0x30,iVar8);
      }
      lVar13 = *(longlong *)(param_3 + 0x60);
      if (*(longlong *)(param_3 + 0x60) == 0) {
        lVar13 = param_3 + 0x30;
      }
      uVar3 = *puVar11;
      *(undefined8 *)(lVar13 + 8 + lVar15 * 0x18) = local_58;
      *(undefined4 *)(lVar13 + 0x10 + lVar15 * 0x18) = uStack_50;
      *(undefined8 *)(lVar13 + lVar15 * 0x18) = uVar3;
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0x40);
  puVar14 = puVar11 + (longlong)*(int *)(param_1 + 0x48) * 0x51;
  for (; puVar11 != puVar14; puVar11 = puVar11 + 0x51) {
    local_58 = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
    uStack_50 = DAT_1464aa6c8;
    uStack_4c = DAT_1464aa6cc;
    cVar4 = FMovieSceneFloatChannel::Evaluate(puVar11 + 1,uVar9,&local_58);
    cVar5 = FMovieSceneFloatChannel::Evaluate(puVar11 + 0x15,uVar9,(longlong)&local_58 + 4);
    cVar6 = FMovieSceneFloatChannel::Evaluate(puVar11 + 0x29,uVar9,&uStack_50);
    cVar7 = FMovieSceneFloatChannel::Evaluate(puVar11 + 0x3d,uVar9,&uStack_4c);
    if (cVar7 != '\0' || ((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0')) {
      iVar8 = *(int *)(param_3 + 0xa8);
      *(int *)(param_3 + 0xa8) = iVar8 + 1;
      if (*(int *)(param_3 + 0xac) < iVar8 + 1) {
        TArray<FColorParameterNameAndValue,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                  (param_3 + 0x70);
      }
      lVar15 = *(longlong *)(param_3 + 0xa0);
      if (*(longlong *)(param_3 + 0xa0) == 0) {
        lVar15 = param_3 + 0x70;
      }
      *(undefined8 *)(lVar15 + (longlong)iVar8 * 0x18) = *puVar11;
      puVar2 = (undefined8 *)(lVar15 + 8 + (longlong)iVar8 * 0x18);
      *puVar2 = local_58;
      puVar2[1] = CONCAT44(uStack_4c,uStack_50);
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0x50);
  puVar14 = puVar11 + (longlong)*(int *)(param_1 + 0x58) * 0x15;
  if (puVar11 != puVar14) {
    do {
      if (*(int *)(puVar11 + 3) == 0) {
        uStack_50 = *(undefined4 *)(puVar11 + 4);
        uStack_4c = *(undefined4 *)((longlong)puVar11 + 0x24);
        local_48 = *(undefined4 *)(puVar11 + 5);
        uStack_44 = *(undefined4 *)((longlong)puVar11 + 0x2c);
        uVar16 = (undefined4)puVar11[6];
        uVar17 = (undefined4)((ulonglong)puVar11[6] >> 0x20);
      }
      else {
        uVar9 = (longlong)*(int *)(puVar11 + 3);
        lVar15 = 0;
        do {
          uVar10 = uVar9 >> 1;
          if (*(int *)(puVar11[2] + (uVar10 + lVar15) * 4) <= (int)uVar12) {
            lVar15 = (ulonglong)((uint)uVar9 & 1) + uVar10 + lVar15;
          }
          uVar9 = uVar10;
        } while (uVar10 != 0);
        iVar8 = (int)lVar15 + -1;
        if (iVar8 < 1) {
          iVar8 = 0;
        }
        puVar1 = (undefined4 *)(puVar11[7] + (longlong)iVar8 * 0x18);
        uStack_50 = *puVar1;
        uStack_4c = puVar1[1];
        local_48 = puVar1[2];
        uStack_44 = puVar1[3];
        uVar3 = *(undefined8 *)(puVar11[7] + 0x10 + (longlong)iVar8 * 0x18);
        uVar16 = (undefined4)uVar3;
        uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      local_58 = *puVar11;
      iVar8 = *(int *)(param_3 + 0xf8);
      uStack_40 = CONCAT44(uVar17,uVar16);
      *(int *)(param_3 + 0xf8) = iVar8 + 1;
      if (*(int *)(param_3 + 0xfc) < iVar8 + 1) {
        TArray<FLayoutExtender::FExtendedTab,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                  (param_3 + 0xb0,iVar8);
      }
      lVar15 = *(longlong *)(param_3 + 0xf0);
      if (*(longlong *)(param_3 + 0xf0) == 0) {
        lVar15 = param_3 + 0xb0;
      }
      puVar11 = puVar11 + 0x15;
      puVar2 = (undefined8 *)(lVar15 + (longlong)iVar8 * 0x20);
      *puVar2 = local_58;
      puVar2[1] = CONCAT44(uStack_4c,uStack_50);
      puVar2 = (undefined8 *)(lVar15 + 0x10 + (longlong)iVar8 * 0x20);
      *puVar2 = CONCAT44(uStack_44,local_48);
      puVar2[1] = uStack_40;
    } while (puVar11 != puVar14);
  }
  return;
}



// FUNCTION 141feaa80 FUN_141feaa80 body=1877 status=ok
// SIG undefined FUN_141feaa80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141feaa80(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *******pppppppuVar10;
  char cVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 ******ppppppuVar14;
  longlong lVar15;
  int *piVar16;
  uint uVar17;
  undefined8 ******ppppppuVar18;
  int iVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  float fVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auStack_238 [32];
  undefined8 ******local_218;
  undefined8 local_208;
  undefined8 *****local_200;
  char local_1f8 [4];
  int local_1f4;
  char cStack_1f0;
  int local_1ec;
  undefined8 *****local_1e8;
  uint local_1e0;
  int iStack_1dc;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  float local_1c0;
  ulonglong local_1bc;
  undefined8 ******local_1b0;
  undefined8 ****local_1a8;
  undefined8 ****local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 ****local_190;
  undefined4 local_188;
  undefined4 local_184;
  byte local_170;
  undefined **local_168;
  undefined8 *****local_160;
  undefined8 local_158;
  undefined8 ****local_150 [6];
  undefined8 *****local_120;
  undefined8 local_118;
  undefined1 local_108 [104];
  undefined8 ******local_a0 [8];
  byte local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_1c8 = param_5;
  if (*(int *)(param_3 + 0x34) == 0) {
    return;
  }
  if ((*(byte *)(param_3 + 0x40) & 2) != 0) {
    return;
  }
  iVar22 = *(int *)(param_3 + 0x20);
  if (iVar22 == 1) {
    uVar17 = *(uint *)(param_1 + 0xb8) & 2;
  }
  else {
    uVar17 = *(uint *)(param_1 + 0xb8) & 1;
  }
  if (uVar17 == 0) {
    return;
  }
  iVar21 = 0;
  iStack_1dc = 0;
  ppppppuVar18 = (undefined8 ******)0x0;
  local_200 = (undefined8 ******)0x0;
  local_1e8 = (undefined8 ******)0x0;
  local_1d0 = param_1;
  FMovieSceneEvaluationRange::TimeRangeToNumberRange(local_1f8,param_3);
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  piVar16 = *(int **)(param_1 + 0x28);
  uVar17 = *(uint *)(param_1 + 0x30);
  uVar23 = (ulonglong)uVar17;
  lVar15 = *(longlong *)(param_1 + 0x38);
  local_208._4_4_ = (float)((ulonglong)*(undefined8 *)(param_3 + 0x2c) >> 0x20);
  local_208._0_4_ = (int)*(undefined8 *)(param_3 + 0x2c);
  if (local_208._4_4_ == 0.0) {
    local_208._0_4_ = -(int)local_208;
    local_208._4_4_ = 0.0;
  }
  else {
    local_208._0_4_ = -1 - (int)local_208;
    local_208._4_4_ = 1.0 - local_208._4_4_;
    if (0.0 <= local_208._4_4_) {
      if (0.99999994 <= local_208._4_4_) {
        local_208._4_4_ = 0.99999994;
      }
    }
    else {
      local_208._4_4_ = 0.0;
    }
  }
  dVar27 = ((double)(int)local_208 + (double)local_208._4_4_) / (double)*(float *)(param_3 + 0x28);
  lVar8 = (longlong)dVar27;
  dVar25 = dVar27;
  if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != dVar27)) {
    auVar26._8_8_ = dVar27;
    auVar26._0_8_ = dVar27;
    uVar5 = movmskpd(0,auVar26);
    dVar25 = (double)(longlong)(lVar8 - (ulonglong)(uVar5 & 1));
  }
  dVar27 = dVar27 - dVar25;
  uVar5 = (uint)dVar25;
  dVar25 = 0.0;
  if ((0.0 <= dVar27) && (dVar25 = 0.9999999403953552, dVar27 <= 0.9999999403953552)) {
    dVar25 = dVar27;
  }
  fVar24 = (float)dVar25;
  if (0.0 <= fVar24) {
    if (0.99999994 <= fVar24) {
      local_208 = CONCAT44(0x3f7fffff,uVar5);
    }
    else {
      local_208 = CONCAT44(fVar24,uVar5);
    }
  }
  else {
    local_208 = (ulonglong)uVar5;
  }
  local_1c0 = 1.0 / *(float *)(param_3 + 0x28);
  local_1bc = local_208;
  if (*(uint *)(param_3 + 0x24) == 0x80000000) {
    lVar8 = 0x10;
    if (*(int *)(param_3 + 0x20) != 0) {
      lVar8 = 4;
    }
    uVar12 = *(ulonglong *)(lVar8 + param_3);
  }
  else {
    local_208 = (ulonglong)*(uint *)(param_3 + 0x24);
    uVar12 = local_208;
  }
  local_1d8 = uVar7;
  puVar6 = (undefined8 *)operator*(&local_208,uVar12,&local_1c0);
  iVar13 = (int)((ulonglong)uVar7 >> 0x20);
  uVar7 = *puVar6;
  local_208._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
  fVar24 = ((float)((longlong)iVar13 * (longlong)(int)uVar7) + (float)iVar13 * local_208._4_4_) /
           (float)(int)local_1d8;
  ppppppuVar9 = (undefined8 ******)local_200;
  local_208 = uVar7;
  if (iVar22 == 1) {
    iVar22 = uVar17 - 1;
    if (iVar22 < 0) goto LAB_141feb151;
    piVar16 = piVar16 + iVar22;
    lVar15 = (longlong)iVar22 * 0x30 + lVar15;
    iVar13 = local_1ec;
    cVar11 = cStack_1f0;
    cVar20 = local_1f8[0];
    iVar19 = local_1f4;
    do {
      iVar1 = *piVar16;
      if (((((cVar20 == '\x02') || (iVar19 < iVar1)) || ((iVar19 <= iVar1 && (cVar20 == '\x01'))))
          || ((cVar20 == '\x01' && (iVar1 == iVar19)))) &&
         (((cVar11 == '\x02' || ((iVar1 < iVar13 || ((iVar1 <= iVar13 && (cVar11 == '\x01')))))) ||
          ((cVar11 == '\x01' && (iVar1 == iVar13)))))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        FEventPayload::FEventPayload(&local_1b0,lVar15);
        iVar13 = (int)ppppppuVar18;
        local_1e0 = iVar13 + 1;
        if (iVar21 < (int)local_1e0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_1e8,ppppppuVar18);
          local_200 = local_1e8;
          ppppppuVar9 = (undefined8 ******)local_1e8;
          iVar21 = iStack_1dc;
        }
        ppppppuVar18 = (undefined8 ******)(ulonglong)local_1e0;
        ppppppuVar14 = ppppppuVar9 + (longlong)iVar13 * 7;
        *ppppppuVar14 = local_1b0;
        ppppppuVar14[1] = (undefined8 *****)local_1a8;
        ppppppuVar14[2] = (undefined8 *****)local_1a0;
        *(undefined4 *)(ppppppuVar14 + 3) = local_198;
        *(undefined4 *)((longlong)ppppppuVar14 + 0x1c) = local_194;
        ppppppuVar14[4] = (undefined8 *****)local_190;
        *(undefined4 *)(ppppppuVar14 + 5) = local_188;
        *(undefined4 *)((longlong)ppppppuVar14 + 0x2c) = local_184;
        *(float *)(ppppppuVar14 + 6) = fVar24;
        iVar13 = local_1ec;
        cVar11 = cStack_1f0;
        cVar20 = local_1f8[0];
        iVar19 = local_1f4;
      }
      lVar15 = lVar15 + -0x30;
      piVar16 = piVar16 + -1;
      iVar22 = iVar22 + -1;
    } while (-1 < iVar22);
  }
  else {
    iVar22 = local_1ec;
    cVar11 = cStack_1f0;
    cVar20 = local_1f8[0];
    iVar13 = local_1f4;
    if ((int)uVar17 < 1) goto LAB_141feb151;
    do {
      iVar19 = *piVar16;
      if (((((cVar20 == '\x02') || (iVar13 < iVar19)) || ((iVar13 <= iVar19 && (cVar20 == '\x01'))))
          || ((cVar20 == '\x01' && (iVar19 == iVar13)))) &&
         (((cVar11 == '\x02' || ((iVar19 < iVar22 || ((iVar19 <= iVar22 && (cVar11 == '\x01'))))))
          || ((cVar11 == '\x01' && (iVar19 == iVar22)))))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        FEventPayload::FEventPayload(&local_1b0,lVar15);
        iVar22 = (int)ppppppuVar18;
        local_1e0 = iVar22 + 1;
        if (iVar21 < (int)local_1e0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_1e8,ppppppuVar18);
          local_200 = local_1e8;
          iVar21 = iStack_1dc;
        }
        ppppppuVar18 = (undefined8 ******)(ulonglong)local_1e0;
        ppppppuVar9 = (undefined8 ******)(local_200 + (longlong)iVar22 * 7);
        *ppppppuVar9 = local_1b0;
        ppppppuVar9[1] = (undefined8 *****)local_1a8;
        ppppppuVar9[2] = (undefined8 *****)local_1a0;
        *(undefined4 *)(ppppppuVar9 + 3) = local_198;
        *(undefined4 *)((longlong)ppppppuVar9 + 0x1c) = local_194;
        ppppppuVar9[4] = (undefined8 *****)local_190;
        *(undefined4 *)(ppppppuVar9 + 5) = local_188;
        *(undefined4 *)((longlong)ppppppuVar9 + 0x2c) = local_184;
        *(float *)(ppppppuVar9 + 6) = fVar24;
        iVar22 = local_1ec;
        cVar11 = cStack_1f0;
        cVar20 = local_1f8[0];
        iVar13 = local_1f4;
      }
      lVar15 = lVar15 + 0x30;
      piVar16 = piVar16 + 1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  iVar22 = (int)ppppppuVar18;
  ppppppuVar9 = (undefined8 ******)local_200;
  if (iVar22 != 0) {
    ppppppuVar18 = (undefined8 ******)0x0;
    local_168 = &PTR__scalar_deleting_destructor__144f49098;
    local_160 = local_200;
    iVar13 = *(int *)(local_1d0 + 0xb0);
    _Src = *(void **)(local_1d0 + 0xa8);
    local_1e8 = (undefined8 ******)0x0;
    local_1e0 = 0;
    iStack_1dc = 0;
    local_120 = (undefined8 ******)0x0;
    local_118 = CONCAT44(local_118._4_4_,iVar13);
    local_158._0_4_ = iVar22;
    local_158._4_4_ = iVar21;
    if (iVar13 == 0) {
      local_118 = 0;
    }
    else {
      TArray<FMovieSceneObjectBindingID,TInlineAllocator<2,FDefaultAllocator>_>::ResizeForCopy
                (local_150,iVar13,0);
      ppppppuVar9 = (undefined8 ******)local_150;
      if ((undefined8 ******)local_120 != (undefined8 ******)0x0) {
        ppppppuVar9 = (undefined8 ******)local_120;
      }
      _guard_xfg_dispatch_icall_nop(ppppppuVar9,_Src,(longlong)iVar13 * 0x18);
    }
    TArray<FMovieSceneEventData,FDefaultAllocator>::~TArray<FMovieSceneEventData,FDefaultAllocator>
              (&local_1e8);
    local_170 = local_170 & 0xfc;
    local_1b0 = (undefined8 ******)FMemory::Malloc(0x58);
    bVar4 = local_170;
    local_170 = local_170 | 1;
    pppppppuVar10 = &local_1b0;
    if ((bVar4 & 2) == 0) {
      pppppppuVar10 = (undefined8 *******)local_1b0;
    }
    *pppppppuVar10 = (undefined8 ******)&PTR__scalar_deleting_destructor__144f49098;
    pppppppuVar10[1] = (undefined8 ******)0x0;
    pppppppuVar10[1] = (undefined8 ******)local_160;
    local_160 = (undefined8 *****)0x0;
    *(int *)(pppppppuVar10 + 2) = (int)local_158;
    *(int *)((longlong)pppppppuVar10 + 0x14) = local_158._4_4_;
    local_158 = 0;
    pppppppuVar10[9] = (undefined8 ******)0x0;
    if ((undefined8 ******)local_120 == (undefined8 ******)0x0) {
      _guard_xfg_dispatch_icall_nop(pppppppuVar10 + 3,local_150,0x30);
    }
    if (pppppppuVar10[9] != (undefined8 ******)0x0) {
      FMemory::Free();
    }
    plVar3 = local_1c8;
    pppppppuVar10[9] = (undefined8 ******)local_120;
    local_120 = (undefined8 *****)0x0;
    *(undefined4 *)(pppppppuVar10 + 10) = (undefined4)local_118;
    *(undefined4 *)((longlong)pppppppuVar10 + 0x54) = local_118._4_4_;
    local_218 = &local_1b0;
    local_118 = 0;
    uVar7 = FMovieSceneExecutionTokens::FEntry::FEntry
                      (local_108,local_1c8 + 0x22,(longlong)local_1c8 + 0x124,
                       (longlong)local_1c8 + 0x134);
    iVar22 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar22 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar22 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(plVar3,iVar22);
    }
    FMovieSceneExecutionTokens::FEntry::FEntry((longlong)iVar22 * 0xb0 + *plVar3,uVar7);
    if ((local_60 & 1) != 0) {
      pppppppuVar10 = local_a0;
      if ((local_60 & 2) == 0) {
        pppppppuVar10 = (undefined8 *******)local_a0[0];
      }
      local_60 = local_60 & 0xfe;
      (*(code *)**pppppppuVar10)(pppppppuVar10,0);
      if ((local_60 & 2) == 0) {
        FMemory::Free(local_a0[0]);
      }
    }
    if ((local_170 & 1) != 0) {
      pppppppuVar10 = &local_1b0;
      if ((local_170 & 2) == 0) {
        pppppppuVar10 = (undefined8 *******)local_1b0;
      }
      local_170 = local_170 & 0xfe;
      (*(code *)**pppppppuVar10)(pppppppuVar10,0);
      if ((local_170 & 2) == 0) {
        FMemory::Free(local_1b0);
      }
    }
    if (local_120 != (undefined8 *****)0x0) {
      FMemory::Free();
    }
    TArray<FMovieSceneEventData,FDefaultAllocator>::~TArray<FMovieSceneEventData,FDefaultAllocator>
              (&local_160);
    ppppppuVar9 = ppppppuVar18;
  }
LAB_141feb151:
  if ((int)ppppppuVar18 != 0) {
    ppppppuVar14 = ppppppuVar9 + 2;
    do {
      if (ppppppuVar14[2] != (undefined8 *****)0x0) {
        FMemory::Free();
      }
      if (*ppppppuVar14 != (undefined8 *****)0x0) {
        FMemory::Free();
      }
      ppppppuVar14 = ppppppuVar14 + 7;
      uVar17 = (int)ppppppuVar18 - 1;
      ppppppuVar18 = (undefined8 ******)(ulonglong)uVar17;
    } while (uVar17 != 0);
  }
  if (ppppppuVar9 != (undefined8 ******)0x0) {
    FMemory::Free(ppppppuVar9);
  }
  return;
}



// FUNCTION 141feb1e0 FUN_141feb1e0 body=1403 status=ok
// SIG undefined FUN_141feb1e0(void)

void FUN_141feb1e0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined2 *puVar16;
  undefined8 *puVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  longlong lVar20;
  undefined2 in_stack_fffffffffffffef8;
  undefined1 uVar21;
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined **local_98;
  int *local_90;
  longlong local_88;
  int local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  
  IMovieScenePlayer::FindBoundObjects(param_5,&local_88,param_3,param_3 + 0x10);
  lVar12 = local_88 + (longlong)local_80 * 8;
  lVar20 = local_88;
  local_c8 = lVar12;
  if (local_88 != lVar12) {
    do {
      plVar3 = (longlong *)FWeakObjectPtr::Get(lVar20);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_1429f11d0();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          piVar15 = (int *)(param_1 + 8);
          lVar4 = (**(code **)(*plVar3 + 0x560))(plVar3,*piVar15);
          if (lVar4 != 0) {
            lVar5 = FUN_1429ba110();
            iVar10 = DAT_146acb980;
            uVar21 = (undefined1)((ushort)in_stack_fffffffffffffef8 >> 8);
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) {
              local_98 = &PTR_FUN_144f51a00;
              do {
                iVar8 = DAT_146acb960;
                LOCK();
                DAT_146acb960 = 1;
                UNLOCK();
              } while (iVar8 != 0);
              lVar12 = (longlong)DAT_146acb980;
              local_90 = piVar15;
              if (DAT_146acb978 != DAT_146acb978 + lVar12) {
                piVar9 = DAT_146acb978;
                do {
                  if (*piVar9 == *piVar15) {
                    iVar8 = (int)((longlong)piVar9 - (longlong)DAT_146acb978 >> 2);
                    if (iVar8 != -1) {
                      uVar6 = *(undefined8 *)(DAT_146acb968 + (longlong)iVar8 * 8);
                      goto LAB_141feb3b2;
                    }
                    break;
                  }
                  piVar9 = piVar9 + 1;
                } while (piVar9 != DAT_146acb978 + lVar12);
              }
              DAT_146acb980 = DAT_146acb980 + 1;
              if (DAT_146acb984 < DAT_146acb980) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146acb978,iVar10);
              }
              DAT_146acb978[lVar12] = *piVar15;
              uVar6 = FMovieSceneAnimTypeID::GenerateHash(&DAT_146acb960,DAT_146acb970);
              iVar10 = DAT_146acb970;
              lVar12 = (longlong)DAT_146acb970;
              DAT_146acb970 = DAT_146acb970 + 1;
              if (DAT_146acb974 < DAT_146acb970) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&DAT_146acb968,iVar10);
              }
              *(undefined8 *)(DAT_146acb968 + lVar12 * 8) = uVar6;
LAB_141feb3b2:
              iVar11 = 0;
              LOCK();
              DAT_146acb960 = 0;
              UNLOCK();
              local_a0 = *(undefined4 *)(param_5 + 0x2d8);
              local_a8 = *(undefined8 *)(param_5 + 0x2d0);
              FMovieScenePreAnimatedState::SavePreAnimatedState
                        (param_5 + 0xf8,uVar6,&local_98,plVar3,
                         CONCAT11(uVar21,*(undefined1 *)(param_5 + 0x2dc)),&local_a8);
              local_e8 = (undefined2 *)0x0;
              local_98 = &PTR_FUN_143fcdb70;
              local_e0 = 10;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
              puVar16 = local_e8;
              in_stack_fffffffffffffef8 = 0;
              FGenericPlatformString::Convert<char,wchar_t>(local_e8,10,"_Animated",10,0x3f);
              local_c0 = *(undefined8 *)(lVar4 + 0x18);
              FName::ToString(&local_c0,&local_d8);
              iVar8 = (int)local_d0;
              iVar10 = (int)local_e0;
              if ((int)local_d0 < 2) {
                local_e0 = 0;
                local_e8 = (undefined2 *)0x0;
                puVar18 = (undefined2 *)0x0;
                puVar19 = puVar16;
              }
              else {
                if ((int)local_e0 != 0) {
                  iVar11 = (int)local_e0 + -1;
                }
                if (((int)local_d0 != 0) || (iVar10 = 1, iVar11 == 0)) {
                  iVar10 = 0;
                }
                iVar2 = local_d0._4_4_;
                iVar10 = iVar10 + (int)local_d0;
                local_f8 = local_d8;
                local_d8 = (undefined2 *)0x0;
                local_f0._0_4_ = (int)local_d0;
                local_f0._4_4_ = local_d0._4_4_;
                local_d0 = 0;
                if (iVar2 < iVar10 + iVar11) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8);
                  iVar8 = (int)local_f0;
                }
                puVar19 = local_f8;
                iVar10 = iVar8;
                if (iVar11 != 0) {
                  iVar10 = iVar8 + (uint)(iVar8 == 0) + iVar11;
                  local_f0 = CONCAT44(local_f0._4_4_,iVar10);
                  if (local_f0._4_4_ < iVar10) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,iVar8);
                    iVar10 = (int)local_f0;
                  }
                  puVar19 = local_f8;
                  puVar18 = local_f8 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0));
                  _guard_xfg_dispatch_icall_nop(puVar18,puVar16,(longlong)iVar11 * 2);
                  puVar18[iVar11] = 0;
                }
                local_f8 = (undefined2 *)0x0;
                local_f0 = 0;
                puVar18 = puVar16;
              }
              if (local_d8 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if (puVar18 != (undefined2 *)0x0) {
                FMemory::Free(puVar18);
              }
              puVar16 = &DAT_143f3eda8;
              if (iVar10 != 0) {
                puVar16 = puVar19;
              }
              uVar6 = FUN_1429ba110();
              puVar13 = (undefined8 *)FName::FName(local_78,puVar16,1);
              FUN_141791c20(local_b8,plVar3,uVar6,*puVar13);
              lVar4 = UMaterialInstanceDynamic::Create(lVar4,plVar3,local_b8[0]);
              (**(code **)(*plVar3 + 0x568))(plVar3,*(undefined4 *)(param_1 + 8),lVar4);
              lVar12 = local_c8;
              if (puVar19 != (undefined2 *)0x0) {
                FMemory::Free(puVar19);
                lVar12 = local_c8;
              }
            }
            puVar13 = (undefined8 *)
                      ((ulonglong)(*(longlong *)(param_1 + 0x30) != 0) - 1 & param_1 + 0x10U |
                      *(ulonglong *)(param_1 + 0x30));
            puVar14 = puVar13 + (longlong)*(int *)(param_1 + 0x38) * 2;
            for (; puVar13 != puVar14; puVar13 = puVar13 + 2) {
              FUN_1425a2750(lVar4,*puVar13,*(undefined4 *)(puVar13 + 1));
            }
            puVar14 = (undefined8 *)
                      ((ulonglong)(*(longlong *)(param_1 + 0x70) != 0) - 1 & param_1 + 0x40U |
                      *(ulonglong *)(param_1 + 0x70));
            puVar13 = puVar14 + (longlong)*(int *)(param_1 + 0x78) * 3;
            for (; puVar14 != puVar13; puVar14 = puVar14 + 3) {
              puVar7 = (undefined4 *)FLinearColor::FLinearColor(local_48,puVar14 + 1);
              local_68 = *puVar7;
              uStack_64 = puVar7[1];
              uStack_60 = puVar7[2];
              uStack_5c = puVar7[3];
              FUN_1425a2be0(lVar4,*puVar14,&local_68);
            }
            puVar14 = (undefined8 *)
                      ((ulonglong)(*(longlong *)(param_1 + 0xb0) != 0) - 1 & param_1 + 0x80U |
                      *(ulonglong *)(param_1 + 0xb0));
            puVar13 = puVar14 + (longlong)*(int *)(param_1 + 0xb8) * 3;
            if (puVar14 != puVar13) {
              puVar17 = puVar14 + 1;
              do {
                local_58 = *(undefined4 *)puVar17;
                uStack_54 = *(undefined4 *)((longlong)puVar17 + 4);
                uStack_50 = *(undefined4 *)(puVar17 + 1);
                uStack_4c = *(undefined4 *)((longlong)puVar17 + 0xc);
                FUN_1425a2be0(lVar4,*puVar14,&local_58);
                puVar14 = puVar14 + 3;
                puVar17 = puVar17 + 3;
              } while (puVar14 != puVar13);
            }
          }
        }
      }
      lVar20 = lVar20 + 8;
    } while (lVar20 != lVar12);
  }
  return;
}



// FUNCTION 141feb760 FUN_141feb760 body=459 status=ok
// SIG undefined FUN_141feb760(void)

void FUN_141feb760(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  int local_res8 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  undefined8 local_88;
  undefined4 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined4 *local_68;
  int local_60;
  undefined1 local_58 [8];
  longlong local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  plVar4 = *(longlong **)(param_4 + 8);
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::FindId(plVar4,local_res8,param_4 + 0x24);
  puVar8 = (undefined8 *)0x0;
  puVar7 = puVar8;
  if (local_res8[0] != -1) {
    puVar7 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *plVar4);
  }
  puVar3 = puVar7 + 2;
  if (puVar7 == (undefined8 *)0x0) {
    puVar3 = puVar8;
  }
  if (puVar3 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar3;
  }
  uVar2 = puVar8[1];
  uVar1 = *(undefined1 *)(param_1 + 8);
  IMovieScenePlayer::FindBoundObjects(param_5,&local_68,param_3,param_3 + 0x10);
  for (puVar9 = local_68; puVar9 != local_68 + (longlong)local_60 * 2; puVar9 = puVar9 + 2) {
    local_res20 = *puVar9;
    local_res24 = puVar9[1];
    plVar4 = (longlong *)FWeakObjectPtr::Get(&local_res20);
    if (plVar4 != (longlong *)0x0) {
      local_88 = *(undefined8 *)(param_5 + 0x2d0);
      local_78 = &PTR_FUN_144f519d0;
      local_80 = *(undefined4 *)(param_5 + 0x2d8);
      local_70 = uVar2;
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_5 + 0xf8,puVar8[3],&local_78,plVar4,*(undefined1 *)(param_5 + 0x2dc),
                 &local_88);
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,uVar1);
      local_78 = &PTR_FUN_143fcdb70;
      FTrackInstancePropertyBindings::FindOrAdd(uVar2,local_58,plVar4);
      lVar5 = FWeakObjectPtr::Get(local_48);
      if (lVar5 == 0) {
        lVar5 = FWeakObjectPtr::Get(local_58);
        if ((((lVar5 != 0) && (local_50 != 0)) && ((*(uint *)(lVar5 + 8) & 0x18000) == 0)) &&
           (puVar6 = (undefined1 *)(*(int *)(lVar5 + 0x44) + local_50), puVar6 != (undefined1 *)0x0)
           ) {
          *puVar6 = (undefined1)local_res8[0];
        }
      }
      else {
        (**(code **)(*plVar4 + 0x208))(plVar4,lVar5,local_res8);
      }
      lVar5 = FWeakObjectPtr::Get(local_40);
      if (lVar5 != 0) {
        (**(code **)(*plVar4 + 0x208))(plVar4,lVar5,0);
      }
    }
  }
  return;
}



// FUNCTION 141feb930 FUN_141feb930 body=492 status=ok
// SIG undefined FUN_141feb930(void)

void FUN_141feb930(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  int local_res8;
  int local_resc;
  longlong local_res20;
  undefined8 local_88;
  undefined4 local_80;
  undefined **local_78;
  undefined8 local_70;
  int *local_68;
  int local_60;
  undefined1 local_58 [8];
  longlong local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  plVar4 = *(longlong **)(param_4 + 8);
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::FindId(plVar4,&local_res8,param_4 + 0x24);
  puVar9 = (undefined8 *)0x0;
  puVar7 = puVar9;
  if (local_res8 != -1) {
    puVar7 = (undefined8 *)((longlong)local_res8 * 0x20 + *plVar4);
  }
  puVar2 = puVar7 + 2;
  if (puVar7 == (undefined8 *)0x0) {
    puVar2 = puVar9;
  }
  if (puVar2 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar2;
  }
  uVar1 = puVar9[1];
  lVar3 = PropertyTemplate::ConvertFromIntermediateType<AActor_*,FMovieSceneObjectBindingID>
                    (param_1 + 8,param_3,param_4,param_5);
  if (lVar3 != 0) {
    IMovieScenePlayer::FindBoundObjects(param_5,&local_68,param_3,param_3 + 0x10);
    for (piVar8 = local_68; piVar8 != local_68 + (longlong)local_60 * 2; piVar8 = piVar8 + 2) {
      local_res8 = *piVar8;
      local_resc = piVar8[1];
      plVar4 = (longlong *)FWeakObjectPtr::Get(&local_res8);
      if (plVar4 != (longlong *)0x0) {
        local_88 = *(undefined8 *)(param_5 + 0x2d0);
        local_78 = &PTR_FUN_144f51a28;
        local_80 = *(undefined4 *)(param_5 + 0x2d8);
        local_70 = uVar1;
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (param_5 + 0xf8,puVar9[3],&local_78,plVar4,*(undefined1 *)(param_5 + 0x2dc),
                   &local_88);
        local_78 = &PTR_FUN_143fcdb70;
        local_res20 = lVar3;
        FTrackInstancePropertyBindings::FindOrAdd(uVar1,local_58,plVar4);
        lVar5 = FWeakObjectPtr::Get(local_48);
        if (lVar5 == 0) {
          lVar5 = FWeakObjectPtr::Get(local_58);
          if ((((lVar5 != 0) && (local_50 != 0)) && ((*(uint *)(lVar5 + 8) & 0x18000) == 0)) &&
             (plVar6 = (longlong *)(*(int *)(lVar5 + 0x44) + local_50), plVar6 != (longlong *)0x0))
          {
            *plVar6 = local_res20;
          }
        }
        else {
          (**(code **)(*plVar4 + 0x208))(plVar4,lVar5,&local_res20);
        }
        lVar5 = FWeakObjectPtr::Get(local_40);
        if (lVar5 != 0) {
          (**(code **)(*plVar4 + 0x208))(plVar4,lVar5,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 141febb20 FUN_141febb20 body=657 status=ok
// SIG undefined FUN_141febb20(void)

void FUN_141febb20(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  void **ppvVar8;
  int *piVar9;
  int local_res8;
  int local_resc;
  undefined8 local_98;
  undefined4 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined8 local_70;
  int *local_68;
  int local_60;
  undefined1 local_58 [8];
  longlong local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  plVar4 = *(longlong **)(param_4 + 8);
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::FindId(plVar4,&local_res8,param_4 + 0x24);
  puVar5 = (undefined8 *)0x0;
  puVar6 = puVar5;
  if (local_res8 != -1) {
    puVar6 = (undefined8 *)((longlong)local_res8 * 0x20 + *plVar4);
  }
  puVar3 = puVar6 + 2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar3 = puVar5;
  }
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar3;
  }
  local_80 = *(int *)(param_1 + 0x10);
  lVar7 = (longlong)local_80;
  uVar1 = puVar5[1];
  pvVar2 = *(void **)(param_1 + 8);
  local_88 = (void *)0x0;
  if (local_80 == 0) {
    local_7c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
    _guard_xfg_dispatch_icall_nop(local_88,pvVar2,lVar7 * 2);
  }
  IMovieScenePlayer::FindBoundObjects(param_5,&local_68,param_3,param_3 + 0x10);
  for (piVar9 = local_68; piVar9 != local_68 + (longlong)local_60 * 2; piVar9 = piVar9 + 2) {
    local_res8 = *piVar9;
    local_resc = piVar9[1];
    plVar4 = (longlong *)FWeakObjectPtr::Get(&local_res8);
    if (plVar4 != (longlong *)0x0) {
      local_90 = *(undefined4 *)(param_5 + 0x2d8);
      local_98 = *(undefined8 *)(param_5 + 0x2d0);
      local_78 = &PTR_FUN_144f519b8;
      local_70 = uVar1;
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_5 + 0xf8,puVar5[3],&local_78,plVar4,*(undefined1 *)(param_5 + 0x2dc),
                 &local_98);
      local_78 = &PTR_FUN_143fcdb70;
      FTrackInstancePropertyBindings::FindOrAdd(uVar1,local_58,plVar4);
      lVar7 = FWeakObjectPtr::Get(local_48);
      if (lVar7 == 0) {
        lVar7 = FWeakObjectPtr::Get(local_58);
        pvVar2 = local_88;
        if ((((lVar7 != 0) && (local_50 != 0)) && ((*(uint *)(lVar7 + 8) & 0x18000) == 0)) &&
           ((ppvVar8 = (void **)(*(int *)(lVar7 + 0x44) + local_50), ppvVar8 != (void **)0x0 &&
            (ppvVar8 != &local_88)))) {
          lVar7 = (longlong)local_80;
          *(int *)(ppvVar8 + 1) = local_80;
          if ((local_80 == 0) && (*(int *)((longlong)ppvVar8 + 0xc) == 0)) {
            *(undefined4 *)((longlong)ppvVar8 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar8,local_80);
            _guard_xfg_dispatch_icall_nop(*ppvVar8,pvVar2,lVar7 * 2);
          }
        }
      }
      else {
        (**(code **)(*plVar4 + 0x208))(plVar4,lVar7,&local_88);
      }
      lVar7 = FWeakObjectPtr::Get(local_40);
      if (lVar7 != 0) {
        (**(code **)(*plVar4 + 0x208))(plVar4,lVar7,0);
      }
    }
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141febdc0 Execute body=369 status=ok
// SIG undefined Execute(void)

void TPropertyTrackExecutionToken<bool,bool>::Execute
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
               longlong param_5)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  int local_res8;
  int local_resc;
  undefined8 local_58;
  undefined4 local_50;
  undefined **local_48;
  undefined8 local_40;
  int *local_38;
  int local_30;
  
  plVar2 = *(longlong **)(param_4 + 8);
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::FindId(plVar2,&local_res8,param_4 + 0x24);
  puVar8 = (undefined8 *)0x0;
  puVar6 = puVar8;
  if (local_res8 != -1) {
    puVar6 = (undefined8 *)((longlong)local_res8 * 0x20 + *plVar2);
  }
  puVar4 = puVar6 + 2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar4 = puVar8;
  }
  if (puVar4 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar4;
  }
  uVar3 = puVar8[1];
  uVar1 = *(undefined1 *)(param_1 + 8);
  IMovieScenePlayer::FindBoundObjects(param_5,&local_38,param_3,param_3 + 0x10);
  for (piVar7 = local_38; piVar7 != local_38 + (longlong)local_30 * 2; piVar7 = piVar7 + 2) {
    local_res8 = *piVar7;
    local_resc = piVar7[1];
    lVar5 = FWeakObjectPtr::Get(&local_res8);
    if (lVar5 != 0) {
      local_50 = *(undefined4 *)(param_5 + 0x2d8);
      local_58 = *(undefined8 *)(param_5 + 0x2d0);
      local_48 = &PTR_FUN_144f519e8;
      local_40 = uVar3;
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_5 + 0xf8,puVar8[3],&local_48,lVar5,*(undefined1 *)(param_5 + 0x2dc),&local_58
                );
      local_48 = &PTR_FUN_143fcdb70;
      FTrackInstancePropertyBindings::CallFunction<bool>(uVar3,lVar5,uVar1);
    }
  }
  return;
}



// FUNCTION 141febf40 FUN_141febf40 body=771 status=ok
// SIG undefined FUN_141febf40(void)

void FUN_141febf40(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined **local_res18 [2];
  undefined **local_c8;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  undefined1 local_bc;
  undefined1 local_bb;
  longlong local_b8;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50 [2];
  undefined8 local_48;
  int local_40;
  
  uVar3 = *(undefined4 *)(param_3 + 0x10);
  local_50[0] = uVar3;
  if (*(int *)(param_1 + 0x28) != -1) {
    lVar5 = (**(code **)(*param_5 + 8))(param_5);
    FMovieSceneObjectBindingID::ResolveLocalToRoot
              (param_1 + 0x28,&local_78,uVar3,*(longlong *)(lVar5 + 8) + 0xd0);
    local_50[0] = local_78;
  }
  local_60 = *(undefined4 *)(param_1 + 0x30);
  uStack_5c = *(undefined4 *)(param_1 + 0x34);
  uStack_58 = *(undefined4 *)(param_1 + 0x38);
  uStack_54 = *(undefined4 *)(param_1 + 0x3c);
  IMovieScenePlayer::FindBoundObjects(param_5,&local_48,&local_60,local_50);
  if ((local_40 != 0) && (lVar5 = FWeakObjectPtr::Get(local_48), lVar5 != 0)) {
    local_b8 = lVar5;
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      IMovieScenePlayer::FindBoundObjects(param_5,&local_78,param_3,param_3 + 0x10);
      puVar9 = (undefined4 *)CONCAT44(uStack_74,local_78);
      puVar2 = puVar9 + (longlong)local_70 * 2;
      for (; puVar9 != puVar2; puVar9 = puVar9 + 2) {
        local_res8 = *puVar9;
        local_resc = puVar9[1];
        lVar5 = FWeakObjectPtr::Get(&local_res8);
        if ((lVar5 != 0) && (plVar7 = (longlong *)FUN_141f63360(lVar5), plVar7 != (longlong *)0x0))
        {
          local_res18[0] = &PTR_FUN_144f45f70;
          lVar5 = DAT_146acbb10;
          if (DAT_146acbb10 == 0) {
            lVar5 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbb10,0);
          }
          local_a0 = (undefined4)param_5[0x5b];
          plVar1 = param_5 + 0x1f;
          local_a8 = param_5[0x5a];
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (plVar1,lVar5,local_res18,plVar7,*(undefined1 *)((longlong)param_5 + 0x2dc),
                     &local_a8);
          local_res18[0] = &PTR_FUN_144f45f88;
          lVar5 = DAT_146acbb18;
          if (DAT_146acbb18 == 0) {
            lVar5 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbb18,0);
          }
          local_90 = (undefined4)param_5[0x5b];
          local_98 = param_5[0x5a];
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (plVar1,lVar5,local_res18,plVar7,*(undefined1 *)((longlong)param_5 + 0x2dc),
                     &local_98);
          lVar5 = DAT_146acb9c0;
          if (DAT_146acb9c0 == 0) {
            lVar5 = FMovieSceneAnimTypeID::Initialize(&DAT_146acb9c0,0);
          }
          local_c0 = *(undefined1 *)(param_1 + 8);
          local_88 = param_5[0x5a];
          local_bf = *(undefined1 *)(param_1 + 9);
          local_be = *(undefined1 *)(param_1 + 10);
          local_bd = *(undefined1 *)(param_1 + 0xb);
          local_bc = *(undefined1 *)(param_1 + 0xc);
          local_bb = *(undefined1 *)(param_1 + 0xd);
          local_c8 = &PTR_FUN_144f45fb0;
          local_80 = (undefined4)param_5[0x5b];
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (plVar1,lVar5,&local_c8,plVar7,*(undefined1 *)((longlong)param_5 + 0x2dc),
                     &local_88);
          local_c8 = &PTR_FUN_143fcdb70;
          uVar8 = FUN_141ff1f50(param_1,local_b8);
          FWeakObjectPtr::operator=(param_1 + 0x10,uVar8);
          (**(code **)(*plVar7 + 0x500))(plVar7,2);
          FUN_141fd9220(param_1 + 8);
        }
      }
    }
  }
  return;
}



// FUNCTION 141fec250 FUN_141fec250 body=739 status=ok
// SIG undefined FUN_141fec250(void)

void FUN_141fec250(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_res8;
  undefined **local_res18 [2];
  longlong *plVar10;
  undefined8 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50 [2];
  undefined8 local_48;
  int local_40;
  
  uVar2 = *(undefined4 *)(param_3 + 0x10);
  local_50[0] = uVar2;
  if (*(int *)(param_1 + 8) != -1) {
    lVar5 = (**(code **)(*param_5 + 8))(param_5);
    FMovieSceneObjectBindingID::ResolveLocalToRoot
              (param_1 + 8,&local_78,uVar2,*(longlong *)(lVar5 + 8) + 0xd0);
    local_50[0] = local_78;
  }
  local_60 = *(undefined4 *)(param_1 + 0x10);
  uStack_5c = *(undefined4 *)(param_1 + 0x14);
  uStack_58 = *(undefined4 *)(param_1 + 0x18);
  uStack_54 = *(undefined4 *)(param_1 + 0x1c);
  IMovieScenePlayer::FindBoundObjects(param_5,&local_48,&local_60,local_50);
  if (local_40 == 0) {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(local_48);
  if (lVar5 != 0) {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_141fec320;
  }
  lVar5 = 0;
LAB_141fec320:
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_141fc9ff0(lVar5,&local_e8,0);
  puVar9 = local_e8;
  if ((int)local_e0 != 0) {
    local_res8 = *local_e8;
    IMovieScenePlayer::FindBoundObjects(param_5,&local_78,param_3,param_3 + 0x10);
    uVar4 = local_res8;
    puVar8 = (undefined8 *)CONCAT44(uStack_74,local_78);
    puVar1 = puVar8 + local_70;
    for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      local_res8 = *puVar8;
      lVar5 = FWeakObjectPtr::Get(&local_res8);
      if ((lVar5 != 0) && (plVar7 = (longlong *)FUN_141f63360(lVar5), plVar7 != (longlong *)0x0)) {
        local_res18[0] = &PTR_FUN_144f45f70;
        lVar5 = DAT_146acbb10;
        if (DAT_146acbb10 == 0) {
          lVar5 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbb10,0);
        }
        local_d0 = (undefined4)param_5[0x5b];
        local_d8 = param_5[0x5a];
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (param_5 + 0x1f,lVar5,local_res18,plVar7,
                   *(undefined1 *)((longlong)param_5 + 0x2dc),&local_d8);
        local_res18[0] = &PTR_FUN_144f45f88;
        lVar5 = DAT_146acbb18;
        if (DAT_146acbb18 == 0) {
          lVar5 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbb18,0);
        }
        local_c0 = (undefined4)param_5[0x5b];
        plVar10 = &local_c8;
        local_c8 = param_5[0x5a];
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (param_5 + 0x1f,lVar5,local_res18,plVar7,
                   *(undefined1 *)((longlong)param_5 + 0x2dc),plVar10);
        F3DPathExecutionToken::Eval(param_1,plVar7,uVar4,&local_a8,&local_b8);
        (**(code **)(*plVar7 + 0x500))(plVar7,2);
        local_98 = local_b8;
        local_90 = local_b0;
        local_88 = local_a8;
        local_80 = local_a0;
        FUN_1423982b0(plVar7,&local_88,&local_98,0,0,(ulonglong)plVar10 & 0xffffffffffffff00);
      }
      puVar9 = local_e8;
    }
  }
  if (puVar9 != (undefined8 *)0x0) {
    FMemory::Free(puVar9);
  }
  return;
}



// FUNCTION 141fec540 FUN_141fec540 body=3111 status=ok
// SIG undefined FUN_141fec540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141fec540(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar20 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auStack_eb8 [32];
  undefined8 local_e98;
  undefined8 *local_e90;
  undefined4 local_e88;
  undefined4 local_e80;
  undefined1 local_e78 [16];
  float local_e68;
  float fStack_e64;
  float fStack_e60;
  float fStack_e5c;
  float local_e58;
  float fStack_e54;
  float fStack_e50;
  float fStack_e4c;
  float local_e48;
  float fStack_e44;
  float fStack_e40;
  float fStack_e3c;
  float local_e38;
  float fStack_e34;
  float fStack_e30;
  float fStack_e2c;
  undefined4 local_e28;
  undefined4 local_e24;
  longlong local_e20;
  longlong local_e18;
  undefined8 local_e10;
  longlong local_e08;
  undefined8 local_e00;
  undefined4 *local_df8;
  undefined8 local_de8;
  undefined4 local_de0;
  undefined8 local_dd8;
  undefined4 local_dd0;
  undefined4 *local_dc8;
  int local_dc0;
  float local_db8;
  float fStack_db4;
  float fStack_db0;
  float fStack_dac;
  float local_da8;
  float fStack_da4;
  float fStack_da0;
  float fStack_d9c;
  undefined1 local_d98 [8];
  float fStack_d90;
  float fStack_d8c;
  float local_d88;
  float fStack_d84;
  float fStack_d80;
  float fStack_d7c;
  float local_d78;
  float fStack_d74;
  float fStack_d70;
  float fStack_d6c;
  float local_d68;
  float fStack_d64;
  float fStack_d60;
  float fStack_d5c;
  undefined1 local_d58 [16];
  undefined1 local_d48 [1496];
  longlong local_770;
  longlong local_760;
  float local_750;
  undefined8 local_748;
  float fStack_740;
  undefined4 uStack_73c;
  undefined4 uStack_738;
  undefined4 uStack_734;
  undefined4 local_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined4 local_718;
  uint local_714;
  undefined1 local_710;
  undefined4 local_70c;
  undefined1 local_708 [1496];
  longlong local_130;
  longlong local_120;
  undefined8 local_108;
  uint local_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_eb8;
  local_e18 = param_5;
  local_e10 = param_4;
  local_e08 = param_1;
  local_e00 = param_2;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))
                    (*(longlong **)(param_1 + 8),param_3,param_4,param_5);
  if (cVar1 != '\0') {
    lVar5 = FUN_141ff1ab0(param_3,param_4);
    lVar6 = FUN_141ff5ee0(lVar5,param_5);
    if (lVar6 != 0) {
      local_e20 = lVar6;
      IMovieScenePlayer::FindBoundObjects(param_5,&local_dc8,param_3,param_3 + 0x10);
      local_df8 = local_dc8 + (longlong)local_dc0 * 2;
      puVar12 = local_dc8;
      if (local_dc8 != local_df8) {
        do {
          local_e28 = *puVar12;
          local_e24 = puVar12[1];
          uVar7 = FWeakObjectPtr::Get(&local_e28);
          lVar8 = MovieSceneHelpers::CameraComponentFromRuntimeObject(uVar7);
          if (lVar8 != 0) {
            local_748 = 0;
            fStack_740 = 0.0;
            uStack_73c = 0;
            local_714 = local_714 & 0xfffffffe | 2;
            uStack_738 = 0;
            uStack_734 = 0;
            local_730 = 0x42b40000;
            local_728 = 0x4400000042b40000;
            uStack_720 = 0x4a00000000000000;
            local_718 = 0x3faaaaab;
            local_710 = 0;
            local_70c = 0;
            uVar2 = FUN_142741540(local_708);
            local_100 = local_100 & 0xfffffffe;
            local_108 = 0;
            local_748 = *(undefined8 *)(lVar8 + 0x220);
            fStack_740 = *(float *)(lVar8 + 0x228);
            auVar20 = *(undefined1 (*) [16])(lVar8 + 0x210);
            auVar13._4_4_ = -(uint)(auVar20._4_4_ != *(float *)(lVar8 + 0x254));
            auVar13._0_4_ = -(uint)(auVar20._0_4_ != *(float *)(lVar8 + 0x250));
            auVar13._8_4_ = -(uint)(auVar20._8_4_ != *(float *)(lVar8 + 600));
            auVar13._12_4_ = -(uint)(auVar20._12_4_ != *(float *)(lVar8 + 0x25c));
            iVar3 = movmskps(uVar2,auVar13);
            local_e78 = auVar20;
            if (iVar3 != 0) {
              *(undefined1 (*) [16])(lVar8 + 0x250) = auVar20;
              puVar9 = (undefined8 *)FQuat::Rotator(local_e78,local_d58);
              *(undefined8 *)(lVar8 + 0x260) = *puVar9;
              *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar9 + 1);
            }
            uStack_73c = (undefined4)*(undefined8 *)(lVar8 + 0x260);
            uStack_738 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x260) >> 0x20);
            uStack_734 = *(undefined4 *)(lVar8 + 0x268);
            local_730 = *(undefined4 *)(lVar8 + 0x2d0);
            local_e98 = param_4;
            uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))
                              (*(longlong **)(param_1 + 8),lVar6,&local_748,local_e00);
            if ((char)uVar2 == '\0') {
              if (local_120 != 0) {
                FMemory::Free();
              }
              if (local_130 != 0) {
                FMemory::Free();
              }
            }
            else {
              auVar13 = *(undefined1 (*) [16])(lVar8 + 0x230);
              fVar29 = auVar13._0_4_;
              fVar31 = auVar13._4_4_;
              fVar34 = auVar13._8_4_;
              fVar38 = auVar13._12_4_;
              auVar14._4_4_ =
                   -(uint)(fRam0000000146acb954 < (float)((uint)fVar31 & uRam0000000146acb884));
              auVar14._0_4_ = -(uint)(_DAT_146acb950 < (float)((uint)fVar29 & _DAT_146acb880));
              auVar14._8_4_ =
                   -(uint)(fRam0000000146acb958 < (float)((uint)fVar34 & uRam0000000146acb888));
              auVar14._12_4_ =
                   -(uint)(fRam0000000146acb95c < (float)((uint)fVar38 & uRam0000000146acb88c));
              iVar3 = movmskps(uVar2,auVar14);
              fVar48 = _DAT_1468b5b70;
              fVar49 = fRam00000001468b5b74;
              fVar50 = fRam00000001468b5b78;
              fVar51 = fRam00000001468b5b7c;
              fVar19 = _DAT_1468b5b90;
              fVar21 = fRam00000001468b5b94;
              fVar25 = fRam00000001468b5b98;
              fVar28 = fRam00000001468b5b9c;
              fVar41 = _DAT_1468b5b80;
              fVar42 = fRam00000001468b5b84;
              fVar43 = fRam00000001468b5b88;
              fVar44 = fRam00000001468b5b8c;
              if (iVar3 != 0) {
                fVar48 = *(float *)(lVar8 + 0x210) * _DAT_146acb940;
                fVar49 = *(float *)(lVar8 + 0x214) * fRam0000000146acb944;
                fVar50 = *(float *)(lVar8 + 0x218) * fRam0000000146acb948;
                fVar51 = *(float *)(lVar8 + 0x21c) * fRam0000000146acb94c;
                auVar20 = rcpps(auVar20,auVar13);
                fVar19 = auVar20._0_4_;
                fVar21 = auVar20._4_4_;
                fVar25 = auVar20._8_4_;
                fVar28 = auVar20._12_4_;
                fVar19 = (fVar19 + fVar19) - fVar29 * fVar19 * fVar19;
                fVar21 = (fVar21 + fVar21) - fVar31 * fVar21 * fVar21;
                fVar25 = (fVar25 + fVar25) - fVar34 * fVar25 * fVar25;
                fVar28 = (fVar28 + fVar28) - fVar38 * fVar28 * fVar28;
                fVar19 = (fVar19 + fVar19) - fVar29 * fVar19 * fVar19;
                fVar21 = (fVar21 + fVar21) - fVar31 * fVar21 * fVar21;
                fVar25 = (fVar25 + fVar25) - fVar34 * fVar25 * fVar25;
                fVar28 = (fVar28 + fVar28) - fVar38 * fVar28 * fVar28;
                fVar19 = (float)(((uint)fVar19 &
                                  -(uint)((float)((uint)fVar29 & _DAT_146acb880) <= _DAT_146acb950)
                                 ^ (uint)fVar19) & _DAT_146acb850);
                fVar21 = (float)(((uint)fVar21 &
                                  -(uint)((float)((uint)fVar31 & uRam0000000146acb884) <=
                                         fRam0000000146acb954) ^ (uint)fVar21) &
                                uRam0000000146acb854);
                fVar25 = (float)(((uint)fVar25 &
                                  -(uint)((float)((uint)fVar34 & uRam0000000146acb888) <=
                                         fRam0000000146acb958) ^ (uint)fVar25) &
                                uRam0000000146acb858);
                fVar28 = (float)(((uint)fVar28 &
                                  -(uint)((float)((uint)fVar38 & uRam0000000146acb88c) <=
                                         fRam0000000146acb95c) ^ (uint)fVar28) &
                                uRam0000000146acb85c);
                fVar41 = *(float *)(lVar8 + 0x220) * fVar19;
                fVar42 = *(float *)(lVar8 + 0x224) * fVar21;
                fVar43 = *(float *)(lVar8 + 0x228) * fVar25;
                fVar44 = *(float *)(lVar8 + 0x22c) * fVar28;
                fVar29 = fVar49 * fVar43 - fVar50 * fVar42;
                fVar31 = fVar50 * fVar41 - fVar48 * fVar43;
                fVar34 = fVar48 * fVar42 - fVar49 * fVar41;
                fVar38 = fVar51 * fVar44 - fVar51 * fVar44;
                fVar29 = fVar29 + fVar29;
                fVar31 = fVar31 + fVar31;
                fVar34 = fVar34 + fVar34;
                fVar38 = fVar38 + fVar38;
                fVar41 = (float)((uint)(0.0 - ((fVar49 * fVar34 - fVar50 * fVar31) +
                                              fVar29 * fVar51 + fVar41)) & _DAT_146acb850);
                fVar42 = (float)((uint)(0.0 - ((fVar50 * fVar29 - fVar48 * fVar34) +
                                              fVar31 * fVar51 + fVar42)) & uRam0000000146acb854);
                fVar43 = (float)((uint)(0.0 - ((fVar48 * fVar31 - fVar49 * fVar29) +
                                              fVar34 * fVar51 + fVar43)) & uRam0000000146acb858);
                fVar44 = (float)((uint)(0.0 - ((fVar51 * fVar38 - fVar51 * fVar38) +
                                              fVar38 * fVar51 + fVar44)) & uRam0000000146acb85c);
              }
              local_e80 = *(undefined4 *)(lVar8 + 0x2d0);
              uVar2 = FRotator::Quaternion(&uStack_73c,&local_d78);
              fVar37 = fRam0000000146acb848;
              fVar33 = fRam0000000146acb844;
              fVar38 = _DAT_146acb840;
              fVar34 = DAT_1464aa790;
              fVar31 = DAT_1464aa788._4_4_;
              fVar29 = (float)DAT_1464aa788;
              local_e78._0_4_ = local_730;
              auVar15._4_4_ = DAT_1464aa788._4_4_;
              auVar15._0_4_ = (float)DAT_1464aa788;
              auVar15._8_4_ = DAT_1464aa790;
              auVar15._12_4_ = 0;
              local_d68 = _DAT_146acb930;
              fStack_d64 = fRam0000000146acb934;
              fStack_d60 = fRam0000000146acb938;
              fStack_d5c = fRam0000000146acb93c;
              auVar20._4_4_ = fVar21;
              auVar20._0_4_ = fVar19;
              auVar20._8_4_ = fVar25;
              auVar20._12_4_ = fVar28;
              auVar20 = minps(auVar15,auVar20);
              auVar16._4_4_ = -(uint)(auVar20._4_4_ < fRam0000000146acb934);
              auVar16._0_4_ = -(uint)(auVar20._0_4_ < _DAT_146acb930);
              auVar16._8_4_ = -(uint)(auVar20._8_4_ < fRam0000000146acb938);
              auVar16._12_4_ = -(uint)(auVar20._12_4_ < fRam0000000146acb93c);
              iVar3 = movmskps(uVar2,auVar16);
              if (iVar3 == 0) {
                fVar23 = (float)local_748 * fVar19;
                fVar24 = local_748._4_4_ * fVar21;
                fVar26 = fStack_740 * fVar25;
                fVar27 = fVar28 * 0.0;
                local_da8 = fVar50 * fStack_d74 * _DAT_146acb8e0 +
                            fVar51 * local_d78 + fVar48 * fStack_d6c * _DAT_146acb900 +
                            fVar49 * fStack_d70 * _DAT_146acb8f0;
                fStack_da4 = fVar50 * local_d78 * fRam0000000146acb8e4 +
                             fVar51 * fStack_d74 + fVar48 * fStack_d70 * fRam0000000146acb904 +
                             fVar49 * fStack_d6c * fRam0000000146acb8f4;
                fStack_da0 = fVar50 * fStack_d6c * fRam0000000146acb8e8 +
                             fVar51 * fStack_d70 + fVar48 * fStack_d74 * fRam0000000146acb908 +
                             fVar49 * local_d78 * fRam0000000146acb8f8;
                fStack_d9c = fVar50 * fStack_d70 * fRam0000000146acb8ec +
                             fVar51 * fStack_d6c + fVar48 * local_d78 * fRam0000000146acb90c +
                             fVar49 * fStack_d74 * fRam0000000146acb8fc;
                fVar38 = fVar49 * fVar26 - fVar50 * fVar24;
                fVar33 = fVar50 * fVar23 - fVar48 * fVar26;
                fVar37 = fVar48 * fVar24 - fVar49 * fVar23;
                fVar22 = fVar51 * fVar27 - fVar51 * fVar27;
                fVar38 = fVar38 + fVar38;
                fVar33 = fVar33 + fVar33;
                fVar37 = fVar37 + fVar37;
                fVar22 = fVar22 + fVar22;
                local_d98._4_4_ =
                     (fVar50 * fVar38 - fVar48 * fVar37) + fVar33 * fVar51 + fVar24 + fVar42;
                local_d98._0_4_ =
                     (fVar49 * fVar37 - fVar50 * fVar33) + fVar38 * fVar51 + fVar23 + fVar41;
                fStack_d90 = (fVar48 * fVar33 - fVar49 * fVar38) + fVar37 * fVar51 + fVar26 + fVar43
                ;
                fStack_d8c = (fVar51 * fVar22 - fVar51 * fVar22) + fVar22 * fVar51 + fVar27 + fVar44
                ;
              }
              else {
                fVar22 = fVar49 + fVar49;
                fVar26 = fVar50 + fVar50;
                fVar55 = (float)DAT_1464aa788 * fVar19;
                fVar56 = DAT_1464aa788._4_4_ * fVar21;
                fVar57 = DAT_1464aa790 * fVar25;
                fVar44 = (fVar48 + fVar48) * fVar48;
                fVar23 = (fVar48 + fVar48) * fVar51;
                fVar30 = (float)((uint)((_DAT_146acb840 - (fVar26 * fVar50 + fVar22 * fVar49)) *
                                       fVar19) & _DAT_146acb850);
                fVar32 = (float)((uint)((fRam0000000146acb844 - (fVar26 * fVar50 + fVar44)) * fVar21
                                       ) & uRam0000000146acb854);
                fVar35 = (float)((uint)((fRam0000000146acb848 - (fVar22 * fVar49 + fVar44)) * fVar25
                                       ) & uRam0000000146acb858);
                fVar39 = (float)((uint)((fRam0000000146acb84c - (fVar44 + fVar44)) * fVar28) &
                                uRam0000000146acb85c);
                fVar24 = fStack_d74 + fStack_d74;
                fVar27 = fStack_d70 + fStack_d70;
                fVar52 = (fVar26 * fVar51 + fVar22 * fVar48) * fVar19;
                fVar53 = (fVar23 + fVar26 * fVar49) * fVar21;
                fVar54 = (fVar22 * fVar51 + fVar26 * fVar48) * fVar25;
                fVar50 = (fVar22 * fVar48 - fVar26 * fVar51) * fVar21;
                fVar49 = (fVar26 * fVar49 - fVar23) * fVar25;
                fVar44 = (fVar26 * fVar48 - fVar22 * fVar51) * fVar19;
                fVar48 = (local_d78 + local_d78) * local_d78;
                fVar51 = (local_d78 + local_d78) * fStack_d6c;
                fVar23 = (float)((uint)((_DAT_146acb840 -
                                        (fVar27 * fStack_d70 + fVar24 * fStack_d74)) *
                                       (float)DAT_1464aa788) & _DAT_146acb850);
                fVar26 = (float)((uint)((fRam0000000146acb844 - (fVar27 * fStack_d70 + fVar48)) *
                                       DAT_1464aa788._4_4_) & uRam0000000146acb854);
                fVar36 = (float)((uint)((fRam0000000146acb848 - (fVar24 * fStack_d74 + fVar48)) *
                                       DAT_1464aa790) & uRam0000000146acb858);
                fVar40 = (float)((uint)((fRam0000000146acb84c - (fVar48 + fVar48)) * 0.0) &
                                uRam0000000146acb85c);
                fVar45 = (fVar27 * fStack_d6c + fVar24 * local_d78) * (float)DAT_1464aa788;
                fVar46 = (fVar51 + fVar27 * fStack_d74) * DAT_1464aa788._4_4_;
                fVar47 = (fVar24 * fStack_d6c + fVar27 * local_d78) * DAT_1464aa790;
                fVar48 = (fVar24 * local_d78 - fVar27 * fStack_d6c) * DAT_1464aa788._4_4_;
                fVar51 = (fVar27 * fStack_d74 - fVar51) * DAT_1464aa790;
                fVar22 = (fVar27 * local_d78 - fVar24 * fStack_d6c) * (float)DAT_1464aa788;
                local_e68 = fVar23 * fVar30 + fVar45 * fVar50 + fVar22 * fVar54 + fVar40 * fVar41;
                fStack_e64 = fVar23 * fVar52 + fVar45 * fVar32 + fVar22 * fVar49 + fVar40 * fVar42;
                fStack_e60 = fVar23 * fVar44 + fVar45 * fVar53 + fVar22 * fVar35 + fVar40 * fVar43;
                fStack_e5c = fVar23 * fVar39 + fVar45 * fVar39 + fVar22 * fVar39 +
                             fVar40 * fRam0000000146acb84c;
                local_e58 = fVar48 * fVar30 + fVar26 * fVar50 + fVar46 * fVar54 + fVar40 * fVar41;
                fStack_e54 = fVar48 * fVar52 + fVar26 * fVar32 + fVar46 * fVar49 + fVar40 * fVar42;
                fStack_e50 = fVar48 * fVar44 + fVar26 * fVar53 + fVar46 * fVar35 + fVar40 * fVar43;
                fStack_e4c = fVar48 * fVar39 + fVar26 * fVar39 + fVar46 * fVar39 +
                             fVar40 * fRam0000000146acb84c;
                local_e48 = fVar47 * fVar30 + fVar51 * fVar50 + fVar36 * fVar54 + fVar40 * fVar41;
                fStack_e44 = fVar47 * fVar52 + fVar51 * fVar32 + fVar36 * fVar49 + fVar40 * fVar42;
                fStack_e40 = fVar47 * fVar44 + fVar51 * fVar53 + fVar36 * fVar35 + fVar40 * fVar43;
                fStack_e3c = fVar47 * fVar39 + fVar51 * fVar39 + fVar36 * fVar39 +
                             fVar40 * fRam0000000146acb84c;
                local_e38 = fRam0000000146acb84c * fVar41 +
                            (float)local_748 * fVar30 + local_748._4_4_ * fVar50 +
                            fStack_740 * fVar54;
                fStack_e34 = fRam0000000146acb84c * fVar42 +
                             (float)local_748 * fVar52 + local_748._4_4_ * fVar32 +
                             fStack_740 * fVar49;
                fStack_e30 = fRam0000000146acb84c * fVar43 +
                             (float)local_748 * fVar44 + local_748._4_4_ * fVar53 +
                             fStack_740 * fVar35;
                fStack_e2c = fRam0000000146acb84c * fRam0000000146acb84c +
                             (float)local_748 * fVar39 + local_748._4_4_ * fVar39 +
                             fStack_740 * fVar39;
                FMatrix::RemoveScaling(&local_e68);
                fVar38 = (float)((_DAT_146acb860 ^ (uint)fVar38) & -(uint)(local_d68 <= fVar55) ^
                                _DAT_146acb860);
                fVar48 = (float)((uRam0000000146acb864 ^ (uint)fVar33) &
                                 -(uint)(fStack_d64 <= fVar56) ^ uRam0000000146acb864);
                fVar49 = (float)((uRam0000000146acb868 ^ (uint)fVar37) &
                                 -(uint)(fStack_d60 <= fVar57) ^ uRam0000000146acb868);
                fStack_e64 = fStack_e64 * fVar38;
                local_e68 = local_e68 * fVar38;
                fStack_e60 = fStack_e60 * fVar38;
                fStack_e54 = fStack_e54 * fVar48;
                local_e58 = local_e58 * fVar48;
                fStack_e50 = fStack_e50 * fVar48;
                fStack_e44 = fStack_e44 * fVar49;
                local_e48 = local_e48 * fVar49;
                fStack_e40 = fStack_e40 * fVar49;
                FQuat::FQuat(&local_db8,&local_e68);
                local_e88 = 0x322bcc77;
                auVar18._0_4_ = local_db8 * local_db8 + fStack_db0 * fStack_db0;
                auVar18._4_4_ = fStack_db4 * fStack_db4 + fStack_dac * fStack_dac;
                auVar18._8_4_ = fStack_db0 * fStack_db0 + local_db8 * local_db8;
                auVar18._12_4_ = fStack_dac * fStack_dac + fStack_db4 * fStack_db4;
                auVar17._0_4_ = auVar18._4_4_ + auVar18._0_4_;
                auVar17._4_4_ = auVar18._8_4_ + auVar18._4_4_;
                auVar17._8_4_ = auVar18._12_4_ + auVar18._8_4_;
                auVar17._12_4_ = auVar18._0_4_ + auVar18._12_4_;
                auVar20 = rsqrtps(auVar18,auVar17);
                fVar38 = auVar20._0_4_;
                fVar48 = auVar20._4_4_;
                fVar49 = auVar20._8_4_;
                fVar50 = auVar20._12_4_;
                fVar38 = (_DAT_146acb920 - fVar38 * fVar38 * auVar17._0_4_ * _DAT_146acb920) *
                         fVar38 + fVar38;
                fVar48 = (fRam0000000146acb924 -
                         fVar48 * fVar48 * auVar17._4_4_ * fRam0000000146acb924) * fVar48 + fVar48;
                fVar49 = (fRam0000000146acb928 -
                         fVar49 * fVar49 * auVar17._8_4_ * fRam0000000146acb928) * fVar49 + fVar49;
                fVar50 = (fRam0000000146acb92c -
                         fVar50 * fVar50 * auVar17._12_4_ * fRam0000000146acb92c) * fVar50 + fVar50;
                local_d98._4_4_ = fStack_e34;
                local_d98._0_4_ = local_e38;
                fStack_d90 = fStack_e30;
                fStack_d8c = 0.0;
                local_db8 = (float)(((uint)((fVar38 + (_DAT_146acb920 -
                                                      fVar38 * fVar38 *
                                                      auVar17._0_4_ * _DAT_146acb920) * fVar38) *
                                           local_db8) ^ _DAT_146acb910) &
                                    -(uint)(1e-08 <= auVar17._0_4_) ^ _DAT_146acb910);
                fStack_db4 = (float)(((uint)((fVar48 + (fRam0000000146acb924 -
                                                       fVar48 * fVar48 *
                                                       auVar17._4_4_ * fRam0000000146acb924) *
                                                       fVar48) * fStack_db4) ^ uRam0000000146acb914)
                                     & -(uint)(1e-08 <= auVar17._4_4_) ^ uRam0000000146acb914);
                fStack_db0 = (float)(((uint)((fVar49 + (fRam0000000146acb928 -
                                                       fVar49 * fVar49 *
                                                       auVar17._8_4_ * fRam0000000146acb928) *
                                                       fVar49) * fStack_db0) ^ uRam0000000146acb918)
                                     & -(uint)(1e-08 <= auVar17._8_4_) ^ uRam0000000146acb918);
                fStack_dac = (float)(((uint)((fVar50 + (fRam0000000146acb92c -
                                                       fVar50 * fVar50 *
                                                       auVar17._12_4_ * fRam0000000146acb92c) *
                                                       fVar50) * fStack_dac) ^ uRam0000000146acb91c)
                                     & -(uint)(1e-08 <= auVar17._12_4_) ^ uRam0000000146acb91c);
                local_da8 = local_db8;
                fStack_da4 = fStack_db4;
                fStack_da0 = fStack_db0;
                fStack_d9c = fStack_dac;
              }
              fStack_d7c = fVar28 * 0.0;
              fStack_d80 = fVar34 * fVar25;
              fStack_d84 = fVar31 * fVar21;
              local_d88 = fVar29 * fVar19;
              lVar11 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              if ((*(int *)(lVar11 + 0x38) < DAT_146acba10) &&
                 (_Init_thread_header(&DAT_146acba10), DAT_146acba10 == -1)) {
                lVar10 = DAT_146acba08;
                if (DAT_146acba08 == 0) {
                  lVar10 = FMovieSceneAnimTypeID::Initialize(&DAT_146acba08,0);
                }
                DAT_146acba00 = lVar10;
                _Init_thread_footer(&DAT_146acba10);
              }
              local_de8 = *(undefined8 *)(param_5 + 0x2d0);
              local_e78._0_8_ = &PTR_FUN_144f481a8;
              local_de0 = *(undefined4 *)(param_5 + 0x2d8);
              local_e90 = &local_de8;
              local_e98 = CONCAT71(local_e98._1_7_,*(undefined1 *)(param_5 + 0x2dc));
              FMovieScenePreAnimatedState::SavePreAnimatedState
                        (param_5 + 0xf8,DAT_146acba00,local_e78,lVar8);
              FUN_141fd5cb0(lVar5,&local_da8);
              lVar6 = *(longlong *)(lVar6 + 0x460);
              if ((lVar6 != 0) && (0.0 < *(float *)(lVar6 + 0x2f0))) {
                if ((*(int *)(lVar11 + 0x38) < DAT_146acba28) &&
                   (_Init_thread_header(&DAT_146acba28), DAT_146acba28 == -1)) {
                  lVar11 = DAT_146acba20;
                  if (DAT_146acba20 == 0) {
                    lVar11 = FMovieSceneAnimTypeID::Initialize(&DAT_146acba20,1);
                  }
                  DAT_146acba18 = lVar11;
                  _Init_thread_footer(&DAT_146acba28);
                }
                local_dd8 = *(undefined8 *)(param_5 + 0x2d0);
                local_e78._0_8_ = &PTR_FUN_144f481d0;
                local_dd0 = *(undefined4 *)(param_5 + 0x2d8);
                local_e90 = &local_dd8;
                local_e98 = CONCAT71(local_e98._1_7_,*(undefined1 *)(param_5 + 0x2dc));
                FMovieScenePreAnimatedState::SavePreAnimatedState
                          (param_5 + 0xf8,DAT_146acba18,local_e78,lVar8);
                fVar29 = *(float *)(lVar6 + 0x2f0);
                if (0.0 < fVar29) {
                  FUN_140a25aa0(local_d48);
                  iVar3 = *(int *)(lVar5 + 0xc20);
                  iVar4 = iVar3 + 1;
                  *(int *)(lVar5 + 0xc20) = iVar4;
                  local_750 = fVar29;
                  if (*(int *)(lVar5 + 0xc24) < iVar4) {
                    FUN_141ffbce0(lVar5 + 0x10);
                  }
                  lVar6 = *(longlong *)(lVar5 + 0xc10);
                  if (*(longlong *)(lVar5 + 0xc10) == 0) {
                    lVar6 = lVar5 + 0x10;
                  }
                  lVar6 = (longlong)iVar3 * 0x600 + lVar6;
                  FUN_140f16b40(lVar6,local_d48);
                  *(float *)(lVar6 + 0x5f8) = local_750;
                  if (local_760 != 0) {
                    FMemory::Free();
                  }
                  if (local_770 != 0) {
                    FMemory::Free();
                  }
                }
                *(undefined1 *)(lVar5 + 9) = 1;
              }
              if (local_120 != 0) {
                FMemory::Free();
              }
              param_5 = local_e18;
              param_4 = local_e10;
              param_1 = local_e08;
              lVar6 = local_e20;
              if (local_130 != 0) {
                FMemory::Free();
                param_5 = local_e18;
                param_4 = local_e10;
                param_1 = local_e08;
                lVar6 = local_e20;
              }
            }
          }
          puVar12 = puVar12 + 2;
        } while (puVar12 != local_df8);
      }
    }
  }
  return;
}



// FUNCTION 141fed170 FUN_141fed170 body=1010 status=ok
// SIG undefined FUN_141fed170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141fed170(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  longlong *plVar17;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  longlong *local_b8;
  undefined8 uStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  int local_90;
  uint uStack_8c;
  uint *puStack_88;
  undefined4 local_80;
  uint uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  
  local_res20 = (longlong *)(param_1 + 0x10);
  uStack_8c = 1;
  uVar1 = *(uint *)(param_1 + 0x38);
  puStack_88 = (uint *)(param_1 + 0x20);
  local_90 = 0;
  uStack_7c = 0;
  iStack_78 = 0;
  if (uVar1 != 0) {
    puVar16 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar16 = puStack_88;
    }
    uVar15 = *puVar16;
    iStack_78 = 0;
    local_90 = 0;
    while (uVar15 == 0) {
      lVar9 = (longlong)local_90;
      iStack_78 = iStack_78 + 0x20;
      iVar7 = local_90 + 1;
      bVar2 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_90;
      local_90 = iVar7;
      if (bVar2) goto LAB_141fed23c;
      uVar15 = puVar16[lVar9 + 1];
    }
    uStack_8c = -uVar15 & uVar15;
    iVar7 = 0x1f;
    if (uStack_8c != 0) {
      for (; uStack_8c >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_8c == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_7c = (iStack_78 - iVar7) + 0x1f;
    if ((int)uVar1 < (int)uStack_7c) {
LAB_141fed23c:
      uStack_7c = uVar1;
    }
  }
  local_80 = 0xffffffff;
  uStack_a4 = *(uint *)(param_1 + 0x38);
  uStack_b0 = CONCAT44(uStack_8c,local_90);
  uStack_58 = 0xffffffff;
  uStack_54 = uStack_7c;
  uStack_98 = CONCAT44(uStack_74,iStack_78);
  uStack_a8 = -1 << ((byte)uStack_a4 & 0x1f);
  uVar15 = uStack_a4 & 0xffffffe0;
  iStack_68 = local_90;
  uStack_64 = uStack_8c;
  local_res10 = param_2;
  local_res18 = param_3;
  local_b8 = local_res20;
  local_60 = puStack_88;
  local_50 = uStack_98;
  local_70 = local_res20;
  uStack_a0 = uStack_58;
  uStack_9c = uStack_54;
  uVar8 = uStack_a4;
  if (uStack_a4 != uVar1) {
    puVar16 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar16 = puStack_88;
    }
    uVar8 = puVar16[(int)uStack_a4 >> 5] & uStack_a8;
    iVar7 = (int)uStack_a4 >> 5;
    while (uVar8 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_141fed302;
      uVar8 = puVar16[(longlong)iVar7 + 1];
      uStack_a8 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_a4 = (uVar15 - iVar7) + 0x1f;
    uVar8 = uStack_a4;
    if ((int)uVar1 < (int)uStack_a4) {
LAB_141fed302:
      uStack_a4 = uVar1;
      uVar8 = uVar1;
    }
  }
  while (((uVar6 = local_res18, uStack_54 != uVar8 || (local_60 != puStack_88)) ||
         (local_70 != local_res20))) {
    lVar10 = (longlong)(int)uStack_54 * 0x1c + *local_70;
    lVar9 = FUN_141ff1ab0(lVar10,local_res10);
    IMovieScenePlayer::FindBoundObjects(uVar6,&local_b8,lVar10,lVar10 + 0x10);
    plVar12 = local_b8 + (int)uStack_b0;
    for (plVar17 = local_b8; plVar17 != plVar12; plVar17 = plVar17 + 1) {
      local_res8 = (undefined4)*plVar17;
      local_resc = *(undefined4 *)((longlong)plVar17 + 4);
      uVar6 = FWeakObjectPtr::Get(&local_res8);
      lVar10 = MovieSceneHelpers::CameraComponentFromRuntimeObject(uVar6);
      if (lVar10 != 0) {
        if (*(char *)(lVar9 + 9) != '\0') {
          FUN_1422e7bf0(lVar10);
          lVar11 = *(longlong *)(lVar9 + 0xc10);
          if (*(longlong *)(lVar9 + 0xc10) == 0) {
            lVar11 = lVar9 + 0x10;
          }
          lVar13 = (longlong)*(int *)(lVar9 + 0xc20) * 0x600 + lVar11;
          for (; lVar11 != lVar13; lVar11 = lVar11 + 0x600) {
            FUN_1422e2e80(lVar10,lVar11,*(undefined4 *)(lVar11 + 0x5f8));
          }
        }
        if (*(char *)(lVar9 + 8) != '\0') {
          FUN_1422e7bb0(lVar10);
          FUN_1422e2610(lVar10,lVar9 + 0xc30,*(undefined4 *)(lVar9 + 0xc60));
        }
      }
    }
    lVar10 = lVar9 + 0x10;
    *(undefined4 *)(lVar9 + 0xc60) = 0;
    uVar6 = uRam00000001468b5b78;
    *(undefined8 *)(lVar9 + 0xc30) = _DAT_1468b5b70;
    *(undefined8 *)(lVar9 + 0xc38) = uVar6;
    uVar6 = uRam00000001468b5b88;
    *(undefined8 *)(lVar9 + 0xc40) = _DAT_1468b5b80;
    *(undefined8 *)(lVar9 + 0xc48) = uVar6;
    uVar5 = uRam00000001468b5b9c;
    uVar4 = uRam00000001468b5b98;
    uVar3 = uRam00000001468b5b94;
    *(undefined4 *)(lVar9 + 0xc50) = _DAT_1468b5b90;
    *(undefined4 *)(lVar9 + 0xc54) = uVar3;
    *(undefined4 *)(lVar9 + 0xc58) = uVar4;
    *(undefined4 *)(lVar9 + 0xc5c) = uVar5;
    iVar7 = *(int *)(lVar9 + 0xc24);
    lVar11 = *(longlong *)(lVar9 + 0xc10);
    iVar14 = *(int *)(lVar9 + 0xc20);
    if (iVar7 < 0) {
      if (lVar11 == 0) {
        lVar11 = lVar10;
      }
      if (iVar14 != 0) {
        plVar12 = (longlong *)(lVar11 + 0x5d8);
        do {
          if (plVar12[2] != 0) {
            FMemory::Free();
          }
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          plVar12 = plVar12 + 0xc0;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
        iVar7 = *(int *)(lVar9 + 0xc24);
      }
      *(undefined4 *)(lVar9 + 0xc20) = 0;
      if (iVar7 != 0) {
        FUN_141ffc1c0(lVar10,0);
      }
    }
    else {
      if (lVar11 == 0) {
        lVar11 = lVar10;
      }
      if (iVar14 != 0) {
        plVar12 = (longlong *)(lVar11 + 0x5d8);
        do {
          if (plVar12[2] != 0) {
            FMemory::Free();
          }
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          plVar12 = plVar12 + 0xc0;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      *(undefined4 *)(lVar9 + 0xc20) = 0;
    }
    *(undefined2 *)(lVar9 + 8) = 0;
    uStack_58 = uStack_58 & ~uStack_64;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_68);
  }
  return;
}



// FUNCTION 141fed570 FUN_141fed570 body=1236 status=ok
// SIG undefined FUN_141fed570(void)

void FUN_141fed570(longlong param_1,undefined **param_2,int *param_3,longlong param_4,
                  longlong *param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined **local_res10 [2];
  int local_res20;
  undefined4 local_res24;
  longlong *local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong **local_a0;
  longlong *local_98;
  longlong **local_90;
  undefined1 local_88 [80];
  
  plVar4 = *(longlong **)(param_4 + 8);
  local_res10[0] = param_2;
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::FindId(plVar4,&local_res20,param_4 + 0x18);
  if (((local_res20 == -1) || (lVar9 = (longlong)local_res20 * 0x20 + *plVar4, lVar9 == 0)) ||
     (puVar8 = (undefined8 *)(lVar9 + 0x10), puVar8 == (undefined8 *)0x0)) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      *plVar4 = (longlong)&PTR__scalar_deleting_destructor__144f47a70;
      plVar4[1] = 0;
      plVar4[2] = 0;
    }
    local_a0 = &local_b8;
    local_b8 = plVar4;
    local_a8 = param_4 + 0x18;
    FUN_14058dc00(*(undefined8 *)(param_4 + 8),&local_res20,&local_a8,0);
    if (local_b8 != (longlong *)0x0) {
      (**(code **)*local_b8)(local_b8,1);
    }
  }
  else {
    plVar4 = (longlong *)*puVar8;
  }
  if (((*(int *)((longlong)param_2 + 0x34) == 1) || (*(int *)((longlong)param_2 + 0x34) == 3)) &&
     (((ulonglong)param_2[8] & 1) == 0)) {
    if (((param_3[3] == 0 && param_3[2] == 0) && param_3[1] == 0) && *param_3 == 0) {
      plVar5 = (longlong *)(**(code **)(*param_5 + 0x70))();
      local_res10[0] = (undefined **)0xffffffff;
      lVar9 = FCachedAudioTrackData::GetAudioComponentForRow
                        (plVar4,*(undefined4 *)(param_1 + 0x160),0xffffffff);
      if (lVar9 == 0) {
        if (plVar5 == (longlong *)0x0) {
          local_a8 = 0;
        }
        else {
          local_a8 = (**(code **)(*plVar5 + 0x148))(plVar5);
        }
        iVar1 = *(int *)(param_1 + 0x160);
        if (0 < (iVar1 - (int)plVar4[2]) + 1) {
          TArray<TMap<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>_>,FDefaultAllocator>
          ::AddDefaulted(plVar4 + 1);
        }
        lVar10 = (longlong)iVar1 * 0x50;
        plVar5 = (longlong *)(plVar4[1] + lVar10);
        local_b8 = (longlong *)0xffffffff;
        TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::FindId(plVar5,local_res10,&local_b8);
        if (((int)local_res10[0] == -1) ||
           (lVar9 = *plVar5 + (longlong)(int)local_res10[0] * 0x18, lVar9 == 0)) {
          local_res20 = -1;
          local_res24 = 0;
        }
        else {
          local_res20 = *(int *)(lVar9 + 8);
          local_res24 = *(undefined4 *)(lVar9 + 0xc);
        }
        lVar9 = FWeakObjectPtr::Get(&local_res20);
        if (lVar9 == 0) {
          uVar6 = GetTransientPackage();
          uVar6 = NewObject<USoundCue>(uVar6);
          uVar7 = FAudioDevice::FCreateComponentParams::FCreateComponentParams(local_88,local_a8,0);
          lVar9 = FUN_1422c5640(uVar6,uVar7);
          if (lVar9 == 0) {
            return;
          }
          local_res10[0] = &PTR_FUN_144f47a48;
          puVar8 = (undefined8 *)FMovieSceneAnimTypeID::Unique(&local_a8);
          local_b0 = (undefined4)param_5[0x5b];
          local_b8 = (longlong *)param_5[0x5a];
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_5 + 0x1f,*puVar8,local_res10,lVar9,
                     *(undefined1 *)((longlong)param_5 + 0x2dc),&local_b8);
          *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 0x40;
          FWeakObjectPtr::operator=(&local_b8,lVar9);
          local_98 = &local_a8;
          local_90 = &local_b8;
          local_a8 = 0xffffffff;
          TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FObjectKey_&&,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_&&>_>
                    (plVar4[1] + lVar10,local_res10,&local_98,0);
        }
        if (lVar9 == 0) {
          return;
        }
        cVar3 = TScriptDelegate<FWeakObjectPtr>::IsBound(param_1 + 0x170);
        if (cVar3 != '\0') {
          *(undefined4 *)(lVar9 + 0x690) = *(undefined4 *)(param_1 + 0x170);
          *(undefined4 *)(lVar9 + 0x694) = *(undefined4 *)(param_1 + 0x174);
          *(undefined8 *)(lVar9 + 0x698) = *(undefined8 *)(param_1 + 0x178);
        }
        if (0 < *(int *)(param_1 + 0x188)) {
          TMulticastScriptDelegate<FWeakObjectPtr>::operator=(lVar9 + 0x5f0,param_1 + 0x180);
        }
        if (0 < *(int *)(param_1 + 0x198)) {
          TMulticastScriptDelegate<FWeakObjectPtr>::operator=(lVar9 + 0x618,param_1 + 400);
        }
      }
      FUN_141fe4c40(param_1 + 8,lVar9,param_4,param_2,0,param_5);
    }
    else {
      IMovieScenePlayer::FindBoundObjects(param_5,&local_98,param_3,param_3 + 4);
      local_b8 = local_98 + (int)local_90;
      plVar5 = local_98;
      if (local_98 != local_b8) {
        do {
          local_res20 = (int)*plVar5;
          local_res24 = *(undefined4 *)((longlong)plVar5 + 4);
          lVar9 = FWeakObjectPtr::Get(&local_res20);
          if (lVar9 != 0) {
            lVar10 = FUN_1428dfc70();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FWeakObjectPtr::operator=(&local_a8,lVar9);
              lVar10 = FCachedAudioTrackData::GetAudioComponentForRow
                                 (plVar4,*(undefined4 *)(param_1 + 0x160),local_a8);
              if (lVar10 == 0) {
                lVar10 = FUN_141fd7ac0(plVar4,*(undefined4 *)(param_1 + 0x160),lVar9,param_5);
                if (lVar10 == 0) goto LAB_141feda1b;
                cVar3 = TScriptDelegate<FWeakObjectPtr>::IsBound(param_1 + 0x170);
                if (cVar3 != '\0') {
                  *(undefined4 *)(lVar10 + 0x690) = *(undefined4 *)(param_1 + 0x170);
                  *(undefined4 *)(lVar10 + 0x694) = *(undefined4 *)(param_1 + 0x174);
                  *(undefined8 *)(lVar10 + 0x698) = *(undefined8 *)(param_1 + 0x178);
                }
                if (0 < *(int *)(param_1 + 0x188)) {
                  TMulticastScriptDelegate<FWeakObjectPtr>::operator=
                            (lVar10 + 0x5f0,param_1 + 0x180);
                }
                if (0 < *(int *)(param_1 + 0x198)) {
                  TMulticastScriptDelegate<FWeakObjectPtr>::operator=(lVar10 + 0x618,param_1 + 400);
                }
              }
              FUN_141fe4c40(param_1 + 8,lVar10,param_4,local_res10[0],1,param_5);
            }
          }
LAB_141feda1b:
          plVar5 = plVar5 + 1;
        } while (plVar5 != local_b8);
      }
    }
  }
  else {
    FUN_141ffe8c0(plVar4);
  }
  return;
}



// FUNCTION 141feda50 FUN_141feda50 body=647 status=ok
// SIG undefined FUN_141feda50(void)

void FUN_141feda50(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *local_78;
  undefined4 local_70;
  undefined **local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  undefined8 **local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28 [4];
  
  plVar4 = param_5;
  cVar5 = (**(code **)(*param_5 + 0x10))(param_5);
  if (cVar5 == '\0') {
    (**(code **)(*plVar4 + 0x18))(plVar4,0,0,0);
  }
  else {
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    local_28[0] = uVar2;
    if (*(int *)(param_1 + 8) != -1) {
      lVar6 = (**(code **)(*plVar4 + 8))(plVar4);
      FMovieSceneObjectBindingID::ResolveLocalToRoot
                (param_1 + 8,&local_50,uVar2,*(longlong *)(lVar6 + 8) + 0xd0);
      local_28[0] = (undefined4)local_50;
    }
    local_38 = *(undefined4 *)(param_1 + 0x10);
    uStack_34 = *(undefined4 *)(param_1 + 0x14);
    uStack_30 = *(undefined4 *)(param_1 + 0x18);
    uStack_2c = *(undefined4 *)(param_1 + 0x1c);
    IMovieScenePlayer::FindBoundObjects(plVar4,&local_60,&local_38,local_28);
    if (local_58 != 0) {
      lVar7 = FWeakObjectPtr::Get(local_60);
      local_68 = &PTR_FUN_144f482e8;
      lVar6 = DAT_146acba40;
      if (DAT_146acba40 == 0) {
        lVar6 = FMovieSceneAnimTypeID::Initialize(&DAT_146acba40,0);
      }
      if (*(char *)((longlong)plVar4 + 0x2dc) != '\0') {
        local_70 = (undefined4)plVar4[0x5b];
        local_78 = (undefined8 *)plVar4[0x5a];
        TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::OnPreAnimated
                  (plVar4 + 0x29,*(char *)((longlong)plVar4 + 0x2dc),lVar6,&local_78,&local_68,
                   plVar4 + 0x1f);
      }
      plVar3 = *(longlong **)(param_4 + 8);
      TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
      ::FindId(plVar3,&param_5,param_4 + 0x18);
      puVar11 = (undefined8 *)0x0;
      puVar8 = puVar11;
      if ((int)param_5 != -1) {
        puVar8 = (undefined8 *)((longlong)(int)param_5 * 0x20 + *plVar3);
      }
      puVar10 = puVar8 + 2;
      if (puVar8 == (undefined8 *)0x0) {
        puVar10 = puVar11;
      }
      if (puVar10 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)operator_new(0x10);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &PTR_FUN_1445515c0;
          *(undefined4 *)(puVar8 + 1) = 0xffffffff;
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          puVar11 = puVar8;
        }
        local_48 = &local_78;
        local_78 = puVar11;
        local_50 = param_4 + 0x18;
        FUN_14058dc00(*(undefined8 *)(param_4 + 8),&param_5,&local_50,0);
        if (local_78 != (undefined8 *)0x0) {
          (**(code **)*local_78)(local_78,1);
        }
      }
      else {
        puVar11 = (undefined8 *)*puVar10;
      }
      puVar11 = puVar11 + 1;
      lVar6 = FWeakObjectPtr::Get(puVar11);
      if (lVar6 == lVar7) {
        if (lVar7 != 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar7,0,*(byte *)(param_2 + 0x40) & 1);
        }
      }
      else {
        bVar1 = *(byte *)(param_2 + 0x40);
        uVar9 = FWeakObjectPtr::Get(puVar11);
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar7,uVar9,bVar1 & 1);
        FWeakObjectPtr::operator=(puVar11,lVar7);
      }
    }
  }
  return;
}



// FUNCTION 141fedce0 FUN_141fedce0 body=568 status=ok
// SIG undefined FUN_141fedce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141fedce0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28 [2];
  int local_20 [6];
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    iVar7 = *(int *)(param_3 + 0x10);
    if (*(int *)(param_1 + 8) != -1) {
      lVar3 = (**(code **)(*param_5 + 8))(param_5);
      lVar3 = *(longlong *)(lVar3 + 8);
      if (*(int *)(lVar3 + 0xd8) != *(int *)(lVar3 + 0x104)) {
        lVar4 = *(longlong *)(lVar3 + 0x110);
        if (*(longlong *)(lVar3 + 0x110) == 0) {
          lVar4 = lVar3 + 0x108;
        }
        iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(lVar3 + 0x118) - 1U & (longlong)iVar7) * 4);
        if (iVar2 != -1) {
          do {
            piVar6 = (int *)((longlong)iVar2 * 0xb8 + *(longlong *)(lVar3 + 0xd0));
            if (*piVar6 == iVar7) {
              if (((iVar2 != -1) && (piVar6 != (int *)0x0)) && (piVar6 != (int *)0xfffffffffffffff8)
                 ) {
                lVar3 = (**(code **)(*param_5 + 8))(param_5);
                FMovieSceneObjectBindingID::ResolveLocalToRoot
                          (param_1 + 8,local_20,iVar7,*(longlong *)(lVar3 + 8) + 0xd0);
                iVar7 = local_20[0];
              }
              break;
            }
            iVar2 = piVar6[0x2c];
          } while (iVar2 != -1);
        }
      }
    }
    local_38 = *(undefined4 *)(param_1 + 0x10);
    uStack_34 = *(undefined4 *)(param_1 + 0x14);
    uStack_30 = *(undefined4 *)(param_1 + 0x18);
    uStack_2c = *(undefined4 *)(param_1 + 0x1c);
    local_28[0] = iVar7;
    IMovieScenePlayer::FindBoundObjects(param_5,&local_48,&local_38,local_28);
    if (local_40 == 0) {
      return;
    }
    lVar3 = FWeakObjectPtr::Get(local_48);
    if (lVar3 == 0) goto LAB_141fedee1;
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141fedee1;
    lVar3 = *(longlong *)(lVar3 + 0x168);
    if (lVar3 == 0) {
      local_48 = _DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
    }
    else {
      local_48 = *(undefined8 *)(lVar3 + 0x220);
      local_40 = *(int *)(lVar3 + 0x228);
    }
    uVar8 = (undefined4)local_48;
    uVar9 = (undefined4)((ulonglong)local_48 >> 0x20);
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0x30);
    uVar9 = *(undefined4 *)(param_1 + 0x34);
    local_40 = *(int *)(param_1 + 0x38);
  }
  local_58 = CONCAT44(uVar9,uVar8);
  local_50 = local_40;
LAB_141fedee1:
  uVar5 = IStreamingManager::Get();
  IStreamingManager::AddViewSlaveLocation(uVar5,&local_58,0x3f800000,0,0);
  return;
}



// FUNCTION 141fedf20 FUN_141fedf20 body=1649 status=ok
// SIG undefined FUN_141fedf20(void)

void FUN_141fedf20(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  longlong **pplVar8;
  longlong lVar9;
  longlong *plVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  char local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined8 local_70;
  int local_68;
  longlong *local_60 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  uVar14 = 0;
  iVar4 = 0;
  local_c0 = (longlong *)0x0;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  if (*(int *)(param_1 + 0x50) == 0) {
    pplVar8 = (longlong **)(**(code **)(*param_5 + 0x80))(param_5,local_60);
    if (&local_b8 != pplVar8) {
      local_c0 = *pplVar8;
      *pplVar8 = (longlong *)0x0;
      iVar4 = *(int *)(pplVar8 + 1);
      pplVar8[1] = (longlong *)0x0;
    }
    if (local_60[0] != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (0 < *(int *)(param_1 + 0x50)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_b8);
      uVar14 = local_b0 & 0xffffffff;
    }
    iVar4 = (int)uVar14;
    plVar10 = *(longlong **)(param_1 + 0x48);
    if (*(longlong **)(param_1 + 0x48) == (longlong *)0x0) {
      plVar10 = (longlong *)(param_1 + 0x18);
    }
    local_60[0] = plVar10 + (longlong)*(int *)(param_1 + 0x50) * 3;
    local_c0 = local_b8;
    if (plVar10 != local_60[0]) {
      do {
        local_a0._0_4_ = (undefined4)*plVar10;
        local_a0._4_4_ = *(undefined4 *)((longlong)plVar10 + 4);
        lStack_98 = plVar10[1];
        local_90 = plVar10[2];
        lVar5 = (**(code **)(*param_5 + 8))(param_5);
        piVar6 = (int *)FMovieSceneObjectBindingID::ResolveLocalToRoot
                                  (&local_a0,&local_88,*(undefined4 *)(param_3 + 0x10),
                                   *(longlong *)(lVar5 + 8) + 0xd0);
        lStack_98 = *(longlong *)(piVar6 + 2);
        local_90 = *(longlong *)(piVar6 + 4);
        local_a0 = CONCAT35(local_a0._5_3_,*(undefined5 *)piVar6);
        if ((int)param_5[0x16] != *(int *)((longlong)param_5 + 0xdc)) {
          plVar7 = (longlong *)param_5[0x1d];
          if ((longlong *)param_5[0x1d] == (longlong *)0x0) {
            plVar7 = param_5 + 0x1c;
          }
          iVar4 = *(int *)((longlong)plVar7 +
                          ((longlong)(int)param_5[0x1e] - 1U & (longlong)*piVar6) * 4);
          if (iVar4 != -1) {
            do {
              piVar11 = (int *)((longlong)iVar4 * 0xc0 + param_5[0x15]);
              if (*piVar11 == *piVar6) {
                if (iVar4 != -1) goto LAB_141fee088;
                break;
              }
              iVar4 = piVar11[0x2e];
            } while (iVar4 != -1);
          }
        }
        piVar11 = (int *)0x0;
LAB_141fee088:
        piVar6 = piVar11 + 2;
        if (piVar11 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        if (piVar6 == (int *)0x0) {
          local_70 = (undefined4 *)0x0;
          local_68 = 0;
        }
        else {
          FMovieSceneObjectCache::FindBoundObjects(piVar6,&local_70,&lStack_98,param_5);
        }
        puVar1 = local_70 + (longlong)local_68 * 2;
        plVar7 = local_c0;
        for (puVar12 = local_70; iVar4 = (int)uVar14, puVar12 != puVar1; puVar12 = puVar12 + 2) {
          local_a8 = *puVar12;
          local_a4 = puVar12[1];
          lVar5 = FWeakObjectPtr::Get(&local_a8);
          if (lVar5 != 0) {
            uVar13 = iVar4 + 1;
            local_b0 = CONCAT44(local_b0._4_4_,uVar13);
            if (local_b0._4_4_ < (int)uVar13) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,uVar14);
              plVar7 = local_b8;
              uVar13 = (uint)local_b0;
            }
            uVar14 = (ulonglong)uVar13;
            plVar7[iVar4] = lVar5;
          }
        }
        plVar10 = plVar10 + 3;
        local_c0 = plVar7;
      } while (plVar10 != local_60[0]);
    }
  }
  local_60[0] = local_c0;
  plVar10 = local_c0 + iVar4;
  local_b8 = plVar10;
  if (local_c0 != plVar10) {
    do {
      plVar7 = (longlong *)*local_60[0];
      if (plVar7 != (longlong *)0x0) {
        puVar16 = *(undefined8 **)(param_1 + 8);
        puVar15 = puVar16 + (longlong)*(int *)(param_1 + 0x10) * 7;
        for (; puVar16 != puVar15; puVar16 = puVar16 + 7) {
          lVar5 = UObject::FindFunction(plVar7,*puVar16);
          if (lVar5 != 0) {
            FUN_141fcf7c0(&local_e8,0);
            FUN_141ff2fb0(puVar16 + 1,&local_e8);
            lVar2 = local_d8;
            lVar9 = FWeakObjectPtr::Get(&local_e0);
            if (*(short *)(lVar5 + 0x90) == -1) {
              lStack_98 = *(longlong *)(lVar5 + 0x38);
              local_90 = CONCAT17(local_90._7_1_,0x101ffffffff);
              local_a0 = lVar5;
              FUN_140472e10(&local_a0);
              if (lVar9 == 0) {
                local_80 = (longlong *)0x0;
              }
              else {
                local_80 = *(longlong **)(lVar9 + 0x38);
              }
              local_78 = 0xffffffff;
              local_74 = 0x101;
              local_72 = 0;
              local_88 = lVar9;
              while (FUN_140472e10(&local_88), plVar10 = local_80, lVar9 = lStack_98, lStack_98 != 0
                    ) {
                if (local_80 == (longlong *)0x0) {
                  local_e8 = &PTR_FUN_144f458c0;
                  if (local_c8 == '\0') goto LAB_141fee518;
                  cVar3 = FWeakObjectPtr::IsValid(&local_e0);
                  if (cVar3 == '\0') goto LAB_141fee509;
                  if (local_d8 == 0) goto LAB_141fee518;
                  plVar10 = (longlong *)FWeakObjectPtr::Get(&local_e0);
                  (**(code **)(*plVar10 + 0x2b0))(plVar10,local_d8,1);
                  FWeakObjectPtr::operator=(&local_48,0);
                  local_e0 = local_48;
                  local_dc = local_44;
                  goto LAB_141fee509;
                }
                cVar3 = (**(code **)(*local_80 + 0x368))(local_80,lStack_98);
                if (((cVar3 == '\0') ||
                    (*(int *)((longlong)plVar10 + 0x44) != *(int *)(lVar9 + 0x44))) ||
                   (*(int *)((longlong)plVar10 + 0x34) * (int)plVar10[6] !=
                    *(int *)(lVar9 + 0x34) * *(int *)(lVar9 + 0x30))) {
                  local_e8 = &PTR_FUN_144f458c0;
                  if (local_c8 == '\0') goto LAB_141fee518;
                  cVar3 = FWeakObjectPtr::IsValid(&local_e0);
                  if (cVar3 == '\0') goto LAB_141fee509;
                  if (local_d8 == 0) goto LAB_141fee518;
                  plVar10 = (longlong *)FWeakObjectPtr::Get(&local_e0);
                  (**(code **)(*plVar10 + 0x2b0))(plVar10,local_d8,1);
                  FWeakObjectPtr::operator=(&local_50,0);
                  local_e0 = local_50;
                  local_dc = local_4c;
                  goto LAB_141fee509;
                }
                lStack_98 = *(longlong *)(lVar9 + 0x28);
                FUN_140472e10(&local_a0);
                local_80 = (longlong *)plVar10[5];
              }
              if (local_80 == (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x208))(plVar7,lVar5,lVar2);
                local_e8 = &PTR_FUN_144f458c0;
                if (local_c8 != '\0') {
                  cVar3 = FWeakObjectPtr::IsValid(&local_e0);
                  if (cVar3 != '\0') {
                    if (local_d8 == 0) goto LAB_141fee518;
                    plVar10 = (longlong *)FWeakObjectPtr::Get(&local_e0);
                    (**(code **)(*plVar10 + 0x2b0))(plVar10,local_d8,1);
                    FWeakObjectPtr::operator=(&local_40,0);
                    local_e0 = local_40;
                    local_dc = local_3c;
                  }
                  goto LAB_141fee509;
                }
              }
              else {
                local_e8 = &PTR_FUN_144f458c0;
                if (local_c8 != '\0') {
                  cVar3 = FWeakObjectPtr::IsValid(&local_e0);
                  if (cVar3 != '\0') {
                    if (local_d8 == 0) goto LAB_141fee518;
                    plVar10 = (longlong *)FWeakObjectPtr::Get(&local_e0);
                    (**(code **)(*plVar10 + 0x2b0))(plVar10,local_d8,1);
                    FWeakObjectPtr::operator=(&local_70,0);
                    local_e0 = (undefined4)local_70;
                    local_dc = local_70._4_4_;
                  }
                  goto LAB_141fee509;
                }
              }
            }
            else {
              local_e8 = &PTR_FUN_144f458c0;
              if (local_c8 != '\0') {
                cVar3 = FWeakObjectPtr::IsValid(&local_e0);
                if (cVar3 != '\0') {
                  if (local_d8 == 0) goto LAB_141fee518;
                  plVar10 = (longlong *)FWeakObjectPtr::Get(&local_e0);
                  (**(code **)(*plVar10 + 0x2b0))(plVar10,local_d8,1);
                  FWeakObjectPtr::operator=(&local_a8,0);
                  local_e0 = local_a8;
                  local_dc = local_a4;
                }
LAB_141fee509:
                if (local_d8 != 0) {
                  FMemory::Free();
                }
              }
            }
          }
LAB_141fee518:
          plVar10 = local_b8;
        }
      }
      local_60[0] = local_60[0] + 1;
    } while (local_60[0] != plVar10);
  }
  if (local_c0 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141fee5a0 Execute body=165 status=ok
// SIG undefined Execute(void)

void FFadeExecutionToken::Execute(longlong param_1)

{
  longlong lVar1;
  longlong in_stack_00000028;
  undefined8 local_28;
  undefined4 local_20;
  undefined **local_18;
  longlong local_10;
  
  local_18 = &PTR_FUN_144f49d08;
  local_10 = in_stack_00000028;
  lVar1 = DAT_146acba68;
  if (DAT_146acba68 == 0) {
    lVar1 = FMovieSceneAnimTypeID::Initialize(&DAT_146acba68,0);
  }
  if (*(char *)(in_stack_00000028 + 0x2dc) != '\0') {
    local_20 = *(undefined4 *)(in_stack_00000028 + 0x2d8);
    local_28 = *(undefined8 *)(in_stack_00000028 + 0x2d0);
    TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::OnPreAnimated
              (in_stack_00000028 + 0x148,*(char *)(in_stack_00000028 + 0x2dc),lVar1,&local_28,
               &local_18,in_stack_00000028 + 0xf8);
  }
  FUN_141fd9770(param_1 + 8,in_stack_00000028,0);
  return;
}



// FUNCTION 141fee650 FUN_141fee650 body=189 status=ok
// SIG undefined FUN_141fee650(void)

void FUN_141fee650(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *in_stack_00000028;
  longlong *local_18;
  int local_10;
  
  plVar1 = (longlong *)(**(code **)(*in_stack_00000028 + 0x70))();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
    if (((lVar2 != 0) && ((*(int *)(lVar2 + 0x708) - 1U & 0xfffffffd) == 0)) &&
       (*(longlong *)(lVar2 + 400) != 0)) {
      UWorld::GetPlayerControllerIterator(lVar2,&local_18);
      for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
        lVar2 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
        if (lVar2 != 0) {
          FUN_1426f9350(lVar2,*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9),
                        *(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xb),
                        *(undefined4 *)(param_1 + 0xc));
        }
      }
    }
  }
  return;
}



// FUNCTION 141fee710 FUN_141fee710 body=162 status=ok
// SIG undefined FUN_141fee710(void)

void FUN_141fee710(longlong param_1)

{
  longlong lVar1;
  longlong in_stack_00000028;
  undefined8 local_38;
  undefined4 local_30;
  undefined **local_28;
  longlong local_20;
  
  local_28 = &PTR_FUN_144f4dea0;
  local_20 = in_stack_00000028;
  lVar1 = DAT_146acbb28;
  if (DAT_146acbb28 == 0) {
    lVar1 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbb28,0);
  }
  if (*(char *)(in_stack_00000028 + 0x2dc) != '\0') {
    local_30 = *(undefined4 *)(in_stack_00000028 + 0x2d8);
    local_38 = *(undefined8 *)(in_stack_00000028 + 0x2d0);
    TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::OnPreAnimated
              (in_stack_00000028 + 0x148,*(char *)(in_stack_00000028 + 0x2dc),lVar1,&local_38,
               &local_28,in_stack_00000028 + 0xf8);
  }
  FUN_141fd9ac0(param_1 + 8,in_stack_00000028);
  return;
}



// FUNCTION 141fee7c0 FUN_141fee7c0 body=552 status=ok
// SIG undefined FUN_141fee7c0(void)

void FUN_141fee7c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146acba7c) && (_Init_thread_header(&DAT_146acba7c), DAT_146acba7c == -1))
  {
    FKeyHandle::FKeyHandle(&DAT_146acba78);
    _Init_thread_footer(&DAT_146acba7c);
  }
  uVar2 = DAT_146acba78;
  plVar1 = *(longlong **)(param_2 + 0x10);
  puVar7 = (undefined8 *)0x0;
  local_20 = 0;
  local_30 = 0;
  iStack_2c = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    iVar3 = GetTypeHash(&local_30);
    uVar10 = iVar3 - uVar2 ^ uVar2 >> 0xd;
    uVar9 = (-0x61c88647 - uVar10) - uVar2 ^ uVar10 << 8;
    uVar8 = (uVar2 - uVar9) - uVar10 ^ uVar9 >> 0xd;
    uVar10 = (uVar10 - uVar9) - uVar8 ^ uVar8 >> 0xc;
    uVar9 = (uVar9 - uVar10) - uVar8 ^ uVar10 << 0x10;
    uVar8 = (uVar8 - uVar9) - uVar10 ^ uVar9 >> 5;
    uVar10 = (uVar10 - uVar9) - uVar8 ^ uVar8 >> 3;
    uVar9 = (uVar9 - uVar10) - uVar8 ^ uVar10 << 10;
    plVar4 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar4 = plVar1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (((longlong)(int)((uVar8 - uVar9) - uVar10) ^ (ulonglong)(uVar9 >> 0xf)) &
                    (longlong)(int)plVar1[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        puVar6 = (undefined8 *)(*plVar1 + (longlong)iVar3 * 0x28);
        if (((*(uint *)(*plVar1 + (longlong)iVar3 * 0x28) == uVar2) &&
            (*(int *)((longlong)puVar6 + 0x14) == local_20)) &&
           (((*(int *)(puVar6 + 1) == iStack_2c && *(int *)((longlong)puVar6 + 0xc) == iStack_28) &&
            *(int *)(puVar6 + 2) == iStack_24) && *(int *)((longlong)puVar6 + 4) == local_30)) {
          if (iVar3 != -1) goto LAB_141fee970;
          break;
        }
        iVar3 = *(int *)(puVar6 + 4);
      } while (iVar3 != -1);
    }
  }
  puVar6 = puVar7;
LAB_141fee970:
  puVar5 = puVar6 + 3;
  if (puVar6 == (undefined8 *)0x0) {
    puVar5 = puVar7;
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar5;
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_141fd9d10(puVar7,param_3);
  }
  return;
}



// FUNCTION 141fee9f0 FUN_141fee9f0 body=4068 status=ok
// SIG undefined FUN_141fee9f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141fee9f0(longlong param_1)

{
  int *piVar1;
  void *_Dst;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  longlong *plVar17;
  longlong *in_stack_00000028;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8;
  longlong *local_3a0;
  longlong *local_398;
  undefined8 local_390;
  longlong local_388;
  int local_380;
  int local_37c;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_360;
  longlong local_358;
  longlong *local_350;
  undefined1 local_348 [8];
  undefined1 local_340 [8];
  longlong local_338;
  longlong local_328;
  undefined4 local_320;
  longlong local_318;
  undefined4 local_310;
  void *local_308;
  undefined **local_300;
  longlong local_2f8;
  undefined **local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  longlong *local_290;
  undefined4 *local_288;
  longlong local_280 [2];
  longlong local_270 [2];
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 local_250 [8];
  longlong *local_248;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [40];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  local_350 = in_stack_00000028;
  local_358 = param_1;
  uVar5 = (**(code **)(*in_stack_00000028 + 0x70))(in_stack_00000028);
  lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar5);
  if (lVar6 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146acbaa8) &&
       (_Init_thread_header(&DAT_146acbaa8), DAT_146acbaa8 == -1)) {
      DAT_146acba80 = 0;
      DAT_146acba88 = 0;
      _DAT_146acba90 = 0;
      DAT_146acba98 = (longlong *)0x0;
      _DAT_146acbaa0 = 0;
      atexit(FUN_143ea3060);
      _Init_thread_footer(&DAT_146acbaa8);
    }
    lVar6 = FUN_1428cccb0(lVar6,*(undefined8 *)(param_1 + 8));
    if (lVar6 != 0) {
      plVar15 = *(longlong **)(param_1 + 0x30);
      if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
        plVar15 = (longlong *)(param_1 + 0x10);
      }
      local_398 = (longlong *)0x0;
      plVar17 = plVar15 + (longlong)*(int *)(param_1 + 0x38) * 2;
      local_390 = 0;
      plVar7 = in_stack_00000028;
      local_338 = lVar6;
      if (plVar15 != plVar17) {
        do {
          uVar3 = _DAT_146acbaa0;
          local_378 = *plVar15;
          local_300 = &PTR_FUN_144f4adc0;
          do {
            iVar11 = DAT_146acba80;
            LOCK();
            DAT_146acba80 = 1;
            UNLOCK();
          } while (iVar11 != 0);
          lVar14 = (longlong)DAT_146acbaa0;
          for (plVar7 = DAT_146acba98; local_2f8 = local_378, plVar7 != DAT_146acba98 + lVar14;
              plVar7 = plVar7 + 1) {
            if (*plVar7 == local_378) {
              iVar11 = (int)((longlong)plVar7 - (longlong)DAT_146acba98 >> 3);
              if (iVar11 != -1) {
                uVar5 = *(undefined8 *)(DAT_146acba88 + (longlong)iVar11 * 8);
                goto LAB_141feebc7;
              }
              break;
            }
          }
          iVar11 = DAT_146acbaa0 + 1;
          _DAT_146acbaa0 = CONCAT44(DAT_146acbaa4,iVar11);
          if (DAT_146acbaa4 < iVar11) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&DAT_146acba98,uVar3 & 0xffffffff);
          }
          DAT_146acba98[lVar14] = local_378;
          uVar5 = FMovieSceneAnimTypeID::GenerateHash(&DAT_146acba80,_DAT_146acba90 & 0xffffffff);
          uVar3 = _DAT_146acba90;
          lVar14 = (longlong)DAT_146acba90;
          iVar11 = DAT_146acba90 + 1;
          _DAT_146acba90 = CONCAT44(DAT_146acba94,iVar11);
          if (DAT_146acba94 < iVar11) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&DAT_146acba88,uVar3 & 0xffffffff);
          }
          *(undefined8 *)(DAT_146acba88 + lVar14 * 8) = uVar5;
LAB_141feebc7:
          LOCK();
          DAT_146acba80 = 0;
          UNLOCK();
          local_320 = (undefined4)in_stack_00000028[0x5b];
          local_328 = in_stack_00000028[0x5a];
          local_3a0 = &local_328;
          local_3a8 = *(undefined1 *)((longlong)in_stack_00000028 + 0x2dc);
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (in_stack_00000028 + 0x1f,uVar5,&local_300,lVar6);
          local_300 = &PTR_FUN_143fcdb70;
          cVar4 = UMaterialParameterCollectionInstance::SetScalarParameterValue
                            (lVar6,local_378,(int)plVar15[1]);
          if (cVar4 == '\0') {
            plVar7 = (longlong *)FName::ToString(&local_378,local_280);
            uVar3 = local_390;
            lVar14 = (longlong)(int)local_390;
            iVar11 = (int)local_390 + 1;
            local_390 = CONCAT44(local_390._4_4_,iVar11);
            if (local_390._4_4_ < iVar11) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_398,uVar3 & 0xffffffff);
            }
            plVar8 = local_398 + lVar14 * 2;
            *plVar8 = 0;
            *plVar8 = *plVar7;
            *plVar7 = 0;
            *(int *)(plVar8 + 1) = (int)plVar7[1];
            *(undefined4 *)((longlong)plVar8 + 0xc) = *(undefined4 *)((longlong)plVar7 + 0xc);
            plVar7[1] = 0;
            if (local_280[0] != 0) {
              FMemory::Free();
            }
          }
          plVar15 = plVar15 + 2;
          plVar7 = local_350;
          param_1 = local_358;
        } while (plVar15 != plVar17);
      }
      plVar15 = *(longlong **)(param_1 + 0xb0);
      if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
        plVar15 = (longlong *)(param_1 + 0x80);
      }
      plVar17 = plVar15 + (longlong)*(int *)(param_1 + 0xb8) * 3;
      if (plVar15 != plVar17) {
        do {
          uVar3 = _DAT_146acbaa0;
          local_370 = *plVar15;
          local_2f0 = &PTR_FUN_144f4ade8;
          do {
            iVar11 = DAT_146acba80;
            LOCK();
            DAT_146acba80 = 1;
            UNLOCK();
          } while (iVar11 != 0);
          lVar14 = (longlong)DAT_146acbaa0;
          for (plVar8 = DAT_146acba98; local_2e8 = local_370, plVar8 != DAT_146acba98 + lVar14;
              plVar8 = plVar8 + 1) {
            if (*plVar8 == local_370) {
              iVar11 = (int)((longlong)plVar8 - (longlong)DAT_146acba98 >> 3);
              if (iVar11 != -1) {
                uVar5 = *(undefined8 *)(DAT_146acba88 + (longlong)iVar11 * 8);
                goto LAB_141feedc7;
              }
              break;
            }
          }
          iVar11 = DAT_146acbaa0 + 1;
          _DAT_146acbaa0 = CONCAT44(DAT_146acbaa4,iVar11);
          if (DAT_146acbaa4 < iVar11) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&DAT_146acba98,uVar3 & 0xffffffff);
          }
          DAT_146acba98[lVar14] = local_370;
          uVar5 = FMovieSceneAnimTypeID::GenerateHash(&DAT_146acba80,_DAT_146acba90 & 0xffffffff);
          uVar3 = _DAT_146acba90;
          lVar14 = (longlong)DAT_146acba90;
          iVar11 = DAT_146acba90 + 1;
          _DAT_146acba90 = CONCAT44(DAT_146acba94,iVar11);
          if (DAT_146acba94 < iVar11) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&DAT_146acba88,uVar3 & 0xffffffff);
          }
          *(undefined8 *)(DAT_146acba88 + lVar14 * 8) = uVar5;
LAB_141feedc7:
          LOCK();
          DAT_146acba80 = 0;
          UNLOCK();
          local_310 = (undefined4)plVar7[0x5b];
          local_318 = plVar7[0x5a];
          local_3a0 = &local_318;
          local_3a8 = *(undefined1 *)((longlong)plVar7 + 0x2dc);
          FMovieScenePreAnimatedState::SavePreAnimatedState(plVar7 + 0x1f,uVar5,&local_2f0,lVar6);
          local_2f0 = &PTR_FUN_143fcdb70;
          cVar4 = UMaterialParameterCollectionInstance::SetVectorParameterValue(lVar6,local_370);
          if (cVar4 == '\0') {
            plVar8 = (longlong *)FName::ToString(&local_370,local_270);
            uVar3 = local_390;
            lVar14 = (longlong)(int)local_390;
            iVar11 = (int)local_390 + 1;
            local_390 = CONCAT44(local_390._4_4_,iVar11);
            if (local_390._4_4_ < iVar11) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_398,uVar3 & 0xffffffff);
            }
            plVar12 = local_398 + lVar14 * 2;
            *plVar12 = 0;
            *plVar12 = *plVar8;
            *plVar8 = 0;
            *(int *)(plVar12 + 1) = (int)plVar8[1];
            *(undefined4 *)((longlong)plVar12 + 0xc) = *(undefined4 *)((longlong)plVar8 + 0xc);
            plVar8[1] = 0;
            if (local_270[0] != 0) {
              FMemory::Free();
            }
          }
          plVar15 = plVar15 + 3;
        } while (plVar15 != plVar17);
      }
      iVar11 = 0;
      if (((int)local_390 != 0) && (*(char *)(lVar6 + 0x28) == '\0')) {
        plVar7 = local_398 + (longlong)(int)local_390 * 2;
        local_b8 = 0;
        local_b0 = 0;
        local_98 = 0;
        local_90 = 0;
        bVar2 = true;
        local_88 = 0xffffffff;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        local_388 = 0;
        local_380 = 0;
        local_37c = 0;
        iVar13 = iVar11;
        for (plVar15 = local_398; plVar15 != plVar7; plVar15 = plVar15 + 2) {
          if (bVar2) {
            bVar2 = false;
          }
          else {
            local_380 = (3 - (uint)(iVar11 != 0)) + iVar11;
            if (iVar13 < local_380) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,iVar11);
            }
            lVar6 = (longlong)iVar11 - (ulonglong)(iVar11 != 0);
            *(undefined4 *)(local_388 + lVar6 * 2) = 0x20002c;
            *(undefined2 *)(local_388 + 4 + lVar6 * 2) = 0;
            iVar11 = local_380;
            iVar13 = local_37c;
          }
          iVar16 = (int)plVar15[1] + -1;
          local_308 = (void *)*plVar15;
          if ((int)plVar15[1] == 0) {
            iVar16 = 0;
          }
          if (iVar16 != 0) {
            local_380 = (uint)(iVar11 == 0) + iVar16 + iVar11;
            if (iVar13 < local_380) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,iVar11);
            }
            _Dst = (void *)(local_388 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,local_308,(longlong)iVar16 * 2);
            *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
            iVar11 = local_380;
            iVar13 = local_37c;
          }
        }
        uVar5 = FText::FromString(local_1b0,&local_388);
        local_68[0] = 4;
        FText::FText(local_58,uVar5);
        local_40 = '\x01';
        local_368 = 0;
        local_360 = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
        FGenericPlatformString::Memcpy(local_368,L"ParamNames",0x16);
        local_290 = &local_368;
        local_288 = local_68;
        FUN_1407484b0(&local_b8,local_348,&local_290,0);
        if (local_368 != 0) {
          FMemory::Free();
        }
        if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
          LOCK();
          plVar15 = local_50 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        if (local_1a8 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_1a8 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_1a8)(local_1a8);
            LOCK();
            piVar1 = (int *)((longlong)local_1a8 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_1a8 + 8))(local_1a8,1);
            }
          }
        }
        if (local_388 != 0) {
          FMemory::Free();
        }
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_108,L"with the following invalid parameters: {ParamNames}.",
                           L"MaterialParameterCollectionTrack",L"InvalidParameterFormatText");
        uVar5 = FTextFormat::FTextFormat(local_f0,uVar5);
        uVar5 = FText::Format(local_120,uVar5,&local_b8);
        puVar9 = (undefined8 *)FUN_140973510(local_1c0,uVar5);
        local_2a0 = *puVar9;
        local_298 = (longlong *)puVar9[1];
        if (local_298 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_298 + 1) = (int)local_298[1] + 1;
          UNLOCK();
        }
        uVar5 = FText::FText(local_138);
        puVar9 = (undefined8 *)FUN_1416ed870(local_1d0,*(undefined8 *)(local_358 + 8),uVar5);
        local_2b0 = *puVar9;
        local_2a8 = (longlong *)puVar9[1];
        if (local_2a8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2a8 + 1) = (int)local_2a8[1] + 1;
          UNLOCK();
        }
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_150,&DAT_144603d04,L"MaterialParameterCollectionTrack",L"OnText");
        puVar9 = (undefined8 *)FUN_140973510(local_1e0,uVar5);
        local_2c0 = *puVar9;
        local_2b8 = (longlong *)puVar9[1];
        if (local_2b8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2b8 + 1) = (int)local_2b8[1] + 1;
          UNLOCK();
        }
        uVar5 = FText::FText(local_168);
        uVar10 = (**(code **)(*local_350 + 8))();
        uVar10 = FUN_141f53b50(uVar10,&DAT_146acb830);
        puVar9 = (undefined8 *)FUN_1416ed870(local_1f0,uVar10,uVar5);
        local_2d0 = *puVar9;
        local_2c8 = (longlong *)puVar9[1];
        if (local_2c8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
          UNLOCK();
        }
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_180,L"Invalid parameter name or type applied in sequence",
                           L"MaterialParameterCollectionTrack",L"InvalidParameterText");
        puVar9 = (undefined8 *)FUN_140973510(local_200,uVar5);
        local_2e0 = *puVar9;
        local_2d8 = (longlong *)puVar9[1];
        if (local_2d8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2d8 + 1) = (int)local_2d8[1] + 1;
          UNLOCK();
        }
        FName::FName(local_340,&DAT_144f4ae28,1);
        uVar5 = FText::FText(local_198);
        uVar10 = FUN_14161fb50(local_e0,local_340);
        puVar9 = (undefined8 *)FMessageLog::Warning(uVar10,local_210,uVar5);
        puVar9 = (undefined8 *)FUN_141621960(*puVar9,local_220,&local_2e0);
        puVar9 = (undefined8 *)FUN_141621960(*puVar9,local_230,&local_2d0);
        puVar9 = (undefined8 *)FUN_141621960(*puVar9,local_240,&local_2c0);
        puVar9 = (undefined8 *)FUN_141621960(*puVar9,local_250,&local_2b0);
        FUN_141621960(*puVar9,local_260,&local_2a0);
        if (local_258 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_258 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_258)(local_258);
            LOCK();
            piVar1 = (int *)((longlong)local_258 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_258 + 8))(local_258,1);
            }
          }
        }
        if (local_248 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_248 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_248)(local_248);
            LOCK();
            piVar1 = (int *)((longlong)local_248 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_248 + 8))(local_248,1);
            }
          }
        }
        if (local_238 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_238 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_238)(local_238);
            LOCK();
            piVar1 = (int *)((longlong)local_238 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_238 + 8))(local_238,1);
            }
          }
        }
        if (local_228 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_228 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_228)(local_228);
            LOCK();
            piVar1 = (int *)((longlong)local_228 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_228 + 8))(local_228,1);
            }
          }
        }
        if (local_218 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_218 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_218)(local_218);
            LOCK();
            piVar1 = (int *)((longlong)local_218 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_218 + 8))(local_218,1);
            }
          }
        }
        if (local_208 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_208 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_208)(local_208);
            LOCK();
            piVar1 = (int *)((longlong)local_208 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_208 + 8))(local_208,1);
            }
          }
        }
        FMessageLog::~FMessageLog(local_e0);
        if (local_190 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_190 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_190)(local_190);
            LOCK();
            piVar1 = (int *)((longlong)local_190 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_190 + 8))(local_190,1);
            }
          }
        }
        plVar15 = local_2d8;
        if (local_2d8 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_2d8 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_2d8)(local_2d8);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        if (local_1f8 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_1f8 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_1f8)(local_1f8);
            LOCK();
            piVar1 = (int *)((longlong)local_1f8 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_1f8 + 8))(local_1f8,1);
            }
          }
        }
        if (local_178 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_178 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_178)(local_178);
            LOCK();
            piVar1 = (int *)((longlong)local_178 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_178 + 8))(local_178,1);
            }
          }
        }
        plVar15 = local_2c8;
        if (local_2c8 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_2c8 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_2c8)(local_2c8);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        if (local_1e8 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_1e8 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_1e8)(local_1e8);
            LOCK();
            piVar1 = (int *)((longlong)local_1e8 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_1e8 + 8))(local_1e8,1);
            }
          }
        }
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_160 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar1 = (int *)((longlong)local_160 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_160 + 8))(local_160,1);
            }
          }
        }
        plVar15 = local_2b8;
        if (local_2b8 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_2b8 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_2b8)(local_2b8);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        if (local_1d8 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_1d8 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_1d8)(local_1d8);
            LOCK();
            piVar1 = (int *)((longlong)local_1d8 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_1d8 + 8))(local_1d8,1);
            }
          }
        }
        if (local_148 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_148 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_148)(local_148);
            LOCK();
            piVar1 = (int *)((longlong)local_148 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_148 + 8))(local_148,1);
            }
          }
        }
        plVar15 = local_2a8;
        if (local_2a8 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_2a8 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_2a8)(local_2a8);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        if (local_1c8 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_1c8 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_1c8)(local_1c8);
            LOCK();
            piVar1 = (int *)((longlong)local_1c8 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_1c8 + 8))(local_1c8,1);
            }
          }
        }
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_130 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar1 = (int *)((longlong)local_130 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
        plVar15 = local_298;
        if (local_298 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_298 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_298)(local_298);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        if (local_1b8 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_1b8 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_1b8)(local_1b8);
            LOCK();
            piVar1 = (int *)((longlong)local_1b8 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_1b8 + 8))(local_1b8,1);
            }
          }
        }
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_118 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar1 = (int *)((longlong)local_118 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_100 + 1;
          lVar6 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar1 = (int *)((longlong)local_100 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_100 + 8))(local_100,1);
            }
          }
        }
        local_70 = 0;
        *(undefined1 *)(local_338 + 0x28) = 1;
        if (local_78 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_b8);
      }
      plVar15 = local_398;
      for (iVar11 = (int)local_390; iVar11 != 0; iVar11 = iVar11 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_398 != (longlong *)0x0) {
        FMemory::Free(local_398);
      }
    }
  }
  return;
}



// FUNCTION 141fef9e0 FUN_141fef9e0 body=1048 status=ok
// SIG undefined FUN_141fef9e0(void)

ulonglong FUN_141fef9e0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       longlong param_5)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint7 uVar8;
  longlong lVar7;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined **local_res18;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  int local_50;
  longlong local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  IMovieScenePlayer::FindBoundObjects(param_5,&local_48,param_3,param_3 + 0x10);
  uVar4 = (ulonglong)local_40;
  lVar1 = uVar4 * 8;
  lVar13 = local_48;
  do {
    if (lVar13 == local_48 + lVar1) {
      return uVar4;
    }
    lVar5 = FWeakObjectPtr::Get(lVar13);
    if (lVar5 == 0) {
LAB_141fefa96:
      lVar5 = FWeakObjectPtr::Get(lVar13);
      uVar4 = 0;
      if (lVar5 == 0) {
LAB_141fefae1:
        lVar5 = 0;
      }
      else {
        lVar6 = AGPingUsable::GetPrivateStaticClass();
        uVar8 = (uint7)((ulonglong)(lVar6 + 0x88) >> 8);
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          uVar4 = (ulonglong)uVar8 << 8;
        }
        else {
          uVar4 = CONCAT71(uVar8,1);
        }
        if ((char)uVar4 == '\0') goto LAB_141fefae1;
        lVar5 = *(longlong *)(lVar5 + 0x458);
      }
      if (lVar5 != 0) goto LAB_141fefaec;
    }
    else {
      lVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_141fefa96;
LAB_141fefaec:
      local_res18 = (undefined **)0x0;
      lVar6 = DAT_146acbab0;
      if (DAT_146acbab0 == 0) {
        lVar6 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbab0,0);
      }
      local_70 = *(undefined4 *)(param_5 + 0x2d8);
      local_78 = *(undefined8 *)(param_5 + 0x2d0);
      local_res18 = &PTR_FUN_144f4b340;
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_5 + 0xf8,lVar6,&local_res18,lVar5,*(undefined1 *)(param_5 + 0x2dc),&local_78)
      ;
      puVar10 = (undefined8 *)
                ((ulonglong)(*(longlong *)(param_1 + 0x28) != 0) - 1 & param_1 + 8U |
                *(ulonglong *)(param_1 + 0x28));
      puVar11 = puVar10 + (longlong)*(int *)(param_1 + 0x30) * 2;
      for (; puVar10 != puVar11; puVar10 = puVar10 + 2) {
        FUN_14260f0c0(lVar5,*puVar10,*(undefined4 *)(puVar10 + 1));
      }
      puVar11 = (undefined8 *)
                ((ulonglong)(*(longlong *)(param_1 + 0x68) != 0) - 1 & param_1 + 0x38U |
                *(ulonglong *)(param_1 + 0x68));
      puVar10 = puVar11 + (longlong)*(int *)(param_1 + 0x70) * 3;
      if (puVar11 != puVar10) {
        puVar12 = puVar11 + 1;
        do {
          local_68 = *puVar12;
          local_60 = *(undefined4 *)(puVar12 + 1);
          FUN_142610200(lVar5,*puVar11,&local_68);
          puVar11 = puVar11 + 3;
          puVar12 = puVar12 + 3;
        } while (puVar11 != puVar10);
      }
      puVar11 = (undefined8 *)
                ((ulonglong)(*(longlong *)(param_1 + 0xa8) != 0) - 1 & param_1 + 0x78U |
                *(ulonglong *)(param_1 + 0xa8));
      puVar10 = puVar11 + (longlong)*(int *)(param_1 + 0xb0) * 3;
      if (puVar11 != puVar10) {
        puVar12 = puVar11 + 1;
        do {
          local_38 = *(undefined4 *)puVar12;
          uStack_34 = *(undefined4 *)((longlong)puVar12 + 4);
          uStack_30 = *(undefined4 *)(puVar12 + 1);
          uStack_2c = *(undefined4 *)((longlong)puVar12 + 0xc);
          FUN_14260ee50(lVar5,*puVar11,&local_38);
          puVar11 = puVar11 + 3;
          puVar12 = puVar12 + 3;
        } while (puVar11 != puVar10);
      }
      uVar4 = -*(longlong *)(param_1 + 0xf8);
      puVar10 = (undefined8 *)
                ((ulonglong)(*(longlong *)(param_1 + 0xf8) != 0) - 1 & param_1 + 0xb8U |
                *(ulonglong *)(param_1 + 0xf8));
      puVar11 = puVar10 + (longlong)*(int *)(param_1 + 0x100) * 4;
      for (; puVar10 != puVar11; puVar10 = puVar10 + 4) {
        uVar4 = (ulonglong)*(uint *)(param_5 + 0xb0);
        if (*(uint *)(param_5 + 0xb0) != *(uint *)(param_5 + 0xdc)) {
          lVar6 = *(longlong *)(param_5 + 0xe8);
          if (*(longlong *)(param_5 + 0xe8) == 0) {
            lVar6 = param_5 + 0xe0;
          }
          uVar2 = *(uint *)(lVar6 + ((longlong)*(int *)(param_5 + 0xf0) - 1U &
                                    (longlong)*(int *)(puVar10 + 1)) * 4);
          uVar4 = (ulonglong)uVar2;
          if (uVar2 != 0xffffffff) {
            do {
              piVar9 = (int *)((longlong)(int)uVar4 * 0xc0 + *(longlong *)(param_5 + 0xa8));
              if (*piVar9 == *(int *)(puVar10 + 1)) {
                if ((((int)uVar4 != -1) && (piVar9 != (int *)0x0)) && (piVar9 + 2 != (int *)0x0)) {
                  uVar4 = FMovieSceneObjectCache::FindBoundObjects
                                    (piVar9 + 2,&local_58,puVar10 + 2,param_5);
                  if (local_50 != 0) {
                    lVar6 = FWeakObjectPtr::Get(local_58);
                    uVar4 = 0;
                    if (lVar6 != 0) {
                      lVar7 = FUN_1428dfc70();
                      uVar8 = (uint7)((ulonglong)(lVar7 + 0x88) >> 8);
                      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                        uVar4 = (ulonglong)uVar8 << 8;
                      }
                      else {
                        uVar4 = CONCAT71(uVar8,1);
                      }
                      if ((char)uVar4 != '\0') {
                        uVar4 = FUN_14260e160(lVar5,*puVar10,lVar6);
                      }
                    }
                  }
                  goto LAB_141fefd1e;
                }
                break;
              }
              uVar4 = (ulonglong)(uint)piVar9[0x2e];
            } while (piVar9[0x2e] != 0xffffffff);
          }
        }
        local_58 = 0;
        local_50 = 0;
LAB_141fefd1e:
      }
    }
    lVar13 = lVar13 + 8;
  } while( true );
}



// FUNCTION 141fefe00 FUN_141fefe00 body=379 status=ok
// SIG undefined FUN_141fefe00(void)

void FUN_141fefe00(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined **local_58 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 *local_38;
  int local_30;
  
  IMovieScenePlayer::FindBoundObjects(param_5,&local_38,param_3,param_3 + 0x10);
  for (puVar5 = local_38; puVar5 != local_38 + (longlong)local_30 * 2; puVar5 = puVar5 + 2) {
    local_res18 = *puVar5;
    local_res1c = puVar5[1];
    uVar2 = FWeakObjectPtr::Get(&local_res18);
    plVar3 = (longlong *)FUN_141ff54d0(uVar2);
    if (plVar3 != (longlong *)0x0) {
      local_58[0] = &PTR_FUN_144f4b718;
      lVar4 = DAT_146acbab8;
      if (DAT_146acbab8 == 0) {
        lVar4 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbab8,0);
      }
      local_40 = *(undefined4 *)(param_5 + 0x2d8);
      local_48 = *(undefined8 *)(param_5 + 0x2d0);
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_5 + 0xf8,lVar4,local_58,uVar2,*(undefined1 *)(param_5 + 0x2dc),&local_48);
      cVar1 = *(char *)(param_1 + 8);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*plVar3 + 0x2a0))(plVar3);
        if (cVar1 == '\0') {
          (**(code **)(*plVar3 + 0x290))(plVar3);
        }
      }
      else if (cVar1 == '\x01') {
        (**(code **)(*plVar3 + 0x290))(plVar3,0,1);
      }
      else if (cVar1 == '\x02') {
        FUN_1425fcab0(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 141feff80 FUN_141feff80 body=231 status=ok
// SIG undefined FUN_141feff80(void)

void FUN_141feff80(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *in_stack_00000028;
  longlong local_28;
  undefined4 local_20;
  undefined **local_18;
  longlong *local_10;
  
  local_18 = &PTR_FUN_144f4d090;
  local_10 = in_stack_00000028;
  lVar1 = DAT_146acbb00;
  if (DAT_146acbb00 == 0) {
    lVar1 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbb00,0);
  }
  if (*(char *)((longlong)in_stack_00000028 + 0x2dc) != '\0') {
    local_20 = (undefined4)in_stack_00000028[0x5b];
    local_28 = in_stack_00000028[0x5a];
    TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::OnPreAnimated
              (in_stack_00000028 + 0x29,*(char *)((longlong)in_stack_00000028 + 0x2dc),lVar1,
               &local_28,&local_18,in_stack_00000028 + 0x1f);
  }
  plVar2 = (longlong *)(**(code **)(*in_stack_00000028 + 0x70))(in_stack_00000028);
  if (plVar2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if ((lVar1 != 0) && (0.0 < *(float *)(param_1 + 8))) {
      plVar2 = (longlong *)UWorld::GetWorldSettings(lVar1,0,1);
      if (plVar2 != (longlong *)0x0) {
        *(undefined4 *)((longlong)plVar2 + 0x5e4) = *(undefined4 *)(param_1 + 8);
        (**(code **)(*plVar2 + 0x600))(plVar2);
      }
    }
  }
  return;
}



// FUNCTION 141ff0070 FUN_141ff0070 body=567 status=ok
// SIG undefined FUN_141ff0070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ff0070(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  longlong *param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 *local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar2 = (**(code **)(*param_5 + 0x50))(param_5);
  lVar3 = FMovieSceneSpawnRegister::FindSpawnedObject(uVar2,param_3,param_3 + 4);
  bVar9 = lVar3 != 0;
  bVar10 = false;
  plVar4 = (longlong *)(**(code **)(*param_5 + 0x48))();
  if (plVar4 != (longlong *)0x0) {
    local_40 = 0;
    local_38 = 0;
    local_98 = (longlong *)CONCAT71(local_98._1_7_,*(undefined1 *)(param_1 + 8));
    cVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,param_3,param_3[4],&local_48);
    bVar10 = cVar1 == '\0';
    bVar9 = bVar10 || bVar9;
    if (local_40 != 0) {
      FMemory::Free();
    }
  }
  if (*(char *)(param_1 + 8) == '\0') {
    if (bVar9) {
      uVar2 = (**(code **)(*param_5 + 0x50))(param_5);
      FMovieSceneSpawnRegister::DestroySpawnedObject(uVar2,param_3,param_3 + 4,param_5);
    }
  }
  else {
    if ((!bVar9) &&
       (plVar4 = (longlong *)FMovieSceneEvaluationState::FindSequence(param_5 + 1,param_3 + 4),
       plVar4 != (longlong *)0x0)) {
      uVar2 = (**(code **)(*plVar4 + 0x298))(plVar4);
      uVar5 = (**(code **)(*param_5 + 0x50))(param_5);
      local_98 = param_5;
      uVar2 = FMovieSceneSpawnRegister::SpawnObject(uVar5,param_3,uVar2,param_3 + 4);
      (**(code **)(*param_5 + 0x58))(param_5,uVar2,param_3);
    }
    if (!bVar10) {
      IMovieScenePlayer::FindBoundObjects(param_5,&local_48,param_3,param_3 + 4);
      lVar3 = (longlong)(int)local_40;
      for (puVar8 = local_48; puVar8 != local_48 + lVar3 * 2; puVar8 = puVar8 + 2) {
        local_88 = *puVar8;
        local_84 = puVar8[1];
        lVar6 = FWeakObjectPtr::Get(&local_88);
        if (lVar6 != 0) {
          local_60 = *param_3;
          uStack_5c = param_3[1];
          uStack_58 = param_3[2];
          uStack_54 = param_3[3];
          local_50 = param_3[4];
          local_68 = &PTR_FUN_144f4d108;
          lVar7 = DAT_146acbb08;
          if (DAT_146acbb08 == 0) {
            lVar7 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbb08,0);
          }
          local_70 = (undefined4)param_5[0x5b];
          local_78 = param_5[0x5a];
          local_90 = &local_78;
          local_98 = (longlong *)CONCAT71(local_98._1_7_,*(undefined1 *)((longlong)param_5 + 0x2dc))
          ;
          FMovieScenePreAnimatedState::SavePreAnimatedState(param_5 + 0x1f,lVar7,&local_68,lVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 141ff02b0 FUN_141ff02b0 body=655 status=ok
// SIG undefined FUN_141ff02b0(void)

void FUN_141ff02b0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined **local_68 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 *local_38;
  int local_30;
  
  IMovieScenePlayer::FindBoundObjects(param_5,&local_38,param_3,param_3 + 0x10);
  for (puVar5 = local_38; puVar5 != local_38 + (longlong)local_30 * 2; puVar5 = puVar5 + 2) {
    local_res18 = *puVar5;
    local_res1c = puVar5[1];
    plVar2 = (longlong *)FWeakObjectPtr::Get(&local_res18);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1428dfc70();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar3 = FUN_1428dfc70();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        local_68[0] = &PTR_FUN_144f4d1c0;
        plVar4 = (longlong *)0x0;
        if (bVar1) {
          plVar4 = plVar2;
        }
        lVar3 = DAT_146acbb20;
        if (DAT_146acbb20 == 0) {
          lVar3 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbb20,0);
        }
        local_50 = *(undefined4 *)(param_5 + 0x2d8);
        local_58 = *(undefined8 *)(param_5 + 0x2d0);
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (param_5 + 0xf8,lVar3,local_68,plVar4,*(undefined1 *)(param_5 + 0x2dc),&local_58);
        (**(code **)(*plVar4 + 0x310))(plVar4,*(undefined1 *)(param_1 + 8));
      }
      else {
        lVar3 = FUN_1429ff160();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar3 = FUN_1429ff160();
          if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
              != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          local_68[0] = &PTR_FUN_144f4d1c0;
          plVar4 = (longlong *)0x0;
          if (bVar1) {
            plVar4 = plVar2;
          }
          lVar3 = DAT_146acbb20;
          if (DAT_146acbb20 == 0) {
            lVar3 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbb20,0);
          }
          local_40 = *(undefined4 *)(param_5 + 0x2d8);
          local_48 = *(undefined8 *)(param_5 + 0x2d0);
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_5 + 0xf8,lVar3,local_68,plVar4,*(undefined1 *)(param_5 + 0x2dc),&local_48
                    );
          FUN_142397540(plVar4,*(undefined1 *)(param_1 + 8),1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141ff0540 FindId body=211 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((*(int *)(lVar1 + 0x10 + lVar4 * 0x30) == param_3[4]) &&
           (((*(int *)(lVar1 + 0xc + lVar4 * 0x30) == param_3[3] &&
             *(int *)(lVar1 + 8 + lVar4 * 0x30) == param_3[2]) &&
            *(int *)(lVar1 + 4 + lVar4 * 0x30) == param_3[1]) &&
            *(int *)(lVar1 + lVar4 * 0x30) == *param_3)) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar1 + 0x28 + lVar4 * 0x30);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141ff0620 FindId body=302 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_3[1];
    uVar8 = *param_3 - uVar1 ^ uVar1 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
    uVar5 = (uVar1 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 0x10;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (((longlong)(int)((uVar5 - uVar7) - uVar8) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar3;
        if ((*(int *)(lVar2 + lVar6 * 0x18) == *param_3) &&
           (*(uint *)(lVar2 + 4 + lVar6 * 0x18) == uVar1)) {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141ff0750 FindId body=302 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FObjectKey,FMontagePlayerPerSectionData>,TDefaultMapHashableKeyFuncs<FObjectKey,FMontagePlayerPerSectionData,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_3[1];
    uVar8 = *param_3 - uVar1 ^ uVar1 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
    uVar5 = (uVar1 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 0x10;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar5 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar5 ^ uVar8 << 10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (((longlong)(int)((uVar5 - uVar7) - uVar8) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)iVar3 * 0x1c;
        if ((*(int *)(lVar6 + lVar2) == *param_3) && (*(uint *)(lVar6 + 4 + lVar2) == uVar1)) {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar6 + 0x14 + lVar2);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141ff0880 FindShared body=134 status=ok
// SIG undefined FindShared(void)

int * FMovieSceneExecutionTokens::FindShared(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)0x0;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar2 = param_1 + 0x48;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x10));
        if (*piVar5 == param_2) {
          if (iVar1 != -1) goto LAB_141ff08e0;
          break;
        }
        iVar1 = piVar5[0xc];
      } while (iVar1 != -1);
    }
  }
  piVar5 = piVar4;
LAB_141ff08e0:
  piVar3 = piVar5 + 2;
  if (piVar5 == (int *)0x0) {
    piVar3 = piVar4;
  }
  if (((piVar3 != (int *)0x0) && ((*(byte *)(piVar3 + 8) & 1) != 0)) &&
     (piVar4 = piVar3, (*(byte *)(piVar3 + 8) & 2) == 0)) {
    return *(int **)piVar3;
  }
  return piVar4;
}



// FUNCTION 141ff0910 GenerateTemplate body=220 status=ok
// SIG undefined GenerateTemplate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * UMovieScene3DTransformSection::GenerateTemplate(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_6a8 [32];
  undefined **local_688;
  undefined1 local_680;
  undefined1 local_678;
  undefined8 local_670;
  undefined1 local_668 [1616];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_6a8;
  local_680 = 0;
  local_678 = 0;
  local_670 = 0;
  local_688 = &PTR__scalar_deleting_destructor__144f46630;
  FMovieScene3DTransformTemplateData::FMovieScene3DTransformTemplateData(local_668,param_1);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar1 = (undefined8 *)FMemory::Malloc(0x670,8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar1;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar1 = param_2;
  }
  *puVar1 = &PTR_FUN_143fcdb48;
  *(undefined1 *)(puVar1 + 1) = local_680;
  *puVar1 = &PTR_FUN_143fcdb90;
  *(undefined1 *)(puVar1 + 2) = local_678;
  puVar1[3] = local_670;
  *puVar1 = &PTR__scalar_deleting_destructor__144f46630;
  FMovieScene3DTransformTemplateData::FMovieScene3DTransformTemplateData(puVar1 + 4,local_668);
  FMovieScene3DTransformTemplateData::~FMovieScene3DTransformTemplateData(local_668);
  return param_2;
}



// FUNCTION 141ff09f0 GenerateTemplate body=516 status=ok
// SIG undefined GenerateTemplate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * UMovieSceneAudioSection::GenerateTemplate(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_218 [32];
  ulonglong local_1f8;
  undefined **local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  double local_1b8;
  undefined1 local_1b0 [160];
  undefined1 local_110 [160];
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1c8 = *(undefined8 *)(param_1 + 0xe0);
  local_1c0 = *(undefined4 *)(param_1 + 0xe8);
  local_1e0 = 0;
  uVar5 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1e8 = &PTR__scalar_deleting_destructor__144f473c8;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_1b0,param_1 + 0x198);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_110,param_1 + 0xf8);
  local_70 = *(undefined4 *)(param_1 + 0xa8);
  local_6c = *(undefined1 *)(param_1 + 0x239);
  local_68 = *(undefined8 *)(param_1 + 0x240);
  local_60 = *(undefined4 *)(param_1 + 0x248);
  local_5c = *(undefined4 *)(param_1 + 0x24c);
  local_58 = *(undefined8 *)(param_1 + 0x250);
  TMulticastScriptDelegate<FWeakObjectPtr>::TMulticastScriptDelegate<FWeakObjectPtr>
            (local_50,param_1 + 600);
  TMulticastScriptDelegate<FWeakObjectPtr>::TMulticastScriptDelegate<FWeakObjectPtr>
            (local_40,param_1 + 0x268);
  if ((*(char *)(param_1 + 0x90) != '\x02') &&
     (uVar5 = *(uint *)(param_1 + 0x94), *(char *)(param_1 + 0x90) != '\x01')) {
    uVar5 = uVar5 + 1;
  }
  uVar1 = UMovieScene::GetPrivateStaticClass();
  lVar2 = UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
  local_1f8 = (ulonglong)uVar5;
  uVar1 = *(undefined8 *)(lVar2 + 0xb8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  iVar4 = (int)((ulonglong)uVar1 >> 0x20);
  local_1b8 = ((double)((longlong)iVar4 * (longlong)(int)uVar5) + (double)((float)iVar4 * 0.0)) /
              (double)(int)uVar1;
  puVar3 = (undefined8 *)FMemory::Malloc(0x1b8,8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar3;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar3 = param_2;
  }
  *(undefined1 *)(puVar3 + 1) = local_1e0;
  *(undefined1 *)(puVar3 + 2) = local_1d8;
  puVar3[3] = local_1d0;
  *puVar3 = &PTR__scalar_deleting_destructor__144f473c8;
  FMovieSceneAudioSectionTemplateData::FMovieSceneAudioSectionTemplateData(puVar3 + 4,&local_1c8);
  FMovieSceneAudioSectionTemplateData::~FMovieSceneAudioSectionTemplateData(&local_1c8);
  return param_2;
}



// FUNCTION 141ff0c00 GenerateTemplate body=197 status=ok
// SIG undefined GenerateTemplate(void)

undefined8 * UMovieSceneCameraAnimSection::GenerateTemplate(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    uVar4 = *(undefined8 *)(param_1 + 0xf0);
    uVar5 = *(undefined8 *)(param_1 + 0xf8);
    if (*(char *)(param_1 + 0x90) == '\x02') {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x94);
      if (*(char *)(param_1 + 0x90) != '\x01') {
        iVar7 = iVar7 + 1;
      }
    }
    *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
    puVar6 = (undefined8 *)FMemory::Malloc(0x48);
    bVar1 = *(byte *)(param_2 + 6);
    *param_2 = puVar6;
    *(byte *)(param_2 + 6) = bVar1 | 1;
    if ((bVar1 & 2) != 0) {
      puVar6 = param_2;
    }
    puVar6[4] = uVar2;
    puVar6[5] = uVar3;
    *(int *)(puVar6 + 8) = iVar7;
    puVar6[6] = uVar4;
    puVar6[7] = uVar5;
    *(undefined1 *)(puVar6 + 1) = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    puVar6[3] = 0;
    *puVar6 = &PTR_FUN_144f480b8;
    return param_2;
  }
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfe | 2;
  return param_2;
}



// FUNCTION 141ff0cd0 FUN_141ff0cd0 body=1646 status=ok
// SIG undefined FUN_141ff0cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141ff0cd0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  void *pvVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined8 ****ppppuVar19;
  byte *pbVar20;
  longlong lVar21;
  byte *pbVar22;
  longlong *plVar23;
  int iVar24;
  ulonglong uVar25;
  int *piVar26;
  longlong *plVar27;
  bool bVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_348 [32];
  int local_328;
  undefined4 uStack_324;
  longlong local_320;
  int *local_318;
  longlong local_310;
  undefined8 local_308;
  undefined8 local_300;
  longlong *plStack_2f8;
  longlong *local_2f0;
  int *local_2e8;
  undefined8 *local_2e0;
  undefined1 local_2d8 [4];
  undefined8 local_2d4;
  undefined1 local_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  byte local_298;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  uint uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined1 local_248 [48];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  char local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined1 local_1a8 [24];
  longlong local_190;
  longlong local_180;
  int local_178;
  longlong local_148;
  longlong local_138;
  longlong local_128;
  longlong local_118;
  longlong local_108;
  int local_100;
  undefined8 ***local_f8 [6];
  byte local_c8;
  int local_98;
  ulonglong local_90;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  local_328 = 0;
  local_1e8 = '\0';
  local_2e0 = param_2;
  uVar11 = UMovieScene::GetPrivateStaticClass();
  lVar12 = UObjectBaseUtility::GetTypedOuter(param_1,uVar11);
  piVar2 = *(int **)(lVar12 + 0x70);
  local_2e8 = piVar2 + (longlong)*(int *)(lVar12 + 0x78) * 0xc;
  local_320 = lVar12;
  if (piVar2 != local_2e8) {
    uVar25 = (ulonglong)_tls_index;
    local_318 = piVar2 + 3;
    do {
      pvVar10 = ThreadLocalStoragePointer;
      if (((local_318[-2] == *(int *)(param_1 + 0xfc) && local_318[-1] == *(int *)(param_1 + 0x100))
          && local_318[-3] == *(int *)(param_1 + 0xf8)) && *local_318 == *(int *)(param_1 + 0x104))
      {
        plVar27 = *(longlong **)(local_318 + 5);
        local_2f0 = plVar27 + local_318[7];
        if (plVar27 != local_2f0) {
          do {
            lVar21 = *plVar27;
            if (lVar21 == 0) {
LAB_141ff0e2e:
              lVar21 = 0;
            }
            else {
              lVar13 = UMovieScene3DTransformTrack::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                bVar28 = false;
              }
              else {
                bVar28 = true;
              }
              if (!bVar28) goto LAB_141ff0e2e;
            }
            if (lVar21 != 0) {
              UMovieSceneTrack::GenerateTrackTemplate(lVar21,local_1a8);
              local_328 = *(int *)(param_1 + 0x94);
              if (*(char *)(param_1 + 0x90) != '\x01') {
                local_328 = local_328 + 1;
              }
              uStack_324 = 0;
              puVar14 = (undefined1 *)
                        FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
                                  (local_248,local_328,*(undefined8 *)(lVar12 + 0xb8));
              local_2d8[0] = *puVar14;
              local_2d4 = *(undefined8 *)(puVar14 + 4);
              local_2cc = puVar14[0xc];
              local_2c8 = *(undefined8 *)(puVar14 + 0x10);
              local_2c0 = *(undefined8 *)(puVar14 + 0x18);
              local_2b8 = *(undefined4 *)(puVar14 + 0x20);
              local_2b4 = *(undefined4 *)(puVar14 + 0x24);
              local_298 = local_298 & 0xc0;
              local_2a8 = 0;
              local_29c = 0;
              local_310 = 0;
              local_308 = 0;
              local_2b0 = 0x3f800000;
              local_2a0 = 0x80000000;
              local_300 = 0;
              plStack_2f8 = (longlong *)0x0;
              FUN_141f56c20(local_1a8,local_2d8,&local_310,0);
              if ((*(int *)(*(longlong *)((longlong)pvVar10 + uVar25 * 8) + 0x38) < DAT_146acbb78)
                 && (_Init_thread_header(), DAT_146acbb78 == -1)) {
                FMovieSceneAnimTypeID::Unique(&DAT_146acbb70);
                _Init_thread_footer();
              }
              plVar23 = plStack_2f8;
              local_98 = -1;
              do {
                local_98 = local_98 + 1;
                if ((local_98 < 0) || ((int)local_308 <= local_98)) {
                  bVar28 = false;
                }
                else {
                  bVar28 = true;
                }
                if (!bVar28) break;
                plVar18 = (longlong *)(local_310 + (longlong)local_98 * 0x48);
                if ((*(byte *)(local_310 + 0x40 + (longlong)local_98 * 0x48) & 2) == 0) {
                  plVar18 = (longlong *)*plVar18;
                }
              } while (*plVar18 != DAT_146acbb70);
              if ((local_98 < 0) || ((int)local_308 <= local_98)) {
                bVar28 = false;
              }
              else {
                bVar28 = true;
              }
              if (bVar28) {
                if ((local_98 < 0) || ((int)local_308 <= local_98)) goto LAB_141ff0f9f;
                bVar28 = true;
              }
              else {
                local_98 = -1;
LAB_141ff0f9f:
                bVar28 = false;
              }
              if (bVar28) {
                puVar15 = (undefined8 *)(local_310 + (longlong)local_98 * 0x48);
                if ((*(byte *)(local_310 + 0x40 + (longlong)local_98 * 0x48) & 2) == 0) {
                  puVar15 = (undefined8 *)*puVar15;
                }
                if (puVar15 + 2 != &local_218) {
                  local_218 = puVar15[2];
                  uStack_210 = puVar15[3];
                  local_208 = *(undefined4 *)(puVar15 + 4);
                  uStack_204 = *(undefined4 *)((longlong)puVar15 + 0x24);
                  uStack_200 = *(undefined4 *)(puVar15 + 5);
                  uStack_1fc = *(undefined4 *)((longlong)puVar15 + 0x2c);
                  local_1f8 = *(undefined4 *)(puVar15 + 6);
                  uStack_1f4 = *(undefined4 *)((longlong)puVar15 + 0x34);
                  uStack_1f0 = *(undefined4 *)(puVar15 + 7);
                  uStack_1ec = *(undefined4 *)((longlong)puVar15 + 0x3c);
                  local_1e8 = '\x01';
                }
              }
              if (plStack_2f8 != (longlong *)0x0) {
                LOCK();
                plVar18 = plStack_2f8 + 1;
                lVar12 = *plVar18;
                *(int *)plVar18 = (int)*plVar18 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)*plStack_2f8)(plStack_2f8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar23 + 0xc);
                  iVar24 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar24 == 1) {
                    (**(code **)(*plVar23 + 8))(plVar23,1);
                  }
                }
              }
              TArray<TInlineValue<IMovieSceneInterrogationToken,64,8>,FDefaultAllocator>::
              ~TArray<TInlineValue<IMovieSceneInterrogationToken,64,8>,FDefaultAllocator>
                        (&local_310);
              if ((local_c8 & 1) != 0) {
                ppppuVar19 = local_f8;
                if ((local_c8 & 2) == 0) {
                  ppppuVar19 = (undefined8 ****)local_f8[0];
                }
                local_c8 = local_c8 & 0xfe;
                (*(code *)**ppppuVar19)(ppppuVar19,0);
                if ((local_c8 & 2) == 0) {
                  FMemory::Free(local_f8[0]);
                }
              }
              if (local_100 != 0) {
                pbVar22 = (byte *)(local_108 + 0x30);
                iVar24 = local_100;
                do {
                  bVar1 = *pbVar22;
                  if ((bVar1 & 1) != 0) {
                    pbVar20 = pbVar22 + -0x30;
                    if ((bVar1 & 2) == 0) {
                      pbVar20 = *(byte **)(pbVar22 + -0x30);
                    }
                    *pbVar22 = bVar1 & 0xfe;
                    (*(code *)**(undefined8 **)pbVar20)(pbVar20,0);
                    if ((*pbVar22 & 2) == 0) {
                      FMemory::Free(*(undefined8 *)(pbVar22 + -0x30));
                    }
                  }
                  pbVar22 = pbVar22 + 0x38;
                  iVar24 = iVar24 + -1;
                } while (iVar24 != 0);
              }
              if (local_108 != 0) {
                FMemory::Free();
              }
              if (local_118 != 0) {
                FMemory::Free();
              }
              if (local_128 != 0) {
                FMemory::Free();
              }
              if (local_138 != 0) {
                FMemory::Free();
              }
              if (local_148 != 0) {
                FMemory::Free();
              }
              if (local_178 != 0) {
                plVar23 = (longlong *)(local_180 + 0x48);
                iVar24 = local_178;
                do {
                  if (*plVar23 != 0) {
                    FMemory::Free();
                  }
                  plVar23 = plVar23 + 0xb;
                  iVar24 = iVar24 + -1;
                } while (iVar24 != 0);
              }
              if (local_180 != 0) {
                FMemory::Free();
              }
              if (local_190 != 0) {
                FMemory::Free();
              }
              uVar25 = (ulonglong)_tls_index;
              lVar12 = local_320;
            }
            plVar27 = plVar27 + 1;
          } while (plVar27 != local_2f0);
        }
      }
      piVar26 = local_318 + 0xc;
      piVar2 = local_318 + 9;
      param_2 = local_2e0;
      local_318 = piVar26;
    } while (piVar2 != local_2e8);
  }
  local_258 = 0;
  bVar28 = local_1e8 != '\0';
  if (bVar28) {
    local_288 = (undefined4)local_218;
    uStack_284 = local_218._4_4_;
    uStack_280 = (undefined4)uStack_210;
    uStack_27c = uStack_210._4_4_;
    local_278 = CONCAT44(uStack_204,local_208);
    uStack_270 = CONCAT44(uStack_1fc,uStack_200);
    local_268 = CONCAT44(uStack_1f4,local_1f8);
    uStack_260 = CONCAT44(uStack_1ec,uStack_1f0);
    local_258 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x100);
  uStack_1ac = uRam0000000146acb84c & uRam0000000146acb85c;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  local_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1cc = uRam0000000146acb84c;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = _DAT_146acb840 & _DAT_146acb850;
  uStack_1b4 = uRam0000000146acb844 & uRam0000000146acb854;
  uStack_1b0 = uRam0000000146acb848 & uRam0000000146acb858;
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  uVar4 = *(undefined8 *)(param_1 + 0xf8);
  puVar15 = &local_1c8;
  uVar9 = uRam0000000146acb84c;
  if (bVar28) {
    puVar15 = &local_278;
    uVar29 = local_288;
    uVar30 = uStack_284;
    uVar31 = uStack_280;
    uVar9 = uStack_27c;
  }
  uVar5 = *puVar15;
  uVar6 = puVar15[1];
  puVar16 = &local_1b8;
  if (bVar28) {
    puVar16 = (uint *)&local_268;
  }
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  uVar7 = *(undefined8 *)puVar16;
  uVar8 = *(undefined8 *)(puVar16 + 2);
  local_258 = bVar28;
  uVar17 = FMemory::Malloc(0x80);
  *param_2 = uVar17;
  bVar1 = *(byte *)(param_2 + 6);
  *(byte *)(param_2 + 6) = bVar1 | 1;
  puVar15 = param_2;
  if ((bVar1 & 2) == 0) {
    puVar15 = (undefined8 *)*param_2;
  }
  puVar15[4] = uVar3;
  puVar15[5] = uVar4;
  *(undefined1 *)(puVar15 + 1) = 0;
  *puVar15 = &PTR_FUN_144f48268;
  *(undefined1 *)(puVar15 + 2) = 0;
  puVar15[3] = 0;
  puVar15[6] = uVar11;
  *(undefined4 *)(puVar15 + 8) = uVar29;
  *(undefined4 *)((longlong)puVar15 + 0x44) = uVar30;
  *(undefined4 *)(puVar15 + 9) = uVar31;
  *(uint *)((longlong)puVar15 + 0x4c) = uVar9;
  puVar15[10] = uVar5;
  puVar15[0xb] = uVar6;
  puVar15[0xc] = uVar7;
  puVar15[0xd] = uVar8;
  *(bool *)(puVar15 + 0xe) = bVar28;
  return param_2;
}



// FUNCTION 141ff1340 GenerateTemplate body=308 status=ok
// SIG undefined GenerateTemplate(void)

undefined8 * UMovieSceneCameraShakeSection::GenerateTemplate(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    lVar8 = UNodeMappingContainer::GetPrivateStaticClass();
    lVar6 = *(longlong *)(param_1 + 0xe0);
    for (lVar7 = lVar6; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar8) {
        if (lVar6 != 0) {
          uVar3 = *(undefined1 *)(param_1 + 0xec);
          uVar5 = *(undefined4 *)(param_1 + 0xf8);
          uVar1 = *(undefined4 *)(param_1 + 0xe8);
          uVar2 = *(undefined8 *)(param_1 + 0xf0);
          if (*(char *)(param_1 + 0x90) == '\x02') {
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)(param_1 + 0x94);
            if (*(char *)(param_1 + 0x90) != '\x01') {
              iVar10 = *(int *)(param_1 + 0x94) + 1;
            }
          }
          *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
          puVar9 = (undefined8 *)FMemory::Malloc(0x48);
          bVar4 = *(byte *)(param_2 + 6);
          *param_2 = puVar9;
          *(byte *)(param_2 + 6) = bVar4 | 1;
          if ((bVar4 & 2) != 0) {
            puVar9 = param_2;
          }
          *(undefined1 *)(puVar9 + 1) = 0;
          *(undefined1 *)(puVar9 + 2) = 0;
          puVar9[3] = 0;
          *puVar9 = &PTR_FUN_144f48118;
          *(undefined4 *)(puVar9 + 5) = uVar1;
          puVar9[4] = lVar6;
          *(undefined1 *)((longlong)puVar9 + 0x2c) = uVar3;
          puVar9[6] = uVar2;
          *(undefined4 *)(puVar9 + 7) = uVar5;
          *(int *)(puVar9 + 8) = iVar10;
          return param_2;
        }
        break;
      }
    }
  }
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfe | 2;
  return param_2;
}



// FUNCTION 141ff1480 GenerateTemplate body=279 status=ok
// SIG undefined GenerateTemplate(void)

undefined8 *
UMovieSceneLevelVisibilitySection::GenerateTemplate
          (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  void *_Src;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  local_38 = *(int *)(param_1 + 0xf0);
  lVar5 = (longlong)local_38;
  uVar1 = *(undefined1 *)(param_1 + 0xe0);
  pvVar4 = (void *)0x0;
  _Src = *(void **)(param_1 + 0xe8);
  local_40 = (void *)0x0;
  if (local_38 == 0) {
    local_34 = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_40,local_38,0,param_4,&PTR_FUN_144f4a018);
    pvVar4 = local_40;
    ::_guard_xfg_dispatch_icall_nop(local_40,_Src,lVar5 << 3);
  }
  iVar2 = local_38;
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar3 = (undefined8 *)FMemory::Malloc(0x38);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar3;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar3 = param_2;
  }
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 1) = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  *puVar3 = &PTR_FUN_144f4a018;
  *(undefined1 *)(puVar3 + 4) = uVar1;
  puVar3[5] = pvVar4;
  *(int *)(puVar3 + 6) = iVar2;
  *(undefined4 *)((longlong)puVar3 + 0x34) = local_34;
  return param_2;
}



// FUNCTION 141ff15a0 GenerateTemplate body=379 status=ok
// SIG undefined GenerateTemplate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * UMovieSceneParticleSection::GenerateTemplate(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [104];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = &PTR__scalar_deleting_destructor__144f4b6b8;
  FMovieSceneByteChannel::FMovieSceneByteChannel(&local_c8,param_1 + 0xe0);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  local_c8 = &PTR__scalar_deleting_destructor__144f4b368;
  puVar1 = (undefined8 *)FMemory::Malloc(0xb8,8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar1;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar1 = param_2;
  }
  *(undefined1 *)(puVar1 + 1) = local_e0;
  *(undefined1 *)(puVar1 + 2) = local_d8;
  puVar1[3] = local_d0;
  *puVar1 = &PTR__scalar_deleting_destructor__144f4b6b8;
  puVar1[5] = local_c0;
  *(undefined4 *)(puVar1 + 6) = (undefined4)local_b8;
  *(undefined4 *)((longlong)puVar1 + 0x34) = local_b8._4_4_;
  *(undefined1 *)(puVar1 + 7) = local_b0;
  *(undefined1 *)((longlong)puVar1 + 0x39) = local_af;
  puVar1[8] = local_a8;
  *(undefined4 *)(puVar1 + 9) = (undefined4)local_a0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = local_a0._4_4_;
  puVar1[10] = local_98;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x9c) = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  puVar1[4] = &PTR__scalar_deleting_destructor__144f4b368;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_90);
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141ff1720 FUN_141ff1720 body=406 status=ok
// SIG undefined FUN_141ff1720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141ff1720(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_138 [32];
  undefined **local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  uint local_e4;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  longlong local_c0;
  longlong local_b0;
  undefined1 local_98 [104];
  undefined1 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  iVar4 = *(int *)(param_1 + 0x9c);
  local_118 = &PTR_FUN_144f4cc18;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    iVar4 = iVar4 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x94);
  if (*(char *)(param_1 + 0x90) != '\x01') {
    iVar3 = iVar3 + 1;
  }
  FUN_141fcf390(&local_f8,param_1 + 0xe0,iVar3,iVar4);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar2 = (undefined8 *)FMemory::Malloc(0xf8,8);
  *param_2 = puVar2;
  bVar1 = *(byte *)(param_2 + 6);
  *(byte *)(param_2 + 6) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar2 = param_2;
  }
  *(undefined1 *)(puVar2 + 1) = local_110;
  *(undefined1 *)(puVar2 + 2) = local_108;
  puVar2[3] = local_100;
  *puVar2 = &PTR_FUN_144f4cc18;
  *(uint *)((longlong)puVar2 + 0x34) = *(uint *)((longlong)puVar2 + 0x34) & 0xfffffffe;
  puVar2[4] = local_f8;
  *(undefined4 *)(puVar2 + 5) = local_f0;
  *(uint *)((longlong)puVar2 + 0x34) = *(uint *)((longlong)puVar2 + 0x34) | local_e4 & 1;
  puVar2[7] = local_e0;
  *(undefined1 *)(puVar2 + 8) = local_d8;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = local_ec;
  *(undefined4 *)(puVar2 + 6) = local_e8;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(puVar2 + 9,local_d0);
  *(undefined1 *)(puVar2 + 0x1d) = local_30;
  *(undefined4 *)(puVar2 + 0x1e) = local_28;
  *(undefined4 *)((longlong)puVar2 + 0xf4) = local_24;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_98);
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141ff18c0 GenerateTemplate body=75 status=ok
// SIG undefined GenerateTemplate(void)

void UMovieSceneSpawnTrack::GenerateTemplate(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = UMovieScene::GetPrivateStaticClass();
  lVar2 = UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
  if ((lVar2 != 0) && (lVar2 = UMovieScene::FindPossessable(lVar2,param_2), lVar2 != 0)) {
    return;
  }
  UMovieSceneTrack::GenerateTemplate(param_1,param_2);
  return;
}



// FUNCTION 141ff1910 FUN_141ff1910 body=401 status=ok
// SIG undefined FUN_141ff1910(void)

undefined8 * FUN_141ff1910(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 local_res8 [2];
  undefined4 local_res20;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  longlong local_80;
  undefined1 local_68 [8];
  longlong local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [32];
  longlong *local_18;
  
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  cVar5 = FUN_141fe3d20();
  if (cVar5 != '\0') {
    cVar5 = *(char *)(param_1 + 2);
    if (cVar5 == '\0') {
      puVar9 = (undefined4 *)FUN_141fca470(param_3,local_38,param_2);
      puVar7 = *(undefined4 **)(puVar9 + 6);
      if (puVar7 == (undefined4 *)0x0) {
        local_98 = *puVar9;
        uStack_94 = puVar9[1];
        uStack_90 = puVar9[2];
        uStack_8c = puVar9[3];
      }
      else {
        local_98 = *puVar7;
        uStack_94 = puVar7[1];
        uStack_90 = puVar7[2];
        uStack_8c = puVar7[3];
      }
      *(undefined4 *)param_1 = local_98;
      *(undefined4 *)((longlong)param_1 + 4) = uStack_94;
      *(undefined4 *)(param_1 + 1) = uStack_90;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_8c;
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_18 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar2 = (int *)((longlong)local_18 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
    }
    else if (cVar5 == '\x01') {
      FTrackInstancePropertyBindings::FindOrAdd(param_3,local_68,param_2);
      lVar6 = FWeakObjectPtr::Get(local_68);
      if ((((lVar6 == 0) || (local_60 == 0)) || ((*(uint *)(lVar6 + 8) & 0x18000) != 0)) ||
         (puVar8 = (undefined8 *)(*(int *)(lVar6 + 0x44) + local_60), puVar8 == (undefined8 *)0x0))
      {
        *param_1 = local_48;
        param_1[1] = uStack_40;
      }
      else {
        uVar4 = puVar8[1];
        *param_1 = *puVar8;
        param_1[1] = uVar4;
      }
    }
    else if (cVar5 == '\x02') {
      FTrackInstancePropertyBindings::FindOrAdd(param_3,local_88,param_2);
      lVar6 = FWeakObjectPtr::Get(local_88);
      if (((lVar6 != 0) && (local_80 != 0)) &&
         (((*(uint *)(lVar6 + 8) & 0x18000) == 0 &&
          (puVar7 = (undefined4 *)(*(int *)(lVar6 + 0x44) + local_80), puVar7 != (undefined4 *)0x0))
         )) {
        local_res20 = *puVar7;
      }
      local_res8[0] = local_res20;
      FLinearColor::FLinearColor(&local_b8,local_res8);
      *param_1 = local_b8;
      param_1[1] = uStack_b0;
    }
  }
  return param_1;
}



// FUNCTION 141ff1ab0 FUN_141ff1ab0 body=726 status=ok
// SIG undefined FUN_141ff1ab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141ff1ab0(int *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  uint *local_58;
  undefined8 **local_50;
  uint local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146acb9fc) && (_Init_thread_header(&DAT_146acb9fc), DAT_146acb9fc == -1))
  {
    FKeyHandle::FKeyHandle(&DAT_146acb9f8);
    _Init_thread_footer(&DAT_146acb9fc);
  }
  uVar11 = DAT_146acb9f8;
  local_34 = param_1[4];
  puVar10 = (undefined8 *)0x0;
  local_44 = *param_1;
  iStack_40 = param_1[1];
  iStack_3c = param_1[2];
  iStack_38 = param_1[3];
  plVar1 = *(longlong **)(param_2 + 0x10);
  local_48 = DAT_146acb9f8;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    iVar6 = GetTypeHash(&local_44);
    uVar13 = iVar6 - uVar11 ^ uVar11 >> 0xd;
    uVar12 = (-0x61c88647 - uVar13) - uVar11 ^ uVar13 << 8;
    uVar11 = (uVar11 - uVar12) - uVar13 ^ uVar12 >> 0xd;
    uVar13 = (uVar13 - uVar12) - uVar11 ^ uVar11 >> 0xc;
    uVar12 = (uVar12 - uVar13) - uVar11 ^ uVar13 << 0x10;
    uVar11 = (uVar11 - uVar12) - uVar13 ^ uVar12 >> 5;
    uVar13 = (uVar13 - uVar12) - uVar11 ^ uVar11 >> 3;
    uVar12 = (uVar12 - uVar13) - uVar11 ^ uVar13 << 10;
    plVar7 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar7 = plVar1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    (((longlong)(int)((uVar11 - uVar12) - uVar13) ^ (ulonglong)(uVar12 >> 0xf)) &
                    (longlong)(int)plVar1[9] - 1U) * 4);
    if (iVar6 != -1) {
      do {
        puVar9 = (undefined8 *)(*plVar1 + (longlong)iVar6 * 0x28);
        if (((*(uint *)(*plVar1 + (longlong)iVar6 * 0x28) == local_48) &&
            (*(int *)((longlong)puVar9 + 0x14) == local_34)) &&
           (((*(int *)(puVar9 + 1) == iStack_40 && *(int *)((longlong)puVar9 + 0xc) == iStack_3c) &&
            *(int *)(puVar9 + 2) == iStack_38) && local_44 == *(int *)((longlong)puVar9 + 4))) {
          if (iVar6 != -1) goto LAB_141ff1c4e;
          break;
        }
        iVar6 = *(int *)(puVar9 + 4);
      } while (iVar6 != -1);
    }
  }
  puVar9 = puVar10;
LAB_141ff1c4e:
  puVar8 = puVar9 + 3;
  if (puVar9 == (undefined8 *)0x0) {
    puVar8 = puVar10;
  }
  if (puVar8 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)operator_new(0xc70);
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined2 *)(puVar9 + 1) = 0;
      *puVar9 = &PTR_FUN_144f48190;
      puVar9[0x182] = 0;
      puVar9[0x184] = 0;
      uVar2 = uRam00000001468b5b78;
      puVar9[0x186] = _DAT_1468b5b70;
      puVar9[0x187] = uVar2;
      uVar2 = uRam00000001468b5b88;
      puVar9[0x188] = _DAT_1468b5b80;
      puVar9[0x189] = uVar2;
      uVar5 = uRam00000001468b5b9c;
      uVar4 = uRam00000001468b5b98;
      uVar3 = uRam00000001468b5b94;
      *(undefined4 *)(puVar9 + 0x18a) = _DAT_1468b5b90;
      *(undefined4 *)((longlong)puVar9 + 0xc54) = uVar3;
      *(undefined4 *)(puVar9 + 0x18b) = uVar4;
      *(undefined4 *)((longlong)puVar9 + 0xc5c) = uVar5;
      *(undefined4 *)(puVar9 + 0x18c) = 0;
      *(undefined4 *)((longlong)puVar9 + 0xc64) = 0xffffffff;
      *(undefined4 *)(puVar9 + 0x18d) = 0;
      puVar10 = puVar9;
    }
    local_58 = &local_48;
    local_50 = &local_res10;
    local_res10 = puVar10;
    FUN_140609380(*(undefined8 *)(param_2 + 0x10),local_res8,&local_58,0);
    if (local_res10 != (undefined8 *)0x0) {
      (**(code **)*local_res10)(local_res10,1);
    }
    return puVar10;
  }
  return (undefined8 *)*puVar8;
}



// FUNCTION 141ff1d90 GetAllParticleSections body=110 status=ok
// SIG undefined GetAllParticleSections(void)

undefined8 * UMovieSceneParticleTrack::GetAllParticleSections(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x60);
  _Src = *(void **)(param_1 + 0x58);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
  return param_2;
}



// FUNCTION 141ff1e00 GetAnimTypeID body=265 status=ok
// SIG undefined GetAnimTypeID(void)

undefined8 *
TMovieSceneAnimTypeIDContainer<FObjectKey>::GetAnimTypeID
          (int *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  
  do {
    LOCK();
    iVar1 = *param_1;
    *param_1 = 1;
    UNLOCK();
  } while (iVar1 != 0);
  piVar2 = *(int **)(param_1 + 6);
  iVar1 = param_1[8];
  if (piVar2 != piVar2 + (longlong)iVar1 * 2) {
    piVar5 = piVar2;
    do {
      if ((*piVar5 == *param_3) && (piVar5[1] == param_3[1])) {
        iVar4 = (int)((longlong)piVar5 - (longlong)piVar2 >> 3);
        if (iVar4 != -1) {
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)iVar4 * 8);
          LOCK();
          *param_1 = 0;
          UNLOCK();
          *param_2 = uVar3;
          return param_2;
        }
        break;
      }
      piVar5 = piVar5 + 2;
    } while (piVar5 != piVar2 + (longlong)iVar1 * 2);
  }
  param_1[8] = iVar1 + 1;
  if (param_1[9] < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 6,iVar1);
  }
  *(undefined8 *)((longlong)iVar1 * 8 + *(longlong *)(param_1 + 6)) = *(undefined8 *)param_3;
  uVar3 = FMovieSceneAnimTypeID::GenerateHash(param_1,param_1[4]);
  iVar1 = param_1[4];
  param_1[4] = iVar1 + 1;
  if (param_1[5] < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = uVar3;
  LOCK();
  *param_1 = 0;
  UNLOCK();
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 141ff1f10 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FEventParameterReader::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FEventParameterReader",0x2c);
  return param_2;
}



// FUNCTION 141ff1f50 FUN_141ff1f50 body=522 status=ok
// SIG undefined FUN_141ff1f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141ff1f50(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0 [192];
  ulonglong local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      local_24 = 0;
      local_30 = 0;
      local_28 = 0;
      if (param_2 != (longlong *)0x0) {
        FUN_140749cd0(param_2,local_f0,0);
      }
      puVar5 = local_f0;
      if (local_30 != 0) {
        puVar5 = (undefined1 *)0x0;
      }
      plVar6 = (longlong *)((ulonglong)puVar5 | local_30);
      plVar4 = plVar6 + local_28;
      if (plVar6 != plVar4) {
        do {
          plVar1 = (longlong *)*plVar6;
          if (plVar1[3] == *(longlong *)(param_1 + 0x40)) {
            if (local_30 == 0) {
              return plVar1;
            }
            FMemory::Free(local_30);
            return plVar1;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar4);
      }
      goto joined_r0x000141ff2115;
    }
  }
  else if (*(longlong *)(param_1 + 0x40) == 0) {
    cVar2 = (**(code **)(*(longlong *)param_2[0x2d] + 0x440))
                      ((longlong *)param_2[0x2d],*(undefined8 *)(param_1 + 0x18));
    if (cVar2 != '\0') goto LAB_141ff2064;
  }
  else {
    local_24 = 0;
    local_30 = 0;
    local_28 = 0;
    if (param_2 != (longlong *)0x0) {
      FUN_140749cd0(param_2,local_f0,0);
    }
    puVar5 = local_f0;
    if (local_30 != 0) {
      puVar5 = (undefined1 *)0x0;
    }
    plVar6 = (longlong *)((ulonglong)puVar5 | local_30);
    plVar4 = plVar6 + local_28;
    for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
      plVar1 = (longlong *)*plVar6;
      if ((plVar1[3] == *(longlong *)(param_1 + 0x40)) &&
         (cVar2 = (**(code **)(*plVar1 + 0x440))(plVar1,*(undefined8 *)(param_1 + 0x18)),
         cVar2 != '\0')) {
        if (local_30 == 0) {
          return plVar1;
        }
        FMemory::Free();
        return plVar1;
      }
    }
joined_r0x000141ff2115:
    if (local_30 != 0) {
      FMemory::Free(local_30);
    }
  }
  lVar3 = (**(code **)(*param_2 + 0x3b8))(param_2);
  if (lVar3 != 0) {
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x3b8))(param_2);
    return plVar4;
  }
LAB_141ff2064:
  return (longlong *)param_2[0x2d];
}



// FUNCTION 141ff2160 GetAudioComponentForRow body=159 status=ok
// SIG undefined GetAudioComponentForRow(void)

undefined8
FCachedAudioTrackData::GetAudioComponentForRow(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  int local_res10 [2];
  undefined8 local_res18 [2];
  
  if (*(int *)(param_1 + 0x10) <= param_2) {
    return 0;
  }
  plVar3 = (longlong *)((longlong)param_2 * 0x50 + *(longlong *)(param_1 + 8));
  local_res18[0] = param_3;
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(plVar3,local_res10,local_res18);
  if (local_res10[0] != -1) {
    lVar1 = *plVar3 + (longlong)local_res10[0] * 0x18;
    if (lVar1 != 0) {
      local_res8 = *(undefined4 *)(lVar1 + 8);
      local_resc = *(undefined4 *)(lVar1 + 0xc);
      uVar2 = FWeakObjectPtr::Get(&local_res8);
      return uVar2;
    }
  }
  local_res8 = 0xffffffff;
  local_resc = 0;
  uVar2 = FWeakObjectPtr::Get(&local_res8);
  return uVar2;
}



// FUNCTION 141ff2200 GetAutoSizeRange body=456 status=ok
// SIG undefined GetAutoSizeRange(void)

undefined1 * UMovieSceneAudioSection::GetAutoSizeRange(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    fVar9 = (float)FUN_141f53de0();
    uVar6 = UMovieScene::GetPrivateStaticClass();
    lVar7 = UObjectBaseUtility::GetTypedOuter(param_1,uVar6);
    iVar2 = (int)*(undefined8 *)(lVar7 + 0xb8);
    uVar3 = (uint)((ulonglong)*(undefined8 *)(lVar7 + 0xb8) >> 0x20);
    auVar11._0_8_ = (double)iVar2 / (double)(int)uVar3;
    lVar7 = (longlong)auVar11._0_8_;
    uVar4 = uVar3;
    if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != auVar11._0_8_)) {
      auVar11._8_8_ = auVar11._0_8_;
      uVar4 = movmskpd(uVar3,auVar11);
      uVar4 = uVar4 & 1;
      auVar11._0_8_ = (double)(longlong)(lVar7 - (ulonglong)uVar4);
    }
    if (fVar9 != 10000.0) {
      auVar11._0_8_ = ((double)iVar2 * (double)fVar9) / (double)(int)uVar3;
      lVar7 = (longlong)auVar11._0_8_;
      if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != auVar11._0_8_)) {
        auVar10._8_8_ = auVar11._0_8_;
        auVar10._0_8_ = auVar11._0_8_;
        uVar4 = movmskpd(uVar4,auVar10);
        auVar11._0_8_ = (double)(longlong)(lVar7 - (ulonglong)(uVar4 & 1));
      }
    }
    iVar2 = *(int *)(param_1 + 0x94);
    cVar1 = *(char *)(param_1 + 0x90);
    iVar5 = iVar2;
    if (cVar1 != '\x01') {
      iVar5 = iVar2 + 1;
    }
    *param_2 = 1;
    iVar8 = iVar2 + 1;
    if (cVar1 == '\x01') {
      iVar8 = iVar2;
    }
    *(int *)(param_2 + 4) = iVar8;
    param_2[8] = 0;
    *(int *)(param_2 + 0xc) = iVar5 + (int)auVar11._0_8_;
    param_2[0x10] = 1;
    return param_2;
  }
  *param_2 = 2;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[8] = 2;
  *(undefined4 *)(param_2 + 0xc) = 0;
  param_2[0x10] = 1;
  return param_2;
}



// FUNCTION 141ff23d0 GetAutoSizeRange body=230 status=ok
// SIG undefined GetAutoSizeRange(void)

undefined1 *
UMovieSceneSkeletalAnimationSection::GetAutoSizeRange(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  uVar5 = UMovieScene::GetPrivateStaticClass();
  lVar6 = UObjectBaseUtility::GetTypedOuter(param_1,uVar5);
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = *(float *)(*(longlong *)(param_1 + 0xe0) + 0x90);
  }
  auVar9._0_8_ = ((double)(int)*(undefined8 *)(lVar6 + 0xb8) * (double)fVar8) /
                 (double)(int)((ulonglong)*(undefined8 *)(lVar6 + 0xb8) >> 0x20);
  lVar6 = (longlong)auVar9._0_8_;
  if ((lVar6 != -0x8000000000000000) && ((double)lVar6 != auVar9._0_8_)) {
    auVar9._8_8_ = auVar9._0_8_;
    uVar3 = movmskpd(0,auVar9);
    auVar9._0_8_ = (double)(longlong)(lVar6 - (ulonglong)(uVar3 & 1));
  }
  iVar2 = *(int *)(param_1 + 0x94);
  cVar1 = *(char *)(param_1 + 0x90);
  iVar4 = iVar2;
  if (cVar1 != '\x01') {
    iVar4 = iVar2 + 1;
  }
  *param_2 = 1;
  iVar7 = iVar2 + 1;
  if (cVar1 == '\x01') {
    iVar7 = iVar2;
  }
  *(int *)(param_2 + 4) = iVar7;
  param_2[8] = 0;
  *(int *)(param_2 + 0xc) = iVar4 + (int)auVar9._0_8_;
  param_2[0x10] = 1;
  return param_2;
}



// FUNCTION 141ff24c0 FUN_141ff24c0 body=314 status=ok
// SIG undefined FUN_141ff24c0(void)

void FUN_141ff24c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((*(longlong *)(param_1 + 0xe0) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x38) != 0)) {
    plVar4 = (longlong *)FUN_1422ad510();
    lVar6 = *plVar4;
    lVar8 = (longlong)(int)plVar4[1] * 0x18 + lVar6;
    for (; lVar6 != lVar8; lVar6 = lVar6 + 0x18) {
      uVar7 = 0;
      plVar4 = *(longlong **)(lVar6 + 8);
      uVar9 = (longlong)*(int *)(lVar6 + 0x10) & 0x1fffffffffffffff;
      if (plVar4 + *(int *)(lVar6 + 0x10) < plVar4) {
        uVar9 = uVar7;
      }
      if (uVar9 != 0) {
        do {
          plVar2 = (longlong *)*param_2;
          iVar1 = (int)param_2[1];
          lVar3 = *plVar4;
          for (plVar5 = plVar2; plVar5 != plVar2 + iVar1; plVar5 = plVar5 + 1) {
            if (*plVar5 == lVar3) {
              if ((int)((longlong)plVar5 - (longlong)plVar2 >> 3) != -1) goto LAB_141ff25b6;
              break;
            }
          }
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
          }
          *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar3;
LAB_141ff25b6:
          plVar4 = plVar4 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar9);
      }
    }
  }
  return;
}



// FUNCTION 141ff2600 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_141f346d0(param_2);
  return param_2;
}



// FUNCTION 141ff2620 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_141fc9ea0(param_2);
  return param_2;
}



// FUNCTION 141ff2640 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_141fc9f10(param_2);
  return param_2;
}



// FUNCTION 141ff2660 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_141f34760(param_2);
  return param_2;
}



// FUNCTION 141ff2680 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_141fc9f80(param_2);
  return param_2;
}



// FUNCTION 141ff26a0 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_141f347f0(param_2);
  return param_2;
}



// FUNCTION 141ff26c0 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_141f34880(param_2);
  return param_2;
}



// FUNCTION 141ff26e0 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_141f34910(param_2);
  return param_2;
}



// FUNCTION 141ff2700 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_141f349a0(param_2);
  return param_2;
}



// FUNCTION 141ff2720 FUN_141ff2720 body=200 status=ok
// SIG undefined FUN_141ff2720(void)

undefined8 * FUN_141ff2720(undefined8 *param_1,int param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146acbb48) {
    _Init_thread_header(&DAT_146acbb48);
    if (DAT_146acbb48 == -1) {
      FName::FName(&DAT_146acbb30,"PreEvaluation",1);
      FName::FName(&DAT_146acbb38,"SpawnObjects",1);
      FName::FName(&DAT_146acbb40,"PostEvaluation",1);
      _Init_thread_footer(&DAT_146acbb48);
    }
  }
  *param_1 = *(undefined8 *)(&DAT_146acbb30 + (longlong)param_2 * 8);
  return param_1;
}



// FUNCTION 141ff27f0 GetInitialValue body=246 status=ok
// SIG undefined GetInitialValue(void)

int TMovieSceneInitialValueStore<float>::GetInitialValue(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  undefined8 local_res8;
  
  local_res8._4_4_ = 0;
  iVar7 = -1;
  local_res8 = 0xffffffff;
  if (param_1[2] != 0) {
    FWeakObjectPtr::operator=(&local_res8);
    iVar7 = (int)local_res8;
  }
  uVar5 = local_res8;
  plVar3 = (longlong *)*param_1;
  piVar6 = (int *)plVar3[3];
  piVar1 = piVar6 + (longlong)(int)plVar3[4] * 3;
  while( true ) {
    if (piVar6 == piVar1) {
      iVar7 = (**(code **)(*plVar3 + 0x28))(plVar3,param_1[2],param_1[3]);
      if (param_1[3] != 0) {
        lVar4 = *param_1;
        iVar2 = *(int *)(lVar4 + 0x20);
        *(int *)(lVar4 + 0x20) = iVar2 + 1;
        if (*(int *)(lVar4 + 0x24) < iVar2 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(lVar4 + 0x18,iVar2);
        }
        lVar4 = *(longlong *)(lVar4 + 0x18);
        *(int *)(lVar4 + 8 + (longlong)iVar2 * 0xc) = iVar7;
        *(undefined8 *)(lVar4 + (longlong)iVar2 * 0xc) = uVar5;
      }
      return iVar7;
    }
    if ((*piVar6 == iVar7) && (piVar6[1] == local_res8._4_4_)) break;
    piVar6 = piVar6 + 3;
  }
  return piVar6[2];
}



// FUNCTION 141ff28f0 GetInitialValue body=296 status=ok
// SIG undefined GetInitialValue(void)

int * TMovieSceneInitialValueStore<F3DTransformTrackToken>::GetInitialValue
                (longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  undefined8 local_res8;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  
  iVar7 = -1;
  local_res8._4_4_ = 0;
  local_res8 = 0xffffffff;
  if (param_1[2] != 0) {
    FWeakObjectPtr::operator=(&local_res8);
    iVar7 = (int)local_res8;
  }
  uVar3 = local_res8;
  plVar1 = (longlong *)*param_1;
  piVar4 = (int *)plVar1[3];
  piVar6 = piVar4 + (longlong)(int)plVar1[4] * 0xb;
  do {
    if (piVar4 == piVar6) {
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_38,param_1[2],param_1[3]);
      if (param_1[3] != 0) {
        lVar2 = *param_1;
        iVar7 = *(int *)(lVar2 + 0x20);
        *(int *)(lVar2 + 0x20) = iVar7 + 1;
        if (*(int *)(lVar2 + 0x24) < iVar7 + 1) {
          TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow
                    (lVar2 + 0x18,iVar7);
        }
        puVar5 = (undefined8 *)((longlong)iVar7 * 0x2c + *(longlong *)(lVar2 + 0x18));
        *puVar5 = uVar3;
        puVar5[1] = CONCAT44(iStack_34,local_38);
        puVar5[2] = CONCAT44(iStack_2c,iStack_30);
        puVar5[3] = CONCAT44(iStack_24,local_28);
        puVar5[4] = CONCAT44(iStack_1c,iStack_20);
        *(int *)(puVar5 + 5) = local_18;
      }
LAB_141ff29ee:
      *param_2 = local_38;
      param_2[1] = iStack_34;
      param_2[2] = iStack_30;
      param_2[3] = iStack_2c;
      param_2[4] = local_28;
      param_2[5] = iStack_24;
      param_2[6] = iStack_20;
      param_2[7] = iStack_1c;
      param_2[8] = local_18;
      return param_2;
    }
    if ((*piVar4 == iVar7) && (piVar4[1] == local_res8._4_4_)) {
      local_38 = piVar4[2];
      iStack_34 = piVar4[3];
      iStack_30 = piVar4[4];
      iStack_2c = piVar4[5];
      local_18 = piVar4[10];
      local_28 = piVar4[6];
      iStack_24 = piVar4[7];
      iStack_20 = piVar4[8];
      iStack_1c = piVar4[9];
      goto LAB_141ff29ee;
    }
    piVar4 = piVar4 + 0xb;
  } while( true );
}



// FUNCTION 141ff2a20 GetInitialValue body=256 status=ok
// SIG undefined GetInitialValue(void)

int * TMovieSceneInitialValueStore<FLinearColor>::GetInitialValue(longlong *param_1,int *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  undefined8 local_res8;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  iVar7 = -1;
  local_res8._4_4_ = 0;
  local_res8 = 0xffffffff;
  if (param_1[2] != 0) {
    FWeakObjectPtr::operator=(&local_res8);
    iVar7 = (int)local_res8;
  }
  uVar5 = local_res8;
  plVar3 = (longlong *)*param_1;
  piVar6 = (int *)plVar3[3];
  piVar1 = piVar6 + (longlong)(int)plVar3[4] * 6;
  do {
    if (piVar6 == piVar1) {
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_18,param_1[2],param_1[3]);
      if (param_1[3] != 0) {
        lVar4 = *param_1;
        iVar7 = *(int *)(lVar4 + 0x20);
        *(int *)(lVar4 + 0x20) = iVar7 + 1;
        if (*(int *)(lVar4 + 0x24) < iVar7 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(lVar4 + 0x18,iVar7);
        }
        lVar4 = *(longlong *)(lVar4 + 0x18);
        *(undefined8 *)(lVar4 + (longlong)iVar7 * 0x18) = uVar5;
        puVar2 = (undefined8 *)(lVar4 + 8 + (longlong)iVar7 * 0x18);
        *puVar2 = CONCAT44(iStack_14,local_18);
        puVar2[1] = CONCAT44(iStack_c,iStack_10);
      }
LAB_141ff2b03:
      *param_2 = local_18;
      param_2[1] = iStack_14;
      param_2[2] = iStack_10;
      param_2[3] = iStack_c;
      return param_2;
    }
    if ((*piVar6 == iVar7) && (piVar6[1] == local_res8._4_4_)) {
      local_18 = piVar6[2];
      iStack_14 = piVar6[3];
      iStack_10 = piVar6[4];
      iStack_c = piVar6[5];
      goto LAB_141ff2b03;
    }
    piVar6 = piVar6 + 6;
  } while( true );
}



// FUNCTION 141ff2b20 GetInitialValue body=327 status=ok
// SIG undefined GetInitialValue(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
TMovieSceneInitialValueStore<FTransform>::GetInitialValue(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  iVar7 = -1;
  local_68._4_4_ = 0;
  local_68 = 0xffffffff;
  if (param_1[2] != 0) {
    FWeakObjectPtr::operator=(&local_68);
    iVar7 = (int)local_68;
  }
  uVar3 = local_68;
  plVar1 = (longlong *)*param_1;
  piVar4 = (int *)plVar1[3];
  piVar6 = piVar4 + (longlong)(int)plVar1[4] * 0x10;
  do {
    if (piVar4 == piVar6) {
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_58,param_1[2],param_1[3]);
      if (param_1[3] != 0) {
        lVar2 = *param_1;
        iVar7 = *(int *)(lVar2 + 0x20);
        *(int *)(lVar2 + 0x20) = iVar7 + 1;
        if (*(int *)(lVar2 + 0x24) < iVar7 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(lVar2 + 0x18,iVar7);
        }
        puVar5 = (undefined8 *)((longlong)iVar7 * 0x40 + *(longlong *)(lVar2 + 0x18));
        *puVar5 = uVar3;
        puVar5[2] = local_58;
        puVar5[3] = uStack_50;
        puVar5[4] = local_48;
        puVar5[5] = uStack_40;
        puVar5[6] = CONCAT44(iStack_34,local_38);
        puVar5[7] = CONCAT44(iStack_2c,iStack_30);
      }
      *param_2 = local_58;
      param_2[1] = uStack_50;
      param_2[2] = local_48;
      param_2[3] = uStack_40;
LAB_141ff2c36:
      *(int *)(param_2 + 4) = local_38;
      *(int *)((longlong)param_2 + 0x24) = iStack_34;
      *(int *)(param_2 + 5) = iStack_30;
      *(int *)((longlong)param_2 + 0x2c) = iStack_2c;
      return param_2;
    }
    if ((*piVar4 == iVar7) && (piVar4[1] == local_68._4_4_)) {
      uVar3 = *(undefined8 *)(piVar4 + 6);
      *param_2 = *(undefined8 *)(piVar4 + 4);
      param_2[1] = uVar3;
      uVar3 = *(undefined8 *)(piVar4 + 10);
      param_2[2] = *(undefined8 *)(piVar4 + 8);
      param_2[3] = uVar3;
      local_38 = piVar4[0xc];
      iStack_34 = piVar4[0xd];
      iStack_30 = piVar4[0xe];
      iStack_2c = piVar4[0xf];
      goto LAB_141ff2c36;
    }
    piVar4 = piVar4 + 0x10;
  } while( true );
}



// FUNCTION 141ff2c70 GetInitialValue body=256 status=ok
// SIG undefined GetInitialValue(void)

undefined8 *
TMovieSceneInitialValueStore<FVector2D>::GetInitialValue(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  
  iVar7 = -1;
  local_res8._4_4_ = 0;
  local_res8 = 0xffffffff;
  if (param_1[2] != 0) {
    FWeakObjectPtr::operator=(&local_res8);
    iVar7 = (int)local_res8;
  }
  uVar3 = local_res8;
  plVar1 = (longlong *)*param_1;
  piVar4 = (int *)plVar1[3];
  piVar6 = piVar4 + (longlong)(int)plVar1[4] * 4;
  while( true ) {
    if (piVar4 == piVar6) {
      (**(code **)(*plVar1 + 0x28))(plVar1,local_res18,param_1[2],param_1[3]);
      if (param_1[3] != 0) {
        lVar2 = *param_1;
        iVar7 = *(int *)(lVar2 + 0x20);
        *(int *)(lVar2 + 0x20) = iVar7 + 1;
        if (*(int *)(lVar2 + 0x24) < iVar7 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x18,iVar7);
        }
        puVar5 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar2 + 0x18));
        *puVar5 = uVar3;
        puVar5[1] = local_res18[0];
      }
      *param_2 = local_res18[0];
      return param_2;
    }
    if ((*piVar4 == iVar7) && (piVar4[1] == local_res8._4_4_)) break;
    piVar4 = piVar4 + 4;
  }
  *param_2 = *(undefined8 *)(piVar4 + 2);
  return param_2;
}



// FUNCTION 141ff2d70 GetInitialValue body=261 status=ok
// SIG undefined GetInitialValue(void)

int * TMovieSceneInitialValueStore<FVector4>::GetInitialValue(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  undefined8 local_res8;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  iVar7 = -1;
  local_res8._4_4_ = 0;
  local_res8 = 0xffffffff;
  if (param_1[2] != 0) {
    FWeakObjectPtr::operator=(&local_res8);
    iVar7 = (int)local_res8;
  }
  uVar3 = local_res8;
  plVar1 = (longlong *)*param_1;
  piVar4 = (int *)plVar1[3];
  piVar6 = piVar4 + (longlong)(int)plVar1[4] * 8;
  do {
    if (piVar4 == piVar6) {
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_18,param_1[2],param_1[3]);
      if (param_1[3] != 0) {
        lVar2 = *param_1;
        iVar7 = *(int *)(lVar2 + 0x20);
        *(int *)(lVar2 + 0x20) = iVar7 + 1;
        if (*(int *)(lVar2 + 0x24) < iVar7 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(lVar2 + 0x18,iVar7);
        }
        puVar5 = (undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)(lVar2 + 0x18));
        *puVar5 = uVar3;
        puVar5[2] = CONCAT44(iStack_14,local_18);
        puVar5[3] = CONCAT44(iStack_c,iStack_10);
      }
LAB_141ff2e58:
      *param_2 = local_18;
      param_2[1] = iStack_14;
      param_2[2] = iStack_10;
      param_2[3] = iStack_c;
      return param_2;
    }
    if ((*piVar4 == iVar7) && (piVar4[1] == local_res8._4_4_)) {
      local_18 = piVar4[4];
      iStack_14 = piVar4[5];
      iStack_10 = piVar4[6];
      iStack_c = piVar4[7];
      goto LAB_141ff2e58;
    }
    piVar4 = piVar4 + 8;
  } while( true );
}



// FUNCTION 141ff2e80 GetInitialValue body=291 status=ok
// SIG undefined GetInitialValue(void)

undefined8 *
TMovieSceneInitialValueStore<FVector>::GetInitialValue(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  undefined8 local_res8;
  undefined8 local_18;
  int local_10;
  
  iVar6 = -1;
  local_res8._4_4_ = 0;
  local_res8 = 0xffffffff;
  if (param_1[2] != 0) {
    FWeakObjectPtr::operator=(&local_res8);
    iVar6 = (int)local_res8;
  }
  uVar4 = local_res8;
  plVar2 = (longlong *)*param_1;
  piVar5 = (int *)plVar2[3];
  piVar1 = piVar5 + (longlong)(int)plVar2[4] * 5;
  do {
    if (piVar5 == piVar1) {
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_18,param_1[2],param_1[3]);
      if (param_1[3] != 0) {
        lVar3 = *param_1;
        iVar6 = *(int *)(lVar3 + 0x20);
        *(int *)(lVar3 + 0x20) = iVar6 + 1;
        if (*(int *)(lVar3 + 0x24) < iVar6 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeGrow(lVar3 + 0x18,iVar6);
        }
        lVar3 = *(longlong *)(lVar3 + 0x18);
        *(undefined8 *)(lVar3 + (longlong)iVar6 * 0x14) = uVar4;
        lVar3 = lVar3 + (longlong)iVar6 * 0x14;
        *(undefined8 *)(lVar3 + 8) = local_18;
        *(int *)(lVar3 + 0x10) = local_10;
      }
LAB_141ff2f7f:
      *param_2 = local_18;
      *(int *)(param_2 + 1) = local_10;
      return param_2;
    }
    if ((*piVar5 == iVar6) && (piVar5[1] == local_res8._4_4_)) {
      local_18 = *(undefined8 *)(piVar5 + 2);
      local_10 = piVar5[4];
      goto LAB_141ff2f7f;
    }
    piVar5 = piVar5 + 5;
  } while( true );
}



// FUNCTION 141ff2fb0 FUN_141ff2fb0 body=627 status=ok
// SIG undefined FUN_141ff2fb0(void)

void FUN_141ff2fb0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int local_res8;
  undefined4 local_resc;
  int local_res10 [2];
  longlong local_c8 [2];
  undefined **local_b8;
  longlong *local_b0;
  byte local_8f;
  longlong local_28;
  longlong local_20;
  
  plVar2 = (longlong *)FSoftObjectPath::TryLoad();
  if (plVar2 == (longlong *)0x0) {
LAB_141ff3016:
    plVar2 = (longlong *)0x0;
  }
  else {
    lVar3 = FUN_14171c950();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141ff3016;
  }
  FWeakObjectPtr::operator=(&local_res8,plVar2);
  *(int *)(param_2 + 1) = local_res8;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_resc;
  (**(code **)*param_2)(param_2);
  uVar4 = (**(code **)(*param_2 + 0x10))(param_2);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if ((int)(~(*(int *)((longlong)plVar2 + 0x44) - 1U) &
           (int)plVar2[8] + -1 + *(int *)((longlong)plVar2 + 0x44)) < 1) {
    return;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  FArchive::FArchive(&local_b8);
  local_28 = 0;
  local_b8 = &PTR_FUN_144f4e4d0;
  local_20 = param_1 + 0x18;
  FArchive::SetIsLoading(&local_b8,1);
  FArchive::UsingCustomVersion(&local_b8,&DAT_1464e8630);
  if (7 < *(int *)(local_20 + 8)) {
    local_res8 = 0;
    if ((int *)local_b0[1] < (int *)*local_b0 + 1) {
      (*(code *)local_b8[10])(&local_b8,&local_res8,4);
      if ((local_8f & 0x10) != 0) {
        FArchive::ByteSwap(&local_b8,&local_res8,4);
      }
    }
    else {
      local_res8 = *(int *)*local_b0;
      *local_b0 = *local_b0 + 4;
    }
    if (local_res8 == -0x5e4d3c2c) {
      local_res10[0] = 0;
      if ((int *)local_b0[1] < (int *)*local_b0 + 1) {
        (*(code *)local_b8[10])(&local_b8,local_res10,4);
        if ((local_8f & 0x10) != 0) {
          FArchive::ByteSwap(&local_b8,local_res10,4);
        }
      }
      else {
        local_res10[0] = *(int *)*local_b0;
        *local_b0 = *local_b0 + 4;
      }
      lVar3 = local_28;
      local_28 = (longlong)local_res10[0];
      local_c8[0] = 0;
      local_c8[1] = 0;
      FCustomVersionContainer::Serialize(local_c8,&local_b8,3);
      (*(code *)local_b8[0x25])(&local_b8,local_c8);
      local_28 = lVar3;
      if (local_c8[0] != 0) {
        FMemory::Free();
      }
      goto LAB_141ff31e2;
    }
  }
  puVar5 = (undefined8 *)FName::FName(&local_res8,"EventParameter",1);
  FArchive::SetCustomVersion(&local_b8,&DAT_1464e8630,0,*puVar5);
  local_28 = 0;
LAB_141ff31e2:
  (**(code **)(*plVar2 + 0x2a0))(plVar2,&local_b8,uVar4,plVar2,0,0);
  FArchive::~FArchive(&local_b8);
  return;
}



// FUNCTION 141ff3230 FUN_141ff3230 body=5708 status=ok
// SIG undefined FUN_141ff3230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141ff3230(ulonglong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined ******ppppppuVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined *******pppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  char cVar17;
  undefined1 auStack_ab8 [32];
  undefined4 local_a98;
  undefined4 uStack_a94;
  ulonglong local_a90;
  undefined *****local_a88;
  undefined *****local_a80;
  char local_a78;
  undefined *****local_a70;
  char local_a68;
  undefined *****local_a60;
  char local_a58;
  undefined *****local_a50;
  char local_a48;
  longlong *local_a40;
  longlong *local_a38;
  longlong *local_a30;
  longlong local_a28;
  longlong *local_a20;
  longlong local_a18;
  undefined8 local_a10;
  undefined1 local_a08;
  undefined8 local_a00;
  undefined1 local_9f8;
  undefined ****local_9f0;
  undefined1 local_9e8;
  undefined8 local_9e0;
  undefined1 local_9d8;
  undefined8 local_9d0;
  undefined1 local_9c8;
  undefined *****local_9c0;
  undefined1 local_9b8;
  undefined8 local_9b0;
  undefined1 local_9a8;
  undefined8 local_9a0;
  undefined1 local_998;
  undefined ****local_990;
  undefined1 local_988;
  undefined8 local_980;
  undefined1 local_978;
  undefined8 local_970;
  undefined1 local_968;
  undefined4 local_958;
  undefined4 uStack_954;
  int iStack_950;
  undefined4 uStack_94c;
  undefined4 local_948;
  undefined4 uStack_944;
  int iStack_940;
  undefined4 uStack_93c;
  undefined4 local_938;
  undefined4 uStack_934;
  int iStack_930;
  undefined4 uStack_92c;
  undefined4 local_928;
  undefined4 uStack_924;
  int iStack_920;
  undefined4 uStack_91c;
  undefined4 local_918;
  undefined4 uStack_914;
  int iStack_910;
  undefined4 uStack_90c;
  undefined4 local_908;
  undefined4 uStack_904;
  int iStack_900;
  undefined4 uStack_8fc;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  int iStack_8f0;
  undefined4 uStack_8ec;
  undefined4 local_8e8;
  undefined4 uStack_8e4;
  int iStack_8e0;
  undefined4 uStack_8dc;
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  int iStack_8d0;
  undefined4 uStack_8cc;
  longlong *local_8c8 [2];
  longlong local_8b8;
  longlong *local_8b0 [2];
  longlong local_8a0;
  longlong *local_898 [2];
  longlong local_888;
  longlong *local_880 [2];
  longlong local_870;
  longlong *local_868 [2];
  longlong local_858;
  longlong *local_850 [2];
  longlong local_840;
  longlong *local_838 [2];
  longlong local_828;
  longlong *local_820 [2];
  longlong local_810;
  longlong *local_808 [2];
  longlong local_7f8;
  undefined8 local_7d0;
  longlong local_7c8;
  longlong local_7b0;
  undefined8 local_790;
  longlong local_788;
  longlong local_770;
  undefined8 local_750;
  longlong local_748;
  longlong local_730;
  undefined8 local_710;
  longlong local_708;
  longlong local_6f0;
  undefined1 local_6e8 [8];
  longlong *local_6e0;
  undefined1 local_6c8 [8];
  longlong *local_6c0;
  undefined1 local_6a8 [8];
  longlong *local_6a0;
  undefined1 local_688 [8];
  longlong *local_680;
  undefined1 local_668 [8];
  longlong *local_660;
  undefined1 local_648 [8];
  longlong *local_640;
  undefined1 local_628 [8];
  longlong *local_620;
  undefined1 local_608 [8];
  longlong *local_600;
  undefined1 local_5e8 [8];
  longlong *local_5e0;
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  undefined1 local_5a8 [8];
  longlong *local_5a0;
  undefined1 local_588 [8];
  longlong *local_580;
  undefined1 local_568 [8];
  longlong *local_560;
  undefined1 local_548 [8];
  longlong *local_540;
  undefined1 local_528 [8];
  longlong *local_520;
  undefined ******local_508 [2];
  undefined1 local_4f8;
  undefined8 local_4f0;
  longlong local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  longlong local_4d0;
  byte local_4c8;
  undefined ******local_4c0 [2];
  undefined1 local_4b0;
  undefined8 local_4a8;
  longlong local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  longlong local_488;
  byte local_480;
  undefined ******local_478 [2];
  undefined1 local_468;
  undefined8 local_460;
  longlong local_458;
  undefined8 local_450;
  undefined4 local_448;
  longlong local_440;
  byte local_438;
  undefined ******local_430 [2];
  undefined1 local_420;
  undefined8 local_418;
  longlong local_410;
  undefined8 local_408;
  undefined4 local_400;
  longlong local_3f8;
  byte local_3f0;
  undefined1 local_3e8 [8];
  undefined1 local_3e0 [8];
  undefined1 local_3d8 [8];
  undefined8 *****local_3d0 [8];
  byte local_390;
  undefined8 *****local_388 [8];
  byte local_348;
  undefined1 local_340 [72];
  undefined1 local_2f8 [72];
  undefined1 local_2b0 [72];
  undefined1 local_268 [72];
  undefined1 local_220 [72];
  undefined1 local_1d8 [72];
  undefined1 local_190 [72];
  undefined1 local_148 [72];
  undefined1 local_100 [72];
  undefined *****local_b8;
  char local_b0;
  undefined8 local_ac;
  char local_a4;
  undefined8 local_a0;
  char local_98;
  undefined ****local_94;
  char local_8c;
  undefined8 local_88;
  char local_80;
  undefined8 local_7c;
  char local_74;
  undefined *****local_70;
  char local_68;
  undefined *****local_64;
  char local_5c;
  undefined *****local_58;
  char local_50;
  undefined1 local_4c [20];
  
  local_4c._4_8_ = DAT_1468387a8 ^ (ulonglong)auStack_ab8;
  uVar7 = *(undefined8 *)(param_1 + 0xd0);
  local_a90 = param_1;
  lVar5 = FMovieSceneFloatChannel::StaticStruct();
  lVar5 = FMovieSceneChannelProxy::FindEntry(uVar7,*(undefined8 *)(lVar5 + 0x18));
  plVar12 = (longlong *)0x0;
  uVar16 = 0;
  plVar8 = plVar12;
  if (lVar5 != 0) {
    plVar8 = *(longlong **)(lVar5 + 8);
  }
  local_928 = *param_3;
  uStack_924 = param_3[1];
  iStack_920 = param_3[2];
  uStack_91c = param_3[3];
  lVar5 = *plVar8;
  if (lVar5 != 0) {
    std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
              (local_880,lVar5 + 0x10,lVar5 + 0x38);
    puVar15 = (undefined4 *)CONCAT44(uStack_924,local_928);
    local_870 = lVar5 + 0x20;
    puVar11 = puVar15 + iStack_920;
    for (; puVar15 != puVar11; puVar15 = puVar15 + 1) {
      uVar2 = *puVar15;
      iVar4 = FUN_141f521b0(local_880,uVar2);
      if (iVar4 != -1) {
        local_68 = '\x01';
        uStack_a94 = *(undefined4 *)(*local_880[0] + (longlong)iVar4 * 4);
        local_70 = (undefined *****)CONCAT44(uStack_a94,uVar2);
        local_a98 = uVar2;
        goto LAB_141ff3320;
      }
    }
  }
  local_68 = '\0';
LAB_141ff3320:
  local_918 = *param_3;
  uStack_914 = param_3[1];
  iStack_910 = param_3[2];
  uStack_90c = param_3[3];
  lVar5 = plVar8[1];
  local_a88 = local_70;
  if (lVar5 != 0) {
    std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
              (local_868,lVar5 + 0x10,lVar5 + 0x38);
    puVar15 = (undefined4 *)CONCAT44(uStack_914,local_918);
    local_858 = lVar5 + 0x20;
    puVar11 = puVar15 + iStack_910;
    for (; puVar15 != puVar11; puVar15 = puVar15 + 1) {
      uVar2 = *puVar15;
      iVar4 = FUN_141f521b0(local_868,uVar2);
      if (iVar4 != -1) {
        local_5c = '\x01';
        uStack_a94 = *(undefined4 *)(*local_868[0] + (longlong)iVar4 * 4);
        local_64 = (undefined *****)CONCAT44(uStack_a94,uVar2);
        local_a98 = uVar2;
        goto LAB_141ff3399;
      }
    }
  }
  local_5c = '\0';
LAB_141ff3399:
  local_908 = *param_3;
  uStack_904 = param_3[1];
  iStack_900 = param_3[2];
  uStack_8fc = param_3[3];
  lVar5 = plVar8[2];
  if (lVar5 != 0) {
    std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
              (local_850,lVar5 + 0x10,lVar5 + 0x38);
    puVar15 = (undefined4 *)CONCAT44(uStack_904,local_908);
    local_840 = lVar5 + 0x20;
    puVar11 = puVar15 + iStack_900;
    for (; puVar15 != puVar11; puVar15 = puVar15 + 1) {
      uVar2 = *puVar15;
      iVar4 = FUN_141f521b0(local_850,uVar2);
      if (iVar4 != -1) {
        local_50 = '\x01';
        uStack_a94 = *(undefined4 *)(*local_850[0] + (longlong)iVar4 * 4);
        local_58 = (undefined *****)CONCAT44(uStack_a94,uVar2);
        local_a98 = uVar2;
        goto LAB_141ff3419;
      }
    }
  }
  local_50 = '\0';
LAB_141ff3419:
  local_8f8 = *param_3;
  uStack_8f4 = param_3[1];
  iStack_8f0 = param_3[2];
  uStack_8ec = param_3[3];
  lVar5 = plVar8[3];
  if (lVar5 != 0) {
    std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
              (local_838,lVar5 + 0x10,lVar5 + 0x38);
    puVar15 = (undefined4 *)CONCAT44(uStack_8f4,local_8f8);
    local_828 = lVar5 + 0x20;
    puVar11 = puVar15 + iStack_8f0;
    for (; puVar15 != puVar11; puVar15 = puVar15 + 1) {
      uVar2 = *puVar15;
      iVar4 = FUN_141f521b0(local_838,uVar2);
      if (iVar4 != -1) {
        local_b0 = '\x01';
        uStack_a94 = *(undefined4 *)(*local_838[0] + (longlong)iVar4 * 4);
        local_b8 = (undefined *****)CONCAT44(uStack_a94,uVar2);
        local_a98 = uVar2;
        goto LAB_141ff3499;
      }
    }
  }
  local_b0 = '\0';
LAB_141ff3499:
  local_8e8 = *param_3;
  uStack_8e4 = param_3[1];
  iStack_8e0 = param_3[2];
  uStack_8dc = param_3[3];
  lVar5 = plVar8[4];
  if (lVar5 != 0) {
    std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
              (local_820,lVar5 + 0x10,lVar5 + 0x38);
    puVar15 = (undefined4 *)CONCAT44(uStack_8e4,local_8e8);
    local_810 = lVar5 + 0x20;
    puVar11 = puVar15 + iStack_8e0;
    for (; puVar15 != puVar11; puVar15 = puVar15 + 1) {
      uVar2 = *puVar15;
      iVar4 = FUN_141f521b0(local_820,uVar2);
      if (iVar4 != -1) {
        local_a4 = '\x01';
        uStack_a94 = *(undefined4 *)(*local_820[0] + (longlong)iVar4 * 4);
        local_ac = CONCAT44(uStack_a94,uVar2);
        local_a98 = uVar2;
        goto LAB_141ff3519;
      }
    }
  }
  local_a4 = '\0';
LAB_141ff3519:
  local_8d8 = *param_3;
  uStack_8d4 = param_3[1];
  iStack_8d0 = param_3[2];
  uStack_8cc = param_3[3];
  lVar5 = plVar8[5];
  if (lVar5 != 0) {
    std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
              (local_808,lVar5 + 0x10,lVar5 + 0x38);
    puVar15 = (undefined4 *)CONCAT44(uStack_8d4,local_8d8);
    local_7f8 = lVar5 + 0x20;
    puVar11 = puVar15 + iStack_8d0;
    for (; puVar15 != puVar11; puVar15 = puVar15 + 1) {
      uVar2 = *puVar15;
      iVar4 = FUN_141f521b0(local_808,uVar2);
      if (iVar4 != -1) {
        local_98 = '\x01';
        uStack_a94 = *(undefined4 *)(*local_808[0] + (longlong)iVar4 * 4);
        local_a0 = CONCAT44(uStack_a94,uVar2);
        local_a98 = uVar2;
        goto LAB_141ff3599;
      }
    }
  }
  local_98 = '\0';
LAB_141ff3599:
  local_958 = *param_3;
  uStack_954 = param_3[1];
  iStack_950 = param_3[2];
  uStack_94c = param_3[3];
  lVar5 = plVar8[6];
  if (lVar5 != 0) {
    std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
              (local_8c8,lVar5 + 0x10,lVar5 + 0x38);
    puVar15 = (undefined4 *)CONCAT44(uStack_954,local_958);
    local_8b8 = lVar5 + 0x20;
    puVar11 = puVar15 + iStack_950;
    for (; puVar15 != puVar11; puVar15 = puVar15 + 1) {
      uVar2 = *puVar15;
      iVar4 = FUN_141f521b0(local_8c8,uVar2);
      if (iVar4 != -1) {
        local_8c = '\x01';
        uStack_a94 = *(undefined4 *)(*local_8c8[0] + (longlong)iVar4 * 4);
        local_94 = (undefined ****)CONCAT44(uStack_a94,uVar2);
        local_a98 = uVar2;
        goto LAB_141ff3609;
      }
    }
  }
  local_8c = '\0';
LAB_141ff3609:
  local_948 = *param_3;
  uStack_944 = param_3[1];
  iStack_940 = param_3[2];
  uStack_93c = param_3[3];
  lVar5 = plVar8[7];
  if (lVar5 != 0) {
    std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
              (local_8b0,lVar5 + 0x10,lVar5 + 0x38);
    puVar15 = (undefined4 *)CONCAT44(uStack_944,local_948);
    local_8a0 = lVar5 + 0x20;
    puVar11 = puVar15 + iStack_940;
    for (; puVar15 != puVar11; puVar15 = puVar15 + 1) {
      uVar2 = *puVar15;
      iVar4 = FUN_141f521b0(local_8b0,uVar2);
      if (iVar4 != -1) {
        local_80 = '\x01';
        uStack_a94 = *(undefined4 *)(*local_8b0[0] + (longlong)iVar4 * 4);
        local_88 = CONCAT44(uStack_a94,uVar2);
        local_a98 = uVar2;
        goto LAB_141ff3679;
      }
    }
  }
  local_80 = '\0';
LAB_141ff3679:
  local_938 = *param_3;
  uStack_934 = param_3[1];
  iStack_930 = param_3[2];
  uStack_92c = param_3[3];
  lVar5 = plVar8[8];
  if (lVar5 != 0) {
    std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
              (local_898,lVar5 + 0x10,lVar5 + 0x38);
    puVar15 = (undefined4 *)CONCAT44(uStack_934,local_938);
    local_888 = lVar5 + 0x20;
    puVar11 = puVar15 + iStack_930;
    for (; puVar15 != puVar11; puVar15 = puVar15 + 1) {
      uVar2 = *puVar15;
      iVar4 = FUN_141f521b0(local_898,uVar2);
      if (iVar4 != -1) {
        local_74 = '\x01';
        uStack_a94 = *(undefined4 *)(*local_898[0] + (longlong)iVar4 * 4);
        local_7c = CONCAT44(uStack_a94,uVar2);
        local_a98 = uVar2;
        goto LAB_141ff36f9;
      }
    }
  }
  local_74 = '\0';
LAB_141ff36f9:
  ppppppuVar6 = &local_70;
  do {
    iVar4 = 0;
    if (*(char *)(ppppppuVar6 + 1) != '\0') {
      plVar8 = (longlong *)0x1;
      break;
    }
    ppppppuVar6 = (undefined ******)((longlong)ppppppuVar6 + 0xc);
    plVar8 = plVar12;
  } while (ppppppuVar6 != (undefined ******)local_4c);
  ppppppuVar6 = &local_b8;
  do {
    if (*(char *)(ppppppuVar6 + 1) != '\0') {
      plVar9 = (longlong *)0x1;
      break;
    }
    ppppppuVar6 = (undefined ******)((longlong)ppppppuVar6 + 0xc);
    plVar9 = plVar12;
  } while (ppppppuVar6 != (undefined ******)&local_94);
  ppppppuVar6 = (undefined ******)&local_94;
  do {
    if (*(char *)(ppppppuVar6 + 1) != '\0') {
      iVar4 = 1;
      break;
    }
    ppppppuVar6 = (undefined ******)((longlong)ppppppuVar6 + 0xc);
  } while (ppppppuVar6 != &local_70);
  if ((uint)(iVar4 + (int)plVar9 + (int)plVar8) < 2) {
    if ((int)plVar9 == 0) {
      if (iVar4 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        lVar5 = operator_new(0x28);
        if (lVar5 != 0) {
          uVar7 = FMovieScene3DScaleKeyStruct::StaticStruct();
          plVar12 = (longlong *)FUN_141fcf7c0(lVar5,uVar7);
        }
        local_a18 = FUN_141fcb4b0(plVar12);
        local_a20 = plVar12;
        SharedPointerInternals::EnableSharedFromThis(&local_a20,plVar12,plVar12);
        lVar5 = (**(code **)(*local_a20 + 0x10))();
        uVar3 = local_a90;
        local_988 = local_8c != '\0';
        if ((bool)local_988) {
          local_990 = local_94;
        }
        uVar7 = FUN_141fcb3b0(*(undefined8 *)(local_a90 + 0xd0),local_568,6);
        uVar7 = FUN_141fc5100(local_148,uVar7,lVar5 + 8,&local_990);
        FMovieSceneKeyStructHelper::Add(lVar5 + 0x18,uVar7);
        FUN_141fd2a50(local_148);
        if (local_560 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_560 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (local_560 != (longlong *)0x0)) {
            (**(code **)(*local_560 + 8))(local_560,1);
          }
        }
        local_978 = local_80 != '\0';
        if ((bool)local_978) {
          local_980 = local_88;
        }
        uVar7 = FUN_141fcb3b0(*(undefined8 *)(uVar3 + 0xd0),local_548,7);
        uVar7 = FUN_141fc5100(local_100,uVar7,lVar5 + 0xc,&local_980);
        FMovieSceneKeyStructHelper::Add(lVar5 + 0x18,uVar7);
        FUN_141fd2a50(local_100);
        if (local_540 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_540 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (local_540 != (longlong *)0x0)) {
            (**(code **)(*local_540 + 8))(local_540,1);
          }
        }
        local_968 = local_74 != '\0';
        if ((bool)local_968) {
          local_970 = local_7c;
        }
        uVar7 = FUN_141fcb3b0(*(undefined8 *)(uVar3 + 0xd0),local_528,8);
        uVar7 = FUN_141fc5100(local_340,uVar7,lVar5 + 0x10,&local_970);
        FMovieSceneKeyStructHelper::Add(lVar5 + 0x18,uVar7);
        FUN_141fd2a50(local_340);
        if (local_520 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_520 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar4 == 1) && (local_520 != (longlong *)0x0)) {
            (**(code **)(*local_520 + 8))(local_520,1);
          }
        }
        FMovieSceneKeyStructHelper::SetStartingValues(lVar5 + 0x18);
        local_a90 = local_a90 & 0xffffffff00000000;
        puVar11 = (undefined4 *)
                  FMovieSceneKeyStructHelper::GetUnifiedKeyTime(lVar5 + 0x18,local_3d8);
        if (*(char *)(puVar11 + 1) != '\0') {
          uVar16 = *puVar11;
        }
        *(undefined4 *)(lVar5 + 0x14) = uVar16;
        *param_2 = local_a20;
        param_2[1] = local_a18;
        if (local_a18 != 0) {
          LOCK();
          *(int *)(local_a18 + 8) = *(int *)(local_a18 + 8) + 1;
          UNLOCK();
        }
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_a20);
      }
    }
    else {
      lVar5 = operator_new(0x28);
      if (lVar5 != 0) {
        uVar7 = FMovieScene3DRotationKeyStruct::StaticStruct();
        plVar12 = (longlong *)FUN_141fcf7c0(lVar5,uVar7);
      }
      local_a28 = FUN_141fcb4b0(plVar12);
      local_a30 = plVar12;
      SharedPointerInternals::EnableSharedFromThis(&local_a30,plVar12,plVar12);
      lVar5 = (**(code **)(*local_a30 + 0x10))();
      uVar3 = local_a90;
      local_9b8 = local_b0 != '\0';
      if ((bool)local_9b8) {
        local_9c0 = local_b8;
      }
      uVar7 = FUN_141fcb3b0(*(undefined8 *)(local_a90 + 0xd0),local_5c8,3);
      uVar7 = FUN_141fc5100(local_220,uVar7,lVar5 + 0x10,&local_9c0);
      FMovieSceneKeyStructHelper::Add(lVar5 + 0x18,uVar7);
      FUN_141fd2a50(local_220);
      if (local_5c0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_5c0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (local_5c0 != (longlong *)0x0)) {
          (**(code **)(*local_5c0 + 8))(local_5c0,1);
        }
      }
      local_9a8 = local_a4 != '\0';
      if ((bool)local_9a8) {
        local_9b0 = local_ac;
      }
      uVar7 = FUN_141fcb3b0(*(undefined8 *)(uVar3 + 0xd0),local_5a8,4);
      uVar7 = FUN_141fc5100(local_1d8,uVar7,lVar5 + 8,&local_9b0);
      FMovieSceneKeyStructHelper::Add(lVar5 + 0x18,uVar7);
      FUN_141fd2a50(local_1d8);
      if (local_5a0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_5a0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (local_5a0 != (longlong *)0x0)) {
          (**(code **)(*local_5a0 + 8))(local_5a0,1);
        }
      }
      local_998 = local_98 != '\0';
      if ((bool)local_998) {
        local_9a0 = local_a0;
      }
      uVar7 = FUN_141fcb3b0(*(undefined8 *)(uVar3 + 0xd0),local_588,5);
      uVar7 = FUN_141fc5100(local_190,uVar7,lVar5 + 0xc,&local_9a0);
      FMovieSceneKeyStructHelper::Add(lVar5 + 0x18,uVar7);
      FUN_141fd2a50(local_190);
      if (local_580 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_580 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (local_580 != (longlong *)0x0)) {
          (**(code **)(*local_580 + 8))(local_580,1);
        }
      }
      FMovieSceneKeyStructHelper::SetStartingValues(lVar5 + 0x18);
      local_a98 = 0;
      puVar11 = (undefined4 *)FMovieSceneKeyStructHelper::GetUnifiedKeyTime(lVar5 + 0x18,local_3e0);
      if (*(char *)(puVar11 + 1) != '\0') {
        uVar16 = *puVar11;
      }
      *(undefined4 *)(lVar5 + 0x14) = uVar16;
      *param_2 = local_a30;
      param_2[1] = local_a28;
      if (local_a28 != 0) {
        LOCK();
        *(int *)(local_a28 + 8) = *(int *)(local_a28 + 8) + 1;
        UNLOCK();
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_a30);
    }
  }
  else {
    lVar5 = operator_new(0x28);
    plVar8 = plVar12;
    if (lVar5 != 0) {
      uVar7 = FMovieScene3DTransformKeyStruct::StaticStruct();
      plVar8 = (longlong *)FUN_141fcf7c0(lVar5,uVar7);
    }
    plVar9 = (longlong *)operator_new(0x18);
    if (plVar9 != (longlong *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      *plVar9 = (longlong)&PTR_FUN_144cefe80;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      plVar9[2] = (longlong)plVar8;
      plVar12 = plVar9;
    }
    local_a40 = plVar8;
    local_a38 = plVar12;
    SharedPointerInternals::EnableSharedFromThis(&local_a40,plVar8,plVar8);
    lVar5 = (**(code **)(*local_a40 + 0x10))();
    uVar3 = local_a90;
    cVar17 = local_68 != '\0';
    if ((bool)cVar17) {
      local_a80 = local_a88;
    }
    local_a78 = cVar17;
    puVar10 = (undefined8 *)FUN_141fcb3b0(*(undefined8 *)(local_a90 + 0xd0),local_6e8,0);
    local_788 = puVar10[1];
    local_790 = *puVar10;
    if (local_788 != 0) {
      LOCK();
      *(int *)(local_788 + 0xc) = *(int *)(local_788 + 0xc) + 1;
      UNLOCK();
      cVar17 = local_a78;
    }
    local_770 = lVar5 + 8;
    local_4c8 = local_4c8 | 3;
    local_4f8 = 0;
    local_508[0] = (undefined ******)&PTR_FUN_144f51c48;
    local_4f0 = local_790;
    local_4e8 = local_788;
    local_4d8 = *(undefined4 *)(puVar10 + 3);
    local_4e0 = puVar10[2];
    local_4d0 = local_770;
    pppppppuVar13 = local_508;
    if ((local_4c8 & 2) == 0) {
      pppppppuVar13 = (undefined *******)&PTR_FUN_144f51c48;
    }
    if ((undefined *******)&local_a80 != pppppppuVar13 + 1) {
      if (*(char *)(pppppppuVar13 + 2) != '\0') {
        *(undefined1 *)(pppppppuVar13 + 2) = 0;
      }
      if (cVar17 != '\0') {
        pppppppuVar13[1] = (undefined ******)local_a80;
        *(undefined1 *)(pppppppuVar13 + 2) = 1;
      }
    }
    FMovieSceneKeyStructHelper::Add(lVar5 + 0x30,local_508);
    if ((local_4c8 & 1) != 0) {
      pppppppuVar13 = local_508;
      if ((local_4c8 & 2) == 0) {
        pppppppuVar13 = (undefined *******)local_508[0];
      }
      local_4c8 = local_4c8 & 0xfe;
      (*(code *)**pppppppuVar13)(pppppppuVar13,0);
      if ((local_4c8 & 2) == 0) {
        FMemory::Free(local_508[0]);
      }
    }
    if (local_6e0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_6e0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_6e0 != (longlong *)0x0)) {
        (**(code **)(*local_6e0 + 8))(local_6e0,1);
      }
    }
    cVar17 = local_5c != '\0';
    if ((bool)cVar17) {
      local_a70 = local_64;
    }
    local_a68 = cVar17;
    puVar10 = (undefined8 *)FUN_141fcb3b0(*(undefined8 *)(uVar3 + 0xd0),local_6c8,1);
    local_7c8 = puVar10[1];
    local_7d0 = *puVar10;
    if (local_7c8 != 0) {
      LOCK();
      *(int *)(local_7c8 + 0xc) = *(int *)(local_7c8 + 0xc) + 1;
      UNLOCK();
      cVar17 = local_a68;
    }
    local_7b0 = lVar5 + 0xc;
    local_480 = local_480 | 3;
    local_4b0 = 0;
    local_4c0[0] = (undefined ******)&PTR_FUN_144f51c48;
    local_4a8 = local_7d0;
    local_4a0 = local_7c8;
    local_490 = *(undefined4 *)(puVar10 + 3);
    local_498 = puVar10[2];
    local_488 = local_7b0;
    pppppppuVar13 = local_4c0;
    if ((local_480 & 2) == 0) {
      pppppppuVar13 = (undefined *******)&PTR_FUN_144f51c48;
    }
    if ((undefined *******)&local_a70 != pppppppuVar13 + 1) {
      if (*(char *)(pppppppuVar13 + 2) != '\0') {
        *(undefined1 *)(pppppppuVar13 + 2) = 0;
      }
      if (cVar17 != '\0') {
        pppppppuVar13[1] = (undefined ******)local_a70;
        *(undefined1 *)(pppppppuVar13 + 2) = 1;
      }
    }
    FMovieSceneKeyStructHelper::Add(lVar5 + 0x30,local_4c0);
    if ((local_480 & 1) != 0) {
      pppppppuVar13 = local_4c0;
      if ((local_480 & 2) == 0) {
        pppppppuVar13 = (undefined *******)local_4c0[0];
      }
      local_480 = local_480 & 0xfe;
      (*(code *)**pppppppuVar13)(pppppppuVar13,0);
      if ((local_480 & 2) == 0) {
        FMemory::Free(local_4c0[0]);
      }
    }
    if (local_6c0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_6c0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_6c0 != (longlong *)0x0)) {
        (**(code **)(*local_6c0 + 8))(local_6c0,1);
      }
    }
    cVar17 = local_50 != '\0';
    if ((bool)cVar17) {
      local_a60 = local_58;
    }
    local_a58 = cVar17;
    puVar10 = (undefined8 *)FUN_141fcb3b0(*(undefined8 *)(uVar3 + 0xd0),local_6a8,2);
    local_748 = puVar10[1];
    local_750 = *puVar10;
    if (local_748 != 0) {
      LOCK();
      *(int *)(local_748 + 0xc) = *(int *)(local_748 + 0xc) + 1;
      UNLOCK();
      cVar17 = local_a58;
    }
    local_730 = lVar5 + 0x10;
    local_438 = local_438 | 3;
    local_468 = 0;
    local_478[0] = (undefined ******)&PTR_FUN_144f51c48;
    local_460 = local_750;
    local_458 = local_748;
    local_448 = *(undefined4 *)(puVar10 + 3);
    local_450 = puVar10[2];
    local_440 = local_730;
    pppppppuVar13 = local_478;
    if ((local_438 & 2) == 0) {
      pppppppuVar13 = (undefined *******)&PTR_FUN_144f51c48;
    }
    if ((undefined *******)&local_a60 != pppppppuVar13 + 1) {
      if (*(char *)(pppppppuVar13 + 2) != '\0') {
        *(undefined1 *)(pppppppuVar13 + 2) = 0;
      }
      if (cVar17 != '\0') {
        pppppppuVar13[1] = (undefined ******)local_a60;
        *(undefined1 *)(pppppppuVar13 + 2) = 1;
      }
    }
    FMovieSceneKeyStructHelper::Add(lVar5 + 0x30,local_478);
    if ((local_438 & 1) != 0) {
      pppppppuVar13 = local_478;
      if ((local_438 & 2) == 0) {
        pppppppuVar13 = (undefined *******)local_478[0];
      }
      local_438 = local_438 & 0xfe;
      (*(code *)**pppppppuVar13)(pppppppuVar13,0);
      if ((local_438 & 2) == 0) {
        FMemory::Free(local_478[0]);
      }
    }
    if (local_6a0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_6a0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_6a0 != (longlong *)0x0)) {
        (**(code **)(*local_6a0 + 8))(local_6a0,1);
      }
    }
    cVar17 = local_b0 != '\0';
    if ((bool)cVar17) {
      local_a50 = local_b8;
    }
    local_a48 = cVar17;
    puVar10 = (undefined8 *)FUN_141fcb3b0(*(undefined8 *)(uVar3 + 0xd0),local_688,3);
    local_708 = puVar10[1];
    local_710 = *puVar10;
    if (local_708 != 0) {
      LOCK();
      *(int *)(local_708 + 0xc) = *(int *)(local_708 + 0xc) + 1;
      UNLOCK();
      cVar17 = local_a48;
    }
    local_6f0 = lVar5 + 0x1c;
    local_3f0 = local_3f0 | 3;
    local_420 = 0;
    local_430[0] = (undefined ******)&PTR_FUN_144f51c48;
    local_418 = local_710;
    local_410 = local_708;
    local_400 = *(undefined4 *)(puVar10 + 3);
    local_408 = puVar10[2];
    local_3f8 = local_6f0;
    pppppppuVar13 = local_430;
    if ((local_3f0 & 2) == 0) {
      pppppppuVar13 = (undefined *******)&PTR_FUN_144f51c48;
    }
    if ((undefined *******)&local_a50 != pppppppuVar13 + 1) {
      if (*(char *)(pppppppuVar13 + 2) != '\0') {
        *(undefined1 *)(pppppppuVar13 + 2) = 0;
      }
      if (cVar17 != '\0') {
        pppppppuVar13[1] = (undefined ******)local_a50;
        *(undefined1 *)(pppppppuVar13 + 2) = 1;
      }
    }
    FMovieSceneKeyStructHelper::Add(lVar5 + 0x30,local_430);
    if ((local_3f0 & 1) != 0) {
      pppppppuVar13 = local_430;
      if ((local_3f0 & 2) == 0) {
        pppppppuVar13 = (undefined *******)local_430[0];
      }
      local_3f0 = local_3f0 & 0xfe;
      (*(code *)**pppppppuVar13)(pppppppuVar13,0);
      if ((local_3f0 & 2) == 0) {
        FMemory::Free(local_430[0]);
      }
    }
    if (local_680 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_680 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_680 != (longlong *)0x0)) {
        (**(code **)(*local_680 + 8))(local_680,1);
      }
    }
    local_a08 = local_a4 != '\0';
    if ((bool)local_a08) {
      local_a10 = local_ac;
    }
    uVar7 = FUN_141fcb3b0(*(undefined8 *)(uVar3 + 0xd0),local_668,4);
    uVar7 = FUN_141fc5100(local_3d0,uVar7,lVar5 + 0x14,&local_a10);
    FMovieSceneKeyStructHelper::Add(lVar5 + 0x30,uVar7);
    if ((local_390 & 1) != 0) {
      ppppppuVar14 = local_3d0;
      if ((local_390 & 2) == 0) {
        ppppppuVar14 = (undefined8 ******)local_3d0[0];
      }
      local_390 = local_390 & 0xfe;
      (*(code *)**ppppppuVar14)(ppppppuVar14,0);
      if ((local_390 & 2) == 0) {
        FMemory::Free(local_3d0[0]);
      }
    }
    if (local_660 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_660 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_660 != (longlong *)0x0)) {
        (**(code **)(*local_660 + 8))(local_660,1);
      }
    }
    local_9f8 = local_98 != '\0';
    if ((bool)local_9f8) {
      local_a00 = local_a0;
    }
    uVar7 = FUN_141fcb3b0(*(undefined8 *)(uVar3 + 0xd0),local_648,5);
    uVar7 = FUN_141fc5100(local_388,uVar7,lVar5 + 0x18,&local_a00);
    FMovieSceneKeyStructHelper::Add(lVar5 + 0x30,uVar7);
    if ((local_348 & 1) != 0) {
      ppppppuVar14 = local_388;
      if ((local_348 & 2) == 0) {
        ppppppuVar14 = (undefined8 ******)local_388[0];
      }
      local_348 = local_348 & 0xfe;
      (*(code *)**ppppppuVar14)(ppppppuVar14,0);
      if ((local_348 & 2) == 0) {
        FMemory::Free(local_388[0]);
      }
    }
    if (local_640 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_640 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_640 != (longlong *)0x0)) {
        (**(code **)(*local_640 + 8))(local_640,1);
      }
    }
    local_9e8 = local_8c != '\0';
    if ((bool)local_9e8) {
      local_9f0 = local_94;
    }
    uVar7 = FUN_141fcb3b0(*(undefined8 *)(uVar3 + 0xd0),local_628,6);
    uVar7 = FUN_141fc5100(local_2f8,uVar7,lVar5 + 0x20,&local_9f0);
    FMovieSceneKeyStructHelper::Add(lVar5 + 0x30,uVar7);
    FUN_141fd2a50(local_2f8);
    if (local_620 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_620 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_620 != (longlong *)0x0)) {
        (**(code **)(*local_620 + 8))(local_620,1);
      }
    }
    local_9d8 = local_80 != '\0';
    if ((bool)local_9d8) {
      local_9e0 = local_88;
    }
    uVar7 = FUN_141fcb3b0(*(undefined8 *)(uVar3 + 0xd0),local_608,7);
    uVar7 = FUN_141fc5100(local_2b0,uVar7,lVar5 + 0x24,&local_9e0);
    FMovieSceneKeyStructHelper::Add(lVar5 + 0x30,uVar7);
    FUN_141fd2a50(local_2b0);
    if (local_600 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_600 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_600 != (longlong *)0x0)) {
        (**(code **)(*local_600 + 8))(local_600,1);
      }
    }
    local_9c8 = local_74 != '\0';
    if ((bool)local_9c8) {
      local_9d0 = local_7c;
    }
    uVar7 = FUN_141fcb3b0(*(undefined8 *)(uVar3 + 0xd0),local_5e8,8);
    uVar7 = FUN_141fc5100(local_268,uVar7,lVar5 + 0x28,&local_9d0);
    FMovieSceneKeyStructHelper::Add(lVar5 + 0x30,uVar7);
    FUN_141fd2a50(local_268);
    if (local_5e0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_5e0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar4 == 1) && (local_5e0 != (longlong *)0x0)) {
        (**(code **)(*local_5e0 + 8))(local_5e0,1);
      }
    }
    FMovieSceneKeyStructHelper::SetStartingValues(lVar5 + 0x30);
    local_a88 = (undefined *****)((ulonglong)local_a88 & 0xffffffff00000000);
    puVar11 = (undefined4 *)FMovieSceneKeyStructHelper::GetUnifiedKeyTime(lVar5 + 0x30,local_3e8);
    plVar12 = local_a38;
    if (*(char *)(puVar11 + 1) != '\0') {
      uVar16 = *puVar11;
    }
    *(undefined4 *)(lVar5 + 0x2c) = uVar16;
    *param_2 = local_a40;
    param_2[1] = local_a38;
    if (local_a38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a38 + 1) = (int)local_a38[1] + 1;
      UNLOCK();
      if (local_a38 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_a38 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_a38)(local_a38);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141ff4880 FUN_141ff4880 body=1013 status=ok
// SIG undefined FUN_141ff4880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141ff4880(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined8 ****ppppuVar9;
  undefined4 uVar10;
  undefined1 auStack_268 [32];
  undefined4 *local_248;
  longlong *local_240;
  longlong *local_238;
  undefined4 local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_168 [8];
  undefined8 ***local_160 [8];
  byte local_120;
  undefined8 ***local_118 [8];
  byte local_d8;
  undefined8 ***local_d0 [8];
  byte local_90;
  undefined8 ***local_88 [8];
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_248 = param_3;
  lVar3 = operator_new(0x28);
  plVar7 = (longlong *)0x0;
  uVar10 = 0;
  plVar5 = plVar7;
  if (lVar3 != 0) {
    uVar4 = FMovieSceneColorKeyStruct::StaticStruct();
    plVar5 = (longlong *)FUN_141fcf7c0(lVar3,uVar4);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *plVar6 = (longlong)&PTR_FUN_144cefe80;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    plVar6[2] = (longlong)plVar5;
    plVar7 = plVar6;
  }
  local_240 = plVar5;
  local_238 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_240,plVar5,plVar5);
  lVar3 = (**(code **)(*local_240 + 0x10))();
  local_228 = *param_3;
  uStack_224 = param_3[1];
  uStack_220 = param_3[2];
  uStack_21c = param_3[3];
  uVar4 = FUN_141fcb3b0(*(undefined8 *)(param_1 + 0xd0),local_1e8,0);
  uVar4 = FUN_141fc51a0(local_160,uVar4,lVar3 + 8,&local_228);
  FMovieSceneKeyStructHelper::Add(lVar3 + 0x20,uVar4);
  if ((local_120 & 1) != 0) {
    ppppuVar9 = local_160;
    if ((local_120 & 2) == 0) {
      ppppuVar9 = (undefined8 ****)local_160[0];
    }
    local_120 = local_120 & 0xfe;
    (*(code *)**ppppuVar9)(ppppuVar9,0);
    if ((local_120 & 2) == 0) {
      FMemory::Free(local_160[0]);
    }
  }
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_1e0 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_1e0 != (longlong *)0x0)) {
      (**(code **)(*local_1e0 + 8))(local_1e0,1);
    }
  }
  local_218 = *local_248;
  uStack_214 = local_248[1];
  uStack_210 = local_248[2];
  uStack_20c = local_248[3];
  uVar4 = FUN_141fcb3b0(*(undefined8 *)(param_1 + 0xd0),local_1c8,1);
  uVar4 = FUN_141fc51a0(local_118,uVar4,lVar3 + 0xc,&local_218);
  FMovieSceneKeyStructHelper::Add(lVar3 + 0x20,uVar4);
  if ((local_d8 & 1) != 0) {
    ppppuVar9 = local_118;
    if ((local_d8 & 2) == 0) {
      ppppuVar9 = (undefined8 ****)local_118[0];
    }
    local_d8 = local_d8 & 0xfe;
    (*(code *)**ppppuVar9)(ppppuVar9,0);
    if ((local_d8 & 2) == 0) {
      FMemory::Free(local_118[0]);
    }
  }
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_1c0 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_1c0 != (longlong *)0x0)) {
      (**(code **)(*local_1c0 + 8))(local_1c0,1);
    }
  }
  local_208 = *local_248;
  uStack_204 = local_248[1];
  uStack_200 = local_248[2];
  uStack_1fc = local_248[3];
  uVar4 = FUN_141fcb3b0(*(undefined8 *)(param_1 + 0xd0),local_1a8,2);
  uVar4 = FUN_141fc51a0(local_d0,uVar4,lVar3 + 0x10,&local_208);
  FMovieSceneKeyStructHelper::Add(lVar3 + 0x20,uVar4);
  if ((local_90 & 1) != 0) {
    ppppuVar9 = local_d0;
    if ((local_90 & 2) == 0) {
      ppppuVar9 = (undefined8 ****)local_d0[0];
    }
    local_90 = local_90 & 0xfe;
    (*(code *)**ppppuVar9)(ppppuVar9,0);
    if ((local_90 & 2) == 0) {
      FMemory::Free(local_d0[0]);
    }
  }
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_1a0 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_1a0 != (longlong *)0x0)) {
      (**(code **)(*local_1a0 + 8))(local_1a0,1);
    }
  }
  local_1f8 = *local_248;
  uStack_1f4 = local_248[1];
  uStack_1f0 = local_248[2];
  uStack_1ec = local_248[3];
  uVar4 = FUN_141fcb3b0(*(undefined8 *)(param_1 + 0xd0),local_188,3);
  uVar4 = FUN_141fc51a0(local_88,uVar4,lVar3 + 0x14,&local_1f8);
  FMovieSceneKeyStructHelper::Add(lVar3 + 0x20,uVar4);
  if ((local_48 & 1) != 0) {
    ppppuVar9 = local_88;
    if ((local_48 & 2) == 0) {
      ppppuVar9 = (undefined8 ****)local_88[0];
    }
    local_48 = local_48 & 0xfe;
    (*(code *)**ppppuVar9)(ppppuVar9,0);
    if ((local_48 & 2) == 0) {
      FMemory::Free(local_88[0]);
    }
  }
  if (local_180 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_180 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_180 != (longlong *)0x0)) {
      (**(code **)(*local_180 + 8))(local_180,1);
    }
  }
  FMovieSceneKeyStructHelper::SetStartingValues(lVar3 + 0x20);
  local_230 = 0;
  puVar8 = (undefined4 *)FMovieSceneKeyStructHelper::GetUnifiedKeyTime(lVar3 + 0x20,local_168);
  plVar7 = local_238;
  if (*(char *)(puVar8 + 1) != '\0') {
    uVar10 = *puVar8;
  }
  *(undefined4 *)(lVar3 + 0x18) = uVar10;
  *param_2 = local_240;
  param_2[1] = local_238;
  if (local_238 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_238 + 1) = (int)local_238[1] + 1;
    UNLOCK();
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_238 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141ff4c80 FUN_141ff4c80 body=1156 status=ok
// SIG undefined FUN_141ff4c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ** FUN_141ff4c80(longlong param_1,longlong **param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 ****ppppuVar11;
  uint uVar12;
  undefined4 uVar14;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  undefined4 local_118;
  longlong **local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_98 [8];
  undefined8 ***local_90 [8];
  byte local_50;
  ulonglong local_48;
  longlong *plVar13;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar13 = (longlong *)0x0;
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
  iVar2 = *(int *)(param_1 + 0x360);
  plVar8 = plVar13;
  local_158 = param_3;
  local_108 = param_2;
  if (iVar2 == 2) {
    lVar4 = operator_new(0x28);
    plVar6 = plVar13;
    if (lVar4 != 0) {
      uVar5 = FMovieSceneVector2DKeyStruct::StaticStruct();
      plVar6 = (longlong *)FUN_141fcf7c0(lVar4,uVar5);
    }
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_144cefe80;
      plVar7[2] = (longlong)plVar6;
      plVar8 = plVar7;
    }
    local_150 = plVar6;
    local_148 = plVar8;
    SharedPointerInternals::EnableSharedFromThis(&local_150,plVar6,plVar6);
    if (param_2 != &local_150) {
      *param_2 = plVar6;
      local_150 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_148);
      plVar8 = local_148;
    }
  }
  else if (iVar2 == 3) {
    lVar4 = operator_new(0x28);
    plVar6 = plVar13;
    if (lVar4 != 0) {
      uVar5 = FMovieSceneVectorKeyStruct::StaticStruct();
      plVar6 = (longlong *)FUN_141fcf7c0(lVar4,uVar5);
    }
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_144cefe80;
      plVar7[2] = (longlong)plVar6;
      plVar8 = plVar7;
    }
    local_140 = plVar6;
    local_138 = plVar8;
    SharedPointerInternals::EnableSharedFromThis(&local_140,plVar6,plVar6);
    if (param_2 != &local_140) {
      *param_2 = plVar6;
      local_140 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_138);
      plVar8 = local_138;
    }
  }
  else {
    if (iVar2 != 4) goto LAB_141ff4f04;
    lVar4 = operator_new(0x28);
    plVar6 = plVar13;
    if (lVar4 != 0) {
      uVar5 = FMovieSceneVector4KeyStruct::StaticStruct();
      plVar6 = (longlong *)FUN_141fcf7c0(lVar4,uVar5);
    }
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_144cefe80;
      plVar7[2] = (longlong)plVar6;
      plVar8 = plVar7;
    }
    local_130 = plVar6;
    local_128 = plVar8;
    SharedPointerInternals::EnableSharedFromThis(&local_130,plVar6,plVar6);
    if (param_2 != &local_130) {
      *param_2 = plVar6;
      local_130 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_128);
      plVar8 = local_128;
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
LAB_141ff4f04:
  puVar10 = local_158;
  if (*param_2 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)(**param_2 + 0x10))();
    local_120 = plVar8;
    if (0 < *(int *)(param_1 + 0x360)) {
      do {
        local_e8 = *puVar10;
        uStack_e4 = puVar10[1];
        uStack_e0 = puVar10[2];
        uStack_dc = puVar10[3];
        uVar5 = *(undefined8 *)(param_1 + 0xd0);
        lVar4 = FMovieSceneFloatChannel::StaticStruct();
        puVar9 = (undefined8 *)FUN_141f58ba0(uVar5,local_b8,*(undefined8 *)(lVar4 + 0x18),plVar13);
        plVar6 = (longlong *)puVar9[1];
        uVar5 = *puVar9;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
          UNLOCK();
        }
        uVar14 = *(undefined4 *)(puVar9 + 3);
        lVar4 = FMovieSceneFloatChannel::StaticStruct();
        uVar3 = *(undefined8 *)(lVar4 + 0x18);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
          UNLOCK();
        }
        local_100 = uVar5;
        local_f8 = plVar6;
        FUN_141f384d0(local_d8,&local_100,uVar3,uVar14);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (local_b0 != (longlong *)0x0)) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
        uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,plVar13);
        uVar5 = FUN_141fc51a0(local_90,local_d8,uVar5,&local_e8);
        FMovieSceneKeyStructHelper::Add(plVar8 + 2,uVar5);
        if ((local_50 & 1) != 0) {
          ppppuVar11 = local_90;
          if ((local_50 & 2) == 0) {
            ppppuVar11 = (undefined8 ****)local_90[0];
          }
          local_50 = local_50 & 0xfe;
          (*(code *)**ppppuVar11)(ppppuVar11,0);
          if ((local_50 & 2) == 0) {
            FMemory::Free(local_90[0]);
          }
        }
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (local_d0 != (longlong *)0x0)) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
        uVar12 = (int)plVar13 + 1;
        plVar13 = (longlong *)(ulonglong)uVar12;
        puVar10 = local_158;
        param_2 = local_108;
      } while ((int)uVar12 < *(int *)(param_1 + 0x360));
    }
    plVar8 = local_120;
    uVar14 = 0;
    local_118 = 0;
    puVar10 = (undefined4 *)FMovieSceneKeyStructHelper::GetUnifiedKeyTime(local_120 + 2,local_98);
    if (*(char *)(puVar10 + 1) != '\0') {
      uVar14 = *puVar10;
    }
    *(undefined4 *)(plVar8 + 1) = uVar14;
  }
  return param_2;
}



// FUNCTION 141ff5110 GetKeyTimes body=79 status=ok
// SIG undefined GetKeyTimes(void)

void FMovieSceneActorReferenceData::GetKeyTimes
               (longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  longlong local_18;
  
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x40);
  local_18 = param_1 + 0x30;
  FMovieSceneChannelData::GetKeyTimes(local_28,&local_38,&local_48);
  return;
}



// FUNCTION 141ff5160 GetKeyTimes body=79 status=ok
// SIG undefined GetKeyTimes(void)

void FMovieSceneEventChannel::GetKeyTimes(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  longlong local_18;
  
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x28);
  local_18 = param_1 + 0x18;
  FMovieSceneChannelData::GetKeyTimes(local_28,&local_38,&local_48);
  return;
}



// FUNCTION 141ff51b0 GetKeyTimes body=79 status=ok
// SIG undefined GetKeyTimes(void)

void FMovieSceneStringChannel::GetKeyTimes(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  longlong local_18;
  
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x40);
  local_18 = param_1 + 0x18;
  FMovieSceneChannelData::GetKeyTimes(local_28,&local_38,&local_48);
  return;
}



// FUNCTION 141ff5200 GetKeys body=99 status=ok
// SIG undefined GetKeys(void)

void FMovieSceneActorReferenceData::GetKeys
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_28 [16];
  longlong local_18;
  
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x40);
  local_18 = param_1 + 0x30;
  FMovieSceneChannelData::GetKeys(local_28,param_2,param_3,param_4);
  return;
}



// FUNCTION 141ff5270 GetKeys body=99 status=ok
// SIG undefined GetKeys(void)

void FMovieSceneEventChannel::GetKeys
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_28 [16];
  longlong local_18;
  
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x28);
  local_18 = param_1 + 0x18;
  FMovieSceneChannelData::GetKeys(local_28,param_2,param_3,param_4);
  return;
}



// FUNCTION 141ff52e0 GetKeys body=99 status=ok
// SIG undefined GetKeys(void)

void FMovieSceneStringChannel::GetKeys
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_28 [16];
  longlong local_18;
  
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x40);
  local_18 = param_1 + 0x18;
  FMovieSceneChannelData::GetKeys(local_28,param_2,param_3,param_4);
  return;
}



// FUNCTION 141ff5350 FUN_141ff5350 body=12 status=ok
// SIG undefined FUN_141ff5350(void)

undefined4 * FUN_141ff5350(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xe0);
  return param_2;
}



// FUNCTION 141ff5360 FUN_141ff5360 body=114 status=ok
// SIG undefined FUN_141ff5360(void)

undefined8 FUN_141ff5360(undefined4 *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1429f11d0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000141ff53be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_2 + 0x560))(param_2,*param_1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 141ff53e0 GetOffsetTime body=240 status=ok
// SIG undefined GetOffsetTime(void)

undefined8 * UMovieSceneAudioSection::GetOffsetTime(longlong param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fStackX_c;
  
  uVar4 = UMovieScene::GetPrivateStaticClass();
  lVar5 = UObjectBaseUtility::GetTypedOuter(param_1,uVar4);
  dVar6 = ((double)*(float *)(param_1 + 0xe8) * (double)(int)*(undefined8 *)(lVar5 + 0xb8)) /
          (double)(int)((ulonglong)*(undefined8 *)(lVar5 + 0xb8) >> 0x20);
  lVar5 = (longlong)dVar6;
  dVar2 = dVar6;
  if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar6)) {
    auVar1._8_4_ = SUB84(dVar6,0);
    auVar1._0_8_ = dVar6;
    auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uVar3 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar5 - (ulonglong)(uVar3 & 1));
  }
  dVar6 = dVar6 - dVar2;
  dVar7 = dVar6;
  if ((0.0 < dVar6) && (dVar7 = 0.9999999403953552, dVar6 <= 0.9999999403953552)) {
    dVar7 = dVar6;
  }
  fVar8 = (float)dVar7;
  if (0.0 <= fVar8) {
    fStackX_c = 0.99999994;
    if (fVar8 <= 0.99999994) {
      fStackX_c = fVar8;
    }
  }
  else {
    fStackX_c = 0.0;
  }
  *param_2 = CONCAT44(fStackX_c,(int)dVar2);
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// FUNCTION 141ff54d0 FUN_141ff54d0 body=146 status=ok
// SIG undefined FUN_141ff54d0(void)

longlong FUN_141ff54d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = AGPingUsable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(longlong *)(param_1 + 0x458);
    }
    lVar2 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return param_1;
    }
  }
  return 0;
}



// FUNCTION 141ff57d0 GetSnapTimes body=788 status=ok
// SIG undefined GetSnapTimes(void)

void UMovieSceneSkeletalAnimationSection::GetSnapTimes
               (longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  float fVar14;
  float fStackX_c;
  
  if (param_3 != '\0') {
    if (*(char *)(param_1 + 0x90) != '\x02') {
      iVar6 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar6 * 4) = *(undefined4 *)(param_1 + 0x94);
    }
    if (*(char *)(param_1 + 0x98) != '\x02') {
      iVar6 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar6 * 4) = *(undefined4 *)(param_1 + 0x9c);
    }
  }
  uVar3 = UMovieScene::GetPrivateStaticClass();
  lVar4 = UObjectBaseUtility::GetTypedOuter(param_1,uVar3);
  fVar9 = *(float *)(param_1 + 0xf0);
  iVar6 = *(int *)(param_1 + 0x94);
  if (*(char *)(param_1 + 0x90) != '\x01') {
    iVar6 = *(int *)(param_1 + 0x94) + 1;
  }
  iVar7 = *(int *)(param_1 + 0x9c) + 1;
  if (*(char *)(param_1 + 0x98) != '\x01') {
    iVar7 = *(int *)(param_1 + 0x9c);
  }
  if (ABS(fVar9) <= 1e-08) {
    fVar9 = 1.0;
  }
  fVar14 = 0.0;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = *(float *)(*(longlong *)(param_1 + 0xe0) + 0x90);
  }
  dVar13 = ((double)((fVar8 - (*(float *)(param_1 + 0xec) + *(float *)(param_1 + 0xe8))) / fVar9) *
           (double)(int)*(undefined8 *)(lVar4 + 0xb8)) /
           (double)(int)((ulonglong)*(undefined8 *)(lVar4 + 0xb8) >> 0x20);
  lVar4 = (longlong)dVar13;
  dVar10 = dVar13;
  if ((lVar4 != -0x8000000000000000) && ((double)lVar4 != dVar13)) {
    auVar11._8_8_ = dVar13;
    auVar11._0_8_ = dVar13;
    uVar1 = movmskpd(0,auVar11);
    dVar10 = (double)(longlong)(lVar4 - (ulonglong)(uVar1 & 1));
  }
  dVar13 = dVar13 - dVar10;
  if ((0.0 < dVar13) && (0.9999999403953552 < dVar13)) {
    dVar13 = 0.9999999403953552;
  }
  fStackX_c = (float)dVar13;
  if (0.0 <= fStackX_c) {
    if (0.99999994 <= fStackX_c) {
      fStackX_c = 0.99999994;
    }
  }
  else {
    fStackX_c = 0.0;
  }
  if (1 < (int)dVar10) {
    for (; (iVar6 < iVar7 + -1 || ((iVar6 == iVar7 + -1 && (fVar14 < 0.0))));
        fVar14 = fVar14 - fVar9) {
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      fVar14 = fVar14 + fStackX_c;
      *(int *)(*param_2 + (longlong)iVar2 * 4) = iVar6;
      iVar2 = ((int)ROUND(fVar14 * 2.0 - 0.5) >> 1) + (int)dVar10;
      iVar6 = iVar6 + iVar2;
      iVar5 = (int)fVar14;
      fVar9 = fVar14;
      if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar14)) {
        auVar12._4_4_ = fVar14;
        auVar12._0_4_ = fVar14;
        auVar12._8_8_ = 0;
        uVar1 = movmskps(iVar2,auVar12);
        fVar9 = (float)(int)(iVar5 - (uVar1 & 1));
      }
    }
  }
  return;
}



// FUNCTION 141ff5af0 GetStartOffsetAtTrimTime body=400 status=ok
// SIG undefined GetStartOffsetAtTrimTime(void)

void GetStartOffsetAtTrimTime(undefined8 *param_1,longlong *param_2,int param_3)

{
  float fVar1;
  float fStackX_c;
  
  fStackX_c = (float)((ulonglong)*param_1 >> 0x20);
  if (*param_2 == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(*param_2 + 0x90);
  }
  if (ABS(fVar1 - (*(float *)(param_2 + 1) + *(float *)((longlong)param_2 + 0xc))) <= 1e-08) {
    AK::MemoryMgr::StartProfileThreadUsage
              ((int)((ulonglong)param_1[1] >> 0x20) *
               (((int)*param_1 - param_3) +
               ((int)ROUND(((fStackX_c - 0.0) + (fStackX_c - 0.0)) - 0.5) >> 1)));
  }
  return;
}



// FUNCTION 141ff5c80 GetStartOffsetAtTrimTime body=212 status=ok
// SIG undefined GetStartOffsetAtTrimTime(void)

void GetStartOffsetAtTrimTime(void)

{
  return;
}



// FUNCTION 141ff5d60 GetStreamingLevel body=380 status=ok
// SIG undefined GetStreamingLevel(void)

longlong GetStreamingLevel(undefined2 **param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  bVar11 = false;
  cVar7 = FPackageName::IsShortPackageName();
  if (cVar7 != '\0') {
    local_38 = (undefined2 *)0x0;
    local_2c = 0;
    iVar9 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      iVar9 = 0;
    }
    local_30 = iVar9 + 2;
    if (0 < local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    uVar6 = local_2c;
    iVar5 = local_30;
    puVar4 = local_38;
    *local_38 = 0x2f;
    _guard_xfg_dispatch_icall_nop(local_38 + 1,*param_1,(longlong)iVar9 * 2);
    puVar4[(longlong)iVar9 + 1] = 0;
    if (param_1 == &local_38) {
      if (puVar4 != (undefined2 *)0x0) {
        FMemory::Free(puVar4);
      }
    }
    else {
      if (*param_1 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *param_1 = puVar4;
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
    }
  }
  plVar10 = *(longlong **)(param_2 + 0x88);
  plVar1 = plVar10 + *(int *)(param_2 + 0x90);
  do {
    if (plVar10 == plVar1) {
      if (*param_1 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return 0;
    }
    lVar2 = *plVar10;
    if (lVar2 == 0) {
LAB_141ff5e72:
      bVar3 = false;
    }
    else {
      bVar11 = true;
      uVar8 = ULevelStreaming::GetWorldAssetPackageName(lVar2,&local_38);
      cVar7 = FString::EndsWith(uVar8,param_1,1);
      if (cVar7 == '\0') goto LAB_141ff5e72;
      bVar3 = true;
    }
    if ((bVar11) && (bVar11 = false, local_38 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if (bVar3) {
      if (*param_1 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return lVar2;
    }
    plVar10 = plVar10 + 1;
  } while( true );
}



// FUNCTION 141ff5ee0 FUN_141ff5ee0 body=267 status=ok
// SIG undefined FUN_141ff5ee0(void)

void FUN_141ff5ee0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined **local_res8;
  undefined1 local_res18 [8];
  longlong local_48;
  undefined4 local_40;
  undefined1 local_38 [40];
  undefined1 local_10;
  uint local_c;
  
  param_1 = param_1 + 0xc64;
  cVar1 = FWeakObjectPtr::IsValid(param_1);
  if (cVar1 == '\0') {
    FActorSpawnParameters::FActorSpawnParameters(local_38);
    local_c = local_c | 0x40;
    local_10 = 1;
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x70))(param_2);
    uVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
    uVar4 = FUN_14290f280();
    lVar5 = UWorld::SpawnActor(uVar3,uVar4,0,0,local_38);
    if (lVar5 != 0) {
      FWeakObjectPtr::operator=(param_1,lVar5);
      local_res8 = &PTR_FUN_144f48178;
      puVar6 = (undefined8 *)FMovieSceneAnimTypeID::Unique(local_res18);
      local_40 = (undefined4)param_2[0x5b];
      local_48 = param_2[0x5a];
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_2 + 0x1f,*puVar6,&local_res8,lVar5,*(undefined1 *)((longlong)param_2 + 0x2dc)
                 ,&local_48);
    }
  }
  FWeakObjectPtr::Get(param_1);
  return;
}



// FUNCTION 141ff5ff0 GetTrackName body=90 status=ok
// SIG undefined GetTrackName(void)

undefined8 UMovieSceneComponentMaterialTrack::GetTrackName(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *local_18;
  undefined8 local_10;
  
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  FString::AppendInt(&local_18,*(undefined4 *)(param_1 + 0x68));
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FName::FName(param_2,puVar1,1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141ff60f0 InitialPlacement body=218 status=ok
// SIG undefined InitialPlacement(void)

void UMovieScene3DPathSection::InitialPlacement
               (longlong param_1,undefined8 param_2,int param_3,int param_4,undefined1 param_5)

{
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  longlong local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_1c;
  
  FUN_141f546c0();
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_48,param_1 + 0x118,param_1 + 0x140);
  local_38 = param_1 + 0x128;
  local_30 = 0;
  local_2c = 2;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
            (local_48,local_res20,param_3,&local_30,param_5);
  if (0 < param_4) {
    local_30 = 0x3f800000;
    local_2c = 2;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
              (local_48,local_res20,param_3 + param_4,&local_30,param_5);
  }
  return;
}



// FUNCTION 141ff61d0 FUN_141ff61d0 body=513 status=ok
// SIG undefined FUN_141ff61d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ff61d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_e8 [32];
  int local_c8 [2];
  undefined8 *local_c0;
  longlong local_b8;
  undefined8 **local_b0;
  undefined8 local_a8 [6];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar7 = (**(code **)(*param_5 + 0x78))();
  if (lVar7 != 0) {
    uVar8 = UMovieSceneTransformOrigin::GetPrivateStaticClass();
    plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar8);
    if (plVar9 == (longlong *)0x0) {
      uVar8 = UMovieSceneTransformOrigin::GetPrivateStaticClass();
      cVar6 = UClass::ImplementsInterface(*(undefined8 *)(lVar7 + 0x10),uVar8);
      if (cVar6 == '\0') {
        return;
      }
    }
    if (*(char *)(param_1 + 0x660) == '\x01') {
      if (plVar9 == (longlong *)0x0) {
        puVar10 = (undefined8 *)FUN_142003300(local_78,lVar7);
      }
      else {
        (**(code **)(*plVar9 + 0x10))(plVar9,local_a8);
        puVar10 = local_a8;
      }
      plVar9 = *(longlong **)(param_4 + 8);
      uVar8 = *puVar10;
      uVar1 = puVar10[1];
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      uVar4 = puVar10[4];
      uVar5 = puVar10[5];
      TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
      ::FindId(plVar9,local_c8,param_4 + 0x24);
      puVar10 = (undefined8 *)0x0;
      puVar11 = puVar10;
      if (local_c8[0] != -1) {
        puVar11 = (undefined8 *)((longlong)local_c8[0] * 0x20 + *plVar9);
      }
      puVar12 = puVar11 + 2;
      if (puVar11 == (undefined8 *)0x0) {
        puVar12 = puVar10;
      }
      if (puVar12 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)operator_new(0x40);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &PTR_FUN_144f46cf8;
          uVar13 = uRam0000000146acb84c;
          *(undefined4 *)(puVar11 + 2) = 0;
          *(undefined4 *)((longlong)puVar11 + 0x14) = 0;
          *(undefined4 *)(puVar11 + 3) = 0;
          *(uint *)((longlong)puVar11 + 0x1c) = uVar13;
          puVar11[4] = 0;
          puVar11[5] = 0;
          uVar13 = uRam0000000146acb844 & uRam0000000146acb854;
          uVar14 = uRam0000000146acb848 & uRam0000000146acb858;
          uVar15 = uRam0000000146acb84c & uRam0000000146acb85c;
          *(uint *)(puVar11 + 6) = _DAT_146acb840 & _DAT_146acb850;
          *(uint *)((longlong)puVar11 + 0x34) = uVar13;
          *(uint *)(puVar11 + 7) = uVar14;
          *(uint *)((longlong)puVar11 + 0x3c) = uVar15;
          puVar10 = puVar11;
        }
        local_b0 = &local_c0;
        local_c0 = puVar10;
        local_b8 = param_4 + 0x24;
        FUN_14058dc00(*(undefined8 *)(param_4 + 8),local_c8,&local_b8,0);
        if (local_c0 != (undefined8 *)0x0) {
          (**(code **)*local_c0)(local_c0,1);
        }
      }
      else {
        puVar10 = (undefined8 *)*puVar12;
      }
      puVar10[2] = uVar8;
      puVar10[3] = uVar1;
      puVar10[4] = uVar2;
      puVar10[5] = uVar3;
      puVar10[6] = uVar4;
      puVar10[7] = uVar5;
    }
  }
  return;
}



// FUNCTION 141ff63e0 FUN_141ff63e0 body=148 status=ok
// SIG undefined FUN_141ff63e0(void)

void FUN_141ff63e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    if ((-*(int *)(lVar2 + 0x44) & *(int *)(lVar2 + 0x44) + -1 + *(int *)(lVar2 + 0x40)) == 0) {
      uVar5 = 1;
    }
    else {
      lVar2 = FWeakObjectPtr::Get(param_1 + 8);
      uVar5 = *(int *)(lVar2 + 0x44) + -1 + *(int *)(lVar2 + 0x40) & -*(int *)(lVar2 + 0x44);
    }
    uVar3 = FMemory::Malloc((longlong)(int)uVar5,0);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(*plVar4 + 0x2a8))(plVar4,*(undefined8 *)(param_1 + 0x10),1);
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}



// FUNCTION 141ff6480 FUN_141ff6480 body=39 status=ok
// SIG undefined FUN_141ff6480(void)

void FUN_141ff6480(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f42f98;
    return;
  }
  return;
}



// FUNCTION 141ff64b0 FUN_141ff64b0 body=207 status=ok
// SIG undefined FUN_141ff64b0(void)

int FUN_141ff64b0(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  if (*(int *)(param_1 + 0x24) < iVar2 + 1) {
    TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>::ResizeGrow
              (param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar3 = param_1;
  }
  lVar1 = (longlong)param_3 * 0x18;
  _guard_xfg_dispatch_icall_nop
            ((void *)(lVar3 + lVar1 + 0x18),(void *)(lVar3 + lVar1),
             (longlong)(iVar2 - param_3) * 0x18);
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar3 = param_1;
  }
  *(undefined8 *)(lVar3 + lVar1) = *param_2;
  *(undefined8 *)(lVar3 + 8 + lVar1) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar1) = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar1) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(lVar3 + 0x14 + lVar1) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_2[2] = 0;
  return param_3;
}



// FUNCTION 141ff6580 Interrogate body=319 status=ok
// SIG undefined Interrogate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableTokenStack<float>::Interrogate
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 auStack_b8 [32];
  longlong **local_98;
  longlong *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined4 local_58;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)FMovieSceneBlendingAccumulator::FindActuator<float>(param_4,param_5);
  if (plVar2 != (longlong *)0x0) {
    puVar4 = *(ulonglong **)(param_1 + 0x10);
    uVar6 = 0;
    local_70 = 0;
    local_64 = 0;
    local_58 = 0;
    local_4c = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x18) < puVar4) {
      uVar5 = uVar6;
    }
    local_88 = plVar2;
    local_80 = param_1;
    local_78 = param_2;
    if (uVar5 != 0) {
      do {
        puVar1 = (ulonglong *)*puVar4;
        local_98 = &local_88;
        puVar3 = puVar4;
        if ((puVar1[1] & 2) == 0) {
          puVar3 = puVar1;
        }
        (**(code **)(*(longlong *)*puVar3 + 8))
                  ((longlong *)*puVar3,local_68,*(undefined4 *)((longlong)puVar1 + 0x24),
                   (char)puVar1[5]);
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    uVar7 = MovieScene::TMaskedBlendable<float,1>::Resolve<float>(local_68,&local_88);
    local_98 = (longlong **)param_6;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_3,uVar7,param_1);
  }
  return;
}



// FUNCTION 141ff66c0 Interrogate body=377 status=ok
// SIG undefined Interrogate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableTokenStack<F3DTransformTrackToken>::Interrogate
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_158 [32];
  longlong **local_138;
  longlong *local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [40];
  undefined1 local_e0 [36];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_70;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar2 = (longlong *)FUN_141fc9730(param_4,param_5);
  if (plVar2 != (longlong *)0x0) {
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    puVar4 = *(ulonglong **)(param_1 + 0x10);
    uVar6 = 0;
    local_110 = 0;
    local_bc = 0;
    local_70 = 0;
    local_44 = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x18) < puVar4) {
      uVar5 = uVar6;
    }
    local_128 = plVar2;
    local_120 = param_1;
    local_118 = param_2;
    if (uVar5 != 0) {
      do {
        puVar1 = (ulonglong *)*puVar4;
        local_138 = &local_128;
        puVar3 = puVar4;
        if ((puVar1[5] & 2) == 0) {
          puVar3 = puVar1;
        }
        (**(code **)(*(longlong *)*puVar3 + 8))
                  ((longlong *)*puVar3,local_e0,*(undefined4 *)((longlong)puVar1 + 0x44),
                   (char)puVar1[9]);
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    MovieScene::TMaskedBlendable<float,9>::Resolve<F3DTransformTrackToken>
              (local_e0,local_108,&local_128);
    local_138 = (longlong **)param_6;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_3,local_108,param_1);
  }
  return;
}



// FUNCTION 141ff6840 Interrogate body=390 status=ok
// SIG undefined Interrogate(void)

void TBlendableTokenStack<MovieScene::FBlendedAnimation>::Interrogate
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  void *_Src;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  plVar2 = (longlong *)FUN_141fc9850(param_4,param_5);
  if (plVar2 != (longlong *)0x0) {
    uVar5 = 0;
    puVar4 = *(ulonglong **)(param_1 + 0x10);
    local_30 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    uVar7 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x18) < puVar4) {
      uVar7 = uVar5;
    }
    iVar6 = 0;
    local_48 = plVar2;
    local_40 = param_1;
    local_38 = param_2;
    if (uVar7 != 0) {
      do {
        puVar1 = (ulonglong *)*puVar4;
        puVar3 = puVar4;
        if ((puVar1[2] & 2) == 0) {
          puVar3 = puVar1;
        }
        (**(code **)(*(longlong *)*puVar3 + 8))
                  ((longlong *)*puVar3,&local_58,*(undefined4 *)((longlong)puVar1 + 0x2c),
                   (char)puVar1[6],&local_48);
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar7);
      iVar6 = (int)local_50;
    }
    _Src = local_58;
    local_68 = (void *)0x0;
    local_60 = iVar6;
    if (iVar6 == 0) {
      local_5c = 0;
    }
    else {
      TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_68,iVar6,0);
      ::_guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)iVar6 * 0x38);
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,param_3,&local_68,param_1,param_6);
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141ff69d0 Interrogate body=377 status=ok
// SIG undefined Interrogate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableTokenStack<FEulerTransform>::Interrogate
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_158 [32];
  longlong **local_138;
  longlong *local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [40];
  undefined1 local_e0 [36];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_70;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar2 = (longlong *)
           FMovieSceneBlendingAccumulator::FindActuator<FEulerTransform>(param_4,param_5);
  if (plVar2 != (longlong *)0x0) {
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    puVar4 = *(ulonglong **)(param_1 + 0x10);
    uVar6 = 0;
    local_110 = 0;
    local_bc = 0;
    local_70 = 0;
    local_44 = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x18) < puVar4) {
      uVar5 = uVar6;
    }
    local_128 = plVar2;
    local_120 = param_1;
    local_118 = param_2;
    if (uVar5 != 0) {
      do {
        puVar1 = (ulonglong *)*puVar4;
        local_138 = &local_128;
        puVar3 = puVar4;
        if ((puVar1[5] & 2) == 0) {
          puVar3 = puVar1;
        }
        (**(code **)(*(longlong *)*puVar3 + 8))
                  ((longlong *)*puVar3,local_e0,*(undefined4 *)((longlong)puVar1 + 0x44),
                   (char)puVar1[9]);
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    FUN_141fcca50(local_e0,local_108,&local_128);
    local_138 = (longlong **)param_6;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_3,local_108,param_1);
  }
  return;
}



// FUNCTION 141ff6b50 Interrogate body=345 status=ok
// SIG undefined Interrogate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableTokenStack<FMargin>::Interrogate
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_64;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar2 = (longlong *)FUN_141fc9a40(param_4,param_5);
  if (plVar2 != (longlong *)0x0) {
    local_84 = 0;
    local_7c = 0;
    puVar4 = *(ulonglong **)(param_1 + 0x10);
    uVar6 = 0;
    local_b0 = 0;
    local_88 = 0;
    local_64 = 0;
    local_4c = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x18) < puVar4) {
      uVar5 = uVar6;
    }
    local_c8 = plVar2;
    local_c0 = param_1;
    local_b8 = param_2;
    if (uVar5 != 0) {
      do {
        puVar1 = (ulonglong *)*puVar4;
        local_d8 = &local_c8;
        puVar3 = puVar4;
        if ((puVar1[2] & 2) == 0) {
          puVar3 = puVar1;
        }
        (**(code **)(*(longlong *)*puVar3 + 8))
                  ((longlong *)*puVar3,local_98,*(undefined4 *)((longlong)puVar1 + 0x2c),
                   (char)puVar1[6]);
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    MovieScene::TMaskedBlendable<float,4>::Resolve<FMargin>(local_98,local_a8,&local_c8);
    local_d8 = (longlong **)param_6;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_3,local_a8,param_1);
  }
  return;
}



// FUNCTION 141ff6cb0 Interrogate body=383 status=ok
// SIG undefined Interrogate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableTokenStack<FTransform>::Interrogate
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_168 [32];
  longlong **local_148;
  longlong *local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [36];
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_a8;
  undefined1 local_7c;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  plVar2 = (longlong *)FMovieSceneBlendingAccumulator::FindActuator<FTransform>(param_4,param_5);
  if (plVar2 != (longlong *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    puVar4 = *(ulonglong **)(param_1 + 0x10);
    uVar6 = 0;
    local_120 = 0;
    local_f4 = 0;
    local_a8 = 0;
    local_7c = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x18) < puVar4) {
      uVar5 = uVar6;
    }
    local_138 = plVar2;
    local_130 = param_1;
    local_128 = param_2;
    if (uVar5 != 0) {
      do {
        puVar1 = (ulonglong *)*puVar4;
        local_148 = &local_138;
        puVar3 = puVar4;
        if ((puVar1[6] & 2) == 0) {
          puVar3 = puVar1;
        }
        (**(code **)(*(longlong *)*puVar3 + 8))
                  ((longlong *)*puVar3,local_118,*(undefined4 *)((longlong)puVar1 + 0x4c),
                   (char)puVar1[10]);
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    MovieScene::TMaskedBlendable<float,9>::Resolve<FTransform>(local_118,local_78,&local_138);
    local_148 = (longlong **)param_6;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_3,local_78,param_1);
  }
  return;
}



// FUNCTION 141ff6e30 Interrogate body=329 status=ok
// SIG undefined Interrogate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableTokenStack<FVector2D>::Interrogate
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  longlong **local_a8;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_54;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar2 = (longlong *)FMovieSceneBlendingAccumulator::FindActuator<FVector2D>(param_4,param_5);
  if (plVar2 != (longlong *)0x0) {
    local_64 = 0;
    puVar4 = *(ulonglong **)(param_1 + 0x10);
    uVar6 = 0;
    local_78 = 0;
    local_68 = 0;
    local_54 = 0;
    local_44 = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x18) < puVar4) {
      uVar5 = uVar6;
    }
    local_90 = plVar2;
    local_88 = param_1;
    local_80 = param_2;
    if (uVar5 != 0) {
      do {
        puVar1 = (ulonglong *)*puVar4;
        local_a8 = &local_90;
        puVar3 = puVar4;
        if ((puVar1[1] & 2) == 0) {
          puVar3 = puVar1;
        }
        (**(code **)(*(longlong *)*puVar3 + 8))
                  ((longlong *)*puVar3,local_70,*(undefined4 *)((longlong)puVar1 + 0x24),
                   (char)puVar1[5]);
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    MovieScene::TMaskedBlendable<float,2>::Resolve<FVector2D>(local_70,&local_98,&local_90);
    local_a8 = (longlong **)param_6;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_3,local_98,param_1);
  }
  return;
}



// FUNCTION 141ff6f80 Interrogate body=345 status=ok
// SIG undefined Interrogate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableTokenStack<FVector4>::Interrogate
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_64;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar2 = (longlong *)FMovieSceneBlendingAccumulator::FindActuator<FVector4>(param_4,param_5);
  if (plVar2 != (longlong *)0x0) {
    local_84 = 0;
    local_7c = 0;
    puVar4 = *(ulonglong **)(param_1 + 0x10);
    uVar6 = 0;
    local_b0 = 0;
    local_88 = 0;
    local_64 = 0;
    local_4c = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x18) < puVar4) {
      uVar5 = uVar6;
    }
    local_c8 = plVar2;
    local_c0 = param_1;
    local_b8 = param_2;
    if (uVar5 != 0) {
      do {
        puVar1 = (ulonglong *)*puVar4;
        local_d8 = &local_c8;
        puVar3 = puVar4;
        if ((puVar1[2] & 2) == 0) {
          puVar3 = puVar1;
        }
        (**(code **)(*(longlong *)*puVar3 + 8))
                  ((longlong *)*puVar3,local_98,*(undefined4 *)((longlong)puVar1 + 0x2c),
                   (char)puVar1[6]);
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    MovieScene::TMaskedBlendable<float,4>::Resolve<FVector4>(local_98,local_a8,&local_c8);
    local_d8 = (longlong **)param_6;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_3,local_a8,param_1);
  }
  return;
}



// FUNCTION 141ff70e0 Interrogate body=345 status=ok
// SIG undefined Interrogate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableTokenStack<FVector>::Interrogate
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_e8 [32];
  longlong **local_c8;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [12];
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_60;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  plVar2 = (longlong *)FMovieSceneBlendingAccumulator::FindActuator<FVector>(param_4,param_5);
  if (plVar2 != (longlong *)0x0) {
    local_78 = 0;
    local_70 = 0;
    puVar4 = *(ulonglong **)(param_1 + 0x10);
    uVar6 = 0;
    local_a0 = 0;
    local_7c = 0;
    local_60 = 0;
    local_4c = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x18) < puVar4) {
      uVar5 = uVar6;
    }
    local_b8 = plVar2;
    local_b0 = param_1;
    local_a8 = param_2;
    if (uVar5 != 0) {
      do {
        puVar1 = (ulonglong *)*puVar4;
        local_c8 = &local_b8;
        puVar3 = puVar4;
        if ((puVar1[2] & 2) == 0) {
          puVar3 = puVar1;
        }
        (**(code **)(*(longlong *)*puVar3 + 8))
                  ((longlong *)*puVar3,local_88,*(undefined4 *)((longlong)puVar1 + 0x2c),
                   (char)puVar1[6]);
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    MovieScene::TMaskedBlendable<float,3>::Resolve<FVector>(local_88,local_98,&local_b8);
    local_c8 = (longlong **)param_6;
    (**(code **)(*plVar2 + 0x18))(plVar2,param_3,local_98,param_1);
  }
  return;
}



// FUNCTION 141ff7240 FUN_141ff7240 body=1107 status=ok
// SIG undefined FUN_141ff7240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ff7240(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  int *piVar12;
  float fVar13;
  undefined1 auStack_168 [32];
  float local_148;
  undefined8 local_144;
  undefined8 local_13c;
  int local_134;
  int local_130;
  ulonglong local_12c;
  undefined8 local_120;
  uint local_118;
  undefined4 uStack_114;
  uint local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined8 uStack_104;
  uint uStack_fc;
  undefined8 *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 ***local_d0 [5];
  byte local_a8;
  undefined4 local_a0;
  undefined8 uStack_9c;
  uint uStack_94;
  undefined4 local_90;
  float local_8c;
  undefined1 local_88;
  undefined8 **local_80;
  undefined8 **ppuStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int iStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar8 = 0x10;
  if (*(uint *)(param_2 + 0x24) == 0x80000000) {
    lVar9 = lVar8;
    if (*(int *)(param_2 + 0x20) != 0) {
      lVar9 = 4;
    }
    local_12c = *(ulonglong *)(lVar9 + param_2);
  }
  else {
    local_12c = (ulonglong)*(uint *)(param_2 + 0x24);
  }
  local_120 = param_3;
  FMovieScene3DTransformTemplateData::Evaluate(param_1 + 0x20,&local_80,local_12c);
  if (iStack_5c != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146acb9e8) &&
       (_Init_thread_header(&DAT_146acb9e8), DAT_146acb9e8 == -1)) {
      lVar9 = DAT_146acb9e0;
      if (DAT_146acb9e0 == 0) {
        lVar9 = FMovieSceneAnimTypeID::Initialize(&DAT_146acb9e0,0);
      }
      DAT_146acb9d8 = lVar9;
      _Init_thread_footer(&DAT_146acb9e8);
    }
    lVar9 = DAT_146acb9d8;
    uVar5 = FMovieSceneInterrogationData::GetAccumulator(param_3);
    lVar6 = FUN_141fc9730(uVar5,lVar9);
    if (lVar6 == 0) {
      plVar7 = (longlong *)FUN_141fcb620();
      plVar1 = plVar7 + 2;
      local_f0 = plVar1;
      local_e8 = plVar7;
      FUN_14044f790(&local_f0,plVar1);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_e0 = plVar1;
      local_d8 = plVar7;
      uVar5 = FMovieSceneInterrogationData::GetAccumulator(param_3);
      FMovieSceneBlendingAccumulator::DefineActuator(uVar5,lVar9,&local_e0);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        param_3 = local_120;
        if ((int)lVar6 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar12 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          param_3 = local_120;
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
            param_3 = local_120;
          }
        }
      }
    }
    uVar3 = *(uint *)(param_2 + 0x24);
    if (uVar3 == 0x80000000) {
      lVar6 = lVar8;
      if (*(int *)(param_2 + 0x20) != 0) {
        lVar6 = 4;
      }
      uVar11 = *(ulonglong *)(lVar6 + param_2);
    }
    else {
      uStack_114 = 0;
      uVar11 = (ulonglong)uVar3;
      local_118 = uVar3;
    }
    fVar13 = (float)FMovieSceneEvalTemplate::EvaluateEasing(param_1,uVar11);
    if ((*(uint *)(param_1 + 0x664) >> 9 & 1) != 0) {
      uVar3 = *(uint *)(param_2 + 0x24);
      local_148 = 1.0;
      if (uVar3 == 0x80000000) {
        if (*(int *)(param_2 + 0x20) != 0) {
          lVar8 = 4;
        }
        uVar11 = *(ulonglong *)(lVar8 + param_2);
      }
      else {
        uStack_10c = 0;
        uVar11 = (ulonglong)uVar3;
        local_110 = uVar3;
      }
      FMovieSceneFloatChannel::Evaluate(param_1 + 0x5c0,uVar11,&local_148);
      fVar13 = fVar13 * local_148;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x660);
    local_a8 = local_a8 & 0xfc;
    local_d0[0] = (undefined8 ***)FMemory::Malloc(0x30);
    uStack_104 = 0xffffffffffffffff;
    ppppuVar10 = local_d0;
    if ((local_a8 & 2) == 0) {
      ppppuVar10 = (undefined8 ****)local_d0[0];
    }
    uStack_fc = uStack_fc & 0xffffff00;
    local_a8 = local_a8 | 1;
    ppppuVar10[1] = (undefined8 ***)local_80;
    ppppuVar10[2] = (undefined8 ***)ppuStack_78;
    *ppppuVar10 = (undefined8 ***)&PTR_FUN_144f51a60;
    *(undefined4 *)(ppppuVar10 + 3) = local_70;
    *(undefined4 *)((longlong)ppppuVar10 + 0x1c) = uStack_6c;
    *(undefined4 *)(ppppuVar10 + 4) = uStack_68;
    *(undefined4 *)((longlong)ppppuVar10 + 0x24) = uStack_64;
    ppppuVar10[5] = (undefined8 ***)CONCAT44(iStack_5c,local_60);
    local_a0 = DAT_1464e8628;
    local_108 = DAT_1464e8628;
    uStack_9c = 0xffffffffffffffff;
    uStack_94 = uStack_94 & 0xffffff00;
    local_90 = 0;
    local_144 = 0;
    local_13c = 0;
    local_134 = 0;
    local_8c = fVar13;
    local_88 = uVar2;
    lVar8 = FMovieSceneInterrogationData::GetAccumulator(param_3);
    local_90 = *(undefined4 *)(param_2 + 0x3c);
    plVar1 = (longlong *)(lVar8 + 0x50);
    local_a0 = local_108;
    uStack_9c = uStack_104;
    uStack_94 = uStack_fc;
    if (*(int *)(lVar8 + 0x58) != *(int *)(lVar8 + 0x84)) {
      iVar4 = GetTypeHash(&local_144);
      lVar6 = *(longlong *)(lVar8 + 0x90);
      if (*(longlong *)(lVar8 + 0x90) == 0) {
        lVar6 = lVar8 + 0x88;
      }
      iVar4 = *(int *)(lVar6 + ((longlong)*(int *)(lVar8 + 0x98) - 1U & (longlong)iVar4) * 4);
      if (iVar4 != -1) {
        do {
          piVar12 = (int *)((longlong)iVar4 * 0x30 + *plVar1);
          if ((piVar12[4] == local_134) &&
             (((piVar12[2] == (int)local_13c && piVar12[3] == local_13c._4_4_) &&
              piVar12[1] == local_144._4_4_) && *piVar12 == (int)local_144)) {
            if ((iVar4 != -1) && (piVar12 != (int *)0x0)) goto LAB_141ff75da;
            break;
          }
          iVar4 = piVar12[10];
        } while (iVar4 != -1);
      }
    }
    local_f8 = &local_144;
    FUN_141fc7cb0(plVar1,&local_130,&local_f8,0);
    piVar12 = (int *)((longlong)local_130 * 0x30 + *plVar1);
LAB_141ff75da:
    FUN_141fc5720(piVar12 + 6,lVar9,local_d0);
    if ((local_a8 & 1) != 0) {
      ppppuVar10 = local_d0;
      if ((local_a8 & 2) == 0) {
        ppppuVar10 = (undefined8 ****)local_d0[0];
      }
      local_a8 = local_a8 & 0xfe;
      (*(code *)**ppppuVar10)(ppppuVar10,0);
      if ((local_a8 & 2) == 0) {
        FMemory::Free(local_d0[0]);
      }
    }
  }
  return;
}



// FUNCTION 141ff76b0 IsValid body=45 status=ok
// SIG undefined IsValid(void)

undefined1 FStructOnScope::IsValid(longlong param_1)

{
  char cVar1;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141ff76e0 MakeSafeLevelName body=902 status=ok
// SIG undefined MakeSafeLevelName(void)

longlong * MakeSafeLevelName(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  void *pvVar9;
  void *_Src;
  void *pvVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  void *local_68;
  int local_60;
  int local_5c;
  longlong local_58 [2];
  longlong local_48 [2];
  
  if (*(int *)(param_3 + 0xf0) < 2) {
    FName::ToString(param_2,param_1);
    return param_1;
  }
  puVar5 = (undefined8 *)FPackageName::GetShortName(local_58);
  iVar7 = *(int *)(param_3 + 0xf0);
  pvVar12 = (void *)0x0;
  iVar4 = 0;
  if (iVar7 < 2) {
    _Src = (void *)*puVar5;
    *puVar5 = 0;
    iVar3 = *(int *)(puVar5 + 1);
    puVar5[1] = 0;
    iVar13 = *(int *)((longlong)puVar5 + 0xc);
  }
  else {
    iVar11 = *(int *)(puVar5 + 1) + -1;
    if (*(int *)(puVar5 + 1) == 0) {
      iVar11 = iVar4;
    }
    if ((iVar7 != 0) || (iVar3 = 1, iVar11 == 0)) {
      iVar3 = iVar4;
    }
    pvVar10 = *(void **)(param_3 + 0xe8);
    local_68 = (void *)0x0;
    local_60 = iVar7;
    if ((iVar7 == 0) && (iVar3 + iVar11 == 0)) {
      local_5c = 0;
      _Src = pvVar12;
      iVar7 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar7 + iVar3 + iVar11,0);
      _Src = local_68;
      _guard_xfg_dispatch_icall_nop(local_68,pvVar10,(longlong)iVar7 * 2);
      iVar7 = local_60;
    }
    pvVar10 = (void *)*puVar5;
    iVar13 = local_5c;
    iVar3 = iVar7;
    if (iVar11 != 0) {
      local_60 = iVar7 + (uint)(iVar7 == 0) + iVar11;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar7);
        _Src = local_68;
      }
      iVar13 = local_5c;
      iVar3 = local_60;
      pvVar9 = (void *)((longlong)_Src + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar9,pvVar10,(longlong)iVar11 * 2);
      *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar9) = 0;
    }
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  cVar2 = FPackageName::IsShortPackageName(*param_2);
  pvVar10 = _Src;
  if (cVar2 == '\0') {
    FName::ToString(param_2,local_48);
    plVar6 = (longlong *)FUN_1416f9840(local_58);
    lVar8 = plVar6[1];
    local_68 = (void *)*plVar6;
    *plVar6 = 0;
    local_60 = (int)plVar6[1];
    local_5c = *(int *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
    iVar7 = local_60;
    if (local_5c < (int)((2 - (uint)((int)lVar8 != 0)) + local_60)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
      iVar7 = local_60;
    }
    local_60 = (2 - (uint)(iVar7 != 0)) + iVar7;
    pvVar9 = local_68;
    if (local_5c < local_60) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar7);
      pvVar9 = local_68;
    }
    puVar1 = (undefined2 *)((longlong)pvVar9 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    *puVar1 = 0x2f;
    puVar1[1] = 0;
    if (local_60 < 2) {
      local_68 = (void *)0x0;
      pvVar10 = pvVar12;
      iVar13 = iVar4;
      local_60 = iVar3;
      if (iVar3 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar3,0);
        pvVar10 = local_68;
        _guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)iVar3 * 2);
        iVar13 = local_5c;
        iVar3 = local_60;
      }
    }
    else {
      iVar7 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar7 = iVar4;
      }
      if ((local_60 != 0) || (iVar4 = 1, iVar7 == 0)) {
        iVar4 = 0;
      }
      iVar4 = iVar4 + iVar7 + local_60;
      local_68 = pvVar9;
      if (local_5c < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,iVar4);
      }
      iVar4 = local_60;
      pvVar9 = pvVar12;
      pvVar10 = local_68;
      iVar13 = local_5c;
      iVar3 = local_60;
      if (iVar7 != 0) {
        lVar8 = (longlong)local_60;
        local_60 = iVar7 + (uint)(local_60 == 0) + local_60;
        if (local_5c < local_60) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar4);
        }
        iVar13 = local_5c;
        iVar3 = local_60;
        pvVar12 = (void *)((longlong)local_68 + (lVar8 - (ulonglong)(iVar4 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar12,_Src,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar12) = 0;
        pvVar10 = local_68;
      }
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  *param_1 = (longlong)pvVar10;
  *(int *)(param_1 + 1) = iVar3;
  *(int *)((longlong)param_1 + 0xc) = iVar13;
  return param_1;
}



// FUNCTION 141ff7a70 FUN_141ff7a70 body=708 status=ok
// SIG undefined FUN_141ff7a70(void)

/* WARNING: Removing unreachable block (ram,0x000141ff7b1c) */

void FUN_141ff7a70(longlong *param_1,ulonglong param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  double dVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  ulonglong local_58 [9];
  
  uVar3 = *(int *)((longlong)param_1 + 0xd4) - 1;
  local_res8 = (ulonglong)uVar3;
  uVar1 = *(uint *)(param_1 + 0x1a);
  local_res10 = (ulonglong)uVar1;
  local_58[0] = local_res10;
  local_res20 = local_res8;
  uVar6 = (uint)param_2;
  if (((int)uVar6 < (int)uVar1) ||
     ((local_res8._4_4_ = (float)(param_2 >> 0x20), uVar6 == uVar1 && (local_res8._4_4_ < 0.0)))) {
    puVar2 = local_58;
  }
  else if (((int)uVar6 < (int)uVar3) || ((uVar6 == uVar3 && (local_res8._4_4_ < 0.0)))) {
    puVar2 = &local_res18;
  }
  else {
    puVar2 = &local_res20;
  }
  fVar10 = *(float *)(param_1 + 2);
  if (ABS(fVar10) <= 1e-08) {
    fVar10 = 1.0;
  }
  if (*param_1 == 0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = *(float *)(*param_1 + 0x90);
  }
  local_res8._4_4_ = (float)(*puVar2 >> 0x20);
  fVar9 = fVar9 - (*(float *)(param_1 + 1) + *(float *)((longlong)param_1 + 0xc));
  local_res8._4_4_ = local_res8._4_4_ - 0.0;
  iVar4 = (int)ROUND((local_res8._4_4_ + local_res8._4_4_) - 0.5) >> 1;
  local_res8._4_4_ = local_res8._4_4_ - (float)iVar4;
  if (0.0 <= local_res8._4_4_) {
    if (0.99999994 <= local_res8._4_4_) {
      local_res8._4_4_ = 0.99999994;
    }
  }
  else {
    local_res8._4_4_ = 0.0;
  }
  dVar8 = ((double)(int)(((int)*puVar2 - uVar1) + iVar4) + (double)local_res8._4_4_) *
          (double)fVar10;
  lVar5 = (longlong)dVar8;
  if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != dVar8)) {
    auVar7._8_8_ = dVar8;
    auVar7._0_8_ = dVar8;
    uVar1 = movmskpd(0,auVar7);
    dVar8 = (double)(longlong)(lVar5 - (ulonglong)(uVar1 & 1));
  }
  if ((0.0 < fVar9) && (ABS(fVar9) <= 1e-08)) {
    local_res18 = param_2;
    AK::MemoryMgr::StartProfileThreadUsage((int)((ulonglong)param_3 >> 0x20) * (int)dVar8);
  }
  return;
}



// FUNCTION 141ff7d40 MultiChannelFromData body=266 status=ok
// SIG undefined MultiChannelFromData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void MovieScene::MultiChannelFromData(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FRotator::Euler(param_1 + 3,&local_a8);
  uVar1 = param_1[8];
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  *param_2 = *param_1;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = local_a8;
  param_2[4] = local_a4;
  param_2[5] = local_a0;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  *(ulonglong *)(param_2 + 8) = CONCAT44(0x1ff,uVar1);
  return;
}



// FUNCTION 141ff7e50 MultiChannelFromData body=230 status=ok
// SIG undefined MultiChannelFromData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void MovieScene::MultiChannelFromData(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = param_1[8];
  uVar5 = param_1[3];
  uVar6 = param_1[4];
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  uVar2 = param_1[6];
  uVar3 = param_1[5];
  uVar4 = param_1[7];
  *param_2 = *param_1;
  param_2[1] = uVar7;
  param_2[2] = uVar8;
  param_2[3] = uVar3;
  param_2[4] = uVar5;
  param_2[5] = uVar6;
  param_2[6] = uVar2;
  param_2[7] = uVar4;
  *(ulonglong *)(param_2 + 8) = CONCAT44(0x1ff,uVar1);
  return;
}



// FUNCTION 141ff7f40 MultiChannelFromData body=308 status=ok
// SIG undefined MultiChannelFromData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void MovieScene::MultiChannelFromData(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b8 = *param_1;
  uStack_b4 = param_1[1];
  uStack_b0 = param_1[2];
  uStack_ac = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = FQuat::Rotator(&local_b8,local_a8);
  FRotator::Euler(uVar7,&local_c8);
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar3 = param_1[10];
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = local_c8;
  param_2[4] = local_c4;
  param_2[5] = local_c0;
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  *(ulonglong *)(param_2 + 8) = CONCAT44(0x1ff,uVar3);
  return;
}



// FUNCTION 141ff8080 Offset body=65 status=ok
// SIG undefined Offset(void)

void FMovieSceneActorReferenceData::Offset(longlong param_1,undefined4 param_2)

{
  undefined1 local_28 [16];
  longlong local_18;
  
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x40);
  local_18 = param_1 + 0x30;
  FMovieSceneChannelData::Offset(local_28,param_2);
  return;
}



// FUNCTION 141ff80d0 FUN_141ff80d0 body=65 status=ok
// SIG undefined FUN_141ff80d0(void)

void FUN_141ff80d0(longlong param_1,undefined4 param_2)

{
  undefined1 local_28 [16];
  longlong local_18;
  
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x28);
  local_18 = param_1 + 0x18;
  FMovieSceneChannelData::Offset(local_28,param_2);
  return;
}



// FUNCTION 141ff8120 Offset body=65 status=ok
// SIG undefined Offset(void)

void FMovieSceneStringChannel::Offset(longlong param_1,undefined4 param_2)

{
  undefined1 local_28 [16];
  longlong local_18;
  
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x40);
  local_18 = param_1 + 0x18;
  FMovieSceneChannelData::Offset(local_28,param_2);
  return;
}



// FUNCTION 141ff8170 OnBindingsUpdated body=117 status=ok
// SIG undefined OnBindingsUpdated(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UMovieScene3DConstraintSection::OnBindingsUpdated(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  int local_res8 [2];
  
  puVar1 = (undefined8 *)(param_1 + 0xf8);
  piVar4 = (int *)TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
                  ::FindId(param_2,local_res8,puVar1);
  if (*piVar4 != -1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_2,local_res8,puVar1);
    uVar3 = _DAT_00000018;
    if (local_res8[0] != -1) {
      puVar2 = (undefined8 *)(*param_2 + 0x10 + (longlong)local_res8[0] * 0x28);
      uVar3 = puVar2[1];
      *puVar1 = *puVar2;
      *(undefined8 *)(param_1 + 0x100) = uVar3;
      return;
    }
    *puVar1 = _DAT_00000010;
    *(undefined8 *)(param_1 + 0x100) = uVar3;
  }
  return;
}



// FUNCTION 141ff8200 FUN_141ff8200 body=100 status=ok
// SIG undefined FUN_141ff8200(void)

void FUN_141ff8200(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  if (*(char *)(param_1 + 0x5c) == '\0') {
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x5c) != '\x01') {
      puVar1 = (undefined8 *)FUN_141ff2720(local_res8,1);
      uVar2 = *puVar1;
      *(undefined2 *)(param_2 + 0x10) = 0xf9b;
      *(undefined8 *)(param_2 + 0xe8) = uVar2;
      *(undefined1 *)(param_2 + 0x12) = 1;
      return;
    }
    uVar2 = 2;
  }
  puVar1 = (undefined8 *)FUN_141ff2720(local_res8,uVar2);
  *(undefined8 *)(param_2 + 0xe8) = *puVar1;
  *(undefined1 *)(param_2 + 0x12) = 1;
  return;
}



// FUNCTION 141ff8270 FUN_141ff8270 body=40 status=ok
// SIG undefined FUN_141ff8270(void)

void FUN_141ff8270(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined8 *)FUN_141ff2720(local_res10,1);
  *(undefined8 *)(param_2 + 0xe8) = *puVar1;
  return;
}



// FUNCTION 141ff82a0 PostCompile body=49 status=ok
// SIG undefined PostCompile(void)

void UMovieSceneSpawnTrack::PostCompile(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  puVar2 = (undefined8 *)FUN_141ff2720(local_res10,1);
  uVar1 = *puVar2;
  *(undefined2 *)(param_2 + 0x10) = 0xfff;
  *(undefined8 *)(param_2 + 0xe8) = uVar1;
  return;
}



// FUNCTION 141ff82e0 PostLoad body=121 status=ok
// SIG undefined PostLoad(void)

void UMovieScene3DConstraintSection::PostLoad(longlong param_1)

{
  ULandscapeSplineControlPoint::PostLoad();
  if (((*(int *)(param_1 + 0xec) != 0 || *(int *)(param_1 + 0xe8) != 0) ||
      *(int *)(param_1 + 0xe4) != 0) || *(int *)(param_1 + 0xe0) != 0) {
    if (((*(int *)(param_1 + 0x104) == 0 && *(int *)(param_1 + 0x100) == 0) &&
        *(int *)(param_1 + 0xfc) == 0) && *(int *)(param_1 + 0xf8) == 0) {
      *(undefined4 *)(param_1 + 0xf0) = DAT_146acb830;
      *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xe8);
      *(undefined1 *)(param_1 + 0xf4) = 0;
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 141ff8360 PostLoad body=620 status=ok
// SIG undefined PostLoad(void)

void UMovieSceneActorReferenceSection::PostLoad(longlong param_1)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  longlong *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  ULandscapeSplineControlPoint::PostLoad();
  if (*(int *)(param_1 + 0x1f8) != 0) {
    plVar8 = (longlong *)0x0;
    uVar7 = 0;
    lVar10 = *(longlong *)(param_1 + 0x1f0);
    lVar12 = (longlong)*(int *)(param_1 + 0x1f8) * 0x10 + lVar10;
    local_78 = (longlong *)0x0;
    local_6c = 0;
    plVar11 = plVar8;
    plVar13 = plVar8;
    uVar6 = DAT_146acb830;
    for (; DAT_146acb830 = uVar6, lVar10 != lVar12; lVar10 = lVar10 + 0x10) {
      iVar9 = (int)plVar8;
      local_70 = iVar9 + 1;
      if ((int)plVar11 < (int)local_70) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_78,plVar8);
        plVar11 = (longlong *)(ulonglong)local_6c;
        plVar13 = local_78;
      }
      uVar7 = local_70;
      plVar8 = (longlong *)(ulonglong)local_70;
      plVar13[(longlong)iVar9 * 2] = 0;
      (plVar13 + (longlong)iVar9 * 2)[1] = 0;
      FUN_141678c50(lVar10);
      uVar6 = DAT_146acb830;
    }
    iVar9 = *(int *)(param_1 + 0x1e8);
    if ((-1 < iVar9) && (iVar9 < (int)uVar7)) {
      uStack_64 = uStack_64 & 0xffffff00;
      plVar8 = plVar13 + (longlong)iVar9 * 2;
      lVar10 = *plVar8;
      uVar3 = *(undefined4 *)((longlong)plVar8 + 4);
      lVar12 = plVar8[1];
      uVar4 = *(undefined4 *)((longlong)plVar8 + 0xc);
      *(undefined1 *)(param_1 + 0xfc) = 0;
      *(int *)(param_1 + 0x100) = (int)lVar10;
      *(undefined4 *)(param_1 + 0x104) = uVar3;
      *(int *)(param_1 + 0x108) = (int)lVar12;
      *(undefined4 *)(param_1 + 0x10c) = uVar4;
      *(undefined4 *)(param_1 + 0xf8) = uVar6;
      local_68 = uVar6;
    }
    FIntegralCurve::GetKeyIterator(param_1 + 0x180,&local_78);
    plVar8 = local_78;
    for (; (-1 < (int)local_70 && ((int)local_70 < (int)plVar8[1])); local_70 = local_70 + 1) {
      iVar9 = *(int *)(*plVar8 + 4 + (longlong)(int)local_70 * 8);
      if ((iVar9 < 0) || ((int)uVar7 <= iVar9)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        fVar2 = *(float *)(*plVar8 + (longlong)(int)local_70 * 8);
        local_68 = DAT_146acb830;
        uStack_64 = uStack_64 & 0xffffff00;
        plVar8 = plVar13 + (longlong)iVar9 * 2;
        uStack_60 = (undefined4)*plVar8;
        uStack_5c = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_58 = (undefined4)plVar8[1];
        uStack_54 = *(undefined4 *)((longlong)plVar8 + 0xc);
        FUN_141f52860(&local_res10);
        UpgradeLegacyMovieSceneTime(local_res8,0,local_res10,SUB84((double)fVar2,0));
        iVar9 = *(int *)(param_1 + 0xf0);
        *(int *)(param_1 + 0xf0) = iVar9 + 1;
        if (*(int *)(param_1 + 0xf4) < iVar9 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0xe8,iVar9);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar9 * 4) = local_res8[0];
        iVar9 = *(int *)(param_1 + 0x118);
        *(int *)(param_1 + 0x118) = iVar9 + 1;
        if (*(int *)(param_1 + 0x11c) < iVar9 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 0x110,iVar9);
        }
        lVar10 = *(longlong *)(param_1 + 0x110);
        puVar1 = (undefined4 *)(lVar10 + (longlong)iVar9 * 0x18);
        *puVar1 = local_68;
        puVar1[1] = uStack_64;
        puVar1[2] = uStack_60;
        puVar1[3] = uStack_5c;
        *(ulonglong *)(lVar10 + 0x10 + (longlong)iVar9 * 0x18) = CONCAT44(uStack_54,uStack_58);
        plVar8 = local_78;
      }
    }
    if (plVar13 != (longlong *)0x0) {
      FMemory::Free(plVar13);
    }
  }
  return;
}



// FUNCTION 141ff85d0 FUN_141ff85d0 body=303 status=ok
// SIG undefined FUN_141ff85d0(void)

void FUN_141ff85d0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  ULandscapeSplineControlPoint::PostLoad();
  if (*(float *)(param_1 + 0xf0) != 3.4028235e+38) {
    *(float *)(param_1 + 0x1c8) = *(float *)(param_1 + 0xf0);
    *(undefined1 *)(param_1 + 0x1cc) = 1;
    *(undefined4 *)(param_1 + 0xf0) = 0x7f7fffff;
  }
  if (*(float *)(param_1 + 0xf4) != 3.4028235e+38) {
    *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0xf4);
    *(undefined1 *)(param_1 + 300) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0x7f7fffff;
  }
  if (*(float *)(param_1 + 0xec) != 3.4028235e+38) {
    if ((*(float *)(param_1 + 0xec) != 0.0) && (*(char *)(param_1 + 0x90) != '\x02')) {
      uVar2 = UMovieScene::GetPrivateStaticClass();
      lVar3 = UObjectBaseUtility::GetTypedOuter(param_1,uVar2);
      iVar1 = *(int *)(param_1 + 0x94);
      if (*(char *)(param_1 + 0x90) != '\x01') {
        iVar1 = iVar1 + 1;
      }
      iVar4 = (int)((ulonglong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20);
      *(float *)(param_1 + 0xe8) =
           ((float)iVar4 * 0.0 + (float)((longlong)iVar4 * (longlong)iVar1)) /
           (float)(int)*(undefined8 *)(lVar3 + 0xb8) - *(float *)(param_1 + 0xec);
    }
    *(undefined4 *)(param_1 + 0xec) = 0x7f7fffff;
  }
  return;
}



// FUNCTION 141ff8730 PostLoad body=154 status=ok
// SIG undefined PostLoad(void)

void UMovieSceneByteTrack::PostLoad(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UMovieSceneTrack::PostLoad();
  plVar5 = *(longlong **)(param_1 + 0x70);
  plVar1 = plVar5 + *(int *)(param_1 + 0x78);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      lVar4 = UMovieSceneByteSection::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(param_1 + 0x80);
      }
    }
  }
  return;
}



// FUNCTION 141ff8860 PostLoad body=204 status=ok
// SIG undefined PostLoad(void)

void UMovieSceneCameraShakeSection::PostLoad(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x100) != 0) {
    lVar3 = UNodeMappingContainer::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_1 + 0x100);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) {
        if (lVar1 != 0) {
          *(longlong *)(param_1 + 0xe0) = lVar1;
        }
        break;
      }
    }
  }
  if (*(float *)(param_1 + 0x108) != 1.0) {
    *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0x108);
  }
  if (*(char *)(param_1 + 0x10c) != '\0') {
    *(char *)(param_1 + 0xec) = *(char *)(param_1 + 0x10c);
  }
  if ((((float)DAT_1468b5da0 != *(float *)(param_1 + 0x110)) ||
      (DAT_1468b5da0._4_4_ != *(float *)(param_1 + 0x114))) ||
     (DAT_1468b5da8 != *(float *)(param_1 + 0x118))) {
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x118);
  }
  ULandscapeSplineControlPoint::PostLoad(param_1);
  return;
}



// FUNCTION 141ff8930 FUN_141ff8930 body=189 status=ok
// SIG undefined FUN_141ff8930(void)

void FUN_141ff8930(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  UMovieSceneSubSection::PostLoad();
  cVar1 = FText::IsEmpty(param_1 + 0x160);
  if (cVar1 == '\0') {
    uVar2 = FText::ToString(param_1 + 0x160);
    FString::operator=(param_1 + 0x150,uVar2);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146852c50) {
      _Init_thread_header(&DAT_146852c50);
      if (DAT_146852c50 == -1) {
        FText::FText(&DAT_146852c38,0);
        atexit(FUN_143e3e8f0);
        _Init_thread_footer(&DAT_146852c50);
      }
    }
    FText::operator=(param_1 + 0x160,&DAT_146852c38);
  }
  return;
}



// FUNCTION 141ff89f0 PostLoad body=154 status=ok
// SIG undefined PostLoad(void)

void UMovieSceneEnumTrack::PostLoad(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UMovieSceneTrack::PostLoad();
  plVar5 = *(longlong **)(param_1 + 0x70);
  plVar1 = plVar5 + *(int *)(param_1 + 0x78);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      lVar4 = UMovieSceneEnumSection::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(param_1 + 0x80);
      }
    }
  }
  return;
}



// FUNCTION 141ff8a90 PostLoad body=531 status=ok
// SIG undefined PostLoad(void)

void UMovieSceneEventSection::PostLoad(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  size_t _Size;
  float *pfVar7;
  float *pfVar8;
  undefined4 local_res8 [2];
  int local_res10;
  undefined8 local_res18;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  void *local_50;
  ulonglong local_48;
  
  if (*(int *)(param_1 + 0x140) != 0) {
    std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
              (local_88,param_1 + 0x150,param_1 + 0x170);
    local_78 = (longlong *)(param_1 + 0x160);
    FUN_141f52860(&local_res18);
    pfVar8 = *(float **)(param_1 + 0x138);
    pfVar7 = pfVar8 + (longlong)*(int *)(param_1 + 0x140) * 4;
    for (; pfVar8 != pfVar7; pfVar8 = pfVar8 + 4) {
      uVar3 = *(undefined8 *)(pfVar8 + 2);
      UpgradeLegacyMovieSceneTime(local_res8,param_1,local_res18,(double)*pfVar8,*pfVar8);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = (void *)0x0;
      local_48 = 0;
      local_70 = uVar3;
      local_res10 = FMovieSceneChannelData::AddKeyInternal(local_88,local_res8[0]);
      plVar4 = local_78;
      iVar1 = (int)local_78[1];
      *(int *)(local_78 + 1) = iVar1 + 1;
      if (*(int *)((longlong)local_78 + 0xc) < iVar1 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(local_78,iVar1);
      }
      lVar6 = (longlong)local_res10 * 0x30;
      pvVar5 = (void *)(*plVar4 + lVar6);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)pvVar5 + 0x30),pvVar5,(longlong)(iVar1 - local_res10) * 0x30);
      lVar2 = *plVar4;
      *(undefined8 *)(lVar6 + lVar2) = uVar3;
      *(undefined8 *)(lVar6 + 8 + lVar2) = local_68;
      FString::FString(lVar2 + 0x10 + lVar6,&local_60);
      pvVar5 = local_50;
      lVar6 = lVar6 + lVar2;
      _Size = (size_t)(int)local_48;
      *(undefined8 *)(lVar6 + 0x20) = 0;
      *(int *)(lVar6 + 0x28) = (int)local_48;
      if ((int)local_48 == 0) {
        *(undefined4 *)(lVar6 + 0x2c) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(lVar6 + 0x20,local_48 & 0xffffffff,0)
        ;
        ::_guard_xfg_dispatch_icall_nop(*(void **)(lVar6 + 0x20),pvVar5,_Size);
      }
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
    }
    FUN_141f58d10(param_1);
  }
  ULandscapeSplineControlPoint::PostLoad(param_1);
  return;
}



// FUNCTION 141ff8cc0 FUN_141ff8cc0 body=313 status=ok
// SIG undefined FUN_141ff8cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ff8cc0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0x1b0);
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0x1b8);
  }
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0x1c0);
  }
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0x1c4);
  }
  if (*(float *)(param_1 + 0x1c8) != 1.0) {
    *(float *)(param_1 + 0xf0) = *(float *)(param_1 + 0x1c8);
  }
  uVar3 = *(uint *)(param_1 + 0x1cc) & 1;
  if (uVar3 != 0) {
    *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) & 0xfffffffe;
    *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) | uVar3;
  }
  if (*(longlong *)(param_1 + 0x1d0) != DAT_146acb988) {
    *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0x1d0);
  }
  local_18 = _DAT_1464b00f8;
  uStack_14 = uRam00000001464b00fc;
  uStack_10 = uRam00000001464b0100;
  uStack_c = uRam00000001464b0104;
  iVar4 = UObjectBaseUtility::GetLinkerCustomVersion(_DAT_1464b00f8,&local_18);
  if ((iVar4 < 2) && (lVar1 = *(longlong *)(param_1 + 0xe0), lVar1 != 0)) {
    lVar5 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(char *)(lVar1 + 0x199) != '\0')) && (*(char *)(lVar1 + 0x19b) == '\0')) {
      *(undefined1 *)(lVar1 + 0x19b) = 1;
      UObjectBaseUtility::MarkPackageDirty(lVar1);
    }
  }
  ULandscapeSplineControlPoint::PostLoad(param_1);
  return;
}



// FUNCTION 141ff8e00 PostLoad body=54 status=ok
// SIG undefined PostLoad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UMovieSceneSkeletalAnimationTrack::PostLoad(longlong param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  UMovieSceneTrack::PostLoad();
  local_18 = _DAT_1464e8640;
  uStack_14 = uRam00000001464e8644;
  uStack_10 = uRam00000001464e8648;
  uStack_c = uRam00000001464e864c;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_18);
  if (iVar1 < 2) {
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  return;
}



// FUNCTION 141ff8e40 FUN_141ff8e40 body=553 status=ok
// SIG undefined FUN_141ff8e40(void)

void FUN_141ff8e40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong local_f8;
  undefined8 local_f0;
  undefined **local_e8 [5];
  byte local_bf;
  byte local_be;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  
  uVar5 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uVar7 = uVar5;
  if (0 < *(int *)(param_1 + 0x60)) {
    do {
      plVar4 = *(longlong **)(uVar5 + *(longlong *)(param_1 + 0x58));
      if ((plVar4 != (longlong *)0x0) &&
         (lVar1 = plVar4[2], lVar2 = UMovieSceneBoolSection::GetPrivateStaticClass(), lVar1 == lVar2
         )) {
        FUN_1417510e0(plVar4);
        lVar1 = local_f0;
        uVar6 = local_f0._4_4_;
        local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
        if ((lVar1 < 0) && (uVar6 != 0)) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_f8,0);
        }
        FArchive::FArchive(local_e8);
        local_50 = &local_f8;
        local_58 = 0;
        local_e8[0] = &PTR_FUN_143f4a100;
        local_48 = 0;
        FArchive::SetIsSaving(local_e8,1);
        FArchive::SetIsPersistent(local_e8,0);
        local_be = local_be & 0xfd;
        local_bf = local_bf & 0x9f;
        local_e8[0] = &PTR_FUN_144f51198;
        (**(code **)(*plVar4 + 0xa8))(plVar4,local_e8);
        FArchive::~FArchive(local_e8);
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar3 = UMovieSceneSpawnSection::GetPrivateStaticClass();
        plVar4 = (longlong *)FUN_1417985e0(uVar3,param_1,0,8,0,0,0,0,0);
        FArchive::FArchive(local_e8);
        local_58 = 0;
        local_e8[0] = &PTR_FUN_144f50fa8;
        local_50 = &local_f8;
        FArchive::SetIsLoading(local_e8,1);
        FArchive::SetIsPersistent(local_e8,0);
        local_be = local_be & 0xfd;
        local_bf = local_bf & 0xdf;
        (**(code **)(*plVar4 + 0xa8))(plVar4);
        FArchive::~FArchive(local_e8);
        *(longlong **)(uVar5 + *(longlong *)(param_1 + 0x58)) = plVar4;
      }
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(param_1 + 0x60));
  }
  UMovieSceneTrack::PostLoad(param_1);
  if (local_f8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141ff90b0 FUN_141ff90b0 body=718 status=ok
// SIG undefined FUN_141ff90b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ff90b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined1 local_60 [24];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar10 = (longlong *)0x0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  FUN_141fc5f20(local_60,param_1 + 0xe0);
  lVar4 = FMovieSceneBoolChannel::StaticStruct();
  uVar6 = (ulonglong)(int)local_40;
  local_98 = *(longlong *)(lVar4 + 0x18);
  plVar5 = plVar10;
  iVar3 = 0;
  if ((int)local_40 != 0) {
    puVar7 = local_60;
    if (local_48 != (undefined1 *)0x0) {
      puVar7 = local_48;
    }
    do {
      uVar8 = uVar6 >> 1;
      local_90 = *(undefined8 *)(puVar7 + (uVar8 + (longlong)plVar5) * 0x18);
      iVar3 = FName::Compare(&local_90,&local_98);
      if (iVar3 < 0) {
        plVar5 = (longlong *)((ulonglong)((uint)uVar6 & 1) + uVar8 + (longlong)plVar5);
      }
      uVar6 = uVar8;
    } while (uVar8 != 0);
    iVar3 = (int)local_40;
  }
  iVar9 = (int)plVar5;
  if (iVar9 < iVar3) {
    puVar7 = local_60;
    if (local_48 != (undefined1 *)0x0) {
      puVar7 = local_48;
    }
    if (*(longlong *)(puVar7 + (longlong)iVar9 * 0x18) == local_98) goto LAB_141ff91c4;
  }
  local_80 = 0;
  local_78 = 0;
  local_88 = local_98;
  FUN_141ff64b0(local_60,&local_88,(ulonglong)plVar5 & 0xffffffff);
  if (local_80 != 0) {
    FMemory::Free();
  }
LAB_141ff91c4:
  lVar4 = (longlong)iVar9;
  puVar7 = local_60;
  if (local_48 != (undefined1 *)0x0) {
    puVar7 = local_48;
  }
  iVar3 = *(int *)(puVar7 + lVar4 * 0x18 + 0x10);
  *(int *)(puVar7 + lVar4 * 0x18 + 0x10) = iVar3 + 1;
  if (*(int *)(puVar7 + lVar4 * 0x18 + 0x14) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              (puVar7 + lVar4 * 0x18 + 8,iVar3);
  }
  *(longlong *)(*(longlong *)(puVar7 + lVar4 * 0x18 + 8) + (longlong)iVar3 * 8) = param_1 + 0x180;
  plVar5 = (longlong *)operator_new(0x48);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_144f1c890;
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[7] = 0;
    if (local_48 == (undefined1 *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar5 + 4,local_60,0x18);
    }
    if (plVar5[7] != 0) {
      FMemory::Free();
    }
    plVar5[7] = (longlong)local_48;
    local_48 = (undefined1 *)0x0;
    *(int *)(plVar5 + 8) = (int)local_40;
    *(undefined4 *)((longlong)plVar5 + 0x44) = local_40._4_4_;
    local_40 = 0;
    plVar10 = plVar5;
  }
  plVar5 = plVar10 + 2;
  local_70 = plVar5;
  local_68 = plVar10;
  TSharedRef<FStringTable,1>::Init<FStringTable>(&local_70,plVar5);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_a8 = plVar5;
  local_a0 = plVar10;
  if ((longlong **)(param_1 + 0xd0) != &local_a8) {
    *(longlong **)(param_1 + 0xd0) = plVar5;
    local_a8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd8,&local_a0);
  }
  plVar5 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar10 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>::
  ~TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>(local_60);
  return;
}



// FUNCTION 141ff9380 FUN_141ff9380 body=3300 status=ok
// SIG undefined FUN_141ff9380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ff9380(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined1 local_60 [24];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  lVar14 = *(longlong *)(param_1 + 0xe0);
  local_48 = (undefined1 *)0x0;
  lVar13 = (longlong)*(int *)(param_1 + 0xe8) * 0xa8 + lVar14;
  local_40 = 0;
  for (; lVar14 != lVar13; lVar14 = lVar14 + 0xa8) {
    uVar9 = 0;
    lVar6 = FMovieSceneFloatChannel::StaticStruct();
    uVar8 = (ulonglong)(int)local_40;
    local_1d8 = *(longlong *)(lVar6 + 0x18);
    iVar5 = 0;
    if ((int)local_40 != 0) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      do {
        uVar11 = uVar8 >> 1;
        local_190 = *(undefined8 *)(puVar10 + (uVar11 + uVar9) * 0x18);
        iVar5 = FName::Compare(&local_190,&local_1d8);
        if (iVar5 < 0) {
          uVar9 = (ulonglong)((uint)uVar8 & 1) + uVar11 + uVar9;
        }
        uVar8 = uVar11;
      } while (uVar11 != 0);
      iVar5 = (int)local_40;
    }
    iVar12 = (int)uVar9;
    if (iVar12 < iVar5) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      if (*(longlong *)(puVar10 + (longlong)iVar12 * 0x18) != local_1d8) goto LAB_141ff949e;
    }
    else {
LAB_141ff949e:
      local_140 = 0;
      local_138 = 0;
      local_148 = local_1d8;
      FUN_141ff64b0(local_60,&local_148,uVar9 & 0xffffffff);
      if (local_140 != 0) {
        FMemory::Free();
      }
    }
    lVar6 = (longlong)iVar12;
    puVar10 = local_60;
    if (local_48 != (undefined1 *)0x0) {
      puVar10 = local_48;
    }
    iVar5 = *(int *)(puVar10 + lVar6 * 0x18 + 0x10);
    *(int *)(puVar10 + lVar6 * 0x18 + 0x10) = iVar5 + 1;
    if (*(int *)(puVar10 + lVar6 * 0x18 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (puVar10 + lVar6 * 0x18 + 8,iVar5);
    }
    *(longlong *)(*(longlong *)(puVar10 + lVar6 * 0x18 + 8) + (longlong)iVar5 * 8) = lVar14 + 8;
  }
  lVar14 = *(longlong *)(param_1 + 0xf0);
  lVar13 = (longlong)*(int *)(param_1 + 0xf8) * 0x1e8 + lVar14;
  for (; lVar14 != lVar13; lVar14 = lVar14 + 0x1e8) {
    uVar9 = 0;
    lVar6 = FMovieSceneFloatChannel::StaticStruct();
    uVar8 = (ulonglong)(int)local_40;
    local_1d0 = *(longlong *)(lVar6 + 0x18);
    iVar5 = 0;
    if ((int)local_40 != 0) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      do {
        uVar11 = uVar8 >> 1;
        local_188 = *(undefined8 *)(puVar10 + (uVar11 + uVar9) * 0x18);
        iVar5 = FName::Compare(&local_188,&local_1d0);
        if (iVar5 < 0) {
          uVar9 = (ulonglong)((uint)uVar8 & 1) + uVar11 + uVar9;
        }
        uVar8 = uVar11;
      } while (uVar11 != 0);
      iVar5 = (int)local_40;
    }
    uVar8 = 0;
    iVar12 = (int)uVar9;
    if (iVar12 < iVar5) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      if (*(longlong *)(puVar10 + (longlong)iVar12 * 0x18) != local_1d0) goto LAB_141ff95fc;
    }
    else {
LAB_141ff95fc:
      local_128 = 0;
      local_120 = 0;
      local_130 = local_1d0;
      FUN_141ff64b0(local_60,&local_130,uVar9 & 0xffffffff);
      if (local_128 != 0) {
        FMemory::Free();
      }
    }
    lVar6 = (longlong)iVar12;
    puVar10 = local_60;
    if (local_48 != (undefined1 *)0x0) {
      puVar10 = local_48;
    }
    iVar5 = *(int *)(puVar10 + lVar6 * 0x18 + 0x10);
    *(int *)(puVar10 + lVar6 * 0x18 + 0x10) = iVar5 + 1;
    if (*(int *)(puVar10 + lVar6 * 0x18 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (puVar10 + lVar6 * 0x18 + 8,iVar5);
    }
    *(longlong *)(*(longlong *)(puVar10 + lVar6 * 0x18 + 8) + (longlong)iVar5 * 8) = lVar14 + 8;
    lVar6 = FMovieSceneFloatChannel::StaticStruct();
    uVar9 = (ulonglong)(int)local_40;
    local_1c8 = *(longlong *)(lVar6 + 0x18);
    iVar5 = 0;
    if ((int)local_40 != 0) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      do {
        uVar11 = uVar9 >> 1;
        local_180 = *(undefined8 *)(puVar10 + (uVar11 + uVar8) * 0x18);
        iVar5 = FName::Compare(&local_180,&local_1c8);
        if (iVar5 < 0) {
          uVar8 = (ulonglong)((uint)uVar9 & 1) + uVar11 + uVar8;
        }
        uVar9 = uVar11;
      } while (uVar11 != 0);
      iVar5 = (int)local_40;
    }
    uVar9 = 0;
    iVar12 = (int)uVar8;
    if (iVar12 < iVar5) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      if (*(longlong *)(puVar10 + (longlong)iVar12 * 0x18) != local_1c8) goto LAB_141ff972c;
    }
    else {
LAB_141ff972c:
      local_110 = 0;
      local_108 = 0;
      local_118 = local_1c8;
      FUN_141ff64b0(local_60,&local_118,uVar8 & 0xffffffff);
      if (local_110 != 0) {
        FMemory::Free();
      }
    }
    lVar6 = (longlong)iVar12;
    puVar10 = local_60;
    if (local_48 != (undefined1 *)0x0) {
      puVar10 = local_48;
    }
    iVar5 = *(int *)(puVar10 + lVar6 * 0x18 + 0x10);
    *(int *)(puVar10 + lVar6 * 0x18 + 0x10) = iVar5 + 1;
    if (*(int *)(puVar10 + lVar6 * 0x18 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (puVar10 + lVar6 * 0x18 + 8,iVar5);
    }
    *(longlong *)(*(longlong *)(puVar10 + lVar6 * 0x18 + 8) + (longlong)iVar5 * 8) = lVar14 + 0xa8;
    lVar6 = FMovieSceneFloatChannel::StaticStruct();
    uVar8 = (ulonglong)(int)local_40;
    local_1c0 = *(longlong *)(lVar6 + 0x18);
    iVar5 = 0;
    if ((int)local_40 != 0) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      do {
        uVar11 = uVar8 >> 1;
        local_178 = *(undefined8 *)(puVar10 + (uVar11 + uVar9) * 0x18);
        iVar5 = FName::Compare(&local_178,&local_1c0);
        if (iVar5 < 0) {
          uVar9 = (ulonglong)((uint)uVar8 & 1) + uVar11 + uVar9;
        }
        uVar8 = uVar11;
      } while (uVar11 != 0);
      iVar5 = (int)local_40;
    }
    iVar12 = (int)uVar9;
    if (iVar12 < iVar5) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      if (*(longlong *)(puVar10 + (longlong)iVar12 * 0x18) != local_1c0) goto LAB_141ff985c;
    }
    else {
LAB_141ff985c:
      local_f8 = 0;
      local_f0 = 0;
      local_100 = local_1c0;
      FUN_141ff64b0(local_60,&local_100,uVar9 & 0xffffffff);
      if (local_f8 != 0) {
        FMemory::Free();
      }
    }
    lVar6 = (longlong)iVar12;
    puVar10 = local_60;
    if (local_48 != (undefined1 *)0x0) {
      puVar10 = local_48;
    }
    iVar5 = *(int *)(puVar10 + lVar6 * 0x18 + 0x10);
    *(int *)(puVar10 + lVar6 * 0x18 + 0x10) = iVar5 + 1;
    if (*(int *)(puVar10 + lVar6 * 0x18 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (puVar10 + lVar6 * 0x18 + 8,iVar5);
    }
    *(longlong *)(*(longlong *)(puVar10 + lVar6 * 0x18 + 8) + (longlong)iVar5 * 8) = lVar14 + 0x148;
  }
  lVar14 = *(longlong *)(param_1 + 0x100);
  lVar13 = (longlong)*(int *)(param_1 + 0x108) * 0x288 + lVar14;
  for (; lVar14 != lVar13; lVar14 = lVar14 + 0x288) {
    uVar9 = 0;
    lVar6 = FMovieSceneFloatChannel::StaticStruct();
    uVar8 = (ulonglong)(int)local_40;
    local_1b8 = *(longlong *)(lVar6 + 0x18);
    iVar5 = 0;
    if ((int)local_40 != 0) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      do {
        uVar11 = uVar8 >> 1;
        local_170 = *(undefined8 *)(puVar10 + (uVar11 + uVar9) * 0x18);
        iVar5 = FName::Compare(&local_170,&local_1b8);
        if (iVar5 < 0) {
          uVar9 = (ulonglong)((uint)uVar8 & 1) + uVar11 + uVar9;
        }
        uVar8 = uVar11;
      } while (uVar11 != 0);
      iVar5 = (int)local_40;
    }
    uVar8 = 0;
    iVar12 = (int)uVar9;
    if (iVar12 < iVar5) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      if (*(longlong *)(puVar10 + (longlong)iVar12 * 0x18) != local_1b8) goto LAB_141ff99bc;
    }
    else {
LAB_141ff99bc:
      local_e0 = 0;
      local_d8 = 0;
      local_e8 = local_1b8;
      FUN_141ff64b0(local_60,&local_e8,uVar9 & 0xffffffff);
      if (local_e0 != 0) {
        FMemory::Free();
      }
    }
    lVar6 = (longlong)iVar12;
    puVar10 = local_60;
    if (local_48 != (undefined1 *)0x0) {
      puVar10 = local_48;
    }
    iVar5 = *(int *)(puVar10 + lVar6 * 0x18 + 0x10);
    *(int *)(puVar10 + lVar6 * 0x18 + 0x10) = iVar5 + 1;
    if (*(int *)(puVar10 + lVar6 * 0x18 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (puVar10 + lVar6 * 0x18 + 8,iVar5);
    }
    *(longlong *)(*(longlong *)(puVar10 + lVar6 * 0x18 + 8) + (longlong)iVar5 * 8) = lVar14 + 8;
    lVar6 = FMovieSceneFloatChannel::StaticStruct();
    uVar9 = (ulonglong)(int)local_40;
    local_1b0 = *(longlong *)(lVar6 + 0x18);
    iVar5 = 0;
    if ((int)local_40 != 0) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      do {
        uVar11 = uVar9 >> 1;
        local_168 = *(undefined8 *)(puVar10 + (uVar11 + uVar8) * 0x18);
        iVar5 = FName::Compare(&local_168,&local_1b0);
        if (iVar5 < 0) {
          uVar8 = (ulonglong)((uint)uVar9 & 1) + uVar11 + uVar8;
        }
        uVar9 = uVar11;
      } while (uVar11 != 0);
      iVar5 = (int)local_40;
    }
    uVar9 = 0;
    iVar12 = (int)uVar8;
    if (iVar12 < iVar5) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      if (*(longlong *)(puVar10 + (longlong)iVar12 * 0x18) != local_1b0) goto LAB_141ff9aec;
    }
    else {
LAB_141ff9aec:
      local_c8 = 0;
      local_c0 = 0;
      local_d0 = local_1b0;
      FUN_141ff64b0(local_60,&local_d0,uVar8 & 0xffffffff);
      if (local_c8 != 0) {
        FMemory::Free();
      }
    }
    lVar6 = (longlong)iVar12;
    puVar10 = local_60;
    if (local_48 != (undefined1 *)0x0) {
      puVar10 = local_48;
    }
    iVar5 = *(int *)(puVar10 + lVar6 * 0x18 + 0x10);
    *(int *)(puVar10 + lVar6 * 0x18 + 0x10) = iVar5 + 1;
    if (*(int *)(puVar10 + lVar6 * 0x18 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (puVar10 + lVar6 * 0x18 + 8,iVar5);
    }
    *(longlong *)(*(longlong *)(puVar10 + lVar6 * 0x18 + 8) + (longlong)iVar5 * 8) = lVar14 + 0xa8;
    lVar6 = FMovieSceneFloatChannel::StaticStruct();
    uVar8 = (ulonglong)(int)local_40;
    local_1a8 = *(longlong *)(lVar6 + 0x18);
    iVar5 = 0;
    if ((int)local_40 != 0) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      do {
        uVar11 = uVar8 >> 1;
        local_160 = *(undefined8 *)(puVar10 + (uVar11 + uVar9) * 0x18);
        iVar5 = FName::Compare(&local_160,&local_1a8);
        if (iVar5 < 0) {
          uVar9 = (ulonglong)((uint)uVar8 & 1) + uVar11 + uVar9;
        }
        uVar8 = uVar11;
      } while (uVar11 != 0);
      iVar5 = (int)local_40;
    }
    uVar8 = 0;
    iVar12 = (int)uVar9;
    if (iVar12 < iVar5) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      if (*(longlong *)(puVar10 + (longlong)iVar12 * 0x18) != local_1a8) goto LAB_141ff9c1c;
    }
    else {
LAB_141ff9c1c:
      local_b0 = 0;
      local_a8 = 0;
      local_b8 = local_1a8;
      FUN_141ff64b0(local_60,&local_b8,uVar9 & 0xffffffff);
      if (local_b0 != 0) {
        FMemory::Free();
      }
    }
    lVar6 = (longlong)iVar12;
    puVar10 = local_60;
    if (local_48 != (undefined1 *)0x0) {
      puVar10 = local_48;
    }
    iVar5 = *(int *)(puVar10 + lVar6 * 0x18 + 0x10);
    *(int *)(puVar10 + lVar6 * 0x18 + 0x10) = iVar5 + 1;
    if (*(int *)(puVar10 + lVar6 * 0x18 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (puVar10 + lVar6 * 0x18 + 8,iVar5);
    }
    *(longlong *)(*(longlong *)(puVar10 + lVar6 * 0x18 + 8) + (longlong)iVar5 * 8) = lVar14 + 0x148;
    lVar6 = FMovieSceneFloatChannel::StaticStruct();
    uVar9 = (ulonglong)(int)local_40;
    local_1a0 = *(longlong *)(lVar6 + 0x18);
    iVar5 = 0;
    if ((int)local_40 != 0) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      do {
        uVar11 = uVar9 >> 1;
        local_158 = *(undefined8 *)(puVar10 + (uVar11 + uVar8) * 0x18);
        iVar5 = FName::Compare(&local_158,&local_1a0);
        if (iVar5 < 0) {
          uVar8 = (ulonglong)((uint)uVar9 & 1) + uVar11 + uVar8;
        }
        uVar9 = uVar11;
      } while (uVar11 != 0);
      iVar5 = (int)local_40;
    }
    iVar12 = (int)uVar8;
    if (iVar12 < iVar5) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      if (*(longlong *)(puVar10 + (longlong)iVar12 * 0x18) != local_1a0) goto LAB_141ff9d4c;
    }
    else {
LAB_141ff9d4c:
      local_98 = 0;
      local_90 = 0;
      local_a0 = local_1a0;
      FUN_141ff64b0(local_60,&local_a0,uVar8 & 0xffffffff);
      if (local_98 != 0) {
        FMemory::Free();
      }
    }
    lVar6 = (longlong)iVar12;
    puVar10 = local_60;
    if (local_48 != (undefined1 *)0x0) {
      puVar10 = local_48;
    }
    iVar5 = *(int *)(puVar10 + lVar6 * 0x18 + 0x10);
    *(int *)(puVar10 + lVar6 * 0x18 + 0x10) = iVar5 + 1;
    if (*(int *)(puVar10 + lVar6 * 0x18 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (puVar10 + lVar6 * 0x18 + 8,iVar5);
    }
    *(longlong *)(*(longlong *)(puVar10 + lVar6 * 0x18 + 8) + (longlong)iVar5 * 8) = lVar14 + 0x1e8;
  }
  lVar14 = *(longlong *)(param_1 + 0x110);
  lVar13 = (longlong)*(int *)(param_1 + 0x118) * 0xa8 + lVar14;
  do {
    if (lVar14 == lVar13) {
      plVar7 = (longlong *)FUN_141fcbf00(local_60);
      plVar2 = plVar7 + 2;
      local_70 = plVar2;
      local_68 = plVar7;
      TSharedRef<FStringTable,1>::Init<FStringTable>(&local_70,plVar2);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_1e8 = plVar2;
      local_1e0 = plVar7;
      if ((longlong **)(param_1 + 0xd0) != &local_1e8) {
        *(longlong **)(param_1 + 0xd0) = plVar2;
        local_1e8 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd8,&local_1e0);
      }
      plVar2 = local_1e0;
      if (local_1e0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_1e0 + 1;
        lVar14 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_1e0)(local_1e0);
          LOCK();
          piVar4 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_1e0 + 8))(local_1e0,1);
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar4 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>::
      ~TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>(local_60);
      return;
    }
    uVar9 = 0;
    lVar6 = FMovieSceneActorReferenceData::StaticStruct();
    uVar8 = (ulonglong)(int)local_40;
    local_198 = *(longlong *)(lVar6 + 0x18);
    iVar5 = 0;
    if ((int)local_40 != 0) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      do {
        uVar11 = uVar8 >> 1;
        local_150 = *(undefined8 *)(puVar10 + (uVar11 + uVar9) * 0x18);
        iVar5 = FName::Compare(&local_150,&local_198);
        if (iVar5 < 0) {
          uVar9 = (ulonglong)((uint)uVar8 & 1) + uVar11 + uVar9;
        }
        uVar8 = uVar11;
      } while (uVar11 != 0);
      iVar5 = (int)local_40;
    }
    iVar12 = (int)uVar9;
    if (iVar12 < iVar5) {
      puVar10 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar10 = local_48;
      }
      if (*(longlong *)(puVar10 + (longlong)iVar12 * 0x18) != local_198) goto LAB_141ff9eac;
    }
    else {
LAB_141ff9eac:
      local_80 = 0;
      local_78 = 0;
      local_88 = local_198;
      FUN_141ff64b0(local_60,&local_88,uVar9 & 0xffffffff);
      if (local_80 != 0) {
        FMemory::Free();
      }
    }
    lVar6 = (longlong)iVar12;
    puVar10 = local_60;
    if (local_48 != (undefined1 *)0x0) {
      puVar10 = local_48;
    }
    iVar5 = *(int *)(puVar10 + lVar6 * 0x18 + 0x10);
    *(int *)(puVar10 + lVar6 * 0x18 + 0x10) = iVar5 + 1;
    if (*(int *)(puVar10 + lVar6 * 0x18 + 0x14) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (puVar10 + lVar6 * 0x18 + 8,iVar5);
    }
    lVar1 = lVar14 + 8;
    lVar14 = lVar14 + 0xa8;
    *(longlong *)(*(longlong *)(puVar10 + lVar6 * 0x18 + 8) + (longlong)iVar5 * 8) = lVar1;
  } while( true );
}



// FUNCTION 141ffa070 FUN_141ffa070 body=756 status=ok
// SIG undefined FUN_141ffa070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ffa070(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined1 local_60 [24];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar10 = (longlong *)0x0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  plVar4 = plVar10;
  if (0 < *(int *)(param_1 + 0x360)) {
    do {
      lVar3 = FMovieSceneFloatChannel::StaticStruct();
      uVar5 = (ulonglong)(int)local_40;
      local_98 = *(longlong *)(lVar3 + 0x18);
      plVar8 = plVar10;
      iVar2 = 0;
      if ((int)local_40 != 0) {
        puVar6 = local_60;
        if (local_48 != (undefined1 *)0x0) {
          puVar6 = local_48;
        }
        do {
          uVar9 = uVar5 >> 1;
          local_90 = *(undefined8 *)(puVar6 + (uVar9 + (longlong)plVar8) * 0x18);
          iVar2 = FName::Compare(&local_90,&local_98);
          if (iVar2 < 0) {
            plVar8 = (longlong *)((ulonglong)((uint)uVar5 & 1) + uVar9 + (longlong)plVar8);
          }
          uVar5 = uVar9;
        } while (uVar9 != 0);
        iVar2 = (int)local_40;
      }
      iVar7 = (int)plVar8;
      if (iVar7 < iVar2) {
        puVar6 = local_60;
        if (local_48 != (undefined1 *)0x0) {
          puVar6 = local_48;
        }
        if (*(longlong *)(puVar6 + (longlong)iVar7 * 0x18) != local_98) goto LAB_141ffa14e;
      }
      else {
LAB_141ffa14e:
        local_80 = 0;
        local_78 = 0;
        local_88 = local_98;
        FUN_141ff64b0(local_60,&local_88,(ulonglong)plVar8 & 0xffffffff);
        if (local_80 != 0) {
          FMemory::Free();
        }
      }
      lVar3 = (longlong)iVar7;
      puVar6 = local_60;
      if (local_48 != (undefined1 *)0x0) {
        puVar6 = local_48;
      }
      iVar2 = *(int *)(puVar6 + lVar3 * 0x18 + 0x10);
      *(int *)(puVar6 + lVar3 * 0x18 + 0x10) = iVar2 + 1;
      if (*(int *)(puVar6 + lVar3 * 0x18 + 0x14) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (puVar6 + lVar3 * 0x18 + 8,iVar2);
      }
      uVar11 = (int)plVar4 + 1;
      *(longlong *)(*(longlong *)(puVar6 + lVar3 * 0x18 + 8) + (longlong)iVar2 * 8) =
           param_1 + 0xe0 + (longlong)(int)plVar4 * 0xa0;
      plVar4 = (longlong *)(ulonglong)uVar11;
    } while ((int)uVar11 < *(int *)(param_1 + 0x360));
  }
  plVar4 = (longlong *)operator_new(0x48);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_144f1c890;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[7] = 0;
    if (local_48 == (undefined1 *)0x0) {
      _guard_xfg_dispatch_icall_nop(plVar4 + 4,local_60,0x18);
    }
    if (plVar4[7] != 0) {
      FMemory::Free();
    }
    plVar4[7] = (longlong)local_48;
    local_48 = (undefined1 *)0x0;
    *(int *)(plVar4 + 8) = (int)local_40;
    *(undefined4 *)((longlong)plVar4 + 0x44) = local_40._4_4_;
    local_40 = 0;
    plVar10 = plVar4;
  }
  plVar4 = plVar10 + 2;
  local_70 = plVar4;
  local_68 = plVar10;
  TSharedRef<FStringTable,1>::Init<FStringTable>(&local_70,plVar4);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_a8 = plVar4;
  local_a0 = plVar10;
  if ((longlong **)(param_1 + 0xd0) != &local_a8) {
    *(longlong **)(param_1 + 0xd0) = plVar4;
    local_a8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd8,&local_a0);
  }
  plVar4 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_a0 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>::
  ~TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>(local_60);
  return;
}



// FUNCTION 141ffa370 Rehash body=532 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneAccumulatedBlendState,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141ffa49f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141ffa49f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x30 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x2c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x28) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141ffa590 Rehash body=648 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar11 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar11 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar11) {
      uVar7 = 0;
      uVar15 = (ulonglong)uVar11;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar12 = (longlong)(int)*plVar2 - 1U & uVar7;
        uVar7 = uVar7 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar12 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar16 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar16 = puStack_28;
      }
      uVar11 = *puVar16;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar11 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_141ffa6cf;
        uVar11 = puVar16[lVar6 + 1];
      }
      uStack_54 = -uVar11 & uVar11;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_141ffa6cf:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar11 = piVar3[1];
        uVar13 = *piVar3 - uVar11 ^ uVar11 >> 0xd;
        uVar10 = (-0x61c88647 - uVar11) - uVar13 ^ uVar13 << 8;
        uVar14 = (uVar11 - uVar10) - uVar13 ^ uVar10 >> 0xd;
        uVar13 = (uVar13 - uVar10) - uVar14 ^ uVar14 >> 0xc;
        uVar11 = (uVar10 - uVar14) - uVar13 ^ uVar13 << 0x10;
        uVar14 = (uVar14 - uVar11) - uVar13 ^ uVar11 >> 5;
        uVar10 = (uVar13 - uVar11) - uVar14 ^ uVar14 >> 3;
        uVar11 = (uVar11 - uVar14) - uVar10 ^ uVar10 << 10;
        uVar11 = ((uVar14 - uVar11) - uVar10 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        piVar3[5] = uVar11;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        piVar3[4] = *(int *)((longlong)plVar8 +
                            ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar11) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141ffa820 Rehash body=644 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FObjectKey,FMontagePlayerPerSectionData>,TDefaultMapHashableKeyFuncs<FObjectKey,FMontagePlayerPerSectionData,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  int *piVar16;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar6 = 0;
      uVar14 = (ulonglong)uVar10;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar6;
        uVar6 = uVar6 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar11 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_28;
      }
      uVar10 = *puVar15;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141ffa95f;
        uVar10 = puVar15[lVar5 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_141ffa95f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        piVar16 = (int *)((longlong)iStack_1c * 0x1c + *param_1);
        uVar10 = piVar16[1];
        uVar12 = *piVar16 - uVar10 ^ uVar10 >> 0xd;
        uVar9 = (-0x61c88647 - uVar12) - uVar10 ^ uVar12 << 8;
        uVar13 = (uVar10 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar13 ^ uVar13 >> 0xc;
        uVar10 = (uVar9 - uVar12) - uVar13 ^ uVar12 << 0x10;
        uVar13 = (uVar13 - uVar10) - uVar12 ^ uVar10 >> 5;
        uVar9 = (uVar12 - uVar10) - uVar13 ^ uVar13 >> 3;
        uVar10 = (uVar10 - uVar9) - uVar13 ^ uVar9 << 10;
        uVar10 = ((uVar13 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        piVar16[6] = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar16[5] = *(int *)((longlong)plVar7 +
                             ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141ffaab0 Rehash body=533 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar9) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar9;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar9 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_141ffabef;
        uVar9 = puVar13[lVar6 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_141ffabef:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        lVar6 = *param_1 + (longlong)iStack_1c * 0x18;
        uVar4 = *(undefined8 *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar9 = (int)((ulonglong)uVar4 >> 0x20) + (int)uVar4 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x14) = uVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x10) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141ffacd0 Rehash body=525 status=ok
// SIG undefined Rehash(void)

void TSet<FMovieSceneEvaluationOperand,DefaultKeyFuncs<FMovieSceneEvaluationOperand,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_141ffadff;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_141ffadff:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x1c + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x18) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x14) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 141ffaee0 Remove body=283 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FName,FLevelStreamingSharedTrackData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,FLevelStreamingSharedTrackData::FVisibilityData,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  iVar4 = *(int *)((longlong)plVar6 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar7) * 4);
  if (iVar4 != -1) {
    lVar2 = *param_1;
    do {
      lVar5 = (longlong)iVar4;
      if (*(longlong *)(lVar2 + lVar5 * 0x50) == param_2) {
        lVar5 = lVar5 * 0x50;
        uVar7 = (longlong)*(int *)(lVar5 + 0x4c + lVar2) & uVar7;
        piVar3 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000141ffaf7b;
      }
      iVar4 = *(int *)(lVar2 + 0x48 + lVar5 * 0x50);
    } while (iVar4 != -1);
  }
  return 0;
joined_r0x000141ffaf7b:
  if (iVar1 == -1) {
LAB_141ffafb0:
    lVar5 = *param_1 + lVar5;
    if (*(longlong *)(lVar5 + 0x38) != 0) {
      FMemory::Free();
    }
    if (*(char *)(lVar5 + 9) != '\0') {
      *(undefined1 *)(lVar5 + 9) = 0;
    }
    TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar4,1);
    return 1;
  }
  if (iVar1 == iVar4) {
    *piVar3 = *(int *)(lVar5 + lVar2 + 0x48);
    goto LAB_141ffafb0;
  }
  piVar3 = (int *)((longlong)iVar1 * 0x50 + 0x48 + lVar2);
  iVar1 = *piVar3;
  goto joined_r0x000141ffaf7b;
}



// FUNCTION 141ffb020 RemoveInitialValueForObject body=279 status=ok
// SIG undefined RemoveInitialValueForObject(void)

void TMovieSceneBlendingActuator<F3DTransformTrackToken>::RemoveInitialValueForObject
               (longlong param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar6 = 0;
    iVar1 = (int)((ulonglong)param_2 >> 0x20);
    uVar7 = uVar6;
    uVar10 = uVar6;
    if ((**(int **)(param_1 + 0x18) == (int)param_2) && ((*(int **)(param_1 + 0x18))[1] == iVar1)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    do {
      iVar5 = (int)uVar6;
      uVar7 = uVar7 + 1;
      uVar6 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar7 < lVar8) {
        piVar2 = (int *)(uVar7 * 0x2c + *(longlong *)(param_1 + 0x18));
        do {
          if ((*piVar2 == (int)param_2) && (piVar2[1] == iVar1)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar4 != bVar3) break;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar7 = uVar7 + 1;
          piVar2 = piVar2 + 0xb;
        } while ((longlong)uVar7 < lVar8);
      }
      iVar11 = (int)uVar6 - iVar5;
      if (bVar4 != 0) {
        iVar9 = (int)uVar10;
        if (iVar9 != iVar5) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x2c + *(longlong *)(param_1 + 0x18)),
                     (void *)((longlong)iVar5 * 0x2c + *(longlong *)(param_1 + 0x18)),
                     (longlong)iVar11 * 0x2c);
        }
        uVar10 = (ulonglong)(uint)(iVar9 + iVar11);
      }
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar7 < lVar8);
    *(int *)(param_1 + 0x20) = (int)uVar10;
  }
  return;
}



// FUNCTION 141ffb140 RemoveInitialValueForObject body=28 status=ok
// SIG undefined RemoveInitialValueForObject(void)

void TMovieSceneBlendingActuator<MovieScene::FBlendedAnimation>::RemoveInitialValueForObject
               (longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TArray<TMovieSceneBlendingActuator<MovieScene::FBlendedAnimation>::FInitialValue,FDefaultAllocator>
  ::RemoveAll<<lambda_8ff068e11f0325475d2235a3a6038ae1>_>(param_1 + 0x18,local_res8);
  return;
}



// FUNCTION 141ffb160 RemoveInitialValueForObject body=300 status=ok
// SIG undefined RemoveInitialValueForObject(void)

void TMovieSceneBlendingActuator<FLinearColor>::RemoveInitialValueForObject
               (longlong param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar6 = 0;
    iVar1 = (int)((ulonglong)param_2 >> 0x20);
    uVar7 = uVar6;
    uVar10 = uVar6;
    if ((**(int **)(param_1 + 0x18) == (int)param_2) && ((*(int **)(param_1 + 0x18))[1] == iVar1)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    do {
      iVar5 = (int)uVar6;
      uVar7 = uVar7 + 1;
      uVar6 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar7 < lVar8) {
        piVar2 = (int *)(*(longlong *)(param_1 + 0x18) + uVar7 * 0x18);
        do {
          if ((*piVar2 == (int)param_2) && (piVar2[1] == iVar1)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar4 != bVar3) break;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar7 = uVar7 + 1;
          piVar2 = piVar2 + 6;
        } while ((longlong)uVar7 < lVar8);
      }
      iVar11 = (int)uVar6 - iVar5;
      if (bVar4 != 0) {
        iVar9 = (int)uVar10;
        if (iVar9 != iVar5) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 0x18),
                     (void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x18),
                     (longlong)iVar11 * 0x18);
        }
        uVar10 = (ulonglong)(uint)(iVar9 + iVar11);
      }
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar7 < lVar8);
    *(int *)(param_1 + 0x20) = (int)uVar10;
  }
  return;
}



// FUNCTION 141ffb290 FUN_141ffb290 body=280 status=ok
// SIG undefined FUN_141ffb290(void)

void FUN_141ffb290(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar6 = 0;
    iVar1 = (int)((ulonglong)param_2 >> 0x20);
    uVar7 = uVar6;
    uVar10 = uVar6;
    if ((**(int **)(param_1 + 0x18) == (int)param_2) && ((*(int **)(param_1 + 0x18))[1] == iVar1)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    do {
      iVar5 = (int)uVar6;
      uVar7 = uVar7 + 1;
      uVar6 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar7 < lVar8) {
        piVar2 = (int *)(uVar7 * 0x40 + *(longlong *)(param_1 + 0x18));
        do {
          if ((*piVar2 == (int)param_2) && (piVar2[1] == iVar1)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar4 != bVar3) break;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar7 = uVar7 + 1;
          piVar2 = piVar2 + 0x10;
        } while ((longlong)uVar7 < lVar8);
      }
      iVar11 = (int)uVar6 - iVar5;
      if (bVar4 != 0) {
        iVar9 = (int)uVar10;
        if (iVar9 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x40 + *(longlong *)(param_1 + 0x18)),
                     (void *)((longlong)iVar5 * 0x40 + *(longlong *)(param_1 + 0x18)),
                     (longlong)iVar11 << 6);
        }
        uVar10 = (ulonglong)(uint)(iVar9 + iVar11);
      }
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar7 < lVar8);
    *(int *)(param_1 + 0x20) = (int)uVar10;
  }
  return;
}



// FUNCTION 141ffb3b0 FUN_141ffb3b0 body=280 status=ok
// SIG undefined FUN_141ffb3b0(void)

void FUN_141ffb3b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar6 = 0;
    iVar1 = (int)((ulonglong)param_2 >> 0x20);
    uVar7 = uVar6;
    uVar10 = uVar6;
    if ((**(int **)(param_1 + 0x18) == (int)param_2) && ((*(int **)(param_1 + 0x18))[1] == iVar1)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    do {
      iVar5 = (int)uVar6;
      uVar7 = uVar7 + 1;
      uVar6 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar7 < lVar8) {
        piVar2 = (int *)(uVar7 * 0x10 + *(longlong *)(param_1 + 0x18));
        do {
          if ((*piVar2 == (int)param_2) && (piVar2[1] == iVar1)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar4 != bVar3) break;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar7 = uVar7 + 1;
          piVar2 = piVar2 + 4;
        } while ((longlong)uVar7 < lVar8);
      }
      iVar11 = (int)uVar6 - iVar5;
      if (bVar4 != 0) {
        iVar9 = (int)uVar10;
        if (iVar9 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x18)),
                     (void *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x18)),
                     (longlong)iVar11 << 4);
        }
        uVar10 = (ulonglong)(uint)(iVar9 + iVar11);
      }
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar7 < lVar8);
    *(int *)(param_1 + 0x20) = (int)uVar10;
  }
  return;
}



// FUNCTION 141ffb4d0 RemoveInitialValueForObject body=280 status=ok
// SIG undefined RemoveInitialValueForObject(void)

void TMovieSceneBlendingActuator<FVector4>::RemoveInitialValueForObject
               (longlong param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar6 = 0;
    iVar1 = (int)((ulonglong)param_2 >> 0x20);
    uVar7 = uVar6;
    uVar10 = uVar6;
    if ((**(int **)(param_1 + 0x18) == (int)param_2) && ((*(int **)(param_1 + 0x18))[1] == iVar1)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    do {
      iVar5 = (int)uVar6;
      uVar7 = uVar7 + 1;
      uVar6 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar7 < lVar8) {
        piVar2 = (int *)(uVar7 * 0x20 + *(longlong *)(param_1 + 0x18));
        do {
          if ((*piVar2 == (int)param_2) && (piVar2[1] == iVar1)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar4 != bVar3) break;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar7 = uVar7 + 1;
          piVar2 = piVar2 + 8;
        } while ((longlong)uVar7 < lVar8);
      }
      iVar11 = (int)uVar6 - iVar5;
      if (bVar4 != 0) {
        iVar9 = (int)uVar10;
        if (iVar9 != iVar5) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x18)),
                     (void *)((longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x18)),
                     (longlong)iVar11 << 5);
        }
        uVar10 = (ulonglong)(uint)(iVar9 + iVar11);
      }
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar7 < lVar8);
    *(int *)(param_1 + 0x20) = (int)uVar10;
  }
  return;
}



// FUNCTION 141ffb5f0 FUN_141ffb5f0 body=300 status=ok
// SIG undefined FUN_141ffb5f0(void)

void FUN_141ffb5f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar6 = 0;
    iVar1 = (int)((ulonglong)param_2 >> 0x20);
    uVar7 = uVar6;
    uVar10 = uVar6;
    if ((**(int **)(param_1 + 0x18) == (int)param_2) && ((*(int **)(param_1 + 0x18))[1] == iVar1)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    do {
      iVar5 = (int)uVar6;
      uVar7 = uVar7 + 1;
      uVar6 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar7 < lVar8) {
        piVar2 = (int *)(*(longlong *)(param_1 + 0x18) + uVar7 * 0x14);
        do {
          if ((*piVar2 == (int)param_2) && (piVar2[1] == iVar1)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar4 != bVar3) break;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar7 = uVar7 + 1;
          piVar2 = piVar2 + 5;
        } while ((longlong)uVar7 < lVar8);
      }
      iVar11 = (int)uVar6 - iVar5;
      if (bVar4 != 0) {
        iVar9 = (int)uVar10;
        if (iVar9 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 0x14),
                     (void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x14),
                     (longlong)iVar11 * 0x14);
        }
        uVar10 = (ulonglong)(uint)(iVar9 + iVar11);
      }
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar7 < lVar8);
    *(int *)(param_1 + 0x20) = (int)uVar10;
  }
  return;
}



// FUNCTION 141ffb720 RemoveSection body=28 status=ok
// SIG undefined RemoveSection(void)

void UMovieScene3DConstraintTrack::RemoveSection(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x58,local_res8);
  return;
}



// FUNCTION 141ffb740 RemoveSection body=67 status=ok
// SIG undefined RemoveSection(void)

void UMovieSceneCameraCutTrack::RemoveSection(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  param_1 = param_1 + 0x58;
  local_res8 = param_2;
  TArray<FName,FDefaultAllocator>::Remove(param_1,&local_res8);
  FUN_141f4f560(param_1,param_2,1);
  MovieSceneHelpers::SortConsecutiveSections(param_1);
  return;
}



// FUNCTION 141ffb790 RemoveSection body=41 status=ok
// SIG undefined RemoveSection(void)

void UMovieSceneCinematicShotTrack::RemoveSection(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x58,local_res8);
  MovieSceneHelpers::SortConsecutiveSections(param_1 + 0x58);
  return;
}



// FUNCTION 141ffb7c0 RemoveSection body=28 status=ok
// SIG undefined RemoveSection(void)

void UMovieSceneEventTrack::RemoveSection(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x70,local_res8);
  return;
}



// FUNCTION 141ffb7e0 Reset body=110 status=ok
// SIG undefined Reset(void)

void FMovieSceneActorReferenceData::Reset(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x14)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((*(int *)(param_1 + 0x3c) < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x30,0);
  }
  FKeyHandleLookupTable::Reset(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x18) = DAT_146acb830;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 141ffb850 Reset body=223 status=ok
// SIG undefined Reset(void)

void FMovieSceneEventSectionData::Reset(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(int *)(param_1 + 0x14) < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  iVar1 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar1 < 0) {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 6;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)(param_1 + 0x24);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (iVar1 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x18,0);
    }
  }
  else {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 6;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  FKeyHandleLookupTable::Reset(param_1 + 0x28);
  return;
}



// FUNCTION 141ffb930 Reset body=193 status=ok
// SIG undefined Reset(void)

void FMovieSceneStringChannel::Reset(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(int *)(param_1 + 0x14) < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  iVar1 = *(int *)(param_1 + 0x24);
  plVar2 = *(longlong **)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar1 < 0) {
    if (iVar3 != 0) {
      do {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)(param_1 + 0x24);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (iVar1 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x18,0);
    }
  }
  else {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  FKeyHandleLookupTable::Reset(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 141ffba10 FUN_141ffba10 body=163 status=ok
// SIG undefined FUN_141ffba10(void)

void FUN_141ffba10(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xc00);
  if (param_3 < 3) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x600);
    pvVar1 = *(void **)((longlong)param_1 + 0xc00);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0xc00) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x600);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xc00) = uVar2;
  return;
}



// FUNCTION 141ffbac0 ResizeForCopy body=142 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FColorParameterNameAndCurves,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x288,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x948b0fcd6e9e0653) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 9);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x288,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 141ffbb50 ResizeForCopy body=160 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FMovieSceneObjectBindingID,TInlineAllocator<2,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (param_2 != 0) {
    if (param_2 < 3) {
      uVar4 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x18,0);
      uVar4 = (uint)(uVar2 / 0x18);
      if ((int)uVar4 < (int)param_2) {
        uVar4 = 0x7fffffff;
      }
    }
  }
  if (uVar4 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (uVar4 < 3) {
      if (lVar1 == 0) goto LAB_141ffbbdd;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar4 == 0)) goto LAB_141ffbbdd;
      lVar5 = (longlong)(int)uVar4 * 0x18;
    }
    uVar3 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
  }
LAB_141ffbbdd:
  *(uint *)(param_1 + 0x3c) = uVar4;
  return;
}



// FUNCTION 141ffbbf0 ResizeGrow body=236 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FLayoutExtender::FExtendedTab,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x48);
  if (uVar1 < 3) {
    uVar2 = 2;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x4c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 5,0);
    uVar2 = (uint)(uVar3 >> 5);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x4c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x40);
  if (uVar2 < 3) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 5);
    pvVar4 = *(void **)((longlong)param_1 + 0x40);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 5,0);
        *(void **)((longlong)param_1 + 0x40) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 5);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 5;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar5;
  return;
}



// FUNCTION 141ffbce0 FUN_141ffbce0 body=157 status=ok
// SIG undefined FUN_141ffbce0(void)

void FUN_141ffbce0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc10);
  if (uVar1 < 3) {
    iVar4 = 2;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xc14) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x600,0);
    iVar4 = (int)(uVar3 / 0x600);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xc14) = iVar4;
  FUN_141ffba10(param_1,param_2,iVar4,0x600);
  return;
}



// FUNCTION 141ffbd80 ResizeGrow body=266 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FColorParameterNameAndValue,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x38);
  if (uVar1 < 3) {
    uVar5 = 2;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x3c) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x18,0);
    uVar5 = (uint)(uVar2 / 0x18);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x3c) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x30);
  if (uVar5 < 3) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x18);
    pvVar3 = *(void **)((longlong)param_1 + 0x30);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x18,0);
        *(void **)((longlong)param_1 + 0x30) = pvVar3;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x18);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x18;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar4;
  return;
}



// FUNCTION 141ffbe90 ResizeGrow body=266 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x20);
  if (uVar1 < 2) {
    uVar5 = 1;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x24) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x18,0);
    uVar5 = (uint)(uVar2 / 0x18);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x24) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x18);
  if (uVar5 < 2) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x18);
    pvVar3 = *(void **)((longlong)param_1 + 0x18);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x18,0);
        *(void **)((longlong)param_1 + 0x18) = pvVar3;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x18);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x18;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
  return;
}



// FUNCTION 141ffbfa0 ResizeGrow body=266 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FLevelStreamingSharedTrackData::FVisibilityData::FVisibilityRequest,TInlineAllocator<2,FDefaultAllocator>_>
     ::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x30);
  if (uVar1 < 3) {
    uVar5 = 2;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x34) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x14,0);
    uVar5 = (uint)(uVar2 / 0x14);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x34) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x28);
  if (uVar5 < 3) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x14);
    pvVar3 = *(void **)((longlong)param_1 + 0x28);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x14,0);
        *(void **)((longlong)param_1 + 0x28) = pvVar3;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x14);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x14;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar4;
  return;
}



// FUNCTION 141ffc0b0 ResizeShrink body=257 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FMovieSceneSectionData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeShrink
               (void *param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar5 = *(uint *)((longlong)param_1 + 0x48);
  uVar7 = *(uint *)((longlong)param_1 + 0x4c);
  if (uVar5 < 5) {
    uVar5 = 4;
    goto LAB_141ffc119;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar7 - uVar5) << 4)) ||
     ((int)(uVar5 * 3) < (int)(uVar7 * 2))) {
    if (0x40 < uVar7 - uVar5) {
      if (0 < (int)uVar5) {
        uVar2 = FMemory::QuantizeSize((longlong)(int)uVar5 << 4,0);
        uVar7 = *(uint *)((longlong)param_1 + 0x4c);
        uVar5 = (uint)(uVar2 >> 4);
      }
      goto LAB_141ffc119;
    }
    if (uVar5 == 0) goto LAB_141ffc119;
  }
  uVar5 = uVar7;
LAB_141ffc119:
  if (uVar5 == uVar7) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x48);
  *(uint *)((longlong)param_1 + 0x4c) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x40);
  if (uVar5 < 5) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)iVar1 << 4);
    pvVar3 = *(void **)((longlong)param_1 + 0x40);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 << 4,0);
        *(void **)((longlong)param_1 + 0x40) = pvVar3;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)iVar1 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar5 << 4;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar4;
  return;
}



// FUNCTION 141ffc1c0 FUN_141ffc1c0 body=127 status=ok
// SIG undefined FUN_141ffc1c0(void)

void FUN_141ffc1c0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 3) {
      iVar2 = 2;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x600,0);
      iVar2 = (int)(uVar1 / 0x600);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc14)) {
    *(int *)(param_1 + 0xc14) = iVar2;
    FUN_141ffba10(param_1,*(undefined4 *)(param_1 + 0xc10),iVar2,0x600);
  }
  return;
}



// FUNCTION 141ffc2a0 RestoreState body=48 status=ok
// SIG undefined RestoreState(void)

void PropertyTemplate::TCachedState<FEulerTransform,FEulerTransform>::RestoreState(longlong param_1)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_38 = *(undefined4 *)(param_1 + 8);
  uStack_34 = *(undefined4 *)(param_1 + 0xc);
  uStack_30 = *(undefined4 *)(param_1 + 0x10);
  uStack_2c = *(undefined4 *)(param_1 + 0x14);
  local_18 = *(undefined4 *)(param_1 + 0x28);
  local_28 = *(undefined4 *)(param_1 + 0x18);
  uStack_24 = *(undefined4 *)(param_1 + 0x1c);
  uStack_20 = *(undefined4 *)(param_1 + 0x20);
  uStack_1c = *(undefined4 *)(param_1 + 0x24);
  FTrackInstancePropertyBindings::CallFunction<FEulerTransform>(param_1 + 0x30,local_28,&local_38);
  return;
}



// FUNCTION 141ffc2d0 RestoreState body=78 status=ok
// SIG undefined RestoreState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void PropertyTemplate::TCachedState<FTransform,FTransform>::RestoreState(longlong param_1)

{
  undefined1 auStack_68 [32];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  local_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 0x28);
  uStack_2c = *(undefined4 *)(param_1 + 0x2c);
  local_28 = *(undefined4 *)(param_1 + 0x30);
  uStack_24 = *(undefined4 *)(param_1 + 0x34);
  uStack_20 = *(undefined4 *)(param_1 + 0x38);
  uStack_1c = *(undefined4 *)(param_1 + 0x3c);
  FTrackInstancePropertyBindings::CallFunction<FTransform>(param_1 + 0x40,local_38,&local_48);
  return;
}



// FUNCTION 141ffc340 RestoreState body=32 status=ok
// SIG undefined RestoreState(void)

void PropertyTemplate::TCachedState<FVector4,FVector4>::RestoreState
               (longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)(param_1 + 0x10);
  uStack_14 = *(undefined4 *)(param_1 + 0x14);
  uStack_10 = *(undefined4 *)(param_1 + 0x18);
  uStack_c = *(undefined4 *)(param_1 + 0x1c);
  FTrackInstancePropertyBindings::CallFunction<FVector4>(param_1 + 0x20,param_2,&local_18);
  return;
}



// FUNCTION 141ffc360 RestoreState body=41 status=ok
// SIG undefined RestoreState(void)

void PropertyTemplate::TCachedState<FVector,FVector>::RestoreState
               (longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *(undefined8 *)(param_1 + 8);
  local_10 = *(undefined4 *)(param_1 + 0x10);
  FTrackInstancePropertyBindings::CallFunction<FVector>(param_1 + 0x18,param_2,&local_18);
  return;
}



// FUNCTION 141ffc390 RestoreState body=142 status=ok
// SIG undefined RestoreState(void)

void PropertyTemplate::TCachedState<FString,FString>::RestoreState
               (longlong param_1,undefined8 param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_1 + 0x10);
  lVar1 = (longlong)local_10;
  _Src = *(void **)(param_1 + 8);
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FTrackInstancePropertyBindings::CallFunction<FString>(param_1 + 0x18,param_2,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141ffc430 FUN_141ffc430 body=95 status=ok
// SIG undefined FUN_141ffc430(void)

void FUN_141ffc430(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  FUN_141fd9220(param_1 + 8);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar1 == '\0') {
    local_res8 = *(undefined1 *)(param_1 + 0xb);
    local_res9 = *(undefined1 *)(param_1 + 0xc);
    local_resa = *(undefined1 *)(param_1 + 0xd);
    local_resb = 0;
    (**(code **)(*param_2 + 0x418))(param_2,&local_res8);
  }
  return;
}



// FUNCTION 141ffc4a0 FUN_141ffc4a0 body=53 status=ok
// SIG undefined FUN_141ffc4a0(void)

void FUN_141ffc4a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_141ff54d0(param_2);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141ffc4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x290))(plVar1,*(undefined1 *)(param_1 + 8),1);
    return;
  }
  return;
}



// FUNCTION 141ffc550 FUN_141ffc550 body=67 status=ok
// SIG undefined FUN_141ffc550(void)

void FUN_141ffc550(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 8);
  ULevelStreaming::SetShouldBeVisible(param_2,cVar1);
  if ((cVar1 != '\0') && (param_2[0x24] == 0)) {
    (**(code **)(*param_2 + 0x278))(param_2,1);
  }
  return;
}



// FUNCTION 141ffc5c0 RestoreState body=272 status=ok
// SIG undefined RestoreState(void)

void FParticleParameterPreAnimatedToken::RestoreState(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x10) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    FUN_14260f0c0(param_2,*puVar1,*(undefined4 *)(puVar1 + 1));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  puVar1 = puVar2 + (longlong)*(int *)(param_1 + 0x20) * 3;
  if (puVar2 != puVar1) {
    puVar3 = puVar2 + 1;
    do {
      local_18 = *puVar3;
      uStack_10 = *(undefined4 *)(puVar3 + 1);
      FUN_142610200(param_2,*puVar2,&local_18);
      puVar2 = puVar2 + 3;
      puVar3 = puVar3 + 3;
    } while (puVar2 != puVar1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = puVar2 + (longlong)*(int *)(param_1 + 0x30) * 3;
  if (puVar2 != puVar1) {
    puVar3 = puVar2 + 1;
    do {
      local_18 = *puVar3;
      uStack_10 = *(undefined4 *)(puVar3 + 1);
      uStack_c = *(undefined4 *)((longlong)puVar3 + 0xc);
      FUN_14260ee50(param_2,*puVar2,&local_18);
      puVar2 = puVar2 + 3;
      puVar3 = puVar3 + 3;
    } while (puVar2 != puVar1);
  }
  return;
}



// FUNCTION 141ffc710 FUN_141ffc710 body=60 status=ok
// SIG undefined FUN_141ffc710(void)

void FUN_141ffc710(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0xc);
  if (lVar1 != 0) {
    (**(code **)(*param_2 + 0x568))(param_2,*(undefined4 *)(param_1 + 8),lVar1);
  }
  return;
}



// FUNCTION 141ffc750 RestoreState body=95 status=ok
// SIG undefined RestoreState(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `FPreAnimatedCameraAnimTokenProducer::CacheExistingState'::`2'::FRestoreToken::RestoreState
               (undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  UCameraAnimInst::Stop(param_2,1);
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar4 = iVar2 >> 0x1f & 0xffff;
    uVar3 = iVar2 + uVar4;
    puVar1 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) + 8 +
                     (longlong)(int)((uVar3 & 0xffff) - uVar4) * 0x18);
    *puVar1 = *puVar1 & 0xbfffffff;
    return;
  }
  _DAT_00000008 = _DAT_00000008 & 0xbfffffff;
  return;
}



// FUNCTION 141ffc7b0 FUN_141ffc7b0 body=99 status=ok
// SIG undefined FUN_141ffc7b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ffc7b0(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  (**(code **)(*param_2 + 0x298))(param_2,1);
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar4 = iVar2 >> 0x1f & 0xffff;
    uVar3 = iVar2 + uVar4;
    puVar1 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) + 8 +
                     (longlong)(int)((uVar3 & 0xffff) - uVar4) * 0x18);
    *puVar1 = *puVar1 & 0xbfffffff;
    return;
  }
  _DAT_00000008 = _DAT_00000008 & 0xbfffffff;
  return;
}



// FUNCTION 141ffc840 FUN_141ffc840 body=100 status=ok
// SIG undefined FUN_141ffc840(void)

void FUN_141ffc840(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x70))(param_2);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
    if ((lVar2 != 0) && (0.0 < *(float *)(param_1 + 8))) {
      plVar1 = (longlong *)UWorld::GetWorldSettings(lVar2,0,1);
      if (plVar1 != (longlong *)0x0) {
        *(undefined4 *)((longlong)plVar1 + 0x5e4) = *(undefined4 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000141ffc897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x600))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141ffc8b0 FUN_141ffc8b0 body=45 status=ok
// SIG undefined FUN_141ffc8b0(void)

void FUN_141ffc8b0(undefined8 param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x560))(param_2);
    (**(code **)(*param_2 + 0x3b0))(param_2,0);
  }
  return;
}



// FUNCTION 141ffc8f0 FUN_141ffc8f0 body=177 status=ok
// SIG undefined FUN_141ffc8f0(void)

void FUN_141ffc8f0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1428dfc70();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000141ffc94a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x310))(param_2,*(undefined1 *)(param_1 + 8));
    return;
  }
  lVar2 = FUN_1429ff160();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_142397540(param_2,*(undefined1 *)(param_1 + 8),
                  CONCAT71((int7)((ulonglong)(lVar2 + 0x88) >> 8),1));
  }
  return;
}



// FUNCTION 141ffc9b0 FUN_141ffc9b0 body=175 status=ok
// SIG undefined FUN_141ffc9b0(void)

void FUN_141ffc9b0(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_1423ac7e0(param_2);
  if (lVar4 != 0) {
    lVar5 = FUN_141fc08c0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_141fae720(lVar4);
    }
  }
  FUN_141fb1bb0(param_2);
  *(undefined1 *)(param_2 + 0x878) = *(undefined1 *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0xc);
  iVar3 = FUN_14062c730(param_2);
  if (iVar3 != iVar1) {
    FUN_1423b9af0(param_2,iVar1);
  }
  *(byte *)(param_2 + 0x880) =
       *(byte *)(param_2 + 0x880) ^
       (*(char *)(param_1 + 0x10) << 5 ^ *(byte *)(param_2 + 0x880)) & 0x20;
  return;
}



// FUNCTION 141ffca60 RestoreState body=107 status=ok
// SIG undefined RestoreState(void)

void `FSpawnTrackPreAnimatedTokenProducer::CacheExistingState'::`2'::FToken::RestoreState
               (longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = (**(code **)(*param_3 + 0x50))(param_3);
  cVar1 = FMovieSceneSpawnRegister::DestroySpawnedObject(uVar2,param_1 + 8,param_1 + 0x18,param_3);
  if (cVar1 == '\0') {
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x50))(param_3);
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
  }
  return;
}



// FUNCTION 141ffcad0 RestoreState body=75 status=ok
// SIG undefined RestoreState(void)

void `FStopPlayingMontageTokenProducer::CacheExistingState'::`2'::FToken::RestoreState
               (longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_48 [64];
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = UAnimInstance::GetMontageInstanceForID(lVar1,*(undefined4 *)(param_1 + 0x10));
    if (lVar1 != 0) {
      uVar2 = FAlphaBlend::FAlphaBlend(local_48,0);
      FUN_142281740(lVar1,uVar2,0);
    }
  }
  return;
}



// FUNCTION 141ffcb20 RetrieveCurrentValue body=78 status=ok
// SIG undefined RetrieveCurrentValue(void)

undefined4 TPropertyActuator<int>::RetrieveCurrentValue(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 local_28 [8];
  longlong local_20;
  
  FTrackInstancePropertyBindings::FindOrAdd(*(undefined8 *)(param_1 + 0x38),local_28,param_2);
  lVar1 = FWeakObjectPtr::Get(local_28);
  if ((((lVar1 != 0) && (local_20 != 0)) && ((*(uint *)(lVar1 + 8) & 0x18000) == 0)) &&
     (puVar2 = (undefined4 *)(*(int *)(lVar1 + 0x44) + local_20), puVar2 != (undefined4 *)0x0)) {
    return *puVar2;
  }
  return 0;
}



// FUNCTION 141ffcb70 RetrieveCurrentValue body=81 status=ok
// SIG undefined RetrieveCurrentValue(void)

undefined4 TPropertyActuator<float>::RetrieveCurrentValue(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 local_28 [8];
  longlong local_20;
  
  FTrackInstancePropertyBindings::FindOrAdd(*(undefined8 *)(param_1 + 0x38),local_28,param_2);
  lVar1 = FWeakObjectPtr::Get(local_28);
  if ((((lVar1 != 0) && (local_20 != 0)) && ((*(uint *)(lVar1 + 8) & 0x18000) == 0)) &&
     (puVar2 = (undefined4 *)(*(int *)(lVar1 + 0x44) + local_20), puVar2 != (undefined4 *)0x0)) {
    return *puVar2;
  }
  return 0;
}



// FUNCTION 141ffcbd0 RetrieveCurrentValue body=27 status=ok
// SIG undefined RetrieveCurrentValue(void)

undefined8
TPropertyActuator<FEulerTransform>::RetrieveCurrentValue(longlong param_1,undefined8 param_2)

{
  FTrackInstancePropertyBindings::GetCurrentValue<FEulerTransform>(*(undefined8 *)(param_1 + 0x38));
  return param_2;
}



// FUNCTION 141ffcbf0 RetrieveCurrentValue body=27 status=ok
// SIG undefined RetrieveCurrentValue(void)

undefined8 TPropertyActuator<FTransform>::RetrieveCurrentValue(longlong param_1,undefined8 param_2)

{
  FTrackInstancePropertyBindings::GetCurrentValue<FTransform>(*(undefined8 *)(param_1 + 0x38));
  return param_2;
}



// FUNCTION 141ffcc10 RetrieveCurrentValue body=98 status=ok
// SIG undefined RetrieveCurrentValue(void)

undefined8 *
TPropertyActuator<FVector2D>::RetrieveCurrentValue(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined1 local_28 [8];
  longlong local_20;
  
  FTrackInstancePropertyBindings::FindOrAdd(*(undefined8 *)(param_1 + 0x38),local_28);
  lVar1 = FWeakObjectPtr::Get(local_28);
  if ((((lVar1 != 0) && (local_20 != 0)) && ((*(uint *)(lVar1 + 8) & 0x18000) == 0)) &&
     (puVar2 = (undefined8 *)(*(int *)(lVar1 + 0x44) + local_20), puVar2 != (undefined8 *)0x0)) {
    local_res8 = *puVar2;
  }
  *param_2 = local_res8;
  return param_2;
}



// FUNCTION 141ffcc80 RetrieveCurrentValue body=104 status=ok
// SIG undefined RetrieveCurrentValue(void)

undefined8 * TPropertyActuator<FVector4>::RetrieveCurrentValue(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FTrackInstancePropertyBindings::FindOrAdd(*(undefined8 *)(param_1 + 0x38),local_28);
  lVar1 = FWeakObjectPtr::Get(local_28);
  if ((((lVar1 == 0) || (CONCAT44(uStack_1c,uStack_20) == 0)) ||
      ((*(uint *)(lVar1 + 8) & 0x18000) != 0)) ||
     (puVar2 = (undefined4 *)((longlong)*(int *)(lVar1 + 0x44) + CONCAT44(uStack_1c,uStack_20)),
     puVar2 == (undefined4 *)0x0)) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0x3f800000;
  }
  else {
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
  }
  *param_2 = CONCAT44(uVar4,uVar3);
  param_2[1] = CONCAT44(uVar6,uVar5);
  return param_2;
}



// FUNCTION 141ffccf0 RetrieveCurrentValue body=27 status=ok
// SIG undefined RetrieveCurrentValue(void)

undefined8 TPropertyActuator<FVector>::RetrieveCurrentValue(longlong param_1,undefined8 param_2)

{
  FTrackInstancePropertyBindings::GetCurrentValue<FVector>(*(undefined8 *)(param_1 + 0x38));
  return param_2;
}



// FUNCTION 141ffcd10 RetrieveCurrentValue body=72 status=ok
// SIG undefined RetrieveCurrentValue(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FColorTokenActuator::RetrieveCurrentValue(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  puVar2 = (undefined8 *)FUN_141ff1910(local_28,param_3,*(undefined8 *)(param_1 + 0x38));
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 141ffcd60 FUN_141ffcd60 body=96 status=ok
// SIG undefined FUN_141ffcd60(void)

undefined8 * FUN_141ffcd60(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = FUN_141f63360(param_3);
  if (lVar4 != 0) {
    uVar2 = *(undefined4 *)(lVar4 + 500);
    *param_2 = *(undefined8 *)(lVar4 + 0x1ec);
    *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)(lVar4 + 0x1f8);
    uVar1 = *(undefined8 *)(lVar4 + 0x204);
    *(undefined4 *)(param_2 + 1) = uVar2;
    uVar2 = *(undefined4 *)(lVar4 + 0x200);
    uVar3 = *(undefined4 *)(lVar4 + 0x20c);
    param_2[3] = uVar1;
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  }
  return param_2;
}



// FUNCTION 141ffcdc0 Serialize body=115 status=ok
// SIG undefined Serialize(void)

void FManifestReader::Serialize(longlong param_1,void *param_2,size_t param_3)

{
  if ((param_3 != 0) && (-1 < (char)*(byte *)(param_1 + 0x28))) {
    if ((longlong)(*(longlong *)(param_1 + 0x90) + param_3) <=
        (longlong)(int)(*(longlong **)(param_1 + 0x98))[1]) {
      ::_guard_xfg_dispatch_icall_nop
                (param_2,(void *)((longlong)(int)*(longlong *)(param_1 + 0x90) +
                                 **(longlong **)(param_1 + 0x98)),param_3);
      *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_3;
      return;
    }
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
  }
  return;
}



// FUNCTION 141ffce40 FUN_141ffce40 body=352 status=ok
// SIG undefined FUN_141ffce40(void)

undefined8 FUN_141ffce40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  undefined1 local_28 [32];
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464af950);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar2 = FArchive::CustomVer(param_2,&DAT_1464af950);
    if (iVar2 < 8) {
      local_res8 = 0;
      (**(code **)(*param_2 + 0x30))(param_2,&local_res8);
      uVar3 = FSoftObjectPath::FSoftObjectPath(local_28,local_res8);
      FSoftObjectPath::operator=(param_1,uVar3);
      goto LAB_141ffcebb;
    }
  }
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
LAB_141ffcebb:
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0x20),(longlong)*(int *)(param_1 + 0x24));
  iVar2 = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x20);
  }
  plVar1 = (longlong *)param_2[1];
  local_res8 = CONCAT44(local_res8._4_4_,iVar2);
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,&local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,&local_res8,4);
    }
  }
  else {
    local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)*plVar1);
    *plVar1 = *plVar1 + 4;
  }
  if (-1 < (char)*(byte *)(param_2 + 5)) {
    if ((-1 < (int)local_res8) &&
       (((*(byte *)((longlong)param_2 + 0x2b) & 8) == 0 || ((int)local_res8 < 0x1000001)))) {
      *(int *)(param_1 + 0x20) = (int)local_res8;
      if ((((int)local_res8 != 0) || (iVar2 = 0, *(int *)(param_1 + 0x24) != 0)) &&
         (iVar2 = (int)local_res8, (*(byte *)(param_2 + 5) & 1) != 0)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                  (param_1 + 0x18,local_res8 & 0xffffffff,*(undefined4 *)(param_1 + 0x24));
        iVar2 = *(int *)(param_1 + 0x20);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*(undefined8 *)(param_1 + 0x18),(longlong)iVar2);
      return 1;
    }
  }
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
  return 1;
}



// FUNCTION 141ffcfa0 FUN_141ffcfa0 body=123 status=ok
// SIG undefined FUN_141ffcfa0(void)

void FUN_141ffcfa0(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_3 != 0) && (-1 < (char)param_1[5])) {
    lVar1 = param_1[0x12];
    lVar2 = (**(code **)(*param_1 + 0x98))();
    if (lVar2 < (longlong)(lVar1 + param_3)) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
    }
    else {
      _guard_xfg_dispatch_icall_nop
                (param_2,(void *)((longlong)(int)lVar1 + *(longlong *)param_1[0x13]),param_3);
      param_1[0x12] = param_1[0x12] + param_3;
    }
  }
  return;
}



// FUNCTION 141ffd020 FUN_141ffd020 body=46 status=ok
// SIG undefined FUN_141ffd020(void)

void FUN_141ffd020(undefined8 param_1,longlong param_2)

{
  UMovieSceneSection::Serialize();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUN_141fffd70(param_1);
  }
  return;
}



// FUNCTION 141ffd050 FUN_141ffd050 body=46 status=ok
// SIG undefined FUN_141ffd050(void)

void FUN_141ffd050(undefined8 param_1,longlong param_2)

{
  UMovieSceneSection::Serialize();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUN_141ff90b0(param_1);
  }
  return;
}



// FUNCTION 141ffd080 FUN_141ffd080 body=46 status=ok
// SIG undefined FUN_141ffd080(void)

void FUN_141ffd080(undefined8 param_1,longlong param_2)

{
  UMovieSceneSection::Serialize();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUN_141ff9380(param_1);
  }
  return;
}



// FUNCTION 141ffd0b0 FUN_141ffd0b0 body=46 status=ok
// SIG undefined FUN_141ffd0b0(void)

void FUN_141ffd0b0(undefined8 param_1,longlong param_2)

{
  UMovieSceneSection::Serialize();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUN_141ffa070(param_1);
  }
  return;
}



// FUNCTION 141ffd0e0 FUN_141ffd0e0 body=1471 status=ok
// SIG undefined FUN_141ffd0e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141ffd0e0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  float **ppfVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  void *pvVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  void *_Src;
  float *pfVar13;
  float fVar14;
  longlong lVar15;
  float *pfVar16;
  undefined1 auStack_148 [32];
  float *local_128;
  int local_120 [2];
  float *local_118;
  float *local_110;
  int local_108;
  undefined4 local_104;
  int local_100 [2];
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8;
  void *local_e0;
  float local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_80;
  undefined4 local_78;
  void *local_70;
  ulonglong local_68;
  float *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146acbb58) && (_Init_thread_header(&DAT_146acbb58), DAT_146acbb58 == -1))
  {
    FName::FName(&DAT_146acbb50,"StringCurve",1);
    _Init_thread_footer(&DAT_146acbb58);
  }
  local_128 = (float *)0xa;
  if ((*param_2 == 10) && (param_2[3] == DAT_146acbb50)) {
    local_c8 = &PTR__scalar_deleting_destructor__144f4e700;
    local_c0 = 0;
    local_b8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0xffffffff;
    uVar12 = 0;
    local_8c = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_60 = (float *)0x0;
    local_58 = 0;
    uVar7 = FStringCurve::StaticStruct();
    FUN_141725e50(uVar7,param_3,&local_c8,0);
    pvVar9 = local_70;
    lVar10 = (longlong)(int)local_68;
    local_128 = (float *)0x0;
    local_110 = (float *)0x0;
    local_108 = (int)local_68;
    pfVar13 = (float *)0x0;
    if ((int)local_68 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_110,local_68 & 0xffffffff,0);
      pfVar13 = local_110;
      local_128 = local_110;
      _guard_xfg_dispatch_icall_nop(local_110,pvVar9,lVar10 * 2);
      uVar12 = local_104;
    }
    iVar4 = local_108;
    if ((local_108 != 0) && (local_108 != 1)) {
      ppfVar1 = (float **)(param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x38) = 1;
      if (ppfVar1 != &local_110) {
        if (*ppfVar1 != (float *)0x0) {
          FMemory::Free();
        }
        *ppfVar1 = pfVar13;
        *(int *)(param_1 + 0x30) = iVar4;
        *(undefined4 *)(param_1 + 0x34) = uVar12;
        local_128 = (float *)0x0;
        pfVar13 = (float *)0x0;
      }
    }
    FUN_141f52860(&local_d0);
    iVar4 = FUN_14046f210(&local_c8);
    plVar2 = (longlong *)(param_1 + 8);
    if (*(int *)(param_1 + 0x14) < iVar4) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar2,iVar4);
    }
    iVar4 = FUN_14046f210(&local_c8);
    plVar3 = (longlong *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x24) < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar3,iVar4);
    }
    local_118 = local_60;
    local_110 = local_60 + (longlong)(int)local_58 * 6;
    if (local_60 != local_110) {
      local_f0 = -4;
      local_f8 = 0xfffffffffffffffe;
      lVar10 = -2;
      local_e8 = -2;
      pfVar16 = local_60;
      do {
        local_118 = pfVar16;
        UpgradeLegacyMovieSceneTime(local_100,0,local_d0,(double)*pfVar16);
        local_d8 = pfVar16[4];
        lVar15 = (longlong)(int)local_d8;
        _Src = (void *)0x0;
        pvVar9 = *(void **)(pfVar16 + 2);
        local_e0 = (void *)0x0;
        if (local_d8 == 0.0) {
          local_d4 = 0;
          fVar14 = 0.0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,local_d8,0);
          _Src = local_e0;
          _guard_xfg_dispatch_icall_nop(local_e0,pvVar9,lVar15 * 2);
          fVar14 = local_d8;
        }
        iVar4 = local_100[0];
        local_120[0] = local_100[0];
        if (lVar10 == -2 || lVar10 + 2 < 0) {
          iVar6 = *(int *)(param_1 + 0x10);
          iVar5 = iVar6 + 1;
          *(int *)(param_1 + 0x10) = iVar5;
          if (*(int *)(param_1 + 0x14) < iVar5) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2);
          }
          *(int *)(*plVar2 + (longlong)iVar6 * 4) = iVar4;
          iVar4 = *(int *)(param_1 + 0x20);
          iVar6 = iVar4 + 1;
          *(int *)(param_1 + 0x20) = iVar6;
          if (*(int *)(param_1 + 0x24) < iVar6) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3);
          }
          puVar11 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar3);
          *puVar11 = 0;
          *(float *)(puVar11 + 1) = fVar14;
          if (fVar14 == 0.0) {
            *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
          }
          else {
LAB_141ffd3d3:
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar11,fVar14,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar11,_Src,(longlong)(int)fVar14 * 2);
          }
        }
        else {
          lVar15 = *plVar2;
          if (local_100[0] < *(int *)(local_f0 + lVar15)) {
            iVar4 = (int)local_f8;
            if (-1 < local_e8) {
              piVar8 = (int *)(local_f0 + -4 + lVar15);
              do {
                if (*piVar8 <= local_100[0]) {
                  TArray<FFrameNumber,FDefaultAllocator>::Insert(plVar2,local_120,iVar4 + 1);
                  iVar6 = *(int *)(param_1 + 0x20);
                  *(int *)(param_1 + 0x20) = iVar6 + 1;
                  if (*(int *)(param_1 + 0x24) < iVar6 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar6);
                  }
                  pvVar9 = (void *)((longlong)(iVar4 + 1) * 0x10 + *plVar3);
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)pvVar9 + 0x10),pvVar9,
                             (longlong)(iVar6 - (iVar4 + 1)) << 4);
                  puVar11 = (undefined8 *)((lVar10 + 1) * 0x10 + *plVar3);
                  *puVar11 = 0;
                  *(float *)(puVar11 + 1) = fVar14;
                  if (fVar14 == 0.0) {
                    *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
                  }
                  else {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar11,fVar14,0);
                    _guard_xfg_dispatch_icall_nop((void *)*puVar11,_Src,(longlong)(int)fVar14 * 2);
                  }
                  break;
                }
                iVar4 = iVar4 + -1;
                piVar8 = piVar8 + -1;
                lVar10 = lVar10 + -1;
              } while (-1 < lVar10);
            }
            pfVar16 = local_118;
            if (iVar4 < 0) {
              TArray<FFrameNumber,FDefaultAllocator>::Insert(plVar2,local_120,0);
              iVar4 = *(int *)(param_1 + 0x20);
              *(int *)(param_1 + 0x20) = iVar4 + 1;
              if (*(int *)(param_1 + 0x24) < iVar4 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar4);
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar3 + 0x10),(void *)*plVar3,(longlong)iVar4 << 4);
              puVar11 = (undefined8 *)*plVar3;
              *puVar11 = 0;
              *(float *)(puVar11 + 1) = fVar14;
              if (fVar14 == 0.0) {
                *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
                pfVar16 = local_118;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar11,fVar14,0);
                _guard_xfg_dispatch_icall_nop((void *)*puVar11,_Src,(longlong)(int)fVar14 * 2);
                pfVar16 = local_118;
              }
            }
          }
          else {
            iVar6 = *(int *)(param_1 + 0x10);
            iVar5 = iVar6 + 1;
            *(int *)(param_1 + 0x10) = iVar5;
            if (*(int *)(param_1 + 0x14) < iVar5) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2);
              lVar15 = *plVar2;
            }
            *(int *)(lVar15 + (longlong)iVar6 * 4) = iVar4;
            iVar4 = *(int *)(param_1 + 0x20);
            iVar6 = iVar4 + 1;
            *(int *)(param_1 + 0x20) = iVar6;
            if (*(int *)(param_1 + 0x24) < iVar6) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3);
            }
            puVar11 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar3);
            *puVar11 = 0;
            *(float *)(puVar11 + 1) = fVar14;
            if (fVar14 != 0.0) goto LAB_141ffd3d3;
            *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
          }
        }
        local_f8 = CONCAT44(local_f8._4_4_,(int)local_f8 + 1);
        lVar10 = local_e8 + 1;
        local_f0 = local_f0 + 4;
        local_e8 = lVar10;
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
        pfVar16 = pfVar16 + 6;
        pfVar13 = local_128;
        local_118 = pfVar16;
      } while (pfVar16 != local_110);
    }
    if (pfVar13 != (float *)0x0) {
      FMemory::Free(pfVar13);
    }
    local_c8 = &PTR__scalar_deleting_destructor__144f4e700;
    TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
              (&local_60);
    if (local_70 != (void *)0x0) {
      FMemory::Free();
    }
    local_c8 = &PTR__scalar_deleting_destructor__14413eb30;
    local_78 = 0;
    if (local_80 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_c0);
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 141ffd6a0 FUN_141ffd6a0 body=786 status=ok
// SIG undefined FUN_141ffd6a0(void)

void FUN_141ffd6a0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,undefined4 param_8,
                  undefined4 param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int local_res20;
  int iStackX_24;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar7;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined4 local_60;
  undefined **local_58;
  undefined1 *local_50;
  undefined **local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  
  lVar6 = param_7;
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  if ((*(longlong *)(param_4 + 0x718) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_4 + 0x718) + 0x48), lVar3 == 0)) {
LAB_141ffd6f8:
    bVar1 = false;
  }
  else {
    if (param_7 != 0) {
      if ((*(longlong *)(param_7 + 0x38) == 0) || (lVar3 != *(longlong *)(param_7 + 0x38))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_141ffd6f8;
    }
    bVar1 = true;
  }
  if (bVar1) {
    lVar3 = FUN_1423ac7e0(param_4);
    if (lVar3 != 0) {
      lVar4 = FUN_141fc08c0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        TMovieSceneAnimTypeIDContainer<FObjectKey>::GetAnimTypeID
                  (param_1 + 0x30,&local_res20,&param_6);
        local_68 = *(undefined1 **)(param_3 + 0x2d0);
        local_58 = &PTR_FUN_144f45918;
        local_50 = &LAB_141ffba00;
        local_60 = *(undefined4 *)(param_3 + 0x2d8);
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (param_3 + 0xf8,CONCAT44(iStackX_24,local_res20),&local_58,lVar3,
                   *(undefined1 *)(param_3 + 0x2dc),&local_68);
        FUN_141fb1de0(lVar3,lVar6,iStackX_24 * 0x17 + local_res20,param_8,param_9,param_12);
        return;
      }
    }
    lVar3 = FUN_1423ac7e0(param_4);
    if (lVar3 != 0) {
      TSet<TTuple<FObjectKey,FMontagePlayerPerSectionData>,TDefaultMapHashableKeyFuncs<FObjectKey,FMontagePlayerPerSectionData,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x58,&local_78,&param_6);
      if (((local_78 == -1) ||
          (lVar4 = (longlong)local_78 * 0x1c + *(longlong *)(param_1 + 0x58), lVar4 == 0)) ||
         (lVar4 == -8)) {
        local_res20 = -1;
      }
      else {
        local_res20 = *(int *)(lVar4 + 0x10);
      }
      uVar5 = FUN_142280420(param_5,param_4,&local_res20,lVar6,param_8,CONCAT44(uVar7,param_9),
                            param_10);
      FWeakObjectPtr::operator=(&local_70,uVar5);
      cVar2 = FWeakObjectPtr::IsValid(&local_70);
      if (cVar2 != '\0') {
        TSet<TTuple<FObjectKey,FMontagePlayerPerSectionData>,TDefaultMapHashableKeyFuncs<FObjectKey,FMontagePlayerPerSectionData,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x58,&local_78,&param_6);
        if ((local_78 == -1) ||
           (lVar6 = (longlong)local_78 * 0x1c + *(longlong *)(param_1 + 0x58), lVar6 == 0)) {
          local_68 = (undefined1 *)&param_6;
          FUN_141fc7f80(param_1 + 0x58,&local_78,&local_68,0);
          lVar6 = (longlong)local_78 * 0x1c + *(longlong *)(param_1 + 0x58);
        }
        *(undefined4 *)(lVar6 + 8) = local_70;
        *(undefined4 *)(lVar6 + 0xc) = local_6c;
        *(int *)(lVar6 + 0x10) = local_res20;
        TMovieSceneAnimTypeIDContainer<FObjectKey>::GetAnimTypeID(param_1 + 0x30,&local_68,&param_6)
        ;
        FWeakObjectPtr::operator=(&local_78,lVar3);
        local_48 = &PTR_FUN_144f4cc80;
        local_40 = local_78;
        local_3c = local_74;
        local_38 = local_res20;
        uVar5 = FWeakObjectPtr::Get(&local_70);
        local_58 = *(undefined ***)(param_3 + 0x2d0);
        local_50 = (undefined1 *)CONCAT44(local_50._4_4_,*(undefined4 *)(param_3 + 0x2d8));
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (param_3 + 0xf8,local_68,&local_48,uVar5,*(undefined1 *)(param_3 + 0x2dc),
                   &local_58);
        lVar6 = UAnimInstance::GetMontageInstanceForID(lVar3,local_res20);
        *(undefined1 *)(lVar6 + 0x28) = param_11;
      }
    }
  }
  return;
}



// FUNCTION 141ffd9c0 SetConstraintId body=67 status=ok
// SIG undefined SetConstraintId(void)

void UMovieScene3DConstraintSection::SetConstraintId(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = UMovieSceneSection::TryModify(param_1,1);
  if (cVar3 != '\0') {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *(undefined4 *)(param_1 + 0xf0) = DAT_146acb830;
    *(undefined8 *)(param_1 + 0xf8) = uVar1;
    *(undefined8 *)(param_1 + 0x100) = uVar2;
    *(undefined1 *)(param_1 + 0xf4) = 0;
  }
  return;
}



// FUNCTION 141ffda10 SetKeyFromUserValue body=166 status=ok
// SIG undefined SetKeyFromUserValue(void)

void MovieSceneImpl::TChannelValueHelper<FMovieSceneFloatChannel,float>::SetKeyFromUserValue
               (longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_38 [16];
  longlong *local_28;
  
  lVar4 = FUN_141f51850(param_1 + 0x18);
  if ((lVar4 != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar1 = **(undefined4 **)(param_1 + 0x38);
    std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
              (local_38,lVar4 + 0x10,lVar4 + 0x38);
    local_28 = (longlong *)(lVar4 + 0x20);
    iVar3 = FUN_141f521b0(local_38,uVar2);
    if (iVar3 != -1) {
      *(undefined4 *)((longlong)iVar3 * 0x1c + *local_28) = uVar1;
    }
    FMovieSceneChannel::SetKeyTime(lVar4,uVar2,param_2);
  }
  return;
}



// FUNCTION 141ffdac0 SetKeyTimes body=584 status=ok
// SIG undefined SetKeyTimes(void)

void TMovieSceneChannelData<FEventPayload>::SetKeyTimes
               (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  size_t sVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong local_58 [2];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  
  if (0 < (int)*(uint *)(param_2 + 1)) {
    lVar12 = 0;
    uVar13 = (ulonglong)*(uint *)(param_2 + 1);
    puVar15 = (undefined4 *)*param_2;
    do {
      iVar5 = FUN_141f521b0(param_1,*puVar15);
      if ((iVar5 != -1) &&
         (iVar6 = FMovieSceneChannelData::MoveKeyInternal
                            (param_1,iVar5,*(undefined4 *)(lVar12 + *param_3)), iVar6 != iVar5)) {
        lVar14 = (longlong)iVar5 * 0x30;
        puVar11 = (undefined8 *)(**(longlong **)(param_1 + 0x10) + lVar14);
        uVar1 = *puVar11;
        uVar2 = puVar11[1];
        FString::FString(local_58,puVar11 + 2);
        local_40 = *(int *)(puVar11 + 5);
        sVar10 = (size_t)local_40;
        pvVar9 = (void *)puVar11[4];
        local_48 = (void *)0x0;
        if (local_40 == 0) {
          local_3c = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
          ::_guard_xfg_dispatch_icall_nop(local_48,pvVar9,sVar10);
        }
        plVar3 = *(longlong **)(param_1 + 0x10);
        lVar4 = *plVar3;
        if (*(longlong *)(lVar4 + 0x20 + lVar14) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar4 + 0x10 + lVar14) != 0) {
          FMemory::Free();
        }
        iVar8 = (int)plVar3[1];
        iVar7 = (iVar8 - iVar5) + -1;
        if (iVar7 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar3 + lVar14),(void *)((longlong)(iVar5 + 1) * 0x30 + *plVar3),
                     (longlong)iVar7 * 0x30);
          iVar8 = (int)plVar3[1];
        }
        *(int *)(plVar3 + 1) = iVar8 + -1;
        plVar3 = *(longlong **)(param_1 + 0x10);
        iVar5 = (int)plVar3[1];
        *(int *)(plVar3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)plVar3 + 0xc) < iVar5 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar3,iVar5);
        }
        pvVar9 = (void *)(*plVar3 + (longlong)iVar6 * 0x30);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)pvVar9 + 0x30),pvVar9,(longlong)(iVar5 - iVar6) * 0x30);
        puVar11 = (undefined8 *)((longlong)iVar6 * 0x30 + *plVar3);
        *puVar11 = uVar1;
        puVar11[1] = uVar2;
        FString::FString(puVar11 + 2,local_58);
        pvVar9 = local_48;
        sVar10 = (size_t)local_40;
        puVar11[4] = 0;
        *(int *)(puVar11 + 5) = local_40;
        if (local_40 == 0) {
          *(undefined4 *)((longlong)puVar11 + 0x2c) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar11 + 4,local_40,0);
          ::_guard_xfg_dispatch_icall_nop((void *)puVar11[4],pvVar9,sVar10);
        }
        if (pvVar9 != (void *)0x0) {
          FMemory::Free(pvVar9);
        }
        if (local_58[0] != 0) {
          FMemory::Free();
        }
      }
      puVar15 = puVar15 + 1;
      lVar12 = lVar12 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}



// FUNCTION 141ffdd10 SetKeyTimes body=364 status=ok
// SIG undefined SetKeyTimes(void)

void TMovieSceneChannelData<FMovieSceneActorReferenceKey>::SetKeyTimes
               (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  void *_Dst;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  if (0 < (int)*(uint *)(param_2 + 1)) {
    puVar12 = (undefined4 *)*param_2;
    uVar13 = (ulonglong)*(uint *)(param_2 + 1);
    lVar14 = 0;
    do {
      iVar8 = FUN_141f521b0(param_1,*puVar12);
      if (iVar8 != -1) {
        iVar9 = FMovieSceneChannelData::MoveKeyInternal
                          (param_1,iVar8,*(undefined4 *)(lVar14 + *param_3));
        if (iVar9 != iVar8) {
          plVar3 = *(longlong **)(param_1 + 0x10);
          lVar4 = *plVar3;
          puVar1 = (undefined8 *)(lVar4 + (longlong)iVar8 * 0x18);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          iVar10 = (int)plVar3[1];
          _Dst = (void *)(lVar4 + (longlong)iVar8 * 0x18);
          uVar2 = *(undefined8 *)((longlong)_Dst + 0x10);
          iVar11 = (iVar10 - iVar8) + -1;
          if (iVar11 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      (_Dst,(void *)(lVar4 + (longlong)(iVar8 + 1) * 0x18),(longlong)iVar11 * 0x18);
            iVar10 = (int)plVar3[1];
          }
          *(int *)(plVar3 + 1) = iVar10 + -1;
          plVar3 = *(longlong **)(param_1 + 0x10);
          iVar8 = (int)plVar3[1];
          *(int *)(plVar3 + 1) = iVar8 + 1;
          if (*(int *)((longlong)plVar3 + 0xc) < iVar8 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar3,iVar8);
          }
          lVar4 = (longlong)iVar9 * 0x18;
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar3 + lVar4 + 0x18),(void *)(*plVar3 + lVar4),
                     (longlong)(iVar8 - iVar9) * 0x18);
          lVar5 = *plVar3;
          puVar1 = (undefined8 *)(lVar5 + lVar4);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          *(undefined8 *)(lVar5 + 0x10 + lVar4) = uVar2;
        }
      }
      puVar12 = puVar12 + 1;
      lVar14 = lVar14 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}



// FUNCTION 141ffde80 SetKeyTimes body=507 status=ok
// SIG undefined SetKeyTimes(void)

void TMovieSceneChannelData<FString>::SetKeyTimes
               (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *_Src;
  longlong *plVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong local_res20;
  void *local_50;
  int local_48;
  undefined4 local_44;
  
  local_res20 = (ulonglong)*(uint *)(param_2 + 1);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    puVar11 = (undefined4 *)*param_2;
    lVar12 = 0;
    do {
      iVar2 = FUN_141f521b0(param_1,*puVar11);
      if ((iVar2 != -1) &&
         (iVar3 = FMovieSceneChannelData::MoveKeyInternal
                            (param_1,iVar2,*(undefined4 *)(*param_3 + lVar12)), iVar3 != iVar2)) {
        plVar10 = *(longlong **)(param_1 + 0x10);
        _Src = (void *)0x0;
        local_50 = (void *)0x0;
        lVar13 = (longlong)iVar2 * 0x10;
        lVar6 = *plVar10;
        local_48 = *(int *)(lVar6 + 8 + lVar13);
        lVar9 = (longlong)local_48;
        pvVar7 = *(void **)(lVar6 + lVar13);
        if (local_48 == 0) {
          local_44 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_48,0);
          _Src = local_50;
          ::_guard_xfg_dispatch_icall_nop(local_50,pvVar7,lVar9 * 2);
          plVar10 = *(longlong **)(param_1 + 0x10);
          lVar6 = *plVar10;
        }
        iVar1 = local_48;
        if (*(longlong *)(lVar13 + lVar6) != 0) {
          FMemory::Free();
        }
        iVar5 = (int)plVar10[1];
        iVar4 = (iVar5 - iVar2) + -1;
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar10 + lVar13),(void *)((longlong)(iVar2 + 1) * 0x10 + *plVar10),
                     (longlong)iVar4 << 4);
          iVar5 = (int)plVar10[1];
        }
        *(int *)(plVar10 + 1) = iVar5 + -1;
        plVar10 = *(longlong **)(param_1 + 0x10);
        iVar2 = (int)plVar10[1];
        *(int *)(plVar10 + 1) = iVar2 + 1;
        if (*(int *)((longlong)plVar10 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
        }
        pvVar7 = (void *)(*plVar10 + (longlong)iVar3 * 0x10);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)pvVar7 + 0x10),pvVar7,(longlong)(iVar2 - iVar3) << 4);
        puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar10);
        *puVar8 = 0;
        *(int *)(puVar8 + 1) = iVar1;
        if (iVar1 == 0) {
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,iVar1,0);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src,(longlong)iVar1 * 2);
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
      }
      puVar11 = puVar11 + 1;
      lVar12 = lVar12 + 4;
      local_res20 = local_res20 - 1;
    } while (local_res20 != 0);
  }
  return;
}



// FUNCTION 141ffe080 SetKeyTimes body=79 status=ok
// SIG undefined SetKeyTimes(void)

void FMovieSceneActorReferenceData::SetKeyTimes
               (longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  longlong local_18;
  
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x40);
  local_18 = param_1 + 0x30;
  TMovieSceneChannelData<FMovieSceneActorReferenceKey>::SetKeyTimes(local_28,&local_38,&local_48);
  return;
}



// FUNCTION 141ffe0d0 SetKeyTimes body=79 status=ok
// SIG undefined SetKeyTimes(void)

void FMovieSceneEventSectionData::SetKeyTimes
               (longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  longlong local_18;
  
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x28);
  local_18 = param_1 + 0x18;
  TMovieSceneChannelData<FEventPayload>::SetKeyTimes(local_28,&local_38,&local_48);
  return;
}



// FUNCTION 141ffe120 SetKeyTimes body=79 status=ok
// SIG undefined SetKeyTimes(void)

void FMovieSceneStringChannel::SetKeyTimes(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  longlong local_18;
  
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x40);
  local_18 = param_1 + 0x18;
  TMovieSceneChannelData<FString>::SetKeyTimes(local_28,&local_38,&local_48);
  return;
}



// FUNCTION 141ffe170 SetPackage body=9 status=ok
// SIG undefined SetPackage(void)

void FStructOnScope::SetPackage(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x18);
  return;
}



// FUNCTION 141ffe190 SetUserValueFromTime body=70 status=ok
// SIG undefined SetUserValueFromTime(void)

void MovieSceneImpl::TChannelValueHelper<FMovieSceneFloatChannel,float>::SetUserValueFromTime
               (longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_141f51850(param_1 + 0x18);
  if (lVar1 != 0) {
    FMovieSceneFloatChannel::Evaluate(lVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 141ffe1e0 Setup body=175 status=ok
// SIG undefined Setup(void)

void FMovieSceneActorReferenceSectionTemplate::Setup(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  longlong local_28;
  undefined8 **local_20;
  undefined1 local_18 [16];
  
  lVar1 = operator_new(0x20);
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)PropertyTemplate::FSectionData::FSectionData(lVar1);
  }
  local_28 = param_2 + 0x24;
  local_20 = &local_res10;
  local_res10 = puVar2;
  FUN_14058dc00(*(undefined8 *)(param_2 + 8),local_res8,&local_28,0);
  if (local_res10 != (undefined8 *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
  uVar3 = FString::FString(local_18,param_1 + 0x28);
  FUN_141f54e40(puVar2,*(undefined8 *)(param_1 + 0x20),uVar3,*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40));
  return;
}



// FUNCTION 141ffe290 FUN_141ffe290 body=833 status=ok
// SIG undefined FUN_141ffe290(void)

void FUN_141ffe290(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  longlong *local_res18;
  uint *local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  
  local_res18 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146acba7c) && (_Init_thread_header(&DAT_146acba7c), DAT_146acba7c == -1))
  {
    FKeyHandle::FKeyHandle(&DAT_146acba78);
    _Init_thread_footer(&DAT_146acba7c);
  }
  uVar8 = DAT_146acba78;
  plVar1 = *(longlong **)(param_2 + 0x10);
  puVar7 = (undefined8 *)0x0;
  local_58 = DAT_146acba78;
  uVar6 = 0;
  local_44 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_54 = 0;
  iStack_50 = 0;
  iStack_4c = 0;
  iStack_48 = 0;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    iVar2 = GetTypeHash(&local_54);
    uVar11 = iVar2 - uVar8 ^ uVar8 >> 0xd;
    uVar10 = (-0x61c88647 - uVar11) - uVar8 ^ uVar11 << 8;
    uVar8 = (uVar8 - uVar10) - uVar11 ^ uVar10 >> 0xd;
    uVar11 = (uVar11 - uVar10) - uVar8 ^ uVar8 >> 0xc;
    uVar10 = (uVar10 - uVar11) - uVar8 ^ uVar11 << 0x10;
    uVar8 = (uVar8 - uVar10) - uVar11 ^ uVar10 >> 5;
    uVar11 = (uVar11 - uVar10) - uVar8 ^ uVar8 >> 3;
    uVar10 = (uVar10 - uVar11) - uVar8 ^ uVar11 << 10;
    plVar3 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar3 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    (((longlong)(int)((uVar8 - uVar10) - uVar11) ^ (ulonglong)(uVar10 >> 0xf)) &
                    (longlong)(int)plVar1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        puVar4 = (undefined8 *)(*plVar1 + (longlong)iVar2 * 0x28);
        if (((*(uint *)(*plVar1 + (longlong)iVar2 * 0x28) == local_58) &&
            (*(int *)((longlong)puVar4 + 0x14) == local_44)) &&
           (((*(int *)(puVar4 + 1) == iStack_50 && *(int *)((longlong)puVar4 + 0xc) == iStack_4c) &&
            *(int *)(puVar4 + 2) == iStack_48) && local_54 == *(int *)((longlong)puVar4 + 4))) {
          if (iVar2 != -1) goto LAB_141ffe440;
          break;
        }
        iVar2 = *(int *)(puVar4 + 4);
      } while (iVar2 != -1);
    }
  }
  puVar4 = puVar7;
LAB_141ffe440:
  puVar9 = puVar4 + 3;
  if (puVar4 == (undefined8 *)0x0) {
    puVar9 = puVar7;
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)operator_new(0xa8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR__scalar_deleting_destructor__144f4a090;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      *(undefined4 *)(puVar4 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
      puVar4[9] = 0;
      *(undefined4 *)(puVar4 + 10) = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      *(undefined4 *)(puVar4 + 0x11) = 0xffffffff;
      *(undefined4 *)((longlong)puVar4 + 0x8c) = 0;
      puVar4[0x13] = 0;
      *(undefined4 *)(puVar4 + 0x14) = 0;
      puVar7 = puVar4;
    }
    local_88 = &local_58;
    local_80 = &local_res10;
    local_res10 = puVar7;
    FUN_140609380(*(undefined8 *)(param_2 + 0x10),local_res8,&local_88,0);
    if (local_res10 != (undefined8 *)0x0) {
      (**(code **)*local_res10)(local_res10,1);
    }
  }
  else {
    puVar7 = (undefined8 *)*puVar9;
  }
  lVar5 = (**(code **)(*local_res18 + 8))();
  lVar5 = FMovieSceneSequenceHierarchy::FindSubData
                    (*(longlong *)(lVar5 + 8) + 0xd0,(undefined8 *)(param_2 + 0x24));
  if (lVar5 != 0) {
    uVar6 = *(undefined4 *)(lVar5 + 0x60);
  }
  local_88 = *(uint **)(param_2 + 0x24);
  local_80 = (undefined8 **)CONCAT44(local_80._4_4_,*(undefined4 *)(param_2 + 0x2c));
  local_78 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)(param_1 + 0x30));
  FLevelStreamingSharedTrackData::AssignLevelVisibilityOverrides
            (puVar7,&local_78,*(undefined1 *)(param_1 + 0x20),uVar6,&local_88);
  return;
}



// FUNCTION 141ffe610 ShowCurveForChannel body=95 status=ok
// SIG undefined ShowCurveForChannel(void)

undefined8 UMovieScene3DTransformSection::ShowCurveForChannel(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x72c) != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    lVar2 = FMovieSceneFloatChannel::StaticStruct();
    lVar3 = FMovieSceneChannelProxy::FindEntry(uVar1,*(undefined8 *)(lVar2 + 0x18));
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(lVar3 + 8);
    }
    if (((*(longlong *)(lVar2 + 0x18) == param_2) || (*(longlong *)(lVar2 + 0x20) == param_2)) ||
       (*(longlong *)(lVar2 + 0x28) == param_2)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141ffe740 SplitSection body=191 status=ok
// SIG undefined SplitSection(void)

longlong UMovieSceneAudioSection::SplitSection(longlong param_1,undefined4 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(char *)(param_1 + 0x90) == '\x02') {
    uVar5 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x94);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    if (*(char *)(param_1 + 0x90) != '\x01') {
      iVar4 = iVar4 + 1;
    }
    uVar5 = GetStartOffsetAtTrimTime(&local_28,*(undefined4 *)(param_1 + 0xe8),iVar4);
  }
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  lVar2 = FUN_141f66b60(param_1,&local_28);
  if (lVar2 != 0) {
    lVar3 = GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar3 = 0;
    if (bVar1) {
      lVar3 = lVar2;
    }
    *(undefined4 *)(lVar3 + 0xe8) = uVar5;
  }
  return lVar2;
}



// FUNCTION 141ffe800 SplitSection body=190 status=ok
// SIG undefined SplitSection(void)

longlong UMovieSceneSkeletalAnimationSection::SplitSection(longlong param_1,undefined4 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(char *)(param_1 + 0x90) == '\x02') {
    uVar5 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x94);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    if (*(char *)(param_1 + 0x90) != '\x01') {
      iVar4 = iVar4 + 1;
    }
    uVar5 = GetStartOffsetAtTrimTime(&local_28,param_1 + 0xe0,iVar4);
  }
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  lVar2 = FUN_141f66b60(param_1,&local_28);
  if (lVar2 != 0) {
    lVar3 = GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar3 = 0;
    if (bVar1) {
      lVar3 = lVar2;
    }
    *(undefined4 *)(lVar3 + 0xe8) = uVar5;
  }
  return lVar2;
}



// FUNCTION 141ffe8c0 FUN_141ffe8c0 body=439 status=ok
// SIG undefined FUN_141ffe8c0(void)

void FUN_141ffe8c0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  longlong *plVar8;
  uint *puVar9;
  longlong *plVar10;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  plVar8 = *(longlong **)(param_1 + 8);
  plVar10 = plVar8 + (longlong)*(int *)(param_1 + 0x10) * 10;
  if (plVar8 != plVar10) {
    puVar7 = (uint *)(plVar8 + 2);
    do {
      uVar1 = puVar7[6];
      local_88 = 0;
      uStack_84 = 1;
      uStack_74 = 0;
      iStack_70 = 0;
      if (uVar1 != 0) {
        puVar9 = *(uint **)(puVar7 + 4);
        if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
          puVar9 = puVar7;
        }
        uVar2 = *puVar9;
        iStack_70 = 0;
        local_88 = 0;
        while (uVar2 == 0) {
          lVar6 = (longlong)local_88;
          iStack_70 = iStack_70 + 0x20;
          iVar5 = local_88 + 1;
          bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
          local_88 = iVar5;
          if (bVar3) goto LAB_141ffe99f;
          uVar2 = puVar9[lVar6 + 1];
        }
        uStack_84 = -uVar2 & uVar2;
        iVar5 = 0x1f;
        if (uStack_84 != 0) {
          for (; uStack_84 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uStack_84 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        uStack_74 = (iStack_70 - iVar5) + 0x1f;
        if ((int)uVar1 < (int)uStack_74) {
LAB_141ffe99f:
          uStack_74 = uVar1;
        }
      }
      uStack_50 = 0xffffffff;
      uStack_4c = uStack_74;
      local_48 = CONCAT44(uStack_6c,iStack_70);
      uStack_38 = CONCAT44(uStack_84,local_88);
      iStack_60 = local_88;
      uStack_5c = uStack_84;
      local_58 = puVar7;
      local_40 = plVar8;
      puStack_30 = puVar7;
      uStack_20 = local_48;
      uStack_28 = uStack_50;
      uStack_24 = uStack_4c;
      while ((uStack_4c != uVar1 || (local_58 != puVar7))) {
        plVar4 = (longlong *)FWeakObjectPtr::Get(*plVar8 + ((longlong)(int)uStack_4c * 3 + 1) * 8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x560))(plVar4);
        }
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
      }
      plVar8 = plVar8 + 10;
      puVar7 = puVar7 + 0x14;
    } while (plVar8 != plVar10);
  }
  return;
}



// FUNCTION 141ffea80 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_141ffeaa6;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_141ffeaa6:
  lVar2 = UMovieScene3DAttachSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 141ffeac0 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_141ffeae6;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_141ffeae6:
  lVar2 = UMovieScene3DPathSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 141ffeb00 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_141ffeb26;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_141ffeb26:
  lVar2 = UMovieScene3DTransformSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 141ffeb40 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_141ffeb66;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_141ffeb66:
  lVar2 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 141ffeb80 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_141ffeba6;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_141ffeba6:
  lVar2 = UMovieSceneAudioSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 141ffebc0 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_141ffebe6;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_141ffebe6:
  lVar2 = UMovieSceneBoolSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 141ffec00 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_141ffec26;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_141ffec26:
  lVar2 = UMovieSceneByteSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 141ffec40 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_141ffec66;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_141ffec66:
  lVar2 = UMovieSceneCameraAnimSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 141ffec80 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_141ffeca6;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_141ffeca6:
  lVar2 = UMovieSceneCameraCutSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}



// FUNCTION 141ffecc0 IsContextPerItem body=55 status=ok
// SIG undefined IsContextPerItem(void)

bool UEnvQueryTest::IsContextPerItem(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UMovieSceneSection::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_141ffece6;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_141ffece6:
  lVar2 = UMovieSceneCameraShakeSection::GetPrivateStaticClass();
  return param_2 == lVar2;
}


