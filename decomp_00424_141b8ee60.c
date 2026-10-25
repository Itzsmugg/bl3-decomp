// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141b8ee60 FUN_141b8ee60 body=383 status=ok
// SIG undefined FUN_141b8ee60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b8ee60(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  wchar_t *local_38;
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*param_2 == 0) {
    lVar3 = FSceneRenderTargets::Get();
    uVar1 = *(ulonglong *)(lVar3 + 0x378);
    iVar4 = 1;
    if ((0 < DAT_1464c200c) && (iVar4 = 8, DAT_1464c200c < 8)) {
      iVar4 = DAT_1464c200c;
    }
    iVar2 = 1;
    if ((0 < DAT_1464c200c) && (iVar2 = 8, DAT_1464c200c < 8)) {
      iVar2 = DAT_1464c200c;
    }
    local_98 = 1;
    local_a0 = 1;
    local_78 = _DAT_1464c9c88;
    uStack_74 = uRam00000001464c9c8c;
    uStack_70 = uRam00000001464c9c90;
    uStack_6c = uRam00000001464c9c94;
    iVar2 = (int)((longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) /
                 (longlong)iVar2);
    local_5c = 0;
    local_58 = 1;
    local_64 = 1;
    if (iVar2 != 0) {
      local_64 = iVar2;
    }
    local_54 = 0x10000;
    iVar4 = (int)((longlong)((ulonglong)(uint)((longlong)uVar1 >> 0x3f) << 0x20 | uVar1 >> 0x20) /
                 (longlong)iVar4);
    local_68 = DAT_1464c9c98;
    local_60 = 1;
    if (iVar4 != 0) {
      local_60 = iVar4;
    }
    local_50 = 1;
    local_4c = 9;
    local_44 = 1;
    local_40 = 0;
    local_38 = L"UnknownTexture2D";
    local_30 = 0;
    local_a8 = param_3;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_1,&local_78,param_2);
    local_a0 = 0;
    local_88[0] = 0;
    local_a8 = CONCAT44(local_a8._4_4_,0x22);
    FUN_141ad74f0(param_1,*(undefined8 *)(*param_2 + 8),0,4);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_88);
  }
  return;
}



// FUNCTION 141b8efe0 FUN_141b8efe0 body=1235 status=ok
// SIG undefined FUN_141b8efe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b8efe0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint uVar20;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined **local_1a0;
  float local_198;
  float local_190;
  float local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_160;
  char local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_140;
  int local_138;
  int local_134;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  bVar8 = false;
  local_120 = param_5;
  local_150 = local_150 & 0xffffffff00000000;
  local_148 = param_2;
  local_128 = param_1;
  lVar12 = FSceneRenderTargets::Get();
  local_158 = '\0';
  local_118 = lVar12;
  cVar9 = FUN_1427476e0(*(undefined8 *)(param_2 + 0x10));
  if ((cVar9 == '\0') || (DAT_146a275c0 == 0)) {
    local_1a8 = (undefined8 *)CONCAT71(local_1a8._1_7_,1);
    FUN_141cdeb70(lVar12,param_1,2);
  }
  else {
    local_1a8 = (undefined8 *)((ulonglong)local_1a8._1_7_ << 8);
    FUN_141cdec30(lVar12,param_1,param_2,param_3);
    local_158 = '\x01';
  }
  local_c8 = 0;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c0 = 0;
  local_bc = 0x26;
  local_b4 = 0;
  local_ac = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  FUN_14049afe0(param_1);
  uVar1 = *(undefined4 *)(param_2 + 0x1aac);
  uVar2 = *(undefined4 *)(param_2 + 0x1aa8);
  puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_150 = CONCAT44(local_150._4_4_,*(undefined4 *)(param_2 + 0x1aa4));
  local_130 = CONCAT44(local_130._4_4_,*(undefined4 *)(param_2 + 0x1aa0));
  puVar13 = puVar17 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar17 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar13;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar17;
  *(undefined8 **)(param_1 + 8) = puVar17 + 1;
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_143f59420;
  *(undefined4 *)(puVar17 + 2) = (undefined4)local_130;
  *(int *)((longlong)puVar17 + 0x14) = (int)local_150;
  *(undefined4 *)(puVar17 + 3) = 0;
  *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar2;
  *(undefined4 *)(puVar17 + 4) = uVar1;
  *(undefined4 *)((longlong)puVar17 + 0x24) = 0x3f800000;
  local_d8 = FUN_141b9d480();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar3 = *(longlong *)(param_2 + 0x3090);
  plVar14 = (longlong *)0x0;
  local_140 = &DAT_146b09c50;
  local_138 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,&local_150,&local_140);
  plVar18 = plVar14;
  if ((int)local_150 != -1) {
    plVar18 = (longlong *)((longlong)(int)local_150 * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  local_138 = 0;
  plVar19 = plVar18 + 2;
  if (plVar18 == (longlong *)0x0) {
    plVar19 = plVar14;
  }
  local_140 = &DAT_146a28d50;
  lVar4 = *plVar19;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar3 + 0x38,&local_150,&local_140);
  plVar18 = plVar14;
  if ((int)local_150 != -1) {
    plVar18 = (longlong *)((longlong)(int)local_150 * 0x20 + *(longlong *)(lVar3 + 0x38));
  }
  plVar19 = plVar18 + 2;
  if (plVar18 == (longlong *)0x0) {
    plVar19 = plVar14;
  }
  lVar3 = *plVar19;
  local_108 = DAT_1464c2720;
  if (lVar4 == 0) {
    local_150 = 0;
    bVar8 = true;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    plVar14 = *(longlong **)(lVar5 + 0x38);
  }
  uVar15 = 0;
  plStack_100 = plVar14;
  if (bVar8) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  }
  bVar8 = false;
  if (lVar3 == 0) {
    bVar8 = true;
    local_150 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    uVar15 = *(undefined8 *)(lVar5 + 0x40);
  }
  local_e8 = uVar15;
  if (bVar8) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_150);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_108,2,1);
  if ((int)DAT_1464c200c < 1) {
    uVar20 = 1;
  }
  else {
    uVar20 = 8;
    if ((int)DAT_1464c200c < 8) {
      uVar20 = DAT_1464c200c;
    }
  }
  uVar6 = *(ulonglong *)(lVar12 + 0x378);
  uVar7 = *(ulonglong *)(param_2 + 0x1aa0);
  local_150._4_4_ = (int)(uVar6 >> 0x20);
  local_150 = CONCAT44(local_150._4_4_ / (int)uVar20,
                       (int)((longlong)
                             ((ulonglong)(uint)((int)uVar6 >> 0x1f) << 0x20 | uVar6 & 0xffffffff) /
                            (longlong)(int)uVar20));
  uVar15 = local_150;
  iVar10 = (int)((longlong)((ulonglong)(uint)((int)uVar7 >> 0x1f) << 0x20 | uVar7 & 0xffffffff) /
                (longlong)(int)uVar20);
  local_150._4_4_ = (int)(uVar7 >> 0x20);
  iVar16 = local_150._4_4_;
  local_130 = uVar15;
  iVar11 = local_150._4_4_ / (int)uVar20;
  local_150 = CONCAT44(iVar11,iVar10);
  uVar6 = (ulonglong)(uint)(*(int *)(param_2 + 0x1aa8) - (int)uVar7) / (ulonglong)uVar20;
  uVar7 = (ulonglong)(uint)(*(int *)(local_148 + 0x1aac) - iVar16) / (ulonglong)uVar20;
  local_138 = (int)uVar6 + iVar10;
  local_140 = (undefined *)CONCAT44(iVar11,iVar10);
  local_134 = iVar11 + (int)uVar7;
  local_1a0 = &local_140;
  local_1a8 = &local_130;
  FUN_141bbe530(lVar3,local_128,local_148,local_120);
  lVar3 = local_128;
  lVar12 = local_148;
  local_160 = 1;
  local_168 = 1;
  iVar16 = *(int *)(local_148 + 0x1aac) - *(int *)(local_148 + 0x1aa4);
  local_178 = uVar15;
  local_188 = (float)uVar7;
  local_148 = CONCAT44(iVar16,*(int *)(local_148 + 0x1aa8) - *(int *)(local_148 + 0x1aa0));
  local_180 = local_148;
  local_190 = (float)uVar6;
  local_198 = (float)iVar11;
  local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,(float)iVar10);
  local_1a8 = (undefined8 *)CONCAT44(local_1a8._4_4_,(float)iVar16);
  local_170 = lVar4;
  DrawRectangle(local_128);
  if (local_158 != '\0') {
    FUN_141ce3ac0(local_118,lVar3,lVar12);
  }
  return;
}



// FUNCTION 141b8f4c0 FUN_141b8f4c0 body=3235 status=ok
// SIG undefined FUN_141b8f4c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b8f4c0(longlong param_1,ulonglong param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  longlong *plVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_2e8 [32];
  ulonglong local_2c8;
  longlong *local_2c0;
  float local_2b8;
  float local_2b0;
  float local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined4 local_288;
  undefined4 local_280;
  undefined8 local_278;
  uint local_270;
  uint local_26c;
  longlong local_268;
  uint local_260;
  undefined8 local_258;
  int local_250;
  undefined4 local_24c;
  int local_248;
  int local_244;
  int local_240;
  ulonglong local_238;
  longlong *local_230;
  longlong *local_228;
  ulonglong *local_220;
  longlong local_218;
  undefined1 local_210 [8];
  longlong local_208;
  undefined1 local_200 [8];
  longlong local_1f8;
  longlong *local_1f0;
  float local_1e8;
  undefined4 local_1e4;
  float local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  undefined1 local_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  uint local_d8;
  int local_d4 [16];
  undefined1 auStack_94 [4];
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_84;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  lVar4 = *(longlong *)(param_2 + 0x3090);
  local_1f0 = param_5;
  local_230 = param_6;
  local_270 = 0;
  local_260 = 0;
  local_198 = &DAT_146b09c50;
  local_190 = 0;
  local_268 = param_1;
  local_238 = param_2;
  local_1a8 = param_4;
  local_1a0 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar4 + 0x38,&local_250,&local_198);
  plVar18 = (longlong *)0x0;
  if (local_250 != -1) {
    plVar18 = (longlong *)((longlong)local_250 * 0x20 + *(longlong *)(lVar4 + 0x38));
  }
  plVar24 = plVar18 + 2;
  if (plVar18 == (longlong *)0x0) {
    plVar24 = (longlong *)0x0;
  }
  lVar4 = *plVar24;
  lVar12 = FSceneRenderTargets::Get(param_1);
  uVar23 = *(ulonglong *)(lVar12 + 0x378);
  if ((int)DAT_1464c200c < 1) {
    uVar22 = 1;
  }
  else {
    uVar22 = 8;
    if ((int)DAT_1464c200c < 8) {
      uVar22 = (ulonglong)DAT_1464c200c;
    }
  }
  uVar5 = *(ulonglong *)(param_2 + 0x1aa0);
  local_240 = (int)uVar22;
  local_26c = 0;
  local_24c = (undefined4)
              ((longlong)((ulonglong)(uint)((int)uVar23 >> 0x1f) << 0x20 | uVar23 & 0xffffffff) /
              (longlong)local_240);
  local_278._4_4_ = (int)(uVar23 >> 0x20);
  local_248 = local_278._4_4_ / local_240;
  local_278 = CONCAT44(local_248,local_24c);
  uVar8 = local_278;
  iVar10 = (int)((longlong)((ulonglong)(uint)((int)uVar5 >> 0x1f) << 0x20 | uVar5 & 0xffffffff) /
                (longlong)local_240);
  local_278._4_4_ = (int)(uVar5 >> 0x20);
  iVar2 = local_278._4_4_;
  local_240 = local_278._4_4_ / local_240;
  local_278 = CONCAT44(local_240,iVar10);
  iVar3 = *(int *)(param_2 + 0x1aa8);
  local_258 = local_278;
  local_260 = 0;
  if (-1 < (int)DAT_1464c2010) {
    local_260 = DAT_1464c2010;
  }
  if (local_260 != 0) {
    puVar17 = (ulonglong *)(param_1 + 0x30);
    fVar26 = (float)((uint)(*(int *)(param_2 + 0x1aac) - iVar2) / uVar22);
    puVar19 = puVar17;
    puVar20 = puVar17;
    local_220 = puVar17;
    do {
      FUN_141a19150(param_1,*(undefined8 *)(*local_230 + 8),0,1);
      puVar15 = (undefined8 *)(*puVar17 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar15 + 5;
      if ((undefined8 *)puVar17[1] < puVar14) {
        FMemStackBase::AllocateNewChunk(puVar17,0x30);
        puVar15 = (undefined8 *)(*puVar17 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar15 + 5;
      }
      *puVar17 = (ulonglong)puVar14;
      uVar16 = 0;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar15;
      *(undefined8 **)(param_1 + 8) = puVar15 + 1;
      puVar15[1] = 0;
      *puVar15 = &PTR_LAB_143f59420;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = local_24c;
      *(int *)(puVar15 + 4) = local_248;
      puVar15[2] = 0;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined4 *)((longlong)puVar15 + 0x24) = 0x3f800000;
      local_d8 = *(uint *)(param_1 + 0x98);
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = (ulonglong *)0x0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 0x26;
      local_d4[0] = 0;
      local_d4[1] = 0;
      local_d4[2] = 0;
      local_d4[3] = 0;
      local_d4[4] = 0;
      local_d4[5] = 0;
      local_d4[6] = 0;
      local_d4[7] = 0;
      local_d4[8] = 0;
      local_d4[9] = 0;
      local_d4[10] = 0;
      local_d4[0xb] = 0;
      local_d4[0xc] = 0;
      local_d4[0xd] = 0;
      local_d4[0xe] = 0;
      stack0xffffffffffffff68 = 0;
      local_90 = 0;
      local_88 = 0;
      local_84 = 0;
      local_7c = 0;
      local_74 = 0;
      uVar23 = uVar16;
      if (local_d8 != 0) {
        do {
          lVar12 = *(longlong *)(param_1 + 0xa0 + uVar23 * 0x18);
          if (lVar12 == 0) {
            local_d4[uVar23] = 0;
          }
          else {
            local_d4[uVar23] = *(int *)(lVar12 + 0x3c);
            local_d4[uVar23 + 8] = *(int *)(lVar12 + 0x40);
          }
          auStack_94[uVar23] = *(undefined1 *)(param_1 + 0xb0 + uVar23 * 0x18);
          *(undefined1 *)((longlong)&local_90 + uVar23 + 4) =
               *(undefined1 *)(param_1 + 0xb1 + uVar23 * 0x18);
          if (local_d4[uVar23] != 0) {
            local_74 = CONCAT22(local_74._2_2_,*(undefined2 *)(lVar12 + 0x38));
          }
          uVar21 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar21;
        } while (uVar21 < local_d8);
      }
      lVar12 = *(longlong *)(param_1 + 0x160);
      if (lVar12 == 0) {
        local_84 = local_84 & 0xffffffff00000000;
      }
      else {
        uVar16 = (ulonglong)*(uint *)(lVar12 + 0x3c);
        local_84 = *(ulonglong *)(lVar12 + 0x3c);
      }
      local_7c = *(undefined8 *)(param_1 + 0x168);
      if ((int)uVar16 != 0) {
        local_74 = CONCAT22(local_74._2_2_,*(undefined2 *)(lVar12 + 0x38));
      }
      if (DAT_146852b40 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar9 = IsInRenderingThread();
          if (cVar9 == '\0') {
            FScopedEvent::FScopedEvent(local_210);
            plVar18 = (longlong *)FUN_14049e3d0(local_178,0,0xff);
            lVar12 = *plVar18;
            *(undefined1 **)(lVar12 + 0x10) = &LAB_1404a0f60;
            *(undefined1 **)(lVar12 + 0x18) = local_210;
            lVar12 = *plVar18;
            lVar7 = plVar18[2];
            lVar13 = plVar18[1];
            lVar6 = *(longlong *)(lVar12 + 0x28);
            piVar1 = (int *)(lVar6 + 0x48);
            if (lVar6 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_218 = lVar6;
            FUN_1404a4fe0(lVar12,lVar13,(int)lVar7,1);
            if (lVar6 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_218);
              }
            }
            FScopedEvent::~FScopedEvent(local_210);
          }
          else {
            lVar12 = operator_new(0x38);
            if (lVar12 == 0) {
              DAT_146852b40 = 0;
            }
            else {
              DAT_146852b40 =
                   TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar12);
            }
          }
        }
        else {
          lVar12 = operator_new(0x38);
          if (lVar12 == 0) {
            LOCK();
            if (DAT_146852b40 == 0) {
              DAT_146852b40 = 0;
            }
            UNLOCK();
          }
          else {
            lVar12 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar12);
            LOCK();
            if (DAT_146852b40 != 0) {
              lVar12 = DAT_146852b40;
            }
            DAT_146852b40 = lVar12;
            UNLOCK();
          }
        }
      }
      local_f8 = *(undefined8 *)(DAT_146852b40 + 0x30);
      if (DAT_146864320 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar9 = IsInRenderingThread();
          if (cVar9 == '\0') {
            FScopedEvent::FScopedEvent(local_200);
            plVar18 = (longlong *)FUN_14049e3d0(local_160,0,0xff);
            lVar12 = *plVar18;
            *(undefined1 **)(lVar12 + 0x10) = &LAB_140985690;
            *(undefined1 **)(lVar12 + 0x18) = local_200;
            lVar12 = *plVar18;
            lVar7 = plVar18[2];
            lVar13 = plVar18[1];
            lVar6 = *(longlong *)(lVar12 + 0x28);
            piVar1 = (int *)(lVar6 + 0x48);
            if (lVar6 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_208 = lVar6;
            FUN_1404a4fe0(lVar12,lVar13,(int)lVar7,1);
            if (lVar6 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_208);
              }
            }
            FScopedEvent::~FScopedEvent(local_200);
          }
          else {
            lVar12 = operator_new(0x38);
            if (lVar12 == 0) {
              DAT_146864320 = 0;
            }
            else {
              DAT_146864320 =
                   TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar12);
            }
          }
        }
        else {
          lVar12 = operator_new(0x38);
          if (lVar12 == 0) {
            LOCK();
            if (DAT_146864320 == 0) {
              DAT_146864320 = 0;
            }
            UNLOCK();
          }
          else {
            lVar12 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar12);
            LOCK();
            if (DAT_146864320 != 0) {
              lVar12 = DAT_146864320;
            }
            DAT_146864320 = lVar12;
            UNLOCK();
          }
        }
      }
      uStack_f0 = *(undefined8 *)(DAT_146864320 + 0x30);
      if (DAT_146864318 == 0) {
        if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
          cVar9 = IsInRenderingThread();
          if (cVar9 == '\0') {
            FScopedEvent::FScopedEvent(&local_258);
            plVar18 = (longlong *)FUN_14049e3d0(local_148,0,0xff);
            lVar12 = *plVar18;
            *(undefined1 **)(lVar12 + 0x10) = &LAB_140985680;
            *(undefined8 **)(lVar12 + 0x18) = &local_258;
            lVar12 = *plVar18;
            lVar7 = plVar18[2];
            lVar13 = plVar18[1];
            lVar6 = *(longlong *)(lVar12 + 0x28);
            piVar1 = (int *)(lVar6 + 0x48);
            if (lVar6 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_1f8 = lVar6;
            FUN_1404a4fe0(lVar12,lVar13,(int)lVar7,1);
            if (lVar6 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(local_1f8);
              }
            }
            FScopedEvent::~FScopedEvent(&local_258);
          }
          else {
            lVar12 = operator_new(0x38);
            if (lVar12 == 0) {
              DAT_146864318 = 0;
            }
            else {
              DAT_146864318 =
                   TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar12);
            }
          }
        }
        else {
          lVar12 = operator_new(0x38);
          if (lVar12 == 0) {
            LOCK();
            if (DAT_146864318 == 0) {
              DAT_146864318 = 0;
            }
            UNLOCK();
          }
          else {
            lVar12 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar12);
            LOCK();
            if (DAT_146864318 != 0) {
              lVar12 = DAT_146864318;
            }
            DAT_146864318 = lVar12;
            UNLOCK();
          }
        }
      }
      local_180 = 0;
      local_e8 = *(undefined8 *)(DAT_146864318 + 0x30);
      lVar12 = *(longlong *)(local_238 + 0x3090);
      local_188 = &DAT_146a28ab0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar12 + 0x38,&local_244,&local_188);
      if (local_244 == -1) {
        lVar12 = 0;
      }
      else {
        lVar12 = (longlong)local_244 * 0x20 + *(longlong *)(lVar12 + 0x38);
      }
      plVar18 = (longlong *)(lVar12 + 0x10);
      if (lVar12 == 0) {
        plVar18 = (longlong *)0x0;
      }
      lVar12 = *plVar18;
      local_128 = DAT_1464c2720;
      if (lVar4 == 0) {
        puVar20 = (ulonglong *)0x0;
        local_270 = local_270 | 1;
        uStack_120 = 0;
      }
      else {
        lVar13 = *(longlong *)(lVar4 + 0x48);
        if (*(char *)(lVar13 + 0x28) == '\0') {
          FUN_1419f3850(lVar13);
        }
        uStack_120 = *(undefined8 *)(lVar13 + 0x38);
      }
      uVar21 = local_270;
      if (((local_270 & 1) != 0) &&
         (uVar21 = local_270 & 0xfffffffe, local_270 = uVar21, puVar20 != (ulonglong *)0x0)) {
        LOCK();
        puVar17 = puVar20 + 1;
        uVar23 = *puVar17;
        *(int *)puVar17 = (int)*puVar17 + -1;
        UNLOCK();
        if ((int)uVar23 == 1) {
          if (((char)puVar20[2] == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(), cVar9 == '\0')))) {
            LOCK();
            bVar25 = *(int *)((longlong)puVar20 + 0xc) == 0;
            if (bVar25) {
              *(int *)((longlong)puVar20 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar25) {
              uVar11 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar11 == 0) {
                lVar13 = 0;
              }
              else {
                lVar13 = (&DAT_1468a81f8)[uVar11 >> 0xe] + (ulonglong)(uVar11 & 0x3fff) * 0x18;
              }
              *(ulonglong **)(lVar13 + 8) = puVar20;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      if (lVar12 == 0) {
        local_270 = uVar21 | 2;
        local_108 = (ulonglong *)0x0;
        puVar19 = local_108;
      }
      else {
        lVar13 = *(longlong *)(lVar12 + 0x48);
        if (*(char *)(lVar13 + 0x28) == '\0') {
          FUN_1419f3850(lVar13);
        }
        local_108 = *(ulonglong **)(lVar13 + 0x40);
      }
      if (((local_270 & 2) != 0) &&
         (local_270 = local_270 & 0xfffffffd, puVar19 != (ulonglong *)0x0)) {
        LOCK();
        puVar17 = puVar19 + 1;
        uVar23 = *puVar17;
        *(int *)puVar17 = (int)*puVar17 + -1;
        UNLOCK();
        if ((int)uVar23 == 1) {
          if (((char)puVar19[2] == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(), cVar9 == '\0')))) {
            LOCK();
            bVar25 = *(int *)((longlong)puVar19 + 0xc) == 0;
            if (bVar25) {
              *(int *)((longlong)puVar19 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar25) {
              uVar21 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar21 == 0) {
                lVar13 = 0;
              }
              else {
                lVar13 = (&DAT_1468a81f8)[uVar21 >> 0xe] + (ulonglong)(uVar21 & 0x3fff) * 0x18;
              }
              *(ulonglong **)(lVar13 + 8) = puVar19;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      local_dc = 0;
      FUN_141ed6ac0(local_268,&local_128,2,1);
      local_228 = local_1f0;
      if (local_26c == 0) {
        local_228 = local_1a8;
      }
      lVar13 = *(longlong *)(lVar12 + 0x48);
      local_278 = *(undefined8 *)(local_238 + 0x20);
      if (*(char *)(lVar13 + 0x28) == '\0') {
        FUN_1419f3850(lVar13);
      }
      FUN_141aa9590(lVar12,local_268,*(undefined8 *)(lVar13 + 0x40),local_278);
      lVar13 = *(longlong *)(lVar12 + 0x48);
      if (*(char *)(lVar13 + 0x28) == '\0') {
        FUN_1419f3850(lVar13);
      }
      local_2c0 = local_228;
      local_2c8 = local_238;
      FUN_141b86de0(lVar12 + 0xc6,local_268,*(undefined8 *)(lVar13 + 0x40),local_1a0);
      lVar13 = *(longlong *)(lVar12 + 0x48);
      local_1e8 = (float)DAT_1464c2018;
      local_1dc = 0x3f800000;
      local_1e4 = DAT_1464c2014;
      local_1e0 = (float)(int)local_26c;
      if (*(char *)(lVar13 + 0x28) == '\0') {
        FUN_1419f3850(lVar13);
      }
      lVar6 = local_268;
      local_2c8 = local_2c8 & 0xffffffff00000000;
      SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                (local_268,*(undefined8 *)(lVar13 + 0x40),lVar12 + 0xc0,&local_1e8);
      local_280 = 1;
      local_288 = 1;
      local_298 = uVar8;
      local_2a0 = uVar8;
      local_2b8 = (float)local_240;
      local_2c0 = (longlong *)CONCAT44(local_2c0._4_4_,(float)iVar10);
      local_2c8 = CONCAT44(local_2c8._4_4_,fVar26);
      local_2b0 = (float)((uint)(iVar3 - (int)uVar5) / uVar22);
      local_2a8 = fVar26;
      local_290 = lVar4;
      DrawRectangle(lVar6);
      puVar17 = (ulonglong *)(lVar6 + 0x30);
      local_1d8 = 0xffffffff00000000;
      uStack_1d0 = 0xffffffffffffffff;
      puVar15 = (undefined8 *)(*puVar17 + 7 & 0xfffffffffffffff8);
      local_1c8 = 0xffffffffffffffff;
      uStack_1c0 = 0xffffffffffffffff;
      local_1b8 = 0xffffffff;
      uStack_1b0 = 0;
      local_228 = *(longlong **)(*local_230 + 0x10);
      plVar18 = *(longlong **)(*local_230 + 8);
      puVar14 = puVar15 + 10;
      if (*(undefined8 **)(lVar6 + 0x38) < puVar14) {
        FMemStackBase::AllocateNewChunk(puVar17,0x58);
        puVar15 = (undefined8 *)(*local_220 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar15 + 10;
        puVar17 = local_220;
      }
      *puVar17 = (ulonglong)puVar14;
      *(int *)(local_268 + 0x14) = *(int *)(local_268 + 0x14) + 1;
      **(undefined8 **)(local_268 + 8) = puVar15;
      *(undefined8 **)(local_268 + 8) = puVar15 + 1;
      puVar15[1] = 0;
      *puVar15 = &PTR_LAB_143f489f0;
      *(undefined4 *)(puVar15 + 2) = (undefined4)local_1d8;
      *(undefined4 *)((longlong)puVar15 + 0x14) = local_1d8._4_4_;
      *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_1d0;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_1d0._4_4_;
      *(undefined4 *)(puVar15 + 4) = (undefined4)local_1c8;
      *(undefined4 *)((longlong)puVar15 + 0x24) = local_1c8._4_4_;
      *(undefined4 *)(puVar15 + 5) = (undefined4)uStack_1c0;
      *(undefined4 *)((longlong)puVar15 + 0x2c) = uStack_1c0._4_4_;
      *(undefined4 *)(puVar15 + 6) = (undefined4)local_1b8;
      *(undefined4 *)((longlong)puVar15 + 0x34) = local_1b8._4_4_;
      *(undefined4 *)(puVar15 + 7) = (undefined4)uStack_1b0;
      *(undefined4 *)((longlong)puVar15 + 0x3c) = uStack_1b0._4_4_;
      puVar15[9] = local_228;
      puVar15[8] = plVar18;
      lVar12 = (**(code **)(*plVar18 + 8))(plVar18);
      if ((lVar12 == 0) && (lVar12 = (**(code **)(*(longlong *)puVar15[8] + 0x18))(), lVar12 == 0))
      {
        (**(code **)(*(longlong *)puVar15[8] + 0x20))();
      }
      lVar12 = (**(code **)(*(longlong *)puVar15[9] + 8))();
      if ((lVar12 == 0) && (lVar12 = (**(code **)(*(longlong *)puVar15[9] + 0x18))(), lVar12 == 0))
      {
        (**(code **)(*(longlong *)puVar15[9] + 0x20))();
      }
      if (local_1f0 != local_230) {
        local_68 = *local_1f0;
        *local_1f0 = *local_230;
        *local_230 = local_68;
      }
      local_26c = local_26c + 1;
      puVar17 = (ulonglong *)(local_268 + 0x30);
      param_1 = local_268;
    } while (local_26c < local_260);
  }
  return;
}



// FUNCTION 141b90170 FUN_141b90170 body=1174 status=ok
// SIG undefined FUN_141b90170(void)

void FUN_141b90170(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_res10 [8];
  undefined8 local_148;
  undefined1 *puStack_140;
  longlong *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  longlong local_120;
  char local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined1 local_102;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_98 [48];
  undefined1 local_68 [64];
  
  if (((*(int *)(param_2 + 0x1a10) == 2) && (param_4 != (longlong *)0x0)) && (*param_4 != 0)) {
    puStack_140 = local_res10;
    local_res10[0] = 0;
    local_148 = (longlong *)&DAT_14060d670;
    lVar5 = FUN_1415d8310(&local_148,&DAT_146216a38);
    local_130 = (undefined8 *)(lVar5 + 0x18);
    local_128 = *local_130;
    local_120 = *(longlong *)(lVar5 + 0x28);
    local_118 = '\0';
    local_110 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 ***)(lVar5 + 0x30) = &local_130;
    *(int *)(lVar5 + 0x38) = *(int *)(lVar5 + 0x38) + 1;
    FUN_141cd7760(local_98,param_1,param_2);
    FUN_141c40530(local_d8,param_1,local_68,param_2);
    puStack_140 = local_res10;
    local_148 = (longlong *)&DAT_14060d670;
    local_res10[0] = 0;
    lVar5 = FUN_1415d8310(&local_148,&DAT_146216a38);
    lVar5 = operator_new(0xb0,lVar5 + 0x18,1);
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FRCPassPostProcessInput::FRCPassPostProcessInput(lVar5,param_5);
    }
    plVar7 = local_d0;
    iVar1 = (int)local_d0[1];
    *(int *)(local_d0 + 1) = iVar1 + 1;
    if (*(int *)((longlong)local_d0 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_d0,iVar1);
    }
    *(undefined8 *)(*plVar7 + (longlong)iVar1 * 8) = uVar6;
    plVar7 = (longlong *)0x0;
    local_f0 = *(undefined4 *)(param_2 + 0x1aac);
    local_f4 = *(undefined4 *)(param_2 + 0x1aa8);
    local_fc = *(undefined4 *)(param_2 + 0x1aa0);
    local_f8 = *(undefined4 *)(param_2 + 0x1aa4);
    puStack_140 = local_res10;
    local_148 = (longlong *)&DAT_14060d670;
    local_104 = 0;
    local_102 = 0;
    local_100 = 0;
    local_108 = 3;
    local_dc = 2;
    local_res10[0] = 0;
    local_ec = local_fc;
    local_e8 = local_f8;
    local_e4 = local_f4;
    local_e0 = local_f0;
    lVar5 = FUN_1415d8310(&local_148,&DAT_146216a38);
    lVar5 = operator_new(0x210,lVar5 + 0x18,1,0);
    if (lVar5 != 0) {
      plVar7 = (longlong *)FUN_141c76350(lVar5,local_d8,&local_108,param_4,param_4);
    }
    iVar1 = (int)local_d0[1];
    *(int *)(local_d0 + 1) = iVar1 + 1;
    if (*(int *)((longlong)local_d0 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_d0,iVar1);
    }
    puStack_140 = (undefined1 *)((ulonglong)puStack_140 & 0xffffffff00000000);
    *(longlong **)(*local_d0 + (longlong)iVar1 * 8) = plVar7;
    local_148 = (longlong *)uVar6;
    (**(code **)(*plVar7 + 0x18))(plVar7,0,&local_148);
    local_138 = (longlong *)0x0;
    FUN_141b8ee60(param_1,&local_138,param_3);
    uStack_a4 = (undefined4)((ulonglong)puStack_140 >> 0x20);
    puStack_140 = (undefined1 *)((ulonglong)puStack_140 & 0xffffffff00000000);
    local_148._0_4_ = SUB84(plVar7,0);
    local_148._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
    local_b0 = (undefined4)local_148;
    uStack_ac = local_148._4_4_;
    uStack_a8 = 0;
    local_148 = plVar7;
    puVar8 = (undefined4 *)(**(code **)(*local_138 + 0x10))();
    puVar9 = (undefined4 *)FRenderingCompositeOutputRef::GetOutput(&local_b0);
    uVar2 = puVar8[1];
    uVar3 = puVar8[2];
    uVar4 = puVar8[3];
    *puVar9 = *puVar8;
    puVar9[1] = uVar2;
    puVar9[2] = uVar3;
    puVar9[3] = uVar4;
    puVar9[4] = puVar8[4];
    puVar9[5] = puVar8[5];
    puVar9[6] = puVar8[6];
    puVar9[7] = puVar8[7];
    puVar9[8] = puVar8[8];
    *(undefined1 *)(puVar9 + 9) = *(undefined1 *)(puVar8 + 9);
    *(undefined1 *)((longlong)puVar9 + 0x25) = *(undefined1 *)((longlong)puVar8 + 0x25);
    *(undefined2 *)((longlong)puVar9 + 0x26) = *(undefined2 *)((longlong)puVar8 + 0x26);
    *(undefined2 *)(puVar9 + 10) = *(undefined2 *)(puVar8 + 10);
    puVar9[0xb] = puVar8[0xb];
    puVar9[0xc] = puVar8[0xc];
    puVar9[0xd] = puVar8[0xd];
    *(undefined1 *)(puVar9 + 0xe) = *(undefined1 *)(puVar8 + 0xe);
    *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar8 + 0x10);
    *(undefined1 *)(puVar9 + 0x12) = *(undefined1 *)(puVar8 + 0x12);
    *(undefined1 *)((longlong)puVar9 + 0x49) = *(undefined1 *)((longlong)puVar8 + 0x49);
    lVar5 = FRenderingCompositeOutputRef::GetOutput(&local_b0);
    plVar7 = *(longlong **)(lVar5 + 0x50);
    *(longlong **)(lVar5 + 0x50) = local_138;
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 0x28))();
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7);
    }
    uVar6 = FHardwareCursor::GetHandle(&local_b0);
    local_148 = (undefined8 *)0x0;
    puStack_140 = (undefined1 *)0x1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_148,0);
    *local_148 = uVar6;
    FUN_141cf2100(local_98,&local_148,L"LightShaftTemporalAA");
    if (local_148 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    plVar7 = (longlong *)*param_6;
    *param_6 = (longlong)local_138;
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 0x28))();
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7);
    }
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 0x30))();
    }
    FRenderingCompositePassContext::~FRenderingCompositePassContext(local_98);
    if (local_118 == '\0') {
      local_118 = 1;
      *(int *)(local_130 + 4) = *(int *)(local_130 + 4) + -1;
      if (local_120 != local_130[2]) {
        FMemStackBase::FreeChunks();
      }
      *local_130 = local_128;
      local_130[3] = local_110;
    }
  }
  else {
    plVar7 = (longlong *)*param_6;
    param_5 = (longlong *)*param_5;
    *param_6 = (longlong)param_5;
    if (param_5 != (longlong *)0x0) {
      (**(code **)(*param_5 + 0x28))();
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7);
    }
  }
  return;
}



// FUNCTION 141b90610 FUN_141b90610 body=1288 status=ok
// SIG undefined FUN_141b90610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b90610(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4,char param_5)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [16];
  longlong *local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  undefined1 local_190 [8];
  longlong *local_188;
  longlong *local_168;
  undefined8 uStack_160;
  undefined1 local_158 [48];
  undefined1 local_128 [64];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined1 local_b0;
  wchar_t *local_a8;
  undefined2 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  FUN_141cd7760(local_158);
  FUN_141c40530(local_190,param_2,local_128,param_3);
  plVar8 = (longlong *)0x0;
  if ((param_4 != '\0') || (param_5 == '\0')) {
    uStack_1a0 = local_1b8;
    local_1b8[0] = 0;
    local_1a8 = (longlong *)&DAT_14060d670;
    lVar4 = FUN_1415d8310(&local_1a8,&DAT_146216a38);
    lVar4 = operator_new(0xd8,lVar4 + 0x18,1,0);
    plVar5 = plVar8;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_141cd7600(lVar4,param_3,param_4,0);
    }
    plVar3 = local_188;
    iVar1 = (int)local_188[1];
    *(int *)(local_188 + 1) = iVar1 + 1;
    if (*(int *)((longlong)local_188 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_188,iVar1);
    }
    *(longlong **)(*plVar3 + (longlong)iVar1 * 8) = plVar5;
    (**(code **)(*plVar5 + 0x18))(plVar5,0,&local_1a8);
    uStack_1a0._0_4_ = (undefined4)uStack_160;
    uStack_1a0._4_4_ = uStack_160._4_4_;
    (**(code **)(*plVar5 + 0x18))(plVar5,1,&local_1a8);
    uVar2 = uStack_1a0._4_4_;
    uStack_1a0 = (undefined1 *)((ulonglong)uStack_1a0._4_4_ << 0x20);
    uStack_160 = (ulonglong)uVar2 << 0x20;
    local_1a8 = plVar5;
    local_168 = plVar5;
  }
  if ((*(uint *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 0x3000000) == 0x3000000) {
    (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    plVar5 = (longlong *)operator_new(0xa8);
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
      plVar5[3] = 0;
      _guard_xfg_dispatch_icall_nop((void *)((longlong)plVar5 + 0x24),0,0x5c);
      *(undefined4 *)(plVar5 + 1) = 0;
      plVar5[2] = 0;
      *(undefined4 *)(plVar5 + 3) = 0;
      plVar5[4] = 1;
      plVar5[5] = 0;
      plVar5[6] = 0;
      plVar5[7] = 0;
      *(undefined1 *)(plVar5 + 0xb) = 0;
      plVar5[8] = 1;
      *(undefined2 *)(plVar5 + 9) = 1;
      *(undefined8 *)((longlong)plVar5 + 0x4c) = 0;
      *(undefined4 *)((longlong)plVar5 + 0x54) = 0;
      plVar5[0xc] = (longlong)L"UnknownTexture";
      *(undefined2 *)(plVar5 + 0xd) = 1;
      plVar5[0xe] = 0;
      *(undefined4 *)(plVar5 + 0xf) = 0;
      plVar5[0x10] = 0;
      plVar5[0x11] = 0;
      plVar5[0x13] = 0;
      plVar5[0x14] = 0;
      plVar5[0x12] = 0;
      *plVar5 = (longlong)&PTR_FUN_144e0ab60;
      plVar8 = plVar5;
    }
    iVar1 = (int)local_188[1];
    *(int *)(local_188 + 1) = iVar1 + 1;
    if (*(int *)((longlong)local_188 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_188,iVar1);
    }
    *(longlong **)(*local_188 + (longlong)iVar1 * 8) = plVar8;
    if (plVar8 != (longlong *)0x0) {
      local_1a8 = local_168;
      uStack_1a0._0_4_ = (undefined4)uStack_160;
      uStack_1a0._4_4_ = uStack_160._4_4_;
      (**(code **)(*plVar8 + 0x18))(plVar8,0,&local_1a8);
      uStack_1a0 = (undefined1 *)((ulonglong)uStack_1a0._4_4_ << 0x20);
      uStack_160 = (longlong)uStack_1a0;
      local_1a8 = plVar8;
      local_168 = plVar8;
    }
  }
  local_198 = (longlong *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  puVar6 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18) + 8))();
  TRefCountPtr<FRHITexture>::operator=(&local_98,*puVar6);
  puVar6 = (undefined8 *)(**(code **)(**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18) + 8))();
  TRefCountPtr<FRHITexture>::operator=(&uStack_90,*puVar6);
  local_e8 = 1;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 1;
  local_c0 = 1;
  local_bc = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_a8 = L"UnknownTexture";
  local_a0 = 1;
  plVar8 = *(longlong **)(*(longlong *)(param_3 + 0x10) + 0x18);
  puVar7 = (undefined4 *)(**(code **)(*plVar8 + 0x20))(plVar8,&local_1a8);
  local_d8 = CONCAT44(*puVar7,(undefined4)local_d8);
  local_d0 = CONCAT44(local_d0._4_4_,puVar7[1]);
  local_bc = CONCAT44(local_bc._4_4_,2);
  local_c8 = CONCAT26(1,(undefined6)local_c8);
  FUN_141ce1040(&PTR_PTR_1464c2560,&local_e8,&local_198,&local_98);
  lVar4 = FRenderingCompositeOutputRef::GetOutput(&local_168);
  plVar8 = *(longlong **)(lVar4 + 0x50);
  *(longlong **)(lVar4 + 0x50) = local_198;
  if (local_198 != (longlong *)0x0) {
    (**(code **)(*local_198 + 0x28))();
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x30))(plVar8);
  }
  puVar7 = (undefined4 *)FRenderingCompositeOutputRef::GetOutput(&local_168);
  *puVar7 = (undefined4)local_e8;
  puVar7[1] = local_e8._4_4_;
  puVar7[2] = (undefined4)uStack_e0;
  puVar7[3] = uStack_e0._4_4_;
  puVar7[4] = (undefined4)local_d8;
  puVar7[5] = local_d8._4_4_;
  puVar7[6] = (undefined4)local_d0;
  puVar7[7] = local_d0._4_4_;
  puVar7[8] = (undefined4)local_c8;
  *(undefined1 *)(puVar7 + 9) = local_c8._4_1_;
  *(undefined1 *)((longlong)puVar7 + 0x25) = local_c8._5_1_;
  *(undefined2 *)((longlong)puVar7 + 0x26) = local_c8._6_2_;
  *(undefined2 *)(puVar7 + 10) = local_c0;
  puVar7[0xb] = (undefined4)local_bc;
  puVar7[0xc] = local_bc._4_4_;
  puVar7[0xd] = local_b4;
  *(undefined1 *)(puVar7 + 0xe) = local_b0;
  *(wchar_t **)(puVar7 + 0x10) = local_a8;
  *(undefined1 *)(puVar7 + 0x12) = (undefined1)local_a0;
  *(undefined1 *)((longlong)puVar7 + 0x49) = local_a0._1_1_;
  lVar4 = FHardwareCursor::GetHandle(&local_168);
  local_1a8 = (longlong *)0x0;
  uStack_1a0 = (undefined1 *)0x1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  *local_1a8 = lVar4;
  FUN_141cf2100(local_158,&local_1a8,L"ES2BasicPostProcess");
  if (local_1a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&uStack_50);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_58);
  FUN_141a82840(&local_68);
  FUN_141a82770(local_80);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&uStack_90);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_98);
  if (local_198 != (longlong *)0x0) {
    (**(code **)(*local_198 + 0x30))();
  }
  FRenderingCompositePassContext::~FRenderingCompositePassContext(local_158);
  return;
}



// FUNCTION 141b90b20 Bind body=305 status=ok
// SIG undefined Bind(void)

void FLightShaftPixelShaderParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1,param_2,L"TextureSpaceBlurOrigin",0);
  FShaderParameter::Bind(param_1 + 6,param_2,L"WorldSpaceBlurOriginAndRadius",0);
  FShaderParameter::Bind(param_1 + 0xc,param_2,L"LightSourceRadius",0);
  FShaderParameter::Bind(param_1 + 0x18,param_2,L"WorldSpaceSpotDirection",0);
  FShaderParameter::Bind(param_1 + 0x12,param_2,L"SpotAngles",0);
  FShaderParameter::Bind(param_1 + 0x1e,param_2,L"WorldSpaceCameraPositionAndDistance",0);
  FShaderParameter::Bind(param_1 + 0x24,param_2,L"UVMinMax",0);
  FShaderParameter::Bind(param_1 + 0x2a,param_2,L"AspectRatioAndInvAspectRatio",0);
  FShaderParameter::Bind(param_1 + 0x30,param_2,L"LightShaftParameters",0);
  FShaderParameter::Bind(param_1 + 0x36,param_2,L"BloomTintAndThreshold",0);
  FShaderParameter::Bind(param_1 + 0x3c,param_2,L"DistanceFade",0);
  FShaderResourceParameter::Bind(param_1 + 0x42,param_2,L"SourceTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x46,param_2,L"SourceTextureSampler",0);
  return;
}



// FUNCTION 141b90c60 FUN_141b90c60 body=595 status=ok
// SIG undefined FUN_141b90c60(void)

void FUN_141b90c60(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar11 = param_2[3];
  fVar10 = *(float *)(param_1 + 0x518);
  fVar13 = *(float *)(param_1 + 0x528);
  fVar14 = fVar10 * fVar11 + *param_2;
  fVar12 = fVar13 * fVar11 + param_2[1];
  fVar1 = *(float *)(param_1 + 0x538);
  fVar2 = *(float *)(param_1 + 0x5c8);
  fVar3 = *(float *)(param_1 + 0x5cc);
  fVar11 = fVar1 * fVar11 + param_2[2];
  fVar4 = *(float *)(param_1 + 0x598);
  fVar5 = *(float *)(param_1 + 0x59c);
  fVar6 = *(float *)(param_1 + 0x5a8);
  fVar7 = *(float *)(param_1 + 0x5ac);
  fVar8 = *(float *)(param_1 + 0x5b8);
  fVar9 = *(float *)(param_1 + 0x5bc);
  fVar15 = fVar3 * 1.0 + fVar11 * fVar9 + fVar12 * fVar7 + fVar14 * fVar5;
  *param_4 = (fVar2 * 1.0 + fVar11 * fVar8 + fVar12 * fVar6 + fVar14 * fVar4) / fVar15;
  fVar11 = param_2[3];
  fVar12 = *param_2 - fVar10 * fVar11;
  fVar10 = param_2[1] - fVar13 * fVar11;
  fVar11 = param_2[2] - fVar1 * fVar11;
  fVar13 = fVar3 * 1.0 + fVar11 * fVar9 + fVar10 * fVar7 + fVar12 * fVar5;
  fVar11 = (fVar2 * 1.0 + fVar11 * fVar8 + fVar10 * fVar6 + fVar12 * fVar4) / fVar13;
  *param_3 = fVar11;
  if (fVar13 < 0.0) {
    fVar11 = 1.0;
    *param_3 = 1.0;
  }
  if (fVar15 < 0.0) {
    *param_4 = 1.0;
    fVar11 = *param_3;
  }
  if (0.0 <= fVar11) {
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
  }
  else {
    fVar11 = 0.0;
  }
  *param_3 = fVar11;
  fVar11 = *param_4;
  if (0.0 <= fVar11) {
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    *param_4 = fVar11;
  }
  else {
    *param_4 = 0.0;
  }
  return;
}



// FUNCTION 141b90ed0 FUN_141b90ed0 body=545 status=ok
// SIG undefined FUN_141b90ed0(void)

ulonglong FUN_141b90ed0(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  
  if ((param_3 == 0) || (param_2 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar8 = 0;
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar9 < DAT_146a485e8) && (_Init_thread_header(&DAT_146a485e8), DAT_146a485e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.Mobile.EnableStaticAndCSMShadowReceivers");
    lVar6 = lVar8;
    if (plVar7 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a485e0 = lVar6;
    _Init_thread_footer(&DAT_146a485e8);
  }
  if ((*piVar9 < DAT_146a485f8) && (_Init_thread_header(&DAT_146a485f8), DAT_146a485f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))
                       (DAT_1468b1f88,L"r.Mobile.EnableMovableLightCSMShaderCulling");
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146a485f0 = lVar8;
    _Init_thread_footer(&DAT_146a485f8);
  }
  iVar1 = *(int *)(DAT_146a485f0 + 4);
  iVar2 = *(int *)(DAT_146a485e0 + 4);
  uVar5 = *(ulonglong *)(param_2 + 0x30);
  if (((*(uint *)(uVar5 + 0x180) >> 1 & 1) == 0) ||
     (uVar5 = FUN_141be7e40(param_2), (char)uVar5 == '\0')) {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  if ((*(byte *)(param_3 + 0x20) & 1) != 0) {
    if ((iVar1 != 1) && ((char)uVar5 != '\0')) {
LAB_141b90fda:
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
    lVar8 = *param_1;
    if (((*(byte *)(lVar8 + 0x2740) & 1) != 0) && ((iVar2 == 1 || (iVar1 == 1)))) {
      uVar3 = *(uint *)(*(longlong *)(param_3 + 0x140) + 0xe8);
      lVar6 = *(longlong *)(lVar8 + 0x2758);
      if (*(longlong *)(lVar8 + 0x2758) == 0) {
        lVar6 = lVar8 + 0x2748;
      }
      uVar4 = *(uint *)(lVar6 + (longlong)((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x1fU)) >> 5) * 4);
      uVar5 = (ulonglong)uVar4;
      if ((uVar4 >> (uVar3 & 0x1f) & 1) != 0) goto LAB_141b90fda;
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 141b91100 FUN_141b91100 body=1669 status=ok
// SIG undefined FUN_141b91100(void)

void FUN_141b91100(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 local_res8;
  undefined *local_138;
  undefined4 local_130;
  undefined8 local_128 [32];
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      (**(code **)(*(longlong *)(param_1 + 0x198) + 0x28))(param_1 + 0x198);
    }
    TUniformBuffer<FLpvWriteUniformBufferParameters>::SetContents
              (param_1 + 0x198,*(undefined8 *)(param_1 + 0xa8));
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    plVar8 = (longlong *)0x0;
    local_130 = 0;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144e0a8c8;
    *(undefined1 *)(puVar5 + 2) = 0;
    lVar1 = *(longlong *)(param_3 + 0x3090);
    local_138 = &DAT_146a27b00;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_res8,&local_138);
    plVar6 = plVar8;
    if ((int)local_res8 != -1) {
      plVar6 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar7 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar7 = plVar8;
    }
    lVar1 = *plVar7;
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_128[0] = 0;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d91e50;
    puVar5[2] = uVar3;
    FLightPropagationVolume::GetShaderParams(param_1,local_128);
    FUN_141bbec00(lVar1,param_2,local_128);
    DispatchComputeShader(param_2,lVar1,8,8,8);
    FLpvWriteShaderCSBase::UnbindBuffers(lVar1,param_2,local_128);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_128);
    lVar1 = *(longlong *)(param_3 + 0x3090);
    local_138 = &DAT_146a27860;
    local_130 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,&local_res8,&local_138);
    plVar6 = plVar8;
    if ((int)local_res8 != -1) {
      plVar6 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar7 = plVar6 + 2;
    if (plVar6 == (longlong *)0x0) {
      plVar7 = plVar8;
    }
    lVar1 = *plVar7;
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_128[0] = 0;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d91e50;
    puVar5[2] = uVar3;
    FLightPropagationVolume::GetShaderParams(param_1,local_128);
    FUN_141bbec00(lVar1,param_2,local_128);
    DispatchComputeShader(param_2,lVar1,8,8,8);
    FLpvWriteShaderCSBase::UnbindBuffers(lVar1,param_2,local_128);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_128);
    if (*(char *)(param_1 + 0x16a) != '\0') {
      lVar1 = *(longlong *)(param_3 + 0x3090);
      local_138 = &DAT_146a279b0;
      local_130 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar1 + 0x38,&local_res8,&local_138);
      plVar6 = plVar8;
      if ((int)local_res8 != -1) {
        plVar6 = (longlong *)((longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar1 + 0x38));
      }
      plVar7 = plVar6 + 2;
      if (plVar6 == (longlong *)0x0) {
        plVar7 = plVar8;
      }
      lVar1 = *plVar7;
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      FRHIComputeShader::UpdateStats(uVar3);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 3;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 3;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      local_128[0] = 0;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = &PTR_LAB_144d91e50;
      puVar5[2] = uVar3;
      FLightPropagationVolume::GetShaderParams(param_1,local_128);
      FUN_141bbec00(lVar1,param_2,local_128);
      DispatchComputeShader(param_2,lVar1,8,8,8);
      FLpvWriteShaderCSBase::UnbindBuffers(lVar1,param_2,local_128);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_128);
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144e0a8c8;
    *(undefined1 *)(puVar5 + 2) = 1;
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_res8 = 0;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dc9c50;
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    *puVar5 = &PTR_LAB_144e0a908;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 7;
    puVar5[4] = uVar3;
    *(undefined4 *)(puVar5 + 5) = 0;
    puVar5[1] = 0;
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
    local_res8 = 0;
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    *puVar5 = &PTR_LAB_144e0a908;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 7;
    puVar5[4] = uVar3;
    *(undefined4 *)(puVar5 + 5) = 0;
    puVar5[1] = 0;
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_res8 = 0;
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    *puVar5 = &PTR_LAB_144e0a908;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 7;
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    puVar5[1] = 0;
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  }
  return;
}



// FUNCTION 141b91790 FUN_141b91790 body=369 status=ok
// SIG undefined FUN_141b91790(void)

void FUN_141b91790(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  longlong local_38 [2];
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 200);
  if (0 < iVar1) {
    uVar5 = 0;
    piVar3 = (int *)(*(longlong *)(param_1 + 0xc0) + 0x1a38);
    uVar7 = uVar5;
    while ((((lVar2 = *(longlong *)(piVar3 + -0x688), lVar2 == 0 || (*piVar3 < 3)) ||
            (*(char *)(lVar2 + 0x4e8) != '\0')) || (*(longlong *)(lVar2 + 0x4e0) == 0))) {
      uVar7 = uVar7 + 1;
      piVar3 = piVar3 + 0xc34;
      if ((longlong)iVar1 <= (longlong)uVar7) {
        return;
      }
    }
    uVar7 = uVar5;
    if (0 < iVar1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0xc0) + uVar7;
        lVar2 = *(longlong *)(lVar6 + 0x18);
        if (((lVar2 != 0) && (2 < *(int *)(lVar6 + 0x1a38))) &&
           ((*(char *)(lVar2 + 0x4e8) == '\0' && (lVar2 = *(longlong *)(lVar2 + 0x4e0), lVar2 != 0))
           )) {
          local_res8 = 0;
          local_38[0] = 0;
          local_38[1] = 0;
          FScopedGPUStatEvent::Begin(local_38,param_2,&DAT_146a27658,&local_res8);
          FUN_141b9f1b0(lVar2,param_2,(longlong)(int)uVar5 * 0x30d0 + *(longlong *)(param_1 + 0xc0))
          ;
          FUN_141b91100(lVar2,param_2,lVar6);
          if (local_38[0] != 0) {
            FScopedGPUStatEvent::End(local_38);
          }
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar7 = uVar7 + 0x30d0;
      } while ((int)uVar4 < *(int *)(param_1 + 200));
    }
  }
  return;
}



// FUNCTION 141b91910 Compare body=270 status=ok
// SIG undefined Compare(void)

undefined8
TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::Compare
          (int param_1,int param_2,longlong *param_3,float *param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = *param_3;
  lVar5 = (longlong)param_1 * 0xe0;
  lVar4 = (longlong)param_2 * 0xe0;
  fVar6 = *(float *)(lVar5 + 0xc0 + lVar2);
  if (fVar6 < 524288.0) {
    pfVar1 = (float *)(lVar4 + 0xc0 + lVar2);
    if (*pfVar1 <= 524288.0 && *pfVar1 != 524288.0) goto LAB_141b91971;
  }
  else {
    pfVar1 = (float *)(lVar4 + 0xc0 + lVar2);
    if (*pfVar1 <= 524288.0 && *pfVar1 != 524288.0) {
      return 1;
    }
  }
  if (fVar6 < 524288.0) {
    return 0xffffffff;
  }
LAB_141b91971:
  fVar9 = *(float *)(lVar5 + 0xb4 + lVar2) - *param_4;
  fVar8 = *(float *)(lVar4 + 0xb4 + lVar2) - *param_4;
  fVar7 = *(float *)(lVar5 + 0xbc + lVar2) - param_4[2];
  fVar6 = *(float *)(lVar4 + 0xbc + lVar2) - param_4[2];
  fVar10 = *(float *)(lVar4 + 0xb8 + lVar2) - param_4[1];
  fVar11 = *(float *)(lVar5 + 0xb8 + lVar2) - param_4[1];
  uVar3 = 0xffffffff;
  if (fVar10 * fVar10 + fVar8 * fVar8 + fVar6 * fVar6 <
      fVar11 * fVar11 + fVar9 * fVar9 + fVar7 * fVar7) {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141b91a20 FUN_141b91a20 body=4139 status=ok
// SIG undefined FUN_141b91a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b91a20(longlong param_1,uint param_2,uint param_3,float *param_4)

{
  int *piVar1;
  float fVar2;
  undefined8 uVar3;
  ushort uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  undefined8 *puVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 *puVar19;
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  ulonglong *puVar23;
  ulonglong uVar24;
  float *pfVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_348 [32];
  ulonglong local_328;
  undefined4 local_320;
  undefined4 local_318;
  float local_310;
  float local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e0;
  uint local_2d8;
  int local_2d4;
  uint local_2d0;
  undefined8 local_2c8;
  int local_2c0;
  uint local_2bc;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2a8 [2];
  int local_2a0 [2];
  int local_298;
  uint local_294;
  uint local_290;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  float *local_278;
  undefined8 local_270;
  longlong local_268;
  undefined1 local_260 [8];
  longlong local_258;
  undefined1 local_250 [8];
  longlong local_248;
  undefined1 local_240 [8];
  int local_238;
  int iStack_234;
  int local_230;
  int iStack_22c;
  undefined8 *local_228;
  undefined8 local_220;
  uint local_218 [2];
  undefined2 local_210 [4];
  int local_208;
  undefined8 local_204;
  undefined8 uStack_1fc;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  uint local_1e4;
  undefined8 local_1e0;
  longlong local_1d8;
  int local_1d0;
  int local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [32];
  undefined8 local_138;
  float *pfStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  int local_e4 [16];
  undefined1 auStack_a4 [4];
  undefined8 local_a0;
  undefined4 local_98;
  ulonglong local_94;
  undefined8 local_8c;
  undefined4 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  uVar24 = (ulonglong)(int)param_2;
  local_2d8 = 0;
  iVar18 = 0x20;
  local_1cc = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> local_1cc == 0; local_1cc = local_1cc + -1) {
    }
  }
  iVar16 = iVar18;
  if (param_3 != 0) {
    iVar16 = 0x1f - local_1cc;
  }
  uVar22 = param_3 - 1;
  local_1d0 = 0x1f;
  if (uVar22 != 0) {
    for (; uVar22 >> local_1d0 == 0; local_1d0 = local_1d0 + -1) {
    }
  }
  if (uVar22 != 0) {
    iVar18 = 0x1f - local_1d0;
  }
  uVar22 = 0x20U - iVar18 & ~((iVar16 << 0x1a) >> 0x1f);
  local_298 = uVar22 + 1;
  local_2bc = uVar22;
  local_294 = param_3;
  local_290 = param_2;
  local_278 = param_4;
  FUN_141d33e20(param_1);
  lVar10 = FUN_1419ef210((&DAT_1464c9c48)[uVar24]);
  local_1d8 = FSceneRenderTargets::Get(param_1);
  local_2d0 = 1;
  if (1 < (int)(uVar22 + 1)) {
    local_1b8 = (longlong *)(lVar10 + 0x38);
    pfVar21 = local_278;
    pfVar25 = local_278;
    uVar9 = 0;
    iVar18 = uVar22 + 1;
    do {
      local_2d4 = 0;
      local_2b0 = 0;
      if (-1 < (int)(local_2d0 - 1)) {
        local_2b0 = local_2d0 - 1;
      }
      local_2c0 = 1 << (((char)iVar18 - (char)local_2d0) - 1U & 0x1f);
      local_228 = (undefined8 *)
                  (*(longlong *)(local_1d8 + 0x170 + (ulonglong)(local_2d0 & 1) * 8) + 8);
      fVar27 = (float)local_2c0;
      local_1b0 = *(longlong *)(local_1d8 + (0x2f - (ulonglong)(local_2d0 & 1)) * 8);
      do {
        uVar17 = 0;
        puVar23 = (ulonglong *)(param_1 + 0x30);
        local_220 = *local_228;
        local_210[0] = 0x101;
        local_288 = 0;
        uStack_280 = 0x1010101;
        uStack_27c = 0x22;
        local_270 = CONCAT44(local_270._4_4_,0x22);
        local_218[0] = local_2d0;
        local_218[1] = local_2d4;
        FUN_141ae34d0(param_1,local_220,0,0x22);
        iVar18 = 0;
        *(undefined4 *)(param_1 + 0x98) = 1;
        uVar24 = uVar17;
        do {
          uVar22 = (int)uVar24 + 1;
          uVar6 = *(undefined8 *)(local_218 + uVar24 * 6);
          uVar3 = *(undefined8 *)(local_210 + uVar24 * 0xc);
          puVar15 = (undefined8 *)(param_1 + 0xa0 + uVar24 * 0x18);
          *puVar15 = (&local_220)[uVar24 * 3];
          puVar15[1] = uVar6;
          *(undefined8 *)(param_1 + 0xb0 + uVar24 * 0x18) = uVar3;
          uVar24 = (ulonglong)uVar22;
        } while (uVar22 < *(uint *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0x160) = local_288;
        *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_27c,uStack_280);
        puVar19 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar19 + 0x26;
        if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
          FMemStackBase::AllocateNewChunk(puVar23,0x138);
          puVar19 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar19 + 0x26;
        }
        *puVar23 = (ulonglong)puVar15;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar19;
        *(undefined8 **)(param_1 + 8) = puVar19 + 1;
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_143f59440;
        *(undefined4 *)(puVar19 + 2) = 1;
        puVar19[3] = 0;
        *(undefined4 *)(puVar19 + 4) = 0;
        *(undefined4 *)((longlong)puVar19 + 0x24) = 0xffffffff;
        *(undefined2 *)(puVar19 + 5) = 0;
        puVar19[6] = 0;
        *(undefined4 *)(puVar19 + 7) = 0;
        *(undefined4 *)((longlong)puVar19 + 0x3c) = 0xffffffff;
        *(undefined2 *)(puVar19 + 8) = 0;
        puVar19[9] = 0;
        *(undefined4 *)(puVar19 + 10) = 0;
        *(undefined4 *)((longlong)puVar19 + 0x54) = 0xffffffff;
        *(undefined2 *)(puVar19 + 0xb) = 0;
        puVar19[0xc] = 0;
        *(undefined4 *)(puVar19 + 0xd) = 0;
        *(undefined4 *)((longlong)puVar19 + 0x6c) = 0xffffffff;
        *(undefined2 *)(puVar19 + 0xe) = 0;
        puVar19[0xf] = 0;
        *(undefined4 *)(puVar19 + 0x10) = 0;
        *(undefined4 *)((longlong)puVar19 + 0x84) = 0xffffffff;
        *(undefined2 *)(puVar19 + 0x11) = 0;
        puVar19[0x12] = 0;
        *(undefined4 *)(puVar19 + 0x13) = 0;
        *(undefined4 *)((longlong)puVar19 + 0x9c) = 0xffffffff;
        *(undefined2 *)(puVar19 + 0x14) = 0;
        puVar19[0x15] = 0;
        *(undefined4 *)(puVar19 + 0x16) = 0;
        *(undefined4 *)((longlong)puVar19 + 0xb4) = 0xffffffff;
        *(undefined2 *)(puVar19 + 0x17) = 0;
        puVar19[0x18] = 0;
        *(undefined4 *)(puVar19 + 0x19) = 0;
        *(undefined4 *)((longlong)puVar19 + 0xcc) = 0xffffffff;
        *(undefined2 *)(puVar19 + 0x1a) = 0;
        puVar19[0x1b] = 0;
        *(undefined4 *)(puVar19 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar19 + 0xe4) = 0;
        uVar24 = uVar17;
        if (*(int *)(puVar19 + 2) != 0) {
          do {
            uVar22 = (int)uVar24 + 1;
            uVar3 = *(undefined8 *)(local_218 + uVar24 * 6);
            puVar19[uVar24 * 3 + 3] = (&local_220)[uVar24 * 3];
            (puVar19 + uVar24 * 3 + 3)[1] = uVar3;
            puVar19[uVar24 * 3 + 5] = *(undefined8 *)(local_210 + uVar24 * 0xc);
            uVar24 = (ulonglong)uVar22;
          } while (uVar22 < *(uint *)(puVar19 + 2));
          iVar18 = *(int *)(puVar19 + 0x1d);
        }
        uVar24 = uVar17;
        if (iVar18 != 0) {
          do {
            uVar22 = (int)uVar24 + 1;
            puVar19[uVar24 + 0x1e] = *(undefined8 *)(uVar24 * 8);
            uVar24 = (ulonglong)uVar22;
          } while (uVar22 < *(uint *)(puVar19 + 0x1d));
        }
        puVar19[0x1b] = local_288;
        puVar19[0x1c] = CONCAT44(uStack_27c,uStack_280);
        local_e8 = *(uint *)(param_1 + 0x98);
        local_138 = 0;
        pfStack_130 = (float *)0x0;
        local_128 = 0;
        uStack_120 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_e4[3] = 0;
        local_e4[4] = 0;
        local_e4[5] = 0;
        local_e4[6] = 0;
        local_118 = (float *)0x0;
        uStack_110 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_ec = 0x26;
        local_e4[0] = 0;
        local_e4[1] = 0;
        local_e4[2] = 0;
        local_e4[7] = 0;
        local_e4[8] = 0;
        local_e4[9] = 0;
        local_e4[10] = 0;
        local_e4[0xb] = 0;
        local_e4[0xc] = 0;
        local_e4[0xd] = 0;
        local_e4[0xe] = 0;
        stack0xffffffffffffff58 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_94 = 0;
        local_8c = 0;
        local_84 = 0;
        uVar24 = uVar17;
        if (local_e8 != 0) {
          do {
            lVar10 = *(longlong *)(param_1 + 0xa0 + uVar24 * 0x18);
            if (lVar10 == 0) {
              local_e4[uVar24] = 0;
            }
            else {
              local_e4[uVar24] = *(int *)(lVar10 + 0x3c);
              local_e4[uVar24 + 8] = *(int *)(lVar10 + 0x40);
            }
            auStack_a4[uVar24] = *(undefined1 *)(param_1 + 0xb0 + uVar24 * 0x18);
            *(undefined1 *)((longlong)&local_a0 + uVar24 + 4) =
                 *(undefined1 *)(param_1 + 0xb1 + uVar24 * 0x18);
            if (local_e4[uVar24] != 0) {
              local_84 = CONCAT22(local_84._2_2_,*(undefined2 *)(lVar10 + 0x38));
            }
            uVar22 = (int)uVar24 + 1;
            uVar24 = (ulonglong)uVar22;
          } while (uVar22 < local_e8);
        }
        lVar10 = *(longlong *)(param_1 + 0x160);
        if (lVar10 == 0) {
          local_94 = local_94 & 0xffffffff00000000;
        }
        else {
          uVar17 = (ulonglong)*(uint *)(lVar10 + 0x3c);
          local_94 = *(ulonglong *)(lVar10 + 0x3c);
        }
        local_8c = *(undefined8 *)(param_1 + 0x168);
        if ((int)uVar17 != 0) {
          local_84 = CONCAT22(local_84._2_2_,*(undefined2 *)(lVar10 + 0x38));
        }
        if (DAT_146864320 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar8 = IsInRenderingThread();
            if (cVar8 == '\0') {
              FScopedEvent::FScopedEvent(local_260);
              plVar11 = (longlong *)FUN_14049e3d0(local_188,0,0xff);
              lVar10 = *plVar11;
              *(undefined1 **)(lVar10 + 0x10) = &LAB_140985690;
              *(undefined1 **)(lVar10 + 0x18) = local_260;
              lVar10 = *plVar11;
              lVar7 = plVar11[2];
              lVar12 = plVar11[1];
              lVar5 = *(longlong *)(lVar10 + 0x28);
              piVar1 = (int *)(lVar5 + 0x48);
              if (lVar5 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_268 = lVar5;
              FUN_1404a4fe0(lVar10,lVar12,(int)lVar7,1);
              if (lVar5 != 0) {
                LOCK();
                iVar18 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  FGraphEvent::Recycle(local_268);
                }
              }
              FScopedEvent::~FScopedEvent(local_260);
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                DAT_146864320 = 0;
              }
              else {
                DAT_146864320 =
                     TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar10);
              }
            }
          }
          else {
            lVar10 = operator_new(0x38);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_146864320 == 0) {
                DAT_146864320 = 0;
              }
              UNLOCK();
            }
            else {
              lVar10 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
              LOCK();
              if (DAT_146864320 != 0) {
                lVar10 = DAT_146864320;
              }
              DAT_146864320 = lVar10;
              UNLOCK();
            }
          }
        }
        uStack_100 = *(undefined8 *)(DAT_146864320 + 0x30);
        if (DAT_146864318 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar8 = IsInRenderingThread();
            if (cVar8 == '\0') {
              FScopedEvent::FScopedEvent(local_250);
              plVar11 = (longlong *)FUN_14049e3d0(local_170,0,0xff);
              lVar10 = *plVar11;
              *(undefined1 **)(lVar10 + 0x10) = &LAB_140985680;
              *(undefined1 **)(lVar10 + 0x18) = local_250;
              lVar10 = *plVar11;
              lVar7 = plVar11[2];
              lVar12 = plVar11[1];
              lVar5 = *(longlong *)(lVar10 + 0x28);
              piVar1 = (int *)(lVar5 + 0x48);
              if (lVar5 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_258 = lVar5;
              FUN_1404a4fe0(lVar10,lVar12,(int)lVar7,1);
              if (lVar5 != 0) {
                LOCK();
                iVar18 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  FGraphEvent::Recycle(local_258);
                }
              }
              FScopedEvent::~FScopedEvent(local_250);
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                DAT_146864318 = 0;
              }
              else {
                DAT_146864318 =
                     TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar10);
              }
            }
          }
          else {
            lVar10 = operator_new(0x38);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_146864318 == 0) {
                DAT_146864318 = 0;
              }
              UNLOCK();
            }
            else {
              lVar10 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
              LOCK();
              if (DAT_146864318 != 0) {
                lVar10 = DAT_146864318;
              }
              DAT_146864318 = lVar10;
              UNLOCK();
            }
          }
        }
        local_f8 = *(undefined8 *)(DAT_146864318 + 0x30);
        lVar10 = DAT_146852b40;
        if (DAT_146852b40 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar8 = IsInRenderingThread();
            if (cVar8 == '\0') {
              FScopedEvent::FScopedEvent(local_240);
              plVar11 = (longlong *)FUN_14049e3d0(local_158,0,0xff);
              lVar10 = *plVar11;
              *(undefined1 **)(lVar10 + 0x10) = &LAB_1404a0f60;
              *(undefined1 **)(lVar10 + 0x18) = local_240;
              lVar10 = *plVar11;
              lVar7 = plVar11[2];
              lVar12 = plVar11[1];
              lVar5 = *(longlong *)(lVar10 + 0x28);
              piVar1 = (int *)(lVar5 + 0x48);
              if (lVar5 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_248 = lVar5;
              FUN_1404a4fe0(lVar10,lVar12,(int)lVar7,1);
              if (lVar5 != 0) {
                LOCK();
                iVar18 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  FGraphEvent::Recycle(local_248);
                }
              }
              FScopedEvent::~FScopedEvent(local_240);
              lVar10 = DAT_146852b40;
            }
            else {
              lVar12 = operator_new(0x38);
              lVar10 = 0;
              if (lVar12 != 0) {
                lVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar12);
              }
            }
          }
          else {
            lVar10 = operator_new(0x38);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_146852b40 == 0) {
                DAT_146852b40 = 0;
              }
              UNLOCK();
              lVar10 = DAT_146852b40;
            }
            else {
              lVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
              LOCK();
              if (DAT_146852b40 != 0) {
                lVar10 = DAT_146852b40;
              }
              DAT_146852b40 = lVar10;
              UNLOCK();
              lVar10 = DAT_146852b40;
            }
          }
        }
        DAT_146852b40 = lVar10;
        local_108 = *(undefined8 *)(DAT_146852b40 + 0x30);
        puVar19 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar19 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
          FMemStackBase::AllocateNewChunk(puVar23,0x30);
          puVar19 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar19 + 5;
        }
        plVar11 = local_1b8;
        *puVar23 = (ulonglong)puVar15;
        pfVar14 = (float *)0x0;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        local_1a0 = 0;
        **(undefined8 **)(param_1 + 8) = puVar19;
        *(undefined8 **)(param_1 + 8) = puVar19 + 1;
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_143f59420;
        *(int *)((longlong)puVar19 + 0x1c) = local_2c0;
        *(int *)(puVar19 + 4) = local_2c0;
        puVar19[2] = 0;
        *(undefined4 *)(puVar19 + 3) = 0;
        *(undefined4 *)((longlong)puVar19 + 0x24) = 0x3f800000;
        local_1a8 = &DAT_146b09c50;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(local_1b8,&local_2b8,&local_1a8);
        pfVar13 = pfVar14;
        if (local_2b8 != -1) {
          pfVar13 = (float *)((longlong)local_2b8 * 0x20 + *plVar11);
        }
        local_190 = 0;
        pfVar20 = pfVar13 + 4;
        if (pfVar13 == (float *)0x0) {
          pfVar20 = pfVar14;
        }
        local_198 = &DAT_146a29280;
        lVar10 = *(longlong *)pfVar20;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar11,&local_2b4,&local_198);
        pfVar13 = pfVar14;
        if (local_2b4 != -1) {
          pfVar13 = (float *)((longlong)local_2b4 * 0x20 + *plVar11);
        }
        pfVar20 = pfVar13 + 4;
        if (pfVar13 == (float *)0x0) {
          pfVar20 = pfVar14;
        }
        lVar12 = *(longlong *)pfVar20;
        local_138 = DAT_1464c2720;
        if (lVar10 == 0) {
          local_2d8 = uVar9 | 1;
          pfStack_130 = pfVar14;
          pfVar21 = pfVar14;
        }
        else {
          lVar5 = *(longlong *)(lVar10 + 0x48);
          if (*(char *)(lVar5 + 0x28) == '\0') {
            FUN_1419f3850(lVar5);
          }
          pfStack_130 = *(float **)(lVar5 + 0x38);
        }
        uVar22 = local_2d8;
        if (((local_2d8 & 1) != 0) &&
           (uVar22 = local_2d8 & 0xfffffffe, local_2d8 = uVar22, pfVar21 != (float *)0x0)) {
          LOCK();
          pfVar13 = pfVar21 + 2;
          fVar2 = *pfVar13;
          *pfVar13 = (float)((int)*pfVar13 + -1);
          UNLOCK();
          if (fVar2 == 1.4013e-45) {
            if ((*(char *)(pfVar21 + 4) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar26 = pfVar21[3] == 0.0;
              if (bVar26) {
                pfVar21[3] = 1.4013e-45;
              }
              UNLOCK();
              if (bVar26) {
                uVar9 = FLockFreeLinkPolicy::AllocLockFreeLink();
                pfVar13 = pfVar14;
                if (uVar9 != 0) {
                  pfVar13 = (float *)((&DAT_1468a81f8)[uVar9 >> 0xe] +
                                     (ulonglong)(uVar9 & 0x3fff) * 0x18);
                }
                *(float **)(pfVar13 + 2) = pfVar21;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (*(code *)**(undefined8 **)pfVar21)(pfVar21,1);
            }
          }
        }
        if (lVar12 == 0) {
          local_2d8 = uVar22 | 2;
          local_118 = pfVar14;
          pfVar25 = pfVar14;
        }
        else {
          lVar5 = *(longlong *)(lVar12 + 0x48);
          if (*(char *)(lVar5 + 0x28) == '\0') {
            FUN_1419f3850(lVar5);
          }
          local_118 = *(float **)(lVar5 + 0x40);
        }
        if (((local_2d8 & 2) != 0) && (local_2d8 = local_2d8 & 0xfffffffd, pfVar25 != (float *)0x0))
        {
          LOCK();
          pfVar13 = pfVar25 + 2;
          fVar2 = *pfVar13;
          *pfVar13 = (float)((int)*pfVar13 + -1);
          UNLOCK();
          if (fVar2 == 1.4013e-45) {
            if ((*(char *)(pfVar25 + 4) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(), cVar8 == '\0')))) {
              LOCK();
              bVar26 = pfVar25[3] == 0.0;
              if (bVar26) {
                pfVar25[3] = 1.4013e-45;
              }
              UNLOCK();
              if (bVar26) {
                uVar22 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar22 != 0) {
                  pfVar14 = (float *)((&DAT_1468a81f8)[uVar22 >> 0xe] +
                                     (ulonglong)(uVar22 & 0x3fff) * 0x18);
                }
                *(float **)(pfVar14 + 2) = pfVar25;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (*(code *)**(undefined8 **)pfVar25)(pfVar25,1);
            }
          }
        }
        local_ec = 0;
        FUN_141ed6ac0(param_1,&local_138,2,1);
        lVar5 = *(longlong *)(lVar12 + 0x48);
        local_2a0[0] = local_2b0;
        local_2a8[0] = local_2d4;
        if (*(char *)(lVar5 + 0x28) == '\0') {
          FUN_1419f3850(lVar5);
        }
        local_328 = local_328 & 0xffffffff00000000;
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (param_1,*(undefined8 *)(lVar5 + 0x40),lVar12 + 0xc0,local_2a8);
        lVar5 = *(longlong *)(lVar12 + 0x48);
        if (*(char *)(lVar5 + 0x28) == '\0') {
          FUN_1419f3850(lVar5);
        }
        local_328 = local_328 & 0xffffffff00000000;
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (param_1,*(undefined8 *)(lVar5 + 0x40),lVar12 + 0xc6,local_2a0);
        lVar5 = *(longlong *)(lVar12 + 0x48);
        local_2c8 = *(undefined8 *)(local_1b0 + 0x10);
        if (*(char *)(lVar5 + 0x28) == '\0') {
          FUN_1419f3850(lVar5);
        }
        uVar3 = *(undefined8 *)(lVar5 + 0x40);
        local_270 = FUN_141a156e0();
        if (*(short *)(lVar12 + 0xce) != 0) {
          uVar4 = *(ushort *)(lVar12 + 0xcc);
          puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar15 = puVar19 + 5;
          if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
            FMemStackBase::AllocateNewChunk((longlong *)(param_1 + 0x30),0x30);
            puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar15 = puVar19 + 5;
          }
          *(undefined8 **)(param_1 + 0x30) = puVar15;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          **(undefined8 **)(param_1 + 8) = puVar19;
          *(undefined8 **)(param_1 + 8) = puVar19 + 1;
          puVar19[1] = 0;
          *puVar19 = &PTR_LAB_143f59c80;
          *(uint *)(puVar19 + 3) = (uint)uVar4;
          puVar19[4] = local_2c8;
          puVar19[2] = uVar3;
        }
        uVar6 = local_270;
        if (*(short *)(lVar12 + 0xd2) != 0) {
          uVar4 = *(ushort *)(lVar12 + 0xd0);
          puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar15 = puVar19 + 5;
          if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
            FMemStackBase::AllocateNewChunk((longlong *)(param_1 + 0x30),0x30);
            puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar15 = puVar19 + 5;
          }
          *(undefined8 **)(param_1 + 0x30) = puVar15;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          **(undefined8 **)(param_1 + 8) = puVar19;
          *(undefined8 **)(param_1 + 8) = puVar19 + 1;
          puVar19[1] = 0;
          *puVar19 = &PTR_LAB_143f59c70;
          puVar19[2] = uVar3;
          *(uint *)(puVar19 + 3) = (uint)uVar4;
          puVar19[4] = uVar6;
        }
        local_238 = local_2c0;
        iStack_234 = local_2c0;
        local_230 = local_2c0;
        iStack_22c = local_2c0;
        local_2e0 = 1;
        local_2f8 = CONCAT44(local_2c0,local_2c0);
        local_2e8 = 0;
        local_300 = CONCAT44(local_2c0,local_2c0);
        local_318 = 0;
        local_320 = 0;
        local_328 = CONCAT44(local_328._4_4_,fVar27);
        local_310 = fVar27;
        local_308 = fVar27;
        local_2f0 = lVar10;
        DrawRectangle(param_1);
        puVar23 = (ulonglong *)(param_1 + 0x30);
        local_1e0 = 0;
        local_208 = local_2d4;
        puVar19 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
        uVar3 = local_228[1];
        plVar11 = (longlong *)*local_228;
        local_1e4 = local_2d0;
        puVar15 = puVar19 + 10;
        local_204 = 0xffffffffffffffff;
        uStack_1fc = 0xffffffffffffffff;
        local_1f4 = 0xffffffffffffffff;
        uStack_1ec = 0xffffffffffffffff;
        if (*(undefined8 **)(param_1 + 0x38) < puVar15) {
          FMemStackBase::AllocateNewChunk(puVar23,0x58);
          puVar19 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar19 + 10;
        }
        *puVar23 = (ulonglong)puVar15;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar19;
        *(undefined8 **)(param_1 + 8) = puVar19 + 1;
        puVar19[1] = 0;
        *puVar19 = &PTR_LAB_143f489f0;
        *(int *)(puVar19 + 2) = local_208;
        *(undefined4 *)((longlong)puVar19 + 0x14) = (undefined4)local_204;
        *(undefined4 *)(puVar19 + 3) = local_204._4_4_;
        *(undefined4 *)((longlong)puVar19 + 0x1c) = (undefined4)uStack_1fc;
        *(undefined4 *)(puVar19 + 4) = uStack_1fc._4_4_;
        *(undefined4 *)((longlong)puVar19 + 0x24) = (undefined4)local_1f4;
        *(undefined4 *)(puVar19 + 5) = local_1f4._4_4_;
        *(undefined4 *)((longlong)puVar19 + 0x2c) = (undefined4)uStack_1ec;
        *(undefined4 *)(puVar19 + 6) = uStack_1ec._4_4_;
        *(uint *)((longlong)puVar19 + 0x34) = local_1e4;
        *(undefined4 *)(puVar19 + 7) = (undefined4)local_1e0;
        *(undefined4 *)((longlong)puVar19 + 0x3c) = local_1e0._4_4_;
        puVar19[8] = plVar11;
        puVar19[9] = uVar3;
        lVar10 = (**(code **)(*plVar11 + 8))(plVar11);
        if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar19[8] + 0x18))(), lVar10 == 0)
           ) {
          (**(code **)(*(longlong *)puVar19[8] + 0x20))();
        }
        lVar10 = (**(code **)(*(longlong *)puVar19[9] + 8))();
        if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar19[9] + 0x18))(), lVar10 == 0)
           ) {
          (**(code **)(*(longlong *)puVar19[9] + 0x20))();
        }
        local_2d4 = local_2d4 + 1;
        uVar9 = local_2d8;
      } while (local_2d4 < 6);
      local_2d0 = local_2d0 + 1;
      iVar18 = local_298;
    } while ((int)local_2d0 < local_298);
    uVar24 = (ulonglong)local_290;
    param_4 = local_278;
    param_3 = local_294;
    uVar22 = local_2bc;
  }
  lVar10 = FSceneRenderTargets::Get(param_1);
  uVar22 = uVar22 & 0x80000001;
  if ((int)uVar22 < 0) {
    uVar22 = (uVar22 - 1 | 0xfffffffe) + 1;
  }
  local_328 = *(longlong *)(lVar10 + 0x170 + (longlong)(int)uVar22 * 8) + 8;
  FUN_141d240e0(&local_1c8,param_1,uVar24 & 0xffffffff,param_3);
  *param_4 = (local_1c4 + local_1c8 + local_1c0) * 0.33333334;
  return;
}



// FUNCTION 141b92a50 FUN_141b92a50 body=483 status=ok
// SIG undefined FUN_141b92a50(void)

void FUN_141b92a50(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int local_res8 [2];
  undefined *local_128;
  undefined4 local_120;
  undefined8 local_118 [32];
  
  *(int *)(param_1 + 0x16c) = 1 - *(int *)(param_1 + 0x16c);
  lVar1 = *(longlong *)(param_3 + 0x3090);
  local_128 = &DAT_146a27ef0;
  local_120 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res8,&local_128);
  plVar4 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar6 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  plVar6 = (longlong *)*plVar6;
  lVar1 = plVar6[9];
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  FRHIComputeShader::UpdateStats(uVar2);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144d91e50;
  puVar5[2] = uVar2;
  local_118[0] = 0;
  FLightPropagationVolume::GetShaderParams(param_1,local_118);
  (**(code **)(*plVar6 + 0x30))(plVar6,param_2,local_118);
  TUniformBuffer<FLpvWriteUniformBufferParameters>::SetContents
            (param_1 + 0x198,*(undefined8 *)(param_1 + 0xa8));
  DispatchComputeShader(param_2,plVar6,8,8,8);
  FLpvWriteShaderCSBase::UnbindBuffers(plVar6,param_2,local_118);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar5 + 2;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 2;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar5;
  *(undefined8 **)(param_2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_144dc9c50;
  return;
}



// FUNCTION 141b92c40 ComputeOutputDesc body=83 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCSeparateTranslucensyPassES2::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
  puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
  uVar4 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar4;
  uVar4 = puVar5[4];
  uVar3 = puVar5[5];
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  uVar1 = puVar5[6];
  uVar2 = puVar5[7];
  param_2[4] = uVar4;
  param_2[5] = uVar3;
  uVar4 = puVar5[8];
  uVar3 = puVar5[9];
  param_2[6] = uVar1;
  param_2[7] = uVar2;
  param_2[8] = uVar4;
  param_2[9] = uVar3;
  param_2[8] = L"SeparateTranslucensyPassES2";
  return param_2;
}



// FUNCTION 141b92ca0 FUN_141b92ca0 body=1567 status=ok
// SIG undefined FUN_141b92ca0(void)

void FUN_141b92ca0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_res8;
  int local_168;
  uint uStack_164;
  int iStack_154;
  float fStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  float fStack_138;
  int iStack_108;
  uint uStack_104;
  uint *local_100;
  uint uStack_f8;
  int iStack_f4;
  int local_f0;
  longlong *local_e8;
  float local_d8;
  
  uStack_164 = 1;
  iVar7 = *(int *)(param_1 + 0x68);
  local_100 = (uint *)(param_1 + 0x50);
  local_168 = 0;
  iStack_154 = 0;
  fStack_150 = 0.0;
  if (iVar7 != 0) {
    puVar16 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar16 = local_100;
    }
    uVar8 = *puVar16;
    local_168 = 0;
    while (uVar8 == 0) {
      lVar13 = (longlong)local_168;
      fStack_150 = (float)((int)fStack_150 + 0x20);
      iVar11 = local_168 + 1;
      bVar9 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_168;
      local_168 = iVar11;
      if (bVar9) goto LAB_141b92d65;
      uVar8 = puVar16[lVar13 + 1];
    }
    uStack_164 = -uVar8 & uVar8;
    iVar11 = 0x1f;
    if (uStack_164 != 0) {
      for (; uStack_164 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_164 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iStack_154 = ((int)fStack_150 - iVar11) + 0x1f;
    if (iVar7 < iStack_154) {
LAB_141b92d65:
      iStack_154 = iVar7;
    }
  }
  iStack_108 = local_168;
  uStack_104 = uStack_164;
  uStack_f8 = 0xffffffff;
  iStack_f4 = iStack_154;
  local_f0 = (int)fStack_150;
  local_e8 = (longlong *)(param_1 + 0x40);
  if (iStack_154 < iVar7) {
    do {
      lVar15 = (longlong)iStack_f4 * 0xe0;
      fStack_150 = 0.0;
      fStack_138 = 0.0;
      fVar20 = 0.0;
      local_res8 = 0.0;
      local_148 = 0;
      uStack_140 = 0;
      lVar13 = *(longlong *)(param_1 + 0x40);
      iVar7 = *(int *)(lVar15 + 0x18 + lVar13);
      lVar10 = (longlong)iVar7;
      if (iVar7 != 0) {
        puVar16 = *(uint **)(lVar15 + lVar13);
        lVar17 = 0;
        if (iVar7 < 1) {
LAB_141b92efe:
          fStack_150 = local_res8;
          if (lVar17 < lVar10) {
            lVar14 = *(longlong *)(param_2 + 0x10);
            if (*(longlong *)(param_2 + 0x10) == 0) {
              lVar14 = param_2;
            }
            lVar12 = lVar17 * 0x38;
            lVar10 = lVar10 - lVar17;
            do {
              if ((*(uint *)(lVar14 + ((longlong)(int)*puVar16 >> 5) * 4) >> (*puVar16 & 0x1f) & 1)
                  != 0) {
                fVar24 = (float)local_148 - uStack_140._4_4_;
                lVar17 = *(longlong *)(lVar15 + 0x10 + lVar13);
                fVar23 = (float)uStack_140 - fVar20;
                fVar25 = local_148._4_4_ - fStack_138;
                uStack_140._4_4_ = uStack_140._4_4_ + (float)local_148;
                fStack_138 = fStack_138 + local_148._4_4_;
                fVar20 = fVar20 + (float)uStack_140;
                fVar29 = fVar24;
                if (uStack_140._4_4_ < fVar24) {
                  fVar29 = uStack_140._4_4_;
                }
                fVar28 = fVar25;
                if (fStack_138 < fVar25) {
                  fVar28 = fStack_138;
                }
                fVar27 = fVar23;
                if (fVar20 < fVar23) {
                  fVar27 = fVar20;
                }
                if (fVar24 < uStack_140._4_4_) {
                  fVar24 = uStack_140._4_4_;
                }
                if (fVar25 < fStack_138) {
                  fVar25 = fStack_138;
                }
                if (fVar23 < fVar20) {
                  fVar23 = fVar20;
                }
                fVar3 = *(float *)(lVar17 + 0x10 + lVar12);
                fVar20 = *(float *)(lVar17 + 0x1c + lVar12);
                fVar4 = *(float *)(lVar17 + 0x14 + lVar12);
                fVar22 = fVar3 - fVar20;
                fVar5 = *(float *)(lVar17 + 0x18 + lVar12);
                fVar18 = *(float *)(lVar17 + 0x20 + lVar12);
                fVar19 = *(float *)(lVar17 + 0x24 + lVar12);
                fVar21 = fVar4 - fVar18;
                fVar26 = fVar5 - fVar19;
                if (fVar22 < fVar29) {
                  fVar29 = fVar22;
                }
                if (fVar21 < fVar28) {
                  fVar28 = fVar21;
                }
                if (fVar26 < fVar27) {
                  fVar27 = fVar26;
                }
                if (fVar24 < fVar22) {
                  fVar24 = fVar22;
                }
                if (fVar25 < fVar21) {
                  fVar25 = fVar21;
                }
                if (fVar23 < fVar26) {
                  fVar23 = fVar26;
                }
                fVar18 = fVar18 + fVar4;
                fVar20 = fVar3 + fVar20;
                fVar19 = fVar19 + fVar5;
                if (fVar20 < fVar29) {
                  fVar29 = fVar20;
                }
                if (fVar18 < fVar28) {
                  fVar28 = fVar18;
                }
                if (fVar19 < fVar27) {
                  fVar27 = fVar19;
                }
                if (fVar24 < fVar20) {
                  fVar24 = fVar20;
                }
                if (fVar25 < fVar18) {
                  fVar25 = fVar18;
                }
                if (fVar23 < fVar19) {
                  fVar23 = fVar19;
                }
                fVar24 = fVar24 - fVar29;
                fVar25 = fVar25 - fVar28;
                fVar23 = fVar23 - fVar27;
                fStack_138 = fVar25 * 0.5;
                fVar29 = fVar29 + fVar24 * 0.5;
                fVar20 = fVar23 * 0.5;
                fVar28 = fVar28 + fStack_138;
                fVar27 = fVar27 + fVar20;
                fVar23 = SQRT((fVar24 * fVar24 + fVar25 * fVar25 + fVar23 * fVar23) * 0.25);
                local_res8 = SQRT((local_148._4_4_ - fVar28) * (local_148._4_4_ - fVar28) +
                                  ((float)local_148 - fVar29) * ((float)local_148 - fVar29) +
                                  ((float)uStack_140 - fVar27) * ((float)uStack_140 - fVar27)) +
                             local_res8;
                fStack_150 = SQRT((fVar4 - fVar28) * (fVar4 - fVar28) +
                                  (fVar3 - fVar29) * (fVar3 - fVar29) +
                                  (fVar5 - fVar27) * (fVar5 - fVar27)) +
                             *(float *)(lVar17 + 0x28 + lVar12);
                if (fStack_150 <= local_res8) {
                  fStack_150 = local_res8;
                }
                if (fVar23 <= fStack_150) {
                  fStack_150 = fVar23;
                }
                local_148 = CONCAT44(fVar28,fVar29);
                uStack_140 = CONCAT44(fVar24 * 0.5,fVar27);
                local_res8 = fStack_150;
                local_d8 = fVar20;
              }
              lVar12 = lVar12 + 0x38;
              puVar16 = puVar16 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
        else {
          lVar14 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar14 = param_2;
          }
          do {
            if ((*(uint *)(lVar14 + ((longlong)(int)*puVar16 >> 5) * 4) >> (*puVar16 & 0x1f) & 1) !=
                0) {
              lVar14 = *(longlong *)(lVar15 + 0x10 + lVar13);
              lVar12 = lVar17 * 0x38;
              uVar6 = *(undefined8 *)(lVar12 + 0x20 + lVar14);
              fVar20 = (float)((ulonglong)uVar6 >> 0x20);
              puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar14);
              local_148 = *puVar1;
              uStack_140 = puVar1[1];
              local_res8 = *(float *)(lVar12 + 0x28 + lVar14);
              fStack_138 = (float)uVar6;
              goto LAB_141b92efe;
            }
            lVar17 = lVar17 + 1;
            puVar16 = puVar16 + 1;
          } while (lVar17 < lVar10);
        }
      }
      uStack_f8 = uStack_f8 & ~uStack_104;
      puVar2 = (undefined4 *)(lVar15 + 0xb4 + lVar13);
      *puVar2 = (float)local_148;
      puVar2[1] = local_148._4_4_;
      puVar2[2] = (float)uStack_140;
      puVar2[3] = fStack_150;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_108);
    } while (iStack_f4 < (int)local_100[6]);
  }
  return;
}



// FUNCTION 141b932c0 FUN_141b932c0 body=1025 status=ok
// SIG undefined FUN_141b932c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141b932c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  uint local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 local_140;
  ulonglong local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  longlong local_128;
  longlong local_120;
  longlong local_118 [11];
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar10 = 0;
  local_138 = local_138 & 0xffffffff00000000;
  lVar7 = FSceneRenderTargets::Get(param_2);
  FUN_141cf4cf0(lVar7,param_2);
  iVar6 = FSceneViewFamily::GetFeatureLevel(param_1 + 0x10);
  uVar1 = (&DAT_1464c9c48)[iVar6];
  cVar5 = FUN_142753a10();
  if ((cVar5 == '\0') && (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')) {
    return;
  }
  if (((uVar1 < 0x1b) && ((0x5000700U >> (uVar1 & 0x1f) & 1) != 0)) &&
     (*(char *)(param_3 + 0x1204) == '\0')) {
    puVar8 = (undefined8 *)FUN_141ce54b0(lVar7);
    lVar9 = (**(code **)(*(longlong *)*puVar8 + 0x10))();
    if ((DAT_146ab62de == '\0') && ((DAT_146ab62dd == '\0' || (*(int *)(lVar9 + 0x2c) != 10)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) || (*(int *)(DAT_146a293e0 + 4) == 1)) {
      if (((*(uint *)(param_1 + 0x38) & 0x1000) == 0) ||
         (*(int *)(*(longlong *)(param_1 + 8) + 0x1198) ==
          *(int *)(*(longlong *)(param_1 + 8) + 0x11c4))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((*(byte *)(param_1 + 0x3c) & 0x40) == 0) || (*(char *)(param_1 + 0x2e0) == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((((bVar3) || (bVar4)) || (*(int *)(DAT_146a293e0 + 4) == 1)) ||
         ((*(uint *)(param_3 + 0x28cc) & 0x1000) != 0)) {
        if (uVar1 == 9) {
          if (*(int *)(lVar9 + 0x2c) == 10) {
            FUN_141c1a5c0(param_1,param_2,param_3);
          }
        }
        else {
          local_120 = *(longlong *)(DAT_1464c3318 + 8);
          if (local_120 != 0) {
            LOCK();
            *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
            UNLOCK();
          }
          local_128 = *(longlong *)(DAT_1464c3368 + 8);
          if (local_128 != 0) {
            LOCK();
            *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
            UNLOCK();
          }
          local_180 = local_180 & 0xffffff00;
          local_188 = 0x22;
          FUN_141ad74f0(param_2,local_120,local_128,3);
          if (*(int *)(DAT_146a293f8 + 4) != 0) {
            local_118[10] = 0;
            local_118[2] = 0;
            local_118[3] = 0;
            local_118[4] = 0;
            local_118[5] = 0;
            local_118[6] = 0;
            local_118[7] = 0;
            local_118[8] = 0;
            local_118[9] = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_c0 = 0;
            local_bc = 0x26;
            local_b4 = 0;
            local_ac = 0;
            local_98 = 0;
            local_90 = 0;
            local_88 = 0;
            local_80 = 0;
            local_78 = 0;
            local_70 = 0;
            local_68 = 0;
            local_64 = 0;
            local_5c = 0;
            local_54 = 0;
            FUN_14049afe0(param_2,local_118 + 2);
            local_118[8] = FUN_1404a0ce0();
            local_118[9] = FUN_140985530();
            local_118[10] = FUN_1409853f0();
            FUN_141b8a540(&local_130,*(undefined8 *)(param_3 + 0x3090));
            FUN_141b8a4c0(local_118,*(undefined8 *)(param_3 + 0x3090));
            lVar9 = CONCAT44(uStack_12c,local_130);
            local_118[2] = DAT_1464c2720;
            if (lVar9 == 0) {
              local_138 = 0;
              lVar12 = 1;
              local_118[3] = lVar10;
            }
            else {
              lVar12 = *(longlong *)(lVar9 + 0x48);
              if (*(char *)(lVar12 + 0x28) == '\0') {
                FUN_1419f3850(lVar12);
              }
              local_118[3] = *(longlong *)(lVar12 + 0x38);
              lVar12 = lVar10;
            }
            if (lVar12 != 0) {
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_138);
            }
            bVar3 = false;
            if (local_118[0] == 0) {
              bVar3 = true;
              local_118[1] = 0;
            }
            else {
              lVar10 = *(longlong *)(local_118[0] + 0x48);
              if (*(char *)(lVar10 + 0x28) == '\0') {
                FUN_1419f3850(lVar10);
              }
              lVar10 = *(longlong *)(lVar10 + 0x40);
            }
            local_118[6] = lVar10;
            if (bVar3) {
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_118 + 1);
            }
            local_bc = local_bc & 0xffffffff00000000;
            FUN_141ed6ac0(param_2,local_118 + 2,2,1);
            FPostProcessVS::SetParameters(lVar9,param_2,*(undefined8 *)(param_3 + 0x20));
            uVar2 = *(undefined8 *)(*(longlong *)(lVar7 + 0x60) + 0x10);
            uVar11 = FUN_1404a0e20();
            FScreenPS::SetParameters(local_118[0],param_2,uVar11,uVar2);
            local_140 = 1;
            local_148 = 1;
            local_138 = 0x100000001;
            local_158 = 0x100000001;
            local_130 = 1;
            uStack_12c = 1;
            local_160 = 0x100000001;
            local_168 = 0x3f800000;
            local_170 = 0x3f800000;
            local_178 = 0;
            local_180 = 0;
            local_188 = 0;
            DrawRectangle(param_2,0,0,0);
          }
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_128);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_120);
        }
      }
    }
  }
  return;
}



// FUNCTION 141b936d0 ConstructCompiledInstance body=219 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FMobileSceneCaptureCopyPS<1,1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e08ba8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xd6) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"InTexture",1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"InTextureSampler",0);
    FUN_141cdf500(param_1,puVar1 + 0x19,puVar1 + 0x1a);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b937b0 ConstructCompiledInstance body=111 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FMobileSceneCaptureCopyVS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91120;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"InvTexSize",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b93820 ConstructCompiledInstance body=176 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TDeferredLightOverlapPS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e09490;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xd6) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"HasValidChannel",0);
    FUN_141cdf500(param_1,puVar1 + 0x19,puVar1 + 0x1a);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b938d0 FUN_141b938d0 body=155 status=ok
// SIG undefined FUN_141b938d0(void)

undefined8 * FUN_141b938d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e09018;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    FStencilingGeometryShaderParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FShaderParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"LayerIndex",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b93970 FUN_141b93970 body=46 status=ok
// SIG undefined FUN_141b93970(void)

void FUN_141b93970(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    TDownsampleLightShaftsPixelShader<1,1>::TDownsampleLightShaftsPixelShader<1,1>(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b939a0 FUN_141b939a0 body=46 status=ok
// SIG undefined FUN_141b939a0(void)

void FUN_141b939a0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x188);
  if (lVar1 != 0) {
    FUN_141b89c10(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b939d0 FUN_141b939d0 body=140 status=ok
// SIG undefined FUN_141b939d0(void)

undefined8 * FUN_141b939d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x158);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x156) = 0;
    *puVar1 = &PTR_FUN_144e07f50;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x2a,*(undefined8 *)(param_1 + 0x18),L"PrecomputedLightingBuffer",0);
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b93a60 FUN_141b93a60 body=351 status=ok
// SIG undefined FUN_141b93a60(void)

undefined8 * FUN_141b93a60(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x178);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x156) = 0;
    *puVar1 = &PTR_FUN_144e08088;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined4 *)(puVar1 + 0x2e) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x174) = 0;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x2a,*(undefined8 *)(param_1 + 0x18),L"PrecomputedLightingBuffer",0);
    FShaderParameter::Bind
              (puVar1 + 0x2b,*(undefined8 *)(param_1 + 0x18),L"bVisualizeLightMapBase",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x15e,*(undefined8 *)(param_1 + 0x18),
               L"bVisualizeLightmapTimeOfDay",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x164,*(undefined8 *)(param_1 + 0x18),L"bVisualizeSkyBentNormal",0
              );
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x16a,*(undefined8 *)(param_1 + 0x18),L"bVisualizeSkyOcclusion",0)
    ;
    FShaderParameter::Bind
              (puVar1 + 0x2e,*(undefined8 *)(param_1 + 0x18),L"bVisualizeAOMaterialMask",0);
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b93bc0 FUN_141b93bc0 body=77 status=ok
// SIG undefined FUN_141b93bc0(void)

undefined8 * FUN_141b93bc0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x138);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141b8b170(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e09810;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b93c10 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TCapsuleShadowingCS<1,1>::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141b89fb0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144e07f20;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b93c60 FUN_141b93c60 body=77 status=ok
// SIG undefined FUN_141b93c60(void)

undefined8 * FUN_141b93c60(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x158);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141b8a450(puVar1,param_1);
    *puVar1 = &PTR_FUN_144e07f50;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b93cb0 ConstructCompiledInstance body=197 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FApplyLightShaftsPixelShader::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91300;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SourceTexture",0)
    ;
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"SourceTextureSampler",0);
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"UVMinMax",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b93d80 FUN_141b93d80 body=46 status=ok
// SIG undefined FUN_141b93d80(void)

void FUN_141b93d80(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FBlurLightShaftsPixelShader::FBlurLightShaftsPixelShader(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b93db0 ConstructCompiledInstance body=149 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCopyMobileMultiViewSceneColorPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d91290;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"MobileMultiViewSceneColorTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),
               L"MobileMultiViewSceneColorTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b93e50 FUN_141b93e50 body=46 status=ok
// SIG undefined FUN_141b93e50(void)

void FUN_141b93e50(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FUN_141b8a7d0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b93e80 FUN_141b93e80 body=46 status=ok
// SIG undefined FUN_141b93e80(void)

void FUN_141b93e80(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FFinishOcclusionPixelShader::FFinishOcclusionPixelShader(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 141b93eb0 FUN_141b93eb0 body=77 status=ok
// SIG undefined FUN_141b93eb0(void)

undefined8 * FUN_141b93eb0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x138);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141b8b170(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e09e20;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b93f00 ConstructCompiledInstance body=261 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FLpvInject_GenerateVplListsCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141b8b170(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e09be8;
    *(undefined4 *)(puVar1 + 0x27) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x13c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x144) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x27,*(undefined8 *)(param_1 + 0x18),L"gRsmFluxTex",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x13c,*(undefined8 *)(param_1 + 0x18),L"gRsmNormalTex",0);
    FShaderResourceParameter::Bind(puVar1 + 0x28,*(undefined8 *)(param_1 + 0x18),L"gRsmDepthTex",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x144,*(undefined8 *)(param_1 + 0x18),L"LinearSampler",0);
    FShaderResourceParameter::Bind(puVar1 + 0x29,*(undefined8 *)(param_1 + 0x18),L"PointSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b94010 ConstructCompiledInstance body=290 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FLpvVisualisePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    puVar2 = puVar1 + 0x18;
    *puVar1 = &PTR__scalar_deleting_destructor__144e0a868;
    puVar4 = puVar1 + 0x1c;
    ppuVar3 = &PTR_u_gLpv3DTexture0_1464c1f78;
    *puVar2 = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    lVar5 = 7;
    *(undefined4 *)((longlong)puVar1 + 0xdc) = 0;
    *puVar4 = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    do {
      FShaderResourceParameter::Bind(puVar2,*(undefined8 *)(param_1 + 0x18),*ppuVar3,0);
      puVar2 = (undefined8 *)((longlong)puVar2 + 4);
      ppuVar3 = ppuVar3 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"gLpv3DTextureSampler",0);
    lVar5 = 2;
    ppuVar3 = &PTR_u_gGv3DTexture0_1464c1fe8;
    do {
      FShaderResourceParameter::Bind(puVar4,*(undefined8 *)(param_1 + 0x18),*ppuVar3,0);
      puVar4 = (undefined8 *)((longlong)puVar4 + 4);
      ppuVar3 = ppuVar3 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b94140 FUN_141b94140 body=312 status=ok
// SIG undefined FUN_141b94140(void)

undefined8 * FUN_141b94140(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x178);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144e09858;
    puVar1[0x2a] = &PTR_LAB_144e098a8;
    *(undefined4 *)(puVar1 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x15e) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x166) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x16e) = 0;
    FShaderParameter::Bind(puVar1 + 0x2b,*(undefined8 *)(param_1 + 0x18),L"AccuracyColors",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x15e,*(undefined8 *)(param_1 + 0x18),L"AnalysisParams",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x164,*(undefined8 *)(param_1 + 0x18),L"OneOverCPUTexCoordScales",
               0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x16a,*(undefined8 *)(param_1 + 0x18),L"TexCoordIndices",0);
    FShaderParameter::Bind(puVar1 + 0x2e,*(undefined8 *)(param_1 + 0x18),L"PrimitiveAlpha",0);
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b94280 ConstructCompiledInstance body=262 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FMeshTexCoordSizeAccuracyPS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e09e58;
    puVar1[0x18] = &PTR_LAB_144e09e88;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xde) = 0;
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"AccuracyColors",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xce,*(undefined8 *)(param_1 + 0x18),L"CPUTexelFactor",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"PrimitiveAlpha",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xda,*(undefined8 *)(param_1 + 0x18),L"TexCoordAnalysisIndex",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b94390 ConstructCompiledInstance body=248 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FMobileDownsamplePS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__143f59330;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd2) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"CubeFace",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"SourceMipIndex",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"SourceTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"SourceTextureSampler",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b94490 ConstructSerializedInstance body=104 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FCompositeMonoscopicFarFieldViewPS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e08ba8;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xd6) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b94500 ConstructSerializedInstance body=110 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TDeferredLightOverlapPS<1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e09490;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xd6) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b94570 ConstructSerializedInstance body=93 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FRTWriteMaskDecodeCS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e09018;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xdc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b945d0 FUN_141b945d0 body=36 status=ok
// SIG undefined FUN_141b945d0(void)

void FUN_141b945d0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x120);
  if (lVar1 != 0) {
    TDownsampleLightShaftsPixelShader<1,1>::TDownsampleLightShaftsPixelShader<1,1>(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b94600 FUN_141b94600 body=119 status=ok
// SIG undefined FUN_141b94600(void)

undefined8 * FUN_141b94600(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x188);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x156) = 0;
    *puVar1 = &PTR_FUN_144e097c8;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    *(undefined4 *)(puVar1 + 0x30) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b94680 FUN_141b94680 body=78 status=ok
// SIG undefined FUN_141b94680(void)

undefined8 * FUN_141b94680(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x158);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x156) = 0;
    *puVar1 = &PTR_FUN_144e07f50;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b946d0 FUN_141b946d0 body=112 status=ok
// SIG undefined FUN_141b946d0(void)

undefined8 * FUN_141b946d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x178);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x154) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x156) = 0;
    *puVar1 = &PTR_FUN_144e08088;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined4 *)(puVar1 + 0x2e) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x174) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b94740 FUN_141b94740 body=57 status=ok
// SIG undefined FUN_141b94740(void)

undefined8 * FUN_141b94740(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x138);
  if (puVar1 != (undefined8 *)0x0) {
    FLpvWriteShaderCSBase::FLpvWriteShaderCSBase(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e09810;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b94780 ConstructSerializedInstance body=57 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * TCapsuleShadowingCS<1,1>::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141b8a380(puVar1);
    *puVar1 = &PTR_FUN_144e07f20;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b947c0 FUN_141b947c0 body=36 status=ok
// SIG undefined FUN_141b947c0(void)

void FUN_141b947c0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FUN_141b8a760(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b947f0 FUN_141b947f0 body=36 status=ok
// SIG undefined FUN_141b947f0(void)

void FUN_141b947f0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FUN_141b8aa60(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b94820 FUN_141b94820 body=36 status=ok
// SIG undefined FUN_141b94820(void)

void FUN_141b94820(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x110);
  if (lVar1 != 0) {
    FUN_141b8ac70(lVar1);
    return;
  }
  return;
}



// FUNCTION 141b94850 FUN_141b94850 body=57 status=ok
// SIG undefined FUN_141b94850(void)

undefined8 * FUN_141b94850(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x138);
  if (puVar1 != (undefined8 *)0x0) {
    FLpvWriteShaderCSBase::FLpvWriteShaderCSBase(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e09e20;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b94890 ConstructSerializedInstance body=79 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FLpvInject_GenerateVplListsCS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FLpvWriteShaderCSBase::FLpvWriteShaderCSBase(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e09be8;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    *(undefined4 *)(puVar1 + 0x29) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b948e0 FUN_141b948e0 body=100 status=ok
// SIG undefined FUN_141b948e0(void)

undefined8 * FUN_141b948e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e0a868;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b94950 FUN_141b94950 body=107 status=ok
// SIG undefined FUN_141b94950(void)

undefined8 * FUN_141b94950(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x178);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf7d0(puVar1);
    *puVar1 = &PTR_FUN_144e09858;
    puVar1[0x2a] = &PTR_LAB_144e098a8;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    *(undefined4 *)(puVar1 + 0x2e) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x174) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b949c0 ConstructSerializedInstance body=94 status=ok
// SIG undefined ConstructSerializedInstance(void)

undefined8 * FMeshTexCoordSizeAccuracyPS::ConstructSerializedInstance(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e09e58;
    puVar1[0x18] = &PTR_LAB_144e09e88;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141b94a20 FUN_141b94a20 body=1722 status=ok
// SIG undefined FUN_141b94a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b94a20(longlong param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  int *param_5,longlong param_6,char param_7,undefined *param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined1 uVar17;
  longlong *plVar18;
  int iVar19;
  float fVar20;
  undefined1 auStack_708 [32];
  ulonglong *local_6e8;
  longlong local_6e0;
  float local_6d8;
  float local_6d0;
  float local_6c8;
  undefined8 local_6c0;
  ulonglong local_6b8;
  longlong local_6b0;
  undefined4 local_6a8;
  undefined4 local_6a0;
  undefined *local_698;
  ulonglong local_690;
  ulonglong local_688 [2];
  undefined8 *local_678;
  undefined8 local_670;
  undefined4 local_668;
  undefined4 local_664;
  undefined2 local_660;
  longlong *local_658;
  longlong local_650;
  int *local_648;
  undefined8 local_638;
  longlong *plStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined4 local_5f0;
  ulonglong local_5ec;
  undefined8 local_5e4;
  undefined4 local_5dc;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined8 local_594;
  undefined8 local_58c;
  undefined4 local_584;
  undefined1 local_578 [192];
  undefined4 local_4b8;
  undefined1 local_3e8 [256];
  undefined1 local_2e8 [192];
  undefined4 local_228;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_708;
  local_698 = param_8;
  bVar6 = false;
  iVar14 = 0;
  local_688[0] = local_688[0] & 0xffffffff00000000;
  local_638 = 0;
  plStack_630 = (longlong *)0x0;
  local_628 = 0;
  uStack_620 = 0;
  local_618 = 0;
  uStack_610 = 0;
  local_600 = 0;
  local_5f0 = 0;
  local_5ec = 0x26;
  local_5e4 = 0;
  local_5dc = 0;
  local_5d8 = 0;
  uStack_5d0 = 0;
  local_5c8 = 0;
  local_5c0 = 0;
  local_5b8 = 0;
  local_5b0 = 0;
  local_5a8 = 0;
  local_5a0 = 0;
  local_598 = 0;
  local_594 = 0;
  local_58c = 0;
  local_584 = 0;
  iVar19 = *(int *)(*(longlong *)(param_4 + 0x10) + 100);
  iVar10 = *(int *)(*(longlong *)(param_4 + 0x10) + 0x68);
  local_648 = param_5;
  local_650 = param_6;
  local_678 = param_3;
  local_658 = param_2;
  if ((iVar19 - 6U < 2) || (iVar14 = iVar19, iVar19 == 0)) {
    iVar19 = iVar14;
    if (iVar10 == 2) {
      local_608 = FUN_141b9de80();
      uVar17 = 1;
      goto LAB_141b94b1b;
    }
    if (iVar10 == 1) {
      local_608 = FUN_141b9dd40();
      uVar17 = 1;
      goto LAB_141b94b1b;
    }
  }
  uVar17 = 0;
  local_608 = FUN_1404a0ce0();
LAB_141b94b1b:
  local_5f8 = FUN_1409853f0();
  puVar11 = (undefined8 *)(**(code **)(*local_658 + 8))();
  local_664 = 0xffffffff;
  local_660 = CONCAT11(1,uVar17);
  local_670 = *puVar11;
  local_668 = 0;
  local_688[0] = 0;
  local_688[1] = 0;
  FUN_140c63b80(local_2e8,1,&local_670,local_688);
  FRHICommandListBase::CacheActiveRenderTargets(param_1,local_228,local_2e8,local_158);
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar15 + 0x54;
  if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x2a8);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar15 + 0x54;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar11;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar15;
  *(undefined8 **)(param_1 + 8) = puVar15 + 1;
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar15 + 2,local_2e8);
  FUN_14049afe0(param_1,&local_638);
  local_5ec = local_5ec & 0xffffffff00000000;
  local_600 = FUN_140985530();
  cVar8 = FUN_142753b00();
  local_688[0] = *(ulonglong *)(param_6 + 0x60);
  local_6e8 = local_688;
  local_6e0 = param_6;
  if (cVar8 == '\0') {
    local_6b0 = FUN_141b86650(param_1,&local_638,iVar19,param_4);
  }
  else {
    local_6b0 = FUN_141b85ec0();
  }
  uVar7 = local_688[0];
  iVar10 = *param_5;
  local_6a0 = 1;
  local_6a8 = 1;
  if (param_7 == '\0') {
    iVar14 = param_5[1];
    iVar9 = param_5[2] - iVar10;
    fVar20 = (float)(param_5[3] - iVar14);
    local_6c0 = *local_678;
    local_6c8 = fVar20;
  }
  else {
    iVar1 = param_5[1];
    iVar2 = param_5[3];
    iVar9 = param_5[2] - iVar10;
    iVar14 = iVar2 + iVar1 * -2;
    local_6c0 = *local_678;
    fVar20 = (float)(iVar2 - iVar1);
    local_6c8 = (float)(iVar1 - iVar2);
  }
  local_6d0 = (float)iVar9;
  local_6d8 = (float)iVar14;
  local_6b8 = local_688[0];
  local_6e0 = CONCAT44(local_6e0._4_4_,(float)iVar10);
  local_6e8 = (ulonglong *)CONCAT44(local_6e8._4_4_,fVar20);
  DrawRectangle(param_1);
  if (iVar19 == 0) {
    uVar12 = FSceneRenderTargets::Get(param_1);
    local_6e8 = (ulonglong *)CONCAT71(local_6e8._1_7_,1);
    FUN_141cdeb70(uVar12,param_1,4,0x22);
    FUN_141c296a0(local_698,param_1,param_4);
    puVar11 = (undefined8 *)(**(code **)(*local_658 + 8))();
    plVar13 = (longlong *)0x0;
    local_664 = 0xffffffff;
    local_668 = 0;
    local_660 = 0x101;
    local_670 = *puVar11;
    local_698 = (undefined *)0x0;
    local_690 = 0;
    FUN_140c63b80(local_578,1,&local_670,&local_698);
    FRHICommandListBase::CacheActiveRenderTargets(param_1,local_4b8,local_578,local_3e8);
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar15 + 0x54;
    if (*(undefined8 **)(param_1 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x2a8);
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar15 + 0x54;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar11;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar15;
    *(undefined8 **)(param_1 + 8) = puVar15 + 1;
    puVar15[1] = 0;
    *puVar15 = &PTR_FUN_1444d5488;
    FUN_140c63680(puVar15 + 2,local_578);
    FUN_14049afe0(param_1,&local_638);
    local_5f8 = FUN_1409853f0();
    local_608 = FUN_141b9dac0();
    local_600 = FUN_140985530();
    lVar3 = *(longlong *)(param_4 + 0x3090);
    local_5ec = local_5ec & 0xffffffff00000000;
    local_698 = &DAT_146b09c50;
    local_690 = local_690 & 0xffffffff00000000;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x38,local_688,&local_698);
    plVar16 = plVar13;
    if ((int)local_688[0] != -1) {
      plVar16 = (longlong *)((longlong)(int)local_688[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
    }
    local_690 = local_690 & 0xffffffff00000000;
    plVar18 = plVar16 + 2;
    if (plVar16 == (longlong *)0x0) {
      plVar18 = plVar13;
    }
    local_698 = &DAT_146b09b00;
    lVar4 = *plVar18;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x38,local_688,&local_698);
    plVar16 = plVar13;
    if ((int)local_688[0] != -1) {
      plVar16 = (longlong *)((longlong)(int)local_688[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
    }
    plVar18 = plVar16 + 2;
    if (plVar16 == (longlong *)0x0) {
      plVar18 = plVar13;
    }
    lVar3 = *plVar18;
    local_638 = DAT_1464c2720;
    if (lVar4 == 0) {
      local_698 = (undefined *)0x0;
      bVar6 = true;
    }
    else {
      lVar5 = *(longlong *)(lVar4 + 0x48);
      if (*(char *)(lVar5 + 0x28) == '\0') {
        FUN_1419f3850(lVar5);
      }
      plVar13 = *(longlong **)(lVar5 + 0x38);
    }
    uVar12 = 0;
    plStack_630 = plVar13;
    if (bVar6) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_698);
    }
    bVar6 = false;
    if (lVar3 == 0) {
      bVar6 = true;
      local_698 = (undefined *)0x0;
    }
    else {
      lVar5 = *(longlong *)(lVar3 + 0x48);
      if (*(char *)(lVar5 + 0x28) == '\0') {
        FUN_1419f3850(lVar5);
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x40);
    }
    local_618 = uVar12;
    if (bVar6) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_698);
    }
    local_5ec = local_5ec & 0xffffffff00000000;
    FUN_141ed6ac0(param_1,&local_638,2,1);
    lVar5 = *(longlong *)(lVar4 + 0x48);
    uVar12 = *(undefined8 *)(param_4 + 0x20);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    FUN_141aa9800(lVar4,param_1,*(undefined8 *)(lVar5 + 0x38),uVar12);
    uVar12 = FUN_1404a0e20();
    FScreenPS::SetParameters(lVar3,param_1,uVar12,local_650);
    local_6a0 = 1;
    local_6a8 = 1;
    iVar19 = local_648[1];
    iVar14 = local_648[3] - iVar19;
    local_6b8 = uVar7;
    local_6d0 = (float)(local_648[2] - *local_648);
    iVar10 = -iVar14;
    if (param_7 == '\0') {
      iVar10 = iVar14;
    }
    local_6c8 = (float)iVar10;
    iVar10 = iVar14 - iVar19;
    if (param_7 == '\0') {
      iVar10 = iVar19;
    }
    local_6d8 = (float)iVar10;
    local_6c0 = *local_678;
    local_6e0 = CONCAT44(local_6e0._4_4_,(float)*local_648);
    local_6e8 = (ulonglong *)CONCAT44(local_6e8._4_4_,(float)iVar14);
    local_6b0 = lVar4;
    DrawRectangle(param_1);
    FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_578);
  }
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  return;
}



// FUNCTION 141b950e0 FUN_141b950e0 body=1555 status=ok
// SIG undefined FUN_141b950e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b950e0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_208 [32];
  float local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  float local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  uint local_198;
  int local_194;
  undefined8 local_190;
  ulonglong local_188;
  int local_180;
  int local_17c;
  int local_178;
  int iStack_174;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar15 = (longlong *)0x0;
  local_188 = local_188 & 0xffffffff00000000;
  if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x120b) != '\0') {
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar12 + 3;
    local_148 = param_1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar12 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_144e0a8f8;
    *(undefined4 *)(puVar12 + 2) = 0;
    *(undefined2 *)((longlong)puVar12 + 0x14) = 0x101;
    local_158 = FSceneRenderTargets::Get(param_2);
    local_170 = 0;
    uVar11 = *(undefined8 *)(*(longlong *)(local_158 + 0x60) + 0x10);
    puVar9 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
    local_1e0 = CONCAT31(local_1e0._1_3_,1);
    local_1e8 = 0.0;
    FUN_141ad74f0(param_2,*puVar9,uVar11,5);
    local_d8 = 0;
    local_118 = 0;
    plStack_110 = (longlong *)0x0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d0 = 0;
    local_cc = 0x26;
    local_c4 = 0;
    local_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    FUN_14049afe0(param_2,&local_118);
    local_e8 = FUN_1404a0ce0();
    uStack_e0 = FUN_140985530();
    local_d8 = FUN_1409853f0();
    lVar10 = FUN_1419ef210((&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)]);
    local_138 = 0;
    local_140 = &DAT_146b09c50;
    plVar16 = (longlong *)(lVar10 + 0x38);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar16,&local_180,&local_140);
    plVar13 = plVar15;
    if (local_180 != -1) {
      plVar13 = (longlong *)((longlong)local_180 * 0x20 + *plVar16);
    }
    local_128 = 0;
    plVar14 = plVar13 + 2;
    if (plVar13 == (longlong *)0x0) {
      plVar14 = plVar15;
    }
    local_130 = &DAT_146a29420;
    lVar10 = *plVar14;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar16,&local_17c,&local_130);
    plVar13 = plVar15;
    if (local_17c != -1) {
      plVar13 = (longlong *)((longlong)local_17c * 0x20 + *plVar16);
    }
    plVar16 = plVar13 + 2;
    if (plVar13 == (longlong *)0x0) {
      plVar16 = plVar15;
    }
    lVar3 = *plVar16;
    local_118 = DAT_1464c2720;
    if (lVar10 == 0) {
      local_168 = 0;
      plVar16 = (longlong *)0x1;
      plStack_110 = plVar15;
    }
    else {
      lVar4 = *(longlong *)(lVar10 + 0x48);
      if (*(char *)(lVar4 + 0x28) == '\0') {
        FUN_1419f3850(lVar4);
      }
      plStack_110 = *(longlong **)(lVar4 + 0x38);
      plVar16 = plVar15;
    }
    uVar11 = 0;
    if (plVar16 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
    }
    bVar7 = false;
    if (lVar3 == 0) {
      bVar7 = true;
      local_160 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar3 + 0x48);
      if (*(char *)(lVar4 + 0x28) == '\0') {
        FUN_1419f3850(lVar4);
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x40);
    }
    local_f8 = uVar11;
    if (bVar7) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_160);
    }
    local_cc = local_cc & 0xffffffff00000000;
    FUN_141ed6ac0(param_2,&local_118,2,1);
    local_194 = 0;
    if (0 < *(int *)(param_1 + 200)) {
      local_188 = 0;
      do {
        lVar4 = *(longlong *)(param_1 + 0xc0);
        lVar5 = *(longlong *)(*(longlong *)(local_158 + 0x1f0) + 0x10);
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        local_190 = *(undefined8 *)(lVar4 + 0x20 + local_188);
        lVar6 = *(longlong *)(lVar3 + 0x48);
        local_150 = lVar5;
        if (*(char *)(lVar6 + 0x28) == '\0') {
          FUN_1419f3850(lVar6);
        }
        uVar11 = *(undefined8 *)(lVar6 + 0x40);
        FUN_141aa9590(lVar3,param_2,uVar11,local_190);
        local_190 = FUN_141a156e0();
        if (*(short *)(lVar3 + 0xc2) != 0) {
          puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          local_198 = (uint)*(ushort *)(lVar3 + 0xc0);
          puVar9 = puVar12 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar9 = puVar12 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar9;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar12;
          *(undefined8 **)(param_2 + 8) = puVar12 + 1;
          puVar12[1] = 0;
          *puVar12 = &PTR_LAB_143f59c80;
          *(uint *)(puVar12 + 3) = local_198;
          puVar12[2] = uVar11;
          puVar12[4] = lVar5;
        }
        if (*(short *)(lVar3 + 0xc6) != 0) {
          uVar1 = *(ushort *)(lVar3 + 0xc4);
          puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar12 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30);
            puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar9 = puVar12 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar9;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar12;
          *(undefined8 **)(param_2 + 8) = puVar12 + 1;
          puVar12[1] = 0;
          *puVar12 = &PTR_LAB_143f59c70;
          puVar12[4] = local_190;
          puVar12[2] = uVar11;
          *(uint *)(puVar12 + 3) = (uint)uVar1;
        }
        TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_150);
        uVar8 = local_188;
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        uVar2 = *(undefined4 *)(lVar4 + 0x1aac + local_188);
        local_188 = CONCAT44(local_188._4_4_,*(undefined4 *)(lVar4 + 0x1aa8 + local_188));
        local_190 = CONCAT44(local_190._4_4_,*(undefined4 *)(lVar4 + 0x1aa4 + uVar8));
        local_198 = *(uint *)(lVar4 + 0x1aa0 + uVar8);
        puVar9 = puVar12 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar12 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar9;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        local_1a0 = 1;
        local_1a8 = 1;
        **(undefined8 **)(param_2 + 8) = puVar12;
        *(undefined8 **)(param_2 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        *puVar12 = &PTR_LAB_143f59420;
        *(uint *)(puVar12 + 2) = local_198;
        *(undefined4 *)((longlong)puVar12 + 0x14) = (undefined4)local_190;
        *(undefined4 *)((longlong)puVar12 + 0x1c) = (undefined4)local_188;
        *(undefined4 *)(puVar12 + 3) = 0;
        *(undefined4 *)(puVar12 + 4) = uVar2;
        *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
        iStack_174 = *(int *)(lVar4 + 0x1aac + uVar8) - *(int *)(lVar4 + 0x1aa4 + uVar8);
        local_178 = *(int *)(lVar4 + 0x1aa8 + uVar8) - *(int *)(lVar4 + 0x1aa0 + uVar8);
        local_1e8 = (float)iStack_174;
        local_1c0 = CONCAT44(iStack_174,local_178);
        local_1d0 = (float)local_178;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1c8 = local_1e8;
        local_1b8 = local_1c0;
        local_1b0 = lVar10;
        DrawRectangle(param_2,0,0);
        local_188 = uVar8 + 0x30d0;
        local_194 = local_194 + 1;
        param_1 = local_148;
      } while (local_194 < *(int *)(local_148 + 200));
    }
  }
  return;
}



// FUNCTION 141b95700 FUN_141b95700 body=1005 status=ok
// SIG undefined FUN_141b95700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b95700(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  int local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if (param_3[6] != 0) {
    iVar1 = *(int *)(DAT_146a29270 + 4);
    uVar5 = (**(code **)(*param_3 + 0x40))(param_3);
    iVar16 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar15 = 0x20;
    iVar9 = iVar15;
    if (uVar5 != 0) {
      iVar9 = 0x1f - iVar16;
    }
    uVar5 = uVar5 - 1;
    iVar16 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar5 != 0) {
      iVar15 = 0x1f - iVar16;
    }
    iVar16 = (0x20U - iVar15 & ~((iVar9 << 0x1a) >> 0x1f)) + 1;
    lVar6 = FSceneRenderTargets::Get(param_1);
    lVar8 = param_3[6];
    plVar14 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar13 = plVar14 + 1;
    if (*(longlong **)(param_1 + 0x38) < plVar13) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
      plVar14 = (longlong *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      plVar13 = plVar14 + 1;
    }
    *(longlong **)(param_1 + 0x30) = plVar13;
    *plVar14 = lVar8;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar11 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar11 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar7;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar11 + 2) = 1;
    puVar11[3] = plVar14;
    *(undefined4 *)(puVar11 + 4) = 1;
    *(undefined1 *)((longlong)puVar11 + 0x24) = 0;
    iStack_74 = (**(code **)(*param_3 + 0x48))(param_3);
    local_78 = (**(code **)(*param_3 + 0x40))(param_3);
    uVar4 = DAT_1468b5cb0;
    uVar5 = 0;
    uStack_70 = 1;
    uStack_4c = (undefined4)_DAT_1468b5ca8;
    uStack_48 = (undefined4)((ulonglong)_DAT_1468b5ca8 >> 0x20);
    if (0 < iVar16) {
      do {
        uVar10 = uVar5;
        if (iVar1 == 1) {
          uVar10 = 0;
        }
        uVar10 = uVar10 & 0x80000001;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
        }
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        lVar8 = *(longlong *)(lVar6 + 0x170 + (longlong)(int)(1 - uVar10) * 8);
        puVar7 = puVar11 + 1;
        uVar2 = *(undefined8 *)(lVar8 + 0x10);
        if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30);
          puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar11 + 1;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar7;
        *puVar11 = uVar2;
        puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar12 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30);
          puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar12 + 5;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar7;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar12;
        *(undefined8 **)(param_1 + 8) = puVar12 + 1;
        puVar12[1] = 0;
        puVar12[3] = puVar11;
        *puVar12 = &PTR_LAB_143f59470;
        *(undefined4 *)(puVar12 + 2) = 1;
        *(undefined4 *)(puVar12 + 4) = 0;
        *(undefined1 *)((longlong)puVar12 + 0x24) = 0;
        lVar3 = param_3[6];
        plVar13 = *(longlong **)(lVar8 + 0x10);
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar11 + 0xb;
        if (*(undefined8 **)(param_1 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30);
          puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar11 + 0xb;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar7;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar11;
        *(undefined8 **)(param_1 + 8) = puVar11 + 1;
        puVar11[1] = 0;
        *puVar11 = &PTR_LAB_144e0a8e8;
        puVar11[2] = CONCAT44(iStack_74,local_78);
        puVar11[3] = uStack_70;
        puVar11[4] = 1;
        puVar11[5] = 0x600000000;
        *(undefined4 *)(puVar11 + 6) = uStack_4c;
        *(undefined4 *)((longlong)puVar11 + 0x34) = uStack_48;
        *(undefined4 *)(puVar11 + 7) = uVar4;
        *(undefined4 *)((longlong)puVar11 + 0x3c) = uStack_4c;
        puVar11[8] = CONCAT44(uVar4,uStack_48);
        puVar11[9] = plVar13;
        puVar11[10] = lVar3;
        lVar8 = (**(code **)(*plVar13 + 8))(plVar13);
        if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar11[9] + 0x18))(), lVar8 == 0)) {
          (**(code **)(*(longlong *)puVar11[9] + 0x20))();
        }
        lVar8 = (**(code **)(*(longlong *)puVar11[10] + 8))();
        if ((lVar8 == 0) && (lVar8 = (**(code **)(*(longlong *)puVar11[10] + 0x18))(), lVar8 == 0))
        {
          (**(code **)(*(longlong *)puVar11[10] + 0x20))();
        }
        uStack_70 = CONCAT44(uStack_70._4_4_ + 1,(undefined4)uStack_70);
        iVar15 = local_78 / 2;
        local_78 = 1;
        if (0 < iVar15) {
          local_78 = iVar15;
        }
        iVar15 = iStack_74 / 2;
        iStack_74 = 1;
        if (0 < iVar15) {
          iStack_74 = iVar15;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar16);
    }
  }
  return;
}



// FUNCTION 141b95af0 FUN_141b95af0 body=1206 status=ok
// SIG undefined FUN_141b95af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b95af0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_458 [32];
  undefined4 local_438;
  undefined4 local_430;
  undefined4 local_428;
  undefined4 local_420;
  uint local_418;
  uint local_414;
  longlong local_410;
  longlong local_408;
  longlong local_400;
  float local_3f8;
  float local_3f4;
  longlong local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  uint local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  ulonglong local_368;
  uint local_360;
  float local_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined8 local_348 [32];
  undefined4 auStack_248 [4];
  float local_238;
  float local_234;
  undefined8 local_230;
  undefined1 local_218 [352];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  uVar14 = *(uint *)(param_1 + 0x3c) >> 6 & 0xffffff01;
  local_418 = uVar14;
  local_3f0 = param_2;
  local_3e0 = param_1;
  uVar4 = FUN_142741330(local_218);
  local_438 = 1;
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_408,uVar4,&DAT_146b09848);
  local_400 = local_408;
  if (local_408 != 0) {
    LOCK();
    *(int *)(local_408 + 8) = *(int *)(local_408 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_408);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_400);
  uVar8 = 0;
  local_414 = 0;
  local_410 = 0x1170;
  do {
    lVar13 = local_410;
    FUN_142741330(&local_378);
    lVar11 = *(longlong *)(lVar13 + *(longlong *)(param_1 + 8));
    if (lVar11 != 0) {
      lVar12 = *(longlong *)(lVar11 + 0x30);
      local_378 = *(float *)(lVar12 + 0x100) * 0.31830987;
      fStack_374 = *(float *)(lVar12 + 0x104) * 0.31830987;
      fStack_370 = *(float *)(lVar12 + 0x108) * 0.31830987;
      fStack_36c = *(float *)(lVar12 + 0x10c) * 0.31830987;
      lVar12 = *(longlong *)(lVar11 + 0x30);
      local_3c0 = *(uint *)(lVar12 + 0x50) ^ 0x80000000;
      local_368 = CONCAT44(*(undefined4 *)(lVar12 + 0x40),*(undefined4 *)(lVar12 + 0x30)) ^
                  0x8000000080000000;
      if (((*(byte *)(lVar11 + 0x90) & 1) == 0) || (DAT_1464c1f74 <= *(int *)(lVar11 + 0xa0))) {
        plVar6 = *(longlong **)(lVar11 + 0x30);
        if ((*(uint *)(plVar6 + 0x30) >> 3 & 1) == 0) goto LAB_141b95c94;
        uVar7 = 0;
      }
      else {
        plVar6 = *(longlong **)(lVar11 + 0x30);
LAB_141b95c94:
        uVar7 = 1;
      }
      local_430 = *(undefined4 *)(param_2 + 0x388);
      local_438 = CONCAT31(local_438._1_3_,uVar7);
      local_360 = local_3c0;
      (**(code **)(*plVar6 + 0x70))(local_3c0,&local_3f8,param_2);
      local_238 = local_3f4;
      local_234 = -(local_3f4 * local_3f8);
      if ((char)uVar14 != '\0') {
        uVar1 = *(uint *)(lVar11 + 0x58);
        if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x1f0))) {
          lVar11 = *(longlong *)(param_1 + 0x1e8);
          if (*(longlong *)(param_1 + 0x1e8) == 0) {
            lVar11 = param_1 + 0x1d8;
          }
          uVar2 = uVar1;
          if ((int)uVar1 < 0) {
            uVar2 = uVar1 + 0x1f;
          }
          if ((*(uint *)(lVar11 + (longlong)((int)uVar2 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
            lVar11 = *(longlong *)(param_1 + 0x1c8);
            lVar12 = (longlong)(int)uVar1 * 0x70;
            lVar13 = local_410;
            uVar14 = local_418;
            if (0 < *(int *)(lVar12 + 0x18 + lVar11)) {
              lVar13 = **(longlong **)(lVar12 + 0x10 + lVar11);
              plVar6 = *(longlong **)(lVar13 + 0x28);
              if (plVar6 == (longlong *)0x0) {
                plVar6 = (longlong *)**(longlong **)(lVar13 + 0x18);
              }
              lVar5 = (**(code **)(*plVar6 + 0x10))();
              fVar16 = (float)(int)*(undefined8 *)(lVar5 + 0x14);
              fVar15 = (float)(int)((ulonglong)*(undefined8 *)(lVar5 + 0x14) >> 0x20);
              local_230 = *(undefined8 *)(*(longlong *)(lVar13 + 0x28) + 0x10);
              local_35c = (float)FUN_141d92500(lVar13);
              lVar5 = local_3f0;
              lVar9 = 0;
              local_35c = 1.0 / local_35c;
              iVar3 = 4;
              if (*(int *)(lVar12 + 0x18 + lVar11) < 5) {
                iVar3 = *(int *)(lVar12 + 0x18 + lVar11);
              }
              lVar13 = local_410;
              uVar8 = local_414;
              local_358 = fVar16;
              fStack_354 = fVar15;
              fStack_350 = 1.0 / fVar16;
              fStack_34c = 1.0 / fVar15;
              uVar14 = local_418;
              if (0 < iVar3) {
                puVar10 = local_348;
                do {
                  lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x10 + lVar11) + lVar9 * 8);
                  local_420 = *(undefined4 *)(lVar13 + 0x53c);
                  local_428 = *(undefined4 *)(lVar13 + 0x538);
                  local_430 = *(undefined4 *)(lVar13 + 0x534);
                  local_438 = *(undefined4 *)(lVar13 + 0x530);
                  FUN_141d9cb50(lVar13,&local_3b8,lVar5,0);
                  *puVar10 = local_3b8;
                  puVar10[1] = uStack_3b0;
                  puVar10[2] = local_3a8;
                  puVar10[3] = uStack_3a0;
                  *(undefined4 *)(puVar10 + 4) = local_398;
                  *(undefined4 *)((longlong)puVar10 + 0x24) = uStack_394;
                  *(undefined4 *)(puVar10 + 5) = uStack_390;
                  *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_38c;
                  *(undefined4 *)(puVar10 + 6) = local_388;
                  *(undefined4 *)((longlong)puVar10 + 0x34) = uStack_384;
                  *(undefined4 *)(puVar10 + 7) = uStack_380;
                  *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_37c;
                  puVar10 = puVar10 + 8;
                  auStack_248[lVar9] = *(undefined4 *)(lVar13 + 0x3c4);
                  lVar9 = lVar9 + 1;
                  param_2 = local_3f0;
                  param_1 = local_3e0;
                  lVar13 = local_410;
                  uVar8 = local_414;
                  uVar14 = local_418;
                } while (lVar9 < iVar3);
              }
            }
          }
        }
      }
    }
    local_438 = 1;
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_3e8,&local_378,&DAT_146b09848);
    local_410 = local_3e8;
    if (local_3e8 != 0) {
      LOCK();
      *(int *)(local_3e8 + 8) = *(int *)(local_3e8 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3e8);
    uVar8 = uVar8 + 1;
    local_414 = uVar8;
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_2 + ((longlong)(int)uVar8 + 7) * 8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_410);
    local_410 = lVar13 + 8;
    if (2 < uVar8) {
      return;
    }
  } while( true );
}



// FUNCTION 141b95fb0 FUN_141b95fb0 body=251 status=ok
// SIG undefined FUN_141b95fb0(void)

void FUN_141b95fb0(undefined8 param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res10;
  longlong local_108 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_58 [80];
  
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0x3f800000;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3f800000;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0x3f800000;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3f800000;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3f800000;
  FUN_141b45c30(param_2,0);
  uVar1 = FSceneRenderTargets::Get(param_1);
  FUN_141d05b30(uVar1,*(undefined4 *)(param_2 + 0x1a38),param_3,local_58);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res10,&local_f8,&DAT_146a291b8,1);
  local_108[0] = local_res10;
  if (local_res10 != 0) {
    LOCK();
    *(int *)(local_res10 + 8) = *(int *)(local_res10 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_4,local_108);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_108);
  return;
}



// FUNCTION 141b960b0 FUN_141b960b0 body=235 status=ok
// SIG undefined FUN_141b960b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141b960b0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined1 auStack_358 [32];
  undefined8 *local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined1 local_308 [688];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  FUN_141b8b940(local_308);
  local_310 = *(undefined4 *)(param_6 + 1);
  local_318 = *param_6;
  local_320 = param_9;
  local_328 = param_8;
  local_330 = param_7;
  local_338 = &local_318;
  FUN_141b9c610(param_3,local_308,param_4,param_5);
  local_338 = (undefined8 *)CONCAT44(local_338._4_4_,param_2);
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,param_1,local_308,&DAT_146a275f8);
  return param_1;
}



// FUNCTION 141b961a0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x10100;
  local_84 = 0x70001;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b96270 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x10100;
  local_84 = 0x70500;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b96340 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,1,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x50100;
  local_84 = 0x70001;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b96410 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x50400;
  local_84 = 0x70500;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b964e0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<7,0,8,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x50800;
  local_84 = 0x70001;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b965b0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<8,0,8,0,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x800;
  local_84 = 0x80400;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b96680 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<8,0,0,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_84 = 0x80001;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b96750 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x10100;
  local_84 = 0xf0400;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b96820 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x40100;
  local_84 = 0xf0400;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b968f0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,1,0,0,0,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x100;
  local_84 = 0xf0000;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b969c0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,4,5,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x50400;
  local_84 = 0xf0101;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b96a90 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,0,6,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
::CreateRHI(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x60000;
  local_84 = 0xf0100;
  local_80 = 0x1000001;
  local_7c = 0x1000f00;
  local_78 = 0x10000;
  local_74 = 0x1000f;
  local_70 = 0xf000100;
  local_6c = 0x100;
  local_68 = 0xf0001;
  local_64 = 0x1000001;
  local_60 = 0x1000f00;
  local_5c = 0x10000;
  local_58 = 0x1000f;
  local_54 = 0xf000100;
  uVar1 = FBlendStateInitializerRHI::FBlendStateInitializerRHI<8>(local_50,&local_88);
  (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,param_1,uVar1);
  return param_1;
}



// FUNCTION 141b96b60 CreateTask body=378 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FTranscodeTask>::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR__scalar_deleting_destructor__144e0b018;
  *(undefined1 *)(plVar8 + 0x17) = 0;
  plVar8[0x18] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 141b96ce0 FUN_141b96ce0 body=564 status=ok
// SIG undefined FUN_141b96ce0(void)

void FUN_141b96ce0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4e0) + 8);
    *piVar1 = *piVar1 + 1;
    plVar10 = (longlong *)0x0;
    puVar3 = *(undefined8 **)(param_1 + 0x4e0);
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    }
    else {
      pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar7 = TlsGetValue(*pDVar6);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 2) = 0;
          plVar10 = plVar7;
        }
        TlsSetValue(*pDVar6,plVar10);
        plVar7 = plVar10;
      }
      plVar10 = (longlong *)plVar7[1];
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)*plVar7;
        if (plVar10 == (longlong *)0x0) {
          lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
          plVar7[1] = lVar8;
          if (lVar8 == 0) {
            puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar7[1] = (longlong)puVar9;
            lVar8 = 0x1f;
            do {
              puVar2 = puVar9 + 0x20;
              *puVar9 = puVar2;
              lVar8 = lVar8 + -1;
              puVar9 = puVar2;
            } while (lVar8 != 0);
            *puVar2 = 0;
          }
          plVar10 = (longlong *)plVar7[1];
          iVar11 = 0x20;
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
        else {
          iVar11 = 0x20;
          plVar7[1] = (longlong)plVar10;
          *(undefined4 *)(plVar7 + 2) = 0x20;
          *plVar7 = 0;
        }
      }
      else {
        iVar11 = (int)plVar7[2];
      }
      plVar7[1] = *plVar10;
      *(int *)(plVar7 + 2) = iVar11 + -1;
      *plVar10 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar10 + 1) = 0xff;
      local_res20 = 0;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_144e0aa08;
      *(undefined1 *)(plVar10 + 3) = 0;
      plVar10[4] = 0;
      plVar10[2] = (longlong)puVar3;
      lVar8 = plVar10[4];
      piVar1 = (int *)(lVar8 + 0x48);
      if (lVar8 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res10 = lVar8;
      FUN_140445100(plVar10,0,0xff,1,0);
      if (lVar8 != 0) {
        LOCK();
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          FGraphEvent::Recycle(local_res10);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x4e8) = 0;
  }
  return;
}



// FUNCTION 141b96f20 FUN_141b96f20 body=450 status=ok
// SIG undefined FUN_141b96f20(void)

void FUN_141b96f20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1[0xe] == 0) {
    if (*(char *)(param_1 + 10) == '\0') {
      FUN_141b82ea0(*param_1,param_1[1],param_1[2],0,param_1 + 3,param_1[0xb],param_1[0xc],0);
    }
    else {
      FUN_141b830f0(*param_1,param_1[1],param_1[0xf],*(char *)(param_1 + 10),param_1 + 3,0,0,
                    param_1 + 0xf,*(undefined4 *)(param_1 + 0xd),
                    *(undefined4 *)((longlong)param_1 + 0x6c),1);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xd);
    uVar4 = (ulonglong)iVar1;
    iVar7 = *(int *)((longlong)param_1 + 0x6c);
    if (iVar1 <= iVar7) {
      uVar5 = uVar4;
      if (iVar7 < iVar1) goto LAB_141b96f89;
      do {
        psVar2 = (short *)(*(longlong *)param_1[0xe] + uVar5 * 2);
        do {
          if (*psVar2 != 0) break;
          uVar4 = (ulonglong)((int)uVar4 + 1);
          uVar5 = uVar5 + 1;
          psVar2 = psVar2 + 1;
        } while ((longlong)uVar5 <= (longlong)iVar7);
LAB_141b96f89:
        uVar3 = (uint)uVar4;
        if ((int)uVar3 <= iVar7) {
          uVar4 = uVar4 & 0xffffffff;
          uVar6 = uVar3;
          if ((int)uVar3 < iVar7) {
            psVar2 = (short *)(*(longlong *)param_1[0xe] + 2 + uVar5 * 2);
            do {
              uVar6 = (uint)uVar4;
              if (*psVar2 == 0) break;
              uVar6 = uVar6 + 1;
              uVar4 = (ulonglong)uVar6;
              uVar5 = uVar5 + 1;
              psVar2 = psVar2 + 1;
            } while ((longlong)uVar5 < (longlong)iVar7);
          }
          if (*(char *)(param_1 + 10) == '\0') {
            FUN_141b82ea0(*param_1,param_1[1],param_1[2],0,param_1 + 3,param_1[0xb],param_1[0xc],0);
          }
          else {
            FUN_141b830f0(*param_1,param_1[1],param_1[0xf],*(char *)(param_1 + 10),param_1 + 3,0,0,
                          param_1 + 0xf,uVar3,uVar6,1);
          }
          iVar7 = *(int *)((longlong)param_1 + 0x6c);
          uVar4 = (ulonglong)(uVar6 + 1);
          uVar5 = uVar5 + 1;
        }
      } while ((int)uVar4 <= iVar7);
    }
  }
  FUN_141ec9240(param_1[1],param_3);
  return;
}



// FUNCTION 141b970f0 FUN_141b970f0 body=307 status=ok
// SIG undefined FUN_141b970f0(void)

undefined8
FUN_141b970f0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined4 param_8)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *local_res10 [2];
  undefined1 local_res20 [8];
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_60 [72];
  
  local_res10[0] = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_4 + 0xa8) + 0x40))
            (*(longlong **)(param_4 + 0xa8),*(undefined4 *)(param_2 + 0x1a38),local_res20,
             local_res10);
  plVar1 = local_res10[0];
  uVar2 = (**(code **)(*local_res10[0] + 0x1e8))(local_res10[0]);
  if (uVar2 < 2) {
    local_70 = *(undefined4 *)(param_4 + 0x90);
    local_a0 = *param_6;
    local_98 = param_6[1];
    local_90 = *(undefined4 *)(param_6 + 2);
    local_88 = param_6[3];
    if (local_88 != 0) {
      LOCK();
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      UNLOCK();
    }
    local_80 = param_6[4];
    local_78 = *(undefined4 *)(param_6 + 5);
    local_74 = *(undefined4 *)((longlong)param_6 + 0x2c);
    local_68 = param_8;
    local_6c = 0;
    local_a8 = param_2;
    uVar3 = FUN_141b8b820(local_60,param_4,plVar1,param_7,1,*(undefined4 *)(param_2 + 0x1a38),0,0);
    FUN_141b85590(param_1,uVar3,&local_a8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 141b97230 FUN_141b97230 body=370 status=ok
// SIG undefined FUN_141b97230(void)

void FUN_141b97230(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar2 = DAT_1464c2050;
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[3] = uVar2;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar6 + 2) = 0;
  *(undefined4 *)(puVar6 + 4) = 0;
  lVar4 = DAT_1464c20d0;
  uVar3 = DAT_1464c2058;
  iVar1 = DAT_1464c20e0 / 3;
  if (DAT_1464c20d0 == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x8d8,
               L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 7;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x40);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 7;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  puVar6[2] = lVar4;
  *(int *)((longlong)puVar6 + 0x2c) = iVar1;
  *puVar6 = &PTR_LAB_143f489d0;
  puVar6[3] = 0;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x24) = uVar3;
  *(undefined4 *)(puVar6 + 5) = 0;
  *(undefined4 *)(puVar6 + 6) = 1;
  return;
}



// FUNCTION 141b973b0 FUN_141b973b0 body=370 status=ok
// SIG undefined FUN_141b973b0(void)

void FUN_141b973b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar2 = DAT_1464c2090;
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[3] = uVar2;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar6 + 2) = 0;
  *(undefined4 *)(puVar6 + 4) = 0;
  lVar4 = DAT_1464c20d0;
  uVar3 = DAT_1464c2098;
  iVar1 = DAT_1464c20e0 / 3;
  if (DAT_1464c20d0 == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x8d8,
               L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 7;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x40);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 7;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar6;
  *(undefined8 **)(param_1 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  puVar6[2] = lVar4;
  *(int *)((longlong)puVar6 + 0x2c) = iVar1;
  *puVar6 = &PTR_LAB_143f489d0;
  puVar6[3] = 0;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x24) = uVar3;
  *(undefined4 *)(puVar6 + 5) = 0;
  *(undefined4 *)(puVar6 + 6) = 1;
  return;
}



// FUNCTION 141b97530 FUN_141b97530 body=203 status=ok
// SIG undefined FUN_141b97530(void)

undefined1 FUN_141b97530(void)

{
  undefined1 uVar1;
  longlong in_R9;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  local_30 = *(longlong *)(in_R9 + 0x18);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  local_28 = *(undefined8 *)(in_R9 + 0x20);
  local_18 = *(undefined4 *)(in_R9 + 0x30);
  local_20 = *(undefined4 *)(in_R9 + 0x28);
  local_1c = *(undefined4 *)(in_R9 + 0x2c);
  local_14 = 0;
  uVar1 = FUN_141b82ea0();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_30);
  return uVar1;
}



// FUNCTION 141b97600 FUN_141b97600 body=2707 status=ok
// SIG undefined FUN_141b97600(void)

/* WARNING: Removing unreachable block (ram,0x000141b97f68) */
/* WARNING: Removing unreachable block (ram,0x000141b97f75) */
/* WARNING: Removing unreachable block (ram,0x000141b97f81) */

void FUN_141b97600(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 uVar19;
  DWORD *pDVar20;
  undefined8 *puVar21;
  int iVar22;
  ulonglong *puVar23;
  ushort *puVar24;
  undefined2 uVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  longlong *plVar31;
  uint uVar32;
  longlong *plVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  uint local_194;
  uint local_18c;
  undefined1 local_188;
  undefined1 local_187 [3];
  uint local_184;
  undefined8 local_180;
  undefined4 local_178;
  int local_174;
  undefined8 local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140 [3];
  undefined *local_128;
  undefined1 *puStack_120;
  code *local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined *local_c8;
  undefined1 *puStack_c0;
  code *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  iVar36 = *(int *)(param_1 + 0x38);
  lVar28 = (longlong)iVar36;
  plVar27 = (longlong *)0x0;
  local_174 = 0;
  iVar22 = *(int *)(param_6 + 0x6c);
  if (iVar36 <= *(int *)(param_6 + 0x6c)) {
    iVar22 = iVar36;
  }
  if (iVar22 != 0) {
    local_178 = DAT_1464a8210;
    local_res10[0] = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (*(char *)(param_6 + 0x78) == '\0') {
      iVar36 = *(int *)(param_1 + 0x38);
      iVar14 = iVar36 / iVar22;
      if (0 < iVar22) {
        local_168 = param_6 + 0x18;
        plVar31 = plVar27;
        plVar17 = plVar27;
        do {
          local_184 = (uint)((int)plVar31 < iVar36 - iVar14 * iVar22) + (int)plVar17 + iVar14;
          local_174 = local_184 - 1;
          local_180 = FUN_141d6b6f0(param_6);
          pDVar20 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
          plVar18 = TlsGetValue(*pDVar20);
          if (plVar18 == (longlong *)0x0) {
            plVar26 = (longlong *)operator_new(0x18);
            plVar18 = plVar27;
            if (plVar26 != (longlong *)0x0) {
              *plVar26 = 0;
              plVar26[1] = 0;
              *(undefined4 *)(plVar26 + 2) = 0;
              plVar18 = plVar26;
            }
            TlsSetValue(*pDVar20,plVar18);
          }
          plVar26 = (longlong *)plVar18[1];
          if (plVar26 == (longlong *)0x0) {
            if (*plVar18 == 0) {
              lVar28 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar20 + 2);
              plVar18[1] = lVar28;
              if (lVar28 == 0) {
                puVar21 = (undefined8 *)FMemory::Malloc(0x2000,0);
                plVar18[1] = (longlong)puVar21;
                lVar28 = 0x1f;
                do {
                  puVar2 = puVar21 + 0x20;
                  *puVar21 = puVar2;
                  lVar28 = lVar28 + -1;
                  puVar21 = puVar2;
                } while (lVar28 != 0);
                *puVar2 = 0;
              }
            }
            else {
              plVar18[1] = *plVar18;
              *plVar18 = 0;
            }
            plVar26 = (longlong *)plVar18[1];
            iVar15 = 0x20;
            *(undefined4 *)(plVar18 + 2) = 0x20;
          }
          else {
            iVar15 = (int)plVar18[2];
          }
          plVar18[1] = *plVar26;
          *(int *)(plVar18 + 2) = iVar15 + -1;
          plVar18 = (longlong *)FUN_1415914c0(local_140);
          local_d0 = *plVar18;
          *plVar18 = 0;
          *plVar26 = (longlong)&PTR_FUN_143f3edd8;
          *(undefined4 *)(plVar26 + 1) = 0xff;
          *(undefined4 *)((longlong)plVar26 + 0xc) = 1;
          *plVar26 = (longlong)&PTR__scalar_deleting_destructor__144e0b018;
          *(undefined1 *)(plVar26 + 0x17) = 0;
          plVar26[0x18] = local_d0;
          if (local_140[0] != 0) {
            LOCK();
            piVar1 = (int *)(local_140[0] + 0x48);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              FGraphEvent::Recycle();
            }
          }
          uVar4 = local_180;
          FUN_141aad8b0(plVar26 + 2,param_1,local_180,*(undefined8 *)(param_6 + 8),local_168,
                        local_res10,local_res18,local_res20,param_5,(int)plVar17,local_174,0);
          local_148 = plVar26[0x18];
          if (local_148 != 0) {
            LOCK();
            *(int *)(local_148 + 0x48) = *(int *)(local_148 + 0x48) + 1;
            UNLOCK();
          }
          FUN_141ada070(plVar26,0,local_178,1);
          FParallelCommandListSet::AddParallelCommandList(param_6,uVar4,&local_148,0xffffffff);
          if (local_148 != 0) {
            LOCK();
            piVar1 = (int *)(local_148 + 0x48);
            iVar15 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar17 = (longlong *)(ulonglong)local_184;
          uVar29 = (int)plVar31 + 1;
          plVar31 = (longlong *)(ulonglong)uVar29;
        } while ((int)uVar29 < iVar22);
      }
    }
    else {
      puStack_120 = &local_188;
      local_188 = 0;
      local_128 = &DAT_14060d670;
      local_c8 = &DAT_14060d670;
      local_184 = iVar36;
      puStack_c0 = puStack_120;
      lVar16 = FUN_1415d8310(&local_c8,&DAT_146216a38);
      plVar17 = (longlong *)operator_new(0x10,lVar16 + 0x18,1,0);
      plVar31 = plVar27;
      if (plVar17 != (longlong *)0x0) {
        *plVar17 = 0;
        plVar17[1] = 0;
        plVar31 = plVar17;
      }
      lVar16 = plVar31[1];
      iVar14 = (int)lVar16 + iVar36;
      *(int *)(plVar31 + 1) = iVar14;
      if (*(int *)((longlong)plVar31 + 0xc) < iVar14) {
        FUN_141ad3a00(plVar31);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar31 + (longlong)(int)lVar16 * 2),0,lVar28 * 2);
      bVar11 = false;
      bVar12 = false;
      iVar14 = FColorVertexBuffer::GetAllocatedSize(*(undefined8 *)(param_6 + 8));
      iVar15 = FUN_14274f350(*(undefined8 *)(param_6 + 8));
      if ((((*(char *)(param_6 + 0x7a) == '\0') || (iVar14 == 0)) ||
          (*(int *)(param_1 + 0x94) != iVar14)) || (*(int *)(param_1 + 0x90) + 1 != iVar15)) {
        puStack_110 = local_187;
        local_187[0] = 0;
        local_118 = FUN_141ab5cb0;
        local_e8 = &local_res18;
        local_e0 = &local_res20;
        local_b8 = FUN_141ab5cb0;
        local_d8 = param_5;
        local_108 = &LAB_141b90ec0;
        local_a8 = &LAB_141b90ec0;
        plStack_100 = &local_f8;
        local_f8 = param_1;
        local_f0 = plVar31;
        puStack_b0 = puStack_110;
        plStack_a0 = &local_f8;
        FUN_141ac7f60(iVar36,&local_a8,&local_b8,0);
        bVar11 = true;
        bVar12 = true;
      }
      else {
        plVar17 = plVar27;
        if (0 < lVar28) {
          do {
            uVar29 = *(uint *)((longlong)
                               *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)plVar17 * 4) *
                               0xe0 + 0xd0 + *(longlong *)(param_1 + 0x40));
            uVar25 = 0xffff;
            if (uVar29 < 0x10000) {
              uVar25 = (short)uVar29;
            }
            *(undefined2 *)(*plVar31 + (longlong)plVar17 * 2) = uVar25;
            plVar17 = (longlong *)((longlong)plVar17 + 1);
          } while ((longlong)plVar17 < lVar28);
        }
      }
      *(int *)(param_1 + 0x90) = iVar15;
      uVar29 = 0;
      *(int *)(param_1 + 0x94) = iVar14;
      puVar23 = (ulonglong *)*plVar31;
      plVar17 = (longlong *)((longlong)(int)plVar31[1] & 0x7fffffffffffffff);
      if ((ulonglong *)((longlong)(int)plVar31[1] * 2 + (longlong)puVar23) < puVar23) {
        plVar17 = plVar27;
      }
      if (plVar17 != (longlong *)0x0) {
        plVar26 = plVar27;
        plVar18 = plVar27;
        if ((longlong *)0x7 < plVar17) {
          iVar36 = 0;
          iVar15 = 0;
          iVar38 = 0;
          iVar40 = 0;
          iVar14 = 0;
          iVar37 = 0;
          iVar39 = 0;
          iVar41 = 0;
          do {
            uVar3 = *puVar23;
            auVar5._8_4_ = 0;
            auVar5._0_8_ = uVar3;
            auVar5._12_2_ = (short)(uVar3 >> 0x30);
            auVar7._8_2_ = (short)(uVar3 >> 0x20);
            auVar7._0_8_ = uVar3;
            auVar7._10_4_ = auVar5._10_4_;
            auVar9._6_8_ = 0;
            auVar9._0_6_ = auVar7._8_6_;
            plVar26 = plVar26 + 1;
            iVar36 = (uint)(ushort)uVar3 + iVar36;
            iVar15 = (int)CONCAT82(SUB148(auVar9 << 0x40,6),(short)(uVar3 >> 0x10)) + iVar15;
            iVar38 = auVar7._8_4_ + iVar38;
            iVar40 = (auVar5._10_4_ >> 0x10) + iVar40;
            uVar3 = puVar23[1];
            auVar6._8_4_ = 0;
            auVar6._0_8_ = uVar3;
            auVar6._12_2_ = (short)(uVar3 >> 0x30);
            auVar8._8_2_ = (short)(uVar3 >> 0x20);
            auVar8._0_8_ = uVar3;
            auVar8._10_4_ = auVar6._10_4_;
            auVar10._6_8_ = 0;
            auVar10._0_6_ = auVar8._8_6_;
            puVar23 = puVar23 + 2;
            iVar14 = (uint)(ushort)uVar3 + iVar14;
            iVar37 = (int)CONCAT82(SUB148(auVar10 << 0x40,6),(short)(uVar3 >> 0x10)) + iVar37;
            iVar39 = auVar8._8_4_ + iVar39;
            iVar41 = (auVar6._10_4_ >> 0x10) + iVar41;
          } while (plVar26 != (longlong *)((ulonglong)plVar17 & 0xfffffffffffffff8));
          plVar18 = (longlong *)
                    (ulonglong)
                    (uint)(iVar36 + iVar14 + iVar38 + iVar39 + iVar15 + iVar37 + iVar40 + iVar41);
        }
        uVar29 = (uint)plVar18;
        for (; plVar26 != plVar17; plVar26 = (longlong *)((longlong)plVar26 + 1)) {
          uVar3 = *puVar23;
          puVar23 = (ulonglong *)((longlong)puVar23 + 2);
          uVar29 = (int)plVar18 + (uint)(ushort)uVar3;
          plVar18 = (longlong *)(ulonglong)uVar29;
        }
      }
      if ((!bVar11) || (uVar29 != 0)) {
        local_18c = 0;
        if ((int)uVar29 < 2) {
          uVar29 = 1;
        }
        uVar30 = 0xfffffffe;
        local_194 = 0xfffffffe;
        iVar36 = (int)(*(int *)(param_6 + 0x74) + -1 + uVar29) / *(int *)(param_6 + 0x74);
        if (iVar22 <= iVar36) {
          iVar36 = iVar22;
        }
        iVar36 = (int)((uVar29 - 1) + iVar36) / iVar36;
        iVar22 = iVar36 + 2;
        local_174 = (int)(((longlong)iVar22 / 3 + ((longlong)iVar22 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    + iVar22 / 3 + (iVar22 >> 0x1f);
        local_180._0_4_ = 0xffffffff;
        plVar18 = (longlong *)0xffffffff;
        plVar26 = plVar27;
        plVar17 = plVar27;
        if (0 < lVar28) {
          do {
            iVar14 = (int)plVar18;
            iVar22 = (int)plVar26;
            if (bVar11) {
              while( true ) {
                if (lVar28 <= (longlong)plVar27) goto LAB_141b97cc1;
                if (*(short *)(*plVar31 + (longlong)plVar27 * 2) != 0) break;
                plVar17 = (longlong *)(ulonglong)((int)plVar17 + 1);
                plVar27 = (longlong *)((longlong)plVar27 + 1);
              }
            }
            if (lVar28 <= (longlong)plVar27) break;
            uVar35 = (uint)plVar17;
            puVar24 = (ushort *)(*plVar31 + (longlong)plVar27 * 2);
            uVar34 = (uint)*puVar24;
            uVar29 = uVar35;
            uVar32 = uVar35;
            plVar26 = plVar17;
            plVar33 = plVar17;
            while ((int)uVar29 < (int)(local_184 + -1)) {
              uVar29 = (uint)plVar26;
              uVar32 = (uint)plVar33;
              if (iVar36 <= (int)uVar34) break;
              uVar29 = uVar29 + 1;
              plVar26 = (longlong *)(ulonglong)uVar29;
              plVar27 = (longlong *)((longlong)plVar27 + 1);
              puVar24 = puVar24 + 1;
              if ((!bVar11) || (*puVar24 != 0)) {
                uVar34 = uVar34 + *puVar24;
                plVar33 = plVar26;
              }
              uVar32 = (uint)plVar33;
            }
            if ((uVar34 == 0) && (bVar11)) {
              plVar26 = (longlong *)(ulonglong)local_18c;
              plVar17 = plVar18;
            }
            else if ((int)uVar30 < iVar14) {
              plVar26 = (longlong *)(ulonglong)uVar34;
              local_194 = uVar32;
              local_18c = uVar34;
              uVar30 = uVar32;
              local_180._0_4_ = uVar35;
            }
            else {
              local_170 = FUN_141d6b6f0(param_6);
              local_168 = *(undefined8 *)(param_6 + 8);
              bVar11 = bVar12;
              if ((int)uVar34 < local_174) {
                plVar18 = (longlong *)TGraphTask<FTranscodeTask>::CreateTask(local_98,0,local_178);
                uVar4 = local_170;
                plVar17 = (longlong *)0x0;
                if (bVar12) {
                  plVar17 = plVar31;
                }
                FUN_141aad8b0(*plVar18 + 0x10,param_1,local_170,local_168,param_6 + 0x18,local_res10
                              ,local_res18,local_res20,param_5,(uint)local_180,uVar32,plVar17);
                lVar28 = *plVar18;
                lVar13 = plVar18[2];
                lVar16 = plVar18[1];
                local_160 = *(longlong *)(lVar28 + 0xc0);
                if (local_160 != 0) {
                  LOCK();
                  *(int *)(local_160 + 0x48) = *(int *)(local_160 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_141ada070(lVar28,lVar16,(int)lVar13,1);
                iVar22 = local_18c + uVar34;
                if ((int)(local_18c + uVar34) < 2) {
                  iVar22 = 1;
                }
                FParallelCommandListSet::AddParallelCommandList(param_6,uVar4,&local_160,iVar22);
                local_18c = 0;
                local_180._0_4_ = 0xffffffff;
                local_194 = 0xfffffffe;
                plVar17 = (longlong *)0xffffffff;
                plVar26 = (longlong *)0x0;
                uVar30 = local_194;
                if (local_160 != 0) {
                  LOCK();
                  piVar1 = (int *)(local_160 + 0x48);
                  iVar22 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    FGraphEvent::Recycle();
                    plVar17 = (longlong *)(ulonglong)(uint)local_180;
                  }
                }
              }
              else {
                plVar26 = (longlong *)TGraphTask<FTranscodeTask>::CreateTask(local_80,0,local_178);
                plVar18 = (longlong *)0x0;
                if (bVar12) {
                  plVar18 = plVar31;
                }
                FUN_141aad8b0(*plVar26 + 0x10,param_1,local_170,local_168,param_6 + 0x18,local_res10
                              ,local_res18,local_res20,param_5,(uint)local_180,local_194,plVar18);
                lVar28 = *plVar26;
                lVar13 = plVar26[2];
                lVar16 = plVar26[1];
                local_158 = *(longlong *)(lVar28 + 0xc0);
                if (local_158 != 0) {
                  LOCK();
                  *(int *)(local_158 + 0x48) = *(int *)(local_158 + 0x48) + 1;
                  UNLOCK();
                }
                FUN_141ada070(lVar28,lVar16,(int)lVar13,1);
                if ((int)local_18c < 2) {
                  local_18c = 1;
                }
                FParallelCommandListSet::AddParallelCommandList
                          (param_6,local_170,&local_158,local_18c);
                plVar26 = (longlong *)(ulonglong)uVar34;
                local_194 = uVar32;
                local_18c = uVar34;
                uVar30 = uVar32;
                local_180._0_4_ = uVar35;
                if (local_158 != 0) {
                  LOCK();
                  piVar1 = (int *)(local_158 + 0x48);
                  iVar22 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    FGraphEvent::Recycle();
                  }
                }
              }
            }
            iVar14 = (int)plVar17;
            iVar22 = (int)plVar26;
            lVar28 = (longlong)(int)local_184;
            plVar27 = (longlong *)((longlong)plVar27 + 1);
            plVar18 = plVar17;
            plVar17 = (longlong *)(ulonglong)(uVar29 + 1);
          } while ((longlong)plVar27 < lVar28);
LAB_141b97cc1:
          if (iVar14 <= (int)uVar30) {
            uVar19 = FUN_141d6b6f0(param_6);
            uVar4 = *(undefined8 *)(param_6 + 8);
            plVar17 = (longlong *)TGraphTask<FTranscodeTask>::CreateTask(local_68,0,local_178);
            plVar27 = (longlong *)0x0;
            if (bVar12) {
              plVar27 = plVar31;
            }
            FUN_141aad8b0(*plVar17 + 0x10,param_1,uVar19,uVar4,param_6 + 0x18,local_res10,
                          local_res18,local_res20,param_5,(uint)local_180,local_194,plVar27);
            lVar28 = *plVar17;
            lVar13 = plVar17[2];
            lVar16 = plVar17[1];
            local_150 = *(longlong *)(lVar28 + 0xc0);
            if (local_150 != 0) {
              LOCK();
              *(int *)(local_150 + 0x48) = *(int *)(local_150 + 0x48) + 1;
              UNLOCK();
            }
            FUN_141ada070(lVar28,lVar16,(int)lVar13,1);
            if (iVar22 < 2) {
              iVar22 = 1;
            }
            FParallelCommandListSet::AddParallelCommandList(param_6,uVar19,&local_150,iVar22);
            if (local_150 != 0) {
              LOCK();
              piVar1 = (int *)(local_150 + 0x48);
              iVar36 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar36 == 1) {
                FGraphEvent::Recycle();
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141b980f0 FUN_141b980f0 body=277 status=ok
// SIG undefined FUN_141b980f0(void)

void FUN_141b980f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141b96f20(param_1 + 2,param_3,param_1 + 0x18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_141591a60(param_1[0x18],param_2,param_3);
  *param_1 = &PTR__scalar_deleting_destructor__144e0b018;
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141b98210 FUN_141b98210 body=266 status=ok
// SIG undefined FUN_141b98210(void)

void FUN_141b98210(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  puVar3 = (undefined8 *)param_1[2];
  piVar1 = (int *)(puVar3 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144e0aa08;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141b98320 ExecuteTask body=317 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FRenderMobileBasePassDynamicDataThreadTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141bba9c0(param_1[2],param_1[3],param_1[4],param_1 + 5,*(undefined4 *)(param_1 + 0xd),
                *(undefined1 *)((longlong)param_1 + 0x6c),*(undefined4 *)(param_1 + 0xc),
                *(undefined4 *)((longlong)param_1 + 100));
  FUN_141ec9240(param_1[3],param_1 + 0xf);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_141591a60(param_1[0xf],param_2,param_3);
  *param_1 = &PTR_FUN_144e0aa88;
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 141b98460 FUN_141b98460 body=2153 status=ok
// SIG undefined FUN_141b98460(void)

void FUN_141b98460(undefined8 *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  byte bVar5;
  float fVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_res8;
  float local_resc;
  undefined4 uStack_11c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  
  (**(code **)(**(longlong **)(param_2 + 0x30) + 0x68))();
  uStack_11c = 0x3f800000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((*(byte *)(*(longlong *)(param_2 + 0x30) + 0x180) & 1) != 0) {
    uStack_11c = 0xbf800000;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_11c;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[6] = local_fc;
  param_1[4] = local_108;
  *(undefined4 *)(param_1 + 5) = local_100;
  *(undefined4 *)(param_1 + 7) = local_f4;
  param_1[8] = local_f0;
  param_1[9] = uStack_e8;
  *(undefined4 *)(param_1 + 10) = local_e0;
  *(undefined4 *)((longlong)param_1 + 0x54) = local_dc;
  param_1[0x1a] = *(undefined8 *)(local_d8 + 0x30);
  if (((*(byte *)(param_2 + 0x90) & 1) == 0) || (DAT_1464c1f74 <= *(int *)(param_2 + 0xa0))) {
    plVar10 = *(longlong **)(param_2 + 0x30);
    if ((*(uint *)(plVar10 + 0x30) >> 3 & 1) != 0) {
      uVar13 = 0;
      goto LAB_141b985a0;
    }
  }
  else {
    plVar10 = *(longlong **)(param_2 + 0x30);
  }
  uVar13 = 1;
LAB_141b985a0:
  (**(code **)(*plVar10 + 0x70))
            (plVar10,&local_res8,param_3,*(undefined4 *)(param_3 + 0x1a38),uVar13,
             *(undefined4 *)(param_3 + 0x388));
  uVar12 = (ulonglong)_tls_index;
  *(float *)(param_1 + 0xc) = local_resc;
  *(float *)((longlong)param_1 + 100) = -(local_resc * local_res8);
  iVar15 = *(int *)(*(longlong *)(param_2 + 0x30) + 0x148);
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
  if ((*(int *)(lVar11 + 0x38) < DAT_146a2dee8) &&
     (_Init_thread_header(&DAT_146a2dee8), DAT_146a2dee8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar10 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
    lVar9 = 0;
    if (plVar10 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar10 + 0x38))(plVar10);
    }
    DAT_146a2dee0 = lVar9;
    _Init_thread_footer(&DAT_146a2dee8);
  }
  if ((DAT_146a2dee0 != 0) && (*(int *)(DAT_146a2dee0 + 4) == 0)) {
    iVar15 = -1;
  }
  *(float *)(param_1 + 0xe) = (float)(iVar15 == 0);
  *(float *)((longlong)param_1 + 0x74) = (float)(iVar15 == 1);
  *(float *)(param_1 + 0xf) = (float)(iVar15 == 2);
  *(float *)((longlong)param_1 + 0x7c) = (float)(iVar15 == 3);
  if ((*(byte *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 0x40) != 0) {
    FUN_141d9d740();
  }
  if (((*(uint *)(*(longlong *)(param_2 + 0x30) + 0x180) >> 5 & 1) == 0) &&
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x170) == 0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  *(uint *)(param_1 + 0x10) = uVar14;
  if (((*(uint *)(*(longlong *)(param_2 + 0x30) + 0x180) >> 4 & 1) == 0) ||
     ((*(byte *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 0x40) == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 3;
  }
  *(uint *)(param_1 + 0x10) = uVar8 | uVar14;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0x114);
  if ((*(int *)(lVar11 + 0x38) < DAT_146a2def8) &&
     (_Init_thread_header(&DAT_146a2def8), DAT_146a2def8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar10 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ContactShadows");
    lVar11 = 0;
    if (plVar10 != (longlong *)0x0) {
      lVar11 = (**(code **)(*plVar10 + 0x38))(plVar10);
    }
    DAT_146a2def0 = lVar11;
    _Init_thread_footer(&DAT_146a2def8);
  }
  lVar11 = DAT_146a2def0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (((lVar11 != 0) && (*(int *)(lVar11 + 4) != 0)) &&
     ((*(uint *)(*(longlong *)(param_3 + 0x10) + 0x28) & 0x10000000) != 0)) {
    fVar16 = *(float *)(*(longlong *)(param_2 + 0x30) + 300);
    *(float *)(param_1 + 0xb) = fVar16;
    if ((*(byte *)(*(longlong *)(param_2 + 0x30) + 0x130) & 1) == 0) {
      fVar16 = fVar16 + fVar16;
    }
    else {
      fVar16 = -fVar16;
    }
    *(float *)(param_1 + 0xb) = fVar16;
  }
  lVar11 = *(longlong *)(param_2 + 0x30);
  if ((*(byte *)(lVar11 + 0x180) & 1) == 0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar11 + 0xcc);
    fVar21 = 1.0 / (float)*(undefined8 *)(lVar11 + 0xd8);
    fVar6 = *(float *)(lVar11 + 0xd4);
    fVar22 = 1.0 / (float)((ulonglong)*(undefined8 *)(lVar11 + 0xd8) >> 0x20);
    fVar16 = *(float *)(lVar11 + 0xb4);
    fVar23 = 1.0 / *(float *)(lVar11 + 0xe0);
    fVar1 = *(float *)(lVar11 + 0xb0);
    fVar2 = *(float *)(lVar11 + 0xbc);
    fVar3 = *(float *)(lVar11 + 0xb8);
    fVar19 = fVar3 + fVar3;
    auVar7._12_4_ = 0;
    auVar7._0_12_ = *(undefined1 (*) [12])(lVar11 + 0xc0);
    *(undefined1 (*) [16])(param_1 + 0x12) = auVar7;
    fVar17 = -fVar16 + -fVar16;
    fVar18 = -fVar3 + -fVar3;
    fVar20 = fVar1 + fVar1;
    *(float *)(param_1 + 0x14) = ((fVar16 * fVar17 - fVar19 * fVar3) + 1.0) * fVar21;
    *(float *)((longlong)param_1 + 0xa4) = (fVar2 * fVar19 - fVar17 * fVar1) * fVar21;
    *(float *)(param_1 + 0x15) = (fVar2 * fVar17 + fVar19 * fVar1) * fVar21;
    *(float *)((longlong)param_1 + 0xac) = -1.0 / (1.0 - fVar21 * (float)uVar4);
    fVar17 = -fVar1 + -fVar1;
    fVar19 = fVar16 + fVar16;
    *(float *)(param_1 + 0x16) = (fVar18 * fVar2 + fVar20 * fVar16) * fVar22;
    *(float *)((longlong)param_1 + 0xb4) = ((fVar3 * fVar18 - fVar20 * fVar1) + 1.0) * fVar22;
    *(float *)(param_1 + 0x17) = (fVar20 * fVar2 - fVar18 * fVar16) * fVar22;
    *(float *)((longlong)param_1 + 0xbc) = -1.0 / (1.0 - fVar22 * (float)((ulonglong)uVar4 >> 0x20))
    ;
    *(float *)(param_1 + 0x18) = (fVar19 * fVar2 - fVar17 * fVar3) * fVar23;
    *(float *)((longlong)param_1 + 0xc4) = (fVar17 * fVar2 + fVar19 * fVar3) * fVar23;
    *(float *)(param_1 + 0x19) = ((fVar17 * fVar1 - fVar19 * fVar16) + 1.0) * fVar23;
    *(float *)((longlong)param_1 + 0xcc) = -1.0 / (1.0 - fVar23 * fVar6);
  }
  *(uint *)((longlong)param_1 + 0x8c) = *(byte *)(*(longlong *)(param_2 + 0x30) + 0x1bc) & 1;
  lVar11 = *(longlong *)(param_2 + 0x30);
  if (((1 < (byte)(*(char *)(lVar11 + 0x188) - 1U)) && (*(char *)(lVar11 + 0x188) != '\x03')) ||
     (1.0 < *(float *)(param_3 + 0x3cc) || *(float *)(param_3 + 0x3cc) == 1.0)) {
    bVar5 = *(byte *)(lVar11 + 0x189);
  }
  else {
    if (*(char *)(param_3 + 0x1203) != '\0') {
      fVar16 = *(float *)(lVar11 + 0x110);
      *(float *)(param_1 + 2) = fVar16 * *(float *)(param_1 + 2);
      *(float *)((longlong)param_1 + 0x14) = fVar16 * *(float *)((longlong)param_1 + 0x14);
      *(float *)(param_1 + 3) = fVar16 * *(float *)(param_1 + 3);
      lVar11 = *(longlong *)(param_2 + 0x30);
    }
    fVar16 = (float)FUN_141b9c370(param_3,lVar11);
    *(float *)(param_1 + 2) = fVar16 * *(float *)(param_1 + 2);
    *(float *)((longlong)param_1 + 0x14) = fVar16 * *(float *)((longlong)param_1 + 0x14);
    *(float *)(param_1 + 3) = fVar16 * *(float *)(param_1 + 3);
    bVar5 = *(byte *)(*(longlong *)(param_2 + 0x30) + 0x189);
  }
  *(uint *)((longlong)param_1 + 0x84) = (uint)bVar5;
  return;
}



// FUNCTION 141b98cd0 FUN_141b98cd0 body=11302 status=ok
// SIG undefined FUN_141b98cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b98cd0(longlong param_1,int param_2,uint param_3,undefined8 *param_4)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ulonglong *puVar25;
  longlong lVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_708 [32];
  undefined8 *local_6e8;
  undefined4 local_6e0;
  undefined4 local_6d8;
  float local_6d0;
  float local_6c8;
  undefined8 *local_6c0;
  undefined8 *local_6b8;
  longlong local_6b0;
  undefined4 local_6a8;
  undefined4 local_6a0;
  uint local_698;
  undefined8 *local_690;
  uint local_688;
  int local_684;
  uint local_680;
  int local_67c;
  uint local_678;
  uint local_674;
  int local_670;
  undefined8 local_668;
  uint local_660;
  int local_65c;
  uint local_658;
  undefined8 *local_650;
  undefined8 local_648;
  longlong *local_640;
  uint local_638 [2];
  longlong local_630;
  undefined8 local_628;
  undefined8 local_620;
  uint local_618;
  uint uStack_614;
  int local_610;
  int local_60c;
  int local_608;
  int local_604;
  int local_600;
  int local_5fc;
  uint local_5f8 [2];
  int local_5f0 [2];
  int local_5e8 [2];
  int local_5e0 [2];
  longlong local_5d8;
  undefined8 local_5d0;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  longlong local_5c0;
  longlong local_5b8;
  undefined1 local_5b0 [8];
  longlong local_5a8;
  undefined1 local_5a0 [8];
  longlong local_598;
  undefined1 local_590 [8];
  longlong local_588;
  undefined1 local_580 [8];
  undefined1 local_578 [8];
  longlong local_570;
  undefined1 local_568 [8];
  longlong local_560;
  undefined1 local_558 [8];
  longlong local_550;
  undefined1 local_548 [8];
  longlong local_540;
  undefined1 local_538 [8];
  longlong local_530;
  undefined1 local_528 [8];
  undefined8 local_520;
  uint local_518 [2];
  undefined2 local_510 [4];
  uint local_508;
  undefined8 local_504;
  undefined8 uStack_4fc;
  undefined8 local_4f4;
  undefined8 uStack_4ec;
  undefined8 local_4e4;
  undefined4 local_4dc;
  int local_4d8;
  undefined8 local_4d4;
  undefined8 uStack_4cc;
  undefined8 local_4c4;
  undefined8 uStack_4bc;
  uint local_4b4;
  undefined8 local_4b0;
  int local_4a8;
  undefined8 local_4a4;
  undefined8 uStack_49c;
  undefined8 local_494;
  undefined8 uStack_48c;
  uint local_484;
  undefined8 local_480;
  uint local_478;
  undefined8 local_474;
  undefined8 uStack_46c;
  undefined8 local_464;
  undefined8 uStack_45c;
  uint local_454;
  undefined8 local_450;
  longlong local_448;
  undefined8 local_440;
  int local_438;
  undefined4 local_434;
  int local_430;
  undefined *local_428;
  undefined4 local_420;
  undefined *local_418;
  undefined4 local_410;
  undefined *local_408;
  undefined4 local_400;
  undefined *local_3f8;
  undefined4 local_3f0;
  undefined *local_3e8;
  undefined4 local_3e0;
  undefined *local_3d8;
  undefined4 local_3d0;
  undefined *local_3c8;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8 [24];
  undefined1 local_390 [24];
  undefined1 local_378 [24];
  undefined1 local_360 [24];
  undefined1 local_348 [24];
  undefined1 local_330 [24];
  undefined1 local_318 [24];
  undefined1 local_300 [24];
  undefined1 local_2e8 [24];
  undefined1 local_2d0 [24];
  undefined8 local_2b8;
  longlong *plStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  longlong *local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  uint local_268;
  int local_264 [16];
  undefined1 auStack_224 [4];
  undefined8 local_220;
  undefined4 local_218;
  ulonglong local_214;
  undefined8 local_20c;
  undefined4 local_204;
  undefined8 local_1f8;
  longlong *plStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint local_1a8;
  int local_1a4 [16];
  undefined1 auStack_164 [4];
  undefined8 local_160;
  undefined4 local_158;
  ulonglong local_154;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  int local_e4 [16];
  undefined1 auStack_a4 [4];
  undefined8 local_a0;
  undefined4 local_98;
  ulonglong local_94;
  undefined8 local_8c;
  undefined4 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_708;
  local_638[0] = 0;
  local_698 = 0;
  local_438 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> local_438 == 0; local_438 = local_438 + -1) {
    }
  }
  iVar22 = 0x20;
  iVar18 = iVar22;
  if (param_3 != 0) {
    iVar18 = 0x1f - local_438;
  }
  uVar8 = param_3 - 1;
  local_430 = 0x1f;
  if (uVar8 != 0) {
    for (; uVar8 >> local_430 == 0; local_430 = local_430 + -1) {
    }
  }
  if (uVar8 != 0) {
    iVar22 = 0x1f - local_430;
  }
  local_684 = (0x20U - iVar22 & ~((iVar18 << 0x1a) >> 0x1f)) + 1;
  local_670 = *(int *)(DAT_146a29270 + 4);
  local_660 = param_3;
  local_658 = param_2;
  local_650 = param_4;
  lVar10 = FSceneRenderTargets::Get(param_1);
  local_690 = (undefined8 *)(*(longlong *)(lVar10 + 0x170) + 8);
  local_680 = 0;
  fVar28 = (float)(int)param_3;
  plVar24 = local_640;
  plVar17 = local_640;
  local_5d8 = (longlong)param_2;
  do {
    local_6e0 = CONCAT31(local_6e0._1_3_,1);
    local_6e8 = (undefined8 *)0x0;
    SetRenderTarget(param_1,*local_690,0,local_680);
    local_268 = *(uint *)(param_1 + 0x98);
    uVar19 = 0;
    local_278 = 0;
    local_2b8 = 0;
    plStack_2b0 = (longlong *)0x0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = (longlong *)0x0;
    uStack_290 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_264[3] = 0;
    local_264[4] = 0;
    local_264[5] = 0;
    local_264[6] = 0;
    local_270 = 0;
    local_26c = 0x26;
    local_264[0] = 0;
    local_264[1] = 0;
    local_264[2] = 0;
    local_264[7] = 0;
    local_264[8] = 0;
    local_264[9] = 0;
    local_264[10] = 0;
    local_264[0xb] = 0;
    local_264[0xc] = 0;
    local_264[0xd] = 0;
    local_264[0xe] = 0;
    stack0xfffffffffffffdd8 = 0;
    local_220 = 0;
    local_218 = 0;
    local_214 = 0;
    local_20c = 0;
    local_204 = 0;
    uVar23 = uVar19;
    if (local_268 != 0) {
      do {
        lVar10 = *(longlong *)(param_1 + 0xa0 + uVar23 * 0x18);
        if (lVar10 == 0) {
          local_264[uVar23] = 0;
        }
        else {
          local_264[uVar23] = *(int *)(lVar10 + 0x3c);
          local_264[uVar23 + 8] = *(int *)(lVar10 + 0x40);
        }
        auStack_224[uVar23] = *(undefined1 *)(param_1 + 0xb0 + uVar23 * 0x18);
        *(undefined1 *)((longlong)&local_220 + uVar23 + 4) =
             *(undefined1 *)(param_1 + 0xb1 + uVar23 * 0x18);
        if (local_264[uVar23] != 0) {
          local_204 = CONCAT22(local_204._2_2_,*(undefined2 *)(lVar10 + 0x38));
        }
        uVar8 = (int)uVar23 + 1;
        uVar23 = (ulonglong)uVar8;
      } while (uVar8 < local_268);
    }
    lVar10 = *(longlong *)(param_1 + 0x160);
    if (lVar10 == 0) {
      local_214 = local_214 & 0xffffffff00000000;
    }
    else {
      uVar19 = (ulonglong)*(uint *)(lVar10 + 0x3c);
      local_214 = *(ulonglong *)(lVar10 + 0x3c);
    }
    local_20c = *(undefined8 *)(param_1 + 0x168);
    if ((int)uVar19 != 0) {
      local_204 = CONCAT22(local_204._2_2_,*(undefined2 *)(lVar10 + 0x38));
    }
    if (DAT_146864320 == 0) {
      if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
        cVar7 = IsInRenderingThread();
        if (cVar7 == '\0') {
          FScopedEvent::FScopedEvent(local_528);
          plVar14 = (longlong *)FUN_14049e3d0(local_3a8,0,0xff);
          lVar10 = *plVar14;
          *(undefined1 **)(lVar10 + 0x10) = &LAB_140985690;
          *(undefined1 **)(lVar10 + 0x18) = local_528;
          lVar10 = *plVar14;
          lVar26 = plVar14[2];
          lVar11 = plVar14[1];
          lVar16 = *(longlong *)(lVar10 + 0x28);
          piVar1 = (int *)(lVar16 + 0x48);
          if (lVar16 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_530 = lVar16;
          FUN_1404a4fe0(lVar10,lVar11,(int)lVar26,1);
          if (lVar16 != 0) {
            LOCK();
            iVar22 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              FGraphEvent::Recycle(local_530);
            }
          }
          FScopedEvent::~FScopedEvent(local_528);
        }
        else {
          lVar10 = operator_new(0x38);
          if (lVar10 == 0) {
            DAT_146864320 = 0;
          }
          else {
            DAT_146864320 =
                 TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                 ::FStaticStateResource::FStaticStateResource(lVar10);
          }
        }
      }
      else {
        lVar10 = operator_new(0x38);
        if (lVar10 == 0) {
          LOCK();
          if (DAT_146864320 == 0) {
            DAT_146864320 = 0;
          }
          UNLOCK();
        }
        else {
          lVar10 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar10);
          LOCK();
          if (DAT_146864320 != 0) {
            lVar10 = DAT_146864320;
          }
          DAT_146864320 = lVar10;
          UNLOCK();
        }
      }
    }
    uStack_280 = *(undefined8 *)(DAT_146864320 + 0x30);
    if (DAT_146864318 == 0) {
      if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
        cVar7 = IsInRenderingThread();
        if (cVar7 == '\0') {
          FScopedEvent::FScopedEvent(local_578);
          plVar14 = (longlong *)FUN_14049e3d0(local_390,0,0xff);
          lVar10 = *plVar14;
          *(undefined1 **)(lVar10 + 0x10) = &LAB_140985680;
          *(undefined1 **)(lVar10 + 0x18) = local_578;
          lVar10 = *plVar14;
          lVar26 = plVar14[2];
          lVar11 = plVar14[1];
          lVar16 = *(longlong *)(lVar10 + 0x28);
          piVar1 = (int *)(lVar16 + 0x48);
          if (lVar16 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_5c0 = lVar16;
          FUN_1404a4fe0(lVar10,lVar11,(int)lVar26,1);
          if (lVar16 != 0) {
            LOCK();
            iVar22 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              FGraphEvent::Recycle(local_5c0);
            }
          }
          FScopedEvent::~FScopedEvent(local_578);
        }
        else {
          lVar10 = operator_new(0x38);
          if (lVar10 == 0) {
            DAT_146864318 = 0;
          }
          else {
            DAT_146864318 =
                 TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                 ::FStaticStateResource::FStaticStateResource(lVar10);
          }
        }
      }
      else {
        lVar10 = operator_new(0x38);
        if (lVar10 == 0) {
          LOCK();
          if (DAT_146864318 == 0) {
            DAT_146864318 = 0;
          }
          UNLOCK();
        }
        else {
          lVar10 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar10);
          LOCK();
          if (DAT_146864318 != 0) {
            lVar10 = DAT_146864318;
          }
          DAT_146864318 = lVar10;
          UNLOCK();
        }
      }
    }
    local_278 = *(undefined8 *)(DAT_146864318 + 0x30);
    if (DAT_146a495f8 == 0) {
      if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
        cVar7 = IsInRenderingThread();
        if (cVar7 == '\0') {
          FScopedEvent::FScopedEvent(local_5b0);
          plVar14 = (longlong *)FUN_14049e3d0(local_378,0,0xff);
          lVar10 = *plVar14;
          *(undefined1 **)(lVar10 + 0x10) = &LAB_141b9e7f0;
          *(undefined1 **)(lVar10 + 0x18) = local_5b0;
          lVar10 = *plVar14;
          lVar26 = plVar14[2];
          lVar11 = plVar14[1];
          lVar16 = *(longlong *)(lVar10 + 0x28);
          piVar1 = (int *)(lVar16 + 0x48);
          if (lVar16 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_5b8 = lVar16;
          FUN_1404a4fe0(lVar10,lVar11,(int)lVar26,1);
          if (lVar16 != 0) {
            LOCK();
            iVar22 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              FGraphEvent::Recycle(local_5b8);
            }
          }
          FScopedEvent::~FScopedEvent(local_5b0);
        }
        else {
          lVar10 = operator_new(0x38);
          if (lVar10 == 0) {
            DAT_146a495f8 = 0;
          }
          else {
            DAT_146a495f8 =
                 TStaticStateRHI<TStaticBlendState<15,0,0,6,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                 ::FStaticStateResource::FStaticStateResource(lVar10);
          }
        }
      }
      else {
        lVar10 = operator_new(0x38);
        if (lVar10 == 0) {
          LOCK();
          if (DAT_146a495f8 == 0) {
            DAT_146a495f8 = 0;
          }
          UNLOCK();
        }
        else {
          lVar10 = TStaticStateRHI<TStaticBlendState<15,0,0,6,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                   ::FStaticStateResource::FStaticStateResource(lVar10);
          LOCK();
          if (DAT_146a495f8 != 0) {
            lVar10 = DAT_146a495f8;
          }
          DAT_146a495f8 = lVar10;
          UNLOCK();
        }
      }
    }
    local_648 = (undefined8 *)CONCAT44(param_3,param_3);
    local_288 = *(undefined8 *)(DAT_146a495f8 + 0x30);
    puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar20 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar20 + 5;
    }
    lVar10 = local_5d8;
    *(undefined8 **)(param_1 + 0x30) = puVar13;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    local_420 = 0;
    **(undefined8 **)(param_1 + 8) = puVar20;
    *(undefined8 **)(param_1 + 8) = puVar20 + 1;
    puVar20[1] = 0;
    *puVar20 = &PTR_LAB_143f59420;
    puVar20[2] = 0;
    *(undefined4 *)(puVar20 + 3) = 0;
    local_428 = &DAT_146b09c50;
    *(uint *)((longlong)puVar20 + 0x1c) = param_3;
    *(uint *)(puVar20 + 4) = param_3;
    *(undefined4 *)((longlong)puVar20 + 0x24) = 0x3f800000;
    lVar11 = FUN_1419ef210((&DAT_1464c9c48)[local_5d8]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar11 + 0x38,&local_610,&local_428);
    if (local_610 == -1) {
      lVar11 = 0;
    }
    else {
      lVar11 = (longlong)local_610 * 0x20 + *(longlong *)(lVar11 + 0x38);
    }
    local_410 = 0;
    local_418 = &DAT_1469f8530;
    plVar14 = (longlong *)(lVar11 + 0x10);
    if (lVar11 == 0) {
      plVar14 = (longlong *)0x0;
    }
    lVar11 = *plVar14;
    lVar10 = FUN_1419ef210((&DAT_1464c9c48)[lVar10]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar10 + 0x38,&local_60c,&local_418);
    if (local_60c == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)local_60c * 0x20 + *(longlong *)(lVar10 + 0x38);
    }
    plVar12 = (longlong *)0x0;
    plVar14 = (longlong *)(lVar10 + 0x10);
    if (lVar10 == 0) {
      plVar14 = plVar12;
    }
    plVar14 = (longlong *)*plVar14;
    local_2b8 = DAT_1464c2720;
    if (lVar11 == 0) {
      local_698 = local_698 | 1;
      plVar24 = plVar12;
    }
    else {
      lVar10 = *(longlong *)(lVar11 + 0x48);
      if (*(char *)(lVar10 + 0x28) == '\0') {
        FUN_1419f3850(lVar10);
      }
      plVar12 = *(longlong **)(lVar10 + 0x38);
    }
    uVar8 = local_698;
    plStack_2b0 = plVar12;
    if (((local_698 & 1) != 0) &&
       (uVar8 = local_698 & 0xfffffffe, local_698 = uVar8, plVar24 != (longlong *)0x0)) {
      LOCK();
      plVar12 = plVar24 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        if (((char)plVar24[2] == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')
            ))) {
          LOCK();
          bVar27 = *(int *)((longlong)plVar24 + 0xc) == 0;
          if (bVar27) {
            *(int *)((longlong)plVar24 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar27) {
            uVar9 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar9 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = (&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18;
            }
            *(longlong **)(lVar10 + 8) = plVar24;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*plVar24)(plVar24,1);
        }
      }
    }
    if (plVar14 == (longlong *)0x0) {
      local_698 = uVar8 | 2;
      local_298 = (longlong *)0x0;
      plVar17 = local_298;
    }
    else {
      lVar10 = plVar14[9];
      if (*(char *)(lVar10 + 0x28) == '\0') {
        FUN_1419f3850(lVar10);
      }
      local_298 = *(longlong **)(lVar10 + 0x40);
    }
    if (((local_698 & 2) != 0) && (local_698 = local_698 & 0xfffffffd, plVar17 != (longlong *)0x0))
    {
      LOCK();
      plVar12 = plVar17 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        if (((char)plVar17[2] == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')
            ))) {
          LOCK();
          bVar27 = *(int *)((longlong)plVar17 + 0xc) == 0;
          if (bVar27) {
            *(int *)((longlong)plVar17 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar27) {
            uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar8 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
            }
            *(longlong **)(lVar10 + 8) = plVar17;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*plVar17)(plVar17,1);
        }
      }
    }
    local_26c = 0;
    FUN_141ed6ac0(param_1,&local_2b8,2,1);
    local_3b8 = _DAT_1464aa6e0;
    uStack_3b0 = _DAT_1464aa6e8;
    (**(code **)(*plVar14 + 0x30))(plVar14,param_1,&local_3b8,1);
    local_6a0 = 1;
    local_6a8 = 0;
    local_6b8 = local_648;
    local_6d0 = (float)(int)param_3;
    local_668 = (longlong *)CONCAT44(param_3,param_3);
    local_6c0 = local_668;
    local_6c8 = (float)(int)param_3;
    local_6d8 = 0;
    local_6e0 = 0;
    local_6e8 = (undefined8 *)CONCAT44(local_6e8._4_4_,fVar28);
    local_6b0 = lVar11;
    DrawRectangle(param_1);
    uVar8 = local_680;
    local_4e4 = 0;
    local_4dc = 0;
    uVar3 = local_690[1];
    plVar14 = (longlong *)*local_690;
    puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    local_508 = local_680;
    local_504 = 0xffffffffffffffff;
    uStack_4fc = 0xffffffffffffffff;
    puVar13 = puVar20 + 10;
    local_4f4 = 0xffffffffffffffff;
    uStack_4ec = 0xffffffffffffffff;
    if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
      FMemStackBase::AllocateNewChunk((longlong *)(param_1 + 0x30),0x58);
      puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar20 + 10;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar13;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar20;
    *(undefined8 **)(param_1 + 8) = puVar20 + 1;
    puVar20[1] = 0;
    *puVar20 = &PTR_LAB_143f489f0;
    *(uint *)(puVar20 + 2) = local_508;
    *(undefined4 *)((longlong)puVar20 + 0x14) = (undefined4)local_504;
    *(undefined4 *)(puVar20 + 3) = local_504._4_4_;
    *(undefined4 *)((longlong)puVar20 + 0x1c) = (undefined4)uStack_4fc;
    *(undefined4 *)(puVar20 + 4) = uStack_4fc._4_4_;
    *(undefined4 *)((longlong)puVar20 + 0x24) = (undefined4)local_4f4;
    *(undefined4 *)(puVar20 + 5) = local_4f4._4_4_;
    *(undefined4 *)((longlong)puVar20 + 0x2c) = (undefined4)uStack_4ec;
    *(undefined4 *)(puVar20 + 6) = uStack_4ec._4_4_;
    *(undefined4 *)((longlong)puVar20 + 0x34) = (undefined4)local_4e4;
    *(undefined4 *)(puVar20 + 7) = local_4e4._4_4_;
    *(undefined4 *)((longlong)puVar20 + 0x3c) = local_4dc;
    puVar20[8] = plVar14;
    puVar20[9] = uVar3;
    lVar10 = (**(code **)(*plVar14 + 8))(plVar14);
    if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar20[8] + 0x18))(), lVar10 == 0)) {
      (**(code **)(*(longlong *)puVar20[8] + 0x20))();
    }
    lVar10 = (**(code **)(*(longlong *)puVar20[9] + 8))();
    if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar20[9] + 0x18))(), lVar10 == 0)) {
      (**(code **)(*(longlong *)puVar20[9] + 0x20))();
    }
    local_680 = uVar8 + 1;
    param_3 = local_660;
  } while (local_680 < 6);
  local_660 = 0xffffffff;
  local_628 = (undefined8 *)0x0;
  local_630 = FUN_1419ef210((&DAT_1464c9c48)[local_5d8]);
  local_648 = (undefined8 *)FSceneRenderTargets::Get(param_1);
  local_678 = 1;
  puVar13 = (undefined8 *)0x0;
  plVar24 = local_640;
  plVar17 = local_640;
  uVar8 = 0xffffffff;
  if (1 < local_684) {
    do {
      local_67c = 0;
      if (-1 < (int)(local_678 - 1)) {
        local_67c = local_678 - 1;
      }
      local_680 = 1 << (((char)local_684 - (char)local_678) - 1U & 0x1f);
      uVar8 = local_678 & 0x80000001;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      local_65c = 0;
      fVar28 = (float)(int)local_680;
      local_668 = (longlong *)
                  (*(longlong *)((longlong)local_648 + 0x170 + (longlong)(int)uVar8 * 8) + 8);
      local_448 = *(longlong *)((longlong)local_648 + 0x170 + (longlong)(int)(1 - uVar8) * 8);
      do {
        iVar18 = local_65c;
        uVar19 = 0;
        puVar25 = (ulonglong *)(param_1 + 0x30);
        local_520 = *local_668;
        local_510[0] = 0x101;
        local_5d0 = 0;
        uStack_5c8 = 0x1010101;
        uStack_5c4 = 0x22;
        local_434 = 0x22;
        local_518[0] = local_678;
        local_518[1] = local_65c;
        FUN_141ae34d0(param_1,local_520,0,0x22);
        iVar22 = 0;
        *(undefined4 *)(param_1 + 0x98) = 1;
        uVar23 = uVar19;
        do {
          uVar8 = (int)uVar23 + 1;
          uVar5 = *(undefined8 *)(local_518 + uVar23 * 6);
          uVar3 = *(undefined8 *)(local_510 + uVar23 * 0xc);
          puVar13 = (undefined8 *)(param_1 + 0xa0 + uVar23 * 0x18);
          *puVar13 = (&local_520)[uVar23 * 3];
          puVar13[1] = uVar5;
          *(undefined8 *)(param_1 + 0xb0 + uVar23 * 0x18) = uVar3;
          uVar23 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0x160) = local_5d0;
        *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_5c4,uStack_5c8);
        puVar20 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar20 + 0x26;
        if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(puVar25,0x138);
          puVar20 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar20 + 0x26;
        }
        *puVar25 = (ulonglong)puVar13;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar20;
        *(undefined8 **)(param_1 + 8) = puVar20 + 1;
        puVar20[1] = 0;
        *(undefined4 *)(puVar20 + 2) = 1;
        *puVar20 = &PTR_LAB_143f59440;
        puVar20[3] = 0;
        *(undefined4 *)(puVar20 + 4) = 0;
        *(undefined4 *)((longlong)puVar20 + 0x24) = 0xffffffff;
        *(undefined2 *)(puVar20 + 5) = 0;
        puVar20[6] = 0;
        *(undefined4 *)(puVar20 + 7) = 0;
        *(undefined4 *)((longlong)puVar20 + 0x3c) = 0xffffffff;
        *(undefined2 *)(puVar20 + 8) = 0;
        puVar20[9] = 0;
        *(undefined4 *)(puVar20 + 10) = 0;
        *(undefined4 *)((longlong)puVar20 + 0x54) = 0xffffffff;
        *(undefined2 *)(puVar20 + 0xb) = 0;
        puVar20[0xc] = 0;
        *(undefined4 *)(puVar20 + 0xd) = 0;
        *(undefined4 *)((longlong)puVar20 + 0x6c) = 0xffffffff;
        *(undefined2 *)(puVar20 + 0xe) = 0;
        puVar20[0xf] = 0;
        *(undefined4 *)(puVar20 + 0x10) = 0;
        *(undefined4 *)((longlong)puVar20 + 0x84) = 0xffffffff;
        *(undefined2 *)(puVar20 + 0x11) = 0;
        puVar20[0x12] = 0;
        *(undefined4 *)(puVar20 + 0x13) = 0;
        *(undefined4 *)((longlong)puVar20 + 0x9c) = 0xffffffff;
        *(undefined2 *)(puVar20 + 0x14) = 0;
        puVar20[0x15] = 0;
        *(undefined4 *)(puVar20 + 0x16) = 0;
        *(undefined4 *)((longlong)puVar20 + 0xb4) = 0xffffffff;
        *(undefined2 *)(puVar20 + 0x17) = 0;
        puVar20[0x18] = 0;
        *(undefined4 *)(puVar20 + 0x19) = 0;
        *(undefined4 *)((longlong)puVar20 + 0xcc) = 0xffffffff;
        *(undefined2 *)(puVar20 + 0x1a) = 0;
        puVar20[0x1b] = 0;
        *(undefined4 *)(puVar20 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar20 + 0xe4) = 0;
        uVar23 = uVar19;
        if (*(int *)(puVar20 + 2) != 0) {
          do {
            uVar8 = (int)uVar23 + 1;
            uVar3 = *(undefined8 *)(local_518 + uVar23 * 6);
            puVar20[uVar23 * 3 + 3] = (&local_520)[uVar23 * 3];
            (puVar20 + uVar23 * 3 + 3)[1] = uVar3;
            puVar20[uVar23 * 3 + 5] = *(undefined8 *)(local_510 + uVar23 * 0xc);
            uVar23 = (ulonglong)uVar8;
          } while (uVar8 < *(uint *)(puVar20 + 2));
          iVar22 = *(int *)(puVar20 + 0x1d);
        }
        uVar23 = uVar19;
        if (iVar22 != 0) {
          do {
            uVar8 = (int)uVar23 + 1;
            puVar20[uVar23 + 0x1e] = *(undefined8 *)(uVar23 * 8);
            uVar23 = (ulonglong)uVar8;
          } while (uVar8 < *(uint *)(puVar20 + 0x1d));
        }
        puVar20[0x1b] = local_5d0;
        puVar20[0x1c] = CONCAT44(uStack_5c4,uStack_5c8);
        local_1a8 = *(uint *)(param_1 + 0x98);
        local_1f8 = 0;
        plStack_1f0 = (longlong *)0x0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1a4[3] = 0;
        local_1a4[4] = 0;
        local_1a4[5] = 0;
        local_1a4[6] = 0;
        local_1d8 = (longlong *)0x0;
        uStack_1d0 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 0x26;
        local_1a4[0] = 0;
        local_1a4[1] = 0;
        local_1a4[2] = 0;
        local_1a4[7] = 0;
        local_1a4[8] = 0;
        local_1a4[9] = 0;
        local_1a4[10] = 0;
        local_1a4[0xb] = 0;
        local_1a4[0xc] = 0;
        local_1a4[0xd] = 0;
        local_1a4[0xe] = 0;
        stack0xfffffffffffffe98 = 0;
        local_160 = 0;
        local_158 = 0;
        local_154 = 0;
        local_14c = 0;
        local_144 = 0;
        uVar23 = uVar19;
        if (local_1a8 != 0) {
          do {
            lVar10 = *(longlong *)(param_1 + 0xa0 + uVar23 * 0x18);
            if (lVar10 == 0) {
              local_1a4[uVar23] = 0;
            }
            else {
              local_1a4[uVar23] = *(int *)(lVar10 + 0x3c);
              local_1a4[uVar23 + 8] = *(int *)(lVar10 + 0x40);
            }
            auStack_164[uVar23] = *(undefined1 *)(param_1 + 0xb0 + uVar23 * 0x18);
            *(undefined1 *)((longlong)&local_160 + uVar23 + 4) =
                 *(undefined1 *)(param_1 + 0xb1 + uVar23 * 0x18);
            if (local_1a4[uVar23] != 0) {
              local_144 = CONCAT22(local_144._2_2_,*(undefined2 *)(lVar10 + 0x38));
            }
            uVar8 = (int)uVar23 + 1;
            uVar23 = (ulonglong)uVar8;
          } while (uVar8 < local_1a8);
        }
        lVar10 = *(longlong *)(param_1 + 0x160);
        if (lVar10 == 0) {
          local_154 = local_154 & 0xffffffff00000000;
        }
        else {
          uVar19 = (ulonglong)*(uint *)(lVar10 + 0x3c);
          local_154 = *(ulonglong *)(lVar10 + 0x3c);
        }
        local_14c = *(undefined8 *)(param_1 + 0x168);
        if ((int)uVar19 != 0) {
          local_144 = CONCAT22(local_144._2_2_,*(undefined2 *)(lVar10 + 0x38));
        }
        if (DAT_146864320 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar7 = IsInRenderingThread();
            if (cVar7 == '\0') {
              FScopedEvent::FScopedEvent(local_5a0);
              plVar14 = (longlong *)FUN_14049e3d0(local_360,0,0xff);
              lVar10 = *plVar14;
              *(undefined1 **)(lVar10 + 0x10) = &LAB_140985690;
              *(undefined1 **)(lVar10 + 0x18) = local_5a0;
              lVar10 = *plVar14;
              lVar26 = plVar14[2];
              lVar11 = plVar14[1];
              lVar16 = *(longlong *)(lVar10 + 0x28);
              piVar1 = (int *)(lVar16 + 0x48);
              if (lVar16 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_5a8 = lVar16;
              FUN_1404a4fe0(lVar10,lVar11,(int)lVar26,1);
              if (lVar16 != 0) {
                LOCK();
                iVar22 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar22 == 1) {
                  FGraphEvent::Recycle(local_5a8);
                }
              }
              FScopedEvent::~FScopedEvent(local_5a0);
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                DAT_146864320 = 0;
              }
              else {
                DAT_146864320 =
                     TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar10);
              }
            }
          }
          else {
            lVar10 = operator_new(0x38);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_146864320 == 0) {
                DAT_146864320 = 0;
              }
              UNLOCK();
            }
            else {
              lVar10 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
              LOCK();
              if (DAT_146864320 != 0) {
                lVar10 = DAT_146864320;
              }
              DAT_146864320 = lVar10;
              UNLOCK();
            }
          }
        }
        uStack_1c0 = *(undefined8 *)(DAT_146864320 + 0x30);
        if (DAT_146864318 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar7 = IsInRenderingThread();
            if (cVar7 == '\0') {
              FScopedEvent::FScopedEvent(local_590);
              plVar14 = (longlong *)FUN_14049e3d0(local_348,0,0xff);
              lVar10 = *plVar14;
              *(undefined1 **)(lVar10 + 0x10) = &LAB_140985680;
              *(undefined1 **)(lVar10 + 0x18) = local_590;
              lVar10 = *plVar14;
              lVar26 = plVar14[2];
              lVar11 = plVar14[1];
              lVar16 = *(longlong *)(lVar10 + 0x28);
              piVar1 = (int *)(lVar16 + 0x48);
              if (lVar16 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_598 = lVar16;
              FUN_1404a4fe0(lVar10,lVar11,(int)lVar26,1);
              if (lVar16 != 0) {
                LOCK();
                iVar22 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar22 == 1) {
                  FGraphEvent::Recycle(local_598);
                }
              }
              FScopedEvent::~FScopedEvent(local_590);
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                DAT_146864318 = 0;
              }
              else {
                DAT_146864318 =
                     TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar10);
              }
            }
          }
          else {
            lVar10 = operator_new(0x38);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_146864318 == 0) {
                DAT_146864318 = 0;
              }
              UNLOCK();
            }
            else {
              lVar10 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
              LOCK();
              if (DAT_146864318 != 0) {
                lVar10 = DAT_146864318;
              }
              DAT_146864318 = lVar10;
              UNLOCK();
            }
          }
        }
        local_1b8 = *(undefined8 *)(DAT_146864318 + 0x30);
        lVar10 = DAT_146852b40;
        if (DAT_146852b40 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar7 = IsInRenderingThread();
            if (cVar7 == '\0') {
              FScopedEvent::FScopedEvent(local_580);
              plVar14 = (longlong *)FUN_14049e3d0(local_330,0,0xff);
              lVar10 = *plVar14;
              *(undefined1 **)(lVar10 + 0x10) = &LAB_1404a0f60;
              *(undefined1 **)(lVar10 + 0x18) = local_580;
              lVar10 = *plVar14;
              lVar26 = plVar14[2];
              lVar11 = plVar14[1];
              lVar16 = *(longlong *)(lVar10 + 0x28);
              piVar1 = (int *)(lVar16 + 0x48);
              if (lVar16 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_588 = lVar16;
              FUN_1404a4fe0(lVar10,lVar11,(int)lVar26,1);
              if (lVar16 != 0) {
                LOCK();
                iVar22 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar22 == 1) {
                  FGraphEvent::Recycle(local_588);
                }
              }
              FScopedEvent::~FScopedEvent(local_580);
              lVar10 = DAT_146852b40;
            }
            else {
              lVar11 = operator_new(0x38);
              lVar10 = 0;
              if (lVar11 != 0) {
                lVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar11);
              }
            }
          }
          else {
            lVar10 = operator_new(0x38);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_146852b40 == 0) {
                DAT_146852b40 = 0;
              }
              UNLOCK();
              lVar10 = DAT_146852b40;
            }
            else {
              lVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
              LOCK();
              if (DAT_146852b40 != 0) {
                lVar10 = DAT_146852b40;
              }
              DAT_146852b40 = lVar10;
              UNLOCK();
              lVar10 = DAT_146852b40;
            }
          }
        }
        DAT_146852b40 = lVar10;
        local_1c8 = *(undefined8 *)(DAT_146852b40 + 0x30);
        puVar20 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar20 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(puVar25,0x30);
          puVar20 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar20 + 5;
        }
        lVar10 = local_630;
        *puVar25 = (ulonglong)puVar13;
        plVar12 = (longlong *)0x0;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        local_400 = 0;
        **(undefined8 **)(param_1 + 8) = puVar20;
        *(undefined8 **)(param_1 + 8) = puVar20 + 1;
        puVar20[1] = 0;
        *puVar20 = &PTR_LAB_143f59420;
        *(uint *)((longlong)puVar20 + 0x1c) = local_680;
        *(uint *)(puVar20 + 4) = local_680;
        puVar20[2] = 0;
        *(undefined4 *)(puVar20 + 3) = 0;
        *(undefined4 *)((longlong)puVar20 + 0x24) = 0x3f800000;
        local_408 = &DAT_146b09c50;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(local_630 + 0x38,&local_608,&local_408);
        plVar14 = plVar12;
        if (local_608 != -1) {
          plVar14 = (longlong *)((longlong)local_608 * 0x20 + *(longlong *)(lVar10 + 0x38));
        }
        local_3f0 = 0;
        plVar15 = plVar14 + 2;
        if (plVar14 == (longlong *)0x0) {
          plVar15 = plVar12;
        }
        local_3f8 = &DAT_146a29280;
        lVar11 = *plVar15;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar10 + 0x38,&local_604,&local_3f8);
        plVar14 = plVar12;
        if (local_604 != -1) {
          plVar14 = (longlong *)((longlong)local_604 * 0x20 + *(longlong *)(lVar10 + 0x38));
        }
        plVar15 = plVar14 + 2;
        if (plVar14 == (longlong *)0x0) {
          plVar15 = plVar12;
        }
        lVar10 = *plVar15;
        local_1f8 = DAT_1464c2720;
        if (lVar11 == 0) {
          local_698 = local_698 | 4;
          plStack_1f0 = (longlong *)0x0;
          plVar24 = plStack_1f0;
        }
        else {
          lVar16 = *(longlong *)(lVar11 + 0x48);
          if (*(char *)(lVar16 + 0x28) == '\0') {
            FUN_1419f3850(lVar16);
          }
          plStack_1f0 = *(longlong **)(lVar16 + 0x38);
        }
        uVar8 = local_698;
        if (((local_698 & 4) != 0) &&
           (uVar8 = local_698 & 0xfffffffb, local_698 = uVar8, plVar24 != (longlong *)0x0)) {
          LOCK();
          plVar14 = plVar24 + 1;
          lVar16 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            if (((char)plVar24[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar27 = *(int *)((longlong)plVar24 + 0xc) == 0;
              if (bVar27) {
                *(int *)((longlong)plVar24 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar27) {
                uVar9 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar9 == 0) {
                  lVar16 = 0;
                }
                else {
                  lVar16 = (&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar16 + 8) = plVar24;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar24)(plVar24,1);
            }
          }
        }
        if (lVar10 == 0) {
          local_698 = uVar8 | 8;
          local_1d8 = (longlong *)0x0;
          plVar17 = local_1d8;
        }
        else {
          lVar16 = *(longlong *)(lVar10 + 0x48);
          if (*(char *)(lVar16 + 0x28) == '\0') {
            FUN_1419f3850(lVar16);
          }
          local_1d8 = *(longlong **)(lVar16 + 0x40);
        }
        if (((local_698 & 8) != 0) &&
           (local_698 = local_698 & 0xfffffff7, plVar17 != (longlong *)0x0)) {
          LOCK();
          plVar14 = plVar17 + 1;
          lVar16 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            if (((char)plVar17[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar27 = *(int *)((longlong)plVar17 + 0xc) == 0;
              if (bVar27) {
                *(int *)((longlong)plVar17 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar27) {
                uVar8 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar8 == 0) {
                  lVar16 = 0;
                }
                else {
                  lVar16 = (&DAT_1468a81f8)[uVar8 >> 0xe] + (ulonglong)(uVar8 & 0x3fff) * 0x18;
                }
                *(longlong **)(lVar16 + 8) = plVar17;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*plVar17)(plVar17,1);
            }
          }
        }
        local_1ac = 0;
        FUN_141ed6ac0(param_1,&local_1f8,2,1);
        lVar16 = *(longlong *)(lVar10 + 0x48);
        local_5e8[0] = local_67c;
        local_5e0[0] = iVar18;
        if (*(char *)(lVar16 + 0x28) == '\0') {
          FUN_1419f3850(lVar16);
        }
        local_6e8 = (undefined8 *)((ulonglong)local_6e8 & 0xffffffff00000000);
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (param_1,*(undefined8 *)(lVar16 + 0x40),lVar10 + 0xc0,local_5e0);
        lVar16 = *(longlong *)(lVar10 + 0x48);
        if (*(char *)(lVar16 + 0x28) == '\0') {
          FUN_1419f3850(lVar16);
        }
        local_6e8 = (undefined8 *)((ulonglong)local_6e8 & 0xffffffff00000000);
        SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                  (param_1,*(undefined8 *)(lVar16 + 0x40),lVar10 + 0xc6,local_5e8);
        lVar16 = *(longlong *)(lVar10 + 0x48);
        local_690 = *(undefined8 **)(local_448 + 0x10);
        if (*(char *)(lVar16 + 0x28) == '\0') {
          FUN_1419f3850(lVar16);
        }
        uVar3 = *(undefined8 *)(lVar16 + 0x40);
        local_440 = FUN_141a156e0();
        if (*(short *)(lVar10 + 0xce) != 0) {
          uVar2 = *(ushort *)(lVar10 + 0xcc);
          puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar20 + 5;
          if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
            FMemStackBase::AllocateNewChunk((longlong *)(param_1 + 0x30),0x30);
            puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar20 + 5;
          }
          *(undefined8 **)(param_1 + 0x30) = puVar13;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          **(undefined8 **)(param_1 + 8) = puVar20;
          *(undefined8 **)(param_1 + 8) = puVar20 + 1;
          puVar20[1] = 0;
          *puVar20 = &PTR_LAB_143f59c80;
          *(uint *)(puVar20 + 3) = (uint)uVar2;
          puVar20[4] = local_690;
          puVar20[2] = uVar3;
        }
        uVar5 = local_440;
        if (*(short *)(lVar10 + 0xd2) != 0) {
          uVar2 = *(ushort *)(lVar10 + 0xd0);
          puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar20 + 5;
          if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
            FMemStackBase::AllocateNewChunk((longlong *)(param_1 + 0x30),0x30);
            puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar20 + 5;
          }
          *(undefined8 **)(param_1 + 0x30) = puVar13;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          **(undefined8 **)(param_1 + 8) = puVar20;
          *(undefined8 **)(param_1 + 8) = puVar20 + 1;
          puVar20[1] = 0;
          *puVar20 = &PTR_LAB_143f59c70;
          puVar20[2] = uVar3;
          *(uint *)(puVar20 + 3) = (uint)uVar2;
          puVar20[4] = uVar5;
        }
        local_620 = (undefined8 *)CONCAT44(local_680,local_680);
        local_618 = local_680;
        uStack_614 = local_680;
        local_6a0 = 1;
        local_6a8 = 0;
        local_6b8 = local_620;
        local_6c0 = (undefined8 *)CONCAT44(local_680,local_680);
        local_6d8 = 0;
        local_6e0 = 0;
        local_6e8 = (undefined8 *)CONCAT44(local_6e8._4_4_,fVar28);
        local_6d0 = fVar28;
        local_6c8 = fVar28;
        local_6b0 = lVar11;
        DrawRectangle();
        puVar25 = (ulonglong *)(param_1 + 0x30);
        local_4b0 = 0;
        local_4d8 = local_65c;
        puVar20 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
        local_4b4 = local_678;
        local_4d4 = 0xffffffffffffffff;
        uStack_4cc = 0xffffffffffffffff;
        local_4c4 = 0xffffffffffffffff;
        uStack_4bc = 0xffffffffffffffff;
        uVar3 = local_668[1];
        plVar14 = (longlong *)*local_668;
        puVar13 = puVar20 + 10;
        if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(puVar25,0x58);
          puVar20 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar20 + 10;
        }
        *puVar25 = (ulonglong)puVar13;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar20;
        *(undefined8 **)(param_1 + 8) = puVar20 + 1;
        puVar20[1] = 0;
        *puVar20 = &PTR_LAB_143f489f0;
        *(int *)(puVar20 + 2) = local_4d8;
        *(undefined4 *)((longlong)puVar20 + 0x14) = (undefined4)local_4d4;
        *(undefined4 *)(puVar20 + 3) = local_4d4._4_4_;
        *(undefined4 *)((longlong)puVar20 + 0x1c) = (undefined4)uStack_4cc;
        *(undefined4 *)(puVar20 + 4) = uStack_4cc._4_4_;
        *(undefined4 *)((longlong)puVar20 + 0x24) = (undefined4)local_4c4;
        *(undefined4 *)(puVar20 + 5) = local_4c4._4_4_;
        *(undefined4 *)((longlong)puVar20 + 0x2c) = (undefined4)uStack_4bc;
        *(undefined4 *)(puVar20 + 6) = uStack_4bc._4_4_;
        *(uint *)((longlong)puVar20 + 0x34) = local_4b4;
        *(undefined4 *)(puVar20 + 7) = (undefined4)local_4b0;
        *(undefined4 *)((longlong)puVar20 + 0x3c) = local_4b0._4_4_;
        puVar20[8] = plVar14;
        puVar20[9] = uVar3;
        lVar10 = (**(code **)(*plVar14 + 8))(plVar14);
        if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar20[8] + 0x18))(), lVar10 == 0)
           ) {
          (**(code **)(*(longlong *)puVar20[8] + 0x20))();
        }
        lVar10 = (**(code **)(*(longlong *)puVar20[9] + 8))();
        if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar20[9] + 0x18))(), lVar10 == 0)
           ) {
          (**(code **)(*(longlong *)puVar20[9] + 0x20))();
        }
        local_65c = local_65c + 1;
      } while (local_65c < 6);
      if (local_680 == DAT_1464c2e40) {
        local_628 = local_668;
        local_660 = local_678;
      }
      local_678 = local_678 + 1;
      puVar13 = local_628;
      uVar8 = local_660;
    } while ((int)local_678 < local_684);
  }
  if (local_650 != (undefined8 *)0x0) {
    local_640 = (longlong *)puVar13[1];
    if (local_640 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_640 + 1) = (int)local_640[1] + 1;
      UNLOCK();
    }
    local_6e8 = local_650;
    FUN_141d21c30(param_1,local_658,&local_640,uVar8);
  }
  uVar8 = 1;
  if ((local_670 == 1) && (1 < local_684)) {
    do {
      iVar22 = 0;
      uVar9 = uVar8 & 0x80000001;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
      }
      lVar10 = *(longlong *)((longlong)local_648 + 0x170 + (longlong)(int)(1 - uVar9) * 8);
      local_650 = (undefined8 *)
                  (*(longlong *)((longlong)local_648 + 0x170 + (longlong)(int)uVar9 * 8) + 0x10);
      do {
        plVar24 = (longlong *)*local_650;
        uVar3 = *(undefined8 *)(lVar10 + 0x10);
        puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        local_4a4 = 0xffffffffffffffff;
        uStack_49c = 0xffffffffffffffff;
        puVar13 = puVar20 + 10;
        local_480 = 0;
        local_494 = 0xffffffffffffffff;
        uStack_48c = 0xffffffffffffffff;
        local_4a8 = iVar22;
        local_484 = uVar8;
        if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk((longlong *)(param_1 + 0x30),0x58);
          puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar13 = puVar20 + 10;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar13;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar20;
        *(undefined8 **)(param_1 + 8) = puVar20 + 1;
        puVar20[1] = 0;
        *puVar20 = &PTR_LAB_143f489f0;
        *(int *)(puVar20 + 2) = local_4a8;
        *(undefined4 *)((longlong)puVar20 + 0x14) = (undefined4)local_4a4;
        *(undefined4 *)(puVar20 + 3) = local_4a4._4_4_;
        *(undefined4 *)((longlong)puVar20 + 0x1c) = (undefined4)uStack_49c;
        *(undefined4 *)(puVar20 + 4) = uStack_49c._4_4_;
        *(undefined4 *)((longlong)puVar20 + 0x24) = (undefined4)local_494;
        *(undefined4 *)(puVar20 + 5) = local_494._4_4_;
        *(undefined4 *)((longlong)puVar20 + 0x2c) = (undefined4)uStack_48c;
        *(undefined4 *)(puVar20 + 6) = uStack_48c._4_4_;
        *(uint *)((longlong)puVar20 + 0x34) = local_484;
        *(undefined4 *)(puVar20 + 7) = (undefined4)local_480;
        *(undefined4 *)((longlong)puVar20 + 0x3c) = local_480._4_4_;
        puVar20[8] = plVar24;
        puVar20[9] = uVar3;
        lVar11 = (**(code **)(*plVar24 + 8))(plVar24);
        if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar20[8] + 0x18))(), lVar11 == 0)
           ) {
          (**(code **)(*(longlong *)puVar20[8] + 0x20))();
        }
        lVar11 = (**(code **)(*(longlong *)puVar20[9] + 8))();
        if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar20[9] + 0x18))(), lVar11 == 0)
           ) {
          (**(code **)(*(longlong *)puVar20[9] + 0x20))();
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 < 6);
      uVar8 = uVar8 + 2;
    } while ((int)uVar8 < local_684);
  }
  local_688 = 0;
  if (0 < local_684) {
    local_668 = (longlong *)(local_630 + 0x38);
    plVar24 = local_640;
    do {
      uVar8 = local_688;
      if (local_670 == 1) {
        uVar8 = 0;
      }
      uVar8 = uVar8 & 0x80000001;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      local_674 = 0;
      local_620 = (undefined8 *)
                  (*(longlong *)((longlong)local_648 + 0x170 + (longlong)(int)(1 - uVar8) * 8) + 8);
      uVar9 = 1 << (((char)local_684 - (char)local_688) - 1U & 0x1f);
      local_630 = *(longlong *)((longlong)local_648 + 0x170 + (longlong)(int)uVar8 * 8);
      fVar28 = (float)(int)uVar9;
      local_658 = uVar9;
      do {
        plVar17 = local_668;
        puVar25 = (ulonglong *)(param_1 + 0x30);
        uVar19 = 0;
        local_6e0 = CONCAT31(local_6e0._1_3_,1);
        local_6e8 = (undefined8 *)0x0;
        SetRenderTarget(param_1,*local_620,local_688,local_674);
        local_e8 = *(uint *)(param_1 + 0x98);
        local_138 = 0;
        plStack_130 = (longlong *)0x0;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_e4[3] = 0;
        local_e4[4] = 0;
        local_e4[5] = 0;
        local_e4[6] = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_ec = 0x26;
        local_e4[0] = 0;
        local_e4[1] = 0;
        local_e4[2] = 0;
        local_e4[7] = 0;
        local_e4[8] = 0;
        local_e4[9] = 0;
        local_e4[10] = 0;
        local_e4[0xb] = 0;
        local_e4[0xc] = 0;
        local_e4[0xd] = 0;
        local_e4[0xe] = 0;
        stack0xffffffffffffff58 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_94 = 0;
        local_8c = 0;
        local_84 = 0;
        uVar23 = uVar19;
        if (local_e8 != 0) {
          do {
            lVar10 = *(longlong *)(param_1 + 0xa0 + uVar23 * 0x18);
            if (lVar10 == 0) {
              local_e4[uVar23] = 0;
            }
            else {
              local_e4[uVar23] = *(int *)(lVar10 + 0x3c);
              local_e4[uVar23 + 8] = *(int *)(lVar10 + 0x40);
            }
            auStack_a4[uVar23] = *(undefined1 *)(param_1 + 0xb0 + uVar23 * 0x18);
            *(undefined1 *)((longlong)&local_a0 + uVar23 + 4) =
                 *(undefined1 *)(param_1 + 0xb1 + uVar23 * 0x18);
            if (local_e4[uVar23] != 0) {
              local_84 = CONCAT22(local_84._2_2_,*(undefined2 *)(lVar10 + 0x38));
            }
            uVar8 = (int)uVar23 + 1;
            uVar23 = (ulonglong)uVar8;
          } while (uVar8 < local_e8);
        }
        lVar10 = *(longlong *)(param_1 + 0x160);
        if (lVar10 == 0) {
          local_94 = local_94 & 0xffffffff00000000;
        }
        else {
          uVar19 = (ulonglong)*(uint *)(lVar10 + 0x3c);
          local_94 = *(ulonglong *)(lVar10 + 0x3c);
        }
        local_8c = *(undefined8 *)(param_1 + 0x168);
        if ((int)uVar19 != 0) {
          local_84 = CONCAT22(local_84._2_2_,*(undefined2 *)(lVar10 + 0x38));
        }
        if (DAT_146864320 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar7 = IsInRenderingThread();
            if (cVar7 == '\0') {
              FScopedEvent::FScopedEvent(local_568);
              plVar14 = (longlong *)FUN_14049e3d0(local_318,0,0xff);
              lVar10 = *plVar14;
              *(undefined1 **)(lVar10 + 0x10) = &LAB_140985690;
              *(undefined1 **)(lVar10 + 0x18) = local_568;
              lVar10 = *plVar14;
              lVar26 = plVar14[2];
              lVar11 = plVar14[1];
              lVar16 = *(longlong *)(lVar10 + 0x28);
              piVar1 = (int *)(lVar16 + 0x48);
              if (lVar16 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_570 = lVar16;
              FUN_1404a4fe0(lVar10,lVar11,(int)lVar26,1);
              if (lVar16 != 0) {
                LOCK();
                iVar22 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar22 == 1) {
                  FGraphEvent::Recycle(local_570);
                }
              }
              FScopedEvent::~FScopedEvent(local_568);
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                DAT_146864320 = 0;
              }
              else {
                DAT_146864320 =
                     TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar10);
              }
            }
          }
          else {
            lVar10 = operator_new(0x38);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_146864320 == 0) {
                DAT_146864320 = 0;
              }
              UNLOCK();
            }
            else {
              lVar10 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
              LOCK();
              if (DAT_146864320 != 0) {
                lVar10 = DAT_146864320;
              }
              DAT_146864320 = lVar10;
              UNLOCK();
            }
          }
        }
        uStack_100 = *(undefined8 *)(DAT_146864320 + 0x30);
        if (DAT_146864318 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar7 = IsInRenderingThread();
            if (cVar7 == '\0') {
              FScopedEvent::FScopedEvent(local_558);
              plVar14 = (longlong *)FUN_14049e3d0(local_300,0,0xff);
              lVar10 = *plVar14;
              *(undefined1 **)(lVar10 + 0x10) = &LAB_140985680;
              *(undefined1 **)(lVar10 + 0x18) = local_558;
              lVar10 = *plVar14;
              lVar26 = plVar14[2];
              lVar11 = plVar14[1];
              lVar16 = *(longlong *)(lVar10 + 0x28);
              piVar1 = (int *)(lVar16 + 0x48);
              if (lVar16 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_560 = lVar16;
              FUN_1404a4fe0(lVar10,lVar11,(int)lVar26,1);
              if (lVar16 != 0) {
                LOCK();
                iVar22 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar22 == 1) {
                  FGraphEvent::Recycle(local_560);
                }
              }
              FScopedEvent::~FScopedEvent(local_558);
            }
            else {
              lVar10 = operator_new(0x38);
              if (lVar10 == 0) {
                DAT_146864318 = 0;
              }
              else {
                DAT_146864318 =
                     TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                     ::FStaticStateResource::FStaticStateResource(lVar10);
              }
            }
          }
          else {
            lVar10 = operator_new(0x38);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_146864318 == 0) {
                DAT_146864318 = 0;
              }
              UNLOCK();
            }
            else {
              lVar10 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
              LOCK();
              if (DAT_146864318 != 0) {
                lVar10 = DAT_146864318;
              }
              DAT_146864318 = lVar10;
              UNLOCK();
            }
          }
        }
        local_f8 = *(undefined8 *)(DAT_146864318 + 0x30);
        lVar10 = DAT_146852b40;
        if (DAT_146852b40 == 0) {
          if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
            cVar7 = IsInRenderingThread();
            if (cVar7 == '\0') {
              FScopedEvent::FScopedEvent(local_548);
              plVar14 = (longlong *)FUN_14049e3d0(local_2e8,0,0xff);
              lVar10 = *plVar14;
              *(undefined1 **)(lVar10 + 0x10) = &LAB_1404a0f60;
              *(undefined1 **)(lVar10 + 0x18) = local_548;
              lVar10 = *plVar14;
              lVar26 = plVar14[2];
              lVar11 = plVar14[1];
              lVar16 = *(longlong *)(lVar10 + 0x28);
              piVar1 = (int *)(lVar16 + 0x48);
              if (lVar16 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              local_550 = lVar16;
              FUN_1404a4fe0(lVar10,lVar11,(int)lVar26,1);
              if (lVar16 != 0) {
                LOCK();
                iVar22 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar22 == 1) {
                  FGraphEvent::Recycle(local_550);
                }
              }
              FScopedEvent::~FScopedEvent(local_548);
              lVar10 = DAT_146852b40;
            }
            else {
              lVar11 = operator_new(0x38);
              lVar10 = 0;
              if (lVar11 != 0) {
                lVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar11);
              }
            }
          }
          else {
            lVar10 = operator_new(0x38);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_146852b40 == 0) {
                DAT_146852b40 = 0;
              }
              UNLOCK();
              lVar10 = DAT_146852b40;
            }
            else {
              lVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar10);
              LOCK();
              if (DAT_146852b40 != 0) {
                lVar10 = DAT_146852b40;
              }
              DAT_146852b40 = lVar10;
              UNLOCK();
              lVar10 = DAT_146852b40;
            }
          }
        }
        DAT_146852b40 = lVar10;
        local_108 = *(undefined8 *)(DAT_146852b40 + 0x30);
        puVar20 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar20 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(puVar25,0x30);
          puVar20 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar20 + 5;
        }
        *puVar25 = (ulonglong)puVar13;
        plVar12 = (longlong *)0x0;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        local_3e0 = 0;
        **(undefined8 **)(param_1 + 8) = puVar20;
        *(undefined8 **)(param_1 + 8) = puVar20 + 1;
        puVar20[1] = 0;
        *puVar20 = &PTR_LAB_143f59420;
        puVar20[2] = 0;
        *(undefined4 *)(puVar20 + 3) = 0;
        *(uint *)((longlong)puVar20 + 0x1c) = uVar9;
        *(uint *)(puVar20 + 4) = uVar9;
        *(undefined4 *)((longlong)puVar20 + 0x24) = 0x3f800000;
        local_3e8 = &DAT_146b09c50;
        lVar10 = FUN_1419ef210((&DAT_1464c9c48)[local_5d8]);
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(lVar10 + 0x38,local_5f0,&local_3e8);
        plVar14 = plVar12;
        if (local_5f0[0] != -1) {
          plVar14 = (longlong *)((longlong)local_5f0[0] * 0x20 + *(longlong *)(lVar10 + 0x38));
        }
        local_3d0 = 0;
        plVar15 = plVar14 + 2;
        if (plVar14 == (longlong *)0x0) {
          plVar15 = plVar12;
        }
        local_3d8 = &DAT_146a83980;
        lVar10 = *plVar15;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar17,&local_600,&local_3d8);
        plVar14 = plVar12;
        if (local_600 != -1) {
          plVar14 = (longlong *)((longlong)local_600 * 0x20 + *plVar17);
        }
        plVar15 = plVar14 + 2;
        if (plVar14 == (longlong *)0x0) {
          plVar15 = plVar12;
        }
        local_3c0 = 0;
        lVar11 = *plVar15;
        local_3c8 = &DAT_146a29280;
        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
        ::FindId(plVar17,&local_5fc,&local_3c8);
        plVar14 = (longlong *)0x0;
        if (local_5fc != -1) {
          plVar14 = (longlong *)((longlong)local_5fc * 0x20 + *plVar17);
        }
        plVar17 = plVar14 + 2;
        if (plVar14 == (longlong *)0x0) {
          plVar17 = (longlong *)0x0;
        }
        lVar16 = *plVar17;
        if (local_670 == 1) {
          lVar26 = *(longlong *)(lVar11 + 0x48);
        }
        else {
          lVar26 = *(longlong *)(lVar16 + 0x48);
        }
        if (*(char *)(lVar26 + 0x28) == '\0') {
          FUN_1419f3850(lVar26);
        }
        uVar3 = *(undefined8 *)(lVar26 + 0x40);
        local_138 = DAT_1464c2720;
        if (lVar10 == 0) {
          local_698 = local_698 | 0x10;
          plStack_130 = (longlong *)0x0;
          plVar24 = plStack_130;
        }
        else {
          lVar26 = *(longlong *)(lVar10 + 0x48);
          if (*(char *)(lVar26 + 0x28) == '\0') {
            FUN_1419f3850(lVar26);
          }
          plStack_130 = *(longlong **)(lVar26 + 0x38);
        }
        if (((local_698 & 0x10) != 0) &&
           (local_698 = local_698 & 0xffffffef, plVar24 != (longlong *)0x0)) {
          LOCK();
          plVar17 = plVar24 + 1;
          lVar26 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar26 == 1) {
            if (((char)plVar24[2] == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar27 = *(int *)((longlong)plVar24 + 0xc) == 0;
              if (bVar27) {
                *(int *)((longlong)plVar24 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar27) {
                TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,plVar24);
              }
            }
            else {
              (**(code **)*plVar24)(plVar24,1);
            }
          }
        }
        local_ec = 0;
        local_118 = uVar3;
        FUN_141ed6ac0(param_1,&local_138,2,1);
        if (local_670 == 1) {
          local_6e8 = (undefined8 *)((ulonglong)local_6e8 & 0xffffffff00000000);
          SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                    (param_1,uVar3,lVar11 + 0xc0,&local_674);
          local_6e8 = (undefined8 *)((ulonglong)local_6e8 & 0xffffffff00000000);
          SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                    (param_1,uVar3,lVar11 + 0xc6,&local_688);
          local_6e8 = (undefined8 *)((ulonglong)local_6e8 & 0xffffffff00000000);
          SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                    (param_1,uVar3,lVar11 + 0xcc,&local_684);
          local_650 = *(undefined8 **)(local_630 + 0x10);
          if (DAT_146a1c3a0 == 0) {
            if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
              cVar7 = IsInRenderingThread();
              if (cVar7 == '\0') {
                FScopedEvent::FScopedEvent(local_538);
                plVar17 = (longlong *)FUN_14049e3d0(local_2d0,0,0xff);
                lVar16 = *plVar17;
                *(undefined1 **)(lVar16 + 0x10) = &LAB_141b33e90;
                *(undefined1 **)(lVar16 + 0x18) = local_538;
                lVar16 = *plVar17;
                lVar6 = plVar17[2];
                lVar26 = plVar17[1];
                lVar4 = *(longlong *)(lVar16 + 0x28);
                piVar1 = (int *)(lVar4 + 0x48);
                if (lVar4 != 0) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  UNLOCK();
                }
                local_540 = lVar4;
                FUN_1404a4fe0(lVar16,lVar26,(int)lVar6,1);
                if (lVar4 != 0) {
                  LOCK();
                  iVar22 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    FGraphEvent::Recycle(local_540);
                  }
                }
                FScopedEvent::~FScopedEvent(local_538);
              }
              else {
                lVar16 = operator_new(0x38);
                if (lVar16 == 0) {
                  DAT_146a1c3a0 = 0;
                }
                else {
                  DAT_146a1c3a0 =
                       TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                       ::FStaticStateResource::FStaticStateResource(lVar16);
                }
              }
            }
            else {
              lVar16 = operator_new(0x38);
              if (lVar16 == 0) {
                LOCK();
                if (DAT_146a1c3a0 == 0) {
                  DAT_146a1c3a0 = 0;
                }
                UNLOCK();
              }
              else {
                lVar16 = TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
                         ::FStaticStateResource::FStaticStateResource(lVar16);
                LOCK();
                if (DAT_146a1c3a0 != 0) {
                  lVar16 = DAT_146a1c3a0;
                }
                DAT_146a1c3a0 = lVar16;
                UNLOCK();
              }
            }
          }
          uVar5 = *(undefined8 *)(DAT_146a1c3a0 + 0x30);
          if (*(short *)(lVar11 + 0xd4) != 0) {
            uVar2 = *(ushort *)(lVar11 + 0xd2);
            puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar20 + 5;
            if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
              FMemStackBase::AllocateNewChunk(param_1 + 0x30);
              puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar13 = puVar20 + 5;
            }
            *(undefined8 **)(param_1 + 0x30) = puVar13;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            **(undefined8 **)(param_1 + 8) = puVar20;
            *(undefined8 **)(param_1 + 8) = puVar20 + 1;
            puVar20[1] = 0;
            *puVar20 = &PTR_LAB_143f59c80;
            puVar20[4] = local_650;
            puVar20[2] = uVar3;
            *(uint *)(puVar20 + 3) = (uint)uVar2;
          }
          if (*(short *)(lVar11 + 0xd8) != 0) {
            uVar2 = *(ushort *)(lVar11 + 0xd6);
            puVar25 = (ulonglong *)(param_1 + 0x30);
            puVar20 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
            puVar13 = puVar20 + 5;
            if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
              FMemStackBase::AllocateNewChunk(puVar25);
              puVar20 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
              puVar13 = puVar20 + 5;
            }
            *puVar25 = (ulonglong)puVar13;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            **(undefined8 **)(param_1 + 8) = puVar20;
            *(undefined8 **)(param_1 + 8) = puVar20 + 1;
            puVar20[1] = 0;
            *puVar20 = &PTR_LAB_143f59c70;
            puVar20[2] = uVar3;
            *(uint *)(puVar20 + 3) = (uint)uVar2;
            puVar20[4] = uVar5;
          }
        }
        else {
          lVar11 = *(longlong *)(lVar16 + 0x48);
          local_638[0] = local_688;
          local_5f8[0] = local_674;
          if (*(char *)(lVar11 + 0x28) == '\0') {
            FUN_1419f3850(lVar11);
          }
          local_6e8 = (undefined8 *)((ulonglong)local_6e8 & 0xffffffff00000000);
          SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                    (param_1,*(undefined8 *)(lVar11 + 0x40),lVar16 + 0xc0,local_5f8);
          lVar11 = *(longlong *)(lVar16 + 0x48);
          if (*(char *)(lVar11 + 0x28) == '\0') {
            FUN_1419f3850(lVar11);
          }
          local_6e8 = (undefined8 *)((ulonglong)local_6e8 & 0xffffffff00000000);
          SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
                    (param_1,*(undefined8 *)(lVar11 + 0x40),lVar16 + 0xc6,local_638);
          lVar11 = *(longlong *)(lVar16 + 0x48);
          uVar3 = *(undefined8 *)(local_630 + 0x10);
          if (*(char *)(lVar11 + 0x28) == '\0') {
            FUN_1419f3850(lVar11);
          }
          uVar5 = *(undefined8 *)(lVar11 + 0x40);
          local_650 = (undefined8 *)FUN_141a156e0();
          if (*(short *)(lVar16 + 0xce) != 0) {
            uVar2 = *(ushort *)(lVar16 + 0xcc);
            puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar20 + 5;
            if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
              FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
              puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar13 = puVar20 + 5;
            }
            *(undefined8 **)(param_1 + 0x30) = puVar13;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            **(undefined8 **)(param_1 + 8) = puVar20;
            *(undefined8 **)(param_1 + 8) = puVar20 + 1;
            puVar20[1] = 0;
            *(uint *)(puVar20 + 3) = (uint)uVar2;
            *puVar20 = &PTR_LAB_143f59c80;
            puVar20[2] = uVar5;
            puVar20[4] = uVar3;
          }
          puVar13 = local_650;
          puVar25 = (ulonglong *)(param_1 + 0x30);
          if (*(short *)(lVar16 + 0xd2) != 0) {
            uVar2 = *(ushort *)(lVar16 + 0xd0);
            puVar21 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
            puVar20 = puVar21 + 5;
            if (*(undefined8 **)(param_1 + 0x38) < puVar20) {
              FMemStackBase::AllocateNewChunk(puVar25);
              puVar21 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
              puVar20 = puVar21 + 5;
            }
            *puVar25 = (ulonglong)puVar20;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            **(undefined8 **)(param_1 + 8) = puVar21;
            *(undefined8 **)(param_1 + 8) = puVar21 + 1;
            puVar21[1] = 0;
            *puVar21 = &PTR_LAB_143f59c70;
            puVar21[2] = uVar5;
            *(uint *)(puVar21 + 3) = (uint)uVar2;
            puVar21[4] = puVar13;
          }
        }
        uVar9 = local_658;
        puVar25 = (ulonglong *)(param_1 + 0x30);
        local_6a0 = 1;
        local_6a8 = 0;
        local_628 = (undefined8 *)CONCAT44(local_658,local_658);
        local_6b8 = local_628;
        local_618 = local_658;
        uStack_614 = local_658;
        local_6c0 = (undefined8 *)CONCAT44(local_658,local_658);
        local_6d8 = 0;
        local_6e0 = 0;
        local_6e8 = (undefined8 *)CONCAT44(local_6e8._4_4_,fVar28);
        local_6d0 = fVar28;
        local_6c8 = fVar28;
        local_6b0 = lVar10;
        DrawRectangle();
        local_450 = 0;
        local_478 = local_674;
        puVar20 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
        uVar3 = local_620[1];
        plVar17 = (longlong *)*local_620;
        local_454 = local_688;
        puVar13 = puVar20 + 10;
        local_474 = 0xffffffffffffffff;
        uStack_46c = 0xffffffffffffffff;
        local_464 = 0xffffffffffffffff;
        uStack_45c = 0xffffffffffffffff;
        if (*(undefined8 **)(param_1 + 0x38) < puVar13) {
          FMemStackBase::AllocateNewChunk(puVar25,0x58);
          puVar20 = (undefined8 *)(*puVar25 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar20 + 10;
        }
        *puVar25 = (ulonglong)puVar13;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar20;
        *(undefined8 **)(param_1 + 8) = puVar20 + 1;
        puVar20[1] = 0;
        *puVar20 = &PTR_LAB_143f489f0;
        *(uint *)(puVar20 + 2) = local_478;
        *(undefined4 *)((longlong)puVar20 + 0x14) = (undefined4)local_474;
        *(undefined4 *)(puVar20 + 3) = local_474._4_4_;
        *(undefined4 *)((longlong)puVar20 + 0x1c) = (undefined4)uStack_46c;
        *(undefined4 *)(puVar20 + 4) = uStack_46c._4_4_;
        *(undefined4 *)((longlong)puVar20 + 0x24) = (undefined4)local_464;
        *(undefined4 *)(puVar20 + 5) = local_464._4_4_;
        *(undefined4 *)((longlong)puVar20 + 0x2c) = (undefined4)uStack_45c;
        *(undefined4 *)(puVar20 + 6) = uStack_45c._4_4_;
        *(uint *)((longlong)puVar20 + 0x34) = local_454;
        *(undefined4 *)(puVar20 + 7) = (undefined4)local_450;
        *(undefined4 *)((longlong)puVar20 + 0x3c) = local_450._4_4_;
        puVar20[8] = plVar17;
        puVar20[9] = uVar3;
        lVar10 = (**(code **)(*plVar17 + 8))(plVar17);
        if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar20[8] + 0x18))(), lVar10 == 0)
           ) {
          (**(code **)(*(longlong *)puVar20[8] + 0x20))();
        }
        lVar10 = (**(code **)(*(longlong *)puVar20[9] + 8))();
        if ((lVar10 == 0) && (lVar10 = (**(code **)(*(longlong *)puVar20[9] + 0x18))(), lVar10 == 0)
           ) {
          (**(code **)(*(longlong *)puVar20[9] + 0x20))();
        }
        local_674 = local_674 + 1;
      } while ((int)local_674 < 6);
      local_688 = local_688 + 1;
    } while ((int)local_688 < local_684);
  }
  return;
}



// FUNCTION 141b9b900 FUN_141b9b900 body=199 status=ok
// SIG undefined FUN_141b9b900(void)

int * FUN_141b9b900(longlong *param_1,int *param_2,float *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FCrc::MemCrc_DEPRECATED(param_3,0xc);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x140;
        if (((*param_3 == *(float *)(lVar4 + lVar1)) &&
            (param_3[1] == *(float *)(lVar4 + 4 + lVar1))) &&
           (param_3[2] == *(float *)(lVar4 + 8 + lVar1))) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x130 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141b9b9d0 FindId body=179 status=ok
// SIG undefined FindId(void)

int * TSet<TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink,TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined1 local_res8 [8];
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    iVar2 = TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::
            FDrawingPolicyKeyFuncs::GetKeyHash(param_3);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        pbVar4 = (byte *)TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>::Matches
                                   (lVar1 + 0x20 + (longlong)iVar2 * 0xe0,local_res8,param_3,0);
        if ((*pbVar4 & 1) != 0) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0xe0 + 0xd8 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141b9ba90 FUN_141b9ba90 body=1453 status=ok
// SIG undefined FUN_141b9ba90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b9ba90(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  undefined8 local_1e0;
  float local_1d8;
  float local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  int local_190 [2];
  undefined *local_188;
  undefined4 local_180;
  uint local_178;
  longlong *local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar13 = (longlong *)0x0;
  local_198 = local_198 & 0xffffffff00000000;
  lVar11 = *(longlong *)(param_2 + 0x3090);
  local_168 = param_5;
  local_160 = &DAT_146b09c50;
  local_158 = 0;
  local_120 = param_4;
  local_118 = param_3;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar11 + 0x38,local_190,&local_160);
  plVar15 = plVar13;
  if (local_190[0] != -1) {
    plVar15 = (longlong *)((longlong)local_190[0] * 0x20 + *(longlong *)(lVar11 + 0x38));
  }
  plVar14 = plVar15 + 2;
  if (plVar15 == (longlong *)0x0) {
    plVar14 = plVar13;
  }
  lVar11 = *plVar14;
  lVar9 = FSceneRenderTargets::Get(param_1);
  uVar1 = *(ulonglong *)(lVar9 + 0x378);
  if ((int)DAT_1464c200c < 1) {
    local_178 = 1;
  }
  else {
    local_178 = 8;
    if ((int)DAT_1464c200c < 8) {
      local_178 = DAT_1464c200c;
    }
  }
  uVar2 = *(ulonglong *)(param_2 + 0x1aa0);
  local_190[0] = (int)((longlong)
                       ((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) /
                      (longlong)(int)local_178);
  local_198._4_4_ = (int)(uVar1 >> 0x20);
  iVar7 = local_198._4_4_ / (int)local_178;
  local_198 = CONCAT44(iVar7,local_190[0]);
  uVar4 = local_198;
  iVar8 = (int)((longlong)((ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff) /
               (longlong)(int)local_178);
  local_198._4_4_ = (int)(uVar2 >> 0x20);
  iVar6 = local_198._4_4_;
  local_198._4_4_ = local_198._4_4_ / (int)local_178;
  local_198 = CONCAT44(local_198._4_4_,iVar8);
  local_160 = (undefined *)local_198;
  local_198 = CONCAT44(local_198._4_4_,(uint)(*(int *)(param_2 + 0x1aa8) - (int)uVar2) / local_178);
  local_178 = (uint)(*(int *)(param_2 + 0x1aac) - iVar6) / local_178;
  local_188 = (undefined *)0x0;
  FUN_141a19150(param_1,*(undefined8 *)(*local_168 + 8),0,1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_188);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59420;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(int *)((longlong)puVar12 + 0x1c) = local_190[0];
  *(int *)(puVar12 + 4) = iVar7;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_c8 = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_bc = 0x26;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_14049afe0(param_1,&local_108);
  local_d8 = FUN_1404a0ce0();
  uStack_d0 = FUN_140985530();
  local_c8 = FUN_1409853f0();
  lVar9 = *(longlong *)(param_2 + 0x3090);
  local_180 = 0;
  local_188 = &DAT_146a28c00;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar9 + 0x38,local_190,&local_188);
  if (local_190[0] == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)local_190[0] * 0x20 + *(longlong *)(lVar9 + 0x38);
  }
  plVar15 = (longlong *)(lVar9 + 0x10);
  if (lVar9 == 0) {
    plVar15 = plVar13;
  }
  lVar9 = *plVar15;
  local_108 = DAT_1464c2720;
  if (lVar11 == 0) {
    local_188 = (undefined *)0x0;
    plVar15 = (longlong *)0x1;
    plStack_100 = plVar13;
  }
  else {
    local_188 = *(undefined **)(lVar11 + 0x48);
    if (local_188[0x28] == '\0') {
      FUN_1419f3850(local_188);
    }
    plStack_100 = *(longlong **)(local_188 + 0x38);
    plVar15 = plVar13;
  }
  if (plVar15 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_188);
  }
  bVar5 = false;
  if (lVar9 == 0) {
    bVar5 = true;
    local_e8 = 0;
    local_188 = (undefined *)0x0;
  }
  else {
    local_188 = *(undefined **)(lVar9 + 0x48);
    if (local_188[0x28] == '\0') {
      FUN_1419f3850(local_188);
    }
    local_e8 = *(undefined8 *)(local_188 + 0x40);
  }
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_188);
  }
  local_bc = local_bc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_108,2,1);
  lVar3 = *(longlong *)(lVar9 + 0x48);
  local_188 = *(undefined **)(param_2 + 0x20);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  FUN_141aa9590(lVar9,param_1,*(undefined8 *)(lVar3 + 0x40),local_188);
  lVar3 = *(longlong *)(lVar9 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_1e0 = local_120;
  local_1e8 = param_2;
  FUN_141b86de0(lVar9 + 0xc0,param_1,*(undefined8 *)(lVar3 + 0x40),local_118);
  local_1a0 = 1;
  local_1a8 = 1;
  local_1b8 = uVar4;
  local_1c0 = uVar4;
  local_1c8 = (float)local_178;
  local_1d0 = (float)(local_198 & 0xffffffff);
  local_1d8 = (float)local_160._4_4_;
  local_1e0 = CONCAT44(local_1e0._4_4_,(float)iVar8);
  local_1e8 = CONCAT44(local_1e8._4_4_,local_1c8);
  local_1b0 = lVar11;
  DrawRectangle();
  local_150 = 0xffffffff00000000;
  uStack_148 = 0xffffffffffffffff;
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_140 = 0xffffffffffffffff;
  uStack_138 = 0xffffffffffffffff;
  local_130 = 0xffffffff;
  uStack_128 = 0;
  uVar4 = *(undefined8 *)(*local_168 + 0x10);
  plVar15 = *(longlong **)(*local_168 + 8);
  puVar10 = puVar12 + 10;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x58);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 10;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar12 + 2) = (undefined4)local_150;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_150._4_4_;
  *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_148;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_148._4_4_;
  *(undefined4 *)(puVar12 + 4) = (undefined4)local_140;
  *(undefined4 *)((longlong)puVar12 + 0x24) = local_140._4_4_;
  *(undefined4 *)(puVar12 + 5) = (undefined4)uStack_138;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_138._4_4_;
  *(undefined4 *)(puVar12 + 6) = (undefined4)local_130;
  *(undefined4 *)((longlong)puVar12 + 0x34) = local_130._4_4_;
  *(undefined4 *)(puVar12 + 7) = (undefined4)uStack_128;
  *(undefined4 *)((longlong)puVar12 + 0x3c) = uStack_128._4_4_;
  puVar12[8] = plVar15;
  puVar12[9] = uVar4;
  lVar11 = (**(code **)(*plVar15 + 8))(plVar15);
  if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar12[8] + 0x18))(), lVar11 == 0)) {
    (**(code **)(*(longlong *)puVar12[8] + 0x20))();
  }
  lVar11 = (**(code **)(*(longlong *)puVar12[9] + 8))();
  if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar12[9] + 0x18))(), lVar11 == 0)) {
    (**(code **)(*(longlong *)puVar12[9] + 0x20))();
  }
  return;
}



// FUNCTION 141b9c040 FUN_141b9c040 body=378 status=ok
// SIG undefined FUN_141b9c040(void)

void FUN_141b9c040(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *local_48;
  uint local_40;
  int local_3c;
  
  plVar5 = (longlong *)0x0;
  iVar7 = 0;
  uVar3 = 0;
  local_48 = (longlong *)0x0;
  iVar8 = 0;
  local_3c = 0;
  if (0 < (int)param_2[1]) {
    lVar9 = 0;
    do {
      iVar4 = 0;
      lVar11 = *param_2 + lVar9;
      if (0 < *(int *)(lVar11 + 0x1c68)) {
        lVar10 = 0;
        do {
          lVar1 = *(longlong *)(lVar10 + *(longlong *)(lVar11 + 0x1c60));
          if ((*(uint *)(*(longlong *)(lVar11 + 0x1b30) + 4 + (longlong)*(int *)(lVar1 + 0xe8) * 8)
              & 0x40000) != 0) {
            iVar6 = (int)uVar3;
            for (plVar2 = plVar5; plVar2 != plVar5 + iVar6; plVar2 = plVar2 + 1) {
              if (*plVar2 == lVar1) {
                if ((int)((longlong)plVar2 - (longlong)plVar5 >> 3) != -1) goto LAB_141b9c12e;
                break;
              }
            }
            local_40 = iVar6 + 1;
            if (iVar7 < (int)local_40) {
              FUN_140822430(&local_48,uVar3);
              plVar5 = local_48;
              iVar7 = local_3c;
            }
            uVar3 = (ulonglong)local_40;
            plVar5[iVar6] = lVar1;
          }
LAB_141b9c12e:
          iVar4 = iVar4 + 1;
          lVar10 = lVar10 + 8;
        } while (iVar4 < *(int *)(lVar11 + 0x1c68));
      }
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 0x30d0;
    } while (iVar8 < (int)param_2[1]);
    if (0 < (int)uVar3) {
      do {
        (**(code **)(**(longlong **)(*plVar5 + 8) + 0x80))
                  (*(longlong **)(*plVar5 + 8),param_1,param_3);
        plVar5 = plVar5 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}



// FUNCTION 141b9c1c0 FUN_141b9c1c0 body=158 status=ok
// SIG undefined FUN_141b9c1c0(void)

undefined8 * FUN_141b9c1c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  local_res20 = 0;
  local_res10[0] = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x48);
  local_res8 = 0;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  *param_2 = *(undefined8 *)(param_1 + 0x48);
  param_2[1] = *(undefined8 *)(lVar1 + 0x38);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = uVar2;
  param_2[5] = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
  return param_2;
}



// FUNCTION 141b9c260 GetKeyHash body=264 status=ok
// SIG undefined GetKeyHash(void)

uint TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::
     FDrawingPolicyKeyFuncs::GetKeyHash(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)(*(ulonglong *)(param_1 + 0x18) >> 4);
  uVar3 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar4 = -(uVar3 + iVar1) ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar3) - uVar4 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar3 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  uVar2 = (int)(*(ulonglong *)(param_1 + 0x48) >> 4) - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar3 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar3 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}



// FUNCTION 141b9c370 FUN_141b9c370 body=325 status=ok
// SIG undefined FUN_141b9c370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9c370(longlong param_1,longlong *param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  (**(code **)(*param_2 + 0x10))(param_2,&local_58);
  local_58 = local_58 - *(float *)(param_1 + 0x8dc);
  local_54 = local_54 - *(float *)(param_1 + 0x8e0);
  local_50 = local_50 - *(float *)(param_1 + 0x8e4);
  local_4c = DAT_1464c3114 / local_4c;
  fVar6 = local_54 * local_54 + local_58 * local_58 + local_50 * local_50;
  if (0.0002 <= local_4c) {
    local_4c = 0.0002;
  }
  local_4c = local_4c * *(float *)(param_1 + 0x11ec);
  fVar5 = 6.0 - local_4c * local_4c * fVar6 * 6.0;
  if (0.0 <= fVar5) {
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
  }
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
  fVar3 = (float)uVar2 * _DAT_1464c3140;
  fVar1 = (float)(**(code **)(*param_2 + 0x100))(param_2);
  if (fVar3 != 0.0) {
    fVar1 = (fVar3 - SQRT(fVar6)) / fVar1;
    if (fVar1 < 0.0) {
      fVar1 = 0.0;
      uVar4 = 0;
      goto LAB_141b9c48a;
    }
    if (fVar1 < 1.0) goto LAB_141b9c48a;
  }
  fVar1 = 1.0;
  uVar4 = 0;
LAB_141b9c48a:
  return CONCAT44(uVar4,fVar1 * fVar5);
}



// FUNCTION 141b9c4c0 GetLightPropagationVolume body=30 status=ok
// SIG undefined GetLightPropagationVolume(void)

undefined8 FSceneViewState::GetLightPropagationVolume(longlong param_1,int param_2,char param_3)

{
  if ((2 < param_2) && ((*(char *)(param_1 + 0x4e8) == '\0' || (param_3 != '\0')))) {
    return *(undefined8 *)(param_1 + 0x4e0);
  }
  return 0;
}



// FUNCTION 141b9c4e0 GetLightShaftDownsampleFactor body=28 status=ok
// SIG undefined GetLightShaftDownsampleFactor(void)

int GetLightShaftDownsampleFactor(void)

{
  int iVar1;
  
  if (DAT_1464c200c < 1) {
    return 1;
  }
  iVar1 = 8;
  if (DAT_1464c200c < 8) {
    iVar1 = DAT_1464c200c;
  }
  return iVar1;
}



// FUNCTION 141b9c500 FUN_141b9c500 body=224 status=ok
// SIG undefined FUN_141b9c500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141b9c500(void)

{
  undefined8 uVar1;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  longlong local_188 [2];
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a495c8) {
    _Init_thread_header(&DAT_146a495c8);
    if (DAT_146a495c8 == -1) {
      uVar1 = FUN_142741330(local_178);
      local_198 = 2;
      (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_188,uVar1,&DAT_146b09848);
      _DAT_146a495c0 = local_188[0];
      if (local_188[0] != 0) {
        LOCK();
        *(int *)(local_188[0] + 8) = *(int *)(local_188[0] + 8) + 1;
        UNLOCK();
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_188);
      atexit((_func_5014 *)&LAB_143e8e370);
      _Init_thread_footer(&DAT_146a495c8);
    }
  }
  return &DAT_146a495c0;
}



// FUNCTION 141b9c5e0 GetOutput body=33 status=ok
// SIG undefined GetOutput(void)

undefined8 FRCSeparateTranslucensyPassES2::GetOutput(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x10))();
    uVar1 = FRenderingCompositeOutputRef::GetOutput(uVar1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 141b9c610 FUN_141b9c610 body=3385 status=ok
// SIG undefined FUN_141b9c610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141b9d147) */

void FUN_141b9c610(int param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,longlong *param_7,longlong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_5b8 [32];
  undefined8 local_598;
  float fStack_590;
  undefined4 uStack_58c;
  int local_588;
  longlong local_578;
  longlong lStack_570;
  int local_568 [4];
  undefined8 local_558;
  undefined8 uStack_550;
  int local_548 [2];
  longlong local_540;
  longlong local_538;
  longlong local_530;
  longlong local_528;
  longlong local_520;
  longlong local_518;
  longlong local_510;
  undefined8 *local_508 [2];
  longlong local_4f8;
  longlong lStack_4f0;
  longlong local_4e8;
  longlong lStack_4e0;
  longlong local_4d8;
  longlong lStack_4d0;
  int local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  longlong local_4b8 [3];
  undefined4 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined4 local_488;
  undefined8 local_478 [8];
  undefined8 local_438 [8];
  longlong local_3f8;
  longlong lStack_3f0;
  longlong local_3e8;
  undefined8 local_3d8 [8];
  undefined8 local_398 [8];
  longlong local_358;
  char local_350;
  int local_348;
  undefined8 local_344;
  undefined8 uStack_33c;
  undefined1 local_328 [64];
  undefined1 local_2e8 [336];
  undefined1 local_198 [336];
  ulonglong local_48;
  
  plVar11 = local_4b8;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_5b8;
  puVar13 = (undefined8 *)0x0;
  local_568[0] = 0;
  local_588 = param_1;
  if (param_7 == (longlong *)0x0) {
    if (param_4 == (undefined8 *)0x0) {
      *(undefined4 *)(param_2 + 10) = 0x3f800000;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2[2] = 0x3f8000003f800000;
      param_2[4] = 0;
      param_2[6] = 0x3f8000003f800000;
      param_2[8] = 0;
      param_2[9] = 0x3f8000003f800000;
      *(undefined4 *)(param_2 + 3) = 0x3f800000;
      *(undefined4 *)(param_2 + 5) = 0;
      fStack_590 = 1.0;
      *(undefined4 *)(param_2 + 7) = 0x3f800000;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x18] = 0;
      param_2[0x19] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      param_2[0x1e] = 0;
      param_2[0x1f] = 0;
      param_2[0x20] = 0;
      param_2[0x21] = 0;
      param_2[0x26] = 0;
      param_2[0x27] = 0;
      param_2[0x22] = 0;
      param_2[0x23] = 0;
      param_2[0x28] = 0;
      param_2[0x29] = 0;
      param_2[0x24] = 0;
      param_2[0x25] = 0;
      param_2[0x2a] = 0;
      param_2[0x2b] = 0;
      param_2[0x2c] = 0;
      param_2[0x2d] = 0;
      param_2[0x2e] = 0;
      param_2[0x2f] = 0;
    }
    else {
      *param_2 = *param_4;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_4 + 1);
      param_2[2] = *(undefined8 *)((longlong)param_4 + 0xc);
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_4 + 0x14);
      param_2[4] = param_4[3];
      *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_4 + 4);
      param_2[6] = *(undefined8 *)((longlong)param_4 + 0x24);
      *(undefined4 *)(param_2 + 7) = *(undefined4 *)((longlong)param_4 + 0x2c);
      uVar10 = param_4[0x4b];
      param_2[8] = param_4[0x4a];
      param_2[9] = uVar10;
      *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_4 + 0x48);
      uVar10 = param_4[0x2d];
      param_2[0x10] = param_4[0x2c];
      param_2[0x11] = uVar10;
      uVar10 = param_4[0x33];
      param_2[0x16] = param_4[0x32];
      param_2[0x17] = uVar10;
      uVar10 = param_4[0x2f];
      param_2[0x12] = param_4[0x2e];
      param_2[0x13] = uVar10;
      uVar10 = param_4[0x35];
      param_2[0x18] = param_4[0x34];
      param_2[0x19] = uVar10;
      uVar10 = param_4[0x31];
      param_2[0x14] = param_4[0x30];
      param_2[0x15] = uVar10;
      uVar10 = param_4[0x37];
      param_2[0x1a] = param_4[0x36];
      param_2[0x1b] = uVar10;
      uVar10 = param_4[0x39];
      param_2[0x1c] = param_4[0x38];
      param_2[0x1d] = uVar10;
      fVar20 = *(float *)(param_4 + 0x2e);
      fVar21 = *(float *)(param_4 + 0x30);
      *(float *)(param_2 + 0x1e) = *(float *)(param_4 + 0x2c) * 1.7724539;
      *(float *)((longlong)param_2 + 0xf4) = fVar20 * 1.7724539;
      *(float *)(param_2 + 0x1f) = fVar21 * 1.7724539;
      *(undefined4 *)((longlong)param_2 + 0xfc) = 0x3fe2dfc5;
      uVar10 = param_4[0x3b];
      param_2[0x20] = param_4[0x3a];
      param_2[0x21] = uVar10;
      uVar10 = param_4[0x41];
      param_2[0x26] = param_4[0x40];
      param_2[0x27] = uVar10;
      uVar10 = param_4[0x3d];
      param_2[0x22] = param_4[0x3c];
      param_2[0x23] = uVar10;
      uVar10 = param_4[0x43];
      param_2[0x28] = param_4[0x42];
      param_2[0x29] = uVar10;
      uVar10 = param_4[0x3f];
      param_2[0x24] = param_4[0x3e];
      param_2[0x25] = uVar10;
      uVar10 = param_4[0x45];
      param_2[0x2a] = param_4[0x44];
      param_2[0x2b] = uVar10;
      uVar10 = param_4[0x47];
      param_2[0x2c] = param_4[0x46];
      param_2[0x2d] = uVar10;
      fVar20 = *(float *)(param_4 + 0x3c);
      fStack_590 = *(float *)(param_4 + 0x3e) * 1.7724539;
      local_598 = CONCAT44(fVar20 * 1.7724539,*(float *)(param_4 + 0x3a) * 1.7724539);
      uStack_58c = 0x3fe2dfc5;
      *(float *)(param_2 + 0x2e) = *(float *)(param_4 + 0x3a) * 1.7724539;
      *(float *)((longlong)param_2 + 0x174) = fVar20 * 1.7724539;
      *(float *)(param_2 + 0x2f) = fStack_590;
      *(undefined4 *)((longlong)param_2 + 0x17c) = 0x3fe2dfc5;
    }
  }
  else {
    FUN_141b9b900(param_7,local_548,param_5);
    puVar9 = puVar13;
    if (local_548[0] != -1) {
      puVar9 = (undefined8 *)((longlong)local_548[0] * 0x140 + *param_7);
    }
    puVar18 = puVar9 + 2;
    if (puVar9 == (undefined8 *)0x0) {
      puVar18 = puVar13;
    }
    if (puVar18 == (undefined8 *)0x0) {
      local_508[0] = param_5;
      FUN_141b83b10(param_7,local_568,local_508,0);
      local_598 = *param_5;
      fStack_590 = *(float *)(param_5 + 1);
      puVar18 = (undefined8 *)(*param_7 + 0x10 + (longlong)local_568[0] * 0x140);
      FUN_141ba0b10(&local_598,param_7,puVar18);
    }
    uVar10 = puVar18[0x21];
    *(undefined4 *)((longlong)puVar18 + 0x114) = param_6;
    param_2[8] = puVar18[0x20];
    param_2[9] = uVar10;
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(puVar18 + 0x22);
    uVar10 = puVar18[1];
    param_2[0x10] = *puVar18;
    param_2[0x11] = uVar10;
    uVar10 = puVar18[7];
    param_2[0x16] = puVar18[6];
    param_2[0x17] = uVar10;
    uVar10 = puVar18[3];
    param_2[0x12] = puVar18[2];
    param_2[0x13] = uVar10;
    uVar10 = puVar18[9];
    param_2[0x18] = puVar18[8];
    param_2[0x19] = uVar10;
    uVar10 = puVar18[5];
    param_2[0x14] = puVar18[4];
    param_2[0x15] = uVar10;
    uVar10 = puVar18[0xb];
    param_2[0x1a] = puVar18[10];
    param_2[0x1b] = uVar10;
    uVar10 = puVar18[0xd];
    param_2[0x1c] = puVar18[0xc];
    param_2[0x1d] = uVar10;
    uVar10 = puVar18[0xf];
    param_2[0x1e] = puVar18[0xe];
    param_2[0x1f] = uVar10;
    uVar10 = puVar18[0x11];
    param_2[0x20] = puVar18[0x10];
    param_2[0x21] = uVar10;
    uVar10 = puVar18[0x17];
    param_2[0x26] = puVar18[0x16];
    param_2[0x27] = uVar10;
    uVar10 = puVar18[0x13];
    param_2[0x22] = puVar18[0x12];
    param_2[0x23] = uVar10;
    uVar10 = puVar18[0x19];
    param_2[0x28] = puVar18[0x18];
    param_2[0x29] = uVar10;
    uVar10 = puVar18[0x15];
    param_2[0x24] = puVar18[0x14];
    param_2[0x25] = uVar10;
    uVar10 = puVar18[0x1b];
    param_2[0x2a] = puVar18[0x1a];
    param_2[0x2b] = uVar10;
    uVar10 = puVar18[0x1d];
    param_2[0x2c] = puVar18[0x1c];
    param_2[0x2d] = uVar10;
    uVar10 = puVar18[0x1f];
    param_2[0x2e] = puVar18[0x1e];
    param_2[0x2f] = uVar10;
    *param_2 = 0;
    param_2[2] = 0x3f8000003f800000;
    *(undefined4 *)(param_2 + 1) = 0;
    param_2[4] = 0;
    *(undefined4 *)(param_2 + 3) = 0x3f800000;
    *(undefined4 *)(param_2 + 5) = 0;
    lStack_570 = CONCAT44(lStack_570._4_4_,0x3f800000);
    param_2[6] = 0x3f8000003f800000;
    *(undefined4 *)(param_2 + 7) = 0x3f800000;
  }
  iVar17 = local_588;
  if ((((local_588 < 2) || (param_3 == 0)) || (*(char *)(param_3 + 0x28) == '\0')) ||
     (DAT_1464c9c1a == '\0')) {
    if (local_588 < 1) {
      param_2[0x47] = *(undefined8 *)(DAT_146ac3e00 + 0x30);
      param_2[0x48] = *(undefined8 *)(DAT_146ac3e00 + 0x30);
      param_2[0x49] = *(undefined8 *)(DAT_146ac3e00 + 0x30);
      param_2[0x51] = *(undefined8 *)(DAT_146ac3e00 + 0x38);
      param_2[0x52] = *(undefined8 *)(DAT_146ac3e00 + 0x38);
      param_2[0x53] = *(undefined8 *)(DAT_146ac3e00 + 0x38);
      param_2[0x4a] = *(undefined8 *)(DAT_146ac3e00 + 0x30);
      param_2[0x4b] = *(undefined8 *)(DAT_146ac3e00 + 0x30);
      lVar14 = DAT_146ac3e00;
    }
    else {
      param_2[0x47] = *(undefined8 *)(DAT_146ac3e30 + 0x30);
      param_2[0x48] = *(undefined8 *)(DAT_146ac3e30 + 0x30);
      param_2[0x49] = *(undefined8 *)(DAT_146ac3e30 + 0x30);
      param_2[0x51] = *(undefined8 *)(DAT_146ac3e30 + 0x38);
      param_2[0x52] = *(undefined8 *)(DAT_146ac3e30 + 0x38);
      param_2[0x53] = *(undefined8 *)(DAT_146ac3e30 + 0x38);
      param_2[0x4a] = *(undefined8 *)(DAT_146ac3e30 + 0x30);
      param_2[0x4b] = *(undefined8 *)(DAT_146ac3e30 + 0x30);
      lVar14 = DAT_146ac3e30;
    }
    uVar10 = *(undefined8 *)(lVar14 + 0x30);
  }
  else {
    param_2[0x47] = *(undefined8 *)(*(longlong *)(param_3 + 0x38) + 0x10);
    param_2[0x48] = *(undefined8 *)(*(longlong *)(param_3 + 0x40) + 0x10);
    param_2[0x49] = *(undefined8 *)(*(longlong *)(param_3 + 0x48) + 0x10);
    uVar10 = FUN_141a156e0();
    param_2[0x51] = uVar10;
    uVar10 = FUN_141a156e0();
    param_2[0x52] = uVar10;
    uVar10 = FUN_141a156e0();
    param_2[0x53] = uVar10;
    param_2[0x4a] = *(undefined8 *)(*(longlong *)(param_3 + 0x50) + 0x10);
    param_2[0x4b] = *(undefined8 *)(*(longlong *)(param_3 + 0x58) + 0x10);
    uVar10 = *(undefined8 *)(*(longlong *)(param_3 + 0x60) + 0x10);
  }
  param_2[0x4c] = uVar10;
  if (param_8 == 0) {
    local_4b8[0] = 0;
    local_498 = 0;
    uStack_490 = 0;
    lVar14 = (longlong)&uStack_4a0 + 1;
    local_488 = 0;
    do {
      uVar15 = (int)puVar13 + 4;
      puVar13 = (undefined8 *)(ulonglong)uVar15;
      *(undefined4 *)(lVar14 + -1) = 0;
      lVar14 = lVar14 + 4;
    } while (uVar15 < 4);
  }
  else {
    plVar11 = (longlong *)FLightCacheInterface::GetShadowMapInteraction(param_8,local_328);
  }
  lVar14 = *plVar11;
  lStack_4f0 = plVar11[1];
  lVar19 = 2;
  local_4e8 = plVar11[2];
  lStack_4e0 = plVar11[3];
  local_4d8 = plVar11[4];
  lStack_4d0 = plVar11[5];
  local_4c8 = (int)plVar11[6];
  uStack_4c4 = *(undefined4 *)((longlong)plVar11 + 0x34);
  uStack_4c0 = (undefined4)plVar11[7];
  uStack_4bc = *(undefined4 *)((longlong)plVar11 + 0x3c);
  local_4f8 = lVar14;
  if (local_4c8 == 2) {
    param_2[0x32] = lStack_4f0;
    param_2[0x33] = local_4e8;
    fVar23 = (float)((uint)lStack_4e0 & 0xff);
    param_2[0xe] = local_4d8;
    param_2[0xf] = lStack_4d0;
    fVar20 = (float)((uint)((ulonglong)lStack_4e0 >> 8) & 0xff);
    fVar21 = (float)((uint)((ulonglong)lStack_4e0 >> 0x10) & 0xff);
    fVar22 = (float)((uint)((ulonglong)lStack_4e0 >> 0x18) & 0xff);
    local_558 = CONCAT44(fVar20,fVar23);
    uStack_550 = CONCAT44(fVar22,fVar21);
    *(float *)(param_2 + 0xc) = fVar23;
    *(float *)((longlong)param_2 + 100) = fVar20;
    *(float *)(param_2 + 0xd) = fVar21;
    *(float *)((longlong)param_2 + 0x6c) = fVar22;
    if ((lVar14 == 0) || (lVar12 = *(longlong *)(lVar14 + 0x98), lVar12 == 0)) {
      lVar12 = *(longlong *)(DAT_146ac3d68 + 0x30);
      if (lVar12 != 0) {
        LOCK();
        *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
        UNLOCK();
      }
      bVar6 = true;
      bVar4 = false;
      local_540 = lVar12;
    }
    else {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
      bVar6 = false;
      bVar4 = true;
      local_538 = lVar12;
    }
    param_2[0x4d] = lVar12;
    local_578 = lStack_4f0;
    lStack_570 = local_4e8;
    if (bVar6) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_540);
    }
    if (bVar4) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_538);
    }
    if ((lVar14 == 0) || (lVar12 = *(longlong *)(lVar14 + 0x60), *(longlong *)(lVar14 + 0x60) == 0))
    {
      lVar12 = DAT_146ac3d68;
    }
    uVar10 = *(undefined8 *)(lVar12 + 0x38);
    iVar17 = local_588;
  }
  else {
    param_2[0xc] = 0x3f8000003f800000;
    param_2[0xd] = 0x3f8000003f800000;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x4d] = *(undefined8 *)(DAT_146ac3d68 + 0x30);
    uVar10 = *(undefined8 *)(DAT_146ac3d68 + 0x38);
  }
  bVar6 = false;
  bVar4 = false;
  param_2[0x54] = uVar10;
  if (param_2[0x4d] == 0) {
    param_2[0x4d] = *(undefined8 *)(DAT_146ac3d68 + 0x30);
    param_2[0x54] = *(undefined8 *)(DAT_146ac3d68 + 0x38);
  }
  if (param_8 == 0) {
    puVar13 = (undefined8 *)FUN_141aaf600(local_198);
  }
  else {
    puVar13 = (undefined8 *)FUN_14274f0e0(param_8,local_2e8,iVar17);
  }
  bVar7 = false;
  puVar9 = local_478;
  do {
    puVar16 = puVar9;
    puVar18 = puVar13;
    uVar10 = puVar18[1];
    uVar1 = puVar18[2];
    uVar2 = puVar18[3];
    *puVar16 = *puVar18;
    puVar16[1] = uVar10;
    uVar10 = puVar18[4];
    uVar3 = puVar18[5];
    puVar16[2] = uVar1;
    puVar16[3] = uVar2;
    uVar1 = puVar18[6];
    uVar2 = puVar18[7];
    puVar16[4] = uVar10;
    puVar16[5] = uVar3;
    uVar10 = puVar18[8];
    uVar3 = puVar18[9];
    puVar16[6] = uVar1;
    puVar16[7] = uVar2;
    uVar1 = puVar18[10];
    uVar2 = puVar18[0xb];
    puVar16[8] = uVar10;
    puVar16[9] = uVar3;
    uVar10 = puVar18[0xc];
    uVar3 = puVar18[0xd];
    puVar16[10] = uVar1;
    puVar16[0xb] = uVar2;
    uVar1 = puVar18[0xe];
    uVar2 = puVar18[0xf];
    puVar16[0xc] = uVar10;
    puVar16[0xd] = uVar3;
    puVar16[0xe] = uVar1;
    puVar16[0xf] = uVar2;
    lVar19 = lVar19 + -1;
    puVar13 = puVar18 + 0x10;
    puVar9 = puVar16 + 0x10;
  } while (lVar19 != 0);
  uVar10 = puVar18[0x11];
  uVar1 = puVar18[0x12];
  uVar2 = puVar18[0x13];
  puVar16[0x10] = puVar18[0x10];
  puVar16[0x11] = uVar10;
  uVar10 = puVar18[0x14];
  uVar3 = puVar18[0x15];
  puVar16[0x12] = uVar1;
  puVar16[0x13] = uVar2;
  uVar1 = puVar18[0x16];
  uVar2 = puVar18[0x17];
  puVar16[0x14] = uVar10;
  puVar16[0x15] = uVar3;
  uVar10 = puVar18[0x18];
  uVar3 = puVar18[0x19];
  puVar16[0x16] = uVar1;
  puVar16[0x17] = uVar2;
  puVar16[0x18] = uVar10;
  puVar16[0x19] = uVar3;
  if (local_348 == 2) {
    cVar8 = FUN_142865d40(local_588);
    if ((cVar8 == '\0') || (local_350 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    lVar14 = local_358;
    if (bVar5) {
      lVar14 = local_3f8;
    }
    local_558 = local_344;
    uStack_550 = uStack_33c;
    param_2[0x30] = local_344;
    param_2[0x31] = uStack_33c;
    if (lVar14 == 0) {
      bVar4 = true;
      lVar19 = *(longlong *)(DAT_146ac3e00 + 0x30);
      local_530 = lVar19;
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
      }
    }
    else {
      lVar19 = *(longlong *)(lVar14 + 0x98);
      bVar6 = true;
      local_528 = lVar19;
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
      }
    }
    param_2[0x44] = lVar19;
    if (bVar4) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_530);
    }
    if (bVar6) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_528);
    }
    if (lStack_3f0 == 0) {
      lVar19 = *(longlong *)(DAT_146ac3d68 + 0x30);
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
      }
      bVar6 = false;
      bVar4 = true;
      local_520 = lVar19;
    }
    else {
      lVar19 = *(longlong *)(lStack_3f0 + 0x98);
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
      }
      bVar6 = true;
      bVar4 = false;
      local_518 = lVar19;
    }
    param_2[0x45] = lVar19;
    if (bVar4) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_520);
    }
    if (bVar6) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_518);
    }
    if (local_3e8 == 0) {
      lVar19 = *(longlong *)(DAT_146ac3e00 + 0x30);
      local_510 = lVar19;
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
      }
    }
    else {
      lVar19 = *(longlong *)(local_3e8 + 0x98);
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
      }
      bVar7 = true;
      local_578 = lVar19;
    }
    param_2[0x46] = lVar19;
    if (bVar7) {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_578);
    }
    if ((lVar14 == 0) || (lVar19 = *(longlong *)(lVar14 + 0x60), *(longlong *)(lVar14 + 0x60) == 0))
    {
      lVar19 = DAT_146ac3e00;
    }
    param_2[0x4e] = *(undefined8 *)(lVar19 + 0x38);
    lVar14 = DAT_146ac3d68;
    if ((lStack_3f0 != 0) && (*(longlong *)(lStack_3f0 + 0x60) != 0)) {
      lVar14 = *(longlong *)(lStack_3f0 + 0x60);
    }
    param_2[0x4f] = *(undefined8 *)(lVar14 + 0x38);
    if ((local_3e8 == 0) ||
       (lVar14 = *(longlong *)(local_3e8 + 0x60), *(longlong *)(local_3e8 + 0x60) == 0)) {
      lVar14 = DAT_146ac3e00;
    }
    param_2[0x50] = *(undefined8 *)(lVar14 + 0x38);
    if (local_350 == '\0') {
      puVar13 = local_3d8;
      puVar9 = local_398;
    }
    else {
      puVar13 = local_478;
      puVar9 = local_438;
    }
    uVar10 = puVar13[1];
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    param_2[0x34] = *puVar13;
    param_2[0x35] = uVar10;
    uVar10 = puVar13[2];
    uVar3 = puVar13[3];
    param_2[0x3c] = uVar1;
    param_2[0x3d] = uVar2;
    uVar1 = puVar9[2];
    uVar2 = puVar9[3];
    param_2[0x36] = uVar10;
    param_2[0x37] = uVar3;
    uVar10 = puVar13[4];
    uVar3 = puVar13[5];
    param_2[0x3e] = uVar1;
    param_2[0x3f] = uVar2;
    uVar1 = puVar9[4];
    uVar2 = puVar9[5];
    param_2[0x38] = uVar10;
    param_2[0x39] = uVar3;
    uVar10 = puVar13[6];
    uVar3 = puVar13[7];
    param_2[0x40] = uVar1;
    param_2[0x41] = uVar2;
    uVar1 = puVar9[6];
    uVar2 = puVar9[7];
    param_2[0x3a] = uVar10;
    param_2[0x3b] = uVar3;
    param_2[0x42] = uVar1;
    param_2[0x43] = uVar2;
  }
  else {
    param_2[0x30] = 0x3f8000003f800000;
    param_2[0x31] = 0;
    param_2[0x44] = *(undefined8 *)(DAT_146ac3e00 + 0x30);
    param_2[0x45] = *(undefined8 *)(DAT_146ac3d68 + 0x30);
    param_2[0x46] = *(undefined8 *)(DAT_146ac3e00 + 0x30);
    param_2[0x4e] = *(undefined8 *)(DAT_146ac3e00 + 0x38);
    param_2[0x4f] = *(undefined8 *)(DAT_146ac3d68 + 0x38);
    param_2[0x50] = *(undefined8 *)(DAT_146ac3e00 + 0x38);
    param_2[0x34] = 0x3f8000003f800000;
    param_2[0x35] = 0x3f8000003f800000;
    param_2[0x3c] = 0;
    param_2[0x3d] = 0;
    param_2[0x36] = 0x3f8000003f800000;
    param_2[0x37] = 0x3f8000003f800000;
    param_2[0x3e] = 0;
    param_2[0x3f] = 0;
    param_2[0x38] = 0x3f8000003f800000;
    param_2[0x39] = 0x3f8000003f800000;
    param_2[0x40] = 0;
    param_2[0x41] = 0;
    param_2[0x3a] = 0x3f8000003f800000;
    param_2[0x3b] = 0x3f8000003f800000;
    param_2[0x42] = 0;
    param_2[0x43] = 0;
  }
  return;
}



// FUNCTION 141b9d350 FUN_141b9d350 body=271 status=ok
// SIG undefined FUN_141b9d350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9d350(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int local_res10 [2];
  undefined *local_18;
  undefined4 local_10;
  
  switch(param_2) {
  case 0:
    local_18 = &DAT_146a2cf20;
    break;
  case 1:
    local_18 = &DAT_146a2d070;
    break;
  case 2:
    local_18 = &DAT_146a2d1c0;
    break;
  case 3:
    local_18 = &DAT_146a2d310;
    break;
  case 4:
    local_18 = &DAT_146a2d460;
    break;
  case 5:
    local_18 = &DAT_146a2d5b0;
    break;
  case 6:
    local_18 = &DAT_146a2d700;
    break;
  case 7:
    local_18 = &DAT_146a2d850;
    break;
  default:
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x3090);
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar2 + 0x38,local_res10,&local_18);
  if (local_res10[0] != -1) {
    lVar2 = (longlong)local_res10[0] * 0x20 + *(longlong *)(lVar2 + 0x38);
    puVar1 = (undefined8 *)(lVar2 + 0x10);
    if (lVar2 == 0) {
      puVar1 = (undefined8 *)0x0;
    }
    return *puVar1;
  }
  return _DAT_00000000;
}



// FUNCTION 141b9d480 FUN_141b9d480 body=320 status=ok
// SIG undefined FUN_141b9d480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9d480(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a49628 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e740;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a49628 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a49628 = 0;
        return _DAT_00000030;
      }
      DAT_146a49628 =
           TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a49628 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a49628 != 0) {
      lVar7 = DAT_146a49628;
    }
    DAT_146a49628 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a49628 + 0x30);
}



// FUNCTION 141b9d5c0 FUN_141b9d5c0 body=320 status=ok
// SIG undefined FUN_141b9d5c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9d5c0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a49648 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e750;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a49648 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a49648 = 0;
        return _DAT_00000030;
      }
      DAT_146a49648 =
           TStaticStateRHI<TStaticBlendState<7,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a49648 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a49648 != 0) {
      lVar7 = DAT_146a49648;
    }
    DAT_146a49648 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a49648 + 0x30);
}



// FUNCTION 141b9d700 FUN_141b9d700 body=320 status=ok
// SIG undefined FUN_141b9d700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9d700(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a49600 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e760;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a49600 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a49600 = 0;
        return _DAT_00000030;
      }
      DAT_146a49600 = FUN_141b8bc70(lVar7);
      return *(undefined8 *)(DAT_146a49600 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141b8bc70(lVar7);
    }
    LOCK();
    if (DAT_146a49600 != 0) {
      lVar7 = DAT_146a49600;
    }
    DAT_146a49600 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a49600 + 0x30);
}



// FUNCTION 141b9d840 FUN_141b9d840 body=320 status=ok
// SIG undefined FUN_141b9d840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9d840(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a49650 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e770;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a49650 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a49650 = 0;
        return _DAT_00000030;
      }
      DAT_146a49650 =
           TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a49650 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a49650 != 0) {
      lVar7 = DAT_146a49650;
    }
    DAT_146a49650 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a49650 + 0x30);
}



// FUNCTION 141b9d980 FUN_141b9d980 body=320 status=ok
// SIG undefined FUN_141b9d980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9d980(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a49608 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e780;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a49608 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a49608 = 0;
        return _DAT_00000030;
      }
      DAT_146a49608 =
           TStaticStateRHI<TStaticBlendState<7,0,8,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a49608 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<7,0,8,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a49608 != 0) {
      lVar7 = DAT_146a49608;
    }
    DAT_146a49608 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a49608 + 0x30);
}



// FUNCTION 141b9dac0 FUN_141b9dac0 body=320 status=ok
// SIG undefined FUN_141b9dac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9dac0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a495e0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e790;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a495e0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a495e0 = 0;
        return _DAT_00000030;
      }
      DAT_146a495e0 =
           TStaticStateRHI<TStaticBlendState<8,0,8,0,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a495e0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<8,0,8,0,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a495e0 != 0) {
      lVar7 = DAT_146a495e0;
    }
    DAT_146a495e0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a495e0 + 0x30);
}



// FUNCTION 141b9dc00 FUN_141b9dc00 body=320 status=ok
// SIG undefined FUN_141b9dc00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9dc00(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a49660 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e7a0;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a49660 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a49660 = 0;
        return _DAT_00000030;
      }
      DAT_146a49660 = FUN_141b8beb0(lVar7);
      return *(undefined8 *)(DAT_146a49660 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_141b8beb0(lVar7);
    }
    LOCK();
    if (DAT_146a49660 != 0) {
      lVar7 = DAT_146a49660;
    }
    DAT_146a49660 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a49660 + 0x30);
}



// FUNCTION 141b9dd40 FUN_141b9dd40 body=320 status=ok
// SIG undefined FUN_141b9dd40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9dd40(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a495e8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e7b0;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a495e8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a495e8 = 0;
        return _DAT_00000030;
      }
      DAT_146a495e8 =
           TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a495e8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a495e8 != 0) {
      lVar7 = DAT_146a495e8;
    }
    DAT_146a495e8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a495e8 + 0x30);
}



// FUNCTION 141b9de80 FUN_141b9de80 body=320 status=ok
// SIG undefined FUN_141b9de80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9de80(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a495f0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e7c0;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a495f0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a495f0 = 0;
        return _DAT_00000030;
      }
      DAT_146a495f0 =
           TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a495f0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a495f0 != 0) {
      lVar7 = DAT_146a495f0;
    }
    DAT_146a495f0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a495f0 + 0x30);
}



// FUNCTION 141b9dfc0 FUN_141b9dfc0 body=320 status=ok
// SIG undefined FUN_141b9dfc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9dfc0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a49620 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e7d0;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a49620 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a49620 = 0;
        return _DAT_00000030;
      }
      DAT_146a49620 =
           TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a49620 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a49620 != 0) {
      lVar7 = DAT_146a49620;
    }
    DAT_146a49620 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a49620 + 0x30);
}



// FUNCTION 141b9e100 FUN_141b9e100 body=320 status=ok
// SIG undefined FUN_141b9e100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9e100(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a49658 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e7e0;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a49658 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a49658 = 0;
        return _DAT_00000030;
      }
      DAT_146a49658 =
           TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a49658 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a49658 != 0) {
      lVar7 = DAT_146a49658;
    }
    DAT_146a49658 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a49658 + 0x30);
}



// FUNCTION 141b9e240 FUN_141b9e240 body=320 status=ok
// SIG undefined FUN_141b9e240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9e240(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a495f8 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e7f0;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a495f8 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a495f8 = 0;
        return _DAT_00000030;
      }
      DAT_146a495f8 =
           TStaticStateRHI<TStaticBlendState<15,0,0,6,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a495f8 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,0,6,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a495f8 != 0) {
      lVar7 = DAT_146a495f8;
    }
    DAT_146a495f8 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a495f8 + 0x30);
}



// FUNCTION 141b9e380 FUN_141b9e380 body=320 status=ok
// SIG undefined FUN_141b9e380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9e380(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a49640 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e800;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a49640 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a49640 = 0;
        return _DAT_00000030;
      }
      DAT_146a49640 =
           TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,0,2,0,7,0,0,0,0,128>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a49640 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,0,2,0,7,0,0,0,0,128>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a49640 != 0) {
      lVar7 = DAT_146a49640;
    }
    DAT_146a49640 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a49640 + 0x30);
}



// FUNCTION 141b9e4c0 FUN_141b9e4c0 body=320 status=ok
// SIG undefined FUN_141b9e4c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9e4c0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a49610 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e810;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a49610 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a49610 = 0;
        return _DAT_00000030;
      }
      DAT_146a49610 =
           TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a49610 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a49610 != 0) {
      lVar7 = DAT_146a49610;
    }
    DAT_146a49610 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a49610 + 0x30);
}



// FUNCTION 141b9e600 FUN_141b9e600 body=320 status=ok
// SIG undefined FUN_141b9e600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141b9e600(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (DAT_146a49618 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141b9e820;
        *(undefined1 **)(lVar7 + 0x18) = local_res10;
        lVar5 = plVar8[2];
        lVar7 = plVar8[1];
        lVar3 = *plVar8;
        lVar4 = *(longlong *)(lVar3 + 0x28);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
          UNLOCK();
        }
        FUN_1404a4fe0(lVar3,lVar7,(int)lVar5,1);
        if (lVar4 != 0) {
          LOCK();
          piVar1 = (int *)(lVar4 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar4);
          }
        }
        FScopedEvent::~FScopedEvent(local_res10);
        return *(undefined8 *)(DAT_146a49618 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146a49618 = 0;
        return _DAT_00000030;
      }
      DAT_146a49618 =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146a49618 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146a49618 != 0) {
      lVar7 = DAT_146a49618;
    }
    DAT_146a49618 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146a49618 + 0x30);
}



// FUNCTION 141b9e830 FUN_141b9e830 body=11 status=ok
// SIG undefined FUN_141b9e830(void)

undefined8 FUN_141b9e830(longlong param_1,uint param_2)

{
  return *(undefined8 *)(param_1 + 0x1170 + (ulonglong)param_2 * 8);
}



// FUNCTION 141b9e840 GetShaderParams body=673 status=ok
// SIG undefined GetShaderParams(void)

void FLightPropagationVolume::GetShaderParams(longlong param_1,longlong param_2)

{
  longlong local_res8 [4];
  
  *(undefined8 *)(param_2 + 8) =
       *(undefined8 *)
        (*(longlong *)((ulonglong)(1 - *(int *)(param_1 + 0x16c)) * 0x38 + 0x10 + param_1) + 0x10);
  *(undefined8 *)(param_2 + 0x40) =
       *(undefined8 *)
        (*(longlong *)((ulonglong)*(uint *)(param_1 + 0x16c) * 0x38 + 0x10 + param_1) + 0x18);
  *(undefined8 *)(param_2 + 0x10) =
       *(undefined8 *)
        (*(longlong *)((ulonglong)(1 - *(int *)(param_1 + 0x16c)) * 0x38 + 0x18 + param_1) + 0x10);
  *(undefined8 *)(param_2 + 0x48) =
       *(undefined8 *)
        (*(longlong *)((ulonglong)*(uint *)(param_1 + 0x16c) * 0x38 + 0x18 + param_1) + 0x18);
  *(undefined8 *)(param_2 + 0x18) =
       *(undefined8 *)
        (*(longlong *)((ulonglong)(1 - *(int *)(param_1 + 0x16c)) * 0x38 + 0x20 + param_1) + 0x10);
  *(undefined8 *)(param_2 + 0x50) =
       *(undefined8 *)
        (*(longlong *)((ulonglong)*(uint *)(param_1 + 0x16c) * 0x38 + 0x20 + param_1) + 0x18);
  *(undefined8 *)(param_2 + 0x20) =
       *(undefined8 *)
        (*(longlong *)((ulonglong)(1 - *(int *)(param_1 + 0x16c)) * 0x38 + 0x28 + param_1) + 0x10);
  *(undefined8 *)(param_2 + 0x58) =
       *(undefined8 *)
        (*(longlong *)((ulonglong)*(uint *)(param_1 + 0x16c) * 0x38 + 0x28 + param_1) + 0x18);
  *(undefined8 *)(param_2 + 0x28) =
       *(undefined8 *)
        (*(longlong *)((ulonglong)(1 - *(int *)(param_1 + 0x16c)) * 0x38 + 0x30 + param_1) + 0x10);
  *(undefined8 *)(param_2 + 0x60) =
       *(undefined8 *)
        (*(longlong *)((ulonglong)*(uint *)(param_1 + 0x16c) * 0x38 + 0x30 + param_1) + 0x18);
  *(undefined8 *)(param_2 + 0x30) =
       *(undefined8 *)
        (*(longlong *)(((ulonglong)(1 - *(int *)(param_1 + 0x16c)) + 1) * 0x38 + param_1) + 0x10);
  *(undefined8 *)(param_2 + 0x68) =
       *(undefined8 *)
        (*(longlong *)(((ulonglong)*(uint *)(param_1 + 0x16c) + 1) * 0x38 + param_1) + 0x18);
  *(undefined8 *)(param_2 + 0x38) =
       *(undefined8 *)
        (*(longlong *)((ulonglong)(1 - *(int *)(param_1 + 0x16c)) * 0x38 + 0x40 + param_1) + 0x10);
  *(undefined8 *)(param_2 + 0x70) =
       *(undefined8 *)
        (*(longlong *)((ulonglong)*(uint *)(param_1 + 0x16c) * 0x38 + 0x40 + param_1) + 0x18);
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x10);
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8);
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8);
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x18);
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x10);
  *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x18);
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x10);
  *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x18);
  *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x10);
  *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 8);
  *(undefined8 *)(param_2 + 200) = *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 8);
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x18);
  *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x18);
  *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x10);
  local_res8[0] = *(longlong *)(param_1 + 0x1d0);
  if (local_res8[0] != 0) {
    LOCK();
    *(int *)(local_res8[0] + 8) = *(int *)(local_res8[0] + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_2,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9eaf0 FUN_141b9eaf0 body=490 status=ok
// SIG undefined FUN_141b9eaf0(void)

void FUN_141b9eaf0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_78 [112];
  
  local_res8 = *(undefined4 *)(param_2 + 0x538);
  local_resc = *(undefined4 *)(param_2 + 0x53c);
  puVar5 = (undefined8 *)
           FProjectedShadowInfo::GetWorldToShadowMatrix(param_2,local_78,param_3,&local_res8);
  uVar4 = puVar5[1];
  *(undefined8 *)(param_3 + 0x10) = *puVar5;
  *(undefined8 *)(param_3 + 0x18) = uVar4;
  uVar4 = puVar5[3];
  *(undefined8 *)(param_3 + 0x20) = puVar5[2];
  *(undefined8 *)(param_3 + 0x28) = uVar4;
  uVar1 = *(undefined4 *)((longlong)puVar5 + 0x24);
  uVar2 = *(undefined4 *)(puVar5 + 5);
  uVar3 = *(undefined4 *)((longlong)puVar5 + 0x2c);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(puVar5 + 4);
  *(undefined4 *)(param_3 + 0x34) = uVar1;
  *(undefined4 *)(param_3 + 0x38) = uVar2;
  *(undefined4 *)(param_3 + 0x3c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar5 + 0x34);
  uVar2 = *(undefined4 *)(puVar5 + 7);
  uVar3 = *(undefined4 *)((longlong)puVar5 + 0x3c);
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(puVar5 + 6);
  *(undefined4 *)(param_3 + 0x44) = uVar1;
  *(undefined4 *)(param_3 + 0x48) = uVar2;
  *(undefined4 *)(param_3 + 0x4c) = uVar3;
  puVar5 = (undefined8 *)FMatrix::InverseFast((undefined8 *)(param_3 + 0x10),local_78);
  uVar4 = puVar5[1];
  *(undefined8 *)(param_3 + 0x50) = *puVar5;
  *(undefined8 *)(param_3 + 0x58) = uVar4;
  uVar4 = puVar5[3];
  *(undefined8 *)(param_3 + 0x60) = puVar5[2];
  *(undefined8 *)(param_3 + 0x68) = uVar4;
  uVar4 = puVar5[5];
  *(undefined8 *)(param_3 + 0x70) = puVar5[4];
  *(undefined8 *)(param_3 + 0x78) = uVar4;
  fVar7 = *(float *)(puVar5 + 6);
  fVar9 = *(float *)((longlong)puVar5 + 0x34);
  fVar10 = *(float *)(puVar5 + 7);
  uVar1 = *(undefined4 *)((longlong)puVar5 + 0x3c);
  *(float *)(param_3 + 0x80) = fVar7;
  *(float *)(param_3 + 0x84) = fVar9;
  *(float *)(param_3 + 0x88) = fVar10;
  *(undefined4 *)(param_3 + 0x8c) = uVar1;
  fVar11 = *(float *)(param_3 + 0x50) * 1.0 + *(float *)(param_3 + 0x60) * 0.0 +
           *(float *)(param_3 + 0x70) * 0.0 + fVar7 * 0.0;
  fVar12 = *(float *)(param_3 + 0x54) * 1.0 + *(float *)(param_3 + 100) * 0.0 +
           *(float *)(param_3 + 0x74) * 0.0 + fVar9 * 0.0;
  fVar13 = *(float *)(param_3 + 0x58) * 1.0 + *(float *)(param_3 + 0x68) * 0.0 +
           *(float *)(param_3 + 0x78) * 0.0 + fVar10 * 0.0;
  fVar8 = *(float *)(param_3 + 0x50) * 0.0 + *(float *)(param_3 + 0x60) * 1.0 +
          *(float *)(param_3 + 0x70) * 0.0 + fVar7 * 0.0;
  fVar9 = *(float *)(param_3 + 0x54) * 0.0 + *(float *)(param_3 + 100) * 1.0 +
          *(float *)(param_3 + 0x74) * 0.0 + fVar9 * 0.0;
  fVar10 = *(float *)(param_3 + 0x58) * 0.0 + *(float *)(param_3 + 0x68) * 1.0 +
           *(float *)(param_3 + 0x78) * 0.0 + fVar10 * 0.0;
  lVar6 = FSceneRenderTargets::Get();
  fVar7 = (float)*(int *)(lVar6 + 0x3b0) * 0.001953125;
  *(float *)(param_3 + 0x90) =
       SQRT((fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10) *
            (fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13)) *
       (1.0 / (*(float *)(param_1 + 0x160) * fVar7 * *(float *)(param_1 + 0x160) * fVar7));
  return;
}



// FUNCTION 141b9ed00 FUN_141b9ed00 body=214 status=ok
// SIG undefined FUN_141b9ed00(void)

void FUN_141b9ed00(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 local_18;
  undefined4 uStack_10;
  float fStack_c;
  
  param_1[4] = param_2;
  (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))(*(longlong **)(param_2 + 0x30),&local_18);
  if (fStack_c <= 0.0) {
    fStack_c = 3.4028235e+38;
  }
  *param_1 = local_18;
  param_1[1] = CONCAT44(fStack_c,uStack_10);
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x108);
  param_1[2] = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x100);
  param_1[3] = uVar1;
  *(uint *)(param_1 + 5) =
       *(uint *)(param_1 + 5) ^
       ((uint)*(byte *)(*(longlong *)(param_2 + 0x30) + 0x188) ^ *(uint *)(param_1 + 5)) & 3;
  uVar2 = ((*(uint *)(*(longlong *)(param_2 + 0x30) + 0x180) >> 4 & 0xff) << 2 ^
          *(uint *)(param_1 + 5)) & 4 ^ *(uint *)(param_1 + 5);
  *(uint *)(param_1 + 5) = uVar2;
  uVar2 = ((*(uint *)(*(longlong *)(param_2 + 0x30) + 0x180) >> 5 & 0xff) << 3 ^ uVar2) & 8 ^ uVar2;
  *(uint *)(param_1 + 5) = uVar2;
  *(uint *)(param_1 + 5) =
       ((*(uint *)(*(longlong *)(param_2 + 0x30) + 0x180) >> 2 & 0xff) << 4 ^ uVar2) & 0x10 ^ uVar2;
  return;
}



// FUNCTION 141b9ede0 FUN_141b9ede0 body=104 status=ok
// SIG undefined FUN_141b9ede0(void)

void FUN_141b9ede0(longlong param_1)

{
  undefined1 local_res8 [8];
  
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,local_res8,*(longlong *)(param_1 + 0x40),&DAT_146a277f8,
               *(undefined4 *)(param_1 + 0x30));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  return;
}



// FUNCTION 141b9ee50 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9ee80 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9eeb0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,1,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,1,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9eee0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9ef10 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<7,0,8,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<7,0,8,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9ef40 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<8,0,8,0,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<8,0,8,0,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9ef70 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<8,0,0,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<8,0,0,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9efa0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9efd0 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9f000 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,1,0,0,0,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9f030 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,4,5,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9f060 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,0,6,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,0,6,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9f090 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,0,2,0,7,0,0,0,0,128>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010301;
  local_14 = 0x20000;
  local_10 = 7;
  local_c = 0x8000;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9f0f0 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x4010300;
  local_10 = 7;
  local_c = 0x80;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9f150 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x4010700;
  local_10 = 7;
  local_c = 0x80;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141b9f1b0 FUN_141b9f1b0 body=2642 status=ok
// SIG undefined FUN_141b9f1b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b9f1b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  undefined *puVar7;
  wchar_t **ppwVar8;
  wchar_t **ppwVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1d8 [32];
  wchar_t *local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  longlong local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_180;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  ulonglong local_140;
  wchar_t *local_138;
  undefined2 local_130;
  wchar_t *local_128;
  wchar_t *local_120;
  wchar_t *local_118;
  wchar_t *local_108;
  wchar_t *pwStack_100;
  undefined8 local_f8;
  wchar_t *local_f0;
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  wchar_t *local_d0;
  wchar_t *local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  wchar_t *local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_198 = param_3;
  FSceneRenderTargets::Get();
  lVar6 = 0;
  if (*(char *)(param_1 + 0x228) == '\0') {
    uStack_168 = DAT_146ab6938;
    local_140 = local_140 & 0xffffffffffffff00;
    local_138 = L"UnknownTextureVolume";
    lVar10 = 2;
    local_130 = 1;
    local_108 = L"LPV_A0";
    pwStack_100 = L"LPV_B0";
    local_f8 = L"LPV_A1";
    local_f0 = L"LPV_B1";
    local_e8 = L"LPV_A2";
    local_e0 = L"LPV_B2";
    local_d8 = L"LPV_A3";
    local_d0 = L"LPV_B3";
    local_c8 = L"LPV_A4";
    local_c0 = L"LPV_B4";
    local_b8 = L"LPV_A5";
    local_b0 = L"LPV_B5";
    local_a8 = L"LPV_A6";
    local_150 = CONCAT62(local_150._2_6_,1);
    ppwVar9 = &local_108;
    local_a0 = L"LPV_B6";
    local_178 = _DAT_146ab6928;
    uStack_170 = (undefined4)uRam0000000146ab6930;
    uStack_16c = (undefined4)((ulonglong)uRam0000000146ab6930 >> 0x20);
    uStack_164 = 0x20;
    uStack_160 = 0x2000000020;
    uStack_158 = 0x1000000000001;
    local_150 = CONCAT44(10,(undefined4)local_150);
    uStack_148 = CONCAT44(0x10008,DAT_146a9da24 | 0x200000);
    local_128 = (wchar_t *)0x2;
    do {
      lVar11 = 7;
      ppwVar8 = ppwVar9;
      do {
        local_1b8 = *ppwVar8;
        local_1a8 = 1;
        local_1b0 = 1;
        FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_178,param_1 + 0x10 + lVar6);
        lVar6 = lVar6 + 8;
        ppwVar8 = ppwVar8 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      ppwVar9 = ppwVar9 + 1;
      local_128 = (wchar_t *)((longlong)local_128 + -1);
    } while (local_128 != (wchar_t *)0x0);
    lVar6 = 0;
    local_128 = L"LPV_GV0";
    ppwVar9 = &local_128;
    local_120 = L"LPV_GV1";
    local_118 = L"LPV_GV2";
    do {
      local_1b8 = *ppwVar9;
      local_1a8 = 1;
      local_1b0 = 1;
      FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_178,param_1 + 0x140 + lVar6);
      lVar6 = lVar6 + 8;
      ppwVar9 = ppwVar9 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    local_1a8 = 1;
    local_c8 = L"UnknownTextureVolume";
    local_1b0 = 1;
    local_1b8 = L"LPVAOVolume";
    local_c0 = (wchar_t *)CONCAT62(local_c0._2_6_,1);
    local_108 = _DAT_146ab6928;
    pwStack_100 = (wchar_t *)uRam0000000146ab6930;
    local_f8 = (wchar_t *)CONCAT44(0x20,DAT_146ab6938);
    local_f0 = (wchar_t *)0x2000000020;
    local_e8 = (wchar_t *)0x1000000000001;
    local_e0 = (wchar_t *)CONCAT62(local_e0._2_6_,1);
    local_e0 = (wchar_t *)CONCAT44(3,(undefined4)local_e0);
    local_d8 = (wchar_t *)CONCAT44(0x10008,DAT_146a9da24 | 0x200000);
    local_d0 = (wchar_t *)((ulonglong)local_d0 & 0xffffffffffffff00);
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_2,&local_108,param_1 + 0x150);
    *(undefined1 *)(param_1 + 0x228) = 1;
    param_3 = local_198;
  }
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar6 + 0x38) < DAT_14685f078) &&
     (_Init_thread_header(&DAT_14685f078), DAT_14685f078 == -1)) {
    FName::FName(&DAT_14685f070,L"FLightPropagationVolumeSettings",1);
    _Init_thread_footer(&DAT_14685f078);
  }
  lVar10 = 0;
  do {
    lVar11 = *(longlong *)(param_3 + 0x19d8);
    if (lVar10 != 0) {
      lVar11 = (ulonglong)*(uint *)(lVar10 + 0x14) + 0x18 + lVar10 +
               (ulonglong)*(uint *)(lVar10 + 0x10);
    }
    lVar10 = 0;
    if (lVar11 != (longlong)*(int *)(param_3 + 0x19e0) + *(longlong *)(param_3 + 0x19d8)) {
      lVar10 = lVar11;
    }
    if (lVar10 == 0) goto LAB_141b9f533;
  } while (*(longlong *)(lVar10 + 8) != DAT_14685f070);
  puVar7 = (undefined *)(lVar10 + 0x18 + (ulonglong)*(uint *)(lVar10 + 0x14));
  if (puVar7 == (undefined *)0x0) {
LAB_141b9f533:
    if ((*(int *)(lVar6 + 0x38) < DAT_146a0e860) && (_Init_thread_header(), DAT_146a0e860 == -1)) {
      _DAT_146a0e850 = 0x3f8000003f800000;
      _DAT_146a0e858 = 0;
      _DAT_146a0e820 = 0x3f80000000000000;
      DAT_146a0e82c = 0x45a60000;
      DAT_146a0e830 = 0;
      DAT_146a0e834 = 0;
      DAT_146a0e828 = 0x3f23d70a;
      _DAT_146a0e838 = 0x3f8000003ec49ba6;
      _DAT_146a0e840 = 0x4100000000000000;
      _DAT_146a0e848 = 0x40e000003f800000;
      _Init_thread_footer();
    }
    puVar7 = &DAT_146a0e820;
    uStack_160 = 0x3f8000003ec49ba6;
    uStack_158 = 0x4100000000000000;
    uStack_16c = 0x45a60000;
    uStack_168 = 0;
    local_150 = 0x40e000003f800000;
    uStack_148 = 0x3f8000003f800000;
    local_178 = (wchar_t *)0x3f80000000000000;
    uStack_164 = 0;
    uStack_170 = 0x3f23d70a;
    local_140 = 0;
    DAT_146a0e830 = 0;
    DAT_146a0e834 = 0;
    _DAT_146a0e838 = 0x3f8000003ec49ba6;
    _DAT_146a0e820 = 0x3f80000000000000;
    DAT_146a0e828 = 0x3f23d70a;
    DAT_146a0e82c = 0x45a60000;
    _DAT_146a0e850 = 0x3f8000003f800000;
    _DAT_146a0e858 = 0;
    _DAT_146a0e840 = 0x4100000000000000;
    _DAT_146a0e848 = 0x40e000003f800000;
  }
  fVar15 = *(float *)(puVar7 + 4);
  *(float *)(param_1 + 0x164) = fVar15;
  *(bool *)(param_1 + 0x168) = 0.0 < fVar15;
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(puVar7 + 0xc);
  if ((fVar15 <= 0.0) || (*(float *)(puVar7 + 0x20) <= 0.0001)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  *(char *)(param_1 + 0x169) = cVar5;
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(puVar7 + 0x10);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(puVar7 + 0x14);
  if ((0.001 < *(float *)(puVar7 + 0x10)) || (cVar5 != '\0')) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x16a) = uVar4;
  *(undefined1 *)(param_1 + 400) = 0;
  if (0.0 < fVar15) {
    uVar14 = 0x3f800000;
    if ((*(char *)(param_1 + 0x170) != '\0') && (uVar14 = 0, *(int *)(param_1 + 0x16c) != 0)) {
      *(undefined1 *)(param_1 + 0x170) = 0;
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x98);
    uVar1 = *(undefined8 *)(param_3 + 0x8dc);
    fVar18 = *(float *)(param_1 + 0x160) * 0.03125;
    fVar17 = 1.0 / fVar18;
    fVar13 = fVar18 * _DAT_1464c201c;
    fVar15 = *(float *)(param_3 + 0x528);
    fVar16 = 16.0 - (fVar13 * *(float *)(param_3 + 0x518) + (float)uVar1) * fVar17;
    fVar12 = 16.0 - (fVar13 * *(float *)(param_3 + 0x538) + *(float *)(param_3 + 0x8e4)) * fVar17;
    *(int *)(param_1 + 0x90) = (int)fVar16;
    local_120 = (wchar_t *)CONCAT44(local_120._4_4_,fVar12);
    *(int *)(param_1 + 0x98) = (int)fVar12;
    fVar15 = 16.0 - (fVar13 * fVar15 + (float)((ulonglong)uVar1 >> 0x20)) * fVar17;
    *(int *)(param_1 + 0x94) = (int)fVar15;
    lVar6 = *(longlong *)(param_1 + 0xa8);
    *(undefined4 *)(lVar6 + 0x70) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(lVar6 + 0x74) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(lVar6 + 0x78) = *(undefined4 *)(param_1 + 0xa4);
    lVar6 = *(longlong *)(param_1 + 0xa8);
    *(undefined4 *)(lVar6 + 0x80) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(lVar6 + 0x84) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(lVar6 + 0x88) = *(undefined4 *)(param_1 + 0x98);
    local_198 = *(undefined8 *)(param_3 + 0x8dc);
    uStack_190 = *(undefined4 *)(param_3 + 0x8e4);
    uVar2 = *(undefined4 *)(param_3 + 0x8e0);
    uVar3 = *(undefined4 *)(param_3 + 0x8e4);
    lVar6 = *(longlong *)(param_1 + 0xa8);
    *(undefined4 *)(lVar6 + 0x60) = *(undefined4 *)(param_3 + 0x8dc);
    *(undefined4 *)(lVar6 + 100) = uVar2;
    *(undefined4 *)(lVar6 + 0x68) = uVar3;
    *(undefined4 *)(lVar6 + 0x6c) = 0x3f800000;
    uStack_18c = 0x3f800000;
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x8c) = uVar14;
    *(float *)(*(longlong *)(param_1 + 0xa8) + 0x90) = fVar18;
    *(float *)(*(longlong *)(param_1 + 0xa8) + 0x94) = fVar17;
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xa8) = *(undefined4 *)(param_1 + 0x158);
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xac) = *(undefined4 *)(param_1 + 0x15c);
    *(float *)(*(longlong *)(param_1 + 0xa8) + 0xb4) = fVar18 * *(float *)(puVar7 + 0x18);
    *(float *)(*(longlong *)(param_1 + 0xa8) + 0xb0) = fVar18 * *(float *)(puVar7 + 8);
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xbc) = 0;
    *(float *)(*(longlong *)(param_1 + 0xa8) + 0xb8) =
         *(float *)(*(longlong *)(param_1 + 0xa8) + 0xa0) * *(float *)(puVar7 + 0x1c) *
         *(float *)(DAT_146a27708 + 4) * 0.25;
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x98) = *(undefined4 *)(puVar7 + 0x20);
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x9c) = *(undefined4 *)(puVar7 + 0x24);
    lVar6 = FSceneRenderTargets::Get();
    *(float *)(*(longlong *)(param_1 + 0xa8) + 0xa4) = 1.0 / (float)(*(int *)(lVar6 + 0x3b0) + -1);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(puVar7 + 0x20);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(puVar7 + 0x28);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(puVar7 + 0x2c);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(puVar7 + 0x30);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(puVar7 + 0x34);
    *(ulonglong *)(param_1 + 0x100) =
         CONCAT44(*(undefined4 *)(DAT_146a27738 + 4),*(undefined4 *)(DAT_146a27720 + 4));
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(puVar7 + 0x3c);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(puVar7 + 0x38);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x98);
    *(float *)(param_1 + 0xc0) = fVar17;
    *(float *)(param_1 + 0xbc) = fVar18;
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(DAT_146a27690 + 4);
    uVar14 = *(undefined4 *)(DAT_146a276a8 + 4);
    *(ulonglong *)(param_1 + 0xf0) = CONCAT44(fVar15,fVar16);
    *(undefined4 *)(param_1 + 200) = uVar14;
    *(undefined4 *)(param_1 + 0xf8) = local_120._0_4_;
    fVar15 = *(float *)(param_1 + 0x160);
    fVar18 = -fVar18;
    fVar13 = ((float)*(int *)(param_1 + 0x90) - 15.5) * fVar18;
    local_180 = CONCAT31(local_180._1_3_,1);
    fVar12 = ((float)*(int *)(param_1 + 0x94) - 15.5) * fVar18;
    fVar18 = ((float)*(int *)(param_1 + 0x98) - 15.5) * fVar18;
    *(ulonglong *)(param_1 + 0x174) = CONCAT44(fVar12 - fVar15 * 0.5,fVar13 - fVar15 * 0.5);
    *(ulonglong *)(param_1 + 0x17c) = CONCAT44(fVar15 * 0.5 + fVar13,fVar18 - fVar15 * 0.5);
    *(ulonglong *)(param_1 + 0x184) = CONCAT44(fVar15 * 0.5 + fVar18,fVar15 * 0.5 + fVar12);
    *(undefined4 *)(param_1 + 0x18c) = local_180;
  }
  return;
}



// FUNCTION 141b9fc10 FUN_141b9fc10 body=1013 status=ok
// SIG undefined FUN_141b9fc10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b9fc10(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_c8 = param_2;
  FRHICommandListImmediate::SetCurrentStat(param_2,local_d8);
  iVar11 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0xffffffff;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN_141da42f0(param_1,param_2);
  FUN_141d92620(param_1,param_2);
  FUN_141da2980(param_1,&local_b8);
  if (((*(uint *)(param_1 + 0x3c) >> 6 & 1) != 0) &&
     (cVar4 = FUN_141ee4480((&DAT_1464c9c48)[*(int *)(param_1 + 0x2a0)]), cVar4 == '\0')) {
    FUN_141dcfcf0(param_1,param_2);
  }
  if (local_b8 != 0) {
    FIndirectLightingCache::FinalizeCacheUpdates
              (*(longlong *)(param_1 + 8) + 0x13e8,*(longlong *)(param_1 + 8),param_1,&local_b8);
  }
  if (0 < *(int *)(param_1 + 200)) {
    do {
      FUN_141d6ab00(*(longlong *)(param_1 + 0xc0) + (longlong)iVar11 * 0x30d0);
      FUN_141b95af0(param_1,*(longlong *)(param_1 + 0xc0) + (longlong)iVar11 * 0x30d0);
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 200));
  }
  FUN_141d79460(param_1);
  uVar9 = 0;
  *(undefined1 *)(param_1 + 0x2e1) = 0;
  if (0 < *(int *)(param_1 + 200)) {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar10 = uVar9;
    do {
      lVar7 = 0;
      lVar14 = *(longlong *)(param_1 + 0xc0);
      do {
        do {
          if ((*(int *)(lVar8 + 0x38) < DAT_146a29948) &&
             (_Init_thread_header(&DAT_146a29948), DAT_146a29948 == -1)) {
            FName::FName(&DAT_146a29940,L"FPostProcessMaterialNode",1);
            _Init_thread_footer(&DAT_146a29948);
          }
          lVar2 = *(longlong *)(lVar14 + 0x19d8 + uVar9);
          do {
            lVar5 = lVar2;
            if (lVar7 != 0) {
              lVar5 = (ulonglong)*(uint *)(lVar7 + 0x14) + 0x18 + lVar7 +
                      (ulonglong)*(uint *)(lVar7 + 0x10);
            }
            lVar7 = 0;
            if (lVar5 != *(int *)(lVar14 + 0x19e0 + uVar9) + lVar2) {
              lVar7 = lVar5;
            }
            if (lVar7 == 0) goto LAB_141b9fe66;
          } while (*(longlong *)(lVar7 + 8) != DAT_146a29940);
          plVar6 = (longlong *)(lVar7 + 0x18 + (ulonglong)*(uint *)(lVar7 + 0x14));
          if (plVar6 == (longlong *)0x0) goto LAB_141b9fe66;
          plVar6 = (longlong *)*plVar6;
        } while (plVar6 == (longlong *)0x0);
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2a8))(plVar6,0,0);
        local_d0 = 0;
        (**(code **)(*plVar6 + 0x40))
                  (plVar6,*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x1a38 + uVar9),local_c0,
                   &local_d0);
        cVar4 = FUN_14259cc10(local_d0);
      } while (cVar4 == '\0');
      *(undefined1 *)(param_1 + 0x2e1) = 1;
LAB_141b9fe66:
      uVar13 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar13;
      uVar9 = uVar9 + 0x30d0;
    } while ((int)uVar13 < *(int *)(param_1 + 200));
  }
  lVar8 = *(longlong *)(param_1 + 0xc0);
  lVar14 = (longlong)*(int *)(param_1 + 200) * 0x30d0 + lVar8;
  for (; lVar8 != lVar14; lVar8 = lVar8 + 0x30d0) {
    uVar10 = 0;
    plVar6 = *(longlong **)(lVar8 + 0x27c8);
    uVar9 = (longlong)*(int *)(lVar8 + 0x27d0) & 0x1fffffffffffffff;
    if (plVar6 + *(int *)(lVar8 + 0x27d0) < plVar6) {
      uVar9 = uVar10;
    }
    if (uVar9 != 0) {
      do {
        uVar12 = 0;
        iVar11 = *(int *)(*plVar6 + 0xe8);
        if ((-1 < iVar11) && (iVar11 < *(int *)(lVar8 + 0x1a50))) {
          uVar12 = *(undefined8 *)(*(longlong *)(lVar8 + 0x1a48) + (longlong)iVar11 * 8);
        }
        plVar3 = *(longlong **)(*plVar6 + 8);
        (**(code **)(*plVar3 + 0x148))(plVar3,lVar8,uVar12);
        plVar6 = plVar6 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar9);
    }
  }
  FUN_141d6bd80(param_1,local_c8);
  if (local_60 != 0) {
    FMemory::Free();
  }
  local_68 = 0;
  if (local_70 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&uStack_b0);
  if (local_b8 != 0) {
    LOCK();
    piVar1 = (int *)(local_b8 + 0x48);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return;
}



// FUNCTION 141ba0010 FUN_141ba0010 body=307 status=ok
// SIG undefined FUN_141ba0010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ba0010(undefined8 *param_1,uint param_2,uint param_3)

{
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_80;
  undefined8 *local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  *(uint *)(param_1 + 2) = param_2;
  local_78 = &local_58;
  local_48 = 1;
  local_34 = 0;
  local_80 = param_3 | 0x228;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_58 = 0;
  uStack_50 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = param_2;
  (**(code **)(*DAT_146ab6358 + 0x498))(DAT_146ab6358,local_68,&DAT_146ab6e78,4);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  (**(code **)(*DAT_146ab6358 + 0x620))(DAT_146ab6358,local_68,&DAT_146ab6e78,*param_1);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 1,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  local_80 = local_80 & 0xffffff00;
  local_88 = local_88 & 0xffffff00;
  (**(code **)(*DAT_146ab6358 + 0x618))(DAT_146ab6358,local_68,&DAT_146ab6e78,*param_1);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 3,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return;
}



// FUNCTION 141ba0150 FUN_141ba0150 body=1076 status=ok
// SIG undefined FUN_141ba0150(void)

void FUN_141ba0150(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong param_7)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  undefined8 *local_res20;
  undefined4 uVar14;
  undefined8 uVar13;
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98;
  
  local_128 = 0;
  uStack_120 = 0;
  uStack_11c = 0x3f800000;
  lVar4 = *(longlong *)(*(longlong *)(param_7 + 0x5c8) + 0x30);
  local_138 = *(float *)(lVar4 + 0x100);
  fStack_134 = *(float *)(lVar4 + 0x104);
  fStack_130 = *(float *)(lVar4 + 0x108);
  fStack_12c = *(float *)(lVar4 + 0x10c);
  local_res20 = param_4;
  FUN_141b9eaf0(local_138,param_7,&local_128);
  fVar12 = 0.0;
  if (*(char *)(param_1 + 0x168) != '\0') {
    fVar12 = *(float *)(param_1 + 0x164);
  }
  fVar1 = *(float *)(DAT_146a276c0 + 4);
  *(float *)(*(longlong *)(param_1 + 0xa8) + 0xa0) = local_98;
  puVar8 = *(undefined8 **)(param_1 + 0xa8);
  fVar12 = local_98 * fVar12 * fVar1 * *(float *)(lVar4 + 0x110);
  *puVar8 = local_d8;
  puVar8[1] = uStack_d0;
  puVar8[2] = local_c8;
  puVar8[3] = uStack_c0;
  puVar8[4] = local_b8;
  puVar8[5] = uStack_b0;
  *(undefined4 *)(puVar8 + 6) = local_a8;
  *(undefined4 *)((longlong)puVar8 + 0x34) = uStack_a4;
  *(undefined4 *)(puVar8 + 7) = uStack_a0;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uStack_9c;
  lVar5 = *(longlong *)(param_1 + 0xa8);
  fStack_140 = fStack_130 * fVar12;
  fStack_13c = fStack_12c * fVar12;
  *(float *)(lVar5 + 0x40) = local_138 * fVar12;
  *(float *)(lVar5 + 0x44) = fStack_134 * fVar12;
  *(float *)(lVar5 + 0x48) = fStack_140;
  *(float *)(lVar5 + 0x4c) = fStack_13c;
  local_148 = (undefined *)CONCAT44(fStack_134 * fVar12,local_138 * fVar12);
  TUniformBuffer<FLpvWriteUniformBufferParameters>::SetContents
            (param_1 + 0x198,*(undefined8 *)(param_1 + 0xa8));
  lVar5 = *(longlong *)(param_3 + 0x3090);
  local_148 = &DAT_146a27c50;
  fStack_140 = 0.0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar5 + 0x38,&param_7,&local_148);
  plVar10 = (longlong *)0x0;
  if ((int)param_7 != -1) {
    plVar10 = (longlong *)((longlong)(int)param_7 * 0x20 + *(longlong *)(lVar5 + 0x38));
  }
  plVar11 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  lVar5 = *plVar11;
  lVar7 = *(longlong *)(lVar5 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar13 = *(undefined8 *)(lVar7 + 0x60);
  FRHIComputeShader::UpdateStats(uVar13);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 3;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[2] = uVar13;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e50;
  local_128 = 0;
  FLightPropagationVolume::GetShaderParams(param_1,&local_128);
  uVar13 = *local_res20;
  FLpvInject_GenerateVplListsCS::SetParameters(lVar5,param_2,&local_128,*param_5,uVar13,*param_6);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  lVar7 = FSceneRenderTargets::Get();
  uVar13 = CONCAT44(uVar14,1);
  iVar6 = (int)(*(int *)(lVar7 + 0x3b0) + (*(int *)(lVar7 + 0x3b0) >> 0x1f & 7U)) >> 3;
  DispatchComputeShader(param_2,lVar5,iVar6,iVar6,uVar13);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  FLpvWriteShaderCSBase::UnbindBuffers(lVar5,param_2,&local_128);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  if ((*(char *)(param_1 + 400) == '\0') && (*(char *)(param_1 + 0x16a) != '\0')) {
    lVar5 = *(longlong *)(param_1 + 0xa8);
    *(undefined1 *)(param_1 + 400) = 1;
    uVar2 = *(undefined4 *)(lVar4 + 0x40);
    uVar3 = *(undefined4 *)(lVar4 + 0x50);
    *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)(lVar4 + 0x30);
    *(undefined4 *)(lVar5 + 0x54) = uVar2;
    *(undefined4 *)(lVar5 + 0x58) = uVar3;
    *(undefined4 *)(lVar5 + 0x5c) = 0x3f800000;
    lVar4 = *(longlong *)(param_3 + 0x3090);
    fStack_13c = 1.0;
    local_148 = &DAT_146a28190;
    fStack_140 = 0.0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar4 + 0x38,&local_res20,&local_148);
    plVar10 = (longlong *)0x0;
    if ((int)local_res20 != -1) {
      plVar10 = (longlong *)((longlong)(int)local_res20 * 0x20 + *(longlong *)(lVar4 + 0x38));
    }
    plVar11 = plVar10 + 2;
    if (plVar10 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    lVar4 = *plVar11;
    lVar5 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    uVar13 = *(undefined8 *)(lVar5 + 0x60);
    FRHIComputeShader::UpdateStats(uVar13);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d91e50;
    puVar9[2] = uVar13;
    TUniformBuffer<FLpvWriteUniformBufferParameters>::SetContents
              (param_1 + 0x198,*(undefined8 *)(param_1 + 0xa8));
    local_128 = 0;
    FLightPropagationVolume::GetShaderParams(param_1,&local_128);
    FUN_141bbec00(lVar4,param_2,&local_128);
    DispatchComputeShader(param_2,lVar4,8,8,CONCAT44(uVar14,8));
    FLpvWriteShaderCSBase::UnbindBuffers(lVar4,param_2,&local_128);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_128);
  }
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
  return;
}



// FUNCTION 141ba0590 FUN_141ba0590 body=1395 status=ok
// SIG undefined FUN_141ba0590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ba0590(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int local_res8 [2];
  undefined8 local_258;
  float fStack_250;
  float fStack_24c;
  int local_248;
  int local_244;
  int local_240 [2];
  longlong local_238;
  undefined *local_230;
  undefined4 local_228;
  undefined *local_220;
  undefined4 local_218;
  undefined *local_210;
  undefined4 local_208;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 local_1e8 [4];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_13c;
  undefined8 local_128 [32];
  
  if (*(char *)(param_1 + 0x168) == '\0') {
    return;
  }
  if (1 < (byte)((char)param_3[0x31] - 1U)) {
    return;
  }
  if (*(char *)(param_1 + 400) == '\0') {
    return;
  }
  local_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0x3f800000;
  local_178 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16c = 0x3f800000;
  (**(code **)(*param_3 + 0x68))(param_3,0);
  fStack_250 = *(float *)(param_3 + 0x22);
  fStack_1c4 = fStack_250 * *(float *)((longlong)param_3 + 0x104);
  fStack_24c = fStack_250 * *(float *)((longlong)param_3 + 0x10c);
  local_1c8 = fStack_250 * *(float *)(param_3 + 0x20);
  fStack_250 = fStack_250 * *(float *)(param_3 + 0x21);
  local_1d8 = (undefined4)param_3[0x1e];
  uStack_1d4 = *(undefined4 *)((longlong)param_3 + 0xf4);
  uStack_1d0 = (undefined4)param_3[0x1f];
  uStack_1cc = *(undefined4 *)((longlong)param_3 + 0xfc);
  local_258 = CONCAT44(fStack_1c4,local_1c8);
  fStack_1c0 = fStack_250;
  fStack_1bc = fStack_24c;
  local_1e8[0] = (**(code **)(*param_3 + 0x18))(param_3);
  local_1b8 = uStack_16c;
  local_198 = local_150;
  local_194 = local_14c;
  local_1b4 = local_13c;
  fStack_250 = (float)local_160;
  fStack_24c = 1.0;
  local_1a8 = local_168;
  uStack_1a4 = local_164;
  uStack_1a0 = local_160;
  uStack_19c = 0x3f800000;
  cVar4 = (**(code **)(*param_3 + 0x30))(param_3);
  if (cVar4 == '\0') {
    local_190 = 0;
  }
  else {
    local_190 = 0x3f800000;
  }
  if ((char)param_3[0x31] == '\x01') {
    lVar9 = *(longlong *)(param_4 + 0x3090);
    if ((*(byte *)(param_3 + 0x30) & 0x30) == 0) {
      local_210 = &DAT_146a2d9a0;
      local_208 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar9 + 0x38,&local_244,&local_210);
      if (local_244 != -1) {
        lVar9 = (longlong)local_244 * 0x20 + *(longlong *)(lVar9 + 0x38);
        goto LAB_141ba0823;
      }
    }
    else {
      local_200 = &DAT_146a2daf0;
      local_1f8 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar9 + 0x38,local_240,&local_200);
      if (local_240[0] != -1) {
        lVar9 = (longlong)local_240[0] * 0x20 + *(longlong *)(lVar9 + 0x38);
        goto LAB_141ba0823;
      }
    }
  }
  else {
    if ((char)param_3[0x31] != '\x02') {
      return;
    }
    lVar9 = *(longlong *)(param_4 + 0x3090);
    if ((*(byte *)(param_3 + 0x30) & 0x30) == 0) {
      local_230 = &DAT_146a2dc40;
      local_228 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar9 + 0x38,local_res8,&local_230);
      if (local_res8[0] != -1) {
        lVar9 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar9 + 0x38);
        goto LAB_141ba0823;
      }
    }
    else {
      local_220 = &DAT_146a2dd90;
      local_218 = 0;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar9 + 0x38,&local_248,&local_220);
      if (local_248 != -1) {
        lVar9 = (longlong)local_248 * 0x20 + *(longlong *)(lVar9 + 0x38);
        goto LAB_141ba0823;
      }
    }
  }
  lVar9 = 0;
LAB_141ba0823:
  plVar6 = (longlong *)0x0;
  plVar5 = (longlong *)(lVar9 + 0x10);
  if (lVar9 == 0) {
    plVar5 = plVar6;
  }
  lVar9 = *plVar5;
  if (lVar9 != 0) {
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    FRHIComputeShader::UpdateStats(uVar3);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar10 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_144d91e50;
    puVar10[2] = uVar3;
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_238,local_1e8,&DAT_146a27768,1);
    local_258 = local_238;
    if (local_238 != 0) {
      LOCK();
      *(int *)(local_238 + 8) = *(int *)(local_238 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_238);
    *(int *)(param_1 + 0x16c) = 1 - *(int *)(param_1 + 0x16c);
    local_128[0] = 0;
    FLightPropagationVolume::GetShaderParams(param_1,local_128);
    TUniformBuffer<FLpvWriteUniformBufferParameters>::SetContents
              (param_1 + 0x198,*(undefined8 *)(param_1 + 0xa8));
    FUN_141bbec00(lVar9,param_2,local_128);
    lVar2 = *(longlong *)(lVar9 + 0x48);
    if (*(char *)(lVar2 + 0x28) == '\0') {
      FUN_1419f3850(lVar2);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    if (0 < *(int *)(lVar9 + 0x10)) {
      plVar5 = plVar6;
      do {
        iVar8 = (int)plVar5;
        if (*(undefined **)(*(longlong *)(lVar9 + 8) + (longlong)plVar6 * 8) == &DAT_146a27740) {
          if (iVar8 != -1) {
            puVar11 = *(undefined4 **)(*(longlong *)(lVar9 + 0x18) + (longlong)iVar8 * 8);
            *puVar11 = *(undefined4 *)(lVar9 + 0xb8);
            goto LAB_141ba09d2;
          }
          break;
        }
        plVar5 = (longlong *)(ulonglong)(iVar8 + 1);
        plVar6 = (longlong *)((longlong)plVar6 + 1);
      } while ((longlong)plVar6 < (longlong)*(int *)(lVar9 + 0x10));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a49690) &&
       (_Init_thread_header(&DAT_146a49690), DAT_146a49690 == -1)) {
      _DAT_146a49688 = 0;
      DAT_146a4968c = 0;
      DAT_146a4968e = 0;
      _Init_thread_footer(&DAT_146a49690);
    }
    puVar11 = (undefined4 *)&DAT_146a49688;
LAB_141ba09d2:
    if (*(char *)((longlong)puVar11 + 6) != '\0') {
      uVar1 = *(ushort *)(puVar11 + 1);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_144dcb3c8;
      puVar10[2] = uVar3;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[4] = local_238;
    }
    DispatchComputeShader(param_2,lVar9,8,8,8);
    FLpvWriteShaderCSBase::UnbindBuffers(lVar9,param_2,local_128);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_128);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_258);
  }
  return;
}



// FUNCTION 141ba0b10 FUN_141ba0b10 body=3046 status=ok
// SIG undefined FUN_141ba0b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ba0b10(undefined8 *param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auStack_258 [32];
  undefined4 *local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  float *local_218;
  undefined8 local_208;
  undefined4 local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  float local_1d8 [4];
  undefined4 local_1c8 [4];
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198 [2];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  if (*(int *)(param_2 + 0x58) < 1) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)
              (*(longlong *)(param_2 + 0x50) + -8 + (longlong)*(int *)(param_2 + 0x58) * 8);
  }
  lVar1 = *plVar6;
  local_208 = *(undefined8 *)(lVar1 + 0x4c);
  local_200 = *(undefined4 *)(lVar1 + 0x54);
  local_228 = (undefined8 *)*param_1;
  uStack_220._0_4_ = *(undefined4 *)(param_1 + 1);
  ComputeIndirectionCoordinate(&local_1a8,&local_228,lVar1 + 0x30,&local_208);
  uStack_220._0_4_ = *(undefined4 *)(lVar1 + 0x54);
  local_228 = *(undefined8 **)(lVar1 + 0x4c);
  local_200 = local_1a0;
  local_238 = local_1c8;
  local_208 = local_1a8;
  SampleIndirectionTexture(&local_208,&local_228,*(undefined8 *)(lVar1 + 0x60),local_198);
  local_228 = (undefined8 *)local_198[0];
  local_200 = local_1a0;
  local_208 = local_1a8;
  local_238._0_4_ = *(undefined4 *)(lVar1 + 0x80);
  ComputeBrickTextureCoordinate(&local_1e8,&local_208,&local_228,local_1c8[0]);
  uVar2 = local_1e8;
  local_228 = *(undefined8 **)(lVar1 + 0x84);
  uVar11 = (undefined4)local_1e8;
  uVar13 = (undefined4)((ulonglong)local_1e8 >> 0x20);
  uStack_220 = CONCAT44(uStack_220._4_4_,*(undefined4 *)(lVar1 + 0x8c));
  local_238._0_4_ = *(undefined4 *)(lVar1 + 0xa0);
  local_208 = local_1e8;
  local_200 = local_1e0;
  pfVar3 = (float *)FUN_141b84530(local_1d8,&local_208,&local_228,*(undefined8 *)(lVar1 + 0x98));
  fVar7 = *pfVar3;
  fVar10 = pfVar3[1];
  fVar12 = pfVar3[2];
  local_228 = &local_1e8;
  local_218 = &local_1f8;
  uStack_220 = lVar1;
  local_1f8 = fVar7;
  local_1f4 = fVar10;
  local_1f0 = fVar12;
  _guard_xfg_dispatch_icall_nop(&local_108,0,0x60);
  puVar4 = (undefined8 *)FUN_141b8cca0(&local_228,local_1d8,1);
  puVar5 = (undefined8 *)FUN_141b8cca0(&local_228,local_188,0);
  uStack_144 = 0;
  fStack_164 = (float)*puVar5;
  fStack_160 = (float)((ulonglong)*puVar5 >> 0x20);
  fStack_15c = (float)puVar5[1];
  fStack_158 = (float)((ulonglong)puVar5[1] >> 0x20);
  uStack_140 = 0;
  fStack_154 = (float)*puVar4;
  fStack_150 = (float)((ulonglong)*puVar4 >> 0x20);
  fStack_14c = (float)puVar4[1];
  fStack_148 = (float)((ulonglong)puVar4[1] >> 0x20);
  fStack_134 = fStack_164;
  fStack_130 = fStack_160;
  fStack_12c = fStack_15c;
  local_128 = fStack_158;
  fStack_124 = fStack_154;
  fStack_120 = fStack_150;
  fStack_11c = fStack_14c;
  local_118 = fStack_148;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  local_168 = fVar7;
  local_138 = fVar7;
  puVar4 = (undefined8 *)FUN_141b8cca0(&local_228,local_188,3);
  puVar5 = (undefined8 *)FUN_141b8cca0(&local_228,local_178,2);
  uStack_144 = 0;
  fStack_164 = (float)*puVar5;
  fStack_160 = (float)((ulonglong)*puVar5 >> 0x20);
  fStack_15c = (float)puVar5[1];
  fStack_158 = (float)((ulonglong)puVar5[1] >> 0x20);
  uStack_140 = 0;
  fStack_154 = (float)*puVar4;
  fStack_150 = (float)((ulonglong)*puVar4 >> 0x20);
  fStack_14c = (float)puVar4[1];
  fStack_148 = (float)((ulonglong)puVar4[1] >> 0x20);
  fStack_104 = fStack_164;
  fStack_100 = fStack_160;
  fStack_fc = fStack_15c;
  local_f8 = fStack_158;
  fStack_f4 = fStack_154;
  fStack_f0 = fStack_150;
  fStack_ec = fStack_14c;
  local_e8 = fStack_148;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_168 = fVar10;
  local_108 = fVar10;
  puVar4 = (undefined8 *)FUN_141b8cca0(&local_228,local_178,5);
  puVar5 = (undefined8 *)FUN_141b8cca0(&local_228,local_1b8,4);
  fStack_164 = (float)*puVar5;
  fStack_160 = (float)((ulonglong)*puVar5 >> 0x20);
  fStack_15c = (float)puVar5[1];
  fStack_158 = (float)((ulonglong)puVar5[1] >> 0x20);
  uStack_144 = 0;
  uStack_140 = 0;
  local_238._0_4_ = *(int *)(lVar1 + 800);
  fStack_d4 = fStack_164;
  fStack_d0 = fStack_160;
  fStack_cc = fStack_15c;
  fStack_154 = (float)*puVar4;
  fStack_150 = (float)((ulonglong)*puVar4 >> 0x20);
  fStack_14c = (float)puVar4[1];
  fStack_148 = (float)((ulonglong)puVar4[1] >> 0x20);
  local_c8 = fStack_158;
  fStack_c4 = fStack_154;
  fStack_c0 = fStack_150;
  fStack_bc = fStack_14c;
  local_b8 = fStack_148;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_168 = fVar12;
  local_d8 = fVar12;
  if ((int)local_238 != 0) {
    local_228 = *(undefined8 **)(lVar1 + 0x84);
    local_208 = uVar2;
    local_200 = local_1e0;
    uStack_220._0_4_ = *(undefined4 *)(lVar1 + 0x8c);
    FUN_141b84530(local_1d8,&local_208,&local_228,*(undefined8 *)(lVar1 + 0x318));
    local_228 = *(undefined8 **)(lVar1 + 0x84);
    uStack_220 = CONCAT44(uStack_220._4_4_,*(undefined4 *)(lVar1 + 0x8c));
    local_238._0_4_ = *(undefined4 *)(lVar1 + 0x348);
    local_208 = uVar2;
    local_200 = local_1e0;
    pfVar3 = (float *)FUN_141b84230(local_1b8,&local_208,&local_228,*(undefined8 *)(lVar1 + 0x340));
    fVar10 = (*pfVar3 + *pfVar3) - 1.0;
    fVar12 = (pfVar3[1] + pfVar3[1]) - 1.0;
    fVar14 = (pfVar3[2] + pfVar3[2]) - 1.0;
    fVar7 = fVar12 * fVar12 + fVar10 * fVar10 + fVar14 * fVar14;
    if (1e-08 < fVar7) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar10 = fVar10 * fVar8;
      fVar12 = fVar12 * fVar8;
      fVar14 = fVar14 * fVar8;
    }
    local_228 = (undefined8 *)CONCAT44(fVar12,fVar10);
    uStack_220 = CONCAT44(0x3f800000,fVar14);
    TSHVectorRGB<3>::AddIncomingRadiance(&local_138,local_1d8,0x3f800000,&local_228);
    uVar11 = (undefined4)local_1e8;
    uVar13 = (undefined4)((ulonglong)local_1e8 >> 0x20);
    fVar7 = local_1f8;
    fVar10 = local_1f4;
    fVar12 = local_1f0;
  }
  *param_3 = local_138 * 0.31830987;
  param_3[1] = fStack_134 * 0.31830987;
  param_3[2] = fStack_130 * 0.31830987;
  param_3[3] = fStack_12c * 0.31830987;
  param_3[4] = local_108 * 0.31830987;
  param_3[5] = fStack_104 * 0.31830987;
  param_3[6] = fStack_100 * 0.31830987;
  param_3[7] = fStack_fc * 0.31830987;
  param_3[8] = local_d8 * 0.31830987;
  param_3[9] = fStack_d4 * 0.31830987;
  param_3[10] = fStack_d0 * 0.31830987;
  param_3[0xb] = fStack_cc * 0.31830987;
  param_3[0xc] = local_128 * 0.31830987;
  param_3[0xd] = fStack_124 * 0.31830987;
  param_3[0xe] = fStack_120 * 0.31830987;
  param_3[0xf] = fStack_11c * 0.31830987;
  local_208 = CONCAT44(uVar13,uVar11);
  param_3[0x10] = local_f8 * 0.31830987;
  param_3[0x11] = fStack_f4 * 0.31830987;
  param_3[0x12] = fStack_f0 * 0.31830987;
  param_3[0x13] = fStack_ec * 0.31830987;
  param_3[0x14] = local_c8 * 0.31830987;
  param_3[0x15] = fStack_c4 * 0.31830987;
  param_3[0x16] = fStack_c0 * 0.31830987;
  param_3[0x17] = fStack_bc * 0.31830987;
  param_3[0x18] = local_118 * 0.31830987;
  param_3[0x19] = local_e8 * 0.31830987;
  param_3[0x1a] = local_b8 * 0.31830987;
  param_3[0x1b] = 0.0;
  param_3[0x1c] = fVar7 * 1.7724539;
  param_3[0x1d] = fVar10 * 1.7724539;
  param_3[0x1e] = fVar12 * 1.7724539;
  param_3[0x1f] = 1.7724539;
  local_228 = *(undefined8 **)(lVar1 + 0x84);
  uStack_220 = CONCAT44(0x3fe2dfc5,*(undefined4 *)(lVar1 + 0x8c));
  local_238._0_4_ = *(undefined4 *)(lVar1 + 0x1b8);
  pfVar3 = (float *)FUN_141b84530(local_1b8,&local_208,&local_228,*(undefined8 *)(lVar1 + 0x1b0));
  fVar7 = *pfVar3;
  fVar10 = pfVar3[1];
  fVar12 = pfVar3[2];
  local_228 = &local_1e8;
  local_218 = &local_1f8;
  uStack_220 = lVar1;
  local_1f8 = fVar7;
  local_1f4 = fVar10;
  local_1f0 = fVar12;
  _guard_xfg_dispatch_icall_nop(&local_108,0,0x60);
  puVar4 = (undefined8 *)FUN_141b8cb30(&local_228,local_1b8,1);
  puVar5 = (undefined8 *)FUN_141b8cb30(&local_228,local_178,0);
  uStack_144 = 0;
  fStack_164 = (float)*puVar5;
  fStack_160 = (float)((ulonglong)*puVar5 >> 0x20);
  fStack_15c = (float)puVar5[1];
  fStack_158 = (float)((ulonglong)puVar5[1] >> 0x20);
  uStack_140 = 0;
  fStack_154 = (float)*puVar4;
  fStack_150 = (float)((ulonglong)*puVar4 >> 0x20);
  fStack_14c = (float)puVar4[1];
  fStack_148 = (float)((ulonglong)puVar4[1] >> 0x20);
  fStack_134 = fStack_164;
  fStack_130 = fStack_160;
  fStack_12c = fStack_15c;
  local_128 = fStack_158;
  fStack_124 = fStack_154;
  fStack_120 = fStack_150;
  fStack_11c = fStack_14c;
  local_118 = fStack_148;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  local_168 = fVar7;
  local_138 = fVar7;
  puVar4 = (undefined8 *)FUN_141b8cb30(&local_228,local_1b8,3);
  puVar5 = (undefined8 *)FUN_141b8cb30(&local_228,local_188,2);
  uStack_144 = 0;
  fStack_164 = (float)*puVar5;
  fStack_160 = (float)((ulonglong)*puVar5 >> 0x20);
  fStack_15c = (float)puVar5[1];
  fStack_158 = (float)((ulonglong)puVar5[1] >> 0x20);
  uStack_140 = 0;
  fStack_154 = (float)*puVar4;
  fStack_150 = (float)((ulonglong)*puVar4 >> 0x20);
  fStack_14c = (float)puVar4[1];
  fStack_148 = (float)((ulonglong)puVar4[1] >> 0x20);
  fStack_104 = fStack_164;
  fStack_100 = fStack_160;
  fStack_fc = fStack_15c;
  local_f8 = fStack_158;
  fStack_f4 = fStack_154;
  fStack_f0 = fStack_150;
  fStack_ec = fStack_14c;
  local_e8 = fStack_148;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_168 = fVar10;
  local_108 = fVar10;
  puVar4 = (undefined8 *)FUN_141b8cb30(&local_228,local_1b8,5);
  puVar5 = (undefined8 *)FUN_141b8cb30(&local_228,local_1d8,4);
  local_168 = 0.0;
  uStack_144 = 0;
  fStack_164 = (float)*puVar5;
  fStack_160 = (float)((ulonglong)*puVar5 >> 0x20);
  fStack_15c = (float)puVar5[1];
  fStack_158 = (float)((ulonglong)puVar5[1] >> 0x20);
  uStack_140 = 0;
  fStack_d4 = fStack_164;
  fStack_d0 = fStack_160;
  fStack_cc = fStack_15c;
  fStack_154 = (float)*puVar4;
  fStack_150 = (float)((ulonglong)*puVar4 >> 0x20);
  fStack_14c = (float)puVar4[1];
  fStack_148 = (float)((ulonglong)puVar4[1] >> 0x20);
  local_c8 = fStack_158;
  fStack_c4 = fStack_154;
  fStack_c0 = fStack_150;
  fStack_bc = fStack_14c;
  local_238._0_4_ = *(int *)(lVar1 + 800);
  local_b8 = fStack_148;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_d8 = fVar12;
  if ((int)local_238 != 0) {
    local_228 = *(undefined8 **)(lVar1 + 0x84);
    local_208 = CONCAT44(uVar13,uVar11);
    uStack_220._0_4_ = *(undefined4 *)(lVar1 + 0x8c);
    FUN_141b84530(local_1d8,&local_208,&local_228,*(undefined8 *)(lVar1 + 0x318));
    local_228 = *(undefined8 **)(lVar1 + 0x84);
    uStack_220 = CONCAT44(uStack_220._4_4_,*(undefined4 *)(lVar1 + 0x8c));
    local_238._0_4_ = *(undefined4 *)(lVar1 + 0x348);
    local_208 = CONCAT44(uVar13,uVar11);
    pfVar3 = (float *)FUN_141b84230(local_1b8,&local_208,&local_228,*(undefined8 *)(lVar1 + 0x340));
    fVar10 = (*pfVar3 + *pfVar3) - 1.0;
    fVar12 = (pfVar3[1] + pfVar3[1]) - 1.0;
    fVar14 = (pfVar3[2] + pfVar3[2]) - 1.0;
    fVar7 = fVar12 * fVar12 + fVar10 * fVar10 + fVar14 * fVar14;
    if (1e-08 < fVar7) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar10 = fVar10 * fVar8;
      fVar12 = fVar12 * fVar8;
      fVar14 = fVar14 * fVar8;
    }
    local_228 = (undefined8 *)CONCAT44(fVar12,fVar10);
    uStack_220 = CONCAT44(0x3f800000,fVar14);
    TSHVectorRGB<3>::AddIncomingRadiance(&local_138,local_1d8,0x3f800000,&local_228);
    uVar11 = (undefined4)local_1e8;
    uVar13 = (undefined4)((ulonglong)local_1e8 >> 0x20);
    fVar7 = local_1f8;
    fVar10 = local_1f4;
    fVar12 = local_1f0;
  }
  param_3[0x20] = local_138 * 0.31830987;
  param_3[0x21] = fStack_134 * 0.31830987;
  param_3[0x22] = fStack_130 * 0.31830987;
  param_3[0x23] = fStack_12c * 0.31830987;
  param_3[0x24] = local_108 * 0.31830987;
  param_3[0x25] = fStack_104 * 0.31830987;
  param_3[0x26] = fStack_100 * 0.31830987;
  param_3[0x27] = fStack_fc * 0.31830987;
  param_3[0x28] = local_d8 * 0.31830987;
  param_3[0x29] = fStack_d4 * 0.31830987;
  param_3[0x2a] = fStack_d0 * 0.31830987;
  param_3[0x2b] = fStack_cc * 0.31830987;
  param_3[0x2c] = local_128 * 0.31830987;
  param_3[0x2d] = fStack_124 * 0.31830987;
  param_3[0x2e] = fStack_120 * 0.31830987;
  param_3[0x2f] = fStack_11c * 0.31830987;
  param_3[0x30] = local_f8 * 0.31830987;
  param_3[0x31] = fStack_f4 * 0.31830987;
  param_3[0x32] = fStack_f0 * 0.31830987;
  param_3[0x33] = fStack_ec * 0.31830987;
  param_3[0x34] = local_c8 * 0.31830987;
  param_3[0x35] = fStack_c4 * 0.31830987;
  param_3[0x36] = fStack_c0 * 0.31830987;
  param_3[0x37] = fStack_bc * 0.31830987;
  param_3[0x3c] = fVar7 * 1.7724539;
  param_3[0x3d] = fVar10 * 1.7724539;
  param_3[0x3e] = fVar12 * 1.7724539;
  param_3[0x3f] = 1.7724539;
  param_3[0x38] = local_118 * 0.31830987;
  param_3[0x39] = local_e8 * 0.31830987;
  param_3[0x3a] = local_b8 * 0.31830987;
  param_3[0x3b] = 0.0;
  local_238._0_4_ = *(int *)(lVar1 + 0x2d0);
  fVar7 = 1.7724539;
  if ((int)local_238 < 1) {
    param_3[0x40] = 0.0;
    param_3[0x41] = 0.0;
    param_3[0x42] = 1.0;
    param_3[0x43] = 1.0;
  }
  else {
    local_228 = *(undefined8 **)(lVar1 + 0x84);
    uStack_220 = CONCAT44(0x3fe2dfc5,*(undefined4 *)(lVar1 + 0x8c));
    local_208 = CONCAT44(uVar13,uVar11);
    FUN_141b84230(&local_1f8,&local_208,&local_228,*(undefined8 *)(lVar1 + 0x2c8));
    fVar7 = SQRT(local_1f8 * local_1f8 + local_1f4 * local_1f4 + local_1f0 * local_1f0);
    fVar10 = fVar7;
    if (fVar7 <= 0.0001) {
      fVar10 = 0.0001;
    }
    fVar10 = 1.0 / fVar10;
    param_3[0x40] = fVar10 * local_1f8;
    param_3[0x41] = fVar10 * local_1f4;
    param_3[0x42] = fVar10 * local_1f0;
    param_3[0x43] = fVar7;
  }
  local_228 = *(undefined8 **)(lVar1 + 0x84);
  uStack_220 = CONCAT44(fVar7,*(undefined4 *)(lVar1 + 0x8c));
  local_238 = (undefined4 *)CONCAT44(local_238._4_4_,*(undefined4 *)(lVar1 + 0x2f8));
  local_208 = CONCAT44(uVar13,uVar11);
  FUN_141b83fe0(local_1d8,&local_208,&local_228,*(undefined8 *)(lVar1 + 0x2f0));
  param_3[0x44] = local_1d8[0];
  return;
}



// FUNCTION 141ba1700 FUN_141ba1700 body=89 status=ok
// SIG undefined FUN_141ba1700(void)

ulonglong FUN_141ba1700(uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1419ef5f0(param_1);
  if (2 < (int)uVar1) {
    uVar1 = 0;
    switch(param_1) {
    case 1:
    case 2:
    case 3:
    case 6:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
      if ((0x1f < param_1) || (uVar1 = 0xc8c51814, (0xc8c51814U >> (param_1 & 0x1f) & 1) == 0))
      break;
    case 0:
    case 5:
    case 7:
    case 0xe:
    case 0x1f:
      if (param_1 != 4) {
        return CONCAT71((int7)(uVar1 >> 8),1);
      }
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141ba1790 FUN_141ba1790 body=11 status=ok
// SIG undefined FUN_141ba1790(void)

bool FUN_141ba1790(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x1d74);
}



// FUNCTION 141ba17a0 FUN_141ba17a0 body=47 status=ok
// SIG undefined FUN_141ba17a0(void)

ulonglong FUN_141ba17a0(longlong param_1)

{
  ulonglong uVar1;
  
  if ((((*(byte *)(param_1 + 0x90) & 1) == 0) ||
      (uVar1 = (ulonglong)DAT_1464c1f74, (int)DAT_1464c1f74 <= *(int *)(param_1 + 0xa0))) &&
     (uVar1 = *(ulonglong *)(param_1 + 0x30), (*(uint *)(uVar1 + 0x180) >> 3 & 1) != 0)) {
    return uVar1 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 141ba17d0 Matches body=411 status=ok
// SIG undefined Matches(void)

uint * TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>::Matches
                 (longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = *(longlong *)(param_1 + 0x18) == *(longlong *)(param_3 + 0x18);
  uVar3 = *param_2;
  *param_2 = (uint)bVar4 | uVar3 & 0xfffffffe;
  if (bVar4) {
    bVar4 = *(longlong *)(param_1 + 0x48) == *(longlong *)(param_3 + 0x48);
    uVar3 = (uint)bVar4 | uVar3 & 0xfffffffe;
    *param_2 = uVar3;
    if (bVar4) {
      uVar1 = *(uint *)(param_3 + 0x30);
      uVar2 = *(uint *)(param_1 + 0x30);
      uVar3 = (~uVar2 ^ uVar3 ^ uVar1) & 1 ^ uVar3;
      *param_2 = uVar3;
      if ((uVar3 & 1) != 0) {
        uVar3 = (~(uVar1 >> 1) ^ uVar2 >> 1 ^ uVar3) & 1 ^ uVar3;
        *param_2 = uVar3;
        if ((uVar3 & 1) != 0) {
          bVar4 = *(int *)(param_1 + 0x20) == *(int *)(param_3 + 0x20);
          uVar3 = uVar3 & 0xfffffffe;
          *param_2 = bVar4 | uVar3;
          if ((((bVar4) &&
               (bVar4 = *(int *)(param_1 + 0x24) == *(int *)(param_3 + 0x24),
               *param_2 = bVar4 | uVar3, bVar4)) &&
              (bVar4 = *(int *)(param_1 + 0x28) == *(int *)(param_3 + 0x28),
              *param_2 = bVar4 | uVar3, bVar4)) &&
             (((bVar4 = *(longlong *)(param_1 + 0x38) == *(longlong *)(param_3 + 0x38),
               *param_2 = bVar4 | uVar3, bVar4 &&
               (bVar4 = *(longlong *)(param_1 + 0x40) == *(longlong *)(param_3 + 0x40),
               *param_2 = bVar4 | uVar3, bVar4)) &&
              (bVar4 = *(int *)(param_1 + 0x50) == *(int *)(param_3 + 0x50),
              *param_2 = bVar4 | uVar3, bVar4)))) {
            bVar4 = *(int *)(param_1 + 0x54) == *(int *)(param_3 + 0x54);
            uVar3 = bVar4 | uVar3;
            *param_2 = uVar3;
            if (bVar4) {
              uVar3 = (~*(uint *)(param_1 + 0x5c) ^ *(uint *)(param_3 + 0x5c) ^ uVar3) & 1 ^ uVar3;
              *param_2 = uVar3;
              if ((uVar3 & 1) != 0) {
                *param_2 = uVar3 | 1;
              }
            }
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141ba1970 FUN_141ba1970 body=100 status=ok
// SIG undefined FUN_141ba1970(void)

void FUN_141ba1970(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOBILE_FORCE_DEPTH_TEXTURE_READS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DECODING_MOSAIC",1);
  if (PTR_u_SOURCE_MODE_SCENE_COLOR_NO_ALPHA_1464c2f98 != (undefined *)0x0) {
    FUN_141a172f0(param_2,PTR_u_SOURCE_MODE_SCENE_COLOR_NO_ALPHA_1464c2f98,1);
  }
  return;
}



// FUNCTION 141ba19e0 FUN_141ba19e0 body=100 status=ok
// SIG undefined FUN_141ba19e0(void)

void FUN_141ba19e0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOBILE_FORCE_DEPTH_TEXTURE_READS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DECODING_MOSAIC",1);
  if (PTR_u_SOURCE_MODE_SCENE_COLOR_SCENE_DE_1464c2fa8 != (undefined *)0x0) {
    FUN_141a172f0(param_2,PTR_u_SOURCE_MODE_SCENE_COLOR_SCENE_DE_1464c2fa8,1);
  }
  return;
}



// FUNCTION 141ba1a50 FUN_141ba1a50 body=100 status=ok
// SIG undefined FUN_141ba1a50(void)

void FUN_141ba1a50(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOBILE_FORCE_DEPTH_TEXTURE_READS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DECODING_MOSAIC",1);
  if (PTR_u_SOURCE_MODE_SCENE_DEPTH_1464c2fb0 != (undefined *)0x0) {
    FUN_141a172f0(param_2,PTR_u_SOURCE_MODE_SCENE_DEPTH_1464c2fb0,1);
  }
  return;
}



// FUNCTION 141ba1ac0 FUN_141ba1ac0 body=100 status=ok
// SIG undefined FUN_141ba1ac0(void)

void FUN_141ba1ac0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOBILE_FORCE_DEPTH_TEXTURE_READS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DECODING_MOSAIC",1);
  if (PTR_u_SOURCE_MODE_DEVICE_DEPTH_1464c2fb8 != (undefined *)0x0) {
    FUN_141a172f0(param_2,PTR_u_SOURCE_MODE_DEVICE_DEPTH_1464c2fb8,1);
  }
  return;
}



// FUNCTION 141ba1b30 FUN_141ba1b30 body=100 status=ok
// SIG undefined FUN_141ba1b30(void)

void FUN_141ba1b30(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOBILE_FORCE_DEPTH_TEXTURE_READS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DECODING_MOSAIC",1);
  if (PTR_u_SOURCE_MODE_SCENE_COLOR_AND_OPAC_1464c2f90 != (undefined *)0x0) {
    FUN_141a172f0(param_2,PTR_u_SOURCE_MODE_SCENE_COLOR_AND_OPAC_1464c2f90,1);
  }
  return;
}



// FUNCTION 141ba1ba0 FUN_141ba1ba0 body=97 status=ok
// SIG undefined FUN_141ba1ba0(void)

void FUN_141ba1ba0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOBILE_FORCE_DEPTH_TEXTURE_READS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DECODING_MOSAIC",0);
  if (PTR_u_SOURCE_MODE_SCENE_COLOR_NO_ALPHA_1464c2f98 != (undefined *)0x0) {
    FUN_141a172f0(param_2,PTR_u_SOURCE_MODE_SCENE_COLOR_NO_ALPHA_1464c2f98,1);
  }
  return;
}



// FUNCTION 141ba1c10 FUN_141ba1c10 body=97 status=ok
// SIG undefined FUN_141ba1c10(void)

void FUN_141ba1c10(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOBILE_FORCE_DEPTH_TEXTURE_READS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DECODING_MOSAIC",0);
  if (PTR_u_SOURCE_MODE_SCENE_COLOR_SCENE_DE_1464c2fa8 != (undefined *)0x0) {
    FUN_141a172f0(param_2,PTR_u_SOURCE_MODE_SCENE_COLOR_SCENE_DE_1464c2fa8,1);
  }
  return;
}



// FUNCTION 141ba1c80 FUN_141ba1c80 body=97 status=ok
// SIG undefined FUN_141ba1c80(void)

void FUN_141ba1c80(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOBILE_FORCE_DEPTH_TEXTURE_READS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DECODING_MOSAIC",0);
  if (PTR_u_SOURCE_MODE_SCENE_DEPTH_1464c2fb0 != (undefined *)0x0) {
    FUN_141a172f0(param_2,PTR_u_SOURCE_MODE_SCENE_DEPTH_1464c2fb0,1);
  }
  return;
}



// FUNCTION 141ba1cf0 FUN_141ba1cf0 body=97 status=ok
// SIG undefined FUN_141ba1cf0(void)

void FUN_141ba1cf0(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOBILE_FORCE_DEPTH_TEXTURE_READS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DECODING_MOSAIC",0);
  if (PTR_u_SOURCE_MODE_DEVICE_DEPTH_1464c2fb8 != (undefined *)0x0) {
    FUN_141a172f0(param_2,PTR_u_SOURCE_MODE_DEVICE_DEPTH_1464c2fb8,1);
  }
  return;
}



// FUNCTION 141ba1d60 FUN_141ba1d60 body=97 status=ok
// SIG undefined FUN_141ba1d60(void)

void FUN_141ba1d60(undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"MOBILE_FORCE_DEPTH_TEXTURE_READS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"DECODING_MOSAIC",0);
  if (PTR_u_SOURCE_MODE_SCENE_COLOR_AND_OPAC_1464c2f90 != (undefined *)0x0) {
    FUN_141a172f0(param_2,PTR_u_SOURCE_MODE_SCENE_COLOR_AND_OPAC_1464c2f90,1);
  }
  return;
}



// FUNCTION 141ba1e50 FUN_141ba1e50 body=100 status=ok
// SIG undefined FUN_141ba1e50(void)

void FUN_141ba1e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141a172f0(param_3,L"STATICLIGHTING_TEXTUREMASK",1);
  FUN_141a172f0(param_3,L"STATICLIGHTING_SIGNEDDISTANCEFIELD",1);
  FUN_1404a3a40(param_3,PTR_u_LQ_TEXTURE_LIGHTMAP_1464c1f50,&DAT_143f591f0);
  FUN_141a172f0(param_3,L"NUM_LIGHTMAP_COEFFICIENTS",DAT_1464c1f60);
  return;
}



// FUNCTION 141ba1ec0 ModifyCompilationEnvironment body=118 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDownsampleLightShaftsPixelShader<1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"POINT_LIGHT_SHAFTS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SPOT_LIGHT_SHAFTS",0);
  FUN_141bbc830(param_2,L"POINT_LIGHT_RADIUS_FADE_FACTOR",0x40a00000);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"OCCLUSION_TERM",1);
  return;
}



// FUNCTION 141ba1f40 ModifyCompilationEnvironment body=115 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDownsampleLightShaftsPixelShader<1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"POINT_LIGHT_SHAFTS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SPOT_LIGHT_SHAFTS",0);
  FUN_141bbc830(param_2,L"POINT_LIGHT_RADIUS_FADE_FACTOR",0x40a00000);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"OCCLUSION_TERM",0);
  return;
}



// FUNCTION 141ba1fc0 ModifyCompilationEnvironment body=121 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDownsampleLightShaftsPixelShader<2,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"POINT_LIGHT_SHAFTS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SPOT_LIGHT_SHAFTS",1);
  FUN_141bbc830(param_2,L"POINT_LIGHT_RADIUS_FADE_FACTOR",0x40a00000);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"OCCLUSION_TERM",1);
  return;
}



// FUNCTION 141ba2040 ModifyCompilationEnvironment body=118 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDownsampleLightShaftsPixelShader<2,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"POINT_LIGHT_SHAFTS",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SPOT_LIGHT_SHAFTS",1);
  FUN_141bbc830(param_2,L"POINT_LIGHT_RADIUS_FADE_FACTOR",0x40a00000);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"OCCLUSION_TERM",0);
  return;
}



// FUNCTION 141ba20c0 ModifyCompilationEnvironment body=115 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDownsampleLightShaftsPixelShader<0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"POINT_LIGHT_SHAFTS",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SPOT_LIGHT_SHAFTS",0);
  FUN_141bbc830(param_2,L"POINT_LIGHT_RADIUS_FADE_FACTOR",0x40a00000);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"OCCLUSION_TERM",1);
  return;
}



// FUNCTION 141ba2140 ModifyCompilationEnvironment body=112 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TDownsampleLightShaftsPixelShader<0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"POINT_LIGHT_SHAFTS",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"SPOT_LIGHT_SHAFTS",0);
  FUN_141bbc830(param_2,L"POINT_LIGHT_RADIUS_FADE_FACTOR",0x40a00000);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"OCCLUSION_TERM",0);
  return;
}



// FUNCTION 141ba21b0 FUN_141ba21b0 body=77 status=ok
// SIG undefined FUN_141ba21b0(void)

void FUN_141ba21b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac7cb0();
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ba2200 FUN_141ba2200 body=40 status=ok
// SIG undefined FUN_141ba2200(void)

void FUN_141ba2200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac7cb0();
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  return;
}



// FUNCTION 141ba2230 FUN_141ba2230 body=77 status=ok
// SIG undefined FUN_141ba2230(void)

void FUN_141ba2230(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac7cb0();
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7ba0(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ba2280 FUN_141ba2280 body=62 status=ok
// SIG undefined FUN_141ba2280(void)

void FUN_141ba2280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141ac7cb0();
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"PRECOMPUTED_IRRADIANCE_VOLUME_LIGHTING",&DAT_143f591f0);
  return;
}



// FUNCTION 141ba22c0 FUN_141ba22c0 body=119 status=ok
// SIG undefined FUN_141ba22c0(void)

void FUN_141ba22c0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"PRECOMPUTED_IRRADIANCE_VOLUME_LIGHTING",&DAT_143f591f0);
  return;
}



// FUNCTION 141ba2340 FUN_141ba2340 body=116 status=ok
// SIG undefined FUN_141ba2340(void)

void FUN_141ba2340(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_1404a3a40(param_3,L"PRECOMPUTED_IRRADIANCE_VOLUME_LIGHTING",&DAT_143f591f0);
  return;
}



// FUNCTION 141ba23c0 FUN_141ba23c0 body=110 status=ok
// SIG undefined FUN_141ba23c0(void)

void FUN_141ba23c0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ba2430 FUN_141ba2430 body=107 status=ok
// SIG undefined FUN_141ba2430(void)

void FUN_141ba2430(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ba24a0 FUN_141ba24a0 body=97 status=ok
// SIG undefined FUN_141ba24a0(void)

void FUN_141ba24a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  return;
}



// FUNCTION 141ba2510 FUN_141ba2510 body=94 status=ok
// SIG undefined FUN_141ba2510(void)

void FUN_141ba2510(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  return;
}



// FUNCTION 141ba2570 FUN_141ba2570 body=110 status=ok
// SIG undefined FUN_141ba2570(void)

void FUN_141ba2570(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7ba0(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ba25e0 FUN_141ba25e0 body=107 status=ok
// SIG undefined FUN_141ba25e0(void)

void FUN_141ba25e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FUN_141ac7cb0(param_1,param_2,param_3);
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7ba0(param_1,param_2,param_3);
  return;
}



// FUNCTION 141ba2650 ModifyCompilationEnvironment body=99 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TLpvInject_LightCS<1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_CASTING",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPOT_ATTENUATION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"LPV_MULTIPLE_BOUNCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"LPV_GV_SH_ORDER",1);
  return;
}



// FUNCTION 141ba26c0 ModifyCompilationEnvironment body=99 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TLpvInject_LightCS<2>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_CASTING",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPOT_ATTENUATION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"LPV_MULTIPLE_BOUNCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"LPV_GV_SH_ORDER",1);
  return;
}



// FUNCTION 141ba2730 ModifyCompilationEnvironment body=102 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TLpvInject_LightCS<3>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_CASTING",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPOT_ATTENUATION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"LPV_MULTIPLE_BOUNCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"LPV_GV_SH_ORDER",1);
  return;
}



// FUNCTION 141ba27a0 ModifyCompilationEnvironment body=96 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TLpvInject_LightCS<0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"SHADOW_CASTING",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPOT_ATTENUATION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"LPV_MULTIPLE_BOUNCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"LPV_GV_SH_ORDER",1);
  return;
}



// FUNCTION 141ba2800 ModifyCompilationEnvironment body=204 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TLpvPropagateCS<1>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_SECONDARY_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES_ENABLED",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_PROPAGATE_AO",0);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_GV_SH_ORDER",1);
  return;
}



// FUNCTION 141ba28d0 ModifyCompilationEnvironment body=204 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TLpvPropagateCS<2>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_SECONDARY_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES_ENABLED",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_PROPAGATE_AO",0);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_GV_SH_ORDER",1);
  return;
}



// FUNCTION 141ba29a0 ModifyCompilationEnvironment body=207 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TLpvPropagateCS<3>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_SECONDARY_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES_ENABLED",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_PROPAGATE_AO",0);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_GV_SH_ORDER",1);
  return;
}



// FUNCTION 141ba2a70 ModifyCompilationEnvironment body=204 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TLpvPropagateCS<4>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_SECONDARY_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES_ENABLED",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_PROPAGATE_AO",1);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_GV_SH_ORDER",1);
  return;
}



// FUNCTION 141ba2b40 ModifyCompilationEnvironment body=207 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TLpvPropagateCS<5>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_SECONDARY_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES_ENABLED",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_PROPAGATE_AO",1);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_GV_SH_ORDER",1);
  return;
}



// FUNCTION 141ba2c10 ModifyCompilationEnvironment body=207 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TLpvPropagateCS<6>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_SECONDARY_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES_ENABLED",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_PROPAGATE_AO",1);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_GV_SH_ORDER",1);
  return;
}



// FUNCTION 141ba2ce0 ModifyCompilationEnvironment body=210 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TLpvPropagateCS<7>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_SECONDARY_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES_ENABLED",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_PROPAGATE_AO",1);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_GV_SH_ORDER",1);
  return;
}



// FUNCTION 141ba2dc0 ModifyCompilationEnvironment body=201 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TLpvPropagateCS<0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_SECONDARY_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES_ENABLED",0);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_PROPAGATE_AO",0);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 4;
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_MULTIPLE_BOUNCES",1);
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"LPV_GV_SH_ORDER",1);
  return;
}



// FUNCTION 141ba2e90 FUN_141ba2e90 body=191 status=ok
// SIG undefined FUN_141ba2e90(void)

void FUN_141ba2e90(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba2f50 FUN_141ba2f50 body=191 status=ok
// SIG undefined FUN_141ba2f50(void)

void FUN_141ba2f50(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba3010 FUN_141ba3010 body=191 status=ok
// SIG undefined FUN_141ba3010(void)

void FUN_141ba3010(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba30d0 FUN_141ba30d0 body=191 status=ok
// SIG undefined FUN_141ba30d0(void)

void FUN_141ba30d0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba3190 FUN_141ba3190 body=185 status=ok
// SIG undefined FUN_141ba3190(void)

void FUN_141ba3190(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba3250 FUN_141ba3250 body=182 status=ok
// SIG undefined FUN_141ba3250(void)

void FUN_141ba3250(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba3310 FUN_141ba3310 body=188 status=ok
// SIG undefined FUN_141ba3310(void)

void FUN_141ba3310(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba33d0 FUN_141ba33d0 body=188 status=ok
// SIG undefined FUN_141ba33d0(void)

void FUN_141ba33d0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba3490 FUN_141ba3490 body=188 status=ok
// SIG undefined FUN_141ba3490(void)

void FUN_141ba3490(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba3550 FUN_141ba3550 body=188 status=ok
// SIG undefined FUN_141ba3550(void)

void FUN_141ba3550(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba3610 FUN_141ba3610 body=182 status=ok
// SIG undefined FUN_141ba3610(void)

void FUN_141ba3610(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba36d0 FUN_141ba36d0 body=179 status=ok
// SIG undefined FUN_141ba36d0(void)

void FUN_141ba36d0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba3790 FUN_141ba3790 body=194 status=ok
// SIG undefined FUN_141ba3790(void)

void FUN_141ba3790(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba3860 FUN_141ba3860 body=194 status=ok
// SIG undefined FUN_141ba3860(void)

void FUN_141ba3860(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba3930 FUN_141ba3930 body=194 status=ok
// SIG undefined FUN_141ba3930(void)

void FUN_141ba3930(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba3a00 FUN_141ba3a00 body=194 status=ok
// SIG undefined FUN_141ba3a00(void)

void FUN_141ba3a00(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba3ad0 FUN_141ba3ad0 body=188 status=ok
// SIG undefined FUN_141ba3ad0(void)

void FUN_141ba3ad0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba3b90 FUN_141ba3b90 body=185 status=ok
// SIG undefined FUN_141ba3b90(void)

void FUN_141ba3b90(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba3c50 FUN_141ba3c50 body=191 status=ok
// SIG undefined FUN_141ba3c50(void)

void FUN_141ba3c50(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba3d10 FUN_141ba3d10 body=191 status=ok
// SIG undefined FUN_141ba3d10(void)

void FUN_141ba3d10(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba3dd0 FUN_141ba3dd0 body=191 status=ok
// SIG undefined FUN_141ba3dd0(void)

void FUN_141ba3dd0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba3e90 FUN_141ba3e90 body=191 status=ok
// SIG undefined FUN_141ba3e90(void)

void FUN_141ba3e90(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba3f50 FUN_141ba3f50 body=185 status=ok
// SIG undefined FUN_141ba3f50(void)

void FUN_141ba3f50(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba4010 FUN_141ba4010 body=182 status=ok
// SIG undefined FUN_141ba4010(void)

void FUN_141ba4010(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141ac7be0(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba40d0 FUN_141ba40d0 body=178 status=ok
// SIG undefined FUN_141ba40d0(void)

void FUN_141ba40d0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba4190 FUN_141ba4190 body=178 status=ok
// SIG undefined FUN_141ba4190(void)

void FUN_141ba4190(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba4250 FUN_141ba4250 body=178 status=ok
// SIG undefined FUN_141ba4250(void)

void FUN_141ba4250(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba4310 FUN_141ba4310 body=178 status=ok
// SIG undefined FUN_141ba4310(void)

void FUN_141ba4310(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba43d0 FUN_141ba43d0 body=172 status=ok
// SIG undefined FUN_141ba43d0(void)

void FUN_141ba43d0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba4480 FUN_141ba4480 body=160 status=ok
// SIG undefined FUN_141ba4480(void)

void FUN_141ba4480(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba4520 FUN_141ba4520 body=175 status=ok
// SIG undefined FUN_141ba4520(void)

void FUN_141ba4520(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba45d0 FUN_141ba45d0 body=175 status=ok
// SIG undefined FUN_141ba45d0(void)

void FUN_141ba45d0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba4680 FUN_141ba4680 body=175 status=ok
// SIG undefined FUN_141ba4680(void)

void FUN_141ba4680(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba4730 FUN_141ba4730 body=175 status=ok
// SIG undefined FUN_141ba4730(void)

void FUN_141ba4730(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba47e0 FUN_141ba47e0 body=169 status=ok
// SIG undefined FUN_141ba47e0(void)

void FUN_141ba47e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba4890 FUN_141ba4890 body=157 status=ok
// SIG undefined FUN_141ba4890(void)

void FUN_141ba4890(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba4930 FUN_141ba4930 body=181 status=ok
// SIG undefined FUN_141ba4930(void)

void FUN_141ba4930(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba49f0 FUN_141ba49f0 body=181 status=ok
// SIG undefined FUN_141ba49f0(void)

void FUN_141ba49f0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba4ab0 FUN_141ba4ab0 body=181 status=ok
// SIG undefined FUN_141ba4ab0(void)

void FUN_141ba4ab0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba4b70 FUN_141ba4b70 body=181 status=ok
// SIG undefined FUN_141ba4b70(void)

void FUN_141ba4b70(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba4c30 FUN_141ba4c30 body=175 status=ok
// SIG undefined FUN_141ba4c30(void)

void FUN_141ba4c30(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba4ce0 FUN_141ba4ce0 body=163 status=ok
// SIG undefined FUN_141ba4ce0(void)

void FUN_141ba4ce0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba4d90 FUN_141ba4d90 body=178 status=ok
// SIG undefined FUN_141ba4d90(void)

void FUN_141ba4d90(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba4e50 FUN_141ba4e50 body=178 status=ok
// SIG undefined FUN_141ba4e50(void)

void FUN_141ba4e50(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba4f10 FUN_141ba4f10 body=178 status=ok
// SIG undefined FUN_141ba4f10(void)

void FUN_141ba4f10(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba4fd0 FUN_141ba4fd0 body=178 status=ok
// SIG undefined FUN_141ba4fd0(void)

void FUN_141ba4fd0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba5090 FUN_141ba5090 body=172 status=ok
// SIG undefined FUN_141ba5090(void)

void FUN_141ba5090(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba5140 FUN_141ba5140 body=160 status=ok
// SIG undefined FUN_141ba5140(void)

void FUN_141ba5140(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba51e0 FUN_141ba51e0 body=191 status=ok
// SIG undefined FUN_141ba51e0(void)

void FUN_141ba51e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba52a0 FUN_141ba52a0 body=191 status=ok
// SIG undefined FUN_141ba52a0(void)

void FUN_141ba52a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba5360 FUN_141ba5360 body=191 status=ok
// SIG undefined FUN_141ba5360(void)

void FUN_141ba5360(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba5420 FUN_141ba5420 body=191 status=ok
// SIG undefined FUN_141ba5420(void)

void FUN_141ba5420(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba54e0 FUN_141ba54e0 body=185 status=ok
// SIG undefined FUN_141ba54e0(void)

void FUN_141ba54e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba55a0 FUN_141ba55a0 body=182 status=ok
// SIG undefined FUN_141ba55a0(void)

void FUN_141ba55a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba5660 FUN_141ba5660 body=188 status=ok
// SIG undefined FUN_141ba5660(void)

void FUN_141ba5660(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba5720 FUN_141ba5720 body=188 status=ok
// SIG undefined FUN_141ba5720(void)

void FUN_141ba5720(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba57e0 FUN_141ba57e0 body=188 status=ok
// SIG undefined FUN_141ba57e0(void)

void FUN_141ba57e0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba58a0 FUN_141ba58a0 body=188 status=ok
// SIG undefined FUN_141ba58a0(void)

void FUN_141ba58a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba5960 FUN_141ba5960 body=182 status=ok
// SIG undefined FUN_141ba5960(void)

void FUN_141ba5960(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}



// FUNCTION 141ba5a20 FUN_141ba5a20 body=179 status=ok
// SIG undefined FUN_141ba5a20(void)

void FUN_141ba5a20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"OUTPUT_GAMMA_SPACE",0);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3 + 0x200,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba5ae0 FUN_141ba5ae0 body=194 status=ok
// SIG undefined FUN_141ba5ae0(void)

void FUN_141ba5ae0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",1);
  return;
}



// FUNCTION 141ba5bb0 FUN_141ba5bb0 body=194 status=ok
// SIG undefined FUN_141ba5bb0(void)

void FUN_141ba5bb0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",2);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",2);
  return;
}



// FUNCTION 141ba5c80 FUN_141ba5c80 body=194 status=ok
// SIG undefined FUN_141ba5c80(void)

void FUN_141ba5c80(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",3);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",3);
  return;
}



// FUNCTION 141ba5d50 FUN_141ba5d50 body=194 status=ok
// SIG undefined FUN_141ba5d50(void)

void FUN_141ba5d50(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",4);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",4);
  return;
}



// FUNCTION 141ba5e20 FUN_141ba5e20 body=188 status=ok
// SIG undefined FUN_141ba5e20(void)

void FUN_141ba5e20(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  FUN_141a172f0(param_3,L"MAX_NUM_LIGHTMAP_COEF",4);
  FUN_141bb1a20(param_1,param_2,param_3);
  FUN_141bb0960(param_1,param_2,param_3);
  param_3 = param_3 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_3,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"OUTPUT_GAMMA_SPACE",1);
  FShaderCompilerDefinitions::SetDefine(param_3,L"MAX_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"VARIABLE_NUM_DYNAMIC_POINT_LIGHTS",0);
  FShaderCompilerDefinitions::SetDefine(param_3,L"NUM_DYNAMIC_POINT_LIGHTS",0);
  return;
}


