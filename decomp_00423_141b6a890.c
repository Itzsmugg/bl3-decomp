// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141b6a890 FUN_141b6a890 body=66 status=ok
// SIG undefined FUN_141b6a890(void)

ulonglong FUN_141b6a890(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 4) != 0) {
    uVar1 = FUN_141b6a8e0();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141b6a8e0 FUN_141b6a8e0 body=1678 status=ok
// SIG undefined FUN_141b6a8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141b6a8e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong *param_5,char param_6,undefined1 param_7,char param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uchar *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  char local_1d0;
  float local_1c8;
  int local_1b8 [2];
  WriteBytesMem *local_1b0;
  undefined8 local_1a8;
  float fStack_1a0;
  float fStack_19c;
  undefined *local_198;
  float fStack_190;
  float fStack_18c;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong *local_170;
  longlong local_168;
  longlong local_160;
  float local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  ulonglong local_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_170 = param_5;
  if (param_5 == (longlong *)0x0) {
    uVar6 = local_88 & 0xffffffffffffff00;
  }
  else {
    plVar15 = (longlong *)0x0;
    local_1b0 = (WriteBytesMem *)0x0;
    local_168 = param_1;
    local_160 = param_4;
    (**(code **)(*param_5 + 0x40))
              (param_5,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8),&local_188,&local_1b0);
    uVar6 = (**(code **)(*(longlong *)local_1b0 + 0x98))();
    if ((char)uVar6 == '\0') {
      uVar6 = uVar6 & 0xffffffffffffff00;
    }
    else {
      lVar7 = FSceneRenderTargets::Get(param_2);
      local_1d0 = '\x01';
      local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,0x21);
      FUN_141ad74f0(param_2,*(undefined8 *)(param_4 + 8),
                    *(undefined8 *)(*(longlong *)(lVar7 + 0x60) + 8),0);
      local_1b0 = (WriteBytesMem *)0x0;
      (**(code **)(*param_5 + 0x40))
                (param_5,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8),&local_188,&local_1b0);
      puVar8 = AK::WriteBytesMem::Bytes(local_1b0);
      fStack_190 = 0.0;
      local_198 = &DAT_146a1e760;
      plVar10 = (longlong *)(puVar8 + 0x38);
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar10,local_1b8,&local_198);
      plVar13 = plVar15;
      if (local_1b8[0] != -1) {
        plVar13 = (longlong *)((longlong)local_1b8[0] * 0x20 + *plVar10);
      }
      fStack_190 = 0.0;
      plVar9 = plVar13 + 2;
      if (plVar13 == (longlong *)0x0) {
        plVar9 = plVar15;
      }
      lVar7 = *plVar9;
      local_198 = &DAT_146a1e8b0;
      local_178 = lVar7;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar10,local_1b8);
      plVar13 = plVar15;
      if (local_1b8[0] != -1) {
        plVar13 = (longlong *)((longlong)local_1b8[0] * 0x20 + *plVar10);
      }
      plVar10 = plVar13 + 2;
      if (plVar13 == (longlong *)0x0) {
        plVar10 = plVar15;
      }
      lVar16 = *plVar10;
      local_108 = 0;
      local_100 = 0;
      local_f4 = 0;
      local_ec = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a4 = 0;
      local_9c = 0;
      local_94 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_fc = 0x26;
      local_e8 = 0;
      uStack_e0 = 0;
      local_188 = lVar16;
      FUN_14049afe0(param_2,&local_148);
      puVar11 = (undefined8 *)FUN_141ee3620();
      local_148 = *puVar11;
      lVar7 = *(longlong *)(lVar7 + 0x48);
      if (*(char *)(lVar7 + 0x28) == '\0') {
        FUN_1419f3850(lVar7);
      }
      uStack_140 = *(undefined8 *)(lVar7 + 0x38);
      lVar7 = *(longlong *)(lVar16 + 0x48);
      if (*(char *)(lVar7 + 0x28) == '\0') {
        FUN_1419f3850(lVar7);
      }
      local_128 = *(undefined8 *)(lVar7 + 0x40);
      (**(code **)(**(longlong **)(param_3 + 0x30) + 0x10))
                (*(longlong **)(param_3 + 0x30),&local_1a8);
      local_1b8[0] = 0;
      if (0 < *(int *)(param_1 + 200)) {
        local_180 = 0;
        do {
          iVar14 = local_1b8[0];
          lVar7 = *(longlong *)(param_1 + 0xc0) + local_180;
          uVar1 = *(uint *)(param_3 + 0x58);
          if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar7 + 0x1e20))) {
            lVar16 = *(longlong *)(lVar7 + 0x1e18);
            if (*(longlong *)(lVar7 + 0x1e18) == 0) {
              lVar16 = lVar7 + 0x1e08;
            }
            uVar4 = uVar1;
            if ((int)uVar1 < 0) {
              uVar4 = uVar1 + 0x1f;
            }
            if ((*(uint *)(lVar16 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
              if (*(char *)(*(longlong *)(param_3 + 0x30) + 0x188) == '\0') {
                local_1a8 = *(undefined **)(lVar7 + 0x8dc);
                fStack_1a0 = *(float *)(lVar7 + 0x8e4);
              }
              local_198 = local_1a8;
              fStack_190 = fStack_1a0;
              fStack_18c = fStack_19c;
              fVar17 = (float)FUN_141b64db0(lVar7,&local_198);
              if (0.00390625 <= fVar17) {
                uVar5 = *(undefined4 *)(lVar7 + 0x1aac);
                uVar2 = *(undefined4 *)(lVar7 + 0x1aa8);
                puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                uVar3 = *(undefined4 *)(lVar7 + 0x1aa4);
                local_1b0 = (WriteBytesMem *)
                            CONCAT44(local_1b0._4_4_,*(undefined4 *)(lVar7 + 0x1aa0));
                puVar11 = puVar12 + 5;
                if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
                  FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
                  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar11 = puVar12 + 5;
                }
                *(undefined8 **)(param_2 + 0x30) = puVar11;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                **(undefined8 **)(param_2 + 8) = puVar12;
                *(undefined8 **)(param_2 + 8) = puVar12 + 1;
                puVar12[1] = 0;
                *puVar12 = &PTR_LAB_143f59420;
                *(undefined4 *)(puVar12 + 2) = local_1b0._0_4_;
                *(undefined4 *)((longlong)puVar12 + 0x14) = uVar3;
                *(undefined4 *)(puVar12 + 3) = 0;
                *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar2;
                *(undefined4 *)(puVar12 + 4) = uVar5;
                *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
                local_108 = FUN_1409853f0();
                local_fc = local_fc & 0xffffffff00000000;
                if (param_6 == '\0') {
                  local_118 = FUN_1404a0ce0();
                }
                else if (param_8 == '\0') {
                  uVar5 = FUN_141abca80(param_3);
                  local_1d0 = '\0';
                  local_1d8 = (longlong *)CONCAT71(local_1d8._1_7_,param_7);
                  FProjectedShadowInfo::SetBlendStateForProjection(&local_148,uVar5,0,0);
                }
                else {
                  local_118 = FUN_141b65470();
                }
                local_150 = *(float *)(lVar7 + 0x8e4);
                fVar19 = (float)*(undefined8 *)(lVar7 + 0x8dc) - (float)local_1a8;
                fVar20 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x8dc) >> 0x20) -
                         local_1a8._4_4_;
                fVar18 = *(float *)(lVar7 + 0x11b0) + *(float *)(lVar7 + 0x11b0) + fStack_19c * 1.05
                ;
                if (fVar18 * fVar18 <=
                    fVar20 * fVar20 + fVar19 * fVar19 +
                    (local_150 - fStack_1a0) * (local_150 - fStack_1a0)) {
                  local_108 = FUN_141abfb70();
                  if (*(char *)(lVar7 + 0x11b4) == '\0') goto LAB_141b6ae07;
                  uStack_110 = FUN_141ac06b0();
                }
                else if (*(char *)(lVar7 + 0x11b4) == '\0') {
                  uStack_110 = FUN_141ac06b0();
                }
                else {
LAB_141b6ae07:
                  uStack_110 = FUN_141ac0570();
                }
                (**(code **)(**(longlong **)(param_3 + 0x30) + 0xe0))
                          (*(longlong **)(param_3 + 0x30),param_2,lVar7,lVar7 + 0x1aa0);
                FUN_141ed6ac0(param_2,&local_148,2,1);
                FUN_141b71f70(local_178,param_2,lVar7,param_3);
                local_1d0 = param_8;
                local_1d8 = local_170;
                local_1c8 = fVar17;
                FUN_141b717c0(local_188,param_2);
                FUN_141b97230(param_2);
                param_4 = local_160;
                param_1 = local_168;
                iVar14 = local_1b8[0];
              }
              else if (param_6 == '\0') {
                (**(code **)(**(longlong **)(param_3 + 0x30) + 0xe0))
                          (*(longlong **)(param_3 + 0x30),param_2,lVar7,lVar7 + 0x1aa0);
                FSceneRenderTargets::Get(param_2);
                local_1d0 = '\x01';
                local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,0x21);
                FUN_141ad74f0(param_2,*(undefined8 *)(param_4 + 8));
              }
            }
          }
          local_1b8[0] = iVar14 + 1;
          local_180 = local_180 + 0x30d0;
        } while (local_1b8[0] < *(int *)(param_1 + 200));
      }
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar11 = puVar12 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar11) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar11 = puVar12 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar11;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar12;
      *(undefined8 **)(param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_143f59430;
      *(undefined1 *)(puVar12 + 2) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar12 + 0x1c) = 0;
      uVar6 = CONCAT71((int7)((ulonglong)puVar12 >> 8),1);
    }
  }
  return uVar6;
}



// FUNCTION 141b6af70 FUN_141b6af70 body=5647 status=ok
// SIG undefined FUN_141b6af70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b6af70(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  float **ppfVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined8 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  float *pfVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  wchar_t **ppwVar25;
  longlong lVar26;
  int *piVar27;
  undefined4 *puVar28;
  uint uVar29;
  longlong *plVar30;
  float **ppfVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  bool bVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined1 in_XMM1 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  undefined1 auStack_478 [32];
  wchar_t *local_458;
  undefined8 *local_450;
  undefined1 local_448;
  float local_438;
  char local_434;
  int local_430;
  undefined8 local_428;
  float *local_420;
  undefined8 *local_418;
  longlong local_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  int local_400;
  int local_3fc;
  longlong local_3f8;
  int local_3f0;
  undefined4 uStack_3ec;
  longlong local_3e8;
  undefined **local_3e0;
  longlong local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined2 local_3b0 [4];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398 [16];
  undefined8 local_388;
  undefined8 uStack_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  undefined **local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 local_304;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined2 local_2f0;
  undefined4 local_2ec;
  undefined4 uStack_2e8;
  undefined4 local_2e4;
  undefined1 local_2e0;
  wchar_t *local_2d8;
  undefined2 local_2d0;
  undefined8 local_2c8;
  undefined ***local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b4;
  undefined8 uStack_2ac;
  undefined1 local_2a4;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  wchar_t *local_288;
  uint uStack_280;
  uint uStack_27c;
  undefined1 local_278 [12];
  undefined4 uStack_26c;
  longlong local_260 [2];
  float *local_250 [2];
  int local_240 [2];
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8 [2];
  wchar_t *local_1d8;
  undefined4 local_1d0;
  wchar_t *local_1c8;
  undefined4 local_1c0;
  int local_1bc;
  wchar_t *local_1b8;
  undefined4 local_1b0;
  wchar_t *local_1a8;
  undefined4 local_1a0;
  int local_19c;
  wchar_t *local_198;
  undefined4 local_190;
  wchar_t *local_188;
  undefined4 local_180;
  int local_17c;
  wchar_t *local_178;
  undefined4 local_170;
  wchar_t *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  wchar_t *local_158;
  undefined4 local_150;
  wchar_t *local_148;
  undefined4 local_140;
  int local_13c;
  wchar_t *local_138;
  undefined4 local_130;
  wchar_t *local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined4 local_110;
  wchar_t *local_108;
  undefined8 local_100;
  longlong local_f8 [24];
  
  local_f8[7] = DAT_1468387a8 ^ (ulonglong)auStack_478;
  local_338 = &PTR__scalar_deleting_destructor__144deb638;
  uVar24 = 0;
  local_328 = 0;
  uStack_320 = 2;
  local_330 = 0;
  local_428 = param_3;
  local_3f8 = param_1;
  local_340 = param_2;
  if (DAT_146ab6340 / 1000000 != 0) {
    FUN_141a15f30();
    if (*(int *)(param_1 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_1);
    }
    FUN_141ed93a0(param_1);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_1);
    }
    FRHICommandListBase::WaitForTasks(param_1,1);
    local_3d8 = 0;
    local_3e0 = &PTR_GetBoundProgramCounterForTimerManager_144deb778;
    local_3d0 = 0;
    local_3c8 = 0;
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(&local_3d8,600000);
    uVar19 = uVar24;
    do {
      uVar32 = local_3d0;
      lVar26 = (longlong)(int)local_3d0;
      iVar16 = (int)local_3d0 + 1;
      local_3d0 = CONCAT44(local_3d0._4_4_,iVar16);
      if (local_3d0._4_4_ < iVar16) {
        TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(&local_3d8,uVar32 & 0xffffffff);
      }
      pfVar22 = (float *)(lVar26 * 0x50 + local_3d8);
      uVar29 = (int)uVar19 + 1;
      pfVar22[1] = 0.0;
      pfVar22[2] = 0.0;
      pfVar22[3] = 0.0;
      pfVar22[4] = 0.0;
      *pfVar22 = (float)uVar19;
      pfVar22[5] = 0.0;
      pfVar22[6] = 0.0;
      pfVar22[7] = 1.0;
      pfVar22[8] = 0.0;
      pfVar22[9] = 0.0;
      pfVar22[10] = 0.0;
      pfVar22[0xb] = 1.0;
      pfVar22[0xc] = 0.0;
      pfVar22[0xd] = 0.0;
      pfVar22[0xe] = 0.0;
      pfVar22[0xf] = 1.0;
      pfVar22[0x10] = 0.0;
      pfVar22[0x11] = 0.0;
      pfVar22[0x12] = 0.0;
      pfVar22[0x13] = 1.0;
      uVar19 = (ulonglong)uVar29;
    } while (uVar29 < 600000);
    local_2c0 = &local_3e0;
    local_2c8 = 0;
    local_2b4 = _DAT_1468b5d78;
    uStack_2ac = uRam00000001468b5d80;
    local_450 = &local_2c8;
    local_2b8 = 1;
    local_2a4 = 0;
    local_2a0 = 0;
    local_298 = 0;
    local_290 = 0;
    local_458 = (wchar_t *)CONCAT44(local_458._4_4_,1);
    (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_418,&DAT_146ab6e78,48000000);
    local_308 = DAT_146ab6938;
    local_260[0] = 0;
    local_260[1] = 0;
    local_448 = 1;
    local_2d8 = L"UnknownTexture2D";
    local_450._0_1_ = 1;
    local_318 = _DAT_146ab6928;
    uStack_310 = uRam0000000146ab6930;
    local_458 = L"Benchmark0";
    local_250[0] = (float *)0x0;
    local_304 = 0x200;
    local_300 = 0x200;
    local_2f8 = 1;
    local_2f4 = 0x10000;
    local_2f0 = 1;
    local_2ec = 2;
    uStack_2e8 = 0;
    local_2e4 = 9;
    local_2e0 = 0;
    local_2d0 = 0;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_1,&local_318,local_260);
    local_448 = 1;
    local_450._0_1_ = 1;
    local_458 = L"Benchmark1";
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_1,&local_318,local_260 + 1);
    local_448 = 1;
    local_450 = (undefined8 *)CONCAT71(local_450._1_7_,1);
    local_458 = L"BenchmarkReadback";
    local_304 = 1;
    local_300 = CONCAT44(local_300._4_4_,1);
    uStack_2e8 = 0x40000;
    local_2e4 = 0;
    FUN_141ce20b0(&PTR_PTR_1464c2560,param_1,&local_318,local_250);
    local_1d8 = L"ALUHeavyNoise";
    local_1c8 = L"s/GigaPix";
    local_1d0 = 0x3e5e8f71;
    local_1b8 = L"TexHeavy";
    local_1b0 = 0x3e09814a;
    local_1c0 = 0x3f800000;
    local_1bc = 1;
    local_1a8 = L"s/GigaPix";
    local_190 = 0x3e85173a;
    local_198 = L"DepTexHeavy";
    local_170 = 0x3d20dc61;
    local_188 = L"s/GigaPix";
    local_178 = L"FillOnly";
    local_168 = L"s/GigaPix";
    local_158 = L"Bandwidth";
    local_148 = L"s/GigaPix";
    local_138 = L"VertThroughPut1";
    local_160 = 0x40400000;
    local_128 = L"s/GigaVert";
    local_150 = 0x3f6ece54;
    local_118 = L"VertThroughPut2";
    local_130 = 0x3f268ee9;
    local_108 = L"s/GigaVert";
    local_110 = 0x3f10e0da;
    local_1a0 = 0x3dcccccd;
    local_19c = 1;
    local_180 = 0x3dcccccd;
    local_17c = 1;
    local_15c = 1;
    local_140 = 0x3f800000;
    local_13c = 1;
    local_120 = 0;
    local_100 = 0;
    ppwVar25 = &local_1c8;
    puVar20 = (undefined8 *)(param_2 + 0x78);
    uVar19 = uVar24;
    do {
      auVar39 = _local_278;
      uVar29 = *(uint *)(ppwVar25 + 1);
      local_288 = ppwVar25[-2];
      pwVar3 = *ppwVar25;
      uVar2 = local_278._0_8_;
      stack0xfffffffffffffd90 = pwVar3;
      local_278._4_4_ = auVar39._4_4_;
      uVar14 = local_278._4_4_;
      local_278._8_4_ = SUB84(pwVar3,0);
      uStack_26c = (undefined4)((ulonglong)pwVar3 >> 0x20);
      auVar5._4_8_ = in_XMM1._8_8_;
      auVar5._0_4_ = local_278._4_4_;
      auVar39._0_8_ = auVar5._0_8_ << 0x20;
      auVar39._8_4_ = local_278._8_4_;
      auVar39._12_4_ = uStack_26c;
      pwVar3 = ppwVar25[2];
      uStack_280 = 0xbf800000;
      auVar40._4_12_ = auVar39._4_12_;
      auVar40._0_4_ = *(undefined4 *)(ppwVar25 + -1);
      uStack_27c = 0xbf800000;
      local_288 = pwVar3;
      unique0x00023e00 = ppwVar25[4];
      uVar37 = *(undefined4 *)(ppwVar25 + 3);
      puVar20[-5] = ppwVar25[-2];
      puVar20[-4] = 0xbf800000bf800000;
      _local_278 = CONCAT88(stack0xfffffffffffffd90,uVar2);
      pwVar4 = ppwVar25[6];
      *(undefined1 (*) [16])(puVar20 + -3) = auVar40;
      uStack_280 = 0xbf800000;
      uStack_26c = (undefined4)((ulonglong)unique0x00023e00 >> 0x20);
      auVar6._4_8_ = auVar39._8_8_;
      auVar6._0_4_ = uVar14;
      auVar41._0_8_ = auVar6._0_8_ << 0x20;
      auVar41._8_4_ = local_278._8_4_;
      auVar41._12_4_ = uStack_26c;
      uStack_27c = 0xbf800000;
      uVar34 = *(uint *)(ppwVar25 + 5);
      auVar42._4_12_ = auVar41._4_12_;
      auVar42._0_4_ = uVar37;
      uVar37 = *(undefined4 *)(ppwVar25 + 7);
      puVar20[-1] = (ulonglong)uVar29 << 0x20;
      local_288 = pwVar4;
      unique0x00023e00 = ppwVar25[8];
      *puVar20 = pwVar3;
      puVar20[1] = 0xbf800000bf800000;
      _local_278 = CONCAT88(stack0xfffffffffffffd90,uVar2);
      pwVar3 = ppwVar25[10];
      *(undefined1 (*) [16])(puVar20 + 2) = auVar42;
      uStack_280 = 0xbf800000;
      uStack_26c = (undefined4)((ulonglong)unique0x00023e00 >> 0x20);
      auVar7._4_8_ = auVar41._8_8_;
      auVar7._0_4_ = uVar14;
      auVar43._0_8_ = auVar7._0_8_ << 0x20;
      auVar43._8_4_ = local_278._8_4_;
      auVar43._12_4_ = uStack_26c;
      uStack_27c = 0xbf800000;
      uVar29 = *(uint *)(ppwVar25 + 9);
      auVar44._4_12_ = auVar43._4_12_;
      auVar44._0_4_ = uVar37;
      uVar37 = *(undefined4 *)(ppwVar25 + 0xb);
      puVar20[4] = (ulonglong)uVar34 << 0x20;
      local_288 = pwVar3;
      unique0x00023e00 = ppwVar25[0xc];
      puVar20[5] = pwVar4;
      puVar20[6] = 0xbf800000bf800000;
      _local_278 = CONCAT88(stack0xfffffffffffffd90,uVar2);
      local_288 = ppwVar25[0xe];
      *(undefined1 (*) [16])(puVar20 + 7) = auVar44;
      uStack_280 = 0xbf800000;
      uStack_26c = (undefined4)((ulonglong)unique0x00023e00 >> 0x20);
      auVar8._4_8_ = auVar43._8_8_;
      auVar8._0_4_ = uVar14;
      auVar45._0_8_ = auVar8._0_8_ << 0x20;
      auVar45._8_4_ = local_278._8_4_;
      auVar45._12_4_ = uStack_26c;
      uStack_27c = 0xbf800000;
      uVar34 = *(uint *)(ppwVar25 + 0xd);
      auVar46._4_12_ = auVar45._4_12_;
      auVar46._0_4_ = uVar37;
      uVar37 = *(undefined4 *)(ppwVar25 + 0xf);
      puVar20[9] = (ulonglong)uVar29 << 0x20;
      unique0x00023e00 = ppwVar25[0x10];
      puVar20[10] = pwVar3;
      puVar20[0xb] = 0xbf800000bf800000;
      _local_278 = CONCAT88(stack0xfffffffffffffd90,uVar2);
      pwVar3 = ppwVar25[0x12];
      *(undefined1 (*) [16])(puVar20 + 0xc) = auVar46;
      uStack_280 = 0xbf800000;
      uStack_26c = (undefined4)((ulonglong)unique0x00023e00 >> 0x20);
      auVar9._4_8_ = auVar45._8_8_;
      auVar9._0_4_ = uVar14;
      auVar47._0_8_ = auVar9._0_8_ << 0x20;
      auVar47._8_4_ = local_278._8_4_;
      auVar47._12_4_ = uStack_26c;
      uStack_27c = 0xbf800000;
      uVar29 = *(uint *)(ppwVar25 + 0x11);
      auVar48._4_12_ = auVar47._4_12_;
      auVar48._0_4_ = uVar37;
      puVar20[0xe] = (ulonglong)uVar34 << 0x20;
      puVar20[0xf] = local_288;
      puVar20[0x10] = 0xbf800000bf800000;
      *(undefined1 (*) [16])(puVar20 + 0x11) = auVar48;
      puVar20[0x13] = (ulonglong)uVar29 << 0x20;
      uVar37 = *(undefined4 *)(ppwVar25 + 0x13);
      uVar29 = *(uint *)(ppwVar25 + 0x15);
      uVar33 = (int)uVar19 + 7;
      uVar19 = (ulonglong)uVar33;
      pwVar4 = ppwVar25[0x18];
      local_288 = pwVar3;
      unique0x00023e00 = ppwVar25[0x14];
      _local_278 = CONCAT88(stack0xfffffffffffffd90,uVar2);
      local_288 = ppwVar25[0x16];
      uStack_280 = 0xbf800000;
      uStack_27c = 0xbf800000;
      uStack_26c = (undefined4)((ulonglong)unique0x00023e00 >> 0x20);
      auVar10._4_8_ = auVar47._8_8_;
      auVar10._0_4_ = uVar14;
      auVar49._0_8_ = auVar10._0_8_ << 0x20;
      auVar49._8_4_ = local_278._8_4_;
      auVar49._12_4_ = uStack_26c;
      stack0xfffffffffffffd90 = pwVar4;
      _local_278 = CONCAT88(stack0xfffffffffffffd90,uVar2);
      puVar20[0x14] = pwVar3;
      puVar20[0x15] = 0xbf800000bf800000;
      auVar50._4_12_ = auVar49._4_12_;
      auVar50._0_4_ = uVar37;
      uVar37 = *(undefined4 *)(ppwVar25 + 0x17);
      uVar34 = *(uint *)(ppwVar25 + 0x19);
      *(undefined1 (*) [16])(puVar20 + 0x16) = auVar50;
      puVar20[0x18] = (ulonglong)uVar29 << 0x20;
      local_278._8_4_ = SUB84(pwVar4,0);
      uStack_26c = (undefined4)((ulonglong)pwVar4 >> 0x20);
      auVar11._4_8_ = auVar49._8_8_;
      auVar11._0_4_ = uVar14;
      auVar51._0_8_ = auVar11._0_8_ << 0x20;
      auVar51._8_4_ = local_278._8_4_;
      auVar51._12_4_ = uStack_26c;
      puVar20[0x19] = local_288;
      puVar20[0x1a] = 0xbf800000bf800000;
      in_XMM1._4_12_ = auVar51._4_12_;
      in_XMM1._0_4_ = uVar37;
      *(undefined1 (*) [16])(puVar20 + 0x1b) = in_XMM1;
      puVar20[0x1d] = (ulonglong)uVar34 << 0x20;
      _local_278 = in_XMM1;
      ppwVar25 = ppwVar25 + 0x1c;
      puVar20 = puVar20 + 0x23;
    } while (uVar33 < 7);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a21fa8) &&
       (_Init_thread_header(&DAT_146a21fa8), DAT_146a21fa8 == -1)) {
      lVar26 = 0x3d;
      puVar20 = &DAT_146a21050;
      do {
        puVar23 = puVar20;
        *puVar23 = 0;
        puVar23[1] = 0;
        puVar23[2] = 0;
        puVar23[3] = 0;
        puVar23[4] = 0;
        puVar23[5] = 0;
        puVar23[6] = 0;
        puVar23[7] = 0;
        lVar26 = lVar26 + -1;
        puVar20 = puVar23 + 8;
      } while (lVar26 != 0);
      puVar23[8] = 0;
      puVar23[9] = 0;
      puVar23[10] = 0;
      atexit(`RendererGPUBenchmark'::`18'::_dynamic_atexit_destructor_for__TimerQueries__);
      _Init_thread_footer(&DAT_146a21fa8);
    }
    plVar30 = &DAT_146a21050;
    lVar26 = 0x1eb;
    do {
      plVar18 = (longlong *)FUN_142747660(&local_338,&local_3f0);
      if (plVar30 != plVar18) {
        puVar20 = (undefined8 *)*plVar30;
        *plVar30 = *plVar18;
        *plVar18 = 0;
        if (puVar20 != (undefined8 *)0x0) {
          LOCK();
          piVar27 = (int *)(puVar20 + 1);
          iVar16 = *piVar27;
          *piVar27 = *piVar27 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            if ((*(char *)(puVar20 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar15 = FOutputDevice::CanBeUsedOnAnyThread(), cVar15 == '\0')))) {
              LOCK();
              bVar35 = *(int *)((longlong)puVar20 + 0xc) == 0;
              if (bVar35) {
                *(int *)((longlong)puVar20 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar35) {
                uVar29 = FLockFreeLinkPolicy::AllocLockFreeLink();
                uVar19 = uVar24;
                if (uVar29 != 0) {
                  uVar19 = (&DAT_1468a81f8)[uVar29 >> 0xe] + (ulonglong)(uVar29 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(uVar19 + 8) = puVar20;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar20)(puVar20,1);
            }
          }
        }
      }
      puVar20 = (undefined8 *)CONCAT44(uStack_3ec,local_3f0);
      if (puVar20 != (undefined8 *)0x0) {
        LOCK();
        piVar27 = (int *)(puVar20 + 1);
        iVar16 = *piVar27;
        *piVar27 = *piVar27 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          if ((*(char *)(puVar20 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar15 = FOutputDevice::CanBeUsedOnAnyThread(), cVar15 == '\0')))) {
            LOCK();
            bVar35 = *(int *)((longlong)puVar20 + 0xc) == 0;
            if (bVar35) {
              *(int *)((longlong)puVar20 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar35) {
              uVar29 = FLockFreeLinkPolicy::AllocLockFreeLink();
              uVar19 = uVar24;
              if (uVar29 != 0) {
                uVar19 = (&DAT_1468a81f8)[uVar29 >> 0xe] + (ulonglong)(uVar29 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(uVar19 + 8) = puVar20;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar20)(puVar20,1);
          }
        }
      }
      lVar21 = local_3f8;
      plVar30 = plVar30 + 1;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    local_434 = DAT_146a21050 != 0;
    if (DAT_146a21050 != 0) {
      FUN_141a15a30(local_3f8,0xffffffff);
      if (*(int *)(lVar21 + 0x14) != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,lVar21);
      }
      FUN_141ed93a0(lVar21);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(lVar21);
      }
      FRHICommandListBase::WaitForTasks(lVar21);
      local_250[1] = (float *)0x0;
      piVar27 = local_240;
      local_240[0] = 0;
      local_240[1] = 0;
      lVar26 = 7;
      local_238 = 0;
      local_230 = 0;
      local_228 = 0;
      local_220 = 0;
      local_218 = 0;
      local_210 = 0;
      local_208 = 0;
      local_200 = 0;
      local_1f8 = 0;
      local_1f0 = 0;
      local_1e8[0] = 0;
      local_1e8[1] = 0;
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_f8[2] = 0;
      local_f8[3] = 0;
      local_f8[4] = 0;
      local_f8[5] = 0;
      local_f8[6] = 0;
      do {
        iVar16 = *piVar27;
        iVar17 = iVar16 + 0x46;
        *piVar27 = iVar17;
        if (piVar27[1] < iVar17) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(piVar27 + -2);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(piVar27 + -2) + (longlong)iVar16 * 4),0,0x118);
        lVar13 = DAT_146a21050;
        piVar27 = piVar27 + 4;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      puVar23 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar20 = puVar23 + 3;
      if (*(undefined8 **)(lVar21 + 0x38) < puVar20) {
        FMemStackBase::AllocateNewChunk(lVar21 + 0x30,0x20);
        puVar23 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar20 = puVar23 + 3;
      }
      *(undefined8 **)(lVar21 + 0x30) = puVar20;
      *(int *)(lVar21 + 0x14) = *(int *)(lVar21 + 0x14) + 1;
      local_420 = (float *)&DAT_146a21fb0;
      **(undefined8 **)(lVar21 + 8) = puVar23;
      *(undefined8 **)(lVar21 + 8) = puVar23 + 1;
      puVar23[1] = 0;
      *puVar23 = &PTR_LAB_143f59490;
      puVar23[2] = lVar13;
      local_438 = 0.0;
      uVar19 = uVar24;
      do {
        uVar29 = 0;
        local_430 = (int)uVar24 * 7 + 1;
        fVar53 = ((float)uVar24 * 0.1 + 1.0) * param_4;
        do {
          pfVar22 = local_420;
          uVar34 = 1 - (int)uVar19;
          AK::MemoryMgr::StartProfileThreadUsage(0x464c2590);
          uVar32 = 0;
          local_3b8 = 0;
          local_3b4 = 0xffffffff;
          local_3b0[0] = 0x101;
          local_3c0 = *(undefined8 *)(local_260[uVar19] + 8);
          local_410 = 0;
          uStack_408 = 0x1010101;
          uStack_404 = 0x22;
          FUN_141ae34d0(lVar21,local_3c0,0,0x22);
          *(undefined4 *)(lVar21 + 0x98) = 1;
          uVar24 = uVar32;
          do {
            uVar33 = (int)uVar24 + 1;
            uVar12 = *(undefined8 *)(&local_3b8 + uVar24 * 6);
            uVar2 = *(undefined8 *)(local_3b0 + uVar24 * 0xc);
            puVar20 = (undefined8 *)(lVar21 + (uVar24 * 3 + 0x14) * 8);
            *puVar20 = (&local_3c0)[uVar24 * 3];
            puVar20[1] = uVar12;
            *(undefined8 *)(lVar21 + (uVar24 * 3 + 0x16) * 8) = uVar2;
            uVar24 = (ulonglong)uVar33;
          } while (uVar33 < *(uint *)(lVar21 + 0x98));
          *(longlong *)(lVar21 + 0x160) = local_410;
          *(ulonglong *)(lVar21 + 0x168) = CONCAT44(uStack_404,uStack_408);
          puVar23 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar20 = puVar23 + 0x26;
          if (*(undefined8 **)(lVar21 + 0x38) < puVar20) {
            FMemStackBase::AllocateNewChunk(lVar21 + 0x30,0x138);
            puVar23 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar20 = puVar23 + 0x26;
          }
          *(undefined8 **)(lVar21 + 0x30) = puVar20;
          iVar16 = 0;
          *(int *)(lVar21 + 0x14) = *(int *)(lVar21 + 0x14) + 1;
          **(undefined8 **)(lVar21 + 8) = puVar23;
          *(undefined8 **)(lVar21 + 8) = puVar23 + 1;
          puVar23[1] = 0;
          *puVar23 = &PTR_LAB_143f59440;
          *(undefined4 *)(puVar23 + 2) = 1;
          puVar23[3] = 0;
          *(undefined4 *)(puVar23 + 4) = 0;
          *(undefined4 *)((longlong)puVar23 + 0x24) = 0xffffffff;
          *(undefined2 *)(puVar23 + 5) = 0;
          puVar23[6] = 0;
          *(undefined4 *)(puVar23 + 7) = 0;
          *(undefined4 *)((longlong)puVar23 + 0x3c) = 0xffffffff;
          *(undefined2 *)(puVar23 + 8) = 0;
          puVar23[9] = 0;
          *(undefined4 *)(puVar23 + 10) = 0;
          *(undefined4 *)((longlong)puVar23 + 0x54) = 0xffffffff;
          *(undefined2 *)(puVar23 + 0xb) = 0;
          puVar23[0xc] = 0;
          *(undefined4 *)(puVar23 + 0xd) = 0;
          *(undefined4 *)((longlong)puVar23 + 0x6c) = 0xffffffff;
          *(undefined2 *)(puVar23 + 0xe) = 0;
          puVar23[0xf] = 0;
          *(undefined4 *)(puVar23 + 0x10) = 0;
          *(undefined4 *)((longlong)puVar23 + 0x84) = 0xffffffff;
          *(undefined2 *)(puVar23 + 0x11) = 0;
          puVar23[0x12] = 0;
          *(undefined4 *)(puVar23 + 0x13) = 0;
          *(undefined4 *)((longlong)puVar23 + 0x9c) = 0xffffffff;
          *(undefined2 *)(puVar23 + 0x14) = 0;
          puVar23[0x15] = 0;
          *(undefined4 *)(puVar23 + 0x16) = 0;
          *(undefined4 *)((longlong)puVar23 + 0xb4) = 0xffffffff;
          *(undefined2 *)(puVar23 + 0x17) = 0;
          puVar23[0x18] = 0;
          *(undefined4 *)(puVar23 + 0x19) = 0;
          *(undefined4 *)((longlong)puVar23 + 0xcc) = 0xffffffff;
          *(undefined2 *)(puVar23 + 0x1a) = 0;
          puVar23[0x1b] = 0;
          *(undefined4 *)(puVar23 + 0x1c) = 0;
          *(undefined8 *)((longlong)puVar23 + 0xe4) = 0;
          uVar24 = uVar32;
          if (*(int *)(puVar23 + 2) != 0) {
            do {
              uVar33 = (int)uVar24 + 1;
              uVar2 = *(undefined8 *)(&local_3b8 + uVar24 * 6);
              puVar23[uVar24 * 3 + 3] = (&local_3c0)[uVar24 * 3];
              (puVar23 + uVar24 * 3 + 3)[1] = uVar2;
              puVar23[uVar24 * 3 + 5] = *(undefined8 *)(local_3b0 + uVar24 * 0xc);
              uVar24 = (ulonglong)uVar33;
            } while (uVar33 < *(uint *)(puVar23 + 2));
            iVar16 = *(int *)(puVar23 + 0x1d);
          }
          if (iVar16 != 0) {
            do {
              uVar33 = (int)uVar32 + 1;
              puVar23[uVar32 + 0x1e] = *(undefined8 *)(uVar32 * 8);
              uVar32 = (ulonglong)uVar33;
            } while (uVar33 < *(uint *)(puVar23 + 0x1d));
          }
          *pfVar22 = fVar53;
          puVar23[0x1b] = local_410;
          puVar23[0x1c] = CONCAT44(uStack_404,uStack_408);
          switch(uVar29) {
          case 0:
            local_458 = (wchar_t *)CONCAT44(local_458._4_4_,fVar53);
            FUN_141b4fed0(lVar21,local_418,local_428);
            break;
          case 1:
            local_458 = (wchar_t *)CONCAT44(local_458._4_4_,fVar53);
            FUN_141b4eb90(lVar21,local_418,local_428);
            break;
          case 2:
            local_458 = (wchar_t *)CONCAT44(local_458._4_4_,fVar53);
            FUN_141b4f060(lVar21,local_418,local_428);
            break;
          case 3:
            local_458 = (wchar_t *)CONCAT44(local_458._4_4_,fVar53);
            FUN_141b4f530(lVar21,local_418,local_428);
            break;
          case 4:
            local_458 = (wchar_t *)CONCAT44(local_458._4_4_,fVar53);
            FUN_141b4fa00(lVar21,local_418,local_428);
            break;
          case 5:
            local_458 = (wchar_t *)CONCAT44(local_458._4_4_,fVar53);
            FUN_141b4e430(lVar21,local_418,local_428);
            break;
          case 6:
            local_458 = (wchar_t *)CONCAT44(local_458._4_4_,fVar53);
            FUN_141b4e7e0(lVar21,0,local_428,local_260 + uVar34);
          }
          local_3a8 = 0xffffffff00000000;
          uStack_3a0 = 0xffffffffffffffff;
          puVar23 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
          local_398 = _DAT_143f39c70;
          local_388 = 0xffffffff;
          uStack_380 = 0;
          uVar2 = *(undefined8 *)(local_260[uVar19] + 0x10);
          plVar30 = *(longlong **)(local_260[uVar19] + 8);
          puVar20 = puVar23 + 10;
          if (*(undefined8 **)(lVar21 + 0x38) < puVar20) {
            FMemStackBase::AllocateNewChunk(lVar21 + 0x30,0x58);
            puVar23 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar20 = puVar23 + 10;
          }
          *(undefined8 **)(lVar21 + 0x30) = puVar20;
          *(int *)(lVar21 + 0x14) = *(int *)(lVar21 + 0x14) + 1;
          **(undefined8 **)(lVar21 + 8) = puVar23;
          *(undefined8 **)(lVar21 + 8) = puVar23 + 1;
          puVar23[1] = 0;
          *puVar23 = &PTR_LAB_143f489f0;
          *(undefined4 *)(puVar23 + 2) = (undefined4)local_3a8;
          *(undefined4 *)((longlong)puVar23 + 0x14) = local_3a8._4_4_;
          *(undefined4 *)(puVar23 + 3) = (undefined4)uStack_3a0;
          *(undefined4 *)((longlong)puVar23 + 0x1c) = uStack_3a0._4_4_;
          *(undefined4 *)(puVar23 + 4) = local_398._0_4_;
          *(undefined4 *)((longlong)puVar23 + 0x24) = local_398._4_4_;
          *(undefined4 *)(puVar23 + 5) = local_398._8_4_;
          *(undefined4 *)((longlong)puVar23 + 0x2c) = local_398._12_4_;
          *(undefined4 *)(puVar23 + 6) = (undefined4)local_388;
          *(undefined4 *)((longlong)puVar23 + 0x34) = local_388._4_4_;
          *(undefined4 *)(puVar23 + 7) = (undefined4)uStack_380;
          *(undefined4 *)((longlong)puVar23 + 0x3c) = uStack_380._4_4_;
          puVar23[8] = plVar30;
          puVar23[9] = uVar2;
          lVar26 = (**(code **)(*plVar30 + 8))(plVar30);
          if ((lVar26 == 0) &&
             (lVar26 = (**(code **)(*(longlong *)puVar23[8] + 0x18))(), lVar26 == 0)) {
            (**(code **)(*(longlong *)puVar23[8] + 0x20))();
          }
          lVar26 = (**(code **)(*(longlong *)puVar23[9] + 8))();
          if ((lVar26 == 0) &&
             (lVar26 = (**(code **)(*(longlong *)puVar23[9] + 0x18))(), lVar26 == 0)) {
            (**(code **)(*(longlong *)puVar23[9] + 0x20))();
          }
          uVar2 = (&DAT_146a21050)[local_430 + uVar29];
          puVar23 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar20 = puVar23 + 3;
          if (*(undefined8 **)(lVar21 + 0x38) < puVar20) {
            FMemStackBase::AllocateNewChunk(lVar21 + 0x30,0x20);
            puVar23 = (undefined8 *)(*(longlong *)(lVar21 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar20 = puVar23 + 3;
          }
          *(undefined8 **)(lVar21 + 0x30) = puVar20;
          uVar29 = uVar29 + 1;
          uVar19 = (ulonglong)uVar34;
          *(int *)(lVar21 + 0x14) = *(int *)(lVar21 + 0x14) + 1;
          **(undefined8 **)(lVar21 + 8) = puVar23;
          *(undefined8 **)(lVar21 + 8) = puVar23 + 1;
          puVar23[1] = 0;
          *puVar23 = &PTR_LAB_143f59490;
          puVar23[2] = uVar2;
        } while (uVar29 < 7);
        local_420 = local_420 + 1;
        local_438 = (float)((int)local_438 + 1);
        uVar24 = (ulonglong)(uint)local_438;
      } while ((uint)local_438 < 0x46);
      local_3e8 = 0;
      if (*(int *)(lVar21 + 0x14) != 0) {
        FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,lVar21);
      }
      FUN_141ed93a0(lVar21);
      if (DAT_146ab6383 != '\0') {
        FRHICommandListBase::WaitForRHIThreadTasks(lVar21);
      }
      FRHICommandListBase::WaitForTasks(lVar21,1);
      (**(code **)(*DAT_146ab6358 + 0x340))(DAT_146ab6358,DAT_146a21050,&local_3e8,1);
      FRenderQueryPool::ReleaseQuery(&local_338,&DAT_146a21050);
      local_370 = (longlong)&DAT_146a21fb0 - (longlong)local_250[1];
      local_368 = local_238 - (longlong)local_250[1];
      local_438 = 0.0;
      local_360 = local_228 - (longlong)local_250[1];
      local_358 = local_218 - (longlong)local_250[1];
      local_350 = local_208 - (longlong)local_250[1];
      local_348 = local_1f8 - (longlong)local_250[1];
      local_410 = local_1e8[0] - (longlong)local_250[1];
      local_420 = (float *)CONCAT44(local_420._4_4_,local_100._4_4_);
      local_428 = CONCAT44(local_428._4_4_,local_120._4_4_);
      local_3f0 = local_13c;
      local_3f8 = CONCAT44(local_3f8._4_4_,local_15c);
      local_3fc = local_17c;
      local_400 = local_19c;
      local_430 = local_1bc;
      pfVar22 = local_250[1];
      do {
        iVar16 = (int)local_438 * 7;
        uVar29 = 0;
        plVar30 = local_f8;
        ppwVar25 = &local_288;
        do {
          (**(code **)(*DAT_146ab6358 + 0x340))
                    (DAT_146ab6358,(&DAT_146a21050)[iVar16 + 1 + uVar29],&local_378,1);
          FRenderQueryPool::ReleaseQuery(&local_338,&DAT_146a21050 + (iVar16 + 1 + uVar29));
          lVar21 = local_378 - local_3e8;
          local_3e8 = local_378;
          lVar26 = 1;
          if (lVar21 != 0) {
            lVar26 = lVar21;
          }
          uVar29 = uVar29 + 1;
          *plVar30 = *plVar30 + lVar26;
          *(int *)ppwVar25 = (int)lVar26;
          plVar30 = plVar30 + 1;
          ppwVar25 = (wchar_t **)((longlong)ppwVar25 + 4);
        } while (uVar29 < 7);
        fVar53 = *(float *)(local_370 + (longlong)pfVar22);
        fVar52 = fVar53 * 0.0006;
        if (local_430 == 0) {
          fVar36 = 0.0016666667;
        }
        else {
          fVar36 = 0.0038146973;
        }
        *pfVar22 = (fVar36 / fVar53) * (float)((ulonglong)local_288 & 0xffffffff);
        if (local_400 == 0) {
          fVar36 = 0.0016666667;
        }
        else {
          fVar36 = 0.0038146973;
        }
        *(float *)(local_368 + (longlong)pfVar22) =
             (fVar36 / fVar53) * (float)((ulonglong)local_288 >> 0x20);
        if (local_3fc == 0) {
          fVar36 = 1e-06 / fVar52;
        }
        else {
          fVar36 = 1.953125 / (fVar53 * 512.0);
        }
        fVar38 = fVar53 * 512.0 * 5.12e-07;
        *(float *)(local_360 + (longlong)pfVar22) = fVar36 * (float)uStack_280;
        fVar53 = fVar38;
        if ((int)local_3f8 == 0) {
          fVar53 = fVar52;
        }
        *(float *)(local_358 + (longlong)pfVar22) = (1e-06 / fVar53) * (float)uStack_27c;
        fVar53 = fVar38;
        if (local_3f0 == 0) {
          fVar53 = fVar52;
        }
        *(float *)(local_350 + (longlong)pfVar22) = (1e-06 / fVar53) * (float)(uint)local_278._0_4_;
        fVar53 = fVar38;
        if ((int)local_428 == 0) {
          fVar53 = fVar52;
        }
        *(float *)(local_348 + (longlong)pfVar22) = (1e-06 / fVar53) * (float)(uint)local_278._4_4_;
        if ((int)local_420 == 0) {
          fVar38 = fVar52;
        }
        *(float *)(local_410 + (longlong)pfVar22) = (1e-06 / fVar38) * (float)(uint)local_278._8_4_;
        pfVar22 = pfVar22 + 1;
        local_438 = (float)((int)local_438 + 1);
      } while ((uint)local_438 < 0x46);
      lVar26 = 7;
      if (local_434 != '\0') {
        plVar30 = local_f8;
        ppfVar31 = local_250 + 1;
        puVar28 = (undefined4 *)(local_340 + 0x5c);
        lVar21 = 7;
        do {
          local_438 = 0.0;
          uVar37 = FTimingSeries::ComputeValue(ppfVar31,&local_438);
          if (0.0 < local_438) {
            fVar53 = (float)*plVar30;
            if (*plVar30 < 0) {
              fVar53 = fVar53 + 1.8446744e+19;
            }
            *puVar28 = uVar37;
            puVar28[5] = local_438;
            puVar28[-1] = fVar53 * 1e-06;
          }
          ppfVar31 = ppfVar31 + 2;
          puVar28 = puVar28 + 10;
          plVar30 = plVar30 + 1;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      plVar30 = local_1e8 + 2;
      do {
        plVar18 = plVar30 + -2;
        plVar30 = plVar30 + -2;
        lVar26 = lVar26 + -1;
        if (*plVar18 != 0) {
          FMemory::Free();
        }
      } while (lVar26 != 0);
    }
    ppfVar31 = local_250 + 1;
    lVar26 = 3;
    do {
      ppfVar1 = ppfVar31 + 0xffffffffffffffff;
      ppfVar31 = ppfVar31 + 0xffffffffffffffff;
      lVar26 = lVar26 + -1;
      if (*ppfVar1 != (float *)0x0) {
        (**(code **)(*(longlong *)*ppfVar1 + 0x30))();
      }
    } while (lVar26 != 0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_418);
    if (local_3d8 != 0) {
      FMemory::Free();
    }
  }
  FRenderQueryPool::~FRenderQueryPool(&local_338);
  return;
}



// FUNCTION 141b6c5b0 FUN_141b6c5b0 body=151 status=ok
// SIG undefined FUN_141b6c5b0(void)

void FUN_141b6c5b0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x78);
  if (param_3 < 6) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x18);
    pvVar1 = *(void **)((longlong)param_1 + 0x78);
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
        *(void **)((longlong)param_1 + 0x78) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x18);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar2;
  return;
}



// FUNCTION 141b6c650 FUN_141b6c650 body=263 status=ok
// SIG undefined FUN_141b6c650(void)

void FUN_141b6c650(undefined8 *param_1,int param_2,int param_3,int param_4)

{
  ulonglong *puVar1;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *_Dst;
  int iVar6;
  undefined1 local_res18 [16];
  undefined *local_48;
  undefined1 *puStack_40;
  
  if (param_3 != 0) {
    _Src = (void *)*param_1;
    puStack_40 = local_res18;
    local_48 = &DAT_14060d670;
    local_res18[0] = 0;
    iVar6 = param_3 * param_4;
    lVar3 = FUN_1415d8310(&local_48,&DAT_146216a38);
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    uVar2 = 8;
    if (0xf < iVar6) {
      uVar2 = 0x10;
    }
    uVar5 = 0x10;
    if (0xf < iVar6) {
      uVar5 = (ulonglong)uVar2;
    }
    _Dst = (void *)((*puVar1 - 1) + uVar5 & ~(uVar5 - 1));
    uVar4 = (longlong)iVar6 + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
      FMemStackBase::AllocateNewChunk(puVar1,iVar6 + (int)uVar5);
      _Dst = (void *)((*puVar1 - 1) + uVar5 & ~(uVar5 - 1));
      uVar4 = (longlong)iVar6 + (longlong)_Dst;
    }
    *puVar1 = uVar4;
    *param_1 = _Dst;
    if ((_Src != (void *)0x0) && (param_2 != 0)) {
      if (param_3 <= param_2) {
        param_2 = param_3;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(param_2 * param_4));
    }
  }
  return;
}



// FUNCTION 141b6c760 FUN_141b6c760 body=155 status=ok
// SIG undefined FUN_141b6c760(void)

void FUN_141b6c760(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x88);
  if (param_3 < 4) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x2c);
    pvVar1 = *(void **)((longlong)param_1 + 0x88);
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
        *(void **)((longlong)param_1 + 0x88) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x2c);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x88) = uVar2;
  return;
}



// FUNCTION 141b6c800 FUN_141b6c800 body=155 status=ok
// SIG undefined FUN_141b6c800(void)

void FUN_141b6c800(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (param_2 != 0) {
    if (param_2 < 2) {
      uVar4 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x78,0);
      uVar4 = (uint)(uVar2 / 0x78);
      if ((int)uVar4 < (int)param_2) {
        uVar4 = 0x7fffffff;
      }
    }
  }
  if (uVar4 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (uVar4 < 2) {
      if (lVar1 == 0) goto LAB_141b6c885;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar4 == 0)) goto LAB_141b6c885;
      lVar5 = (longlong)(int)uVar4 * 0x78;
    }
    uVar3 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
  }
LAB_141b6c885:
  *(uint *)(param_1 + 0x84) = uVar4;
  return;
}



// FUNCTION 141b6c8a0 ResizeForCopy body=139 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<TRefCountPtr<FRHIUnorderedAccessView>,TInlineAllocator<1,FDefaultAllocator>_>::
     ResizeForCopy(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 2) {
      uVar2 = 1;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      uVar2 = (uint)(uVar3 >> 3);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 != param_3) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (uVar2 < 2) {
      if (lVar1 == 0) goto LAB_141b6c918;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar2 == 0)) goto LAB_141b6c918;
      lVar5 = (longlong)(int)uVar2 << 3;
    }
    uVar4 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 8) = uVar4;
  }
LAB_141b6c918:
  *(uint *)(param_1 + 0x14) = uVar2;
  return;
}



// FUNCTION 141b6c930 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FRHIUnorderedAccessView_*,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x38);
  if (uVar1 < 7) {
    uVar2 = 6;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x3c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x3c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x30);
  if (uVar2 < 7) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x30);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0x30) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar5;
  return;
}



// FUNCTION 141b6ca20 ResizeGrow body=157 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
     ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  if (uVar1 < 6) {
    iVar4 = 5;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x84) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x18,0);
    iVar4 = (int)(uVar3 / 0x18);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x84) = iVar4;
  FUN_141b6c5b0(param_1,param_2,iVar4,0x18);
  return;
}



// FUNCTION 141b6cac0 FUN_141b6cac0 body=65 status=ok
// SIG undefined FUN_141b6cac0(void)

void FUN_141b6cac0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  uVar1 = *(uint *)(param_1 + 8);
  if ((*(int *)(param_1 + 0xc) != 0) || (4 < uVar1)) {
    iVar2 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
  }
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  FUN_141b6c650(param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 141b6cb10 ResizeGrow body=65 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FRayTracingGeometryInstance,TMemStackAllocator<0>_>::ResizeGrow
               (longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  uVar1 = *(uint *)(param_1 + 8);
  if ((*(int *)(param_1 + 0xc) != 0) || (4 < uVar1)) {
    iVar2 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
  }
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  FUN_141b6c650(param_1,param_2,iVar2,0x90);
  return;
}



// FUNCTION 141b6cb60 ResizeGrow body=153 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FVolumeUpdateRegion,TInlineAllocator<3,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if (uVar1 < 4) {
    iVar4 = 3;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x94) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x2c,0);
    iVar4 = (int)(uVar3 / 0x2c);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x94) = iVar4;
  FUN_141b6c760(param_1,param_2,iVar4,0x2c);
  return;
}



// FUNCTION 141b6cc00 ResizeShrink body=178 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FTextureLayout3d::FTextureLayoutNode3d,TInlineAllocator<5,FDefaultAllocator>_>::
     ResizeShrink(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x80);
  uVar3 = *(uint *)(param_1 + 0x84);
  if (uVar2 < 6) {
    uVar2 = 5;
    goto LAB_141b6cc85;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x18)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x18,0);
        uVar3 = *(uint *)(param_1 + 0x84);
        uVar2 = (uint)(uVar1 / 0x18);
      }
      goto LAB_141b6cc85;
    }
    if (uVar2 == 0) goto LAB_141b6cc85;
  }
  uVar2 = uVar3;
LAB_141b6cc85:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x84) = uVar2;
    FUN_141b6c5b0(param_1,*(undefined4 *)(param_1 + 0x80),uVar2,0x18);
    return;
  }
  return;
}



// FUNCTION 141b6ccc0 ResizeShrink body=170 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FVolumeUpdateRegion,TInlineAllocator<3,FDefaultAllocator>_>::ResizeShrink
               (longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x90);
  uVar3 = *(uint *)(param_1 + 0x94);
  if (uVar2 < 4) {
    uVar2 = 3;
    goto LAB_141b6cd3d;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x2c)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x2c,0);
        uVar3 = *(uint *)(param_1 + 0x94);
        uVar2 = (uint)(uVar1 / 0x2c);
      }
      goto LAB_141b6cd3d;
    }
    if (uVar2 == 0) goto LAB_141b6cd3d;
  }
  uVar2 = uVar3;
LAB_141b6cd3d:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x94) = uVar2;
    FUN_141b6c760(param_1,*(undefined4 *)(param_1 + 0x90),uVar2,0x2c);
    return;
  }
  return;
}



// FUNCTION 141b6cd70 FUN_141b6cd70 body=26 status=ok
// SIG undefined FUN_141b6cd70(void)

void FUN_141b6cd70(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_141b6c650(param_1,*(undefined4 *)(param_1 + 8),param_2,0x10);
    return;
  }
  return;
}



// FUNCTION 141b6cd90 FUN_141b6cd90 body=26 status=ok
// SIG undefined FUN_141b6cd90(void)

void FUN_141b6cd90(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_141b6c650(param_1,*(undefined4 *)(param_1 + 8),param_2,0x90);
    return;
  }
  return;
}



// FUNCTION 141b6cdb0 FUN_141b6cdb0 body=123 status=ok
// SIG undefined FUN_141b6cdb0(void)

void FUN_141b6cdb0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 4) {
      iVar2 = 3;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x2c,0);
      iVar2 = (int)(uVar1 / 0x2c);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x94)) {
    *(int *)(param_1 + 0x94) = iVar2;
    FUN_141b6c760(param_1,*(undefined4 *)(param_1 + 0x90),iVar2,0x2c);
  }
  return;
}



// FUNCTION 141b6ce30 FUN_141b6ce30 body=524 status=ok
// SIG undefined FUN_141b6ce30(void)

void FUN_141b6ce30(longlong param_1,longlong param_2,uint *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,undefined4 param_8,char param_9
                  )

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int local_res8 [2];
  undefined8 local_res10;
  longlong local_48;
  undefined8 *local_40;
  
  local_res8[0] = 0;
  for (uVar4 = param_7; uVar4 != 0; uVar4 = uVar4 >> 1) {
    local_res8[0] = local_res8[0] + 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_40 = &local_res10;
  uVar5 = *(undefined8 *)(lVar2 + 0x60);
  local_res10 = uVar5;
  local_48 = param_2;
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar3 = *param_4;
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    *puVar7 = &PTR_LAB_144d92090;
    puVar7[2] = uVar5;
    puVar7[4] = uVar3;
  }
  uVar4 = (uint)((*param_3 & 0xfffffffd) == 0);
  param_7 = uVar4 | 2;
  if (1 < *param_3) {
    param_7 = uVar4;
  }
  if (param_9 != '\0') {
    param_7 = param_7 | 4;
  }
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (local_48,*local_40,param_1 + 200,&param_7,0);
  uVar5 = GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
                    (&local_48,param_1 + 0xce,param_5);
  puVar6 = (undefined8 *)
           GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
                     (uVar5,param_1 + 0xd4,param_6);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (*puVar6,*(undefined8 *)puVar6[1],param_1 + 0xda,local_res8,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (*puVar6,*(undefined8 *)puVar6[1],param_1 + 0xe0,&param_8,0);
  return;
}



// FUNCTION 141b6d040 FUN_141b6d040 body=462 status=ok
// SIG undefined FUN_141b6d040(void)

void FUN_141b6d040(longlong param_1,longlong param_2,byte param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  uint local_res18 [4];
  longlong local_48;
  undefined8 *local_40;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_40 = &local_res8;
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res18[0] = (uint)param_3;
  local_res8 = uVar3;
  uVar4 = *param_6;
  local_48 = param_2;
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar5 = *param_5;
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    *puVar7 = &PTR_LAB_144d92090;
    puVar7[2] = uVar3;
    puVar7[4] = uVar5;
  }
  lVar2 = local_48;
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar3 = *local_40;
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar7 = (undefined8 *)(*(longlong *)(local_48 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(local_48 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(local_48 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(lVar2 + 0x30) = puVar6;
    *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
    **(undefined8 **)(lVar2 + 8) = puVar7;
    *(undefined8 **)(lVar2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d92090;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  puVar6 = (undefined8 *)
           GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
                     (&local_48,param_1 + 0xcc,param_4);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (*puVar6,*(undefined8 *)puVar6[1],param_1 + 0xd2,local_res18,0);
  return;
}



// FUNCTION 141b6d210 FUN_141b6d210 body=549 status=ok
// SIG undefined FUN_141b6d210(void)

void FUN_141b6d210(longlong param_1,longlong param_2,uint *param_3,undefined8 *param_4,
                  longlong param_5,int *param_6,undefined8 param_7)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint local_res8 [2];
  undefined8 local_res10;
  longlong local_48;
  undefined8 *local_40;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_40 = &local_res10;
  local_res10 = uVar3;
  local_48 = param_2;
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar4 = *param_4;
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar3;
    puVar8[4] = uVar4;
  }
  pfVar5 = (float *)CONCAT44(param_7._4_4_,(int)param_7);
  uVar7 = (uint)((*param_3 & 0xfffffffd) == 0);
  local_res8[0] = uVar7 | 2;
  if (1 < *param_3) {
    local_res8[0] = uVar7;
  }
  if (*pfVar5 <= pfVar5[1] && pfVar5[1] != *pfVar5) {
    local_res8[0] = local_res8[0] | 4;
  }
  param_7._0_4_ = param_6[2] - *param_6;
  param_7._4_4_ = param_6[3] - param_6[1];
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (local_48,*local_40,param_1 + 200,local_res8,0);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (local_48,*local_40,param_1 + 0xce,param_5,0);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (local_48,*local_40,param_1 + 0xd4,param_5 + 8,0);
  puVar6 = (undefined8 *)
           GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
                     (&local_48,param_1 + 0xe0,param_6);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (*puVar6,*(undefined8 *)puVar6[1],param_1 + 0xda,&param_7,0);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (*puVar6,*(undefined8 *)puVar6[1],param_1 + 0xe6,pfVar5,0);
  return;
}



// FUNCTION 141b6d440 FUN_141b6d440 body=531 status=ok
// SIG undefined FUN_141b6d440(void)

void FUN_141b6d440(longlong param_1,longlong param_2,uint *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong param_6,undefined8 param_7)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint local_res8 [2];
  
  bVar7 = (*param_3 & 0xfffffffd) == 0;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_res8[0] = bVar7 | 2;
  if (1 < *param_3) {
    local_res8[0] = (uint)bVar7;
  }
  local_res8[0] = local_res8[0] | 8;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar4 = *param_5;
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    *puVar6 = &PTR_LAB_144d92090;
    puVar6[2] = uVar3;
    puVar6[4] = uVar4;
  }
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 200,param_6,0);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0xce,param_6 + 8,0);
  SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
            (param_2,uVar3,param_1 + 0xd4,param_7,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0xda,local_res8,0)
  ;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar4 = *param_4;
    uVar1 = *(ushort *)(param_1 + 0xe0);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d92090;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  return;
}



// FUNCTION 141b6d660 FUN_141b6d660 body=535 status=ok
// SIG undefined FUN_141b6d660(void)

void FUN_141b6d660(longlong param_1,longlong param_2,uint *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,uint param_8,char param_9)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  longlong local_58;
  undefined8 *local_50;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x60);
  local_50 = &local_res20;
  local_res20 = uVar4;
  local_58 = param_2;
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar3 = *param_4;
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    *puVar6 = &PTR_LAB_144d92090;
    puVar6[2] = uVar4;
    puVar6[4] = uVar3;
  }
  local_res10[0] = 0;
  uVar7 = (uint)((*param_3 & 0xfffffffd) == 0);
  local_res8[0] = uVar7 | 2;
  if (1 < *param_3) {
    local_res8[0] = uVar7;
  }
  local_res18[0] = local_res10[0];
  if (param_9 != '\0') {
    local_res8[0] = local_res8[0] | 4;
  }
  for (; param_8 != 0; param_8 = param_8 >> 1) {
    local_res18[0] = local_res18[0] + 1;
  }
  local_res18[0] = local_res18[0] + -1;
  for (; param_7 != 0; param_7 = param_7 >> 1) {
    local_res10[0] = local_res10[0] + 1;
  }
  local_res10[0] = local_res10[0] + -1;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (local_58,*local_50,param_1 + 200,local_res8,0);
  uVar4 = GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
                    (&local_58,param_1 + 0xce,param_5);
  puVar5 = (undefined8 *)
           GPUFFTComputeShaderUtils::FComputeParamterValueSetter::operator()<FIntRect>
                     (uVar4,param_1 + 0xd4,param_6);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (*puVar5,*(undefined8 *)puVar5[1],param_1 + 0xda,local_res10,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (*puVar5,*(undefined8 *)puVar5[1],param_1 + 0xe0,local_res18,0);
  return;
}



// FUNCTION 141b6d880 FUN_141b6d880 body=655 status=ok
// SIG undefined FUN_141b6d880(void)

void FUN_141b6d880(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x338) + 8);
  puVar6 = puVar8 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *puVar8 = uVar2;
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar7 + 2) = 1;
  puVar7[3] = puVar8;
  *(undefined4 *)(puVar7 + 4) = 2;
  *(undefined1 *)((longlong)puVar7 + 0x24) = 0;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  uVar4 = **(undefined8 **)(param_3 + 0x340);
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d91e40;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_3 + 0x60) + 0x10);
  uVar5 = FUN_141b33cc0();
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144d92090;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb3b8;
    puVar8[2] = uVar2;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  return;
}



// FUNCTION 141b6db10 FUN_141b6db10 body=1883 status=ok
// SIG undefined FUN_141b6db10(void)

void FUN_141b6db10(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
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
  char cVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  undefined1 local_f88 [3280];
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  
  lVar14 = *(longlong *)(param_2 + 0x30);
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar15 + 0x38) < DAT_146a1ecc8) {
    _Init_thread_header(&DAT_146a1ecc8);
    if (DAT_146a1ecc8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146a1ecc0 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GbxSky.CubeMapResolution");
      _Init_thread_footer(&DAT_146a1ecc8);
    }
  }
  if (DAT_146a1ecc0 == (longlong *)0x0) {
    iVar17 = 0x80;
  }
  else {
    iVar17 = (**(code **)(*DAT_146a1ecc0 + 0x68))();
  }
  if (*(int *)(lVar15 + 0x38) < DAT_146a1ecd8) {
    _Init_thread_header(&DAT_146a1ecd8);
    if (DAT_146a1ecd8 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146a1ecd0 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GbxSky.CubeMapMips");
      _Init_thread_footer(&DAT_146a1ecd8);
    }
  }
  if (DAT_146a1ecd0 == (longlong *)0x0) {
    iVar18 = 1;
  }
  else {
    iVar18 = (**(code **)(*DAT_146a1ecd0 + 0x68))();
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar14 + 0xec);
  uVar16 = *(undefined8 *)(lVar14 + 100);
  *param_1 = *(undefined8 *)(lVar14 + 0x5c);
  param_1[1] = uVar16;
  uVar1 = *(undefined4 *)(lVar14 + 0x74);
  uVar2 = *(undefined4 *)(lVar14 + 0x70);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar14 + 0x6c);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  uVar16 = *(undefined8 *)(lVar14 + 0x218);
  param_1[0x14] = *(undefined8 *)(lVar14 + 0x210);
  param_1[0x15] = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + 0x228);
  param_1[0x16] = *(undefined8 *)(lVar14 + 0x220);
  param_1[0x17] = uVar16;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar14 + 0x230);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(lVar14 + 0x234);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(lVar14 + 0x238);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(lVar14 + 0x23c);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)(lVar14 + 0x240);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(lVar14 + 0x244);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar14 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar14 + 0x7c);
  param_1[8] = CONCAT44(1.0 / (float)iVar17,(float)iVar17);
  *(float *)(param_1 + 9) = (float)iVar18;
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(DAT_146a183d8 + 4);
  *(undefined4 *)(param_1 + 5) = DAT_1464aaa94;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(lVar14 + 0xa4);
  *(int *)(param_1 + 6) = *(int *)(lVar14 + 0x9c) - *(int *)(lVar14 + 0xb0);
  uVar16 = *(undefined8 *)(param_2 + 0x618);
  param_1[10] = *(undefined8 *)(param_2 + 0x610);
  param_1[0xb] = uVar16;
  uVar16 = *(undefined8 *)(param_2 + 0x628);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x620);
  param_1[0xd] = uVar16;
  uVar16 = *(undefined8 *)(param_2 + 0x638);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x630);
  param_1[0xf] = uVar16;
  uVar16 = *(undefined8 *)(param_2 + 0x648);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x640);
  param_1[0x11] = uVar16;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(lVar14 + 0x200);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(DAT_146a18408 + 4);
  cVar13 = *(char *)(lVar14 + 0xe8);
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x461c4000;
  *(uint *)(param_1 + 0x13) = (uint)(cVar13 != '\0');
  fVar3 = *(float *)(lVar14 + 0x100);
  param_1[0x1c] = 0;
  *(float *)(param_1 + 0x1d) = -(fVar3 + 10000.0);
  _guard_xfg_dispatch_icall_nop(local_f88,*(void **)(param_2 + 0x1ab8),0xf30);
  fVar3 = *(float *)(lVar14 + 0x13c);
  local_2b0 = (*(float *)(lVar14 + 0x138) - local_2b0) * fVar3 + local_2b0;
  local_2b8 = (*(float *)(lVar14 + 0x130) - local_2b8) * fVar3 + local_2b8;
  local_2b4 = (*(float *)(lVar14 + 0x134) - local_2b4) * fVar3 + local_2b4;
  local_2ac = (*(float *)(lVar14 + 0x140) - local_2ac) * fVar3 + local_2ac;
  param_1[0x1e] = CONCAT44(-(local_2b4 * local_2ac),-(local_2b8 * local_2ac));
  *(float *)(param_1 + 0x1f) = -(local_2b0 * local_2ac);
  fVar3 = *(float *)(lVar14 + 0x11c);
  fVar4 = *(float *)(lVar14 + 0x118);
  local_2ac = (*(float *)(lVar14 + 0x120) - local_2ac) * fVar3 + local_2ac;
  param_1[0x20] =
       CONCAT44(((*(float *)(lVar14 + 0x114) - local_2b4) * fVar3 + local_2b4) * local_2ac,
                -(((*(float *)(lVar14 + 0x110) - local_2b8) * fVar3 + local_2b8) * local_2ac)) ^
       0x8000000000000000;
  *(float *)(param_1 + 0x21) = -(((fVar4 - local_2b0) * fVar3 + local_2b0) * local_2ac);
  fVar3 = *(float *)(lVar14 + 0x170);
  fVar4 = *(float *)(lVar14 + 0x174);
  fVar5 = *(float *)(lVar14 + 0x178);
  fVar6 = *(float *)(lVar14 + 0x60);
  fVar7 = *(float *)(lVar14 + 100);
  fVar8 = *(float *)(lVar14 + 0x68);
  fVar9 = *(float *)(lVar14 + 0x17c);
  fVar10 = *(float *)(lVar14 + 0x60);
  fVar11 = *(float *)(lVar14 + 100);
  fVar12 = *(float *)(lVar14 + 0x68);
  *(float *)(param_1 + 0x22) =
       (*(float *)(lVar14 + 0x16c) - *(float *)(lVar14 + 0x5c)) * fVar9 + *(float *)(lVar14 + 0x5c);
  *(float *)((longlong)param_1 + 0x114) = (fVar3 - fVar6) * fVar9 + fVar10;
  *(float *)(param_1 + 0x23) = (fVar4 - fVar7) * fVar9 + fVar11;
  *(float *)((longlong)param_1 + 0x11c) = (fVar5 - fVar8) * fVar9 + fVar12;
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)(lVar14 + 0xf4);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(lVar14 + 0xf8);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)(lVar14 + 0xfc);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(lVar14 + 0x100);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)(lVar14 + 0x104);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(lVar14 + 0x108);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)(lVar14 + 0x10c);
  uVar16 = *(undefined8 *)(lVar14 + 0x118);
  param_1[0x28] = *(undefined8 *)(lVar14 + 0x110);
  param_1[0x29] = uVar16;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar14 + 0x120);
  uVar16 = *(undefined8 *)(lVar14 + 0x138);
  param_1[0x2a] = *(undefined8 *)(lVar14 + 0x130);
  param_1[0x2b] = uVar16;
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)(lVar14 + 0x140);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(lVar14 + 0x144);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)(lVar14 + 0x148);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(lVar14 + 0x14c);
  *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)(lVar14 + 0x150);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(lVar14 + 0x154);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)(lVar14 + 0x158);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar14 + 0x15c);
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)(lVar14 + 0x160);
  *(float *)(param_1 + 0x31) = *(float *)(lVar14 + 0x164) * 10000.0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)(lVar14 + 0x168);
  uVar16 = *(undefined8 *)(lVar14 + 0x174);
  param_1[0x32] = *(undefined8 *)(lVar14 + 0x16c);
  param_1[0x33] = uVar16;
  *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)(lVar14 + 0x17c);
  uVar16 = *(undefined8 *)(lVar14 + 0x188);
  param_1[0x34] = *(undefined8 *)(lVar14 + 0x180);
  param_1[0x35] = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + 0x198);
  param_1[0x36] = *(undefined8 *)(lVar14 + 400);
  param_1[0x37] = uVar16;
  uVar16 = *(undefined8 *)(lVar14 + 0x1a8);
  param_1[0x38] = *(undefined8 *)(lVar14 + 0x1a0);
  param_1[0x39] = uVar16;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar14 + 0x1c0);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)(lVar14 + 0x1c4);
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(lVar14 + 0x1c8);
  *(undefined4 *)((longlong)param_1 + 0x1ec) = *(undefined4 *)(lVar14 + 0x1cc);
  uVar16 = *(undefined8 *)(lVar14 + 0x1b8);
  param_1[0x3a] = *(undefined8 *)(lVar14 + 0x1b0);
  param_1[0x3b] = uVar16;
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(lVar14 + 0x1d0);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(lVar14 + 0x1d4);
  return;
}



// FUNCTION 141b6e270 SetHitProxy body=86 status=ok
// SIG undefined SetHitProxy(void)

void FViewElementPDI::SetHitProxy(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if ((puVar2 != (undefined8 *)0x0) && (param_2 != 0)) {
    (**(code **)*puVar2)(puVar2,param_2);
  }
  return;
}



// FUNCTION 141b6e2d0 FUN_141b6e2d0 body=703 status=ok
// SIG undefined FUN_141b6e2d0(void)

void FUN_141b6e2d0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint *puVar11;
  uint uVar12;
  longlong *plVar13;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  plVar8 = (longlong *)0x0;
  if (param_3 != 0) {
    plVar13 = plVar8;
    plVar9 = plVar8;
    if (0 < *(int *)(param_2 + 0xfe8)) {
      do {
        lVar2 = *(longlong *)((longlong)plVar9 + *(longlong *)(param_2 + 0xfe0));
        if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x18c)) {
          iVar1 = *(int *)(lVar2 + 0x10);
          lVar6 = *(longlong *)(param_1 + 0x198);
          if (*(longlong *)(param_1 + 0x198) == 0) {
            lVar6 = param_1 + 400;
          }
          iVar5 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x1a0) - 1U & (longlong)iVar1) * 4)
          ;
          if (iVar5 != -1) {
            do {
              plVar7 = (longlong *)(*(longlong *)(param_1 + 0x158) + (longlong)iVar5 * 0x18);
              if (*(int *)(*(longlong *)(param_1 + 0x158) + (longlong)iVar5 * 0x18) == iVar1) {
                if (iVar5 != -1) goto LAB_141b6e394;
                break;
              }
              iVar5 = (int)plVar7[2];
            } while (iVar5 != -1);
          }
        }
        plVar7 = plVar8;
LAB_141b6e394:
        plVar10 = plVar7 + 1;
        if (plVar7 == (longlong *)0x0) {
          plVar10 = plVar8;
        }
        if (((plVar10 != (longlong *)0x0) && (lVar6 = *plVar10, lVar6 != 0)) &&
           (cVar4 = FUN_14270fd70(param_3,*(longlong *)(lVar2 + 8) + 0xc0), cVar4 != '\0')) {
          *(undefined1 *)(lVar6 + 0x262) = 1;
          *(undefined1 *)(lVar6 + 0x260) = 0;
        }
        uVar12 = (int)plVar13 + 1;
        plVar13 = (longlong *)(ulonglong)uVar12;
        plVar9 = plVar9 + 1;
      } while ((int)uVar12 < *(int *)(param_2 + 0xfe8));
    }
    return;
  }
  plVar13 = (longlong *)(param_1 + 0x158);
  iVar1 = *(int *)(param_1 + 0x180);
  puStack_48 = (uint *)(param_1 + 0x168);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar1 != 0) {
    puVar11 = *(uint **)(param_1 + 0x178);
    if (*(uint **)(param_1 + 0x178) == (uint *)0x0) {
      puVar11 = puStack_48;
    }
    uVar12 = *puVar11;
    plVar9 = plVar8;
    while (uVar12 == 0) {
      iVar5 = (int)plVar9;
      uStack_80 = (int)plVar8 + 0x20;
      plVar8 = (longlong *)(ulonglong)uStack_80;
      local_98 = iVar5 + 1;
      plVar9 = (longlong *)(ulonglong)local_98;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141b6e4ab;
      uVar12 = puVar11[(longlong)iVar5 + 1];
    }
    uStack_94 = -uVar12 & uVar12;
    iVar5 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_88._4_4_ = (uStack_80 - iVar5) + 0x1f;
    if (iVar1 < local_88._4_4_) {
LAB_141b6e4ab:
      local_88._4_4_ = iVar1;
    }
  }
  auStack_40._4_4_ = local_88._4_4_;
  auStack_40._0_4_ = 0xffffffff;
  auStack_40._8_4_ = uStack_80;
  auStack_40._12_4_ = iStack_7c;
  uStack_50 = local_98;
  uStack_4c = uStack_94;
  local_60 = 0;
  local_30._0_4_ = SUB84(plVar13,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  uStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = local_30._4_4_;
  bVar3 = local_88._4_4_ < *(int *)(param_1 + 0x180);
  local_68 = plVar13;
  local_58 = plVar13;
  local_30 = plVar13;
  local_88 = puStack_48;
  if (bVar3) {
    do {
      *(undefined1 *)(*(longlong *)((longlong)iStack_7c * 0x18 + 8 + *plVar13) + 0x262) = 1;
      uStack_80 = uStack_80 & ~uStack_8c;
      *(undefined1 *)(*(longlong *)((longlong)iStack_7c * 0x18 + 8 + *plVar13) + 0x260) = 0;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



// FUNCTION 141b6e590 FUN_141b6e590 body=366 status=ok
// SIG undefined FUN_141b6e590(void)

void FUN_141b6e590(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa9590(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  uVar4 = *(undefined8 *)(*param_4 + 0x10);
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  return;
}



// FUNCTION 141b6e700 FUN_141b6e700 body=2270 status=ok
// SIG undefined FUN_141b6e700(void)

void FUN_141b6e700(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  float param_5,longlong param_6,longlong param_7,longlong param_8,
                  undefined8 param_9,longlong param_10)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float fVar9;
  undefined8 local_res8;
  float local_res20 [2];
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar11;
  ulonglong uVar10;
  int local_68;
  int local_64;
  int local_60;
  float local_58;
  float local_54;
  float local_50;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  lVar8 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar2 = *(undefined8 *)(lVar8 + 0x60);
  local_res8 = uVar2;
  FUN_141aa9420(param_1,param_2,uVar2,*(undefined8 *)(param_4 + 0x20));
  FUN_141b21bb0(param_1 + 0xc0,param_2,&local_res8,&DAT_1464c1d10);
  if ((*(short *)(param_1 + 0x112) != 0) || (*(short *)(param_1 + 0x118) != 0)) {
    lVar8 = *(longlong *)(param_6 + 0x80);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar4 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xf0) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xee);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      *puVar6 = &PTR_LAB_144d92090;
      puVar6[2] = uVar2;
      puVar6[4] = lVar8;
    }
    if (*(short *)(param_1 + 0x100) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xfe);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    lVar8 = *(longlong *)(param_6 + 0x88);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar4 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xf4) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xf2);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = lVar8;
    }
    if (*(short *)(param_1 + 0x104) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x102);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    lVar8 = *(longlong *)(param_6 + 0x90);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar4 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xf8) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xf6);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = lVar8;
    }
    if (*(short *)(param_1 + 0x108) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x106);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    lVar8 = *(longlong *)(param_6 + 0x98);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar4 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xfc) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xfa);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = lVar8;
    }
    if (*(short *)(param_1 + 0x10c) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x10a);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    uVar4 = CONCAT44(uVar11,4);
    FUN_141aace20(param_2,uVar2,param_1 + 0x10e,param_6,uVar4,0);
    uVar10 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),4);
    FUN_141aace20(param_2,uVar2,param_1 + 0x114,param_6 + 0x40,uVar10,0);
    uVar10 = uVar10 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x11a,param_6 + 0xa0,uVar10);
    uVar10 = uVar10 & 0xffffffff00000000;
    local_res8 = CONCAT44(local_res8._4_4_,1.0 / *(float *)(param_6 + 0xa0));
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x120,&local_res8,uVar10);
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x126,param_6 + 0xa4,uVar10 & 0xffffffff00000000);
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  lVar8 = *(longlong *)(param_7 + 0xc0);
  puVar5 = puVar6 + 1;
  uVar4 = *(undefined8 *)(lVar8 + 0x18);
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *puVar6 = uVar4;
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar7 + 2) = 1;
  puVar7[3] = puVar6;
  *(undefined4 *)(puVar7 + 4) = 2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 3;
  puVar7[5] = 0;
  uVar10 = *(ulonglong *)(lVar8 + 0x18);
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 300,param_2,uVar2,*(undefined8 *)(lVar8 + 0x10),uVar10);
  uVar4 = *(undefined8 *)(param_8 + 0x10);
  if (*(short *)(param_1 + 0x136) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x134);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144d92090;
    puVar6[2] = uVar2;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  uVar4 = DAT_1464c1e28;
  if (*(short *)(param_1 + 0x13a) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x138);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb360;
    puVar6[2] = uVar2;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  lVar8 = param_10;
  uVar10 = uVar10 & 0xffffffff00000000;
  iVar3 = *(int *)(param_10 + 0x1c) + 0xf;
  local_68 = (int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4;
  iVar3 = *(int *)(param_10 + 0x20) + 0xf;
  local_64 = (int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4;
  iVar3 = *(int *)(param_10 + 0x24) + 0xf;
  local_60 = (int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar2,param_1 + 0x142,&local_68,uVar10);
  uVar10 = uVar10 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar2,param_1 + 0x13c,lVar8 + 0x1c,uVar10);
  uVar10 = uVar10 & 0xffffffff00000000;
  local_58 = 1.0 / (float)DAT_1464c1c64;
  local_54 = local_58;
  local_50 = local_58;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar2,param_1 + 0x148,&local_58,uVar10);
  uVar10 = uVar10 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar2,param_1 + 0x14e,lVar8,uVar10);
  uVar10 = uVar10 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x154,&param_9,uVar10);
  fVar9 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_res20[0] = param_5 / (fVar9 + 1.0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x15a,local_res20,uVar10 & 0xffffffff00000000);
  return;
}



// FUNCTION 141b6efe0 FUN_141b6efe0 body=2136 status=ok
// SIG undefined FUN_141b6efe0(void)

void FUN_141b6efe0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  float param_5,longlong param_6,longlong param_7,undefined8 param_8,
                  undefined8 param_9,longlong param_10)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float fVar9;
  undefined8 local_res8;
  float local_res20 [2];
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar11;
  ulonglong uVar10;
  int local_68;
  int local_64;
  int local_60;
  float local_58;
  float local_54;
  float local_50;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  lVar8 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar2 = *(undefined8 *)(lVar8 + 0x60);
  local_res8 = uVar2;
  FUN_141aa9420(param_1,param_2,uVar2,*(undefined8 *)(param_4 + 0x20));
  FUN_141b21bb0(param_1 + 0xc0,param_2,&local_res8,&DAT_1464c1d10);
  if ((*(short *)(param_1 + 0x112) != 0) || (*(short *)(param_1 + 0x118) != 0)) {
    lVar8 = *(longlong *)(param_6 + 0x80);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar4 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xf0) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xee);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      *puVar6 = &PTR_LAB_144d92090;
      puVar6[2] = uVar2;
      puVar6[4] = lVar8;
    }
    if (*(short *)(param_1 + 0x100) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xfe);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    lVar8 = *(longlong *)(param_6 + 0x88);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar4 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xf4) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xf2);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = lVar8;
    }
    if (*(short *)(param_1 + 0x104) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x102);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    lVar8 = *(longlong *)(param_6 + 0x90);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar4 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xf8) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xf6);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = lVar8;
    }
    if (*(short *)(param_1 + 0x108) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x106);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    lVar8 = *(longlong *)(param_6 + 0x98);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar4 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xfc) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xfa);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144d92090;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = lVar8;
    }
    if (*(short *)(param_1 + 0x10c) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x10a);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_144dcb3b8;
      puVar6[2] = uVar2;
      *(uint *)(puVar6 + 3) = (uint)uVar1;
      puVar6[4] = uVar4;
    }
    uVar4 = CONCAT44(uVar11,4);
    FUN_141aace20(param_2,uVar2,param_1 + 0x10e,param_6,uVar4,0);
    uVar10 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),4);
    FUN_141aace20(param_2,uVar2,param_1 + 0x114,param_6 + 0x40,uVar10,0);
    uVar10 = uVar10 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x11a,param_6 + 0xa0,uVar10);
    uVar10 = uVar10 & 0xffffffff00000000;
    local_res8 = CONCAT44(local_res8._4_4_,1.0 / *(float *)(param_6 + 0xa0));
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x120,&local_res8,uVar10);
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x126,param_6 + 0xa4,uVar10 & 0xffffffff00000000);
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  lVar8 = *(longlong *)(param_7 + 0xc0);
  puVar5 = puVar6 + 1;
  uVar4 = *(undefined8 *)(lVar8 + 0x18);
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *puVar6 = uVar4;
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar7 + 2) = 1;
  puVar7[3] = puVar6;
  *(undefined4 *)(puVar7 + 4) = 2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 3;
  puVar7[5] = 0;
  uVar10 = *(ulonglong *)(lVar8 + 0x18);
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 300,param_2,uVar2,*(undefined8 *)(lVar8 + 0x10),uVar10);
  uVar4 = DAT_1464c1e28;
  if (*(short *)(param_1 + 0x13a) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x138);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144dcb360;
    puVar6[2] = uVar2;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  lVar8 = param_10;
  uVar10 = uVar10 & 0xffffffff00000000;
  iVar3 = *(int *)(param_10 + 0x1c) + 0xf;
  local_68 = (int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4;
  iVar3 = *(int *)(param_10 + 0x20) + 0xf;
  local_64 = (int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4;
  iVar3 = *(int *)(param_10 + 0x24) + 0xf;
  local_60 = (int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar2,param_1 + 0x142,&local_68,uVar10);
  uVar10 = uVar10 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar2,param_1 + 0x13c,lVar8 + 0x1c,uVar10);
  uVar10 = uVar10 & 0xffffffff00000000;
  local_58 = 1.0 / (float)DAT_1464c1c64;
  local_54 = local_58;
  local_50 = local_58;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar2,param_1 + 0x148,&local_58,uVar10);
  uVar10 = uVar10 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar2,param_1 + 0x14e,lVar8,uVar10);
  uVar10 = uVar10 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x154,&param_9,uVar10);
  fVar9 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_res20[0] = param_5 / (fVar9 + 1.0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x15a,local_res20,uVar10 & 0xffffffff00000000);
  return;
}



// FUNCTION 141b6f840 FUN_141b6f840 body=651 status=ok
// SIG undefined FUN_141b6f840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b6f840(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  FUN_141aa9420(param_1,param_2,uVar2,*(undefined8 *)(param_3 + 0x20));
  lVar1 = *(longlong *)(param_3 + 0x1a30);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xc0,param_2,uVar2,param_4);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 200,param_2,uVar2,param_4 + 0x28);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xd0,param_2,uVar2,param_4 + 0x50);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xd8,param_2,uVar2,param_4 + 0x78);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xe0,param_2,uVar2,lVar1 + 0x2b0);
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xe8,param_2,uVar2,lVar1 + 0x2d8);
  uVar4 = 0;
  uVar7 = (ulonglong)_tls_index;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar3 = uVar4;
    uVar6 = uVar4;
    do {
      iVar5 = (int)uVar6;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146a1ea50) {
        if (iVar5 != -1) {
          puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 8);
          *puVar8 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b6f978;
        }
        break;
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x38) <
      DAT_146a25428) {
    _Init_thread_header(&DAT_146a25428);
    if (DAT_146a25428 == -1) {
      _DAT_146a25420 = 0;
      DAT_146a25424 = 0;
      DAT_146a25426 = 0;
      _Init_thread_footer(&DAT_146a25428);
    }
  }
  puVar8 = (undefined4 *)&DAT_146a25420;
LAB_141b6f978:
  FUN_141b51b30(param_2,uVar2,puVar8,*(longlong *)(param_3 + 0x1a30) + 0x280);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar3 = uVar4;
    do {
      iVar5 = (int)uVar3;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146a818d0) {
        if (iVar5 != -1) {
          puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 8);
          *puVar8 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b6f9e4;
        }
        break;
      }
      uVar3 = (ulonglong)(iVar5 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x38) <
      DAT_146a25438) {
    _Init_thread_header(&DAT_146a25438);
    if (DAT_146a25438 == -1) {
      _DAT_146a25430 = 0;
      DAT_146a25434 = 0;
      DAT_146a25436 = 0;
      _Init_thread_footer(&DAT_146a25438);
    }
  }
  puVar8 = (undefined4 *)&DAT_146a25430;
LAB_141b6f9e4:
  FUN_141b51b30(param_2,uVar2,puVar8,param_3 + 0x2fb0);
  return;
}



// FUNCTION 141b6fad0 FUN_141b6fad0 body=1937 status=ok
// SIG undefined FUN_141b6fad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b6fad0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,longlong param_8)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  longlong local_188;
  float fStack_180;
  undefined4 uStack_17c;
  undefined8 local_178 [2];
  float local_168 [28];
  float *local_f8;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_188 = param_8;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_178[0] = uVar3;
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  FAOParameters::Set<FRHIComputeShader_*>(param_1 + 0xc0,param_2,uVar3,param_7);
  local_198 = param_5;
  FUN_141b21980(param_1 + 0xde,param_2,local_178,param_3);
  local_198 = CONCAT44(local_198._4_4_,param_4);
  FHeightfieldDescriptionParameters::Set<FRHIComputeShader_*>
            (param_1 + 0xf8,param_2,uVar3,DAT_1464c1f48);
  local_178[0] = *(undefined8 *)(param_6 + 0xe8);
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar11 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar11 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *puVar11 = local_178[0];
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  puVar8[5] = 0;
  *puVar8 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar8 + 2) = 1;
  puVar8[3] = puVar11;
  *(undefined4 *)(puVar8 + 4) = 2;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x102,param_2,uVar3,param_6 + 0xe0);
  fVar12 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_178[0] = CONCAT44(local_178[0]._4_4_,fVar12);
  local_198 = local_198 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0x10a,local_178);
  lVar2 = local_188;
  FUN_141b503a0(param_1 + 0x110,param_2,uVar3,local_188);
  local_f8 = (float *)0x0;
  local_f0 = 0;
  GetSpacedVectors(*(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x5c),local_168);
  pfVar9 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar9 = local_f8;
  }
  local_e8 = *pfVar9;
  fStack_e4 = pfVar9[1];
  fStack_e0 = pfVar9[2];
  uStack_dc = 0x3f800000;
  local_d8 = pfVar9[3];
  fStack_d4 = pfVar9[4];
  fStack_d0 = pfVar9[5];
  uStack_cc = 0x3f800000;
  local_c8 = pfVar9[6];
  fStack_c4 = pfVar9[7];
  fStack_c0 = pfVar9[8];
  uStack_bc = 0x3f800000;
  local_b8 = pfVar9[9];
  fStack_b4 = pfVar9[10];
  fStack_b0 = pfVar9[0xb];
  uStack_ac = 0x3f800000;
  local_a8 = pfVar9[0xc];
  fStack_a4 = pfVar9[0xd];
  fStack_a0 = pfVar9[0xe];
  uStack_9c = 0x3f800000;
  local_98 = pfVar9[0xf];
  fStack_94 = pfVar9[0x10];
  fStack_90 = pfVar9[0x11];
  uStack_8c = 0x3f800000;
  local_88 = pfVar9[0x12];
  fStack_84 = pfVar9[0x13];
  fStack_80 = pfVar9[0x14];
  uStack_7c = 0x3f800000;
  local_78 = pfVar9[0x15];
  fStack_74 = pfVar9[0x16];
  fStack_70 = pfVar9[0x17];
  uStack_6c = 0x3f800000;
  local_68 = pfVar9[0x18];
  fStack_64 = pfVar9[0x19];
  fStack_60 = pfVar9[0x1a];
  local_188 = *(longlong *)(pfVar9 + 0x18);
  fStack_180 = pfVar9[0x1a];
  iVar7 = 0;
  uStack_17c = 0x3f800000;
  uStack_5c = 0x3f800000;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar5 = 0;
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar5 * 8) == &DAT_146a11040) {
        if (iVar7 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar7 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b6ff12;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1c3c8) {
    _Init_thread_header(&DAT_146a1c3c8);
    if (DAT_146a1c3c8 == -1) {
      _DAT_146a1c3c0 = 0;
      _DAT_146a1c3c4 = 0;
      DAT_146a1c3c6 = 0;
      _Init_thread_footer(&DAT_146a1c3c8);
    }
  }
  puVar10 = (undefined4 *)&DAT_146a1c3c0;
LAB_141b6ff12:
  FUN_141b24000(param_2,uVar3,puVar10,&local_e8);
  local_198 = local_198 & 0xffffffff00000000;
  pfVar9 = local_168;
  if (local_f8 != (float *)0x0) {
    pfVar9 = local_f8;
  }
  fVar14 = pfVar9[3] + *pfVar9 + pfVar9[6] + pfVar9[9] + pfVar9[0xc] + pfVar9[0xf] + pfVar9[0x12] +
           pfVar9[0x15] + pfVar9[0x18];
  fVar12 = pfVar9[1] + pfVar9[4] + pfVar9[7] + pfVar9[10] + pfVar9[0xd] + pfVar9[0x10] +
           pfVar9[0x13] + pfVar9[0x16] + pfVar9[0x19];
  fVar13 = pfVar9[2] + pfVar9[5] + pfVar9[8] + pfVar9[0xb] + pfVar9[0xe] + pfVar9[0x11] +
           pfVar9[0x14] + pfVar9[0x17] + pfVar9[0x1a];
  local_178[0] = CONCAT44(local_178[0]._4_4_,
                          1.0 / SQRT((fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13) *
                                     0.012345679));
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0x120,local_178);
  if (local_f8 != (float *)0x0) {
    FMemory::Free();
  }
  uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 0x50) + 0x10);
  local_188 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x128) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x126);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    *puVar11 = &PTR_LAB_144d92090;
    puVar11[2] = uVar3;
    puVar11[4] = uVar4;
  }
  lVar2 = local_188;
  if (*(short *)(param_1 + 300) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x12a);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144dcb3b8;
    puVar11[2] = uVar3;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = lVar2;
  }
  local_198 = local_198 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x12e,&DAT_1464c1c78);
  local_198 = local_198 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x134,&DAT_1464c1c7c);
  uVar4 = *(undefined8 *)(param_6 + 0x78);
  if (*(short *)(param_1 + 0x13c) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x13a);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144dcb360;
    puVar11[2] = uVar3;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = uVar4;
  }
  return;
}



// FUNCTION 141b70270 FUN_141b70270 body=1202 status=ok
// SIG undefined FUN_141b70270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b70270(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,longlong param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
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
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8 [28];
  undefined4 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  local_178 = uVar2;
  FUN_141aa9420(param_1,param_2,uVar2,*(undefined8 *)(param_3 + 0x20));
  FAOParameters::Set<FRHIComputeShader_*>(param_1 + 0xc0,param_2,uVar2,param_8);
  local_188 = param_6;
  FUN_141b21980(param_1 + 0xde,param_2,&local_178,param_3);
  local_188 = CONCAT44(local_188._4_4_,param_5);
  FHeightfieldDescriptionParameters::Set<FRHIComputeShader_*>
            (param_1 + 0xf8,param_2,uVar2,DAT_1464c1f48);
  local_188 = 0;
  FUN_141b50790(param_1 + 0x102,param_2,uVar2,param_4);
  local_178 = *(undefined8 *)(param_7 + 0x40);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar8 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar8 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *puVar8 = local_178;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar6 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar6 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  uVar4 = 0;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar6 + 2) = 1;
  puVar6[3] = puVar8;
  *(undefined4 *)(puVar6 + 4) = 2;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  puVar6[5] = 0;
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0x112,param_2,uVar2,param_7 + 0x38);
  local_68 = (undefined4 *)0x0;
  local_60 = 0;
  GetSpacedVectors(*(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x5c),local_d8);
  puVar9 = local_d8;
  if (local_68 != (undefined4 *)0x0) {
    puVar9 = local_68;
  }
  local_168 = *puVar9;
  uStack_164 = puVar9[1];
  uStack_160 = puVar9[2];
  uStack_15c = 0x3f800000;
  local_158 = puVar9[3];
  uStack_154 = puVar9[4];
  uStack_150 = puVar9[5];
  uStack_14c = 0x3f800000;
  local_148 = puVar9[6];
  uStack_144 = puVar9[7];
  uStack_140 = puVar9[8];
  uStack_13c = 0x3f800000;
  local_138 = puVar9[9];
  uStack_134 = puVar9[10];
  uStack_130 = puVar9[0xb];
  uStack_12c = 0x3f800000;
  local_128 = puVar9[0xc];
  uStack_124 = puVar9[0xd];
  uStack_120 = puVar9[0xe];
  uStack_11c = 0x3f800000;
  local_118 = puVar9[0xf];
  uStack_114 = puVar9[0x10];
  uStack_110 = puVar9[0x11];
  uStack_10c = 0x3f800000;
  local_108 = puVar9[0x12];
  uStack_104 = puVar9[0x13];
  uStack_100 = puVar9[0x14];
  uStack_fc = 0x3f800000;
  local_f8 = puVar9[0x15];
  uStack_f4 = puVar9[0x16];
  uStack_f0 = puVar9[0x17];
  uStack_ec = 0x3f800000;
  local_e8 = puVar9[0x18];
  uStack_e4 = puVar9[0x19];
  uStack_e0 = puVar9[0x1a];
  local_178._0_4_ = puVar9[0x18];
  local_178._4_4_ = puVar9[0x19];
  uStack_170 = puVar9[0x1a];
  uStack_16c = 0x3f800000;
  uStack_dc = 0x3f800000;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar4;
    do {
      iVar5 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146a11040) {
        if (iVar5 != -1) {
          puVar9 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 8);
          *puVar9 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b70656;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar5 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a1c3c8) {
    _Init_thread_header(&DAT_146a1c3c8);
    if (DAT_146a1c3c8 == -1) {
      _DAT_146a1c3c0 = 0;
      _DAT_146a1c3c4 = 0;
      DAT_146a1c3c6 = 0;
      _Init_thread_footer(&DAT_146a1c3c8);
    }
  }
  puVar9 = (undefined4 *)&DAT_146a1c3c0;
LAB_141b70656:
  FUN_141b24000(param_2,uVar2,puVar9,&local_168);
  fVar10 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_178 = CONCAT44(local_178._4_4_,fVar10);
  local_188 = local_188 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar2,param_1 + 0x11a,&local_178);
  if (local_68 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b70730 FUN_141b70730 body=1974 status=ok
// SIG undefined FUN_141b70730(void)

void FUN_141b70730(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  float param_5,longlong param_6,int param_7,longlong param_8,undefined8 param_9,
                  undefined4 param_10)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  float fVar8;
  float local_res8 [2];
  float local_res20 [2];
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar10;
  ulonglong uVar9;
  float local_58;
  float local_54;
  float local_50;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  uVar2 = *(undefined8 *)(lVar7 + 0x60);
  FUN_141aa9420(param_1,param_2,uVar2,*(undefined8 *)(param_4 + 0x20));
  if ((*(short *)(param_1 + 0xe4) != 0) || (*(short *)(param_1 + 0xea) != 0)) {
    lVar7 = *(longlong *)(param_6 + 0xb0);
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar3 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xc2) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xc0);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      *puVar5 = &PTR_LAB_144d92090;
      puVar5[2] = uVar2;
      puVar5[4] = lVar7;
    }
    if (*(short *)(param_1 + 0xd2) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xd0);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = &PTR_LAB_144dcb3b8;
      puVar5[2] = uVar2;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      puVar5[4] = uVar3;
    }
    lVar7 = *(longlong *)(param_6 + 0xb8);
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar3 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xc6) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xc4);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = &PTR_LAB_144d92090;
      puVar5[2] = uVar2;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      puVar5[4] = lVar7;
    }
    if (*(short *)(param_1 + 0xd6) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xd4);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = &PTR_LAB_144dcb3b8;
      puVar5[2] = uVar2;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      puVar5[4] = uVar3;
    }
    lVar7 = *(longlong *)(param_6 + 0xc0);
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar3 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xca) != 0) {
      uVar1 = *(ushort *)(param_1 + 200);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = &PTR_LAB_144d92090;
      puVar5[2] = uVar2;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      puVar5[4] = lVar7;
    }
    if (*(short *)(param_1 + 0xda) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xd8);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = &PTR_LAB_144dcb3b8;
      puVar5[2] = uVar2;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      puVar5[4] = uVar3;
    }
    lVar7 = *(longlong *)(param_6 + 200);
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar3 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xce) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xcc);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = &PTR_LAB_144d92090;
      puVar5[2] = uVar2;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      puVar5[4] = lVar7;
    }
    if (*(short *)(param_1 + 0xde) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xdc);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar4;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar5;
      *(undefined8 **)(param_2 + 8) = puVar5 + 1;
      puVar5[1] = 0;
      *puVar5 = &PTR_LAB_144dcb3b8;
      puVar5[2] = uVar2;
      *(uint *)(puVar5 + 3) = (uint)uVar1;
      puVar5[4] = uVar3;
    }
    uVar3 = CONCAT44(uVar10,4);
    FUN_141aace20(param_2,uVar2,param_1 + 0xe0,param_6 + 0x30,uVar3,0);
    uVar9 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),4);
    FUN_141aace20(param_2,uVar2,param_1 + 0xe6,param_6 + 0x70,uVar9,0);
    uVar9 = uVar9 & 0xffffffff00000000;
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0xec,param_6 + 0xd0,uVar9);
    uVar9 = uVar9 & 0xffffffff00000000;
    local_res8[0] = 1.0 / *(float *)(param_6 + 0xd0);
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0xf2,local_res8,uVar9);
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar2,param_1 + 0xf8,param_6 + 0xd4,uVar9 & 0xffffffff00000000);
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  lVar7 = *(longlong *)((longlong)param_7 * 200 + 0xc0 + *(longlong *)(param_6 + 0x18));
  puVar4 = puVar5 + 1;
  uVar3 = *(undefined8 *)(lVar7 + 0x18);
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar5 = uVar3;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar6 + 2) = 1;
  puVar6[3] = puVar5;
  *(undefined4 *)(puVar6 + 4) = 2;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  puVar6[5] = 0;
  uVar9 = *(ulonglong *)(lVar7 + 0x18);
  FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 0xfe,param_2,uVar2,*(undefined8 *)(lVar7 + 0x10),uVar9);
  lVar7 = param_8;
  uVar9 = uVar9 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar2,param_1 + 0x106,param_8 + 0x1c,uVar9);
  uVar9 = uVar9 & 0xffffffff00000000;
  local_58 = 1.0 / (float)DAT_1464c1c64;
  local_54 = local_58;
  local_50 = local_58;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar2,param_1 + 0x10c,&local_58,uVar9);
  uVar9 = uVar9 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar2,param_1 + 0x112,lVar7,uVar9);
  uVar9 = uVar9 & 0xffffffff00000000;
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x118,&param_7,uVar9);
  fVar8 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_res20[0] = param_5 / (fVar8 + 1.0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar2,param_1 + 0x11e,local_res20,uVar9 & 0xffffffff00000000);
  FHeightfieldDescriptionParameters::Set<FRHIComputeShader_*>
            (param_1 + 0x124,param_2,uVar2,DAT_1464c1f48,param_10);
  FUN_141b50790(param_1 + 0x12e,param_2,uVar2,param_9,0);
  return;
}



// FUNCTION 141b70ef0 FUN_141b70ef0 body=1976 status=ok
// SIG undefined FUN_141b70ef0(void)

void FUN_141b70ef0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  float param_5,longlong param_6,undefined8 param_7,longlong param_8)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  float fVar10;
  float local_res8 [2];
  undefined8 local_res20;
  int local_68;
  int local_64;
  int local_60;
  float local_58;
  float local_54;
  float local_50;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res20 = uVar3;
  FUN_141aa9420(param_1,param_2,uVar3,*(undefined8 *)(param_4 + 0x20));
  FUN_141b21bb0(param_1 + 0xc0,param_2,&local_res20,&DAT_1464c1d10);
  lVar2 = param_6;
  if ((*(short *)(param_1 + 0x112) != 0) || (*(short *)(param_1 + 0x118) != 0)) {
    lVar9 = *(longlong *)(param_6 + 0xb0);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar5 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xf0) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xee);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      *puVar7 = &PTR_LAB_144d92090;
      puVar7[2] = uVar3;
      puVar7[4] = lVar9;
    }
    if (*(short *)(param_1 + 0x100) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xfe);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dcb3b8;
      puVar7[2] = uVar3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar5;
    }
    lVar9 = *(longlong *)(lVar2 + 0xb8);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar5 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xf4) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xf2);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d92090;
      puVar7[2] = uVar3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = lVar9;
    }
    if (*(short *)(param_1 + 0x104) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x102);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dcb3b8;
      puVar7[2] = uVar3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar5;
    }
    lVar9 = *(longlong *)(lVar2 + 0xc0);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar5 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xf8) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xf6);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d92090;
      puVar7[2] = uVar3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = lVar9;
    }
    if (*(short *)(param_1 + 0x108) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x106);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dcb3b8;
      puVar7[2] = uVar3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar5;
    }
    lVar9 = *(longlong *)(lVar2 + 200);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar5 = FUN_141b33a40();
    if (*(short *)(param_1 + 0xfc) != 0) {
      uVar1 = *(ushort *)(param_1 + 0xfa);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144d92090;
      puVar7[2] = uVar3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = lVar9;
    }
    if (*(short *)(param_1 + 0x10c) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x10a);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_144dcb3b8;
      puVar7[2] = uVar3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar5;
    }
    FUN_141aace20(param_2,uVar3,param_1 + 0x10e,lVar2 + 0x30,4,0);
    FUN_141aace20(param_2,uVar3,param_1 + 0x114,lVar2 + 0x70,4,0);
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar3,param_1 + 0x11a,lVar2 + 0xd0,0);
    param_6 = CONCAT44(param_6._4_4_,1.0 / *(float *)(lVar2 + 0xd0));
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar3,param_1 + 0x120,&param_6,0);
    SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
              (param_2,uVar3,param_1 + 0x126,lVar2 + 0xd4,0);
  }
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  param_6 = DAT_1464c1e20;
  puVar6 = puVar7 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *puVar7 = param_6;
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar8 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar8;
  *(undefined8 **)(param_2 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar8 + 2) = 1;
  puVar8[3] = puVar7;
  *(undefined4 *)(puVar8 + 4) = 2;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 3;
  puVar8[5] = 0;
  FRWShaderParameter::SetBuffer<FRHIComputeShader_*,FRHICommandList>
            (param_1 + 300,param_2,uVar3,&DAT_1464c1e18);
  lVar2 = param_8;
  iVar4 = *(int *)(param_8 + 0x1c) + 0xf;
  local_68 = (int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4;
  iVar4 = *(int *)(param_8 + 0x20) + 0xf;
  local_64 = (int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4;
  iVar4 = *(int *)(param_8 + 0x24) + 0xf;
  local_60 = (int)(iVar4 + (iVar4 >> 0x1f & 0xfU)) >> 4;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar3,param_1 + 0x134,&local_68,0);
  local_58 = 1.0 / (float)DAT_1464c1c64;
  local_54 = local_58;
  local_50 = local_58;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar3,param_1 + 0x13a,&local_58,0);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>(param_2,uVar3,param_1 + 0x140,lVar2,0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>(param_2,uVar3,param_1 + 0x146,&param_7,0);
  fVar10 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
  local_res8[0] = param_5 / (fVar10 + 1.0);
  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x14c,local_res8,0);
  return;
}



// FUNCTION 141b716b0 FUN_141b716b0 body=265 status=ok
// SIG undefined FUN_141b716b0(void)

void FUN_141b716b0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 local_res20 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  FUN_141aa9800(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  uVar4 = DAT_1464c1f48;
  local_res20[0] = param_4;
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_144165218;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  FUN_1404986d0(param_2,uVar3,param_1 + 0xc4,local_res20,0);
  return;
}



// FUNCTION 141b717c0 FUN_141b717c0 body=1956 status=ok
// SIG undefined FUN_141b717c0(void)

void FUN_141b717c0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong *param_5,char param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
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
  undefined4 uVar29;
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
  ulonglong local_res8;
  undefined4 uVar45;
  undefined8 local_138;
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
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  plVar9 = param_5;
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  uVar10 = 0;
  local_res8 = 0;
  (**(code **)(*param_5 + 0x40))(param_5,*(undefined4 *)(param_3 + 0x1a38),&param_5,&local_res8);
  uVar12 = local_res8;
  FUN_141d857a0(param_1,param_2,uVar2,plVar9,local_res8,param_3,param_3 + 0x20,0x1f);
  uVar45 = (undefined4)(uVar12 >> 0x20);
  if (*(short *)(param_1 + 0x114) != 0) {
    lVar1 = *(longlong *)(param_4 + 0x30);
    fVar16 = 1.0 / (float)((ulonglong)*(undefined8 *)(lVar1 + 0x158) >> 0x20);
    fVar37 = *(float *)(lVar1 + 0x30);
    fVar38 = *(float *)(lVar1 + 0x34);
    fVar39 = *(float *)(lVar1 + 0x38);
    fVar40 = *(float *)(lVar1 + 0x3c);
    fVar22 = 1.0 / *(float *)(lVar1 + 0x160);
    fVar21 = 1.0 / (float)*(undefined8 *)(lVar1 + 0x158);
    local_118 = fVar22 * fVar37 + fVar38 * 0.0 + fVar39 * 0.0 + fVar40 * 0.0;
    fStack_114 = fVar37 * 0.0 + fVar16 * fVar38 + fVar39 * 0.0 + fVar40 * 0.0;
    fStack_110 = fVar37 * 0.0 + fVar38 * 0.0 + fVar21 * fVar39 + fVar40 * 0.0;
    fStack_10c = fVar37 * 0.0 + fVar38 * 0.0 + fVar39 * 0.0 + fVar40 * 1.0;
    fVar37 = *(float *)(lVar1 + 0x40);
    fVar38 = *(float *)(lVar1 + 0x44);
    fVar39 = *(float *)(lVar1 + 0x48);
    fVar40 = *(float *)(lVar1 + 0x4c);
    fVar18 = fVar22 * fVar37 + fVar38 * 0.0 + fVar39 * 0.0 + fVar40 * 0.0;
    fVar20 = fVar37 * 0.0 + fVar16 * fVar38 + fVar39 * 0.0 + fVar40 * 0.0;
    fStack_130 = fVar37 * 0.0 + fVar38 * 0.0 + fVar21 * fVar39 + fVar40 * 0.0;
    fStack_12c = fVar37 * 0.0 + fVar38 * 0.0 + fVar39 * 0.0 + fVar40 * 1.0;
    local_138 = CONCAT44(fVar20,fVar18);
    fVar37 = *(float *)(lVar1 + 0x50);
    fVar38 = *(float *)(lVar1 + 0x54);
    fVar39 = *(float *)(lVar1 + 0x58);
    fVar40 = *(float *)(lVar1 + 0x5c);
    fVar14 = *(float *)(lVar1 + 0x60);
    fVar15 = *(float *)(lVar1 + 100);
    fVar3 = *(float *)(lVar1 + 0x68);
    fVar4 = *(float *)(lVar1 + 0x6c);
    fVar26 = (float)*(int *)(param_3 + 0x1aa4);
    fVar41 = fVar22 * fVar37 + fVar38 * 0.0 + fVar39 * 0.0 + fVar40 * 0.0;
    fVar42 = fVar37 * 0.0 + fVar16 * fVar38 + fVar39 * 0.0 + fVar40 * 0.0;
    fVar43 = fVar37 * 0.0 + fVar38 * 0.0 + fVar21 * fVar39 + fVar40 * 0.0;
    fVar44 = fVar37 * 0.0 + fVar38 * 0.0 + fVar39 * 0.0 + fVar40 * 1.0;
    fVar17 = 1.0 / (float)(*(int *)(param_3 + 0x1aac) - *(int *)(param_3 + 0x1aa4));
    local_128 = fVar4 * 0.0 + fVar22 * fVar14 + fVar15 * 0.0 + fVar3 * 0.0;
    fStack_124 = fVar4 * 0.0 + fVar14 * 0.0 + fVar16 * fVar15 + fVar3 * 0.0;
    fStack_120 = fVar4 * 0.0 + fVar14 * 0.0 + fVar15 * 0.0 + fVar21 * fVar3;
    fStack_11c = fVar4 * 1.0 + fVar14 * 0.0 + fVar15 * 0.0 + fVar3 * 0.0;
    fVar15 = 1.0 / (float)(*(int *)(param_3 + 0x1aa8) - *(int *)(param_3 + 0x1aa0));
    fVar27 = (fVar26 + fVar26) * fVar17 + 1.0;
    fVar37 = *(float *)(param_3 + 0x620);
    fVar38 = *(float *)(param_3 + 0x624);
    fVar39 = *(float *)(param_3 + 0x628);
    fVar40 = *(float *)(param_3 + 0x62c);
    fVar17 = fVar17 * -2.0;
    fVar19 = fVar15 + fVar15;
    fVar14 = (float)*(int *)(param_3 + 0x1aa0);
    fVar25 = -1.0 - (fVar14 + fVar14) * fVar15;
    fVar14 = *(float *)(param_3 + 0x610);
    fVar15 = *(float *)(param_3 + 0x614);
    fVar3 = *(float *)(param_3 + 0x618);
    fVar4 = *(float *)(param_3 + 0x61c);
    fVar16 = *(float *)(param_3 + 0x630);
    fVar21 = *(float *)(param_3 + 0x634);
    fVar22 = *(float *)(param_3 + 0x638);
    fVar26 = *(float *)(param_3 + 0x63c);
    fVar5 = *(float *)(param_3 + 0x640);
    fVar6 = *(float *)(param_3 + 0x644);
    fVar7 = *(float *)(param_3 + 0x648);
    fVar8 = *(float *)(param_3 + 0x64c);
    fVar33 = fVar14 * fVar19 + fVar37 * 0.0 + fVar16 * 0.0 + fVar5 * 0.0;
    fVar34 = fVar15 * fVar19 + fVar38 * 0.0 + fVar21 * 0.0 + fVar6 * 0.0;
    fVar35 = fVar3 * fVar19 + fVar39 * 0.0 + fVar22 * 0.0 + fVar7 * 0.0;
    fVar36 = fVar4 * fVar19 + fVar40 * 0.0 + fVar26 * 0.0 + fVar8 * 0.0;
    fVar28 = fVar14 * 0.0 + fVar37 * fVar17 + fVar16 * 0.0 + fVar5 * 0.0;
    fVar30 = fVar15 * 0.0 + fVar38 * fVar17 + fVar21 * 0.0 + fVar6 * 0.0;
    fVar31 = fVar3 * 0.0 + fVar39 * fVar17 + fVar22 * 0.0 + fVar7 * 0.0;
    fVar32 = fVar4 * 0.0 + fVar40 * fVar17 + fVar26 * 0.0 + fVar8 * 0.0;
    fVar17 = fVar14 * 0.0 + fVar37 * 0.0 + fVar16 * 1.0 + fVar5 * 0.0;
    fVar19 = fVar15 * 0.0 + fVar38 * 0.0 + fVar21 * 1.0 + fVar6 * 0.0;
    fVar23 = fVar3 * 0.0 + fVar39 * 0.0 + fVar22 * 1.0 + fVar7 * 0.0;
    fVar24 = fVar4 * 0.0 + fVar40 * 0.0 + fVar26 * 1.0 + fVar8 * 0.0;
    fVar37 = fVar5 * 1.0 + fVar14 * fVar25 + fVar37 * fVar27 + fVar16 * 0.0;
    fVar38 = fVar6 * 1.0 + fVar15 * fVar25 + fVar38 * fVar27 + fVar21 * 0.0;
    fVar39 = fVar7 * 1.0 + fVar3 * fVar25 + fVar39 * fVar27 + fVar22 * 0.0;
    fVar40 = fVar8 * 1.0 + fVar4 * fVar25 + fVar40 * fVar27 + fVar26 * 0.0;
    uVar12 = uVar12 & 0xffffffff00000000;
    local_108 = fVar33 * local_118 + fVar34 * fVar18 + fVar35 * fVar41 + fVar36 * local_128;
    fStack_f4 = fVar28 * fStack_114 + fVar30 * fVar20 + fVar31 * fVar42 + fVar32 * fStack_124;
    _fStack_104 = CONCAT44(fVar33 * fStack_110 + fVar34 * fStack_130 + fVar35 * fVar43 +
                           fVar36 * fStack_120,
                           fVar33 * fStack_114 + fVar34 * fVar20 + fVar35 * fVar42 +
                           fVar36 * fStack_124);
    fStack_e0 = fVar17 * fStack_110 + fVar19 * fStack_130 + fVar23 * fVar43 + fVar24 * fStack_120;
    fStack_dc = fVar17 * fStack_10c + fVar19 * fStack_12c + fVar23 * fVar44 + fVar24 * fStack_11c;
    _fStack_fc = CONCAT44(fVar28 * local_118 + fVar30 * fVar18 + fVar31 * fVar41 +
                          fVar32 * local_128,
                          fVar33 * fStack_10c + fVar34 * fStack_12c + fVar35 * fVar44 +
                          fVar36 * fStack_11c);
    _fStack_f0 = CONCAT44(fVar28 * fStack_10c + fVar30 * fStack_12c + fVar31 * fVar44 +
                          fVar32 * fStack_11c,
                          fVar28 * fStack_110 + fVar30 * fStack_130 + fVar31 * fVar43 +
                          fVar32 * fStack_120);
    local_d8 = fVar40 * local_128 + fVar37 * local_118 + fVar38 * fVar18 + fVar39 * fVar41;
    fStack_d4 = fVar40 * fStack_124 + fVar37 * fStack_114 + fVar38 * fVar20 + fVar39 * fVar42;
    fStack_d0 = fVar40 * fStack_120 + fVar37 * fStack_110 + fVar38 * fStack_130 + fVar39 * fVar43;
    fStack_cc = fVar40 * fStack_11c + fVar37 * fStack_10c + fVar38 * fStack_12c + fVar39 * fVar44;
    _local_e8 = CONCAT44(fVar17 * fStack_114 + fVar19 * fVar20 + fVar23 * fVar42 +
                         fVar24 * fStack_124,
                         fVar17 * local_118 + fVar19 * fVar18 + fVar23 * fVar41 + fVar24 * local_128
                        );
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_2,uVar2,param_1 + 0x110,&local_108,uVar12);
    uVar45 = (undefined4)(uVar12 >> 0x20);
  }
  uVar29 = 0x3f800000;
  uVar12 = CONCAT44(uVar45,param_7);
  FUN_141b511c0(param_1 + 0x116,param_2,uVar2,param_4,uVar12);
  if (param_6 == '\0') {
    uVar29 = 0;
  }
  local_138 = *(undefined8 *)(*(longlong *)(param_4 + 0x30) + 0x164);
  fStack_130 = (float)uVar29;
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar2,param_1 + 0x11c,&local_138,uVar12 & 0xffffffff00000000);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar12 = uVar10;
    do {
      iVar11 = (int)uVar12;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar10 * 8) == &DAT_146a286e0) {
        if (iVar11 != -1) {
          puVar13 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar11 * 8);
          *(undefined4 *)puVar13 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b71ebe;
        }
        break;
      }
      uVar12 = (ulonglong)(iVar11 + 1);
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a253f8) {
    _Init_thread_header(&DAT_146a253f8);
    if (DAT_146a253f8 == -1) {
      DAT_146a253f0._0_4_ = 0;
      DAT_146a253f0._4_2_ = 0;
      DAT_146a253f0._6_1_ = 0;
      _Init_thread_footer(&DAT_146a253f8);
    }
  }
  puVar13 = &DAT_146a253f0;
LAB_141b71ebe:
  param_5 = (longlong *)*puVar13;
  if ((char)((ulonglong)param_5 >> 0x30) != '\0') {
    FUN_141b51280(param_2,uVar2,&param_5,param_4,param_3);
  }
  return;
}



// FUNCTION 141b71f70 FUN_141b71f70 body=1280 status=ok
// SIG undefined FUN_141b71f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b71f70(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  undefined8 local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar4 = 0;
  uVar2 = *(undefined8 *)(lVar6 + 0x38);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar9 = uVar4;
    do {
      iVar8 = (int)uVar9;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146b096e0) {
        if (iVar8 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141b72018;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar10 = (undefined4 *)&DAT_146a0e8b0;
LAB_141b72018:
  FUN_141aad730(param_2,uVar2,puVar10,param_3 + 0x20);
  if (*(short *)(param_1 + 0xd2) != 0) {
    puVar5 = (undefined8 *)FUN_141d9d800(param_1,local_res18,param_2,param_3);
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar3 = *puVar5;
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144165218;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x60);
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144165218;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
    uVar3 = *(undefined8 *)(param_3 + 0x70);
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144165218;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  uVar4 = 0;
  if ((*(char *)(param_3 + 0x120d) != '\0') && (0 < *(int *)(*(longlong *)(param_3 + 0x10) + 8))) {
    lVar6 = FSceneViewFamily::GetStereoEyeView
                      (*(longlong *)(param_3 + 0x10),-(*(int *)(param_3 + 0xf60) != 0) & 2);
    if (0 < *(int *)(param_1 + 0x10)) {
      uVar9 = uVar4;
      do {
        iVar8 = (int)uVar9;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146b09780) {
          if (iVar8 != -1) {
            puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
            *puVar10 = *(undefined4 *)(param_1 + 0xb8);
            goto LAB_141b72252;
          }
          break;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146a0e8c8) {
      _Init_thread_header(&DAT_146a0e8c8);
      if (DAT_146a0e8c8 == -1) {
        _DAT_146a0e8c0 = 0;
        _DAT_146a0e8c4 = 0;
        DAT_146a0e8c6 = 0;
        _Init_thread_footer(&DAT_146a0e8c8);
      }
    }
    puVar10 = (undefined4 *)&DAT_146a0e8c0;
LAB_141b72252:
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,uVar2,puVar10,*(undefined8 *)(lVar6 + 0x20));
  }
  (**(code **)(**(longlong **)(param_4 + 0x30) + 0x10))(*(longlong **)(param_4 + 0x30),&local_68);
  if (*(char *)(*(longlong *)(param_4 + 0x30) + 0x188) == '\0') {
    local_68 = *(undefined8 *)(param_3 + 0x8dc);
    local_60 = *(float *)(param_3 + 0x8e4);
  }
  local_58 = (float)local_68 + *(float *)(param_3 + 0x8d0);
  local_54 = local_68._4_4_ + *(float *)(param_3 + 0x8d4);
  local_4c = local_5c * 1.0352762;
  local_50 = local_60 + *(float *)(param_3 + 0x8d8);
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2,*(undefined8 *)(lVar6 + 0x38),param_1 + 0x110,&local_58,0);
  lVar6 = *(longlong *)(param_1 + 0x48);
  local_48 = 0;
  uStack_40 = 0;
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
            (param_2,*(undefined8 *)(lVar6 + 0x38),param_1 + 0x116,&local_48,0);
  lVar6 = *(longlong *)(param_1 + 0x48);
  local_res8[0] = *(uint *)(param_4 + 0x90) >> 1 & 1;
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  FUN_1404986d0(param_2,*(undefined8 *)(lVar6 + 0x38),param_1 + 0x128,local_res8,0);
  return;
}



// FUNCTION 141b72470 FUN_141b72470 body=1517 status=ok
// SIG undefined FUN_141b72470(void)

void FUN_141b72470(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6,longlong param_7)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  void *_Dst;
  ulonglong _Size;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_res8;
  undefined8 uVar29;
  ulonglong uVar30;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_10c;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  plVar21 = (longlong *)CONCAT44(param_5._4_4_,(uint)param_5);
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  local_res8 = 0;
  (**(code **)(*plVar21 + 0x40))(plVar21,*(undefined4 *)(param_3 + 0x1a38),&param_5,&local_res8);
  uVar29 = local_res8;
  FUN_141d857a0(param_1,param_2,uVar3,plVar21,local_res8,param_3,param_3 + 0x20,0);
  uVar30 = CONCAT44((int)((ulonglong)uVar29 >> 0x20),param_6);
  FHeightfieldDescriptionParameters::Set<FRHIPixelShader_*>
            (param_1 + 0x110,param_2,uVar3,DAT_1464c1f48,uVar30);
  FUN_141b50ab0(param_1 + 0x11a,param_2,uVar3,param_7);
  lVar2 = *(longlong *)(param_4 + 0x30);
  uVar30 = uVar30 & 0xffffffff00000000;
  local_140 = *(float *)(lVar2 + 0x50);
  local_144 = *(float *)(lVar2 + 0x40);
  local_148 = *(float *)(lVar2 + 0x30);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar3,param_1 + 0x12a,&local_148,uVar30);
  lVar2 = *(longlong *)(param_4 + 0x30);
  local_148 = *(float *)(lVar2 + 0x110);
  local_13c = local_148 * *(float *)(lVar2 + 0x10c);
  local_140 = local_148 * *(float *)(lVar2 + 0x108);
  local_144 = local_148 * *(float *)(lVar2 + 0x104);
  local_148 = local_148 * *(float *)(lVar2 + 0x100);
  uVar4 = (uint)*(ushort *)(param_1 + 0x134);
  if (0xf < *(ushort *)(param_1 + 0x134)) {
    uVar4 = 0x10;
  }
  _Size = (ulonglong)uVar4;
  if (uVar4 != 0) {
    local_res8 = CONCAT44(local_res8._4_4_,(uint)*(ushort *)(param_1 + 0x132));
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    param_5._0_4_ = (uint)*(ushort *)(param_1 + 0x130);
    uVar22 = (longlong)_Dst + _Size;
    if (*(ulonglong *)(param_2 + 0x38) < uVar22) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar4 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar22 = (longlong)_Dst + _Size;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar22;
    _guard_xfg_dispatch_icall_nop(_Dst,&local_148,_Size);
    puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar24 = puVar25 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar24) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar25 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar24;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar25;
    *(undefined8 **)(param_2 + 8) = puVar25 + 1;
    puVar25[1] = 0;
    *puVar25 = &PTR_LAB_143f594b0;
    *(uint *)(puVar25 + 4) = (uint)param_5;
    *(undefined4 *)((longlong)puVar25 + 0x24) = (undefined4)local_res8;
    puVar25[2] = uVar3;
    puVar25[3] = _Dst;
    *(uint *)(puVar25 + 5) = uVar4;
  }
  uVar30 = uVar30 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x136,&stack0x00000040,uVar30);
  uVar29 = *(undefined8 *)(*(longlong *)(param_7 + 0x48) + 0x10);
  uVar23 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x13e) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x13c);
    puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar24 = puVar25 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar24) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar25 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar24;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar25;
    *(undefined8 **)(param_2 + 8) = puVar25 + 1;
    puVar25[1] = 0;
    *puVar25 = &PTR_LAB_143f59c80;
    puVar25[2] = uVar3;
    *(uint *)(puVar25 + 3) = (uint)uVar1;
    puVar25[4] = uVar29;
  }
  if (*(short *)(param_1 + 0x142) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x140);
    puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar24 = puVar25 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar24) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar24 = puVar25 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar24;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar25;
    *(undefined8 **)(param_2 + 8) = puVar25 + 1;
    puVar25[1] = 0;
    *puVar25 = &PTR_LAB_143f59c70;
    puVar25[4] = uVar23;
    puVar25[2] = uVar3;
    *(uint *)(puVar25 + 3) = (uint)uVar1;
  }
  lVar2 = *(longlong *)(param_4 + 0x30);
  uStack_12c = 0;
  fVar5 = *(float *)(lVar2 + 0x30);
  fVar6 = *(float *)(lVar2 + 0x34);
  fVar7 = *(float *)(lVar2 + 0x38);
  fVar8 = *(float *)(lVar2 + 0x3c);
  fVar9 = *(float *)(lVar2 + 0x40);
  fVar10 = *(float *)(lVar2 + 0x44);
  fVar11 = *(float *)(lVar2 + 0x48);
  fVar12 = *(float *)(lVar2 + 0x4c);
  fVar13 = *(float *)(lVar2 + 0x50);
  fVar14 = *(float *)(lVar2 + 0x54);
  fVar15 = *(float *)(lVar2 + 0x58);
  fVar16 = *(float *)(lVar2 + 0x5c);
  local_140 = *(float *)(lVar2 + 0x160);
  fVar17 = *(float *)(lVar2 + 0x60);
  fVar18 = *(float *)(lVar2 + 100);
  fVar19 = *(float *)(lVar2 + 0x68);
  fVar20 = *(float *)(lVar2 + 0x6c);
  fVar28 = 1.0 / (float)*(undefined8 *)(lVar2 + 0x158);
  uStack_120 = 0;
  uStack_134 = 0;
  local_118 = 0;
  uStack_10c = 0;
  fVar26 = 1.0 / local_140;
  fVar27 = 1.0 / (float)((ulonglong)*(undefined8 *)(lVar2 + 0x158) >> 0x20);
  local_f8 = fVar6 * 0.0 + fVar5 * fVar26 + fVar7 * 0.0 + fVar8 * 0.0;
  fStack_f4 = fVar6 * fVar27 + fVar5 * 0.0 + fVar7 * 0.0 + fVar8 * 0.0;
  fStack_f0 = fVar6 * 0.0 + fVar5 * 0.0 + fVar7 * fVar28 + fVar8 * 0.0;
  fStack_ec = fVar6 * 0.0 + fVar5 * 0.0 + fVar7 * 0.0 + fVar8 * 1.0;
  local_e8 = fVar10 * 0.0 + fVar9 * fVar26 + fVar11 * 0.0 + fVar12 * 0.0;
  fStack_e4 = fVar10 * fVar27 + fVar9 * 0.0 + fVar11 * 0.0 + fVar12 * 0.0;
  fStack_e0 = fVar10 * 0.0 + fVar9 * 0.0 + fVar11 * fVar28 + fVar12 * 0.0;
  fStack_dc = fVar10 * 0.0 + fVar9 * 0.0 + fVar11 * 0.0 + fVar12 * 1.0;
  local_d8 = fVar13 * fVar26 + fVar14 * 0.0 + fVar15 * 0.0 + fVar16 * 0.0;
  fStack_d4 = fVar13 * 0.0 + fVar14 * fVar27 + fVar15 * 0.0 + fVar16 * 0.0;
  fStack_d0 = fVar13 * 0.0 + fVar14 * 0.0 + fVar15 * fVar28 + fVar16 * 0.0;
  fStack_cc = fVar13 * 0.0 + fVar14 * 0.0 + fVar15 * 0.0 + fVar16 * 1.0;
  local_c8 = fVar18 * 0.0 + fVar17 * fVar26 + fVar19 * 0.0 + fVar20 * 0.0;
  fStack_c4 = fVar18 * fVar27 + fVar17 * 0.0 + fVar19 * 0.0 + fVar20 * 0.0;
  fStack_c0 = fVar18 * 0.0 + fVar17 * 0.0 + fVar19 * fVar28 + fVar20 * 0.0;
  fStack_bc = fVar18 * 0.0 + fVar17 * 0.0 + fVar19 * 0.0 + fVar20 * 1.0;
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar3,param_1 + 0x144,&local_f8,uVar30 & 0xffffffff00000000);
  FUN_141b511c0(param_1 + 0x14a,param_2,uVar3,param_4,0x3f800000);
  return;
}



// FUNCTION 141b72a60 FUN_141b72a60 body=959 status=ok
// SIG undefined FUN_141b72a60(void)

void FUN_141b72a60(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,undefined8 param_6,longlong param_7,undefined8 param_8)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_res8;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
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
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  local_res8 = uVar3;
  FUN_141aa9590(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  FHeightfieldDescriptionParameters::Set<FRHIPixelShader_*>
            (param_1 + 0xc0,param_2,uVar3,DAT_1464c1f48,param_5);
  FUN_141b50ab0(param_1 + 0xca,param_2,uVar3,param_6);
  FUN_141b22160(param_1 + 0xda,param_2,&local_res8,CONCAT44(param_8._4_4_,(float)param_8) + 0x30);
  lVar2 = *(longlong *)(*(longlong *)(param_4 + 0x5c8) + 0x30);
  local_120 = *(undefined4 *)(lVar2 + 0x50);
  local_124 = *(undefined4 *)(lVar2 + 0x40);
  local_128 = *(undefined4 *)(lVar2 + 0x30);
  SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
            (param_2,uVar3,param_1 + 0x108,&local_128,0);
  fVar20 = (float)(**(code **)(**(longlong **)(*(longlong *)(param_4 + 0x5c8) + 0x30) + 0x40))();
  fVar21 = 0.001;
  if ((0.001 <= fVar20) && (fVar21 = fVar20, 5.0 <= fVar20)) {
    fVar21 = 5.0;
  }
  param_8._0_4_ = _guard_xfg_dispatch_icall_nop(fVar21 * 0.017453292);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x10e,&param_8,0);
  param_8._0_4_ = *(float *)(param_4 + 0x3c0);
  param_8._4_4_ = *(undefined4 *)(param_4 + 0x3c4);
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,uVar3,param_1 + 0x114,&param_8,0);
  if (param_7 != 0) {
    FUN_141b22420(param_1 + 0x11a,param_2,&local_res8);
  }
  fVar4 = *(float *)(param_4 + 0xa0);
  fVar5 = *(float *)(param_4 + 0xa4);
  fVar6 = *(float *)(param_4 + 0xa8);
  fVar7 = *(float *)(param_4 + 0xac);
  fVar8 = *(float *)(param_4 + 0x90);
  fVar9 = *(float *)(param_4 + 0x94);
  fVar10 = *(float *)(param_4 + 0x98);
  fVar11 = *(float *)(param_4 + 0x9c);
  fVar12 = *(float *)(param_4 + 0xb0);
  fVar13 = *(float *)(param_4 + 0xb4);
  fVar14 = *(float *)(param_4 + 0xb8);
  fVar15 = *(float *)(param_4 + 0xbc);
  fVar16 = *(float *)(param_4 + 0xc0);
  fVar17 = *(float *)(param_4 + 0xc4);
  fVar18 = *(float *)(param_4 + 200);
  fVar19 = *(float *)(param_4 + 0xcc);
  fVar21 = *(float *)(param_4 + 0x44);
  fVar20 = *(float *)(param_4 + 0x48);
  fVar1 = *(float *)(param_4 + 0x4c);
  local_118 = fVar8 * 1.0 + fVar4 * 0.0 + fVar12 * 0.0 + fVar16 * 0.0;
  fStack_114 = fVar9 * 1.0 + fVar5 * 0.0 + fVar13 * 0.0 + fVar17 * 0.0;
  fStack_110 = fVar10 * 1.0 + fVar6 * 0.0 + fVar14 * 0.0 + fVar18 * 0.0;
  fStack_10c = fVar11 * 1.0 + fVar7 * 0.0 + fVar15 * 0.0 + fVar19 * 0.0;
  local_108 = fVar8 * 0.0 + fVar4 * 1.0 + fVar12 * 0.0 + fVar16 * 0.0;
  fStack_104 = fVar9 * 0.0 + fVar5 * 1.0 + fVar13 * 0.0 + fVar17 * 0.0;
  fStack_100 = fVar10 * 0.0 + fVar6 * 1.0 + fVar14 * 0.0 + fVar18 * 0.0;
  fStack_fc = fVar11 * 0.0 + fVar7 * 1.0 + fVar15 * 0.0 + fVar19 * 0.0;
  local_f8 = fVar8 * 0.0 + fVar4 * 0.0 + fVar12 * 1.0 + fVar16 * 0.0;
  fStack_f4 = fVar9 * 0.0 + fVar5 * 0.0 + fVar13 * 1.0 + fVar17 * 0.0;
  fStack_f0 = fVar10 * 0.0 + fVar6 * 0.0 + fVar14 * 1.0 + fVar18 * 0.0;
  fStack_ec = fVar11 * 0.0 + fVar7 * 0.0 + fVar15 * 1.0 + fVar19 * 0.0;
  local_e8 = fVar21 * fVar8 + fVar20 * fVar4 + fVar1 * fVar12 + fVar16 * 1.0;
  fStack_e4 = fVar21 * fVar9 + fVar20 * fVar5 + fVar1 * fVar13 + fVar17 * 1.0;
  fStack_e0 = fVar21 * fVar10 + fVar20 * fVar6 + fVar1 * fVar14 + fVar18 * 1.0;
  fStack_dc = fVar21 * fVar11 + fVar20 * fVar7 + fVar1 * fVar15 + fVar19 * 1.0;
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar3,param_1 + 0x146,&local_118,0);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x14c,&DAT_1464c1a08,0);
  return;
}



// FUNCTION 141b72e20 FUN_141b72e20 body=633 status=ok
// SIG undefined FUN_141b72e20(void)

void FUN_141b72e20(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,undefined8 param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [64];
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa9590(param_1,param_2,uVar3,*(undefined8 *)(param_3 + 0x20));
  FHeightfieldDescriptionParameters::Set<FRHIPixelShader_*>
            (param_1 + 0xc0,param_2,uVar3,DAT_1464c1f48,param_5);
  FUN_141b50ab0(param_1 + 0xca,param_2,uVar3,param_6);
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  FProjectedShadowInfo::GetWorldToShadowMatrix(param_4,local_68,&local_78,0);
  SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
            (param_2,uVar3,param_1 + 0xda,local_68,0);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe0,&local_78,0);
  local_res8 = *(undefined4 *)(param_4 + 0x6b8);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xe6,&local_res8,0);
  local_res8 = *(undefined4 *)(param_4 + 0x3c0);
  local_resc = *(undefined4 *)(param_4 + 0x3c4);
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,uVar3,param_1 + 0xec,&local_res8,0);
  uVar4 = *(undefined8 *)(*(longlong *)(param_4 + 0x28) + 0x10);
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xf4) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf2);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xf8) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xf6);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  return;
}



// FUNCTION 141b730a0 FUN_141b730a0 body=280 status=ok
// SIG undefined FUN_141b730a0(void)

void FUN_141b730a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_2 + 0xbc0) = 0;
  *(undefined4 *)(param_2 + 0xbc4) = 0;
  *(undefined4 *)(param_2 + 0xbc8) = 0;
  *(undefined4 *)(param_2 + 0xbcc) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xc00) = 0;
  *(undefined4 *)(param_2 + 0xc04) = 0;
  *(undefined4 *)(param_2 + 0xc08) = 0;
  *(undefined4 *)(param_2 + 0xc0c) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xbd0) = 0;
  *(undefined4 *)(param_2 + 0xbd4) = 0;
  *(undefined4 *)(param_2 + 0xbd8) = 0;
  *(undefined4 *)(param_2 + 0xbdc) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xc10) = 0;
  *(undefined4 *)(param_2 + 0xc14) = 0;
  *(undefined4 *)(param_2 + 0xc18) = 0;
  *(undefined4 *)(param_2 + 0xc1c) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xbe0) = 0;
  *(undefined4 *)(param_2 + 0xbe4) = 0;
  *(undefined4 *)(param_2 + 0xbe8) = 0;
  *(undefined4 *)(param_2 + 0xbec) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xc20) = 0;
  *(undefined4 *)(param_2 + 0xc24) = 0;
  *(undefined4 *)(param_2 + 0xc28) = 0;
  *(undefined4 *)(param_2 + 0xc2c) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xbf0) = 0;
  *(undefined4 *)(param_2 + 0xbf4) = 0;
  *(undefined4 *)(param_2 + 0xbf8) = 0;
  *(undefined4 *)(param_2 + 0xbfc) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xc30) = 0;
  *(undefined4 *)(param_2 + 0xc34) = 0;
  *(undefined4 *)(param_2 + 0xc38) = 0;
  *(undefined4 *)(param_2 + 0xc3c) = 0x3f800000;
  *(undefined8 *)(param_2 + 0xc40) = 0;
  *(undefined4 *)(param_2 + 0xc48) = 0;
  lVar2 = *(longlong *)(DAT_146ac3e30 + 0x30);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(DAT_146ac3e00 + 0x30);
  }
  *(longlong *)(param_2 + 0xe30) = lVar2;
  uVar1 = FUN_141b33a40(0,0);
  *(undefined8 *)(param_2 + 0xe38) = uVar1;
  lVar2 = *(longlong *)(DAT_146ac3e30 + 0x30);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(DAT_146ac3e00 + 0x30);
  }
  *(longlong *)(param_2 + 0xe40) = lVar2;
  uVar1 = FUN_141b33a40();
  *(undefined8 *)(param_2 + 0xe48) = uVar1;
  lVar2 = *(longlong *)(DAT_146ac3e30 + 0x30);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(DAT_146ac3e00 + 0x30);
  }
  *(longlong *)(param_2 + 0xe50) = lVar2;
  uVar1 = FUN_141b33a40();
  *(undefined8 *)(param_2 + 0xe58) = uVar1;
  lVar2 = *(longlong *)(DAT_146ac3e30 + 0x30);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(DAT_146ac3e00 + 0x30);
  }
  *(longlong *)(param_2 + 0xe60) = lVar2;
  uVar1 = FUN_141b33a40();
  *(undefined8 *)(param_2 + 0xe68) = uVar1;
  return;
}



// FUNCTION 141b731c0 FUN_141b731c0 body=611 status=ok
// SIG undefined FUN_141b731c0(void)

void FUN_141b731c0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_141b73377;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_141b73377:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 141b73430 FUN_141b73430 body=691 status=ok
// SIG undefined FUN_141b73430(void)

void FUN_141b73430(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146a1e750 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146a1e750 != 0x1000)) ||
     (uVar3 = DAT_146a1e758, iVar4 != 0)) {
    uVar3 = DAT_146a1e754 | DAT_146a1e750;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_141b73637;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_141b73637:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 141b736f0 FUN_141b736f0 body=3927 status=ok
// SIG undefined FUN_141b736f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b736f0(ulonglong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auVar4 [12];
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_298 [32];
  longlong local_278;
  undefined4 local_270;
  undefined1 local_268;
  undefined8 local_258;
  undefined8 local_250;
  longlong local_248 [2];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  uint uStack_220;
  int iStack_21c;
  undefined8 local_218;
  ulonglong *puStack_210;
  ulonglong *local_208;
  undefined2 local_200;
  uint local_1f8;
  int local_1f4;
  int iStack_1f0;
  longlong local_1e8;
  undefined8 *local_1e0;
  longlong local_1d8;
  ulonglong *local_1d0;
  undefined8 uStack_1c8;
  ulonglong *puStack_1c0;
  undefined4 uStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  ulonglong *puStack_1a8;
  undefined8 local_198;
  longlong *plStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  ulonglong *local_d8;
  undefined8 uStack_d0;
  ulonglong *puStack_c8;
  undefined1 auStack_c0 [16];
  ulonglong local_b0;
  
  local_b0 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  lVar19 = 0;
  local_258 = local_258 & 0xffffffff00000000;
  local_1f8 = 0;
  local_250 = *(ulonglong **)(*(longlong *)(param_2 + 0x10) + 0x20);
  iVar14 = *(int *)((longlong)local_250 + 0x1618);
  if (((((DAT_1464c1c74 != 0) && (*(longlong *)(param_2 + 0x18) != 0)) && (DAT_146a153b0 != 0)) ||
      (DAT_146a1c424 != 0)) &&
     (((0 < iVar14 &&
       (iVar18 = *(int *)(param_2 + 0x1a38), local_248[0] = param_3, local_1d8 = param_2,
       iVar6 = FUN_14274f980(param_2), lVar11 = (longlong)local_250, 2 < iVar18)) && (iVar6 == 0))))
  {
    fVar29 = 1.0;
    fVar28 = DAT_1464c17ac;
    if (65000.0 <= DAT_1464c17ac) {
      fVar28 = 65000.0;
    }
    fVar28 = DAT_1464c1c7c * DAT_1464c1c78 + fVar28;
    if (0 < iVar14) {
      do {
        lVar15 = *(longlong *)(*(longlong *)(lVar11 + 0x1610) + lVar19 * 8);
        lVar20 = *(longlong *)(lVar15 + 8);
        fVar25 = *(float *)(lVar20 + 0xc0) - *(float *)(param_2 + 0x8dc);
        fVar26 = *(float *)(lVar20 + 0xc4) - *(float *)(param_2 + 0x8e0);
        fVar27 = *(float *)(lVar20 + 200) - *(float *)(param_2 + 0x8e4);
        local_1e8 = CONCAT44(local_1e8._4_4_,
                             DAT_1464c1c7c * DAT_1464c1c78 + *(float *)(lVar20 + 0xd8));
        cVar5 = FConvexVolume::IntersectSphere(param_2 + 0x1070,(float *)(lVar20 + 0xc0),&local_1e8)
        ;
        if ((cVar5 != '\0') &&
           (fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27 < fVar28 * fVar28)) {
          plVar12 = *(longlong **)(lVar15 + 8);
          local_198 = 0;
          plStack_190 = (longlong *)0x3f80000000000000;
          local_188 = 0;
          uStack_180 = 0x3f80000000000000;
          local_1e8 = 0;
          local_250 = (ulonglong *)0x0;
          local_178 = plVar12[0x10];
          lStack_170 = plVar12[0x11];
          local_168 = plVar12[0x12];
          lStack_160 = plVar12[0x13];
          local_158 = plVar12[0x14];
          uStack_150 = (undefined4)plVar12[0x15];
          uStack_14c = (undefined4)((ulonglong)plVar12[0x15] >> 0x20);
          uStack_148 = (undefined4)plVar12[0x16];
          uStack_144 = *(undefined4 *)((longlong)plVar12 + 0xb4);
          uStack_140 = (undefined4)plVar12[0x17];
          uStack_13c = *(undefined4 *)((longlong)plVar12 + 0xbc);
          local_118 = 0;
          uStack_110 = 0x3f80000000000000;
          uStack_130 = 0;
          local_128 = 0;
          (**(code **)(*plVar12 + 0xa8))(plVar12,&local_1e8,&local_250,&local_198);
          if ((local_1e8 != 0) && (*(longlong *)(*(longlong *)(local_1e8 + 0x60) + 0x30) != 0)) {
            iVar18 = (int)*param_1;
            if ((*(int *)((longlong)param_1 + 0xc) - *(int *)((longlong)param_1 + 4)) *
                ((int)param_1[1] - iVar18) == 0) {
              *(int *)param_1 = (int)uStack_130;
              *(int *)((longlong)param_1 + 4) = uStack_130._4_4_;
              *(int *)(param_1 + 1) = (int)local_128;
              *(int *)((longlong)param_1 + 0xc) = local_128._4_4_;
              pfVar8 = (float *)FMatrix::GetScaleVector(&local_178,&local_d8);
              fVar29 = *pfVar8;
            }
            else {
              iVar6 = (int)uStack_130;
              if (iVar18 <= (int)uStack_130) {
                iVar6 = iVar18;
              }
              *(int *)param_1 = iVar6;
              iVar18 = uStack_130._4_4_;
              if (*(int *)((longlong)param_1 + 4) <= uStack_130._4_4_) {
                iVar18 = *(int *)((longlong)param_1 + 4);
              }
              *(int *)((longlong)param_1 + 4) = iVar18;
              iVar18 = (int)local_128;
              if ((int)local_128 <= (int)param_1[1]) {
                iVar18 = (int)param_1[1];
              }
              *(int *)(param_1 + 1) = iVar18;
              iVar18 = local_128._4_4_;
              if (local_128._4_4_ <= *(int *)((longlong)param_1 + 0xc)) {
                iVar18 = *(int *)((longlong)param_1 + 0xc);
              }
              *(int *)((longlong)param_1 + 0xc) = iVar18;
            }
            local_238 = (ulonglong *)local_1e8;
            uStack_230 = (longlong)local_250;
            TSet<TTuple<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FHeightfieldComponentTextures,TArray<FHeightfieldComponentDescription,FDefaultAllocator>,0>,FDefaultSetAllocator>
            ::FindId(param_1 + 5,&local_1f4,&local_238);
            if ((local_1f4 == -1) || (lVar15 = param_1[5] + (longlong)local_1f4 * 0x28, lVar15 == 0)
               ) {
              local_1e0 = &local_238;
              FUN_141b4d210(param_1 + 5,&local_258,&local_1e0,0);
              lVar15 = param_1[5] + (longlong)(int)local_258 * 0x28;
            }
            iVar18 = *(int *)(lVar15 + 0x18);
            lVar20 = (longlong)iVar18;
            *(int *)(lVar15 + 0x18) = iVar18 + 1;
            if (*(int *)(lVar15 + 0x1c) < iVar18 + 1) {
              TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(lVar15 + 0x10),iVar18);
            }
            lVar15 = *(longlong *)(lVar15 + 0x10);
            puVar13 = (undefined8 *)(lVar15 + lVar20 * 0x90);
            *puVar13 = local_198;
            puVar13[1] = plStack_190;
            puVar13 = (undefined8 *)(lVar15 + 0x10 + lVar20 * 0x90);
            *puVar13 = local_188;
            puVar13[1] = uStack_180;
            plVar12 = (longlong *)(lVar15 + 0x20 + lVar20 * 0x90);
            *plVar12 = local_178;
            plVar12[1] = lStack_170;
            plVar12 = (longlong *)(lVar15 + 0x30 + lVar20 * 0x90);
            *plVar12 = local_168;
            plVar12[1] = lStack_160;
            plVar12 = (longlong *)(lVar15 + 0x40 + lVar20 * 0x90);
            *plVar12 = local_158;
            plVar12[1] = CONCAT44(uStack_14c,uStack_150);
            puVar13 = (undefined8 *)(lVar15 + 0x50 + lVar20 * 0x90);
            *puVar13 = CONCAT44(uStack_144,uStack_148);
            puVar13[1] = CONCAT44(uStack_13c,uStack_140);
            puVar13 = (undefined8 *)(lVar15 + 0x60 + lVar20 * 0x90);
            *puVar13 = local_138;
            puVar13[1] = uStack_130;
            puVar13 = (undefined8 *)(lVar15 + 0x70 + lVar20 * 0x90);
            *puVar13 = local_128;
            puVar13[1] = uStack_120;
            puVar13 = (undefined8 *)(lVar15 + 0x80 + lVar20 * 0x90);
            *puVar13 = local_118;
            puVar13[1] = uStack_110;
          }
        }
        lVar19 = lVar19 + 1;
        param_3 = local_248[0];
      } while (lVar19 < iVar14);
    }
    plVar12 = (longlong *)0x0;
    if ((((DAT_1464c1c74 != 0) && (lVar19 = *(longlong *)(param_2 + 0x18), lVar19 != 0)) &&
        (DAT_146a153b0 != 0)) && (0 < (int)param_1[6] - *(int *)((longlong)param_1 + 0x5c))) {
      if (*(longlong *)(lVar19 + 0x1170) == 0) {
        plVar9 = (longlong *)operator_new(0x60);
        plVar10 = plVar12;
        if (plVar9 != (longlong *)0x0) {
          *(undefined4 *)(plVar9 + 1) = 4;
          plVar9[2] = 0;
          plVar9[3] = 0;
          *(undefined1 *)(plVar9 + 5) = 0;
          *plVar9 = (longlong)&PTR__scalar_deleting_destructor__144deb690;
          plVar9[6] = 0;
          plVar9[7] = 0;
          plVar9[8] = 0;
          plVar9[9] = 0;
          plVar9[10] = 0;
          plVar9[0xb] = 0;
          plVar10 = plVar9;
        }
        *(longlong **)(lVar19 + 0x1170) = plVar10;
      }
      iVar14 = 1;
      if (0 < (int)(DAT_1464c1c80 / fVar29)) {
        iVar14 = (int)(DAT_1464c1c80 / fVar29);
      }
      *(int *)(param_1 + 2) = iVar14;
      uVar1 = param_1[1];
      iVar18 = (int)((longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff)
                    / (longlong)iVar14);
      iStack_1f0 = (int)(uVar1 >> 0x20);
      iStack_1f0 = iStack_1f0 / iVar14;
      _local_1f4 = CONCAT44(iStack_1f0,iVar18);
      uVar1 = *param_1;
      iVar6 = (int)((longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) /
                   (longlong)iVar14);
      local_258._4_4_ = (int)(uVar1 >> 0x20);
      *(int *)((longlong)param_1 + 0x14) = iVar6;
      local_258._4_4_ = local_258._4_4_ / iVar14;
      local_258 = CONCAT44(local_258._4_4_,iVar6);
      *(int *)(param_1 + 3) = local_258._4_4_;
      *(int *)((longlong)param_1 + 0x1c) = iVar18;
      *(int *)(param_1 + 4) = iStack_1f0;
      iVar14 = (int)param_1[2];
      uVar1 = *param_1;
      *(int *)param_1 =
           (int)((longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) /
                (longlong)iVar14) * iVar14;
      *(int *)((longlong)param_1 + 4) =
           (int)((longlong)((ulonglong)(uint)((longlong)uVar1 >> 0x3f) << 0x20 | uVar1 >> 0x20) /
                (longlong)iVar14) * iVar14;
      plVar10 = *(longlong **)(lVar19 + 0x1170);
      iVar6 = *(int *)((longlong)param_1 + 0x1c) - *(int *)((longlong)param_1 + 0x14);
      iVar18 = (int)param_1[4] - (int)param_1[3];
      iVar14 = (int)plVar10[0xb];
      if ((iVar14 < iVar6) || (*(int *)((longlong)plVar10 + 0x5c) < iVar18)) {
        if (iVar14 <= iVar6) {
          iVar14 = iVar6;
        }
        *(int *)(plVar10 + 0xb) = iVar14;
        iVar14 = *(int *)((longlong)plVar10 + 0x5c);
        if (*(int *)((longlong)plVar10 + 0x5c) <= iVar18) {
          iVar14 = iVar18;
        }
        *(int *)((longlong)plVar10 + 0x5c) = iVar14;
        if ((char)plVar10[5] == '\0') {
          (**(code **)(*plVar10 + 0x28))();
        }
        else {
          FRenderResource::UpdateRHI();
        }
      }
      local_208 = param_1 + 5;
      iVar14 = (int)param_1[10];
      puStack_c8 = param_1 + 7;
      local_238._0_4_ = 0;
      local_238._4_4_ = 1;
      local_228._4_4_ = 0;
      uStack_220 = 0;
      if (iVar14 != 0) {
        puVar22 = (ulonglong *)param_1[9];
        if ((ulonglong *)param_1[9] == (ulonglong *)0x0) {
          puVar22 = puStack_c8;
        }
        uVar21 = (uint)*puVar22;
        plVar10 = plVar12;
        plVar9 = plVar12;
        while (uVar21 == 0) {
          iVar18 = (int)plVar10;
          uStack_220 = (int)plVar9 + 0x20;
          plVar9 = (longlong *)(ulonglong)uStack_220;
          local_238._0_4_ = iVar18 + 1;
          plVar10 = (longlong *)(ulonglong)(uint)local_238;
          if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar18) goto LAB_141b73d54;
          uVar21 = *(uint *)((longlong)puVar22 + (longlong)iVar18 * 4 + 4);
        }
        local_238._4_4_ = -uVar21 & uVar21;
        iVar18 = 0x1f;
        if (local_238._4_4_ != 0) {
          for (; local_238._4_4_ >> iVar18 == 0; iVar18 = iVar18 + -1) {
          }
        }
        if (local_238._4_4_ == 0) {
          iVar18 = 0x20;
        }
        else {
          iVar18 = 0x1f - iVar18;
        }
        local_228._4_4_ = ((int)plVar9 - iVar18) + 0x1f;
        if (iVar14 < local_228._4_4_) {
LAB_141b73d54:
          local_228._4_4_ = iVar14;
        }
      }
      iVar14 = local_228._4_4_;
      auStack_c0._4_4_ = local_228._4_4_;
      auStack_c0._0_4_ = 0xffffffff;
      auStack_c0._8_4_ = uStack_220;
      auStack_c0._12_4_ = iStack_21c;
      uStack_230._4_4_ = (uint)((ulonglong)puStack_c8 >> 0x20);
      uStack_d0._0_4_ = (uint)local_238;
      uStack_d0._4_4_ = local_238._4_4_;
      local_228._0_4_ = SUB84(puStack_c8,0);
      local_200 = 0;
      local_228._4_4_ = uStack_230._4_4_;
      uStack_220 = 0xffffffff;
      iStack_21c = iVar14;
      uStack_230._0_4_ = (uint)local_238;
      uStack_230._4_4_ = local_238._4_4_;
      local_218 = auStack_c0._8_8_;
      local_238 = local_208;
      puStack_1a8 = local_208;
      local_d8 = local_208;
      puStack_210 = local_208;
      if (iVar14 < (int)param_1[10]) {
        do {
          lVar11 = (longlong)iStack_21c;
          uVar1 = *local_238;
          plVar10 = plVar12;
          plVar9 = plVar12;
          if (0 < *(int *)(uVar1 + 0x18 + lVar11 * 0x28)) {
            do {
              lVar15 = *(longlong *)(uVar1 + 0x10 + lVar11 * 0x28);
              uVar21 = (int)plVar9 + 1;
              uVar2 = *(undefined8 *)((longlong)plVar10 + lVar15 + 0x68);
              iVar14 = (int)uVar2 - (int)*param_1;
              local_258._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
              local_258._4_4_ = local_258._4_4_ - *(int *)((longlong)param_1 + 4);
              fVar29 = 1.0 / (float)(int)param_1[2];
              local_258 = CONCAT44(local_258._4_4_,iVar14);
              *(float *)((longlong)plVar10 + lVar15 + 0x60) = (float)iVar14 * fVar29;
              *(float *)((longlong)plVar10 + lVar15 + 100) = (float)local_258._4_4_ * fVar29;
              plVar10 = plVar10 + 0x12;
              plVar9 = (longlong *)(ulonglong)uVar21;
            } while ((int)uVar21 < *(int *)(uVar1 + 0x18 + lVar11 * 0x28));
          }
          uStack_220 = uStack_220 & ~uStack_230._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_230);
        } while (iStack_21c < *(int *)(CONCAT44(local_228._4_4_,(undefined4)local_228) + 0x18));
        if (((char)local_200 != '\0') && (local_200._1_1_ != '\0')) {
          TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_208,(int)local_208[1] - *(int *)((longlong)local_208 + 0x34),1);
        }
      }
      lVar19 = *(longlong *)(lVar19 + 0x1170);
      iVar18 = (int)*(undefined8 *)(lVar19 + 0x58);
      local_d8 = *(ulonglong **)(*(longlong *)(lVar19 + 0x30) + 8);
      uStack_d0 = *(undefined8 *)(*(longlong *)(lVar19 + 0x38) + 8);
      puStack_c8 = *(ulonglong **)(*(longlong *)(lVar19 + 0x40) + 8);
      puVar16 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar16 + 5;
      iVar14 = (int)((ulonglong)*(undefined8 *)(lVar19 + 0x58) >> 0x20);
      local_250 = (ulonglong *)CONCAT44(1.0 / (float)iVar14,1.0 / (float)iVar18);
      if (*(undefined8 **)(param_3 + 0x38) < puVar13) {
        FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
        puVar16 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar16 + 5;
      }
      *(undefined8 **)(param_3 + 0x30) = puVar13;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
      local_268 = 0;
      local_270 = 0x11;
      **(undefined8 **)(param_3 + 8) = puVar16;
      local_278 = CONCAT44(local_278._4_4_,4);
      *(undefined8 **)(param_3 + 8) = puVar16 + 1;
      puVar16[1] = 0;
      *puVar16 = &PTR_LAB_143f59420;
      puVar16[2] = 0;
      *(undefined4 *)(puVar16 + 3) = 0;
      *(int *)((longlong)puVar16 + 0x1c) = iVar18;
      *(int *)(puVar16 + 4) = iVar14;
      *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
      FUN_141ad8260(param_3,3,&local_d8);
      local_158 = 0;
      local_198 = 0;
      plStack_190 = (longlong *)0x0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      lStack_170 = 0;
      local_168 = 0;
      lStack_160 = 0;
      local_138 = 0;
      uStack_130 = 0;
      uStack_150 = 0;
      uStack_14c = 0x26;
      uStack_148 = 0;
      uStack_144 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f4 = 0;
      local_ec = 0;
      local_e4 = 0;
      FUN_14049afe0(param_3,&local_198);
      lStack_160 = FUN_140985530();
      local_158 = FUN_1409853f0();
      local_168 = FUN_1404a0ce0();
      uVar2 = DAT_1464c1ea8;
      puVar16 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar16 + 5;
      if (*(undefined8 **)(param_3 + 0x38) < puVar13) {
        FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
        puVar16 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar16 + 5;
      }
      *(undefined8 **)(param_3 + 0x30) = puVar13;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
      uStack_230._0_4_ = 0;
      **(undefined8 **)(param_3 + 8) = puVar16;
      *(undefined8 **)(param_3 + 8) = puVar16 + 1;
      puVar16[1] = 0;
      *puVar16 = &PTR_LAB_143f489e0;
      *(undefined4 *)(puVar16 + 2) = 0;
      puVar16[3] = uVar2;
      *(undefined4 *)(puVar16 + 4) = 0;
      lVar19 = *(longlong *)(param_2 + 0x3090);
      local_238 = (ulonglong *)&DAT_146a1dc10;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar19 + 0x38,&local_258,&local_238);
      plVar10 = plVar12;
      if ((int)local_258 != -1) {
        plVar10 = (longlong *)((longlong)(int)local_258 * 0x20 + *(longlong *)(lVar19 + 0x38));
      }
      uStack_230._0_4_ = 0;
      plVar9 = plVar10 + 2;
      if (plVar10 == (longlong *)0x0) {
        plVar9 = plVar12;
      }
      local_238 = (ulonglong *)&DAT_146a1dd60;
      lVar11 = *plVar9;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(lVar19 + 0x38,&local_258,&local_238);
      plVar10 = plVar12;
      if ((int)local_258 != -1) {
        plVar10 = (longlong *)((longlong)(int)local_258 * 0x20 + *(longlong *)(lVar19 + 0x38));
      }
      plVar9 = plVar10 + 2;
      if (plVar10 == (longlong *)0x0) {
        plVar9 = plVar12;
      }
      lVar19 = *plVar9;
      local_198 = DAT_146534c78;
      if (lVar11 == 0) {
        local_248[0] = 0;
        uVar21 = 1;
      }
      else {
        lVar15 = *(longlong *)(lVar11 + 0x48);
        if (*(char *)(lVar15 + 0x28) == '\0') {
          FUN_1419f3850(lVar15);
        }
        plVar12 = *(longlong **)(lVar15 + 0x38);
        uVar21 = local_1f8;
      }
      plStack_190 = plVar12;
      if ((uVar21 & 1) != 0) {
        uVar21 = uVar21 & 0xfffffffe;
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_248);
      }
      if (lVar19 == 0) {
        uVar21 = uVar21 | 2;
        local_248[0] = 0;
        local_178 = 0;
      }
      else {
        lVar15 = *(longlong *)(lVar19 + 0x48);
        if (*(char *)(lVar15 + 0x28) == '\0') {
          FUN_1419f3850(lVar15);
        }
        local_178 = *(longlong *)(lVar15 + 0x40);
      }
      if ((uVar21 & 2) != 0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_248);
      }
      uStack_14c = 0;
      FUN_141ed6ac0(param_3,&local_198,2,1);
      puVar22 = local_250;
      local_1d0 = param_1 + 5;
      local_238 = (ulonglong *)0x100000000;
      iVar14 = (int)param_1[10];
      puStack_1c0 = param_1 + 7;
      local_228._4_4_ = 0;
      uStack_220 = 0;
      if (iVar14 != 0) {
        puVar23 = (ulonglong *)param_1[9];
        if ((ulonglong *)param_1[9] == (ulonglong *)0x0) {
          puVar23 = puStack_1c0;
        }
        uVar21 = (uint)*puVar23;
        iVar18 = 0;
        uStack_220 = 0;
        while (uVar21 == 0) {
          uStack_220 = uStack_220 + 0x20;
          local_238._4_4_ = (uint)((ulonglong)local_238 >> 0x20);
          local_238 = (ulonglong *)CONCAT44(local_238._4_4_,iVar18 + 1);
          if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar18) goto LAB_141b742d5;
          uVar21 = *(uint *)((longlong)puVar23 + (longlong)iVar18 * 4 + 4);
          iVar18 = iVar18 + 1;
        }
        uVar21 = -uVar21 & uVar21;
        iVar18 = 0x1f;
        if (uVar21 != 0) {
          for (; uVar21 >> iVar18 == 0; iVar18 = iVar18 + -1) {
          }
        }
        local_238 = (ulonglong *)CONCAT44(uVar21,(uint)local_238);
        if (uVar21 == 0) {
          iVar18 = 0x20;
        }
        else {
          iVar18 = 0x1f - iVar18;
        }
        local_228._4_4_ = (uStack_220 - iVar18) + 0x1f;
        if (iVar14 < local_228._4_4_) {
LAB_141b742d5:
          local_228._4_4_ = iVar14;
        }
      }
      uStack_1b8 = 0xffffffff;
      iStack_1b4 = local_228._4_4_;
      iStack_1b0 = uStack_220;
      iStack_1ac = iStack_21c;
      uStack_1c8 = local_238;
      uStack_230 = (longlong)local_238;
      auVar4._4_8_ = local_238;
      auVar4._0_4_ = local_228._4_4_;
      auVar24._0_8_ = auVar4._0_8_ << 0x20;
      auVar24._8_4_ = uStack_220;
      auVar24._12_4_ = iStack_21c;
      local_218 = auVar24._8_8_;
      uStack_220 = 0xffffffff;
      iStack_21c = local_228._4_4_;
      bVar3 = local_228._4_4_ < iVar14;
      local_238 = local_1d0;
      local_228 = puStack_1c0;
      if (bVar3) {
        do {
          iVar14 = iStack_21c;
          local_250 = local_238;
          lVar15 = (longlong)iStack_21c * 5 + 2;
          if (0 < *(int *)(*local_238 + 8 + lVar15 * 8)) {
            uVar7 = FUN_141b79f90(*local_238 + lVar15 * 8,puVar22,1.0 / (float)(int)param_1[2]);
            lVar15 = *(longlong *)(lVar11 + 0x48);
            local_258 = CONCAT44(local_258._4_4_,uVar7);
            if (*(char *)(lVar15 + 0x28) == '\0') {
              FUN_1419f3850(lVar15);
            }
            lVar20 = local_1d8;
            local_248[0] = *(longlong *)(lVar15 + 0x38);
            FUN_141aa9800(lVar11,param_3,local_248[0],*(undefined8 *)(local_1d8 + 0x20));
            local_1e0 = DAT_1464c1ef8;
            if (*(short *)(lVar11 + 0xc2) != 0) {
              local_1f8 = (uint)*(ushort *)(lVar11 + 0xc0);
              puVar16 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar13 = puVar16 + 5;
              if (*(undefined8 **)(param_3 + 0x38) < puVar13) {
                FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
                puVar16 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
                puVar13 = puVar16 + 5;
              }
              *(undefined8 **)(param_3 + 0x30) = puVar13;
              *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
              **(undefined8 **)(param_3 + 8) = puVar16;
              *(undefined8 **)(param_3 + 8) = puVar16 + 1;
              puVar16[1] = 0;
              *puVar16 = &PTR_LAB_144165218;
              puVar16[2] = local_248[0];
              *(uint *)(puVar16 + 3) = local_1f8;
              puVar16[4] = local_1e0;
            }
            lVar15 = *(longlong *)(lVar19 + 0x48);
            local_248[0] = *(longlong *)(*local_250 + 8 + (longlong)iVar14 * 0x28);
            local_1e0 = *(undefined8 **)(*local_250 + (longlong)iVar14 * 0x28);
            if (*(char *)(lVar15 + 0x28) == '\0') {
              FUN_1419f3850(lVar15);
            }
            uVar2 = *(undefined8 *)(lVar15 + 0x40);
            FUN_141aa9590(lVar19,param_3,uVar2,*(undefined8 *)(lVar20 + 0x20));
            local_278 = local_248[0];
            FUN_141b50ea0(lVar19 + 0xc0,param_3,uVar2,local_1e0);
            puVar16 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar16 + 4;
            if (*(undefined8 **)(param_3 + 0x38) < puVar13) {
              FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x28);
              puVar16 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar13 = puVar16 + 4;
            }
            *(undefined8 **)(param_3 + 0x30) = puVar13;
            *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
            **(undefined8 **)(param_3 + 8) = puVar16;
            *(undefined8 **)(param_3 + 8) = puVar16 + 1;
            puVar16[1] = 0;
            *puVar16 = &PTR_LAB_143f59410;
            *(int *)((longlong)puVar16 + 0x1c) = (int)local_258;
            puVar16[2] = 0;
            *(undefined4 *)(puVar16 + 3) = 2;
          }
          uStack_220 = uStack_220 & ~uStack_230._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_230);
        } while (iStack_21c < (int)local_228[3]);
      }
      puVar16 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar16 + 3;
      if (*(undefined8 **)(param_3 + 0x38) < puVar13) {
        FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x20);
        puVar16 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar16 + 3;
      }
      *(undefined8 **)(param_3 + 0x30) = puVar13;
      *puVar16 = local_d8;
      puVar16[1] = uStack_d0;
      puVar16[2] = puStack_c8;
      puVar17 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar17 + 5;
      if (*(undefined8 **)(param_3 + 0x38) < puVar13) {
        FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x30);
        puVar17 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar13 = puVar17 + 5;
      }
      *(undefined8 **)(param_3 + 0x30) = puVar13;
      *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
      **(undefined8 **)(param_3 + 8) = puVar17;
      *(undefined8 **)(param_3 + 8) = puVar17 + 1;
      puVar17[1] = 0;
      *puVar17 = &PTR_LAB_143f59470;
      *(undefined4 *)(puVar17 + 2) = 3;
      puVar17[3] = puVar16;
      *(undefined4 *)(puVar17 + 4) = 0;
      *(undefined1 *)((longlong)puVar17 + 0x24) = 0;
    }
  }
  return;
}



// FUNCTION 141b74650 ShouldCompilePermutation body=85 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8 GPUFFT::TGSComplexTransformCS<2>::ShouldCompilePermutation(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  iVar1 = FUN_1419ef5f0(uVar2);
  if (2 < iVar1) {
    if (((uVar2 < 0x1c) && ((0x8c51800U >> (uVar2 & 0x1f) & 1) != 0)) &&
       (uVar2 = RHIGetShaderLanguageVersion(uVar2), uVar2 < 2)) {
      return 0;
    }
    if (*param_1 != 0xc) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b746b0 FUN_141b746b0 body=144 status=ok
// SIG undefined FUN_141b746b0(void)

ulonglong FUN_141b746b0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar4 = FUN_1419ef5f0(uVar1);
  if ((int)uVar4 < 3) goto LAB_141b7472e;
  if ((0x1e < uVar1) || ((0x40000015U >> (uVar1 & 0x1f) & 1) == 0)) {
    if ((uVar1 < 0x1c) && ((0x8c51800U >> (uVar1 & 0x1f) & 1) != 0)) {
      iVar2 = FUN_1419ef5f0(uVar1);
      if (2 < iVar2) {
        uVar3 = RHIGetShaderLanguageVersion(uVar1);
        if (1 < uVar3) goto LAB_141b74710;
      }
    }
    uVar4 = (ulonglong)(uVar1 - 0x14);
    if ((uVar1 - 0x14 & 0xfffffff7) != 0) goto LAB_141b7472e;
  }
LAB_141b74710:
  uVar1 = *param_1;
  uVar4 = (ulonglong)uVar1;
  if ((0x1b < uVar1) || ((0x8c51800U >> (uVar1 & 0x1f) & 1) == 0)) {
    return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
LAB_141b7472e:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 141b74740 FUN_141b74740 body=52 status=ok
// SIG undefined FUN_141b74740(void)

undefined8 FUN_141b74740(undefined4 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  if (cVar1 != '\0') {
    iVar2 = FUN_1419ef5f0(param_1);
    if (1 < iVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b74780 FUN_141b74780 body=56 status=ok
// SIG undefined FUN_141b74780(void)

undefined8 FUN_141b74780(int param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  if (cVar1 != '\0') {
    iVar2 = FUN_1419ef5f0(param_1);
    if ((2 < iVar2) && (param_1 == 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141b747c0 StartUpdateCachePrimitivesTask body=217 status=ok
// SIG undefined StartUpdateCachePrimitivesTask(void)

void FIndirectLightingCache::StartUpdateCachePrimitivesTask
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
               longlong *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_28 [32];
  
  plVar8 = (longlong *)TGraphTask<FUpdateCachePrimitivesTask>::CreateTask(local_28,0,0xff);
  plVar7 = param_5;
  lVar3 = *plVar8;
  *(undefined8 *)(lVar3 + 0x18) = param_2;
  *(undefined8 *)(lVar3 + 0x10) = param_1;
  *(undefined8 *)(lVar3 + 0x20) = param_3;
  *(undefined1 *)(lVar3 + 0x38) = param_4;
  *(longlong **)(lVar3 + 0x28) = param_5 + 1;
  *(longlong **)(lVar3 + 0x30) = param_5 + 0xb;
  lVar3 = *plVar8;
  lVar6 = plVar8[2];
  lVar4 = plVar8[1];
  lVar5 = *(longlong *)(lVar3 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  param_5 = (longlong *)lVar5;
  FUN_141b73430(lVar3,lVar4,(int)lVar6,1);
  if ((longlong **)plVar7 == &param_5) {
    if (lVar5 == 0) {
      return;
    }
    LOCK();
    piVar1 = (int *)(lVar5 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    lVar3 = (longlong)param_5;
  }
  else {
    lVar3 = *plVar7;
    *plVar7 = lVar5;
    if (lVar3 == 0) {
      return;
    }
    LOCK();
    piVar1 = (int *)(lVar3 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar2 == 1) {
    FGraphEvent::Recycle(lVar3);
  }
  return;
}



// FUNCTION 141b748a0 SwapContents body=168 status=ok
// SIG undefined SwapContents(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void GPUFFT::SwapContents(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [24];
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FSceneRenderTargetItem::FSceneRenderTargetItem(local_68);
  FSceneRenderTargetItem::operator=(param_2,param_1);
  FSceneRenderTargetItem::operator=(param_1,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_20);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_28);
  FUN_141a82840(local_38);
  FUN_141a82770(local_50);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_58);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_60);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_68);
  return;
}



// FUNCTION 141b74950 FUN_141b74950 body=981 status=ok
// SIG undefined FUN_141b74950(void)

void FUN_141b74950(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  double dVar8;
  float fVar9;
  LARGE_INTEGER local_res8;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x38);
      uVar3 = FUN_141d4fac0(*(undefined8 *)(*(longlong *)(param_1 + 8) + lVar6 * 8),param_2);
      *(undefined1 *)(lVar6 + lVar2) = uVar3;
      if ((*(char *)(lVar6 + *(longlong *)(param_1 + 0x38)) != '\0') &&
         (*(int *)(param_1 + 0x54) == 0)) {
        lVar2 = *(longlong *)(param_1 + 0x18);
        uVar7 = FLatentGPUTimer::GetTimeMS(*(undefined8 *)(*(longlong *)(param_1 + 8) + lVar6 * 8));
        *(undefined4 *)(lVar2 + lVar6 * 4) = uVar7;
        if (*(char *)(param_1 + 0x50) == '\0') {
          fVar9 = 1.0;
        }
        else {
          fVar9 = 0.05;
        }
        *(float *)(*(longlong *)(param_1 + 0x28) + lVar6 * 4) =
             fVar9 * *(float *)(*(longlong *)(param_1 + 0x18) + lVar6 * 4) +
             (1.0 - fVar9) * *(float *)(*(longlong *)(param_1 + 0x28) + lVar6 * 4);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x54) < 1) {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  }
  if (param_3 != (longlong *)0x0) {
    *(undefined4 *)*param_3 = **(undefined4 **)(param_1 + 0x18);
    *(undefined4 *)param_3[2] = **(undefined4 **)(param_1 + 0x28);
    *(undefined1 *)param_3[4] = **(undefined1 **)(param_1 + 0x38);
    *(undefined4 *)(*param_3 + 4) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4);
    *(undefined4 *)(param_3[2] + 4) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 4);
    *(undefined1 *)(param_3[4] + 1) = *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 1);
    *(undefined4 *)(*param_3 + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8);
    *(undefined4 *)(param_3[2] + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 8);
    *(undefined1 *)(param_3[4] + 2) = *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 2);
    *(undefined4 *)(*param_3 + 0xc) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xc);
    *(undefined4 *)(param_3[2] + 0xc) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc);
    *(undefined1 *)(param_3[4] + 3) = *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 3);
    *(undefined4 *)(*param_3 + 0x10) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    *(undefined4 *)(param_3[2] + 0x10) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10);
    *(undefined1 *)(param_3[4] + 4) = *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 4);
    *(undefined4 *)(*param_3 + 0x14) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x14);
    *(undefined4 *)(param_3[2] + 0x14) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14);
    *(undefined1 *)(param_3[4] + 5) = *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 5);
    *(undefined4 *)(*param_3 + 0x18) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x18);
    *(undefined4 *)(param_3[2] + 0x18) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x18);
    *(undefined1 *)(param_3[4] + 6) = *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 6);
    if (((char)param_3[7] != '\0') && ((char)param_3[0xb] == '\0')) {
      *(undefined1 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 5;
      *(undefined1 *)(param_3 + 0xb) = 1;
    }
    FUN_142490f40(param_3);
    if ((*(char *)(param_1 + 0x50) != '\0') && ((char)param_3[7] == '\0')) {
      iVar5 = *(int *)(DAT_146a18390 + 4);
      if (iVar5 == 0) {
        *(undefined4 *)((longlong)param_3 + 0xec) = *(undefined4 *)(DAT_146a183c0 + 4);
      }
      else {
        fVar9 = *(float *)(DAT_146a183a8 + 4);
        if (((*(char *)(*(longlong *)(param_1 + 0x38) + 6) != '\0') &&
            (fVar1 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x18), fVar1 <= 500.0)) &&
           (0.0 <= fVar1)) {
          QueryPerformanceCounter(&local_res8);
          if (fVar1 - fVar9 <= 1.0) {
            dVar8 = 0.5;
          }
          else {
            dVar8 = 0.1;
          }
          if (dVar8 < ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
                      *(double *)(param_1 + 0x48)) {
            if (fVar1 <= fVar9) {
              if (fVar9 <= fVar1 - 0.15) {
                return;
              }
              iVar4 = 1;
            }
            else {
              iVar4 = -1;
              QueryPerformanceCounter(&local_res8);
              *(double *)(param_1 + 0x48) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0
              ;
            }
            iVar4 = *(int *)((longlong)param_3 + 0xec) + iVar4;
            if (iVar4 < 0x19) {
              iVar4 = 0x18;
            }
            *(int *)((longlong)param_3 + 0xec) = iVar4;
            if (iVar5 == 2) {
              if ((int)param_3[0x1e] <= iVar4) {
                iVar4 = (int)param_3[0x1e];
              }
              *(int *)((longlong)param_3 + 0xec) = iVar4;
            }
            QueryPerformanceCounter(&local_res8);
            *(double *)(param_1 + 0x48) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141b74d30 TrimOverlappingAxis body=533 status=ok
// SIG undefined TrimOverlappingAxis(void)

void TrimOverlappingAxis(int param_1,float param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  
  iVar2 = param_1 + 2;
  iVar4 = (param_1 + 1) % 3;
  iVar2 = iVar2 + (iVar2 / 3 + (iVar2 >> 0x1f) +
                  (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3;
  pfVar1 = param_4 + 3;
  if (iVar4 == 0) {
    fVar5 = param_3[3];
    pfVar3 = pfVar1;
  }
  else if (iVar4 == 1) {
    fVar5 = param_3[4];
    pfVar3 = param_4 + 4;
  }
  else {
    fVar5 = param_3[5];
    pfVar3 = param_4 + 5;
  }
  if (fVar5 < *pfVar3) {
    return;
  }
  if (iVar4 == 0) {
    fVar5 = *param_3;
    pfVar3 = param_4;
  }
  else if (iVar4 == 1) {
    fVar5 = param_3[1];
    pfVar3 = param_4 + 1;
  }
  else {
    fVar5 = param_3[2];
    pfVar3 = param_4 + 2;
  }
  if (*pfVar3 <= fVar5 && fVar5 != *pfVar3) {
    return;
  }
  if (iVar2 == 0) {
    fVar5 = param_3[3];
    pfVar3 = pfVar1;
  }
  else if (iVar2 == 1) {
    fVar5 = param_3[4];
    pfVar3 = param_4 + 4;
  }
  else {
    fVar5 = param_3[5];
    pfVar3 = param_4 + 5;
  }
  if (fVar5 < *pfVar3) {
    return;
  }
  if (iVar2 == 0) {
    fVar5 = *param_3;
    pfVar3 = param_4;
  }
  else if (iVar2 == 1) {
    fVar5 = param_3[1];
    pfVar3 = param_4 + 1;
  }
  else {
    fVar5 = param_3[2];
    pfVar3 = param_4 + 2;
  }
  if (*pfVar3 <= fVar5 && fVar5 != *pfVar3) {
    return;
  }
  if (param_1 == 0) {
    fVar5 = *param_3;
    pfVar3 = param_4;
  }
  else if (param_1 == 1) {
    fVar5 = param_3[1];
    pfVar3 = param_4 + 1;
  }
  else {
    fVar5 = param_3[2];
    pfVar3 = param_4 + 2;
  }
  if (fVar5 < *pfVar3 || fVar5 == *pfVar3) {
    if (param_1 == 0) {
      fVar5 = param_3[3];
      pfVar3 = param_4;
    }
    else if (param_1 == 1) {
      fVar5 = param_3[4];
      pfVar3 = param_4 + 1;
    }
    else {
      fVar5 = param_3[5];
      pfVar3 = param_4 + 2;
    }
    if (*pfVar3 <= fVar5) {
      if (param_1 == 0) {
        fVar5 = param_3[3];
        pfVar3 = param_4;
      }
      else if (param_1 == 1) {
        fVar5 = param_3[4];
        pfVar3 = param_4 + 1;
      }
      else {
        fVar5 = param_3[5];
        pfVar3 = param_4 + 2;
      }
      goto LAB_141b74ef5;
    }
  }
  if (param_1 == 0) {
    fVar5 = *param_3;
    pfVar3 = param_4 + 3;
  }
  else if (param_1 == 1) {
    fVar5 = param_3[1];
    pfVar3 = param_4 + 4;
  }
  else {
    fVar5 = param_3[2];
    pfVar3 = param_4 + 5;
  }
LAB_141b74ef5:
  *pfVar3 = fVar5;
  pfVar3 = param_4;
  if (param_1 != 0) {
    if (param_1 == 1) {
      pfVar1 = param_4 + 4;
      pfVar3 = param_4 + 1;
    }
    else {
      pfVar1 = param_4 + 5;
      pfVar3 = param_4 + 2;
    }
  }
  fVar5 = *pfVar1 - *pfVar3;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  param_4[(longlong)param_1 + 7] = (float)(int)(fVar5 / param_2 + 0.5);
  return;
}



// FUNCTION 141b74f50 FUN_141b74f50 body=407 status=ok
// SIG undefined FUN_141b74f50(void)

void FUN_141b74f50(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  local_res8 = 0;
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    *puVar5 = &PTR_LAB_144d91e40;
    puVar5[2] = uVar3;
    puVar5[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  local_res8 = **(undefined8 **)(param_3 + 0x340);
  puVar4 = puVar5 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *puVar5 = local_res8;
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 6;
  if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 6;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar4;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_144d91e60;
  *(undefined4 *)(puVar6 + 2) = 1;
  puVar6[3] = puVar5;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 3;
  puVar6[5] = uVar3;
  return;
}



// FUNCTION 141b750f0 FUN_141b750f0 body=3637 status=ok
// SIG undefined FUN_141b750f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b750f0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_248 [32];
  float *local_228;
  float *local_220;
  undefined8 *local_218;
  undefined8 *local_210;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 local_1f8 [4];
  undefined8 local_1e8;
  float local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  size_t local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  iVar3 = param_4[3];
  iVar3 = iVar3 * iVar3 * iVar3;
  local_208 = param_2;
  _guard_xfg_dispatch_icall_nop(&local_198,0,0x90);
  _guard_xfg_dispatch_icall_nop(&local_108,0,0x90);
  local_218 = &local_1e8;
  local_220 = &local_108;
  local_1f8[0] = 0x3f800000;
  local_228 = &local_198;
  local_1e8 = 0;
  local_1e0 = 1.0;
  FUN_141b66740(param_1,param_2,param_4,local_1f8);
  iVar2 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 4) {
    iVar2 = DAT_1464c9c14;
  }
  if (((iVar2 < 2) || (DAT_1464c9c1a == '\0')) ||
     (*(char *)(*(longlong *)(param_4 + 0xc) + 0x261) != '\0')) {
    if ((DAT_146a1c42c != 0) && (param_3 != 0)) {
      local_208 = *(undefined8 *)(param_4 + 4);
      uStack_200 = param_4[6];
      fVar5 = 10.0;
      local_1b0 = 0;
      uStack_1a8 = 0x3f800000;
      uStack_1a4 = 0x3f800000;
      if (1.0 < *(float *)(param_3 + 0x3cc) || *(float *)(param_3 + 0x3cc) == 1.0) {
        fVar5 = *(float *)(param_3 + 0x3a4);
        if (*(float *)(param_3 + 0x390) <= *(float *)(param_3 + 0x3a4)) {
          fVar5 = *(float *)(param_3 + 0x390);
        }
        fVar5 = 10.0 / fVar5;
      }
      local_228 = (float *)CONCAT44(local_228._4_4_,0xffffffff);
      FUN_1422e3300(param_3 + 0x1e40,&local_208,fVar5,&local_1b0);
    }
  }
  else {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar1 + 0x38) < DAT_146a25030) {
      _Init_thread_header(&DAT_146a25030);
      if (DAT_146a25030 == -1) {
        atexit((_func_5014 *)&LAB_143e8b090);
        _Init_thread_footer(&DAT_146a25030);
      }
    }
    iVar2 = 0;
    if ((DAT_146a2502c < iVar3) && (DAT_146a25028 = 0, DAT_146a2502c != iVar3)) {
      TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146a25020);
      iVar2 = DAT_146a25028;
    }
    DAT_146a25028 = iVar3 + iVar2;
    if (DAT_146a2502c < DAT_146a25028) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146a25020);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(DAT_146a25020 + (longlong)iVar2 * 4),0,(longlong)iVar3 * 4);
    if (*(int *)(lVar1 + 0x38) < DAT_146a25048) {
      _Init_thread_header(&DAT_146a25048);
      if (DAT_146a25048 == -1) {
        atexit((_func_5014 *)&LAB_143e8b050);
        _Init_thread_footer(&DAT_146a25048);
      }
    }
    if (*(int *)(lVar1 + 0x38) < DAT_146a25060) {
      _Init_thread_header(&DAT_146a25060);
      if (DAT_146a25060 == -1) {
        atexit((_func_5014 *)&LAB_143e8b070);
        _Init_thread_footer(&DAT_146a25060);
      }
    }
    iVar2 = 0;
    if ((DAT_146a25044 < iVar3) && (DAT_146a25040 = 0, iVar3 != DAT_146a25044)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(&DAT_146a25038,iVar3);
      iVar2 = DAT_146a25040;
    }
    DAT_146a25040 = iVar3 + iVar2;
    if (DAT_146a25044 < DAT_146a25040) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_146a25038,iVar2);
    }
    local_1b0 = (longlong)iVar3 * 0x30;
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 * 0x30 + DAT_146a25038),0,local_1b0);
    bVar4 = iVar3 - DAT_146a2505c != 0;
    iVar2 = 0;
    if ((bVar4 && DAT_146a2505c <= iVar3) && (DAT_146a25058 = 0, bVar4)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(&DAT_146a25050);
      iVar2 = DAT_146a25058;
    }
    DAT_146a25058 = iVar3 + iVar2;
    if (DAT_146a2505c < DAT_146a25058) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_146a25050);
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 * 0x30 + DAT_146a25050),0,local_1b0);
    local_220 = (float *)&DAT_146a25050;
    local_228 = (float *)&DAT_146a25038;
    FUN_141b66150(param_1,local_208,param_4,&DAT_146a25020);
    if (*(int *)(lVar1 + 0x38) < DAT_146a25078) {
      _Init_thread_header(&DAT_146a25078);
      if (DAT_146a25078 == -1) {
        atexit((_func_5014 *)&LAB_143e8bc40);
        _Init_thread_footer(&DAT_146a25078);
      }
    }
    if (*(int *)(lVar1 + 0x38) < DAT_146a25090) {
      _Init_thread_header(&DAT_146a25090);
      if (DAT_146a25090 == -1) {
        atexit((_func_5014 *)&LAB_143e8bc80);
        _Init_thread_footer(&DAT_146a25090);
      }
    }
    if (*(int *)(lVar1 + 0x38) < DAT_146a250a8) {
      _Init_thread_header(&DAT_146a250a8);
      if (DAT_146a250a8 == -1) {
        atexit((_func_5014 *)&LAB_143e8bcc0);
        _Init_thread_footer(&DAT_146a250a8);
      }
    }
    DAT_146a25070 = 0;
    if (iVar3 - DAT_146a25074 != 0 && DAT_146a25074 <= iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146a25068,iVar3);
    }
    DAT_146a25088 = 0;
    if (DAT_146a2508c < iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146a25080,iVar3);
    }
    DAT_146a250a0 = 0;
    if (DAT_146a250a4 < iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146a25098,iVar3);
    }
    DAT_146a25070 = iVar3 + DAT_146a25070;
    if (DAT_146a25074 < DAT_146a25070) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146a25068);
    }
    DAT_146a25088 = iVar3 + DAT_146a25088;
    if (DAT_146a2508c < DAT_146a25088) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146a25080);
    }
    DAT_146a250a0 = iVar3 + DAT_146a250a0;
    if (DAT_146a250a4 < DAT_146a250a0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146a25098);
    }
    if (*(int *)(lVar1 + 0x38) < DAT_146a250c0) {
      _Init_thread_header(&DAT_146a250c0);
      if (DAT_146a250c0 == -1) {
        atexit((_func_5014 *)&LAB_143e8bc60);
        _Init_thread_footer(&DAT_146a250c0);
      }
    }
    if (*(int *)(lVar1 + 0x38) < DAT_146a250d8) {
      _Init_thread_header(&DAT_146a250d8);
      if (DAT_146a250d8 == -1) {
        atexit((_func_5014 *)&LAB_143e8bca0);
        _Init_thread_footer(&DAT_146a250d8);
      }
    }
    if (*(int *)(lVar1 + 0x38) < DAT_146a250f0) {
      _Init_thread_header(&DAT_146a250f0);
      if (DAT_146a250f0 == -1) {
        atexit((_func_5014 *)&LAB_143e8bce0);
        _Init_thread_footer(&DAT_146a250f0);
      }
    }
    DAT_146a250b8 = 0;
    if (DAT_146a250bc < iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146a250b0,iVar3);
    }
    DAT_146a250d0 = 0;
    if (DAT_146a250d4 < iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146a250c8,iVar3);
    }
    DAT_146a250e8 = 0;
    if (DAT_146a250ec < iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146a250e0,iVar3);
    }
    DAT_146a250b8 = iVar3 + DAT_146a250b8;
    if (DAT_146a250bc < DAT_146a250b8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146a250b0);
    }
    DAT_146a250d0 = iVar3 + DAT_146a250d0;
    if (DAT_146a250d4 < DAT_146a250d0) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146a250c8);
    }
    DAT_146a250e8 = iVar3 + DAT_146a250e8;
    if (DAT_146a250ec < DAT_146a250e8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146a250e0);
    }
    iVar2 = DAT_1464ca354;
    local_210 = &DAT_146a25098;
    local_218 = &DAT_146a25080;
    local_220 = (float *)&DAT_146a25068;
    local_228 = (float *)&DAT_146a25038;
    FUN_141b63190(param_1,param_3,param_4,&DAT_146a25020);
    local_210 = &DAT_146a250e0;
    local_218 = &DAT_146a250c8;
    local_220 = (float *)&DAT_146a250b0;
    local_228 = (float *)&DAT_146a25050;
    FUN_141b63190(param_1,param_3,param_4,&DAT_146a25020);
    local_1c0 = param_4[3];
    local_1d8 = *param_4;
    local_1d4 = param_4[1];
    local_1d0 = param_4[2];
    local_210 = (undefined8 *)DAT_146a25068;
    local_228 = (float *)&local_1d8;
    local_1cc = 0;
    local_1c4 = 0;
    local_1bc = local_1c0;
    local_1b8 = local_1c0;
    local_218._0_4_ = local_1c0 * local_1c0 * iVar2;
    local_220._0_4_ = local_1c0 * iVar2;
    (**(code **)(*DAT_146ab6358 + 0x5b8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x10),0)
    ;
    iVar3 = param_4[3];
    local_210 = (undefined8 *)DAT_146a25080;
    local_228 = (float *)&local_1d8;
    local_220._0_4_ = iVar3 * iVar2;
    local_218._0_4_ = iVar3 * iVar3 * iVar2;
    (**(code **)(*DAT_146ab6358 + 0x5b8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10),0)
    ;
    local_220._0_4_ = param_4[3];
    local_218._0_4_ = (int)local_220 * (int)local_220 * iVar2;
    local_220._0_4_ = (int)local_220 * iVar2;
    local_210 = (undefined8 *)DAT_146a25098;
    local_228 = (float *)&local_1d8;
    (**(code **)(*DAT_146ab6358 + 0x5b8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10),0)
    ;
    iVar3 = param_4[3];
    local_210 = (undefined8 *)DAT_146a250b0;
    local_228 = (float *)&local_1d8;
    local_220._0_4_ = iVar3 * iVar2;
    local_218._0_4_ = iVar3 * iVar3 * iVar2;
    (**(code **)(*DAT_146ab6358 + 0x5b8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x10),0)
    ;
    iVar3 = param_4[3];
    local_210 = (undefined8 *)DAT_146a250c8;
    local_228 = (float *)&local_1d8;
    local_220._0_4_ = iVar3 * iVar2;
    local_218._0_4_ = iVar3 * iVar3 * iVar2;
    (**(code **)(*DAT_146ab6358 + 0x5b8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x10),0)
    ;
    iVar3 = param_4[3];
    local_210 = (undefined8 *)DAT_146a250e0;
    local_228 = (float *)&local_1d8;
    local_218 = (undefined8 *)CONCAT44(local_218._4_4_,iVar3 * iVar3 * iVar2);
    local_220 = (float *)CONCAT44(local_220._4_4_,iVar3 * iVar2);
    (**(code **)(*DAT_146ab6358 + 0x5b8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10),0)
    ;
  }
  fVar5 = (float)param_4[9];
  lVar1 = *(longlong *)(param_4 + 0xc);
  fVar6 = (float)param_4[6];
  *(ulonglong *)(lVar1 + 0x40) =
       CONCAT44((float)param_4[8] * 0.5 + (float)param_4[5],
                (float)param_4[7] * 0.5 + (float)param_4[4]);
  *(float *)(lVar1 + 0x48) = fVar5 * 0.5 + fVar6;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0x50) = local_198 * 0.31830987;
  *(float *)(lVar1 + 0x54) = fStack_194 * 0.31830987;
  *(float *)(lVar1 + 0x58) = fStack_190 * 0.31830987;
  *(float *)(lVar1 + 0x5c) = fStack_18c * 0.31830987;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0x60) = local_168 * 0.31830987;
  *(float *)(lVar1 + 100) = fStack_164 * 0.31830987;
  *(float *)(lVar1 + 0x68) = fStack_160 * 0.31830987;
  *(float *)(lVar1 + 0x6c) = fStack_15c * 0.31830987;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0x70) = local_138 * 0.31830987;
  *(float *)(lVar1 + 0x74) = fStack_134 * 0.31830987;
  *(float *)(lVar1 + 0x78) = fStack_130 * 0.31830987;
  *(float *)(lVar1 + 0x7c) = fStack_12c * 0.31830987;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0x80) = local_188 * 0.31830987;
  *(float *)(lVar1 + 0x84) = fStack_184 * 0.31830987;
  *(float *)(lVar1 + 0x88) = fStack_180 * 0.31830987;
  *(float *)(lVar1 + 0x8c) = fStack_17c * 0.31830987;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0x90) = local_158 * 0.31830987;
  *(float *)(lVar1 + 0x94) = fStack_154 * 0.31830987;
  *(float *)(lVar1 + 0x98) = fStack_150 * 0.31830987;
  *(float *)(lVar1 + 0x9c) = fStack_14c * 0.31830987;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0xa0) = local_128 * 0.31830987;
  *(float *)(lVar1 + 0xa4) = fStack_124 * 0.31830987;
  *(float *)(lVar1 + 0xa8) = fStack_120 * 0.31830987;
  *(float *)(lVar1 + 0xac) = fStack_11c * 0.31830987;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0xb0) = local_178 * 0.31830987;
  *(float *)(lVar1 + 0xb4) = local_148 * 0.31830987;
  *(float *)(lVar1 + 0xb8) = local_118 * 0.31830987;
  *(undefined4 *)(lVar1 + 0xbc) = 0;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0xc0) = local_108 * 0.31830987;
  *(float *)(lVar1 + 0xc4) = fStack_104 * 0.31830987;
  *(float *)(lVar1 + 200) = fStack_100 * 0.31830987;
  *(float *)(lVar1 + 0xcc) = fStack_fc * 0.31830987;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0xd0) = local_d8 * 0.31830987;
  *(float *)(lVar1 + 0xd4) = fStack_d4 * 0.31830987;
  *(float *)(lVar1 + 0xd8) = fStack_d0 * 0.31830987;
  *(float *)(lVar1 + 0xdc) = fStack_cc * 0.31830987;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0xe0) = local_a8 * 0.31830987;
  *(float *)(lVar1 + 0xe4) = fStack_a4 * 0.31830987;
  *(float *)(lVar1 + 0xe8) = fStack_a0 * 0.31830987;
  *(float *)(lVar1 + 0xec) = fStack_9c * 0.31830987;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0xf0) = local_f8 * 0.31830987;
  *(float *)(lVar1 + 0xf4) = fStack_f4 * 0.31830987;
  *(float *)(lVar1 + 0xf8) = fStack_f0 * 0.31830987;
  *(float *)(lVar1 + 0xfc) = fStack_ec * 0.31830987;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0x100) = local_c8 * 0.31830987;
  *(float *)(lVar1 + 0x104) = fStack_c4 * 0.31830987;
  *(float *)(lVar1 + 0x108) = fStack_c0 * 0.31830987;
  *(float *)(lVar1 + 0x10c) = fStack_bc * 0.31830987;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0x110) = local_98 * 0.31830987;
  *(float *)(lVar1 + 0x114) = fStack_94 * 0.31830987;
  *(float *)(lVar1 + 0x118) = fStack_90 * 0.31830987;
  *(float *)(lVar1 + 0x11c) = fStack_8c * 0.31830987;
  lVar1 = *(longlong *)(param_4 + 0xc);
  *(float *)(lVar1 + 0x120) = local_e8 * 0.31830987;
  *(float *)(lVar1 + 0x124) = local_b8 * 0.31830987;
  *(float *)(lVar1 + 0x128) = local_88 * 0.31830987;
  *(undefined4 *)(lVar1 + 300) = 0;
  *(undefined4 *)(*(longlong *)(param_4 + 0xc) + 0x130) = local_1f8[0];
  lVar1 = *(longlong *)(param_4 + 0xc);
  fVar6 = SQRT(local_1e8._4_4_ * local_1e8._4_4_ + (float)local_1e8 * (float)local_1e8 +
               local_1e0 * local_1e0);
  fVar5 = fVar6;
  if (fVar6 <= 0.0001) {
    fVar5 = 0.0001;
  }
  fVar5 = 1.0 / fVar5;
  *(float *)(lVar1 + 0x140) = (float)local_1e8 * fVar5;
  *(float *)(lVar1 + 0x144) = local_1e8._4_4_ * fVar5;
  *(float *)(lVar1 + 0x148) = local_1e0 * fVar5;
  *(float *)(lVar1 + 0x14c) = fVar6;
  lVar1 = *(longlong *)(param_4 + 0xc);
  if (*(char *)(lVar1 + 0x260) == '\0') {
    *(undefined8 *)(lVar1 + 0x150) = *(undefined8 *)(lVar1 + 0x40);
    *(undefined4 *)(lVar1 + 0x158) = *(undefined4 *)(lVar1 + 0x48);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x160) = *(undefined8 *)(lVar1 + 0x50);
    *(undefined8 *)(lVar1 + 0x168) = *(undefined8 *)(lVar1 + 0x58);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 400) = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0x198) = *(undefined8 *)(lVar1 + 0x88);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x170) = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0x178) = *(undefined8 *)(lVar1 + 0x68);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x1a0) = *(undefined8 *)(lVar1 + 0x90);
    *(undefined8 *)(lVar1 + 0x1a8) = *(undefined8 *)(lVar1 + 0x98);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x180) = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0x188) = *(undefined8 *)(lVar1 + 0x78);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x1b0) = *(undefined8 *)(lVar1 + 0xa0);
    *(undefined8 *)(lVar1 + 0x1b8) = *(undefined8 *)(lVar1 + 0xa8);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x1c0) = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(lVar1 + 0x1c8) = *(undefined8 *)(lVar1 + 0xb8);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x1d0) = *(undefined8 *)(lVar1 + 0xc0);
    *(undefined8 *)(lVar1 + 0x1d8) = *(undefined8 *)(lVar1 + 200);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x200) = *(undefined8 *)(lVar1 + 0xf0);
    *(undefined8 *)(lVar1 + 0x208) = *(undefined8 *)(lVar1 + 0xf8);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x1e0) = *(undefined8 *)(lVar1 + 0xd0);
    *(undefined8 *)(lVar1 + 0x1e8) = *(undefined8 *)(lVar1 + 0xd8);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x210) = *(undefined8 *)(lVar1 + 0x100);
    *(undefined8 *)(lVar1 + 0x218) = *(undefined8 *)(lVar1 + 0x108);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x1f0) = *(undefined8 *)(lVar1 + 0xe0);
    *(undefined8 *)(lVar1 + 0x1f8) = *(undefined8 *)(lVar1 + 0xe8);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x220) = *(undefined8 *)(lVar1 + 0x110);
    *(undefined8 *)(lVar1 + 0x228) = *(undefined8 *)(lVar1 + 0x118);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x230) = *(undefined8 *)(lVar1 + 0x120);
    *(undefined8 *)(lVar1 + 0x238) = *(undefined8 *)(lVar1 + 0x128);
    *(undefined4 *)(*(longlong *)(param_4 + 0xc) + 0x240) =
         *(undefined4 *)(*(longlong *)(param_4 + 0xc) + 0x130);
    lVar1 = *(longlong *)(param_4 + 0xc);
    *(undefined8 *)(lVar1 + 0x250) = *(undefined8 *)(lVar1 + 0x140);
    *(undefined8 *)(lVar1 + 600) = *(undefined8 *)(lVar1 + 0x148);
    *(undefined1 *)(*(longlong *)(param_4 + 0xc) + 0x260) = 1;
  }
  *(undefined1 *)(param_4 + 10) = 1;
  return;
}



// FUNCTION 141b75f30 UpdateCache body=229 status=ok
// SIG undefined UpdateCache(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FIndirectLightingCache::UpdateCache(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_88 [6];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_90 = local_88;
  local_88[2] = 0;
  local_98 = local_88 + 2;
  local_88[3] = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_88[0] = 0;
  local_38 = 0;
  local_30 = 0;
  local_88[1] = 0;
  FUN_141b767a0();
  local_98 = local_88;
  FUN_141b642d0(param_1,param_2,param_3,local_88 + 2);
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  local_30 = 0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_88 + 2);
  return;
}



// FUNCTION 141b76020 FUN_141b76020 body=1152 status=ok
// SIG undefined FUN_141b76020(void)

undefined8
FUN_141b76020(longlong param_1,undefined8 param_2,int param_3,char param_4,undefined1 param_5,
             longlong *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  int *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined8 local_38;
  int local_30;
  longlong local_28;
  
  plVar2 = param_6;
  lVar4 = *param_6;
  if (((((lVar4 == 0) || (*(int *)(lVar4 + 0x30) < 0)) || (*(int *)(lVar4 + 0x34) < 0)) ||
      ((*(int *)(lVar4 + 0x38) < 0 || (*(int *)(lVar4 + 0x3c) < 1)))) ||
     ((*(int *)(lVar4 + 0x3c) != param_3 || (*(char *)(lVar4 + 0x261) != param_4)))) {
    FMemory::operator_delete(lVar4,0x270);
    lVar4 = FUN_141b60940(param_1,param_3,param_2,param_4,param_5);
    *plVar2 = lVar4;
    if ((((-1 < *(int *)(lVar4 + 0x30)) && (-1 < *(int *)(lVar4 + 0x34))) &&
        (-1 < *(int *)(lVar4 + 0x38))) && (0 < *(int *)(lVar4 + 0x3c))) {
      TSet<TTuple<FIntVector,FIndirectLightingCacheBlock>,TDefaultMapHashableKeyFuncs<FIntVector,FIndirectLightingCacheBlock,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x68,&param_6,lVar4 + 0x30);
      if ((int)param_6 == -1) {
        lVar4 = 0;
      }
      else {
        lVar4 = (longlong)(int)param_6 * 0x40 + *(longlong *)(param_1 + 0x68);
      }
      local_58 = *(undefined8 *)(lVar4 + 0xc);
      uStack_50 = *(undefined8 *)(lVar4 + 0x14);
      local_48 = *(undefined4 *)(lVar4 + 0x1c);
      iStack_44 = *(undefined4 *)(lVar4 + 0x20);
      iStack_40 = *(undefined4 *)(lVar4 + 0x24);
      iStack_3c = *(undefined4 *)(lVar4 + 0x28);
      local_38 = *(undefined8 *)(lVar4 + 0x2c);
      local_30 = *(undefined4 *)(lVar4 + 0x34);
      local_28 = *plVar2;
      local_a8 = (int *)(local_28 + 0x30);
      local_a0 = &local_58;
      FUN_141b4d4d0(param_7,&param_6,&local_a8,0);
    }
  }
  else {
    local_c0 = *(float *)(lVar4 + 0x38);
    local_c8 = *(undefined8 *)(lVar4 + 0x30);
    if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
      iVar3 = FCrc::MemCrc_DEPRECATED(&local_c8,0xc,0);
      lVar4 = *(longlong *)(param_1 + 0xa8);
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        lVar4 = param_1 + 0xa0;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0xb0) - 1U & (longlong)iVar3) * 4);
      if (iVar3 != -1) {
        do {
          piVar5 = (int *)((longlong)iVar3 * 0x40 + *(longlong *)(param_1 + 0x68));
          if ((((float)*piVar5 == (float)local_c8) && ((float)piVar5[1] == local_c8._4_4_)) &&
             ((float)piVar5[2] == local_c0)) {
            if (iVar3 != -1) goto LAB_141b7613d;
            break;
          }
          iVar3 = piVar5[0xe];
        } while (iVar3 != -1);
      }
    }
    piVar5 = (int *)0x0;
LAB_141b7613d:
    FIndirectLightingCache::CalculateBlockPositionAndSize
              (param_1,param_2,piVar5[6],&local_c8,&local_b8);
    lVar4 = *plVar2;
    if ((((*(char *)(lVar4 + 0x262) != '\0') || (DAT_146a1c430 != 0)) ||
        ((0.0001 < ABS((float)piVar5[7] - (float)local_c8) ||
         ((0.0001 < ABS((float)piVar5[8] - local_c8._4_4_) ||
          (0.0001 < ABS((float)piVar5[9] - local_c0))))))) ||
       ((0.0001 < ABS((float)piVar5[10] - (float)local_b8) ||
        ((0.0001 < ABS((float)piVar5[0xb] - local_b8._4_4_) ||
         (0.0001 < ABS((float)piVar5[0xc] - local_b0))))))) {
      *(undefined8 *)(piVar5 + 7) = local_c8;
      *(undefined8 *)(piVar5 + 10) = local_b8;
      piVar5[0xc] = (int)local_b0;
      piVar5[9] = (int)local_c0;
      lVar4 = *plVar2;
      local_90 = *(undefined4 *)(lVar4 + 0x38);
      local_98 = *(undefined8 *)(lVar4 + 0x30);
      FUN_141b577a0(param_1,&local_98,*(undefined4 *)(lVar4 + 0x3c),&local_c8,&local_b8,&local_78,
                    &local_88,&local_68,&local_a8);
      puVar1 = (undefined8 *)*plVar2;
      local_98 = puVar1[6];
      *puVar1 = local_88;
      *(undefined4 *)(puVar1 + 1) = local_80;
      *(undefined8 *)((longlong)puVar1 + 0xc) = local_78;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_70;
      puVar1[3] = local_68;
      *(undefined4 *)(puVar1 + 4) = local_60;
      *(int **)((longlong)puVar1 + 0x24) = local_a8;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = local_a0._0_4_;
      *(undefined4 *)(puVar1 + 6) = (undefined4)local_98;
      *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(puVar1 + 7);
      *(int *)((longlong)puVar1 + 0x34) = (int)((ulonglong)local_98 >> 0x20);
      *(undefined1 *)((longlong)puVar1 + 0x263) = param_5;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)((longlong)puVar1 + 0x3c);
      *(undefined1 *)((longlong)puVar1 + 0x262) = 0;
      *(char *)((longlong)puVar1 + 0x261) = param_4;
      local_58 = *(undefined8 *)(piVar5 + 3);
      uStack_50 = *(undefined8 *)(piVar5 + 5);
      local_30 = piVar5[0xd];
      local_48 = piVar5[7];
      iStack_44 = piVar5[8];
      iStack_40 = piVar5[9];
      iStack_3c = piVar5[10];
      local_28 = *plVar2;
      local_a0 = &local_58;
      local_38 = *(undefined8 *)(piVar5 + 0xb);
      local_a8 = piVar5 + 3;
      FUN_141b4d4d0(param_7,&param_6,&local_a8,0);
    }
    else {
      fVar8 = *(float *)(lVar4 + 0x154) - *(float *)(lVar4 + 0x44);
      fVar7 = *(float *)(lVar4 + 0x150) - *(float *)(lVar4 + 0x40);
      fVar6 = *(float *)(lVar4 + 0x158) - *(float *)(lVar4 + 0x48);
      if (fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6 <= 1e-05) {
        return 0;
      }
    }
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_8,plVar2);
  }
  return 1;
}



// FUNCTION 141b764a0 FUN_141b764a0 body=766 status=ok
// SIG undefined FUN_141b764a0(void)

void FUN_141b764a0(longlong param_1,longlong *param_2,longlong param_3,char param_4,char param_5,
                  undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  char cVar15;
  undefined1 local_res8 [8];
  undefined8 *local_res18;
  longlong local_48;
  undefined8 **local_40;
  
  lVar2 = *(longlong *)(param_3 + 8);
  plVar1 = (longlong *)(param_1 + 0x158);
  puVar13 = (undefined8 *)0x0;
  if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x18c)) {
    lVar7 = *(longlong *)(param_1 + 0x198);
    if (*(longlong *)(param_1 + 0x198) == 0) {
      lVar7 = param_1 + 400;
    }
    iVar5 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x1a0) - 1U &
                             (longlong)*(int *)(param_3 + 0x10)) * 4);
    if (iVar5 != -1) {
      do {
        puVar11 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x18);
        if (*(int *)(*plVar1 + (longlong)iVar5 * 0x18) == *(int *)(param_3 + 0x10)) {
          if (iVar5 != -1) goto LAB_141b76533;
          break;
        }
        iVar5 = *(int *)(puVar11 + 2);
      } while (iVar5 != -1);
    }
  }
  puVar11 = puVar13;
LAB_141b76533:
  puVar8 = puVar11 + 1;
  if (puVar11 == (undefined8 *)0x0) {
    puVar8 = puVar13;
  }
  puVar11 = puVar13;
  if (puVar8 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)*puVar8;
  }
  if (((*(uint *)(lVar2 + 0x1c) >> 1 & 1) != 0) &&
     (((((param_4 != '\0' && ((*(uint *)(lVar2 + 0x18) >> 0x13 & 1) != 0)) &&
        (puVar11 != (undefined8 *)0x0)) && (*(char *)((longlong)puVar11 + 0x262) != '\0')) ||
      ((*(int *)(lVar2 + 0x10) - 1U < 2 && (*(int *)(lVar2 + 0x74) != 0)))))) {
    iVar5 = *(int *)(param_3 + 0x28);
    if (iVar5 != 0) {
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        plVar9 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar9 = param_2 + 7;
        }
        iVar6 = *(int *)((longlong)plVar9 + ((longlong)(int)param_2[9] - 1U & (longlong)iVar5) * 4);
        if (iVar6 != -1) {
          do {
            puVar8 = (undefined8 *)(*param_2 + (longlong)iVar6 * 0x28);
            if (*(int *)(*param_2 + (longlong)iVar6 * 0x28) == iVar5) {
              if (iVar6 != -1) goto LAB_141b76613;
              break;
            }
            iVar6 = *(int *)(puVar8 + 4);
          } while (iVar6 != -1);
        }
      }
      puVar8 = puVar13;
LAB_141b76613:
      lVar7 = puVar8[1];
      if (((lVar7 != 0) && ((*(byte *)(*(longlong *)(lVar7 + 8) + 0x1e) & 1) != 0)) &&
         (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x18c))) {
        lVar14 = *(longlong *)(param_1 + 0x198);
        if (*(longlong *)(param_1 + 0x198) == 0) {
          lVar14 = param_1 + 400;
        }
        iVar5 = *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x1a0) - 1U &
                                  (longlong)*(int *)(lVar7 + 0x10)) * 4);
        if (iVar5 != -1) {
          lVar14 = *plVar1;
          do {
            lVar12 = (longlong)iVar5;
            if (*(int *)(lVar14 + lVar12 * 0x18) == *(int *)(lVar7 + 0x10)) {
              if (((iVar5 != -1) && (lVar14 = lVar14 + lVar12 * 0x18, lVar14 != 0)) &&
                 (lVar7 = *(longlong *)(lVar14 + 8), lVar7 != 0)) {
                *(longlong *)(param_3 + 0x50) = lVar7;
                goto LAB_141b7677e;
              }
              break;
            }
            iVar5 = *(int *)(lVar14 + 0x10 + lVar12 * 0x18);
          } while (iVar5 != -1);
        }
      }
    }
    if ((param_4 == '\0') || (*(int *)(lVar2 + 0x10) - 1U < 2)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    if (((*(int *)(lVar2 + 0x74) == 1) || (cVar4 != '\0')) || (param_5 == '\0')) {
      cVar15 = '\x01';
    }
    else {
      cVar15 = '\0';
    }
    uVar3 = DAT_1464c1cc4;
    if (cVar15 != '\0') {
      uVar3 = 1;
    }
    local_res18 = puVar11;
    uVar10 = FUN_141d34ac0(param_3,&local_48);
    cVar4 = FUN_141b76020(param_1,uVar10,uVar3,cVar15,cVar4,&local_res18,param_6,param_7);
    *(undefined8 **)(param_3 + 0x50) = local_res18;
    if (puVar11 != local_res18) {
      if (puVar11 != (undefined8 *)0x0) {
        TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
        ::Remove(plVar1,param_3 + 0x10);
      }
      local_40 = &local_res18;
      local_48 = param_3 + 0x10;
      TSet<TTuple<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FIndirectLightingCacheAllocation_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FPrimitiveComponentId_const_&,FIndirectLightingCacheAllocation_*_&&>_>
                (plVar1,local_res8,&local_48,0);
    }
    if (cVar4 != '\0') {
LAB_141b7677e:
      *(undefined1 *)(param_3 + 0xfb) = 1;
    }
  }
  return;
}



// FUNCTION 141b767a0 FUN_141b767a0 body=1299 status=ok
// SIG undefined FUN_141b767a0(void)

void FUN_141b767a0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  longlong lVar14;
  int local_88;
  longlong local_78;
  int local_70;
  uint local_6c;
  uint *local_68;
  uint local_60;
  undefined8 local_5c;
  
  cVar3 = FUN_141b65820();
  if (cVar3 != '\0') {
    if (*(char *)(param_1 + 0x30) == '\0') {
      local_88 = 0;
      if (0 < *(int *)(param_3 + 200)) {
        local_78 = 0;
        do {
          lVar14 = *(longlong *)(param_3 + 0xc0) + local_78;
          local_5c = 0;
          uVar11 = 0;
          local_70 = 0;
          local_6c = 1;
          local_68 = (uint *)(lVar14 + 0x1ac0);
          iVar8 = *(int *)(lVar14 + 0x1ad8);
          iVar5 = 0;
          if (iVar8 != 0) {
            puVar13 = *(uint **)(lVar14 + 0x1ad0);
            if (*(uint **)(lVar14 + 0x1ad0) == (uint *)0x0) {
              puVar13 = local_68;
            }
            uVar9 = *puVar13;
            iVar1 = 0;
            while (uVar9 == 0) {
              uVar11 = uVar11 + 0x20;
              local_70 = iVar1 + 1;
              local_5c = (ulonglong)uVar11 << 0x20;
              if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar1) {
                local_5c = CONCAT44(uVar11,iVar8);
                iVar5 = iVar8;
                goto LAB_141b76a42;
              }
              uVar9 = puVar13[(longlong)iVar1 + 1];
              iVar1 = local_70;
            }
            local_6c = -uVar9 & uVar9;
            iVar5 = 0x1f;
            if (local_6c != 0) {
              for (; local_6c >> iVar5 == 0; iVar5 = iVar5 + -1) {
              }
            }
            if (local_6c == 0) {
              iVar5 = 0x20;
            }
            else {
              iVar5 = 0x1f - iVar5;
            }
            iVar5 = (uVar11 - iVar5) + 0x1f;
            if (iVar8 < iVar5) {
              iVar5 = iVar8;
            }
            uVar2 = (ulonglong)local_5c >> 0x20;
            local_5c = CONCAT44((int)uVar2,iVar5);
            local_70 = iVar1;
          }
LAB_141b76a42:
          uVar11 = 0xffffffff;
          if (iVar5 < iVar8) {
            do {
              uVar9 = local_6c;
              lVar10 = *(longlong *)((longlong)iVar5 * 8 + *(longlong *)(param_2 + 0xfe0));
              cVar3 = *(char *)(lVar10 + 0xfb);
              FUN_141b764a0(param_1,param_2 + 0x1a18,lVar10,param_4,
                            *(byte *)(*(longlong *)(lVar14 + 0x1b30) + 4 + (longlong)iVar5 * 8) & 1,
                            param_5,param_6);
              if ((cVar3 == '\0') && (*(char *)(lVar10 + 0xfb) != '\0')) {
                iVar8 = *(int *)(lVar14 + 0x1c88);
                *(int *)(lVar14 + 0x1c88) = iVar8 + 1;
                if (*(int *)(lVar14 + 0x1c8c) < iVar8 + 1) {
                  FUN_140822430(lVar14 + 0x1c80,iVar8);
                }
                *(longlong *)(*(longlong *)(lVar14 + 0x1c80) + (longlong)iVar8 * 8) = lVar10;
              }
              local_60 = uVar11 & ~uVar9;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
              uVar11 = local_60;
              iVar5 = (int)local_5c;
            } while ((int)local_5c < (int)local_68[6]);
          }
          iVar8 = 0;
          if (0 < *(int *)(lVar14 + 0x30b0)) {
            lVar10 = 0;
            do {
              uVar11 = *(uint *)(*(longlong *)(*(longlong *)(lVar14 + 0x30a8) + lVar10) + 0xe8);
              lVar12 = *(longlong *)(lVar14 + 0x1ad0);
              if (*(longlong *)(lVar14 + 0x1ad0) == 0) {
                lVar12 = lVar14 + 0x1ac0;
              }
              uVar9 = uVar11;
              if ((int)uVar11 < 0) {
                uVar9 = uVar11 + 0x1f;
              }
              if ((*(uint *)(lVar12 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0)
              {
                lVar12 = *(longlong *)(*(longlong *)(param_2 + 0xfe0) + (longlong)(int)uVar11 * 8);
                cVar3 = *(char *)(lVar12 + 0xfb);
                FUN_141b764a0(param_1,param_2 + 0x1a18,lVar12,param_4,1,param_5,param_6);
                if ((cVar3 == '\0') && (*(char *)(lVar12 + 0xfb) != '\0')) {
                  iVar5 = *(int *)(lVar14 + 0x1c88);
                  *(int *)(lVar14 + 0x1c88) = iVar5 + 1;
                  if (*(int *)(lVar14 + 0x1c8c) < iVar5 + 1) {
                    FUN_140822430(lVar14 + 0x1c80,iVar5);
                  }
                  *(longlong *)(*(longlong *)(lVar14 + 0x1c80) + (longlong)iVar5 * 8) = lVar12;
                }
              }
              iVar8 = iVar8 + 1;
              lVar10 = lVar10 + 8;
            } while (iVar8 < *(int *)(lVar14 + 0x30b0));
          }
          local_88 = local_88 + 1;
          local_78 = local_78 + 0x30d0;
        } while (local_88 < *(int *)(param_3 + 200));
      }
    }
    else {
      uVar11 = *(uint *)(param_2 + 0xfe8);
      uVar9 = 0;
      if (uVar11 != 0) {
        do {
          lVar14 = *(longlong *)(*(longlong *)(param_2 + 0xfe0) + (longlong)(int)uVar9 * 8);
          cVar3 = *(char *)(lVar14 + 0xfb);
          FUN_141b764a0(param_1,param_2 + 0x1a18,lVar14,0,1,param_5,param_6);
          if (cVar3 == '\0') {
            lVar10 = 0;
            *(undefined1 *)(lVar14 + 0xfb) = 1;
            if (0 < *(int *)(param_3 + 200)) {
              lVar12 = *(longlong *)(param_3 + 0xc0);
              uVar4 = uVar9;
              if ((int)uVar9 < 0) {
                uVar4 = uVar9 + 0x1f;
              }
              lVar6 = lVar12 + 0x1ac0;
              do {
                lVar7 = *(longlong *)(lVar6 + 0x10);
                if (*(longlong *)(lVar6 + 0x10) == 0) {
                  lVar7 = lVar6;
                }
                if ((*(uint *)(lVar7 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar9 & 0x1f) & 1) != 0)
                {
                  iVar8 = *(int *)(lVar12 + 0x1c88);
                  *(int *)(lVar12 + 0x1c88) = iVar8 + 1;
                  if (*(int *)(lVar12 + 0x1c8c) < iVar8 + 1) {
                    FUN_140822430((longlong *)(lVar12 + 0x1c80),iVar8);
                  }
                  *(longlong *)(*(longlong *)(lVar12 + 0x1c80) + (longlong)iVar8 * 8) = lVar14;
                  break;
                }
                lVar10 = lVar10 + 1;
                lVar12 = lVar12 + 0x30d0;
                lVar6 = lVar6 + 0x30d0;
              } while (lVar10 < *(int *)(param_3 + 200));
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar11);
      }
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 141b76cc0 FUN_141b76cc0 body=7949 status=ok
// SIG undefined FUN_141b76cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b76cc0(longlong param_1,longlong param_2,longlong param_3,float param_4,
                  ulonglong param_5)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  float fVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  void *pvVar18;
  int iVar19;
  float *pfVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_2e8 [32];
  float local_2c8;
  ulonglong local_2c0;
  float *local_2b8;
  float *local_2b0;
  int local_2a8;
  float *local_2a0;
  int local_298;
  float *local_290;
  int local_288;
  longlong local_280;
  longlong local_278;
  ulonglong local_270;
  ulonglong local_268;
  float *local_260;
  uint local_258;
  uint local_254;
  undefined8 local_250;
  int local_248;
  float local_244;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220 [2];
  longlong local_218;
  longlong local_210;
  longlong local_208;
  void *local_200;
  uint local_1f8;
  undefined4 local_1f4;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined *local_178;
  undefined4 local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined *local_158;
  undefined4 local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined *local_108;
  undefined4 local_100;
  undefined *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_270 = param_5;
  if (0 < *(int *)(param_3 + 0x15f0)) {
    local_2c0 = CONCAT44(local_2c0._4_4_,param_4);
    local_2c8 = 5.60519e-45;
    local_280 = param_2;
    local_278 = param_3;
    FUN_141b5cf20(param_1,param_2,param_3,param_5);
    uVar5 = *(undefined8 *)(param_2 + 0x1cc8);
    lVar15 = *(longlong *)(param_2 + 0x1ab8);
    *(undefined8 *)(lVar15 + 0xbc0) = *(undefined8 *)(param_2 + 0x1cc0);
    *(undefined8 *)(lVar15 + 0xbc8) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x1d08);
    *(undefined8 *)(lVar15 + 0xc00) = *(undefined8 *)(param_2 + 0x1d00);
    *(undefined8 *)(lVar15 + 0xc08) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x1cd8);
    *(undefined8 *)(lVar15 + 0xbd0) = *(undefined8 *)(param_2 + 0x1cd0);
    *(undefined8 *)(lVar15 + 0xbd8) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x1d18);
    *(undefined8 *)(lVar15 + 0xc10) = *(undefined8 *)(param_2 + 0x1d10);
    *(undefined8 *)(lVar15 + 0xc18) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x1ce8);
    *(undefined8 *)(lVar15 + 0xbe0) = *(undefined8 *)(param_2 + 0x1ce0);
    *(undefined8 *)(lVar15 + 0xbe8) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x1d28);
    *(undefined8 *)(lVar15 + 0xc20) = *(undefined8 *)(param_2 + 0x1d20);
    *(undefined8 *)(lVar15 + 0xc28) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x1cf8);
    *(undefined8 *)(lVar15 + 0xbf0) = *(undefined8 *)(param_2 + 0x1cf0);
    *(undefined8 *)(lVar15 + 0xbf8) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x1d38);
    *(undefined8 *)(lVar15 + 0xc30) = *(undefined8 *)(param_2 + 0x1d30);
    *(undefined8 *)(lVar15 + 0xc38) = uVar5;
    *(undefined4 *)(lVar15 + 0xc40) = *(undefined4 *)(param_2 + 0x1d60);
    *(float *)(lVar15 + 0xc44) = 1.0 / *(float *)(param_2 + 0x1d60);
    *(undefined4 *)(lVar15 + 0xc48) = *(undefined4 *)(param_2 + 0x1d64);
    lVar9 = *(longlong *)(param_2 + 0x1d40);
    if ((lVar9 == 0) && (lVar9 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar9 == 0)) {
      lVar9 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(lVar15 + 0xe30) = lVar9;
    uVar5 = FUN_141b33a40();
    *(undefined8 *)(lVar15 + 0xe38) = uVar5;
    lVar9 = *(longlong *)(param_2 + 0x1d48);
    if ((lVar9 == 0) && (lVar9 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar9 == 0)) {
      lVar9 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(lVar15 + 0xe40) = lVar9;
    uVar5 = FUN_141b33a40();
    *(undefined8 *)(lVar15 + 0xe48) = uVar5;
    lVar9 = *(longlong *)(param_2 + 0x1d50);
    if ((lVar9 == 0) && (lVar9 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar9 == 0)) {
      lVar9 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(lVar15 + 0xe50) = lVar9;
    uVar5 = FUN_141b33a40();
    *(undefined8 *)(lVar15 + 0xe58) = uVar5;
    lVar9 = *(longlong *)(param_2 + 0x1d58);
    if ((lVar9 == 0) && (lVar9 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar9 == 0)) {
      lVar9 = *(longlong *)(DAT_146ac3e00 + 0x30);
    }
    *(longlong *)(lVar15 + 0xe60) = lVar9;
    uVar5 = FUN_141b33a40();
    *(undefined8 *)(lVar15 + 0xe68) = uVar5;
    local_2c8 = 1.4013e-45;
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,&local_260,*(undefined8 *)(param_2 + 0x1ab8));
    local_290 = local_260;
    if (local_260 != (float *)0x0) {
      LOCK();
      local_260[2] = (float)((int)local_260[2] + 1);
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_260);
    local_198 = (undefined8 *)(param_2 + 0x20);
    TRefCountPtr<FRHIIndexBuffer>::operator=(local_198,&local_290);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_290);
    lVar14 = (longlong)*(int *)(param_5 + 0x20);
    bVar2 = false;
    lVar9 = 0;
    lVar15 = lVar9;
    if (0 < lVar14) {
      do {
        if ((bVar2) || (0 < *(int *)(*(longlong *)(param_5 + 0x18) + 0xb8 + lVar15))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        lVar14 = lVar14 + -1;
        lVar15 = lVar15 + 200;
      } while (lVar14 != 0);
    }
    lVar15 = (longlong)*(int *)(param_5 + 0x10);
    if (0 < lVar15) {
      do {
        if ((bVar2) || (0 < *(int *)(*(longlong *)(param_5 + 8) + 0xb8 + lVar9))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        lVar9 = lVar9 + 200;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if ((bVar2) && (DAT_1464c1c50 != 0)) {
      if ((DAT_1464c1d08 == '\0') ||
         ((DAT_1464c1d14 < *(int *)(param_3 + 0x15f0) ||
          (*(int *)(param_3 + 0x15f0) * 3 < DAT_1464c1d14)))) {
        iVar3 = *(int *)(param_3 + 0x15f0) * 5;
        DAT_1464c1d14 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
        FRenderResource::ReleaseResource(&PTR_PTR_1464c1ce0);
        FRenderResource::InitResource(&PTR_PTR_1464c1ce0);
      }
      lVar15 = DAT_1464c1d68;
      if (*(char *)(DAT_1464c1d68 + 0x11) == '\0') {
        if (DAT_146ab62f3 != '\0') {
          (**(code **)(*DAT_146ab6358 + 0x688))(DAT_146ab6358,DAT_1464c1d68);
        }
        *(undefined1 *)(lVar15 + 0x11) = 1;
      }
      lVar15 = DAT_1464c1d90;
      if (*(char *)(DAT_1464c1d90 + 0x11) == '\0') {
        if (DAT_146ab62f3 != '\0') {
          (**(code **)(*DAT_146ab6358 + 0x688))(DAT_146ab6358,DAT_1464c1d90);
        }
        *(undefined1 *)(lVar15 + 0x11) = 1;
      }
      lVar15 = DAT_1464c1db8;
      if ((DAT_1464c1d10 != '\0') && (*(char *)(DAT_1464c1db8 + 0x11) == '\0')) {
        if (DAT_146ab62f3 != '\0') {
          (**(code **)(*DAT_146ab6358 + 0x688))(DAT_146ab6358,DAT_1464c1db8);
        }
        *(undefined1 *)(lVar15 + 0x11) = 1;
      }
      iVar3 = (int)(DAT_1464c1c64 + (DAT_1464c1c64 >> 0x1f & 0xfU)) >> 4;
      if (DAT_1464c1e10 != iVar3) {
        DAT_1464c1e10 = iVar3;
        FRenderResource::UpdateRHI(&PTR_PTR_1464c1de0);
      }
      local_258 = (uint)(DAT_1464c1c54 == 0);
      do {
        local_298 = 0;
        lVar15 = 8;
        if (local_258 != 0) {
          lVar15 = 0x18;
        }
        local_208 = 0;
        local_1a0 = (longlong *)(lVar15 + param_5);
        if (0 < (int)local_1a0[1]) {
          do {
            local_218 = local_208 * 200;
            local_288 = 0;
            pfVar20 = (float *)(*local_1a0 + local_218);
            local_210 = 0;
            local_260 = pfVar20;
            if (0 < (int)pfVar20[0x2e]) {
              do {
                local_290 = *(float **)(pfVar20 + 0x2c);
                if (*(float **)(pfVar20 + 0x2c) == (float *)0x0) {
                  local_290 = pfVar20 + 10;
                }
                local_290 = local_290 + local_210 * 0xb;
                if (((uint)local_290[10] & 1) != 0) {
                  ClearUAV(param_1,&DAT_1464c1d18,0);
                  lVar15 = *(longlong *)(param_2 + 0x3090);
                  local_188 = &DAT_146a1c6c0;
                  local_180 = 0;
                  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                  ::FindId(lVar15 + 0x38,&local_248,&local_188);
                  plVar12 = (longlong *)0x0;
                  if (local_248 != -1) {
                    plVar12 = (longlong *)
                              ((longlong)local_248 * 0x20 + *(longlong *)(lVar15 + 0x38));
                  }
                  plVar13 = plVar12 + 2;
                  if (plVar12 == (longlong *)0x0) {
                    plVar13 = (longlong *)0x0;
                  }
                  lVar15 = *plVar13;
                  lVar9 = *(longlong *)(lVar15 + 0x48);
                  if (*(char *)(lVar9 + 0x28) == '\0') {
                    FUN_1419f3850(lVar9);
                  }
                  uVar5 = *(undefined8 *)(lVar9 + 0x60);
                  FRHIComputeShader::UpdateStats(uVar5);
                  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar16 = puVar10 + 3;
                  if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
                    puVar10 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar16 = puVar10 + 3;
                  }
                  *(undefined8 **)(param_1 + 0x30) = puVar16;
                  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                  **(undefined8 **)(param_1 + 8) = puVar10;
                  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
                  puVar10[1] = 0;
                  *puVar10 = &PTR_LAB_144d91e50;
                  puVar10[2] = uVar5;
                  fVar23 = local_290[3] - *local_290;
                  fVar24 = local_290[4] - local_290[1];
                  fVar22 = local_290[5] - local_290[2];
                  local_1e8 = (*local_290 + local_290[3]) * 0.5;
                  local_1e4 = (local_290[1] + local_290[4]) * 0.5;
                  local_1e0 = (local_290[2] + local_290[5]) * 0.5;
                  local_1dc = SQRT((fVar24 * fVar24 + fVar23 * fVar23 + fVar22 * fVar22) * 0.25);
                  lVar9 = *(longlong *)(lVar15 + 0x48);
                  if (*(char *)(lVar9 + 0x28) == '\0') {
                    FUN_1419f3850(lVar9);
                  }
                  uVar5 = *(undefined8 *)(lVar9 + 0x60);
                  local_250 = uVar5;
                  FUN_141aa9420(lVar15,param_1,uVar5,*local_198);
                  local_2c0 = local_2c0 & 0xffffffffffffff00;
                  local_2c8 = *(float *)(local_278 + 0x15f0);
                  FUN_141aa5410(lVar15 + 0xc0,param_1,&local_250,*(undefined8 *)(local_278 + 0x15f8)
                               );
                  local_e0 = DAT_1464c1d70;
                  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                  local_d8 = DAT_1464c1d98;
                  local_d0 = DAT_1464c1dc0;
                  puVar16 = puVar10 + 4;
                  local_e8 = DAT_1464c1d20;
                  if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x28);
                    puVar10 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar16 = puVar10 + 4;
                  }
                  *(undefined8 **)(param_1 + 0x30) = puVar16;
                  *puVar10 = local_e8;
                  puVar10[1] = local_e0;
                  puVar10[2] = local_d8;
                  puVar10[3] = local_d0;
                  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar16 = puVar11 + 6;
                  if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
                    puVar11 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar16 = puVar11 + 6;
                  }
                  *(undefined8 **)(param_1 + 0x30) = puVar16;
                  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                  **(undefined8 **)(param_1 + 8) = puVar11;
                  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
                  puVar11[1] = 0;
                  *puVar11 = &PTR_LAB_144d91e60;
                  *(undefined4 *)(puVar11 + 2) = 4;
                  puVar11[3] = puVar10;
                  *(undefined4 *)(puVar11 + 4) = 2;
                  *(undefined4 *)((longlong)puVar11 + 0x24) = 3;
                  puVar11[5] = 0;
                  FUN_141b21bb0(lVar15 + 0xe4,param_1,&local_250,&DAT_1464c1d10);
                  fVar22 = _guard_xfg_dispatch_icall_nop(DAT_1464c197c);
                  local_2c8 = 0.0;
                  local_244 = param_4 / (fVar22 + 1.0);
                  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
                            (param_1,uVar5,lVar15 + 0x112);
                  uVar4 = (uint)*(ushort *)(lVar15 + 0x11c);
                  if (0xf < *(ushort *)(lVar15 + 0x11c)) {
                    uVar4 = 0x10;
                  }
                  uVar21 = (ulonglong)uVar4;
                  if (uVar4 != 0) {
                    local_250 = CONCAT44(local_250._4_4_,(uint)*(ushort *)(lVar15 + 0x11a));
                    pvVar18 = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
                    local_268 = CONCAT44(local_268._4_4_,(uint)*(ushort *)(lVar15 + 0x118));
                    uVar6 = (longlong)pvVar18 + uVar21;
                    if (*(ulonglong *)(param_1 + 0x38) < uVar6) {
                      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar4 + 0x10);
                      pvVar18 = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
                      uVar6 = (longlong)pvVar18 + uVar21;
                    }
                    *(ulonglong *)(param_1 + 0x30) = uVar6;
                    _guard_xfg_dispatch_icall_nop(pvVar18,&local_1e8,uVar21);
                    puVar10 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar16 = puVar10 + 6;
                    if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
                      puVar10 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                      puVar16 = puVar10 + 6;
                    }
                    *(undefined8 **)(param_1 + 0x30) = puVar16;
                    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                    **(undefined8 **)(param_1 + 8) = puVar10;
                    *(undefined8 **)(param_1 + 8) = puVar10 + 1;
                    puVar10[1] = 0;
                    *puVar10 = &PTR_LAB_144d92080;
                    *(undefined4 *)(puVar10 + 4) = (undefined4)local_268;
                    *(undefined4 *)((longlong)puVar10 + 0x24) = (undefined4)local_250;
                    puVar10[2] = uVar5;
                    puVar10[3] = pvVar18;
                    *(uint *)(puVar10 + 5) = uVar4;
                  }
                  if (DAT_1464c1c54 == 0) {
                    local_254 = 2;
                  }
                  else {
                    local_254 = (uint)(local_258 == 1);
                  }
                  local_2c8 = 0.0;
                  SetShaderValue<FRHIComputeShader_*,int,FRHICommandList>
                            (param_1,uVar5,lVar15 + 0x11e,&local_254);
                  local_2c8 = 1.4013e-45;
                  DispatchComputeShader
                            (param_1,lVar15,
                             (ulonglong)(*(int *)(local_278 + 0x15f0) + -1 + DAT_1464c1c70) /
                             (ulonglong)DAT_1464c1c70,1);
                  lVar9 = *(longlong *)(lVar15 + 0x48);
                  if (*(char *)(lVar9 + 0x28) == '\0') {
                    FUN_1419f3850(lVar9);
                  }
                  uVar5 = *(undefined8 *)(lVar9 + 0x60);
                  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar15 + 0xc0,param_1,uVar5);
                  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar15 + 200,param_1,uVar5);
                  lVar9 = *(longlong *)(lVar15 + 0x48);
                  if (*(char *)(lVar9 + 0x28) == '\0') {
                    FUN_1419f3850(lVar9);
                  }
                  uVar5 = *(undefined8 *)(lVar9 + 0x60);
                  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar15 + 0xe4,param_1,uVar5);
                  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar15 + 0xec,param_1,uVar5);
                  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar15 + 0xf4,param_1,uVar5);
                  FRWShaderParameter::UnsetUAV<FRHICommandList>(lVar15 + 0xfc,param_1,uVar5);
                  local_200 = (void *)0x0;
                  uVar4 = (uint)*(ushort *)(lVar15 + 0xe8);
                  if (*(ushort *)(lVar15 + 0xe8) == 0) {
                    uVar4 = 0;
                  }
                  local_1f4 = 0;
                  uVar7 = (uint)*(ushort *)(lVar15 + 0xf0);
                  if (*(ushort *)(lVar15 + 0xf0) <= uVar4) {
                    uVar7 = uVar4;
                  }
                  uVar4 = (uint)*(ushort *)(lVar15 + 0xf8);
                  if (*(ushort *)(lVar15 + 0xf8) <= uVar7) {
                    uVar4 = uVar7;
                  }
                  uVar7 = (uint)*(ushort *)(lVar15 + 0x100);
                  if (*(ushort *)(lVar15 + 0x100) <= uVar4) {
                    uVar7 = uVar4;
                  }
                  local_1f8 = uVar7 + 1;
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_200);
                  pvVar18 = local_200;
                  _guard_xfg_dispatch_icall_nop(local_200,0,(ulonglong)(uVar7 + 1) << 3);
                  uVar4 = local_1f8;
                  if (*(short *)(lVar15 + 0xea) != 0) {
                    *(undefined8 *)((longlong)pvVar18 + (ulonglong)*(ushort *)(lVar15 + 0xe8) * 8) =
                         DAT_1464c1d20;
                  }
                  if (*(short *)(lVar15 + 0xf2) != 0) {
                    *(undefined8 *)((longlong)pvVar18 + (ulonglong)*(ushort *)(lVar15 + 0xf0) * 8) =
                         DAT_1464c1d70;
                  }
                  if (*(short *)(lVar15 + 0xfa) != 0) {
                    *(undefined8 *)((longlong)pvVar18 + (ulonglong)*(ushort *)(lVar15 + 0xf8) * 8) =
                         DAT_1464c1d98;
                  }
                  if (*(short *)(lVar15 + 0x102) != 0) {
                    *(undefined8 *)((longlong)pvVar18 + (ulonglong)*(ushort *)(lVar15 + 0x100) * 8)
                         = DAT_1464c1dc0;
                  }
                  lVar15 = (longlong)(int)local_1f8;
                  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                  iVar3 = local_1f8 * 8;
                  uVar21 = (longlong)iVar3 + (longlong)puVar16;
                  if (*(ulonglong *)(param_1 + 0x38) < uVar21) {
                    FMemStackBase::AllocateNewChunk(param_1 + 0x30,iVar3 + 8);
                    puVar16 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                    uVar21 = (longlong)iVar3 + (longlong)puVar16;
                  }
                  *(ulonglong *)(param_1 + 0x30) = uVar21;
                  if (0 < (int)uVar4) {
                    puVar10 = puVar16;
                    do {
                      *puVar10 = *(undefined8 *)
                                  (((longlong)pvVar18 - (longlong)puVar16) + (longlong)puVar10);
                      puVar10 = puVar10 + 1;
                      lVar15 = lVar15 + -1;
                    } while (lVar15 != 0);
                  }
                  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar10 = puVar11 + 6;
                  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
                    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
                    puVar11 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar10 = puVar11 + 6;
                  }
                  *(undefined8 **)(param_1 + 0x30) = puVar10;
                  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                  **(undefined8 **)(param_1 + 8) = puVar11;
                  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
                  puVar11[1] = 0;
                  *puVar11 = &PTR_LAB_144d91e60;
                  *(uint *)(puVar11 + 2) = uVar4;
                  puVar11[3] = puVar16;
                  *(undefined4 *)(puVar11 + 4) = 0;
                  *(undefined4 *)((longlong)puVar11 + 0x24) = 3;
                  puVar11[5] = 0;
                  if (pvVar18 != (void *)0x0) {
                    FMemory::Free(pvVar18);
                  }
                  lVar9 = local_280;
                  local_178 = &DAT_146a1c810;
                  local_170 = 0;
                  lVar15 = *(longlong *)(local_280 + 0x3090);
                  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                  ::FindId(lVar15 + 0x38,&local_240,&local_178);
                  plVar12 = (longlong *)0x0;
                  if (local_240 != -1) {
                    plVar12 = (longlong *)
                              ((longlong)local_240 * 0x20 + *(longlong *)(lVar15 + 0x38));
                  }
                  plVar13 = plVar12 + 2;
                  if (plVar12 == (longlong *)0x0) {
                    plVar13 = (longlong *)0x0;
                  }
                  lVar15 = *plVar13;
                  lVar14 = *(longlong *)(lVar15 + 0x48);
                  if (*(char *)(lVar14 + 0x28) == '\0') {
                    FUN_1419f3850(lVar14);
                  }
                  uVar5 = *(undefined8 *)(lVar14 + 0x60);
                  FRHIComputeShader::UpdateStats(uVar5);
                  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar16 = puVar10 + 3;
                  if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
                    puVar10 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar16 = puVar10 + 3;
                  }
                  pfVar20 = local_290;
                  *(undefined8 **)(param_1 + 0x30) = puVar16;
                  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                  **(undefined8 **)(param_1 + 8) = puVar10;
                  *(undefined8 **)(param_1 + 8) = puVar10 + 1;
                  puVar10[1] = 0;
                  *puVar10 = &PTR_LAB_144d91e50;
                  local_2b0 = local_290;
                  local_2b8 = (float *)CONCAT44(local_2b8._4_4_,local_298);
                  puVar10[2] = uVar5;
                  local_2c0 = local_270;
                  local_2c8 = param_4;
                  FUN_141b70ef0(lVar15,param_1,local_278,lVar9);
                  local_2c8 = (float)((int)(((int)pfVar20[9] + 0xf >> 0x1f & 0xfU) +
                                           (int)pfVar20[9] + 0xf) >> 4);
                  DispatchComputeShader
                            (param_1,lVar15,
                             (int)(((int)pfVar20[7] + 0xf >> 0x1f & 0xfU) + (int)pfVar20[7] + 0xf)
                             >> 4,(int)(((int)pfVar20[8] + 0xf >> 0x1f & 0xfU) +
                                       (int)pfVar20[8] + 0xf) >> 4);
                  lVar9 = *(longlong *)(lVar15 + 0x48);
                  if (*(char *)(lVar9 + 0x28) == '\0') {
                    FUN_1419f3850(lVar9);
                  }
                  FRWShaderParameter::UnsetUAV<FRHICommandList>
                            (lVar15 + 300,param_1,*(undefined8 *)(lVar9 + 0x60));
                  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                  local_268 = DAT_1464c1e20;
                  puVar16 = puVar10 + 1;
                  if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
                    puVar10 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar16 = puVar10 + 1;
                  }
                  *(undefined8 **)(param_1 + 0x30) = puVar16;
                  *puVar10 = local_268;
                  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar16 = puVar11 + 6;
                  if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
                    puVar11 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar16 = puVar11 + 6;
                  }
                  *(undefined8 **)(param_1 + 0x30) = puVar16;
                  plVar12 = (longlong *)0x0;
                  iVar3 = 0;
                  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                  **(undefined8 **)(param_1 + 8) = puVar11;
                  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
                  puVar11[1] = 0;
                  *puVar11 = &PTR_LAB_144d91e60;
                  *(undefined4 *)(puVar11 + 2) = 1;
                  puVar11[3] = puVar10;
                  *(undefined4 *)(puVar11 + 4) = 0;
                  *(undefined4 *)((longlong)puVar11 + 0x24) = 3;
                  puVar11[5] = 0;
                  fVar22 = pfVar20[7];
                  fVar23 = pfVar20[8];
                  fVar24 = pfVar20[9];
                  if (((((int)fVar23 <= (int)fVar22) ||
                       (plVar13 = plVar12, (int)fVar24 <= (int)fVar22)) &&
                      (plVar13 = (longlong *)0x2, iVar3 = 2, (int)fVar23 < (int)fVar22)) &&
                     ((int)fVar23 < (int)fVar24)) {
                    iVar3 = 1;
                    plVar13 = (longlong *)0x1;
                  }
                  fVar8 = fVar24;
                  if ((int)fVar24 <= (int)fVar23) {
                    fVar8 = fVar23;
                  }
                  if ((int)fVar8 <= (int)fVar22) {
                    fVar8 = fVar22;
                  }
                  iVar19 = 3;
                  if ((int)pfVar20[(longlong)plVar13 + 7] << 3 <= (int)fVar8) {
                    iVar19 = iVar3;
                  }
                  if (iVar19 == 3) {
                    iVar3 = 4;
                  }
                  else {
                    iVar3 = 8;
                    if (iVar19 == 0) {
                      iVar3 = 1;
                    }
                  }
                  local_268 = CONCAT44(local_268._4_4_,((int)fVar22 + -1 + iVar3) / iVar3);
                  if (iVar19 == 3) {
                    iVar3 = 4;
                  }
                  else {
                    iVar3 = 8;
                    if (iVar19 == 1) {
                      iVar3 = 1;
                    }
                  }
                  uVar21 = (longlong)((int)fVar23 + -1 + iVar3) / (longlong)iVar3 & 0xffffffff;
                  if (iVar19 == 3) {
                    iVar3 = 4;
                  }
                  else {
                    iVar3 = 8;
                    if (iVar19 == 2) {
                      iVar3 = 1;
                    }
                  }
                  fVar22 = (float)(((int)fVar24 + -1 + iVar3) / iVar3);
                  pfVar1 = *(float **)(*(longlong *)(local_270 + 8) + 0xc0 + local_218);
                  if (((local_258 == 1) && (DAT_1464c1c54 != 0)) && (pfVar1 != (float *)0x0)) {
                    lVar9 = *(longlong *)(local_280 + 0x3090);
                    lVar15 = lVar9 + 0x38;
                    if (iVar19 != 3) {
                      if (iVar19 == 0) {
                        local_150 = 0;
                        local_158 = &DAT_146a1fb50;
                        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                        ::FindId(lVar15,&local_238,&local_158);
                        plVar13 = plVar12;
                        if (local_238 != -1) {
                          plVar13 = (longlong *)
                                    ((longlong)local_238 * 0x20 + *(longlong *)(lVar9 + 0x38));
                        }
                        plVar17 = plVar13 + 2;
                        if (plVar13 == (longlong *)0x0) {
                          plVar17 = plVar12;
                        }
                        lVar15 = *plVar17;
                        lVar9 = *(longlong *)(lVar15 + 0x48);
                        if (*(char *)(lVar9 + 0x28) == '\0') {
                          FUN_1419f3850(lVar9);
                        }
                        uVar5 = *(undefined8 *)(lVar9 + 0x60);
                        FRHIComputeShader::UpdateStats(uVar5);
                        puVar10 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                        puVar16 = puVar10 + 3;
                        if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
                          puVar10 = (undefined8 *)
                                    (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                          puVar16 = puVar10 + 3;
                        }
                        pfVar20 = local_260;
                        *(undefined8 **)(param_1 + 0x30) = puVar16;
                        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                        **(undefined8 **)(param_1 + 8) = puVar10;
                        *(undefined8 **)(param_1 + 8) = puVar10 + 1;
                        puVar10[1] = 0;
                        *puVar10 = &PTR_LAB_144d91e50;
                        puVar10[2] = uVar5;
                        local_2c0 = local_270 + 0x30;
                        local_2a0 = local_290;
                        local_2a8 = local_298;
                        local_2b8 = local_260;
                        local_2c8 = param_4;
                        local_2b0 = pfVar1;
                        FUN_141b6e700(lVar15,param_1,local_278,local_280);
                        local_2c8 = fVar22;
                        DispatchComputeShader(param_1,lVar15,local_268 & 0xffffffff,uVar21);
                        lVar9 = *(longlong *)(lVar15 + 0x48);
                        if (*(char *)(lVar9 + 0x28) == '\0') {
                          FUN_1419f3850(lVar9);
                        }
                        FRWShaderParameter::UnsetUAV<FRHICommandList>
                                  (lVar15 + 300,param_1,*(undefined8 *)(lVar9 + 0x60));
                        puVar10 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                        uVar5 = *(undefined8 *)(*(longlong *)(pfVar20 + 0x30) + 0x18);
                        puVar16 = puVar10 + 1;
                        local_1d8 = uVar5;
                        if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                          FMemStackBase::AllocateNewChunk(param_1 + 0x30);
                          uVar5 = local_1d8;
                          goto LAB_141b7890a;
                        }
                      }
                      else if (iVar19 == 1) {
                        local_140 = 0;
                        local_148 = &DAT_146a1fca0;
                        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                        ::FindId(lVar15,&local_234,&local_148);
                        plVar13 = plVar12;
                        if (local_234 != -1) {
                          plVar13 = (longlong *)
                                    ((longlong)local_234 * 0x20 + *(longlong *)(lVar9 + 0x38));
                        }
                        plVar17 = plVar13 + 2;
                        if (plVar13 == (longlong *)0x0) {
                          plVar17 = plVar12;
                        }
                        lVar15 = *plVar17;
                        lVar9 = *(longlong *)(lVar15 + 0x48);
                        if (*(char *)(lVar9 + 0x28) == '\0') {
                          FUN_1419f3850(lVar9);
                        }
                        uVar5 = *(undefined8 *)(lVar9 + 0x60);
                        FRHIComputeShader::UpdateStats(uVar5);
                        puVar10 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                        puVar16 = puVar10 + 3;
                        if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
                          puVar10 = (undefined8 *)
                                    (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                          puVar16 = puVar10 + 3;
                        }
                        pfVar20 = local_260;
                        *(undefined8 **)(param_1 + 0x30) = puVar16;
                        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                        **(undefined8 **)(param_1 + 8) = puVar10;
                        *(undefined8 **)(param_1 + 8) = puVar10 + 1;
                        puVar10[1] = 0;
                        *puVar10 = &PTR_LAB_144d91e50;
                        puVar10[2] = uVar5;
                        local_2c0 = local_270 + 0x30;
                        local_2a0 = local_290;
                        local_2a8 = local_298;
                        local_2b8 = local_260;
                        local_2c8 = param_4;
                        local_2b0 = pfVar1;
                        FUN_141b6e700(lVar15,param_1,local_278,local_280);
                        local_2c8 = fVar22;
                        DispatchComputeShader(param_1,lVar15,local_268 & 0xffffffff,uVar21);
                        lVar9 = *(longlong *)(lVar15 + 0x48);
                        if (*(char *)(lVar9 + 0x28) == '\0') {
                          FUN_1419f3850(lVar9);
                        }
                        FRWShaderParameter::UnsetUAV<FRHICommandList>
                                  (lVar15 + 300,param_1,*(undefined8 *)(lVar9 + 0x60));
                        puVar10 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                        uVar5 = *(undefined8 *)(*(longlong *)(pfVar20 + 0x30) + 0x18);
                        puVar16 = puVar10 + 1;
                        local_1d0 = uVar5;
                        if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                          FMemStackBase::AllocateNewChunk(param_1 + 0x30);
                          uVar5 = local_1d0;
LAB_141b7890a:
                          puVar10 = (undefined8 *)
                                    (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                          puVar16 = puVar10 + 1;
                        }
                      }
                      else {
                        local_130 = 0;
                        local_138 = &DAT_146a1fdf0;
                        TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                        ::FindId(lVar15,&local_230,&local_138);
                        plVar13 = plVar12;
                        if (local_230 != -1) {
                          plVar13 = (longlong *)
                                    ((longlong)local_230 * 0x20 + *(longlong *)(lVar9 + 0x38));
                        }
                        plVar17 = plVar13 + 2;
                        if (plVar13 == (longlong *)0x0) {
                          plVar17 = plVar12;
                        }
                        lVar15 = *plVar17;
                        lVar9 = *(longlong *)(lVar15 + 0x48);
                        if (*(char *)(lVar9 + 0x28) == '\0') {
                          FUN_1419f3850(lVar9);
                        }
                        uVar5 = *(undefined8 *)(lVar9 + 0x60);
                        FRHIComputeShader::UpdateStats(uVar5);
                        puVar10 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                        puVar16 = puVar10 + 3;
                        if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                          FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
                          puVar10 = (undefined8 *)
                                    (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                          puVar16 = puVar10 + 3;
                        }
                        pfVar20 = local_260;
                        *(undefined8 **)(param_1 + 0x30) = puVar16;
                        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                        **(undefined8 **)(param_1 + 8) = puVar10;
                        *(undefined8 **)(param_1 + 8) = puVar10 + 1;
                        puVar10[1] = 0;
                        *puVar10 = &PTR_LAB_144d91e50;
                        puVar10[2] = uVar5;
                        local_2c0 = local_270 + 0x30;
                        local_2a0 = local_290;
                        local_2a8 = local_298;
                        local_2b8 = local_260;
                        local_2c8 = param_4;
                        local_2b0 = pfVar1;
                        FUN_141b6e700(lVar15,param_1,local_278,local_280);
                        local_2c8 = fVar22;
                        DispatchComputeShader(param_1,lVar15,local_268 & 0xffffffff,uVar21);
                        lVar9 = *(longlong *)(lVar15 + 0x48);
                        if (*(char *)(lVar9 + 0x28) == '\0') {
                          FUN_1419f3850(lVar9);
                        }
                        FRWShaderParameter::UnsetUAV<FRHICommandList>
                                  (lVar15 + 300,param_1,*(undefined8 *)(lVar9 + 0x60));
                        puVar10 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                        uVar5 = *(undefined8 *)(*(longlong *)(pfVar20 + 0x30) + 0x18);
                        puVar16 = puVar10 + 1;
                        local_1c8 = uVar5;
                        if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                          FMemStackBase::AllocateNewChunk(param_1 + 0x30);
                          uVar5 = local_1c8;
                          goto LAB_141b7890a;
                        }
                      }
                      goto LAB_141b7891a;
                    }
                    local_160 = 0;
                    local_168 = &DAT_146a1fa00;
                    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                    ::FindId(lVar15,&local_23c,&local_168);
                    plVar13 = plVar12;
                    if (local_23c != -1) {
                      plVar13 = (longlong *)
                                ((longlong)local_23c * 0x20 + *(longlong *)(lVar9 + 0x38));
                    }
                    plVar17 = plVar13 + 2;
                    if (plVar13 == (longlong *)0x0) {
                      plVar17 = plVar12;
                    }
                    lVar15 = *plVar17;
                    lVar9 = *(longlong *)(lVar15 + 0x48);
                    if (*(char *)(lVar9 + 0x28) == '\0') {
                      FUN_1419f3850(lVar9);
                    }
                    uVar5 = *(undefined8 *)(lVar9 + 0x60);
                    FRHIComputeShader::UpdateStats(uVar5);
                    puVar10 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar16 = puVar10 + 3;
                    if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
                      puVar10 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                      puVar16 = puVar10 + 3;
                    }
                    pfVar20 = local_260;
                    *(undefined8 **)(param_1 + 0x30) = puVar16;
                    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                    **(undefined8 **)(param_1 + 8) = puVar10;
                    *(undefined8 **)(param_1 + 8) = puVar10 + 1;
                    puVar10[1] = 0;
                    *puVar10 = &PTR_LAB_144d91e50;
                    puVar10[2] = uVar5;
                    local_2c0 = local_270 + 0x30;
                    local_2a0 = local_290;
                    local_2a8 = local_298;
                    local_2b8 = local_260;
                    local_2c8 = param_4;
                    local_2b0 = pfVar1;
                    FUN_141b6e700(lVar15,param_1,local_278,local_280);
                    local_2c8 = fVar22;
                    DispatchComputeShader(param_1,lVar15,local_268 & 0xffffffff,uVar21);
                    lVar9 = *(longlong *)(lVar15 + 0x48);
                    if (*(char *)(lVar9 + 0x28) == '\0') {
                      FUN_1419f3850(lVar9);
                    }
                    FRWShaderParameter::UnsetUAV<FRHICommandList>
                              (lVar15 + 300,param_1,*(undefined8 *)(lVar9 + 0x60));
                    puVar10 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                    local_190 = *(undefined8 *)(*(longlong *)(pfVar20 + 0x30) + 0x18);
                    puVar16 = puVar10 + 1;
                    if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
                      puVar10 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                      puVar16 = puVar10 + 1;
                    }
                    *(undefined8 **)(param_1 + 0x30) = puVar16;
                    *puVar10 = local_190;
                    puVar11 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar16 = puVar11 + 6;
                    if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
                      puVar11 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                      puVar16 = puVar11 + 6;
                    }
                    *(undefined8 **)(param_1 + 0x30) = puVar16;
                    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                    **(undefined8 **)(param_1 + 8) = puVar11;
                    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
                    puVar11[1] = 0;
                    *(undefined4 *)(puVar11 + 4) = 0;
                    puVar11[5] = 0;
                  }
                  else {
                    lVar9 = *(longlong *)(local_280 + 0x3090);
                    lVar15 = lVar9 + 0x38;
                    if (iVar19 == 3) {
                      local_120 = 0;
                      local_128 = &DAT_146a1ff40;
                      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                      ::FindId(lVar15,&local_22c,&local_128);
                      plVar13 = plVar12;
                      if (local_22c != -1) {
                        plVar13 = (longlong *)
                                  ((longlong)local_22c * 0x20 + *(longlong *)(lVar9 + 0x38));
                      }
                      plVar17 = plVar13 + 2;
                      if (plVar13 == (longlong *)0x0) {
                        plVar17 = plVar12;
                      }
                      lVar15 = *plVar17;
                      lVar9 = *(longlong *)(lVar15 + 0x48);
                      if (*(char *)(lVar9 + 0x28) == '\0') {
                        FUN_1419f3850(lVar9);
                      }
                      uVar5 = *(undefined8 *)(lVar9 + 0x60);
                      FRHIComputeShader::UpdateStats(uVar5);
                      puVar10 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                      puVar16 = puVar10 + 3;
                      if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
                        puVar10 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                        puVar16 = puVar10 + 3;
                      }
                      pfVar20 = local_260;
                      *(undefined8 **)(param_1 + 0x30) = puVar16;
                      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                      **(undefined8 **)(param_1 + 8) = puVar10;
                      *(undefined8 **)(param_1 + 8) = puVar10 + 1;
                      puVar10[1] = 0;
                      *puVar10 = &PTR_LAB_144d91e50;
                      puVar10[2] = uVar5;
                      local_2c0 = local_270 + 0x30;
                      local_2a0 = local_290;
                      local_2a8 = local_298;
                      local_2b0 = (float *)0x0;
                      local_2b8 = local_260;
                      local_2c8 = param_4;
                      FUN_141b6efe0(lVar15,param_1,local_278,local_280);
                      local_2c8 = fVar22;
                      DispatchComputeShader(param_1,lVar15,local_268 & 0xffffffff,uVar21);
                      lVar9 = *(longlong *)(lVar15 + 0x48);
                      if (*(char *)(lVar9 + 0x28) == '\0') {
                        FUN_1419f3850(lVar9);
                      }
                      FRWShaderParameter::UnsetUAV<FRHICommandList>
                                (lVar15 + 300,param_1,*(undefined8 *)(lVar9 + 0x60));
                      puVar10 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                      uVar5 = *(undefined8 *)(*(longlong *)(pfVar20 + 0x30) + 0x18);
                      puVar16 = puVar10 + 1;
                      local_1c0 = uVar5;
                      if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                        FMemStackBase::AllocateNewChunk(param_1 + 0x30);
                        uVar5 = local_1c0;
                        goto LAB_141b7890a;
                      }
                    }
                    else if (iVar19 == 0) {
                      local_110 = 0;
                      local_118 = &DAT_146a20090;
                      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                      ::FindId(lVar15,&local_228,&local_118);
                      plVar13 = plVar12;
                      if (local_228 != -1) {
                        plVar13 = (longlong *)
                                  ((longlong)local_228 * 0x20 + *(longlong *)(lVar9 + 0x38));
                      }
                      plVar17 = plVar13 + 2;
                      if (plVar13 == (longlong *)0x0) {
                        plVar17 = plVar12;
                      }
                      lVar15 = *plVar17;
                      lVar9 = *(longlong *)(lVar15 + 0x48);
                      if (*(char *)(lVar9 + 0x28) == '\0') {
                        FUN_1419f3850(lVar9);
                      }
                      uVar5 = *(undefined8 *)(lVar9 + 0x60);
                      FRHIComputeShader::UpdateStats(uVar5);
                      puVar10 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                      puVar16 = puVar10 + 3;
                      if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
                        puVar10 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                        puVar16 = puVar10 + 3;
                      }
                      pfVar20 = local_260;
                      *(undefined8 **)(param_1 + 0x30) = puVar16;
                      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                      **(undefined8 **)(param_1 + 8) = puVar10;
                      *(undefined8 **)(param_1 + 8) = puVar10 + 1;
                      puVar10[1] = 0;
                      *puVar10 = &PTR_LAB_144d91e50;
                      puVar10[2] = uVar5;
                      local_2c0 = local_270 + 0x30;
                      local_2a0 = local_290;
                      local_2a8 = local_298;
                      local_2b0 = (float *)0x0;
                      local_2b8 = local_260;
                      local_2c8 = param_4;
                      FUN_141b6efe0(lVar15,param_1,local_278,local_280);
                      local_2c8 = fVar22;
                      DispatchComputeShader(param_1,lVar15,local_268 & 0xffffffff,uVar21);
                      lVar9 = *(longlong *)(lVar15 + 0x48);
                      if (*(char *)(lVar9 + 0x28) == '\0') {
                        FUN_1419f3850(lVar9);
                      }
                      FRWShaderParameter::UnsetUAV<FRHICommandList>
                                (lVar15 + 300,param_1,*(undefined8 *)(lVar9 + 0x60));
                      puVar10 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                      uVar5 = *(undefined8 *)(*(longlong *)(pfVar20 + 0x30) + 0x18);
                      puVar16 = puVar10 + 1;
                      local_1b8 = uVar5;
                      if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                        FMemStackBase::AllocateNewChunk(param_1 + 0x30);
                        uVar5 = local_1b8;
                        goto LAB_141b7890a;
                      }
                    }
                    else if (iVar19 == 1) {
                      local_100 = 0;
                      local_108 = &DAT_146a201e0;
                      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                      ::FindId(lVar15,&local_224,&local_108);
                      plVar13 = plVar12;
                      if (local_224 != -1) {
                        plVar13 = (longlong *)
                                  ((longlong)local_224 * 0x20 + *(longlong *)(lVar9 + 0x38));
                      }
                      plVar17 = plVar13 + 2;
                      if (plVar13 == (longlong *)0x0) {
                        plVar17 = plVar12;
                      }
                      lVar15 = *plVar17;
                      lVar9 = *(longlong *)(lVar15 + 0x48);
                      if (*(char *)(lVar9 + 0x28) == '\0') {
                        FUN_1419f3850(lVar9);
                      }
                      uVar5 = *(undefined8 *)(lVar9 + 0x60);
                      FRHIComputeShader::UpdateStats(uVar5);
                      puVar10 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                      puVar16 = puVar10 + 3;
                      if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
                        puVar10 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                        puVar16 = puVar10 + 3;
                      }
                      pfVar20 = local_260;
                      *(undefined8 **)(param_1 + 0x30) = puVar16;
                      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                      **(undefined8 **)(param_1 + 8) = puVar10;
                      *(undefined8 **)(param_1 + 8) = puVar10 + 1;
                      puVar10[1] = 0;
                      *puVar10 = &PTR_LAB_144d91e50;
                      puVar10[2] = uVar5;
                      local_2c0 = local_270 + 0x30;
                      local_2a0 = local_290;
                      local_2a8 = local_298;
                      local_2b0 = (float *)0x0;
                      local_2b8 = local_260;
                      local_2c8 = param_4;
                      FUN_141b6efe0(lVar15,param_1,local_278,local_280);
                      local_2c8 = fVar22;
                      DispatchComputeShader(param_1,lVar15,local_268 & 0xffffffff,uVar21);
                      lVar9 = *(longlong *)(lVar15 + 0x48);
                      if (*(char *)(lVar9 + 0x28) == '\0') {
                        FUN_1419f3850(lVar9);
                      }
                      FRWShaderParameter::UnsetUAV<FRHICommandList>
                                (lVar15 + 300,param_1,*(undefined8 *)(lVar9 + 0x60));
                      puVar10 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                      uVar5 = *(undefined8 *)(*(longlong *)(pfVar20 + 0x30) + 0x18);
                      puVar16 = puVar10 + 1;
                      local_1b0 = uVar5;
                      if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                        FMemStackBase::AllocateNewChunk(param_1 + 0x30);
                        uVar5 = local_1b0;
                        goto LAB_141b7890a;
                      }
                    }
                    else {
                      local_f0 = 0;
                      local_f8 = &DAT_146a20330;
                      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                      ::FindId(lVar15,local_220,&local_f8);
                      plVar13 = plVar12;
                      if (local_220[0] != -1) {
                        plVar13 = (longlong *)
                                  ((longlong)local_220[0] * 0x20 + *(longlong *)(lVar9 + 0x38));
                      }
                      plVar17 = plVar13 + 2;
                      if (plVar13 == (longlong *)0x0) {
                        plVar17 = plVar12;
                      }
                      lVar15 = *plVar17;
                      lVar9 = *(longlong *)(lVar15 + 0x48);
                      if (*(char *)(lVar9 + 0x28) == '\0') {
                        FUN_1419f3850(lVar9);
                      }
                      uVar5 = *(undefined8 *)(lVar9 + 0x60);
                      FRHIComputeShader::UpdateStats(uVar5);
                      puVar10 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                      puVar16 = puVar10 + 3;
                      if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x20);
                        puVar10 = (undefined8 *)
                                  (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                        puVar16 = puVar10 + 3;
                      }
                      pfVar20 = local_260;
                      *(undefined8 **)(param_1 + 0x30) = puVar16;
                      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                      **(undefined8 **)(param_1 + 8) = puVar10;
                      *(undefined8 **)(param_1 + 8) = puVar10 + 1;
                      puVar10[1] = 0;
                      *puVar10 = &PTR_LAB_144d91e50;
                      puVar10[2] = uVar5;
                      local_2c0 = local_270 + 0x30;
                      local_2a0 = local_290;
                      local_2a8 = local_298;
                      local_2b0 = (float *)0x0;
                      local_2b8 = local_260;
                      local_2c8 = param_4;
                      FUN_141b6efe0(lVar15,param_1,local_278,local_280);
                      local_2c8 = fVar22;
                      DispatchComputeShader(param_1,lVar15,local_268 & 0xffffffff,uVar21);
                      lVar9 = *(longlong *)(lVar15 + 0x48);
                      if (*(char *)(lVar9 + 0x28) == '\0') {
                        FUN_1419f3850(lVar9);
                      }
                      FRWShaderParameter::UnsetUAV<FRHICommandList>
                                (lVar15 + 300,param_1,*(undefined8 *)(lVar9 + 0x60));
                      puVar10 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                      uVar5 = *(undefined8 *)(*(longlong *)(pfVar20 + 0x30) + 0x18);
                      puVar16 = puVar10 + 1;
                      local_1a8 = uVar5;
                      if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                        FMemStackBase::AllocateNewChunk(param_1 + 0x30);
                        uVar5 = local_1a8;
                        goto LAB_141b7890a;
                      }
                    }
LAB_141b7891a:
                    *(undefined8 **)(param_1 + 0x30) = puVar16;
                    *puVar10 = uVar5;
                    puVar11 = (undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar16 = puVar11 + 6;
                    if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
                      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
                      puVar11 = (undefined8 *)
                                (*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
                      puVar16 = puVar11 + 6;
                    }
                    *(undefined8 **)(param_1 + 0x30) = puVar16;
                    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                    **(undefined8 **)(param_1 + 8) = puVar11;
                    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
                    puVar11[5] = 0;
                    *(undefined4 *)(puVar11 + 4) = 0;
                    puVar11[1] = 0;
                  }
                  *puVar11 = &PTR_LAB_144d91e60;
                  puVar11[3] = puVar10;
                  *(undefined4 *)((longlong)puVar11 + 0x24) = 3;
                  *(undefined4 *)(puVar11 + 2) = 1;
                  param_2 = local_280;
                  param_5 = local_270;
                  param_3 = local_278;
                }
                iVar3 = local_288;
                if (((uint)local_290[10] & 2) != 0) {
                  local_2b8 = (float *)CONCAT44(local_2b8._4_4_,local_298);
                  local_2c8 = param_4;
                  local_2c0 = param_5;
                  local_2b0 = local_290;
                  FUN_141b57c60(param_2 + 0x3018,param_1,param_3,param_2);
                }
                local_210 = local_210 + 1;
                local_288 = iVar3 + 1;
              } while (local_288 < (int)pfVar20[0x2e]);
            }
            puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
            local_218 = *(undefined8 *)(*(longlong *)(pfVar20 + 0x30) + 0x18);
            puVar16 = puVar10 + 1;
            if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
              FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
              puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar16 = puVar10 + 1;
            }
            *(undefined8 **)(param_1 + 0x30) = puVar16;
            *puVar10 = local_218;
            puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar16 = puVar11 + 6;
            if (*(undefined8 **)(param_1 + 0x38) < puVar16) {
              FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
              puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
              puVar16 = puVar11 + 6;
            }
            *(undefined8 **)(param_1 + 0x30) = puVar16;
            local_298 = local_298 + 1;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            **(undefined8 **)(param_1 + 8) = puVar11;
            *(undefined8 **)(param_1 + 8) = puVar11 + 1;
            *(undefined4 *)(puVar11 + 2) = 1;
            puVar11[3] = puVar10;
            *(undefined4 *)(puVar11 + 4) = 0;
            *(undefined4 *)((longlong)puVar11 + 0x24) = 1;
            puVar11[5] = 0;
            puVar11[1] = 0;
            *puVar11 = &PTR_LAB_144d91e60;
            local_208 = local_208 + 1;
          } while (local_298 < (int)local_1a0[1]);
        }
        local_258 = local_258 + 1;
      } while ((int)local_258 < 2);
      if ((DAT_146ab62f3 != '\0') && (*(int *)(DAT_146a9d500 + 4) != 0)) {
        FUN_141b60e90(&DAT_1464c1d68);
        FUN_141b60e90(&DAT_1464c1d90);
        if (DAT_1464c1d10 != '\0') {
          FUN_141b60e90(&DAT_1464c1db8);
        }
      }
    }
  }
  return;
}



// FUNCTION 141b78bd0 UpdateParameterData body=1041 status=ok
// SIG undefined UpdateParameterData(void)

void FGlobalDistanceFieldInfo::UpdateParameterData(undefined1 *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  float *pfVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  int local_res8;
  undefined8 *local_res20;
  undefined8 *local_88;
  longlong *local_78;
  
  bVar10 = false;
  bVar9 = false;
  if (*(int *)(param_1 + 0x20) < 1) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 0x30,0,0xb0);
  }
  else {
    lVar17 = 0;
    pfVar18 = (float *)(param_1 + 0x70);
    local_78 = (longlong *)(param_1 + 0xb0);
    local_res8 = 0;
    puVar14 = local_res20;
    puVar16 = local_88;
    do {
      if (local_res8 < *(int *)(param_1 + 0x20)) {
        bVar10 = true;
        puVar14 = *(undefined8 **)
                   (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xc0 + lVar17) + 0x10);
        puVar15 = puVar14;
        local_res20 = puVar14;
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          puVar16 = local_88;
        }
      }
      else {
        bVar9 = true;
        local_88 = (undefined8 *)0x0;
        puVar15 = (undefined8 *)0x0;
        puVar16 = (undefined8 *)0x0;
      }
      if ((bVar9) && (bVar9 = false, puVar16 != (undefined8 *)0x0)) {
        LOCK();
        piVar1 = (int *)(puVar16 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        puVar14 = local_res20;
        puVar16 = local_88;
        if (iVar2 == 1) {
          if ((*(char *)(local_88 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar11 = FOutputDevice::CanBeUsedOnAnyThread(), cVar11 == '\0')))) {
            LOCK();
            bVar19 = *(int *)((longlong)local_88 + 0xc) == 0;
            if (bVar19) {
              *(int *)((longlong)local_88 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar19) {
              uVar12 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar12 == 0) {
                lVar13 = 0;
              }
              else {
                lVar13 = (&DAT_1468a81f8)[uVar12 >> 0xe] + (ulonglong)(uVar12 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar13 + 8) = local_88;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*local_88)(local_88,1);
          }
        }
      }
      if ((bVar10) && (bVar10 = false, puVar14 != (undefined8 *)0x0)) {
        LOCK();
        piVar1 = (int *)(puVar14 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        puVar14 = local_res20;
        puVar16 = local_88;
        if (iVar2 == 1) {
          if ((*(char *)(local_res20 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar11 = FOutputDevice::CanBeUsedOnAnyThread(), cVar11 == '\0')))) {
            LOCK();
            bVar19 = *(int *)((longlong)local_res20 + 0xc) == 0;
            if (bVar19) {
              *(int *)((longlong)local_res20 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar19) {
              uVar12 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar12 == 0) {
                lVar13 = 0;
              }
              else {
                lVar13 = (&DAT_1468a81f8)[uVar12 >> 0xe] + (ulonglong)(uVar12 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar13 + 8) = local_res20;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*local_res20)(local_res20,1);
          }
        }
      }
      *local_78 = (longlong)puVar15;
      if (local_res8 < *(int *)(param_1 + 0x20)) {
        lVar13 = *(longlong *)(param_1 + 0x18);
        fVar20 = *(float *)(lVar17 + 0xc + lVar13);
        fVar3 = *(float *)(lVar17 + 0x10 + lVar13);
        fVar4 = *(float *)(lVar17 + lVar13);
        fVar5 = *(float *)(lVar17 + 4 + lVar13);
        fVar6 = *(float *)(lVar17 + 0x14 + lVar13);
        fVar7 = *(float *)(lVar17 + 8 + lVar13);
        pfVar18[-0x10] = (fVar20 + *(float *)(lVar17 + lVar13)) * 0.5;
        pfVar18[-0xf] = (fVar3 + fVar5) * 0.5;
        pfVar18[-0xe] = (fVar6 + fVar7) * 0.5;
        pfVar18[-0xd] = (fVar20 - fVar4) * 0.5;
        fVar20 = *(float *)(lVar17 + 0xc + lVar13);
        fVar3 = *(float *)(lVar17 + 0x24 + lVar13);
        fVar21 = 1.0 / (fVar20 - *(float *)(lVar17 + lVar13));
        fVar4 = *(float *)(lVar17 + 0x10 + lVar13);
        fVar5 = *(float *)(lVar17 + 4 + lVar13);
        fVar6 = *(float *)(lVar17 + 0x20 + lVar13);
        fVar7 = *(float *)(lVar17 + 0x14 + lVar13);
        fVar8 = *(float *)(lVar17 + 8 + lVar13);
        *pfVar18 = (*(float *)(lVar17 + 0x1c + lVar13) -
                   (fVar20 + *(float *)(lVar17 + lVar13)) * 0.5) * fVar21 + 0.5;
        pfVar18[1] = (fVar6 - (fVar4 + fVar5) * 0.5) * fVar21 + 0.5;
        pfVar18[2] = (fVar3 - (fVar7 + fVar8) * 0.5) * fVar21 + 0.5;
        pfVar18[3] = fVar21;
      }
      else {
        pfVar18[-0x10] = 0.0;
        pfVar18[-0xf] = 0.0;
        pfVar18[-0xe] = 0.0;
        pfVar18[-0xd] = 0.0;
        pfVar18[0] = 0.0;
        pfVar18[1] = 0.0;
        pfVar18[2] = 0.0;
        pfVar18[3] = 0.0;
      }
      local_res8 = local_res8 + 1;
      local_78 = local_78 + 1;
      pfVar18 = pfVar18 + 4;
      lVar17 = lVar17 + 200;
    } while (lVar17 < 800);
    *(float *)(param_1 + 0xd0) = (float)DAT_1464c1c64;
    fVar20 = ::_guard_xfg_dispatch_icall_nop(DAT_1464c197c);
    *(float *)(param_1 + 0xd4) = param_2 / (fVar20 + 1.0);
  }
  *param_1 = 1;
  return;
}



// FUNCTION 141b78ff0 FUN_141b78ff0 body=2745 status=ok
// SIG undefined FUN_141b78ff0(void)

void FUN_141b78ff0(undefined8 param_1,longlong *param_2,float param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = 0;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + *param_2);
      fVar8 = *(float *)(lVar1 + 0x150);
      fVar6 = *(float *)(lVar1 + 0x154);
      fVar7 = fVar8 - *(float *)(lVar1 + 0x40);
      fVar5 = *(float *)(lVar1 + 0x158);
      fVar9 = fVar6 - *(float *)(lVar1 + 0x44);
      fVar4 = fVar5 - *(float *)(lVar1 + 0x48);
      fVar4 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar4 * fVar4);
      if (1e-05 < fVar4) {
        fVar4 = (DAT_1464c1cb4 * param_3) / fVar4;
        if (0.0 <= fVar4) {
          if (1.0 <= fVar4) {
            fVar4 = 1.0;
          }
        }
        else {
          fVar4 = 0.0;
        }
        *(ulonglong *)(lVar1 + 0x150) =
             CONCAT44((*(float *)(lVar1 + 0x44) - fVar6) * fVar4 + fVar6,
                      (*(float *)(lVar1 + 0x40) - fVar8) * fVar4 + fVar8);
        *(float *)(lVar1 + 0x158) = (*(float *)(lVar1 + 0x48) - fVar5) * fVar4 + fVar5;
        *(float *)(lVar1 + 0x160) =
             (*(float *)(lVar1 + 0x50) - *(float *)(lVar1 + 0x160)) * fVar4 +
             *(float *)(lVar1 + 0x160);
        *(float *)(lVar1 + 0x164) =
             (*(float *)(lVar1 + 0x54) - *(float *)(lVar1 + 0x164)) * fVar4 +
             *(float *)(lVar1 + 0x164);
        *(float *)(lVar1 + 0x168) =
             (*(float *)(lVar1 + 0x58) - *(float *)(lVar1 + 0x168)) * fVar4 +
             *(float *)(lVar1 + 0x168);
        *(float *)(lVar1 + 0x16c) =
             (*(float *)(lVar1 + 0x5c) - *(float *)(lVar1 + 0x16c)) * fVar4 +
             *(float *)(lVar1 + 0x16c);
        *(float *)(lVar1 + 400) =
             (*(float *)(lVar1 + 0x80) - *(float *)(lVar1 + 400)) * fVar4 + *(float *)(lVar1 + 400);
        *(float *)(lVar1 + 0x194) =
             (*(float *)(lVar1 + 0x84) - *(float *)(lVar1 + 0x194)) * fVar4 +
             *(float *)(lVar1 + 0x194);
        *(float *)(lVar1 + 0x198) =
             (*(float *)(lVar1 + 0x88) - *(float *)(lVar1 + 0x198)) * fVar4 +
             *(float *)(lVar1 + 0x198);
        *(float *)(lVar1 + 0x19c) =
             (*(float *)(lVar1 + 0x8c) - *(float *)(lVar1 + 0x19c)) * fVar4 +
             *(float *)(lVar1 + 0x19c);
        *(float *)(lVar1 + 0x170) =
             (*(float *)(lVar1 + 0x60) - *(float *)(lVar1 + 0x170)) * fVar4 +
             *(float *)(lVar1 + 0x170);
        *(float *)(lVar1 + 0x174) =
             (*(float *)(lVar1 + 100) - *(float *)(lVar1 + 0x174)) * fVar4 +
             *(float *)(lVar1 + 0x174);
        *(float *)(lVar1 + 0x178) =
             (*(float *)(lVar1 + 0x68) - *(float *)(lVar1 + 0x178)) * fVar4 +
             *(float *)(lVar1 + 0x178);
        *(float *)(lVar1 + 0x17c) =
             (*(float *)(lVar1 + 0x6c) - *(float *)(lVar1 + 0x17c)) * fVar4 +
             *(float *)(lVar1 + 0x17c);
        *(float *)(lVar1 + 0x1a0) =
             (*(float *)(lVar1 + 0x90) - *(float *)(lVar1 + 0x1a0)) * fVar4 +
             *(float *)(lVar1 + 0x1a0);
        *(float *)(lVar1 + 0x1a4) =
             (*(float *)(lVar1 + 0x94) - *(float *)(lVar1 + 0x1a4)) * fVar4 +
             *(float *)(lVar1 + 0x1a4);
        *(float *)(lVar1 + 0x1a8) =
             (*(float *)(lVar1 + 0x98) - *(float *)(lVar1 + 0x1a8)) * fVar4 +
             *(float *)(lVar1 + 0x1a8);
        *(float *)(lVar1 + 0x1ac) =
             (*(float *)(lVar1 + 0x9c) - *(float *)(lVar1 + 0x1ac)) * fVar4 +
             *(float *)(lVar1 + 0x1ac);
        *(float *)(lVar1 + 0x180) =
             (*(float *)(lVar1 + 0x70) - *(float *)(lVar1 + 0x180)) * fVar4 +
             *(float *)(lVar1 + 0x180);
        *(float *)(lVar1 + 0x184) =
             (*(float *)(lVar1 + 0x74) - *(float *)(lVar1 + 0x184)) * fVar4 +
             *(float *)(lVar1 + 0x184);
        *(float *)(lVar1 + 0x188) =
             (*(float *)(lVar1 + 0x78) - *(float *)(lVar1 + 0x188)) * fVar4 +
             *(float *)(lVar1 + 0x188);
        *(float *)(lVar1 + 0x18c) =
             (*(float *)(lVar1 + 0x7c) - *(float *)(lVar1 + 0x18c)) * fVar4 +
             *(float *)(lVar1 + 0x18c);
        *(float *)(lVar1 + 0x1b0) =
             (*(float *)(lVar1 + 0xa0) - *(float *)(lVar1 + 0x1b0)) * fVar4 +
             *(float *)(lVar1 + 0x1b0);
        *(float *)(lVar1 + 0x1b4) =
             (*(float *)(lVar1 + 0xa4) - *(float *)(lVar1 + 0x1b4)) * fVar4 +
             *(float *)(lVar1 + 0x1b4);
        *(float *)(lVar1 + 0x1b8) =
             (*(float *)(lVar1 + 0xa8) - *(float *)(lVar1 + 0x1b8)) * fVar4 +
             *(float *)(lVar1 + 0x1b8);
        *(float *)(lVar1 + 0x1bc) =
             (*(float *)(lVar1 + 0xac) - *(float *)(lVar1 + 0x1bc)) * fVar4 +
             *(float *)(lVar1 + 0x1bc);
        *(float *)(lVar1 + 0x1c0) =
             (*(float *)(lVar1 + 0xb0) - *(float *)(lVar1 + 0x1c0)) * fVar4 +
             *(float *)(lVar1 + 0x1c0);
        *(float *)(lVar1 + 0x1c4) =
             (*(float *)(lVar1 + 0xb4) - *(float *)(lVar1 + 0x1c4)) * fVar4 +
             *(float *)(lVar1 + 0x1c4);
        *(float *)(lVar1 + 0x1c8) =
             (*(float *)(lVar1 + 0xb8) - *(float *)(lVar1 + 0x1c8)) * fVar4 +
             *(float *)(lVar1 + 0x1c8);
        *(float *)(lVar1 + 0x1cc) =
             (*(float *)(lVar1 + 0xbc) - *(float *)(lVar1 + 0x1cc)) * fVar4 +
             *(float *)(lVar1 + 0x1cc);
        *(float *)(lVar1 + 0x1d0) =
             (*(float *)(lVar1 + 0xc0) - *(float *)(lVar1 + 0x1d0)) * fVar4 +
             *(float *)(lVar1 + 0x1d0);
        *(float *)(lVar1 + 0x1d4) =
             (*(float *)(lVar1 + 0xc4) - *(float *)(lVar1 + 0x1d4)) * fVar4 +
             *(float *)(lVar1 + 0x1d4);
        *(float *)(lVar1 + 0x1d8) =
             (*(float *)(lVar1 + 200) - *(float *)(lVar1 + 0x1d8)) * fVar4 +
             *(float *)(lVar1 + 0x1d8);
        *(float *)(lVar1 + 0x1dc) =
             (*(float *)(lVar1 + 0xcc) - *(float *)(lVar1 + 0x1dc)) * fVar4 +
             *(float *)(lVar1 + 0x1dc);
        *(float *)(lVar1 + 0x200) =
             (*(float *)(lVar1 + 0xf0) - *(float *)(lVar1 + 0x200)) * fVar4 +
             *(float *)(lVar1 + 0x200);
        *(float *)(lVar1 + 0x204) =
             (*(float *)(lVar1 + 0xf4) - *(float *)(lVar1 + 0x204)) * fVar4 +
             *(float *)(lVar1 + 0x204);
        *(float *)(lVar1 + 0x208) =
             (*(float *)(lVar1 + 0xf8) - *(float *)(lVar1 + 0x208)) * fVar4 +
             *(float *)(lVar1 + 0x208);
        *(float *)(lVar1 + 0x20c) =
             (*(float *)(lVar1 + 0xfc) - *(float *)(lVar1 + 0x20c)) * fVar4 +
             *(float *)(lVar1 + 0x20c);
        *(float *)(lVar1 + 0x1e0) =
             (*(float *)(lVar1 + 0xd0) - *(float *)(lVar1 + 0x1e0)) * fVar4 +
             *(float *)(lVar1 + 0x1e0);
        *(float *)(lVar1 + 0x1e4) =
             (*(float *)(lVar1 + 0xd4) - *(float *)(lVar1 + 0x1e4)) * fVar4 +
             *(float *)(lVar1 + 0x1e4);
        *(float *)(lVar1 + 0x1e8) =
             (*(float *)(lVar1 + 0xd8) - *(float *)(lVar1 + 0x1e8)) * fVar4 +
             *(float *)(lVar1 + 0x1e8);
        *(float *)(lVar1 + 0x1ec) =
             (*(float *)(lVar1 + 0xdc) - *(float *)(lVar1 + 0x1ec)) * fVar4 +
             *(float *)(lVar1 + 0x1ec);
        *(float *)(lVar1 + 0x210) =
             (*(float *)(lVar1 + 0x100) - *(float *)(lVar1 + 0x210)) * fVar4 +
             *(float *)(lVar1 + 0x210);
        *(float *)(lVar1 + 0x214) =
             (*(float *)(lVar1 + 0x104) - *(float *)(lVar1 + 0x214)) * fVar4 +
             *(float *)(lVar1 + 0x214);
        *(float *)(lVar1 + 0x218) =
             (*(float *)(lVar1 + 0x108) - *(float *)(lVar1 + 0x218)) * fVar4 +
             *(float *)(lVar1 + 0x218);
        *(float *)(lVar1 + 0x21c) =
             (*(float *)(lVar1 + 0x10c) - *(float *)(lVar1 + 0x21c)) * fVar4 +
             *(float *)(lVar1 + 0x21c);
        *(float *)(lVar1 + 0x1f0) =
             (*(float *)(lVar1 + 0xe0) - *(float *)(lVar1 + 0x1f0)) * fVar4 +
             *(float *)(lVar1 + 0x1f0);
        *(float *)(lVar1 + 500) =
             (*(float *)(lVar1 + 0xe4) - *(float *)(lVar1 + 500)) * fVar4 + *(float *)(lVar1 + 500);
        *(float *)(lVar1 + 0x1f8) =
             (*(float *)(lVar1 + 0xe8) - *(float *)(lVar1 + 0x1f8)) * fVar4 +
             *(float *)(lVar1 + 0x1f8);
        *(float *)(lVar1 + 0x1fc) =
             (*(float *)(lVar1 + 0xec) - *(float *)(lVar1 + 0x1fc)) * fVar4 +
             *(float *)(lVar1 + 0x1fc);
        *(float *)(lVar1 + 0x220) =
             (*(float *)(lVar1 + 0x110) - *(float *)(lVar1 + 0x220)) * fVar4 +
             *(float *)(lVar1 + 0x220);
        *(float *)(lVar1 + 0x224) =
             (*(float *)(lVar1 + 0x114) - *(float *)(lVar1 + 0x224)) * fVar4 +
             *(float *)(lVar1 + 0x224);
        *(float *)(lVar1 + 0x228) =
             (*(float *)(lVar1 + 0x118) - *(float *)(lVar1 + 0x228)) * fVar4 +
             *(float *)(lVar1 + 0x228);
        *(float *)(lVar1 + 0x22c) =
             (*(float *)(lVar1 + 0x11c) - *(float *)(lVar1 + 0x22c)) * fVar4 +
             *(float *)(lVar1 + 0x22c);
        *(float *)(lVar1 + 0x230) =
             (*(float *)(lVar1 + 0x120) - *(float *)(lVar1 + 0x230)) * fVar4 +
             *(float *)(lVar1 + 0x230);
        *(float *)(lVar1 + 0x234) =
             (*(float *)(lVar1 + 0x124) - *(float *)(lVar1 + 0x234)) * fVar4 +
             *(float *)(lVar1 + 0x234);
        *(float *)(lVar1 + 0x238) =
             (*(float *)(lVar1 + 0x128) - *(float *)(lVar1 + 0x238)) * fVar4 +
             *(float *)(lVar1 + 0x238);
        *(float *)(lVar1 + 0x23c) =
             (*(float *)(lVar1 + 300) - *(float *)(lVar1 + 0x23c)) * fVar4 +
             *(float *)(lVar1 + 0x23c);
        *(float *)(lVar1 + 0x240) =
             (*(float *)(lVar1 + 0x130) - *(float *)(lVar1 + 0x240)) * fVar4 +
             *(float *)(lVar1 + 0x240);
        fVar8 = *(float *)(lVar1 + 0x25c);
        fVar6 = *(float *)(lVar1 + 0x14c);
        fVar5 = fVar8 * *(float *)(lVar1 + 0x250);
        fVar7 = fVar8 * *(float *)(lVar1 + 600);
        fVar8 = fVar8 * *(float *)(lVar1 + 0x254);
        fVar7 = (fVar6 * *(float *)(lVar1 + 0x148) - fVar7) * fVar4 + fVar7;
        fVar5 = (fVar6 * *(float *)(lVar1 + 0x140) - fVar5) * fVar4 + fVar5;
        fVar8 = (fVar6 * *(float *)(lVar1 + 0x144) - fVar8) * fVar4 + fVar8;
        fVar4 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar7 * fVar7);
        fVar6 = fVar4;
        if (fVar4 <= 0.0001) {
          fVar6 = 0.0001;
        }
        fVar6 = 1.0 / fVar6;
        *(float *)(lVar1 + 0x250) = fVar6 * fVar5;
        *(float *)(lVar1 + 0x254) = fVar6 * fVar8;
        *(float *)(lVar1 + 600) = fVar7 * fVar6;
        *(float *)(lVar1 + 0x25c) = fVar4;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 141b79ab0 FUN_141b79ab0 body=1248 status=ok
// SIG undefined FUN_141b79ab0(void)

void FUN_141b79ab0(longlong *param_1,undefined8 param_2,float param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  void *_Dst;
  void *_Src;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar15;
  void *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong uVar14;
  
  uVar10 = 0;
  iVar15 = (int)param_1[1];
  local_f8 = (void *)0x0;
  local_f0 = 0;
  uVar12 = uVar10;
  local_e8 = param_2;
  if (iVar15 * DAT_1464c1f34 != 0) {
    FUN_141b6cd70(&local_f8);
    iVar15 = (int)param_1[1];
    uVar12 = local_f0 & 0xffffffff;
  }
  uVar11 = (uint)uVar12;
  _Src = local_f8;
  if (0 < iVar15) {
    fVar7 = (float)local_e8;
    fVar8 = local_e8._4_4_;
    local_d8 = (float)local_e8 * param_3;
    fStack_d4 = local_e8._4_4_ * param_3;
    fStack_c0 = (float)local_e8;
    fStack_bc = local_e8._4_4_;
    uVar14 = uVar10;
    do {
      lVar5 = *param_1;
      iVar15 = (int)uVar12 + 1;
      pfVar1 = (float *)(uVar10 + lVar5);
      fStack_b4 = pfVar1[1];
      fStack_b0 = pfVar1[2];
      fStack_ac = pfVar1[3];
      iVar9 = 1;
      if (1 < *(int *)(uVar10 + 0x78 + lVar5)) {
        iVar9 = -1;
      }
      local_b8 = *pfVar1 * (float)iVar9;
      if (local_f0._4_4_ < iVar15) {
        local_f0._0_4_ = iVar15;
        FUN_141b6cac0(&local_f8,uVar12);
        _Src = local_f8;
        iVar15 = (uint)local_f0;
      }
      local_f0._0_4_ = iVar15 + 1;
      puVar2 = (undefined8 *)((longlong)_Src + (longlong)(int)uVar12 * 0x10);
      *puVar2 = CONCAT44(fStack_b4,local_b8);
      puVar2[1] = CONCAT44(fStack_ac,fStack_b0);
      iVar9 = (uint)local_f0;
      if (local_f0._4_4_ < (int)(uint)local_f0) {
        FUN_141b6cac0(&local_f8,iVar15);
        _Src = local_f8;
        iVar9 = (uint)local_f0;
      }
      puVar4 = (undefined8 *)(uVar10 + 0x10 + lVar5);
      uVar6 = puVar4[1];
      local_f0._0_4_ = iVar9 + 1;
      puVar2 = (undefined8 *)((longlong)_Src + (longlong)iVar15 * 0x10);
      *puVar2 = *puVar4;
      puVar2[1] = uVar6;
      fStack_cc = fVar8 * *(float *)(uVar10 + 100 + lVar5);
      fStack_d0 = fVar7 * *(float *)(uVar10 + 0x60 + lVar5);
      iVar15 = (uint)local_f0;
      if (local_f0._4_4_ < (int)(uint)local_f0) {
        FUN_141b6cac0(&local_f8,iVar9);
        _Src = local_f8;
        iVar15 = (uint)local_f0;
      }
      local_f0._0_4_ = iVar15 + 1;
      puVar2 = (undefined8 *)((longlong)_Src + (longlong)iVar9 * 0x10);
      *puVar2 = CONCAT44(fStack_d4,local_d8);
      puVar2[1] = CONCAT44(fStack_cc,fStack_d0);
      local_c8 = (float)(*(int *)(uVar10 + 0x70 + lVar5) - *(int *)(uVar10 + 0x68 + lVar5));
      fStack_c4 = (float)(*(int *)(uVar10 + 0x74 + lVar5) - *(int *)(uVar10 + 0x6c + lVar5));
      if (local_f0._4_4_ < (int)(uint)local_f0) {
        FUN_141b6cac0(&local_f8,iVar15);
        _Src = local_f8;
      }
      iVar9 = (uint)local_f0;
      lVar3 = uVar10 + lVar5;
      puVar2 = (undefined8 *)((longlong)_Src + (longlong)iVar15 * 0x10);
      *puVar2 = CONCAT44(fStack_c4,local_c8);
      puVar2[1] = CONCAT44(fStack_bc,fStack_c0);
      FMatrix::Inverse(lVar3 + 0x20,&local_a8);
      local_f0._0_4_ = iVar9 + 1;
      iVar15 = (uint)local_f0;
      if (local_f0._4_4_ < (int)(uint)local_f0) {
        FUN_141b6cac0(&local_f8,iVar9);
        _Src = local_f8;
        iVar15 = (uint)local_f0;
      }
      local_f0._0_4_ = iVar15 + 1;
      puVar2 = (undefined8 *)((longlong)_Src + (longlong)iVar9 * 0x10);
      *puVar2 = local_a8;
      puVar2[1] = uStack_a0;
      iVar9 = (uint)local_f0;
      if (local_f0._4_4_ < (int)(uint)local_f0) {
        FUN_141b6cac0(&local_f8,iVar15);
        _Src = local_f8;
        iVar9 = (uint)local_f0;
      }
      local_f0._0_4_ = iVar9 + 1;
      puVar2 = (undefined8 *)((longlong)_Src + (longlong)iVar15 * 0x10);
      *puVar2 = local_98;
      puVar2[1] = uStack_90;
      iVar15 = (uint)local_f0;
      if (local_f0._4_4_ < (int)(uint)local_f0) {
        FUN_141b6cac0(&local_f8,iVar9);
        _Src = local_f8;
        iVar15 = (uint)local_f0;
      }
      local_f0._0_4_ = iVar15 + 1;
      puVar2 = (undefined8 *)((longlong)_Src + (longlong)iVar9 * 0x10);
      *puVar2 = local_88;
      puVar2[1] = uStack_80;
      iVar9 = (uint)local_f0;
      if (local_f0._4_4_ < (int)(uint)local_f0) {
        FUN_141b6cac0(&local_f8,iVar15);
        _Src = local_f8;
        iVar9 = (uint)local_f0;
      }
      local_f0._0_4_ = iVar9 + 1;
      puVar2 = (undefined8 *)((longlong)_Src + (longlong)iVar15 * 0x10);
      *puVar2 = local_78;
      puVar2[1] = uStack_70;
      iVar15 = (uint)local_f0;
      if (local_f0._4_4_ < (int)(uint)local_f0) {
        FUN_141b6cac0(&local_f8,iVar9);
        _Src = local_f8;
        iVar15 = (uint)local_f0;
      }
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
      local_f0._0_4_ = iVar15 + 1;
      puVar2 = (undefined8 *)((longlong)_Src + (longlong)iVar9 * 0x10);
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      puVar2[1] = uVar6;
      iVar9 = (uint)local_f0;
      if (local_f0._4_4_ < (int)(uint)local_f0) {
        FUN_141b6cac0(&local_f8,iVar15);
        _Src = local_f8;
        iVar9 = (uint)local_f0;
      }
      puVar4 = (undefined8 *)(uVar10 + 0x30 + lVar5);
      uVar6 = puVar4[1];
      local_f0._0_4_ = iVar9 + 1;
      puVar2 = (undefined8 *)((longlong)_Src + (longlong)iVar15 * 0x10);
      *puVar2 = *puVar4;
      puVar2[1] = uVar6;
      iVar15 = (uint)local_f0;
      if (local_f0._4_4_ < (int)(uint)local_f0) {
        FUN_141b6cac0(&local_f8,iVar9);
        _Src = local_f8;
        iVar15 = (uint)local_f0;
      }
      puVar4 = (undefined8 *)(uVar10 + 0x40 + lVar5);
      uVar6 = puVar4[1];
      uVar11 = iVar15 + 1;
      local_f0 = CONCAT44(local_f0._4_4_,uVar11);
      puVar2 = (undefined8 *)((longlong)_Src + (longlong)iVar9 * 0x10);
      *puVar2 = *puVar4;
      puVar2[1] = uVar6;
      if (local_f0._4_4_ < (int)uVar11) {
        FUN_141b6cac0(&local_f8,iVar15);
        _Src = local_f8;
        uVar11 = (uint)local_f0;
      }
      uVar12 = (ulonglong)uVar11;
      puVar4 = (undefined8 *)(uVar10 + 0x50 + lVar5);
      uVar6 = puVar4[1];
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar10 = uVar10 + 0x90;
      puVar2 = (undefined8 *)((longlong)_Src + (longlong)iVar15 * 0x10);
      *puVar2 = *puVar4;
      puVar2[1] = uVar6;
    } while ((int)uVar13 < (int)param_1[1]);
  }
  if (DAT_1464c1f38 < (int)uVar11) {
    DAT_1464c1f38 = (int)(uVar11 * 5 + ((int)(uVar11 * 5) >> 0x1f & 3U)) >> 2;
    TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1464c1f40,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1464c1f48,0);
    FUN_141b34cc0(&DAT_1464c1f30);
  }
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                           (DAT_146ab6358,&DAT_146ab6e78,DAT_1464c1f40,0,
                            *(undefined4 *)(DAT_1464c1f40 + 0x18),1);
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)(uVar11 << 4));
                    /* WARNING: Could not recover jumptable at 0x000141b79f89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,DAT_1464c1f40);
  return;
}



// FUNCTION 141b79f90 FUN_141b79f90 body=865 status=ok
// SIG undefined FUN_141b79f90(void)

ulonglong FUN_141b79f90(longlong *param_1,undefined8 param_2,float param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int iVar12;
  void *_Dst;
  int iVar13;
  int iVar14;
  void *_Src;
  int iVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  int local_res20;
  float local_c8;
  float fStack_c4;
  void *local_c0;
  undefined8 local_b8;
  float local_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  local_b8._0_4_ = 0;
  iVar12 = (int)param_1[1];
  local_c0 = (void *)0x0;
  local_b8 = 0;
  if (iVar12 * DAT_1464c1ee4 != 0) {
    FUN_141b6cd70(&local_c0);
    iVar12 = (int)param_1[1];
  }
  local_res20 = 0;
  _Src = local_c0;
  iVar14 = (int)local_b8;
  if (0 < iVar12) {
    lVar17 = 0;
    fStack_c4 = (float)((ulonglong)param_2 >> 0x20);
    local_c8 = (float)param_2;
    do {
      lVar7 = *param_1;
      iVar15 = 0;
      iVar12 = *(int *)(lVar17 + 0x78 + lVar7);
      if (0 < iVar12) {
        do {
          iVar16 = 0;
          if (0 < iVar12) {
            uStack_a0 = 0;
            fStack_a4 = (float)iVar15;
            do {
              iVar12 = iVar14 + 1;
              fVar18 = (float)iVar16;
              local_a8 = fVar18;
              if (local_b8._4_4_ < iVar12) {
                local_b8._0_4_ = iVar12;
                FUN_141b6cac0(&local_c0,iVar14);
                _Src = local_c0;
                iVar12 = (int)local_b8;
              }
              local_b8._0_4_ = iVar12 + 1;
              pfVar1 = (float *)((longlong)_Src + (longlong)iVar14 * 0x10);
              *pfVar1 = local_a8;
              pfVar1[1] = fStack_a4;
              pfVar1[2] = (float)uStack_a0;
              pfVar1[3] = uStack_a0._4_4_;
              iVar13 = (int)local_b8;
              if (local_b8._4_4_ < (int)local_b8) {
                FUN_141b6cac0(&local_c0,iVar12);
                _Src = local_c0;
                iVar13 = (int)local_b8;
              }
              puVar4 = (undefined4 *)(lVar17 + 0x80 + lVar7);
              uVar8 = puVar4[1];
              uVar9 = puVar4[2];
              uVar10 = puVar4[3];
              local_b8._0_4_ = iVar13 + 1;
              puVar2 = (undefined4 *)((longlong)_Src + (longlong)iVar12 * 0x10);
              *puVar2 = *puVar4;
              puVar2[1] = uVar8;
              puVar2[2] = uVar9;
              puVar2[3] = uVar10;
              iVar12 = (int)local_b8;
              if (local_b8._4_4_ < (int)local_b8) {
                FUN_141b6cac0(&local_c0,iVar13);
                _Src = local_c0;
                iVar12 = (int)local_b8;
              }
              uVar11 = ((undefined8 *)(lVar17 + lVar7))[1];
              iVar14 = iVar12 + 1;
              local_b8 = CONCAT44(local_b8._4_4_,iVar14);
              puVar3 = (undefined8 *)((longlong)_Src + (longlong)iVar13 * 0x10);
              *puVar3 = *(undefined8 *)(lVar17 + lVar7);
              puVar3[1] = uVar11;
              fVar5 = *(float *)(lVar17 + 0x80 + lVar7);
              fVar6 = *(float *)(lVar17 + 0x84 + lVar7);
              fStack_90 = (fVar5 * fVar18 * param_3 + *(float *)(lVar17 + 0x60 + lVar7)) * local_c8;
              fStack_8c = (fVar6 * (float)iVar15 * param_3 + *(float *)(lVar17 + 100 + lVar7)) *
                          fStack_c4;
              local_98 = fVar5 * local_c8 * param_3;
              fStack_94 = fVar6 * fStack_c4 * param_3;
              if (local_b8._4_4_ < iVar14) {
                FUN_141b6cac0(&local_c0,iVar12);
                _Src = local_c0;
                iVar14 = (int)local_b8;
              }
              iVar16 = iVar16 + 1;
              pfVar1 = (float *)((longlong)_Src + (longlong)iVar12 * 0x10);
              *pfVar1 = local_98;
              pfVar1[1] = fStack_94;
              pfVar1[2] = fStack_90;
              pfVar1[3] = fStack_8c;
              iVar12 = *(int *)(lVar17 + 0x78 + lVar7);
            } while (iVar16 < iVar12);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar12);
      }
      local_res20 = local_res20 + 1;
      lVar17 = lVar17 + 0x90;
    } while (local_res20 < (int)param_1[1]);
  }
  if (DAT_1464c1ee8 < iVar14) {
    DAT_1464c1ee8 = (int)(iVar14 * 5 + (iVar14 * 5 >> 0x1f & 3U)) >> 2;
    TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1464c1ef0,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1464c1ef8,0);
    FUN_141b34cc0(&DAT_1464c1ee0);
  }
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                           (DAT_146ab6358,&DAT_146ab6e78,DAT_1464c1ef0,0,
                            *(undefined4 *)(DAT_1464c1ef0 + 0x18),1);
  _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)(uint)(iVar14 << 4));
  (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,DAT_1464c1ef0);
  return (longlong)iVar14 / (longlong)DAT_1464c1ee4 & 0xffffffff;
}



// FUNCTION 141b7a300 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FForwardLightData::zzGetMembersBefore(longlong *param_1)

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
  *puVar3 = L"NumLocalLights";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 3;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 1;
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
  *puVar3 = L"NumReflectionCaptures";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 4;
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
  *puVar3 = L"HasDirectionalLight";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 8;
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
  *puVar3 = L"NumGridCells";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0xc;
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
  *puVar3 = L"CulledGridSize";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x200000010;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 3;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141b7a560 zzGetMembersBefore body=521 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FForwardLightData::zzGetMembersBefore(longlong *param_1)

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
  *puVar1 = L"StaticShadowmapSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 600;
  puVar2[1] = 8;
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
  *puVar1 = L"ForwardLocalLightBuffer";
  puVar1[1] = L"StrongTypedBuffer<float4>";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x260;
  puVar2[1] = 6;
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
  *puVar1 = L"NumCulledLightsGrid";
  puVar1[1] = L"StrongTypedBuffer<uint>";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x268;
  puVar2[1] = 6;
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
  *puVar1 = L"CulledLightDataGrid";
  puVar1[1] = L"StrongTypedBuffer<uint>";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x600000270;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7a770 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FForwardLightData::zzGetMembersBefore(longlong *param_1)

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
  *puVar1 = L"MaxCulledLightsPerCell";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1c;
  puVar2[1] = 3;
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
  *puVar1 = L"LightGridPixelSizeShift";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x20;
  puVar2[1] = 3;
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
  *puVar1 = L"LightGridZParams";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x30;
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
  *puVar1 = L"DirectionalLightDirection";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000040;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7a970 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FForwardLightData::zzGetMembersBefore(longlong *param_1)

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
  *puVar1 = L"DirectionalLightColor";
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
  *puVar1 = L"DirectionalLightVolumetricScatteringIntensity";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x5c;
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
  *puVar1 = L"DirectionalLightShadowMapChannelMask";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x60;
  puVar2[1] = 3;
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
  *puVar1 = L"DirectionalLightDistanceFadeMAD";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000068;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 2;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7ab70 zzGetMembersBefore body=519 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FForwardLightData::zzGetMembersBefore(longlong *param_1)

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
  *puVar1 = L"NumDirectionalLightCascades";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x70;
  puVar2[1] = 3;
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
  *puVar1 = L"CascadeEndDepths";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x80;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
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
  *puVar1 = L"DirectionalLightWorldToShadowMatrix";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x90;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 4;
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
  *puVar1 = L"DirectionalLightShadowmapMinMax";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000190;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 0x400000004;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7ad80 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FForwardLightData::zzGetMembersBefore(longlong *param_1)

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
  *puVar1 = L"DirectionalLightShadowmapAtlasBufferSize";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1d0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
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
  *puVar1 = L"DirectionalLightDepthBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1e0;
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
  *puVar1 = L"DirectionalLightUseStaticShadowing";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1e4;
  puVar2[1] = 3;
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
  *puVar1 = L"DirectionalLightStaticShadowBufferSize";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000001f0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7af80 zzGetMembersBefore body=521 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FForwardLightData::zzGetMembersBefore(longlong *param_1)

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
  *puVar1 = L"DirectionalLightWorldToStaticShadow";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x200;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
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
  *puVar1 = L"DirectionalLightShadowmapAtlas";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x240;
  puVar2[1] = 9;
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
  *puVar1 = L"ShadowmapSampler";
  puVar1[1] = L"SamplerState";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x248;
  puVar2[1] = 8;
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
  *puVar1 = L"DirectionalLightStaticShadowmap";
  puVar1[1] = L"Texture2D";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x900000250;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7b190 FUN_141b7b190 body=507 status=ok
// SIG undefined FUN_141b7b190(void)

longlong * FUN_141b7b190(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b7b790(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"FogDistanceFalloff";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 300;
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
  *puVar1 = L"HorizonDistance";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x130;
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
  *puVar1 = L"CirrusDensity";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x134;
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
  *puVar1 = L"CirrusHeight";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000138;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7b390 FUN_141b7b390 body=507 status=ok
// SIG undefined FUN_141b7b390(void)

longlong * FUN_141b7b390(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b7b190(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CirrusScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x13c;
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
  *puVar1 = L"CirrusWindDirectionOverride";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x140;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
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
  *puVar1 = L"WindDirectionOverride";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x150;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
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
  *puVar1 = L"CirrusWindSpeedOverride";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000160;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7b590 FUN_141b7b590 body=507 status=ok
// SIG undefined FUN_141b7b590(void)

longlong * FUN_141b7b590(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b7c7f0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GroundOffset";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xdc;
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
  *puVar1 = L"RayCenter";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xe0;
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
  *puVar1 = L"WindVector";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xf0;
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
  *puVar1 = L"CirrusWindVector";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000100;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7b790 FUN_141b7b790 body=507 status=ok
// SIG undefined FUN_141b7b790(void)

longlong * FUN_141b7b790(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b7b590(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SunColor";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x110;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
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
  *puVar1 = L"SampleCount";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x120;
  puVar2[1] = 2;
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
  *puVar1 = L"CloudHeight";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x124;
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
  *puVar1 = L"CloudThickness";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000128;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7b990 FUN_141b7b990 body=507 status=ok
// SIG undefined FUN_141b7b990(void)

longlong * FUN_141b7b990(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b7bd90(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"FrameUpdateMod";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x2c;
  puVar2[1] = 2;
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
  *puVar1 = L"FrameUpdateModSeq";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x30;
  puVar2[1] = 2;
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
  *puVar1 = L"UpdateDistribution";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x34;
  puVar2[1] = 2;
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
  *puVar1 = L"CubeMapResolution";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000040;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7bb90 FUN_141b7bb90 body=507 status=ok
// SIG undefined FUN_141b7bb90(void)

longlong * FUN_141b7bb90(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b7bff0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"NoiseScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x174;
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
  *puVar1 = L"HighFreqNoiseBreakup";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x178;
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
  *puVar1 = L"LowFreqNoiseBreakup";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x17c;
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
  *puVar1 = L"CurlNoiseStrength";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000180;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7bd90 FUN_141b7bd90 body=598 status=ok
// SIG undefined FUN_141b7bd90(void)

longlong * FUN_141b7bd90(longlong *param_1)

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
  *puVar3 = L"SunLightColor";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 4;
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
  *puVar3 = L"SunVector";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
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
  *puVar3 = L"TimeScale";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 4;
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
  *puVar3 = L"GameTime";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x24;
  puVar1[1] = 4;
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
  *puVar3 = L"FrameNumber";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x200000028;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141b7bff0 FUN_141b7bff0 body=507 status=ok
// SIG undefined FUN_141b7bff0(void)

longlong * FUN_141b7bff0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b7b390(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindSpeedOverride";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x164;
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
  *puVar1 = L"Coverage";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x168;
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
  *puVar1 = L"Density";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x16c;
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
  *puVar1 = L"HighFreqNoiseScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000170;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7c1f0 FUN_141b7c1f0 body=507 status=ok
// SIG undefined FUN_141b7c1f0(void)

longlong * FUN_141b7c1f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b7c3f0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"HGScatterringConstant";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1e0;
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
  *puVar1 = L"ShadowStepSize";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1e4;
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
  *puVar1 = L"ConeSizeMultiplier";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1e8;
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
  *puVar1 = L"PowderSugarBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000001ec;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7c3f0 FUN_141b7c3f0 body=507 status=ok
// SIG undefined FUN_141b7c3f0(void)

longlong * FUN_141b7c3f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b7c5f0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AmbientColor";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1a0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
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
  *puVar1 = L"CirrusCloudColor";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1b0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
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
  *puVar1 = L"LightExtinctionColor";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1c0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
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
  *puVar1 = L"ShadowDensity";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000001d0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7c5f0 FUN_141b7c5f0 body=507 status=ok
// SIG undefined FUN_141b7c5f0(void)

longlong * FUN_141b7c5f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b7bb90(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CurlNoiseScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x184;
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
  *puVar1 = L"Shear";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x188;
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
  *puVar1 = L"WeatherMapScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x18c;
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
  *puVar1 = L"SunLightColorOverride";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000190;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7c7f0 FUN_141b7c7f0 body=507 status=ok
// SIG undefined FUN_141b7c7f0(void)

longlong * FUN_141b7c7f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b7c9f0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"TempFloatsA";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
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
  *puVar1 = L"TempFloatsB";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xb0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
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
  *puVar1 = L"TempIntsA";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xc0;
  puVar2[1] = 2;
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
  *puVar1 = L"TempIntsB";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x2000000d0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7c9f0 FUN_141b7c9f0 body=507 status=ok
// SIG undefined FUN_141b7c9f0(void)

longlong * FUN_141b7c9f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_141b7b990(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"InvViewProjectionMatrix";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x50;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
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
  *puVar1 = L"NegativeZThreshold";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x90;
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
  *puVar1 = L"DepthMode";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x94;
  puVar2[1] = 2;
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
  *puVar1 = L"bUseAlphaForSkyEnvMapComp";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x200000098;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 141b7cbf0 FUN_141b7cbf0 body=63 status=ok
// SIG undefined FUN_141b7cbf0(void)

undefined1 FUN_141b7cbf0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_141ad3f10(param_1 + 0x150,param_2);
  return uVar1;
}



// FUNCTION 141b7cc30 FUN_141b7cc30 body=138 status=ok
// SIG undefined FUN_141b7cc30(void)

undefined1 FUN_141b7cc30(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_141ad3f10(param_1 + 0x150,param_2);
  FUN_1419e0a40(param_2,param_1 + 0x158);
  FUN_1419e0a40(param_2,param_1 + 0x15e);
  FUN_1419e0a40(param_2,param_1 + 0x164);
  FUN_1419e0a40(param_2,param_1 + 0x16a);
  FUN_1419e0a40(param_2,param_1 + 0x170);
  return uVar1;
}



// FUNCTION 141b7cd20 FUN_141b7cd20 body=104 status=ok
// SIG undefined FUN_141b7cd20(void)

void FUN_141b7cd20(longlong param_1)

{
  undefined1 local_res8 [8];
  
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,local_res8,*(longlong *)(param_1 + 0x40),&DAT_146a275f8,
               *(undefined4 *)(param_1 + 0x30));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  return;
}



// FUNCTION 141b7cda0 FUN_141b7cda0 body=89 status=ok
// SIG undefined FUN_141b7cda0(void)

undefined8 * FUN_141b7cda0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e08918;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141b7ce00 FUN_141b7ce00 body=376 status=ok
// SIG undefined FUN_141b7ce00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b7ce00(longlong param_1)

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
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d0;
  undefined8 local_2c8 [86];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  FUN_141b8b940(local_2c8);
  local_2d0 = 0;
  local_2e0 = 0;
  local_2f0 = 0;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = &local_2e8;
  local_2e8 = 0;
  FUN_141b9c610(DAT_1464c9c14,local_2c8,0,0);
  puVar14 = *(undefined8 **)(param_1 + 0x40);
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)FMemory::Malloc(0x2b0,0x10);
    *(undefined8 **)(param_1 + 0x40) = puVar14;
  }
  lVar17 = 5;
  puVar13 = local_2c8;
  do {
    puVar16 = puVar13;
    puVar15 = puVar14;
    uVar9 = puVar16[1];
    uVar10 = puVar16[2];
    uVar11 = puVar16[3];
    *puVar15 = *puVar16;
    puVar15[1] = uVar9;
    uVar9 = puVar16[4];
    uVar12 = puVar16[5];
    puVar15[2] = uVar10;
    puVar15[3] = uVar11;
    uVar10 = puVar16[6];
    uVar11 = puVar16[7];
    puVar15[4] = uVar9;
    puVar15[5] = uVar12;
    uVar9 = puVar16[8];
    uVar12 = puVar16[9];
    puVar15[6] = uVar10;
    puVar15[7] = uVar11;
    uVar10 = puVar16[10];
    uVar11 = puVar16[0xb];
    puVar15[8] = uVar9;
    puVar15[9] = uVar12;
    uVar9 = puVar16[0xc];
    uVar12 = puVar16[0xd];
    puVar15[10] = uVar10;
    puVar15[0xb] = uVar11;
    uVar10 = puVar16[0xe];
    uVar11 = puVar16[0xf];
    puVar15[0xc] = uVar9;
    puVar15[0xd] = uVar12;
    puVar15[0xe] = uVar10;
    puVar15[0xf] = uVar11;
    lVar17 = lVar17 + -1;
    puVar14 = puVar15 + 0x10;
    puVar13 = puVar16 + 0x10;
  } while (lVar17 != 0);
  uVar9 = puVar16[0x11];
  uVar1 = *(undefined4 *)(puVar16 + 0x12);
  uVar2 = *(undefined4 *)((longlong)puVar16 + 0x94);
  uVar3 = *(undefined4 *)(puVar16 + 0x13);
  uVar4 = *(undefined4 *)((longlong)puVar16 + 0x9c);
  puVar15[0x10] = puVar16[0x10];
  puVar15[0x11] = uVar9;
  uVar5 = *(undefined4 *)(puVar16 + 0x14);
  uVar6 = *(undefined4 *)((longlong)puVar16 + 0xa4);
  uVar7 = *(undefined4 *)(puVar16 + 0x15);
  uVar8 = *(undefined4 *)((longlong)puVar16 + 0xac);
  *(undefined4 *)(puVar15 + 0x12) = uVar1;
  *(undefined4 *)((longlong)puVar15 + 0x94) = uVar2;
  *(undefined4 *)(puVar15 + 0x13) = uVar3;
  *(undefined4 *)((longlong)puVar15 + 0x9c) = uVar4;
  *(undefined4 *)(puVar15 + 0x14) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0xa4) = uVar6;
  *(undefined4 *)(puVar15 + 0x15) = uVar7;
  *(undefined4 *)((longlong)puVar15 + 0xac) = uVar8;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    local_308 = (undefined8 *)CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x30));
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,&local_2e8,*(longlong *)(param_1 + 0x40),&DAT_146a275f8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,&local_2e8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2e8);
  }
  return;
}



// FUNCTION 141b7cf80 FUN_141b7cf80 body=104 status=ok
// SIG undefined FUN_141b7cf80(void)

undefined8 * FUN_141b7cf80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e089c8;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_144e08918;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141b7cff0 Serialize body=89 status=ok
// SIG undefined Serialize(void)

undefined1 FCompositeMonoscopicFarFieldViewPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_141ad3f10(param_1 + 0xd0,param_2);
  return 0;
}



// FUNCTION 141b7d090 FUN_141b7d090 body=596 status=ok
// SIG undefined FUN_141b7d090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b7d090(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_f8 [32];
  int local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined **local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  uint local_98;
  int local_90 [2];
  longlong local_88;
  undefined8 local_78;
  undefined ***local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_b8 = &PTR_GetBoundProgramCounterForTimerManager_144e09148;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  iVar7 = 0xd;
  local_98 = 0;
  local_88 = param_1;
  do {
    iVar4 = 0;
    local_90[0] = (local_98 & 0xffff) * 0xd;
    do {
      lVar6 = (longlong)(int)local_a8;
      sVar3 = (short)iVar4 + (short)local_90[0];
      iVar2 = (int)local_a8 + 1;
      local_a8._0_4_ = iVar2;
      if (local_a8._4_4_ < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      *(short *)(local_b0 + lVar6 * 2) = sVar3;
      sVar5 = (short)iVar4 + (short)iVar7;
      lVar6 = (longlong)(int)local_a8;
      local_a8._0_4_ = (int)local_a8 + 1;
      if (local_a8._4_4_ < (int)local_a8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      sVar3 = sVar3 + 1;
      *(short *)(local_b0 + lVar6 * 2) = sVar5;
      lVar6 = (longlong)(int)local_a8;
      local_a8._0_4_ = (int)local_a8 + 1;
      if (local_a8._4_4_ < (int)local_a8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      *(short *)(local_b0 + lVar6 * 2) = sVar3;
      lVar6 = (longlong)(int)local_a8;
      local_a8._0_4_ = (int)local_a8 + 1;
      if (local_a8._4_4_ < (int)local_a8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      *(short *)(local_b0 + lVar6 * 2) = sVar5;
      lVar6 = (longlong)(int)local_a8;
      local_a8._0_4_ = (int)local_a8 + 1;
      if (local_a8._4_4_ < (int)local_a8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      *(short *)(local_b0 + lVar6 * 2) = sVar5 + 1;
      lVar6 = (longlong)(int)local_a8;
      local_a8._0_4_ = (int)local_a8 + 1;
      if (local_a8._4_4_ < (int)local_a8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      lVar1 = local_88;
      iVar4 = iVar4 + 1;
      *(short *)(local_b0 + lVar6 * 2) = sVar3;
    } while (iVar4 < 0xc);
    iVar7 = iVar7 + 0xd;
    local_98 = local_98 + 1;
  } while (iVar7 < 0xf7);
  local_70 = &local_b8;
  local_78 = 0;
  local_54 = 0;
  *(int *)(local_88 + 0x40) = (int)local_a8;
  local_d8 = (int)local_a8 * 2;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_c8 = &local_78;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  local_68 = 1;
  local_d0 = 1;
  (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_90,&DAT_146ab6e78,2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar1 + 0x30,local_90);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_90);
  if (local_b0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b7d2f0 FUN_141b7d2f0 body=98 status=ok
// SIG undefined FUN_141b7d2f0(void)

undefined8 * FUN_141b7d2f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e08ce0;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141b7d360 FUN_141b7d360 body=1540 status=ok
// SIG undefined FUN_141b7d360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b7d360(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
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
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  undefined8 *local_2b0;
  float local_2a8;
  float fStack_2a4;
  float local_2a0;
  undefined **local_298;
  longlong local_290;
  undefined8 local_288;
  undefined1 local_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  undefined4 uStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  float local_218;
  float fStack_214;
  float fStack_210;
  undefined4 uStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined ***local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined1 local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [160];
  undefined1 *local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  ulonglong uVar8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  uVar11 = 0;
  local_d8 = (undefined1 *)0x0;
  local_d0 = 0;
  FUN_141bbc390(local_178,0xd);
  local_2a8 = 0.0;
  uVar8 = uVar11;
  do {
    uVar14 = __libm_sse2_sincosf_();
    uVar9 = local_d0;
    lVar10 = (longlong)(int)local_d0;
    fStack_2a4 = (float)uVar14;
    local_2a0 = (float)((ulonglong)uVar14 >> 0x20);
    iVar5 = (int)local_d0 + 1;
    local_d0 = CONCAT44(local_d0._4_4_,iVar5);
    if (local_d0._4_4_ < iVar5) {
      TArray<FVector,TInlineAllocator<13,FDefaultAllocator>_>::ResizeGrow
                (local_178,uVar9 & 0xffffffff);
    }
    puVar6 = local_178;
    if (local_d8 != (undefined1 *)0x0) {
      puVar6 = local_d8;
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    *(ulonglong *)(puVar6 + lVar10 * 0xc) = CONCAT44(fStack_2a4,local_2a8);
    *(float *)(puVar6 + lVar10 * 0xc + 8) = local_2a0;
  } while ((int)uVar7 < 0xd);
  local_290 = 0;
  local_298 = &PTR_GetBoundProgramCounterForTimerManager_144e08bf8;
  local_288 = 0;
  local_280 = 0;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
            (&local_290,0xf7);
  local_218 = 0.041666638;
  fStack_214 = 0.041666638;
  fStack_210 = 0.041666638;
  uStack_20c = 0x3d2aaaa3;
  local_208 = -0.5;
  fStack_204 = -0.5;
  fStack_200 = -0.5;
  uStack_1fc = 0xbf000000;
  local_1f8 = 0.008333331;
  fStack_1f4 = 0.008333331;
  fStack_1f0 = 0.008333331;
  uStack_1ec = 0x3c088886;
  local_1e8 = -0.16666667;
  fStack_1e4 = -0.16666667;
  fStack_1e0 = -0.16666667;
  uStack_1dc = 0xbe2aaaab;
  local_1d8 = -2.6051615e-07;
  fStack_1d4 = -2.6051615e-07;
  fStack_1d0 = -2.6051615e-07;
  uStack_1cc = 0xb48bdd11;
  local_1c8 = -0.0013888378;
  fStack_1c4 = -0.0013888378;
  fStack_1c0 = -0.0013888378;
  uStack_1bc = 0xbab609aa;
  fStack_26c = 1.0;
  uVar8 = uVar11;
  do {
    fVar3 = DAT_1468b5d98;
    fVar2 = DAT_1468b5d94;
    fVar1 = DAT_1468b5d90;
    uStack_25c = 0;
    fVar19 = (float)(int)uVar8 * 20.0 * fRam0000000146a295f4;
    fVar18 = _DAT_146a295f0 * 0.0 -
             (float)(int)(_DAT_146a295f0 * 0.0 * _DAT_146a295e0) * _DAT_146a295d0;
    fVar19 = fVar19 - (float)(int)(fVar19 * fRam0000000146a295e4) * fRam0000000146a295d4;
    fVar20 = fRam0000000146a295f8 * 0.0 -
             (float)(int)(fRam0000000146a295f8 * 0.0 * fRam0000000146a295e8) * fRam0000000146a295d8;
    uVar7 = -(uint)(_DAT_146a29590 < (float)((uint)fVar18 & _DAT_146a295a0));
    uVar12 = -(uint)(fRam0000000146a29594 < (float)((uint)fVar19 & uRam0000000146a295a4));
    uVar13 = -(uint)(fRam0000000146a29598 < (float)((uint)fVar20 & uRam0000000146a295a8));
    fVar18 = (float)(((uint)((float)((uint)fVar18 & _DAT_146a295c0 | _DAT_146a295b0) - fVar18) ^
                     (uint)fVar18) & uVar7 ^ (uint)fVar18);
    fVar19 = (float)(((uint)((float)((uint)fVar19 & uRam0000000146a295c4 | uRam0000000146a295b4) -
                            fVar19) ^ (uint)fVar19) & uVar12 ^ (uint)fVar19);
    fVar20 = (float)(((uint)((float)((uint)fVar20 & uRam0000000146a295c8 | uRam0000000146a295b8) -
                            fVar20) ^ (uint)fVar20) & uVar13 ^ (uint)fVar20);
    fVar15 = fVar18 * fVar18;
    fVar16 = fVar19 * fVar19;
    fVar17 = fVar20 * fVar20;
    fVar22 = (((((local_1d8 * fVar15 + 2.4760495e-05) * fVar15 + local_1c8) * fVar15 + local_218) *
               fVar15 + local_208) * fVar15 + 1.0) *
             (float)((_DAT_146a29570 ^ _DAT_146a29580) & uVar7 ^ _DAT_146a29580);
    fVar23 = (((((fStack_1d4 * fVar16 + 2.4760495e-05) * fVar16 + fStack_1c4) * fVar16 + fStack_214)
               * fVar16 + fStack_204) * fVar16 + 1.0) *
             (float)((uRam0000000146a29574 ^ uRam0000000146a29584) & uVar12 ^ uRam0000000146a29584);
    fVar24 = (((((fStack_1d0 * fVar17 + 2.4760495e-05) * fVar17 + fStack_1c0) * fVar17 + fStack_210)
               * fVar17 + fStack_200) * fVar17 + 1.0) *
             (float)((uRam0000000146a29578 ^ uRam0000000146a29588) & uVar13 ^ uRam0000000146a29588);
    fVar18 = (((((fVar15 * -2.3889859e-08 + 2.7525562e-06) * fVar15 + -0.00019840874) * fVar15 +
               local_1f8) * fVar15 + local_1e8) * fVar15 + 1.0) * fVar18;
    fVar19 = (((((fVar16 * -2.3889859e-08 + 2.7525562e-06) * fVar16 + -0.00019840874) * fVar16 +
               fStack_1f4) * fVar16 + fStack_1e4) * fVar16 + 1.0) * fVar19;
    fVar20 = (((((fVar17 * -2.3889859e-08 + 2.7525562e-06) * fVar17 + -0.00019840874) * fVar17 +
               fStack_1f0) * fVar17 + fStack_1e0) * fVar17 + 1.0) * fVar20;
    fVar15 = fVar23 * fVar20 * fVar18 - fVar24 * fVar19;
    uStack_24c = 0;
    uStack_23c = 0;
    uStack_22c = 0x3f800000;
    fVar16 = fVar24 * fVar23 + fVar19 * fVar20 * fVar18;
    local_238 = DAT_1468b5d90;
    fVar21 = fVar23 * fVar20 - fVar19 * fVar24 * fVar18;
    fStack_230 = DAT_1468b5d98;
    fVar17 = -(fVar20 * fVar19 + fVar23 * fVar24 * fVar18);
    fStack_234 = DAT_1468b5d94;
    uVar9 = uVar11;
    local_268 = fVar23 * fVar22;
    fStack_264 = fVar22 * fVar19;
    fStack_260 = fVar18;
    local_258 = fVar15;
    fStack_254 = fVar16;
    fStack_250 = -(fVar22 * fVar20);
    local_248 = fVar17;
    fStack_244 = fVar21;
    fStack_240 = fVar24 * fVar22;
    do {
      uVar4 = local_288;
      lVar10 = (longlong)(int)local_288;
      puVar6 = local_178;
      if (local_d8 != (undefined1 *)0x0) {
        puVar6 = local_d8;
      }
      iVar5 = (int)local_288 + 1;
      local_278 = *(float *)(puVar6 + uVar9);
      fStack_274 = *(float *)(puVar6 + uVar9 + 4);
      fStack_270 = *(float *)(puVar6 + uVar9 + 8);
      local_288 = CONCAT44(local_288._4_4_,iVar5);
      local_2a8 = fStack_26c * fVar1 + fStack_270 * fVar17 +
                  fStack_274 * fVar15 + local_278 * fVar23 * fVar22;
      fStack_2a4 = fStack_26c * fVar2 + fStack_270 * fVar21 +
                   fStack_274 * fVar16 + local_278 * fVar22 * fVar19;
      local_2a0 = fStack_26c * fVar3 + fStack_270 * fVar24 * fVar22 +
                  fStack_274 * -(fVar22 * fVar20) + local_278 * fVar18;
      if (local_288._4_4_ < iVar5) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_290,uVar4 & 0xffffffff);
      }
      uVar9 = uVar9 + 0xc;
      *(ulonglong *)(local_290 + lVar10 * 0xc) = CONCAT44(fStack_2a4,local_2a8);
      *(float *)(local_290 + 8 + lVar10 * 0xc) = local_2a0;
    } while ((longlong)uVar9 < 0x9c);
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
  } while ((int)uVar7 < 0x13);
  local_1b0 = &local_298;
  *(int *)(param_1 + 0x38) = (int)local_288;
  local_1b8 = 0;
  local_1a4 = _DAT_1468b5d78;
  uStack_19c = uRam00000001468b5d80;
  local_2b0 = &local_1b8;
  local_1a8 = 1;
  local_194 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_2b8 = 1;
  (**(code **)(*DAT_146ab6358 + 0x490))
            (DAT_146ab6358,&local_2a8,&DAT_146ab6e78,(int)local_288 * 0xc);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,&local_2a8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2a8);
  if (local_290 != 0) {
    FMemory::Free();
  }
  if (local_d8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b7d970 FUN_141b7d970 body=89 status=ok
// SIG undefined FUN_141b7d970(void)

undefined8 * FUN_141b7d970(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e08d60;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141b7d9d0 FUN_141b7d9d0 body=89 status=ok
// SIG undefined FUN_141b7d9d0(void)

undefined8 * FUN_141b7d9d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e08dc8;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b7da30 FUN_141b7da30 body=98 status=ok
// SIG undefined FUN_141b7da30(void)

undefined8 * FUN_141b7da30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e08e08;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141b7daa0 FUN_141b7daa0 body=1545 status=ok
// SIG undefined FUN_141b7daa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b7daa0(longlong param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
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
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined8 *local_270;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined **local_258;
  longlong local_250;
  undefined8 local_248;
  undefined1 local_240;
  float local_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  undefined4 uStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined ***local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined1 local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_138 [80];
  undefined1 *local_e8;
  undefined8 local_d8;
  ulonglong local_c8;
  ulonglong uVar9;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  uVar12 = 0;
  local_e8 = (undefined1 *)0x0;
  local_d8 = 0;
  TArray<FVector4,TInlineAllocator<5,FDefaultAllocator>_>::ResizeTo(local_138,5);
  local_268 = 0.0;
  fStack_25c = 1.0;
  uVar9 = uVar12;
  do {
    uVar15 = __libm_sse2_sincosf_();
    uVar10 = local_d8;
    lVar11 = (longlong)(int)local_d8;
    fStack_264 = (float)uVar15;
    fStack_260 = (float)((ulonglong)uVar15 >> 0x20);
    iVar6 = (int)local_d8 + 1;
    local_d8 = CONCAT44(local_d8._4_4_,iVar6);
    if (local_d8._4_4_ < iVar6) {
      TArray<FVector4,TInlineAllocator<5,FDefaultAllocator>_>::ResizeGrow
                (local_138,uVar10 & 0xffffffff);
    }
    puVar7 = local_138;
    if (local_e8 != (undefined1 *)0x0) {
      puVar7 = local_e8;
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    *(ulonglong *)(puVar7 + lVar11 * 0x10) = CONCAT44(fStack_264,local_268);
    *(ulonglong *)((longlong)(puVar7 + lVar11 * 0x10) + 8) = CONCAT44(fStack_25c,fStack_260);
  } while ((int)uVar8 < 5);
  local_250 = 0;
  local_258 = &PTR_GetBoundProgramCounterForTimerManager_144e08448;
  local_248 = 0;
  local_240 = 0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_250,0x19);
  local_1d8 = 0.041666638;
  fStack_1d4 = 0.041666638;
  fStack_1d0 = 0.041666638;
  uStack_1cc = 0x3d2aaaa3;
  local_1c8 = -0.5;
  fStack_1c4 = -0.5;
  fStack_1c0 = -0.5;
  uStack_1bc = 0xbf000000;
  local_1b8 = 0.008333331;
  fStack_1b4 = 0.008333331;
  fStack_1b0 = 0.008333331;
  uStack_1ac = 0x3c088886;
  local_1a8 = -0.16666667;
  fStack_1a4 = -0.16666667;
  fStack_1a0 = -0.16666667;
  uStack_19c = 0xbe2aaaab;
  local_198 = -2.6051615e-07;
  fStack_194 = -2.6051615e-07;
  fStack_190 = -2.6051615e-07;
  uStack_18c = 0xb48bdd11;
  local_188 = -0.0013888378;
  fStack_184 = -0.0013888378;
  fStack_180 = -0.0013888378;
  uStack_17c = 0xbab609aa;
  fStack_25c = 1.0;
  uStack_22c = 0x3f800000;
  uVar9 = uVar12;
  do {
    fVar4 = DAT_1468b5d98;
    fVar3 = DAT_1468b5d94;
    fVar2 = DAT_1468b5d90;
    uStack_21c = 0;
    fVar20 = (float)(int)uVar9 * 90.0 * fRam0000000146a295f4;
    fVar19 = _DAT_146a295f0 * 0.0 -
             (float)(int)(_DAT_146a295f0 * 0.0 * _DAT_146a295e0) * _DAT_146a295d0;
    fVar20 = fVar20 - (float)(int)(fVar20 * fRam0000000146a295e4) * fRam0000000146a295d4;
    fVar21 = fRam0000000146a295f8 * 0.0 -
             (float)(int)(fRam0000000146a295f8 * 0.0 * fRam0000000146a295e8) * fRam0000000146a295d8;
    uVar8 = -(uint)(_DAT_146a29590 < (float)((uint)fVar19 & _DAT_146a295a0));
    uVar13 = -(uint)(fRam0000000146a29594 < (float)((uint)fVar20 & uRam0000000146a295a4));
    uVar14 = -(uint)(fRam0000000146a29598 < (float)((uint)fVar21 & uRam0000000146a295a8));
    fVar19 = (float)(((uint)((float)((uint)fVar19 & _DAT_146a295c0 | _DAT_146a295b0) - fVar19) ^
                     (uint)fVar19) & uVar8 ^ (uint)fVar19);
    fVar20 = (float)(((uint)((float)((uint)fVar20 & uRam0000000146a295c4 | uRam0000000146a295b4) -
                            fVar20) ^ (uint)fVar20) & uVar13 ^ (uint)fVar20);
    fVar21 = (float)(((uint)((float)((uint)fVar21 & uRam0000000146a295c8 | uRam0000000146a295b8) -
                            fVar21) ^ (uint)fVar21) & uVar14 ^ (uint)fVar21);
    fVar16 = fVar19 * fVar19;
    fVar17 = fVar20 * fVar20;
    fVar18 = fVar21 * fVar21;
    fVar23 = (((((local_198 * fVar16 + 2.4760495e-05) * fVar16 + local_188) * fVar16 + local_1d8) *
               fVar16 + local_1c8) * fVar16 + 1.0) *
             (float)((_DAT_146a29570 ^ _DAT_146a29580) & uVar8 ^ _DAT_146a29580);
    fVar24 = (((((fStack_194 * fVar17 + 2.4760495e-05) * fVar17 + fStack_184) * fVar17 + fStack_1d4)
               * fVar17 + fStack_1c4) * fVar17 + 1.0) *
             (float)((uRam0000000146a29574 ^ uRam0000000146a29584) & uVar13 ^ uRam0000000146a29584);
    fVar25 = (((((fStack_190 * fVar18 + 2.4760495e-05) * fVar18 + fStack_180) * fVar18 + fStack_1d0)
               * fVar18 + fStack_1c0) * fVar18 + 1.0) *
             (float)((uRam0000000146a29578 ^ uRam0000000146a29588) & uVar14 ^ uRam0000000146a29588);
    fVar19 = (((((fVar16 * -2.3889859e-08 + 2.7525562e-06) * fVar16 + -0.00019840874) * fVar16 +
               local_1b8) * fVar16 + local_1a8) * fVar16 + 1.0) * fVar19;
    fVar20 = (((((fVar17 * -2.3889859e-08 + 2.7525562e-06) * fVar17 + -0.00019840874) * fVar17 +
               fStack_1b4) * fVar17 + fStack_1a4) * fVar17 + 1.0) * fVar20;
    fVar21 = (((((fVar18 * -2.3889859e-08 + 2.7525562e-06) * fVar18 + -0.00019840874) * fVar18 +
               fStack_1b0) * fVar18 + fStack_1a0) * fVar18 + 1.0) * fVar21;
    fVar16 = fVar21 * fVar19 * fVar24 - fVar25 * fVar20;
    uStack_20c = 0;
    uStack_1fc = 0;
    fVar18 = fVar21 * fVar19 * fVar20 + fVar25 * fVar24;
    uStack_1ec = 0x3f800000;
    fVar22 = fVar24 * fVar21 - fVar25 * fVar19 * fVar20;
    local_1f8 = DAT_1468b5d90;
    fStack_1f0 = DAT_1468b5d98;
    fVar17 = -(fVar25 * fVar19 * fVar24 + fVar21 * fVar20);
    fStack_1f4 = DAT_1468b5d94;
    uVar10 = uVar12;
    local_228 = fVar24 * fVar23;
    fStack_224 = fVar23 * fVar20;
    fStack_220 = fVar19;
    local_218 = fVar16;
    fStack_214 = fVar18;
    fStack_210 = -(fVar23 * fVar21);
    local_208 = fVar17;
    fStack_204 = fVar22;
    fStack_200 = fVar25 * fVar23;
    do {
      uVar5 = local_248;
      lVar11 = (longlong)(int)local_248;
      puVar7 = local_138;
      if (local_e8 != (undefined1 *)0x0) {
        puVar7 = local_e8;
      }
      iVar6 = (int)local_248 + 1;
      local_268 = *(float *)(puVar7 + uVar10);
      fStack_264 = *(float *)(puVar7 + uVar10 + 4);
      fStack_260 = *(float *)(puVar7 + uVar10 + 8);
      local_248 = CONCAT44(local_248._4_4_,iVar6);
      local_238 = fStack_25c * fVar2 + fStack_260 * fVar17 +
                  fStack_264 * fVar16 + local_268 * fVar24 * fVar23;
      fStack_234 = fStack_25c * fVar3 + fStack_260 * fVar22 +
                   fStack_264 * fVar18 + local_268 * fVar23 * fVar20;
      fStack_230 = fStack_25c * fVar4 + fStack_260 * fVar25 * fVar23 +
                   fStack_264 * -(fVar23 * fVar21) + local_268 * fVar19;
      if (local_248._4_4_ < iVar6) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_250,uVar5 & 0xffffffff);
      }
      uVar10 = uVar10 + 0x10;
      puVar1 = (undefined8 *)(local_250 + lVar11 * 0x10);
      *puVar1 = CONCAT44(fStack_234,local_238);
      puVar1[1] = CONCAT44(uStack_22c,fStack_230);
    } while ((longlong)uVar10 < 0x50);
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
  } while ((int)uVar8 < 5);
  local_170 = &local_258;
  *(int *)(param_1 + 0x38) = (int)local_248;
  local_270 = &local_178;
  local_164 = _DAT_1468b5d78;
  uStack_15c = uRam00000001468b5d80;
  local_178 = 0;
  local_168 = 1;
  local_154 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_278 = 1;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_268,&DAT_146ab6e78,(int)local_248 << 4)
  ;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,&local_268);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_268);
  if (local_250 != 0) {
    FMemory::Free();
  }
  if (local_e8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b7e0b0 FUN_141b7e0b0 body=89 status=ok
// SIG undefined FUN_141b7e0b0(void)

undefined8 * FUN_141b7e0b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e08f00;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141b7e110 FUN_141b7e110 body=600 status=ok
// SIG undefined FUN_141b7e110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b7e110(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  longlong lVar7;
  short sVar8;
  undefined1 auStack_f8 [32];
  int local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined **local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  int local_98;
  int local_90 [2];
  longlong local_88;
  undefined8 local_78;
  undefined ***local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_b8 = &PTR_GetBoundProgramCounterForTimerManager_144e09148;
  local_98 = 5;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90[0] = 0;
  local_88 = param_1;
  do {
    sVar8 = (short)local_90[0];
    iVar5 = 0;
    do {
      iVar1 = local_98;
      lVar7 = (longlong)(int)local_a8;
      sVar4 = (short)iVar5 + sVar8 * 5;
      iVar3 = (int)local_a8 + 1;
      local_a8._0_4_ = iVar3;
      if (local_a8._4_4_ < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      *(short *)(local_b0 + lVar7 * 2) = sVar4;
      sVar6 = (short)iVar1 + (short)iVar5;
      lVar7 = (longlong)(int)local_a8;
      local_a8._0_4_ = (int)local_a8 + 1;
      if (local_a8._4_4_ < (int)local_a8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      sVar4 = sVar4 + 1;
      *(short *)(local_b0 + lVar7 * 2) = sVar6;
      lVar7 = (longlong)(int)local_a8;
      local_a8._0_4_ = (int)local_a8 + 1;
      if (local_a8._4_4_ < (int)local_a8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      *(short *)(local_b0 + lVar7 * 2) = sVar4;
      lVar7 = (longlong)(int)local_a8;
      local_a8._0_4_ = (int)local_a8 + 1;
      if (local_a8._4_4_ < (int)local_a8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      *(short *)(local_b0 + lVar7 * 2) = sVar6;
      lVar7 = (longlong)(int)local_a8;
      local_a8._0_4_ = (int)local_a8 + 1;
      if (local_a8._4_4_ < (int)local_a8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      *(short *)(local_b0 + lVar7 * 2) = sVar6 + 1;
      lVar7 = (longlong)(int)local_a8;
      local_a8._0_4_ = (int)local_a8 + 1;
      if (local_a8._4_4_ < (int)local_a8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0);
      }
      lVar2 = local_88;
      iVar5 = iVar5 + 1;
      *(short *)(local_b0 + lVar7 * 2) = sVar4;
    } while (iVar5 < 4);
    local_98 = local_98 + 5;
    local_90[0] = local_90[0] + 1;
  } while (local_98 < 0x19);
  local_70 = &local_b8;
  local_78 = 0;
  local_54 = 0;
  *(int *)(local_88 + 0x40) = (int)local_a8;
  local_d8 = (int)local_a8 * 2;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_c8 = &local_78;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  local_68 = 1;
  local_d0 = 1;
  (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_90,&DAT_146ab6e78,2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar2 + 0x30,local_90);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_90);
  if (local_b0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b7e370 FUN_141b7e370 body=98 status=ok
// SIG undefined FUN_141b7e370(void)

undefined8 * FUN_141b7e370(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e08f80;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141b7e3e0 FUN_141b7e3e0 body=114 status=ok
// SIG undefined FUN_141b7e3e0(void)

undefined1 FUN_141b7e3e0(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc6);
  FUN_1419e0a40(param_2,param_1 + 0xcc);
  FUN_1419e0a40(param_2,param_1 + 0xd2);
  FUN_1419e0a40(param_2,param_1 + 0xd8);
  return 0;
}



// FUNCTION 141b7e460 FUN_141b7e460 body=1060 status=ok
// SIG undefined FUN_141b7e460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b7e460(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  ulonglong uVar6;
  longlong lVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  undefined1 auStack_e8 [32];
  int local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined **local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90;
  int local_88 [2];
  longlong local_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_a8 = &PTR_GetBoundProgramCounterForTimerManager_144e09148;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a0,0x948);
  local_88[0] = 0;
  iVar10 = 0;
  do {
    iVar4 = 0;
    do {
      lVar7 = (longlong)(int)local_98;
      iVar12 = iVar4 + 1;
      sVar8 = (short)local_88[0];
      sVar1 = (short)iVar12 + (short)(iVar12 / 0x12) * -0x12 + (short)iVar10;
      sVar5 = (short)(iVar4 / 0x12);
      sVar9 = (short)iVar4 + ((sVar8 - sVar5) + 1) * 0x12;
      iVar3 = (int)local_98 + 1;
      if (local_98._4_4_ < iVar3) {
        uVar6 = local_98 & 0xffffffff;
        local_98._0_4_ = iVar3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,uVar6);
        iVar3 = (int)local_98;
      }
      local_98._0_4_ = iVar3;
      iVar3 = (int)local_98;
      *(short *)(local_a0 + lVar7 * 2) = (sVar8 - sVar5) * 0x12 + (short)iVar4;
      lVar7 = (longlong)(int)local_98;
      local_98._0_4_ = (int)local_98 + 1;
      if (local_98._4_4_ < (int)local_98) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,iVar3);
      }
      iVar4 = (int)local_98;
      *(short *)(local_a0 + lVar7 * 2) = sVar1;
      lVar7 = (longlong)(int)local_98;
      local_98._0_4_ = (int)local_98 + 1;
      if (local_98._4_4_ < (int)local_98) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,iVar4);
      }
      iVar4 = (int)local_98;
      *(short *)(local_a0 + lVar7 * 2) = sVar9;
      lVar7 = (longlong)(int)local_98;
      local_98._0_4_ = (int)local_98 + 1;
      if (local_98._4_4_ < (int)local_98) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,iVar4);
      }
      iVar4 = (int)local_98;
      *(short *)(local_a0 + lVar7 * 2) = sVar9;
      lVar7 = (longlong)(int)local_98;
      local_98._0_4_ = (int)local_98 + 1;
      if (local_98._4_4_ < (int)local_98) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,iVar4);
      }
      iVar4 = (int)local_98;
      *(short *)(local_a0 + lVar7 * 2) = sVar1;
      lVar7 = (longlong)(int)local_98;
      local_98._0_4_ = (int)local_98 + 1;
      if (local_98._4_4_ < (int)local_98) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,iVar4);
      }
      *(short *)(local_a0 + lVar7 * 2) = sVar1 + 0x12;
      iVar4 = iVar12;
    } while (iVar12 < 0x12);
    local_88[0] = local_88[0] + 1;
    iVar10 = iVar10 + 0x12;
  } while (iVar10 < 0xc6);
  iVar10 = 0xea;
  local_88[0] = 0;
  do {
    iVar4 = 0;
    do {
      lVar7 = (longlong)(int)local_98;
      iVar12 = iVar4 + 1;
      sVar9 = (short)local_88[0];
      sVar1 = (short)iVar12 + (short)(iVar12 / 0x12) * -0x12;
      sVar8 = (short)iVar10 + -0x12 + sVar1;
      sVar5 = (short)(iVar4 / 0x12);
      sVar11 = (short)iVar4 + ((sVar9 - sVar5) + 0xd) * 0x12;
      iVar3 = (int)local_98 + 1;
      local_98._0_4_ = iVar3;
      if (local_98._4_4_ < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0);
      }
      *(short *)(local_a0 + lVar7 * 2) = ((sVar9 - sVar5) + 0xc) * 0x12 + (short)iVar4;
      lVar7 = (longlong)(int)local_98;
      local_98._0_4_ = (int)local_98 + 1;
      if (local_98._4_4_ < (int)local_98) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0);
      }
      *(short *)(local_a0 + lVar7 * 2) = sVar11;
      lVar7 = (longlong)(int)local_98;
      local_98._0_4_ = (int)local_98 + 1;
      if (local_98._4_4_ < (int)local_98) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0);
      }
      *(short *)(local_a0 + lVar7 * 2) = sVar8;
      lVar7 = (longlong)(int)local_98;
      local_98._0_4_ = (int)local_98 + 1;
      if (local_98._4_4_ < (int)local_98) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0);
      }
      *(short *)(local_a0 + lVar7 * 2) = sVar8;
      lVar7 = (longlong)(int)local_98;
      local_98._0_4_ = (int)local_98 + 1;
      if (local_98._4_4_ < (int)local_98) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0);
      }
      *(short *)(local_a0 + lVar7 * 2) = sVar11;
      lVar7 = (longlong)(int)local_98;
      local_98._0_4_ = (int)local_98 + 1;
      if (local_98._4_4_ < (int)local_98) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0);
      }
      lVar2 = local_80;
      *(short *)(local_a0 + lVar7 * 2) = (short)iVar10 + sVar1;
      iVar4 = iVar12;
    } while (iVar12 < 0x12);
    local_88[0] = local_88[0] + 1;
    iVar10 = iVar10 + 0x12;
  } while (iVar10 < 0x1b0);
  local_70 = &local_a8;
  local_78 = 0;
  local_54 = 0;
  *(int *)(local_80 + 0x40) = (int)local_98;
  local_c8 = (int)local_98 * 2;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_b8 = &local_78;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  local_68 = 1;
  local_c0 = 1;
  (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_88,&DAT_146ab6e78,2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar2 + 0x30,local_88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b7e890 FUN_141b7e890 body=291 status=ok
// SIG undefined FUN_141b7e890(void)

undefined1 FUN_141b7e890(longlong param_1,undefined8 param_2)

{
  FUN_141ad3f10(param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0b60(param_2,param_1 + 0xd4);
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xdc);
  FUN_1419e0b60(param_2,param_1 + 0xe0);
  FUN_1419e0b60(param_2,param_1 + 0xe4);
  FUN_1419e0b60(param_2,param_1 + 0xe8);
  FUN_1419e0b60(param_2,param_1 + 0xec);
  FUN_1419e0b60(param_2,param_1 + 0xf0);
  FUN_1419e0b60(param_2,param_1 + 0xf4);
  FUN_1419e0b60(param_2,param_1 + 0xf8);
  FUN_1419e0b60(param_2,param_1 + 0xfc);
  FUN_1419e0b60(param_2,param_1 + 0x100);
  FUN_1419e0b60(param_2,param_1 + 0x104);
  FUN_1419e0a40(param_2,param_1 + 0x108);
  return 0;
}



// FUNCTION 141b7e9c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FBlurLightShaftsPixelShader::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 141b7ea40 FUN_141b7ea40 body=317 status=ok
// SIG undefined FUN_141b7ea40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b7ea40(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined **local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined ***local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a0 = 0;
  lVar5 = 0x1b0;
  local_98 = 0;
  local_a8 = &PTR_GetBoundProgramCounterForTimerManager_144e08448;
  local_90 = 0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_a0,0x1b0);
  do {
    uVar2 = local_98;
    lVar4 = (longlong)(int)local_98;
    iVar3 = (int)local_98 + 1;
    local_98 = CONCAT44(local_98._4_4_,iVar3);
    if (local_98._4_4_ < iVar3) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_a0,uVar2 & 0xffffffff);
    }
    puVar1 = (undefined8 *)(local_a0 + lVar4 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  local_70 = &local_a8;
  local_b0 = &local_78;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  local_78 = 0;
  local_68 = 1;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_b8 = 1;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_88,&DAT_146ab6e78,(int)local_98 << 4);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b7eb80 FUN_141b7eb80 body=1548 status=ok
// SIG undefined FUN_141b7eb80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141b7eb80(longlong param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
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
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  undefined8 *local_2f0;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined **local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined4 uStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  undefined4 uStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  undefined4 uStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  float local_258;
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  undefined4 uStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined ***local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined1 local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8 [208];
  undefined1 *local_e8;
  undefined8 local_d8;
  ulonglong local_c8;
  ulonglong uVar9;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  uVar12 = 0;
  local_e8 = (undefined1 *)0x0;
  local_d8 = 0;
  FUN_141bbc320(local_1b8,0xd);
  local_2e8 = 0.0;
  fStack_2dc = 1.0;
  uVar9 = uVar12;
  do {
    uVar15 = __libm_sse2_sincosf_();
    uVar10 = local_d8;
    lVar11 = (longlong)(int)local_d8;
    fStack_2e4 = (float)uVar15;
    fStack_2e0 = (float)((ulonglong)uVar15 >> 0x20);
    iVar6 = (int)local_d8 + 1;
    local_d8 = CONCAT44(local_d8._4_4_,iVar6);
    if (local_d8._4_4_ < iVar6) {
      TArray<FVector4,TInlineAllocator<13,FDefaultAllocator>_>::ResizeGrow
                (local_1b8,uVar10 & 0xffffffff);
    }
    puVar7 = local_1b8;
    if (local_e8 != (undefined1 *)0x0) {
      puVar7 = local_e8;
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    *(ulonglong *)(puVar7 + lVar11 * 0x10) = CONCAT44(fStack_2e4,local_2e8);
    *(ulonglong *)((longlong)(puVar7 + lVar11 * 0x10) + 8) = CONCAT44(fStack_2dc,fStack_2e0);
  } while ((int)uVar8 < 0xd);
  local_2d0 = 0;
  local_2d8 = &PTR_GetBoundProgramCounterForTimerManager_144e08448;
  local_2c8 = 0;
  local_2c0 = 0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_2d0,0xf7);
  local_258 = 0.041666638;
  fStack_254 = 0.041666638;
  fStack_250 = 0.041666638;
  uStack_24c = 0x3d2aaaa3;
  local_248 = -0.5;
  fStack_244 = -0.5;
  fStack_240 = -0.5;
  uStack_23c = 0xbf000000;
  local_238 = 0.008333331;
  fStack_234 = 0.008333331;
  fStack_230 = 0.008333331;
  uStack_22c = 0x3c088886;
  local_228 = -0.16666667;
  fStack_224 = -0.16666667;
  fStack_220 = -0.16666667;
  uStack_21c = 0xbe2aaaab;
  local_218 = -2.6051615e-07;
  fStack_214 = -2.6051615e-07;
  fStack_210 = -2.6051615e-07;
  uStack_20c = 0xb48bdd11;
  local_208 = -0.0013888378;
  fStack_204 = -0.0013888378;
  fStack_200 = -0.0013888378;
  uStack_1fc = 0xbab609aa;
  fStack_2dc = 1.0;
  uStack_2ac = 0x3f800000;
  uVar9 = uVar12;
  do {
    fVar4 = DAT_1468b5d98;
    fVar3 = DAT_1468b5d94;
    fVar2 = DAT_1468b5d90;
    uStack_29c = 0;
    fVar20 = (float)(int)uVar9 * 20.0 * fRam0000000146a295f4;
    fVar19 = _DAT_146a295f0 * 0.0 -
             (float)(int)(_DAT_146a295f0 * 0.0 * _DAT_146a295e0) * _DAT_146a295d0;
    fVar20 = fVar20 - (float)(int)(fVar20 * fRam0000000146a295e4) * fRam0000000146a295d4;
    fVar21 = fRam0000000146a295f8 * 0.0 -
             (float)(int)(fRam0000000146a295f8 * 0.0 * fRam0000000146a295e8) * fRam0000000146a295d8;
    uVar8 = -(uint)(_DAT_146a29590 < (float)((uint)fVar19 & _DAT_146a295a0));
    uVar13 = -(uint)(fRam0000000146a29594 < (float)((uint)fVar20 & uRam0000000146a295a4));
    uVar14 = -(uint)(fRam0000000146a29598 < (float)((uint)fVar21 & uRam0000000146a295a8));
    fVar19 = (float)(((uint)((float)((uint)fVar19 & _DAT_146a295c0 | _DAT_146a295b0) - fVar19) ^
                     (uint)fVar19) & uVar8 ^ (uint)fVar19);
    fVar20 = (float)(((uint)((float)((uint)fVar20 & uRam0000000146a295c4 | uRam0000000146a295b4) -
                            fVar20) ^ (uint)fVar20) & uVar13 ^ (uint)fVar20);
    fVar21 = (float)(((uint)((float)((uint)fVar21 & uRam0000000146a295c8 | uRam0000000146a295b8) -
                            fVar21) ^ (uint)fVar21) & uVar14 ^ (uint)fVar21);
    fVar16 = fVar19 * fVar19;
    fVar17 = fVar20 * fVar20;
    fVar18 = fVar21 * fVar21;
    fVar23 = (((((local_218 * fVar16 + 2.4760495e-05) * fVar16 + local_208) * fVar16 + local_258) *
               fVar16 + local_248) * fVar16 + 1.0) *
             (float)((_DAT_146a29570 ^ _DAT_146a29580) & uVar8 ^ _DAT_146a29580);
    fVar24 = (((((fStack_214 * fVar17 + 2.4760495e-05) * fVar17 + fStack_204) * fVar17 + fStack_254)
               * fVar17 + fStack_244) * fVar17 + 1.0) *
             (float)((uRam0000000146a29574 ^ uRam0000000146a29584) & uVar13 ^ uRam0000000146a29584);
    fVar25 = (((((fStack_210 * fVar18 + 2.4760495e-05) * fVar18 + fStack_200) * fVar18 + fStack_250)
               * fVar18 + fStack_240) * fVar18 + 1.0) *
             (float)((uRam0000000146a29578 ^ uRam0000000146a29588) & uVar14 ^ uRam0000000146a29588);
    fVar19 = (((((fVar16 * -2.3889859e-08 + 2.7525562e-06) * fVar16 + -0.00019840874) * fVar16 +
               local_238) * fVar16 + local_228) * fVar16 + 1.0) * fVar19;
    fVar20 = (((((fVar17 * -2.3889859e-08 + 2.7525562e-06) * fVar17 + -0.00019840874) * fVar17 +
               fStack_234) * fVar17 + fStack_224) * fVar17 + 1.0) * fVar20;
    fVar21 = (((((fVar18 * -2.3889859e-08 + 2.7525562e-06) * fVar18 + -0.00019840874) * fVar18 +
               fStack_230) * fVar18 + fStack_220) * fVar18 + 1.0) * fVar21;
    fVar16 = fVar21 * fVar19 * fVar24 - fVar25 * fVar20;
    uStack_28c = 0;
    uStack_27c = 0;
    fVar18 = fVar21 * fVar19 * fVar20 + fVar25 * fVar24;
    uStack_26c = 0x3f800000;
    fVar22 = fVar24 * fVar21 - fVar25 * fVar19 * fVar20;
    local_278 = DAT_1468b5d90;
    fStack_270 = DAT_1468b5d98;
    fVar17 = -(fVar25 * fVar19 * fVar24 + fVar21 * fVar20);
    fStack_274 = DAT_1468b5d94;
    uVar10 = uVar12;
    local_2a8 = fVar24 * fVar23;
    fStack_2a4 = fVar23 * fVar20;
    fStack_2a0 = fVar19;
    local_298 = fVar16;
    fStack_294 = fVar18;
    fStack_290 = -(fVar23 * fVar21);
    local_288 = fVar17;
    fStack_284 = fVar22;
    fStack_280 = fVar25 * fVar23;
    do {
      uVar5 = local_2c8;
      lVar11 = (longlong)(int)local_2c8;
      puVar7 = local_1b8;
      if (local_e8 != (undefined1 *)0x0) {
        puVar7 = local_e8;
      }
      iVar6 = (int)local_2c8 + 1;
      local_2e8 = *(float *)(puVar7 + uVar10);
      fStack_2e4 = *(float *)(puVar7 + uVar10 + 4);
      fStack_2e0 = *(float *)(puVar7 + uVar10 + 8);
      local_2c8 = CONCAT44(local_2c8._4_4_,iVar6);
      local_2b8 = fStack_2dc * fVar2 + fStack_2e0 * fVar17 +
                  fStack_2e4 * fVar16 + local_2e8 * fVar24 * fVar23;
      fStack_2b4 = fStack_2dc * fVar3 + fStack_2e0 * fVar22 +
                   fStack_2e4 * fVar18 + local_2e8 * fVar23 * fVar20;
      fStack_2b0 = fStack_2dc * fVar4 + fStack_2e0 * fVar25 * fVar23 +
                   fStack_2e4 * -(fVar23 * fVar21) + local_2e8 * fVar19;
      if (local_2c8._4_4_ < iVar6) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_2d0,uVar5 & 0xffffffff);
      }
      uVar10 = uVar10 + 0x10;
      puVar1 = (undefined8 *)(local_2d0 + lVar11 * 0x10);
      *puVar1 = CONCAT44(fStack_2b4,local_2b8);
      puVar1[1] = CONCAT44(uStack_2ac,fStack_2b0);
    } while ((longlong)uVar10 < 0xd0);
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
  } while ((int)uVar8 < 0x13);
  local_1f0 = &local_2d8;
  *(int *)(param_1 + 0x38) = (int)local_2c8;
  local_2f0 = &local_1f8;
  local_1e4 = _DAT_1468b5d78;
  uStack_1dc = uRam00000001468b5d80;
  local_1f8 = 0;
  local_1e8 = 1;
  local_1d4 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_2f8 = 1;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_2e8,&DAT_146ab6e78,(int)local_2c8 << 4)
  ;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,&local_2e8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_2e8);
  if (local_2d0 != 0) {
    FMemory::Free();
  }
  if (local_e8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b7f190 FUN_141b7f190 body=89 status=ok
// SIG undefined FUN_141b7f190(void)

undefined8 * FUN_141b7f190(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e093f8;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141b7f1f0 Serialize body=74 status=ok
// SIG undefined Serialize(void)

undefined1 TDeferredLightOverlapPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  FUN_141ad3f10(param_1 + 200,param_2);
  FUN_141ad3f10(param_1 + 0xd0,param_2);
  return 0;
}



// FUNCTION 141b7f240 Serialize body=322 status=ok
// SIG undefined Serialize(void)

undefined1 FLpvWriteShaderCSBase::Serialize(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0xdc;
  lVar1 = 7;
  do {
    FUN_1419e0b60(param_2,lVar2 + -0x1c);
    FUN_1419e0b60(param_2,lVar2);
    lVar2 = lVar2 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1419e0b60(param_2,param_1 + 0xf8);
  FUN_1419e0b60(param_2,param_1 + 0xfc);
  FUN_1419e0b60(param_2,param_1 + 0x100);
  FUN_1419e0b60(param_2,param_1 + 0x104);
  FUN_1419e0b60(param_2,param_1 + 0x108);
  lVar2 = param_1 + 0x114;
  lVar1 = 2;
  do {
    FUN_1419e0b60(param_2,lVar2 + -8);
    FUN_1419e0b60(param_2,lVar2);
    lVar2 = lVar2 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1419e0b60(param_2,param_1 + 0x120);
  FUN_1419e0b60(param_2,param_1 + 0x128);
  FUN_1419e0b60(param_2,param_1 + 0x11c);
  FUN_1419e0b60(param_2,param_1 + 0x124);
  FUN_1419e0b60(param_2,param_1 + 300);
  FUN_1419e0b60(param_2,param_1 + 0x130);
  return 0;
}



// FUNCTION 141b7f390 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 TLpvInject_LightCS<1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 141b7f3e0 FUN_141b7f3e0 body=183 status=ok
// SIG undefined FUN_141b7f3e0(void)

undefined1 FUN_141b7f3e0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_141ad3f10(param_1 + 0x150,param_2);
  FUN_1419e0a40(param_2,param_1 + 0x158);
  FUN_1419e0a40(param_2,param_1 + 0x15e);
  FUN_1419e0a40(param_2,param_1 + 0x164);
  FUN_1419e0a40(param_2,param_1 + 0x16a);
  FUN_1419e0a40(param_2,param_1 + 0x170);
  FUN_1419e0a40(param_2,param_1 + 0x176);
  FUN_1419e0b60(param_2,param_1 + 0x17c);
  FUN_1419e0b60(param_2,param_1 + 0x180);
  return uVar1;
}



// FUNCTION 141b7f4a0 FUN_141b7f4a0 body=95 status=ok
// SIG undefined FUN_141b7f4a0(void)

longlong FUN_141b7f4a0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 141b7f510 Serialize body=123 status=ok
// SIG undefined Serialize(void)

undefined1 FVolumetricFogLightFunctionPS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_1419e0a40(param_2,param_1 + 0x158);
  FUN_1419e0a40(param_2,param_1 + 0x15e);
  FUN_1419e0a40(param_2,param_1 + 0x164);
  FUN_1419e0a40(param_2,param_1 + 0x16a);
  FUN_1419e0a40(param_2,param_1 + 0x170);
  return uVar1;
}



// FUNCTION 141b7f590 FUN_141b7f590 body=381 status=ok
// SIG undefined FUN_141b7f590(void)

void FUN_141b7f590(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,longlong param_8)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 local_res8;
  
  iVar4 = 5;
  if (*(int *)(DAT_146b17150 + 0x668) < 6) {
    iVar4 = *(int *)(DAT_146b17150 + 0x668);
  }
  iVar3 = 0;
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + -0x108);
      lVar2 = *(longlong *)(DAT_146b17150 + 0x660);
      if (*(char *)(lVar1 + 0x28) == '\0') {
        FUN_1419f3850(lVar1);
      }
      SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 8,lVar5 + lVar2,iVar3);
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < iVar4);
    if (4 < iVar3) goto LAB_141b7f677;
  }
  do {
    lVar5 = *(longlong *)(param_1 + -0x108);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
              (param_2,*(undefined8 *)(lVar5 + 0x40),param_1 + 8,&DAT_1464aa6e0,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
LAB_141b7f677:
  FUN_141c96a70(&local_res8,param_2,0,*(undefined4 *)(param_7 + 0x1a38));
  lVar5 = *(longlong *)(param_1 + -0x108);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  FUN_141aa87d0(param_1 + -0x150,param_2,*(undefined8 *)(lVar5 + 0x40),param_5,param_6,param_7,
                param_8 + 0x18,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  return;
}



// FUNCTION 141b7f710 FUN_141b7f710 body=906 status=ok
// SIG undefined FUN_141b7f710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b7f710(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  void *pvVar8;
  undefined1 auStack_1e8 [32];
  ulonglong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  uint local_198;
  uint local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_158 [128];
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_188 = param_7;
  local_190 = param_8;
  local_180 = param_4;
  local_178 = param_3;
  _guard_xfg_dispatch_icall_nop(local_158,0,0x80);
  _guard_xfg_dispatch_icall_nop(local_d8,0,0x80);
  lVar1 = *(longlong *)(param_1 + -0x108);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_1c0 = (ulonglong)local_1c0._4_4_ << 0x20;
  local_1c8 = CONCAT44(local_1c8._4_4_,8);
  SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0x14,local_158);
  lVar1 = *(longlong *)(param_1 + -0x108);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  uVar3 = (uint)*(ushort *)(param_1 + 0x1e);
  if (0x7f < *(ushort *)(param_1 + 0x1e)) {
    uVar3 = 0x80;
  }
  uVar7 = (ulonglong)uVar3;
  if (uVar3 != 0) {
    local_198 = (uint)*(ushort *)(param_1 + 0x1c);
    pvVar8 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_194 = (uint)*(ushort *)(param_1 + 0x1a);
    uVar4 = (longlong)pvVar8 + uVar7;
    if (*(ulonglong *)(param_2 + 0x38) < uVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar3 + 0x10);
      pvVar8 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar4 = (longlong)pvVar8 + uVar7;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar4;
    _guard_xfg_dispatch_icall_nop(pvVar8,local_d8,uVar7);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f594b0;
    *(uint *)(puVar6 + 4) = local_194;
    *(uint *)((longlong)puVar6 + 0x24) = local_198;
    puVar6[2] = uVar2;
    puVar6[3] = pvVar8;
    *(uint *)(puVar6 + 5) = uVar3;
  }
  lVar1 = *(longlong *)(param_1 + -0x108);
  local_170 = 0xffffffff;
  uStack_168 = 0;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  uVar3 = (uint)*(ushort *)(param_1 + 0x12);
  if (0xf < *(ushort *)(param_1 + 0x12)) {
    uVar3 = 0x10;
  }
  uVar7 = (ulonglong)uVar3;
  if (uVar3 != 0) {
    local_194 = (uint)*(ushort *)(param_1 + 0x10);
    pvVar8 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    local_198 = (uint)*(ushort *)(param_1 + 0xe);
    uVar4 = (longlong)pvVar8 + uVar7;
    if (*(ulonglong *)(param_2 + 0x38) < uVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar3 + 0x10);
      pvVar8 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar4 = (longlong)pvVar8 + uVar7;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar4;
    _guard_xfg_dispatch_icall_nop(pvVar8,&local_170,uVar7);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f594b0;
    *(uint *)(puVar6 + 4) = local_198;
    *(uint *)((longlong)puVar6 + 0x24) = local_194;
    puVar6[2] = uVar2;
    puVar6[3] = pvVar8;
    *(uint *)(puVar6 + 5) = uVar3;
  }
  if ((param_5 == 0) || ((*(uint *)(param_5 + 0x18) & 0x300) != 0)) {
    local_198 = 0x3f800000;
  }
  else {
    local_198 = 0x3e4ccccd;
  }
  lVar1 = *(longlong *)(param_1 + -0x108);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_1c8 = local_1c8 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0x20,&local_198);
  lVar1 = *(longlong *)(param_1 + -0x108);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  local_1a8 = 0;
  local_1b0 = local_190;
  local_1b8 = local_188;
  local_1c0 = param_5;
  local_1c8 = local_180;
  FUN_141d84bb0(param_1 + -0x150,param_2,*(undefined8 *)(lVar1 + 0x40),local_178);
  return;
}



// FUNCTION 141b7fab0 FUN_141b7fab0 body=109 status=ok
// SIG undefined FUN_141b7fab0(void)

longlong FUN_141b7fab0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)(param_1 + 0x150) = &PTR_FUN_143fca6f8;
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FShader::~FShader(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 141b7fb20 Serialize body=123 status=ok
// SIG undefined Serialize(void)

undefined1 FLpvInject_GenerateVplListsCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FLpvWriteShaderCSBase::Serialize();
  FUN_1419e0b60(param_2,param_1 + 0x138);
  FUN_1419e0b60(param_2,param_1 + 0x13c);
  FUN_1419e0b60(param_2,param_1 + 0x140);
  FUN_1419e0b60(param_2,param_1 + 0x144);
  FUN_1419e0b60(param_2,param_1 + 0x148);
  return uVar1;
}



// FUNCTION 141b7fba0 SetParameters body=40 status=ok
// SIG undefined SetParameters(void)

void FLpvCopyAOVolumeCS::SetParameters(longlong param_1)

{
  FUN_141bbec00();
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x28) == '\0') {
    FUN_1419f3850();
    return;
  }
  return;
}



// FUNCTION 141b7fbd0 Serialize body=89 status=ok
// SIG undefined Serialize(void)

undefined1 FMeshTexCoordSizeAccuracyPS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 200);
  FUN_1419e0a40(param_2,param_1 + 0xce);
  FUN_1419e0a40(param_2,param_1 + 0xd4);
  FUN_1419e0a40(param_2,param_1 + 0xda);
  return 0;
}



// FUNCTION 141b7fc30 FUN_141b7fc30 body=287 status=ok
// SIG undefined FUN_141b7fc30(void)

void FUN_141b7fc30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong in_stack_00000038;
  
  iVar5 = 5;
  if (*(int *)(DAT_146b17150 + 0x668) < 6) {
    iVar5 = *(int *)(DAT_146b17150 + 0x668);
  }
  iVar4 = 0;
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + -0x78);
      lVar2 = *(longlong *)(DAT_146b17150 + 0x660);
      if (*(char *)(lVar1 + 0x28) == '\0') {
        FUN_1419f3850(lVar1);
      }
      SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
                (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 8,lVar6 + lVar2,iVar4);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar4 < iVar5);
    if (4 < iVar4) goto LAB_141b7fd08;
  }
  do {
    lVar6 = *(longlong *)(param_1 + -0x78);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
              (param_2,*(undefined8 *)(lVar6 + 0x40),param_1 + 8,&DAT_1464aa6e0,iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
LAB_141b7fd08:
  lVar6 = *(longlong *)(param_1 + -0x78);
  uVar3 = *(undefined8 *)(in_stack_00000038 + 0x20);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  FUN_141aa9590(param_1 + -0xc0,param_2,*(undefined8 *)(lVar6 + 0x40),uVar3);
  return;
}



// FUNCTION 141b7fd50 FUN_141b7fd50 body=240 status=ok
// SIG undefined FUN_141b7fd50(void)

void FUN_141b7fd50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(param_1 + -0x78);
  local_res8[0] = 0xffffffff;
  local_18 = 0;
  local_10 = 0;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0xe,&local_18,0);
  if ((CONCAT44(param_5._4_4_,(undefined4)param_5) == 0) ||
     ((*(uint *)(CONCAT44(param_5._4_4_,(undefined4)param_5) + 0x18) & 0x300) != 0)) {
    param_5._0_4_ = 0x3f800000;
  }
  else {
    param_5._0_4_ = 0x3e4ccccd;
  }
  lVar1 = *(longlong *)(param_1 + -0x78);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0x14,&param_5,0);
  lVar1 = *(longlong *)(param_1 + -0x78);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0x1a,local_res8,0);
  return;
}



// FUNCTION 141b7fe40 SetMesh body=159 status=ok
// SIG undefined SetMesh(void)

void FMeshTexCoordSizeAccuracyPS::SetMesh(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + -0x78);
  local_res8[0] = 0xbf800000;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0xe,local_res8,0);
  lVar1 = *(longlong *)(param_1 + -0x78);
  local_res8[0] = 0x3f800000;
  if (*(char *)(lVar1 + 0x28) == '\0') {
    FUN_1419f3850(lVar1);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar1 + 0x40),param_1 + 0x14,local_res8,0);
  return;
}



// FUNCTION 141b7fee0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FMeshTexCoordSizeAccuracyPS::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0xc0) = &PTR_FUN_143fca6f8;
  FShader::~FShader();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141b7ff30 Serialize body=89 status=ok
// SIG undefined Serialize(void)

undefined1 TDownsampleLightShaftsPixelShader<1,1>::Serialize(longlong param_1,undefined8 param_2)

{
  ::operator<<(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0x10a);
  FUN_141ad3f10(param_1 + 0x110,param_2);
  FUN_141ad3f10(param_1 + 0x118,param_2);
  return 0;
}



// FUNCTION 141b7ff90 Serialize body=59 status=ok
// SIG undefined Serialize(void)

undefined1 FBlurLightShaftsPixelShader::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 0xc0);
  ::operator<<(param_2,param_1 + 0xc6);
  return 0;
}



// FUNCTION 141b7ffd0 FUN_141b7ffd0 body=446 status=ok
// SIG undefined FUN_141b7ffd0(void)

undefined1 FUN_141b7ffd0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141d7c390();
  FUN_141ad3f10(param_1 + 0x150,param_2);
  FUN_141ad3f10(param_1 + 0x158,param_2);
  FUN_1419e0b60(param_2,param_1 + 0x160);
  FUN_1419e0b60(param_2,param_1 + 0x164);
  FUN_1419e0a40(param_2,param_1 + 0x168);
  FUN_1419e0a40(param_2,param_1 + 0x16e);
  FUN_1419e0a40(param_2,param_1 + 0x17a);
  FUN_1419e0a40(param_2,param_1 + 0x180);
  FUN_1419e0a40(param_2,param_1 + 0x174);
  FUN_1419e0b60(param_2,param_1 + 0x186);
  FUN_1419e0b60(param_2,param_1 + 0x18e);
  FUN_1419e0a40(param_2,param_1 + 0x196);
  FUN_1419e0b60(param_2,param_1 + 0x18a);
  FUN_1419e0b60(param_2,param_1 + 0x192);
  FUN_1419e0a40(param_2,param_1 + 0x19c);
  FUN_1419e0a40(param_2,param_1 + 0x1a2);
  FUN_1419e0a40(param_2,param_1 + 0x1a8);
  FUN_1419e0a40(param_2,param_1 + 0x1ae);
  FUN_1419e0a40(param_2,param_1 + 0x1b4);
  FUN_1419e0a40(param_2,param_1 + 0x1ba);
  FUN_1419e0a40(param_2,param_1 + 0x1c0);
  FUN_1419e0a40(param_2,param_1 + 0x1c6);
  FUN_1419e0a40(param_2,param_1 + 0x1cc);
  FUN_1419e0a40(param_2,param_1 + 0x1d2);
  FUN_1419e0a40(param_2,param_1 + 0x1d8);
  FUN_1419e0b60(param_2,param_1 + 0x1de);
  FUN_1419e0b60(param_2,param_1 + 0x1e2);
  FUN_1419e0a40(param_2,param_1 + 0x1e6);
  return uVar1;
}



// FUNCTION 141b80190 Serialize body=140 status=ok
// SIG undefined Serialize(void)

undefined1 FLpvVisualisePS::Serialize(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1 + 0xc0;
  lVar2 = 7;
  do {
    FUN_1419e0b60(param_2,lVar1);
    lVar1 = lVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1419e0b60(param_2,param_1 + 0xdc);
  param_1 = param_1 + 0xe0;
  lVar1 = 2;
  do {
    FUN_1419e0b60(param_2,param_1);
    param_1 = param_1 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return 0;
}



// FUNCTION 141b80220 Serialize body=29 status=ok
// SIG undefined Serialize(void)

ulonglong FFinishOcclusionPixelShader::Serialize(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = ::operator<<(param_2,param_1 + 0xc0);
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141b80240 operator<ULightComponent_const_*,FTemporalAAHistory>_TTuple<ULightComponent_const_*,FTemporalAAHistory> body=174 status=ok
// SIG undefined operator<ULightComponent_const_*,FTemporalAAHistory>_TTuple<ULightComponent_const_*,FTemporalAAHistory>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 *
TKeyInitializer<ULightComponent_const_*_&&>::
operator<ULightComponent_const_*,FTemporalAAHistory>_TTuple<ULightComponent_const_*,FTemporalAAHistory>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40 [7];
  
  local_40[5] = DAT_1468387a8 ^ (ulonglong)auStack_68;
  plVar3 = local_40 + 1;
  local_40[4] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  lVar2 = 2;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  local_40[1] = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  local_48 = 0;
  local_40[0] = 0;
  param_2[3] = 0;
  do {
    plVar1 = plVar3 + 0xffffffffffffffff;
    plVar3 = plVar3 + 0xffffffffffffffff;
    lVar2 = lVar2 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar2 != 0);
  return param_2;
}



// FUNCTION 141b802f0 FUN_141b802f0 body=302 status=ok
// SIG undefined FUN_141b802f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141b802f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)&local_138;
  local_28 = 0;
  local_20 = 0;
  param_1 = (undefined8 *)*param_1;
  lVar9 = 2;
  local_138 = 0;
  uStack_130 = 0x3f80000000000000;
  local_128 = 0;
  uStack_120 = 0x3f80000000000000;
  local_118 = 0;
  uStack_110 = 0x3f80000000000000;
  local_108 = 0;
  uStack_100 = 0x3f80000000000000;
  local_f8 = 0;
  uStack_f0 = 0x3f80000000000000;
  local_e8 = 0;
  uStack_e0 = 0x3f80000000000000;
  local_d8 = 0;
  uStack_d0 = 0x3f80000000000000;
  local_c8 = 0;
  uStack_c0 = 0x3f80000000000000;
  local_b8 = 0;
  uStack_b0 = 0x3f80000000000000;
  local_a8 = 0;
  uStack_a0 = 0x3f80000000000000;
  local_98 = 0;
  uStack_90 = 0x3f80000000000000;
  local_88 = 0;
  uStack_80 = 0x3f80000000000000;
  local_78 = 0;
  uStack_70 = 0x3f80000000000000;
  local_68 = 0;
  uStack_60 = 0x3f80000000000000;
  local_58 = 0;
  uStack_50 = 0x3f80000000000000;
  local_48 = 0;
  uStack_40 = 0x3f80000000000000;
  local_38 = 0;
  uStack_30 = 0x3f80000000000000;
  *param_2 = *param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  puVar5 = param_2 + 2;
  puVar6 = &local_138;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    uVar1 = puVar8[4];
    uVar4 = puVar8[5];
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar2 = puVar8[6];
    uVar3 = puVar8[7];
    puVar7[4] = uVar1;
    puVar7[5] = uVar4;
    uVar1 = puVar8[8];
    uVar4 = puVar8[9];
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar2 = puVar8[10];
    uVar3 = puVar8[0xb];
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    uVar1 = puVar8[0xc];
    uVar4 = puVar8[0xd];
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar2 = puVar8[0xe];
    uVar3 = puVar8[0xf];
    puVar7[0xc] = uVar1;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = uVar3;
    lVar9 = lVar9 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar8 + 0x10;
  } while (lVar9 != 0);
  uVar1 = puVar8[0x11];
  uVar2 = puVar8[0x12];
  uVar3 = puVar8[0x13];
  puVar7[0x10] = puVar8[0x10];
  puVar7[0x11] = uVar1;
  puVar7[0x12] = uVar2;
  puVar7[0x13] = uVar3;
  return param_2;
}



// FUNCTION 141b80420 FUN_141b80420 body=334 status=ok
// SIG undefined FUN_141b80420(void)

void FUN_141b80420(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulonglong local_res8;
  undefined1 local_88 [72];
  undefined1 local_40 [24];
  
  uVar1 = *(uint *)(*param_3 + 0x8c);
  uVar2 = *(undefined4 *)(*param_1 + 8);
  local_res8 = CONCAT44(uVar1 >> 0xc,
                        ((uVar1 >> 0x13 & 0x80 | uVar1 & 0x100) >> 2 | uVar1 & 0x10) >> 4 |
                        uVar1 & 8) & 0x3fffffffff;
  if ((int)param_3[5] != 0) {
    cVar4 = FUN_141ae2600(*param_1,*(undefined4 *)((longlong)param_3 + 0x24));
    if (cVar4 != '\0') {
      uVar7 = 1;
      goto LAB_141b804bb;
    }
  }
  uVar7 = 0;
LAB_141b804bb:
  lVar3 = param_1[1];
  param_5 = (undefined8 *)*param_5;
  uVar5 = FUN_142753a10();
  uVar6 = FUN_141b89db0(local_88,*(undefined8 *)(lVar3 + 0xa0),*(undefined8 *)(lVar3 + 0xa8),
                        param_3[2],*param_4,(int)param_3[4],
                        *(undefined4 *)((longlong)param_3 + 0x24),uVar7,&local_res8,0,uVar2,uVar5);
  FUN_141b8e110(param_2,param_1[1],&param_5,uVar6,uVar2);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_40);
  return;
}



// FUNCTION 141b80570 FUN_141b80570 body=2479 status=ok
// SIG undefined FUN_141b80570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b80570(longlong param_1,ulonglong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined *puVar18;
  bool bVar19;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  undefined8 *local_1e0;
  float local_1d8;
  float local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  uint local_170;
  uint local_16c;
  longlong local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
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
  plVar12 = (longlong *)0x0;
  local_160 = param_5;
  local_198 = (undefined *)((ulonglong)local_198 & 0xffffffff00000000);
  local_180 = param_2;
  local_168 = param_3;
  local_128 = param_4;
  lVar6 = FSceneRenderTargets::Get();
  uVar3 = *(undefined8 *)(lVar6 + 0x378);
  if ((int)DAT_1464c200c < 1) {
    uVar17 = 1;
  }
  else {
    uVar17 = 8;
    if ((int)DAT_1464c200c < 8) {
      uVar17 = (ulonglong)DAT_1464c200c;
    }
  }
  uVar4 = *(ulonglong *)(param_2 + 0x1aa0);
  iVar5 = (int)((longlong)((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) /
               (longlong)(int)uVar17);
  local_198._4_4_ = (int)(uVar4 >> 0x20);
  iVar2 = local_198._4_4_;
  local_198 = (undefined *)CONCAT44(local_198._4_4_ / (int)uVar17,iVar5);
  local_170 = (uint)((uint)(*(int *)(param_2 + 0x1aa8) - (int)uVar4) / uVar17);
  uVar4 = (ulonglong)(uint)(*(int *)(param_2 + 0x1aac) - iVar2);
  local_16c = (uint)(uVar4 / uVar17);
  plVar7 = (longlong *)FUN_141ce54b0(lVar6,uVar4 % uVar17);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_178 = *(undefined8 *)(*plVar7 + 8);
  puVar10 = puVar13 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *puVar13 = local_178;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar11 + 2) = 1;
  puVar11[3] = puVar13;
  *(undefined4 *)(puVar11 + 4) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x24) = 0;
  local_178 = 0;
  FUN_141a19150(param_1,*(undefined8 *)(*local_160 + 8),0,1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_178);
  iVar2 = local_198._4_4_;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_198 = (undefined *)CONCAT44(local_198._4_4_,local_170 + iVar5);
  puVar10 = puVar13 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_143f59420;
  *(int *)((longlong)puVar13 + 0x1c) = (int)local_198;
  *(int *)(puVar13 + 2) = iVar5;
  *(uint *)(puVar13 + 4) = local_16c + iVar2;
  *(int *)((longlong)puVar13 + 0x14) = iVar2;
  *(undefined4 *)(puVar13 + 3) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0x26;
  local_c4 = 0;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
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
  FUN_14049afe0(param_1,&local_118);
  local_e8 = FUN_1404a0ce0();
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_cc = local_cc & 0xffffffff00000000;
  local_190 = &DAT_146a28960;
  local_188 = 0;
  plVar15 = (longlong *)(*(longlong *)(local_180 + 0x3090) + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar15,&local_198,&local_190);
  plVar7 = plVar12;
  if ((int)local_198 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_198 * 0x20 + *plVar15);
  }
  local_178 = 0;
  local_188 = 0;
  plVar14 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar14 = plVar12;
  }
  lVar6 = *plVar14;
  cVar1 = *(char *)(*(longlong *)(local_168 + 0x30) + 0x188);
  if (cVar1 == '\0') {
    local_190 = &DAT_146a2e6e0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar15,&local_198,&local_190);
    plVar7 = plVar12;
    if ((int)local_198 != -1) {
      plVar7 = (longlong *)((longlong)(int)local_198 * 0x20 + *plVar15);
    }
    plVar15 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar15 = plVar12;
    }
    lVar16 = *plVar15;
    local_118 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_190 = (undefined *)0x0;
      plVar7 = (longlong *)0x1;
      plStack_110 = plVar12;
    }
    else {
      local_190 = *(undefined **)(lVar6 + 0x48);
      if (local_190[0x28] == '\0') {
        FUN_1419f3850(local_190);
      }
      plStack_110 = *(longlong **)(local_190 + 0x38);
      plVar7 = plVar12;
    }
    if (plVar7 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_190);
    }
    bVar19 = false;
    if (lVar16 == 0) {
      bVar19 = true;
      local_190 = (undefined *)0x0;
    }
    else {
      local_190 = *(undefined **)(lVar16 + 0x48);
      if (local_190[0x28] == '\0') {
        FUN_1419f3850(local_190);
      }
      plVar12 = *(longlong **)(local_190 + 0x40);
    }
    bVar19 = !bVar19;
  }
  else {
    if (cVar1 != '\x02') {
      local_190 = &DAT_146a2e440;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar15,&local_198,&local_190);
      plVar7 = plVar12;
      if ((int)local_198 != -1) {
        plVar7 = (longlong *)((longlong)(int)local_198 * 0x20 + *plVar15);
      }
      plVar15 = plVar7 + 2;
      if (plVar7 == (longlong *)0x0) {
        plVar15 = plVar12;
      }
      lVar16 = *plVar15;
      local_118 = DAT_1464c2720;
      if (lVar6 == 0) {
        local_198 = (undefined *)0x0;
        plVar7 = (longlong *)&DAT_00000010;
        plStack_110 = plVar12;
      }
      else {
        local_198 = *(undefined **)(lVar6 + 0x48);
        if (*(char *)((longlong)local_198 + 0x28) == '\0') {
          FUN_1419f3850(local_198);
        }
        plStack_110 = *(longlong **)((longlong)local_198 + 0x38);
        plVar7 = plVar12;
      }
      if (plVar7 != (longlong *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
      }
      bVar19 = false;
      if (lVar16 == 0) {
        bVar19 = true;
        local_198 = (undefined *)0x0;
      }
      else {
        local_198 = *(undefined **)(lVar16 + 0x48);
        if (*(char *)((longlong)local_198 + 0x28) == '\0') {
          FUN_1419f3850(local_198);
        }
        plVar12 = *(longlong **)((longlong)local_198 + 0x40);
      }
      local_f8 = plVar12;
      if (bVar19) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
      }
      FUN_141ed6ac0(param_1,&local_118,2,1);
      uVar17 = local_180;
      local_190 = *(undefined **)(local_180 + 0x20);
      local_198 = *(undefined **)(lVar16 + 0x48);
      puVar8 = local_198;
      puVar18 = local_190;
      if (local_198[0x28] == '\0') {
        FUN_1419f3850(local_198);
        puVar8 = local_198;
        puVar18 = local_190;
      }
      goto LAB_141b80bce;
    }
    local_190 = &DAT_146a2e590;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar15,&local_198,&local_190);
    plVar7 = plVar12;
    if ((int)local_198 != -1) {
      plVar7 = (longlong *)((longlong)(int)local_198 * 0x20 + *plVar15);
    }
    plVar15 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar15 = plVar12;
    }
    lVar16 = *plVar15;
    local_118 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_190 = (undefined *)0x0;
      plVar7 = (longlong *)&DAT_00000004;
      plStack_110 = plVar12;
    }
    else {
      local_190 = *(undefined **)(lVar6 + 0x48);
      if (local_190[0x28] == '\0') {
        FUN_1419f3850(local_190);
      }
      plStack_110 = *(longlong **)(local_190 + 0x38);
      plVar7 = plVar12;
    }
    if (plVar7 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_190);
    }
    if (lVar16 == 0) {
      local_190 = (undefined *)0x0;
      bVar19 = false;
    }
    else {
      local_190 = *(undefined **)(lVar16 + 0x48);
      if (local_190[0x28] == '\0') {
        FUN_1419f3850(local_190);
      }
      plVar12 = *(longlong **)(local_190 + 0x40);
      bVar19 = true;
    }
  }
  local_f8 = plVar12;
  if (!bVar19) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_190);
  }
  FUN_141ed6ac0(param_1,&local_118,2,1);
  uVar17 = local_180;
  puVar18 = *(undefined **)(local_180 + 0x20);
  puVar8 = *(undefined **)(lVar16 + 0x48);
  local_198 = puVar18;
  local_190 = puVar8;
  if (puVar8[0x28] == '\0') {
    FUN_1419f3850(puVar8);
    puVar8 = local_190;
    puVar18 = local_198;
  }
LAB_141b80bce:
  FUN_141aa9590(lVar16,param_1,*(undefined8 *)(puVar8 + 0x40),puVar18);
  local_190 = *(undefined **)(lVar16 + 0x48);
  if (local_190[0x28] == '\0') {
    FUN_1419f3850(local_190);
  }
  local_1e0 = &local_178;
  local_1e8 = uVar17;
  FUN_141b86de0(lVar16 + 0xc0,param_1,*(undefined8 *)(local_190 + 0x40),local_168);
  lVar9 = FSceneRenderTargets::Get(param_1);
  local_190 = *(undefined **)(lVar16 + 0x48);
  local_180 = CONCAT44(1.0 / (float)(int)((ulonglong)*(undefined8 *)(lVar9 + 0x378) >> 0x20),
                       1.0 / (float)(int)*(undefined8 *)(lVar9 + 0x378));
  if (local_190[0x28] == '\0') {
    FUN_1419f3850(local_190);
  }
  local_1e8 = local_1e8 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_1,*(undefined8 *)(local_190 + 0x40),lVar16 + 0x10a,&local_180);
  local_190 = *(undefined **)(lVar16 + 0x48);
  if (local_190[0x28] == '\0') {
    FUN_1419f3850(local_190);
  }
  local_190 = *(undefined **)(local_190 + 0x40);
  local_1e8 = CONCAT44(local_1e8._4_4_,0xf);
  FUN_141aa6800(lVar16 + 0x110,param_1,&local_190,*(undefined4 *)(uVar17 + 0x1a38));
  lVar16 = *(longlong *)(lVar6 + 0x48);
  local_190 = *(undefined **)(uVar17 + 0x20);
  if (*(char *)(lVar16 + 0x28) == '\0') {
    FUN_1419f3850(lVar16);
  }
  FUN_141aa9800(lVar6,param_1,*(undefined8 *)(lVar16 + 0x38),local_190);
  iVar2 = *(int *)(uVar17 + 0x1aa0);
  local_1a0 = 1;
  local_1a8 = 1;
  local_1d8 = (float)*(int *)(uVar17 + 0x1aa4);
  local_178 = CONCAT44(local_16c,local_170);
  local_1c0 = local_178;
  local_1d0 = (float)(*(int *)(uVar17 + 0x1aa8) - iVar2);
  local_1c8 = (float)(*(int *)(uVar17 + 0x1aac) - *(int *)(uVar17 + 0x1aa4));
  local_1e0 = (undefined8 *)CONCAT44(local_1e0._4_4_,(float)iVar2);
  local_1e8 = CONCAT44(local_1e8._4_4_,(float)local_16c);
  local_1b8 = uVar3;
  local_1b0 = lVar6;
  DrawRectangle(param_1,iVar2,local_170,(float)local_170);
  plVar7 = local_160;
  local_158 = 0xffffffff00000000;
  uStack_150 = 0xffffffffffffffff;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_148 = 0xffffffffffffffff;
  uStack_140 = 0xffffffffffffffff;
  local_138 = 0xffffffff;
  uStack_130 = 0;
  uVar3 = *(undefined8 *)(*local_160 + 0x10);
  plVar12 = *(longlong **)(*local_160 + 8);
  puVar10 = puVar13 + 10;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x58);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 10;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar13 + 2) = (undefined4)local_158;
  *(undefined4 *)((longlong)puVar13 + 0x14) = local_158._4_4_;
  *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_150;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_150._4_4_;
  *(undefined4 *)(puVar13 + 4) = (undefined4)local_148;
  *(undefined4 *)((longlong)puVar13 + 0x24) = local_148._4_4_;
  *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_140;
  *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_140._4_4_;
  *(undefined4 *)(puVar13 + 6) = (undefined4)local_138;
  *(undefined4 *)((longlong)puVar13 + 0x34) = local_138._4_4_;
  *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_130;
  *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_130._4_4_;
  puVar13[8] = plVar12;
  puVar13[9] = uVar3;
  lVar6 = (**(code **)(*plVar12 + 8))(plVar12);
  if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar13[8] + 0x18))(), lVar6 == 0)) {
    (**(code **)(*(longlong *)puVar13[8] + 0x20))();
  }
  lVar6 = (**(code **)(*(longlong *)puVar13[9] + 8))();
  if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar13[9] + 0x18))(), lVar6 == 0)) {
    (**(code **)(*(longlong *)puVar13[9] + 0x20))();
  }
  if (local_128 != plVar7) {
    lVar6 = *local_128;
    *local_128 = *plVar7;
    *plVar7 = lVar6;
  }
  return;
}



// FUNCTION 141b80f20 FUN_141b80f20 body=2479 status=ok
// SIG undefined FUN_141b80f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b80f20(longlong param_1,ulonglong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined *puVar18;
  bool bVar19;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  undefined8 *local_1e0;
  float local_1d8;
  float local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  uint local_170;
  uint local_16c;
  longlong local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
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
  plVar12 = (longlong *)0x0;
  local_160 = param_5;
  local_198 = (undefined *)((ulonglong)local_198 & 0xffffffff00000000);
  local_180 = param_2;
  local_168 = param_3;
  local_128 = param_4;
  lVar6 = FSceneRenderTargets::Get();
  uVar3 = *(undefined8 *)(lVar6 + 0x378);
  if ((int)DAT_1464c200c < 1) {
    uVar17 = 1;
  }
  else {
    uVar17 = 8;
    if ((int)DAT_1464c200c < 8) {
      uVar17 = (ulonglong)DAT_1464c200c;
    }
  }
  uVar4 = *(ulonglong *)(param_2 + 0x1aa0);
  iVar5 = (int)((longlong)((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) /
               (longlong)(int)uVar17);
  local_198._4_4_ = (int)(uVar4 >> 0x20);
  iVar2 = local_198._4_4_;
  local_198 = (undefined *)CONCAT44(local_198._4_4_ / (int)uVar17,iVar5);
  local_170 = (uint)((uint)(*(int *)(param_2 + 0x1aa8) - (int)uVar4) / uVar17);
  uVar4 = (ulonglong)(uint)(*(int *)(param_2 + 0x1aac) - iVar2);
  local_16c = (uint)(uVar4 / uVar17);
  plVar7 = (longlong *)FUN_141ce54b0(lVar6,uVar4 % uVar17);
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_178 = *(undefined8 *)(*plVar7 + 8);
  puVar10 = puVar13 + 1;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x10);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 1;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *puVar13 = local_178;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar11 + 2) = 1;
  puVar11[3] = puVar13;
  *(undefined4 *)(puVar11 + 4) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x24) = 0;
  local_178 = 0;
  FUN_141a19150(param_1,*(undefined8 *)(*local_160 + 8),0,1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_178);
  iVar2 = local_198._4_4_;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_198 = (undefined *)CONCAT44(local_198._4_4_,local_170 + iVar5);
  puVar10 = puVar13 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_143f59420;
  *(int *)((longlong)puVar13 + 0x1c) = (int)local_198;
  *(int *)(puVar13 + 2) = iVar5;
  *(uint *)(puVar13 + 4) = local_16c + iVar2;
  *(int *)((longlong)puVar13 + 0x14) = iVar2;
  *(undefined4 *)(puVar13 + 3) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0x26;
  local_c4 = 0;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
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
  FUN_14049afe0(param_1,&local_118);
  local_e8 = FUN_1404a0ce0();
  uStack_e0 = FUN_140985530();
  local_d8 = FUN_1409853f0();
  local_cc = local_cc & 0xffffffff00000000;
  local_190 = &DAT_146a28960;
  local_188 = 0;
  plVar15 = (longlong *)(*(longlong *)(local_180 + 0x3090) + 0x38);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar15,&local_198,&local_190);
  plVar7 = plVar12;
  if ((int)local_198 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_198 * 0x20 + *plVar15);
  }
  local_178 = 0;
  local_188 = 0;
  plVar14 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar14 = plVar12;
  }
  lVar6 = *plVar14;
  cVar1 = *(char *)(*(longlong *)(local_168 + 0x30) + 0x188);
  if (cVar1 == '\0') {
    local_190 = &DAT_146a2ead0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar15,&local_198,&local_190);
    plVar7 = plVar12;
    if ((int)local_198 != -1) {
      plVar7 = (longlong *)((longlong)(int)local_198 * 0x20 + *plVar15);
    }
    plVar15 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar15 = plVar12;
    }
    lVar16 = *plVar15;
    local_118 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_190 = (undefined *)0x0;
      plVar7 = (longlong *)0x1;
      plStack_110 = plVar12;
    }
    else {
      local_190 = *(undefined **)(lVar6 + 0x48);
      if (local_190[0x28] == '\0') {
        FUN_1419f3850(local_190);
      }
      plStack_110 = *(longlong **)(local_190 + 0x38);
      plVar7 = plVar12;
    }
    if (plVar7 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_190);
    }
    bVar19 = false;
    if (lVar16 == 0) {
      bVar19 = true;
      local_190 = (undefined *)0x0;
    }
    else {
      local_190 = *(undefined **)(lVar16 + 0x48);
      if (local_190[0x28] == '\0') {
        FUN_1419f3850(local_190);
      }
      plVar12 = *(longlong **)(local_190 + 0x40);
    }
    bVar19 = !bVar19;
  }
  else {
    if (cVar1 != '\x02') {
      local_190 = &DAT_146a2e830;
      TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(plVar15,&local_198,&local_190);
      plVar7 = plVar12;
      if ((int)local_198 != -1) {
        plVar7 = (longlong *)((longlong)(int)local_198 * 0x20 + *plVar15);
      }
      plVar15 = plVar7 + 2;
      if (plVar7 == (longlong *)0x0) {
        plVar15 = plVar12;
      }
      lVar16 = *plVar15;
      local_118 = DAT_1464c2720;
      if (lVar6 == 0) {
        local_198 = (undefined *)0x0;
        plVar7 = (longlong *)&DAT_00000010;
        plStack_110 = plVar12;
      }
      else {
        local_198 = *(undefined **)(lVar6 + 0x48);
        if (*(char *)((longlong)local_198 + 0x28) == '\0') {
          FUN_1419f3850(local_198);
        }
        plStack_110 = *(longlong **)((longlong)local_198 + 0x38);
        plVar7 = plVar12;
      }
      if (plVar7 != (longlong *)0x0) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
      }
      bVar19 = false;
      if (lVar16 == 0) {
        bVar19 = true;
        local_198 = (undefined *)0x0;
      }
      else {
        local_198 = *(undefined **)(lVar16 + 0x48);
        if (*(char *)((longlong)local_198 + 0x28) == '\0') {
          FUN_1419f3850(local_198);
        }
        plVar12 = *(longlong **)((longlong)local_198 + 0x40);
      }
      local_f8 = plVar12;
      if (bVar19) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_198);
      }
      FUN_141ed6ac0(param_1,&local_118,2,1);
      uVar17 = local_180;
      local_190 = *(undefined **)(local_180 + 0x20);
      local_198 = *(undefined **)(lVar16 + 0x48);
      puVar8 = local_198;
      puVar18 = local_190;
      if (local_198[0x28] == '\0') {
        FUN_1419f3850(local_198);
        puVar8 = local_198;
        puVar18 = local_190;
      }
      goto LAB_141b8157e;
    }
    local_190 = &DAT_146a2e980;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar15,&local_198,&local_190);
    plVar7 = plVar12;
    if ((int)local_198 != -1) {
      plVar7 = (longlong *)((longlong)(int)local_198 * 0x20 + *plVar15);
    }
    plVar15 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar15 = plVar12;
    }
    lVar16 = *plVar15;
    local_118 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_190 = (undefined *)0x0;
      plVar7 = (longlong *)&DAT_00000004;
      plStack_110 = plVar12;
    }
    else {
      local_190 = *(undefined **)(lVar6 + 0x48);
      if (local_190[0x28] == '\0') {
        FUN_1419f3850(local_190);
      }
      plStack_110 = *(longlong **)(local_190 + 0x38);
      plVar7 = plVar12;
    }
    if (plVar7 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_190);
    }
    if (lVar16 == 0) {
      local_190 = (undefined *)0x0;
      bVar19 = false;
    }
    else {
      local_190 = *(undefined **)(lVar16 + 0x48);
      if (local_190[0x28] == '\0') {
        FUN_1419f3850(local_190);
      }
      plVar12 = *(longlong **)(local_190 + 0x40);
      bVar19 = true;
    }
  }
  local_f8 = plVar12;
  if (!bVar19) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_190);
  }
  FUN_141ed6ac0(param_1,&local_118,2,1);
  uVar17 = local_180;
  puVar18 = *(undefined **)(local_180 + 0x20);
  puVar8 = *(undefined **)(lVar16 + 0x48);
  local_198 = puVar18;
  local_190 = puVar8;
  if (puVar8[0x28] == '\0') {
    FUN_1419f3850(puVar8);
    puVar8 = local_190;
    puVar18 = local_198;
  }
LAB_141b8157e:
  FUN_141aa9590(lVar16,param_1,*(undefined8 *)(puVar8 + 0x40),puVar18);
  local_190 = *(undefined **)(lVar16 + 0x48);
  if (local_190[0x28] == '\0') {
    FUN_1419f3850(local_190);
  }
  local_1e0 = &local_178;
  local_1e8 = uVar17;
  FUN_141b86de0(lVar16 + 0xc0,param_1,*(undefined8 *)(local_190 + 0x40),local_168);
  lVar9 = FSceneRenderTargets::Get(param_1);
  local_190 = *(undefined **)(lVar16 + 0x48);
  local_180 = CONCAT44(1.0 / (float)(int)((ulonglong)*(undefined8 *)(lVar9 + 0x378) >> 0x20),
                       1.0 / (float)(int)*(undefined8 *)(lVar9 + 0x378));
  if (local_190[0x28] == '\0') {
    FUN_1419f3850(local_190);
  }
  local_1e8 = local_1e8 & 0xffffffff00000000;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_1,*(undefined8 *)(local_190 + 0x40),lVar16 + 0x10a,&local_180);
  local_190 = *(undefined **)(lVar16 + 0x48);
  if (local_190[0x28] == '\0') {
    FUN_1419f3850(local_190);
  }
  local_190 = *(undefined **)(local_190 + 0x40);
  local_1e8 = CONCAT44(local_1e8._4_4_,0xf);
  FUN_141aa6800(lVar16 + 0x110,param_1,&local_190,*(undefined4 *)(uVar17 + 0x1a38));
  lVar16 = *(longlong *)(lVar6 + 0x48);
  local_190 = *(undefined **)(uVar17 + 0x20);
  if (*(char *)(lVar16 + 0x28) == '\0') {
    FUN_1419f3850(lVar16);
  }
  FUN_141aa9800(lVar6,param_1,*(undefined8 *)(lVar16 + 0x38),local_190);
  iVar2 = *(int *)(uVar17 + 0x1aa0);
  local_1a0 = 1;
  local_1a8 = 1;
  local_1d8 = (float)*(int *)(uVar17 + 0x1aa4);
  local_178 = CONCAT44(local_16c,local_170);
  local_1c0 = local_178;
  local_1d0 = (float)(*(int *)(uVar17 + 0x1aa8) - iVar2);
  local_1c8 = (float)(*(int *)(uVar17 + 0x1aac) - *(int *)(uVar17 + 0x1aa4));
  local_1e0 = (undefined8 *)CONCAT44(local_1e0._4_4_,(float)iVar2);
  local_1e8 = CONCAT44(local_1e8._4_4_,(float)local_16c);
  local_1b8 = uVar3;
  local_1b0 = lVar6;
  DrawRectangle(param_1,iVar2,local_170,(float)local_170);
  plVar7 = local_160;
  local_158 = 0xffffffff00000000;
  uStack_150 = 0xffffffffffffffff;
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  local_148 = 0xffffffffffffffff;
  uStack_140 = 0xffffffffffffffff;
  local_138 = 0xffffffff;
  uStack_130 = 0;
  uVar3 = *(undefined8 *)(*local_160 + 0x10);
  plVar12 = *(longlong **)(*local_160 + 8);
  puVar10 = puVar13 + 10;
  if (*(undefined8 **)(param_1 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x58);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar13 + 10;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar13;
  *(undefined8 **)(param_1 + 8) = puVar13 + 1;
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar13 + 2) = (undefined4)local_158;
  *(undefined4 *)((longlong)puVar13 + 0x14) = local_158._4_4_;
  *(undefined4 *)(puVar13 + 3) = (undefined4)uStack_150;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_150._4_4_;
  *(undefined4 *)(puVar13 + 4) = (undefined4)local_148;
  *(undefined4 *)((longlong)puVar13 + 0x24) = local_148._4_4_;
  *(undefined4 *)(puVar13 + 5) = (undefined4)uStack_140;
  *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_140._4_4_;
  *(undefined4 *)(puVar13 + 6) = (undefined4)local_138;
  *(undefined4 *)((longlong)puVar13 + 0x34) = local_138._4_4_;
  *(undefined4 *)(puVar13 + 7) = (undefined4)uStack_130;
  *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_130._4_4_;
  puVar13[8] = plVar12;
  puVar13[9] = uVar3;
  lVar6 = (**(code **)(*plVar12 + 8))(plVar12);
  if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar13[8] + 0x18))(), lVar6 == 0)) {
    (**(code **)(*(longlong *)puVar13[8] + 0x20))();
  }
  lVar6 = (**(code **)(*(longlong *)puVar13[9] + 8))();
  if ((lVar6 == 0) && (lVar6 = (**(code **)(*(longlong *)puVar13[9] + 0x18))(), lVar6 == 0)) {
    (**(code **)(*(longlong *)puVar13[9] + 0x20))();
  }
  if (local_128 != plVar7) {
    lVar6 = *local_128;
    *local_128 = *plVar7;
    *plVar7 = lVar6;
  }
  return;
}



// FUNCTION 141b818d0 FUN_141b818d0 body=597 status=ok
// SIG undefined FUN_141b818d0(void)

uint FUN_141b818d0(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  longlong param_5,longlong param_6,ulonglong param_7,longlong param_8,char *param_9
                  )

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [56];
  
  iVar1 = *(int *)(param_5 + 0x28);
  lVar3 = *(longlong *)(param_5 + 8);
  FUN_141b36960(param_5,param_3,*(undefined8 *)(param_6 + 8),*(undefined1 *)(param_3 + 0x3099));
  if (lVar3 == *(longlong *)(param_5 + 8)) {
    cVar4 = *param_9;
  }
  else {
    *param_9 = '\0';
    cVar4 = '\0';
  }
  iVar2 = *(int *)(param_5 + 0x28);
  uVar7 = 0;
  uVar8 = uVar7;
  if (cVar4 == '\0') {
    FUN_141bc0840(param_8 + 0x20,param_5,param_3);
    if (*(longlong *)(param_8 + 0x88) == 0) {
      puVar5 = (undefined8 *)
               FUN_141b9c1c0(param_8 + 0x20,local_60,*(undefined4 *)(param_3 + 0x1a38));
      local_90 = *puVar5;
      uStack_88 = puVar5[1];
      local_80 = *(undefined4 *)(puVar5 + 2);
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 0x14);
      uStack_78 = *(undefined4 *)(puVar5 + 3);
      uStack_74 = *(undefined4 *)((longlong)puVar5 + 0x1c);
      local_70 = *(undefined4 *)(puVar5 + 4);
      uStack_6c = *(undefined4 *)((longlong)puVar5 + 0x24);
      uStack_68 = *(undefined4 *)(puVar5 + 5);
      uStack_64 = *(undefined4 *)((longlong)puVar5 + 0x2c);
    }
    else {
      local_90 = *(undefined8 *)(param_8 + 0x80);
      uStack_88 = *(undefined8 *)(param_8 + 0x88);
      local_80 = *(undefined4 *)(param_8 + 0x90);
      uStack_7c = *(undefined4 *)(param_8 + 0x94);
      uStack_78 = *(undefined4 *)(param_8 + 0x98);
      uStack_74 = *(undefined4 *)(param_8 + 0x9c);
      local_70 = *(undefined4 *)(param_8 + 0xa0);
      uStack_6c = *(undefined4 *)(param_8 + 0xa4);
      uStack_68 = *(undefined4 *)(param_8 + 0xa8);
      uStack_64 = *(undefined4 *)(param_8 + 0xac);
    }
    FUN_141a9adc0(param_2,param_8 + 0x20,param_5,&local_90);
    FUN_141bbe140(*(undefined8 *)(param_8 + 0x58),param_2,param_3,param_5);
    FUN_141bbda70(*(undefined8 *)(param_8 + 0x60),param_2,param_3,param_5);
    *param_9 = '\x01';
  }
  else if (iVar1 != iVar2) {
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f489c0;
    *(int *)(puVar6 + 2) = iVar2;
  }
  do {
    if ((param_7 & 1) != 0) {
      uVar8 = uVar8 + 1;
      uVar10 = uVar7;
      FUN_141bbd400(param_8 + 0x20,param_2,param_3,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(param_6 + 8) + 0xc0) + 8),
                    *(longlong *)(param_6 + 8),uVar7,param_5,param_6,param_4);
      FUN_141b315b0(param_8 + 0x20,param_2,param_3,*(undefined8 *)(param_6 + 8),uVar7,
                    uVar10 & 0xffffff00);
    }
    uVar7 = uVar7 + 1;
    bVar9 = 1 < param_7;
    param_7 = param_7 >> 1;
  } while (bVar9);
  return uVar8;
}



// FUNCTION 141b81b30 FUN_141b81b30 body=754 status=ok
// SIG undefined FUN_141b81b30(void)

int FUN_141b81b30(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4,
                 longlong param_5,longlong param_6,ulonglong param_7,longlong param_8,char *param_9)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [56];
  
  lVar2 = param_6;
  iVar8 = *(int *)(param_5 + 0x28);
  lVar7 = *(longlong *)(param_5 + 8);
  FUN_141b36960(param_5,param_3,*(undefined8 *)(param_6 + 8),*(undefined1 *)(param_3 + 0x3099));
  if (lVar7 == *(longlong *)(param_5 + 8)) {
    cVar3 = *param_9;
  }
  else {
    *param_9 = '\0';
    cVar3 = '\0';
  }
  iVar9 = *(int *)(param_5 + 0x28);
  if (cVar3 == '\0') {
    FUN_141bc0840(param_8 + 0x20,param_5,param_3);
    if (*(longlong *)(param_8 + 0x88) == 0) {
      puVar4 = (undefined8 *)
               FUN_141b9c1c0(param_8 + 0x20,local_60,*(undefined4 *)(param_3 + 0x1a38));
      local_90 = *puVar4;
      uStack_88 = puVar4[1];
      local_80 = *(undefined4 *)(puVar4 + 2);
      uStack_7c = *(undefined4 *)((longlong)puVar4 + 0x14);
      uStack_78 = *(undefined4 *)(puVar4 + 3);
      uStack_74 = *(undefined4 *)((longlong)puVar4 + 0x1c);
      local_70 = *(undefined4 *)(puVar4 + 4);
      uStack_6c = *(undefined4 *)((longlong)puVar4 + 0x24);
      uStack_68 = *(undefined4 *)(puVar4 + 5);
      uStack_64 = *(undefined4 *)((longlong)puVar4 + 0x2c);
    }
    else {
      local_90 = *(undefined8 *)(param_8 + 0x80);
      uStack_88 = *(undefined8 *)(param_8 + 0x88);
      local_80 = *(undefined4 *)(param_8 + 0x90);
      uStack_7c = *(undefined4 *)(param_8 + 0x94);
      uStack_78 = *(undefined4 *)(param_8 + 0x98);
      uStack_74 = *(undefined4 *)(param_8 + 0x9c);
      local_70 = *(undefined4 *)(param_8 + 0xa0);
      uStack_6c = *(undefined4 *)(param_8 + 0xa4);
      uStack_68 = *(undefined4 *)(param_8 + 0xa8);
      uStack_64 = *(undefined4 *)(param_8 + 0xac);
    }
    FUN_141a9adc0(param_2,param_8 + 0x20,param_5,&local_90);
    FUN_141bbe140(*(undefined8 *)(param_8 + 0x58),param_2,param_3,param_5);
    FUN_141bbda70(*(undefined8 *)(param_8 + 0x60),param_2,param_3,param_5);
    *param_9 = '\x01';
  }
  else if (iVar8 != iVar9) {
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
    *puVar5 = &PTR_LAB_143f489c0;
    *(int *)(puVar5 + 2) = iVar9;
  }
  iVar9 = 0;
  iVar8 = 0;
  param_6 = 0;
  do {
    if ((param_7 & 1) != 0) {
      lVar7 = *(longlong *)(lVar2 + 8);
      uVar1 = *(undefined8 *)(*(longlong *)(lVar7 + 0xc0) + 8);
      lVar6 = *(longlong *)(lVar7 + 0x78);
      if (*(longlong *)(lVar7 + 0x78) == 0) {
        lVar6 = lVar7;
      }
      cVar3 = *(char *)(lVar6 + 0x67 + param_6);
      lVar7 = (ulonglong)(cVar3 != '\0') + 1;
      iVar9 = iVar9 + (cVar3 != '\0') + 1;
      do {
        FUN_141bbd400(param_8 + 0x20,param_2,param_3,uVar1,*(undefined8 *)(lVar2 + 8),iVar8,param_5,
                      lVar2,param_4);
        FUN_141b315b0(param_8 + 0x20,param_2,param_3,*(undefined8 *)(lVar2 + 8),iVar8,1);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    param_6 = param_6 + 0x78;
    iVar8 = iVar8 + 1;
    bVar10 = 1 < param_7;
    param_7 = param_7 >> 1;
  } while (bVar10);
  return iVar9;
}



// FUNCTION 141b81e30 FUN_141b81e30 body=470 status=ok
// SIG undefined FUN_141b81e30(void)

undefined8
FUN_141b81e30(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined1 *param_4,
             char param_5,undefined1 param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined1 local_34;
  
  lVar3 = 0x2268;
  if (param_5 != '\x01') {
    lVar3 = 0x2258;
  }
  if (*(int *)(lVar3 + param_2) == 0) {
    return 0;
  }
  lVar4 = 0x2260;
  if (param_5 != '\x01') {
    lVar4 = 0x2250;
  }
  local_78 = (longlong *)(lVar4 + param_2);
  iVar2 = *(int *)(lVar3 + param_2) + -1;
  local_80 = (longlong)iVar2;
  if (-1 < iVar2) {
    lVar3 = 0;
    do {
      local_88 = (longlong *)0x0;
      lVar4 = *(longlong *)(*local_78 + lVar3 * 8);
      (**(code **)(**(longlong **)(lVar4 + 0xa8) + 0x40))
                (*(longlong **)(lVar4 + 0xa8),*(undefined4 *)(param_2 + 0x1a38),local_70,&local_88);
      cVar1 = (**(code **)(*local_88 + 0x28))();
      uVar5 = (uint)(cVar1 != '\0');
      do {
        local_68 = *param_3;
        local_60 = param_3[1];
        local_58 = *(undefined4 *)(param_3 + 2);
        local_50 = param_3[3];
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        local_48 = param_3[4];
        local_38 = *(undefined4 *)(param_3 + 6);
        local_40 = *(undefined4 *)(param_3 + 5);
        local_3c = -(uint)(uVar5 != 0) & 8 ^ *(uint *)((longlong)param_3 + 0x2c);
        local_34 = 0;
        FUN_141b970f0(param_1,param_2,*param_4,lVar4,param_6,&local_68,0,
                      *(undefined4 *)(lVar4 + 0xb0));
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
        uVar5 = uVar5 - 1;
      } while (-1 < (int)uVar5);
      lVar3 = lVar3 + 1;
    } while (lVar3 <= local_80);
  }
  return 1;
}



// FUNCTION 141b82010 FUN_141b82010 body=1637 status=ok
// SIG undefined FUN_141b82010(void)

ulonglong FUN_141b82010(longlong param_1,undefined *param_2,longlong param_3,undefined8 param_4,
                       undefined1 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                       int param_9)

{
  float fVar1;
  bool bVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  int *piVar20;
  longlong lVar21;
  ulonglong *puVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  longlong local_160;
  undefined8 local_158;
  ulonglong *local_150;
  undefined8 local_148;
  undefined8 local_140;
  uint uStack_138;
  uint uStack_134;
  undefined8 local_130;
  uint uStack_128;
  int iStack_124;
  uint local_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  longlong local_f8;
  longlong *local_f0;
  uint uStack_e8;
  uint uStack_e4;
  uint *puStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  
  lVar25 = param_8;
  FUN_141b92ca0(param_1,*(undefined8 *)(param_8 + 0x10));
  local_118 = *(undefined8 **)(param_3 + 0x900);
  local_110 = *(float *)(param_3 + 0x908);
  uVar14 = 0;
  local_150 = (ulonglong *)0x0;
  local_148 = 0;
  FUN_140848da0(&local_150,0x80);
  local_160 = 0;
  local_158 = 0;
  FUN_140848da0(&local_160,0x40);
  fVar6 = local_110;
  local_f0 = (longlong *)(param_1 + 0x40);
  iVar10 = *(int *)(param_1 + 0x68);
  puStack_e0 = (uint *)(param_1 + 0x50);
  local_140._0_4_ = 0;
  local_140._4_4_ = 1;
  local_130._4_4_ = 0;
  uStack_128 = 0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar17 = puStack_e0;
    }
    uVar13 = *puVar17;
    uVar15 = uVar14;
    uVar12 = uVar14;
    while (uVar13 == 0) {
      iVar9 = (int)uVar15;
      uStack_128 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uStack_128;
      local_140._0_4_ = iVar9 + 1;
      uVar15 = (ulonglong)(uint)local_140;
      if ((int)((iVar10 + -1 >> 0x1f & 0x1fU) + iVar10 + -1) >> 5 <= iVar9) goto LAB_141b82143;
      uVar13 = puVar17[(longlong)iVar9 + 1];
    }
    local_140._4_4_ = -uVar13 & uVar13;
    iVar9 = 0x1f;
    if (local_140._4_4_ != 0) {
      for (; local_140._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (local_140._4_4_ == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    local_130._4_4_ = (uStack_128 - iVar9) + 0x1f;
    if (iVar10 < local_130._4_4_) {
LAB_141b82143:
      local_130._4_4_ = iVar10;
    }
  }
  uStack_e8 = (uint)local_140;
  uStack_e4 = local_140._4_4_;
  uStack_d8 = 0xffffffff;
  iStack_d4 = local_130._4_4_;
  uStack_d0 = uStack_128;
  uStack_cc = iStack_124;
  uStack_138 = (uint)local_140;
  uStack_134 = local_140._4_4_;
  local_120 = uStack_128;
  uStack_11c = iStack_124;
  uStack_128 = 0xffffffff;
  iStack_124 = local_130._4_4_;
  bVar2 = local_130._4_4_ < iVar10;
  puVar22 = local_150;
  local_140 = local_f0;
  local_130 = puStack_e0;
  if (bVar2) {
    fVar5 = local_118._4_4_;
    fVar4 = (float)local_118;
    do {
      puVar23 = (undefined8 *)((longlong)iStack_124 * 0xe0 + *local_140);
      uVar11 = *(undefined8 *)((longlong)puVar23 + 0xb4);
      fVar1 = *(float *)((longlong)puVar23 + 0xbc);
      piVar20 = (int *)*puVar23;
      local_f8 = (longlong)*(int *)(puVar23 + 3);
      param_8._0_4_ = 0;
      local_118 = puVar23;
      local_108 = uVar11;
      local_100 = fVar1;
      if (0 < local_f8) {
        local_108._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
        fVar8 = local_108._4_4_;
        local_108._0_4_ = (float)uVar11;
        fVar7 = (float)local_108;
        uVar15 = uVar14;
        uVar12 = uVar14;
        do {
          uVar3 = local_158;
          uVar13 = (uint)uVar12;
          lVar19 = (longlong)*piVar20 >> 5;
          uVar16 = 1 << ((byte)*piVar20 & 0x1f);
          lVar21 = *(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x10);
          if (lVar21 == 0) {
            lVar21 = *(longlong *)(lVar25 + 0x10);
          }
          iVar10 = (int)local_158;
          if ((*(uint *)(lVar21 + lVar19 * 4) & uVar16) == 0) {
            lVar21 = *(longlong *)(*(longlong *)(lVar25 + 0x18) + 0x10);
            if (lVar21 == 0) {
              lVar21 = *(longlong *)(lVar25 + 0x18);
            }
            if ((*(uint *)(lVar21 + lVar19 * 4) & uVar16) != 0) {
              local_158._0_4_ = (int)local_158 + 1;
              if (local_158._4_4_ < (int)local_158) {
                FUN_140848b80(&local_160,uVar3 & 0xffffffff);
                uVar12 = (ulonglong)(uint)param_8;
              }
              uVar11 = *(undefined8 *)(lVar25 + 0x28);
              goto LAB_141b82327;
            }
          }
          else {
            local_158._0_4_ = (int)local_158 + 1;
            if (local_158._4_4_ < (int)local_158) {
              FUN_140848b80(&local_160,uVar3 & 0xffffffff);
              uVar12 = (ulonglong)(uint)param_8;
            }
            uVar11 = *(undefined8 *)(lVar25 + 0x20);
LAB_141b82327:
            uVar3 = local_148;
            fVar32 = fVar8 - fVar5;
            *(undefined8 *)(local_160 + (longlong)iVar10 * 8) = uVar11;
            lVar21 = puVar23[2];
            fVar29 = *(float *)(uVar15 + 0x10 + lVar21) - fVar4;
            fVar27 = *(float *)(uVar15 + 0x18 + lVar21) - fVar6;
            fVar31 = *(float *)(uVar15 + 0x14 + lVar21) - fVar5;
            lVar19 = *(longlong *)(uVar15 + 8 + lVar21);
            fVar30 = fVar7 - fVar4;
            fVar28 = fVar1 - fVar6;
            if ((*(char *)(uVar15 + 0x2c + lVar21) != '\0') ||
               (uVar18 = uVar14, 262144.0 < *(float *)(uVar15 + 0x28 + lVar21))) {
              uVar18 = 0x8000000000000000;
            }
            uVar16 = *(uint *)((longlong)puVar23 + 0xc4);
            lVar21 = *(longlong *)(lVar19 + 0xa0);
            lVar19 = *(longlong *)(lVar19 + 0xa8);
            lVar24 = (longlong)(int)local_148;
            iVar10 = (int)local_148 + 1;
            local_148 = CONCAT44(local_148._4_4_,iVar10);
            uVar13 = (uint)uVar12;
            if (local_148._4_4_ < iVar10) {
              FUN_140848b80(&local_150,uVar3 & 0xffffffff);
              puVar22 = local_150;
              uVar13 = (uint)param_8;
            }
            puVar22[lVar24] =
                 ((((ulonglong)(uVar16 & 0xffff) << 8 |
                   (ulonglong)
                   ((uint)((fVar32 * fVar32 + fVar30 * fVar30 + fVar28 * fVar28) * 9.536743e-07) &
                   0x7f000000)) << 0xc | (ulonglong)(((uint)(lVar21 << 8) ^ (uint)lVar21) & 0xff000)
                  ) << 8 | (ulonglong)(((uint)(lVar19 << 8) ^ (uint)lVar19) & 0xff000)) << 0xc |
                 (ulonglong)
                 ((uint)((fVar31 * fVar31 + fVar29 * fVar29 + fVar27 * fVar27) * 9.536743e-07) >> 7
                 & 0xff0000) | uVar12 & 0xffff | uVar18;
            puVar23 = local_118;
          }
          param_8._0_4_ = uVar13 + 1;
          uVar12 = (ulonglong)(uint)param_8;
          uVar15 = uVar15 + 0x38;
          piVar20 = piVar20 + 1;
          local_f8 = local_f8 + -1;
        } while (local_f8 != 0);
      }
      uStack_128 = uStack_128 & ~uStack_134;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_138);
    } while (iStack_124 < (int)local_130[6]);
  }
  iVar10 = (int)local_148;
  FUN_141b84da0(puVar22,(longlong)(int)local_148,(undefined1)param_9,&param_8);
  iVar26 = -1;
  param_8._0_4_ = (uint)param_8 & 0xffffff00;
  iVar9 = param_9;
  if (iVar10 <= param_9) {
    iVar9 = iVar10;
  }
  lVar25 = (longlong)iVar9;
  if (0 < iVar9) {
    lVar21 = local_160 - (longlong)puVar22;
    uVar15 = uVar14;
    do {
      uVar12 = *puVar22 >> 0x28 & 0xffff;
      iVar10 = (int)uVar12;
      if (iVar10 != iVar26) {
        param_8._0_4_ = (uint)param_8 & 0xffffff00;
        uVar15 = uVar12 * 0xe0 + *(longlong *)(param_1 + 0x40);
        iVar26 = iVar10;
      }
      lVar24 = (*puVar22 & 0xffff) * 0x38 + *(longlong *)(uVar15 + 0x10);
      lVar19 = *(longlong *)(lVar24 + 8);
      if ((*(uint *)(lVar19 + 0x8c) & 0x2000000) == 0) {
        lVar19 = (1L << ((byte)*(undefined4 *)(lVar19 + 0x80) & 0x3f)) + -1;
      }
      else {
        lVar19 = *(longlong *)
                  (**(longlong **)(lVar21 + (longlong)puVar22) +
                  (longlong)*(int *)(lVar19 + 0xcc) * 8);
      }
      FUN_141b818d0(param_1,param_2,param_3,param_5,param_4,lVar24,lVar19,uVar15,&param_8);
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      if (((((uVar13 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0)) &&
         ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
        FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
      }
      puVar22 = puVar22 + 1;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  return uVar14;
}



// FUNCTION 141b82680 FUN_141b82680 body=1452 status=ok
// SIG undefined FUN_141b82680(void)

ulonglong FUN_141b82680(longlong param_1,undefined *param_2,longlong param_3,undefined8 param_4,
                       undefined1 param_5,longlong param_6,longlong *param_7,undefined8 param_8,
                       int param_9)

{
  undefined8 uVar1;
  float fVar2;
  ulonglong uVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  uint *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 local_158 [4];
  float local_154;
  longlong local_150;
  undefined8 local_148;
  undefined8 local_140;
  uint uStack_138;
  uint uStack_134;
  undefined8 local_130;
  uint uStack_128;
  int iStack_124;
  uint local_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  longlong *local_f8;
  uint uStack_f0;
  uint uStack_ec;
  uint *puStack_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  
  FUN_141b92ca0(param_1,param_6);
  local_118 = *(undefined8 **)(param_3 + 0x900);
  local_110 = *(float *)(param_3 + 0x908);
  uVar17 = 0;
  local_150 = 0;
  local_148 = 0;
  FUN_140848da0(&local_150,0x80);
  fVar8 = local_110;
  local_f8 = (longlong *)(param_1 + 0x40);
  iVar12 = *(int *)(param_1 + 0x68);
  puStack_e8 = (uint *)(param_1 + 0x50);
  local_140._0_4_ = 0;
  local_140._4_4_ = 1;
  local_130._4_4_ = 0;
  uStack_128 = 0;
  if (iVar12 != 0) {
    puVar20 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar20 = puStack_e8;
    }
    uVar16 = *puVar20;
    uVar15 = uVar17;
    uVar22 = uVar17;
    while (uVar16 == 0) {
      iVar11 = (int)uVar15;
      uStack_128 = (int)uVar22 + 0x20;
      uVar22 = (ulonglong)uStack_128;
      local_140._0_4_ = iVar11 + 1;
      uVar15 = (ulonglong)(uint)local_140;
      if ((int)((iVar12 + -1 >> 0x1f & 0x1fU) + iVar12 + -1) >> 5 <= iVar11) goto LAB_141b827a6;
      uVar16 = puVar20[(longlong)iVar11 + 1];
    }
    local_140._4_4_ = -uVar16 & uVar16;
    iVar11 = 0x1f;
    if (local_140._4_4_ != 0) {
      for (; local_140._4_4_ >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (local_140._4_4_ == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    local_130._4_4_ = (uStack_128 - iVar11) + 0x1f;
    if (iVar12 < local_130._4_4_) {
LAB_141b827a6:
      local_130._4_4_ = iVar12;
    }
  }
  uStack_e0 = 0xffffffff;
  iStack_dc = local_130._4_4_;
  uStack_d8 = uStack_128;
  uStack_d4 = iStack_124;
  uStack_f0 = (uint)local_140;
  uStack_ec = local_140._4_4_;
  uStack_138 = (uint)local_140;
  uStack_134 = local_140._4_4_;
  local_120 = uStack_128;
  uStack_11c = iStack_124;
  uStack_128 = 0xffffffff;
  iStack_124 = local_130._4_4_;
  bVar4 = local_130._4_4_ < iVar12;
  local_140 = local_f8;
  local_130 = puStack_e8;
  if (bVar4) {
    fVar7 = local_118._4_4_;
    fVar6 = (float)local_118;
    do {
      puVar18 = (undefined8 *)((longlong)iStack_124 * 0xe0 + *local_140);
      uVar1 = *(undefined8 *)((longlong)puVar18 + 0xb4);
      fVar2 = *(float *)((longlong)puVar18 + 0xbc);
      puVar20 = (uint *)*puVar18;
      lVar21 = (longlong)*(int *)(puVar18 + 3);
      local_118 = puVar18;
      local_108 = uVar1;
      local_100 = fVar2;
      if (0 < lVar21) {
        local_108._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        fVar10 = local_108._4_4_;
        local_108._0_4_ = (float)uVar1;
        fVar9 = (float)local_108;
        uVar15 = uVar17;
        uVar22 = uVar17;
        do {
          uVar3 = local_148;
          lVar14 = *(longlong *)(param_6 + 0x10);
          if (*(longlong *)(param_6 + 0x10) == 0) {
            lVar14 = param_6;
          }
          if ((*(uint *)(lVar14 + ((longlong)(int)*puVar20 >> 5) * 4) >> (*puVar20 & 0x1f) & 1) != 0
             ) {
            lVar14 = puVar18[2];
            uVar16 = *(uint *)((longlong)puVar18 + 0xc4);
            fVar29 = fVar10 - fVar7;
            fVar26 = *(float *)(uVar15 + 0x10 + lVar14) - fVar6;
            fVar24 = *(float *)(uVar15 + 0x18 + lVar14) - fVar8;
            fVar28 = *(float *)(uVar15 + 0x14 + lVar14) - fVar7;
            lVar19 = *(longlong *)(uVar15 + 8 + lVar14);
            fVar27 = fVar9 - fVar6;
            fVar25 = fVar2 - fVar8;
            uVar13 = 0x8000000000000000;
            if ((*(char *)(uVar15 + 0x2c + lVar14) == '\0') &&
               (*(float *)(uVar15 + 0x28 + lVar14) <= 262144.0)) {
              uVar13 = uVar17;
            }
            lVar14 = *(longlong *)(lVar19 + 0xa0);
            lVar19 = *(longlong *)(lVar19 + 0xa8);
            lVar23 = (longlong)(int)local_148;
            local_154 = (fVar28 * fVar28 + fVar26 * fVar26 + fVar24 * fVar24) * 9.536743e-07;
            uVar5 = (uint)local_154 >> 7;
            iVar12 = (int)local_148 + 1;
            local_148 = CONCAT44(local_148._4_4_,iVar12);
            if (local_148._4_4_ < iVar12) {
              FUN_140848b80(&local_150,uVar3 & 0xffffffff);
            }
            *(ulonglong *)(local_150 + lVar23 * 8) =
                 ((((ulonglong)(uVar16 & 0xffff) << 8 |
                   (ulonglong)
                   ((uint)((fVar29 * fVar29 + fVar27 * fVar27 + fVar25 * fVar25) * 9.536743e-07) &
                   0x7f000000)) << 0xc | (ulonglong)(((uint)(lVar14 << 8) ^ (uint)lVar14) & 0xff000)
                  ) << 8 | (ulonglong)(((uint)(lVar19 << 8) ^ (uint)lVar19) & 0xff000)) << 0xc |
                 (ulonglong)(uVar5 & 0xff0000) | uVar22 & 0xffff | uVar13;
            puVar18 = local_118;
          }
          uVar22 = (ulonglong)((int)uVar22 + 1);
          uVar15 = uVar15 + 0x38;
          puVar20 = puVar20 + 1;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      uStack_128 = uStack_128 & ~uStack_134;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_138);
    } while (iStack_124 < (int)local_130[6]);
  }
  lVar21 = local_150;
  iVar12 = (int)local_148;
  FUN_141b84da0(local_150,(longlong)(int)local_148,(undefined1)param_9,local_158);
  iVar11 = -1;
  local_158[0] = 0;
  if (iVar12 <= param_9) {
    param_9 = iVar12;
  }
  uVar15 = uVar17;
  uVar22 = uVar17;
  if (0 < param_9) {
    do {
      uVar3 = *(ulonglong *)(lVar21 + uVar22 * 8);
      uVar13 = uVar3 >> 0x28 & 0xffff;
      iVar12 = (int)uVar13;
      if (iVar12 != iVar11) {
        local_158[0] = 0;
        uVar15 = uVar13 * 0xe0 + *(longlong *)(param_1 + 0x40);
        iVar11 = iVar12;
      }
      lVar19 = (uVar3 & 0xffff) * 0x38 + *(longlong *)(uVar15 + 0x10);
      lVar14 = *(longlong *)(lVar19 + 8);
      if ((*(uint *)(lVar14 + 0x8c) & 0x2000000) == 0) {
        lVar14 = (1L << ((byte)*(undefined4 *)(lVar14 + 0x80) & 0x3f)) + -1;
      }
      else {
        lVar14 = *(longlong *)(*param_7 + (longlong)*(int *)(lVar14 + 0xcc) * 8);
      }
      FUN_141b818d0(param_1,param_2,param_3,param_5,param_4,lVar19,lVar14,uVar15,local_158);
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
      if (((((uVar16 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0)) &&
         ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
        FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
      }
      uVar22 = uVar22 + 1;
    } while ((longlong)uVar22 < (longlong)param_9);
  }
  return uVar17;
}



// FUNCTION 141b82c30 FUN_141b82c30 body=612 status=ok
// SIG undefined FUN_141b82c30(void)

char FUN_141b82c30(longlong param_1,undefined *param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  uint param_9,int param_10,char param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  char local_48;
  uint local_44;
  
  cVar6 = '\0';
  local_44 = 0;
  local_48 = '\0';
  lVar8 = (longlong)param_10;
  lVar4 = (longlong)(int)param_9;
  if (lVar4 <= lVar8) {
    do {
      param_9 = param_9 & 0xffffff00;
      puVar12 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar4 * 4) * 0xe0 +
                *(longlong *)(param_1 + 0x40));
      piVar11 = (int *)*puVar12;
      lVar9 = (longlong)*(int *)(puVar12 + 3);
      iVar10 = 0;
      if (0 < lVar9) {
        lVar8 = 0;
        do {
          uVar7 = 1 << ((byte)*piVar11 & 0x1f);
          lVar3 = ((longlong)*piVar11 >> 5) * 4;
          lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x10) + 0x10);
          if (lVar2 == 0) {
            lVar2 = *(longlong *)(param_8 + 0x10);
          }
          if ((*(uint *)(lVar2 + lVar3) & uVar7) == 0) {
            lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x18) + 0x10);
            if (lVar2 == 0) {
              lVar2 = *(longlong *)(param_8 + 0x18);
            }
            if ((*(uint *)(lVar2 + lVar3) & uVar7) != 0) {
              plVar5 = *(longlong **)(param_8 + 0x28);
              goto LAB_141b82d42;
            }
          }
          else {
            plVar5 = *(longlong **)(param_8 + 0x20);
LAB_141b82d42:
            if (plVar5 != (longlong *)0x0) {
              lVar3 = *(longlong *)(puVar12[2] + lVar8 + 8);
              if ((*(uint *)(lVar3 + 0x8c) & 0x2000000) == 0) {
                lVar3 = (1L << ((byte)*(undefined4 *)(lVar3 + 0x80) & 0x3f)) + -1;
              }
              else {
                lVar3 = *(longlong *)(*plVar5 + (longlong)*(int *)(lVar3 + 0xcc) * 8);
              }
              iVar1 = FUN_141b818d0(param_1,param_2,param_3,param_4,param_5,puVar12[2] + lVar8,lVar3
                                    ,puVar12,&param_9);
              iVar10 = iVar10 + iVar1;
              local_44 = local_44 + 1;
              if (((((local_44 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0))
                 && ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
                FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
              }
            }
          }
          lVar8 = lVar8 + 0x38;
          piVar11 = piVar11 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        lVar8 = (longlong)param_10;
      }
      if ((local_48 != '\0') || (cVar6 = local_48, iVar10 != 0)) {
        cVar6 = '\x01';
      }
      if (param_11 != '\0') {
        *(int *)(puVar12 + 0x1a) = iVar10;
      }
      lVar4 = lVar4 + 1;
      local_48 = cVar6;
    } while (lVar4 <= lVar8);
  }
  return cVar6;
}



// FUNCTION 141b82ea0 FUN_141b82ea0 body=579 status=ok
// SIG undefined FUN_141b82ea0(void)

char FUN_141b82ea0(longlong param_1,undefined *param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,longlong param_6,longlong *param_7,undefined8 param_8,
                  uint param_9,int param_10,char param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  undefined8 *puVar9;
  char local_48;
  uint local_44;
  
  cVar7 = '\0';
  local_44 = 0;
  local_48 = '\0';
  lVar5 = (longlong)param_10;
  lVar3 = (longlong)(int)param_9;
  if (lVar3 <= lVar5) {
    do {
      param_9 = param_9 & 0xffffff00;
      puVar9 = (undefined8 *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar3 * 4) * 0xe0 +
               *(longlong *)(param_1 + 0x40));
      puVar8 = (uint *)*puVar9;
      lVar4 = (longlong)*(int *)(puVar9 + 3);
      iVar6 = 0;
      if (0 < lVar4) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(param_6 + 0x10);
          if (*(longlong *)(param_6 + 0x10) == 0) {
            lVar2 = param_6;
          }
          if ((*(uint *)(lVar2 + ((longlong)(int)*puVar8 >> 5) * 4) >> (*puVar8 & 0x1f) & 1) != 0) {
            lVar2 = *(longlong *)(puVar9[2] + lVar5 + 8);
            if ((*(uint *)(lVar2 + 0x8c) & 0x2000000) == 0) {
              lVar2 = (1L << ((byte)*(undefined4 *)(lVar2 + 0x80) & 0x3f)) + -1;
            }
            else {
              lVar2 = *(longlong *)(*param_7 + (longlong)*(int *)(lVar2 + 0xcc) * 8);
            }
            iVar1 = FUN_141b818d0(param_1,param_2,param_3,param_4,param_5,puVar9[2] + lVar5,lVar2,
                                  puVar9,&param_9);
            iVar6 = iVar6 + iVar1;
            local_44 = local_44 + 1;
            if (((((local_44 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0))
               && ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
              FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
            }
          }
          lVar5 = lVar5 + 0x38;
          puVar8 = puVar8 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        lVar5 = (longlong)param_10;
      }
      if ((local_48 != '\0') || (cVar7 = local_48, iVar6 != 0)) {
        cVar7 = '\x01';
      }
      if (param_11 != '\0') {
        *(int *)(puVar9 + 0x1a) = iVar6;
      }
      lVar3 = lVar3 + 1;
      local_48 = cVar7;
    } while (lVar3 <= lVar5);
  }
  return cVar7;
}



// FUNCTION 141b830f0 FUN_141b830f0 body=612 status=ok
// SIG undefined FUN_141b830f0(void)

char FUN_141b830f0(longlong param_1,undefined *param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  uint param_9,int param_10,char param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  char local_48;
  uint local_44;
  
  cVar6 = '\0';
  local_44 = 0;
  local_48 = '\0';
  lVar8 = (longlong)param_10;
  lVar4 = (longlong)(int)param_9;
  if (lVar4 <= lVar8) {
    do {
      param_9 = param_9 & 0xffffff00;
      puVar12 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar4 * 4) * 0xe0 +
                *(longlong *)(param_1 + 0x40));
      piVar11 = (int *)*puVar12;
      lVar9 = (longlong)*(int *)(puVar12 + 3);
      iVar10 = 0;
      if (0 < lVar9) {
        lVar8 = 0;
        do {
          uVar7 = 1 << ((byte)*piVar11 & 0x1f);
          lVar3 = ((longlong)*piVar11 >> 5) * 4;
          lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x10) + 0x10);
          if (lVar2 == 0) {
            lVar2 = *(longlong *)(param_8 + 0x10);
          }
          if ((*(uint *)(lVar2 + lVar3) & uVar7) == 0) {
            lVar2 = *(longlong *)(*(longlong *)(param_8 + 0x18) + 0x10);
            if (lVar2 == 0) {
              lVar2 = *(longlong *)(param_8 + 0x18);
            }
            if ((*(uint *)(lVar2 + lVar3) & uVar7) != 0) {
              plVar5 = *(longlong **)(param_8 + 0x28);
              goto LAB_141b83202;
            }
          }
          else {
            plVar5 = *(longlong **)(param_8 + 0x20);
LAB_141b83202:
            if (plVar5 != (longlong *)0x0) {
              lVar3 = *(longlong *)(puVar12[2] + lVar8 + 8);
              if ((*(uint *)(lVar3 + 0x8c) & 0x2000000) == 0) {
                lVar3 = (1L << ((byte)*(undefined4 *)(lVar3 + 0x80) & 0x3f)) + -1;
              }
              else {
                lVar3 = *(longlong *)(*plVar5 + (longlong)*(int *)(lVar3 + 0xcc) * 8);
              }
              iVar1 = FUN_141b81b30(param_1,param_2,param_3,param_4,param_5,puVar12[2] + lVar8,lVar3
                                    ,puVar12,&param_9);
              iVar10 = iVar10 + iVar1;
              local_44 = local_44 + 1;
              if (((((local_44 & 0xf) == 0) && (param_2 == &DAT_146ab6e78)) && (DAT_146ab6e8c != 0))
                 && ((DAT_146ab62e7 != '\0' && (DAT_146ab6383 != '\0')))) {
                FRHICommandListBase::MaybeDispatchToRHIThreadInner(&DAT_146ab6e78);
              }
            }
          }
          lVar8 = lVar8 + 0x38;
          piVar11 = piVar11 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        lVar8 = (longlong)param_10;
      }
      if ((local_48 != '\0') || (cVar6 = local_48, iVar10 != 0)) {
        cVar6 = '\x01';
      }
      if (param_11 != '\0') {
        *(int *)(puVar12 + 0x1a) = iVar10;
      }
      lVar4 = lVar4 + 1;
      local_48 = cVar6;
    } while (lVar4 <= lVar8);
  }
  return cVar6;
}



// FUNCTION 141b83360 FUN_141b83360 body=573 status=ok
// SIG undefined FUN_141b83360(void)

int * FUN_141b83360(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  int local_38 [2];
  longlong *local_30;
  
  FUN_141b8e950(param_1,local_38);
  uVar9 = 0xffffffff;
  lVar2 = *param_3;
  bVar13 = false;
  *param_2 = local_38[0];
  *local_30 = lVar2;
  *(undefined4 *)(local_30 + 1) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar6 = -1;
    iVar11 = iVar6;
    if (uVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar2 + 0x58)) * 4);
      if (iVar8 != -1) {
        do {
          iVar11 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x10) == lVar2) break;
          iVar8 = *(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10);
          iVar11 = iVar6;
        } while (iVar8 != -1);
      }
    }
    bVar13 = iVar11 != -1;
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar11 * 0x10 + *param_1),local_30,8);
      bVar3 = (byte)local_38[0] & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = local_38[0];
      }
      puVar7 = (undefined4 *)((longlong)local_38[0] * 0x10 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar9 = (undefined4)param_1[6];
      }
      puVar7[1] = uVar9;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = local_38[0];
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar5 +
                       (longlong)((int)(local_38[0] + (local_38[0] >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141b83574;
    }
  }
  if (uVar12 < 4) {
    iVar11 = 1;
  }
  else {
    uVar4 = (uVar12 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar10 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar11;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar10 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar12 = *(uint *)(*local_30 + 0x58) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0xc) = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 1) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    FUN_141bb2e70(param_1);
  }
LAB_141b83574:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 141b835a0 FUN_141b835a0 body=720 status=ok
// SIG undefined FUN_141b835a0(void)

int * FUN_141b835a0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  void *pvVar9;
  longlong *plVar10;
  char cVar11;
  uint uVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  void *local_res10;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      FUN_140822570(param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar5 * 0xe0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xe0 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
  pvVar9 = (void *)((longlong)iVar5 * 0xe0 + *param_1);
  local_res10 = pvVar9;
  TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink::
  FDrawingPolicyLink(pvVar9,param_3);
  *(undefined4 *)((longlong)pvVar9 + 0xd8) = 0xffffffff;
  bVar13 = false;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    if (uVar12 != 0) {
      plVar10 = (longlong *)param_1[8];
      iVar5 = TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::
              FDrawingPolicyKeyFuncs::GetKeyHash((longlong)pvVar9 + 0x20);
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar10 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        lVar3 = *param_1;
        do {
          pbVar7 = (byte *)TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>::Matches
                                     (lVar3 + 0x20 + (longlong)iVar5 * 0xe0,local_res8,
                                      (longlong)pvVar9 + 0x20,0);
          if ((*pbVar7 & 1) != 0) goto LAB_141b83719;
          iVar5 = *(int *)((longlong)iVar5 * 0xe0 + 0xd8 + lVar3);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_141b83719:
    bVar13 = iVar5 != -1;
    pvVar9 = local_res10;
    if (bVar13) {
      plVar10 = (longlong *)((longlong)iVar5 * 0xe0 + *param_1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(plVar10 + 0xd);
      TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
      ::
      ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
                (plVar10 + 2);
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar10,local_res10,0xd8);
      TSparseArray<TSetElement<TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_141b8384b;
    }
  }
  if (3 < uVar12) {
    uVar6 = (uVar12 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar11 = '\0';
    if (uVar6 != 0) {
      iVar5 = 0x1f - iVar8;
    }
    uVar6 = (uVar12 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar11 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar12 = TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::
             FDrawingPolicyKeyFuncs::GetKeyHash((longlong)pvVar9 + 0x20);
    uVar12 = uVar12 & (int)param_1[9] - 1U;
    *(uint *)((longlong)pvVar9 + 0xdc) = uVar12;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)((longlong)pvVar9 + 0xd8) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TStaticMeshDrawList<FVelocityDrawingPolicy>::FDrawingPolicyLink,TStaticMeshDrawList<FVelocityDrawingPolicy>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141b8384b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 141b83870 FUN_141b83870 body=664 status=ok
// SIG undefined FUN_141b83870(void)

uint * FUN_141b83870(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  void *_Dst;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong *_Src;
  bool bVar11;
  uint local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar5 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar5 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar5 * 0x40 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = uVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 +
                   (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar5 * 0x40 + *param_1);
  TKeyInitializer<ULightComponent_const_*_&&>::
  operator<ULightComponent_const_*,FTemporalAAHistory>_TTuple<ULightComponent_const_*,FTemporalAAHistory>
            (param_3,_Src);
  *(undefined4 *)(_Src + 7) = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (iVar8 != 1) {
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    uVar5 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar11 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar11);
    if (bVar11) {
      lVar9 = 2;
      _Dst = (void *)(lVar7 * 0x40 + *param_1);
      lVar7 = (longlong)_Dst + 0x18;
      do {
        plVar4 = (longlong *)(lVar7 + -8);
        lVar7 = lVar7 + -8;
        lVar9 = lVar9 + -1;
        if ((longlong *)*plVar4 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar4 + 0x30))();
        }
      } while (lVar9 != 0);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar5;
      goto LAB_141b83ad5;
    }
  }
  cVar3 = TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar8,0);
  if (cVar3 == '\0') {
    iVar8 = (int)(*_Src >> 4);
    uVar6 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar10 = -(uVar6 + iVar8) ^ uVar6 >> 0xd;
    uVar5 = (iVar8 - uVar6) - uVar10 ^ uVar10 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 << 0x10;
    uVar10 = (uVar10 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar10 ^ uVar10 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 << 10;
    uVar5 = ((uVar10 - uVar6) - uVar5 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x3c) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 7) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_141b83ad5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141b83b10 FUN_141b83b10 body=804 status=ok
// SIG undefined FUN_141b83b10(void)

int * FUN_141b83b10(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  float *_Src;
  uint uVar12;
  float fVar13;
  char cVar14;
  int iVar15;
  bool bVar16;
  
  iVar9 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      FUN_1407d8cb0(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar11 * 0x140 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x140 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  _Src = (float *)((longlong)iVar11 * 0x140 + *param_1);
  FUN_141b802f0(param_3,_Src);
  _Src[0x4c] = -NAN;
  bVar16 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = iVar15;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = FCrc::MemCrc_DEPRECATED(_Src,0xc,0);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar3 = *param_1;
        do {
          lVar10 = (longlong)iVar5 * 0x140;
          if (((*_Src == *(float *)(lVar10 + lVar3)) && (_Src[1] == *(float *)(lVar10 + 4 + lVar3)))
             && (_Src[2] == *(float *)(lVar10 + 8 + lVar3))) {
            bVar16 = true;
          }
          else {
            bVar16 = false;
          }
          iVar11 = iVar5;
        } while ((!bVar16) &&
                (iVar5 = *(int *)(lVar10 + 0x130 + lVar3), iVar11 = iVar15, iVar5 != -1));
      }
    }
    bVar16 = iVar11 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar11 * 0x140 + *param_1),_Src,0x130);
      iVar9 = *param_2;
      bVar4 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x140 + *param_1) = iVar9;
      }
      puVar7 = (undefined4 *)((longlong)iVar9 * 0x140 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      puVar7[1] = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141b83e07;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar6 = (uVar12 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar14 = '\0';
    if (uVar6 != 0) {
      iVar9 = 0x1f - iVar15;
    }
    uVar6 = (uVar12 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar14 = '\x1f' - (char)iVar15;
    }
    iVar9 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar15 = *param_2;
    uVar12 = FCrc::MemCrc_DEPRECATED(_Src,0xc);
    fVar13 = (float)((int)param_1[9] - 1U & uVar12);
    _Src[0x4d] = fVar13;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    _Src[0x4c] = *(float *)((longlong)plVar8 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)fVar13) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)fVar13) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_141bb3060(param_1);
  }
LAB_141b83e07:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 141b83e40 FUN_141b83e40 body=409 status=ok
// SIG undefined FUN_141b83e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b83e40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_338 [100];
  ulonglong local_18;
  
  if (param_1 != param_2) {
    local_18 = DAT_1468387a8 ^ (ulonglong)local_338;
    lVar9 = 6;
    lVar10 = 6;
    puVar5 = local_338;
    puVar7 = param_1;
    do {
      puVar8 = puVar7;
      puVar6 = puVar5;
      uVar1 = puVar8[1];
      uVar2 = puVar8[2];
      uVar3 = puVar8[3];
      *puVar6 = *puVar8;
      puVar6[1] = uVar1;
      uVar1 = puVar8[4];
      uVar4 = puVar8[5];
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      uVar2 = puVar8[6];
      uVar3 = puVar8[7];
      puVar6[4] = uVar1;
      puVar6[5] = uVar4;
      uVar1 = puVar8[8];
      uVar4 = puVar8[9];
      puVar6[6] = uVar2;
      puVar6[7] = uVar3;
      uVar2 = puVar8[10];
      uVar3 = puVar8[0xb];
      puVar6[8] = uVar1;
      puVar6[9] = uVar4;
      uVar1 = puVar8[0xc];
      uVar4 = puVar8[0xd];
      puVar6[10] = uVar2;
      puVar6[0xb] = uVar3;
      uVar2 = puVar8[0xe];
      uVar3 = puVar8[0xf];
      puVar6[0xc] = uVar1;
      puVar6[0xd] = uVar4;
      puVar6[0xe] = uVar2;
      puVar6[0xf] = uVar3;
      lVar10 = lVar10 + -1;
      puVar5 = puVar6 + 0x10;
      puVar7 = puVar8 + 0x10;
    } while (lVar10 != 0);
    uVar1 = puVar8[0x11];
    uVar2 = puVar8[0x12];
    uVar3 = puVar8[0x13];
    lVar10 = 6;
    puVar6[0x10] = puVar8[0x10];
    puVar6[0x11] = uVar1;
    puVar6[0x12] = uVar2;
    puVar6[0x13] = uVar3;
    puVar5 = param_2;
    do {
      puVar6 = param_1;
      puVar7 = puVar5;
      uVar1 = puVar7[1];
      *puVar6 = *puVar7;
      puVar6[1] = uVar1;
      uVar1 = puVar7[3];
      puVar6[2] = puVar7[2];
      puVar6[3] = uVar1;
      uVar1 = puVar7[5];
      puVar6[4] = puVar7[4];
      puVar6[5] = uVar1;
      uVar1 = puVar7[7];
      puVar6[6] = puVar7[6];
      puVar6[7] = uVar1;
      uVar1 = puVar7[9];
      puVar6[8] = puVar7[8];
      puVar6[9] = uVar1;
      uVar1 = puVar7[0xb];
      puVar6[10] = puVar7[10];
      puVar6[0xb] = uVar1;
      uVar1 = puVar7[0xd];
      puVar6[0xc] = puVar7[0xc];
      puVar6[0xd] = uVar1;
      uVar1 = puVar7[0xf];
      puVar6[0xe] = puVar7[0xe];
      puVar6[0xf] = uVar1;
      lVar10 = lVar10 + -1;
      puVar5 = puVar7 + 0x10;
      param_1 = puVar6 + 0x10;
    } while (lVar10 != 0);
    uVar1 = puVar7[0x11];
    puVar6[0x10] = puVar7[0x10];
    puVar6[0x11] = uVar1;
    uVar1 = puVar7[0x13];
    puVar6[0x12] = puVar7[0x12];
    puVar6[0x13] = uVar1;
    puVar5 = local_338;
    do {
      puVar6 = param_2;
      puVar7 = puVar5;
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      *puVar6 = *puVar7;
      puVar6[1] = uVar1;
      uVar1 = puVar7[4];
      uVar4 = puVar7[5];
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      uVar2 = puVar7[6];
      uVar3 = puVar7[7];
      puVar6[4] = uVar1;
      puVar6[5] = uVar4;
      uVar1 = puVar7[8];
      uVar4 = puVar7[9];
      puVar6[6] = uVar2;
      puVar6[7] = uVar3;
      uVar2 = puVar7[10];
      uVar3 = puVar7[0xb];
      puVar6[8] = uVar1;
      puVar6[9] = uVar4;
      uVar1 = puVar7[0xc];
      uVar4 = puVar7[0xd];
      puVar6[10] = uVar2;
      puVar6[0xb] = uVar3;
      uVar2 = puVar7[0xe];
      uVar3 = puVar7[0xf];
      puVar6[0xc] = uVar1;
      puVar6[0xd] = uVar4;
      puVar6[0xe] = uVar2;
      puVar6[0xf] = uVar3;
      lVar9 = lVar9 + -1;
      puVar5 = puVar7 + 0x10;
      param_2 = puVar6 + 0x10;
    } while (lVar9 != 0);
    uVar1 = puVar7[0x11];
    uVar2 = puVar7[0x12];
    uVar3 = puVar7[0x13];
    puVar6[0x10] = puVar7[0x10];
    puVar6[0x11] = uVar1;
    puVar6[0x12] = uVar2;
    puVar6[0x13] = uVar3;
  }
  return;
}



// FUNCTION 141b83fe0 FUN_141b83fe0 body=587 status=ok
// SIG undefined FUN_141b83fe0(void)

float * FUN_141b83fe0(float *param_1,float *param_2,int *param_3,longlong param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint in_EAX;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar17 = *param_2;
  fVar19 = param_2[1];
  iVar5 = (int)fVar17;
  fVar20 = param_2[2];
  fVar11 = fVar17;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar17)) {
    auVar13._4_4_ = fVar17;
    auVar13._0_4_ = fVar17;
    auVar13._8_8_ = 0;
    uVar4 = movmskps(in_EAX,auVar13);
    in_EAX = uVar4 & 1;
    fVar11 = (float)(int)(iVar5 - in_EAX);
  }
  fVar17 = fVar17 - fVar11;
  iVar5 = (int)fVar19;
  fVar11 = fVar19;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar19)) {
    auVar14._4_4_ = fVar19;
    auVar14._0_4_ = fVar19;
    auVar14._8_8_ = 0;
    uVar4 = movmskps(in_EAX,auVar14);
    in_EAX = uVar4 & 1;
    fVar11 = (float)(int)(iVar5 - in_EAX);
  }
  fVar19 = fVar19 - fVar11;
  iVar5 = (int)fVar20;
  fVar11 = fVar20;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar20)) {
    auVar15._4_4_ = fVar20;
    auVar15._0_4_ = fVar20;
    auVar15._8_8_ = 0;
    uVar4 = movmskps(in_EAX,auVar15);
    fVar11 = (float)(int)(iVar5 - (uVar4 & 1));
  }
  fVar20 = fVar20 - fVar11;
  uVar1 = *(undefined8 *)param_2;
  fVar11 = param_2[2];
  fVar18 = 1.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  uVar9 = (0.001 < fVar17) + 1;
  uVar8 = (0.001 < fVar19) + 1;
  fVar16 = 1.0;
  uVar4 = (0.001 < fVar20) + 1;
  iVar5 = 0;
  fVar12 = 1.0;
  do {
    if ((1 < uVar4) && (fVar18 = fVar20, iVar5 == 0)) {
      fVar18 = 1.0 - fVar20;
    }
    iVar10 = 0;
    do {
      if ((1 < uVar8) && (fVar16 = fVar19, iVar10 == 0)) {
        fVar16 = 1.0 - fVar19;
      }
      iVar7 = 0;
      iVar2 = param_3[1];
      iVar3 = *param_3;
      do {
        if ((1 < uVar9) && (fVar12 = fVar17, iVar7 == 0)) {
          fVar12 = 1.0 - fVar17;
        }
        iVar6 = (int)(float)uVar1 + iVar7 +
                ((iVar5 + (int)fVar11) * iVar2 + (int)(float)((ulonglong)uVar1 >> 0x20) + iVar10) *
                iVar3;
        if (iVar6 < param_5) {
          *param_1 = (float)*(byte *)(iVar6 + param_4) * fVar12 * 0.003921569 * fVar16 * fVar18 +
                     *param_1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar9);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar8);
    iVar5 = iVar5 + 1;
  } while (iVar5 < (int)uVar4);
  return param_1;
}



// FUNCTION 141b84230 FUN_141b84230 body=763 status=ok
// SIG undefined FUN_141b84230(void)

float * FUN_141b84230(float *param_1,float *param_2,int *param_3,longlong param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar5 = (uint)&stack0x00000000;
  fVar17 = *param_2;
  fVar20 = param_2[1];
  iVar10 = (int)fVar17;
  fVar21 = param_2[2];
  fVar12 = fVar17;
  if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar17)) {
    auVar13._4_4_ = fVar17;
    auVar13._0_4_ = fVar17;
    auVar13._8_8_ = 0;
    uVar5 = movmskps(uVar5,auVar13);
    uVar5 = uVar5 & 1;
    fVar12 = (float)(int)(iVar10 - uVar5);
  }
  fVar17 = fVar17 - fVar12;
  iVar10 = (int)fVar20;
  fVar12 = fVar20;
  if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar20)) {
    auVar14._4_4_ = fVar20;
    auVar14._0_4_ = fVar20;
    auVar14._8_8_ = 0;
    uVar5 = movmskps(uVar5,auVar14);
    uVar5 = uVar5 & 1;
    fVar12 = (float)(int)(iVar10 - uVar5);
  }
  fVar20 = fVar20 - fVar12;
  iVar10 = (int)fVar21;
  fVar12 = fVar21;
  if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar21)) {
    auVar15._4_4_ = fVar21;
    auVar15._0_4_ = fVar21;
    auVar15._8_8_ = 0;
    uVar5 = movmskps(uVar5,auVar15);
    fVar12 = (float)(int)(iVar10 - (uVar5 & 1));
  }
  fVar21 = fVar21 - fVar12;
  uVar1 = *(undefined8 *)param_2;
  fVar16 = 1.0;
  fVar12 = param_2[2];
  fVar18 = 1.0;
  fVar19 = 1.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  uVar9 = (0.001 < fVar17) + 1;
  uVar8 = (0.001 < fVar20) + 1;
  uVar5 = (0.001 < fVar21) + 1;
  iVar10 = 0;
  do {
    if ((1 < uVar5) && (fVar19 = fVar21, iVar10 == 0)) {
      fVar19 = 1.0 - fVar21;
    }
    iVar11 = 0;
    do {
      if ((1 < uVar8) && (fVar18 = fVar20, iVar11 == 0)) {
        fVar18 = 1.0 - fVar20;
      }
      iVar7 = 0;
      iVar2 = param_3[1];
      iVar3 = *param_3;
      do {
        if ((1 < uVar9) && (fVar16 = fVar17, iVar7 == 0)) {
          fVar16 = 1.0 - fVar17;
        }
        iVar6 = (int)(float)uVar1 + iVar7 +
                (((int)fVar12 + iVar10) * iVar2 + (int)(float)((ulonglong)uVar1 >> 0x20) + iVar11) *
                iVar3;
        if (iVar6 < param_5) {
          uVar4 = *(uint *)(param_4 + (longlong)iVar6 * 4);
          *param_1 = (float)(uVar4 >> 0x10 & 0xff) * fVar16 * 0.003921569 * fVar18 * fVar19 +
                     *param_1;
          param_1[1] = (float)(uVar4 >> 8 & 0xff) * fVar16 * 0.003921569 * fVar18 * fVar19 +
                       param_1[1];
          param_1[2] = (float)(uVar4 & 0xff) * fVar16 * 0.003921569 * fVar18 * fVar19 + param_1[2];
          param_1[3] = (float)(uVar4 >> 0x18) * fVar16 * 0.003921569 * fVar18 * fVar19 + param_1[3];
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar9);
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)uVar8);
    iVar10 = iVar10 + 1;
  } while (iVar10 < (int)uVar5);
  return param_1;
}



// FUNCTION 141b84530 FUN_141b84530 body=914 status=ok
// SIG undefined FUN_141b84530(void)

float * FUN_141b84530(float *param_1,float *param_2,int *param_3,longlong param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint in_EAX;
  uint uVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar23 = *param_2;
  fVar25 = param_2[1];
  iVar15 = (int)fVar23;
  fVar26 = param_2[2];
  fVar17 = fVar23;
  if ((iVar15 != -0x80000000) && ((float)iVar15 != fVar23)) {
    auVar18._4_4_ = fVar23;
    auVar18._0_4_ = fVar23;
    auVar18._8_8_ = 0;
    uVar5 = movmskps(in_EAX,auVar18);
    in_EAX = uVar5 & 1;
    fVar17 = (float)(int)(iVar15 - in_EAX);
  }
  fVar23 = fVar23 - fVar17;
  iVar15 = (int)fVar25;
  fVar17 = fVar25;
  if ((iVar15 != -0x80000000) && ((float)iVar15 != fVar25)) {
    auVar19._4_4_ = fVar25;
    auVar19._0_4_ = fVar25;
    auVar19._8_8_ = 0;
    uVar5 = movmskps(in_EAX,auVar19);
    in_EAX = uVar5 & 1;
    fVar17 = (float)(int)(iVar15 - in_EAX);
  }
  fVar25 = fVar25 - fVar17;
  iVar15 = (int)fVar26;
  fVar17 = fVar26;
  if ((iVar15 != -0x80000000) && ((float)iVar15 != fVar26)) {
    auVar20._4_4_ = fVar26;
    auVar20._0_4_ = fVar26;
    auVar20._8_8_ = 0;
    uVar5 = movmskps(in_EAX,auVar20);
    fVar17 = (float)(int)(iVar15 - (uVar5 & 1));
  }
  fVar26 = fVar26 - fVar17;
  uVar1 = *(undefined8 *)param_2;
  fVar17 = param_2[2];
  fVar22 = 1.0;
  fVar24 = 1.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  uVar16 = (0.001 < fVar23) + 1;
  uVar5 = (0.001 < fVar25) + 1;
  fVar21 = 1.0;
  uVar13 = (0.001 < fVar26) + 1;
  iVar15 = 0;
  do {
    if ((1 < uVar13) && (fVar24 = fVar26, iVar15 == 0)) {
      fVar24 = 1.0 - fVar26;
    }
    iVar12 = 0;
    do {
      if ((1 < uVar5) && (fVar22 = fVar25, iVar12 == 0)) {
        fVar22 = 1.0 - fVar25;
      }
      iVar14 = 0;
      iVar2 = param_3[1];
      iVar3 = *param_3;
      do {
        if ((1 < uVar16) && (fVar21 = fVar23, iVar14 == 0)) {
          fVar21 = 1.0 - fVar23;
        }
        iVar7 = (int)(float)uVar1 + iVar14 +
                (((int)fVar17 + iVar15) * iVar2 + iVar12 + (int)(float)((ulonglong)uVar1 >> 0x20)) *
                iVar3;
        if (iVar7 < param_5) {
          uVar4 = *(uint *)(param_4 + (longlong)iVar7 * 4);
          uVar10 = uVar4 & 0x3f;
          if ((uVar4 & 0x7c0) == 0x7c0) {
            fVar11 = (float)((uVar10 | 0x3fc0) << 0x11);
          }
          else {
            if ((uVar4 & 0x7c0) == 0) {
              if (uVar10 == 0) {
                uVar8 = 0xffffff90;
              }
              else {
                uVar8 = 1;
                do {
                  uVar8 = uVar8 - 1;
                  uVar10 = uVar10 * 2;
                } while ((uVar10 & 0x40) == 0);
                uVar10 = uVar10 & 0x3f;
              }
            }
            else {
              uVar8 = uVar4 >> 6 & 0x1f;
            }
            fVar11 = (float)((uVar8 + 0x70) * 0x800000 | uVar10 << 0x11);
          }
          uVar10 = uVar4 >> 0xb & 0x3f;
          uVar8 = uVar4 >> 0x11 & 0x1f;
          if (uVar8 == 0x1f) {
            fVar9 = (float)((uVar4 & 0x1f800 | 0x1fe0000) << 6);
          }
          else {
            if (uVar8 == 0) {
              if (uVar10 == 0) {
                uVar8 = 0xffffff90;
              }
              else {
                uVar8 = 1;
                do {
                  uVar8 = uVar8 - 1;
                  uVar10 = uVar10 * 2;
                } while ((uVar10 & 0x40) == 0);
                uVar10 = uVar10 & 0x3f;
              }
            }
            fVar9 = (float)((uVar8 + 0x70) * 0x800000 | uVar10 << 0x11);
          }
          uVar8 = uVar4 >> 0x1b;
          uVar10 = uVar4 >> 0x16 & 0x1f;
          if (uVar8 == 0x1f) {
            fVar6 = (float)(uVar4 >> 5 & 0x3e0000 | 0x7f800000);
          }
          else {
            if (uVar4 >> 0x1b == 0) {
              if (uVar10 == 0) {
                uVar8 = 0xffffff90;
              }
              else {
                uVar8 = 1;
                do {
                  uVar8 = uVar8 - 1;
                  uVar10 = uVar10 * 2;
                } while ((uVar10 & 0x20) == 0);
                uVar10 = uVar10 & 0x1f;
              }
            }
            fVar6 = (float)((uVar8 + 0x70) * 0x800000 | uVar10 << 0x12);
          }
          *param_1 = fVar21 * fVar11 * fVar22 * fVar24 + *param_1;
          param_1[1] = fVar21 * fVar9 * fVar22 * fVar24 + param_1[1];
          param_1[2] = fVar21 * fVar6 * fVar22 * fVar24 + param_1[2];
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)uVar16);
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar5);
    iVar15 = iVar15 + 1;
  } while (iVar15 < (int)uVar13);
  return param_1;
}



// FUNCTION 141b848d0 FUN_141b848d0 body=339 status=ok
// SIG undefined FUN_141b848d0(void)

void FUN_141b848d0(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar7 = iVar6 * 2 + 1;
    iVar5 = iVar7;
    iVar9 = iVar6;
joined_r0x000141b848fa:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar6 * 2;
        iVar8 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          if ((ulonglong)param_1[(longlong)iVar7 + 2] < (ulonglong)param_1[iVar8]) {
            iVar8 = iVar7;
          }
          iVar8 = iVar8 + 1;
        }
        puVar1 = param_1 + iVar8;
        puVar2 = param_1 + iVar6;
        if (*puVar2 < *puVar1) {
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar7 = iVar8 * 2 + 1;
          iVar6 = iVar8;
          goto joined_r0x000141b848fa;
        }
      }
      iVar7 = iVar5 + -2;
      iVar6 = iVar9 + -1;
      iVar5 = iVar7;
      iVar9 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar4 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar4;
      }
      iVar6 = 0;
      if (1 < param_2) {
        do {
          iVar5 = iVar6 * 2;
          iVar7 = iVar5 + 1;
          if (iVar5 + 2 < param_2) {
            if ((ulonglong)param_1[(longlong)iVar5 + 2] < (ulonglong)param_1[iVar7]) {
              iVar7 = iVar5;
            }
            iVar7 = iVar7 + 1;
          }
          puVar1 = param_1 + iVar7;
          puVar2 = param_1 + iVar6;
          if (*puVar1 <= *puVar2) break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar6 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141b84a30 HeapSortInternal<FSortedLightSceneInfo,FIdentityFunctor,TDereferenceWrapper<FSortedLightSceneInfo,`FDeferredShadingSceneRenderer::RenderLights'::`2'::FCompareFSortedLightSceneInfo>_> body=357 status=ok
// SIG undefined HeapSortInternal<FSortedLightSceneInfo,FIdentityFunctor,TDereferenceWrapper<FSortedLightSceneInfo,`FDeferredShadingSceneRenderer::RenderLights'::`2'::FCompareFSortedLightSceneInfo>_>(void)

void AlgoImpl::
     HeapSortInternal<FSortedLightSceneInfo,FIdentityFunctor,TDereferenceWrapper<FSortedLightSceneInfo,_FDeferredShadingSceneRenderer::RenderLights_::_2_::FCompareFSortedLightSceneInfo>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar7 = iVar5 * 2 + 1;
    iVar1 = iVar7;
    iVar10 = iVar5;
joined_r0x000141b84a5d:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar5 * 2;
        iVar6 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          if (*(int *)(param_1 + ((longlong)iVar7 + 2) * 2) <
              *(int *)(param_1 + (longlong)iVar6 * 2)) {
            iVar6 = iVar7;
          }
          iVar6 = iVar6 + 1;
        }
        lVar9 = (longlong)iVar6;
        lVar11 = (longlong)iVar5;
        if (*(int *)(param_1 + lVar11 * 2) < *(int *)(param_1 + lVar9 * 2)) {
          uVar2 = (param_1 + lVar9 * 2)[1];
          iVar7 = iVar6 * 2 + 1;
          uVar3 = param_1[lVar11 * 2];
          uVar4 = (param_1 + lVar11 * 2)[1];
          param_1[lVar11 * 2] = param_1[lVar9 * 2];
          (param_1 + lVar11 * 2)[1] = uVar2;
          param_1[lVar9 * 2] = uVar3;
          (param_1 + lVar9 * 2)[1] = uVar4;
          iVar5 = iVar6;
          goto joined_r0x000141b84a5d;
        }
      }
      iVar7 = iVar1 + -2;
      iVar5 = iVar10 + -1;
      iVar1 = iVar7;
      iVar10 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  lVar9 = (longlong)param_2;
  if (0 < param_2) {
    lVar11 = lVar9 << 4;
    do {
      uVar2 = ((undefined8 *)(lVar11 + (longlong)param_1))[1];
      iVar5 = 0;
      uVar3 = *param_1;
      uVar4 = param_1[1];
      *param_1 = *(undefined8 *)(lVar11 + (longlong)param_1);
      param_1[1] = uVar2;
      *(undefined8 *)(lVar11 + (longlong)param_1) = uVar3;
      ((undefined8 *)(lVar11 + (longlong)param_1))[1] = uVar4;
      if (1 < param_2) {
        do {
          iVar1 = iVar5 * 2;
          iVar7 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + ((longlong)iVar1 + 2) * 2) <
                *(int *)(param_1 + (longlong)iVar7 * 2)) {
              iVar7 = iVar1;
            }
            iVar7 = iVar7 + 1;
          }
          lVar8 = (longlong)iVar7;
          lVar12 = (longlong)iVar5;
          if (*(int *)(param_1 + lVar8 * 2) <= *(int *)(param_1 + lVar12 * 2)) break;
          uVar2 = (param_1 + lVar8 * 2)[1];
          uVar3 = param_1[lVar12 * 2];
          uVar4 = (param_1 + lVar12 * 2)[1];
          param_1[lVar12 * 2] = param_1[lVar8 * 2];
          (param_1 + lVar12 * 2)[1] = uVar2;
          param_1[lVar8 * 2] = uVar3;
          (param_1 + lVar8 * 2)[1] = uVar4;
          iVar5 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar9 = lVar9 + -1;
      lVar11 = lVar11 + -0x10;
    } while (0 < lVar9);
  }
  return;
}



// FUNCTION 141b84ba0 HeapSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_> body=500 status=ok
// SIG undefined HeapSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>
               (undefined4 *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar7 = iVar5 * 2 + 1;
    iVar4 = iVar7;
    iVar8 = iVar5;
joined_r0x000141b84be6:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar5 * 2;
        iVar9 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          local_40 = *(undefined4 *)(param_4 + 2);
          local_48 = param_4[1];
          iVar6 = TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::
                  Compare(param_1[iVar7 + 2],param_1[iVar9],*param_4,&local_48);
          if (iVar6 < 0) {
            iVar9 = iVar7;
          }
          iVar9 = iVar9 + 1;
        }
        local_30 = *(undefined4 *)(param_4 + 2);
        local_38 = param_4[1];
        puVar10 = param_1 + iVar9;
        puVar1 = param_1 + iVar5;
        iVar5 = TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::Compare
                          (param_1[iVar5],param_1[iVar9],*param_4,&local_38);
        if (iVar5 < 0) {
          if (puVar1 != puVar10) {
            uVar3 = *puVar1;
            *puVar1 = *puVar10;
            *puVar10 = uVar3;
          }
          iVar7 = iVar9 * 2 + 1;
          iVar5 = iVar9;
          goto joined_r0x000141b84be6;
        }
      }
      iVar7 = iVar4 + -2;
      iVar5 = iVar8 + -1;
      iVar4 = iVar7;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar3 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar7 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            local_30 = *(undefined4 *)(param_4 + 2);
            local_38 = param_4[1];
            iVar8 = TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::
                    Compare(param_1[iVar4 + 2],param_1[iVar7],*param_4,&local_38);
            if (iVar8 < 0) {
              iVar7 = iVar4;
            }
            iVar7 = iVar7 + 1;
          }
          local_40 = *(undefined4 *)(param_4 + 2);
          local_48 = param_4[1];
          puVar1 = param_1 + iVar7;
          puVar2 = param_1 + iVar5;
          iVar5 = TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::
                  Compare(param_1[iVar5],param_1[iVar7],*param_4,&local_48);
          if (-1 < iVar5) break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar5 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141b84da0 FUN_141b84da0 body=624 status=ok
// SIG undefined FUN_141b84da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b84da0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar10 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar10 = fVar10 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar10 = _guard_xfg_dispatch_icall_nop(fVar10);
    local_318 = (undefined4)(longlong)(fVar10 + fVar10);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar5 = &local_328;
    do {
      puVar4 = (ulonglong *)*plVar5;
      puVar8 = (ulonglong *)plVar5[1];
      lVar1 = plVar5[2];
      local_338._0_4_ = (int)lVar1;
      lVar3 = ((longlong)puVar8 - (longlong)puVar4 >> 3) + 1;
      puVar9 = puVar4;
      if ((int)local_338 != 0) {
LAB_141b84e60:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar4 = puVar9 + (lVar3 >> 1);
          if (puVar4 != puVar9) {
            uVar2 = *puVar4;
            *puVar4 = *puVar9;
            *puVar9 = uVar2;
          }
          puVar6 = puVar8 + 1;
          puVar4 = puVar9;
LAB_141b84e97:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar8) goto code_r0x000141b84ea0;
          goto LAB_141b84eb0;
        }
        for (; puVar6 = puVar9, puVar4 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar7 = puVar6, puVar4 = puVar4 + 1, puVar4 <= puVar8) {
            puVar6 = puVar4;
            if (*puVar4 <= *puVar7) {
              puVar6 = puVar7;
            }
          }
          if (puVar7 != puVar8) {
            uVar2 = *puVar7;
            *puVar7 = *puVar8;
            *puVar8 = uVar2;
          }
        }
        goto LAB_141b84f81;
      }
LAB_141b84f72:
      local_338 = lVar1;
      FUN_141b848d0(puVar4,lVar3,param_3,param_4);
LAB_141b84f81:
      plVar5 = plVar5 + -3;
    } while (&local_328 <= plVar5);
  }
  return;
code_r0x000141b84ea0:
  if (*puVar4 <= *puVar9) goto LAB_141b84e97;
LAB_141b84eb0:
  do {
    puVar7 = puVar6;
    puVar6 = puVar7 + -1;
    if (puVar6 <= puVar9) break;
  } while (*puVar9 <= *puVar6);
  if (puVar4 <= puVar6) {
    if (puVar4 != puVar6) {
      uVar2 = *puVar4;
      *puVar4 = *puVar6;
      *puVar6 = uVar2;
    }
    goto LAB_141b84e97;
  }
  if (puVar9 != puVar6) {
    uVar2 = *puVar9;
    *puVar9 = *puVar6;
    *puVar6 = uVar2;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar6 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar8 - (longlong)puVar4 & 0xfffffffffffffff8U)) {
    if (puVar4 < puVar8) {
      *plVar5 = (longlong)puVar4;
      plVar5[1] = (longlong)puVar8;
      *(int *)(plVar5 + 2) = (int)local_338;
      plVar5 = plVar5 + 3;
    }
    if (puVar6 <= puVar9 + 1) goto LAB_141b84f81;
    puVar8 = puVar7 + -2;
    puVar4 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar6) {
      *plVar5 = (longlong)puVar9;
      plVar5[1] = (longlong)(puVar7 + -2);
      *(int *)(plVar5 + 2) = (int)local_338;
      plVar5 = plVar5 + 3;
    }
    if (puVar8 <= puVar4) goto LAB_141b84f81;
  }
  lVar3 = ((longlong)puVar8 - (longlong)puVar4 >> 3) + 1;
  puVar9 = puVar4;
  if ((int)local_338 == 0) goto LAB_141b84f72;
  goto LAB_141b84e60;
}



// FUNCTION 141b85010 IntroSortInternal<FSortedLightSceneInfo,FIdentityFunctor,TDereferenceWrapper<FSortedLightSceneInfo,`FDeferredShadingSceneRenderer::RenderLights'::`2'::FCompareFSortedLightSceneInfo>_> body=598 status=ok
// SIG undefined IntroSortInternal<FSortedLightSceneInfo,FIdentityFunctor,TDereferenceWrapper<FSortedLightSceneInfo,`FDeferredShadingSceneRenderer::RenderLights'::`2'::FCompareFSortedLightSceneInfo>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FSortedLightSceneInfo,FIdentityFunctor,TDereferenceWrapper<FSortedLightSceneInfo,_FDeferredShadingSceneRenderer::RenderLights_::_2_::FCompareFSortedLightSceneInfo>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  longlong *plVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  float fVar16;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x10 + -0x10 + param_1;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_318 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar10 = &local_328;
    do {
      piVar15 = (int *)*plVar10;
      piVar13 = (int *)plVar10[1];
      lVar1 = plVar10[2];
      local_338._0_4_ = (int)lVar1;
      lVar8 = ((longlong)piVar13 - (longlong)piVar15 >> 4) + 1;
      piVar14 = piVar15;
      if ((int)local_338 != 0) {
LAB_141b850e0:
        if (8 < lVar8) {
          uVar5 = *(undefined8 *)(piVar14 + 2);
          piVar11 = piVar13 + 4;
          uVar6 = *(undefined8 *)(piVar14 + (lVar8 / 2) * 4);
          uVar7 = *(undefined8 *)(piVar14 + (lVar8 / 2) * 4 + 2);
          *(undefined8 *)(piVar14 + (lVar8 / 2) * 4) = *(undefined8 *)piVar14;
          *(undefined8 *)(piVar14 + (lVar8 / 2) * 4 + 2) = uVar5;
          *(undefined8 *)piVar14 = uVar6;
          *(undefined8 *)(piVar14 + 2) = uVar7;
          piVar15 = piVar14;
LAB_141b85111:
          piVar9 = piVar15;
          piVar15 = piVar9 + 4;
          if (piVar15 <= piVar13) goto code_r0x000141b8511a;
          goto LAB_141b85121;
        }
        for (; piVar11 = piVar14, piVar15 = piVar14, piVar14 < piVar13; piVar13 = piVar13 + -4) {
          while (piVar9 = piVar11, piVar15 = piVar15 + 4, piVar15 <= piVar13) {
            piVar11 = piVar15;
            if (*piVar15 <= *piVar9) {
              piVar11 = piVar9;
            }
          }
          uVar5 = *(undefined8 *)(piVar13 + 2);
          uVar6 = *(undefined8 *)piVar9;
          uVar7 = *(undefined8 *)(piVar9 + 2);
          *(undefined8 *)piVar9 = *(undefined8 *)piVar13;
          *(undefined8 *)(piVar9 + 2) = uVar5;
          *(undefined8 *)piVar13 = uVar6;
          *(undefined8 *)(piVar13 + 2) = uVar7;
        }
        goto LAB_141b851df;
      }
LAB_141b851d0:
      local_338 = lVar1;
      HeapSortInternal<FSortedLightSceneInfo,FIdentityFunctor,TDereferenceWrapper<FSortedLightSceneInfo,_FDeferredShadingSceneRenderer::RenderLights_::_2_::FCompareFSortedLightSceneInfo>_>
                (piVar15,lVar8,param_3,param_4);
LAB_141b851df:
      plVar10 = plVar10 + -3;
    } while (&local_328 <= plVar10);
  }
  return;
code_r0x000141b8511a:
  if (*piVar15 <= *piVar14) goto LAB_141b85111;
LAB_141b85121:
  do {
    piVar12 = piVar11;
    piVar11 = piVar12 + -4;
    if (piVar11 <= piVar14) break;
  } while (*piVar14 <= *piVar11);
  iVar2 = piVar12[-3];
  iVar3 = piVar12[-2];
  iVar4 = piVar12[-1];
  if (piVar15 <= piVar11) {
    uVar5 = *(undefined8 *)piVar15;
    uVar6 = *(undefined8 *)(piVar9 + 6);
    *piVar15 = *piVar11;
    piVar9[5] = iVar2;
    piVar9[6] = iVar3;
    piVar9[7] = iVar4;
    *(undefined8 *)piVar11 = uVar5;
    *(undefined8 *)(piVar12 + -2) = uVar6;
    goto LAB_141b85111;
  }
  uVar5 = *(undefined8 *)piVar14;
  uVar6 = *(undefined8 *)(piVar14 + 2);
  local_338._0_4_ = (int)local_338 + -1;
  *piVar14 = *piVar11;
  piVar14[1] = iVar2;
  piVar14[2] = iVar3;
  piVar14[3] = iVar4;
  *(undefined8 *)piVar11 = uVar5;
  *(undefined8 *)(piVar12 + -2) = uVar6;
  if ((longlong)((longlong)piVar11 + (-0x10 - (longlong)piVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)piVar13 - (longlong)piVar15 & 0xfffffffffffffff0U)) {
    if (piVar15 < piVar13) {
      *plVar10 = (longlong)piVar15;
      plVar10[1] = (longlong)piVar13;
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (piVar11 <= piVar14 + 4) goto LAB_141b851df;
    piVar13 = piVar12 + -8;
    piVar15 = piVar14;
  }
  else {
    if (piVar14 + 4 < piVar11) {
      *plVar10 = (longlong)piVar14;
      plVar10[1] = (longlong)(piVar12 + -8);
      *(int *)(plVar10 + 2) = (int)local_338;
      plVar10 = plVar10 + 3;
    }
    if (piVar13 <= piVar15) goto LAB_141b851df;
  }
  lVar8 = ((longlong)piVar13 - (longlong)piVar15 >> 4) + 1;
  piVar14 = piVar15;
  if ((int)local_338 == 0) goto LAB_141b851d0;
  goto LAB_141b850e0;
}



// FUNCTION 141b85270 IntroSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_> body=794 status=ok
// SIG undefined IntroSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined1 auStack_3c8 [32];
  longlong *local_3a8;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined4 local_370;
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
    lStack_340 = param_1 + (param_2 - 1) * 4;
    fVar12 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar12 = fVar12 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar12 = ::_guard_xfg_dispatch_icall_nop(fVar12);
    local_338 = (undefined4)(longlong)(fVar12 + fVar12);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar8 = &local_348;
    do {
      puVar4 = (undefined4 *)*plVar8;
      puVar6 = (undefined4 *)plVar8[1];
      local_358 = plVar8[2];
      lVar5 = ((longlong)puVar6 - (longlong)puVar4 >> 2) + 1;
      puVar11 = puVar4;
      iVar9 = (int)local_358;
      local_3a8 = plVar8;
      if ((int)local_358 != 0) {
LAB_141b85360:
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = lVar5 + 1;
          }
          puVar4 = puVar11 + (lVar5 >> 1);
          if (puVar4 != puVar11) {
            uVar1 = *puVar4;
            *puVar4 = *puVar11;
            *puVar11 = uVar1;
          }
          puVar7 = puVar6 + 1;
          puVar4 = puVar11;
LAB_141b85391:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar6) goto code_r0x000141b8539a;
          goto LAB_141b853c2;
        }
        if (puVar11 < puVar6) {
          do {
            puVar4 = puVar11;
            if (puVar11 + 1 <= puVar6) {
              local_378 = param_4[1];
              local_370 = *(undefined4 *)(param_4 + 2);
              uVar2 = *param_4;
              puVar7 = puVar11;
              puVar10 = puVar11 + 1;
              do {
                iVar9 = TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::
                        Compare(*puVar7,*puVar10,uVar2,&local_378);
                puVar4 = puVar10;
                if (-1 < iVar9) {
                  puVar4 = puVar7;
                }
                puVar10 = puVar10 + 1;
                puVar7 = puVar4;
              } while (puVar10 <= puVar6);
            }
            if (puVar4 != puVar6) {
              uVar1 = *puVar4;
              *puVar4 = *puVar6;
              *puVar6 = uVar1;
            }
            puVar6 = puVar6 + -1;
            plVar8 = local_3a8;
          } while (puVar11 < puVar6);
        }
        goto LAB_141b854b4;
      }
LAB_141b854a5:
      HeapSortInternal<FSetElementId,FIdentityFunctor,TDereferenceWrapper<FSetElementId,TCompareStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>_>_>
                (puVar4,lVar5,param_3,param_4);
LAB_141b854b4:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  return;
code_r0x000141b8539a:
  local_398 = param_4[1];
  local_390 = *(undefined4 *)(param_4 + 2);
  iVar3 = TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::Compare
                    (*puVar11,*puVar4,*param_4,&local_398);
  if (-1 < iVar3) goto LAB_141b85391;
LAB_141b853c2:
  do {
    puVar10 = puVar7;
    puVar7 = puVar10 + -1;
    if (puVar7 <= puVar11) break;
    local_388 = param_4[1];
    local_380 = *(undefined4 *)(param_4 + 2);
    iVar3 = TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::Compare
                      (*puVar7,*puVar11,*param_4,&local_388);
  } while (-1 < iVar3);
  if (puVar4 <= puVar7) {
    if (puVar4 != puVar7) {
      uVar1 = *puVar4;
      *puVar4 = *puVar7;
      *puVar7 = uVar1;
    }
    goto LAB_141b85391;
  }
  if (puVar11 != puVar7) {
    uVar1 = *puVar11;
    *puVar11 = *puVar7;
    *puVar7 = uVar1;
  }
  iVar9 = iVar9 + -1;
  if ((longlong)((longlong)puVar7 + (-4 - (longlong)puVar11) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar6 - (longlong)puVar4 & 0xfffffffffffffffcU)) {
    if (puVar4 < puVar6) {
      *plVar8 = (longlong)puVar4;
      plVar8[1] = (longlong)puVar6;
      *(int *)(plVar8 + 2) = iVar9;
      plVar8 = plVar8 + 3;
      local_3a8 = plVar8;
    }
    if (puVar7 <= puVar11 + 1) goto LAB_141b854b4;
    puVar6 = puVar10 + -2;
    puVar4 = puVar11;
  }
  else {
    if (puVar11 + 1 < puVar7) {
      *plVar8 = (longlong)puVar11;
      plVar8[1] = (longlong)(puVar10 + -2);
      *(int *)(plVar8 + 2) = iVar9;
      plVar8 = plVar8 + 3;
      local_3a8 = plVar8;
    }
    if (puVar6 <= puVar4) goto LAB_141b854b4;
  }
  lVar5 = ((longlong)puVar6 - (longlong)puVar4 >> 2) + 1;
  puVar11 = puVar4;
  if (iVar9 == 0) goto LAB_141b854a5;
  goto LAB_141b85360;
}



// FUNCTION 141b85590 FUN_141b85590 body=1086 status=ok
// SIG undefined FUN_141b85590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b85590(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined8 *puVar15;
  char cVar16;
  char cVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined1 auStack_4f8 [32];
  longlong local_4d8;
  undefined4 local_4c8;
  char local_4c4;
  char local_4c3;
  char local_4c2;
  int local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 local_478 [38];
  int local_348;
  undefined8 local_328 [3];
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined1 local_2e8 [336];
  undefined1 local_198 [336];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  uVar26 = 0;
  if ((int)param_2[5] == 0) {
LAB_141b8597f:
    local_4c8 = 0;
  }
  else {
    if (*(longlong *)(*param_2 + 0x98) == 0) {
      puVar18 = (undefined8 *)FUN_141aaf600(local_198);
    }
    else {
      puVar18 = (undefined8 *)
                FUN_14274f0e0(*(longlong *)(*param_2 + 0x98),local_2e8,(int)param_2[6]);
    }
    lVar23 = 2;
    puVar15 = local_478;
    do {
      puVar22 = puVar15;
      puVar19 = puVar18;
      uVar10 = puVar19[1];
      uVar11 = puVar19[2];
      uVar12 = puVar19[3];
      *puVar22 = *puVar19;
      puVar22[1] = uVar10;
      uVar10 = puVar19[4];
      uVar13 = puVar19[5];
      puVar22[2] = uVar11;
      puVar22[3] = uVar12;
      uVar11 = puVar19[6];
      uVar12 = puVar19[7];
      puVar22[4] = uVar10;
      puVar22[5] = uVar13;
      uVar10 = puVar19[8];
      uVar13 = puVar19[9];
      puVar22[6] = uVar11;
      puVar22[7] = uVar12;
      uVar11 = puVar19[10];
      uVar12 = puVar19[0xb];
      puVar22[8] = uVar10;
      puVar22[9] = uVar13;
      uVar10 = puVar19[0xc];
      uVar13 = puVar19[0xd];
      puVar22[10] = uVar11;
      puVar22[0xb] = uVar12;
      uVar11 = puVar19[0xe];
      uVar12 = puVar19[0xf];
      puVar22[0xc] = uVar10;
      puVar22[0xd] = uVar13;
      puVar22[0xe] = uVar11;
      puVar22[0xf] = uVar12;
      lVar23 = lVar23 + -1;
      puVar18 = puVar19 + 0x10;
      puVar15 = puVar22 + 0x10;
    } while (lVar23 != 0);
    uVar10 = puVar19[0x11];
    lVar23 = param_2[3];
    uVar11 = puVar19[0x12];
    uVar12 = puVar19[0x13];
    puVar22[0x10] = puVar19[0x10];
    puVar22[0x11] = uVar10;
    uVar10 = puVar19[0x14];
    uVar13 = puVar19[0x15];
    puVar22[0x12] = uVar11;
    puVar22[0x13] = uVar12;
    uVar2 = *(undefined4 *)(puVar19 + 0x16);
    uVar3 = *(undefined4 *)((longlong)puVar19 + 0xb4);
    uVar4 = *(undefined4 *)(puVar19 + 0x17);
    uVar5 = *(undefined4 *)((longlong)puVar19 + 0xbc);
    puVar22[0x14] = uVar10;
    puVar22[0x15] = uVar13;
    uVar6 = *(undefined4 *)(puVar19 + 0x18);
    uVar7 = *(undefined4 *)((longlong)puVar19 + 0xc4);
    uVar8 = *(undefined4 *)(puVar19 + 0x19);
    uVar9 = *(undefined4 *)((longlong)puVar19 + 0xcc);
    *(undefined4 *)(puVar22 + 0x16) = uVar2;
    *(undefined4 *)((longlong)puVar22 + 0xb4) = uVar3;
    *(undefined4 *)(puVar22 + 0x17) = uVar4;
    *(undefined4 *)((longlong)puVar22 + 0xbc) = uVar5;
    *(undefined4 *)(puVar22 + 0x18) = uVar6;
    *(undefined4 *)((longlong)puVar22 + 0xc4) = uVar7;
    *(undefined4 *)(puVar22 + 0x19) = uVar8;
    *(undefined4 *)((longlong)puVar22 + 0xcc) = uVar9;
    uVar24 = uVar26;
    if (lVar23 != 0) {
      lVar21 = *(longlong *)(*(longlong *)(*param_3 + 0x10) + 0x20);
      if (lVar21 != 0) {
        bVar1 = *(byte *)(lVar23 + 0x2c);
        if (bVar1 == 0) {
          uVar20 = 0xffffffff;
        }
        else {
          uVar25 = 0;
          if (bVar1 != 0) {
            for (; (bVar1 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
            }
          }
          uVar20 = (ulonglong)uVar25;
        }
        uVar24 = 0;
        if (-1 < (int)uVar20) {
          uVar24 = *(ulonglong *)(lVar21 + 0x1170 + uVar20 * 8);
        }
      }
    }
    lVar23 = FUN_14274dce0();
    local_4c2 = FUN_141b90ed0(param_3,uVar24,param_2[3]);
    if (((uVar24 == 0) || ((*(uint *)(*(longlong *)(uVar24 + 0x30) + 0x180) >> 3 & 1) != 0)) ||
       (*(char *)(lVar23 + 6) == '\0')) {
      cVar17 = '\0';
    }
    else {
      cVar17 = '\x01';
    }
    local_4c4 = cVar17;
    if (uVar24 == 0) {
LAB_141b85734:
      local_4c3 = '\0';
    }
    else {
      cVar16 = (**(code **)(**(longlong **)(uVar24 + 0x30) + 0xa0))();
      if (((cVar16 == '\0') || (local_4c2 == '\0')) ||
         (local_4c3 = '\x01', *(char *)(lVar23 + 8) == '\0')) goto LAB_141b85734;
    }
    if (cVar17 == '\0') {
LAB_141b857ad:
      bVar14 = false;
    }
    else {
      cVar17 = FUN_141be7dc0(uVar24);
      uVar25 = *(uint *)(*(longlong *)(uVar24 + 0x30) + 0x180);
      if ((((uVar25 >> 3 & 1) == 0) || ((uVar25 >> 4 & 1) == 0)) ||
         (((*(byte *)(uVar24 + 0x90) & 1) != 0 && (*(int *)(uVar24 + 0xa0) < DAT_1464c1f74)))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if (((cVar17 == '\0') || ((uVar25 >> 4 & 1) == 0)) ||
         ((((uVar25 >> 2 & 1) != 0 && (!bVar14)) || (local_4c2 == '\0')))) goto LAB_141b857ad;
      bVar14 = true;
    }
    if (((local_348 == 2) && (*(char *)(lVar23 + 5) != '\0')) && (*(char *)(lVar23 + 3) != '\0')) {
      if (*(longlong *)(*param_2 + 0x98) == 0) {
        local_328[0] = 0;
        local_308 = 0;
        uStack_300 = 0;
        lVar21 = (longlong)&local_310 + 1;
        local_2f8 = 0;
        do {
          uVar25 = (int)uVar26 + 4;
          uVar26 = (ulonglong)uVar25;
          *(undefined4 *)(lVar21 + -1) = 0;
          lVar21 = lVar21 + 4;
        } while (uVar25 < 4);
        puVar18 = local_328;
      }
      else {
        puVar18 = (undefined8 *)
                  FLightCacheInterface::GetShadowMapInteraction
                            (*(longlong *)(*param_2 + 0x98),local_328);
      }
      local_488 = *(int *)(puVar18 + 6);
      uStack_484 = *(undefined4 *)((longlong)puVar18 + 0x34);
      uStack_480 = *(undefined4 *)(puVar18 + 7);
      uStack_47c = *(undefined4 *)((longlong)puVar18 + 0x3c);
      if (local_4c4 != '\0') {
        lVar23 = *param_2;
        cVar17 = FUN_141be7e40(uVar24);
        local_4d8 = lVar23 + 0x98;
        if (cVar17 == '\0') {
          local_4c8 = 0x15;
        }
        else {
          local_4c8 = 0x16;
        }
        goto LAB_141b8599f;
      }
      if (local_4c3 == '\0') {
        if ((local_488 == 2) && (*(char *)(lVar23 + 7) != '\0')) {
          local_4c8 = 0xd;
          goto LAB_141b85983;
        }
      }
      else if (local_488 == 2) {
        cVar17 = FUN_141be7e40(uVar24);
        if ((cVar17 != '\0') && (*(char *)(lVar23 + 7) != '\0')) {
          local_4c8 = 0xe;
          goto LAB_141b85983;
        }
      }
      local_4c8 = 10;
    }
    else {
      cVar17 = FUN_141b66cf0((int)param_2[6]);
      if (((cVar17 == '\0') || (param_2[3] == 0)) || (1 < *(int *)(param_2[3] + 0x10) - 1U)) {
        if (local_4c4 == '\0') goto LAB_141b8597f;
        if ((uVar24 == 0) || (!bVar14)) {
          local_4c8 = 0x13;
        }
        else {
          local_4c8 = 0x14;
        }
      }
      else {
        if (local_4c4 == '\0') {
          local_4d8 = *param_2 + 0x98;
          if (local_4c3 == '\0') {
            local_4c8 = 0xf;
          }
          else {
            local_4c8 = 0x12;
          }
          goto LAB_141b8599f;
        }
        if (uVar24 != 0) {
          cVar17 = FUN_141be7e40(uVar24);
          if ((cVar17 != '\0') && (bVar14)) {
            local_4c8 = 0x11;
            goto LAB_141b85983;
          }
        }
        local_4c8 = 0x10;
      }
    }
  }
LAB_141b85983:
  local_4d8 = *param_2 + 0x98;
LAB_141b8599f:
  FUN_141bb21e0(param_3,param_1,param_2,&local_4c8);
  return;
}



// FUNCTION 141b859d0 FUN_141b859d0 body=1258 status=ok
// SIG undefined FUN_141b859d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b859d0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined8 *puVar15;
  char cVar16;
  char cVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 auStack_4f8 [32];
  longlong local_4d8;
  undefined4 local_4c8;
  char local_4c4;
  char local_4c3;
  char local_4c2;
  int local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 local_478 [38];
  int local_348;
  undefined8 local_328 [3];
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined1 local_2e8 [336];
  undefined1 local_198 [336];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  uVar27 = 0;
  if ((int)param_2[5] == 0) {
LAB_141b85dff:
    local_4c8 = 0;
  }
  else {
    if (*(longlong *)(*param_2 + 0x98) == 0) {
      puVar18 = (undefined8 *)FUN_141aaf600(local_198);
    }
    else {
      puVar18 = (undefined8 *)
                FUN_14274f0e0(*(longlong *)(*param_2 + 0x98),local_2e8,(int)param_2[6]);
    }
    lVar24 = 2;
    puVar15 = local_478;
    do {
      puVar23 = puVar15;
      puVar19 = puVar18;
      uVar10 = puVar19[1];
      uVar11 = puVar19[2];
      uVar12 = puVar19[3];
      *puVar23 = *puVar19;
      puVar23[1] = uVar10;
      uVar10 = puVar19[4];
      uVar13 = puVar19[5];
      puVar23[2] = uVar11;
      puVar23[3] = uVar12;
      uVar11 = puVar19[6];
      uVar12 = puVar19[7];
      puVar23[4] = uVar10;
      puVar23[5] = uVar13;
      uVar10 = puVar19[8];
      uVar13 = puVar19[9];
      puVar23[6] = uVar11;
      puVar23[7] = uVar12;
      uVar11 = puVar19[10];
      uVar12 = puVar19[0xb];
      puVar23[8] = uVar10;
      puVar23[9] = uVar13;
      uVar10 = puVar19[0xc];
      uVar13 = puVar19[0xd];
      puVar23[10] = uVar11;
      puVar23[0xb] = uVar12;
      uVar11 = puVar19[0xe];
      uVar12 = puVar19[0xf];
      puVar23[0xc] = uVar10;
      puVar23[0xd] = uVar13;
      puVar23[0xe] = uVar11;
      puVar23[0xf] = uVar12;
      lVar24 = lVar24 + -1;
      puVar18 = puVar19 + 0x10;
      puVar15 = puVar23 + 0x10;
    } while (lVar24 != 0);
    uVar10 = puVar19[0x11];
    uVar11 = puVar19[0x12];
    uVar12 = puVar19[0x13];
    puVar23[0x10] = puVar19[0x10];
    puVar23[0x11] = uVar10;
    uVar10 = puVar19[0x14];
    uVar13 = puVar19[0x15];
    puVar23[0x12] = uVar11;
    puVar23[0x13] = uVar12;
    uVar2 = *(undefined4 *)(puVar19 + 0x16);
    uVar3 = *(undefined4 *)((longlong)puVar19 + 0xb4);
    uVar4 = *(undefined4 *)(puVar19 + 0x17);
    uVar5 = *(undefined4 *)((longlong)puVar19 + 0xbc);
    puVar23[0x14] = uVar10;
    puVar23[0x15] = uVar13;
    uVar6 = *(undefined4 *)(puVar19 + 0x18);
    uVar7 = *(undefined4 *)((longlong)puVar19 + 0xc4);
    uVar8 = *(undefined4 *)(puVar19 + 0x19);
    uVar9 = *(undefined4 *)((longlong)puVar19 + 0xcc);
    lVar24 = param_2[3];
    *(undefined4 *)(puVar23 + 0x16) = uVar2;
    *(undefined4 *)((longlong)puVar23 + 0xb4) = uVar3;
    *(undefined4 *)(puVar23 + 0x17) = uVar4;
    *(undefined4 *)((longlong)puVar23 + 0xbc) = uVar5;
    *(undefined4 *)(puVar23 + 0x18) = uVar6;
    *(undefined4 *)((longlong)puVar23 + 0xc4) = uVar7;
    *(undefined4 *)(puVar23 + 0x19) = uVar8;
    *(undefined4 *)((longlong)puVar23 + 0xcc) = uVar9;
    uVar25 = uVar27;
    if ((lVar24 != 0) && (*param_3 != 0)) {
      bVar1 = *(byte *)(lVar24 + 0x2c);
      if (bVar1 == 0) {
        uVar22 = 0xffffffff;
      }
      else {
        uVar26 = 0;
        if (bVar1 != 0) {
          for (; (bVar1 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
          }
        }
        uVar22 = (ulonglong)uVar26;
      }
      uVar25 = 0;
      if (-1 < (int)uVar22) {
        uVar25 = *(ulonglong *)(*param_3 + 0x1170 + uVar22 * 8);
      }
    }
    lVar24 = FUN_14274dce0();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146a485d8) &&
       (_Init_thread_header(&DAT_146a485d8), DAT_146a485d8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar21 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))
                          (DAT_1468b1f88,L"r.Mobile.EnableMovableLightCSMShaderCulling");
      uVar22 = uVar27;
      if (plVar21 != (longlong *)0x0) {
        uVar22 = (**(code **)(*plVar21 + 0x38))(plVar21);
      }
      DAT_146a485d0 = uVar22;
      _Init_thread_footer(&DAT_146a485d8);
    }
    if (((uVar25 == 0) || ((*(uint *)(*(longlong *)(uVar25 + 0x30) + 0x180) >> 1 & 1) == 0)) ||
       (local_4c3 = '\x01', *(int *)(DAT_146a485d0 + 4) != 0)) {
      local_4c3 = '\0';
    }
    if (((uVar25 == 0) || ((*(uint *)(*(longlong *)(uVar25 + 0x30) + 0x180) >> 3 & 1) != 0)) ||
       (*(char *)(lVar24 + 6) == '\0')) {
      cVar17 = '\0';
    }
    else {
      cVar17 = '\x01';
    }
    local_4c4 = cVar17;
    if (((uVar25 == 0) ||
        (cVar16 = (**(code **)(**(longlong **)(uVar25 + 0x30) + 0xa0))(), cVar16 == '\0')) ||
       ((local_4c3 == '\0' || (local_4c2 = '\x01', *(char *)(lVar24 + 8) == '\0')))) {
      local_4c2 = '\0';
    }
    if (cVar17 == '\0') {
LAB_141b85c24:
      bVar14 = false;
    }
    else {
      cVar17 = FUN_141be7dc0(uVar25);
      uVar26 = *(uint *)(*(longlong *)(uVar25 + 0x30) + 0x180);
      if ((((uVar26 >> 3 & 1) == 0) || ((uVar26 >> 4 & 1) == 0)) ||
         (((*(byte *)(uVar25 + 0x90) & 1) != 0 && (*(int *)(uVar25 + 0xa0) < DAT_1464c1f74)))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((((cVar17 == '\0') || ((uVar26 >> 4 & 1) == 0)) || (((uVar26 >> 2 & 1) != 0 && (!bVar14)))
          ) || (local_4c3 == '\0')) goto LAB_141b85c24;
      bVar14 = true;
    }
    if (((local_348 == 2) && (*(char *)(lVar24 + 5) != '\0')) && (*(char *)(lVar24 + 3) != '\0')) {
      if (*(longlong *)(*param_2 + 0x98) == 0) {
        local_328[0] = 0;
        local_308 = 0;
        uStack_300 = 0;
        lVar20 = (longlong)&local_310 + 1;
        local_2f8 = 0;
        do {
          uVar26 = (int)uVar27 + 4;
          uVar27 = (ulonglong)uVar26;
          *(undefined4 *)(lVar20 + -1) = 0;
          lVar20 = lVar20 + 4;
        } while (uVar26 < 4);
        puVar18 = local_328;
      }
      else {
        puVar18 = (undefined8 *)
                  FLightCacheInterface::GetShadowMapInteraction
                            (*(longlong *)(*param_2 + 0x98),local_328);
      }
      local_488 = *(int *)(puVar18 + 6);
      uStack_484 = *(undefined4 *)((longlong)puVar18 + 0x34);
      uStack_480 = *(undefined4 *)(puVar18 + 7);
      uStack_47c = *(undefined4 *)((longlong)puVar18 + 0x3c);
      if (local_4c4 != '\0') {
        lVar24 = *param_2;
        cVar17 = FUN_141be7e40(uVar25);
        local_4d8 = lVar24 + 0x98;
        if (cVar17 == '\0') {
          local_4c8 = 0x15;
        }
        else {
          local_4c8 = 0x16;
        }
        goto LAB_141b85e1f;
      }
      if (local_4c2 == '\0') {
        if ((local_488 != 2) || (*(char *)(lVar24 + 7) == '\0')) goto LAB_141b85d2b;
        local_4c8 = 0xd;
      }
      else if (((local_488 == 2) && (cVar17 = FUN_141be7e40(uVar25), cVar17 != '\0')) &&
              (*(char *)(lVar24 + 7) != '\0')) {
        local_4c8 = 0xe;
      }
      else {
LAB_141b85d2b:
        local_4c8 = 10;
      }
    }
    else {
      cVar17 = FUN_141b66cf0((int)param_2[6]);
      if (((cVar17 == '\0') || (param_2[3] == 0)) || (1 < *(int *)(param_2[3] + 0x10) - 1U)) {
        if (local_4c4 == '\0') goto LAB_141b85dff;
        if ((uVar25 == 0) || (!bVar14)) {
          local_4c8 = 0x13;
        }
        else {
          local_4c8 = 0x14;
        }
      }
      else {
        if (local_4c4 == '\0') {
          local_4d8 = *param_2 + 0x98;
          if (local_4c2 == '\0') {
            local_4c8 = 0xf;
          }
          else {
            local_4c8 = 0x12;
          }
          goto LAB_141b85e1f;
        }
        if (((uVar25 == 0) || (cVar17 = FUN_141be7e40(uVar25), cVar17 == '\0')) || (!bVar14)) {
          local_4c8 = 0x10;
        }
        else {
          local_4c8 = 0x11;
        }
      }
    }
  }
  local_4d8 = *param_2 + 0x98;
LAB_141b85e1f:
  FUN_141bb2460(param_3,param_1,param_2,&local_4c8);
  return;
}



// FUNCTION 141b85ec0 FUN_141b85ec0 body=1901 status=ok
// SIG undefined FUN_141b85ec0(void)

longlong FUN_141b85ec0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
                      undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  longlong *plVar9;
  int local_res18 [4];
  undefined *local_48;
  undefined4 local_40;
  
  plVar7 = (longlong *)0x0;
  bVar3 = false;
  local_res18[0] = 0;
  switch(param_3) {
  case 0:
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_48 = &DAT_146a49470;
    local_40 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_40 = 0;
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    local_48 = &DAT_146a48750;
    lVar6 = *plVar9;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    lVar1 = *plVar9;
    *param_2 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_48 = (undefined *)0x0;
      plVar9 = (longlong *)0x1;
      plVar4 = plVar7;
    }
    else {
      lVar2 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar4 = *(longlong **)(lVar2 + 0x38);
      plVar9 = plVar7;
    }
    param_2[1] = plVar4;
    if (plVar9 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    bVar3 = false;
    if (lVar1 == 0) {
      bVar3 = true;
      local_48 = (undefined *)0x0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    param_2[4] = plVar7;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    FUN_141ed6ac0(param_1,param_2,2,1);
    FUN_141bbd9a0(lVar6,param_1,param_4,param_5);
    uVar5 = FUN_1404a0e20();
    FUN_141bbd7f0(lVar1,param_1,param_4,uVar5,param_6);
    break;
  case 1:
  case 2:
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_48 = &DAT_146a49470;
    local_40 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_40 = 0;
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    local_48 = &DAT_146a489f0;
    lVar6 = *plVar9;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    lVar1 = *plVar9;
    *param_2 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_48 = (undefined *)0x0;
      plVar9 = (longlong *)&DAT_00000004;
      plVar4 = plVar7;
    }
    else {
      lVar2 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar4 = *(longlong **)(lVar2 + 0x38);
      plVar9 = plVar7;
    }
    param_2[1] = plVar4;
    if (plVar9 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    bVar3 = false;
    if (lVar1 == 0) {
      bVar3 = true;
      local_48 = (undefined *)0x0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    param_2[4] = plVar7;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    FUN_141ed6ac0(param_1,param_2,2,1);
    FUN_141bbd9a0(lVar6,param_1,param_4,param_5);
    uVar5 = FUN_1404a0e20();
    FUN_141bbd7f0(lVar1,param_1,param_4,uVar5,param_6);
    break;
  case 3:
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_48 = &DAT_146a49470;
    local_40 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_40 = 0;
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    local_48 = &DAT_146a48c90;
    lVar6 = *plVar9;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    lVar1 = *plVar9;
    *param_2 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_48 = (undefined *)0x0;
      plVar9 = (longlong *)&DAT_00000010;
      plVar4 = plVar7;
    }
    else {
      lVar2 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar4 = *(longlong **)(lVar2 + 0x38);
      plVar9 = plVar7;
    }
    param_2[1] = plVar4;
    if (plVar9 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    bVar3 = false;
    if (lVar1 == 0) {
      bVar3 = true;
      local_48 = (undefined *)0x0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    param_2[4] = plVar7;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    FUN_141ed6ac0(param_1,param_2,2,1);
    FUN_141bbd9a0(lVar6,param_1,param_4,param_5);
    uVar5 = FUN_1404a0e20();
    FUN_141bbd7f0(lVar1,param_1,param_4,uVar5,param_6);
    break;
  case 4:
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_48 = &DAT_146a49470;
    local_40 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_40 = 0;
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    local_48 = &DAT_146a48f30;
    lVar6 = *plVar9;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    lVar1 = *plVar9;
    *param_2 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_48 = (undefined *)0x0;
      plVar9 = (longlong *)&DAT_00000040;
      plVar4 = plVar7;
    }
    else {
      lVar2 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar4 = *(longlong **)(lVar2 + 0x38);
      plVar9 = plVar7;
    }
    bVar8 = (byte)plVar9;
    param_2[1] = plVar4;
    if (plVar9 != (longlong *)0x0) {
      bVar8 = 0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    if (lVar1 == 0) {
      bVar8 = bVar8 | 0x80;
      local_48 = (undefined *)0x0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    param_2[4] = plVar7;
    if ((char)bVar8 < '\0') {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    FUN_141ed6ac0(param_1,param_2,2,1);
    FUN_141bbd9a0(lVar6,param_1,param_4,param_5);
    uVar5 = FUN_1404a0e20();
    FUN_141bbd7f0(lVar1,param_1,param_4,uVar5,param_6);
    break;
  case 5:
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_48 = &DAT_146a49470;
    local_40 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_40 = 0;
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    local_48 = &DAT_146a491d0;
    lVar6 = *plVar9;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    lVar1 = *plVar9;
    *param_2 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_48 = (undefined *)0x0;
      bVar3 = true;
      plVar4 = plVar7;
    }
    else {
      lVar2 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar4 = *(longlong **)(lVar2 + 0x38);
    }
    param_2[1] = plVar4;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    bVar3 = false;
    if (lVar1 == 0) {
      bVar3 = true;
      local_48 = (undefined *)0x0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    param_2[4] = plVar7;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    FUN_141ed6ac0(param_1,param_2,2,1);
    FUN_141bbd9a0(lVar6,param_1,param_4,param_5);
    uVar5 = FUN_1404a0e20();
    FUN_141bbd7f0(lVar1,param_1,param_4,uVar5,param_6);
    break;
  default:
    lVar6 = 0;
  }
  return lVar6;
}



// FUNCTION 141b86650 FUN_141b86650 body=1901 status=ok
// SIG undefined FUN_141b86650(void)

longlong FUN_141b86650(undefined8 param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
                      undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  longlong *plVar9;
  int local_res18 [4];
  undefined *local_48;
  undefined4 local_40;
  
  plVar7 = (longlong *)0x0;
  bVar3 = false;
  local_res18[0] = 0;
  switch(param_3) {
  case 0:
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_48 = &DAT_146a49320;
    local_40 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_40 = 0;
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    local_48 = &DAT_146a48600;
    lVar6 = *plVar9;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    lVar1 = *plVar9;
    *param_2 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_48 = (undefined *)0x0;
      plVar9 = (longlong *)0x1;
      plVar4 = plVar7;
    }
    else {
      lVar2 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar4 = *(longlong **)(lVar2 + 0x38);
      plVar9 = plVar7;
    }
    param_2[1] = plVar4;
    if (plVar9 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    bVar3 = false;
    if (lVar1 == 0) {
      bVar3 = true;
      local_48 = (undefined *)0x0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    param_2[4] = plVar7;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    FUN_141ed6ac0(param_1,param_2,2,1);
    FUN_141bbd9a0(lVar6,param_1,param_4,param_5);
    uVar5 = FUN_1404a0e20();
    FUN_141bbd7f0(lVar1,param_1,param_4,uVar5,param_6);
    break;
  case 1:
  case 2:
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_48 = &DAT_146a49320;
    local_40 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_40 = 0;
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    local_48 = &DAT_146a488a0;
    lVar6 = *plVar9;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    lVar1 = *plVar9;
    *param_2 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_48 = (undefined *)0x0;
      plVar9 = (longlong *)&DAT_00000004;
      plVar4 = plVar7;
    }
    else {
      lVar2 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar4 = *(longlong **)(lVar2 + 0x38);
      plVar9 = plVar7;
    }
    param_2[1] = plVar4;
    if (plVar9 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    bVar3 = false;
    if (lVar1 == 0) {
      bVar3 = true;
      local_48 = (undefined *)0x0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    param_2[4] = plVar7;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    FUN_141ed6ac0(param_1,param_2,2,1);
    FUN_141bbd9a0(lVar6,param_1,param_4,param_5);
    uVar5 = FUN_1404a0e20();
    FUN_141bbd7f0(lVar1,param_1,param_4,uVar5,param_6);
    break;
  case 3:
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_48 = &DAT_146a49320;
    local_40 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_40 = 0;
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    local_48 = &DAT_146a48b40;
    lVar6 = *plVar9;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    lVar1 = *plVar9;
    *param_2 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_48 = (undefined *)0x0;
      plVar9 = (longlong *)&DAT_00000010;
      plVar4 = plVar7;
    }
    else {
      lVar2 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar4 = *(longlong **)(lVar2 + 0x38);
      plVar9 = plVar7;
    }
    param_2[1] = plVar4;
    if (plVar9 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    bVar3 = false;
    if (lVar1 == 0) {
      bVar3 = true;
      local_48 = (undefined *)0x0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    param_2[4] = plVar7;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    FUN_141ed6ac0(param_1,param_2,2,1);
    FUN_141bbd9a0(lVar6,param_1,param_4,param_5);
    uVar5 = FUN_1404a0e20();
    FUN_141bbd7f0(lVar1,param_1,param_4,uVar5,param_6);
    break;
  case 4:
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_48 = &DAT_146a49320;
    local_40 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_40 = 0;
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    local_48 = &DAT_146a48de0;
    lVar6 = *plVar9;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    lVar1 = *plVar9;
    *param_2 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_48 = (undefined *)0x0;
      plVar9 = (longlong *)&DAT_00000040;
      plVar4 = plVar7;
    }
    else {
      lVar2 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar4 = *(longlong **)(lVar2 + 0x38);
      plVar9 = plVar7;
    }
    bVar8 = (byte)plVar9;
    param_2[1] = plVar4;
    if (plVar9 != (longlong *)0x0) {
      bVar8 = 0;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    if (lVar1 == 0) {
      bVar8 = bVar8 | 0x80;
      local_48 = (undefined *)0x0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    param_2[4] = plVar7;
    if ((char)bVar8 < '\0') {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    FUN_141ed6ac0(param_1,param_2,2,1);
    FUN_141bbd9a0(lVar6,param_1,param_4,param_5);
    uVar5 = FUN_1404a0e20();
    FUN_141bbd7f0(lVar1,param_1,param_4,uVar5,param_6);
    break;
  case 5:
    lVar1 = *(longlong *)(param_4 + 0x3090);
    local_48 = &DAT_146a49320;
    local_40 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    local_40 = 0;
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    local_48 = &DAT_146a49080;
    lVar6 = *plVar9;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res18,&local_48);
    plVar4 = plVar7;
    if (local_res18[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res18[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar9 = plVar4 + 2;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar7;
    }
    lVar1 = *plVar9;
    *param_2 = DAT_1464c2720;
    if (lVar6 == 0) {
      local_48 = (undefined *)0x0;
      bVar3 = true;
      plVar4 = plVar7;
    }
    else {
      lVar2 = *(longlong *)(lVar6 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar4 = *(longlong **)(lVar2 + 0x38);
    }
    param_2[1] = plVar4;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    bVar3 = false;
    if (lVar1 == 0) {
      bVar3 = true;
      local_48 = (undefined *)0x0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (*(char *)(lVar2 + 0x28) == '\0') {
        FUN_1419f3850(lVar2);
      }
      plVar7 = *(longlong **)(lVar2 + 0x40);
    }
    param_2[4] = plVar7;
    if (bVar3) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_48);
    }
    FUN_141ed6ac0(param_1,param_2,2,1);
    FUN_141bbd9a0(lVar6,param_1,param_4,param_5);
    uVar5 = FUN_1404a0e20();
    FUN_141bbd7f0(lVar1,param_1,param_4,uVar5,param_6);
    break;
  default:
    lVar6 = 0;
  }
  return lVar6;
}



// FUNCTION 141b86de0 FUN_141b86de0 body=1820 status=ok
// SIG undefined FUN_141b86de0(void)

void FUN_141b86de0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8 [2];
  float local_res20 [2];
  undefined8 local_118;
  float local_110;
  float local_10c;
  int local_108;
  int iStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f0 [2];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [8];
  undefined4 local_90;
  
  lVar6 = FSceneRenderTargets::Get(param_2);
  lVar3 = param_5;
  if ((int)DAT_1464c200c < 1) {
    uVar11 = 1;
  }
  else {
    uVar11 = 8;
    if ((int)DAT_1464c200c < 8) {
      uVar11 = DAT_1464c200c;
    }
  }
  fVar13 = (float)((ulonglong)(uint)(*(int *)(param_5 + 0x1aa8) - *(int *)(param_5 + 0x1aa0)) /
                  (ulonglong)uVar11);
  uVar2 = *(ulonglong *)(lVar6 + 0x378);
  fVar14 = (float)((ulonglong)(uint)(*(int *)(param_5 + 0x1aac) - *(int *)(param_5 + 0x1aa4)) /
                  (ulonglong)uVar11);
  iVar4 = (int)((longlong)((ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff) /
               (longlong)(int)uVar11);
  iStack_104 = (int)(uVar2 >> 0x20);
  iStack_104 = iStack_104 / (int)uVar11;
  _local_108 = CONCAT44(iStack_104,iVar4);
  fVar16 = (float)iVar4;
  local_dc = (float)iStack_104;
  local_e8 = (float)((int)ROUND((fVar13 + fVar13) - 0.5) >> 1) / fVar16;
  fVar13 = ((float)((int)ROUND((fVar14 + fVar14) - 0.5) >> 1) / local_dc) * fVar16;
  local_e0 = 1.0 / local_e8;
  local_e4 = fVar13 / local_dc;
  local_dc = local_dc / fVar13;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x2a,&local_e8,0);
  local_110 = *(float *)(lVar3 + 0x8e4);
  local_118 = *(undefined8 *)(lVar3 + 0x8dc);
  (**(code **)(**(longlong **)(param_4 + 0x30) + 0x88))
            (*(longlong **)(param_4 + 0x30),&local_100,&local_118);
  FUN_1427633e0(lVar3,&local_c8,&local_100,0);
  if (DAT_1464c9c24 <= 0.0) {
    local_c4 = 1.0 - local_c4;
  }
  local_d8 = (((float)(*(int *)(lVar3 + 0x1aa8) - *(int *)(lVar3 + 0x1aa0)) *
               (local_c8 * 0.5 * (1.0 / local_bc) + 0.5) + (float)*(int *)(lVar3 + 0x1aa0)) /
             (float)(int)*(undefined8 *)(lVar6 + 0x378)) * local_e0;
  local_d4 = (((0.5 - local_c4 * 0.5 * (1.0 / local_bc)) *
               (float)(*(int *)(lVar3 + 0x1aac) - *(int *)(lVar3 + 0x1aa4)) +
              (float)*(int *)(lVar3 + 0x1aa4)) /
             (float)(int)((ulonglong)*(undefined8 *)(lVar6 + 0x378) >> 0x20)) * local_dc;
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>(param_2,param_3,param_1,&local_d8,0);
  local_10c = (float)(**(code **)(**(longlong **)(param_4 + 0x30) + 0x18))();
  local_110 = local_f8;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 6,&local_118,0);
  uVar12 = (**(code **)(**(longlong **)(param_4 + 0x30) + 0x28))();
  param_5 = CONCAT44(param_5._4_4_,uVar12);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0xc,&param_5,0);
  lVar6 = *(longlong *)(param_4 + 0x30);
  if (*(char *)(lVar6 + 0x188) == '\x02') {
    local_110 = *(float *)(lVar6 + 0x50);
    local_118 = CONCAT44(*(undefined4 *)(lVar6 + 0x40),*(undefined4 *)(lVar6 + 0x30));
    SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
              (param_2,param_3,param_1 + 0x18,&local_118,0);
    uVar7 = (**(code **)(**(longlong **)(param_4 + 0x30) + 0x60))
                      (*(longlong **)(param_4 + 0x30),&param_5);
    SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
              (param_2,param_3,param_1 + 0x12,uVar7,0);
  }
  local_118 = *(undefined8 *)(lVar3 + 0x8dc);
  local_110 = *(float *)(lVar3 + 0x8e4);
  local_100 = *(float *)(lVar3 + 0x8dc) - local_100;
  local_fc = *(float *)(lVar3 + 0x8e0) - local_fc;
  fVar15 = SQRT(local_fc * local_fc + local_100 * local_100 +
                (local_110 - local_f8) * (local_110 - local_f8)) + 200.0;
  local_10c = fVar15;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x1e,&local_118,0);
  uVar2 = *(ulonglong *)(lVar3 + 0x1aa0);
  iVar5 = (int)((longlong)((ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff) /
               (longlong)(int)uVar11);
  param_5._4_4_ = (int)(uVar2 >> 0x20);
  iVar4 = param_5._4_4_;
  param_5._4_4_ = param_5._4_4_ / (int)uVar11;
  param_5 = CONCAT44(param_5._4_4_,iVar5);
  fVar13 = (float)iVar5;
  local_b8 = (fVar13 + 0.5) / fVar16;
  fVar14 = (float)param_5._4_4_;
  local_b4 = (fVar14 + 0.5) / (float)iStack_104;
  local_b0 = (((float)((ulonglong)(uint)(*(int *)(lVar3 + 0x1aa8) - (int)uVar2) / (ulonglong)uVar11)
              + fVar13) - 0.5) / fVar16;
  local_ac = (((float)((ulonglong)(uint)(*(int *)(lVar3 + 0x1aac) - iVar4) / (ulonglong)uVar11) +
              fVar14) - 0.5) / (float)iStack_104;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x24,&local_b8,0);
  FLinearColor::FLinearColor(local_98,param_4 + 0x9c);
  local_10c = *(float *)(param_4 + 0x98);
  local_110 = (float)local_90;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x36,&local_118,0);
  (**(code **)(**(longlong **)(param_4 + 0x30) + 0x78))
            (*(longlong **)(param_4 + 0x30),local_f0,local_res20);
  local_9c = local_f0[0];
  local_a8 = 1.0 / local_res20[0];
  local_a0 = 0x3f800000;
  local_a4 = *(undefined4 *)(param_4 + 0x94);
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,param_3,param_1 + 0x30,&local_a8,0);
  local_res8[0] = 0.0;
  if ((char)(*(longlong **)(param_4 + 0x30))[0x31] != '\0') {
    fVar13 = (float)(**(code **)(**(longlong **)(param_4 + 0x30) + 0x18))();
    fVar15 = fVar15 / (fVar13 * 5.0);
    if ((0.0 <= fVar15) && (local_res8[0] = fVar15, 1.0 <= fVar15)) {
      local_res8[0] = 1.0;
    }
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,param_3,param_1 + 0x3c,local_res8,0);
  if (*param_6 != 0) {
    uVar7 = *(undefined8 *)(*param_6 + 0x10);
    uVar8 = FUN_141a156e0();
    if (*(short *)(param_1 + 0x44) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x42);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar9;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      *puVar10 = &PTR_LAB_143f59c80;
      puVar10[2] = param_3;
      puVar10[4] = uVar7;
    }
    if (*(short *)(param_1 + 0x48) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x46);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar9;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_143f59c70;
      puVar10[2] = param_3;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[4] = uVar8;
    }
  }
  return;
}



// FUNCTION 141b87500 FUN_141b87500 body=221 status=ok
// SIG undefined FUN_141b87500(void)

void FUN_141b87500(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res18 [2];
  
  if (*(char *)(param_3 + 6) != '\0') {
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,local_res18,param_4,&DAT_146a28708,0);
    uVar1 = *(ushort *)(param_3 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_144d920a0;
    puVar3[2] = param_2;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    puVar3[4] = local_res18[0];
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  return;
}



// FUNCTION 141b875e0 FUN_141b875e0 body=1462 status=ok
// SIG undefined FUN_141b875e0(void)

undefined8
FUN_141b875e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char param_5,undefined8 *param_6,undefined8 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  switch(param_4) {
  default:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a2ec20,param_3,1);
      puVar3 = &DAT_146a2f6a0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a2f400;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a2ed70,param_3,1);
      puVar3 = &DAT_146a2f7f0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a2f550;
      }
    }
    break;
  case 10:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a30e40,param_3,1);
      puVar3 = &DAT_146a318c0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a31620;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a30f90,param_3,1);
      puVar3 = &DAT_146a31a10;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a31770;
      }
    }
    break;
  case 0xd:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a33060,param_3,1);
      puVar3 = &DAT_146a33ae0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a33840;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a331b0,param_3,1);
      puVar3 = &DAT_146a33c30;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a33990;
      }
    }
    break;
  case 0xe:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a35280,param_3,1);
      puVar3 = &DAT_146a35d00;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a35a60;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a353d0,param_3,1);
      puVar3 = &DAT_146a35e50;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a35bb0;
      }
    }
    break;
  case 0xf:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a374a0,param_3,1);
      puVar3 = &DAT_146a37f20;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a37c80;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a375f0,param_3,1);
      puVar3 = &DAT_146a38070;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a37dd0;
      }
    }
    break;
  case 0x10:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a396c0,param_3,1);
      puVar3 = &DAT_146a3a140;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a39ea0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a39810,param_3,1);
      puVar3 = &DAT_146a3a290;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a39ff0;
      }
    }
    break;
  case 0x11:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3b8e0,param_3,1);
      puVar3 = &DAT_146a3c360;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3c0c0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3ba30,param_3,1);
      puVar3 = &DAT_146a3c4b0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3c210;
      }
    }
    break;
  case 0x12:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3db00,param_3,1);
      puVar3 = &DAT_146a3e580;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3e2e0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3dc50,param_3,1);
      puVar3 = &DAT_146a3e6d0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3e430;
      }
    }
    break;
  case 0x13:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3fd20,param_3,1);
      puVar3 = &DAT_146a407a0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a40500;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3fe70,param_3,1);
      puVar3 = &DAT_146a408f0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a40650;
      }
    }
    break;
  case 0x14:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a41f40,param_3,1);
      puVar3 = &DAT_146a429c0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a42720;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a42090,param_3,1);
      puVar3 = &DAT_146a42b10;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a42870;
      }
    }
    break;
  case 0x15:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a44160,param_3,1);
      puVar3 = &DAT_146a44be0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a44940;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a442b0,param_3,1);
      puVar3 = &DAT_146a44d30;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a44a90;
      }
    }
    break;
  case 0x16:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a46380,param_3,1);
      puVar3 = &DAT_146a46e00;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a46b60;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a464d0,param_3,1);
      puVar3 = &DAT_146a46f50;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a46cb0;
      }
    }
  }
  uVar2 = FUN_1425939a0(param_2,puVar3,param_3,1);
  *param_7 = uVar2;
  return param_1;
}



// FUNCTION 141b87c00 FUN_141b87c00 body=1462 status=ok
// SIG undefined FUN_141b87c00(void)

undefined8
FUN_141b87c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char param_5,undefined8 *param_6,undefined8 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  switch(param_4) {
  default:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a2ec20,param_3,1);
      puVar3 = &DAT_146a2fbe0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a2f940;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a2ed70,param_3,1);
      puVar3 = &DAT_146a2fd30;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a2fa90;
      }
    }
    break;
  case 10:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a30e40,param_3,1);
      puVar3 = &DAT_146a31e00;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a31b60;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a30f90,param_3,1);
      puVar3 = &DAT_146a31f50;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a31cb0;
      }
    }
    break;
  case 0xd:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a33060,param_3,1);
      puVar3 = &DAT_146a34020;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a33d80;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a331b0,param_3,1);
      puVar3 = &DAT_146a34170;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a33ed0;
      }
    }
    break;
  case 0xe:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a35280,param_3,1);
      puVar3 = &DAT_146a36240;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a35fa0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a353d0,param_3,1);
      puVar3 = &DAT_146a36390;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a360f0;
      }
    }
    break;
  case 0xf:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a374a0,param_3,1);
      puVar3 = &DAT_146a38460;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a381c0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a375f0,param_3,1);
      puVar3 = &DAT_146a385b0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a38310;
      }
    }
    break;
  case 0x10:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a396c0,param_3,1);
      puVar3 = &DAT_146a3a680;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3a3e0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a39810,param_3,1);
      puVar3 = &DAT_146a3a7d0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3a530;
      }
    }
    break;
  case 0x11:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3b8e0,param_3,1);
      puVar3 = &DAT_146a3c8a0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3c600;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3ba30,param_3,1);
      puVar3 = &DAT_146a3c9f0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3c750;
      }
    }
    break;
  case 0x12:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3db00,param_3,1);
      puVar3 = &DAT_146a3eac0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3e820;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3dc50,param_3,1);
      puVar3 = &DAT_146a3ec10;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3e970;
      }
    }
    break;
  case 0x13:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3fd20,param_3,1);
      puVar3 = &DAT_146a40ce0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a40a40;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3fe70,param_3,1);
      puVar3 = &DAT_146a40e30;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a40b90;
      }
    }
    break;
  case 0x14:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a41f40,param_3,1);
      puVar3 = &DAT_146a42f00;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a42c60;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a42090,param_3,1);
      puVar3 = &DAT_146a43050;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a42db0;
      }
    }
    break;
  case 0x15:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a44160,param_3,1);
      puVar3 = &DAT_146a45120;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a44e80;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a442b0,param_3,1);
      puVar3 = &DAT_146a45270;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a44fd0;
      }
    }
    break;
  case 0x16:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a46380,param_3,1);
      puVar3 = &DAT_146a47340;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a470a0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a464d0,param_3,1);
      puVar3 = &DAT_146a47490;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a471f0;
      }
    }
  }
  uVar2 = FUN_1425939a0(param_2,puVar3,param_3,1);
  *param_7 = uVar2;
  return param_1;
}



// FUNCTION 141b88220 FUN_141b88220 body=1462 status=ok
// SIG undefined FUN_141b88220(void)

undefined8
FUN_141b88220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char param_5,undefined8 *param_6,undefined8 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  switch(param_4) {
  default:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a2ec20,param_3,1);
      puVar3 = &DAT_146a30120;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a2fe80;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a2ed70,param_3,1);
      puVar3 = &DAT_146a30270;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a2ffd0;
      }
    }
    break;
  case 10:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a30e40,param_3,1);
      puVar3 = &DAT_146a32340;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a320a0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a30f90,param_3,1);
      puVar3 = &DAT_146a32490;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a321f0;
      }
    }
    break;
  case 0xd:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a33060,param_3,1);
      puVar3 = &DAT_146a34560;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a342c0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a331b0,param_3,1);
      puVar3 = &DAT_146a346b0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a34410;
      }
    }
    break;
  case 0xe:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a35280,param_3,1);
      puVar3 = &DAT_146a36780;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a364e0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a353d0,param_3,1);
      puVar3 = &DAT_146a368d0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a36630;
      }
    }
    break;
  case 0xf:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a374a0,param_3,1);
      puVar3 = &DAT_146a389a0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a38700;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a375f0,param_3,1);
      puVar3 = &DAT_146a38af0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a38850;
      }
    }
    break;
  case 0x10:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a396c0,param_3,1);
      puVar3 = &DAT_146a3abc0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3a920;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a39810,param_3,1);
      puVar3 = &DAT_146a3ad10;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3aa70;
      }
    }
    break;
  case 0x11:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3b8e0,param_3,1);
      puVar3 = &DAT_146a3cde0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3cb40;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3ba30,param_3,1);
      puVar3 = &DAT_146a3cf30;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3cc90;
      }
    }
    break;
  case 0x12:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3db00,param_3,1);
      puVar3 = &DAT_146a3f000;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3ed60;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3dc50,param_3,1);
      puVar3 = &DAT_146a3f150;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3eeb0;
      }
    }
    break;
  case 0x13:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3fd20,param_3,1);
      puVar3 = &DAT_146a41220;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a40f80;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3fe70,param_3,1);
      puVar3 = &DAT_146a41370;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a410d0;
      }
    }
    break;
  case 0x14:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a41f40,param_3,1);
      puVar3 = &DAT_146a43440;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a431a0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a42090,param_3,1);
      puVar3 = &DAT_146a43590;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a432f0;
      }
    }
    break;
  case 0x15:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a44160,param_3,1);
      puVar3 = &DAT_146a45660;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a453c0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a442b0,param_3,1);
      puVar3 = &DAT_146a457b0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a45510;
      }
    }
    break;
  case 0x16:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a46380,param_3,1);
      puVar3 = &DAT_146a47880;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a475e0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a464d0,param_3,1);
      puVar3 = &DAT_146a479d0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a47730;
      }
    }
  }
  uVar2 = FUN_1425939a0(param_2,puVar3,param_3,1);
  *param_7 = uVar2;
  return param_1;
}



// FUNCTION 141b88840 FUN_141b88840 body=1462 status=ok
// SIG undefined FUN_141b88840(void)

undefined8
FUN_141b88840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char param_5,undefined8 *param_6,undefined8 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  switch(param_4) {
  default:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a2ec20,param_3,1);
      puVar3 = &DAT_146a30660;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a303c0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a2ed70,param_3,1);
      puVar3 = &DAT_146a307b0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a30510;
      }
    }
    break;
  case 10:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a30e40,param_3,1);
      puVar3 = &DAT_146a32880;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a325e0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a30f90,param_3,1);
      puVar3 = &DAT_146a329d0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a32730;
      }
    }
    break;
  case 0xd:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a33060,param_3,1);
      puVar3 = &DAT_146a34aa0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a34800;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a331b0,param_3,1);
      puVar3 = &DAT_146a34bf0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a34950;
      }
    }
    break;
  case 0xe:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a35280,param_3,1);
      puVar3 = &DAT_146a36cc0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a36a20;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a353d0,param_3,1);
      puVar3 = &DAT_146a36e10;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a36b70;
      }
    }
    break;
  case 0xf:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a374a0,param_3,1);
      puVar3 = &DAT_146a38ee0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a38c40;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a375f0,param_3,1);
      puVar3 = &DAT_146a39030;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a38d90;
      }
    }
    break;
  case 0x10:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a396c0,param_3,1);
      puVar3 = &DAT_146a3b100;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3ae60;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a39810,param_3,1);
      puVar3 = &DAT_146a3b250;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3afb0;
      }
    }
    break;
  case 0x11:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3b8e0,param_3,1);
      puVar3 = &DAT_146a3d320;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3d080;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3ba30,param_3,1);
      puVar3 = &DAT_146a3d470;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3d1d0;
      }
    }
    break;
  case 0x12:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3db00,param_3,1);
      puVar3 = &DAT_146a3f540;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3f2a0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3dc50,param_3,1);
      puVar3 = &DAT_146a3f690;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3f3f0;
      }
    }
    break;
  case 0x13:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3fd20,param_3,1);
      puVar3 = &DAT_146a41760;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a414c0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3fe70,param_3,1);
      puVar3 = &DAT_146a418b0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a41610;
      }
    }
    break;
  case 0x14:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a41f40,param_3,1);
      puVar3 = &DAT_146a43980;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a436e0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a42090,param_3,1);
      puVar3 = &DAT_146a43ad0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a43830;
      }
    }
    break;
  case 0x15:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a44160,param_3,1);
      puVar3 = &DAT_146a45ba0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a45900;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a442b0,param_3,1);
      puVar3 = &DAT_146a45cf0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a45a50;
      }
    }
    break;
  case 0x16:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a46380,param_3,1);
      puVar3 = &DAT_146a47dc0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a47b20;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a464d0,param_3,1);
      puVar3 = &DAT_146a47f10;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a47c70;
      }
    }
  }
  uVar2 = FUN_1425939a0(param_2,puVar3,param_3,1);
  *param_7 = uVar2;
  return param_1;
}



// FUNCTION 141b88e60 FUN_141b88e60 body=1462 status=ok
// SIG undefined FUN_141b88e60(void)

undefined8
FUN_141b88e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char param_5,undefined8 *param_6,undefined8 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  switch(param_4) {
  default:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a2ec20,param_3,1);
      puVar3 = &DAT_146a2f160;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a2eec0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a2ed70,param_3,1);
      puVar3 = &DAT_146a2f2b0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a2f010;
      }
    }
    break;
  case 10:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a30e40,param_3,1);
      puVar3 = &DAT_146a31380;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a310e0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a30f90,param_3,1);
      puVar3 = &DAT_146a314d0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a31230;
      }
    }
    break;
  case 0xd:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a33060,param_3,1);
      puVar3 = &DAT_146a335a0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a33300;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a331b0,param_3,1);
      puVar3 = &DAT_146a336f0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a33450;
      }
    }
    break;
  case 0xe:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a35280,param_3,1);
      puVar3 = &DAT_146a357c0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a35520;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a353d0,param_3,1);
      puVar3 = &DAT_146a35910;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a35670;
      }
    }
    break;
  case 0xf:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a374a0,param_3,1);
      puVar3 = &DAT_146a379e0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a37740;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a375f0,param_3,1);
      puVar3 = &DAT_146a37b30;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a37890;
      }
    }
    break;
  case 0x10:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a396c0,param_3,1);
      puVar3 = &DAT_146a39c00;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a39960;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a39810,param_3,1);
      puVar3 = &DAT_146a39d50;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a39ab0;
      }
    }
    break;
  case 0x11:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3b8e0,param_3,1);
      puVar3 = &DAT_146a3be20;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3bb80;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3ba30,param_3,1);
      puVar3 = &DAT_146a3bf70;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3bcd0;
      }
    }
    break;
  case 0x12:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3db00,param_3,1);
      puVar3 = &DAT_146a3e040;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3dda0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3dc50,param_3,1);
      puVar3 = &DAT_146a3e190;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3def0;
      }
    }
    break;
  case 0x13:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3fd20,param_3,1);
      puVar3 = &DAT_146a40260;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3ffc0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3fe70,param_3,1);
      puVar3 = &DAT_146a403b0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a40110;
      }
    }
    break;
  case 0x14:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a41f40,param_3,1);
      puVar3 = &DAT_146a42480;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a421e0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a42090,param_3,1);
      puVar3 = &DAT_146a425d0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a42330;
      }
    }
    break;
  case 0x15:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a44160,param_3,1);
      puVar3 = &DAT_146a446a0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a44400;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a442b0,param_3,1);
      puVar3 = &DAT_146a447f0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a44550;
      }
    }
    break;
  case 0x16:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a46380,param_3,1);
      puVar3 = &DAT_146a468c0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a46620;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a464d0,param_3,1);
      puVar3 = &DAT_146a46a10;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a46770;
      }
    }
  }
  uVar2 = FUN_1425939a0(param_2,puVar3,param_3,1);
  *param_7 = uVar2;
  return param_1;
}



// FUNCTION 141b89480 FUN_141b89480 body=1462 status=ok
// SIG undefined FUN_141b89480(void)

undefined8
FUN_141b89480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char param_5,undefined8 *param_6,undefined8 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  switch(param_4) {
  default:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a2ec20,param_3,1);
      puVar3 = &DAT_146a30ba0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a30900;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a2ed70,param_3,1);
      puVar3 = &DAT_146a30cf0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a30a50;
      }
    }
    break;
  case 10:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a30e40,param_3,1);
      puVar3 = &DAT_146a32dc0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a32b20;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a30f90,param_3,1);
      puVar3 = &DAT_146a32f10;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a32c70;
      }
    }
    break;
  case 0xd:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a33060,param_3,1);
      puVar3 = &DAT_146a34fe0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a34d40;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a331b0,param_3,1);
      puVar3 = &DAT_146a35130;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a34e90;
      }
    }
    break;
  case 0xe:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a35280,param_3,1);
      puVar3 = &DAT_146a37200;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a36f60;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a353d0,param_3,1);
      puVar3 = &DAT_146a37350;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a370b0;
      }
    }
    break;
  case 0xf:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a374a0,param_3,1);
      puVar3 = &DAT_146a39420;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a39180;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a375f0,param_3,1);
      puVar3 = &DAT_146a39570;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a392d0;
      }
    }
    break;
  case 0x10:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a396c0,param_3,1);
      puVar3 = &DAT_146a3b640;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3b3a0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a39810,param_3,1);
      puVar3 = &DAT_146a3b790;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3b4f0;
      }
    }
    break;
  case 0x11:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3b8e0,param_3,1);
      puVar3 = &DAT_146a3d860;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3d5c0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3ba30,param_3,1);
      puVar3 = &DAT_146a3d9b0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3d710;
      }
    }
    break;
  case 0x12:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3db00,param_3,1);
      puVar3 = &DAT_146a3fa80;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3f7e0;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3dc50,param_3,1);
      puVar3 = &DAT_146a3fbd0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a3f930;
      }
    }
    break;
  case 0x13:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3fd20,param_3,1);
      puVar3 = &DAT_146a41ca0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a41a00;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a3fe70,param_3,1);
      puVar3 = &DAT_146a41df0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a41b50;
      }
    }
    break;
  case 0x14:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a41f40,param_3,1);
      puVar3 = &DAT_146a43ec0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a43c20;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a42090,param_3,1);
      puVar3 = &DAT_146a44010;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a43d70;
      }
    }
    break;
  case 0x15:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a44160,param_3,1);
      puVar3 = &DAT_146a460e0;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a45e40;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a442b0,param_3,1);
      puVar3 = &DAT_146a46230;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a45f90;
      }
    }
    break;
  case 0x16:
    cVar1 = FUN_142753a10();
    if (cVar1 == '\0') {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a46380,param_3,1);
      puVar3 = &DAT_146a48300;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a48060;
      }
    }
    else {
      uVar2 = FUN_1425939a0(param_2,&DAT_146a464d0,param_3,1);
      puVar3 = &DAT_146a48450;
      *param_6 = uVar2;
      if (param_5 == '\0') {
        puVar3 = &DAT_146a481b0;
      }
    }
  }
  uVar2 = FUN_1425939a0(param_2,puVar3,param_3,1);
  *param_7 = uVar2;
  return param_1;
}



// FUNCTION 141b89aa0 TDownsampleLightShaftsPixelShader<1,1> body=216 status=ok
// SIG undefined TDownsampleLightShaftsPixelShader<1,1>(void)

undefined8 *
TDownsampleLightShaftsPixelShader<1,1>::TDownsampleLightShaftsPixelShader<1,1>
          (undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e0a580;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10e) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 *)((longlong)param_1 + 0x116) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11e) = 0;
  FLightShaftPixelShaderParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FShaderParameter::Bind
            ((longlong)param_1 + 0x10a,*(undefined8 *)(param_2 + 0x18),L"SampleOffsets",0);
  FUN_141cdf500(param_2,param_1 + 0x22,param_1 + 0x23);
  return param_1;
}



// FUNCTION 141b89b80 TDownsampleLightShaftsPixelShader<1,1> body=143 status=ok
// SIG undefined TDownsampleLightShaftsPixelShader<1,1>(void)

undefined8 *
TDownsampleLightShaftsPixelShader<1,1>::TDownsampleLightShaftsPixelShader<1,1>(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e0a580;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 *)((longlong)param_1 + 0x116) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11e) = 0;
  return param_1;
}



// FUNCTION 141b89c10 FUN_141b89c10 body=404 status=ok
// SIG undefined FUN_141b89c10(void)

undefined8 * FUN_141b89c10(undefined8 *param_1,longlong param_2)

{
  FUN_141aaf710();
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)((longlong)param_1 + 0x156) = 0;
  *param_1 = &PTR_FUN_144e097c8;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x2a,*(undefined8 *)(param_2 + 0x18),L"PrecomputedLightingBuffer",0);
  FShaderParameter::Bind
            (param_1 + 0x2b,*(undefined8 *)(param_2 + 0x18),L"LightMapDensityParameters",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x15e,*(undefined8 *)(param_2 + 0x18),
             L"BuiltLightingAndSelectedFlags",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x164,*(undefined8 *)(param_2 + 0x18),L"DensitySelectedColor",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x16a,*(undefined8 *)(param_2 + 0x18),L"LightMapResolutionScale",0)
  ;
  FShaderParameter::Bind
            (param_1 + 0x2e,*(undefined8 *)(param_2 + 0x18),L"LightMapDensityDisplayOptions",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x176,*(undefined8 *)(param_2 + 0x18),L"VertexMappedColor",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x17c,*(undefined8 *)(param_2 + 0x18),L"GridTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x30,*(undefined8 *)(param_2 + 0x18),L"GridTextureSampler",0);
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),DAT_146a632c0,0);
  return param_1;
}



// FUNCTION 141b89db0 FUN_141b89db0 body=506 status=ok
// SIG undefined FUN_141b89db0(void)

undefined8 *
FUN_141b89db0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,int param_6,undefined4 param_7,undefined1 param_8,undefined8 param_9
             ,undefined4 param_10,undefined8 param_11,byte param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35 [13];
  
  FUN_141b279e0(param_1,0,0,param_4,param_9,param_10);
  lVar3 = param_2[0xc9];
  param_1[9] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar1 = param_1 + 8;
  *(uint *)((longlong)param_1 + 0x5c) = *(uint *)((longlong)param_1 + 0x5c) & 0xfffffffe;
  puVar2 = param_1 + 7;
  *(undefined4 *)(param_1 + 0xb) = param_7;
  *(uint *)((longlong)param_1 + 0x5c) = *(uint *)((longlong)param_1 + 0x5c) | (uint)param_12;
  *(int *)((longlong)param_1 + 0x54) = param_6;
  *(undefined4 *)(param_1 + 10) = param_5;
  pcVar4 = *(code **)(*param_2 + 0x40);
  if (param_6 == 1) {
    uVar5 = (*pcVar4)(param_2);
    FUN_141b875e0(local_35,param_4,uVar5,param_5,param_8,puVar2,puVar1);
  }
  else if (param_6 == 2) {
    uVar5 = (*pcVar4)(param_2);
    FUN_141b87c00(&local_36,param_4,uVar5,param_5,param_8,puVar2,puVar1);
  }
  else if (param_6 == 3) {
    uVar5 = (*pcVar4)(param_2);
    FUN_141b88220(&local_37,param_4,uVar5,param_5,param_8,puVar2,puVar1);
  }
  else if (param_6 == 4) {
    uVar5 = (*pcVar4)(param_2);
    FUN_141b88840(&local_38,param_4,uVar5,param_5,param_8,puVar2,puVar1);
  }
  else if (param_6 == 0x7fffffff) {
    uVar5 = (*pcVar4)(param_2);
    FUN_141b89480(local_res10,param_4,uVar5,param_5,param_8,puVar2,puVar1);
  }
  else {
    uVar5 = (*pcVar4)();
    FUN_141b88e60(local_res8,param_4,uVar5,param_5,param_8,puVar2,puVar1);
  }
  *param_1 = *puVar2;
  return param_1;
}



// FUNCTION 141b89fb0 FUN_141b89fb0 body=972 status=ok
// SIG undefined FUN_141b89fb0(void)

undefined8 * FUN_141b89fb0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141aaf710();
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)((longlong)param_1 + 0x156) = 0;
  *param_1 = &PTR_FUN_144e0a7d8;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ea) = 0;
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x2a,*(undefined8 *)(param_2 + 0x18),L"PrecomputedLightingBuffer",0);
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),DAT_146a291a0,0);
  FShaderResourceParameter::Bind
            (param_1 + 0x2c,*(undefined8 *)(param_2 + 0x18),L"ReflectionCubemap",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x164,*(undefined8 *)(param_2 + 0x18),L"ReflectionCubemapSampler",0
            );
  FShaderParameter::Bind
            (param_1 + 0x2d,*(undefined8 *)(param_2 + 0x18),L"InvReflectionCubemapAverageBrightness"
             ,0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x16e,*(undefined8 *)(param_2 + 0x18),L"LightPositionAndInvRadius",
             0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x17a,*(undefined8 *)(param_2 + 0x18),
             L"LightColorAndFalloffExponent",0);
  FShaderParameter::Bind(param_1 + 0x30,*(undefined8 *)(param_2 + 0x18),L"NumDynamicPointLights",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x196,*(undefined8 *)(param_2 + 0x18),
             L"ReflectionPositionsAndRadii",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x186,*(undefined8 *)(param_2 + 0x18),L"ReflectionCubemap1",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x18a,*(undefined8 *)(param_2 + 0x18),L"ReflectionCubemapSampler1",
             0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x18e,*(undefined8 *)(param_2 + 0x18),L"ReflectionCubemap2",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x192,*(undefined8 *)(param_2 + 0x18),L"ReflectionCubemapSampler2",
             0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x174,*(undefined8 *)(param_2 + 0x18),L"MobileSkyReflectionParams",
             0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x1e6,*(undefined8 *)(param_2 + 0x18),L"CSMDebugHint",0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderParameter::Bind((longlong)param_1 + 0x19c,uVar1,L"ReflectionPlane",0);
  FShaderParameter::Bind((longlong)param_1 + 0x1a2,uVar1,L"PlanarReflectionOrigin",0);
  FShaderParameter::Bind(param_1 + 0x35,uVar1,L"PlanarReflectionXAxis",0);
  FShaderParameter::Bind((longlong)param_1 + 0x1ae,uVar1,L"PlanarReflectionYAxis",0);
  FShaderParameter::Bind((longlong)param_1 + 0x1b4,uVar1,L"InverseTransposeMirrorMatrix",0);
  FShaderParameter::Bind((longlong)param_1 + 0x1ba,uVar1,L"PlanarReflectionParameters",0);
  FShaderParameter::Bind(param_1 + 0x38,uVar1,L"PlanarReflectionParameters2",0);
  FShaderParameter::Bind((longlong)param_1 + 0x1c6,uVar1,L"ProjectionWithExtraFOV",0);
  FShaderParameter::Bind((longlong)param_1 + 0x1cc,uVar1,L"PlanarReflectionScreenScaleBias",0);
  FShaderParameter::Bind((longlong)param_1 + 0x1d2,uVar1,L"bIsStereo",0);
  FShaderParameter::Bind(param_1 + 0x3b,uVar1,L"PlanarReflectionScreenBound",0);
  FShaderResourceParameter::Bind((longlong)param_1 + 0x1de,uVar1,L"PlanarReflectionTexture",0);
  FShaderResourceParameter::Bind((longlong)param_1 + 0x1e2,uVar1,L"PlanarReflectionSampler",0);
  return param_1;
}



// FUNCTION 141b8a380 FUN_141b8a380 body=198 status=ok
// SIG undefined FUN_141b8a380(void)

undefined8 * FUN_141b8a380(undefined8 *param_1)

{
  FUN_141aaf7d0();
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)((longlong)param_1 + 0x156) = 0;
  *param_1 = &PTR_FUN_144e0a7d8;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
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
  *(undefined4 *)(param_1 + 0x3d) = 0;
  return param_1;
}



// FUNCTION 141b8a450 FUN_141b8a450 body=108 status=ok
// SIG undefined FUN_141b8a450(void)

undefined8 * FUN_141b8a450(undefined8 *param_1,longlong param_2)

{
  FUN_141aaf710();
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)((longlong)param_1 + 0x156) = 0;
  *param_1 = &PTR_FUN_144e0a5b0;
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x2a,*(undefined8 *)(param_2 + 0x18),L"PrecomputedLightingBuffer",0);
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x22,*(undefined8 *)(param_2 + 0x18),DAT_146a291a0,0);
  return param_1;
}



// FUNCTION 141b8a4c0 FUN_141b8a4c0 body=119 status=ok
// SIG undefined FUN_141b8a4c0(void)

undefined8 * FUN_141b8a4c0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146b09b00;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141b8a540 FUN_141b8a540 body=119 status=ok
// SIG undefined FUN_141b8a540(void)

undefined8 * FUN_141b8a540(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146b09c50;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141b8a5c0 TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FInverseSquaredDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting> body=251 status=ok
// SIG undefined TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FInverseSquaredDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting>(void)

int * TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FInverseSquaredDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting>
      ::
      TShaderPermutationDomain<FDeferredLightPS::FSourceShapeDim,FDeferredLightPS::FSourceTextureDim,FDeferredLightPS::FIESProfileDim,FDeferredLightPS::FInverseSquaredDim,FDeferredLightPS::FVisualizeCullingDim,FDeferredLightPS::FLightingChannelsDim,FDeferredLightPS::FTransmissionDim,FDeferredLightPS::FHairLighting>
                (int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 / 3 + (param_2 >> 0x1f) +
          (int)(((longlong)param_2 / 3 + ((longlong)param_2 >> 0x3f) & 0xffffffffU) >> 0x1f);
  *param_1 = param_2 + uVar2 * -3;
  uVar1 = uVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  *(bool *)(param_1 + 1) = uVar1 == 1;
  uVar1 = (int)uVar2 / 2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar2 = ((int)uVar2 / 2) / 2;
  *(bool *)((longlong)param_1 + 5) = uVar1 == 1;
  uVar1 = uVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar2 = (int)uVar2 / 2;
  *(bool *)((longlong)param_1 + 6) = uVar1 == 1;
  uVar1 = uVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar2 = (int)uVar2 / 2;
  *(bool *)((longlong)param_1 + 7) = uVar1 == 1;
  uVar1 = uVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  uVar2 = (int)uVar2 / 2;
  *(bool *)(param_1 + 2) = uVar1 == 1;
  uVar1 = uVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  *(bool *)((longlong)param_1 + 9) = uVar1 == 1;
  uVar1 = (int)uVar2 / 2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  *(bool *)((longlong)param_1 + 10) = uVar1 == 1;
  return param_1;
}



// FUNCTION 141b8a6c0 FBlurLightShaftsPixelShader body=147 status=ok
// SIG undefined FBlurLightShaftsPixelShader(void)

undefined8 *
FBlurLightShaftsPixelShader::FBlurLightShaftsPixelShader(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e0a760;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xde) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10e) = 0;
  FShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"RadialBlurParameters",0);
  FLightShaftPixelShaderParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0xc6),*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 141b8a760 FUN_141b8a760 body=105 status=ok
// SIG undefined FUN_141b8a760(void)

undefined8 * FUN_141b8a760(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e0a760;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 141b8a7d0 FUN_141b8a7d0 body=650 status=ok
// SIG undefined FUN_141b8a7d0(void)

undefined8 * FUN_141b8a7d0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e090f8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10c) = 0;
  FUN_141cdf500(param_2);
  FShaderResourceParameter::Bind
            (param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"LightAttenuationTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xd4,*(undefined8 *)(param_2 + 0x18),
             L"LightAttenuationTextureSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x1b,*(undefined8 *)(param_2 + 0x18),L"LTCMatTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xdc,*(undefined8 *)(param_2 + 0x18),L"LTCMatSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x1c,*(undefined8 *)(param_2 + 0x18),L"LTCAmpTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xe4,*(undefined8 *)(param_2 + 0x18),L"LTCAmpSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"IESTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"IESTextureSampler",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"LightingChannelsTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf4,*(undefined8 *)(param_2 + 0x18),L"LightingChannelsSampler",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"SSProfilesTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xfc,*(undefined8 *)(param_2 + 0x18),
             L"TransmissionProfilesLinearSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x20,*(undefined8 *)(param_2 + 0x18),L"EyeAdaptation",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"DeferredLightParameters",0)
  ;
  FShaderParameter::Bind
            (param_1 + 0x21,*(undefined8 *)(param_2 + 0x18),L"DeferredLightParametersIndex",0);
  return param_1;
}



// FUNCTION 141b8aa60 FUN_141b8aa60 body=135 status=ok
// SIG undefined FUN_141b8aa60(void)

undefined8 * FUN_141b8aa60(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e090f8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10c) = 0;
  return param_1;
}



// FUNCTION 141b8aaf0 FDrawingPolicyLink body=265 status=ok
// SIG undefined FDrawingPolicyLink(void)

undefined8 *
TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink::
FDrawingPolicyLink(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(uint *)((longlong)param_1 + 0x7c) =
       *(uint *)((longlong)param_1 + 0x7c) ^
       (*(uint *)((longlong)param_2 + 0x7c) ^ *(uint *)((longlong)param_1 + 0x7c)) & 1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xbc);
  *(undefined8 *)((longlong)param_1 + 0xb4) = *(undefined8 *)((longlong)param_2 + 0xb4);
  *(undefined8 *)((longlong)param_1 + 0xbc) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xc4);
  param_1[0x19] = param_2[0x19];
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  return param_1;
}



// FUNCTION 141b8ac00 FFinishOcclusionPixelShader body=102 status=ok
// SIG undefined FFinishOcclusionPixelShader(void)

undefined8 *
FFinishOcclusionPixelShader::FFinishOcclusionPixelShader(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e0a898;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  FLightShaftPixelShaderParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 141b8ac70 FUN_141b8ac70 body=105 status=ok
// SIG undefined FUN_141b8ac70(void)

undefined8 * FUN_141b8ac70(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e0a898;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  return param_1;
}



// FUNCTION 141b8ace0 FUN_141b8ace0 body=763 status=ok
// SIG undefined FUN_141b8ace0(void)

undefined8 * FUN_141b8ace0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *_Dst;
  int iVar4;
  
  _Dst = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_144e0aa00;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x45a60000;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x34) = 4;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x33] = &PTR_FUN_144e0a9c0;
  *(undefined4 *)(param_1 + 0x39) = 2;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 4;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x3c] = &PTR_FUN_144e0a9c0;
  *(undefined4 *)(param_1 + 0x42) = 2;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0xffffffff;
  puVar1 = (undefined8 *)operator_new(0x28);
  puVar3 = _Dst;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    puVar3 = puVar1;
  }
  param_1[0x11] = puVar3;
  lVar2 = FSceneRenderTargets::Get();
  iVar4 = *(int *)(lVar2 + 0x3b0) * *(int *)(lVar2 + 0x3b0);
  FUN_141b34f10(param_1[0x11],0xc,iVar4 * 4,0,L"mVplListBuffer",1,0);
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar3 = _Dst;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar3 = puVar1;
  }
  param_1[0x10] = puVar3;
  FUN_141ba0010(puVar3,0x20000,0x20);
  puVar1 = (undefined8 *)operator_new(0x28);
  puVar3 = _Dst;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[4] = 0;
    puVar3 = puVar1;
  }
  param_1[0x26] = puVar3;
  FUN_141b34f10(puVar3,0xc,iVar4 * 0x10,0,L"GvListBuffer",1,0);
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar3 = _Dst;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar3 = puVar1;
  }
  param_1[0x25] = puVar3;
  FUN_141ba0010(puVar3,0x20000,0x20);
  puVar3 = (undefined8 *)operator_new(0xc0);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[8] = 0;
    *(undefined4 *)(puVar3 + 9) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar3 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar3 + 100) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x6c) = 0x3f800000;
    _Dst = puVar3;
  }
  param_1[0x15] = _Dst;
  _guard_xfg_dispatch_icall_nop(_Dst,0,0xc0);
  *(undefined1 *)(param_1 + 0x45) = 0;
  return param_1;
}



// FUNCTION 141b8afe0 FUN_141b8afe0 body=385 status=ok
// SIG undefined FUN_141b8afe0(void)

undefined8 * FUN_141b8afe0(undefined8 *param_1,longlong param_2,byte param_3)

{
  byte bVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144e0a950;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  if ((*(byte *)(*(longlong *)(param_2 + 0x10) + 0x3a0) & 1) == 0) {
    uVar5 = 0x7fffffff;
  }
  else {
    uVar5 = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x3a4);
  }
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
  bVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x538))();
  *(uint *)(param_1 + 0x12) =
       *(uint *)(param_1 + 0x12) ^ ((uint)bVar1 ^ *(uint *)(param_1 + 0x12)) & 1;
  uVar6 = (*(uint *)(param_2 + 0x180) >> 7 & 1 | (uint)param_3 * 2) * 2 |
          *(uint *)(param_1 + 0x12) & 0xfffffff9;
  *(uint *)(param_1 + 0x12) = uVar6;
  *(uint *)(param_1 + 0x12) =
       (*(int *)(*(longlong *)(param_2 + 0x10) + 0x388) << 3 ^ uVar6) & 8 ^ uVar6;
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x38c)
  ;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x390);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x394)
  ;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar2 = (**(code **)(*(longlong *)param_1[6] + 0x98))();
  *(undefined1 *)((longlong)param_1 + 0xa4) = uVar2;
  plVar3 = (longlong *)FUN_14233fea0(*(undefined8 *)(param_2 + 0x10));
  uVar4 = (**(code **)(*plVar3 + 0x210))(plVar3);
  param_1[0x15] = uVar4;
  FUN_141edf270(param_1);
  return param_1;
}



// FUNCTION 141b8b170 FUN_141b8b170 body=655 status=ok
// SIG undefined FUN_141b8b170(void)

undefined8 * FUN_141b8b170(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  FGlobalShader::FGlobalShader();
  lVar4 = 0;
  puVar5 = (undefined8 *)((longlong)param_1 + 0xdc);
  *param_1 = &PTR__scalar_deleting_destructor__144e09550;
  puVar3 = (undefined8 *)((longlong)param_1 + 0x114);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  lVar1 = 7;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *puVar5 = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *puVar3 = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  lVar2 = lVar4;
  do {
    FShaderResourceParameter::Bind
              ((longlong)puVar5 + -0x1c,*(undefined8 *)(param_2 + 0x18),
               *(undefined8 *)((longlong)&PTR_u_gLpv3DTexture0_1464c1f78 + lVar2),0);
    FShaderResourceParameter::Bind
              (puVar5,*(undefined8 *)(param_2 + 0x18),
               *(undefined8 *)((longlong)&PTR_u_gLpv3DTextureRW0_1464c1fb0 + lVar2));
    puVar5 = (undefined8 *)((longlong)puVar5 + 4);
    lVar2 = lVar2 + 8;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1f,*(undefined8 *)(param_2 + 0x18),L"gLpv3DTextureSampler",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xfc,*(undefined8 *)(param_2 + 0x18),L"gVplListHeadBuffer",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x20,*(undefined8 *)(param_2 + 0x18),L"RWVplListHeadBuffer",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x104,*(undefined8 *)(param_2 + 0x18),L"gVplListBuffer",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x21,*(undefined8 *)(param_2 + 0x18),L"RWVplListBuffer",0);
  lVar2 = 2;
  do {
    FShaderResourceParameter::Bind
              (puVar3 + -1,*(undefined8 *)(param_2 + 0x18),
               *(undefined8 *)((longlong)&PTR_u_gGv3DTexture0_1464c1fe8 + lVar4),0);
    FShaderResourceParameter::Bind
              (puVar3,*(undefined8 *)(param_2 + 0x18),
               *(undefined8 *)((longlong)&PTR_u_gGv3DTextureRW0_1464c1ff8 + lVar4));
    puVar3 = (undefined8 *)((longlong)puVar3 + 4);
    lVar4 = lVar4 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FShaderResourceParameter::Bind(param_1 + 0x24,*(undefined8 *)(param_2 + 0x18),L"RWGvListBuffer",0)
  ;
  FShaderResourceParameter::Bind
            (param_1 + 0x25,*(undefined8 *)(param_2 + 0x18),L"RWGvListHeadBuffer",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x11c,*(undefined8 *)(param_2 + 0x18),L"gGvListBuffer",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x124,*(undefined8 *)(param_2 + 0x18),L"gGvListHeadBuffer",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 300,*(undefined8 *)(param_2 + 0x18),L"gAOVolumeTextureRW",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x26,*(undefined8 *)(param_2 + 0x18),L"gAOVolumeTexture",0);
  return param_1;
}



// FUNCTION 141b8b400 FLpvWriteShaderCSBase body=139 status=ok
// SIG undefined FLpvWriteShaderCSBase(void)

undefined8 * FLpvWriteShaderCSBase::FLpvWriteShaderCSBase(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144e09550;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  return param_1;
}



// FUNCTION 141b8b490 FUN_141b8b490 body=557 status=ok
// SIG undefined FUN_141b8b490(void)

int * FUN_141b8b490(int *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  
  pvVar4 = ThreadLocalStoragePointer;
  lVar7 = 0;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3f800000;
  if ((*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146a485a8)
     && (_Init_thread_header(&DAT_146a485a8), DAT_146a485a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    DAT_146a485a0 = lVar7;
    _Init_thread_footer(&DAT_146a485a8);
  }
  iVar2 = *(int *)(DAT_146a485a0 + 4);
  if (param_2 != 0) {
    plVar6 = *(longlong **)(*(longlong *)(param_2 + 0x140) + 200);
    while ((plVar6 != (longlong *)0x0 && (*param_1 < iVar2))) {
      plVar3 = *(longlong **)(*plVar6 + 0x30);
      if (((char)plVar3[0x31] == '\x01') &&
         (((*(uint *)(plVar3 + 0x30) >> 1 & 1) != 0 &&
          ((*(byte *)(param_2 + 0x2c) & *(byte *)((longlong)plVar3 + 0x189)) != 0)))) {
        (**(code **)(*plVar3 + 0x68))(plVar3,0);
        piVar1 = param_1 + ((longlong)*param_1 + 1) * 4;
        piVar1[0] = 0;
        piVar1[1] = 0;
        piVar1[2] = 0;
        piVar1[3] = 0x3f800000;
        piVar1 = param_1 + ((longlong)*param_1 + 5) * 4;
        *piVar1 = 0;
        piVar1[1] = 0;
        piVar1[2] = 0;
        piVar1[3] = 0x3f800000;
        cVar5 = (**(code **)(*plVar3 + 0x30))(plVar3);
        if (cVar5 != '\0') {
          param_1[(longlong)*param_1 * 4 + 0x17] = 0;
        }
        *param_1 = *param_1 + 1;
      }
      plVar6 = (longlong *)plVar6[7];
    }
  }
  return param_1;
}



// FUNCTION 141b8b6c0 FUN_141b8b6c0 body=347 status=ok
// SIG undefined FUN_141b8b6c0(void)

undefined8 * FUN_141b8b6c0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
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
  bVar1 = *(byte *)(param_2 + 0x2740);
  param_1[1] = 0;
  pbVar3 = (byte *)(param_2 + 0x2740);
  if ((bVar1 & 1) == 0) {
    pbVar3 = (byte *)0x0;
  }
  *param_1 = pbVar3;
  if (*(char *)(param_2 + 0x120b) != '\0') {
    param_1[2] = *param_3;
    param_1[3] = *param_3 + 0x30d0;
    param_1[4] = *param_3 + 0x1b40;
    param_1[6] = *param_3 + 0x1c50;
    param_1[5] = *param_3 + 0x4c10;
    param_1[7] = *param_3 + 0x4d20;
    if (pbVar3 != (byte *)0x0) {
      lVar2 = *param_3;
      param_1[1] = lVar2 + 0x5810;
      param_1[8] = *param_3;
      param_1[9] = *param_3 + 0x30d0;
      param_1[10] = pbVar3 + 0x28;
      param_1[0xc] = pbVar3 + 0x48;
      param_1[0xb] = lVar2 + 0x5838;
      param_1[0xd] = lVar2 + 0x5858;
      param_1[0xe] = *param_3;
      param_1[0xf] = *param_3 + 0x30d0;
      param_1[0x10] = pbVar3 + 0x58;
      param_1[0x12] = pbVar3 + 0x78;
      param_1[0x11] = lVar2 + 0x5868;
      param_1[0x13] = lVar2 + 0x5888;
    }
  }
  return param_1;
}



// FUNCTION 141b8b820 FUN_141b8b820 body=227 status=ok
// SIG undefined FUN_141b8b820(void)

longlong *
FUN_141b8b820(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *param_1 = param_2;
  iVar2 = 1;
  if (*(int *)(param_2 + 0x80) != 1) {
    iVar2 = (1 << ((byte)*(int *)(param_2 + 0x80) & 0x1f)) + -1;
  }
  param_1[1] = (longlong)iVar2;
  param_1[2] = (longlong)param_3;
  param_1[3] = param_4;
  lVar4 = FUN_14274dce0();
  iVar2 = (**(code **)(*param_3 + 0x1f8))(param_3);
  if ((param_4 == 0) || (iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_4 + 0x140) + 0xe0);
    iVar2 = *(int *)(lVar4 + 0xc);
    if (iVar1 <= *(int *)(lVar4 + 0xc)) {
      iVar2 = iVar1;
    }
    if ((0 < iVar2) && (*(char *)(lVar4 + 0x10) != '\0')) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 4) = iVar2;
  uVar3 = (**(code **)(*param_3 + 0x1e8))(param_3);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  uVar3 = (**(code **)(*param_3 + 0x1f8))(param_3);
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x2c) = param_5;
  *(undefined4 *)(param_1 + 6) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_7;
  *(undefined1 *)(param_1 + 7) = param_8;
  return param_1;
}



// FUNCTION 141b8b910 FUN_141b8b910 body=42 status=ok
// SIG undefined FUN_141b8b910(void)

undefined8 * FUN_141b8b910(undefined8 *param_1)

{
  FUN_141d59fc0();
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0a990;
  return param_1;
}



// FUNCTION 141b8b940 FUN_141b8b940 body=514 status=ok
// SIG undefined FUN_141b8b940(void)

longlong FUN_141b8b940(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 300) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x18c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x194) = 0;
  *(undefined8 *)(param_1 + 0x19c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x1ac) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1b4) = 0;
  *(undefined8 *)(param_1 + 0x1bc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined8 *)(param_1 + 0x1cc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(param_1 + 0x1dc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1e4) = 0;
  *(undefined8 *)(param_1 + 0x1ec) = 0x3f800000;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x1fc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x204) = 0;
  *(undefined8 *)(param_1 + 0x20c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0x3f800000;
  return param_1;
}



// FUNCTION 141b8bb50 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0ae28;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8bbe0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0aed8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8bc70 FUN_141b8bc70 body=131 status=ok
// SIG undefined FUN_141b8bc70(void)

undefined8 * FUN_141b8bc70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0ace8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,1,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8bd00 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0af18;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8bd90 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,8,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0ad28;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,8,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8be20 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<8,0,8,0,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0abe8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<8,0,8,0,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8beb0 FUN_141b8beb0 body=131 status=ok
// SIG undefined FUN_141b8beb0(void)

undefined8 * FUN_141b8beb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0af98;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<8,0,0,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8bf40 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0ac28;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,1,1,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8bfd0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0ac68;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,1,4,0,0,4,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8c060 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,1,0,0,0,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0ade8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,1,0,0,0,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8c0f0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0af58;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,4,5,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8c180 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,0,6,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0aca8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,0,6,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8c210 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,0,2,0,7,0,0,0,0,128>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0ae98;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010301;
    local_14 = 0x20000;
    local_10 = 7;
    local_c = 0x8000;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8c2d0 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0ad68;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x4010300;
    local_10 = 7;
    local_c = 0x80;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8c380 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144e0ada8;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x4010700;
    local_10 = 7;
    local_c = 0x80;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141b8c430 FUN_141b8c430 body=722 status=ok
// SIG undefined FUN_141b8c430(void)

void FUN_141b8c430(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar5 = param_1 + 0x33;
  *param_1 = &PTR_FUN_144e0aa00;
  (**(code **)(*plVar5 + 0x30))(plVar5);
  plVar1 = param_1 + 0x3c;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  lVar7 = 2;
  plVar3 = param_1 + 2;
  lVar6 = 2;
  do {
    lVar8 = 7;
    do {
      plVar4 = (longlong *)*plVar3;
      *plVar3 = 0;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))();
      }
      plVar3 = plVar3 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  plVar3 = param_1 + 0x10;
  lVar6 = *plVar3;
  *(undefined4 *)(lVar6 + 0x10) = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar6,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar6 + 8,0);
  TRefCountPtr<FRHITexture>::operator=(lVar6 + 0x18,0);
  lVar6 = *plVar3;
  if (lVar6 != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6 + 0x18);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6 + 8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6);
    FMemory::operator_delete(lVar6,0x20);
  }
  FUN_141b38020(param_1[0x11]);
  lVar6 = param_1[0x11];
  if (lVar6 != 0) {
    FUN_141b38020(lVar6);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6 + 0x10);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6 + 8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6);
    FMemory::operator_delete(lVar6,0x28);
  }
  plVar4 = param_1 + 0x28;
  lVar6 = 2;
  do {
    plVar2 = (longlong *)*plVar4;
    *plVar4 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))();
    }
    plVar4 = plVar4 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = param_1[0x25];
  *(undefined4 *)(lVar6 + 0x10) = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar6,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar6 + 8,0);
  TRefCountPtr<FRHITexture>::operator=(lVar6 + 0x18,0);
  lVar6 = param_1[0x25];
  if (lVar6 != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6 + 0x18);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6 + 8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6);
    FMemory::operator_delete(lVar6,0x20);
  }
  FUN_141b38020(param_1[0x26]);
  lVar6 = param_1[0x26];
  if (lVar6 != 0) {
    FUN_141b38020(lVar6);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6 + 0x10);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6 + 8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar6);
    FMemory::operator_delete(lVar6,0x28);
  }
  FMemory::operator_delete(param_1[0x15],0xc0);
  *plVar1 = (longlong)&PTR_FUN_144e0a9c0;
  if (param_1[0x44] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x43);
  FUN_141edd2d0(plVar1);
  *plVar5 = (longlong)&PTR_FUN_144e0a9c0;
  if (param_1[0x3b] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x3a);
  FUN_141edd2d0(plVar5);
  plVar5 = param_1 + 0x2a;
  if ((longlong *)*plVar5 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar5 + 0x30))();
  }
  do {
    plVar1 = plVar5 + -1;
    plVar5 = plVar5 + -1;
    lVar7 = lVar7 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x30))();
    }
  } while (lVar7 != 0);
  lVar6 = 0xe;
  do {
    plVar5 = plVar3 + -1;
    plVar3 = plVar3 + -1;
    lVar6 = lVar6 + -1;
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar5 + 0x30))();
    }
  } while (lVar6 != 0);
  *param_1 = &PTR_FUN_1440104c8;
  return;
}



// FUNCTION 141b8c710 ~FNode body=137 status=ok
// SIG undefined ~FNode(void)

void TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>::FNode::~FNode(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0x328 + (ulonglong)(uVar2 & 7) * 8);
    if (lVar1 != 0) {
      ~FNode(lVar1);
      FMemory::operator_delete(lVar1,0x370);
    }
    if (((byte)uVar2 & 7) < 7) {
      uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
  } while (uVar2 >> 3 == 0);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141b8c7a0 operator= body=53 status=ok
// SIG undefined operator=(void)

longlong * TRefCountPtr<FLightPropagationVolume>::operator=(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return param_1;
}



// FUNCTION 141b8c7e0 operator<< body=179 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  FUN_1419e0a40();
  FUN_1419e0a40(param_1,param_2 + 6);
  FUN_1419e0a40(param_1,param_2 + 0xc);
  FUN_1419e0a40(param_1,param_2 + 0x12);
  FUN_1419e0a40(param_1,param_2 + 0x18);
  FUN_1419e0a40(param_1,param_2 + 0x1e);
  FUN_1419e0a40(param_1,param_2 + 0x24);
  FUN_1419e0a40(param_1,param_2 + 0x2a);
  FUN_1419e0a40(param_1,param_2 + 0x30);
  FUN_1419e0a40(param_1,param_2 + 0x36);
  FUN_1419e0a40(param_1,param_2 + 0x3c);
  FUN_1419e0b60(param_1,param_2 + 0x42);
  FUN_1419e0b60(param_1,param_2 + 0x46);
  return param_1;
}



// FUNCTION 141b8c8a0 FUN_141b8c8a0 body=642 status=ok
// SIG undefined FUN_141b8c8a0(void)

void FUN_141b8c8a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar11 = 0;
  puVar9 = (undefined8 *)
           ((longlong)*(int *)(*(longlong *)(*param_1 + 0x30) + (longlong)param_2 * 4) * 0xe0 +
           *(longlong *)(*param_1 + 0x40));
  puVar8 = (uint *)*puVar9;
  lVar14 = (longlong)*(int *)(puVar9 + 1);
  lVar2 = param_1[4];
  if (0 < lVar14) {
    lVar10 = 0;
    do {
      uVar5 = *puVar8;
      if (lVar2 == 0) {
        lVar13 = *(longlong *)(*(longlong *)param_1[2] + 0x10);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)param_1[2];
        }
        if ((*(uint *)(lVar13 + ((longlong)(int)uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0)
        goto LAB_141b8c9b0;
      }
      else {
        uVar12 = 1 << ((byte)uVar5 & 0x1f);
        lVar13 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x10);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)(lVar2 + 0x10);
        }
        lVar1 = ((longlong)(int)uVar5 >> 5) * 4;
        if ((*(uint *)(lVar13 + lVar1) & uVar12) == 0) {
          lVar13 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10);
          if (lVar13 == 0) {
            lVar13 = *(longlong *)(lVar2 + 0x18);
          }
          if ((*(uint *)(lVar13 + lVar1) & uVar12) == 0) goto LAB_141b8cac4;
        }
LAB_141b8c9b0:
        lVar13 = *(longlong *)(lVar10 + 8 + puVar9[2]);
        if ((*(uint *)(lVar13 + 0x8c) & 0x2000000) == 0) {
          iVar11 = iVar11 + *(int *)(lVar13 + 0x80);
        }
        else {
          lVar13 = (longlong)*(int *)(lVar13 + 0xcc);
          if (lVar2 == 0) {
            uVar7 = *(ulonglong *)(**(longlong **)param_1[3] + lVar13 * 8);
            uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
            uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
            iVar11 = iVar11 + (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) *
                                           0x101010101010101 >> 0x38);
          }
          else {
            uVar7 = *(ulonglong *)(**(longlong **)(lVar2 + 0x20) + lVar13 * 8);
            uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
            uVar4 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
            uVar7 = *(ulonglong *)(**(longlong **)(lVar2 + 0x28) + lVar13 * 8);
            uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
            uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
            uVar5 = (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38);
            bVar3 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
            if (uVar5 < bVar3) {
              uVar5 = (uint)bVar3;
            }
            iVar11 = iVar11 + uVar5;
          }
        }
      }
LAB_141b8cac4:
      lVar10 = lVar10 + 0x38;
      puVar8 = puVar8 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    if (iVar11 != 0) {
      uVar6 = 0xffff;
      if (iVar11 < 0x10000) {
        uVar6 = (short)iVar11;
      }
      *(undefined2 *)(*(longlong *)param_1[1] + (longlong)param_2 * 2) = uVar6;
    }
  }
  *(int *)(puVar9 + 0x1a) = iVar11;
  return;
}



// FUNCTION 141b8cb30 FUN_141b8cb30 body=355 status=ok
// SIG undefined FUN_141b8cb30(void)

float * FUN_141b8cb30(undefined8 *param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [12];
  
  lVar4 = param_1[1];
  local_38[0] = 1.7320514;
  local_38[1] = 1.7320514;
  local_38[2] = 1.7320514;
  local_38[3] = 3.8729792;
  local_68 = *(undefined8 *)(lVar4 + 0x84);
  local_38[4] = 3.8729792;
  local_38[5] = 4.472139;
  local_38[6] = 3.8729792;
  local_38[7] = 3.8729792;
  local_60 = *(undefined4 *)(lVar4 + 0x8c);
  local_58 = *(undefined8 *)*param_1;
  local_50 = *(undefined4 *)((undefined8 *)*param_1 + 1);
  FUN_141b84230(&local_48,&local_58,&local_68,
                *(undefined8 *)(lVar4 + 0x1d8 + (ulonglong)param_3 * 0x28),
                *(undefined4 *)(lVar4 + 0x1e0 + (ulonglong)param_3 * 0x28));
  pfVar6 = local_38;
  if ((param_3 & 1) != 0) {
    pfVar6 = local_38 + 4;
  }
  pfVar5 = (float *)param_1[2];
  if (param_3 >> 1 == 0) {
    fVar7 = *pfVar5;
  }
  else if (param_3 >> 1 == 1) {
    fVar7 = pfVar5[1];
  }
  else {
    fVar7 = pfVar5[2];
  }
  fVar1 = pfVar6[1];
  fVar2 = pfVar6[2];
  fVar3 = pfVar6[3];
  *param_2 = (local_48 * 2.0 - 1.0) * fVar7 * *pfVar6;
  param_2[1] = (local_44 * 2.0 - 1.0) * fVar7 * fVar1;
  param_2[2] = (local_40 * 2.0 - 1.0) * fVar7 * fVar2;
  param_2[3] = (local_3c * 2.0 - 1.0) * fVar7 * fVar3;
  return param_2;
}



// FUNCTION 141b8cca0 FUN_141b8cca0 body=355 status=ok
// SIG undefined FUN_141b8cca0(void)

float * FUN_141b8cca0(undefined8 *param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [12];
  
  lVar4 = param_1[1];
  local_38[0] = 1.7320514;
  local_38[1] = 1.7320514;
  local_38[2] = 1.7320514;
  local_38[3] = 3.8729792;
  local_68 = *(undefined8 *)(lVar4 + 0x84);
  local_38[4] = 3.8729792;
  local_38[5] = 4.472139;
  local_38[6] = 3.8729792;
  local_38[7] = 3.8729792;
  local_60 = *(undefined4 *)(lVar4 + 0x8c);
  local_58 = *(undefined8 *)*param_1;
  local_50 = *(undefined4 *)((undefined8 *)*param_1 + 1);
  FUN_141b84230(&local_48,&local_58,&local_68,
                *(undefined8 *)(lVar4 + 0xc0 + (ulonglong)param_3 * 0x28),
                *(undefined4 *)(lVar4 + 200 + (ulonglong)param_3 * 0x28));
  pfVar6 = local_38;
  if ((param_3 & 1) != 0) {
    pfVar6 = local_38 + 4;
  }
  pfVar5 = (float *)param_1[2];
  if (param_3 >> 1 == 0) {
    fVar7 = *pfVar5;
  }
  else if (param_3 >> 1 == 1) {
    fVar7 = pfVar5[1];
  }
  else {
    fVar7 = pfVar5[2];
  }
  fVar1 = pfVar6[1];
  fVar2 = pfVar6[2];
  fVar3 = pfVar6[3];
  *param_2 = (local_48 * 2.0 - 1.0) * fVar7 * *pfVar6;
  param_2[1] = (local_44 * 2.0 - 1.0) * fVar7 * fVar1;
  param_2[2] = (local_40 * 2.0 - 1.0) * fVar7 * fVar2;
  param_2[3] = (local_3c * 2.0 - 1.0) * fVar7 * fVar3;
  return param_2;
}



// FUNCTION 141b8ce10 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<`FScene::AddExponentialHeightFog'::`2'::EURCMacro_FAddFogCommand>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141b8ce80 FUN_141b8ce80 body=97 status=ok
// SIG undefined FUN_141b8ce80(void)

undefined8 * FUN_141b8ce80(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144e0aa08;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141b8cef0 FUN_141b8cef0 body=97 status=ok
// SIG undefined FUN_141b8cef0(void)

undefined8 * FUN_141b8cef0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141b8cf60 FUN_141b8cf60 body=89 status=ok
// SIG undefined FUN_141b8cf60(void)

undefined8 * FUN_141b8cf60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e0a9c0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141b8cfc0 FUN_141b8cfc0 body=52 status=ok
// SIG undefined FUN_141b8cfc0(void)

undefined8 FUN_141b8cfc0(undefined8 param_1,ulonglong param_2)

{
  FUN_141b8c430();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 141b8d000 FUN_141b8d000 body=104 status=ok
// SIG undefined FUN_141b8d000(void)

undefined8 * FUN_141b8d000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144e0a950;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xf);
  FUN_141b29040(param_1 + 0xe,param_1[0xe]);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 141b8d070 FUN_141b8d070 body=72 status=ok
// SIG undefined FUN_141b8d070(void)

undefined8 * FUN_141b8d070(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144e0aa78;
  FUN_141d662d0(param_1,0);
  FParallelCommandListSet::~FParallelCommandListSet(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 141b8d0c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FSpinBoxStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141d5b7a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e8);
  }
  return param_1;
}



// FUNCTION 141b8d100 `scalar_deleting_destructor' body=148 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong TOctree<FLightSceneInfoCompact,FLightOctreeSemantics>::FNode::_scalar_deleting_destructor_
                   (longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0x328 + (ulonglong)(uVar2 & 7) * 8);
    if (lVar1 != 0) {
      _scalar_deleting_destructor_(lVar1,1);
    }
    if (((byte)uVar2 & 7) < 7) {
      uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
  } while (uVar2 >> 3 == 0);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x370);
  }
  return param_1;
}



// FUNCTION 141b8d1a0 `scalar_deleting_destructor' body=117 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassPostProcessSunMaskES2::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dca250;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 141b8d220 FUN_141b8d220 body=66 status=ok
// SIG undefined FUN_141b8d220(void)

undefined8 * FUN_141b8d220(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dd5318;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141b8d270 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0ae28;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d2c0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0aed8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d310 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0ace8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d360 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0af18;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d3b0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0ad28;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d400 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0abe8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d450 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0af98;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d4a0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0ac28;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d4f0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0ac68;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d540 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0ade8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d590 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0af58;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d5e0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0aca8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d630 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0ae98;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d680 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0ad68;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d6d0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144e0ada8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141b8d720 FUN_141b8d720 body=1780 status=ok
// SIG undefined FUN_141b8d720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141b8d720(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined1 auStack_538 [32];
  double local_518;
  double local_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  double local_4f0;
  undefined8 *local_4e8;
  undefined8 local_4e0;
  float fStack_4d8;
  float fStack_4d4;
  longlong local_4c8;
  float fStack_4c0;
  undefined4 uStack_4bc;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  undefined4 uStack_4ac;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  longlong local_488;
  longlong lStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined1 local_448 [64];
  undefined1 *local_408;
  undefined8 local_3f8;
  undefined1 local_3e8 [768];
  undefined1 *local_e8;
  undefined8 local_d8;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_538;
  local_4e8 = param_2;
  (**(code **)(**(longlong **)(param_2[4] + 0x30) + 0x10))
            (*(longlong **)(param_2[4] + 0x30),&local_4e0);
  fVar12 = fStack_4d4;
  fVar11 = fStack_4d8;
  puVar19 = (undefined8 *)0x0;
  local_478 = *param_4;
  uStack_470 = param_4[1];
  fVar9 = (float)local_4e0;
  fVar10 = local_4e0._4_4_;
  local_468 = param_4[2];
  uStack_460 = param_4[3];
  local_458 = param_4[4];
  uStack_450 = param_4[5];
  local_4c8 = local_4e0;
  fStack_4c0 = fStack_4d8;
  local_4b8 = fStack_4d4;
  fStack_4b4 = fStack_4d4;
  fStack_4b0 = fStack_4d4;
  uStack_4bc = 0;
  uStack_4ac = 0;
  local_408 = (undefined1 *)0x0;
  local_3f8 = 0;
  local_488 = param_3;
  if (param_3 != 0) {
    do {
      lVar24 = local_488;
      uVar23 = *(uint *)(local_488 + 0x368);
      uVar14 = (uVar23 + 1 ^ uVar23) & 0x7fffffff ^ uVar23;
      *(uint *)(local_488 + 0x368) = uVar14;
      if ((int)uVar23 < 0) {
        iVar15 = *(int *)(local_488 + 0x310);
        if ((iVar15 + 1 < 0x11) ||
           ((float)local_468 < *(float *)(param_1 + 0x3a0) ||
            (float)local_468 == *(float *)(param_1 + 0x3a0))) {
LAB_141b8dc96:
          *(int *)(local_488 + 0x310) = iVar15 + 1;
          if (*(int *)(local_488 + 0x314) < iVar15 + 1) {
            TArray<FLightSceneInfoCompact,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                      (local_488,iVar15);
          }
          lVar22 = *(longlong *)(lVar24 + 0x300);
          if (*(longlong *)(lVar24 + 0x300) == 0) {
            lVar22 = lVar24;
          }
          puVar19 = (undefined8 *)((longlong)iVar15 * 0x30 + lVar22);
          if (puVar19 != (undefined8 *)0x0) {
            uVar8 = local_4e8[1];
            *puVar19 = *local_4e8;
            puVar19[1] = uVar8;
            uVar8 = local_4e8[3];
            puVar19[2] = local_4e8[2];
            puVar19[3] = uVar8;
            uVar8 = local_4e8[5];
            puVar19[4] = local_4e8[4];
            puVar19[5] = uVar8;
          }
          *(longlong *)(param_1 + 0x3a8) = (longlong)(*(int *)(param_1 + 0x3a8) + 0x30);
          fStack_4d8 = (float)(*(int *)(lVar24 + 0x310) + -1);
          lVar22 = local_4e8[4];
          local_4e0._0_4_ = (float)lVar24;
          local_4e0._4_4_ = (float)((ulonglong)lVar24 >> 0x20);
          *(float *)(lVar22 + 0x60) = (float)local_4e0;
          *(float *)(lVar22 + 100) = local_4e0._4_4_;
          *(float *)(lVar22 + 0x68) = fStack_4d8;
          *(float *)(lVar22 + 0x6c) = fStack_4d4;
          local_4e0 = lVar24;
        }
        else {
          local_e8 = (undefined1 *)0x0;
          local_d8 = 0;
          FUN_141b83e40(local_3e8,local_488);
          *(longlong *)(param_1 + 0x3a8) =
               (longlong)(*(int *)(param_1 + 0x3a8) + (int)local_d8 * -0x30);
          *(undefined4 *)(lVar24 + 0x368) = 0;
          while ((iVar15 = (int)puVar19, -1 < iVar15 && (iVar15 < (int)local_d8))) {
            puVar21 = local_3e8;
            if (local_e8 != (undefined1 *)0x0) {
              puVar21 = local_e8;
            }
            FUN_141b8d720(param_1,puVar21 + (longlong)iVar15 * 0x30,lVar24,&local_478);
            puVar19 = (undefined8 *)(ulonglong)(iVar15 + 1);
          }
          FUN_141b8d720(param_1,local_4e8,lVar24,&local_478);
          if (local_e8 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
        if (local_408 == (undefined1 *)0x0) {
          return;
        }
        FMemory::Free();
        return;
      }
      auVar27._0_4_ = (local_458._4_4_ + (float)local_478) - fVar9;
      auVar27._4_4_ = (local_458._4_4_ + local_478._4_4_) - fVar10;
      auVar27._8_4_ = (local_458._4_4_ + (float)uStack_470) - fVar11;
      auVar27._12_4_ = (local_458._4_4_ + uStack_470._4_4_) - 0.0;
      auVar28._4_4_ = fVar10 - (local_478._4_4_ - local_458._4_4_);
      auVar28._0_4_ = fVar9 - ((float)local_478 - local_458._4_4_);
      auVar28._8_4_ = fVar11 - ((float)uStack_470 - local_458._4_4_);
      auVar28._12_4_ = 0.0 - (uStack_470._4_4_ - local_458._4_4_);
      auVar28 = minps(auVar27,auVar28);
      auVar1._4_4_ = -(uint)((float)local_458 < auVar28._4_4_ + fVar12);
      auVar1._0_4_ = -(uint)((float)local_458 < auVar28._0_4_ + fVar12);
      auVar1._8_4_ = -(uint)((float)local_458 < auVar28._8_4_ + fVar12);
      auVar1._12_4_ = -(uint)((float)local_458 < auVar28._12_4_ + 0.0);
      iVar15 = movmskps(uVar14,auVar1);
      if (iVar15 == 0) {
        auVar2._4_4_ = -(uint)((float)uStack_470 < fVar11);
        auVar2._0_4_ = -(uint)((float)uStack_470 < fVar11);
        auVar2._8_4_ = -(uint)((float)uStack_470 < fVar11);
        auVar2._12_4_ = -(uint)((float)uStack_470 < fVar11);
        iVar15 = movmskps(0,auVar2);
        auVar3._4_4_ = -(uint)(local_478._4_4_ < fVar10);
        auVar3._0_4_ = -(uint)(local_478._4_4_ < fVar10);
        auVar3._8_4_ = -(uint)(local_478._4_4_ < fVar10);
        auVar3._12_4_ = -(uint)(local_478._4_4_ < fVar10);
        iVar17 = movmskps(iVar15,auVar3);
        auVar4._4_4_ = -(uint)((float)local_478 < fVar9);
        auVar4._0_4_ = -(uint)((float)local_478 < fVar9);
        auVar4._8_4_ = -(uint)((float)local_478 < fVar9);
        auVar4._12_4_ = -(uint)((float)local_478 < fVar9);
        iVar16 = movmskps(iVar17,auVar4);
        uVar23 = ((uint)(iVar15 != 0) * 2 | (uint)(iVar17 != 0)) * 2 | (uint)(iVar16 != 0);
      }
      else {
        uVar23 = 8;
      }
      if ((uVar23 & 8) != 0) {
        iVar15 = *(int *)(local_488 + 0x310);
        goto LAB_141b8dc96;
      }
      uVar25 = (ulonglong)(uVar23 & 7);
      if (*(longlong *)(local_488 + 0x328 + uVar25 * 8) == 0) {
        puVar18 = (undefined8 *)operator_new(0x370);
        puVar20 = puVar19;
        if (puVar18 != (undefined8 *)0x0) {
          puVar18[0x60] = 0;
          uVar14 = 0;
          puVar18[0x62] = 0;
          puVar18[100] = lVar24;
          *(undefined4 *)(puVar18 + 0x6d) = 0x80000000;
          do {
            puVar18[(ulonglong)(uVar14 & 7) + 0x65] = 0;
            if (((byte)uVar14 & 7) < 7) {
              uVar14 = uVar14 ^ (uVar14 + 1 ^ uVar14) & 7;
            }
            else {
              uVar14 = uVar14 | 8;
            }
            puVar20 = puVar18;
          } while (uVar14 >> 3 == 0);
        }
        *(undefined8 **)(lVar24 + 0x328 + uVar25 * 8) = puVar20;
        *(longlong *)(param_1 + 0x3a8) = (longlong)(*(int *)(param_1 + 0x3a8) + 0x370);
      }
      uVar13 = local_3f8;
      lVar24 = (longlong)(int)local_3f8;
      iVar15 = (int)local_3f8 + 1;
      local_3f8 = CONCAT44(local_3f8._4_4_,iVar15);
      if (local_3f8._4_4_ < iVar15) {
        FUN_1405a82e0(local_448,uVar13 & 0xffffffff);
      }
      puVar21 = local_448;
      if (local_408 != (undefined1 *)0x0) {
        puVar21 = local_408;
      }
      puVar18 = (undefined8 *)(puVar21 + lVar24 * 0x40);
      puVar20 = puVar19;
      if (puVar18 != (undefined8 *)0x0) {
        puVar18[2] = 0;
        *(undefined4 *)(puVar18 + 3) = 0;
        *(undefined8 *)((longlong)puVar18 + 0x1c) = 0x3f800000;
        *(undefined8 *)((longlong)puVar18 + 0x24) = 0;
        *(undefined4 *)((longlong)puVar18 + 0x2c) = 0x3f800000;
        *puVar18 = 0;
        puVar20 = puVar18;
      }
      *puVar20 = *(undefined8 *)(local_488 + 0x328 + uVar25 * 8);
      *(float *)(puVar20 + 2) =
           local_458._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar23 & 1) * 4) +
           (float)local_478;
      *(float *)((longlong)puVar20 + 0x14) =
           local_458._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)((uVar23 & 2) >> 1) * 4) +
           local_478._4_4_;
      fVar26 = *(float *)(&DAT_146534f00 + (ulonglong)((uVar23 & 4) >> 2) * 4);
      *(undefined4 *)((longlong)puVar20 + 0x1c) = 0;
      *(float *)(puVar20 + 3) = local_458._4_4_ * fVar26 + (float)uStack_470;
      *(float *)(puVar20 + 4) = (float)local_458;
      *(float *)((longlong)puVar20 + 0x24) = (float)local_458;
      *(float *)(puVar20 + 5) = (float)local_458;
      *(undefined4 *)((longlong)puVar20 + 0x2c) = 0;
      fVar26 = (float)local_458 * 0.5 * 1.0625;
      *(float *)(puVar20 + 6) = fVar26;
      *(float *)((longlong)puVar20 + 0x34) = (float)local_458 - fVar26;
      if ((int)local_3f8 == 0) {
        local_4c8 = 0;
        lStack_480 = CONCAT44(uStack_4bc,fStack_4c0);
        local_488 = 0;
        local_458 = CONCAT44(uStack_494,local_498);
        uStack_450 = CONCAT44(uStack_48c,uStack_490);
        local_478 = 0;
        uStack_470 = 0x3f80000000000000;
        local_468 = 0;
        uStack_460 = 0x3f80000000000000;
      }
      else {
        iVar15 = (int)local_3f8 + -1;
        puVar21 = local_448;
        if (local_408 != (undefined1 *)0x0) {
          puVar21 = local_408;
        }
        lVar24 = (longlong)iVar15 * 0x40;
        local_488 = *(longlong *)(puVar21 + lVar24);
        lStack_480 = *(longlong *)((longlong)(puVar21 + lVar24) + 8);
        local_478 = *(undefined8 *)(puVar21 + lVar24 + 0x10);
        uStack_470 = *(undefined8 *)((longlong)(puVar21 + lVar24 + 0x10) + 8);
        local_468 = *(undefined8 *)(puVar21 + lVar24 + 0x20);
        uStack_460 = *(undefined8 *)((longlong)(puVar21 + lVar24 + 0x20) + 8);
        local_458 = *(undefined8 *)(puVar21 + lVar24 + 0x30);
        uStack_450 = *(undefined8 *)((longlong)(puVar21 + lVar24 + 0x30) + 8);
        iVar17 = ((int)local_3f8 - iVar15) + -1;
        if (iVar17 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (puVar21 + (longlong)iVar15 * 0x40,puVar21 + (longlong)(int)local_3f8 * 0x40,
                     (longlong)iVar17 << 6);
        }
        local_3f8 = CONCAT44(local_3f8._4_4_,(int)local_3f8 + -1);
        TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<1,FDefaultAllocator>_>
        ::ResizeShrink(local_448);
      }
    } while (local_488 != 0);
    if (local_408 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  dVar7 = (double)fVar12;
  uVar29 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = dVar7;
  auVar5._12_4_ = uVar29;
  dStack_500 = auVar5._8_8_;
  local_518 = (double)fVar10;
  local_510 = (double)fVar11;
  local_508 = dVar7;
  local_4f8 = (double)fVar12;
  LowLevelFatalErrorHandler
            ("Unknown",0xc1,
             L"Failed to find an octree node for an element with bounds (%f,%f,%f) +/- (%f,%f,%f)!",
             (double)fVar9);
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = uVar29;
  local_4f8 = auVar6._8_8_;
  local_518 = (double)fVar9;
  local_510 = (double)fVar10;
  local_508 = (double)fVar11;
  dStack_500 = dVar7;
  local_4f0 = (double)fVar12;
  FDebug::AssertFailed
            (&DAT_144deba22,"Unknown",0xc1,
             L"Failed to find an octree node for an element with bounds (%f,%f,%f) +/- (%f,%f,%f)!")
  ;
  return;
}



// FUNCTION 141b8de20 AddIncomingRadiance body=741 status=ok
// SIG undefined AddIncomingRadiance(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TSHVectorRGB<3>::AddIncomingRadiance
               (float *param_1,float *param_2,float param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  float local_118;
  float local_114;
  float local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8 [7];
  float local_bc;
  float local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_bc = param_4[2];
  local_118 = param_3 * *param_2;
  local_114 = param_3 * param_2[1];
  local_b4 = 0;
  fVar2 = *param_4;
  fVar3 = param_4[1];
  local_110 = param_3 * param_2[2];
  local_ac = 0;
  local_d8[1] = fVar3 * -0.488603;
  local_d8[0] = 0.282095;
  local_d8[2] = local_bc * 0.488603;
  local_d8[3] = fVar2 * -0.488603;
  local_d8[4] = fVar2 * 1.092548 * fVar3;
  local_d8[5] = fVar3 * -1.092548 * local_bc;
  local_d8[6] = local_bc * local_bc * 0.94617593 - 0.315392;
  local_bc = fVar2 * -1.092548 * local_bc;
  local_b8 = (fVar2 * fVar2 - fVar3 * fVar3) * 0.546274;
  ::_guard_xfg_dispatch_icall_nop(&local_a8,0,0x90);
  lVar6 = 3;
  local_108 = 0;
  lVar7 = 3;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar8 = 0;
  do {
    fVar2 = *(float *)((longlong)local_d8 + lVar8 + 4);
    fVar3 = *(float *)((longlong)local_d8 + lVar8 + 8);
    fVar4 = *(float *)((longlong)local_d8 + lVar8 + 0xc);
    *(float *)((longlong)&local_108 + lVar8) = *(float *)((longlong)local_d8 + lVar8) * local_118;
    *(float *)((longlong)&local_108 + lVar8 + 4) = fVar2 * local_118;
    *(float *)((longlong)&uStack_100 + lVar8) = fVar3 * local_118;
    *(float *)((longlong)&uStack_100 + lVar8 + 4) = fVar4 * local_118;
    lVar7 = lVar7 + -1;
    lVar8 = lVar8 + 0x10;
  } while (lVar7 != 0);
  lVar7 = 3;
  local_98 = local_f8;
  uStack_90 = uStack_f0;
  local_a8 = local_108;
  uStack_a0 = uStack_100;
  local_88 = local_e8;
  uStack_80 = uStack_e0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar8 = 0;
  do {
    fVar2 = *(float *)((longlong)local_d8 + lVar8 + 4);
    fVar3 = *(float *)((longlong)local_d8 + lVar8 + 8);
    fVar4 = *(float *)((longlong)local_d8 + lVar8 + 0xc);
    *(float *)((longlong)&local_108 + lVar8) = *(float *)((longlong)local_d8 + lVar8) * local_114;
    *(float *)((longlong)&local_108 + lVar8 + 4) = fVar2 * local_114;
    *(float *)((longlong)&uStack_100 + lVar8) = fVar3 * local_114;
    *(float *)((longlong)&uStack_100 + lVar8 + 4) = fVar4 * local_114;
    uStack_50 = uStack_e0;
    local_58 = local_e8;
    lVar7 = lVar7 + -1;
    lVar8 = lVar8 + 0x10;
  } while (lVar7 != 0);
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_78 = local_108;
  uStack_70 = uStack_100;
  local_e8 = 0;
  uStack_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  lVar7 = 3;
  lVar8 = 0;
  do {
    fVar2 = *(float *)((longlong)local_d8 + lVar8 + 4);
    fVar3 = *(float *)((longlong)local_d8 + lVar8 + 8);
    fVar4 = *(float *)((longlong)local_d8 + lVar8 + 0xc);
    *(float *)((longlong)&local_108 + lVar8) = *(float *)((longlong)local_d8 + lVar8) * local_110;
    *(float *)((longlong)&local_108 + lVar8 + 4) = fVar2 * local_110;
    *(float *)((longlong)&uStack_100 + lVar8) = fVar3 * local_110;
    *(float *)((longlong)&uStack_100 + lVar8 + 4) = fVar4 * local_110;
    lVar7 = lVar7 + -1;
    lVar8 = lVar8 + 0x10;
  } while (lVar7 != 0);
  local_48 = local_108;
  uStack_40 = uStack_100;
  lVar8 = 3;
  local_28 = local_e8;
  uStack_20 = uStack_e0;
  local_38 = local_f8;
  uStack_30 = uStack_f0;
  pfVar5 = param_1;
  do {
    pfVar1 = (float *)(((longlong)&local_a8 - (longlong)param_1) + (longlong)pfVar5);
    fVar2 = pfVar1[1];
    fVar3 = pfVar1[2];
    fVar4 = pfVar1[3];
    *pfVar5 = *pfVar1 + *pfVar5;
    pfVar5[1] = fVar2 + pfVar5[1];
    pfVar5[2] = fVar3 + pfVar5[2];
    pfVar5[3] = fVar4 + pfVar5[3];
    pfVar5 = pfVar5 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  pfVar5 = param_1 + 0xc;
  lVar8 = 3;
  lVar7 = (longlong)&local_78 - (longlong)pfVar5;
  do {
    pfVar1 = (float *)(lVar7 + (longlong)pfVar5);
    fVar2 = pfVar1[1];
    fVar3 = pfVar1[2];
    fVar4 = pfVar1[3];
    *pfVar5 = *pfVar1 + *pfVar5;
    pfVar5[1] = fVar2 + pfVar5[1];
    pfVar5[2] = fVar3 + pfVar5[2];
    pfVar5[3] = fVar4 + pfVar5[3];
    pfVar5 = pfVar5 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  param_1 = param_1 + 0x18;
  lVar8 = (longlong)&local_48 - (longlong)param_1;
  do {
    pfVar5 = (float *)(lVar8 + (longlong)param_1);
    fVar2 = pfVar5[1];
    fVar3 = pfVar5[2];
    fVar4 = pfVar5[3];
    *param_1 = *pfVar5 + *param_1;
    param_1[1] = fVar2 + param_1[1];
    param_1[2] = fVar3 + param_1[2];
    param_1[3] = fVar4 + param_1[3];
    param_1 = param_1 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}



// FUNCTION 141b8e110 FUN_141b8e110 body=1037 status=ok
// SIG undefined FUN_141b8e110(void)

void FUN_141b8e110(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  void *_Src;
  longlong *plVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int local_178;
  int local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158 [5];
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  uint local_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_94;
  longlong local_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined8 uStack_58;
  
  TSet<TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink,TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
  ::FindId(param_1 + 0x40,&local_178,param_4);
  if ((local_178 == -1) ||
     (plVar14 = (longlong *)((longlong)local_178 * 0xe0 + *(longlong *)(param_1 + 0x40)),
     plVar14 == (longlong *)0x0)) {
    local_158[4] = *param_4;
    uStack_130 = param_4[1];
    lVar5 = param_4[9];
    lVar17 = param_4[7];
    local_f8 = param_4[8];
    local_158[0] = 0;
    local_158[1] = 0;
    local_158[2] = 0;
    local_158[3] = 0;
    local_128 = param_4[2];
    uStack_120 = param_4[3];
    local_118 = *(undefined4 *)(param_4 + 4);
    uStack_114 = *(undefined4 *)((longlong)param_4 + 0x24);
    uStack_110 = *(undefined4 *)(param_4 + 5);
    uStack_10c = *(undefined4 *)((longlong)param_4 + 0x2c);
    local_108 = param_4[6];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    local_e8 = *(undefined4 *)(param_4 + 10);
    local_e4 = *(undefined4 *)((longlong)param_4 + 0x54);
    local_e0 = *(undefined4 *)(param_4 + 0xb);
    lVar6 = *(longlong *)(local_f8 + 0x48);
    local_94 = 0xffffffff;
    local_dc = local_dc ^ (*(uint *)((longlong)param_4 + 0x5c) ^ local_dc) & 1;
    local_a8 = param_5;
    iVar12 = 0;
    local_88 = 0;
    local_100 = lVar17;
    local_f0 = lVar5;
    local_90 = param_1;
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    uVar7 = *(undefined8 *)(lVar6 + 0x40);
    lVar17 = *(longlong *)(lVar17 + 0x48);
    local_160 = 0;
    local_168 = 0;
    local_170 = 0;
    if (*(char *)(lVar17 + 0x28) == '\0') {
      FUN_1419f3850(lVar17);
    }
    uStack_78 = *(undefined8 *)(lVar17 + 0x38);
    uStack_58 = 0;
    local_80 = lVar5;
    local_60 = uVar7;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_170);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_168);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_160);
    local_d8 = local_80;
    uStack_d0 = uStack_78;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = (undefined4)local_60;
    uStack_b4 = local_60._4_4_;
    uStack_b0 = (undefined4)uStack_58;
    uStack_ac = uStack_58._4_4_;
    FUN_141b835a0(param_1 + 0x40,&local_174,local_158,0);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_f0);
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (local_158 + 2);
    if (local_158[0] != 0) {
      FMemory::Free();
    }
    plVar14 = (longlong *)((longlong)local_174 * 0xe0 + *(longlong *)(param_1 + 0x40));
    *(int *)((longlong)plVar14 + 0xc4) = local_174;
    DAT_146a81050 =
         (ulonglong)(uint)(*(int *)((longlong)plVar14 + 0x1c) * 0x38) + 0xd8 +
         (ulonglong)(uint)(*(int *)((longlong)plVar14 + 0xc) << 2) + DAT_146a81050;
    iVar16 = *(int *)(param_1 + 0x38) + -1;
    if (0 < iVar16) {
      lVar5 = *(longlong *)(param_1 + 0x40);
      iVar18 = 0;
      do {
        iVar12 = (iVar16 + iVar18) / 2;
        lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar12 * 4) * 0xe0;
        uVar8 = *(ulonglong *)(lVar17 + 0x38 + lVar5);
        if (uVar8 < (ulonglong)plVar14[7]) {
LAB_141b8e360:
          iVar11 = iVar16;
          iVar18 = iVar12 + 1;
        }
        else {
          iVar11 = iVar12;
          if (uVar8 == plVar14[7]) {
            iVar3 = *(int *)(lVar17 + 0x74 + lVar5);
            if (iVar3 < *(int *)((longlong)plVar14 + 0x74)) goto LAB_141b8e360;
            if (iVar3 <= *(int *)((longlong)plVar14 + 0x74)) {
              iVar3 = *(int *)(lVar17 + 0x70 + lVar5);
              if (iVar3 < (int)plVar14[0xe]) goto LAB_141b8e360;
              if (iVar3 <= (int)plVar14[0xe]) break;
            }
          }
        }
        iVar12 = iVar18;
        iVar16 = iVar11;
        iVar18 = iVar12;
      } while (iVar12 < iVar16);
    }
    plVar1 = (longlong *)(param_1 + 0x30);
    iVar16 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar16 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar16 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar16);
    }
    _Src = (void *)(*plVar1 + (longlong)iVar12 * 4);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)_Src + 4),_Src,(longlong)(iVar16 - iVar12) << 2);
    *(int *)((longlong)iVar12 * 4 + *plVar1) = local_174;
  }
  iVar12 = (int)plVar14[3];
  iVar16 = *(int *)((longlong)plVar14 + 0xc);
  iVar18 = *(int *)((longlong)plVar14 + 0x1c);
  *(int *)(plVar14 + 3) = iVar12 + 1;
  if (*(int *)((longlong)plVar14 + 0x1c) < iVar12 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar14 + 2,iVar12);
  }
  puVar15 = (undefined8 *)((longlong)iVar12 * 0x38 + plVar14[2]);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined4 *)((longlong)plVar14 + 0xc4);
    *puVar15 = *param_3;
    puVar15[1] = param_2;
    puVar13 = (undefined8 *)operator_new(0x20);
    if (puVar13 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar13 + 1) = 0;
      *puVar13 = &PTR_FUN_144e0b028;
      puVar13[2] = param_1;
      *(undefined4 *)(puVar13 + 3) = uVar4;
      *(int *)((longlong)puVar13 + 0x1c) = iVar12;
    }
    puVar15[6] = puVar13;
    if (puVar13 != (undefined8 *)0x0) {
      *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    }
    lVar5 = *(longlong *)(*(longlong *)(puVar15[1] + 0xc0) + 8);
    uVar4 = *(undefined4 *)(lVar5 + 0xc4);
    uVar9 = *(undefined4 *)(lVar5 + 200);
    uVar10 = *(undefined4 *)(lVar5 + 0xcc);
    *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(lVar5 + 0xc0);
    *(undefined4 *)((longlong)puVar15 + 0x14) = uVar4;
    *(undefined4 *)(puVar15 + 3) = uVar9;
    *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar10;
    puVar15[4] = *(undefined8 *)(lVar5 + 0xd0);
    *(undefined4 *)(puVar15 + 5) = *(undefined4 *)(lVar5 + 0xd8);
    *(byte *)((longlong)puVar15 + 0x2c) =
         (byte)((uint)*(undefined4 *)(*(longlong *)(*(longlong *)(puVar15[1] + 0xc0) + 8) + 0x18) >>
               0x1b) & 1;
  }
  iVar12 = (int)plVar14[1];
  *(int *)(plVar14 + 1) = iVar12 + 1;
  if (*(int *)((longlong)plVar14 + 0xc) < iVar12 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14,iVar12);
  }
  puVar2 = (undefined4 *)(*plVar14 + (longlong)iVar12 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *(undefined4 *)(param_2 + 200);
  }
  DAT_146a81050 =
       DAT_146a81050 +
       ((((ulonglong)(uint)(*(int *)((longlong)plVar14 + 0xc) << 2) +
         (ulonglong)(uint)(*(int *)((longlong)plVar14 + 0x1c) * 0x38)) -
        (ulonglong)(uint)(iVar16 << 2)) - (ulonglong)(uint)(iVar18 * 0x38));
  FUN_141d6b230(param_2,puVar15[6]);
  return;
}



// FUNCTION 141b8e520 FUN_141b8e520 body=201 status=ok
// SIG undefined FUN_141b8e520(void)

void FUN_141b8e520(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *local_res10;
  undefined1 local_res18 [8];
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [64];
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  local_res10 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_3 + 0xa8) + 0x40))
            (*(longlong **)(param_3 + 0xa8),uVar1,local_res18,&local_res10);
  plVar2 = local_res10;
  uVar3 = (**(code **)(*local_res10 + 0x1e8))(local_res10);
  if (uVar3 < 2) {
    (**(code **)(*plVar2 + 0x1f8))(plVar2);
    local_68 = param_2;
    local_60 = param_3;
    uVar4 = FUN_141b8b820(local_58,param_3,plVar2,*(undefined8 *)(*(longlong *)(param_3 + 0xc0) + 8)
                          ,1,uVar1,0,0);
    FUN_141b859d0(param_1,uVar4,&local_68);
  }
  return;
}



// FUNCTION 141b8e5f0 FUN_141b8e5f0 body=853 status=ok
// SIG undefined FUN_141b8e5f0(void)

void FUN_141b8e5f0(longlong param_1)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  float fVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_res8 [8];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  char local_e0;
  undefined8 local_d8;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  
  lVar9 = *(longlong *)(param_1 + 0xa8);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x180);
  pfVar10 = (float *)((longlong)*(int *)(param_1 + 0x58) * 0x30 + *(longlong *)(lVar9 + 0x1070));
  if (((uVar2 & 0x34) != 0) ||
     (((*(int *)(lVar9 + 8) < 2 && (*(char *)(*(longlong *)(param_1 + 0x30) + 0x188) == '\x01')) &&
      ((uVar2 >> 1 & 1) != 0)))) {
    FUN_141b8d720(lVar9 + 0x1a70,pfVar10,lVar9 + 0x1a70,lVar9 + 0x1de0);
    local_res8[0] = 0;
    uStack_fc = (undefined4)((ulonglong)local_res8 >> 0x20);
    local_108 = 0x4060d670;
    uStack_104 = 1;
    uStack_100 = SUB84(local_res8,0);
    lVar9 = FUN_1415d8310(&local_108,&DAT_146216a38);
    local_f8 = (undefined8 *)(lVar9 + 0x18);
    local_f0 = *local_f8;
    local_e8 = *(longlong *)(lVar9 + 0x28);
    local_e0 = '\0';
    local_d8 = *(undefined8 *)(lVar9 + 0x30);
    *(undefined8 ***)(lVar9 + 0x30) = &local_f8;
    *(int *)(lVar9 + 0x38) = *(int *)(lVar9 + 0x38) + 1;
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),&local_108)
    ;
    lVar9 = *(longlong *)(param_1 + 0xa8);
    local_88 = lVar9 + 0x1e20;
    uStack_bc = 0;
    uStack_ac = 0;
    local_68 = *(undefined4 *)(lVar9 + 0x5e90);
    uStack_64 = *(undefined4 *)(lVar9 + 0x5e94);
    uStack_60 = *(undefined4 *)(lVar9 + 0x5e98);
    uStack_5c = *(undefined4 *)(lVar9 + 0x5e9c);
    local_98 = uStack_fc;
    uStack_94 = uStack_fc;
    uStack_90 = uStack_fc;
    uStack_8c = 0;
    local_78 = *(undefined8 *)(lVar9 + 0x5e80);
    uStack_70 = *(undefined8 *)(lVar9 + 0x5e88);
    local_58 = *(undefined4 *)(lVar9 + 0x5ea0);
    uStack_54 = *(undefined4 *)(lVar9 + 0x5ea4);
    uStack_50 = *(undefined4 *)(lVar9 + 0x5ea8);
    uStack_4c = *(undefined4 *)(lVar9 + 0x5eac);
    local_a8 = local_108;
    uStack_a4 = uStack_104;
    uStack_a0 = uStack_100;
    uStack_9c = 0;
    local_48 = 0;
    local_40 = 0;
    local_30 = 0;
    local_38 = local_88;
    TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::
    TConstElementBoxIterator<TMemStackAllocator<0>_>::ProcessChildren(&local_a8);
    TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::
    TConstElementBoxIterator<TMemStackAllocator<0>_>::AdvanceToNextIntersectingElement(&local_a8);
    iVar6 = local_30;
    while (local_30 = iVar6, local_88 != 0) {
      fVar5 = pfVar10[3];
      lVar9 = *(longlong *)(local_38 + 0x4000);
      if (*(longlong *)(local_38 + 0x4000) == 0) {
        lVar9 = local_38;
      }
      puVar11 = (undefined8 *)(lVar9 + (longlong)iVar6 * 0x40);
      plVar3 = (longlong *)puVar11[1];
      fVar1 = *(float *)(puVar11 + 5);
      fVar13 = pfVar10[1] - *(float *)((longlong)puVar11 + 0x14);
      fVar12 = (*pfVar10 - *(float *)(puVar11 + 2)) * (*pfVar10 - *(float *)(puVar11 + 2));
      fVar13 = fVar13 * fVar13;
      fVar14 = (pfVar10[2] - *(float *)(puVar11 + 3)) * (pfVar10[2] - *(float *)(puVar11 + 3));
      auVar4._4_4_ = -(uint)((fVar5 + fVar1) * (fVar5 + fVar1) < fVar14 + fVar13 + fVar12);
      auVar4._0_4_ = -(uint)((fVar5 + fVar1) * (fVar5 + fVar1) < fVar14 + fVar13 + fVar12);
      auVar4._8_4_ = -(uint)((fVar5 + fVar1) * (fVar5 + fVar1) < fVar14 + fVar13 + fVar12);
      auVar4._12_4_ = -(uint)((fVar5 + fVar1) * (fVar5 + fVar1) < fVar14 + fVar13 + fVar12);
      iVar8 = movmskps((int)((longlong)iVar6 * 0x40),auVar4);
      if ((iVar8 == 0) &&
         (cVar7 = (**(code **)(**(longlong **)(*(longlong *)(pfVar10 + 8) + 0x30) + 8))(),
         cVar7 != '\0')) {
        lVar9 = *(longlong *)(*(longlong *)(pfVar10 + 8) + 0x30);
        if (((((*(uint *)(lVar9 + 0x180) >> 10 & 1) == 0) ||
             ((*(uint *)((longlong)plVar3 + 0x1c) >> 0xd & 1) != 0)) &&
            ((*(byte *)(lVar9 + 0x189) & *(byte *)((longlong)plVar3 + 0x2c)) != 0)) &&
           (((*(uint *)(*(longlong *)(pfVar10 + 8) + 0x90) >> 1 & 1) == 0 ||
            (cVar7 = (**(code **)(*plVar3 + 0x18))(plVar3), cVar7 != '\0')))) {
          FUN_141d64720(param_1,*puVar11);
        }
      }
      local_30 = iVar6 + 1;
      TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::
      TConstElementBoxIterator<TMemStackAllocator<0>_>::AdvanceToNextIntersectingElement(&local_a8);
      iVar6 = local_30;
    }
    if (local_e0 == '\0') {
      local_e0 = 1;
      *(int *)(local_f8 + 4) = *(int *)(local_f8 + 4) + -1;
      if (local_e8 != local_f8[2]) {
        FMemStackBase::FreeChunks();
      }
      *local_f8 = local_f0;
      local_f8[3] = local_d8;
    }
  }
  return;
}



// FUNCTION 141b8e950 FUN_141b8e950 body=367 status=ok
// SIG undefined FUN_141b8e950(void)

int * FUN_141b8e950(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      FUN_141bbbc00(param_1,iVar5);
    }
    iVar1 = (int)param_1[5];
    *(int *)(param_1 + 5) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x2c) <= iVar1) {
      uVar3 = (int)(iVar1 + 0x20 + (iVar1 + 0x20 >> 0x1f & 0x1fU)) >> 5;
      if (uVar3 < 5) {
        iVar4 = 4;
      }
      else {
        iVar4 = (int)((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + 0x10 + uVar3;
        if (iVar4 < (int)uVar3) {
          iVar4 = 0x7fffffff;
        }
      }
      *(int *)((longlong)param_1 + 0x2c) = iVar4 << 5;
      TBitArray<SceneRenderingBitArrayAllocator>::Realloc(param_1 + 2,iVar1);
    }
    plVar6 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar6 = param_1 + 2;
    }
    puVar2 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar2 = *puVar2 & ~(1 << ((byte)iVar1 & 0x1f));
  }
  else {
    iVar5 = (int)param_1[6];
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar5 * 0x10);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x10) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar5 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 141b8eac0 AdvanceToNextIntersectingElement body=704 status=ok
// SIG undefined AdvanceToNextIntersectingElement(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::
     TConstElementBoxIterator<TMemStackAllocator<0>_>::AdvanceToNextIntersectingElement
               (float *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  int iVar13;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  uint uStack_7c;
  undefined8 uStack_70;
  undefined8 local_48;
  undefined8 uStack_40;
  
  do {
    _local_98 = *(undefined1 (*) [16])(param_1 + 0x1c);
    fVar12 = local_98._8_4_;
    if (-1 < (int)fVar12) {
      lVar4 = local_98;
      if ((int)fVar12 < *(int *)(lVar4 + 0x4008)) {
        lVar10 = *(longlong *)(lVar4 + 0x4000);
        lVar11 = (longlong)(int)fVar12 * 0x40;
        lVar9 = lVar10;
        if (lVar10 == 0) {
          lVar9 = lVar4;
        }
        auVar5._4_4_ = -(uint)(*(float *)(lVar9 + 0x20 + lVar11) + param_1[5] <
                              (float)((uint)(*(float *)(lVar9 + 0x14 + lVar11) - param_1[1]) &
                                     uRam0000000146a295a4));
        auVar5._0_4_ = -(uint)(*(float *)(lVar9 + 0x1c + lVar11) + param_1[4] <
                              (float)((uint)(*(float *)(lVar9 + 0x10 + lVar11) - *param_1) &
                                     _DAT_146a295a0));
        auVar5._8_4_ = -(uint)(*(float *)(lVar9 + 0x24 + lVar11) + param_1[6] <
                              (float)((uint)(*(float *)(lVar9 + 0x18 + lVar11) - param_1[2]) &
                                     uRam0000000146a295a8));
        auVar5._12_4_ =
             -(uint)(param_1[7] + 0.0 < (float)((uint)(0.0 - param_1[3]) & uRam0000000146a295ac));
        iVar8 = movmskps((int)lVar9,auVar5);
        if (iVar8 == 0) {
LAB_141b8ed58:
          param_1[0x1c] = (float)local_98._0_4_;
          param_1[0x1d] = (float)local_98._4_4_;
          param_1[0x1e] = fVar12;
          param_1[0x1f] = uStack_90._4_4_;
          return;
        }
        while( true ) {
          auVar5 = _local_98;
          fVar12 = (float)((int)fVar12 + 1);
          uStack_90._0_4_ = fVar12;
          if (((int)fVar12 < 0) || (*(int *)(lVar4 + 0x4008) <= (int)fVar12)) break;
          lVar9 = lVar10;
          if (lVar10 == 0) {
            lVar9 = lVar4;
          }
          lVar11 = (longlong)(int)fVar12 * 0x40;
          auVar6._4_4_ = -(uint)(*(float *)(lVar9 + 0x20 + lVar11) + param_1[5] <
                                (float)((uint)(*(float *)(lVar9 + 0x14 + lVar11) - param_1[1]) &
                                       uRam0000000146a295a4));
          auVar6._0_4_ = -(uint)(*(float *)(lVar9 + 0x1c + lVar11) + param_1[4] <
                                (float)((uint)(*(float *)(lVar9 + 0x10 + lVar11) - *param_1) &
                                       _DAT_146a295a0));
          auVar6._8_4_ = -(uint)(*(float *)(lVar9 + 0x24 + lVar11) + param_1[6] <
                                (float)((uint)(*(float *)(lVar9 + 0x18 + lVar11) - param_1[2]) &
                                       uRam0000000146a295a8));
          auVar6._12_4_ =
               -(uint)(param_1[7] + 0.0 < (float)((uint)(0.0 - param_1[3]) & uRam0000000146a295ac));
          iVar8 = movmskps((int)lVar9,auVar6);
          if (iVar8 == 0) {
            *(undefined1 (*) [8])(param_1 + 0x1c) = local_98;
            *(undefined8 *)(param_1 + 0x1e) = uStack_90;
            return;
          }
        }
        local_98._0_4_ = auVar5._0_4_;
        local_98._4_4_ = auVar5._4_4_;
      }
    }
    fVar2 = param_1[0x1a];
    if (fVar2 == 0.0) {
      param_1[8] = 0.0;
      param_1[9] = 0.0;
      *(undefined8 *)(param_1 + 10) = uStack_70;
      param_1[0xc] = 0.0;
      param_1[0xd] = 0.0;
      param_1[0xe] = 0.0;
      param_1[0xf] = 1.0;
      param_1[0x10] = 0.0;
      param_1[0x11] = 0.0;
      param_1[0x12] = 0.0;
      param_1[0x13] = 1.0;
      *(undefined8 *)(param_1 + 0x14) = local_48;
      *(undefined8 *)(param_1 + 0x16) = uStack_40;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x18);
      iVar13 = (int)fVar2 + -1;
      lVar10 = (longlong)iVar13 * 0x40;
      uVar7 = ((undefined8 *)(lVar10 + lVar4))[1];
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar10 + lVar4);
      *(undefined8 *)(param_1 + 10) = uVar7;
      puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar4);
      uVar7 = puVar1[1];
      *(undefined8 *)(param_1 + 0xc) = *puVar1;
      *(undefined8 *)(param_1 + 0xe) = uVar7;
      puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar4);
      uVar7 = puVar1[1];
      *(undefined8 *)(param_1 + 0x10) = *puVar1;
      *(undefined8 *)(param_1 + 0x12) = uVar7;
      puVar1 = (undefined8 *)(lVar10 + 0x30 + lVar4);
      uVar7 = puVar1[1];
      *(undefined8 *)(param_1 + 0x14) = *puVar1;
      *(undefined8 *)(param_1 + 0x16) = uVar7;
      fVar3 = param_1[0x1a];
      iVar8 = ((int)fVar3 - iVar13) + -1;
      if (iVar8 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar13 * 0x40 + lVar4),
                   (void *)((longlong)(int)fVar2 * 0x40 + lVar4),(longlong)iVar8 << 6);
        fVar3 = param_1[0x1a];
      }
      param_1[0x1a] = (float)((int)fVar3 + -1);
      TArray<TOctree<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::FNodeReference,TMemStackAllocator<0>_>
      ::ResizeShrink(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 8) == 0) goto LAB_141b8ed58;
    ProcessChildren(param_1);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 8);
    *(ulonglong *)(param_1 + 0x1e) = (ulonglong)uStack_7c << 0x20;
  } while( true );
}



// FUNCTION 141b8ed80 FUN_141b8ed80 body=220 status=ok
// SIG undefined FUN_141b8ed80(void)

undefined8 FUN_141b8ed80(float *param_1,float *param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  char cVar5;
  undefined4 in_EAX;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = param_1[3];
  fVar1 = param_2[6];
  fVar7 = (*param_1 - *param_2) * (*param_1 - *param_2);
  fVar8 = (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]);
  fVar9 = (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]);
  auVar3._4_4_ = -(uint)((fVar4 + fVar1) * (fVar4 + fVar1) < fVar9 + fVar8 + fVar7);
  auVar3._0_4_ = -(uint)((fVar4 + fVar1) * (fVar4 + fVar1) < fVar9 + fVar8 + fVar7);
  auVar3._8_4_ = -(uint)((fVar4 + fVar1) * (fVar4 + fVar1) < fVar9 + fVar8 + fVar7);
  auVar3._12_4_ = -(uint)((fVar4 + fVar1) * (fVar4 + fVar1) < fVar9 + fVar8 + fVar7);
  iVar6 = movmskps(in_EAX,auVar3);
  if ((iVar6 == 0) &&
     (cVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x30) + 8))(), cVar5 != '\0'
     )) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x30);
    if ((((*(uint *)(lVar2 + 0x180) >> 10 & 1) == 0) ||
        ((*(uint *)((longlong)param_3 + 0x1c) >> 0xd & 1) != 0)) &&
       ((*(byte *)((longlong)param_3 + 0x2c) & *(byte *)(lVar2 + 0x189)) != 0)) {
      if (((*(uint *)(*(longlong *)(param_1 + 8) + 0x90) >> 1 & 1) != 0) &&
         (cVar5 = (**(code **)(*param_3 + 0x18))(param_3), cVar5 == '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}


