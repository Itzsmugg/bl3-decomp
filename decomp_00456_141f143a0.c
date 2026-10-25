// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141f143a0 FUN_141f143a0 body=45 status=ok
// SIG undefined FUN_141f143a0(void)

undefined8
FUN_141f143a0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,param_5);
  return 1;
}



// FUNCTION 141f143d0 FUN_141f143d0 body=265 status=ok
// SIG undefined FUN_141f143d0(void)

void FUN_141f143d0(undefined8 *param_1)

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
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144ef76a8;
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



// FUNCTION 141f144e0 FUN_141f144e0 body=237 status=ok
// SIG undefined FUN_141f144e0(void)

void FUN_141f144e0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141f13de0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144ef73d8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141f145d0 FUN_141f145d0 body=237 status=ok
// SIG undefined FUN_141f145d0(void)

void FUN_141f145d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141f13e60(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144ef73c8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141f146c0 FUN_141f146c0 body=237 status=ok
// SIG undefined FUN_141f146c0(void)

void FUN_141f146c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141f13ee0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144ef73f8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141f147b0 FUN_141f147b0 body=237 status=ok
// SIG undefined FUN_141f147b0(void)

void FUN_141f147b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_141f13f50(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_144ef73e8;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
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



// FUNCTION 141f148a0 FindId body=304 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FIntPoint,FLandscapeNeighborInfo_const_*>,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = (uint)((ulonglong)param_3 >> 0x20);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (int)param_3 - uVar5 ^ uVar5 >> 0xd;
    uVar6 = (-0x61c88647 - uVar5) - uVar7 ^ uVar7 << 8;
    uVar4 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xd;
    uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar4 >> 0xc;
    uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar7 << 0x10;
    uVar4 = (uVar4 - uVar6) - uVar7 ^ uVar6 >> 5;
    uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar4 >> 3;
    uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar7 << 10;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    (((longlong)(int)((uVar4 - uVar6) - uVar7) ^ (ulonglong)(uVar6 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        uVar1 = *(undefined8 *)(*param_1 + (longlong)iVar2 * 0x18);
        if (((int)uVar1 == (int)param_3) && ((uint)((ulonglong)uVar1 >> 0x20) == uVar5)) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(*param_1 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141f149d0 FindId body=209 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>,TDefaultMapHashableKeyFuncs<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

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
        lVar4 = (longlong)iVar2 * 0x70;
        if ((*(longlong *)(lVar4 + lVar1) == *param_3) &&
           (((*(int *)(lVar4 + 0x14 + lVar1) == *(int *)((longlong)param_3 + 0x14) &&
             *(int *)(lVar4 + 0x10 + lVar1) == (int)param_3[2]) &&
            *(int *)(lVar4 + 0xc + lVar1) == *(int *)((longlong)param_3 + 0xc)) &&
            *(int *)(lVar4 + 8 + lVar1) == (int)param_3[1])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar4 + 0x68 + lVar1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141f14ab0 FindNearest body=298 status=ok
// SIG undefined FindNearest(void)

void ULandscapeSplineSegment::FindNearest
               (longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float local_res8 [2];
  undefined1 local_48 [48];
  
  puVar3 = (undefined8 *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x60);
  iVar1 = iVar4;
  if (*(char *)(param_1 + 0x68) == '\0') {
    iVar1 = iVar4 + -1;
  }
  if (iVar4 < 2) {
    if (iVar4 == 1) {
      uVar5 = *(undefined4 *)*puVar3;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = FInterpCurve<FVector>::InaccurateFindNearestOnSegment(puVar3,param_2,0,local_res8);
    iVar4 = 1;
    fVar7 = local_res8[0];
    if (1 < iVar1) {
      do {
        uVar6 = FInterpCurve<FVector>::InaccurateFindNearestOnSegment
                          (puVar3,param_2,iVar4,local_res8);
        if (local_res8[0] < fVar7) {
          fVar7 = local_res8[0];
          uVar5 = uVar6;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  *param_3 = uVar5;
  puVar2 = (undefined8 *)FInterpCurve<FVector>::Eval(puVar3,local_48,uVar5,&DAT_1468b5d90);
  *param_4 = *puVar2;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar2 + 1);
  puVar3 = (undefined8 *)
           FInterpCurve<FVector>::EvalDerivative(puVar3,local_48,*param_3,&DAT_1468b5d90);
  *param_5 = *puVar3;
  *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar3 + 1);
  return;
}



// FUNCTION 141f14c00 FUN_141f14c00 body=222 status=ok
// SIG undefined FUN_141f14c00(void)

void FUN_141f14c00(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  
  puVar7 = *(undefined8 **)(param_1 + 0x40);
  puVar6 = puVar7 + (longlong)*(int *)(param_1 + 0x48) * 0x11;
  for (; puVar7 != puVar6; puVar7 = puVar7 + 0x11) {
    local_38 = *puVar7;
    iVar2 = *(int *)(param_2 + 8);
    local_2d = *(undefined1 *)(param_4 + 0xb);
    local_2c = *(undefined4 *)(param_4 + 0xc);
    local_30 = 0xffff;
    local_2e = 2;
    FUN_141f08a10(param_2,&local_38);
    if (iVar2 != *(int *)(param_2 + 8)) {
      iVar2 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
      }
      uVar3 = *(undefined4 *)(param_1 + 0x54);
      uVar4 = *(undefined4 *)(param_1 + 0x58);
      uVar5 = *(undefined4 *)(param_1 + 0x5c);
      puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
      *puVar1 = *(undefined4 *)(param_1 + 0x50);
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
    }
  }
  return;
}



// FUNCTION 141f14ce0 FUN_141f14ce0 body=154 status=ok
// SIG undefined FUN_141f14ce0(void)

void FUN_141f14ce0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined2 local_10;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  
  local_18 = *(undefined8 *)(param_1 + 0x40);
  iVar2 = *(int *)(param_2 + 8);
  local_e = 2;
  local_10 = 0xffff;
  local_d = *(undefined1 *)(param_4 + 0xb);
  local_c = *(undefined4 *)(param_4 + 0xc);
  FUN_141f08a10(param_2,&local_18);
  if (iVar2 != *(int *)(param_2 + 8)) {
    iVar2 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x54);
    puVar1 = (undefined8 *)(*param_3 + (longlong)iVar2 * 0x10);
    *puVar1 = *(undefined8 *)(param_1 + 0x4c);
    puVar1[1] = uVar3;
  }
  return;
}



// FUNCTION 141f14d80 FUN_141f14d80 body=160 status=ok
// SIG undefined FUN_141f14d80(void)

void FUN_141f14d80(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined2 local_10;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  
  local_18 = *(undefined8 *)(param_1 + 0xa0);
  iVar2 = *(int *)(param_2 + 8);
  local_e = 2;
  local_10 = 0xffff;
  local_d = *(undefined1 *)(param_4 + 0xb);
  local_c = *(undefined4 *)(param_4 + 0xc);
  FUN_141f08a10(param_2,&local_18);
  if (iVar2 != *(int *)(param_2 + 8)) {
    iVar2 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0xb4);
    puVar1 = (undefined8 *)(*param_3 + (longlong)iVar2 * 0x10);
    *puVar1 = *(undefined8 *)(param_1 + 0xac);
    puVar1[1] = uVar3;
  }
  return;
}



// FUNCTION 141f14e20 FUN_141f14e20 body=160 status=ok
// SIG undefined FUN_141f14e20(void)

void FUN_141f14e20(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined2 local_10;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  
  local_18 = *(undefined8 *)(param_1 + 0xa0);
  iVar2 = *(int *)(param_2 + 8);
  local_e = 2;
  local_10 = 0xffff;
  local_d = *(undefined1 *)(param_4 + 0xb);
  local_c = *(undefined4 *)(param_4 + 0xc);
  FUN_141f08a10(param_2,&local_18);
  if (iVar2 != *(int *)(param_2 + 8)) {
    iVar2 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    puVar1 = (undefined8 *)(*param_3 + (longlong)iVar2 * 0x10);
    *puVar1 = *(undefined8 *)(param_1 + 0xb8);
    puVar1[1] = uVar3;
  }
  return;
}



// FUNCTION 141f14ec0 FUN_141f14ec0 body=157 status=ok
// SIG undefined FUN_141f14ec0(void)

void FUN_141f14ec0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined2 local_10;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  
  iVar2 = *(int *)(param_2 + 8);
  local_18 = DAT_146ac8b28;
  local_e = 2;
  local_10 = 0xffff;
  local_d = *(undefined1 *)(param_4 + 0xb);
  local_c = *(undefined4 *)(param_4 + 0xc);
  FUN_141f08a10(param_2,&local_18);
  if (iVar2 != *(int *)(param_2 + 8)) {
    iVar2 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    puVar1 = (undefined8 *)(*param_3 + (longlong)iVar2 * 0x10);
    *puVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar1[1] = uVar3;
  }
  return;
}



// FUNCTION 141f14f60 FUN_141f14f60 body=1931 status=ok
// SIG undefined FUN_141f14f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141f14f60(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined1 auStack_230 [8];
  undefined1 local_228 [8];
  undefined1 auStack_220 [8];
  undefined1 local_218 [8];
  undefined1 auStack_210 [8];
  undefined1 local_208 [8];
  undefined1 auStack_200 [8];
  undefined1 local_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined1 local_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 local_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 local_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 local_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
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
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac8f38) && (_Init_thread_header(&DAT_146ac8f38), DAT_146ac8f38 == -1))
  {
    FName::FName(&local_238,L"TBasePassVSFNoLightMapPolicy",1);
    FName::FName(auStack_230,L"TBasePassPSFNoLightMapPolicy",1);
    FName::FName(local_228,L"TBasePassVSFCachedPointIndirectLightingPolicy",1);
    FName::FName(auStack_220,L"TBasePassPSFCachedPointIndirectLightingPolicy",1);
    FName::FName(local_218,L"TShadowDepthVSVertexShadowDepth_OutputDepthfalse",1);
    FName::FName(auStack_210,L"TShadowDepthVSVertexShadowDepth_OutputDepthtrue",1);
    FName::FName(local_208,L"TShadowDepthPSPixelShadowDepth_NonPerspectiveCorrectfalse",1);
    FName::FName(auStack_200,L"TShadowDepthPSPixelShadowDepth_NonPerspectiveCorrecttrue",1);
    FName::FName(local_1f8,L"TBasePassPSFSimpleDirectionalLightLightingPolicy",1);
    FName::FName(auStack_1f0,L"TBasePassPSFSimpleDirectionalLightLightingPolicySkylight",1);
    FName::FName(local_1e8,L"TBasePassVSFSimpleDirectionalLightLightingPolicy",1);
    FName::FName(auStack_1e0,L"TBasePassPSFSimpleNoLightmapLightingPolicy",1);
    FName::FName(local_1d8,L"TBasePassPSFSimpleNoLightmapLightingPolicySkylight",1);
    FName::FName(auStack_1d0,L"TBasePassVSFSimpleNoLightmapLightingPolicy",1);
    FName::FName(local_1c8,L"TBasePassVSFSimpleNoLightmapLightingPolicyAtmosphericFog",1);
    FName::FName(auStack_1c0,L"TDepthOnlyVS<false>",1);
    FName::FName(local_1b8,L"TDepthOnlyVS<true>",1);
    FName::FName(auStack_1b0,L"FDepthOnlyPS",1);
    FName::FName(local_1a8,L"FHitProxyVS",1);
    FName::FName(auStack_1a0,L"FHitProxyPS",1);
    FName::FName(local_198,L"TBasePassPSFSimpleStationaryLightSingleSampleShadowsLightingPolicy",1);
    FName::FName(local_190,
                 L"TBasePassPSFSimpleStationaryLightSingleSampleShadowsLightingPolicySkylight",1);
    FName::FName(local_188,L"TBasePassVSFSimpleStationaryLightSingleSampleShadowsLightingPolicy",1);
    FName::FName(local_180,L"TBasePassPSFSimpleStationaryLightPrecomputedShadowsLightingPolicy",1);
    FName::FName(local_178,
                 L"TBasePassPSFSimpleStationaryLightPrecomputedShadowsLightingPolicySkylight",1);
    FName::FName(local_170,L"TBasePassVSFSimpleStationaryLightPrecomputedShadowsLightingPolicy",1);
    FName::FName(local_168,L"TBasePassVSFNoLightMapPolicyAtmosphericFog",1);
    FName::FName(local_160,L"TBasePassDSFNoLightMapPolicy",1);
    FName::FName(local_158,L"TBasePassHSFNoLightMapPolicy",1);
    FName::FName(local_150,L"TLightMapDensityVSFNoLightMapPolicy",1);
    FName::FName(local_148,L"TLightMapDensityPSFNoLightMapPolicy",1);
    FName::FName(local_140,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightCSMLightingPolicyINT32_MAXHDRLinear64Skylight"
                 ,1);
    FName::FName(local_138,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightCSMLightingPolicyINT32_MAXHDRLinear64"
                 ,1);
    FName::FName(local_130,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightCSMLightingPolicy0HDRLinear64Skylight"
                 ,1);
    FName::FName(local_128,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightCSMLightingPolicy0HDRLinear64",1);
    FName::FName(local_120,
                 L"TMobileBasePassVSFMobileMovableDirectionalLightCSMLightingPolicyHDRLinear64",1);
    FName::FName(local_118,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightLightingPolicyINT32_MAXHDRLinear64Skylight"
                 ,1);
    FName::FName(local_110,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightLightingPolicyINT32_MAXHDRLinear64"
                 ,1);
    FName::FName(local_108,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightLightingPolicy0HDRLinear64Skylight"
                 ,1);
    FName::FName(local_100,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightLightingPolicy0HDRLinear64",1);
    FName::FName(local_f8,
                 L"TMobileBasePassVSFMobileMovableDirectionalLightLightingPolicyHDRLinear64",1);
    FName::FName(local_f0,
                 L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyINT32_MAXHDRLinear64Skylight"
                 ,1);
    FName::FName(local_e8,
                 L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyINT32_MAXHDRLinear64"
                 ,1);
    FName::FName(local_e0,
                 L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicy0HDRLinear64Skylight"
                 ,1);
    FName::FName(local_d8,
                 L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicy0HDRLinear64",1);
    FName::FName(local_d0,
                 L"TMobileBasePassVSFMobileDirectionalLightCSMAndSHIndirectPolicyHDRLinear64",1);
    FName::FName(local_c8,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightCSMAndSHIndirectPolicyINT32_MAXHDRLinear64Skylight"
                 ,1);
    FName::FName(local_c0,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightCSMAndSHIndirectPolicyINT32_MAXHDRLinear64"
                 ,1);
    FName::FName(local_b8,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightCSMAndSHIndirectPolicy0HDRLinear64Skylight"
                 ,1);
    FName::FName(local_b0,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightCSMAndSHIndirectPolicy0HDRLinear64"
                 ,1);
    FName::FName(local_a8,
                 L"TMobileBasePassVSFMobileMovableDirectionalLightCSMAndSHIndirectPolicyHDRLinear64"
                 ,1);
    FName::FName(local_a0,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightAndSHIndirectPolicyINT32_MAXHDRLinear64Skylight"
                 ,1);
    FName::FName(local_98,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightAndSHIndirectPolicyINT32_MAXHDRLinear64"
                 ,1);
    FName::FName(local_90,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightAndSHIndirectPolicy0HDRLinear64Skylight"
                 ,1);
    FName::FName(local_88,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightAndSHIndirectPolicy0HDRLinear64",1
                );
    FName::FName(local_80,
                 L"TMobileBasePassVSFMobileMovableDirectionalLightAndSHIndirectPolicyHDRLinear64",1)
    ;
    FName::FName(local_78,
                 L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyINT32_MAXHDRLinear64Skylight"
                 ,1);
    FName::FName(local_70,
                 L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyINT32_MAXHDRLinear64",
                 1);
    FName::FName(local_68,
                 L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicy0HDRLinear64Skylight",
                 1);
    FName::FName(local_60,L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicy0HDRLinear64"
                 ,1);
    FName::FName(local_58,L"TMobileBasePassVSFMobileDirectionalLightAndSHIndirectPolicyHDRLinear64",
                 1);
    FName::FName(local_50,L"TMobileBasePassPSFNoLightMapPolicyINT32_MAXHDRLinear64Skylight",1);
    FName::FName(local_48,L"TMobileBasePassPSFNoLightMapPolicyINT32_MAXHDRLinear64",1);
    FName::FName(local_40,L"TMobileBasePassPSFNoLightMapPolicy0HDRLinear64Skylight",1);
    FName::FName(local_38,L"TMobileBasePassPSFNoLightMapPolicy0HDRLinear64",1);
    FName::FName(local_30,L"TMobileBasePassVSFNoLightMapPolicyHDRLinear64",1);
    FName::FName(local_28,L"TBasePassPSFCachedPointIndirectLightingPolicySkylight",1);
    FName::FName(local_20,L"TBasePassPSFNoLightMapPolicySkylight",1);
    DAT_146ac8f28 = (undefined8 *)0x0;
    _DAT_146ac8f30 = 0x44;
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&DAT_146ac8f28,0x44);
    lVar4 = 4;
    puVar2 = &local_238;
    puVar3 = DAT_146ac8f28;
    do {
      puVar6 = puVar3;
      puVar5 = puVar2;
      uVar1 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar1;
      uVar1 = puVar5[3];
      puVar6[2] = puVar5[2];
      puVar6[3] = uVar1;
      uVar1 = puVar5[5];
      puVar6[4] = puVar5[4];
      puVar6[5] = uVar1;
      uVar1 = puVar5[7];
      puVar6[6] = puVar5[6];
      puVar6[7] = uVar1;
      uVar1 = puVar5[9];
      puVar6[8] = puVar5[8];
      puVar6[9] = uVar1;
      uVar1 = puVar5[0xb];
      puVar6[10] = puVar5[10];
      puVar6[0xb] = uVar1;
      uVar1 = puVar5[0xd];
      puVar6[0xc] = puVar5[0xc];
      puVar6[0xd] = uVar1;
      uVar1 = puVar5[0xf];
      puVar6[0xe] = puVar5[0xe];
      puVar6[0xf] = uVar1;
      lVar4 = lVar4 + -1;
      puVar2 = puVar5 + 0x10;
      puVar3 = puVar6 + 0x10;
    } while (lVar4 != 0);
    uVar1 = puVar5[0x11];
    puVar6[0x10] = puVar5[0x10];
    puVar6[0x11] = uVar1;
    uVar1 = puVar5[0x13];
    puVar6[0x12] = puVar5[0x12];
    puVar6[0x13] = uVar1;
    atexit((_func_5014 *)&LAB_143ea2420);
    _Init_thread_footer(&DAT_146ac8f38);
  }
  return &DAT_146ac8f28;
}



// FUNCTION 141f156f0 FUN_141f156f0 body=225 status=ok
// SIG undefined FUN_141f156f0(void)

undefined8
FUN_141f156f0(undefined8 param_1,longlong param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *(float *)(param_2 + 0x4e4) * 0.5;
  fVar5 = ABS((float)*(undefined8 *)(param_2 + 0x8dc) - *param_3);
  fVar6 = *(float *)(param_2 + 0x4d0) * 0.5;
  if (fVar6 <= fVar4) {
    fVar6 = fVar4;
  }
  fVar3 = ABS(*(float *)(param_2 + 0x8e4) - param_3[2]);
  fVar6 = fVar6 * param_5;
  fVar7 = ABS((float)((ulonglong)*(undefined8 *)(param_2 + 0x8dc) >> 0x20) - param_3[1]);
  fVar4 = fVar5;
  if (param_4 <= fVar5) {
    fVar4 = param_4;
  }
  fVar2 = fVar7;
  if (param_4 <= fVar7) {
    fVar2 = param_4;
  }
  fVar1 = fVar3;
  if (param_4 <= fVar3) {
    fVar1 = param_4;
  }
  fVar4 = (fVar7 - fVar2) * (fVar7 - fVar2) + (fVar5 - fVar4) * (fVar5 - fVar4) +
          (fVar3 - fVar1) * (fVar3 - fVar1);
  if (fVar4 <= 1.0) {
    fVar4 = 1.0;
  }
  fVar4 = ((fVar6 + fVar6) * fVar6) / fVar4;
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  return CONCAT44(*(undefined4 *)(param_2 + 0x4d4),fVar4);
}



// FUNCTION 141f157e0 FUN_141f157e0 body=267 status=ok
// SIG undefined FUN_141f157e0(void)

char * FUN_141f157e0(longlong param_1,char *param_2,undefined8 param_3,float param_4,int param_5,
                    undefined8 param_6)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  float fVar6;
  
  param_2[0] = '\x7f';
  param_2[1] = '\x7f';
  lVar4 = FUN_14274f0c0(param_3);
  iVar3 = param_5;
  pfVar2 = (float *)CONCAT71(param_6._1_7_,(char)param_6);
  *pfVar2 = 0.0;
  if (param_5 < 0) {
    if ((*(uint *)(*(longlong *)(lVar4 + 0x10) + 0x2c) & 0x800) != 0) {
      fVar6 = (float)FUN_141f156f0(param_1,lVar4,*(longlong *)(param_1 + 0x578) + 0x1d0,
                                   *(undefined4 *)(param_1 + 0x420),
                                   *(undefined4 *)(*(longlong *)(param_1 + 0x578) + 0x1e8));
      *pfVar2 = fVar6;
      if (*(char *)(param_1 + 0x434) == '\0') {
        param_2[0] = '\0';
        param_2[1] = '\0';
      }
      else {
        bVar1 = fVar6 < param_4 * *(float *)(param_1 + 0x430);
        *param_2 = bVar1;
        param_2[1] = bVar1;
      }
    }
  }
  else {
    param_5 = CONCAT31(param_5._1_3_,0x7f);
    param_6._0_1_ = '\0';
    FUN_141d36430(*(undefined8 *)(param_1 + 0x140),&param_5,&param_6);
    cVar5 = (char)iVar3;
    if (((char)param_5 <= cVar5) && (param_5._0_1_ = (char)param_6, cVar5 < (char)param_6)) {
      param_5._0_1_ = cVar5;
    }
    *param_2 = (char)param_5;
    param_2[1] = (char)param_5;
  }
  return param_2;
}



// FUNCTION 141f158f0 FUN_141f158f0 body=462 status=ok
// SIG undefined FUN_141f158f0(void)

char * FUN_141f158f0(longlong param_1,char *param_2,undefined8 param_3,float param_4,int param_5,
                    undefined8 param_6,float param_7,float param_8,undefined8 param_9,char param_10)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  char local_res10 [8];
  
  iVar1 = param_5;
  param_2[0] = '\x7f';
  param_2[1] = '\x7f';
  if (param_5 < 0) {
    if (param_10 == '\0') {
      param_5 = CONCAT31(param_5._1_3_,0x7f);
      local_res10[0] = '\0';
      FUN_141d36430(*(undefined8 *)(param_1 + 0x140),&param_5,local_res10);
    }
    else if (*(char *)(param_1 + 0x434) == '\0') {
      param_5._0_1_ = '\0';
    }
    else {
      lVar4 = FUN_14274f0c0(param_3);
      lVar2 = *(longlong *)(param_1 + 0x140);
      lVar5 = 0;
      iVar1 = *(int *)(lVar2 + 0xe8);
      if ((-1 < iVar1) && (iVar1 < *(int *)(lVar4 + 0x1a50))) {
        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1a48) + (longlong)iVar1 * 8);
      }
      if (lVar5 == 0) {
        fVar8 = (float)FUN_141f156f0(param_1,lVar4,*(longlong *)(param_1 + 0x578) + 0x1d0,
                                     *(undefined4 *)(param_1 + 0x420),
                                     *(undefined4 *)(*(longlong *)(param_1 + 0x578) + 0x1e8));
        bVar3 = param_4 * *(float *)(param_1 + 0x430) <= fVar8;
      }
      else {
        param_4 = param_4 * *(float *)(param_1 + 0x430);
        bVar3 = param_4 < *(float *)(lVar5 + 4) || param_4 == *(float *)(lVar5 + 4);
      }
      bVar7 = !bVar3;
      if (!bVar7) {
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x10);
        if (((*(byte *)(lVar2 + 0x8c) & 0x20) != 0) &&
           (fVar8 = *(float *)(lVar2 + 0xb4), fVar8 != 0.0)) {
          fVar9 = DAT_1464ce03c;
          if (DAT_1464ce03c == -1.0) {
            fVar9 = 1.0;
          }
          if (fVar8 < fVar9 * (param_8 / param_7)) {
            bVar3 = false;
          }
        }
        bVar7 = !bVar3;
      }
      param_5._0_1_ = bVar7 + '\x02';
    }
  }
  else {
    param_5 = CONCAT31(param_5._1_3_,0x7f);
    local_res10[0] = '\0';
    FUN_141d36430(*(undefined8 *)(param_1 + 0x140),&param_5,local_res10);
    cVar6 = (char)iVar1;
    if (((char)param_5 <= cVar6) && (param_5._0_1_ = local_res10[0], cVar6 < local_res10[0])) {
      param_5._0_1_ = cVar6;
    }
  }
  *param_2 = (char)param_5;
  param_2[1] = (char)param_5;
  return param_2;
}



// FUNCTION 141f15ac0 FUN_141f15ac0 body=1171 status=ok
// SIG undefined FUN_141f15ac0(void)

void FUN_141f15ac0(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  ulonglong in_stack_fffffffffffffee8;
  undefined4 uVar10;
  undefined8 *puVar11;
  int local_f8;
  undefined1 local_f4 [4];
  undefined1 local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  longlong local_e8;
  undefined *local_d8;
  float fStack_d0;
  undefined8 uStack_cc;
  float local_c4;
  undefined1 local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  float local_a0;
  float local_94;
  undefined1 local_90 [88];
  
  local_f8 = 0;
  if (0 < (int)param_2[1]) {
    uVar8 = 1;
    local_e8 = 0;
    do {
      if ((param_4 & uVar8) != 0) {
        local_b8 = &DAT_14060d670;
        local_f4[0] = 0;
        lVar1 = *(longlong *)(local_e8 + *param_2);
        uStack_b0._0_4_ = SUB84(local_f4,0);
        uStack_b0._4_4_ = (undefined4)((ulonglong)local_f4 >> 0x20);
        local_d8 = &DAT_14060d670;
        fStack_d0 = (float)(undefined4)uStack_b0;
        uStack_cc = CONCAT44(uStack_cc._4_4_,uStack_b0._4_4_);
        uStack_b0 = local_f4;
        lVar4 = FUN_1415d8310(&local_d8,&DAT_146216a38);
        puVar5 = (undefined8 *)operator_new(0x18,lVar4 + 0x18,1);
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          puVar5[2] = 0;
          *puVar5 = &PTR_FUN_144eefbb8;
          puVar5[1] = 0;
          puVar5[2] = 0;
        }
        iVar3 = (int)param_5[0x1a];
        *(int *)(param_5 + 0x1a) = iVar3 + 1;
        if (*(int *)((longlong)param_5 + 0xd4) < iVar3 + 1) {
          FUN_140822430(param_5 + 0x19,iVar3);
        }
        uVar10 = (undefined4)(in_stack_fffffffffffffee8 >> 0x20);
        *(undefined8 **)(param_5[0x19] + (longlong)iVar3 * 8) = puVar5;
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x140) + 0xe8);
        if (((-1 < iVar3) && (iVar3 < *(int *)(lVar1 + 0x1a50))) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x1a48) + (longlong)iVar3 * 8), lVar4 != 0))
        {
          puVar11 = puVar5 + 1;
          iVar3 = *(int *)(param_1 + 0x450) * *(int *)(param_1 + 0x450) + *(int *)(puVar5 + 2);
          *(int *)(puVar5 + 2) = iVar3;
          if (*(int *)((longlong)puVar5 + 0x14) < iVar3) {
            FUN_141ddd110(puVar11);
          }
          bVar2 = false;
          if (*(char *)(param_1 + 0x434) != '\0') {
            fVar9 = (float)FUN_141f156f0(param_1,lVar1,*(longlong *)(param_1 + 0x578) + 0x1d0,
                                         *(undefined4 *)(param_1 + 0x420),
                                         CONCAT44(uVar10,*(undefined4 *)
                                                          (*(longlong *)(param_1 + 0x578) + 0x1e8)))
            ;
            bVar2 = fVar9 < *(float *)(lVar1 + 0x11ec) * *(float *)(param_1 + 0x430);
          }
          iVar3 = FUN_1408bed80(param_5,1);
          uVar7 = (ulonglong)(uint)(iVar3 % 0x59) * 0xb8 +
                  *(longlong *)(*param_5 + (longlong)(iVar3 / 0x59) * 8);
          puVar5 = *(undefined8 **)(param_1 + 0x558);
          if (bVar2) {
            if (puVar5 == (undefined8 *)0x0) {
              puVar5 = (undefined8 *)(param_1 + 0x548);
            }
            puVar5 = puVar5 + 1;
          }
          else if (puVar5 == (undefined8 *)0x0) {
            puVar5 = (undefined8 *)(param_1 + 0x548);
          }
          in_stack_fffffffffffffee8 = uVar7;
          FUN_141f11000(param_1,lVar4,0,*puVar5,uVar7,puVar11);
          if (((DAT_146ac8ae9 != '\0') || ((*(uint *)(param_1 + 0x18) & 0x300) != 0)) ||
             ((~(byte)(*(uint *)(param_1 + 0x18) >> 0x1c) & 1) == 0)) {
            *(uint *)(uVar7 + 0x8c) = *(uint *)(uVar7 + 0x8c) | 0x200000;
            *(uint *)(uVar7 + 0x8c) =
                 -(uint)((*(uint *)(param_1 + 0x18) & 0x300) != 0) & 0x400000 |
                 *(uint *)(uVar7 + 0x8c) & 0xffbfffff;
            FUN_142747330(param_5,local_f8,uVar7);
            if (0 < (int)*(uint *)(uVar7 + 0x80)) {
              uVar7 = (ulonglong)*(uint *)(uVar7 + 0x80);
              do {
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
          }
          if (DAT_146ac8ae8 != '\0') {
            local_ef = 0xffff;
            local_f0 = 0;
            local_ed = 0xff;
            FLinearColor::FLinearColor(local_90,&local_f0);
            local_c4 = *(float *)(param_1 + 200) + *(float *)(param_1 + 0xd4);
            fStack_d0 = *(float *)(param_1 + 200) - *(float *)(param_1 + 0xd4);
            local_c0 = 1;
            local_d8 = (undefined *)
                       CONCAT44(*(float *)(param_1 + 0xc4) - *(float *)(param_1 + 0xd0),
                                *(float *)(param_1 + 0xc0) - *(float *)(param_1 + 0xcc));
            plVar6 = (longlong *)param_5[0x11];
            if ((longlong *)param_5[0x11] == (longlong *)0x0) {
              plVar6 = param_5 + 0xf;
            }
            uStack_cc = CONCAT44(*(float *)(param_1 + 0xc4) + *(float *)(param_1 + 0xd0),
                                 *(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xcc));
            in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffff00000000;
            local_a0 = fStack_d0;
            local_94 = local_c4;
            FUN_1427055a0(*(undefined8 *)((longlong)plVar6 + local_e8),&local_d8,local_90,0,
                          in_stack_fffffffffffffee8,(ulonglong)puVar11 & 0xffffffff00000000,0);
          }
        }
      }
      local_f8 = local_f8 + 1;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      local_e8 = local_e8 + 8;
    } while (local_f8 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 141f15f60 FUN_141f15f60 body=4083 status=ok
// SIG undefined FUN_141f15f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141f15f60(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_508 [32];
  undefined8 local_4e8;
  undefined1 auStack_4e0 [8];
  undefined1 local_4d8 [8];
  undefined1 auStack_4d0 [8];
  undefined1 local_4c8 [8];
  undefined1 auStack_4c0 [8];
  undefined1 local_4b8 [8];
  undefined1 auStack_4b0 [8];
  undefined1 local_4a8 [8];
  undefined1 auStack_4a0 [8];
  undefined1 local_498 [8];
  undefined1 auStack_490 [8];
  undefined1 local_488 [8];
  undefined1 auStack_480 [8];
  undefined1 local_478 [8];
  undefined1 auStack_470 [8];
  undefined1 local_468 [8];
  undefined1 auStack_460 [8];
  undefined1 local_458 [8];
  undefined1 auStack_450 [8];
  undefined1 local_448 [8];
  undefined1 auStack_440 [8];
  undefined1 local_438 [8];
  undefined1 auStack_430 [8];
  undefined1 local_428 [8];
  undefined1 local_420 [8];
  undefined1 local_418 [8];
  undefined1 local_410 [8];
  undefined1 local_408 [8];
  undefined1 local_400 [8];
  undefined1 local_3f8 [8];
  undefined1 local_3f0 [8];
  undefined1 local_3e8 [8];
  undefined1 local_3e0 [8];
  undefined1 local_3d8 [8];
  undefined1 local_3d0 [8];
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [8];
  undefined1 local_3b0 [8];
  undefined1 local_3a8 [8];
  undefined1 local_3a0 [8];
  undefined1 local_398 [8];
  undefined1 local_390 [8];
  undefined1 local_388 [8];
  undefined1 local_380 [8];
  undefined1 local_378 [8];
  undefined1 local_370 [8];
  undefined1 local_368 [8];
  undefined1 local_360 [8];
  undefined1 local_358 [8];
  undefined1 local_350 [8];
  undefined1 local_348 [8];
  undefined1 local_340 [8];
  undefined1 local_338 [8];
  undefined1 local_330 [8];
  undefined1 local_328 [8];
  undefined1 local_320 [8];
  undefined1 local_318 [8];
  undefined1 local_310 [8];
  undefined1 local_308 [8];
  undefined1 local_300 [8];
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
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
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  undefined1 local_240 [8];
  undefined1 local_238 [8];
  undefined1 local_230 [8];
  undefined1 local_228 [8];
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
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
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_508;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac8f50) && (_Init_thread_header(&DAT_146ac8f50), DAT_146ac8f50 == -1))
  {
    FName::FName(&local_4e8,L"FDebugViewModeVS",1);
    FName::FName(auStack_4e0,L"FConvertToUniformMeshVS",1);
    FName::FName(local_4d8,L"FConvertToUniformMeshGS",1);
    FName::FName(auStack_4d0,L"FVelocityVS",1);
    FName::FName(local_4c8,L"FVelocityPS",1);
    FName::FName(auStack_4c0,L"TLightMapDensityVSFDummyLightMapPolicy",1);
    FName::FName(local_4b8,L"TLightMapDensityPSFDummyLightMapPolicy",1);
    FName::FName(auStack_4b0,L"TLightMapDensityPSTLightMapPolicyHQ",1);
    FName::FName(local_4a8,L"TLightMapDensityVSTLightMapPolicyHQ",1);
    FName::FName(auStack_4a0,L"TLightMapDensityPSTLightMapPolicyLQ",1);
    FName::FName(local_498,L"TLightMapDensityVSTLightMapPolicyLQ",1);
    FName::FName(auStack_490,L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQ",1);
    FName::FName(local_488,L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQSkylight",1);
    FName::FName(auStack_480,L"TBasePassVSTDistanceFieldShadowsAndLightMapPolicyHQ",1);
    FName::FName(local_478,L"TBasePassPSTLightMapPolicyHQ",1);
    FName::FName(auStack_470,L"TBasePassPSTLightMapPolicyHQSkylight",1);
    FName::FName(local_468,L"TBasePassVSTLightMapPolicyHQ",1);
    FName::FName(auStack_460,L"TBasePassPSTLightMapPolicyLQ",1);
    FName::FName(local_458,L"TBasePassPSTLightMapPolicyLQSkylight",1);
    FName::FName(auStack_450,L"TBasePassVSTLightMapPolicyLQ",1);
    FName::FName(local_448,
                 L"TBasePassVSFSimpleStationaryLightVolumetricLightmapShadowsLightingPolicy",1);
    FName::FName(auStack_440,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightCSMWithLightmapPolicyINT32_MAXHDRLinear64Skylight"
                 ,1);
    FName::FName(local_438,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightCSMWithLightmapPolicyINT32_MAXHDRLinear64"
                 ,1);
    FName::FName(auStack_430,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightCSMWithLightmapPolicy0HDRLinear64Skylight"
                 ,1);
    FName::FName(local_428,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightCSMWithLightmapPolicy0HDRLinear64"
                 ,1);
    FName::FName(local_420,
                 L"TMobileBasePassVSFMobileMovableDirectionalLightCSMWithLightmapPolicyHDRLinear64",
                 1);
    FName::FName(local_418,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightWithLightmapPolicyINT32_MAXHDRLinear64Skylight"
                 ,1);
    FName::FName(local_410,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightWithLightmapPolicyINT32_MAXHDRLinear64"
                 ,1);
    FName::FName(local_408,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightWithLightmapPolicy0HDRLinear64Skylight"
                 ,1);
    FName::FName(local_400,
                 L"TMobileBasePassPSFMobileMovableDirectionalLightWithLightmapPolicy0HDRLinear64",1)
    ;
    FName::FName(local_3f8,
                 L"TMobileBasePassVSFMobileMovableDirectionalLightWithLightmapPolicyHDRLinear64",1);
    FName::FName(local_3f0,
                 L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyINT32_MAXHDRLinear64Skylight"
                 ,1);
    FName::FName(local_3e8,
                 L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyINT32_MAXHDRLinear64"
                 ,1);
    FName::FName(local_3e0,
                 L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicy0HDRLinear64Skylight"
                 ,1);
    FName::FName(local_3d8,
                 L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicy0HDRLinear64"
                 ,1);
    FName::FName(local_3d0,
                 L"TMobileBasePassVSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyHDRLinear64"
                 ,1);
    FName::FName(local_3c8,
                 L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyINT32_MAXHDRLinear64Skylight"
                 ,1);
    FName::FName(local_3c0,
                 L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyINT32_MAXHDRLinear64"
                 ,1);
    FName::FName(local_3b8,
                 L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicy0HDRLinear64Skylight"
                 ,1);
    FName::FName(local_3b0,
                 L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicy0HDRLinear64",1);
    FName::FName(local_3a8,
                 L"TMobileBasePassVSFMobileDistanceFieldShadowsAndLQLightMapPolicyHDRLinear64",1);
    FName::FName(local_3a0,L"TMobileBasePassPSTLightMapPolicyLQINT32_MAXHDRLinear64Skylight",1);
    FName::FName(local_398,L"TMobileBasePassPSTLightMapPolicyLQINT32_MAXHDRLinear64",1);
    FName::FName(local_390,L"TMobileBasePassPSTLightMapPolicyLQ0HDRLinear64Skylight",1);
    FName::FName(local_388,L"TMobileBasePassPSTLightMapPolicyLQ0HDRLinear64",1);
    FName::FName(local_380,L"TMobileBasePassVSTLightMapPolicyLQHDRLinear64",1);
    FName::FName(local_378,L"TBasePassVSFCachedVolumeIndirectLightingPolicy",1);
    FName::FName(local_370,L"TBasePassPSFCachedVolumeIndirectLightingPolicy",1);
    FName::FName(local_368,L"TBasePassPSFCachedVolumeIndirectLightingPolicySkylight",1);
    FName::FName(local_360,L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicySkylight",1);
    FName::FName(local_358,L"TBasePassVSFPrecomputedVolumetricLightmapLightingPolicy",1);
    FName::FName(local_350,L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicy",1);
    FName::FName(local_348,
                 L"TBasePassPSFSimpleStationaryLightVolumetricLightmapShadowsLightingPolicy",1);
    FName::FName(local_340,L"TBasePassVSFCachedPointIndirectLightingPolicyAtmosphericFog",1);
    FName::FName(local_338,L"TBasePassVSFSelfShadowedCachedPointIndirectLightingPolicy",1);
    FName::FName(local_330,L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicy",1);
    FName::FName(local_328,L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicySkylight",1);
    FName::FName(local_320,
                 L"TBasePassVSFSelfShadowedCachedPointIndirectLightingPolicyAtmosphericFog",1);
    FName::FName(local_318,L"TBasePassVSFSelfShadowedTranslucencyPolicy",1);
    FName::FName(local_310,L"TBasePassPSFSelfShadowedTranslucencyPolicy",1);
    FName::FName(local_308,L"TBasePassPSFSelfShadowedTranslucencyPolicySkylight",1);
    FName::FName(local_300,L"TBasePassVSFSelfShadowedTranslucencyPolicyAtmosphericFog",1);
    FName::FName(local_2f8,L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrectfalse",1);
    FName::FName(local_2f0,L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrecttrue",1);
    FName::FName(local_2e8,L"TShadowDepthVSVertexShadowDepth_OnePassPointLightfalse",1);
    FName::FName(local_2e0,L"TShadowDepthPSPixelShadowDepth_PerspectiveCorrectfalse",1);
    FName::FName(local_2d8,L"TShadowDepthPSPixelShadowDepth_PerspectiveCorrecttrue",1);
    FName::FName(local_2d0,L"TShadowDepthPSPixelShadowDepth_OnePassPointLightfalse",1);
    FName::FName(local_2c8,L"TShadowDepthPSPixelShadowDepth_OnePassPointLighttrue",1);
    FName::FName(local_2c0,L"TShadowDepthVSForGSVertexShadowDepth_OutputDepthfalse",1);
    FName::FName(local_2b8,L"TShadowDepthVSForGSVertexShadowDepth_OutputDepthtrue",1);
    FName::FName(local_2b0,L"TShadowDepthVSForGSVertexShadowDepth_PerspectiveCorrectfalse",1);
    FName::FName(local_2a8,L"TShadowDepthVSForGSVertexShadowDepth_PerspectiveCorrecttrue",1);
    FName::FName(local_2a0,L"TShadowDepthVSForGSVertexShadowDepth_OnePassPointLightfalse",1);
    FName::FName(local_298,L"FOnePassPointShadowDepthGS",1);
    FName::FName(local_290,L"TTranslucencyShadowDepthVS<TranslucencyShadowDepth_Standard>",1);
    FName::FName(local_288,L"TTranslucencyShadowDepthPS<TranslucencyShadowDepth_Standard>",1);
    FName::FName(local_280,L"TTranslucencyShadowDepthVS<TranslucencyShadowDepth_PerspectiveCorrect>"
                 ,1);
    FName::FName(local_278,L"TTranslucencyShadowDepthPS<TranslucencyShadowDepth_PerspectiveCorrect>"
                 ,1);
    FName::FName(local_270,L"TShadowDepthVSForGSVertexShadowDepth_OnePassPointLightPositionOnly",1);
    FName::FName(local_268,L"TShadowDepthVSVertexShadowDepth_OnePassPointLightPositionOnly",1);
    FName::FName(local_260,L"TShadowDepthVSVertexShadowDepth_OutputDepthPositionOnly",1);
    FName::FName(local_258,L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrectPositionOnly",1);
    FName::FName(local_250,L"TBasePassVSTDistanceFieldShadowsAndLightMapPolicyHQAtmosphericFog",1);
    FName::FName(local_248,L"TBasePassVSTLightMapPolicyHQAtmosphericFog",1);
    FName::FName(local_240,L"TBasePassVSTLightMapPolicyLQAtmosphericFog",1);
    FName::FName(local_238,L"TBasePassVSFPrecomputedVolumetricLightmapLightingPolicyAtmosphericFog",
                 1);
    FName::FName(local_230,L"TBasePassPSFSelfShadowedVolumetricLightmapPolicy",1);
    FName::FName(local_228,L"TBasePassPSFSelfShadowedVolumetricLightmapPolicySkylight",1);
    FName::FName(local_220,L"TBasePassVSFSelfShadowedVolumetricLightmapPolicyAtmosphericFog",1);
    FName::FName(local_218,L"TBasePassVSFSelfShadowedVolumetricLightmapPolicy",1);
    FName::FName(local_210,L"TBasePassPSFSimpleLightmapOnlyLightingPolicy",1);
    FName::FName(local_208,L"TBasePassPSFSimpleLightmapOnlyLightingPolicySkylight",1);
    FName::FName(local_200,L"TBasePassVSFSimpleLightmapOnlyLightingPolicy",1);
    FName::FName(local_1f8,L"TShadowDepthDSVertexShadowDepth_OnePassPointLightfalse",1);
    FName::FName(local_1f0,L"TShadowDepthHSVertexShadowDepth_OnePassPointLightfalse",1);
    FName::FName(local_1e8,L"TShadowDepthDSVertexShadowDepth_OutputDepthfalse",1);
    FName::FName(local_1e0,L"TShadowDepthHSVertexShadowDepth_OutputDepthfalse",1);
    FName::FName(local_1d8,L"TShadowDepthDSVertexShadowDepth_OutputDepthtrue",1);
    FName::FName(local_1d0,L"TShadowDepthHSVertexShadowDepth_OutputDepthtrue",1);
    FName::FName(local_1c8,L"TShadowDepthDSVertexShadowDepth_PerspectiveCorrectfalse",1);
    FName::FName(local_1c0,L"TShadowDepthHSVertexShadowDepth_PerspectiveCorrectfalse",1);
    FName::FName(local_1b8,L"TShadowDepthDSVertexShadowDepth_PerspectiveCorrecttrue",1);
    FName::FName(local_1b0,L"TShadowDepthHSVertexShadowDepth_PerspectiveCorrecttrue",1);
    FName::FName(local_1a8,L"FVelocityDS",1);
    FName::FName(local_1a0,L"FVelocityHS",1);
    FName::FName(local_198,L"FHitProxyDS",1);
    FName::FName(local_190,L"FHitProxyHS",1);
    FName::FName(local_188,L"TLightMapDensityDSTLightMapPolicyHQ",1);
    FName::FName(local_180,L"TLightMapDensityHSTLightMapPolicyHQ",1);
    FName::FName(local_178,L"TLightMapDensityDSTLightMapPolicyLQ",1);
    FName::FName(local_170,L"TLightMapDensityHSTLightMapPolicyLQ",1);
    FName::FName(local_168,L"TLightMapDensityDSFDummyLightMapPolicy",1);
    FName::FName(local_160,L"TLightMapDensityHSFDummyLightMapPolicy",1);
    FName::FName(local_158,L"TLightMapDensityDSFNoLightMapPolicy",1);
    FName::FName(local_150,L"TLightMapDensityHSFNoLightMapPolicy",1);
    FName::FName(local_148,L"FDepthOnlyDS",1);
    FName::FName(local_140,L"FDepthOnlyHS",1);
    FName::FName(local_138,L"FDebugViewModeDS",1);
    FName::FName(local_130,L"FDebugViewModeHS",1);
    FName::FName(local_128,L"TBasePassDSTDistanceFieldShadowsAndLightMapPolicyHQ",1);
    FName::FName(local_120,L"TBasePassHSTDistanceFieldShadowsAndLightMapPolicyHQ",1);
    FName::FName(local_118,L"TBasePassDSTLightMapPolicyHQ",1);
    FName::FName(local_110,L"TBasePassHSTLightMapPolicyHQ",1);
    FName::FName(local_108,L"TBasePassDSTLightMapPolicyLQ",1);
    FName::FName(local_100,L"TBasePassHSTLightMapPolicyLQ",1);
    FName::FName(local_f8,L"TBasePassDSFCachedPointIndirectLightingPolicy",1);
    FName::FName(local_f0,L"TBasePassHSFCachedPointIndirectLightingPolicy",1);
    FName::FName(local_e8,L"TBasePassDSFCachedVolumeIndirectLightingPolicy",1);
    FName::FName(local_e0,L"TBasePassHSFCachedVolumeIndirectLightingPolicy",1);
    FName::FName(local_d8,L"TBasePassDSFPrecomputedVolumetricLightmapLightingPolicy",1);
    FName::FName(local_d0,L"TBasePassHSFPrecomputedVolumetricLightmapLightingPolicy",1);
    FName::FName(local_c8,L"FCustomColorPS",1);
    FName::FName(local_c0,L"FGbxSkyMaterialVS",1);
    FName::FName(local_b8,L"FGbxSkyMaterialPS",1);
    FName::FName(local_b0,L"TLightMapVisualizationPSTLightMapPolicyHQfalse",1);
    FName::FName(local_a8,L"TLightMapVisualizationPSTLightMapPolicyHQtrue",1);
    FName::FName(local_a0,L"TLightMapVisualizationVSTLightMapPolicyHQ",1);
    FName::FName(local_98,L"TLightMapVisualizationPSFDummyLightMapPolicyfalse",1);
    FName::FName(local_90,L"TLightMapVisualizationPSFDummyLightMapPolicytrue",1);
    FName::FName(local_88,L"TLightMapVisualizationVSFDummyLightMapPolicy",1);
    FName::FName(local_80,L"TLightMapVisualizationPSFCachedPointIndirectLightingPolicyfalse",1);
    FName::FName(local_78,L"TLightMapVisualizationPSFCachedPointIndirectLightingPolicytrue",1);
    FName::FName(local_70,L"TLightMapVisualizationVSFCachedPointIndirectLightingPolicy",1);
    FName::FName(local_68,L"TLightMapVisualizationPSFCachedVolumeIndirectLightingPolicyfalse",1);
    FName::FName(local_60,L"TLightMapVisualizationPSFCachedVolumeIndirectLightingPolicytrue",1);
    FName::FName(local_58,L"TLightMapVisualizationVSFCachedVolumeIndirectLightingPolicy",1);
    FName::FName(local_50,L"TLightMapVisualizationVSFPrecomputedVolumetricLightmapLightingPolicy",1)
    ;
    FName::FName(local_48,
                 L"TLightMapVisualizationPSFPrecomputedVolumetricLightmapLightingPolicyfalse",1);
    FName::FName(local_40,
                 L"TLightMapVisualizationPSFPrecomputedVolumetricLightmapLightingPolicytrue",1);
    FName::FName(local_38,L"TLightMapVisualizationPSFNoLightMapPolicyfalse",1);
    FName::FName(local_30,L"TLightMapVisualizationPSFNoLightMapPolicytrue",1);
    FName::FName(local_28,L"TLightMapVisualizationVSFNoLightMapPolicy");
    DAT_146ac8f40 = (undefined8 *)0x0;
    _DAT_146ac8f48 = 0x99;
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&DAT_146ac8f40,0x99,0);
    lVar4 = 9;
    puVar2 = &local_4e8;
    puVar3 = DAT_146ac8f40;
    do {
      puVar6 = puVar3;
      puVar5 = puVar2;
      uVar1 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar1;
      uVar1 = puVar5[3];
      puVar6[2] = puVar5[2];
      puVar6[3] = uVar1;
      uVar1 = puVar5[5];
      puVar6[4] = puVar5[4];
      puVar6[5] = uVar1;
      uVar1 = puVar5[7];
      puVar6[6] = puVar5[6];
      puVar6[7] = uVar1;
      uVar1 = puVar5[9];
      puVar6[8] = puVar5[8];
      puVar6[9] = uVar1;
      uVar1 = puVar5[0xb];
      puVar6[10] = puVar5[10];
      puVar6[0xb] = uVar1;
      uVar1 = puVar5[0xd];
      puVar6[0xc] = puVar5[0xc];
      puVar6[0xd] = uVar1;
      uVar1 = puVar5[0xf];
      puVar6[0xe] = puVar5[0xe];
      puVar6[0xf] = uVar1;
      lVar4 = lVar4 + -1;
      puVar2 = puVar5 + 0x10;
      puVar3 = puVar6 + 0x10;
    } while (lVar4 != 0);
    uVar1 = puVar5[0x11];
    puVar6[0x10] = puVar5[0x10];
    puVar6[0x11] = uVar1;
    uVar1 = puVar5[0x13];
    puVar6[0x12] = puVar5[0x12];
    puVar6[0x13] = uVar1;
    uVar1 = puVar5[0x15];
    puVar6[0x14] = puVar5[0x14];
    puVar6[0x15] = uVar1;
    uVar1 = puVar5[0x17];
    puVar6[0x16] = puVar5[0x16];
    puVar6[0x17] = uVar1;
    puVar6[0x18] = puVar5[0x18];
    atexit((_func_5014 *)&LAB_143ea2850);
    _Init_thread_footer(&DAT_146ac8f50);
  }
  return &DAT_146ac8f40;
}



// FUNCTION 141f16f60 GetMaterialLayersParameterValue body=85 status=ok
// SIG undefined GetMaterialLayersParameterValue(void)

undefined1 UMaterialInterface::GetMaterialLayersParameterValue(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1db,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetGroupSortPriority"
            );
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Materials/MaterialInterface.h"
             ,0x1db,L"Pure virtual not implemented (%s)",L"UMaterialInterface::GetGroupSortPriority"
            );
  return 0;
}



// FUNCTION 141f16fc0 FUN_141f16fc0 body=295 status=ok
// SIG undefined FUN_141f16fc0(void)

void FUN_141f16fc0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  float fVar11;
  
  *param_2 = *(undefined8 *)(param_1 + 0x3f0);
  *param_3 = *(undefined8 *)(param_1 + 0x508);
  uVar9 = *(undefined8 *)(param_1 + 0x518);
  *param_4 = *(undefined8 *)(param_1 + 0x510);
  param_4[1] = uVar9;
  fVar1 = *(float *)(param_1 + 0x510);
  fVar2 = *(float *)(param_1 + 0x514);
  fVar3 = *(float *)(param_1 + 0x518);
  fVar4 = *(float *)(param_1 + 0x51c);
  uVar5 = *(undefined4 *)(param_1 + 0x51c);
  fVar11 = (float)(*(int *)(param_1 + 0x458) * *(int *)(param_1 + 0x450));
  *(float *)(param_4 + 2) = *(float *)(param_1 + 0x518);
  *(undefined4 *)((longlong)param_4 + 0x14) = uVar5;
  *(float *)(param_4 + 3) = (fVar1 * fVar11 + fVar3) - fVar1;
  *(float *)((longlong)param_4 + 0x1c) = (fVar2 * fVar11 + fVar4) - fVar2;
  iVar7 = *(int *)(param_1 + 0x46c);
  iVar8 = *(int *)(param_1 + 0x470);
  iVar10 = *(int *)(param_1 + 0x450) * *(int *)(param_1 + 0x454);
  *(int *)(param_4 + 0xd) = iVar7;
  *(int *)((longlong)param_4 + 0x6c) = iVar8;
  *(int *)(param_4 + 0xe) = iVar7 + iVar10;
  *(int *)((longlong)param_4 + 0x74) = iVar10 + iVar8;
  *(undefined4 *)(param_4 + 0xf) = *(undefined4 *)(param_1 + 0x450);
  iVar7 = *(int *)(param_1 + 0x454);
  uVar5 = *(undefined4 *)(param_1 + 0x520);
  uVar6 = *(undefined4 *)(param_1 + 0x524);
  *(float *)(param_4 + 0x10) = (float)iVar7;
  *(float *)((longlong)param_4 + 0x84) = (float)iVar7;
  *(undefined4 *)(param_4 + 0x11) = uVar5;
  *(undefined4 *)((longlong)param_4 + 0x8c) = uVar6;
  return;
}



// FUNCTION 141f170f0 GetInteraction body=55 status=ok
// SIG undefined GetInteraction(void)

int * FLandscapeComponentSceneProxy::FLandscapeLCI::GetInteraction
                (longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_14274fa70(param_1,param_3,param_1 + 0x28);
  if (iVar1 != 4) {
    *param_2 = iVar1;
    return param_2;
  }
  *param_2 = 2;
  return param_2;
}



// FUNCTION 141f17130 FUN_141f17130 body=91 status=ok
// SIG undefined FUN_141f17130(void)

void FUN_141f17130(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x570);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_2 + 0x48);
    *(int *)(param_2 + 0x48) = iVar1 + 1;
    if (*(int *)(param_2 + 0x4c) < iVar1 + 1) {
      TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_2,iVar1);
    }
    lVar3 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar3 = param_2;
    }
    *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 141f17190 FUN_141f17190 body=112 status=ok
// SIG undefined FUN_141f17190(void)

ulonglong FUN_141f17190(longlong param_1,float param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_1 + 0x418);
  lVar3 = *(longlong *)(param_1 + 0x410);
  param_2 = param_2 / param_3;
  uVar5 = iVar2 - 1;
  pfVar1 = (float *)(lVar3 + -4 + (longlong)iVar2 * 4);
  if (param_2 < *pfVar1 || param_2 == *pfVar1) {
    return (ulonglong)(uVar5 & 0xff);
  }
  if (*(float *)(lVar3 + 4) <= param_2 && param_2 != *(float *)(lVar3 + 4)) {
    return (ulonglong)(uint7)(int7)(int3)((uint)iVar2 >> 8) << 8;
  }
  uVar6 = 0xff;
  uVar4 = 1;
  if (param_2 < *(float *)(lVar3 + (longlong)((int)uVar5 / 2) * 4)) {
    uVar4 = (int)uVar5 / 2;
  }
  if ((int)uVar4 < (int)uVar5) {
    while (pfVar1 = (float *)(lVar3 + 4 + (longlong)(int)uVar4 * 4),
          param_2 < *pfVar1 || param_2 == *pfVar1) {
      uVar4 = uVar4 + 1;
      if ((int)uVar5 <= (int)uVar4) {
        return 0xff;
      }
    }
    uVar6 = uVar4 & 0xff;
  }
  return (ulonglong)uVar6;
}



// FUNCTION 141f17210 FUN_141f17210 body=147 status=ok
// SIG undefined FUN_141f17210(void)

void FUN_141f17210(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined1 *param_5,undefined1 *param_6)

{
  longlong lVar1;
  uint uVar2;
  
  *param_3 = 1;
  *param_4 = 0;
  *param_5 = 1;
  *param_6 = 1;
  lVar1 = *(longlong *)(param_1 + 0x570);
  if (lVar1 == 0) {
    *param_4 = 1;
    *param_5 = 0;
    return;
  }
  uVar2 = FUN_14274fa70(lVar1,param_2,lVar1 + 0x28);
  if (uVar2 == 4) {
    uVar2 = 2;
  }
  else if (uVar2 == 0) goto LAB_141f1726b;
  *param_4 = 1;
LAB_141f1726b:
  if (1 < uVar2) {
    *param_5 = 0;
  }
  if (uVar2 != 2) {
    *param_3 = 0;
  }
  if (uVar2 != 3) {
    *param_6 = 0;
  }
  return;
}



// FUNCTION 141f172c0 FUN_141f172c0 body=1910 status=ok
// SIG undefined FUN_141f172c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_141f172c0(longlong param_1,char param_2,byte param_3,char param_4,undefined1 param_5,
             longlong *param_6,longlong param_7,longlong *param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1b8 [32];
  char local_198;
  char local_197;
  int local_194;
  uint local_190;
  longlong local_188;
  longlong *local_180;
  int local_178;
  longlong local_170;
  undefined4 local_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  longlong local_150;
  longlong local_148 [3];
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  longlong local_c8 [3];
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if (param_6 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x130) + 8);
    local_197 = param_4;
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x540) + 0x40))();
    cVar3 = FUN_142857d30(param_6,uVar7,uVar1);
    *(undefined8 *)(param_7 + 0xa0) = *(undefined8 *)(param_1 + 0x540);
    local_198 = cVar3;
    plVar8 = (longlong *)(**(code **)(*param_6 + 0x2a8))(param_6,0,0);
    *(longlong **)(param_7 + 0xa8) = plVar8;
    *(undefined8 *)(param_7 + 0x98) = *(undefined8 *)(param_1 + 0x570);
    uVar13 = 1;
    if (param_2 != '\0') {
      uVar13 = (uint)param_3;
    }
    uVar16 = uVar13 << 5 |
             (((uint)*(byte *)(param_1 + 0x18) << 3 ^ *(uint *)(param_7 + 0x8c)) & 8 ^
             *(uint *)(param_7 + 0x8c)) & 0xffffffdf;
    *(uint *)(param_7 + 0x8c) = uVar16;
    if ((((param_2 != '\0') && (param_3 != 0)) ||
        (((byte)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x1b) & 1) == 0)) ||
       ((*(int *)(*(longlong *)(param_1 + 0x130) + 8) < 2 ||
        (uVar4 = 0x80, *(int *)(param_1 + 0x10) == 1 || *(int *)(param_1 + 0x10) == 2)))) {
      uVar4 = 0;
    }
    if (param_2 == '\0') {
      uVar5 = 1;
    }
    else {
      uVar5 = param_3 ^ 1;
    }
    fVar19 = 0.0;
    *(undefined1 *)(param_7 + 0x88) = param_5;
    *(uint *)(param_7 + 0x8c) =
         -(uint)(cVar3 != '\0') & 0x11000 | (uVar16 & 0xffffff3f | uVar4 | uVar5 << 6) & 0xfbe00fff
         | 0x2000000;
    if ((uVar13 << 5 & 0x20) != 0) {
      fVar20 = (*(float *)(param_1 + 0x420) + *(float *)(param_1 + 0x420)) /
               (float)(*(int *)(param_1 + 0x454) * *(int *)(param_1 + 0x450));
      if (local_197 != '\0') {
        local_180 = (longlong *)0x0;
        (**(code **)(*plVar8 + 0x40))
                  (plVar8,*(undefined4 *)(*(longlong *)(param_1 + 0x130) + 8),&local_168,&local_180)
        ;
        fVar19 = (float)(**(code **)(*local_180 + 0x280))();
      }
      fVar20 = fVar20 * fVar20;
      *(float *)(param_7 + 0xb4) = SQRT(fVar20 + fVar20 + fVar19 * fVar19);
    }
    iVar6 = *(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404);
    iVar10 = 1;
    if (0 < iVar6) {
      iVar10 = iVar6;
    }
    iVar6 = 5;
    if (*(int *)(param_1 + 0x450) == 1) {
      iVar6 = 1;
    }
    FUN_141f142e0(param_7,iVar10 * iVar6);
    local_190 = *(uint *)(param_1 + 0x404);
    uVar15 = (ulonglong)(int)local_190;
    if ((int)local_190 <= *(int *)(param_1 + 0x408)) {
      local_180 = (longlong *)(uVar15 * 0x28);
      lVar11 = uVar15 * 10;
      local_168 = 0;
      lVar12 = uVar15 * 8;
      do {
        iVar6 = 0;
        uVar13 = (uint)uVar15;
        local_178 = *(int *)(param_1 + 0x458) >> ((byte)uVar15 & 0x1f);
        iVar10 = *(int *)(param_1 + 0x450);
        local_188 = lVar12;
        local_170 = lVar11;
        if ((1 < iVar10) && (*(char *)(param_1 + 0x3f8) < '\0')) {
          local_150 = 0;
          local_194 = (local_178 + -1) * (local_178 + -1) * 2;
          iVar17 = local_194;
          if (0 < iVar10) {
            do {
              iVar14 = 0;
              if (0 < iVar10) {
                lVar18 = (local_150 + lVar11) * 4 + 0x10;
                do {
                  iVar10 = (int)param_8[1];
                  lVar11 = (longlong)iVar10;
                  *(int *)(param_8 + 1) = iVar10 + 1;
                  if (*(int *)((longlong)param_8 + 0xc) < iVar10 + 1) {
                    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_8,iVar10);
                    lVar12 = local_188;
                    iVar17 = local_194;
                  }
                  lVar2 = *param_8;
                  *(longlong *)(lVar2 + 0x10 + lVar11 * 0x28) = param_1;
                  *(int *)(lVar2 + 0x18 + lVar11 * 0x28) = iVar14;
                  *(int *)(lVar2 + 0x1c + lVar11 * 0x28) = iVar6;
                  local_128 = (longlong *)(lVar2 + lVar11 * 0x28);
                  *local_128 = param_1 + 0x588;
                  local_128[1] = param_1 + 0x480;
                  *(uint *)(local_128 + 4) = local_190;
                  local_148[0] = param_1 + 0x188;
                  local_148[1] = 0;
                  uStack_130 = 0;
                  local_118 = (undefined8 *)0x0;
                  local_108 = 1;
                  local_f8 = 0;
                  local_f0 = 0xffffffff;
                  local_ec = 0;
                  local_e8 = 0x3f800000;
                  local_e0 = 0;
                  local_d8 = 0;
                  if (local_198 == '\0') {
                    local_148[2] = *(undefined8 *)
                                    (lVar12 + *(longlong *)(*(longlong *)(param_1 + 0x538) + 0x38));
                    local_110 = 1;
                    local_158 = (iVar6 * *(int *)(param_1 + 0x450) + iVar14) * iVar17 * 3;
                    iStack_154 = iVar17;
                    TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
                    ::ResizeGrow(&local_120,0);
                    puVar9 = &local_120;
                    if (local_118 != (undefined8 *)0x0) {
                      puVar9 = local_118;
                    }
                    uVar7 = CONCAT44(iStack_154,local_158);
                  }
                  else {
                    local_148[2] = *(undefined8 *)
                                    (lVar12 + *(longlong *)
                                               (*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x48)
                                               + 0x10));
                    local_110 = 1;
                    local_160 = (iVar6 * *(int *)(param_1 + 0x450) + iVar14) * iVar17 * 0xc;
                    iStack_15c = iVar17;
                    TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
                    ::ResizeGrow(&local_120,0);
                    puVar9 = &local_120;
                    if (local_118 != (undefined8 *)0x0) {
                      puVar9 = local_118;
                    }
                    uVar7 = CONCAT44(iStack_15c,local_160);
                  }
                  *puVar9 = uVar7;
                  iVar10 = *(int *)(param_7 + 0x80);
                  local_100 = *(undefined4 *)
                               (lVar18 + -0x10 +
                               *(longlong *)(*(longlong *)(param_1 + 0x538) + 0x40));
                  local_fc = *(undefined4 *)
                              (lVar18 + *(longlong *)(*(longlong *)(param_1 + 0x538) + 0x40));
                  *(int *)(param_7 + 0x80) = iVar10 + 1;
                  if (*(int *)(param_7 + 0x84) < iVar10 + 1) {
                    FUN_1408ca0e0(param_7,iVar10);
                  }
                  lVar12 = *(longlong *)(param_7 + 0x78);
                  if (*(longlong *)(param_7 + 0x78) == 0) {
                    lVar12 = param_7;
                  }
                  FUN_141f0edf0(lVar12 + (longlong)iVar10 * 0x78,local_148);
                  if (local_118 != (undefined8 *)0x0) {
                    FMemory::Free();
                  }
                  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_148 + 1);
                  iVar10 = *(int *)(param_1 + 0x450);
                  iVar14 = iVar14 + 1;
                  lVar18 = lVar18 + 8;
                  lVar12 = local_188;
                  lVar11 = local_170;
                  iVar17 = local_194;
                } while (iVar14 < iVar10);
              }
              local_150 = local_150 + 1;
              iVar6 = iVar6 + 1;
              uVar13 = local_190;
            } while (iVar6 < iVar10);
          }
        }
        iVar10 = (int)param_8[1];
        lVar12 = (longlong)iVar10;
        *(int *)(param_8 + 1) = iVar10 + 1;
        if (*(int *)((longlong)param_8 + 0xc) < iVar10 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_8,iVar10);
        }
        local_a8 = *param_8;
        *(longlong *)(local_a8 + lVar12 * 0x28) = param_1 + 0x588;
        *(longlong *)(local_a8 + 8 + lVar12 * 0x28) = param_1 + 0x480;
        *(longlong *)(local_a8 + 0x10 + lVar12 * 0x28) = param_1;
        local_a8 = local_a8 + lVar12 * 0x28;
        local_c8[0] = param_1 + 0x188;
        *(undefined8 *)(local_a8 + 0x18) = 0xffffffffffffffff;
        *(uint *)(local_a8 + 0x20) = uVar13;
        local_c8[1] = 0;
        uStack_b0 = 0;
        local_98 = (undefined8 *)0x0;
        local_88 = 1;
        local_78 = 0;
        local_70 = 0xffffffff;
        local_6c = 0;
        local_68 = 0x3f800000;
        local_60 = 0;
        local_58 = 0;
        if (local_198 == '\0') {
          local_c8[2] = *(undefined8 *)
                         (local_188 + *(longlong *)(*(longlong *)(param_1 + 0x538) + 0x38));
        }
        else {
          local_c8[2] = *(undefined8 *)
                         (local_188 +
                         *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x48) + 0x10))
          ;
        }
        local_90 = 1;
        iStack_164 = (local_178 + -1) * (local_178 + -1) * *(int *)(param_1 + 0x450) *
                     *(int *)(param_1 + 0x450) * 2;
        TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
        ::ResizeGrow(&local_a0,0);
        puVar9 = &local_a0;
        if (local_98 != (undefined8 *)0x0) {
          puVar9 = local_98;
        }
        *puVar9 = CONCAT44(iStack_164,local_168);
        iVar10 = *(int *)(param_7 + 0x80);
        local_80 = *(undefined4 *)
                    ((longlong)local_180 +
                    *(longlong *)(*(longlong *)(param_1 + 0x538) + 0x40) + 0x20);
        local_7c = *(undefined4 *)
                    ((longlong)local_180 +
                    *(longlong *)(*(longlong *)(param_1 + 0x538) + 0x40) + 0x24);
        *(int *)(param_7 + 0x80) = iVar10 + 1;
        if (*(int *)(param_7 + 0x84) < iVar10 + 1) {
          FUN_1408ca0e0(param_7,iVar10);
        }
        lVar12 = *(longlong *)(param_7 + 0x78);
        if (*(longlong *)(param_7 + 0x78) == 0) {
          lVar12 = param_7;
        }
        FUN_141f0edf0(lVar12 + (longlong)iVar10 * 0x78,local_c8);
        if (local_98 != (undefined8 *)0x0) {
          FMemory::Free();
        }
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_c8 + 1);
        local_190 = uVar13 + 1;
        uVar15 = (ulonglong)local_190;
        lVar11 = local_170 + 10;
        local_180 = local_180 + 5;
        lVar12 = local_188 + 8;
        local_188 = lVar12;
        local_170 = lVar11;
      } while ((int)local_190 <= *(int *)(param_1 + 0x408));
    }
    if (*(int *)(param_7 + 0x84) != *(int *)(param_7 + 0x80)) {
      FUN_141f1bf20(param_7);
    }
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 141f17a40 GetNeedsCPUAccess body=12 status=ok
// SIG undefined GetNeedsCPUAccess(void)

void FRawStaticIndexBuffer16or32<unsigned_short>::GetNeedsCPUAccess(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141f17a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x40) + 0x20))(param_1 + 0x40);
  return;
}



// FUNCTION 141f17a50 FUN_141f17a50 body=826 status=ok
// SIG undefined FUN_141f17a50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f17a50(longlong param_1,longlong param_2,undefined8 param_3,char param_4,char param_5,
                  char param_6)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_188 [32];
  float local_168;
  undefined1 *local_160;
  undefined8 local_158;
  undefined4 local_150;
  float local_148;
  float local_144;
  undefined4 local_140;
  undefined1 local_138 [192];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  iVar9 = *(int *)(param_1 + 0x3fc);
  cVar10 = '\0';
  if ((param_5 == -1) || (param_6 == -1)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x450) * (int)param_6 + (int)param_5;
  }
  iVar11 = 0;
  iVar12 = 0;
  iVar7 = 0;
  if ((param_5 != -1) && (iVar11 = 0, iVar12 = 0, iVar7 = 0, param_6 != -1)) {
    lVar2 = ((longlong)param_4 + (longlong)iVar5 * 4) * 3;
    iVar11 = (int)(char)(&DAT_1464ce151)[lVar2] + (int)param_6;
    cVar10 = (&DAT_1464ce152)[lVar2];
    iVar12 = (int)(char)(&DAT_1464ce150)[lVar2] + (int)param_5;
    iVar7 = *(int *)(param_1 + 0x450) * iVar11 + iVar12;
  }
  puVar6 = (undefined8 *)0x0;
  iVar8 = iVar7;
  if ((cVar10 == '\0') &&
     (puVar6 = *(undefined8 **)(param_1 + 0x3d0 + (longlong)param_4 * 8), iVar8 = iVar5,
     puVar6 != (undefined8 *)0x0)) {
    iVar9 = *(int *)((longlong)puVar6 + 0x5c);
    iVar8 = iVar7;
  }
  if (((iVar9 < 0) || (*(int *)(param_2 + 0x1a50) <= iVar9)) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x1a48) + (longlong)iVar9 * 8) == 0)) {
    fVar14 = *(float *)(param_1 + 0x420);
    local_158 = *(undefined8 *)(*(longlong *)(param_1 + 0x578) + 0x1d0);
    local_150 = *(undefined4 *)(*(longlong *)(param_1 + 0x578) + 0x1d8);
    if (puVar6 != (undefined8 *)0x0) {
      lVar2 = (**(code **)*puVar6)(puVar6);
      lVar3 = (**(code **)*puVar6)(puVar6);
      if (lVar3 != 0) {
        local_158 = *(undefined8 *)(lVar2 + 0x1d0);
        local_150 = *(undefined4 *)(lVar2 + 0x1d8);
        fVar14 = *(float *)(lVar2 + 0x230);
        if (*(float *)(lVar2 + 0x230) <= *(float *)(lVar2 + 0x234)) {
          fVar14 = *(float *)(lVar2 + 0x234);
        }
        fVar14 = fVar14 * (float)*(int *)(lVar2 + 0x6fc);
      }
    }
    if (*(int *)(param_1 + 0x450) < 2) {
      lVar2 = *(longlong *)(param_1 + 0x578);
      uVar4 = FUN_14274f0c0(param_2);
      local_168 = *(float *)(lVar2 + 0x1e8);
      uVar13 = FUN_141f156f0(param_1,uVar4,&local_158,fVar14);
      FLandscapeComponentSceneProxy::FViewCustomDataLOD::FViewCustomDataLOD(local_138);
      local_160 = local_138;
      local_168 = 0.0;
      FUN_141f11f50(param_1,param_2,uVar13,*(undefined4 *)(param_2 + 0x11ec));
    }
    else {
      fVar15 = fVar14 * 0.5;
      local_148 = ((float)local_158 - fVar15) + (float)iVar12 * fVar14;
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x578) + 0x1e8);
      local_144 = (local_158._4_4_ - fVar15) + (float)iVar11 * fVar14;
      local_140 = local_150;
      uVar4 = FUN_14274f0c0(param_2);
      local_168 = fVar1 * 0.5;
      uVar13 = FUN_141f156f0(param_1,uVar4,&local_148,fVar15);
      FLandscapeComponentSceneProxy::FViewCustomDataLOD::FViewCustomDataLOD(local_138);
      local_160 = local_138;
      local_168 = (float)iVar8;
      FUN_141f11f50(param_1,param_2,uVar13,*(undefined4 *)(param_2 + 0x11ec));
    }
  }
  return;
}



// FUNCTION 141f17df0 FUN_141f17df0 body=965 status=ok
// SIG undefined FUN_141f17df0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_141f17df0(longlong *param_1,longlong *param_2)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  size_t _Size;
  undefined1 auStack_188 [32];
  int local_168;
  undefined1 local_160;
  undefined4 local_158;
  int local_148;
  int local_144;
  longlong local_140;
  uint local_138;
  int local_134;
  void *local_130;
  uint local_128;
  uint local_124;
  longlong *local_118;
  longlong *plStack_110;
  longlong *local_108;
  longlong *plStack_100;
  undefined **local_f8;
  longlong *local_f0;
  byte local_d0;
  byte local_cf;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  pplVar1 = (longlong **)(param_1 + 2);
  if (param_1[2] == 0) {
    FArchive::FArchive(&local_f8);
    local_f8 = &PTR_FUN_143f4a3a0;
    plVar9 = (longlong *)0x0;
    local_58 = 0x7fffffffffffffff;
    local_68 = 0;
    local_60 = param_1;
    FArchive::SetIsLoading(&local_f8,1);
    FArchive::SetIsPersistent(&local_f8,0);
    if ((int *)local_f0[1] < (int *)*local_f0 + 1) {
      (*(code *)local_f8[10])(&local_f8,&local_144,4);
      if ((local_cf & 0x10) != 0) {
        FArchive::ByteSwap(&local_f8,&local_144,4);
      }
    }
    else {
      local_144 = *(int *)*local_f0;
      *local_f0 = *local_f0 + 4;
    }
    if ((int *)local_f0[1] < (int *)*local_f0 + 1) {
      (*(code *)local_f8[10])(&local_f8,&local_148,4);
      if ((local_cf & 0x10) != 0) {
        FArchive::ByteSwap(&local_f8,&local_148,4);
      }
    }
    else {
      local_148 = *(int *)*local_f0;
      *local_f0 = *local_f0 + 4;
    }
    local_128 = 0;
    local_130 = (void *)0x0;
    local_124 = 0;
    plVar7 = plVar9;
    plVar8 = plVar9;
    if (local_148 != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_130,local_148);
      plVar8 = (longlong *)(ulonglong)local_124;
      plVar7 = (longlong *)(ulonglong)local_128;
    }
    local_128 = local_148 + (int)plVar7;
    if ((int)plVar8 < (int)local_128) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_130);
    }
    _Size = (size_t)local_148;
    if ((_Size != 0) && (-1 < (char)local_d0)) {
      lVar6 = local_58;
      if ((int)local_60[1] <= local_58) {
        lVar6 = (longlong)(int)local_60[1];
      }
      if (lVar6 < (longlong)(local_68 + _Size)) {
        local_d0 = local_d0 | 0x80;
      }
      else {
        _guard_xfg_dispatch_icall_nop(local_130,(void *)((longlong)(int)local_68 + *local_60),_Size)
        ;
        local_68 = local_68 + _Size;
      }
    }
    local_134 = 0;
    local_138 = 0;
    local_140 = 0;
    plVar7 = plVar9;
    if (local_144 != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_140,local_144);
      plVar7 = (longlong *)(ulonglong)local_138;
    }
    local_138 = (int)plVar7 + local_144;
    if (local_134 < (int)local_138) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_140);
    }
    local_158 = 0xf;
    local_160 = 0;
    local_168 = local_148;
    FUN_14165b8a0(1,local_140,local_144,local_130);
    lVar6 = operator_new(0x18);
    plVar7 = plVar9;
    if (lVar6 != 0) {
      plVar7 = (longlong *)FUN_141f0e5d0(lVar6,&local_140);
    }
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *plVar8 = (longlong)&PTR_DestroyObject_144ef9c00;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      plVar8[2] = (longlong)plVar7;
      plVar9 = plVar8;
    }
    local_118 = plVar7;
    plStack_110 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_118,plVar7,plVar7);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1,0);
    }
    local_108 = local_118;
    plStack_100 = plStack_110;
    uVar4 = (undefined4)((ulonglong)local_118 >> 0x20);
    uVar5 = (undefined4)((ulonglong)plStack_110 >> 0x20);
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
      UNLOCK();
    }
    if (&local_108 != pplVar1) {
      local_108 = *pplVar1;
      plStack_100 = (longlong *)param_1[3];
      *(int *)pplVar1 = (int)local_118;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
      *(int *)(param_1 + 3) = (int)plStack_110;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
      local_48 = (int)local_118;
      uStack_44 = uVar4;
      uStack_40 = (int)plStack_110;
      uStack_3c = uVar5;
    }
    plVar9 = plStack_100;
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_100 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_100)(plStack_100);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_100 + 8))(plStack_100,1);
        }
      }
    }
    *param_2 = (longlong)local_118;
    param_2[1] = (longlong)plStack_110;
    plStack_110 = (longlong *)0x0;
    local_118 = (longlong *)0x0;
    if (local_140 != 0) {
      FMemory::Free();
    }
    if (local_130 != (void *)0x0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_f8);
  }
  else {
    *param_2 = param_1[2];
    lVar6 = param_1[3];
    param_2[1] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 141f181e0 FUN_141f181e0 body=37 status=ok
// SIG undefined FUN_141f181e0(void)

undefined4 FUN_141f181e0(longlong *param_1,undefined8 param_2)

{
  undefined4 local_res8 [8];
  
  (**(code **)(*param_1 + 0x370))(param_1,param_2,local_res8,0,0);
  return local_res8[0];
}



// FUNCTION 141f18210 FUN_141f18210 body=267 status=ok
// SIG undefined FUN_141f18210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f18210(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  undefined8 local_100;
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FUN_14256dd00();
  if ((*(char *)(param_1 + 0x38) != '\0') || (*(char *)(param_1 + 0x39) != '\0')) {
    FSHA1::FSHA1(local_f8);
    FSHA1::Update(local_f8,param_3 + 0xe4,0x14);
    iVar3 = 0;
    local_100 = 0x1b;
    local_108 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    puVar1 = local_108;
    FGenericPlatformString::Memcpy(local_108,L"bOverride_TessellationMode",0x36);
    if ((int)local_100 == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      iVar3 = (int)local_100 + -1;
      puVar2 = puVar1;
    }
    FSHA1::UpdateWithString(local_f8,puVar2,iVar3);
    FSHA1::Final(local_f8);
    FSHA1::GetHash(local_f8,param_3 + 0xe4);
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
    FSHA1::~FSHA1(local_f8);
  }
  return;
}



// FUNCTION 141f18320 FUN_141f18320 body=245 status=ok
// SIG undefined FUN_141f18320(void)

ulonglong FUN_141f18320(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  lVar5 = *(longlong *)(param_3 + 0x78);
  if (*(longlong *)(param_3 + 0x78) == 0) {
    lVar5 = param_3;
  }
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x10);
  if ((*(char *)(lVar5 + 0x434) != '\0') && (1 < *(int *)(lVar5 + 0x560))) {
    plVar4 = *(longlong **)(lVar5 + 0x558);
    if (*(longlong **)(lVar5 + 0x558) == (longlong *)0x0) {
      plVar4 = (longlong *)(lVar5 + 0x548);
    }
    if (*plVar4 != 0) {
      (**(code **)(**(longlong **)(param_3 + 0xa8) + 0x50))();
    }
  }
  if (param_4 == 0) {
    iVar2 = *(int *)(*(longlong *)(lVar5 + 0x140) + 0xe8);
    if (iVar2 < 0) {
      return 0;
    }
    if (*(int *)(param_2 + 0x1a50) <= iVar2) {
      return 0;
    }
    param_4 = *(longlong *)(*(longlong *)(param_2 + 0x1a48) + (longlong)iVar2 * 8);
    if (param_4 == 0) {
      return 0;
    }
  }
  if ((*(int *)(lVar5 + 0x450) < 2) || (*(char *)(param_4 + 1) != '\0')) {
    uVar6 = 1L << ((longlong)*(char *)(param_4 + 0x10) & 0x3fU);
  }
  else {
    pcVar3 = (char *)(param_4 + 0x10);
    lVar5 = 4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 0x20;
      uVar6 = uVar6 | 1L << ((longlong)cVar1 & 0x3fU);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return uVar6;
}



// FUNCTION 141f18420 FUN_141f18420 body=2452 status=ok
// SIG undefined FUN_141f18420(void)

void FUN_141f18420(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [12];
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  
  lVar16 = *(longlong *)(param_1 + 0x20);
  if (lVar16 != 0) {
    lVar14 = FUN_141f1ec00();
    in_XMM0._8_8_ = extraout_XMM0_Qb;
    in_XMM0._0_8_ = extraout_XMM0_Qa;
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) goto LAB_141f1849a;
  }
  lVar16 = 0;
LAB_141f1849a:
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  fVar30 = 0.0;
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  uVar9 = *(undefined4 *)(param_1 + 0x1d0);
  uVar10 = *(undefined4 *)(param_1 + 0x1d4);
  if (lVar16 != 0) {
    fVar30 = *(float *)(lVar16 + 0x4b0);
    if (fVar30 <= 0.0) {
      fVar30 = 0.0;
    }
    fVar30 = (float)*(int *)(param_1 + 0x6f8) * fVar30;
    in_XMM0 = ZEXT416((uint)fVar30);
    fVar30 = fVar30 * 0.75 * ABS(*(float *)(*(longlong *)(lVar16 + 0x168) + 0x204));
  }
  iVar25 = *(int *)(param_2 + 0x2c);
  if (iVar25 < 2) {
    plVar15 = *(longlong **)(param_1 + 0x840);
  }
  else {
    plVar15 = (longlong *)FUN_141ef8470(param_1,0,1);
    in_XMM0._8_8_ = extraout_XMM0_Qb_00;
    in_XMM0._0_8_ = extraout_XMM0_Qa_00;
  }
  if (plVar15 != (longlong *)0x0) {
    uVar23 = 0;
    local_c0 = 0;
    local_b8 = 0;
    (**(code **)(*plVar15 + 0x2b8))(plVar15,&local_c0,3,0,iVar25,0);
    fVar29 = DAT_1464ce038 * fVar30;
    uVar27 = uVar23;
    if (0 < (int)local_b8) {
      do {
        lVar16 = *(longlong *)(local_c0 + uVar23);
        if (lVar16 != 0) {
          lVar14 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          if (bVar11) {
            iVar4 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar4 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
            }
            plVar24 = (longlong *)((longlong)iVar4 * 0x30 + *param_3);
            if (plVar24 == (longlong *)0x0) {
              plVar24 = (longlong *)0x0;
            }
            else {
              *(undefined8 *)((longlong)plVar24 + 0xc) = 0;
              *(undefined8 *)((longlong)plVar24 + 0x14) = 0;
              *(undefined8 *)((longlong)plVar24 + 0x1c) = 0;
              *(undefined4 *)(plVar24 + 5) = 0;
            }
            *plVar24 = lVar16;
            *(undefined4 *)(plVar24 + 1) = uVar9;
            *(undefined4 *)((longlong)plVar24 + 0xc) = uVar10;
            plVar24[2] = CONCAT44(uVar1,uVar3);
            plVar24[3] = CONCAT44(uVar1,uVar1);
            *(undefined4 *)(plVar24 + 4) = uVar1;
            *(float *)((longlong)plVar24 + 0x24) = fVar29;
            local_b0 = uVar9;
            uStack_ac = uVar10;
            uStack_a8 = uVar3;
            uStack_a4 = uVar1;
            uStack_a0 = uVar1;
            uStack_9c = uVar1;
            local_98 = uVar1;
          }
        }
        uVar26 = (int)uVar27 + 1;
        uVar23 = uVar23 + 8;
        uVar27 = (ulonglong)uVar26;
      } while ((int)uVar26 < (int)local_b8);
    }
    lVar16 = (**(code **)(*plVar15 + 0x288))(plVar15);
    if (lVar16 != 0) {
      iVar4 = *(int *)(lVar16 + 0x748);
      lVar14 = 0;
      if (0 < (longlong)iVar4) {
LAB_141f186c0:
        lVar6 = *(longlong *)(*(longlong *)(lVar16 + 0x740) + lVar14 * 8);
        if (lVar6 != 0) {
          lVar17 = UCircularThrobber::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          if ((bVar11) && (*(longlong *)(lVar6 + 0x78) != 0)) {
            plVar24 = *(longlong **)(lVar16 + 0x740);
            lVar17 = 0;
            plVar15 = plVar24 + *(int *)(lVar16 + 0x748);
            for (; plVar24 != plVar15; plVar24 = plVar24 + 1) {
              lVar7 = *plVar24;
              if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x18) == *(longlong *)(lVar6 + 0x78))) {
                lVar18 = UMaterialExpressionTextureCoordinate::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
                  bVar11 = false;
                }
                else {
                  bVar11 = true;
                }
                lVar18 = lVar7;
                if (!bVar11) {
                  lVar17 = UMaterialExpressionLandscapeLayerCoords::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
                    bVar11 = false;
                  }
                  else {
                    bVar11 = true;
                  }
                  lVar18 = 0;
                  lVar17 = lVar7;
                  if (!bVar11) break;
                }
                iVar20 = 0;
                if (0 < (int)param_3[1]) {
                  plVar15 = (longlong *)*param_3;
                  goto LAB_141f18820;
                }
                break;
              }
            }
          }
        }
        goto LAB_141f18755;
      }
    }
LAB_141f18761:
    plVar15 = (longlong *)FUN_141ef84f0(param_1);
    if ((plVar15 == (longlong *)0x0) || ((longlong *)*plVar15 == (longlong *)0x0)) {
      lVar16 = 0;
    }
    else {
      lVar16 = (**(code **)(*(longlong *)*plVar15 + 0x30))();
    }
    cVar12 = FUN_142865d40(iVar25);
    in_XMM0._8_8_ = extraout_XMM0_Qb_01;
    in_XMM0._0_8_ = extraout_XMM0_Qa_01;
    if (lVar16 != 0) {
      cVar13 = FUN_14254a400(lVar16,cVar12 == '\0');
      in_XMM0._8_8_ = extraout_XMM0_Qb_02;
      in_XMM0._0_8_ = extraout_XMM0_Qa_02;
      if ((cVar13 != '\0') && (fVar29 = *(float *)(lVar16 + 0x150), 1e-08 < fVar29)) {
        fVar2 = *(float *)(lVar16 + 0x154);
        in_XMM0 = ZEXT416((uint)fVar2);
        if (1e-08 < fVar2) {
          iVar25 = (int)param_3[1];
          if (fVar29 <= fVar2) {
            in_XMM0 = ZEXT416((uint)fVar29);
          }
          fVar29 = fVar30 / in_XMM0._0_4_;
          *(int *)(param_3 + 1) = iVar25 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar25 + 1) {
            in_XMM0._0_8_ = TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3,iVar25);
            in_XMM0._8_8_ = extraout_XMM0_Qb_03;
          }
          puVar22 = (undefined8 *)((longlong)iVar25 * 0x30 + *param_3);
          if (puVar22 != (undefined8 *)0x0) {
            uVar19 = FUN_142548760(lVar16,cVar12 == '\0');
            *puVar22 = uVar19;
            in_XMM0 = *(undefined1 (*) [16])(param_1 + 0x1d0);
            *(undefined1 (*) [16])(puVar22 + 1) = in_XMM0;
            puVar22[3] = *(undefined8 *)(param_1 + 0x1e0);
            uVar5 = *(undefined4 *)(param_1 + 0x1e8);
            *(float *)((longlong)puVar22 + 0x24) = fVar29;
            *(undefined4 *)(puVar22 + 4) = uVar5;
            *(undefined4 *)(puVar22 + 5) = 0;
          }
          iVar25 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar25 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar25 + 1) {
            in_XMM0._0_8_ = TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3,iVar25);
            in_XMM0._8_8_ = extraout_XMM0_Qb_04;
          }
          puVar22 = (undefined8 *)((longlong)iVar25 * 0x30 + *param_3);
          if (puVar22 != (undefined8 *)0x0) {
            uVar19 = FWmfMediaPlayer::GetSamples(lVar16);
            *puVar22 = uVar19;
            in_XMM0 = *(undefined1 (*) [16])(param_1 + 0x1d0);
            *(undefined1 (*) [16])(puVar22 + 1) = in_XMM0;
            puVar22[3] = *(undefined8 *)(param_1 + 0x1e0);
            uVar5 = *(undefined4 *)(param_1 + 0x1e8);
            *(float *)((longlong)puVar22 + 0x24) = fVar29;
            *(undefined4 *)(puVar22 + 4) = uVar5;
            *(undefined4 *)(puVar22 + 5) = 0;
          }
          iVar25 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar25 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar25 + 1) {
            in_XMM0._0_8_ = TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3,iVar25);
            in_XMM0._8_8_ = extraout_XMM0_Qb_05;
          }
          puVar22 = (undefined8 *)((longlong)iVar25 * 0x30 + *param_3);
          if (puVar22 != (undefined8 *)0x0) {
            uVar19 = UNiagaraSystem::GetEffectType(lVar16);
            *puVar22 = uVar19;
            in_XMM0 = *(undefined1 (*) [16])(param_1 + 0x1d0);
            *(undefined1 (*) [16])(puVar22 + 1) = in_XMM0;
            puVar22[3] = *(undefined8 *)(param_1 + 0x1e0);
            uVar5 = *(undefined4 *)(param_1 + 0x1e8);
            *(float *)((longlong)puVar22 + 0x24) = fVar29;
            *(undefined4 *)(puVar22 + 4) = uVar5;
            *(undefined4 *)(puVar22 + 5) = 0;
          }
        }
      }
    }
    if ((plVar15 != (longlong *)0x0) && ((longlong *)plVar15[1] != (longlong *)0x0)) {
      lVar16 = (**(code **)(*(longlong *)plVar15[1] + 0x30))();
      in_XMM0._8_8_ = extraout_XMM0_Qb_06;
      in_XMM0._0_8_ = extraout_XMM0_Qa_03;
      if ((lVar16 != 0) &&
         ((*(longlong *)(lVar16 + 0x20) != 0 && (fVar29 = *(float *)(lVar16 + 0x28), 1e-08 < fVar29)
          ))) {
        fVar2 = *(float *)(lVar16 + 0x2c);
        in_XMM0 = ZEXT416((uint)fVar2);
        if (1e-08 < fVar2) {
          iVar25 = (int)param_3[1];
          if (fVar29 <= fVar2) {
            in_XMM0 = ZEXT416((uint)fVar29);
          }
          fVar29 = in_XMM0._0_4_;
          *(int *)(param_3 + 1) = iVar25 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar25 + 1) {
            in_XMM0._0_8_ = TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3,iVar25);
            in_XMM0._8_8_ = extraout_XMM0_Qb_07;
          }
          puVar22 = (undefined8 *)((longlong)iVar25 * 0x30 + *param_3);
          if (puVar22 != (undefined8 *)0x0) {
            *puVar22 = *(undefined8 *)(lVar16 + 0x20);
            in_XMM0 = *(undefined1 (*) [16])(param_1 + 0x1d0);
            *(undefined1 (*) [16])(puVar22 + 1) = in_XMM0;
            puVar22[3] = *(undefined8 *)(param_1 + 0x1e0);
            uVar5 = *(undefined4 *)(param_1 + 0x1e8);
            *(float *)((longlong)puVar22 + 0x24) = fVar30 / fVar29;
            *(undefined4 *)(puVar22 + 4) = uVar5;
            *(undefined4 *)(puVar22 + 5) = 0;
          }
        }
      }
    }
    if (local_c0 != 0) {
      in_XMM0._0_8_ = FMemory::Free();
      in_XMM0._8_8_ = extraout_XMM0_Qb_08;
    }
  }
  uVar23 = 0;
  uVar27 = uVar23;
  if (0 < *(int *)(param_1 + 0x750)) {
    do {
      uVar19 = in_XMM0._8_8_;
      iVar25 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar25 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar25 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3,iVar25);
        uVar19 = extraout_XMM0_Qb_09;
      }
      puVar22 = (undefined8 *)0x0;
      puVar21 = (undefined8 *)((longlong)iVar25 * 0x30 + *param_3);
      if (puVar21 != (undefined8 *)0x0) {
        *puVar21 = 0;
        *(undefined8 *)((longlong)puVar21 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar21 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar21 + 0x1c) = 0;
        *(undefined4 *)(puVar21 + 5) = 0;
        puVar22 = puVar21;
      }
      *(float *)((longlong)puVar22 + 0x24) = fVar30;
      uVar26 = (int)uVar23 + 1;
      uVar23 = (ulonglong)uVar26;
      auVar8._4_8_ = uVar19;
      auVar8._0_4_ = uStack_ac;
      auVar28._0_8_ = auVar8._0_8_ << 0x20;
      auVar28._8_4_ = uVar3;
      auVar28._12_4_ = uVar1;
      *(undefined4 *)(puVar22 + 1) = uVar9;
      *(undefined4 *)((longlong)puVar22 + 0xc) = uVar10;
      puVar22[2] = auVar28._8_8_;
      in_XMM0._8_8_ = 0;
      in_XMM0._0_8_ = CONCAT44(uVar1,uVar1);
      puVar22[3] = CONCAT44(uVar1,uVar1);
      *(undefined4 *)(puVar22 + 4) = uVar1;
      *puVar22 = *(undefined8 *)(uVar27 + *(longlong *)(param_1 + 0x748));
      uVar27 = uVar27 + 8;
      local_b0 = uVar9;
      uStack_ac = uVar10;
      uStack_a8 = uVar3;
      uStack_a4 = uVar1;
      uStack_a0 = uVar1;
      uStack_9c = uVar1;
      local_98 = uVar1;
    } while ((int)uVar26 < *(int *)(param_1 + 0x750));
  }
  if (*(longlong *)(param_1 + 0x790) != 0) {
    iVar25 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar25 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar25 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3,iVar25);
    }
    puVar22 = (undefined8 *)0x0;
    puVar21 = (undefined8 *)((longlong)iVar25 * 0x30 + *param_3);
    if (puVar21 != (undefined8 *)0x0) {
      *puVar21 = 0;
      *(undefined8 *)((longlong)puVar21 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar21 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar21 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar21 + 0x24) = 0x3f800000;
      puVar22 = puVar21;
    }
    *(undefined4 *)(puVar22 + 1) = uVar9;
    *(undefined4 *)((longlong)puVar22 + 0xc) = uVar10;
    puVar22[2] = CONCAT44(uVar1,uVar3);
    puVar22[3] = CONCAT44(uVar1,uVar1);
    *(undefined4 *)(puVar22 + 4) = uVar1;
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x790) + 0xd8);
    if (lVar16 == 0) {
      iVar25 = 0;
    }
    else {
      iVar25 = *(int *)(lVar16 + 4);
    }
    if (*(int *)(param_1 + 0x804) < 0) {
      fVar29 = ((float)iVar25 / (float)(*(int *)(param_1 + 0x6f8) + 1)) * fVar30;
    }
    else {
      fVar29 = (float)(-1 << (0xdU - (char)*(int *)(param_1 + 0x804) & 0x1f));
    }
    *(float *)((longlong)puVar22 + 0x24) = fVar29;
    *puVar22 = *(undefined8 *)(param_1 + 0x790);
    local_b0 = uVar9;
    uStack_ac = uVar10;
    uStack_a8 = uVar3;
    uStack_a4 = uVar1;
    uStack_a0 = uVar1;
    uStack_9c = uVar1;
    local_98 = uVar1;
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    iVar25 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar25 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar25 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3,iVar25);
    }
    puVar22 = (undefined8 *)0x0;
    puVar21 = (undefined8 *)((longlong)iVar25 * 0x30 + *param_3);
    if (puVar21 != (undefined8 *)0x0) {
      *puVar21 = 0;
      *(undefined8 *)((longlong)puVar21 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar21 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar21 + 0x1c) = 0;
      *(undefined4 *)(puVar21 + 5) = 0;
      puVar22 = puVar21;
    }
    *(undefined4 *)(puVar22 + 1) = uVar9;
    *(undefined4 *)((longlong)puVar22 + 0xc) = uVar10;
    puVar22[2] = CONCAT44(uVar1,uVar3);
    puVar22[3] = CONCAT44(uVar1,uVar1);
    *(undefined4 *)(puVar22 + 4) = uVar1;
    *(float *)((longlong)puVar22 + 0x24) = fVar30;
    *puVar22 = *(undefined8 *)(param_1 + 0x758);
  }
  return;
  while( true ) {
    iVar20 = iVar20 + 1;
    plVar15 = plVar15 + 6;
    if ((int)param_3[1] <= iVar20) break;
LAB_141f18820:
    if (*plVar15 == *(longlong *)(lVar6 + 0x40)) {
      if (lVar18 == 0) {
        *(float *)((longlong)plVar15 + 0x24) = fVar30 * *(float *)(lVar17 + 0x44);
      }
      else {
        fVar29 = *(float *)(lVar18 + 0x48);
        if (*(float *)(lVar18 + 0x48) <= *(float *)(lVar18 + 0x44)) {
          fVar29 = *(float *)(lVar18 + 0x44);
        }
        *(float *)((longlong)plVar15 + 0x24) = fVar29 * fVar30;
      }
      break;
    }
  }
LAB_141f18755:
  lVar14 = lVar14 + 1;
  if (iVar4 <= lVar14) goto LAB_141f18761;
  goto LAB_141f186c0;
}



// FUNCTION 141f18dc0 FUN_141f18dc0 body=529 status=ok
// SIG undefined FUN_141f18dc0(void)

void FUN_141f18dc0(float param_1,int *param_2,int *param_3,int param_4,int param_5,uint *param_6,
                  byte param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  if (0.0 < param_1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ac8ed8) &&
       (_Init_thread_header(&DAT_146ac8ed8), DAT_146ac8ed8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146ac8ed0 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.Lightmass.ExpandTerrainComponents");
      _Init_thread_footer(&DAT_146ac8ed8);
    }
    if ((DAT_146ac8ed0 == (longlong *)0x0) ||
       (iVar1 = (**(code **)(*DAT_146ac8ed0 + 0x68))(), iVar1 == 1)) {
      iVar2 = 1;
      iVar1 = DAT_1464ca280;
      iVar4 = DAT_1464ca284;
    }
    else {
      iVar2 = 0;
      iVar1 = iVar2;
      iVar4 = iVar2;
    }
    fVar6 = (float)iVar1;
    if (1.0 <= param_1) {
      fVar6 = fVar6 / param_1;
    }
    fVar7 = (float)iVar4;
    if (1.0 <= param_1) {
      fVar7 = fVar7 / param_1;
    }
    iVar1 = (int)fVar6 >> (param_7 & 0x1f);
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    *param_2 = iVar1;
    iVar1 = (int)fVar7 >> (param_7 & 0x1f);
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    *param_3 = iVar1;
    iVar1 = param_5;
    if (1.0 <= param_1) {
      iVar1 = param_4 + 1;
    }
    uVar5 = 0x1000;
    if ((int)((float)iVar1 * param_1) < 0x1001) {
      uVar5 = (int)((float)iVar1 * param_1);
    }
    *param_6 = uVar5;
    iVar1 = (*param_2 << (param_7 & 0x1f)) * 2;
    if (param_1 < 1.0) {
      param_4 = iVar1 + param_5;
    }
    else {
      param_4 = iVar1 + 1 + param_4;
    }
    iVar1 = 0x1000;
    if ((int)((float)param_4 * param_1) < 0x1001) {
      iVar1 = (int)((float)param_4 * param_1);
    }
    uVar3 = uVar5;
    if ((int)uVar5 < iVar1) {
      while (0 < (int)uVar3) {
        uVar5 = *param_6;
        uVar3 = ~(-uVar5 & uVar5) & uVar5;
        *param_6 = uVar3;
      }
      *param_6 = uVar5 * 2;
      if (iVar1 * iVar1 <= (int)(uVar5 * uVar5 * 2)) {
        *param_6 = uVar5;
      }
    }
  }
  return;
}



// FUNCTION 141f19020 GetTypeHash body=279 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(ulonglong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(param_1 + 1,0x10);
  iVar3 = (int)(*param_1 >> 4);
  uVar5 = 0x9e3779b9U - iVar3 ^ iVar3 << 8;
  uVar2 = -(uVar5 + iVar3) ^ uVar5 >> 0xd;
  uVar4 = (iVar3 - uVar5) - uVar2 ^ uVar2 >> 0xc;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 << 0x10;
  uVar2 = (uVar2 - uVar5) - uVar4 ^ uVar5 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar2 >> 3;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 << 10;
  uVar2 = ((uVar2 - uVar5) - uVar4 ^ uVar5 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar2) - uVar1 ^ uVar2 << 8;
  uVar5 = (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xd;
  uVar1 = (uVar2 - uVar4) - uVar5 ^ uVar5 >> 0xc;
  uVar2 = (uVar4 - uVar1) - uVar5 ^ uVar1 << 0x10;
  uVar4 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 5;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  return (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
}



// FUNCTION 141f19170 FUN_141f19170 body=665 status=ok
// SIG undefined FUN_141f19170(void)

void FUN_141f19170(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *local_38;
  uint local_30;
  uint local_2c;
  
  lVar3 = USignificanceManager::GetWorld();
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x77c) == '\0')) {
    puVar4 = (undefined8 *)0x0;
    plVar10 = *(longlong **)(param_1 + 0x718);
    local_38 = (undefined8 *)0x0;
    local_2c = 0;
    puVar5 = (undefined8 *)((longlong)*(int *)(param_1 + 0x720) & 0x1fffffffffffffff);
    if (plVar10 + *(int *)(param_1 + 0x720) < plVar10) {
      puVar5 = puVar4;
    }
    puVar7 = puVar4;
    puVar8 = puVar4;
    puVar11 = puVar4;
    if (puVar5 == (undefined8 *)0x0) goto LAB_141f19364;
    do {
      lVar3 = *plVar10;
      if (lVar3 != 0) {
        iVar6 = (int)puVar7;
        local_30 = iVar6 + 1;
        if ((int)puVar4 < (int)local_30) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,puVar7);
          lVar3 = *plVar10;
          puVar4 = (undefined8 *)(ulonglong)local_2c;
          puVar8 = local_38;
        }
        puVar7 = (undefined8 *)(ulonglong)local_30;
        puVar8[iVar6] = lVar3;
      }
      iVar6 = (int)puVar7;
      plVar10 = plVar10 + 1;
      puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    } while (puVar11 != puVar5);
    if (iVar6 != 0) {
      iVar2 = (int)param_2[1];
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + iVar6) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
        iVar2 = (int)param_2[1];
      }
      puVar4 = (undefined8 *)(*param_2 + (longlong)iVar2 * 8);
      puVar5 = puVar8;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
        uVar9 = (int)puVar7 - 1;
        puVar7 = (undefined8 *)(ulonglong)uVar9;
      } while (uVar9 != 0);
      goto LAB_141f19354;
    }
  }
  else {
    puVar4 = (undefined8 *)0x0;
    plVar10 = *(longlong **)(param_1 + 0x728);
    local_38 = (undefined8 *)0x0;
    local_2c = 0;
    puVar5 = (undefined8 *)((longlong)*(int *)(param_1 + 0x730) & 0x1fffffffffffffff);
    if (plVar10 + *(int *)(param_1 + 0x730) < plVar10) {
      puVar5 = puVar4;
    }
    puVar7 = puVar4;
    puVar8 = puVar4;
    puVar11 = puVar4;
    if (puVar5 == (undefined8 *)0x0) goto LAB_141f19364;
    do {
      lVar3 = *plVar10;
      if (lVar3 != 0) {
        iVar6 = (int)puVar7;
        local_30 = iVar6 + 1;
        if ((int)puVar4 < (int)local_30) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,puVar7);
          lVar3 = *plVar10;
          puVar4 = (undefined8 *)(ulonglong)local_2c;
          puVar8 = local_38;
        }
        puVar7 = (undefined8 *)(ulonglong)local_30;
        puVar8[iVar6] = lVar3;
      }
      iVar6 = (int)puVar7;
      plVar10 = plVar10 + 1;
      puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    } while (puVar11 != puVar5);
    if (iVar6 != 0) {
      iVar2 = (int)param_2[1];
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + iVar6) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
        iVar2 = (int)param_2[1];
      }
      puVar4 = (undefined8 *)(*param_2 + (longlong)iVar2 * 8);
      puVar5 = puVar8;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
        uVar9 = (int)puVar7 - 1;
        puVar7 = (undefined8 *)(ulonglong)uVar9;
      } while (uVar9 != 0);
LAB_141f19354:
      *(int *)(param_2 + 1) = (int)param_2[1] + iVar6;
    }
  }
  if (puVar8 != (undefined8 *)0x0) {
    FMemory::Free(puVar8);
  }
LAB_141f19364:
  if (*(longlong *)(param_1 + 0x708) != 0) {
    iVar6 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar6 * 8) = *(undefined8 *)(param_1 + 0x708);
  }
  if (*(longlong *)(param_1 + 0x710) != 0) {
    iVar6 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar6 * 8) = *(undefined8 *)(param_1 + 0x710);
  }
  if (*(longlong *)(param_1 + 0x840) == 0) {
    return;
  }
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2);
  return;
}



// FUNCTION 141f19410 FUN_141f19410 body=261 status=ok
// SIG undefined FUN_141f19410(void)

undefined8 * FUN_141f19410(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  cVar1 = FUN_142730ad0(param_1,param_3);
  uVar2 = 0;
  if ((cVar1 == '\0') ||
     (uVar3 = 0x400, (*(uint *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 0x8000) == 0)) {
    uVar3 = uVar2;
  }
  uVar3 = *(uint *)((longlong)param_2 + 4) & 0xfffffbff | uVar3;
  *(uint *)((longlong)param_2 + 4) = uVar3;
  uVar3 = ((*(uint *)(param_1 + 0x20) >> 1 & 0xff) << 0xc ^ uVar3) & 0x1000 ^ uVar3;
  *(uint *)((longlong)param_2 + 4) = uVar3;
  if (*(char *)(param_1 + 0x2c) != '\x01') {
    uVar2 = 0x100000;
  }
  *(uint *)((longlong)param_2 + 4) = uVar2 | uVar3 & 0xffefffff | 0x1000000;
  FUN_1425a2630(param_1 + 0x568,param_2);
  if (((DAT_146ac8ae9 == '\0') && ((*(uint *)(param_1 + 0x18) & 0x300) == 0)) &&
     ((~(byte)(*(uint *)(param_1 + 0x18) >> 0x1c) & 1) != 0)) {
    *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x100;
  }
  else {
    *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x200;
  }
  uVar2 = 0;
  if (0 < DAT_1464ce040) {
    cVar1 = FUN_142730880(param_1,param_3);
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar2 = 0x800;
    }
  }
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffff7ff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | uVar2;
  return param_2;
}



// FUNCTION 141f19520 FUN_141f19520 body=134 status=ok
// SIG undefined FUN_141f19520(void)

undefined8 FUN_141f19520(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x90);
  if (lVar2 != 0) {
    lVar3 = FUN_141f1f2c0();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(lVar2 + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(lVar2 + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if (((char)uVar4 == '\0') ||
       (uVar4 = *(ulonglong *)(param_1 + 0x90),
       ((*(uint *)(param_1 + 0x1e0) ^ *(uint *)(uVar4 + 0x1e0)) & 2) != 0)) {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  uVar5 = FUN_142598ae0(param_1);
  return uVar5;
}



// FUNCTION 141f195d0 InaccurateFindNearestOnSegment body=2295 status=ok
// SIG undefined InaccurateFindNearestOnSegment(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FInterpCurve<FVector>::InaccurateFindNearestOnSegment
                (longlong *param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 local_148 [48];
  float local_118;
  float fStack_114;
  float local_108 [4];
  float local_f8 [4];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  float local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_1468387a8 ^ (ulonglong)local_148;
  lVar5 = 0;
  iVar4 = (int)param_1[1] + -1;
  iVar8 = 0;
  if (((char)param_1[2] == '\0') || (param_3 != iVar4)) {
    iVar8 = param_3 + 1;
  }
  if (((char)param_1[2] == '\0') || (param_3 != iVar4)) {
    lVar10 = *param_1;
    local_108[0] = *(float *)((longlong)iVar8 * 0x2c + lVar10);
  }
  else {
    lVar10 = *param_1;
    local_108[0] = *(float *)((longlong)(int)param_1[1] * 0x2c + -0x2c + lVar10) +
                   *(float *)((longlong)param_1 + 0x14);
  }
  lVar9 = (longlong)param_3 * 0x2c;
  cVar3 = *(char *)(lVar10 + 0x28 + lVar9);
  if (cVar3 == '\x02') {
    fVar14 = *(float *)(lVar10 + 4 + lVar9) - *param_2;
    fVar25 = *(float *)(lVar10 + 8 + lVar9) - param_2[1];
    fVar13 = *(float *)(lVar10 + 0xc + lVar9) - param_2[2];
    lVar5 = (longlong)iVar8 * 0x2c;
    fVar22 = *(float *)(lVar5 + 8 + lVar10) - param_2[1];
    fVar15 = *(float *)(lVar5 + 4 + lVar10) - *param_2;
    fVar14 = fVar25 * fVar25 + fVar14 * fVar14 + fVar13 * fVar13;
    fVar13 = *(float *)(lVar5 + 0xc + lVar10) - param_2[2];
    fVar13 = fVar22 * fVar22 + fVar15 * fVar15 + fVar13 * fVar13;
    if (fVar13 <= fVar14) {
      *param_4 = fVar13;
    }
    else {
      *param_4 = fVar14;
      local_108[0] = *(float *)(lVar9 + *param_1);
    }
  }
  else {
    fVar13 = local_108[0] - *(float *)(lVar10 + lVar9);
    lVar11 = (longlong)iVar8 * 0x2c;
    if (cVar3 == '\0') {
      fVar14 = *(float *)(lVar10 + 4 + lVar9);
      fVar15 = *(float *)(lVar10 + 8 + lVar9);
      fVar23 = *(float *)(lVar11 + 4 + lVar10) - fVar14;
      fVar22 = *(float *)(lVar10 + 0xc + lVar9);
      fVar19 = *(float *)(lVar11 + 8 + lVar10) - fVar15;
      fVar26 = *(float *)(lVar11 + 0xc + lVar10) - fVar22;
      fVar28 = (-1.0 / (fVar19 * fVar19 + fVar23 * fVar23 + fVar26 * fVar26)) *
               ((fVar15 - param_2[1]) * fVar19 + (fVar14 - *param_2) * fVar23 +
               (fVar22 - param_2[2]) * fVar26);
      fVar25 = 0.0;
      if ((0.0 <= fVar28) && (fVar25 = fVar28, 1.0 <= fVar28)) {
        fVar25 = 1.0;
      }
      fVar15 = (fVar19 * fVar25 + fVar15) - param_2[1];
      fVar14 = (fVar23 * fVar25 + fVar14) - *param_2;
      fVar22 = (fVar26 * fVar25 + fVar22) - param_2[2];
      *param_4 = fVar15 * fVar15 + fVar14 * fVar14 + fVar22 * fVar22;
      local_108[0] = fVar25 * fVar13 + *(float *)(*param_1 + lVar9);
    }
    else {
      puVar7 = &local_e8;
      fVar23 = fVar13 * *(float *)(lVar10 + 0x1c + lVar9);
      lVar12 = 3;
      fVar26 = fVar13 * *(float *)(lVar10 + 0x20 + lVar9);
      local_e0 = *(undefined4 *)(lVar10 + 0xc + lVar9);
      fVar14 = *(float *)(lVar10 + 8 + lVar9);
      local_e8 = *(undefined8 *)(lVar10 + 4 + lVar9);
      local_108[0] = 0.0;
      fVar22 = *(float *)(lVar11 + 0x10 + lVar10) * fVar13;
      local_108[1] = 0.5;
      fVar25 = *(float *)(lVar11 + 0x14 + lVar10) * fVar13;
      local_108[2] = 1.0;
      fVar28 = *(float *)(lVar11 + 0x18 + lVar10) * fVar13;
      fVar31 = fVar13 * *(float *)(lVar10 + 0x24 + lVar9);
      fVar15 = *(float *)(lVar11 + 0xc + lVar10);
      local_f8[2] = fVar31 * 0.125 + *(float *)(lVar10 + 0xc + lVar9) * 0.5 + fVar28 * -0.125 +
                    fVar15 * 0.5;
      fVar19 = fVar13 + fVar13;
      local_dc = CONCAT44(fVar26 * 0.125 + fVar14 * 0.5 + fVar25 * -0.125 +
                          *(float *)(lVar11 + 8 + lVar10) * 0.5,
                          fVar23 * 0.125 + *(float *)(lVar10 + 4 + lVar9) * 0.5 + fVar22 * -0.125 +
                          *(float *)(lVar11 + 4 + lVar10) * 0.5);
      local_d0 = *(undefined8 *)(lVar11 + 4 + lVar10);
      local_d4 = local_f8[2];
      local_c8 = *(undefined4 *)(lVar11 + 0xc + lVar10);
      do {
        fVar29 = *(float *)(puVar7 + 1);
        fVar30 = 1.0;
        lVar6 = 3;
        fVar1 = *(float *)(lVar10 + 0xc + lVar9);
        fVar16 = *(float *)(lVar11 + 8 + lVar10) * 6.0;
        fVar17 = fVar15 * 6.0;
        fVar20 = *(float *)(lVar11 + 4 + lVar10) * 6.0;
        local_118 = (float)*puVar7;
        fVar27 = *(float *)((longlong)local_108 + lVar5);
        fVar2 = *(float *)(lVar10 + 4 + lVar9);
        fStack_114 = (float)((ulonglong)*puVar7 >> 0x20);
        do {
          fVar15 = fVar27 * fVar27;
          fVar24 = fVar27 * (((fVar14 * -6.0 - fVar26 * 4.0) -
                             fVar19 * *(float *)(lVar11 + 0x14 + lVar10)) + fVar16) +
                   fVar15 * (((fVar25 + fVar26) * 3.0 + *(float *)(lVar10 + 8 + lVar9) * 6.0) -
                            fVar16) + fVar26;
          fVar18 = fVar27 * (((fVar2 * -6.0 - fVar23 * 4.0) -
                             *(float *)(lVar11 + 0x10 + lVar10) * fVar19) + fVar20) +
                   fVar15 * (((fVar22 + fVar23) * 3.0 + fVar2 * 6.0) - fVar20) + fVar23;
          fVar21 = fVar27 * (((fVar1 * -6.0 - fVar31 * 4.0) -
                             fVar19 * *(float *)(lVar11 + 0x18 + lVar10)) + fVar17) +
                   fVar15 * (((fVar31 + fVar28) * 3.0 + fVar1 * 6.0) - fVar17) + fVar31;
          fVar15 = fVar30 * -0.75;
          fVar29 = (fVar24 * (param_2[1] - fStack_114) + (*param_2 - local_118) * fVar18 +
                   (param_2[2] - fVar29) * fVar21) /
                   (fVar24 * fVar24 + fVar18 * fVar18 + fVar21 * fVar21);
          if ((fVar15 <= fVar29) && (fVar15 = fVar29, fVar30 * 0.75 <= fVar29)) {
            fVar15 = fVar30 * 0.75;
          }
          fVar27 = fVar27 + fVar15;
          if (0.0 <= fVar27) {
            if (1.0 <= fVar27) {
              fVar27 = 1.0;
            }
          }
          else {
            fVar27 = 0.0;
          }
          fVar30 = ABS(fVar15);
          fVar15 = fVar27 * fVar27;
          fVar18 = fVar15 * fVar27;
          fVar29 = fVar18 - fVar15;
          fVar24 = fVar15 * 3.0 - (fVar18 + fVar18);
          fVar21 = (fVar18 - (fVar15 + fVar15)) + fVar27;
          fVar18 = ((fVar18 + fVar18) - fVar15 * 3.0) + 1.0;
          local_118 = fVar21 * fVar23 + *(float *)(lVar10 + 4 + lVar9) * fVar18 + fVar22 * fVar29 +
                      fVar24 * *(float *)(lVar11 + 4 + lVar10);
          fVar15 = *(float *)(lVar11 + 0xc + lVar10);
          fStack_114 = fVar21 * fVar26 + *(float *)(lVar10 + 8 + lVar9) * fVar18 + fVar25 * fVar29 +
                       *(float *)(lVar11 + 8 + lVar10) * fVar24;
          fVar29 = fVar31 * fVar21 + fVar18 * *(float *)(lVar10 + 0xc + lVar9) + fVar28 * fVar29 +
                   fVar24 * fVar15;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        fVar1 = param_2[1];
        fVar2 = *param_2;
        fVar16 = param_2[2];
        puVar7 = (undefined8 *)((longlong)puVar7 + 0xc);
        *(float *)((longlong)local_108 + lVar5) = fVar27 * fVar13 + *(float *)(lVar10 + lVar9);
        *(float *)((longlong)local_f8 + lVar5) =
             (fStack_114 - fVar1) * (fStack_114 - fVar1) + (local_118 - fVar2) * (local_118 - fVar2)
             + (fVar29 - fVar16) * (fVar29 - fVar16);
        lVar5 = lVar5 + 4;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if ((local_f8[1] < local_f8[0]) || (local_f8[2] < local_f8[0])) {
        if (local_f8[2] < local_f8[1]) {
          *param_4 = local_f8[2];
          local_108[0] = local_108[2];
        }
        else {
          *param_4 = local_f8[1];
          local_108[0] = local_108[1];
        }
      }
      else {
        *param_4 = local_f8[0];
      }
    }
  }
  return local_108[0];
}



// FUNCTION 141f19ed0 FUN_141f19ed0 body=266 status=ok
// SIG undefined FUN_141f19ed0(void)

void FUN_141f19ed0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  longlong local_res10;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::operator=(plVar1,0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,&local_res10,*(longlong *)(param_1 + 0x40),&DAT_146ac8a28,
               *(undefined4 *)(param_1 + 0x30));
    if (plVar1 != &local_res10) {
      puVar4 = (undefined8 *)*plVar1;
      *plVar1 = local_res10;
      lVar7 = 0;
      local_res10 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar4 + 1);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if ((*(char *)(puVar4 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
            LOCK();
            bVar8 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar8) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar8) {
              uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar6 != 0) {
                lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar7 + 8) = puVar4;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  return;
}



// FUNCTION 141f19fe0 FUN_141f19fe0 body=313 status=ok
// SIG undefined FUN_141f19fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f19fe0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  longlong local_50;
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
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    local_58 = 0;
    local_50 = param_1 + 0x40;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_34 = 0;
    uVar3 = 1;
    local_48 = 1;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    cVar2 = DoSkeletalMeshIndexBuffersNeedSRV();
    if (cVar2 != '\0') {
      uVar3 = 0x201;
    }
    local_78 = &local_58;
    local_88 = iVar1 * 2;
    local_80 = uVar3;
    (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_68,&DAT_146ab6e78,2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    if (cVar2 != '\0') {
      (**(code **)(*DAT_146ab6358 + 0x4a0))
                (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_68);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    }
  }
  return;
}



// FUNCTION 141f1a120 FUN_141f1a120 body=317 status=ok
// SIG undefined FUN_141f1a120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f1a120(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  longlong local_50;
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
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    local_58 = 0;
    local_50 = param_1 + 0x40;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_34 = 0;
    uVar3 = 1;
    local_48 = 1;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    cVar2 = DoSkeletalMeshIndexBuffersNeedSRV();
    if (cVar2 != '\0') {
      uVar3 = 0x201;
    }
    local_78 = &local_58;
    local_88 = iVar1 * 4;
    local_80 = uVar3;
    (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_68,&DAT_146ab6e78,4);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    if (cVar2 != '\0') {
      (**(code **)(*DAT_146ab6358 + 0x4a0))
                (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_68);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
    }
  }
  return;
}



// FUNCTION 141f1a260 FUN_141f1a260 body=432 status=ok
// SIG undefined FUN_141f1a260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f1a260(longlong param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  float **local_78;
  undefined1 local_68 [8];
  float *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 1;
  local_78 = &local_60;
  local_34 = 0;
  iVar6 = 0;
  local_60 = (float *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_80 = &local_58;
  local_44 = _DAT_1468b5d78;
  uStack_3c = uRam00000001468b5d80;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = 1;
  (**(code **)(*DAT_146ab6358 + 0x480))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(int *)(param_1 + 0x3c) << 4);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  iVar4 = *(int *)(param_1 + 0x44);
  pfVar1 = local_60;
  iVar7 = iVar6;
  if (0 < iVar4) {
    do {
      if (0 < iVar4) {
        iVar5 = *(int *)(param_1 + 0x40);
        iVar9 = iVar6;
        do {
          iVar8 = iVar6;
          iVar4 = iVar5;
          if (0 < iVar5) {
            do {
              if (0 < iVar4) {
                iVar2 = iVar6;
                do {
                  iVar3 = iVar2 + 1;
                  pfVar1[1] = (float)iVar8;
                  pfVar1[2] = (float)iVar9;
                  pfVar1[3] = (float)iVar7;
                  *pfVar1 = (float)iVar2;
                  pfVar1 = pfVar1 + 4;
                  iVar5 = *(int *)(param_1 + 0x40);
                  iVar4 = iVar5;
                  iVar2 = iVar3;
                } while (iVar3 < iVar5);
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar4);
          }
          iVar4 = *(int *)(param_1 + 0x44);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 141f1a410 FUN_141f1a410 body=280 status=ok
// SIG undefined FUN_141f1a410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f1a410(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  void **local_78;
  undefined1 local_68 [8];
  void *local_60;
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
  local_48 = 1;
  local_78 = &local_60;
  local_34 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_80 = &local_58;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = 1;
  (**(code **)(*DAT_146ab6358 + 0x480))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x40));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  _guard_xfg_dispatch_icall_nop
            (local_60,*(void **)(param_1 + 0x38),(longlong)*(int *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 141f1a530 FUN_141f1a530 body=219 status=ok
// SIG undefined FUN_141f1a530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f1a530(longlong param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  undefined1 local_128 [4];
  undefined2 auStack_124 [126];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_28 = 0;
  puVar2 = (undefined1 *)FUN_1419e2500(param_1,local_138,param_1 + 0x658,0);
  uVar1 = local_28;
  lVar4 = (longlong)(int)local_28;
  iVar3 = (int)local_28 + 1;
  local_28 = CONCAT44(local_28._4_4_,iVar3);
  if (local_28._4_4_ < iVar3) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_128,uVar1 & 0xffffffff);
  }
  local_128[lVar4 * 8] = *puVar2;
  lVar4 = lVar4 * 8;
  local_128[lVar4 + 1] = puVar2[1];
  local_128[lVar4 + 2] = puVar2[2];
  local_128[lVar4 + 3] = puVar2[3];
  *(undefined2 *)(local_128 + lVar4 + 4) = *(undefined2 *)(puVar2 + 4);
  *(undefined2 *)(local_128 + lVar4 + 6) = *(undefined2 *)(puVar2 + 6);
  FUN_1419f1da0(param_1,local_128);
  return;
}



// FUNCTION 141f1a610 FUN_141f1a610 body=372 status=ok
// SIG undefined FUN_141f1a610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f1a610(longlong param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  undefined1 local_128 [4];
  undefined2 auStack_124 [126];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  iVar5 = 0;
  local_28 = 0;
  puVar2 = (undefined1 *)FUN_1419e2500(param_1,local_138,param_1 + 0x668,0);
  uVar1 = local_28;
  lVar4 = (longlong)(int)local_28;
  iVar3 = (int)local_28 + 1;
  local_28 = CONCAT44(local_28._4_4_,iVar3);
  if (local_28._4_4_ < iVar3) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_128,uVar1 & 0xffffffff);
  }
  lVar4 = lVar4 * 8;
  local_128[lVar4] = *puVar2;
  local_128[lVar4 + 1] = puVar2[1];
  local_128[lVar4 + 2] = puVar2[2];
  local_128[lVar4 + 3] = puVar2[3];
  *(undefined2 *)(local_128 + lVar4 + 4) = *(undefined2 *)(puVar2 + 4);
  *(undefined2 *)(local_128 + lVar4 + 6) = *(undefined2 *)(puVar2 + 6);
  if (0 < *(int *)(param_1 + 0x698)) {
    do {
      puVar2 = (undefined1 *)
               FUN_1419e2500(param_1,local_138,param_1 + 0x678 + (longlong)iVar5 * 0x10,iVar5 + 1);
      uVar1 = local_28;
      lVar4 = (longlong)(int)local_28;
      iVar3 = (int)local_28 + 1;
      local_28 = CONCAT44(local_28._4_4_,iVar3);
      if (local_28._4_4_ < iVar3) {
        TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(local_128,uVar1 & 0xffffffff);
      }
      lVar4 = lVar4 * 8;
      iVar5 = iVar5 + 1;
      local_128[lVar4] = *puVar2;
      local_128[lVar4 + 1] = puVar2[1];
      local_128[lVar4 + 2] = puVar2[2];
      local_128[lVar4 + 3] = puVar2[3];
      *(undefined2 *)(local_128 + lVar4 + 4) = *(undefined2 *)(puVar2 + 4);
      *(undefined2 *)(local_128 + lVar4 + 6) = *(undefined2 *)(puVar2 + 6);
    } while (iVar5 < *(int *)(param_1 + 0x698));
  }
  FUN_1419f1da0(param_1,local_128);
  return;
}



// FUNCTION 141f1a790 FUN_141f1a790 body=696 status=ok
// SIG undefined FUN_141f1a790(void)

char * FUN_141f1a790(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                    char param_5,char *param_6,float param_7)

{
  int iVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar15;
  undefined1 auVar13 [12];
  undefined8 extraout_XMM0_Qb;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0xe8);
  lVar4 = FUN_14274f0c0(param_2);
  lVar5 = operator_new(0xc0,param_4);
  if (lVar5 == 0) {
    pcVar6 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)FLandscapeComponentSceneProxy::FViewCustomDataLOD::FViewCustomDataLOD(lVar5);
  }
  fVar14 = 0.0;
  *(float *)(pcVar6 + 4) = param_7;
  if (param_7 < 0.0) {
    param_7 = (float)FUN_141f156f0(param_1,lVar4,*(longlong *)(param_1 + 0x578) + 0x1d0,
                                   *(undefined4 *)(param_1 + 0x420),
                                   CONCAT44(uVar15,*(undefined4 *)
                                                    (*(longlong *)(param_1 + 0x578) + 0x1e8)));
    *(float *)(pcVar6 + 4) = param_7;
  }
  auVar11._0_8_ = FUN_141f11c20(param_1,lVar4,param_7,param_3,pcVar6,0);
  auVar11._8_8_ = extraout_XMM0_Qb;
  auVar13 = auVar11._4_12_;
  if (param_5 != '\0') {
    *pcVar6 = *param_6;
    if (pcVar6[1] == '\0') {
      uVar8 = 0;
      do {
        lVar5 = uVar8 * 0x20;
        cVar3 = pcVar6[lVar5 + 0x18];
        pcVar6[lVar5 + 0x10] = -1;
        if (((1 < *(int *)(param_1 + 0x450)) && (*(char *)(param_1 + 0x3f8) < '\0')) &&
           (cVar3 = cVar3 * '\x05', pcVar6[1] != '\0')) {
          cVar3 = cVar3 + '\x04';
        }
        cVar2 = (char)uVar8;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        pcVar6[lVar5 + 0x10] = cVar3 + cVar2;
      } while ((int)uVar7 < 4);
    }
    else {
      cVar3 = pcVar6[0x18];
      pcVar6[0x10] = -1;
      if (((1 < *(int *)(param_1 + 0x450)) && (*(char *)(param_1 + 0x3f8) < '\0')) &&
         (cVar3 = cVar3 * '\x05', pcVar6[1] != '\0')) {
        cVar3 = cVar3 + '\x04';
      }
      pcVar6[0x10] = cVar3;
    }
  }
  if (1 < *(int *)(*(longlong *)(param_1 + 0x130) + 8)) {
    if (*(longlong *)(param_1 + 0x528) != 0) {
      fVar14 = (float)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x528) + 0x60) + 0x78);
    }
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x3f0) + 0x60) + 0x78);
    auVar13 = (undefined1  [12])0x0;
    pcVar6[0xa0] = '\0';
    pcVar6[0xa1] = '\0';
    pcVar6[0xa2] = '\0';
    pcVar6[0xa3] = '\0';
    pcVar6[0xa4] = '\0';
    pcVar6[0xa5] = '\0';
    pcVar6[0xa6] = '\0';
    pcVar6[0xa7] = '\0';
    *(float *)(pcVar6 + 0xa8) = (float)iVar1;
    *(float *)(pcVar6 + 0xac) = fVar14;
  }
  pcVar6[0xb0] = '\0';
  pcVar6[0xb1] = '\0';
  pcVar6[0xb2] = -0x80;
  pcVar6[0xb3] = '?';
  pcVar6[0xb4] = '\0';
  pcVar6[0xb5] = '\0';
  pcVar6[0xb6] = '\0';
  pcVar6[0xb7] = '\0';
  if (*(char *)(param_1 + 0x434) != '\0') {
    if ((((byte)(*pcVar6 + 1U) < 2) || (*pcVar6 == '\x02')) && (*(char *)(param_1 + 0x435) != '\0'))
    {
      auVar12._0_4_ = SQRT(*(float *)(param_1 + 0x430));
      auVar12._4_12_ = auVar13;
      fVar9 = (float)ComputeBoundsDrawDistance
                               (auVar12._0_8_,
                                *(float *)(*(longlong *)(param_1 + 0x578) + 0x1e8) * 0.5,
                                lVar4 + 0x4d0);
      fVar14 = *(float *)(param_1 + 0x438) * *(float *)(param_1 + 0x438);
      if (*(float *)(param_1 + 0x430) <= fVar14) {
        fVar14 = *(float *)(param_1 + 0x430);
      }
      fVar10 = (float)ComputeBoundsDrawDistance
                                (SQRT(fVar14),
                                 *(float *)(*(longlong *)(param_1 + 0x578) + 0x1e8) * 0.5,
                                 lVar4 + 0x4d0);
      fVar14 = fVar10 - fVar9;
      if (fVar9 <= fVar10 - fVar9) {
        fVar14 = fVar9;
      }
      *(float *)(pcVar6 + 0xb0) = fVar9 / (fVar9 - fVar14);
      *(float *)(pcVar6 + 0xb4) = -1.0 / (fVar14 - fVar9);
    }
  }
  return pcVar6;
}



// FUNCTION 141f1aa50 FUN_141f1aa50 body=39 status=ok
// SIG undefined FUN_141f1aa50(void)

void FUN_141f1aa50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144eef678;
    return;
  }
  return;
}



// FUNCTION 141f1aa80 Insert body=98 status=ok
// SIG undefined Insert(void)

void FRawStaticIndexBuffer16or32<unsigned_short>::Insert(longlong param_1,int param_2,int param_3)

{
  void *_Src;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar1 + param_3;
  if (*(int *)(param_1 + 0x54) < iVar1 + param_3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x48),iVar1);
  }
  _Src = (void *)(*(longlong *)(param_1 + 0x48) + (longlong)param_2 * 2);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + (longlong)param_3 * 2),_Src,(longlong)(iVar1 - param_2) * 2);
  return;
}



// FUNCTION 141f1aaf0 Insert body=99 status=ok
// SIG undefined Insert(void)

void FRawStaticIndexBuffer16or32<unsigned_int>::Insert(longlong param_1,int param_2,int param_3)

{
  void *_Src;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar1 + param_3;
  if (*(int *)(param_1 + 0x54) < iVar1 + param_3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x48),iVar1);
  }
  _Src = (void *)(*(longlong *)(param_1 + 0x48) + (longlong)param_2 * 4);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + (longlong)param_3 * 4),_Src,(longlong)(iVar1 - param_2) << 2)
  ;
  return;
}



// FUNCTION 141f1ab90 ModifyCompilationEnvironment body=195 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FLandscapeVertexFactoryMobile::ModifyCompilationEnvironment
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res18 [16];
  longlong local_38 [4];
  longlong *local_18;
  longlong *local_10;
  
  local_38[3] = 2;
  local_38[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],&DAT_143f591f0,4);
  local_38[0] = 0;
  local_38[1] = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"NUM_VF_PACKED_INTERPOLANTS",0x36);
  local_18 = local_38;
  local_10 = local_38 + 2;
  FUN_140497620(param_3 + 0x200,local_res18,&local_18,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f1acc0 FUN_141f1acc0 body=68 status=ok
// SIG undefined FUN_141f1acc0(void)

void FUN_141f1acc0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  lVar2 = (longlong)*(int *)(param_1 + 1000) * 0x60 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x60) {
    FUN_141f1b3b0(lVar1);
  }
  return;
}



// FUNCTION 141f1ad10 FUN_141f1ad10 body=1004 status=ok
// SIG undefined FUN_141f1ad10(void)

void FUN_141f1ad10(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18 [4];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [160];
  
  local_res8[0] = 0;
  local_res10[0] = 0;
  local_res18[0] = 1;
  fVar9 = (float)FUN_141f18dc0(param_1,local_res8,local_res10,*(undefined4 *)(param_1 + 0x45c),
                               *(int *)(param_1 + 0x450) * (*(int *)(param_1 + 0x454) + 1),
                               local_res18,*(undefined1 *)(param_1 + 0x464));
  iVar5 = local_res10[0];
  iVar4 = local_res8[0];
  iVar2 = *(int *)(param_1 + 0x454);
  iVar8 = *(int *)(param_1 + 0x460) >> (*(byte *)(param_1 + 0x464) & 0x1f);
  fVar11 = fVar9 / (float)(iVar8 + local_res8[0] * 2);
  fVar9 = fVar9 / (float)(iVar8 + local_res10[0] * 2);
  fVar10 = 1.0 / (float)*(int *)(param_1 + 0x45c);
  local_1a8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x88);
  local_188 = *(undefined8 *)(param_1 + 0xa0);
  uStack_180 = *(undefined8 *)(param_1 + 0xa8);
  fVar12 = (float)(iVar8 + -1) * fVar9 * fVar10;
  fVar10 = (float)(iVar8 + -1) * fVar11 * fVar10;
  local_198 = *(undefined8 *)(param_1 + 0x90);
  uStack_190 = *(undefined8 *)(param_1 + 0x98);
  local_178 = *(undefined8 *)(param_1 + 0xb0);
  uStack_170 = *(undefined8 *)(param_1 + 0xb8);
  puVar6 = (undefined8 *)FMatrix::InverseFast(&local_1a8,local_c8);
  puVar1 = (undefined8 *)(param_1 + 0x480);
  uVar7 = puVar6[1];
  *(undefined8 *)(param_1 + 0x5d0) = *puVar6;
  *(undefined8 *)(param_1 + 0x5d8) = uVar7;
  uVar7 = puVar6[3];
  *(undefined8 *)(param_1 + 0x5e0) = puVar6[2];
  *(undefined8 *)(param_1 + 0x5e8) = uVar7;
  uVar7 = puVar6[5];
  *(undefined8 *)(param_1 + 0x5f0) = puVar6[4];
  *(undefined8 *)(param_1 + 0x5f8) = uVar7;
  uVar7 = puVar6[6];
  uVar3 = puVar6[7];
  *puVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x600) = uVar7;
  *(undefined8 *)(param_1 + 0x608) = uVar3;
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x4b8) = *(undefined8 *)(param_1 + 0xb8);
  FMatrix::RemoveScaling(puVar1);
  local_168 = *(undefined8 *)(param_1 + 0x510);
  uStack_160 = *(undefined8 *)(param_1 + 0x518);
  local_158 = *(undefined8 *)(param_1 + 0x4d0);
  uStack_150 = *(undefined8 *)(param_1 + 0x4d8);
  local_f8 = *(undefined8 *)(param_1 + 0x490);
  uStack_f0 = *(undefined8 *)(param_1 + 0x498);
  local_d8 = *(undefined8 *)(param_1 + 0x4b0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x4b8);
  local_108 = *puVar1;
  uStack_100 = *(undefined8 *)(param_1 + 0x488);
  local_e8 = *(undefined8 *)(param_1 + 0x4a0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x4a8);
  local_138 = (float)*(int *)(param_1 + 0x458);
  fStack_11c = (float)*(int *)(param_1 + 0x454);
  fStack_134 = 1.0 / fStack_11c;
  fStack_140 = (float)iVar5 * fVar9;
  fStack_13c = (float)iVar4 * fVar11;
  fStack_130 = (float)*(int *)(param_1 + 0x46c);
  uStack_124 = *(undefined4 *)(param_1 + 0x524);
  local_128 = *(undefined4 *)(param_1 + 0x520);
  fStack_12c = (float)*(int *)(param_1 + 0x470);
  uStack_120 = *(undefined4 *)(param_1 + 0x4e0);
  local_118 = (float)iVar2 * fVar10;
  fStack_114 = (float)iVar2 * fVar12;
  uStack_110 = 0;
  uStack_10c = 0;
  local_148 = fVar10;
  fStack_144 = fVar12;
  if (*(longlong *)(param_1 + 0x5c8) == 0) {
    uVar7 = FMemory::Malloc(0xa0,0x10);
    *(undefined8 *)(param_1 + 0x5c8) = uVar7;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x5c8);
  *puVar1 = local_168;
  puVar1[1] = uStack_160;
  puVar1[2] = local_158;
  puVar1[3] = uStack_150;
  puVar1[4] = CONCAT44(fStack_144,local_148);
  puVar1[5] = CONCAT44(fStack_13c,fStack_140);
  puVar1[6] = CONCAT44(fStack_134,local_138);
  puVar1[7] = CONCAT44(fStack_12c,fStack_130);
  puVar1[8] = CONCAT44(uStack_124,local_128);
  puVar1[9] = CONCAT44(fStack_11c,uStack_120);
  puVar1[10] = CONCAT44(fStack_114,local_118);
  puVar1[0xb] = CONCAT44(uStack_10c,uStack_110);
  puVar1[0xc] = local_108;
  puVar1[0xd] = uStack_100;
  puVar1[0xe] = local_f8;
  puVar1[0xf] = uStack_f0;
  puVar1[0x10] = local_e8;
  puVar1[0x11] = uStack_e0;
  puVar1[0x12] = local_d8;
  puVar1[0x13] = uStack_d0;
  FRenderResource::UpdateRHI(param_1 + 0x588);
  return;
}



// FUNCTION 141f1b110 FUN_141f1b110 body=336 status=ok
// SIG undefined FUN_141f1b110(void)

void FUN_141f1b110(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  undefined4 *puVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  char local_res8;
  
  uVar4 = *(uint *)(param_1 + 0x450);
  local_res8 = '\0';
  if (0 < (int)uVar4) {
    do {
      cVar8 = '\0';
      uVar2 = uVar4;
      if (0 < (int)uVar4) {
        do {
          cVar5 = (char)uVar4 * local_res8 + cVar8;
          lVar3 = (ulonglong)(uint)(int)cVar5 * 0x20;
          cVar9 = -1;
          if (1 < (int)uVar2) {
            cVar9 = local_res8;
          }
          uVar1 = *(undefined4 *)(lVar3 + 0x14 + param_3);
          cVar7 = -1;
          if (1 < (int)uVar2) {
            cVar7 = cVar8;
          }
          uVar4 = 0;
          puVar6 = (undefined4 *)(param_3 + 0x20 + lVar3);
          do {
            uVar10 = FUN_141f17a50(param_1,param_2,uVar1,uVar4 & 0xff,cVar7,cVar9,cVar5);
            uVar4 = uVar4 + 1;
            *puVar6 = uVar10;
            puVar6 = puVar6 + 1;
          } while ((int)uVar4 < 4);
          uVar2 = *(uint *)(param_1 + 0x450);
          cVar8 = cVar8 + '\x01';
          uVar4 = uVar2 & 0xff;
        } while ((int)cVar8 < (int)uVar2);
      }
      uVar4 = uVar2;
      local_res8 = local_res8 + '\x01';
    } while ((int)local_res8 < (int)uVar4);
  }
  return;
}



// FUNCTION 141f1b260 FUN_141f1b260 body=270 status=ok
// SIG undefined FUN_141f1b260(void)

void FUN_141f1b260(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  
  UObject::PostLoad();
  uVar6 = 0;
  if (DAT_146ac4740 != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0xa0);
    uVar7 = (longlong)*(int *)(param_1 + 0xa8) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0xa8) < puVar4) {
      uVar7 = uVar6;
    }
    uVar5 = uVar6;
    if (uVar7 != 0) {
      do {
        lVar2 = DAT_146aefc60;
        plVar1 = (longlong *)*puVar4;
        plVar3 = (longlong *)UWorld::AddOnActorSpawnedHandler(plVar1,local_res8);
        if (*plVar3 != lVar2) {
          (**(code **)(*plVar1 + 0x640))(plVar1,lVar2);
          (**(code **)(*plVar1 + 0x70))(plVar1,1);
        }
        (**(code **)(*plVar1 + 0x70))(plVar1,1);
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar7);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0xa0);
  uVar7 = (longlong)*(int *)(param_1 + 0xa8) & 0x1fffffffffffffff;
  if (puVar4 + *(int *)(param_1 + 0xa8) < puVar4) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    do {
      FUN_1423974f0(*puVar4,0);
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != uVar7);
  }
  return;
}



// FUNCTION 141f1b370 PostLoad body=55 status=ok
// SIG undefined PostLoad(void)

void UMaterialExpressionLandscapeLayerSwitch::PostLoad(undefined8 param_1)

{
  int iVar1;
  
  UMaterialExpression::PostLoad();
  iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar1 < 0x108) {
    AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
    return;
  }
  return;
}



// FUNCTION 141f1b3b0 FUN_141f1b3b0 body=582 status=ok
// SIG undefined FUN_141f1b3b0(void)

void FUN_141f1b3b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 *local_38;
  longlong *local_30;
  
  if (*(char *)(param_1 + 8) == '\0') {
    TSet<TTuple<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>,TDefaultMapHashableKeyFuncs<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1464ce060,&local_res8,param_1 + 0x10);
    if (((int)local_res8 == -1) ||
       (lVar5 = (longlong)(int)local_res8 * 0x70 + DAT_1464ce060, lVar5 == 0)) {
      local_res10 = param_1 + 0x10;
      FUN_141f0ab00(&DAT_1464ce060,&local_res8,&local_res10,0);
      lVar5 = (longlong)(int)local_res8 * 0x70 + DAT_1464ce060;
    }
    puVar1 = (undefined8 *)(param_1 + 0x28);
    plVar6 = (longlong *)(lVar5 + 0x18);
    TSet<TTuple<FIntPoint,FLandscapeNeighborInfo_const_*>,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>,FDefaultSetAllocator>
    ::FindId(plVar6,&local_res8,*(undefined8 *)(param_1 + 0x28));
    if ((((int)local_res8 == -1) || (lVar5 = *plVar6 + (longlong)(int)local_res8 * 0x18, lVar5 == 0)
        ) || (*(longlong *)(lVar5 + 8) == 0)) {
      local_30 = &local_res10;
      local_res10 = param_1;
      local_38 = puVar1;
      FUN_141f0ad50(plVar6,&local_res8,&local_38,0);
      local_res8._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
      local_res8 = CONCAT44(local_res8._4_4_ + -1,(int)*puVar1);
      *(undefined1 *)(param_1 + 8) = 1;
      TSet<TTuple<FIntPoint,FLandscapeNeighborInfo_const_*>,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>,FDefaultSetAllocator>
      ::FindId(plVar6,&local_res8,local_res8);
      lVar5 = 0;
      lVar7 = lVar5;
      if (((int)local_res8 != -1) &&
         (lVar4 = *plVar6 + (longlong)(int)local_res8 * 0x18, lVar4 != 0)) {
        lVar7 = *(longlong *)(lVar4 + 8);
      }
      *(longlong *)(param_1 + 0x30) = lVar7;
      local_res8._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
      local_res8 = CONCAT44(local_res8._4_4_,(int)*puVar1 + -1);
      TSet<TTuple<FIntPoint,FLandscapeNeighborInfo_const_*>,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>,FDefaultSetAllocator>
      ::FindId(plVar6,&local_res8,local_res8);
      lVar4 = lVar5;
      if (((int)local_res8 != -1) &&
         (lVar3 = *plVar6 + (longlong)(int)local_res8 * 0x18, lVar3 != 0)) {
        lVar4 = *(longlong *)(lVar3 + 8);
      }
      *(longlong *)(param_1 + 0x38) = lVar4;
      local_res8._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
      local_res8 = CONCAT44(local_res8._4_4_,(int)*puVar1 + 1);
      TSet<TTuple<FIntPoint,FLandscapeNeighborInfo_const_*>,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>,FDefaultSetAllocator>
      ::FindId(plVar6,&local_res8,local_res8);
      lVar3 = lVar5;
      if (((int)local_res8 != -1) &&
         (lVar2 = *plVar6 + (longlong)(int)local_res8 * 0x18, lVar2 != 0)) {
        lVar3 = *(longlong *)(lVar2 + 8);
      }
      *(longlong *)(param_1 + 0x40) = lVar3;
      local_res8._4_4_ = (int)((ulonglong)*puVar1 >> 0x20);
      local_res8 = CONCAT44(local_res8._4_4_ + 1,(int)*puVar1);
      TSet<TTuple<FIntPoint,FLandscapeNeighborInfo_const_*>,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>,FDefaultSetAllocator>
      ::FindId(plVar6,&local_res8,local_res8);
      if (((int)local_res8 != -1) &&
         (lVar3 = *plVar6 + (longlong)(int)local_res8 * 0x18, lVar3 != 0)) {
        lVar5 = *(longlong *)(lVar3 + 8);
      }
      *(longlong *)(param_1 + 0x48) = lVar5;
      if (lVar7 != 0) {
        *(longlong *)(lVar7 + 0x48) = param_1;
        lVar4 = *(longlong *)(param_1 + 0x38);
      }
      if (lVar4 != 0) {
        *(longlong *)(lVar4 + 0x40) = param_1;
      }
      if (*(longlong *)(param_1 + 0x40) != 0) {
        *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x38) = param_1;
      }
      if (*(longlong *)(param_1 + 0x48) != 0) {
        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x30) = param_1;
      }
    }
  }
  return;
}



// FUNCTION 141f1b600 Rehash body=651 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FIntPoint,FLandscapeNeighborInfo_const_*>,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
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
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar7 = 0;
      uVar14 = (ulonglong)uVar9;
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar7;
        uVar7 = uVar7 + 1;
        *(undefined4 *)((longlong)plVar11 + uVar10 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_28;
      }
      uVar9 = *puVar15;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_141f1b73f;
        uVar9 = puVar15[lVar6 + 1];
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
      if (iVar4 < iStack_44) {
LAB_141f1b73f:
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
        puVar3 = (undefined8 *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar13 = (uint)((ulonglong)*puVar3 >> 0x20);
        uVar12 = (int)*puVar3 - uVar13 ^ uVar13 >> 0xd;
        uVar9 = (-0x61c88647 - uVar13) - uVar12 ^ uVar12 << 8;
        uVar13 = (uVar13 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar13 ^ uVar13 >> 0xc;
        uVar9 = (uVar9 - uVar12) - uVar13 ^ uVar12 << 0x10;
        uVar13 = (uVar13 - uVar9) - uVar12 ^ uVar9 >> 5;
        uVar12 = (uVar12 - uVar9) - uVar13 ^ uVar13 >> 3;
        uVar9 = (uVar9 - uVar12) - uVar13 ^ uVar12 << 10;
        uVar9 = ((uVar13 - uVar9) - uVar12 ^ uVar9 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar3 + 0x14) = uVar9;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)(puVar3 + 2) =
             *(undefined4 *)
              ((longlong)plVar11 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(int *)((longlong)plVar11 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141f1b890 Rehash body=525 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>,TDefaultMapHashableKeyFuncs<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141f1b9bf;
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
LAB_141f1b9bf:
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
        lVar6 = (longlong)iStack_2c * 0x70 + *param_1;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x6c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x68) =
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



// FUNCTION 141f1baa0 FUN_141f1baa0 body=47 status=ok
// SIG undefined FUN_141f1baa0(void)

void FUN_141f1baa0(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,0);
  return;
}



// FUNCTION 141f1bad0 Remove body=94 status=ok
// SIG undefined Remove(void)

void FRawStaticIndexBuffer16or32<unsigned_short>::Remove(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x50);
    iVar3 = (iVar2 - param_2) - param_3;
    if (iVar3 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x48);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + (longlong)param_2 * 2),
                 (void *)(lVar1 + (longlong)(param_2 + param_3) * 2),(longlong)iVar3 * 2);
      iVar2 = *(int *)(param_1 + 0x50);
    }
    *(int *)(param_1 + 0x50) = iVar2 - param_3;
    TArray<wchar_t,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 141f1bb30 Remove body=95 status=ok
// SIG undefined Remove(void)

void FRawStaticIndexBuffer16or32<unsigned_int>::Remove(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x50);
    iVar3 = (iVar2 - param_2) - param_3;
    if (iVar3 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x48);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + (longlong)param_2 * 4),
                 (void *)(lVar1 + (longlong)(param_2 + param_3) * 4),(longlong)iVar3 << 2);
      iVar2 = *(int *)(param_1 + 0x50);
    }
    *(int *)(param_1 + 0x50) = iVar2 - param_3;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 141f1bb90 Remove body=405 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FIntPoint,FLandscapeNeighborInfo_const_*>,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar9 = (longlong)(int)param_1[9] - 1;
  uVar8 = (uint)((ulonglong)param_2 >> 0x20);
  uVar13 = (int)param_2 - uVar8 ^ uVar8 >> 0xd;
  uVar12 = (-0x61c88647 - uVar8) - uVar13 ^ uVar13 << 8;
  uVar11 = (uVar8 - uVar12) - uVar13 ^ uVar12 >> 0xd;
  uVar13 = (uVar13 - uVar12) - uVar11 ^ uVar11 >> 0xc;
  uVar12 = (uVar12 - uVar13) - uVar11 ^ uVar13 << 0x10;
  uVar11 = (uVar11 - uVar12) - uVar13 ^ uVar12 >> 5;
  uVar13 = (uVar13 - uVar12) - uVar11 ^ uVar11 >> 3;
  uVar12 = (uVar12 - uVar13) - uVar11 ^ uVar13 << 10;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar4 = *(int *)((longlong)plVar10 +
                  (((longlong)(int)((uVar11 - uVar12) - uVar13) ^ (ulonglong)(uVar12 >> 0xf)) &
                  uVar9) * 4);
  if (iVar4 != -1) {
    lVar6 = *param_1;
    do {
      uVar7 = *(undefined8 *)(lVar6 + (longlong)iVar4 * 0x18);
      lVar2 = lVar6 + (longlong)iVar4 * 0x18;
      if (((int)uVar7 == (int)param_2) && ((uint)((ulonglong)uVar7 >> 0x20) == uVar8)) {
        uVar9 = (longlong)*(int *)(lVar2 + 0x14) & uVar9;
        puVar3 = (undefined4 *)((longlong)plVar10 + uVar9 * 4);
        iVar5 = *(int *)((longlong)plVar10 + uVar9 * 4);
        goto joined_r0x000141f1bccc;
      }
      iVar4 = *(int *)(lVar2 + 0x10);
    } while (iVar4 != -1);
  }
  return 0;
joined_r0x000141f1bccc:
  if (iVar5 == -1) {
LAB_141f1bcf4:
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar4,1);
    return 1;
  }
  if (iVar5 == iVar4) {
    *puVar3 = *(undefined4 *)(lVar2 + 0x10);
    goto LAB_141f1bcf4;
  }
  lVar1 = (longlong)iVar5 * 3 + 2;
  iVar5 = *(int *)(lVar6 + lVar1 * 8);
  puVar3 = (undefined4 *)(lVar6 + lVar1 * 8);
  goto joined_r0x000141f1bccc;
}



// FUNCTION 141f1bd30 Remove body=328 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>,TDefaultMapHashableKeyFuncs<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar3 = ::GetTypeHash(param_2);
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar3 = *(int *)((longlong)plVar6 + ((longlong)iVar3 & uVar7) * 4);
  if (iVar3 != -1) {
    lVar2 = *param_1;
    do {
      lVar5 = (longlong)iVar3 * 0x70;
      if ((*(longlong *)(lVar5 + lVar2) == *param_2) &&
         (((*(int *)(lVar5 + 0x14 + lVar2) == *(int *)((longlong)param_2 + 0x14) &&
           *(int *)(lVar5 + 0x10 + lVar2) == (int)param_2[2]) &&
          *(int *)(lVar5 + 0xc + lVar2) == *(int *)((longlong)param_2 + 0xc)) &&
          (int)param_2[1] == *(int *)(lVar5 + 8 + lVar2))) {
        if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_141f1be22;
        uVar7 = (longlong)*(int *)(lVar5 + 0x6c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000141f1bdfc;
      }
      iVar3 = *(int *)(lVar5 + 0x68 + lVar2);
    } while (iVar3 != -1);
  }
  return 0;
joined_r0x000141f1bdfc:
  if (iVar1 == -1) {
LAB_141f1be22:
    lVar5 = *param_1 + lVar5;
    *(undefined4 *)(lVar5 + 0x60) = 0;
    if (*(longlong *)(lVar5 + 0x58) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar5 + 0x18);
    TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar1 == iVar3) {
    *piVar4 = *(int *)(lVar5 + 0x68 + lVar2);
    goto LAB_141f1be22;
  }
  piVar4 = (int *)(lVar2 + 0x68 + (longlong)iVar1 * 0x70);
  iVar1 = *piVar4;
  goto joined_r0x000141f1bdfc;
}



// FUNCTION 141f1be80 ResizeGrow body=8 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FVertexStreamComponent,TFixedAllocator<2>_>::ResizeGrow(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 2;
  return;
}



// FUNCTION 141f1be90 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x14,0);
  iVar4 = (int)(uVar3 / 0x14);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x14,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141f1bf20 FUN_141f1bf20 body=123 status=ok
// SIG undefined FUN_141f1bf20(void)

void FUN_141f1bf20(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 2) {
      iVar2 = 1;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x78,0);
      iVar2 = (int)(uVar1 / 0x78);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x84)) {
    *(int *)(param_1 + 0x84) = iVar2;
    FUN_141e07900(param_1,*(undefined4 *)(param_1 + 0x80),iVar2,0x78);
  }
  return;
}



// FUNCTION 141f1bfa0 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x14,0);
    iVar3 = (int)(uVar1 / 0x14);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x14,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141f1c040 Serialize body=94 status=ok
// SIG undefined Serialize(void)

void FLandscapeVertexFactoryMobilePixelShaderParameters::Serialize
               (longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 8);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc);
  FUN_1419e0a40(uVar1,param_1 + 0x10);
  FUN_1419e0a40(param_2,param_1 + 0x18);
  return;
}



// FUNCTION 141f1c0a0 Serialize body=86 status=ok
// SIG undefined Serialize(void)

void FLandscapeVertexFactoryMobileVertexShaderParameters::Serialize
               (longlong param_1,undefined8 param_2)

{
  FUN_1419e0a40(param_2,param_1 + 8);
  FUN_1419e0a40(param_2,param_1 + 0xe);
  FUN_1419e0a40(param_2,param_1 + 0x14);
  FUN_1419e0a40(param_2,param_1 + 0x1a);
  FUN_1419e0a40(param_2,param_1 + 0x20);
  return;
}



// FUNCTION 141f1c100 Serialize body=65 status=ok
// SIG undefined Serialize(void)

void FLandscapeVertexFactoryPixelShaderParameters::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 8);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc);
  FUN_1419e0a40(uVar1,param_1 + 0x10);
  return;
}



// FUNCTION 141f1c150 Serialize body=134 status=ok
// SIG undefined Serialize(void)

void FLandscapeVertexFactoryVertexShaderParameters::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0x26);
  FUN_1419e0b60(param_2,param_1 + 0x2a);
  FUN_1419e0a40(param_2,param_1 + 0xe);
  FUN_1419e0a40(param_2,param_1 + 8);
  FUN_1419e0a40(param_2,param_1 + 0x14);
  FUN_1419e0a40(param_2,param_1 + 0x1a);
  FUN_1419e0a40(param_2,param_1 + 0x20);
  FUN_1419e0b60(param_2,param_1 + 0x2e);
  FUN_1419e0b60(param_2,param_1 + 0x32);
  return;
}



// FUNCTION 141f1c1e0 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464ce048);
  return;
}



// FUNCTION 141f1c210 thunk_FUN_142396660 body=5 status=ok
// SIG undefined thunk_FUN_142396660(void)

void thunk_FUN_142396660(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_14234e7d0();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0148);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if (cVar1 != '\0') {
      FBodyInstance::FixupData(param_1 + 0x3b0,param_1);
    }
  }
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if ((iVar2 < 0x18) && ((*(byte *)(param_1 + 0x2f3) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x2e7) = 1;
  }
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0148);
  if (iVar2 < 3) {
    *(undefined4 *)(param_1 + 0x2dc) = 0;
  }
  return;
}



// FUNCTION 141f1c220 Serialize body=96 status=ok
// SIG undefined Serialize(void)

void UMaterialExpressionLandscapeLayerBlend::Serialize(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  AActor::Serialize();
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(int *)(param_2 + 0x40) < 0x17c)) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    lVar2 = (longlong)*(int *)(param_1 + 0x48) * 0x88 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x88) {
      if (*(char *)(lVar1 + 8) == '\x01') {
        *(undefined1 *)(lVar1 + 8) = 0;
      }
    }
  }
  return;
}



// FUNCTION 141f1c280 Serialize body=98 status=ok
// SIG undefined Serialize(void)

void UMaterialExpressionLandscapeLayerSwitch::Serialize(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  AActor::Serialize();
  if (*(int *)(param_2 + 0x40) < 0xf5) {
    puVar1 = (undefined8 *)(param_1 + 0x70);
    puVar8 = (undefined8 *)(param_1 + 0x40);
    if (puVar8 != puVar1) {
      uVar2 = *puVar8;
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      uVar7 = *(undefined8 *)(param_1 + 0x68);
      *puVar8 = *puVar1;
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x98);
      *puVar1 = uVar2;
      *(undefined8 *)(param_1 + 0x78) = uVar3;
      *(undefined8 *)(param_1 + 0x80) = uVar4;
      *(undefined8 *)(param_1 + 0x88) = uVar5;
      *(undefined8 *)(param_1 + 0x90) = uVar6;
      *(undefined8 *)(param_1 + 0x98) = uVar7;
    }
  }
  return;
}



// FUNCTION 141f1c2f0 FUN_141f1c2f0 body=453 status=ok
// SIG undefined FUN_141f1c2f0(void)

void FUN_141f1c2f0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  ulonglong _Size;
  float local_38;
  float local_34;
  float local_30;
  
  FUN_141f1c910();
  if (*(short *)(param_1 + 0x1c) != 0) {
    lVar4 = *(longlong *)(param_3 + 0x48);
    bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_6 + 0x20) + 0x10) + 0x620);
    local_38 = (float)(bVar1 & 1);
    local_34 = (float)(bVar1 >> 1 & 1);
    local_30 = (float)(bVar1 >> 2 & 1);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
    uVar6 = (uint)*(ushort *)(param_1 + 0x1c);
    if (0xb < *(ushort *)(param_1 + 0x1c)) {
      uVar6 = 0xc;
    }
    _Size = (ulonglong)uVar6;
    if (uVar6 != 0) {
      uVar2 = *(ushort *)(param_1 + 0x1a);
      uVar3 = *(ushort *)(param_1 + 0x18);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = _Size + (longlong)_Dst;
      if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar6 + 0x10);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar7 = _Size + (longlong)_Dst;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar7;
      _guard_xfg_dispatch_icall_nop(_Dst,&local_38,_Size);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar9 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar9;
      *(undefined8 **)(param_2 + 8) = puVar9 + 1;
      puVar9[1] = 0;
      *(uint *)(puVar9 + 4) = (uint)uVar3;
      *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar2;
      *puVar9 = &PTR_LAB_143f594b0;
      puVar9[2] = uVar5;
      puVar9[3] = _Dst;
      *(uint *)(puVar9 + 5) = uVar6;
    }
  }
  return;
}



// FUNCTION 141f1c4c0 FUN_141f1c4c0 body=1090 status=ok
// SIG undefined FUN_141f1c4c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f1c4c0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  ulonglong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong local_88 [10];
  
  local_88[8] = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_98 = param_5;
  iVar10 = 0;
  puVar4 = *(undefined8 **)(param_6 + 0x20);
  lVar5 = puVar4[2];
  if (0 < *(int *)(param_3 + 0x10)) {
    lVar8 = 0;
    do {
      if (*(undefined **)(*(longlong *)(param_3 + 8) + lVar8 * 8) == &DAT_146ac8a00) {
        if (iVar10 != -1) {
          puVar13 = *(undefined4 **)(*(longlong *)(param_3 + 0x18) + (longlong)iVar10 * 8);
          *puVar13 = *(undefined4 *)(param_3 + 0xb8);
          goto LAB_141f1c565;
        }
        break;
      }
      iVar10 = iVar10 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_3 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac9030) && (_Init_thread_header(&DAT_146ac9030), DAT_146ac9030 == -1))
  {
    _DAT_146ac9028 = 0;
    _DAT_146ac902c = 0;
    DAT_146ac902e = 0;
    _Init_thread_footer(&DAT_146ac9030);
  }
  puVar13 = (undefined4 *)&DAT_146ac9028;
LAB_141f1c565:
  lVar8 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  SetUniformBufferParameter<FRHIVertexShader_*,FLandscapeUniformShaderParameters,FRHICommandList>
            (param_2,*(undefined8 *)(lVar8 + 0x38),puVar13,*puVar4);
  if (*(short *)(param_1 + 0xc) != 0) {
    lVar8 = *(longlong *)(param_3 + 0x48);
    local_a8 = 0;
    uStack_a0 = CONCAT44(1.0 / (float)*(int *)(lVar5 + 0x454),(float)*(int *)(lVar5 + 0x454));
    if (*(char *)(lVar8 + 0x28) == '\0') {
      FUN_1419f3850(lVar8);
    }
    local_b8 = 0;
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,*(undefined8 *)(lVar8 + 0x38),param_1 + 8,&local_a8);
  }
  lVar8 = local_98;
  if (*(short *)(param_1 + 0x1e) != 0) {
    pfVar1 = (float *)(local_98 + 0x8dc);
    pfVar2 = (float *)(local_98 + 0x8e0);
    pfVar3 = (float *)(local_98 + 0x8e4);
    lVar6 = *(longlong *)(param_3 + 0x48);
    local_98 = 0;
    local_a8 = 0;
    uStack_a0 = CONCAT44((float)*(int *)(lVar5 + 0x470) +
                         *(float *)(lVar5 + 0x604) * 1.0 + *pfVar3 * *(float *)(lVar5 + 0x5f4) +
                         *pfVar2 * *(float *)(lVar5 + 0x5e4) + *pfVar1 * *(float *)(lVar5 + 0x5d4),
                         (float)*(int *)(lVar5 + 0x46c) +
                         *(float *)(lVar5 + 0x600) * 1.0 + *pfVar3 * *(float *)(lVar5 + 0x5f0) +
                         *pfVar2 * *(float *)(lVar5 + 0x5e0) + *pfVar1 * *(float *)(lVar5 + 0x5d0));
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    local_b8 = 0;
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,*(undefined8 *)(lVar6 + 0x38),param_1 + 0x1a,&local_a8);
  }
  iVar10 = *(int *)(*(longlong *)(lVar5 + 0x140) + 0xe8);
  if ((iVar10 < 0) || (*(int *)(lVar8 + 0x1a50) <= iVar10)) {
    puVar11 = (ulonglong *)0x0;
  }
  else {
    puVar11 = *(ulonglong **)(*(longlong *)(lVar8 + 0x1a48) + (longlong)iVar10 * 8);
  }
  uVar12 = *(int *)((longlong)puVar4 + 0x1c) * *(int *)(lVar5 + 0x450) + *(int *)(puVar4 + 3);
  if (puVar11 != (ulonglong *)0x0) {
    if (*(short *)(param_1 + 0x12) != 0) {
      lVar8 = *(longlong *)(param_3 + 0x48);
      if (*(char *)(lVar8 + 0x28) == '\0') {
        FUN_1419f3850(lVar8);
      }
      local_b8 = 0;
      SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                (param_2,*(undefined8 *)(lVar8 + 0x38),param_1 + 0xe,puVar11 + 0x16);
    }
    if (*(short *)(param_1 + 0x24) != 0) {
      lVar8 = *(longlong *)(param_3 + 0x48);
      if (*(char *)((longlong)puVar11 + 1) == '\0') {
        local_a8 = 0;
        uStack_a0 = 0;
        *(undefined4 *)((longlong)&local_a8 + (longlong)(int)uVar12 * 4) =
             *(undefined4 *)((longlong)puVar11 + (longlong)(int)uVar12 * 4 + 0x90);
        if (*(char *)(lVar8 + 0x28) == '\0') {
          FUN_1419f3850(lVar8);
        }
        puVar9 = &local_a8;
      }
      else {
        if (*(char *)(lVar8 + 0x28) == '\0') {
          FUN_1419f3850(lVar8);
        }
        puVar9 = puVar11 + 0x12;
      }
      local_b8 = 0;
      SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                (param_2,*(undefined8 *)(lVar8 + 0x38),param_1 + 0x20,puVar9);
    }
    if (*(short *)(param_1 + 0x18) != 0) {
      local_88[0] = 0;
      local_88[1] = 0;
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[4] = 0;
      local_88[5] = 0;
      local_88[6] = 0;
      local_88[7] = 0;
      if (*(char *)((longlong)puVar11 + 1) == '\0') {
        uVar7 = (puVar11 + ((ulonglong)uVar12 + 1) * 4)[1];
        local_88[(longlong)(int)uVar12 * 2] = puVar11[((ulonglong)uVar12 + 1) * 4];
        local_88[(longlong)(int)uVar12 * 2 + 1] = uVar7;
      }
      else {
        puVar9 = local_88;
        lVar8 = 4;
        if (*(int *)(lVar5 + 0x450) == 1) {
          lVar8 = 1;
        }
        do {
          uVar7 = puVar11[5];
          *puVar9 = puVar11[4];
          puVar9[1] = uVar7;
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 2;
          puVar11 = puVar11 + 4;
        } while (lVar8 != 0);
      }
      lVar5 = *(longlong *)(param_3 + 0x48);
      if (*(char *)(lVar5 + 0x28) == '\0') {
        FUN_1419f3850(lVar5);
      }
      local_b8 = 0;
      SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
                (param_2,*(undefined8 *)(lVar5 + 0x38),param_1 + 0x14,local_88);
    }
  }
  return;
}



// FUNCTION 141f1c910 FUN_141f1c910 body=667 status=ok
// SIG undefined FUN_141f1c910(void)

void FUN_141f1c910(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Src;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong _Size;
  void *_Dst;
  
  lVar3 = *(longlong *)(param_6 + 0x20);
  if (*(short *)(param_1 + 0x14) != 0) {
    lVar4 = *(longlong *)(param_3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
    _Src = *(void **)(lVar3 + 8);
    uVar7 = (uint)*(ushort *)(param_1 + 0x14);
    if (0x3f < *(ushort *)(param_1 + 0x14)) {
      uVar7 = 0x40;
    }
    _Size = (ulonglong)uVar7;
    if (uVar7 != 0) {
      uVar1 = *(ushort *)(param_1 + 0x12);
      uVar2 = *(ushort *)(param_1 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar8 = (longlong)_Dst + _Size;
      if (*(ulonglong *)(param_2 + 0x38) < uVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar7 + 0x10);
        _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar8 = (longlong)_Dst + _Size;
      }
      *(ulonglong *)(param_2 + 0x30) = uVar8;
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar10 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar9;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_143f594b0;
      puVar10[2] = uVar5;
      *(uint *)(puVar10 + 4) = (uint)uVar2;
      *(uint *)((longlong)puVar10 + 0x24) = (uint)uVar1;
      puVar10[3] = _Dst;
      *(uint *)(puVar10 + 5) = uVar7;
    }
  }
  if (*(short *)(param_1 + 10) != 0) {
    lVar4 = *(longlong *)(param_3 + 0x48);
    if (*(char *)(lVar4 + 0x28) == '\0') {
      FUN_1419f3850(lVar4);
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x500) + 0x60);
    if (*(short *)(param_1 + 10) != 0) {
      *(undefined8 *)(lVar3 + 0x48) = DAT_1468b5a78;
      if (*(short *)(param_1 + 10) != 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x30);
        uVar1 = *(ushort *)(param_1 + 8);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar10 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30);
          puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar10 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar9;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar10;
        *(undefined8 **)(param_2 + 8) = puVar10 + 1;
        puVar10[1] = 0;
        *puVar10 = &PTR_LAB_143f59c80;
        puVar10[2] = uVar5;
        *(uint *)(puVar10 + 3) = (uint)uVar1;
        puVar10[4] = uVar6;
      }
    }
    if (*(short *)(param_1 + 0xe) != 0) {
      uVar6 = *(undefined8 *)(lVar3 + 0x38);
      uVar1 = *(ushort *)(param_1 + 0xc);
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
      puVar10[2] = uVar5;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[4] = uVar6;
    }
  }
  return;
}



// FUNCTION 141f1cbb0 FUN_141f1cbb0 body=2353 status=ok
// SIG undefined FUN_141f1cbb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f1cbb0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  int iVar18;
  undefined8 uVar19;
  undefined1 uVar20;
  uint uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar30;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  longlong local_198;
  undefined8 uStack_190;
  ulonglong local_188;
  float local_180;
  float local_17c;
  longlong local_178;
  char local_168 [20];
  undefined4 auStack_154 [31];
  undefined1 local_d8 [48];
  ulonglong local_a8 [14];
  undefined1 auVar29 [12];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  local_a8[8] = DAT_1468387a8 ^ (ulonglong)auStack_208;
  lVar14 = *(longlong *)(param_3 + 0x48);
  puVar7 = *(undefined8 **)(param_6 + 0x20);
  lVar2 = puVar7[2];
  local_1b8 = param_5;
  local_198 = param_2;
  local_178 = param_1;
  if (*(char *)(lVar14 + 0x28) == '\0') {
    FUN_1419f3850(lVar14);
  }
  uVar4 = 0;
  uVar19 = *(undefined8 *)(lVar14 + 0x38);
  local_1c8 = uVar19;
  if (0 < *(int *)(param_3 + 0x10)) {
    uVar9 = uVar4;
    do {
      iVar8 = (int)uVar9;
      if (*(undefined **)(*(longlong *)(param_3 + 8) + uVar4 * 8) == &DAT_146ac8a00) {
        if (iVar8 != -1) {
          puVar16 = *(undefined4 **)(*(longlong *)(param_3 + 0x18) + (longlong)iVar8 * 8);
          *puVar16 = *(undefined4 *)(param_3 + 0xb8);
          goto LAB_141f1cc93;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_3 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ac9030) && (_Init_thread_header(&DAT_146ac9030), DAT_146ac9030 == -1))
  {
    _DAT_146ac9028 = 0;
    _DAT_146ac902c = 0;
    DAT_146ac902e = 0;
    _Init_thread_footer(&DAT_146ac9030);
  }
  puVar16 = (undefined4 *)&DAT_146ac9028;
LAB_141f1cc93:
  SetUniformBufferParameter<FRHIVertexShader_*,FLandscapeUniformShaderParameters,FRHICommandList>
            (param_2,uVar19,puVar16,*puVar7);
  if (*(short *)(param_1 + 0x28) != 0) {
    uVar19 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0x3f0) + 0x60) + 0x30);
    local_1a8 = FUN_1404a0e20();
    if (*(short *)(param_1 + 0x28) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x26);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar12;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_143f59c50;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[2] = local_1c8;
      puVar10[4] = uVar19;
    }
    uVar4 = local_1a8;
    uVar19 = local_1c8;
    param_5 = local_1b8;
    if (*(short *)(param_1 + 0x2c) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x2a);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar10 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar12;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *puVar10 = &PTR_LAB_143f59c60;
      *(uint *)(puVar10 + 3) = (uint)uVar1;
      puVar10[2] = local_1c8;
      puVar10[4] = uVar4;
      uVar19 = local_1c8;
      param_5 = local_1b8;
    }
  }
  fVar30 = 0.0;
  if (*(short *)(param_1 + 0x12) != 0) {
    local_1e8 = (char *)((ulonglong)local_1e8 & 0xffffffff00000000);
    local_188 = (ulonglong)(uint)(float)(int)(char)*(byte *)(puVar7 + 4);
    local_180 = (float)((*(int *)(lVar2 + 0x458) >> (*(byte *)(puVar7 + 4) & 0x1f)) + -1);
    local_17c = 1.0 / local_180;
    SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
              (param_2,uVar19,param_1 + 0xe,&local_188);
  }
  uVar4 = FUN_14274f0c0(param_5);
  uVar19 = local_1c8;
  uVar21 = *(int *)((longlong)puVar7 + 0x1c) * *(int *)(lVar2 + 0x450) + *(int *)(puVar7 + 3);
  iVar8 = *(int *)(*(longlong *)(lVar2 + 0x140) + 0xe8);
  local_188 = uVar4;
  if (((iVar8 < 0) || (*(int *)(uVar4 + 0x1a50) <= iVar8)) ||
     (lVar14 = *(longlong *)(*(longlong *)(uVar4 + 0x1a48) + (longlong)iVar8 * 8), lVar14 == 0)) {
    local_1e8 = (char *)CONCAT44(local_1e8._4_4_,
                                 *(undefined4 *)(*(longlong *)(lVar2 + 0x578) + 0x1e8));
    uVar22 = FUN_141f156f0(lVar2,uVar4,*(longlong *)(lVar2 + 0x578) + 0x1d0,
                           *(undefined4 *)(lVar2 + 0x420));
    FLandscapeComponentSceneProxy::FViewCustomDataLOD::FViewCustomDataLOD(local_168);
    local_1e8 = local_168;
    local_1e0 = 1;
    auVar26._0_8_ = FUN_141f11c20(lVar2,local_1b8,uVar22,*(undefined4 *)(uVar4 + 0x11ec));
    uVar19 = local_1c8;
    auVar26._8_8_ = extraout_XMM0_Qb;
    auVar29 = auVar26._4_12_;
    if (*(short *)(param_1 + 0x1e) != 0) {
      if (*(longlong *)(lVar2 + 0x528) != 0) {
        fVar30 = (float)*(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x528) + 0x60) + 0x78);
      }
      local_1e8 = (char *)((ulonglong)local_1e8 & 0xffffffff00000000);
      local_1b8 = 0;
      local_1b0 = CONCAT44(fVar30,(float)*(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x3f0) + 0x60)
                                                 + 0x78));
      auVar27._0_8_ =
           SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                     (param_2,local_1c8,param_1 + 0x1a,&local_1b8);
      auVar27._8_8_ = extraout_XMM0_Qb_00;
      auVar29 = auVar27._4_12_;
    }
    if (*(short *)(param_1 + 0xc) != 0) {
      local_1b0 = 0;
      local_1b8 = 0x3f800000;
      if (((*(char *)(lVar2 + 0x434) != '\0') &&
          (((byte)(local_168[0] + 1U) < 2 || (local_168[0] == '\x02')))) &&
         (*(char *)(lVar2 + 0x435) != '\0')) {
        auVar28._0_4_ = SQRT(*(float *)(lVar2 + 0x430));
        auVar28._4_12_ = auVar29;
        fVar23 = (float)ComputeBoundsDrawDistance
                                  (auVar28._0_8_,
                                   *(float *)(*(longlong *)(lVar2 + 0x578) + 0x1e8) * 0.5,
                                   uVar4 + 0x4d0);
        fVar30 = *(float *)(lVar2 + 0x438) * *(float *)(lVar2 + 0x438);
        if (*(float *)(lVar2 + 0x430) <= fVar30) {
          fVar30 = *(float *)(lVar2 + 0x430);
        }
        fVar24 = (float)ComputeBoundsDrawDistance
                                  (SQRT(fVar30),
                                   *(float *)(*(longlong *)(lVar2 + 0x578) + 0x1e8) * 0.5,
                                   uVar4 + 0x4d0);
        fVar30 = fVar24 - fVar23;
        if (fVar23 <= fVar24 - fVar23) {
          fVar30 = fVar23;
        }
        local_1b8 = CONCAT44(-1.0 / (fVar30 - fVar23),fVar23 / (fVar23 - fVar30));
      }
      local_1e8 = (char *)((ulonglong)local_1e8 & 0xffffffff00000000);
      SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                (param_2,uVar19,param_1 + 8,&local_1b8);
    }
    if (*(short *)(param_1 + 0x24) != 0) {
      local_1e8 = (char *)((ulonglong)local_1e8 & 0xffffffff00000000);
      SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                (param_2,uVar19,param_1 + 0x20,local_d8);
    }
    if (*(short *)(param_1 + 0x18) != 0) {
      iVar8 = *(int *)(lVar2 + 0x450);
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      iVar13 = 0;
      local_a8[4] = 0;
      local_a8[5] = 0;
      local_a8[6] = 0;
      local_a8[7] = 0;
      local_1a8 = local_1a8 & 0xffffffff00000000;
      if (0 < iVar8) {
        do {
          local_1b8 = local_1b8 & 0xffffffff00000000;
          iVar18 = 0;
          if (0 < iVar8) {
            do {
              uVar4 = local_188;
              uVar21 = 0;
              uVar15 = iVar13 * iVar8 + iVar18;
              uVar20 = 0xff;
              uVar3 = 0xff;
              if (1 < iVar8) {
                uVar20 = (char)iVar18;
                uVar3 = (char)iVar13;
              }
              uVar22 = auStack_154[(ulonglong)uVar15 * 8];
              puVar11 = local_a8 + (longlong)(int)uVar15 * 2;
              do {
                local_1d8 = (undefined1)uVar15;
                local_1e8 = (char *)CONCAT71(local_1e8._1_7_,uVar20);
                local_1e0 = uVar3;
                uVar25 = FUN_141f17a50(lVar2,uVar4,uVar22,uVar21 & 0xff);
                uVar21 = uVar21 + 1;
                *(undefined4 *)puVar11 = uVar25;
                puVar11 = (ulonglong *)((longlong)puVar11 + 4);
              } while ((int)uVar21 < 4);
              iVar8 = *(int *)(lVar2 + 0x450);
              iVar18 = (int)local_1b8 + 1;
              local_1b8 = CONCAT44(local_1b8._4_4_,iVar18);
              iVar13 = (int)local_1a8;
            } while (iVar18 < iVar8);
          }
          iVar13 = iVar13 + 1;
          local_1a8 = CONCAT44(local_1a8._4_4_,iVar13);
          param_2 = local_198;
          param_1 = local_178;
          uVar19 = local_1c8;
        } while (iVar13 < iVar8);
      }
      local_1e8 = (char *)((ulonglong)local_1e8 & 0xffffffff00000000);
      SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
                (param_2,uVar19,param_1 + 0x14,local_a8);
    }
  }
  else {
    if (*(short *)(param_1 + 0xc) != 0) {
      local_1e8 = (char *)((ulonglong)local_1e8._4_4_ << 0x20);
      SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                (param_2,local_1c8,param_1 + 8,lVar14 + 0xb0);
    }
    if (*(short *)(param_1 + 0x1e) != 0) {
      if (*(longlong *)(lVar2 + 0x528) != 0) {
        fVar30 = (float)*(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x528) + 0x60) + 0x78);
      }
      local_1e8 = (char *)((ulonglong)local_1e8 & 0xffffffff00000000);
      local_198 = 0;
      uStack_190 = CONCAT44(fVar30,(float)*(int *)(*(longlong *)
                                                    (*(longlong *)(lVar2 + 0x3f0) + 0x60) + 0x78));
      SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                (param_2,uVar19,param_1 + 0x1a,&local_198);
    }
    if (*(short *)(param_1 + 0x24) != 0) {
      local_1e8 = (char *)((ulonglong)local_1e8 & 0xffffffff00000000);
      if (*(char *)(lVar14 + 1) == '\0') {
        plVar17 = &local_198;
        local_198 = 0;
        uStack_190 = 0;
        *(undefined4 *)((longlong)&local_198 + (longlong)(int)uVar21 * 4) =
             *(undefined4 *)(lVar14 + 0x90 + (longlong)(int)uVar21 * 4);
      }
      else {
        plVar17 = (longlong *)(lVar14 + 0x90);
      }
      SetShaderValue<FRHIVertexShader_*,FVector4,FRHICommandList>
                (param_2,uVar19,param_1 + 0x20,plVar17);
    }
    if (*(short *)(param_1 + 0x18) != 0) {
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[4] = 0;
      local_a8[5] = 0;
      local_a8[6] = 0;
      local_a8[7] = 0;
      if (*(char *)(lVar14 + 1) == '\0') {
        puVar11 = (ulonglong *)(((ulonglong)uVar21 + 1) * 0x20 + lVar14);
        uVar4 = puVar11[1];
        local_a8[(longlong)(int)uVar21 * 2] = *puVar11;
        local_a8[(longlong)(int)uVar21 * 2 + 1] = uVar4;
      }
      else {
        puVar11 = (ulonglong *)(lVar14 + 0x20);
        lVar14 = 4;
        puVar5 = local_a8;
        if (*(int *)(lVar2 + 0x450) == 1) {
          lVar14 = 1;
        }
        do {
          uVar4 = *puVar11;
          uVar9 = puVar11[1];
          puVar11 = puVar11 + 4;
          *puVar5 = uVar4;
          puVar5[1] = uVar9;
          lVar14 = lVar14 + -1;
          puVar5 = puVar5 + 2;
        } while (lVar14 != 0);
      }
      local_1e8 = (char *)((ulonglong)local_1e8 & 0xffffffff00000000);
      SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
                (param_2,uVar19,param_1 + 0x14,local_a8);
    }
  }
  if ((*(short *)(param_1 + 0x30) != 0) && (*(longlong *)(lVar2 + 0x528) != 0)) {
    uVar19 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0x528) + 0x60) + 0x30);
    uVar6 = FUN_1404a0e20();
    if (*(short *)(param_1 + 0x30) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x2e);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar12 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar12 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar12;
      *(undefined8 **)(param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_143f59c50;
      puVar12[2] = local_1c8;
      *(uint *)(puVar12 + 3) = (uint)uVar1;
      puVar12[4] = uVar19;
    }
    uVar19 = local_1c8;
    if (*(short *)(param_1 + 0x34) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x32);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar12 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar12 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar7;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar12;
      *(undefined8 **)(param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_143f59c60;
      puVar12[2] = uVar19;
      *(uint *)(puVar12 + 3) = (uint)uVar1;
      puVar12[4] = uVar6;
    }
  }
  return;
}



// FUNCTION 141f1d4f0 FUN_141f1d4f0 body=580 status=ok
// SIG undefined FUN_141f1d4f0(void)

ulonglong FUN_141f1d4f0(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  ulonglong *puVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  int *piVar6;
  
  if (param_4 == 0) {
LAB_141f1d71c:
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  else {
    if (*(char *)(param_1 + 0x38) == '\0') {
      piVar6 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
      if (*piVar6 < DAT_146ac8f00) {
        _Init_thread_header(&DAT_146ac8f00);
        if (DAT_146ac8f00 == -1) {
          FName::FName(&DAT_146ac8ef8,L"FLandscapeVertexFactory",1);
          _Init_thread_footer(&DAT_146ac8f00);
        }
      }
      if (*piVar6 < DAT_146ac8f10) {
        _Init_thread_header(&DAT_146ac8f10);
        if (DAT_146ac8f10 == -1) {
          FName::FName(&DAT_146ac8f08,L"FLandscapeXYOffsetVertexFactory",1);
          _Init_thread_footer(&DAT_146ac8f10);
        }
      }
      if (*piVar6 < DAT_146ac8f20) {
        _Init_thread_header(&DAT_146ac8f20);
        if (DAT_146ac8f20 == -1) {
          FName::FName(&DAT_146ac8f18,L"FLandscapeVertexFactoryMobile",1);
          _Init_thread_footer(&DAT_146ac8f20);
        }
      }
      in_RAX = *(ulonglong *)(param_4 + 0x20);
      if (((in_RAX != DAT_146ac8ef8) && (in_RAX != DAT_146ac8f08)) && (in_RAX != DAT_146ac8f18))
      goto LAB_141f1d71c;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146ac8ef0) {
        _Init_thread_header(&DAT_146ac8ef0);
        if (DAT_146ac8ef0 == -1) {
          FName::FName(&DAT_146ac8ee8,L"FLocalVertexFactory",1);
          _Init_thread_footer(&DAT_146ac8ef0);
        }
      }
      if (((param_2 < 0x1e) && (in_RAX = 0x25e2cf88, (0x25e2cf88U >> (param_2 & 0x1f) & 1) != 0)) ||
         (in_RAX = DAT_146ac8ee8, *(ulonglong *)(param_4 + 0x20) != DAT_146ac8ee8))
      goto LAB_141f1d71c;
      plVar2 = (longlong *)FUN_141f14f60();
      plVar4 = (longlong *)*plVar2;
      plVar2 = plVar4 + (int)plVar2[1];
      if (plVar4 != plVar2) {
        do {
          if (*plVar4 == *(longlong *)(param_3 + 0x18)) goto LAB_141f1d5f9;
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
      }
      plVar2 = (longlong *)FUN_141f15f60();
      puVar5 = (ulonglong *)*plVar2;
      puVar1 = puVar5 + (int)plVar2[1];
      if (puVar5 != puVar1) {
        in_RAX = *(ulonglong *)(param_3 + 0x18);
        do {
          if (*puVar5 == in_RAX) goto LAB_141f1d71c;
          puVar5 = puVar5 + 1;
        } while (puVar5 != puVar1);
      }
    }
LAB_141f1d5f9:
    uVar3 = BuildSettings::IsPromotedBuild(param_1,param_2,param_3,param_4);
  }
  return uVar3;
}



// FUNCTION 141f1d740 FUN_141f1d740 body=67 status=ok
// SIG undefined FUN_141f1d740(void)

undefined8 FUN_141f1d740(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_1419ef5f0();
  if (iVar2 < 2) {
    return 0;
  }
  cVar1 = (**(code **)(*param_2 + 0xd8))(param_2);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 141f1d790 ShouldCompilePermutation body=67 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8
FLandscapeVertexFactoryMobile::ShouldCompilePermutation(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FUN_1419ef5f0();
  if (1 < uVar2) {
    return 0;
  }
  cVar1 = (**(code **)(*param_2 + 0xd8))(param_2);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 141f1d7f0 UnregisterNeighbors body=301 status=ok
// SIG undefined UnregisterNeighbors(void)

void FLandscapeNeighborInfo::UnregisterNeighbors(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  int local_res8 [2];
  
  if ((char)param_1[1] != '\0') {
    TSet<TTuple<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>,TDefaultMapHashableKeyFuncs<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1464ce060,local_res8,param_1 + 2);
    plVar2 = (longlong *)0x0;
    plVar3 = plVar2;
    if (local_res8[0] != -1) {
      plVar3 = (longlong *)((longlong)local_res8[0] * 0x70 + DAT_1464ce060);
    }
    plVar5 = plVar3 + 3;
    if (plVar3 == (longlong *)0x0) {
      plVar5 = plVar2;
    }
    TSet<TTuple<FIntPoint,FLandscapeNeighborInfo_const_*>,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>,FDefaultSetAllocator>
    ::FindId(plVar5,local_res8,param_1[5]);
    if ((local_res8[0] != -1) && (lVar1 = *plVar5 + (longlong)local_res8[0] * 0x18, lVar1 != 0)) {
      plVar2 = *(longlong **)(lVar1 + 8);
    }
    if (plVar2 == param_1) {
      TSet<TTuple<FIntPoint,FLandscapeNeighborInfo_const_*>,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>,FDefaultSetAllocator>
      ::Remove(plVar5,param_1[5]);
      piVar4 = (int *)((longlong)plVar3 + 0x4c);
      plVar2 = plVar3 + 4;
      if (plVar3 == (longlong *)0x0) {
        piVar4 = (int *)&DAT_00000034;
        plVar2 = (longlong *)&DAT_00000008;
      }
      if ((int)*plVar2 == *piVar4) {
        TSet<TTuple<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>,TDefaultMapHashableKeyFuncs<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>,0>,FDefaultSetAllocator>
        ::Remove(&DAT_1464ce060,param_1 + 2);
      }
      else {
        if (param_1[6] != 0) {
          *(undefined8 *)(param_1[6] + 0x48) = 0;
        }
        if (param_1[7] != 0) {
          *(undefined8 *)(param_1[7] + 0x40) = 0;
        }
        if (param_1[8] != 0) {
          *(undefined8 *)(param_1[8] + 0x38) = 0;
        }
        if (param_1[9] != 0) {
          *(undefined8 *)(param_1[9] + 0x30) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 141f1d920 FUN_141f1d920 body=298 status=ok
// SIG undefined FUN_141f1d920(void)

void FUN_141f1d920(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar3 = ULandscapeInfoMap::GetPrivateStaticClass();
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    uVar4 = uVar8;
    plVar5 = *(longlong **)(param_1 + 0x78);
    uVar7 = uVar8;
    do {
      iVar6 = (int)uVar7;
      if (*plVar5 != 0) {
        lVar1 = *(longlong *)(*plVar5 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar3 = (*(longlong **)(param_1 + 0x78))[iVar6];
          uVar4 = FUN_1417987a0(lVar3,*(undefined8 *)(lVar3 + 0x20),0,0xefffffff,0,0,0xff800000);
          if (uVar4 != 0) {
            lVar3 = ULandscapeInfoMap::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_141f1da2b;
          }
          uVar4 = uVar8;
LAB_141f1da2b:
          *(longlong *)(uVar4 + 0x78) = param_1;
          *(ulonglong *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x78)) = uVar4;
          return;
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x80));
  }
  AddPerWorldLandscapeData(param_1);
  return;
}



// FUNCTION 141f1da50 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FLandscapeUniformShaderParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar3 = L"HeightmapUVScaleBias";
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
  *puVar3 = L"WeightmapUVScaleBias";
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
  *puVar3 = L"LandscapeLightmapScaleBias";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
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
  *puVar3 = L"SubsectionSizeVertsLayerUVPan";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x30;
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
  *puVar3 = L"SubsectionOffsetParams";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000040;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 4;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 141f1dcd0 FUN_141f1dcd0 body=47 status=ok
// SIG undefined FUN_141f1dcd0(void)

longlong FUN_141f1dcd0(void)

{
  if (DAT_146ac9208 == 0) {
    FUN_141786440(&DAT_146ac9208,&PTR_FUN_144ef9db0);
  }
  return DAT_146ac9208;
}



// FUNCTION 141f1dd10 FUN_141f1dd10 body=47 status=ok
// SIG undefined FUN_141f1dd10(void)

longlong FUN_141f1dd10(void)

{
  if (DAT_146ac9310 == 0) {
    FUN_141786a30(&DAT_146ac9310,&PTR_FUN_1464d05b0);
  }
  return DAT_146ac9310;
}



// FUNCTION 141f1dd40 FUN_141f1dd40 body=47 status=ok
// SIG undefined FUN_141f1dd40(void)

longlong FUN_141f1dd40(void)

{
  if (DAT_146ac9318 == 0) {
    FUN_141786a30(&DAT_146ac9318,&PTR_FUN_1464d05f0);
  }
  return DAT_146ac9318;
}



// FUNCTION 141f1dd70 FUN_141f1dd70 body=47 status=ok
// SIG undefined FUN_141f1dd70(void)

longlong FUN_141f1dd70(void)

{
  if (DAT_146ac9320 == 0) {
    FUN_141786a30(&DAT_146ac9320,&PTR_FUN_1464d0630);
  }
  return DAT_146ac9320;
}



// FUNCTION 141f1dda0 FUN_141f1dda0 body=47 status=ok
// SIG undefined FUN_141f1dda0(void)

longlong FUN_141f1dda0(void)

{
  if (DAT_146ac9328 == 0) {
    FUN_141786a30(&DAT_146ac9328,&PTR_FUN_1464d0670);
  }
  return DAT_146ac9328;
}



// FUNCTION 141f1ddd0 FUN_141f1ddd0 body=47 status=ok
// SIG undefined FUN_141f1ddd0(void)

longlong FUN_141f1ddd0(void)

{
  if (DAT_146ac9330 == 0) {
    FUN_141786a30(&DAT_146ac9330,&PTR_FUN_1464d0730);
  }
  return DAT_146ac9330;
}



// FUNCTION 141f1de00 FUN_141f1de00 body=47 status=ok
// SIG undefined FUN_141f1de00(void)

longlong FUN_141f1de00(void)

{
  if (DAT_146ac9338 == 0) {
    FUN_141786a30(&DAT_146ac9338,&PTR_FUN_1464d09d0);
  }
  return DAT_146ac9338;
}



// FUNCTION 141f1de30 FUN_141f1de30 body=47 status=ok
// SIG undefined FUN_141f1de30(void)

longlong FUN_141f1de30(void)

{
  if (DAT_146ac9340 == 0) {
    FUN_141786a30(&DAT_146ac9340,&PTR_FUN_1464d0a50);
  }
  return DAT_146ac9340;
}



// FUNCTION 141f1de60 FUN_141f1de60 body=47 status=ok
// SIG undefined FUN_141f1de60(void)

longlong FUN_141f1de60(void)

{
  if (DAT_146ac9348 == 0) {
    FUN_141786a30(&DAT_146ac9348,&PTR_FUN_1464d0b00);
  }
  return DAT_146ac9348;
}



// FUNCTION 141f1de90 FUN_141f1de90 body=47 status=ok
// SIG undefined FUN_141f1de90(void)

longlong FUN_141f1de90(void)

{
  if (DAT_146ac9350 == 0) {
    FUN_141786a30(&DAT_146ac9350,&PTR_FUN_1464d0bf0);
  }
  return DAT_146ac9350;
}



// FUNCTION 141f1dec0 FUN_141f1dec0 body=47 status=ok
// SIG undefined FUN_141f1dec0(void)

longlong FUN_141f1dec0(void)

{
  if (DAT_146ac9358 == 0) {
    FUN_141786a30(&DAT_146ac9358,&PTR_FUN_1464d0c70);
  }
  return DAT_146ac9358;
}



// FUNCTION 141f1df00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialExpressionLandscapeLayerCoords::GetPrivateStaticClass(void)

{
  if (DAT_146ac9440 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"MaterialExpressionLandscapeAutoPaintLayers",&DAT_146ac9440,
                  FUN_140447710,0x58,0x10000000,0,L"Engine",&LAB_141f1f9c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialExpressionCustomOutput::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ac9440;
}



// FUNCTION 141f1dfb0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong ULandscapeInfo::StaticClass(void)

{
  if (DAT_146ac9230 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeInfo",&DAT_146ac9230,FUN_140447710,0x200,
                  0x10000008,0,L"Engine",&LAB_141f1f8a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146ac9230;
}



// FUNCTION 141f1e050 FUN_141f1e050 body=47 status=ok
// SIG undefined FUN_141f1e050(void)

longlong FUN_141f1e050(void)

{
  if (DAT_146ac9188 == 0) {
    FUN_141786440(&DAT_146ac9188,&PTR_GetPrivateStaticClass_144efb790);
  }
  return DAT_146ac9188;
}



// FUNCTION 141f1e080 FUN_141f1e080 body=47 status=ok
// SIG undefined FUN_141f1e080(void)

longlong FUN_141f1e080(void)

{
  if (DAT_146ac9180 == 0) {
    FUN_141786a30(&DAT_146ac9180,&PTR_FUN_1464ce570);
  }
  return DAT_146ac9180;
}



// FUNCTION 141f1e0b0 FUN_141f1e0b0 body=53 status=ok
// SIG undefined FUN_141f1e0b0(void)

void FUN_141f1e0b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144f008a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f1e0f0 FUN_141f1e0f0 body=53 status=ok
// SIG undefined FUN_141f1e0f0(void)

void FUN_141f1e0f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144f01490;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f1e130 FUN_141f1e130 body=53 status=ok
// SIG undefined FUN_141f1e130(void)

void FUN_141f1e130(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144f009c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f1e180 FUN_141f1e180 body=162 status=ok
// SIG undefined FUN_141f1e180(void)

longlong FUN_141f1e180(void)

{
  if (DAT_146ac9150 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"Landscape",&DAT_146ac9150,FUN_140447710,0x7d8,0x10000000,0,
                  L"Engine",&LAB_141f1f740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_141ef6ab0,FUN_141f1ec00,&LAB_140447700
                  ,0);
  }
  return DAT_146ac9150;
}



// FUNCTION 141f1e230 FUN_141f1e230 body=47 status=ok
// SIG undefined FUN_141f1e230(void)

longlong FUN_141f1e230(void)

{
  if (DAT_146ac9360 == 0) {
    FUN_141786440(&DAT_146ac9360,&PTR_FUN_144efc3b0);
  }
  return DAT_146ac9360;
}



// FUNCTION 141f1e260 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialExpressionLandscapeGrassOutput::GetPrivateStaticClass(void)

{
  if (DAT_146ac9460 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"MaterialExpressionLandscapeGrassOutput",&DAT_146ac9460,
                  FUN_140447710,0x50,0x10000000,0,L"Engine",&LAB_141f1f9e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialExpressionCustomOutput::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ac9460;
}



// FUNCTION 141f1e330 FUN_141f1e330 body=162 status=ok
// SIG undefined FUN_141f1e330(void)

longlong FUN_141f1e330(void)

{
  if (DAT_146ac91c8 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeGizmoActor",&DAT_146ac91c8,FUN_140447710,0x458,
                  0x10000000,0,L"Engine",&LAB_141f1f780,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146ac91c8;
}



// FUNCTION 141f1e3e0 FUN_141f1e3e0 body=53 status=ok
// SIG undefined FUN_141f1e3e0(void)

void FUN_141f1e3e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144f015a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f1e430 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialExpressionLandscapeLayerBlend::GetPrivateStaticClass(void)

{
  if (DAT_146ac9488 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"MaterialExpressionLandscapeLayerBlend",&DAT_146ac9488,
                  FUN_140447710,0x60,0x10000000,0,L"Engine",&LAB_141f1fa00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialExpression::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ac9488;
}



// FUNCTION 141f1e4e0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong AArchVisCharacter::StaticClass(void)

{
  if (DAT_146ac9138 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"ControlPointMeshComponent",&DAT_146ac9138,FUN_140447710,
                  0x7b0,0x10000000,0,L"Engine",&LAB_141f1f800,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1423c80f0,thunk_FUN_142a232e0,
                  &LAB_140447700,0);
  }
  return DAT_146ac9138;
}



// FUNCTION 141f1e590 FUN_141f1e590 body=47 status=ok
// SIG undefined FUN_141f1e590(void)

longlong FUN_141f1e590(void)

{
  if (DAT_146ac9158 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
  }
  return DAT_146ac9158;
}



// FUNCTION 141f1e5e0 FUN_141f1e5e0 body=53 status=ok
// SIG undefined FUN_141f1e5e0(void)

void FUN_141f1e5e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &PTR_FUN_144f016f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f1e630 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialExpressionLandscapeLayerCoords::GetPrivateStaticClass(void)

{
  if (DAT_146ac94a8 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"MaterialExpressionLandscapeLayerCoords",&DAT_146ac94a8,
                  FUN_140447710,0x58,0x10000000,0,L"Engine",&LAB_141f1fa20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialExpression::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ac94a8;
}



// FUNCTION 141f1e6e0 FUN_141f1e6e0 body=162 status=ok
// SIG undefined FUN_141f1e6e0(void)

longlong FUN_141f1e6e0(void)

{
  if (DAT_146ac93c8 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeSplinesComponent",&DAT_146ac93c8,FUN_140447710,
                  0x720,0x10000000,0,L"Engine",&LAB_141f1f9a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146ac93c8;
}



// FUNCTION 141f1e790 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGPingUsable::GetPrivateStaticClass(void)

{
  if (DAT_146ac91b8 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeGizmoActiveActor",&DAT_146ac91b8,FUN_140447710,
                  0x4a8,0x10000000,0,L"Engine",&LAB_141f1f760,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_141f1e330
                  ,&LAB_140447700,0);
  }
  return DAT_146ac91b8;
}



// FUNCTION 141f1e850 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialExpressionLandscapeLayerSample::GetPrivateStaticClass(void)

{
  if (DAT_146ac94b8 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"MaterialExpressionLandscapeLayerSample",&DAT_146ac94b8,
                  FUN_140447710,0x60,0x10000000,0,L"Engine",&LAB_141f1fa40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialExpression::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ac94b8;
}



// FUNCTION 141f1e910 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Sequence::StaticClass(void)

{
  if (DAT_146ac94c8 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"MaterialExpressionLandscapeLayerSwitch",&DAT_146ac94c8,
                  FUN_140447710,0xc0,0x10000000,0,L"Engine",&LAB_141f1fa60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialExpression::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ac94c8;
}



// FUNCTION 141f1e9d0 FUN_141f1e9d0 body=162 status=ok
// SIG undefined FUN_141f1e9d0(void)

longlong FUN_141f1e9d0(void)

{
  if (DAT_146ac94d8 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"MaterialExpressionLandscapeLayerWeight",&DAT_146ac94d8,
                  FUN_140447710,200,0x10000000,0,L"Engine",&LAB_141f1fa80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialExpression::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ac94d8;
}



// FUNCTION 141f1ea90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialExpressionLandscapeVisibilityMask::GetPrivateStaticClass(void)

{
  if (DAT_146ac94e8 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"MaterialExpressionLandscapeVisibilityMask",&DAT_146ac94e8,
                  FUN_140447710,0x50,0x10000000,0,L"Engine",&LAB_141f1faa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialExpression::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ac94e8;
}



// FUNCTION 141f1eb40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ACameraActor::GetPrivateStaticClass(void)

{
  if (DAT_146ac9190 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeComponent",&DAT_146ac9190,
                  StaticRegisterNativesACameraActor,0x8a0,0x10000000,0,L"Engine",&LAB_141f1f820,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,FUN_141f1ec00,0);
  }
  return DAT_146ac9190;
}



// FUNCTION 141f1ec00 FUN_141f1ec00 body=162 status=ok
// SIG undefined FUN_141f1ec00(void)

longlong FUN_141f1ec00(void)

{
  if (DAT_146ac9368 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeProxy",&DAT_146ac9368,FUN_141f20ab0,0x7d8,
                  0x10000001,0,L"Engine",&LAB_141f1f7c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_141ef6ab0,&LAB_140493a70,
                  &LAB_140447700,0);
  }
  return DAT_146ac9368;
}



// FUNCTION 141f1ecc0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong ULandscapeSplineSegment::StaticClass(void)

{
  if (DAT_146ac9410 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeSplineSegment",&DAT_146ac9410,FUN_140447710,0xb0,
                  0x10000000,0,L"Engine",&LAB_141f1f980,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,FUN_141f1e6e0,0);
  }
  return DAT_146ac9410;
}



// FUNCTION 141f1ed70 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULandscapeInfoMap::GetPrivateStaticClass(void)

{
  if (DAT_146ac9240 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeInfoMap",&DAT_146ac9240,FUN_140447710,0x80,
                  0x10000000,0,L"Engine",&LAB_141f1f8c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,&LAB_141efea40,&LAB_140447700,
                  &LAB_140447700,0);
  }
  return DAT_146ac9240;
}



// FUNCTION 141f1ee10 FUN_141f1ee10 body=47 status=ok
// SIG undefined FUN_141f1ee10(void)

longlong FUN_141f1ee10(void)

{
  if (DAT_146ac91c0 == 0) {
    FUN_141786440(&DAT_146ac91c0,&PTR_FUN_144efe2f0);
  }
  return DAT_146ac91c0;
}



// FUNCTION 141f1ee40 FUN_141f1ee40 body=53 status=ok
// SIG undefined FUN_141f1ee40(void)

void FUN_141f1ee40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144f00b30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f1eea0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGImpulseWindProjectile::GetPrivateStaticClass(void)

{
  if (DAT_146ac91d8 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeGizmoRenderComponent",&DAT_146ac91d8,FUN_140447710
                  ,0x6f0,0x10000000,0,L"Engine",&LAB_141f1f840,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146ac91d8;
}



// FUNCTION 141f1ef60 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong ULandscapeSplineControlPoint::StaticClass(void)

{
  if (DAT_146ac9388 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeSplineControlPoint",&DAT_146ac9388,FUN_140447710,
                  0x98,0x10000000,0,L"Engine",&LAB_141f1f960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,FUN_141f1e6e0,0);
  }
  return DAT_146ac9388;
}



// FUNCTION 141f1f010 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong ULandscapeGrassType::StaticClass(void)

{
  if (DAT_146ac9200 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeGrassType",&DAT_146ac9200,FUN_140447710,0x60,
                  0x10000000,0,L"Engine",&LAB_141f1f860,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146ac9200;
}



// FUNCTION 141f1f0c0 FUN_141f1f0c0 body=53 status=ok
// SIG undefined FUN_141f1f0c0(void)

void FUN_141f1f0c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144f01000;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f1f100 FUN_141f1f100 body=53 status=ok
// SIG undefined FUN_141f1f100(void)

void FUN_141f1f100(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144f00c78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f1f140 FUN_141f1f140 body=151 status=ok
// SIG undefined FUN_141f1f140(void)

longlong FUN_141f1f140(void)

{
  if (DAT_146ac9258 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeLayerInfoObject",&DAT_146ac9258,FUN_140447710,0x58
                  ,0x10000000,0,L"Engine",&LAB_141f1f8e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146ac9258;
}



// FUNCTION 141f1f210 FUN_141f1f210 body=162 status=ok
// SIG undefined FUN_141f1f210(void)

longlong FUN_141f1f210(void)

{
  if (DAT_146ac9210 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeHeightfieldCollisionComponent",&DAT_146ac9210,
                  FUN_140447710,2000,0x10000000,0,L"Engine",&LAB_141f1f880,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,FUN_141f1ec00,0);
  }
  return DAT_146ac9210;
}



// FUNCTION 141f1f2c0 FUN_141f1f2c0 body=162 status=ok
// SIG undefined FUN_141f1f2c0(void)

longlong FUN_141f1f2c0(void)

{
  if (DAT_146ac9268 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeMaterialInstanceConstant",&DAT_146ac9268,
                  FUN_140447710,0x1e8,0x10000000,0,L"Engine",&LAB_141f1f900,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142583630,
                  UAnimMontage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146ac9268;
}



// FUNCTION 141f1f380 FUN_141f1f380 body=162 status=ok
// SIG undefined FUN_141f1f380(void)

longlong FUN_141f1f380(void)

{
  if (DAT_146ac9278 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeMeshCollisionComponent",&DAT_146ac9278,
                  FUN_140447710,0x7f0,0x10000000,0,L"Engine",&LAB_141f1f920,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141f1f210,FUN_141f1ec00,0);
  }
  return DAT_146ac9278;
}



// FUNCTION 141f1f450 FUN_141f1f450 body=53 status=ok
// SIG undefined FUN_141f1f450(void)

void FUN_141f1f450(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144f01148;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f1f490 FUN_141f1f490 body=162 status=ok
// SIG undefined FUN_141f1f490(void)

longlong FUN_141f1f490(void)

{
  if (DAT_146ac9288 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeMeshProxyActor",&DAT_146ac9288,FUN_140447710,0x460
                  ,0x10000000,0,L"Engine",&LAB_141f1f7a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146ac9288;
}



// FUNCTION 141f1f550 FUN_141f1f550 body=53 status=ok
// SIG undefined FUN_141f1f550(void)

void FUN_141f1f550(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144f01260;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f1f590 FUN_141f1f590 body=162 status=ok
// SIG undefined FUN_141f1f590(void)

longlong FUN_141f1f590(void)

{
  if (DAT_146ac9298 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeMeshProxyComponent",&DAT_146ac9298,FUN_140447710,
                  2000,0x10000000,0,L"Engine",&LAB_141f1f940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1423c80f0,thunk_FUN_142a232e0,
                  &LAB_140447700,0);
  }
  return DAT_146ac9298;
}



// FUNCTION 141f1f640 FUN_141f1f640 body=53 status=ok
// SIG undefined FUN_141f1f640(void)

void FUN_141f1f640(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144f01378;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f1f690 FUN_141f1f690 body=162 status=ok
// SIG undefined FUN_141f1f690(void)

longlong FUN_141f1f690(void)

{
  if (DAT_146ac9420 == 0) {
    FUN_14171ccd0(L"/Script/Landscape",L"LandscapeStreamingProxy",&DAT_146ac9420,FUN_140447710,0x7f8
                  ,0x10000000,0,L"Engine",&LAB_141f1f7e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_141ef6ab0,FUN_141f1ec00,&LAB_140447700
                  ,0);
  }
  return DAT_146ac9420;
}



// FUNCTION 141f1fca0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FGizmoSelectData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
      ::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f1fcf0 Copy body=270 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FLandscapeSplineMeshEntry>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  void *_Src;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined8 *)(param_3 + 8);
    do {
      puVar1 = param_2 + 1;
      *param_2 = puVar4[-1];
      if (puVar1 != puVar4) {
        iVar3 = *(int *)(puVar4 + 1);
        _Src = (void *)*puVar4;
        *(int *)(param_2 + 2) = iVar3;
        if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0x14) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar3);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 << 3);
        }
      }
      *(uint *)(param_2 + 3) =
           *(uint *)(param_2 + 3) ^ (*(uint *)(puVar4 + 2) ^ *(uint *)(param_2 + 3)) & 1;
      *(undefined8 *)((longlong)param_2 + 0x1c) = *(undefined8 *)((longlong)puVar4 + 0x14);
      *(uint *)((longlong)param_2 + 0x24) =
           *(uint *)((longlong)param_2 + 0x24) ^
           (*(uint *)((longlong)puVar4 + 0x1c) ^ *(uint *)((longlong)param_2 + 0x24)) & 1;
      param_2[5] = puVar4[4];
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar4 + 5);
      *(undefined1 *)((longlong)param_2 + 0x34) = *(undefined1 *)((longlong)puVar4 + 0x2c);
      *(undefined1 *)((longlong)param_2 + 0x35) = *(undefined1 *)((longlong)puVar4 + 0x2d);
      puVar2 = (undefined1 *)((longlong)puVar4 + 0x2e);
      puVar4 = puVar4 + 7;
      *(undefined1 *)((longlong)param_2 + 0x36) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 7;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f1fea0 EGrassScaling_StaticEnum body=85 status=ok
// SIG undefined EGrassScaling_StaticEnum(void)

void EGrassScaling_StaticEnum(void)

{
  if (DAT_146ac9090 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac9090 = GetStaticEnum(FUN_141f21910,DAT_146ac9158,L"EGrassScaling");
  }
  return;
}



// FUNCTION 141f1ff00 FUN_141f1ff00 body=85 status=ok
// SIG undefined FUN_141f1ff00(void)

void FUN_141f1ff00(void)

{
  if (DAT_146ac9050 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac9050 = GetStaticEnum(FUN_141f21940,DAT_146ac9158,L"ELandscapeAutoPaintActorState");
  }
  return;
}



// FUNCTION 141f1ff60 FUN_141f1ff60 body=85 status=ok
// SIG undefined FUN_141f1ff60(void)

void FUN_141f1ff60(void)

{
  if (DAT_146ac9058 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac9058 = GetStaticEnum(FUN_141f21970,DAT_146ac9158,L"ELandscapeAutoPaintOperation");
  }
  return;
}



// FUNCTION 141f1ffc0 ELandscapeCustomizedCoordType_StaticEnum body=85 status=ok
// SIG undefined ELandscapeCustomizedCoordType_StaticEnum(void)

void ELandscapeCustomizedCoordType_StaticEnum(void)

{
  if (DAT_146ac9078 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac9078 = GetStaticEnum(FUN_141f219a0,DAT_146ac9158,L"ELandscapeCustomizedCoordType");
  }
  return;
}



// FUNCTION 141f20020 ELandscapeGizmoType_StaticEnum body=85 status=ok
// SIG undefined ELandscapeGizmoType_StaticEnum(void)

void ELandscapeGizmoType_StaticEnum(void)

{
  if (DAT_146ac9088 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac9088 = GetStaticEnum(FUN_141f219d0,DAT_146ac9158,L"ELandscapeGizmoType");
  }
  return;
}



// FUNCTION 141f20080 ELandscapeImportAlphamapType_StaticEnum body=85 status=ok
// SIG undefined ELandscapeImportAlphamapType_StaticEnum(void)

void ELandscapeImportAlphamapType_StaticEnum(void)

{
  if (DAT_146ac9060 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac9060 = GetStaticEnum(FUN_141f21a00,DAT_146ac9158,L"ELandscapeImportAlphamapType");
  }
  return;
}



// FUNCTION 141f200e0 ELandscapeLODFalloff_StaticEnum body=85 status=ok
// SIG undefined ELandscapeLODFalloff_StaticEnum(void)

void ELandscapeLODFalloff_StaticEnum(void)

{
  if (DAT_146ac9038 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac9038 = GetStaticEnum(FUN_141f21a30,DAT_146ac9158,L"ELandscapeLODFalloff");
  }
  return;
}



// FUNCTION 141f20140 FUN_141f20140 body=85 status=ok
// SIG undefined FUN_141f20140(void)

void FUN_141f20140(void)

{
  if (DAT_146ac9098 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac9098 = GetStaticEnum(FUN_141f21a60,DAT_146ac9158,L"ELandscapeLayerAutoPaintType");
  }
  return;
}



// FUNCTION 141f201a0 ELandscapeLayerBlendType_StaticEnum body=85 status=ok
// SIG undefined ELandscapeLayerBlendType_StaticEnum(void)

void ELandscapeLayerBlendType_StaticEnum(void)

{
  if (DAT_146ac9070 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac9070 = GetStaticEnum(FUN_141f21a90,DAT_146ac9158,L"ELandscapeLayerBlendType");
  }
  return;
}



// FUNCTION 141f20200 ELandscapeLayerDisplayMode_StaticEnum body=85 status=ok
// SIG undefined ELandscapeLayerDisplayMode_StaticEnum(void)

void ELandscapeLayerDisplayMode_StaticEnum(void)

{
  if (DAT_146ac9040 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac9040 = GetStaticEnum(FUN_141f21ac0,DAT_146ac9158,L"ELandscapeLayerDisplayMode");
  }
  return;
}



// FUNCTION 141f20260 ELandscapeLayerPaintingRestriction_StaticEnum body=85 status=ok
// SIG undefined ELandscapeLayerPaintingRestriction_StaticEnum(void)

void ELandscapeLayerPaintingRestriction_StaticEnum(void)

{
  if (DAT_146ac9048 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac9048 = GetStaticEnum(FUN_141f21af0,DAT_146ac9158,L"ELandscapeLayerPaintingRestriction")
    ;
  }
  return;
}



// FUNCTION 141f202c0 ELandscapeSetupErrors_StaticEnum body=85 status=ok
// SIG undefined ELandscapeSetupErrors_StaticEnum(void)

void ELandscapeSetupErrors_StaticEnum(void)

{
  if (DAT_146ac9068 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac9068 = GetStaticEnum(FUN_141f21b20,DAT_146ac9158,L"ELandscapeSetupErrors");
  }
  return;
}



// FUNCTION 141f20320 ETerrainCoordMappingType_StaticEnum body=85 status=ok
// SIG undefined ETerrainCoordMappingType_StaticEnum(void)

void ETerrainCoordMappingType_StaticEnum(void)

{
  if (DAT_146ac9080 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac9080 = GetStaticEnum(FUN_141f21b50,DAT_146ac9158,L"ETerrainCoordMappingType");
  }
  return;
}



// FUNCTION 141f20380 FUN_141f20380 body=6 status=ok
// SIG undefined FUN_141f20380(void)

undefined8 FUN_141f20380(void)

{
  return 0x1a797132;
}



// FUNCTION 141f20390 Get_Z_Construct_UScriptStruct_FForeignControlPointData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FForeignControlPointData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FForeignControlPointData_CRC(void)

{
  return 0xa56d02d9;
}



// FUNCTION 141f203a0 Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_CRC(void)

{
  return 0x19f0006f;
}



// FUNCTION 141f203b0 Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_CRC(void)

{
  return 0x7cb86423;
}



// FUNCTION 141f203c0 Get_Z_Construct_UScriptStruct_FGizmoSelectData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGizmoSelectData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGizmoSelectData_CRC(void)

{
  return 0xad7d467e;
}



// FUNCTION 141f203d0 Get_Z_Construct_UScriptStruct_FGrassInput_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FGrassInput_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FGrassInput_CRC(void)

{
  return 0x32c99dd7;
}



// FUNCTION 141f203e0 FUN_141f203e0 body=6 status=ok
// SIG undefined FUN_141f203e0(void)

undefined8 FUN_141f203e0(void)

{
  return 0x810bdc35;
}



// FUNCTION 141f203f0 Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_CRC(void)

{
  return 0xf3ca47d7;
}



// FUNCTION 141f20400 Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_CRC(void)

{
  return 0x16b359a5;
}



// FUNCTION 141f20410 Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_CRC(void)

{
  return 0xc44565f;
}



// FUNCTION 141f20420 Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_CRC(void)

{
  return 0x997d08a6;
}



// FUNCTION 141f20430 Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_CRC(void)

{
  return 0xe0830f0c;
}



// FUNCTION 141f20440 Get_Z_Construct_UScriptStruct_FLandscapeSplineConnection_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLandscapeSplineConnection_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLandscapeSplineConnection_CRC(void)

{
  return 0xb1b5799;
}



// FUNCTION 141f20450 Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_CRC(void)

{
  return 0xb9038b4d;
}



// FUNCTION 141f20460 Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_CRC(void)

{
  return 0x156a0eb6;
}



// FUNCTION 141f20470 Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_CRC(void)

{
  return 0xcc9b0146;
}



// FUNCTION 141f20480 Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_CRC(void)

{
  return 0x12229a77;
}



// FUNCTION 141f20490 Get_Z_Construct_UScriptStruct_FLayerBlendInput_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FLayerBlendInput_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FLayerBlendInput_CRC(void)

{
  return 0x30f453b9;
}



// FUNCTION 141f204a0 Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_CRC(void)

{
  return 0x70ce3fa2;
}



// FUNCTION 141f204b0 LandscapeSplineMeshOrientation_StaticEnum body=85 status=ok
// SIG undefined LandscapeSplineMeshOrientation_StaticEnum(void)

void LandscapeSplineMeshOrientation_StaticEnum(void)

{
  if (DAT_146ac90a0 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    DAT_146ac90a0 = GetStaticEnum(FUN_141f21b80,DAT_146ac9158,L"LandscapeSplineMeshOrientation");
  }
  return;
}



// FUNCTION 141f20630 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  AAkReverbVolume::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141f206a0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_141efab20(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141f20710 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_141efacc0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141f20780 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_141efb290(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141f207f0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  ULandscapeInfoMap::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141f20860 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_141efb3c0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141f208d0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  AAkReverbVolume::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141f20940 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  thunk_FUN_142396660(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141f209b0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  UMaterialExpressionLandscapeLayerBlend::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141f20a20 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  UMaterialExpressionLandscapeLayerSwitch::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141f20a90 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UMaterialExpressionCustomOutput::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 141f20aa0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UAnimMontage::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 141f20ab0 FUN_141f20ab0 body=34 status=ok
// SIG undefined FUN_141f20ab0(void)

void FUN_141f20ab0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141f1ec00();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_ChangeComponentScreenSizeToUseSu_144f00f60,10);
  return;
}



// FUNCTION 141f20ae0 StaticRegisterNativesACameraActor body=34 status=ok
// SIG undefined StaticRegisterNativesACameraActor(void)

void ACameraActor::StaticRegisterNativesACameraActor(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetMaterialInstanceDynamic_144f00ad8,1);
  return;
}



// FUNCTION 141f20b10 FUN_141f20b10 body=113 status=ok
// SIG undefined FUN_141f20b10(void)

void FUN_141f20b10(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac9428 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = FUN_141f20380();
    DAT_146ac9428 = GetStaticStruct(FUN_141f21bb0,lVar1,L"AutoPaintLayerInput",0x38,uVar2);
  }
  return;
}



// FUNCTION 141f20b90 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FForeignControlPointData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac93b0 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FForeignControlPointData_CRC();
    DAT_146ac93b0 = GetStaticStruct(FUN_141f21be0,lVar1,L"ForeignControlPointData",1,uVar2);
  }
  return;
}



// FUNCTION 141f20c10 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FForeignSplineSegmentData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac93a0 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_CRC();
    DAT_146ac93a0 = GetStaticStruct(FUN_141f21c10,lVar1,L"ForeignSplineSegmentData",1,uVar2);
  }
  return;
}



// FUNCTION 141f20c90 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FForeignWorldSplineData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac9390 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_CRC();
    DAT_146ac9390 = GetStaticStruct(FUN_141f21c40,lVar1,L"ForeignWorldSplineData",1,uVar2);
  }
  return;
}



// FUNCTION 141f20d10 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGizmoSelectData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac91a0 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FGizmoSelectData_CRC();
    DAT_146ac91a0 = GetStaticStruct(FUN_141f21c70,lVar1,L"GizmoSelectData",0x50,uVar2);
  }
  return;
}



// FUNCTION 141f20d90 FUN_141f20d90 body=113 status=ok
// SIG undefined FUN_141f20d90(void)

void FUN_141f20d90(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac9448 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FGrassInput_CRC();
    DAT_146ac9448 = GetStaticStruct(FUN_141f21ca0,lVar1,L"GrassInput",0x40,uVar2);
  }
  return;
}



// FUNCTION 141f20e10 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FGrassVariety::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac91e8 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = FUN_141f203e0();
    DAT_146ac91e8 = GetStaticStruct(FUN_141f21cd0,lVar1,L"GrassVariety",0x48,uVar2);
  }
  return;
}



// FUNCTION 141f20e90 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FLandscapeEditToolRenderData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac9170 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_CRC();
    DAT_146ac9170 = GetStaticStruct(FUN_141f21d00,lVar1,L"LandscapeEditToolRenderData",0x28,uVar2);
  }
  return;
}



// FUNCTION 141f20f10 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FLandscapeEditorLayerSettings::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac92f0 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_CRC();
    DAT_146ac92f0 = GetStaticStruct(FUN_141f21d30,lVar1,L"LandscapeEditorLayerSettings",1,uVar2);
  }
  return;
}



// FUNCTION 141f20f90 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FLandscapeImportLayerInfo::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac92d0 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_CRC();
    DAT_146ac92d0 = GetStaticStruct(FUN_141f21d60,lVar1,L"LandscapeImportLayerInfo",1,uVar2);
  }
  return;
}



// FUNCTION 141f21010 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FLandscapeInfoLayerSettings::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac9218 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_CRC();
    DAT_146ac9218 = GetStaticStruct(FUN_141f21d90,lVar1,L"LandscapeInfoLayerSettings",0x10,uVar2);
  }
  return;
}



// FUNCTION 141f21090 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FLandscapeLayerStruct::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac92e0 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_CRC();
    DAT_146ac92e0 = GetStaticStruct(FUN_141f21dc0,lVar1,L"LandscapeLayerStruct",8,uVar2);
  }
  return;
}



// FUNCTION 141f21110 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FLandscapeSplineConnection::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac9370 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FLandscapeSplineConnection_CRC();
    DAT_146ac9370 = GetStaticStruct(FUN_141f21df0,lVar1,L"LandscapeSplineConnection",0x10,uVar2);
  }
  return;
}



// FUNCTION 141f21190 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FLandscapeSplineInterpPoint::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac93f8 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FLandscapeSplineInterpPoint_CRC();
    DAT_146ac93f8 = GetStaticStruct(FUN_141f21e20,lVar1,L"LandscapeSplineInterpPoint",0x40,uVar2);
  }
  return;
}



// FUNCTION 141f21210 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FLandscapeSplineMeshEntry::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac93d8 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry_CRC();
    DAT_146ac93d8 = GetStaticStruct(FUN_141f21e50,lVar1,L"LandscapeSplineMeshEntry",0x38,uVar2);
  }
  return;
}



// FUNCTION 141f21290 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FLandscapeSplineSegmentConnection::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac93e8 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FLandscapeSplineSegmentConnection_CRC();
    DAT_146ac93e8 =
         GetStaticStruct(FUN_141f21e80,lVar1,L"LandscapeSplineSegmentConnection",0x18,uVar2);
  }
  return;
}



// FUNCTION 141f21310 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FLandscapeWeightmapUsage::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac9300 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_CRC();
    DAT_146ac9300 = GetStaticStruct(FUN_141f21eb0,lVar1,L"LandscapeWeightmapUsage",0x20,uVar2);
  }
  return;
}



// FUNCTION 141f21390 FUN_141f21390 body=113 status=ok
// SIG undefined FUN_141f21390(void)

void FUN_141f21390(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac9470 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FLayerBlendInput_CRC();
    DAT_146ac9470 = GetStaticStruct(FUN_141f21ee0,lVar1,L"LayerBlendInput",0x88,uVar2);
  }
  return;
}



// FUNCTION 141f21410 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FWeightmapLayerAllocationInfo::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146ac9160 == 0) {
    if (DAT_146ac9158 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146ac9158,&PTR_s__Script_Landscape_144f00880);
    }
    lVar1 = DAT_146ac9158;
    uVar2 = Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_CRC();
    DAT_146ac9160 = GetStaticStruct(FUN_141f21f10,lVar1,L"WeightmapLayerAllocationInfo",0x10,uVar2);
  }
  return;
}



// FUNCTION 141f21490 FUN_141f21490 body=47 status=ok
// SIG undefined FUN_141f21490(void)

longlong FUN_141f21490(void)

{
  if (DAT_146ac9148 == 0) {
    FUN_141786440(&DAT_146ac9148,&PTR_FUN_144efb580);
  }
  return DAT_146ac9148;
}



// FUNCTION 141f214c0 FUN_141f214c0 body=47 status=ok
// SIG undefined FUN_141f214c0(void)

longlong FUN_141f214c0(void)

{
  if (DAT_146ac91b0 == 0) {
    FUN_141786440(&DAT_146ac91b0,&PTR_GetPrivateStaticClass_144efe1f0);
  }
  return DAT_146ac91b0;
}



// FUNCTION 141f214f0 FUN_141f214f0 body=47 status=ok
// SIG undefined FUN_141f214f0(void)

longlong FUN_141f214f0(void)

{
  if (DAT_146ac9280 == 0) {
    FUN_141786440(&DAT_146ac9280,&PTR_FUN_144effc00);
  }
  return DAT_146ac9280;
}



// FUNCTION 141f21520 FUN_141f21520 body=47 status=ok
// SIG undefined FUN_141f21520(void)

longlong FUN_141f21520(void)

{
  if (DAT_146ac9418 == 0) {
    FUN_141786440(&DAT_146ac9418,&PTR_FUN_144f00230);
  }
  return DAT_146ac9418;
}



// FUNCTION 141f21550 FUN_141f21550 body=47 status=ok
// SIG undefined FUN_141f21550(void)

longlong FUN_141f21550(void)

{
  if (DAT_146ac9130 == 0) {
    FUN_141786440(&DAT_146ac9130,&PTR_StaticClass_144efcc00);
  }
  return DAT_146ac9130;
}



// FUNCTION 141f21580 FUN_141f21580 body=47 status=ok
// SIG undefined FUN_141f21580(void)

longlong FUN_141f21580(void)

{
  if (DAT_146ac91d0 == 0) {
    FUN_141786440(&DAT_146ac91d0,&PTR_GetPrivateStaticClass_144efe410);
  }
  return DAT_146ac91d0;
}



// FUNCTION 141f215b0 FUN_141f215b0 body=47 status=ok
// SIG undefined FUN_141f215b0(void)

longlong FUN_141f215b0(void)

{
  if (DAT_146ac91f8 == 0) {
    FUN_141786440(&DAT_146ac91f8,&PTR_StaticClass_144efef80);
  }
  return DAT_146ac91f8;
}



// FUNCTION 141f215e0 FUN_141f215e0 body=47 status=ok
// SIG undefined FUN_141f215e0(void)

longlong FUN_141f215e0(void)

{
  if (DAT_146ac9228 == 0) {
    FUN_141786440(&DAT_146ac9228,&PTR_StaticClass_144efddc0);
  }
  return DAT_146ac9228;
}



// FUNCTION 141f21610 FUN_141f21610 body=47 status=ok
// SIG undefined FUN_141f21610(void)

longlong FUN_141f21610(void)

{
  if (DAT_146ac9238 == 0) {
    FUN_141786440(&DAT_146ac9238,&PTR_GetPrivateStaticClass_144efe730);
  }
  return DAT_146ac9238;
}



// FUNCTION 141f21640 FUN_141f21640 body=47 status=ok
// SIG undefined FUN_141f21640(void)

longlong FUN_141f21640(void)

{
  if (DAT_146ac9250 == 0) {
    FUN_141786440(&DAT_146ac9250,&PTR_FUN_144efeec0);
  }
  return DAT_146ac9250;
}



// FUNCTION 141f21670 FUN_141f21670 body=47 status=ok
// SIG undefined FUN_141f21670(void)

longlong FUN_141f21670(void)

{
  if (DAT_146ac9260 == 0) {
    FUN_141786440(&DAT_146ac9260,&PTR_FUN_144eff3e0);
  }
  return DAT_146ac9260;
}



// FUNCTION 141f216a0 FUN_141f216a0 body=47 status=ok
// SIG undefined FUN_141f216a0(void)

longlong FUN_141f216a0(void)

{
  if (DAT_146ac9270 == 0) {
    FUN_141786440(&DAT_146ac9270,&PTR_FUN_144eff980);
  }
  return DAT_146ac9270;
}



// FUNCTION 141f216d0 FUN_141f216d0 body=47 status=ok
// SIG undefined FUN_141f216d0(void)

longlong FUN_141f216d0(void)

{
  if (DAT_146ac9290 == 0) {
    FUN_141786440(&DAT_146ac9290,&PTR_FUN_144f00180);
  }
  return DAT_146ac9290;
}



// FUNCTION 141f21700 FUN_141f21700 body=47 status=ok
// SIG undefined FUN_141f21700(void)

longlong FUN_141f21700(void)

{
  if (DAT_146ac9380 == 0) {
    FUN_141786440(&DAT_146ac9380,&PTR_StaticClass_144efe980);
  }
  return DAT_146ac9380;
}



// FUNCTION 141f21730 FUN_141f21730 body=47 status=ok
// SIG undefined FUN_141f21730(void)

longlong FUN_141f21730(void)

{
  if (DAT_146ac9408 == 0) {
    FUN_141786440(&DAT_146ac9408,&PTR_StaticClass_144efffc0);
  }
  return DAT_146ac9408;
}



// FUNCTION 141f21760 FUN_141f21760 body=47 status=ok
// SIG undefined FUN_141f21760(void)

longlong FUN_141f21760(void)

{
  if (DAT_146ac93c0 == 0) {
    FUN_141786440(&DAT_146ac93c0,&PTR_FUN_144eff4e0);
  }
  return DAT_146ac93c0;
}



// FUNCTION 141f21790 FUN_141f21790 body=47 status=ok
// SIG undefined FUN_141f21790(void)

longlong FUN_141f21790(void)

{
  if (DAT_146ac9438 == 0) {
    FUN_141786440(&DAT_146ac9438,&PTR_GetPrivateStaticClass_144efaef0);
  }
  return DAT_146ac9438;
}



// FUNCTION 141f217c0 FUN_141f217c0 body=47 status=ok
// SIG undefined FUN_141f217c0(void)

longlong FUN_141f217c0(void)

{
  if (DAT_146ac9458 == 0) {
    FUN_141786440(&DAT_146ac9458,&PTR_GetPrivateStaticClass_144efc170);
  }
  return DAT_146ac9458;
}



// FUNCTION 141f217f0 FUN_141f217f0 body=47 status=ok
// SIG undefined FUN_141f217f0(void)

longlong FUN_141f217f0(void)

{
  if (DAT_146ac9480 == 0) {
    FUN_141786440(&DAT_146ac9480,&PTR_GetPrivateStaticClass_144efd040);
  }
  return DAT_146ac9480;
}



// FUNCTION 141f21820 FUN_141f21820 body=47 status=ok
// SIG undefined FUN_141f21820(void)

longlong FUN_141f21820(void)

{
  if (DAT_146ac94a0 == 0) {
    FUN_141786440(&DAT_146ac94a0,&PTR_GetPrivateStaticClass_144efd470);
  }
  return DAT_146ac94a0;
}



// FUNCTION 141f21850 FUN_141f21850 body=47 status=ok
// SIG undefined FUN_141f21850(void)

longlong FUN_141f21850(void)

{
  if (DAT_146ac94b0 == 0) {
    FUN_141786440(&DAT_146ac94b0,&PTR_GetPrivateStaticClass_144efd670);
  }
  return DAT_146ac94b0;
}



// FUNCTION 141f21880 FUN_141f21880 body=47 status=ok
// SIG undefined FUN_141f21880(void)

longlong FUN_141f21880(void)

{
  if (DAT_146ac94c0 == 0) {
    FUN_141786440(&DAT_146ac94c0,&PTR_StaticClass_144efd870);
  }
  return DAT_146ac94c0;
}



// FUNCTION 141f218b0 FUN_141f218b0 body=47 status=ok
// SIG undefined FUN_141f218b0(void)

longlong FUN_141f218b0(void)

{
  if (DAT_146ac94d0 == 0) {
    FUN_141786440(&DAT_146ac94d0,&PTR_FUN_144efda50);
  }
  return DAT_146ac94d0;
}



// FUNCTION 141f218e0 FUN_141f218e0 body=47 status=ok
// SIG undefined FUN_141f218e0(void)

longlong FUN_141f218e0(void)

{
  if (DAT_146ac94e0 == 0) {
    FUN_141786440(&DAT_146ac94e0,&PTR_GetPrivateStaticClass_144efdcb0);
  }
  return DAT_146ac94e0;
}



// FUNCTION 141f21910 FUN_141f21910 body=47 status=ok
// SIG undefined FUN_141f21910(void)

longlong FUN_141f21910(void)

{
  if (DAT_146ac91e0 == 0) {
    FUN_1417866a0(&DAT_146ac91e0,&PTR_FUN_1464d3430);
  }
  return DAT_146ac91e0;
}



// FUNCTION 141f21940 FUN_141f21940 body=47 status=ok
// SIG undefined FUN_141f21940(void)

longlong FUN_141f21940(void)

{
  if (DAT_146ac92b8 == 0) {
    FUN_1417866a0(&DAT_146ac92b8,&PTR_FUN_1464d35c0);
  }
  return DAT_146ac92b8;
}



// FUNCTION 141f21970 FUN_141f21970 body=47 status=ok
// SIG undefined FUN_141f21970(void)

longlong FUN_141f21970(void)

{
  if (DAT_146ac92c0 == 0) {
    FUN_1417866a0(&DAT_146ac92c0,&PTR_FUN_1464d3610);
  }
  return DAT_146ac92c0;
}



// FUNCTION 141f219a0 FUN_141f219a0 body=47 status=ok
// SIG undefined FUN_141f219a0(void)

longlong FUN_141f219a0(void)

{
  if (DAT_146ac9490 == 0) {
    FUN_1417866a0(&DAT_146ac9490,&PTR_FUN_1464d3750);
  }
  return DAT_146ac9490;
}



// FUNCTION 141f219d0 FUN_141f219d0 body=47 status=ok
// SIG undefined FUN_141f219d0(void)

longlong FUN_141f219d0(void)

{
  if (DAT_146ac9198 == 0) {
    FUN_1417866a0(&DAT_146ac9198,&PTR_FUN_1464d33e0);
  }
  return DAT_146ac9198;
}



// FUNCTION 141f21a00 FUN_141f21a00 body=47 status=ok
// SIG undefined FUN_141f21a00(void)

longlong FUN_141f21a00(void)

{
  if (DAT_146ac92c8 == 0) {
    FUN_1417866a0(&DAT_146ac92c8,&PTR_FUN_1464d3660);
  }
  return DAT_146ac92c8;
}



// FUNCTION 141f21a30 FUN_141f21a30 body=47 status=ok
// SIG undefined FUN_141f21a30(void)

longlong FUN_141f21a30(void)

{
  if (DAT_146ac92a0 == 0) {
    FUN_1417866a0(&DAT_146ac92a0,&PTR_FUN_1464d34d0);
  }
  return DAT_146ac92a0;
}



// FUNCTION 141f21a60 FUN_141f21a60 body=47 status=ok
// SIG undefined FUN_141f21a60(void)

longlong FUN_141f21a60(void)

{
  if (DAT_146ac9248 == 0) {
    FUN_1417866a0(&DAT_146ac9248,&PTR_FUN_1464d3480);
  }
  return DAT_146ac9248;
}



// FUNCTION 141f21a90 FUN_141f21a90 body=47 status=ok
// SIG undefined FUN_141f21a90(void)

longlong FUN_141f21a90(void)

{
  if (DAT_146ac9468 == 0) {
    FUN_1417866a0(&DAT_146ac9468,&PTR_FUN_1464d3700);
  }
  return DAT_146ac9468;
}



// FUNCTION 141f21ac0 FUN_141f21ac0 body=47 status=ok
// SIG undefined FUN_141f21ac0(void)

longlong FUN_141f21ac0(void)

{
  if (DAT_146ac92a8 == 0) {
    FUN_1417866a0(&DAT_146ac92a8,&PTR_FUN_1464d3520);
  }
  return DAT_146ac92a8;
}



// FUNCTION 141f21af0 FUN_141f21af0 body=47 status=ok
// SIG undefined FUN_141f21af0(void)

longlong FUN_141f21af0(void)

{
  if (DAT_146ac92b0 == 0) {
    FUN_1417866a0(&DAT_146ac92b0,&PTR_FUN_1464d3570);
  }
  return DAT_146ac92b0;
}



// FUNCTION 141f21b20 FUN_141f21b20 body=47 status=ok
// SIG undefined FUN_141f21b20(void)

longlong FUN_141f21b20(void)

{
  if (DAT_146ac9140 == 0) {
    FUN_1417866a0(&DAT_146ac9140,&PTR_FUN_1464d3390);
  }
  return DAT_146ac9140;
}



// FUNCTION 141f21b50 FUN_141f21b50 body=47 status=ok
// SIG undefined FUN_141f21b50(void)

longlong FUN_141f21b50(void)

{
  if (DAT_146ac9498 == 0) {
    FUN_1417866a0(&DAT_146ac9498,&PTR_FUN_1464d37a0);
  }
  return DAT_146ac9498;
}



// FUNCTION 141f21b80 FUN_141f21b80 body=47 status=ok
// SIG undefined FUN_141f21b80(void)

longlong FUN_141f21b80(void)

{
  if (DAT_146ac93d0 == 0) {
    FUN_1417866a0(&DAT_146ac93d0,&PTR_FUN_1464d36b0);
  }
  return DAT_146ac93d0;
}



// FUNCTION 141f21bb0 FUN_141f21bb0 body=47 status=ok
// SIG undefined FUN_141f21bb0(void)

longlong FUN_141f21bb0(void)

{
  if (DAT_146ac9430 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ac9430,&PTR_FUN_1464d2870);
  }
  return DAT_146ac9430;
}



// FUNCTION 141f21be0 FUN_141f21be0 body=47 status=ok
// SIG undefined FUN_141f21be0(void)

longlong FUN_141f21be0(void)

{
  if (DAT_146ac93b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146ac93b8,&PTR_FUN_1464d1e90);
  }
  return DAT_146ac93b8;
}


