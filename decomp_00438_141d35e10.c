// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141d35e10 FUN_141d35e10 body=85 status=ok
// SIG undefined FUN_141d35e10(void)

int FUN_141d35e10(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = DAT_146a817a0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar5 = 4;
      goto LAB_141d35e51;
    }
  }
  lVar5 = 0;
LAB_141d35e51:
  iVar4 = *(int *)(lVar5 + lVar1);
  if (iVar4 == 2) {
    iVar4 = 1;
  }
  return iVar4;
}



// FUNCTION 141d35e70 GetReflectionEnvironmentRoughnessMixingScaleBiasAndLargestWeight body=170 status=ok
// SIG undefined GetReflectionEnvironmentRoughnessMixingScaleBiasAndLargestWeight(void)

float * GetReflectionEnvironmentRoughnessMixingScaleBiasAndLargestWeight(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_1464c2e50 - DAT_1464c2e4c;
  if (fVar1 <= 0.001) {
    fVar1 = 0.001;
  }
  if (DAT_1464c2e44 == 0) {
    fVar1 = (float)DAT_1464c2e54;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = fVar1;
    return param_1;
  }
  if (((DAT_1464c2e50 != 0.0) || (DAT_1464c2e4c != 0.0)) && (DAT_1464c2e48 != 0)) {
    fVar2 = DAT_1464c2e4c * (1.0 / fVar1);
    param_1[2] = (float)DAT_1464c2e54;
    *param_1 = 1.0 / fVar1;
    param_1[1] = -fVar2;
    return param_1;
  }
  fVar1 = (float)DAT_1464c2e54;
  *param_1 = 0.0;
  param_1[1] = 1.0;
  param_1[2] = fVar1;
  return param_1;
}



// FUNCTION 141d35f20 FUN_141d35f20 body=627 status=ok
// SIG undefined FUN_141d35f20(void)

void FUN_141d35f20(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  LARGE_INTEGER local_res10 [2];
  longlong local_res20;
  LARGE_INTEGER local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((param_2 != 0) && (param_3 != (longlong *)0x0)) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_48);
      if (*(longlong *)(param_2 + 0x640) != 0) {
        for (plVar10 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x640) + 0x140) + 200);
            plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[7]) {
          iVar11 = (int)param_3[1];
          uVar3 = *(undefined8 *)(*(longlong *)(*plVar10 + 0x30) + 0x10);
          *(int *)(param_3 + 1) = iVar11 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar11);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar11 * 8) = uVar3;
        }
      }
      QueryPerformanceCounter(local_res10);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res10[0].s.LowPart - local_48._0_4_);
    }
    else {
      pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar7 = TlsGetValue(*pDVar6);
      plVar10 = (longlong *)0x0;
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
      local_40 = 0;
      local_38 = 0;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *(undefined1 *)(plVar10 + 5) = 0;
      *plVar10 = (longlong)&PTR_FUN_144e487c0;
      plVar10[6] = 0;
      plVar10[2] = param_1;
      plVar10[3] = param_2;
      plVar10[4] = (longlong)param_3;
      lVar8 = plVar10[6];
      piVar1 = (int *)(lVar8 + 0x48);
      if (lVar8 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res20 = lVar8;
      FUN_14048a160(plVar10,0,0xff,1);
      if (lVar8 != 0) {
        LOCK();
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          FGraphEvent::Recycle(local_res20);
        }
      }
    }
    FUN_141ee24f0(0);
  }
  return;
}



// FUNCTION 141d361a0 FUN_141d361a0 body=280 status=ok
// SIG undefined FUN_141d361a0(void)

longlong FUN_141d361a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar4 = FUN_1429ba110();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar4 = param_2;
      param_2 = *(longlong *)(param_2 + 0x90);
      goto LAB_141d36203;
    }
  }
  lVar4 = 0;
LAB_141d36203:
  plVar1 = (longlong *)(param_1 + 0x4c0);
  if (*(uint *)(param_1 + 0x4d0) < *(uint *)(param_1 + 0x4c8)) {
    lVar5 = *(longlong *)(*plVar1 + (longlong)(int)*(uint *)(param_1 + 0x4d0) * 8);
    if (*(longlong *)(lVar5 + 0x90) != param_2) {
      lVar5 = UMaterialInstanceDynamic::Create(param_2,0);
      *(longlong *)(*plVar1 + (longlong)*(int *)(param_1 + 0x4d0) * 8) = lVar5;
    }
    thunk_FUN_142588c20(lVar5);
  }
  else {
    lVar5 = UMaterialInstanceDynamic::Create(param_2,0);
    iVar2 = *(int *)(param_1 + 0x4c8);
    *(int *)(param_1 + 0x4c8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x4cc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar5;
  }
  if (lVar4 != 0) {
    FUN_142589b00(lVar5,lVar4);
  }
  *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) + 1;
  return lVar5;
}



// FUNCTION 141d362d0 FUN_141d362d0 body=116 status=ok
// SIG undefined FUN_141d362d0(void)

undefined8 * FUN_141d362d0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x1058);
  _Src = *(void **)(param_1 + 0x1050);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<int,FDefaultAllocator>::ResizeForCopy(param_2,iVar1,0);
  _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 2);
  return param_2;
}



// FUNCTION 141d36360 FUN_141d36360 body=200 status=ok
// SIG undefined FUN_141d36360(void)

undefined8 FUN_141d36360(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int local_res10 [2];
  
  if (param_2 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x19c8,local_res10,param_2);
    plVar3 = (longlong *)0x0;
    plVar2 = plVar3;
    if (local_res10[0] != -1) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x19c8) + (longlong)local_res10[0] * 0x18);
    }
    plVar1 = plVar2 + 1;
    if (plVar2 == (longlong *)0x0) {
      plVar1 = plVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x1978,local_res10,*plVar1);
      plVar2 = plVar3;
      if (local_res10[0] != -1) {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x1978) + (longlong)local_res10[0] * 0x18);
      }
      plVar1 = plVar2 + 1;
      if (plVar2 == (longlong *)0x0) {
        plVar1 = plVar3;
      }
      if (plVar1 != (longlong *)0x0) {
        return *(undefined8 *)(*plVar1 + 0x8c8);
      }
    }
  }
  return 0;
}



// FUNCTION 141d36430 FUN_141d36430 body=132 status=ok
// SIG undefined FUN_141d36430(void)

void FUN_141d36430(longlong param_1,char *param_2,char *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  *param_2 = '\x7f';
  iVar3 = 0;
  *param_3 = '\0';
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x30));
      cVar2 = *(char *)(lVar1 + 0x88);
      if (*param_2 <= cVar2) {
        cVar2 = *param_2;
      }
      *param_2 = cVar2;
      cVar2 = *(char *)(lVar1 + 0x88);
      if (cVar2 <= *param_3) {
        cVar2 = *param_3;
      }
      iVar3 = iVar3 + 1;
      *param_3 = cVar2;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 141d364c0 FUN_141d364c0 body=537 status=ok
// SIG undefined FUN_141d364c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141d364c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  ulonglong local_120;
  uint local_118;
  uint local_114;
  int local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  _guard_xfg_dispatch_icall_nop(&local_108,0,0x68);
  uVar3 = 0;
  local_c0 = 0xffffffff;
  local_f0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  _guard_xfg_dispatch_icall_nop(&local_a0,0,0x50);
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_120 = 0;
  local_114 = 0;
  uVar4 = uVar3;
  uVar6 = uVar3;
  uVar7 = uVar3;
  while( true ) {
    iVar2 = (int)uVar3;
    iVar5 = (int)uVar6;
    if ((iVar2 < 0) || (*(int *)(param_1 + 0x38) <= iVar2)) break;
    local_118 = iVar5 + 1;
    iVar1 = *(int *)((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 4) * 0xe8
                     + 0x18 + *(longlong *)(param_1 + 0x40));
    local_104 = local_104 + 1;
    local_108 = local_108 + iVar1;
    if ((int)uVar7 < (int)local_118) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_120,uVar6);
      uVar7 = (ulonglong)local_114;
      uVar4 = local_120;
    }
    uVar6 = (ulonglong)local_118;
    *(int *)(uVar4 + (longlong)iVar5 * 4) = iVar1;
    uVar3 = (ulonglong)(iVar2 + 1);
  }
  if (iVar5 != 0) {
    AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
              (uVar4,(longlong)iVar5,local_128[0],local_128);
    local_100 = *(undefined4 *)(uVar4 + (longlong)(iVar5 / 2) * 4);
    local_fc = *(undefined4 *)(uVar4 + (longlong)(iVar5 + -1) * 4);
    while ((local_f8 < iVar5 && (*(int *)(uVar4 + (longlong)local_f8 * 4) == 1))) {
      local_f8 = local_f8 + 1;
    }
  }
  FDrawListStats::FDrawListStats(param_2,&local_108);
  if (uVar4 != 0) {
    FMemory::Free(uVar4);
  }
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a0);
  local_a8 = 0;
  if (local_b0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_f0);
  return param_2;
}



// FUNCTION 141d366e0 FUN_141d366e0 body=537 status=ok
// SIG undefined FUN_141d366e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141d366e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  ulonglong local_120;
  uint local_118;
  uint local_114;
  int local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  _guard_xfg_dispatch_icall_nop(&local_108,0,0x68);
  uVar3 = 0;
  local_c0 = 0xffffffff;
  local_f0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  _guard_xfg_dispatch_icall_nop(&local_a0,0,0x50);
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_120 = 0;
  local_114 = 0;
  uVar4 = uVar3;
  uVar6 = uVar3;
  uVar7 = uVar3;
  while( true ) {
    iVar2 = (int)uVar3;
    iVar5 = (int)uVar6;
    if ((iVar2 < 0) || (*(int *)(param_1 + 0x38) <= iVar2)) break;
    local_118 = iVar5 + 1;
    iVar1 = *(int *)((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 4) * 0xf0
                     + 0x18 + *(longlong *)(param_1 + 0x40));
    local_104 = local_104 + 1;
    local_108 = local_108 + iVar1;
    if ((int)uVar7 < (int)local_118) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_120,uVar6);
      uVar7 = (ulonglong)local_114;
      uVar4 = local_120;
    }
    uVar6 = (ulonglong)local_118;
    *(int *)(uVar4 + (longlong)iVar5 * 4) = iVar1;
    uVar3 = (ulonglong)(iVar2 + 1);
  }
  if (iVar5 != 0) {
    AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
              (uVar4,(longlong)iVar5,local_128[0],local_128);
    local_100 = *(undefined4 *)(uVar4 + (longlong)(iVar5 / 2) * 4);
    local_fc = *(undefined4 *)(uVar4 + (longlong)(iVar5 + -1) * 4);
    while ((local_f8 < iVar5 && (*(int *)(uVar4 + (longlong)local_f8 * 4) == 1))) {
      local_f8 = local_f8 + 1;
    }
  }
  FDrawListStats::FDrawListStats(param_2,&local_108);
  if (uVar4 != 0) {
    FMemory::Free(uVar4);
  }
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a0);
  local_a8 = 0;
  if (local_b0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_f0);
  return param_2;
}



// FUNCTION 141d36900 FUN_141d36900 body=537 status=ok
// SIG undefined FUN_141d36900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141d36900(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  ulonglong local_120;
  uint local_118;
  uint local_114;
  int local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  _guard_xfg_dispatch_icall_nop(&local_108,0,0x68);
  uVar3 = 0;
  local_c0 = 0xffffffff;
  local_f0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  _guard_xfg_dispatch_icall_nop(&local_a0,0,0x50);
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_120 = 0;
  local_114 = 0;
  uVar4 = uVar3;
  uVar6 = uVar3;
  uVar7 = uVar3;
  while( true ) {
    iVar2 = (int)uVar3;
    iVar5 = (int)uVar6;
    if ((iVar2 < 0) || (*(int *)(param_1 + 0x38) <= iVar2)) break;
    local_118 = iVar5 + 1;
    iVar1 = *(int *)((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 4) * 0xe0
                     + 0x18 + *(longlong *)(param_1 + 0x40));
    local_104 = local_104 + 1;
    local_108 = local_108 + iVar1;
    if ((int)uVar7 < (int)local_118) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_120,uVar6);
      uVar7 = (ulonglong)local_114;
      uVar4 = local_120;
    }
    uVar6 = (ulonglong)local_118;
    *(int *)(uVar4 + (longlong)iVar5 * 4) = iVar1;
    uVar3 = (ulonglong)(iVar2 + 1);
  }
  if (iVar5 != 0) {
    AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
              (uVar4,(longlong)iVar5,local_128[0],local_128);
    local_100 = *(undefined4 *)(uVar4 + (longlong)(iVar5 / 2) * 4);
    local_fc = *(undefined4 *)(uVar4 + (longlong)(iVar5 + -1) * 4);
    while ((local_f8 < iVar5 && (*(int *)(uVar4 + (longlong)local_f8 * 4) == 1))) {
      local_f8 = local_f8 + 1;
    }
  }
  FDrawListStats::FDrawListStats(param_2,&local_108);
  if (uVar4 != 0) {
    FMemory::Free(uVar4);
  }
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a0);
  local_a8 = 0;
  if (local_b0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_f0);
  return param_2;
}



// FUNCTION 141d36b20 FUN_141d36b20 body=537 status=ok
// SIG undefined FUN_141d36b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141d36b20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  ulonglong local_120;
  uint local_118;
  uint local_114;
  int local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  _guard_xfg_dispatch_icall_nop(&local_108,0,0x68);
  uVar3 = 0;
  local_c0 = 0xffffffff;
  local_f0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  _guard_xfg_dispatch_icall_nop(&local_a0,0,0x50);
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_120 = 0;
  local_114 = 0;
  uVar4 = uVar3;
  uVar6 = uVar3;
  uVar7 = uVar3;
  while( true ) {
    iVar2 = (int)uVar3;
    iVar5 = (int)uVar6;
    if ((iVar2 < 0) || (*(int *)(param_1 + 0x38) <= iVar2)) break;
    local_118 = iVar5 + 1;
    iVar1 = *(int *)((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 4) * 0xd8
                     + 0x18 + *(longlong *)(param_1 + 0x40));
    local_104 = local_104 + 1;
    local_108 = local_108 + iVar1;
    if ((int)uVar7 < (int)local_118) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_120,uVar6);
      uVar7 = (ulonglong)local_114;
      uVar4 = local_120;
    }
    uVar6 = (ulonglong)local_118;
    *(int *)(uVar4 + (longlong)iVar5 * 4) = iVar1;
    uVar3 = (ulonglong)(iVar2 + 1);
  }
  if (iVar5 != 0) {
    AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
              (uVar4,(longlong)iVar5,local_128[0],local_128);
    local_100 = *(undefined4 *)(uVar4 + (longlong)(iVar5 / 2) * 4);
    local_fc = *(undefined4 *)(uVar4 + (longlong)(iVar5 + -1) * 4);
    while ((local_f8 < iVar5 && (*(int *)(uVar4 + (longlong)local_f8 * 4) == 1))) {
      local_f8 = local_f8 + 1;
    }
  }
  FDrawListStats::FDrawListStats(param_2,&local_108);
  if (uVar4 != 0) {
    FMemory::Free(uVar4);
  }
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a0);
  local_a8 = 0;
  if (local_b0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_f0);
  return param_2;
}



// FUNCTION 141d36d40 FUN_141d36d40 body=537 status=ok
// SIG undefined FUN_141d36d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141d36d40(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  ulonglong local_120;
  uint local_118;
  uint local_114;
  int local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  _guard_xfg_dispatch_icall_nop(&local_108,0,0x68);
  uVar3 = 0;
  local_c0 = 0xffffffff;
  local_f0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  _guard_xfg_dispatch_icall_nop(&local_a0,0,0x50);
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_120 = 0;
  local_114 = 0;
  uVar4 = uVar3;
  uVar6 = uVar3;
  uVar7 = uVar3;
  while( true ) {
    iVar2 = (int)uVar3;
    iVar5 = (int)uVar6;
    if ((iVar2 < 0) || (*(int *)(param_1 + 0x38) <= iVar2)) break;
    local_118 = iVar5 + 1;
    iVar1 = *(int *)((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 4) * 200 +
                     0x18 + *(longlong *)(param_1 + 0x40));
    local_104 = local_104 + 1;
    local_108 = local_108 + iVar1;
    if ((int)uVar7 < (int)local_118) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_120,uVar6);
      uVar7 = (ulonglong)local_114;
      uVar4 = local_120;
    }
    uVar6 = (ulonglong)local_118;
    *(int *)(uVar4 + (longlong)iVar5 * 4) = iVar1;
    uVar3 = (ulonglong)(iVar2 + 1);
  }
  if (iVar5 != 0) {
    AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
              (uVar4,(longlong)iVar5,local_128[0],local_128);
    local_100 = *(undefined4 *)(uVar4 + (longlong)(iVar5 / 2) * 4);
    local_fc = *(undefined4 *)(uVar4 + (longlong)(iVar5 + -1) * 4);
    while ((local_f8 < iVar5 && (*(int *)(uVar4 + (longlong)local_f8 * 4) == 1))) {
      local_f8 = local_f8 + 1;
    }
  }
  FDrawListStats::FDrawListStats(param_2,&local_108);
  if (uVar4 != 0) {
    FMemory::Free(uVar4);
  }
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a0);
  local_a8 = 0;
  if (local_b0 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_f0);
  return param_2;
}



// FUNCTION 141d36fc0 GetTimeMS body=14 status=ok
// SIG undefined GetTimeMS(void)

undefined4 FLatentGPUTimer::GetTimeMS(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x1c) * 4);
}



// FUNCTION 141d36fd0 FUN_141d36fd0 body=504 status=ok
// SIG undefined FUN_141d36fd0(void)

void FUN_141d36fd0(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  int local_68;
  longlong *local_60;
  longlong *local_58;
  int iStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar10 = *(int *)(param_1 + 0x68);
  puStack_48 = (uint *)(param_1 + 0x50);
  local_88 = 0;
  uStack_84 = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar10 != 0) {
    puVar12 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar12 = puStack_48;
    }
    uVar2 = *puVar12;
    uStack_70 = 0;
    local_88 = 0;
    while (uVar2 == 0) {
      lVar9 = (longlong)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_141d3708f;
      uVar2 = puVar12[lVar9 + 1];
    }
    uStack_84 = -uVar2 & uVar2;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
    if (iVar10 < local_78._4_4_) {
LAB_141d3708f:
      local_78._4_4_ = iVar10;
    }
  }
  uStack_40 = 0xffffffff;
  iStack_3c = local_78._4_4_;
  iStack_38 = uStack_70;
  iStack_50 = local_88;
  uStack_4c = uStack_84;
  iStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68 = uStack_70;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  bVar5 = local_78._4_4_ < iVar10;
  local_60 = plVar1;
  local_58 = plVar1;
  local_78 = puStack_48;
  if (bVar5) {
    do {
      iVar10 = 0;
      lVar9 = (longlong)iStack_6c * 0xe8 + *plVar1;
      if (0 < *(int *)(lVar9 + 0x18)) {
        lVar11 = 0;
        do {
          lVar3 = *(longlong *)(lVar9 + 0x10);
          plVar4 = *(longlong **)(*(longlong *)(lVar3 + 8 + lVar11) + 0xa8);
          if (plVar4 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
            plVar8 = (longlong *)*param_3;
            plVar4 = plVar8 + (int)param_3[1];
            for (; plVar8 != plVar4; plVar8 = plVar8 + 1) {
              if (*plVar8 == lVar6) {
                TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
                AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                          (param_4,*(longlong *)(lVar3 + 8 + lVar11) + 0xc0);
                break;
              }
            }
          }
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + 0x38;
        } while (iVar10 < *(int *)(lVar9 + 0x18));
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    } while (iStack_6c < (int)local_78[6]);
  }
  return;
}



// FUNCTION 141d371d0 FUN_141d371d0 body=504 status=ok
// SIG undefined FUN_141d371d0(void)

void FUN_141d371d0(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  int local_68;
  longlong *local_60;
  longlong *local_58;
  int iStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar10 = *(int *)(param_1 + 0x68);
  puStack_48 = (uint *)(param_1 + 0x50);
  local_88 = 0;
  uStack_84 = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar10 != 0) {
    puVar12 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar12 = puStack_48;
    }
    uVar2 = *puVar12;
    uStack_70 = 0;
    local_88 = 0;
    while (uVar2 == 0) {
      lVar9 = (longlong)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_141d3728f;
      uVar2 = puVar12[lVar9 + 1];
    }
    uStack_84 = -uVar2 & uVar2;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
    if (iVar10 < local_78._4_4_) {
LAB_141d3728f:
      local_78._4_4_ = iVar10;
    }
  }
  uStack_40 = 0xffffffff;
  iStack_3c = local_78._4_4_;
  iStack_38 = uStack_70;
  iStack_50 = local_88;
  uStack_4c = uStack_84;
  iStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68 = uStack_70;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  bVar5 = local_78._4_4_ < iVar10;
  local_60 = plVar1;
  local_58 = plVar1;
  local_78 = puStack_48;
  if (bVar5) {
    do {
      iVar10 = 0;
      lVar9 = (longlong)iStack_6c * 0xf0 + *plVar1;
      if (0 < *(int *)(lVar9 + 0x18)) {
        lVar11 = 0;
        do {
          lVar3 = *(longlong *)(lVar9 + 0x10);
          plVar4 = *(longlong **)(*(longlong *)(lVar3 + 8 + lVar11) + 0xa8);
          if (plVar4 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
            plVar8 = (longlong *)*param_3;
            plVar4 = plVar8 + (int)param_3[1];
            for (; plVar8 != plVar4; plVar8 = plVar8 + 1) {
              if (*plVar8 == lVar6) {
                TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
                AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                          (param_4,*(longlong *)(lVar3 + 8 + lVar11) + 0xc0);
                break;
              }
            }
          }
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + 0x38;
        } while (iVar10 < *(int *)(lVar9 + 0x18));
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    } while (iStack_6c < (int)local_78[6]);
  }
  return;
}



// FUNCTION 141d373d0 FUN_141d373d0 body=504 status=ok
// SIG undefined FUN_141d373d0(void)

void FUN_141d373d0(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  int local_68;
  longlong *local_60;
  longlong *local_58;
  int iStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar10 = *(int *)(param_1 + 0x68);
  puStack_48 = (uint *)(param_1 + 0x50);
  local_88 = 0;
  uStack_84 = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar10 != 0) {
    puVar12 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar12 = puStack_48;
    }
    uVar2 = *puVar12;
    uStack_70 = 0;
    local_88 = 0;
    while (uVar2 == 0) {
      lVar9 = (longlong)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_141d3748f;
      uVar2 = puVar12[lVar9 + 1];
    }
    uStack_84 = -uVar2 & uVar2;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
    if (iVar10 < local_78._4_4_) {
LAB_141d3748f:
      local_78._4_4_ = iVar10;
    }
  }
  uStack_40 = 0xffffffff;
  iStack_3c = local_78._4_4_;
  iStack_38 = uStack_70;
  iStack_50 = local_88;
  uStack_4c = uStack_84;
  iStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68 = uStack_70;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  bVar5 = local_78._4_4_ < iVar10;
  local_60 = plVar1;
  local_58 = plVar1;
  local_78 = puStack_48;
  if (bVar5) {
    do {
      iVar10 = 0;
      lVar9 = (longlong)iStack_6c * 0xe0 + *plVar1;
      if (0 < *(int *)(lVar9 + 0x18)) {
        lVar11 = 0;
        do {
          lVar3 = *(longlong *)(lVar9 + 0x10);
          plVar4 = *(longlong **)(*(longlong *)(lVar3 + 8 + lVar11) + 0xa8);
          if (plVar4 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
            plVar8 = (longlong *)*param_3;
            plVar4 = plVar8 + (int)param_3[1];
            for (; plVar8 != plVar4; plVar8 = plVar8 + 1) {
              if (*plVar8 == lVar6) {
                TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
                AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                          (param_4,*(longlong *)(lVar3 + 8 + lVar11) + 0xc0);
                break;
              }
            }
          }
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + 0x38;
        } while (iVar10 < *(int *)(lVar9 + 0x18));
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    } while (iStack_6c < (int)local_78[6]);
  }
  return;
}



// FUNCTION 141d375d0 FUN_141d375d0 body=504 status=ok
// SIG undefined FUN_141d375d0(void)

void FUN_141d375d0(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  int local_68;
  longlong *local_60;
  longlong *local_58;
  int iStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar10 = *(int *)(param_1 + 0x68);
  puStack_48 = (uint *)(param_1 + 0x50);
  local_88 = 0;
  uStack_84 = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar10 != 0) {
    puVar12 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar12 = puStack_48;
    }
    uVar2 = *puVar12;
    uStack_70 = 0;
    local_88 = 0;
    while (uVar2 == 0) {
      lVar9 = (longlong)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_141d3768f;
      uVar2 = puVar12[lVar9 + 1];
    }
    uStack_84 = -uVar2 & uVar2;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
    if (iVar10 < local_78._4_4_) {
LAB_141d3768f:
      local_78._4_4_ = iVar10;
    }
  }
  uStack_40 = 0xffffffff;
  iStack_3c = local_78._4_4_;
  iStack_38 = uStack_70;
  iStack_50 = local_88;
  uStack_4c = uStack_84;
  iStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68 = uStack_70;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  bVar5 = local_78._4_4_ < iVar10;
  local_60 = plVar1;
  local_58 = plVar1;
  local_78 = puStack_48;
  if (bVar5) {
    do {
      iVar10 = 0;
      lVar9 = (longlong)iStack_6c * 0xd8 + *plVar1;
      if (0 < *(int *)(lVar9 + 0x18)) {
        lVar11 = 0;
        do {
          lVar3 = *(longlong *)(lVar9 + 0x10);
          plVar4 = *(longlong **)(*(longlong *)(lVar3 + 8 + lVar11) + 0xa8);
          if (plVar4 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
            plVar8 = (longlong *)*param_3;
            plVar4 = plVar8 + (int)param_3[1];
            for (; plVar8 != plVar4; plVar8 = plVar8 + 1) {
              if (*plVar8 == lVar6) {
                TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
                AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                          (param_4,*(longlong *)(lVar3 + 8 + lVar11) + 0xc0);
                break;
              }
            }
          }
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + 0x38;
        } while (iVar10 < *(int *)(lVar9 + 0x18));
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    } while (iStack_6c < (int)local_78[6]);
  }
  return;
}



// FUNCTION 141d377d0 FUN_141d377d0 body=504 status=ok
// SIG undefined FUN_141d377d0(void)

void FUN_141d377d0(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  int local_68;
  longlong *local_60;
  longlong *local_58;
  int iStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar10 = *(int *)(param_1 + 0x68);
  puStack_48 = (uint *)(param_1 + 0x50);
  local_88 = 0;
  uStack_84 = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar10 != 0) {
    puVar12 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar12 = puStack_48;
    }
    uVar2 = *puVar12;
    uStack_70 = 0;
    local_88 = 0;
    while (uVar2 == 0) {
      lVar9 = (longlong)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_141d3788f;
      uVar2 = puVar12[lVar9 + 1];
    }
    uStack_84 = -uVar2 & uVar2;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
    if (iVar10 < local_78._4_4_) {
LAB_141d3788f:
      local_78._4_4_ = iVar10;
    }
  }
  uStack_40 = 0xffffffff;
  iStack_3c = local_78._4_4_;
  iStack_38 = uStack_70;
  iStack_50 = local_88;
  uStack_4c = uStack_84;
  iStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68 = uStack_70;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  bVar5 = local_78._4_4_ < iVar10;
  local_60 = plVar1;
  local_58 = plVar1;
  local_78 = puStack_48;
  if (bVar5) {
    do {
      iVar10 = 0;
      lVar9 = (longlong)iStack_6c * 200 + *plVar1;
      if (0 < *(int *)(lVar9 + 0x18)) {
        lVar11 = 0;
        do {
          lVar3 = *(longlong *)(lVar9 + 0x10);
          plVar4 = *(longlong **)(*(longlong *)(lVar3 + 8 + lVar11) + 0xa8);
          if (plVar4 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
            plVar8 = (longlong *)*param_3;
            plVar4 = plVar8 + (int)param_3[1];
            for (; plVar8 != plVar4; plVar8 = plVar8 + 1) {
              if (*plVar8 == lVar6) {
                TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
                AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                          (param_4,*(longlong *)(lVar3 + 8 + lVar11) + 0xc0);
                break;
              }
            }
          }
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + 0x38;
        } while (iVar10 < *(int *)(lVar9 + 0x18));
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    } while (iStack_6c < (int)local_78[6]);
  }
  return;
}



// FUNCTION 141d379d0 GetWindParameters body=63 status=ok
// SIG undefined GetWindParameters(void)

void FNULLSceneInterface::GetWindParameters
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
               undefined4 *param_5,undefined4 *param_6)

{
  *param_3 = 0x3f800000;
  *(undefined4 *)(param_3 + 1) = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  return;
}



// FUNCTION 141d37a10 FUN_141d37a10 body=383 status=ok
// SIG undefined FUN_141d37a10(void)

void FUN_141d37a10(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float local_res8 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  FUN_1428d3550(&local_60);
  iVar3 = 0;
  fVar6 = 0.0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1918)) {
    lVar4 = 0;
    do {
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0x3f800000;
      local_68 = 0;
      cVar1 = FUN_1428cd070(*(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x1910)),param_2,
                            &local_78,local_res8);
      if (cVar1 != '\0') {
        FWindData::AddWeighted(&local_60,&local_78,local_res8[0]);
        fVar6 = fVar6 + local_res8[0];
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x1918));
  }
  FWindData::NormalizeByTotalWeight(&local_60,fVar6);
  if (iVar3 == 0) {
    uStack_4c = 0;
    uVar5 = 0x3f800000;
  }
  else {
    uVar5 = CONCAT44(uStack_50,uStack_54);
  }
  *param_3 = uVar5;
  *(undefined4 *)(param_3 + 1) = uStack_4c;
  *param_4 = local_60;
  *param_5 = uStack_5c;
  *param_6 = uStack_58;
  return;
}



// FUNCTION 141d37b90 FUN_141d37b90 body=420 status=ok
// SIG undefined FUN_141d37b90(void)

void FUN_141d37b90(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  BOOL BVar2;
  int iVar3;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  float fVar9;
  float local_res8 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong uVar4;
  
  local_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  FUN_1428d3550(&local_60);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1950);
  uVar4 = 0;
  iVar3 = 0;
  fVar9 = 0.0;
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x1940);
  uVar7 = (longlong)*(int *)(param_1 + 0x1948) & 0x1fffffffffffffff;
  if (puVar5 + *(int *)(param_1 + 0x1948) < puVar5) {
    uVar7 = uVar4;
  }
  uVar6 = uVar4;
  if (uVar7 != 0) {
    do {
      local_res8[0] = 0.0;
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0x3f800000;
      local_68 = 0;
      cVar1 = FUN_1428cd230(*puVar5,param_2,&local_78,local_res8);
      if (cVar1 != '\0') {
        FWindData::AddWeighted(&local_60,&local_78,local_res8[0]);
        fVar9 = fVar9 + local_res8[0];
        uVar4 = (ulonglong)((int)uVar4 + 1);
      }
      iVar3 = (int)uVar4;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  LeaveCriticalSection(lpCriticalSection);
  FWindData::NormalizeByTotalWeight(&local_60,fVar9);
  if (iVar3 == 0) {
    uVar8 = 0x3f800000;
    uStack_4c = 0;
  }
  else {
    uVar8 = CONCAT44(uStack_50,uStack_54);
  }
  *param_3 = uVar8;
  *(undefined4 *)(param_3 + 1) = uStack_4c;
  *param_4 = local_60;
  *param_5 = uStack_5c;
  *param_6 = uStack_58;
  return;
}



// FUNCTION 141d37d40 FUN_141d37d40 body=124 status=ok
// SIG undefined FUN_141d37d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141d37d40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a83d18) {
    _Init_thread_header(&DAT_146a83d18);
    if (DAT_146a83d18 == -1) {
      DAT_146a83d08 = 0;
      _DAT_146a83d10 = 0;
      atexit((_func_5014 *)&LAB_143e96eb0);
      _Init_thread_footer(&DAT_146a83d18);
      return &DAT_146a83d08;
    }
  }
  return &DAT_146a83d08;
}



// FUNCTION 141d37e10 FUN_141d37e10 body=104 status=ok
// SIG undefined FUN_141d37e10(void)

void FUN_141d37e10(longlong param_1)

{
  undefined1 local_res8 [8];
  
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,local_res8,*(longlong *)(param_1 + 0x40),&DAT_146b15ed8,
               *(undefined4 *)(param_1 + 0x30));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  return;
}



// FUNCTION 141d37e80 FUN_141d37e80 body=381 status=ok
// SIG undefined FUN_141d37e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141d37e80(longlong param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined1 local_54;
  undefined1 local_53;
  short local_52;
  undefined2 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 local_40;
  wchar_t *local_38;
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 4) {
    iVar1 = DAT_1464c9c14;
  }
  if (2 < iVar1) {
    uVar2 = *(uint *)(param_1 + 0x34);
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    iVar4 = 0x20;
    sVar3 = 0x20;
    if (uVar2 != 0) {
      iVar4 = 0x1f - iVar1;
    }
    uVar2 = uVar2 - 1;
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    if (uVar2 != 0) {
      sVar3 = 0x1f - (short)iVar1;
    }
    FUN_141ce3ef0(&PTR_PTR_1464c2560,param_1 + 0x40);
    local_64 = *(undefined4 *)(param_1 + 0x34);
    local_58 = 2;
    if (1 < *(uint *)(param_1 + 0x30)) {
      local_58 = *(uint *)(param_1 + 0x30);
    }
    local_68 = DAT_146ab6938;
    local_50 = 1;
    local_54 = 1 < local_58;
    local_4c = *(undefined4 *)(param_1 + 0x38);
    local_38 = L"UnknownTextureCube";
    local_52 = (0x20U - sVar3 & ~(ushort)((iVar4 << 0x1a) >> 0x1f)) + 1;
    local_5c = 0;
    local_48 = 0;
    local_40 = 0;
    local_88 = 1;
    local_90 = 1;
    local_30 = 0;
    local_78 = _DAT_146ab6928;
    uStack_74 = uRam0000000146ab692c;
    uStack_70 = uRam0000000146ab6930;
    uStack_6c = uRam0000000146ab6934;
    local_53 = 1;
    local_98 = L"ReflectionEnvs";
    local_60 = local_64;
    FUN_141ce20b0(&PTR_PTR_1464c2560,&DAT_146ab6e78,&local_78,param_1 + 0x40);
  }
  return;
}



// FUNCTION 141d38010 InitRHI body=86 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x4010700;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d38070 InitRHI body=93 status=ok
// SIG undefined InitRHI(void)

void TStaticStateRHI<TStaticDepthStencilState<0,7,1,7,2,2,2,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
     ::FStaticStateResource::InitRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  local_18 = 0x7010700;
  local_14 = 0x20202;
  local_10 = 7;
  local_c = 0xffff;
  (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 141d380d0 FUN_141d380d0 body=36 status=ok
// SIG undefined FUN_141d380d0(void)

void FUN_141d380d0(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0xa8);
  if (lVar1 != 0) {
    FUN_141d59c20(lVar1);
    return;
  }
  return;
}



// FUNCTION 141d38130 IsAlmostBlack body=55 status=ok
// SIG undefined IsAlmostBlack(void)

undefined1 FLinearColor::IsAlmostBlack(float *param_1)

{
  if (((*param_1 * *param_1 < 1e-05) && (param_1[1] * param_1[1] < 1e-05)) &&
     (param_1[2] * param_1[2] < 1e-05)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141d381a0 FUN_141d381a0 body=102 status=ok
// SIG undefined FUN_141d381a0(void)

ulonglong FUN_141d381a0(int param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong in_RAX;
  
  lVar1 = DAT_146a817a0;
  if (param_1 < 2) goto LAB_141d381fe;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    in_RAX = 4;
    if (DVar3 == DAT_1468c21c0) goto LAB_141d381e8;
  }
  else {
LAB_141d381e8:
    in_RAX = 0;
  }
  if (*(int *)(in_RAX + lVar1) != 0) {
    return 1;
  }
LAB_141d381fe:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141d38210 FUN_141d38210 body=124 status=ok
// SIG undefined FUN_141d38210(void)

undefined8 FUN_141d38210(longlong param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 != '\0') {
    if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x28) & 0x8000000) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
      return 0;
    }
    if (*(int *)(DAT_146a81068 + 4) < 1) {
      return 0;
    }
    if (*(float *)(param_1 + 0x17c4) <= 1.0 && *(float *)(param_1 + 0x17c4) != 1.0) {
      return 0;
    }
    uVar2 = FUN_14274f980();
    cVar1 = IsAnyForwardShadingEnabled(uVar2);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     ((*(int *)(param_1 + 0x1a10) != 2 || (*(int *)(DAT_146a81080 + 4) != 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 141d38290 FUN_141d38290 body=536 status=ok
// SIG undefined FUN_141d38290(void)

void FUN_141d38290(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int local_res8 [2];
  int *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  longlong lStack_20;
  undefined8 local_18;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x1e) & 1) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xd8);
      local_38 = (int *)(param_1 + 0x10);
      plVar7 = (longlong *)(lVar4 + 0x1a18);
      if (*(int *)(lVar4 + 0x1a20) != *(int *)(lVar4 + 0x1a4c)) {
        lVar3 = *(longlong *)(lVar4 + 0x1a58);
        if (*(longlong *)(lVar4 + 0x1a58) == 0) {
          lVar3 = lVar4 + 0x1a50;
        }
        iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(lVar4 + 0x1a60) - 1U & (longlong)*local_38) * 4
                        );
        if (iVar2 != -1) {
          do {
            plVar5 = (longlong *)(*plVar7 + (longlong)iVar2 * 0x28);
            if (*(int *)(*plVar7 + (longlong)iVar2 * 0x28) == *local_38) {
              if (iVar2 != -1) goto LAB_141d38433;
              break;
            }
            iVar2 = (int)plVar5[4];
          } while (iVar2 != -1);
        }
      }
      plVar5 = (longlong *)0x0;
LAB_141d38433:
      plVar6 = plVar5 + 1;
      if (plVar5 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      if (plVar6 == (longlong *)0x0) {
        local_18 = 0;
        local_30 = &local_28;
        local_28 = 0;
        lStack_20 = 0;
        FUN_141d09d60(plVar7,local_res8,&local_38);
        plVar6 = (longlong *)(*plVar7 + ((longlong)local_res8[0] * 5 + 1) * 8);
        if (lStack_20 != 0) {
          FMemory::Free();
        }
      }
      *plVar6 = param_1;
    }
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0xd8);
  plVar7 = (longlong *)(lVar4 + 0x1a18);
  if (*(int *)(lVar4 + 0x1a20) != *(int *)(lVar4 + 0x1a4c)) {
    lVar3 = *(longlong *)(lVar4 + 0x1a58);
    if (*(longlong *)(lVar4 + 0x1a58) == 0) {
      lVar3 = lVar4 + 0x1a50;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)*(int *)(lVar4 + 0x1a60) - 1U & (longlong)iVar2) * 4);
    if (iVar1 != -1) {
      do {
        lVar4 = *plVar7 + (longlong)iVar1 * 0x28;
        if (*(int *)(*plVar7 + (longlong)iVar1 * 0x28) == iVar2) {
          if (iVar1 != -1) goto LAB_141d38323;
          break;
        }
        iVar1 = *(int *)(lVar4 + 0x20);
      } while (iVar1 != -1);
    }
  }
  lVar4 = 0;
LAB_141d38323:
  lVar3 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  if (lVar3 == 0) {
    local_18 = 0;
    local_30 = &local_28;
    local_28 = 0;
    lStack_20 = 0;
    local_38 = (int *)(param_1 + 0x28);
    FUN_141d09d60(plVar7,local_res8,&local_38);
    lVar3 = *plVar7 + ((longlong)local_res8[0] * 5 + 1) * 8;
    if (lStack_20 != 0) {
      FMemory::Free();
    }
  }
  iVar2 = *(int *)(lVar3 + 0x10);
  *(int *)(lVar3 + 0x10) = iVar2 + 1;
  if (*(int *)(lVar3 + 0x14) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 8,iVar2);
  }
  *(longlong *)(*(longlong *)(lVar3 + 8) + (longlong)iVar2 * 8) = param_1;
  return;
}



// FUNCTION 141d384b0 FUN_141d384b0 body=1938 status=ok
// SIG undefined FUN_141d384b0(void)

void FUN_141d384b0(int *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined2 *puVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong uVar21;
  int iVar22;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint local_d8;
  uint uStack_d4;
  int iStack_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  int *local_98;
  longlong *local_90;
  longlong local_88;
  int local_80;
  int local_7c;
  undefined8 local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  uint local_48;
  int local_44;
  undefined2 *local_40;
  int local_38;
  
  iVar9 = 0;
  local_98 = param_1;
  local_78 = (longlong *)CONCAT44(local_78._4_4_,(undefined4)local_78);
  if ((param_1[1] != 0) &&
     (local_78 = (longlong *)CONCAT44(local_78._4_4_,(undefined4)local_78), *param_1 != 0)) {
    local_c0 = (longlong *)(param_1 + 6);
    uVar2 = param_1[0x10];
    uStack_e0 = (uint *)(param_1 + 10);
    local_88 = 0;
    local_7c = 0;
    local_e8._0_4_ = 0;
    local_e8._4_4_ = 1;
    uStack_d4 = 0;
    iStack_d0 = 0;
    if (uVar2 != 0) {
      puVar20 = *(uint **)(param_1 + 0xe);
      if (*(uint **)(param_1 + 0xe) == (uint *)0x0) {
        puVar20 = uStack_e0;
      }
      uVar19 = *puVar20;
      while (uVar19 == 0) {
        lVar13 = (longlong)(int)local_e8;
        iStack_d0 = iStack_d0 + 0x20;
        iVar10 = (int)local_e8 + 1;
        bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_e8;
        local_e8._0_4_ = iVar10;
        if (bVar4) goto LAB_141d385c2;
        uVar19 = puVar20[lVar13 + 1];
      }
      local_e8._4_4_ = -uVar19 & uVar19;
      iVar10 = 0x1f;
      if (local_e8._4_4_ != 0) {
        for (; local_e8._4_4_ >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (local_e8._4_4_ == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_d4 = (iStack_d0 - iVar10) + 0x1f;
      if ((int)uVar2 < (int)uStack_d4) {
LAB_141d385c2:
        uStack_d4 = uVar2;
      }
    }
    local_d8 = 0xffffffff;
    uStack_ac = param_1[0x10];
    uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
    uStack_b8._0_4_ = (int)local_e8;
    uStack_b8._4_4_ = local_e8._4_4_;
    uStack_b0 = -1 << ((byte)uStack_ac & 0x1f);
    uVar19 = uStack_ac & 0xffffffe0;
    uStack_a8 = 0xffffffff;
    uStack_a4 = uStack_d4;
    uStack_60._0_4_ = 0xffffffff;
    uStack_60._4_4_ = uStack_d4;
    iStack_70 = (int)local_e8;
    uStack_6c = local_e8._4_4_;
    local_90 = local_c0;
    local_68 = uStack_e0;
    local_58 = uStack_a0;
    iVar10 = iVar9;
    local_78 = local_c0;
    uVar12 = uStack_ac;
    if (uStack_ac != uVar2) {
      puVar20 = *(uint **)(param_1 + 0xe);
      if (*(uint **)(param_1 + 0xe) == (uint *)0x0) {
        puVar20 = uStack_e0;
      }
      uVar12 = puVar20[(int)uStack_ac >> 5] & uStack_b0;
      iVar8 = (int)uStack_ac >> 5;
      while (uVar12 == 0) {
        uVar19 = uVar19 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_141d38695;
        uVar12 = puVar20[(longlong)iVar8 + 1];
        uStack_b0 = 0xffffffff;
        iVar8 = iVar8 + 1;
      }
      uVar12 = -uVar12 & uVar12;
      iVar8 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_ac = (uVar19 - iVar8) + 0x1f;
      uVar12 = uStack_ac;
      if ((int)uVar2 < (int)uStack_ac) {
LAB_141d38695:
        uStack_ac = uVar2;
        uVar12 = uVar2;
      }
    }
    while (((uStack_60._4_4_ != uVar12 || (local_68 != uStack_e0)) || (local_78 != local_90))) {
      local_f0 = 1;
      puVar15 = (undefined8 *)((longlong)(int)uStack_60._4_4_ * 0x20 + *local_78);
      local_f8 = 0;
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(&local_f8,0);
      FStringFormatArg::FStringFormatArg(local_f8,*(undefined4 *)(puVar15 + 2));
      uVar21 = local_f0;
      if (*(int *)(puVar15 + 1) == 0) {
        puVar18 = &DAT_143f3eda8;
      }
      else {
        puVar18 = (undefined2 *)*puVar15;
      }
      lVar13 = (longlong)(int)local_f0;
      iVar8 = (int)local_f0 + 1;
      local_f0 = CONCAT44(local_f0._4_4_,iVar8);
      if (local_f0._4_4_ < iVar8) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(&local_f8,uVar21 & 0xffffffff);
      }
      FStringFormatArg::FStringFormatArg(lVar13 * 0x20 + local_f8,puVar18);
      puVar15 = (undefined8 *)FString::Format(&local_40,L"      - {0} ({1})\n",&local_f8);
      pvVar3 = (void *)*puVar15;
      iVar8 = *(int *)(puVar15 + 1) + -1;
      if (*(int *)(puVar15 + 1) == 0) {
        iVar8 = 0;
      }
      iVar22 = iVar10;
      if (iVar8 != 0) {
        local_80 = iVar8 + (uint)(iVar10 == 0) + iVar10;
        if (iVar9 < local_80) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar10);
          iVar9 = local_7c;
        }
        iVar22 = local_80;
        pvVar1 = (void *)(local_88 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar8 * 2);
        *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_40 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if ((int)local_f0 != 0) {
        plVar16 = (longlong *)(local_f8 + 0x10);
        iVar10 = (int)local_f0;
        do {
          if (*plVar16 != 0) {
            FMemory::Free();
          }
          plVar16 = plVar16 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
      uStack_60._0_4_ = (uint)uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      iVar10 = iVar22;
    }
    uVar21 = 0;
    local_e8 = (longlong *)(local_98 + 0x1a);
    local_50 = 0;
    uVar2 = local_98[0x24];
    uStack_b8 = (uint *)(local_98 + 0x1e);
    local_44 = 0;
    local_c0 = (longlong *)0x100000000;
    uStack_ac = 0;
    uStack_a8 = 0;
    if (uVar2 != 0) {
      puVar20 = *(uint **)(local_98 + 0x22);
      if (*(uint **)(local_98 + 0x22) == (uint *)0x0) {
        puVar20 = uStack_b8;
      }
      uVar19 = *puVar20;
      uVar11 = uVar21;
      uVar14 = uVar21;
      while (uVar19 == 0) {
        iVar9 = (int)uVar11;
        uStack_a8 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_a8;
        uVar11 = (ulonglong)(iVar9 + 1U);
        uVar5 = (ulonglong)local_c0 >> 0x20;
        local_c0 = (longlong *)CONCAT44((int)uVar5,iVar9 + 1U);
        uStack_ac = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_141d38912;
        uVar19 = puVar20[(longlong)iVar9 + 1];
      }
      uVar19 = -uVar19 & uVar19;
      iVar9 = 0x1f;
      if (uVar19 != 0) {
        for (; uVar19 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      local_c0 = (longlong *)CONCAT44(uVar19,SUB84(local_c0,0));
      if (uVar19 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_ac = (uStack_a8 - iVar9) + 0x1f;
      if ((int)uVar2 < (int)uStack_ac) {
        uStack_ac = uVar2;
      }
    }
LAB_141d38912:
    uStack_b0 = 0xffffffff;
    uStack_d4 = local_98[0x24];
    uStack_c8 = CONCAT44(uStack_a4,uStack_a8);
    uStack_e0 = (uint *)local_c0;
    uVar6 = uStack_e0;
    local_d8 = -1 << ((byte)uStack_d4 & 0x1f);
    uStack_e0._0_4_ = (int)local_c0;
    uStack_e0._4_4_ = (uint)((ulonglong)local_c0 >> 0x20);
    uVar12 = uStack_d4 & 0xffffffe0;
    iStack_d0 = 0xffffffff;
    uStack_cc = uStack_ac;
    uStack_60 = CONCAT44(uStack_ac,0xffffffff);
    iStack_70 = (int)uStack_e0;
    uStack_6c = uStack_e0._4_4_;
    uVar11 = uVar21;
    uStack_e0 = (uint *)uVar6;
    local_90 = local_e8;
    local_68 = uStack_b8;
    local_58 = uStack_c8;
    local_78 = local_e8;
    uVar19 = uStack_d4;
    if (uStack_d4 != uVar2) {
      puVar20 = *(uint **)(local_98 + 0x22);
      if (*(uint **)(local_98 + 0x22) == (uint *)0x0) {
        puVar20 = uStack_b8;
      }
      uVar19 = puVar20[(int)uStack_d4 >> 5] & local_d8;
      iVar9 = (int)uStack_d4 >> 5;
      while (uVar19 == 0) {
        uVar12 = uVar12 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_141d389e4;
        uVar19 = puVar20[(longlong)iVar9 + 1];
        local_d8 = 0xffffffff;
        iVar9 = iVar9 + 1;
      }
      uVar19 = -uVar19 & uVar19;
      iVar9 = 0x1f;
      if (uVar19 != 0) {
        for (; uVar19 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar19 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_d4 = (uVar12 - iVar9) + 0x1f;
      uVar19 = uStack_d4;
      if ((int)uVar2 < (int)uStack_d4) {
LAB_141d389e4:
        uStack_d4 = uVar2;
        uVar19 = uVar2;
      }
    }
    while( true ) {
      if (((uStack_60._4_4_ == uVar19) && (local_68 == uStack_b8)) && (local_78 == local_90)) break;
      local_f8 = 0;
      local_f0 = 0;
      lVar13 = *local_78 + (longlong)(int)uStack_60._4_4_ * 0x18;
      FName::ToString(lVar13,&local_40);
      lVar17 = (longlong)(int)local_f0;
      iVar9 = (int)local_f0 + 1;
      if (local_f0._4_4_ < iVar9) {
        uVar14 = local_f0 & 0xffffffff;
        local_f0._0_4_ = iVar9;
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(&local_f8,uVar14);
        iVar9 = (int)local_f0;
      }
      local_f0._0_4_ = iVar9;
      FStringFormatArg::FStringFormatArg(lVar17 * 0x20 + local_f8,*(undefined4 *)(lVar13 + 8));
      iVar9 = (int)local_f0;
      lVar13 = (longlong)(int)local_f0;
      puVar18 = &DAT_143f3eda8;
      if (local_38 != 0) {
        puVar18 = local_40;
      }
      local_f0._0_4_ = (int)local_f0 + 1;
      if (local_f0._4_4_ < (int)local_f0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(&local_f8,iVar9);
      }
      FStringFormatArg::FStringFormatArg(lVar13 * 0x20 + local_f8,puVar18);
      puVar15 = (undefined8 *)FString::Format(&local_e8,L"      - {0} ({1})\n",&local_f8);
      iVar9 = *(int *)(puVar15 + 1) + -1;
      if (*(int *)(puVar15 + 1) == 0) {
        iVar9 = 0;
      }
      pvVar3 = (void *)*puVar15;
      if (iVar9 != 0) {
        iVar10 = (int)uVar11;
        local_48 = iVar9 + (uint)(iVar10 == 0) + iVar10;
        if (local_44 < (int)local_48) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,uVar11);
          uVar21 = local_50;
        }
        uVar11 = (ulonglong)local_48;
        pvVar1 = (void *)(uVar21 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar9 * 2) = 0;
      }
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_40 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if ((int)local_f0 != 0) {
        plVar16 = (longlong *)(local_f8 + 0x10);
        iVar9 = (int)local_f0;
        do {
          if (*plVar16 != 0) {
            FMemory::Free();
          }
          plVar16 = plVar16 + 4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
    if (uVar21 != 0) {
      FMemory::Free(uVar21);
    }
    if (local_88 != 0) {
      FMemory::Free(local_88);
    }
  }
  piVar7 = local_98;
  local_98[0x2c] = 0;
  if (*(longlong *)(local_98 + 0x2a) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (piVar7 + 0x1a);
  piVar7[0x18] = 0;
  if (*(longlong *)(piVar7 + 0x16) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (piVar7 + 6);
  return;
}



// FUNCTION 141d38c90 ModifyCompilationEnvironment body=194 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d38d60 ModifyCompilationEnvironment body=191 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d38e20 ModifyCompilationEnvironment body=191 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d38ee0 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d38fa0 ModifyCompilationEnvironment body=191 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d39060 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d39120 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d391e0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d392a0 ModifyCompilationEnvironment body=191 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d39360 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d39420 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d394e0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d395a0 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d39660 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d39720 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d397e0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,1,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d398a0 ModifyCompilationEnvironment body=191 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d39960 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d39a20 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d39ae0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d39ba0 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d39c60 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d39d20 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d39de0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d39ea0 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d39f60 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3a020 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3a0e0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3a1a0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3a260 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3a320 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3a3e0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,1,0,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3a4a0 ModifyCompilationEnvironment body=191 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3a560 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3a620 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3a6e0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3a7a0 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3a860 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3a920 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3a9e0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3aaa0 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3ab60 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3ac20 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3ace0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3ada0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3ae60 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3af20 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3afe0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,1,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3b0a0 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3b160 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3b220 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3b2e0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3b3a0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3b460 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3b520 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3b5e0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3b6a0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3b760 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3b820 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3b8e0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3b9a0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3ba60 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3bb20 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3bbe0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,1,0,0,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3bc90 ModifyCompilationEnvironment body=191 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3bd50 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3be10 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3bed0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3bf90 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3c050 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3c110 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3c1d0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3c290 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3c350 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3c410 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3c4d0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3c590 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3c650 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3c710 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3c7d0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,1,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3c890 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3c950 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3ca10 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3cad0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3cb90 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3cc50 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3cd10 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3cdd0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3ce90 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3cf50 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3d010 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3d0d0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3d190 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3d250 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3d310 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3d3d0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,1,0,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3d480 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3d540 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3d600 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3d6c0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3d780 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3d840 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3d900 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3d9c0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3da80 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3db40 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3dc00 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3dcc0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3dd80 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3de40 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3df00 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3dfc0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,1,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3e070 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3e130 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3e1f0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3e2b0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3e370 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3e430 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3e4f0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3e5b0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3e660 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3e720 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3e7e0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3e8a0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3e950 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3ea10 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3eac0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3eb70 ModifyCompilationEnvironment body=173 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<1,0,0,0,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3ec20 ModifyCompilationEnvironment body=191 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3ece0 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3eda0 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3ee60 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3ef20 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3efe0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3f0a0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3f160 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3f220 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3f2e0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3f3a0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3f460 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3f520 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3f5e0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3f6a0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3f760 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,1,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3f820 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3f8e0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3f9a0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3fa60 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3fb20 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3fbe0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3fca0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3fd60 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3fe20 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d3fee0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d3ffa0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d40060 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d40120 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d401e0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d402a0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d40360 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,1,0,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d40410 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d404d0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d40590 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d40650 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d40710 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d407d0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d40890 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d40950 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d40a10 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d40ad0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d40b90 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d40c50 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d40d10 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d40dd0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d40e90 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d40f50 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,1,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d41000 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d410c0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d41180 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d41240 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d41300 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d413c0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d41480 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d41540 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d415f0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d416b0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d41770 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d41830 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d418e0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d419a0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d41a50 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d41b00 ModifyCompilationEnvironment body=173 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,1,0,0,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d41bb0 ModifyCompilationEnvironment body=188 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d41c70 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d41d30 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d41df0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d41eb0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d41f70 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d42030 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d420f0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d421b0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d42270 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d42330 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d423f0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d424b0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d42570 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d42630 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d426f0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,1,0,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d427a0 ModifyCompilationEnvironment body=185 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d42860 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d42920 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,1,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d429e0 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,1,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d42aa0 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,0,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d42b60 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,0,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d42c20 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,0,0,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d42ce0 ModifyCompilationEnvironment body=176 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,1,0,0,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}



// FUNCTION 141d42d90 ModifyCompilationEnvironment body=182 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,1,1,1>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",1);
  return;
}



// FUNCTION 141d42e50 ModifyCompilationEnvironment body=179 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TReflectionEnvironmentSkyLightingPS<0,0,1,0,0,1,1,0>::ModifyCompilationEnvironment
               (undefined8 param_1,longlong param_2)

{
  FUN_141d44ca0();
  param_2 = param_2 + 0x200;
  FShaderCompilerDefinitions::SetDefine(param_2,L"USE_LIGHTMAPS",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_BOX_CAPTURES",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"REFLECTION_COMPOSITE_HAS_SPHERE_CAPTURES",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SUPPORT_DFAO_INDIRECT_OCCLUSION",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"SPECULAR_BOUNCE",0);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"ENABLE_DYNAMIC_SKY_LIGHT",1);
  FShaderCompilerDefinitions::SetDefine(param_2,L"APPLY_SKY_SHADOWING",0);
  return;
}


