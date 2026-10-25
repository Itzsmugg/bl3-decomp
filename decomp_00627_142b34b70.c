// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142b34b70 FUN_142b34b70 body=27 status=ok
// SIG undefined FUN_142b34b70(void)

void FUN_142b34b70(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_142b3b500(local_18,&local_18);
  return;
}



// FUNCTION 142b34b90 FUN_142b34b90 body=98 status=ok
// SIG undefined FUN_142b34b90(void)

void FUN_142b34b90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_res10 [3];
  code *local_18;
  undefined8 *puStack_10;
  
  if (0 < (longlong)(param_2[1] - (longlong)*param_2 & 0xfffffffffffffffcU)) {
    local_res10[0] = *param_1;
    puStack_10 = local_res10;
    local_18 = FUN_142b34c00;
    bifrost::sessions::_guard_xfg_dispatch_icall_nop(*(undefined4 *)*param_2,&local_18);
  }
  return;
}



// FUNCTION 142b34c00 FUN_142b34c00 body=27 status=ok
// SIG undefined FUN_142b34c00(void)

void FUN_142b34c00(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_142b3c710(local_18,&local_18);
  return;
}



// FUNCTION 142b34c30 FUN_142b34c30 body=348 status=ok
// SIG undefined FUN_142b34c30(void)

undefined8 * FUN_142b34c30(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_1457b1588;
  FString::FString(param_1 + 1,param_2 + 8);
  FString::FString(param_1 + 3,param_2 + 0x18);
  FString::FString(param_1 + 5,param_2 + 0x28);
  param_1[7] = 0;
  iVar4 = *(int *)(param_2 + 0x40);
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  *(int *)(param_1 + 8) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 7,iVar4,0);
    puVar3 = (undefined8 *)param_1[7];
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[9] = 0;
  iVar4 = *(int *)(param_2 + 0x50);
  puVar5 = *(undefined8 **)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 9,iVar4,0);
    puVar3 = (undefined8 *)param_1[9];
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_1;
}



// FUNCTION 142b34d90 FUN_142b34d90 body=210 status=ok
// SIG undefined FUN_142b34d90(void)

undefined1 *
FUN_142b34d90(undefined1 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = *param_3;
  lVar4 = param_3[1];
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x18) = *param_4;
  lVar4 = param_4[1];
  *(longlong *)(param_1 + 0x20) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = (longlong *)param_4[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_1;
}



// FUNCTION 142b34e70 FUN_142b34e70 body=895 status=ok
// SIG undefined FUN_142b34e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142b34e70(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 local_res8 [2];
  undefined4 uStack_1c;
  
  if ((DAT_146aeb100 == '\0') && (puVar2 = (undefined8 *)FUN_14218cc20(), puVar2 != &DAT_146aeb098))
  {
    DAT_146aeb098 = *puVar2;
    uRam0000000146aeb0a0 = puVar2[1];
    _DAT_146aeb0a8 = puVar2[2];
    uRam0000000146aeb0b0 = puVar2[3];
    _DAT_146aeb0b8 = puVar2[4];
    uRam0000000146aeb0c0 = puVar2[5];
    _DAT_146aeb0c8 = puVar2[6];
    uRam0000000146aeb0d0 = puVar2[7];
    _DAT_146aeb0d8 = puVar2[8];
    uRam0000000146aeb0e0 = puVar2[9];
    _DAT_146aeb0e8 = puVar2[10];
    uRam0000000146aeb0f0 = puVar2[0xb];
    _DAT_146aeb0f8 = puVar2[0xc];
    DAT_146aeb100 = '\x01';
  }
  FUN_14217bf30(param_1,DAT_146aeb098,10);
  uVar3 = FUN_14164ab60();
  FUN_14158c9d0(param_1 + 2,L"FGameContextSource",DAT_146686110,uVar3);
  *param_1 = &PTR__scalar_deleting_destructor__1457c4b58;
  param_1[2] = &PTR_LAB_1457c4b68;
  if ((DAT_146aeb100 == '\0') && (puVar2 = (undefined8 *)FUN_14218cc20(), puVar2 != &DAT_146aeb098))
  {
    DAT_146aeb098 = *puVar2;
    uRam0000000146aeb0a0 = puVar2[1];
    _DAT_146aeb0a8 = puVar2[2];
    uRam0000000146aeb0b0 = puVar2[3];
    _DAT_146aeb0b8 = puVar2[4];
    uRam0000000146aeb0c0 = puVar2[5];
    _DAT_146aeb0c8 = puVar2[6];
    uRam0000000146aeb0d0 = puVar2[7];
    _DAT_146aeb0d8 = puVar2[8];
    uRam0000000146aeb0e0 = puVar2[9];
    _DAT_146aeb0e8 = puVar2[10];
    uRam0000000146aeb0f0 = puVar2[0xb];
    _DAT_146aeb0f8 = puVar2[0xc];
    DAT_146aeb100 = '\x01';
  }
  param_1[5] = &DAT_146aeb098;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xe0),4000);
  local_res8[0] = 0x41200000;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  FUN_14217b8d0(param_1 + 0xe6,L"poll_rate_seconds",*(undefined8 *)param_1[5],local_res8);
  param_1[0xe7] = 0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = (longlong)param_1;
    *plVar4 = (longlong)&PTR_GetPoolName_143fc1ab0;
    *(undefined4 *)(plVar4 + 2) = 0x42b4d140;
    *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
    *(undefined4 *)(plVar4 + 3) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_1c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143fc1af8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535760,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = DAT_146535768;
    lVar5 = (longlong)DAT_146535768;
    DAT_146535768 = DAT_146535768 + 1;
    if (DAT_14653576c < DAT_146535768) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535760,iVar1);
    }
    puVar2 = (undefined8 *)(lVar5 * 0x10 + DAT_146535760);
    *puVar2 = plVar4;
    *(undefined4 *)(puVar2 + 1) = 3;
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = (longlong)param_1;
    *plVar4 = (longlong)&PTR_GetPoolName_143f77ac8;
    *(undefined4 *)(plVar4 + 2) = 0x42b4f2e0;
    *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
    *(undefined4 *)(plVar4 + 3) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_1c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f77b10;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357a8,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = DAT_1465357b0;
    lVar5 = (longlong)DAT_1465357b0;
    DAT_1465357b0 = DAT_1465357b0 + 1;
    if (DAT_1465357b4 < DAT_1465357b0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357a8,iVar1);
    }
    puVar2 = (undefined8 *)(lVar5 * 0x10 + DAT_1465357a8);
    *puVar2 = plVar4;
    *(undefined4 *)(puVar2 + 1) = 3;
  }
  FUN_142b5a5f0(param_1,0,param_1 + 6);
  FUN_142b5df10(param_1,0,param_1 + 6);
  FUN_142b5a0a0(param_1,0,param_1 + 8);
  uVar3 = FUN_142192200();
  TBaseMulticastDelegate<void,TSharedRef<ISessionInfo,0>_const_&,TSharedRef<ISessionInstanceInfo,0>_const_&,TSharedRef<FSessionLogMessage,0>_const_&>
  ::Broadcast(uVar3,param_1[5],0,param_1 + 8);
  return param_1;
}



// FUNCTION 142b351f0 FUN_142b351f0 body=483 status=ok
// SIG undefined FUN_142b351f0(void)

undefined8 * FUN_142b351f0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  double dVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1457c5100;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FString::FString(param_1 + 7);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  QueryPerformanceCounter(&local_res8);
  dVar7 = (double)local_res8.QuadPart * DAT_1468b02f8;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x1f400;
  param_1[0x2e] = dVar7 + 16777216.0;
  QueryPerformanceCounter(local_res18);
  puVar6 = (undefined4 *)((longlong)param_1 + 0xac);
  lVar5 = 8;
  if ((undefined4 *)((longlong)param_1 + 0xcc) < puVar6) {
    lVar5 = 0;
  }
  dVar7 = (double)local_res18[0].QuadPart * DAT_1468b02f8;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x33] = dVar7 + 16777216.0;
  if (puVar6 <= (undefined4 *)((longlong)param_1 + 0xcc)) {
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
  }
  FUN_142b49e00(param_1,local_28);
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142b353e0 FUN_142b353e0 body=251 status=ok
// SIG undefined FUN_142b353e0(void)

undefined8 * FUN_142b353e0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  param_1[3] = 0;
  iVar2 = *(int *)(param_2 + 4);
  lVar1 = param_2[3];
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 3,iVar2,0);
    lVar4 = param_1[3];
    puVar3 = (undefined4 *)(lVar1 + 0x14);
    do {
      FString::FString(lVar4,puVar3 + -5);
      *(undefined4 *)(lVar4 + 0x10) = puVar3[-1];
      *(undefined4 *)(lVar4 + 0x14) = *puVar3;
      lVar4 = lVar4 + 0x18;
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + 6;
    } while (iVar2 != 0);
  }
  param_1[5] = 0;
  iVar2 = *(int *)(param_2 + 6);
  lVar1 = param_2[5];
  *(int *)(param_1 + 6) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    TArray<FOptionRowData,FDefaultAllocator>::ResizeForCopy(param_1 + 5,iVar2,0);
    lVar4 = param_1[5];
    do {
      FUN_140b99af0(lVar4,lVar1);
      lVar4 = lVar4 + 0x128;
      lVar1 = lVar1 + 0x128;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1;
}



// FUNCTION 142b354e0 FUN_142b354e0 body=819 status=ok
// SIG undefined FUN_142b354e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142b354e0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 local_res8 [8];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  *(undefined2 *)(param_1 + 3) = 0;
  uVar16 = 0;
  *param_1 = &PTR_FUN_1457c4ef0;
  pvVar10 = ThreadLocalStoragePointer;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[1] = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar10 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b2ac28
      ) && (_Init_thread_header(&DAT_146b2ac28), DAT_146b2ac28 == -1)) {
    DAT_146b2ac18 = (undefined8 *)0x0;
    _DAT_146b2ac20 = 0;
    atexit((_func_5014 *)&LAB_143ebec60);
    _Init_thread_footer(&DAT_146b2ac28);
  }
  uVar17 = (longlong)DAT_146b2ac20 & 0x1fffffffffffffff;
  if (DAT_146b2ac18 + DAT_146b2ac20 < DAT_146b2ac18) {
    uVar17 = uVar16;
  }
  puVar12 = DAT_146b2ac18;
  if (uVar17 != 0) {
    do {
      puVar11 = (undefined8 *)(*(code *)*puVar12)(local_48);
      iVar3 = *(int *)(param_1 + 9);
      *(int *)(param_1 + 9) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x4c) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar3);
      }
      plVar5 = local_40;
      puVar15 = (undefined8 *)((longlong)iVar3 * 0x10 + param_1[8]);
      *puVar15 = *puVar11;
      puVar15[1] = puVar11[1];
      puVar11[1] = 0;
      *puVar11 = 0;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_40 + 1;
        lVar8 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      uVar16 = uVar16 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar16 != uVar17);
  }
  if (DAT_146b2ade0 == 0) {
    puVar12 = (undefined8 *)FName::FName(local_res8,"GbxSpark",1);
    uVar4 = *puVar12;
    uVar13 = FUN_14168dc80();
    FUN_141690010(uVar13,uVar4);
  }
  lVar8 = *(longlong *)(DAT_146b2ade0 + 0x18);
  plVar14 = (longlong *)FUN_142b49cd0(param_1,local_38,&DAT_146b2ad78);
  plVar5 = (longlong *)plVar14[1];
  lVar6 = *plVar14;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_30 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar6 != 0) {
    plVar14 = *(longlong **)(lVar6 + 0x10);
    lVar6 = *(longlong *)(lVar6 + 8);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      uVar4 = *(undefined8 *)(lVar8 + 0x298);
      plVar7 = *(longlong **)(lVar8 + 0x2a0);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      FUN_142af9cb0(lVar6,uVar4);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar14 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar5 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142b35820 FUN_142b35820 body=567 status=ok
// SIG undefined FUN_142b35820(void)

undefined8 * FUN_142b35820(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14164ab60();
  FUN_14158c9d0(param_1,L"FSparkInitProcess",0,uVar1);
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1457c5360;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  return param_1;
}



// FUNCTION 142b35a60 FUN_142b35a60 body=905 status=ok
// SIG undefined FUN_142b35a60(void)

undefined8 * FUN_142b35a60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14164ab60();
  FUN_14158c9d0(param_1,L"FSparkManager",0,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__1457c4fb0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 2;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 2;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 2;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 2;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 2;
  return param_1;
}



// FUNCTION 142b35df0 FUN_142b35df0 body=409 status=ok
// SIG undefined FUN_142b35df0(void)

undefined8 * FUN_142b35df0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_1457c53a8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  return param_1;
}



// FUNCTION 142b35f90 FUN_142b35f90 body=1049 status=ok
// SIG undefined FUN_142b35f90(void)

undefined8 * FUN_142b35f90(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_142b354e0();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_1457c4f50;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 2;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 2;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 2;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 2;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 2;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 2;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 2;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 2;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 2;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 2;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 2;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 2;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 2;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 2;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 2;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x25e) = 0;
  param_1[0x4c] = *param_2;
  lVar1 = param_2[1];
  param_1[0x4d] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0x41200000;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 7;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0x41f00000;
  return param_1;
}



// FUNCTION 142b363b0 FUN_142b363b0 body=171 status=ok
// SIG undefined FUN_142b363b0(void)

undefined4 * FUN_142b363b0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  FString::FString(param_1 + 2,param_2 + 2);
  FString::FString(param_1 + 6,param_2 + 6);
  FString::FString(param_1 + 10,param_2 + 10);
  FString::FString(param_1 + 0xe,param_2 + 0xe);
  FString::FString(param_1 + 0x12,param_2 + 0x12);
  FString::FString(param_1 + 0x16,param_2 + 0x16);
  param_1[0x1a] = param_2[0x1a];
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x22);
  *(longlong *)(param_1 + 0x22) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 142b36460 FUN_142b36460 body=435 status=ok
// SIG undefined FUN_142b36460(void)

undefined8 * FUN_142b36460(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 local_res8;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FName::FName(param_1,L"GbxSpark",1);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 8),4000);
  uVar5 = FUN_14168dc80();
  cVar4 = FModuleManager::IsModuleLoaded(uVar5,*param_1);
  if (cVar4 != '\0') {
    local_38 = 0;
    local_28 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = param_1;
      *puVar6 = &PTR_FUN_143f77b70;
    }
    local_68[0] = &LAB_142b40e70;
    FUN_140983350(&local_res10,local_68,local_res8,0,2);
    if (local_res10 != 0) {
      LOCK();
      piVar1 = (int *)(local_res10 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle(local_res10);
      }
    }
  }
  lVar7 = FUN_14168dc80();
  plVar2 = (longlong *)(lVar7 + 0x108);
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar8 != (longlong *)0x0) {
    plVar8[1] = (longlong)param_1;
    *plVar8 = (longlong)&PTR_GetPoolName_1446fea78;
    plVar8[2] = (longlong)FUN_142b59db0;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_1446feac0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    (**(code **)(*plVar8 + 0x20))(plVar8,local_res18);
    iVar3 = *(int *)(lVar7 + 0x110);
    *(int *)(lVar7 + 0x110) = iVar3 + 1;
    if (*(int *)(lVar7 + 0x114) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar3);
    }
    puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar2);
    *puVar6 = plVar8;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  return param_1;
}



// FUNCTION 142b36620 FUN_142b36620 body=280 status=ok
// SIG undefined FUN_142b36620(void)

undefined8 * FUN_142b36620(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_143f73d18;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 0x10);
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_143f740c8;
  param_1[3] = 0;
  param_1[4] = 0;
  FString::FString(param_1 + 5,param_2 + 0x28);
  FString::FString(param_1 + 7,param_2 + 0x38);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x54);
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  uVar4 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0xb) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
  param_1[0xc] = 0;
  iVar7 = *(int *)(param_2 + 0x68);
  lVar1 = *(longlong *)(param_2 + 0x60);
  *(int *)(param_1 + 0xd) = iVar7;
  if (iVar7 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1 + 0xc,iVar7,0);
    puVar6 = (undefined8 *)param_1[0xc];
    puVar8 = (undefined8 *)(lVar1 + 8);
    puVar5 = puVar6 + 4;
    do {
      *puVar6 = &PTR_FUN_143f73d18;
      puVar5[-3] = *puVar8;
      lVar1 = puVar8[1];
      puVar5[-2] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      *puVar6 = &PTR_FUN_143f740c8;
      puVar8 = puVar8 + 5;
      puVar5[-1] = 0;
      puVar6 = puVar6 + 5;
      *puVar5 = 0;
      puVar5 = puVar5 + 5;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return param_1;
}



// FUNCTION 142b36740 FUN_142b36740 body=327 status=ok
// SIG undefined FUN_142b36740(void)

undefined8 * FUN_142b36740(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_1457b15e8;
  param_1[1] = 0;
  iVar4 = *(int *)(param_2 + 0x10);
  puVar5 = *(undefined8 **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar4,0);
    puVar3 = (undefined8 *)param_1[1];
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[3] = 0;
  iVar4 = *(int *)(param_2 + 0x20);
  puVar5 = *(undefined8 **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 3,iVar4,0);
    puVar3 = (undefined8 *)param_1[3];
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FString::FString(param_1 + 5,param_2 + 0x28);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 142b36890 FUN_142b36890 body=341 status=ok
// SIG undefined FUN_142b36890(void)

void FUN_142b36890(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x6a0);
  iVar7 = *(int *)(param_1 + 0x6a8);
  lVar1 = lVar2;
  if (lVar2 == 0) {
    lVar1 = param_1;
  }
  if (iVar7 != 0) {
    piVar8 = (int *)(lVar1 + 0x1a0);
    do {
      iVar3 = *piVar8;
      piVar4 = *(int **)(piVar8 + -2);
      if (*(int **)(piVar8 + -2) == (int *)0x0) {
        piVar4 = piVar8 + -0x62;
      }
      if (iVar3 != 0) {
        plVar5 = (longlong *)(piVar4 + 4);
        do {
          iVar6 = (int)plVar5[1];
          lVar2 = *plVar5;
          if (iVar6 != 0) {
            lVar2 = lVar2 + 8;
            do {
              FUN_14217f430(lVar2);
              lVar2 = lVar2 + 0x28;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            lVar2 = *plVar5;
          }
          if (lVar2 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 6;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (*(longlong *)(piVar8 + -2) != 0) {
        FMemory::Free();
      }
      iVar3 = piVar8[-100];
      lVar2 = *(longlong *)(piVar8 + -0x66);
      if (iVar3 != 0) {
        lVar2 = lVar2 + 8;
        do {
          FUN_14217f430(lVar2);
          lVar2 = lVar2 + 0x28;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        lVar2 = *(longlong *)(piVar8 + -0x66);
      }
      if (lVar2 != 0) {
        FMemory::Free();
      }
      piVar8 = piVar8 + 0x6a;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar2 = *(longlong *)(param_1 + 0x6a0);
  }
  if (lVar2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142b369f0 FUN_142b369f0 body=225 status=ok
// SIG undefined FUN_142b369f0(void)

void FUN_142b369f0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  lVar3 = *param_1;
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    puVar6 = (undefined8 *)(lVar3 + 0x18);
    do {
      FUN_140b9c2f0(puVar6 + 2);
      iVar7 = *(int *)(puVar6 + 1);
      plVar4 = (longlong *)*puVar6;
      if (iVar7 != 0) {
        do {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        plVar4 = (longlong *)*puVar6;
      }
      if (plVar4 != (longlong *)0x0) {
        FMemory::Free(plVar4);
      }
      plVar4 = (longlong *)puVar6[-2];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      puVar6 = puVar6 + 7;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142b36ae0 FUN_142b36ae0 body=173 status=ok
// SIG undefined FUN_142b36ae0(void)

void FUN_142b36ae0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      if (plVar7[1] != 0) {
        FMemory::Free();
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
      plVar7 = plVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142b36b90 FUN_142b36b90 body=312 status=ok
// SIG undefined FUN_142b36b90(void)

void FUN_142b36b90(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
      ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(plVar1 + 0x14);
      if (plVar1[0x12] != 0) {
        FMemory::Free();
      }
      iVar3 = (int)plVar1[0x11];
      plVar4 = (longlong *)plVar1[0x10];
      if (iVar3 != 0) {
        do {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        plVar4 = (longlong *)plVar1[0x10];
      }
      if (plVar4 != (longlong *)0x0) {
        FMemory::Free(plVar4);
      }
      if (plVar1[0xe] != 0) {
        FMemory::Free();
      }
      if (plVar1[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar1[10] != 0) {
        FMemory::Free();
      }
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x16;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar1);
  return;
}



// FUNCTION 142b36cd0 ~TArray<FPresetHotbar,FDefaultAllocator> body=173 status=ok
// SIG undefined ~TArray<FPresetHotbar,FDefaultAllocator>(void)

void TArray<FPresetHotbar,FDefaultAllocator>::~TArray<FPresetHotbar,FDefaultAllocator>
               (longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      if (plVar7[3] != 0) {
        FMemory::Free();
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
      plVar7 = plVar7 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142b36d80 FUN_142b36d80 body=118 status=ok
// SIG undefined FUN_142b36d80(void)

void FUN_142b36d80(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    do {
      FUN_1404bebc0(lVar1 + 0x60);
      if (*(longlong *)(lVar1 + 0x38) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(lVar1);
      lVar1 = lVar1 + 0x70;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 142b36e00 FUN_142b36e00 body=388 status=ok
// SIG undefined FUN_142b36e00(void)

void FUN_142b36e00(longlong *param_1)

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
      if (bVar4) goto LAB_142b36ec1;
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
LAB_142b36ec1:
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
      FUN_1404bf980((longlong)iStack_1c * 0x40 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
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



// FUNCTION 142b36f90 FUN_142b36f90 body=443 status=ok
// SIG undefined FUN_142b36f90(void)

void FUN_142b36f90(longlong *param_1)

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
  local_58 = 0;
  uStack_54 = 1;
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
      if (bVar4) goto LAB_142b37051;
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
LAB_142b37051:
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
      lVar5 = (longlong)iStack_1c * 0x40 + *param_1;
      FUN_140ce1bb0(lVar5 + 0x28);
      FUN_1404bf980(lVar5);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
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
    return;
  }
  return;
}



// FUNCTION 142b37150 FUN_142b37150 body=443 status=ok
// SIG undefined FUN_142b37150(void)

void FUN_142b37150(longlong *param_1)

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
  local_58 = 0;
  uStack_54 = 1;
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
      if (bVar4) goto LAB_142b37211;
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
LAB_142b37211:
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
      lVar5 = (longlong)iStack_1c * 0x40 + *param_1;
      FUN_1404bebc0(lVar5 + 0x28);
      FUN_1404bf980(lVar5);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
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
    return;
  }
  return;
}



// FUNCTION 142b37310 FUN_142b37310 body=448 status=ok
// SIG undefined FUN_142b37310(void)

void FUN_142b37310(longlong *param_1)

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
  local_58 = 0;
  uStack_54 = 1;
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
      if (bVar4) goto LAB_142b373d1;
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
LAB_142b373d1:
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
      lVar5 = (longlong)iStack_1c * 0x40 + *param_1;
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(lVar5);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
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
    return;
  }
  return;
}



// FUNCTION 142b374d0 ~TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=388 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_142b37591;
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
LAB_142b37591:
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
      FUN_1406ad7a0((longlong)iStack_1c * 0x68 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
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



// FUNCTION 142b37660 FUN_142b37660 body=124 status=ok
// SIG undefined FUN_142b37660(void)

void FUN_142b37660(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[3];
  *param_1 = &PTR_GetResourceDataSize_1457c4d68;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__143f600f0;
    if (*(char *)(puVar1 + 0x15) != '\0') {
      FMemory::Free(puVar1[0x12]);
      puVar1[0x12] = 0;
    }
    FArchive::~FArchive(puVar1);
    FMemory::operator_delete(puVar1,0xb0);
  }
  *param_1 = &PTR__purecall_143f3edb0;
  param_1[3] = 0;
  return;
}



// FUNCTION 142b376e0 FUN_142b376e0 body=165 status=ok
// SIG undefined FUN_142b376e0(void)

void FUN_142b376e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x700));
  FUN_142b36890(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0x48);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FUN_14217f430(lVar1);
      lVar1 = lVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x40);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x38);
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FUN_14217f430(lVar1);
      lVar1 = lVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  FTickerObjectBase::~FTickerObjectBase(param_1 + 0x10);
  FUN_14217f070(param_1);
  return;
}



// FUNCTION 142b37790 FUN_142b37790 body=398 status=ok
// SIG undefined FUN_142b37790(void)

void FUN_142b37790(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__1457c5100;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  FUN_142b43850(param_1 + 0x1a,0);
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb);
  plVar4 = (longlong *)param_1[10];
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
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[6];
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
  plVar4 = (longlong *)param_1[4];
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
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 142b37920 FUN_142b37920 body=98 status=ok
// SIG undefined FUN_142b37920(void)

void FUN_142b37920(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1457c4ef0;
  if ((User *)param_1[1] != (User *)0x0) {
    bifrost::session::_guard_xfg_dispatch_icall_nop((User *)param_1[1]);
    param_1[1] = 0;
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 10);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 8);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142b37990 FUN_142b37990 body=716 status=ok
// SIG undefined FUN_142b37990(void)

void FUN_142b37990(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR__scalar_deleting_destructor__1457c5360;
  if ((*(int *)(param_1 + 0xd) != 0) &&
     (plVar4 = (longlong *)param_1[0xc], plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (param_1[0xc] != 0) {
      uVar6 = FMemory::Realloc(param_1[0xc],0,0);
      param_1[0xc] = uVar6;
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  if ((*(int *)(param_1 + 0xf) != 0) &&
     (plVar4 = (longlong *)param_1[0xe], plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (param_1[0xe] != 0) {
      uVar6 = FMemory::Realloc(param_1[0xe],0,0);
      param_1[0xe] = uVar6;
    }
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  if ((code *)param_1[0x66] != (code *)0x0) {
    (*(code *)param_1[0x66])();
  }
  if (param_1[0x53] != 0) {
    FMemory::Free();
  }
  if (param_1[0x58] != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x56) != '\0') {
    *(undefined1 *)(param_1 + 0x56) = 0;
  }
  if (param_1[0x50] != 0) {
    FMemory::Free();
  }
  if (param_1[0x48] != 0) {
    FMemory::Free();
  }
  if (param_1[0x4d] != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x4b) != '\0') {
    *(undefined1 *)(param_1 + 0x4b) = 0;
  }
  if (param_1[0x45] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x42] != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  if (param_1[0x3a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x32] != 0) {
    FMemory::Free();
  }
  if (param_1[0x37] != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x35) != '\0') {
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  if (param_1[0x2f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    *(undefined1 *)(param_1 + 0x2a) = 0;
  }
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x10);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xe);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc);
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[8];
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
  plVar4 = (longlong *)param_1[6];
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
  plVar4 = (longlong *)param_1[4];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FTickerObjectBase::~FTickerObjectBase(param_1);
  return;
}



// FUNCTION 142b37c60 FUN_142b37c60 body=1739 status=ok
// SIG undefined FUN_142b37c60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b37c60(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  
  lVar4 = param_1[0x76];
  uVar7 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1457c4fb0;
  uVar9 = uVar7;
  uVar11 = uVar7;
  iVar5 = DAT_146533138;
  if (0 < DAT_146533138) {
    do {
      plVar10 = (longlong *)(DAT_146533130 + uVar11);
      if ((((int)plVar10[1] != 0) && (plVar3 = (longlong *)*plVar10, plVar3 != (longlong *)0x0)) &&
         (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8),
         iVar5 = DAT_146533138, *plVar3 == lVar4)) {
        if (((int)plVar10[1] != 0) && (plVar3 = (longlong *)*plVar10, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          if (*plVar10 != 0) {
            lVar4 = FMemory::Realloc(*plVar10,0,0);
            *plVar10 = lVar4;
          }
          *(undefined4 *)(plVar10 + 1) = 0;
          iVar5 = DAT_146533138;
        }
        break;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar11 = uVar11 + 0x10;
    } while ((int)uVar8 < iVar5);
  }
  if (DAT_146533144 < 1) {
    uVar9 = uVar7;
    iVar6 = iVar5;
    if (0 < iVar5) {
      do {
        if (((*(int *)(uVar7 + 8 + DAT_146533130) == 0) ||
            (*(longlong **)(uVar7 + DAT_146533130) == (longlong *)0x0)) ||
           (cVar2 = (**(code **)(**(longlong **)(uVar7 + DAT_146533130) + 0x10))(), cVar2 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146533130,uVar9,1,1);
        }
        else {
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar7 = uVar7 + 0x10;
        }
        iVar6 = DAT_146533138;
      } while ((int)uVar9 < DAT_146533138);
    }
    _DAT_146533140 = iVar6 * 2;
    if (_DAT_146533140 < 3) {
      _DAT_146533140 = 2;
    }
    if ((_DAT_146533140 < iVar5) && (DAT_14653313c != iVar6)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146533130);
    }
  }
  FUN_142b73ed0(param_1);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x79);
  plVar10 = (longlong *)param_1[0x78];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (param_1[0x74] != 0) {
    FMemory::Free();
  }
  if (param_1[0x72] != 0) {
    FMemory::Free();
  }
  if (param_1[0x70] != 0) {
    FMemory::Free();
  }
  if (param_1[0x6d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x6b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x69] != 0) {
    FMemory::Free();
  }
  if (param_1[0x67] != 0) {
    FMemory::Free();
  }
  if (param_1[0x65] != 0) {
    FMemory::Free();
  }
  plVar10 = (longlong *)param_1[100];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x61);
  plVar10 = (longlong *)param_1[0x60];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x5e];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x5b);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x59);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x57);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x55);
  plVar10 = (longlong *)param_1[0x54];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x52];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x50];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x4e];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x4c];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x4a];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x48];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x46];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x44];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x42];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  plVar10 = (longlong *)param_1[0x40];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (param_1[0x3d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3b] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x39);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x37);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x35);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x33);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x31);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2c);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2a);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x27);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x24);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x22);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x20);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1d);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1a);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x17);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x14);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x11);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xb);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 5);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  FTickerObjectBase::~FTickerObjectBase(param_1);
  return;
}



// FUNCTION 142b38330 FUN_142b38330 body=883 status=ok
// SIG undefined FUN_142b38330(void)

void FUN_142b38330(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_1457c4f50;
  if (param_1[0x8e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x8a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x88] != 0) {
    FMemory::Free();
  }
  if (param_1[0x86] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x85) = 0;
  if (param_1[0x84] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x7c);
  FUN_1413940c0(param_1 + 0x7a);
  *(undefined4 *)(param_1 + 0x79) = 0;
  if (param_1[0x78] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x70,0);
  if (param_1[0x74] != 0) {
    FMemory::Free();
  }
  if (param_1[0x70] != 0) {
    FMemory::Free();
  }
  if (param_1[0x6e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x6c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x6a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x68] != 0) {
    FMemory::Free();
  }
  if (param_1[0x66] != 0) {
    FMemory::Free();
  }
  if (param_1[0x61] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x5f);
  plVar5 = (longlong *)param_1[0x5e];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x5a);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x58);
  if (param_1[0x53] != 0) {
    FMemory::Free();
  }
  if (param_1[0x51] != 0) {
    FMemory::Free();
  }
  if (param_1[0x4f] != 0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)param_1[0x4d];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x48);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x45);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x42);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3f);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x3c);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x39);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x36);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x33);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x30);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2d);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2a);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x27);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x24);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x21);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1e);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1b);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x18);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x15);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x13);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x11);
  iVar4 = *(int *)(param_1 + 0x10);
  plVar5 = (longlong *)param_1[0xf];
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = (longlong *)param_1[0xf];
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  plVar5 = (longlong *)param_1[0xd];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  FUN_142b37920(param_1);
  return;
}



// FUNCTION 142b386b0 FUN_142b386b0 body=188 status=ok
// SIG undefined FUN_142b386b0(void)

void FUN_142b386b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x88);
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
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142b38770 FUN_142b38770 body=461 status=ok
// SIG undefined FUN_142b38770(void)

longlong * FUN_142b38770(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    iVar3 = (int)param_1[1];
    if (iVar3 != 0) {
      puVar1 = (undefined8 *)(*param_1 + 0x108);
      do {
        if (puVar1[2] != 0) {
          FMemory::Free();
        }
        iVar4 = *(int *)(puVar1 + 1);
        plVar5 = (longlong *)*puVar1;
        if (iVar4 != 0) {
          do {
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            plVar5 = plVar5 + 2;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          plVar5 = (longlong *)*puVar1;
        }
        if (plVar5 != (longlong *)0x0) {
          FMemory::Free(plVar5);
        }
        if (puVar1[-4] != 0) {
          FMemory::Free();
        }
        FUN_140b9c480(puVar1 + -6);
        if (puVar1[-8] != 0) {
          FMemory::Free();
        }
        if (puVar1[-10] != 0) {
          FMemory::Free();
        }
        FUN_140b9c620(puVar1 + -0xc);
        if (puVar1[-0xe] != 0) {
          FMemory::Free();
        }
        if (puVar1[-0x12] != 0) {
          FMemory::Free();
        }
        if (puVar1[-0x14] != 0) {
          FMemory::Free();
        }
        if (puVar1[-0x16] != 0) {
          FMemory::Free();
        }
        if (puVar1[-0x18] != 0) {
          FMemory::Free();
        }
        if (puVar1[-0x1a] != 0) {
          FMemory::Free();
        }
        if (puVar1[-0x1c] != 0) {
          FMemory::Free();
        }
        if (puVar1[-0x1e] != 0) {
          FMemory::Free();
        }
        if (puVar1[-0x20] != 0) {
          FMemory::Free();
        }
        puVar1 = puVar1 + 0x25;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FOptionRowData,FDefaultAllocator>::ResizeForCopy(param_1,iVar3);
      lVar6 = *param_1;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        FUN_140b99af0(lVar6,lVar2);
        lVar6 = lVar6 + 0x128;
        lVar2 = lVar2 + 0x128;
      }
    }
  }
  return param_1;
}



// FUNCTION 142b38940 FUN_142b38940 body=112 status=ok
// SIG undefined FUN_142b38940(void)

longlong FUN_142b38940(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FString::operator=();
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  if ((undefined8 *)(param_2 + 0x20) != (undefined8 *)(param_1 + 0x20)) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    if (*(char *)(param_2 + 0x30) != '\0') {
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x28) = uVar1;
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return param_1;
}



// FUNCTION 142b389b0 FUN_142b389b0 body=403 status=ok
// SIG undefined FUN_142b389b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142b389b0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_50 = (longlong *)param_2[1];
  if (uStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_50 + 1) = (int)uStack_50[1] + 1;
    UNLOCK();
  }
  if (&local_58 != param_1) {
    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uVar2 = *param_1;
    plVar3 = (longlong *)param_1[1];
    local_48 = (undefined4)local_58;
    uStack_44 = local_58._4_4_;
    uStack_40 = (undefined4)uStack_50;
    uStack_3c = uStack_50._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_58;
    *(undefined4 *)((longlong)param_1 + 4) = local_58._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    local_58 = uVar2;
    uStack_50 = plVar3;
  }
  plVar3 = uStack_50;
  if (uStack_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = uStack_50 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*uStack_50)(uStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*uStack_50 + 8))(uStack_50,1);
      }
    }
  }
  plVar3 = param_1 + 3;
  param_1[2] = param_2[2];
  if (plVar3 != param_2 + 3) {
    plVar5 = (longlong *)*plVar3;
    for (iVar7 = *(int *)(param_1 + 4); iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
    }
    iVar7 = *(int *)(param_2 + 4);
    lVar4 = param_2[3];
    *(int *)(param_1 + 4) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0x24) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar3,iVar7);
      lVar8 = *plVar3;
      if (iVar7 != 0) {
        puVar6 = (undefined4 *)(lVar4 + 0x14);
        do {
          FString::FString(lVar8,puVar6 + -5);
          *(undefined4 *)(lVar8 + 0x10) = puVar6[-1];
          *(undefined4 *)(lVar8 + 0x14) = *puVar6;
          lVar8 = lVar8 + 0x18;
          iVar7 = iVar7 + -1;
          puVar6 = puVar6 + 6;
        } while (iVar7 != 0);
      }
    }
  }
  FUN_142b38770(param_1 + 5,param_2 + 5);
  return param_1;
}



// FUNCTION 142b38b50 FUN_142b38b50 body=398 status=ok
// SIG undefined FUN_142b38b50(void)

longlong * FUN_142b38b50(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res8 [2];
  
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    plVar1 = (longlong *)param_1[1];
    lVar6 = 0;
    local_res8[0] = 0;
    if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x10,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x10,4);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x10) = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar3 = *(undefined8 **)(param_2 + 0x18);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR__scalar_deleting_destructor__143f600f0;
      if (*(char *)(puVar3 + 0x15) != '\0') {
        FMemory::Free(puVar3[0x12]);
        puVar3[0x12] = 0;
      }
      FArchive::~FArchive(puVar3);
      FMemory::operator_delete(puVar3,0xb0);
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
    uVar4 = FMemory::Malloc((longlong)local_res8[0],0);
    FUN_141694350(param_1,uVar4,(longlong)local_res8[0],*(undefined4 *)(param_2 + 8),0,0);
    lVar5 = operator_new(0xb0);
    if (lVar5 != 0) {
      lVar6 = FBufferReader::FBufferReader(lVar5,uVar4,(longlong)local_res8[0],1,1);
    }
    *(longlong *)(param_2 + 0x18) = lVar6;
    *(byte *)(lVar6 + 0x29) =
         *(byte *)(lVar6 + 0x29) ^
         (*(byte *)((longlong)param_1 + 0x29) ^ *(byte *)(lVar6 + 0x29)) & 0x10;
    *(undefined4 *)(param_2 + 0x14) = 0;
  }
  return param_1;
}



// FUNCTION 142b38ce0 FUN_142b38ce0 body=613 status=ok
// SIG undefined FUN_142b38ce0(void)

ulonglong FUN_142b38ce0(longlong *param_1,undefined4 param_2,SessionId param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  AccountId AVar9;
  int iVar10;
  uint uVar11;
  ulonglong in_RAX;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *local_res20;
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  longlong *local_78;
  code *local_68;
  undefined8 **ppuStack_60;
  code *local_58;
  undefined8 **ppuStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    in_RAX = 0;
    LOCK();
    uVar11 = *(uint *)(plVar3 + 1);
    if (uVar11 == 0) {
      *(uint *)(plVar3 + 1) = 0;
    }
    else {
      in_RAX = (ulonglong)uVar11;
    }
    UNLOCK();
    if (uVar11 != 0) {
      while( true ) {
        uVar6 = (uint)in_RAX;
        LOCK();
        uVar11 = *(uint *)(plVar3 + 1);
        if (uVar6 == uVar11) {
          *(uint *)(plVar3 + 1) = uVar6 + 1;
        }
        else {
          in_RAX = (ulonglong)uVar11;
        }
        UNLOCK();
        if (uVar6 == uVar11) break;
        in_RAX = 0;
        LOCK();
        uVar11 = *(uint *)(plVar3 + 1);
        if (uVar11 == 0) {
          *(uint *)(plVar3 + 1) = 0;
        }
        else {
          in_RAX = (ulonglong)uVar11;
        }
        UNLOCK();
        if (uVar11 == 0) {
          return in_RAX & 0xffffffffffffff00;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar12 = *param_1;
        if (lVar12 != 0) {
          local_res20 = &local_90;
          local_90 = 0;
          local_88 = 0;
          local_68 = FUN_142b34b30;
          ppuStack_60 = &local_res20;
          local_48 = 0x42b34b30;
          uStack_44 = 1;
          uStack_40 = ppuStack_60;
          bifrost::messaging::_guard_xfg_dispatch_icall_nop(param_2,&local_48);
          local_a0 = 0;
          local_98 = 0;
          AVar9 = bifrost::account::_guard_xfg_dispatch_icall_nop(param_3);
          if (AVar9 != 0) {
            local_a8 = &local_a0;
            local_58 = FUN_142b34b30;
            ppuStack_50 = &local_a8;
            local_38 = 0x42b34b30;
            uStack_34 = 1;
            uStack_30 = ppuStack_50;
            bifrost::users::_guard_xfg_dispatch_icall_nop(AVar9,&local_38);
          }
          if (((1 < (int)local_88) && (1 < (int)local_98)) &&
             (lVar14 = *(longlong *)(lVar12 + 0x260), lVar14 != 0)) {
            local_78 = *(longlong **)(lVar12 + 0x268);
            if (local_78 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_78 + 1) = (int)local_78[1] + 1;
              UNLOCK();
            }
            local_80 = lVar14;
            lVar12 = FUN_142b45e90();
            bVar7 = false;
            lVar12 = *(longlong *)(lVar12 + 0x18);
            *(int *)(lVar12 + 0xcc) = *(int *)(lVar12 + 0xcc) + 1;
            iVar13 = *(int *)(lVar12 + 0xcc);
            iVar10 = *(int *)(lVar12 + 0xc0) + -1;
            lVar14 = (longlong)iVar10;
            if (-1 < iVar10) {
              lVar15 = lVar14 << 4;
              bVar7 = false;
              do {
                lVar4 = *(longlong *)(lVar12 + 0xb8);
                if ((*(int *)(lVar15 + 8 + lVar4) == 0) ||
                   (plVar5 = *(longlong **)(lVar15 + lVar4), plVar5 == (longlong *)0x0)) {
LAB_142b38e7c:
                  bVar7 = true;
                }
                else {
                  cVar8 = (**(code **)(*plVar5 + 0x40))(plVar5,&local_80,&local_a0,&local_90);
                  if (cVar8 == '\0') goto LAB_142b38e7c;
                }
                lVar15 = lVar15 + -0x10;
                lVar14 = lVar14 + -1;
              } while (-1 < lVar14);
              iVar13 = *(int *)(lVar12 + 0xcc);
            }
            *(int *)(lVar12 + 0xcc) = iVar13 + -1;
            if (bVar7) {
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                        ((longlong *)(lVar12 + 0xb8),0);
            }
            plVar5 = local_78;
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_78 + 1;
              lVar12 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar13 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
          }
          if (local_a0 != 0) {
            FMemory::Free();
          }
          if (local_90 != 0) {
            FMemory::Free();
          }
        }
        LOCK();
        plVar5 = plVar3 + 1;
        lVar12 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        uVar11 = (int)lVar12 - 1;
        in_RAX = (ulonglong)uVar11;
        if (uVar11 == 0) {
          in_RAX = (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            in_RAX = (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142b38f50 FUN_142b38f50 body=489 status=ok
// SIG undefined FUN_142b38f50(void)

undefined1
FUN_142b38f50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  longlong *local_28;
  longlong *local_18;
  
  lVar7 = *param_1;
  puVar9 = *(undefined8 **)(lVar7 + 0x20);
  puVar3 = puVar9 + (longlong)*(int *)(lVar7 + 0x28) * 3;
  if (puVar9 != puVar3) {
    do {
      if (*(int *)(param_4 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*param_4;
      }
      if (*(int *)(puVar9 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*puVar9;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar8);
      if (iVar5 == 0) goto LAB_142b38ffa;
      puVar9 = puVar9 + 3;
    } while (puVar9 != puVar3);
    lVar7 = *param_1;
  }
  iVar5 = *(int *)(lVar7 + 0x28);
  *(int *)(lVar7 + 0x28) = iVar5 + 1;
  if (*(int *)(lVar7 + 0x2c) < iVar5 + 1) {
    TArray<`anonymous_namespace'::FLogCategoryPtrs,FDefaultAllocator>::ResizeGrow
              ((longlong *)(lVar7 + 0x20),iVar5);
  }
  puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x20) + (longlong)iVar5 * 0x18);
  FString::FString(puVar9,param_4);
  *(undefined1 *)(puVar9 + 2) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
LAB_142b38ffa:
  if (*(char *)(puVar9 + 2) == '\0') {
    if ((*(float *)((longlong)puVar9 + 0x14) == 0.0) ||
       (*(float *)((longlong)puVar9 + 0x14) < *(float *)((longlong)param_1 + 0x14))) {
      FUN_142b48aa0(*(undefined8 *)param_1[3],&local_48,param_4);
      FUN_142b60a30(local_48,local_38,0);
      plVar4 = local_18;
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_18 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
      plVar4 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
      plVar4 = local_40;
      *(undefined1 *)(puVar9 + 2) = local_38[0];
      *(int *)((longlong)puVar9 + 0x14) = (int)param_1[2];
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    if (*(char *)(puVar9 + 2) == '\0') {
      *(undefined1 *)param_1[1] = 0;
    }
  }
  return *(undefined1 *)param_1[1];
}



// FUNCTION 142b39140 FUN_142b39140 body=459 status=ok
// SIG undefined FUN_142b39140(void)

void FUN_142b39140(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  void *local_68;
  undefined8 local_60;
  longlong local_58 [5];
  longlong *local_30;
  longlong local_28 [2];
  
  local_58[1] = 0x11;
  local_58[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"leviathan_stream",0x22);
  lVar4 = *param_1;
  local_68 = (void *)0x0;
  if (*(longlong *)(lVar4 + 0x18) == 0) {
    iVar3 = *(int *)(lVar4 + 0x40);
    _Src = *(void **)(lVar4 + 0x38);
    local_60 = CONCAT44(local_60._4_4_,iVar3);
    if (iVar3 == 0) {
      local_60 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar3,0);
      _guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)iVar3 * 2);
    }
  }
  else {
    local_60 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"player_stream",0x1c);
  }
  (**(code **)(*param_2 + 8))(param_2,local_58,&local_68);
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  FUN_142b49e00(*param_1,local_58 + 4);
  if (local_58[4] != 0) {
    local_58[2] = 0;
    local_58[3] = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
    FGenericPlatformString::Memcpy(local_58[2],L"configuration_group",0x28);
    lVar4 = *param_2;
    uVar6 = FUN_140852e70(local_58[4],local_res8);
    uVar6 = FName::ToString(uVar6,local_28);
    (**(code **)(lVar4 + 8))(param_2,local_58 + 2,uVar6);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_58[2] != 0) {
      FMemory::Free();
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 142b39310 FUN_142b39310 body=182 status=ok
// SIG undefined FUN_142b39310(void)

void FUN_142b39310(undefined8 param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  longlong local_68 [8];
  undefined1 *local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  code *local_10;
  
  lVar1 = *param_2;
  if (*(longlong **)(lVar1 + 0x28) == (longlong *)0x0) {
    *(undefined4 *)(lVar1 + 200) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0xd0) = 3;
    return;
  }
  if (*param_3 == '\0') {
    *(undefined4 *)(lVar1 + 200) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0xd0) = 3;
  }
  else {
    (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x50))();
    *(undefined4 *)(*param_2 + 0xd0) = 2;
  }
  local_68[0] = *param_2;
  local_28 = &LAB_142b2fa70;
  local_20 = &LAB_142b2f960;
  local_18 = &LAB_142b2f960;
  local_10 = AK::MemoryMgr::StartProfileThreadUsage;
  bifrost::messaging::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(local_68[0] + 0x118),local_68);
  return;
}



// FUNCTION 142b393d0 FUN_142b393d0 body=374 status=ok
// SIG undefined FUN_142b393d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b393d0(undefined8 param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 local_18;
  longlong *plStack_10;
  
  uVar7 = 0xca;
  if (*param_3 != 0) {
    uVar7 = 400;
  }
  plVar8 = (longlong *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2b818) && (_Init_thread_header(&DAT_146b2b818), DAT_146b2b818 == -1))
  {
    plVar5 = (longlong *)operator_new(0x180);
    plVar6 = plVar8;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_1457c5770;
      FUN_142af8bf0(plVar5 + 2);
      plVar6 = plVar5;
    }
    _DAT_146b2b808 = plVar6 + 2;
    DAT_146b2b810 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&DAT_146b2b808,_DAT_146b2b808,_DAT_146b2b808);
    atexit(FUN_143ebef40);
    _Init_thread_footer(&DAT_146b2b818);
  }
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  if ((((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))(), cVar4 != '\0')) {
    if ((int)param_2[1] != 0) {
      plVar8 = (longlong *)*param_2;
    }
    (**(code **)(*plVar8 + 0x40))(plVar8,&DAT_146b2b808,uVar7,&local_18);
  }
  plVar8 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_10 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_10)(plStack_10);
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
  return;
}



// FUNCTION 142b39550 FUN_142b39550 body=278 status=ok
// SIG undefined FUN_142b39550(void)

void FUN_142b39550(undefined8 param_1,ulonglong *param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (*(short *)(param_4 + 0x18) == 0x28) {
    cVar3 = FUN_142190070(param_2);
    if (cVar3 == '\0') {
      lVar4 = FUN_1407ba9a0(param_4);
      if (lVar4 == 0) {
        FUN_14217f5b0(param_2,L"NONE");
      }
      else {
        lVar5 = FUN_142a2f930();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          FUN_142194380(param_2,0x13,0,0,0);
          *param_2 = (ulonglong)uVar1;
          return;
        }
        uVar6 = FUN_1428cc750(lVar4,local_18);
        uVar6 = FUN_1428d4fe0(local_28,uVar6);
        FUN_140643170(param_2,uVar6);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (local_18[0] != 0) {
          FMemory::Free();
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142b39670 FUN_142b39670 body=603 status=ok
// SIG undefined FUN_142b39670(void)

void FUN_142b39670(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  short *psVar10;
  undefined8 uVar11;
  short *psVar12;
  longlong lVar13;
  undefined4 uVar14;
  double dVar15;
  float fVar16;
  longlong local_58 [2];
  undefined **local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  longlong local_30;
  
  plVar1 = param_2 + 1;
  lVar13 = *param_2 + 0x10;
  cVar7 = FUN_14218fc90(plVar1);
  if (cVar7 == '\0') {
    if ((short)param_2[4] == 100) {
      FUN_142b32c20(plVar1,&local_48);
      puVar4 = (undefined8 *)**(undefined8 **)(param_1 + 8);
      uVar9 = FUN_142b671d0(lVar13);
      (*(code *)*puVar4)(*(undefined8 *)(param_1 + 8),uVar9,local_40);
      local_48 = &PTR_FUN_143f740c8;
      if (local_30 != 0) {
        FMemory::Free();
      }
      local_48 = &PTR_FUN_143f73d18;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
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
    }
    else if ((short)param_2[4] == 2) {
      lVar6 = *plVar1;
      lVar5 = **(longlong **)(param_1 + 8);
      uVar9 = FUN_142b671d0(lVar13);
      (**(code **)(lVar5 + 0x40))(*(undefined8 *)(param_1 + 8),uVar9,(char)lVar6);
    }
    else if ((*param_1 == '\0') || (cVar7 = FUN_14218fd80(plVar1), cVar7 == '\0')) {
      cVar7 = FUN_14218ff60(plVar1);
      if (cVar7 == '\0') {
        lVar5 = **(longlong **)(param_1 + 8);
        uVar9 = FUN_142194f30(plVar1,local_58);
        uVar11 = FUN_142b671d0(lVar13);
        (**(code **)(lVar5 + 8))(*(undefined8 *)(param_1 + 8),uVar11,uVar9);
        if (local_58[0] != 0) {
          FMemory::Free();
        }
      }
      else {
        fVar16 = 0.0;
        psVar10 = (short *)FUN_14218bef0((short)param_2[4]);
        if ((*psVar10 != 0) && (*(int *)(psVar10 + 0x78) != 0)) {
          psVar12 = (short *)0x0;
          if (*(longlong *)(psVar10 + 0x70) == 0) {
            psVar12 = psVar10 + 0x60;
          }
          if (psVar12 != (short *)0x0 || *(longlong *)(psVar10 + 0x70) != 0) {
            dVar15 = (double)FUN_142182720(psVar10 + 0x58,plVar1);
            fVar16 = (float)dVar15;
          }
        }
        lVar5 = **(longlong **)(param_1 + 8);
        uVar9 = FUN_142b671d0(lVar13);
        (**(code **)(lVar5 + 0x38))(*(undefined8 *)(param_1 + 8),uVar9,fVar16);
      }
    }
    else {
      cVar7 = FUN_14218fd80(plVar1);
      uVar14 = 0;
      uVar8 = 0;
      if ((cVar7 != '\0') &&
         ((psVar10 = (short *)FUN_14218bef0((short)param_2[4]), uVar8 = uVar14, *psVar10 != 0 &&
          (*(int *)(psVar10 + 0x50) != 0)))) {
        psVar12 = (short *)0x0;
        if (*(longlong *)(psVar10 + 0x48) == 0) {
          psVar12 = psVar10 + 0x38;
        }
        if (psVar12 != (short *)0x0 || *(longlong *)(psVar10 + 0x48) != 0) {
          uVar8 = FUN_142182720(psVar10 + 0x30,plVar1);
        }
      }
      lVar5 = **(longlong **)(param_1 + 8);
      uVar9 = FUN_142b671d0(lVar13);
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(param_1 + 8),uVar9,uVar8);
    }
  }
  return;
}



// FUNCTION 142b398d0 FUN_142b398d0 body=403 status=ok
// SIG undefined FUN_142b398d0(void)

void FUN_142b398d0(longlong *param_1,longlong *param_2)

{
  double dVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  LARGE_INTEGER local_res8;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  
  local_28[1] = 6;
  uVar3 = 0;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"Event",0xc);
  local_38 = (void *)0x0;
  local_30 = *(int *)(*param_1 + 0x18);
  lVar5 = (longlong)local_30;
  _Src = *(void **)(*param_1 + 0x10);
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar5 * 2);
  }
  (**(code **)(*param_2 + 8))(param_2,local_28,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  lVar5 = param_1[1];
  QueryPerformanceCounter(&local_res8);
  local_28[0] = 0;
  local_28[1] = 5;
  dVar6 = (double)local_res8.QuadPart * DAT_1468b02f8;
  dVar1 = *(double *)(lVar5 + 0x188);
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"time",10);
  (**(code **)(*param_2 + 0x20))(param_2,local_28,(int)(((dVar6 + 16777216.0) - dVar1) * 1000.0));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  puVar2 = (undefined8 *)param_1[2];
  if (*(int *)(puVar2 + 8) != 0) {
    plVar4 = (longlong *)puVar2[6];
    if ((longlong *)puVar2[6] == (longlong *)0x0) {
      plVar4 = puVar2 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b39a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(uVar3,param_2);
  return;
}



// FUNCTION 142b39a70 FUN_142b39a70 body=449 status=ok
// SIG undefined FUN_142b39a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b39a70(undefined8 *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  short *_Src;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_188 [32];
  short *local_168 [2];
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar8;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar2 = *param_2;
  if (param_2[1] <= uVar2) {
    return;
  }
  iVar4 = 0;
  iVar6 = 0;
  local_58 = (short *)0x0;
  uVar5 = 0xffffffffffffffff;
  uVar7 = uVar5;
  if (uVar2 == 0) {
    local_50 = (short *)0x0;
    local_48 = 0;
    goto LAB_142b39b7f;
  }
  do {
    uVar8 = uVar7;
    uVar7 = uVar8 + 1;
  } while (*(char *)(uVar7 + uVar2) != '\0');
  local_168[0] = (short *)((ulonglong)local_168[0] & 0xffffffff00000000);
  FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (local_168,0x7fffffff,uVar2,uVar7 & 0xffffffff);
  local_48 = (int)local_168[0];
  uVar1 = (int)local_168[0] + 1;
  if (uVar1 < 0x81) {
    if (local_58 != (short *)0x0) {
      lVar3 = 0;
LAB_142b39b20:
      local_58 = (short *)FMemory::Realloc(local_58,lVar3,0);
    }
  }
  else if ((local_58 != (short *)0x0) || (uVar1 != 0)) {
    lVar3 = (longlong)(int)uVar1 * 2;
    goto LAB_142b39b20;
  }
  local_168[0] = local_158;
  if (local_58 != (short *)0x0) {
    local_168[0] = local_58;
  }
  local_50 = local_168[0];
  FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(local_168,uVar1,uVar2,(int)uVar8 + 2);
LAB_142b39b7f:
  _Src = local_50;
  param_1 = (undefined8 *)*param_1;
  if ((short *)*param_1 != local_50) {
    if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
      do {
        uVar5 = uVar5 + 1;
      } while (local_50[uVar5] != 0);
      iVar4 = (int)uVar5 + 1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar4);
      iVar6 = *(int *)(param_1 + 1);
    }
    *(int *)(param_1 + 1) = iVar6 + iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar4 * 2);
    }
  }
  if (local_58 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b39c40 FUN_142b39c40 body=968 status=ok
// SIG undefined FUN_142b39c40(void)

void FUN_142b39c40(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  local_30 = 0xd;
  local_38 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"service_name",0x1a);
  (**(code **)(*param_3 + 8))(param_3,&local_38,*param_1);
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_38 = 0;
  local_30 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"spark_env",0x14);
  (**(code **)(*param_3 + 8))(param_3,&local_38,param_1[1]);
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_38 = 0;
  local_30 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,&DAT_1457c54a0,8);
  (**(code **)(*param_3 + 8))(param_3,&local_38,param_1[2]);
  if (local_38 != 0) {
    FMemory::Free();
  }
  psVar2 = (short *)FUN_142b72720(*(undefined4 *)param_1[3]);
  local_30 = 0;
  local_38 = 0;
  lVar6 = -1;
  if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_30 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,psVar2,(longlong)(int)uVar3 * 2);
  }
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"method",0xe);
  (**(code **)(*param_3 + 8))(param_3,local_28,&local_38);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"http_status_code",0x22);
  (**(code **)(*param_3 + 0x18))(param_3,local_28,*(undefined4 *)param_1[4]);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"duration_seconds",0x22);
  (**(code **)(*param_3 + 0x38))(param_3,local_28,(float)*(double *)param_1[5]);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)param_1[6];
  if (iVar1 == 0) {
    pwVar5 = L"NotStarted";
  }
  else if (iVar1 == 1) {
    pwVar5 = L"Processing";
  }
  else if (iVar1 == 2) {
    pwVar5 = L"Failed";
  }
  else if (iVar1 == 3) {
    pwVar5 = L"ConnectionError";
  }
  else if (iVar1 == 4) {
    pwVar5 = L"Succeeded";
  }
  else {
    pwVar5 = L"";
  }
  local_30 = 0;
  local_38 = 0;
  if (*pwVar5 != L'\0') {
    do {
      lVar6 = lVar6 + 1;
    } while (pwVar5[lVar6] != L'\0');
    uVar3 = (int)lVar6 + 1;
    local_30 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,pwVar5,(longlong)(int)uVar3 * 2);
  }
  local_28[0] = 0;
  local_28[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"http_error",0x16);
  (**(code **)(*param_3 + 8))(param_3,local_28,&local_38);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"retries_remaining",0x24);
  (**(code **)(*param_3 + 0x18))(param_3,local_28,*(undefined4 *)param_1[7]);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b3a010 FUN_142b3a010 body=2062 status=ok
// SIG undefined FUN_142b3a010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b3a010(longlong *param_1,SessionId *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t _C;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  short *psVar9;
  char cVar10;
  wint_t wVar11;
  wint_t wVar12;
  AccountId AVar13;
  int iVar14;
  longlong lVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar23;
  wint_t *pwVar24;
  wchar_t *pwVar25;
  undefined2 *puVar26;
  bool bVar27;
  undefined1 auStack_2f8 [32];
  SessionId local_2d8;
  int local_2d4 [3];
  longlong local_2c8 [2];
  undefined2 *local_2b8;
  undefined8 local_2b0;
  undefined2 *local_2a8;
  undefined8 local_2a0;
  undefined2 *local_298;
  undefined8 local_290;
  longlong local_288 [2];
  longlong *local_278;
  ulonglong local_270;
  ulonglong local_268;
  longlong local_260 [7];
  longlong *plStack_228;
  undefined1 local_220 [8];
  longlong *local_218;
  ulonglong local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined1 local_200 [8];
  longlong *local_1f8;
  short *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  ulonglong local_1d8 [3];
  longlong *local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  code *local_1a8;
  longlong **pplStack_1a0;
  code *local_198;
  longlong **pplStack_190;
  longlong *local_188;
  longlong *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar22;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  uVar19 = 0;
  local_2d8 = 0;
  if ((param_2[1] == 0) && (plVar4 = (longlong *)param_1[1], plVar4 != (longlong *)0x0)) {
    LOCK();
    iVar14 = (int)plVar4[1];
    bVar27 = iVar14 == 0;
    if (bVar27) {
      *(int *)(plVar4 + 1) = 0;
      iVar14 = 0;
    }
    UNLOCK();
    while (!bVar27) {
      LOCK();
      bVar27 = iVar14 == (int)plVar4[1];
      if (bVar27) {
        *(int *)(plVar4 + 1) = iVar14 + 1;
      }
      UNLOCK();
      if (bVar27) {
        if (plVar4 == (longlong *)0x0) {
          return;
        }
        lVar23 = *param_1;
        local_1e8 = lVar23;
        if (lVar23 != 0) {
          lVar15 = FUN_142b45e90();
          lVar15 = *(longlong *)(lVar15 + 0x18);
          local_2d8 = *param_2;
          local_2c8[0] = 0;
          local_2c8[1] = 0;
          local_2b8 = (undefined2 *)0x0;
          local_2b0 = 0;
          local_2a8 = (undefined2 *)0x0;
          local_2a0 = 0;
          local_298 = (undefined2 *)0x0;
          local_290 = 0;
          local_288[0] = 0;
          local_288[1] = 0;
          local_1e0 = lVar15;
          AVar13 = bifrost::account::_guard_xfg_dispatch_icall_nop(local_2d8);
          if (AVar13 != 0) {
            local_1f8 = local_2c8;
            local_1a8 = FUN_142b34b50;
            local_178 = 0x42b34b50;
            uStack_174 = 1;
            pplStack_1a0 = &local_1f8;
            uStack_170 = &local_1f8;
            bifrost::users::_guard_xfg_dispatch_icall_nop(AVar13,&local_178);
          }
          if (param_2[2] == 3) {
            iVar14 = TSet<TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>,0>,FDefaultSetAllocator>
                     ::Remove(lVar23 + 0x3e0,local_2c8 + 2);
            uStack_160 = (longlong **)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
            if ((0 < iVar14) &&
               (lVar6 = *(longlong *)(lVar23 + 0x260),
               uStack_160 = (longlong **)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160),
               lVar6 != 0)) {
              local_1b0 = *(longlong **)(lVar23 + 0x268);
              if (local_1b0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
                UNLOCK();
              }
              local_1b8 = lVar6;
              TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
                        (lVar15 + 0xa0,&local_1b8,local_2c8);
              plVar3 = local_1b0;
              uStack_160 = (longlong **)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
              if (local_1b0 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_1b0 + 1;
                lVar23 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                uStack_160 = (longlong **)CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
                if ((int)lVar23 == 1) {
                  (**(code **)*local_1b0)(local_1b0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  iVar14 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar14 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                  }
                }
              }
            }
          }
          else {
            uVar5 = *(undefined8 *)(param_2 + 4);
            uVar17 = uVar19;
            if ((ulonglong)uVar5 < (ulonglong)*(undefined8 *)(param_2 + 6)) {
              local_58 = (short *)0x0;
              if (uVar5 == 0) {
                local_50 = (short *)0x0;
                local_48 = 0;
              }
              else {
                uVar21 = 0xffffffffffffffff;
                do {
                  uVar22 = uVar21;
                  uVar21 = uVar22 + 1;
                } while (*(char *)(uVar5 + uVar21) != '\0');
                local_2d4[0] = 0;
                FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                          (local_2d4,0x7fffffff,uVar5,uVar21 & 0xffffffff);
                local_48 = local_2d4[0];
                uVar20 = local_2d4[0] + 1;
                if (uVar20 < 0x81) {
                  if (local_58 != (short *)0x0) {
                    lVar23 = 0;
LAB_142b3a1d9:
                    local_58 = (short *)FMemory::Realloc(local_58,lVar23,0);
                  }
                }
                else if ((local_58 != (short *)0x0) || (uVar20 != 0)) {
                  lVar23 = (longlong)(int)uVar20 * 2;
                  goto LAB_142b3a1d9;
                }
                local_1f0 = local_158;
                if (local_58 != (short *)0x0) {
                  local_1f0 = local_58;
                }
                local_50 = local_1f0;
                FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>
                          (&local_1f0,uVar20,uVar5,(int)uVar22 + 2);
              }
              psVar9 = local_50;
              local_270 = 0;
              local_268 = 0;
              if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
                lVar23 = -1;
                do {
                  lVar23 = lVar23 + 1;
                } while (local_50[lVar23] != 0);
                uVar20 = (int)lVar23 + 1;
                local_268 = (ulonglong)uVar20;
                if (0 < (int)uVar20) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0);
                }
                uVar17 = local_270;
                FGenericPlatformString::Memcpy(local_270,psVar9,(longlong)(int)uVar20 * 2);
              }
              puVar16 = &local_270;
              bVar8 = true;
              bVar7 = true;
              bVar27 = false;
            }
            else {
              local_1d8[1] = 0;
              puVar16 = local_1d8;
              bVar8 = false;
              bVar7 = false;
              bVar27 = true;
            }
            *puVar16 = 0;
            local_208 = (int)puVar16[1];
            local_204 = *(undefined4 *)((longlong)puVar16 + 0xc);
            puVar16[1] = 0;
            local_210 = uVar17;
            if ((bVar27) && (local_1d8[0] != 0)) {
              FMemory::Free();
            }
            if ((bVar7) && (local_270 != 0)) {
              FMemory::Free();
            }
            if ((bVar8) && (local_58 != (short *)0x0)) {
              FMemory::Free();
            }
            local_260[6] = 0;
            plStack_228 = (longlong *)0x0;
            TJsonReaderFactory<wchar_t>::Create(local_220,&local_210);
            cVar10 = FUN_1404a7f60(local_220,local_260 + 6);
            lVar23 = local_260[6];
            if ((cVar10 != '\0') && (local_260[6] != 0)) {
              local_260[0] = 0;
              local_260[1] = 0xe;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_260,0);
              FGenericPlatformString::Memcpy(local_260[0],L"rich_presence",0x1c);
              FUN_1416b40a0(lVar23,local_260,&local_298);
              if (local_260[0] != 0) {
                FMemory::Free();
              }
              local_260[2] = 0;
              local_260[3] = 0x11;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_260 + 2,0);
              FGenericPlatformString::Memcpy(local_260[2],L"current_lobby_id",0x22);
              FUN_1416b40a0(lVar23,local_260 + 2,&local_2a8);
              if (local_260[2] != 0) {
                FMemory::Free();
              }
              local_260[4] = 0;
              local_260[5] = 0xe;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_260 + 4,0);
              FGenericPlatformString::Memcpy(local_260[4],L"friend_status",0x1c);
              FUN_1416b40a0(lVar23,local_260 + 4,local_288);
              if (local_260[4] != 0) {
                FMemory::Free();
              }
            }
            pwVar24 = &DAT_14465dea8;
            puVar18 = &DAT_143f3eda8;
            if ((int)local_2a0 != 0) {
              puVar18 = local_2a8;
            }
            for (; (wVar11 = *(wint_t *)((longlong)(puVar18 + -0xa232ef54) + (longlong)pwVar24),
                   wVar11 != 0 || (*pwVar24 != 0)); pwVar24 = pwVar24 + 1) {
              if (wVar11 != *pwVar24) {
                wVar11 = towlower(wVar11);
                wVar12 = towlower(*pwVar24);
                if (wVar11 != wVar12) {
                  if (wVar11 == wVar12) break;
                  goto LAB_142b3a4a6;
                }
              }
            }
            if (local_2a8 != &DAT_143f3eda8) {
              uVar20 = local_2a0._4_4_;
              local_2a0 = (ulonglong)local_2a0._4_4_ << 0x20;
              uVar17 = uVar19;
              iVar14 = 0;
              if (uVar20 != 0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2a8);
                uVar17 = local_2a0 & 0xffffffff;
                iVar14 = local_2a0._4_4_;
              }
              if (iVar14 < (int)uVar17) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8);
              }
            }
LAB_142b3a4a6:
            pwVar25 = L"empty";
            puVar18 = &DAT_143f3eda8;
            if ((int)local_290 != 0) {
              puVar18 = local_298;
            }
            for (; (_C = *(wchar_t *)((longlong)(puVar18 + -0xa230da6c) + (longlong)pwVar25),
                   _C != L'\0' || (*pwVar25 != L'\0')); pwVar25 = pwVar25 + 1) {
              if (_C != *pwVar25) {
                wVar11 = towlower(_C);
                wVar12 = towlower(*pwVar25);
                if (wVar11 != wVar12) {
                  if (wVar11 == wVar12) break;
                  goto LAB_142b3a535;
                }
              }
            }
            if (local_298 != &DAT_143f3eda8) {
              uVar20 = local_290._4_4_;
              local_290 = (ulonglong)local_290._4_4_ << 0x20;
              iVar14 = 0;
              if (uVar20 != 0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_298,0);
                uVar19 = local_290 & 0xffffffff;
                iVar14 = local_290._4_4_;
              }
              if (iVar14 < (int)uVar19) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19);
              }
            }
LAB_142b3a535:
            local_278 = local_2c8;
            local_198 = FUN_142b34b30;
            pplStack_190 = &local_278;
            local_168 = 0x42b34b30;
            uStack_164 = 1;
            uStack_160 = pplStack_190;
            bifrost::sessions::_guard_xfg_dispatch_icall_nop(local_2d8,&local_168);
            lVar23 = local_1e8;
            if (1 < (int)local_2b0) {
              if (*(int *)(local_1e8 + 0x290) == 0) {
                puVar18 = &DAT_143f3eda8;
              }
              else {
                puVar18 = *(undefined2 **)(local_1e8 + 0x288);
              }
              puVar26 = &DAT_143f3eda8;
              if ((int)local_2b0 != 0) {
                puVar26 = local_2b8;
              }
              iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar26,puVar18);
              if (iVar14 != 0) {
                local_188 = local_2c8 + 2;
                local_180 = local_2c8;
                FUN_142b32440(lVar23 + 0x3e0,local_200,&local_188,0);
                lVar15 = *(longlong *)(lVar23 + 0x260);
                if (lVar15 != 0) {
                  local_1c0 = *(longlong **)(lVar23 + 0x268);
                  if (local_1c0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
                    UNLOCK();
                  }
                  local_1d8[2] = lVar15;
                  TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
                            (local_1e0 + 0xa0,local_1d8 + 2,local_2c8);
                  plVar3 = local_1c0;
                  if (local_1c0 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_1c0 + 1;
                    lVar23 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar23 == 1) {
                      (**(code **)*local_1c0)(local_1c0);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar3 + 0xc);
                      iVar14 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar14 == 1) {
                        (**(code **)(*plVar3 + 8))(plVar3,1);
                      }
                    }
                  }
                }
              }
            }
            plVar3 = local_218;
            if (local_218 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_218 + 1;
              lVar23 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar23 == 1) {
                (**(code **)*local_218)(local_218);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar14 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*local_218 + 8))(local_218,1);
                }
              }
            }
            plVar3 = plStack_228;
            if (plStack_228 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_228 + 1;
              lVar23 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar23 == 1) {
                (**(code **)*plStack_228)(plStack_228);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar14 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*plStack_228 + 8))(plStack_228,1);
                }
              }
            }
            if (local_210 != 0) {
              FMemory::Free();
            }
          }
          if (local_288[0] != 0) {
            FMemory::Free();
          }
          if (local_298 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_2a8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_2b8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_2c8[0] != 0) {
            FMemory::Free();
          }
        }
        LOCK();
        plVar3 = plVar4 + 1;
        lVar23 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar23 != 1) {
          return;
        }
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 != 1) {
          return;
        }
        (**(code **)(*plVar4 + 8))(plVar4,1);
        return;
      }
      LOCK();
      iVar14 = (int)plVar4[1];
      bVar27 = iVar14 == 0;
      if (bVar27) {
        *(int *)(plVar4 + 1) = 0;
        iVar14 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 142b3a820 FUN_142b3a820 body=496 status=ok
// SIG undefined FUN_142b3a820(void)

void FUN_142b3a820(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  LARGE_INTEGER local_res8;
  longlong local_28 [2];
  
  if (DAT_146b2ade0 == 0) {
    puVar5 = (undefined8 *)FName::FName(&local_res8,"GbxSpark",1);
    uVar1 = *puVar5;
    uVar6 = FUN_14168dc80();
    FUN_141690010(uVar6,uVar1);
  }
  local_28[1] = 0xb;
  local_28[0] = 0;
  iVar3 = *(int *)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x378);
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"clock_skew",0x16);
  (**(code **)(*param_2 + 0x18))(param_2,local_28,iVar3);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"base_time",0x14);
  (**(code **)(*param_2 + 0x30))(param_2,local_28,(longlong)iVar3 + *(longlong *)(*param_1 + 0x180))
  ;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  iVar3 = FUN_142b4fdb0(*param_1);
  if (iVar3 != 0) {
    local_28[0] = 0;
    local_28[1] = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"leviathan_overrun_depth",0x30);
    lVar2 = *param_2;
    uVar4 = FUN_142b4fdb0(*param_1);
    (**(code **)(lVar2 + 0x18))(param_2,local_28,uVar4);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  local_28[0] = 0;
  local_28[1] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"leviathan_post_interval",0x30);
  QueryPerformanceCounter(&local_res8);
  (**(code **)(*param_2 + 0x18))
            (param_2,local_28,
             (int)(((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
                  *(double *)(*param_1 + 0x198)));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b3aa10 FUN_142b3aa10 body=196 status=ok
// SIG undefined FUN_142b3aa10(void)

void FUN_142b3aa10(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  lVar4 = *param_2;
  lVar1 = lVar4 + (longlong)(int)param_2[1] * 0x28;
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
    uVar2 = *param_1;
    piVar3 = (int *)FUN_14218b2e0(uVar2,local_res10,lVar4);
    if (*piVar3 == -1) {
      FUN_141288240(uVar2,local_res18,lVar4,0);
      local_48[0] = *(undefined1 *)(param_1 + 1);
      local_40 = param_1[2];
      puStack_30 = local_48;
      local_38 = &LAB_142b40dc0;
      local_28 = 0x42b40dc0;
      uStack_24 = 1;
      uStack_20 = puStack_30;
      FUN_142189c40(lVar4,&local_28);
    }
  }
  return;
}



// FUNCTION 142b3aae0 FUN_142b3aae0 body=453 status=ok
// SIG undefined FUN_142b3aae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b3aae0(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  short *_Src;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_188 [32];
  short *local_168 [2];
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar8;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar2 = *param_2;
  if (param_2[1] <= uVar2) {
    return;
  }
  iVar4 = 0;
  iVar6 = 0;
  local_58 = (short *)0x0;
  uVar5 = 0xffffffffffffffff;
  uVar7 = uVar5;
  if (uVar2 == 0) {
    local_50 = (short *)0x0;
    local_48 = 0;
    goto LAB_142b3abef;
  }
  do {
    uVar8 = uVar7;
    uVar7 = uVar8 + 1;
  } while (*(char *)(uVar7 + uVar2) != '\0');
  local_168[0] = (short *)((ulonglong)local_168[0] & 0xffffffff00000000);
  FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (local_168,0x7fffffff,uVar2,uVar7 & 0xffffffff);
  local_48 = (int)local_168[0];
  uVar1 = (int)local_168[0] + 1;
  if (uVar1 < 0x81) {
    if (local_58 != (short *)0x0) {
      lVar3 = 0;
LAB_142b3ab90:
      local_58 = (short *)FMemory::Realloc(local_58,lVar3,0);
    }
  }
  else if ((local_58 != (short *)0x0) || (uVar1 != 0)) {
    lVar3 = (longlong)(int)uVar1 * 2;
    goto LAB_142b3ab90;
  }
  local_168[0] = local_158;
  if (local_58 != (short *)0x0) {
    local_168[0] = local_58;
  }
  local_50 = local_168[0];
  FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(local_168,uVar1,uVar2,(int)uVar8 + 2);
LAB_142b3abef:
  _Src = local_50;
  lVar3 = *param_1;
  if (*(short **)(lVar3 + 0x10) != local_50) {
    if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
      do {
        uVar5 = uVar5 + 1;
      } while (local_50[uVar5] != 0);
      iVar4 = (int)uVar5 + 1;
    }
    *(undefined4 *)(lVar3 + 0x18) = 0;
    if (*(int *)(lVar3 + 0x1c) != iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar3 + 0x10,iVar4);
      iVar6 = *(int *)(lVar3 + 0x18);
    }
    *(int *)(lVar3 + 0x18) = iVar6 + iVar4;
    if (*(int *)(lVar3 + 0x1c) < iVar6 + iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar3 + 0x10,iVar6);
    }
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop(*(void **)(lVar3 + 0x10),_Src,(longlong)iVar4 * 2);
    }
  }
  if (local_58 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b3acb0 FUN_142b3acb0 body=177 status=ok
// SIG undefined FUN_142b3acb0(void)

void FUN_142b3acb0(undefined8 param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  
  uVar1 = *param_3;
  plVar4 = (longlong *)0x0;
  if (uVar1 == 0) {
    FString::operator=(*param_2 + 0x298,param_2 + 1);
    *(undefined4 *)(*param_2 + 0x2a8) = 0;
  }
  else if (8 < uVar1) {
    lVar2 = *param_2;
    if ((*(int *)(lVar2 + 0x90) != 0) && (*(longlong **)(lVar2 + 0x88) != (longlong *)0x0)) {
      cVar3 = (**(code **)(**(longlong **)(lVar2 + 0x88) + 0x18))();
      if (cVar3 != '\0') {
        if (*(int *)(lVar2 + 0x90) != 0) {
          plVar4 = *(longlong **)(lVar2 + 0x88);
        }
        (**(code **)(*plVar4 + 0x40))(plVar4,5,param_2 + 1);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142b3ad05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_142b3ad98 + (longlong)(int)uVar1 * 4)))
            (IMAGE_DOS_HEADER_140000000.e_magic +
             *(uint *)(&DAT_142b3ad98 + (longlong)(int)uVar1 * 4));
  return;
}



// FUNCTION 142b3adc0 FUN_142b3adc0 body=405 status=ok
// SIG undefined FUN_142b3adc0(void)

void FUN_142b3adc0(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  longlong *local_38;
  longlong *local_30;
  
  if ((param_1[1] != 0) && (param_1[2] != 0)) {
    plVar9 = (longlong *)0x0;
    piVar1 = (int *)(param_1[2] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar2 = (longlong *)param_1[2];
      plVar8 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar2[1];
        bVar12 = iVar6 == 0;
        if (bVar12) {
          *(int *)(plVar2 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar9, !bVar12) {
          LOCK();
          bVar12 = iVar6 == (int)plVar2[1];
          if (bVar12) {
            *(int *)(plVar2 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar12) {
            plVar8 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar9 = (longlong *)param_1[1];
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
            }
            break;
          }
          LOCK();
          iVar6 = (int)plVar2[1];
          bVar12 = iVar6 == 0;
          if (bVar12) {
            *(int *)(plVar2 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      lVar3 = *param_1;
      bVar12 = false;
      *(int *)(lVar3 + 0x14c) = *(int *)(lVar3 + 0x14c) + 1;
      iVar6 = *(int *)(lVar3 + 0x14c);
      iVar7 = *(int *)(lVar3 + 0x140) + -1;
      lVar10 = (longlong)iVar7;
      if (-1 < iVar7) {
        lVar11 = lVar10 << 4;
        bVar12 = false;
        do {
          lVar4 = *(longlong *)(lVar3 + 0x138);
          if ((*(int *)(lVar11 + 8 + lVar4) == 0) ||
             (plVar2 = *(longlong **)(lVar11 + lVar4), plVar2 == (longlong *)0x0)) {
LAB_142b3aeaa:
            bVar12 = true;
          }
          else {
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            local_38 = plVar9;
            local_30 = plVar8;
            cVar5 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_38,param_2);
            if (cVar5 == '\0') goto LAB_142b3aeaa;
          }
          lVar11 = lVar11 + -0x10;
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
        iVar6 = *(int *)(lVar3 + 0x14c);
      }
      *(int *)(lVar3 + 0x14c) = iVar6 + -1;
      if (bVar12) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar3 + 0x138),0)
        ;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar8 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
        LOCK();
        plVar9 = plVar8 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142b3af60 FUN_142b3af60 body=1166 status=ok
// SIG undefined FUN_142b3af60(void)

void FUN_142b3af60(longlong *param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  void *_Src;
  undefined8 in_stack_fffffffffffffe98;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  longlong *local_148;
  ulonglong local_140;
  longlong *local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  int local_120;
  undefined4 uStack_11c;
  code *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 *local_d0;
  undefined4 local_c4;
  longlong **local_c0;
  longlong local_b8;
  code *local_a8;
  longlong ***ppplStack_a0;
  undefined8 local_98;
  longlong *local_90;
  code *local_88;
  longlong ***ppplStack_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [32];
  
  plVar8 = (longlong *)0x0;
  local_148 = (longlong *)0x0;
  local_140 = 0;
  if (param_2 != 0) goto LAB_142b3b3a8;
  puVar12 = (undefined4 *)*param_3;
  iVar9 = (int)(param_3[1] - (longlong)puVar12 >> 2);
  lVar10 = (longlong)iVar9;
  if (0 < iVar9) {
    local_a8 = FUN_142b34b70;
    ppplStack_a0 = &local_c0;
    do {
      local_c0 = &local_148;
      local_88 = FUN_142b34b70;
      ppplStack_80 = &local_c0;
      bifrost::sessions::_guard_xfg_dispatch_icall_nop(*puVar12,&local_88);
      puVar12 = puVar12 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  FTickAnimationPlayers::FTickAnimationPlayers(local_130);
  uVar11 = (uint)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  plVar6 = local_128;
  for (iVar9 = local_120; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    uVar11 = (uint)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
    plVar6 = plVar6 + 2;
  }
  TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
            (&local_128,local_148,local_140 & 0xffffffff,uStack_11c,(ulonglong)uVar11 << 0x20);
  plVar6 = (longlong *)FUN_142b49cd0(*param_1,local_78,&DAT_146b2ac50);
  plVar2 = (longlong *)plVar6[1];
  lVar10 = *plVar6;
  plVar6 = plVar2 + 1;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar6 = (int)*plVar6 + 1;
    UNLOCK();
  }
  local_138 = plVar6;
  local_b8 = lVar10;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (lVar10 == 0) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar2 + 1;
      iVar9 = (int)*plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
LAB_142b3b358:
      if (iVar9 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  else {
    local_118 = FUN_142b4d180;
    uStack_110 = 0;
    local_68 = 0x42b4d180;
    uStack_64 = 1;
    uStack_60 = 0;
    uStack_5c = uStack_10c;
    local_d8 = &PTR_FUN_14571eeb0;
    local_d0 = (undefined8 *)0x0;
    local_58 = 0;
    uStack_50 = 0;
    if (local_120 == 0) {
      local_c4 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_d0,local_120,0);
      puVar13 = local_d0;
      do {
        *puVar13 = 0;
        iVar9 = (int)local_128[1];
        local_118 = (code *)*local_128;
        *(int *)(puVar13 + 1) = iVar9;
        if (iVar9 == 0) {
          *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar13,iVar9,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar13,local_118,(longlong)iVar9 * 2);
        }
        puVar13 = puVar13 + 2;
        local_128 = local_128 + 2;
        local_120 = local_120 + -1;
        plVar6 = local_138;
      } while (local_120 != 0);
    }
    lVar10 = *param_1;
    local_158 = (void *)0x0;
    if (*(int *)(lVar10 + 0x28) < 2) {
      local_150 = *(int *)(lVar10 + 0x38);
      _Src = *(void **)(lVar10 + 0x30);
    }
    else {
      local_150 = *(int *)(lVar10 + 0x28);
      _Src = *(void **)(lVar10 + 0x20);
    }
    lVar10 = (longlong)local_150;
    if (local_150 == 0) {
      local_14c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,local_150,0);
      _guard_xfg_dispatch_icall_nop(local_158,_Src,lVar10 * 2);
    }
    uVar7 = FUN_142b30ff0(local_48,*param_1,&local_68);
    iVar9 = FUN_142ad1660(local_b8,&local_158,&local_d8,uVar7,&local_58);
    if (local_158 != (void *)0x0) {
      FMemory::Free();
    }
    if (iVar9 == 0) {
      lVar10 = *param_1;
      local_e8 = 0;
      local_e0 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_108 = 0;
      local_100 = 0;
      plVar3 = *(longlong **)(lVar10 + 0x268);
      uVar7 = *(undefined8 *)(lVar10 + 0x260);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        lVar10 = *param_1;
      }
      if (((*(int *)(lVar10 + 0xa0) != 0) && (*(longlong **)(lVar10 + 0x98) != (longlong *)0x0)) &&
         (cVar5 = (**(code **)(**(longlong **)(lVar10 + 0x98) + 0x18))(), cVar5 != '\0')) {
        if (*(int *)(lVar10 + 0xa0) != 0) {
          plVar8 = *(longlong **)(lVar10 + 0x98);
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_98 = uVar7;
        local_90 = plVar3;
        (**(code **)(*plVar8 + 0x40))(plVar8,0,&local_98,&local_108,&local_f8,&local_e8);
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar3 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      if (local_108 != 0) {
        FMemory::Free();
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
      if (local_e8 != 0) {
        FMemory::Free();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar9 = (int)*plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      goto LAB_142b3b358;
    }
  }
  FUN_142b0f230(local_130);
  plVar8 = (longlong *)(local_140 & 0xffffffff);
LAB_142b3b3a8:
  uVar11 = (uint)plVar8;
  plVar6 = local_148;
  while (uVar11 != 0) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
    uVar11 = (int)plVar8 - 1;
    plVar8 = (longlong *)(ulonglong)uVar11;
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free(local_148);
  }
  return;
}



// FUNCTION 142b3b3f0 FUN_142b3b3f0 body=272 status=ok
// SIG undefined FUN_142b3b3f0(void)

void FUN_142b3b3f0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong local_res10 [3];
  undefined1 *local_78;
  longlong *plStack_70;
  longlong local_68 [8];
  code *local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  code *local_10;
  
  lVar1 = *param_2;
  puVar2 = (undefined1 *)*param_3;
  uVar3 = param_3[1];
  local_78 = puVar2;
  plStack_70 = (longlong *)uVar3;
  if (*(longlong *)(lVar1 + 0x28) == 0) {
    FUN_142b61c00(lVar1);
    return;
  }
  plStack_70._0_1_ = (char)*(undefined4 *)(param_3 + 1);
  if ((char)plStack_70 != '\0') {
    *(undefined1 **)(*(longlong *)(lVar1 + 0x28) + 8) = puVar2;
    (**(code **)(**(longlong **)(*param_2 + 0x28) + 0x48))();
    local_res10[0] = *param_2;
    local_28 = FUN_142b2f980;
    local_20 = &LAB_142b2f960;
    local_18 = &LAB_142b2f960;
    local_10 = AK::MemoryMgr::StartProfileThreadUsage;
    local_68[0] = local_res10[0];
    bifrost::session::_guard_xfg_dispatch_icall_nop
              (*(undefined8 *)(local_res10[0] + 0x118),local_68);
    plStack_70 = local_res10;
    local_78 = &LAB_142b34c20;
    bifrost::account::_guard_xfg_dispatch_icall_nop(puVar2,&local_78);
    return;
  }
  *(undefined4 *)(lVar1 + 200) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0xd0) = 3;
  return;
}



// FUNCTION 142b3b500 FUN_142b3b500 body=785 status=ok
// SIG undefined FUN_142b3b500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b3b500(longlong *param_1,ulonglong *param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar12;
  undefined2 *puVar13;
  int iVar14;
  short *_Src;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  short *local_178;
  ulonglong local_170;
  undefined2 *local_168;
  ulonglong local_160;
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar11;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar12 = *param_2;
  if (param_2[1] <= uVar12) {
    return;
  }
  _Src = (short *)0x0;
  iVar14 = 0;
  local_58 = (short *)0x0;
  uVar7 = 0xffffffffffffffff;
  uVar10 = uVar7;
  if (uVar12 == 0) {
    local_50 = (short *)0x0;
    local_48 = 0;
    goto LAB_142b3b603;
  }
  do {
    uVar11 = uVar10;
    uVar10 = uVar11 + 1;
  } while (*(char *)(uVar12 + uVar10) != '\0');
  local_178 = (short *)((ulonglong)local_178 & 0xffffffff00000000);
  FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (&local_178,0x7fffffff,uVar12,uVar10 & 0xffffffff);
  local_48 = (int)local_178;
  uVar9 = (int)local_178 + 1;
  if (uVar9 < 0x81) {
    if (local_58 != (short *)0x0) {
      lVar4 = 0;
LAB_142b3b5b3:
      local_58 = (short *)FMemory::Realloc(local_58,lVar4,0);
    }
  }
  else if ((local_58 != (short *)0x0) || (uVar9 != 0)) {
    lVar4 = (longlong)(int)uVar9 * 2;
    goto LAB_142b3b5b3;
  }
  local_178 = local_158;
  if (local_58 != (short *)0x0) {
    local_178 = local_58;
  }
  local_50 = local_178;
  FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_178,uVar9,uVar12,(int)uVar11 + 2);
LAB_142b3b603:
  psVar1 = local_50;
  local_160 = 0;
  local_168 = (undefined2 *)0x0;
  if ((local_50 != (short *)0x0) && (uVar12 = uVar7, *local_50 != 0)) {
    do {
      uVar12 = uVar12 + 1;
    } while (local_50[uVar12] != 0);
    uVar9 = (int)uVar12 + 1;
    local_160 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
    }
    FGenericPlatformString::Memcpy(local_168,psVar1,(longlong)(int)uVar9 * 2);
  }
  if (local_58 != (short *)0x0) {
    FMemory::Free();
  }
  local_178 = (short *)0x0;
  local_170 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  psVar1 = local_178;
  local_188 = CONCAT22(local_188._2_2_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_178,5,&DAT_1457c564c);
  puVar13 = &DAT_143f3eda8;
  local_188 = 0xffffffff;
  psVar5 = &DAT_143f3eda8;
  if ((uint)local_170 != 0) {
    psVar5 = psVar1;
  }
  iVar2 = FUN_141592950(&local_168,psVar5,0,1);
  if (psVar1 != (short *)0x0) {
    FMemory::Free(psVar1);
  }
  iVar3 = iVar14;
  if ((int)local_160 != 0) {
    puVar13 = local_168;
    iVar3 = (int)local_160 + -1;
  }
  iVar2 = iVar3 - iVar2;
  if ((-1 < iVar2) && (iVar14 = iVar3, iVar2 < iVar3)) {
    iVar14 = iVar2;
  }
  uVar9 = 0;
  local_178 = (short *)0x0;
  local_170 = local_170 & 0xffffffff;
  psVar1 = puVar13 + ((longlong)iVar3 - (longlong)iVar14);
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    do {
      uVar7 = uVar7 + 1;
    } while (psVar1[uVar7] != 0);
    uVar6 = (int)uVar7 + 1;
    local_170 = (ulonglong)uVar6;
    uVar9 = uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
      uVar9 = (uint)local_170;
    }
    _Src = local_178;
    FGenericPlatformString::Memcpy(local_178,psVar1,(longlong)(int)uVar6 * 2);
  }
  param_1 = (longlong *)*param_1;
  iVar14 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar14 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar14);
  }
  puVar8 = (undefined8 *)((longlong)iVar14 * 0x10 + *param_1);
  *puVar8 = 0;
  *(uint *)(puVar8 + 1) = uVar9;
  if (uVar9 == 0) {
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,uVar9,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src,(longlong)(int)uVar9 * 2);
  }
  if (_Src != (short *)0x0) {
    FMemory::Free(_Src);
  }
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b3b820 FUN_142b3b820 body=133 status=ok
// SIG undefined FUN_142b3b820(void)

void FUN_142b3b820(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(short *)(param_4 + 0x18) == 0x28) {
    cVar2 = FUN_142190070(param_2);
    if (cVar2 == '\0') {
      lVar3 = FUN_1407ba9a0(param_4);
      if (lVar3 != 0) {
        uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x18);
        FUN_142194380(param_2,0x13,0,0,0);
        *param_2 = uVar1;
        return;
      }
      FUN_14217f5b0(param_2,L"NONE");
    }
  }
  return;
}



// FUNCTION 142b3b8b0 FUN_142b3b8b0 body=189 status=ok
// SIG undefined FUN_142b3b8b0(void)

void FUN_142b3b8b0(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  void *_Src;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  if ((*(longlong *)(*param_2 + 0x28) != 0) &&
     (*(char *)(*(longlong *)(*param_2 + 0x28) + 0x18) != '\0')) {
    lVar2 = FUN_142b45e90();
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    lVar2 = *(longlong *)(*param_2 + 0x28);
    local_18 = (void *)0x0;
    if (*(int *)(lVar2 + 0x28) < 2) {
      local_10 = *(int *)(lVar2 + 0x38);
      _Src = *(void **)(lVar2 + 0x30);
    }
    else {
      local_10 = *(int *)(lVar2 + 0x28);
      _Src = *(void **)(lVar2 + 0x20);
    }
    lVar2 = (longlong)local_10;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar2 * 2);
    }
    FUN_142b69530(uVar1,&local_18);
    if (local_18 != (void *)0x0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 142b3b970 FUN_142b3b970 body=1244 status=ok
// SIG undefined FUN_142b3b970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b3b970(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_e0;
  longlong local_d8 [5];
  undefined8 local_b0;
  longlong *local_a8;
  longlong local_a0 [2];
  undefined1 local_90 [24];
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  iVar6 = 0;
  local_e0 = 6;
  local_e8 = (wchar_t *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"unset",0xc);
  uVar9 = local_e0._4_4_;
  if (param_2 == 0) {
    if (local_e8 != L"Unknown") {
      local_e0 = (ulonglong)local_e0._4_4_ << 0x20;
      if (uVar9 != 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8,8);
        iVar6 = (int)local_e0;
        uVar9 = local_e0._4_4_;
      }
      local_e0 = CONCAT44(local_e0._4_4_,iVar6 + 8);
      if ((int)uVar9 < iVar6 + 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8);
      }
      builtin_wcsncpy(local_e8,L"Unknown",8);
    }
  }
  else if (param_2 == 1) {
    if (local_e8 != L"Strict") {
      local_e0 = (ulonglong)local_e0._4_4_ << 0x20;
      if (uVar9 != 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8,7);
        iVar6 = (int)local_e0;
        uVar9 = local_e0._4_4_;
      }
      local_e0 = CONCAT44(local_e0._4_4_,iVar6 + 7);
      if ((int)uVar9 < iVar6 + 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8);
      }
      builtin_wcsncpy(local_e8,L"Strict",7);
    }
  }
  else if (param_2 == 2) {
    if (local_e8 != L"Moderate") {
      local_e0 = (ulonglong)local_e0._4_4_ << 0x20;
      if (uVar9 != 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8,9);
        iVar6 = (int)local_e0;
        uVar9 = local_e0._4_4_;
      }
      local_e0 = CONCAT44(local_e0._4_4_,iVar6 + 9);
      if ((int)uVar9 < iVar6 + 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8);
      }
      builtin_wcsncpy(local_e8,L"Moderate",9);
    }
  }
  else if ((param_2 == 3) && (local_e8 != L"Open")) {
    local_e0 = (ulonglong)local_e0._4_4_ << 0x20;
    if (uVar9 != 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8,5);
      iVar6 = (int)local_e0;
      uVar9 = local_e0._4_4_;
    }
    local_e0 = CONCAT44(local_e0._4_4_,iVar6 + 5);
    if ((int)uVar9 < iVar6 + 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8);
    }
    builtin_wcsncpy(local_e8,L"Open",5);
  }
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar11 = iVar6 == 0;
    if (bVar11) {
      *(int *)(plVar4 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar11) {
      LOCK();
      bVar11 = iVar6 == (int)plVar4[1];
      if (bVar11) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar11) {
        if (plVar4 != (longlong *)0x0) {
          lVar5 = *param_1;
          if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x260) != 0)) && (DAT_1466861d8 != '\0')) {
            DAT_1466861d8 = '\0';
            local_48 = (longlong *)0x0;
            local_38 = 0;
            puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_68);
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = &PTR_FUN_143f77b70;
              puVar7[1] = &local_e8;
            }
            local_d8[2] = 0;
            local_78[0] = FUN_142b40f00;
            local_d8[3] = 0x10;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 2,0);
            FGenericPlatformString::Memcpy(local_d8[2],L"detect_nat_type",0x20);
            local_d8[0] = 0;
            local_d8[1] = 10;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
            FGenericPlatformString::Memcpy(local_d8[0],L"crossplay",0x14);
            local_b0 = *(undefined8 *)(lVar5 + 0x260);
            plVar10 = *(longlong **)(lVar5 + 0x268);
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            local_a8 = plVar10;
            uVar8 = FUN_14218ed00(local_90,&local_b0);
            FUN_141682af0(uVar8,local_a0,0);
            plVar3 = local_a8;
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_a8 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            FUN_142b62d10(local_a0,local_d8,local_d8 + 2,local_78);
            if (local_a0[0] != 0) {
              FMemory::Free();
            }
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar10 + 1;
              lVar5 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                }
              }
            }
            if (local_d8[0] != 0) {
              FMemory::Free();
            }
            if (local_d8[2] != 0) {
              FMemory::Free();
            }
            if (local_38 != 0) {
              plVar10 = local_68;
              if (local_48 != (longlong *)0x0) {
                plVar10 = local_48;
              }
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x10))(plVar10,0);
              }
            }
            if (local_48 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
          LOCK();
          plVar10 = plVar4 + 1;
          lVar5 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(plVar4 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  if (local_e8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b3be50 FUN_142b3be50 body=204 status=ok
// SIG undefined FUN_142b3be50(void)

void FUN_142b3be50(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong local_res20;
  
  if (*(short *)(param_4 + 0x18) != 0x28) {
    return;
  }
  cVar1 = FUN_142190070(param_2);
  if (cVar1 == '\0') {
    plVar2 = (longlong *)FUN_1407ba9a0();
    if ((plVar2 == (longlong *)0x0) ||
       (local_res20 = (**(code **)(*plVar2 + 0x148))(), local_res20 == 0)) {
      if (DAT_146b2b6a0 == '\0') {
        FUN_142b34e70();
        DAT_146b2b6a0 = '\x01';
      }
      local_res20 = 0;
      if (0 < DAT_146b2b658) {
        puVar3 = DAT_146b2b650;
        if (DAT_146b2b650 == (undefined *)0x0) {
          puVar3 = &DAT_146b2afb0;
        }
        local_res20 = FWeakObjectPtr::Get(puVar3);
      }
      if (local_res20 == 0) {
        return;
      }
    }
    FUN_142194380(param_2,0x28,0,0,0);
    *param_2 = local_res20;
    return;
  }
  return;
}



// FUNCTION 142b3bf20 FUN_142b3bf20 body=520 status=ok
// SIG undefined FUN_142b3bf20(void)

void FUN_142b3bf20(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong local_58 [3];
  short local_40;
  undefined **local_38 [2];
  longlong *local_28;
  longlong local_20;
  
  if ((short)param_4[3] != 0x28) {
    return;
  }
  lVar7 = *param_4;
  if (lVar7 != 0) {
    lVar5 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar6 = FUN_142547b50(lVar7,local_38);
      FUN_142b42590(param_2,uVar6);
      local_38[0] = &PTR_FUN_143f740c8;
      if (local_20 != 0) {
        FMemory::Free();
      }
      local_38[0] = &PTR_FUN_143f73d18;
      if (local_28 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar1 = local_28 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 != 1) {
        return;
      }
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return;
      }
      (**(code **)(*local_28 + 8))(local_28,1);
      return;
    }
  }
  if (((short)param_4[3] == 0x28) && (lVar7 = *param_4, lVar7 != 0)) {
    lVar5 = AFGRailroadVehicle::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142b3c107;
  }
  FUN_1421923f0(local_58,DAT_146b2af30,param_4);
  if ((local_40 == 0x28) && (local_58[0] != 0)) {
    lVar7 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(local_58[0] + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_58[0] + 0x10) + 0x88) +
         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    lVar7 = local_58[0];
    if (!bVar4) goto LAB_142b3c0e3;
  }
  else {
LAB_142b3c0e3:
    lVar7 = 0;
  }
  FUN_14217f430(local_58);
  if (lVar7 == 0) {
    return;
  }
  lVar7 = *(longlong *)(lVar7 + 0x460);
  if (lVar7 == 0) {
    return;
  }
LAB_142b3c107:
  FUN_142b42590(param_2,lVar7 + 0x4b0);
  return;
}



// FUNCTION 142b3c130 FUN_142b3c130 body=644 status=ok
// SIG undefined FUN_142b3c130(void)

void FUN_142b3c130(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 **local_res8;
  undefined8 **local_res18 [2];
  undefined8 *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *local_40;
  
  if (((*(longlong *)(*param_1 + 0x38) != 0) && (lVar7 = *(longlong *)(*param_1 + 0x28), lVar7 != 0)
      ) && (*(longlong *)(lVar7 + 8) == *param_2)) {
    lVar7 = FUN_142b45e90();
    lVar7 = *(longlong *)(lVar7 + 0x18);
    local_68 = *(undefined8 **)(*param_1 + 0x38);
    local_60 = *(longlong **)(*param_1 + 0x40);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_res8 = &local_68;
    FUN_140d60b10(lVar7 + 0x2b8,&local_res8);
    plVar9 = *(longlong **)(lVar7 + 0x2a8);
    plVar10 = plVar9 + (longlong)*(int *)(lVar7 + 0x2b0) * 2;
    for (; plVar9 != plVar10; plVar9 = plVar9 + 2) {
      if ((*(longlong *)(*plVar9 + 0x120) != 0) && (cVar6 = (**(code **)*local_68)(), cVar6 != '\0')
         ) {
        lVar4 = *plVar9;
        puVar8 = (undefined8 *)(lVar4 + 0x120);
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        if (puVar8 != &local_58) {
          *puVar8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(lVar4 + 0x128,&plStack_50);
          plVar5 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_50 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plStack_50)(plStack_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plStack_50 + 8))(plStack_50,1);
              }
            }
          }
        }
      }
    }
    plVar9 = *(longlong **)(lVar7 + 600);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,&local_68);
    }
    plVar9 = *(longlong **)(lVar7 + 0x218);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,&local_68);
    }
    plVar9 = *(longlong **)(lVar7 + 0x228);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,&local_68);
    }
    if (*(longlong *)(lVar7 + 0x238) != 0) {
      local_res18[0] = &local_68;
      FUN_142b34570(*(longlong *)(lVar7 + 0x238) + 0x38,local_res18);
    }
    plVar9 = *(longlong **)(lVar7 + 0x268);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,&local_68);
    }
    plVar9 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_60 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    local_48 = *(undefined8 *)(*param_1 + 0x38);
    local_40 = *(longlong **)(*param_1 + 0x40);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    FUN_142b41f30(lVar7,&local_48);
    plVar9 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_40 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142b3c3c0 FUN_142b3c3c0 body=173 status=ok
// SIG undefined FUN_142b3c3c0(void)

void FUN_142b3c3c0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  
  local_28 = *param_1;
  local_20 = CONCAT71(local_20._1_7_,(char)param_1[1]);
  local_18 = param_3;
  FUN_142b3aa10(&local_28,param_1[2]);
  FUN_142b3aa10(&local_28,param_1[3]);
  local_20 = 0x10;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"Report_Sequence",0x20);
  DAT_146b2add8 = DAT_146b2add8 + 1;
  (**(code **)(*param_3 + 0x18))(param_3,&local_28);
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b3c470 FUN_142b3c470 body=671 status=ok
// SIG undefined FUN_142b3c470(void)

void FUN_142b3c470(undefined8 param_1,ulonglong *param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong local_res20;
  longlong local_58 [2];
  longlong local_48 [3];
  short local_30;
  undefined1 local_28 [24];
  short local_10;
  
  if (*(short *)(param_4 + 0x18) == 0x28) {
    cVar2 = FUN_142190070(param_2);
    if (cVar2 == '\0') {
      lVar3 = FUN_1407ba9a0(param_4);
      if (lVar3 == 0) {
        FUN_14217f5b0(param_2,L"NONE");
      }
      else {
        lVar4 = FUN_142a2f930();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          FUN_14217e740(local_48);
          FUN_142194380(local_48,0x28,0,0,0);
          local_48[0] = lVar3;
          FUN_1421923f0(local_28,DAT_146b2af30,local_48);
          FUN_14217f430(local_48);
          if (local_10 == 0x28) {
            lVar4 = FUN_1429e18b0();
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
              FUN_14217f5b0(param_2,L"player");
              FUN_14217f430(local_28);
              return;
            }
            FUN_1421923f0(local_48,DAT_146b2af28,local_28);
            if (local_30 == 0x28) {
              lVar4 = FUN_1429e18b0();
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
                FUN_14217f5b0(param_2,L"player");
                FUN_14217f430(local_48);
                FUN_14217f430(local_28);
                return;
              }
            }
            FUN_14217f430(local_48);
          }
          local_res20 = (ulonglong)*(uint *)(lVar3 + 0x18);
          FUN_142194380(param_2,0x13,0,0,0);
          *param_2 = local_res20;
          FUN_14217f430(local_28);
          return;
        }
        uVar5 = FUN_1428cc750(lVar3,local_48);
        uVar5 = FUN_1428d4fe0(local_58,uVar5);
        FUN_140643170(param_2,uVar5);
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (local_48[0] != 0) {
          FMemory::Free();
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142b3c710 FUN_142b3c710 body=689 status=ok
// SIG undefined FUN_142b3c710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b3c710(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  short *psVar2;
  undefined8 *puVar3;
  short **ppsVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  short *psVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar12;
  ulonglong uVar14;
  short *psVar15;
  undefined2 *puVar16;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  short *local_168;
  int local_160;
  int local_15c;
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  short *psVar11;
  ulonglong uVar13;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  uVar14 = *param_2;
  if (param_2[1] <= uVar14) {
    return;
  }
  psVar11 = (short *)0x0;
  iVar10 = 0;
  local_58 = (short *)0x0;
  uVar9 = 0xffffffffffffffff;
  uVar12 = uVar9;
  if (uVar14 == 0) {
    local_50 = (short *)0x0;
    local_48 = 0;
    goto LAB_142b3c80e;
  }
  do {
    uVar13 = uVar12;
    uVar12 = uVar13 + 1;
  } while (*(char *)(uVar14 + uVar12) != '\0');
  local_168 = (short *)((ulonglong)local_168 & 0xffffffff00000000);
  FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (&local_168,0x7fffffff,uVar14,uVar12 & 0xffffffff);
  local_48 = (int)local_168;
  uVar1 = (int)local_168 + 1;
  if (uVar1 < 0x81) {
    if (local_58 != (short *)0x0) {
      lVar7 = 0;
LAB_142b3c7c3:
      local_58 = (short *)FMemory::Realloc(local_58,lVar7,0);
    }
  }
  else if ((local_58 != (short *)0x0) || (uVar1 != 0)) {
    lVar7 = (longlong)(int)uVar1 * 2;
    goto LAB_142b3c7c3;
  }
  local_168 = local_158;
  if (local_58 != (short *)0x0) {
    local_168 = local_58;
  }
  local_50 = local_168;
  FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_168,uVar1,uVar14,(int)uVar13 + 2);
LAB_142b3c80e:
  psVar2 = local_50;
  puVar3 = (undefined8 *)*param_1;
  if ((short *)*puVar3 != local_50) {
    psVar15 = psVar11;
    if ((local_50 != (short *)0x0) && (uVar14 = uVar9, *local_50 != 0)) {
      do {
        uVar14 = uVar14 + 1;
      } while (local_50[uVar14] != 0);
      psVar15 = (short *)(ulonglong)((int)uVar14 + 1);
    }
    *(undefined4 *)(puVar3 + 1) = 0;
    iVar6 = (int)psVar15;
    psVar8 = psVar11;
    if (*(int *)((longlong)puVar3 + 0xc) != iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar3,psVar15);
      psVar8 = (short *)(ulonglong)*(uint *)(puVar3 + 1);
    }
    iVar5 = (int)psVar8 + iVar6;
    *(int *)(puVar3 + 1) = iVar5;
    if (*(int *)((longlong)puVar3 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar3);
    }
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,psVar2,(longlong)iVar6 * 2);
    }
  }
  if (local_58 != (short *)0x0) {
    FMemory::Free();
  }
  local_178 = 0xffffffff;
  iVar6 = FUN_141592950(*param_1,L"ssid",0,1);
  if (iVar6 != -1) {
    iVar5 = *(int *)((undefined8 *)*param_1 + 1);
    if (iVar5 == 0) {
      puVar16 = &DAT_143f3eda8;
      iVar5 = iVar10;
    }
    else {
      puVar16 = *(undefined2 **)*param_1;
      iVar5 = iVar5 + -1;
    }
    iVar6 = iVar5 - iVar6;
    if ((-1 < iVar6) && (iVar10 = iVar5, iVar6 < iVar5)) {
      iVar10 = iVar6;
    }
    iVar6 = 0;
    local_168 = (short *)0x0;
    local_15c = 0;
    psVar2 = puVar16 + ((longlong)iVar5 - (longlong)iVar10);
    iVar10 = iVar6;
    if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
      do {
        uVar9 = uVar9 + 1;
      } while (psVar2[uVar9] != 0);
      iVar5 = (int)uVar9 + 1;
      local_160 = iVar5;
      if (0 < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
      }
      iVar10 = local_15c;
      iVar6 = local_160;
      psVar11 = local_168;
      FGenericPlatformString::Memcpy(local_168,psVar2,(longlong)iVar5 * 2);
    }
    ppsVar4 = (short **)*param_1;
    if (ppsVar4 == &local_168) {
      if (psVar11 != (short *)0x0) {
        FMemory::Free(psVar11);
      }
    }
    else {
      if (*ppsVar4 != (short *)0x0) {
        FMemory::Free();
      }
      *ppsVar4 = psVar11;
      *(int *)(ppsVar4 + 1) = iVar6;
      *(int *)((longlong)ppsVar4 + 0xc) = iVar10;
    }
  }
  return;
}



// FUNCTION 142b3c9d0 FUN_142b3c9d0 body=608 status=ok
// SIG undefined FUN_142b3c9d0(void)

void FUN_142b3c9d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  
  lVar5 = *param_2;
  lVar1 = lVar5 + (longlong)(int)param_2[1] * 0x18;
  do {
    if (lVar5 == lVar1) {
      return;
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    if (iVar2 == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(lVar5 + 8);
    }
    lVar3 = -1;
    do {
      if (puVar4[lVar3 + 1] != L"LOGIN_FAIL"[lVar3 + 1]) break;
      lVar3 = lVar3 + 2;
      if (lVar3 == 0xb) {
        *(undefined4 *)(*param_1 + 0x460) = 5;
        return;
      }
    } while (puVar4[lVar3] == L"LOGIN_FAIL"[lVar3]);
    if (iVar2 == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(lVar5 + 8);
    }
    lVar3 = 0;
    while ((puVar4[lVar3] == L"PLATFORM_TAKEN_BY_OTHER"[lVar3] &&
           (puVar4[lVar3 + 1] == L"PLATFORM_TAKEN_BY_OTHER"[lVar3 + 1]))) {
      lVar3 = lVar3 + 2;
      if (lVar3 == 0x18) {
        *(undefined4 *)(*param_1 + 0x460) = 2;
        return;
      }
    }
    if (iVar2 == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(lVar5 + 8);
    }
    lVar3 = -1;
    do {
      if (puVar4[lVar3 + 1] != L"PLATFORM_TAKEN_BY_SELF"[lVar3 + 1]) break;
      lVar3 = lVar3 + 2;
      if (lVar3 == 0x17) {
        *(undefined4 *)(*param_1 + 0x460) = 3;
        return;
      }
    } while (puVar4[lVar3] == L"PLATFORM_TAKEN_BY_SELF"[lVar3]);
    if (iVar2 == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(lVar5 + 8);
    }
    lVar3 = -1;
    do {
      if (puVar4[lVar3 + 1] != L"OTHER_PLATFORM_TAKEN_BY_SELF"[lVar3 + 1]) break;
      lVar3 = lVar3 + 2;
      if (lVar3 == 0x1d) {
        *(undefined4 *)(*param_1 + 0x460) = 4;
        return;
      }
    } while (puVar4[lVar3] == L"OTHER_PLATFORM_TAKEN_BY_SELF"[lVar3]);
    if (iVar2 == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(lVar5 + 8);
    }
    lVar3 = 0;
    while ((puVar4[lVar3] == L"SESSION_TIMEOUT"[lVar3] &&
           (puVar4[lVar3 + 1] == L"SESSION_TIMEOUT"[lVar3 + 1]))) {
      lVar3 = lVar3 + 2;
      if (lVar3 == 0x10) {
        *(undefined4 *)(*param_1 + 0x460) = 8;
        return;
      }
    }
    if (iVar2 == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(lVar5 + 8);
    }
    lVar3 = 0;
    while ((puVar4[lVar3] == L"DISPLAY_NAME_CONFLICT"[lVar3] &&
           (puVar4[lVar3 + 1] == L"DISPLAY_NAME_CONFLICT"[lVar3 + 1]))) {
      lVar3 = lVar3 + 2;
      if (lVar3 == 0x16) {
        *(undefined4 *)(*param_1 + 0x460) = 9;
        return;
      }
    }
    lVar5 = lVar5 + 0x18;
  } while( true );
}



// FUNCTION 142b3cc30 FUN_142b3cc30 body=188 status=ok
// SIG undefined FUN_142b3cc30(void)

void FUN_142b3cc30(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  short *psVar3;
  longlong local_18;
  ulonglong local_10;
  
  if (*(int *)(param_1 + 1) == 0) {
    psVar3 = &DAT_143f3eda8;
  }
  else {
    psVar3 = (short *)*param_1;
  }
  local_18 = 0;
  local_10 = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (psVar3[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,psVar3,(longlong)(int)uVar1 * 2);
  }
  (**(code **)(*param_3 + 8))(param_3,&local_18,param_1 + 2);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b3ccf0 FUN_142b3ccf0 body=638 status=ok
// SIG undefined FUN_142b3ccf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b3ccf0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  undefined8 local_100;
  longlong *local_f8;
  undefined1 local_f0 [8];
  undefined1 local_e8 [64];
  code *local_a8;
  code *pcStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88 [8];
  code *local_48;
  code *pcStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar3 = *param_1;
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    *(undefined4 *)(lVar3 + 0xd0) = 3;
    *(undefined4 *)(lVar3 + 200) = 0xffffffff;
  }
  else {
    *(undefined4 *)(*(longlong *)(lVar3 + 0x28) + 0x10) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 0x14) = *(undefined4 *)(param_2 + 8);
    if (DAT_146b2ade0 == 0) {
      puVar10 = (undefined8 *)FName::FName(local_f0,"GbxSpark",1);
      uVar4 = *puVar10;
      uVar11 = FUN_14168dc80();
      FUN_141690010(uVar11,uVar4);
    }
    lVar3 = *(longlong *)(DAT_146b2ade0 + 0x18);
    local_100 = *(undefined8 *)(*param_1 + 0x28);
    local_f8 = *(longlong **)(*param_1 + 0x30);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    bVar8 = false;
    *(int *)(lVar3 + 0x9c) = *(int *)(lVar3 + 0x9c) + 1;
    iVar12 = *(int *)(lVar3 + 0x9c);
    iVar9 = *(int *)(lVar3 + 0x90) + -1;
    lVar14 = (longlong)iVar9;
    if (-1 < iVar9) {
      lVar13 = lVar14 << 4;
      bVar8 = false;
      do {
        lVar5 = *(longlong *)(lVar3 + 0x88);
        if ((*(int *)(lVar13 + 8 + lVar5) == 0) ||
           (plVar6 = *(longlong **)(lVar13 + lVar5), plVar6 == (longlong *)0x0)) {
LAB_142b3ce03:
          bVar8 = true;
        }
        else {
          cVar7 = (**(code **)(*plVar6 + 0x40))(plVar6,&local_100);
          if (cVar7 == '\0') goto LAB_142b3ce03;
        }
        lVar13 = lVar13 + -0x10;
        lVar14 = lVar14 + -1;
      } while (-1 < lVar14);
      iVar12 = *(int *)(lVar3 + 0x9c);
    }
    *(int *)(lVar3 + 0x9c) = iVar12 + -1;
    if (bVar8) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar3 + 0x88),0);
    }
    plVar6 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f8 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    local_88[0] = *param_1;
    local_48 = FUN_142b2f950;
    pcStack_40 = (code *)&LAB_142b2f960;
    local_38 = &LAB_142b2f960;
    uStack_30 = AK::MemoryMgr::StartProfileThreadUsage;
    bVar8 = bifrost::messaging::_guard_xfg_dispatch_icall_nop(*(User **)(local_88[0] + 0x118));
    if (bVar8) {
      local_108[0] = 1;
      (*local_48)(local_88,local_108);
    }
    else {
      local_a8 = local_48;
      pcStack_a0 = pcStack_40;
      local_98 = (undefined4)local_38;
      uStack_94 = local_38._4_4_;
      uStack_90 = (undefined4)uStack_30;
      uStack_8c = uStack_30._4_4_;
      if (pcStack_40 != (code *)0x0) {
        (*pcStack_40)(local_e8,local_88);
      }
      bifrost::messaging::_guard_xfg_dispatch_icall_nop(*(undefined8 *)(*param_1 + 0x118),local_e8);
    }
    if (uStack_30 != (code *)0x0) {
      (*uStack_30)(local_88);
    }
  }
  return;
}



// FUNCTION 142b3cf70 FUN_142b3cf70 body=924 status=ok
// SIG undefined FUN_142b3cf70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b3cf70(longlong *param_1,SessionId *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  short *psVar7;
  char cVar8;
  int iVar9;
  AccountId AVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_1e8 [32];
  int local_1c8 [2];
  longlong local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  short *local_198;
  longlong *local_190;
  longlong local_188;
  longlong *local_180;
  code *local_178;
  longlong **pplStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar15;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  uVar3 = *(undefined8 *)(param_2 + 2);
  local_58 = (short *)0x0;
  uVar16 = 0xffffffffffffffff;
  uVar14 = uVar16;
  if (uVar3 == 0) {
    local_50 = (short *)0x0;
    local_48 = 0;
  }
  else {
    do {
      uVar15 = uVar14;
      uVar14 = uVar15 + 1;
    } while (*(char *)(uVar3 + uVar14) != '\0');
    local_1c8[0] = 0;
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (local_1c8,0x7fffffff,uVar3,uVar14 & 0xffffffff);
    local_48 = local_1c8[0];
    uVar13 = local_1c8[0] + 1;
    if (uVar13 < 0x81) {
      if (local_58 != (short *)0x0) {
        lVar12 = 0;
LAB_142b3d02c:
        local_58 = (short *)FMemory::Realloc(local_58,lVar12,0);
      }
    }
    else if ((local_58 != (short *)0x0) || (uVar13 != 0)) {
      lVar12 = (longlong)(int)uVar13 * 2;
      goto LAB_142b3d02c;
    }
    local_198 = local_158;
    if (local_58 != (short *)0x0) {
      local_198 = local_58;
    }
    local_50 = local_198;
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_198,uVar13,uVar3,(int)uVar15 + 2);
  }
  psVar7 = local_50;
  local_1c0 = 0;
  local_1b8 = 0;
  if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
    do {
      uVar16 = uVar16 + 1;
    } while (local_50[uVar16] != 0);
    uVar13 = (int)uVar16 + 1;
    local_1b8 = (ulonglong)uVar13;
    if (0 < (int)uVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0,0);
    }
    FGenericPlatformString::Memcpy(local_1c0,psVar7,(longlong)(int)uVar13 * 2);
  }
  if (local_58 != (short *)0x0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar9 = (int)plVar4[1];
    bVar19 = iVar9 == 0;
    if (bVar19) {
      *(int *)(plVar4 + 1) = 0;
      iVar9 = 0;
    }
    UNLOCK();
    while (!bVar19) {
      LOCK();
      bVar19 = iVar9 == (int)plVar4[1];
      if (bVar19) {
        *(int *)(plVar4 + 1) = iVar9 + 1;
      }
      UNLOCK();
      if (bVar19) {
        if (plVar4 != (longlong *)0x0) {
          lVar12 = *param_1;
          if (lVar12 == 0) goto LAB_142b3d280;
          local_1b0 = 0;
          local_1a8 = 0;
          AVar10 = bifrost::account::_guard_xfg_dispatch_icall_nop(*param_2);
          if (AVar10 == 0) goto LAB_142b3d271;
          local_190 = &local_1b0;
          local_178 = FUN_142b34b30;
          pplStack_170 = &local_190;
          local_168 = 0x42b34b30;
          uStack_164 = 1;
          uStack_160 = pplStack_170;
          bifrost::users::_guard_xfg_dispatch_icall_nop(AVar10,&local_168);
          if (((int)local_1a8 < 2) || (lVar17 = *(longlong *)(lVar12 + 0x260), lVar17 == 0))
          goto LAB_142b3d271;
          local_180 = *(longlong **)(lVar12 + 0x268);
          if (local_180 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_180 + 1) = (int)local_180[1] + 1;
            UNLOCK();
          }
          local_188 = lVar17;
          lVar12 = FUN_142b45e90();
          bVar19 = false;
          lVar12 = *(longlong *)(lVar12 + 0x18);
          *(int *)(lVar12 + 0xfc) = *(int *)(lVar12 + 0xfc) + 1;
          iVar9 = *(int *)(lVar12 + 0xfc);
          iVar11 = *(int *)(lVar12 + 0xf0) + -1;
          lVar17 = (longlong)iVar11;
          if (iVar11 < 0) goto LAB_142b3d221;
          lVar18 = lVar17 << 4;
          bVar19 = false;
          goto LAB_142b3d1e4;
        }
        break;
      }
      LOCK();
      iVar9 = (int)plVar4[1];
      bVar19 = iVar9 == 0;
      if (bVar19) {
        *(int *)(plVar4 + 1) = 0;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
LAB_142b3d2ad:
  if (local_1c0 != 0) {
    FMemory::Free();
  }
  return;
LAB_142b3d1e4:
  do {
    lVar5 = *(longlong *)(lVar12 + 0xe8);
    if ((*(int *)(lVar18 + 8 + lVar5) == 0) ||
       (plVar6 = *(longlong **)(lVar18 + lVar5), plVar6 == (longlong *)0x0)) {
LAB_142b3d210:
      bVar19 = true;
    }
    else {
      cVar8 = (**(code **)(*plVar6 + 0x40))(plVar6,&local_188,&local_1b0,&local_1c0);
      if (cVar8 == '\0') goto LAB_142b3d210;
    }
    lVar18 = lVar18 + -0x10;
    lVar17 = lVar17 + -1;
  } while (-1 < lVar17);
  iVar9 = *(int *)(lVar12 + 0xfc);
LAB_142b3d221:
  *(int *)(lVar12 + 0xfc) = iVar9 + -1;
  if (bVar19) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar12 + 0xe8),0);
  }
  plVar6 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_180 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
LAB_142b3d271:
  if (local_1b0 != 0) {
    FMemory::Free();
  }
LAB_142b3d280:
  LOCK();
  plVar6 = plVar4 + 1;
  lVar12 = *plVar6;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)lVar12 == 1) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar9 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  goto LAB_142b3d2ad;
}



// FUNCTION 142b3d310 FUN_142b3d310 body=331 status=ok
// SIG undefined FUN_142b3d310(void)

longlong * FUN_142b3d310(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_58 [4];
  undefined **local_38 [2];
  longlong *local_28;
  longlong local_20;
  
  lVar6 = FUN_142b32c20(param_3,local_38);
  if (*(longlong **)(lVar6 + 8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(lVar6 + 8) + 0x20))();
    if (cVar5 != '\0') {
      plVar7 = (longlong *)
               (**(code **)(**(longlong **)(lVar6 + 8) + 0x28))
                         (*(longlong **)(lVar6 + 8),local_58 + 2);
      bVar4 = true;
      bVar3 = false;
      goto LAB_142b3d3a0;
    }
  }
  local_58[0] = 0;
  local_58[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"INVALID",0x10);
  plVar7 = local_58;
  bVar4 = false;
  bVar3 = true;
LAB_142b3d3a0:
  *param_2 = 0;
  *param_2 = *plVar7;
  *plVar7 = 0;
  *(int *)(param_2 + 1) = (int)plVar7[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar7 + 0xc);
  plVar7[1] = 0;
  if (bVar3) {
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar4) && (local_58[2] != 0)) {
    FMemory::Free();
  }
  local_38[0] = &PTR_FUN_143f740c8;
  if (local_20 != 0) {
    FMemory::Free();
  }
  local_38[0] = &PTR_FUN_143f73d18;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_28 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142b3d460 FUN_142b3d460 body=534 status=ok
// SIG undefined FUN_142b3d460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b3d460(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  longlong lVar1;
  short *psVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined2 *puVar8;
  undefined1 auStack_198 [32];
  undefined2 *local_178;
  undefined2 *local_168;
  ulonglong local_160;
  short *local_158 [2];
  short local_148 [128];
  short *local_48;
  short *local_40;
  int local_38;
  ulonglong local_28;
  ulonglong uVar7;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar1 = *param_2;
  local_48 = (short *)0x0;
  uVar5 = 0xffffffffffffffff;
  uVar6 = uVar5;
  if (lVar1 == 0) {
    local_40 = (short *)0x0;
    local_38 = 0;
    goto LAB_142b3d55a;
  }
  do {
    uVar7 = uVar6;
    uVar6 = uVar7 + 1;
  } while (*(char *)(lVar1 + uVar6) != '\0');
  local_158[0] = (short *)((ulonglong)local_158[0] & 0xffffffff00000000);
  FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (local_158,0x7fffffff,lVar1,uVar6 & 0xffffffff);
  local_38 = (int)local_158[0];
  uVar4 = (int)local_158[0] + 1;
  if (uVar4 < 0x81) {
    if (local_48 != (short *)0x0) {
      lVar3 = 0;
LAB_142b3d503:
      local_48 = (short *)FMemory::Realloc(local_48,lVar3,0);
    }
  }
  else if ((local_48 != (short *)0x0) || (uVar4 != 0)) {
    lVar3 = (longlong)(int)uVar4 * 2;
    goto LAB_142b3d503;
  }
  local_158[0] = local_148;
  if (local_48 != (short *)0x0) {
    local_158[0] = local_48;
  }
  local_40 = local_158[0];
  FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(local_158,uVar4,lVar1,(int)uVar7 + 2);
LAB_142b3d55a:
  psVar2 = local_40;
  local_168 = (undefined2 *)0x0;
  local_160 = 0;
  if ((local_40 != (short *)0x0) && (*local_40 != 0)) {
    do {
      uVar5 = uVar5 + 1;
    } while (local_40[uVar5] != 0);
    uVar4 = (int)uVar5 + 1;
    local_160 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
    }
    FGenericPlatformString::Memcpy(local_168,psVar2,(longlong)(int)uVar4 * 2);
  }
  if (local_48 != (short *)0x0) {
    FMemory::Free();
  }
  FString::TrimEndInline(&local_168);
  if ((((param_5 != '\0') && (param_5 != '\x02')) && (param_5 != '\x03')) && (param_5 == '\x04')) {
    puVar8 = &DAT_143f3eda8;
    if ((int)local_160 != 0) {
      puVar8 = local_168;
    }
    LowLevelFatalErrorHandler("Unknown",0x932,&DAT_143f4c878,puVar8);
    local_178 = &DAT_143f3eda8;
    if ((int)local_160 != 0) {
      local_178 = local_168;
    }
    FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x932,&DAT_143f4c878);
  }
  if (local_168 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b3d680 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FTTLLineChatTagParamRow::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b3d6e0 FUN_142b3d6e0 body=52 status=ok
// SIG undefined FUN_142b3d6e0(void)

undefined8 FUN_142b3d6e0(undefined8 param_1,ulonglong param_2)

{
  FUN_142b37660();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b3d720 FUN_142b3d720 body=166 status=ok
// SIG undefined FUN_142b3d720(void)

longlong FUN_142b3d720(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 8);
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142b3d7d0 FUN_142b3d7d0 body=134 status=ok
// SIG undefined FUN_142b3d7d0(void)

undefined8 * FUN_142b3d7d0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1457c4fc0;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b3d860 FUN_142b3d860 body=134 status=ok
// SIG undefined FUN_142b3d860(void)

undefined8 * FUN_142b3d860(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1457c5028;
  plVar4 = (longlong *)param_1[2];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b3d8f0 FUN_142b3d8f0 body=200 status=ok
// SIG undefined FUN_142b3d8f0(void)

undefined8 * FUN_142b3d8f0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1457c5090;
  FUN_140483870(&DAT_1465357a8,param_1);
  plVar4 = (longlong *)param_1[9];
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 5);
  plVar4 = (longlong *)param_1[4];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FTickerObjectBase::~FTickerObjectBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142b3d9c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TRenderingCompositePassBase<2,3>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142b37790();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 142b3da00 FUN_142b3da00 body=52 status=ok
// SIG undefined FUN_142b3da00(void)

undefined8 FUN_142b3da00(undefined8 param_1,ulonglong param_2)

{
  FUN_142b37920();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142b3da40 FUN_142b3da40 body=178 status=ok
// SIG undefined FUN_142b3da40(void)

undefined8 * FUN_142b3da40(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xf);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xd);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 9);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 7);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 5);
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_1457c52d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142b3db00 FUN_142b3db00 body=106 status=ok
// SIG undefined FUN_142b3db00(void)

undefined8 * FUN_142b3db00(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_1457c5188;
  plVar3 = (longlong *)param_1[0xd];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FUN_142b37920(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142b3db70 FUN_142b3db70 body=190 status=ok
// SIG undefined FUN_142b3db70(void)

longlong FUN_142b3db70(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142b3dc30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ADungeonParticleSystem::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142b37990();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x338);
  }
  return param_1;
}



// FUNCTION 142b3dc70 FUN_142b3dc70 body=134 status=ok
// SIG undefined FUN_142b3dc70(void)

undefined8 * FUN_142b3dc70(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_142b36ae0(param_1 + 0xb);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 5);
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_1457c52d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142b3dd00 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UUGOptionsScreenUW::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142b37c60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3e0);
  }
  return param_1;
}



// FUNCTION 142b3dd40 FUN_142b3dd40 body=130 status=ok
// SIG undefined FUN_142b3dd40(void)

undefined8 * FUN_142b3dd40(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_1457c53a0;
  FUN_142b36b90(param_1 + 8);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142b3ddd0 FUN_142b3ddd0 body=134 status=ok
// SIG undefined FUN_142b3ddd0(void)

undefined8 * FUN_142b3ddd0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_142b369f0(param_1 + 0xb);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 5);
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_1457c52d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142b3de60 FUN_142b3de60 body=43 status=ok
// SIG undefined FUN_142b3de60(void)

undefined8 * FUN_142b3de60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457c52d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142b3de90 FUN_142b3de90 body=106 status=ok
// SIG undefined FUN_142b3de90(void)

undefined8 * FUN_142b3de90(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_1457c5128;
  plVar3 = (longlong *)param_1[0xd];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FUN_142b37920(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142b3df00 FUN_142b3df00 body=352 status=ok
// SIG undefined FUN_142b3df00(void)

undefined8 * FUN_142b3df00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x44] != 0) {
    FMemory::Free();
  }
  FUN_142b37150(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FMemory::Free();
  }
  FUN_142b37310(param_1 + 0x32);
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (param_1[0x30] != 0) {
    FMemory::Free();
  }
  FUN_142b36e00(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  FUN_142b37310(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  FUN_142b36f90(param_1 + 0x14);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x11);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xb);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 5);
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_1457c52d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 142b3e060 FUN_142b3e060 body=125 status=ok
// SIG undefined FUN_142b3e060(void)

undefined8 * FUN_142b3e060(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TArray<FPresetHotbar,FDefaultAllocator>::~TArray<FPresetHotbar,FDefaultAllocator>(param_1 + 7);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 5);
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_1457c52d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142b3e0e0 FUN_142b3e0e0 body=52 status=ok
// SIG undefined FUN_142b3e0e0(void)

undefined8 FUN_142b3e0e0(undefined8 param_1,ulonglong param_2)

{
  FUN_142b38330();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 142b3e120 FUN_142b3e120 body=125 status=ok
// SIG undefined FUN_142b3e120(void)

undefined8 * FUN_142b3e120(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 7);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 5);
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_1457c52d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142b3e1a0 FUN_142b3e1a0 body=125 status=ok
// SIG undefined FUN_142b3e1a0(void)

undefined8 * FUN_142b3e1a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 5);
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_1457c52d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142b3e220 FUN_142b3e220 body=1196 status=ok
// SIG undefined FUN_142b3e220(void)

void FUN_142b3e220(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 in_stack_fffffffffffffe98;
  uint uVar15;
  longlong local_158;
  int local_150;
  int iStack_14c;
  code *local_148;
  undefined4 uStack_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  longlong local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [16];
  longlong local_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined **local_e0;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [8];
  undefined4 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [16];
  
  bVar3 = false;
  bVar2 = false;
  plVar6 = (longlong *)FUN_142b49cd0(param_1,local_88,&DAT_146b2ac50);
  plVar8 = (longlong *)plVar6[1];
  lVar14 = *plVar6;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_118 = plVar8;
  local_110 = lVar14;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_80 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (lVar14 == 0) {
    uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x60,local_78);
    TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0x210,uVar7,0);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_70 + 1;
      lVar14 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  FUN_142b0d7b0(local_108);
  FString::operator=(local_100,param_3);
  lVar14 = 0;
  iVar12 = 0;
  local_158 = 0;
  iVar11 = 0;
  local_150 = 0;
  iStack_14c = 0;
  if (0 < (int)param_2[1]) {
    iVar13 = 0;
    local_148 = (code *)0x0;
    do {
      pcVar5 = local_148;
      FUN_142b0d770(local_b8);
      local_b0 = *(undefined4 *)(pcVar5 + *param_2);
      FString::operator=(local_a8);
      if (pcVar5[*param_2 + 0x38] == (code)0x0) {
        local_130 = 9;
        local_138 = 0;
        bVar2 = true;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138);
        FGenericPlatformString::Memcpy(local_138,L"declined",0x12);
        plVar8 = &local_138;
      }
      else {
        local_120 = 7;
        local_128 = 0;
        bVar3 = true;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128);
        FGenericPlatformString::Memcpy(local_128,L"signed",0xe);
        plVar8 = &local_128;
      }
      FString::operator=(local_98,plVar8);
      if ((bVar2) && (bVar2 = false, local_138 != 0)) {
        FMemory::Free();
      }
      if ((bVar3) && (bVar3 = false, local_128 != 0)) {
        FMemory::Free();
      }
      lVar9 = (longlong)iVar12;
      local_150 = iVar12 + 1;
      if (iVar11 < local_150) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_158,iVar12);
        lVar14 = local_158;
        iVar11 = iStack_14c;
      }
      iVar12 = local_150;
      puVar10 = (undefined8 *)(lVar9 * 0x30 + lVar14);
      *puVar10 = &PTR_FUN_14571ea90;
      *(undefined4 *)(puVar10 + 1) = local_b0;
      FString::FString(puVar10 + 2,local_a8);
      FString::FString(puVar10 + 4,local_98);
      FUN_142b0ed90(local_b8);
      iVar13 = iVar13 + 1;
      local_148 = local_148 + 0x40;
      plVar8 = local_118;
    } while (iVar13 < (int)param_2[1]);
  }
  uVar15 = (uint)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  lVar9 = local_f0;
  for (iVar11 = local_e8; iVar11 != 0; iVar11 = iVar11 + -1) {
    FUN_142b0ed90(lVar9);
    uVar15 = (uint)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
    lVar9 = lVar9 + 0x30;
  }
  FUN_142b30c40(&local_f0,lVar14,iVar12,uStack_e4,(ulonglong)uVar15 << 0x20);
  local_148 = FUN_142b4b8d0;
  uStack_140 = 0;
  local_e0 = &PTR_FUN_14571eab0;
  local_68 = 0;
  uStack_60 = 0;
  FString::FString(local_d8,local_100);
  local_c8 = 0;
  if (local_e8 == 0) {
    local_bc = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_c8,local_e8,0);
    lVar9 = local_c8 + 0x10;
    local_f0 = local_f0 + 0x10;
    do {
      *(undefined ***)(lVar9 + -0x10) = &PTR_FUN_14571ea90;
      *(undefined4 *)(lVar9 + -8) = *(undefined4 *)(local_f0 + -8);
      FString::FString(lVar9,local_f0);
      FString::FString(lVar9 + 0x10,local_f0 + 0x10);
      lVar9 = lVar9 + 0x30;
      local_f0 = local_f0 + 0x30;
      local_e8 = local_e8 + -1;
      plVar8 = local_118;
    } while (local_e8 != 0);
  }
  uVar7 = FUN_142b30ff0(local_48,param_1,&local_148);
  iVar11 = FUN_142ab9480(local_110,param_1 + 0x20,&local_e0,uVar7,&local_68);
  lVar9 = lVar14;
  if (iVar11 == 0) {
    uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x60,local_58);
    TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0x210,uVar7,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      lVar14 = local_158;
      iVar12 = local_150;
      lVar9 = local_158;
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar14 = local_158;
        iVar12 = local_150;
        lVar9 = local_158;
        if (iVar11 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
          lVar14 = local_158;
          iVar12 = local_150;
          lVar9 = local_158;
        }
      }
    }
  }
  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
    FUN_142b0ed90(lVar14);
    lVar14 = lVar14 + 0x30;
  }
  if (lVar9 != 0) {
    FMemory::Free(lVar9);
  }
  FUN_142b0edd0(local_108);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    lVar14 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 142b3e6d0 FUN_142b3e6d0 body=314 status=ok
// SIG undefined FUN_142b3e6d0(void)

void FUN_142b3e6d0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined4 local_18;
  
  local_30 = (longlong *)param_2[1];
  local_28 = *param_2;
  local_20 = (longlong *)0x0;
  local_18 = 0;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_20,&local_30,param_3,local_28,0);
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  uVar7 = *param_3;
  iVar4 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar4 + 1;
  local_18 = uVar7;
  if (*(int *)(param_1 + 0x14) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 8),iVar4);
  }
  plVar6 = local_20;
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x18);
  *puVar3 = local_28;
  puVar3[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    uVar7 = local_18;
  }
  *(undefined4 *)(puVar3 + 2) = uVar7;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 142b3e810 FUN_142b3e810 body=416 status=ok
// SIG undefined FUN_142b3e810(void)

void FUN_142b3e810(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  int iVar7;
  wchar_t *pwVar8;
  wchar_t *local_48;
  int local_40;
  int local_3c;
  undefined8 local_38;
  longlong *local_30;
  
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)*param_2;
  }
  local_48 = (wchar_t *)0x0;
  local_3c = 0;
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  if (0x40 < iVar7) {
    iVar7 = 0x40;
  }
  local_40 = iVar7 + 1;
  if (iVar7 == 0) {
    local_40 = 0;
  }
  if (0 < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pwVar5 = local_48;
    if (0 < local_40) {
      wcsncpy(local_48,pwVar8,(longlong)iVar7);
      pwVar5[iVar7] = L'\0';
    }
  }
  iVar3 = local_40;
  _Src = (void *)*param_3;
  iVar7 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    local_40 = (uint)(local_40 == 0) + iVar7 + local_40;
    if (local_3c < local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
    }
    pwVar8 = local_48 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0));
    _guard_xfg_dispatch_icall_nop(pwVar8,_Src,(longlong)iVar7 * 2);
    pwVar8[iVar7] = L'\0';
  }
  local_38 = *param_4;
  local_30 = (longlong *)param_4[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FJsonObject::SetField(*(undefined8 *)(param_1 + 8),&local_48,&local_38);
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
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
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b3e9b0 FUN_142b3e9b0 body=699 status=ok
// SIG undefined FUN_142b3e9b0(void)

void FUN_142b3e9b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined **local_48;
  longlong *local_40;
  longlong *local_38;
  
  plVar4 = (longlong *)operator_new(0x50);
  plVar6 = (longlong *)0x0;
  local_78 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[7] = 0;
    plVar4[9] = 0;
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    *(undefined4 *)(plVar4 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
    plVar4[8] = 0;
    local_78 = plVar4;
  }
  plVar4 = (longlong *)operator_new(0x18);
  local_70 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *plVar4 = (longlong)&PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    plVar4[2] = (longlong)local_78;
    local_70 = plVar4;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_78,local_78,local_78);
  plVar4 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  local_40 = local_78;
  local_48 = &PTR_FUN_1457c4fc0;
  local_38 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  plVar5 = plVar6;
  if (*(int *)(param_3 + 8) != 0) {
    plVar7 = (longlong *)param_3[6];
    if ((longlong *)param_3[6] == (longlong *)0x0) {
      plVar7 = param_3 + 2;
    }
    if (plVar7 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*plVar7 + 8))();
    }
  }
  (*(code *)*param_3)(plVar5,&local_48);
  plVar5 = local_38;
  local_48 = &PTR_FUN_1457c4fc0;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_38 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar4 = (longlong *)operator_new(0x20);
  local_68 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 0;
    *plVar4 = (longlong)&PTR_AsObject_143f606d8;
    plVar4[2] = (longlong)local_78;
    plVar4[3] = (longlong)local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar4 + 1) = 6;
    local_68 = plVar4;
  }
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *plVar4 = (longlong)&PTR_FUN_143f60d18;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    plVar4[2] = (longlong)local_68;
    plVar6 = plVar4;
  }
  local_60 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
  local_58 = 0;
  local_50 = 0;
  FUN_142b3e810(param_1,param_2,&local_58,&local_68);
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_60)(local_60);
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
  plVar6 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_70)(local_70);
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
  return;
}



// FUNCTION 142b3ec70 FUN_142b3ec70 body=426 status=ok
// SIG undefined FUN_142b3ec70(void)

void FUN_142b3ec70(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  wchar_t *_Source;
  undefined2 local_res8 [4];
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)*param_2;
  }
  uVar6 = 0;
  local_48 = (wchar_t *)0x0;
  local_3c = 0;
  iVar8 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar8 = 0;
  }
  if (0x40 < iVar8) {
    iVar8 = 0x40;
  }
  local_40 = iVar8 + 1;
  if (iVar8 == 0) {
    local_40 = 0;
  }
  if (0 < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pwVar5 = local_48;
    if (0 < local_40) {
      wcsncpy(local_48,_Source,(longlong)iVar8);
      pwVar5[iVar8] = L'\0';
    }
  }
  FUN_1406d2da0(*(undefined8 *)(param_1 + 8),&local_48);
  local_30 = *(undefined8 *)(param_1 + 8);
  local_28 = *(longlong **)(param_1 + 0x10);
  local_38 = &PTR_FUN_1457c5028;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  if (*(int *)(param_3 + 8) != 0) {
    plVar7 = (longlong *)param_3[6];
    if ((longlong *)param_3[6] == (longlong *)0x0) {
      plVar7 = param_3 + 2;
    }
    if (plVar7 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar7 + 8))();
    }
  }
  (*(code *)*param_3)(uVar6,&local_38);
  plVar7 = local_28;
  local_38 = &PTR_FUN_1457c5028;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_28)(local_28);
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
  lVar4 = *(longlong *)(param_1 + 8);
  local_res8[0] = 0x7d;
  *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + -1;
  (**(code **)(**(longlong **)(lVar4 + 8) + 0x50))(*(longlong **)(lVar4 + 8),local_res8,2);
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0x20) = 3;
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b3ee20 FUN_142b3ee20 body=1057 status=ok
// SIG undefined FUN_142b3ee20(void)

void FUN_142b3ee20(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint local_res18 [2];
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  
  uVar11 = 0;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  if (param_3 != 0) {
    do {
      plVar5 = (longlong *)0x0;
      plVar4 = (longlong *)operator_new(0x50);
      plVar8 = plVar5;
      if (plVar4 != (longlong *)0x0) {
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[7] = 0;
        plVar4[9] = 0;
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        *(undefined4 *)(plVar4 + 6) = 0xffffffff;
        *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
        plVar4[8] = 0;
        plVar8 = plVar4;
      }
      plVar4 = (longlong *)operator_new(0x18);
      local_90 = plVar5;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *plVar4 = (longlong)&PTR_FUN_143f60d28;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        plVar4[2] = (longlong)plVar8;
        local_90 = plVar4;
      }
      local_98 = plVar8;
      SharedPointerInternals::EnableSharedFromThis(&local_98,plVar8,plVar8);
      plVar8 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      local_50 = local_98;
      local_58 = &PTR_FUN_1457c4fc0;
      local_48 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      local_res18[0] = uVar11;
      if (*(int *)(param_4 + 8) != 0) {
        plVar4 = (longlong *)param_4[6];
        if ((longlong *)param_4[6] == (longlong *)0x0) {
          plVar4 = param_4 + 2;
        }
        if (plVar4 != (longlong *)0x0) {
          plVar5 = (longlong *)(**(code **)(*plVar4 + 8))();
        }
      }
      (*(code *)*param_4)(plVar5,&local_58,local_res18);
      plVar4 = local_48;
      local_58 = &PTR_FUN_1457c4fc0;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_48 + 1;
        lVar10 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_48)(local_48);
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
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar8 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      puVar6 = (undefined8 *)operator_new(0x20);
      puVar7 = (undefined8 *)0x0;
      puVar9 = puVar7;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *puVar6 = &PTR_AsObject_143f606d8;
        puVar6[2] = local_98;
        puVar6[3] = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_90 + 1) = (int)local_90[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(puVar6 + 1) = 6;
        puVar9 = puVar6;
      }
      puVar6 = (undefined8 *)operator_new(0x18);
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 1;
        *puVar6 = &PTR_FUN_143f60d18;
        *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
        puVar6[2] = puVar9;
        puVar7 = puVar6;
      }
      local_88 = puVar9;
      local_80 = puVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_88,puVar9,puVar9);
      uVar2 = local_a0;
      lVar10 = (longlong)(int)local_a0;
      iVar3 = (int)local_a0 + 1;
      local_a0 = CONCAT44(local_a0._4_4_,iVar3);
      if (local_a0._4_4_ < iVar3) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_a8,uVar2 & 0xffffffff);
      }
      plVar8 = local_90;
      local_a8[lVar10 * 2] = local_88;
      (local_a8 + lVar10 * 2)[1] = local_80;
      local_80 = (undefined8 *)0x0;
      local_88 = (undefined8 *)0x0;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_90 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_3);
  }
  puVar7 = (undefined8 *)operator_new(0x20);
  plVar8 = (longlong *)0x0;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    iVar3 = (int)local_a0;
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR_AsObject_143f60698;
    puVar7[2] = 0;
    *(int *)(puVar7 + 3) = (int)local_a0;
    if ((int)local_a0 == 0) {
      *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
      *(undefined4 *)(puVar7 + 1) = 5;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar7 + 2,local_a0 & 0xffffffff,0);
      puVar9 = (undefined8 *)puVar7[2];
      puVar6 = local_a8;
      do {
        *puVar9 = *puVar6;
        lVar10 = puVar6[1];
        puVar9[1] = lVar10;
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
          UNLOCK();
        }
        puVar9 = puVar9 + 2;
        puVar6 = puVar6 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(undefined4 *)(puVar7 + 1) = 5;
    }
  }
  plVar4 = (longlong *)operator_new(0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    *plVar4 = (longlong)&PTR_FUN_143f60d18;
    *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
    plVar4[2] = (longlong)puVar7;
    plVar8 = plVar4;
  }
  local_78 = puVar7;
  local_70 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_78,puVar7,puVar7);
  local_68 = 0;
  local_60 = 0;
  FUN_142b3e810(param_1,param_2,&local_68,&local_78);
  plVar8 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_a8);
  return;
}



// FUNCTION 142b3f250 FUN_142b3f250 body=677 status=ok
// SIG undefined FUN_142b3f250(void)

void FUN_142b3f250(longlong param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  wchar_t *_Source;
  uint uVar9;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  uint local_res18;
  undefined2 local_78 [4];
  undefined2 local_70 [4];
  uint local_68 [2];
  wchar_t *local_60;
  int local_58;
  undefined4 local_54;
  undefined **local_50;
  undefined8 local_48;
  longlong *local_40;
  
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)*param_2;
  }
  uVar9 = 0;
  local_60 = (wchar_t *)0x0;
  local_54 = 0;
  iVar8 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar8 = 0;
  }
  if (0x40 < iVar8) {
    iVar8 = 0x40;
  }
  local_58 = iVar8 + 1;
  if (iVar8 == 0) {
    local_58 = 0;
  }
  local_res18 = param_3;
  if (0 < local_58) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    pwVar5 = local_60;
    if (0 < local_58) {
      wcsncpy(local_60,_Source,(longlong)iVar8);
      pwVar5[iVar8] = L'\0';
    }
  }
  FUN_1406d26e0(*(undefined8 *)(param_1 + 8),&local_60);
  if (param_3 != 0) {
    do {
      lVar4 = *(longlong *)(param_1 + 8);
      if ((0xc < *(uint *)(lVar4 + 0x20)) ||
         ((0x1015U >> (*(uint *)(lVar4 + 0x20) & 0x1f) & 1) == 0)) {
        local_res8[0] = 0x2c;
        (**(code **)(**(longlong **)(lVar4 + 8) + 0x50))(*(longlong **)(lVar4 + 8),local_res8,2);
      }
      local_res10[0] = 0x7b;
      (**(code **)(**(longlong **)(lVar4 + 8) + 0x50))(*(longlong **)(lVar4 + 8),local_res10,2);
      *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + 1;
      iVar3 = *(int *)(lVar4 + 0x18);
      *(int *)(lVar4 + 0x18) = iVar3 + 1;
      if (*(int *)(lVar4 + 0x1c) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar4 + 0x10,iVar3);
      }
      local_50 = &PTR_FUN_1457c5028;
      *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar3 * 4) = 6;
      *(undefined4 *)(lVar4 + 0x20) = 2;
      local_48 = *(undefined8 *)(param_1 + 8);
      local_40 = *(longlong **)(param_1 + 0x10);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      local_68[0] = uVar9;
      if (*(int *)(param_4 + 8) == 0) {
LAB_142b3f3d9:
        uVar6 = 0;
      }
      else {
        plVar7 = (longlong *)param_4[6];
        if ((longlong *)param_4[6] == (longlong *)0x0) {
          plVar7 = param_4 + 2;
        }
        if (plVar7 == (longlong *)0x0) goto LAB_142b3f3d9;
        uVar6 = (**(code **)(*plVar7 + 8))();
      }
      (*(code *)*param_4)(uVar6,&local_50,local_68);
      plVar7 = local_40;
      local_50 = &PTR_FUN_1457c5028;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
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
      lVar4 = *(longlong *)(param_1 + 8);
      local_78[0] = 0x7d;
      *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + -1;
      (**(code **)(**(longlong **)(lVar4 + 8) + 0x50))(*(longlong **)(lVar4 + 8),local_78,2);
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar4 + 0x10);
      *(undefined4 *)(lVar4 + 0x20) = 3;
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_res18);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  local_70[0] = 0x5d;
  *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + -1;
  (**(code **)(**(longlong **)(lVar4 + 8) + 0x50))(*(longlong **)(lVar4 + 8),local_70,2);
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0x20) = 5;
  if (local_60 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b3f500 FUN_142b3f500 body=1068 status=ok
// SIG undefined FUN_142b3f500(void)

void FUN_142b3f500(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined4 uVar17;
  undefined1 local_res18 [16];
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  longlong local_58 [4];
  
  plVar15 = *(longlong **)(param_1 + 0x38);
  plVar1 = (longlong *)(param_1 + 0x38);
  bVar8 = false;
  bVar7 = false;
  plVar16 = plVar15 + (longlong)*(int *)(param_1 + 0x40) * 6;
  for (; plVar15 != plVar16; plVar15 = plVar15 + 6) {
    if ((*plVar15 != 0) && (cVar10 = (*(code *)**(undefined8 **)*param_2)(), cVar10 != '\0')) {
      return;
    }
  }
  if (DAT_146b2ade0 == 0) {
    puVar11 = (undefined8 *)FName::FName(local_res18,"GbxSpark",1);
    uVar5 = *puVar11;
    uVar12 = FUN_14168dc80();
    FUN_141690010(uVar12,uVar5);
  }
  plVar15 = *(longlong **)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x308);
  plVar16 = plVar15 + (longlong)*(int *)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x310) * 2;
  if (plVar15 == plVar16) {
    return;
  }
  while ((puVar11 = *(undefined8 **)(*plVar15 + 0x260), puVar11 == (undefined8 *)0x0 ||
         (cVar10 = (**(code **)*puVar11)(puVar11,*param_2), cVar10 == '\0'))) {
    plVar15 = plVar15 + 2;
    if (plVar15 == plVar16) {
      return;
    }
  }
  lVar6 = *plVar15;
  plVar15 = (longlong *)plVar15[1];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  if (lVar6 == 0) goto LAB_142b3f8e5;
  plVar13 = (longlong *)FUN_142b49cd0(lVar6,local_68,&DAT_146b2ad88);
  plVar16 = (longlong *)plVar13[1];
  lVar6 = *plVar13;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_60 + 1;
    lVar14 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  plVar13 = *(longlong **)(lVar6 + 0x10);
  lVar6 = *(longlong *)(lVar6 + 8);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar16 + 1;
    lVar14 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if (lVar6 == 0) {
LAB_142b3f726:
    bVar9 = false;
  }
  else {
    local_80 = 0xc;
    local_88 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy(local_88,L"EndpointUrl",0x18);
    lVar14 = FUN_142afb430(lVar6,local_58,&local_88);
    bVar8 = true;
    bVar7 = true;
    if (*(int *)(lVar14 + 8) < 2) goto LAB_142b3f726;
    bVar9 = true;
  }
  if ((bVar7) && (local_58[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar8) && (local_88 != 0)) {
    FMemory::Free();
  }
  if (bVar9) {
    local_78 = 0;
    local_70 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"HeartbeatCooldown",0x24);
    uVar17 = FUN_142afb1f0(lVar6,&local_78,0x41f00000,0x3f800000,0x42700000);
    if (local_78 != 0) {
      FMemory::Free();
    }
    iVar4 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = iVar4 + 1;
    if (*(int *)(param_1 + 0x44) < iVar4 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
    }
    lVar6 = *plVar1;
    lVar14 = (longlong)iVar4 * 0x30;
    *(undefined8 *)(lVar14 + lVar6) = 0;
    *(undefined8 *)(lVar14 + 8 + lVar6) = 0;
    *(undefined8 *)(lVar14 + 0x10 + lVar6) = 0;
    *(undefined8 *)(lVar14 + 0x18 + lVar6) = 0;
    *(undefined8 *)(lVar14 + 0x20 + lVar6) = 0;
    *(undefined8 *)(lVar14 + 0x28 + lVar6) = 0;
    local_90 = (longlong *)param_2[1];
    local_98 = *param_2;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
    }
    puVar11 = (undefined8 *)(*plVar1 + lVar14);
    if (puVar11 != &local_98) {
      *puVar11 = local_98;
      local_98 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar11 + 1,&local_90);
    }
    plVar16 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_90 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    *(undefined4 *)(lVar14 + 0x14 + *plVar1) = uVar17;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
LAB_142b3f8e5:
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  return;
}



// FUNCTION 142b3f930 FUN_142b3f930 body=390 status=ok
// SIG undefined FUN_142b3f930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b3f930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_142b48cf0(&local_a8);
  FUN_142b48aa0(local_a8,&local_98,param_1);
  local_88 = &local_98;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  uStack_80 = param_4;
  puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar5 + 1) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar5 + 0xc) = local_88._4_4_;
    *(undefined4 *)(puVar5 + 2) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_80._4_4_;
  }
  local_78[0] = FUN_142b40de0;
  FUN_142b3fac0(local_98,param_2,param_3,local_78);
  if (local_38 != 0) {
    plVar6 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar6 = local_48;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_90 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  plVar6 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_a0 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  return;
}



// FUNCTION 142b3fac0 FUN_142b3fac0 body=462 status=ok
// SIG undefined FUN_142b3fac0(void)

void FUN_142b3fac0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined2 *puVar5;
  float *pfVar6;
  undefined2 *puVar7;
  float *pfVar8;
  undefined2 *_Src;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  undefined2 *local_38;
  ulonglong local_30;
  float *local_28;
  int local_20;
  
  pfVar10 = (float *)0x0;
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  FUN_142b52d90(&local_38);
  _Src = local_38;
  pfVar6 = pfVar10;
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    iVar3 = (int)local_30;
    lVar11 = (longlong)(int)local_30;
    local_28 = (float *)0x0;
    local_20 = (int)local_30;
    pfVar8 = pfVar10;
    if ((int)local_30 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_30 & 0xffffffff,0);
      pfVar8 = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar11 * 2);
    }
    pfVar4 = (float *)&DAT_143f3eda8;
    if (local_20 != 0) {
      pfVar4 = pfVar8;
    }
    iVar1 = FCrc::StrCrc32<wchar_t>(pfVar4,0);
    if (pfVar8 != (float *)0x0) {
      FMemory::Free(pfVar8);
    }
    lVar11 = *(longlong *)(param_1 + 0x160);
    if (*(longlong *)(param_1 + 0x160) == 0) {
      lVar11 = param_1 + 0x158;
    }
    iVar1 = *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x168) - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar11 = *(longlong *)(param_1 + 0x120);
      do {
        lVar9 = (longlong)iVar1 * 0x20;
        puVar7 = &DAT_143f3eda8;
        if (iVar3 != 0) {
          puVar7 = _Src;
        }
        if (*(int *)(lVar11 + 8 + lVar9) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar11 + lVar9);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar7);
        if (iVar2 == 0) {
          if (iVar1 != -1) {
            pfVar6 = (float *)(*(longlong *)(param_1 + 0x120) + lVar9);
          }
          break;
        }
        lVar11 = *(longlong *)(param_1 + 0x120);
        iVar1 = *(int *)(lVar11 + 0x18 + lVar9);
      } while (iVar1 != -1);
    }
  }
  pfVar8 = pfVar6 + 4;
  if (pfVar6 == (float *)0x0) {
    pfVar8 = pfVar10;
  }
  if ((pfVar8 == (float *)0x0) ||
     ((*pfVar8 != 0.0 &&
      (iVar3 = rand(),
      (float)iVar3 * 3.051851e-05 < *pfVar8 || (float)iVar3 * 3.051851e-05 == *pfVar8)))) {
    FUN_142b3fc90(param_1,&local_38,param_4);
    _Src = local_38;
  }
  if (_Src == (undefined2 *)0x0) {
    return;
  }
  FMemory::Free(_Src);
  return;
}



// FUNCTION 142b3fc90 FUN_142b3fc90 body=800 status=ok
// SIG undefined FUN_142b3fc90(void)

void FUN_142b3fc90(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined2 local_res8 [4];
  int local_res20 [2];
  int local_98 [2];
  void **local_90;
  longlong *local_88;
  longlong *local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  ulonglong local_60;
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  
  FUN_142b53870();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar4 = 0;
    iVar6 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    FUN_1404ae740(&local_88,&local_68,0);
    plVar8 = local_88;
    (**(code **)(*local_88 + 0x10))(local_88,0x1000);
    FUN_14068b290(plVar8);
    plVar7 = local_80;
    local_58 = &PTR_FUN_1457c5028;
    local_50 = plVar8;
    local_48 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      plVar8 = local_88;
    }
    if (*(int *)(param_3 + 8) != 0) {
      plVar5 = (longlong *)param_3[6];
      if ((longlong *)param_3[6] == (longlong *)0x0) {
        plVar5 = param_3 + 2;
      }
      if (plVar5 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 8))();
      }
    }
    (*(code *)*param_3)(uVar4,&local_58);
    *(int *)((longlong)plVar8 + 0x24) = *(int *)((longlong)plVar8 + 0x24) + -1;
    local_res8[0] = 0x7d;
    (**(code **)(*(longlong *)plVar8[1] + 0x50))((longlong *)plVar8[1],local_res8,2);
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar8 + 2);
    *(undefined4 *)(plVar8 + 4) = 3;
    (**(code **)(*plVar8 + 8))(plVar8);
    local_70 = *(int *)(param_2 + 1);
    lVar9 = (longlong)local_70;
    pvVar3 = (void *)*param_2;
    local_78 = (void *)0x0;
    if (local_70 == 0) {
      local_6c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
      _guard_xfg_dispatch_icall_nop(local_78,pvVar3,lVar9 * 2);
    }
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x58,local_res20,&local_78);
    if ((local_res20[0] == -1) ||
       (lVar9 = *(longlong *)(param_1 + 0x58) + (longlong)local_res20[0] * 0x28, lVar9 == 0)) {
      local_90 = &local_78;
      TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FString_&&>_>(param_1 + 0x58,local_98,&local_90,0);
      lVar9 = *(longlong *)(param_1 + 0x58) + (longlong)local_98[0] * 0x28;
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free();
    }
    iVar2 = *(int *)(lVar9 + 0x18);
    *(int *)(lVar9 + 0x18) = iVar2 + 1;
    if (*(int *)(lVar9 + 0x1c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x10,iVar2);
    }
    pvVar3 = local_68;
    puVar10 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar9 + 0x10));
    *puVar10 = 0;
    lVar9 = (longlong)(int)local_60;
    *(int *)(puVar10 + 1) = (int)local_60;
    if ((int)local_60 == 0) {
      *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar10,local_60 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar3,lVar9 * 2);
    }
    plVar8 = local_48;
    if ((int)local_60 != 0) {
      iVar6 = (int)local_60 + -1;
    }
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + iVar6;
    local_58 = &PTR_FUN_1457c5028;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_48 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      plVar7 = local_80;
      if ((int)lVar9 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar7 = local_80;
        if (iVar6 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
          plVar7 = local_80;
        }
      }
    }
    plVar8 = local_80;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar7 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (((*(char *)(param_1 + 0x1a0) == '\0') && (*(longlong *)(param_1 + 0x48) != 0)) &&
     (*(int *)(param_1 + 400) <= *(int *)(param_1 + 0xa8))) {
    FUN_142b45440(param_1,L"size");
  }
  return;
}



// FUNCTION 142b3ffb0 FUN_142b3ffb0 body=90 status=ok
// SIG undefined FUN_142b3ffb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142b3ffb0(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((*(int *)(param_1 + 0x118) != 0) && (*(longlong **)(param_1 + 0x110) != (longlong *)0x0)) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x18))();
    if ((char)in_RAX != '\0') {
      if (*(int *)(param_1 + 0x118) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b3fff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x38))();
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x000142b3fffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x38))();
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142b40010 FUN_142b40010 body=928 status=ok
// SIG undefined FUN_142b40010(void)

void FUN_142b40010(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined1 local_res20 [8];
  code *local_128;
  undefined4 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0 [16];
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined **local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  if (DAT_146b2ade0 == 0) {
    puVar10 = (undefined8 *)FName::FName(local_res20,"GbxSpark",1);
    uVar13 = *puVar10;
    uVar11 = FUN_14168dc80();
    FUN_141690010(uVar11,uVar13);
  }
  lVar4 = *(longlong *)(DAT_146b2ade0 + 0x18);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_142b61c00(param_1);
    return;
  }
  plVar12 = (longlong *)FUN_142b49cd0(*(longlong *)(param_1 + 0x28),local_e0,&DAT_146b2ac50);
  plVar5 = (longlong *)plVar12[1];
  lVar6 = *plVar12;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_d8 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  if (lVar6 == 0) {
    FUN_142b61c00(param_1);
  }
  else {
    lVar8 = *(longlong *)(lVar4 + 0x288);
    plVar12 = *(longlong **)(lVar4 + 0x290);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    if (lVar8 != 0) {
      plVar7 = *(longlong **)(lVar6 + 0x10);
      lVar8 = *(longlong *)(lVar6 + 8);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if (lVar8 != 0) {
        FUN_142af9cb0();
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
    FTickAnimationPlayers::FTickAnimationPlayers(local_f8);
    FString::operator=(local_f0,param_1 + 0x90);
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    local_128 = FUN_142b4bc90;
    uStack_120 = 0;
    local_b0 = &PTR__scalar_deleting_destructor__14571ecb0;
    local_d0 = 0;
    uStack_c8 = 0;
    FString::FString(local_a8,local_f0);
    uVar13 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x18,local_c0);
    uVar13 = FUN_1404f5700(local_98,uVar13,&local_128);
    uVar11 = FUN_142b48440(lVar4,local_88);
    uVar14 = FUN_142b495d0(lVar4,local_78);
    uVar15 = FUN_142b48030(lVar4,local_68);
    uVar16 = FUN_142b47e60(lVar4,local_58);
    iVar9 = FUN_142aba5b0(lVar6,uVar16,uVar15,uVar14,uVar11,&local_b0,&local_108,&local_118,uVar13,
                          &local_d0);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_b8 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    if (iVar9 == 0) {
      *(undefined4 *)(param_1 + 200) = 0xffffffff;
      uVar17 = 3;
    }
    else {
      uVar17 = 4;
    }
    *(undefined4 *)(param_1 + 0xd0) = uVar17;
    FUN_142b0efa0(local_f8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar12 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar5 + 1;
    lVar4 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142b403b0 FUN_142b403b0 body=2557 status=ok
// SIG undefined FUN_142b403b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b403b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  short *psVar6;
  User *pUVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  void *pvVar11;
  void *_Src;
  void *pvVar12;
  undefined1 auStack_548 [32];
  undefined4 *local_528;
  undefined4 *local_520;
  void **local_518;
  undefined4 *local_510;
  undefined1 *local_508;
  void *local_4f8;
  ulonglong uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  void *local_498;
  int local_490;
  undefined4 local_48c;
  undefined1 local_488;
  void *local_480;
  undefined1 local_468;
  undefined1 local_460;
  longlong local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428 [16];
  code *local_3e8;
  code *pcStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined1 local_3c8 [64];
  undefined1 *local_388;
  code *pcStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  longlong local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  code *local_328;
  code *pcStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  longlong local_308 [8];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a8 [2];
  undefined1 local_298;
  longlong local_290;
  undefined1 local_278;
  undefined1 local_270;
  longlong local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  longlong local_250 [2];
  undefined1 local_240;
  longlong local_238;
  undefined1 local_220;
  undefined1 local_218;
  longlong local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  longlong local_1f8 [2];
  undefined1 local_1e8;
  longlong local_1e0;
  undefined1 local_1c8;
  undefined1 local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong local_1a0 [2];
  undefined1 local_190;
  longlong local_188;
  undefined1 local_170;
  undefined1 local_168;
  longlong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148 [2];
  undefined1 local_138;
  longlong local_130;
  undefined1 local_118;
  undefined1 local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_f0 [2];
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_c0;
  undefined1 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong local_98 [8];
  undefined1 *local_58;
  code *pcStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_548;
  if (DAT_146b2ade0 == 0) {
    puVar3 = (undefined8 *)FName::FName(&local_4a8,"GbxSpark",1);
    uVar5 = *puVar3;
    uVar4 = FUN_14168dc80();
    FUN_141690010(uVar4,uVar5);
  }
  lVar2 = *(longlong *)(DAT_146b2ade0 + 0x18);
  uVar5 = FUN_142b46720(lVar2,&local_4f8);
  FString::FString(local_148,uVar5);
  pvVar11 = (void *)0x0;
  local_138 = 0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  if (local_4f8 != (void *)0x0) {
    FMemory::Free();
  }
  FUN_142b77760(local_148);
  *(longlong *)(param_1 + 0xe0) = local_130;
  if (*(int *)(lVar2 + 0x398) < 2) {
    psVar6 = (short *)FUN_14169f830();
    uStack_4f0 = 0;
    local_4f8 = (void *)0x0;
    if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar6[lVar10] != 0);
      uVar8 = (int)lVar10 + 1;
      uStack_4f0 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4f8,0);
      }
      FGenericPlatformString::Memcpy(local_4f8,psVar6,(longlong)(int)uVar8 * 2);
    }
  }
  else {
    iVar9 = *(int *)(lVar2 + 0x398);
    pvVar12 = *(void **)(lVar2 + 0x390);
    local_4f8 = (void *)0x0;
    uStack_4f0 = CONCAT44(uStack_4f0._4_4_,iVar9);
    if (iVar9 == 0) {
      uStack_4f0 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_4f8,iVar9,0);
      _guard_xfg_dispatch_icall_nop(local_4f8,pvVar12,(longlong)iVar9 * 2);
    }
  }
  FString::FString(local_1a0,&local_4f8);
  local_190 = 0;
  local_188 = 0;
  local_170 = 0;
  local_168 = 0;
  local_150 = 0;
  local_160 = 0;
  uStack_158 = 0;
  if (local_4f8 != (void *)0x0) {
    FMemory::Free();
  }
  FUN_142b77760(local_1a0);
  *(longlong *)(param_1 + 0xe8) = local_188;
  uVar5 = FUN_142b47e60(lVar2,&local_4f8);
  FString::FString(local_1f8,uVar5);
  local_1e8 = 0;
  local_1e0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  if (local_4f8 != (void *)0x0) {
    FMemory::Free();
  }
  FUN_142b77760(local_1f8);
  *(longlong *)(param_1 + 0xd8) = local_1e0;
  FString::FString(local_250,param_1 + 0x48);
  local_240 = 0;
  local_238 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_220 = 0;
  local_218 = 0;
  local_200 = 0;
  FUN_142b77760(local_250);
  *(longlong *)(param_1 + 0xf0) = local_238;
  uVar5 = FUN_142b48440(lVar2,&local_4f8);
  FString::FString(local_2a8,uVar5);
  local_298 = 0;
  local_290 = 0;
  local_278 = 0;
  local_270 = 0;
  local_258 = 0;
  local_268 = 0;
  uStack_260 = 0;
  if (local_4f8 != (void *)0x0) {
    FMemory::Free();
  }
  FUN_142b77760(local_2a8);
  *(longlong *)(param_1 + 0xf8) = local_290;
  *(undefined **)(param_1 + 0x100) = &DAT_1457b6ff7;
  uVar5 = FUN_142b4a790(lVar2,&local_4f8);
  FString::FString(local_f0,uVar5);
  local_e0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (local_4f8 != (void *)0x0) {
    FMemory::Free();
  }
  FUN_142b77760(local_f0);
  lVar10 = local_d8;
  *(longlong *)(param_1 + 0x108) = local_d8;
  iVar9 = *(int *)(lVar2 + 0x330);
  pvVar12 = *(void **)(lVar2 + 0x328);
  local_4f8 = (void *)0x0;
  uStack_4f0 = CONCAT44(uStack_4f0._4_4_,iVar9);
  if (iVar9 == 0) {
    _Src = pvVar11;
    iVar9 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_4f8,iVar9,0);
    _Src = local_4f8;
    _guard_xfg_dispatch_icall_nop(local_4f8,pvVar12,(longlong)iVar9 * 2);
    iVar9 = (int)uStack_4f0;
  }
  local_498 = (void *)0x0;
  local_490 = iVar9;
  if (iVar9 == 0) {
    local_48c = 0;
    pvVar12 = pvVar11;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_498,iVar9,0);
    pvVar12 = local_498;
    _guard_xfg_dispatch_icall_nop(local_498,_Src,(longlong)iVar9 * 2);
  }
  local_488 = 0;
  local_480 = (void *)0x0;
  local_468 = 0;
  local_460 = 0;
  local_448 = 0;
  local_458 = 0;
  uStack_450 = 0;
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
                    (*(longlong **)(param_1 + 0x38),&local_4f8);
  FString::operator=(param_1 + 0x120,uVar5);
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  if (local_4f8 != (void *)0x0) {
    FMemory::Free();
  }
  FString::operator=(param_1 + 0x178,param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x188) = 0;
  local_2c8 = &LAB_142b2fb00;
  plVar1 = (longlong *)(param_1 + 0x2d8);
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  uStack_2c0 = &LAB_142b2f960;
  local_2b8 = &LAB_142b2f960;
  uStack_2b0 = AK::MemoryMgr::StartProfileThreadUsage;
  local_308[0] = param_1;
  if (plVar1 != local_308) {
    if (*(code **)(param_1 + 0x330) != (code *)0x0) {
      (**(code **)(param_1 + 0x330))(plVar1);
    }
    *(undefined4 *)(param_1 + 0x318) = (undefined4)local_2c8;
    *(undefined4 *)(param_1 + 0x31c) = local_2c8._4_4_;
    *(undefined4 *)(param_1 + 800) = (undefined4)uStack_2c0;
    *(undefined4 *)(param_1 + 0x324) = uStack_2c0._4_4_;
    local_4e8 = 0;
    uStack_4e0 = 0;
    local_4d8 = 0;
    uStack_4d0 = 0;
    *(undefined4 *)(param_1 + 0x328) = (undefined4)local_2b8;
    *(undefined4 *)(param_1 + 0x32c) = local_2b8._4_4_;
    *(undefined4 *)(param_1 + 0x330) = (undefined4)uStack_2b0;
    *(undefined4 *)(param_1 + 0x334) = uStack_2b0._4_4_;
    local_2c8 = (undefined1 *)0x0;
    uStack_2c0 = (undefined1 *)0x0;
    local_2b8 = (undefined1 *)0x0;
    uStack_2b0 = (code *)0x0;
    if (*(code **)(param_1 + 0x328) != (code *)0x0) {
      (**(code **)(param_1 + 0x328))(plVar1,local_308);
    }
  }
  if (uStack_2b0 != (code *)0x0) {
    (*uStack_2b0)(local_308);
  }
  local_58 = &LAB_142b2fa90;
  pcStack_50 = (code *)&LAB_142b2f960;
  local_48 = &LAB_142b2f960;
  uStack_40 = AK::MemoryMgr::StartProfileThreadUsage;
  local_98[0] = param_1;
  if (*(longlong *)(param_1 + 0x118) == 0) {
    FUN_142b778a0(param_1 + 0x280);
    local_4f8 = *(void **)(param_1 + 0x2c8);
    uStack_4f0 = *(undefined8 *)(param_1 + 0x2d0);
    FUN_142b778a0(param_1 + 0x228);
    local_4a8 = *(undefined4 *)(param_1 + 0x270);
    uStack_4a4 = *(undefined4 *)(param_1 + 0x274);
    uStack_4a0 = *(undefined4 *)(param_1 + 0x278);
    uStack_49c = *(undefined4 *)(param_1 + 0x27c);
    FUN_142b778a0(param_1 + 0x1d0);
    local_438 = *(undefined4 *)(param_1 + 0x218);
    uStack_434 = *(undefined4 *)(param_1 + 0x21c);
    uStack_430 = *(undefined4 *)(param_1 + 0x220);
    uStack_42c = *(undefined4 *)(param_1 + 0x224);
    FUN_142b778a0(param_1 + 0x178);
    local_4c8 = *(undefined8 *)(param_1 + 0x1c0);
    uStack_4c0 = *(undefined8 *)(param_1 + 0x1c8);
    FUN_142b778a0(param_1 + 0x120);
    local_4b8 = *(undefined4 *)(param_1 + 0x168);
    uStack_4b4 = *(undefined4 *)(param_1 + 0x16c);
    uStack_4b0 = *(undefined4 *)(param_1 + 0x170);
    uStack_4ac = *(undefined4 *)(param_1 + 0x174);
    FUN_142b778a0(&local_498);
    local_368 = *(longlong *)(param_1 + 0xd8);
    uStack_360 = *(undefined8 *)(param_1 + 0xe0);
    local_348 = *(undefined8 *)(param_1 + 0xf8);
    uStack_340 = *(undefined8 *)(param_1 + 0x100);
    local_4e8 = uStack_450;
    uStack_4e0 = local_448;
    local_358 = *(undefined8 *)(param_1 + 0xe8);
    uStack_350 = *(undefined8 *)(param_1 + 0xf0);
    local_338 = *(undefined8 *)(param_1 + 0x108);
    uStack_330 = *(undefined8 *)(param_1 + 0x110);
    local_388 = local_58;
    pcStack_380 = pcStack_50;
    local_378 = (undefined4)local_48;
    uStack_374 = local_48._4_4_;
    uStack_370 = (undefined4)uStack_40;
    uStack_36c = uStack_40._4_4_;
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(local_3c8,local_98);
    }
    local_3e8 = *(code **)(param_1 + 0x318);
    pcStack_3e0 = *(code **)(param_1 + 800);
    local_3d8 = *(undefined4 *)(param_1 + 0x328);
    uStack_3d4 = *(undefined4 *)(param_1 + 0x32c);
    uStack_3d0 = *(undefined4 *)(param_1 + 0x330);
    uStack_3cc = *(undefined4 *)(param_1 + 0x334);
    if (pcStack_3e0 != (code *)0x0) {
      (*pcStack_3e0)(local_428,plVar1);
    }
    local_508 = local_3c8;
    local_510 = local_428;
    local_518 = &local_4f8;
    local_520 = &local_4a8;
    local_528 = &local_438;
    pUVar7 = bifrost::session::_guard_xfg_dispatch_icall_nop
                       (&local_368,&local_4e8,&local_4b8,&local_4c8);
    *(User **)(param_1 + 0x118) = pUVar7;
    pvVar11 = local_480;
    pvVar12 = local_498;
  }
  else {
    local_328 = FUN_142b2fa10;
    pcStack_320 = (code *)&LAB_142b2f960;
    local_318 = &LAB_142b2f960;
    uStack_310 = AK::MemoryMgr::StartProfileThreadUsage;
    local_368 = param_1;
    FUN_142b778a0(param_1 + 0x228);
    local_4e8 = *(undefined8 *)(param_1 + 0x270);
    uStack_4e0 = *(undefined8 *)(param_1 + 0x278);
    FUN_142b778a0(param_1 + 0x1d0);
    local_4b8 = *(undefined4 *)(param_1 + 0x218);
    uStack_4b4 = *(undefined4 *)(param_1 + 0x21c);
    uStack_4b0 = *(undefined4 *)(param_1 + 0x220);
    uStack_4ac = *(undefined4 *)(param_1 + 0x224);
    FUN_142b778a0(param_1 + 0x178);
    local_4c8 = *(undefined8 *)(param_1 + 0x1c0);
    uStack_4c0 = *(undefined8 *)(param_1 + 0x1c8);
    local_3e8 = local_328;
    pcStack_3e0 = pcStack_320;
    local_3d8 = (undefined4)local_318;
    uStack_3d4 = local_318._4_4_;
    uStack_3d0 = (undefined4)uStack_310;
    uStack_3cc = uStack_310._4_4_;
    if (pcStack_320 != (code *)0x0) {
      (*pcStack_320)(local_428,&local_368);
    }
    local_528 = local_428;
    bifrost::session::_guard_xfg_dispatch_icall_nop
              (*(undefined8 *)(param_1 + 0x118),&local_4c8,&local_4b8,&local_4e8);
    if (uStack_310 != (code *)0x0) {
      (*uStack_310)(&local_368);
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = 4;
  if (uStack_40 != (code *)0x0) {
    (*uStack_40)(local_98);
  }
  if (pvVar11 != (void *)0x0) {
    FMemory::Free(pvVar11);
  }
  if (local_458 != 0) {
    FMemory::Free();
  }
  if (pvVar12 != (void *)0x0) {
    FMemory::Free(pvVar12);
  }
  if (lVar10 != 0) {
    FMemory::Free(lVar10);
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_f0[0] != 0) {
    FMemory::Free();
  }
  if (local_290 != 0) {
    FMemory::Free(local_290);
  }
  if (local_268 != 0) {
    FMemory::Free();
  }
  if (local_2a8[0] != 0) {
    FMemory::Free();
  }
  if (local_238 != 0) {
    FMemory::Free(local_238);
  }
  if (local_210 != 0) {
    FMemory::Free();
  }
  if (local_250[0] != 0) {
    FMemory::Free();
  }
  if (local_1e0 != 0) {
    FMemory::Free(local_1e0);
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  if (local_1f8[0] != 0) {
    FMemory::Free();
  }
  if (local_188 != 0) {
    FMemory::Free(local_188);
  }
  if (local_160 != 0) {
    FMemory::Free();
  }
  if (local_1a0[0] != 0) {
    FMemory::Free();
  }
  if (local_130 != 0) {
    FMemory::Free(local_130);
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (local_148[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b40db0 thunk_FUN_142b38f50 body=5 status=ok
// SIG undefined thunk_FUN_142b38f50(void)

undefined1
thunk_FUN_142b38f50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined8 uStack_48;
  longlong *plStack_40;
  undefined1 auStack_38 [16];
  longlong *plStack_28;
  longlong *plStack_18;
  
  lVar7 = *param_1;
  puVar9 = *(undefined8 **)(lVar7 + 0x20);
  puVar3 = puVar9 + (longlong)*(int *)(lVar7 + 0x28) * 3;
  if (puVar9 != puVar3) {
    do {
      if (*(int *)(param_4 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*param_4;
      }
      if (*(int *)(puVar9 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*puVar9;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar8);
      if (iVar5 == 0) goto LAB_142b38ffa;
      puVar9 = puVar9 + 3;
    } while (puVar9 != puVar3);
    lVar7 = *param_1;
  }
  iVar5 = *(int *)(lVar7 + 0x28);
  *(int *)(lVar7 + 0x28) = iVar5 + 1;
  if (*(int *)(lVar7 + 0x2c) < iVar5 + 1) {
    TArray<`anonymous_namespace'::FLogCategoryPtrs,FDefaultAllocator>::ResizeGrow
              ((longlong *)(lVar7 + 0x20),iVar5);
  }
  puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x20) + (longlong)iVar5 * 0x18);
  FString::FString(puVar9,param_4);
  *(undefined1 *)(puVar9 + 2) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
LAB_142b38ffa:
  if (*(char *)(puVar9 + 2) == '\0') {
    if ((*(float *)((longlong)puVar9 + 0x14) == 0.0) ||
       (*(float *)((longlong)puVar9 + 0x14) < *(float *)((longlong)param_1 + 0x14))) {
      FUN_142b48aa0(*(undefined8 *)param_1[3],&uStack_48,param_4);
      FUN_142b60a30(uStack_48,auStack_38,0);
      plVar4 = plStack_18;
      if (plStack_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_18 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_18)(plStack_18);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_18 + 8))(plStack_18,1);
          }
        }
      }
      plVar4 = plStack_28;
      if (plStack_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_28 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_28)(plStack_28);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_28 + 8))(plStack_28,1);
          }
        }
      }
      plVar4 = plStack_40;
      *(undefined1 *)(puVar9 + 2) = auStack_38[0];
      *(int *)((longlong)puVar9 + 0x14) = (int)param_1[2];
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_40 + 8))(plStack_40,1);
          }
        }
      }
    }
    if (*(char *)(puVar9 + 2) == '\0') {
      *(undefined1 *)param_1[1] = 0;
    }
  }
  return *(undefined1 *)param_1[1];
}



// FUNCTION 142b40de0 FUN_142b40de0 body=96 status=ok
// SIG undefined FUN_142b40de0(void)

void FUN_142b40de0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)param_1[1];
  uVar3 = 0;
  uVar2 = *param_1;
  if (*(int *)(puVar1 + 8) != 0) {
    plVar4 = (longlong *)puVar1[6];
    if ((longlong *)puVar1[6] == (longlong *)0x0) {
      plVar4 = puVar1 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b40e3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(uVar3,uVar2,param_2);
  return;
}



// FUNCTION 142b40e90 FUN_142b40e90 body=110 status=ok
// SIG undefined FUN_142b40e90(void)

void FUN_142b40e90(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  local_18[1] = 0xd;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"payload_size",0x1a);
  (**(code **)(*param_3 + 0x18))(param_3,local_18,*param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b40f00 FUN_142b40f00 body=110 status=ok
// SIG undefined FUN_142b40f00(void)

void FUN_142b40f00(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  local_18[1] = 9;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"nat_type",0x12);
  (**(code **)(*param_3 + 8))(param_3,local_18,*param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142b40fb0 FUN_142b40fb0 body=32 status=ok
// SIG undefined FUN_142b40fb0(void)

undefined8 FUN_142b40fb0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b3d310(param_2,param_1);
  return param_1;
}



// FUNCTION 142b40fe0 FUN_142b40fe0 body=63 status=ok
// SIG undefined FUN_142b40fe0(void)

bool FUN_142b40fe0(longlong param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  return *(double *)(param_1 + 0x2b8) <= (double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0
  ;
}



// FUNCTION 142b41020 FUN_142b41020 body=615 status=ok
// SIG undefined FUN_142b41020(void)

undefined1 FUN_142b41020(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int local_res8 [2];
  undefined ***local_res10;
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  undefined8 local_38;
  
  local_48 = (longlong *)param_2[1];
  local_50 = (longlong *)*param_2;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)(param_1 + 0x140);
  local_58 = &PTR_FUN_143f740c8;
  local_40 = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
    if ((local_50 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*local_50 + 0x20))(local_50), plVar4 = local_50, cVar6 == '\0')) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (**(code **)(*local_50 + 0x18))(local_50);
      if (uVar7 < 4) {
        pbVar8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4);
        uVar7 = (uint)*pbVar8;
      }
      else {
        pcVar3 = *(code **)(*plVar4 + 0x10);
        if (uVar7 < 8) {
          puVar9 = (uint *)(*pcVar3)();
          uVar7 = *puVar9;
        }
        else {
          puVar10 = (undefined8 *)(*pcVar3)(plVar4);
          uVar7 = (int)((ulonglong)*puVar10 >> 0x20) * 0x17 + (int)*puVar10;
        }
      }
    }
    lVar11 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar11 = param_1 + 0x178;
    }
    iVar12 = *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x188) - 1U & (longlong)(int)uVar7) * 4
                     );
    if (iVar12 != -1) {
      lVar11 = *plVar2;
      do {
        lVar13 = (longlong)iVar12 * 0x40;
        plVar4 = *(longlong **)(lVar11 + 8 + lVar13);
        if ((((plVar4 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar4 + 0x20))(), cVar6 == '\0')) ||
            (local_50 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*local_50 + 0x20))(local_50), cVar6 == '\0')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        plVar4 = *(longlong **)(lVar11 + lVar13 + 8);
        if ((((plVar4 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar4 + 0x20))(), cVar6 == '\0')) &&
            ((local_50 == (longlong *)0x0 ||
             (cVar6 = (**(code **)(*local_50 + 0x20))(local_50), cVar6 == '\0')))) ||
           ((bVar5 && (cVar6 = (**(code **)*local_50)(local_50,*(undefined8 *)(lVar11 + lVar13 + 8))
                      , cVar6 != '\0')))) {
          if ((iVar12 != -1) && (lVar13 = lVar13 + *plVar2, lVar13 != 0)) goto LAB_142b41209;
          break;
        }
        lVar11 = *plVar2;
        iVar12 = *(int *)(lVar11 + 0x38 + lVar13);
      } while (iVar12 != -1);
    }
  }
  local_res10 = &local_58;
  FUN_142b31520(plVar2,local_res8,&local_res10,0);
  lVar13 = (longlong)local_res8[0] * 0x40 + *plVar2;
LAB_142b41209:
  local_58 = &PTR_FUN_143f740c8;
  if (local_40 != 0) {
    FMemory::Free();
  }
  plVar2 = local_48;
  local_58 = &PTR_FUN_143f73d18;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return *(undefined1 *)(lVar13 + 0x28);
}



// FUNCTION 142b41290 FUN_142b41290 body=154 status=ok
// SIG undefined FUN_142b41290(void)

undefined8 FUN_142b41290(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  cVar2 = FUN_142184920(param_1 + 0xe0);
  if (cVar2 == '\0') {
    plVar4 = *(longlong **)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_1 + 0x20);
    }
    plVar1 = plVar4 + (longlong)*(int *)(param_1 + 200) * 5;
    for (; plVar4 != plVar1; plVar4 = plVar4 + 5) {
      cVar2 = FUN_142184920(*plVar4 + 0x18,param_2,param_3);
      if (cVar2 != '\0') goto LAB_142b41313;
    }
    uVar3 = 0;
  }
  else {
LAB_142b41313:
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 142b41330 FUN_142b41330 body=708 status=ok
// SIG undefined FUN_142b41330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_142b41330(longlong param_1,undefined8 param_2,longlong *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  BOOL BVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_a8;
  longlong local_a0 [2];
  undefined1 local_90 [8];
  longlong *local_88;
  longlong local_80;
  undefined1 *local_78;
  float local_70;
  float local_6c;
  undefined1 *local_68;
  
  local_res8[0] = 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2b828) && (_Init_thread_header(&DAT_146b2b828), DAT_146b2b828 == -1))
  {
    QueryPerformanceCounter(&local_res20);
    _DAT_146b2b820 = (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0;
    _Init_thread_footer(&DAT_146b2b828);
  }
  QueryPerformanceCounter(&local_a8);
  fVar13 = (float)(((double)local_a8.QuadPart * DAT_1468b02f8 + 16777216.0) - _DAT_146b2b820);
  fVar3 = *DAT_146b2b720;
  FUN_142b48cf0(local_90);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x40);
  BVar9 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar9 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_78 = local_res8;
  local_68 = local_90;
  local_80 = param_1;
  local_70 = fVar13;
  local_6c = fVar13 - fVar3;
  (**(code **)(*DAT_146b2b6b8 + 0x78))(DAT_146b2b6b8,local_a0);
  lVar4 = *param_3;
  cVar7 = FUN_1421849c0(lVar4 + 0xe0,param_2);
  plVar11 = *(longlong **)(lVar4 + 0xc0);
  if (*(longlong **)(lVar4 + 0xc0) == (longlong *)0x0) {
    plVar11 = (longlong *)(lVar4 + 0x20);
  }
  plVar2 = plVar11 + (longlong)*(int *)(lVar4 + 200) * 5;
  for (; plVar11 != plVar2; plVar11 = plVar11 + 5) {
    lVar5 = *plVar11;
    cVar8 = FUN_142190080(lVar5);
    if (cVar8 != '\0') {
      if (*(longlong *)(lVar5 + 0x28) == 0xd3) {
LAB_142b414bf:
        if ((cVar7 != '\0') || (cVar8 = FUN_1421849c0(*plVar11 + 0x18,param_2), cVar8 != '\0')) {
          plVar12 = (longlong *)(*plVar11 + 0xa0);
          iVar10 = *(int *)(*plVar11 + 0xa8);
          if ((iVar10 == 0) || (iVar10 == 1)) {
            plVar12 = local_a0;
          }
          cVar8 = thunk_FUN_142b38f50(&local_80,lVar4,plVar11,plVar12);
          if (cVar8 == '\0') break;
        }
      }
      else if ((*(int *)(lVar5 + 0x88) != 0) && (*(int *)(lVar5 + 0x88) != 1)) {
        iVar10 = *(int *)(lVar5 + 0x98) + -1;
        if (*(int *)(lVar5 + 0x98) == 0) {
          iVar10 = 0;
        }
        if (iVar10 != 0) goto LAB_142b414bf;
      }
    }
  }
  if (local_a0[0] != 0) {
    FMemory::Free();
  }
  LeaveCriticalSection(lpCriticalSection);
  uVar6 = local_res8[0];
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_88 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142b41600 FUN_142b41600 body=608 status=ok
// SIG undefined FUN_142b41600(void)

void FUN_142b41600(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_88 [4];
  code *local_68;
  undefined4 uStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  longlong local_28 [2];
  
  if (*(int *)(param_1 + 0x468) == 1) {
    iVar6 = 0;
    plVar8 = (longlong *)FUN_142b49cd0(param_1,local_58,&DAT_146b2ac50);
    plVar2 = (longlong *)plVar8[1];
    lVar11 = *plVar8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (lVar11 != 0) {
      local_68 = FUN_142b4e2a0;
      uStack_60 = 0;
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      local_48 = 0;
      uStack_40 = 0;
      uVar9 = FUN_142b30ff0(local_38,param_1,&local_68);
      iVar6 = FUN_142ad1940(lVar11,param_1 + 0x20,uVar9,local_88,local_88 + 2,&local_48);
      if (local_88[0] != 0) {
        FMemory::Free();
      }
      if (local_88[2] != 0) {
        FMemory::Free();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar2 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    if ((iVar6 < 1) && (*(int *)(param_1 + 0x468) == 1)) {
      plVar2 = (longlong *)(param_1 + 0x470);
      *(undefined4 *)(param_1 + 0x468) = 3;
      if (plVar2 != local_28) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        *plVar2 = 0;
        *(undefined8 *)(param_1 + 0x478) = 0;
      }
      *(undefined8 *)(param_1 + 0x480) = 0;
      bVar4 = false;
      *(undefined4 *)(param_1 + 0x488) = 0x41f00000;
      *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
      iVar6 = *(int *)(param_1 + 0x164);
      iVar7 = *(int *)(param_1 + 0x158) + -1;
      lVar11 = (longlong)iVar7;
      if (-1 < iVar7) {
        lVar10 = lVar11 << 4;
        bVar4 = false;
        do {
          lVar3 = *(longlong *)(param_1 + 0x150);
          if (((*(int *)(lVar10 + 8 + lVar3) == 0) ||
              (plVar2 = *(longlong **)(lVar10 + lVar3), plVar2 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar2 + 0x40))(plVar2,1), cVar5 == '\0')) {
            bVar4 = true;
          }
          lVar10 = lVar10 + -0x10;
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
        iVar6 = *(int *)(param_1 + 0x164);
      }
      *(int *)(param_1 + 0x164) = iVar6 + -1;
      if (bVar4) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(param_1 + 0x150),0);
      }
    }
  }
  return;
}



// FUNCTION 142b41860 RemoveSection body=28 status=ok
// SIG undefined RemoveSection(void)

void UMovieScene3DConstraintTrack::RemoveSection(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  FUN_142b34730(param_1 + 0x58,local_res8);
  return;
}



// FUNCTION 142b41880 FUN_142b41880 body=405 status=ok
// SIG undefined FUN_142b41880(void)

void FUN_142b41880(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined8 local_38;
  longlong *plStack_30;
  
  local_res8 = param_2;
  FUN_140d60b10(param_1 + 0x2b8,&local_res8);
  plVar9 = *(longlong **)(param_1 + 0x2a8);
  plVar8 = plVar9 + (longlong)*(int *)(param_1 + 0x2b0) * 2;
  for (; plVar9 != plVar8; plVar9 = plVar9 + 2) {
    if ((*(longlong *)(*plVar9 + 0x120) != 0) &&
       (cVar6 = (*(code *)**(undefined8 **)*param_2)(), cVar6 != '\0')) {
      lVar4 = *plVar9;
      puVar7 = (undefined8 *)(lVar4 + 0x120);
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      if (puVar7 != &local_38) {
        *puVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar4 + 0x128,&plStack_30);
        plVar5 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_30 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_30)(plStack_30);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_30 + 8))(plStack_30,1);
            }
          }
        }
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 600);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
  }
  plVar9 = *(longlong **)(param_1 + 0x218);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
  }
  plVar9 = *(longlong **)(param_1 + 0x228);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    local_res10 = param_2;
    FUN_142b34570(*(longlong *)(param_1 + 0x238) + 0x38,&local_res10);
  }
  plVar9 = *(longlong **)(param_1 + 0x268);
  if (plVar9 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b41a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
    return;
  }
  return;
}



// FUNCTION 142b41a20 RemoveSection body=28 status=ok
// SIG undefined RemoveSection(void)

void UMovieScene3DConstraintTrack::RemoveSection(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  FUN_142b34380(param_1 + 0x58,local_res8);
  return;
}



// FUNCTION 142b41a40 FUN_142b41a40 body=603 status=ok
// SIG undefined FUN_142b41a40(void)

void FUN_142b41a40(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined **local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  plVar4 = (longlong *)param_2[1];
  local_f0 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_f8 = &PTR_FUN_143f740c8;
  local_e0 = 0;
  local_d8 = 0;
  local_e8 = plVar4;
  FUN_142b65ef0(param_1 + 0x140,&local_f8);
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
  plVar4 = (longlong *)param_2[1];
  local_c8 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_d0 = &PTR_FUN_143f740c8;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = plVar4;
  FUN_142b66300(param_1 + 0xf0,&local_d0);
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
  plVar4 = (longlong *)param_2[1];
  local_a0 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_a8 = &PTR_FUN_143f740c8;
  local_90 = 0;
  local_88 = 0;
  local_98 = plVar4;
  FUN_142b66040(param_1 + 0xa0,&local_a8);
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
  plVar4 = (longlong *)param_2[1];
  local_78 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_80 = &PTR_FUN_143f740c8;
  local_68 = 0;
  local_60 = 0;
  local_70 = plVar4;
  FUN_142b66300(param_1 + 400,&local_80);
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
  plVar4 = (longlong *)param_2[1];
  local_50 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_58 = &PTR_FUN_143f740c8;
  local_40 = 0;
  local_38 = 0;
  local_48 = plVar4;
  FUN_142b661a0(param_1 + 0x1e0,&local_58);
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



// FUNCTION 142b41ca0 FUN_142b41ca0 body=121 status=ok
// SIG undefined FUN_142b41ca0(void)

void FUN_142b41ca0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x28),0,0);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((*(int *)(param_1 + 0x40) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x38),0,0);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 142b41d20 FUN_142b41d20 body=95 status=ok
// SIG undefined FUN_142b41d20(void)

void FUN_142b41d20(longlong param_1)

{
  int iVar1;
  
  if (*(undefined **)(param_1 + 0x20) != &DAT_1457b7a5c) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20);
      iVar1 = *(int *)(param_1 + 0x28);
    }
    *(int *)(param_1 + 0x28) = iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x20);
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 142b41d80 FUN_142b41d80 body=404 status=ok
// SIG undefined FUN_142b41d80(void)

void FUN_142b41d80(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 local_18;
  longlong *local_10;
  
  iVar7 = 0;
  if (*(undefined **)(param_1 + 0x20) != &DAT_1457b7a5c) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar5 = iVar7;
    if (*(int *)(param_1 + 0x2c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20);
      iVar5 = *(int *)(param_1 + 0x28);
    }
    *(int *)(param_1 + 0x28) = iVar5;
    if (*(int *)(param_1 + 0x2c) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x20);
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_142b68c60(param_1 + 0x270);
  *(undefined1 *)(param_1 + 0x25b) = 0;
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x260) != &local_18) {
    *(undefined8 *)(param_1 + 0x260) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x268,&local_10);
    plVar6 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_10 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x370);
  if ((undefined *)*puVar2 != &DAT_1457b77e4) {
    *(undefined4 *)(param_1 + 0x378) = 0;
    if (*(int *)(param_1 + 0x37c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2);
      iVar7 = *(int *)(param_1 + 0x378);
    }
    *(int *)(param_1 + 0x378) = iVar7;
    if (*(int *)(param_1 + 0x37c) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
    }
  }
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x2c0,0);
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x2d0,0);
  plVar6 = *(longlong **)(param_1 + 0x1e0);
  plVar8 = plVar6 + (longlong)*(int *)(param_1 + 0x1e8) * 2;
  for (; plVar6 != plVar8; plVar6 = plVar6 + 2) {
    if (((int)plVar6[1] != 0) && (plVar3 = (longlong *)*plVar6, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      if (*plVar6 != 0) {
        lVar4 = FMemory::Realloc(*plVar6,0,0);
        *plVar6 = lVar4;
      }
      *(undefined4 *)(plVar6 + 1) = 0;
    }
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x1e0),0);
  return;
}



// FUNCTION 142b41f20 SetKineticWaterComponentDynamicNull body=12 status=ok
// SIG undefined SetKineticWaterComponentDynamicNull(void)

void UFmodSingleShipComponent::SetKineticWaterComponentDynamicNull(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  return;
}



// FUNCTION 142b41f30 FUN_142b41f30 body=399 status=ok
// SIG undefined FUN_142b41f30(void)

void FUN_142b41f30(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  User *pUVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_28;
  longlong *local_20;
  
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x310)) {
    lVar11 = 0;
    do {
      puVar3 = *(undefined8 **)(*(longlong *)(lVar11 + *(longlong *)(param_1 + 0x308)) + 0x260);
      if ((puVar3 != (undefined8 *)0x0) &&
         (cVar7 = (**(code **)*puVar3)(puVar3,*param_2), cVar7 != '\0')) {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar9 * 0x10);
        pUVar4 = *(User **)(lVar11 + 8);
        if (pUVar4 != (User *)0x0) {
          bifrost::session::_guard_xfg_dispatch_icall_nop(pUVar4);
          *(undefined8 *)(lVar11 + 8) = 0;
        }
        TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_1 + 0x308,iVar9,1,1);
        FUN_142b68d30(param_1,param_2);
        local_28 = *param_2;
        local_20 = (longlong *)param_2[1];
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
        bVar6 = false;
        iVar9 = *(int *)(param_1 + 0x84);
        iVar8 = *(int *)(param_1 + 0x78) + -1;
        lVar11 = (longlong)iVar8;
        if (-1 < iVar8) {
          lVar10 = lVar11 << 4;
          bVar6 = false;
          do {
            if (((*(int *)(lVar10 + 8 + *(longlong *)(param_1 + 0x70)) == 0) ||
                (plVar5 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x70)),
                plVar5 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar5 + 0x40))(plVar5,&local_28), cVar7 == '\0')) {
              bVar6 = true;
            }
            lVar10 = lVar10 + -0x10;
            lVar11 = lVar11 + -1;
          } while (-1 < lVar11);
          iVar9 = *(int *)(param_1 + 0x84);
        }
        *(int *)(param_1 + 0x84) = iVar9 + -1;
        if (bVar6) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x70,0);
        }
        plVar5 = local_20;
        if (local_20 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = local_20 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 != 1) {
          return;
        }
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 != 1) {
          return;
        }
        (**(code **)(*plVar5 + 8))(plVar5,1);
        return;
      }
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + 0x10;
    } while (iVar9 < *(int *)(param_1 + 0x310));
  }
  return;
}



// FUNCTION 142b420c0 FUN_142b420c0 body=161 status=ok
// SIG undefined FUN_142b420c0(void)

undefined8 FUN_142b420c0(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_142b655c0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142b42170 FUN_142b42170 body=1054 status=ok
// SIG undefined FUN_142b42170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b42170(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 (*pauVar4) [16];
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  longlong local_198;
  longlong *plStack_190;
  undefined1 local_188 [16];
  longlong local_178;
  longlong *local_170;
  undefined1 local_168 [8];
  void *local_160;
  int local_158;
  int local_154;
  void *local_150;
  int local_148;
  int local_144;
  code *local_138;
  undefined8 uStack_130;
  void *local_128;
  ulonglong local_120;
  void *local_118;
  ulonglong local_110;
  longlong local_108 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined **local_98;
  undefined **local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  FUN_142b47930(param_1,&local_198,param_2);
  lVar10 = local_198;
  if (((local_198 == 0) || (*(char *)(local_198 + 0x14) == '\0')) ||
     (*(int *)(local_198 + 0xc) - *(int *)(local_198 + 0x10) < param_3)) {
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0xf0,1);
  }
  else {
    FUN_142b45fe0(param_1,&local_178);
    if (local_178 == 0) {
      TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0xf0,2);
    }
    else {
      local_188._8_8_ = plStack_190;
      local_188._0_8_ = local_198;
      uVar6 = (undefined4)((ulonglong)local_198 >> 0x20);
      uVar7 = (undefined4)((ulonglong)plStack_190 >> 0x20);
      pauVar4 = (undefined1 (*) [16])(param_1 + 0x2e8);
      if (plStack_190 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_190 + 1) = (int)plStack_190[1] + 1;
        UNLOCK();
        lVar10 = local_198;
      }
      if (&local_188 != pauVar4) {
        local_188 = *pauVar4;
        *(int *)*pauVar4 = (int)local_198;
        *(undefined4 *)(param_1 + 0x2ec) = uVar6;
        *(int *)(param_1 + 0x2f0) = (int)plStack_190;
        *(undefined4 *)(param_1 + 0x2f4) = uVar7;
        local_48 = (int)local_198;
        uStack_44 = uVar6;
        uStack_40 = (int)plStack_190;
        uStack_3c = uVar7;
      }
      uVar11 = local_188._8_8_;
      if ((undefined8 *)local_188._8_8_ != (undefined8 *)0x0) {
        LOCK();
        piVar3 = (int *)(local_188._8_8_ + 8);
        iVar9 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        lVar10 = local_198;
        if (iVar9 == 1) {
          (*(code *)**(undefined8 **)local_188._8_8_)(local_188._8_8_);
          LOCK();
          piVar3 = (int *)(uVar11 + 0xc);
          iVar9 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          lVar10 = local_198;
          if (iVar9 == 1) {
            (**(code **)(*(longlong *)local_188._8_8_ + 8))(local_188._8_8_,1);
            lVar10 = local_198;
          }
        }
      }
      *(int *)(param_1 + 0x2e0) = param_3;
      FUN_142b0d960(local_168);
      FString::PrintfImpl(&local_128,&DAT_1457b5a48,*(undefined4 *)(lVar10 + 8));
      pvVar8 = local_128;
      iVar9 = (int)local_120;
      local_158 = iVar9;
      if ((iVar9 != 0) || (local_154 != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_160,local_120 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(local_160,pvVar8,(longlong)iVar9 * 2);
      }
      if (local_128 != (void *)0x0) {
        FMemory::Free(local_128);
      }
      FString::PrintfImpl(&local_118,&DAT_1457b5a64,param_3);
      pvVar8 = local_118;
      iVar9 = (int)local_110;
      local_148 = iVar9;
      if ((iVar9 != 0) || (local_144 != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_150,local_110 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(local_150,pvVar8,(longlong)iVar9 * 2);
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free(local_118);
      }
      FUN_142b0d8d0(local_d8);
      FString::operator=(local_c8,&local_160);
      FString::operator=(local_b8,&local_150);
      lVar10 = FUN_142b45e90();
      uVar11 = FUN_142b48440(*(undefined8 *)(lVar10 + 0x18),local_108);
      FString::operator=(local_a8,uVar11);
      if (local_108[0] != 0) {
        FMemory::Free();
      }
      uStack_130 = (ulonglong)uStack_130._4_4_ << 0x20;
      local_98 = &PTR_FUN_14571eb70;
      local_138 = FUN_142b4cb80;
      local_90 = &PTR_FUN_14571eb50;
      local_f8 = 0;
      uStack_f0 = 0;
      FString::FString(local_88,local_c8);
      FString::FString(local_78,local_b8);
      FString::FString(local_68,local_a8);
      uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x60,local_e8);
      uVar11 = FUN_1404f5700(local_58,uVar11,&local_138);
      local_1a8 = &local_f8;
      iVar9 = FUN_142abbc70(local_178,param_1 + 0x20,&local_98,uVar11);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e0 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      if (iVar9 == 0) {
        TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0xf0,2);
      }
      FUN_142b0ee90(local_d8);
      FClothingSimulationContextCommon::~FClothingSimulationContextCommon(local_168);
    }
    plVar1 = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_170 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        iVar9 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
  }
  plVar1 = plStack_190;
  if (plStack_190 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_190 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_190)(plStack_190);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar9 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_190 + 8))(plStack_190,1);
      }
    }
  }
  return;
}



// FUNCTION 142b42590 FUN_142b42590 body=174 status=ok
// SIG undefined FUN_142b42590(void)

void FUN_142b42590(undefined8 param_1,undefined8 param_2)

{
  undefined **local_b8 [18];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_142194380(param_1,100,1,0,0);
  FArchive::FArchive(local_b8);
  local_28 = 0;
  local_b8[0] = &PTR_FUN_143f4a100;
  local_18 = 0;
  local_20 = param_1;
  FArchive::SetIsSaving(local_b8,1);
  FArchive::SetIsPersistent(local_b8,1);
  FUN_1425da060(local_b8,param_2);
  FArchive::~FArchive(local_b8);
  return;
}



// FUNCTION 142b42640 FUN_142b42640 body=85 status=ok
// SIG undefined FUN_142b42640(void)

undefined8 * FUN_142b42640(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1457c5810;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142b426a0 FUN_142b426a0 body=102 status=ok
// SIG undefined FUN_142b426a0(void)

undefined8 * FUN_142b426a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1457c5758;
    FString::FString(puVar1 + 1,param_1 + 8);
    FString::FString(puVar1 + 3,param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142b42710 FUN_142b42710 body=184 status=ok
// SIG undefined FUN_142b42710(void)

int FUN_142b42710(undefined8 param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong local_18;
  longlong *local_10;
  
  FUN_142b47930(param_1,&local_18,param_2);
  plVar5 = local_10;
  if (local_18 == 0) {
    iVar6 = 0;
  }
  else if (*(char *)(local_18 + 0x14) == '\0') {
    iVar6 = 1;
  }
  else if (param_3 == '\0') {
    iVar6 = (*(int *)(local_18 + 0xc) - *(int *)(local_18 + 0x10)) - *(int *)(local_18 + 0x28);
  }
  else {
    iVar6 = *(int *)(local_18 + 0xc) - *(int *)(local_18 + 0x10);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return iVar6;
  }
  return iVar6;
}



// FUNCTION 142b427d0 CreateCopy body=94 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_cf21ef6a52e6e29ca60cabbbc1a30be4>_>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1457c5948;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_1457c5990;
  }
  return;
}



// FUNCTION 142b42830 FUN_142b42830 body=64 status=ok
// SIG undefined FUN_142b42830(void)

void FUN_142b42830(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1457c59d8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 142b42870 FUN_142b42870 body=74 status=ok
// SIG undefined FUN_142b42870(void)

void FUN_142b42870(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1457c5828;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_1457c5870;
  }
  return;
}



// FUNCTION 142b428c0 FUN_142b428c0 body=74 status=ok
// SIG undefined FUN_142b428c0(void)

void FUN_142b428c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1457c58b8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_1457c5900;
  }
  return;
}



// FUNCTION 142b42910 FUN_142b42910 body=116 status=ok
// SIG undefined FUN_142b42910(void)

void FUN_142b42910(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)operator_new(0x40);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_GetPoolName_1457c5780;
    puVar5[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar5[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar2;
    *(undefined4 *)(puVar5 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x24) = uVar4;
    FString::FString(puVar5 + 5,param_1 + 0x28);
    puVar5[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar5 = &PTR_GetPoolName_1457c57c8;
  }
  return;
}



// FUNCTION 142b42990 FUN_142b42990 body=734 status=ok
// SIG undefined FUN_142b42990(void)

undefined8 * FUN_142b42990(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  plVar2 = (longlong *)(param_1 + 0x2c8);
  plVar8 = (longlong *)0x0;
  plVar6 = (longlong *)*plVar2;
  plVar10 = plVar6 + (longlong)*(int *)(param_1 + 0x2d0) * 2;
  for (; plVar6 != plVar10; plVar6 = plVar6 + 2) {
    if ((*(longlong *)(*plVar6 + 0x38) != 0) &&
       (cVar3 = (*(code *)**(undefined8 **)*param_3)(), cVar3 != '\0')) {
      lVar5 = *plVar6;
      plVar6 = (longlong *)plVar6[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_30 = plVar6;
      if (lVar5 != 0) {
        *param_2 = 0;
        param_2[1] = 0;
        if (plVar6 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return param_2;
        }
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 != 1) {
          return param_2;
        }
        (**(code **)(*plVar6 + 8))(plVar6,1);
        return param_2;
      }
      goto LAB_142b429f6;
    }
  }
  local_30 = (longlong *)0x0;
LAB_142b429f6:
  lVar5 = operator_new(0x338);
  plVar6 = plVar8;
  if (lVar5 != 0) {
    plVar6 = (longlong *)FUN_142b35820(lVar5);
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar10 = plVar8;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
    plVar7[2] = (longlong)plVar6;
    plVar10 = plVar7;
  }
  plVar7 = plVar6 + 3;
  if (plVar6 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  local_20 = plVar10;
  if (plVar7 != (longlong *)0x0) {
    if ((*plVar7 != 0) && (plVar7[1] != 0)) {
      piVar1 = (int *)(plVar7[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_142b42b5e;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)plVar6;
    plVar8 = (longlong *)plVar7[1];
    if (plVar10 != plVar8) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar7[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar7[1] = (longlong)plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
LAB_142b42b5e:
  local_28 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,&local_20);
  plVar8 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  plVar8 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x2d0);
  *(int *)(param_1 + 0x2d0) = iVar4 + 1;
  if (*(int *)(param_1 + 0x2d4) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar4);
  }
  plVar10 = local_30;
  puVar9 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar2);
  *puVar9 = plVar6;
  puVar9[1] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar8 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_30;
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      plVar8 = local_30;
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  *param_2 = plVar6;
  param_2[1] = plVar8;
  return param_2;
}



// FUNCTION 142b42c70 FUN_142b42c70 body=492 status=ok
// SIG undefined FUN_142b42c70(void)

longlong * FUN_142b42c70(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 **ppuVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *local_28;
  longlong *local_20;
  
  ppuVar2 = (undefined8 **)(param_1 + 0x2e8);
  if (*ppuVar2 != (undefined8 *)0x0) goto LAB_142b42e34;
  puVar5 = (undefined8 *)operator_new(0x70);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    FUN_142b354e0(puVar5);
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    *puVar5 = &PTR_FUN_1457c5128;
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar8 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)puVar5;
    plVar8 = plVar6;
  }
  plVar6 = puVar5 + 0xc;
  if (puVar5 == (undefined8 *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  local_28 = puVar5;
  local_20 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_142b42dc1;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)puVar5;
    plVar7 = (longlong *)plVar6[1];
    if (plVar8 != plVar7) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar6[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar6[1] = (longlong)plVar8;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
LAB_142b42dc1:
  if (ppuVar2 != &local_28) {
    *ppuVar2 = puVar5;
    local_28 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2f0,&local_20);
  }
  plVar8 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_20 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
LAB_142b42e34:
  *param_2 = (longlong)*ppuVar2;
  lVar3 = *(longlong *)(param_1 + 0x2f0);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142b42e60 FUN_142b42e60 body=1107 status=ok
// SIG undefined FUN_142b42e60(void)

undefined8 * FUN_142b42e60(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 local_res20 [2];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  
  plVar8 = (longlong *)0x0;
  local_res20[0] = 0;
  plVar5 = *(longlong **)(param_1 + 0x308);
  plVar10 = plVar5 + (longlong)*(int *)(param_1 + 0x310) * 2;
  for (; plVar5 != plVar10; plVar5 = plVar5 + 2) {
    puVar7 = *(undefined8 **)(*plVar5 + 0x260);
    if ((puVar7 != (undefined8 *)0x0) &&
       (cVar2 = (**(code **)*puVar7)(puVar7,*param_3), cVar2 != '\0')) {
      lVar4 = *plVar5;
      plVar5 = (longlong *)plVar5[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_70 = plVar5;
      if (lVar4 != 0) {
        *param_2 = 0;
        param_2[1] = 0;
        if (plVar5 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar10 = plVar5 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 != 1) {
          return param_2;
        }
        (**(code **)(*plVar5 + 8))(plVar5,1);
        return param_2;
      }
      goto LAB_142b42ec8;
    }
  }
  local_70 = (longlong *)0x0;
LAB_142b42ec8:
  lVar4 = operator_new(0x490);
  plVar5 = plVar8;
  plVar10 = plVar8;
  if (lVar4 != 0) {
    local_58 = *param_3;
    local_50 = (longlong *)param_3[1];
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)FUN_142b35f90(lVar4,&local_58);
    plVar10 = (longlong *)0x1;
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar9 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)plVar5;
    plVar9 = plVar6;
  }
  plVar6 = plVar5 + 0xc;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  local_60 = plVar9;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_142b4305a;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar5;
    plVar8 = (longlong *)plVar6[1];
    if (plVar9 != plVar8) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar6[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar6[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_142b4305a:
  local_68 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_70,&local_60);
  plVar8 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_60 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  plVar8 = local_50;
  if ((plVar10 != (longlong *)0x0) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_50 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  plVar10 = local_70;
  if (plVar5 != (longlong *)0x0) {
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
      UNLOCK();
    }
    plVar8 = plVar5 + 0x21;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    plVar9 = plVar10;
    local_48 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      *plVar6 = (longlong)&PTR_GetPoolName_1457c5948;
      plVar6[1] = param_1;
      plVar6[2] = (longlong)plVar5;
      plVar6[3] = (longlong)plVar10;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar4;
      *plVar6 = (longlong)&PTR_GetPoolName_1457c5990;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
      (**(code **)(*plVar6 + 0x20))(plVar6,local_res20);
      iVar3 = (int)plVar5[0x22];
      *(int *)(plVar5 + 0x22) = iVar3 + 1;
      if (*(int *)((longlong)plVar5 + 0x114) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar3);
      }
      puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar8);
      *puVar7 = plVar6;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar10 = local_70;
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
        plVar10 = local_70;
      }
    }
    plVar8 = (longlong *)0x0;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      plVar8 = local_70;
    }
    iVar3 = *(int *)(param_1 + 0x310);
    *(int *)(param_1 + 0x310) = iVar3 + 1;
    if (*(int *)(param_1 + 0x314) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x308,iVar3);
    }
    plVar9 = local_70;
    puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x308));
    *puVar7 = plVar5;
    puVar7[1] = plVar8;
    plVar10 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar8 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plVar8 = local_70;
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
        plVar8 = local_70;
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
      plVar10 = local_70;
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  *param_2 = plVar5;
  param_2[1] = plVar10;
  return param_2;
}



// FUNCTION 142b432c0 FUN_142b432c0 body=661 status=ok
// SIG undefined FUN_142b432c0(void)

void FUN_142b432c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  ulonglong local_70;
  code *local_68;
  undefined4 uStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  longlong local_28 [2];
  
  if (*(int *)(param_1 + 0x468) == 1) {
    iVar6 = 0;
    plVar8 = (longlong *)FUN_142b49cd0(param_1,local_58,&DAT_146b2ac50);
    plVar2 = (longlong *)plVar8[1];
    lVar11 = *plVar8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (lVar11 != 0) {
      lVar9 = FUN_142b45e90();
      FUN_142b47e60(*(undefined8 *)(lVar9 + 0x18),&local_78);
      local_68 = FUN_142b4c260;
      uStack_60 = 0;
      local_88 = (void *)0x0;
      iVar6 = (int)local_70;
      local_48 = 0;
      uStack_40 = 0;
      local_80 = iVar6;
      if (iVar6 == 0) {
        local_7c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_70 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_88,local_78,(longlong)iVar6 * 2);
      }
      uVar10 = FUN_142b30ff0(local_38,param_1,&local_68);
      iVar6 = FUN_142abbf50(lVar11,param_1 + 0x20,&local_88,uVar10,&local_48);
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar2 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    if (iVar6 < 1) {
      if (*(int *)(param_1 + 0x468) == 1) {
        plVar2 = (longlong *)(param_1 + 0x470);
        *(undefined4 *)(param_1 + 0x468) = 3;
        if (plVar2 != local_28) {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          *plVar2 = 0;
          *(undefined8 *)(param_1 + 0x478) = 0;
        }
        *(undefined8 *)(param_1 + 0x480) = 0;
        *(undefined4 *)(param_1 + 0x488) = 0x41f00000;
        bVar4 = false;
        *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
        iVar6 = *(int *)(param_1 + 0x164);
        iVar7 = *(int *)(param_1 + 0x158) + -1;
        lVar11 = (longlong)iVar7;
        if (-1 < iVar7) {
          lVar9 = lVar11 << 4;
          bVar4 = false;
          do {
            lVar3 = *(longlong *)(param_1 + 0x150);
            if (((*(int *)(lVar9 + 8 + lVar3) == 0) ||
                (plVar2 = *(longlong **)(lVar9 + lVar3), plVar2 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar2 + 0x40))(plVar2,1), cVar5 == '\0')) {
              bVar4 = true;
            }
            lVar9 = lVar9 + -0x10;
            lVar11 = lVar11 + -1;
          } while (-1 < lVar11);
          iVar6 = *(int *)(param_1 + 0x164);
        }
        *(int *)(param_1 + 0x164) = iVar6 + -1;
        if (bVar4) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                    ((longlong *)(param_1 + 0x150),0);
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x488) = 0;
      *(undefined4 *)(param_1 + 0x468) = 1;
    }
  }
  return;
}



// FUNCTION 142b43560 FUN_142b43560 body=9 status=ok
// SIG undefined FUN_142b43560(void)

void FUN_142b43560(longlong param_1)

{
  FUN_142ab88b0(param_1 + 0x10);
  return;
}



// FUNCTION 142b43570 FUN_142b43570 body=20 status=ok
// SIG undefined FUN_142b43570(void)

void FUN_142b43570(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_142b3d720(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 142b43590 FUN_142b43590 body=20 status=ok
// SIG undefined FUN_142b43590(void)

void FUN_142b43590(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_142b3db70(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 142b435b0 DestroyObject body=80 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FFileEntry,SharedPointerInternals::DefaultDeleter<FFileEntry>_>
     ::DestroyObject(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[4] != 0) {
      FMemory::Free();
    }
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x38);
    return;
  }
  return;
}



// FUNCTION 142b43600 FUN_142b43600 body=68 status=ok
// SIG undefined FUN_142b43600(void)

void FUN_142b43600(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x48) = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar1);
    FMemory::operator_delete(lVar1,0x50);
    return;
  }
  return;
}



// FUNCTION 142b43650 FUN_142b43650 body=97 status=ok
// SIG undefined FUN_142b43650(void)

void FUN_142b43650(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 9) = 0;
    if (plVar1[8] != 0) {
      FMemory::Free();
    }
    FUN_142b43a20(plVar1,0);
    if (plVar1[4] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x50);
    return;
  }
  return;
}



// FUNCTION 142b436c0 FUN_142b436c0 body=397 status=ok
// SIG undefined FUN_142b436c0(void)

ulonglong FUN_142b436c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  ulonglong in_RAX;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_48 [2];
  longlong *local_38;
  longlong *local_30;
  code *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((*(int *)(param_1 + 0x94) == 0) && (1 < *(int *)(param_2 + 8))) {
    plVar5 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar5 + 0x40))(plVar5,&local_38);
    (**(code **)(*local_38 + 0x50))(local_38,param_2);
    local_48[1] = 4;
    local_48[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],&DAT_1457c2cc0,8);
    (**(code **)(*local_38 + 0x48))(local_38,local_48);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    local_28 = FUN_142b58ae0;
    uStack_20 = 0;
    local_18 = 0x42b58ae0;
    uStack_14 = 1;
    uStack_10 = 0;
    uStack_c = uStack_1c;
    uVar6 = (**(code **)(*local_38 + 0x88))();
    FUN_142b30690(uVar6,param_1,&local_18);
    local_28 = FUN_142b589b0;
    uStack_20 = 0;
    uVar6 = (**(code **)(*local_38 + 0x80))();
    FUN_142b30780(uVar6,param_1,&local_28);
    cVar4 = (**(code **)(*local_38 + 0x78))();
    if (cVar4 != '\0') {
      *(undefined4 *)(param_1 + 0x94) = 1;
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    return (ulonglong)(cVar4 != '\0');
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142b43850 FUN_142b43850 body=461 status=ok
// SIG undefined FUN_142b43850(void)

void FUN_142b43850(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_142b43921;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_142b43921:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      plVar6 = (longlong *)((longlong)iStack_2c * 0x40 + *param_1);
      if (plVar6[4] != 0) {
        FMemory::Free();
      }
      if (plVar6[2] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 142b43a20 FUN_142b43a20 body=502 status=ok
// SIG undefined FUN_142b43a20(void)

void FUN_142b43a20(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_142b43af1;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_142b43af1:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      plVar6 = (longlong *)((longlong)iStack_2c * 0x68 + *param_1);
      *(undefined4 *)(plVar6 + 0xb) = 0;
      if (plVar6[10] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(plVar6 + 2,0);
      if (plVar6[6] != 0) {
        FMemory::Free();
      }
      if (plVar6[2] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 142b43c20 FUN_142b43c20 body=212 status=ok
// SIG undefined FUN_142b43c20(void)

void FUN_142b43c20(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  BOOL BVar6;
  int iVar7;
  longlong *plVar8;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x40);
    BVar6 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar6 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar7 = *(int *)(param_1 + 0x38);
    if (iVar7 != 0) {
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
      do {
        plVar4 = (longlong *)*plVar8;
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
        plVar8 = plVar8 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                ((longlong *)(param_1 + 0x30),0);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 142b43d10 FUN_142b43d10 body=45 status=ok
// SIG undefined FUN_142b43d10(void)

undefined8 * FUN_142b43d10(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_28 [32];
  
  puVar3 = (undefined8 *)(**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),local_28);
  uVar2 = puVar3[1];
  uVar1 = *(undefined4 *)(puVar3 + 2);
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar1;
  return param_2;
}



// FUNCTION 142b43d40 FUN_142b43d40 body=136 status=ok
// SIG undefined FUN_142b43d40(void)

void FUN_142b43d40(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar6 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  lVar4 = *(longlong *)(param_1 + 8);
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar6)(iStack_18 + lVar4,&local_38);
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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



// FUNCTION 142b43dd0 FUN_142b43dd0 body=232 status=ok
// SIG undefined FUN_142b43dd0(void)

void FUN_142b43dd0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  local_48 = *param_3;
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar6 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  lVar4 = *(longlong *)(param_1 + 8);
  local_40 = param_3[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar6)(iStack_18 + lVar4,&local_38,&local_48);
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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



// FUNCTION 142b43ec0 FUN_142b43ec0 body=228 status=ok
// SIG undefined FUN_142b43ec0(void)

void FUN_142b43ec0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 local_48 [24];
  code *local_30;
  undefined8 uStack_28;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar9 = (longlong *)0x0;
  plVar8 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar2[1];
    bVar10 = iVar6 == 0;
    if (bVar10) {
      *(int *)(plVar2 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar8 = plVar9, !bVar10) {
      LOCK();
      bVar10 = iVar6 == (int)plVar2[1];
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar8 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar9 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_30 = pcVar3;
  uStack_28 = uVar4;
  uVar7 = FString::FString(local_48,param_1 + 0x28);
  (*pcVar3)((longlong)(int)uVar4 + (longlong)plVar9,param_2,param_3,param_4,uVar7);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 142b43fb0 FUN_142b43fb0 body=288 status=ok
// SIG undefined FUN_142b43fb0(void)

ulonglong FUN_142b43fb0(longlong *param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  ulonglong in_RAX;
  undefined8 local_18;
  longlong local_10;
  
  if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
     (in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))(), (char)in_RAX != '\0')) {
    if ((int)param_1[1] == 0) {
      param_1 = (longlong *)0x0;
    }
    else {
      param_1 = (longlong *)*param_1;
    }
    local_18 = *param_3;
    local_10 = param_3[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    bVar6 = (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_18,param_4,param_5,param_6);
    plVar4 = (longlong *)param_3[1];
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
    return (ulonglong)bVar6;
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar7 = (int)lVar5 - 1;
    in_RAX = (ulonglong)uVar7;
    if (uVar7 == 0) {
      in_RAX = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        in_RAX = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142b440d0 FUN_142b440d0 body=20 status=ok
// SIG undefined FUN_142b440d0(void)

undefined1 FUN_142b440d0(longlong param_1)

{
  FUN_142b3adc0(param_1 + 8);
  return 1;
}



// FUNCTION 142b440f0 FUN_142b440f0 body=205 status=ok
// SIG undefined FUN_142b440f0(void)

undefined8 FUN_142b440f0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  local_38 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar5 = *(longlong *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar6 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_30 = plVar4;
  (*pcVar6)(iStack_18 + lVar5,&local_38);
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
  return 1;
}



// FUNCTION 142b441c0 FUN_142b441c0 body=376 status=ok
// SIG undefined FUN_142b441c0(void)

undefined8 FUN_142b441c0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  local_48 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_2[1];
  local_38 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar6 = *(longlong *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar7 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_40 = plVar4;
  local_30 = plVar5;
  (*pcVar7)(iStack_18 + lVar6,&local_38,&local_48);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return 1;
}



// FUNCTION 142b44340 FUN_142b44340 body=374 status=ok
// SIG undefined FUN_142b44340(void)

undefined8 FUN_142b44340(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 local_58 [24];
  code *local_40;
  undefined8 uStack_38;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar6 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar7[1];
    bVar11 = iVar4 == 0;
    if (bVar11) {
      *(int *)(plVar7 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar8, !bVar11) {
      LOCK();
      bVar11 = iVar4 == (int)plVar7[1];
      if (bVar11) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar11) {
        plVar6 = plVar7;
        if ((plVar7 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar6 = *(longlong **)(param_1 + 0x10);
          plVar10 = plVar6;
          if (plVar6 == (longlong *)0x0) goto LAB_142b44432;
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(plVar6 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          goto joined_r0x000142b4440f;
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar11 = iVar4 == 0;
      if (bVar11) {
        *(int *)(plVar7 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  uVar9 = 0;
  plVar7 = plVar6;
LAB_142b4439b:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return uVar9;
joined_r0x000142b4440f:
  plVar10 = plVar8;
  if (bVar11) goto LAB_142b44432;
  LOCK();
  bVar11 = iVar4 == (int)plVar6[1];
  if (bVar11) {
    *(int *)(plVar6 + 1) = iVar4 + 1;
  }
  UNLOCK();
  if (bVar11) {
    plVar10 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 8);
    }
    goto LAB_142b44432;
  }
  LOCK();
  iVar4 = (int)plVar6[1];
  bVar11 = iVar4 == 0;
  if (bVar11) {
    *(int *)(plVar6 + 1) = 0;
    iVar4 = 0;
  }
  UNLOCK();
  goto joined_r0x000142b4440f;
LAB_142b44432:
  pcVar2 = *(code **)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  local_40 = pcVar2;
  uStack_38 = uVar9;
  uVar5 = FString::FString(local_58,param_1 + 0x28);
  (*pcVar2)((longlong)(int)uVar9 + (longlong)plVar8,param_2,param_3,param_4,uVar5);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar10 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  uVar9 = 1;
  goto LAB_142b4439b;
}



// FUNCTION 142b444c0 FUN_142b444c0 body=945 status=ok
// SIG undefined FUN_142b444c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142b444c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  void *_Src;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  short *_Src_00;
  short *psVar9;
  undefined1 auStack_198 [32];
  short *local_178;
  int local_170;
  int local_16c;
  short local_168 [128];
  short *local_68;
  short *local_60;
  int local_58;
  ulonglong local_48;
  ulonglong uVar8;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  _Src = (void *)*param_3;
  iVar4 = *(int *)(param_3 + 1);
  _Src_00 = (short *)0x0;
  iVar6 = 0;
  if (*(char *)(((longlong)iVar4 - 1U) + (longlong)_Src) == '\0') {
    lVar5 = -1;
    local_68 = (short *)0x0;
    if (_Src == (void *)0x0) {
      local_60 = (short *)0x0;
      local_58 = 0;
    }
    else {
      uVar7 = 0xffffffffffffffff;
      do {
        uVar8 = uVar7;
        uVar7 = uVar8 + 1;
      } while (*(char *)((longlong)_Src + uVar7) != '\0');
      local_178 = (short *)((ulonglong)local_178 & 0xffffffff00000000);
      FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                (&local_178,0x7fffffff,_Src,uVar7 & 0xffffffff);
      local_58 = (int)local_178;
      uVar1 = (int)local_178 + 1;
      if (uVar1 < 0x81) {
        if (local_68 != (short *)0x0) {
          lVar3 = 0;
LAB_142b44723:
          local_68 = (short *)FMemory::Realloc(local_68,lVar3,0);
        }
      }
      else if ((local_68 != (short *)0x0) || (uVar1 != 0)) {
        lVar3 = (longlong)(int)uVar1 * 2;
        goto LAB_142b44723;
      }
      local_178 = local_168;
      if (local_68 != (short *)0x0) {
        local_178 = local_68;
      }
      local_60 = local_178;
      FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_178,uVar1,_Src,(int)uVar8 + 2);
    }
    psVar2 = local_60;
    local_178 = (short *)0x0;
    local_16c = 0;
    psVar9 = local_68;
    if ((local_60 != (short *)0x0) && (iVar6 = 0, *local_60 != 0)) {
      do {
        lVar5 = lVar5 + 1;
      } while (local_60[lVar5] != 0);
      iVar4 = (int)lVar5 + 1;
      local_170 = iVar4;
      if (0 < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
      }
      iVar6 = local_170;
      _Src_00 = local_178;
      FGenericPlatformString::Memcpy(local_178,psVar2,(longlong)iVar4 * 2);
      psVar9 = local_68;
    }
    goto joined_r0x000142b447d3;
  }
  local_178 = (short *)0x0;
  if (iVar4 == 0) {
    local_16c = 0;
    psVar9 = _Src_00;
  }
  else {
    local_170 = iVar4;
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_178,iVar4,0);
    psVar9 = local_178;
    _guard_xfg_dispatch_icall_nop(local_178,_Src,(longlong)iVar4);
    iVar4 = local_170;
  }
  local_170 = iVar4 + 1;
  if (local_16c < local_170) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_178,iVar4);
    psVar9 = local_178;
  }
  local_68 = (short *)0x0;
  lVar5 = -1;
  *(undefined1 *)((longlong)iVar4 + (longlong)psVar9) = 0;
  if (psVar9 == (short *)0x0) {
    local_60 = (short *)0x0;
    local_58 = 0;
  }
  else {
    uVar7 = 0xffffffffffffffff;
    do {
      uVar8 = uVar7;
      uVar7 = uVar8 + 1;
    } while (*(char *)((longlong)psVar9 + uVar7) != '\0');
    local_178 = (short *)((ulonglong)local_178 & 0xffffffff00000000);
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (&local_178,0x7fffffff,psVar9,uVar7 & 0xffffffff);
    local_58 = (int)local_178;
    uVar1 = (int)local_178 + 1;
    if (uVar1 < 0x81) {
      if (local_68 != (short *)0x0) {
        lVar3 = 0;
LAB_142b445e3:
        local_68 = (short *)FMemory::Realloc(local_68,lVar3,0);
      }
    }
    else if ((local_68 != (short *)0x0) || (uVar1 != 0)) {
      lVar3 = (longlong)(int)uVar1 * 2;
      goto LAB_142b445e3;
    }
    local_178 = local_168;
    if (local_68 != (short *)0x0) {
      local_178 = local_68;
    }
    local_60 = local_178;
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_178,uVar1,psVar9,(int)uVar8 + 2);
  }
  psVar2 = local_60;
  local_178 = (short *)0x0;
  local_16c = 0;
  if ((local_60 != (short *)0x0) && (iVar6 = 0, *local_60 != 0)) {
    do {
      lVar5 = lVar5 + 1;
    } while (local_60[lVar5] != 0);
    iVar4 = (int)lVar5 + 1;
    local_170 = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    }
    iVar6 = local_170;
    _Src_00 = local_178;
    FGenericPlatformString::Memcpy(local_178,psVar2,(longlong)iVar4 * 2);
  }
  if (local_68 != (short *)0x0) {
    FMemory::Free();
  }
joined_r0x000142b447d3:
  if (psVar9 != (short *)0x0) {
    FMemory::Free(psVar9);
  }
  *param_2 = 0;
  *(int *)(param_2 + 1) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar6,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src_00,(longlong)iVar6 * 2);
  }
  param_2[3] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[8] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  if (_Src_00 != (short *)0x0) {
    FMemory::Free(_Src_00);
  }
  return param_2;
}



// FUNCTION 142b44880 FUN_142b44880 body=1847 status=ok
// SIG undefined FUN_142b44880(void)

void FUN_142b44880(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  longlong *plVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  void *pvVar16;
  longlong lVar17;
  longlong *plVar18;
  int local_res18 [2];
  int local_res20 [2];
  void *local_168;
  int local_160;
  undefined4 local_15c;
  undefined **local_158;
  longlong *local_150;
  longlong *local_148;
  longlong local_140;
  undefined8 local_138;
  void *local_130;
  int local_128;
  undefined4 local_124;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong *plStack_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined ***local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [32];
  
  local_res18[0] = 0;
  if (DAT_146b2ade0 == 0) {
    FName::FName(local_88,"GbxSpark",1);
    FUN_14168dc80();
    FUN_141690010();
  }
  local_d8 = *(longlong *)(DAT_146b2ade0 + 0x18);
  plVar11 = *(longlong **)(local_d8 + 0x308);
  plVar18 = plVar11 + (longlong)*(int *)(local_d8 + 0x310) * 2;
  for (; plVar11 != plVar18; plVar11 = plVar11 + 2) {
    if ((*(undefined8 **)(*plVar11 + 0x260) != (undefined8 *)0x0) &&
       (cVar7 = (**(code **)**(undefined8 **)(*plVar11 + 0x260))(), cVar7 != '\0')) {
      plVar18 = (longlong *)plVar11[1];
      local_120 = *plVar11;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
      if (local_120 == 0) goto LAB_142b44951;
      plVar11 = (longlong *)FUN_142b49cd0(local_120,local_80,&DAT_146b2ad68);
      local_108 = (longlong *)plVar11[1];
      lVar15 = *plVar11;
      if (local_108 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_108 + 1) = (int)local_108[1] + 1;
        UNLOCK();
      }
      local_118 = lVar15;
      local_110 = lVar15;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_78 + 1;
        lVar17 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_78 + 8))(local_78);
          }
        }
      }
      plVar11 = &local_110;
      bVar6 = true;
      bVar5 = false;
      goto LAB_142b44969;
    }
  }
  local_120 = 0;
  plVar18 = (longlong *)0x0;
LAB_142b44951:
  plVar11 = &local_100;
  lVar15 = 0;
  bVar6 = false;
  bVar5 = true;
  local_100 = 0;
  plStack_f8 = (longlong *)0x0;
  local_118 = 0;
LAB_142b44969:
  local_d0 = (longlong *)plVar11[1];
  plVar11[1] = 0;
  *plVar11 = 0;
  plVar11 = plStack_f8;
  if ((bVar5) && (plStack_f8 != (longlong *)0x0)) {
    LOCK();
    plVar3 = plStack_f8 + 1;
    lVar17 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plStack_f8)(plStack_f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_f8 + 8))(plStack_f8,1);
      }
    }
  }
  plVar11 = local_108;
  if ((bVar6) && (local_108 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_108 + 1;
    lVar17 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  plVar11 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  if (lVar15 == 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_a8 = plVar11;
    local_a0 = plVar3;
    TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
              (param_1 + 0x28,&local_a8,4);
    plVar11 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_a0 + 1;
      lVar15 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
  }
  else {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    plVar2 = (longlong *)(param_1 + 0xf0);
    local_158 = &PTR_FUN_143f740c8;
    local_140 = 0;
    local_138 = 0;
    local_150 = plVar11;
    local_148 = plVar3;
    if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
      if ((plVar11 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar11 + 0x20))(plVar11), plVar11 = local_150, cVar7 == '\0')) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = (**(code **)(*local_150 + 0x18))(local_150);
        if (uVar8 < 4) {
          pbVar10 = (byte *)(**(code **)(*plVar11 + 0x10))(plVar11);
          uVar8 = (uint)*pbVar10;
        }
        else {
          pcVar4 = *(code **)(*plVar11 + 0x10);
          if (uVar8 < 8) {
            puVar12 = (uint *)(*pcVar4)();
            uVar8 = *puVar12;
          }
          else {
            puVar13 = (undefined8 *)(*pcVar4)(plVar11);
            uVar8 = (int)((ulonglong)*puVar13 >> 0x20) * 0x17 + (int)*puVar13;
          }
        }
      }
      lVar15 = *(longlong *)(param_1 + 0x130);
      if (*(longlong *)(param_1 + 0x130) == 0) {
        lVar15 = param_1 + 0x128;
      }
      iVar9 = *(int *)(lVar15 + ((longlong)*(int *)(param_1 + 0x138) - 1U & (longlong)(int)uVar8) *
                                4);
      if (iVar9 != -1) {
        lVar15 = *plVar2;
        do {
          lVar17 = (longlong)iVar9 * 0x40;
          plVar11 = *(longlong **)(lVar17 + 8 + lVar15);
          if ((((plVar11 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar11 + 0x20))(), cVar7 == '\0')) ||
              (local_150 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*local_150 + 0x20))(local_150), cVar7 == '\0')) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          plVar11 = *(longlong **)(lVar17 + lVar15 + 8);
          if ((((plVar11 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar11 + 0x20))(), cVar7 == '\0')) &&
              ((local_150 == (longlong *)0x0 ||
               (cVar7 = (**(code **)(*local_150 + 0x20))(local_150), cVar7 == '\0')))) ||
             ((bVar5 && (cVar7 = (**(code **)*local_150)
                                           (local_150,*(undefined8 *)(lVar17 + lVar15 + 8)),
                        cVar7 != '\0')))) {
            if ((iVar9 != -1) && (lVar17 = *plVar2 + lVar17, lVar17 != 0)) goto LAB_142b44c8b;
            break;
          }
          lVar15 = *plVar2;
          iVar9 = *(int *)(lVar15 + 0x38 + lVar17);
        } while (iVar9 != -1);
      }
    }
    local_e0 = &local_158;
    FUN_142b31d30(plVar2,local_res18,&local_e0,0);
    lVar17 = (longlong)local_res18[0] * 0x40 + *plVar2;
LAB_142b44c8b:
    local_130 = (void *)0x0;
    local_128 = *(int *)(lVar17 + 0x30);
    lVar15 = (longlong)local_128;
    pvVar16 = *(void **)(lVar17 + 0x28);
    if (local_128 == 0) {
      local_124 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_130,local_128,0);
      _guard_xfg_dispatch_icall_nop(local_130,pvVar16,lVar15 * 2);
    }
    local_158 = &PTR_FUN_143f740c8;
    if (local_140 != 0) {
      FMemory::Free();
    }
    plVar11 = local_148;
    local_158 = &PTR_FUN_143f73d18;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_148 + 1;
      lVar15 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    local_f0 = 0;
    local_98 = FUN_142b58c50;
    local_e8 = 0;
    uStack_90 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_c8 = 0;
    local_c0 = 0;
    puVar13 = (undefined8 *)operator_new(0x30,&local_c8);
    if (puVar13 != (undefined8 *)0x0) {
      puVar13[1] = param_1;
      *puVar13 = &PTR_GetPoolName_143f77ac8;
      *(undefined4 *)(puVar13 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)puVar13 + 0x14) = local_98._4_4_;
      *(undefined4 *)(puVar13 + 3) = uStack_90;
      *(undefined4 *)((longlong)puVar13 + 0x1c) = uStack_8c;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[5] = uVar14;
      *puVar13 = &PTR_GetPoolName_143f77b10;
    }
    local_168 = (void *)0x0;
    if (*(int *)(local_120 + 0x28) < 2) {
      local_160 = *(int *)(local_120 + 0x38);
      pvVar16 = *(void **)(local_120 + 0x30);
    }
    else {
      local_160 = *(int *)(local_120 + 0x28);
      pvVar16 = *(void **)(local_120 + 0x20);
    }
    lVar15 = (longlong)local_160;
    if (local_160 == 0) {
      local_15c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_168,local_160,0);
      _guard_xfg_dispatch_icall_nop(local_168,pvVar16,lVar15 * 2);
    }
    uVar14 = FUN_142b47e60(local_d8,local_60);
    iVar9 = FUN_142b04920(local_118,&local_168,uVar14,&local_c8,&local_130,&local_f0,&local_70);
    local_res20[0] = iVar9;
    if (local_168 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_f0 != 0) {
      FMemory::Free();
    }
    if (iVar9 < 1) {
      local_b8 = *param_2;
      local_b0 = (longlong *)param_2[1];
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
        UNLOCK();
      }
      TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
                (param_1 + 0x28,&local_b8,9);
      plVar11 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_b0 + 1;
        lVar15 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
    }
    else {
      FUN_142b3e6d0(param_1,param_2,local_res20);
    }
    if (local_130 != (void *)0x0) {
      FMemory::Free();
    }
  }
  plVar11 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d0 + 1;
    lVar15 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar18 + 1;
    lVar15 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18,1);
      }
    }
  }
  return;
}



// FUNCTION 142b44fc0 FUN_142b44fc0 body=491 status=ok
// SIG undefined FUN_142b44fc0(void)

longlong FUN_142b44fc0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar1 = *param_1;
  lVar7 = (longlong)(int)param_1[1] * 0x90 + lVar1;
  if (lVar1 != lVar7) {
    piVar6 = (int *)(lVar1 + 0x20);
    lVar8 = lVar1;
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = *(undefined2 **)(param_2 + 8);
      }
      if (piVar6[-4] == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = *(undefined2 **)(piVar6 + -6);
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
      if (iVar3 == 0) {
        if (*(int *)(param_2 + 0x20) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(param_2 + 0x18);
        }
        if (*piVar6 == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = *(undefined2 **)(piVar6 + -2);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
        if (iVar3 == 0) {
          if (*(int *)(param_2 + 0x30) == 0) {
            puVar5 = &DAT_143f3eda8;
          }
          else {
            puVar5 = *(undefined2 **)(param_2 + 0x28);
          }
          if (piVar6[4] == 0) {
            puVar4 = &DAT_143f3eda8;
          }
          else {
            puVar4 = *(undefined2 **)(piVar6 + 2);
          }
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
          if (iVar3 == 0) {
            if (*(int *)(param_2 + 0x40) == 0) {
              puVar5 = &DAT_143f3eda8;
            }
            else {
              puVar5 = *(undefined2 **)(param_2 + 0x38);
            }
            if (piVar6[8] == 0) {
              puVar4 = &DAT_143f3eda8;
            }
            else {
              puVar4 = *(undefined2 **)(piVar6 + 6);
            }
            iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
            if (iVar3 == 0) {
              if (*(int *)(param_2 + 0x50) == 0) {
                puVar5 = &DAT_143f3eda8;
              }
              else {
                puVar5 = *(undefined2 **)(param_2 + 0x48);
              }
              if (piVar6[0xc] == 0) {
                puVar4 = &DAT_143f3eda8;
              }
              else {
                puVar4 = *(undefined2 **)(piVar6 + 10);
              }
              iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
              if (iVar3 == 0) {
                if (*(int *)(param_2 + 0x60) == 0) {
                  puVar5 = &DAT_143f3eda8;
                }
                else {
                  puVar5 = *(undefined2 **)(param_2 + 0x58);
                }
                if (piVar6[0x10] == 0) {
                  puVar4 = &DAT_143f3eda8;
                }
                else {
                  puVar4 = *(undefined2 **)(piVar6 + 0xe);
                }
                iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
                if ((((iVar3 == 0) &&
                     (*(longlong *)(piVar6 + 0x14) == *(longlong *)(param_2 + 0x70))) &&
                    (*(longlong *)(piVar6 + 0x16) == *(longlong *)(param_2 + 0x78))) &&
                   ((cVar2 = (**(code **)**(undefined8 **)(param_2 + 0x80))
                                       (*(undefined8 **)(param_2 + 0x80),
                                        *(undefined8 *)(piVar6 + 0x18)), cVar2 != '\0' &&
                    (piVar6[0x12] == *(int *)(param_2 + 0x68))))) {
                  return (lVar8 - lVar1) / 0x90;
                }
              }
            }
          }
        }
      }
      lVar8 = lVar8 + 0x90;
      piVar6 = piVar6 + 0x24;
    } while (lVar8 != lVar7);
  }
  return 0xffffffff;
}



// FUNCTION 142b451b0 FUN_142b451b0 body=229 status=ok
// SIG undefined FUN_142b451b0(void)

undefined8 * FUN_142b451b0(undefined8 *param_1)

{
  AccountId AVar1;
  undefined8 *local_res8;
  code *local_78;
  undefined8 **ppuStack_70;
  longlong local_68 [2];
  undefined1 local_58;
  longlong local_50;
  undefined1 local_38;
  undefined1 local_30;
  longlong local_28;
  code *pcStack_20;
  undefined8 local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  FString::FString(local_68);
  local_58 = 0;
  local_50 = 0;
  local_28 = 0;
  pcStack_20 = (code *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_18 = 0;
  FUN_142b778a0(local_68);
  local_78 = pcStack_20;
  ppuStack_70 = (undefined8 **)local_18;
  AVar1 = bifrost::users::_guard_xfg_dispatch_icall_nop(&local_78);
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (AVar1 != 0) {
    ppuStack_70 = &local_res8;
    local_78 = FUN_142b34b90;
    local_res8 = param_1;
    bifrost::users::_guard_xfg_dispatch_icall_nop(AVar1,&local_78);
  }
  return param_1;
}



// FUNCTION 142b452a0 FUN_142b452a0 body=204 status=ok
// SIG undefined FUN_142b452a0(void)

int * FUN_142b452a0(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FUN_142b4b2f0(param_3);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar7 = (longlong)iVar1 * 0x40;
        if (*(int *)(param_3 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar7 + 8 + lVar4) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar7 + lVar4);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
        if (iVar2 == 0) {
          *param_2 = iVar1;
          return param_2;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar7 + 0x38 + lVar4);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142b45370 FUN_142b45370 body=204 status=ok
// SIG undefined FUN_142b45370(void)

int * FUN_142b45370(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FUN_142b4b2f0(param_3);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar7 = (longlong)iVar1 * 0x20;
        if (*(int *)(param_3 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar7 + 8 + lVar4) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar7 + lVar4);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
        if (iVar2 == 0) {
          *param_2 = iVar1;
          return param_2;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar7 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142b45440 FUN_142b45440 body=399 status=ok
// SIG undefined FUN_142b45440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142b45440(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  LARGE_INTEGER local_78 [2];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_142b40e80;
  FUN_142b584f0(param_1,local_68);
  if (local_28 != 0) {
    plVar6 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar6 = local_38;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  QueryPerformanceCounter(local_78);
  *(double *)(param_1 + 0x198) = (double)local_78[0].QuadPart * DAT_1468b02f8 + 16777216.0;
  FUN_142b73380(param_1);
  local_80 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x48) != &local_88) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_80);
    plVar6 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}



// FUNCTION 142b455d0 FUN_142b455d0 body=288 status=ok
// SIG undefined FUN_142b455d0(void)

void FUN_142b455d0(char *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  
  LOCK();
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  UNLOCK();
  if (((DAT_146b2b73b == '\0') && (DAT_146b2b738 != '\0')) && (DAT_146b2b739 != '\0')) {
    uVar5 = FUN_14168dc80();
    cVar3 = FModuleManager::IsModuleLoaded(uVar5,DAT_146b2b730);
    if (cVar3 != '\0') {
      FUN_142b45a50(&DAT_146b2b730);
    }
  }
  iVar4 = (**(code **)(*DAT_146b2b6e8 + 0x68))();
  FUN_142b62940();
  if ((0 < iVar4) || (*param_1 != '\0')) {
    lVar6 = FHttpModule::Get();
    plVar1 = *(longlong **)(lVar6 + 0x10);
    if (DAT_146b2ade0 == 0) {
      puVar7 = (undefined8 *)FName::FName(local_res8,"GbxSpark",1);
      uVar5 = *puVar7;
      uVar8 = FUN_14168dc80();
      FUN_141690010(uVar8,uVar5);
    }
    plVar2 = *(longlong **)(DAT_146b2ade0 + 0x18);
    (**(code **)(*plVar2 + 8))(plVar2,0x3cf5c28f);
    (**(code **)(*plVar2 + 8))(plVar2,0x3cf5c28f);
    (**(code **)(*plVar1 + 8))(plVar1,0x3cf5c28f);
    (**(code **)(*plVar2 + 8))(plVar2,0x3cf5c28f);
    if (1 < iVar4) {
      FUN_141f27a50(plVar1,0);
    }
  }
  return;
}



// FUNCTION 142b456f0 FUN_142b456f0 body=200 status=ok
// SIG undefined FUN_142b456f0(void)

void FUN_142b456f0(byte *param_1,byte param_2)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong local_res8;
  undefined1 local_res10;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *param_1 = *param_1 | param_2;
  if (DAT_1468c217e == '\0') {
    LOCK();
    pbVar1 = param_1 + 4;
    pbVar1[0] = 1;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    UNLOCK();
    if (*(int *)pbVar1 == 0) {
      local_28 = 0;
      local_18 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = param_1;
        *puVar4 = &PTR_FUN_143f77b70;
      }
      local_58[0] = &LAB_142b40fd0;
      FUN_140983350(&local_res8,local_58,local_res10,0,2);
      if (local_res8 != 0) {
        LOCK();
        piVar2 = (int *)(local_res8 + 0x48);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle(local_res8);
          return;
        }
      }
    }
  }
  else {
    FUN_142b455d0();
  }
  return;
}



// FUNCTION 142b457c0 FUN_142b457c0 body=539 status=ok
// SIG undefined FUN_142b457c0(void)

void FUN_142b457c0(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
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
  
  FUN_142b62650();
  uVar2 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  uStack_84 = 1;
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar4) goto LAB_142b4589b;
      uVar3 = puVar9[lVar6 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
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
    uStack_74 = (iStack_70 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_142b4589b:
      uStack_74 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 5);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar8 = uVar3 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = param_1;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar3;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar5 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar7 = (int)uVar3 >> 5;
    while (uVar5 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142b45963;
      uVar5 = puVar9[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar5 = -uVar5 & uVar5;
    iVar7 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar5 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar8 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_142b45963:
      uStack_74 = uVar2;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    lVar6 = *(longlong *)(*param_1 + 0x10 + (longlong)(int)uStack_4c * 0x28);
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x48) != 0)) {
      FUN_142b45440(lVar6,&DAT_1457c3000);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 142b459e0 FUN_142b459e0 body=112 status=ok
// SIG undefined FUN_142b459e0(void)

void FUN_142b459e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_142b48cf0(&local_18);
  FUN_142b457c0(local_18);
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 142b45a50 FUN_142b45a50 body=667 status=ok
// SIG undefined FUN_142b45a50(void)

void FUN_142b45a50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  BOOL BVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *local_40;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
    }
    bVar4 = false;
    *(undefined1 *)(param_1 + 0xc) = 1;
    if (*(int *)(param_1 + 0x38) != 0) {
      puVar11 = *(undefined8 **)(param_1 + 0x30);
      local_res10 = puVar11 + (longlong)*(int *)(param_1 + 0x38) * 3;
      bVar4 = false;
      if (puVar11 != local_res10) {
        puVar10 = puVar11 + 1;
        do {
          plVar3 = (longlong *)puVar10[1];
          local_48 = *puVar10;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_40 = plVar3;
          cVar6 = FUN_142b41330(param_1,*puVar11);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3);
              }
            }
          }
          if (cVar6 != '\0') {
            local_68 = *puVar10;
            local_60 = (longlong *)puVar10[1];
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            FUN_142b67800(*puVar11,&local_68);
            plVar3 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_60 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar8 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*local_60 + 8))(local_60,1);
                }
              }
            }
            local_58 = 0;
            plStack_50 = (longlong *)0x0;
            if (puVar10 != &local_58) {
              *puVar10 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(puVar10 + 1,&plStack_50);
              plVar3 = plStack_50;
              if (plStack_50 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_50 + 1;
                lVar5 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plStack_50)(plStack_50);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plStack_50 + 8))(plStack_50,1);
                  }
                }
              }
            }
            bVar4 = true;
          }
          puVar11 = puVar11 + 3;
          puVar10 = puVar10 + 3;
        } while (puVar11 != local_res10);
      }
      FUN_142b33cf0(param_1 + 0x30,local_res8);
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x38) == 0) {
      if ((bVar4) && (*(char *)(param_1 + 10) != '\0')) {
        *(undefined1 *)(param_1 + 10) = 0;
      }
      lVar9 = *(longlong *)(param_1 + 0x20);
      lVar5 = lVar9 + (longlong)*(int *)(param_1 + 0x28) * 0x18;
      for (; lVar9 != lVar5; lVar9 = lVar9 + 0x18) {
        *(undefined1 *)(lVar9 + 0x10) = 0;
        *(undefined4 *)(lVar9 + 0x14) = 0;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
    if ((bVar4) && (iVar8 = (**(code **)(*DAT_146b2b6e8 + 0x68))(), 0 < iVar8)) {
      FUN_142b62940();
    }
  }
  return;
}



// FUNCTION 142b45cf0 FUN_142b45cf0 body=412 status=ok
// SIG undefined FUN_142b45cf0(void)

undefined8 FUN_142b45cf0(longlong *param_1)

{
  wchar_t wVar1;
  longlong lVar2;
  wint_t wVar3;
  wint_t wVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  if ((int)param_1[1] < 2) {
    return 0;
  }
  lVar2 = *param_1;
  for (pwVar5 = L"missing";
      (wVar1 = *(wchar_t *)(lVar2 + -0x1457c4ec0 + (longlong)pwVar5), wVar1 != L'\0' ||
      (*pwVar5 != L'\0')); pwVar5 = pwVar5 + 1) {
    if (wVar1 != *pwVar5) {
      wVar3 = towlower(wVar1);
      wVar4 = towlower(*pwVar5);
      if (wVar3 != wVar4) {
        if (wVar3 == wVar4) {
          return 1;
        }
        puVar7 = &DAT_143f3eda8;
        if ((int)param_1[1] == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*param_1;
        }
        for (pwVar5 = L"illegal";
            (wVar1 = *(wchar_t *)((longlong)(puVar6 + -0xa2be2768) + (longlong)pwVar5),
            wVar1 != L'\0' || (*pwVar5 != L'\0')); pwVar5 = pwVar5 + 1) {
          if (wVar1 != *pwVar5) {
            wVar3 = towlower(wVar1);
            wVar4 = towlower(*pwVar5);
            if (wVar3 != wVar4) {
              if (wVar3 == wVar4) {
                return 2;
              }
              if ((int)param_1[1] == 0) {
                puVar6 = &DAT_143f3eda8;
              }
              else {
                puVar6 = (undefined2 *)*param_1;
              }
              for (pwVar5 = L"invalid";
                  (wVar1 = *(wchar_t *)((longlong)(puVar6 + -0xa28eeac0) + (longlong)pwVar5),
                  wVar1 != L'\0' || (*pwVar5 != L'\0')); pwVar5 = pwVar5 + 1) {
                if (wVar1 != *pwVar5) {
                  wVar3 = towlower(wVar1);
                  wVar4 = towlower(*pwVar5);
                  if (wVar3 != wVar4) {
                    if (wVar3 == wVar4) {
                      return 3;
                    }
                    if ((int)param_1[1] != 0) {
                      puVar7 = (undefined2 *)*param_1;
                    }
                    for (pwVar5 = L"taken";
                        (wVar1 = *(wchar_t *)((longlong)(puVar7 + -0xa2be2770) + (longlong)pwVar5),
                        wVar1 != L'\0' || (*pwVar5 != L'\0')); pwVar5 = pwVar5 + 1) {
                      if (wVar1 != *pwVar5) {
                        wVar3 = towlower(wVar1);
                        wVar4 = towlower(*pwVar5);
                        if (wVar3 != wVar4) {
                          if (wVar3 != wVar4) {
                            return 0;
                          }
                          return 4;
                        }
                      }
                    }
                    return 4;
                  }
                }
              }
              return 3;
            }
          }
        }
        return 2;
      }
    }
  }
  return 1;
}



// FUNCTION 142b45e90 FUN_142b45e90 body=78 status=ok
// SIG undefined FUN_142b45e90(void)

longlong FUN_142b45e90(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [32];
  
  if (DAT_146b2ade0 == 0) {
    puVar2 = (undefined8 *)FName::FName(local_res8,"GbxSpark",1);
    uVar1 = *puVar2;
    uVar3 = FUN_14168dc80();
    FUN_141690010(uVar3,uVar1);
  }
  return DAT_146b2ade0;
}



// FUNCTION 142b45ee0 FUN_142b45ee0 body=191 status=ok
// SIG undefined FUN_142b45ee0(void)

undefined8 FUN_142b45ee0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  
  if (DAT_146b2ade0 == 0) {
    puVar7 = (undefined8 *)FName::FName(local_res8,"GbxSpark",1);
    uVar4 = *puVar7;
    uVar8 = FUN_14168dc80();
    FUN_141690010(uVar8,uVar4);
  }
  plVar5 = *(longlong **)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x210);
  lVar6 = *(longlong *)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x208);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  uVar4 = *(undefined8 *)(lVar6 + 0x50);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 142b45fa0 FUN_142b45fa0 body=56 status=ok
// SIG undefined FUN_142b45fa0(void)

undefined8 * FUN_142b45fa0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x310) < 1) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 0x308);
    *param_2 = *puVar1;
    lVar2 = puVar1[1];
    param_2[1] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 142b45fe0 FUN_142b45fe0 body=147 status=ok
// SIG undefined FUN_142b45fe0(void)

undefined8 * FUN_142b45fe0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_142b49cd0(param_1,local_18,&DAT_146b2ac50);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b46080 FUN_142b46080 body=332 status=ok
// SIG undefined FUN_142b46080(void)

undefined8 FUN_142b46080(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x48))) {
    lVar1 = (longlong)param_2 * 0xb0 + *(longlong *)(param_1 + 0x40);
    FString::operator=(param_3,lVar1);
    FString::operator=(param_3 + 0x10,lVar1 + 0x10);
    FString::operator=(param_3 + 0x20,lVar1 + 0x20);
    FString::operator=(param_3 + 0x30,lVar1 + 0x30);
    FString::operator=(param_3 + 0x40,lVar1 + 0x40);
    FString::operator=(param_3 + 0x50,lVar1 + 0x50);
    FString::operator=(param_3 + 0x60,lVar1 + 0x60);
    FString::operator=(param_3 + 0x70,lVar1 + 0x70);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_3 + 0x80,lVar1 + 0x80);
    FString::operator=(param_3 + 0x90,lVar1 + 0x90);
    puVar3 = (undefined8 *)(param_3 + 0xa0);
    if (puVar3 != (undefined8 *)(lVar1 + 0xa0)) {
      plVar2 = (longlong *)*puVar3;
      for (iVar4 = *(int *)(param_3 + 0xa8); iVar4 != 0; iVar4 = iVar4 + -1) {
        if (plVar2[4] != 0) {
          FMemory::Free();
        }
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 6;
      }
      FUN_1411c0300(puVar3,*(undefined8 *)(lVar1 + 0xa0),*(undefined4 *)(lVar1 + 0xa8),
                    *(undefined4 *)(param_3 + 0xac),0);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142b461d0 FUN_142b461d0 body=392 status=ok
// SIG undefined FUN_142b461d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b461d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 local_18;
  longlong *local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0xd0) = 3;
    *(undefined4 *)(param_1 + 200) = 0xffffffff;
    return;
  }
  if ((*(char *)(lVar4 + 0x18) != '\0') && (*(char *)(lVar4 + 0x19) == '\0')) {
    *(undefined4 *)(param_1 + 0xd0) = 2;
    return;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    if (((*(int *)(param_1 + 0x68) != 0) && (*(longlong **)(param_1 + 0x60) != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))(), cVar5 != '\0')) {
      *(undefined4 *)(param_1 + 0xd0) = 4;
      local_18 = *(undefined8 *)(param_1 + 0x38);
      local_10 = *(longlong **)(param_1 + 0x40);
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x68) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x60);
      }
      (**(code **)(*plVar6 + 0x38))(plVar6,&local_18);
      plVar6 = local_10;
      if (local_10 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return;
      }
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return;
      }
      (**(code **)(*plVar6 + 8))(plVar6,1);
      return;
    }
  }
  else if (((*(int *)(param_1 + 0x78) != 0) && (*(longlong **)(param_1 + 0x70) != (longlong *)0x0))
          && (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x18))(), cVar5 != '\0')) {
    *(undefined4 *)(param_1 + 0xd0) = 4;
    if (*(int *)(param_1 + 0x78) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b46314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x38))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000142b46301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x38))();
    return;
  }
  *(undefined4 *)(param_1 + 0xd0) = 3;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  return;
}



// FUNCTION 142b46360 FUN_142b46360 body=40 status=ok
// SIG undefined FUN_142b46360(void)

undefined8 FUN_142b46360(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x20;
  if (*(int *)(param_1 + 0x28) < 2) {
    lVar1 = param_1 + 0x30;
  }
  FString::FString(param_2,lVar1);
  return param_2;
}



// FUNCTION 142b46390 FUN_142b46390 body=417 status=ok
// SIG undefined FUN_142b46390(void)

void ** FUN_142b46390(undefined8 param_1,void **param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  void *pvVar10;
  void *_Src;
  undefined1 local_res10 [8];
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  pvVar10 = (void *)0x0;
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x0;
  if (DAT_146b2ade0 == 0) {
    puVar5 = (undefined8 *)FName::FName(local_res10,"GbxSpark",1);
    uVar3 = *puVar5;
    uVar6 = FUN_14168dc80();
    FUN_141690010(uVar6,uVar3);
  }
  plVar7 = *(longlong **)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x308);
  plVar9 = plVar7 + (longlong)*(int *)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x310) * 2;
  while( true ) {
    if (plVar7 == plVar9) {
      return param_2;
    }
    puVar5 = *(undefined8 **)(*plVar7 + 0x260);
    if ((puVar5 != (undefined8 *)0x0) &&
       (cVar4 = (**(code **)*puVar5)(puVar5,*param_3), cVar4 != '\0')) break;
    plVar7 = plVar7 + 2;
  }
  lVar8 = *plVar7;
  plVar7 = (longlong *)plVar7[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  if (lVar8 != 0) {
    local_28 = (void *)0x0;
    if (*(int *)(lVar8 + 0x28) < 2) {
      local_20 = *(int *)(lVar8 + 0x38);
      _Src = *(void **)(lVar8 + 0x30);
    }
    else {
      local_20 = *(int *)(lVar8 + 0x28);
      _Src = *(void **)(lVar8 + 0x20);
    }
    lVar8 = (longlong)local_20;
    if (local_20 == 0) {
      local_1c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
      pvVar10 = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar8 * 2);
    }
    if (param_2 == &local_28) {
      if (pvVar10 != (void *)0x0) {
        FMemory::Free(pvVar10);
      }
    }
    else {
      if (*param_2 != (void *)0x0) {
        FMemory::Free();
      }
      *param_2 = pvVar10;
      *(int *)(param_2 + 1) = local_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
    }
  }
  if (plVar7 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  plVar9 = plVar7 + 1;
  lVar8 = *plVar9;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)lVar8 != 1) {
    return param_2;
  }
  (**(code **)*plVar7)(plVar7);
  LOCK();
  piVar1 = (int *)((longlong)plVar7 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return param_2;
  }
  (**(code **)(*plVar7 + 8))(plVar7,1);
  return param_2;
}



// FUNCTION 142b46540 FUN_142b46540 body=470 status=ok
// SIG undefined FUN_142b46540(void)

undefined1 FUN_142b46540(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  wint_t wVar5;
  wint_t wVar6;
  undefined8 uVar7;
  wint_t *pwVar8;
  undefined2 *puVar9;
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18 [2];
  
  FUN_142b49e00(param_1,&local_28);
  if (local_28 != 0) {
    uVar7 = FUN_142afb430(local_28,local_18,param_2);
    FString::ToLower(uVar7,&local_38);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    puVar9 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar9 = local_38;
    }
    pwVar8 = &DAT_1457b67a4;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar9 + -0xa2bdb3d2) + (longlong)pwVar8);
      if ((wVar5 == 0) && (*pwVar8 == 0)) goto LAB_142b466b2;
      if (wVar5 != *pwVar8) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar8);
        if (wVar5 != wVar6) goto LAB_142b465f4;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
  goto LAB_142b466c9;
LAB_142b465f4:
  if (wVar5 != wVar6) {
    pwVar8 = &DAT_1457b7c60;
    puVar9 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar9 = local_38;
    }
    do {
      wVar5 = *(wint_t *)((longlong)(puVar9 + -0xa2bdbe30) + (longlong)pwVar8);
      if ((wVar5 == 0) && (*pwVar8 == 0)) break;
      if (wVar5 != *pwVar8) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar8);
        if (wVar5 != wVar6) goto LAB_142b46654;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
  goto LAB_142b466b2;
LAB_142b466a3:
  if (wVar5 == wVar6) goto LAB_142b466b2;
  param_3 = 0;
  goto LAB_142b466b5;
LAB_142b46654:
  if (wVar5 != wVar6) {
    pwVar8 = &DAT_1457b7c70;
    puVar9 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar9 = local_38;
    }
    do {
      wVar5 = *(wint_t *)((longlong)(puVar9 + -0xa2bdbe38) + (longlong)pwVar8);
      if ((wVar5 == 0) && (*pwVar8 == 0)) break;
      if (wVar5 != *pwVar8) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar8);
        if (wVar5 != wVar6) goto LAB_142b466a3;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
LAB_142b466b2:
  param_3 = 1;
LAB_142b466b5:
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_142b466c9:
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
  return param_3;
}



// FUNCTION 142b46720 FUN_142b46720 body=481 status=ok
// SIG undefined FUN_142b46720(void)

undefined8 FUN_142b46720(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong local_68;
  int local_60;
  int local_5c;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  
  if (*(int *)(param_1 + 0x1f0) < 2) {
    iVar8 = FApp::GetEngineIsPromotedBuild();
    if (iVar8 == 0) {
      uVar11 = FUN_142b47e60(param_1,local_48);
      plVar10 = (longlong *)FString::ToLower(uVar11,local_58);
      lVar7 = plVar10[1];
      local_68 = *plVar10;
      *plVar10 = 0;
      local_5c = *(int *)((longlong)plVar10 + 0xc);
      local_60 = (int)plVar10[1];
      plVar10[1] = 0;
      iVar9 = (7 - (uint)((int)lVar7 != 0)) + local_60;
      iVar8 = local_60;
      if (local_5c < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,iVar9);
        iVar8 = local_60;
      }
      local_60 = (7 - (uint)(iVar8 != 0)) + iVar8;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar8);
      }
      plVar10 = &local_68;
      puVar2 = (undefined8 *)(local_68 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      bVar6 = false;
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      *puVar2 = 0x5600450044002d;
      *(undefined4 *)(puVar2 + 1) = 0x30002d;
      *(undefined2 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      plVar10 = (longlong *)FApp::GetBranchName(local_38);
      bVar6 = true;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
    }
    plVar1 = (longlong *)(param_1 + 0x1e8);
    if (plVar1 != plVar10) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar10;
      *plVar10 = 0;
      *(int *)(param_1 + 0x1f0) = (int)plVar10[1];
      *(undefined4 *)(param_1 + 500) = *(undefined4 *)((longlong)plVar10 + 0xc);
      plVar10[1] = 0;
    }
    if ((bVar3) && (local_68 != 0)) {
      FMemory::Free(local_68);
    }
    if (bVar4) {
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
    if (bVar5) {
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    if ((bVar6) && (local_38[0] != 0)) {
      FMemory::Free();
    }
  }
  FString::FString(param_2,param_1 + 0x1e8);
  return param_2;
}



// FUNCTION 142b46910 FUN_142b46910 body=34 status=ok
// SIG undefined FUN_142b46910(void)

undefined8 * FUN_142b46910(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x278);
  lVar1 = *(longlong *)(param_1 + 0x280);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142b46940 FUN_142b46940 body=306 status=ok
// SIG undefined FUN_142b46940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142b46940(longlong param_1,undefined8 *param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int local_res18 [4];
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  puVar8 = *(undefined8 **)(param_1 + 8);
  puVar3 = puVar8 + (longlong)*(int *)(param_1 + 0x10) * 3;
  do {
    local_res18[0] = param_3;
    if (puVar8 == puVar3) {
LAB_142b46a36:
      if (param_4 != '\0') {
        local_48 = local_res18;
        FUN_142b34040((longlong *)(param_1 + 8),&local_48);
      }
      return param_2;
    }
    if (*(int *)(puVar8 + 2) == param_3) {
      local_58 = *puVar8;
      uStack_50 = (longlong *)puVar8[1];
      if (uStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_50 + 1) = (int)uStack_50[1] + 1;
        UNLOCK();
      }
      if (&local_58 != param_2) {
        local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
        uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
        uVar5 = *param_2;
        plVar6 = (longlong *)param_2[1];
        local_40 = (undefined4)local_58;
        uStack_3c = local_58._4_4_;
        uStack_38 = (undefined4)uStack_50;
        uStack_34 = uStack_50._4_4_;
        *(undefined4 *)param_2 = (undefined4)local_58;
        *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
        *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
        local_58 = uVar5;
        uStack_50 = plVar6;
      }
      plVar6 = uStack_50;
      if (uStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_50 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*uStack_50)(uStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*uStack_50 + 8))(uStack_50,1);
          }
        }
      }
      goto LAB_142b46a36;
    }
    puVar8 = puVar8 + 3;
  } while( true );
}



// FUNCTION 142b46a80 FUN_142b46a80 body=678 status=ok
// SIG undefined FUN_142b46a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142b46a80(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  uint uStack_1a0;
  int iStack_19c;
  undefined1 local_198 [16];
  longlong *local_188;
  undefined2 local_180;
  longlong local_178 [2];
  longlong *local_168;
  uint uStack_160;
  uint uStack_15c;
  uint *puStack_158;
  undefined1 auStack_150 [16];
  undefined8 local_140;
  undefined1 local_138 [288];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  FUN_142b4ae50(local_178,param_1);
  uVar7 = 0;
  local_188 = (longlong *)(DAT_1468b6148 + 8);
  iVar1 = *(int *)(DAT_1468b6148 + 0x30);
  puStack_158 = (uint *)(DAT_1468b6148 + 0x18);
  local_1b8._0_4_ = 0;
  local_1b8._4_4_ = 1;
  local_1a8._4_4_ = 0;
  uStack_1a0 = 0;
  if (iVar1 != 0) {
    puVar10 = *(uint **)(DAT_1468b6148 + 0x28);
    if (*(uint **)(DAT_1468b6148 + 0x28) == (uint *)0x0) {
      puVar10 = puStack_158;
    }
    uVar2 = *puVar10;
    uVar8 = uVar7;
    uVar9 = uVar7;
    while (uVar2 == 0) {
      iVar6 = (int)uVar8;
      uStack_1a0 = (int)uVar9 + 0x20;
      uVar9 = (ulonglong)uStack_1a0;
      local_1b8._0_4_ = iVar6 + 1;
      uVar8 = (ulonglong)(uint)local_1b8;
      if ((int)((iVar1 + -1 >> 0x1f & 0x1fU) + iVar1 + -1) >> 5 <= iVar6) goto LAB_142b46b85;
      uVar2 = puVar10[(longlong)iVar6 + 1];
    }
    local_1b8._4_4_ = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (local_1b8._4_4_ != 0) {
      for (; local_1b8._4_4_ >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (local_1b8._4_4_ == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_1a8._4_4_ = (uStack_1a0 - iVar6) + 0x1f;
    if (iVar1 < local_1a8._4_4_) {
LAB_142b46b85:
      local_1a8._4_4_ = iVar1;
    }
  }
  auStack_150._4_4_ = local_1a8._4_4_;
  auStack_150._0_4_ = 0xffffffff;
  auStack_150._8_4_ = uStack_1a0;
  auStack_150._12_4_ = iStack_19c;
  uStack_160 = (uint)local_1b8;
  uStack_15c = local_1b8._4_4_;
  local_180 = 0;
  local_140._0_4_ = SUB84(local_188,0);
  local_140._4_4_ = (undefined4)((ulonglong)local_188 >> 0x20);
  uStack_1a0 = 0xffffffff;
  iStack_19c = local_1a8._4_4_;
  uStack_1b0 = (uint)local_1b8;
  uStack_1ac = local_1b8._4_4_;
  local_198._8_4_ = (undefined4)local_140;
  local_198._0_8_ = auStack_150._8_8_;
  local_198._12_4_ = local_140._4_4_;
  bVar3 = local_1a8._4_4_ < *(int *)(DAT_1468b6148 + 0x30);
  local_1b8 = local_188;
  local_168 = local_188;
  local_140 = local_188;
  local_1a8 = puStack_158;
  if (bVar3) {
    do {
      iVar1 = iStack_19c;
      plVar4 = local_1b8;
      cVar5 = FString::EndsWith((longlong)iStack_19c * 0x130 + *local_1b8,local_178,1);
      if (cVar5 != '\0') {
        uVar7 = *plVar4 + 0x10 + (longlong)iVar1 * 0x130;
        break;
      }
      uStack_1a0 = uStack_1a0 & ~uStack_1ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1b0);
    } while (iStack_19c < (int)local_1a8[6]);
    if (((char)local_180 != '\0') && (local_180._1_1_ != '\0')) {
      TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_188,(int)local_188[1] - *(int *)((longlong)local_188 + 0x34),1);
    }
    if (uVar7 != 0) goto LAB_142b46ce8;
  }
  FUN_142b46d30(&local_1b8,local_178);
  FConfigFile::FConfigFile(local_138);
  FConfigCacheIni::SetFile(DAT_1468b6148,&local_1b8,local_138);
  uVar7 = FConfigCacheIni::Find(DAT_1468b6148,&local_1b8,0);
  FConfigFile::~FConfigFile(local_138);
  if (local_1b8 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_142b46ce8:
  *(undefined1 *)(uVar7 + 0x51) = 1;
  if (local_178[0] != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 142b46d30 FUN_142b46d30 body=659 status=ok
// SIG undefined FUN_142b46d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142b46d30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined1 auStack_1c8 [32];
  void *local_1a8;
  int local_1a0;
  int iStack_19c;
  undefined8 *local_198;
  int local_190;
  int local_18c;
  void *local_188;
  int local_180;
  int local_17c;
  longlong local_178 [2];
  undefined1 local_168 [256];
  longlong local_68;
  short *local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_198 = param_2;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,"WindowsNoEditor");
  iVar6 = *(int *)(param_2 + 1);
  iVar3 = 0;
  local_188 = (void *)0x0;
  local_17c = 0;
  pvVar8 = (void *)0x0;
  iVar7 = iVar3;
  if ((local_60 != (short *)0x0) && (pvVar8 = (void *)0x0, iVar7 = 0, *local_60 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (local_60[lVar4] != 0);
    iVar2 = (int)lVar4 + 1;
    local_180 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
    }
    iVar7 = local_17c;
    iVar3 = local_180;
    pvVar8 = local_188;
    FGenericPlatformString::Memcpy(local_188,local_60,(longlong)iVar2 * 2);
    param_2 = local_198;
  }
  iVar2 = 0;
  iVar5 = 1;
  if (iVar6 == 0) {
    iVar6 = 1;
  }
  if ((iVar3 == 0) && (iVar6 != 0)) {
    iVar2 = 1;
  }
  local_1a8 = pvVar8;
  local_1a0 = iVar3;
  iStack_19c = iVar7;
  if (iVar7 < iVar3 + iVar2 + iVar6) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1a8);
  }
  iVar6 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar6 = 0;
  }
  FString::PathAppend(&local_1a8,*param_2,iVar6);
  puVar1 = (undefined8 *)FPaths::GeneratedConfigDir(local_178);
  iVar6 = *(int *)(puVar1 + 1);
  if (iVar6 < 2) {
    *param_1 = local_1a8;
    *(int *)(param_1 + 1) = local_1a0;
    *(int *)((longlong)param_1 + 0xc) = iStack_19c;
    local_1a0 = 0;
    iStack_19c = 0;
    local_1a8 = (void *)0x0;
  }
  else {
    if (local_1a0 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = local_1a0 + -1;
    }
    if ((iVar6 != 0) || (iVar3 == 0)) {
      iVar5 = 0;
    }
    local_198 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    local_18c = *(int *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
    local_190 = iVar6;
    if (local_18c < iVar6 + iVar5 + iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
    }
    iVar6 = local_190;
    pvVar8 = local_1a8;
    puVar1 = local_198;
    iVar2 = local_18c;
    iVar7 = local_190;
    if (iVar3 != 0) {
      lVar4 = (longlong)local_190;
      local_190 = local_190 + (uint)(local_190 == 0) + iVar3;
      if (local_18c < local_190) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar6);
      }
      iVar2 = local_18c;
      iVar7 = local_190;
      puVar1 = local_198;
      _Dst = (void *)((lVar4 - (ulonglong)(iVar6 != 0)) * 2 + (longlong)local_198);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar8,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
    }
    *param_1 = puVar1;
    *(int *)(param_1 + 1) = iVar7;
    *(int *)((longlong)param_1 + 0xc) = iVar2;
  }
  if (local_178[0] != 0) {
    FMemory::Free();
  }
  if (local_1a8 != (void *)0x0) {
    FMemory::Free(local_1a8);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142b46fd0 FUN_142b46fd0 body=147 status=ok
// SIG undefined FUN_142b46fd0(void)

undefined8 * FUN_142b46fd0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_142b49cd0(param_1,local_18,&DAT_146b2ac88);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b47070 FUN_142b47070 body=7 status=ok
// SIG undefined FUN_142b47070(void)

undefined4 FUN_142b47070(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2a8);
}



// FUNCTION 142b47080 FUN_142b47080 body=266 status=ok
// SIG undefined FUN_142b47080(void)

void FUN_142b47080(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_2 != (longlong *)(param_1 + 0x3d0)) {
    iVar4 = (int)param_2[1];
    if (iVar4 != 0) {
      plVar2 = (longlong *)(*param_2 + 0x18);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        if (plVar2[-2] != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x3d8);
    lVar3 = *(longlong *)(param_1 + 0x3d0);
    *(int *)(param_2 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_2,iVar4);
      puVar5 = (undefined4 *)*param_2;
      if (iVar4 != 0) {
        lVar3 = lVar3 + 0x18;
        do {
          *puVar5 = *(undefined4 *)(lVar3 + -0x18);
          FString::FString(puVar5 + 2,lVar3 + -0x10);
          FString::FString(puVar5 + 6,lVar3);
          FString::FString(puVar5 + 10,lVar3 + 0x10);
          puVar1 = (undefined1 *)(lVar3 + 0x20);
          lVar3 = lVar3 + 0x40;
          *(undefined1 *)(puVar5 + 0xe) = *puVar1;
          puVar5 = puVar5 + 0x10;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}



// FUNCTION 142b47190 FUN_142b47190 body=1942 status=ok
// SIG undefined FUN_142b47190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142b47190(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [40];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    *param_2 = *(longlong *)(param_1 + 0x28);
    lVar15 = *(longlong *)(param_1 + 0x30);
    param_2[1] = lVar15;
    if (lVar15 == 0) {
      return param_2;
    }
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
    return param_2;
  }
  local_108 = param_1;
  if (DAT_146b2ade0 == 0) {
    puVar7 = (undefined8 *)FName::FName(local_98,"GbxSpark",1);
    uVar4 = *puVar7;
    uVar8 = FUN_14168dc80();
    FUN_141690010(uVar8,uVar4);
  }
  lVar15 = *(longlong *)(DAT_146b2ade0 + 0x18);
  if (DAT_146b17150 != 0) {
    puVar9 = *(undefined8 **)(DAT_146b17150 + 0xc18);
    puVar7 = puVar9 + *(int *)(DAT_146b17150 + 0xc20);
    for (; puVar9 != puVar7; puVar9 = puVar9 + 1) {
      if (*(char *)*puVar9 == '\x01') {
        lVar10 = *(longlong *)((char *)*puVar9 + 0x288);
        goto LAB_142b4728a;
      }
    }
  }
  lVar10 = 0;
LAB_142b4728a:
  lVar11 = *(longlong *)(local_108 + 0x18);
  local_100 = lVar15;
  if (lVar11 != 0) {
    plVar12 = *(longlong **)(local_108 + 0x20);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    plVar14 = *(longlong **)(lVar15 + 0x308);
    plVar13 = plVar14 + (longlong)*(int *)(lVar15 + 0x310) * 2;
    for (; plVar14 != plVar13; plVar14 = plVar14 + 2) {
      puVar7 = *(undefined8 **)(*plVar14 + 0x260);
      if ((puVar7 != (undefined8 *)0x0) &&
         (cVar5 = (**(code **)*puVar7)(puVar7,lVar11), cVar5 != '\0')) {
        plVar13 = (longlong *)plVar14[1];
        local_e8 = *plVar14;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        goto LAB_142b472fc;
      }
    }
    local_e8 = 0;
    plVar13 = (longlong *)0x0;
LAB_142b472fc:
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_e0 = plVar13;
    if (plVar1 != &local_e8) {
      *plVar1 = local_e8;
      local_e8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_e0);
    }
    plVar14 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_e0 + 1;
      lVar15 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar3 = (int *)((longlong)plVar14 + 0xc);
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar13 + 1;
      lVar15 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar3 = (int *)((longlong)plVar13 + 0xc);
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    lVar15 = local_100;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar12 + 1;
      lVar10 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar3 = (int *)((longlong)plVar12 + 0xc);
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        lVar15 = local_100;
        if (iVar6 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
          lVar15 = local_100;
        }
      }
    }
    goto LAB_142b477bb;
  }
  if (DAT_1468b616c == '\0') {
    if (lVar10 == 0) goto LAB_142b477bb;
    iVar6 = FUN_1428cf800(lVar10);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        local_d8 = *(longlong *)(lVar15 + 0x2e8);
        plVar12 = *(longlong **)(lVar15 + 0x2f0);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_d0 = plVar12;
        if (plVar1 != &local_d8) {
          *plVar1 = local_d8;
          local_d8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_d0);
        }
        plVar14 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_d0 + 1;
          lVar15 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar3 = (int *)((longlong)plVar14 + 0xc);
            iVar6 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            plVar14 = local_d0;
            goto joined_r0x000142b478ce;
          }
        }
        goto LAB_142b47717;
      }
      if (1 < iVar6 - 2U) goto LAB_142b477bb;
    }
    local_f8 = 0;
    plStack_f0 = (longlong *)0x0;
    if ((*(longlong *)(lVar10 + 400) != 0) &&
       (lVar10 = UGameInstance::GetFirstGamePlayer(), lVar10 != 0)) {
      lVar11 = FUN_142547b50(lVar10,local_90);
      lVar10 = *(longlong *)(lVar11 + 8);
      plVar12 = *(longlong **)(lVar11 + 0x10);
      lVar11 = 0;
      plVar14 = (longlong *)0x0;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        lVar11 = local_f8;
        plVar14 = plStack_f0;
      }
      local_a8._0_4_ = (undefined4)lVar10;
      local_a8._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
      uStack_a0._0_4_ = SUB84(plVar12,0);
      uStack_a0._4_4_ = (undefined4)((ulonglong)plVar12 >> 0x20);
      local_68 = (undefined4)local_a8;
      uStack_64 = local_a8._4_4_;
      uStack_60 = (undefined4)uStack_a0;
      uStack_5c = uStack_a0._4_4_;
      local_f8 = lVar10;
      plStack_f0 = plVar12;
      local_a8 = lVar11;
      uStack_a0 = plVar14;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar14 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          iVar6 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*uStack_a0 + 8))(uStack_a0,1);
          }
        }
      }
      FUN_1404bf980(local_90);
      lVar10 = local_f8;
      plVar12 = plStack_f0;
      if (local_f8 != 0) {
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
          UNLOCK();
        }
        plVar12 = *(longlong **)(lVar15 + 0x308);
        plVar14 = plVar12 + (longlong)*(int *)(lVar15 + 0x310) * 2;
        for (; plVar12 != plVar14; plVar12 = plVar12 + 2) {
          puVar7 = *(undefined8 **)(*plVar12 + 0x260);
          if ((puVar7 != (undefined8 *)0x0) &&
             (cVar5 = (**(code **)*puVar7)(puVar7,lVar10), cVar5 != '\0')) {
            plVar14 = (longlong *)plVar12[1];
            local_c8 = *plVar12;
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
            }
            goto LAB_142b4757c;
          }
        }
        local_c8 = 0;
        plVar14 = (longlong *)0x0;
LAB_142b4757c:
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        local_c0 = plVar14;
        if (plVar1 != &local_c8) {
          *plVar1 = local_c8;
          local_c8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_c0);
        }
        plVar12 = local_c0;
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_c0 + 1;
          lVar15 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar3 = (int *)((longlong)plVar12 + 0xc);
            iVar6 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
            }
          }
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar14 + 1;
          lVar15 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar3 = (int *)((longlong)plVar14 + 0xc);
            iVar6 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        plVar14 = plStack_f0;
        lVar15 = local_100;
        if (plStack_f0 == (longlong *)0x0) goto LAB_142b477bb;
        LOCK();
        plVar12 = plStack_f0 + 1;
        lVar15 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        plVar12 = plStack_f0;
        if ((int)lVar15 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          plVar12 = plStack_f0;
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          iVar6 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
          }
        }
      }
      plVar14 = plStack_f0;
      lVar15 = local_100;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar12 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          iVar6 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          lVar15 = local_100;
          if (iVar6 == 1) {
            (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
            lVar15 = local_100;
          }
        }
      }
    }
  }
  else {
    local_b8 = *(longlong *)(lVar15 + 0x2f8);
    plVar12 = *(longlong **)(lVar15 + 0x300);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_b0 = plVar12;
    if (plVar1 != &local_b8) {
      *plVar1 = local_b8;
      local_b8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_b0);
    }
    plVar14 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_b0 + 1;
      lVar15 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar3 = (int *)((longlong)plVar14 + 0xc);
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        plVar14 = local_b0;
joined_r0x000142b478ce:
        if (iVar6 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
LAB_142b47717:
    lVar15 = local_100;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar12 + 1;
      lVar10 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar3 = (int *)((longlong)plVar12 + 0xc);
        iVar6 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        lVar15 = local_100;
        if (iVar6 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
          lVar15 = local_100;
        }
      }
    }
  }
LAB_142b477bb:
  if (*plVar1 == 0) {
    plVar1 = *(longlong **)(lVar15 + 0x300);
    lVar15 = *(longlong *)(lVar15 + 0x2f8);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    *param_2 = lVar15;
    param_2[1] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar1 + 1;
        lVar15 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar6 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
    }
  }
  else {
    *param_2 = *plVar1;
    lVar15 = *(longlong *)(local_108 + 0x30);
    param_2[1] = lVar15;
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 142b47930 FUN_142b47930 body=247 status=ok
// SIG undefined FUN_142b47930(void)

longlong * FUN_142b47930(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x2c0);
  plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x2c8) * 2;
  while( true ) {
    if (plVar7 == plVar6) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    plVar4 = (longlong *)plVar7[1];
    lVar5 = *plVar7;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (*(int *)(lVar5 + 8) == param_3) break;
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
    plVar7 = plVar7 + 2;
  }
  *param_2 = lVar5;
  param_2[1] = (longlong)plVar4;
  if (plVar4 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  UNLOCK();
  if (plVar4 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  plVar7 = plVar4 + 1;
  lVar5 = *plVar7;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)lVar5 != 1) {
    return param_2;
  }
  (**(code **)*plVar4)(plVar4);
  LOCK();
  piVar2 = (int *)((longlong)plVar4 + 0xc);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return param_2;
  }
  (**(code **)(*plVar4 + 8))(plVar4,1);
  return param_2;
}



// FUNCTION 142b47a30 FUN_142b47a30 body=249 status=ok
// SIG undefined FUN_142b47a30(void)

undefined8 * FUN_142b47a30(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_1 + 0x2c0);
  puVar6 = puVar7 + (longlong)*(int *)(param_1 + 0x2c8) * 2;
  while( true ) {
    if (puVar7 == puVar6) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    plVar3 = (longlong *)puVar7[1];
    plVar4 = (longlong *)*puVar7;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (*plVar4 == *param_3) break;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    puVar7 = puVar7 + 2;
  }
  *param_2 = plVar4;
  param_2[1] = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  if (plVar3 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  plVar4 = plVar3 + 1;
  lVar5 = *plVar4;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)lVar5 != 1) {
    return param_2;
  }
  (**(code **)*plVar3)(plVar3);
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return param_2;
  }
  (**(code **)(*plVar3 + 8))(plVar3,1);
  return param_2;
}



// FUNCTION 142b47b30 FUN_142b47b30 body=643 status=ok
// SIG undefined FUN_142b47b30(void)

undefined8 FUN_142b47b30(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined1 local_res18 [8];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  uVar13 = 0x43960000;
  if (DAT_146b2ade0 == 0) {
    puVar8 = (undefined8 *)FName::FName(local_res18,"GbxSpark",1);
    uVar4 = *puVar8;
    uVar9 = FUN_14168dc80();
    FUN_141690010(uVar9,uVar4);
  }
  plVar11 = *(longlong **)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x308);
  plVar12 = plVar11 + (longlong)*(int *)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x310) * 2;
  if (plVar11 != plVar12) {
    while ((puVar8 = *(undefined8 **)(*plVar11 + 0x260), puVar8 == (undefined8 *)0x0 ||
           (cVar7 = (**(code **)*puVar8)(puVar8,*param_2), cVar7 == '\0'))) {
      plVar11 = plVar11 + 2;
      if (plVar11 == plVar12) {
        return 0x43960000;
      }
    }
    lVar5 = *plVar11;
    plVar11 = (longlong *)plVar11[1];
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      plVar10 = (longlong *)FUN_142b49cd0(lVar5,local_38,&DAT_146b2ad48);
      plVar12 = (longlong *)plVar10[1];
      lVar5 = *plVar10;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_30 + 1;
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      plVar10 = *(longlong **)(lVar5 + 0x10);
      lVar5 = *(longlong *)(lVar5 + 8);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar12 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (lVar5 != 0) {
        local_48[1] = 0x21;
        local_48[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
        FGenericPlatformString::Memcpy(local_48[0],L"ExperienceRefreshIntervalSeconds",0x42);
        uVar13 = FUN_142afb1f0(lVar5,local_48,0x43960000,0x41f00000,0x44e10000);
        if (local_48[0] != 0) {
          FMemory::Free();
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar10 + 1;
        lVar5 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar11 + 1;
      lVar5 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
  }
  return uVar13;
}



// FUNCTION 142b47dc0 FUN_142b47dc0 body=147 status=ok
// SIG undefined FUN_142b47dc0(void)

undefined8 * FUN_142b47dc0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_142b49cd0(param_1,local_18,&DAT_146b2acc8);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b47e60 FUN_142b47e60 body=463 status=ok
// SIG undefined FUN_142b47e60(void)

undefined8 FUN_142b47e60(longlong param_1,undefined8 param_2)

{
  wchar_t **ppwVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  int iVar8;
  wchar_t *pwVar9;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  ppwVar1 = (wchar_t **)(param_1 + 0x380);
  if (*(int *)(param_1 + 0x388) < 2) {
    pwVar7 = (wchar_t *)0x0;
    iVar8 = 0;
    if (*ppwVar1 != &DAT_146299580) {
      pwVar9 = pwVar7;
      if (DAT_146299580 != 0) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while ((&DAT_146299580)[lVar6] != 0);
        pwVar9 = (wchar_t *)(ulonglong)((int)lVar6 + 1);
      }
      *(undefined4 *)(param_1 + 0x388) = 0;
      iVar4 = (int)pwVar9;
      pwVar5 = pwVar7;
      if (*(int *)(param_1 + 0x38c) != iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(ppwVar1,pwVar9);
        pwVar5 = (wchar_t *)(ulonglong)*(uint *)(param_1 + 0x388);
      }
      iVar3 = (int)pwVar5 + iVar4;
      *(int *)(param_1 + 0x388) = iVar3;
      if (*(int *)(param_1 + 0x38c) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(ppwVar1);
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop(*ppwVar1,&DAT_146299580,(longlong)iVar4 * 2);
      }
    }
    cVar2 = FString::EndsWith(ppwVar1,L"Game",1);
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x388) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *ppwVar1;
        iVar8 = *(int *)(param_1 + 0x388) + -1;
      }
      iVar4 = iVar8 + -4;
      if (iVar4 < 0) {
        iVar8 = 0;
      }
      else if (iVar4 < iVar8) {
        iVar8 = iVar4;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      iVar4 = iVar8 + 1;
      if (iVar8 == 0) {
        iVar4 = 0;
      }
      local_30 = iVar4;
      if ((0 < iVar4) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar4 = local_30,
         pwVar7 = local_38, 0 < local_30)) {
        wcsncpy(local_38,pwVar9,(longlong)iVar8);
        pwVar7[iVar8] = L'\0';
      }
      if (ppwVar1 == &local_38) {
        if (pwVar7 != (wchar_t *)0x0) {
          FMemory::Free(pwVar7);
        }
      }
      else {
        if (*ppwVar1 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *ppwVar1 = pwVar7;
        *(int *)(param_1 + 0x388) = iVar4;
        *(undefined4 *)(param_1 + 0x38c) = local_2c;
      }
    }
    FString::ToLowerInline(ppwVar1);
  }
  FString::FString(param_2,ppwVar1);
  return param_2;
}



// FUNCTION 142b48030 FUN_142b48030 body=150 status=ok
// SIG undefined FUN_142b48030(void)

undefined8 * FUN_142b48030(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  
  if (1 < *(int *)(param_1 + 0x398)) {
    FString::FString(param_2,param_1 + 0x390);
    return param_2;
  }
  psVar1 = (short *)FUN_14169f830();
  *param_2 = 0;
  param_2[1] = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,psVar1,(longlong)iVar2 * 2);
  }
  return param_2;
}



// FUNCTION 142b480d0 FUN_142b480d0 body=147 status=ok
// SIG undefined FUN_142b480d0(void)

undefined8 * FUN_142b480d0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_142b49cd0(param_1,local_18,&DAT_146b2ace8);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b48170 FUN_142b48170 body=156 status=ok
// SIG undefined FUN_142b48170(void)

longlong * FUN_142b48170(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x2c8);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x2d0) * 2;
  while( true ) {
    if (plVar3 == plVar4) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    if ((*(longlong *)(*plVar3 + 0x38) != 0) &&
       (cVar2 = (*(code *)**(undefined8 **)*param_3)(), cVar2 != '\0')) break;
    plVar3 = plVar3 + 2;
  }
  *param_2 = *plVar3;
  lVar1 = plVar3[1];
  param_2[1] = lVar1;
  if (lVar1 == 0) {
    return param_2;
  }
  LOCK();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 142b48210 FUN_142b48210 body=549 status=ok
// SIG undefined FUN_142b48210(void)

int FUN_142b48210(longlong param_1,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5,
                 int param_6)

{
  void *_Src;
  char cVar1;
  int iVar2;
  wchar_t **ppwVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  wchar_t *_Str;
  wchar_t *local_78;
  int local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  undefined8 local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  if (*(int *)(param_3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_3;
  }
  puVar4 = (undefined2 *)0x0;
  local_68 = (undefined2 *)0x0;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    _Src = *(void **)(param_1 + 0x38);
    local_60 = CONCAT44(local_60._4_4_,iVar2);
    if (iVar2 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar2,0);
      puVar4 = local_68;
      _guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)iVar2 * 2);
      goto LAB_142b482ce;
    }
  }
  else {
    local_60 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    puVar4 = local_68;
    FGenericPlatformString::Memcpy(local_68,L"player_stream",0x1c);
LAB_142b482ce:
    puVar5 = puVar4;
    if ((int)local_60 != 0) goto LAB_142b482da;
  }
  puVar5 = &DAT_143f3eda8;
LAB_142b482da:
  FString::PrintfImpl(local_58,L"%s.%s",puVar5,puVar6);
  if (puVar4 != (undefined2 *)0x0) {
    FMemory::Free(puVar4);
  }
  local_68 = (undefined2 *)0x0;
  local_60 = 0;
  FUN_142afc750(*param_2,&local_78,local_58,&local_68);
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if ((local_70 == 0) || (local_70 == 1)) {
    local_68 = (undefined2 *)0x0;
    local_60 = 0;
    ppwVar3 = (wchar_t **)FUN_142afc750(*param_2,local_48,param_3,&local_68);
    if (&local_78 != ppwVar3) {
      if (local_78 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_78 = *ppwVar3;
      *ppwVar3 = (wchar_t *)0x0;
      local_70 = *(int *)(ppwVar3 + 1);
      local_6c = *(undefined4 *)((longlong)ppwVar3 + 0xc);
      ppwVar3[1] = (wchar_t *)0x0;
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (((local_70 != 0) && (local_70 != 1)) && (cVar1 = FString::IsNumeric(&local_78), cVar1 != '\0')
     ) {
    _Str = L"";
    if (local_70 != 0) {
      _Str = local_78;
    }
    iVar2 = _wtoi(_Str);
    param_4 = param_5;
    if ((param_5 <= iVar2) && (param_4 = param_6, iVar2 < param_6)) {
      param_4 = iVar2;
    }
  }
  if (local_78 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return param_4;
}



// FUNCTION 142b48440 FUN_142b48440 body=1339 status=ok
// SIG undefined FUN_142b48440(void)

undefined8 * FUN_142b48440(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  wchar_t wVar4;
  longlong *plVar5;
  void *_Src;
  wint_t wVar6;
  wint_t wVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  wint_t *pwVar11;
  wchar_t *pwVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  lVar8 = FInternationalization::Get();
  plVar5 = *(longlong **)(lVar8 + 0x30);
  uVar9 = *(undefined8 *)(lVar8 + 0x28);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_140511b50(uVar9);
  FString::FString(param_2,uVar9);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar15 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*param_2;
  }
  pwVar11 = &DAT_1457bfdb4;
  do {
    wVar6 = *(wint_t *)((longlong)(puVar13 + -0xa2bdfeda) + (longlong)pwVar11);
    if ((wVar6 == 0) && (*pwVar11 == 0)) goto LAB_142b48511;
    if (wVar6 != *pwVar11) {
      wVar6 = towlower(wVar6);
      wVar7 = towlower(*pwVar11);
      if (wVar6 != wVar7) break;
    }
    pwVar11 = pwVar11 + 1;
  } while( true );
  if (wVar6 != wVar7) {
    return param_2;
  }
LAB_142b48511:
  lVar8 = FInternationalization::Get();
  plVar5 = *(longlong **)(lVar8 + 0x30);
  uVar9 = *(undefined8 *)(lVar8 + 0x28);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)FCulture::GetName(uVar9);
  puVar13 = (undefined2 *)0x0;
  iVar15 = 0;
  local_38 = (undefined2 *)0x0;
  local_30 = *(int *)(puVar10 + 1);
  lVar8 = (longlong)local_30;
  _Src = (void *)*puVar10;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    puVar13 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar8 * 2);
  }
  puVar16 = puVar13;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    puVar16 = local_38;
    if ((int)lVar8 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      puVar16 = local_38;
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
        puVar16 = local_38;
      }
    }
  }
  iVar3 = local_30;
  pwVar11 = &DAT_1457c2d38;
  puVar14 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar14 = puVar13;
  }
  do {
    wVar6 = *(wint_t *)((longlong)(puVar14 + -0xa2be169c) + (longlong)pwVar11);
    if ((wVar6 == 0) && (*pwVar11 == 0)) goto LAB_142b488ef;
    if (wVar6 != *pwVar11) {
      wVar6 = towlower(wVar6);
      wVar7 = towlower(*pwVar11);
      if (wVar6 != wVar7) break;
    }
    pwVar11 = pwVar11 + 1;
  } while( true );
  if (wVar6 != wVar7) {
    pwVar12 = L"zh-Hans-SP";
    puVar13 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar13 = puVar16;
    }
    do {
      wVar4 = *(wchar_t *)((longlong)(puVar13 + -0xa2be16a8) + (longlong)pwVar12);
      if ((wVar4 == L'\0') && (*pwVar12 == L'\0')) break;
      if (wVar4 != *pwVar12) {
        wVar6 = towlower(wVar4);
        wVar7 = towlower(*pwVar12);
        if (wVar6 != wVar7) goto LAB_142b48675;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
  goto LAB_142b488ef;
LAB_142b48675:
  if (wVar6 != wVar7) {
    pwVar12 = L"zh-Hans";
    puVar13 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar13 = puVar16;
    }
    do {
      wVar4 = *(wchar_t *)((longlong)(puVar13 + -0xa2be16b4) + (longlong)pwVar12);
      if ((wVar4 == L'\0') && (*pwVar12 == L'\0')) break;
      if (wVar4 != *pwVar12) {
        wVar6 = towlower(wVar4);
        wVar7 = towlower(*pwVar12);
        if (wVar6 != wVar7) goto LAB_142b486cc;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
  goto LAB_142b488ef;
LAB_142b486cc:
  if (wVar6 != wVar7) {
    pwVar11 = &DAT_1457c2d78;
    puVar13 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar13 = puVar16;
    }
    do {
      wVar6 = *(wint_t *)((longlong)(puVar13 + -0xa2be16bc) + (longlong)pwVar11);
      if ((wVar6 == 0) && (*pwVar11 == 0)) break;
      if (wVar6 != *pwVar11) {
        wVar6 = towlower(wVar6);
        wVar7 = towlower(*pwVar11);
        if (wVar6 != wVar7) goto LAB_142b48725;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
  goto LAB_142b488ef;
LAB_142b4877c:
  if (wVar6 != wVar7) {
    pwVar12 = L"zh-Hant-HK";
    puVar13 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar13 = puVar16;
    }
    do {
      wVar4 = *(wchar_t *)((longlong)(puVar13 + -0xa2be16d4) + (longlong)pwVar12);
      if ((wVar4 == L'\0') && (*pwVar12 == L'\0')) break;
      if (wVar4 != *pwVar12) {
        wVar6 = towlower(wVar4);
        wVar7 = towlower(*pwVar12);
        if (wVar6 != wVar7) goto LAB_142b487d5;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
  goto LAB_142b488a3;
LAB_142b487d5:
  if (wVar6 != wVar7) {
    pwVar12 = L"zh-Hant";
    puVar13 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar13 = puVar16;
    }
    do {
      wVar4 = *(wchar_t *)((longlong)(puVar13 + -0xa2be16e0) + (longlong)pwVar12);
      if ((wVar4 == L'\0') && (*pwVar12 == L'\0')) break;
      if (wVar4 != *pwVar12) {
        wVar6 = towlower(wVar4);
        wVar7 = towlower(*pwVar12);
        if (wVar6 != wVar7) goto LAB_142b4882c;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
  goto LAB_142b488a3;
LAB_142b4882c:
  if (wVar6 != wVar7) {
    pwVar11 = &DAT_1457c2dd0;
    puVar13 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar13 = puVar16;
    }
    do {
      wVar6 = *(wint_t *)((longlong)(puVar13 + -0xa2be16e8) + (longlong)pwVar11);
      if ((wVar6 == 0) && (*pwVar11 == 0)) break;
      if (wVar6 != *pwVar11) {
        wVar6 = towlower(wVar6);
        wVar7 = towlower(*pwVar11);
        if (wVar6 != wVar7) goto LAB_142b48882;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_142b488a3:
  if ((undefined8 *)*param_2 == &DAT_1457c2de0) goto LAB_142b4893c;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,4);
    iVar15 = *(int *)(param_2 + 1);
  }
  *(int *)(param_2 + 1) = iVar15 + 4;
  if (*(int *)((longlong)param_2 + 0xc) < iVar15 + 4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar15);
  }
  uVar9 = 0x7400680063;
  goto LAB_142b48935;
LAB_142b48882:
  if (wVar6 != wVar7) {
    FString::operator=(param_2,&local_38);
    puVar16 = local_38;
    goto LAB_142b4893c;
  }
  goto LAB_142b488a3;
LAB_142b48725:
  if (wVar6 != wVar7) {
    pwVar12 = L"zh-Hant-TW";
    puVar13 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar13 = puVar16;
    }
    do {
      wVar4 = *(wchar_t *)((longlong)(puVar13 + -0xa2be16c8) + (longlong)pwVar12);
      if ((wVar4 == L'\0') && (*pwVar12 == L'\0')) goto LAB_142b488a3;
      if (wVar4 != *pwVar12) {
        wVar6 = towlower(wVar4);
        wVar7 = towlower(*pwVar12);
        if (wVar6 != wVar7) goto LAB_142b4877c;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
LAB_142b488ef:
  if ((undefined8 *)*param_2 != &DAT_1457c2d88) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,4);
      iVar15 = *(int *)(param_2 + 1);
    }
    *(int *)(param_2 + 1) = iVar15 + 4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar15 + 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar15);
    }
    uVar9 = 0x6e00680063;
LAB_142b48935:
    *(undefined8 *)*param_2 = uVar9;
  }
LAB_142b4893c:
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  return param_2;
}



// FUNCTION 142b48980 FUN_142b48980 body=121 status=ok
// SIG undefined FUN_142b48980(void)

undefined8 * FUN_142b48980(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  if (DAT_146b2ade0 == 0) {
    puVar3 = (undefined8 *)FName::FName(local_res8,"GbxSpark",1);
    uVar1 = *puVar3;
    uVar4 = FUN_14168dc80();
    FUN_141690010(uVar4,uVar1);
  }
  lVar2 = *(longlong *)(DAT_146b2ade0 + 0x18);
  *param_1 = *(undefined8 *)(lVar2 + 0x208);
  lVar2 = *(longlong *)(lVar2 + 0x210);
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 142b48a00 FUN_142b48a00 body=147 status=ok
// SIG undefined FUN_142b48a00(void)

undefined8 * FUN_142b48a00(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_142b49cd0(param_1,local_18,&DAT_146b2ad10);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b48aa0 FUN_142b48aa0 body=584 status=ok
// SIG undefined FUN_142b48aa0(void)

longlong * FUN_142b48aa0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int local_res8 [2];
  undefined1 local_res20 [8];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong **local_40;
  
  FUN_142b62650();
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,param_3);
  plVar7 = (longlong *)0x0;
  plVar5 = plVar7;
  if (local_res8[0] != -1) {
    plVar5 = (longlong *)(*param_1 + (longlong)local_res8[0] * 0x28);
  }
  plVar3 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar3 = plVar7;
  }
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
    *param_2 = *plVar3;
    lVar4 = plVar3[1];
    param_2[1] = lVar4;
    if (lVar4 == 0) {
      return param_2;
    }
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    return param_2;
  }
  lVar4 = operator_new(0x1a8);
  plVar5 = plVar7;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_142b351f0(lVar4,param_3);
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar3 = plVar7;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)plVar5;
    plVar3 = plVar6;
  }
  plVar6 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar7;
  }
  local_58 = plVar5;
  local_50 = plVar3;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        *piVar1 = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (0 < iVar2) goto LAB_142b48c4f;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar5;
    plVar5 = (longlong *)plVar6[1];
    if (plVar3 != plVar5) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar6[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar6[1] = (longlong)plVar3;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
LAB_142b48c4f:
  local_40 = &local_58;
  local_48 = param_3;
  FUN_142b32680(param_1,local_res20,&local_48,0);
  plVar5 = local_50;
  *param_2 = (longlong)local_58;
  param_2[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142b48cf0 FUN_142b48cf0 body=212 status=ok
// SIG undefined FUN_142b48cf0(void)

undefined8 * FUN_142b48cf0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  
  if (DAT_146b2ade0 == 0) {
    puVar7 = (undefined8 *)FName::FName(local_res8,"GbxSpark",1);
    uVar4 = *puVar7;
    uVar8 = FUN_14168dc80();
    FUN_141690010(uVar8,uVar4);
  }
  plVar5 = *(longlong **)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x210);
  lVar6 = *(longlong *)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x208);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  *param_1 = *(undefined8 *)(lVar6 + 0x40);
  lVar6 = *(longlong *)(lVar6 + 0x48);
  param_1[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 142b48dd0 FUN_142b48dd0 body=641 status=ok
// SIG undefined FUN_142b48dd0(void)

undefined8 * FUN_142b48dd0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int local_res8 [2];
  undefined ***local_res10;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_58 = (longlong *)param_3[1];
  local_60 = (longlong *)*param_3;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)(param_1 + 0xa0);
  local_68 = &PTR_FUN_143f740c8;
  local_50 = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    if ((local_60 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*local_60 + 0x20))(local_60), plVar4 = local_60, cVar6 == '\0')) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (**(code **)(*local_60 + 0x18))(local_60);
      if (uVar7 < 4) {
        pbVar8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4);
        uVar7 = (uint)*pbVar8;
      }
      else {
        pcVar3 = *(code **)(*plVar4 + 0x10);
        if (uVar7 < 8) {
          puVar9 = (uint *)(*pcVar3)();
          uVar7 = *puVar9;
        }
        else {
          puVar10 = (undefined8 *)(*pcVar3)(plVar4);
          uVar7 = (int)((ulonglong)*puVar10 >> 0x20) * 0x17 + (int)*puVar10;
        }
      }
    }
    lVar11 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      lVar11 = param_1 + 0xd8;
    }
    iVar12 = *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & (longlong)(int)uVar7) * 4)
    ;
    if (iVar12 != -1) {
      lVar11 = *plVar2;
      do {
        lVar13 = (longlong)iVar12 * 0x40;
        plVar4 = *(longlong **)(lVar11 + 8 + lVar13);
        if ((((plVar4 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar4 + 0x20))(), cVar6 == '\0')) ||
            (local_60 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*local_60 + 0x20))(local_60), cVar6 == '\0')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        plVar4 = *(longlong **)(lVar11 + lVar13 + 8);
        if ((((plVar4 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar4 + 0x20))(), cVar6 == '\0')) &&
            ((local_60 == (longlong *)0x0 ||
             (cVar6 = (**(code **)(*local_60 + 0x20))(local_60), cVar6 == '\0')))) ||
           ((bVar5 && (cVar6 = (**(code **)*local_60)(local_60,*(undefined8 *)(lVar11 + lVar13 + 8))
                      , cVar6 != '\0')))) {
          if ((iVar12 != -1) && (lVar13 = lVar13 + *plVar2, lVar13 != 0)) goto LAB_142b48fb9;
          break;
        }
        lVar11 = *plVar2;
        iVar12 = *(int *)(lVar11 + 0x38 + lVar13);
      } while (iVar12 != -1);
    }
  }
  local_res10 = &local_68;
  FUN_142b317f0(plVar2,local_res8,&local_res10,0);
  lVar13 = (longlong)local_res8[0] * 0x40 + *plVar2;
LAB_142b48fb9:
  local_68 = &PTR_FUN_143f740c8;
  if (local_50 != 0) {
    FMemory::Free();
  }
  plVar2 = local_58;
  local_68 = &PTR_FUN_143f73d18;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  *param_2 = 0;
  FUN_142b30b20(param_2,*(undefined8 *)(lVar13 + 0x28),*(undefined4 *)(lVar13 + 0x30),0,0);
  return param_2;
}



// FUNCTION 142b49060 FUN_142b49060 body=147 status=ok
// SIG undefined FUN_142b49060(void)

undefined8 * FUN_142b49060(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_142b49cd0(param_1,local_18,&DAT_146b2ad18);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b49100 FUN_142b49100 body=7 status=ok
// SIG undefined FUN_142b49100(void)

undefined4 FUN_142b49100(longlong param_1)

{
  return *(undefined4 *)(param_1 + 800);
}



// FUNCTION 142b49110 GetLeaderboardsInterface body=34 status=ok
// SIG undefined GetLeaderboardsInterface(void)

undefined8 * FOnlineSubsystemEOS::GetLeaderboardsInterface(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x1f8);
  lVar1 = *(longlong *)(param_1 + 0x200);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142b49140 FUN_142b49140 body=147 status=ok
// SIG undefined FUN_142b49140(void)

undefined8 * FUN_142b49140(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_142b49cd0(param_1,local_18,&DAT_146b2ad40);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b491e0 GetAchievementsInterface body=34 status=ok
// SIG undefined GetAchievementsInterface(void)

undefined8 * FOnlineSubsystemEOS::GetAchievementsInterface(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 600);
  lVar1 = *(longlong *)(param_1 + 0x260);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142b49210 FUN_142b49210 body=780 status=ok
// SIG undefined FUN_142b49210(void)

longlong * FUN_142b49210(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  
  plVar2 = (longlong *)(param_1 + 0x2b8);
  local_50 = (longlong *)0x0;
  plVar8 = (longlong *)*plVar2;
  plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x2c0) * 2;
  do {
    if (plVar8 == plVar7) {
LAB_142b49337:
      puVar6 = (undefined8 *)operator_new(0x40);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *puVar6 = *param_3;
        lVar3 = param_3[1];
        puVar6[1] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
      }
      plVar8 = (longlong *)0x0;
      plVar7 = (longlong *)operator_new(0x18);
      if (plVar7 != (longlong *)0x0) {
        *(undefined4 *)(plVar7 + 1) = 1;
        *plVar7 = (longlong)&PTR_FUN_1457c5a38;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        plVar7[2] = (longlong)puVar6;
        plVar8 = plVar7;
      }
      local_30 = plVar8;
      SharedPointerInternals::EnableSharedFromThis(&local_38,puVar6,puVar6);
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_30);
      plVar8 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_30 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      plVar8 = local_50;
      if (puVar6 != (undefined8 *)0x0) {
        FString::operator=(puVar6 + 2,param_4);
        plVar8 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        iVar5 = *(int *)(param_1 + 0x2c0);
        *(int *)(param_1 + 0x2c0) = iVar5 + 1;
        if (*(int *)(param_1 + 0x2c4) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar5);
        }
        plVar7 = local_50;
        puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar2);
        *puVar9 = puVar6;
        puVar9[1] = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar8 = plVar8 + 1;
          lVar3 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          plVar8 = local_50;
          if ((int)lVar3 == 1) {
            (**(code **)*local_50)(local_50);
            plVar8 = local_50;
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
      }
LAB_142b494bd:
      plVar2 = local_50;
      *param_2 = (longlong)puVar6;
      param_2[1] = (longlong)plVar8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar8 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      return param_2;
    }
    cVar4 = (*(code *)**(undefined8 **)*param_3)((undefined8 *)*param_3,*(undefined8 *)*plVar8);
    if (cVar4 != '\0') {
      if (*(int *)(param_4 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*param_4;
      }
      if (*(int *)(*plVar8 + 0x18) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = *(undefined2 **)(*plVar8 + 0x10);
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (iVar5 == 0) {
        local_40 = (longlong *)plVar8[1];
        puVar6 = (undefined8 *)*plVar8;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        local_48 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_40);
        plVar8 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_40 + 1;
          lVar3 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
        plVar8 = local_50;
        if (puVar6 != (undefined8 *)0x0) goto LAB_142b494bd;
        goto LAB_142b49337;
      }
    }
    plVar8 = plVar8 + 2;
  } while( true );
}



// FUNCTION 142b49520 FUN_142b49520 body=175 status=ok
// SIG undefined FUN_142b49520(void)

undefined8 * FUN_142b49520(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int local_res8 [2];
  
  plVar1 = (longlong *)(param_1 + 0x380);
  piVar2 = (int *)TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
                  ::FindId(plVar1,local_res8);
  if (*piVar2 == -1) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8,param_3);
  if (local_res8[0] != -1) {
    FString::FString(param_2,*plVar1 + (longlong)local_res8[0] * 0x28 + 0x10);
    return param_2;
  }
  FString::FString(param_2,0x10);
  return param_2;
}



// FUNCTION 142b495d0 FUN_142b495d0 body=95 status=ok
// SIG undefined FUN_142b495d0(void)

undefined8 * FUN_142b495d0(longlong param_1,undefined8 *param_2)

{
  if (1 < *(int *)(param_1 + 0x3a8)) {
    FString::FString(param_2,param_1 + 0x3a0);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"steam",0xc);
  return param_2;
}



// FUNCTION 142b49630 FUN_142b49630 body=147 status=ok
// SIG undefined FUN_142b49630(void)

undefined8 * FUN_142b49630(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_142b49cd0(param_1,local_18,&DAT_146b2ad60);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b496d0 FUN_142b496d0 body=174 status=ok
// SIG undefined FUN_142b496d0(void)

undefined8 FUN_142b496d0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x60);
  plVar4 = plVar2;
  while( true ) {
    if (plVar4 == plVar2 + (longlong)iVar1 * 7) {
      return 0;
    }
    if ((*plVar4 != 0) && (cVar3 = (*(code *)**(undefined8 **)*param_2)(), cVar3 != '\0')) break;
    plVar4 = plVar4 + 7;
  }
  iVar1 = (int)(((longlong)plVar4 - (longlong)plVar2) / 0x38);
  if (iVar1 < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x60) <= iVar1) {
    return 0;
  }
  FUN_142b389b0(param_3,(longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x58));
  return 1;
}



// FUNCTION 142b49780 FUN_142b49780 body=618 status=ok
// SIG undefined FUN_142b49780(void)

void FUN_142b49780(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 local_res10 [8];
  longlong local_98 [4];
  code *local_78;
  undefined4 uStack_70;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [16];
  
  iVar7 = 0;
  plVar8 = (longlong *)FUN_142b49cd0(param_1,local_58,&DAT_146b2ac50);
  plVar4 = (longlong *)plVar8[1];
  lVar5 = *plVar8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (lVar5 != 0) {
    if (DAT_146b2ade0 == 0) {
      puVar9 = (undefined8 *)FName::FName(local_res10,"GbxSpark",1);
      uVar11 = *puVar9;
      uVar10 = FUN_14168dc80();
      FUN_141690010(uVar10,uVar11);
    }
    plVar8 = *(longlong **)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x290);
    lVar6 = *(longlong *)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x288);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      local_78 = FUN_142b4d530;
      uStack_70 = 0;
      local_98[2] = 0;
      local_98[3] = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_68 = lVar6;
      local_60 = plVar8;
      uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x60,local_48);
      uVar11 = FUN_1404f5700(local_38,uVar11,&local_78);
      iVar7 = FUN_142abe060(lVar5,param_1 + 0x20,uVar11,local_98,local_98 + 2,&local_68);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      if (local_98[0] != 0) {
        FMemory::Free();
      }
      if (local_98[2] != 0) {
        FMemory::Free();
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (0 < iVar7) {
      *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x328);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 142b499f0 FUN_142b499f0 body=301 status=ok
// SIG undefined FUN_142b499f0(void)

longlong * FUN_142b499f0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_38 [2];
  longlong *local_28;
  longlong *local_20;
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar4 = *(longlong **)(*param_3 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0xa8))(plVar4,&local_28);
    if (local_28 != (longlong *)0x0) {
      local_38[0] = 0;
      local_38[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"ETag",10);
      plVar4 = (longlong *)(**(code **)(*local_28 + 0x10))(local_28,local_18,local_38);
      if (param_2 != plVar4) {
        if (*param_2 != 0) {
          FMemory::Free();
        }
        *param_2 = *plVar4;
        *plVar4 = 0;
        *(int *)(param_2 + 1) = (int)plVar4[1];
        *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
        plVar4[1] = 0;
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_20 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b49b20 FUN_142b49b20 body=426 status=ok
// SIG undefined FUN_142b49b20(void)

undefined8 * FUN_142b49b20(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  uint uStackX_c;
  undefined1 local_res18 [8];
  
  plVar8 = (longlong *)0x0;
  if (*param_1 == 1) {
    plVar9 = (longlong *)((ulonglong)uStackX_c << 0x20);
LAB_142b49bc1:
    bVar11 = true;
  }
  else {
    if (((*param_1 == 0) && (*(longlong *)(param_1 + 2) != 0)) && (*(longlong *)(param_1 + 4) != 0))
    {
      piVar1 = (int *)(*(longlong *)(param_1 + 4) + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        plVar2 = *(longlong **)(param_1 + 4);
        plVar9 = plVar2;
        plVar10 = plVar8;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar11 = iVar5 == 0;
          if (bVar11) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          while (plVar9 = plVar8, plVar10 = (longlong *)0x0, !bVar11) {
            LOCK();
            bVar11 = iVar5 == (int)plVar2[1];
            if (bVar11) {
              *(int *)(plVar2 + 1) = iVar5 + 1;
            }
            UNLOCK();
            if (bVar11) {
              plVar9 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                plVar10 = *(longlong **)(param_1 + 2);
              }
              break;
            }
            LOCK();
            iVar5 = (int)plVar2[1];
            bVar11 = iVar5 == 0;
            if (bVar11) {
              *(int *)(plVar2 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
          }
        }
        plVar8 = (longlong *)0x1;
        if ((char)plVar10[3] == '\0') {
          bVar11 = false;
          goto LAB_142b49bc4;
        }
        goto LAB_142b49bc1;
      }
    }
    plVar9 = (longlong *)((ulonglong)uStackX_c << 0x20);
    bVar11 = false;
  }
LAB_142b49bc4:
  if ((plVar8 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (bVar11) {
    if (DAT_146b2ade0 == 0) {
      puVar6 = (undefined8 *)FName::FName(local_res18,"GbxSpark",1);
      uVar3 = *puVar6;
      uVar7 = FUN_14168dc80();
      FUN_141690010(uVar7,uVar3);
    }
    plVar8 = *(longlong **)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x210);
    uVar3 = *(undefined8 *)(*(longlong *)(DAT_146b2ade0 + 0x18) + 0x208);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *param_2 = uVar3;
    param_2[1] = plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar8 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
            return param_2;
          }
        }
      }
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 142b49cd0 FUN_142b49cd0 body=298 status=ok
// SIG undefined FUN_142b49cd0(void)

longlong * FUN_142b49cd0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res8;
  int local_resc;
  int local_res18;
  int local_res1c;
  
  lVar2 = *param_3;
  FName::FName(&local_res8,L"Verify",1);
  iVar5 = (int)((ulonglong)lVar2 >> 0x20);
  if (((((int)lVar2 != local_res8) || (lVar7 = DAT_146b2ac50, iVar5 != local_resc)) &&
      (FName::FName(&local_res18,L"Account",1), lVar7 = lVar2, (int)lVar2 == local_res18)) &&
     (iVar5 == local_res1c)) {
    lVar7 = DAT_146b2ac50;
  }
  plVar9 = *(longlong **)(param_1 + 0x40);
  plVar8 = plVar9 + (longlong)*(int *)(param_1 + 0x48) * 2;
  while( true ) {
    if (plVar9 == plVar8) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    plVar3 = (longlong *)plVar9[1];
    plVar4 = (longlong *)*plVar9;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if ((plVar4 != (longlong *)0x0) &&
       (plVar6 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4), *plVar6 == lVar7)) break;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar2 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    plVar9 = plVar9 + 2;
  }
  *param_2 = (longlong)plVar4;
  param_2[1] = (longlong)plVar3;
  return param_2;
}



// FUNCTION 142b49e00 FUN_142b49e00 body=725 status=ok
// SIG undefined FUN_142b49e00(void)

longlong * FUN_142b49e00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong local_68;
  longlong *local_60;
  longlong local_58 [3];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_142b47190(param_1,&local_68);
  plVar4 = local_60;
  if (local_68 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_60 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
          return param_2;
        }
      }
    }
  }
  else {
    plVar8 = (longlong *)FUN_142b49cd0(local_68,local_38,&DAT_146b2ad10);
    plVar4 = (longlong *)plVar8[1];
    lVar5 = *plVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_30 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    plVar8 = *(longlong **)(lVar5 + 0x10);
    lVar5 = *(longlong *)(lVar5 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (lVar5 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar8 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0xcc) == '\0') {
        *(undefined1 *)(param_1 + 0xcc) = 1;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        local_58[2] = lVar5;
        local_40 = plVar8;
        FUN_142b57340(param_1,local_58 + 2);
        FUN_142b577f0(param_1,local_58 + 2);
        local_58[1] = 0xe;
        local_58[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
        FGenericPlatformString::Memcpy(local_58[0],L"JsonBufferMax",0x1c);
        uVar7 = FUN_142b48210(param_1,local_58 + 2,local_58,0x1f400,64000,500000);
        *(undefined4 *)(param_1 + 400) = uVar7;
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar8 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
      }
      *param_2 = lVar5;
      param_2[1] = (longlong)plVar8;
    }
    plVar4 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_60 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142b4a0e0 FUN_142b4a0e0 body=238 status=ok
// SIG undefined FUN_142b4a0e0(void)

undefined8 * FUN_142b4a0e0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_res20 [8];
  longlong local_18;
  longlong *local_10;
  
  FUN_142b49cd0(param_1,&local_18);
  if (local_18 == 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x50);
    puVar7 = puVar6 + (longlong)*(int *)(param_1 + 0x58) * 2;
    for (; puVar6 != puVar7; puVar6 = puVar6 + 2) {
      plVar5 = (longlong *)FKey::GetFName(*puVar6,local_res20);
      if (*param_3 == *plVar5) {
        *param_2 = *puVar6;
        lVar4 = puVar6[1];
        goto LAB_142b4a11c;
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *(undefined8 *)(local_18 + 8);
    lVar4 = *(longlong *)(local_18 + 0x10);
LAB_142b4a11c:
    param_2[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142b4a1d0 FUN_142b4a1d0 body=83 status=ok
// SIG undefined FUN_142b4a1d0(void)

longlong * FUN_142b4a1d0(longlong *param_1)

{
  longlong *plVar1;
  longlong local_res8 [4];
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,local_res8);
    plVar1 = &DAT_146b2ae00;
    do {
      if (*plVar1 == local_res8[0]) {
        return plVar1 + 1;
      }
      plVar1 = plVar1 + 3;
    } while (plVar1 != (longlong *)&DAT_146b2aec0);
  }
  return &DAT_146b2ae08;
}



// FUNCTION 142b4a230 FUN_142b4a230 body=390 status=ok
// SIG undefined FUN_142b4a230(void)

ulonglong FUN_142b4a230(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong *local_res10;
  undefined2 *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  cVar1 = FUN_142b01f90(*param_2);
  if (cVar1 == '\0') {
    lVar5 = *param_1;
    uVar3 = FUN_142afc450(*param_2);
    uVar4 = (**(code **)(lVar5 + 0x18))(param_1,uVar3);
  }
  else {
    uVar4 = FUN_142afb290();
    uVar7 = uVar4 & 0xffffffff;
    if (*param_3 != 0) {
      local_28[1] = 6;
      local_38 = (undefined2 *)0x0;
      local_30 = 0;
      local_res10 = (longlong *)0x0;
      local_28[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Memcpy(local_28[0],L"error",0xc);
      FUN_1416b3e60(*param_3,local_28,&local_res10);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if ((local_res10 == (longlong *)0x0) || (*local_res10 == 0)) {
        local_28[0] = 0;
        local_28[1] = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Memcpy(local_28[0],L"error",0xc);
        lVar5 = *param_3;
      }
      else {
        local_28[0] = 0;
        local_28[1] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Memcpy(local_28[0],L"code",10);
        lVar5 = *local_res10;
      }
      FUN_1416b40a0(lVar5,local_28,&local_38);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      puVar6 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar6 = local_38;
      }
      uVar2 = (**(code **)(*param_1 + 0x20))(param_1,puVar6);
      if (uVar2 != 0) {
        uVar7 = (ulonglong)uVar2;
      }
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return uVar7;
    }
  }
  return uVar4;
}



// FUNCTION 142b4a6e0 FUN_142b4a6e0 body=163 status=ok
// SIG undefined FUN_142b4a6e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142b4a6e0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x108) != 0) && (*(longlong **)(param_1 + 0x100) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x108) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x100) + 0x38))
                  (*(longlong **)(param_1 + 0x100),param_2,param_3);
        return param_2;
      }
      (**(code **)(_DAT_00000000 + 0x38))(0,param_2,param_3);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142b4a790 FUN_142b4a790 body=392 status=ok
// SIG undefined FUN_142b4a790(void)

void ** FUN_142b4a790(longlong param_1,void **param_2)

{
  void *_Src;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  void **ppvVar4;
  longlong lVar5;
  void *local_48;
  ulonglong local_40;
  longlong local_38 [4];
  void *local_18;
  int local_10;
  
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"stable",0xe);
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[0] = 0;
    local_38[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"Environment",0x18);
    FUN_142afc750(*(undefined8 *)(param_1 + 0x288),local_38 + 4,local_38,local_38 + 2);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_38[2] != 0) {
      FMemory::Free();
    }
    if (local_10 != 0) {
      iVar2 = local_10 + -1;
    }
    ppvVar4 = (void **)(local_38 + 4);
    if (iVar2 < 1) {
      ppvVar4 = param_2;
    }
    FString::operator=(param_2,ppvVar4);
    if (local_18 != (void *)0x0) {
      FMemory::Free();
    }
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  uVar3 = FCommandLine::Get();
  cVar1 = FParse::Value(uVar3,L"sparkenv=",&local_48,1);
  _Src = local_48;
  if ((cVar1 != '\0') && (param_2 != &local_48)) {
    lVar5 = (longlong)(int)local_40;
    *(int *)(param_2 + 1) = (int)local_40;
    if (((int)local_40 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_40 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*param_2,_Src,lVar5 * 2);
    }
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return param_2;
}



// FUNCTION 142b4a920 FUN_142b4a920 body=99 status=ok
// SIG undefined FUN_142b4a920(void)

undefined8 FUN_142b4a920(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  if (DAT_146b2ade0 == 0) {
    puVar2 = (undefined8 *)FName::FName(local_res8,"GbxSpark",1);
    uVar1 = *puVar2;
    uVar3 = FUN_14168dc80();
    FUN_141690010(uVar3,uVar1);
  }
  FUN_142b4a790(*(undefined8 *)(DAT_146b2ade0 + 0x18),param_1);
  return param_1;
}



// FUNCTION 142b4a990 FUN_142b4a990 body=159 status=ok
// SIG undefined FUN_142b4a990(void)

longlong * FUN_142b4a990(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x308);
  plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x310) * 2;
  while( true ) {
    if (plVar4 == plVar5) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    puVar1 = *(undefined8 **)(*plVar4 + 0x260);
    if ((puVar1 != (undefined8 *)0x0) &&
       (cVar3 = (**(code **)*puVar1)(puVar1,*param_3), cVar3 != '\0')) break;
    plVar4 = plVar4 + 2;
  }
  *param_2 = *plVar4;
  lVar2 = plVar4[1];
  param_2[1] = lVar2;
  if (lVar2 == 0) {
    return param_2;
  }
  LOCK();
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  UNLOCK();
  return param_2;
}



// FUNCTION 142b4aa30 FUN_142b4aa30 body=891 status=ok
// SIG undefined FUN_142b4aa30(void)

undefined4 * FUN_142b4aa30(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined2 *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  
  param_2[1] = 0x1e;
  iVar2 = *(int *)(param_1 + 0xc4);
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0x3fc00000;
  param_2[4] = 2;
  if (iVar2 == 3) {
    *param_2 = 3;
    param_2[1] = 2;
    param_2[2] = 0x40000000;
    param_2[3] = 2;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar8 = (longlong *)FUN_142b49cd0(*(longlong *)(param_1 + 0x28),local_38,&DAT_146b2ac50);
    plVar3 = (longlong *)plVar8[1];
    lVar4 = *plVar8;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_30 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if ((*(longlong *)(lVar4 + 8) != 0) && (*(int *)(param_1 + 0xc4) == 3)) {
      local_88 = (undefined2 *)0x0;
      local_80 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      puVar6 = local_88;
      FGenericPlatformString::Memcpy(local_88,L"Verify",0xe);
      iVar2 = (int)local_80;
      if (1 < (int)local_80) {
        puVar9 = &DAT_143f3eda8;
        if ((int)local_80 != 0) {
          puVar9 = puVar6;
        }
        FString::PrintfImpl(&local_98,L"%s.FirstAttemptDelay",puVar9);
        uVar7 = FUN_142afb390(*(undefined8 *)(lVar4 + 8),&local_98,*param_2,0,999);
        *param_2 = uVar7;
        puVar9 = &DAT_143f3eda8;
        if (iVar2 != 0) {
          puVar9 = puVar6;
        }
        FString::PrintfImpl(&local_78,L"%s.BaseRetrySeconds",puVar9);
        if (local_98 != 0) {
          FMemory::Free();
        }
        local_98 = local_78;
        local_90 = local_70;
        local_8c = local_6c;
        uVar7 = FUN_142afb390(*(undefined8 *)(lVar4 + 8),&local_98,param_2[1],1,999);
        param_2[1] = uVar7;
        puVar9 = &DAT_143f3eda8;
        if (iVar2 != 0) {
          puVar9 = puVar6;
        }
        FString::PrintfImpl(&local_68,L"%s.RetryMultiplier",puVar9);
        if (local_98 != 0) {
          FMemory::Free();
        }
        local_98 = local_68;
        local_90 = local_60;
        local_8c = local_5c;
        uVar7 = FUN_142afb1f0(*(undefined8 *)(lVar4 + 8),&local_98,param_2[2],0,0x41200000);
        param_2[2] = uVar7;
        puVar9 = &DAT_143f3eda8;
        if (iVar2 != 0) {
          puVar9 = puVar6;
        }
        FString::PrintfImpl(&local_58,L"%s.MaxRetryAttempts",puVar9);
        if (local_98 != 0) {
          FMemory::Free();
        }
        local_98 = local_58;
        local_90 = local_50;
        local_8c = local_4c;
        uVar7 = FUN_142afb390(*(undefined8 *)(lVar4 + 8),&local_98,param_2[3],0,5);
        param_2[3] = uVar7;
        puVar9 = &DAT_143f3eda8;
        if (iVar2 != 0) {
          puVar9 = puVar6;
        }
        FString::PrintfImpl(&local_48,L"%s.RetryJitter",puVar9);
        if (local_98 != 0) {
          FMemory::Free();
        }
        local_98 = local_48;
        local_90 = local_40;
        local_8c = local_3c;
        uVar7 = FUN_142afb390(*(undefined8 *)(lVar4 + 8),&local_98,param_2[4],1,10);
        param_2[4] = uVar7;
        if (local_98 != 0) {
          FMemory::Free();
        }
      }
      if (puVar6 != (undefined2 *)0x0) {
        FMemory::Free(puVar6);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b4adb0 FUN_142b4adb0 body=147 status=ok
// SIG undefined FUN_142b4adb0(void)

undefined8 * FUN_142b4adb0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_142b49cd0(param_1,local_18,&DAT_146b2ad68);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b4ae50 FUN_142b4ae50 body=816 status=ok
// SIG undefined FUN_142b4ae50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong * FUN_142b4ae50(ulonglong *param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  short *psVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  uint local_180;
  uint local_17c;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  longlong local_58;
  short *local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,"WindowsNoEditor");
  uVar13 = 0;
  uVar8 = 0;
  local_178 = 0;
  local_170 = 0;
  lVar9 = -1;
  if ((local_50 != (short *)0x0) && (lVar11 = lVar9, *local_50 != 0)) {
    do {
      lVar11 = lVar11 + 1;
    } while (local_50[lVar11] != 0);
    uVar10 = (int)lVar11 + 1;
    local_170 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    }
    FGenericPlatformString::Memcpy(local_178,local_50,(longlong)(int)uVar10 * 2);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  uVar2 = local_170;
  iVar1 = (int)local_170;
  lVar11 = (longlong)(int)local_170;
  iVar5 = (2 - (uint)((int)local_170 != 0)) + (int)local_170;
  local_170 = CONCAT44(local_170._4_4_,iVar5);
  if (local_170._4_4_ < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,uVar2 & 0xffffffff);
  }
  puVar7 = (undefined2 *)(local_178 + (lVar11 - (ulonglong)(iVar1 != 0)) * 2);
  *puVar7 = 0x5f;
  puVar7[1] = 0;
  local_168 = 0;
  local_160 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
  FGenericPlatformString::Memcpy(local_168,L"Default",0x10);
  FString::FString(param_1,param_2);
  cVar3 = FString::StartsWith(param_1,&local_178,1);
  uVar14 = 0xffffffff;
  uVar15 = 0;
  uVar10 = uVar15;
  if (cVar3 == '\0') {
    cVar3 = FString::StartsWith(param_1,&local_168,1);
    if (cVar3 == '\0') goto LAB_142b4b137;
    uVar6 = (int)param_1[1] - 1;
    if ((int)param_1[1] == 0) {
      uVar6 = uVar15;
    }
    uVar4 = uVar8;
    if ((int)local_160 != 0) {
      uVar4 = (int)local_160 - 1;
    }
    iVar1 = *(int *)(param_2 + 1);
    uVar6 = uVar6 - uVar4;
    if (iVar1 == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
      uVar14 = iVar1 - 1;
    }
    uVar2 = (ulonglong)uVar14;
    if (iVar1 == 0) {
      uVar14 = uVar8;
      uVar2 = uVar13;
    }
    uVar8 = uVar15;
    if ((-1 < (int)uVar6) && (uVar8 = uVar14, (int)uVar6 < (int)uVar14)) {
      uVar8 = uVar6;
    }
    local_188 = 0;
    local_17c = 0;
    psVar12 = puVar7 + ((longlong)(int)uVar2 - (longlong)(int)uVar8);
    if ((psVar12 != (short *)0x0) && (uVar13 = 0, *psVar12 != 0)) {
      do {
        lVar9 = lVar9 + 1;
      } while (psVar12[lVar9] != 0);
      goto LAB_142b4b0cd;
    }
  }
  else {
    uVar6 = (int)param_1[1] - 1;
    if ((int)param_1[1] == 0) {
      uVar6 = uVar8;
    }
    uVar4 = uVar8;
    if ((int)local_170 != 0) {
      uVar4 = (int)local_170 - 1;
    }
    iVar1 = *(int *)(param_2 + 1);
    uVar6 = uVar6 - uVar4;
    if (iVar1 == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
      uVar14 = iVar1 - 1;
    }
    uVar2 = (ulonglong)uVar14;
    if (iVar1 == 0) {
      uVar14 = uVar8;
      uVar2 = uVar13;
    }
    uVar8 = uVar15;
    if ((-1 < (int)uVar6) && (uVar8 = uVar14, (int)uVar6 < (int)uVar14)) {
      uVar8 = uVar6;
    }
    local_188 = 0;
    local_17c = 0;
    psVar12 = puVar7 + ((longlong)(int)uVar2 - (longlong)(int)uVar8);
    if ((psVar12 != (short *)0x0) && (*psVar12 != 0)) {
      do {
        lVar9 = lVar9 + 1;
      } while (psVar12[lVar9] != 0);
LAB_142b4b0cd:
      local_17c = 0;
      local_188 = 0;
      uVar8 = (int)lVar9 + 1;
      local_180 = uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
      }
      uVar15 = local_17c;
      uVar10 = local_180;
      uVar13 = local_188;
      FGenericPlatformString::Memcpy(local_188,psVar12,(longlong)(int)uVar8 * 2);
    }
  }
  if (param_1 == &local_188) {
    if (uVar13 != 0) {
      FMemory::Free(uVar13);
    }
  }
  else {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = uVar13;
    *(uint *)((longlong)param_1 + 0xc) = uVar15;
    *(uint *)(param_1 + 1) = uVar10;
  }
LAB_142b4b137:
  if (local_168 != 0) {
    FMemory::Free();
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142b4b180 FUN_142b4b180 body=8 status=ok
// SIG undefined FUN_142b4b180(void)

longlong FUN_142b4b180(longlong param_1)

{
  return param_1 + 0x278;
}



// FUNCTION 142b4b190 GetOldPlayerName body=33 status=ok
// SIG undefined GetOldPlayerName(void)

undefined8 APlayerState::GetOldPlayerName(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x368);
  return param_2;
}



// FUNCTION 142b4b1c0 FUN_142b4b1c0 body=34 status=ok
// SIG undefined FUN_142b4b1c0(void)

undefined8 * FUN_142b4b1c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x298);
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142b4b1f0 FUN_142b4b1f0 body=33 status=ok
// SIG undefined FUN_142b4b1f0(void)

undefined8 FUN_142b4b1f0(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x358);
  return param_2;
}



// FUNCTION 142b4b220 FUN_142b4b220 body=34 status=ok
// SIG undefined FUN_142b4b220(void)

undefined8 * FUN_142b4b220(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x238);
  lVar1 = *(longlong *)(param_1 + 0x240);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142b4b250 FUN_142b4b250 body=147 status=ok
// SIG undefined FUN_142b4b250(void)

undefined8 * FUN_142b4b250(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_142b49cd0(param_1,local_18,&DAT_146b2ad88);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b4b2f0 FUN_142b4b2f0 body=131 status=ok
// SIG undefined FUN_142b4b2f0(void)

ulonglong FUN_142b4b2f0(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined2 *local_18;
  int local_10;
  
  local_10 = *(int *)(param_1 + 1);
  lVar4 = (longlong)local_10;
  puVar3 = (undefined2 *)0x0;
  _Src = (void *)*param_1;
  local_18 = (undefined2 *)0x0;
  if (local_10 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    puVar3 = local_18;
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar4 * 2);
  }
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = puVar3;
  }
  uVar1 = FCrc::StrCrc32<wchar_t>(puVar2,0);
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 142b4b380 FUN_142b4b380 body=617 status=ok
// SIG undefined FUN_142b4b380(void)

undefined8 * FUN_142b4b380(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int local_res8 [2];
  undefined ***local_res10;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_58 = (longlong *)param_3[1];
  local_60 = (longlong *)*param_3;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)(param_1 + 0x140);
  local_68 = &PTR_FUN_143f740c8;
  local_50 = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
    if ((local_60 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*local_60 + 0x20))(local_60), plVar4 = local_60, cVar6 == '\0')) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (**(code **)(*local_60 + 0x18))(local_60);
      if (uVar7 < 4) {
        pbVar8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4);
        uVar7 = (uint)*pbVar8;
      }
      else {
        pcVar3 = *(code **)(*plVar4 + 0x10);
        if (uVar7 < 8) {
          puVar9 = (uint *)(*pcVar3)();
          uVar7 = *puVar9;
        }
        else {
          puVar10 = (undefined8 *)(*pcVar3)(plVar4);
          uVar7 = (int)((ulonglong)*puVar10 >> 0x20) * 0x17 + (int)*puVar10;
        }
      }
    }
    lVar11 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar11 = param_1 + 0x178;
    }
    iVar12 = *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x188) - 1U & (longlong)(int)uVar7) * 4
                     );
    if (iVar12 != -1) {
      lVar11 = *plVar2;
      do {
        lVar13 = (longlong)iVar12 * 0x40;
        plVar4 = *(longlong **)(lVar11 + 8 + lVar13);
        if ((((plVar4 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar4 + 0x20))(), cVar6 == '\0')) ||
            (local_60 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*local_60 + 0x20))(local_60), cVar6 == '\0')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        plVar4 = *(longlong **)(lVar11 + lVar13 + 8);
        if ((((plVar4 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar4 + 0x20))(), cVar6 == '\0')) &&
            ((local_60 == (longlong *)0x0 ||
             (cVar6 = (**(code **)(*local_60 + 0x20))(local_60), cVar6 == '\0')))) ||
           ((bVar5 && (cVar6 = (**(code **)*local_60)(local_60,*(undefined8 *)(lVar11 + lVar13 + 8))
                      , cVar6 != '\0')))) {
          if ((iVar12 != -1) && (lVar13 = lVar13 + *plVar2, lVar13 != 0)) goto LAB_142b4b569;
          break;
        }
        lVar11 = *plVar2;
        iVar12 = *(int *)(lVar11 + 0x38 + lVar13);
      } while (iVar12 != -1);
    }
  }
  local_res10 = &local_68;
  FUN_142b31520(plVar2,local_res8,&local_res10,0);
  lVar13 = (longlong)local_res8[0] * 0x40 + *plVar2;
LAB_142b4b569:
  local_68 = &PTR_FUN_143f740c8;
  if (local_50 != 0) {
    FMemory::Free();
  }
  plVar2 = local_58;
  local_68 = &PTR_FUN_143f73d18;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  *param_2 = *(undefined8 *)(lVar13 + 0x30);
  return param_2;
}



// FUNCTION 142b4b5f0 FUN_142b4b5f0 body=147 status=ok
// SIG undefined FUN_142b4b5f0(void)

undefined8 * FUN_142b4b5f0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_142b49cd0(param_1,local_18,&DAT_146b2ad90);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b4b690 GetLeaderboardsInterface body=34 status=ok
// SIG undefined GetLeaderboardsInterface(void)

undefined8 * FOnlineSubsystemEOS::GetLeaderboardsInterface(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x248);
  lVar1 = *(longlong *)(param_1 + 0x250);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 142b4b6c0 FUN_142b4b6c0 body=147 status=ok
// SIG undefined FUN_142b4b6c0(void)

undefined8 * FUN_142b4b6c0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_142b49cd0(param_1,local_18,&DAT_146b2ad98);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142b4b760 FUN_142b4b760 body=63 status=ok
// SIG undefined FUN_142b4b760(void)

undefined8 FUN_142b4b760(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (DAT_146b17150 != 0) {
    puVar2 = *(undefined8 **)(DAT_146b17150 + 0xc18);
    puVar1 = puVar2 + *(int *)(DAT_146b17150 + 0xc20);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      if (*(char *)*puVar2 == '\x01') {
        return *(undefined8 *)((char *)*puVar2 + 0x288);
      }
    }
  }
  return 0;
}



// FUNCTION 142b4b7a0 FUN_142b4b7a0 body=165 status=ok
// SIG undefined FUN_142b4b7a0(void)

undefined8 FUN_142b4b7a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  
  TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x3e0),local_res8,param_2);
  lVar1 = 0;
  if (local_res8[0] != -1) {
    lVar1 = (longlong)local_res8[0] * 0x68 + *(longlong *)(param_1 + 0x3e0);
  }
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  if (lVar2 == 0) {
    return 0;
  }
  FString::operator=(param_3,lVar2);
  FString::operator=(param_3 + 0x10,lVar2 + 0x10);
  FString::operator=(param_3 + 0x20,lVar2 + 0x20);
  FString::operator=(param_3 + 0x30,lVar2 + 0x30);
  FString::operator=(param_3 + 0x40,lVar2 + 0x40);
  return 1;
}



// FUNCTION 142b4b850 FUN_142b4b850 body=115 status=ok
// SIG undefined FUN_142b4b850(void)

void FUN_142b4b850(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0xc4) = param_2;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_142b4aa30(param_1,&local_28);
  *(undefined4 *)(param_1 + 0xac) = local_20;
  *(undefined4 *)(param_1 + 0xa0) = local_28;
  *(undefined4 *)(param_1 + 0xa8) = local_1c;
  *(int *)(param_1 + 0xa4) = local_24;
  *(undefined4 *)(param_1 + 0xb0) = local_18;
  *(float *)(param_1 + 0xb4) = (float)local_24;
  return;
}



// FUNCTION 142b4b8d0 FUN_142b4b8d0 body=956 status=ok
// SIG undefined FUN_142b4b8d0(void)

void FUN_142b4b8d0(longlong param_1,undefined8 *param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t wVar4;
  longlong *plVar5;
  void *_Src;
  longlong lVar6;
  char cVar7;
  wint_t wVar8;
  wint_t wVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  wint_t *pwVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  longlong lVar15;
  undefined2 *local_80;
  int local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  if (param_3 == 0x191) {
    uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x60,local_70);
    TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0x210,uVar10,0);
    if (local_68 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar5 = local_68 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) {
      return;
    }
    (**(code **)*local_68)(local_68);
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*local_68 + 8))(local_68,1);
    return;
  }
  lVar6 = *param_4;
  plVar5 = (longlong *)param_4[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((lVar6 == 0) || (cVar7 = FUN_142b01f90(*param_2), cVar7 == '\0')) {
    uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x60,local_40);
    TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0x210,uVar10,0);
  }
  else {
    if (*(char *)(lVar6 + 8) != '\0') {
      puVar14 = (undefined2 *)0x0;
      local_78 = *(int *)(lVar6 + 0x18);
      lVar15 = (longlong)local_78;
      _Src = *(void **)(lVar6 + 0x10);
      local_80 = (undefined2 *)0x0;
      if (local_78 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_78,0);
        puVar14 = local_80;
        _guard_xfg_dispatch_icall_nop(local_80,_Src,lVar15 * 2);
      }
      iVar3 = local_78;
      pwVar11 = L"NO_AGREEMENTS_TO_SIGN";
      puVar13 = &DAT_143f3eda8;
      if (local_78 != 0) {
        puVar13 = puVar14;
      }
      do {
        wVar4 = *(wchar_t *)((longlong)pwVar11 + (longlong)(puVar13 + -0xa2bde0c4));
        if ((wVar4 == L'\0') && (*pwVar11 == L'\0')) goto LAB_142b4ba92;
        if (wVar4 != *pwVar11) {
          wVar8 = towlower(wVar4);
          wVar9 = towlower(*pwVar11);
          if (wVar8 != wVar9) goto LAB_142b4ba87;
        }
        pwVar11 = pwVar11 + 1;
      } while( true );
    }
    uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x60,local_60);
    TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0x210,uVar10,0);
    local_38 = local_58;
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  goto LAB_142b4bc42;
LAB_142b4ba87:
  if (wVar8 != wVar9) {
    pwVar12 = &DAT_1457bc1c0;
    puVar13 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar13 = puVar14;
    }
    do {
      wVar8 = *(wint_t *)((longlong)pwVar12 + (longlong)(puVar13 + -0xa2bde0e0));
      if ((wVar8 == 0) && (*pwVar12 == 0)) goto LAB_142b4bafd;
      if (wVar8 != *pwVar12) {
        wVar8 = towlower(wVar8);
        wVar9 = towlower(*pwVar12);
        if (wVar8 != wVar9) goto LAB_142b4baf2;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
LAB_142b4ba92:
  *(undefined4 *)(param_1 + 0x31c) = 0;
  goto LAB_142b4bb66;
LAB_142b4bb51:
  if (wVar8 == wVar9) {
LAB_142b4bb5b:
    *(undefined4 *)(param_1 + 0x31c) = 1;
  }
  goto LAB_142b4bb66;
LAB_142b4baf2:
  if (wVar8 != wVar9) {
    pwVar11 = L"AGREEMENTS_TO_SIGN_PENDING";
    puVar13 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar13 = puVar14;
    }
    do {
      wVar4 = *(wchar_t *)((longlong)pwVar11 + (longlong)(puVar13 + -0xa2bde0fc));
      if ((wVar4 == L'\0') && (*pwVar11 == L'\0')) goto LAB_142b4bb5b;
      if (wVar4 != *pwVar11) {
        wVar8 = towlower(wVar4);
        wVar9 = towlower(*pwVar11);
        if (wVar8 != wVar9) goto LAB_142b4bb51;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_142b4bafd:
  *(undefined4 *)(param_1 + 0x31c) = 2;
LAB_142b4bb66:
  uVar10 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x60,local_50);
  TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0x210,uVar10,1);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    puVar14 = local_80;
    if ((int)lVar6 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      puVar14 = local_80;
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
        puVar14 = local_80;
      }
    }
  }
  if (puVar14 != (undefined2 *)0x0) {
    FMemory::Free(puVar14);
  }
LAB_142b4bc42:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}


