// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141e0bc90 FUN_141e0bc90 body=360 status=ok
// SIG undefined FUN_141e0bc90(void)

ulonglong FUN_141e0bc90(longlong param_1)

{
  uint uVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  uVar3 = (ulonglong)uVar1;
  if (((int)uVar1 < DAT_146aaaf78) &&
     (uVar3 = _Init_thread_header(&DAT_146aaaf78), DAT_146aaaf78 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowVelocityBuffer");
    lVar5 = lVar6;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146aaaf70 = lVar5;
    uVar3 = _Init_thread_footer(&DAT_146aaaf78);
  }
  lVar5 = DAT_146aaaf70;
  if (DAT_146aaaf70 != 0) {
    uVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((char)uVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,DVar2) >> 8),DVar2 == DAT_1468c21c0);
      if (DVar2 != DAT_1468c21c0) {
        lVar6 = 4;
      }
    }
    if (((((*(int *)(lVar6 + lVar5) != 0) && (uVar3 = *(ulonglong *)(param_1 + 0x38), uVar3 != 0))
         && (*(longlong *)(param_1 + 0x40) != 0)) &&
        ((((*(short *)(uVar3 + 0x154) != 0 || (*(short *)(uVar3 + 0x158) != 0)) ||
          (*(short *)(uVar3 + 0x16e) != 0)) ||
         (((*(short *)(uVar3 + 0x15e) != 0 && (*(short *)(uVar3 + 0x164) != 0)) &&
          (*(short *)(uVar3 + 0x16a) != 0)))))) && (DAT_1464ca400 != '\0')) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141e0be00 FUN_141e0be00 body=532 status=ok
// SIG undefined FUN_141e0be00(void)

void FUN_141e0be00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  cVar8 = '\0';
  if ((*(int *)(DAT_146aa9590 + 4) != 0) && (iVar9 = 0, 0 < *(int *)(param_1 + 200))) {
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0xc0);
      lVar2 = *(longlong *)(lVar7 + 0x1ab0 + lVar1);
      if (((lVar2 != 0) && (*(char *)(lVar7 + 0x1202 + lVar1) == '\0')) &&
         (cVar3 = FUN_141d4fac0(lVar2 + 0x16e0), cVar3 != '\0')) {
        fVar10 = (float)FLatentGPUTimer::GetTimeMS(lVar2 + 0x16e0);
        cVar3 = *(char *)(lVar2 + 0x1774);
        if (cVar3 == '\0') {
          fVar12 = *(float *)(lVar2 + 6000);
          *(undefined4 *)(lVar2 + 0x176c) = 0;
          if (fVar12 == 0.0) {
            fVar11 = 1.0;
          }
          else {
            fVar11 = 0.1;
          }
          cVar6 = '\0';
          fVar12 = (fVar10 - fVar12) * fVar11 + fVar12;
          *(float *)(lVar2 + 6000) = fVar12;
          fVar10 = *(float *)(*(longlong *)(lVar7 + 0x10 + lVar1) + 0x58) -
                   *(float *)(lVar2 + 0x1768);
          lVar4 = DAT_146aa95a8;
          if (*(float *)(DAT_146aa95d8 + 4) <= fVar10 && fVar10 != *(float *)(DAT_146aa95d8 + 4))
          goto LAB_141e0bf82;
        }
        else {
          fVar12 = *(float *)(lVar2 + 0x176c);
          *(undefined4 *)(lVar2 + 6000) = 0;
          if (fVar12 == 0.0) {
            fVar11 = 1.0;
          }
          else {
            fVar11 = 0.1;
          }
          fVar12 = (fVar10 - fVar12) * fVar11 + fVar12;
          *(float *)(lVar2 + 0x176c) = fVar12;
          fVar10 = *(float *)(*(longlong *)(lVar7 + 0x10 + lVar1) + 0x58) -
                   *(float *)(lVar2 + 0x1768);
          lVar4 = DAT_146aa95c0;
          cVar6 = cVar3;
          if (*(float *)(DAT_146aa95d8 + 4) <= fVar10 && fVar10 != *(float *)(DAT_146aa95d8 + 4)) {
LAB_141e0bf82:
            cVar6 = *(float *)(lVar4 + 4) <= fVar12 && fVar12 != *(float *)(lVar4 + 4);
            *(char *)(lVar2 + 0x1774) = cVar6;
          }
        }
        if (cVar3 != cVar6) {
          *(undefined4 *)(lVar2 + 0x1768) =
               *(undefined4 *)(*(longlong *)(lVar7 + 0x10 + lVar1) + 0x58);
        }
        if ((cVar8 != '\0') || (cVar6 != '\0')) {
          cVar8 = '\x01';
        }
      }
      iVar9 = iVar9 + 1;
      lVar7 = lVar7 + 0x30d0;
    } while (iVar9 < *(int *)(param_1 + 200));
  }
  uVar5 = FSceneRenderTargets::Get(param_2);
  FUN_141d04bf0(uVar5,cVar8);
  return;
}



// FUNCTION 141e0c020 FUN_141e0c020 body=1143 status=ok
// SIG undefined FUN_141e0c020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e0c020(longlong param_1,longlong param_2,char param_3)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_1c8 [32];
  float local_1a8;
  float local_1a0;
  float local_198;
  float local_190;
  float local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  ulonglong local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  bVar5 = false;
  local_158 = local_158 & 0xffffffff00000000;
  lVar7 = FSceneRenderTargets::Get();
  local_1a8 = (float)CONCAT31(local_1a8._1_3_,1);
  FUN_141cdeb70(lVar7,param_1,0,0x21);
  uVar2 = *(undefined4 *)(param_2 + 0x1aac);
  local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(param_2 + 0x1aa8));
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_150 = (undefined *)CONCAT44(local_150._4_4_,*(undefined4 *)(param_2 + 0x1aa4));
  local_140 = *(undefined4 *)(param_2 + 0x1aa0);
  puVar8 = puVar12 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar12 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar8;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar12;
  *(undefined8 **)(param_1 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f59420;
  *(undefined4 *)(puVar12 + 2) = local_140;
  *(undefined4 *)((longlong)puVar12 + 0x14) = (undefined4)local_150;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)(puVar12 + 4) = uVar2;
  plVar16 = (longlong *)0x0;
  *(int *)((longlong)puVar12 + 0x1c) = (int)local_158;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_f0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_8c = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_ec = 0x26;
  local_e4 = 0;
  local_dc = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_94 = 0;
  local_84 = 0;
  FUN_14049afe0(param_1,&local_138);
  uStack_100 = FUN_140985530();
  local_f8 = FUN_1409853f0();
  if (param_3 == '\0') {
    local_108 = FUN_141abcfb0();
  }
  else {
    local_108 = FUN_1404a0ce0();
  }
  local_148 = 0;
  plVar15 = (longlong *)(*(longlong *)(param_2 + 0x3090) + 0x38);
  local_150 = &DAT_146b09c50;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar15,&local_158,&local_150);
  plVar13 = plVar16;
  if ((int)local_158 != -1) {
    plVar13 = (longlong *)((longlong)(int)local_158 * 0x20 + *plVar15);
  }
  plVar14 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar14 = plVar16;
  }
  lVar3 = *plVar14;
  plVar13 = plVar16;
  if ((*(int *)(DAT_146aa95f0 + 4) == 0) || (0.001 <= ABS(*(float *)(lVar7 + 0x390) - 0.5))) {
    local_148 = 0;
    local_150 = &DAT_146aa97c0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar15,&local_158,&local_150);
    if ((int)local_158 != -1) {
      plVar13 = (longlong *)((longlong)(int)local_158 * 0x20 + *plVar15);
    }
  }
  else {
    local_148 = 0;
    local_150 = &DAT_146aa9910;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar15,&local_158,&local_150);
    if ((int)local_158 != -1) {
      plVar13 = (longlong *)((longlong)(int)local_158 * 0x20 + *plVar15);
    }
  }
  plVar15 = plVar13 + 2;
  if (plVar13 == (longlong *)0x0) {
    plVar15 = plVar16;
  }
  lVar10 = *plVar15;
  local_138 = DAT_1464c2720;
  if (lVar3 == 0) {
    uStack_130 = 0;
    bVar5 = true;
    local_158 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uStack_130 = *(undefined8 *)(lVar4 + 0x38);
  }
  uVar9 = 0;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  bVar5 = false;
  if (lVar10 == 0) {
    bVar5 = true;
    local_158 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar10 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uVar9 = *(undefined8 *)(lVar4 + 0x40);
  }
  local_118 = uVar9;
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  local_ec = local_ec & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_138,2,1);
  FUN_141e094a0(lVar10,param_1,param_2);
  fVar1 = *(float *)(lVar7 + 0x390);
  lVar10 = (**(code **)(**(longlong **)(lVar7 + 0x210) + 0x10))();
  local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(lVar10 + 0x14));
  lVar7 = (**(code **)(**(longlong **)(lVar7 + 0x210) + 0x10))(*(longlong **)(lVar7 + 0x210));
  local_160 = 1;
  iVar6 = *(int *)(param_2 + 0x1aac) - *(int *)(param_2 + 0x1aa4);
  local_168 = 1;
  local_158 = CONCAT44(*(undefined4 *)(lVar7 + 0x18),(int)local_158);
  iVar11 = *(int *)(param_2 + 0x1aa8) - *(int *)(param_2 + 0x1aa0);
  local_178 = local_158;
  local_150 = (undefined *)CONCAT44(iVar6,iVar11);
  local_180 = local_150;
  local_1a8 = (float)iVar6;
  local_188 = local_1a8 * fVar1;
  local_190 = (float)iVar11 * fVar1;
  local_198 = (float)*(int *)(param_2 + 0x1aa4) * fVar1;
  local_1a0 = (float)*(int *)(param_2 + 0x1aa0) * fVar1;
  local_170 = lVar3;
  DrawRectangle(param_1);
  return;
}



// FUNCTION 141e0c4a0 FUN_141e0c4a0 body=51 status=ok
// SIG undefined FUN_141e0c4a0(void)

longlong FUN_141e0c4a0(longlong param_1)

{
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)DAT_146aa95f0 >> 8);
  if ((*(int *)(DAT_146aa95f0 + 4) != 0) && (ABS(*(float *)(param_1 + 0x390) - 0.5) < 0.001)) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}



// FUNCTION 141e0c4e0 FUN_141e0c4e0 body=151 status=ok
// SIG undefined FUN_141e0c4e0(void)

void FUN_141e0c4e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aaafa8) {
    _Init_thread_header(&DAT_146aaafa8);
    if (DAT_146aaafa8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146aaafa0 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Cache.DrawLightingSamples");
      _Init_thread_footer(&DAT_146aaafa8);
    }
  }
  if (DAT_146aaafa0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e0c51a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146aaafa0 + 0x68))();
    return;
  }
  return;
}



// FUNCTION 141e0c580 VolumetricFogTemporalRandom body=325 status=ok
// SIG undefined VolumetricFogTemporalRandom(void)

undefined8 * VolumetricFogTemporalRandom(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  bVar3 = DAT_1464c36e0 != 0;
  *(undefined4 *)param_1 = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f000000;
  *(undefined4 *)(param_1 + 1) = 0x3f000000;
  if ((bVar3) && (DAT_1464c36dc != 0)) {
    param_2 = param_2 & 0x3ff;
    fVar6 = 0.2;
    fVar7 = 0.0;
    fVar8 = 0.0;
    uVar1 = param_2;
    if (param_2 != 0) {
      do {
        uVar2 = (int)uVar1 / 5;
        fVar4 = (float)((int)uVar1 % 5) * fVar6;
        fVar6 = fVar6 * 0.2;
        fVar8 = fVar8 + fVar4;
        uVar1 = uVar2;
      } while (0 < (int)uVar2);
    }
    fVar6 = 0.33333334;
    fVar4 = 0.0;
    uVar1 = param_2;
    if (param_2 != 0) {
      do {
        uVar2 = (int)uVar1 / 3 + ((int)uVar1 >> 0x1f) +
                (int)(((longlong)(int)uVar1 / 3 + ((longlong)(int)uVar1 >> 0x3f) & 0xffffffffU) >>
                     0x1f);
        fVar5 = (float)(int)(uVar1 + uVar2 * -3) * fVar6;
        fVar6 = fVar6 * 0.33333334;
        fVar4 = fVar4 + fVar5;
        uVar1 = uVar2;
      } while (0 < (int)uVar2);
    }
    fVar6 = 0.5;
    if (param_2 != 0) {
      do {
        uVar1 = param_2 & 0x80000001;
        if ((int)uVar1 < 0) {
          uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
        }
        param_2 = (int)param_2 / 2;
        fVar5 = (float)(int)uVar1 * fVar6;
        fVar6 = fVar6 * 0.5;
        fVar7 = fVar7 + fVar5;
      } while (0 < (int)param_2);
    }
    *param_1 = CONCAT44(fVar4,fVar7);
    *(float *)(param_1 + 1) = fVar8;
  }
  return param_1;
}



// FUNCTION 141e0c6d0 FUN_141e0c6d0 body=1467 status=ok
// SIG undefined FUN_141e0c6d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e0c6d0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  ulonglong *param_5,undefined8 *param_6,float param_7)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1218 [32];
  undefined8 local_11f8;
  ulonglong *local_11f0;
  undefined8 *local_11e8;
  ulonglong local_11e0;
  longlong local_11d8;
  undefined8 local_11c8;
  ulonglong local_11c0;
  int local_11b8;
  undefined4 uStack_11b4;
  longlong local_11b0;
  int local_11a8;
  int local_11a4;
  longlong local_11a0;
  undefined8 local_1198;
  longlong local_1190;
  longlong local_1188;
  longlong local_1180;
  longlong local_1178;
  undefined8 local_1170;
  undefined8 local_1168;
  undefined4 local_1160;
  ulonglong local_1158;
  int local_1150;
  undefined8 local_1148;
  undefined4 local_1140;
  ulonglong local_1138;
  int local_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined4 local_1118;
  longlong local_1110;
  longlong local_1108;
  undefined4 local_1100;
  uint local_10fc;
  undefined4 local_10f8;
  undefined1 local_10f4;
  float local_10d8;
  undefined1 local_10c8 [304];
  undefined1 local_f98 [3888];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1218;
  if (((0 < *(int *)(param_3 + 0x1de0)) &&
      (local_11a0 = param_4, local_1198 = param_2, uVar5 = FUN_14274f980(param_3), uVar5 < 0x20)) &&
     ((0xd0150015U >> (uVar5 & 0x1f) & 1) != 0)) {
    _guard_xfg_dispatch_icall_nop(local_f98,*(void **)(param_3 + 0x1ab8),0xf30);
    local_11a4 = *(int *)((longlong)param_5 + 4);
    local_11a8 = (int)*param_5;
    local_11c0 = *param_5;
    local_11f8 = param_3 + 0x390;
    local_11f0 = (ulonglong *)(param_3 + 0x28e0);
    local_11b0 = 0;
    FUN_14275e210(param_3,local_f98,&local_11c0,&local_11b0);
    local_11f8._0_4_ = 1;
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_11b8,local_f98,&DAT_146b09708);
    local_1180 = CONCAT44(uStack_11b4,local_11b8);
    if (local_1180 != 0) {
      LOCK();
      *(int *)(local_1180 + 8) = *(int *)(local_1180 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_11b8);
    uVar7 = FSceneRenderTargets::Get(param_2);
    FUN_141d05c90(uVar7,*(undefined4 *)(param_3 + 0x1a38),0,local_10c8);
    local_11f8._0_4_ = 1;
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_11c8,local_10c8);
    local_1188 = local_11c8;
    if (local_11c8 != 0) {
      LOCK();
      *(int *)(local_11c8 + 8) = *(int *)(local_11c8 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
    local_1110 = *(longlong *)(param_3 + 0x20);
    local_1118 = 0x11;
    local_1128 = 0;
    uStack_1120 = 0;
    if (local_1110 != 0) {
      LOCK();
      *(int *)(local_1110 + 8) = *(int *)(local_1110 + 8) + 1;
      UNLOCK();
    }
    local_1108 = local_1188;
    local_10f8 = 0;
    local_1100 = 0;
    local_10f4 = 0;
    local_10fc = (uint)(*(char *)(param_3 + 0x1205) != '\0') |
                 -(uint)(*(char *)(param_3 + 0x11b4) != '\0') & 8;
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_1110,local_1180);
    local_11e0 = local_11e0 & 0xffffffffffffff00;
    pfVar9 = *(float **)(param_4 + 0x110);
    if (*(float **)(param_4 + 0x110) == (float *)0x0) {
      pfVar9 = (float *)(param_4 + 0x10);
    }
    local_11e8 = (undefined8 *)((ulonglong)local_11e8 & 0xffffffffffffff00);
    local_11f0 = (ulonglong *)0x0;
    local_11f8 = (ulonglong)local_11f8._4_4_ << 0x20;
    local_1178 = *(longlong *)(*(longlong *)(param_4 + 0x130) + 8);
    local_1170 = *(undefined8 *)(*(longlong *)(param_4 + 0x138) + 8);
    local_11c8 = CONCAT44(pfVar9[1] / (float)*(int *)((longlong)param_5 + 4),
                          *pfVar9 / (float)(int)*param_5);
    FUN_141ad7ef0(param_2,2,&local_1178);
    lVar3 = local_11c8;
    local_11b8 = 0;
    if (0 < *(int *)(param_3 + 0x1de0)) {
      local_1190 = 0;
      do {
        lVar4 = local_11a0;
        uVar2 = *(ulonglong *)(local_1190 + *(longlong *)(param_3 + 0x1dd8));
        local_11c8 = *(longlong *)(uVar2 + 0x140);
        lVar12 = *(longlong *)(param_3 + 0x1ad0);
        if (*(longlong *)(param_3 + 0x1ad0) == 0) {
          lVar12 = param_3 + 0x1ac0;
        }
        uVar5 = *(uint *)(local_11c8 + 0xe8);
        lVar13 = (longlong)(int)uVar5;
        uVar6 = uVar5;
        if ((int)uVar5 < 0) {
          uVar6 = uVar5 + 0x1f;
        }
        local_11c0 = uVar2;
        if ((*(uint *)(lVar12 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
          local_11b0 = *(longlong *)(param_3 + 0x1b30);
          fVar15 = *(float *)(param_3 + 0x8dc) - *(float *)(uVar2 + 0xc0);
          fVar16 = *(float *)(param_3 + 0x8e0) - *(float *)(uVar2 + 0xc4);
          fVar14 = *(float *)(param_3 + 0x8e4) - *(float *)(uVar2 + 200);
          local_10d8 = *(float *)(uVar2 + 0xd8);
          local_1178 = lVar13;
          if (fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14 <
              (local_10d8 + param_7) * (local_10d8 + param_7)) {
            if (uVar5 == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(*(longlong *)(param_3 + 0x2290) + -4 + lVar13 * 4);
            }
            iVar1 = *(int *)(*(longlong *)(param_3 + 0x2290) + lVar13 * 4);
            if (iVar8 < iVar1) {
              lVar12 = (longlong)iVar8 * 0x18;
              uVar11 = (ulonglong)(uint)(iVar1 - iVar8);
              do {
                local_1160 = *(undefined4 *)(param_6 + 1);
                local_1168 = *param_6;
                local_1150 = (int)param_5[1];
                local_1158 = *param_5;
                local_11d8 = *(longlong *)(lVar12 + *(longlong *)(param_3 + 0x2280));
                local_11e8 = &local_1168;
                local_11f0 = &local_1158;
                local_11f8 = lVar3;
                local_11e0 = uVar2;
                FUN_141e0cc90(local_1198,param_3,lVar4);
                lVar12 = lVar12 + 0x18;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
          }
          lVar4 = local_11c8;
          if (((*(uint *)(local_11b0 + 4 + local_1178 * 8) & 0x100) != 0) &&
             (iVar8 = 0, 0 < *(int *)(local_11c8 + 0x38))) {
            lVar12 = 0;
            do {
              lVar13 = *(longlong *)(lVar12 + *(longlong *)(lVar4 + 0x30));
              uVar5 = *(uint *)(lVar13 + 200);
              lVar10 = *(longlong *)(param_3 + 0x1b50);
              if (*(longlong *)(param_3 + 0x1b50) == 0) {
                lVar10 = param_3 + 0x1b40;
              }
              uVar6 = uVar5;
              if ((int)uVar5 < 0) {
                uVar6 = uVar5 + 0x1f;
              }
              if ((*(uint *)(lVar10 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0)
              {
                local_1140 = *(undefined4 *)(param_6 + 1);
                local_1148 = *param_6;
                local_1130 = (int)param_5[1];
                local_11e8 = &local_1148;
                local_11f0 = &local_1138;
                local_1138 = *param_5;
                local_11f8 = lVar3;
                local_11e0 = local_11c0;
                local_11d8 = lVar13;
                FUN_141e0cc90(local_1198,param_3,local_11a0);
              }
              iVar8 = iVar8 + 1;
              lVar12 = lVar12 + 8;
            } while (iVar8 < *(int *)(lVar4 + 0x38));
          }
        }
        local_11b8 = local_11b8 + 1;
        local_1190 = local_1190 + 8;
      } while (local_11b8 < *(int *)(param_3 + 0x1de0));
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1110);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1188);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1180);
  }
  return;
}



// FUNCTION 141e0cc90 FUN_141e0cc90 body=2541 status=ok
// SIG undefined FUN_141e0cc90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e0cc90(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,undefined8 *param_7,longlong param_8,
                  undefined8 *param_9)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined *puVar16;
  longlong *plVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_288 [32];
  ulonglong *local_268;
  uint local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  char *local_248;
  undefined1 local_240;
  char local_238 [16];
  ulonglong local_228;
  undefined4 local_220;
  undefined1 local_218 [8];
  float local_210;
  longlong local_208;
  longlong *local_200;
  longlong local_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4;
  ulonglong local_1b0;
  longlong local_1a8 [7];
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128 [15];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined8 local_90;
  longlong *plStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  plVar17 = (longlong *)0x0;
  local_200 = (longlong *)0x0;
  local_208 = param_3;
  local_1f8 = param_4;
  (**(code **)(*(longlong *)param_9[0x15] + 0x40))
            ((longlong *)param_9[0x15],*(undefined4 *)(param_2 + 0x1a38),local_218,&local_200);
  plVar5 = local_200;
  iVar7 = (**(code **)(*local_200 + 0x20))(local_200);
  if (iVar7 != 3) {
    return;
  }
  local_9c = local_9c & 0xf98000e0 | 0x18000e0;
  local_b0 = (undefined8 *)0x0;
  local_a8 = 1;
  local_a0 = 0xffff;
  local_98 = 0;
  local_90 = 0;
  plStack_88 = (longlong *)0x0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  FUN_1408ca0e0(local_128,0);
  puVar14 = local_128;
  if (local_b0 != (undefined8 *)0x0) {
    puVar14 = local_b0;
  }
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    puVar14[3] = 0;
    puVar14[4] = 0;
    puVar14[6] = 0;
    puVar14[7] = 0;
    puVar14[8] = 1;
    puVar14[10] = 0;
    *(undefined4 *)(puVar14 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar14 + 0x5c) = 0;
    puVar14[0xc] = 0x3f800000;
    *(undefined2 *)(puVar14 + 0xd) = 0;
    puVar14[0xe] = 0;
  }
  cVar6 = (**(code **)(*(longlong *)param_9[0x14] + 0x60))();
  local_238[0] = cVar6 == '\0';
  if (cVar6 != '\0') goto LAB_141e0d087;
  if (DAT_146aa9540 == (longlong *)0x0) {
LAB_141e0ce49:
    plVar10 = (longlong *)operator_new(0x770);
    if (plVar10 != (longlong *)0x0) {
      *(undefined4 *)(plVar10 + 1) = *(undefined4 *)(param_2 + 0x1a38);
      plVar10[2] = 0;
      plVar10[3] = 0;
      *(undefined1 *)(plVar10 + 5) = 0;
      plVar10[0x66] = 0;
      *(undefined1 *)(plVar10 + 0x67) = 1;
      *(undefined1 *)((longlong)plVar10 + 0x33a) = 0;
      plVar10[200] = 0;
      plVar10[0xc9] = 0;
      plVar10[0xca] = 0;
      *plVar10 = (longlong)&PTR_FUN_144165fb0;
      plVar10[0xcb] = 0;
      plVar10[0xcc] = 0;
      plVar10[0xcd] = 0;
      plVar10[0xce] = 0;
      plVar10[0xcf] = 0;
      plVar10[0xd0] = 0;
      plVar10[0xd9] = 0;
      plVar10[0xda] = 0;
      plVar10[0xdb] = 0;
      plVar10[0xe0] = 0;
      plVar10[0xe1] = 0;
      plVar10[0xe2] = 0;
      plVar10[0xe3] = 0;
      plVar10[0xe4] = 0;
      plVar10[0xe5] = 0;
      plVar10[0xe6] = 0;
      plVar10[0xe7] = 0;
      plVar10[0xe8] = -1;
      *(undefined2 *)(plVar10 + 0xe9) = 0;
      lVar13 = 2;
      plVar10[0xeb] = 0;
      *(undefined1 *)((longlong)plVar10 + 0x339) = 1;
      plVar17 = plVar10 + 0xec;
      plVar10[0xea] = (longlong)(plVar10 + 0xcb);
      if (plVar17 <= plVar10 + 0xed) {
        for (; lVar13 != 0; lVar13 = lVar13 + -1) {
          *(undefined4 *)plVar17 = 0xffffffff;
          plVar17 = (longlong *)((longlong)plVar17 + 4);
        }
      }
      *plVar10 = (longlong)&PTR_FUN_144e8b210;
      plVar17 = plVar10;
    }
    DAT_146aa9540 = plVar17;
    FRenderResource::UpdateRHI(&DAT_146aaaa20);
    (**(code **)(*DAT_146aa9540 + 0x28))();
  }
  else {
    iVar7 = (int)DAT_146aa9540[1];
    if ((int)DAT_146aa9540[1] == 4) {
      iVar7 = DAT_1464c9c14;
    }
    if (*(int *)(param_2 + 0x1a38) != iVar7) {
      (**(code **)(*DAT_146aa9540 + 0x30))();
      if (DAT_146aa9540 != (longlong *)0x0) {
        (**(code **)*DAT_146aa9540)(DAT_146aa9540,1);
      }
      goto LAB_141e0ce49;
    }
  }
  local_80 = param_9[0x15];
  plStack_88 = DAT_146aa9540;
  puVar14 = local_128;
  if (local_b0 != (undefined8 *)0x0) {
    puVar14 = local_b0;
  }
  local_228 = 0x200000000;
  puVar14[2] = &PTR_PTR_1464c37d0;
  puVar14 = (undefined8 *)param_9[0xf];
  if ((undefined8 *)param_9[0xf] == (undefined8 *)0x0) {
    puVar14 = param_9;
  }
  puVar12 = local_128;
  if (local_b0 != (undefined8 *)0x0) {
    puVar12 = local_b0;
  }
  *puVar12 = *puVar14;
  puVar14 = local_128;
  if (local_b0 != (undefined8 *)0x0) {
    puVar14 = local_b0;
  }
  iVar7 = *(int *)(puVar14 + 7);
  *(int *)(puVar14 + 7) = iVar7 + 1;
  if (*(int *)((longlong)puVar14 + 0x3c) < iVar7 + 1) {
    TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
    ::ResizeGrow(puVar14 + 5,iVar7);
  }
  puVar12 = (undefined8 *)puVar14[6];
  if ((undefined8 *)puVar14[6] == (undefined8 *)0x0) {
    puVar12 = puVar14 + 5;
  }
  puVar12[iVar7] = local_228;
  puVar14 = local_128;
  if (local_b0 != (undefined8 *)0x0) {
    puVar14 = local_b0;
  }
  *(undefined4 *)(puVar14 + 9) = 0;
  puVar14 = local_128;
  if (local_b0 != (undefined8 *)0x0) {
    puVar14 = local_b0;
  }
  *(undefined4 *)((longlong)puVar14 + 0x4c) = 3;
LAB_141e0d087:
  local_260 = 0;
  puVar14 = local_128;
  if (local_238[0] == '\0') {
    puVar14 = param_9;
  }
  uVar9 = *(uint *)((longlong)puVar14 + 0x8c);
  plVar17 = (longlong *)puVar14[0x14];
  local_228 = CONCAT44(uVar9 >> 0xc,uVar9 & 8 | uVar9 >> 6 & 4 | uVar9 >> 0x19 & 2 | uVar9 >> 4 & 1)
              & 0x3fffffffff;
  lVar13 = (longlong)*(int *)(param_2 + 0x1a38);
  local_1b0 = local_228;
  local_268 = &local_1b0;
  FUN_141b279e0(local_1a8,plVar17,puVar14[0x15],plVar5);
  local_168 = 0;
  local_228 = lVar13;
  if (plVar17 == DAT_146aa9540) {
    uVar11 = (**(code **)(*plVar17 + 0x40))(plVar17);
    local_1a8[0] = FUN_1425939a0(plVar5,&DAT_146aac0e0,uVar11,1);
    local_170 = local_1a8[0];
    iVar7 = FUN_1419ef5f0((&DAT_1464c9c48)[lVar13]);
    if ((1 < iVar7) &&
       ((0x1d < (uint)(&DAT_1464c9c48)[local_228] ||
        ((0x28e71800U >> ((&DAT_1464c9c48)[local_228] & 0x1f) & 1) == 0)))) {
      uVar11 = (**(code **)(*plVar17 + 0x40))(plVar17);
      local_168 = FUN_1425939a0(plVar5,&DAT_146aac380,uVar11,1);
    }
    uVar11 = (**(code **)(*plVar17 + 0x40))(plVar17);
    puVar16 = &DAT_146aac620;
  }
  else {
    uVar11 = (**(code **)(*plVar17 + 0x40))();
    local_1a8[0] = FUN_1425939a0(plVar5,&DAT_146aabf90,uVar11,1);
    local_170 = local_1a8[0];
    iVar7 = FUN_1419ef5f0((&DAT_1464c9c48)[lVar13]);
    if ((1 < iVar7) &&
       ((0x1d < (uint)(&DAT_1464c9c48)[local_228] ||
        ((0x28e71800U >> ((&DAT_1464c9c48)[local_228] & 0x1f) & 1) == 0)))) {
      uVar11 = (**(code **)(*plVar17 + 0x40))(plVar17);
      local_168 = FUN_1425939a0(plVar5,&DAT_146aac230,uVar11,1);
    }
    uVar11 = (**(code **)(*plVar17 + 0x40))(plVar17);
    puVar16 = &DAT_146aac4d0;
  }
  local_160 = FUN_1425939a0(plVar5,puVar16,uVar11,1);
  local_1d8 = *(undefined4 *)(local_1f8 + 0x10);
  local_1d0 = *(longlong *)(local_1f8 + 0x18);
  if (local_1d0 != 0) {
    LOCK();
    *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
    UNLOCK();
  }
  local_1c8 = *(undefined8 *)(local_1f8 + 0x20);
  local_1b8 = *(undefined4 *)(local_1f8 + 0x30);
  local_1bc = *(uint *)(local_1f8 + 0x2c);
  local_1b4 = 0;
  local_1e8 = FUN_141dcfa80();
  local_1e0 = FUN_1409853f0();
  local_1bc = local_1bc | 1;
  local_1c0 = 0;
  if (local_168 == 0) {
    uVar11 = 0;
  }
  else {
    lVar13 = *(longlong *)(local_168 + 0x48);
    if (*(char *)(lVar13 + 0x28) == '\0') {
      FUN_1419f3850(lVar13);
    }
    uVar11 = *(undefined8 *)(lVar13 + 0x58);
  }
  lVar13 = *(longlong *)(local_160 + 0x48);
  if (*(char *)(lVar13 + 0x28) == '\0') {
    FUN_1419f3850(lVar13);
  }
  uVar2 = *(undefined8 *)(lVar13 + 0x40);
  lVar13 = *(longlong *)(local_170 + 0x48);
  if (*(char *)(lVar13 + 0x28) == '\0') {
    FUN_1419f3850(lVar13);
  }
  uVar3 = *(undefined8 *)(lVar13 + 0x38);
  puVar12 = (undefined8 *)FUN_141b34160(local_1a8);
  local_158 = *puVar12;
  local_148 = 0;
  uStack_140 = 0;
  local_150 = uVar3;
  local_138 = uVar2;
  local_130 = uVar11;
  FUN_141a9adc0(param_1,local_1a8,&local_1e8,&local_158);
  local_258 = &local_1e8;
  local_260 = local_260 & 0xffffff00;
  local_268 = (ulonglong *)param_5;
  FUN_141e0a1b0(local_1a8,param_1,param_2,local_208);
  fVar1 = *(float *)(param_8 + 0xd8);
  uVar11 = *param_7;
  uStack_140 = CONCAT44(uStack_140._4_4_,fVar1);
  local_210 = *(float *)(param_7 + 1);
  local_208 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_220 = 0;
  fVar20 = *(float *)(param_8 + 200) * *(float *)(param_2 + 0x538) +
           *(float *)(param_2 + 0x548) * 1.0 +
           *(float *)(param_8 + 0xc0) * *(float *)(param_2 + 0x518) +
           *(float *)(param_8 + 0xc4) * *(float *)(param_2 + 0x528);
  fVar19 = *(float *)((longlong)param_7 + 4);
  if ((*(int *)(local_208 + 0x38) < DAT_1468509dc) &&
     (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
    DAT_1468509d8 = 1.442695;
    _Init_thread_footer(&DAT_1468509dc);
  }
  iVar7 = DAT_1468509dc;
  fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11 * (fVar20 - fVar1) + fVar19);
  uVar11 = *param_7;
  iVar18 = (int)(fVar19 * DAT_1468509d8 * local_210);
  fVar19 = *(float *)((longlong)param_7 + 4);
  local_210 = *(float *)(param_7 + 1);
  if ((*(int *)(local_208 + 0x38) < iVar7) &&
     (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
    DAT_1468509d8 = 1.442695;
    _Init_thread_footer(&DAT_1468509dc);
  }
  fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar11 * (fVar20 + fVar1) + fVar19);
  iVar7 = *(int *)(param_6 + 8) + -1;
  iVar15 = (int)(fVar19 * DAT_1468509d8 * local_210);
  if (iVar18 < 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = iVar7;
    if (iVar18 < iVar7) {
      iVar8 = iVar18;
    }
  }
  if (iVar15 < 0) {
    iVar7 = 0;
  }
  else if (iVar15 < iVar7) {
    iVar7 = iVar15;
  }
  uVar9 = FUN_14274f980(param_2);
  iVar18 = FUN_1419ef5f0(uVar9);
  if ((iVar18 < 2) || ((uVar9 < 0x1e && ((0x28e71800U >> (uVar9 & 0x1f) & 1) != 0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  iVar18 = 1;
  if (bVar4) {
    iVar18 = DAT_1464c36c0;
  }
  iVar18 = ((iVar7 - iVar8) + iVar18) / iVar18;
  iVar15 = 0;
  iVar7 = DAT_1464c36c4;
  if (0 < iVar18) {
    do {
      if (((iVar7 < 0) || (iVar7 == iVar15)) && (uVar9 = 0, 0 < *(int *)(puVar14 + 0x10))) {
        do {
          local_240 = 0;
          local_248 = local_238;
          local_250 = &local_1e8;
          local_258 = (undefined8 *)CONCAT44(local_258._4_4_,iVar15);
          local_268 = puVar14;
          local_260 = uVar9;
          FUN_141e08150(local_1a8,param_1,param_2,param_8);
          local_260 = local_260 & 0xffffff00;
          local_268 = (ulonglong *)CONCAT44(local_268._4_4_,uVar9);
          FUN_141b315b0(local_1a8,param_1,param_2,puVar14);
          uVar9 = uVar9 + 1;
          iVar7 = DAT_1464c36c4;
        } while ((int)uVar9 < *(int *)(puVar14 + 0x10));
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar18);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1d0);
  FUN_1408bbda0(local_128);
  return;
}



// FUNCTION 141e0d680 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FVolumetricFogGlobalData::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"FogGridToPixelXY";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x38;
  puVar2[1] = 2;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"MaxDistance";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x40;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"HeightFogInscatteringColor";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x50;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"HeightFogDirectionalLightInscatteringColor";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000060;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141e0d880 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FVolumetricFogGlobalData::zzGetMembersBefore(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"GridSizeInt";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 2;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 3;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"GridSize";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"GridPixelSizeShift";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x1c;
  puVar1[1] = 3;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"GridZParams";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"SVPosToVolumeUV";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000030;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 2;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141e0dae0 FUN_141e0dae0 body=47 status=ok
// SIG undefined FUN_141e0dae0(void)

longlong FUN_141e0dae0(void)

{
  if (DAT_146aaef20 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146aaef20,&PTR_s__Script_Renderer_144e8ba28);
  }
  return DAT_146aaef20;
}



// FUNCTION 141e0db10 FUN_141e0db10 body=53 status=ok
// SIG undefined FUN_141e0db10(void)

void FUN_141e0db10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144e8b910;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141e0dbb0 Get_Z_Construct_UScriptStruct_FLightPropagationVolumeSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLightPropagationVolumeSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLightPropagationVolumeSettings_CRC(void)

{
  return 0x56411356;
}



// FUNCTION 141e0dc00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FLightPropagationVolumeSettings::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aaef08 == 0) {
    if (DAT_146aaef20 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aaef20,&PTR_s__Script_Renderer_144e8ba28);
    }
    lVar1 = DAT_146aaef20;
    uVar2 = Get_Z_Construct_UScriptStruct_FLightPropagationVolumeSettings_CRC();
    DAT_146aaef08 =
         GetStaticStruct(FUN_141e0dc80,lVar1,L"LightPropagationVolumeSettings",0x40,uVar2);
  }
  return;
}



// FUNCTION 141e0dc80 FUN_141e0dc80 body=47 status=ok
// SIG undefined FUN_141e0dc80(void)

longlong FUN_141e0dc80(void)

{
  if (DAT_146aaef18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aaef18,&PTR_FUN_1464c4000);
  }
  return DAT_146aaef18;
}



// FUNCTION 141e0dcb0 CreateAnalyticsProvider body=121 status=ok
// SIG undefined CreateAnalyticsProvider(void)

undefined8 *
FAnalytics::CreateAnalyticsProvider
          (undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*param_3 != 0) {
    FUN_14168dc80();
    lVar1 = *param_3;
    uVar2 = FUN_14168dc80();
    plVar3 = (longlong *)FUN_141690010(uVar2,lVar1);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_4);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141e0dd30 FUN_141e0dd30 body=64 status=ok
// SIG undefined FUN_141e0dd30(void)

void FUN_141e0dd30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144e8bf08;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 141e0dd70 FUN_141e0dd70 body=78 status=ok
// SIG undefined FUN_141e0dd70(void)

undefined8 * FUN_141e0dd70(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong local_18;
  
  puVar1 = (undefined8 *)(**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  *param_2 = 0;
  *param_2 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141e0ddc0 GetConfigValueFromIni body=85 status=ok
// SIG undefined GetConfigValueFromIni(void)

undefined8 *
FAnalytics::GetConfigValueFromIni
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  puVar1 = &DAT_143f3eda8;
  if (*(int *)(param_5 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_5;
  }
  if (*(int *)(param_4 + 1) != 0) {
    puVar1 = (undefined2 *)*param_4;
  }
  FConfigCacheIni::GetString(DAT_1468b6148,puVar1,puVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 141e0de20 FUN_141e0de20 body=516 status=ok
// SIG undefined FUN_141e0de20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141e0de20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *_Src;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong *local_58;
  int local_50;
  undefined2 *local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  wchar_t *local_28;
  undefined8 local_20;
  
  _Src = DAT_1468e2360;
  local_38 = (void *)0x0;
  iVar2 = (int)_DAT_1468e2368;
  local_30 = iVar2;
  if (iVar2 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,_DAT_1468e2368 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar2 * 2);
  }
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,10);
  iVar2 = (int)local_20 + 10;
  local_20 = CONCAT44(local_20._4_4_,iVar2);
  if (local_20._4_4_ < iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
  }
  builtin_wcsncpy(local_28,L"Analytics",10);
  puVar3 = (undefined8 *)FName::FName(local_res18,"Analytics",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FUN_141690010(uVar4,uVar1);
  local_58 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_50 = 3;
  local_58 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_GetPoolName_144e8bf08;
    plVar6[1] = (longlong)&local_38;
    plVar6[2] = (longlong)FAnalytics::ConfigFromIni::GetValue;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
  }
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  FConfigCacheIni::GetString
            (DAT_1468b6148,L"Analytics",L"ProviderModuleName",&local_48,&DAT_1468e2360);
  puVar8 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar8 = local_48;
  }
  FName::FName(local_res10,puVar8,1);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  (**(code **)(*plVar5 + 0x40))(plVar5,param_2,local_res10,&local_58);
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) goto LAB_141e0dff0;
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
LAB_141e0dff0:
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141e0e030 GetValue body=125 status=ok
// SIG undefined GetValue(void)

undefined8
FAnalytics::ConfigFromIni::GetValue
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,"Analytics",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
  (**(code **)(*plVar4 + 0x50))(plVar4,param_2,param_1,param_1 + 0x10,param_3,param_4);
  return param_2;
}



// FUNCTION 141e0e0b0 FUN_141e0e0b0 body=39 status=ok
// SIG undefined FUN_141e0e0b0(void)

void FUN_141e0e0b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144e8be58;
    return;
  }
  return;
}



// FUNCTION 141e0e0e0 WriteConfigValueToIni body=249 status=ok
// SIG undefined WriteConfigValueToIni(void)

void FAnalytics::WriteConfigValueToIni
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  short *psVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong local_18;
  ulonglong local_10;
  
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    psVar4 = &DAT_143f3eda8;
  }
  else {
    psVar4 = (short *)*param_2;
  }
  local_18 = 0;
  local_10 = 0;
  if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (psVar4[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,psVar4,(longlong)(int)uVar1 * 2);
  }
  if (*(int *)(param_5 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_5;
  }
  if (*(int *)(param_4 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_4;
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar3 = (undefined2 *)*param_3;
  }
  FConfigCacheIni::SetString(DAT_1468b6148,puVar3,puVar5,puVar6,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e0e1e0 MultiFind<FDefaultAllocator> body=681 status=ok
// SIG undefined MultiFind<FDefaultAllocator>(void)

void FConfigSection::MultiFind<FDefaultAllocator>
               (longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  int local_a0;
  uint uStack_9c;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_78;
  uint uStack_74;
  uint *local_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  uint uStack_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  uVar2 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  uStack_9c = 1;
  local_a0 = 0;
  uStack_8c = 0;
  iStack_88 = 0;
  if (uVar2 != 0) {
    puVar16 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar3 = *puVar16;
    iStack_88 = 0;
    local_a0 = 0;
    while (uVar3 == 0) {
      lVar13 = (longlong)local_a0;
      iStack_88 = iStack_88 + 0x20;
      iVar18 = local_a0 + 1;
      bVar6 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a0;
      local_a0 = iVar18;
      if (bVar6) goto LAB_141e0e2ba;
      uVar3 = puVar16[lVar13 + 1];
    }
    uStack_9c = -uVar3 & uVar3;
    iVar18 = 0x1f;
    if (uStack_9c != 0) {
      for (; uStack_9c >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uStack_9c == 0) {
      iVar18 = 0x20;
    }
    else {
      iVar18 = 0x1f - iVar18;
    }
    uStack_8c = (iStack_88 - iVar18) + 0x1f;
    if ((int)uVar2 < (int)uStack_8c) {
LAB_141e0e2ba:
      uStack_8c = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 5);
  uStack_68 = 0xffffffff;
  uStack_64 = uStack_8c;
  local_60 = CONCAT44(uStack_84,iStack_88);
  uStack_50 = CONCAT44(uStack_9c,local_a0);
  uVar17 = uVar3 & 0xffffffe0;
  iStack_78 = local_a0;
  uStack_74 = uStack_9c;
  local_70 = puVar1;
  local_58 = param_1;
  puStack_48 = puVar1;
  uStack_38 = local_60;
  uStack_40 = uStack_68;
  uStack_3c = uStack_64;
  uStack_8c = uVar3;
  if (uVar3 != uVar2) {
    puVar16 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar16 = puVar1;
    }
    uVar12 = puVar16[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar18 = (int)uVar3 >> 5;
    while (uVar12 == 0) {
      uVar17 = uVar17 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar18)
      goto LAB_141e0e382;
      uVar12 = puVar16[(longlong)iVar18 + 1];
      iVar18 = iVar18 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar18 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar18 = 0x20;
    }
    else {
      iVar18 = 0x1f - iVar18;
    }
    uStack_8c = (uVar17 - iVar18) + 0x1f;
    if ((int)uVar2 < (int)uStack_8c) {
LAB_141e0e382:
      uStack_8c = uVar2;
    }
  }
  while ((uStack_64 != uStack_8c || (local_70 != puVar1))) {
    plVar14 = (longlong *)((longlong)(int)uStack_64 * 0x30 + *param_1);
    if (*plVar14 == param_2) {
      lVar13 = 0x18;
      iVar4 = (int)param_3[1];
      iVar18 = (int)plVar14[4] + -1;
      if ((int)plVar14[4] == 0) {
        iVar18 = 0;
      }
      *(int *)(param_3 + 1) = iVar4 + 1;
      if (iVar18 < 1) {
        lVar13 = 8;
      }
      if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar4);
      }
      FString::FString((longlong)iVar4 * 0x10 + *param_3,lVar13 + (longlong)plVar14);
    }
    uStack_68 = uStack_68 & ~uStack_74;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_78);
  }
  if (param_4 != '\0') {
    iVar18 = (int)param_3[1];
    puVar5 = (undefined8 *)*param_3;
    if (0 < iVar18 / 2) {
      uVar15 = (ulonglong)(uint)(iVar18 / 2);
      puVar11 = puVar5;
      do {
        iVar18 = iVar18 + -1;
        puVar10 = puVar5 + (longlong)iVar18 * 2;
        if (puVar11 != puVar10) {
          uVar7 = puVar10[1];
          uVar8 = *puVar11;
          uVar9 = puVar11[1];
          *puVar11 = *puVar10;
          puVar11[1] = uVar7;
          *puVar10 = uVar8;
          puVar10[1] = uVar9;
        }
        puVar11 = puVar11 + 2;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  return;
}



// FUNCTION 141e0e490 UOCPlayerRank body=51 status=ok
// SIG undefined UOCPlayerRank(void)

undefined8 * UOCPlayerRank::UOCPlayerRank(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144e8c3e0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 141e0e4d0 UGameMapsSettings body=201 status=ok
// SIG undefined UGameMapsSettings(void)

undefined8 * UGameMapsSettings::UGameMapsSettings(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144e8c658;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
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
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 141e0e5a0 FUN_141e0e5a0 body=33 status=ok
// SIG undefined FUN_141e0e5a0(void)

undefined8 * FUN_141e0e5a0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1445cacb0;
  return param_1;
}



// FUNCTION 141e0e5d0 UGeneralProjectSettings body=207 status=ok
// SIG undefined UGeneralProjectSettings(void)

undefined8 * UGeneralProjectSettings::UGeneralProjectSettings(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144e8c8d0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FText::FText(param_1 + 0x1b);
  FText::FText(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x21) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x1010100;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return param_1;
}



// FUNCTION 141e0e6a0 `scalar_deleting_destructor' body=135 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UConsoleSettings::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48);
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_1416b5c20(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141e0e730 `scalar_deleting_destructor' body=204 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGameMapsSettings::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_140b9c8c0(param_1 + 0xf8);
  FUN_140b9c8c0(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 141e0e800 `scalar_deleting_destructor' body=342 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGeneralProjectSettings::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xf8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xe0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 141e0e960 FixMapAssetRef body=341 status=ok
// SIG undefined FixMapAssetRef(void)

void FixMapAssetRef(undefined8 param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  short *psVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar6;
  undefined2 *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  undefined2 *local_28;
  undefined8 local_20;
  short *local_18;
  int local_10;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  FSoftObjectPath::ToString(param_1,&local_18);
  if (1 < local_10) {
    psVar3 = local_18 + local_10;
    do {
      if (psVar3 == local_18) goto LAB_141e0e9c0;
      psVar3 = psVar3 + -1;
    } while (*psVar3 != 0x2e);
    if ((int)((longlong)psVar3 - (longlong)local_18 >> 1) == -1) {
LAB_141e0e9c0:
      local_38[1] = 2;
      local_28 = (undefined2 *)0x0;
      local_20 = 0;
      local_48 = (undefined2 *)0x0;
      local_40 = 0;
      local_38[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      lVar1 = local_38[0];
      FGenericPlatformString::Memcpy(local_38[0],&DAT_144e8bfac,4);
      FUN_1404e14f0(&local_18,local_38,&local_48,local_38 + 2,CONCAT44(uVar6,1),1);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
      puVar2 = local_28;
      puVar5 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar5 = local_28;
      }
      puVar4 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        puVar4 = local_48;
      }
      FString::PrintfImpl(local_38 + 2,L"%s/%s.%s",puVar4,puVar5,puVar5);
      FUN_1417978e0(param_1,local_38 + 2);
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free(local_48);
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
    }
  }
  if (local_18 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e0eac0 FUN_141e0eac0 body=128 status=ok
// SIG undefined FUN_141e0eac0(void)

undefined8 * FUN_141e0eac0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong local_18;
  
  plVar1 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar3 = plVar1[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar3 = plVar1[0x1f];
  }
  puVar2 = (undefined8 *)FSoftObjectPath::GetLongPackageName(lVar3 + 0x88);
  *param_1 = 0;
  *param_1 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141e0eb40 FUN_141e0eb40 body=725 status=ok
// SIG undefined FUN_141e0eb40(void)

longlong * FUN_141e0eb40(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 local_res18 [8];
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  plVar4 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar6 = plVar4[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar6 = plVar4[0x1f];
  }
  if (lVar6 != 0) {
    lVar5 = UGameMapsSettings::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141e0ebc2;
  }
  lVar6 = 0;
LAB_141e0ebc2:
  lVar5 = *(longlong *)(lVar6 + 0xe8);
  lVar6 = lVar5 + (longlong)*(int *)(lVar6 + 0xf0) * 0x28;
  for (; lVar5 != lVar6; lVar5 = lVar5 + 0x28) {
    if (((*(int *)(lVar5 + 8) != 0) && (0 < *(int *)(lVar5 + 8) + -1)) &&
       (cVar3 = FString::StartsWith(param_2,lVar5,1), cVar3 != '\0')) {
      FSoftObjectPath::ToString(lVar5 + 0x10,param_1);
      return param_1;
    }
  }
  lVar6 = FConfigCacheIni::GetSectionPrivate
                    (DAT_1468b6148,L"/Script/Engine.WorldSettings",0,1,&DAT_1468e2410);
  if (lVar6 != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    puVar7 = (undefined8 *)FName::FName(local_res18,L"DefaultMapPrefixes",1);
    FConfigSection::MultiFind<FDefaultAllocator>(lVar6,*puVar7,&local_38,0);
    plVar2 = local_38;
    uVar10 = (uint)local_30;
    uVar11 = (ulonglong)(int)(uint)local_30;
    plVar4 = plVar2;
    if ((uint)local_30 != 0) {
      plVar12 = local_38 + uVar11 * 2;
      for (plVar9 = local_38; plVar9 != plVar12; plVar9 = plVar9 + 2) {
        local_38 = (longlong *)0x0;
        local_30 = 0;
        local_48 = 0;
        local_40 = 0;
        if ((int)plVar9[1] == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*plVar9;
        }
        cVar3 = FParse::Value(puVar8,L"Prefix=",&local_38,1);
        if (cVar3 != '\0') {
          if ((int)plVar9[1] == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*plVar9;
          }
          cVar3 = FParse::Value(puVar8,L"GameMode=",&local_48,1);
          if ((cVar3 != '\0') && (cVar3 = FString::StartsWith(param_2,&local_38,1), cVar3 != '\0'))
          {
            *param_1 = local_48;
            *(undefined4 *)(param_1 + 1) = (undefined4)local_40;
            *(undefined4 *)((longlong)param_1 + 0xc) = local_40._4_4_;
            local_40 = 0;
            local_48 = 0;
            if (local_38 != (longlong *)0x0) {
              FMemory::Free();
            }
            do {
              if (*plVar4 != 0) {
                FMemory::Free();
              }
              uVar10 = (int)uVar11 - 1;
              uVar11 = (ulonglong)uVar10;
              plVar4 = plVar4 + 2;
            } while (uVar10 != 0);
            if (plVar2 == (longlong *)0x0) {
              return param_1;
            }
            FMemory::Free(plVar2);
            return param_1;
          }
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
    while (uVar10 != 0) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      uVar10 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar10;
      plVar4 = plVar4 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 141e0ee20 FUN_141e0ee20 body=765 status=ok
// SIG undefined FUN_141e0ee20(void)

longlong * FUN_141e0ee20(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 local_res18 [8];
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  plVar5 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar7 = plVar5[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar7 = plVar5[0x1f];
  }
  if (lVar7 != 0) {
    lVar6 = UGameMapsSettings::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141e0eea2;
  }
  lVar7 = 0;
LAB_141e0eea2:
  puVar12 = *(undefined8 **)(lVar7 + 0xf8);
  puVar8 = puVar12 + (longlong)*(int *)(lVar7 + 0x100) * 5;
  for (; puVar12 != puVar8; puVar12 = puVar12 + 5) {
    if (*(int *)(puVar12 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar12;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*param_2;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar11);
    if (iVar4 == 0) {
      FSoftObjectPath::ToString(puVar12 + 2,param_1);
      return param_1;
    }
  }
  lVar7 = FConfigCacheIni::GetSectionPrivate
                    (DAT_1468b6148,L"/Script/Engine.GameMode",0,1,&DAT_1468e2410);
  if (lVar7 != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    puVar8 = (undefined8 *)FName::FName(local_res18,L"GameModeClassAliases",1);
    FConfigSection::MultiFind<FDefaultAllocator>(lVar7,*puVar8,&local_38,0);
    plVar2 = local_38;
    uVar14 = (uint)local_30;
    uVar15 = (ulonglong)(int)(uint)local_30;
    plVar5 = plVar2;
    if ((uint)local_30 != 0) {
      plVar16 = local_38 + uVar15 * 2;
      for (plVar13 = local_38; plVar13 != plVar16; plVar13 = plVar13 + 2) {
        local_38 = (longlong *)0x0;
        local_30 = 0;
        local_48 = 0;
        local_40 = 0;
        if ((int)plVar13[1] == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*plVar13;
        }
        cVar3 = FParse::Value(puVar11,L"ShortName=",&local_38,1);
        if (cVar3 != '\0') {
          if ((int)plVar13[1] == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*plVar13;
          }
          cVar3 = FParse::Value(puVar11,L"GameClassName=",&local_48,1);
          if (cVar3 != '\0') {
            if (*(int *)(param_2 + 1) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = (undefined2 *)*param_2;
            }
            plVar10 = (longlong *)&DAT_143f3eda8;
            if ((uint)local_30 != 0) {
              plVar10 = local_38;
            }
            iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(plVar10,puVar11);
            if (iVar4 == 0) {
              *param_1 = local_48;
              *(undefined4 *)(param_1 + 1) = (undefined4)local_40;
              *(undefined4 *)((longlong)param_1 + 0xc) = local_40._4_4_;
              local_40 = 0;
              local_48 = 0;
              if (local_38 != (longlong *)0x0) {
                FMemory::Free();
              }
              do {
                if (*plVar5 != 0) {
                  FMemory::Free();
                }
                uVar14 = (int)uVar15 - 1;
                uVar15 = (ulonglong)uVar14;
                plVar5 = plVar5 + 2;
              } while (uVar14 != 0);
              if (plVar2 == (longlong *)0x0) {
                return param_1;
              }
              FMemory::Free(plVar2);
              return param_1;
            }
          }
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
    while (uVar14 != 0) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      uVar14 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar14;
      plVar5 = plVar5 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
  }
  FString::FString(param_1,param_2);
  return param_1;
}



// FUNCTION 141e0f120 FUN_141e0f120 body=200 status=ok
// SIG undefined FUN_141e0f120(void)

undefined8 * FUN_141e0f120(undefined8 *param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong local_18 [2];
  
  plVar2 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar5 = plVar2[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar5 = plVar2[0x1f];
  }
  if (lVar5 != 0) {
    lVar3 = UGameMapsSettings::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141e0f199;
  }
  lVar5 = 0;
LAB_141e0f199:
  puVar4 = (undefined8 *)FSoftObjectPath::ToString(lVar5 + 0xb8,local_18);
  *param_1 = 0;
  *param_1 = *puVar4;
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar4 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
  puVar4[1] = 0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141e0f1f0 PostInitProperties body=61 status=ok
// SIG undefined PostInitProperties(void)

void UGameMapsSettings::PostInitProperties(longlong param_1)

{
  FUN_1417931d0();
  FixMapAssetRef(param_1 + 0x28);
  FixMapAssetRef(param_1 + 0x88);
  FixMapAssetRef(param_1 + 0xa0);
  FixMapAssetRef(param_1 + 0x50);
  return;
}



// FUNCTION 141e0f230 PostReloadConfig body=266 status=ok
// SIG undefined PostReloadConfig(void)

void UGameMapsSettings::PostReloadConfig(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_res10 [8];
  
  if (param_2 == 0) {
    FixMapAssetRef(param_1 + 0x28);
    FixMapAssetRef(param_1 + 0x88);
    FixMapAssetRef(param_1 + 0xa0);
    FixMapAssetRef(param_1 + 0x50);
    return;
  }
  lVar1 = *(longlong *)(param_2 + 0x18);
  plVar2 = (longlong *)FName::FName(local_res10,L"EditorStartupMap",1);
  if (lVar1 == *plVar2) {
    param_1 = param_1 + 0x28;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x18);
    plVar2 = (longlong *)FName::FName(local_res10,L"GameDefaultMap",1);
    if (lVar1 == *plVar2) {
      param_1 = param_1 + 0x88;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x18);
      plVar2 = (longlong *)FName::FName(local_res10,L"ServerDefaultMap",1);
      if (lVar1 == *plVar2) {
        param_1 = param_1 + 0xa0;
      }
      else {
        lVar1 = *(longlong *)(param_2 + 0x18);
        plVar2 = (longlong *)FName::FName(local_res10,L"TransitionMap",1);
        if (lVar1 != *plVar2) {
          return;
        }
        param_1 = param_1 + 0x50;
      }
    }
  }
  FixMapAssetRef(param_1);
  return;
}



// FUNCTION 141e0f340 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UConsoleSettings::GetPrivateStaticClass(void)

{
  if (DAT_146aaef68 == 0) {
    FUN_14171ccd0(L"/Script/EngineSettings",L"ConsoleSettings",&DAT_146aaef68,FUN_140447710,0x70,
                  0x10000006,0,L"Input",&LAB_141e0f8d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aaef68;
}



// FUNCTION 141e0f3e0 FUN_141e0f3e0 body=47 status=ok
// SIG undefined FUN_141e0f3e0(void)

longlong FUN_141e0f3e0(void)

{
  if (DAT_146aaef70 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146aaef70,&PTR_s__Script_EngineSettings_144e8e240);
  }
  return DAT_146aaef70;
}



// FUNCTION 141e0f410 FUN_141e0f410 body=53 status=ok
// SIG undefined FUN_141e0f410(void)

void FUN_141e0f410(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144e8e128;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141e0f470 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameMapsSettings::GetPrivateStaticClass(void)

{
  if (DAT_146aaefa0 == 0) {
    FUN_14171ccd0(L"/Script/EngineSettings",L"GameMapsSettings",&DAT_146aaefa0,FUN_140447710,0x108,
                  0x10000006,0,L"Engine",&LAB_141e0f8f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aaefa0;
}



// FUNCTION 141e0f510 FUN_141e0f510 body=53 status=ok
// SIG undefined FUN_141e0f510(void)

void FUN_141e0f510(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144e8e2f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141e0f560 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UGameNetworkManagerSettings::StaticClass(void)

{
  if (DAT_146aaefb0 == 0) {
    FUN_14171ccd0(L"/Script/EngineSettings",L"GameNetworkManagerSettings",&DAT_146aaefb0,
                  FUN_140447710,0x58,0x10000004,0,L"Game",&LAB_141e0f910,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aaefb0;
}



// FUNCTION 141e0f610 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UGameSessionSettings::StaticClass(void)

{
  if (DAT_146aaefc0 == 0) {
    FUN_14171ccd0(L"/Script/EngineSettings",L"GameSessionSettings",&DAT_146aaefc0,FUN_140447710,0x38
                  ,0x10000004,0,L"Game",&LAB_1405b6620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aaefc0;
}



// FUNCTION 141e0f6c0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UGeneralEngineSettings::StaticClass(void)

{
  if (DAT_146aaefd0 == 0) {
    FUN_14171ccd0(L"/Script/EngineSettings",L"GeneralEngineSettings",&DAT_146aaefd0,FUN_140447710,
                  0x28,0x10000000,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aaefd0;
}



// FUNCTION 141e0f770 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGeneralProjectSettings::GetPrivateStaticClass(void)

{
  if (DAT_146aaefe0 == 0) {
    FUN_14171ccd0(L"/Script/EngineSettings",L"GeneralProjectSettings",&DAT_146aaefe0,FUN_140447710,
                  0x118,0x10000006,0,L"Game",&LAB_141e0f930,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aaefe0;
}



// FUNCTION 141e0f820 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UHudSettings::StaticClass(void)

{
  if (DAT_146aaeff0 == 0) {
    FUN_14171ccd0(L"/Script/EngineSettings",L"HudSettings",&DAT_146aaeff0,FUN_140447710,0x40,
                  0x10000004,0,L"Game",&LAB_1405bf490,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aaeff0;
}



// FUNCTION 141e0f9a0 Copy body=112 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAutoCompleteCommand>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x20);
    do {
      FString::operator=(puVar1 + -8,param_3 + -0x20 + (longlong)puVar1);
      FString::operator=(puVar1 + -4,param_3 + -0x10 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1 = puVar1 + 10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141e0fa10 Copy body=130 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FGameModeName>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x10;
    do {
      FString::operator=(param_2 + -0x10,param_3 + -0x10 + param_2);
      local_28 = *(undefined8 *)(param_3 + param_2);
      FString::FString(local_20,param_3 + 8 + param_2);
      FSoftObjectPath::operator=(param_2,&local_28);
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141e0faa0 EThreePlayerSplitScreenType_StaticEnum body=85 status=ok
// SIG undefined EThreePlayerSplitScreenType_StaticEnum(void)

void EThreePlayerSplitScreenType_StaticEnum(void)

{
  if (DAT_146aaef30 == 0) {
    if (DAT_146aaef70 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aaef70,&PTR_s__Script_EngineSettings_144e8e240);
    }
    DAT_146aaef30 = GetStaticEnum(FUN_141e0fe20,DAT_146aaef70,L"EThreePlayerSplitScreenType");
  }
  return;
}



// FUNCTION 141e0fb00 ETwoPlayerSplitScreenType_StaticEnum body=85 status=ok
// SIG undefined ETwoPlayerSplitScreenType_StaticEnum(void)

void ETwoPlayerSplitScreenType_StaticEnum(void)

{
  if (DAT_146aaef38 == 0) {
    if (DAT_146aaef70 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aaef70,&PTR_s__Script_EngineSettings_144e8e240);
    }
    DAT_146aaef38 = GetStaticEnum(FUN_141e0fe50,DAT_146aaef70,L"ETwoPlayerSplitScreenType");
  }
  return;
}



// FUNCTION 141e0fb60 Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC(void)

{
  return 0x76d034ef;
}



// FUNCTION 141e0fb70 Get_Z_Construct_UScriptStruct_FGameModeName_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGameModeName_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGameModeName_CRC(void)

{
  return 0xa2fd1691;
}



// FUNCTION 141e0fbd0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAutoCompleteCommand::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aaef40 == 0) {
    if (DAT_146aaef70 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aaef70,&PTR_s__Script_EngineSettings_144e8e240);
    }
    lVar1 = DAT_146aaef70;
    uVar2 = Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_CRC();
    DAT_146aaef40 = GetStaticStruct(FUN_141e0fe80,lVar1,L"AutoCompleteCommand",0x28,uVar2);
  }
  return;
}



// FUNCTION 141e0fc50 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGameModeName::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aaef88 == 0) {
    if (DAT_146aaef70 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aaef70,&PTR_s__Script_EngineSettings_144e8e240);
    }
    lVar1 = DAT_146aaef70;
    uVar2 = Get_Z_Construct_UScriptStruct_FGameModeName_CRC();
    DAT_146aaef88 = GetStaticStruct(FUN_141e0feb0,lVar1,L"GameModeName",0x28,uVar2);
  }
  return;
}



// FUNCTION 141e0fcd0 FUN_141e0fcd0 body=47 status=ok
// SIG undefined FUN_141e0fcd0(void)

longlong FUN_141e0fcd0(void)

{
  if (DAT_146aaef60 == 0) {
    FUN_141786440(&DAT_146aaef60,&PTR_GetPrivateStaticClass_144e8cc90);
  }
  return DAT_146aaef60;
}



// FUNCTION 141e0fd00 FUN_141e0fd00 body=47 status=ok
// SIG undefined FUN_141e0fd00(void)

longlong FUN_141e0fd00(void)

{
  if (DAT_146aaef98 == 0) {
    FUN_141786440(&DAT_146aaef98,&PTR_GetPrivateStaticClass_144e8d390);
  }
  return DAT_146aaef98;
}



// FUNCTION 141e0fd30 FUN_141e0fd30 body=47 status=ok
// SIG undefined FUN_141e0fd30(void)

longlong FUN_141e0fd30(void)

{
  if (DAT_146aaefa8 == 0) {
    FUN_141786440(&DAT_146aaefa8,&PTR_StaticClass_144e8d690);
  }
  return DAT_146aaefa8;
}



// FUNCTION 141e0fd60 FUN_141e0fd60 body=47 status=ok
// SIG undefined FUN_141e0fd60(void)

longlong FUN_141e0fd60(void)

{
  if (DAT_146aaefb8 == 0) {
    FUN_141786440(&DAT_146aaefb8,&PTR_StaticClass_144e8d900);
  }
  return DAT_146aaefb8;
}



// FUNCTION 141e0fd90 FUN_141e0fd90 body=47 status=ok
// SIG undefined FUN_141e0fd90(void)

longlong FUN_141e0fd90(void)

{
  if (DAT_146aaefc8 == 0) {
    FUN_141786440(&DAT_146aaefc8,&PTR_StaticClass_144e8da50);
  }
  return DAT_146aaefc8;
}



// FUNCTION 141e0fdc0 FUN_141e0fdc0 body=47 status=ok
// SIG undefined FUN_141e0fdc0(void)

longlong FUN_141e0fdc0(void)

{
  if (DAT_146aaefd8 == 0) {
    FUN_141786440(&DAT_146aaefd8,&PTR_GetPrivateStaticClass_144e8dc30);
  }
  return DAT_146aaefd8;
}



// FUNCTION 141e0fdf0 FUN_141e0fdf0 body=47 status=ok
// SIG undefined FUN_141e0fdf0(void)

longlong FUN_141e0fdf0(void)

{
  if (DAT_146aaefe8 == 0) {
    FUN_141786440(&DAT_146aaefe8,&PTR_StaticClass_144e8df20);
  }
  return DAT_146aaefe8;
}



// FUNCTION 141e0fe20 FUN_141e0fe20 body=47 status=ok
// SIG undefined FUN_141e0fe20(void)

longlong FUN_141e0fe20(void)

{
  if (DAT_146aaef78 == 0) {
    FUN_1417866a0(&DAT_146aaef78,&PTR_FUN_1464c5310);
  }
  return DAT_146aaef78;
}



// FUNCTION 141e0fe50 FUN_141e0fe50 body=47 status=ok
// SIG undefined FUN_141e0fe50(void)

longlong FUN_141e0fe50(void)

{
  if (DAT_146aaef80 == 0) {
    FUN_1417866a0(&DAT_146aaef80,&PTR_FUN_1464c5360);
  }
  return DAT_146aaef80;
}



// FUNCTION 141e0fe80 FUN_141e0fe80 body=47 status=ok
// SIG undefined FUN_141e0fe80(void)

longlong FUN_141e0fe80(void)

{
  if (DAT_146aaef58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aaef58,&PTR_FUN_1464c40c0);
  }
  return DAT_146aaef58;
}



// FUNCTION 141e0feb0 FUN_141e0feb0 body=47 status=ok
// SIG undefined FUN_141e0feb0(void)

longlong FUN_141e0feb0(void)

{
  if (DAT_146aaef90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aaef90,&PTR_FUN_1464c44c0);
  }
  return DAT_146aaef90;
}



// FUNCTION 141e0fee0 GetModuleKeyName body=62 status=ok
// SIG undefined GetModuleKeyName(void)

undefined8 * FHeadMountedDisplayModule::GetModuleKeyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Default",0x10);
  return param_2;
}



// FUNCTION 141e0ff20 FUN_141e0ff20 body=66 status=ok
// SIG undefined FUN_141e0ff20(void)

void FUN_141e0ff20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144e926f8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144e92740;
  }
  return;
}



// FUNCTION 141e0ff70 FUN_141e0ff70 body=33 status=ok
// SIG undefined FUN_141e0ff70(void)

undefined8 FUN_141e0ff70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(param_1 + 8))(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 141e0ffa0 FUN_141e0ffa0 body=156 status=ok
// SIG undefined FUN_141e0ffa0(void)

void FUN_141e0ffa0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 8;
  if (param_1 == 0) {
    lVar2 = 0;
  }
  plVar1 = (longlong *)FUN_141593110();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146850178) {
    _Init_thread_header(&DAT_146850178);
    if (DAT_146850178 == -1) {
      FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
      _Init_thread_footer(&DAT_146850178);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141e0fffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,DAT_146850170,lVar2);
  return;
}



// FUNCTION 141e10040 FUN_141e10040 body=218 status=ok
// SIG undefined FUN_141e10040(void)

undefined8 *
FUN_141e10040(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar7 + 1,param_3);
    *(undefined4 *)(plVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
    *(undefined4 *)(plVar7 + 3) = uVar5;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_143f77bd0;
  }
  *param_2 = 0;
  if (plVar7 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar9;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar9 = plVar7;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 141e10120 FUN_141e10120 body=721 status=ok
// SIG undefined FUN_141e10120(void)

uint * FUN_141e10120(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  int *_Src;
  uint uVar14;
  void *_Dst;
  bool bVar15;
  uint local_res8 [2];
  
  iVar11 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = (ulonglong)*(uint *)(param_1 + 1);
    iVar6 = *(uint *)(param_1 + 1) + 1;
    *(int *)(param_1 + 1) = iVar6;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = (ulonglong)(int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)(*param_1 + 4 + uVar10 * 0x30);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x30) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  uVar9 = (uint)uVar10;
  *param_2 = uVar9;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  piVar2 = (int *)*param_3;
  _Src = (int *)((longlong)(int)uVar9 * 0x30 + *param_1);
  iVar6 = piVar2[1];
  iVar4 = piVar2[2];
  iVar3 = piVar2[3];
  *_Src = *piVar2;
  _Src[1] = iVar6;
  _Src[2] = iVar4;
  _Src[3] = iVar3;
  _Src[4] = 0;
  _Src[5] = 0;
  _Src[6] = 0;
  _Src[7] = 0;
  _Src[8] = 0;
  *(undefined1 *)(_Src + 9) = 0;
  _Src[10] = -1;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar5 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar15 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      _Dst = (void *)(lVar8 * 0x30 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        FMemory::Free();
        uVar10 = (ulonglong)*param_2;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar10 & 0xffffffff,1);
      *param_2 = uVar5;
      goto LAB_141e103c8;
    }
  }
  if (3 < uVar14) {
    uVar5 = (uVar14 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar6 = 0x1f - iVar11;
    }
    uVar5 = (uVar14 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*(undefined8 *)(_Src + 2) >> 0x20) + (int)*(undefined8 *)(_Src + 2);
    uVar5 = *_Src - uVar13 ^ uVar13 >> 0xd;
    uVar14 = (-0x61c88647 - uVar5) - uVar13 ^ uVar5 << 8;
    uVar13 = (uVar13 - uVar14) - uVar5 ^ uVar14 >> 0xd;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar13 >> 0xc;
    uVar14 = (uVar14 - uVar5) - uVar13 ^ uVar5 << 0x10;
    uVar13 = (uVar13 - uVar14) - uVar5 ^ uVar14 >> 5;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar13 >> 3;
    uVar14 = (uVar14 - uVar5) - uVar13 ^ uVar5 << 10;
    uVar14 = ((uVar13 - uVar14) - uVar5 ^ uVar14 >> 0xf) & (int)param_1[9] - 1U;
    _Src[0xb] = uVar14;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[10] = *(int *)((longlong)plVar7 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         uVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e103c8:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141e10400 FUN_141e10400 body=712 status=ok
// SIG undefined FUN_141e10400(void)

int * FUN_141e10400(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  uint *_Src;
  void *_Dst;
  bool local_res8;
  int local_res10 [2];
  undefined8 *local_res18;
  longlong local_res20;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  
  iVar11 = 1;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar4 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar4 = *puVar4 | 1 << ((byte)iVar10 & 0x1f);
  puVar4 = (uint *)*local_res18;
  puVar6 = (undefined8 *)local_res18[1];
  _Src = (uint *)((longlong)iVar10 * 0x20 + *param_1);
  *_Src = *puVar4;
  _Src[1] = puVar4[1];
  *(undefined8 *)(_Src + 2) = *puVar6;
  lVar7 = puVar6[1];
  *(longlong *)(_Src + 4) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  _Src[6] = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_68 = *_Src;
    local_64 = _Src[1];
    local_60 = local_68;
    local_5c = local_64;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,&local_68);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x20 + *param_1);
      plVar9 = *(longlong **)((longlong)_Dst + 0x10);
      iVar11 = local_res10[0];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          iVar10 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          iVar11 = local_res10[0];
          if (iVar10 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
            iVar11 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar11;
      goto LAB_141e106a5;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar8 = (uVar12 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar13 = '\0';
    if (uVar8 != 0) {
      iVar10 = 0x1f - iVar11;
    }
    uVar8 = (uVar12 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar13 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar12 = (_Src[1] ^ *_Src) & (int)param_1[9] - 1U;
    _Src[7] = uVar12;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar9 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
    local_res20 = param_4;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
    local_res20 = param_4;
  }
LAB_141e106a5:
  if (local_res20 != 0) {
    *(bool *)local_res20 = local_res8;
  }
  return param_2;
}



// FUNCTION 141e106d0 FUN_141e106d0 body=1020 status=ok
// SIG undefined FUN_141e106d0(void)

void FUN_141e106d0(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar14 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141e107cd;
      uVar7 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_141e107cd:
      uStack_94 = uVar1;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar13;
  plVar10 = plVar13;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar1) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_141e108a5;
      uVar7 = puVar12[(longlong)iVar4 + 1];
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar1 < (int)uStack_74) {
LAB_141e108a5:
      uStack_74 = uVar1;
      uVar7 = uVar1;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      lVar5 = FUN_14290f3e0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar9;
      }
    }
    if ((param_3 != '\0') && (lVar9 != 0)) {
      lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar4 + 1;
        if ((int)plVar6 < (int)local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
          plVar6 = (longlong *)(ulonglong)uStack_ac;
          plVar13 = local_b8;
        }
        plVar10 = (longlong *)(ulonglong)local_b0;
        plVar13[iVar4] = lVar9;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar13 + iVar4) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar4 < plVar13) {
      uVar15 = uVar8;
    }
    plVar14 = plVar13;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_141e106d0(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar1 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(local_b0 + iVar4)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar1;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 141e10ad0 LexToString<wchar_t> body=109 status=ok
// SIG undefined LexToString<wchar_t>(void)

undefined8 * LexToString<wchar_t>(undefined8 *param_1,short *param_2)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_1 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,param_2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 141e10b40 NewExtension<UMotionControllerComponent::FViewExtension,UMotionControllerComponent_*> body=577 status=ok
// SIG undefined NewExtension<UMotionControllerComponent::FViewExtension,UMotionControllerComponent_*>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FSceneViewExtensions::
NewExtension<UMotionControllerComponent::FViewExtension,UMotionControllerComponent_*>
          (undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_28;
  longlong *local_20;
  
  plVar4 = (longlong *)operator_new(0xc0);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    lVar2 = *param_2;
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (longlong)&PTR__scalar_deleting_destructor__144e92880;
    plVar4[3] = lVar2;
    plVar4[4] = (longlong)&PTR__scalar_deleting_destructor__144e92788;
    uVar8 = uRam0000000146aaf06c;
    plVar4[8] = 0;
    plVar4[9] = 0;
    *(undefined4 *)(plVar4 + 6) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
    *(undefined4 *)(plVar4 + 7) = 0;
    *(uint *)((longlong)plVar4 + 0x3c) = uVar8;
    uVar8 = uRam0000000146aaf064 & uRam0000000146aaf074;
    uVar9 = uRam0000000146aaf068 & uRam0000000146aaf078;
    uVar10 = uRam0000000146aaf06c & uRam0000000146aaf07c;
    *(uint *)(plVar4 + 10) = _DAT_146aaf060 & _DAT_146aaf070;
    *(uint *)((longlong)plVar4 + 0x54) = uVar8;
    *(uint *)(plVar4 + 0xb) = uVar9;
    *(uint *)((longlong)plVar4 + 0x5c) = uVar10;
    uVar8 = uRam0000000146aaf06c;
    *(undefined4 *)(plVar4 + 0xc) = 0;
    *(undefined4 *)((longlong)plVar4 + 100) = 0;
    *(undefined4 *)(plVar4 + 0xd) = 0;
    *(uint *)((longlong)plVar4 + 0x6c) = uVar8;
    plVar4[0xe] = 0;
    plVar4[0xf] = 0;
    uVar8 = uRam0000000146aaf064 & uRam0000000146aaf074;
    uVar9 = uRam0000000146aaf068 & uRam0000000146aaf078;
    uVar10 = uRam0000000146aaf06c & uRam0000000146aaf07c;
    *(uint *)(plVar4 + 0x10) = _DAT_146aaf060 & _DAT_146aaf070;
    *(uint *)((longlong)plVar4 + 0x84) = uVar8;
    *(uint *)(plVar4 + 0x11) = uVar9;
    *(uint *)((longlong)plVar4 + 0x8c) = uVar10;
    plVar4[0x12] = 0;
    plVar4[0x13] = 0;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
    *(undefined8 *)((longlong)plVar4 + 0xb4) = 0;
    *(undefined2 *)(plVar4 + 0x16) = 0;
    plVar6 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar6;
    plVar4 = plVar5;
  }
  *param_1 = plVar6;
  param_1[1] = plVar4;
  plVar5 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_141e10d0e;
      plVar4 = (longlong *)param_1[1];
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar6;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
LAB_141e10d0e:
  local_28 = *param_1;
  local_20 = (longlong *)param_1[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  FUN_14275a660(&local_28);
  plVar6 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 141e10d90 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e93958;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141e10e20 FXRDeviceId body=16 status=ok
// SIG undefined FXRDeviceId(void)

undefined8 * FXRDeviceId::FXRDeviceId(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return param_1;
}



// FUNCTION 141e10e30 UAsyncTask_LoadXRDeviceVisComponent body=54 status=ok
// SIG undefined UAsyncTask_LoadXRDeviceVisComponent(void)

undefined8 *
UAsyncTask_LoadXRDeviceVisComponent::UAsyncTask_LoadXRDeviceVisComponent(undefined8 *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase();
  *param_1 = &PTR__scalar_deleting_destructor__144e936c0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 141e10e70 FUN_141e10e70 body=269 status=ok
// SIG undefined FUN_141e10e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141e10e70(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_14237eb90();
  *param_1 = &PTR_FUN_144e928e8;
  param_1[5] = &PTR_LAB_144e931d0;
  param_1[0x5a] = &PTR_LAB_144e93200;
  param_1[0xdf] = 0;
  param_1[0xe1] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  uVar2 = uRam0000000146aaf06c;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x744) = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  *(uint *)((longlong)param_1 + 0x74c) = uVar2;
  uVar2 = uRam0000000146aaf064 & uRam0000000146aaf074;
  uVar3 = uRam0000000146aaf068 & uRam0000000146aaf078;
  uVar4 = uRam0000000146aaf06c & uRam0000000146aaf07c;
  *(uint *)(param_1 + 0xec) = _DAT_146aaf060 & _DAT_146aaf070;
  *(uint *)((longlong)param_1 + 0x764) = uVar2;
  *(uint *)(param_1 + 0xed) = uVar3;
  *(uint *)((longlong)param_1 + 0x76c) = uVar4;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x774) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xef) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  param_1[0xf4] = 0;
  *(undefined4 *)(param_1 + 0xf5) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 1;
  *(undefined4 *)(param_1 + 0xde) = 0;
  uVar1 = DAT_146aaf2a8;
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffffe;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  param_1[0xdf] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x731) = 0;
  return param_1;
}



// FUNCTION 141e10f80 FUN_141e10f80 body=172 status=ok
// SIG undefined FUN_141e10f80(void)

undefined8 * FUN_141e10f80(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_144e93298;
  param_1[5] = &PTR_LAB_144e93690;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  return param_1;
}



// FUNCTION 141e11030 ~TSparseArray<TSetElement<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> body=401 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_141e110f1;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_141e110f1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)((longlong)iStack_1c * 0x30 + *param_1 + 0x10) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e111d0 FUN_141e111d0 body=202 status=ok
// SIG undefined FUN_141e111d0(void)

void FUN_141e111d0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *_Src;
  
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x7a0) = 0;
  *(undefined4 *)(lVar2 + 0x7a8) = 0xffffffff;
  lVar2 = *(longlong *)(*param_1 + 0x790);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)param_1[1];
    if (puVar3 != (undefined8 *)(lVar2 + 0x1a0)) {
      _Src = *(void **)(lVar2 + 0x1a0);
      iVar1 = *(int *)(lVar2 + 0x1a8);
      *(int *)(puVar3 + 1) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar3,iVar1);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 << 3);
      }
    }
    (**(code **)(**(longlong **)(*param_1 + 0x790) + 0x3b0))(*(longlong **)(*param_1 + 0x790),1);
    *(undefined8 *)(*param_1 + 0x790) = 0;
  }
  return;
}



// FUNCTION 141e112c0 `scalar_deleting_destructor' body=117 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FLateUpdateManager::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e92788;
  puVar3 = param_1 + 0x12;
  lVar2 = 2;
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 141e11340 `scalar_deleting_destructor' body=187 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FMotionDelayTarget::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  lVar4 = 2;
  *(undefined ***)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__144e92788;
  lVar5 = param_1 + 0xa0;
  do {
    plVar1 = (longlong *)(lVar5 + -0x10);
    lVar5 = lVar5 + -0x10;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141e11400 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FSceneViewExtensionBase::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FSceneViewExtensionBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141e11440 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e93958;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141e11490 `scalar_deleting_destructor' body=141 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UMotionControllerComponent::FViewExtension::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e92880;
  puVar3 = param_1 + 0x16;
  param_1[4] = &PTR__scalar_deleting_destructor__144e92788;
  lVar2 = 2;
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  FSceneViewExtensionBase::~FSceneViewExtensionBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 141e11520 FUN_141e11520 body=43 status=ok
// SIG undefined FUN_141e11520(void)

undefined8 * FUN_141e11520(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e92790;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 141e11550 FUN_141e11550 body=152 status=ok
// SIG undefined FUN_141e11550(void)

longlong FUN_141e11550(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x788);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7b0);
  }
  return param_1;
}



// FUNCTION 141e115f0 FUN_141e115f0 body=209 status=ok
// SIG undefined FUN_141e115f0(void)

longlong FUN_141e115f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 141e116d0 Activate body=85 status=ok
// SIG undefined Activate(void)

void UAsyncTask_LoadXRDeviceVisComponent::Activate(longlong *param_1)

{
  longlong *plVar1;
  longlong local_res8 [4];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (((char)param_1[10] == '\0') && (param_1[0xb] != 0)) {
    return;
  }
  local_res8[0] = param_1[0xb];
  plVar1 = param_1 + 6;
  if ((char)param_1[10] != '\x01') {
    plVar1 = param_1 + 8;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar1,local_res8);
                    /* WARNING: Could not recover jumptable at 0x000141e11718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x290))(param_1);
  return;
}



// FUNCTION 141e11730 FUN_141e11730 body=456 status=ok
// SIG undefined FUN_141e11730(void)

longlong FUN_141e11730(longlong param_1,longlong *param_2,undefined1 param_3,undefined8 param_4,
                      undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  longlong *local_38;
  int local_30;
  
  lVar9 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    lVar6 = lVar9;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar10;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146aaf458) &&
         (_Init_thread_header(&DAT_146aaf458), DAT_146aaf458 == -1)) {
        FName::FName(&DAT_146aaf450,L"XRSystemAssets",1);
        _Init_thread_footer(&DAT_146aaf458);
      }
      uVar4 = DAT_146aaf450;
      uVar7 = FUN_141593110();
      IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>(uVar7,&local_38,uVar4);
      plVar1 = local_38 + local_30;
      plVar11 = local_38;
      do {
        if (plVar11 == plVar1) {
LAB_141e11874:
          if (local_38 != (longlong *)0x0) {
            FMemory::Free(local_38);
          }
          return lVar9;
        }
        puVar3 = (undefined8 *)*plVar11;
        if ((puVar3 != (undefined8 *)0x0) &&
           (plVar8 = (longlong *)(**(code **)*puVar3)(puVar3,local_res8), *plVar8 == *param_2)) {
          lVar9 = FUN_141e19f60(param_1,puVar3,(int)param_2[1],param_3,param_4,param_5,param_6);
          goto LAB_141e11874;
        }
        plVar11 = plVar11 + 1;
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 141e11900 AddDeviceVisualizationComponentAsync body=358 status=ok
// SIG undefined AddDeviceVisualizationComponentAsync(void)

longlong UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync
                   (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong *local_30;
  int local_28;
  
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = GetPrivateStaticClass();
  uVar6 = 0;
  lVar3 = FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  local_30 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x20,0);
  local_28 = 2;
  local_30 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = lVar3;
    *plVar4 = (longlong)&PTR_GetPoolName_144e93998;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_144e939e0;
  }
  uVar1 = FUN_141e11730(param_1,param_2,param_3,param_4,uVar6 & 0xffffff00,&local_30);
  *(undefined8 *)(lVar3 + 0x58) = uVar1;
  *param_5 = uVar1;
  if (local_28 != 0) {
    if (local_30 == (longlong *)0x0) {
      return lVar3;
    }
    (**(code **)(*local_30 + 0x28))(local_30,0);
    if (local_30 != (longlong *)0x0) {
      local_30 = (longlong *)FMemory::Realloc(local_30,0,0);
    }
    local_28 = 0;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free(local_30);
  }
  return lVar3;
}



// FUNCTION 141e11a70 AddDeviceVisualizationComponentBlocking body=137 status=ok
// SIG undefined AddDeviceVisualizationComponentBlocking(void)

undefined8 UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  undefined1 uVar2;
  longlong **pplVar3;
  longlong *local_18;
  int local_10;
  
  pplVar3 = &local_18;
  local_18 = (longlong *)0x0;
  uVar2 = 1;
  local_10 = 0;
  uVar1 = FUN_141e11730();
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return uVar1;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0,*local_18,in_R9,uVar2,pplVar3);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar1;
}



// FUNCTION 141e11b00 FUN_141e11b00 body=517 status=ok
// SIG undefined FUN_141e11b00(void)

ulonglong FUN_141e11b00(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4,
                       undefined8 param_5,undefined4 *param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iStackX_14;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *local_50;
  int local_48;
  
  uVar6 = 0;
  plVar12 = &DAT_146aaf2d0;
  bVar2 = false;
  uVar10 = 0x10;
  uVar8 = uVar6;
  plVar13 = plVar12;
  uVar11 = uVar6;
LAB_141e11b35:
  do {
    if (*plVar12 == param_3) {
      uVar10 = (undefined1)uVar11;
      bVar2 = true;
    }
    else {
      uVar7 = (int)uVar8 + 1;
      plVar12 = plVar12 + 1;
      uVar8 = (ulonglong)uVar7;
      if (uVar7 < 2) goto LAB_141e11b35;
    }
    uVar7 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar7;
    plVar12 = plVar13 + 2;
    uVar8 = uVar6;
    plVar13 = plVar12;
  } while ((int)uVar7 < 0x11);
  if (bVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146aaf458) &&
       (_Init_thread_header(&DAT_146aaf458), DAT_146aaf458 == -1)) {
      FName::FName(&DAT_146aaf450,L"XRSystemAssets",1);
      _Init_thread_footer(&DAT_146aaf458);
    }
    uVar3 = DAT_146aaf450;
    uVar5 = FUN_141593110();
    IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>(uVar5,&local_50,uVar3);
    puVar1 = local_50 + local_48;
    if (local_50 != puVar1) {
      iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
      puVar9 = local_50;
      do {
        plVar13 = (longlong *)*puVar9;
        if ((((int)param_2 == 0) && (iStackX_14 == 0)) ||
           (plVar12 = (longlong *)(**(code **)*plVar13)(plVar13,&local_60), *plVar12 == param_2)) {
          uVar4 = (**(code **)(*plVar13 + 0x10))(plVar13,uVar10);
          uVar6 = FUN_141e19f60(param_1,plVar13,uVar4,param_4,param_5,param_7,param_8);
          if (uVar6 != 0) {
            (**(code **)*plVar13)(plVar13,&local_60);
            *param_6 = local_60;
            param_6[1] = uStack_5c;
            param_6[2] = uVar4;
            param_6[3] = uStack_54;
            uStack_58 = uVar4;
            break;
          }
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar1);
    }
    if (local_50 != (undefined8 *)0x0) {
      FMemory::Free(local_50);
    }
  }
  return uVar6;
}



// FUNCTION 141e11d10 AddNamedDeviceVisualizationComponentAsync body=384 status=ok
// SIG undefined AddNamedDeviceVisualizationComponentAsync(void)

longlong UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar6;
  longlong *local_30;
  int local_28;
  
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = GetPrivateStaticClass();
  lVar3 = FUN_1417985e0(uVar2,uVar1,0,0,(ulonglong)uVar6 << 0x20,0,0,0,0);
  local_30 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x20,0);
  local_28 = 2;
  local_30 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = lVar3;
    *plVar4 = (longlong)&PTR_GetPoolName_144e93998;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_144e939e0;
  }
  uVar1 = FUN_141e11b00(param_1,param_2,param_3,param_4,param_5,param_6,0,&local_30);
  *(undefined8 *)(lVar3 + 0x58) = uVar1;
  *param_7 = uVar1;
  if (local_28 != 0) {
    if (local_30 == (longlong *)0x0) {
      return lVar3;
    }
    (**(code **)(*local_30 + 0x28))(local_30,0);
    if (local_30 != (longlong *)0x0) {
      local_30 = (longlong *)FMemory::Realloc(local_30,0,0);
    }
    local_28 = 0;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free(local_30);
  }
  return lVar3;
}



// FUNCTION 141e11e90 AddNamedDeviceVisualizationComponentBlocking body=163 status=ok
// SIG undefined AddNamedDeviceVisualizationComponentBlocking(void)

undefined8 UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 uVar2;
  longlong **pplVar3;
  longlong *local_18;
  int local_10;
  
  pplVar3 = &local_18;
  local_18 = (longlong *)0x0;
  uVar2 = 1;
  local_10 = 0;
  uVar1 = FUN_141e11b00();
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return uVar1;
    }
    (**(code **)(*local_18 + 0x28))
              (local_18,0,*local_18,in_R9,in_stack_00000028,in_stack_00000030,uVar2,pplVar3);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar1;
}



// FUNCTION 141e11f40 FUN_141e11f40 body=4499 status=ok
// SIG undefined FUN_141e11f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e11f40(longlong param_1,longlong *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  float fVar31;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar29;
  undefined1 auVar25 [16];
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
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint local_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float local_d8;
  uint uStack_d4;
  float fStack_d0;
  uint uStack_cc;
  float local_c8;
  float fStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  fVar59 = fRam0000000146aaf068;
  fVar58 = fRam0000000146aaf064;
  fVar57 = _DAT_146aaf060;
  fVar66 = fRam0000000146aaf05c;
  fVar33 = fRam0000000146aaf058;
  fVar30 = fRam0000000146aaf054;
  fVar27 = _DAT_146aaf050;
  iVar8 = *(int *)(param_1 + 0x98);
  lVar12 = (longlong)iVar8;
  if ((*(int *)(param_1 + 0x78 + lVar12 * 0x10) != 0) &&
     (*(char *)(lVar12 + 0x90 + param_1) == '\0')) {
    auVar14 = *(undefined1 (*) [16])(param_1 + 0x30 + lVar12 * 0x30);
    fVar29 = auVar14._0_4_;
    fVar67 = auVar14._4_4_;
    fVar68 = auVar14._8_4_;
    fVar21 = auVar14._12_4_;
    auVar15 = *(undefined1 (*) [16])(param_3 + 8);
    fVar42 = auVar15._0_4_;
    fVar44 = auVar15._4_4_;
    fVar46 = auVar15._8_4_;
    fVar55 = auVar15._12_4_;
    auVar14 = minps(auVar15,auVar14);
    local_118 = _DAT_146aaf0c0;
    fStack_114 = fRam0000000146aaf0c4;
    fStack_110 = fRam0000000146aaf0c8;
    fStack_10c = fRam0000000146aaf0cc;
    auVar15._4_4_ = -(uint)(auVar14._4_4_ < fRam0000000146aaf0c4);
    auVar15._0_4_ = -(uint)(auVar14._0_4_ < _DAT_146aaf0c0);
    auVar15._8_4_ = -(uint)(auVar14._8_4_ < fRam0000000146aaf0c8);
    auVar15._12_4_ = -(uint)(auVar14._12_4_ < fRam0000000146aaf0cc);
    iVar7 = movmskps(iVar8 * 2,auVar15);
    if (iVar7 == 0) {
      pfVar1 = (float *)(param_1 + 0x10 + lVar12 * 0x30);
      fVar57 = *pfVar1;
      fVar58 = pfVar1[1];
      fVar59 = pfVar1[2];
      fVar32 = pfVar1[3];
      fVar41 = *param_3;
      fVar43 = param_3[1];
      fVar45 = param_3[2];
      fVar34 = param_3[3];
      fVar35 = param_3[4] * fVar29;
      fVar37 = param_3[5] * fVar67;
      fVar20 = param_3[6] * fVar68;
      fVar26 = param_3[7] * fVar21;
      fVar39 = fVar34 * fVar57 * _DAT_146aaf0a0 + fVar32 * fVar41 + fVar58 * fVar45 * _DAT_146aaf090
               + fVar59 * fVar43 * _DAT_146aaf080;
      fVar28 = fVar45 * fVar57 * fRam0000000146aaf0a4 + fVar32 * fVar43 +
               fVar58 * fVar34 * fRam0000000146aaf094 + fVar59 * fVar41 * fRam0000000146aaf084;
      fVar36 = fVar43 * fVar57 * fRam0000000146aaf0a8 + fVar32 * fVar45 +
               fVar58 * fVar41 * fRam0000000146aaf098 + fVar59 * fVar34 * fRam0000000146aaf088;
      fVar31 = fVar41 * fVar57 * fRam0000000146aaf0ac + fVar32 * fVar34 +
               fVar58 * fVar43 * fRam0000000146aaf09c + fVar59 * fVar45 * fRam0000000146aaf08c;
      fVar41 = fVar20 * fVar58 - fVar37 * fVar59;
      fVar43 = fVar35 * fVar59 - fVar20 * fVar57;
      fVar45 = fVar37 * fVar57 - fVar35 * fVar58;
      fVar34 = fVar26 * fVar32 - fVar26 * fVar32;
      fVar41 = fVar41 + fVar41;
      fVar43 = fVar43 + fVar43;
      fVar45 = fVar45 + fVar45;
      fVar34 = fVar34 + fVar34;
      local_f8 = fVar42 * fVar29;
      fStack_f4 = fVar44 * fVar67;
      fStack_f0 = fVar46 * fVar68;
      fStack_ec = fVar55 * fVar21;
      pfVar1 = (float *)(param_1 + 0x20 + lVar12 * 0x30);
      local_108._4_4_ = (fVar41 * fVar59 - fVar45 * fVar57) + fVar43 * fVar32 + fVar37 + pfVar1[1];
      local_108._0_4_ = (fVar45 * fVar58 - fVar43 * fVar59) + fVar41 * fVar32 + fVar35 + *pfVar1;
      fStack_100 = (fVar43 * fVar57 - fVar41 * fVar58) + fVar45 * fVar32 + fVar20 + pfVar1[2];
      fStack_fc = (fVar34 * fVar32 - fVar34 * fVar32) + fVar34 * fVar32 + fVar26 + pfVar1[3];
    }
    else {
      pfVar1 = (float *)(param_1 + 0x10 + lVar12 * 0x30);
      fVar32 = *pfVar1;
      fVar41 = pfVar1[1];
      fVar43 = pfVar1[2];
      fVar45 = pfVar1[3];
      fVar34 = fVar41 + fVar41;
      fVar37 = fVar43 + fVar43;
      fStack_ec = fVar55 * fVar21;
      fVar39 = fVar32 * (fVar32 + fVar32);
      fVar35 = (fVar32 + fVar32) * fVar45;
      fVar60 = (fVar37 * fVar45 + fVar34 * fVar32) * fVar29;
      fVar62 = (fVar35 + fVar37 * fVar41) * fVar67;
      fVar64 = (fVar34 * fVar45 + fVar37 * fVar32) * fVar68;
      fVar47 = fVar67 * (fVar34 * fVar32 - fVar37 * fVar45);
      fVar49 = fVar68 * (fVar37 * fVar41 - fVar35);
      fVar51 = fVar29 * (fVar37 * fVar32 - fVar34 * fVar45);
      fVar20 = (float)((uint)((_DAT_146aaf060 - (fVar43 * fVar37 + fVar41 * fVar34)) * fVar29) &
                      _DAT_146aaf070);
      fVar26 = (float)((uint)((fRam0000000146aaf064 - (fVar43 * fVar37 + fVar39)) * fVar67) &
                      uRam0000000146aaf074);
      fVar28 = (float)((uint)((fRam0000000146aaf068 - (fVar41 * fVar34 + fVar39)) * fVar68) &
                      uRam0000000146aaf078);
      fVar31 = (float)((uint)((fRam0000000146aaf06c - (fVar39 + fVar39)) * fVar21) &
                      uRam0000000146aaf07c);
      pfVar1 = (float *)(param_1 + 0x20 + lVar12 * 0x30);
      fVar32 = *pfVar1;
      fVar41 = pfVar1[1];
      fVar43 = pfVar1[2];
      fVar45 = *param_3;
      fVar34 = param_3[1];
      fVar35 = param_3[2];
      fVar37 = param_3[3];
      fVar36 = fVar34 + fVar34;
      fVar38 = fVar35 + fVar35;
      fVar40 = fVar45 * (fVar45 + fVar45);
      fVar39 = (fVar45 + fVar45) * fVar37;
      fVar53 = (fVar38 * fVar37 + fVar36 * fVar45) * fVar42;
      fVar54 = (fVar39 + fVar38 * fVar34) * fVar44;
      fVar56 = (fVar36 * fVar37 + fVar38 * fVar45) * fVar46;
      fVar48 = fVar44 * (fVar36 * fVar45 - fVar38 * fVar37);
      fVar50 = fVar46 * (fVar38 * fVar34 - fVar39);
      fVar52 = fVar42 * (fVar38 * fVar45 - fVar36 * fVar37);
      fVar37 = (float)((uint)((_DAT_146aaf060 - (fVar35 * fVar38 + fVar34 * fVar36)) * fVar42) &
                      _DAT_146aaf070);
      fVar39 = (float)((uint)((fRam0000000146aaf064 - (fVar35 * fVar38 + fVar40)) * fVar44) &
                      uRam0000000146aaf074);
      fVar36 = (float)((uint)((fRam0000000146aaf068 - (fVar34 * fVar36 + fVar40)) * fVar46) &
                      uRam0000000146aaf078);
      fVar38 = (float)((uint)((fRam0000000146aaf06c - (fVar40 + fVar40)) * fVar55) &
                      uRam0000000146aaf07c);
      fVar45 = param_3[4];
      fVar34 = param_3[5];
      fVar35 = param_3[6];
      local_158 = fVar53 * fVar47 + fVar37 * fVar20 + fVar52 * fVar64 + fVar38 * fVar32;
      fStack_154 = fVar53 * fVar26 + fVar37 * fVar60 + fVar52 * fVar49 + fVar38 * fVar41;
      fStack_150 = fVar53 * fVar62 + fVar37 * fVar51 + fVar52 * fVar28 + fVar38 * fVar43;
      fStack_14c = fVar53 * fVar31 + fVar37 * fVar31 + fVar52 * fVar31 +
                   fVar38 * fRam0000000146aaf06c;
      local_148 = fVar39 * fVar47 + fVar48 * fVar20 + fVar54 * fVar64 + fVar38 * fVar32;
      fStack_144 = fVar39 * fVar26 + fVar48 * fVar60 + fVar54 * fVar49 + fVar38 * fVar41;
      fStack_140 = fVar39 * fVar62 + fVar48 * fVar51 + fVar54 * fVar28 + fVar38 * fVar43;
      fStack_13c = fVar39 * fVar31 + fVar48 * fVar31 + fVar54 * fVar31 +
                   fVar38 * fRam0000000146aaf06c;
      local_138 = fVar50 * fVar47 + fVar56 * fVar20 + fVar36 * fVar64 + fVar38 * fVar32;
      fStack_134 = fVar50 * fVar26 + fVar56 * fVar60 + fVar36 * fVar49 + fVar38 * fVar41;
      fStack_130 = fVar50 * fVar62 + fVar56 * fVar51 + fVar36 * fVar28 + fVar38 * fVar43;
      fStack_12c = fVar50 * fVar31 + fVar56 * fVar31 + fVar36 * fVar31 +
                   fVar38 * fRam0000000146aaf06c;
      local_128 = fVar34 * fVar47 + fVar45 * fVar20 + fVar35 * fVar64 +
                  fRam0000000146aaf06c * fVar32;
      fStack_124 = fVar34 * fVar26 + fVar45 * fVar60 + fVar35 * fVar49 +
                   fRam0000000146aaf06c * fVar41;
      fStack_120 = fVar34 * fVar62 + fVar45 * fVar51 + fVar35 * fVar28 +
                   fRam0000000146aaf06c * fVar43;
      fStack_11c = fVar34 * fVar31 + fVar45 * fVar31 + fVar35 * fVar31 +
                   fRam0000000146aaf06c * fRam0000000146aaf06c;
      local_f8 = fVar42 * fVar29;
      fStack_f4 = fVar44 * fVar67;
      fStack_f0 = fVar46 * fVar68;
      FMatrix::RemoveScaling(&local_158);
      fVar57 = (float)(-(uint)(_DAT_146aaf0c0 <= fVar42 * fVar29) & (_DAT_146aaf0b0 ^ (uint)fVar57)
                      ^ _DAT_146aaf0b0);
      fVar58 = (float)(-(uint)(fRam0000000146aaf0c4 <= fVar44 * fVar67) &
                       (uRam0000000146aaf0b4 ^ (uint)fVar58) ^ uRam0000000146aaf0b4);
      fVar59 = (float)(-(uint)(fRam0000000146aaf0c8 <= fVar46 * fVar68) &
                       (uRam0000000146aaf0b8 ^ (uint)fVar59) ^ uRam0000000146aaf0b8);
      local_158 = local_158 * fVar57;
      fStack_154 = fStack_154 * fVar57;
      fStack_150 = fStack_150 * fVar57;
      fStack_144 = fStack_144 * fVar58;
      fStack_140 = fStack_140 * fVar58;
      local_148 = local_148 * fVar58;
      fStack_134 = fStack_134 * fVar59;
      fStack_130 = fStack_130 * fVar59;
      local_138 = local_138 * fVar59;
      FQuat::FQuat(local_108,&local_158);
      iVar8 = *(int *)(param_1 + 0x98);
      auVar22._0_4_ = (float)local_108._0_4_ * (float)local_108._0_4_ + fStack_100 * fStack_100;
      auVar22._4_4_ = (float)local_108._4_4_ * (float)local_108._4_4_ + fStack_fc * fStack_fc;
      auVar22._8_4_ = fStack_100 * fStack_100 + (float)local_108._0_4_ * (float)local_108._0_4_;
      auVar22._12_4_ = fStack_fc * fStack_fc + (float)local_108._4_4_ * (float)local_108._4_4_;
      fVar41 = auVar22._4_4_ + auVar22._0_4_;
      fVar43 = auVar22._8_4_ + auVar22._4_4_;
      fVar45 = auVar22._12_4_ + auVar22._8_4_;
      fVar34 = auVar22._0_4_ + auVar22._12_4_;
      auVar14._4_4_ = fVar43;
      auVar14._0_4_ = fVar41;
      auVar14._8_4_ = fVar45;
      auVar14._12_4_ = fVar34;
      auVar14 = rsqrtps(auVar22,auVar14);
      fVar57 = auVar14._0_4_;
      fVar58 = auVar14._4_4_;
      fVar59 = auVar14._8_4_;
      fVar32 = auVar14._12_4_;
      fVar57 = (fVar27 - fVar57 * fVar57 * fVar41 * fVar27) * fVar57 + fVar57;
      fVar58 = (fVar30 - fVar58 * fVar58 * fVar43 * fVar30) * fVar58 + fVar58;
      fVar59 = (fVar33 - fVar59 * fVar59 * fVar45 * fVar33) * fVar59 + fVar59;
      fVar32 = (fVar66 - fVar32 * fVar32 * fVar34 * fVar66) * fVar32 + fVar32;
      fVar57 = ((fVar27 - fVar57 * fVar57 * fVar41 * fVar27) * fVar57 + fVar57) *
               (float)local_108._0_4_;
      fVar58 = ((fVar30 - fVar58 * fVar58 * fVar43 * fVar30) * fVar58 + fVar58) *
               (float)local_108._4_4_;
      fVar59 = ((fVar33 - fVar59 * fVar59 * fVar45 * fVar33) * fVar59 + fVar59) * fStack_100;
      local_108._4_4_ = fStack_124;
      local_108._0_4_ = local_128;
      fStack_100 = fStack_120;
      fVar39 = (float)(((uint)fVar57 ^ _DAT_146aaf040) & -(uint)(1e-08 <= fVar41) ^ _DAT_146aaf040);
      fVar28 = (float)(((uint)fVar58 ^ uRam0000000146aaf044) & -(uint)(1e-08 <= fVar43) ^
                      uRam0000000146aaf044);
      fVar36 = (float)(((uint)fVar59 ^ uRam0000000146aaf048) & -(uint)(1e-08 <= fVar45) ^
                      uRam0000000146aaf048);
      fVar31 = (float)(((uint)(((fVar66 - fVar32 * fVar32 * fVar34 * fVar66) * fVar32 + fVar32) *
                              fStack_fc) ^ uRam0000000146aaf04c) & -(uint)(1e-08 <= fVar34) ^
                      uRam0000000146aaf04c);
      fStack_fc = 0.0;
    }
    fVar35 = fRam0000000146aaf0c8;
    fVar34 = fRam0000000146aaf0c4;
    fVar45 = _DAT_146aaf0c0;
    fVar43 = fRam0000000146aaf068;
    fVar41 = fRam0000000146aaf064;
    fVar32 = _DAT_146aaf060;
    fVar46 = fVar46 * fVar68;
    fVar44 = fVar44 * fVar67;
    fVar42 = fVar42 * fVar29;
    fVar55 = fVar55 * fVar21;
    auVar14 = *(undefined1 (*) [16])(param_4 + 8);
    lVar12 = (longlong)iVar8;
    auVar15 = *(undefined1 (*) [16])(param_1 + 0x30 + lVar12 * 0x30);
    fVar57 = auVar15._0_4_;
    fVar58 = auVar15._4_4_;
    fVar59 = auVar15._8_4_;
    fVar29 = auVar15._12_4_;
    auVar15 = minps(auVar14,auVar15);
    auVar16._4_4_ = -(uint)(auVar15._4_4_ < fRam0000000146aaf0c4);
    auVar16._0_4_ = -(uint)(auVar15._0_4_ < _DAT_146aaf0c0);
    auVar16._8_4_ = -(uint)(auVar15._8_4_ < fRam0000000146aaf0c8);
    auVar16._12_4_ = -(uint)(auVar15._12_4_ < fRam0000000146aaf0cc);
    iVar8 = movmskps(iVar8,auVar16);
    if (iVar8 == 0) {
      pfVar1 = (float *)(param_1 + 0x10 + lVar12 * 0x30);
      fVar67 = *pfVar1;
      fVar68 = pfVar1[1];
      fVar21 = pfVar1[2];
      fVar32 = pfVar1[3];
      fVar41 = *param_4;
      fVar43 = param_4[1];
      fVar45 = param_4[2];
      fVar34 = param_4[3];
      fVar35 = param_4[4] * fVar57;
      fVar37 = param_4[5] * fVar58;
      fVar20 = param_4[6] * fVar59;
      fVar57 = fVar57 * param_4[8];
      fVar58 = fVar58 * param_4[9];
      fVar59 = fVar59 * param_4[10];
      fVar29 = fVar29 * param_4[0xb];
      fVar26 = fVar34 * fVar67 * _DAT_146aaf0a0 + fVar32 * fVar41 + fVar68 * fVar45 * _DAT_146aaf090
               + fVar21 * fVar43 * _DAT_146aaf080;
      fVar38 = fVar45 * fVar67 * fRam0000000146aaf0a4 + fVar32 * fVar43 +
               fVar68 * fVar34 * fRam0000000146aaf094 + fVar21 * fVar41 * fRam0000000146aaf084;
      fVar40 = fVar43 * fVar67 * fRam0000000146aaf0a8 + fVar32 * fVar45 +
               fVar68 * fVar41 * fRam0000000146aaf098 + fVar21 * fVar34 * fRam0000000146aaf088;
      fVar34 = fVar41 * fVar67 * fRam0000000146aaf0ac + fVar32 * fVar34 +
               fVar68 * fVar43 * fRam0000000146aaf09c + fVar21 * fVar45 * fRam0000000146aaf08c;
      fVar41 = fVar20 * fVar68 - fVar37 * fVar21;
      fVar43 = fVar35 * fVar21 - fVar20 * fVar67;
      fVar45 = fVar37 * fVar67 - fVar35 * fVar68;
      fVar41 = fVar41 + fVar41;
      fVar43 = fVar43 + fVar43;
      fVar45 = fVar45 + fVar45;
      pfVar1 = (float *)(param_1 + 0x20 + lVar12 * 0x30);
      local_b8 = (fVar45 * fVar68 - fVar43 * fVar21) + fVar32 * fVar41 + fVar35 + *pfVar1;
      fStack_b4 = (fVar41 * fVar21 - fVar45 * fVar67) + fVar32 * fVar43 + fVar37 + pfVar1[1];
      fStack_b0 = (fVar43 * fVar67 - fVar41 * fVar68) + fVar32 * fVar45 + fVar20 + pfVar1[2];
      uVar9 = 0;
      local_118 = _DAT_146aaf0c0;
      fStack_114 = fRam0000000146aaf0c4;
      fStack_110 = fRam0000000146aaf0c8;
      fStack_10c = fRam0000000146aaf0cc;
    }
    else {
      pfVar1 = (float *)(param_1 + 0x10 + lVar12 * 0x30);
      fVar67 = *pfVar1;
      fVar68 = pfVar1[1];
      fVar21 = pfVar1[2];
      fVar37 = pfVar1[3];
      local_118 = auVar14._0_4_ * fVar57;
      fStack_114 = auVar14._4_4_ * fVar58;
      fStack_110 = auVar14._8_4_ * fVar59;
      fStack_10c = auVar14._12_4_ * fVar29;
      fVar26 = fVar68 + fVar68;
      fVar38 = fVar21 + fVar21;
      fVar40 = (fVar67 + fVar67) * fVar67;
      fVar20 = (fVar67 + fVar67) * fVar37;
      fVar61 = (fVar38 * fVar37 + fVar26 * fVar67) * fVar57;
      fVar63 = (fVar20 + fVar38 * fVar68) * fVar58;
      fVar65 = (fVar26 * fVar37 + fVar38 * fVar67) * fVar59;
      fVar50 = fVar58 * (fVar26 * fVar67 - fVar38 * fVar37);
      fVar52 = fVar59 * (fVar38 * fVar68 - fVar20);
      fVar54 = fVar57 * (fVar38 * fVar67 - fVar26 * fVar37);
      fVar37 = (float)((uint)((_DAT_146aaf060 - (fVar38 * fVar21 + fVar26 * fVar68)) * fVar57) &
                      _DAT_146aaf070);
      fVar20 = (float)((uint)((fRam0000000146aaf064 - (fVar38 * fVar21 + fVar40)) * fVar58) &
                      uRam0000000146aaf074);
      fVar38 = (float)((uint)((fRam0000000146aaf068 - (fVar26 * fVar68 + fVar40)) * fVar59) &
                      uRam0000000146aaf078);
      fVar47 = (float)((uint)((fRam0000000146aaf06c - (fVar40 + fVar40)) * fVar29) &
                      uRam0000000146aaf07c);
      pfVar1 = (float *)(param_1 + 0x20 + lVar12 * 0x30);
      fVar57 = *pfVar1;
      fVar58 = pfVar1[1];
      fVar59 = pfVar1[2];
      fVar29 = *param_4;
      fVar67 = param_4[1];
      fVar68 = param_4[2];
      fVar21 = param_4[3];
      fVar40 = fVar67 + fVar67;
      fVar48 = fVar68 + fVar68;
      fVar49 = (fVar29 + fVar29) * fVar29;
      fVar26 = (fVar29 + fVar29) * fVar21;
      fVar60 = (fVar40 * fVar29 + fVar48 * fVar21) * param_4[8];
      fVar62 = (fVar48 * fVar67 + fVar26) * param_4[9];
      fVar64 = (fVar48 * fVar29 + fVar40 * fVar21) * param_4[10];
      fVar51 = param_4[9] * (fVar40 * fVar29 - fVar48 * fVar21);
      fVar53 = param_4[10] * (fVar48 * fVar67 - fVar26);
      fVar56 = param_4[8] * (fVar48 * fVar29 - fVar40 * fVar21);
      fVar21 = (float)((uint)((_DAT_146aaf060 - (fVar48 * fVar68 + fVar40 * fVar67)) * param_4[8]) &
                      _DAT_146aaf070);
      fVar26 = (float)((uint)((fRam0000000146aaf064 - (fVar48 * fVar68 + fVar49)) * param_4[9]) &
                      uRam0000000146aaf074);
      fVar40 = (float)((uint)((fRam0000000146aaf068 - (fVar40 * fVar67 + fVar49)) * param_4[10]) &
                      uRam0000000146aaf078);
      fVar48 = (float)((uint)((fRam0000000146aaf06c - (fVar49 + fVar49)) * param_4[0xb]) &
                      uRam0000000146aaf07c);
      fVar29 = param_4[4];
      fVar67 = param_4[5];
      fVar68 = param_4[6];
      local_158 = fVar60 * fVar50 + fVar21 * fVar37 + fVar56 * fVar65 + fVar48 * fVar57;
      fStack_154 = fVar60 * fVar20 + fVar21 * fVar61 + fVar56 * fVar52 + fVar48 * fVar58;
      fStack_150 = fVar60 * fVar63 + fVar21 * fVar54 + fVar56 * fVar38 + fVar48 * fVar59;
      fStack_14c = fVar60 * fVar47 + fVar21 * fVar47 + fVar56 * fVar47 +
                   fVar48 * fRam0000000146aaf06c;
      local_148 = fVar26 * fVar50 + fVar51 * fVar37 + fVar62 * fVar65 + fVar48 * fVar57;
      fStack_144 = fVar26 * fVar20 + fVar51 * fVar61 + fVar62 * fVar52 + fVar48 * fVar58;
      fStack_140 = fVar26 * fVar63 + fVar51 * fVar54 + fVar62 * fVar38 + fVar48 * fVar59;
      fStack_13c = fVar26 * fVar47 + fVar51 * fVar47 + fVar62 * fVar47 +
                   fVar48 * fRam0000000146aaf06c;
      local_138 = fVar53 * fVar50 + fVar64 * fVar37 + fVar40 * fVar65 + fVar48 * fVar57;
      fStack_134 = fVar53 * fVar20 + fVar64 * fVar61 + fVar40 * fVar52 + fVar48 * fVar58;
      fStack_130 = fVar53 * fVar63 + fVar64 * fVar54 + fVar40 * fVar38 + fVar48 * fVar59;
      fStack_12c = fVar53 * fVar47 + fVar64 * fVar47 + fVar40 * fVar47 +
                   fVar48 * fRam0000000146aaf06c;
      local_128 = fVar67 * fVar50 + fVar29 * fVar37 + fVar68 * fVar65 +
                  fRam0000000146aaf06c * fVar57;
      fStack_124 = fVar67 * fVar20 + fVar29 * fVar61 + fVar68 * fVar52 +
                   fRam0000000146aaf06c * fVar58;
      fStack_120 = fVar67 * fVar63 + fVar29 * fVar54 + fVar68 * fVar38 +
                   fRam0000000146aaf06c * fVar59;
      fStack_11c = fVar67 * fVar47 + fVar29 * fVar47 + fVar68 * fVar47 +
                   fRam0000000146aaf06c * fRam0000000146aaf06c;
      FMatrix::RemoveScaling(&local_158);
      fVar29 = fStack_10c;
      fVar59 = fStack_110;
      fVar58 = fStack_114;
      fVar57 = local_118;
      fVar67 = (float)(-(uint)(fVar45 <= local_118) & (_DAT_146aaf0b0 ^ (uint)fVar32) ^
                      _DAT_146aaf0b0);
      fVar68 = (float)(-(uint)(fVar34 <= fStack_114) & (uRam0000000146aaf0b4 ^ (uint)fVar41) ^
                      uRam0000000146aaf0b4);
      fVar21 = (float)(-(uint)(fVar35 <= fStack_110) & (uRam0000000146aaf0b8 ^ (uint)fVar43) ^
                      uRam0000000146aaf0b8);
      local_158 = local_158 * fVar67;
      fStack_154 = fStack_154 * fVar67;
      fStack_150 = fStack_150 * fVar67;
      fStack_144 = fStack_144 * fVar68;
      fStack_140 = fStack_140 * fVar68;
      local_148 = local_148 * fVar68;
      fStack_134 = fStack_134 * fVar21;
      fStack_130 = fStack_130 * fVar21;
      local_138 = local_138 * fVar21;
      uVar9 = FQuat::FQuat(&local_118,&local_158);
      fVar32 = fStack_10c;
      fVar21 = fStack_110;
      fVar68 = fStack_114;
      fVar67 = local_118;
      fVar41 = local_118 * local_118;
      fVar43 = fStack_114 * fStack_114;
      fVar45 = fStack_110 * fStack_110;
      fVar34 = fStack_10c * fStack_10c;
      local_118 = _DAT_146aaf0c0;
      fStack_114 = fRam0000000146aaf0c4;
      fStack_110 = fRam0000000146aaf0c8;
      fStack_10c = fRam0000000146aaf0cc;
      auVar23._0_4_ = fVar41 + fVar45;
      auVar23._4_4_ = fVar43 + fVar34;
      auVar23._8_4_ = fVar45 + fVar41;
      auVar23._12_4_ = fVar34 + fVar43;
      fVar35 = auVar23._4_4_ + auVar23._0_4_;
      fVar37 = auVar23._8_4_ + auVar23._4_4_;
      fVar20 = auVar23._12_4_ + auVar23._8_4_;
      fVar47 = auVar23._0_4_ + auVar23._12_4_;
      auVar3._4_4_ = fVar37;
      auVar3._0_4_ = fVar35;
      auVar3._8_4_ = fVar20;
      auVar3._12_4_ = fVar47;
      auVar14 = rsqrtps(auVar23,auVar3);
      fVar41 = auVar14._0_4_;
      fVar43 = auVar14._4_4_;
      fVar45 = auVar14._8_4_;
      fVar34 = auVar14._12_4_;
      fVar41 = (fVar27 - fVar41 * fVar41 * fVar35 * fVar27) * fVar41 + fVar41;
      fVar43 = (fVar30 - fVar43 * fVar43 * fVar37 * fVar30) * fVar43 + fVar43;
      fVar45 = (fVar33 - fVar45 * fVar45 * fVar20 * fVar33) * fVar45 + fVar45;
      fVar34 = (fVar66 - fVar34 * fVar34 * fVar47 * fVar66) * fVar34 + fVar34;
      fVar26 = (float)(((uint)(((fVar27 - fVar41 * fVar41 * fVar35 * fVar27) * fVar41 + fVar41) *
                              fVar67) ^ _DAT_146aaf040) & -(uint)(1e-08 <= fVar35) ^ _DAT_146aaf040)
      ;
      fVar38 = (float)(((uint)(((fVar30 - fVar43 * fVar43 * fVar37 * fVar30) * fVar43 + fVar43) *
                              fVar68) ^ uRam0000000146aaf044) & -(uint)(1e-08 <= fVar37) ^
                      uRam0000000146aaf044);
      fVar40 = (float)(((uint)(((fVar33 - fVar45 * fVar45 * fVar20 * fVar33) * fVar45 + fVar45) *
                              fVar21) ^ uRam0000000146aaf048) & -(uint)(1e-08 <= fVar20) ^
                      uRam0000000146aaf048);
      fVar34 = (float)(((uint)(((fVar66 - fVar34 * fVar34 * fVar47 * fVar66) * fVar34 + fVar34) *
                              fVar32) ^ uRam0000000146aaf04c) & -(uint)(1e-08 <= fVar47) ^
                      uRam0000000146aaf04c);
      local_b8 = local_128;
      fStack_b4 = fStack_124;
      fStack_b0 = fStack_120;
    }
    fVar21 = fRam0000000146aaf068;
    fVar68 = fRam0000000146aaf064;
    fVar67 = _DAT_146aaf060;
    auVar24._0_4_ = (float)((uint)local_f8 & _DAT_146aaf0f0);
    auVar24._4_4_ = (float)((uint)fStack_f4 & uRam0000000146aaf0f4);
    auVar24._8_4_ = (float)((uint)fStack_f0 & uRam0000000146aaf0f8);
    auVar24._12_4_ = (float)((uint)fStack_ec & uRam0000000146aaf0fc);
    auVar17._4_4_ = -(uint)(fRam0000000146aaf244 < auVar24._4_4_);
    auVar17._0_4_ = -(uint)(_DAT_146aaf240 < auVar24._0_4_);
    auVar17._8_4_ = -(uint)(fRam0000000146aaf248 < auVar24._8_4_);
    auVar17._12_4_ = -(uint)(fRam0000000146aaf24c < auVar24._12_4_);
    iVar8 = movmskps(uVar9,auVar17);
    fVar35 = _DAT_1468b5b80;
    fVar37 = fRam00000001468b5b84;
    fVar20 = fRam00000001468b5b88;
    fVar47 = _DAT_1468b5b70;
    fVar48 = fRam00000001468b5b74;
    fVar49 = fRam00000001468b5b78;
    fVar50 = fRam00000001468b5b7c;
    fVar32 = _DAT_1468b5b90;
    fVar41 = fRam00000001468b5b94;
    fVar43 = fRam00000001468b5b98;
    fVar45 = fRam00000001468b5b9c;
    if (iVar8 != 0) {
      fVar47 = fVar39 * _DAT_146aaf230;
      fVar48 = fVar28 * fRam0000000146aaf234;
      fVar49 = fVar36 * fRam0000000146aaf238;
      fVar50 = fVar31 * fRam0000000146aaf23c;
      auVar6._4_4_ = fVar44;
      auVar6._0_4_ = fVar42;
      auVar6._8_4_ = fVar46;
      auVar6._12_4_ = fVar55;
      auVar14 = rcpps(auVar24,auVar6);
      fVar32 = auVar14._0_4_;
      fVar41 = auVar14._4_4_;
      fVar43 = auVar14._8_4_;
      fVar45 = auVar14._12_4_;
      fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar42;
      fVar41 = (fVar41 + fVar41) - fVar41 * fVar41 * fVar44;
      fVar43 = (fVar43 + fVar43) - fVar43 * fVar43 * fVar46;
      fVar45 = (fVar45 + fVar45) - fVar45 * fVar45 * fVar55;
      fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar42;
      fVar41 = (fVar41 + fVar41) - fVar41 * fVar41 * fVar44;
      fVar43 = (fVar43 + fVar43) - fVar43 * fVar43 * fVar46;
      fVar45 = (fVar45 + fVar45) - fVar45 * fVar45 * fVar55;
      fVar32 = (float)((-(uint)((float)((uint)fVar42 & _DAT_146aaf0f0) <= _DAT_146aaf240) &
                        (uint)fVar32 ^ (uint)fVar32) & _DAT_146aaf070);
      fVar41 = (float)((-(uint)((float)((uint)fVar44 & uRam0000000146aaf0f4) <= fRam0000000146aaf244
                               ) & (uint)fVar41 ^ (uint)fVar41) & uRam0000000146aaf074);
      fVar43 = (float)((-(uint)((float)((uint)fVar46 & uRam0000000146aaf0f8) <= fRam0000000146aaf248
                               ) & (uint)fVar43 ^ (uint)fVar43) & uRam0000000146aaf078);
      fVar35 = fVar32 * (float)local_108._0_4_;
      fVar37 = fVar41 * (float)local_108._4_4_;
      fVar20 = fVar43 * fStack_100;
      fVar42 = fVar20 * fVar48 - fVar37 * fVar49;
      fVar44 = fVar35 * fVar49 - fVar20 * fVar47;
      fVar46 = fVar37 * fVar47 - fVar35 * fVar48;
      fVar42 = fVar42 + fVar42;
      fVar44 = fVar44 + fVar44;
      fVar46 = fVar46 + fVar46;
      fVar35 = (float)((uint)(0.0 - ((fVar46 * fVar48 - fVar44 * fVar49) + fVar50 * fVar42 + fVar35)
                             ) & _DAT_146aaf070);
      fVar37 = (float)((uint)(0.0 - ((fVar42 * fVar49 - fVar46 * fVar47) + fVar50 * fVar44 + fVar37)
                             ) & uRam0000000146aaf074);
      fVar20 = (float)((uint)(0.0 - ((fVar44 * fVar47 - fVar42 * fVar48) + fVar50 * fVar46 + fVar20)
                             ) & uRam0000000146aaf078);
      fVar45 = (float)((-(uint)((float)((uint)fVar55 & uRam0000000146aaf0fc) <= fRam0000000146aaf24c
                               ) & (uint)fVar45 ^ (uint)fVar45) & uRam0000000146aaf07c);
    }
    auVar18._4_4_ = fVar41;
    auVar18._0_4_ = fVar32;
    auVar18._8_4_ = fVar43;
    auVar18._12_4_ = fVar45;
    auVar5._4_4_ = fVar58;
    auVar5._0_4_ = fVar57;
    auVar5._8_4_ = fVar59;
    auVar5._12_4_ = fVar29;
    auVar14 = minps(auVar18,auVar5);
    auVar19._4_4_ = -(uint)(auVar14._4_4_ < fStack_114);
    auVar19._0_4_ = -(uint)(auVar14._0_4_ < local_118);
    auVar19._8_4_ = -(uint)(auVar14._8_4_ < fStack_110);
    auVar19._12_4_ = -(uint)(auVar14._12_4_ < fStack_10c);
    iVar8 = movmskps(iVar8,auVar19);
    _DAT_146aaf0c0 = local_118;
    fRam0000000146aaf0c4 = fStack_114;
    fRam0000000146aaf0c8 = fStack_110;
    fRam0000000146aaf0cc = fStack_10c;
    if (iVar8 == 0) {
      fVar35 = fVar35 * fVar57;
      fVar37 = fVar37 * fVar58;
      fVar20 = fVar20 * fVar59;
      fVar32 = fVar32 * fVar57;
      fVar41 = fVar41 * fVar58;
      fVar43 = fVar43 * fVar59;
      fVar45 = fVar45 * fVar29;
      fVar57 = fVar50 * fVar26 * _DAT_146aaf0a0 + fVar34 * fVar47 + fVar49 * fVar38 * _DAT_146aaf090
               + fVar48 * fVar40 * _DAT_146aaf080;
      fVar58 = fVar49 * fVar26 * fRam0000000146aaf0a4 + fVar34 * fVar48 +
               fVar50 * fVar38 * fRam0000000146aaf094 + fVar47 * fVar40 * fRam0000000146aaf084;
      fVar59 = fVar48 * fVar26 * fRam0000000146aaf0a8 + fVar34 * fVar49 +
               fVar47 * fVar38 * fRam0000000146aaf098 + fVar50 * fVar40 * fRam0000000146aaf088;
      fVar66 = fVar47 * fVar26 * fRam0000000146aaf0ac + fVar34 * fVar50 +
               fVar48 * fVar38 * fRam0000000146aaf09c + fVar49 * fVar40 * fRam0000000146aaf08c;
      fVar27 = fVar20 * fVar38 - fVar37 * fVar40;
      fVar30 = fVar35 * fVar40 - fVar20 * fVar26;
      fVar33 = fVar37 * fVar26 - fVar35 * fVar38;
      fVar27 = fVar27 + fVar27;
      fVar30 = fVar30 + fVar30;
      fVar33 = fVar33 + fVar33;
      local_b8 = (fVar33 * fVar38 - fVar30 * fVar40) + fVar34 * fVar27 + fVar35 + local_b8;
      fStack_b4 = (fVar27 * fVar40 - fVar33 * fVar26) + fVar34 * fVar30 + fVar37 + fStack_b4;
      fStack_b0 = (fVar30 * fVar26 - fVar27 * fVar38) + fVar34 * fVar33 + fVar20 + fStack_b0;
    }
    else {
      fVar42 = fVar38 + fVar38;
      fVar44 = fVar40 + fVar40;
      fVar46 = (fVar26 + fVar26) * fVar26;
      local_108._4_4_ = fVar41 * fVar58;
      local_108._0_4_ = fVar32 * fVar57;
      fStack_100 = fVar43 * fVar59;
      fStack_fc = fVar45 * fVar29;
      fVar55 = fVar34 * (fVar26 + fVar26);
      fVar52 = (fVar34 * fVar44 + fVar26 * fVar42) * fVar57;
      fVar53 = (fVar55 + fVar38 * fVar44) * fVar58;
      fVar54 = (fVar34 * fVar42 + fVar26 * fVar44) * fVar59;
      fVar39 = fVar58 * (fVar26 * fVar42 - fVar34 * fVar44);
      fVar28 = fVar59 * (fVar38 * fVar44 - fVar55);
      fVar36 = fVar57 * (fVar26 * fVar44 - fVar34 * fVar42);
      fVar57 = (float)((uint)((_DAT_146aaf060 - (fVar44 * fVar40 + fVar42 * fVar38)) * fVar57) &
                      _DAT_146aaf070);
      fVar44 = (float)((uint)((fRam0000000146aaf064 - (fVar44 * fVar40 + fVar46)) * fVar58) &
                      uRam0000000146aaf074);
      fVar42 = (float)((uint)((fRam0000000146aaf068 - (fVar42 * fVar38 + fVar46)) * fVar59) &
                      uRam0000000146aaf078);
      fVar46 = (float)((uint)((fRam0000000146aaf06c - (fVar46 + fVar46)) * fVar29) &
                      uRam0000000146aaf07c);
      fVar59 = fVar48 + fVar48;
      fVar29 = fVar49 + fVar49;
      fVar55 = (fVar47 + fVar47) * fVar47;
      fVar58 = fVar50 * (fVar47 + fVar47);
      fVar38 = (fVar50 * fVar29 + fVar47 * fVar59) * fVar32;
      fVar40 = (fVar58 + fVar48 * fVar29) * fVar41;
      fVar51 = (fVar50 * fVar59 + fVar47 * fVar29) * fVar43;
      fVar34 = fVar41 * (fVar47 * fVar59 - fVar50 * fVar29);
      fVar26 = fVar43 * (fVar48 * fVar29 - fVar58);
      fVar31 = fVar32 * (fVar47 * fVar29 - fVar50 * fVar59);
      fVar58 = (float)((uint)((_DAT_146aaf060 - (fVar29 * fVar49 + fVar59 * fVar48)) * fVar32) &
                      _DAT_146aaf070);
      fVar29 = (float)((uint)((fRam0000000146aaf064 - (fVar29 * fVar49 + fVar55)) * fVar41) &
                      uRam0000000146aaf074);
      fVar59 = (float)((uint)((fRam0000000146aaf068 - (fVar59 * fVar48 + fVar55)) * fVar43) &
                      uRam0000000146aaf078);
      fVar55 = (float)((uint)((fRam0000000146aaf06c - (fVar55 + fVar55)) * fVar45) &
                      uRam0000000146aaf07c);
      local_158 = fVar38 * fVar39 + fVar58 * fVar57 + fVar31 * fVar54 + fVar55 * local_b8;
      fStack_154 = fVar38 * fVar44 + fVar58 * fVar52 + fVar31 * fVar28 + fVar55 * fStack_b4;
      fStack_150 = fVar38 * fVar53 + fVar58 * fVar36 + fVar31 * fVar42 + fVar55 * fStack_b0;
      fStack_14c = fVar38 * fVar46 + fVar58 * fVar46 + fVar31 * fVar46 +
                   fVar55 * fRam0000000146aaf06c;
      local_148 = fVar29 * fVar39 + fVar34 * fVar57 + fVar40 * fVar54 + fVar55 * local_b8;
      fStack_144 = fVar29 * fVar44 + fVar34 * fVar52 + fVar40 * fVar28 + fVar55 * fStack_b4;
      fStack_140 = fVar29 * fVar53 + fVar34 * fVar36 + fVar40 * fVar42 + fVar55 * fStack_b0;
      fStack_13c = fVar29 * fVar46 + fVar34 * fVar46 + fVar40 * fVar46 +
                   fVar55 * fRam0000000146aaf06c;
      local_138 = fVar26 * fVar39 + fVar51 * fVar57 + fVar59 * fVar54 + fVar55 * local_b8;
      fStack_134 = fVar26 * fVar44 + fVar51 * fVar52 + fVar59 * fVar28 + fVar55 * fStack_b4;
      fStack_130 = fVar26 * fVar53 + fVar51 * fVar36 + fVar59 * fVar42 + fVar55 * fStack_b0;
      fStack_12c = fVar26 * fVar46 + fVar51 * fVar46 + fVar59 * fVar46 +
                   fVar55 * fRam0000000146aaf06c;
      local_128 = fVar37 * fVar39 + fVar35 * fVar57 + fVar20 * fVar54 +
                  fRam0000000146aaf06c * local_b8;
      fStack_124 = fVar37 * fVar44 + fVar35 * fVar52 + fVar20 * fVar28 +
                   fRam0000000146aaf06c * fStack_b4;
      fStack_120 = fVar37 * fVar53 + fVar35 * fVar36 + fVar20 * fVar42 +
                   fRam0000000146aaf06c * fStack_b0;
      fStack_11c = fVar37 * fVar46 + fVar35 * fVar46 + fVar20 * fVar46 +
                   fRam0000000146aaf06c * fRam0000000146aaf06c;
      FMatrix::RemoveScaling(&local_158);
      fVar32 = (float)local_108._0_4_;
      fVar41 = (float)local_108._4_4_;
      fVar43 = fStack_100;
      fVar45 = fStack_fc;
      fVar57 = (float)(-(uint)(local_118 <= (float)local_108._0_4_) &
                       (_DAT_146aaf0b0 ^ (uint)fVar67) ^ _DAT_146aaf0b0);
      fVar58 = (float)(-(uint)(fStack_114 <= (float)local_108._4_4_) &
                       (uRam0000000146aaf0b4 ^ (uint)fVar68) ^ uRam0000000146aaf0b4);
      fVar59 = (float)(-(uint)(fStack_110 <= fStack_100) & (uRam0000000146aaf0b8 ^ (uint)fVar21) ^
                      uRam0000000146aaf0b8);
      local_158 = local_158 * fVar57;
      fStack_154 = fStack_154 * fVar57;
      fStack_150 = fStack_150 * fVar57;
      fStack_140 = fStack_140 * fVar58;
      fStack_144 = fStack_144 * fVar58;
      local_148 = local_148 * fVar58;
      fStack_130 = fStack_130 * fVar59;
      local_138 = local_138 * fVar59;
      fStack_134 = fStack_134 * fVar59;
      FQuat::FQuat(local_108,&local_158);
      auVar25._0_4_ = (float)local_108._0_4_ * (float)local_108._0_4_ + fStack_100 * fStack_100;
      auVar25._4_4_ = (float)local_108._4_4_ * (float)local_108._4_4_ + fStack_fc * fStack_fc;
      auVar25._8_4_ = fStack_100 * fStack_100 + (float)local_108._0_4_ * (float)local_108._0_4_;
      auVar25._12_4_ = fStack_fc * fStack_fc + (float)local_108._4_4_ * (float)local_108._4_4_;
      fVar42 = auVar25._4_4_ + auVar25._0_4_;
      fVar67 = auVar25._8_4_ + auVar25._4_4_;
      fVar44 = auVar25._12_4_ + auVar25._8_4_;
      fVar68 = auVar25._0_4_ + auVar25._12_4_;
      auVar4._4_4_ = fVar67;
      auVar4._0_4_ = fVar42;
      auVar4._8_4_ = fVar44;
      auVar4._12_4_ = fVar68;
      auVar14 = rsqrtps(auVar25,auVar4);
      fVar57 = auVar14._0_4_;
      fVar58 = auVar14._4_4_;
      fVar59 = auVar14._8_4_;
      fVar29 = auVar14._12_4_;
      fVar57 = (fVar27 - fVar57 * fVar57 * fVar42 * fVar27) * fVar57 + fVar57;
      fVar58 = (fVar30 - fVar58 * fVar58 * fVar67 * fVar30) * fVar58 + fVar58;
      fVar59 = (fVar33 - fVar59 * fVar59 * fVar44 * fVar33) * fVar59 + fVar59;
      fVar29 = (fVar66 - fVar29 * fVar29 * fVar68 * fVar66) * fVar29 + fVar29;
      fVar57 = (float)(((uint)(((fVar27 - fVar57 * fVar57 * fVar42 * fVar27) * fVar57 + fVar57) *
                              (float)local_108._0_4_) ^ _DAT_146aaf040) & -(uint)(1e-08 <= fVar42) ^
                      _DAT_146aaf040);
      fVar58 = (float)(((uint)(((fVar30 - fVar58 * fVar58 * fVar67 * fVar30) * fVar58 + fVar58) *
                              (float)local_108._4_4_) ^ uRam0000000146aaf044) &
                       -(uint)(1e-08 <= fVar67) ^ uRam0000000146aaf044);
      fVar59 = (float)(((uint)(((fVar33 - fVar59 * fVar59 * fVar44 * fVar33) * fVar59 + fVar59) *
                              fStack_100) ^ uRam0000000146aaf048) & -(uint)(1e-08 <= fVar44) ^
                      uRam0000000146aaf048);
      fVar66 = (float)(((uint)(((fVar66 - fVar29 * fVar29 * fVar68 * fVar66) * fVar29 + fVar29) *
                              fStack_fc) ^ uRam0000000146aaf04c) & -(uint)(1e-08 <= fVar68) ^
                      uRam0000000146aaf04c);
      local_b8 = local_128;
      fStack_b4 = fStack_124;
      fStack_b0 = fStack_120;
    }
    fVar27 = fVar58 + fVar58;
    fVar30 = fVar59 + fVar59;
    fVar33 = fVar57 * (fVar57 + fVar57);
    puVar10 = (undefined8 *)(((longlong)*(int *)(param_1 + 0x98) + 7) * 0x10 + param_1);
    fVar29 = fVar66 * (fVar57 + fVar57);
    fStack_e4 = (fVar66 * fVar30 + fVar57 * fVar27) * fVar32;
    fStack_d0 = (fVar29 + fVar58 * fVar30) * fVar41;
    local_c8 = (fVar66 * fVar27 + fVar57 * fVar30) * fVar43;
    local_e8 = (uint)((_DAT_146aaf060 - (fVar59 * fVar30 + fVar58 * fVar27)) * fVar32) &
               _DAT_146aaf070;
    uStack_d4 = (uint)((fRam0000000146aaf064 - (fVar59 * fVar30 + fVar33)) * fVar41) &
                uRam0000000146aaf074;
    uStack_c0 = (uint)((fRam0000000146aaf068 - (fVar58 * fVar27 + fVar33)) * fVar43) &
                uRam0000000146aaf078;
    uStack_dc = (uint)((fRam0000000146aaf06c - (fVar33 + fVar33)) * fVar45) & uRam0000000146aaf07c;
    local_d8 = fVar41 * (fVar57 * fVar27 - fVar66 * fVar30);
    fStack_c4 = fVar43 * (fVar58 * fVar30 - fVar29);
    fStack_e0 = fVar32 * (fVar57 * fVar30 - fVar66 * fVar27);
    puVar13 = (undefined8 *)*puVar10;
    puVar10 = puVar13 + (longlong)*(int *)(puVar10 + 1) * 2;
    uStack_cc = uStack_dc;
    uStack_bc = uStack_dc;
    fStack_ac = fRam0000000146aaf06c;
    for (; puVar13 != puVar10; puVar13 = puVar13 + 2) {
      lVar12 = puVar13[1];
      lVar11 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined4 *)*puVar13);
      if ((lVar12 == lVar11) && (plVar2 = *(longlong **)(lVar12 + 8), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x128))(plVar2,&local_e8);
      }
    }
  }
  return;
}



// FUNCTION 141e130e0 FUN_141e130e0 body=199 status=ok
// SIG undefined FUN_141e130e0(void)

void FUN_141e130e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  BOOL BVar5;
  longlong *plVar6;
  longlong local_18;
  longlong *local_10;
  
  FUN_142384dc0();
  plVar6 = (longlong *)(param_1 + 0x780);
  if (*plVar6 != 0) {
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aaf250);
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aaf250);
    }
    *(undefined8 *)(*plVar6 + 0x18) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aaf250);
    local_10 = (longlong *)0x0;
    if (plVar6 != &local_18) {
      *plVar6 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x788,&local_10);
      plVar6 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141e131b0 FUN_141e131b0 body=1612 status=ok
// SIG undefined FUN_141e131b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e131b0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
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
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1a8;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [8];
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [48];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    local_f8 = (float)((uint)_DAT_146aaf060 & _DAT_146aaf070);
    fStack_f4 = (float)((uint)fRam0000000146aaf064 & uRam0000000146aaf074);
    fStack_f0 = (float)((uint)fRam0000000146aaf068 & uRam0000000146aaf078);
    fStack_ec = (float)((uint)fRam0000000146aaf06c & uRam0000000146aaf07c);
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0.0;
    fStack_114 = 0.0;
    fStack_110 = 0.0;
    fStack_10c = fRam0000000146aaf06c;
    plVar6 = *(longlong **)(lVar1 + 400);
    if (plVar6 == (longlong *)0x0) {
      local_148 = 0.0;
      fStack_144 = 0.0;
      fStack_140 = 0.0;
      fStack_13c = fRam0000000146aaf06c;
      _local_138 = ZEXT816(0);
      local_128 = local_f8;
      fStack_124 = fStack_f4;
      fStack_120 = fStack_f0;
      fStack_11c = fStack_ec;
    }
    else if ((*(byte *)(lVar1 + 0x24c) & 0x1c) == 0) {
      pfVar4 = (float *)(**(code **)(*plVar6 + 0x420))
                                  (plVar6,local_e8,*(undefined8 *)(lVar1 + 0x198),0);
      fVar15 = fRam0000000146aaf0c8;
      fVar14 = fRam0000000146aaf0c4;
      fVar28 = _DAT_146aaf0c0;
      fVar26 = fRam0000000146aaf068;
      fVar25 = fRam0000000146aaf064;
      fVar24 = _DAT_146aaf060;
      auVar3._4_4_ = fStack_f4;
      auVar3._0_4_ = local_f8;
      auVar3._8_4_ = fStack_f0;
      auVar3._12_4_ = fStack_ec;
      auVar7 = *(undefined1 (*) [16])(pfVar4 + 8);
      fVar9 = auVar7._0_4_;
      fVar19 = auVar7._4_4_;
      fVar21 = auVar7._8_4_;
      fVar18 = auVar7._12_4_;
      auVar7 = minps(auVar3,auVar7);
      auVar8._4_4_ = -(uint)(auVar7._4_4_ < fRam0000000146aaf0c4);
      auVar8._0_4_ = -(uint)(auVar7._0_4_ < _DAT_146aaf0c0);
      auVar8._8_4_ = -(uint)(auVar7._8_4_ < fRam0000000146aaf0c8);
      auVar8._12_4_ = -(uint)(auVar7._12_4_ < fRam0000000146aaf0cc);
      iVar5 = movmskps((int)plVar6,auVar8);
      if (iVar5 == 0) {
        fVar24 = *pfVar4;
        fVar25 = pfVar4[1];
        fVar26 = pfVar4[2];
        fVar28 = pfVar4[3];
        fVar13 = fVar9 * (float)local_108;
        fVar23 = fVar19 * local_108._4_4_;
        fVar27 = fVar21 * (float)uStack_100;
        fVar29 = fVar18 * uStack_100._4_4_;
        local_148 = fVar24 * fStack_10c * _DAT_146aaf0a0 + fVar28 * local_118 +
                    fVar25 * fStack_110 * _DAT_146aaf090 + fVar26 * fStack_114 * _DAT_146aaf080;
        fStack_144 = fVar24 * fStack_110 * fRam0000000146aaf0a4 + fVar28 * fStack_114 +
                     fVar25 * fStack_10c * fRam0000000146aaf094 +
                     fVar26 * local_118 * fRam0000000146aaf084;
        fStack_140 = fVar24 * fStack_114 * fRam0000000146aaf0a8 + fVar28 * fStack_110 +
                     fVar25 * local_118 * fRam0000000146aaf098 +
                     fVar26 * fStack_10c * fRam0000000146aaf088;
        fStack_13c = fVar24 * local_118 * fRam0000000146aaf0ac + fVar28 * fStack_10c +
                     fVar25 * fStack_114 * fRam0000000146aaf09c +
                     fVar26 * fStack_110 * fRam0000000146aaf08c;
        fVar14 = fVar27 * fVar25 - fVar23 * fVar26;
        fVar15 = fVar13 * fVar26 - fVar27 * fVar24;
        fVar11 = fVar23 * fVar24 - fVar13 * fVar25;
        fVar12 = fVar29 * fVar28 - fVar29 * fVar28;
        fVar14 = fVar14 + fVar14;
        fVar15 = fVar15 + fVar15;
        fVar11 = fVar11 + fVar11;
        fVar12 = fVar12 + fVar12;
        local_138._4_4_ = (fVar14 * fVar26 - fVar11 * fVar24) + fVar28 * fVar15 + fVar23 + pfVar4[5]
        ;
        local_138._0_4_ = (fVar11 * fVar25 - fVar15 * fVar26) + fVar28 * fVar14 + fVar13 + pfVar4[4]
        ;
        fStack_130 = (fVar15 * fVar24 - fVar14 * fVar25) + fVar28 * fVar11 + fVar27 + pfVar4[6];
        fStack_12c = (fVar12 * fVar28 - fVar12 * fVar28) + fVar28 * fVar12 + fVar29 + pfVar4[7];
        local_128 = fVar9 * local_f8;
        fStack_124 = fVar19 * fStack_f4;
        fStack_120 = fVar21 * fStack_f0;
        fStack_11c = fVar18 * fStack_ec;
      }
      else {
        fVar11 = *pfVar4;
        fVar12 = pfVar4[1];
        fVar13 = pfVar4[2];
        fVar23 = pfVar4[3];
        fVar16 = fVar12 + fVar12;
        fVar20 = fVar13 + fVar13;
        fVar27 = pfVar4[4];
        fVar29 = pfVar4[5];
        fVar2 = pfVar4[6];
        fVar22 = fVar11 * (fVar11 + fVar11);
        fVar17 = (fVar11 + fVar11) * fVar23;
        fVar38 = fVar9 * local_f8;
        fVar39 = fVar19 * fStack_f4;
        fVar40 = fVar21 * fStack_f0;
        fVar41 = fVar18 * fStack_ec;
        fVar35 = (fVar20 * fVar23 + fVar16 * fVar11) * fVar9;
        fVar36 = (fVar17 + fVar20 * fVar12) * fVar19;
        fVar37 = (fVar16 * fVar23 + fVar20 * fVar11) * fVar21;
        fVar30 = fVar19 * (fVar16 * fVar11 - fVar20 * fVar23);
        fVar17 = fVar21 * (fVar20 * fVar12 - fVar17);
        fVar31 = fVar9 * (fVar20 * fVar11 - fVar16 * fVar23);
        fVar9 = (float)((uint)((_DAT_146aaf060 - (fVar13 * fVar20 + fVar12 * fVar16)) * fVar9) &
                       _DAT_146aaf070);
        fVar11 = (float)((uint)((fRam0000000146aaf064 - (fVar13 * fVar20 + fVar22)) * fVar19) &
                        uRam0000000146aaf074);
        fVar12 = (float)((uint)((fRam0000000146aaf068 - (fVar12 * fVar16 + fVar22)) * fVar21) &
                        uRam0000000146aaf078);
        fVar13 = (float)((uint)((fRam0000000146aaf06c - (fVar22 + fVar22)) * fVar18) &
                        uRam0000000146aaf07c);
        fVar18 = fStack_114 + fStack_114;
        fVar21 = fStack_110 + fStack_110;
        fVar23 = (local_118 + local_118) * local_118;
        fVar19 = (local_118 + local_118) * fStack_10c;
        fVar32 = (fVar21 * fStack_10c + fVar18 * local_118) * local_f8;
        fVar33 = (fVar19 + fVar21 * fStack_114) * fStack_f4;
        fVar34 = (fVar18 * fStack_10c + fVar21 * local_118) * fStack_f0;
        fVar16 = fStack_f4 * (fVar18 * local_118 - fVar21 * fStack_10c);
        fVar20 = fStack_f0 * (fVar21 * fStack_114 - fVar19);
        fVar22 = local_f8 * (fVar21 * local_118 - fVar18 * fStack_10c);
        fVar19 = (float)((uint)((_DAT_146aaf060 - (fVar21 * fStack_110 + fVar18 * fStack_114)) *
                               local_f8) & _DAT_146aaf070);
        fVar21 = (float)((uint)((fRam0000000146aaf064 - (fVar21 * fStack_110 + fVar23)) * fStack_f4)
                        & uRam0000000146aaf074);
        fVar18 = (float)((uint)((fRam0000000146aaf068 - (fVar18 * fStack_114 + fVar23)) * fStack_f0)
                        & uRam0000000146aaf078);
        fVar23 = (float)((uint)((fRam0000000146aaf06c - (fVar23 + fVar23)) * fStack_ec) &
                        uRam0000000146aaf07c);
        local_198 = fVar32 * fVar30 + fVar19 * fVar9 + fVar22 * fVar37 + fVar23 * fVar27;
        fStack_194 = fVar32 * fVar11 + fVar19 * fVar35 + fVar22 * fVar17 + fVar23 * fVar29;
        fStack_190 = fVar32 * fVar36 + fVar19 * fVar31 + fVar22 * fVar12 + fVar23 * fVar2;
        fStack_18c = fVar32 * fVar13 + fVar19 * fVar13 + fVar22 * fVar13 +
                     fVar23 * fRam0000000146aaf06c;
        local_188 = fVar21 * fVar30 + fVar16 * fVar9 + fVar33 * fVar37 + fVar23 * fVar27;
        fStack_184 = fVar21 * fVar11 + fVar16 * fVar35 + fVar33 * fVar17 + fVar23 * fVar29;
        fStack_180 = fVar21 * fVar36 + fVar16 * fVar31 + fVar33 * fVar12 + fVar23 * fVar2;
        fStack_17c = fVar21 * fVar13 + fVar16 * fVar13 + fVar33 * fVar13 +
                     fVar23 * fRam0000000146aaf06c;
        local_178 = fVar20 * fVar30 + fVar34 * fVar9 + fVar18 * fVar37 + fVar23 * fVar27;
        fStack_174 = fVar20 * fVar11 + fVar34 * fVar35 + fVar18 * fVar17 + fVar23 * fVar29;
        fStack_170 = fVar20 * fVar36 + fVar34 * fVar31 + fVar18 * fVar12 + fVar23 * fVar2;
        fStack_16c = fVar20 * fVar13 + fVar34 * fVar13 + fVar18 * fVar13 +
                     fVar23 * fRam0000000146aaf06c;
        local_168 = local_108._4_4_ * fVar30 + (float)local_108 * fVar9 + (float)uStack_100 * fVar37
                    + fRam0000000146aaf06c * fVar27;
        fStack_164 = local_108._4_4_ * fVar11 + (float)local_108 * fVar35 +
                     (float)uStack_100 * fVar17 + fRam0000000146aaf06c * fVar29;
        fStack_160 = local_108._4_4_ * fVar36 + (float)local_108 * fVar31 +
                     (float)uStack_100 * fVar12 + fRam0000000146aaf06c * fVar2;
        fStack_15c = local_108._4_4_ * fVar13 + (float)local_108 * fVar13 +
                     (float)uStack_100 * fVar13 + fRam0000000146aaf06c * fRam0000000146aaf06c;
        FMatrix::RemoveScaling(&local_198);
        fVar9 = (float)(-(uint)(fVar28 <= fVar38) & (_DAT_146aaf0b0 ^ (uint)fVar24) ^ _DAT_146aaf0b0
                       );
        fVar19 = (float)(-(uint)(fVar14 <= fVar39) & (uRam0000000146aaf0b4 ^ (uint)fVar25) ^
                        uRam0000000146aaf0b4);
        fVar21 = (float)(-(uint)(fVar15 <= fVar40) & (uRam0000000146aaf0b8 ^ (uint)fVar26) ^
                        uRam0000000146aaf0b8);
        local_198 = local_198 * fVar9;
        fStack_194 = fStack_194 * fVar9;
        fStack_190 = fStack_190 * fVar9;
        fStack_184 = fStack_184 * fVar19;
        fStack_180 = fStack_180 * fVar19;
        local_188 = local_188 * fVar19;
        fStack_174 = fStack_174 * fVar21;
        fStack_170 = fStack_170 * fVar21;
        local_178 = local_178 * fVar21;
        FQuat::FQuat(&local_158,&local_198);
        local_1a8 = 0x322bcc77;
        auVar10._0_4_ = local_158 * local_158 + fStack_150 * fStack_150;
        auVar10._4_4_ = fStack_154 * fStack_154 + fStack_14c * fStack_14c;
        auVar10._8_4_ = fStack_150 * fStack_150 + local_158 * local_158;
        auVar10._12_4_ = fStack_14c * fStack_14c + fStack_154 * fStack_154;
        fVar24 = auVar10._4_4_ + auVar10._0_4_;
        fVar25 = auVar10._8_4_ + auVar10._4_4_;
        fVar26 = auVar10._12_4_ + auVar10._8_4_;
        fVar28 = auVar10._0_4_ + auVar10._12_4_;
        auVar7._4_4_ = fVar25;
        auVar7._0_4_ = fVar24;
        auVar7._8_4_ = fVar26;
        auVar7._12_4_ = fVar28;
        auVar7 = rsqrtps(auVar10,auVar7);
        fVar9 = auVar7._0_4_;
        fVar19 = auVar7._4_4_;
        fVar21 = auVar7._8_4_;
        fVar18 = auVar7._12_4_;
        fVar9 = (_DAT_146aaf050 - fVar9 * fVar9 * fVar24 * _DAT_146aaf050) * fVar9 + fVar9;
        fVar19 = (fRam0000000146aaf054 - fVar19 * fVar19 * fVar25 * fRam0000000146aaf054) * fVar19 +
                 fVar19;
        fVar21 = (fRam0000000146aaf058 - fVar21 * fVar21 * fVar26 * fRam0000000146aaf058) * fVar21 +
                 fVar21;
        fVar18 = (fRam0000000146aaf05c - fVar18 * fVar18 * fVar28 * fRam0000000146aaf05c) * fVar18 +
                 fVar18;
        local_138._4_4_ = fStack_164;
        local_138._0_4_ = local_168;
        fStack_130 = fStack_160;
        local_148 = (float)(((uint)(((_DAT_146aaf050 - fVar9 * fVar9 * fVar24 * _DAT_146aaf050) *
                                     fVar9 + fVar9) * local_158) ^ _DAT_146aaf040) &
                            -(uint)(1e-08 <= fVar24) ^ _DAT_146aaf040);
        fStack_144 = (float)(((uint)(((fRam0000000146aaf054 -
                                      fVar19 * fVar19 * fVar25 * fRam0000000146aaf054) * fVar19 +
                                     fVar19) * fStack_154) ^ uRam0000000146aaf044) &
                             -(uint)(1e-08 <= fVar25) ^ uRam0000000146aaf044);
        fStack_140 = (float)(((uint)(((fRam0000000146aaf058 -
                                      fVar21 * fVar21 * fVar26 * fRam0000000146aaf058) * fVar21 +
                                     fVar21) * fStack_150) ^ uRam0000000146aaf048) &
                             -(uint)(1e-08 <= fVar26) ^ uRam0000000146aaf048);
        fStack_13c = (float)(((uint)(((fRam0000000146aaf05c -
                                      fVar18 * fVar18 * fVar28 * fRam0000000146aaf05c) * fVar18 +
                                     fVar18) * fStack_14c) ^ uRam0000000146aaf04c) &
                             -(uint)(1e-08 <= fVar28) ^ uRam0000000146aaf04c);
        fStack_12c = 0.0;
        local_128 = fVar38;
        fStack_124 = fVar39;
        fStack_120 = fVar40;
        fStack_11c = fVar41;
      }
    }
    else {
      local_1b8 = *(undefined8 *)(lVar1 + 0x198);
      FUN_142385450(lVar1,&local_148,&local_118,plVar6);
    }
    FLateUpdateManager::Setup(param_1 + 0x20,&local_148,*(undefined8 *)(param_1 + 0x18),0);
  }
  return;
}



// FUNCTION 141e13800 FUN_141e13800 body=290 status=ok
// SIG undefined FUN_141e13800(void)

void FUN_141e13800(void)

{
  longlong *plVar1;
  float fVar2;
  
  if ((DAT_146b17150 == 0) || (*(longlong *)(DAT_146b17150 + 0xac8) == 0)) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aaf468) && (_Init_thread_header(&DAT_146aaf468), DAT_146aaf468 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146aaf460 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.PixelDensity");
    _Init_thread_footer(&DAT_146aaf468);
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (DAT_146aaf460 == (longlong *)0x0) {
    return;
  }
  fVar2 = (float)(**(code **)(*DAT_146aaf460 + 0x70))();
  if (0.1 <= fVar2) {
    if (fVar2 <= 2.0) goto LAB_141e138a6;
    if (0.1 <= fVar2) {
      fVar2 = 2.0;
      goto LAB_141e138a6;
    }
  }
  fVar2 = 0.1;
LAB_141e138a6:
                    /* WARNING: Could not recover jumptable at 0x000141e138b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xc0))(plVar1,fVar2);
  return;
}



// FUNCTION 141e13930 FUN_141e13930 body=193 status=ok
// SIG undefined FUN_141e13930(void)

void FUN_141e13930(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(longlong *)(param_2 + 0x640) != 0)) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x640) + 0x140), lVar3 != 0)) {
      plVar4 = (longlong *)(((longlong)*(int *)(param_1 + 0x94) + 7) * 0x10 + param_1);
      iVar1 = (int)plVar4[1];
      *(int *)(plVar4 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
      }
      plVar4 = (longlong *)(*plVar4 + (longlong)iVar1 * 0x10);
      *plVar4 = lVar3 + 0xe8;
      plVar4[1] = lVar3;
    }
  }
  return;
}



// FUNCTION 141e13a00 FUN_141e13a00 body=1653 status=ok
// SIG undefined FUN_141e13a00(void)

undefined1 FUN_141e13a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  int iVar11;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 local_res20;
  wchar_t *local_70;
  int local_68;
  int local_64;
  wchar_t *local_60;
  undefined8 local_58;
  
  local_res20 = 0;
  local_70 = (wchar_t *)0x0;
  local_64 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  cVar3 = FParse::Command(&local_res10,L"vr.SetTrackingOrigin",1);
  pwVar10 = (wchar_t *)0x0;
  iVar5 = 0;
  iVar11 = 0;
  if (cVar3 != '\0') {
    FString::PrintfImpl(&local_60,L"vr.TrackingOrigin %s",local_res10);
    local_70 = local_60;
    local_64 = local_58._4_4_;
    pwVar10 = local_60;
    iVar5 = local_58._4_4_;
    iVar11 = (int)local_58;
  }
  cVar3 = FParse::Command(&local_res10,L"vr.MirrorMode",1);
  if (cVar3 != '\0') {
    FString::PrintfImpl(&local_60,L"vr.SpectatorScreenMode %s",local_res10);
    if (pwVar10 != (wchar_t *)0x0) {
      FMemory::Free(pwVar10);
    }
    pwVar10 = local_60;
    iVar11 = (int)local_58;
    goto LAB_141e13c15;
  }
  cVar3 = FParse::Command(&local_res10,L"HMDPOS",1);
  if (cVar3 == '\0') {
    cVar3 = FParse::Command(&local_res10,&DAT_144e920e0,1);
    if (cVar3 == '\0') {
      cVar3 = FParse::Command(&local_res10,L"STEREO",1);
      if (cVar3 == '\0') {
        cVar3 = FParse::Command(&local_res10,L"HMDVERSION",1);
        if ((cVar3 != '\0') && (pwVar10 != L"vr.HMDVersion")) {
          local_68 = 0;
          iVar11 = 0;
          if (iVar5 != 0xe) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_70,0xe);
            pwVar10 = local_70;
            iVar5 = local_64;
            iVar11 = local_68;
          }
          local_68 = iVar11 + 0xe;
          if (iVar5 < local_68) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70);
            pwVar10 = local_70;
          }
          builtin_wcsncpy(pwVar10,L"vr.HMDVersion",0xe);
          iVar11 = local_68;
        }
        goto LAB_141e13c15;
      }
      local_60 = (wchar_t *)0x0;
      local_58 = 0;
      cVar3 = FParse::Command(&local_res10,&DAT_144e8f144,1);
      pwVar6 = pwVar10;
      if (cVar3 == '\0') {
        cVar3 = FParse::Command(&local_res10,L"ENABLE",1);
        if (cVar3 != '\0') goto LAB_141e13f41;
        cVar3 = FParse::Command(&local_res10,&DAT_144e921b0,1);
        if ((cVar3 == '\0') && (cVar3 = FParse::Command(&local_res10,L"DISABLE",1), cVar3 == '\0'))
        {
          cVar3 = FParse::Value(local_res10,L"W2M=",&local_60,1);
          if (cVar3 != '\0') {
            pwVar6 = L"";
            if ((int)local_58 != 0) {
              pwVar6 = local_60;
            }
            FString::PrintfImpl(&local_70,L"vr.WorldToMetersScale %s",pwVar6);
            pwVar6 = local_70;
            iVar11 = local_68;
            if (pwVar10 != (wchar_t *)0x0) {
              FMemory::Free(pwVar10);
              pwVar6 = local_70;
              iVar11 = local_68;
            }
          }
        }
        else if (pwVar10 != L"vr.bEnableStereo False") {
          local_68 = 0;
          iVar11 = 0;
          if (iVar5 != 0x17) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_70,0x17);
            pwVar10 = local_70;
            iVar5 = local_64;
            iVar11 = local_68;
          }
          local_68 = iVar11 + 0x17;
          if (iVar5 < local_68) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70);
            pwVar10 = local_70;
          }
          builtin_wcsncpy(pwVar10,L"vr.bEnableStereo False",0x17);
          pwVar6 = pwVar10;
          iVar11 = local_68;
        }
      }
      else {
LAB_141e13f41:
        if (pwVar10 != L"vr.bEnableStereo True") {
          local_68 = 0;
          iVar11 = 0;
          if (iVar5 != 0x16) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_70,0x16);
            pwVar10 = local_70;
            iVar5 = local_64;
            iVar11 = local_68;
          }
          local_68 = iVar11 + 0x16;
          if (iVar5 < local_68) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70);
            pwVar10 = local_70;
          }
          builtin_wcsncpy(pwVar10,L"vr.bEnableStereo True",0x16);
          pwVar6 = pwVar10;
          iVar11 = local_68;
        }
      }
      pwVar10 = pwVar6;
      if (local_60 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      goto LAB_141e13c15;
    }
    cVar3 = FParse::Command(&local_res10,&DAT_144e8ebf4,1);
    if (cVar3 == '\0') {
      cVar3 = FParse::Command(&local_res10,L"ENABLE",1);
      if (cVar3 != '\0') goto LAB_141e13cce;
    }
    else {
LAB_141e13cce:
      if (pwVar10 != L"vr.bEnableHMD True") {
        local_68 = 0;
        iVar11 = 0;
        if (iVar5 != 0x13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_70,0x13);
          pwVar10 = local_70;
          iVar5 = local_64;
          iVar11 = local_68;
        }
        local_68 = iVar11 + 0x13;
        if (iVar5 < local_68) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70);
          pwVar10 = local_70;
          iVar5 = local_64;
        }
        builtin_wcsncpy(pwVar10,L"vr.bEnableHMD True",0x13);
        iVar11 = local_68;
      }
    }
    cVar3 = FParse::Command(&local_res10,&DAT_144e92120,1);
    if (((cVar3 != '\0') || (cVar3 = FParse::Command(&local_res10,L"DISABLE",1), cVar3 != '\0')) &&
       (pwVar10 != L"vr.bEnableHMD False")) {
      local_68 = 0;
      iVar11 = 0;
      if (iVar5 != 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_70,0x14);
        pwVar10 = local_70;
        iVar5 = local_64;
        iVar11 = local_68;
      }
      local_68 = iVar11 + 0x14;
      if (iVar5 < local_68) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70);
        pwVar10 = local_70;
      }
      builtin_wcsncpy(pwVar10,L"vr.bEnableHMD False",0x14);
      iVar11 = local_68;
    }
    goto LAB_141e13c15;
  }
  FParse::Token(&local_70,&local_res10,0);
  local_58 = 4;
  local_60 = (wchar_t *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
  pwVar6 = local_60;
  FGenericPlatformString::Memcpy(local_60,&DAT_144e92098,8);
  bVar1 = false;
  pwVar9 = L"";
  if ((int)local_58 != 0) {
    pwVar9 = pwVar6;
  }
  pwVar7 = L"";
  if (local_68 != 0) {
    pwVar7 = local_70;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar7,pwVar9);
  pwVar9 = local_60;
  if (iVar5 == 0) {
LAB_141e13ba7:
    bVar2 = true;
  }
  else {
    local_60 = (wchar_t *)0x0;
    local_58 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    pwVar9 = local_60;
    FGenericPlatformString::Memcpy(local_60,L"FLOOR",0xc);
    bVar1 = true;
    pwVar7 = L"";
    if ((int)local_58 != 0) {
      pwVar7 = pwVar9;
    }
    pwVar8 = L"";
    if (local_68 != 0) {
      pwVar8 = local_70;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar8,pwVar7);
    if (iVar5 == 0) goto LAB_141e13ba7;
    bVar2 = false;
  }
  if ((bVar1) && (pwVar9 != (wchar_t *)0x0)) {
    FMemory::Free(pwVar9);
  }
  if (pwVar6 != (wchar_t *)0x0) {
    FMemory::Free(pwVar6);
  }
  if (bVar2) {
    pwVar6 = L"";
    if (local_68 != 0) {
      pwVar6 = local_70;
    }
    FString::PrintfImpl(&local_60,L"vr.TrackingOrigin %s",pwVar6);
    if (pwVar10 != (wchar_t *)0x0) {
      FMemory::Free(pwVar10);
    }
    pwVar10 = local_60;
    iVar11 = (int)local_58;
  }
  param_3 = local_res18;
  if (local_70 != (wchar_t *)0x0) {
    FMemory::Free();
    param_3 = local_res18;
  }
LAB_141e13c15:
  if (iVar11 < 2) {
    uVar4 = 0;
  }
  else {
    pwVar6 = L"";
    if (iVar11 != 0) {
      pwVar6 = pwVar10;
    }
    FOutputDevice::LogfImpl(param_3,3,L"%s is deprecated. Use %s instead",param_2,pwVar6);
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    pwVar6 = L"";
    if (iVar11 != 0) {
      pwVar6 = pwVar10;
    }
    uVar4 = (**(code **)(*DAT_1468b1f88 + 0xb8))(DAT_1468b1f88,pwVar6,param_3,param_1,0);
  }
  if (pwVar10 != (wchar_t *)0x0) {
    FMemory::Free(pwVar10);
  }
  return uVar4;
}



// FUNCTION 141e14080 FUN_141e14080 body=66 status=ok
// SIG undefined FUN_141e14080(void)

void FUN_141e14080(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144e93998;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144e939e0;
  }
  return;
}



// FUNCTION 141e140d0 CreateRHI body=198 status=ok
// SIG undefined CreateRHI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
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
  local_84 = 0xf0501;
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



// FUNCTION 141e141a0 FUN_141e141a0 body=144 status=ok
// SIG undefined FUN_141e141a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e141a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [48];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FUN_142387f70();
  puVar2 = (undefined8 *)FUN_14238d0c0(param_1,local_48);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0x740) = *puVar2;
  *(undefined8 *)(param_1 + 0x748) = uVar1;
  uVar1 = puVar2[3];
  *(undefined8 *)(param_1 + 0x750) = puVar2[2];
  *(undefined8 *)(param_1 + 0x758) = uVar1;
  uVar1 = puVar2[5];
  *(undefined8 *)(param_1 + 0x760) = puVar2[4];
  *(undefined8 *)(param_1 + 0x768) = uVar1;
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(param_1 + 0x238);
  return;
}



// FUNCTION 141e14230 FUN_141e14230 body=20 status=ok
// SIG undefined FUN_141e14230(void)

void FUN_141e14230(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMotionDelayTarget::_scalar_deleting_destructor_(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 141e14250 FUN_141e14250 body=423 status=ok
// SIG undefined FUN_141e14250(void)

void FUN_141e14250(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  longlong *plVar9;
  undefined1 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  if (param_1 != 0) {
    plVar12 = &DAT_146aaf2d0;
    bVar2 = false;
    uVar10 = 0x10;
    plVar9 = (longlong *)0x0;
    uVar1 = *(undefined4 *)(param_1 + 0x6f0);
    plVar5 = plVar9;
    plVar13 = plVar12;
    plVar11 = plVar9;
LAB_141e14295:
    do {
      if (*plVar12 == *(longlong *)(param_1 + 0x6f8)) {
        uVar10 = SUB81(plVar11,0);
        bVar2 = true;
      }
      else {
        uVar7 = (int)plVar5 + 1;
        plVar12 = plVar12 + 1;
        plVar5 = (longlong *)(ulonglong)uVar7;
        if (uVar7 < 2) goto LAB_141e14295;
      }
      uVar7 = (int)plVar11 + 1;
      plVar11 = (longlong *)(ulonglong)uVar7;
      plVar12 = plVar13 + 2;
      plVar5 = plVar9;
      plVar13 = plVar12;
    } while ((int)uVar7 < 0x11);
    if (bVar2) {
      piVar8 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if ((*piVar8 < DAT_146aaf4a8) && (_Init_thread_header(&DAT_146aaf4a8), DAT_146aaf4a8 == -1)) {
        FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
        _Init_thread_footer(&DAT_146aaf4a8);
      }
      uVar3 = DAT_146aaf4a0;
      plVar5 = (longlong *)FUN_141593110();
      iVar4 = (**(code **)(*plVar5 + 8))(plVar5,uVar3);
      if (0 < iVar4) {
        if ((*piVar8 < DAT_146aaf4a8) && (_Init_thread_header(&DAT_146aaf4a8), DAT_146aaf4a8 == -1))
        {
          FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
          _Init_thread_footer(&DAT_146aaf4a8);
        }
        uVar3 = DAT_146aaf4a0;
        plVar5 = (longlong *)FUN_141593110();
        lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar3,0);
        if (lVar6 != 0) {
          plVar9 = (longlong *)(lVar6 + -8);
        }
        (**(code **)(*plVar9 + 0x28))(plVar9,uVar1,uVar10);
      }
    }
  }
  return;
}



// FUNCTION 141e14400 FUN_141e14400 body=298 status=ok
// SIG undefined FUN_141e14400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e14400(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146aaf4a8) {
    _Init_thread_header(&DAT_146aaf4a8);
    if (DAT_146aaf4a8 == -1) {
      FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
      _Init_thread_footer(&DAT_146aaf4a8);
    }
  }
  uVar1 = DAT_146aaf4a0;
  plVar3 = (longlong *)FUN_141593110();
  iVar2 = (**(code **)(*plVar3 + 8))(plVar3,uVar1);
  if (0 < iVar2) {
    if (*piVar5 < DAT_146aaf4a8) {
      _Init_thread_header(&DAT_146aaf4a8);
      if (DAT_146aaf4a8 == -1) {
        FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
        _Init_thread_footer(&DAT_146aaf4a8);
      }
    }
    uVar1 = DAT_146aaf4a0;
    plVar3 = (longlong *)FUN_141593110();
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar1,0);
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141e1448d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar4 + -8) + 0x30))(lVar4 + -8);
      return;
    }
    (**(code **)(_DAT_00000000 + 0x30))();
  }
  return;
}



// FUNCTION 141e14530 FUN_141e14530 body=296 status=ok
// SIG undefined FUN_141e14530(void)

void FUN_141e14530(undefined4 param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146aaf4a8) {
    _Init_thread_header(&DAT_146aaf4a8);
    if (DAT_146aaf4a8 == -1) {
      FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
      _Init_thread_footer(&DAT_146aaf4a8);
    }
  }
  uVar1 = DAT_146aaf4a0;
  plVar3 = (longlong *)FUN_141593110();
  iVar2 = (**(code **)(*plVar3 + 8))(plVar3,uVar1);
  if (0 < iVar2) {
    if (*piVar5 < DAT_146aaf4a8) {
      _Init_thread_header(&DAT_146aaf4a8);
      if (DAT_146aaf4a8 == -1) {
        FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
        _Init_thread_footer(&DAT_146aaf4a8);
      }
    }
    uVar1 = DAT_146aaf4a0;
    plVar3 = (longlong *)FUN_141593110();
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar1,0);
    if (lVar4 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)(lVar4 + -8);
    }
    (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  }
  return;
}



// FUNCTION 141e14660 FUN_141e14660 body=314 status=ok
// SIG undefined FUN_141e14660(void)

void FUN_141e14660(undefined4 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146aaf4a8) {
    _Init_thread_header(&DAT_146aaf4a8);
    if (DAT_146aaf4a8 == -1) {
      FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
      _Init_thread_footer(&DAT_146aaf4a8);
    }
  }
  uVar1 = DAT_146aaf4a0;
  plVar3 = (longlong *)FUN_141593110();
  iVar2 = (**(code **)(*plVar3 + 8))(plVar3,uVar1);
  if (0 < iVar2) {
    if (*piVar5 < DAT_146aaf4a8) {
      _Init_thread_header(&DAT_146aaf4a8);
      if (DAT_146aaf4a8 == -1) {
        FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
        _Init_thread_footer(&DAT_146aaf4a8);
      }
    }
    uVar1 = DAT_146aaf4a0;
    plVar3 = (longlong *)FUN_141593110();
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar1,0);
    if (lVar4 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)(lVar4 + -8);
    }
    (**(code **)(*plVar3 + 0x28))(plVar3,param_1,param_2);
  }
  return;
}



// FUNCTION 141e147a0 FUN_141e147a0 body=401 status=ok
// SIG undefined FUN_141e147a0(void)

void FUN_141e147a0(undefined4 param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  bVar1 = false;
  plVar11 = &DAT_146aaf2d0;
  plVar7 = (longlong *)0x0;
  uVar9 = 0x10;
  plVar4 = plVar7;
  plVar12 = plVar11;
  plVar10 = plVar7;
LAB_141e147d0:
  do {
    if (*plVar11 == param_2) {
      uVar9 = SUB81(plVar10,0);
      bVar1 = true;
    }
    else {
      uVar8 = (int)plVar4 + 1;
      plVar11 = plVar11 + 1;
      plVar4 = (longlong *)(ulonglong)uVar8;
      if (uVar8 < 2) goto LAB_141e147d0;
    }
    uVar8 = (int)plVar10 + 1;
    plVar10 = (longlong *)(ulonglong)uVar8;
    plVar11 = plVar12 + 2;
    plVar4 = plVar7;
    plVar12 = plVar11;
    if (0x10 < (int)uVar8) {
      if (bVar1) {
        piVar6 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
        if ((*piVar6 < DAT_146aaf4a8) && (_Init_thread_header(&DAT_146aaf4a8), DAT_146aaf4a8 == -1))
        {
          FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
          _Init_thread_footer(&DAT_146aaf4a8);
        }
        uVar2 = DAT_146aaf4a0;
        plVar4 = (longlong *)FUN_141593110();
        iVar3 = (**(code **)(*plVar4 + 8))(plVar4,uVar2);
        if (0 < iVar3) {
          if ((*piVar6 < DAT_146aaf4a8) &&
             (_Init_thread_header(&DAT_146aaf4a8), DAT_146aaf4a8 == -1)) {
            FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
            _Init_thread_footer(&DAT_146aaf4a8);
          }
          uVar2 = DAT_146aaf4a0;
          plVar4 = (longlong *)FUN_141593110();
          lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,uVar2,0);
          if (lVar5 != 0) {
            plVar7 = (longlong *)(lVar5 + -8);
          }
          (**(code **)(*plVar7 + 0x28))(plVar7,param_1,uVar9);
        }
      }
      return;
    }
  } while( true );
}



// FUNCTION 141e14940 FUN_141e14940 body=190 status=ok
// SIG undefined FUN_141e14940(void)

void FUN_141e14940(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  
  if (((DAT_146b17150 != 0) && (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0)) &&
     (plVar3 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))(),
     plVar3 != (longlong *)0x0)) {
    if (*(int *)(param_1 + 1) != 0) {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = *(undefined2 **)*param_1;
      }
      uVar1 = FToBoolHelper::FromCStringWide(puVar4);
                    /* WARNING: Could not recover jumptable at 0x000141e149be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x58))(plVar3,uVar1);
      return;
    }
    cVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
    pwVar5 = L"disabled";
    if (cVar2 != '\0') {
      pwVar5 = L"enabled";
    }
    FOutputDevice::LogfImpl(param_3,L"HMD device is %s",pwVar5);
  }
  return;
}



// FUNCTION 141e14a00 FUN_141e14a00 body=130 status=ok
// SIG undefined FUN_141e14a00(void)

undefined8 FUN_141e14a00(char param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong **)(DAT_146b17150 + 0xac8) == (longlong *)0x0) ||
     (lVar2 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))(), lVar2 == 0)) {
    return 0;
  }
  plVar3 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  plVar3 = *(longlong **)(DAT_146b17150 + 0xab8);
  if ((plVar3 != (longlong *)0x0) &&
     ((cVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,param_1), cVar1 == '\0' && (param_1 != '\0'))))
  {
    return 0;
  }
  return 1;
}



// FUNCTION 141e14a90 FUN_141e14a90 body=431 status=ok
// SIG undefined FUN_141e14a90(void)

undefined8 FUN_141e14a90(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int *piVar8;
  longlong *plVar9;
  undefined1 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  if (param_1 == 0) {
    return 0;
  }
  plVar12 = &DAT_146aaf2d0;
  bVar2 = false;
  uVar10 = 0x10;
  plVar9 = (longlong *)0x0;
  uVar1 = *(undefined4 *)(param_1 + 0x6f0);
  plVar4 = plVar9;
  plVar13 = plVar12;
  plVar11 = plVar9;
LAB_141e14ad5:
  do {
    if (*plVar12 == *(longlong *)(param_1 + 0x6f8)) {
      uVar10 = SUB81(plVar11,0);
      bVar2 = true;
    }
    else {
      uVar7 = (int)plVar4 + 1;
      plVar12 = plVar12 + 1;
      plVar4 = (longlong *)(ulonglong)uVar7;
      if (uVar7 < 2) goto LAB_141e14ad5;
    }
    uVar7 = (int)plVar11 + 1;
    plVar11 = (longlong *)(ulonglong)uVar7;
    plVar12 = plVar13 + 2;
    plVar4 = plVar9;
    plVar13 = plVar12;
    if (0x10 < (int)uVar7) {
      if (bVar2) {
        piVar8 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
        if ((*piVar8 < DAT_146aaf4a8) && (_Init_thread_header(&DAT_146aaf4a8), DAT_146aaf4a8 == -1))
        {
          FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
          _Init_thread_footer(&DAT_146aaf4a8);
        }
        uVar6 = DAT_146aaf4a0;
        plVar4 = (longlong *)FUN_141593110();
        iVar3 = (**(code **)(*plVar4 + 8))(plVar4,uVar6);
        if (0 < iVar3) {
          if ((*piVar8 < DAT_146aaf4a8) &&
             (_Init_thread_header(&DAT_146aaf4a8), DAT_146aaf4a8 == -1)) {
            FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
            _Init_thread_footer(&DAT_146aaf4a8);
          }
          uVar6 = DAT_146aaf4a0;
          plVar4 = (longlong *)FUN_141593110();
          lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,uVar6,0);
          if (lVar5 != 0) {
            plVar9 = (longlong *)(lVar5 + -8);
          }
          uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,uVar1,uVar10);
          return uVar6;
        }
      }
      return 1;
    }
  } while( true );
}



// FUNCTION 141e14c40 FUN_141e14c40 body=334 status=ok
// SIG undefined FUN_141e14c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141e14c40(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146aaf4a8) {
    _Init_thread_header(&DAT_146aaf4a8);
    if (DAT_146aaf4a8 == -1) {
      FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
      _Init_thread_footer(&DAT_146aaf4a8);
    }
  }
  uVar4 = DAT_146aaf4a0;
  plVar2 = (longlong *)FUN_141593110();
  iVar1 = (**(code **)(*plVar2 + 8))(plVar2,uVar4);
  if (iVar1 < 1) {
    uVar4 = 1;
  }
  else {
    if (*piVar5 < DAT_146aaf4a8) {
      _Init_thread_header(&DAT_146aaf4a8);
      if (DAT_146aaf4a8 == -1) {
        FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
        _Init_thread_footer(&DAT_146aaf4a8);
      }
    }
    uVar4 = DAT_146aaf4a0;
    plVar2 = (longlong *)FUN_141593110();
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,uVar4,0);
    if (lVar3 == 0) {
      uVar4 = (**(code **)(_DAT_00000000 + 0x20))(0,param_1,param_2);
    }
    else {
      uVar4 = (**(code **)(*(longlong *)(lVar3 + -8) + 0x20))
                        ((longlong *)(lVar3 + -8),param_1,param_2);
    }
  }
  return uVar4;
}



// FUNCTION 141e14d90 FUN_141e14d90 body=405 status=ok
// SIG undefined FUN_141e14d90(void)

undefined8 FUN_141e14d90(undefined4 param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  bVar1 = false;
  plVar11 = &DAT_146aaf2d0;
  plVar7 = (longlong *)0x0;
  uVar9 = 0x10;
  plVar3 = plVar7;
  plVar12 = plVar11;
  plVar10 = plVar7;
LAB_141e14dc0:
  do {
    if (*plVar11 == param_2) {
      uVar9 = SUB81(plVar10,0);
      bVar1 = true;
    }
    else {
      uVar8 = (int)plVar3 + 1;
      plVar11 = plVar11 + 1;
      plVar3 = (longlong *)(ulonglong)uVar8;
      if (uVar8 < 2) goto LAB_141e14dc0;
    }
    uVar8 = (int)plVar10 + 1;
    plVar10 = (longlong *)(ulonglong)uVar8;
    plVar11 = plVar12 + 2;
    plVar3 = plVar7;
    plVar12 = plVar11;
    if (0x10 < (int)uVar8) {
      if (bVar1) {
        piVar6 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
        if ((*piVar6 < DAT_146aaf4a8) && (_Init_thread_header(&DAT_146aaf4a8), DAT_146aaf4a8 == -1))
        {
          FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
          _Init_thread_footer(&DAT_146aaf4a8);
        }
        uVar5 = DAT_146aaf4a0;
        plVar3 = (longlong *)FUN_141593110();
        iVar2 = (**(code **)(*plVar3 + 8))(plVar3,uVar5);
        if (0 < iVar2) {
          if ((*piVar6 < DAT_146aaf4a8) &&
             (_Init_thread_header(&DAT_146aaf4a8), DAT_146aaf4a8 == -1)) {
            FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
            _Init_thread_footer(&DAT_146aaf4a8);
          }
          uVar5 = DAT_146aaf4a0;
          plVar3 = (longlong *)FUN_141593110();
          lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar5,0);
          if (lVar4 != 0) {
            plVar7 = (longlong *)(lVar4 + -8);
          }
          uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,param_1,uVar9);
          return uVar5;
        }
      }
      return 1;
    }
  } while( true );
}



// FUNCTION 141e14f30 FUN_141e14f30 body=278 status=ok
// SIG undefined FUN_141e14f30(void)

void FUN_141e14f30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  
  cVar2 = '\0';
  if ((DAT_146b17150 == 0) || (*(longlong **)(DAT_146b17150 + 0xac8) == (longlong *)0x0)) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
  }
  if (*(int *)(param_1 + 1) == 0) {
    if ((DAT_146b17150 != 0) && (*(undefined8 **)(DAT_146b17150 + 0xab8) != (undefined8 *)0x0)) {
      cVar2 = (**(code **)**(undefined8 **)(DAT_146b17150 + 0xab8))();
    }
    pwVar5 = L"disabled";
    if (cVar2 != '\0') {
      pwVar5 = L"enabled";
    }
    FOutputDevice::LogfImpl(param_3,L"Stereo is %s",pwVar5);
  }
  else {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)*param_1;
    }
    uVar1 = FToBoolHelper::FromCStringWide(puVar4);
    if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0xab8) != 0)) {
      if ((plVar3 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar3 + 0x48))(plVar3), cVar2 == '\0')) {
        FOutputDevice::LogfImpl
                  (param_3,L"HMD is disabled. Use \'vr.bEnableHMD True\' to re-enable it.");
      }
      (**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x10))
                (*(longlong **)(DAT_146b17150 + 0xab8),uVar1);
    }
  }
  return;
}



// FUNCTION 141e15050 FUN_141e15050 body=387 status=ok
// SIG undefined FUN_141e15050(void)

undefined8 * FUN_141e15050(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_28;
  undefined8 local_20;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *param_1 = 0;
  param_1[1] = 0;
  if ((*(int *)(lVar2 + 0x38) < DAT_14685ee08) &&
     (_Init_thread_header(&DAT_14685ee08), DAT_14685ee08 == -1)) {
    FName::FName(&DAT_14685ee00,L"MotionController",1);
    _Init_thread_footer(&DAT_14685ee08);
  }
  uVar4 = DAT_14685ee00;
  uVar6 = FUN_141593110();
  IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>(uVar6,&local_28,uVar4);
  plVar5 = local_28;
  plVar1 = local_28 + (int)local_20;
  for (plVar8 = local_28; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    plVar3 = (longlong *)*plVar8;
    if (plVar3 != (longlong *)0x0) {
      local_28 = (longlong *)0x0;
      local_20 = 0;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_28);
      if (*(int *)((longlong)param_1 + 0xc) < *(int *)(param_1 + 1) + (int)local_20) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
      }
      plVar3 = local_28 + (int)local_20;
      for (plVar7 = local_28; plVar7 != plVar3; plVar7 = plVar7 + 1) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1,plVar7);
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  return param_1;
}



// FUNCTION 141e151e0 FUN_141e151e0 body=333 status=ok
// SIG undefined FUN_141e151e0(void)

longlong * FUN_141e151e0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined1 local_res8 [8];
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar7 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = *(longlong **)(DAT_146b17150 + 0xac8);
  if ((plVar4 != (longlong *)0x0) &&
     ((((int)param_2 == 0 && ((int)((ulonglong)param_2 >> 0x20) == 0)) ||
      (plVar5 = (longlong *)(**(code **)*plVar4)(plVar4,local_res8), *plVar5 == param_2)))) {
    local_38 = (undefined4 *)0x0;
    local_30 = 0;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_38,param_3);
    if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] + (int)local_30) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1);
    }
    uVar6 = (ulonglong)((longlong)(local_38 + (int)local_30) + (3 - (longlong)local_38)) >> 2;
    if (local_38 + (int)local_30 < local_38) {
      uVar6 = uVar7;
    }
    puVar8 = local_38;
    if (uVar6 != 0) {
      do {
        uVar2 = *puVar8;
        (**(code **)*plVar4)(plVar4,&local_28);
        iVar3 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar3 + 1;
        uStack_20 = uVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar3);
        }
        uVar7 = uVar7 + 1;
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar3 * 0x10);
        *puVar1 = local_28;
        puVar1[1] = uStack_24;
        puVar1[2] = uStack_20;
        puVar1[3] = uStack_1c;
        puVar8 = puVar8 + 1;
      } while (uVar7 != uVar6);
    }
    if (local_38 != (undefined4 *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return param_1;
}



// FUNCTION 141e15330 FUN_141e15330 body=89 status=ok
// SIG undefined FUN_141e15330(void)

void FUN_141e15330(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_res8 [4];
  
  *(char *)(*(longlong *)(param_1 + 8) + 0x50) = (param_2 == 0) + '\x01';
  plVar1 = *(longlong **)(param_1 + 8);
  local_res8[0] = plVar1[0xb];
  if (local_res8[0] != 0) {
    plVar2 = plVar1 + 6;
    if (param_2 == 0) {
      plVar2 = plVar1 + 8;
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar2,local_res8);
                    /* WARNING: Could not recover jumptable at 0x000141e1537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x290))(plVar1);
    return;
  }
  return;
}



// FUNCTION 141e15390 FUN_141e15390 body=85 status=ok
// SIG undefined FUN_141e15390(void)

undefined8 FUN_141e15390(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_res8 [4];
  
  *(char *)(*(longlong *)(param_1 + 8) + 0x50) = (param_2 == 0) + '\x01';
  plVar1 = *(longlong **)(param_1 + 8);
  local_res8[0] = plVar1[0xb];
  if (local_res8[0] != 0) {
    plVar2 = plVar1 + 6;
    if (param_2 == 0) {
      plVar2 = plVar1 + 8;
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar2,local_res8);
    (**(code **)(*plVar1 + 0x290))(plVar1);
  }
  return 1;
}



// FUNCTION 141e153f0 FindId body=323 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *(longlong *)(param_3 + 2);
    uVar8 = (int)((ulonglong)lVar1 >> 0x20) + (int)lVar1;
    uVar7 = *param_3 - uVar8 ^ uVar8 >> 0xd;
    uVar6 = (-0x61c88647 - uVar7) - uVar8 ^ uVar7 << 8;
    uVar8 = (uVar8 - uVar6) - uVar7 ^ uVar6 >> 0xd;
    uVar7 = (uVar7 - uVar6) - uVar8 ^ uVar8 >> 0xc;
    uVar6 = (uVar6 - uVar7) - uVar8 ^ uVar7 << 0x10;
    uVar8 = (uVar8 - uVar6) - uVar7 ^ uVar6 >> 5;
    uVar7 = (uVar7 - uVar6) - uVar8 ^ uVar8 >> 3;
    uVar6 = (uVar6 - uVar7) - uVar8 ^ uVar7 << 10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (((longlong)(int)((uVar8 - uVar6) - uVar7) ^ (ulonglong)(uVar6 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar2 = *param_1;
      do {
        lVar5 = (longlong)iVar3;
        if ((*(int *)(lVar2 + lVar5 * 0x30) == *param_3) &&
           (*(longlong *)(lVar2 + 8 + lVar5 * 0x30) == lVar1)) {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar2 + 0x28 + lVar5 * 0x30);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141e15540 FUN_141e15540 body=80 status=ok
// SIG undefined FUN_141e15540(void)

undefined8 * FUN_141e15540(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = *(undefined8 **)(DAT_146b17150 + 0xac8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(**(code **)*puVar1)(puVar1,local_res8);
    *param_1 = *puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 141e15590 FUN_141e15590 body=235 status=ok
// SIG undefined FUN_141e15590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e15590(longlong *param_1,undefined1 *param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *param_2 = 0;
  *param_4 = 0;
  plVar1 = *(longlong **)(DAT_146b17150 + 0xac8);
  if (plVar1 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)*plVar1)(plVar1,local_res10);
    if (*plVar5 == *param_1) {
      cVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,(int)param_1[1],local_28,param_5);
      if (cVar2 == '\0') {
        *param_5 = _DAT_1468b5d90;
        *(undefined4 *)(param_5 + 1) = DAT_1468b5d98;
        *param_3 = DAT_1468b5da0;
        uVar4 = DAT_1468b5da8;
      }
      else {
        *param_2 = 1;
        uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
        *param_4 = uVar3;
        puVar6 = (undefined8 *)FRotator::FRotator(local_38,local_28);
        *param_3 = *puVar6;
        uVar4 = *(undefined4 *)(puVar6 + 1);
      }
      *(undefined4 *)(param_3 + 1) = uVar4;
    }
  }
  return;
}



// FUNCTION 141e15680 FUN_141e15680 body=652 status=ok
// SIG undefined FUN_141e15680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e15680(undefined8 param_1,longlong *param_2,undefined1 *param_3,undefined8 *param_4,
                  undefined1 *param_5,float *param_6)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  float local_b0;
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *param_3 = 0;
  *param_5 = 0;
  plVar2 = *(longlong **)(DAT_146b17150 + 0xac8);
  if (plVar2 != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)*plVar2)(plVar2,local_b8);
    if (*plVar6 == *param_2) {
      cVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,(int)param_2[1],local_a8,param_6);
      if (cVar3 == '\0') {
        *(undefined8 *)param_6 = _DAT_1468b5d90;
        param_6[2] = DAT_1468b5d98;
        *param_4 = DAT_1468b5da0;
        uVar5 = DAT_1468b5da8;
      }
      else {
        *param_3 = 1;
        uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2);
        *param_5 = uVar4;
        puVar7 = (undefined8 *)FRotator::FRotator(local_b8,local_a8);
        *param_4 = *puVar7;
        uVar5 = *(undefined4 *)(puVar7 + 1);
      }
      *(undefined4 *)(param_4 + 1) = uVar5;
    }
  }
  plVar2 = *(longlong **)(DAT_146b17150 + 0xac8);
  if (plVar2 == (longlong *)0x0) {
    local_88 = _DAT_1468b5b70;
    fStack_84 = fRam00000001468b5b74;
    fStack_80 = fRam00000001468b5b78;
    fStack_7c = fRam00000001468b5b7c;
    local_78 = _DAT_1468b5b80;
    fStack_74 = fRam00000001468b5b84;
    fStack_70 = fRam00000001468b5b88;
    uStack_6c = uRam00000001468b5b8c;
    local_68 = _DAT_1468b5b90;
    fStack_64 = fRam00000001468b5b94;
    fStack_60 = fRam00000001468b5b98;
    uStack_5c = uRam00000001468b5b9c;
  }
  else {
    (**(code **)(*plVar2 + 0x78))(plVar2,&local_88);
  }
  fVar12 = *param_6 * local_68;
  fVar13 = param_6[1] * fStack_64;
  fVar14 = param_6[2] * fStack_60;
  fVar9 = fVar14 * fStack_84 - fVar13 * fStack_80;
  fVar10 = fVar12 * fStack_80 - fVar14 * local_88;
  fVar11 = fVar13 * local_88 - fVar12 * fStack_84;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  local_b0 = (fVar10 * local_88 - fVar9 * fStack_84) + fStack_7c * fVar11 + fVar14 + fStack_70;
  *(ulonglong *)param_6 =
       CONCAT44((fVar9 * fStack_80 - fVar11 * local_88) + fStack_7c * fVar10 + fVar13 + fStack_74,
                (fVar11 * fStack_84 - fVar10 * fStack_80) + fStack_7c * fVar9 + fVar12 + local_78);
  param_6[2] = local_b0;
  pauVar8 = (undefined1 (*) [16])FRotator::Quaternion(param_4,local_a8);
  auVar1 = *pauVar8;
  fVar9 = auVar1._0_4_;
  fVar10 = auVar1._4_4_;
  fVar11 = auVar1._8_4_;
  fVar12 = auVar1._12_4_;
  local_98 = local_88 * fVar12 * _DAT_146aaf0a0 + fStack_7c * fVar9 +
             fStack_84 * fVar11 * _DAT_146aaf090 + fStack_80 * fVar10 * _DAT_146aaf080;
  fStack_94 = local_88 * fVar11 * fRam0000000146aaf0a4 + fStack_7c * fVar10 +
              fStack_84 * fVar12 * fRam0000000146aaf094 + fStack_80 * fVar9 * fRam0000000146aaf084;
  fStack_90 = local_88 * fVar10 * fRam0000000146aaf0a8 + fStack_7c * fVar11 +
              fStack_84 * fVar9 * fRam0000000146aaf098 + fStack_80 * fVar12 * fRam0000000146aaf088;
  fStack_8c = local_88 * fVar9 * fRam0000000146aaf0ac + fStack_7c * fVar12 +
              fStack_84 * fVar10 * fRam0000000146aaf09c + fStack_80 * fVar11 * fRam0000000146aaf08c;
  puVar7 = (undefined8 *)FQuat::Rotator(&local_98,local_b8);
  *param_4 = *puVar7;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar7 + 1);
  return;
}



// FUNCTION 141e15910 FUN_141e15910 body=58 status=ok
// SIG undefined FUN_141e15910(void)

undefined8 * FUN_141e15910(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  *param_1 = 0;
  puVar1 = *(undefined8 **)(DAT_146b17150 + 0xac8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(**(code **)*puVar1)(puVar1,local_res8);
    *param_1 = *puVar1;
  }
  return param_1;
}



// FUNCTION 141e15950 FUN_141e15950 body=81 status=ok
// SIG undefined FUN_141e15950(void)

undefined8 FUN_141e15950(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
                    /* WARNING: Could not recover jumptable at 0x000141e15996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 141e159b0 FUN_141e159b0 body=318 status=ok
// SIG undefined FUN_141e159b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141e159b0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146aaf4a8) {
    _Init_thread_header(&DAT_146aaf4a8);
    if (DAT_146aaf4a8 == -1) {
      FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
      _Init_thread_footer(&DAT_146aaf4a8);
    }
  }
  uVar4 = DAT_146aaf4a0;
  plVar2 = (longlong *)FUN_141593110();
  iVar1 = (**(code **)(*plVar2 + 8))(plVar2,uVar4);
  if (iVar1 < 1) {
    return 0xffffffff;
  }
  if (*piVar5 < DAT_146aaf4a8) {
    _Init_thread_header(&DAT_146aaf4a8);
    if (DAT_146aaf4a8 == -1) {
      FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
      _Init_thread_footer(&DAT_146aaf4a8);
    }
  }
  uVar4 = DAT_146aaf4a0;
  plVar2 = (longlong *)FUN_141593110();
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,uVar4,0);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141e15a41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(longlong *)(lVar3 + -8) + 8))(lVar3 + -8);
    return uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000141e15a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(_DAT_00000000 + 8))();
  return uVar4;
}



// FUNCTION 141e15af0 FUN_141e15af0 body=123 status=ok
// SIG undefined FUN_141e15af0(void)

undefined8 * FUN_141e15af0(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aaf458) {
    _Init_thread_header(&DAT_146aaf458);
    if (DAT_146aaf458 == -1) {
      FName::FName(&DAT_146aaf450,L"XRSystemAssets",1);
      _Init_thread_footer(&DAT_146aaf458);
    }
  }
  *param_1 = DAT_146aaf450;
  return param_1;
}



// FUNCTION 141e15b70 FUN_141e15b70 body=318 status=ok
// SIG undefined FUN_141e15b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141e15b70(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146aaf4a8) {
    _Init_thread_header(&DAT_146aaf4a8);
    if (DAT_146aaf4a8 == -1) {
      FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
      _Init_thread_footer(&DAT_146aaf4a8);
    }
  }
  uVar4 = DAT_146aaf4a0;
  plVar2 = (longlong *)FUN_141593110();
  iVar1 = (**(code **)(*plVar2 + 8))(plVar2,uVar4);
  if (iVar1 < 1) {
    return 0xffffffff;
  }
  if (*piVar5 < DAT_146aaf4a8) {
    _Init_thread_header(&DAT_146aaf4a8);
    if (DAT_146aaf4a8 == -1) {
      FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
      _Init_thread_footer(&DAT_146aaf4a8);
    }
  }
  uVar4 = DAT_146aaf4a0;
  plVar2 = (longlong *)FUN_141593110();
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,uVar4,0);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141e15c01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(longlong *)(lVar3 + -8) + 0x10))(lVar3 + -8);
    return uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000141e15c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(_DAT_00000000 + 0x10))();
  return uVar4;
}



// FUNCTION 141e15cb0 FUN_141e15cb0 body=31 status=ok
// SIG undefined FUN_141e15cb0(void)

undefined8 FUN_141e15cb0(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(DAT_146b17150 + 0xac8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e15cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141e15cd0 FUN_141e15cd0 body=207 status=ok
// SIG undefined FUN_141e15cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e15cd0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xf0))();
    if (cVar1 != '\0') {
      local_38 = 0;
      local_30 = 0;
      (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0x50))
                (*(longlong **)(DAT_146b17150 + 0xac8),0,local_18,&local_38);
      puVar2 = (undefined8 *)FQuat::Rotator(local_18,local_28);
      *param_1 = *puVar2;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar2 + 1);
      *param_2 = local_38;
      *(undefined4 *)(param_2 + 1) = local_30;
      return;
    }
  }
  *param_1 = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 1) = DAT_1468b5da8;
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return;
}



// FUNCTION 141e15da0 FUN_141e15da0 body=43 status=ok
// SIG undefined FUN_141e15da0(void)

undefined8 FUN_141e15da0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x728);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e15dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,*(undefined8 *)(param_1 + 0x6f8),param_2,param_3);
    return uVar2;
  }
  *param_3 = 0;
  return 0;
}



// FUNCTION 141e15dd0 FUN_141e15dd0 body=153 status=ok
// SIG undefined FUN_141e15dd0(void)

undefined4 FUN_141e15dd0(void)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aaf488) {
    _Init_thread_header(&DAT_146aaf488);
    if (DAT_146aaf488 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.pixeldensity");
      puVar2 = (undefined4 *)0x0;
      if (plVar1 != (longlong *)0x0) {
        puVar2 = (undefined4 *)(**(code **)(*plVar1 + 0x40))(plVar1);
      }
      DAT_146aaf480 = puVar2;
      _Init_thread_footer(&DAT_146aaf488);
    }
  }
  return *DAT_146aaf480;
}



// FUNCTION 141e15e70 FUN_141e15e70 body=495 status=ok
// SIG undefined FUN_141e15e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e15e70(undefined8 *param_1,undefined8 *param_2,float *param_3,float *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_108 [32];
  float *local_e8;
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xf0))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0x10))();
      if (cVar1 != '\0') {
        local_d8 = (undefined4 *)0x0;
        local_d0 = 0;
        (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0x28))
                  (*(longlong **)(DAT_146b17150 + 0xac8),&local_d8,2);
        local_e8 = &local_a8;
        (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0x60))
                  (*(longlong **)(DAT_146b17150 + 0xac8),*local_d8,local_c8,param_1);
        puVar2 = (undefined8 *)FQuat::Rotator(local_c8,local_b8);
        *param_2 = *puVar2;
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar2 + 1);
        *param_5 = local_90;
        *param_6 = local_98;
        *param_7 = local_94;
        if (local_d8 != (undefined4 *)0x0) {
          FMemory::Free();
        }
        goto LAB_141e16010;
      }
    }
  }
  local_a8 = 0.0;
  *param_1 = _DAT_1468b5d90;
  local_9c = 0.0;
  local_a0 = 0.0;
  *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
  local_a4 = 0.0;
  *param_2 = DAT_1468b5da0;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5da8;
  *param_6 = 0;
  *param_7 = 0;
  *param_5 = 0;
LAB_141e16010:
  *param_3 = local_a8 + local_a4;
  *param_4 = local_a0 + local_9c;
  return;
}



// FUNCTION 141e16070 FUN_141e16070 body=320 status=ok
// SIG undefined FUN_141e16070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141e16070(void)

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
  
  if (DAT_146aaf4b0 == 0) {
    if ((DAT_146ab62c8 == '\0') || (DAT_146ab6326 == '\0')) {
      cVar6 = IsInRenderingThread();
      if (cVar6 == '\0') {
        FScopedEvent::FScopedEvent(local_res10);
        plVar8 = (longlong *)FUN_14049e3d0(local_28,0,0xff);
        lVar7 = *plVar8;
        *(undefined1 **)(lVar7 + 0x10) = &LAB_141e161b0;
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
        return *(undefined8 *)(DAT_146aaf4b0 + 0x30);
      }
      lVar7 = operator_new();
      if (lVar7 == 0) {
        DAT_146aaf4b0 = 0;
        return _DAT_00000030;
      }
      DAT_146aaf4b0 =
           TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
           ::FStaticStateResource::FStaticStateResource(lVar7);
      return *(undefined8 *)(DAT_146aaf4b0 + 0x30);
    }
    lVar7 = operator_new();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
              ::FStaticStateResource::FStaticStateResource(lVar7);
    }
    LOCK();
    if (DAT_146aaf4b0 != 0) {
      lVar7 = DAT_146aaf4b0;
    }
    DAT_146aaf4b0 = lVar7;
    UNLOCK();
  }
  return *(undefined8 *)(DAT_146aaf4b0 + 0x30);
}



// FUNCTION 141e161c0 FUN_141e161c0 body=153 status=ok
// SIG undefined FUN_141e161c0(void)

undefined4 FUN_141e161c0(void)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aaf478) {
    _Init_thread_header(&DAT_146aaf478);
    if (DAT_146aaf478 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar1 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ScreenPercentage")
      ;
      puVar2 = (undefined4 *)0x0;
      if (plVar1 != (longlong *)0x0) {
        puVar2 = (undefined4 *)(**(code **)(*plVar1 + 0x40))(plVar1);
      }
      DAT_146aaf470 = puVar2;
      _Init_thread_footer(&DAT_146aaf478);
    }
  }
  return *DAT_146aaf470;
}



// FUNCTION 141e16260 GetSourceNameForHand body=169 status=ok
// SIG undefined GetSourceNameForHand(void)

undefined8 LegacyMotionSources::GetSourceNameForHand(undefined1 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 local_res18 [2];
  undefined2 *local_18;
  int local_10;
  
  uVar1 = UEnum::GetPrivateStaticClass();
  lVar2 = FUN_141799410(uVar1,0xffffffffffffffff,L"EControllerHand");
  if (lVar2 != 0) {
    UEnum::GetNameStringByValue(lVar2,&local_18,param_1);
    if (1 < local_10) {
      puVar3 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar3 = local_18;
      }
      FName::FName(local_res18,puVar3,1);
      *param_2 = local_res18[0];
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return 1;
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 141e16310 FUN_141e16310 body=57 status=ok
// SIG undefined FUN_141e16310(void)

undefined1 * FUN_141e16310(undefined1 *param_1)

{
  undefined1 uVar1;
  
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0x70))();
    *param_1 = uVar1;
    return param_1;
  }
  *param_1 = 1;
  return param_1;
}



// FUNCTION 141e16350 FUN_141e16350 body=540 status=ok
// SIG undefined FUN_141e16350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e16350(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined1 *param_10,int param_11)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  int local_b8;
  undefined4 *local_b0;
  longlong local_a8 [2];
  undefined1 *local_98 [2];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = param_9;
  local_98[0] = param_10;
  local_b8 = param_11;
  *param_10 = 0;
  if ((((-1 < param_11) && (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xf0))(), cVar1 != '\0')) &&
     (cVar1 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0x10))(), cVar1 != '\0')) {
    local_a8[0] = 0;
    local_a8[1] = 0;
    (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0x28))
              (*(longlong **)(DAT_146b17150 + 0xac8),local_a8,2);
    local_c8 = &local_78;
    uVar2 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0x60))
                      (*(longlong **)(DAT_146b17150 + 0xac8),
                       *(undefined4 *)(local_a8[0] + (longlong)local_b8 * 4),local_88,param_1);
    *local_98[0] = uVar2;
    puVar3 = (undefined8 *)FQuat::Rotator(local_88,local_98);
    *param_2 = *puVar3;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar3 + 1);
    *param_3 = local_78;
    *param_4 = local_74;
    *param_5 = local_70;
    *param_6 = local_6c;
    *param_7 = local_60;
    *param_8 = local_68;
    *local_b0 = local_64;
    if (local_a8[0] == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  *param_1 = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
  *param_2 = DAT_1468b5da0;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5da8;
  *param_6 = 0;
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  *param_8 = 0;
  *local_b0 = 0;
  *param_7 = 0;
  return;
}



// FUNCTION 141e16570 FUN_141e16570 body=72 status=ok
// SIG undefined FUN_141e16570(void)

undefined1 FUN_141e16570(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar5 = &DAT_146aaf2d0;
  uVar3 = 0;
  iVar4 = 0;
  do {
    uVar2 = 0;
    plVar1 = plVar5;
    do {
      if (*plVar1 == *(longlong *)(param_1 + 0x6f8)) {
        uVar3 = (undefined1)iVar4;
        break;
      }
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar2 < 2);
    iVar4 = iVar4 + 1;
    plVar5 = plVar5 + 2;
    if (0x10 < iVar4) {
      return uVar3;
    }
  } while( true );
}



// FUNCTION 141e165c0 FUN_141e165c0 body=87 status=ok
// SIG undefined FUN_141e165c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141e165c0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = uRam00000001468b5b78;
  plVar1 = *(longlong **)(DAT_146b17150 + 0xac8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1,param_1);
    return param_1;
  }
  *param_1 = _DAT_1468b5b70;
  param_1[1] = uVar2;
  uVar2 = uRam00000001468b5b88;
  param_1[2] = _DAT_1468b5b80;
  param_1[3] = uVar2;
  uVar2 = uRam00000001468b5b98;
  param_1[4] = _DAT_1468b5b90;
  param_1[5] = uVar2;
  return param_1;
}



// FUNCTION 141e16620 FUN_141e16620 body=123 status=ok
// SIG undefined FUN_141e16620(void)

void FUN_141e16620(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x188))(plVar2);
      *param_1 = uVar1;
      uVar1 = (**(code **)(*plVar2 + 400))(plVar2);
      *param_2 = uVar1;
      return;
    }
  }
  *param_2 = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 141e166a0 FUN_141e166a0 body=52 status=ok
// SIG undefined FUN_141e166a0(void)

undefined4 FUN_141e166a0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = UWorld::GetWorldSettings(uVar1,0,1);
    return *(undefined4 *)(lVar2 + 0x588);
  }
  return 0;
}



// FUNCTION 141e16740 FUN_141e16740 body=105 status=ok
// SIG undefined FUN_141e16740(void)

void FUN_141e16740(longlong *param_1)

{
  wchar_t *_Str;
  double dVar1;
  float fVar2;
  
  if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0xac8) != 0)) {
    fVar2 = 0.0;
    if (0 < (int)param_1[1]) {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)*param_1;
      }
      dVar1 = _wtof(_Str);
      fVar2 = (float)dVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000141e1679d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0x98))
              (*(longlong **)(DAT_146b17150 + 0xac8),fVar2);
    return;
  }
  return;
}



// FUNCTION 141e167b0 FUN_141e167b0 body=105 status=ok
// SIG undefined FUN_141e167b0(void)

void FUN_141e167b0(longlong *param_1)

{
  wchar_t *_Str;
  double dVar1;
  float fVar2;
  
  if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0xac8) != 0)) {
    fVar2 = 0.0;
    if (0 < (int)param_1[1]) {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)*param_1;
      }
      dVar1 = _wtof(_Str);
      fVar2 = (float)dVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000141e1680d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xa0))
              (*(longlong **)(DAT_146b17150 + 0xac8),fVar2);
    return;
  }
  return;
}



// FUNCTION 141e16850 FUN_141e16850 body=273 status=ok
// SIG undefined FUN_141e16850(void)

void FUN_141e16850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  wchar_t *pwVar8;
  undefined *puVar9;
  
  if ((DAT_146b17150 != 0) &&
     (plVar3 = *(longlong **)(DAT_146b17150 + 0xac8), plVar3 != (longlong *)0x0)) {
    plVar4 = *(longlong **)(DAT_146b17150 + 0xad0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    cVar6 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (cVar6 == '\0') {
      pwVar8 = L"not supported";
    }
    else {
      cVar6 = (**(code **)(*plVar3 + 0x20))(plVar3);
      pwVar8 = L"lost";
      if (cVar6 != '\0') {
        pwVar8 = L"active";
      }
    }
    uVar7 = (**(code **)(*plVar3 + 0x30))(plVar3,2);
    cVar6 = (**(code **)(*plVar3 + 0xf0))(plVar3);
    puVar9 = &DAT_144e8ea14;
    if (cVar6 != '\0') {
      puVar9 = &DAT_144e91670;
    }
    FOutputDevice::LogfImpl
              (param_3,
               L"Position tracking status: %s\nHead tracking allowed: %s\nNumber of tracking sensors: %d"
               ,pwVar8,puVar9,uVar7);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141e16990 FUN_141e16990 body=91 status=ok
// SIG undefined FUN_141e16990(void)

void FUN_141e16990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  if ((DAT_146b17150 != 0) &&
     (plVar1 = *(longlong **)(DAT_146b17150 + 0xac8), plVar1 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar2;
    }
    FOutputDevice::Log(param_3,puVar3);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141e169f0 FUN_141e169f0 body=68 status=ok
// SIG undefined FUN_141e169f0(void)

ulonglong FUN_141e169f0(void)

{
  ulonglong uVar1;
  
  uVar1 = DAT_146b17150;
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xf0))();
    if ((char)uVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141e16a29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0x20))();
      return uVar1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141e16a40 InitRHI body=47 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
          ::CreateRHI(local_res8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,uVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141e16a70 FUN_141e16a70 body=83 status=ok
// SIG undefined FUN_141e16a70(void)

void FUN_141e16a70(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_142340f20();
  lVar2 = *(longlong *)(param_1 + 0x120);
  if ((lVar2 == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
    return;
  }
  cVar1 = UWorld::IsGameWorld(lVar2);
  if (cVar1 == '\0') {
    return;
  }
  FMotionDelayService::RegisterDelayTarget
            (param_1,*(undefined4 *)(param_1 + 0x6f0),*(undefined8 *)(param_1 + 0x6f8));
  return;
}



// FUNCTION 141e16ad0 FUN_141e16ad0 body=39 status=ok
// SIG undefined FUN_141e16ad0(void)

void FUN_141e16ad0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144e92670;
    return;
  }
  return;
}



// FUNCTION 141e16b30 FUN_141e16b30 body=92 status=ok
// SIG undefined FUN_141e16b30(void)

ulonglong FUN_141e16b30(ulonglong *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined1 local_res10 [24];
  
  plVar1 = *(longlong **)(DAT_146b17150 + 0xac8);
  uVar3 = DAT_146b17150;
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (ulonglong *)(**(code **)*plVar1)(plVar1,local_res10);
    uVar3 = *param_1;
    if (*puVar2 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x000141e16b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x38))(plVar1,(int)param_1[1]);
      return uVar3;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141e16b90 FUN_141e16b90 body=87 status=ok
// SIG undefined FUN_141e16b90(void)

undefined8 FUN_141e16b90(void)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    lVar2 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    if (lVar2 != 0) {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
      cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141e16bf0 FUN_141e16bf0 body=50 status=ok
// SIG undefined FUN_141e16bf0(void)

undefined8 FUN_141e16bf0(void)

{
  char cVar1;
  
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xf0))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141e16c30 FUN_141e16c30 body=332 status=ok
// SIG undefined FUN_141e16c30(void)

undefined8 FUN_141e16c30(undefined4 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *local_18;
  int local_10;
  
  uVar5 = 0;
  if (param_2 == DAT_146aaf2c8) {
    plVar1 = *(longlong **)(DAT_146b17150 + 0xac8);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e16c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*plVar1 + 0x38))(plVar1,0);
      return uVar5;
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_14685ee08) &&
       (_Init_thread_header(&DAT_14685ee08), DAT_14685ee08 == -1)) {
      FName::FName(&DAT_14685ee00,L"MotionController",1);
      _Init_thread_footer(&DAT_14685ee08);
    }
    uVar3 = DAT_14685ee00;
    uVar6 = FUN_141593110();
    IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>(uVar6,&local_18,uVar3);
    plVar1 = local_18 + local_10;
    for (plVar7 = local_18; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      plVar2 = (longlong *)*plVar7;
      if ((plVar2 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2), cVar4 != '\0')) {
        uVar5 = 1;
        break;
      }
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return uVar5;
}



// FUNCTION 141e16d80 FUN_141e16d80 body=137 status=ok
// SIG undefined FUN_141e16d80(void)

bool FUN_141e16d80(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aaf4a8) {
    _Init_thread_header(&DAT_146aaf4a8);
    if (DAT_146aaf4a8 == -1) {
      FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
      _Init_thread_footer(&DAT_146aaf4a8);
    }
  }
  uVar1 = DAT_146aaf4a0;
  plVar3 = (longlong *)FUN_141593110();
  iVar2 = (**(code **)(*plVar3 + 8))(plVar3,uVar1);
  return 0 < iVar2;
}



// FUNCTION 141e16e10 FUN_141e16e10 body=431 status=ok
// SIG undefined FUN_141e16e10(void)

undefined8 FUN_141e16e10(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int *piVar8;
  longlong *plVar9;
  undefined1 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  if (param_1 == 0) {
    return 0;
  }
  plVar12 = &DAT_146aaf2d0;
  bVar2 = false;
  uVar10 = 0x10;
  plVar9 = (longlong *)0x0;
  uVar1 = *(undefined4 *)(param_1 + 0x6f0);
  plVar4 = plVar9;
  plVar13 = plVar12;
  plVar11 = plVar9;
LAB_141e16e55:
  do {
    if (*plVar12 == *(longlong *)(param_1 + 0x6f8)) {
      uVar10 = SUB81(plVar11,0);
      bVar2 = true;
    }
    else {
      uVar7 = (int)plVar4 + 1;
      plVar12 = plVar12 + 1;
      plVar4 = (longlong *)(ulonglong)uVar7;
      if (uVar7 < 2) goto LAB_141e16e55;
    }
    uVar7 = (int)plVar11 + 1;
    plVar11 = (longlong *)(ulonglong)uVar7;
    plVar12 = plVar13 + 2;
    plVar4 = plVar9;
    plVar13 = plVar12;
    if (0x10 < (int)uVar7) {
      if (bVar2) {
        piVar8 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
        if ((*piVar8 < DAT_146aaf4a8) && (_Init_thread_header(&DAT_146aaf4a8), DAT_146aaf4a8 == -1))
        {
          FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
          _Init_thread_footer(&DAT_146aaf4a8);
        }
        uVar6 = DAT_146aaf4a0;
        plVar4 = (longlong *)FUN_141593110();
        iVar3 = (**(code **)(*plVar4 + 8))(plVar4,uVar6);
        if (0 < iVar3) {
          if ((*piVar8 < DAT_146aaf4a8) &&
             (_Init_thread_header(&DAT_146aaf4a8), DAT_146aaf4a8 == -1)) {
            FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
            _Init_thread_footer(&DAT_146aaf4a8);
          }
          uVar6 = DAT_146aaf4a0;
          plVar4 = (longlong *)FUN_141593110();
          lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,uVar6,0);
          if (lVar5 != 0) {
            plVar9 = (longlong *)(lVar5 + -8);
          }
          uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9,uVar1,uVar10);
          return uVar6;
        }
      }
      return 1;
    }
  } while( true );
}



// FUNCTION 141e16fc0 FUN_141e16fc0 body=334 status=ok
// SIG undefined FUN_141e16fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141e16fc0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146aaf4a8) {
    _Init_thread_header(&DAT_146aaf4a8);
    if (DAT_146aaf4a8 == -1) {
      FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
      _Init_thread_footer(&DAT_146aaf4a8);
    }
  }
  uVar4 = DAT_146aaf4a0;
  plVar2 = (longlong *)FUN_141593110();
  iVar1 = (**(code **)(*plVar2 + 8))(plVar2,uVar4);
  if (iVar1 < 1) {
    uVar4 = 1;
  }
  else {
    if (*piVar5 < DAT_146aaf4a8) {
      _Init_thread_header(&DAT_146aaf4a8);
      if (DAT_146aaf4a8 == -1) {
        FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
        _Init_thread_footer(&DAT_146aaf4a8);
      }
    }
    uVar4 = DAT_146aaf4a0;
    plVar2 = (longlong *)FUN_141593110();
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,uVar4,0);
    if (lVar3 == 0) {
      uVar4 = (**(code **)(_DAT_00000000 + 0x18))(0,param_1,param_2);
    }
    else {
      uVar4 = (**(code **)(*(longlong *)(lVar3 + -8) + 0x18))
                        ((longlong *)(lVar3 + -8),param_1,param_2);
    }
  }
  return uVar4;
}



// FUNCTION 141e17110 FUN_141e17110 body=405 status=ok
// SIG undefined FUN_141e17110(void)

undefined8 FUN_141e17110(undefined4 param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  bVar1 = false;
  plVar11 = &DAT_146aaf2d0;
  plVar7 = (longlong *)0x0;
  uVar9 = 0x10;
  plVar3 = plVar7;
  plVar12 = plVar11;
  plVar10 = plVar7;
LAB_141e17140:
  do {
    if (*plVar11 == param_2) {
      uVar9 = SUB81(plVar10,0);
      bVar1 = true;
    }
    else {
      uVar8 = (int)plVar3 + 1;
      plVar11 = plVar11 + 1;
      plVar3 = (longlong *)(ulonglong)uVar8;
      if (uVar8 < 2) goto LAB_141e17140;
    }
    uVar8 = (int)plVar10 + 1;
    plVar10 = (longlong *)(ulonglong)uVar8;
    plVar11 = plVar12 + 2;
    plVar3 = plVar7;
    plVar12 = plVar11;
    if (0x10 < (int)uVar8) {
      if (bVar1) {
        piVar6 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
        if ((*piVar6 < DAT_146aaf4a8) && (_Init_thread_header(&DAT_146aaf4a8), DAT_146aaf4a8 == -1))
        {
          FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
          _Init_thread_footer(&DAT_146aaf4a8);
        }
        uVar5 = DAT_146aaf4a0;
        plVar3 = (longlong *)FUN_141593110();
        iVar2 = (**(code **)(*plVar3 + 8))(plVar3,uVar5);
        if (0 < iVar2) {
          if ((*piVar6 < DAT_146aaf4a8) &&
             (_Init_thread_header(&DAT_146aaf4a8), DAT_146aaf4a8 == -1)) {
            FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
            _Init_thread_footer(&DAT_146aaf4a8);
          }
          uVar5 = DAT_146aaf4a0;
          plVar3 = (longlong *)FUN_141593110();
          lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar5,0);
          if (lVar4 != 0) {
            plVar7 = (longlong *)(lVar4 + -8);
          }
          uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7,param_1,uVar9);
          return uVar5;
        }
      }
      return 1;
    }
  } while( true );
}



// FUNCTION 141e172b0 FUN_141e172b0 body=73 status=ok
// SIG undefined FUN_141e172b0(void)

bool FUN_141e172b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1);
      return lVar2 != 0;
    }
  }
  return false;
}



// FUNCTION 141e17300 FUN_141e17300 body=49 status=ok
// SIG undefined FUN_141e17300(void)

void FUN_141e17300(longlong param_1)

{
  longlong *plVar1;
  
  FUN_142393140();
  plVar1 = *(longlong **)(param_1 + 0x790);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e17324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 141e17340 FUN_141e17340 body=164 status=ok
// SIG undefined FUN_141e17340(void)

void FUN_141e17340(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((param_2 == *(longlong **)(param_1 + 0x790)) || (*(char *)(param_1 + 0x798) == '\x01')) {
    if (param_2 != (longlong *)0x0) {
      iVar2 = *(int *)(param_1 + 0x720);
      iVar1 = (**(code **)(*param_2 + 0x6c8))(param_2);
      uVar3 = 0;
      if (iVar1 <= iVar2) {
        iVar2 = iVar1;
      }
      uVar4 = uVar3;
      if (0 < iVar2) {
        do {
          (**(code **)(*param_2 + 0x568))
                    (param_2,uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x718) + uVar3 * 8));
          uVar3 = uVar3 + 1;
          uVar4 = (ulonglong)((int)uVar4 + 1);
        } while ((longlong)uVar3 < (longlong)iVar2);
      }
    }
    *(undefined1 *)(param_1 + 0x798) = 3;
  }
  return;
}



// FUNCTION 141e173f0 FUN_141e173f0 body=45 status=ok
// SIG undefined FUN_141e173f0(void)

void FUN_141e173f0(longlong param_1)

{
  FUN_1423937b0();
  if (*(longlong *)(param_1 + 0x790) == 0) {
    FUN_141e17ed0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 141e17420 FUN_141e17420 body=1215 status=ok
// SIG undefined FUN_141e17420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e17420(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [8];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_142343b00();
  local_38 = &LAB_141e16980;
  uStack_30 = 0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af550,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1464af558;
    lVar3 = (longlong)DAT_1464af558;
    DAT_1464af558 = DAT_1464af558 + 1;
    if (DAT_1464af55c < DAT_1464af558) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af550,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + _DAT_1464af550);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  uStack_30 = 0;
  local_38 = &LAB_141e16970;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af568,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1464af570;
    lVar3 = (longlong)DAT_1464af570;
    DAT_1464af570 = DAT_1464af570 + 1;
    if (DAT_1464af574 < DAT_1464af570) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af568,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + _DAT_1464af568);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  uStack_30 = 0;
  local_38 = &LAB_141e16710;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af580,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1464af588;
    lVar3 = (longlong)DAT_1464af588;
    DAT_1464af588 = DAT_1464af588 + 1;
    if (DAT_1464af58c < DAT_1464af588) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af580,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + _DAT_1464af580);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  uStack_30 = 0;
  local_38 = &LAB_141e166f0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af598,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1464af5a0;
    lVar3 = (longlong)DAT_1464af5a0;
    DAT_1464af5a0 = DAT_1464af5a0 + 1;
    if (DAT_1464af5a4 < DAT_1464af5a0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af598,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + _DAT_1464af598);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  uStack_30 = 0;
  local_38 = &LAB_141e16720;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af5b0,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1464af5b8;
    lVar3 = (longlong)DAT_1464af5b8;
    DAT_1464af5b8 = DAT_1464af5b8 + 1;
    if (DAT_1464af5bc < DAT_1464af5b8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af5b0,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + _DAT_1464af5b0);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  uStack_30 = 0;
  local_38 = &LAB_141e166e0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af5c8,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1464af5d0;
    lVar3 = (longlong)DAT_1464af5d0;
    DAT_1464af5d0 = DAT_1464af5d0 + 1;
    if (DAT_1464af5d4 < DAT_1464af5d0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af5c8,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + _DAT_1464af5c8);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  local_38 = &LAB_141e16700;
  uStack_30 = 0;
  FUN_141e10040(&DAT_1464af5e0,local_res10,param_1,&local_38);
  local_38 = &LAB_141e16730;
  uStack_30 = 0;
  FUN_141e10040(&DAT_1464af5f8,local_res10,param_1,&local_38);
  local_38 = &LAB_141e1a6e0;
  uStack_30 = 0;
  FUN_141e10040(&DAT_1464af610,local_res10,param_1,&local_38);
  return;
}



// FUNCTION 141e178e0 OnUnregister body=154 status=ok
// SIG undefined OnUnregister(void)

void UVRNotificationsComponent::OnUnregister(undefined8 param_1)

{
  FUN_142344780();
  FUN_140483870(&DAT_1464af550,param_1);
  FUN_140483870(&DAT_1464af568,param_1);
  FUN_140483870(&DAT_1464af580,param_1);
  FUN_140483870(&DAT_1464af598,param_1);
  FUN_140483870(&DAT_1464af5b0,param_1);
  FUN_140483870(&DAT_1464af5c8,param_1);
  FUN_140483870(&DAT_1464af5e0,param_1);
  FUN_140483870(&DAT_1464af5f8,param_1);
  FUN_140483870(&DAT_1464af610,param_1);
  return;
}



// FUNCTION 141e17980 FUN_141e17980 body=729 status=ok
// SIG undefined FUN_141e17980(void)

undefined8 FUN_141e17980(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  char extraout_AL;
  char cVar4;
  undefined1 uVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *local_48;
  int local_40;
  undefined1 local_38 [32];
  
  FUN_1415ad720(&DAT_1468e2448);
  if ((extraout_AL == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    bVar2 = false;
    if (DVar6 == DAT_1468c21c0) goto LAB_141e179c6;
  }
  else {
LAB_141e179c6:
    bVar2 = true;
  }
  if (bVar2) {
    plVar10 = *(longlong **)(param_1 + 0x118);
    if (plVar10 != (longlong *)0x0) {
      lVar7 = FUN_1429d7ab0();
      if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        cVar4 = (**(code **)(*plVar10 + 0x778))(plVar10);
        *(char *)(param_1 + 0x731) = cVar4;
        goto LAB_141e17a43;
      }
    }
    cVar4 = (char)plVar10[0x25] == '\x03';
    *(char *)(param_1 + 0x731) = cVar4;
  }
  else {
    cVar4 = *(char *)(param_1 + 0x731);
  }
LAB_141e17a43:
  if (cVar4 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_14685ee08) &&
       (_Init_thread_header(&DAT_14685ee08), DAT_14685ee08 == -1)) {
      FName::FName(&DAT_14685ee00,L"MotionController",1);
      _Init_thread_footer(&DAT_14685ee08);
    }
    uVar3 = DAT_14685ee00;
    uVar8 = FUN_141593110();
    IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>(uVar8,&local_48,uVar3);
    for (plVar10 = local_48; plVar10 != local_48 + local_40; plVar10 = plVar10 + 1) {
      plVar1 = (longlong *)*plVar10;
      if (plVar1 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar1 + 0x18))
                          (plVar1,*(undefined4 *)(param_1 + 0x6f0),*(undefined8 *)(param_1 + 0x6f8))
        ;
        *(undefined1 *)(param_1 + 0x704) = uVar5;
        cVar4 = (**(code **)(*plVar1 + 0x10))
                          (plVar1,*(undefined4 *)(param_1 + 0x6f0),*(undefined8 *)(param_1 + 0x6f8),
                           param_3,param_2,param_4);
        if (cVar4 != '\0') {
          cVar4 = FUN_1415ad720(&DAT_1468e2448);
          if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
            DVar6 = GetCurrentThreadId();
            bVar2 = false;
            if (DVar6 == DAT_1468c21c0) goto LAB_141e17bb6;
          }
          else {
LAB_141e17bb6:
            bVar2 = true;
          }
          if (bVar2) {
            *(longlong **)(param_1 + 0x728) = plVar1;
            FUN_141e1bca0(param_1);
            *(undefined8 *)(param_1 + 0x728) = 0;
          }
          goto LAB_141e17b7a;
        }
      }
    }
    if (((*(longlong *)(param_1 + 0x6f8) == DAT_146aaf2c8) &&
        (plVar10 = *(longlong **)(DAT_146b17150 + 0xac8), plVar10 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*plVar10 + 0x50))(plVar10,0,local_38,param_2), cVar4 != '\0')) {
      puVar9 = (undefined8 *)FQuat::Rotator(local_38,&local_48);
      *param_3 = *puVar9;
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar9 + 1);
LAB_141e17b7a:
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
      return 1;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return 0;
}



// FUNCTION 141e17c80 PostRender_RenderThread body=96 status=ok
// SIG undefined PostRender_RenderThread(void)

void FLateUpdateManager::PostRender_RenderThread(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = ((longlong)*(int *)(param_1 + 0x98) + 7) * 0x10 + param_1;
  *(undefined4 *)(lVar2 + 8) = 0;
  if (0x7fffffff < *(uint *)(lVar2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar2,0);
  }
  *(undefined1 *)((longlong)*(int *)(param_1 + 0x98) + 0x90 + param_1) = 0;
  uVar1 = *(int *)(param_1 + 0x98) + 1U & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  *(uint *)(param_1 + 0x98) = uVar1;
  return;
}



// FUNCTION 141e17ce0 FUN_141e17ce0 body=483 status=ok
// SIG undefined FUN_141e17ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e17ce0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  BOOL BVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 local_a8 [12];
  undefined1 local_98 [16];
  undefined8 local_88;
  longlong lStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    local_38 = _DAT_146aaf060 & _DAT_146aaf070;
    uStack_34 = uRam0000000146aaf064 & uRam0000000146aaf074;
    uStack_30 = uRam0000000146aaf068 & uRam0000000146aaf078;
    uStack_2c = uRam0000000146aaf06c & uRam0000000146aaf07c;
    local_88 = 0;
    lStack_80 = (ulonglong)uRam0000000146aaf06c << 0x20;
    local_78 = ZEXT816(0);
    local_68._4_4_ = uStack_34;
    local_68._0_4_ = local_38;
    local_68._8_4_ = uStack_30;
    local_68._12_4_ = uStack_2c;
    local_58 = 0;
    lStack_50 = (ulonglong)uRam0000000146aaf06c << 0x20;
    local_48 = 0;
    uStack_40 = 0;
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aaf250);
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aaf250);
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
      plVar2 = (longlong *)*param_3;
      for (plVar6 = plVar2; plVar6 != plVar2 + (int)param_3[1]; plVar6 = plVar6 + 1) {
        lVar3 = *plVar6;
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0x358) == *(int *)(lVar1 + 0x6f0))) {
          fVar7 = *(float *)(lVar3 + 0x93c);
          if (0.0 <= fVar7) goto LAB_141e17dba;
          break;
        }
      }
      fVar7 = *(float *)(*plVar2 + 0x93c);
LAB_141e17dba:
      cVar4 = FUN_141e17980(lVar1,local_a8,local_98,fVar7);
      if (cVar4 != '\0') {
        lVar1 = *(longlong *)(param_1 + 0x18);
        local_58 = *(undefined8 *)(lVar1 + 0x740);
        lStack_50 = *(undefined8 *)(lVar1 + 0x748);
        local_48 = *(undefined8 *)(lVar1 + 0x750);
        uStack_40 = *(undefined8 *)(lVar1 + 0x758);
        local_38 = *(undefined4 *)(lVar1 + 0x760);
        uStack_34 = *(undefined4 *)(lVar1 + 0x764);
        uStack_30 = *(undefined4 *)(lVar1 + 0x768);
        uStack_2c = *(undefined4 *)(lVar1 + 0x76c);
        FRotator::Quaternion(local_98,&local_28);
        local_68._12_4_ = 0;
        local_68._0_12_ = *(undefined1 (*) [12])(lVar1 + 0x770);
        local_88 = local_28;
        lStack_80 = uStack_20;
        local_78._12_4_ = 0;
        local_78._0_12_ = local_a8;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aaf250);
        FUN_141e11f40(param_1 + 0x20,param_3[4],&local_58,&local_88);
        return;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aaf250);
  }
  return;
}



// FUNCTION 141e17ed0 FUN_141e17ed0 body=1394 status=ok
// SIG undefined FUN_141e17ed0(void)

void FUN_141e17ed0(longlong param_1,char param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 local_res8;
  longlong *local_res18;
  undefined1 local_res20 [8];
  uint in_stack_ffffffffffffff38;
  undefined1 local_98 [8];
  longlong *local_90;
  int local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 **local_68;
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  int iStack_48;
  undefined4 uStack_44;
  
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    return;
  }
  plVar16 = (longlong *)0x0;
  local_80 = (undefined8 *)0x0;
  local_68 = &local_80;
  local_78 = 0;
  local_70 = param_1;
  if (param_2 != '\0') {
    FUN_141e111d0(&local_70);
  }
  if (*(char *)(param_1 + 0x705) == '\0') {
    if (*(longlong *)(param_1 + 0x790) != 0) {
      FUN_142397540(*(longlong *)(param_1 + 0x790),1);
    }
    goto LAB_141e18413;
  }
  if (*(longlong *)(param_1 + 0x708) == DAT_146aaf290) {
    if ((*(longlong *)(param_1 + 0x790) == 0) ||
       (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x790) + 0x10), lVar3 = FUN_142a232e0(),
       lVar9 != lVar3)) {
      FUN_141e111d0(&local_70);
      uVar4 = FUN_142a232e0();
      puVar5 = (undefined8 *)FName::FName(&local_res8,L"MotionControllerMesh",1);
      FUN_141791c20(&local_res18,param_1,uVar4,*puVar5);
      plVar6 = local_res18;
      local_res8 = 0;
      if (local_res18 == (longlong *)0x0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar4 = FUN_142a232e0();
      plVar6 = (longlong *)FUN_1417985e0(uVar4,param_1,plVar6,0x100008,0,0,0,0,0);
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x790);
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(longlong *)(param_1 + 0x710) != 0) {
        (**(code **)(*plVar6 + 0x928))(plVar6);
      }
      goto LAB_141e182f6;
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_141e15af0(&local_res8);
    uVar4 = FUN_141593110();
    IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>(uVar4,&local_60,*puVar5);
    local_res18 = local_60 + local_58;
    plVar6 = plVar16;
    plVar15 = local_60;
    if (local_60 != local_res18) {
      do {
        plVar1 = (longlong *)*plVar15;
        if (((*(int *)(param_1 + 0x708) == 0) && (*(int *)(param_1 + 0x70c) == 0)) ||
           (plVar7 = (longlong *)(**(code **)*plVar1)(plVar1,local_res20),
           *plVar7 == *(longlong *)(param_1 + 0x708))) {
          plVar7 = plVar16;
          if (*(longlong *)(param_1 + 0x6f8) != DAT_146aaf2c8) {
            bVar2 = false;
            plVar14 = &DAT_146aaf2d0;
            plVar8 = plVar14;
            plVar13 = plVar16;
LAB_141e180f0:
            do {
              if (*plVar14 == *(longlong *)(param_1 + 0x6f8)) {
                uVar12 = SUB81(plVar13,0);
                bVar2 = true;
                local_res8 = CONCAT71(local_res8._1_7_,uVar12);
              }
              else {
                uVar10 = (int)plVar7 + 1;
                plVar14 = plVar14 + 1;
                plVar7 = (longlong *)(ulonglong)uVar10;
                if (uVar10 < 2) goto LAB_141e180f0;
                uVar12 = (undefined1)local_res8;
              }
              uVar10 = (int)plVar13 + 1;
              plVar13 = (longlong *)(ulonglong)uVar10;
              plVar14 = plVar8 + 2;
              plVar7 = plVar16;
              plVar8 = plVar14;
            } while ((int)uVar10 < 0x11);
            if (!bVar2) break;
            uVar10 = (**(code **)(*plVar1 + 0x10))(plVar1,uVar12);
            plVar7 = (longlong *)(ulonglong)uVar10;
          }
          iVar11 = (int)plVar7;
          if (((*(longlong *)(param_1 + 0x790) != 0) && (plVar1 != (longlong *)0x0)) &&
             ((plVar8 = (longlong *)(**(code **)*plVar1)(plVar1,local_98),
              *plVar8 == *(longlong *)(param_1 + 0x7a0) && (*(int *)(param_1 + 0x7a8) == iVar11))))
          break;
          *(undefined1 *)(param_1 + 0x798) = 1;
          local_50 = FUN_141e17340;
          iStack_48 = 0;
          local_90 = (longlong *)0x0;
          local_88 = 0;
          plVar6 = (longlong *)FMemory::Realloc(0,0x30);
          local_88 = 3;
          local_90 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            *plVar6 = (longlong)&PTR_FUN_143fcfec0;
            FWeakObjectPtr::operator=(plVar6 + 1,param_1);
            *(undefined4 *)(plVar6 + 2) = (undefined4)local_50;
            *(undefined4 *)((longlong)plVar6 + 0x14) = local_50._4_4_;
            *(int *)(plVar6 + 3) = iStack_48;
            *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_44;
            lVar9 = FDelegateHandle::GenerateNewID();
            plVar6[5] = lVar9;
            *plVar6 = (longlong)&PTR_FUN_143fcff08;
          }
          in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffff00;
          plVar6 = (longlong *)
                   (**(code **)(*plVar1 + 0x18))
                             (plVar1,plVar7,*(undefined8 *)(param_1 + 0x118),0x100008,
                              in_stack_ffffffffffffff38,&local_90);
          if (plVar6 != (longlong *)0x0) {
            if (*(char *)(param_1 + 0x798) != '\x03') {
              *(undefined1 *)(param_1 + 0x798) = 2;
            }
            FUN_141e111d0(&local_70);
            (**(code **)*plVar1)(plVar1,&local_50);
            *(undefined4 *)(param_1 + 0x7a0) = (undefined4)local_50;
            *(undefined4 *)(param_1 + 0x7a4) = local_50._4_4_;
            *(int *)(param_1 + 0x7a8) = iVar11;
            *(undefined4 *)(param_1 + 0x7ac) = uStack_44;
            iStack_48 = iVar11;
            if (local_88 != 0) {
              if (local_90 == (longlong *)0x0) break;
              (**(code **)(*local_90 + 0x28))(local_90,0);
              if (local_90 != (longlong *)0x0) {
                local_90 = (longlong *)FMemory::Realloc(local_90,0,0);
              }
              local_88 = 0;
            }
            if (local_90 != (longlong *)0x0) {
              FMemory::Free(local_90);
            }
            break;
          }
          *(undefined1 *)(param_1 + 0x798) = 0;
          if (local_88 != 0) {
            if (local_90 == (longlong *)0x0) goto LAB_141e18255;
            (**(code **)(*local_90 + 0x28))(local_90,0);
            if (local_90 != (longlong *)0x0) {
              local_90 = (longlong *)FMemory::Realloc(local_90,0);
            }
            local_88 = 0;
          }
          if (local_90 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
LAB_141e18255:
        plVar15 = plVar15 + 1;
      } while (plVar15 != local_res18);
    }
    if (local_60 != (longlong *)0x0) {
      FMemory::Free();
    }
LAB_141e182f6:
    if ((plVar6 != (longlong *)0x0) && (plVar6 != *(longlong **)(param_1 + 0x790))) {
      local_res8 = 0;
      FUN_142399e30(plVar6,param_1,0);
      (**(code **)(*plVar6 + 0x638))(plVar6,0);
      FUN_14234b150(plVar6);
      plVar15 = (longlong *)
                ((ulonglong)((longlong)(local_80 + (int)local_78) + (7 - (longlong)local_80)) >> 3);
      if (local_80 + (int)local_78 < local_80) {
        plVar15 = plVar16;
      }
      if (plVar15 != (longlong *)0x0) {
        local_res8 = 0;
        puVar5 = local_80;
        do {
          FUN_142399e30(*puVar5,plVar6,0);
          plVar16 = (longlong *)((longlong)plVar16 + 1);
          puVar5 = puVar5 + 1;
        } while (plVar16 != plVar15);
      }
      *(longlong **)(param_1 + 0x790) = plVar6;
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x790);
  if (lVar9 != 0) {
    if (*(char *)(param_1 + 0x798) != '\x02') {
      FUN_141e17340(param_1,lVar9);
      lVar9 = *(longlong *)(param_1 + 0x790);
    }
    FUN_142397540(lVar9,*(byte *)(param_1 + 0x24c) >> 6 & 1,1);
    FUN_142398ec0(*(undefined8 *)(param_1 + 0x790),*(byte *)(param_1 + 0x24c) >> 5 & 1,1);
  }
LAB_141e18413:
  if (local_80 != (undefined8 *)0x0) {
    FMemory::Free(local_80);
  }
  return;
}



// FUNCTION 141e18450 RefreshMotionSources body=1285 status=ok
// SIG undefined RefreshMotionSources(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MotionDelayService_Impl::RefreshMotionSources(void)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  uint *puVar14;
  int iVar15;
  byte bVar16;
  int local_res8;
  int local_resc;
  ulonglong local_res10;
  int *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  int iStack_c4;
  uint uStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  int local_b0;
  uint uStack_ac;
  undefined *puStack_a8;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  longlong *local_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  uint uStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  
  local_e8 = (int *)0x0;
  local_e0 = 0;
  if (0 < DAT_1464c5468 - _DAT_1464c5494) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
  }
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 1;
  iStack_c4 = 0;
  uStack_c0 = 0;
  iVar15 = (int)DAT_1464c5488;
  if (iVar15 != 0) {
    puVar14 = DAT_1464c5480;
    if (DAT_1464c5480 == (uint *)0x0) {
      puVar14 = (uint *)&DAT_1464c5470;
    }
    uVar1 = *puVar14;
    local_d8._0_4_ = 0;
    while (uVar1 == 0) {
      lVar10 = (longlong)(int)local_d8;
      uStack_c0 = uStack_c0 + 0x20;
      iVar7 = (int)local_d8 + 1;
      bVar2 = (int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_d8;
      iStack_c4 = iVar15;
      local_d8._0_4_ = iVar7;
      if (bVar2) goto LAB_141e18551;
      uVar1 = puVar14[lVar10 + 1];
    }
    local_d8._4_4_ = -uVar1 & uVar1;
    iVar7 = 0x1f;
    if (local_d8._4_4_ != 0) {
      for (; local_d8._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (local_d8._4_4_ == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_c4 = (uStack_c0 - iVar7) + 0x1f;
    if (iVar15 < iStack_c4) {
      iStack_c4 = iVar15;
    }
  }
LAB_141e18551:
  iVar7 = iStack_c4;
  uStack_cc = local_d8._4_4_;
  iStack_d0 = (int)local_d8;
  uStack_78 = CONCAT44(iStack_c4,0xffffffff);
  local_b8 = CONCAT44(iStack_bc,uStack_c0);
  local_90 = &DAT_1464c5460;
  uStack_88._0_4_ = (int)local_d8;
  uStack_88._4_4_ = local_d8._4_4_;
  puStack_80 = &DAT_1464c5470;
  local_a0 = -1 << ((byte)DAT_1464c5488 & 0x1f);
  local_d8 = &DAT_1464c5460;
  local_c8 = 0x464c5470;
  iStack_c4 = 1;
  uStack_c0 = 0xffffffff;
  iStack_bc = iVar7;
  iStack_9c = iVar15;
  uStack_70 = local_b8;
  while (((uVar4 = local_e0, iStack_bc != iVar15 ||
          ((undefined *)CONCAT44(iStack_c4,local_c8) != &DAT_1464c5470)) ||
         (local_d8 != &DAT_1464c5460))) {
    lVar10 = (longlong)(int)local_e0;
    piVar11 = (int *)((longlong)iStack_bc * 0x30 + *local_d8);
    iVar7 = (int)local_e0 + 1;
    local_e0 = CONCAT44(local_e0._4_4_,iVar7);
    if (local_e0._4_4_ < iVar7) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_e8,uVar4 & 0xffffffff);
    }
    iVar7 = piVar11[1];
    iVar8 = piVar11[2];
    iVar3 = piVar11[3];
    piVar12 = local_e8 + lVar10 * 4;
    *piVar12 = *piVar11;
    piVar12[1] = iVar7;
    piVar12[2] = iVar8;
    piVar12[3] = iVar3;
    uStack_c0 = uStack_c0 & ~uStack_cc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
  }
  piVar11 = (int *)0x0;
  uStack_ac = 1;
  local_d8 = (longlong *)0x0;
  iVar15 = 0;
  local_b0 = 0;
  local_res8 = 0;
  uStack_cc = 0;
  puStack_a8 = &DAT_1464c54c0;
  iStack_9c = 0;
  iStack_98 = 0;
  iVar7 = (int)DAT_1464c54d8;
  if (iVar7 != 0) {
    puVar14 = DAT_1464c54d0;
    if (DAT_1464c54d0 == (uint *)0x0) {
      puVar14 = (uint *)&DAT_1464c54c0;
    }
    uVar1 = *puVar14;
    iStack_98 = 0;
    local_b0 = 0;
    while (uVar1 == 0) {
      lVar10 = (longlong)local_b0;
      iStack_98 = iStack_98 + 0x20;
      iVar8 = local_b0 + 1;
      bVar2 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b0;
      local_b0 = iVar8;
      iStack_9c = iVar7;
      if (bVar2) goto LAB_141e186d7;
      uVar1 = puVar14[lVar10 + 1];
    }
    uStack_ac = -uVar1 & uVar1;
    iVar8 = 0x1f;
    if (uStack_ac != 0) {
      for (; uStack_ac >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_ac == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_9c = (iStack_98 - iVar8) + 0x1f;
    if (iVar7 < iStack_9c) {
      iStack_9c = iVar7;
    }
  }
LAB_141e186d7:
  uStack_78._0_4_ = 0xffffffff;
  uStack_78._4_4_ = iStack_9c;
  uStack_70 = CONCAT44(uStack_94,iStack_98);
  uStack_60 = CONCAT44(uStack_ac,local_b0);
  local_68 = &DAT_1464c54b0;
  local_a0 = -1 << ((byte)DAT_1464c54d8 & 0x1f);
  puStack_58 = &DAT_1464c54c0;
  local_res10 = DAT_1464c54d8 & 0xffffffff;
  local_90 = &DAT_1464c54b0;
  uStack_88 = CONCAT44(uStack_ac,local_b0);
  puStack_80 = &DAT_1464c54c0;
  iStack_9c = iVar7;
  uStack_48 = uStack_70;
  uStack_50 = (uint)uStack_78;
  iStack_4c = uStack_78._4_4_;
  do {
    uVar1 = uStack_cc;
    if (((uStack_78._4_4_ == (int)local_res10) && (puStack_80 == &DAT_1464c54c0)) &&
       (local_90 == &DAT_1464c54b0)) {
      puStack_80 = &DAT_1464c54c0;
      local_90 = &DAT_1464c54b0;
      for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)iVar15 * 2; piVar12 = piVar12 + 2) {
        local_resc = piVar12[1];
        local_res8 = *piVar12;
        TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
        ::Remove(&DAT_1464c54b0,&local_res8);
      }
      if (piVar11 != (int *)0x0) {
        FMemory::Free(piVar11);
      }
      piVar12 = local_e8 + (longlong)(int)local_e0 * 4;
      for (piVar11 = local_e8; piVar11 != piVar12; piVar11 = piVar11 + 4) {
        TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
        ::Remove(&DAT_1464c5460,piVar11);
      }
      if (local_e8 != (int *)0x0) {
        FMemory::Free(local_e8);
      }
      return;
    }
    piVar12 = (int *)((longlong)uStack_78._4_4_ * 0x20 + *local_90);
    cVar5 = FWeakObjectPtr::IsValid(piVar12);
    if (cVar5 == '\0') {
      local_res8 = iVar15 + 1;
      iStack_d0 = local_res8;
      if ((int)uVar1 < local_res8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,iVar15);
        piVar11 = (int *)local_d8;
      }
      piVar11[(longlong)iVar15 * 2] = *piVar12;
      (piVar11 + (longlong)iVar15 * 2)[1] = piVar12[1];
      iVar15 = iStack_d0;
      local_res8 = iStack_d0;
    }
    else {
      lVar10 = *(longlong *)(piVar12 + 2);
      FWeakObjectPtr::Get(piVar12);
      lVar9 = (longlong)(int)local_e0;
      if ((int)local_e0 != 0) {
        iVar7 = 0;
        iVar15 = 0;
        lVar13 = 0;
        piVar11 = local_e8;
        if ((*local_e8 == *(int *)(lVar10 + 0xb0)) &&
           (*(longlong *)(local_e8 + 2) == *(longlong *)(lVar10 + 0xb8))) {
          bVar16 = 0;
        }
        else {
          bVar16 = 1;
        }
        do {
          lVar13 = lVar13 + 1;
          iVar8 = iVar15 + 1;
          if (lVar13 < lVar9) {
            piVar12 = piVar11 + lVar13 * 4;
            do {
              if ((*piVar12 == *(int *)(lVar10 + 0xb0)) &&
                 (*(longlong *)(piVar12 + 2) == *(longlong *)(lVar10 + 0xb8))) {
                bVar6 = 0;
              }
              else {
                bVar6 = 1;
              }
              if (bVar16 != bVar6) break;
              iVar8 = iVar8 + 1;
              lVar13 = lVar13 + 1;
              piVar12 = piVar12 + 4;
            } while (lVar13 < lVar9);
          }
          if (bVar16 != 0) {
            if (iVar7 != iVar15) {
              ::_guard_xfg_dispatch_icall_nop
                        (piVar11 + (longlong)iVar7 * 4,piVar11 + (longlong)iVar15 * 4,
                         (longlong)(iVar8 - iVar15) << 4);
              piVar11 = local_e8;
            }
            iVar7 = iVar7 + (iVar8 - iVar15);
          }
          bVar16 = bVar16 ^ 1;
          iVar15 = iVar8;
        } while (lVar13 < lVar9);
        local_e0 = CONCAT44(local_e0._4_4_,iVar7);
        piVar11 = (int *)local_d8;
        iVar15 = local_res8;
      }
    }
    uStack_78._0_4_ = (uint)uStack_78 & ~uStack_88._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_88);
  } while( true );
}



// FUNCTION 141e18960 RegisterDelayTarget body=1003 status=ok
// SIG undefined RegisterDelayTarget(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FMotionDelayService::RegisterDelayTarget(undefined8 param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_res20 [2];
  int local_88;
  int local_84 [3];
  int local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  int *local_38;
  undefined1 *local_30;
  longlong **local_28;
  
  if (DAT_146aaf0ed == '\0') {
    return '\0';
  }
  local_78 = param_2;
  uStack_70 = param_3;
  FWeakObjectPtr::operator=(&local_50,param_1);
  local_48 = local_50;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464c54b0,local_res20,&local_48);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (local_res20[0] != -1) {
    plVar6 = (longlong *)((longlong)local_res20[0] * 0x20 + DAT_1464c54b0);
  }
  plVar4 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar4 = plVar7;
  }
  if (plVar4 != (longlong *)0x0) {
    lVar1 = *plVar4;
    if ((*(int *)(lVar1 + 0xb0) != local_78) || (*(longlong *)(lVar1 + 0xb8) != uStack_70)) {
      *(int *)(lVar1 + 0xb0) = local_78;
      *(undefined4 *)(lVar1 + 0xb4) = uStack_74;
      *(undefined4 *)(lVar1 + 0xb8) = (undefined4)uStack_70;
      *(undefined4 *)(lVar1 + 0xbc) = uStack_70._4_4_;
      MotionDelayService_Impl::RefreshMotionSources();
    }
    goto LAB_141e18cd0;
  }
  plVar4 = (longlong *)operator_new(0xe0);
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = (longlong)&PTR__scalar_deleting_destructor__144e92788;
    uVar8 = uRam0000000146aaf06c;
    plVar4[6] = 0;
    plVar4[7] = 0;
    *(undefined4 *)(plVar4 + 4) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x24) = 0;
    *(undefined4 *)(plVar4 + 5) = 0;
    *(uint *)((longlong)plVar4 + 0x2c) = uVar8;
    uVar8 = uRam0000000146aaf064 & uRam0000000146aaf074;
    uVar9 = uRam0000000146aaf068 & uRam0000000146aaf078;
    uVar10 = uRam0000000146aaf06c & uRam0000000146aaf07c;
    *(uint *)(plVar4 + 8) = _DAT_146aaf060 & _DAT_146aaf070;
    *(uint *)((longlong)plVar4 + 0x44) = uVar8;
    *(uint *)(plVar4 + 9) = uVar9;
    *(uint *)((longlong)plVar4 + 0x4c) = uVar10;
    uVar8 = uRam0000000146aaf06c;
    *(undefined4 *)(plVar4 + 10) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x54) = 0;
    *(undefined4 *)(plVar4 + 0xb) = 0;
    *(uint *)((longlong)plVar4 + 0x5c) = uVar8;
    plVar4[0xc] = 0;
    plVar4[0xd] = 0;
    uVar8 = uRam0000000146aaf064 & uRam0000000146aaf074;
    uVar9 = uRam0000000146aaf068 & uRam0000000146aaf078;
    uVar10 = uRam0000000146aaf06c & uRam0000000146aaf07c;
    *(uint *)(plVar4 + 0xe) = _DAT_146aaf060 & _DAT_146aaf070;
    *(uint *)((longlong)plVar4 + 0x74) = uVar8;
    *(uint *)(plVar4 + 0xf) = uVar9;
    *(uint *)((longlong)plVar4 + 0x7c) = uVar10;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x12] = 0;
    plVar4[0x13] = 0;
    *(undefined8 *)((longlong)plVar4 + 0xa4) = 0;
    *(undefined2 *)(plVar4 + 0x14) = 0;
    plVar4[0x16] = CONCAT44(uStack_74,local_78);
    plVar4[0x17] = uStack_70;
    plVar4[0x18] = 0;
    plVar4[0x19] = 0;
    *(undefined4 *)(plVar4 + 0x1a) = 0;
    *(undefined1 *)((longlong)plVar4 + 0xd4) = 0;
    plVar6 = plVar4;
  }
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    *plVar4 = (longlong)&PTR_FUN_144e93a28;
    plVar4[2] = (longlong)plVar6;
    plVar7 = plVar4;
  }
  local_68 = plVar6;
  local_60 = plVar7;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar5 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar3 = *piVar5;
      if (iVar3 == 0) {
        *piVar5 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_141e18be8;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar6;
    plVar4 = (longlong *)plVar6[1];
    if (plVar7 != plVar4) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar6[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar5 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar6[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar1 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar5 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
LAB_141e18be8:
  FWeakObjectPtr::operator=(local_40,param_1);
  local_30 = local_40;
  local_28 = &local_68;
  FUN_141e10400(&DAT_1464c54b0,&local_88,&local_30,0);
  plVar7 = local_60;
  plVar6 = *(longlong **)((longlong)local_88 * 0x20 + 0x10 + DAT_1464c54b0);
  lVar1 = *(longlong *)((longlong)local_88 * 0x20 + 8 + DAT_1464c54b0);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar5 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (DAT_146aaf440 != 0) {
    TCircularHistoryBuffer<FVector>::Resize(lVar1 + 0xc0);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar1 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar5 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
LAB_141e18cd0:
  piVar5 = (int *)TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
                  ::FindId(&DAT_1464c5460,local_58,&local_78);
  if (*piVar5 == -1) {
    local_38 = &local_78;
    FUN_141e10120(&DAT_1464c5460,local_84,&local_38,0);
    if (DAT_146aaf440 != 0) {
      TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::Resize
                ((longlong)local_84[0] * 0x30 + DAT_1464c5460 + 0x10);
    }
  }
  return DAT_146aaf0ed;
}



// FUNCTION 141e18d50 Rehash body=658 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  int *piVar15;
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
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar8) {
      uVar6 = 0;
      uVar13 = (ulonglong)uVar8;
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar6;
        uVar6 = uVar6 + 1;
        *(undefined4 *)((longlong)plVar10 + uVar9 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar8 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_141e18e8f;
        uVar8 = puVar14[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_141e18e8f:
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
        piVar15 = (int *)((longlong)iStack_1c * 0x30 + *param_1);
        uVar12 = (int)((ulonglong)*(undefined8 *)(piVar15 + 2) >> 0x20) +
                 (int)*(undefined8 *)(piVar15 + 2);
        uVar11 = *piVar15 - uVar12 ^ uVar12 >> 0xd;
        uVar8 = (-0x61c88647 - uVar11) - uVar12 ^ uVar11 << 8;
        uVar12 = (uVar12 - uVar8) - uVar11 ^ uVar8 >> 0xd;
        uVar11 = (uVar11 - uVar8) - uVar12 ^ uVar12 >> 0xc;
        uVar8 = (uVar8 - uVar11) - uVar12 ^ uVar11 << 0x10;
        uVar12 = (uVar12 - uVar8) - uVar11 ^ uVar8 >> 5;
        uVar11 = (uVar11 - uVar8) - uVar12 ^ uVar12 >> 3;
        uVar8 = (uVar8 - uVar11) - uVar12 ^ uVar11 << 10;
        uVar8 = ((uVar12 - uVar8) - uVar11 ^ uVar8 >> 0xf) & (int)*plVar2 - 1U;
        piVar15[0xb] = uVar8;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        piVar15[10] = *(int *)((longlong)plVar10 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141e18ff0 Remove body=420 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar2 = *(longlong *)(param_2 + 2);
  uVar11 = (int)((ulonglong)lVar2 >> 0x20) + (int)lVar2;
  uVar8 = (longlong)(int)param_1[9] - 1;
  uVar10 = *param_2 - uVar11 ^ uVar11 >> 0xd;
  uVar6 = (-0x61c88647 - uVar10) - uVar11 ^ uVar10 << 8;
  uVar11 = (uVar11 - uVar6) - uVar10 ^ uVar6 >> 0xd;
  uVar10 = (uVar10 - uVar6) - uVar11 ^ uVar11 >> 0xc;
  uVar6 = (uVar6 - uVar10) - uVar11 ^ uVar10 << 0x10;
  uVar11 = (uVar11 - uVar6) - uVar10 ^ uVar6 >> 5;
  uVar10 = (uVar10 - uVar6) - uVar11 ^ uVar11 >> 3;
  uVar6 = (uVar6 - uVar10) - uVar11 ^ uVar10 << 10;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  iVar7 = *(int *)((longlong)plVar9 +
                  (((longlong)(int)((uVar11 - uVar6) - uVar10) ^ (ulonglong)(uVar6 >> 0xf)) & uVar8)
                  * 4);
  if (iVar7 != -1) {
    lVar3 = *param_1;
    do {
      lVar4 = (longlong)iVar7;
      if ((*(int *)(lVar3 + lVar4 * 0x30) == *param_2) &&
         (*(longlong *)(lVar3 + 8 + lVar4 * 0x30) == lVar2)) {
        uVar8 = (longlong)*(int *)(lVar3 + 0x2c + lVar4 * 0x30) & uVar8;
        piVar5 = (int *)((longlong)plVar9 + uVar8 * 4);
        iVar1 = *(int *)((longlong)plVar9 + uVar8 * 4);
        goto joined_r0x000141e1912a;
      }
      iVar7 = *(int *)(lVar3 + 0x28 + lVar4 * 0x30);
    } while (iVar7 != -1);
  }
  return 0;
joined_r0x000141e1912a:
  if (iVar1 == -1) {
LAB_141e19160:
    if (*(longlong *)(*param_1 + 0x10 + lVar4 * 0x30) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar7,1);
    return 1;
  }
  if (iVar1 == iVar7) {
    *piVar5 = *(int *)(lVar3 + 0x28 + lVar4 * 0x30);
    goto LAB_141e19160;
  }
  piVar5 = (int *)(lVar3 + 0x28 + (longlong)iVar1 * 0x30);
  iVar1 = *piVar5;
  goto joined_r0x000141e1912a;
}



// FUNCTION 141e191a0 FUN_141e191a0 body=131 status=ok
// SIG undefined FUN_141e191a0(void)

void FUN_141e191a0(undefined4 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xf0))();
    if (cVar3 != '\0') {
      plVar1 = *(longlong **)(DAT_146b17150 + 0xac8);
      lVar2 = *plVar1;
      if (param_2 != 0) {
        if (param_2 != 1) {
                    /* WARNING: Could not recover jumptable at 0x000141e191f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0x98))(plVar1,param_1);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000141e19208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0xa8))();
        return;
      }
      (**(code **)(lVar2 + 0xa0))(plVar1,param_1);
    }
  }
  return;
}



// FUNCTION 141e19230 Resize body=288 status=ok
// SIG undefined Resize(void)

void TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::Resize
               (undefined8 *param_1,uint param_2)

{
  uint uVar1;
  void *_Src;
  void *_Src_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  void *local_28;
  uint local_20;
  undefined4 local_1c;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (param_2 <= uVar1) {
    if (param_2 < uVar1) {
      ResizeShrink(param_1,uVar1 - param_2);
    }
    return;
  }
  uVar3 = uVar1;
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    uVar3 = *(uint *)(param_1 + 2);
    if (uVar3 != 0) {
      local_28 = (void *)0x0;
      local_1c = 0;
      local_20 = uVar3;
      if (0 < (int)uVar3) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(&local_28,0);
        uVar3 = *(uint *)(param_1 + 2);
      }
      uVar2 = local_20;
      _Src_00 = local_28;
      _Src = (void *)*param_1;
      ::_guard_xfg_dispatch_icall_nop(local_28,_Src,(ulonglong)uVar3 << 5);
      uVar3 = *(uint *)(param_1 + 2);
      _Size = (ulonglong)uVar3 * 0x20;
      ::_guard_xfg_dispatch_icall_nop(_Src,(void *)(_Size + (longlong)_Src),_Size);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)(uVar1 - uVar3) * 0x20 + (longlong)_Src),_Src_00,
                 (longlong)(int)uVar2 << 5);
      *(undefined4 *)(param_1 + 2) = 0;
      if (_Src_00 != (void *)0x0) {
        FMemory::Free(_Src_00);
      }
    }
    uVar3 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 2) = uVar3;
  }
  iVar4 = (uVar3 - uVar1) + param_2;
  *(int *)(param_1 + 1) = iVar4;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return;
}



// FUNCTION 141e19350 Resize body=299 status=ok
// SIG undefined Resize(void)

void TCircularHistoryBuffer<FVector>::Resize(undefined8 *param_1,uint param_2)

{
  size_t _Size;
  uint uVar1;
  uint uVar2;
  void *_Src;
  void *_Src_00;
  uint uVar3;
  int iVar4;
  void *local_28;
  uint local_20;
  undefined4 local_1c;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (param_2 <= uVar1) {
    if (param_2 < uVar1) {
      ResizeShrink(param_1,uVar1 - param_2);
    }
    return;
  }
  uVar2 = uVar1;
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    uVar2 = *(uint *)(param_1 + 2);
    if (uVar2 != 0) {
      local_28 = (void *)0x0;
      local_1c = 0;
      local_20 = uVar2;
      if (0 < (int)uVar2) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_28,0);
        uVar2 = *(uint *)(param_1 + 2);
      }
      uVar3 = local_20;
      _Src_00 = local_28;
      _Src = (void *)*param_1;
      ::_guard_xfg_dispatch_icall_nop(local_28,_Src,(ulonglong)uVar2 * 0xc);
      uVar2 = *(uint *)(param_1 + 2);
      _Size = (ulonglong)uVar2 * 0xc;
      ::_guard_xfg_dispatch_icall_nop(_Src,(void *)(_Size + (longlong)_Src),_Size);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src + (ulonglong)(uVar1 - uVar2) * 0xc),_Src_00,
                 (longlong)(int)uVar3 * 0xc);
      *(undefined4 *)(param_1 + 2) = 0;
      if (_Src_00 != (void *)0x0) {
        FMemory::Free(_Src_00);
      }
    }
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 2) = uVar2;
  }
  iVar4 = (uVar2 - uVar1) + param_2;
  *(int *)(param_1 + 1) = iVar4;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return;
}



// FUNCTION 141e19480 ResizeShrink body=283 status=ok
// SIG undefined ResizeShrink(void)

void TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::ResizeShrink
               (longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (int)param_1[1];
  uVar4 = iVar5 - param_2;
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 < uVar4) {
    if (param_2 != 0) {
      iVar2 = (iVar5 - uVar1) - param_2;
      if (param_2 <= iVar2) {
        iVar2 = param_2;
      }
      if (iVar2 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(int)uVar1 * 0x20 + *param_1),
                   (void *)((longlong)(iVar5 - iVar2) * 0x20 + *param_1),(longlong)iVar2 << 5);
        iVar5 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar5 - param_2;
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
      return;
    }
  }
  else {
    iVar2 = iVar5 - uVar1;
    if (iVar2 != 0) {
      iVar3 = (iVar5 - uVar1) - iVar2;
      if (iVar3 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(int)uVar1 * 0x20 + *param_1),
                   (void *)((longlong)iVar5 * 0x20 + *param_1),(longlong)iVar3 << 5);
        iVar5 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar5 - iVar2;
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
    }
    iVar5 = (int)param_1[2] - uVar4;
    if (iVar5 != 0) {
      iVar2 = (int)param_1[1];
      iVar3 = iVar2 - iVar5;
      if (iVar5 <= iVar2 - iVar5) {
        iVar3 = iVar5;
      }
      if (iVar3 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)*param_1,(void *)((longlong)(iVar2 - iVar3) * 0x20 + *param_1),
                   (longlong)iVar3 << 5);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar5;
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  return;
}



// FUNCTION 141e195a0 ResizeShrink body=302 status=ok
// SIG undefined ResizeShrink(void)

void TCircularHistoryBuffer<FVector>::ResizeShrink(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (int)param_1[1];
  uVar4 = iVar5 - param_2;
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 < uVar4) {
    if (param_2 != 0) {
      iVar3 = (iVar5 - uVar1) - param_2;
      if (param_2 <= iVar3) {
        iVar3 = param_2;
      }
      if (iVar3 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)(int)uVar1 * 0xc),
                   (void *)(*param_1 + (longlong)(iVar5 - iVar3) * 0xc),(longlong)iVar3 * 0xc);
        iVar5 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar5 - param_2;
      TArray<FVector,FDefaultAllocator>::ResizeShrink(param_1);
      return;
    }
  }
  else {
    iVar3 = iVar5 - uVar1;
    if (iVar3 != 0) {
      iVar2 = (iVar5 - uVar1) - iVar3;
      if (iVar2 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)(int)uVar1 * 0xc),
                   (void *)(*param_1 + (longlong)iVar5 * 0xc),(longlong)iVar2 * 0xc);
        iVar5 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar5 - iVar3;
      TArray<FVector,FDefaultAllocator>::ResizeShrink(param_1);
    }
    iVar5 = (int)param_1[2] - uVar4;
    if (iVar5 != 0) {
      iVar3 = (int)param_1[1];
      iVar2 = iVar3 - iVar5;
      if (iVar5 <= iVar3 - iVar5) {
        iVar2 = iVar5;
      }
      if (iVar2 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)*param_1,(void *)(*param_1 + (longlong)(iVar3 - iVar2) * 0xc),
                   (longlong)iVar2 * 0xc);
        iVar3 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar3 - iVar5;
      TArray<FVector,FDefaultAllocator>::ResizeShrink(param_1);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  }
  return;
}



// FUNCTION 141e196d0 FUN_141e196d0 body=144 status=ok
// SIG undefined FUN_141e196d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e196d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)FUN_14238d0c0(param_1,local_48);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0x740) = *puVar2;
  *(undefined8 *)(param_1 + 0x748) = uVar1;
  uVar1 = puVar2[3];
  *(undefined8 *)(param_1 + 0x750) = puVar2[2];
  *(undefined8 *)(param_1 + 0x758) = uVar1;
  uVar1 = puVar2[5];
  *(undefined8 *)(param_1 + 0x760) = puVar2[4];
  *(undefined8 *)(param_1 + 0x768) = uVar1;
  local_50 = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x778) = local_50;
  FUN_142396490(param_1);
  return;
}



// FUNCTION 141e19760 FUN_141e19760 body=92 status=ok
// SIG undefined FUN_141e19760(void)

void FUN_141e19760(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0108);
  FUN_142396660(param_1,param_2);
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464b0108);
  if (iVar1 < 1) {
    LegacyMotionSources::GetSourceNameForHand(*(undefined1 *)(param_1 + 0x6f4),param_1 + 0x6f8);
  }
  return;
}



// FUNCTION 141e197c0 FUN_141e197c0 body=92 status=ok
// SIG undefined FUN_141e197c0(void)

void FUN_141e197c0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x6f0) = param_2;
  if ((lVar2 == 0) && (lVar2 = FUN_1423407b0(), lVar2 == 0)) {
    return;
  }
  cVar1 = UWorld::IsGameWorld(lVar2);
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 200) & 0x10) != 0)) {
    FMotionDelayService::RegisterDelayTarget(param_1,param_2,*(undefined8 *)(param_1 + 0x6f8));
  }
  return;
}



// FUNCTION 141e19820 FUN_141e19820 body=83 status=ok
// SIG undefined FUN_141e19820(void)

void FUN_141e19820(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x70))(plVar1,param_1,param_2);
    }
  }
  return;
}



// FUNCTION 141e19880 FUN_141e19880 body=180 status=ok
// SIG undefined FUN_141e19880(void)

void FUN_141e19880(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_2 != *(longlong *)(param_1 + 0x710)) &&
     (*(longlong *)(param_1 + 0x710) = param_2, *(longlong *)(param_1 + 0x708) == DAT_146aaf290)) {
    plVar1 = *(longlong **)(param_1 + 0x790);
    if (plVar1 != (longlong *)0x0) {
      lVar3 = FUN_142a232e0();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x000141e19913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x928))(plVar1,param_2);
        return;
      }
    }
    FUN_141e17ed0(param_1,0);
  }
  return;
}



// FUNCTION 141e19940 FUN_141e19940 body=24 status=ok
// SIG undefined FUN_141e19940(void)

void FUN_141e19940(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x708)) {
    *(longlong *)(param_1 + 0x708) = param_2;
    FUN_141e17ed0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 141e19960 FUN_141e19960 body=298 status=ok
// SIG undefined FUN_141e19960(void)

void FUN_141e19960(undefined1 param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar6 < DAT_146aaf4a8) {
    _Init_thread_header(&DAT_146aaf4a8);
    if (DAT_146aaf4a8 == -1) {
      FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
      _Init_thread_footer(&DAT_146aaf4a8);
    }
  }
  uVar1 = DAT_146aaf4a0;
  plVar3 = (longlong *)FUN_141593110();
  iVar2 = (**(code **)(*plVar3 + 8))(plVar3,uVar1);
  if (0 < iVar2) {
    if (*piVar6 < DAT_146aaf4a8) {
      _Init_thread_header(&DAT_146aaf4a8);
      if (DAT_146aaf4a8 == -1) {
        FName::FName(&DAT_146aaf4a0,L"MotionTrackingSystemManagement",1);
        _Init_thread_footer(&DAT_146aaf4a8);
      }
    }
    uVar1 = DAT_146aaf4a0;
    plVar3 = (longlong *)FUN_141593110();
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar1,0);
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)(lVar4 + -8);
    }
    (**(code **)*puVar5)(puVar5,param_1);
  }
  return;
}



// FUNCTION 141e19a90 FUN_141e19a90 body=49 status=ok
// SIG undefined FUN_141e19a90(void)

void FUN_141e19a90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  if (*(char *)(param_1 + 0x705) != cVar1) {
    *(char *)(param_1 + 0x705) = cVar1;
    if (*(longlong *)(param_1 + 0x790) != 0) {
      FUN_142397540(*(longlong *)(param_1 + 0x790),param_2,1);
      return;
    }
    if (cVar1 == '\0') {
      FUN_141e17ed0(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 141e19ad0 FUN_141e19ad0 body=206 status=ok
// SIG undefined FUN_141e19ad0(void)

void FUN_141e19ad0(undefined1 param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0xb0))(plVar1);
      if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e19b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar2)(puVar2,param_1);
        return;
      }
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aaf498) {
    _Init_thread_header(&DAT_146aaf498);
    if (DAT_146aaf498 == -1) {
      FName::FName(&DAT_146aaf490,L"PSVR",1);
      _Init_thread_footer(&DAT_146aaf498);
    }
  }
  puVar2 = *(undefined8 **)(DAT_146b17150 + 0xac8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,local_res10);
  }
  return;
}



// FUNCTION 141e19ba0 FUN_141e19ba0 body=196 status=ok
// SIG undefined FUN_141e19ba0(void)

void FUN_141e19ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    if (plVar1 != (longlong *)0x0) {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0xb0))(plVar1);
      if (plVar1 != (longlong *)0x0) {
        local_58 = param_5;
        local_57 = param_6;
        local_78 = param_1;
        local_70 = param_2;
        local_68 = param_3;
        local_60 = param_4;
        (**(code **)(*plVar1 + 0x20))(plVar1,&local_78);
      }
    }
  }
  return;
}



// FUNCTION 141e19c70 FUN_141e19c70 body=83 status=ok
// SIG undefined FUN_141e19c70(void)

void FUN_141e19c70(undefined8 param_1)

{
  longlong *plVar1;
  
  if (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    if (plVar1 != (longlong *)0x0) {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0xb0))(plVar1);
      if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e19cb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141e19cd0 FUN_141e19cd0 body=94 status=ok
// SIG undefined FUN_141e19cd0(void)

void FUN_141e19cd0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x6f8) = param_2;
  if ((lVar2 == 0) && (lVar2 = FUN_1423407b0(), lVar2 == 0)) {
    return;
  }
  cVar1 = UWorld::IsGameWorld(lVar2);
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 200) & 0x10) != 0)) {
    FMotionDelayService::RegisterDelayTarget(param_1,*(undefined4 *)(param_1 + 0x6f0),param_2);
  }
  return;
}



// FUNCTION 141e19d30 FUN_141e19d30 body=44 status=ok
// SIG undefined FUN_141e19d30(void)

void FUN_141e19d30(char *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(DAT_146b17150 + 0xac8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e19d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x68))(plVar1,*param_1 != '\0');
    return;
  }
  return;
}



// FUNCTION 141e19d60 FUN_141e19d60 body=113 status=ok
// SIG undefined FUN_141e19d60(void)

void FUN_141e19d60(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = LegacyMotionSources::GetSourceNameForHand(param_2,param_1 + 0x6f8);
  if (cVar1 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if ((lVar2 == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
      return;
    }
    cVar1 = UWorld::IsGameWorld(lVar2);
    if ((cVar1 != '\0') && ((*(byte *)(param_1 + 200) & 0x10) != 0)) {
      FMotionDelayService::RegisterDelayTarget
                (param_1,*(undefined4 *)(param_1 + 0x6f0),*(undefined8 *)(param_1 + 0x6f8));
    }
  }
  return;
}



// FUNCTION 141e19de0 FUN_141e19de0 body=57 status=ok
// SIG undefined FUN_141e19de0(void)

void FUN_141e19de0(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = UWorld::GetWorldSettings(uVar1,0,1);
    *(undefined4 *)(lVar2 + 0x588) = param_2;
  }
  return;
}



// FUNCTION 141e19e20 Setup body=308 status=ok
// SIG undefined Setup(void)

void FLateUpdateManager::Setup
               (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *local_18;
  undefined8 local_10;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x94);
  uVar6 = param_2[1];
  uVar11 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10 + lVar8 * 0x30);
  *puVar1 = *param_2;
  puVar1[1] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar2 = (undefined4 *)(param_1 + 0x20 + lVar8 * 0x30);
  *puVar2 = *(undefined4 *)(param_2 + 2);
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 5);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  puVar2 = (undefined4 *)(param_1 + 0x30 + lVar8 * 0x30);
  *puVar2 = *(undefined4 *)(param_2 + 4);
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  lVar8 = ((longlong)*(int *)(param_1 + 0x94) + 7) * 0x10 + param_1;
  *(undefined4 *)(lVar8 + 8) = 0;
  if (0x7fffffff < *(uint *)(lVar8 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar8,0);
  }
  FUN_141e13930(param_1,param_3);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_14238b380(param_3,1,&local_18);
  uVar10 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
  if (local_18 + (int)local_10 < local_18) {
    uVar10 = uVar11;
  }
  plVar9 = local_18;
  if (uVar10 != 0) {
    do {
      if (*plVar9 != 0) {
        FUN_141e13930(param_1);
      }
      plVar9 = plVar9 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  *(undefined1 *)((longlong)*(int *)(param_1 + 0x94) + 0x90 + param_1) = param_4;
  uVar7 = *(int *)(param_1 + 0x94) + 1U & 0x80000001;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
  }
  *(uint *)(param_1 + 0x94) = uVar7;
  return;
}



// FUNCTION 141e19f60 FUN_141e19f60 body=282 status=ok
// SIG undefined FUN_141e19f60(void)

longlong FUN_141e19f60(longlong param_1,longlong *param_2,undefined4 param_3,char param_4,
                      undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      lVar3 = (**(code **)(*param_2 + 0x18))(param_2,param_3,param_1,0x1000000,param_6,param_7);
      if (lVar3 != 0) {
        FUN_14234b150(lVar3);
        if (param_4 == '\0') {
          if (*(longlong *)(param_1 + 0x168) == 0) {
            FUN_14223f010(param_1,lVar3);
          }
          else {
            FUN_142382f60(lVar3,*(longlong *)(param_1 + 0x168),&DAT_146af29ec,0);
          }
        }
        FUN_142398770(lVar3,param_5,0,0,0);
      }
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 141e1a080 FUN_141e1a080 body=605 status=ok
// SIG undefined FUN_141e1a080(void)

void FUN_141e1a080(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 local_res20 [8];
  longlong local_28 [2];
  
  if ((*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) &&
     (lVar4 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))(), lVar4 != 0)) {
    plVar5 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0xb0))(plVar5);
    if (plVar5 != (longlong *)0x0) {
      uVar3 = 0xffffffff;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146aaf010) &&
         (_Init_thread_header(&DAT_146aaf010), DAT_146aaf010 == -1)) {
        uVar7 = UEnum::GetPrivateStaticClass();
        DAT_146aaf008 = FUN_141799410(uVar7,0xffffffffffffffff,L"ESpectatorScreenMode",0);
        _Init_thread_footer(&DAT_146aaf010);
      }
      if (*(int *)(param_1 + 1) == 0) {
        if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0xac8) != 0)) {
          bVar2 = (**(code **)(*plVar5 + 8))(plVar5);
          uVar3 = (uint)bVar2;
        }
        puVar6 = (undefined8 *)FUN_1417392b0(DAT_146aaf008,local_28,uVar3);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar6;
        }
        FOutputDevice::LogfImpl(param_3,L"Spectator screen mode is set to: %s",puVar9);
        if (local_28[0] == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
      puVar9 = &DAT_143f3eda8;
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)*param_1;
      }
      cVar1 = TCString<wchar_t>::IsNumeric(puVar8);
      puVar6 = (undefined8 *)*param_1;
      if (cVar1 == '\0') {
        if (*(int *)(puVar6 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*puVar6;
        }
        puVar6 = (undefined8 *)FName::FName(local_res20,puVar8,1);
        uVar3 = UEnum::GetIndexByName(DAT_146aaf008,*puVar6,0);
      }
      else if (*(int *)(puVar6 + 1) == 0) {
        uVar3 = _wtoi(L"");
      }
      else {
        uVar3 = _wtoi((wchar_t *)*puVar6);
      }
      if (7 < uVar3) {
        if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
          puVar9 = *(undefined2 **)*param_1;
        }
        FOutputDevice::LogfImpl(param_3,2,L"Invalid spectator screen mode: %s",puVar9);
      }
                    /* WARNING: Could not recover jumptable at 0x000141e1a1df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*plVar5)(plVar5,uVar3 & 0xff);
      return;
    }
  }
  if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = *(undefined2 **)*param_1;
  }
  FOutputDevice::LogfImpl
            (param_3,2,L"SpectatorScreenMode is not controllable now, cannot change or get mode.",
             puVar9);
  return;
}



// FUNCTION 141e1a2e0 FUN_141e1a2e0 body=514 status=ok
// SIG undefined FUN_141e1a2e0(void)

void FUN_141e1a2e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong local_res8;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142357eb0();
  if ((*(byte *)(param_1 + 0xba) & 4) != 0) {
    if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar5 = FUN_1423407b0(param_1), lVar5 == 0)) {
      uVar7 = 0x42c80000;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x120);
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      lVar5 = UWorld::GetWorldSettings(lVar5,0,1);
      uVar7 = *(undefined4 *)(lVar5 + 0x588);
    }
    cVar4 = FUN_141e17980(param_1,&local_58,&local_68,uVar7);
    if (cVar4 != '\0') {
      local_40 = local_60;
      local_48 = local_68;
      local_30 = local_50;
      local_38 = local_58;
      FUN_1423982b0(param_1,&local_38,&local_48,0,0,0);
    }
    if ((((*(char *)(param_1 + 0x730) == '\0') && (cVar4 != '\0')) &&
        (*(char *)(param_1 + 0x705) != '\0')) && (*(longlong *)(param_1 + 0x708) != DAT_146aaf290))
    {
      FUN_141e17ed0(param_1,0);
    }
    *(char *)(param_1 + 0x730) = cVar4;
    plVar2 = (longlong *)(param_1 + 0x780);
    if ((*plVar2 == 0) && (DAT_146b17150 != 0)) {
      local_res8 = param_1;
      plVar6 = (longlong *)
               FSceneViewExtensions::
               NewExtension<UMotionControllerComponent::FViewExtension,UMotionControllerComponent_*>
                         (local_18,&local_res8);
      local_20 = (longlong *)plVar6[1];
      local_28 = *plVar6;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      if (plVar2 != &local_28) {
        *plVar2 = local_28;
        local_28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x788,&local_20);
      }
      plVar2 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_20 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_10 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar1 = (int *)((longlong)local_10 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141e1a4f0 FUN_141e1a4f0 body=483 status=ok
// SIG undefined FUN_141e1a4f0(void)

void FUN_141e1a4f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 local_res8 [8];
  longlong local_18 [2];
  
  uVar4 = 0xffffffff;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aaf000) && (_Init_thread_header(&DAT_146aaf000), DAT_146aaf000 == -1))
  {
    uVar6 = UEnum::GetPrivateStaticClass();
    DAT_146aaeff8 = FUN_141799410(uVar6,0xffffffffffffffff,L"EHMDTrackingOrigin",0);
    _Init_thread_footer(&DAT_146aaf000);
  }
  if (*(int *)(param_1 + 1) == 0) {
    if ((DAT_146b17150 != 0) && (*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0)) {
      uVar4 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0x70))();
    }
    puVar5 = (undefined8 *)FUN_1417392b0(DAT_146aaeff8,local_18,uVar4);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar5;
    }
    FOutputDevice::LogfImpl(param_3,L"Tracking orgin is set to %s",puVar8);
    if (local_18[0] != 0) {
      FMemory::Free();
      return;
    }
  }
  else {
    puVar8 = &DAT_143f3eda8;
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = *(undefined2 **)*param_1;
    }
    cVar2 = TCString<wchar_t>::IsNumeric(puVar7);
    puVar5 = (undefined8 *)*param_1;
    if (cVar2 == '\0') {
      if (*(int *)(puVar5 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar5;
      }
      puVar5 = (undefined8 *)FName::FName(local_res8,puVar7,1);
      uVar3 = UEnum::GetIndexByName(DAT_146aaeff8,*puVar5,0);
    }
    else if (*(int *)(puVar5 + 1) == 0) {
      uVar3 = _wtoi(L"");
    }
    else {
      uVar3 = _wtoi((wchar_t *)*puVar5);
    }
    if (1 < uVar3) {
      if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
        puVar8 = *(undefined2 **)*param_1;
      }
      FOutputDevice::LogfImpl(param_3,2,L"Invalid tracking orgin, %s",puVar8);
    }
    if ((DAT_146b17150 != 0) &&
       (plVar1 = *(longlong **)(DAT_146b17150 + 0xac8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,uVar3);
    }
  }
  return;
}



// FUNCTION 141e1a6f0 FUN_141e1a6f0 body=258 status=ok
// SIG undefined FUN_141e1a6f0(void)

void FUN_141e1a6f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  wchar_t *_Str;
  undefined2 *puVar4;
  double dVar5;
  
  if ((int)param_1[1] == 0) {
    lVar2 = UWorld::GetWorldSettings(param_2,0,1);
    FOutputDevice::LogfImpl
              (param_3,L"World to meters scale is %0.2f",(double)*(float *)(lVar2 + 0x588));
    return;
  }
  puVar4 = &DAT_143f3eda8;
  if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)*param_1;
  }
  cVar1 = TCString<wchar_t>::IsNumeric(puVar3);
  if (cVar1 != '\0') {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar5 = _wtof(_Str);
    if (0.0 < (float)dVar5) {
      lVar2 = UWorld::GetWorldSettings(param_2,0,1);
      *(float *)(lVar2 + 0x588) = (float)dVar5;
      return;
    }
  }
  if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
    puVar4 = *(undefined2 **)*param_1;
  }
  FOutputDevice::LogfImpl
            (param_3,2,L"Invalid argument, %s. World to meters scale must be larger than 0.",puVar4)
  ;
  return;
}



// FUNCTION 141e1a800 FUN_141e1a800 body=47 status=ok
// SIG undefined FUN_141e1a800(void)

longlong FUN_141e1a800(void)

{
  if (DAT_146aaf780 == 0) {
    FUN_141786440(&DAT_146aaf780,&PTR_StaticClass_144e94e20);
  }
  return DAT_146aaf780;
}



// FUNCTION 141e1a830 FUN_141e1a830 body=47 status=ok
// SIG undefined FUN_141e1a830(void)

longlong FUN_141e1a830(void)

{
  if (DAT_146aaf730 == 0) {
    FUN_141786a30(&DAT_146aaf730,&PTR_FUN_1464c70c0);
  }
  return DAT_146aaf730;
}



// FUNCTION 141e1a860 FUN_141e1a860 body=47 status=ok
// SIG undefined FUN_141e1a860(void)

longlong FUN_141e1a860(void)

{
  if (DAT_146aaf738 == 0) {
    FUN_141786a30(&DAT_146aaf738,&PTR_FUN_1464c7180);
  }
  return DAT_146aaf738;
}



// FUNCTION 141e1a890 FUN_141e1a890 body=47 status=ok
// SIG undefined FUN_141e1a890(void)

longlong FUN_141e1a890(void)

{
  if (DAT_146aaf740 == 0) {
    FUN_141786a30(&DAT_146aaf740,&PTR_FUN_1464c7210);
  }
  return DAT_146aaf740;
}



// FUNCTION 141e1a8c0 FUN_141e1a8c0 body=47 status=ok
// SIG undefined FUN_141e1a8c0(void)

longlong FUN_141e1a8c0(void)

{
  if (DAT_146aaf748 == 0) {
    FUN_141786a30(&DAT_146aaf748,&PTR_FUN_1464c7250);
  }
  return DAT_146aaf748;
}



// FUNCTION 141e1a8f0 FUN_141e1a8f0 body=47 status=ok
// SIG undefined FUN_141e1a8f0(void)

longlong FUN_141e1a8f0(void)

{
  if (DAT_146aaf750 == 0) {
    FUN_141786a30(&DAT_146aaf750,&PTR_FUN_1464c7290);
  }
  return DAT_146aaf750;
}



// FUNCTION 141e1a920 FUN_141e1a920 body=47 status=ok
// SIG undefined FUN_141e1a920(void)

longlong FUN_141e1a920(void)

{
  if (DAT_146aaf758 == 0) {
    FUN_141786a30(&DAT_146aaf758,&PTR_FUN_1464c7310);
  }
  return DAT_146aaf758;
}



// FUNCTION 141e1a950 FUN_141e1a950 body=47 status=ok
// SIG undefined FUN_141e1a950(void)

longlong FUN_141e1a950(void)

{
  if (DAT_146aaf760 == 0) {
    FUN_141786a30(&DAT_146aaf760,&PTR_FUN_1464c7390);
  }
  return DAT_146aaf760;
}



// FUNCTION 141e1a980 FUN_141e1a980 body=47 status=ok
// SIG undefined FUN_141e1a980(void)

longlong FUN_141e1a980(void)

{
  if (DAT_146aaf768 == 0) {
    FUN_141786a30(&DAT_146aaf768,&PTR_FUN_1464c7420);
  }
  return DAT_146aaf768;
}



// FUNCTION 141e1a9b0 FUN_141e1a9b0 body=47 status=ok
// SIG undefined FUN_141e1a9b0(void)

longlong FUN_141e1a9b0(void)

{
  if (DAT_146aaf770 == 0) {
    FUN_141786a30(&DAT_146aaf770,&PTR_FUN_1464c74a0);
  }
  return DAT_146aaf770;
}



// FUNCTION 141e1a9e0 FUN_141e1a9e0 body=47 status=ok
// SIG undefined FUN_141e1a9e0(void)

longlong FUN_141e1a9e0(void)

{
  if (DAT_146aaf778 == 0) {
    FUN_141786a30(&DAT_146aaf778,&PTR_FUN_1464c7560);
  }
  return DAT_146aaf778;
}



// FUNCTION 141e1aa40 FUN_141e1aa40 body=53 status=ok
// SIG undefined FUN_141e1aa40(void)

void FUN_141e1aa40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144e97ac0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141e1aa80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMotionTrackedDeviceFunctionLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146aaf828 == 0) {
    FUN_14171ccd0(L"/Script/HeadMountedDisplay",L"MotionTrackedDeviceFunctionLibrary",&DAT_146aaf828
                  ,StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary,0x28,0x10000000,0,
                  L"Engine",&LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146aaf828;
}



// FUNCTION 141e1ab30 FUN_141e1ab30 body=47 status=ok
// SIG undefined FUN_141e1ab30(void)

longlong FUN_141e1ab30(void)

{
  if (DAT_146aaf820 == 0) {
    FUN_141786440(&DAT_146aaf820,&PTR_GetPrivateStaticClass_144e95e80);
  }
  return DAT_146aaf820;
}



// FUNCTION 141e1ab60 FUN_141e1ab60 body=47 status=ok
// SIG undefined FUN_141e1ab60(void)

longlong FUN_141e1ab60(void)

{
  if (DAT_146aaf790 == 0) {
    FUN_141786a30(&DAT_146aaf790,&PTR_FUN_1464c7950);
  }
  return DAT_146aaf790;
}



// FUNCTION 141e1ab90 FUN_141e1ab90 body=47 status=ok
// SIG undefined FUN_141e1ab90(void)

longlong FUN_141e1ab90(void)

{
  if (DAT_146aaf798 == 0) {
    FUN_141786a30(&DAT_146aaf798,&PTR_FUN_1464c7990);
  }
  return DAT_146aaf798;
}



// FUNCTION 141e1abc0 FUN_141e1abc0 body=47 status=ok
// SIG undefined FUN_141e1abc0(void)

longlong FUN_141e1abc0(void)

{
  if (DAT_146aaf7a0 == 0) {
    FUN_141786a30(&DAT_146aaf7a0,&PTR_FUN_1464c7a10);
  }
  return DAT_146aaf7a0;
}



// FUNCTION 141e1abf0 FUN_141e1abf0 body=47 status=ok
// SIG undefined FUN_141e1abf0(void)

longlong FUN_141e1abf0(void)

{
  if (DAT_146aaf7a8 == 0) {
    FUN_141786a30(&DAT_146aaf7a8,&PTR_FUN_1464c7b10);
  }
  return DAT_146aaf7a8;
}



// FUNCTION 141e1ac20 FUN_141e1ac20 body=47 status=ok
// SIG undefined FUN_141e1ac20(void)

longlong FUN_141e1ac20(void)

{
  if (DAT_146aaf7b0 == 0) {
    FUN_141786a30(&DAT_146aaf7b0,&PTR_FUN_1464c7bc0);
  }
  return DAT_146aaf7b0;
}



// FUNCTION 141e1ac50 FUN_141e1ac50 body=47 status=ok
// SIG undefined FUN_141e1ac50(void)

longlong FUN_141e1ac50(void)

{
  if (DAT_146aaf7b8 == 0) {
    FUN_141786a30(&DAT_146aaf7b8,&PTR_FUN_1464c7c90);
  }
  return DAT_146aaf7b8;
}



// FUNCTION 141e1ac80 FUN_141e1ac80 body=47 status=ok
// SIG undefined FUN_141e1ac80(void)

longlong FUN_141e1ac80(void)

{
  if (DAT_146aaf7c0 == 0) {
    FUN_141786a30(&DAT_146aaf7c0,&PTR_FUN_1464c7de0);
  }
  return DAT_146aaf7c0;
}



// FUNCTION 141e1acb0 FUN_141e1acb0 body=47 status=ok
// SIG undefined FUN_141e1acb0(void)

longlong FUN_141e1acb0(void)

{
  if (DAT_146aaf7c8 == 0) {
    FUN_141786a30(&DAT_146aaf7c8,&PTR_FUN_1464c7ee0);
  }
  return DAT_146aaf7c8;
}



// FUNCTION 141e1ace0 FUN_141e1ace0 body=47 status=ok
// SIG undefined FUN_141e1ace0(void)

longlong FUN_141e1ace0(void)

{
  if (DAT_146aaf7d0 == 0) {
    FUN_141786a30(&DAT_146aaf7d0,&PTR_FUN_1464c7f90);
  }
  return DAT_146aaf7d0;
}



// FUNCTION 141e1ad10 FUN_141e1ad10 body=47 status=ok
// SIG undefined FUN_141e1ad10(void)

longlong FUN_141e1ad10(void)

{
  if (DAT_146aaf7d8 == 0) {
    FUN_141786a30(&DAT_146aaf7d8,&PTR_FUN_1464c8010);
  }
  return DAT_146aaf7d8;
}



// FUNCTION 141e1ad40 FUN_141e1ad40 body=47 status=ok
// SIG undefined FUN_141e1ad40(void)

longlong FUN_141e1ad40(void)

{
  if (DAT_146aaf7e0 == 0) {
    FUN_141786a30(&DAT_146aaf7e0,&PTR_FUN_1464c8090);
  }
  return DAT_146aaf7e0;
}



// FUNCTION 141e1ad70 FUN_141e1ad70 body=47 status=ok
// SIG undefined FUN_141e1ad70(void)

longlong FUN_141e1ad70(void)

{
  if (DAT_146aaf7e8 == 0) {
    FUN_141786a30(&DAT_146aaf7e8,&PTR_FUN_1464c8110);
  }
  return DAT_146aaf7e8;
}



// FUNCTION 141e1ada0 FUN_141e1ada0 body=47 status=ok
// SIG undefined FUN_141e1ada0(void)

longlong FUN_141e1ada0(void)

{
  if (DAT_146aaf7f0 == 0) {
    FUN_141786a30(&DAT_146aaf7f0,&PTR_FUN_1464c8210);
  }
  return DAT_146aaf7f0;
}



// FUNCTION 141e1add0 FUN_141e1add0 body=47 status=ok
// SIG undefined FUN_141e1add0(void)

longlong FUN_141e1add0(void)

{
  if (DAT_146aaf7f8 == 0) {
    FUN_141786a30(&DAT_146aaf7f8,&PTR_FUN_1464c82a0);
  }
  return DAT_146aaf7f8;
}



// FUNCTION 141e1ae00 FUN_141e1ae00 body=47 status=ok
// SIG undefined FUN_141e1ae00(void)

longlong FUN_141e1ae00(void)

{
  if (DAT_146aaf800 == 0) {
    FUN_141786a30(&DAT_146aaf800,&PTR_FUN_1464c8370);
  }
  return DAT_146aaf800;
}



// FUNCTION 141e1ae30 FUN_141e1ae30 body=47 status=ok
// SIG undefined FUN_141e1ae30(void)

longlong FUN_141e1ae30(void)

{
  if (DAT_146aaf808 == 0) {
    FUN_141786a30(&DAT_146aaf808,&PTR_FUN_1464c84c0);
  }
  return DAT_146aaf808;
}



// FUNCTION 141e1ae60 FUN_141e1ae60 body=47 status=ok
// SIG undefined FUN_141e1ae60(void)

longlong FUN_141e1ae60(void)

{
  if (DAT_146aaf810 == 0) {
    FUN_141786a30(&DAT_146aaf810,&PTR_FUN_1464c85c0);
  }
  return DAT_146aaf810;
}



// FUNCTION 141e1ae90 FUN_141e1ae90 body=47 status=ok
// SIG undefined FUN_141e1ae90(void)

longlong FUN_141e1ae90(void)

{
  if (DAT_146aaf818 == 0) {
    FUN_141786a30(&DAT_146aaf818,&PTR_FUN_1464c8650);
  }
  return DAT_146aaf818;
}



// FUNCTION 141e1aed0 FUN_141e1aed0 body=162 status=ok
// SIG undefined FUN_141e1aed0(void)

longlong FUN_141e1aed0(void)

{
  if (DAT_146aaf840 == 0) {
    FUN_14171ccd0(L"/Script/HeadMountedDisplay",L"VRNotificationsComponent",&DAT_146aaf840,
                  FUN_140447710,0x208,0x10000000,0,L"Engine",&LAB_141e1ba00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146aaf840;
}



// FUNCTION 141e1af80 FUN_141e1af80 body=47 status=ok
// SIG undefined FUN_141e1af80(void)

longlong FUN_141e1af80(void)

{
  if (DAT_146aaf838 == 0) {
    FUN_141786440(&DAT_146aaf838,&PTR_FUN_144e96390);
  }
  return DAT_146aaf838;
}



// FUNCTION 141e1afc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXRAssetFunctionLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146aaf868 == 0) {
    FUN_14171ccd0(L"/Script/HeadMountedDisplay",L"XRAssetFunctionLibrary",&DAT_146aaf868,
                  StaticRegisterNativesUXRAssetFunctionLibrary,0x28,0x10000000,0,L"Engine",
                  &LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146aaf868;
}



// FUNCTION 141e1b070 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong AArchVisCharacter::StaticClass(void)

{
  if (DAT_146aaf788 == 0) {
    FUN_14171ccd0(L"/Script/HeadMountedDisplay",L"MotionControllerComponent",&DAT_146aaf788,
                  FUN_141e1bdc0,0x7b0,0x10000000,0,L"Engine",&LAB_141e1b9e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146aaf788;
}



// FUNCTION 141e1b120 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAsyncTask_LoadXRDeviceVisComponent::GetPrivateStaticClass(void)

{
  if (DAT_146aaf888 == 0) {
    FUN_14171ccd0(L"/Script/HeadMountedDisplay",L"AsyncTask_LoadXRDeviceVisComponent",&DAT_146aaf888
                  ,StaticRegisterNativesUAsyncTask_LoadXRDeviceVisComponent,0x60,0x10000000,0,
                  L"Engine",&LAB_141e1b9c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141e1bd50,&LAB_140447700,0);
  }
  return DAT_146aaf888;
}



// FUNCTION 141e1b1d0 FUN_141e1b1d0 body=47 status=ok
// SIG undefined FUN_141e1b1d0(void)

longlong FUN_141e1b1d0(void)

{
  if (DAT_146aaf860 == 0) {
    FUN_141786440(&DAT_146aaf860,&PTR_GetPrivateStaticClass_144e967d0);
  }
  return DAT_146aaf860;
}



// FUNCTION 141e1b200 FUN_141e1b200 body=47 status=ok
// SIG undefined FUN_141e1b200(void)

longlong FUN_141e1b200(void)

{
  if (DAT_146aaf850 == 0) {
    FUN_141786a30(&DAT_146aaf850,&PTR_FUN_1464c8b40);
  }
  return DAT_146aaf850;
}



// FUNCTION 141e1b230 FUN_141e1b230 body=47 status=ok
// SIG undefined FUN_141e1b230(void)

longlong FUN_141e1b230(void)

{
  if (DAT_146aaf858 == 0) {
    FUN_141786a30(&DAT_146aaf858,&PTR_FUN_1464c8d40);
  }
  return DAT_146aaf858;
}



// FUNCTION 141e1b260 FUN_141e1b260 body=47 status=ok
// SIG undefined FUN_141e1b260(void)

longlong FUN_141e1b260(void)

{
  if (DAT_146aaf880 == 0) {
    FUN_141786440(&DAT_146aaf880,&PTR_GetPrivateStaticClass_144e96ba0);
  }
  return DAT_146aaf880;
}



// FUNCTION 141e1b290 FUN_141e1b290 body=47 status=ok
// SIG undefined FUN_141e1b290(void)

longlong FUN_141e1b290(void)

{
  if (DAT_146aaf870 == 0) {
    FUN_141786a30(&DAT_146aaf870,&PTR_FUN_1464c8f40);
  }
  return DAT_146aaf870;
}



// FUNCTION 141e1b2c0 FUN_141e1b2c0 body=47 status=ok
// SIG undefined FUN_141e1b2c0(void)

longlong FUN_141e1b2c0(void)

{
  if (DAT_146aaf878 == 0) {
    FUN_141786a30(&DAT_146aaf878,&PTR_FUN_1464c9180);
  }
  return DAT_146aaf878;
}



// FUNCTION 141e1b2f0 FUN_141e1b2f0 body=47 status=ok
// SIG undefined FUN_141e1b2f0(void)

longlong FUN_141e1b2f0(void)

{
  if (DAT_146aaf5e8 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146aaf5e8,&PTR_s__Script_HeadMountedDisplay_144e97718);
  }
  return DAT_146aaf5e8;
}



// FUNCTION 141e1b340 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UHeadMountedDisplayFunctionLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146aaf6e8 == 0) {
    FUN_14171ccd0(L"/Script/HeadMountedDisplay",L"HeadMountedDisplayFunctionLibrary",&DAT_146aaf6e8,
                  UARBlueprintLibrary::StaticRegisterNativesUARBlueprintLibrary,0x28,0x10000000,0,
                  L"Engine",&LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146aaf6e8;
}



// FUNCTION 141e1b3f0 FUN_141e1b3f0 body=47 status=ok
// SIG undefined FUN_141e1b3f0(void)

longlong FUN_141e1b3f0(void)

{
  if (DAT_146aaf6e0 == 0) {
    FUN_141786440(&DAT_146aaf6e0,&PTR_GetPrivateStaticClass_144e94230);
  }
  return DAT_146aaf6e0;
}



// FUNCTION 141e1b420 FUN_141e1b420 body=47 status=ok
// SIG undefined FUN_141e1b420(void)

longlong FUN_141e1b420(void)

{
  if (DAT_146aaf5f0 == 0) {
    FUN_141786a30(&DAT_146aaf5f0,&PTR_FUN_1464c5600);
  }
  return DAT_146aaf5f0;
}


