// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140c019b0 FUN_140c019b0 body=144 status=ok
// SIG undefined FUN_140c019b0(void)

void FUN_140c019b0(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  BOOL BVar4;
  
  cVar3 = FUN_140c02c60(*param_1,*(longlong *)param_1[1] + (longlong)param_2 * 0xc);
  if (cVar3 == '\0') {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_14686bbb0);
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14686bbb0);
    }
    lVar2 = param_1[1];
    iVar1 = *(int *)(lVar2 + 0x38);
    *(int *)(lVar2 + 0x38) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x3c) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar2 + 0x30,iVar1);
    }
    *(int *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 4) = param_2;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14686bbb0);
  }
  return;
}



// FUNCTION 140c01a40 FUN_140c01a40 body=3956 status=ok
// SIG undefined FUN_140c01a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c01a40(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined8 *puVar14;
  char cVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  wchar_t *pwVar26;
  undefined1 local_res10 [16];
  undefined8 local_res20;
  undefined4 local_3e8 [2];
  undefined8 *local_3e0;
  ulonglong local_3d8;
  longlong *local_3c8;
  longlong *plStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 *local_3a8;
  wchar_t *local_3a0;
  wchar_t *local_398;
  wchar_t *local_390;
  longlong local_388;
  longlong *plStack_380;
  longlong local_378;
  longlong *plStack_370;
  longlong *local_368;
  longlong *plStack_360;
  longlong local_358;
  longlong *plStack_350;
  longlong *local_348;
  longlong *plStack_340;
  longlong *local_338;
  longlong *plStack_330;
  longlong local_328;
  longlong *plStack_320;
  undefined8 local_318 [4];
  undefined8 local_2f8 [4];
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [8];
  undefined1 local_2c8 [8];
  undefined1 local_2c0 [8];
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  longlong local_258 [2];
  longlong local_248 [2];
  undefined1 local_238 [8];
  longlong local_230 [2];
  longlong local_220 [2];
  longlong local_210 [2];
  undefined1 local_200 [8];
  longlong local_1f8 [2];
  undefined8 local_1e8 [13];
  undefined1 auStack_180 [8];
  undefined1 local_178 [8];
  undefined1 auStack_170 [72];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined8 local_58 [4];
  
  puVar24 = local_318;
  local_res20 = param_4;
  cVar15 = FUN_142190080(*param_2);
  if (cVar15 != '\0') {
    if (DAT_14686b0f8 == '\0') {
      uVar16 = FUN_140c12120();
      FUN_140bffbb0(&DAT_14686afc8,uVar16);
    }
    lVar23 = 2;
    puVar18 = local_1e8;
    puVar14 = (undefined8 *)&DAT_14686afc8;
    do {
      puVar25 = puVar14;
      puVar17 = puVar18;
      uVar16 = puVar25[1];
      uVar10 = puVar25[2];
      uVar11 = puVar25[3];
      *puVar17 = *puVar25;
      puVar17[1] = uVar16;
      uVar16 = puVar25[4];
      uVar12 = puVar25[5];
      puVar17[2] = uVar10;
      puVar17[3] = uVar11;
      uVar10 = puVar25[6];
      uVar11 = puVar25[7];
      puVar17[4] = uVar16;
      puVar17[5] = uVar12;
      uVar16 = puVar25[8];
      uVar12 = puVar25[9];
      puVar17[6] = uVar10;
      puVar17[7] = uVar11;
      uVar10 = puVar25[10];
      uVar11 = puVar25[0xb];
      puVar17[8] = uVar16;
      puVar17[9] = uVar12;
      uVar16 = puVar25[0xc];
      uVar12 = puVar25[0xd];
      puVar17[10] = uVar10;
      puVar17[0xb] = uVar11;
      uVar10 = puVar25[0xe];
      uVar11 = puVar25[0xf];
      puVar17[0xc] = uVar16;
      puVar17[0xd] = uVar12;
      puVar17[0xe] = uVar10;
      puVar17[0xf] = uVar11;
      lVar23 = lVar23 + -1;
      puVar18 = puVar17 + 0x10;
      puVar14 = puVar25 + 0x10;
    } while (lVar23 != 0);
    uVar16 = puVar25[0x11];
    uVar6 = *(undefined4 *)(puVar25 + 0x12);
    uVar7 = *(undefined4 *)((longlong)puVar25 + 0x94);
    uVar8 = *(undefined4 *)(puVar25 + 0x13);
    uVar9 = *(undefined4 *)((longlong)puVar25 + 0x9c);
    puVar17[0x10] = puVar25[0x10];
    puVar17[0x11] = uVar16;
    uVar16 = puVar25[0x14];
    uVar10 = puVar25[0x15];
    *(undefined4 *)(puVar17 + 0x12) = uVar6;
    *(undefined4 *)((longlong)puVar17 + 0x94) = uVar7;
    *(undefined4 *)(puVar17 + 0x13) = uVar8;
    *(undefined4 *)((longlong)puVar17 + 0x9c) = uVar9;
    puVar17[0x14] = uVar16;
    puVar17[0x15] = uVar10;
    if ((param_3 == 0) || (lVar23 = FUN_142f6c9f0(param_3), lVar23 == 0)) {
      FUN_1421923f0(local_78,DAT_14686adb8,&DAT_146aeb1e8);
      FUN_140bfb300(param_4,auStack_180,local_78);
      FUN_14217f430(local_78);
      FUN_1421923f0(local_58,DAT_14686adb8,&DAT_146aeb1e8);
      FUN_140bfb300(param_4,local_178,local_58);
      puVar24 = local_58;
    }
    else {
      puVar18 = (undefined8 *)FUN_142f5ed60(lVar23,local_2a0);
      local_3b8 = FUN_142f5c820(lVar23,*puVar18);
      FUN_14217e740(local_2f8);
      FUN_142194380(local_2f8,0x28,0,0,0);
      local_2f8[0] = local_3b8;
      FUN_1421923f0(local_b8,DAT_14686adb8,local_2f8);
      FUN_140bfb300(param_4,auStack_180,local_b8);
      FUN_14217f430(local_b8);
      FUN_14217f430(local_2f8);
      local_3b0 = FUN_142f59790(lVar23);
      FUN_14217e740(puVar24);
      FUN_142194380(puVar24,0x28,0,0,0);
      local_318[0] = local_3b0;
      FUN_1421923f0(local_98,DAT_14686adb8,puVar24);
      FUN_140bfb300(param_4,local_178,local_98);
      FUN_14217f430(local_98);
    }
    FUN_14217f430(puVar24);
    local_3e8[0] = 0xffffffff;
    if ((param_3 != 0) && (lVar23 = UWorld::GetGameState<APVPGameState>(param_3), lVar23 != 0)) {
      cVar15 = FUN_1407c3030(lVar23 + 0x670);
      if (cVar15 != '\0') {
        local_3e8[0] = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(lVar23 + 0x670);
      }
    }
    FUN_140bfa9d0(param_4,auStack_170,local_3e8);
    local_res10[0] = 0;
    if ((param_3 != 0) && (lVar23 = *(longlong *)(param_3 + 400), lVar23 != 0)) {
      lVar19 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if (bVar13) {
        cVar15 = FUN_140bb68a0(lVar23);
        local_res10[0] = cVar15 == '\x01';
        lVar19 = FUN_14244f490(lVar23,0);
        if (lVar19 != 0) {
          lVar20 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar20 + 0x90) * 8) != lVar20 + 0x88)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          if (bVar13) {
            FUN_142dcf3a0(lVar19,&local_3c8);
            if (local_3c8 != (longlong *)0x0) {
              (**(code **)(*local_3c8 + 8))(local_3c8,local_298);
              local_3e0 = (undefined8 *)0x0;
              local_3d8 = 0;
              FUN_140bbc150(lVar23,&local_3e0);
              if (*(char *)(lVar23 + 0xbae) != '\0') {
                _DAT_14686b398 = 0;
                _DAT_14686b3a0 = 0;
                DAT_14686b3a4 = 0;
                DAT_14686b3b0 = 0;
                if (DAT_14686b3b4 != (int)local_3d8) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                  ::ResizeTo(&DAT_14686b3a8,local_3d8 & 0xffffffff);
                }
                local_3a8 = local_3e0 + (longlong)(int)local_3d8 * 2;
                if (local_3e0 != local_3a8) {
                  plVar2 = (longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                  puVar24 = local_3e0;
                  do {
                    iVar5 = DAT_14686b3b0;
                    lVar19 = (longlong)DAT_14686b3b0;
                    DAT_14686b3b0 = DAT_14686b3b0 + 1;
                    if (DAT_14686b3b4 < DAT_14686b3b0) {
                      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                      ::ResizeGrow(&DAT_14686b3a8,iVar5);
                    }
                    pcVar4 = DAT_14686b3a8;
                    pcVar3 = DAT_14686b3a8 + lVar19 * 0x18;
                    pcVar3[0] = '\0';
                    pcVar3[1] = '\0';
                    pcVar4 = pcVar4 + lVar19 * 0x18;
                    pcVar4[8] = '\0';
                    pcVar4[9] = '\0';
                    pcVar4[10] = '\0';
                    pcVar4[0xb] = '\0';
                    pcVar4[0xc] = '\0';
                    pcVar4[0xd] = '\0';
                    pcVar4[0xe] = '\0';
                    pcVar4[0xf] = '\0';
                    pcVar4[0x10] = '\0';
                    pcVar4[0x11] = '\0';
                    pcVar4[0x12] = '\0';
                    pcVar4[0x13] = '\0';
                    pcVar4[0x14] = '\0';
                    pcVar4[0x15] = '\0';
                    pcVar4[0x16] = '\0';
                    pcVar4[0x17] = '\0';
                    puVar18 = (undefined8 *)
                              (**(code **)(*(longlong *)*puVar24 + 8))
                                        ((longlong *)*puVar24,local_290);
                    *(undefined8 *)(pcVar4 + 0x10) = *puVar18;
                    plVar21 = (longlong *)FName::FName(local_280,L"STEAM",1);
                    if (*(longlong *)(pcVar4 + 0x10) == *plVar21) {
                      uVar16 = DAT_14686b3f0;
                      if ((*(int *)(*plVar2 + 0x38) < DAT_14686b3f8) &&
                         (_Init_thread_header(&DAT_14686b3f8), uVar16 = DAT_14686b3f0,
                         DAT_14686b3f8 == -1)) {
                        FName::FName(&DAT_14686b3f0,"steam",1);
                        _Init_thread_footer(&DAT_14686b3f8);
                        uVar16 = DAT_14686b3f0;
                      }
LAB_140c020f9:
                      *(undefined8 *)(pcVar4 + 0x10) = uVar16;
                    }
                    else {
                      plVar21 = (longlong *)FName::FName(local_278,&DAT_143f779f8,1);
                      if ((*(longlong *)(pcVar4 + 0x10) == *plVar21) ||
                         (plVar21 = (longlong *)FName::FName(local_270,L"EPIC",1),
                         *(longlong *)(pcVar4 + 0x10) == *plVar21)) {
                        uVar16 = DAT_14686b400;
                        if ((*(int *)(*plVar2 + 0x38) < DAT_14686b408) &&
                           (_Init_thread_header(&DAT_14686b408), uVar16 = DAT_14686b400,
                           DAT_14686b408 == -1)) {
                          FName::FName(&DAT_14686b400,&DAT_144333694,1);
                          _Init_thread_footer(&DAT_14686b408);
                          uVar16 = DAT_14686b400;
                        }
                        goto LAB_140c020f9;
                      }
                      plVar21 = (longlong *)*puVar24;
                      plVar22 = (longlong *)FName::FName(local_268,L"LIVE",1);
                      plVar21 = (longlong *)(**(code **)(*plVar21 + 8))(plVar21,local_260);
                      if (*plVar21 == *plVar22) {
LAB_140c020bc:
                        uVar16 = DAT_14686b410;
                        if ((*(int *)(*plVar2 + 0x38) < DAT_14686b418) &&
                           (_Init_thread_header(&DAT_14686b418), uVar16 = DAT_14686b410,
                           DAT_14686b418 == -1)) {
                          FName::FName(&DAT_14686b410,"xboxlive",1);
                          _Init_thread_footer(&DAT_14686b418);
                          uVar16 = DAT_14686b410;
                        }
                        goto LAB_140c020f9;
                      }
                      plVar21 = (longlong *)*puVar24;
                      plVar22 = (longlong *)FName::FName(local_238,L"ANVIL",1);
                      plVar21 = (longlong *)(**(code **)(*plVar21 + 8))(plVar21,local_200);
                      if (*plVar21 == *plVar22) goto LAB_140c020bc;
                      plVar21 = (longlong *)*puVar24;
                      plVar22 = (longlong *)FName::FName(local_2d8,&DAT_143f779d0,1);
                      plVar21 = (longlong *)(**(code **)(*plVar21 + 8))(plVar21,local_2b0);
                      if (*plVar21 == *plVar22) {
LAB_140c0209b:
                        uVar16 = DAT_14686b420;
                        if ((*(int *)(*plVar2 + 0x38) < DAT_14686b428) &&
                           (_Init_thread_header(&DAT_14686b428), uVar16 = DAT_14686b420,
                           DAT_14686b428 == -1)) {
                          FName::FName(&DAT_14686b420,&DAT_1443336ac,1);
                          _Init_thread_footer(&DAT_14686b428);
                          uVar16 = DAT_14686b420;
                        }
                        goto LAB_140c020f9;
                      }
                      plVar21 = (longlong *)*puVar24;
                      plVar22 = (longlong *)FName::FName(local_2d0,&DAT_143f77a10,1);
                      plVar21 = (longlong *)(**(code **)(*plVar21 + 8))(plVar21,local_2c8);
                      if (*plVar21 == *plVar22) goto LAB_140c0209b;
                      plVar21 = (longlong *)FName::FName(local_2c0,L"QUAIL",1);
                      if (*(longlong *)(pcVar4 + 0x10) == *plVar21) {
                        uVar16 = DAT_14686b430;
                        if ((*(int *)(*plVar2 + 0x38) < DAT_14686b438) &&
                           (_Init_thread_header(&DAT_14686b438), uVar16 = DAT_14686b430,
                           DAT_14686b438 == -1)) {
                          FName::FName(&DAT_14686b430,"stadia",1);
                          _Init_thread_footer(&DAT_14686b438);
                          uVar16 = DAT_14686b430;
                        }
                        goto LAB_140c020f9;
                      }
                    }
                    lVar19 = FUN_140bbb8d0(lVar23,puVar24);
                    if (lVar19 != 0) {
                      lVar20 = AFGRailroadVehicle::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar20 + 0x90) * 8) != lVar20 + 0x88)) {
                        bVar13 = false;
                      }
                      else {
                        bVar13 = true;
                      }
                      if (bVar13) {
                        puVar18 = (undefined8 *)FUN_142709e60(lVar19,local_2b8);
                        *(undefined8 *)(pcVar4 + 8) = *puVar18;
                      }
                    }
                    plVar21 = (longlong *)*puVar24;
                    plVar22 = (longlong *)(**(code **)(*local_3c8 + 8))(local_3c8,local_288);
                    plVar21 = (longlong *)(**(code **)(*plVar21 + 8))(plVar21,local_2a8);
                    if (*plVar21 == *plVar22) {
                      local_348 = local_3c8;
                      plStack_340 = plStack_3c0;
                      if (plStack_3c0 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plStack_3c0 + 1) = (int)plStack_3c0[1] + 1;
                        UNLOCK();
                      }
                      uVar16 = FUN_140bb74b0(lVar23);
                      cVar15 = FUN_140d89890(uVar16,&local_348,puVar24,0);
                      plVar21 = plStack_340;
                      if (plStack_340 != (longlong *)0x0) {
                        LOCK();
                        plVar22 = plStack_340 + 1;
                        lVar19 = *plVar22;
                        *(int *)plVar22 = (int)*plVar22 + -1;
                        UNLOCK();
                        if ((int)lVar19 == 1) {
                          (**(code **)*plStack_340)(plStack_340);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar21 + 0xc);
                          iVar5 = *piVar1;
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (iVar5 == 1) {
                            (**(code **)(*plVar21 + 8))(plVar21,1);
                          }
                        }
                      }
                      if (cVar15 != '\0') {
                        _DAT_14686b3a0 = _DAT_14686b3a0 + 1;
                        *pcVar4 = '\x01';
                      }
                      FUN_140bbc6f0(lVar23,&local_388,puVar24);
                      plVar21 = plStack_380;
                      if (local_388 != 0) {
                        _DAT_14686b398 = _DAT_14686b398 + 1;
                        local_328 = local_388;
                        plStack_320 = plStack_380;
                        DAT_14686b3a4 = 1;
                        if (plStack_380 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plStack_380 + 1) = (int)plStack_380[1] + 1;
                          UNLOCK();
                        }
                        local_338 = local_3c8;
                        plStack_330 = plStack_3c0;
                        if (plStack_3c0 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plStack_3c0 + 1) = (int)plStack_3c0[1] + 1;
                          UNLOCK();
                        }
                        uVar16 = FUN_140bb74b0(lVar23);
                        cVar15 = FUN_140d89890(uVar16,&local_338,&local_328,0);
                        plVar21 = plStack_330;
                        if (plStack_330 != (longlong *)0x0) {
                          LOCK();
                          plVar22 = plStack_330 + 1;
                          lVar19 = *plVar22;
                          *(int *)plVar22 = (int)*plVar22 + -1;
                          UNLOCK();
                          if ((int)lVar19 == 1) {
                            (**(code **)*plStack_330)(plStack_330);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar21 + 0xc);
                            iVar5 = *piVar1;
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (iVar5 == 1) {
                              (**(code **)(*plVar21 + 8))(plVar21,1);
                            }
                          }
                        }
                        plVar21 = plStack_320;
                        if (plStack_320 != (longlong *)0x0) {
                          LOCK();
                          plVar22 = plStack_320 + 1;
                          lVar19 = *plVar22;
                          *(int *)plVar22 = (int)*plVar22 + -1;
                          UNLOCK();
                          if ((int)lVar19 == 1) {
                            (**(code **)*plStack_320)(plStack_320);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar21 + 0xc);
                            iVar5 = *piVar1;
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (iVar5 == 1) {
                              (**(code **)(*plVar21 + 8))(plVar21,1);
                            }
                          }
                        }
                        plVar21 = plStack_380;
                        if (cVar15 != '\0') {
                          _DAT_14686b39c = _DAT_14686b39c + 1;
                          pcVar4[1] = '\x01';
                        }
                      }
                    }
                    else {
                      _DAT_14686b398 = _DAT_14686b398 + 1;
                      DAT_14686b3a4 = 1;
                      FUN_140bbc6f0(lVar23,&local_378,puVar24);
                      plVar21 = plStack_370;
                      if (local_378 != 0) {
                        local_358 = local_378;
                        plStack_350 = plStack_370;
                        if (plStack_370 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plStack_370 + 1) = (int)plStack_370[1] + 1;
                          UNLOCK();
                        }
                        local_368 = local_3c8;
                        plStack_360 = plStack_3c0;
                        if (plStack_3c0 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(plStack_3c0 + 1) = (int)plStack_3c0[1] + 1;
                          UNLOCK();
                        }
                        uVar16 = FUN_140bb74b0(lVar23);
                        cVar15 = FUN_140d89890(uVar16,&local_368,&local_358,0);
                        plVar21 = plStack_360;
                        if (plStack_360 != (longlong *)0x0) {
                          LOCK();
                          plVar22 = plStack_360 + 1;
                          lVar19 = *plVar22;
                          *(int *)plVar22 = (int)*plVar22 + -1;
                          UNLOCK();
                          if ((int)lVar19 == 1) {
                            (**(code **)*plStack_360)(plStack_360);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar21 + 0xc);
                            iVar5 = *piVar1;
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (iVar5 == 1) {
                              (**(code **)(*plVar21 + 8))(plVar21,1);
                            }
                          }
                        }
                        plVar21 = plStack_350;
                        if (plStack_350 != (longlong *)0x0) {
                          LOCK();
                          plVar22 = plStack_350 + 1;
                          lVar19 = *plVar22;
                          *(int *)plVar22 = (int)*plVar22 + -1;
                          UNLOCK();
                          if ((int)lVar19 == 1) {
                            (**(code **)*plStack_350)(plStack_350);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar21 + 0xc);
                            iVar5 = *piVar1;
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (iVar5 == 1) {
                              (**(code **)(*plVar21 + 8))(plVar21,1);
                            }
                          }
                        }
                        plVar21 = plStack_370;
                        if (cVar15 != '\0') {
                          _DAT_14686b39c = _DAT_14686b39c + 1;
                          pcVar4[1] = '\x01';
                        }
                      }
                    }
                    if (plVar21 != (longlong *)0x0) {
                      LOCK();
                      plVar22 = plVar21 + 1;
                      lVar19 = *plVar22;
                      *(int *)plVar22 = (int)*plVar22 + -1;
                      UNLOCK();
                      if ((int)lVar19 == 1) {
                        (**(code **)*plVar21)(plVar21);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar21 + 0xc);
                        iVar5 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar5 == 1) {
                          (**(code **)(*plVar21 + 8))(plVar21,1);
                        }
                      }
                    }
                    puVar24 = puVar24 + 2;
                    param_4 = local_res20;
                  } while (puVar24 != local_3a8);
                }
              }
              TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
              ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_3e0)
              ;
            }
            if (plStack_3c0 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_3c0 + 1;
              lVar19 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar19 == 1) {
                (**(code **)*plStack_3c0)(plStack_3c0);
                LOCK();
                piVar1 = (int *)((longlong)plStack_3c0 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plStack_3c0 + 8))(plStack_3c0,1);
                }
              }
            }
          }
        }
        *(undefined1 *)(lVar23 + 0xbae) = 0;
      }
    }
    FUN_140bfac90(param_4,local_128,local_res10);
    FUN_140bfac90(param_4,local_120,&DAT_14686b3a4);
    FUN_140bfa9d0(param_4,local_108,&DAT_14686b398);
    FUN_140bfa9d0(param_4,local_110,&DAT_14686b39c);
    FUN_140bfa9d0(param_4,local_118,&DAT_14686b3a0);
    pwVar26 = L"Platform";
    if (DAT_14686b3b0 < 1) {
      FUN_140ac4b20(param_4,local_100,&DAT_143f3eda8);
      FUN_140ac4b20(param_4,local_f8,&DAT_143f3eda8);
      FUN_140ac4b20(param_4,local_f0,&DAT_143f3eda8);
    }
    else {
      if (*DAT_14686b3a8 == '\0') {
        local_3a0 = L"Shift";
        if (DAT_14686b3a8[1] == '\0') {
          local_3a0 = L"";
        }
      }
      else {
        local_3a0 = L"Platform";
        if (DAT_14686b3a8[1] != '\0') {
          local_3a0 = L"PlatformAndShift";
        }
      }
      FUN_140bfb0b0(param_4,local_100,&local_3a0);
      uVar16 = FName::ToString(DAT_14686b3a8 + 8,local_258);
      FUN_140bfb1d0(param_4,local_f8,uVar16);
      if (local_258[0] != 0) {
        FMemory::Free();
      }
      uVar16 = FName::ToString(DAT_14686b3a8 + 0x10,local_248);
      FUN_140bfb1d0(param_4,local_f0,uVar16);
      if (local_248[0] != 0) {
        FMemory::Free();
      }
    }
    if (DAT_14686b3b0 < 2) {
      FUN_140ac4b20(param_4,local_e8,&DAT_143f3eda8);
      FUN_140ac4b20(param_4,local_e0,&DAT_143f3eda8);
      FUN_140ac4b20(param_4,local_d8,&DAT_143f3eda8);
    }
    else {
      if (DAT_14686b3a8[0x18] == '\0') {
        local_398 = L"Shift";
        if (DAT_14686b3a8[0x19] == '\0') {
          local_398 = L"";
        }
      }
      else {
        local_398 = L"Platform";
        if (DAT_14686b3a8[0x19] != '\0') {
          local_398 = L"PlatformAndShift";
        }
      }
      FUN_140bfb0b0(param_4,local_e8,&local_398);
      uVar16 = FName::ToString(DAT_14686b3a8 + 0x20,local_1f8);
      FUN_140bfb1d0(param_4,local_e0,uVar16);
      if (local_1f8[0] != 0) {
        FMemory::Free();
      }
      uVar16 = FName::ToString(DAT_14686b3a8 + 0x28,local_230);
      FUN_140bfb1d0(param_4,local_d8,uVar16);
      if (local_230[0] != 0) {
        FMemory::Free();
      }
    }
    if (DAT_14686b3b0 < 3) {
      FUN_140ac4b20(param_4,local_d0,&DAT_143f3eda8);
      FUN_140ac4b20(param_4,local_c8,&DAT_143f3eda8);
      FUN_140ac4b20(param_4,local_c0,&DAT_143f3eda8);
    }
    else {
      if (DAT_14686b3a8[0x30] == '\0') {
        pwVar26 = L"Shift";
        if (DAT_14686b3a8[0x31] == '\0') {
          pwVar26 = L"";
        }
      }
      else if (DAT_14686b3a8[0x31] != '\0') {
        pwVar26 = L"PlatformAndShift";
      }
      local_390 = pwVar26;
      FUN_140bfb0b0(param_4,local_d0,&local_390);
      uVar16 = FName::ToString(DAT_14686b3a8 + 0x38,local_220);
      FUN_140bfb1d0(param_4,local_c8,uVar16);
      if (local_220[0] != 0) {
        FMemory::Free();
      }
      uVar16 = FName::ToString(DAT_14686b3a8 + 0x40,local_210);
      FUN_140bfb1d0(param_4,local_c0,uVar16);
      if (local_210[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140c029c0 FUN_140c029c0 body=338 status=ok
// SIG undefined FUN_140c029c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c029c0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_b8 = &local_a8;
  local_a8 = 0;
  local_a0 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x28))(*(longlong **)*param_1,*param_2,param_1[1],1);
  local_98 = 0;
  local_90 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x38))
            (*(longlong **)*param_1,*param_2,param_1[2],&local_98);
  local_b8 = &local_88;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)*param_1 + 8))(*(longlong **)*param_1,*param_2,param_1[1],&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  plVar4 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 140c02b20 FUN_140c02b20 body=318 status=ok
// SIG undefined FUN_140c02b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c02b20(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = &local_98;
  local_98 = 0;
  local_90 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x28))(*(longlong **)*param_1,*param_2,param_1 + 1,0);
  local_a0 = &local_88;
  local_a8 = &local_78;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x10))(*(longlong **)*param_1,*param_2,param_1 + 1,0);
  local_30 = 0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  plVar4 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 140c02c60 FUN_140c02c60 body=743 status=ok
// SIG undefined FUN_140c02c60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140c02c60(longlong *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  byte local_c8 [12];
  undefined4 local_bc;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_90;
  float local_8c;
  float local_88;
  
  pfVar2 = (float *)*param_1;
  fVar1 = *pfVar2;
  fVar3 = pfVar2[1];
  fVar9 = pfVar2[2];
  fVar11 = pfVar2[3];
  fVar14 = *param_2 * pfVar2[8];
  fVar15 = param_2[1] * pfVar2[9];
  fVar16 = param_2[2] * pfVar2[10];
  fVar17 = pfVar2[0xb] * 0.0;
  fVar6 = fVar16 * fVar3 - fVar15 * fVar9;
  fVar7 = fVar14 * fVar9 - fVar16 * fVar1;
  fVar8 = fVar15 * fVar1 - fVar14 * fVar3;
  fVar10 = fVar17 * fVar11 - fVar17 * fVar11;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar10 = fVar10 + fVar10;
  auVar13._0_4_ = (fVar8 * fVar3 - fVar7 * fVar9) + fVar11 * fVar6 + fVar14 + pfVar2[4];
  auVar13._4_4_ = (fVar6 * fVar9 - fVar8 * fVar1) + fVar11 * fVar7 + fVar15 + pfVar2[5];
  auVar13._8_4_ = (fVar7 * fVar1 - fVar6 * fVar3) + fVar11 * fVar8 + fVar16 + pfVar2[6];
  auVar13._12_4_ = (fVar10 * fVar11 - fVar10 * fVar11) + fVar11 * fVar10 + fVar17 + pfVar2[7];
  pfVar2 = (float *)param_1[1];
  local_d8 = auVar13._0_4_ + *pfVar2;
  local_d0 = auVar13._8_4_ + pfVar2[2];
  local_d4 = auVar13._4_4_ + pfVar2[1];
  pfVar2 = (float *)param_1[2];
  local_e0 = auVar13._8_4_ + pfVar2[2];
  local_e4 = auVar13._4_4_ + pfVar2[1];
  auVar12._4_12_ = auVar13._4_12_;
  auVar12._0_4_ = auVar13._0_4_ + *pfVar2;
  local_e8 = auVar12._0_4_;
  _guard_xfg_dispatch_icall_nop(local_c8,0,0x90);
  local_bc = 0x3f800000;
  uVar4 = (**(code **)(**(longlong **)param_1[3] + 0x148))();
  uVar5 = UWorld::LineTraceSingleByObjectType
                    (uVar4,local_c8,&local_d8,&local_e8,param_1[4],param_1[5]);
  if (((char)uVar5 != '\0') && ((local_c8[0] & 1) != 0)) {
    uVar5 = param_1[6];
    fVar1 = *(float *)(uVar5 + 0x24);
    local_e8 = local_90 * fVar1 + local_b4;
    local_e4 = local_8c * fVar1 + local_b0;
    local_e0 = local_88 * fVar1 + local_ac;
  }
  if (((local_c8[0] & 1) == 0) || ((local_c8[0] & 2) != 0)) {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    pfVar2 = (float *)param_1[7];
    auVar13 = *(undefined1 (*) [16])(pfVar2 + 8);
    fVar1 = auVar13._0_4_;
    fVar3 = auVar13._4_4_;
    fVar9 = auVar13._8_4_;
    fVar15 = *pfVar2 * _DAT_14686aa20;
    fVar16 = pfVar2[1] * fRam000000014686aa24;
    fVar17 = pfVar2[2] * fRam000000014686aa28;
    fVar18 = pfVar2[3] * fRam000000014686aa2c;
    auVar13 = rcpps(auVar12,auVar13);
    fVar19 = (float)((uint)(local_e8 - pfVar2[4]) & _DAT_14686a960);
    fVar20 = (float)((uint)(local_e4 - pfVar2[5]) & uRam000000014686a964);
    fVar21 = (float)((uint)(local_e0 - pfVar2[6]) & uRam000000014686a968);
    fVar11 = fVar21 * fVar16 - fVar20 * fVar17;
    fVar6 = fVar19 * fVar17 - fVar21 * fVar15;
    fVar7 = fVar20 * fVar15 - fVar19 * fVar16;
    fVar8 = auVar13._0_4_;
    fVar10 = auVar13._4_4_;
    fVar14 = auVar13._8_4_;
    fVar11 = fVar11 + fVar11;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar1;
    fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar3;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar9;
    fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar1;
    fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar3;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar9;
    fVar9 = ((fVar6 * fVar15 - fVar11 * fVar16) + fVar18 * fVar7 + fVar21) *
            (float)(-(uint)((float)((uint)fVar9 & uRam000000014686aa08) <= fRam000000014686aa18) &
                    (uint)fVar14 ^ (uint)fVar14);
    *(ulonglong *)param_2 =
         CONCAT44(((fVar11 * fVar17 - fVar7 * fVar15) + fVar18 * fVar6 + fVar20) *
                  (float)(-(uint)((float)((uint)fVar3 & uRam000000014686aa04) <=
                                 fRam000000014686aa14) & (uint)fVar10 ^ (uint)fVar10),
                  ((fVar7 * fVar16 - fVar6 * fVar17) + fVar18 * fVar11 + fVar19) *
                  (float)(-(uint)((float)((uint)fVar1 & _DAT_14686aa00) <= _DAT_14686aa10) &
                          (uint)fVar8 ^ (uint)fVar8));
    param_2[2] = fVar9;
    uVar5 = CONCAT71((uint7)(uint3)((uint)fVar9 >> 8),1);
  }
  return uVar5;
}



// FUNCTION 140c02f50 FUN_140c02f50 body=767 status=ok
// SIG undefined FUN_140c02f50(void)

longlong * FUN_140c02f50(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  lVar4 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = *param_1;
  if (*(longlong *)(lVar5 + 0x2b0) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x2b0) + 0x118);
  }
  if (lVar4 == *(longlong *)(lVar5 + 0x28)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,5);
    iVar2 = (int)param_2[1] + 5;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    puVar1 = (undefined8 *)*param_2;
    *puVar1 = 0x46004c00450053;
    *(undefined2 *)(puVar1 + 1) = 0;
    return param_2;
  }
  if (*(char *)(lVar5 + 0x330) == '\0') {
    if (*(char *)(lVar5 + 0x331) == '\0') {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,4);
      iVar2 = (int)param_2[1] + 4;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      uVar6 = 0x760045;
      uVar7 = 0x45;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,4);
      iVar2 = (int)param_2[1] + 4;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      uVar6 = 0x760045;
      uVar7 = 0x50;
    }
  }
  else if (*(char *)(lVar5 + 0x331) == '\0') {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,4);
    iVar2 = (int)param_2[1] + 4;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    uVar6 = 0x760050;
    uVar7 = 0x45;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,4);
    iVar2 = (int)param_2[1] + 4;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    uVar6 = 0x760050;
    uVar7 = 0x50;
  }
  *(ulonglong *)*param_2 = CONCAT44(uVar7,uVar6);
  iVar2 = *(int *)(*param_1 + 0x328);
  if (iVar2 == 0) {
    iVar2 = (int)param_2[1];
    iVar3 = (0xc - (uint)(iVar2 != 0)) + iVar2;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    lVar5 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
    builtin_wcsncpy((wchar_t *)(*param_2 + lVar5 * 2),L" - Frien",8);
    lVar5 = *param_2 + lVar5 * 2;
    *(undefined4 *)(lVar5 + 0x10) = 0x6c0064;
    *(undefined2 *)(lVar5 + 0x14) = 0x79;
    *(undefined2 *)(lVar5 + 0x16) = 0;
  }
  else {
    if (iVar2 == 1) {
      iVar2 = (int)param_2[1];
      iVar3 = (0xb - (uint)(iVar2 != 0)) + iVar2;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      lVar5 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
      builtin_wcsncpy((wchar_t *)(*param_2 + lVar5 * 2),L" - Neutr",8);
      lVar5 = *param_2 + lVar5 * 2;
      *(undefined4 *)(lVar5 + 0x10) = 0x6c0061;
      *(undefined2 *)(lVar5 + 0x14) = 0;
      return param_2;
    }
    if (iVar2 == 2) {
      iVar2 = (int)param_2[1];
      iVar3 = (0xb - (uint)(iVar2 != 0)) + iVar2;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      lVar5 = (longlong)iVar2 - (ulonglong)(iVar2 != 0);
      builtin_wcsncpy((wchar_t *)(*param_2 + lVar5 * 2),L" - Hosti",8);
      lVar5 = *param_2 + lVar5 * 2;
      *(undefined4 *)(lVar5 + 0x10) = 0x65006c;
      *(undefined2 *)(lVar5 + 0x14) = 0;
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 140c032b0 FUN_140c032b0 body=63 status=ok
// SIG undefined FUN_140c032b0(void)

undefined8 * FUN_140c032b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47cd8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      cohtml::IEventHandler::operator_delete(param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140c032f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UE4Function_Private::TFunction_OwnedObject<<lambda_8486838975cb18f0fbf667715142777d>,1>::
_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  UE::Core::Private::Function::
  TFunction_OwnedObject<`Audio::FMixerDevice::RegisterSubmixBufferListener'::`2'::<lambda_1>,1>::
  ~TFunction_OwnedObject<_Audio::FMixerDevice::RegisterSubmixBufferListener_::_2_::<lambda_1>,1>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140c03330 FUN_140c03330 body=134 status=ok
// SIG undefined FUN_140c03330(void)

undefined8 * FUN_140c03330(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_FUN_144336f68;
  *param_1 = &PTR_FUN_144336f68;
  if (param_1[1] != 0) {
    do {
      lVar1 = *(longlong *)(param_1[1] + 0x20);
      FMemory::operator_delete(param_1[1],0x30);
      param_1[1] = lVar1;
    } while (lVar1 != 0);
    ppuVar2 = (undefined **)*param_1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  (*(code *)ppuVar2[1])(param_1,0);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140c033c0 FUN_140c033c0 body=145 status=ok
// SIG undefined FUN_140c033c0(void)

longlong FUN_140c033c0(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x5c8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x5b0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x598);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x580);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x568);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x550);
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FMemory::Free();
  }
  FUN_140ac7a60(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5f0);
  }
  return param_1;
}



// FUNCTION 140c03460 FUN_140c03460 body=73 status=ok
// SIG undefined FUN_140c03460(void)

longlong FUN_140c03460(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FMemory::Free();
  }
  FUN_140ac7a60(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x560);
  }
  return param_1;
}



// FUNCTION 140c034b0 FUN_140c034b0 body=52 status=ok
// SIG undefined FUN_140c034b0(void)

undefined8 FUN_140c034b0(undefined8 param_1,ulonglong param_2)

{
  FUN_140bff1f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5b0);
  }
  return param_1;
}



// FUNCTION 140c034f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FTextRenderSceneProxy::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140bff2c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x800);
  }
  return param_1;
}



// FUNCTION 140c03530 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FMovieScene2DTransformSectionTemplate::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b0);
  }
  return param_1;
}



// FUNCTION 140c03570 FUN_140c03570 body=52 status=ok
// SIG undefined FUN_140c03570(void)

undefined8 FUN_140c03570(undefined8 param_1,ulonglong param_2)

{
  FUN_140bff520();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140c035b0 FUN_140c035b0 body=86 status=ok
// SIG undefined FUN_140c035b0(void)

longlong FUN_140c035b0(longlong param_1,ulonglong param_2)

{
  if (*(char *)(param_1 + 0x80) != '\0') {
    *(undefined1 *)(param_1 + 0x80) = 0;
    UE4Tuple_Private::
    TTupleImpl<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FBuildPatchAppManifest,1>,FString>::
    ~TTupleImpl<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FBuildPatchAppManifest,1>,FString>();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_1441b3948;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 140c03610 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWorldTilesGatherer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140bff590();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140c03650 FUN_140c03650 body=135 status=ok
// SIG undefined FUN_140c03650(void)

longlong FUN_140c03650(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 140c036e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FMeshParticleVertexFactory::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140bff780();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4f8);
  }
  return param_1;
}



// FUNCTION 140c03720 FUN_140c03720 body=135 status=ok
// SIG undefined FUN_140c03720(void)

longlong FUN_140c03720(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x500);
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
  FUN_140bff780(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x510);
  }
  return param_1;
}



// FUNCTION 140c037b0 FUN_140c037b0 body=135 status=ok
// SIG undefined FUN_140c037b0(void)

longlong FUN_140c037b0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x508);
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
  FUN_140bff780(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x518);
  }
  return param_1;
}



// FUNCTION 140c03840 FUN_140c03840 body=52 status=ok
// SIG undefined FUN_140c03840(void)

undefined8 FUN_140c03840(undefined8 param_1,ulonglong param_2)

{
  FUN_140bff800();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x380);
  }
  return param_1;
}



// FUNCTION 140c03880 FUN_140c03880 body=70 status=ok
// SIG undefined FUN_140c03880(void)

longlong FUN_140c03880(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 140c038d0 FUN_140c038d0 body=1212 status=ok
// SIG undefined FUN_140c038d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c038d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_178;
  undefined4 local_174 [3];
  longlong local_168;
  longlong *plStack_160;
  longlong *local_158;
  longlong local_148;
  longlong *plStack_140;
  longlong *local_138 [4];
  longlong *local_118 [4];
  undefined8 local_f8 [4];
  undefined8 local_d8 [4];
  undefined8 local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [56];
  
  if ((param_2 != 0) &&
     (local_res18 = param_3, local_res20 = param_4,
     plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x58c), plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) &&
        (local_158 = plVar6, cVar5 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar5 != '\0')) &&
       (lVar7 = plVar6[0x109], lVar7 != 0)) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (plVar3 = *(longlong **)(lVar7 + 0x10d8), plVar3 != (longlong *)0x0)) {
        local_res10[0] = 0;
        local_b8 = FUN_1414b0d60();
        plVar9 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,local_b8);
        if (plVar9 != (longlong *)0x0) {
          local_res10[0] = (**(code **)(*plVar9 + 0x468))(plVar9);
        }
        if ((DAT_14686b150 == '\0') &&
           (puVar10 = (undefined8 *)FUN_140c123a0(), puVar10 != &DAT_14686b100)) {
          DAT_14686b100 = *puVar10;
          _DAT_14686b108 = puVar10[1];
          _DAT_14686b110 = puVar10[2];
          _DAT_14686b118 = puVar10[3];
          _DAT_14686b120 = puVar10[4];
          _DAT_14686b128 = puVar10[5];
          _DAT_14686b130 = puVar10[6];
          _DAT_14686b138 = puVar10[7];
          _DAT_14686b140 = puVar10[8];
          _DAT_14686b148 = puVar10[9];
          DAT_14686b150 = '\x01';
        }
        cVar5 = FUN_142190080(DAT_14686b100);
        if ((cVar5 != '\0') && (cVar5 = FUN_142194620(DAT_14686b100), cVar5 != '\0')) {
          FUN_142190c70(&local_168,DAT_14686b100,L"AbilityAugmentSlotted");
          lVar7 = *(longlong *)(local_168 + 0xc0);
          if (*(longlong *)(local_168 + 0xc0) == 0) {
            lVar7 = local_168 + 0x20;
          }
          uVar11 = FUN_140aa2bd0(lVar7);
          FUN_14217e740(local_138);
          FUN_142194380(local_138,0x28,0,0,0);
          plVar9 = local_158;
          local_138[0] = local_158;
          FUN_1421923f0(local_b0,DAT_14686add8,local_138);
          FUN_140bfb300(uVar11,&DAT_14686b108,local_b0);
          FUN_14217f430(local_b0);
          FUN_14217f430(local_138);
          FUN_14217e740(local_118);
          FUN_142194380(local_118,0x28,0,0,0);
          local_118[0] = plVar9;
          FUN_1421923f0(local_90,DAT_14686ade0,local_118);
          FUN_140bfb300(uVar11,&DAT_14686b110,local_90);
          FUN_14217f430(local_90);
          FUN_14217f430(local_118);
          local_178 = (**(code **)(*plVar3 + 0x408))(plVar3);
          FUN_140bfa9d0(uVar11,&DAT_14686b118,&local_178);
          FUN_140bfa9d0(uVar11,&DAT_14686b120,local_res10);
          local_174[0] = FUN_140d00180(plVar6);
          FUN_140bfadf0(uVar11,&DAT_14686b128,local_174);
          FUN_14217e740(local_f8);
          FUN_142194380(local_f8,0x28,0,0,0);
          local_f8[0] = local_res18;
          FUN_1421923f0(local_70,DAT_14686adb8,local_f8);
          FUN_140bfb300(uVar11,&DAT_14686b140,local_70);
          FUN_14217f430(local_70);
          FUN_14217f430(local_f8);
          FUN_14217e740(local_d8);
          FUN_142194380(local_d8,0x28,0,0,0);
          local_d8[0] = local_res20;
          FUN_1421923f0(local_50,DAT_14686adb8,local_d8);
          FUN_140bfb300(uVar11,&DAT_14686b148,local_50);
          FUN_14217f430(local_50);
          FUN_14217f430(local_d8);
          cVar5 = FUN_14218a740(&local_168,1);
          if (cVar5 != '\0') {
            local_148 = local_168;
            plStack_140 = plStack_160;
            if (plStack_160 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_148);
            plVar6 = plStack_140;
            if (plStack_140 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_140 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_140)(plStack_140);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_160 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_160)(plStack_160);
              LOCK();
              piVar1 = (int *)((longlong)plStack_160 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plStack_160 + 8))(plStack_160,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c03d90 FUN_140c03d90 body=1118 status=ok
// SIG undefined FUN_140c03d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c03d90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined4 local_res20 [2];
  undefined4 local_138;
  undefined4 local_134 [3];
  longlong local_128;
  longlong *plStack_120;
  longlong *local_118;
  longlong local_108;
  longlong *plStack_100;
  longlong *local_f8 [4];
  longlong *local_d8 [4];
  undefined8 local_b8 [4];
  undefined8 local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [56];
  
  if ((param_2 != 0) &&
     (local_res18 = param_3, local_res20[0] = param_4,
     plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x58c), plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) &&
        (local_118 = plVar6, cVar5 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar5 != '\0')) &&
       (lVar7 = plVar6[0x109], lVar7 != 0)) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (plVar3 = *(longlong **)(lVar7 + 0x10d8), plVar3 != (longlong *)0x0)) {
        local_res10[0] = 0;
        local_98 = FUN_1414b0d60();
        plVar9 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,local_98);
        if (plVar9 != (longlong *)0x0) {
          local_res10[0] = (**(code **)(*plVar9 + 0x468))(plVar9);
        }
        if ((DAT_14686b150 == '\0') &&
           (puVar10 = (undefined8 *)FUN_140c123a0(), puVar10 != &DAT_14686b100)) {
          DAT_14686b100 = *puVar10;
          _DAT_14686b108 = puVar10[1];
          _DAT_14686b110 = puVar10[2];
          _DAT_14686b118 = puVar10[3];
          _DAT_14686b120 = puVar10[4];
          _DAT_14686b128 = puVar10[5];
          _DAT_14686b130 = puVar10[6];
          _DAT_14686b138 = puVar10[7];
          _DAT_14686b140 = puVar10[8];
          _DAT_14686b148 = puVar10[9];
          DAT_14686b150 = '\x01';
        }
        cVar5 = FUN_142190080(DAT_14686b100);
        if ((cVar5 != '\0') && (cVar5 = FUN_142194620(DAT_14686b100), cVar5 != '\0')) {
          FUN_142190c70(&local_128,DAT_14686b100,L"AbilityPointsChanged");
          lVar7 = *(longlong *)(local_128 + 0xc0);
          if (*(longlong *)(local_128 + 0xc0) == 0) {
            lVar7 = local_128 + 0x20;
          }
          uVar11 = FUN_140aa2bd0(lVar7);
          FUN_14217e740(local_f8);
          FUN_142194380(local_f8,0x28,0,0,0);
          plVar9 = local_118;
          local_f8[0] = local_118;
          FUN_1421923f0(local_90,DAT_14686add8,local_f8);
          FUN_140bfb300(uVar11,&DAT_14686b108,local_90);
          FUN_14217f430(local_90);
          FUN_14217f430(local_f8);
          FUN_14217e740(local_d8);
          FUN_142194380(local_d8,0x28,0,0,0);
          local_d8[0] = plVar9;
          FUN_1421923f0(local_70,DAT_14686ade0,local_d8);
          FUN_140bfb300(uVar11,&DAT_14686b110,local_70);
          FUN_14217f430(local_70);
          FUN_14217f430(local_d8);
          local_138 = (**(code **)(*plVar3 + 0x408))(plVar3);
          FUN_140bfa9d0(uVar11,&DAT_14686b118,&local_138);
          FUN_140bfa9d0(uVar11,&DAT_14686b120,local_res10);
          local_134[0] = FUN_140d00180(plVar6);
          FUN_140bfadf0(uVar11,&DAT_14686b128,local_134);
          FUN_14217e740(local_b8);
          FUN_142194380(local_b8,0x28,0,0,0);
          local_b8[0] = local_res18;
          FUN_1421923f0(local_50,DAT_14686adb8,local_b8);
          FUN_140bfb300(uVar11,&DAT_14686b130,local_50);
          FUN_14217f430(local_50);
          FUN_14217f430(local_b8);
          FUN_140bfa9d0(uVar11,&DAT_14686b138,local_res20);
          cVar5 = FUN_14218a740(&local_128,1);
          if (cVar5 != '\0') {
            local_108 = local_128;
            plStack_100 = plStack_120;
            if (plStack_120 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_108);
            plVar6 = plStack_100;
            if (plStack_100 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_100 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_100)(plStack_100);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_120 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_120)(plStack_120);
              LOCK();
              piVar1 = (int *)((longlong)plStack_120 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plStack_120 + 8))(plStack_120,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c041f0 FUN_140c041f0 body=1212 status=ok
// SIG undefined FUN_140c041f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c041f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_178;
  undefined4 local_174 [3];
  longlong local_168;
  longlong *plStack_160;
  longlong *local_158;
  longlong local_148;
  longlong *plStack_140;
  longlong *local_138 [4];
  longlong *local_118 [4];
  undefined8 local_f8 [4];
  undefined8 local_d8 [4];
  undefined8 local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [56];
  
  if ((param_2 != 0) &&
     (local_res18 = param_3, local_res20 = param_4,
     plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x58c), plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) &&
        (local_158 = plVar6, cVar5 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar5 != '\0')) &&
       (lVar7 = plVar6[0x109], lVar7 != 0)) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (plVar3 = *(longlong **)(lVar7 + 0x10d8), plVar3 != (longlong *)0x0)) {
        local_res10[0] = 0;
        local_b8 = FUN_1414b0d60();
        plVar9 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,local_b8);
        if (plVar9 != (longlong *)0x0) {
          local_res10[0] = (**(code **)(*plVar9 + 0x468))(plVar9);
        }
        if ((DAT_14686b150 == '\0') &&
           (puVar10 = (undefined8 *)FUN_140c123a0(), puVar10 != &DAT_14686b100)) {
          DAT_14686b100 = *puVar10;
          _DAT_14686b108 = puVar10[1];
          _DAT_14686b110 = puVar10[2];
          _DAT_14686b118 = puVar10[3];
          _DAT_14686b120 = puVar10[4];
          _DAT_14686b128 = puVar10[5];
          _DAT_14686b130 = puVar10[6];
          _DAT_14686b138 = puVar10[7];
          _DAT_14686b140 = puVar10[8];
          _DAT_14686b148 = puVar10[9];
          DAT_14686b150 = '\x01';
        }
        cVar5 = FUN_142190080(DAT_14686b100);
        if ((cVar5 != '\0') && (cVar5 = FUN_142194620(DAT_14686b100), cVar5 != '\0')) {
          FUN_142190c70(&local_168,DAT_14686b100,L"AbilitySlotted");
          lVar7 = *(longlong *)(local_168 + 0xc0);
          if (*(longlong *)(local_168 + 0xc0) == 0) {
            lVar7 = local_168 + 0x20;
          }
          uVar11 = FUN_140aa2bd0(lVar7);
          FUN_14217e740(local_138);
          FUN_142194380(local_138,0x28,0,0,0);
          plVar9 = local_158;
          local_138[0] = local_158;
          FUN_1421923f0(local_b0,DAT_14686add8,local_138);
          FUN_140bfb300(uVar11,&DAT_14686b108,local_b0);
          FUN_14217f430(local_b0);
          FUN_14217f430(local_138);
          FUN_14217e740(local_118);
          FUN_142194380(local_118,0x28,0,0,0);
          local_118[0] = plVar9;
          FUN_1421923f0(local_90,DAT_14686ade0,local_118);
          FUN_140bfb300(uVar11,&DAT_14686b110,local_90);
          FUN_14217f430(local_90);
          FUN_14217f430(local_118);
          local_178 = (**(code **)(*plVar3 + 0x408))(plVar3);
          FUN_140bfa9d0(uVar11,&DAT_14686b118,&local_178);
          FUN_140bfa9d0(uVar11,&DAT_14686b120,local_res10);
          local_174[0] = FUN_140d00180(plVar6);
          FUN_140bfadf0(uVar11,&DAT_14686b128,local_174);
          FUN_14217e740(local_f8);
          FUN_142194380(local_f8,0x28,0,0,0);
          local_f8[0] = local_res18;
          FUN_1421923f0(local_70,DAT_14686adb8,local_f8);
          FUN_140bfb300(uVar11,&DAT_14686b140,local_70);
          FUN_14217f430(local_70);
          FUN_14217f430(local_f8);
          FUN_14217e740(local_d8);
          FUN_142194380(local_d8,0x28,0,0,0);
          local_d8[0] = local_res20;
          FUN_1421923f0(local_50,DAT_14686adb8,local_d8);
          FUN_140bfb300(uVar11,&DAT_14686b148,local_50);
          FUN_14217f430(local_50);
          FUN_14217f430(local_d8);
          cVar5 = FUN_14218a740(&local_168,1);
          if (cVar5 != '\0') {
            local_148 = local_168;
            plStack_140 = plStack_160;
            if (plStack_160 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_148);
            plVar6 = plStack_140;
            if (plStack_140 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_140 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_140)(plStack_140);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_160 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_160)(plStack_160);
              LOCK();
              piVar1 = (int *)((longlong)plStack_160 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plStack_160 + 8))(plStack_160,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c046b0 FUN_140c046b0 body=671 status=ok
// SIG undefined FUN_140c046b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c046b0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = (**(code **)(*param_1 + 0x700))();
  if ((cVar1 == '\0') || (cVar1 = FUN_142f53fe0(param_1), cVar1 == '\0')) {
    local_a8 = FUN_140c046b0;
    uStack_a0 = 0;
    uVar4 = AActor::GetWorldTimerManager(param_1);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar5 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_9c;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar8;
      *plVar5 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0xe0,&local_98,0x3dcccccd);
    if (local_38 != 0) {
      plVar9 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar9 = local_48;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar8 = FMemory::Realloc(plVar5,0,0);
      if (lVar8 != 0) {
        FMemory::Free(lVar8);
      }
    }
  }
  else {
    iVar7 = (int)param_1[0xdb] + -1;
    if (-1 < iVar7) {
      plVar5 = param_1 + 0xda;
      lVar8 = (longlong)iVar7 << 3;
      lVar10 = (longlong)(int)param_1[0xdb] << 3;
      do {
        cVar1 = FUN_142f64900(param_1,*(undefined8 *)(lVar8 + *plVar5));
        if (cVar1 != '\0') {
          lVar3 = thunk_FUN_142f5c680(param_1,*(undefined8 *)(lVar8 + *plVar5));
          if (lVar3 != 0) {
            FUN_142f68510(param_1,lVar3);
            FUN_142f510c0(param_1,lVar3);
          }
          FUN_142f50b00(param_1,*(undefined8 *)(lVar8 + *plVar5),0,0);
          iVar2 = (int)param_1[0xdb];
          iVar6 = (iVar2 - iVar7) + -1;
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar5 + lVar8),(void *)(*plVar5 + lVar10),(longlong)iVar6 << 3);
            iVar2 = (int)param_1[0xdb];
          }
          *(int *)(param_1 + 0xdb) = iVar2 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar5);
        }
        lVar10 = lVar10 + -8;
        lVar8 = lVar8 + -8;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
  }
  return;
}



// FUNCTION 140c04950 FUN_140c04950 body=346 status=ok
// SIG undefined FUN_140c04950(void)

void FUN_140c04950(longlong param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x468);
    uVar3 = AArchVisCharacter::StaticClass();
    lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (lVar4 != 0) {
      thunk_FUN_142f3ce80(lVar4,1);
      lVar5 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140d03fd0(param_2,lVar4);
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x4b8);
  if ((((lVar4 != 0) && (plVar2 = *(longlong **)(lVar4 + 0x5a0), plVar2 != (longlong *)0x0)) &&
      (param_3 != (longlong *)0x0)) && (plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x6e8))(plVar2,param_3);
    uVar3 = UUGButton::GetPrivateStaticClass();
    plVar2 = (longlong *)(**(code **)(*param_3 + 0x628))(param_3,uVar3);
    if (plVar2 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar2 + 0x8e8))(plVar2);
      if (lVar5 != 0) {
        lVar6 = FUN_142f477c0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_142f3e130(*(undefined8 *)(lVar4 + 0x5a0),lVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c04ab0 FUN_140c04ab0 body=224 status=ok
// SIG undefined FUN_140c04ab0(void)

void FUN_140c04ab0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
  }
  *(undefined4 *)(*param_5 + (longlong)iVar2 * 4) = param_2;
  iVar2 = (int)param_5[1];
  cVar1 = *(char *)(param_1 + 0x18);
  iVar3 = iVar2 + 1;
  *(int *)(param_5 + 1) = iVar3;
  if (cVar1 == '\0') {
    if (*(int *)((longlong)param_5 + 0xc) < iVar3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
    }
    *(undefined4 *)(*param_5 + (longlong)iVar2 * 4) = param_3;
    iVar2 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
    }
    *(undefined4 *)(*param_5 + (longlong)iVar2 * 4) = param_4;
  }
  else {
    if (*(int *)((longlong)param_5 + 0xc) < iVar3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
    }
    *(undefined4 *)(*param_5 + (longlong)iVar2 * 4) = param_4;
    iVar2 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_5,iVar2);
    }
    *(undefined4 *)(*param_5 + (longlong)iVar2 * 4) = param_3;
  }
  return;
}



// FUNCTION 140c04b90 FUN_140c04b90 body=1124 status=ok
// SIG undefined FUN_140c04b90(void)

void FUN_140c04b90(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170 [2];
  longlong local_168;
  longlong *plStack_160;
  longlong *local_158;
  longlong local_148;
  longlong *plStack_140;
  longlong *local_138 [4];
  longlong *local_118 [4];
  longlong local_f8 [4];
  undefined8 local_d8 [4];
  undefined8 local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [56];
  
  if (((param_3 != 0) && (param_2 != 0)) &&
     (plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x58c), plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) &&
        (local_158 = plVar6, cVar5 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar5 != '\0')) &&
       (lVar7 = plVar6[0x109], lVar7 != 0)) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (plVar3 = *(longlong **)(lVar7 + 0x10d8), plVar3 != (longlong *)0x0)) {
        local_178 = 0;
        local_b8 = FUN_1414b0d60();
        plVar9 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,local_b8);
        if (plVar9 != (longlong *)0x0) {
          local_178 = (**(code **)(*plVar9 + 0x468))(plVar9);
        }
        puVar10 = (undefined8 *)FUN_140bffc50(&DAT_14686b158);
        cVar5 = FUN_142190080(*puVar10);
        if ((cVar5 != '\0') && (cVar5 = FUN_142194620(*puVar10), cVar5 != '\0')) {
          FUN_142190c70(&local_168,*puVar10,L"ApplyCrewQuartersCustomization");
          lVar7 = *(longlong *)(local_168 + 0xc0);
          if (*(longlong *)(local_168 + 0xc0) == 0) {
            lVar7 = local_168 + 0x20;
          }
          uVar11 = FUN_140aa2bd0(lVar7);
          FUN_14217e740(local_138);
          FUN_142194380(local_138,0x28,0,0,0);
          plVar9 = local_158;
          local_138[0] = local_158;
          FUN_1421923f0(local_b0,DAT_14686add8,local_138);
          FUN_140bfb300(uVar11,puVar10 + 1,local_b0);
          FUN_14217f430(local_b0);
          FUN_14217f430(local_138);
          FUN_14217e740(local_118);
          FUN_142194380(local_118,0x28,0,0,0);
          local_118[0] = plVar9;
          FUN_1421923f0(local_90,DAT_14686ade0,local_118);
          FUN_140bfb300(uVar11,puVar10 + 2,local_90);
          FUN_14217f430(local_90);
          FUN_14217f430(local_118);
          local_174 = (**(code **)(*plVar3 + 0x408))(plVar3);
          FUN_140bfa9d0(uVar11,puVar10 + 3,&local_174);
          FUN_140bfa9d0(uVar11,puVar10 + 4,&local_178);
          local_170[0] = FUN_140d00180(plVar6);
          FUN_140bfadf0(uVar11,puVar10 + 5,local_170);
          FUN_14217e740(local_f8);
          FUN_142194380(local_f8,0x28,0,0,0);
          local_f8[0] = param_3;
          FUN_1421923f0(local_70,DAT_14686adb8,local_f8);
          FUN_140bfb300(uVar11,puVar10 + 6,local_70);
          FUN_14217f430(local_70);
          FUN_14217f430(local_f8);
          FUN_14217e740(local_d8);
          FUN_142194380(local_d8,0x28,0,0,0);
          local_d8[0] = param_4;
          FUN_1421923f0(local_50,DAT_14686adc8,local_d8);
          FUN_140bfb300(uVar11,puVar10 + 7,local_50);
          FUN_14217f430(local_50);
          FUN_14217f430(local_d8);
          cVar5 = FUN_14218a740(&local_168,1);
          if (cVar5 != '\0') {
            local_148 = local_168;
            plStack_140 = plStack_160;
            if (plStack_160 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_148);
            plVar6 = plStack_140;
            if (plStack_140 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_140 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_140)(plStack_140);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_160 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_160)(plStack_160);
              LOCK();
              piVar1 = (int *)((longlong)plStack_160 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plStack_160 + 8))(plStack_160,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c05000 FUN_140c05000 body=1137 status=ok
// SIG undefined FUN_140c05000(void)

void FUN_140c05000(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 local_res20 [2];
  undefined4 local_188;
  undefined4 local_184 [3];
  longlong local_178;
  longlong *plStack_170;
  longlong *local_168;
  longlong local_158;
  longlong *plStack_150;
  longlong *local_148 [4];
  longlong *local_128 [4];
  undefined8 local_108 [4];
  longlong local_e8 [4];
  undefined8 local_c8;
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [56];
  
  if (((param_3 != 0) && (param_2 != 0)) &&
     (plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x58c), plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) &&
        (local_168 = plVar6, cVar5 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar5 != '\0')) &&
       (lVar7 = plVar6[0x109], lVar7 != 0)) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (plVar3 = *(longlong **)(lVar7 + 0x10d8), plVar3 != (longlong *)0x0)) {
        local_res20[0] = 0;
        local_c8 = FUN_1414b0d60();
        plVar9 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,local_c8);
        if (plVar9 != (longlong *)0x0) {
          local_res20[0] = (**(code **)(*plVar9 + 0x468))(plVar9);
        }
        puVar10 = (undefined8 *)FUN_140bffc50(&DAT_14686b158);
        cVar5 = FUN_142190080(*puVar10);
        if ((cVar5 != '\0') && (cVar5 = FUN_142194620(*puVar10), cVar5 != '\0')) {
          FUN_142190c70(&local_178,*puVar10,L"ApplyCustomization");
          lVar7 = *(longlong *)(local_178 + 0xc0);
          if (*(longlong *)(local_178 + 0xc0) == 0) {
            lVar7 = local_178 + 0x20;
          }
          uVar11 = FUN_140aa2bd0(lVar7);
          FUN_14217e740(local_148);
          FUN_142194380(local_148,0x28,0,0,0);
          plVar9 = local_168;
          local_148[0] = local_168;
          FUN_1421923f0(local_c0,DAT_14686add8,local_148);
          FUN_140bfb300(uVar11,puVar10 + 1,local_c0);
          FUN_14217f430(local_c0);
          FUN_14217f430(local_148);
          FUN_14217e740(local_128);
          FUN_142194380(local_128,0x28,0,0,0);
          local_128[0] = plVar9;
          FUN_1421923f0(local_a0,DAT_14686ade0,local_128);
          FUN_140bfb300(uVar11,puVar10 + 2,local_a0);
          FUN_14217f430(local_a0);
          FUN_14217f430(local_128);
          local_188 = (**(code **)(*plVar3 + 0x408))(plVar3);
          FUN_140bfa9d0(uVar11,puVar10 + 3,&local_188);
          FUN_140bfa9d0(uVar11,puVar10 + 4,local_res20);
          local_184[0] = FUN_140d00180(plVar6);
          FUN_140bfadf0(uVar11,puVar10 + 5,local_184);
          FUN_14217e740(local_108);
          FUN_142194380(local_108,0x28,0,0,0);
          local_108[0] = *(undefined8 *)(param_3 + 0xf0);
          FUN_1421923f0(local_80,DAT_14686adb8,local_108);
          FUN_140bfb300(uVar11,puVar10 + 6,local_80);
          FUN_14217f430(local_80);
          FUN_14217f430(local_108);
          FUN_14217e740(local_e8);
          FUN_142194380(local_e8,0x28,0,0,0);
          local_e8[0] = param_3;
          FUN_1421923f0(local_60,DAT_14686adb8,local_e8);
          FUN_140bfb300(uVar11,puVar10 + 7,local_60);
          FUN_14217f430(local_60);
          FUN_14217f430(local_e8);
          cVar5 = FUN_14218a740(&local_178,1);
          if (cVar5 != '\0') {
            local_158 = local_178;
            plStack_150 = plStack_170;
            if (plStack_170 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_158);
            plVar6 = plStack_150;
            if (plStack_150 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_150 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_150)(plStack_150);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          if (plStack_170 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_170 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_170)(plStack_170);
              LOCK();
              piVar1 = (int *)((longlong)plStack_170 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plStack_170 + 8))(plStack_170,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c05480 FUN_140c05480 body=626 status=ok
// SIG undefined FUN_140c05480(void)

void FUN_140c05480(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char local_res8 [8];
  undefined1 local_38 [40];
  undefined1 local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686bba8) && (_Init_thread_header(&DAT_14686bba8), DAT_14686bba8 == -1))
  {
    FName::FName(&DAT_14686bba0,L"Sanctuary3_P",1);
    _Init_thread_footer(&DAT_14686bba8);
  }
  if (*(longlong *)(param_1 + 0x18) != DAT_14686bba0) {
    return;
  }
  FUN_140cb6000(local_res8,param_1);
  if (local_res8[0] == '\0') {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) == 0) {
    return;
  }
  lVar2 = FUN_140b82620(*(longlong *)(DAT_146b33f38 + 0x58),local_res8[0]);
  if (lVar2 == 0) {
    return;
  }
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_10 = 1;
  lVar3 = FUN_1405ec200(lVar2 + 0xe8);
  if (lVar3 != 0) {
    lVar4 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = FUN_141431e90();
      lVar4 = lVar3;
      do {
        if (lVar4 == lVar5) {
          lVar5 = FUN_141431e90();
          lVar4 = lVar3;
          goto LAB_140c055a8;
        }
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
  }
  goto LAB_140c055e8;
  while (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0) {
LAB_140c055a8:
    if (lVar4 == lVar5) {
      lVar5 = FUN_141431e90();
      lVar4 = lVar3;
      goto LAB_140c055c0;
    }
  }
  goto LAB_140c055e8;
  while (lVar4 = *(longlong *)(lVar4 + 0x30), lVar6 = 0, lVar4 != 0) {
LAB_140c055c0:
    lVar6 = lVar3;
    if (lVar4 == lVar5) break;
  }
  FUN_1425518b0(param_1,lVar6,lVar2 + 0x110,local_38);
LAB_140c055e8:
  lVar3 = FUN_1405ec200(lVar2 + 0x140);
  if (lVar3 != 0) {
    lVar4 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = FUN_141431f40();
      lVar4 = lVar3;
      while (lVar4 != lVar5) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      lVar5 = FUN_141431f40();
      lVar4 = lVar3;
      while (lVar4 != lVar5) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      lVar5 = FUN_141431f40();
      lVar4 = lVar3;
      do {
        lVar6 = lVar3;
        if (lVar4 == lVar5) break;
        lVar4 = *(longlong *)(lVar4 + 0x30);
        lVar6 = 0;
      } while (lVar4 != 0);
      FUN_1425518b0(param_1,lVar6,lVar2 + 0x170,local_38);
      return;
    }
  }
  return;
}



// FUNCTION 140c05700 FUN_140c05700 body=158 status=ok
// SIG undefined FUN_140c05700(void)

void FUN_140c05700(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((((param_1 != 0) && (*(longlong **)(param_3 + 8) != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar1 != '\0')) &&
     ((param_5 != 0 && (lVar2 = FUN_140cff1b0(param_1), lVar2 != 0)))) {
    local_10 = *(undefined4 *)(param_4 + 1);
    local_18 = *param_4;
    FUN_140c6fae0(lVar2,param_3,param_2,&local_18,param_5);
  }
  return;
}



// FUNCTION 140c057a0 FUN_140c057a0 body=1124 status=ok
// SIG undefined FUN_140c057a0(void)

void FUN_140c057a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170 [2];
  longlong local_168;
  longlong *plStack_160;
  longlong *local_158;
  longlong local_148;
  longlong *plStack_140;
  longlong *local_138 [4];
  longlong *local_118 [4];
  longlong local_f8 [4];
  undefined8 local_d8 [4];
  undefined8 local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [56];
  
  if (((param_3 != 0) && (param_2 != 0)) &&
     (plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x58c), plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) &&
        (local_158 = plVar6, cVar5 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar5 != '\0')) &&
       (lVar7 = plVar6[0x109], lVar7 != 0)) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (plVar3 = *(longlong **)(lVar7 + 0x10d8), plVar3 != (longlong *)0x0)) {
        local_178 = 0;
        local_b8 = FUN_1414b0d60();
        plVar9 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,local_b8);
        if (plVar9 != (longlong *)0x0) {
          local_178 = (**(code **)(*plVar9 + 0x468))(plVar9);
        }
        puVar10 = (undefined8 *)FUN_140bffc50(&DAT_14686b158);
        cVar5 = FUN_142190080(*puVar10);
        if ((cVar5 != '\0') && (cVar5 = FUN_142194620(*puVar10), cVar5 != '\0')) {
          FUN_142190c70(&local_168,*puVar10,L"ApplyWeaponSkin");
          lVar7 = *(longlong *)(local_168 + 0xc0);
          if (*(longlong *)(local_168 + 0xc0) == 0) {
            lVar7 = local_168 + 0x20;
          }
          uVar11 = FUN_140aa2bd0(lVar7);
          FUN_14217e740(local_138);
          FUN_142194380(local_138,0x28,0,0,0);
          plVar9 = local_158;
          local_138[0] = local_158;
          FUN_1421923f0(local_b0,DAT_14686add8,local_138);
          FUN_140bfb300(uVar11,puVar10 + 1,local_b0);
          FUN_14217f430(local_b0);
          FUN_14217f430(local_138);
          FUN_14217e740(local_118);
          FUN_142194380(local_118,0x28,0,0,0);
          local_118[0] = plVar9;
          FUN_1421923f0(local_90,DAT_14686ade0,local_118);
          FUN_140bfb300(uVar11,puVar10 + 2,local_90);
          FUN_14217f430(local_90);
          FUN_14217f430(local_118);
          local_174 = (**(code **)(*plVar3 + 0x408))(plVar3);
          FUN_140bfa9d0(uVar11,puVar10 + 3,&local_174);
          FUN_140bfa9d0(uVar11,puVar10 + 4,&local_178);
          local_170[0] = FUN_140d00180(plVar6);
          FUN_140bfadf0(uVar11,puVar10 + 5,local_170);
          FUN_14217e740(local_f8);
          FUN_142194380(local_f8,0x28,0,0,0);
          local_f8[0] = param_3;
          FUN_1421923f0(local_70,DAT_14686adc8,local_f8);
          FUN_140bfb300(uVar11,puVar10 + 6,local_70);
          FUN_14217f430(local_70);
          FUN_14217f430(local_f8);
          FUN_14217e740(local_d8);
          FUN_142194380(local_d8,0x28,0,0,0);
          local_d8[0] = param_4;
          FUN_1421923f0(local_50,DAT_14686adb8,local_d8);
          FUN_140bfb300(uVar11,puVar10 + 7,local_50);
          FUN_14217f430(local_50);
          FUN_14217f430(local_d8);
          cVar5 = FUN_14218a740(&local_168,1);
          if (cVar5 != '\0') {
            local_148 = local_168;
            plStack_140 = plStack_160;
            if (plStack_160 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_148);
            plVar6 = plStack_140;
            if (plStack_140 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_140 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_140)(plStack_140);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_160 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_160)(plStack_160);
              LOCK();
              piVar1 = (int *)((longlong)plStack_160 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plStack_160 + 8))(plStack_160,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c05c10 FUN_140c05c10 body=1124 status=ok
// SIG undefined FUN_140c05c10(void)

void FUN_140c05c10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170 [2];
  longlong local_168;
  longlong *plStack_160;
  longlong *local_158;
  longlong local_148;
  longlong *plStack_140;
  longlong *local_138 [4];
  longlong *local_118 [4];
  longlong local_f8 [4];
  undefined8 local_d8 [4];
  undefined8 local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [56];
  
  if (((param_3 != 0) && (param_2 != 0)) &&
     (plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x58c), plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) &&
        (local_158 = plVar6, cVar5 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar5 != '\0')) &&
       (lVar7 = plVar6[0x109], lVar7 != 0)) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (plVar3 = *(longlong **)(lVar7 + 0x10d8), plVar3 != (longlong *)0x0)) {
        local_178 = 0;
        local_b8 = FUN_1414b0d60();
        plVar9 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,local_b8);
        if (plVar9 != (longlong *)0x0) {
          local_178 = (**(code **)(*plVar9 + 0x468))(plVar9);
        }
        puVar10 = (undefined8 *)FUN_140bffc50(&DAT_14686b158);
        cVar5 = FUN_142190080(*puVar10);
        if ((cVar5 != '\0') && (cVar5 = FUN_142194620(*puVar10), cVar5 != '\0')) {
          FUN_142190c70(&local_168,*puVar10,L"ApplyWeaponTrinket");
          lVar7 = *(longlong *)(local_168 + 0xc0);
          if (*(longlong *)(local_168 + 0xc0) == 0) {
            lVar7 = local_168 + 0x20;
          }
          uVar11 = FUN_140aa2bd0(lVar7);
          FUN_14217e740(local_138);
          FUN_142194380(local_138,0x28,0,0,0);
          plVar9 = local_158;
          local_138[0] = local_158;
          FUN_1421923f0(local_b0,DAT_14686add8,local_138);
          FUN_140bfb300(uVar11,puVar10 + 1,local_b0);
          FUN_14217f430(local_b0);
          FUN_14217f430(local_138);
          FUN_14217e740(local_118);
          FUN_142194380(local_118,0x28,0,0,0);
          local_118[0] = plVar9;
          FUN_1421923f0(local_90,DAT_14686ade0,local_118);
          FUN_140bfb300(uVar11,puVar10 + 2,local_90);
          FUN_14217f430(local_90);
          FUN_14217f430(local_118);
          local_174 = (**(code **)(*plVar3 + 0x408))(plVar3);
          FUN_140bfa9d0(uVar11,puVar10 + 3,&local_174);
          FUN_140bfa9d0(uVar11,puVar10 + 4,&local_178);
          local_170[0] = FUN_140d00180(plVar6);
          FUN_140bfadf0(uVar11,puVar10 + 5,local_170);
          FUN_14217e740(local_f8);
          FUN_142194380(local_f8,0x28,0,0,0);
          local_f8[0] = param_3;
          FUN_1421923f0(local_70,DAT_14686adb8,local_f8);
          FUN_140bfb300(uVar11,puVar10 + 6,local_70);
          FUN_14217f430(local_70);
          FUN_14217f430(local_f8);
          FUN_14217e740(local_d8);
          FUN_142194380(local_d8,0x28,0,0,0);
          local_d8[0] = param_4;
          FUN_1421923f0(local_50,DAT_14686adb8,local_d8);
          FUN_140bfb300(uVar11,puVar10 + 7,local_50);
          FUN_14217f430(local_50);
          FUN_14217f430(local_d8);
          cVar5 = FUN_14218a740(&local_168,1);
          if (cVar5 != '\0') {
            local_148 = local_168;
            plStack_140 = plStack_160;
            if (plStack_160 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_148);
            plVar6 = plStack_140;
            if (plStack_140 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_140 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_140)(plStack_140);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_160 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_160)(plStack_160);
              LOCK();
              piVar1 = (int *)((longlong)plStack_160 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plStack_160 + 8))(plStack_160,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c06080 FUN_140c06080 body=643 status=ok
// SIG undefined FUN_140c06080(void)

void FUN_140c06080(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  uVar9 = 0;
  if ((lVar3 != 0) && (lVar3 = FUN_142f6c9f0(lVar3), lVar3 != 0)) {
    local_40 = 0;
    local_48 = param_1;
    uVar4 = FUN_142f768a0();
    local_40 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
    FUN_142f6e000(lVar3,&local_48);
  }
  if (param_1[6] != 0) {
    FUN_140c136e0(&local_58,0);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x48))(local_58,param_1 + 6);
    }
    plVar10 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  if ((param_1[7] != 0) && (lVar3 = FUN_140c104a0(param_1), lVar3 != 0)) {
    lVar6 = param_1[7];
    uVar8 = uVar9;
    uVar11 = uVar9;
    if (0 < *(int *)(lVar3 + 0x9a8)) {
      do {
        plVar10 = (longlong *)(*(longlong *)(lVar3 + 0x9a0) + uVar11);
        if ((((int)plVar10[1] != 0) && (plVar5 = (longlong *)*plVar10, plVar5 != (longlong *)0x0))
           && (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res10),
              *plVar5 == lVar6)) {
          if (((int)plVar10[1] != 0) && (plVar5 = (longlong *)*plVar10, plVar5 != (longlong *)0x0))
          {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            if (*plVar10 != 0) {
              lVar6 = FMemory::Realloc(*plVar10,0,0);
              *plVar10 = lVar6;
            }
            *(undefined4 *)(plVar10 + 1) = 0;
          }
          break;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar11 = uVar11 + 0x10;
      } while ((int)uVar7 < *(int *)(lVar3 + 0x9a8));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar3 + 0x9a0),0);
  }
  if ((param_1[10] != 0) && (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar10 = (longlong *)FUN_142d5ecc0(uVar4);
    if ((plVar10 != (longlong *)0x0) &&
       (lVar3 = (**(code **)(*plVar10 + 0x2c0))(plVar10), lVar3 != 0)) {
      lVar6 = param_1[10];
      uVar8 = uVar9;
      if (0 < *(int *)(lVar3 + 0x100)) {
        do {
          plVar10 = (longlong *)(*(longlong *)(lVar3 + 0xf8) + uVar8);
          if ((((int)plVar10[1] != 0) && (plVar5 = (longlong *)*plVar10, plVar5 != (longlong *)0x0))
             && (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res18),
                *plVar5 == lVar6)) {
            if (((int)plVar10[1] != 0) && (plVar5 = (longlong *)*plVar10, plVar5 != (longlong *)0x0)
               ) {
              (**(code **)(*plVar5 + 0x28))(plVar5,0);
              if (*plVar10 != 0) {
                lVar6 = FMemory::Realloc(*plVar10,0,0);
                *plVar10 = lVar6;
              }
              *(undefined4 *)(plVar10 + 1) = 0;
            }
            break;
          }
          uVar7 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar7;
          uVar8 = uVar8 + 0x10;
        } while ((int)uVar7 < *(int *)(lVar3 + 0x100));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar3 + 0xf8),0);
    }
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 140c06310 FUN_140c06310 body=110 status=ok
// SIG undefined FUN_140c06310(void)

void FUN_140c06310(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_140b85640(*(longlong *)(param_1 + 0x98),0);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_140b75d20();
    FUN_140b55eb0(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    TUniformBuffer<FLpvWriteUniformBufferParameters>::ReleaseDynamicRHI();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_142d29800();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_140b55e90();
    return;
  }
  return;
}



// FUNCTION 140c06380 FUN_140c06380 body=1098 status=ok
// SIG undefined FUN_140c06380(void)

void FUN_140c06380(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int *piVar11;
  undefined1 local_res8 [8];
  uint in_stack_ffffffffffffffb8;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_140af2b90();
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar11 < DAT_14686b478) && (_Init_thread_header(&DAT_14686b478), DAT_14686b478 == -1)) {
    FName::FName(&DAT_14686b470,L"Sanctuary3_P",1);
    _Init_thread_footer(&DAT_14686b478);
  }
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar5 != 0) &&
     (lVar5 = (**(code **)(*param_1 + 0x148))(param_1), *(longlong *)(lVar5 + 0x18) == DAT_14686b470
     )) {
    if ((*piVar11 < DAT_14686b488) && (_Init_thread_header(&DAT_14686b488), DAT_14686b488 == -1)) {
      FName::FName(&DAT_14686b480,L"Sanctuary3_Season",1);
      _Init_thread_footer(&DAT_14686b488);
    }
    if ((*piVar11 < DAT_14686b498) && (_Init_thread_header(&DAT_14686b498), DAT_14686b498 == -1)) {
      FName::FName(&DAT_14686b490,L"SM_RaidTeleporter_9",1);
      _Init_thread_footer(&DAT_14686b498);
    }
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = FUN_140c747e0(uVar6,&DAT_14686b480);
    if (lVar5 != 0) {
      uVar6 = AAfrPlayerState::GetPrivateStaticClass();
      plVar7 = (longlong *)
               FUN_141799680(uVar6,lVar5,DAT_14686b490,0,in_stack_ffffffffffffffb8 & 0xffffff00,0,0)
      ;
      if (plVar7 != (longlong *)0x0) {
        lVar5 = AAfrPlayerState::GetPrivateStaticClass();
        iVar3 = *(int *)(lVar5 + 0x90);
        if ((*(int *)(plVar7[2] + 0x90) < iVar3) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)iVar3 * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*plVar7 + 0x310))(plVar7,CONCAT71((int7)(int3)((uint)iVar3 >> 8),1));
        }
      }
    }
  }
  local_18 = 0;
  local_10 = 0;
  lVar5 = FUN_1412c3780(&local_18,param_1);
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar8 == 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  local_28 = 0;
  local_20 = 0x4f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy
            (local_28,
             L"/Game/GameData/ZoneMap/POI_Types/POI_LevelTravelStation.POI_LevelTravelStation",0x9e)
  ;
  uVar6 = FUN_1414f8520();
  puVar9 = (undefined8 *)FName::FName(local_res8,L"POI_LevelTravelStation",1);
  lVar8 = StaticFindObjectFastExplicit(uVar6,*puVar9,&local_28,0,0);
  if (lVar8 != 0) {
    lVar10 = FUN_1414f8520();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140c06587;
  }
  lVar8 = 0;
LAB_140c06587:
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (lVar8 != 0) {
    iVar3 = FUN_14128e370(lVar5,param_1,lVar8);
    if ((iVar3 < 0) || (*(int *)(lVar5 + 0x158) <= iVar3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetPlayerControllerIterator(uVar6,&local_28);
      iVar4 = (int)local_20;
      while( true ) {
        if ((iVar4 < 0) || (*(int *)(local_28 + 8) <= iVar4)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        plVar7 = (longlong *)FWeakObjectPtr::Get();
        if (plVar7 != (longlong *)0x0) {
          lVar8 = FUN_14145f370();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            if (((*(uint *)((longlong)plVar7 + 0x4cc) >> 1 & 1) == 0) ||
               (cVar2 = (**(code **)(*plVar7 + 0x768))(), cVar2 == '\0')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((((bVar1) && (lVar8 = UMediumDoorComponent::GetSecondDoorComponent(), lVar8 != 0))
                && (cVar2 = FUN_14058c1e0(lVar8 + 0x754,lVar5), cVar2 != '\0')) &&
               (0 < *(int *)(lVar8 + 0x7f0))) {
              cVar2 = FUN_1412c7c80(lVar8,*(longlong *)(lVar5 + 0x150) + (longlong)iVar3 * 0x60);
              if (cVar2 != '\0') {
                FUN_1412b80d0(lVar8,*(longlong *)(lVar5 + 0x150) + (longlong)iVar3 * 0x60);
              }
            }
          }
        }
        iVar4 = (int)local_20 + 1;
        local_20 = CONCAT44(local_20._4_4_,iVar4);
      }
    }
  }
  return;
}



// FUNCTION 140c067d0 FUN_140c067d0 body=134 status=ok
// SIG undefined FUN_140c067d0(void)

void FUN_140c067d0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142223710();
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_14223c460(param_1,0);
    FUN_142227b80(param_1);
    lVar1 = *(longlong *)(param_1 + 0x118);
    if (lVar1 != 0) {
      lVar3 = AGExplodingRockProjectile::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_140c27070(param_1,lVar1);
      }
    }
  }
  return;
}



// FUNCTION 140c06860 FUN_140c06860 body=416 status=ok
// SIG undefined FUN_140c06860(void)

void FUN_140c06860(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  undefined4 *puVar10;
  longlong local_res10;
  undefined8 local_28;
  longlong local_20;
  
  FUN_140c06bc0();
  lVar6 = AIndianaUI::GetArmorComponent(param_1);
  if (lVar6 != 0) {
    lVar7 = FUN_1414ba0d0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *(undefined1 *)(lVar6 + 0x1d8) = 1;
    }
  }
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar6 = FUN_142f6c9f0(uVar8);
  if (lVar6 != 0) {
    (**(code **)(*param_1 + 0x6f0))(param_1);
    local_20 = 0;
    local_28 = param_1;
    uVar8 = FUN_142f768a0();
    local_20 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar8);
    FUN_142f690f0(lVar6,&local_28,1);
  }
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AOakMissionRareSpawner::DoRareSpawnSocialLogic",L"::");
  pwVar5 = (wchar_t *)0x0;
  while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar5 = pwVar4;
  }
  FName::FName(&local_res10,pwVar5 + 2,1);
  plVar1 = param_1 + 0x98;
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_28), lVar6 != 0)) {
    UObject::FindFunction(lVar6,local_20);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  iVar2 = (int)param_1[0x99];
  *(int *)(param_1 + 0x99) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x4cc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  puVar10 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
  *puVar10 = (undefined4)local_28;
  puVar10[1] = local_28._4_4_;
  *(longlong *)(puVar10 + 2) = local_20;
  return;
}



// FUNCTION 140c06a00 FUN_140c06a00 body=438 status=ok
// SIG undefined FUN_140c06a00(void)

void FUN_140c06a00(code *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  code *local_28;
  ulonglong uStack_20;
  
  FUN_140c06bc0();
  (**(code **)(*(longlong *)param_1 + 0x6f0))(param_1);
  lVar3 = (**(code **)(*(longlong *)param_1 + 0x148))(param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_142f6c9f0(lVar3);
    if (lVar4 != 0) {
      uStack_20 = 0;
      local_28 = param_1;
      uVar5 = FUN_142f768a0();
      uStack_20 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar5);
      FUN_142f690f0(lVar4,&local_28,1);
    }
    lVar3 = UWorld::GetAuthGameMode<ABaseGameMode>(lVar3);
    if ((lVar3 != 0) && (lVar3 = FUN_142d84360(lVar3), lVar3 != 0)) {
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = FUN_140c21670;
      pwVar6 = _guard_xfg_dispatch_icall_nop
                         (L"&AOakMissionRareSpawner_WantedPoster::OnStatChanged",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar6, pwVar1 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res8,pwVar2 + 2,1);
      FUN_1407260e0(lVar3 + 0x458,param_1,&local_28,local_res8);
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = FUN_140c21670;
      pwVar6 = _guard_xfg_dispatch_icall_nop
                         (L"&AOakMissionRareSpawner_WantedPoster::OnStatChanged",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar6, pwVar1 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res8,pwVar2 + 2,1);
      FUN_1407260e0(lVar3 + 0x468,param_1,&local_28,local_res8);
    }
  }
  return;
}



// FUNCTION 140c06bc0 FUN_140c06bc0 body=1896 status=ok
// SIG undefined FUN_140c06bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c06bc0(code *param_1)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  char cVar5;
  code cVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  code *pcVar16;
  undefined4 *puVar17;
  int *piVar18;
  wchar_t *pwVar19;
  bool bVar20;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  longlong local_c8 [16];
  longlong *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FUN_140775250();
  pwVar19 = (wchar_t *)0x0;
  local_e8 = AK::MemoryMgr::StartProfileThreadUsage;
  uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
  pwVar15 = pwVar19;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_14416caa8;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    *(int *)(plVar8 + 2) = (int)local_e8;
    *(int *)((longlong)plVar8 + 0x14) = local_e8._4_4_;
    *(undefined4 *)(plVar8 + 3) = (undefined4)uStack_e0;
    *(uint *)((longlong)plVar8 + 0x1c) = uStack_e0._4_4_;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar9;
    *plVar8 = (longlong)&PTR_FUN_14416caf0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533130,1);
    plVar10 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,&local_d8);
    iVar1 = DAT_146533138;
    lVar9 = (longlong)DAT_146533138;
    pwVar15 = (wchar_t *)*plVar10;
    DAT_146533138 = DAT_146533138 + 1;
    if (DAT_14653313c < DAT_146533138) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533130,iVar1);
    }
    lVar14 = DAT_146533130;
    *(longlong **)(DAT_146533130 + lVar9 * 0x10) = plVar8;
    *(undefined4 *)(lVar14 + 8 + lVar9 * 0x10) = 3;
  }
  *(wchar_t **)(param_1 + 0x7e0) = pwVar15;
  if ((*(longlong *)(param_1 + 0x660) == 0) &&
     (cVar5 = FUN_142f63b20(param_1 + 0x668,param_1), cVar5 == '\0')) {
    uVar11 = UCableComponent::GetAttachedActor(param_1);
    FUN_140c15c90(local_c8,uVar11);
    plVar8 = local_c8;
    if (local_48 != (longlong *)0x0) {
      plVar8 = local_48;
    }
    plVar10 = plVar8 + local_40;
    for (; plVar8 != plVar10; plVar8 = plVar8 + 1) {
      if ((*plVar8 == 0) || (cVar5 = FUN_140eb29d0(), cVar5 == '\0')) {
        bVar20 = false;
      }
      else {
        bVar20 = true;
      }
      if (bVar20) {
        bVar20 = true;
        goto LAB_140c06d3d;
      }
    }
    bVar20 = false;
LAB_140c06d3d:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (((!bVar20) && (cVar5 = FUN_140c08e80(param_1), cVar5 == '\0')) &&
       (cVar5 = FUN_142f63b20(param_1 + 0x6c8,param_1), cVar5 == '\0')) {
      if (param_1[0x759] != (code)0x0) {
        FUN_140c0f5b0(param_1);
      }
      goto LAB_140c06dea;
    }
  }
  cVar6 = (code)FUN_1407cde20(param_1);
  param_1[0x7f8] = cVar6;
  uVar11 = (**(code **)(*(longlong *)param_1 + 0x148))(param_1);
  lVar9 = FUN_142f6c9f0(uVar11);
  if (lVar9 != 0) {
    (**(code **)(*(longlong *)param_1 + 0x6f0))(param_1);
    uStack_e0 = 0;
    local_e8 = param_1;
    uVar11 = FUN_142f768a0();
    uStack_e0 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar11);
    FUN_142f690f0(lVar9,&local_e8,1);
  }
LAB_140c06dea:
  if (*(longlong *)(param_1 + 0x738) != 0) {
    lVar12 = FUN_142f71d80();
    lVar9 = *(longlong *)(param_1 + 0x738);
    lVar14 = lVar9;
    if (lVar9 != 0) {
LAB_140c06e10:
      if (lVar14 != lVar12) goto code_r0x000140c06e15;
      if (lVar9 != 0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop
                            (L"&AOakMissionSpawner::SendOnAllDiedMissionEvent",L"::");
        pwVar15 = pwVar19;
        while (pwVar3 = pwVar13, pwVar3 != (wchar_t *)0x0) {
          pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar15 = pwVar3;
        }
        FName::FName(&local_d8,pwVar15 + 2,1);
        uVar4 = local_d8;
        pcVar16 = param_1 + 0x4c0;
        FWeakObjectPtr::operator=(&local_e8,0);
        uStack_e0 = 0;
        FWeakObjectPtr::operator=(&local_e8,param_1);
        uStack_e0 = uVar4;
        local_d0 = 0;
        if ((uVar4 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_e8), lVar9 != 0)) {
          UObject::FindFunction(lVar9,uStack_e0);
        }
        piVar2 = *(int **)pcVar16;
        iVar1 = *(int *)(param_1 + 0x4c8);
        piVar18 = piVar2;
        if (piVar2 == piVar2 + (longlong)iVar1 * 4) {
LAB_140c06f45:
          iVar1 = *(int *)(param_1 + 0x4c8);
          lVar9 = (longlong)iVar1;
          *(int *)(param_1 + 0x4c8) = iVar1 + 1;
          if (*(int *)(param_1 + 0x4cc) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pcVar16,iVar1);
          }
          lVar14 = *(longlong *)pcVar16;
          *(int *)(lVar14 + lVar9 * 0x10) = (int)local_e8;
          *(int *)(lVar14 + 4 + lVar9 * 0x10) = local_e8._4_4_;
          *(ulonglong *)(lVar14 + 8 + lVar9 * 0x10) = uStack_e0;
        }
        else {
          while( true ) {
            if (((*piVar18 == (int)local_e8) && (piVar18[1] == local_e8._4_4_)) ||
               ((cVar5 = FWeakObjectPtr::IsValid(piVar18), cVar5 == '\0' &&
                (cVar5 = FWeakObjectPtr::IsValid(&local_e8), cVar5 == '\0')))) {
              bVar20 = true;
            }
            else {
              bVar20 = false;
            }
            if ((bVar20) && (*(ulonglong *)(piVar18 + 2) == uStack_e0)) {
              bVar20 = true;
            }
            else {
              bVar20 = false;
            }
            if (bVar20) break;
            piVar18 = piVar18 + 4;
            if (piVar18 == piVar2 + (longlong)iVar1 * 4) goto LAB_140c06f45;
          }
          if ((int)((longlong)piVar18 - (longlong)piVar2 >> 4) == -1) goto LAB_140c06f45;
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pcVar16);
      }
    }
  }
LAB_140c06f94:
  cVar5 = FUN_142f63b20(param_1 + 0x698,param_1);
  if (cVar5 != '\0') {
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    if (param_1[0x6f8] == (code)0x0) {
      local_e8 = FUN_140c20820;
      pwVar13 = _guard_xfg_dispatch_icall_nop
                          (L"&AOakMissionSpawner::OnMissionActorSpawnedOrUnsuspend",L"::");
      pwVar15 = pwVar19;
      while (pwVar3 = pwVar13, pwVar3 != (wchar_t *)0x0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar15 = pwVar3;
      }
      FName::FName(&local_d8,pwVar15 + 2,1);
      pcVar16 = param_1 + 0x460;
    }
    else {
      local_e8 = FUN_140c20790;
      pwVar13 = _guard_xfg_dispatch_icall_nop(L"&AOakMissionSpawner::OnMissionActorFakeDeath",L"::")
      ;
      pwVar15 = pwVar19;
      while (pwVar3 = pwVar13, pwVar3 != (wchar_t *)0x0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar15 = pwVar3;
      }
      FName::FName(&local_d8,pwVar15 + 2,1);
      pcVar16 = param_1 + 0x470;
    }
    FUN_1407260e0(pcVar16,param_1,&local_e8,local_d8);
  }
  if (param_1[0x758] != (code)0x0) {
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    local_e8 = FUN_140c20b30;
    pwVar13 = _guard_xfg_dispatch_icall_nop
                        (L"&AOakMissionSpawner::OnMissionFailsafeActorDeath",L"::");
    pwVar15 = pwVar19;
    while (pwVar3 = pwVar13, pwVar3 != (wchar_t *)0x0) {
      pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar15 = pwVar3;
    }
    FName::FName(&local_d8,pwVar15 + 2,1);
    FUN_1407260e0(param_1 + 0x470,param_1,&local_e8,local_d8);
  }
  cVar5 = FUN_142f63b20(param_1 + 0x668,param_1);
  if (cVar5 != '\0') {
    uVar11 = UBlindWidget::GetPrivateStaticClass();
    lVar9 = AGameStateBase::OnRep_GameModeClass(param_1,uVar11);
    if (lVar9 != 0) {
      lVar14 = UBlindWidget::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
        bVar20 = false;
      }
      else {
        bVar20 = true;
      }
      if (((bVar20) && (*(char *)(lVar9 + 0x1a0) != '\0')) &&
         (uVar7 = (**(code **)(*(longlong *)(lVar9 + 0x178) + 0x50))(), 1 < uVar7)) {
        pwVar15 = _guard_xfg_dispatch_icall_nop
                            (L"&AOakMissionSpawner::OnMissionActorSuspendData",L"::");
        while (pwVar13 = pwVar15, pwVar13 != (wchar_t *)0x0) {
          pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
          pwVar19 = pwVar13;
        }
        FName::FName(&local_d8,pwVar19 + 2,1);
        pcVar16 = param_1 + 0x578;
        FWeakObjectPtr::operator=(&local_e8,0);
        uStack_e0 = 0;
        FWeakObjectPtr::operator=(&local_e8,param_1);
        uStack_e0 = local_d8;
        local_d0 = 0;
        if ((local_d8 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_e8), lVar9 != 0)) {
          UObject::FindFunction(lVar9,uStack_e0);
        }
        piVar2 = *(int **)pcVar16;
        iVar1 = *(int *)(param_1 + 0x580);
        for (piVar18 = piVar2; piVar18 != piVar2 + (longlong)iVar1 * 4; piVar18 = piVar18 + 4) {
          if (((*piVar18 == (int)local_e8) &&
              (local_e8._4_4_ = (int)((ulonglong)local_e8 >> 0x20),
              bVar20 = piVar18[1] == local_e8._4_4_, bVar20)) ||
             ((cVar5 = FWeakObjectPtr::IsValid(piVar18), cVar5 == '\0' &&
              (cVar5 = FWeakObjectPtr::IsValid(&local_e8), cVar5 == '\0')))) {
            bVar20 = true;
          }
          else {
            bVar20 = false;
          }
          if ((bVar20) && (*(ulonglong *)(piVar18 + 2) == uStack_e0)) {
            bVar20 = true;
          }
          else {
            bVar20 = false;
          }
          if (bVar20) {
            if ((int)((longlong)piVar18 - (longlong)piVar2 >> 4) != -1) goto LAB_140c072fe;
            break;
          }
        }
        iVar1 = *(int *)(param_1 + 0x580);
        *(int *)(param_1 + 0x580) = iVar1 + 1;
        if (*(int *)(param_1 + 0x584) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pcVar16,iVar1);
        }
        puVar17 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)pcVar16);
        *puVar17 = (int)local_e8;
        puVar17[1] = local_e8._4_4_;
        *(ulonglong *)(puVar17 + 2) = uStack_e0;
LAB_140c072fe:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pcVar16);
      }
    }
  }
  return;
code_r0x000140c06e15:
  lVar14 = *(longlong *)(lVar14 + 0x30);
  if (lVar14 == 0) goto LAB_140c06f94;
  goto LAB_140c06e10;
}



// FUNCTION 140c07330 FUN_140c07330 body=472 status=ok
// SIG undefined FUN_140c07330(void)

void FUN_140c07330(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  
  FUN_142f532c0();
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar4 = FUN_142f429c0(uVar3);
  if (lVar4 != 0) {
    lVar9 = 0;
    plVar1 = (longlong *)(lVar4 + 0x500);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    lVar6 = lVar9;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = 0x40c1fb20;
      *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
      *(undefined4 *)(plVar5 + 3) = 0;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_2c;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar6;
      *plVar5 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      plVar7 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar2 = *(int *)(lVar4 + 0x508);
      lVar6 = *plVar7;
      *(int *)(lVar4 + 0x508) = iVar2 + 1;
      if (*(int *)(lVar4 + 0x50c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar8 = plVar5;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
    param_1[0xdd] = lVar6;
    plVar1 = (longlong *)(lVar4 + 0x518);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = 0x40c1fb20;
      *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
      *(undefined4 *)(plVar5 + 3) = 0;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_2c;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar6;
      *plVar5 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      plVar7 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar2 = *(int *)(lVar4 + 0x520);
      lVar9 = *plVar7;
      *(int *)(lVar4 + 0x520) = iVar2 + 1;
      if (*(int *)(lVar4 + 0x524) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar8 = plVar5;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
    param_1[0xde] = lVar9;
  }
  return;
}



// FUNCTION 140c07510 FUN_140c07510 body=42 status=ok
// SIG undefined FUN_140c07510(void)

void FUN_140c07510(longlong param_1)

{
  FUN_142223710();
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_140c195e0(param_1);
    return;
  }
  return;
}



// FUNCTION 140c07540 FUN_140c07540 body=337 status=ok
// SIG undefined FUN_140c07540(void)

void FUN_140c07540(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  
  plVar11 = *(longlong **)(param_1 + 0x10);
  if (plVar11 != (longlong *)0x0) {
    plVar6 = (longlong *)FUN_142f71d80();
    plVar9 = plVar11;
    do {
      if (plVar9 == plVar6) {
        plVar6 = (longlong *)FUN_142f71d80();
        plVar9 = plVar11;
        goto LAB_140c07588;
      }
      plVar9 = (longlong *)plVar9[6];
    } while (plVar9 != (longlong *)0x0);
  }
  goto LAB_140c075f2;
  while (plVar9 = (longlong *)plVar9[6], plVar9 != (longlong *)0x0) {
LAB_140c07588:
    if (plVar9 == plVar6) goto LAB_140c07598;
  }
  plVar11 = (longlong *)0x0;
LAB_140c07598:
  lVar10 = plVar11[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar11 + 0x368))(plVar11);
    lVar10 = plVar11[0x1f];
    if (lVar10 == 0) goto LAB_140c075f2;
  }
  lVar7 = FUN_141437870();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) goto LAB_140c075f4;
LAB_140c075f2:
  lVar10 = 0;
LAB_140c075f4:
  if ((((param_2 != 0) && (lVar10 != 0)) && ((byte)(*(char *)(lVar10 + 0x4c0) - 1U) < 2)) &&
     (*(char *)(lVar10 + 0x4e1) != '\0')) {
    uVar5 = FUN_1409ac010(lVar10);
    cVar3 = *(char *)(lVar10 + 0x4c0);
    uVar8 = FUN_140bb7220(param_2);
    FUN_140d6c040(uVar8,param_3,(cVar3 != '\x01') + '\x04',uVar5);
  }
  plVar11 = *(longlong **)(param_3 + 8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar11 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return;
}



// FUNCTION 140c076a0 FUN_140c076a0 body=283 status=ok
// SIG undefined FUN_140c076a0(void)

void FUN_140c076a0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar10 = *(longlong **)(param_1 + 0x10);
  if (plVar10 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_142f71d80();
    plVar8 = plVar10;
    do {
      if (plVar8 == plVar5) goto LAB_140c076e0;
      plVar8 = (longlong *)plVar8[6];
    } while (plVar8 != (longlong *)0x0);
  }
  plVar10 = (longlong *)0x0;
LAB_140c076e0:
  lVar9 = plVar10[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar9 = plVar10[0x1f];
    if (lVar9 != 0) goto LAB_140c07704;
  }
  else {
LAB_140c07704:
    lVar6 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140c0773c;
  }
  lVar9 = 0;
LAB_140c0773c:
  if (((param_2 != 0) && (lVar9 != 0)) && (*(char *)(lVar9 + 0x4e1) != '\0')) {
    uVar4 = FUN_1409ac010(lVar9);
    uVar7 = FUN_140bb7220(param_2);
    FUN_140d6af00(uVar7,param_3,uVar4);
  }
  plVar10 = *(longlong **)(param_3 + 8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar10 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return;
}



// FUNCTION 140c077c0 FUN_140c077c0 body=283 status=ok
// SIG undefined FUN_140c077c0(void)

void FUN_140c077c0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar10 = *(longlong **)(param_1 + 0x10);
  if (plVar10 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_142f71d80();
    plVar8 = plVar10;
    do {
      if (plVar8 == plVar5) goto LAB_140c07800;
      plVar8 = (longlong *)plVar8[6];
    } while (plVar8 != (longlong *)0x0);
  }
  plVar10 = (longlong *)0x0;
LAB_140c07800:
  lVar9 = plVar10[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar9 = plVar10[0x1f];
    if (lVar9 != 0) goto LAB_140c07824;
  }
  else {
LAB_140c07824:
    lVar6 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140c0785c;
  }
  lVar9 = 0;
LAB_140c0785c:
  if (((param_2 != 0) && (lVar9 != 0)) && (*(char *)(lVar9 + 0x4e1) != '\0')) {
    uVar4 = FUN_1409ac010(lVar9);
    uVar7 = FUN_140bb7220(param_2);
    FUN_140d6c860(uVar7,param_3,uVar4);
  }
  plVar10 = *(longlong **)(param_3 + 8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar10 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return;
}



// FUNCTION 140c078e0 FUN_140c078e0 body=321 status=ok
// SIG undefined FUN_140c078e0(void)

void FUN_140c078e0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  
  plVar9 = *(longlong **)(param_1 + 0x10);
  if (plVar9 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_142f71d80();
    plVar7 = plVar9;
    do {
      plVar10 = plVar9;
      if (plVar7 == plVar5) goto LAB_140c07921;
      plVar7 = (longlong *)plVar7[6];
    } while (plVar7 != (longlong *)0x0);
  }
  plVar10 = (longlong *)0x0;
LAB_140c07921:
  lVar11 = plVar10[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar11 = plVar10[0x1f];
    if (lVar11 != 0) goto LAB_140c07945;
  }
  else {
LAB_140c07945:
    lVar6 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140c07982;
  }
  lVar11 = 0;
LAB_140c07982:
  if ((param_2 != 0) && (plVar9 != (longlong *)0x0)) {
    plVar7 = (longlong *)FUN_142f71d80();
    do {
      if (plVar9 == plVar7) {
        if ((lVar11 != 0) && (*(char *)(lVar11 + 0x4e1) != '\0')) {
          uVar4 = FUN_1409ac010(lVar11);
          uVar8 = FUN_140bb7220(param_2);
          FUN_140d6ca60(uVar8,param_3,uVar4);
        }
        break;
      }
      plVar9 = (longlong *)plVar9[6];
    } while (plVar9 != (longlong *)0x0);
  }
  plVar9 = *(longlong **)(param_3 + 8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar9 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 140c07a30 FUN_140c07a30 body=639 status=ok
// SIG undefined FUN_140c07a30(void)

void FUN_140c07a30(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong local_38;
  int local_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (param_2 != (longlong *)0x0) {
    plVar6 = (longlong *)FUN_142f71d80();
    plVar10 = param_2;
    while (plVar10 != plVar6) {
      plVar10 = (longlong *)plVar10[6];
      if (plVar10 == (longlong *)0x0) {
        return;
      }
    }
    plVar6 = (longlong *)FUN_142f71d80();
    plVar10 = param_2;
    do {
      if (plVar10 == plVar6) goto LAB_140c07a87;
      plVar10 = (longlong *)plVar10[6];
    } while (plVar10 != (longlong *)0x0);
    param_2 = (longlong *)0x0;
LAB_140c07a87:
    plVar10 = (longlong *)param_2[0x1f];
    if (plVar10 == (longlong *)0x0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      plVar10 = (longlong *)param_2[0x1f];
      if (plVar10 == (longlong *)0x0) {
        return;
      }
    }
    lVar7 = FUN_141437870();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) && (lVar7 = (**(code **)(*param_1 + 0x148))(param_1), lVar7 != 0)) &&
       (lVar7 = *(longlong *)(lVar7 + 400), lVar7 != 0)) {
      lVar8 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
        UWorld::GetPlayerControllerIterator(uVar9,&local_38);
        while( true ) {
          if ((local_30 < 0) || (*(int *)(local_38 + 8) <= local_30)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) break;
          plVar6 = (longlong *)FWeakObjectPtr::Get();
          if (plVar6 != (longlong *)0x0) {
            lVar8 = FUN_14145f370();
            if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              if (((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) == 0) ||
                 (cVar5 = (**(code **)(*plVar6 + 0x768))(), cVar5 == '\0')) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                FUN_142dcf3a0(plVar6,&local_28);
                if (local_28 != 0) {
                  local_18 = local_28;
                  plStack_10 = plStack_20;
                  if (plStack_20 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
                    UNLOCK();
                  }
                  (**(code **)(*plVar10 + 0x280))(plVar10,lVar7,&local_18);
                }
                plVar6 = plStack_20;
                if (plStack_20 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_20 + 1;
                  lVar8 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar8 == 1) {
                    (**(code **)*plStack_20)();
                    LOCK();
                    piVar2 = (int *)((longlong)plVar6 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*plVar6 + 8))(plVar6,1);
                    }
                  }
                }
              }
            }
          }
          local_30 = local_30 + 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 140c07cb0 FUN_140c07cb0 body=236 status=ok
// SIG undefined FUN_140c07cb0(void)

int FUN_140c07cb0(longlong param_1,undefined8 param_2,float param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar1 == 0) {
    return 0;
  }
  fVar5 = (float)FUN_142c98860(param_1 + 0x58,param_2);
  if (*(char *)(param_1 + 0x90) != '\0') goto LAB_140c07d7e;
  lVar3 = FUN_1405ec200(param_1 + 0x30);
  if (lVar3 == 0) {
LAB_140c07d59:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_1430228e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140c07d59;
  }
  if (lVar3 == *(longlong *)(lVar1 + 0x2c0)) {
    fVar6 = (float)FUN_142c98860(lVar1 + 0x480,param_2);
    fVar5 = fVar6 * fVar5 * param_3;
  }
LAB_140c07d7e:
  return (int)fVar5;
}



// FUNCTION 140c07da0 FUN_140c07da0 body=291 status=ok
// SIG undefined FUN_140c07da0(void)

int FUN_140c07da0(longlong param_1,longlong param_2,int param_3,int param_4,float *param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  if (param_2 != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 200);
    if (lVar1 != 0) {
      iVar2 = FUN_140a32ac0(lVar1,param_4 + 1);
      iVar3 = FUN_140a32ac0(lVar1,param_4);
      fVar5 = (float)FUN_142c98860(param_1 + 0x98,param_2);
      iVar2 = (int)((float)(iVar2 - iVar3) * fVar5);
      if ((param_3 != param_4) && (iVar2 != 0)) {
        iVar3 = FUN_140a32ac0(lVar1,param_3 + 1);
        iVar4 = FUN_140a32ac0(lVar1,param_3);
        iVar3 = (int)((float)(iVar3 - iVar4) * fVar5);
        if (iVar3 == 0) {
          return iVar2;
        }
        *param_5 = (float)iVar2 / (float)iVar3;
        return iVar2;
      }
      *param_5 = 1.0;
      return iVar2;
    }
  }
  return 0;
}



// FUNCTION 140c07ed0 FUN_140c07ed0 body=45 status=ok
// SIG undefined FUN_140c07ed0(void)

void FUN_140c07ed0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140bffd00(param_1,&local_18);
  return;
}



// FUNCTION 140c07f00 FUN_140c07f00 body=45 status=ok
// SIG undefined FUN_140c07f00(void)

void FUN_140c07f00(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140bffdf0(param_1,&local_18);
  return;
}



// FUNCTION 140c07f30 FUN_140c07f30 body=45 status=ok
// SIG undefined FUN_140c07f30(void)

void FUN_140c07f30(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140c00200(param_1,&local_18);
  return;
}



// FUNCTION 140c07f60 FUN_140c07f60 body=45 status=ok
// SIG undefined FUN_140c07f60(void)

void FUN_140c07f60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140c00420(param_1,&local_18);
  return;
}



// FUNCTION 140c07f90 FUN_140c07f90 body=45 status=ok
// SIG undefined FUN_140c07f90(void)

void FUN_140c07f90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140c00590(param_1,&local_18);
  return;
}



// FUNCTION 140c07fc0 FUN_140c07fc0 body=45 status=ok
// SIG undefined FUN_140c07fc0(void)

void FUN_140c07fc0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140c00710(param_1,&local_18);
  return;
}



// FUNCTION 140c07ff0 FUN_140c07ff0 body=45 status=ok
// SIG undefined FUN_140c07ff0(void)

void FUN_140c07ff0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140c00ac0(param_1,&local_18);
  return;
}



// FUNCTION 140c08020 FUN_140c08020 body=45 status=ok
// SIG undefined FUN_140c08020(void)

void FUN_140c08020(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140c00bb0(param_1,&local_18);
  return;
}



// FUNCTION 140c08060 FUN_140c08060 body=45 status=ok
// SIG undefined FUN_140c08060(void)

void FUN_140c08060(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140c029c0(param_1,&local_18);
  return;
}



// FUNCTION 140c08090 FUN_140c08090 body=45 status=ok
// SIG undefined FUN_140c08090(void)

void FUN_140c08090(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_140c02b20(param_1,&local_18);
  return;
}



// FUNCTION 140c080c0 FUN_140c080c0 body=136 status=ok
// SIG undefined FUN_140c080c0(void)

void FUN_140c080c0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar4 = (longlong *)param_2[1];
  uVar5 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_18 = 0;
  local_10 = 0;
  (**(code **)(**(longlong **)*param_1 + 0x38))(*(longlong **)*param_1,uVar5,param_1[1],&local_18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 140c08160 FUN_140c08160 body=185 status=ok
// SIG undefined FUN_140c08160(void)

bool FUN_140c08160(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar3 = FUN_142f53fb0();
  if (cVar3 == '\0') {
    return false;
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar4 != 0) && (lVar1 = *(longlong *)(lVar4 + 400), lVar1 != 0)) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = FUN_140bca6d0(lVar1,lVar4);
      return cVar3 == '\0';
    }
  }
  return (bool)cVar3;
}



// FUNCTION 140c08220 FUN_140c08220 body=199 status=ok
// SIG undefined FUN_140c08220(void)

undefined8 FUN_140c08220(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = (**(code **)(*param_2 + 0x670))(param_2);
      if (lVar3 != 0) {
        lVar4 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar3 = ATTLCharacterCommon::GetCurrentSupportWeapon(lVar3);
          if (lVar3 == 0) {
            cVar2 = FUN_140e26fd0(param_2,0);
            if (cVar2 == '\0') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140c082f0 FUN_140c082f0 body=1100 status=ok
// SIG undefined FUN_140c082f0(void)

ulonglong FUN_140c082f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  char local_res8 [8];
  undefined1 local_res18 [8];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 != 0) {
    UWorld::GetPlayerControllerIterator(lVar7,&local_68);
    do {
      if ((local_60 < 0) || (bVar4 = true, *(int *)(local_68 + 8) <= local_60)) {
        bVar4 = false;
      }
      if (!bVar4) break;
      lVar7 = FWeakObjectPtr::Get();
      if (lVar7 != 0) {
        lVar8 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          uVar9 = ATTLCharacterCommon::GetCurrentSupportWeapon();
          if (uVar9 != 0) goto LAB_140c0871c;
          lVar8 = *(longlong *)(lVar7 + 0x848);
          if (lVar8 != 0) {
            lVar10 = FUN_1413ffe00();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              uVar5 = 0;
              if ((param_2 != 0) && (uVar5 = 0, param_2 != lVar7)) {
                uVar5 = 1;
              }
              uVar9 = FUN_140e26fd0(lVar8,uVar5);
              local_res8[0] = (char)uVar9;
              if (local_res8[0] != '\0') goto LAB_140c08429;
            }
          }
        }
      }
      local_60 = local_60 + 1;
    } while( true );
  }
  lVar7 = param_1[0x97];
  if (lVar7 != 0) {
    lVar8 = FUN_141424d10();
    iVar3 = *(int *)(lVar8 + 0x90);
    uVar9 = (longlong)iVar3;
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < iVar3) ||
       (uVar9 = *(ulonglong *)(*(longlong *)(lVar7 + 0x10) + 0x88),
       *(longlong *)(uVar9 + (longlong)iVar3 * 8) != lVar8 + 0x88)) {
      uVar9 = uVar9 & 0xffffffffffffff00;
    }
    else {
      uVar9 = 1;
    }
    if ((char)uVar9 != '\0') {
      if (*(char *)(lVar7 + 0xa11) != '\0') {
LAB_140c085eb:
        if (param_2 != 0) {
          lVar7 = FUN_14145f370();
          iVar3 = *(int *)(lVar7 + 0x90);
          uVar9 = (longlong)iVar3;
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar3) ||
             (uVar9 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
             *(longlong *)(uVar9 + (longlong)iVar3 * 8) != lVar7 + 0x88)) {
            uVar9 = uVar9 & 0xffffffffffffff00;
          }
          else {
            uVar9 = 1;
          }
          if (((char)uVar9 != '\0') && (lVar7 = *(longlong *)(param_2 + 0x1428), lVar7 != 0)) {
            FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_30,L"Travel Canceled.",L"TravelStationErrorMessage",
                       L"CannotTravelTitle");
            FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"Travel canceled, another player is joining!",
                       L"TravelStationErrorMessage",L"CannotTravelReasonOtherPlayerJoining");
            uVar11 = FUN_1404b03b0();
            uVar9 = FUN_1411db820(lVar7,local_res18,local_30,uVar11,local_48,0x40a00000);
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_40 + 1;
              lVar7 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              uVar6 = (int)lVar7 - 1;
              uVar9 = (ulonglong)uVar6;
              if (uVar6 == 0) {
                (**(code **)*local_40)(local_40);
                LOCK();
                piVar2 = (int *)((longlong)local_40 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                uVar9 = (ulonglong)(iVar3 - 1U);
                if (iVar3 - 1U == 0) {
                  uVar9 = (**(code **)(*local_40 + 8))(local_40,1);
                }
              }
            }
            if (local_28 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_28 + 1;
              lVar7 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              uVar6 = (int)lVar7 - 1;
              uVar9 = (ulonglong)uVar6;
              if (uVar6 == 0) {
                uVar9 = (**(code **)*local_28)(local_28);
                LOCK();
                piVar2 = (int *)((longlong)local_28 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  uVar9 = (**(code **)(*local_28 + 8))(local_28,1);
                }
              }
            }
          }
        }
        goto LAB_140c0871c;
      }
      lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar7 != 0) {
        UWorld::GetPlayerControllerIterator(lVar7,&local_58);
        do {
          if ((local_50 < 0) || (*(int *)(local_58 + 8) <= local_50)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) {
            return 1;
          }
          lVar7 = FWeakObjectPtr::Get();
          if (lVar7 != 0) {
            lVar8 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((bVar4) &&
               (uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x6c8),
               *(ushort *)(lVar7 + 0x6ca) < *(ushort *)(lVar7 + 0x6c8))) goto LAB_140c085eb;
          }
          local_50 = local_50 + 1;
        } while( true );
      }
    }
  }
  return 1;
LAB_140c08429:
  if (param_2 != 0) {
    lVar7 = FUN_14145f370();
    iVar3 = *(int *)(lVar7 + 0x90);
    uVar9 = (longlong)iVar3;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar3) ||
       (uVar9 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar9 + (longlong)iVar3 * 8) != lVar7 + 0x88)) {
      uVar9 = uVar9 & 0xffffffffffffff00;
    }
    else {
      uVar9 = 1;
    }
    if (((char)uVar9 != '\0') && (*(longlong **)(lVar8 + 0x2c70) != (longlong *)0x0)) {
      lVar7 = (**(code **)(**(longlong **)(lVar8 + 0x2c70) + 0x680))();
      uVar9 = 0;
      if (lVar7 != 0) {
        lVar8 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(ulonglong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88U)) {
          uVar9 = lVar8 + 0x88U & 0xffffffffffffff00;
        }
        else {
          uVar9 = 1;
        }
        if ((char)uVar9 != '\0') {
          uVar9 = FUN_14145db50(param_2,local_res8,lVar7);
          return uVar9 & 0xffffffffffffff00;
        }
      }
    }
  }
LAB_140c0871c:
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 140c08740 FUN_140c08740 body=1855 status=ok
// SIG undefined FUN_140c08740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140c08740(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188 [3];
  int local_170;
  undefined4 *local_168;
  undefined4 *puStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  longlong local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  longlong local_120 [2];
  undefined1 local_110 [16];
  longlong local_100;
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if ((lVar7 != 0) && (param_2 != (longlong *)0x0)) {
    puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x288))(param_2,local_120);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar8;
    }
    uVar9 = FName::FName(local_138,puVar15,1);
    uVar10 = thunk_FUN_1422ca050();
    cVar5 = FUN_140a0b540(uVar10,uVar9);
    if (local_120[0] != 0) {
      FMemory::Free();
    }
    if (cVar5 == '\0') {
      return 0;
    }
    cVar5 = (**(code **)(*param_2 + 0x2a8))(param_2);
    if (cVar5 == '\0') {
      UWorld::GetPlayerControllerIterator(lVar7,local_188 + 2);
      do {
        if ((local_170 < 0) || (*(int *)(local_188[2] + 8) <= local_170)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) {
          return 1;
        }
        plVar11 = (longlong *)FWeakObjectPtr::Get();
        if (plVar11 != (longlong *)0x0) {
          lVar7 = FUN_14145f370();
          if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (plVar3 = (longlong *)plVar11[0x109], plVar3 != (longlong *)0x0)) {
            lVar7 = FUN_1413ffe00();
            if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                lVar7 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if ((bVar6) &&
               ((lVar7 = (**(code **)(*plVar11 + 0x690))(plVar11), lVar7 != 0 ||
                (lVar7 = (**(code **)(*plVar3 + 0x690))(), lVar7 != 0)))) {
              if (param_3 != 0) {
                lVar7 = FUN_14145f370();
                if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (((bVar6) && (lVar7 = *(longlong *)(param_3 + 0x1428), lVar7 != 0)) &&
                   (plVar3[0x58e] != 0)) {
                  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_e8,L"Travel Canceled.",L"TravelStationErrorMessage",
                             L"CannotTravelTitle");
                  local_188[0] = 0;
                  local_188[1] = 0;
                  lVar12 = FUN_1422312c0(param_1);
                  if (lVar12 != 0) {
                    lVar13 = FUN_14141f270();
                    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = true;
                    }
                    if (((bVar6) && ((longlong *)plVar3[0x58e] != (longlong *)0x0)) &&
                       (lVar13 = (**(code **)(*(longlong *)plVar3[0x58e] + 0x680))(), lVar13 != 0))
                    {
                      lVar14 = UInputKeySelector::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                        bVar6 = false;
                      }
                      else {
                        bVar6 = true;
                      }
                      if (bVar6) {
                        uStack_1a0 = *(longlong **)(lVar13 + 0x4c0);
                        local_1a8 = *(longlong **)(lVar13 + 0x4b8);
                        if (uStack_1a0 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(uStack_1a0 + 1) = (int)uStack_1a0[1] + 1;
                          UNLOCK();
                        }
                        if (local_1a8 != (longlong *)0x0) {
                          puVar8 = (undefined8 *)(**(code **)(*local_1a8 + 8))(local_1a8,local_130);
                          cVar5 = FUN_140bcac80(lVar12,*puVar8);
                          plVar3 = uStack_1a0;
                          plVar11 = uStack_1a0;
                          if (cVar5 == '\0') {
                            plVar4 = *(longlong **)(lVar13 + 0x538);
                            plVar11 = *(longlong **)(lVar13 + 0x540);
                            if (plVar11 != (longlong *)0x0) {
                              LOCK();
                              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                              UNLOCK();
                            }
                            local_198._0_4_ = SUB84(plVar4,0);
                            local_48 = (undefined4)local_198;
                            local_198._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
                            uStack_44 = local_198._4_4_;
                            uStack_190._0_4_ = SUB84(plVar11,0);
                            uStack_40 = (undefined4)uStack_190;
                            uStack_190._4_4_ = (undefined4)((ulonglong)plVar11 >> 0x20);
                            uStack_3c = uStack_190._4_4_;
                            local_198 = local_1a8;
                            uStack_190 = uStack_1a0;
                            local_1a8 = plVar4;
                            if (uStack_1a0 != (longlong *)0x0) {
                              LOCK();
                              plVar4 = uStack_1a0 + 1;
                              lVar13 = *plVar4;
                              *(int *)plVar4 = (int)*plVar4 + -1;
                              UNLOCK();
                              if ((int)lVar13 == 1) {
                                puVar8 = (undefined8 *)*uStack_1a0;
                                uStack_1a0 = plVar11;
                                (*(code *)*puVar8)(plVar3);
                                LOCK();
                                piVar1 = (int *)((longlong)plVar3 + 0xc);
                                iVar2 = *piVar1;
                                *piVar1 = *piVar1 + -1;
                                UNLOCK();
                                plVar11 = uStack_1a0;
                                if (iVar2 == 1) {
                                  (**(code **)(*uStack_190 + 8))(uStack_190,1);
                                  plVar11 = uStack_1a0;
                                }
                              }
                            }
                          }
                          uStack_1a0 = plVar11;
                          if (local_1a8 != (longlong *)0x0) {
                            local_158 = (undefined4)local_1a8;
                            uStack_154 = local_1a8._4_4_;
                            uStack_150 = (undefined4)uStack_1a0;
                            uStack_14c = uStack_1a0._4_4_;
                            if (uStack_1a0 != (longlong *)0x0) {
                              LOCK();
                              *(int *)(uStack_1a0 + 1) = (int)uStack_1a0[1] + 1;
                              UNLOCK();
                            }
                            local_1b8 = local_188;
                            cVar5 = FUN_140d79f00(*(undefined8 *)(lVar12 + 0x478),&local_158,1,0);
                            plVar11 = (longlong *)CONCAT44(uStack_14c,uStack_150);
                            if (plVar11 != (longlong *)0x0) {
                              LOCK();
                              plVar3 = plVar11 + 1;
                              lVar12 = *plVar3;
                              *(int *)plVar3 = (int)*plVar3 + -1;
                              UNLOCK();
                              if ((int)lVar12 == 1) {
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
                            if (cVar5 != '\0') {
                              lVar12 = FText::FromString(local_90,local_188);
                              uVar9 = FInternationalization::
                                      ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                                (local_b8,L"Travel canceled, {0} is in a vehicle!",
                                                 L"TravelStationErrorMessage",
                                                 L"CannotTravelReasonAllyInAVehicle");
                              puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_a0,uVar9);
                              local_78[0] = 4;
                              FText::FText(local_68,lVar12);
                              local_148 = *puVar8;
                              local_168 = local_78;
                              puStack_160 = &local_48;
                              local_140 = puVar8[1];
                              local_50 = '\x01';
                              if (local_140 != 0) {
                                LOCK();
                                *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
                                UNLOCK();
                              }
                              uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                                      TArray<FFormatArgumentValue,FDefaultAllocator>
                                                (local_110,&local_168);
                              uVar9 = FText::Format(local_d0,&local_148,uVar9);
                              FText::FText(&local_100,uVar9);
                              if (local_c8 != (longlong *)0x0) {
                                LOCK();
                                plVar11 = local_c8 + 1;
                                lVar13 = *plVar11;
                                *(int *)plVar11 = (int)*plVar11 + -1;
                                UNLOCK();
                                if ((int)lVar13 == 1) {
                                  (**(code **)*local_c8)(local_c8);
                                  LOCK();
                                  piVar1 = (int *)((longlong)local_c8 + 0xc);
                                  iVar2 = *piVar1;
                                  *piVar1 = *piVar1 + -1;
                                  UNLOCK();
                                  if (iVar2 == 1) {
                                    (**(code **)(*local_c8 + 8))(local_c8,1);
                                  }
                                }
                              }
                              TArray<FFormatArgumentValue,FDefaultAllocator>::
                              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_110);
                              if ((local_50 != '\0') &&
                                 (local_50 = '\0', local_60 != (longlong *)0x0)) {
                                LOCK();
                                plVar11 = local_60 + 1;
                                lVar13 = *plVar11;
                                *(int *)plVar11 = (int)*plVar11 + -1;
                                UNLOCK();
                                if ((int)lVar13 == 1) {
                                  (**(code **)*local_60)(local_60);
                                  LOCK();
                                  piVar1 = (int *)((longlong)local_60 + 0xc);
                                  iVar2 = *piVar1;
                                  *piVar1 = *piVar1 + -1;
                                  UNLOCK();
                                  if (iVar2 == 1) {
                                    (**(code **)(*local_60 + 8))(local_60,1);
                                  }
                                }
                              }
                              plVar11 = (longlong *)puVar8[1];
                              if (plVar11 != (longlong *)0x0) {
                                LOCK();
                                plVar3 = plVar11 + 1;
                                lVar13 = *plVar3;
                                *(int *)plVar3 = (int)*plVar3 + -1;
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
                              plVar11 = *(longlong **)(lVar12 + 8);
                              if (plVar11 != (longlong *)0x0) {
                                LOCK();
                                plVar3 = plVar11 + 1;
                                lVar12 = *plVar3;
                                *(int *)plVar3 = (int)*plVar3 + -1;
                                UNLOCK();
                                if ((int)lVar12 == 1) {
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
                              if (local_b0 != (longlong *)0x0) {
                                LOCK();
                                plVar11 = local_b0 + 1;
                                lVar12 = *plVar11;
                                *(int *)plVar11 = (int)*plVar11 + -1;
                                UNLOCK();
                                if ((int)lVar12 == 1) {
                                  (**(code **)*local_b0)(local_b0);
                                  LOCK();
                                  piVar1 = (int *)((longlong)local_b0 + 0xc);
                                  iVar2 = *piVar1;
                                  *piVar1 = *piVar1 + -1;
                                  UNLOCK();
                                  if (iVar2 == 1) {
                                    (**(code **)(*local_b0 + 8))(local_b0,1);
                                  }
                                }
                              }
                              uVar9 = FUN_1404b03b0();
                              local_1b0 = 0x40a00000;
                              local_1b8 = &local_100;
                              FUN_1411db820(lVar7,local_128,local_e8,uVar9);
                              if (local_f8 != (longlong *)0x0) {
                                LOCK();
                                plVar11 = local_f8 + 1;
                                lVar7 = *plVar11;
                                *(int *)plVar11 = (int)*plVar11 + -1;
                                UNLOCK();
                                if ((int)lVar7 == 1) {
                                  (**(code **)*local_f8)(local_f8);
                                  LOCK();
                                  piVar1 = (int *)((longlong)local_f8 + 0xc);
                                  iVar2 = *piVar1;
                                  *piVar1 = *piVar1 + -1;
                                  UNLOCK();
                                  if (iVar2 == 1) {
                                    (**(code **)(*local_f8 + 8))(local_f8,1);
                                  }
                                }
                              }
                            }
                          }
                        }
                        plVar11 = uStack_1a0;
                        if (uStack_1a0 != (longlong *)0x0) {
                          LOCK();
                          plVar3 = uStack_1a0 + 1;
                          lVar7 = *plVar3;
                          *(int *)plVar3 = (int)*plVar3 + -1;
                          UNLOCK();
                          if ((int)lVar7 == 1) {
                            (**(code **)*uStack_1a0)(uStack_1a0);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar11 + 0xc);
                            iVar2 = *piVar1;
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (iVar2 == 1) {
                              (**(code **)(*uStack_1a0 + 8))(uStack_1a0,1);
                            }
                          }
                        }
                      }
                    }
                  }
                  if (local_188[0] != 0) {
                    FMemory::Free();
                  }
                  if (local_e0 != (longlong *)0x0) {
                    LOCK();
                    plVar11 = local_e0 + 1;
                    lVar7 = *plVar11;
                    *(int *)plVar11 = (int)*plVar11 + -1;
                    UNLOCK();
                    if ((int)lVar7 == 1) {
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
              }
              return 0;
            }
          }
        }
        local_170 = local_170 + 1;
      } while( true );
    }
  }
  return 1;
}



// FUNCTION 140c08e80 FUN_140c08e80 body=79 status=ok
// SIG undefined FUN_140c08e80(void)

undefined1 FUN_140c08e80(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = UCableComponent::GetAttachedActor();
  if (lVar2 != 0) {
    lVar2 = FUN_1407cb650(lVar2);
    if (lVar2 != 0) {
      cVar1 = FUN_1407cd080(lVar2);
      if (cVar1 != '\0') {
        cVar1 = FUN_142f63b20(param_1 + 0x760,param_1);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140c08ed0 FUN_140c08ed0 body=1212 status=ok
// SIG undefined FUN_140c08ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c08ed0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_178;
  undefined4 local_174 [3];
  longlong local_168;
  longlong *plStack_160;
  longlong *local_158;
  longlong local_148;
  longlong *plStack_140;
  longlong *local_138 [4];
  longlong *local_118 [4];
  undefined8 local_f8 [4];
  undefined8 local_d8 [4];
  undefined8 local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [56];
  
  if ((param_2 != 0) &&
     (local_res18 = param_3, local_res20 = param_4,
     plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x58c), plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) &&
        (local_158 = plVar6, cVar5 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar5 != '\0')) &&
       (lVar7 = plVar6[0x109], lVar7 != 0)) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (plVar3 = *(longlong **)(lVar7 + 0x10d8), plVar3 != (longlong *)0x0)) {
        local_res10[0] = 0;
        local_b8 = FUN_1414b0d60();
        plVar9 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,local_b8);
        if (plVar9 != (longlong *)0x0) {
          local_res10[0] = (**(code **)(*plVar9 + 0x468))(plVar9);
        }
        if ((DAT_14686b150 == '\0') &&
           (puVar10 = (undefined8 *)FUN_140c123a0(), puVar10 != &DAT_14686b100)) {
          DAT_14686b100 = *puVar10;
          _DAT_14686b108 = puVar10[1];
          _DAT_14686b110 = puVar10[2];
          _DAT_14686b118 = puVar10[3];
          _DAT_14686b120 = puVar10[4];
          _DAT_14686b128 = puVar10[5];
          _DAT_14686b130 = puVar10[6];
          _DAT_14686b138 = puVar10[7];
          _DAT_14686b140 = puVar10[8];
          _DAT_14686b148 = puVar10[9];
          DAT_14686b150 = '\x01';
        }
        cVar5 = FUN_142190080(DAT_14686b100);
        if ((cVar5 != '\0') && (cVar5 = FUN_142194620(DAT_14686b100), cVar5 != '\0')) {
          FUN_142190c70(&local_168,DAT_14686b100,L"CharacterAugmentSlotted");
          lVar7 = *(longlong *)(local_168 + 0xc0);
          if (*(longlong *)(local_168 + 0xc0) == 0) {
            lVar7 = local_168 + 0x20;
          }
          uVar11 = FUN_140aa2bd0(lVar7);
          FUN_14217e740(local_138);
          FUN_142194380(local_138,0x28,0,0,0);
          plVar9 = local_158;
          local_138[0] = local_158;
          FUN_1421923f0(local_b0,DAT_14686add8,local_138);
          FUN_140bfb300(uVar11,&DAT_14686b108,local_b0);
          FUN_14217f430(local_b0);
          FUN_14217f430(local_138);
          FUN_14217e740(local_118);
          FUN_142194380(local_118,0x28,0,0,0);
          local_118[0] = plVar9;
          FUN_1421923f0(local_90,DAT_14686ade0,local_118);
          FUN_140bfb300(uVar11,&DAT_14686b110,local_90);
          FUN_14217f430(local_90);
          FUN_14217f430(local_118);
          local_178 = (**(code **)(*plVar3 + 0x408))(plVar3);
          FUN_140bfa9d0(uVar11,&DAT_14686b118,&local_178);
          FUN_140bfa9d0(uVar11,&DAT_14686b120,local_res10);
          local_174[0] = FUN_140d00180(plVar6);
          FUN_140bfadf0(uVar11,&DAT_14686b128,local_174);
          FUN_14217e740(local_f8);
          FUN_142194380(local_f8,0x28,0,0,0);
          local_f8[0] = local_res18;
          FUN_1421923f0(local_70,DAT_14686adb8,local_f8);
          FUN_140bfb300(uVar11,&DAT_14686b140,local_70);
          FUN_14217f430(local_70);
          FUN_14217f430(local_f8);
          FUN_14217e740(local_d8);
          FUN_142194380(local_d8,0x28,0,0,0);
          local_d8[0] = local_res20;
          FUN_1421923f0(local_50,DAT_14686adb8,local_d8);
          FUN_140bfb300(uVar11,&DAT_14686b148,local_50);
          FUN_14217f430(local_50);
          FUN_14217f430(local_d8);
          cVar5 = FUN_14218a740(&local_168,1);
          if (cVar5 != '\0') {
            local_148 = local_168;
            plStack_140 = plStack_160;
            if (plStack_160 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_148);
            plVar6 = plStack_140;
            if (plStack_140 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_140 + 1;
              lVar7 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_140)(plStack_140);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
          }
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_160 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_160)(plStack_160);
              LOCK();
              piVar1 = (int *)((longlong)plStack_160 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plStack_160 + 8))(plStack_160,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c09390 FUN_140c09390 body=723 status=ok
// SIG undefined FUN_140c09390(void)

void FUN_140c09390(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  longlong local_res8;
  longlong *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((char)param_1[0x10a] == '\0') {
    uVar6 = (**(code **)(*param_1 + 0x148))();
    plVar7 = (longlong *)FUN_142f6c9f0(uVar6);
    if ((plVar7 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar7 + 0x700))(plVar7), cVar3 != '\0')) {
      local_res8 = param_1[0xe7];
      *(undefined1 *)(param_1 + 0x10a) = 1;
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar7 = (longlong *)FUN_142f6c9f0(uVar6);
      if ((plVar7 != (longlong *)0x0) &&
         ((cVar3 = (**(code **)(*plVar7 + 0x700))(plVar7), cVar3 != '\0' && (local_res8 != 0)))) {
        lVar8 = FUN_142f71d80();
        for (lVar9 = local_res8; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
          if (lVar9 == lVar8) {
            iVar5 = FUN_142f5c9d0(plVar7);
            uVar6 = FUN_142f5bb60(&local_res8);
            FUN_142dea370(uVar6,local_38);
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_30 + 1;
              lVar9 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_30)(local_30);
                LOCK();
                piVar1 = (int *)((longlong)local_30 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*local_30 + 8))(local_30,1);
                }
              }
            }
            if (iVar5 == 1) {
              (**(code **)(*param_1 + 0x6e8))(param_1);
              lVar9 = (**(code **)(*param_1 + 0x148))();
              if (lVar9 == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = *(longlong *)(lVar9 + 400);
              }
              if ((lVar8 != 0) && (lVar8 = FUN_1424503b0(), lVar8 != 0)) {
                lVar10 = FUN_14145f370();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (((((bVar2) && (*(char *)(lVar8 + 0x128) == '\x03')) && (param_1[0x100] != 0)) &&
                    ((lVar9 != 0 &&
                     (lVar8 = UWorld::GetAuthGameMode<ABaseGameMode>(lVar9), lVar8 != 0)))) &&
                   (lVar8 = FUN_142d84360(lVar8), lVar8 != 0)) {
                  UWorld::GetPlayerControllerIterator(lVar9,&local_48);
                  while( true ) {
                    if ((local_40 < 0) || ((int)local_48[1] <= local_40)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if (!bVar2) break;
                    lVar9 = FWeakObjectPtr::Get(*local_48 + (longlong)local_40 * 8);
                    if (lVar9 != 0) {
                      FUN_142de0f50(lVar8,lVar9,param_1[0x100],0);
                    }
                    local_40 = local_40 + 1;
                  }
                }
              }
              *(undefined1 *)((longlong)param_1 + 0x851) = 0;
              return;
            }
            break;
          }
        }
      }
      fVar11 = (float)FUN_142c98860(param_1 + 0x101,param_1);
      iVar4 = rand();
      iVar5 = 100;
      if ((int)((float)iVar4 * 0.0030823695) < 0x65) {
        iVar5 = (int)((float)iVar4 * 0.0030823695);
      }
      if (fVar11 < (float)iVar5) {
        (**(code **)(*param_1 + 0x6f0))(param_1);
      }
      else {
        (**(code **)(*param_1 + 0x6e8))();
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x108,0);
      }
    }
  }
  return;
}



// FUNCTION 140c09670 FUN_140c09670 body=539 status=ok
// SIG undefined FUN_140c09670(void)

void FUN_140c09670(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar2 = FUN_1407cde20();
  if ((cVar2 != '\x01') && (param_1[0x100] != 0)) {
    lVar4 = FUN_142f71d80();
    lVar6 = param_1[0x100];
    lVar5 = lVar6;
    if (lVar6 != 0) {
      while (lVar5 != lVar4) {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        if (lVar5 == 0) {
          return;
        }
      }
      if (((lVar6 != 0) && (param_1[0x101] != 0)) && (iVar3 = FUN_140c14680(param_1), iVar3 != 1)) {
        plVar9 = (longlong *)param_1[0x102];
        plVar7 = plVar9 + (int)param_1[0x103];
        for (; plVar9 != plVar7; plVar9 = plVar9 + 1) {
          if (*plVar9 != 0) {
            lVar5 = FUN_142f71d80();
            for (lVar6 = *plVar9; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
              if (lVar6 == lVar5) {
                if ((*plVar9 != 0) && (iVar3 = FUN_140c14680(param_1), iVar3 != 2)) {
                  return;
                }
                break;
              }
            }
          }
        }
        lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar6 != 0) {
          UWorld::GetPlayerControllerIterator(lVar6,&local_38);
          do {
            if (local_30 < 0) {
              return;
            }
            if ((int)local_38[1] <= local_30) {
              return;
            }
            plVar7 = (longlong *)FWeakObjectPtr::Get(*local_38 + (longlong)local_30 * 8);
            if (((plVar7 != (longlong *)0x0) &&
                ((*(uint *)((longlong)plVar7 + 0x4cc) >> 1 & 1) != 0)) &&
               ((cVar2 = (**(code **)(*plVar7 + 0x768))(plVar7), cVar2 != '\0' &&
                ((char)plVar7[0x25] == '\x03')))) {
              uVar8 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
              lVar6 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar8);
              if ((lVar6 != 0) && (iVar3 = FUN_142dcff80(lVar6,param_1[0x101]), iVar3 != 0)) {
                uVar8 = FUN_142f5bb60(param_1 + 0x100);
                FUN_142dea370(uVar8,local_28);
                (**(code **)(*param_1 + 0x6e8))(param_1);
                if (local_20 == (longlong *)0x0) {
                  return;
                }
                LOCK();
                plVar7 = local_20 + 1;
                lVar6 = *plVar7;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)lVar6 != 1) {
                  return;
                }
                (**(code **)*local_20)(local_20);
                LOCK();
                piVar1 = (int *)((longlong)local_20 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 != 1) {
                  return;
                }
                (**(code **)(*local_20 + 8))(local_20,1);
                return;
              }
            }
            local_30 = local_30 + 1;
          } while( true );
        }
      }
    }
  }
  return;
}



// FUNCTION 140c09890 FUN_140c09890 body=735 status=ok
// SIG undefined FUN_140c09890(void)

void FUN_140c09890(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  
  cVar2 = '\0';
  if (param_1[0xcc] == 0) {
    cVar3 = FUN_142f63b20(param_1 + 0xcd,param_1);
    if (cVar3 == '\0') {
      cVar2 = (char)param_1[0xff];
    }
    else {
      uVar12 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar11 = FUN_142f6c9f0(uVar12);
      if ((lVar11 != 0) && (cVar3 = FUN_142f635c0(lVar11,param_1 + 0xcd,param_1), cVar3 != '\0')) {
        uVar12 = UBlindWidget::GetPrivateStaticClass();
        lVar7 = AGameStateBase::OnRep_GameModeClass(param_1,uVar12);
        if (lVar7 != 0) {
          lVar8 = UBlindWidget::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (*(char *)(lVar7 + 0x1a0) != '\0')) {
            uVar4 = (**(code **)(*(longlong *)(lVar7 + 0x178) + 0x50))(lVar7 + 0x178);
            if (uVar4 < 2) {
              iVar5 = FUN_142f5de00(lVar11,param_1 + 0xcd,*(undefined4 *)(lVar7 + 0x198),param_1);
              cVar2 = iVar5 == 1;
            }
            else {
              cVar2 = '\0';
              iVar5 = (**(code **)(*(longlong *)(lVar7 + 0x178) + 0x50))(lVar7 + 0x178);
              lVar8 = UCableComponent::GetAttachedActor(param_1);
              if (lVar8 != 0) {
                uVar13 = 0;
                uVar4 = 1;
                uVar15 = uVar13;
                do {
                  iVar14 = (int)uVar15;
                  if (iVar14 == iVar5) break;
                  if ((*(uint *)(lVar7 + 0x198) & uVar4) != 0) {
                    iVar6 = FUN_142f5de00(lVar11,param_1 + 0xcd,uVar4,param_1);
                    if (iVar6 == 1) {
                      cVar2 = '\x01';
                    }
                    else {
                      lVar9 = FUN_1407cb160(lVar8);
                      if (((longlong)uVar13 < 0) || (*(int *)(lVar9 + 8) <= iVar14)) {
                        bVar1 = false;
                      }
                      else {
                        bVar1 = true;
                      }
                      if ((bVar1) &&
                         (plVar10 = (longlong *)FUN_1407cb160(lVar8),
                         *(longlong *)(*plVar10 + uVar13 * 8) != 0)) {
                        UEngine::InitHardwareSurvey();
                      }
                    }
                    uVar15 = (ulonglong)(iVar14 + 1);
                    uVar13 = uVar13 + 1;
                  }
                  uVar4 = uVar4 * 2;
                } while (uVar4 != 0);
              }
            }
            goto LAB_140c09a91;
          }
        }
        cVar2 = '\x01';
      }
    }
  }
  else {
    cVar2 = FUN_142c48f90(param_1[0xcc],param_1,0);
  }
LAB_140c09a91:
  cVar3 = FUN_1407cde20(param_1);
  if (cVar2 != cVar3) {
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x6f0))(param_1);
    }
    else {
      (**(code **)(*param_1 + 0x6e8))();
      FUN_140c09d90(param_1);
    }
  }
  lVar11 = UCableComponent::GetAttachedActor(param_1);
  if ((((lVar11 == 0) || (lVar11 = FUN_1407cb650(lVar11), lVar11 == 0)) ||
      (cVar2 = FUN_1407cd080(lVar11), cVar2 == '\0')) ||
     (cVar2 = FUN_142f63b20(param_1 + 0xec,param_1), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar12 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar11 = FUN_142f6c9f0(uVar12);
    if (((lVar11 != 0) && (cVar2 = FUN_142f63720(lVar11,param_1 + 0xec,param_1), cVar2 != '\0')) &&
       ((lVar11 = UCableComponent::GetAttachedActor(param_1), lVar11 != 0 &&
        (lVar11 = FUN_1407cb650(lVar11), lVar11 != 0)))) {
      FUN_1407da800(lVar11);
    }
  }
  return;
}



// FUNCTION 140c09b70 FUN_140c09b70 body=540 status=ok
// SIG undefined FUN_140c09b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c09b70(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  fVar1 = DAT_146298d90;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((*(longlong *)(param_1 + 0x598) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x598) + 0x4a4) & 0x20) == 0)) {
    if (0.0 < *(float *)(param_1 + 0x5a0)) {
      local_a8 = FUN_140c09b70;
      uStack_a0 = 0;
      *(float *)(param_1 + 0x5a0) = *(float *)(param_1 + 0x5a0) - DAT_146298d90;
      uVar2 = AActor::GetWorldTimerManager();
      plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar3 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar4;
        *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_b0 = 0xbf800000;
      local_b8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar2,param_1 + 0x5a8,&local_98,fVar1);
      if (local_38 != 0) {
        plVar5 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar5 = local_48;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar4 = FMemory::Realloc(plVar3,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
    }
    else {
      FUN_140c216d0(0,0);
      (**(code **)(**(longlong **)(param_1 + 0x598) + 0x6d0))(*(longlong **)(param_1 + 0x598),0);
    }
  }
  return;
}



// FUNCTION 140c09d90 FUN_140c09d90 body=618 status=ok
// SIG undefined FUN_140c09d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c09d90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  longlong local_b8 [16];
  longlong *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar4 = UCableComponent::GetAttachedActor();
  if (lVar4 == 0) {
    return;
  }
  FUN_140c15c90(local_b8,lVar4);
  lVar7 = 0;
  plVar5 = local_b8;
  if (local_38 != (longlong *)0x0) {
    plVar5 = local_38;
  }
  plVar1 = plVar5 + local_30;
  for (; plVar8 = local_38, plVar5 != plVar1; plVar5 = plVar5 + 1) {
    if ((*plVar5 != 0) && (cVar3 = FUN_140eb29d0(), cVar3 != '\0')) {
      lVar10 = (longlong)(local_30 + -1);
      plVar8 = local_38;
      lVar9 = lVar7;
      if (-1 < local_30 + -1) goto LAB_140c09e60;
      goto LAB_140c09eb7;
    }
  }
  goto LAB_140c09fbc;
LAB_140c09e60:
  do {
    plVar5 = local_b8;
    if (plVar8 != (longlong *)0x0) {
      plVar5 = plVar8;
    }
    lVar2 = plVar5[lVar10];
    if (lVar9 == 0) {
      if (lVar2 != 0) {
        FUN_140ea56c0(lVar2);
        cVar3 = FUN_1407cd100(lVar2);
        plVar8 = local_38;
        if (cVar3 != '\0') {
          lVar9 = lVar2;
        }
      }
    }
    else {
      UEngine::InitHardwareSurvey(lVar2);
      plVar8 = local_38;
    }
    lVar10 = lVar10 + -1;
  } while (-1 < lVar10);
  if (lVar9 == 0) {
LAB_140c09eb7:
    if (local_30 < 1) goto LAB_140c09fbc;
    plVar5 = local_b8;
    if (plVar8 != (longlong *)0x0) {
      plVar5 = plVar8;
    }
    lVar9 = *plVar5;
    Z_Construct_UClass_AUGCharacter_Statics::NewProp_bCanFlinch_SetBit(lVar9);
    plVar8 = local_38;
    if (lVar9 == 0) goto LAB_140c09fbc;
  }
  if (lVar9 != param_1[0xf5]) {
    param_1[0xf5] = lVar9;
    local_c8 = *(undefined4 *)(lVar9 + 0x220);
    uStack_c4 = *(undefined4 *)(lVar9 + 0x224);
    local_c0 = *(undefined4 *)(lVar9 + 0x228);
    local_e8 = 1;
    local_d0 = CONCAT44(local_d0._4_4_,local_c0);
    FUN_1423990b0(lVar4,&local_c8,0,0);
    plVar8 = local_38;
    if ((param_1[0xea] != 0) && (cVar3 = FUN_142f62f00(), plVar8 = local_38, cVar3 != '\0')) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar4 = FUN_142f6c9f0(uVar6);
      plVar8 = local_38;
      if (lVar4 != 0) {
        lVar9 = param_1[0xea];
        local_d8 = lVar9;
        if (lVar9 != 0) {
          uVar6 = UBlendableInterface::GetPrivateStaticClass();
          lVar7 = UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar6);
        }
        local_d0 = lVar7;
        FUN_142f6e570(lVar4,&local_d8);
        plVar8 = local_38;
      }
    }
  }
LAB_140c09fbc:
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c0a000 FUN_140c0a000 body=1842 status=ok
// SIG undefined FUN_140c0a000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c0a000(longlong *param_1)

{
  float fVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  longlong *plVar20;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined4 local_1a0;
  int local_198;
  longlong *local_190;
  int local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined4 local_160;
  longlong local_158;
  undefined4 local_150;
  longlong *local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  longlong local_134;
  undefined4 local_12c;
  longlong local_128;
  undefined4 local_120;
  longlong local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 local_e0;
  undefined1 local_dc [20];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_190 = param_1;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar11 = *(longlong *)(DAT_146b33f38 + 0x58);
  if ((lVar11 != 0) && (lVar8 = UCableComponent::GetAttachedActor(param_1), lVar8 != 0)) {
    pcVar9 = (char *)FUN_1407cac10(lVar8);
    if (*pcVar9 == '\x02') {
      lVar10 = FUN_1407cb650(lVar8);
      if (lVar10 != 0) {
        local_188 = *(int *)(lVar11 + 0x4bc) * 0x3c;
        local_180 = lVar10;
        lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
        fVar1 = *(float *)(lVar11 + 0x790);
        local_148 = (longlong *)FUN_1407cb580(lVar8);
        iVar7 = (int)param_1[0xf4];
        local_198 = iVar7 + -1;
        plVar17 = param_1;
        if (-1 < local_198) {
          plVar18 = param_1 + 0xf3;
          local_170 = (longlong)local_198 << 4;
          local_178 = (longlong)iVar7 << 4;
          lVar11 = local_170;
          do {
            plVar14 = *(longlong **)(lVar10 + 0x70);
            plVar2 = *(longlong **)(lVar11 + *plVar18);
            plVar15 = plVar14 + (longlong)*(int *)(lVar10 + 0x78) * 0x15;
            for (; (plVar20 = (longlong *)0x0, plVar14 != plVar15 &&
                   (plVar20 = plVar14, (longlong *)*plVar14 != plVar2)); plVar14 = plVar14 + 0x15) {
            }
            if ((plVar2 == (longlong *)0x0) || (plVar20 == (longlong *)0x0)) {
              iVar7 = (int)param_1[0xf4];
              iVar19 = (iVar7 - local_198) + -1;
              if (iVar19 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*plVar18 + local_170),(void *)(*plVar18 + local_178),
                           (longlong)iVar19 << 4);
                iVar7 = (int)param_1[0xf4];
              }
              *(int *)(param_1 + 0xf4) = iVar7 + -1;
              TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar18);
              goto LAB_140c0a575;
            }
            uVar12 = AGFreezeCharacterCue::GetPrivateStaticClass();
            lVar8 = AGameStateBase::OnRep_GameModeClass(plVar2,uVar12);
            if (lVar8 == 0) {
LAB_140c0a4fa:
              iVar7 = (int)param_1[0xf4];
              iVar19 = (iVar7 - local_198) + -1;
              if (iVar19 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(local_170 + *plVar18),(void *)(local_178 + *plVar18),
                           (longlong)iVar19 << 4);
                iVar7 = (int)param_1[0xf4];
              }
              *(int *)(param_1 + 0xf4) = iVar7 + -1;
              TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar18);
              plVar17 = local_190;
            }
            else {
              lVar13 = AGFreezeCharacterCue::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) goto LAB_140c0a4fa;
              lVar13 = *plVar18;
              plVar17 = local_190;
              if (fVar1 - 10.0 < *(float *)(lVar8 + 0x790)) {
                *(int *)(lVar13 + 8 + lVar11) = local_188;
              }
              else {
                iVar19 = *(int *)(lVar11 + 8 + lVar13) + -10;
                iVar7 = 0;
                if (-1 < iVar19) {
                  iVar7 = iVar19;
                }
                *(int *)(lVar13 + 8 + lVar11) = iVar7;
                if ((*(int *)(*plVar18 + 8 + lVar11) < 1) &&
                   (lVar8 = FUN_14222e2a0(plVar2), plVar17 = local_190, lVar8 == 0)) {
                  uVar12 = UBlueprintGeneratedClass::GetPrivateStaticClass();
                  plVar17 = local_190;
                  plVar14 = (longlong *)AGameStateBase::OnRep_GameModeClass(local_190,uVar12);
                  if (plVar14 == (longlong *)0x0) {
LAB_140c0a33c:
                    iVar7 = (int)plVar20[2];
                    if ((iVar7 < 0) || ((int)local_148[1] <= iVar7)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    if ((bVar5) &&
                       (plVar14 = *(longlong **)(*local_148 + (longlong)iVar7 * 8),
                       plVar14 != (longlong *)0x0)) {
                      plVar17 = plVar14;
                    }
                    lVar8 = plVar17[0x2d];
                    if (lVar8 == 0) {
                      local_12c = DAT_1468b5d98;
                      plVar17 = &local_134;
                      local_134 = _DAT_1468b5d90;
                    }
                    else {
                      plVar17 = (longlong *)&local_140;
                      local_140 = *(undefined4 *)(lVar8 + 0x220);
                      local_138 = *(undefined4 *)(lVar8 + 0x228);
                      uStack_13c = *(undefined4 *)(lVar8 + 0x224);
                    }
                    local_158 = *plVar17;
                    lVar8 = plVar2[0x2d];
                    local_150 = (undefined4)plVar17[1];
                    if (lVar8 == 0) {
                      local_114 = DAT_1468b5da8;
                      plVar17 = &local_11c;
                      local_11c = DAT_1468b5da0;
                    }
                    else {
                      local_f8 = *(float *)(lVar8 + 0x210);
                      fStack_f4 = *(float *)(lVar8 + 0x214);
                      fStack_f0 = *(float *)(lVar8 + 0x218);
                      fStack_ec = *(float *)(lVar8 + 0x21c);
                      auVar4._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != fStack_f4);
                      auVar4._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != local_f8);
                      auVar4._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_f0);
                      auVar4._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_ec);
                      iVar7 = movmskps(local_150,auVar4);
                      if (iVar7 != 0) {
                        *(float *)(lVar8 + 0x250) = local_f8;
                        *(float *)(lVar8 + 0x254) = fStack_f4;
                        *(float *)(lVar8 + 600) = fStack_f0;
                        *(float *)(lVar8 + 0x25c) = fStack_ec;
                        puVar16 = (undefined8 *)FQuat::Rotator(&local_f8,&local_110);
                        *(undefined8 *)(lVar8 + 0x260) = *puVar16;
                        *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar16 + 1);
                      }
                      local_120 = *(undefined4 *)(lVar8 + 0x268);
                      plVar17 = &local_128;
                      local_128 = *(longlong *)(lVar8 + 0x260);
                    }
                    local_168 = *plVar17;
                    local_160 = (undefined4)plVar17[1];
                    plVar17 = local_190;
                    plVar14 = (longlong *)0x0;
                  }
                  else {
                    lVar8 = UBlueprintGeneratedClass::GetPrivateStaticClass();
                    if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
                        != lVar8 + 0x88)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    if (!bVar5) goto LAB_140c0a33c;
                    local_158 = plVar14[0x44];
                    local_150 = (undefined4)plVar14[0x45];
                    local_f8 = *(float *)(plVar14 + 0x42);
                    fStack_f4 = *(float *)((longlong)plVar14 + 0x214);
                    fStack_f0 = *(float *)(plVar14 + 0x43);
                    fStack_ec = *(float *)((longlong)plVar14 + 0x21c);
                    auVar3._4_4_ = -(uint)(*(float *)((longlong)plVar14 + 0x254) != fStack_f4);
                    auVar3._0_4_ = -(uint)(*(float *)(plVar14 + 0x4a) != local_f8);
                    auVar3._8_4_ = -(uint)(*(float *)(plVar14 + 0x4b) != fStack_f0);
                    auVar3._12_4_ = -(uint)(*(float *)((longlong)plVar14 + 0x25c) != fStack_ec);
                    iVar7 = movmskps(local_150,auVar3);
                    local_e0 = local_150;
                    if (iVar7 != 0) {
                      *(float *)(plVar14 + 0x4a) = local_f8;
                      *(float *)((longlong)plVar14 + 0x254) = fStack_f4;
                      *(float *)(plVar14 + 0x4b) = fStack_f0;
                      *(float *)((longlong)plVar14 + 0x25c) = fStack_ec;
                      plVar15 = (longlong *)FQuat::Rotator(&local_f8,local_dc);
                      plVar14[0x4c] = *plVar15;
                      *(int *)(plVar14 + 0x4d) = (int)plVar15[1];
                    }
                    local_168 = plVar14[0x4c];
                    local_160 = (undefined4)plVar14[0x4d];
                  }
                  uVar12 = UDamageableInterface::GetPrivateStaticClass();
                  plVar15 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar2,uVar12);
                  if (plVar15 == (longlong *)0x0) {
                    local_1a8 = 0;
                    cVar6 = (**(code **)(*plVar2 + 0x500))(plVar2,&local_158,&local_168,0);
                  }
                  else {
                    cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15);
                  }
                  lVar10 = local_180;
                  if (cVar6 != '\0') {
                    if (((plVar14 == (longlong *)0x0) &&
                        (lVar8 = FUN_1407caf50(local_180,plVar20), lVar8 != 0)) &&
                       (cVar6 = FUN_1407cd100(lVar8), cVar6 != '\0')) {
                      FUN_1407ccea0(lVar8,plVar20);
                    }
                    *(int *)(*plVar18 + 8 + lVar11) = local_188;
                  }
                }
              }
            }
LAB_140c0a575:
            lVar11 = lVar11 + -0x10;
            local_198 = local_198 + -1;
            local_178 = local_178 + -0x10;
            local_170 = local_170 + -0x10;
          } while (-1 < local_198);
          iVar7 = (int)plVar17[0xf4];
        }
        if (0 < iVar7) {
          uStack_108 = 0;
          local_110 = FUN_140c0a000;
          uVar12 = AActor::GetWorldTimerManager(plVar17);
          plVar18 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar18 != (longlong *)0x0) {
            *plVar18 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar18 + 1,plVar17);
            *(undefined4 *)(plVar18 + 2) = (undefined4)local_110;
            *(undefined4 *)((longlong)plVar18 + 0x14) = local_110._4_4_;
            *(undefined4 *)(plVar18 + 3) = uStack_108;
            *(undefined4 *)((longlong)plVar18 + 0x1c) = uStack_104;
            lVar11 = FDelegateHandle::GenerateNewID();
            plVar18[5] = lVar11;
            *plVar18 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_c8 = 0;
          local_c0 = 0;
          if (plVar18 != (longlong *)0x0) {
            (**(code **)(*plVar18 + 0x30))(plVar18,&local_c8);
          }
          FWeakObjectPtr::operator=(local_b8,0);
          local_1a0 = 0xbf800000;
          local_1a8 = 0;
          local_b0 = 0;
          local_78 = (longlong *)0x0;
          local_68 = 0;
          local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar12,plVar17 + 0xfd,&local_c8,0x41200000);
          if (local_68 != 0) {
            plVar17 = local_98;
            if (local_78 != (longlong *)0x0) {
              plVar17 = local_78;
            }
            if (plVar17 != (longlong *)0x0) {
              (**(code **)(*plVar17 + 0x10))(plVar17,0);
            }
          }
          if (local_78 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
          if (plVar18 != (longlong *)0x0) {
            (**(code **)(*plVar18 + 0x28))(plVar18,0);
            lVar11 = FMemory::Realloc(plVar18,0,0);
            if (lVar11 != 0) {
              FMemory::Free(lVar11);
            }
          }
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xf4) = 0;
      if (*(int *)((longlong)param_1 + 0x7a4) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0xf3,0);
      }
    }
  }
  return;
}



// FUNCTION 140c0a740 FUN_140c0a740 body=108 status=ok
// SIG undefined FUN_140c0a740(void)

void FUN_140c0a740(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_140b85640();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_140b75d20();
    FUN_140b55eb0(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    TUniformBuffer<FLpvWriteUniformBufferParameters>::ReleaseDynamicRHI();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_142d29800();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_140b55e90();
    return;
  }
  return;
}



// FUNCTION 140c0a7b0 FUN_140c0a7b0 body=94 status=ok
// SIG undefined FUN_140c0a7b0(void)

void FUN_140c0a7b0(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = DAT_14686b3c8 + -1;
  if (-1 < iVar2) {
    lVar3 = (longlong)iVar2 * 0x78;
    do {
      cVar1 = FWeakObjectPtr::IsValid(DAT_14686b3c0 + lVar3);
      if (cVar1 == '\0') {
        FUN_140c24970(&DAT_14686b3c0,iVar2,1,1);
      }
      lVar3 = lVar3 + -0x78;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// FUNCTION 140c0a810 FUN_140c0a810 body=34 status=ok
// SIG undefined FUN_140c0a810(void)

void FUN_140c0a810(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) &&
     ((*(longlong *)(param_1 + 0x6b8) == 0 || (*(longlong *)(param_1 + 0x6b8) == param_2)))) {
    *(undefined8 *)(param_1 + 0x6b8) = 0;
  }
  return;
}



// FUNCTION 140c0a840 FUN_140c0a840 body=392 status=ok
// SIG undefined FUN_140c0a840(void)

char FUN_140c0a840(longlong *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 local_res10;
  undefined4 local_res14;
  
  cVar3 = FUN_142445290();
  if (cVar3 != '\0') {
    lVar5 = FUN_1405c6c00();
    if ((((lVar5 != 0) && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0')) &&
       (DAT_1468536c8 != 0)) {
      FUN_1405a2690(DAT_1468536c8,*(undefined8 *)(lVar5 + 0x38));
    }
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = FUN_1405e8ff0(uVar6);
    if (lVar5 != 0) {
      FUN_1405e5100(lVar5,0);
    }
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar6 = FUN_1428cc4e0(uVar6);
    FUN_142d93d20(uVar6);
    lVar5 = FUN_1422312c0(param_1);
    if (lVar5 != 0) {
      lVar7 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        puVar8 = *(undefined4 **)(lVar5 + 0xd60);
        puVar1 = puVar8 + (longlong)*(int *)(lVar5 + 0xd68) * 2;
        for (; puVar8 != puVar1; puVar8 = puVar8 + 2) {
          local_res10 = *puVar8;
          local_res14 = puVar8[1];
          cVar4 = FWeakObjectPtr::IsValid(&local_res10);
          if (cVar4 != '\0') {
            uVar6 = FWeakObjectPtr::Get(&local_res10);
            FUN_140bf30f0(uVar6);
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = FUN_140c12480();
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x60);
    }
    if (lVar5 != 0) {
      FUN_1411f9ba0(lVar5,0);
    }
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xb9);
  }
  return cVar3;
}



// FUNCTION 140c0a9d0 FUN_140c0a9d0 body=875 status=ok
// SIG undefined FUN_140c0a9d0(void)

char FUN_140c0a9d0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined1 local_68 [32];
  longlong *local_48;
  
  cVar2 = FUN_142f559e0();
  if (cVar2 == '\0') {
    return '\0';
  }
  plVar11 = (longlong *)0x0;
  plVar12 = plVar11;
  if (param_2 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_142f71d80();
    plVar10 = param_2;
    do {
      plVar12 = param_2;
      if (plVar10 == plVar4) break;
      plVar10 = (longlong *)plVar10[6];
      plVar12 = plVar11;
    } while (plVar10 != (longlong *)0x0);
  }
  lVar6 = plVar12[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar12 + 0x368))(plVar12);
    lVar6 = plVar12[0x1f];
    if (lVar6 == 0) goto LAB_140c0acda;
  }
  lVar5 = FUN_141437870();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (lVar6 = FUN_140c14790(lVar6), lVar6 != 0)) {
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar7,&local_78);
    while( true ) {
      if ((local_70 < 0) || (*(int *)(local_78 + 8) <= local_70)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar6 = FWeakObjectPtr::Get();
      if (lVar6 != 0) {
        lVar5 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (lVar6 = *(longlong *)(lVar6 + 0x848), lVar6 != 0)) {
          lVar5 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (lVar6 = FUN_140c430a0(lVar6,0), lVar6 != 0)) {
            FUN_142fde510(local_68);
            local_88 = 0;
            local_80 = 0;
            FUN_142ffa060(lVar6,0,&local_88);
            lVar5 = local_88 + (longlong)(int)local_80 * 4;
            for (lVar13 = local_88; lVar13 != lVar5; lVar13 = lVar13 + 4) {
              cVar3 = FUN_142ffa4f0(lVar6,lVar13,local_68);
              plVar12 = local_48;
              if ((cVar3 != '\0') && (local_48 != (longlong *)0x0)) {
                uVar7 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
                lVar8 = (**(code **)(*plVar12 + 0x628))(plVar12,uVar7);
                if (lVar8 != 0) {
                  plVar12 = plVar11;
                  if (*(longlong *)(lVar8 + 0x178) != 0) {
                    plVar4 = (longlong *)FUN_142f71d80();
                    for (plVar10 = *(longlong **)(lVar8 + 0x178);
                        (plVar12 = plVar11, plVar10 != (longlong *)0x0 &&
                        (plVar12 = *(longlong **)(lVar8 + 0x178), plVar10 != plVar4));
                        plVar10 = (longlong *)plVar10[6]) {
                    }
                  }
                  plVar10 = plVar11;
                  if (param_2 != (longlong *)0x0) {
                    plVar9 = (longlong *)FUN_142f71d80();
                    plVar4 = param_2;
                    do {
                      plVar10 = param_2;
                      if (plVar4 == plVar9) break;
                      plVar4 = (longlong *)plVar4[6];
                      plVar10 = plVar11;
                    } while (plVar4 != (longlong *)0x0);
                  }
                  if (plVar12 == plVar10) {
                    FUN_143011bf0(lVar6,lVar13,1);
                    FUN_142227350(local_48,0,1);
                  }
                }
              }
            }
            if (local_88 != 0) {
              FMemory::Free();
            }
          }
        }
      }
      local_70 = local_70 + 1;
    }
  }
LAB_140c0acda:
  if (param_2 != (longlong *)0x0) {
    plVar11 = (longlong *)FUN_142f71d80();
    plVar12 = param_2;
    while (plVar12 != plVar11) {
      plVar12 = (longlong *)plVar12[6];
      if (plVar12 == (longlong *)0x0) {
        return cVar2;
      }
    }
    FUN_14143f420(param_1,param_2);
  }
  return cVar2;
}



// FUNCTION 140c0ad40 FUN_140c0ad40 body=2330 status=ok
// SIG undefined FUN_140c0ad40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c0ad40(longlong *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 *local_198;
  undefined1 local_190;
  undefined4 local_188;
  longlong local_178;
  undefined4 local_170;
  longlong *local_168;
  ulonglong uStack_160;
  longlong local_158;
  undefined4 local_150;
  longlong *local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  longlong local_120;
  undefined1 local_118 [48];
  longlong local_e8 [16];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  if (param_2 == 0) {
    return;
  }
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if (*(char *)((longlong)param_1 + 0x759) == '\0') {
    return;
  }
  if ((char)param_1[0xf2] != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xf2) = 1;
  local_140 = param_1;
  local_128 = param_2;
  cVar7 = FUN_1407cde20();
  if (cVar7 != '\0') {
    return;
  }
  lVar9 = UCableComponent::GetAttachedActor(param_1);
  if (lVar9 == 0) {
    return;
  }
  plVar10 = (longlong *)FUN_1407cb710(lVar9);
  if (plVar10 == (longlong *)0x0) {
    return;
  }
  local_68 = (longlong *)0x0;
  local_60 = 0;
  (**(code **)(*plVar10 + 0x2f8))(plVar10,local_e8);
  plVar10 = local_e8;
  if (local_68 != (longlong *)0x0) {
    plVar10 = local_68;
  }
  plVar25 = plVar10 + (int)local_60;
  for (; plVar10 != plVar25; plVar10 = plVar10 + 1) {
    iVar23 = 0;
    lVar9 = *plVar10;
    if ((lVar9 != 0) && (iVar8 = ULevelVariantSets::GetNumVariantSets(lVar9), 0 < iVar8)) {
      do {
        lVar11 = FUN_1407cad00(lVar9,iVar23);
        if (lVar11 != 0) {
          lVar12 = FUN_1414c5770();
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar5) && (lVar11 = *(longlong *)(lVar11 + 0x208), local_158 = lVar11, lVar11 != 0))
          {
            lVar12 = UARTrackedObject::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) && (*(longlong *)(lVar11 + 200) != 0)) {
              lVar13 = AGExplodingRockProjectile::GetPrivateStaticClass();
              lVar12 = *(longlong *)(lVar11 + 200);
              for (lVar15 = lVar12; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x30)) {
                if (lVar15 == lVar13) {
                  if (lVar12 != 0) {
                    if (lVar12 == 0) goto LAB_140c0af6e;
                    plVar14 = (longlong *)AGExplodingRockProjectile::GetPrivateStaticClass();
                    plVar10 = *(longlong **)(lVar11 + 200);
                    plVar25 = plVar10;
                    goto joined_r0x000140c0af5c;
                  }
                  break;
                }
              }
            }
          }
        }
        iVar23 = iVar23 + 1;
      } while (iVar23 < iVar8);
    }
  }
  goto LAB_140c0b606;
joined_r0x000140c0af5c:
  if (plVar25 == (longlong *)0x0) goto LAB_140c0af6e;
  if (plVar25 == plVar14) goto LAB_140c0af72;
  plVar25 = (longlong *)plVar25[6];
  goto joined_r0x000140c0af5c;
LAB_140c0af6e:
  plVar10 = (longlong *)0x0;
LAB_140c0af72:
  plVar14 = (longlong *)0x0;
  plVar25 = (longlong *)plVar10[0x1f];
  if (plVar25 == (longlong *)0x0) {
    local_148 = plVar25;
    (**(code **)(*plVar10 + 0x368))(plVar10);
    plVar25 = (longlong *)plVar10[0x1f];
    if (plVar25 != (longlong *)0x0) goto LAB_140c0af9e;
LAB_140c0afd8:
    local_148 = (longlong *)0x0;
    plVar25 = plVar14;
  }
  else {
LAB_140c0af9e:
    local_148 = plVar25;
    lVar9 = AGExplodingRockProjectile::GetPrivateStaticClass();
    if ((*(int *)(plVar25[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar25[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140c0afd8;
  }
  if (plVar25[0x95] != 0) {
    lVar15 = FUN_1428dfc70();
    lVar9 = plVar25[0x95];
    for (lVar12 = lVar9; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30)) {
      if (lVar12 == lVar15) {
        if (lVar9 != 0) {
          plVar10 = plVar14;
          if (lVar9 != 0) {
            plVar16 = (longlong *)FUN_1428dfc70();
            for (plVar24 = (longlong *)plVar25[0x95];
                (plVar10 = plVar14, plVar24 != (longlong *)0x0 &&
                (plVar10 = (longlong *)plVar25[0x95], plVar24 != plVar16));
                plVar24 = (longlong *)plVar24[6]) {
            }
          }
          lVar9 = plVar10[0x1f];
          if (lVar9 == 0) {
            local_178 = lVar9;
            (**(code **)(*plVar10 + 0x368))(plVar10);
            lVar9 = plVar10[0x1f];
            local_178 = lVar9;
            if (lVar9 == 0) break;
          }
          local_178 = lVar9;
          lVar12 = FUN_141437c50();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (((!bVar5) || (cVar7 = FUN_142f63b20(lVar9 + 0x460,lVar9), cVar7 == '\0')) ||
             (cVar7 = FUN_142f635c0(local_128,lVar9 + 0x460,lVar9), cVar7 == '\0')) break;
          lVar12 = FUN_142f5f490(lVar9 + 0x460);
          bVar6 = true;
          bVar5 = true;
          local_120 = lVar12;
          if ((*(char *)((longlong)param_1 + 0x75a) != '\0') && (param_1[0xcc] != 0)) {
            uVar19 = *(undefined8 *)(param_1[0xcc] + 0x10);
            uVar17 = UUserObjectListEntry::GetPrivateStaticClass();
            cVar7 = UClass::ImplementsInterface(uVar19,uVar17);
            if (cVar7 != '\0') {
              local_168 = (longlong *)0x0;
              uStack_160 = 0;
              FUN_142f78f60(param_1[0xcc],&local_168);
              plVar10 = local_140;
              uVar22 = (ulonglong)(int)uStack_160;
              plVar24 = local_168 + uVar22 * 6;
              plVar14 = local_168;
              if (local_168 != plVar24) {
                do {
                  cVar7 = FUN_142f63b20(plVar14,plVar10[0xcc]);
                  if ((cVar7 != '\0') && (lVar9 = FUN_142f5f490(plVar14), lVar9 != lVar12)) {
                    lVar11 = plVar10[0xcc];
                    puVar18 = (undefined8 *)(**(code **)(*plVar14 + 0x18))(plVar14,&local_138);
                    cVar7 = FUN_142f637d0(local_128,lVar9,*puVar18,lVar11);
                    bVar5 = bVar6;
                    if (cVar7 == '\0') {
                      bVar6 = false;
                      bVar5 = false;
                    }
                  }
                  plVar14 = plVar14 + 6;
                } while (plVar14 != plVar24);
                uVar22 = uStack_160 & 0xffffffff;
                lVar11 = local_158;
                plVar25 = local_148;
                lVar12 = local_120;
              }
              uVar21 = (uint)uVar22;
              plVar10 = local_168;
              while (uVar21 != 0) {
                *plVar10 = (longlong)&PTR_FUN_1441d26b8;
                plVar10 = plVar10 + 6;
                uVar21 = (int)uVar22 - 1;
                uVar22 = (ulonglong)uVar21;
              }
              if (local_168 != (longlong *)0x0) {
                FMemory::Free(local_168);
              }
              lVar9 = local_178;
              param_1 = local_140;
              if (!bVar5) break;
            }
          }
          uVar19 = (**(code **)(*param_1 + 0x148))(param_1);
          if (plVar25[0x95] == 0) {
LAB_140c0b27e:
            lVar15 = 0;
          }
          else {
            lVar20 = FUN_1428dfc70();
            lVar15 = plVar25[0x95];
            lVar13 = lVar15;
            while( true ) {
              if (lVar13 == 0) goto LAB_140c0b27e;
              if (lVar13 == lVar20) break;
              lVar13 = *(longlong *)(lVar13 + 0x30);
            }
          }
          local_1b8 = FActorSpawnParameters::FActorSpawnParameters(local_118);
          lVar15 = UWorld::SpawnActor(uVar19,lVar15,0,0);
          if (((lVar15 == 0) || (*(longlong *)(lVar9 + 0x590) == 0)) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x590) + 0x1d8) == 0)) break;
          uVar17 = UBlueprintGeneratedClass::GetPrivateStaticClass();
          plVar10 = local_140;
          lVar13 = AGameStateBase::OnRep_GameModeClass(local_140,uVar17);
          if (lVar13 == 0) {
LAB_140c0b3b7:
            lVar13 = plVar10[0x2d];
            if (lVar13 == 0) {
              local_178 = _DAT_1468b5d90;
              local_170 = DAT_1468b5d98;
            }
            else {
              local_178 = *(longlong *)(lVar13 + 0x220);
              local_170 = *(undefined4 *)(lVar13 + 0x228);
            }
            local_158 = local_178;
            local_150 = local_170;
            if (lVar13 == 0) {
              uVar26 = (undefined4)DAT_1468b5da0;
              uVar27 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
              local_130 = DAT_1468b5da8;
            }
            else {
              fVar3 = *(float *)(lVar13 + 0x210);
              local_168 = *(longlong **)(lVar13 + 0x210);
              fVar4 = *(float *)(lVar13 + 0x218);
              uStack_160 = *(ulonglong *)(lVar13 + 0x218);
              auVar2._4_4_ = -(uint)(*(float *)(lVar13 + 0x214) != *(float *)(lVar13 + 0x254));
              auVar2._0_4_ = -(uint)(fVar3 != *(float *)(lVar13 + 0x250));
              auVar2._8_4_ = -(uint)(fVar4 != *(float *)(lVar13 + 600));
              auVar2._12_4_ = -(uint)(*(float *)(lVar13 + 0x21c) != *(float *)(lVar13 + 0x25c));
              iVar23 = movmskps(local_170,auVar2);
              if (iVar23 != 0) {
                *(float *)(lVar13 + 0x250) = fVar3;
                *(float *)(lVar13 + 0x254) = *(float *)(lVar13 + 0x214);
                *(float *)(lVar13 + 600) = fVar4;
                *(float *)(lVar13 + 0x25c) = *(float *)(lVar13 + 0x21c);
                puVar18 = (undefined8 *)FQuat::Rotator(&local_168,&local_178);
                *(undefined8 *)(lVar13 + 0x260) = *puVar18;
                *(undefined4 *)(lVar13 + 0x268) = *(undefined4 *)(puVar18 + 1);
              }
              uVar26 = (undefined4)*(undefined8 *)(lVar13 + 0x260);
              uVar27 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x260) >> 0x20);
              local_130 = *(undefined4 *)(lVar13 + 0x268);
            }
            local_138 = CONCAT44(uVar27,uVar26);
          }
          else {
            lVar20 = UBlueprintGeneratedClass::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar20 + 0x90) * 8) != lVar20 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) goto LAB_140c0b3b7;
            local_158 = *(longlong *)(lVar13 + 0x220);
            local_170 = *(undefined4 *)(lVar13 + 0x228);
            fVar3 = *(float *)(lVar13 + 0x210);
            local_168 = *(longlong **)(lVar13 + 0x210);
            fVar4 = *(float *)(lVar13 + 0x218);
            uStack_160 = *(ulonglong *)(lVar13 + 0x218);
            auVar1._4_4_ = -(uint)(*(float *)(lVar13 + 0x214) != *(float *)(lVar13 + 0x254));
            auVar1._0_4_ = -(uint)(fVar3 != *(float *)(lVar13 + 0x250));
            auVar1._8_4_ = -(uint)(fVar4 != *(float *)(lVar13 + 600));
            auVar1._12_4_ = -(uint)(*(float *)(lVar13 + 0x21c) != *(float *)(lVar13 + 0x25c));
            iVar23 = movmskps(local_170,auVar1);
            local_150 = local_170;
            if (iVar23 != 0) {
              *(float *)(lVar13 + 0x250) = fVar3;
              *(float *)(lVar13 + 0x254) = *(float *)(lVar13 + 0x214);
              *(float *)(lVar13 + 600) = fVar4;
              *(float *)(lVar13 + 0x25c) = *(float *)(lVar13 + 0x21c);
              puVar18 = (undefined8 *)FQuat::Rotator(&local_168,&local_178);
              *(undefined8 *)(lVar13 + 0x260) = *puVar18;
              *(undefined4 *)(lVar13 + 0x268) = *(undefined4 *)(puVar18 + 1);
            }
            local_138 = *(undefined8 *)(lVar13 + 0x260);
            local_130 = *(undefined4 *)(lVar13 + 0x268);
          }
          local_178 = 0;
          local_170 = 0;
          if (*(longlong *)(lVar11 + 200) == 0) {
LAB_140c0b4df:
            lVar11 = 0;
          }
          else {
            lVar20 = AGExplodingRockProjectile::GetPrivateStaticClass();
            lVar11 = *(longlong *)(lVar11 + 200);
            lVar13 = lVar11;
            while( true ) {
              if (lVar13 == 0) goto LAB_140c0b4df;
              if (lVar13 == lVar20) break;
              lVar13 = *(longlong *)(lVar13 + 0x30);
            }
          }
          local_198 = &local_138;
          local_188 = 0;
          local_190 = 0;
          local_1a0 = &local_158;
          local_1b8 = *(undefined8 *)(*(longlong *)(lVar9 + 0x590) + 0x1d8);
          local_1a8 = &local_178;
          local_1b0 = 0;
          uVar19 = FUN_142ff1380(uVar19,lVar11,1,lVar15);
          FUN_143016420(uVar19);
          if (*(char *)(lVar12 + 0xa0) != '\0') {
            uVar17 = UBlindWidget::GetPrivateStaticClass();
            lVar9 = AGameStateBase::OnRep_GameModeClass(plVar10,uVar17);
            if (lVar9 != 0) {
              lVar11 = UBlindWidget::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if ((bVar5) && (*(char *)(lVar9 + 0x1a0) != '\0')) {
                uVar17 = UBlindWidget::GetPrivateStaticClass();
                lVar11 = AGameStateBase::OnRep_GameModeClass(uVar19,uVar17);
                if (lVar11 != 0) {
                  lVar12 = UBlindWidget::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if (bVar5) {
                    *(undefined4 *)(lVar11 + 0x198) = *(undefined4 *)(lVar9 + 0x198);
                  }
                }
              }
            }
          }
        }
        break;
      }
    }
  }
LAB_140c0b606:
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c0b660 FUN_140c0b660 body=1004 status=ok
// SIG undefined FUN_140c0b660(void)

void FUN_140c0b660(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong local_48;
  ulonglong local_40;
  int local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686bc88) && (_Init_thread_header(&DAT_14686bc88), DAT_14686bc88 == -1))
  {
    FName::FName(&DAT_14686bc80,L"Loader",1);
    _Init_thread_footer(&DAT_14686bc88);
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x18) != DAT_14686bc80)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    uVar1 = *(undefined8 *)(DAT_146b33f38 + 0x58);
    local_48 = 0;
    local_40 = 0;
    local_38 = -1;
    uVar5 = UARTrackedObject::GetPrivateStaticClass();
    FUN_1417a5560(uVar5,&local_48,1,0x10,0);
    uVar10 = local_40 & 0xffffffff;
    do {
      local_38 = local_38 + 1;
      lVar4 = local_48;
      if ((int)local_40 <= local_38) break;
    } while (*(longlong *)(local_48 + (longlong)local_38 * 8) == 0);
LAB_140c0b757:
    if ((local_38 < 0) || ((int)uVar10 <= local_38)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar2 = *(longlong *)(lVar4 + (longlong)local_38 * 8);
      if (*(longlong *)(lVar2 + 200) != 0) {
        lVar6 = AGExplodingRockProjectile::GetPrivateStaticClass();
        lVar4 = *(longlong *)(lVar2 + 200);
        lVar8 = lVar4;
        if (lVar4 != 0) {
LAB_140c0b7a0:
          if (lVar8 != lVar6) goto code_r0x000140c0b7a5;
          if (lVar4 == 0) goto LAB_140c0b996;
          plVar7 = (longlong *)AGExplodingRockProjectile::GetPrivateStaticClass();
          for (plVar12 = *(longlong **)(lVar2 + 200);
              (plVar11 = (longlong *)0x0, plVar12 != (longlong *)0x0 &&
              (plVar11 = *(longlong **)(lVar2 + 200), plVar12 != plVar7));
              plVar12 = (longlong *)plVar12[6]) {
          }
          lVar4 = plVar11[0x1f];
          if (lVar4 == 0) {
            (**(code **)(*plVar11 + 0x368))(plVar11);
            lVar4 = plVar11[0x1f];
            if (lVar4 != 0) goto LAB_140c0b809;
          }
          else {
LAB_140c0b809:
            lVar8 = AGExplodingRockProjectile::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) && (*(longlong *)(lVar4 + 0x4a8) != 0)) {
              lVar9 = FUN_1428dfc70();
              lVar8 = *(longlong *)(lVar4 + 0x4a8);
              lVar6 = lVar8;
              if (lVar8 == 0) goto LAB_140c0b996;
              do {
                if (lVar6 == lVar9) {
                  if (lVar8 != 0) {
                    plVar7 = (longlong *)FUN_1428dfc70();
                    for (plVar12 = *(longlong **)(lVar4 + 0x4a8);
                        (plVar11 = (longlong *)0x0, plVar12 != (longlong *)0x0 &&
                        (plVar11 = *(longlong **)(lVar4 + 0x4a8), plVar12 != plVar7));
                        plVar12 = (longlong *)plVar12[6]) {
                    }
                    lVar4 = plVar11[0x1f];
                    if (lVar4 == 0) {
                      (**(code **)(*plVar11 + 0x368))(plVar11);
                      lVar4 = plVar11[0x1f];
                      if (lVar4 == 0) break;
                    }
                    lVar8 = FUN_141437c50();
                    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (bVar3) {
                      FUN_140c25c50(lVar4,uVar1,*(undefined8 *)(lVar2 + 200));
                      uVar5 = *(undefined8 *)(lVar4 + 0x588);
                      iVar13 = *(int *)(lVar2 + 0x50);
                      if (iVar13 != 0) {
                        plVar12 = (longlong *)(*(longlong *)(lVar2 + 0x48) + 0x20);
                        do {
                          if (*plVar12 != 0) {
                            FMemory::Free();
                          }
                          plVar12 = plVar12 + 0xe;
                          iVar13 = iVar13 + -1;
                        } while (iVar13 != 0);
                      }
                      iVar13 = 0;
                      *(undefined4 *)(lVar2 + 0x50) = 0;
                      if (*(int *)(lVar2 + 0x54) != 0) {
                        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>
                        ::ResizeTo(lVar2 + 0x48,0);
                        iVar13 = *(int *)(lVar2 + 0x50);
                      }
                      *(int *)(lVar2 + 0x50) = iVar13 + 1;
                      if (*(int *)(lVar2 + 0x54) < iVar13 + 1) {
                        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>
                        ::ResizeGrow(lVar2 + 0x48,iVar13);
                      }
                      FUN_142fde270((longlong)iVar13 * 0x70 + *(longlong *)(lVar2 + 0x48));
                      *(undefined8 *)(*(longlong *)(lVar2 + 0x48) + 0x30) = uVar5;
                    }
                  }
                  break;
                }
                lVar6 = *(longlong *)(lVar6 + 0x30);
              } while (lVar6 != 0);
            }
          }
        }
LAB_140c0b996:
        uVar10 = local_40 & 0xffffffff;
        lVar4 = local_48;
      }
      do {
        local_38 = local_38 + 1;
        if ((int)uVar10 <= local_38) break;
      } while (*(longlong *)(lVar4 + (longlong)local_38 * 8) == 0);
      goto LAB_140c0b757;
    }
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
code_r0x000140c0b7a5:
  lVar8 = *(longlong *)(lVar8 + 0x30);
  if (lVar8 == 0) goto LAB_140c0b996;
  goto LAB_140c0b7a0;
}



// FUNCTION 140c0ba50 FUN_140c0ba50 body=843 status=ok
// SIG undefined FUN_140c0ba50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c0ba50(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined1 local_108 [8];
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [16];
  undefined4 local_60 [2];
  undefined8 local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  if (param_2 != 0) {
    local_30 = DAT_1468387a8 ^ (ulonglong)auStack_138;
    FWeakObjectPtr::operator=(local_108,0);
    local_100 = 0;
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"Splitscreen Join",L"OakQueuedMessages",
                       L"SplitscreenJoinHeaderText");
    FText::operator=(param_1 + 0x18,uVar8);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b0 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    cVar7 = FUN_140bc2da0(param_2);
    if (cVar7 != '\0') {
      pwVar9 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakGameInstance::OnSplitscreenDialogDismissed",L"::");
      pwVar6 = (wchar_t *)0x0;
      while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar6 = pwVar5;
      }
      FName::FName(&local_f8,pwVar6 + 2,1);
      FWeakObjectPtr::operator=(local_108,param_2);
      local_100 = local_f8;
      local_118 = (undefined4 *)0x0;
      if ((local_f8 != 0) && (lVar10 = FWeakObjectPtr::Get(local_108), lVar10 != 0)) {
        UObject::FindFunction(lVar10,local_100);
      }
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_88,
                         L"Dismiss this dialog with the new player\'s {0}|platform(default=controller,xbox=controller,playstation=controller)."
                         ,L"OakQueuedMessages",L"SplitscreenJoinMessageText");
      puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_70,uVar8);
      local_60[0] = 0;
      local_118 = local_60;
      local_38 = '\0';
      puStack_110 = &local_30;
      local_f0 = *puVar11;
      local_e8 = puVar11[1];
      local_58 = 0;
      if (local_e8 != 0) {
        LOCK();
        *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
        UNLOCK();
      }
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_e0,&local_118);
      uVar8 = FText::Format(local_a0,&local_f0,uVar8);
      FText::FText(local_d0,uVar8);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_98 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)local_98 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_e0);
      if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_48 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      plVar4 = (longlong *)puVar11[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      FText::operator=(param_1 + 0x30,local_d0);
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_c8 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_80 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
  }
  return;
}



// FUNCTION 140c0bda0 FUN_140c0bda0 body=867 status=ok
// SIG undefined FUN_140c0bda0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c0bda0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong local_148;
  undefined8 local_140;
  undefined4 *local_138;
  ulonglong *puStack_130;
  undefined4 local_128;
  longlong local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar1 = param_1 + 0x30;
  bVar11 = false;
  local_128 = 0;
  cVar7 = FText::IsEmpty(lVar1);
  if (cVar7 != '\0') {
    lVar8 = *(longlong *)(param_1 + 8);
    local_148 = 0;
    local_140 = 0;
    if (lVar8 != 0) {
      local_118 = *(longlong **)(param_1 + 0x10);
      if (local_118 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_118 + 1) = (int)local_118[1] + 1;
        UNLOCK();
      }
      local_158 = &local_148;
      local_120 = lVar8;
      FUN_140d79f00(*(undefined8 *)(param_2 + 0x478),&local_120,1);
      bVar11 = true;
    }
    plVar5 = local_118;
    if ((bVar11) && (local_118 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_118 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    if ((int)local_140 < 2) {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_a8,L"Player joined",L"OakQueuedMessages",
                         L"SplitscreenJoinSucceededMessage");
      FText::operator=(lVar1,uVar9);
    }
    else {
      lVar8 = FText::FromString(local_80,&local_148);
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_c0,L"{0} joined",L"OakQueuedMessages",
                         L"SplitscreenJoinSucceededMessageSpecific");
      puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar9);
      local_68[0] = 4;
      FText::FText(local_58,lVar8);
      local_110 = *puVar10;
      local_138 = local_68;
      puStack_130 = local_38;
      local_108 = puVar10[1];
      local_40 = '\x01';
      if (local_108 != 0) {
        LOCK();
        *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
        UNLOCK();
      }
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_100,&local_138);
      uVar9 = FText::Format(local_d8,&local_110,uVar9);
      FText::FText(local_f0,uVar9);
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_d0 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar3 = (int *)((longlong)local_d0 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_100);
      if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
        LOCK();
        plVar5 = local_50 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar3 = (int *)((longlong)local_50 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      plVar5 = (longlong *)puVar10[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = *(longlong **)(lVar8 + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      FText::operator=(lVar1,local_f0);
      local_a0 = local_b8;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_e8 + 1;
        lVar1 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar1 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar3 = (int *)((longlong)local_e8 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          local_a0 = local_b8;
          if (iVar4 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
            local_a0 = local_b8;
          }
        }
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_a0 + 1;
      lVar1 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar3 = (int *)((longlong)local_a0 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140c0c110 FUN_140c0c110 body=2134 status=ok
// SIG undefined FUN_140c0c110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c0c110(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  longlong lStack_320;
  undefined4 *local_318;
  ulonglong *puStack_310;
  undefined8 *local_308;
  undefined4 *puStack_300;
  undefined8 local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [16];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [16];
  undefined1 local_258 [8];
  longlong *local_250;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
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
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined4 local_f8 [2];
  undefined8 local_f0;
  longlong *local_e0;
  char local_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  longlong *local_80;
  char local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_348;
  lVar1 = param_1 + 0x18;
  cVar7 = FText::IsEmpty(lVar1);
  if (cVar7 != '\0') {
    lVar2 = param_1 + 0x30;
    cVar7 = FText::IsEmpty(lVar2);
    if (cVar7 != '\0') {
      if (*(char *)(param_1 + 5) == '\n') {
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_180,
                           L"{0}|platform(default=Controller,xbox=Controller,playstation=Controller) Disconnected"
                           ,L"OakQueuedMessages",L"ControllerDisconnectedHeader");
        puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_118,uVar8);
        local_308 = (undefined8 *)local_98;
        local_98[0] = 0;
        puStack_300 = local_68;
        local_2f8 = *puVar9;
        local_2f0 = puVar9[1];
        local_70 = '\0';
        local_90 = 0;
        if (local_2f0 != 0) {
          LOCK();
          *(int *)(local_2f0 + 8) = *(int *)(local_2f0 + 8) + 1;
          UNLOCK();
        }
        local_298 = local_308;
        uStack_290 = puStack_300;
        uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_288,&local_298);
        uVar8 = FText::Format(local_198,&local_2f8,uVar8);
        FText::FText(local_228,uVar8);
        if (local_190 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_190 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_190)(local_190);
            LOCK();
            piVar3 = (int *)((longlong)local_190 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_190 + 8))(local_190,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_288);
        if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
          LOCK();
          plVar10 = local_80 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar3 = (int *)((longlong)local_80 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
        plVar10 = (longlong *)puVar9[1];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar10 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar3 = (int *)((longlong)plVar10 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        FText::operator=(lVar1,local_228);
        if (local_220 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_220 + 1;
          lVar1 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*local_220)(local_220);
            LOCK();
            piVar3 = (int *)((longlong)local_220 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_220 + 8))(local_220,1);
            }
          }
        }
        if (local_178 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_178 + 1;
          lVar1 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*local_178)(local_178);
            LOCK();
            piVar3 = (int *)((longlong)local_178 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_178 + 8))(local_178,1);
            }
          }
        }
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_150,
                           L"Your {0}|platform(default=controller,xbox=controller,playstation=controller) was disconnected."
                           ,L"OakQueuedMessages",L"ControllerDisconnectedMessage");
        puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_108,uVar8);
        local_68[0] = 0;
        local_318 = local_68;
        local_40 = '\0';
        puStack_310 = local_38;
        local_2e8 = *puVar9;
        local_2e0 = puVar9[1];
        local_60 = 0;
        if (local_2e0 != 0) {
          LOCK();
          *(int *)(local_2e0 + 8) = *(int *)(local_2e0 + 8) + 1;
          UNLOCK();
        }
        local_278 = local_318;
        uStack_270 = puStack_310;
        uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_268,&local_278);
        uVar8 = FText::Format(local_168,&local_2e8,uVar8);
        FText::FText(local_210,uVar8);
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_160 + 1;
          lVar1 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar3 = (int *)((longlong)local_160 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_160 + 8))(local_160,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_268);
        if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
          LOCK();
          plVar10 = local_50 + 1;
          lVar1 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar3 = (int *)((longlong)local_50 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        plVar10 = (longlong *)puVar9[1];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar10 + 1;
          lVar1 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar3 = (int *)((longlong)plVar10 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        FText::operator=(lVar2,local_210);
        if (local_208 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_208 + 1;
          lVar1 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*local_208)(local_208);
            LOCK();
            piVar3 = (int *)((longlong)local_208 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_208 + 8))(local_208,1);
            }
          }
        }
        plVar10 = local_148;
      }
      else {
        if (*(char *)(param_1 + 5) != '\v') {
          return;
        }
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_1e0,
                           L"{0}|platform(default=Controller,xbox=Controller,playstation=Controller) Reconnected"
                           ,L"OakQueuedMessages",L"ControllerReconnectedHeader");
        puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_138,uVar8);
        local_2d8 = local_f8;
        local_f8[0] = 0;
        uStack_2d0 = local_c8;
        local_328 = *puVar9;
        lStack_320 = puVar9[1];
        local_d0 = '\0';
        local_f0 = 0;
        if (lStack_320 != 0) {
          LOCK();
          *(int *)(lStack_320 + 8) = *(int *)(lStack_320 + 8) + 1;
          UNLOCK();
        }
        uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_2c8,&local_2d8);
        uVar8 = FText::Format(local_1f8,&local_328,uVar8);
        FText::FText(local_258,uVar8);
        if (local_1f0 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_1f0 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_1f0)(local_1f0);
            LOCK();
            piVar3 = (int *)((longlong)local_1f0 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_1f0 + 8))(local_1f0,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_2c8);
        if ((local_d0 != '\0') && (local_d0 = '\0', local_e0 != (longlong *)0x0)) {
          LOCK();
          plVar10 = local_e0 + 1;
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar3 = (int *)((longlong)local_e0 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_e0 + 8))(local_e0,1);
            }
          }
        }
        plVar10 = (longlong *)puVar9[1];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar10 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar3 = (int *)((longlong)plVar10 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        FText::operator=(lVar1,local_258);
        if (local_250 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_250 + 1;
          lVar1 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*local_250)(local_250);
            LOCK();
            piVar3 = (int *)((longlong)local_250 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_250 + 8))(local_250,1);
            }
          }
        }
        if (local_1d8 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_1d8 + 1;
          lVar1 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*local_1d8)(local_1d8);
            LOCK();
            piVar3 = (int *)((longlong)local_1d8 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_1d8 + 8))(local_1d8,1);
            }
          }
        }
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_1b0,
                           L"Your {0}|platform(default=controller,xbox=controller,playstation=controller) has been reconnected."
                           ,L"OakQueuedMessages",L"ControllerReconnectedMessage");
        plVar10 = (longlong *)FTextFormat::FTextFormat(local_128,uVar8);
        local_c8[0] = 0;
        local_318 = local_c8;
        local_a0 = '\0';
        puStack_310 = (ulonglong *)local_98;
        local_308 = (undefined8 *)*plVar10;
        puStack_300 = (undefined4 *)plVar10[1];
        local_c0 = 0;
        if (puStack_300 != (undefined4 *)0x0) {
          LOCK();
          puStack_300[2] = puStack_300[2] + 1;
          UNLOCK();
        }
        local_2b8 = local_318;
        uStack_2b0 = puStack_310;
        uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_2a8,&local_2b8);
        uVar8 = FText::Format(local_1c8,&local_308,uVar8);
        FText::FText(local_240,uVar8);
        if (local_1c0 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_1c0 + 1;
          lVar1 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*local_1c0)(local_1c0);
            LOCK();
            piVar3 = (int *)((longlong)local_1c0 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_1c0 + 8))(local_1c0,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_2a8);
        if ((local_a0 != '\0') && (local_a0 = '\0', local_b0 != (longlong *)0x0)) {
          LOCK();
          plVar4 = local_b0 + 1;
          lVar1 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar3 = (int *)((longlong)local_b0 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
        }
        plVar10 = (longlong *)plVar10[1];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar10 + 1;
          lVar1 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar3 = (int *)((longlong)plVar10 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        FText::operator=(lVar2,local_240);
        if (local_238 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_238 + 1;
          lVar1 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*local_238)(local_238);
            LOCK();
            piVar3 = (int *)((longlong)local_238 + 0xc);
            iVar5 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_238 + 8))(local_238,1);
            }
          }
        }
        plVar10 = local_1a8;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar10 + 1;
        lVar1 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar1 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c0c970 FUN_140c0c970 body=764 status=ok
// SIG undefined FUN_140c0c970(void)

void FUN_140c0c970(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  cVar6 = FText::IsEmpty(param_1 + 0x18);
  if (cVar6 == '\0') {
    return;
  }
  lVar1 = param_1 + 0x30;
  cVar6 = FText::IsEmpty(lVar1);
  if (cVar6 == '\0') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 5)) {
  case 4:
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,L"Connection Lost",L"OakQueuedMessages",L"ServiceLostTitle");
    FText::operator=(param_1 + 0x18,uVar7);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_90 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar3 = (int *)((longlong)local_90 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    puVar8 = &DAT_14686f570;
    break;
  case 5:
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,L"Connection Lost",L"OakQueuedMessages",L"ServiceLostTitle");
    FText::operator=(param_1 + 0x18,uVar7);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_78 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar3 = (int *)((longlong)local_78 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"Your connection to Gearbox Software SHiFT was lost.",
                       L"OakQueuedMessages",L"ServiceLost_Spark");
    FText::operator=(lVar1,uVar7);
    local_18 = local_60;
    goto LAB_140c0cbeb;
  case 6:
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"Connection Active",L"OakQueuedMessages",L"ServiceRestoredTitle");
    FText::operator=(param_1 + 0x18,uVar7);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_48 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar3 = (int *)((longlong)local_48 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    puVar8 = &DAT_14686f588;
    break;
  case 7:
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Connection Active",L"OakQueuedMessages",L"ServiceRestoredTitle");
    FText::operator=(param_1 + 0x18,uVar7);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar3 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"You are now connected to Gearbox Software SHiFT.",
                       L"OakQueuedMessages",L"ServiceRestored_Spark");
    FText::operator=(lVar1,uVar7);
LAB_140c0cbeb:
    if (local_18 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar2 = local_18 + 1;
    lVar1 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar1 != 1) {
      return;
    }
    (**(code **)*local_18)(local_18);
    LOCK();
    piVar3 = (int *)((longlong)local_18 + 0xc);
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 != 1) {
      return;
    }
    (**(code **)(*local_18 + 8))(local_18,1);
    return;
  case 8:
    FText::operator=(param_1 + 0x18,&DAT_14686f5a0);
    puVar8 = &DAT_14686f5b8;
    break;
  case 9:
    FText::operator=(param_1 + 0x18,&DAT_14686f5d0);
    puVar8 = &DAT_14686f5e8;
    break;
  default:
    goto switchD_140c0c9d0_default;
  }
  FText::operator=(lVar1,puVar8);
switchD_140c0c9d0_default:
  return;
}



// FUNCTION 140c0cc90 FUN_140c0cc90 body=2120 status=ok
// SIG undefined FUN_140c0cc90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140c0cc90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_2f8 [32];
  longlong *local_2d8;
  longlong local_2c8;
  undefined8 local_2c0;
  ulonglong *local_2b8;
  ulonglong *puStack_2b0;
  undefined4 local_2a8;
  longlong local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong *local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  lVar1 = param_1 + 0x30;
  bVar12 = false;
  local_2a8 = 0;
  cVar8 = FText::IsEmpty(lVar1);
  if (cVar8 == '\0') {
    return 1;
  }
  lVar10 = *(longlong *)(param_1 + 8);
  if ((*(char *)(param_1 + 5) == '\x01') && (lVar10 != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  local_2c8 = 0;
  local_2c0 = 0;
  if (lVar10 == 0) {
    cVar8 = '\0';
  }
  else {
    local_298 = *(longlong **)(param_1 + 0x10);
    if (local_298 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_298 + 1) = (int)local_298[1] + 1;
      UNLOCK();
    }
    local_2d8 = &local_2c8;
    local_2a0 = lVar10;
    cVar8 = FUN_140d79f00(*(undefined8 *)(param_2 + 0x478),&local_2a0,1);
    bVar12 = true;
  }
  plVar5 = local_298;
  if ((bVar12) && (local_298 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_298 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_298)(local_298);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if ((bVar6) && (cVar8 == '\0')) {
    local_290 = *(undefined8 *)(param_1 + 8);
    local_288 = *(longlong **)(param_1 + 0x10);
    if (local_288 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_288 + 1) = (int)local_288[1] + 1;
      UNLOCK();
    }
    FUN_140d938f0(*(undefined8 *)(param_2 + 0x478),&local_290);
    plVar5 = local_288;
    if (local_288 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_288 + 1;
      lVar1 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)*local_288)(local_288);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    uVar9 = 0;
    goto LAB_140c0d498;
  }
  cVar8 = *(char *)(param_1 + 5);
  if (cVar8 == '\x03') {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1e8,L"Joined Group!",L"OakQueuedMessages",L"ConnectionSuccessfulTitle")
    ;
    FText::operator=(param_1 + 0x18,uVar9);
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1e0 + 1;
      lVar10 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar3 = (int *)((longlong)local_1e0 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1e0 + 8))(local_1e0,1);
        }
      }
    }
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1d0,L"Go and cause some mayhem!",L"OakQueuedMessages",
                       L"ConnectionSuccessfulMessage");
    FText::operator=(lVar1,uVar9);
    local_138 = local_1c8;
LAB_140c0d467:
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_138 + 1;
      lVar1 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar3 = (int *)((longlong)local_138 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
  }
  else {
    if (1 < (int)local_2c0) {
      if (cVar8 == '\x01') {
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_170,L"Player Joined!",L"OakQueuedMessages",
                           L"PlayerJoinedLobbyTitle");
        FText::operator=(param_1 + 0x18,uVar9);
        if (local_168 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_168 + 1;
          lVar10 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_168)(local_168);
            LOCK();
            piVar3 = (int *)((longlong)local_168 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_168 + 8))(local_168,1);
            }
          }
        }
        lVar10 = FText::FromString(local_c0,&local_2c8);
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_140,L"{0} has joined the group.",L"OakQueuedMessages",
                           L"PlayerJoinedLobbyMessage");
        puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_e8,uVar9);
        local_78[0] = 4;
        FText::FText(local_68,lVar10);
        local_270 = *puVar11;
        local_2b8 = (ulonglong *)local_78;
        puStack_2b0 = local_48;
        local_268 = puVar11[1];
        local_50 = '\x01';
        if (local_268 != 0) {
          LOCK();
          *(int *)(local_268 + 8) = *(int *)(local_268 + 8) + 1;
          UNLOCK();
        }
        local_238 = (undefined4 *)local_2b8;
        uStack_230 = puStack_2b0;
        uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_228,&local_238);
        uVar9 = FText::Format(local_158,&local_270,uVar9);
        FText::FText(local_200,uVar9);
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_150 + 1;
          lVar7 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar3 = (int *)((longlong)local_150 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_150 + 8))(local_150,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_228);
        if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
          LOCK();
          plVar5 = local_60 + 1;
          lVar7 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar3 = (int *)((longlong)local_60 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
        plVar5 = (longlong *)puVar11[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = *(longlong **)(lVar10 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        FText::operator=(lVar1,local_200);
        if (local_1f8 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_1f8 + 1;
          lVar1 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*local_1f8)(local_1f8);
            LOCK();
            piVar3 = (int *)((longlong)local_1f8 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_1f8 + 8))(local_1f8,1);
            }
          }
        }
      }
      else {
        local_258 = (undefined4 *)CONCAT44(local_258._4_4_,(undefined4)local_258);
        uStack_250 = (ulonglong *)CONCAT44(uStack_250._4_4_,(undefined4)uStack_250);
        local_238 = (undefined4 *)CONCAT44(local_238._4_4_,(undefined4)local_238);
        uStack_230 = (ulonglong *)CONCAT44(uStack_230._4_4_,(undefined4)uStack_230);
        if (cVar8 != '\x02') goto LAB_140c0d496;
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_1b8,L"Player Left!",L"OakQueuedMessages",L"PlayerLeftLobbyTitle");
        FText::operator=(param_1 + 0x18,uVar9);
        if (local_1b0 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_1b0 + 1;
          lVar10 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_1b0)(local_1b0);
            LOCK();
            piVar3 = (int *)((longlong)local_1b0 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_1b0 + 8))(local_1b0,1);
            }
          }
        }
        lVar10 = FText::FromString(local_d8,&local_2c8);
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_188,L"{0} has left the group.",L"OakQueuedMessages",
                           L"PlayerLeftLobbyMessage");
        puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_f8,uVar9);
        local_a8[0] = 4;
        FText::FText(local_98,lVar10);
        local_280 = *puVar11;
        local_2b8 = (ulonglong *)local_a8;
        puStack_2b0 = (ulonglong *)local_78;
        local_278 = puVar11[1];
        local_80 = '\x01';
        if (local_278 != 0) {
          LOCK();
          *(int *)(local_278 + 8) = *(int *)(local_278 + 8) + 1;
          UNLOCK();
        }
        local_258 = (undefined4 *)local_2b8;
        uStack_250 = puStack_2b0;
        uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_248,&local_258);
        uVar9 = FText::Format(local_1a0,&local_280,uVar9);
        FText::FText(local_218,uVar9);
        if (local_198 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_198 + 1;
          lVar7 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_198)(local_198);
            LOCK();
            piVar3 = (int *)((longlong)local_198 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_198 + 8))(local_198,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_248);
        if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
          LOCK();
          plVar5 = local_90 + 1;
          lVar7 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar3 = (int *)((longlong)local_90 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_90 + 8))(local_90,1);
            }
          }
        }
        plVar5 = (longlong *)puVar11[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = *(longlong **)(lVar10 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        FText::operator=(lVar1,local_218);
        if (local_210 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_210 + 1;
          lVar1 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar1 == 1) {
            (**(code **)*local_210)(local_210);
            LOCK();
            piVar3 = (int *)((longlong)local_210 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_210 + 8))(local_210,1);
            }
          }
        }
        local_138 = local_180;
      }
      goto LAB_140c0d467;
    }
    if (cVar8 == '\x02') {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_128,L"Player Left!",L"OakQueuedMessages",
                         L"PlayerLeftLobby_NoDisplayNameTitle");
      FText::operator=(param_1 + 0x18,uVar9);
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_120 + 1;
        lVar10 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar3 = (int *)((longlong)local_120 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_110,L"A player has left the group.",L"OakQueuedMessages",
                         L"PlayerLeftLobby_NoDisplayNameMessage");
      FText::operator=(lVar1,uVar9);
      local_138 = local_108;
      goto LAB_140c0d467;
    }
  }
LAB_140c0d496:
  uVar9 = 1;
LAB_140c0d498:
  if (local_2c8 != 0) {
    FMemory::Free();
  }
  return uVar9;
}



// FUNCTION 140c0d4e0 FUN_140c0d4e0 body=116 status=ok
// SIG undefined FUN_140c0d4e0(void)

void FUN_140c0d4e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_14433a950;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    FString::FString(puVar2 + 4,param_1 + 0x20);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar2 = &PTR_GetPoolName_14433a998;
  }
  return;
}



// FUNCTION 140c0d560 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14433a8c0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14433a908;
  }
  return;
}



// FUNCTION 140c0d5b0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14433a830;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14433a878;
  }
  return;
}



// FUNCTION 140c0d600 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14433a7f0;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 140c0d630 FUN_140c0d630 body=68 status=ok
// SIG undefined FUN_140c0d630(void)

void FUN_140c0d630(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14433a750;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 140c0d680 FUN_140c0d680 body=68 status=ok
// SIG undefined FUN_140c0d680(void)

void FUN_140c0d680(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14433a710;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 140c0d6d0 FUN_140c0d6d0 body=68 status=ok
// SIG undefined FUN_140c0d6d0(void)

void FUN_140c0d6d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14433a790;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 140c0d720 ApplyKnock body=46 status=ok
// SIG undefined ApplyKnock(void)

void USMKnockComponent::ApplyKnock(void)

{
  FUN_140c0d750();
  return;
}



// FUNCTION 140c0d750 FUN_140c0d750 body=1234 status=ok
// SIG undefined FUN_140c0d750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c0d750(longlong *param_1,undefined4 param_2,undefined ***param_3,longlong param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  bool bVar6;
  undefined **ppuVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined **local_120;
  undefined **local_118;
  undefined **ppuStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [24];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_138 = param_5;
  if ((param_3[1] == (undefined **)0x0) ||
     (cVar8 = (**(code **)(*param_3[1] + 0x20))(), cVar8 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  local_d8 = lVar9;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar9 == 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_140c24a90(param_1,param_3,param_4);
  if (param_4 != 0) {
    uVar10 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar11 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_4,uVar10);
    if (plVar11 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar11 + 0x18))(plVar11,param_4);
      goto LAB_140c0d84a;
    }
  }
  plVar15 = *(longlong **)(lVar3 + 0x570);
  plVar11 = plVar15 + *(int *)(lVar3 + 0x578);
  for (; (lVar9 = 0, plVar15 != plVar11 &&
         ((lVar9 = *plVar15, lVar9 == 0 || (*(char *)(lVar9 + 0x30) != '\0'))));
      plVar15 = plVar15 + 1) {
  }
LAB_140c0d84a:
  if (lVar9 != 0) {
    local_128 = 0xffffffff;
    local_118 = (undefined **)0x0;
    ppuStack_110 = (undefined **)0x0;
    local_120 = &PTR_FUN_143f740c8;
    local_f8 = 0xffffffff;
    local_124 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f4 = 1;
    FWeakObjectPtr::operator=(&local_f0,0);
    ppuVar7 = ppuStack_110;
    local_128 = param_2;
    ppuVar5 = ppuStack_110;
    if (param_3 != &local_120) {
      ppuVar4 = param_3[1];
      ppuVar5 = param_3[2];
      if (ppuVar5 != (undefined **)0x0) {
        LOCK();
        *(int *)(ppuVar5 + 1) = *(int *)(ppuVar5 + 1) + 1;
        UNLOCK();
      }
      local_e8._0_4_ = SUB84(ppuVar4,0);
      local_70 = (undefined4)local_e8;
      local_e8._4_4_ = (undefined4)((ulonglong)ppuVar4 >> 0x20);
      uStack_6c = local_e8._4_4_;
      uStack_e0._0_4_ = SUB84(ppuVar5,0);
      uStack_68 = (undefined4)uStack_e0;
      uStack_e0._4_4_ = (undefined4)((ulonglong)ppuVar5 >> 0x20);
      uStack_64 = uStack_e0._4_4_;
      local_e8 = local_118;
      uStack_e0 = ppuStack_110;
      local_118 = ppuVar4;
      if (ppuStack_110 != (undefined **)0x0) {
        LOCK();
        ppuVar4 = ppuStack_110 + 1;
        iVar2 = *(int *)ppuVar4;
        *(int *)ppuVar4 = *(int *)ppuVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          puVar17 = (undefined8 *)*ppuStack_110;
          ppuStack_110 = ppuVar5;
          (*(code *)*puVar17)(ppuVar7);
          LOCK();
          piVar1 = (int *)((longlong)ppuVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          ppuVar5 = ppuStack_110;
          if (iVar2 == 1) {
            (**(code **)(*uStack_e0 + 8))(uStack_e0,1);
            ppuVar5 = ppuStack_110;
          }
        }
      }
    }
    ppuStack_110 = ppuVar5;
    TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(&local_108,param_3 + 3);
    puVar17 = local_138;
    local_124 = *(undefined4 *)(lVar9 + 0x40);
    if (param_4 == 0) {
      local_b8 = *local_138;
      local_b0 = *(undefined4 *)(local_138 + 1);
      local_148 = lVar9;
      FUN_140c05700(param_1,0,param_3,&local_b8);
    }
    else if ((param_4 != param_1[0x109]) &&
            (lVar12 = (**(code **)(*param_1 + 0x758))(param_1), puVar17 = local_138,
            param_4 != lVar12)) {
      local_f4 = 0;
      FWeakObjectPtr::operator=(&local_f0,param_4);
      if (*(char *)(lVar9 + 0x44) != '\0') {
        lVar12 = ALandscapeStreamingProxy::StaticClass();
        if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        lVar12 = param_4;
        if (((bVar6) && (*(char *)(param_4 + 0x658) != '\0')) &&
           (lVar13 = FUN_140ad6100(param_4,param_1), lVar13 != 0)) {
          lVar14 = FUN_1428dfc70();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            lVar12 = lVar13;
          }
        }
        if (lVar12 != 0) {
          local_f8 = FUN_140c233d0(lVar12,local_128,lVar9);
        }
      }
      puVar17 = local_138;
      local_c8 = *local_138;
      local_c0 = *(undefined4 *)(local_138 + 1);
      local_148 = lVar9;
      FUN_140c05700(param_1,param_4,param_3,&local_c8);
    }
    FUN_140c21880(param_1,lVar3,param_3);
    if (*(longlong *)(lVar3 + 0x560) != 0) {
      local_130 = 0;
      local_a8 = 0;
      local_98 = *puVar17;
      local_a0 = 0;
      local_90 = *(undefined4 *)(puVar17 + 1);
      local_140 = &local_a8;
      local_148 = CONCAT44(local_148._4_4_,0x42480000);
      FUN_1405a1e30(local_88,local_d8,*(longlong *)(lVar3 + 0x560),&local_98);
      FUN_140591060(local_88);
    }
    iVar2 = (int)param_1[0x330];
    *(int *)(param_1 + 0x330) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x1984) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x32f,iVar2);
    }
    puVar16 = (undefined4 *)((longlong)iVar2 * 0x40 + param_1[0x32f]);
    *puVar16 = local_128;
    puVar16[1] = local_124;
    *(undefined ***)(puVar16 + 2) = &PTR_FUN_143f73d18;
    *(undefined ***)(puVar16 + 4) = local_118;
    *(undefined ***)(puVar16 + 6) = ppuStack_110;
    if (ppuStack_110 != (undefined **)0x0) {
      LOCK();
      *(int *)(ppuStack_110 + 1) = *(int *)(ppuStack_110 + 1) + 1;
      UNLOCK();
    }
    *(undefined ***)(puVar16 + 2) = &PTR_FUN_143f740c8;
    *(undefined8 *)(puVar16 + 8) = 0;
    *(undefined8 *)(puVar16 + 10) = 0;
    puVar16[0xc] = local_f8;
    *(undefined1 *)(puVar16 + 0xd) = local_f4;
    puVar16[0xe] = local_f0;
    puVar16[0xf] = local_ec;
    FUN_1404bf980(&local_120);
  }
  return;
}



// FUNCTION 140c0dc30 FUN_140c0dc30 body=298 status=ok
// SIG undefined FUN_140c0dc30(void)

void FUN_140c0dc30(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 local_res10;
  
  FName::FName(&local_res10,"EditorStyle",1);
  *param_3 = local_res10;
  if (param_2 != 0) {
    lVar2 = FUN_141437870();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      switch(*(undefined1 *)(param_2 + 0x4c0)) {
      case 1:
        pcVar3 = "LevelEditor.MissionPlot";
        break;
      case 2:
        pcVar3 = "LevelEditor.MissionSecondary";
        break;
      case 3:
        pcVar3 = "LevelEditor.MissionSecondary";
        break;
      case 4:
        pcVar3 = "LevelEditor.MissionSecondary";
        break;
      case 5:
        pcVar3 = "LevelEditor.MissionSecondary";
        break;
      case 6:
        pcVar3 = "LevelEditor.MissionSecondary";
        break;
      default:
        FName::FName(&local_res10,"OakStyleSet",1);
        pcVar3 = "OakEditor.MissionCrew";
        *param_3 = local_res10;
      }
      goto LAB_140c0dd32;
    }
  }
  pcVar3 = "LevelEditor.MissionNone";
LAB_140c0dd32:
  FName::FName(&local_res10,pcVar3,1);
  *param_4 = local_res10;
  return;
}



// FUNCTION 140c0dd80 FUN_140c0dd80 body=296 status=ok
// SIG undefined FUN_140c0dd80(void)

void FUN_140c0dd80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong local_res8;
  
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AOakMissionRareSpawner::DoRareSpawnSocialLogic",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res8,pwVar4 + 2,1);
  plVar1 = (longlong *)(param_1 + 0x4c0);
  lVar2 = *plVar1;
  iVar9 = *(int *)(param_1 + 0x4c8);
  lVar10 = lVar2;
  do {
    if (lVar10 == (longlong)iVar9 * 0x10 + lVar2) {
LAB_140c0de82:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      FUN_142227880(param_1);
      return;
    }
    if (((*(longlong *)(lVar10 + 8) == local_res8) && (param_1 != 0)) &&
       (lVar6 = FWeakObjectPtr::GetEvenIfUnreachable(lVar10), param_1 == lVar6)) {
      iVar9 = (int)(lVar10 - lVar2 >> 4);
      if (iVar9 != -1) {
        iVar8 = *(int *)(param_1 + 0x4c8);
        iVar7 = (iVar8 - iVar9) + -1;
        if (0 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0x10 + *plVar1),
                     (void *)((longlong)(iVar8 - iVar7) * 0x10 + *plVar1),(longlong)iVar7 << 4);
          iVar8 = *(int *)(param_1 + 0x4c8);
        }
        *(int *)(param_1 + 0x4c8) = iVar8 + -1;
      }
      goto LAB_140c0de82;
    }
    lVar10 = lVar10 + 0x10;
  } while( true );
}



// FUNCTION 140c0deb0 FUN_140c0deb0 body=105 status=ok
// SIG undefined FUN_140c0deb0(void)

void FUN_140c0deb0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (((lVar1 != 0) && (lVar1 = UWorld::GetAuthGameMode<ABaseGameMode>(lVar1), lVar1 != 0)) &&
     (lVar1 = FUN_142d84360(lVar1), lVar1 != 0)) {
    FUN_1407665e0(lVar1 + 0x458,param_1);
    FUN_1407665e0(lVar1 + 0x468,param_1);
  }
  FUN_142227880(param_1);
  return;
}



// FUNCTION 140c0df20 thunk_FUN_142227880 body=5 status=ok
// SIG undefined thunk_FUN_142227880(void)

void thunk_FUN_142227880(void)

{
  FUN_142227880();
  return;
}



// FUNCTION 140c0df30 FUN_140c0df30 body=69 status=ok
// SIG undefined FUN_140c0df30(void)

void FUN_140c0df30(longlong param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_1407cde20();
  FUN_1407c4e90(param_1);
  cVar2 = FUN_1407cde20(param_1);
  if ((cVar2 == '\0') && (cVar1 != '\0')) {
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x7c8);
  }
  return;
}



// FUNCTION 140c0df80 FUN_140c0df80 body=118 status=ok
// SIG undefined FUN_140c0df80(void)

void FUN_140c0df80(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 400), lVar3 != 0)) {
    lVar4 = FUN_14141f270();
    lVar1 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140bd7830(lVar3,CONCAT71((int7)((ulonglong)lVar1 >> 8),6));
      return;
    }
  }
  return;
}



// FUNCTION 140c0e000 FUN_140c0e000 body=126 status=ok
// SIG undefined FUN_140c0e000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c0e000(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  
  cVar1 = FWeakObjectPtr::IsValid(&DAT_14686ae48);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(&DAT_14686ae48);
    FWeakObjectPtr::operator=(local_res8,0);
    _DAT_14686ae48 = local_res8[0];
    _DAT_146298628 = 0xffffffff;
    thunk_FUN_142eb3990(uVar2);
  }
  FWeakObjectPtr::operator=(local_res8,0);
  _DAT_14686ae48 = local_res8[0];
  _DAT_146298628 = 0xffffffff;
  return;
}



// FUNCTION 140c0e080 FUN_140c0e080 body=480 status=ok
// SIG undefined FUN_140c0e080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c0e080(undefined4 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x19);
  if (cVar1 != '\0') {
    param_2 = FWeakObjectPtr::Get(param_1 + 0x19);
  }
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x01') {
    if ((param_2 != 0) && (*(longlong *)(param_2 + 0x1428) != 0)) {
      FUN_140c0e260(param_1,param_2);
      return;
    }
  }
  else {
    if (cVar1 == '\x02') {
      if (param_2 == 0) {
        return;
      }
      cVar1 = FWeakObjectPtr::IsValid(&DAT_14686ae48);
      if (cVar1 != '\0') {
        return;
      }
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x1b);
      cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x1b);
      uVar2 = FUN_1410f3960(param_2,param_1 + 6,param_1 + 0xc,param_1 + 0x14,cVar1 == '\0',uVar2,
                            *(undefined1 *)(param_1 + 0x18));
    }
    else if (cVar1 == '\x03') {
      if (param_2 == 0) {
        return;
      }
      cVar1 = FWeakObjectPtr::IsValid(&DAT_14686ae48);
      if (cVar1 != '\0') {
        return;
      }
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x1b);
      cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x1b);
      uVar2 = FUN_1410f47a0(param_2,param_1 + 6,param_1 + 0xc,param_1 + 0x14,cVar1 == '\0',uVar2,
                            *(undefined1 *)(param_1 + 0x18),0,1);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (param_2 == 0) {
        return;
      }
      cVar1 = FWeakObjectPtr::IsValid(&DAT_14686ae48);
      if (cVar1 != '\0') {
        return;
      }
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x1b);
      cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x1b);
      uVar2 = FUN_1410f2c40(param_2,param_1 + 6,param_1 + 0xc,param_1 + 0x14,cVar1 == '\0',uVar2,
                            *(undefined1 *)(param_1 + 0x18),1);
    }
    FWeakObjectPtr::operator=(&DAT_14686ae48,uVar2);
    _DAT_146298628 = *param_1;
  }
  return;
}



// FUNCTION 140c0e260 FUN_140c0e260 body=489 status=ok
// SIG undefined FUN_140c0e260(void)

void FUN_140c0e260(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  
  bVar4 = *(byte *)(param_1 + 5);
  if ((*(longlong *)(param_1 + 8) == 0) ||
     (((0xd < bVar4 || ((0x2c02U >> (bVar4 & 0x1f) & 1) == 0)) && (bVar4 != 2)))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  bVar5 = (byte)(bVar4 - 1) < 2;
  cVar8 = FText::IsEmpty(param_1 + 0x18);
  if (cVar8 == '\0') {
    if (!bVar6) {
      FUN_1411db4f0(*(undefined8 *)(param_2 + 0x1428),local_res18,param_1 + 0x18,param_1 + 0x30,
                    *(undefined4 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x74),2);
      return;
    }
    local_50 = *(undefined8 *)(param_1 + 8);
    local_48 = *(longlong **)(param_1 + 0x10);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    FUN_1411db600(*(undefined8 *)(param_2 + 0x1428),local_res8,param_1 + 0x18,param_1 + 0x30,
                  &local_50,*(undefined4 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x74),2,bVar5)
    ;
    plVar9 = local_48;
  }
  else {
    if (!bVar6) {
      FUN_1411db570(*(undefined8 *)(param_2 + 0x1428),local_58,param_1 + 0x30,
                    *(undefined4 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x74),2);
      return;
    }
    local_40 = *(undefined8 *)(param_1 + 8);
    local_38 = *(longlong **)(param_1 + 0x10);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_1411db710(*(undefined8 *)(param_2 + 0x1428),local_res20,param_1 + 0x30,&local_40,
                  *(undefined4 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x74),2,bVar5);
    plVar9 = local_38;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c0e450 FUN_140c0e450 body=260 status=ok
// SIG undefined FUN_140c0e450(void)

void FUN_140c0e450(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong local_res8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(char *)((longlong)param_1 + 0x851) != '\0') {
    lVar4 = (**(code **)(*param_1 + 0x148))();
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = UWorld::GetGameState<APVPGameState>(lVar4);
    }
    local_res8 = param_1[0xe7];
    if (((lVar4 != 0) && (local_res8 != 0)) &&
       (lVar5 = FUN_142f71d80(), lVar7 = local_res8, local_res8 != 0)) {
      while (lVar7 != lVar5) {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return;
        }
      }
      if (param_1[0x100] != 0) {
        uVar6 = FUN_142f5bb60(&local_res8);
        FUN_142dea370(uVar6,local_28);
        FUN_141425f60(lVar4,param_1,local_res8,param_1[0x100]);
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_20 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar2 = (int *)((longlong)local_20 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_20 + 8))(local_20,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c0e560 FUN_140c0e560 body=1312 status=ok
// SIG undefined FUN_140c0e560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c0e560(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  bool bVar11;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_1c0;
  longlong *plStack_1b8;
  longlong local_1a8;
  longlong *plStack_1a0;
  undefined **local_198;
  undefined8 local_190;
  longlong *local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  wchar_t *local_168 [2];
  longlong local_158;
  longlong *plStack_150;
  undefined1 local_148 [32];
  undefined1 local_128 [8];
  longlong *local_120;
  longlong *local_118;
  undefined1 local_110 [40];
  undefined **local_e8 [18];
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  
  plVar7 = (longlong *)0x0;
  local_170 = 0;
  local_res10[0] = 0;
  local_res18 = 0;
  plVar5 = (longlong *)FUN_1404b0000(&local_170);
  bVar11 = plVar5 != (longlong *)0x0;
  if (bVar11) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0xa8))(plVar5,local_128);
    plVar7 = (longlong *)*puVar6;
  }
  else {
    puVar6 = &local_1c0;
    local_1c0 = 0;
    plStack_1b8 = (longlong *)0x0;
  }
  plVar5 = (longlong *)puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar11) {
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)local_120 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
  }
  plVar1 = plStack_1b8;
  if ((!bVar11) && (plStack_1b8 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_1b8 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_1b8)(plStack_1b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_1b8 + 8))(plStack_1b8,1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x118))(plVar7,local_res10);
  }
  if (DAT_14686ae20 == '\0') {
    puVar6 = (undefined8 *)FUN_140c11eb0();
    if (puVar6 != &DAT_14686ae08) {
      DAT_14686ae08 = *puVar6;
      DAT_14686ae10 = (longlong *)puVar6[1];
      _DAT_14686ae18 = puVar6[2];
      DAT_14686ae20 = '\x01';
    }
  }
  cVar4 = FUN_142190080(DAT_14686ae08);
  if (cVar4 != '\0') {
    cVar4 = FUN_142194620(DAT_14686ae08);
    if (cVar4 != '\0') {
      FUN_142190c10(&local_1a8,DAT_14686ae08);
      lVar8 = *(longlong *)(local_1a8 + 0xc0);
      if (*(longlong *)(local_1a8 + 0xc0) == 0) {
        lVar8 = local_1a8 + 0x20;
      }
      plVar7 = (longlong *)FUN_140aa2bd0(lVar8);
      local_190 = *param_1;
      local_188 = (longlong *)param_1[1];
      if (local_188 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_188 + 1) = (int)local_188[1] + 1;
        UNLOCK();
      }
      local_198 = &PTR_FUN_143f740c8;
      local_180 = 0;
      local_178 = 0;
      local_res20 = 0;
      if (*DAT_14686ae10 != 0) {
        cVar4 = FUN_1407ce010(DAT_14686ae10 + 1);
        if (cVar4 != '\0') {
          plVar10 = (longlong *)*plVar7;
          plVar1 = plVar10 + (longlong)(int)plVar7[1] * 5;
          if (plVar10 != plVar1) {
            do {
              if ((*(longlong *)*plVar10 == *DAT_14686ae10) &&
                 (*(longlong *)(((longlong *)*plVar10)[1] + 0x28) ==
                  *(longlong *)(DAT_14686ae10[1] + 0x28))) {
                FUN_14217e740(local_148);
                FUN_142194380(local_148,100,1,0,0);
                FArchive::FArchive(local_e8);
                local_58 = 0;
                local_e8[0] = &PTR_FUN_143f4a100;
                local_50 = local_148;
                local_48 = 0;
                FArchive::SetIsSaving(local_e8,1);
                FArchive::SetIsPersistent(local_e8,1);
                FUN_1425da060(local_e8,&local_198);
                FArchive::~FArchive(local_e8);
                FUN_14217f450(plVar10 + 1,local_148);
                puVar9 = local_148;
                goto LAB_140c0e827;
              }
              plVar10 = plVar10 + 5;
            } while (plVar10 != plVar1);
          }
          local_118 = DAT_14686ae10;
          FUN_140bf95b0(local_110,&local_198);
          iVar3 = (int)plVar7[1];
          *(int *)(plVar7 + 1) = iVar3 + 1;
          if (*(int *)((longlong)plVar7 + 0xc) < iVar3 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar7,iVar3);
          }
          puVar6 = (undefined8 *)(*plVar7 + (longlong)iVar3 * 0x28);
          *puVar6 = local_118;
          FUN_14217e5b0(puVar6 + 1,local_110);
          puVar9 = local_110;
LAB_140c0e827:
          FUN_14217f430(puVar9);
        }
      }
      local_198 = &PTR_FUN_143f740c8;
      if (local_180 != 0) {
        FMemory::Free();
      }
      plVar1 = local_188;
      local_198 = &PTR_FUN_143f73d18;
      if (local_188 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_188 + 1;
        lVar8 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_188)(local_188);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      if (local_res10[0] == 0) {
        local_168[0] = L"Unknown";
      }
      else if (local_res10[0] == 1) {
        local_168[0] = L"Trial";
      }
      else if (local_res10[0] == 2) {
        local_168[0] = L"Full";
      }
      else {
        local_168[0] = L"";
      }
      FUN_140bfb0b0(plVar7,&DAT_14686ae18,local_168);
      cVar4 = FUN_14218a740(&local_1a8,1);
      if (cVar4 != '\0') {
        local_158 = local_1a8;
        plStack_150 = plStack_1a0;
        if (plStack_1a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1a0 + 1) = (int)plStack_1a0[1] + 1;
          UNLOCK();
        }
        FUN_142194040(&local_158);
        plVar7 = plStack_150;
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_150 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_150)(plStack_150);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
      }
      if (plStack_1a0 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_1a0 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_1a0)(plStack_1a0);
          LOCK();
          piVar2 = (int *)((longlong)plStack_1a0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_1a0 + 8))(plStack_1a0,1);
          }
        }
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140c0ea80 FUN_140c0ea80 body=295 status=ok
// SIG undefined FUN_140c0ea80(void)

void FUN_140c0ea80(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x20);
    do {
      plVar4 = (longlong *)plVar7[3];
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
      plVar4 = (longlong *)*plVar7;
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
      plVar4 = (longlong *)plVar7[-2];
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
      plVar7 = plVar7 + 0xf;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 140c0ebb0 FUN_140c0ebb0 body=120 status=ok
// SIG undefined FUN_140c0ebb0(void)

void FUN_140c0ebb0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x88);
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_14217f430(lVar1);
    lVar1 = lVar1 + 0x20;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != param_2) {
    FUN_140a70170(param_1,param_2);
  }
  return;
}



// FUNCTION 140c0ec30 FUN_140c0ec30 body=2341 status=ok
// SIG undefined FUN_140c0ec30(void)

void FUN_140c0ec30(longlong param_1,char param_2)

{
  void **ppvVar1;
  byte *pbVar2;
  bool bVar3;
  void *_Src;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  float *pfVar10;
  longlong *plVar11;
  longlong lVar12;
  float fVar13;
  ulonglong in_stack_ffffffffffffff48;
  uint uVar14;
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined8 local_7c;
  undefined1 local_74 [12];
  void *local_68;
  ulonglong local_60;
  
  iVar4 = FUN_142235230();
  if (iVar4 == 3) {
    return;
  }
  if (param_2 == '\0') {
    plVar9 = *(longlong **)(param_1 + 0x488);
    if (plVar9 == (longlong *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000140c0f485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x638))(plVar9,0);
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x458) + 0xd0) == 0) {
    return;
  }
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar8 + 0x38) < DAT_14686bc48) &&
     (_Init_thread_header(&DAT_14686bc48), DAT_14686bc48 == -1)) {
    FName::FName(&DAT_14686bc40,L"OverlapCollision",1);
    _Init_thread_footer(&DAT_14686bc48);
  }
  iVar4 = 0;
  if (*(longlong *)(param_1 + 0x488) == 0) {
    if ((*(int *)(lVar8 + 0x38) < DAT_14686bc58) &&
       (_Init_thread_header(&DAT_14686bc58), DAT_14686bc58 == -1)) {
      FName::FName(&DAT_14686bc50,L"ElementalOverlap",1);
      _Init_thread_footer(&DAT_14686bc58);
    }
    local_68 = (void *)0x0;
    local_60 = 0x10;
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_68);
    _Src = local_68;
    _guard_xfg_dispatch_icall_nop(local_68,0,0xc0);
    pfVar10 = (float *)((longlong)_Src + 0x68);
    local_7c = 0;
    do {
      local_80 = *(undefined4 *)(*(longlong *)(param_1 + 0x458) + 0x80);
      puVar5 = (undefined8 *)
               FVector::RotateAngleAxis(&local_80,local_74,(float)iVar4 * 45.0,&DAT_1464aa798);
      uVar14 = (uint)(in_stack_ffffffffffffff48 >> 0x20);
      iVar4 = iVar4 + 1;
      *(undefined8 *)(pfVar10 + -0x1a) = *puVar5;
      pfVar10[-0x18] = *(float *)(puVar5 + 1);
      *(undefined8 *)(pfVar10 + -2) = *puVar5;
      *pfVar10 = *(float *)(puVar5 + 1);
      *pfVar10 = *pfVar10 + 50.0;
      lVar7 = DAT_14686bc40;
      pfVar10 = pfVar10 + 3;
    } while (iVar4 < 8);
    if (DAT_14686bc40 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar6 = FUN_14294b230();
    in_stack_ffffffffffffff48 = (ulonglong)uVar14 << 0x20;
    lVar7 = FUN_1417985e0(uVar6,param_1,lVar7,0,in_stack_ffffffffffffff48,0,0,0,0);
    *(longlong *)(param_1 + 0x488) = lVar7;
    ppvVar1 = (void **)(lVar7 + 0x710);
    if (ppvVar1 != &local_68) {
      lVar12 = (longlong)(int)local_60;
      *(int *)(lVar7 + 0x718) = (int)local_60;
      if (((int)local_60 == 0) && (*(int *)(lVar7 + 0x71c) == 0)) {
        *(undefined4 *)(lVar7 + 0x71c) = 0;
      }
      else {
        TArray<FVector,FDefaultAllocator>::ResizeForCopy(ppvVar1,local_60 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,lVar12 * 0xc);
      }
    }
    FUN_142397000(*(undefined8 *)(param_1 + 0x488),0,0,1);
    *(undefined4 *)(*(longlong *)(param_1 + 0x488) + 0x1f8) = 0x42b40000;
    FUN_142399e30(*(undefined8 *)(param_1 + 0x488),*(undefined8 *)(param_1 + 0x168),0);
    (**(code **)(**(longlong **)(param_1 + 0x488) + 0x640))
              (*(longlong **)(param_1 + 0x488),DAT_14686bc50);
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0x488) + 0x2f1);
    *pbVar2 = *pbVar2 & 0xef;
    FUN_1423974f0(*(undefined8 *)(param_1 + 0x488),1);
    FUN_14234b150(*(undefined8 *)(param_1 + 0x488));
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
  }
  if (*(longlong *)(param_1 + 0x490) != 0) {
    return;
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_14686bc68) &&
     (_Init_thread_header(&DAT_14686bc68), DAT_14686bc68 == -1)) {
    FName::FName(&DAT_14686bc60,L"ElementalInteraction",1);
    _Init_thread_footer(&DAT_14686bc68);
  }
  lVar8 = DAT_14686bc60;
  if (DAT_14686bc60 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar6 = UInputKeySelector::GetPrivateStaticClass();
  uVar6 = FUN_1417985e0(uVar6,param_1,lVar8,0,in_stack_ffffffffffffff48 & 0xffffffff00000000,0,0,0,0
                       );
  *(undefined8 *)(param_1 + 0x490) = uVar6;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar8 = DAT_146b33f38;
  lVar12 = DAT_146b33f38 + 0x30;
  lVar7 = FWeakObjectPtr::Get(lVar12);
  if (lVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar8 + 0x38)) || (*(longlong *)(lVar8 + 0x40) == 0))
    goto LAB_140c0f1f0;
    lVar7 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar12,lVar7);
    if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar8 + 0x38) = DAT_1464b56f4;
    }
    lVar7 = FWeakObjectPtr::Get(lVar12);
    if (lVar7 == 0) goto LAB_140c0f1f0;
  }
  lVar8 = FUN_142e0ceb0();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar8 = FUN_1414150f0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar8 = *(longlong *)(param_1 + 0x490);
      lVar12 = *(longlong *)(param_1 + 0x458);
      iVar4 = *(int *)(lVar8 + 0x198);
      *(int *)(lVar8 + 0x198) = iVar4 + 1;
      if (*(int *)(lVar8 + 0x19c) < iVar4 + 1) {
        TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeGrow(lVar8 + 400,iVar4);
      }
      uVar6 = *(undefined8 *)(lVar12 + 0xd0);
      puVar5 = (undefined8 *)((longlong)iVar4 * 0xf8 + *(longlong *)(lVar8 + 400));
      *(byte *)((longlong)puVar5 + 0x14) = *(byte *)((longlong)puVar5 + 0x14) & 0xf0;
      *puVar5 = uVar6;
      *(undefined4 *)(puVar5 + 1) = 0x3f800000;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0x3f800000;
      *(undefined4 *)(puVar5 + 2) = 0xbf800000;
      *(undefined4 *)(puVar5 + 3) = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      *(undefined4 *)(puVar5 + 9) = 0x3f800000;
      *(undefined4 *)(puVar5 + 10) = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      *(undefined4 *)(puVar5 + 0x10) = 0x3f800000;
      *(undefined4 *)(puVar5 + 0x11) = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      puVar5[0x14] = 0;
      puVar5[0x15] = 0;
      puVar5[0x16] = 0;
      *(undefined4 *)(puVar5 + 0x17) = 0x3f800000;
      *(undefined4 *)(puVar5 + 0x18) = 0;
      puVar5[0x19] = 0;
      puVar5[0x1a] = 0;
      puVar5[0x1b] = 0;
      puVar5[0x1c] = 0;
      puVar5[0x1d] = 0;
      *(undefined4 *)(puVar5 + 0x1e) = 0x3f800000;
      pbVar2 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x490) + 400) + 0x14);
      *pbVar2 = *pbVar2 | 1;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x490) + 400);
      if ((*(byte *)(*(longlong *)(param_1 + 0x458) + 0x30) & 0x10) == 0) {
        fVar13 = (float)FUN_142c98860(lVar7 + 0x758,*(undefined8 *)(param_1 + 0x150));
        fVar13 = fVar13 * *(float *)(*(longlong *)(param_1 + 0x458) + 0x90);
      }
      else {
        fVar13 = (float)FUN_142c98860(*(longlong *)(param_1 + 0x458) + 0x98,
                                      *(undefined8 *)(param_1 + 0x150));
      }
      *(float *)(lVar8 + 0x18) = fVar13;
    }
  }
LAB_140c0f1f0:
  *(undefined1 *)(*(longlong *)(param_1 + 0x490) + 0x184) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x490) + 0x185) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x490) + 0x268) = 1;
  lVar8 = *(longlong *)(param_1 + 0x490);
  iVar4 = *(int *)(lVar8 + 0x278);
  *(int *)(lVar8 + 0x278) = iVar4 + 1;
  if (*(int *)(lVar8 + 0x27c) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0x270,iVar4);
  }
  *(longlong *)(*(longlong *)(lVar8 + 0x270) + (longlong)iVar4 * 8) = DAT_14686bc40;
  *(undefined1 *)(*(longlong *)(param_1 + 0x490) + 0x290) = 1;
  lVar8 = *(longlong *)(param_1 + 0x490);
  iVar4 = *(int *)(lVar8 + 0x2a0);
  *(int *)(lVar8 + 0x2a0) = iVar4 + 1;
  if (*(int *)(lVar8 + 0x2a4) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0x298,iVar4);
  }
  *(longlong *)(*(longlong *)(lVar8 + 0x298) + (longlong)iVar4 * 8) = DAT_14686bc40;
  lVar8 = *(longlong *)(param_1 + 0x458);
  if (((*(byte *)(lVar8 + 0x30) & 4) != 0) && (*(longlong *)(lVar8 + 0x88) != 0)) {
    lVar12 = UProgressBar::GetPrivateStaticClass();
    for (lVar7 = *(longlong *)(lVar8 + 0x88); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar12) {
        if (*(longlong *)(lVar8 + 0x88) != 0) {
          lVar8 = *(longlong *)(param_1 + 0x490);
          plVar11 = (longlong *)(lVar8 + 0x1e0);
          plVar9 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_FUN_1441c0108;
            FWeakObjectPtr::operator=(plVar9 + 1,param_1);
            plVar9[2] = (longlong)FUN_140c1eef0;
            lVar7 = FDelegateHandle::GenerateNewID();
            plVar9[4] = lVar7;
            *plVar9 = (longlong)&PTR_FUN_1441c0150;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
            (**(code **)(*plVar9 + 0x20))(plVar9,local_88);
            iVar4 = *(int *)(lVar8 + 0x1e8);
            *(int *)(lVar8 + 0x1e8) = iVar4 + 1;
            if (*(int *)(lVar8 + 0x1ec) < iVar4 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar4);
            }
            puVar5 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar11);
            *puVar5 = plVar9;
            *(undefined4 *)(puVar5 + 1) = 3;
          }
        }
        break;
      }
    }
  }
  uVar6 = FUN_140a63ba0(param_1);
  uVar6 = FUN_142df3580(uVar6);
  *(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x2c0) = uVar6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x490) + 0x2c8) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x458) + 0x94);
  *(byte *)(*(longlong *)(param_1 + 0x490) + 0x2cc) =
       *(byte *)(*(longlong *)(param_1 + 0x458) + 0x30) >> 3 & 1;
  FUN_14234b150(*(undefined8 *)(param_1 + 0x490));
  FUN_142231800(param_1);
  FUN_140aa3670(*(undefined8 *)(param_1 + 0x490),
                *(undefined8 *)(*(longlong *)(param_1 + 0x458) + 0xd0));
  return;
}



// FUNCTION 140c0f560 FUN_140c0f560 body=77 status=ok
// SIG undefined FUN_140c0f560(void)

void FUN_140c0f560(longlong param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_1407cde20();
  FUN_1407c56b0(param_1);
  cVar2 = FUN_1407cde20(param_1);
  if ((cVar2 != '\0') && (cVar1 == '\0')) {
    FUN_140c09d90(param_1);
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x7b0);
  }
  return;
}



// FUNCTION 140c0f5b0 FUN_140c0f5b0 body=490 status=ok
// SIG undefined FUN_140c0f5b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c0f5b0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar2 = (**(code **)(*param_1 + 0x148))();
  plVar3 = (longlong *)FUN_142f6c9f0(uVar2);
  if ((plVar3 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar3 + 0x700))(plVar3), cVar1 != '\0')
     ) {
    FUN_140c0ad40(param_1,plVar3);
    return;
  }
  uStack_90 = 0;
  local_98 = FUN_140c0f5b0;
  uVar2 = AActor::GetWorldTimerManager(param_1);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_98;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_98._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_90;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_8c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_88 = 0;
  local_80 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
  }
  FWeakObjectPtr::operator=(local_78,0);
  local_a0 = 0xbf800000;
  local_a8 = 0;
  local_70 = 0;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_68 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar2,param_1 + 0xfe,&local_88,0x3dcccccd);
  if (local_28 != 0) {
    plVar5 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar5 = local_38;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
}



// FUNCTION 140c0f7a0 FUN_140c0f7a0 body=17 status=ok
// SIG undefined FUN_140c0f7a0(void)

void FUN_140c0f7a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lStackX_18;
  undefined1 auStackX_20 [8];
  longlong lStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *plStack_38;
  
  plVar2 = *(longlong **)(param_1 + 0xb0);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar9 = 0;
  FUN_140c136e0(&lStack_68,0);
  if (lStack_68 == 0) goto LAB_140c24344;
  lStackX_18 = (**(code **)(*plVar2 + 0x148))(plVar2);
  if ((lStackX_18 == 0) || (iVar5 = FUN_1428cf800(lStackX_18), iVar5 != 3)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  plStack_58 = &lStackX_18;
  plVar2[0xb] = 0;
  plStack_50 = plVar2;
  lVar6 = (**(code **)(*plVar2 + 0x148))(plVar2);
  if ((lVar6 == 0) || (plVar7 = (longlong *)FUN_142f6c9f0(lVar6), plVar7 == (longlong *)0x0)) {
    if (!bVar3) goto LAB_140c24344;
  }
  else {
    cVar4 = (**(code **)(*plVar7 + 0x700))(plVar7);
    if (cVar4 != '\0') {
      FUN_140c20d90(plVar2);
      goto LAB_140c24344;
    }
    if (!bVar3) {
      uStack_40 = 0;
      uStack_48 = FUN_140c20d90;
      plVar12 = plVar7 + 0xa2;
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      plStack_38 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar8 + 1,plVar2);
        *(undefined4 *)(plVar8 + 2) = (undefined4)uStack_48;
        *(undefined4 *)((longlong)plVar8 + 0x14) = uStack_48._4_4_;
        *(undefined4 *)(plVar8 + 3) = uStack_40;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_3c;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar9;
        *plVar8 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,1);
        plVar10 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,auStackX_20);
        iVar5 = (int)plVar7[0xa3];
        lVar9 = *plVar10;
        *(int *)(plVar7 + 0xa3) = iVar5 + 1;
        if (*(int *)((longlong)plVar7 + 0x51c) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar5);
        }
        puVar11 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar12);
        *puVar11 = plVar8;
        *(undefined4 *)(puVar11 + 1) = 3;
      }
      plVar2[9] = lVar9;
      goto LAB_140c24344;
    }
  }
  FUN_140c00ea0(&plStack_58);
LAB_140c24344:
  plVar2 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_60 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  return;
}



// FUNCTION 140c0f7c0 FUN_140c0f7c0 body=118 status=ok
// SIG undefined FUN_140c0f7c0(void)

void FUN_140c0f7c0(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *local_18;
  undefined8 local_10;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_142f6c9f0(uVar1);
  if (lVar2 != 0) {
    local_10 = 0;
    local_18 = param_1;
    uVar1 = FUN_142f768a0();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    FUN_142f6e000(lVar2,&local_18);
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 140c0f840 FUN_140c0f840 body=432 status=ok
// SIG undefined FUN_140c0f840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c0f840(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  longlong *local_28;
  undefined8 local_20;
  
  lVar8 = param_1[0xfc];
  iVar6 = 0;
  iVar4 = DAT_146533138;
  if (0 < DAT_146533138) {
    lVar9 = 0;
    do {
      plVar7 = (longlong *)(DAT_146533130 + lVar9);
      if ((((int)plVar7[1] != 0) && (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_146533138, *plVar2 == lVar8)) {
        if (((int)plVar7[1] != 0) && (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar7 != 0) {
            lVar8 = FMemory::Realloc(*plVar7,0,0);
            *plVar7 = lVar8;
          }
          *(undefined4 *)(plVar7 + 1) = 0;
          iVar4 = DAT_146533138;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + 0x10;
    } while (iVar6 < iVar4);
  }
  if (DAT_146533144 < 1) {
    iVar5 = 0;
    iVar6 = iVar4;
    if (0 < iVar4) {
      lVar8 = 0;
      do {
        if (((*(int *)(lVar8 + 8 + DAT_146533130) == 0) ||
            (*(longlong **)(lVar8 + DAT_146533130) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(lVar8 + DAT_146533130) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146533130,iVar5,1,1);
        }
        else {
          iVar5 = iVar5 + 1;
          lVar8 = lVar8 + 0x10;
        }
        iVar6 = DAT_146533138;
      } while (iVar5 < DAT_146533138);
    }
    _DAT_146533140 = iVar6 * 2;
    if (_DAT_146533140 < 3) {
      _DAT_146533140 = 2;
    }
    if ((_DAT_146533140 < iVar4) && (DAT_14653313c != iVar6)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146533130);
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar8 = FUN_142f6c9f0(uVar3);
  if (lVar8 != 0) {
    local_20 = 0;
    local_28 = param_1;
    uVar3 = FUN_142f768a0();
    local_20 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
    FUN_142f6e000(lVar8,&local_28);
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 140c0f9f0 FUN_140c0f9f0 body=547 status=ok
// SIG undefined FUN_140c0f9f0(void)

void FUN_140c0f9f0(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong local_res8;
  int local_38;
  int local_34;
  longlong local_30;
  
  FUN_142f56680();
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar4 != 0) && (lVar5 = UWorld::GetGameState<APVPGameState>(lVar4), lVar5 != 0)) {
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FName::FName(&local_res8,L"OnTravelIDsChanged",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    plVar10 = (longlong *)(lVar5 + 0xa28);
    piVar2 = (int *)*plVar10;
    iVar9 = *(int *)(lVar5 + 0xa30);
    local_30 = local_res8;
    for (piVar8 = piVar2; piVar8 != piVar2 + (longlong)iVar9 * 4; piVar8 = piVar8 + 4) {
      if ((((*piVar8 == local_38) && (piVar8[1] == local_34)) ||
          ((cVar3 = FWeakObjectPtr::IsValid(piVar8), cVar3 == '\0' &&
           (cVar3 = FWeakObjectPtr::IsValid(&local_38), cVar3 == '\0')))) &&
         (*(longlong *)(piVar8 + 2) == local_30)) {
        iVar9 = (int)((longlong)piVar8 - (longlong)piVar2 >> 4);
        if (iVar9 != -1) {
          iVar1 = *(int *)(lVar5 + 0xa30);
          iVar7 = (iVar1 - iVar9) + -1;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar9 * 0x10 + *plVar10),
                       (void *)((longlong)(iVar1 - iVar7) * 0x10 + *plVar10),(longlong)iVar7 << 4);
            iVar1 = *(int *)(lVar5 + 0xa30);
          }
          *(int *)(lVar5 + 0xa30) = iVar1 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar10);
        }
        break;
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
  }
  lVar4 = FUN_142f429c0(lVar4);
  if (lVar4 != 0) {
    lVar5 = param_1[0xdd];
    iVar9 = 0;
    if (0 < *(int *)(lVar4 + 0x508)) {
      lVar11 = 0;
      do {
        plVar10 = (longlong *)(*(longlong *)(lVar4 + 0x500) + lVar11);
        if ((((int)plVar10[1] != 0) && (plVar6 = (longlong *)*plVar10, plVar6 != (longlong *)0x0))
           && (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_res8),
              *plVar6 == lVar5)) {
          if (((int)plVar10[1] != 0) && (plVar6 = (longlong *)*plVar10, plVar6 != (longlong *)0x0))
          {
            (**(code **)(*plVar6 + 0x28))(plVar6,0);
            if (*plVar10 != 0) {
              lVar5 = FMemory::Realloc(*plVar10,0,0);
              *plVar10 = lVar5;
            }
            *(undefined4 *)(plVar10 + 1) = 0;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        lVar11 = lVar11 + 0x10;
      } while (iVar9 < *(int *)(lVar4 + 0x508));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x500,0);
    TBaseMulticastDelegate<void>::Remove(lVar4 + 0x518,param_1[0xde]);
  }
  return;
}



// FUNCTION 140c0fc20 FUN_140c0fc20 body=475 status=ok
// SIG undefined FUN_140c0fc20(void)

void FUN_140c0fc20(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong local_38;
  ulonglong local_30;
  int local_28;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = -1;
  uVar3 = FUN_14171bfe0();
  FUN_1417a5560(uVar3,&local_38,1,0x10,0);
  uVar8 = local_30 & 0xffffffff;
  do {
    local_28 = local_28 + 1;
    if ((int)local_30 <= local_28) break;
  } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
LAB_140c0fca6:
  if ((local_28 < 0) || ((int)uVar8 <= local_28)) {
    if (local_38 != 0) {
      FMemory::Free(local_38);
    }
    return;
  }
  plVar2 = *(longlong **)(local_38 + (longlong)local_28 * 8);
  plVar4 = (longlong *)FUN_1413f82e0();
  for (plVar5 = plVar2; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[6]) {
    if (plVar5 == plVar4) {
      lVar6 = plVar2[0x1f];
      if (lVar6 == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar6 = plVar2[0x1f];
        if (lVar6 == 0) break;
      }
      plVar5 = (longlong *)(**(code **)(*(longlong *)(lVar6 + 0x8c0) + 0x30))();
      if ((plVar5 != (longlong *)0x0) && (lVar6 = *(longlong *)(param_1 + 0x6f8), lVar6 != 0)) {
        plVar7 = (longlong *)*plVar5;
        plVar4 = plVar7 + (int)plVar5[1];
        goto joined_r0x000140c0fd42;
      }
      break;
    }
  }
  goto LAB_140c0fd93;
joined_r0x000140c0fd42:
  if (plVar7 == plVar4) goto LAB_140c0fd52;
  if (*plVar7 == lVar6) goto LAB_140c0fd73;
  plVar7 = plVar7 + 1;
  goto joined_r0x000140c0fd42;
LAB_140c0fd52:
  plVar4 = (longlong *)plVar5[2];
  plVar5 = plVar4 + (int)plVar5[3];
  for (; plVar4 != plVar5; plVar4 = plVar4 + 1) {
    if (*plVar4 == lVar6) goto LAB_140c0fd73;
  }
LAB_140c0fd93:
  uVar8 = local_30 & 0xffffffff;
  do {
    local_28 = local_28 + 1;
    if ((int)local_30 <= local_28) break;
  } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
  goto LAB_140c0fca6;
LAB_140c0fd73:
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong **)(*param_2 + (longlong)iVar1 * 8) = plVar2;
  goto LAB_140c0fd93;
}



// FUNCTION 140c0fe00 FUN_140c0fe00 body=560 status=ok
// SIG undefined FUN_140c0fe00(void)

void FUN_140c0fe00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong local_38;
  ulonglong local_30;
  int local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = -1;
  uVar5 = FUN_14171bfe0();
  FUN_1417a5560(uVar5,&local_38,1,0x10,0);
  uVar10 = local_30 & 0xffffffff;
  do {
    local_28 = local_28 + 1;
    if ((int)local_30 <= local_28) break;
  } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
LAB_140c0fe80:
  if ((local_28 < 0) || ((int)uVar10 <= local_28)) {
    if (local_38 != 0) {
      FMemory::Free(local_38);
    }
    return;
  }
  plVar3 = *(longlong **)(local_38 + (longlong)local_28 * 8);
  plVar6 = (longlong *)FUN_1413f82e0();
  for (plVar7 = plVar3; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[6]) {
    if (plVar7 == plVar6) {
      lVar8 = plVar3[0x1f];
      if (lVar8 == 0) {
        (**(code **)(*plVar3 + 0x368))(plVar3);
        lVar8 = plVar3[0x1f];
        if (lVar8 == 0) break;
      }
      plVar7 = (longlong *)(**(code **)(*(longlong *)(lVar8 + 0x8c0) + 0x30))();
      if (plVar7 != (longlong *)0x0) {
        lVar8 = *(longlong *)(param_1 + 0x6f8);
        if (lVar8 == 0) goto LAB_140c0ff65;
        plVar9 = (longlong *)*plVar7;
        plVar6 = plVar9 + (int)plVar7[1];
        goto joined_r0x000140c0ff26;
      }
      break;
    }
  }
  goto LAB_140c0ffc1;
joined_r0x000140c0ff26:
  if (plVar9 == plVar6) goto LAB_140c0ff42;
  if (*plVar9 == lVar8) goto LAB_140c10000;
  plVar9 = plVar9 + 1;
  goto joined_r0x000140c0ff26;
LAB_140c0ff42:
  plVar6 = (longlong *)plVar7[2];
  plVar7 = plVar6 + (int)plVar7[3];
  for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
    if (*plVar6 == lVar8) goto LAB_140c10000;
  }
LAB_140c0ff65:
  bVar4 = false;
LAB_140c0ff67:
  if (bVar4) {
    FSoftObjectPath::FSoftObjectPath(&local_20,plVar3);
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar1 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar1 = local_20;
    FString::FString(puVar1 + 1,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
LAB_140c0ffc1:
  uVar10 = local_30 & 0xffffffff;
  do {
    local_28 = local_28 + 1;
    if ((int)local_30 <= local_28) break;
  } while (*(longlong *)(local_38 + (longlong)local_28 * 8) == 0);
  goto LAB_140c0fe80;
LAB_140c10000:
  bVar4 = true;
  goto LAB_140c0ff67;
}



// FUNCTION 140c10030 FUN_140c10030 body=129 status=ok
// SIG undefined FUN_140c10030(void)

void FUN_140c10030(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_3 != '\0') {
    DAT_1462a0878 = 0;
    FUN_140c1a2e0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  lVar1 = (**(code **)(*plVar3 + 0x148))(plVar3);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
    plVar3 = (longlong *)FUN_142d5ecc0(uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar1 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
      if (lVar1 != 0) {
        TBaseMulticastDelegate<void>::Remove
                  (lVar1 + 0x38,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x40));
      }
    }
  }
  return;
}



// FUNCTION 140c100c0 FUN_140c100c0 body=102 status=ok
// SIG undefined FUN_140c100c0(void)

void FUN_140c100c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  param_1 = param_1 + 8;
  lVar1 = FWeakObjectPtr::Get(param_1);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1);
    FUN_140c27550(uVar2,4);
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1);
    uVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
    lVar1 = FUN_140aab610(uVar2);
    if (lVar1 != 0) {
      FUN_140ab8b20(lVar1,plVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 140c10130 FUN_140c10130 body=102 status=ok
// SIG undefined FUN_140c10130(void)

void FUN_140c10130(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  param_1 = param_1 + 8;
  lVar1 = FWeakObjectPtr::Get(param_1);
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1);
    FUN_140c27550(uVar2,2);
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1);
    uVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
    lVar1 = FUN_140aab610(uVar2);
    if (lVar1 != 0) {
      FUN_140ab8b20(lVar1,plVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 140c101a0 FUN_140c101a0 body=59 status=ok
// SIG undefined FUN_140c101a0(void)

undefined1 FUN_140c101a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined8 *)FName::FName(local_res10,L"GameContext",1);
  FUN_1421849d0(param_2 + 0x18,DAT_146aeb090,*puVar1);
  return 1;
}



// FUNCTION 140c101e0 FUN_140c101e0 body=131 status=ok
// SIG undefined FUN_140c101e0(void)

undefined8 FUN_140c101e0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (param_3 != '\0') {
    DAT_1462a0878 = 0;
    FUN_140c1a2e0(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  lVar1 = (**(code **)(*plVar3 + 0x148))(plVar3);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
    plVar3 = (longlong *)FUN_142d5ecc0(uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar1 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
      if (lVar1 != 0) {
        TBaseMulticastDelegate<void>::Remove
                  (lVar1 + 0x38,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x40));
      }
    }
  }
  return 1;
}



// FUNCTION 140c10270 FUN_140c10270 body=99 status=ok
// SIG undefined FUN_140c10270(void)

undefined1 FUN_140c10270(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  param_1 = param_1 + 8;
  lVar3 = FWeakObjectPtr::Get(param_1);
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1);
    FUN_140c27550(uVar1,4);
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
    uVar1 = (**(code **)(*plVar2 + 0x148))(plVar2);
    lVar3 = FUN_140aab610(uVar1);
    if (lVar3 != 0) {
      FUN_140ab8b20(lVar3,plVar2,1);
    }
  }
  return 1;
}



// FUNCTION 140c102e0 FUN_140c102e0 body=99 status=ok
// SIG undefined FUN_140c102e0(void)

undefined1 FUN_140c102e0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  param_1 = param_1 + 8;
  lVar3 = FWeakObjectPtr::Get(param_1);
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1);
    FUN_140c27550(uVar1,2);
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
    uVar1 = (**(code **)(*plVar2 + 0x148))(plVar2);
    lVar3 = FUN_140aab610(uVar1);
    if (lVar3 != 0) {
      FUN_140ab8b20(lVar3,plVar2,1);
    }
  }
  return 1;
}



// FUNCTION 140c10350 FUN_140c10350 body=67 status=ok
// SIG undefined FUN_140c10350(void)

undefined8 FUN_140c10350(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 200) != 0) {
    uVar1 = FUN_140a2f2a0(*(longlong *)(DAT_146b33f38 + 200),param_1);
    return uVar1;
  }
  return 1;
}



// FUNCTION 140c103a0 FUN_140c103a0 body=244 status=ok
// SIG undefined FUN_140c103a0(void)

undefined4 FUN_140c103a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = *param_2;
  lVar6 = (longlong)(int)param_2[1] * 0x78 + lVar4;
  lVar5 = lVar4;
  do {
    if (lVar5 == lVar6) {
      return 0xffffffff;
    }
    if ((*(char *)(lVar5 + 4) == *(char *)(param_1 + 4)) &&
       (*(char *)(lVar5 + 5) == *(char *)(param_1 + 5))) {
      puVar1 = *(undefined8 **)(param_1 + 8);
      if (*(longlong *)(lVar5 + 8) == 0) {
        if (puVar1 == (undefined8 *)0x0) {
LAB_140c1040a:
          cVar2 = FText::IdenticalTo(lVar5 + 0x18,param_1 + 0x18);
          if ((cVar2 != '\0') &&
             (cVar2 = FText::IdenticalTo(lVar5 + 0x30,param_1 + 0x30), cVar2 != '\0')) {
            if (lVar5 == lVar6) {
              return 0xffffffff;
            }
            lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar5 - lVar4),8) +
                    (lVar5 - lVar4);
            iVar3 = (int)(lVar4 >> 6) - (int)(lVar4 >> 0x3f);
            if (iVar3 < 0) {
              return 0xffffffff;
            }
            if ((int)param_2[1] <= iVar3) {
              return 0xffffffff;
            }
            return *(undefined4 *)((longlong)iVar3 * 0x78 + *param_2);
          }
        }
      }
      else if ((puVar1 != (undefined8 *)0x0) && (cVar2 = (**(code **)*puVar1)(), cVar2 != '\0'))
      goto LAB_140c1040a;
    }
    lVar5 = lVar5 + 0x78;
  } while( true );
}



// FUNCTION 140c104a0 FUN_140c104a0 body=119 status=ok
// SIG undefined FUN_140c104a0(void)

longlong FUN_140c104a0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar2 + 400);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140c10520 FUN_140c10520 body=394 status=ok
// SIG undefined FUN_140c10520(void)

void FUN_140c10520(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong in_stack_ffffffffffffffa8;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if ((param_3 != 0) && (param_2 != (longlong *)0x0)) {
    uVar2 = AArchVisCharacter::StaticClass();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)
               (**(code **)(*plVar3 + 0x8f8))
                         (plVar3,local_38,param_3,0,in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
      lVar7 = *plVar4;
      plVar4 = (longlong *)plVar4[1];
      if ((lVar7 == 0) || (plVar4 == (longlong *)0x0)) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x900))(plVar3,local_28);
        lVar7 = *plVar3;
        plVar4 = (longlong *)plVar3[1];
      }
      if ((lVar7 != 0) && (plVar4 != (longlong *)0x0)) {
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_48);
        *param_4 = *puVar5;
        *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar5 + 1);
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x28))(plVar4,local_48);
        *param_5 = *puVar5;
        *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar5 + 1);
        lVar6 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar6 = *(longlong *)(param_3 + 0x990);
        }
        else {
          lVar6 = 0;
        }
        if (lVar6 == 0) {
          return;
        }
        *(longlong *)(lVar6 + 0x1128) = lVar7;
        *(longlong **)(lVar6 + 0x1130) = plVar4;
        return;
      }
    }
  }
  FUN_14244c280(param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 140c106b0 FUN_140c106b0 body=1451 status=ok
// SIG undefined FUN_140c106b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140c106b0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_88;
  undefined4 local_80;
  undefined1 local_78 [16];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  int local_2c;
  
  plVar8 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"travelstation",0x1c);
  uVar4 = FString::FString(&local_58,param_1 + 0x8b);
  UGameplayStatics::ParseOption(&local_38,uVar4,&local_48);
  if (local_48 != 0) {
    FMemory::Free();
  }
  plVar10 = plVar8;
  if (param_2 == (longlong *)0x0) {
LAB_140c1084f:
    bVar1 = true;
  }
  else {
    lVar5 = FUN_14145f370();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar3 = (**(code **)(*param_1 + 0xa20))(param_1);
      if (cVar3 == '\0') {
        if (*(char *)((longlong)param_2 + 0x1a04) == '\0') goto LAB_140c107dc;
      }
      else {
        cVar3 = APlayerController::IsPrimaryPlayer(param_2);
        if (cVar3 != '\0') {
          if (((*(uint *)((longlong)param_2 + 0x4cc) >> 1 & 1) == 0) ||
             (cVar3 = (**(code **)(*param_2 + 0x768))(param_2), cVar3 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_140c107dc;
        }
      }
      local_30 = 0;
      if (local_2c != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,0);
      }
    }
LAB_140c107dc:
    lVar5 = FUN_1429e18b0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c1084f;
    if (((*(uint *)((longlong)param_2 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar3 = (**(code **)(*param_2 + 0x768))(param_2), cVar3 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar10 = param_2;
    if ((bVar1) && (cVar3 = APlayerController::IsPrimaryPlayer(param_2), cVar3 != '\0'))
    goto LAB_140c1084f;
    bVar1 = false;
  }
  plVar6 = (longlong *)FUN_14244c3a0(param_1);
  if ((plVar6 != (longlong *)0x0) || (plVar6 = plVar8, param_2 == (longlong *)0x0))
  goto LAB_140c10c18;
  cVar3 = FUN_140bf9670(0,param_2 + 0x8d);
  if (cVar3 == '\0') {
    lVar5 = UUGRichTextBlock::GetPrivateStaticClass();
    lVar7 = FWeakObjectPtr::Get(param_2 + 0x8d);
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140c10c18;
  }
  if (param_1[0x97] == 0) {
    lVar5 = 0;
LAB_140c10a19:
    plVar6 = plVar9;
    if (!bVar1) {
      local_88 = _DAT_1468b5d90;
      local_80 = DAT_1468b5d98;
      if (plVar10[0x91] != 0) {
        lVar7 = *(longlong *)(plVar10[0x91] + 0x168);
        if (lVar7 == 0) {
          local_60 = DAT_1468b5d98;
          local_68 = _DAT_1468b5d90;
        }
        else {
          local_68 = *(longlong *)(lVar7 + 0x220);
          local_60 = *(undefined4 *)(lVar7 + 0x228);
          local_88 = local_68;
          local_80 = local_60;
        }
      }
      local_40 = CONCAT44(local_40._4_4_,local_80);
      local_48 = local_88;
      if (lVar5 != 0) {
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar7 = FUN_142f3fe10(lVar5,uVar4,&local_88,0);
        if ((lVar7 != 0) && (*(longlong **)(lVar7 + 0x118) != (longlong *)0x0)) {
          plVar6 = *(longlong **)(lVar7 + 0x118);
        }
      }
    }
  }
  else {
    lVar5 = *(longlong *)(param_1[0x97] + 0x5a0);
    plVar9 = plVar8;
    if ((lVar5 == 0) || (local_30 < 2)) goto LAB_140c10a19;
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar8 = (longlong *)FUN_142f40750(lVar5,uVar4,&local_38);
    if (plVar8 == (longlong *)0x0) {
LAB_140c10952:
      if (1 < local_30) {
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        plVar8 = (longlong *)FUN_142f40590(lVar5,uVar4,&local_38);
        if (plVar8 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar8 + 0x8f0))(plVar8,param_2,&local_88,local_78,1,0);
          if ((cVar3 != '\0') &&
             (plVar9 = (longlong *)plVar8[0x23], plVar6 = plVar9, plVar9 != (longlong *)0x0))
          goto LAB_140c10aea;
        }
        if (1 < local_30) {
          uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
          plVar8 = (longlong *)FUN_142f40830(lVar5,uVar4,&local_38);
          if (plVar8 != (longlong *)0x0) {
            cVar3 = (**(code **)(*plVar8 + 0x8f0))(plVar8,param_2,&local_88,local_78,1,0);
            if ((cVar3 != '\0') &&
               (plVar9 = (longlong *)plVar8[0x23], plVar6 = plVar9, plVar9 != (longlong *)0x0))
            goto LAB_140c10aea;
          }
        }
      }
      goto LAB_140c10a19;
    }
    cVar3 = (**(code **)(*plVar8 + 0x8f0))(plVar8,param_2,&local_88,local_78,1,0);
    if ((cVar3 == '\0') ||
       (plVar9 = (longlong *)plVar8[0x23], plVar6 = plVar9, plVar9 == (longlong *)0x0))
    goto LAB_140c10952;
  }
LAB_140c10aea:
  local_58 = _DAT_1468b5d90;
  local_50 = DAT_1468b5d98;
  if (plVar6 == (longlong *)0x0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar9 = (longlong *)FUN_142f3fe10(lVar5,uVar4,&local_58,1);
    if (((plVar9 == (longlong *)0x0) ||
        (cVar3 = (**(code **)(*plVar9 + 0x8f0))(plVar9,param_2,&local_88,local_78,1,0),
        cVar3 == '\0')) || (plVar6 = (longlong *)plVar9[0x23], plVar6 == (longlong *)0x0)) {
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar9 = (longlong *)FUN_142f40750(lVar5,uVar4,&DAT_14686ada8);
      if (((plVar9 == (longlong *)0x0) ||
          (cVar3 = (**(code **)(*plVar9 + 0x8f0))(plVar9,param_2,&local_88,local_78,1,0),
          cVar3 == '\0')) || (plVar6 = (longlong *)plVar9[0x23], plVar6 == (longlong *)0x0)) {
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        plVar9 = (longlong *)FUN_142f3fe10(lVar5,uVar4,&local_58,0);
        if ((plVar9 != (longlong *)0x0) &&
           (cVar3 = (**(code **)(*plVar9 + 0x8f0))(plVar9,param_2,&local_88,local_78,1,0),
           cVar3 != '\0')) {
          plVar6 = (longlong *)param_1[0x23];
        }
      }
    }
  }
LAB_140c10c18:
  if (local_38 != 0) {
    FMemory::Free();
  }
  return plVar6;
}



// FUNCTION 140c10c60 FUN_140c10c60 body=400 status=ok
// SIG undefined FUN_140c10c60(void)

void FUN_140c10c60(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_28;
  int local_20;
  longlong local_18;
  longlong *local_10;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if (lVar6 != 0) {
    UWorld::GetPlayerControllerIterator(lVar6,&local_28);
    for (; (-1 < local_20 && (local_20 < (int)local_28[1])); local_20 = local_20 + 1) {
      plVar7 = (longlong *)FWeakObjectPtr::Get(*local_28 + (longlong)local_20 * 8);
      if (((plVar7 != (longlong *)0x0) &&
          (((cVar5 = (**(code **)(*plVar7 + 0x768))(plVar7), cVar5 != '\0' && (plVar7[0x8c] != 0))
           && (plVar4 = *(longlong **)(plVar7[0x8c] + 0x4b8), plVar4 != (longlong *)0x0)))) &&
         (cVar5 = (**(code **)(*plVar4 + 0x20))(), cVar5 != '\0')) {
        lVar6 = *(longlong *)(plVar7[0x8c] + 0x4b8);
        plVar7 = *(longlong **)(plVar7[0x8c] + 0x4c0);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        if (lVar6 != 0) {
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
          }
          local_18 = lVar6;
          local_10 = plVar7;
          (*(code *)*param_2)(param_2[1],&local_18);
          plVar4 = local_10;
          if (local_10 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_10 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_10)(local_10);
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
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar7 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c10df0 FUN_140c10df0 body=2140 status=ok
// SIG undefined FUN_140c10df0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c10df0(longlong *param_1,float *param_2,float **param_3,char *param_4,longlong *param_5,
                  undefined8 *param_6)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  longlong *plVar20;
  float *pfVar21;
  int *piVar22;
  int iVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong *plVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_228 [32];
  longlong *local_208;
  undefined1 local_1f8 [8];
  float local_1f0;
  float local_1ec;
  float local_1e8;
  longlong *local_1e0;
  int local_1d8;
  undefined1 local_1d4;
  float **local_1d0;
  longlong *local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined1 *local_1a8;
  float ***pppfStack_1a0;
  undefined8 *local_198;
  float *local_188;
  float *local_180;
  float *local_178;
  longlong **local_170;
  int *local_168;
  undefined1 *local_160;
  char *local_158;
  float **local_150;
  undefined1 local_148 [72];
  longlong local_100;
  longlong local_e0;
  ulonglong local_c8;
  
  if (param_1 != (longlong *)0x0) {
    local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_228;
    local_198 = param_6;
    local_1e0 = param_1;
    local_1d0 = param_3;
    lVar16 = (**(code **)(*param_1 + 0x148))();
    if (lVar16 != 0) {
      plVar26 = (longlong *)0x0;
      *(undefined4 *)(param_5 + 1) = 0;
      if (0x7fffffff < *(uint *)((longlong)param_5 + 0xc)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (param_5,0);
      }
      *(undefined4 *)(param_5 + 3) = 0;
      if ((*(int *)((longlong)param_5 + 0x1c) < 0) && (*(int *)((longlong)param_5 + 0x1c) != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_5 + 2,0);
      }
      *(undefined4 *)(param_5 + 5) = 0;
      if ((*(int *)((longlong)param_5 + 0x2c) < 0) && (*(int *)((longlong)param_5 + 0x2c) != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_5 + 4,0);
      }
      plVar20 = param_5 + 6;
      *(undefined4 *)(param_5 + 7) = 0;
      if ((*(int *)((longlong)param_5 + 0x3c) < 0) && (*(int *)((longlong)param_5 + 0x3c) != 0)) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar20,0);
      }
      if (*param_4 == '\0') {
        FUN_140c11650(param_4,param_5,param_6);
      }
      else {
        if (*param_4 != '\x01') {
          return;
        }
        FUN_140c11b00(param_4,param_5,param_6);
      }
      fVar13 = fRam000000014686aa2c;
      fVar12 = fRam000000014686aa28;
      fVar11 = fRam000000014686aa24;
      fVar10 = _DAT_14686aa20;
      fVar32 = fRam000000014686aa18;
      fVar27 = fRam000000014686aa14;
      fVar43 = _DAT_14686aa10;
      uVar9 = uRam000000014686aa08;
      uVar8 = uRam000000014686aa04;
      uVar7 = _DAT_14686aa00;
      uVar6 = uRam000000014686a968;
      uVar5 = uRam000000014686a964;
      uVar4 = _DAT_14686a960;
      if (param_4[0x40] == '\0') {
        local_1d8 = 1 << (param_4[0x1a] & 0x1fU);
        local_208 = plVar26;
        if (param_4[0x28] != '\0') {
          local_208 = local_1e0;
        }
        local_1d4 = 0;
        FUN_1422ffb20(local_148,DAT_14686b3d0,local_1f8,0);
        if (*(int *)(param_4 + 0x38) != 0) {
          FCollisionQueryParams::AddIgnoredActors(local_148,param_4 + 0x30);
        }
        local_180 = &local_1c0;
        fVar43 = param_2[2];
        local_178 = &local_1f0;
        local_170 = &local_1e0;
        fVar32 = -param_2[1];
        fVar32 = fVar32 + fVar32;
        fVar27 = fVar43 + fVar43;
        local_168 = &local_1d8;
        local_160 = local_148;
        local_150 = local_1d0;
        local_1bc = *(float *)(param_4 + 0x1c);
        local_1e8 = *param_2 * fVar27 + param_2[3] * fVar32;
        fVar43 = (param_2[1] * fVar32 - fVar43 * fVar27) + 1.0;
        local_1ec = param_2[3] * fVar27 - *param_2 * fVar32;
        local_1b8 = local_1bc * local_1e8;
        local_1c0 = local_1bc * fVar43;
        local_1bc = local_1bc * local_1ec;
        local_1f0 = *(float *)(param_4 + 0x20);
        local_1e8 = local_1f0 * local_1e8;
        local_1ec = local_1f0 * local_1ec;
        local_1f0 = local_1f0 * fVar43;
        local_188 = param_2;
        local_158 = param_4;
        if (param_4[0x41] == '\0') {
          plVar25 = plVar26;
          if (0 < (int)param_5[1]) {
            do {
              iVar23 = (int)plVar25;
              cVar14 = FUN_140c02c60(&local_188,*param_5 + (longlong)iVar23 * 0xc);
              if (cVar14 == '\0') {
                iVar18 = (int)param_5[7];
                *(int *)(param_5 + 7) = iVar18 + 1;
                if (*(int *)((longlong)param_5 + 0x3c) < iVar18 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar20,iVar18);
                }
                *(int *)(*plVar20 + (longlong)iVar18 * 4) = iVar23;
              }
              plVar25 = (longlong *)(ulonglong)(iVar23 + 1U);
            } while ((int)(iVar23 + 1U) < (int)param_5[1]);
          }
        }
        else {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_14686bbd8) && (_Init_thread_header(&DAT_14686bbd8), DAT_14686bbd8 == -1)) {
            InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14686bbb0);
            SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14686bbb0,4000);
            atexit((_func_5014 *)&LAB_143e4e780);
            _Init_thread_footer(&DAT_14686bbd8);
          }
          local_1d0 = &local_188;
          pppfStack_1a0 = &local_1d0;
          local_1c8 = param_5;
          local_1a8 = &LAB_140c08050;
          FUN_1406a7b10((int)param_5[1],&local_1a8,0);
        }
        if (0 < (int)param_5[7]) {
          iVar23 = (int)param_5[3] + -3;
          if (-1 < iVar23) {
            lVar24 = (longlong)iVar23 * 4;
            lVar16 = (longlong)iVar23 * 4 + 8;
LAB_140c11380:
            piVar19 = (int *)*plVar20;
            lVar2 = param_5[2];
            piVar22 = piVar19 + (int)param_5[7];
            if (piVar19 != piVar22) {
              piVar17 = piVar19;
              do {
                if (*piVar17 == *(int *)(lVar16 + -8 + lVar2)) goto LAB_140c113e5;
                piVar17 = piVar17 + 1;
              } while (piVar17 != piVar22);
            }
            if (piVar19 != piVar22) {
              piVar17 = piVar19;
              do {
                if (*piVar17 == *(int *)(lVar16 + -4 + lVar2)) goto LAB_140c113e5;
                piVar17 = piVar17 + 1;
              } while (piVar17 != piVar22);
              if (piVar19 != piVar22) {
                do {
                  if (*piVar19 == *(int *)(lVar2 + lVar16)) goto LAB_140c113e5;
                  piVar19 = piVar19 + 1;
                } while (piVar19 != piVar22);
              }
            }
            goto LAB_140c11423;
          }
LAB_140c11439:
          if (param_6 != (undefined8 *)0x0) {
            piVar22 = (int *)*plVar20;
            plVar20 = (longlong *)((longlong)(int)param_5[7] & 0x3fffffffffffffff);
            if (piVar22 + (int)param_5[7] < piVar22) {
              plVar20 = plVar26;
            }
            plVar25 = plVar26;
            if (plVar20 != (longlong *)0x0) {
              do {
                piVar19 = (int *)*param_6;
                iVar23 = *(int *)(param_6 + 1);
                for (piVar17 = piVar19; piVar17 != piVar19 + iVar23; piVar17 = piVar17 + 1) {
                  if (*piVar17 == *piVar22) {
                    iVar18 = (int)((longlong)piVar17 - (longlong)piVar19 >> 2);
                    if (iVar18 != -1) {
                      iVar15 = (iVar23 - iVar18) + -1;
                      if (0 < iVar15) {
                        iVar15 = 1;
                      }
                      if (iVar15 != 0) {
                        _guard_xfg_dispatch_icall_nop
                                  (piVar19 + iVar18,piVar19 + (iVar23 - iVar15),
                                   (longlong)iVar15 << 2);
                        iVar23 = *(int *)(param_6 + 1);
                      }
                      *(int *)(param_6 + 1) = iVar23 + -1;
                    }
                    break;
                  }
                }
                piVar22 = piVar22 + 1;
                plVar25 = (longlong *)((longlong)plVar25 + 1);
              } while (plVar25 != plVar20);
            }
          }
          iVar23 = (int)param_5[1];
          if (0 < iVar23) {
            piVar22 = (int *)param_5[6];
            plVar20 = plVar26;
            do {
              iVar18 = (int)plVar20;
              piVar19 = piVar22;
              while( true ) {
                if (piVar19 == piVar22 + (int)param_5[7]) {
                  if ((-1 < iVar18) && (iVar18 < iVar23)) {
                    lVar16 = *param_5;
                    plVar20 = (longlong *)((longlong)(int)param_5[7] & 0x3fffffffffffffff);
                    if (piVar22 + (int)param_5[7] < piVar22) {
                      plVar20 = plVar26;
                    }
                    if (plVar20 != (longlong *)0x0) {
                      do {
                        iVar23 = *piVar22;
                        piVar22 = piVar22 + 1;
                        lVar24 = *param_5;
                        plVar26 = (longlong *)((longlong)plVar26 + 1);
                        *(undefined8 *)(lVar24 + (longlong)iVar23 * 0xc) =
                             *(undefined8 *)(lVar16 + (longlong)iVar18 * 0xc);
                        *(undefined4 *)(lVar24 + 8 + (longlong)iVar23 * 0xc) =
                             *(undefined4 *)(lVar16 + 8 + (longlong)iVar18 * 0xc);
                      } while (plVar26 != plVar20);
                    }
                  }
                  goto LAB_140c1158a;
                }
                if (*piVar19 == iVar18) break;
                piVar19 = piVar19 + 1;
              }
              plVar20 = (longlong *)(ulonglong)(iVar18 + 1U);
            } while ((int)(iVar18 + 1U) < iVar23);
          }
        }
LAB_140c1158a:
        if (local_e0 != 0) {
          FMemory::Free();
        }
        if (local_100 != 0) {
          FMemory::Free();
        }
      }
      else {
        pfVar21 = (float *)*param_5;
        pfVar1 = pfVar21 + (longlong)(int)param_5[1] * 3;
        for (; pfVar21 != pfVar1; pfVar21 = pfVar21 + 3) {
          fVar33 = *param_2;
          fVar34 = param_2[1];
          fVar35 = param_2[2];
          fVar3 = param_2[3];
          fVar38 = (*pfVar21 - *(float *)(param_4 + 0x24)) * param_2[8];
          fVar39 = pfVar21[1] * param_2[9];
          fVar40 = pfVar21[2] * param_2[10];
          fVar41 = param_2[0xb] * 0.0;
          fVar42 = *(float *)local_1d0 * fVar10;
          fVar44 = *(float *)((longlong)local_1d0 + 4) * fVar11;
          fVar45 = *(float *)(local_1d0 + 1) * fVar12;
          fVar46 = *(float *)((longlong)local_1d0 + 0xc) * fVar13;
          fVar28 = fVar40 * fVar34 - fVar39 * fVar35;
          fVar29 = fVar38 * fVar35 - fVar40 * fVar33;
          fVar30 = fVar39 * fVar33 - fVar38 * fVar34;
          fVar31 = fVar41 * fVar3 - fVar41 * fVar3;
          fVar28 = fVar28 + fVar28;
          fVar29 = fVar29 + fVar29;
          fVar30 = fVar30 + fVar30;
          auVar36._0_4_ = fVar3 * fVar28 + fVar38;
          auVar36._4_4_ = fVar3 * fVar29 + fVar39;
          auVar36._8_4_ = fVar3 * fVar30 + fVar40;
          auVar36._12_4_ = fVar3 * (fVar31 + fVar31) + fVar41;
          auVar37 = *(undefined1 (*) [16])(local_1d0 + 4);
          fVar3 = auVar37._0_4_;
          fVar31 = auVar37._4_4_;
          fVar38 = auVar37._8_4_;
          auVar37 = rcpps(auVar36,auVar37);
          fVar39 = (float)((uint)(((fVar30 * fVar34 - fVar29 * fVar35) + auVar36._0_4_ + param_2[4])
                                 - *(float *)(local_1d0 + 2)) & uVar4);
          fVar40 = (float)((uint)(((fVar28 * fVar35 - fVar30 * fVar33) + auVar36._4_4_ + param_2[5])
                                 - *(float *)((longlong)local_1d0 + 0x14)) & uVar5);
          fVar41 = (float)((uint)(((fVar29 * fVar33 - fVar28 * fVar34) + auVar36._8_4_ + param_2[6])
                                 - *(float *)(local_1d0 + 3)) & uVar6);
          fVar33 = fVar41 * fVar44 - fVar40 * fVar45;
          fVar34 = fVar39 * fVar45 - fVar41 * fVar42;
          fVar35 = fVar40 * fVar42 - fVar39 * fVar44;
          fVar28 = auVar37._0_4_;
          fVar29 = auVar37._4_4_;
          fVar30 = auVar37._8_4_;
          fVar33 = fVar33 + fVar33;
          fVar34 = fVar34 + fVar34;
          fVar35 = fVar35 + fVar35;
          fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar3;
          fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar31;
          fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar38;
          fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar3;
          fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar31;
          fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar38;
          *(ulonglong *)pfVar21 =
               CONCAT44(((fVar33 * fVar45 - fVar35 * fVar42) + fVar46 * fVar34 + fVar40) *
                        (float)(-(uint)((float)((uint)fVar31 & uVar8) <= fVar27) & (uint)fVar29 ^
                               (uint)fVar29),
                        ((fVar35 * fVar44 - fVar34 * fVar45) + fVar46 * fVar33 + fVar39) *
                        (float)(-(uint)((float)((uint)fVar3 & uVar7) <= fVar43) & (uint)fVar28 ^
                               (uint)fVar28));
          pfVar21[2] = ((fVar34 * fVar42 - fVar33 * fVar44) + fVar46 * fVar35 + fVar41) *
                       (float)(-(uint)((float)((uint)fVar38 & uVar9) <= fVar32) & (uint)fVar30 ^
                              (uint)fVar30);
        }
      }
    }
  }
  return;
LAB_140c113e5:
  iVar18 = (int)param_5[3];
  iVar15 = (iVar18 - iVar23) + -3;
  if (2 < iVar15) {
    iVar15 = 3;
  }
  if (iVar15 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(lVar2 + lVar24),(void *)(lVar2 + (longlong)(iVar18 - iVar15) * 4),
               (longlong)iVar15 << 2);
    iVar18 = (int)param_5[3];
  }
  *(int *)(param_5 + 3) = iVar18 + -3;
LAB_140c11423:
  lVar24 = lVar24 + -0xc;
  lVar16 = lVar16 + -0xc;
  iVar23 = iVar23 + -3;
  param_6 = local_198;
  if (iVar23 < 0) goto LAB_140c11439;
  goto LAB_140c11380;
}



// FUNCTION 140c11650 FUN_140c11650 body=1185 status=ok
// SIG undefined FUN_140c11650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c11650(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_res20;
  int local_120;
  float local_f8;
  float local_f4;
  float local_f0;
  
  iVar10 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar10 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar10 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
  }
  lVar5 = *param_2;
  *(undefined8 *)(lVar5 + (longlong)iVar10 * 0xc) = _DAT_1468b5d90;
  *(undefined4 *)(lVar5 + 8 + (longlong)iVar10 * 0xc) = DAT_1468b5d98;
  if (*(char *)(param_1 + 0x19) != '\0') {
    iVar10 = (int)param_2[5];
    *(int *)(param_2 + 5) = iVar10 + 1;
    if (*(int *)((longlong)param_2 + 0x2c) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 4,iVar10);
    }
    *(ulonglong *)(param_2[4] + (longlong)iVar10 * 8) =
         CONCAT44(DAT_146298d88._4_4_,(float)DAT_146298d88);
  }
  iVar10 = *(int *)(param_1 + 0x10);
  if (iVar10 < 3) {
    iVar9 = 3;
  }
  else {
    iVar9 = 0x20;
    if (iVar10 < 0x20) {
      iVar9 = iVar10;
    }
  }
  iVar10 = *(int *)(param_1 + 0x14);
  if (iVar10 < 1) {
    iVar13 = 1;
  }
  else {
    iVar13 = 0x10;
    if (iVar10 < 0x10) {
      iVar13 = iVar10;
    }
  }
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 0xc);
  local_120 = 1;
  fVar4 = *(float *)(param_1 + 8);
  if (0 < iVar9) {
    local_res20 = 1;
    do {
      FVector::RotateAngleAxis
                (&DAT_1464aa798,&local_f8,(float)local_120 * 360.0 * (1.0 / (float)iVar9),
                 &DAT_1464aa7a8);
      fVar8 = local_f0;
      fVar7 = local_f4;
      fVar6 = local_f8;
      iVar10 = 1;
      if (0 < iVar13) {
        fVar19 = 1.0 / (float)iVar13;
        do {
          fVar14 = (float)iVar10;
          fVar15 = fVar7 * fVar14 * fVar19;
          fVar16 = fVar8 * fVar14 * fVar19;
          if (*(char *)(param_1 + 0x19) != '\0') {
            iVar11 = (int)param_2[5];
            fVar17 = fVar15 * 0.5 + (float)DAT_146298d88;
            fVar18 = fVar16 * 0.5 + DAT_146298d88._4_4_;
            *(int *)(param_2 + 5) = iVar11 + 1;
            if (*(int *)((longlong)param_2 + 0x2c) < iVar11 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 4,iVar11);
            }
            lVar5 = param_2[4];
            *(float *)(lVar5 + (longlong)iVar11 * 8) = fVar17;
            *(float *)(lVar5 + 4 + (longlong)iVar11 * 8) = fVar18;
          }
          if ((param_3 != (longlong *)0x0) && (iVar10 == iVar13)) {
            iVar11 = (int)param_3[1];
            lVar5 = param_2[1];
            *(int *)(param_3 + 1) = iVar11 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
            }
            *(int *)(*param_3 + (longlong)iVar11 * 4) = (int)lVar5;
          }
          iVar11 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar11 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar11);
          }
          lVar5 = *param_2;
          iVar10 = iVar10 + 1;
          *(ulonglong *)(lVar5 + (longlong)iVar11 * 0xc) =
               CONCAT44(fVar15 * fVar2 * fVar3,fVar6 * fVar14 * fVar19 * fVar2);
          *(float *)(lVar5 + 8 + (longlong)iVar11 * 0xc) = fVar16 * fVar2 * fVar4;
        } while (iVar10 <= iVar13);
      }
      iVar10 = 1;
      if (local_120 != iVar9) {
        iVar10 = local_res20 + iVar13;
      }
      FUN_140c04ab0(param_1,0,local_res20,iVar10,param_2 + 2);
      if (1 < iVar13) {
        uVar12 = (ulonglong)(iVar13 - 1);
        iVar11 = local_res20;
        do {
          iVar1 = iVar11 + (iVar10 - local_res20) + 1;
          FUN_140c04ab0(param_1,iVar11,iVar11 + 1,iVar1,param_2 + 2);
          FUN_140c04ab0(param_1,iVar11,iVar1,(iVar10 - local_res20) + iVar11,param_2 + 2);
          iVar11 = iVar11 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      local_res20 = local_res20 + iVar13;
      local_120 = local_120 + 1;
    } while (local_120 <= iVar9);
  }
  return;
}



// FUNCTION 140c11b00 FUN_140c11b00 body=734 status=ok
// SIG undefined FUN_140c11b00(void)

void FUN_140c11b00(longlong param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_res20;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 < 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0x20;
    if (iVar4 < 0x20) {
      iVar6 = iVar4;
    }
  }
  fVar1 = *(float *)(param_1 + 4);
  iVar4 = iVar6 + 2;
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0xc);
  iVar12 = 0;
  if (0 < iVar4) {
    local_res20 = 0;
    fVar15 = 1.0 / (float)(iVar6 + 1);
    do {
      iVar8 = 0;
      fVar14 = (float)iVar12 * fVar15;
      do {
        fVar13 = (float)iVar8 * fVar15;
        if (*(char *)(param_1 + 0x19) != '\0') {
          iVar9 = (int)param_2[5];
          *(int *)(param_2 + 5) = iVar9 + 1;
          if (*(int *)((longlong)param_2 + 0x2c) < iVar9 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 4,iVar9);
          }
          lVar7 = param_2[4];
          *(float *)(lVar7 + (longlong)iVar9 * 8) = fVar13;
          *(float *)(lVar7 + 4 + (longlong)iVar9 * 8) = fVar14;
        }
        if ((param_3 != (longlong *)0x0) &&
           ((((iVar12 == 0 || (iVar12 == iVar6 + 1)) || (iVar8 == 0)) || (iVar8 == iVar6 + 1)))) {
          iVar9 = (int)param_3[1];
          lVar7 = param_2[1];
          *(int *)(param_3 + 1) = iVar9 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar9 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar9);
          }
          *(int *)(*param_3 + (longlong)iVar9 * 4) = (int)lVar7;
        }
        iVar9 = (int)param_2[1];
        lVar7 = (longlong)iVar9;
        *(int *)(param_2 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
        }
        lVar5 = *param_2;
        *(float *)(lVar5 + 4 + lVar7 * 0xc) = (fVar1 + fVar1) * fVar3 * fVar13 - fVar3 * fVar1;
        *(float *)(lVar5 + 8 + lVar7 * 0xc) = (fVar1 + fVar1) * fVar2 * fVar14 - fVar2 * fVar1;
        *(undefined4 *)(lVar5 + lVar7 * 0xc) = 0;
        if ((0 < iVar12) && (0 < iVar8)) {
          iVar11 = (local_res20 - iVar4) + iVar8;
          iVar10 = local_res20 + iVar8;
          iVar9 = iVar11 + -1;
          FUN_140c04ab0(param_1,iVar9,iVar11,iVar10,param_2 + 2);
          FUN_140c04ab0(param_1,iVar9,iVar10,iVar10 + -1,param_2 + 2);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar4);
      local_res20 = local_res20 + iVar4;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar4);
  }
  return;
}



// FUNCTION 140c11de0 FUN_140c11de0 body=96 status=ok
// SIG undefined FUN_140c11de0(void)

undefined8 * FUN_140c11de0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0xb) == '\0') {
    puVar2 = (undefined8 *)FUN_140c12330();
    if (puVar2 != param_1) {
      if (*(char *)(param_1 + 0xb) != '\0') {
        *(undefined1 *)(param_1 + 0xb) = 0;
      }
      uVar1 = puVar2[1];
      *param_1 = *puVar2;
      param_1[1] = uVar1;
      uVar1 = puVar2[3];
      param_1[2] = puVar2[2];
      param_1[3] = uVar1;
      uVar1 = puVar2[5];
      param_1[4] = puVar2[4];
      param_1[5] = uVar1;
      uVar1 = puVar2[7];
      param_1[6] = puVar2[6];
      param_1[7] = uVar1;
      uVar1 = puVar2[9];
      param_1[8] = puVar2[8];
      param_1[9] = uVar1;
      param_1[10] = puVar2[10];
      *(undefined1 *)(param_1 + 0xb) = 1;
    }
  }
  return param_1;
}



// FUNCTION 140c11e40 FUN_140c11e40 body=111 status=ok
// SIG undefined FUN_140c11e40(void)

undefined * FUN_140c11e40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686b850) {
    _Init_thread_header(&DAT_14686b850);
    if (DAT_14686b850 == -1) {
      FUN_140bfbd90(&DAT_14686b810);
      _Init_thread_footer(&DAT_14686b850);
      return &DAT_14686b810;
    }
  }
  return &DAT_14686b810;
}



// FUNCTION 140c11eb0 FUN_140c11eb0 body=388 status=ok
// SIG undefined FUN_140c11eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c11eb0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  longlong local_28;
  longlong local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686b4d8) {
    _Init_thread_header(&DAT_14686b4d8);
    if (DAT_14686b4d8 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"Login",1);
      uVar2 = FUN_14217c7e0(local_38,L"gbxtelemetry",L"Login",&DAT_14431a52c);
      FUN_14217c110(&DAT_14686b4c0,*puVar1,uVar2);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_14686b4c8);
      FUN_14217bd20(&DAT_14686b4d0);
      uVar2 = DAT_14686b4c0;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_14686b4c0;
      _DAT_14686b4c8 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"game_license_type",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      _DAT_14686b4d0 = *puVar1;
      _Init_thread_footer(&DAT_14686b4d8);
      return &DAT_14686b4c0;
    }
  }
  return &DAT_14686b4c0;
}



// FUNCTION 140c12040 FUN_140c12040 body=111 status=ok
// SIG undefined FUN_140c12040(void)

undefined * FUN_140c12040(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686b920) {
    _Init_thread_header(&DAT_14686b920);
    if (DAT_14686b920 == -1) {
      FUN_140bfc030(&DAT_14686b860);
      _Init_thread_footer(&DAT_14686b920);
      return &DAT_14686b860;
    }
  }
  return &DAT_14686b860;
}



// FUNCTION 140c120b0 FUN_140c120b0 body=111 status=ok
// SIG undefined FUN_140c120b0(void)

undefined * FUN_140c120b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686b660) {
    _Init_thread_header(&DAT_14686b660);
    if (DAT_14686b660 == -1) {
      FUN_140bfc670(&DAT_14686b600);
      _Init_thread_footer(&DAT_14686b660);
      return &DAT_14686b600;
    }
  }
  return &DAT_14686b600;
}



// FUNCTION 140c12120 FUN_140c12120 body=111 status=ok
// SIG undefined FUN_140c12120(void)

undefined * FUN_140c12120(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686b7a0) {
    _Init_thread_header(&DAT_14686b7a0);
    if (DAT_14686b7a0 == -1) {
      FUN_140bfc960(&DAT_14686b670);
      _Init_thread_footer(&DAT_14686b7a0);
      return &DAT_14686b670;
    }
  }
  return &DAT_14686b670;
}



// FUNCTION 140c12190 FUN_140c12190 body=111 status=ok
// SIG undefined FUN_140c12190(void)

undefined * FUN_140c12190(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686b5f8) {
    _Init_thread_header(&DAT_14686b5f8);
    if (DAT_14686b5f8 == -1) {
      FUN_140bfcff0(&DAT_14686b5b0);
      _Init_thread_footer(&DAT_14686b5f8);
      return &DAT_14686b5b0;
    }
  }
  return &DAT_14686b5b0;
}



// FUNCTION 140c12200 FUN_140c12200 body=192 status=ok
// SIG undefined FUN_140c12200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c12200(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686b5a0) {
    _Init_thread_header(&DAT_14686b5a0);
    if (DAT_14686b5a0 == -1) {
      FUN_14217d920(&DAT_14686b578);
      FUN_14217bd20(&DAT_14686b598);
      uVar1 = DAT_14686b578;
      puVar2 = (undefined8 *)FName::FName(local_res8,L"player_threat_level",1);
      puVar2 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar2,0);
      _DAT_14686b598 = *puVar2;
      _Init_thread_footer(&DAT_14686b5a0);
      return &DAT_14686b578;
    }
  }
  return &DAT_14686b578;
}



// FUNCTION 140c122c0 FUN_140c122c0 body=111 status=ok
// SIG undefined FUN_140c122c0(void)

undefined * FUN_140c122c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686b570) {
    _Init_thread_header(&DAT_14686b570);
    if (DAT_14686b570 == -1) {
      FUN_140bfd230(&DAT_14686b500);
      _Init_thread_footer(&DAT_14686b570);
      return &DAT_14686b500;
    }
  }
  return &DAT_14686b500;
}



// FUNCTION 140c12330 FUN_140c12330 body=111 status=ok
// SIG undefined FUN_140c12330(void)

undefined * FUN_140c12330(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686b988) {
    _Init_thread_header(&DAT_14686b988);
    if (DAT_14686b988 == -1) {
      FUN_140bfd470(&DAT_14686b930);
      _Init_thread_footer(&DAT_14686b988);
      return &DAT_14686b930;
    }
  }
  return &DAT_14686b930;
}



// FUNCTION 140c123a0 FUN_140c123a0 body=111 status=ok
// SIG undefined FUN_140c123a0(void)

undefined * FUN_140c123a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686b800) {
    _Init_thread_header(&DAT_14686b800);
    if (DAT_14686b800 == -1) {
      FUN_140bfd780(&DAT_14686b7b0);
      _Init_thread_footer(&DAT_14686b800);
      return &DAT_14686b7b0;
    }
  }
  return &DAT_14686b7b0;
}



// FUNCTION 140c12410 FUN_140c12410 body=111 status=ok
// SIG undefined FUN_140c12410(void)

undefined * FUN_140c12410(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686b9f8) {
    _Init_thread_header(&DAT_14686b9f8);
    if (DAT_14686b9f8 == -1) {
      FUN_140bfdab0(&DAT_14686b990);
      _Init_thread_footer(&DAT_14686b9f8);
      return &DAT_14686b990;
    }
  }
  return &DAT_14686b990;
}



// FUNCTION 140c12480 FUN_140c12480 body=112 status=ok
// SIG undefined FUN_140c12480(void)

undefined8 FUN_140c12480(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = DAT_146b19a68;
  if (param_1 != 0) {
    lVar3 = param_1;
  }
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 400), lVar3 != 0)) {
    lVar2 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(undefined8 *)(lVar3 + 0x1f8);
    }
  }
  return 0;
}



// FUNCTION 140c124f0 FUN_140c124f0 body=194 status=ok
// SIG undefined FUN_140c124f0(void)

undefined8 * FUN_140c124f0(longlong *param_1,undefined8 *param_2)

{
  longlong local_28 [4];
  
  local_28[1] = 2;
  *param_2 = 0;
  param_2[1] = 0;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],&DAT_143f73c90,4);
  if (*param_1 == 0) {
    local_28[2] = 0;
    local_28[3] = 0;
  }
  else {
    FName::ToString(param_1,local_28 + 2);
  }
  FUN_1404e14f0(local_28 + 2,local_28,0,param_2,0,0);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free(local_28[0]);
  }
  return param_2;
}



// FUNCTION 140c125c0 FUN_140c125c0 body=227 status=ok
// SIG undefined FUN_140c125c0(void)

longlong FUN_140c125c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_18;
  longlong *local_10;
  
  lVar8 = 0;
  if (param_2 == 0) {
    return 0;
  }
  lVar7 = lVar8;
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    if (cVar5 != '\0') {
      lVar6 = FUN_140d3a420(param_2);
      if (lVar6 != 0) {
        local_18 = *(undefined8 *)(param_1 + 8);
        local_10 = *(longlong **)(param_1 + 0x10);
        if (local_10 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_10 + 1) = (int)local_10[1] + 1;
          UNLOCK();
        }
        lVar7 = FUN_140d3a960(lVar6,&local_18);
        lVar8 = 1;
      }
      plVar4 = local_10;
      if ((lVar8 != 0) && (local_10 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_10)(local_10);
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
    }
  }
  return lVar7;
}



// FUNCTION 140c126b0 FUN_140c126b0 body=74 status=ok
// SIG undefined FUN_140c126b0(void)

undefined8 FUN_140c126b0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  FText::FText();
  lVar1 = FUN_140c12700(param_2,param_3);
  if (lVar1 != 0) {
    FText::operator=(param_1,lVar1 + 0x40);
  }
  return param_1;
}



// FUNCTION 140c12700 FUN_140c12700 body=376 status=ok
// SIG undefined FUN_140c12700(void)

longlong FUN_140c12700(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_28 [8];
  longlong local_20;
  longlong lVar9;
  
  lVar9 = 0;
  lVar8 = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  FUN_140bf9ed0(local_28,param_1,*(longlong *)(DAT_146b33f38 + 0x88) + 0x30);
  lVar2 = FUN_141796df0(local_28);
  lVar7 = lVar9;
  if (lVar2 != 0) {
    lVar3 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = FUN_142dfdfe0();
      lVar3 = lVar2;
      do {
        if (lVar3 == lVar4) {
          lVar7 = lVar8;
          if ((DAT_146b17150 != 0) &&
             (plVar5 = (longlong *)FUN_142874910(DAT_146b17150,param_2), plVar5 != (longlong *)0x0))
          {
            lVar8 = FUN_14145f370();
            if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                lVar8 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              uVar6 = FUN_142e035e0();
              lVar8 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
              if (lVar8 != 0) {
                lVar3 = FUN_142dfdfe0();
                lVar7 = lVar2;
                goto LAB_140c12830;
              }
            }
          }
          break;
        }
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
  }
  goto LAB_140c12851;
  while (lVar7 = *(longlong *)(lVar7 + 0x30), lVar4 = lVar9, lVar7 != 0) {
LAB_140c12830:
    lVar4 = lVar2;
    if (lVar7 == lVar3) break;
  }
  lVar7 = FUN_142dcdc10(lVar8,lVar4);
LAB_140c12851:
  if (local_20 != 0) {
    FMemory::Free();
  }
  return lVar7;
}



// FUNCTION 140c12880 FUN_140c12880 body=201 status=ok
// SIG undefined FUN_140c12880(void)

undefined8 FUN_140c12880(longlong *param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_1 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_142dfdfe0();
    plVar5 = param_1;
    do {
      if (plVar5 == plVar2) {
        plVar2 = (longlong *)FUN_142dfdfe0();
        plVar5 = param_1;
        goto LAB_140c128c0;
      }
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  return 0;
  while (plVar5 = (longlong *)plVar5[6], plVar5 != (longlong *)0x0) {
LAB_140c128c0:
    if (plVar5 == plVar2) goto LAB_140c128d0;
  }
  param_1 = (longlong *)0x0;
LAB_140c128d0:
  lVar6 = param_1[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*param_1 + 0x368))(param_1);
    lVar6 = param_1[0x1f];
    if (lVar6 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_142dfdfe0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  uVar4 = FUN_1409ac010(lVar6);
  return uVar4;
}



// FUNCTION 140c12950 FUN_140c12950 body=120 status=ok
// SIG undefined FUN_140c12950(void)

void FUN_140c12950(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_38 [48];
  
  if (param_1[0xf] == 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      uVar2 = FActorSpawnParameters::FActorSpawnParameters(local_38);
      uVar3 = FUN_143036e50();
      lVar1 = UWorld::SpawnActor(lVar1,uVar3,0,0,uVar2);
      param_1[0xf] = lVar1;
      return;
    }
    param_1[0xf] = 0;
  }
  return;
}



// FUNCTION 140c129d0 FUN_140c129d0 body=178 status=ok
// SIG undefined FUN_140c129d0(void)

undefined4 FUN_140c129d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x6c0);
  plVar4 = plVar6 + (longlong)*(int *)(param_1 + 0x6c8) * 2;
  do {
    if (plVar6 == plVar4) {
      return 0xffffffff;
    }
    if (*plVar6 != 0) {
      lVar1 = FUN_142f71d80();
      lVar5 = *plVar6;
      for (lVar2 = lVar5; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar1) goto LAB_140c12a30;
      }
    }
    lVar5 = 0;
LAB_140c12a30:
    if (param_2 != 0) {
      lVar1 = FUN_142f71d80();
      lVar2 = param_2;
      do {
        lVar3 = param_2;
        if (lVar2 == lVar1) goto LAB_140c12a50;
        lVar2 = *(longlong *)(lVar2 + 0x30);
      } while (lVar2 != 0);
    }
    lVar3 = 0;
LAB_140c12a50:
    if (lVar5 == lVar3) {
      return (int)plVar6[1];
    }
    plVar6 = plVar6 + 2;
  } while( true );
}



// FUNCTION 140c12a90 FUN_140c12a90 body=119 status=ok
// SIG undefined FUN_140c12a90(void)

longlong FUN_140c12a90(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar2 + 0x140);
  if (lVar2 != 0) {
    lVar3 = FUN_141425c60();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140c12b10 FUN_140c12b10 body=233 status=ok
// SIG undefined FUN_140c12b10(void)

undefined8 FUN_140c12b10(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  if ((param_1 == 0) || (lVar2 = FUN_142f6caf0(), lVar2 == 0)) {
    plVar8 = (longlong *)0x0;
  }
  else {
    puVar3 = (undefined8 *)FUN_142f5ed60(lVar2,local_res8);
    plVar8 = (longlong *)*puVar3;
  }
  if (plVar8 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_142f71d80();
    plVar7 = plVar8;
    do {
      if (plVar7 == plVar4) {
        plVar4 = (longlong *)FUN_142f71d80();
        plVar7 = plVar8;
        goto LAB_140c12b70;
      }
      plVar7 = (longlong *)plVar7[6];
    } while (plVar7 != (longlong *)0x0);
  }
  return 0;
  while (plVar7 = (longlong *)plVar7[6], plVar7 != (longlong *)0x0) {
LAB_140c12b70:
    if (plVar7 == plVar4) goto LAB_140c12b80;
  }
  plVar8 = (longlong *)0x0;
LAB_140c12b80:
  lVar2 = plVar8[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar2 = plVar8[0x1f];
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar5 = FUN_141437870();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  uVar6 = FUN_1409ac010(lVar2);
  return uVar6;
}



// FUNCTION 140c12c00 FUN_140c12c00 body=55 status=ok
// SIG undefined FUN_140c12c00(void)

undefined8 FUN_140c12c00(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
      if (lVar1 != 0) {
        uVar2 = FUN_140cb6340(lVar1);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140c12c40 GetUsedSize body=8 status=ok
// SIG undefined GetUsedSize(void)

undefined8 FFileTable::GetUsedSize(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// FUNCTION 140c12c50 FUN_140c12c50 body=695 status=ok
// SIG undefined FUN_140c12c50(void)

longlong * FUN_140c12c50(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong *local_res20;
  undefined2 *local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686ba08) && (_Init_thread_header(&DAT_14686ba08), DAT_14686ba08 == -1))
  {
    puVar3 = (undefined8 *)FName::FName(&local_res8,L"DamageType",1);
    FGameplayTag::RequestGameplayTag(&DAT_14686ba00,*puVar3,0);
    _Init_thread_footer(&DAT_14686ba08);
  }
  lVar8 = DAT_14686ba00;
  plVar6 = (longlong *)0x0;
  plVar4 = (longlong *)(param_2 + 0x40);
  if (param_2 == 0) {
    plVar4 = plVar6;
  }
  plVar7 = plVar6;
  if ((plVar4 != (longlong *)0x0) && (local_res8 = 0, DAT_14686ba00 != 0)) {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_58);
    local_res18 = lVar8;
    local_res8 = 0;
    local_res10 = 0;
    if (lVar8 != 0) {
      while( true ) {
        iVar2 = (int)plVar6;
        if ((iVar2 < 0) || ((int)local_50 <= iVar2)) goto LAB_140c12d3a;
        lVar8 = (longlong)iVar2;
        if (*(longlong *)(local_58 + lVar8 * 8) == local_res18) break;
        cVar1 = FUN_1421d8270(local_58 + lVar8 * 8);
        if (cVar1 != '\0') {
          plVar7 = *(longlong **)(local_58 + lVar8 * 8);
        }
        plVar6 = (longlong *)(ulonglong)(iVar2 + 1);
      }
      plVar7 = *(longlong **)(local_58 + lVar8 * 8);
    }
LAB_140c12d3a:
    if (local_48 != 0) {
      FMemory::Free(local_48);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  local_res10 = DAT_14686ba00;
  local_res8 = 0;
  local_res20 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    FName::ToString(&local_res20,&local_68);
    local_res8 = 0;
    if (local_res10 != 0) {
      FName::ToString(&local_res10,&local_78);
      puVar5 = &DAT_143f3eda8;
      if ((int)local_70 != 0) {
        puVar5 = local_78;
      }
      iVar2 = FString::ReplaceInline(&local_68,puVar5,&DAT_14431aabc,1);
      if (local_78 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (iVar2 != 0) {
        local_78 = (undefined2 *)0x0;
        local_70 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
        FGenericPlatformString::Memcpy(local_78,&DAT_14431aaec,4);
        FString::RemoveFromStart(&local_68,&local_78,1);
        if (local_78 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      if ((local_60 != 0) && (local_60 != 1)) {
        *param_1 = local_68;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_5c;
        *(int *)(param_1 + 1) = local_60;
        return param_1;
      }
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  *param_1 = 0;
  param_1[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
  FGenericPlatformString::Memcpy(*param_1,L"Normal",0xe);
  return param_1;
}



// FUNCTION 140c12f10 FUN_140c12f10 body=192 status=ok
// SIG undefined FUN_140c12f10(void)

longlong FUN_140c12f10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(longlong *)(param_2 + 0xa58) != 0)) &&
       (plVar4 = (longlong *)FUN_140e61420(*(longlong *)(param_2 + 0xa58),local_res10), *plVar4 != 0
       )) {
      lVar5 = FUN_1413f82e0();
      lVar3 = *plVar4;
      for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar5) {
          if (lVar3 != 0) {
            return lVar3;
          }
          break;
        }
      }
    }
  }
  lVar3 = FUN_14244f080(param_1,param_2);
  return lVar3;
}



// FUNCTION 140c12fd0 FUN_140c12fd0 body=408 status=ok
// SIG undefined FUN_140c12fd0(void)

undefined8 FUN_140c12fd0(longlong param_1,undefined1 *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x468) != 0) {
    lVar4 = FUN_142f71d80();
    lVar8 = *(longlong *)(param_1 + 0x468);
    for (lVar6 = lVar8; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar4) {
        if (lVar8 == 0) {
          return 0;
        }
        local_28 = (ulonglong *)0x0;
        local_20 = 0;
        FUN_142f59720(param_1,*(undefined8 *)(param_1 + 0x468),&local_28,
                      CONCAT71((int7)((ulonglong)lVar8 >> 8),1));
        puVar1 = local_28 + (int)local_20;
        puVar9 = local_28;
        goto joined_r0x000140c1306a;
      }
    }
  }
  return 0;
joined_r0x000140c1306a:
  if (puVar9 == puVar1) {
    if (local_28 == (ulonglong *)0x0) {
      return 0;
    }
    FMemory::Free(local_28);
    return 0;
  }
  if ((*puVar9 != 0) && (*(char *)(*puVar9 + 0xab) != '\0')) {
    if (*(longlong *)(param_1 + 0x468) != 0) {
      plVar5 = (longlong *)FUN_142f71d80();
      plVar7 = *(longlong **)(param_1 + 0x468);
      for (plVar2 = plVar7; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
        if (plVar2 == plVar5) goto LAB_140c130b7;
      }
    }
    plVar7 = (longlong *)0x0;
LAB_140c130b7:
    lVar8 = plVar7[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      lVar8 = plVar7[0x1f];
      if (lVar8 == 0) goto LAB_140c13111;
    }
    lVar6 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *param_2 = *(undefined1 *)(lVar8 + 0x4aa);
      if (local_28 != (ulonglong *)0x0) {
        FMemory::Free();
      }
      return 1;
    }
  }
LAB_140c13111:
  puVar9 = puVar9 + 1;
  goto joined_r0x000140c1306a;
}



// FUNCTION 140c13190 FUN_140c13190 body=469 status=ok
// SIG undefined FUN_140c13190(void)

void FUN_140c13190(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_88 [6];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_88[4] = 0;
    local_88[5] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88 + 4,0);
    FGenericPlatformString::Memcpy(local_88[4],L"GAME FORCED",0x18);
    uVar5 = FText::FromString(local_28,local_88 + 4);
    FText::operator=(param_2,uVar5);
    lVar6 = local_88[4];
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        lVar6 = local_88[4];
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
          lVar6 = local_88[4];
        }
      }
    }
  }
  else if (*(int *)(param_1 + 4) == 1) {
    local_88[2] = 0;
    local_88[3] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88 + 2,0);
    FGenericPlatformString::Memcpy(local_88[2],L"USER REQUESTED",0x1e);
    uVar5 = FText::FromString(local_40,local_88 + 2);
    FText::operator=(param_2,uVar5);
    lVar6 = local_88[2];
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        lVar6 = local_88[2];
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
          lVar6 = local_88[2];
        }
      }
    }
  }
  else {
    local_88[0] = 0;
    local_88[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
    FGenericPlatformString::Memcpy(local_88[0],L"ACTUAL",0xe);
    uVar5 = FText::FromString(local_58,local_88);
    FText::operator=(param_2,uVar5);
    lVar6 = local_88[0];
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        lVar6 = local_88[0];
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
          lVar6 = local_88[0];
        }
      }
    }
  }
  if (lVar6 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c13370 FUN_140c13370 body=55 status=ok
// SIG undefined FUN_140c13370(void)

undefined8 FUN_140c13370(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
      if (lVar1 != 0) {
        uVar2 = FUN_140cb6910(lVar1);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140c133b0 FUN_140c133b0 body=131 status=ok
// SIG undefined FUN_140c133b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140c133b0(void)

{
  undefined8 *puVar1;
  
  if (DAT_14686b2c0 == '\0') {
    puVar1 = (undefined8 *)FUN_140c12330();
    if (puVar1 != (undefined8 *)&DAT_14686b268) {
      _DAT_14686b268 = *puVar1;
      uRam000000014686b270 = puVar1[1];
      _DAT_14686b278 = puVar1[2];
      uRam000000014686b280 = puVar1[3];
      _DAT_14686b288 = puVar1[4];
      uRam000000014686b290 = puVar1[5];
      _DAT_14686b298 = puVar1[6];
      uRam000000014686b2a0 = puVar1[7];
      _DAT_14686b2a8 = puVar1[8];
      uRam000000014686b2b0 = puVar1[9];
      _DAT_14686b2b8 = puVar1[10];
      DAT_14686b2c0 = 1;
      return &DAT_14686b268;
    }
  }
  return &DAT_14686b268;
}



// FUNCTION 140c13440 FUN_140c13440 body=142 status=ok
// SIG undefined FUN_140c13440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140c13440(void)

{
  undefined8 *puVar1;
  
  if (DAT_14686b330 == '\0') {
    puVar1 = (undefined8 *)FUN_140c12410();
    if (puVar1 != (undefined8 *)&DAT_14686b2c8) {
      _DAT_14686b2c8 = *puVar1;
      uRam000000014686b2d0 = puVar1[1];
      _DAT_14686b2d8 = puVar1[2];
      uRam000000014686b2e0 = puVar1[3];
      _DAT_14686b2e8 = puVar1[4];
      uRam000000014686b2f0 = puVar1[5];
      _DAT_14686b2f8 = puVar1[6];
      uRam000000014686b300 = puVar1[7];
      _DAT_14686b308 = puVar1[8];
      uRam000000014686b310 = puVar1[9];
      _DAT_14686b318 = puVar1[10];
      uRam000000014686b320 = puVar1[0xb];
      _DAT_14686b328 = puVar1[0xc];
      DAT_14686b330 = 1;
      return &DAT_14686b2c8;
    }
  }
  return &DAT_14686b2c8;
}



// FUNCTION 140c134d0 FUN_140c134d0 body=525 status=ok
// SIG undefined FUN_140c134d0(void)

longlong * FUN_140c134d0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *_Dst;
  void *_Src;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  longlong local_38 [2];
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x38))();
  lVar8 = plVar3[1];
  local_58 = *plVar3;
  *plVar3 = 0;
  local_50 = (int)plVar3[1];
  local_4c = *(int *)((longlong)plVar3 + 0xc);
  iVar4 = (7 - (uint)((int)lVar8 != 0)) + local_50;
  plVar3[1] = 0;
  iVar5 = local_50;
  if (local_4c < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,iVar4,-(int)lVar8);
    iVar5 = local_50;
  }
  local_50 = (7 - (uint)(iVar5 != 0)) + iVar5;
  if (local_4c < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar5);
  }
  iVar7 = local_4c;
  iVar4 = local_50;
  lVar8 = local_58;
  puVar1 = (undefined8 *)(local_58 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
  *puVar1 = 0x6e0061006c003f;
  *(undefined4 *)(puVar1 + 1) = 0x3d0067;
  *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1,local_38);
  if (iVar4 < 2) {
    *param_2 = 0;
    *param_2 = *plVar3;
    *plVar3 = 0;
    *(int *)(param_2 + 1) = (int)plVar3[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar3 + 0xc);
    plVar3[1] = 0;
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  else {
    iVar5 = (int)plVar3[1] + -1;
    if ((int)plVar3[1] == 0) {
      iVar5 = 0;
    }
    if ((iVar4 != 0) || (iVar2 = 1, iVar5 == 0)) {
      iVar2 = 0;
    }
    local_58 = lVar8;
    local_50 = iVar4;
    local_4c = iVar7;
    if (iVar7 < iVar2 + iVar5 + iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    }
    iVar4 = local_50;
    _Src = (void *)*plVar3;
    lVar8 = local_58;
    iVar2 = local_4c;
    iVar7 = local_50;
    if (iVar5 != 0) {
      lVar6 = (longlong)local_50;
      local_50 = (uint)(local_50 == 0) + iVar5 + local_50;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar4);
      }
      iVar2 = local_4c;
      iVar7 = local_50;
      lVar8 = local_58;
      _Dst = (void *)(local_58 + (lVar6 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = lVar8;
    *(int *)(param_2 + 1) = iVar7;
    *(int *)((longlong)param_2 + 0xc) = iVar2;
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140c136e0 FUN_140c136e0 body=253 status=ok
// SIG undefined FUN_140c136e0(void)

undefined8 * FUN_140c136e0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = 0;
  local_res10 = param_2;
  plVar5 = (longlong *)FUN_1404b0000(&local_res10);
  bVar8 = plVar5 != (longlong *)0x0;
  if (bVar8) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 200))(plVar5,local_28);
    uVar7 = *puVar6;
  }
  else {
    puVar6 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  *param_1 = uVar7;
  param_1[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  if (bVar8) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  plVar5 = plStack_30;
  if ((!bVar8) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140c137e0 FUN_140c137e0 body=26 status=ok
// SIG undefined FUN_140c137e0(void)

undefined8 * FUN_140c137e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141424bc0();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 140c13800 FUN_140c13800 body=232 status=ok
// SIG undefined FUN_140c13800(void)

void FUN_140c13800(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686bc78) && (_Init_thread_header(&DAT_14686bc78), DAT_14686bc78 == -1))
  {
    uVar1 = FUN_141437c50();
    FUN_141437c50();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"BalanceStateComponent",1);
    DAT_14686bc70 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686bc78);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_14686bc70 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_14686bc70 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686bc70 + 0x30));
  }
  return;
}



// FUNCTION 140c138f0 FUN_140c138f0 body=433 status=ok
// SIG undefined FUN_140c138f0(void)

void FUN_140c138f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142f41ff0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_14686bb88) && (_Init_thread_header(&DAT_14686bb88), DAT_14686bb88 == -1)) {
    uVar1 = FUN_141484230();
    FUN_141484230();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bFastTravelAvailable",1);
    DAT_14686bb80 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686bb88);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686bb80 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_14686bb80 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686bb80 + 0x30));
  }
  if ((*piVar5 < DAT_14686bb98) && (_Init_thread_header(&DAT_14686bb98), DAT_14686bb98 == -1)) {
    uVar1 = FUN_141484230();
    FUN_141484230();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HostDiscoveredPlanets",1);
    DAT_14686bb90 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686bb98);
  }
  if (0 < *(int *)(DAT_14686bb90 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_14686bb90 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_14686bb90 + 0x30));
  }
  return;
}



// FUNCTION 140c13ab0 FUN_140c13ab0 body=236 status=ok
// SIG undefined FUN_140c13ab0(void)

void FUN_140c13ab0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686bbf8) && (_Init_thread_header(&DAT_14686bbf8), DAT_14686bbf8 == -1))
  {
    uVar1 = AGShockOrb::GetPrivateStaticClass();
    AGShockOrb::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SplatDataAsset",1);
    DAT_14686bbf0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686bbf8);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_14686bbf0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_14686bbf0 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686bbf0 + 0x30));
  }
  return;
}



// FUNCTION 140c13ba0 GetDuration body=9 status=ok
// SIG undefined GetDuration(void)

undefined4 UGeometryCacheComponent::GetDuration(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x464);
}



// FUNCTION 140c13bb0 FUN_140c13bb0 body=8 status=ok
// SIG undefined FUN_140c13bb0(void)

undefined8 FUN_140c13bb0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



// FUNCTION 140c13bc0 FUN_140c13bc0 body=847 status=ok
// SIG undefined FUN_140c13bc0(void)

undefined8 FUN_140c13bc0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  short *_Src;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined2 *puVar12;
  uint uVar13;
  short *psVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  undefined1 local_res18 [16];
  undefined2 *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined2 *local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  short *local_a0;
  ulonglong local_98;
  longlong local_90 [2];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [24];
  
  if (param_3 == 0) {
    FText::FText();
    return param_1;
  }
  FText::FText(local_b8);
  uVar7 = FString::FString(local_50,param_2);
  uVar7 = FUN_1412c3780(uVar7,param_3);
  FWeakObjectPtr::operator=(local_res18,uVar7);
  cVar4 = FWeakObjectPtr::IsValid(local_res18);
  if (cVar4 != '\0') {
    lVar8 = FWeakObjectPtr::Get(local_res18);
    FText::operator=(local_b8,lVar8 + 0x30);
  }
  cVar4 = FText::IsEmpty(local_b8);
  if (cVar4 == '\0') goto LAB_140c13eb4;
  FUN_141e0eac0(&local_a0);
  _Src = local_a0;
  puVar16 = (undefined2 *)0x0;
  uVar13 = (uint)local_98;
  local_d8 = (undefined2 *)0x0;
  local_d0 = 0;
  local_cc = 0;
  psVar14 = local_a0 + (int)uVar13;
  do {
    if (psVar14 == local_a0) goto LAB_140c13cbf;
    psVar14 = psVar14 + -1;
  } while (*psVar14 != 0x2f);
  iVar6 = (int)((longlong)psVar14 - (longlong)local_a0 >> 1);
  if (iVar6 == -1) {
LAB_140c13cbf:
    puVar12 = local_d8;
    local_d0 = uVar13;
    if (uVar13 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_98 & 0xffffffff,0);
      puVar16 = local_d8;
      _guard_xfg_dispatch_icall_nop(local_d8,_Src,(longlong)(int)uVar13 * 2);
      puVar12 = local_d8;
    }
  }
  else {
    if (uVar13 == 0) {
      psVar14 = &DAT_143f3eda8;
      uVar13 = local_d0;
    }
    else {
      psVar14 = local_a0;
      uVar13 = uVar13 - 1;
    }
    uVar11 = uVar13 - (iVar6 + 1);
    uVar5 = local_d0;
    if ((-1 < (int)uVar11) && (uVar5 = uVar13, (int)uVar11 < (int)uVar13)) {
      uVar5 = uVar11;
    }
    local_c8 = (undefined2 *)0x0;
    local_c0 = 0;
    psVar14 = psVar14 + ((longlong)(int)uVar13 - (longlong)(int)uVar5);
    puVar12 = puVar16;
    if ((psVar14 != (short *)0x0) && (local_d0 = 0, *psVar14 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (psVar14[lVar8] != 0);
      uVar13 = (int)lVar8 + 1;
      local_c0 = (ulonglong)uVar13;
      local_d0 = uVar13;
      if (0 < (int)uVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
        local_d0 = (uint)local_c0;
      }
      puVar16 = local_c8;
      FGenericPlatformString::Memcpy(local_c8,psVar14,(longlong)(int)uVar13 * 2);
      puVar12 = puVar16;
    }
  }
  local_d8 = puVar12;
  uVar13 = local_d0;
  puVar9 = (undefined8 *)FUN_141e0eac0(local_90);
  if (*(int *)(param_2 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*param_2;
  }
  if (*(int *)(puVar9 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar9;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar12);
  if (iVar6 == 0) {
LAB_140c13de8:
    bVar3 = true;
  }
  else {
    if (*(int *)(param_2 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*param_2;
    }
    puVar10 = &DAT_143f3eda8;
    if (uVar13 != 0) {
      puVar10 = puVar16;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar12);
    if (iVar6 == 0) goto LAB_140c13de8;
    bVar3 = false;
  }
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  if (bVar3) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,L"Main Menu",L"OakGameUtils",L"MenuMapName");
    FText::operator=(local_b8,uVar7);
    plVar15 = local_78;
  }
  else {
    uVar7 = FText::FromString(local_68,param_2);
    FText::operator=(local_b8,uVar7);
    plVar15 = local_60;
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    puVar16 = local_d8;
    if ((int)lVar8 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      puVar16 = local_d8;
      if (iVar6 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
        puVar16 = local_d8;
      }
    }
  }
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  if (local_a0 != (short *)0x0) {
    FMemory::Free();
  }
LAB_140c13eb4:
  FText::FText(param_1,local_b8);
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_b0 + 1;
    lVar8 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140c13f10 FUN_140c13f10 body=12 status=ok
// SIG undefined FUN_140c13f10(void)

void FUN_140c13f10(longlong param_1)

{
  FWeakObjectPtr::Get(param_1 + 0x548);
  return;
}



// FUNCTION 140c13f20 FUN_140c13f20 body=56 status=ok
// SIG undefined FUN_140c13f20(void)

undefined8 FUN_140c13f20(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14044af00(param_1 + 0x548,0);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x548);
    uVar2 = FUN_14110df50(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140c13f60 FUN_140c13f60 body=148 status=ok
// SIG undefined FUN_140c13f60(void)

undefined8 FUN_140c13f60(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x148))();
    lVar3 = FUN_142f6c9f0(uVar2);
    if (lVar3 != 0) {
      lVar4 = UWebSocketNetDriver::StaticClass();
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
        uVar2 = FUN_140c14000(lVar3,param_1,param_2);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140c14000 FUN_140c14000 body=422 status=ok
// SIG undefined FUN_140c14000(void)

undefined8 FUN_140c14000(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = FUN_1413f82e0();
  lVar4 = param_3;
  while (lVar4 != lVar3) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    if (lVar4 == 0) {
      return 0;
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x700))(param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((char)param_1[0x25] != '\x03') {
    return 0;
  }
  puVar8 = (undefined4 *)param_1[0xe4];
  puVar1 = puVar8 + (longlong)(int)param_1[0xe5] * 2;
  for (; puVar8 != puVar1; puVar8 = puVar8 + 2) {
    local_res18 = *puVar8;
    local_res1c = puVar8[1];
    cVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if (cVar2 != '\0') {
      lVar4 = FWeakObjectPtr::Get(&local_res18);
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar5 = FUN_1413f82e0();
      lVar3 = param_3;
      do {
        lVar7 = param_3;
        if (lVar3 == lVar5) goto LAB_140c140c6;
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
      lVar7 = 0;
LAB_140c140c6:
      if (lVar4 == lVar7) goto LAB_140c14199;
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar4 = FUN_1407c74b0(uVar6);
  if (lVar4 != 0) {
    lVar5 = FUN_1413f82e0();
    lVar3 = param_3;
    do {
      lVar7 = param_3;
      if (lVar3 == lVar5) goto LAB_140c14115;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
    lVar7 = 0;
LAB_140c14115:
    FUN_1407cc110(lVar4,lVar7);
  }
  puVar8 = (undefined4 *)param_1[0xe4];
  puVar1 = puVar8 + (longlong)(int)param_1[0xe5] * 2;
  do {
    if (puVar8 == puVar1) {
      return 0;
    }
    local_res18 = *puVar8;
    local_res1c = puVar8[1];
    cVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if (cVar2 != '\0') {
      lVar4 = FWeakObjectPtr::Get(&local_res18);
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar5 = FUN_1413f82e0();
      lVar3 = param_3;
      do {
        lVar7 = param_3;
        if (lVar3 == lVar5) goto LAB_140c14186;
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
      lVar7 = 0;
LAB_140c14186:
      if (lVar4 == lVar7) {
LAB_140c14199:
        uVar6 = FWeakObjectPtr::Get(puVar8);
        return uVar6;
      }
    }
    puVar8 = puVar8 + 2;
  } while( true );
}



// FUNCTION 140c141b0 FUN_140c141b0 body=195 status=ok
// SIG undefined FUN_140c141b0(void)

undefined8 FUN_140c141b0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x148))();
    lVar3 = FUN_142f6c9f0(uVar2);
    if (lVar3 != 0) {
      lVar4 = UWebSocketNetDriver::StaticClass();
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
        uVar2 = FUN_141796280(param_2);
        uVar2 = FUN_140c14000(lVar3,param_1,uVar2);
        if (*(longlong *)(param_2 + 8) != 0) {
          FMemory::Free();
        }
        return uVar2;
      }
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 140c14280 FUN_140c14280 body=442 status=ok
// SIG undefined FUN_140c14280(void)

undefined8 FUN_140c14280(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_res8;
  undefined1 local_58 [8];
  longlong local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  FUN_140bf9ed0(local_58,param_2,*(longlong *)(DAT_146b33f38 + 0x88) + 0x120);
  local_res8 = FUN_141796df0(local_58);
  if (local_res8 != 0) {
    lVar6 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140c14315;
  }
  local_res8 = 0;
LAB_140c14315:
  if (local_res8 != 0) {
    lVar7 = FUN_142f71d80();
    for (lVar6 = local_res8; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar7) {
        uVar8 = FUN_142f5bb60(&local_res8);
        uVar8 = FUN_142dea370(uVar8,local_40);
        FText::operator=(param_1,uVar8);
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)local_38 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
        break;
      }
    }
  }
  cVar5 = FText::IsEmpty(param_1);
  if (cVar5 != '\0') {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"In the Borderlands",L"OakGameUtils",L"NoMissionText");
    FText::operator=(param_1,uVar8);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140c14460 FUN_140c14460 body=446 status=ok
// SIG undefined FUN_140c14460(void)

undefined8 FUN_140c14460(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 uVar7;
  longlong *plVar8;
  
  if (param_2 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_142f71d80();
    plVar6 = param_2;
    do {
      if (plVar6 == plVar2) {
        plVar2 = (longlong *)FUN_142f71d80();
        plVar6 = param_2;
        goto LAB_140c144b1;
      }
      plVar6 = (longlong *)plVar6[6];
    } while (plVar6 != (longlong *)0x0);
  }
  return 1;
  while (plVar6 = (longlong *)plVar6[6], plVar8 = (longlong *)0x0, plVar6 != (longlong *)0x0) {
LAB_140c144b1:
    plVar8 = param_2;
    if (plVar6 == plVar2) break;
  }
  lVar4 = plVar8[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar4 = plVar8[0x1f];
  }
  lVar4 = *(longlong *)(lVar4 + 0x188);
  if (lVar4 != 0) {
    lVar3 = FUN_14143d920();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = FUN_1405ec200(lVar4 + 0xf8);
      if (lVar4 != 0) {
        lVar3 = FUN_1414ba190();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
          lVar3 = FUN_140e7e6f0(uVar5);
          if (lVar3 != 0) {
            uVar7 = 0;
            plVar2 = (longlong *)FUN_142f71d80();
            plVar6 = param_2;
            do {
              plVar8 = param_2;
              if (plVar6 == plVar2) break;
              plVar6 = (longlong *)plVar6[6];
              plVar8 = (longlong *)0x0;
            } while (plVar6 != (longlong *)0x0);
            plVar6 = (longlong *)USpinBox::GetPrivateStaticClass();
            do {
              if (plVar8 == (longlong *)0x0) {
LAB_140c145e3:
                uVar5 = FUN_140e818f0(lVar3,lVar4,1,uVar7);
                return uVar5;
              }
              if (plVar8 == plVar6) {
                uVar7 = 1;
                goto LAB_140c145e3;
              }
              plVar8 = (longlong *)plVar8[6];
            } while( true );
          }
        }
      }
      return 1;
    }
  }
  return 1;
}



// FUNCTION 140c14620 FUN_140c14620 body=88 status=ok
// SIG undefined FUN_140c14620(void)

void FUN_140c14620(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1 + 8,local_res8);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *puVar2;
  return;
}



// FUNCTION 140c14680 FUN_140c14680 body=267 status=ok
// SIG undefined FUN_140c14680(void)

undefined4 FUN_140c14680(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_res10;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = 4;
  local_res10 = param_2;
  uVar6 = (**(code **)(*param_1 + 0x148))();
  plVar7 = (longlong *)FUN_142f6c9f0(uVar6);
  if (plVar7 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar7 + 0x700))(plVar7);
    if ((cVar4 != '\0') && (param_1[0x100] != 0)) {
      lVar8 = FUN_142f71d80();
      lVar3 = param_1[0x100];
      lVar9 = lVar3;
      if (lVar3 != 0) {
        while (lVar9 != lVar8) {
          lVar9 = *(longlong *)(lVar9 + 0x30);
          if (lVar9 == 0) {
            return 4;
          }
        }
        if (lVar3 != 0) {
          uVar5 = FUN_142f5c9d0(plVar7,local_res10);
          uVar6 = FUN_142f5bb60(&local_res10);
          FUN_142dea370(uVar6,local_28);
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_20 + 1;
            lVar3 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_20)(local_20);
              LOCK();
              piVar1 = (int *)((longlong)local_20 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_20 + 8))(local_20,1);
              }
            }
          }
        }
      }
    }
  }
  return uVar5;
}



// FUNCTION 140c14790 FUN_140c14790 body=93 status=ok
// SIG undefined FUN_140c14790(void)

longlong FUN_140c14790(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 0x480);
  if (lVar2 != 0) {
    lVar3 = FUN_14301f840();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140c147f0 FUN_140c147f0 body=511 status=ok
// SIG undefined FUN_140c147f0(void)

int FUN_140c147f0(longlong param_1,char param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 local_res20 [8];
  
  lVar6 = 0;
  lVar4 = FUN_1422312c0();
  if ((lVar4 != 0) && (lVar4 = FUN_14244f490(lVar4,0), lVar4 != 0)) {
    uVar5 = FUN_142e035e0();
    lVar6 = AGameStateBase::OnRep_GameModeClass(lVar4,uVar5);
    if (lVar6 != 0) {
      lVar4 = FUN_142e035e0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_140c14876;
    }
    lVar6 = 0;
  }
LAB_140c14876:
  iVar11 = 0;
  if (lVar6 == 0) {
    return 0;
  }
  plVar12 = *(longlong **)(param_1 + 0x458);
  plVar13 = plVar12 + (longlong)*(int *)(param_1 + 0x460) * 0x10;
joined_r0x000140c148a3:
  if (plVar12 == plVar13) {
    return iVar11;
  }
  plVar1 = (longlong *)*plVar12;
  if (param_3 != 0) {
    lVar7 = FUN_142f791f0();
    lVar4 = param_3;
    do {
      if (lVar4 == lVar7) {
        plVar8 = (longlong *)FUN_142f5a0d0(plVar1,local_res20);
        if (*plVar8 == 0) goto LAB_140c14904;
        lVar10 = FUN_142f791f0();
        lVar4 = *plVar8;
        lVar7 = lVar4;
        goto joined_r0x000140c148f4;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  goto LAB_140c1492e;
joined_r0x000140c148f4:
  if (lVar7 == 0) goto LAB_140c14904;
  if (lVar7 == lVar10) goto LAB_140c14906;
  lVar7 = *(longlong *)(lVar7 + 0x30);
  goto joined_r0x000140c148f4;
LAB_140c14904:
  lVar4 = 0;
LAB_140c14906:
  lVar10 = FUN_142f791f0();
  lVar7 = param_3;
  do {
    lVar9 = param_3;
    if (lVar7 == lVar10) goto LAB_140c14925;
    lVar7 = *(longlong *)(lVar7 + 0x30);
  } while (lVar7 != 0);
  lVar9 = 0;
LAB_140c14925:
  if (lVar4 == lVar9) {
LAB_140c1492e:
    if (((param_2 == '\0') ||
        (cVar3 = (**(code **)(*plVar1 + 0x278))(plVar1,param_2), cVar3 != '\0')) &&
       (plVar1[0x48] != 0)) {
      lVar10 = FUN_142dfdfe0();
      lVar4 = plVar1[0x48];
      for (lVar7 = lVar4; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar10) {
          if (lVar4 != 0) {
            if (lVar4 == 0) goto LAB_140c149a2;
            lVar10 = FUN_142dfdfe0();
            lVar4 = plVar1[0x48];
            lVar7 = lVar4;
            goto joined_r0x000140c14992;
          }
          break;
        }
      }
    }
  }
LAB_140c149b2:
  plVar12 = plVar12 + 0x10;
  goto joined_r0x000140c148a3;
joined_r0x000140c14992:
  if (lVar7 == 0) goto LAB_140c149a2;
  if (lVar7 == lVar10) goto LAB_140c149a4;
  lVar7 = *(longlong *)(lVar7 + 0x30);
  goto joined_r0x000140c14992;
LAB_140c149a2:
  lVar4 = 0;
LAB_140c149a4:
  cVar3 = FUN_142dd3360(lVar6,lVar4);
  if (cVar3 != '\0') {
    iVar11 = iVar11 + 1;
  }
  goto LAB_140c149b2;
}



// FUNCTION 140c149f0 FUN_140c149f0 body=131 status=ok
// SIG undefined FUN_140c149f0(void)

undefined8 FUN_140c149f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar3 = UWebSocketNetDriver::StaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      puVar4 = (undefined8 *)FUN_142f5a0d0(param_1,local_res8);
      uVar5 = FUN_140c147f0(lVar1,*(undefined1 *)(param_1 + 0x4c0),*puVar4);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 140c14a80 FUN_140c14a80 body=181 status=ok
// SIG undefined FUN_140c14a80(void)

int FUN_140c14a80(longlong param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *local_18;
  int local_10;
  
  if (*(char *)(param_1 + 0xd8) == '\0') {
    lVar2 = UCableComponent::GetAttachedActor(param_1 + -0x658);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_1407cb580(lVar2);
      pvVar4 = (void *)0x0;
      local_18 = (void *)0x0;
      local_10 = *(int *)(puVar3 + 1);
      lVar2 = (longlong)local_10;
      _Src = (void *)*puVar3;
      if (local_10 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
        pvVar4 = local_18;
        _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar2 << 3);
      }
      iVar1 = local_10;
      if (local_10 < 1) {
        iVar1 = 1;
      }
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      return iVar1;
    }
  }
  return 1;
}



// FUNCTION 140c14b40 FUN_140c14b40 body=329 status=ok
// SIG undefined FUN_140c14b40(void)

longlong FUN_140c14b40(int param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_28 [8];
  longlong local_20;
  
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  FUN_140bf9ed0(local_28,param_1,*(longlong *)(DAT_146b33f38 + 0x88) + 0x120);
  plVar2 = (longlong *)FUN_141796df0(local_28);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_14171bfe0();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar4 = (longlong *)FUN_142f71d80();
      plVar6 = plVar2;
      do {
        if (plVar6 == plVar4) {
          plVar4 = (longlong *)FUN_142f71d80();
          plVar6 = plVar2;
          goto LAB_140c14bf8;
        }
        plVar6 = (longlong *)plVar6[6];
      } while (plVar6 != (longlong *)0x0);
    }
  }
  goto LAB_140c14c62;
  while (plVar6 = (longlong *)plVar6[6], plVar6 != (longlong *)0x0) {
LAB_140c14bf8:
    if (plVar6 == plVar4) goto LAB_140c14c08;
  }
  plVar2 = (longlong *)0x0;
LAB_140c14c08:
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) goto LAB_140c14c62;
  }
  lVar5 = FUN_141437870();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) goto LAB_140c14c64;
LAB_140c14c62:
  lVar3 = 0;
LAB_140c14c64:
  if (local_20 != 0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 140c14ca0 FUN_140c14ca0 body=1724 status=ok
// SIG undefined FUN_140c14ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140c14ca0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,float *param_4,
                      undefined8 *param_5)

{
  wchar_t wVar1;
  wint_t wVar2;
  wint_t wVar3;
  float *pfVar4;
  wchar_t *pwVar5;
  wint_t *pwVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
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
  float fVar22;
  float fVar23;
  undefined1 local_58 [8];
  undefined4 local_50;
  
  puVar7 = &DAT_143f3eda8;
  fVar21 = (float)(_DAT_14686a950 & _DAT_14686a960);
  fVar22 = (float)(uRam000000014686a954 & uRam000000014686a964);
  fVar23 = (float)(uRam000000014686a958 & uRam000000014686a968);
  if (*(int *)(param_3 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_3;
  }
  pwVar5 = 
  L"/Game/PatchDLC/Ixora2/GameData/FastTravel/LevelTravel/LTS_Ixora2_Watership_EdenMystery.LTS_Ixora2_Watership_EdenMystery"
  ;
  do {
    wVar1 = *(wchar_t *)((longlong)(puVar8 + -0xa2197148) + (longlong)pwVar5);
    if ((wVar1 == L'\0') && (*pwVar5 == L'\0')) goto LAB_140c14d42;
    if (wVar1 != *pwVar5) {
      wVar2 = towlower(wVar1);
      wVar3 = towlower(*pwVar5);
      if (wVar2 != wVar3) break;
    }
    pwVar5 = pwVar5 + 1;
  } while( true );
  if (wVar2 != wVar3) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_3;
    }
    pwVar5 = 
    L"/Game/PatchDLC/Ixora2/GameData/FastTravel/LevelTravel/LTS_Ixora2_Desolate_NekroMystery.LTS_Ixora2_Desolate_NekroMystery"
    ;
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar5 + (longlong)(puVar8 + -0xa2197228));
      if ((wVar1 == L'\0') && (*pwVar5 == L'\0')) goto LAB_140c14ed2;
      if (wVar1 != *pwVar5) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar5);
        if (wVar2 != wVar3) goto LAB_140c14ec3;
      }
      pwVar5 = pwVar5 + 1;
    } while( true );
  }
LAB_140c14d42:
  param_4[0] = -36904.75;
  param_4[1] = -34124.78;
  param_4[2] = 1789.0615;
  local_50 = 0;
  *param_5 = 0x430a27a100000000;
  *(undefined4 *)(param_5 + 1) = 0;
  pfVar4 = (float *)FRotator::Quaternion(param_5,local_58);
  fVar15 = *pfVar4;
  fVar17 = pfVar4[1];
  fVar19 = pfVar4[2];
  fVar20 = pfVar4[3];
  if (DAT_14686a90c == 0) {
    fVar12 = 149.99759;
    fVar13 = 149.99968;
    fVar14 = 115.14514;
  }
  else if (DAT_14686a90c == 1) {
    fVar12 = 149.99916;
    fVar13 = 49.99962;
    fVar14 = 108.026;
  }
  else if (DAT_14686a90c == 2) {
    fVar12 = 150.00072;
    fVar13 = -50.000443;
    fVar14 = 105.537476;
  }
  else {
    if (DAT_14686a90c != 3) goto LAB_140c14e53;
    fVar12 = 149.99968;
    fVar13 = -149.99759;
    fVar14 = 104.47058;
  }
  goto LAB_140c14dda;
LAB_140c14ec3:
  if (wVar2 != wVar3) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_3;
    }
    pwVar6 = &DAT_14432e5d0;
    do {
      wVar2 = *(wint_t *)((longlong)pwVar6 + (longlong)(puVar8 + -0xa21972e8));
      if ((wVar2 == 0) && (*pwVar6 == 0)) goto LAB_140c15012;
      if (wVar2 != *pwVar6) {
        wVar2 = towlower(wVar2);
        wVar3 = towlower(*pwVar6);
        if (wVar2 != wVar3) goto LAB_140c15003;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
LAB_140c14ed2:
  param_4[0] = 4728.532;
  param_4[1] = -63990.938;
  param_4[2] = 1622.95;
  local_50 = 0;
  *param_5 = 0x42e69a0d00000000;
  *(undefined4 *)(param_5 + 1) = 0;
  pfVar4 = (float *)FRotator::Quaternion(param_5,local_58);
  fVar15 = *pfVar4;
  fVar17 = pfVar4[1];
  fVar19 = pfVar4[2];
  fVar20 = pfVar4[3];
  if (DAT_14686a90c == 0) {
    fVar12 = 150.00201;
    fVar13 = 149.9992;
    fVar14 = 96.70862;
  }
  else if (DAT_14686a90c == 1) {
    fVar12 = 149.99944;
    fVar13 = 50.00029;
    fVar14 = 94.73755;
  }
  else if (DAT_14686a90c == 2) {
    fVar12 = 150.00061;
    fVar13 = -49.999847;
    fVar14 = 93.84802;
  }
  else {
    if (DAT_14686a90c != 3) goto LAB_140c14e53;
    fVar12 = 149.99805;
    fVar13 = -149.99878;
    fVar14 = 96.09766;
  }
  fVar12 = fVar12 * fVar21;
  fVar13 = fVar13 * fVar22;
  fVar14 = fVar14 * fVar23;
  fVar9 = fVar14 * fVar17 - fVar13 * fVar19;
  fVar10 = fVar12 * fVar19 - fVar14 * fVar15;
  fVar11 = fVar13 * fVar15 - fVar12 * fVar17;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar16 = fVar20 * fVar9;
  fVar18 = fVar20 * fVar10;
  fVar20 = fVar20 * fVar11;
  fVar21 = fVar10 * fVar19;
  fVar22 = fVar11 * fVar15;
  fVar23 = fVar9 * fVar17;
  fVar11 = fVar11 * fVar17;
  fVar9 = fVar9 * fVar19;
  fVar10 = fVar10 * fVar15;
  goto LAB_140c14e20;
LAB_140c15003:
  if (wVar2 != wVar3) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_3;
    }
    pwVar5 = 
    L"/Game/PatchDLC/Ixora2/GameData/FastTravel/LevelTravel/LTS_Ixora2_Sacrifice_SacrificeBoss.LTS_Ixora2_Sacrifice_SacrificeBoss"
    ;
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar8 + -0xa21973d8) + (longlong)pwVar5);
      if ((wVar1 == L'\0') && (*pwVar5 == L'\0')) goto LAB_140c15152;
      if (wVar1 != *pwVar5) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar5);
        if (wVar2 != wVar3) goto LAB_140c15143;
      }
      pwVar5 = pwVar5 + 1;
    } while( true );
  }
LAB_140c15012:
  param_4[0] = 19313.656;
  param_4[1] = -3173.5012;
  param_4[2] = -1780.6559;
  local_50 = 0;
  *param_5 = 0x431c963300000000;
  *(undefined4 *)(param_5 + 1) = 0;
  pfVar4 = (float *)FRotator::Quaternion(param_5,local_58);
  fVar15 = *pfVar4;
  fVar17 = pfVar4[1];
  fVar19 = pfVar4[2];
  fVar20 = pfVar4[3];
  if (DAT_14686a90c == 0) {
    fVar12 = 150.00017;
    fVar13 = 150.00006;
  }
  else if (DAT_14686a90c == 1) {
    fVar12 = 149.99922;
    fVar13 = 49.99978;
  }
  else if (DAT_14686a90c == 2) {
    fVar12 = 150.00021;
    fVar13 = -49.999954;
  }
  else {
    if (DAT_14686a90c != 3) goto LAB_140c14e53;
    fVar12 = 149.99928;
    fVar13 = -150.00021;
  }
  fVar12 = fVar12 * fVar21;
  fVar13 = fVar13 * fVar22;
  fVar14 = fVar23 * 105.250244;
  fVar9 = fVar14 * fVar17 - fVar13 * fVar19;
  fVar10 = fVar12 * fVar19 - fVar14 * fVar15;
  fVar11 = fVar13 * fVar15 - fVar12 * fVar17;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar16 = fVar20 * fVar9;
  fVar18 = fVar20 * fVar10;
  fVar20 = fVar20 * fVar11;
  fVar21 = fVar10 * fVar19;
  fVar22 = fVar11 * fVar15;
  fVar23 = fVar9 * fVar17;
  fVar11 = fVar11 * fVar17;
  fVar9 = fVar9 * fVar19;
  fVar10 = fVar10 * fVar15;
  goto LAB_140c14e20;
LAB_140c15242:
  if (wVar2 != wVar3) {
    return (ulonglong)(byte)(wVar3 >> 8) << 8;
  }
LAB_140c15251:
  param_4[0] = 16643.525;
  param_4[1] = -62705.863;
  param_4[2] = 3921.7234;
  local_50 = 0;
  *param_5 = 0x4309ca0300000000;
  *(undefined4 *)(param_5 + 1) = 0;
  pfVar4 = (float *)FRotator::Quaternion(param_5,local_58);
  fVar15 = *pfVar4;
  fVar17 = pfVar4[1];
  fVar19 = pfVar4[2];
  fVar20 = pfVar4[3];
  if (DAT_14686a90c == 0) {
    fVar12 = 245.74419;
    fVar13 = 142.38008;
    fVar14 = 103.19922;
  }
  else if (DAT_14686a90c == 1) {
    fVar12 = 150.00098;
    fVar13 = 49.999947;
    fVar14 = 105.250244;
  }
  else if (DAT_14686a90c == 2) {
    fVar12 = 149.62723;
    fVar13 = -71.05847;
    fVar14 = 105.250244;
  }
  else {
    if (DAT_14686a90c != 3) goto LAB_140c14e53;
    fVar12 = 237.36115;
    fVar13 = -154.0224;
    fVar14 = 103.437744;
  }
  fVar12 = fVar12 * fVar21;
  fVar13 = fVar13 * fVar22;
  fVar14 = fVar14 * fVar23;
  fVar9 = fVar14 * fVar17 - fVar13 * fVar19;
  fVar10 = fVar12 * fVar19 - fVar14 * fVar15;
  fVar11 = fVar13 * fVar15 - fVar12 * fVar17;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar16 = fVar20 * fVar9;
  fVar18 = fVar20 * fVar10;
  fVar20 = fVar20 * fVar11;
  fVar21 = fVar10 * fVar19;
  fVar22 = fVar11 * fVar15;
  fVar23 = fVar9 * fVar17;
  fVar11 = fVar11 * fVar17;
  fVar9 = fVar9 * fVar19;
  fVar10 = fVar10 * fVar15;
  goto LAB_140c14e20;
LAB_140c15143:
  if (wVar2 != wVar3) {
    if (*(int *)(param_3 + 1) != 0) {
      puVar7 = (undefined2 *)*param_3;
    }
    pwVar5 = 
    L"/Game/PatchDLC/Ixora2/GameData/FastTravel/LevelTravel/LTS_Ixora2_City_PrometheaMystery.LTS_Ixora2_City_PrometheaMystery"
    ;
    do {
      wVar1 = *(wchar_t *)((longlong)pwVar5 + (longlong)(puVar7 + -0xa21974c8));
      if ((wVar1 == L'\0') && (*pwVar5 == L'\0')) goto LAB_140c15251;
      if (wVar1 != *pwVar5) {
        wVar2 = towlower(wVar1);
        wVar3 = towlower(*pwVar5);
        if (wVar2 != wVar3) goto LAB_140c15242;
      }
      pwVar5 = pwVar5 + 1;
    } while( true );
  }
LAB_140c15152:
  param_4[0] = 97174.53;
  param_4[1] = 29677.572;
  param_4[2] = 11177.993;
  local_50 = 0;
  *param_5 = 0xc2b1d0d800000000;
  *(undefined4 *)(param_5 + 1) = 0;
  pfVar4 = (float *)FRotator::Quaternion(param_5,local_58);
  fVar15 = *pfVar4;
  fVar17 = pfVar4[1];
  fVar19 = pfVar4[2];
  fVar20 = pfVar4[3];
  if (DAT_14686a90c == 0) {
    fVar12 = 150.00151;
    fVar13 = 150.0042;
    fVar14 = 165.67188;
  }
  else if (DAT_14686a90c == 1) {
    fVar12 = 149.99979;
    fVar13 = 50.001694;
    fVar14 = 100.01953;
  }
  else if (DAT_14686a90c == 2) {
    fVar12 = 150.0;
    fVar13 = -50.000854;
    fVar14 = 100.40332;
  }
  else {
    if (DAT_14686a90c != 3) goto LAB_140c14e53;
    fVar12 = 150.00026;
    fVar13 = -150.00339;
    fVar14 = 101.68262;
  }
LAB_140c14dda:
  fVar12 = fVar12 * fVar21;
  fVar13 = fVar13 * fVar22;
  fVar14 = fVar14 * fVar23;
  fVar9 = fVar14 * fVar17 - fVar13 * fVar19;
  fVar10 = fVar12 * fVar19 - fVar14 * fVar15;
  fVar11 = fVar13 * fVar15 - fVar12 * fVar17;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar16 = fVar20 * fVar9;
  fVar18 = fVar20 * fVar10;
  fVar20 = fVar20 * fVar11;
  fVar21 = fVar10 * fVar19;
  fVar22 = fVar11 * fVar15;
  fVar23 = fVar9 * fVar17;
  fVar11 = fVar11 * fVar17;
  fVar9 = fVar9 * fVar19;
  fVar10 = fVar10 * fVar15;
LAB_140c14e20:
  *param_4 = (fVar11 - fVar21) + fVar16 + fVar12 + *param_4;
  param_4[1] = (fVar9 - fVar22) + fVar18 + fVar13 + param_4[1];
  param_4[2] = (fVar10 - fVar23) + fVar20 + fVar14 + param_4[2];
LAB_140c14e53:
  DAT_14686a90c = DAT_14686a90c + 1 & 0x80000003;
  if ((int)DAT_14686a90c < 0) {
    DAT_14686a90c = (DAT_14686a90c - 1 | 0xfffffffc) + 1;
  }
  return CONCAT71((uint7)(uint3)(DAT_14686a90c >> 8),1);
}



// FUNCTION 140c15360 FUN_140c15360 body=314 status=ok
// SIG undefined FUN_140c15360(void)

undefined8 FUN_140c15360(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = UGameplayTagAssetInterface::GetPrivateStaticClass();
  lVar4 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar3);
  if (lVar4 == 0) {
    return 0;
  }
  lVar4 = FUN_1422312c0(param_2);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar4 = FUN_1424503b0(lVar4), lVar4 != 0)) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar4 = FUN_142df3510(*(undefined8 *)(lVar4 + 0x848)), lVar4 != 0)) {
        iVar2 = FUN_142dec940(lVar4,param_2);
        goto LAB_140c15459;
      }
    }
  }
  iVar2 = 1;
LAB_140c15459:
  if (iVar2 == 0) {
    uVar6 = 2;
  }
  else if (iVar2 == 1) {
    uVar6 = 1;
  }
  else {
    if (iVar2 != 2) {
      return 0;
    }
    uVar6 = 3;
  }
  uVar3 = FUN_140c154a0(param_1,param_2,uVar6);
  return uVar3;
}



// FUNCTION 140c154a0 FUN_140c154a0 body=197 status=ok
// SIG undefined FUN_140c154a0(void)

longlong FUN_140c154a0(undefined8 param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if (param_2 == 0) {
    return 0;
  }
  cVar2 = IsGarbageCollecting();
  if (cVar2 == '\0') {
    uVar3 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    lVar4 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar3);
    if (lVar4 != 0) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
      if (lVar4 != 0) {
        plVar5 = *(longlong **)(lVar4 + 0x570);
        plVar1 = plVar5 + *(int *)(lVar4 + 0x578);
        lVar6 = 0;
        if (plVar5 != plVar1) {
          while ((lVar6 = *plVar5, lVar6 == 0 || (*(char *)(lVar6 + 0x30) != param_3))) {
            plVar5 = plVar5 + 1;
            if (plVar5 == plVar1) {
              return 0;
            }
          }
        }
      }
    }
  }
  return lVar6;
}



// FUNCTION 140c15570 FUN_140c15570 body=56 status=ok
// SIG undefined FUN_140c15570(void)

longlong FUN_140c15570(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xf0);
  plVar1 = plVar3 + *(int *)(param_1 + 0xf8);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    lVar2 = *plVar3;
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x88) == *param_2)) break;
    plVar3 = plVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 140c155b0 FUN_140c155b0 body=334 status=ok
// SIG undefined FUN_140c155b0(void)

longlong * FUN_140c155b0(undefined4 param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 local_28 [8];
  longlong local_20;
  
  plVar8 = (longlong *)0x0;
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  lVar3 = FUN_142f6caf0(param_2);
  if (lVar3 == 0) {
    return (longlong *)0x0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  FUN_140bf9ed0(local_28,param_1,*(longlong *)(DAT_146b33f38 + 0x88) + 0x120);
  plVar4 = (longlong *)FUN_141796df0(local_28);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar6 = (longlong *)FUN_142f71d80();
      plVar7 = plVar4;
      do {
        if (plVar7 == plVar6) {
          plVar6 = (longlong *)FUN_142f71d80();
          plVar7 = plVar4;
          goto LAB_140c15690;
        }
        plVar7 = (longlong *)plVar7[6];
      } while (plVar7 != (longlong *)0x0);
    }
  }
  goto LAB_140c156d0;
  while (plVar7 = (longlong *)plVar7[6], plVar9 = plVar8, plVar7 != (longlong *)0x0) {
LAB_140c15690:
    plVar9 = plVar4;
    if (plVar7 == plVar6) break;
  }
  lVar5 = plVar9[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar5 = plVar9[0x1f];
  }
  iVar2 = FUN_142f5e2e0(lVar3,lVar5);
  plVar8 = (longlong *)0x0;
  if (iVar2 != -1) {
    plVar8 = (longlong *)(ulonglong)(iVar2 + 1);
  }
LAB_140c156d0:
  if (local_20 != 0) {
    FMemory::Free();
  }
  return plVar8;
}



// FUNCTION 140c15700 FUN_140c15700 body=141 status=ok
// SIG undefined FUN_140c15700(void)

longlong FUN_140c15700(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_38 [48];
  
  if (param_1[0xd] != 0) {
    return param_1[0xd];
  }
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    iVar1 = FUN_1428cf800(lVar2);
    if (iVar1 != 3) {
      uVar3 = FActorSpawnParameters::FActorSpawnParameters(local_38);
      uVar4 = FUN_14146f560();
      lVar2 = UWorld::SpawnActor(lVar2,uVar4,0,0,uVar3);
      param_1[0xd] = lVar2;
      return lVar2;
    }
  }
  return param_1[0xd];
}



// FUNCTION 140c15790 FUN_140c15790 body=85 status=ok
// SIG undefined FUN_140c15790(void)

longlong FUN_140c15790(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140c15a40(param_1[2],*(undefined8 *)(*param_1 + 0x90));
  if (*(int *)(lVar1 + 0x20) != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x18);
    if (*(longlong *)(lVar1 + 0x18) == 0) {
      lVar2 = lVar1 + 8;
    }
    return lVar2 + (longlong)(*(int *)(lVar1 + 0x20) + -1) * 0x10;
  }
  lVar1 = FUN_140aa2bd0(lVar1);
  return lVar1;
}



// FUNCTION 140c157f0 FUN_140c157f0 body=201 status=ok
// SIG undefined FUN_140c157f0(void)

longlong FUN_140c157f0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x20) <= param_2) {
    iVar4 = param_2 + 1;
    lVar5 = param_1 + 8;
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 < iVar4) {
      *(int *)(param_1 + 0x20) = iVar4;
      iVar6 = iVar4 - iVar1;
      if (*(int *)(param_1 + 0x24) < iVar4) {
        TArray<FSlateCachedClipState,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>::ResizeGrow
                  (lVar5,iVar1);
      }
      lVar2 = *(longlong *)(param_1 + 0x18);
      if (*(longlong *)(param_1 + 0x18) == 0) {
        lVar2 = lVar5;
      }
      puVar3 = (undefined8 *)(lVar2 + (longlong)iVar1 * 0x10);
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
    }
    else if (iVar4 < iVar1) {
      FUN_140c24850(lVar5,iVar4,iVar1 - iVar4,1);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar5 = param_1 + 8;
  }
  return (longlong)param_2 * 0x10 + lVar5;
}



// FUNCTION 140c158c0 FUN_140c158c0 body=381 status=ok
// SIG undefined FUN_140c158c0(void)

ulonglong FUN_140c158c0(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar5 = (undefined4 *)(ulonglong)(uint)param_2[0x22];
  if (param_2[0x22] == 2) {
    puVar5 = *(undefined4 **)(param_2 + 0x20);
    puVar8 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar8 = param_2;
    }
    if (puVar8 != (undefined4 *)0x0) {
      uVar1 = *(ushort *)(puVar8 + 6);
      puVar5 = (undefined4 *)(ulonglong)uVar1;
      if (uVar1 == 0x28) {
        lVar3 = FUN_1407ba9a0();
      }
      else {
        if (uVar1 != 0x27) goto LAB_140c15a20;
        local_18 = *puVar8;
        uStack_14 = puVar8[1];
        uStack_10 = puVar8[2];
        uStack_c = puVar8[3];
        lVar3 = FHardwareCursor::GetHandle(&local_18);
      }
      puVar5 = (undefined4 *)0x0;
      if (lVar3 != 0) {
        lVar4 = FUN_1429e18b0();
        iVar2 = *(int *)(lVar4 + 0x90);
        uVar7 = (longlong)iVar2;
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar2) ||
           (uVar7 = *(ulonglong *)(*(longlong *)(lVar3 + 0x10) + 0x88),
           *(longlong *)(uVar7 + (longlong)iVar2 * 8) != lVar4 + 0x88)) {
          puVar5 = (undefined4 *)(uVar7 & 0xffffffffffffff00);
        }
        else {
          puVar5 = (undefined4 *)CONCAT71((int7)(uVar7 >> 8),1);
        }
        if (((char)puVar5 != '\0') && (1 < (int)param_2[0x22])) {
          puVar5 = *(undefined4 **)(param_2 + 0x20);
          puVar8 = puVar5;
          if (puVar5 == (undefined4 *)0x0) {
            puVar8 = param_2;
          }
          puVar9 = puVar8 + 8;
          if (puVar9 != (undefined4 *)0x0) {
            uVar1 = *(ushort *)(puVar8 + 0xe);
            puVar5 = (undefined4 *)(ulonglong)uVar1;
            if (uVar1 == 0x28) {
              lVar4 = FUN_1407ba9a0(puVar9);
            }
            else {
              if (uVar1 != 0x27) goto LAB_140c15a20;
              local_18 = *puVar9;
              uStack_14 = puVar8[9];
              uStack_10 = puVar8[10];
              uStack_c = puVar8[0xb];
              lVar4 = FHardwareCursor::GetHandle(&local_18);
            }
            puVar5 = (undefined4 *)0x0;
            if (lVar4 != 0) {
              lVar6 = UFocusButtonWidget::GetPrivateStaticClass();
              iVar2 = *(int *)(lVar6 + 0x90);
              uVar7 = (longlong)iVar2;
              if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar2) ||
                 (uVar7 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
                 *(longlong *)(uVar7 + (longlong)iVar2 * 8) != lVar6 + 0x88)) {
                puVar5 = (undefined4 *)(uVar7 & 0xffffffffffffff00);
              }
              else {
                puVar5 = (undefined4 *)CONCAT71((int7)(uVar7 >> 8),1);
              }
              if ((char)puVar5 != '\0') {
                *param_3 = lVar3;
                *param_4 = lVar4;
                return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
              }
            }
          }
        }
      }
    }
  }
LAB_140c15a20:
  return (ulonglong)puVar5 & 0xffffffffffffff00;
}



// FUNCTION 140c15a40 FUN_140c15a40 body=270 status=ok
// SIG undefined FUN_140c15a40(void)

longlong * FUN_140c15a40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 200);
  lVar5 = (longlong)iVar2;
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
    plVar3 = plVar1;
  }
  plVar4 = plVar3 + lVar5 * 5;
  if (plVar3 != plVar4) {
    do {
      if (*(longlong *)(*plVar3 + 0x28) == *(longlong *)(param_2 + 0x28)) {
        return plVar3;
      }
      plVar3 = plVar3 + 5;
    } while (plVar3 != plVar4);
  }
  *(int *)(param_1 + 200) = iVar2 + 1;
  if (*(int *)(param_1 + 0xcc) < iVar2 + 1) {
    TArray<`anonymous_namespace'::FKerningOnlyTextSequenceEntry,TInlineAllocator<4,FDefaultAllocator>_>
    ::ResizeGrow(plVar1,iVar2);
  }
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
    plVar3 = plVar1;
  }
  plVar4 = plVar3 + lVar5 * 5 + 1;
  plVar3[lVar5 * 5] = param_2;
  plVar3[lVar5 * 5 + 3] = 0;
  plVar3[lVar5 * 5 + 4] = 0;
  *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
  if (*(int *)((longlong)plVar4 + 0x1c) < (int)plVar4[3]) {
    TArray<FSlateCachedClipState,TInlineAllocator<1,TSizedDefaultAllocator<32>_>_>::ResizeGrow
              (plVar4,0);
  }
  plVar3 = (longlong *)plVar4[2];
  if ((longlong *)plVar4[2] == (longlong *)0x0) {
    plVar3 = plVar4;
  }
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
    plVar3 = plVar1;
  }
  return plVar3 + lVar5 * 5;
}



// FUNCTION 140c15b50 FUN_140c15b50 body=200 status=ok
// SIG undefined FUN_140c15b50(void)

void FUN_140c15b50(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142d842c0();
  lVar2 = *(longlong *)(param_1 + 0x4b8);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x5a0);
    if (lVar3 != 0) {
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
      }
      *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar3;
    }
    lVar3 = *(longlong *)(lVar2 + 0x5a8);
    if (lVar3 != 0) {
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
      }
      *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar3;
    }
    lVar2 = *(longlong *)(lVar2 + 0x5b0);
    if (lVar2 != 0) {
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
      }
      *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
    }
  }
  return;
}



// FUNCTION 140c15c20 FUN_140c15c20 body=98 status=ok
// SIG undefined FUN_140c15c20(void)

void FUN_140c15c20(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  FUN_142450b20();
  if ((*(longlong *)(param_1 + 0x4b8) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x5b0), lVar2 != 0)) {
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
    }
    *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 140c15c90 FUN_140c15c90 body=478 status=ok
// SIG undefined FUN_140c15c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_140c15c90(void *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  undefined1 *local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_3c = 0;
  if (param_2 == 0) {
    *(undefined8 *)((longlong)param_1 + 0x80) = 0;
    _guard_xfg_dispatch_icall_nop(param_1,local_c8,0x80);
    puVar5 = (undefined1 *)0x0;
    iVar6 = 0;
    iVar8 = 0;
    if (*(longlong *)((longlong)param_1 + 0x80) != 0) {
      FMemory::Free();
      puVar5 = local_48;
      iVar6 = local_40;
      iVar8 = local_3c;
    }
    *(undefined1 **)((longlong)param_1 + 0x80) = puVar5;
    *(int *)((longlong)param_1 + 0x88) = iVar6;
    *(int *)((longlong)param_1 + 0x8c) = iVar8;
  }
  else {
    plVar3 = (longlong *)FUN_1407cb160(param_2);
    plVar7 = (longlong *)*plVar3;
    plVar3 = plVar7 + (int)plVar3[1];
    puVar5 = local_48;
    for (; local_48 = puVar5, plVar7 != plVar3; plVar7 = plVar7 + 1) {
      lVar1 = *plVar7;
      if (lVar1 != 0) {
        lVar4 = FUN_141477600();
        iVar6 = local_40;
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar4 = (longlong)local_40;
          local_40 = local_40 + 1;
          if (local_3c < local_40) {
            TArray<FName,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_c8,iVar6);
          }
          puVar5 = local_c8;
          if (local_48 != (undefined1 *)0x0) {
            puVar5 = local_48;
          }
          *(longlong *)(puVar5 + lVar4 * 8) = lVar1;
        }
      }
      puVar5 = local_48;
    }
    *(undefined8 *)((longlong)param_1 + 0x80) = 0;
    if (puVar5 == (undefined1 *)0x0) {
      _guard_xfg_dispatch_icall_nop(param_1,local_c8,0x80);
    }
    if (*(longlong *)((longlong)param_1 + 0x80) != 0) {
      FMemory::Free();
      puVar5 = local_48;
    }
    *(undefined1 **)((longlong)param_1 + 0x80) = puVar5;
    *(int *)((longlong)param_1 + 0x88) = local_40;
    *(int *)((longlong)param_1 + 0x8c) = local_3c;
  }
  return param_1;
}



// FUNCTION 140c15e90 FUN_140c15e90 body=21 status=ok
// SIG undefined FUN_140c15e90(void)

undefined8 FUN_140c15e90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x5a0);
  }
  return 0;
}



// FUNCTION 140c15eb0 FUN_140c15eb0 body=172 status=ok
// SIG undefined FUN_140c15eb0(void)

longlong FUN_140c15eb0(int param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_28 [8];
  longlong local_20;
  
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  FUN_140bf9ed0(local_28,param_1,*(longlong *)(DAT_146b33f38 + 0x88) + 0x210);
  lVar2 = FUN_141796df0(local_28);
  if (lVar2 != 0) {
    lVar3 = UAsyncTaskDownloadImage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140c15f3c;
  }
  lVar2 = 0;
LAB_140c15f3c:
  if (local_20 != 0) {
    FMemory::Free();
  }
  return lVar2;
}



// FUNCTION 140c15f60 FUN_140c15f60 body=242 status=ok
// SIG undefined FUN_140c15f60(void)

longlong * FUN_140c15f60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_142f5f430();
  uVar2 = FUN_141437870();
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  uVar2 = AGBlizzard::GetPrivateStaticClass();
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  uVar2 = AGBlizzard::GetPrivateStaticClass();
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  uVar2 = AGBlizzard::GetPrivateStaticClass();
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  uVar2 = USpinBox::GetPrivateStaticClass();
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return param_2;
}



// FUNCTION 140c16060 FUN_140c16060 body=407 status=ok
// SIG undefined FUN_140c16060(void)

longlong FUN_140c16060(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x458;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x460)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x468) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x460) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_14147d9d0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x460)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x468) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x460) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar4 = FUN_14147d9d0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 140c16200 FUN_140c16200 body=544 status=ok
// SIG undefined FUN_140c16200(void)

undefined8 * FUN_140c16200(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined2 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  uVar5 = APlayArea::GetPrivateStaticClass();
  lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
  if (lVar6 == 0) {
    local_res10 = *(undefined8 *)(param_2[2] + 0x18);
    FName::ToString(&local_res10,param_1);
    return param_1;
  }
  local_res10 = 0;
  if (param_2[0x90] != 0) {
    local_res10 = *(undefined8 *)(param_2[0x90] + 0x38);
  }
  if ((*(longlong *)(lVar6 + 0x210) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x210) + 0xb8), lVar1 == 0)) {
    puVar11 = (undefined2 *)&DAT_14431ab34;
  }
  else if (*(int *)(lVar1 + 0x60) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = *(undefined2 **)(lVar1 + 0x58);
  }
  uVar3 = (**(code **)(*param_2 + 0x858))(param_2);
  uVar5 = FUN_14309b5c0(param_2,uVar3);
  puVar7 = (undefined8 *)FUN_140c12c50(local_48,uVar5);
  if (*(int *)(puVar7 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar7;
  }
  puVar7 = (undefined8 *)FName::ToString(&local_res10,local_58);
  if (*(int *)(puVar7 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar7;
  }
  if (*(longlong *)(lVar6 + 0x218) == 0) {
    local_78 = (undefined2 *)0x0;
    local_70 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,&DAT_143f3edc8,10);
  }
  else {
    local_res18[0] = *(undefined8 *)(*(longlong *)(lVar6 + 0x218) + 0x18);
    FName::ToString(local_res18,&local_78);
  }
  puVar8 = &DAT_143f3eda8;
  if ((int)local_70 != 0) {
    puVar8 = local_78;
  }
  uVar4 = FSceneViewport::GetMouseY(lVar6);
  FString::PrintfImpl(&local_68,L"%s.%s.%s.%s.%d",puVar8,puVar9,puVar10,puVar11,uVar4);
  uVar5 = local_68;
  uVar4 = (undefined4)local_60;
  uVar2 = local_60._4_4_;
  local_68 = 0;
  local_60 = 0;
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  *param_1 = uVar5;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  return param_1;
}



// FUNCTION 140c16420 FUN_140c16420 body=577 status=ok
// SIG undefined FUN_140c16420(void)

longlong FUN_140c16420(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_38;
  int local_30;
  longlong *local_28;
  int local_20;
  
  puVar2 = (undefined8 *)FUN_140c133b0();
  lVar3 = FUN_14218c3f0(L"PlayerMovement",*puVar2);
  if (*(longlong *)(lVar3 + 0x70) != 0) {
    return lVar3;
  }
  plVar4 = (longlong *)operator_new(0x58);
  plVar6 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = lVar3;
    *(longlong **)(lVar3 + 0x70) = plVar4;
    FUN_14217bd20(plVar4 + 1);
    FUN_14217bd20(plVar4 + 2);
    FUN_14217bd20(plVar4 + 3);
    FUN_14217bd20(plVar4 + 4);
    FUN_14217bd20(plVar4 + 5);
    FUN_14217bd20(plVar4 + 6);
    FUN_14217bd20(plVar4 + 7);
    FUN_14217bd20(plVar4 + 8);
    FUN_14217bd20(plVar4 + 9);
    FUN_14217bd20(plVar4 + 10);
    plVar6 = plVar4;
  }
  puVar2 = (undefined8 *)FUN_140c133b0();
  uVar1 = *puVar2;
  local_28 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)IDelegateInstance::vftable;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar4[2] = (longlong)&LAB_140c16b70;
    plVar4[1] = (longlong)plVar6;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
  }
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)IDelegateInstance::vftable;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140c168d0;
    plVar4[1] = (longlong)plVar6;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  FUN_1421872f0(L"PlayerMovement",uVar1,&local_38,&local_28);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_140c16607;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_140c16607:
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return lVar3;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return lVar3;
}



// FUNCTION 140c16670 FUN_140c16670 body=595 status=ok
// SIG undefined FUN_140c16670(void)

longlong FUN_140c16670(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_38;
  int local_30;
  longlong *local_28;
  int local_20;
  
  puVar2 = (undefined8 *)FUN_140c13440();
  lVar3 = FUN_14218c3f0(L"VendingInteraction",*puVar2);
  if (*(longlong *)(lVar3 + 0x70) != 0) {
    return lVar3;
  }
  plVar4 = (longlong *)operator_new(0x68);
  plVar6 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = lVar3;
    *(longlong **)(lVar3 + 0x70) = plVar4;
    FUN_14217bd20(plVar4 + 1);
    FUN_14217bd20(plVar4 + 2);
    FUN_14217bd20(plVar4 + 3);
    FUN_14217bd20(plVar4 + 4);
    FUN_14217bd20(plVar4 + 5);
    FUN_14217bd20(plVar4 + 6);
    FUN_14217bd20(plVar4 + 7);
    FUN_14217bd20(plVar4 + 8);
    FUN_14217bd20(plVar4 + 9);
    FUN_14217bd20(plVar4 + 10);
    FUN_14217bd20(plVar4 + 0xb);
    FUN_14217bd20(plVar4 + 0xc);
    plVar6 = plVar4;
  }
  puVar2 = (undefined8 *)FUN_140c13440();
  uVar1 = *puVar2;
  local_28 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)IDelegateInstance::vftable;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar4[2] = (longlong)&LAB_140c16b80;
    plVar4[1] = (longlong)plVar6;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
  }
  local_38 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)IDelegateInstance::vftable;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140c16a00;
    plVar4[1] = (longlong)plVar6;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  FUN_1421872f0(L"VendingInteraction",uVar1,&local_38,&local_28);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_140c16869;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_140c16869:
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return lVar3;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return lVar3;
}



// FUNCTION 140c168d0 FUN_140c168d0 body=300 status=ok
// SIG undefined FUN_140c168d0(void)

void FUN_140c168d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"player_id");
  param_1[1] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"player_character_guid");
  param_1[2] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"is_sprinting");
  param_1[3] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"is_ads");
  param_1[4] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"is_in_vehicle");
  param_1[5] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"start_slide");
  param_1[6] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"start_jump");
  param_1[7] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"start_ground_pound");
  param_1[8] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"start_crouch");
  param_1[9] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"start_mantle");
  param_1[10] = *puVar1;
  FUN_140c1f000(param_1);
  FUN_142195000(*param_1);
  return;
}



// FUNCTION 140c16a00 FUN_140c16a00 body=354 status=ok
// SIG undefined FUN_140c16a00(void)

void FUN_140c16a00(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"player_id");
  param_1[1] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"player_character_guid");
  param_1[2] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"vending_machine_id");
  param_1[3] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"location");
  param_1[4] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"interaction");
  param_1[5] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"sell_interaction");
  param_1[6] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"buy_interaction");
  param_1[7] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"buyback_interaction");
  param_1[8] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"sell_cash");
  param_1[9] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"buy_cash");
  param_1[10] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"buy_eridium");
  param_1[0xb] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"buyback_cash");
  param_1[0xc] = *puVar1;
  FUN_140c1f230(param_1);
  FUN_142195000(*param_1);
  return;
}



// FUNCTION 140c16b90 FUN_140c16b90 body=2315 status=ok
// SIG undefined FUN_140c16b90(void)

void FUN_140c16b90(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 local_res18;
  ulonglong in_stack_fffffffffffffe88;
  longlong *local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined4 local_130;
  longlong local_128;
  int local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  FUN_142d845f0();
  plVar8 = (longlong *)0x0;
  local_140 = 0xe;
  local_148 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
  FGenericPlatformString::Memcpy(local_148,L"travelstation",0x1c);
  uVar3 = FString::FString(&local_168,param_1 + 0x8b);
  UGameplayStatics::ParseOption(&local_128,uVar3,&local_148);
  if (local_148 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)*param_2;
  local_158 = (longlong *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  local_150 = DAT_1468b5d98;
  local_138 = DAT_1468b5da0;
  local_130 = DAT_1468b5da8;
  plVar10 = plVar8;
  if (plVar5 == (longlong *)0x0) {
LAB_140c16ce4:
    bVar1 = true;
  }
  else {
    lVar4 = FUN_14145f370();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c16ce4;
    if (((*(uint *)((longlong)plVar5 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar2 = (**(code **)(*plVar5 + 0x768))(plVar5), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    plVar10 = plVar5;
    if ((bVar1) && (cVar2 = APlayerController::IsPrimaryPlayer(plVar5), cVar2 != '\0'))
    goto LAB_140c16ce4;
    bVar1 = false;
  }
  local_res18 = 0;
  if (*(longlong **)(*param_2 + 0x488) == (longlong *)0x0) goto LAB_140c1741a;
  plVar5 = plVar8;
  if (param_1[0x97] != 0) {
    plVar5 = *(longlong **)(param_1[0x97] + 0x5a0);
  }
  local_168 = plVar5;
  lVar4 = (**(code **)(**(longlong **)(*param_2 + 0x488) + 0x690))();
  bVar13 = lVar4 != 0;
  plVar9 = plVar8;
  plVar11 = plVar8;
  plVar12 = plVar8;
  if ((plVar5 == (longlong *)0x0) || (local_120 < 2)) {
LAB_140c16f25:
    if (!bVar1) {
      lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x488) + 0x168);
      if (lVar4 == 0) {
        local_168 = (longlong *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        local_160 = DAT_1468b5d98;
      }
      else {
        local_168 = *(longlong **)(lVar4 + 0x220);
        local_160 = *(undefined4 *)(lVar4 + 0x228);
      }
      local_150 = local_160;
      local_158 = local_168;
      if (plVar5 != (longlong *)0x0) {
        uVar3 = (**(code **)(*param_1 + 0x148))();
        plVar5 = (longlong *)FUN_142f3fe10(plVar5,uVar3,&local_158,0);
        if (plVar5 != (longlong *)0x0) {
          puVar6 = (undefined8 *)
                   (**(code **)(*plVar5 + 0x8f8))
                             (plVar5,&local_168,plVar10,0,
                              in_stack_fffffffffffffe88 & 0xffffffffffffff00);
          plVar12 = (longlong *)*puVar6;
          plVar9 = (longlong *)puVar6[1];
          FWeakObjectPtr::operator=(*param_2 + 0x468,plVar5[0x23]);
          local_res18 = 1;
          if (((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) &&
             ((plVar8 == (longlong *)0x0 || (plVar11 == (longlong *)0x0)))) {
            puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x900))(plVar5,local_b8);
            plVar8 = (longlong *)*puVar6;
            plVar11 = (longlong *)puVar6[1];
          }
        }
      }
    }
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x148))();
    plVar5 = (longlong *)FUN_142f40590(plVar5,uVar3,&local_128);
    if (plVar5 == (longlong *)0x0) {
LAB_140c16de1:
      uVar3 = (**(code **)(*param_1 + 0x148))();
      plVar5 = (longlong *)FUN_142f40750(local_168,uVar3,&local_128);
      if (plVar5 != (longlong *)0x0) {
        if (plVar10 != (longlong *)0x0) {
          FUN_140d03fd0(plVar10,plVar5);
        }
        in_stack_fffffffffffffe88 = CONCAT71((int7)(in_stack_fffffffffffffe88 >> 8),bVar13);
        puVar6 = (undefined8 *)
                 (**(code **)(*plVar5 + 0x8f8))
                           (plVar5,local_f8,*param_2,0,in_stack_fffffffffffffe88);
        plVar12 = (longlong *)*puVar6;
        plVar9 = (longlong *)puVar6[1];
        if (((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) &&
           ((plVar8 == (longlong *)0x0 || (plVar11 == (longlong *)0x0)))) {
          puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x900))(plVar5,local_e8);
          plVar8 = (longlong *)*puVar6;
          plVar11 = (longlong *)puVar6[1];
        }
      }
    }
    else {
      if (plVar10 != (longlong *)0x0) {
        FUN_140d03fd0(plVar10,plVar5);
      }
      in_stack_fffffffffffffe88 = CONCAT71((int7)(in_stack_fffffffffffffe88 >> 8),bVar13);
      puVar6 = (undefined8 *)
               (**(code **)(*plVar5 + 0x8f8))(plVar5,local_118,*param_2,0,in_stack_fffffffffffffe88)
      ;
      local_res18 = 1;
      plVar12 = (longlong *)*puVar6;
      plVar9 = (longlong *)puVar6[1];
      if ((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x900))(plVar5,local_108);
        plVar8 = (longlong *)*plVar5;
        plVar11 = (longlong *)plVar5[1];
      }
      if ((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) goto LAB_140c16de1;
    }
    if ((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) {
      uVar3 = (**(code **)(*param_1 + 0x148))();
      plVar5 = (longlong *)FUN_142f40830(local_168,uVar3,&local_128);
      if (plVar5 != (longlong *)0x0) {
        if (plVar10 != (longlong *)0x0) {
          FUN_140d03fd0(plVar10,plVar5);
        }
        in_stack_fffffffffffffe88 = CONCAT71((int7)(in_stack_fffffffffffffe88 >> 8),bVar13);
        puVar6 = (undefined8 *)
                 (**(code **)(*plVar5 + 0x8f8))
                           (plVar5,local_d8,*param_2,0,in_stack_fffffffffffffe88);
        local_res18 = 1;
        plVar12 = (longlong *)*puVar6;
        plVar9 = (longlong *)puVar6[1];
        if (((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) &&
           ((plVar8 == (longlong *)0x0 || (plVar11 == (longlong *)0x0)))) {
          puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x900))(plVar5,local_c8);
          plVar8 = (longlong *)*puVar6;
          plVar11 = (longlong *)puVar6[1];
        }
      }
    }
    plVar5 = local_168;
    if ((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) goto LAB_140c16f25;
  }
  if (((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) &&
     (cVar2 = FUN_140bf9690(0,*param_2 + 0x468), cVar2 != '\0')) {
    plVar5 = (longlong *)FWeakObjectPtr::Get(*param_2 + 0x468);
    uVar3 = UUGButton::GetPrivateStaticClass();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x628))(plVar5,uVar3);
    if (plVar5 != (longlong *)0x0) {
      if (plVar10 != (longlong *)0x0) {
        FUN_140d03fd0(plVar10,plVar5);
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x8f8))(plVar5,local_a8,*param_2,0,bVar13);
      local_res18 = 1;
      plVar12 = (longlong *)*puVar6;
      plVar9 = (longlong *)puVar6[1];
      if (((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) &&
         ((plVar8 == (longlong *)0x0 || (plVar11 == (longlong *)0x0)))) {
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x900))(plVar5,local_98);
        plVar8 = (longlong *)*puVar6;
        plVar11 = (longlong *)puVar6[1];
      }
    }
  }
  if (((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) &&
     (cVar2 = FUN_140bf9690(0,*param_2 + 0x468), cVar2 != '\0')) {
    plVar5 = (longlong *)FWeakObjectPtr::Get(*param_2 + 0x468);
    uVar3 = UUGHitTextureButton::GetPrivateStaticClass();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x628))(plVar5,uVar3);
    if (plVar5 != (longlong *)0x0) {
      if (plVar10 != (longlong *)0x0) {
        FUN_140d03fd0(plVar10,plVar5);
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x8f8))(plVar5,local_88,*param_2,0,bVar13);
      plVar12 = (longlong *)*puVar6;
      plVar9 = (longlong *)puVar6[1];
      if (((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) &&
         ((plVar8 == (longlong *)0x0 || (plVar11 == (longlong *)0x0)))) {
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x900))(plVar5,local_78);
        plVar8 = (longlong *)*puVar6;
        plVar11 = (longlong *)puVar6[1];
      }
    }
  }
  if (((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) &&
     (cVar2 = FUN_140bf9690(0,*param_2 + 0x468), cVar2 != '\0')) {
    plVar5 = (longlong *)FWeakObjectPtr::Get(*param_2 + 0x468);
    uVar3 = AArchVisCharacter::StaticClass();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x628))(plVar5,uVar3);
    if (plVar5 != (longlong *)0x0) {
      if (plVar10 != (longlong *)0x0) {
        FUN_140d03fd0(plVar10,plVar5);
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x8f8))(plVar5,local_68,*param_2,0,bVar13);
      local_res18 = 1;
      plVar12 = (longlong *)*puVar6;
      plVar9 = (longlong *)puVar6[1];
      if (((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) &&
         ((plVar8 == (longlong *)0x0 || (plVar11 == (longlong *)0x0)))) {
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x900))(plVar5,local_58);
        plVar8 = (longlong *)*puVar6;
        plVar11 = (longlong *)puVar6[1];
      }
    }
  }
  if (((plVar12 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) &&
     ((plVar8 != (longlong *)0x0 && (plVar11 != (longlong *)0x0)))) {
    plVar9 = plVar11;
    plVar12 = plVar8;
  }
  if ((plVar12 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    cVar2 = FUN_140c14ca0(param_1,plVar10,&local_128,&local_158,&local_138);
    if (cVar2 == '\0') {
      puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x20))(plVar9,&local_148);
      local_158 = (longlong *)*puVar6;
      local_150 = *(undefined4 *)(puVar6 + 1);
      puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x28))(plVar9,&local_148);
      local_138 = (longlong *)*puVar6;
      local_130 = *(undefined4 *)(puVar6 + 1);
    }
    if (plVar10 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = plVar10[0x132];
    }
    if (lVar4 != 0) {
      *(longlong **)(lVar4 + 0x1128) = plVar12;
      *(longlong **)(lVar4 + 0x1130) = plVar9;
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,*(undefined8 *)(*param_2 + 0x488));
    if (plVar10 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar10 + 0x678))(plVar10);
      if (lVar4 != 0) {
        lVar7 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (bVar13) {
          local_160 = local_130;
          local_140 = CONCAT44(local_140._4_4_,local_150);
          local_168 = local_138;
          local_148 = local_158;
          FUN_1413f8c70(lVar4,&local_148,&local_168,0,local_res18);
        }
      }
      cVar2 = (**(code **)(*plVar10 + 0x768))(plVar10);
      if (cVar2 == '\0') {
        FUN_14145e910(plVar10,1);
      }
    }
  }
LAB_140c1741a:
  if (((bVar1) && (*param_2 != 0)) && (cVar2 = FUN_140bf9690(0,*param_2 + 0x468), cVar2 != '\0')) {
    uVar3 = FWeakObjectPtr::Get(*param_2 + 0x468);
    FUN_140c04950(param_1,*param_2,uVar3);
  }
  if ((plVar10 != (longlong *)0x0) && (plVar10[0x14b] != 0)) {
    FUN_142d7f490(*param_2,L"player_travel");
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c174a0 FUN_140c174a0 body=92 status=ok
// SIG undefined FUN_140c174a0(void)

void FUN_140c174a0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  FUN_142453560();
  if (param_2 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140d04f80(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140c17500 FUN_140c17500 body=159 status=ok
// SIG undefined FUN_140c17500(void)

void FUN_140c17500(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong local_res10;
  undefined8 local_res18 [2];
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x128) != '\x03') {
    return;
  }
  if (param_4 == '\0') {
    puVar3 = param_1 + 7;
  }
  else {
    if (param_4 != '\x01') {
      if (param_4 == '\x02') {
        puVar3 = param_1 + 8;
        goto LAB_140c17552;
      }
      if (param_4 != '\x03') {
        return;
      }
    }
    puVar3 = param_1 + 6;
  }
LAB_140c17552:
  uVar2 = *param_1;
  local_res10 = param_2;
  local_res18[0] = param_3;
  cVar1 = FUN_14218fd10(uVar2,puVar3);
  if (cVar1 != '\0') {
    uVar2 = FUN_140bf9f90(uVar2,&local_res10,local_res18);
    cVar1 = FUN_1407ce070(uVar2);
    if (cVar1 != '\0') {
      FUN_142182fa0(uVar2,puVar3);
    }
  }
  return;
}



// FUNCTION 140c175a0 FUN_140c175a0 body=1071 status=ok
// SIG undefined FUN_140c175a0(void)

void FUN_140c175a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  FUN_142d62f80();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  plVar6 = (longlong *)0x0;
  uVar3 = UParticleLODLevel::GetPrivateStaticClass();
  uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_1414b9df0();
  uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_141484e60();
  uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_141495ad0();
  uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_1414c6570();
  uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = UNamedInterfaces::GetPrivateStaticClass();
  uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_1414a0ac0();
  uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_141415030();
  uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_1414377d0();
  uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
  uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_1413c3ad0();
  uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = FUN_14141f3d0();
  uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1412714a0();
  }
  lVar4 = operator_new(0x40);
  plVar5 = plVar6;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_1408e1bb0(lVar4,param_1);
  }
  *(longlong **)(param_1 + 0xa0) = plVar5;
  lVar4 = operator_new(0x630);
  plVar5 = plVar6;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_140d20d60(lVar4);
  }
  *(longlong **)(param_1 + 0xa8) = plVar5;
  (**(code **)(*plVar5 + 0x30))(plVar5,param_2);
  lVar4 = DAT_146856338;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    plVar5 = (longlong *)&DAT_00000004;
    if (DVar2 != DAT_1468c21c0) goto LAB_140c17994;
  }
  plVar5 = plVar6;
LAB_140c17994:
  if (*(int *)((longlong)plVar5 + lVar4) != 0) {
    lVar4 = operator_new(0x20);
    if (lVar4 != 0) {
      plVar6 = (longlong *)FUN_140b4c2c0(lVar4);
    }
    *(longlong **)(param_1 + 0xb8) = plVar6;
  }
  return;
}



// FUNCTION 140c179d0 FUN_140c179d0 body=125 status=ok
// SIG undefined FUN_140c179d0(void)

void FUN_140c179d0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142454390();
  lVar4 = *(longlong *)(param_1 + 0x4b0);
  if (lVar4 != 0) {
    lVar3 = FUN_141424bc0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140c17a26;
  }
  lVar4 = 0;
LAB_140c17a26:
  *(longlong *)(param_1 + 0x548) = lVar4;
  iVar2 = FUN_142235230(param_1);
  if (iVar2 != 2) {
    FUN_142235230(param_1);
  }
  return;
}



// FUNCTION 140c17a50 FUN_140c17a50 body=106 status=ok
// SIG undefined FUN_140c17a50(void)

void FUN_140c17a50(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142454390();
  lVar2 = FUN_1422312c0(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_140bb7870(lVar2);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x50) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140c17ac0 FUN_140c17ac0 body=2173 status=ok
// SIG undefined FUN_140c17ac0(void)

void FUN_140c17ac0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong local_48;
  int local_40;
  undefined1 local_38 [48];
  
  FUN_142454860();
  lVar1 = param_1[0x97];
  if (lVar1 == 0) {
    return;
  }
  if (DAT_14685c0c0 == '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar7 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar7 != 0) {
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetPlayerControllerIterator(uVar4,&local_48);
      do {
        if ((local_40 < 0) || (*(int *)(local_48 + 8) <= local_40)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) break;
        plVar5 = (longlong *)FWeakObjectPtr::Get();
        if (plVar5 != (longlong *)0x0) {
          lVar6 = FUN_14145f370();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && (cVar3 = APlayerController::IsPrimaryPlayer(), cVar3 != '\0')) &&
             (cVar3 = (**(code **)(*plVar5 + 0x768))(), cVar3 != '\0')) goto LAB_140c17bdf;
        }
        local_40 = local_40 + 1;
      } while( true );
    }
  }
LAB_140c17bf5:
  lVar7 = FUN_1422312c0(param_1);
  if (lVar7 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140bd4b60(lVar7,lVar1);
    }
  }
  if ((*(longlong **)(lVar1 + 0x598) != (longlong *)0x0) &&
     (lVar7 = (**(code **)(**(longlong **)(lVar1 + 0x598) + 0x6e8))(), lVar7 == 0)) {
    FUN_142227350(*(undefined8 *)(lVar1 + 0x598),0,1);
    *(undefined8 *)(lVar1 + 0x598) = 0;
  }
  plVar5 = *(longlong **)(lVar1 + 0x598);
  if (plVar5 == (longlong *)0x0) {
    uVar4 = UWebSocketNetDriver::StaticClass();
    uVar8 = FActorSpawnParameters::FActorSpawnParameters(local_38);
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar5 = (longlong *)UWorld::SpawnActor(uVar9,uVar4,0,0,uVar8);
    *(longlong **)(lVar1 + 0x598) = plVar5;
  }
  (**(code **)(*plVar5 + 0x6f0))();
  if (*(longlong *)(lVar1 + 0x5a0) == 0) {
    uVar4 = FUN_141484230();
    uVar8 = FActorSpawnParameters::FActorSpawnParameters(local_38);
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar4 = UWorld::SpawnActor(uVar9,uVar4,0,0,uVar8);
    *(undefined8 *)(lVar1 + 0x5a0) = uVar4;
  }
  if (*(longlong *)(lVar1 + 0x5b0) == 0) {
    uVar4 = FUN_14143c580();
    uVar8 = FActorSpawnParameters::FActorSpawnParameters(local_38);
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar4 = UWorld::SpawnActor(uVar9,uVar4,0,0,uVar8);
    *(undefined8 *)(lVar1 + 0x5b0) = uVar4;
  }
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_140c05480(uVar4);
  FUN_142f438e0(*(undefined8 *)(lVar1 + 0x5a0));
  plVar5 = (longlong *)FUN_142f40c20();
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)FUN_140c15e90;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar7;
  }
  if (&local_48 == plVar5) {
LAB_140c17de1:
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      lVar7 = FMemory::Realloc(plVar10,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
  }
  else {
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))(plVar10,plVar5);
      goto LAB_140c17de1;
    }
    if (((int)plVar5[1] != 0) && (plVar10 = (longlong *)*plVar5, plVar10 != (longlong *)0x0)) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      if (*plVar5 != 0) {
        lVar7 = FMemory::Realloc(*plVar5,0,0);
        *plVar5 = lVar7;
      }
      *(undefined4 *)(plVar5 + 1) = 0;
    }
  }
  lVar7 = FUN_142f40c20();
  plVar5 = (longlong *)(lVar7 + 0x10);
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_14433a750;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)FUN_140c082f0;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar6;
  }
  if (&local_48 == plVar5) {
LAB_140c17e73:
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      lVar7 = FMemory::Realloc(plVar10,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
  }
  else {
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))(plVar10,plVar5);
      goto LAB_140c17e73;
    }
    if ((*(int *)(lVar7 + 0x18) != 0) && (plVar10 = (longlong *)*plVar5, plVar10 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      if (*plVar5 != 0) {
        lVar6 = FMemory::Realloc(*plVar5,0,0);
        *plVar5 = lVar6;
      }
      *(undefined4 *)(lVar7 + 0x18) = 0;
    }
  }
  lVar7 = FUN_142f40c20();
  plVar5 = (longlong *)(lVar7 + 0x20);
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_14433a750;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)FUN_140c08220;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar6;
  }
  if (&local_48 == plVar5) {
LAB_140c17f05:
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      lVar7 = FMemory::Realloc(plVar10,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
  }
  else {
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))(plVar10,plVar5);
      goto LAB_140c17f05;
    }
    if ((*(int *)(lVar7 + 0x28) != 0) && (plVar10 = (longlong *)*plVar5, plVar10 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      if (*plVar5 != 0) {
        lVar6 = FMemory::Realloc(*plVar5,0,0);
        *plVar5 = lVar6;
      }
      *(undefined4 *)(lVar7 + 0x28) = 0;
    }
  }
  lVar7 = FUN_142f40c20();
  plVar5 = (longlong *)(lVar7 + 0x30);
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_14433a790;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)FUN_140c08740;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar6;
  }
  if (&local_48 == plVar5) {
LAB_140c17f97:
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      lVar7 = FMemory::Realloc(plVar10,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
  }
  else {
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))(plVar10,plVar5);
      goto LAB_140c17f97;
    }
    if ((*(int *)(lVar7 + 0x38) != 0) && (plVar10 = (longlong *)*plVar5, plVar10 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      if (*plVar5 != 0) {
        lVar6 = FMemory::Realloc(*plVar5,0,0);
        *plVar5 = lVar6;
      }
      *(undefined4 *)(lVar7 + 0x38) = 0;
    }
  }
  lVar7 = FUN_142f40c20();
  plVar5 = (longlong *)(lVar7 + 0x40);
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_1441c0108;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)FUN_140c22b50;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar6;
    *plVar10 = (longlong)&PTR_FUN_1441c0150;
  }
  if (&local_48 == plVar5) {
LAB_140c18033:
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      lVar7 = FMemory::Realloc(plVar10,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
  }
  else {
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x30))(plVar10,plVar5);
      goto LAB_140c18033;
    }
    if ((*(int *)(lVar7 + 0x48) != 0) && (plVar10 = (longlong *)*plVar5, plVar10 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      if (*plVar5 != 0) {
        lVar6 = FMemory::Realloc(*plVar5,0,0);
        *plVar5 = lVar6;
      }
      *(undefined4 *)(lVar7 + 0x48) = 0;
    }
  }
  lVar7 = FUN_142f40c20();
  plVar5 = (longlong *)(lVar7 + 0x50);
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar10 + 1,param_1);
    plVar10[2] = (longlong)FUN_140c2ad70;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar10[4] = lVar6;
    *plVar10 = (longlong)&PTR_FUN_143f4d2d8;
  }
  if (&local_48 != plVar5) {
    if (plVar10 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x58) != 0) &&
         (plVar10 = (longlong *)*plVar5, plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        if (*plVar5 != 0) {
          lVar6 = FMemory::Realloc(*plVar5,0,0);
          *plVar5 = lVar6;
        }
        *(undefined4 *)(lVar7 + 0x58) = 0;
      }
      goto LAB_140c180f9;
    }
    (**(code **)(*plVar10 + 0x30))(plVar10,plVar5);
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    lVar7 = FMemory::Realloc(plVar10,0,0);
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
  }
LAB_140c180f9:
  if (*(longlong *)(lVar1 + 0x548) == 0) {
    uVar4 = FUN_142e1f300();
    uVar8 = FActorSpawnParameters::FActorSpawnParameters(local_38);
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar4 = UWorld::SpawnActor(uVar9,uVar4,0,0,uVar8);
    *(undefined8 *)(lVar1 + 0x548) = uVar4;
  }
  if (*(longlong *)(lVar1 + 0x5a8) == 0) {
    uVar4 = FActorSpawnParameters::FActorSpawnParameters(local_38);
    uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar9 = FUN_141308020();
    uVar4 = UWorld::SpawnActor(uVar8,uVar9,0,0,uVar4);
    *(undefined8 *)(lVar1 + 0x5a8) = uVar4;
  }
  FUN_140ccaee0(lVar1);
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar7 = FUN_140e7e6f0(uVar4);
  if (lVar7 != 0) {
    FUN_140e83e60(lVar7);
  }
  FUN_140cc7bc0(lVar1);
  return;
LAB_140c17bdf:
  FUN_140ccce80(lVar1,(int)plVar5[0x38e],*(undefined1 *)(lVar7 + 0x44d));
  goto LAB_140c17bf5;
}



// FUNCTION 140c18340 FUN_140c18340 body=228 status=ok
// SIG undefined FUN_140c18340(void)

void FUN_140c18340(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_38 [48];
  
  FUN_142454860();
  lVar1 = param_1[0x97];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x5b0) == 0) {
      uVar2 = FUN_14143c580();
      uVar3 = FActorSpawnParameters::FActorSpawnParameters(local_38);
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar2 = UWorld::SpawnActor(uVar4,uVar2,0,0,uVar3);
      *(undefined8 *)(lVar1 + 0x5b0) = uVar2;
    }
    plVar5 = *(longlong **)(lVar1 + 0x598);
    if (plVar5 == (longlong *)0x0) {
      uVar2 = FUN_142f76500();
      uVar3 = FActorSpawnParameters::FActorSpawnParameters(local_38);
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar5 = (longlong *)UWorld::SpawnActor(uVar4,uVar2,0,0,uVar3);
      *(longlong **)(lVar1 + 0x598) = plVar5;
    }
    (**(code **)(*plVar5 + 0x6f0))();
  }
  return;
}



// FUNCTION 140c18430 FUN_140c18430 body=125 status=ok
// SIG undefined FUN_140c18430(void)

void FUN_140c18430(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686bcb8) {
    _Init_thread_header(&DAT_14686bcb8);
    if (DAT_14686bcb8 == -1) {
      DAT_14686bcb0 = FUN_140c16420();
      _Init_thread_footer(&DAT_14686bcb8);
    }
  }
  if (local_res8 != param_1) {
    *param_1 = *(undefined8 *)(DAT_14686bcb0 + 0x70);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



// FUNCTION 140c184b0 FUN_140c184b0 body=125 status=ok
// SIG undefined FUN_140c184b0(void)

void FUN_140c184b0(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686bca8) {
    _Init_thread_header(&DAT_14686bca8);
    if (DAT_14686bca8 == -1) {
      DAT_14686bca0 = FUN_140c16670();
      _Init_thread_footer(&DAT_14686bca8);
    }
  }
  if (local_res8 != param_1) {
    *param_1 = *(undefined8 *)(DAT_14686bca0 + 0x70);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



// FUNCTION 140c18530 FUN_140c18530 body=99 status=ok
// SIG undefined FUN_140c18530(void)

void FUN_140c18530(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142454eb0();
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if (lVar1 != 0) {
    lVar3 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140cc7e60(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140c185a0 FUN_140c185a0 body=303 status=ok
// SIG undefined FUN_140c185a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c185a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if ((DAT_14686b198 == '\0') && (puVar2 = (undefined8 *)FUN_140c11e40(), puVar2 != &DAT_14686b158))
  {
    DAT_14686b158 = *puVar2;
    uRam000000014686b160 = puVar2[1];
    _DAT_14686b168 = puVar2[2];
    uRam000000014686b170 = puVar2[3];
    _DAT_14686b178 = *(undefined4 *)(puVar2 + 4);
    uRam000000014686b17c = *(undefined4 *)((longlong)puVar2 + 0x24);
    uRam000000014686b180 = *(undefined4 *)(puVar2 + 5);
    uRam000000014686b184 = *(undefined4 *)((longlong)puVar2 + 0x2c);
    _DAT_14686b188 = puVar2[6];
    uRam000000014686b190 = puVar2[7];
    DAT_14686b198 = '\x01';
  }
  uVar1 = DAT_14686b158;
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_14433a7f0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[2] = lVar4;
  }
  FUN_142184b10(uVar1,local_res8,3,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140c186bb;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140c186bb:
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 140c186d0 FUN_140c186d0 body=93 status=ok
// SIG undefined FUN_140c186d0(void)

void FUN_140c186d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140c122c0();
  if (puVar2 != param_1) {
    if (*(char *)(param_1 + 0xe) != '\0') {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    uVar1 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar1;
    uVar1 = puVar2[3];
    param_1[2] = puVar2[2];
    param_1[3] = uVar1;
    uVar1 = puVar2[5];
    param_1[4] = puVar2[4];
    param_1[5] = uVar1;
    uVar1 = puVar2[7];
    param_1[6] = puVar2[6];
    param_1[7] = uVar1;
    uVar1 = puVar2[9];
    param_1[8] = puVar2[8];
    param_1[9] = uVar1;
    uVar1 = puVar2[0xb];
    param_1[10] = puVar2[10];
    param_1[0xb] = uVar1;
    uVar1 = puVar2[0xd];
    param_1[0xc] = puVar2[0xc];
    param_1[0xd] = uVar1;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return;
}



// FUNCTION 140c18730 FUN_140c18730 body=95 status=ok
// SIG undefined FUN_140c18730(void)

void FUN_140c18730(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140c12410();
  if (puVar2 != param_1) {
    if (*(char *)(param_1 + 0xd) != '\0') {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    uVar1 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar1;
    uVar1 = puVar2[3];
    param_1[2] = puVar2[2];
    param_1[3] = uVar1;
    uVar1 = puVar2[5];
    param_1[4] = puVar2[4];
    param_1[5] = uVar1;
    uVar1 = puVar2[7];
    param_1[6] = puVar2[6];
    param_1[7] = uVar1;
    uVar1 = puVar2[9];
    param_1[8] = puVar2[8];
    param_1[9] = uVar1;
    uVar1 = puVar2[0xb];
    param_1[10] = puVar2[10];
    param_1[0xb] = uVar1;
    param_1[0xc] = puVar2[0xc];
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}



// FUNCTION 140c18790 FUN_140c18790 body=142 status=ok
// SIG undefined FUN_140c18790(void)

void FUN_140c18790(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (DAT_14686b260 == '\0') {
    uVar1 = FUN_140c12040();
    FUN_140bffb10(&DAT_14686b1a0,uVar1);
  }
  FUN_14217b920(param_1,L"lootable_classes",DAT_14686b1a0);
  local_res8[0] = 0;
  if (DAT_14686b260 == '\0') {
    uVar1 = FUN_140c12040();
    FUN_140bffb10(&DAT_14686b1a0,uVar1);
  }
  FUN_14217b9a0(param_1 + 8,L"emit_pickups",DAT_14686b1a0,local_res8);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 140c18820 FUN_140c18820 body=314 status=ok
// SIG undefined FUN_140c18820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c18820(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if ((DAT_14686b150 == '\0') && (puVar2 = (undefined8 *)FUN_140c123a0(), puVar2 != &DAT_14686b100))
  {
    DAT_14686b100 = *puVar2;
    _DAT_14686b108 = puVar2[1];
    _DAT_14686b110 = puVar2[2];
    _DAT_14686b118 = puVar2[3];
    _DAT_14686b120 = puVar2[4];
    _DAT_14686b128 = puVar2[5];
    _DAT_14686b130 = puVar2[6];
    _DAT_14686b138 = puVar2[7];
    _DAT_14686b140 = *(undefined4 *)(puVar2 + 8);
    uRam000000014686b144 = *(undefined4 *)((longlong)puVar2 + 0x44);
    _DAT_14686b148 = *(undefined4 *)(puVar2 + 9);
    uRam000000014686b14c = *(undefined4 *)((longlong)puVar2 + 0x4c);
    DAT_14686b150 = '\x01';
  }
  uVar1 = DAT_14686b100;
  local_18 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_14433a7f0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[2] = lVar4;
  }
  FUN_142184b10(uVar1,local_res8,3,&local_18);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_140c18946;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_140c18946:
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 140c18960 FUN_140c18960 body=175 status=ok
// SIG undefined FUN_140c18960(void)

void FUN_140c18960(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_141437c50();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (*(longlong *)(lVar1 + 0x580) != param_1) {
        *(longlong *)(lVar1 + 0x580) = param_1;
        FUN_140c289b0(lVar1);
      }
      FUN_1430022a0(param_1,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 140c18a10 FUN_140c18a10 body=89 status=ok
// SIG undefined FUN_140c18a10(void)

void FUN_140c18a10(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_140c18a70();
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(byte *)(lVar1 + 0x13fc) = *(byte *)(lVar1 + 0x13fc) & 0xef;
    }
  }
  return;
}



// FUNCTION 140c18a70 FUN_140c18a70 body=1470 status=ok
// SIG undefined FUN_140c18a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c18a70(longlong *param_1,longlong *param_2)

{
  void *_Src;
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 auStack_138 [32];
  uint local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong *local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_e0 = (code *)param_1;
  local_d0 = param_2;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*param_2 == 0) {
    return;
  }
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar7 = (longlong *)FUN_142f6c9f0(uVar6);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x788))(plVar7,*param_2,param_1);
    cVar2 = FUN_142f63b20(param_1 + 0xe0,param_1);
    if (cVar2 != '\0') {
      puVar8 = (undefined8 *)(**(code **)(param_1[0xe0] + 0x18))(param_1 + 0xe0,local_c8);
      uVar6 = FUN_142f5f490(param_1 + 0xe0);
      FUN_142f51690(plVar7,*param_2,*puVar8,uVar6);
    }
  }
  if ((char)param_1[0xe6] != '\0') goto LAB_140c18dd8;
  uVar6 = UBlindWidget::GetPrivateStaticClass();
  lVar9 = AGameStateBase::OnRep_GameModeClass(param_1,uVar6);
  if (lVar9 == 0) goto LAB_140c18dd8;
  lVar10 = UBlindWidget::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
      != lVar10 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) || (*(char *)(lVar9 + 0x1a0) == '\0')) goto LAB_140c18dd8;
  uVar6 = UBlindWidget::GetPrivateStaticClass();
  lVar10 = AGameStateBase::OnRep_GameModeClass(*param_2,uVar6);
  if (lVar10 == 0) {
LAB_140c18c16:
    lVar10 = *param_2;
    FUN_1417846f0(lVar10,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_e8 = 0;
    uVar6 = UBlindWidget::GetPrivateStaticClass();
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    lVar10 = FUN_1417985e0(uVar6,lVar10,0,0);
    puVar8 = (undefined8 *)(lVar10 + 0x188);
    if (puVar8 != (undefined8 *)(lVar9 + 0x188)) {
      iVar5 = *(int *)(lVar9 + 400);
      _Src = *(void **)(lVar9 + 0x188);
      *(int *)(lVar10 + 400) = iVar5;
      if ((iVar5 == 0) && (*(int *)(lVar10 + 0x194) == 0)) {
        *(undefined4 *)(lVar10 + 0x194) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar8,iVar5);
        _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src,(longlong)iVar5 << 3);
      }
    }
    if (lVar10 == 0) goto LAB_140c18dd8;
  }
  else {
    lVar11 = UBlindWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c18c16;
  }
  puVar14 = *(undefined8 **)(lVar9 + 0x188);
  puVar8 = puVar14 + *(int *)(lVar9 + 400);
  for (; puVar14 != puVar8; puVar14 = puVar14 + 1) {
    local_e8 = *puVar14;
    cVar2 = FUN_140bf9840(lVar10 + 0x188,&local_e8);
    if (cVar2 == '\0') {
      return;
    }
  }
  uVar3 = (**(code **)(*(longlong *)(lVar9 + 0x178) + 0x50))(lVar9 + 0x178);
  if (uVar3 < 2) {
    *(undefined4 *)(lVar10 + 0x198) = *(undefined4 *)(lVar9 + 0x198);
  }
  else {
    lVar18 = (longlong)(int)param_2[2];
    uVar4 = (**(code **)(*(longlong *)(lVar9 + 0x178) + 0x50))(lVar9 + 0x178);
    local_e8 = CONCAT44(local_e8._4_4_,uVar4);
    lVar11 = UCableComponent::GetAttachedActor(param_1);
    param_2 = local_d0;
    if (lVar11 != 0) {
      iVar16 = 0;
      lVar15 = 0;
      uVar3 = 1;
      iVar5 = (int)local_e8;
      do {
        param_1 = (longlong *)local_e0;
        param_2 = local_d0;
        if (iVar16 == iVar5) break;
        if ((*(uint *)(lVar9 + 0x198) & uVar3) != 0) {
          if ((lVar18 == -1) || (lVar15 == lVar18)) {
            if (lVar10 != 0) {
              *(uint *)(lVar10 + 0x198) = uVar3;
            }
            lVar12 = FUN_1407cb160(lVar11);
            if ((lVar15 < 0) || (*(int *)(lVar12 + 8) <= iVar16)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((bVar1) &&
               (plVar7 = (longlong *)FUN_1407cb160(lVar11), *(longlong *)(*plVar7 + lVar15 * 8) != 0
               )) {
              UEngine::InitHardwareSurvey();
            }
            param_1 = (longlong *)local_e0;
            param_2 = local_d0;
            if (lVar18 != -1) break;
            iVar5 = (int)local_e8;
          }
          iVar16 = iVar16 + 1;
          lVar15 = lVar15 + 1;
        }
        uVar3 = uVar3 * 2;
        param_1 = (longlong *)local_e0;
        param_2 = local_d0;
      } while (uVar3 != 0);
    }
  }
  *(undefined1 *)(lVar10 + 0x1a0) = 1;
LAB_140c18dd8:
  if ((((char)param_1[0xeb] != '\0') &&
      (lVar9 = UCableComponent::GetAttachedActor(param_1), lVar9 != 0)) &&
     (pcVar13 = (char *)FUN_1407cac10(lVar9), *pcVar13 == '\x02')) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar9 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar9 != 0) {
      iVar5 = (int)param_1[0xf4];
      *(int *)(param_1 + 0xf4) = iVar5 + 1;
      if (*(int *)((longlong)param_1 + 0x7a4) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xf3,iVar5);
      }
      plVar7 = (longlong *)((longlong)iVar5 * 0x10 + param_1[0xf3]);
      *plVar7 = *param_2;
      *(int *)(plVar7 + 1) = *(int *)(lVar9 + 0x4bc) * 0x3c;
      uVar6 = AActor::GetWorldTimerManager(param_1);
      local_e0 = (code *)param_1[0xfd];
      if (local_e0 != (code *)0x0) {
        lVar9 = FTimerManager::FindTimer(uVar6,&local_e0,0);
        if ((lVar9 == 0) || (*(char *)(lVar9 + 1) == '\x02')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return;
        }
      }
      uStack_d8 = 0;
      local_e0 = FUN_140c0a000;
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_e0;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_e0._4_4_;
        *(undefined4 *)(plVar7 + 3) = uStack_d8;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_d4;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar9;
        *plVar7 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_b8 = 0;
      local_b0 = 0;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_b8);
      }
      FWeakObjectPtr::operator=(local_a8,0);
      local_110 = CONCAT44(local_110._4_4_,0xbf800000);
      local_118 = local_118 & 0xffffff00;
      local_a0 = 0;
      local_68 = (longlong *)0x0;
      local_58 = 0;
      local_98 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,param_1 + 0xfd,&local_b8,0x41200000);
      if (local_58 != 0) {
        plVar17 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar17 = local_68;
        }
        if (plVar17 != (longlong *)0x0) {
          (**(code **)(*plVar17 + 0x10))(plVar17,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        lVar9 = FMemory::Realloc(plVar7,0,0);
        if (lVar9 != 0) {
          FMemory::Free(lVar9);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c19030 FUN_140c19030 body=196 status=ok
// SIG undefined FUN_140c19030(void)

void FUN_140c19030(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x140);
  if (lVar4 != 0) {
    uVar3 = FUN_142f5f490(param_1 + 8);
    uVar1 = FUN_142f5cdc0(uVar3,lVar4);
    iVar2 = FUN_142f5de00(param_2,param_1 + 8,uVar1,param_1 + -0x458);
    if (iVar2 == 1) {
      if (*(char *)(param_1 + 0xf0) != '\0') {
        FUN_140b40080(*(undefined8 *)(param_1 + 0x140),0);
      }
      plVar5 = *(longlong **)(param_1 + 0x140);
      uVar3 = 1;
      lVar4 = *plVar5;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x140);
      lVar4 = *plVar5;
      if (iVar2 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000140c190d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x6d0))(plVar5,0);
        return;
      }
      uVar3 = 0;
    }
    (**(code **)(lVar4 + 0x840))(plVar5,uVar3);
  }
  return;
}



// FUNCTION 140c19100 FUN_140c19100 body=53 status=ok
// SIG undefined FUN_140c19100(void)

void FUN_140c19100(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + -0x658);
  (**(code **)(*plVar1 + 0x718))(plVar1);
  FUN_140c0ad40(plVar1,param_2);
  return;
}



// FUNCTION 140c19140 FUN_140c19140 body=1010 status=ok
// SIG undefined FUN_140c19140(void)

void FUN_140c19140(longlong *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138 [2];
  longlong *local_128;
  longlong *local_120;
  code *local_118;
  longlong **pplStack_110;
  longlong *local_108;
  longlong *local_100;
  code *local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong *local_e0;
  code *local_d8;
  longlong **pplStack_d0;
  code *local_c8;
  longlong **pplStack_c0;
  longlong local_b8 [2];
  longlong *local_a8;
  longlong *local_a0;
  longlong **local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x128) == '\x03') {
    return;
  }
  uVar13 = 0;
  FUN_140c136e0(&local_148,0);
  if (local_148 == 0) goto LAB_140c1937e;
  lVar6 = FUN_142f5c680(param_2,param_3);
  if (lVar6 == 0) goto LAB_140c1937e;
  *(undefined1 *)(param_1 + 0xc) = 1;
  if (param_3 == (longlong *)0x0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_3[0x1f];
    if (lVar14 == 0) {
      (**(code **)(*param_3 + 0x368))(param_3);
      lVar14 = param_3[0x1f];
    }
  }
  FUN_142f59860(lVar14,local_b8);
  bVar2 = *(byte *)(lVar6 + 0x10);
  if (bVar2 == 0) {
LAB_140c19226:
    puVar15 = *(undefined8 **)(lVar14 + 0x230);
    local_158 = (longlong *)0x0;
    local_150 = 0;
    uVar11 = (longlong)*(int *)(lVar14 + 0x238) & 0x1fffffffffffffff;
    if (puVar15 + *(int *)(lVar14 + 0x238) < puVar15) {
      uVar11 = uVar13;
    }
    if (uVar11 != 0) {
      do {
        plVar7 = (longlong *)FUN_142f59bd0(*puVar15,local_58,lVar14);
        uVar5 = local_150;
        lVar6 = (longlong)(int)local_150;
        iVar9 = (int)local_150 + 1;
        local_150 = CONCAT44(local_150._4_4_,iVar9);
        if (local_150._4_4_ < iVar9) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_158,uVar5 & 0xffffffff);
        }
        plVar10 = local_158 + lVar6 * 2;
        *plVar10 = 0;
        *plVar10 = *plVar7;
        *plVar7 = 0;
        *(int *)(plVar10 + 1) = (int)plVar7[1];
        *(undefined4 *)((longlong)plVar10 + 0xc) = *(undefined4 *)((longlong)plVar7 + 0xc);
        plVar7[1] = 0;
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        puVar15 = puVar15 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar11);
    }
    local_a8 = &local_148;
    local_a0 = local_b8;
    local_98 = &local_158;
    pplStack_c0 = &local_a8;
    local_c8 = FUN_140c07ff0;
    local_48 = 0x40c07ff0;
    uStack_44 = 1;
    uStack_40 = pplStack_c0;
    FUN_140c10c60(param_1 + -5,&local_48);
    plVar7 = local_158;
    for (iVar9 = (int)local_150; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free(local_158);
    }
  }
  else if (bVar2 == 1) {
    (**(code **)(*param_1 + 0x10))(param_1,param_3,3);
    bVar4 = false;
    plVar7 = *(longlong **)(lVar14 + 0x230);
    uVar11 = (longlong)*(int *)(lVar14 + 0x238) & 0x1fffffffffffffff;
    if (plVar7 + *(int *)(lVar14 + 0x238) < plVar7) {
      uVar11 = uVar13;
    }
    if (uVar11 != 0) {
      do {
        lVar3 = *plVar7;
        FUN_142f59bd0(lVar3,local_138,lVar14);
        if (bVar4) {
          local_128 = &local_148;
          local_120 = local_138;
          pplStack_110 = &local_128;
          local_118 = FUN_140c07f60;
          local_88 = 0x40c07f60;
          uStack_84 = 1;
          puVar12 = &local_88;
          uStack_80 = pplStack_110;
        }
        else {
          plVar8 = *(longlong **)(lVar3 + 0x28);
          plVar10 = plVar8 + *(int *)(lVar3 + 0x30);
          if (plVar8 != plVar10) {
            do {
              if (*plVar8 == *(longlong *)(lVar6 + 0x28)) {
                local_108 = &local_148;
                bVar4 = true;
                local_100 = local_138;
                local_f8 = FUN_140c07f30;
                local_78 = 0x40c07f30;
                uStack_74 = 1;
                uStack_f0._0_4_ = SUB84(&local_108,0);
                uStack_70 = (undefined4)uStack_f0;
                uStack_f0._4_4_ = (undefined4)((ulonglong)&local_108 >> 0x20);
                uStack_6c = uStack_f0._4_4_;
                puVar12 = &local_78;
                uStack_f0 = &local_108;
                goto LAB_140c194c8;
              }
              plVar8 = plVar8 + 1;
            } while (plVar8 != plVar10);
          }
          local_e8 = &local_148;
          local_e0 = local_138;
          pplStack_d0 = &local_e8;
          local_d8 = FUN_140c07f00;
          local_68 = 0x40c07f00;
          uStack_64 = 1;
          puVar12 = &local_68;
          uStack_60 = pplStack_d0;
        }
LAB_140c194c8:
        FUN_140c10c60(param_1 + -5,puVar12);
        if (local_138[0] != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar11);
    }
  }
  else {
    uStack_40 = (longlong **)CONCAT44(uStack_40._4_4_,(undefined4)uStack_40);
    uStack_80 = (longlong **)CONCAT44(uStack_80._4_4_,(undefined4)uStack_80);
    uStack_60 = (longlong **)CONCAT44(uStack_60._4_4_,(undefined4)uStack_60);
    if ((1 < bVar2) &&
       (uStack_40 = (longlong **)CONCAT44(uStack_40._4_4_,(undefined4)uStack_40),
       uStack_80 = (longlong **)CONCAT44(uStack_80._4_4_,(undefined4)uStack_80),
       uStack_60 = (longlong **)CONCAT44(uStack_60._4_4_,(undefined4)uStack_60), bVar2 < 5))
    goto LAB_140c19226;
  }
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
LAB_140c1937e:
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_140 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  return;
}



// FUNCTION 140c19540 FUN_140c19540 body=95 status=ok
// SIG undefined FUN_140c19540(void)

void FUN_140c19540(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140c1b030();
  if (lVar1 != 0) {
    if ((*(char *)(lVar1 + 0x4a8) != '\0') && (*(char *)(param_2 + 0x10) != '\0')) {
      TArray<TSubclassOf<UUGGearCampaignKey>,FDefaultAllocator>::Remove(param_1 + 0x6d0,param_2 + 8)
      ;
    }
    FUN_142f612f0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 140c195a0 FUN_140c195a0 body=54 status=ok
// SIG undefined FUN_140c195a0(void)

void FUN_140c195a0(longlong param_1)

{
  if (*(char *)(param_1 + 0x491) == '\0') {
    if (DAT_146af4bf0 != 0) {
      FUN_140c7f180();
    }
    FUN_142f617e0(param_1);
    return;
  }
  return;
}



// FUNCTION 140c195e0 FUN_140c195e0 body=935 status=ok
// SIG undefined FUN_140c195e0(void)

void FUN_140c195e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = param_1[0x8b];
  if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140c198f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6d0))(param_1,0);
    return;
  }
  lVar4 = 0;
  if ((*(byte *)(lVar2 + 0x30) & 2) == 0) {
    lVar4 = *(longlong *)(lVar2 + 0x58);
  }
  else if (*(int *)(lVar2 + 0x68) != 0) {
    iVar1 = rand();
    lVar4 = *(longlong *)
             (*(longlong *)(param_1[0x8b] + 0x60) +
             (longlong)(iVar1 % *(int *)(param_1[0x8b] + 0x68)) * 8);
  }
  if (lVar4 == 0) {
    FUN_142398ec0(param_1[0x8c],0,1);
  }
  else {
    lVar2 = UMaterialInstanceDynamic::Create(lVar4,param_1);
    param_1[0x8d] = lVar2;
    FUN_1423516b0(param_1[0x8c],lVar2);
  }
  lVar2 = param_1[0x8b];
  if (((*(byte *)(lVar2 + 0x30) & 1) != 0) && (*(longlong *)(lVar2 + 0x50) != 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14686bc08) {
      _Init_thread_header(&DAT_14686bc08);
      if (DAT_14686bc08 == -1) {
        FName::FName(&DAT_14686bc00,L"GroundingDecal",1);
        _Init_thread_footer(&DAT_14686bc08);
      }
    }
    lVar2 = UMaterialInstanceDynamic::Create(*(undefined8 *)(param_1[0x8b] + 0x50),param_1);
    param_1[0x8f] = lVar2;
    lVar2 = DAT_14686bc00;
    if (DAT_14686bc00 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar3 = FUN_142923000();
    lVar2 = FUN_1417985e0(uVar3,param_1,lVar2,0,0,0,0,0,0);
    param_1[0x8e] = lVar2;
    FUN_142397000(lVar2,0,0,1);
    FUN_142399e30(param_1[0x8e],param_1[0x2d],0);
    FUN_1423516b0(param_1[0x8e],param_1[0x8f]);
    lVar2 = param_1[0x8e];
    *(undefined8 *)(lVar2 + 0x70c) = 0x3f8000003f800000;
    *(undefined4 *)(lVar2 + 0x714) = 0x3f800000;
    *(byte *)(param_1[0x8e] + 0x2ee) = *(byte *)(param_1[0x8e] + 0x2ee) | 1;
    FUN_14234b150(param_1[0x8e]);
    lVar2 = param_1[0x8b];
  }
  if (*(longlong *)(lVar2 + 0x70) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14686bc18) {
      _Init_thread_header(&DAT_14686bc18);
      if (DAT_14686bc18 == -1) {
        FName::FName(&DAT_14686bc10,L"ParticleSystem",1);
        _Init_thread_footer(&DAT_14686bc18);
      }
    }
    lVar2 = DAT_14686bc10;
    if (DAT_14686bc10 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
    lVar2 = FUN_1417985e0(uVar3,param_1,lVar2,0,0,0,0,0,0);
    param_1[0x90] = lVar2;
    *(undefined4 *)(lVar2 + 0x1f8) = 0x42b40000;
    FUN_142397000(param_1[0x90],0,0,1);
    FUN_142399e30(param_1[0x90],param_1[0x2d],0);
    *(byte *)(param_1[0x90] + 0xba) = *(byte *)(param_1[0x90] + 0xba) & 0xfd;
    FUN_14260f940(param_1[0x90],*(undefined8 *)(param_1[0x8b] + 0x70));
    FUN_14234b150(param_1[0x90]);
  }
  FUN_140c27550(param_1,0);
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = FUN_140aab610(uVar3);
  if (lVar2 != 0) {
    FUN_140ab8b20(lVar2,param_1,1);
    return;
  }
  return;
}



// FUNCTION 140c19990 FUN_140c19990 body=400 status=ok
// SIG undefined FUN_140c19990(void)

void FUN_140c19990(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  local_res10 = param_2;
  uVar7 = (**(code **)(*param_1 + 0x148))();
  pcVar8 = (char *)FUN_140cb6000(local_res8,uVar7);
  cVar2 = *pcVar8;
  cVar5 = FUN_140596bf0(uVar7);
  if ((cVar2 != '\0') && (cVar5 != '\0')) {
    plVar10 = (longlong *)param_1[0x8b];
    plVar11 = plVar10 + (longlong)(int)param_1[0x8c] * 0x10;
    for (; plVar10 != plVar11; plVar10 = plVar10 + 0x10) {
      lVar3 = *plVar10;
      if (lVar3 != 0) {
        lVar9 = FUN_141437870();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (((bVar4) && (*(char *)(lVar3 + 0x4a8) == cVar2)) && (*(char *)(lVar3 + 0x4a9) != '\0'))
        {
          plVar1 = param_1 + 0xda;
          iVar6 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                            (plVar1,plVar10 + 1);
          if (iVar6 == -1) {
            iVar6 = (int)param_1[0xdb];
            *(int *)(param_1 + 0xdb) = iVar6 + 1;
            if (*(int *)((longlong)param_1 + 0x6dc) < iVar6 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
            }
            *(longlong *)(*plVar1 + (longlong)iVar6 * 8) = plVar10[1];
          }
        }
      }
    }
  }
  FUN_142f62540(param_1,local_res10,param_3,param_4);
  if (DAT_146af4bf0 != (longlong *)0x0) {
    (**(code **)(*DAT_146af4bf0 + 0x20))(DAT_146af4bf0,uVar7);
  }
  FUN_140c046b0(param_1);
  return;
}



// FUNCTION 140c19b20 FUN_140c19b20 body=338 status=ok
// SIG undefined FUN_140c19b20(void)

void FUN_140c19b20(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined8 local_res10;
  undefined8 local_res18;
  ulonglong local_res20;
  undefined8 local_58;
  undefined2 *local_50;
  int local_48;
  undefined4 local_44;
  
  plVar7 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_50 = (undefined2 *)0x0;
  local_44 = 0;
  local_res20 = 0;
  local_res18 = 0;
  (**(code **)(*plVar7 + 0x1a0))(plVar7,&local_res18,&local_res20);
  uVar3 = local_res20;
  uVar2 = local_res18;
  local_res10 = (undefined2 *)((ulonglong)local_res10._4_4_ << 0x20);
  FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (&local_res10,0x7fffffff,local_res18,local_res20 & 0xffffffff);
  uVar1 = (ulonglong)local_res10;
  lVar10 = (longlong)(int)local_res10;
  iVar6 = (int)local_res10 + 1;
  if (iVar6 < 1) {
    puVar11 = (undefined2 *)0x0;
    iVar12 = 0;
    if ((iVar6 < 0) && (puVar11 = (undefined2 *)0x0, iVar6 != 0)) {
      local_48 = iVar6;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink();
      puVar11 = local_50;
      iVar12 = local_48;
    }
  }
  else {
    local_48 = iVar6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
    puVar11 = local_50;
    iVar12 = local_48;
  }
  puVar11[lVar10] = 0;
  local_res10 = puVar11;
  FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>
            (&local_res10,uVar1 & 0xffffffff,uVar2,uVar3 & 0xffffffff);
  puVar9 = &DAT_143f3eda8;
  if (iVar12 != 0) {
    puVar9 = puVar11;
  }
  puVar8 = (undefined8 *)FName::FName(&local_res10,puVar9,1);
  local_58 = *puVar8;
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  cVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar4 == '\0') {
    uVar5 = (**(code **)(param_1 + 0x10))
                      ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),&local_58);
    plVar7 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x120))(plVar7,uVar5);
      (**(code **)(*param_2 + 0x18))(param_2);
    }
  }
  return;
}



// FUNCTION 140c19c90 FUN_140c19c90 body=817 status=ok
// SIG undefined FUN_140c19c90(void)

ulonglong FUN_140c19c90(longlong param_1,longlong *param_2,undefined1 param_3)

{
  wchar_t *pwVar1;
  bool bVar2;
  wchar_t *in_RAX;
  ulonglong *puVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  int iVar9;
  
  if (*(longlong *)(param_1 + 0x800) == 0) {
    if ((param_2 != (longlong *)0x0) &&
       (in_RAX = L"No GameStatData provided", (wchar_t *)*param_2 != L"No GameStatData provided")) {
      iVar9 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0x19) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x19);
        iVar9 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = iVar9 + 0x19;
      if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 0x19) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"No GameStatData provided",0x19);
      in_RAX = (wchar_t *)0x0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x738) != 0) {
      in_RAX = (wchar_t *)FUN_142f71d80();
      pwVar8 = *(wchar_t **)(param_1 + 0x738);
      pwVar5 = pwVar8;
      if (pwVar8 != (wchar_t *)0x0) {
        while (pwVar5 != in_RAX) {
          pwVar1 = pwVar5 + 0x18;
          pwVar5 = *(wchar_t **)pwVar1;
          if (*(wchar_t **)pwVar1 == (wchar_t *)0x0) goto LAB_140c19d72;
        }
        if (pwVar8 == (wchar_t *)0x0) goto LAB_140c19d72;
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong **)(DAT_146b33f38 + 0x58) == (longlong *)0x0) goto LAB_140c19fad;
        bVar2 = false;
        puVar3 = (ulonglong *)(**(code **)(**(longlong **)(DAT_146b33f38 + 0x58) + 0x280))();
        uVar7 = 0;
        iVar9 = 0;
        pwVar8 = (wchar_t *)*puVar3;
        in_RAX = pwVar8 + (longlong)(int)puVar3[1] * 4;
        uVar4 = (longlong)(int)puVar3[1] & 0x1fffffffffffffff;
        if (in_RAX < pwVar8) {
          uVar4 = uVar7;
        }
        if (uVar4 != 0) {
          do {
            if ((*(longlong *)pwVar8 != 0) &&
               (in_RAX = (wchar_t *)FCulture::GetName(), in_RAX != (wchar_t *)0x0)) {
              puVar6 = *(ulonglong **)in_RAX;
              in_RAX = (wchar_t *)(longlong)*(int *)(in_RAX + 4);
              puVar3 = puVar6 + (longlong)in_RAX;
              if (puVar6 != puVar3) {
                in_RAX = *(wchar_t **)(param_1 + 0x800);
                do {
                  if ((wchar_t *)*puVar6 == in_RAX) {
                    bVar2 = true;
                    break;
                  }
                  puVar6 = puVar6 + 1;
                } while (puVar6 != puVar3);
              }
            }
            pwVar8 = pwVar8 + 4;
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar4);
          if (bVar2) {
LAB_140c19fad:
            uVar4 = FUN_140e85d30(param_1,param_2,param_3);
            return uVar4;
          }
        }
        if ((param_2 != (longlong *)0x0) &&
           ((wchar_t *)*param_2 !=
            L"The provided GameStatData could not be found in the global stat list in the GameplayGlobals"
           )) {
          *(undefined4 *)(param_2 + 1) = 0;
          if (*(int *)((longlong)param_2 + 0xc) != 0x5c) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x5c);
            iVar9 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar9 + 0x5c;
          if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 0x5c) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
          }
          builtin_wcsncpy((wchar_t *)*param_2,
                          L"The provided GameStatData could not be found in the global stat list in the GameplayGlobals"
                          ,0x5c);
          in_RAX = (wchar_t *)0x73006c0061;
        }
        goto LAB_140c19e15;
      }
    }
LAB_140c19d72:
    if ((param_2 != (longlong *)0x0) &&
       (in_RAX = L"No Mission set up in the MissionCustomEventOnAllDied",
       (wchar_t *)*param_2 != L"No Mission set up in the MissionCustomEventOnAllDied")) {
      iVar9 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0x35) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x35);
        iVar9 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = iVar9 + 0x35;
      if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 0x35) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"No Mission set up in the MissionCustomEventOnAllDied",
                      0x35);
      in_RAX = (wchar_t *)0x0;
    }
  }
LAB_140c19e15:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140c19fd0 FUN_140c19fd0 body=753 status=ok
// SIG undefined FUN_140c19fd0(void)

ulonglong FUN_140c19fd0(longlong param_1,longlong *param_2,undefined1 param_3)

{
  wchar_t *pwVar1;
  bool bVar2;
  wchar_t *in_RAX;
  undefined8 *puVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  int iVar9;
  
  if (*(longlong *)(param_1 + 0x808) == 0) {
    if ((param_2 != (longlong *)0x0) &&
       (in_RAX = L"No GameStatData provided", (wchar_t *)*param_2 != L"No GameStatData provided")) {
      iVar9 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0x19) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x19);
        iVar9 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = iVar9 + 0x19;
      if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 0x19) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"No GameStatData provided",0x19);
      in_RAX = (wchar_t *)0x0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x800) != 0) {
      in_RAX = (wchar_t *)FUN_142f71d80();
      pwVar8 = *(wchar_t **)(param_1 + 0x800);
      pwVar5 = pwVar8;
      if (pwVar8 != (wchar_t *)0x0) {
        while (pwVar5 != in_RAX) {
          pwVar1 = pwVar5 + 0x18;
          pwVar5 = *(wchar_t **)pwVar1;
          if (*(wchar_t **)pwVar1 == (wchar_t *)0x0) goto LAB_140c1a0b2;
        }
        if (pwVar8 == (wchar_t *)0x0) goto LAB_140c1a0b2;
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong **)(DAT_146b33f38 + 0x58) == (longlong *)0x0) goto LAB_140c1a2ad;
        bVar2 = false;
        puVar3 = (undefined8 *)(**(code **)(**(longlong **)(DAT_146b33f38 + 0x58) + 0x280))();
        uVar7 = 0;
        iVar9 = 0;
        pwVar8 = (wchar_t *)*puVar3;
        in_RAX = pwVar8 + (longlong)*(int *)(puVar3 + 1) * 4;
        uVar4 = (longlong)*(int *)(puVar3 + 1) & 0x1fffffffffffffff;
        if (in_RAX < pwVar8) {
          uVar4 = uVar7;
        }
        if (uVar4 != 0) {
          do {
            if ((*(longlong *)pwVar8 != 0) &&
               (in_RAX = (wchar_t *)FCulture::GetName(), in_RAX != (wchar_t *)0x0)) {
              puVar6 = *(undefined8 **)in_RAX;
              in_RAX = (wchar_t *)(longlong)*(int *)(in_RAX + 4);
              puVar3 = puVar6 + (longlong)in_RAX;
              if (puVar6 != puVar3) {
                in_RAX = *(wchar_t **)(param_1 + 0x808);
                do {
                  if ((wchar_t *)*puVar6 == in_RAX) {
                    bVar2 = true;
                    break;
                  }
                  puVar6 = puVar6 + 1;
                } while (puVar6 != puVar3);
              }
            }
            pwVar8 = pwVar8 + 4;
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar4);
          if (bVar2) {
LAB_140c1a2ad:
            uVar4 = FUN_140e85d30(param_1,param_2,param_3);
            return uVar4;
          }
        }
        if ((param_2 != (longlong *)0x0) &&
           ((wchar_t *)*param_2 !=
            L"The provided GameStatData could not be found in the global stat list in the GameplayGlobals"
           )) {
          *(undefined4 *)(param_2 + 1) = 0;
          if (*(int *)((longlong)param_2 + 0xc) != 0x5c) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x5c);
            iVar9 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar9 + 0x5c;
          if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 0x5c) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
          }
          builtin_wcsncpy((wchar_t *)*param_2,
                          L"The provided GameStatData could not be found in the global stat list in the GameplayGlobals"
                          ,0x5c);
          in_RAX = (wchar_t *)0x73006c0061;
        }
        goto LAB_140c1a116;
      }
    }
LAB_140c1a0b2:
    if ((param_2 != (longlong *)0x0) &&
       (in_RAX = L"No Mission provided", (wchar_t *)*param_2 != L"No Mission provided")) {
      iVar9 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x14);
        iVar9 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = iVar9 + 0x14;
      if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar9);
      }
      in_RAX = (wchar_t *)*param_2;
      builtin_wcsncpy(in_RAX,L"No Mission provided",0x14);
    }
  }
LAB_140c1a116:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140c1a2d0 FUN_140c1a2d0 body=8 status=ok
// SIG undefined FUN_140c1a2d0(void)

undefined1 FUN_140c1a2d0(void)

{
  return DAT_14686a908;
}



// FUNCTION 140c1a2e0 FUN_140c1a2e0 body=1110 status=ok
// SIG undefined FUN_140c1a2e0(void)

void FUN_140c1a2e0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong lVar16;
  bool bVar17;
  longlong *local_res18;
  longlong local_res20;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  undefined1 local_78 [8];
  longlong local_70 [2];
  undefined1 local_60 [32];
  
  lVar5 = FUN_140c104a0();
  if (lVar5 == 0) {
    return;
  }
  local_a8 = *param_2;
  local_a0 = (longlong *)param_2[1];
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  local_res20 = lVar5;
  lVar6 = FUN_140bbb190(lVar5,&local_a8);
  plVar11 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_a0 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    lVar5 = local_res20;
    if ((int)lVar7 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar5 = local_res20;
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
        lVar5 = local_res20;
      }
    }
  }
  if ((((lVar6 == 0) || (lVar6 = FUN_140cfbfb0(lVar6), lVar6 == 0)) ||
      (lVar7 = FUN_140d3b5c0(lVar6,*(undefined4 *)(lVar6 + 0x140)), lVar7 == 0)) ||
     (lVar8 = FUN_140bf9bd0(lVar7,param_2), lVar8 == 0)) goto LAB_140c1a70e;
  FUN_140d3b5a0(lVar8,&local_res18);
  plVar11 = local_res18;
  if (local_res18 == (longlong *)0x0) {
    lVar16 = 0;
  }
  else {
    lVar16 = local_res18[0x1f];
    if (lVar16 == 0) {
      (**(code **)(*local_res18 + 0x368))(local_res18);
      lVar16 = plVar11[0x1f];
    }
  }
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar9 != 0) && (lVar9 = UWorld::GetGameState<APVPGameState>(lVar9), lVar9 != 0)) &&
     ((plVar11 = *(longlong **)(lVar9 + 0x598), plVar11 != (longlong *)0x0 &&
      (cVar4 = (**(code **)(*plVar11 + 0x700))(plVar11), cVar4 == '\0')))) {
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_140c598a0(lVar7,&local_c0);
    FUN_142f62640(plVar11,&local_c0,local_res18);
    TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>::
    ~TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>(&local_c0);
  }
  lVar9 = FUN_142f5eea0(lVar16);
  lVar8 = FUN_140d3a5b0(lVar8);
  if (lVar8 != 0) {
    for (lVar16 = **(longlong **)(lVar16 + 0x200); lVar16 != 0;
        lVar16 = *(longlong *)(lVar16 + 0x70)) {
      lVar10 = FUN_142f5eca0(lVar16,param_1);
      if (lVar10 != 0) {
        lVar9 = lVar10;
      }
      if (lVar16 == lVar8) break;
    }
  }
  plVar11 = (longlong *)FUN_140d3bd80(lVar7,local_78);
  if (*plVar11 != 0) {
    plVar12 = (longlong *)FUN_142f71d80();
    plVar11 = (longlong *)*plVar11;
    for (plVar14 = plVar11; plVar14 != (longlong *)0x0; plVar14 = (longlong *)plVar14[6]) {
      if (plVar14 == plVar12) goto LAB_140c1a529;
    }
  }
  plVar11 = (longlong *)0x0;
LAB_140c1a529:
  plVar14 = (longlong *)0x0;
  if (local_res18 != (longlong *)0x0) {
    plVar13 = (longlong *)FUN_142f71d80();
    for (plVar12 = local_res18;
        (plVar14 = (longlong *)0x0, plVar12 != (longlong *)0x0 &&
        (plVar14 = local_res18, plVar12 != plVar13)); plVar12 = (longlong *)plVar12[6]) {
    }
  }
  bVar17 = plVar11 != plVar14;
  if (bVar17) {
    FUN_140d26690(lVar6);
  }
  if ((lVar9 != 0) && (cVar4 = FUN_142f43380(lVar9,param_1,0), cVar4 != '\0')) {
    lVar7 = FUN_142f477c0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      UObjectBaseUtility::GetPathName(lVar9,local_88,0);
      cVar4 = FUN_140d3da60(lVar6,local_88);
      if (local_88[0] != 0) {
        FMemory::Free();
      }
      if (cVar4 == '\0') goto LAB_140c1a6ea;
    }
    uVar15 = FUN_140d3b2a0(lVar6);
    plVar11 = (longlong *)FString::FString(local_60,uVar15);
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_98 = *plVar11;
    *plVar11 = 0;
    local_90 = (undefined4)plVar11[1];
    local_8c = *(undefined4 *)((longlong)plVar11 + 0xc);
    plVar11[1] = 0;
    FUN_1417978e0(&local_d8,&local_98);
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    lVar7 = FSoftObjectPath::TryLoad(&local_d8);
    if (lVar7 == 0) {
LAB_140c1a6aa:
      uVar15 = UObjectBaseUtility::GetPathName(lVar9,local_70,0);
      FUN_140d4ce20(lVar6,uVar15,*(undefined4 *)(lVar6 + 0x140));
      if (local_70[0] != 0) {
        FMemory::Free();
      }
      bVar17 = true;
    }
    else {
      lVar8 = FUN_142f47520();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((!bVar3) || (*(longlong *)(lVar9 + 0x30) != *(longlong *)(lVar7 + 0x30)))
      goto LAB_140c1a6aa;
    }
    if (local_d0 != 0) {
      FMemory::Free();
    }
  }
LAB_140c1a6ea:
  if (bVar17) {
    FUN_140c1e4c0(param_1,param_2,lVar6);
  }
LAB_140c1a70e:
  FUN_140bccab0(lVar5,0);
  return;
}



// FUNCTION 140c1a740 FUN_140c1a740 body=625 status=ok
// SIG undefined FUN_140c1a740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c1a740(longlong *param_1,float param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  if (param_1 != (longlong *)0x0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if ((lVar2 != 0) && (lVar2 = FUN_142f429c0(lVar2), lVar2 != 0)) {
      lVar3 = FUN_141484230();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(char *)(lVar2 + 0x578) != '\0')) {
        if (param_2 <= 0.0) {
          if (*(longlong *)(lVar2 + 0x580) != 0) {
            uVar4 = AActor::GetWorldTimerManager(lVar2);
            FUN_142880530(uVar4,lVar2 + 0x580);
            *(undefined8 *)(lVar2 + 0x580) = 0;
          }
        }
        else {
          *(undefined1 *)(lVar2 + 0x578) = 0;
          uVar4 = AActor::GetWorldTimerManager(lVar2);
          plVar5 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = (longlong)&PTR_FUN_143f4d170;
            FWeakObjectPtr::operator=(plVar5 + 1,lVar2);
            plVar5[2] = (longlong)&LAB_140c1f800;
            lVar3 = FDelegateHandle::GenerateNewID();
            plVar5[4] = lVar3;
            *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
          }
          local_a8 = 0;
          local_a0 = 0;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x30))(plVar5,&local_a8);
          }
          FWeakObjectPtr::operator=(local_98,0);
          local_b0 = 0xbf800000;
          local_b8 = 0;
          local_90 = 0;
          local_58 = (longlong *)0x0;
          local_48 = 0;
          local_88 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar4,lVar2 + 0x580,&local_a8,param_2);
          if (local_48 != 0) {
            plVar6 = local_78;
            if (local_58 != (longlong *)0x0) {
              plVar6 = local_58;
            }
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6,0);
            }
          }
          if (local_58 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            lVar2 = FMemory::Realloc(plVar5,0,0);
            if (lVar2 != 0) {
              FMemory::Free(lVar2);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c1a9c0 FUN_140c1a9c0 body=281 status=ok
// SIG undefined FUN_140c1a9c0(void)

void FUN_140c1a9c0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_142455a40();
  lVar3 = param_1[0x97];
  if (lVar3 != 0) {
    lVar2 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140cc7e60(lVar3);
    }
  }
  if (param_2 != 0) {
    lVar3 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(param_2 + 0x460) != 0)) {
      plVar4 = (longlong *)UInputKeySelector::GetPrivateStaticClass();
      lVar3 = plVar4[0x1f];
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        lVar3 = plVar4[0x1f];
      }
      (**(code **)(*param_1 + 0x9b0))
                (param_1,param_1,*(undefined8 *)(lVar3 + 0x5d8),4,*(undefined8 *)(param_2 + 0x460),0
                 ,0);
    }
  }
  return;
}



// FUNCTION 140c1aae0 FUN_140c1aae0 body=72 status=ok
// SIG undefined FUN_140c1aae0(void)

void FUN_140c1aae0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_142f5c680();
  lVar2 = FUN_140c1b030(param_1,uVar1,0);
  if (lVar2 == 0) {
    return;
  }
  FUN_142f64850(param_1,param_2);
  return;
}



// FUNCTION 140c1ab30 FUN_140c1ab30 body=61 status=ok
// SIG undefined FUN_140c1ab30(void)

void FUN_140c1ab30(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140c1b030(param_1,param_2,0);
  if (lVar1 == 0) {
    return;
  }
  FUN_142f648e0(param_1,param_2);
  return;
}



// FUNCTION 140c1ab70 FUN_140c1ab70 body=70 status=ok
// SIG undefined FUN_140c1ab70(void)

void FUN_140c1ab70(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  
  if (((byte)(param_3 - 4U) < 2) &&
     (plVar1 = *(longlong **)(param_1 + 0x140), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x840))(plVar1,0);
                    /* WARNING: Could not recover jumptable at 0x000140c1aba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x418))();
    return;
  }
  return;
}



// FUNCTION 140c1abe0 FUN_140c1abe0 body=159 status=ok
// SIG undefined FUN_140c1abe0(void)

void FUN_140c1abe0(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (((param_3 == '\x04') &&
      (lVar3 = (**(code **)(*(longlong *)(param_1 + -0x6a8) + 0x148))(), lVar3 != 0)) &&
     (lVar3 = UWorld::GetGameState<APVPGameState>(lVar3), lVar3 != 0)) {
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar1 + 1;
    if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x18));
    *puVar4 = param_2;
    uVar2 = FUN_140cb6860(lVar3);
    *(undefined4 *)(puVar4 + 1) = uVar2;
  }
  FUN_140c2b7d0(param_1 + -0x6a8);
  return;
}



// FUNCTION 140c1ac80 FUN_140c1ac80 body=935 status=ok
// SIG undefined FUN_140c1ac80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c1ac80(code *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_1a8 [32];
  char local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168 [2];
  longlong local_158;
  longlong *local_150;
  code *local_148;
  longlong **pplStack_140;
  code *local_138;
  longlong **pplStack_130;
  code *local_128;
  longlong **pplStack_120;
  longlong *local_118;
  longlong *local_110;
  longlong **local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong **local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0 [3];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar6 = 0;
  local_170 = 0;
  local_188 = param_3;
  local_148 = param_1;
  FUN_140c136e0(&local_158,0);
  uStack_b0 = (longlong **)CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
  uStack_a0 = (longlong **)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
  uStack_90 = (longlong **)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
  if ((local_158 != 0) &&
     (uStack_b0 = (longlong **)CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0),
     uStack_a0 = (longlong **)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0),
     uStack_90 = (longlong **)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90),
     param_2 != (longlong *)0x0)) {
    lVar10 = param_2[0x1f];
    if (lVar10 == 0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      lVar10 = param_2[0x1f];
      if (lVar10 == 0) goto LAB_140c1afc8;
    }
    FUN_142f59860(lVar10,local_168);
    puVar7 = *(undefined8 **)(lVar10 + 0x230);
    local_180 = (longlong *)0x0;
    local_178 = 0;
    uVar8 = (longlong)*(int *)(lVar10 + 0x238) & 0x1fffffffffffffff;
    if (puVar7 + *(int *)(lVar10 + 0x238) < puVar7) {
      uVar8 = uVar6;
    }
    if (uVar8 != 0) {
      do {
        plVar3 = (longlong *)FUN_142f59bd0(*puVar7,local_d0,lVar10);
        uVar2 = local_178;
        lVar9 = (longlong)(int)local_178;
        iVar4 = (int)local_178 + 1;
        local_178 = CONCAT44(local_178._4_4_,iVar4);
        if (local_178._4_4_ < iVar4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_180,uVar2 & 0xffffffff);
        }
        plVar5 = local_180 + lVar9 * 2;
        *plVar5 = 0;
        *plVar5 = *plVar3;
        *plVar3 = 0;
        *(int *)(plVar5 + 1) = (int)plVar3[1];
        *(undefined4 *)((longlong)plVar5 + 0xc) = *(undefined4 *)((longlong)plVar3 + 0xc);
        plVar3[1] = 0;
        if (local_d0[0] != 0) {
          FMemory::Free();
        }
        puVar7 = puVar7 + 1;
        uVar6 = uVar6 + 1;
        param_1 = local_148;
      } while (uVar6 != uVar8);
    }
    if (local_188 == '\x03') {
      local_88 = 0;
      local_80 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
      Emplace<FString_const_&,int_const_&>(&local_88,local_168,lVar10 + 0x294);
      local_e8 = &local_158;
      local_e0 = local_168;
      local_d8 = &local_88;
      pplStack_120 = &local_e8;
      local_128 = FUN_140c08060;
      local_98 = 0x40c08060;
      uStack_94 = 1;
      uStack_90 = pplStack_120;
      FUN_140c10c60(param_1 + -0x28,&local_98);
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(&local_88,0);
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
    }
    else if (local_188 == '\x04') {
      local_100 = &local_158;
      local_f8 = local_168;
      local_f0 = &local_180;
      pplStack_130 = &local_100;
      local_138 = FUN_140c07fc0;
      local_a8 = 0x40c07fc0;
      uStack_a4 = 1;
      uStack_a0 = pplStack_130;
      FUN_140c10c60(param_1 + -0x28,&local_a8);
    }
    else if (local_188 == '\x05') {
      local_118 = &local_158;
      local_110 = local_168;
      local_108 = &local_180;
      pplStack_140 = &local_118;
      local_148 = FUN_140c07f90;
      local_b8 = 0x40c07f90;
      uStack_b4 = 1;
      uStack_b0 = pplStack_140;
      FUN_140c10c60(param_1 + -0x28,&local_b8);
    }
    plVar3 = local_180;
    for (iVar4 = (int)local_178; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_180 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_168[0] != 0) {
      FMemory::Free();
    }
  }
LAB_140c1afc8:
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_150 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)local_150 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  return;
}



// FUNCTION 140c1b030 FUN_140c1b030 body=209 status=ok
// SIG undefined FUN_140c1b030(void)

longlong FUN_140c1b030(longlong *param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char cVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar8 = *param_2;
  if (lVar8 != 0) {
    lVar4 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar7 = *(char *)(lVar8 + 0x4a8);
      goto LAB_140c1b097;
    }
  }
  lVar8 = 0;
  cVar7 = '\0';
LAB_140c1b097:
  if (cVar7 != '\0') {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    pcVar6 = (char *)FUN_140cb6000(local_res10,uVar5);
    cVar1 = *pcVar6;
    cVar3 = FUN_140596bf0(uVar5);
    if (((cVar1 != cVar7) || (cVar3 == '\0')) ||
       ((param_3 != 0 && (*(char *)(param_3 + 0x2a) != cVar3)))) {
      return 0;
    }
  }
  return lVar8;
}



// FUNCTION 140c1b110 FUN_140c1b110 body=174 status=ok
// SIG undefined FUN_140c1b110(void)

void FUN_140c1b110(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  
  if ((((*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x1c) &&
        *(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x18)) &&
       *(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x14)) &&
       *(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x18)) &&
     (plVar1 = *(longlong **)(param_1 + 0x140), plVar1 != (longlong *)0x0)) {
    if (param_3 == 4) {
      if (*(char *)(param_1 + 0xf0) != '\0') {
        FUN_140b40080(plVar1,0);
        plVar1 = *(longlong **)(param_1 + 0x140);
      }
                    /* WARNING: Could not recover jumptable at 0x000140c1b1b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x840))(plVar1,1);
      return;
    }
    if (4 < param_3) {
      if (param_3 < 7) {
                    /* WARNING: Could not recover jumptable at 0x000140c1b189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x840))(plVar1,0);
        return;
      }
      if (param_3 == 10) {
        (**(code **)(*plVar1 + 0x840))(plVar1,0);
                    /* WARNING: Could not recover jumptable at 0x000140c1b178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x140) + 0x418))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c1b1c0 FUN_140c1b1c0 body=139 status=ok
// SIG undefined FUN_140c1b1c0(void)

void FUN_140c1b1c0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + -0x658);
  (**(code **)(*plVar1 + 0x718))(plVar1);
  cVar2 = FUN_142f63b20(param_1 + 0x70,plVar1);
  if (cVar2 != '\0') {
    lVar4 = FUN_142f5f490(param_1 + 0x70);
    lVar5 = FUN_142f5f490(param_2);
    if ((lVar4 == lVar5) && (param_3 == '\x04')) {
      iVar3 = FUN_1407c9a40(plVar1,0);
      if (iVar3 == 0) {
        FUN_1407d8030(plVar1);
      }
    }
  }
  return;
}


