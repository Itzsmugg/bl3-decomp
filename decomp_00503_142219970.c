// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142219970 IsDataAvailableForTimeRange body=88 status=ok
// SIG undefined IsDataAvailableForTimeRange(void)

undefined8
FHttpNetworkReplayStreamer::IsDataAvailableForTimeRange(longlong *param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1c0))();
  if (((iVar1 == 0) && (*(uint *)((longlong)param_1 + 0x27c) <= param_2)) &&
     (param_3 <= *(uint *)(param_1 + 0x50))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1422199e0 IsLoadingCheckpoint body=49 status=ok
// SIG undefined IsLoadingCheckpoint(void)

undefined8 FHttpNetworkReplayStreamer::IsLoadingCheckpoint(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x2b8) != 0) && (*(longlong **)(param_1 + 0x2b0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x18))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142219a20 FUN_142219a20 body=781 status=ok
// SIG undefined FUN_142219a20(void)

void FUN_142219a20(longlong param_1,undefined8 *param_2,char param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong local_c8 [7];
  undefined4 local_90;
  undefined **local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60 [2];
  longlong local_50 [3];
  longlong *local_38;
  longlong *plStack_30;
  undefined1 local_28 [16];
  
  if (*(int *)(param_1 + 0x230) < 2) {
    plVar5 = (longlong *)0x0;
    local_80 = 6;
    local_78 = 0;
    local_88 = &PTR_FUN_145002d18;
    local_70 = 0;
    local_68 = 0;
    if ((((int)param_4[1] != 0) && ((longlong *)*param_4 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*(longlong *)*param_4 + 0x18))(), cVar4 != '\0')) {
      if ((int)param_4[1] != 0) {
        plVar5 = (longlong *)*param_4;
      }
      (**(code **)(*plVar5 + 0x40))(plVar5,&local_88);
    }
    if (local_78 != 0) {
      FMemory::Free(local_78);
    }
  }
  else {
    plVar5 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar5 + 0x40))(plVar5,&local_d8);
    plVar5 = local_d8;
    puVar8 = &DAT_143f3eda8;
    if (param_3 == '\0') {
      if (*(int *)(param_2 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*param_2;
      }
      if (*(int *)(param_1 + 0x230) != 0) {
        puVar8 = *(undefined2 **)(param_1 + 0x228);
      }
      FString::PrintfImpl(local_50,L"%sreplay/%s?shouldKeep=false",puVar8,puVar9);
      (**(code **)(*plVar5 + 0x50))(plVar5,local_50);
      local_60[0] = local_50[0];
    }
    else {
      if (*(int *)(param_2 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*param_2;
      }
      if (*(int *)(param_1 + 0x230) != 0) {
        puVar8 = *(undefined2 **)(param_1 + 0x228);
      }
      FString::PrintfImpl(local_60,L"%sreplay/%s?shouldKeep=true",puVar8,puVar9);
      (**(code **)(*plVar5 + 0x50))(plVar5,local_60);
    }
    if (local_60[0] != 0) {
      FMemory::Free();
    }
    local_c8[1] = 5;
    local_c8[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
    FGenericPlatformString::Memcpy(local_c8[0],L"POST",10);
    (**(code **)(*local_d8 + 0x48))(local_d8,local_c8);
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    local_c8[4] = 0;
    local_c8[5] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8 + 4,0);
    FGenericPlatformString::Memcpy(local_c8[4],L"application/json",0x22);
    local_c8[2] = 0;
    local_c8[3] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8 + 2,0);
    FGenericPlatformString::Memcpy(local_c8[2],L"Content-Type",0x1a);
    (**(code **)(*local_d8 + 0x68))(local_d8,local_c8 + 2,local_c8 + 4);
    if (local_c8[2] != 0) {
      FMemory::Free();
    }
    if (local_c8[4] != 0) {
      FMemory::Free();
    }
    plVar5 = local_d8;
    local_c8[6] = 0;
    local_90 = 0;
    if (((param_4 != local_c8 + 6) && ((int)param_4[1] != 0)) &&
       (param_4 = (longlong *)*param_4, param_4 != (longlong *)0x0)) {
      (**(code **)(*param_4 + 0x30))(param_4,local_c8 + 6);
    }
    uVar6 = FString::FString(local_28,param_2);
    uVar7 = (**(code **)(*plVar5 + 0x80))(plVar5);
    FUN_142210fc0(uVar7,param_1,FUN_142219d30,local_c8 + 6,uVar6);
    local_38 = local_d8;
    plStack_30 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
      UNLOCK();
    }
    FUN_142212e20(param_1,0x12,&local_38,0,uVar6 & 0xffffffff00000000);
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_d0 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_d0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142219d30 FUN_142219d30 body=431 status=ok
// SIG undefined FUN_142219d30(void)

void FUN_142219d30(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  undefined8 *param_5,void **param_6)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 local_58;
  longlong local_50;
  undefined **local_48;
  undefined4 local_40;
  void *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_14221af10(param_1,*(undefined4 *)(param_1 + 600),0x12,&local_58);
  plVar5 = (longlong *)0x0;
  local_48 = &PTR_FUN_145002d18;
  local_40 = 6;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = 0;
  if (param_4 != '\0') {
    iVar4 = (**(code **)(*(longlong *)*param_3 + 0x40))();
    if ((iVar4 == 0xcc) && (local_40 = 0, &local_38 != param_6)) {
      iVar4 = *(int *)(param_6 + 1);
      _Src = *param_6;
      local_30 = CONCAT44(local_30._4_4_,iVar4);
      if ((iVar4 != 0) || (local_30._4_4_ != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar4);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar4 * 2);
      }
    }
  }
  if (*(int *)(param_5 + 1) != 0) {
    plVar5 = (longlong *)*param_5;
  }
  (**(code **)(*plVar5 + 0x38))(plVar5,&local_48);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)param_2[1];
  local_48 = &PTR_FUN_1440104c8;
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
  plVar5 = (longlong *)param_3[1];
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  if (*param_6 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142219ee0 PreProcess body=262 status=ok
// SIG undefined PreProcess(void)

undefined8 FQueuedGotoFakeCheckpoint::PreProcess(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_38 [2];
  undefined **local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  plVar4 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 0x1f0) = 0;
  if (*(int *)(param_2 + 500) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2 + 0x1e8,0);
  }
  *(undefined4 *)(param_2 + 0x1f8) = 0;
  *(undefined4 *)(param_2 + 0x148) = 0;
  if (*(int *)(param_2 + 0x14c) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2 + 0x140,0);
  }
  plVar1 = (longlong *)(param_2 + 0x2b0);
  *(undefined4 *)(param_2 + 0x150) = 0;
  *(undefined1 *)(param_2 + 0x154) = 0;
  *(undefined8 *)(param_2 + 0x27c) = 0;
  *(undefined4 *)(param_2 + 0x238) = 0;
  if (((*(int *)(param_2 + 0x2b8) != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x18))(), cVar2 != '\0')) {
    local_20 = 0;
    local_28 = &PTR_FUN_1440104d0;
    local_18 = *(undefined8 *)(param_2 + 0x2c8);
    if (*(int *)(param_2 + 0x2b8) != 0) {
      plVar4 = (longlong *)*plVar1;
    }
    (**(code **)(*plVar4 + 0x38))(plVar4,&local_28);
    if (((local_38 != plVar1) && (*(int *)(param_2 + 0x2b8) != 0)) &&
       (plVar4 = (longlong *)*plVar1, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      if (*plVar1 != 0) {
        lVar3 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar3;
      }
      *(undefined4 *)(param_2 + 0x2b8) = 0;
    }
  }
  *(undefined8 *)(param_2 + 0x2c8) = 0xffffffffffffffff;
  return 1;
}



// FUNCTION 142219ff0 PreProcess body=862 status=ok
// SIG undefined PreProcess(void)

undefined8
FQueuedHttpRequestAddEvent::PreProcess
          (longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *pvVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar14;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar15;
  undefined2 *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48 [2];
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  iVar4 = *(int *)(param_4 + 1);
  if (iVar4 < 2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x40) < 2) {
    plVar2 = *(longlong **)(param_1 + 0x10);
    puVar5 = (undefined8 *)FUN_141f2eb00(local_48,param_1 + 0x60);
    puVar11 = &DAT_143f3eda8;
    if (*(int *)(puVar5 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar5;
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = *(undefined2 **)(param_1 + 0x50);
    }
    if (*(int *)(param_4 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_4;
    }
    if (*(int *)(param_3 + 1) != 0) {
      puVar11 = (undefined2 *)*param_3;
    }
    FString::PrintfImpl(&local_58,
                        L"%sreplay/%s/event?group=%s&time1=%i&time2=%i&meta=%s&incrementSize=false",
                        puVar11,puVar7,puVar13,CONCAT44(uVar14,*(undefined4 *)(param_1 + 0x48)),
                        *(undefined4 *)(param_1 + 0x48),puVar10);
    (**(code **)(*plVar2 + 0x50))(plVar2,&local_58);
    puVar11 = local_48[0];
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
      puVar11 = local_48[0];
    }
  }
  else {
    pvVar1 = (void *)*param_4;
    puVar11 = (undefined2 *)0x0;
    local_58 = (undefined2 *)0x0;
    local_50 = iVar4;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar4 + 1,0);
    puVar10 = local_58;
    ::_guard_xfg_dispatch_icall_nop(local_58,pvVar1,(longlong)iVar4 * 2);
    iVar4 = local_50;
    lVar9 = (longlong)local_50;
    local_50 = (2 - (uint)(local_50 != 0)) + local_50;
    if (local_4c < local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar4);
      puVar10 = local_58;
    }
    puVar10[lVar9 - (ulonglong)(iVar4 != 0)] = 0x5f;
    (puVar10 + (lVar9 - (ulonglong)(iVar4 != 0)))[1] = 0;
    iVar4 = *(int *)(param_1 + 0x40);
    if (local_50 < 2) {
      pvVar1 = *(void **)(param_1 + 0x38);
      local_58 = (undefined2 *)0x0;
      local_50 = iVar4;
      if (iVar4 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar4,0);
        puVar11 = local_58;
        ::_guard_xfg_dispatch_icall_nop(local_58,pvVar1,(longlong)iVar4 * 2);
      }
      iVar4 = local_50;
      if (puVar10 != (undefined2 *)0x0) {
        FMemory::Free(puVar10);
      }
    }
    else {
      iVar8 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar8 = 0;
      }
      if ((local_50 != 0) || (iVar4 = 1, iVar8 == 0)) {
        iVar4 = 0;
      }
      iVar4 = iVar4 + iVar8 + local_50;
      local_58 = puVar10;
      if (local_4c < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,iVar4);
      }
      iVar3 = local_50;
      pvVar1 = *(void **)(param_1 + 0x38);
      puVar11 = local_58;
      iVar4 = local_50;
      if (iVar8 != 0) {
        lVar9 = (longlong)local_50;
        local_50 = iVar8 + (uint)(local_50 == 0) + local_50;
        if (local_4c < local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar3);
        }
        iVar4 = local_50;
        puVar11 = local_58;
        puVar10 = local_58 + (lVar9 - (ulonglong)(iVar3 != 0));
        ::_guard_xfg_dispatch_icall_nop(puVar10,pvVar1,(longlong)iVar8 * 2);
        puVar10[iVar8] = 0;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x10);
    puVar5 = (undefined8 *)FUN_141f2eb00(local_48,param_1 + 0x60);
    puVar10 = &DAT_143f3eda8;
    if (*(int *)(puVar5 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*puVar5;
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = *(undefined2 **)(param_1 + 0x50);
    }
    puVar6 = &DAT_143f3eda8;
    if (iVar4 != 0) {
      puVar6 = puVar11;
    }
    if (*(int *)(param_4 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*param_4;
    }
    if (*(int *)(param_3 + 1) != 0) {
      puVar10 = (undefined2 *)*param_3;
    }
    FString::PrintfImpl(&local_58,
                        L"%sreplay/%s/event/%s?group=%s&time1=%i&time2=%i&meta=%s&incrementSize=false"
                        ,puVar10,puVar12,puVar6,puVar7,*(undefined4 *)(param_1 + 0x48),
                        CONCAT44(uVar15,*(undefined4 *)(param_1 + 0x48)),puVar13);
    (**(code **)(*plVar2 + 0x50))(plVar2,&local_58);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_48[0] != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  return 1;
}



// FUNCTION 14221a350 PreProcess body=107 status=ok
// SIG undefined PreProcess(void)

undefined8
FQueuedHttpRequestAddUser::PreProcess
          (longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  if (*(int *)(param_4 + 1) < 2) {
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (*(int *)(param_3 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  FString::PrintfImpl(local_18,L"%sreplay/%s/users",puVar2,*param_4);
  (**(code **)(*plVar1 + 0x50))(plVar1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 14221a3c0 FUN_14221a3c0 body=932 status=ok
// SIG undefined FUN_14221a3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14221a3c0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int iVar4;
  double dVar5;
  byte bVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *plStack_b0;
  int local_a8 [2];
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60 [2];
  longlong local_50 [2];
  longlong *local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  pplVar3 = (longlong **)(param_1 + 0x5f);
  plVar8 = *pplVar3;
  if (plVar8 != (longlong *)0x0) {
    if (0.0 < (double)plVar8[6]) {
      QueryPerformanceCounter(&local_a0);
      plVar8 = *pplVar3;
      dVar5 = (double)local_a0.QuadPart * DAT_1468b02f8 + 16777216.0;
      if ((double)plVar8[6] <= dVar5 && dVar5 != (double)plVar8[6]) {
        plVar8[6] = 0;
        plVar8 = (longlong *)(**(code **)(*(longlong *)(*pplVar3)[2] + 0x78))();
      }
    }
LAB_14221a43b:
    return (ulonglong)plVar8 & 0xffffffffffffff00;
  }
  if ((int)param_1[0x5e] < 1) goto LAB_14221a43b;
  plVar11 = (longlong *)param_1[0x5d];
  plVar8 = (longlong *)plVar11[1];
  plVar11 = (longlong *)*plVar11;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
            (param_1 + 0x5d,0,1,1);
  if ((int)plVar11[1] == 0x10) {
    FUN_14221ca20(param_1);
  }
  else if ((int)plVar11[1] == 0x11) {
    *(undefined4 *)(param_1 + 0x4b) = 0;
    *(undefined1 *)((longlong)param_1 + 0x25c) = 0;
  }
  else {
    cVar7 = (**(code **)(*plVar11 + 8))(plVar11,param_1,param_1 + 0x45,param_1 + 0x40);
    if ((cVar7 != '\0') && (plVar11[2] != 0)) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_b8 = plVar11;
      plStack_b0 = plVar8;
      if (&local_b8 != pplVar3) {
        local_b8 = *pplVar3;
        plStack_b0 = (longlong *)param_1[0x60];
        *pplVar3 = plVar11;
        param_1[0x60] = (longlong)plVar8;
        local_40 = plVar11;
        plStack_38 = plVar8;
      }
      plVar11 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_b0 + 1;
        lVar12 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
          }
        }
      }
      uVar9 = (*(code *)**(undefined8 **)(*pplVar3)[2])((undefined8 *)(*pplVar3)[2],local_60);
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x6c,local_a8,uVar9);
      puVar10 = (undefined8 *)0x0;
      if (local_a8[0] != -1) {
        puVar10 = (undefined8 *)((longlong)local_a8[0] * 0x30 + param_1[0x6c]);
      }
      puVar13 = puVar10 + 2;
      if (puVar10 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)0x0;
      }
      if (local_60[0] != 0) {
        FMemory::Free();
      }
      if (puVar13 != (undefined8 *)0x0) {
        plVar11 = (longlong *)(**(code **)(*(longlong *)(*pplVar3)[2] + 0x80))();
        if ((((int)plVar11[1] != 0) && ((longlong *)*plVar11 != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(*(longlong *)*plVar11 + 0x18))(), cVar7 != '\0')) {
          QueryPerformanceCounter(&local_98);
          local_90 = *puVar13;
          local_88 = puVar13[1];
          puVar13[2] = (double)local_98.QuadPart * DAT_1468b02f8 + 16777216.0;
          lVar12 = param_1[0x5f];
          plVar11 = *(longlong **)(lVar12 + 0x10);
          if (local_88 != 0) {
            LOCK();
            *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
            UNLOCK();
            lVar12 = param_1[0x5f];
          }
          local_80 = *(undefined8 *)(lVar12 + 0x10);
          local_78 = *(longlong *)(lVar12 + 0x18);
          if (local_78 != 0) {
            LOCK();
            *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
            UNLOCK();
          }
          uVar9 = (**(code **)(*plVar11 + 0x80))(plVar11);
          FUN_141f27320(uVar9,&local_80,&local_90,1);
          goto LAB_14221a4bc;
        }
        uVar9 = (**(code **)**(undefined8 **)(param_1[0x5f] + 0x10))
                          (*(undefined8 **)(param_1[0x5f] + 0x10),local_50);
        TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 0x6c,uVar9);
        if (local_50[0] != 0) {
          FMemory::Free();
        }
      }
      local_70 = (*pplVar3)[2];
      local_68 = (*pplVar3)[3];
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*param_1 + 0x1f8))(param_1,&local_70);
      bVar6 = 1;
      goto LAB_14221a4c7;
    }
  }
LAB_14221a4bc:
  bVar6 = FUN_14221a3c0(param_1);
LAB_14221a4c7:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  return (ulonglong)bVar6;
}



// FUNCTION 14221a770 FUN_14221a770 body=89 status=ok
// SIG undefined FUN_14221a770(void)

void FUN_14221a770(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  (**(code **)(*(longlong *)*param_2 + 0x78))();
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



// FUNCTION 14221a7d0 RefreshHeader body=41 status=ok
// SIG undefined RefreshHeader(void)

void FHttpNetworkReplayStreamer::RefreshHeader(void)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FUN_142212e20(0,0x10,&local_18,0,0);
  return;
}



// FUNCTION 14221a800 FUN_14221a800 body=560 status=ok
// SIG undefined FUN_14221a800(void)

void FUN_14221a800(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  LARGE_INTEGER local_res8;
  longlong local_58 [2];
  longlong *local_48;
  longlong *plStack_40;
  longlong local_38 [2];
  longlong local_28 [2];
  longlong *local_18;
  longlong *plStack_10;
  
  if (1 < *(int *)(param_1 + 0x230)) {
    plVar4 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_48);
    plVar4 = local_48;
    puVar7 = &DAT_143f3eda8;
    if (param_2 == '\0') {
      if (*(int *)(param_1 + 0x290) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = *(undefined2 **)(param_1 + 0x288);
      }
      if (*(int *)(param_1 + 0x208) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)(param_1 + 0x200);
      }
      if (*(int *)(param_1 + 0x230) != 0) {
        puVar7 = *(undefined2 **)(param_1 + 0x228);
      }
      FString::PrintfImpl(local_28,L"%sreplay/%s/viewer/%s",puVar7,puVar8,puVar5);
      (**(code **)(*plVar4 + 0x50))(plVar4,local_28);
      local_38[0] = local_28[0];
    }
    else {
      if (*(int *)(param_1 + 0x290) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = *(undefined2 **)(param_1 + 0x288);
      }
      if (*(int *)(param_1 + 0x208) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)(param_1 + 0x200);
      }
      if (*(int *)(param_1 + 0x230) != 0) {
        puVar7 = *(undefined2 **)(param_1 + 0x228);
      }
      FString::PrintfImpl(local_38,L"%sreplay/%s/viewer/%s?final=true",puVar7,puVar8,puVar5);
      (**(code **)(*plVar4 + 0x50))(plVar4,local_38);
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    local_58[1] = 5;
    local_58[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"POST",10);
    (**(code **)(*local_48 + 0x48))(local_48,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    uVar6 = (**(code **)(*local_48 + 0x80))();
    FUN_1406c1b60(uVar6,param_1,FUN_142218610);
    local_18 = local_48;
    plStack_10 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    FUN_142212e20(param_1,7,&local_18,0,(ulonglong)puVar5 & 0xffffffff00000000);
    QueryPerformanceCounter(&local_res8);
    *(double *)(param_1 + 0x248) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_40 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plStack_40 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14221aa30 Remove body=398 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FString,FCachedResponse>,TDefaultMapHashableKeyFuncs<FString,FCachedResponse,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  uVar3 = FUN_140438070(puVar9);
  lVar8 = (longlong)(int)((int)param_1[9] - 1U & uVar3);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  piVar10 = (int *)((longlong)plVar5 + lVar8 * 4);
  iVar4 = *(int *)((longlong)plVar5 + lVar8 * 4);
  while( true ) {
    if (iVar4 == -1) {
      return 0;
    }
    puVar11 = (undefined8 *)((longlong)iVar4 * 0x30 + *param_1);
    if (*(int *)(param_2 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar11 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar11;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar9);
    if (iVar4 == 0) break;
    iVar4 = *(int *)(puVar11 + 5);
    piVar10 = (int *)(puVar11 + 5);
  }
  iVar4 = *piVar10;
  lVar8 = (longlong)iVar4;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar7 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar2 + 0x2c + lVar8 * 0x30));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar10 = (int *)((longlong)plVar5 + lVar7 * 4);
    iVar1 = *(int *)((longlong)plVar5 + lVar7 * 4);
    while (iVar1 != -1) {
      if (iVar1 == iVar4) {
        *piVar10 = *(int *)(lVar2 + 0x28 + lVar8 * 0x30);
        break;
      }
      piVar10 = (int *)(lVar2 + 0x28 + (longlong)iVar1 * 0x30);
      iVar1 = *piVar10;
    }
  }
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
            (lVar8 * 0x30 + *param_1);
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar4,1);
  return 1;
}



// FUNCTION 14221abd0 FUN_14221abd0 body=821 status=ok
// SIG undefined FUN_14221abd0(void)

void FUN_14221abd0(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong **pplVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong local_b8 [2];
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  int local_90;
  longlong *local_88;
  int local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined **local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  longlong *local_28 [2];
  longlong *local_18;
  longlong *plStack_10;
  
  if (*(int *)(param_1 + 0x230) < 2) {
    plVar5 = (longlong *)0x0;
    local_50 = 6;
    local_48 = 0;
    local_58 = &PTR_FUN_145002d10;
    local_40 = 0;
    if (*(int *)(param_3 + 1) != 0) {
      plVar5 = *param_3;
    }
    (**(code **)(*plVar5 + 0x38))(plVar5,&local_58);
    if (local_48 == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  plVar5 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_78);
  plVar5 = local_78;
  puVar7 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 0x230) != 0) {
    puVar7 = *(undefined2 **)(param_1 + 0x228);
  }
  FString::PrintfImpl(local_38,L"%sevent/%s",puVar7,puVar8);
  (**(code **)(*plVar5 + 0x50))(plVar5,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_b8[1] = 4;
  local_b8[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
  FGenericPlatformString::Memcpy(local_b8[0],&DAT_145009eb0,8);
  (**(code **)(*local_78 + 0x48))(local_78,local_b8);
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  plVar5 = local_78;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  if (((param_3 != &local_a8) && (*(int *)(param_3 + 1) != 0)) &&
     (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
  }
  pplVar6 = (longlong **)(**(code **)(*plVar5 + 0x80))(plVar5);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  if ((local_a0 != 0) && (local_a8 != (longlong *)0x0)) {
    (**(code **)(*local_a8 + 0x30))(local_a8,&local_88);
  }
  local_98 = (longlong *)0x0;
  local_90 = 0;
  if ((local_80 != 0) && (local_88 != (longlong *)0x0)) {
    (**(code **)(*local_88 + 0x30))(local_88,&local_98);
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_28[0] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    local_68 = 0;
    local_60 = 0;
    if ((local_90 != 0) && (local_98 != (longlong *)0x0)) {
      (**(code **)(*local_98 + 0x30))(local_98,&local_68);
    }
    FUN_142211960(plVar5,param_1,FUN_142218790,&local_68);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
  if (local_28 != pplVar6) {
    if (plVar5 == (longlong *)0x0) {
      if ((*(int *)(pplVar6 + 1) != 0) && (plVar5 = *pplVar6, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*pplVar6 != (longlong *)0x0) {
          plVar5 = (longlong *)FMemory::Realloc(*pplVar6,0,0);
          *pplVar6 = plVar5;
        }
        *(undefined4 *)(pplVar6 + 1) = 0;
      }
      goto LAB_14221ae32;
    }
    (**(code **)(*plVar5 + 0x30))(plVar5,pplVar6);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    local_28[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
    if (local_28[0] != (longlong *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
LAB_14221ae32:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  local_18 = local_78;
  plStack_10 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
    UNLOCK();
  }
  FUN_142212e20(param_1,0xf,&local_18,0,0);
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_70 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plStack_70 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  return;
}



// FUNCTION 14221af10 FUN_14221af10 body=194 status=ok
// SIG undefined FUN_14221af10(void)

void FUN_14221af10(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x2f8) != &local_18) {
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x300,&local_10);
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  plVar4 = *(longlong **)(param_4 + 8);
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



// FUNCTION 14221afe0 FUN_14221afe0 body=523 status=ok
// SIG undefined FUN_14221afe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14221afe0(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  LARGE_INTEGER local_38;
  longlong local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar3 = *param_2;
  if (((lVar3 == 0) || (*(int *)(lVar3 + 0x24) == 0)) ||
     (*(int *)(lVar3 + 0x24) <= *(int *)(lVar3 + 0x20))) {
    plVar2 = (longlong *)param_2[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar2 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    plVar2 = (longlong *)param_3[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar2 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    return 0;
  }
  if (((longlong *)*param_3 != (longlong *)0x0) &&
     ((param_4 != '\0' ||
      ((iVar5 = (**(code **)(*(longlong *)*param_3 + 0x40))(), 499 < iVar5 &&
       (iVar5 = (**(code **)(*(longlong *)*param_3 + 0x40))(), iVar5 < 600)))))) {
    *(int *)(*param_2 + 0x20) = *(int *)(*param_2 + 0x20) + 1;
    if (*(float *)(*param_2 + 0x28) == 0.0) {
      (**(code **)(**(longlong **)(*param_2 + 0x10) + 0x78))();
    }
    else {
      QueryPerformanceCounter(&local_38);
      *(double *)(*param_2 + 0x30) =
           (double)local_38.QuadPart * DAT_1468b02f8 + 16777216.0 +
           (double)*(float *)(*param_2 + 0x28);
    }
    plVar4 = (longlong *)param_2[1];
    plVar2 = (longlong *)(param_1 + 0x2f8);
    lVar3 = *param_2;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_48 = lVar3;
    plStack_40 = plVar4;
    if (&local_48 != plVar2) {
      local_48 = *plVar2;
      plStack_40 = *(longlong **)(param_1 + 0x300);
      *plVar2 = lVar3;
      *(longlong **)(param_1 + 0x300) = plVar4;
      local_30 = lVar3;
      plStack_28 = plVar4;
    }
    plVar2 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_40 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
    return 1;
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  return 0;
}



// FUNCTION 14221b1f0 FUN_14221b1f0 body=752 status=ok
// SIG undefined FUN_14221b1f0(void)

void FUN_14221b1f0(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong *local_a8;
  int local_a0;
  longlong local_98 [2];
  longlong *local_88;
  longlong *plStack_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38 [2];
  longlong *local_28;
  longlong *local_18;
  longlong *plStack_10;
  
  if (*(int *)(param_1 + 0x230) < 2) {
    plVar3 = (longlong *)0x0;
    local_70 = 6;
    local_68 = 0;
    local_78 = &PTR__scalar_deleting_destructor__145002d00;
    local_60 = 0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    if (*(int *)(param_3 + 1) != 0) {
      plVar3 = *param_3;
    }
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_78);
    plVar3 = local_58;
    for (iVar6 = (int)local_50; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    TArray<FNetworkReplayStreamInfo,FDefaultAllocator>::
    ~TArray<FNetworkReplayStreamInfo,FDefaultAllocator>(&local_68);
  }
  else {
    plVar3 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar3 + 0x40))(plVar3,&local_88);
    plVar3 = local_88;
    puVar7 = &DAT_143f3eda8;
    if (*(int *)(param_2 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_2;
    }
    if (*(int *)(param_1 + 0x230) != 0) {
      puVar7 = *(undefined2 **)(param_1 + 0x228);
    }
    FString::PrintfImpl(local_38,L"%sevent?group=%s",puVar7,puVar8);
    (**(code **)(*plVar3 + 0x50))(plVar3,local_38);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    local_98[1] = 4;
    local_98[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
    FGenericPlatformString::Memcpy(local_98[0],&DAT_145009c10,8);
    (**(code **)(*local_88 + 0x48))(local_88,local_98);
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    if (((param_3 != &local_a8) && (*(int *)(param_3 + 1) != 0)) &&
       (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_a8);
    }
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_28 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_GetPoolName_14500c340;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      if (((&local_a8 != (longlong **)(plVar3 + 1)) && (local_a0 != 0)) &&
         (local_a8 != (longlong *)0x0)) {
        (**(code **)(*local_a8 + 0x30))();
      }
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_14500c388;
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    plVar2 = local_88;
    local_48 = 0;
    local_40 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_48);
    }
    uVar5 = (**(code **)(*plVar2 + 0x80))(plVar2);
    FUN_142210e40(uVar5,param_1,FUN_142217f80,&local_48);
    local_18 = local_88;
    plStack_10 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
      plVar3 = local_28;
    }
    FUN_142212e20(param_1,8,&local_18,0,0);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      local_28 = (longlong *)FMemory::Realloc(plVar3,0,0);
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
    }
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_80 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plStack_80 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14221b4f0 Serialize body=241 status=ok
// SIG undefined Serialize(void)

void FHttpStreamFArchive::Serialize(longlong param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  iVar3 = (int)param_3;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    iVar4 = (iVar3 - *(int *)(param_1 + 0x98)) + iVar2;
    if (0 < iVar4) {
      iVar2 = *(int *)(param_1 + 0x98);
      iVar1 = iVar2 + iVar4;
      *(int *)(param_1 + 0x98) = iVar1;
      if (*(int *)(param_1 + 0x9c) < iVar1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x90);
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar2 + *(longlong *)(param_1 + 0x90)),0,(longlong)iVar4);
      iVar2 = *(int *)(param_1 + 0xa0);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar2 + *(longlong *)(param_1 + 0x90)),param_2,param_3);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + iVar3;
    return;
  }
  if ((longlong)*(int *)(param_1 + 0x98) < (longlong)((longlong)iVar2 + param_3)) {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
    return;
  }
  ::_guard_xfg_dispatch_icall_nop
            (param_2,(void *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar2),param_3);
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + iVar3;
  return;
}



// FUNCTION 14221b5f0 FUN_14221b5f0 body=904 status=ok
// SIG undefined FUN_14221b5f0(void)

void FUN_14221b5f0(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  int local_res10 [2];
  char local_res18;
  longlong local_98 [7];
  longlong local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_res18 = param_3;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  cVar5 = (**(code **)*param_2)(param_2);
  plVar9 = (longlong *)0x0;
  if (cVar5 == '\0') {
    local_98[4] = 0;
    local_98[5] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 4,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_98[4],8,"replays",8,0x3f);
    (**(code **)(*param_2 + 0x28))(param_2,local_98 + 4);
    if (local_98[4] != 0) {
      FMemory::Free();
    }
    while ((iVar11 = (int)plVar9, -1 < iVar11 && (iVar11 < *(int *)(param_1 + 0x10)))) {
      plVar9 = (longlong *)((longlong)iVar11 * 0x58 + *(longlong *)(param_1 + 8));
      (**(code **)(*plVar9 + 0x38))(plVar9,param_2,0);
      plVar9 = (longlong *)(ulonglong)(iVar11 + 1);
    }
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  else {
    local_98[0] = 0;
    local_98[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
    lVar12 = local_98[0];
    FGenericPlatformString::Convert<char,wchar_t>(local_98[0],8,"replays",8,0x3f);
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0xb0))(param_2,local_58);
    plVar7 = (longlong *)*puVar6;
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar7,local_res10,local_98);
    plVar8 = plVar9;
    if (local_res10[0] != -1) {
      plVar8 = (longlong *)(*plVar7 + (longlong)local_res10[0] * 0x28);
    }
    plVar7 = plVar8 + 2;
    if (plVar8 == (longlong *)0x0) {
      plVar7 = plVar9;
    }
    if (((plVar7 == (longlong *)0x0) || (*plVar7 == 0)) || (*(int *)(*plVar7 + 8) != 5)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      lVar12 = local_98[0];
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar12 = local_98[0];
        if (iVar11 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
          lVar12 = local_98[0];
        }
      }
    }
    if (lVar12 != 0) {
      FMemory::Free(lVar12);
    }
    if (bVar3) {
      local_98[2] = 0;
      local_98[3] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 2,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_98[2],8,"replays",8,0x3f);
      puVar6 = (undefined8 *)(**(code **)(*param_2 + 0xb0))(param_2,local_48);
      plVar7 = (longlong *)FUN_1416b2a60(*puVar6,local_98 + 2);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_40 + 1;
        lVar12 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      plVar8 = plVar9;
      if (local_98[2] != 0) {
        FMemory::Free();
        plVar8 = (longlong *)0x0;
      }
      while ((iVar11 = (int)plVar8, -1 < iVar11 && (iVar11 < (int)plVar7[1]))) {
        iVar2 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar2 + 1;
        if (*(int *)(param_1 + 0x14) < iVar2 + 1) {
          TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar2);
        }
        plVar10 = (longlong *)((longlong)iVar2 * 0x58 + *(longlong *)(param_1 + 8));
        plVar8 = plVar9;
        if (plVar10 != (longlong *)0x0) {
          *plVar10 = (longlong)&PTR__scalar_deleting_destructor__14500c0c8;
          plVar10[1] = 0;
          plVar10[2] = 0;
          plVar10[3] = 0;
          plVar10[4] = 0;
          plVar10[5] = 0;
          plVar10[6] = 0;
          plVar10[8] = 0;
          *(undefined4 *)(plVar10 + 9) = 0;
          *(undefined1 *)((longlong)plVar10 + 0x4c) = 0;
          *(undefined4 *)(plVar10 + 10) = 0;
          *(undefined1 *)((longlong)plVar10 + 0x54) = 0;
          plVar8 = plVar10;
        }
        puVar6 = (undefined8 *)(**(code **)**(undefined8 **)(*plVar7 + (longlong)iVar11 * 0x10))();
        local_98[6] = *puVar6;
        local_60 = puVar6[1];
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar8 + 0x20))(plVar8,local_98 + 6);
        plVar8 = (longlong *)(ulonglong)(iVar11 + 1);
      }
    }
  }
  if (local_res18 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}



// FUNCTION 14221b980 Serialize body=281 status=ok
// SIG undefined Serialize(void)

void FNetworkReplayListItem::Serialize(longlong param_1,longlong *param_2,char param_3)

{
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  (**(code **)(*param_2 + 0x60))(param_2,L"AppName",param_1 + 8);
  (**(code **)(*param_2 + 0x60))(param_2,L"SessionName",param_1 + 0x18);
  (**(code **)(*param_2 + 0x60))(param_2,L"FriendlyName",param_1 + 0x28);
  (**(code **)(*param_2 + 0x40))(param_2,L"Timestamp",param_1 + 0x38);
  (**(code **)(*param_2 + 0x80))(param_2,L"SizeInBytes",param_1 + 0x40);
  (**(code **)(*param_2 + 0x80))(param_2,L"DemoTimeInMs",param_1 + 0x44);
  (**(code **)(*param_2 + 0x80))(param_2,L"NumViewers",param_1 + 0x48);
  (**(code **)(*param_2 + 0x68))(param_2,L"bIsLive",param_1 + 0x4c);
  (**(code **)(*param_2 + 0x80))(param_2,L"Changelist",param_1 + 0x50);
  (**(code **)(*param_2 + 0x68))(param_2,L"shouldKeep",param_1 + 0x54);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}



// FUNCTION 14221baa0 Serialize body=175 status=ok
// SIG undefined Serialize(void)

void FNetworkReplayStartDownloadingResponse::Serialize
               (longlong param_1,longlong *param_2,char param_3)

{
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  (**(code **)(*param_2 + 0x60))(param_2,L"state",param_1 + 8);
  (**(code **)(*param_2 + 0x80))(param_2,L"numChunks",param_1 + 0x2c);
  (**(code **)(*param_2 + 0x80))(param_2,L"time",param_1 + 0x28);
  (**(code **)(*param_2 + 0x60))(param_2,L"viewerId",param_1 + 0x18);
  (**(code **)(*param_2 + 0x60))(param_2,L"meta",param_1 + 0x30);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}



// FUNCTION 14221bb50 Serialize body=89 status=ok
// SIG undefined Serialize(void)

void FNetworkReplayStartUploadingResponse::Serialize
               (longlong param_1,longlong *param_2,char param_3)

{
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  (**(code **)(*param_2 + 0x60))(param_2,L"sessionId",param_1 + 8);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}



// FUNCTION 14221bbb0 Serialize body=92 status=ok
// SIG undefined Serialize(void)

void FNetworkReplayUserList::Serialize(longlong param_1,longlong *param_2,char param_3)

{
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  (**(code **)(*param_2 + 0x88))(param_2,L"users",param_1 + 8);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}



// FUNCTION 14221bc20 StartStreaming body=393 status=ok
// SIG undefined StartStreaming(void)

void FHttpNetworkReplayStreamer::StartStreaming
               (longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
               undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  uVar5 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar7 = (longlong)(int)param_4[1] & 0x3fffffffffffffff;
  if ((longlong)(int)param_4[1] * 4 + *param_4 < *param_4) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      FUN_142216540(&local_38);
      iVar6 = (int)local_30;
      if ((int)local_30 < 2) {
        if (local_38 != 0) {
          FMemory::Free();
        }
      }
      else {
        lVar4 = (longlong)(int)local_40;
        iVar2 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar2);
        if (local_40._4_4_ < iVar2) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_48);
        }
        lVar1 = local_38;
        plVar3 = local_48 + lVar4 * 2;
        local_38 = 0;
        *plVar3 = lVar1;
        *(undefined4 *)((longlong)plVar3 + 0xc) = local_30._4_4_;
        local_30 = 0;
        *(int *)(plVar3 + 1) = iVar6;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar7);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,&local_48,param_5,param_6,param_7);
  plVar3 = local_48;
  for (iVar6 = (int)local_40; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}



// FUNCTION 14221bdb0 FUN_14221bdb0 body=2416 status=ok
// SIG undefined FUN_14221bdb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14221bdb0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  byte param_5,longlong param_6,longlong *param_7)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  void *_Src;
  char cVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  byte bVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  int iVar18;
  double dVar19;
  LARGE_INTEGER local_res8;
  undefined8 in_stack_fffffffffffffe38;
  undefined4 uVar20;
  undefined8 in_stack_fffffffffffffe48;
  undefined4 uVar21;
  undefined2 *local_1a8;
  int local_1a0;
  int local_19c;
  longlong *local_198;
  longlong *plStack_190;
  longlong *local_188;
  int local_180;
  undefined2 *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined2 *local_158;
  undefined8 local_150;
  undefined2 *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined **local_108;
  undefined4 local_100;
  byte local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  int local_d0;
  void *local_c8;
  int local_c0;
  longlong local_b8;
  int local_b0;
  longlong local_a8 [2];
  longlong *local_98;
  longlong *plStack_90;
  longlong local_88 [2];
  undefined2 *local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong *local_48;
  longlong *plStack_40;
  
  uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
  uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
  local_108 = &PTR_FUN_1440104d0;
  local_f8 = param_5;
  local_100 = 6;
  if ((((1 < (int)param_1[0x41]) || ((int)param_1[0x4b] != 0)) || ((int)param_1[0x46] < 2)) ||
     (param_1[0x5f] != 0)) {
    if ((int)param_7[1] == 0) {
      return;
    }
    if ((longlong *)*param_7 == (longlong *)0x0) {
      return;
    }
    cVar5 = (**(code **)(*(longlong *)*param_7 + 0x18))();
    if (cVar5 == '\0') {
      return;
    }
    if ((int)param_7[1] != 0) {
      (**(code **)(*(longlong *)*param_7 + 0x40))((longlong *)*param_7,&local_108);
      return;
    }
    (**(code **)(_DAT_00000000 + 0x40))(0,&local_108);
    return;
  }
  plVar2 = param_1 + 0x42;
  FString::operator=(plVar2,param_6);
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_6 + 0x10);
  plVar7 = param_1 + 0x54;
  *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)(param_6 + 0x14);
  iVar18 = 0;
  if (param_7 != plVar7) {
    if (((int)param_7[1] == 0) || (param_7 = (longlong *)*param_7, param_7 == (longlong *)0x0)) {
      if (((int)param_1[0x55] != 0) && (plVar3 = (longlong *)*plVar7, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        if (*plVar7 != 0) {
          lVar14 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar14;
        }
        *(undefined4 *)(param_1 + 0x55) = 0;
      }
    }
    else {
      (**(code **)(*param_7 + 0x30))(param_7,plVar7);
    }
  }
  bVar15 = param_5 ^ 1;
  (**(code **)(param_1[0x16] + 0x170))(param_1 + 0x16,bVar15);
  (**(code **)(param_1[0x16] + 0x178))(param_1 + 0x16,param_5);
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  (**(code **)(param_1[1] + 0x170))(param_1 + 1,bVar15);
  (**(code **)(param_1[1] + 0x178))(param_1 + 1,param_5);
  (**(code **)(param_1[0x2b] + 0x170))(param_1 + 0x2b,bVar15);
  (**(code **)(param_1[0x2b] + 0x178))(param_1 + 0x2b,param_5);
  QueryPerformanceCounter(&local_res8);
  dVar19 = (double)local_res8.QuadPart * DAT_1468b02f8;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x48] = (longlong)(dVar19 + 16777216.0);
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x61,0);
  if (0 < (int)*(uint *)(param_1 + 0x6a)) {
    uVar16 = (ulonglong)*(uint *)(param_1 + 0x6a);
    do {
      plVar7 = (longlong *)param_1[0x69];
      if ((longlong *)param_1[0x69] == (longlong *)0x0) {
        plVar7 = param_1 + 0x68;
      }
      uVar6 = (longlong)(int)param_1[0x6a] - 1U & uVar11;
      uVar11 = uVar11 + 1;
      *(undefined4 *)((longlong)plVar7 + uVar6 * 4) = 0xffffffff;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  plVar7 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar7 + 0x40))(plVar7,&local_198);
  plVar7 = param_1 + 0x40;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  if (param_5 != 0) {
    *(undefined4 *)(param_1 + 0x4b) = 1;
    *(undefined4 *)(param_1 + 0x41) = 0;
    if (*(int *)((longlong)param_1 + 0x20c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar7,0);
    }
    local_1a8 = (undefined2 *)0x0;
    if (*(int *)(param_2 + 8) < 2) {
      puVar10 = (undefined8 *)FUN_141f2eb00(local_78,param_3);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*puVar10;
      }
      if ((int)param_1[0x43] == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*plVar2;
      }
      if ((int)param_1[0x46] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)param_1[0x45];
      }
      uVar9 = CONCAT44(uVar20,(int)param_1[0x44]);
      FString::PrintfImpl(&local_148,L"%sreplay?app=%s&version=%u&cl=%u&friendlyName=%s",puVar8,
                          puVar13,uVar9,*(undefined4 *)((longlong)param_1 + 0x224),puVar12);
      uVar20 = (undefined4)((ulonglong)uVar9 >> 0x20);
      if (local_1a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_1a8 = local_148;
      local_1a0 = (int)local_140;
      local_19c = local_140._4_4_;
      local_140 = 0;
      local_148 = (undefined2 *)0x0;
    }
    else {
      FString::ToLower(param_2,&local_d8);
      puVar10 = (undefined8 *)FUN_141f2eb00(local_88,param_3);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*puVar10;
      }
      if ((int)param_1[0x43] == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*plVar2;
      }
      puVar8 = &DAT_143f3eda8;
      if (local_d0 != 0) {
        puVar8 = local_d8;
      }
      if ((int)param_1[0x46] == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)param_1[0x45];
      }
      FString::PrintfImpl(&local_158,L"%sreplay/%s?app=%s&version=%u&cl=%u&friendlyName=%s",puVar17,
                          puVar8,puVar13,(int)param_1[0x44],
                          CONCAT44(uVar21,*(undefined4 *)((longlong)param_1 + 0x224)),puVar12);
      uVar20 = (undefined4)((ulonglong)puVar13 >> 0x20);
      if (local_1a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_1a8 = local_158;
      local_1a0 = (int)local_150;
      local_19c = local_150._4_4_;
      local_150 = 0;
      local_158 = (undefined2 *)0x0;
      local_78[0] = local_d8;
      if (local_88[0] != 0) {
        FMemory::Free();
        local_78[0] = local_d8;
      }
    }
    puVar12 = &DAT_143f3eda8;
    if (local_78[0] != (undefined2 *)0x0) {
      FMemory::Free();
    }
    (**(code **)(*param_1 + 0x218))(param_1,&local_b8);
    if (1 < local_b0) {
      puVar10 = (undefined8 *)FUN_141f2eb00(local_68,&local_b8);
      if (*(int *)(puVar10 + 1) != 0) {
        puVar12 = (undefined2 *)*puVar10;
      }
      FString::PrintfImpl(&local_c8,L"&meta=%s",puVar12);
      _Src = local_c8;
      iVar4 = local_1a0;
      if (local_c0 != 0) {
        iVar18 = local_c0 + -1;
      }
      if (iVar18 != 0) {
        lVar14 = (longlong)local_1a0;
        local_1a0 = (uint)(local_1a0 == 0) + iVar18 + local_1a0;
        if (local_19c < local_1a0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,iVar4);
        }
        puVar12 = local_1a8 + (lVar14 - (ulonglong)(iVar4 != 0));
        _guard_xfg_dispatch_icall_nop(puVar12,_Src,(longlong)iVar18 * 2);
        puVar12[iVar18] = 0;
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
    }
    (**(code **)(*local_198 + 0x50))(local_198,&local_1a8);
    local_138 = 0;
    local_130 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Memcpy(local_138,L"POST",10);
    (**(code **)(*local_198 + 0x48))(local_198,&local_138);
    if (local_138 != 0) {
      FMemory::Free();
    }
    uVar9 = (**(code **)(*local_198 + 0x80))();
    FUN_1406c1b60(uVar9,param_1,FUN_142218e50);
    local_118 = 0;
    local_110 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"application/json",0x22);
    local_128 = 0;
    local_120 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    FGenericPlatformString::Memcpy(local_128,L"Content-Type",0x1a);
    (**(code **)(*local_198 + 0x68))(local_198,&local_128,&local_118);
    if (local_128 != 0) {
      FMemory::Free();
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_4 + 1)) {
      local_e8 = 0;
      local_f0 = &PTR_FUN_14500c208;
      local_e0 = 0;
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&local_e8,param_4);
      plVar2 = local_198;
      lVar14 = *local_198;
      uVar9 = FUN_1406d2150(&local_f0,local_58,1);
      (**(code **)(lVar14 + 0x60))(plVar2,uVar9);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      FUN_1422124e0(&local_f0);
    }
    local_48 = local_198;
    plStack_40 = plStack_190;
    if (plStack_190 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_190 + 1) = (int)plStack_190[1] + 1;
      UNLOCK();
    }
    FUN_142212e20(param_1,0,&local_48,3,CONCAT44(uVar20,0x40000000));
    (**(code **)(*param_1 + 0x100))(param_1);
    puVar12 = local_1a8;
    if (local_b8 != 0) {
      FMemory::Free();
      puVar12 = local_1a8;
    }
    goto joined_r0x00014221c6b9;
  }
  *(undefined4 *)(param_1 + 0x4b) = 2;
  FString::operator=(plVar7,param_2);
  puVar13 = &DAT_143f3eda8;
  local_178 = (undefined2 *)0x0;
  local_170 = 0;
  if (*(int *)(param_4 + 1) == 1) {
    FString::operator=(&local_178,*param_4);
    puVar8 = local_178;
    if ((int)local_170 == 0) goto LAB_14221c0dd;
  }
  else {
LAB_14221c0dd:
    puVar8 = &DAT_143f3eda8;
  }
  puVar12 = local_178;
  if ((int)param_1[0x41] == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*plVar7;
  }
  if ((int)param_1[0x46] != 0) {
    puVar13 = (undefined2 *)param_1[0x45];
  }
  FString::PrintfImpl(local_a8,L"%sreplay/%s/startDownloading?user=%s",puVar13,puVar17,puVar8);
  (**(code **)(*local_198 + 0x50))(local_198,local_a8);
  local_168 = 0;
  local_160 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
  FGenericPlatformString::Memcpy(local_168,L"POST",10);
  (**(code **)(*local_198 + 0x48))(local_198,&local_168);
  if (local_168 != 0) {
    FMemory::Free();
  }
  uVar9 = (**(code **)(*local_198 + 0x80))();
  FUN_1406c1b60(uVar9,param_1,FUN_142218950);
  local_98 = local_198;
  plStack_90 = plStack_190;
  if (plStack_190 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_190 + 1) = (int)plStack_190[1] + 1;
    UNLOCK();
    puVar12 = local_178;
  }
  FUN_142212e20(param_1,4,&local_98,0,(ulonglong)puVar8 & 0xffffffff00000000);
  local_188 = (longlong *)0x0;
  local_180 = 0;
  (**(code **)(*param_1 + 0x108))(param_1,&local_188);
  if (local_180 == 0) {
LAB_14221c226:
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
  }
  else if (local_188 != (longlong *)0x0) {
    (**(code **)(*local_188 + 0x28))(local_188,0);
    if (local_188 != (longlong *)0x0) {
      local_188 = (longlong *)FMemory::Realloc(local_188,0,0);
    }
    local_180 = 0;
    goto LAB_14221c226;
  }
  FUN_1422144b0(param_1);
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
joined_r0x00014221c6b9:
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  if (plStack_190 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_190 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_190)(plStack_190);
      LOCK();
      piVar1 = (int *)((longlong)plStack_190 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plStack_190 + 8))(plStack_190,1);
      }
    }
  }
  return;
}



// FUNCTION 14221c720 StopStreaming body=163 status=ok
// SIG undefined StopStreaming(void)

void FHttpNetworkReplayStreamer::StopStreaming(longlong *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (((int)param_1[0x55] != 0) && ((longlong *)param_1[0x54] != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)param_1[0x54] + 0x18))();
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014221c753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1f0))(param_1);
      return;
    }
  }
  iVar1 = (int)param_1[0x4b];
  if ((iVar1 != 0) && (*(char *)((longlong)param_1 + 0x25c) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x25c) = 1;
    if (iVar1 == 2) {
      FUN_14221a800(param_1,1);
    }
    else if (iVar1 == 1) {
      FUN_142216150(param_1);
      FUN_14221c7d0(param_1);
    }
    local_18 = 0;
    uStack_10 = 0;
    FUN_142212e20(param_1,0x11,&local_18,0,0);
  }
  return;
}



// FUNCTION 14221c7d0 FUN_14221c7d0 body=545 status=ok
// SIG undefined FUN_14221c7d0(void)

void FUN_14221c7d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong local_68 [6];
  longlong *local_38;
  longlong *plStack_30;
  longlong local_28 [2];
  longlong *local_18;
  longlong *plStack_10;
  
  plVar4 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_38);
  uVar5 = (**(code **)(*local_38 + 0x80))();
  FUN_1406c1b60(uVar5,param_1,FUN_142219160);
  plVar4 = local_38;
  puVar6 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x208) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = *(undefined2 **)(param_1 + 0x200);
  }
  if (*(int *)(param_1 + 0x230) != 0) {
    puVar6 = *(undefined2 **)(param_1 + 0x228);
  }
  FString::PrintfImpl(local_28,L"%sreplay/%s/stopUploading?numChunks=%i&time=%i&absSize=%i",puVar6,
                      puVar7,*(undefined4 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x274),
                      *(undefined4 *)(param_1 + 0x358));
  (**(code **)(*plVar4 + 0x50))(plVar4,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_68[1] = 5;
  local_68[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"POST",10);
  (**(code **)(*local_38 + 0x48))(local_38,local_68);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[4] = 0;
  local_68[5] = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 4,0);
  FGenericPlatformString::Memcpy(local_68[4],L"application/octet-stream",0x32);
  local_68[2] = 0;
  local_68[3] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy(local_68[2],L"Content-Type",0x1a);
  (**(code **)(*local_38 + 0x68))(local_38,local_68 + 2,local_68 + 4);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  local_18 = local_38;
  plStack_10 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_142212e20(param_1,3,&local_18,3,0x40000000);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_30 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plStack_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 14221ca20 FUN_14221ca20 body=685 status=ok
// SIG undefined FUN_14221ca20(void)

void FUN_14221ca20(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  LARGE_INTEGER local_res8;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58 [8];
  longlong *local_18;
  longlong *plStack_10;
  
  if (((1 < *(int *)(param_1 + 0x208)) && (*(int *)(param_1 + 0xa0) != 0)) &&
     (*(int *)(param_1 + 600) != 0)) {
    plVar4 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_68);
    uVar5 = (**(code **)(*local_68 + 0x80))();
    FUN_1406c1b60(uVar5,param_1,FUN_142218380);
    plVar4 = local_68;
    puVar6 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x208) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = *(undefined2 **)(param_1 + 0x200);
    }
    if (*(int *)(param_1 + 0x230) != 0) {
      puVar6 = *(undefined2 **)(param_1 + 0x228);
    }
    FString::PrintfImpl(local_58 + 6,L"%sreplay/%s/file/replay.header?numChunks=%i&time=%i",puVar6,
                        puVar7,*(undefined4 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x274));
    (**(code **)(*plVar4 + 0x50))(plVar4,local_58 + 6);
    if (local_58[6] != 0) {
      FMemory::Free();
    }
    local_58[1] = 5;
    local_58[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"POST",10);
    (**(code **)(*local_68 + 0x48))(local_68,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    local_58[4] = 0;
    local_58[5] = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 4,0);
    FGenericPlatformString::Memcpy(local_58[4],L"application/octet-stream",0x32);
    local_58[2] = 0;
    local_58[3] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
    FGenericPlatformString::Memcpy(local_58[2],L"Content-Type",0x1a);
    (**(code **)(*local_68 + 0x68))(local_68,local_58 + 2,local_58 + 4);
    if (local_58[2] != 0) {
      FMemory::Free();
    }
    if (local_58[4] != 0) {
      FMemory::Free();
    }
    (**(code **)(*local_68 + 0x58))(local_68,param_1 + 0x98);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x98,0);
    }
    local_18 = local_68;
    plStack_10 = plStack_60;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
    FUN_142212e20(param_1,1,&local_18,3,0x40000000);
    QueryPerformanceCounter(&local_res8);
    *(double *)(param_1 + 0x240) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_60 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plStack_60 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14221ccd0 GetAdvertisingProvider body=58 status=ok
// SIG undefined GetAdvertisingProvider(void)

longlong FAdvertising::GetAdvertisingProvider(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*param_2 != 0) {
    FUN_14168dc80();
    lVar2 = *param_2;
    uVar1 = FUN_14168dc80();
    lVar2 = FUN_141690010(uVar1,lVar2);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 14221cd10 GetDefaultProvider body=133 status=ok
// SIG undefined GetDefaultProvider(void)

void FAdvertising::GetDefaultProvider(longlong *param_1)

{
  undefined2 *puVar1;
  undefined1 local_res8 [32];
  undefined2 *local_18;
  undefined8 local_10;
  
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  FConfigCacheIni::GetString
            (DAT_1468b6148,L"Advertising",L"DefaultProviderName",&local_18,&DAT_1468e2360);
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FName::FName(local_res8,puVar1,1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  (**(code **)(*param_1 + 0x40))(param_1,local_res8);
  return;
}



// FUNCTION 14221cda0 FUN_14221cda0 body=39 status=ok
// SIG undefined FUN_14221cda0(void)

void FUN_14221cda0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14500c800;
    return;
  }
  return;
}



// FUNCTION 14221cdd0 FUN_14221cdd0 body=744 status=ok
// SIG undefined FUN_14221cdd0(void)

char FUN_14221cdd0(longlong param_1,undefined8 param_2,byte param_3,uint param_4,undefined8 *param_5
                  ,longlong *param_6,undefined8 *param_7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  size_t _Size;
  char cVar6;
  void *local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_133;
  undefined1 local_132;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ushort local_60;
  undefined4 local_5e;
  undefined **local_58;
  void **local_50;
  
  cVar6 = '\0';
  local_90 = 0;
  local_88 = 0;
  uVar5 = 0xff;
  local_80 = 0;
  *param_7 = 0;
  local_a0 = *param_5;
  local_98 = *(undefined4 *)(param_5 + 1);
  local_60 = 0x202;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_5e = 0xff00ff;
  local_a8[0] = 0xc;
  if (param_4 != 0) {
    if (param_4 < 4) {
      local_5e = 0xff0004;
    }
    else {
      if (param_4 < 0xff) {
        uVar5 = (undefined2)param_4;
      }
      local_5e = CONCAT22(0xff,uVar5);
    }
  }
  puVar4 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  param_3 = ~param_3;
  local_f8 = *puVar4;
  local_144 = puVar4[1];
  local_140 = puVar4[2];
  local_13c = puVar4[3];
  local_138 = puVar4[4];
  local_e4 = *(undefined1 *)(puVar4 + 5);
  local_133 = *(undefined1 *)((longlong)puVar4 + 0x15);
  local_132 = *(undefined1 *)((longlong)puVar4 + 0x16);
  local_130 = *(undefined8 *)(puVar4 + 6);
  local_128 = puVar4[8];
  local_124 = puVar4[9];
  local_120 = puVar4[10];
  local_11c = puVar4[0xb];
  local_118 = puVar4[0xc];
  local_114 = *(undefined8 *)(puVar4 + 0xd);
  local_10c = puVar4[0xf];
  local_108 = puVar4[0x10];
  local_134 = local_e4;
  if ((param_3 & 4) == 0) {
    local_134 = 1;
  }
  local_148 = 0;
  local_f4 = local_144;
  local_f0 = local_140;
  local_ec = local_13c;
  local_e8 = local_138;
  local_e3 = local_133;
  local_e2 = local_132;
  local_e0 = local_130;
  local_d8 = local_128;
  local_d4 = local_124;
  local_d0 = local_120;
  local_cc = local_11c;
  local_c8 = local_118;
  local_c4 = local_114;
  local_bc = local_10c;
  local_b8 = local_108;
  if ((param_3 & 1) == 0) {
    FBox::FBox(&local_58,param_5);
    local_118 = 0;
    local_124 = 2;
  }
  if ((param_3 & 2) == 0) {
    local_120 = 1;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),&local_148);
  local_58 = &PTR_write_14500c9d8;
  local_50 = &local_158;
  local_158 = (void *)0x0;
  local_150 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                    (*(longlong **)(param_1 + 8),local_a8,&local_58,0);
  if (cVar2 == '\0') {
    if ((local_60 & 8) == 0) {
      local_60 = local_60 | 8;
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                        (*(longlong **)(param_1 + 8),local_a8,&local_58,0);
      if (cVar2 != '\0') {
        cVar6 = '\x02';
      }
    }
  }
  else {
    cVar6 = '\x01';
  }
  iVar1 = (int)local_150;
  _Size = (size_t)(int)local_150;
  if ((int)local_150 == 0) {
    cVar6 = '\0';
  }
  else if (cVar6 != '\0') {
    iVar3 = (int)param_6[1];
    if (*(int *)((longlong)param_6 + 0xc) < iVar3 + (int)local_150) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_6);
      iVar3 = (int)param_6[1];
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar3 + *param_6),local_158,_Size);
    *(int *)(param_6 + 1) = (int)param_6[1] + iVar1;
  }
  local_58 = &PTR__purecall_143f3ef70;
  if (local_158 != (void *)0x0) {
    FMemory::Free();
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),&local_f8);
  return cVar6;
}



// FUNCTION 14221d0c0 FUN_14221d0c0 body=685 status=ok
// SIG undefined FUN_14221d0c0(void)

undefined8
FUN_14221d0c0(longlong param_1,undefined8 param_2,byte param_3,uint param_4,undefined8 *param_5,
             undefined8 param_6,longlong *param_7)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_133;
  undefined1 local_132;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ushort local_60;
  undefined4 local_5e;
  undefined1 local_58 [48];
  
  uVar5 = 0;
  local_90 = 0;
  uVar4 = 0xff;
  local_88 = 0;
  local_80 = 0;
  *param_7 = 0;
  local_a0 = *param_5;
  local_98 = *(undefined4 *)(param_5 + 1);
  local_60 = 0x202;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_5e = 0xff00ff;
  local_a8[0] = 0xc;
  if (param_4 != 0) {
    if (param_4 < 4) {
      local_5e = 0xff0004;
    }
    else {
      if (param_4 < 0xff) {
        uVar4 = (undefined2)param_4;
      }
      local_5e = CONCAT22(0xff,uVar4);
    }
  }
  puVar1 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  local_f8 = *puVar1;
  local_144 = puVar1[1];
  local_140 = puVar1[2];
  local_13c = puVar1[3];
  local_138 = puVar1[4];
  local_e4 = *(undefined1 *)(puVar1 + 5);
  local_133 = *(undefined1 *)((longlong)puVar1 + 0x15);
  local_132 = *(undefined1 *)((longlong)puVar1 + 0x16);
  local_130 = *(undefined8 *)(puVar1 + 6);
  local_128 = puVar1[8];
  local_124 = puVar1[9];
  local_120 = puVar1[10];
  local_11c = puVar1[0xb];
  local_118 = puVar1[0xc];
  local_114 = *(undefined8 *)(puVar1 + 0xd);
  local_10c = puVar1[0xf];
  local_108 = puVar1[0x10];
  param_3 = ~param_3;
  local_134 = local_e4;
  if ((param_3 & 4) == 0) {
    local_134 = 1;
  }
  local_148 = 0;
  local_f4 = local_144;
  local_f0 = local_140;
  local_ec = local_13c;
  local_e8 = local_138;
  local_e3 = local_133;
  local_e2 = local_132;
  local_e0 = local_130;
  local_d8 = local_128;
  local_d4 = local_124;
  local_d0 = local_120;
  local_cc = local_11c;
  local_c8 = local_118;
  local_c4 = local_114;
  local_bc = local_10c;
  local_b8 = local_108;
  if ((param_3 & 1) == 0) {
    FBox::FBox(local_58,param_5);
    local_118 = 0;
    local_124 = 2;
  }
  if ((param_3 & 2) == 0) {
    local_120 = 1;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),&local_148);
  lVar3 = **(longlong **)(param_1 + 8);
  uVar2 = (**(code **)(*DAT_146b08400 + 0x138))();
  lVar3 = (**(code **)(lVar3 + 0x40))(*(undefined8 *)(param_1 + 8),local_a8,uVar2);
  *param_7 = lVar3;
  if (lVar3 == 0) {
    if ((local_60 & 8) == 0) {
      local_60 = local_60 | 8;
      lVar3 = **(longlong **)(param_1 + 8);
      uVar2 = (**(code **)(*DAT_146b08400 + 0x138))();
      lVar3 = (**(code **)(lVar3 + 0x40))(*(undefined8 *)(param_1 + 8),local_a8,uVar2);
      *param_7 = lVar3;
      if (lVar3 != 0) {
        uVar5 = 2;
      }
    }
  }
  else {
    uVar5 = 1;
  }
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar2 = uVar5;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),&local_f8);
  return uVar2;
}



// FUNCTION 14221d370 CookTriMeshImp<0> body=609 status=ok
// SIG undefined CookTriMeshImp<0>(void)

bool FPhysXCooking::CookTriMeshImp<0>
               (longlong param_1,undefined8 param_2,byte param_3,undefined8 *param_4,
               undefined8 *param_5,undefined8 *param_6,byte param_7,undefined8 param_8,
               longlong *param_9)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  ulonglong local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ushort local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  local_118 = 0;
  *param_9 = 0;
  uStack_70 = *param_4;
  uStack_110 = 0;
  local_108 = 0;
  _local_68 = CONCAT44(CONCAT13(uStack_101,CONCAT12(uStack_102,CONCAT11(uStack_103,uStack_104))),
                       *(undefined4 *)(param_4 + 1));
  uStack_58 = *param_5;
  uStack_5c = (undefined4)(local_100 >> 0x20);
  local_100 = local_100 & 0xffffffff00000000;
  uStack_f8 = 0;
  local_f0 = 0;
  _local_50 = CONCAT44(uStack_ec,*(undefined4 *)(param_5 + 1));
  _local_78 = CONCAT44(uStack_114,0xc);
  local_60 = 0xc;
  local_40 = 2;
  local_38 = *param_6;
  local_48 = (ushort)param_7;
  puVar1 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  local_c8 = *puVar1;
  uStack_114 = puVar1[1];
  local_c0 = puVar1[2];
  local_bc = puVar1[3];
  uStack_110 = *(undefined8 *)(puVar1 + 2);
  local_108 = puVar1[4];
  local_b4 = *(undefined1 *)(puVar1 + 5);
  uStack_103 = *(undefined1 *)((longlong)puVar1 + 0x15);
  uStack_102 = *(undefined1 *)((longlong)puVar1 + 0x16);
  local_100 = *(ulonglong *)(puVar1 + 6);
  local_a8 = puVar1[8];
  local_a4 = puVar1[9];
  uStack_f8 = *(undefined8 *)(puVar1 + 8);
  local_f0 = puVar1[10];
  uStack_ec = puVar1[0xb];
  local_e8 = puVar1[0xc];
  local_94 = *(undefined8 *)(puVar1 + 0xd);
  local_8c = puVar1[0xf];
  local_d8 = puVar1[0x10];
  uStack_104 = local_b4;
  if ((~param_3 & 4) == 0) {
    uStack_104 = 1;
  }
  local_e4 = (undefined4)local_94;
  uStack_e0 = (undefined4)((ulonglong)local_94 >> 0x20);
  local_118 = 0;
  local_dc = local_8c;
  if ((~param_3 & 1) == 0) {
    local_e4 = 0x3f0ccccd;
    uStack_f8 = CONCAT44(2,local_a8);
    uStack_e0 = 0;
    local_dc = 0;
  }
  local_c4 = uStack_114;
  local_b8 = local_108;
  local_b3 = uStack_103;
  local_b2 = uStack_102;
  local_b0 = local_100;
  local_a0 = local_f0;
  local_9c = uStack_ec;
  local_98 = local_e8;
  local_88 = local_d8;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),&local_118);
  lVar3 = **(longlong **)(param_1 + 8);
  uVar2 = (**(code **)(*DAT_146b08400 + 0x138))();
  lVar3 = (**(code **)(lVar3 + 0x28))(*(undefined8 *)(param_1 + 8),&local_78,uVar2);
  *param_9 = lVar3;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),&local_c8);
  return lVar3 != 0;
}



// FUNCTION 14221d5e0 FPhysXPlatformModule body=37 status=ok
// SIG undefined FPhysXPlatformModule(void)

undefined8 * FPhysXPlatformModule::FPhysXPlatformModule(undefined8 *param_1)

{
  DWORD DVar1;
  
  *param_1 = &PTR_FUN_14500c980;
  DVar1 = TlsAlloc();
  *(DWORD *)(param_1 + 1) = DVar1;
  return param_1;
}



// FUNCTION 14221d610 ~FPhysXPlatformModule body=11 status=ok
// SIG undefined ~FPhysXPlatformModule(void)

void FPhysXPlatformModule::~FPhysXPlatformModule(undefined8 *param_1)

{
  *param_1 = IModuleInterface::vftable;
  return;
}



// FUNCTION 14221d620 FUN_14221d620 body=43 status=ok
// SIG undefined FUN_14221d620(void)

undefined8 * FUN_14221d620(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_CanBeUsedOnAnyThread_14500c8d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14221d650 FUN_14221d650 body=43 status=ok
// SIG undefined FUN_14221d650(void)

undefined8 * FUN_14221d650(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ef70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14221d680 FUN_14221d680 body=43 status=ok
// SIG undefined FUN_14221d680(void)

undefined8 * FUN_14221d680(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_CanBeUsedOnAnyThread_14500c8d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14221d6b0 FUN_14221d6b0 body=50 status=ok
// SIG undefined FUN_14221d6b0(void)

void FUN_14221d6b0(void)

{
  FUN_14221cdd0();
  return;
}



// FUNCTION 14221d6f0 FUN_14221d6f0 body=426 status=ok
// SIG undefined FUN_14221d6f0(void)

undefined8
FUN_14221d6f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,longlong *param_6)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  size_t _Size;
  void *local_a8;
  undefined8 local_a0;
  undefined **local_98;
  void **local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  
  local_34 = (undefined4)param_3;
  local_30 = 1;
  local_10 = 1;
  local_14 = 0;
  local_18 = 0xc2c80000;
  local_38 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_28 = param_5;
  local_20 = param_4;
  lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  local_84 = *(undefined4 *)(lVar4 + 4);
  local_80 = *(undefined4 *)(lVar4 + 8);
  local_7c = *(undefined4 *)(lVar4 + 0xc);
  local_78 = *(undefined4 *)(lVar4 + 0x10);
  local_74 = *(undefined1 *)(lVar4 + 0x14);
  local_73 = *(undefined1 *)(lVar4 + 0x15);
  local_72 = *(undefined1 *)(lVar4 + 0x16);
  local_70 = *(undefined8 *)(lVar4 + 0x18);
  local_68 = *(undefined4 *)(lVar4 + 0x20);
  local_64 = *(undefined4 *)(lVar4 + 0x24);
  local_60 = *(undefined4 *)(lVar4 + 0x28);
  local_5c = *(undefined4 *)(lVar4 + 0x2c);
  local_58 = *(undefined4 *)(lVar4 + 0x30);
  local_54 = *(undefined8 *)(lVar4 + 0x34);
  local_4c = *(undefined4 *)(lVar4 + 0x3c);
  local_48 = *(undefined4 *)(lVar4 + 0x40);
  local_88 = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),&local_88);
  local_98 = &PTR_write_14500c9d8;
  local_90 = &local_a8;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))
                    (*(longlong **)(param_1 + 8),&local_38,&local_98);
  if (cVar2 != '\0') {
    iVar1 = (int)local_a0;
    _Size = (size_t)(int)local_a0;
    if (0 < (int)local_a0) {
      iVar3 = (int)param_6[1];
      if (*(int *)((longlong)param_6 + 0xc) < iVar3 + (int)local_a0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_6);
        iVar3 = (int)param_6[1];
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar3 + *param_6),local_a8,_Size);
      *(int *)(param_6 + 1) = (int)param_6[1] + iVar1;
      local_98 = &PTR__purecall_143f3ef70;
      if (local_a8 != (void *)0x0) {
        FMemory::Free();
      }
      return 1;
    }
  }
  local_98 = &PTR__purecall_143f3ef70;
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 14221d8a0 CookTriMesh body=605 status=ok
// SIG undefined CookTriMesh(void)

undefined1
FPhysXCooking::CookTriMesh
          (longlong param_1,undefined8 param_2,byte param_3,undefined8 *param_4,undefined8 *param_5,
          undefined8 *param_6,byte param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined1 uStack_111;
  ulonglong local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined **local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ushort local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  uStack_70 = *param_4;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  _local_68 = CONCAT44(CONCAT13(uStack_111,CONCAT12(uStack_112,CONCAT11(uStack_113,uStack_114))),
                       *(undefined4 *)(param_4 + 1));
  uStack_58 = *param_5;
  uStack_5c = (undefined4)(local_110 >> 0x20);
  local_110 = local_110 & 0xffffffff00000000;
  uStack_108 = 0;
  local_100 = 0;
  _local_50 = CONCAT44(uStack_fc,*(undefined4 *)(param_5 + 1));
  _local_78 = CONCAT44(uStack_124,0xc);
  local_60 = 0xc;
  local_40 = 2;
  local_38 = *param_6;
  local_48 = (ushort)param_7;
  puVar2 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  local_d8 = *puVar2;
  uStack_124 = puVar2[1];
  local_d0 = puVar2[2];
  local_cc = puVar2[3];
  uStack_120 = *(undefined8 *)(puVar2 + 2);
  local_118 = puVar2[4];
  local_c4 = *(undefined1 *)(puVar2 + 5);
  uStack_113 = *(undefined1 *)((longlong)puVar2 + 0x15);
  uStack_112 = *(undefined1 *)((longlong)puVar2 + 0x16);
  local_110 = *(ulonglong *)(puVar2 + 6);
  local_b8 = puVar2[8];
  local_b4 = puVar2[9];
  uStack_108 = *(undefined8 *)(puVar2 + 8);
  local_100 = puVar2[10];
  uStack_fc = puVar2[0xb];
  local_f8 = puVar2[0xc];
  local_a4 = *(undefined8 *)(puVar2 + 0xd);
  local_9c = puVar2[0xf];
  local_e8 = puVar2[0x10];
  uStack_114 = local_c4;
  if ((~param_3 & 4) == 0) {
    uStack_114 = 1;
  }
  local_f4 = (undefined4)local_a4;
  uStack_f0 = (undefined4)((ulonglong)local_a4 >> 0x20);
  local_128 = 0;
  local_ec = local_9c;
  if ((~param_3 & 1) == 0) {
    local_f4 = 0x3f0ccccd;
    uStack_108 = CONCAT44(2,local_b8);
    uStack_f0 = 0;
    local_ec = 0;
  }
  local_d4 = uStack_124;
  local_c8 = local_118;
  local_c3 = uStack_113;
  local_c2 = uStack_112;
  local_c0 = local_110;
  local_b0 = local_100;
  local_ac = uStack_fc;
  local_a8 = local_f8;
  local_98 = local_e8;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),&local_128);
  local_88 = &PTR_write_14500c9d8;
  local_80 = param_8;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                    (*(longlong **)(param_1 + 8),&local_78,&local_88,0);
  local_88 = &PTR__purecall_143f3ef70;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),&local_d8);
  return uVar1;
}



// FUNCTION 14221db00 FUN_14221db00 body=81 status=ok
// SIG undefined FUN_14221db00(void)

/* WARNING: Removing unreachable block (ram,0x00014221db43) */

undefined1 FUN_14221db00(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14221d0c0();
  return uVar1;
}



// FUNCTION 14221db60 FUN_14221db60 body=365 status=ok
// SIG undefined FUN_14221db60(void)

/* WARNING: Removing unreachable block (ram,0x00014221dc9f) */
/* WARNING: Removing unreachable block (ram,0x00014221dcad) */

bool FUN_14221db60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,longlong *param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  
  local_30 = 1;
  local_10 = 1;
  local_14 = 0;
  *param_6 = 0;
  local_34 = (undefined4)param_3;
  local_18 = 0xc2c80000;
  local_38 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_28 = param_5;
  local_20 = param_4;
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  local_84 = *(undefined4 *)(lVar1 + 4);
  local_80 = *(undefined4 *)(lVar1 + 8);
  local_7c = *(undefined4 *)(lVar1 + 0xc);
  local_78 = *(undefined4 *)(lVar1 + 0x10);
  local_74 = *(undefined1 *)(lVar1 + 0x14);
  local_73 = *(undefined1 *)(lVar1 + 0x15);
  local_72 = *(undefined1 *)(lVar1 + 0x16);
  local_70 = *(undefined8 *)(lVar1 + 0x18);
  local_68 = *(undefined4 *)(lVar1 + 0x20);
  local_64 = *(undefined4 *)(lVar1 + 0x24);
  local_60 = *(undefined4 *)(lVar1 + 0x28);
  local_5c = *(undefined4 *)(lVar1 + 0x2c);
  local_58 = *(undefined4 *)(lVar1 + 0x30);
  local_54 = *(undefined8 *)(lVar1 + 0x34);
  local_4c = *(undefined4 *)(lVar1 + 0x3c);
  local_48 = *(undefined4 *)(lVar1 + 0x40);
  local_88 = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),&local_88);
  lVar1 = **(longlong **)(param_1 + 8);
  uVar2 = (**(code **)(*DAT_146b08400 + 0x138))();
  lVar1 = (**(code **)(lVar1 + 0x60))(*(undefined8 *)(param_1 + 8),&local_38,uVar2);
  *param_6 = lVar1;
  return lVar1 != 0;
}



// FUNCTION 14221dcf0 CreateTriMesh body=106 status=ok
// SIG undefined CreateTriMesh(void)

/* WARNING: Removing unreachable block (ram,0x00014221dd4c) */

undefined1 FPhysXCooking::CreateTriMesh(void)

{
  undefined1 uVar1;
  
  uVar1 = CookTriMeshImp<0>();
  return uVar1;
}



// FUNCTION 14221dd60 FUN_14221dd60 body=541 status=ok
// SIG undefined FUN_14221dd60(void)

undefined8 * FUN_14221dd60(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  puVar6 = TlsGetValue(*(DWORD *)(param_1 + 8));
  if (puVar6 == (undefined8 *)0x0) {
    cVar4 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
      PhysDLLHelper::LoadPhysXModules(1);
    }
    puVar6 = (undefined8 *)operator_new(0x10);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      *puVar6 = &PTR_IsPromotedBuild_14500c928;
      lVar2 = DAT_146b08638;
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      lVar9 = 4;
      if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
        lVar7 = 4;
      }
      else {
        lVar7 = 0;
      }
      lVar3 = DAT_146b08650;
      fVar1 = *(float *)(lVar7 + lVar2);
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
        lVar9 = 0;
      }
      local_48 = *(undefined4 *)(lVar9 + lVar3);
      local_64 = fVar1 * 0.025;
      local_58 = 1;
      local_60 = fVar1 * 0.06 * fVar1;
      local_54 = 0;
      local_38 = 0x3dcccccd;
      local_52 = 0;
      local_5c = 0x3a378034;
      local_50 = CONCAT44(0x447a0000,fVar1);
      local_40 = 0;
      local_3c = 0x3f0ccccd;
      local_28 = 0x20;
      local_44 = 1;
      local_68 = 0;
      local_30 = 0;
      local_34 = 0x3f0ccccd;
      uVar8 = PxCreateCooking(0x3040000,DAT_146b08450,&local_68);
      puVar6[1] = uVar8;
    }
    TlsSetValue(*(DWORD *)(param_1 + 8),puVar6);
    return puVar6;
  }
  return puVar6;
}



// FUNCTION 14221df80 FUN_14221df80 body=102 status=ok
// SIG undefined FUN_14221df80(void)

void FUN_14221df80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_146aee608;
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_146aee600;
  return;
}



// FUNCTION 14221dff0 InitializeModule body=58 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FPhysXPlatformModule>::InitializeModule(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14500c980;
    DVar1 = TlsAlloc();
    *(DWORD *)(puVar2 + 1) = DVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14221e030 Terminate body=42 status=ok
// SIG undefined Terminate(void)

void FPhysXPlatformModule::Terminate(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x40))();
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x48))(plVar1);
  if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014221e052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2);
    return;
  }
  return;
}



// FUNCTION 14221e060 write body=104 status=ok
// SIG int write(int _Filehandle, void * _Buf, uint _MaxCharCount)

int __cdecl FPhysXOutputStream::write(int _Filehandle,void *_Buf,uint _MaxCharCount)

{
  int iVar1;
  longlong lVar2;
  undefined4 in_register_0000000c;
  
  if (_MaxCharCount != 0) {
    lVar2 = *(longlong *)(CONCAT44(in_register_0000000c,_Filehandle) + 8);
    iVar1 = *(int *)(lVar2 + 8);
    *(uint *)(lVar2 + 8) = iVar1 + _MaxCharCount;
    if (*(int *)(lVar2 + 0xc) < (int)(iVar1 + _MaxCharCount)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(lVar2,iVar1);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 +
                       **(longlong **)(CONCAT44(in_register_0000000c,_Filehandle) + 8)),_Buf,
               (ulonglong)_MaxCharCount);
  }
  return _MaxCharCount;
}



// FUNCTION 14221e0d0 FUN_14221e0d0 body=66 status=ok
// SIG undefined FUN_14221e0d0(void)

void FUN_14221e0d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1450102d8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_145010320;
  }
  return;
}



// FUNCTION 14221e150 FUN_14221e150 body=54 status=ok
// SIG undefined FUN_14221e150(void)

undefined8
FUN_14221e150(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,param_5,param_6,param_7);
  return 1;
}



// FUNCTION 14221e190 FUN_14221e190 body=898 status=ok
// SIG undefined FUN_14221e190(void)

void FUN_14221e190(longlong param_1,longlong param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_98;
  float local_88;
  float fStack_74;
  
  iVar18 = *(int *)(param_1 + 0x68);
  if (iVar18 != 0) {
    iVar16 = 1;
    iVar19 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar8 = 0;
    if (1 < iVar18) {
      lVar13 = 0;
      lVar12 = 0;
      lVar15 = 1;
      lVar17 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar17 = param_1;
      }
      do {
        fVar20 = *(float *)(lVar17 + lVar15 * 0xc);
        pfVar1 = (float *)(lVar17 + lVar12 * 0xc);
        if (*pfVar1 <= fVar20) {
          if ((fVar20 != *pfVar1) ||
             (*(float *)(lVar17 + 4 + lVar12 * 0xc) <= *(float *)(lVar17 + 4 + lVar15 * 0xc))) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
        }
        else {
          bVar5 = true;
        }
        iVar8 = iVar16;
        lVar11 = lVar15;
        if (!bVar5) {
          iVar8 = iVar10;
          lVar11 = lVar12;
        }
        lVar12 = lVar11;
        fVar21 = *(float *)(lVar17 + lVar13 * 0xc);
        if (fVar20 <= fVar21) {
          if ((fVar20 < fVar21) ||
             (*(float *)(lVar17 + 4 + lVar15 * 0xc) <= *(float *)(lVar17 + 4 + lVar13 * 0xc))) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
        }
        else {
          bVar5 = true;
        }
        iVar9 = iVar16;
        lVar11 = lVar15;
        if (!bVar5) {
          iVar9 = iVar19;
          lVar11 = lVar13;
        }
        lVar13 = lVar11;
        iVar16 = iVar16 + 1;
        lVar15 = lVar15 + 1;
        iVar10 = iVar8;
        iVar19 = iVar9;
      } while (iVar16 < iVar18);
    }
    iVar18 = *(int *)(param_2 + 0x28);
    iVar10 = iVar18 + 1;
    *(int *)(param_2 + 0x28) = iVar10;
    if (*(int *)(param_2 + 0x2c) < iVar10) {
      FUN_140a95f50();
    }
    lVar12 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar12 = param_2;
    }
    *(int *)(lVar12 + (longlong)iVar18 * 4) = iVar8;
    if (iVar8 != iVar9) {
      bVar5 = true;
      iVar18 = *(int *)(param_1 + 0x68);
      if (*(int *)(param_2 + 0x28) <= iVar18) {
        lVar12 = (longlong)iVar9;
        iVar10 = iVar8;
        iVar19 = iVar9;
        do {
          iVar14 = 0;
          lVar13 = 0;
          iVar16 = iVar19;
          if (0 < iVar18) {
            lVar17 = lVar12;
            do {
              lVar15 = lVar17;
              iVar6 = iVar16;
              if ((lVar13 != lVar17) && (lVar13 != iVar10)) {
                lVar11 = *(longlong *)(param_1 + 0x60);
                if (*(longlong *)(param_1 + 0x60) == 0) {
                  lVar11 = param_1;
                }
                uVar2 = *(undefined8 *)(lVar11 + (longlong)iVar10 * 0xc);
                uVar3 = *(undefined8 *)(lVar11 + lVar17 * 0xc);
                fVar21 = (float)((ulonglong)uVar2 >> 0x20);
                uVar4 = *(undefined8 *)(lVar11 + lVar13 * 0xc);
                fVar20 = (float)((ulonglong)uVar4 >> 0x20);
                local_88 = (float)uVar4;
                fVar22 = (float)uVar3;
                local_98 = (float)uVar2;
                fStack_74 = (float)((ulonglong)uVar3 >> 0x20);
                fVar21 = (fVar20 - fVar21) * (fVar22 - local_98) -
                         (local_88 - local_98) * (fStack_74 - fVar21);
                if (fVar21 < -0.001) {
LAB_14221e41e:
                  lVar15 = lVar13;
                  iVar6 = iVar14;
                }
                else if (fVar21 < 0.001) {
                  if (bVar5) {
                    if (local_88 <= fVar22) {
                      if ((local_88 < fVar22) || (fVar20 <= fStack_74)) {
                        bVar7 = false;
                      }
                      else {
                        bVar7 = true;
                      }
                    }
                    else {
                      bVar7 = true;
                    }
                    lVar15 = lVar13;
                    iVar6 = iVar14;
                    if (!bVar7) {
                      lVar15 = lVar17;
                      iVar6 = iVar16;
                    }
                  }
                  else if ((local_88 < fVar22) || ((local_88 <= fVar22 && (fVar20 < fStack_74))))
                  goto LAB_14221e41e;
                }
              }
              iVar16 = iVar6;
              iVar14 = iVar14 + 1;
              lVar13 = lVar13 + 1;
              lVar17 = lVar15;
            } while (iVar14 < iVar18);
          }
          lVar13 = (longlong)iVar8;
          if (iVar16 != iVar9) {
            lVar13 = lVar12;
          }
          iVar14 = iVar8;
          bVar7 = false;
          if (iVar16 != iVar9) {
            iVar14 = iVar19;
            bVar7 = bVar5;
          }
          bVar5 = bVar7;
          if (iVar16 == iVar8) {
            return;
          }
          iVar18 = *(int *)(param_2 + 0x28);
          iVar10 = iVar18 + 1;
          *(int *)(param_2 + 0x28) = iVar10;
          if (*(int *)(param_2 + 0x2c) < iVar10) {
            FUN_140a95f50();
          }
          lVar12 = *(longlong *)(param_2 + 0x20);
          if (*(longlong *)(param_2 + 0x20) == 0) {
            lVar12 = param_2;
          }
          *(int *)(lVar12 + (longlong)iVar18 * 4) = iVar16;
          iVar18 = *(int *)(param_1 + 0x68);
          lVar12 = lVar13;
          iVar10 = iVar16;
          iVar19 = iVar14;
        } while (*(int *)(param_2 + 0x28) <= iVar18);
      }
      *(undefined4 *)(param_2 + 0x28) = 0;
      if (0x7fffffff < *(uint *)(param_2 + 0x2c)) {
        FUN_141f62110(param_2,0);
      }
    }
  }
  return;
}



// FUNCTION 14221e520 FUN_14221e520 body=181 status=ok
// SIG undefined FUN_14221e520(void)

void FUN_14221e520(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  lVar2 = *param_1;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_2 + 0x44);
    puVar3 = (undefined8 *)(lVar2 + 0x44);
    do {
      FNavigationLinkBase::FNavigationLinkBase(lVar2,(longlong)puVar1 + -0x44);
      lVar2 = lVar2 + 0x50;
      *(undefined8 *)((longlong)puVar3 + -0xc) = *(undefined8 *)((longlong)puVar1 + -0xc);
      *(undefined4 *)((longlong)puVar3 + -4) = *(undefined4 *)((longlong)puVar1 + -4);
      *puVar3 = *puVar1;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar1 + 1);
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 10;
      puVar3 = puVar3 + 10;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14221e5e0 CopyToEmpty<FNavigationSegmentLink> body=232 status=ok
// SIG undefined CopyToEmpty<FNavigationSegmentLink>(void)

void TArray<FNavigationSegmentLink,FDefaultAllocator>::CopyToEmpty<FNavigationSegmentLink>
               (longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  lVar2 = *param_1;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_2 + 0x44);
    puVar3 = (undefined8 *)(lVar2 + 0x44);
    do {
      FNavigationLinkBase::FNavigationLinkBase(lVar2,(longlong)puVar1 + -0x44);
      lVar2 = lVar2 + 0x68;
      *(undefined8 *)((longlong)puVar3 + -0xc) = *(undefined8 *)((longlong)puVar1 + -0xc);
      *(undefined4 *)((longlong)puVar3 + -4) = *(undefined4 *)((longlong)puVar1 + -4);
      *puVar3 = *puVar1;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)((longlong)puVar3 + 0xc) = *(undefined8 *)((longlong)puVar1 + 0xc);
      *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0x14);
      puVar3[3] = puVar1[3];
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar1 + 4);
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0xd;
      puVar3 = puVar3 + 0xd;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14221e6d0 FUN_14221e6d0 body=505 status=ok
// SIG undefined FUN_14221e6d0(void)

int * FUN_14221e6d0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  bool bVar12;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar1 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x50);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar1 * 0x50) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar11 = *puVar11 | 1 << ((byte)iVar9 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  puVar11 = (uint *)((longlong)iVar9 * 0x50 + *param_1);
  FWeakObjectPtr::operator=(puVar11,*(undefined8 *)*param_3);
  uVar5 = puVar2[1];
  bVar12 = false;
  *(undefined8 *)(puVar11 + 4) = *puVar2;
  *(undefined8 *)(puVar11 + 6) = uVar5;
  uVar10 = *(uint *)((longlong)puVar2 + 0x14);
  uVar3 = *(uint *)(puVar2 + 3);
  uVar4 = *(uint *)((longlong)puVar2 + 0x1c);
  puVar11[8] = *(uint *)(puVar2 + 2);
  puVar11[9] = uVar10;
  puVar11[10] = uVar3;
  puVar11[0xb] = uVar4;
  uVar10 = *(uint *)((longlong)puVar2 + 0x24);
  uVar3 = *(uint *)(puVar2 + 5);
  uVar4 = *(uint *)((longlong)puVar2 + 0x2c);
  puVar11[0xc] = *(uint *)(puVar2 + 4);
  puVar11[0xd] = uVar10;
  puVar11[0xe] = uVar3;
  puVar11[0xf] = uVar4;
  puVar11[0x10] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar11[1];
    local_res10 = *puVar11;
    TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x50 + *param_1),puVar11,0x40);
      TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14221e8a7;
    }
  }
  cVar6 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    uVar10 = (puVar11[1] ^ *puVar11) & (int)param_1[9] - 1U;
    puVar11[0x11] = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    puVar11[0x10] =
         *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_14221e8a7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 14221e8d0 FUN_14221e8d0 body=727 status=ok
// SIG undefined FUN_14221e8d0(void)

int * FUN_14221e8d0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  bool bVar18;
  
  iVar10 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)(*param_1 + 4 + (longlong)iVar13 * 0x48);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x48) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar13;
  lVar8 = (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  bVar18 = false;
  puVar16 = (uint *)((longlong)plVar9 + lVar8);
  *puVar16 = *puVar16 | 1 << ((byte)iVar13 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  lVar1 = (longlong)iVar13 * 0x48;
  puVar16 = (uint *)(*param_1 + lVar1);
  *puVar16 = *(uint *)*param_3;
  uVar6 = puVar2[1];
  *(undefined8 *)(puVar16 + 1) = *puVar2;
  *(undefined8 *)(puVar16 + 3) = uVar6;
  uVar6 = puVar2[3];
  *(undefined8 *)(puVar16 + 5) = puVar2[2];
  *(undefined8 *)(puVar16 + 7) = uVar6;
  uVar15 = *(uint *)((longlong)puVar2 + 0x24);
  uVar7 = *(uint *)(puVar2 + 5);
  uVar5 = *(uint *)((longlong)puVar2 + 0x2c);
  puVar16[9] = *(uint *)(puVar2 + 4);
  puVar16[10] = uVar15;
  puVar16[0xb] = uVar7;
  puVar16[0xc] = uVar5;
  *(undefined8 *)(puVar16 + 0xd) = puVar2[6];
  puVar16[0xf] = *(uint *)(puVar2 + 7);
  puVar16[0x10] = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    iVar12 = iVar17;
    if (uVar15 != 0) {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar11 = *(int *)((longlong)plVar9 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar16) * 4);
      if (iVar11 != -1) {
        do {
          iVar12 = iVar11;
          if (*(uint *)(*param_1 + (longlong)iVar11 * 0x48) == *puVar16) break;
          iVar11 = *(int *)(*param_1 + 0x40 + (longlong)iVar11 * 0x48);
          iVar12 = iVar17;
        } while (iVar11 != -1);
      }
    }
    bVar18 = iVar12 != -1;
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar12 * 0x48),puVar16,0x40);
      bVar4 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x48) = iVar13;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar9 + lVar8);
      *puVar16 = *puVar16 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_14221eb82;
    }
  }
  if (3 < uVar15) {
    uVar7 = (uVar15 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar10 = 0x20;
    if (uVar7 != 0) {
      iVar10 = 0x1f - iVar17;
    }
    uVar7 = (uVar15 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar7 == 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x1f' - (char)iVar17;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar15 = (int)param_1[9] - 1U & *puVar16;
    puVar16[0x11] = uVar15;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    puVar16[0x10] =
         *(uint *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>_>,TDefaultMapHashableKeyFuncs<D3D12_SAMPLER_DESC,TRefCountPtr<FD3D12SamplerState>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14221eb82:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 14221ebb0 FUN_14221ebb0 body=644 status=ok
// SIG undefined FUN_14221ebb0(void)

int * FUN_14221ebb0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  longlong *plVar15;
  bool bVar16;
  
  iVar12 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar15 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar15 == (longlong *)0x0) {
    plVar15 = param_1 + 2;
  }
  bVar16 = false;
  puVar1 = (uint *)((longlong)plVar15 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  plVar15 = (longlong *)((longlong)iVar11 * 0x20 + *param_1);
  puVar3 = (undefined4 *)param_3[1];
  lVar4 = *(longlong *)*param_3;
  *plVar15 = lVar4;
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  *(undefined4 *)(plVar15 + 1) = *puVar3;
  *(undefined4 *)((longlong)plVar15 + 0xc) = uVar5;
  *(undefined4 *)(plVar15 + 2) = uVar6;
  *(undefined4 *)((longlong)plVar15 + 0x14) = uVar7;
  *(undefined4 *)(plVar15 + 3) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    if (uVar14 != 0) {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar9 +
                       ((longlong)((int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          if (lVar4 == *(longlong *)((longlong)iVar10 * 0x20 + *param_1)) goto LAB_14221ed0e;
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *param_1);
        } while (iVar10 != -1);
      }
    }
    iVar10 = -1;
LAB_14221ed0e:
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar10 * 0x20 + *param_1),plVar15,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar11,1);
      *param_2 = iVar10;
      goto LAB_14221ee07;
    }
  }
  if (3 < uVar14) {
    uVar8 = (uVar14 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar10 = 0x20;
    if (uVar8 != 0) {
      iVar10 = 0x1f - iVar12;
    }
    uVar8 = (uVar14 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar8 == 0) {
      cVar13 = '\0';
    }
    else {
      cVar13 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    uVar14 = (int)((ulonglong)*plVar15 >> 0x20) * 0x17 + (int)*plVar15 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar15 + 0x1c) = uVar14;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(plVar15 + 3) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_1407f8e20(param_1);
  }
LAB_14221ee07:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 14221ee40 FUN_14221ee40 body=1139 status=ok
// SIG undefined FUN_14221ee40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14221ee40(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_14221ef6f;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_14221ef6f:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14221f02f;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_14221f02f:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_14290f3e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_14221ee40(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 14221f2c0 FUN_14221f2c0 body=1139 status=ok
// SIG undefined FUN_14221f2c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14221f2c0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_14221f3ef;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_14221f3ef:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14221f4af;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_14221f4af:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_14221f2c0(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 14221f740 HeapSortInternal<FSoAmbientControlPoint,FIdentityFunctor,TDereferenceWrapper<FSoAmbientControlPoint,<lambda_2b2e8abb43d614fdc616d7a9fccfbc1b>_>_> body=445 status=ok
// SIG undefined HeapSortInternal<FSoAmbientControlPoint,FIdentityFunctor,TDereferenceWrapper<FSoAmbientControlPoint,<lambda_2b2e8abb43d614fdc616d7a9fccfbc1b>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FSoAmbientControlPoint,FIdentityFunctor,TDereferenceWrapper<FSoAmbientControlPoint,<lambda_2b2e8abb43d614fdc616d7a9fccfbc1b>_>_>
               (undefined8 *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    iVar13 = iVar8 * 2 + 1;
    iVar11 = iVar13;
    iVar14 = iVar8;
joined_r0x00014221f76a:
    do {
      if (iVar13 < param_2) {
        iVar9 = iVar8 * 2 + 1;
        iVar13 = iVar8 * 2 + 2;
        iVar10 = iVar9;
        if ((iVar13 < param_2) &&
           (fVar2 = *(float *)((longlong)iVar9 * 0x20 + 0xc + (longlong)param_1),
           pfVar1 = (float *)((longlong)iVar13 * 0x20 + 0xc + (longlong)param_1), iVar10 = iVar13,
           *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
          iVar10 = iVar9;
        }
        puVar12 = param_1 + (longlong)iVar10 * 4;
        puVar15 = param_1 + (longlong)iVar8 * 4;
        if (*(float *)((longlong)puVar15 + 0xc) <= *(float *)((longlong)puVar12 + 0xc) &&
            *(float *)((longlong)puVar12 + 0xc) != *(float *)((longlong)puVar15 + 0xc)) {
          if (puVar15 != puVar12) {
            uVar3 = puVar12[1];
            uVar4 = *puVar15;
            uVar5 = puVar15[1];
            uVar6 = puVar15[2];
            uVar7 = puVar15[3];
            *puVar15 = *puVar12;
            puVar15[1] = uVar3;
            uVar3 = puVar12[3];
            puVar15[2] = puVar12[2];
            puVar15[3] = uVar3;
            *puVar12 = uVar4;
            puVar12[1] = uVar5;
            puVar12[2] = uVar6;
            puVar12[3] = uVar7;
          }
          iVar13 = iVar10 * 2 + 1;
          iVar8 = iVar10;
          goto joined_r0x00014221f76a;
        }
      }
      iVar13 = iVar11 + -2;
      iVar8 = iVar14 + -1;
      iVar11 = iVar13;
      iVar14 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar12 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar12) {
        uVar3 = puVar12[1];
        uVar4 = *param_1;
        uVar5 = param_1[1];
        uVar6 = param_1[2];
        uVar7 = param_1[3];
        *param_1 = *puVar12;
        param_1[1] = uVar3;
        uVar3 = puVar12[3];
        param_1[2] = puVar12[2];
        param_1[3] = uVar3;
        *puVar12 = uVar4;
        puVar12[1] = uVar5;
        puVar12[2] = uVar6;
        puVar12[3] = uVar7;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar13 = iVar8 * 2 + 1;
          iVar14 = iVar8 * 2 + 2;
          iVar11 = iVar13;
          if ((iVar14 < param_2) &&
             (fVar2 = *(float *)((longlong)iVar13 * 0x20 + 0xc + (longlong)param_1),
             pfVar1 = (float *)((longlong)iVar14 * 0x20 + 0xc + (longlong)param_1), iVar11 = iVar14,
             *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
            iVar11 = iVar13;
          }
          puVar15 = param_1 + (longlong)iVar11 * 4;
          puVar16 = param_1 + (longlong)iVar8 * 4;
          if (*(float *)((longlong)puVar15 + 0xc) < *(float *)((longlong)puVar16 + 0xc) ||
              *(float *)((longlong)puVar15 + 0xc) == *(float *)((longlong)puVar16 + 0xc)) break;
          if (puVar16 != puVar15) {
            uVar3 = puVar15[1];
            uVar4 = *puVar16;
            uVar5 = puVar16[1];
            uVar6 = puVar16[2];
            uVar7 = puVar16[3];
            *puVar16 = *puVar15;
            puVar16[1] = uVar3;
            uVar3 = puVar15[3];
            puVar16[2] = puVar15[2];
            puVar16[3] = uVar3;
            *puVar15 = uVar4;
            puVar15[1] = uVar5;
            puVar15[2] = uVar6;
            puVar15[3] = uVar7;
          }
          iVar8 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar12 = puVar12 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14221f900 IntroSortInternal<FSoAmbientControlPoint,FIdentityFunctor,TDereferenceWrapper<FSoAmbientControlPoint,<lambda_2b2e8abb43d614fdc616d7a9fccfbc1b>_>_> body=713 status=ok
// SIG undefined IntroSortInternal<FSoAmbientControlPoint,FIdentityFunctor,TDereferenceWrapper<FSoAmbientControlPoint,<lambda_2b2e8abb43d614fdc616d7a9fccfbc1b>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FSoAmbientControlPoint,FIdentityFunctor,TDereferenceWrapper<FSoAmbientControlPoint,<lambda_2b2e8abb43d614fdc616d7a9fccfbc1b>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong lVar2;
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
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x20 + -0x20 + param_1;
    fVar23 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar23 = fVar23 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar23 = ::_guard_xfg_dispatch_icall_nop(fVar23);
    local_318 = (undefined4)(longlong)(fVar23 + fVar23);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar17 = &local_328;
    do {
      puVar22 = (undefined8 *)*plVar17;
      puVar20 = (undefined8 *)plVar17[1];
      lVar2 = plVar17[2];
      local_338._0_4_ = (int)lVar2;
      lVar15 = ((longlong)puVar20 - (longlong)puVar22 >> 5) + 1;
      puVar21 = puVar22;
      if ((int)local_338 != 0) {
LAB_14221f9d0:
        if (8 < lVar15) {
          puVar22 = puVar21 + (lVar15 / 2) * 4;
          if (puVar22 != puVar21) {
            uVar3 = *(undefined4 *)((longlong)puVar21 + 4);
            uVar4 = *(undefined4 *)(puVar21 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar21 + 0xc);
            uVar6 = *(undefined4 *)puVar22;
            uVar7 = *(undefined4 *)((longlong)puVar22 + 4);
            uVar8 = *(undefined4 *)(puVar22 + 1);
            uVar9 = *(undefined4 *)((longlong)puVar22 + 0xc);
            uVar11 = puVar22[2];
            uVar12 = puVar22[3];
            *(undefined4 *)puVar22 = *(undefined4 *)puVar21;
            *(undefined4 *)((longlong)puVar22 + 4) = uVar3;
            *(undefined4 *)(puVar22 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar22 + 0xc) = uVar5;
            uVar10 = puVar21[3];
            puVar22[2] = puVar21[2];
            puVar22[3] = uVar10;
            *(undefined4 *)puVar21 = uVar6;
            *(undefined4 *)((longlong)puVar21 + 4) = uVar7;
            *(undefined4 *)(puVar21 + 1) = uVar8;
            *(undefined4 *)((longlong)puVar21 + 0xc) = uVar9;
            puVar21[2] = uVar11;
            puVar21[3] = uVar12;
          }
          puVar18 = puVar20 + 4;
          puVar22 = puVar21;
LAB_14221fa20:
          puVar16 = puVar22;
          puVar22 = puVar16 + 4;
          if (puVar22 <= puVar20) goto code_r0x00014221fa29;
          goto LAB_14221fa35;
        }
        for (; puVar22 = puVar21, puVar18 = puVar21, puVar21 < puVar20; puVar20 = puVar20 + -4) {
          while (puVar16 = puVar18 + 4, puVar16 <= puVar20) {
            pfVar1 = (float *)((longlong)puVar18 + 0x2c);
            puVar18 = puVar16;
            if (*(float *)((longlong)puVar22 + 0xc) < *pfVar1) {
              puVar22 = puVar16;
            }
          }
          if (puVar22 != puVar20) {
            uVar10 = puVar20[1];
            uVar11 = *puVar22;
            uVar12 = puVar22[1];
            uVar13 = puVar22[2];
            uVar14 = puVar22[3];
            *puVar22 = *puVar20;
            puVar22[1] = uVar10;
            uVar10 = puVar20[3];
            puVar22[2] = puVar20[2];
            puVar22[3] = uVar10;
            *puVar20 = uVar11;
            puVar20[1] = uVar12;
            puVar20[2] = uVar13;
            puVar20[3] = uVar14;
          }
        }
        goto LAB_14221fb29;
      }
LAB_14221fb1a:
      local_338 = lVar2;
      HeapSortInternal<FSoAmbientControlPoint,FIdentityFunctor,TDereferenceWrapper<FSoAmbientControlPoint,<lambda_2b2e8abb43d614fdc616d7a9fccfbc1b>_>_>
                (puVar22,lVar15,param_3,param_4);
LAB_14221fb29:
      plVar17 = plVar17 + -3;
    } while (&local_328 <= plVar17);
  }
  return;
code_r0x00014221fa29:
  if (*(float *)((longlong)puVar16 + 0x2c) < *(float *)((longlong)puVar21 + 0xc) ||
      *(float *)((longlong)puVar16 + 0x2c) == *(float *)((longlong)puVar21 + 0xc))
  goto LAB_14221fa20;
LAB_14221fa35:
  do {
    puVar19 = puVar18;
    puVar18 = puVar19 + -4;
    if (puVar18 <= puVar21) break;
  } while (*(float *)((longlong)puVar21 + 0xc) < *(float *)((longlong)puVar19 + -0x14) ||
           *(float *)((longlong)puVar21 + 0xc) == *(float *)((longlong)puVar19 + -0x14));
  if (puVar22 <= puVar18) {
    if (puVar22 != puVar18) {
      uVar3 = *(undefined4 *)((longlong)puVar19 + -0x1c);
      uVar4 = *(undefined4 *)(puVar19 + -3);
      uVar5 = *(undefined4 *)((longlong)puVar19 + -0x14);
      uVar6 = *(undefined4 *)puVar22;
      uVar7 = *(undefined4 *)((longlong)puVar16 + 0x24);
      uVar8 = *(undefined4 *)(puVar16 + 5);
      uVar9 = *(undefined4 *)((longlong)puVar16 + 0x2c);
      uVar11 = puVar16[6];
      uVar12 = puVar16[7];
      *(undefined4 *)puVar22 = *(undefined4 *)puVar18;
      *(undefined4 *)((longlong)puVar16 + 0x24) = uVar3;
      *(undefined4 *)(puVar16 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar5;
      uVar10 = puVar19[-1];
      puVar16[6] = puVar19[-2];
      puVar16[7] = uVar10;
      *(undefined4 *)puVar18 = uVar6;
      *(undefined4 *)((longlong)puVar19 + -0x1c) = uVar7;
      *(undefined4 *)(puVar19 + -3) = uVar8;
      *(undefined4 *)((longlong)puVar19 + -0x14) = uVar9;
      puVar19[-2] = uVar11;
      puVar19[-1] = uVar12;
    }
    goto LAB_14221fa20;
  }
  if (puVar21 != puVar18) {
    uVar3 = *(undefined4 *)((longlong)puVar19 + -0x1c);
    uVar4 = *(undefined4 *)(puVar19 + -3);
    uVar5 = *(undefined4 *)((longlong)puVar19 + -0x14);
    uVar6 = *(undefined4 *)puVar21;
    uVar7 = *(undefined4 *)((longlong)puVar21 + 4);
    uVar8 = *(undefined4 *)(puVar21 + 1);
    uVar9 = *(undefined4 *)((longlong)puVar21 + 0xc);
    uVar11 = puVar21[2];
    uVar12 = puVar21[3];
    *(undefined4 *)puVar21 = *(undefined4 *)puVar18;
    *(undefined4 *)((longlong)puVar21 + 4) = uVar3;
    *(undefined4 *)(puVar21 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar21 + 0xc) = uVar5;
    uVar10 = puVar19[-1];
    puVar21[2] = puVar19[-2];
    puVar21[3] = uVar10;
    *(undefined4 *)puVar18 = uVar6;
    *(undefined4 *)((longlong)puVar19 + -0x1c) = uVar7;
    *(undefined4 *)(puVar19 + -3) = uVar8;
    *(undefined4 *)((longlong)puVar19 + -0x14) = uVar9;
    puVar19[-2] = uVar11;
    puVar19[-1] = uVar12;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar18 + (-0x20 - (longlong)puVar21) & 0xffffffffffffffe0U) <
      (longlong)((longlong)puVar20 - (longlong)puVar22 & 0xffffffffffffffe0U)) {
    if (puVar22 < puVar20) {
      *plVar17 = (longlong)puVar22;
      plVar17[1] = (longlong)puVar20;
      *(int *)(plVar17 + 2) = (int)local_338;
      plVar17 = plVar17 + 3;
    }
    if (puVar18 <= puVar21 + 4) goto LAB_14221fb29;
    puVar20 = puVar19 + -8;
    puVar22 = puVar21;
  }
  else {
    if (puVar21 + 4 < puVar18) {
      *plVar17 = (longlong)puVar21;
      plVar17[1] = (longlong)(puVar19 + -8);
      *(int *)(plVar17 + 2) = (int)local_338;
      plVar17 = plVar17 + 3;
    }
    if (puVar20 <= puVar22) goto LAB_14221fb29;
  }
  lVar15 = ((longlong)puVar20 - (longlong)puVar22 >> 5) + 1;
  puVar21 = puVar22;
  if ((int)local_338 == 0) goto LAB_14221fb1a;
  goto LAB_14221f9d0;
}



// FUNCTION 14221fbd0 FUN_14221fbd0 body=777 status=ok
// SIG undefined FUN_14221fbd0(void)

undefined8 * FUN_14221fbd0(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_143fe15b8;
  FTickFunction::FTickFunction(param_1 + 5);
  param_1[5] = &PTR__scalar_deleting_destructor__1450103a0;
  param_1[0x11] = 0;
  FRepMovement::FRepMovement(param_1 + 0x13);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
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
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined2 *)(param_1 + 0x73) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0x461c4000;
  *(undefined1 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 2;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 2;
  param_1[0x7f] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 2;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 2;
  FUN_142235150(param_1);
  return param_1;
}



// FUNCTION 14221fee0 FUN_14221fee0 body=1363 status=ok
// SIG undefined FUN_14221fee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14221fee0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FWeakObjectPtr::operator=(param_1,0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(byte *)(param_1 + 0x9b) = *(byte *)(param_1 + 0x9b) & 0xe0;
  *(undefined2 *)(param_1 + 0x98) = 0x402;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 200) = 0x469c4000;
  FDynamicParameter::FDynamicParameter(param_1 + 0xcc,0x469c4000);
  FDynamicParameter::FDynamicParameter(param_1 + 0xe8,0x3f800000);
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10c) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x114) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x118) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x128) = 0x4a000000;
  uVar4 = uRam0000000146aee96c;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(uint *)(param_1 + 0x13c) = uVar4;
  uVar4 = uRam0000000146aee964 & uRam0000000146aee974;
  uVar5 = uRam0000000146aee968 & uRam0000000146aee978;
  uVar6 = uRam0000000146aee96c & uRam0000000146aee97c;
  *(uint *)(param_1 + 0x150) = _DAT_146aee960 & _DAT_146aee970;
  *(uint *)(param_1 + 0x154) = uVar4;
  *(uint *)(param_1 + 0x158) = uVar5;
  *(uint *)(param_1 + 0x15c) = uVar6;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x170) = DAT_1468b5d98;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143f48bb8;
  *(undefined2 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0xc2700000;
  *(undefined8 *)(param_1 + 0x188) = 0x43c80000;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0x45610000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x1a0);
  *(byte *)(param_1 + 0x219) = *(byte *)(param_1 + 0x219) & 0xfc;
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143f48bc8;
  *(undefined1 *)(param_1 + 0x218) = 0x83;
  *(undefined4 *)(param_1 + 0x21a) = 0x30000;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0x43480000;
  *(undefined4 *)(param_1 + 0x228) = 0x453b8000;
  *(undefined4 *)(param_1 + 0x22c) = 0x45bb8000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x230);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x2a8);
  *(float *)(param_1 + 0x36c) = *(float *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 800) = 0x469c4000;
  *(undefined8 *)(param_1 + 0x324) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0x41f00000;
  *(float *)(param_1 + 0x370) = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x334) = 0x42700000;
  *(undefined4 *)(param_1 + 0x338) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x33c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x340) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x344) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x348) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x350) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x354) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x358) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x35c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x360) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x364) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x368) = 0x3f733333;
  *(undefined4 *)(param_1 + 0x374) = 0x3e4ccccd;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x378);
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  FInteriorSettings::FInteriorSettings(param_1 + 0x420);
  *(undefined4 *)(param_1 + 0x444) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x454) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x458) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x45c) = 0x469c4000;
  *(undefined4 *)(param_1 + 0x460) = 10;
  *(undefined4 *)(param_1 + 0x464) = 100;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0x3f800000;
  if (((DAT_146aee988 == 0) || (DAT_146aee980 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*DAT_146aee980 + 0x18))(), cVar1 == '\0')) {
    plVar2 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar2 == (longlong *)0x0) {
      if ((DAT_146aee988 != 0) && (DAT_146aee980 != (longlong *)0x0)) {
        (**(code **)(*DAT_146aee980 + 0x28))(DAT_146aee980,0);
        if (DAT_146aee980 != (longlong *)0x0) {
          DAT_146aee980 = (longlong *)FMemory::Realloc(DAT_146aee980,0,0);
        }
        DAT_146aee988 = 0;
      }
    }
    else {
      *plVar2 = (longlong)&PTR_GetPoolName_143fca720;
      plVar2[1] = (longlong)FUN_1422375f0;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[3] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_143fca768;
      FUN_14058c150(plVar2,&DAT_146aee980);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar3 = FMemory::Realloc(plVar2,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
  return param_1;
}



// FUNCTION 142220440 FAreaNavModifier body=232 status=ok
// SIG undefined FAreaNavModifier(void)

undefined4 * FAreaNavModifier::FAreaNavModifier(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)(param_2 + 0xb);
  param_1[0xd] = param_2[0xd];
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = param_2[0x10];
  _Src = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar1;
  if (iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_1 + 0xe,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0xe),_Src,(longlong)iVar1 * 0xc);
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_2 + 0x49);
  *(byte *)((longlong)param_1 + 0x4a) =
       *(byte *)((longlong)param_1 + 0x4a) ^
       (*(byte *)((longlong)param_1 + 0x4a) ^ *(byte *)((longlong)param_2 + 0x4a)) & 1;
  *(byte *)((longlong)param_1 + 0x4a) =
       *(byte *)((longlong)param_1 + 0x4a) ^
       (*(byte *)((longlong)param_1 + 0x4a) ^ *(byte *)((longlong)param_2 + 0x4a)) & 2;
  return param_1;
}



// FUNCTION 142220530 FAreaNavModifier body=176 status=ok
// SIG undefined FAreaNavModifier(void)

uint * FAreaNavModifier::FAreaNavModifier
                 (uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_10;
  
  *param_1 = *param_1 & 0xfffffffe;
  param_1[4] = 0;
  param_1[3] = 0xffffffff;
  param_1[6] = 0;
  param_1[5] = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x49) = 0;
  param_1[1] = 0;
  uVar3 = DAT_1468b5d98;
  uVar2 = DAT_1468b5d94;
  uVar1 = DAT_1468b5d90;
  param_1[2] = 0;
  local_10 = local_10 & 0xffffff00;
  param_1[7] = DAT_1468b5d90;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar1;
  *(ulonglong *)(param_1 + 0xb) = CONCAT44(uVar3,uVar2);
  param_1[0xd] = local_10;
  FUN_14223d4d0(uVar2,param_4);
  SetBox(param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 1422205e0 FAreaNavModifier body=217 status=ok
// SIG undefined FAreaNavModifier(void)

uint * FAreaNavModifier::FAreaNavModifier
                 (uint *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_10;
  
  *param_1 = *param_1 & 0xfffffffe;
  param_1[4] = 0;
  param_1[3] = 0xffffffff;
  param_1[6] = 0;
  param_1[5] = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x49) = 0;
  param_1[1] = 0;
  uVar3 = DAT_1468b5d98;
  uVar2 = DAT_1468b5d94;
  uVar1 = DAT_1468b5d90;
  param_1[2] = 0;
  local_10 = local_10 & 0xffffff00;
  param_1[7] = DAT_1468b5d90;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar1;
  *(ulonglong *)(param_1 + 0xb) = CONCAT44(uVar3,uVar2);
  param_1[0xd] = local_10;
  FUN_14223d4d0(uVar2,param_7);
  FUN_14223dc50(param_1,*param_2,param_3,param_4,param_5,param_6);
  return param_1;
}



// FUNCTION 1422206c0 FAreaNavModifier body=507 status=ok
// SIG undefined FAreaNavModifier(void)

uint * FAreaNavModifier::FAreaNavModifier
                 (uint *param_1,float param_2,float param_3,longlong param_4,undefined8 param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  uint local_38;
  
  *param_1 = *param_1 & 0xfffffffe;
  param_1[4] = 0;
  param_1[3] = 0xffffffff;
  param_1[6] = 0;
  param_1[5] = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x49) = 0;
  param_1[1] = 0;
  uVar9 = DAT_1468b5d98;
  uVar8 = DAT_1468b5d94;
  uVar1 = DAT_1468b5d90;
  param_1[2] = 0;
  uVar7 = local_38 >> 8;
  local_38 = local_38 & 0xffffff00;
  param_1[7] = DAT_1468b5d90;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar1;
  *(ulonglong *)(param_1 + 0xb) = CONCAT44(uVar9,uVar8);
  param_1[0xd] = local_38;
  FUN_14223d4d0(uVar8,param_5);
  uVar1 = param_1[0x10];
  fVar10 = ABS(*(float *)(param_4 + 0x24));
  if (ABS(*(float *)(param_4 + 0x24)) <= ABS(*(float *)(param_4 + 0x20))) {
    fVar10 = ABS(*(float *)(param_4 + 0x20));
  }
  param_3 = param_3 * ABS(*(float *)(param_4 + 0x28));
  param_2 = param_2 * fVar10;
  if ((int)uVar1 < 2) {
    param_1[0x10] = 2;
    if ((int)param_1[0x11] < 2) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0xe,uVar1);
    }
  }
  else if ((2 < (int)uVar1) && (uVar1 - 2 != 0)) {
    param_1[0x10] = uVar1 - (uVar1 - 2);
    TArray<FVector,FDefaultAllocator>::ResizeShrink(param_1 + 0xe);
  }
  uVar3 = *(undefined4 *)(param_4 + 0x14);
  uVar4 = *(undefined4 *)(param_4 + 0x18);
  puVar2 = *(undefined4 **)(param_1 + 0xe);
  *puVar2 = *(undefined4 *)(param_4 + 0x10);
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  local_38 = CONCAT31((int3)uVar7,1);
  *(float *)(*(longlong *)(param_1 + 0xe) + 0xc) = param_2;
  *(float *)(*(longlong *)(param_1 + 0xe) + 0x14) = param_3;
  *(undefined1 *)(param_1 + 0x12) = 1;
  fVar10 = *(float *)(param_4 + 0x10);
  fVar5 = *(float *)(param_4 + 0x14);
  fVar6 = *(float *)(param_4 + 0x18);
  param_1[7] = (uint)(fVar10 - param_2);
  param_1[8] = (uint)(fVar5 - param_2);
  param_1[9] = (uint)(fVar6 - param_3);
  param_1[10] = (uint)(fVar10 + param_2);
  *(ulonglong *)(param_1 + 0xb) = CONCAT44(fVar6 + param_3,fVar5 + param_2);
  param_1[0xd] = local_38;
  return param_1;
}



// FUNCTION 1422208c0 FUN_1422208c0 body=639 status=ok
// SIG undefined FUN_1422208c0(void)

uint * FUN_1422208c0(uint *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  ulonglong uVar15;
  uint local_res20;
  float *local_60;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  
  *param_1 = *param_1 & 0xfffffffe;
  param_1[3] = 0xffffffff;
  pfVar5 = (float *)0x0;
  param_1[4] = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  lVar3 = *(longlong *)(param_2 + 0x6f8);
  local_60 = (float *)0x0;
  uStack_54 = 0;
  pfVar6 = pfVar5;
  pfVar13 = pfVar5;
  if ((lVar3 != 0) &&
     (local_res20 = 0, pfVar8 = pfVar5, pfVar9 = pfVar5, pfVar6 = (float *)0x0, pfVar10 = pfVar5,
     pfVar12 = pfVar5, pfVar13 = (float *)0x0, 0 < *(int *)(lVar3 + 0x60))) {
    do {
      uVar7 = 0;
      lVar3 = *(longlong *)(lVar3 + 0x58);
      uVar15 = uVar7;
      uVar4 = (uint)pfVar5;
      if (0 < *(int *)(lVar3 + 0x68 + (longlong)pfVar10)) {
        do {
          lVar1 = *(longlong *)(lVar3 + 0x60 + (longlong)pfVar10);
          iVar11 = (int)pfVar12;
          if (pfVar9 != pfVar9 + (longlong)iVar11 * 3) {
            pfVar6 = pfVar9;
            do {
              if (((*(float *)(uVar7 + lVar1) == *pfVar6) &&
                  (*(float *)(uVar7 + 4 + lVar1) == pfVar6[1])) &&
                 (*(float *)(uVar7 + 8 + lVar1) == pfVar6[2])) {
                if ((int)(((longlong)pfVar6 - (longlong)pfVar9) / 0xc) != -1) goto LAB_142220a36;
                break;
              }
              pfVar6 = pfVar6 + 3;
            } while (pfVar6 != pfVar9 + (longlong)iVar11 * 3);
          }
          uStack_58 = iVar11 + 1;
          if ((int)pfVar8 < (int)uStack_58) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_60,pfVar12);
            pfVar8 = (float *)(ulonglong)uStack_54;
            pfVar9 = local_60;
          }
          pfVar12 = (float *)(ulonglong)uStack_58;
          *(undefined8 *)(pfVar9 + (longlong)iVar11 * 3) = *(undefined8 *)(uVar7 + lVar1);
          pfVar9[(longlong)iVar11 * 3 + 2] = *(float *)(uVar7 + 8 + lVar1);
LAB_142220a36:
          uVar14 = (int)uVar15 + 1;
          uVar7 = uVar7 + 0xc;
          uVar15 = (ulonglong)uVar14;
          uVar4 = local_res20;
        } while ((int)uVar14 < *(int *)(lVar3 + 0x68 + (longlong)pfVar10));
      }
      lVar3 = *(longlong *)(param_2 + 0x6f8);
      local_res20 = uVar4 + 1;
      pfVar5 = (float *)(ulonglong)local_res20;
      pfVar6 = pfVar9;
      pfVar10 = pfVar10 + 0x34;
      pfVar13 = pfVar12;
    } while ((int)local_res20 < *(int *)(lVar3 + 0x60));
  }
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x49) = 0;
  param_1[1] = 0;
  uVar2 = DAT_1468b5d98;
  uVar14 = DAT_1468b5d94;
  uVar4 = DAT_1468b5d90;
  param_1[2] = 0;
  uStack_54 = DAT_1468b5d90;
  uStack_50 = DAT_1468b5d94;
  uStack_58 = DAT_1468b5d98;
  uStack_4c = DAT_1468b5d98;
  local_48 = local_48 & 0xffffff00;
  param_1[7] = DAT_1468b5d90;
  param_1[8] = uVar14;
  param_1[9] = uVar2;
  param_1[10] = uVar4;
  *(ulonglong *)(param_1 + 0xb) = CONCAT44(uVar2,uVar14);
  param_1[0xd] = local_48;
  FUN_14223d4d0(param_1,param_3);
  FUN_14223dc50(param_1,pfVar6,0,pfVar13,0,param_2 + 0x210);
  if (pfVar6 != (float *)0x0) {
    FMemory::Free(pfVar6);
  }
  return param_1;
}



// FUNCTION 142220b40 FNavAvoidanceData body=339 status=ok
// SIG undefined FNavAvoidanceData(void)

undefined8 *
FNavAvoidanceData::FNavAvoidanceData(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 local_78 [12];
  undefined1 local_6c [84];
  
  uVar6 = (**(code **)(*param_3 + 0x48))(param_3);
  uVar1 = (**(code **)(*param_3 + 0x68))(param_3);
  uVar2 = (**(code **)(*param_3 + 0x60))(param_3);
  uVar3 = (**(code **)(*param_3 + 0x58))(param_3);
  fVar7 = (float)(**(code **)(*param_3 + 0x28))(param_3);
  puVar4 = (undefined8 *)(**(code **)(*param_3 + 0x50))(param_3,local_78);
  uVar8 = (**(code **)(*param_3 + 0x40))(param_3);
  fVar9 = (float)(**(code **)(*param_3 + 0x38))(param_3);
  puVar5 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,local_6c);
  *param_1 = *puVar5;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar5 + 1);
  *(undefined8 *)((longlong)param_1 + 0xc) = *puVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(puVar4 + 1);
  fVar10 = *(float *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 4) = uVar8;
  *(float *)((longlong)param_1 + 0x1c) = fVar9 * fVar10;
  fVar10 = 0.0;
  if ((0.0 <= fVar7) && (fVar10 = fVar7, 1.0 <= fVar7)) {
    fVar10 = 1.0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(float *)((longlong)param_1 + 0x24) = fVar10;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 7) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 142220ca0 FNavigationLinkBase body=495 status=ok
// SIG undefined FNavigationLinkBase(void)

undefined4 * FNavigationLinkBase::FNavigationLinkBase(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_1[7] ^ (param_1[7] ^ param_2[7]) & 1;
  uVar1 = (param_1[7] ^ param_2[7]) & 2 ^ param_1[7];
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 4 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 8 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x10 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x20 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x40 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x80 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x100 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x200 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x400 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x800 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x1000 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x2000 ^ uVar1;
  param_1[7] = uVar1;
  uVar1 = (uVar1 ^ param_2[7]) & 0x4000 ^ uVar1;
  param_1[7] = uVar1;
  param_1[7] = (uVar1 ^ param_2[7]) & 0x8000 ^ uVar1;
  param_1[7] = param_2[7];
  param_1[8] = param_1[8] ^ (param_1[8] ^ param_2[8]) & 1;
  uVar1 = (param_2[8] ^ param_1[8]) & 2 ^ param_1[8];
  param_1[8] = uVar1;
  uVar1 = (param_2[8] ^ uVar1) & 4 ^ uVar1;
  param_1[8] = uVar1;
  uVar1 = (param_2[8] ^ uVar1) & 8 ^ uVar1;
  param_1[8] = uVar1;
  uVar1 = (param_2[8] ^ uVar1) & 0x10 ^ uVar1;
  param_1[8] = uVar1;
  uVar1 = (param_2[8] ^ uVar1) & 0x20 ^ uVar1;
  param_1[8] = uVar1;
  uVar1 = (param_2[8] ^ uVar1) & 0x40 ^ uVar1;
  param_1[8] = uVar1;
  uVar1 = (param_2[8] ^ uVar1) & 0x80 ^ uVar1;
  param_1[8] = uVar1;
  uVar1 = (param_2[8] ^ uVar1) & 0x100 ^ uVar1;
  param_1[8] = uVar1;
  param_1[8] = (param_2[8] ^ uVar1) & 0x200 ^ uVar1;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  return param_1;
}



// FUNCTION 142220e90 FNavigationLinkBase body=103 status=ok
// SIG undefined FNavigationLinkBase(void)

undefined4 * FNavigationLinkBase::FNavigationLinkBase(undefined4 *param_1)

{
  param_1[1] = 0x447a0000;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0x41f00000;
  param_1[5] = 0x42480000;
  FNavAgentSelector::FNavAgentSelector(param_1 + 6);
  param_1[8] = param_1[8] & 0xfffffc02 | 2;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[7] = 0xffffffff;
  return param_1;
}



// FUNCTION 142220f00 FUN_142220f00 body=51 status=ok
// SIG undefined FUN_142220f00(void)

undefined8 * FUN_142220f00(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14407f360;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 142220f40 UAvoidanceManager body=216 status=ok
// SIG undefined UAvoidanceManager(void)

undefined8 * UAvoidanceManager::UAvoidanceManager(undefined8 *param_1)

{
  FUN_141781840();
  FSelfRegisteringExec::FSelfRegisteringExec(param_1 + 5);
  *param_1 = &PTR__scalar_deleting_destructor__1450108a0;
  param_1[5] = &PTR_LAB_145010b18;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) & 0xfffffffe;
  *(undefined4 *)(param_1 + 6) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 7) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f000000;
  *(undefined4 *)(param_1 + 8) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x43fa0000;
  *(undefined4 *)(param_1 + 9) = 0x41200000;
  return param_1;
}



// FUNCTION 142221020 UNavCollisionBase body=71 status=ok
// SIG undefined UNavCollisionBase(void)

undefined8 * UNavCollisionBase::UNavCollisionBase(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145010b28;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffc;
  return param_1;
}



// FUNCTION 142221070 UNavLinkDefinition body=55 status=ok
// SIG undefined UNavLinkDefinition(void)

undefined8 * UNavLinkDefinition::UNavLinkDefinition(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450103b8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xffffffe0;
  return param_1;
}



// FUNCTION 1422210b0 UNavigationDataChunk body=39 status=ok
// SIG undefined UNavigationDataChunk(void)

undefined8 * UNavigationDataChunk::UNavigationDataChunk(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fca7c0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1422210e0 ~TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142221150 ~FActiveSound body=216 status=ok
// SIG undefined ~FActiveSound(void)

void FActiveSound::~FActiveSound(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x500) = 0;
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4b8);
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x468);
  FUN_1404584f0(param_1 + 0x178);
  lVar2 = 2;
  lVar3 = param_1 + 0x98;
  do {
    plVar1 = (longlong *)(lVar3 + -0x10);
    lVar3 = lVar3 + -0x10;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142221230 FUN_142221230 body=246 status=ok
// SIG undefined FUN_142221230(void)

void FUN_142221230(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  longlong local_res18;
  
  if (param_2 != 0) {
    lVar4 = FUN_1428e7a40();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (*(longlong *)(param_2 + 0x118) == *param_1)) &&
       (local_res18 = param_2, FUN_14058c5a0(*param_1 + 0x2b0,local_res10,&local_res18,0),
       (*(byte *)(param_2 + 0xb8) & 8) != 0)) {
      lVar4 = *param_1;
      plVar6 = (longlong *)(lVar4 + 0x300);
      plVar2 = (longlong *)*plVar6;
      iVar1 = *(int *)(lVar4 + 0x308);
      for (plVar5 = plVar2; plVar5 != plVar2 + iVar1; plVar5 = plVar5 + 1) {
        if (*plVar5 == param_2) {
          if ((int)((longlong)plVar5 - (longlong)plVar2 >> 3) != -1) {
            return;
          }
          break;
        }
      }
      *(int *)(lVar4 + 0x308) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x30c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
      }
      *(longlong *)(*plVar6 + (longlong)iVar1 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 142221330 FUN_142221330 body=404 status=ok
// SIG undefined FUN_142221330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142221330(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined4 local_e0;
  undefined1 *local_d8;
  undefined *local_d0;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  longlong local_a0;
  undefined1 local_98 [72];
  longlong local_50;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar1 = FWeakObjectPtr::Get();
  if (lVar1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146aeeaa8) {
      _Init_thread_header(&DAT_146aeeaa8);
      if (DAT_146aeeaa8 == -1) {
        FName::FName(&DAT_146aeeaa0,"SoundOcclusion",1);
        _Init_thread_footer(&DAT_146aeeaa8);
      }
    }
    local_e8 = 0;
    FUN_1422ffb20(local_98,DAT_146aeeaa0,local_b8,*(undefined1 *)(param_1 + 0x28));
    if (*(int *)(param_1 + 0x24) != 0) {
      FCollisionQueryParams::AddIgnoredActor(local_98);
    }
    local_c0 = 0;
    local_c8 = &DAT_146aee980;
    local_e8 = param_1 + 0x14;
    local_d0 = &DAT_146aefe68;
    local_d8 = local_98;
    local_e0 = *(undefined4 *)(param_1 + 0x20);
    FUN_142330010(lVar1,local_b0,0,param_1 + 8);
    local_a8 = local_b0;
    local_a0 = param_1 + 0x30;
    FUN_14221ebb0(&DAT_146531840,local_b4,&local_a8,0);
    if (local_30 != 0) {
      FMemory::Free();
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1422214d0 FUN_1422214d0 body=381 status=ok
// SIG undefined FUN_1422214d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422214d0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar8 = UAudioComponent::GetAudioComponentFromID(*param_1);
  if (lVar8 != 0) {
    if (0 < *(int *)(lVar8 + 0x670)) {
      local_50 = *(undefined4 *)(param_1 + 2);
      local_58 = *(undefined4 *)(param_1 + 1);
      local_54 = *(undefined4 *)((longlong)param_1 + 0xc);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar8 + 0x668,&local_58);
    }
    plVar1 = (longlong *)(lVar8 + 0x678);
    plVar9 = (longlong *)*plVar1;
    plVar11 = plVar9 + (longlong)*(int *)(lVar8 + 0x680) * 2;
    for (; plVar9 != plVar11; plVar9 = plVar9 + 2) {
      if (((int)plVar9[1] != 0) && (*plVar9 != 0)) {
        bVar5 = false;
        uVar4 = *(undefined4 *)(param_1 + 2);
        uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
        uVar3 = *(undefined4 *)(param_1 + 1);
        *(int *)(lVar8 + 0x68c) = *(int *)(lVar8 + 0x68c) + 1;
        iVar10 = *(int *)(lVar8 + 0x68c);
        iVar7 = *(int *)(lVar8 + 0x680) + -1;
        lVar13 = (longlong)iVar7;
        if (-1 < iVar7) {
          lVar12 = lVar13 << 4;
          bVar5 = false;
          do {
            if (((*(int *)(lVar12 + 8 + *plVar1) == 0) ||
                (plVar9 = *(longlong **)(lVar12 + *plVar1), plVar9 == (longlong *)0x0)) ||
               (local_68 = uVar4, cVar6 = (**(code **)(*plVar9 + 0x40))(plVar9,lVar8,uVar3,uVar2),
               cVar6 == '\0')) {
              bVar5 = true;
            }
            lVar12 = lVar12 + -0x10;
            lVar13 = lVar13 + -1;
          } while (-1 < lVar13);
          iVar10 = *(int *)(lVar8 + 0x68c);
        }
        *(int *)(lVar8 + 0x68c) = iVar10 + -1;
        if (!bVar5) {
          return;
        }
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142221670 FUN_142221670 body=52 status=ok
// SIG undefined FUN_142221670(void)

undefined8 FUN_142221670(undefined8 param_1,ulonglong param_2)

{
  FArchive::~FArchive();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1422216b0 FUN_1422216b0 body=147 status=ok
// SIG undefined FUN_1422216b0(void)

longlong FUN_1422216b0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  FRichCurve::~FRichCurve(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  lVar2 = 2;
  lVar3 = param_1 + 0x48;
  do {
    plVar1 = (longlong *)(lVar3 + -0x10);
    lVar3 = lVar3 + -0x10;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 142221750 FUN_142221750 body=43 status=ok
// SIG undefined FUN_142221750(void)

undefined8 * FUN_142221750(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145010830;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142221780 `scalar_deleting_destructor' body=145 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAvoidanceManager::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x58);
  FSelfRegisteringExec::~FSelfRegisteringExec(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 142221820 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UNavCollisionBase::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
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
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142221890 FUN_142221890 body=84 status=ok
// SIG undefined FUN_142221890(void)

longlong FUN_142221890(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1422218f0 FUN_1422218f0 body=538 status=ok
// SIG undefined FUN_1422218f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_1422218f0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                   longlong *param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar10;
  float fVar11;
  undefined1 auStack_188 [32];
  float local_168 [2];
  undefined8 local_160;
  undefined4 local_158;
  undefined1 local_150 [192];
  undefined1 *local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong uVar9;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar1 = *param_2;
  fVar11 = -1.0;
  uVar9 = 0;
  *param_4 = uVar1;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_2 + 1);
  local_90 = (undefined1 *)0x0;
  local_88 = 0;
  FUN_140725150(uVar1,local_150,0);
  uVar7 = local_88 & 0xffffffff;
  puVar6 = local_90;
  uVar10 = uVar9;
  if (0 < (int)local_88) {
    do {
      puVar5 = local_150;
      if (puVar6 != (undefined1 *)0x0) {
        puVar5 = puVar6;
      }
      plVar2 = *(longlong **)(puVar5 + uVar10);
      if ((*(byte *)(plVar2 + 0x17) & 1) != 0) {
        iVar4 = (**(code **)(*plVar2 + 0x4e8))(plVar2);
        if ((iVar4 != 0) && (iVar4 = (**(code **)(*plVar2 + 0x4f0))(plVar2,param_3), iVar4 == 2)) {
          local_168[0] = -1.0;
          cVar3 = (**(code **)(*plVar2 + 0x6d8))(plVar2,param_2,local_168,&local_160);
          if ((cVar3 != '\0') && ((fVar11 < 0.0 || (local_168[0] < fVar11)))) {
            *param_4 = local_160;
            *(undefined4 *)(param_4 + 1) = local_158;
            if (param_5 != (longlong *)0x0) {
              *param_5 = (longlong)plVar2;
            }
            puVar6 = local_90;
            fVar11 = local_168[0];
            if (local_168[0] <= 0.0001) break;
          }
        }
        uVar7 = local_88 & 0xffffffff;
        puVar6 = local_90;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar10 = uVar10 + 8;
    } while ((int)uVar8 < (int)uVar7);
    if (0.0 < fVar11) {
      fVar11 = SQRT(fVar11);
    }
  }
  if (puVar6 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return fVar11;
}



// FUNCTION 142221b10 FUN_142221b10 body=55 status=ok
// SIG undefined FUN_142221b10(void)

ulonglong FUN_142221b10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x1a0);
    plVar1 = plVar2 + *(int *)(param_1 + 0x1a8);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) {
        return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
      }
    }
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 142221b50 FUN_142221b50 body=131 status=ok
// SIG undefined FUN_142221b50(void)

void FUN_142221b50(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    local_a0 = *(undefined4 *)(param_2 + 1);
    local_a8 = *param_2;
    FUN_142381410(*(longlong *)(param_1 + 0x168),&local_a8,param_3,param_4,param_5);
    return;
  }
  if (param_4 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    FUN_140729f20(param_4,local_98);
  }
  return;
}



// FUNCTION 142221be0 FUN_142221be0 body=111 status=ok
// SIG undefined FUN_142221be0(void)

void FUN_142221be0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_142381470();
    return;
  }
  if (param_4 != 0) {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_8c = 0x3f800000;
    FUN_140729f20(param_4,local_98);
  }
  return;
}



// FUNCTION 142221c50 FUN_142221c50 body=1641 status=ok
// SIG undefined FUN_142221c50(void)

/* WARNING: Removing unreachable block (ram,0x000142221f40) */
/* WARNING: Removing unreachable block (ram,0x0001422220fa) */

longlong *
FUN_142221c50(longlong *param_1,longlong param_2,char param_3,undefined8 param_4,longlong param_5)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong local_res8;
  longlong local_res10;
  char local_res18;
  undefined8 local_res20;
  ulonglong in_stack_fffffffffffffec8;
  uint uVar15;
  undefined8 in_stack_fffffffffffffed0;
  uint uVar16;
  uint in_stack_fffffffffffffed8;
  code *local_108;
  ulonglong *puStack_100;
  undefined1 local_f8 [16];
  undefined **local_e8 [5];
  byte local_bf;
  byte local_be;
  byte local_bd;
  ulonglong local_b8;
  undefined8 local_80;
  undefined8 local_58;
  longlong *local_50;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  lVar6 = (**(code **)(*param_1 + 0x148))();
  uVar16 = (uint)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
  if ((*(uint *)(lVar6 + 0x830) & 0x400) != 0) {
    return (longlong *)0x0;
  }
  lVar6 = 0;
  plVar13 = (longlong *)0x0;
  if (param_5 == 0) {
    lVar12 = param_1[2];
  }
  else {
    lVar12 = *(longlong *)(param_5 + 0x10);
  }
  do {
    if (((lVar12 == 0) ||
        (uVar16 = (uint)((ulonglong)in_stack_fffffffffffffed0 >> 0x20), param_3 = local_res18,
        lVar6 != 0)) || (plVar13 != (longlong *)0x0)) {
      bVar3 = false;
      local_res8 = 0;
      plVar9 = (longlong *)0x0;
      if (plVar13 == (longlong *)0x0) {
        if (lVar6 != 0) {
          local_res8 = 0;
          puVar11 = (undefined8 *)
                    FindFirstFreeName(&local_108,param_1,*(undefined8 *)(lVar6 + 0x18));
          in_stack_fffffffffffffec8 = 0;
          plVar9 = (longlong *)
                   FUN_1417987a0(lVar6,param_1,*puVar11,0xefb7ffd6,0,(ulonglong)uVar16 << 0x20,
                                 0xff800000);
          if (plVar9 != (longlong *)0x0) {
            *(undefined1 *)((longlong)plVar9 + 0xca) = 2;
            iVar2 = (int)param_1[0x65];
            *(int *)(param_1 + 0x65) = iVar2 + 1;
            if (*(int *)((longlong)param_1 + 0x32c) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 100,iVar2)
              ;
            }
            *(longlong **)(param_1[100] + (longlong)iVar2 * 8) = plVar9;
          }
        }
      }
      else if (plVar13[4] != 0) {
        local_res8 = 0;
        plVar9 = (longlong *)FindFirstFreeName(local_f8,param_1,plVar13[3]);
        uVar15 = (uint)(in_stack_fffffffffffffec8 >> 0x20);
        lVar6 = *plVar9;
        uVar16 = *(uint *)(plVar13 + 5);
        lVar12 = plVar13[4];
        local_res8 = 0;
        if (lVar6 == 0) {
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        in_stack_fffffffffffffec8 = (ulonglong)uVar15 << 0x20;
        plVar9 = (longlong *)
                 FUN_1417985e0(lVar12,param_1,lVar6,uVar16 & 0xffb7ffd6,in_stack_fffffffffffffec8,0,
                               in_stack_fffffffffffffed8 & 0xffffff00,0,0);
        *(uint *)(plVar9 + 1) = *(uint *)(plVar9 + 1) | 0x3000;
        uVar10 = FBlueprintCookedComponentInstancingData::GetCachedPropertyList(plVar13);
        FArchive::FArchive(local_e8);
        local_50 = plVar13 + 8;
        local_58 = 0;
        local_e8[0] = &PTR_FUN_144f50fa8;
        FArchive::SetIsLoading(local_e8,1);
        FArchive::SetIsPersistent(local_e8,0);
        local_be = local_be & 0xfd;
        local_bf = local_bf & 0xdf;
        local_bd = local_bd | 0x10;
        local_e8[0] = &PTR_FUN_145010640;
        local_80 = uVar10;
        FUN_141695520(local_e8,1);
        local_b8 = local_b8 | 0x1000;
        (**(code **)(*plVar9 + 0xa8))(plVar9,local_e8);
        (**(code **)(*plVar9 + 200))(plVar9,0);
        puStack_100 = &local_res8;
        local_res8 = local_res8 & 0xffffffffffffff00;
        local_108 = FUN_1406ddef0;
        lVar6 = FUN_1415d8310(&local_108,&DAT_14622e6dc);
        uVar1 = *(undefined1 *)(lVar6 + 0x58);
        *(undefined1 *)(lVar6 + 0x58) = 1;
        FUN_1417510e0(plVar9);
        *(undefined1 *)(lVar6 + 0x58) = uVar1;
        *(undefined1 *)((longlong)plVar9 + 0xca) = 2;
        iVar2 = (int)param_1[0x65];
        *(int *)(param_1 + 0x65) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x32c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 100,iVar2);
        }
        *(longlong **)(param_1[100] + (longlong)iVar2 * 8) = plVar9;
        FArchive::~FArchive(local_e8);
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x3b8))(plVar9);
        lVar6 = FUN_1429ff160();
        if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (param_3 == '\0') {
            if (param_1[0x2d] == 0) {
              param_1[0x2d] = (longlong)plVar9;
            }
            else {
              local_res8 = 0;
              FUN_142399e30(plVar9,param_1[0x2d],0);
            }
          }
          FUN_142398770(plVar9,local_res20,0,0,in_stack_fffffffffffffec8 & 0xffffffffffffff00);
          bVar3 = true;
        }
        if ((*(byte *)((longlong)plVar9 + 0xb9) & 4) != 0) {
          FUN_14234b150(plVar9);
        }
        lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        if ((((*(byte *)((longlong)param_1 + 0x93) & 0x40) == 0) && (lVar6 != 0)) && (bVar3)) {
          lVar12 = FUN_1429f11d0();
          if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
              != lVar12 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (cVar5 = FUN_1423cc4e0(plVar9), cVar5 != '\0')) {
            FUN_1428daf80(lVar6,param_1,plVar9);
          }
        }
      }
      return plVar9;
    }
    if (lVar12 != 0) {
      lVar7 = UBlueprintGeneratedClass::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if (*(int *)(lVar12 + 0x260) != *(int *)(lVar12 + 0x28c)) {
          lVar7 = *(longlong *)(lVar12 + 0x298);
          if (*(longlong *)(lVar12 + 0x298) == 0) {
            lVar7 = lVar12 + 0x290;
          }
          iVar2 = *(int *)(lVar7 + ((longlong)
                                    ((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10) &
                                   (longlong)*(int *)(lVar12 + 0x2a0) - 1U) * 4);
          if (iVar2 != -1) {
            do {
              plVar13 = (longlong *)((longlong)iVar2 * 0x60 + *(longlong *)(lVar12 + 600));
              if (*plVar13 == local_res10) {
                if ((iVar2 != -1) && (plVar13 != (longlong *)0x0)) {
                  plVar13 = plVar13 + 1;
                  if (plVar13 == (longlong *)0x0) goto LAB_142221dae;
                  if ((char)*plVar13 == '\0') {
                    lVar6 = FUN_1422ed710(lVar12,&local_res10);
                  }
                  goto LAB_142221ee9;
                }
                break;
              }
              iVar2 = (int)plVar13[0xb];
            } while (iVar2 != -1);
          }
        }
        plVar13 = (longlong *)0x0;
LAB_142221dae:
        lVar6 = FUN_1422ed710(lVar12,&local_res10);
      }
      else {
        lVar8 = UDynamicClass::GetPrivateStaticClass();
        lVar7 = local_res10;
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          plVar14 = *(longlong **)(lVar12 + 0x240);
          plVar9 = plVar14 + *(int *)(lVar12 + 0x248);
          for (; plVar14 != plVar9; plVar14 = plVar14 + 1) {
            lVar6 = *plVar14;
            if (lVar6 == 0) {
LAB_142221e98:
              bVar3 = false;
            }
            else {
              lVar8 = FUN_1428e7a40();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if ((!bVar3) || (*(longlong *)(lVar6 + 0x18) != lVar7)) goto LAB_142221e98;
              bVar3 = true;
            }
            if (bVar3) {
              lVar6 = *plVar14;
              if (lVar6 != 0) {
                lVar7 = FUN_1428e7a40();
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) goto LAB_142221ee9;
              }
              break;
            }
          }
          lVar6 = 0;
        }
      }
    }
LAB_142221ee9:
    uVar16 = (uint)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
    lVar12 = *(longlong *)(lVar12 + 0x30);
    param_3 = local_res18;
  } while( true );
}



// FUNCTION 1422222c0 FUN_1422222c0 body=166 status=ok
// SIG undefined FUN_1422222c0(void)

void FUN_1422222c0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FTickFunction::AddPrerequisite(*(longlong *)(param_1 + 0x168) + 0x30,param_2,param_2 + 0x28);
  }
  FTickFunction::AddPrerequisite(param_1 + 0x28,param_2,param_2 + 0x28);
  plVar4 = (longlong *)(param_1 + 0x170);
  plVar2 = (longlong *)*plVar4;
  iVar1 = *(int *)(param_1 + 0x178);
  plVar3 = plVar2;
  do {
    if (plVar3 == plVar2 + iVar1) {
LAB_14222233c:
      *(int *)(param_1 + 0x178) = iVar1 + 1;
      if (*(int *)(param_1 + 0x17c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4);
      }
      *(longlong *)((longlong)iVar1 * 8 + *plVar4) = param_2;
      return;
    }
    if (*plVar3 == param_2) {
      if ((int)((longlong)plVar3 - (longlong)plVar2 >> 3) != -1) {
        return;
      }
      goto LAB_14222233c;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 142222370 FUN_142222370 body=38 status=ok
// SIG undefined FUN_142222370(void)

void FUN_142222370(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  *(undefined1 *)(param_2 + 0xca) = 3;
  local_res10[0] = param_2;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x310,local_res10);
  return;
}



// FUNCTION 1422223a0 FUN_1422223a0 body=242 status=ok
// SIG undefined FUN_1422223a0(void)

void FUN_1422223a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  char local_res8 [8];
  longlong local_res10;
  undefined1 local_res18 [16];
  
  local_res10 = param_2;
  (**(code **)(*param_1 + 0x70))(param_1,0);
  local_res8[0] = '\0';
  FUN_14058c5a0(param_1 + 0x56,local_res18,&local_res10,local_res8);
  if (local_res8[0] == '\0') {
    if ((*(byte *)(param_2 + 0xb8) & 8) != 0) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x60,&local_res10);
    }
    cVar2 = FUN_142340f60(param_2);
    if (cVar2 != '\0') {
      iVar1 = (int)param_1[0x65];
      *(int *)(param_1 + 0x65) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x32c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 100,iVar1);
      }
      *(longlong *)(param_1[100] + (longlong)iVar1 * 8) = param_2;
      return;
    }
    if (*(char *)(param_2 + 0xca) == '\x03') {
      iVar1 = (int)param_1[99];
      *(int *)(param_1 + 99) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x31c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x62,iVar1);
      }
      *(longlong *)(param_1[0x62] + (longlong)iVar1 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 1422224a0 AddReferencedObjects body=58 status=ok
// SIG undefined AddReferencedObjects(void)

void AActor::AddReferencedObjects(longlong param_1,undefined8 param_2)

{
  FReferenceCollector::AddReferencedObjects<UObject>(param_2,param_1 + 0x2b0,0,0);
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1422224e0 AddReferencedObjects body=489 status=ok
// SIG undefined AddReferencedObjects(void)

void FActiveSound::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  plVar1 = (longlong *)(param_1 + 0x468);
  local_58 = 0;
  uStack_54 = 1;
  iVar2 = *(int *)(param_1 + 0x490);
  puStack_20 = (uint *)(param_1 + 0x478);
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x488);
    if (*(uint **)(param_1 + 0x488) == (uint *)0x0) {
      puVar8 = puStack_20;
    }
    uVar3 = *puVar8;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar4) goto LAB_1422225b1;
      uVar3 = puVar8[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    local_48._4_4_ = (uStack_40 - iVar7) + 0x1f;
    if (iVar2 < local_48._4_4_) {
LAB_1422225b1:
      local_48._4_4_ = iVar2;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar4 = local_48._4_4_ < iVar2;
  local_30 = plVar1;
  local_48 = puStack_20;
  if (bVar4) {
    do {
      lVar5 = *(longlong *)(*plVar1 + 8 + (longlong)iStack_3c * 0x18);
      if (lVar5 != 0) {
        FWaveInstance::AddReferencedObjects(lVar5,param_2);
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x10,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x58,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x50,0,0);
  lVar5 = *(longlong *)(param_1 + 0x518);
  lVar6 = (longlong)*(int *)(param_1 + 0x520) * 0x20 + lVar5;
  for (; lVar5 != lVar6; lVar5 = lVar5 + 0x20) {
    if (*(longlong *)(lVar5 + 0x18) != 0) {
      (**(code **)(*param_2 + 0x38))(param_2,lVar5 + 0x18,0,0);
    }
  }
  return;
}



// FUNCTION 142222710 ApplyAttenuation body=1981 status=ok
// SIG undefined ApplyAttenuation(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FActiveSound::ApplyAttenuation
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190;
  undefined4 *local_188;
  undefined4 *local_180;
  longlong local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
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
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined1 local_90;
  ulonglong local_88;
  
  uStack_bc = uRam0000000146aee96c;
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_170 = *(undefined4 *)(param_3 + 0x10);
  uStack_16c = *(undefined4 *)(param_3 + 0x14);
  local_168 = *(undefined4 *)(param_3 + 0x18);
  uStack_fc = *(undefined4 *)(param_3 + 0x1c);
  if (param_4 == 0) {
    param_4 = param_1 + 0x178;
  }
  local_a8 = _DAT_146aee960 & _DAT_146aee970;
  uStack_a4 = uRam0000000146aee964 & uRam0000000146aee974;
  uStack_a0 = uRam0000000146aee968 & uRam0000000146aee978;
  uStack_9c = uRam0000000146aee96c & uRam0000000146aee97c;
  local_d8 = _DAT_1468b5d90;
  local_d0 = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x114) = 0x3f800000;
  bVar5 = *(byte *)(param_4 + 0xa0);
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_178 = param_3;
  local_108 = local_170;
  uStack_104 = uStack_16c;
  uStack_100 = local_168;
  if ((char)bVar5 < '\0') {
    puVar1 = (undefined8 *)(param_2 + 0x148);
    *(undefined1 *)(param_2 + 0xd0) = *(undefined1 *)(param_4 + 0xa5);
    *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)(param_4 + 0x1fc);
    *(undefined1 *)(param_2 + 0x140) = *(undefined1 *)(param_4 + 600);
    *(undefined1 *)(param_2 + 0x141) = *(undefined1 *)(param_4 + 0x259);
    *(undefined4 *)(param_2 + 0x144) = *(undefined4 *)(param_4 + 0x25c);
    if (puVar1 != (undefined8 *)(param_4 + 0x260)) {
      iVar3 = *(int *)(param_4 + 0x268);
      _Src = *(void **)(param_4 + 0x260);
      *(int *)(param_2 + 0x150) = iVar3;
      if ((iVar3 == 0) && (*(int *)(param_2 + 0x154) == 0)) {
        *(undefined4 *)(param_2 + 0x154) = 0;
      }
      else {
        TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 * 0x1c);
      }
    }
    *(undefined8 *)(param_2 + 0x158) = *(undefined8 *)(param_4 + 0x270);
    uVar16 = *(undefined4 *)(param_4 + 0x1f0);
    *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_4 + 0x1ec);
    *(undefined4 *)(param_2 + 0xd8) = uVar16;
    uVar16 = *(undefined4 *)(param_4 + 0x1f8);
    *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(param_4 + 500);
    *(undefined4 *)(param_2 + 0xe0) = uVar16;
    bVar5 = *(byte *)(param_4 + 0xa0);
  }
  lVar11 = param_2 + 0x20;
  if ((bVar5 & 10) != 0) {
    local_198 = param_4;
    local_190 = local_178;
    local_188 = (undefined4 *)(param_1 + 0x160);
    local_180 = (undefined4 *)(param_1 + 0x164);
    FUN_1422cb0a0(*(undefined8 *)(param_1 + 0x40),&local_d8,*(undefined8 *)(param_1 + 0x10),lVar11);
    bVar5 = *(byte *)(param_4 + 0xa0);
    if ((bVar5 & 2) != 0) {
      *(undefined4 *)(param_2 + 0x88) = (undefined4)local_98;
      *(undefined4 *)(param_2 + 0x8c) = local_98._4_4_;
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x164);
      bVar5 = *(byte *)(param_4 + 0xa0);
    }
    if ((bVar5 & 8) != 0) {
      uVar7 = FAudioDevice::GetGlobalFocusSettings(*(undefined8 *)(param_1 + 0x40));
      local_198 = param_4;
      fVar14 = (float)FAudioDevice::GetFocusFactor
                                (*(undefined8 *)(param_1 + 0x40),&local_d8,
                                 *(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x160));
      if ((*(byte *)(param_4 + 0xa0) & 0x10) != 0) {
        if (*(float *)(param_1 + 0x530) <= fVar14 && fVar14 != *(float *)(param_1 + 0x530)) {
          uVar16 = *(undefined4 *)(param_4 + 0x1dc);
        }
        else {
          uVar16 = *(undefined4 *)(param_4 + 0x1d8);
        }
        uVar15 = FAudioDevice::GetDeviceDeltaTime(*(undefined8 *)(param_1 + 0x40));
        fVar14 = (float)FMath::FInterpTo(*(undefined4 *)(param_1 + 0x530),fVar14,uVar15,uVar16);
      }
      *(float *)(param_1 + 0x530) = fVar14;
      fVar14 = (float)FSoundAttenuationSettings::GetFocusAttenuation(param_4,uVar7,fVar14);
      *(float *)(param_2 + 0x5c) = fVar14 * *(float *)(param_2 + 0x5c);
      fVar14 = (float)FSoundAttenuationSettings::GetFocusPriorityScale
                                (param_4,uVar7,*(undefined4 *)(param_1 + 0x530));
      *(float *)(param_1 + 0x114) = fVar14;
      *(float *)(param_2 + 0x78) = fVar14 * *(float *)(param_2 + 0x78);
      uVar16 = FSoundAttenuationSettings::GetFocusDistanceScale
                         (param_4,uVar7,*(undefined4 *)(param_1 + 0x530));
      *(undefined4 *)(param_1 + 0x118) = uVar16;
    }
  }
  lVar12 = local_178;
  if ((*(byte *)(param_4 + 0xa0) & 1) != 0) {
    if (*(char *)(param_4 + 9) == '\0') {
      local_198 = local_178;
      FUN_1422caaa0(*(undefined8 *)(param_1 + 0x40),&local_d8,lVar11,param_4);
      fVar14 = (float)FUN_1422c2330(param_4,(undefined4)local_98,*(undefined4 *)(param_4 + 0x20),
                                    *(undefined4 *)(param_1 + 0x118));
      *(float *)(param_2 + 0x60) = fVar14 * *(float *)(param_2 + 0x60);
    }
    else {
      local_158 = CONCAT44(uStack_16c,local_170);
      local_150 = local_168;
      fVar14 = (float)FBaseAttenuationSettings::Evaluate
                                (param_4,lVar11,&local_158,*(undefined4 *)(param_1 + 0x118));
      *(float *)(param_2 + 0x60) = fVar14 * *(float *)(param_2 + 0x60);
      lVar12 = local_178;
    }
  }
  if ((*(byte *)(param_4 + 0xa0) & 0x20) != 0) {
    if (*(int *)(param_4 + 0x290) == 0) {
      if ((0.0 < *(float *)(param_2 + 0x5c)) &&
         (cVar6 = FAudioDevice::IsAudioDeviceMuted(*(undefined8 *)(param_1 + 0x40)), cVar6 == '\0'))
      {
        local_148 = *(undefined4 *)(param_2 + 0x30);
        uStack_144 = *(undefined4 *)(param_2 + 0x34);
        local_140 = *(undefined4 *)(param_2 + 0x38);
        uStack_ec = *(undefined4 *)(param_2 + 0x3c);
        lVar8 = *(longlong *)(param_1 + 0x528);
        local_13c = *(undefined4 *)(lVar8 + 0x10);
        uStack_138 = *(undefined4 *)(lVar8 + 0x14);
        local_134 = *(undefined4 *)(lVar8 + 0x18);
        uStack_dc = *(undefined4 *)(lVar8 + 0x1c);
        local_128 = local_148;
        uStack_124 = uStack_144;
        local_120 = local_140;
        local_118 = local_13c;
        uStack_114 = uStack_138;
        local_110 = local_134;
        local_f8 = local_148;
        uStack_f4 = uStack_144;
        uStack_f0 = local_140;
        local_e8 = local_13c;
        uStack_e4 = uStack_138;
        uStack_e0 = local_134;
        FUN_142225460(param_1,&local_118,&local_128,param_4);
        *(float *)(param_2 + 0x60) = *(float *)(param_1 + 0xe8) * *(float *)(param_2 + 0x60);
        LOCK();
        bVar13 = *(int *)(param_1 + 0xa0) == 0;
        if (bVar13) {
          *(int *)(param_1 + 0xa0) = 0;
        }
        UNLOCK();
        *(uint *)(param_2 + 0x19c) = *(uint *)(param_2 + 0x19c) & 0xffffffef;
        *(uint *)(param_2 + 0x19c) = *(uint *)(param_2 + 0x19c) | (uint)!bVar13 << 4;
        *(undefined4 *)(param_2 + 0x194) = *(undefined4 *)(param_1 + 0xcc);
      }
    }
    else {
      lVar8 = GetAudioPluginCustomSettingsClass(2);
      if (lVar8 != 0) {
        plVar10 = *(longlong **)(param_4 + 0x288);
        plVar2 = plVar10 + *(int *)(param_4 + 0x290);
        for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
          lVar4 = *plVar10;
          if (lVar4 != 0) {
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar13 = false;
            }
            else {
              bVar13 = true;
            }
            if (bVar13) {
              *(longlong *)(param_2 + 0x170) = lVar4;
              break;
            }
          }
        }
      }
    }
  }
  if ((0 < *(int *)(param_4 + 0x280)) && (lVar8 = GetAudioPluginCustomSettingsClass(0), lVar8 != 0))
  {
    plVar10 = *(longlong **)(param_4 + 0x278);
    plVar2 = plVar10 + *(int *)(param_4 + 0x280);
    for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
      lVar4 = *plVar10;
      if (lVar4 != 0) {
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (bVar13) {
          *(longlong *)(param_2 + 0x168) = lVar4;
          break;
        }
      }
    }
  }
  if ((0 < *(int *)(param_4 + 0x2a0)) && (lVar8 = GetAudioPluginCustomSettingsClass(1), lVar8 != 0))
  {
    plVar10 = *(longlong **)(param_4 + 0x298);
    plVar2 = plVar10 + *(int *)(param_4 + 0x2a0);
    for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
      lVar4 = *plVar10;
      if (lVar4 != 0) {
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (bVar13) {
          *(longlong *)(param_2 + 0x178) = lVar4;
          break;
        }
      }
    }
  }
  if ((*(byte *)(param_4 + 0xa0) & 4) != 0) {
    local_198 = lVar12;
    FUN_1422caaa0(*(undefined8 *)(param_1 + 0x40),&local_d8,lVar11,param_4);
    local_198 = param_4 + 0xb8;
    local_178 = *(longlong *)(param_4 + 0x1a8);
    local_160 = *(undefined4 *)(param_4 + 0x1b0);
    local_15c = *(undefined4 *)(param_4 + 0x1b4);
    fVar14 = (float)GetAttenuationFrequency(param_1,param_4,&local_d8,&local_178);
    local_198 = param_4 + 0x130;
    fVar17 = (float)GetAttenuationFrequency(param_1,param_4,&local_d8,&local_160);
    if (fVar14 < *(float *)(param_2 + 0x18c)) {
      *(float *)(param_2 + 0x18c) = fVar14;
    }
    if (*(float *)(param_2 + 400) <= fVar17 && fVar17 != *(float *)(param_2 + 400)) {
      *(float *)(param_2 + 400) = fVar17;
    }
  }
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_4 + 0xa8);
  *(undefined4 *)(param_2 + 0x160) = *(undefined4 *)(param_4 + 0xac);
  uVar9 = ((uint)*(byte *)(param_4 + 0xa1) << 6 ^ *(uint *)(param_2 + 0x19c)) & 0x40 ^
          *(uint *)(param_2 + 0x19c);
  *(uint *)(param_2 + 0x19c) = uVar9;
  *(uint *)(param_2 + 0x19c) = ((*(byte *)(param_4 + 0xa0) | uVar9) ^ uVar9) & 2 ^ uVar9;
  if ((*(char *)(param_4 + 0xa2) == '\0') &&
     (cVar6 = FAudioDevice::IsHRTFEnabledForAll(*(undefined8 *)(param_1 + 0x40)), cVar6 != '\0')) {
    *(undefined4 *)(param_2 + 0x164) = 1;
  }
  else {
    *(uint *)(param_2 + 0x164) = (uint)*(byte *)(param_4 + 0xa2);
  }
  return;
}



// FUNCTION 142222ed0 ApplyRadioFilter body=119 status=ok
// SIG undefined ApplyRadioFilter(void)

void FActiveSound::ApplyRadioFilter(longlong param_1,longlong param_2)

{
  byte bVar1;
  float fVar2;
  
  if (*(char *)(*(longlong *)(param_1 + 0x40) + 0xb0) != '\a') {
    if ((*(longlong *)(param_2 + 0x10) != 0) &&
       (fVar2 = *(float *)(*(longlong *)(param_2 + 0x10) + 0x40) * *(float *)(param_2 + 100),
       0.0001 < fVar2)) {
      bVar1 = 0;
      if (*(float *)(param_2 + 0x5c) <= fVar2 && fVar2 != *(float *)(param_2 + 0x5c)) {
        bVar1 = 2;
      }
      *(byte *)(param_1 + 0x99) = bVar1 | *(byte *)(param_1 + 0x99) & 0xfd;
    }
    *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) | 1;
    return;
  }
  *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) & 0xfd;
  *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) | 1;
  return;
}



// FUNCTION 142222f50 FUN_142222f50 body=815 status=ok
// SIG undefined FUN_142222f50(void)

void FUN_142222f50(longlong param_1,float *param_2,char param_3)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  plVar2 = *(longlong **)(param_1 + 0x168);
  if ((plVar2 != (longlong *)0x0) && (plVar2[0x32] == 0)) {
    (**(code **)(*plVar2 + 1000))();
  }
  uStack_a4 = 1;
  plVar2 = (longlong *)(param_1 + 0x2b0);
  local_a8 = 0;
  uVar5 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar5 != 0) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = *puVar11;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar8 == 0) {
      lVar9 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar6 = local_a8 + 1;
      bVar4 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar6;
      if (bVar4) goto LAB_14222304d;
      uVar8 = puVar11[lVar9 + 1];
    }
    uStack_a4 = uVar8 - 1 & uVar8 ^ uVar8;
    iVar6 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_94 = (iStack_90 - iVar6) + 0x1f;
    if ((int)uVar5 < (int)uStack_94) {
LAB_14222304d:
      uStack_94 = uVar5;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x2d8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  uVar10 = uVar8 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_78 = puVar1;
  local_60 = plVar2;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  uStack_94 = uVar8;
  if (uVar8 != uVar5) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar7 = puVar11[(int)uVar8 >> 5] & -1 << ((byte)uVar8 & 0x1f);
    iVar6 = (int)uVar8 >> 5;
    while (uVar7 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142223117;
      uVar7 = puVar11[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_94 = (uVar10 - iVar6) + 0x1f;
    if ((int)uVar5 < (int)uStack_94) {
LAB_142223117:
      uStack_94 = uVar5;
    }
  }
  do {
    if ((uStack_6c == uStack_94) && (local_78 == puVar1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if (param_3 == '\0') {
        if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (((!bVar4) && (*(longlong *)(param_1 + 0x168) != 0)) &&
           ((*(byte *)(*(longlong *)(param_1 + 0x168) + 0xb8) & 1) != 0)) {
          FUN_142251c90(param_1);
          FUN_142252c90(param_1,1);
        }
      }
      return;
    }
    plVar3 = *(longlong **)((longlong)(int)uStack_6c * 0x10 + *plVar2);
    if (plVar3 == (longlong *)0x0) {
LAB_1422231ae:
      bVar4 = false;
    }
    else {
      iVar6 = *(int *)((longlong)plVar3 + 0xc);
      if (iVar6 < (int)DAT_1469e91c4) {
        uVar8 = iVar6 >> 0x1f & 0xffff;
        uVar5 = iVar6 + uVar8;
        lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar8) * 0x18;
      }
      else {
        lVar9 = 0;
      }
      if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) != 0) goto LAB_1422231ae;
      bVar4 = true;
    }
    if (bVar4) {
      lVar9 = FUN_1429ff160();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        (**(code **)(*plVar3 + 1000))(plVar3,param_2,param_3);
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  } while( true );
}



// FUNCTION 142223280 FUN_142223280 body=93 status=ok
// SIG undefined FUN_142223280(void)

void FUN_142223280(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x168) != 0) && (param_2 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*param_2 + 0x3b8))(param_2);
    if (lVar1 != 0) {
      FUN_142382f60(*(undefined8 *)(param_1 + 0x168),lVar1,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 1422232e0 FUN_1422232e0 body=22 status=ok
// SIG undefined FUN_1422232e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1422232e0(longlong param_1,longlong *param_2,char *param_3,longlong param_4)

{
  int *piVar1;
  char *pcVar2;
  float *pfVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 in_RAX;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  int iVar20;
  char *pcVar21;
  undefined8 *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  float fVar36;
  uint uVar37;
  uint uVar38;
  undefined1 auStack_7b8 [32];
  longlong *plStack_798;
  undefined1 uStack_790;
  byte bStack_788;
  char cStack_787;
  undefined1 uStack_784;
  undefined1 uStack_783;
  undefined1 uStack_782;
  undefined1 uStack_781;
  undefined4 uStack_780;
  undefined4 *puStack_778;
  undefined4 *puStack_770;
  uint uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined4 *puStack_748;
  float *pfStack_740;
  undefined4 *puStack_738;
  undefined1 *puStack_730;
  undefined4 *puStack_728;
  undefined1 *puStack_720;
  undefined4 uStack_710;
  longlong alStack_708 [3];
  longlong lStack_6f0;
  float fStack_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  undefined1 auStack_6d8 [8];
  undefined1 auStack_6d0 [8];
  undefined1 auStack_6c8 [8];
  longlong lStack_6c0;
  undefined1 auStack_6b8 [8];
  longlong *plStack_6b0;
  undefined8 uStack_6a8;
  longlong lStack_6a0;
  code *pcStack_698;
  byte *pbStack_690;
  undefined4 uStack_680;
  undefined4 uStack_674;
  undefined4 uStack_668;
  undefined4 uStack_65c;
  undefined4 uStack_650;
  undefined1 auStack_648 [8];
  longlong *plStack_640;
  undefined1 auStack_630 [8];
  longlong *plStack_628;
  undefined1 auStack_618 [8];
  longlong *plStack_610;
  code *pcStack_5f8;
  byte *pbStack_5f0;
  undefined4 *puStack_5e8;
  undefined4 *puStack_5e0;
  undefined1 auStack_5d8 [16];
  undefined1 auStack_5c8 [8];
  longlong *plStack_5c0;
  longlong alStack_5b8 [2];
  undefined4 *puStack_5a8;
  undefined1 *puStack_5a0;
  undefined1 auStack_598 [16];
  undefined1 auStack_588 [8];
  longlong *plStack_580;
  longlong alStack_578 [2];
  undefined4 *puStack_568;
  float *pfStack_560;
  undefined1 auStack_558 [16];
  undefined1 auStack_548 [8];
  longlong *plStack_540;
  longlong alStack_538 [2];
  longlong alStack_528 [2];
  undefined4 *puStack_518;
  undefined1 *puStack_510;
  undefined1 auStack_508 [16];
  undefined1 auStack_4f8 [8];
  longlong *plStack_4f0;
  longlong alStack_4e8 [2];
  longlong alStack_4d8 [2];
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  undefined1 auStack_4a8 [8];
  longlong *plStack_4a0;
  undefined1 auStack_490 [12];
  undefined1 auStack_484 [12];
  undefined1 auStack_478 [16];
  undefined1 auStack_468 [8];
  longlong *plStack_460;
  undefined1 auStack_450 [8];
  longlong *plStack_448;
  undefined1 auStack_438 [8];
  longlong *plStack_430;
  undefined1 auStack_420 [8];
  longlong *plStack_418;
  undefined1 auStack_408 [8];
  longlong *plStack_400;
  undefined1 auStack_3f0 [8];
  longlong *plStack_3e8;
  undefined1 auStack_3d8 [8];
  longlong *plStack_3d0;
  undefined1 auStack_3c0 [8];
  longlong *plStack_3b8;
  undefined1 auStack_3a8 [16];
  undefined1 auStack_398 [16];
  undefined1 auStack_388 [16];
  undefined1 auStack_378 [16];
  undefined1 auStack_368 [16];
  undefined1 auStack_358 [40];
  undefined1 auStack_330 [40];
  undefined1 auStack_308 [40];
  undefined1 auStack_2e0 [40];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined4 auStack_210 [4];
  undefined1 auStack_200 [8];
  longlong *plStack_1f8;
  char cStack_1e8;
  undefined4 auStack_1e0 [4];
  undefined1 auStack_1d0 [8];
  longlong *plStack_1c8;
  char cStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined4 auStack_1a8 [4];
  undefined1 auStack_198 [24];
  undefined1 uStack_180;
  undefined4 uStack_178;
  undefined1 auStack_168 [24];
  undefined1 uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 auStack_120 [2];
  undefined4 auStack_118 [4];
  undefined1 auStack_108 [24];
  undefined1 uStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_a8 [24];
  undefined1 uStack_90;
  undefined1 auStack_88 [40];
  char acStack_60 [8];
  ulonglong uStack_58;
  
  plVar14 = *(longlong **)(param_1 + 0x168);
  if ((plVar14 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) {
    return in_RAX;
  }
  uStack_58 = DAT_1468387a8 ^ (ulonglong)auStack_7b8;
  pbStack_690 = &bStack_788;
  bStack_788 = 0;
  pcStack_698 = FUN_1406ddef0;
  pcStack_5f8 = FUN_1406ddef0;
  pbStack_5f0 = pbStack_690;
  lVar12 = FUN_1415d8310(&pcStack_5f8,&DAT_14622e6dc);
  if (0 < *(int *)(lVar12 + 0x5c)) {
    FUN_142399e30(plVar14,param_2,param_4);
    return 1;
  }
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  if ((param_2 == (longlong *)plVar14[0x32]) && (param_4 == plVar14[0x33])) {
    plVar19 = (longlong *)param_2[0x34];
    cStack_787 = '\x01';
    plVar18 = plVar19 + (int)param_2[0x35];
    for (; plVar19 != plVar18; plVar19 = plVar19 + 1) {
      if ((longlong *)*plVar19 == plVar14) {
        return 1;
      }
    }
  }
  else {
    cStack_787 = '\0';
  }
  if (param_2 == plVar14) {
    FName::FName(auStack_6d8,&DAT_14505af3c,1);
    uVar13 = UObjectBaseUtility::GetPathName(plVar14,alStack_5b8,0);
    lVar12 = FText::FromString(auStack_270,uVar13);
    uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (auStack_450,L"AttachTo: \'{0}\' cannot be attached to itself. Aborting.",
                        L"SceneComponent",L"AttachToSelfWarning");
    plVar14 = (longlong *)FTextFormat::FTextFormat(auStack_398,uVar13);
    auStack_210[0] = 4;
    FText::FText(auStack_200,lVar12);
    puStack_728 = (undefined4 *)*plVar14;
    puStack_778 = auStack_210;
    puStack_770 = auStack_1e0;
    puStack_720 = (undefined1 *)plVar14[1];
    cStack_1e8 = '\x01';
    if (puStack_720 != (undefined1 *)0x0) {
      LOCK();
      *(int *)(puStack_720 + 8) = *(int *)(puStack_720 + 8) + 1;
      UNLOCK();
    }
    puStack_5e8 = puStack_778;
    puStack_5e0 = puStack_770;
    uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(auStack_5d8,&puStack_5e8);
    uVar13 = FText::Format(auStack_468,&puStack_728,uVar13);
    FText::FText(auStack_4a8,uVar13);
    if (plStack_460 != (longlong *)0x0) {
      LOCK();
      plVar18 = plStack_460 + 1;
      lVar15 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plStack_460)(plStack_460);
        LOCK();
        piVar1 = (int *)((longlong)plStack_460 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_460 + 8))(plStack_460,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (auStack_5d8);
    if ((cStack_1e8 != '\0') && (cStack_1e8 = '\0', plStack_1f8 != (longlong *)0x0)) {
      LOCK();
      plVar18 = plStack_1f8 + 1;
      lVar15 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plStack_1f8)(plStack_1f8);
        LOCK();
        piVar1 = (int *)((longlong)plStack_1f8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_1f8 + 8))(plStack_1f8,1);
        }
      }
    }
    plVar14 = (longlong *)plVar14[1];
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar15 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    plVar14 = *(longlong **)(lVar12 + 8);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar12 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    uVar13 = FUN_14161fb50(auStack_358,auStack_6d8);
    FMessageLog::Warning(uVar13,auStack_5c8,auStack_4a8);
    if (plStack_5c0 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_5c0 + 1;
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_5c0)(plStack_5c0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_5c0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_5c0 + 8))(plStack_5c0,1);
        }
      }
    }
    FMessageLog::~FMessageLog(auStack_358);
    if (plStack_4a0 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_4a0 + 1;
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_4a0)(plStack_4a0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_4a0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_4a0 + 8))(plStack_4a0,1);
        }
      }
    }
    alStack_578[0] = alStack_5b8[0];
    if (plStack_448 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_448 + 1;
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_448)(plStack_448);
        LOCK();
        piVar1 = (int *)((longlong)plStack_448 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        alStack_578[0] = alStack_5b8[0];
        if (iVar11 == 1) {
          (**(code **)(*plStack_448 + 8))(plStack_448,1);
          alStack_578[0] = alStack_5b8[0];
        }
      }
    }
LAB_14238333a:
    if (alStack_578[0] != 0) {
      FMemory::Free();
    }
    return 0;
  }
  lVar12 = plVar14[0x23];
  if (((lVar12 == param_2[0x23]) && (lVar12 != 0)) && (*(longlong **)(lVar12 + 0x168) == plVar14)) {
    FName::FName(auStack_6d0,&DAT_14505b1e4,1);
    uVar13 = UObjectBaseUtility::GetPathName(plVar14,alStack_578,0);
    lVar12 = FText::FromString(auStack_258,uVar13);
    uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (auStack_420,
                        L"AttachTo: \'{0}\' root component cannot be attached to other components in the same actor. Aborting."
                        ,L"SceneComponent",L"AttachToSelfRootWarning");
    plVar14 = (longlong *)FTextFormat::FTextFormat(auStack_388,uVar13);
    auStack_1e0[0] = 4;
    FText::FText(auStack_1d0,lVar12);
    puStack_748 = (undefined4 *)*plVar14;
    puStack_728 = auStack_1e0;
    puStack_720 = auStack_1b0;
    pfStack_740 = (float *)plVar14[1];
    cStack_1b8 = '\x01';
    if (pfStack_740 != (float *)0x0) {
      LOCK();
      pfStack_740[2] = (float)((int)pfStack_740[2] + 1);
      UNLOCK();
    }
    puStack_5a8 = puStack_728;
    puStack_5a0 = puStack_720;
    uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(auStack_598,&puStack_5a8);
    uVar13 = FText::Format(auStack_438,&puStack_748,uVar13);
    FText::FText(auStack_648,uVar13);
    if (plStack_430 != (longlong *)0x0) {
      LOCK();
      plVar18 = plStack_430 + 1;
      lVar15 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plStack_430)(plStack_430);
        LOCK();
        piVar1 = (int *)((longlong)plStack_430 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_430 + 8))(plStack_430,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (auStack_598);
    if ((cStack_1b8 != '\0') && (cStack_1b8 = '\0', plStack_1c8 != (longlong *)0x0)) {
      LOCK();
      plVar18 = plStack_1c8 + 1;
      lVar15 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plStack_1c8)(plStack_1c8);
        LOCK();
        piVar1 = (int *)((longlong)plStack_1c8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_1c8 + 8))(plStack_1c8,1);
        }
      }
    }
    plVar14 = (longlong *)plVar14[1];
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar15 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    plVar14 = *(longlong **)(lVar12 + 8);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar12 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    uVar13 = FUN_14161fb50(auStack_330,auStack_6d0);
    FMessageLog::Warning(uVar13,auStack_588,auStack_648);
    if (plStack_580 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_580 + 1;
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_580)(plStack_580);
        LOCK();
        piVar1 = (int *)((longlong)plStack_580 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_580 + 8))(plStack_580,1);
        }
      }
    }
    FMessageLog::~FMessageLog(auStack_330);
    if (plStack_640 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_640 + 1;
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_640)(plStack_640);
        LOCK();
        piVar1 = (int *)((longlong)plStack_640 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_640 + 8))(plStack_640,1);
        }
      }
    }
    if (plStack_418 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_418 + 1;
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_418)(plStack_418);
        LOCK();
        piVar1 = (int *)((longlong)plStack_418 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_418 + 8))(plStack_418,1);
        }
      }
    }
    goto LAB_14238333a;
  }
  for (plVar18 = (longlong *)param_2[0x32]; plVar18 != (longlong *)0x0;
      plVar18 = (longlong *)plVar18[0x32]) {
    if (plVar14 == plVar18) {
      FName::FName(auStack_6c8,&DAT_14505b254,1);
      uVar13 = UObjectBaseUtility::GetPathName(plVar14,alStack_528,0);
      lVar12 = FText::FromString(auStack_240,uVar13);
      uVar13 = UObjectBaseUtility::GetPathName(param_2,alStack_538,0);
      lVar15 = FText::FromString(auStack_228,uVar13);
      uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (auStack_3f0,
                          L"AttachTo: \'{0}\' already attached to \'{1}\', would form cycle. Aborting."
                          ,L"SceneComponent",L"AttachCycleWarning");
      plVar14 = (longlong *)FTextFormat::FTextFormat(auStack_378,uVar13);
      auStack_1a8[0] = 4;
      FText::FText(auStack_198,lVar15);
      uStack_180 = 1;
      uStack_178 = 4;
      FText::FText(auStack_168,lVar12);
      puStack_748 = auStack_1a8;
      uStack_150 = 1;
      pfStack_740 = &fStack_148;
      puStack_738 = (undefined4 *)*plVar14;
      puStack_730 = (undefined1 *)plVar14[1];
      if (puStack_730 != (undefined1 *)0x0) {
        LOCK();
        *(int *)(puStack_730 + 8) = *(int *)(puStack_730 + 8) + 1;
        UNLOCK();
      }
      puStack_568 = puStack_748;
      pfStack_560 = pfStack_740;
      uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(auStack_558,&puStack_568);
      uVar13 = FText::Format(auStack_408,&puStack_738,uVar13);
      FText::FText(auStack_630,uVar13);
      if (plStack_400 != (longlong *)0x0) {
        LOCK();
        plVar18 = plStack_400 + 1;
        lVar16 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plStack_400)(plStack_400);
          LOCK();
          piVar1 = (int *)((longlong)plStack_400 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plStack_400 + 8))(plStack_400,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(auStack_558);
      lVar16 = 2;
      pcVar21 = (char *)auStack_120;
      do {
        lVar16 = lVar16 + -1;
        pcVar2 = pcVar21 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar18 = *(longlong **)(pcVar21 + -0x40);
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar19 = plVar18 + 1;
            lVar6 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar18 + 8))(plVar18,1);
              }
            }
          }
        }
        pcVar21 = pcVar2;
      } while (lVar16 != 0);
      plVar14 = (longlong *)plVar14[1];
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar18 = plVar14 + 1;
        lVar16 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      plVar14 = *(longlong **)(lVar15 + 8);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar18 = plVar14 + 1;
        lVar15 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      plVar14 = *(longlong **)(lVar12 + 8);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar18 = plVar14 + 1;
        lVar12 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      uVar13 = FUN_14161fb50(auStack_308,auStack_6c8);
      FMessageLog::Warning(uVar13,auStack_548,auStack_630);
      if (plStack_540 != (longlong *)0x0) {
        LOCK();
        plVar14 = plStack_540 + 1;
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_540)(plStack_540);
          LOCK();
          piVar1 = (int *)((longlong)plStack_540 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plStack_540 + 8))(plStack_540,1);
          }
        }
      }
      FMessageLog::~FMessageLog(auStack_308);
      if (plStack_628 != (longlong *)0x0) {
        LOCK();
        plVar14 = plStack_628 + 1;
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_628)(plStack_628);
          LOCK();
          piVar1 = (int *)((longlong)plStack_628 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plStack_628 + 8))(plStack_628,1);
          }
        }
      }
      if (plStack_3e8 != (longlong *)0x0) {
        LOCK();
        plVar14 = plStack_3e8 + 1;
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_3e8)(plStack_3e8);
          LOCK();
          piVar1 = (int *)((longlong)plStack_3e8 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plStack_3e8 + 8))(plStack_3e8,1);
          }
        }
      }
      alStack_578[0] = alStack_528[0];
      if (alStack_538[0] != 0) {
        FMemory::Free();
        alStack_578[0] = alStack_528[0];
      }
      goto LAB_14238333a;
    }
  }
  cVar7 = (**(code **)(*param_2 + 0x508))(param_2,plVar14,param_4);
  if (cVar7 == '\0') {
    return 0;
  }
  cVar7 = FUN_142341170(plVar14);
  if (((cVar7 == '\0') && (*(char *)((longlong)plVar14 + 0x24e) == '\0')) &&
     (*(char *)((longlong)param_2 + 0x24e) != '\0')) {
    alStack_708[0] = 0;
    alStack_708[1] = 0;
    FName::FName(auStack_6b8,&DAT_14505b27c,1);
    uVar13 = UObjectBaseUtility::GetPathName(plVar14,alStack_4d8,0);
    lVar12 = FText::FromString(auStack_2b8,uVar13);
    lStack_6c0 = lVar12;
    lVar15 = FText::FromString(auStack_2a0,alStack_708);
    uVar13 = UObjectBaseUtility::GetPathName(param_2,alStack_4e8,0);
    lVar16 = FText::FromString(auStack_288,uVar13);
    uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (auStack_3c0,
                        L"AttachTo: \'{0}\' is not static {1}, cannot attach \'{2}\' which is static to it. Aborting."
                        ,L"SceneComponent",L"NoStaticToDynamicWarning");
    puVar17 = (undefined8 *)FTextFormat::FTextFormat(auStack_368,uVar13);
    auStack_118[0] = 4;
    FText::FText(auStack_108,lVar16);
    uStack_f0 = 1;
    uStack_e8 = 4;
    FText::FText(auStack_d8,lVar15);
    uStack_c0 = 1;
    uStack_b8 = 4;
    FText::FText(auStack_a8,lVar12);
    puStack_738 = auStack_118;
    uStack_90 = 1;
    puStack_730 = auStack_88;
    uStack_6a8 = *puVar17;
    lStack_6a0 = puVar17[1];
    if (lStack_6a0 != 0) {
      LOCK();
      *(int *)(lStack_6a0 + 8) = *(int *)(lStack_6a0 + 8) + 1;
      UNLOCK();
    }
    puStack_518 = puStack_738;
    puStack_510 = puStack_730;
    uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(auStack_508,&puStack_518);
    uVar13 = FText::Format(auStack_3d8,&uStack_6a8,uVar13);
    FText::FText(auStack_618,uVar13);
    if (plStack_3d0 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_3d0 + 1;
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_3d0)(plStack_3d0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_3d0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_3d0 + 8))(plStack_3d0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (auStack_508);
    lVar12 = 3;
    pcVar21 = acStack_60;
    do {
      lVar12 = lVar12 + -1;
      pcVar2 = pcVar21 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar14 = *(longlong **)(pcVar21 + -0x40);
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar18 = plVar14 + 1;
          lVar6 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
      }
      pcVar21 = pcVar2;
    } while (lVar12 != 0);
    plVar14 = (longlong *)puVar17[1];
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar12 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    plVar14 = *(longlong **)(lVar16 + 8);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar12 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    plVar14 = *(longlong **)(lVar15 + 8);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar12 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    plVar14 = *(longlong **)(lStack_6c0 + 8);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar12 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    uVar13 = FUN_14161fb50(auStack_2e0,auStack_6b8);
    FMessageLog::Warning(uVar13,auStack_4f8,auStack_618);
    if (plStack_4f0 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_4f0 + 1;
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_4f0)(plStack_4f0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_4f0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_4f0 + 8))(plStack_4f0,1);
        }
      }
    }
    FMessageLog::~FMessageLog(auStack_2e0);
    if (plStack_610 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_610 + 1;
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_610)(plStack_610);
        LOCK();
        piVar1 = (int *)((longlong)plStack_610 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_610 + 8))(plStack_610,1);
        }
      }
    }
    if (plStack_3b8 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_3b8 + 1;
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_3b8)(plStack_3b8);
        LOCK();
        piVar1 = (int *)((longlong)plStack_3b8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_3b8 + 8))(plStack_3b8,1);
        }
      }
    }
    if (alStack_4e8[0] != 0) {
      FMemory::Free();
    }
    alStack_578[0] = alStack_708[0];
    if (alStack_4d8[0] != 0) {
      FMemory::Free();
      alStack_578[0] = alStack_708[0];
    }
    goto LAB_14238333a;
  }
  cVar7 = UObjectBaseUtility::IsTemplate(param_2,0x30);
  cVar8 = UObjectBaseUtility::IsTemplate(plVar14,0x30);
  if (cVar7 != cVar8) {
    UObjectBaseUtility::IsTemplate(param_2,0x30);
    return 0;
  }
  bVar4 = *(byte *)((longlong)plVar14 + 0x24d);
  *(byte *)((longlong)plVar14 + 0x24d) = bVar4 | 4;
  puVar17 = (undefined8 *)param_2[0x34];
  for (puVar22 = puVar17; puVar22 != puVar17 + (int)param_2[0x35]; puVar22 = puVar22 + 1) {
    if ((longlong *)*puVar22 == plVar14) {
      iVar11 = (int)((longlong)puVar22 - (longlong)puVar17 >> 3);
      goto LAB_142383ef7;
    }
  }
  iVar11 = -1;
LAB_142383ef7:
  if ((((DAT_146531d70 == 1) && ((*(byte *)((longlong)plVar14 + 0x24c) & 2) == 0)) &&
      ((*(byte *)((longlong)param_2 + 0x24c) & 2) != 0)) &&
     (*(byte *)((longlong)param_2 + 0x24c) = *(byte *)((longlong)param_2 + 0x24c) & 0xfd,
     param_2[0x32] != 0)) {
    FUN_142386620();
  }
  uStack_784 = *param_3 != '\0';
  uStack_781 = 1;
  uStack_783 = param_3[1] != '\0';
  uStack_782 = param_3[2] != '\0';
  if (((((cStack_787 == '\0') || ((*(byte *)(plVar14 + 0x17) & 1) != 0)) ||
       ((*param_3 != '\0' || ((param_3[1] != '\0' || (param_3[2] != '\0')))))) || (iVar11 != -1)) &&
     (((**(code **)(*plVar14 + 0x418))(plVar14,&uStack_784), -1 < iVar11 &&
      (iVar11 < (int)param_2[0x35])))) {
    lVar15 = param_2[0x34];
    if (*(longlong **)(lVar15 + (longlong)iVar11 * 8) == plVar14) {
      iVar20 = (int)param_2[0x35];
      iVar9 = (iVar20 - iVar11) + -1;
      if (iVar9 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar15 + (longlong)iVar11 * 8),
                   (void *)(lVar15 + (longlong)(iVar11 + 1) * 8),(longlong)iVar9 << 3);
        iVar20 = (int)param_2[0x35];
      }
      *(int *)(param_2 + 0x35) = iVar20 + -1;
    }
  }
  *(byte *)((longlong)plVar14 + 0x24d) = *(byte *)((longlong)plVar14 + 0x24d) & 0xfb;
  bStack_788 = bVar4 & 4;
  *(byte *)((longlong)plVar14 + 0x24d) = *(byte *)((longlong)plVar14 + 0x24d) | bStack_788;
  cVar7 = FUN_140a9e330(plVar14);
  if (cVar7 != '\0') {
    uStack_758 = 0;
    lVar15 = (**(code **)(*plVar14 + 0x6d0))(plVar14,0,1);
    if ((((lVar15 != 0) && ((*(byte *)(lVar15 + 0x10) & 8) != 0)) && (param_3[3] == '\0')) &&
       (((lVar15 = plVar14[0x24], lVar15 != 0 || (lVar15 = FUN_1423407b0(plVar14), lVar15 != 0)) &&
        ((cVar7 = UWorld::IsGameWorld(lVar15), cVar7 != '\0' &&
         ((*(char *)(lVar15 + 0x70d) == '\0' &&
          (((*(byte *)(plVar14[0x23] + 0x94) & 0x18) - 8 & 0xf7) == 0)))))))) {
      *(byte *)((longlong)plVar14 + 0x24d) = *(byte *)((longlong)plVar14 + 0x24d) | 4;
      (**(code **)(*plVar14 + 0x418))(plVar14,&uStack_784);
      *(byte *)((longlong)plVar14 + 0x24d) =
           *(byte *)((longlong)plVar14 + 0x24d) & 0xfb | bStack_788;
      if ((*param_3 != '\0') && ((param_3[1] != '\0' && (param_3[2] != '\0')))) {
        return 0;
      }
      pfVar3 = (float *)(plVar14 + 0x50);
      if (((*(float *)(plVar14 + 0x3f) != *pfVar3) ||
          (*(float *)((longlong)plVar14 + 0x1fc) != *(float *)((longlong)plVar14 + 0x284))) ||
         (*(float *)(plVar14 + 0x40) != *(float *)(plVar14 + 0x51))) {
        lVar12 = *(longlong *)*(undefined1 (*) [12])(plVar14 + 0x3f);
        fVar28 = (float)DAT_146af0860;
        fVar29 = DAT_146af0860._4_4_;
        fVar30 = DAT_146af0860._8_4_;
        auVar23._12_4_ = 0;
        auVar23._0_12_ = *(undefined1 (*) [12])(plVar14 + 0x3f);
        auVar23 = divps(auVar23,_DAT_146af0860);
        fVar33 = (float)lVar12 - (float)(int)auVar23._0_4_ * fVar28;
        fVar34 = (float)((ulonglong)lVar12 >> 0x20) - (float)(int)auVar23._4_4_ * fVar29;
        fVar36 = *(float *)(plVar14 + 0x40) - (float)(int)auVar23._8_4_ * fVar30;
        fVar33 = (float)(((uint)(fVar33 + fVar28) ^ (uint)fVar33) & -(uint)(0.0 <= fVar33) ^
                        (uint)(fVar33 + fVar28));
        fVar34 = (float)(((uint)(fVar34 + fVar29) ^ (uint)fVar34) & -(uint)(0.0 <= fVar34) ^
                        (uint)(fVar34 + fVar29));
        fVar36 = (float)(((uint)(fVar36 + fVar30) ^ (uint)fVar36) & -(uint)(0.0 <= fVar36) ^
                        (uint)(fVar36 + fVar30));
        uStack_760 = ((uint)(fVar36 - fVar30) ^ (uint)fVar36) &
                     -(uint)(fRam0000000146af0858 < fVar36) ^ (uint)fVar36;
        *(ulonglong *)pfVar3 =
             CONCAT44(((uint)(fVar34 - fVar29) ^ (uint)fVar34) &
                      -(uint)(fRam0000000146af0854 < fVar34) ^ (uint)fVar34,
                      ((uint)(fVar33 - fVar28) ^ (uint)fVar33) & -(uint)(_DAT_146af0850 < fVar33) ^
                      (uint)fVar33);
        *(uint *)(plVar14 + 0x51) = uStack_760;
        plVar18 = (longlong *)FRotator::Quaternion(pfVar3,auStack_3a8);
        lVar12 = plVar18[1];
        plVar14[0x4e] = *plVar18;
        plVar14[0x4f] = lVar12;
      }
      alStack_708[2] = plVar14[0x4e];
      lStack_6f0 = plVar14[0x4f];
      plStack_798 = alStack_708 + 2;
      uStack_790 = 0;
      uVar10 = FUN_14239b520(plVar14,param_2,param_4,0);
      if (*param_3 == '\0') {
        uStack_680 = (undefined4)plVar14[0x45];
        *(longlong *)((longlong)plVar14 + 0x1ec) = plVar14[0x44];
        *(undefined4 *)((longlong)plVar14 + 500) = uStack_680;
        uVar10 = uStack_680;
      }
      if (param_3[1] == '\0') {
        fStack_4c8 = *(float *)(plVar14 + 0x42);
        fStack_4c4 = *(float *)((longlong)plVar14 + 0x214);
        fStack_4c0 = *(float *)(plVar14 + 0x43);
        fStack_4bc = *(float *)((longlong)plVar14 + 0x21c);
        auVar24._4_4_ = -(uint)(*(float *)((longlong)plVar14 + 0x254) != fStack_4c4);
        auVar24._0_4_ = -(uint)(*(float *)(plVar14 + 0x4a) != fStack_4c8);
        auVar24._8_4_ = -(uint)(*(float *)(plVar14 + 0x4b) != fStack_4c0);
        auVar24._12_4_ = -(uint)(*(float *)((longlong)plVar14 + 0x25c) != fStack_4bc);
        iVar11 = movmskps(uVar10,auVar24);
        if (iVar11 != 0) {
          *(float *)(plVar14 + 0x4a) = fStack_4c8;
          *(float *)((longlong)plVar14 + 0x254) = fStack_4c4;
          *(float *)(plVar14 + 0x4b) = fStack_4c0;
          *(float *)((longlong)plVar14 + 0x25c) = fStack_4bc;
          plVar18 = (longlong *)FQuat::Rotator(&fStack_4c8,auStack_490);
          plVar14[0x4c] = *plVar18;
          *(int *)(plVar14 + 0x4d) = (int)plVar18[1];
        }
        plVar14[0x3f] = plVar14[0x4c];
        *(int *)(plVar14 + 0x40) = (int)plVar14[0x4d];
      }
      if (param_3[2] == '\0') {
        uStack_674 = (undefined4)plVar14[0x47];
        *(longlong *)((longlong)plVar14 + 0x204) = plVar14[0x46];
        *(undefined4 *)((longlong)plVar14 + 0x20c) = uStack_674;
      }
      if ((*(byte *)(plVar14 + 0x17) & 1) != 0) {
        (**(code **)(*plVar14 + 0x488))(plVar14,0,1,0);
        return 0;
      }
      return 0;
    }
  }
  FTickFunction::AddPrerequisite(plVar14 + 6,param_2,param_2 + 6);
  plVar14[0x32] = (longlong)param_2;
  plVar14[0x33] = param_4;
  (**(code **)(*plVar14 + 0x498))(plVar14);
  plVar18 = param_2 + 0x34;
  if (iVar11 == -1) {
    iVar11 = (int)param_2[0x35];
    *(int *)(param_2 + 0x35) = iVar11 + 1;
    if (*(int *)((longlong)param_2 + 0x1ac) < iVar11 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar18,iVar11);
    }
    *(longlong **)(*plVar18 + (longlong)iVar11 * 8) = plVar14;
  }
  else {
    TArray<USceneComponent_*,FDefaultAllocator>::InsertUninitialized(plVar18,iVar11,1);
    *(longlong **)(*plVar18 + (longlong)iVar11 * 8) = plVar14;
  }
  (**(code **)(*plVar14 + 0x38))(plVar14,param_2,1);
  if (((((*(byte *)(param_2 + 0x17) & 8) != 0) && (iVar11 = FUN_14233f450(param_2), iVar11 != 3)) ||
      ((cVar7 = FUN_1423411c0(param_2), cVar7 != '\0' &&
       (iVar11 = FUN_142340f30(param_2), iVar11 == 3)))) &&
     (((*(byte *)(plVar14 + 0x17) & 8) == 0 || (iVar11 = FUN_14233f450(plVar14), iVar11 == 3)))) {
    plStack_6b0 = plVar14;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2 + 0x36,&plStack_6b0);
  }
  (**(code **)(*(longlong *)plVar14[0x32] + 0x420))
            ((longlong *)plVar14[0x32],auStack_88,plVar14[0x33],0);
  uVar10 = FUN_14162bcf0(plVar14 + 0x42,&fStack_148,auStack_88);
  if (*param_3 == '\x01') {
    if ((*(byte *)((longlong)plVar14 + 0x24c) & 4) == 0) {
      uStack_710 = uStack_130;
    }
    else {
      uStack_138 = (undefined4)plVar14[0x44];
      uStack_134 = *(undefined4 *)((longlong)plVar14 + 0x224);
      uStack_130 = (undefined4)plVar14[0x45];
      uStack_668 = uStack_130;
    }
    *(ulonglong *)((longlong)plVar14 + 0x1ec) = CONCAT44(uStack_134,uStack_138);
    uVar10 = uStack_130;
LAB_14238449a:
    *(undefined4 *)((longlong)plVar14 + 500) = uVar10;
  }
  else if (*param_3 == '\x02') {
    *(undefined8 *)((longlong)plVar14 + 0x1ec) = _DAT_1468b5d90;
    uVar10 = DAT_1468b5d98;
    goto LAB_14238449a;
  }
  if (param_3[1] == '\x01') {
    if ((*(byte *)((longlong)plVar14 + 0x24c) & 8) == 0) {
      pfVar3 = (float *)(plVar14 + 0x4e);
      auVar26._4_4_ = -(uint)(*(float *)((longlong)plVar14 + 0x274) != fStack_144);
      auVar26._0_4_ = -(uint)(*pfVar3 != fStack_148);
      auVar26._8_4_ = -(uint)(*(float *)(plVar14 + 0x4f) != fStack_140);
      auVar26._12_4_ = -(uint)(*(float *)((longlong)plVar14 + 0x27c) != fStack_13c);
      iVar11 = movmskps(uVar10,auVar26);
      fStack_6e8 = fStack_148;
      fStack_6e4 = fStack_144;
      fStack_6e0 = fStack_140;
      fStack_6dc = fStack_13c;
      if (iVar11 != 0) {
        uStack_780 = 0x322bcc77;
        auVar27._0_4_ = fStack_148 * fStack_148 + fStack_140 * fStack_140;
        auVar27._4_4_ = fStack_144 * fStack_144 + fStack_13c * fStack_13c;
        auVar27._8_4_ = fStack_140 * fStack_140 + fStack_148 * fStack_148;
        auVar27._12_4_ = fStack_13c * fStack_13c + fStack_144 * fStack_144;
        fVar34 = auVar27._4_4_ + auVar27._0_4_;
        fVar36 = auVar27._8_4_ + auVar27._4_4_;
        fVar31 = auVar27._12_4_ + auVar27._8_4_;
        fVar32 = auVar27._0_4_ + auVar27._12_4_;
        auVar5._4_4_ = fVar36;
        auVar5._0_4_ = fVar34;
        auVar5._8_4_ = fVar31;
        auVar5._12_4_ = fVar32;
        auVar23 = rsqrtps(auVar27,auVar5);
        fVar28 = auVar23._0_4_;
        fVar29 = auVar23._4_4_;
        fVar30 = auVar23._8_4_;
        fVar33 = auVar23._12_4_;
        fVar28 = (_DAT_146af09a0 - fVar28 * fVar28 * fVar34 * _DAT_146af09a0) * fVar28 + fVar28;
        fVar29 = (fRam0000000146af09a4 - fVar29 * fVar29 * fVar36 * fRam0000000146af09a4) * fVar29 +
                 fVar29;
        fVar30 = (fRam0000000146af09a8 - fVar30 * fVar30 * fVar31 * fRam0000000146af09a8) * fVar30 +
                 fVar30;
        fVar33 = (fRam0000000146af09ac - fVar33 * fVar33 * fVar32 * fRam0000000146af09ac) * fVar33 +
                 fVar33;
        uVar35 = ((uint)(((fRam0000000146af09a4 - fVar29 * fVar29 * fVar36 * fRam0000000146af09a4) *
                          fVar29 + fVar29) * fStack_144) ^ uRam0000000146af0994) &
                 -(uint)(1e-08 <= fVar36) ^ uRam0000000146af0994;
        uVar37 = ((uint)(((fRam0000000146af09a8 - fVar30 * fVar30 * fVar31 * fRam0000000146af09a8) *
                          fVar30 + fVar30) * fStack_140) ^ uRam0000000146af0998) &
                 -(uint)(1e-08 <= fVar31) ^ uRam0000000146af0998;
        uVar38 = ((uint)(((fRam0000000146af09ac - fVar33 * fVar33 * fVar32 * fRam0000000146af09ac) *
                          fVar33 + fVar33) * fStack_13c) ^ uRam0000000146af099c) &
                 -(uint)(1e-08 <= fVar32) ^ uRam0000000146af099c;
        *pfVar3 = (float)(((uint)(((_DAT_146af09a0 - fVar28 * fVar28 * fVar34 * _DAT_146af09a0) *
                                   fVar28 + fVar28) * fStack_148) ^ _DAT_146af0990) &
                          -(uint)(1e-08 <= fVar34) ^ _DAT_146af0990);
        *(uint *)((longlong)plVar14 + 0x274) = uVar35;
        *(uint *)(plVar14 + 0x4f) = uVar37;
        *(uint *)((longlong)plVar14 + 0x27c) = uVar38;
        plVar18 = (longlong *)FQuat::Rotator(pfVar3,auStack_478);
        plVar14[0x50] = *plVar18;
        *(int *)(plVar14 + 0x51) = (int)plVar18[1];
      }
      plVar14[0x3f] = plVar14[0x50];
      uVar10 = (undefined4)plVar14[0x51];
    }
    else {
      fStack_4b8 = *(float *)(plVar14 + 0x42);
      fStack_4b4 = *(float *)((longlong)plVar14 + 0x214);
      fStack_4b0 = *(float *)(plVar14 + 0x43);
      fStack_4ac = *(float *)((longlong)plVar14 + 0x21c);
      auVar25._4_4_ = -(uint)(*(float *)((longlong)plVar14 + 0x254) != fStack_4b4);
      auVar25._0_4_ = -(uint)(*(float *)(plVar14 + 0x4a) != fStack_4b8);
      auVar25._8_4_ = -(uint)(*(float *)(plVar14 + 0x4b) != fStack_4b0);
      auVar25._12_4_ = -(uint)(*(float *)((longlong)plVar14 + 0x25c) != fStack_4ac);
      iVar11 = movmskps(uVar10,auVar25);
      if (iVar11 != 0) {
        *(float *)(plVar14 + 0x4a) = fStack_4b8;
        *(float *)((longlong)plVar14 + 0x254) = fStack_4b4;
        *(float *)(plVar14 + 0x4b) = fStack_4b0;
        *(float *)((longlong)plVar14 + 0x25c) = fStack_4ac;
        plVar18 = (longlong *)FQuat::Rotator(&fStack_4b8,auStack_484);
        plVar14[0x4c] = *plVar18;
        *(int *)(plVar14 + 0x4d) = (int)plVar18[1];
      }
      plVar14[0x3f] = plVar14[0x4c];
      uVar10 = (undefined4)plVar14[0x4d];
    }
LAB_14238462f:
    *(undefined4 *)(plVar14 + 0x40) = uVar10;
  }
  else if (param_3[1] == '\x02') {
    plVar14[0x3f] = DAT_1468b5da0;
    uVar10 = DAT_1468b5da8;
    goto LAB_14238462f;
  }
  if (param_3[2] == '\x01') {
    if ((*(byte *)((longlong)plVar14 + 0x24c) & 0x10) == 0) {
      uStack_650 = auStack_120[0];
    }
    else {
      uStack_128 = (undefined4)plVar14[0x46];
      uStack_124 = *(undefined4 *)((longlong)plVar14 + 0x234);
      auStack_120[0] = (undefined4)plVar14[0x47];
      uStack_65c = auStack_120[0];
    }
    uVar13 = CONCAT44(uStack_124,uStack_128);
  }
  else {
    if (param_3[2] != '\x02') goto LAB_1423846b0;
    uStack_710 = 0x3f800000;
    auStack_120[0] = 0x3f800000;
    uVar13 = 0x3f8000003f800000;
  }
  *(undefined8 *)((longlong)plVar14 + 0x204) = uVar13;
  *(undefined4 *)((longlong)plVar14 + 0x20c) = auStack_120[0];
LAB_1423846b0:
  (**(code **)(*(longlong *)plVar14[0x32] + 0x518))((longlong *)plVar14[0x32],plVar14);
  FUN_140942fb0(plVar14,0,1);
  if ((param_3[3] != '\0') && (cVar7 = FUN_140a9e330(plVar14), cVar7 != '\0')) {
    uStack_750 = 0;
    lVar15 = (**(code **)(*plVar14 + 0x6d0))(plVar14,0,1);
    if (lVar15 != 0) {
      (**(code **)(*plVar14 + 0x708))(plVar14,plVar14[0x32],plVar14[0x33],param_3[3]);
    }
  }
  plVar18 = *(longlong **)(plVar14[0x32] + 0x118);
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x6a0))(plVar18,plVar14);
  }
  if ((*(byte *)(plVar14 + 0x17) & 1) != 0) {
    (**(code **)(*plVar14 + 0x488))(plVar14,0,1,0);
  }
  (**(code **)(*plVar14 + 0x4a0))(plVar14);
  if (((((lVar12 != 0) && (*(char *)(lVar12 + 0x129) == '\x02')) &&
       ((*(byte *)(plVar14 + 0x17) & 1) != 0)) &&
      (((*(byte *)(lVar12 + 0x94) & 0x18) == 0x10 && (*(char *)(lVar12 + 0x128) == '\x03')))) &&
     (((*(byte *)(lVar12 + 0x92) & 0x40) != 0 && (*(longlong **)(lVar12 + 0x168) == plVar14)))) {
    FUN_14222c7e0(lVar12);
  }
  return 1;
}



// FUNCTION 142223300 AvoidCones body=728 status=ok
// SIG undefined AvoidCones(void)

undefined8 *
AvoidCones(undefined8 *param_1,longlong *param_2,float *param_3,undefined8 *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res10 [2];
  float local_a8;
  float fStack_a4;
  float local_a0;
  
  uVar4 = *param_4;
  uVar10 = 0;
  fVar5 = *(float *)(param_4 + 1);
  if (0 < param_5) {
    lVar6 = *param_2;
    fStack_a4 = (float)((ulonglong)uVar4 >> 0x20);
    local_a8 = (float)uVar4;
    uVar9 = uVar10;
    do {
      iVar8 = (int)uVar9;
      pfVar7 = (float *)((longlong)iVar8 * 0x20 + lVar6);
      fVar13 = (*pfVar7 * local_a8 + pfVar7[1] * fStack_a4 + pfVar7[2] * fVar5) - pfVar7[3];
      fVar11 = (pfVar7[5] * fStack_a4 + pfVar7[4] * local_a8 + pfVar7[6] * fVar5) - pfVar7[7];
      if ((0.0 < fVar13) && (0.0 < fVar11)) {
        fVar1 = *param_3;
        fVar2 = param_3[1];
        fVar3 = param_3[2];
        fVar14 = (*pfVar7 * fVar1 + pfVar7[1] * fVar2 + pfVar7[2] * fVar3) - pfVar7[3];
        fVar12 = (fVar1 * pfVar7[4] + fVar2 * pfVar7[5] + fVar3 * pfVar7[6]) - pfVar7[7];
        if (0.0 < fVar14) {
          if (0.0 < fVar12) {
            *param_1 = *(undefined8 *)param_3;
            *(float *)(param_1 + 1) = param_3[2];
            return param_1;
          }
          uVar10 = 1;
          local_res10[1] = fVar12 / (fVar12 - fVar11);
        }
        else {
          local_res10[0] = fVar14 / (fVar14 - fVar13);
          if (0.0 < fVar12) goto LAB_1422234cd;
          local_res10[1] = fVar12 / (fVar12 - fVar11);
          uVar10 = (ulonglong)(local_res10[0] < local_res10[1]);
        }
LAB_1422234cd:
        fVar11 = local_res10[uVar10];
        fVar13 = 1.0 - fVar11;
        local_a0 = fVar3 * fVar13 + fVar5 * fVar11;
        _local_a8 = CONCAT44(fVar2 * fVar13 + fStack_a4 * fVar11,fVar1 * fVar13 + local_a8 * fVar11)
        ;
        if (iVar8 != param_5 + -1) {
          FGenericPlatformMemory::MemswapGreaterThan8
                    ((longlong)iVar8 * 0x20 + lVar6,(longlong)param_5 * 0x20 + -0x20 + lVar6,0x20);
        }
        AvoidCones(param_1,param_2,param_3,&local_a8,param_5 + -1);
        return param_1;
      }
      uVar9 = (ulonglong)(iVar8 + 1U);
    } while ((int)(iVar8 + 1U) < param_5);
  }
  *param_1 = uVar4;
  *(float *)(param_1 + 1) = fVar5;
  return param_1;
}



// FUNCTION 1422235e0 BecomeViewTarget body=5 status=ok
// SIG undefined BecomeViewTarget(void)

void AActor::BecomeViewTarget(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStackX_8;
  
  lVar1 = *param_1;
  uStackX_8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b19bf0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStackX_8);
  return;
}



// FUNCTION 1422235f0 FUN_1422235f0 body=280 status=ok
// SIG undefined FUN_1422235f0(void)

void FUN_1422235f0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  uVar4 = FUN_1429a0270();
  lVar5 = UObjectBaseUtility::GetTypedOuter(param_1,uVar4);
  (**(code **)(*param_1 + 0x4d8))(param_1,0);
  if (lVar5 != 0) {
    iVar10 = *(int *)(lVar5 + 0xc);
    if (iVar10 < (int)DAT_1469e91c4) {
      uVar9 = iVar10 >> 0x1f & 0xffff;
      uVar2 = iVar10 + uVar9;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) {
      puVar1 = *(undefined8 **)(lVar5 + 0xa0);
      iVar10 = *(int *)(lVar5 + 0xa8);
      puVar7 = puVar1;
      if (puVar1 != puVar1 + iVar10) {
        while ((longlong *)*puVar7 != param_1) {
          puVar7 = puVar7 + 1;
          if (puVar7 == puVar1 + iVar10) {
            FUN_1417502d0(param_1);
            return;
          }
        }
        iVar3 = (int)((longlong)puVar7 - (longlong)puVar1 >> 3);
        if (iVar3 != -1) {
          iVar8 = (iVar10 - iVar3) + -1;
          if (0 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (puVar1 + iVar3,puVar1 + (iVar10 - iVar8),(longlong)iVar8 << 3);
            iVar10 = *(int *)(lVar5 + 0xa8);
          }
          *(int *)(lVar5 + 0xa8) = iVar10 + -1;
        }
      }
    }
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142223710 FUN_142223710 body=672 status=ok
// SIG undefined FUN_142223710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142223710(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  code *local_108;
  undefined1 *puStack_100;
  longlong local_f8;
  longlong local_f0 [24];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  (**(code **)(*param_1 + 0x3a0))(param_1,*(undefined4 *)((longlong)param_1 + 0xcc));
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  uVar6 = 0;
  if ((cVar2 == '\0') && ((*(byte *)((longlong)param_1 + 0x93) & 0x10) == 0)) {
    puStack_100 = local_118;
    local_118[0] = 0;
    local_108 = FUN_142224910;
    lVar3 = FUN_1415d8310(&local_108,&DAT_1465318e0);
    (**(code **)(*param_1 + 0x540))(param_1,1);
    *(byte *)((longlong)param_1 + 0x93) = *(byte *)((longlong)param_1 + 0x93) | 0x10;
    *(undefined8 *)(lVar3 + 0x18) = 0;
  }
  local_30 = (longlong *)0x0;
  local_28 = 0;
  FUN_140a4ca80(param_1,local_f0,0);
  if ((((*(byte *)(param_1 + 0x80) & 4) != 0) &&
      (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x970) != 0)) {
    FUN_1424a97c0(*(longlong *)(lVar3 + 0x970),param_1);
  }
  if ((*(byte *)(param_1 + 0x68) & 2) != 0) {
    plVar4 = local_f0;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    uVar7 = (longlong)(int)local_28 & 0x1fffffffffffffff;
    if (plVar4 + (int)local_28 < plVar4) {
      uVar7 = uVar6;
    }
    uVar5 = uVar6;
    if (uVar7 != 0) {
      do {
        local_108 = (code *)*plVar4;
        if (local_108[0x98] != (code)0x0) {
          FUN_14058c5a0(param_1 + 0x69,&local_f8,&local_108,0);
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar7);
    }
  }
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xef;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) | 8;
  plVar4 = local_f0;
  if (local_30 != (longlong *)0x0) {
    plVar4 = local_30;
  }
  uVar7 = (longlong)(int)local_28 & 0x1fffffffffffffff;
  if (plVar4 + (int)local_28 < plVar4) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if (((*(byte *)(plVar1 + 0x17) & 1) != 0) && ((*(byte *)(plVar1 + 0x19) & 0x20) == 0)) {
        FUN_14234b0f0(plVar1,1);
        (**(code **)(*plVar1 + 0x338))(plVar1);
      }
      plVar4 = plVar4 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  FUN_1428e03f0(param_1);
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xf7 | 0x10;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x81,0);
  if (local_30 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1422239b0 FUN_1422239b0 body=359 status=ok
// SIG undefined FUN_1422239b0(void)

void FUN_1422239b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  byte *param_5)

{
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_98 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_a0 = *(undefined4 *)(param_4 + 1);
  local_a8 = *param_4;
  local_88 = *(undefined4 *)(param_5 + 0x10);
  local_8c = *(undefined4 *)(param_5 + 0xc);
  local_98[0] = local_98[0] ^ (*param_5 ^ local_98[0]) & 3;
  local_94 = *(undefined4 *)(param_5 + 4);
  local_84 = *(undefined8 *)(param_5 + 0x14);
  local_90 = local_90 ^ (*(uint *)(param_5 + 8) ^ local_90) & 1;
  local_7c = *(undefined4 *)(param_5 + 0x1c);
  local_70 = *(undefined4 *)(param_5 + 0x28);
  local_64 = *(undefined4 *)(param_5 + 0x34);
  local_58 = *(undefined4 *)(param_5 + 0x40);
  local_4c = *(undefined4 *)(param_5 + 0x4c);
  local_40 = *(undefined4 *)(param_5 + 0x58);
  local_38 = *(undefined4 *)(param_5 + 0x60);
  local_34 = *(undefined4 *)(param_5 + 100);
  local_30 = *(undefined4 *)(param_5 + 0x68);
  local_78 = *(undefined8 *)(param_5 + 0x20);
  local_2c = *(undefined4 *)(param_5 + 0x6c);
  local_6c = *(undefined8 *)(param_5 + 0x2c);
  local_28 = *(undefined4 *)(param_5 + 0x70);
  local_60 = *(undefined8 *)(param_5 + 0x38);
  local_24 = *(undefined4 *)(param_5 + 0x74);
  local_54 = *(undefined8 *)(param_5 + 0x44);
  local_20 = *(undefined4 *)(param_5 + 0x78);
  local_18 = *(undefined8 *)(param_5 + 0x80);
  local_48 = *(undefined8 *)(param_5 + 0x50);
  local_10 = *(undefined8 *)(param_5 + 0x88);
  local_3c = *(undefined4 *)(param_5 + 0x5c);
  local_b8 = param_2;
  local_b0 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,&local_b8);
  return;
}



// FUNCTION 142223b20 FUN_142223b20 body=367 status=ok
// SIG undefined FUN_142223b20(void)

void FUN_142223b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,byte *param_6)

{
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  byte local_a0 [4];
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  _guard_xfg_dispatch_icall_nop(local_a0,0,0x90);
  local_b0 = *param_5;
  local_a8 = *(undefined4 *)(param_5 + 1);
  local_90 = *(undefined4 *)(param_6 + 0x10);
  local_94 = *(undefined4 *)(param_6 + 0xc);
  local_a0[0] = local_a0[0] ^ (*param_6 ^ local_a0[0]) & 3;
  local_8c = *(undefined8 *)(param_6 + 0x14);
  local_9c = *(undefined4 *)(param_6 + 4);
  local_80 = *(undefined8 *)(param_6 + 0x20);
  local_98 = local_98 ^ (*(uint *)(param_6 + 8) ^ local_98) & 1;
  local_84 = *(undefined4 *)(param_6 + 0x1c);
  local_78 = *(undefined4 *)(param_6 + 0x28);
  local_6c = *(undefined4 *)(param_6 + 0x34);
  local_60 = *(undefined4 *)(param_6 + 0x40);
  local_54 = *(undefined4 *)(param_6 + 0x4c);
  local_48 = *(undefined4 *)(param_6 + 0x58);
  local_40 = *(undefined4 *)(param_6 + 0x60);
  local_3c = *(undefined4 *)(param_6 + 100);
  local_38 = *(undefined4 *)(param_6 + 0x68);
  local_34 = *(undefined4 *)(param_6 + 0x6c);
  local_74 = *(undefined8 *)(param_6 + 0x2c);
  local_30 = *(undefined4 *)(param_6 + 0x70);
  local_68 = *(undefined8 *)(param_6 + 0x38);
  local_2c = *(undefined4 *)(param_6 + 0x74);
  local_5c = *(undefined8 *)(param_6 + 0x44);
  local_28 = *(undefined4 *)(param_6 + 0x78);
  local_20 = *(undefined8 *)(param_6 + 0x80);
  local_50 = *(undefined8 *)(param_6 + 0x50);
  local_18 = *(undefined8 *)(param_6 + 0x88);
  local_44 = *(undefined4 *)(param_6 + 0x5c);
  local_c8 = param_2;
  local_c0 = param_3;
  local_b8 = param_4;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,&local_c8);
  return;
}



// FUNCTION 142223c90 FUN_142223c90 body=253 status=ok
// SIG undefined FUN_142223c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142223c90(longlong *param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_128 [32];
  longlong local_108 [24];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if ((*(byte *)((longlong)param_1 + 0x92) & 1) != 0) {
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_14221ee40(param_1,local_108,0);
    plVar3 = local_108;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    plVar1 = plVar3 + (int)local_40;
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      plVar2 = (longlong *)*plVar3;
      if ((*(byte *)((longlong)plVar2 + 0xba) & 4) != 0) {
        (**(code **)(*plVar2 + 0x548))(plVar2,param_2,param_3);
        if (local_48 == (longlong *)0x0) {
          return;
        }
        FMemory::Free();
        return;
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  (**(code **)(*param_1 + 0x610))(param_1,param_3,param_3 + 0xc);
  return;
}



// FUNCTION 142223d90 FUN_142223d90 body=252 status=ok
// SIG undefined FUN_142223d90(void)

int FUN_142223d90(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int *piVar2;
  longlong lVar3;
  longlong local_res8;
  int local_res10 [2];
  int local_res18 [2];
  longlong *local_18;
  int *local_10;
  
  local_res10[0] = 0;
  local_res8 = param_1;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_2,local_res18,param_1);
  if (((local_res18[0] != -1) && (lVar3 = *param_2 + (longlong)local_res18[0] * 0x18, lVar3 != 0))
     && (piVar2 = (int *)(lVar3 + 8), piVar2 != (int *)0x0)) {
    return *piVar2;
  }
  if (param_1 != 0) {
    lVar3 = FUN_1429ff160();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (lVar3 = *(longlong *)(param_1 + 400), lVar3 != 0)) &&
       (*(longlong *)(lVar3 + 0x118) == *(longlong *)(local_res8 + 0x118))) {
      local_res10[0] = FUN_142223d90(lVar3,param_2);
      local_res10[0] = local_res10[0] + 1;
    }
  }
  local_18 = &local_res8;
  local_10 = local_res10;
  TSet<TTuple<FFlareResourceDescription_*,int>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,int_const_&>_>
            (param_2,local_res18,&local_18,0);
  return local_res10[0];
}



// FUNCTION 142223e90 FUN_142223e90 body=2674 status=ok
// SIG undefined FUN_142223e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142223e90(longlong param_1,float *param_2,char param_3)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 in_XMM2 [16];
  undefined1 auVar24 [16];
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
  undefined1 auStack_218 [32];
  float local_1f8;
  float fStack_1f4;
  undefined8 uStack_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  float fStack_1a8;
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
  longlong *local_158;
  undefined8 uStack_150;
  uint *local_148;
  uint uStack_140;
  float fStack_13c;
  float local_138;
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
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  *(undefined8 *)(param_2 + 3) = _DAT_1468b5d90;
  fVar32 = DAT_1468b5d98;
  param_2[5] = DAT_1468b5d98;
  *(longlong *)param_2 = *(longlong *)(param_2 + 3);
  param_2[2] = fVar32;
  *(undefined1 *)(param_2 + 6) = 0;
  if (*(longlong *)(param_1 + 0x168) == 0) {
    pfVar8 = (float *)&DAT_1468b5b70;
  }
  else {
    pfVar8 = (float *)(*(longlong *)(param_1 + 0x168) + 0x210);
  }
  auVar24 = *(undefined1 (*) [16])(pfVar8 + 8);
  fVar32 = auVar24._0_4_;
  fVar36 = auVar24._4_4_;
  fVar39 = auVar24._8_4_;
  fVar42 = auVar24._12_4_;
  auVar14._4_4_ = -(uint)(fRam0000000146aeea14 < (float)((uint)fVar36 & uRam0000000146aeea24));
  auVar14._0_4_ = -(uint)(_DAT_146aeea10 < (float)((uint)fVar32 & _DAT_146aeea20));
  auVar14._8_4_ = -(uint)(fRam0000000146aeea18 < (float)((uint)fVar39 & uRam0000000146aeea28));
  auVar14._12_4_ = -(uint)(fRam0000000146aeea1c < (float)((uint)fVar42 & uRam0000000146aeea2c));
  iVar7 = movmskps((int)pfVar8,auVar14);
  local_118 = _DAT_1468b5b80;
  fStack_114 = fRam00000001468b5b84;
  fStack_110 = fRam00000001468b5b88;
  fStack_10c = fRam00000001468b5b8c;
  fVar56 = _DAT_1468b5b70;
  fVar57 = fRam00000001468b5b74;
  fVar58 = fRam00000001468b5b78;
  fVar59 = fRam00000001468b5b7c;
  fVar23 = _DAT_1468b5b90;
  fVar25 = fRam00000001468b5b94;
  fVar26 = fRam00000001468b5b98;
  fVar27 = fRam00000001468b5b9c;
  if (iVar7 != 0) {
    fVar56 = *pfVar8 * _DAT_146aeea00;
    fVar57 = pfVar8[1] * fRam0000000146aeea04;
    fVar58 = pfVar8[2] * fRam0000000146aeea08;
    fVar59 = pfVar8[3] * fRam0000000146aeea0c;
    auVar24 = rcpps(in_XMM2,auVar24);
    fVar23 = auVar24._0_4_;
    fVar25 = auVar24._4_4_;
    fVar26 = auVar24._8_4_;
    fVar27 = auVar24._12_4_;
    fVar23 = (fVar23 + fVar23) - fVar32 * fVar23 * fVar23;
    fVar25 = (fVar25 + fVar25) - fVar36 * fVar25 * fVar25;
    fVar26 = (fVar26 + fVar26) - fVar39 * fVar26 * fVar26;
    fVar27 = (fVar27 + fVar27) - fVar42 * fVar27 * fVar27;
    fVar23 = (fVar23 + fVar23) - fVar32 * fVar23 * fVar23;
    fVar25 = (fVar25 + fVar25) - fVar36 * fVar25 * fVar25;
    fVar26 = (fVar26 + fVar26) - fVar39 * fVar26 * fVar26;
    fVar27 = (fVar27 + fVar27) - fVar42 * fVar27 * fVar27;
    fVar23 = (float)(((uint)fVar23 &
                      -(uint)((float)((uint)fVar32 & _DAT_146aeea20) <= _DAT_146aeea10) ^
                     (uint)fVar23) & _DAT_146aee970);
    fVar25 = (float)(((uint)fVar25 &
                      -(uint)((float)((uint)fVar36 & uRam0000000146aeea24) <= fRam0000000146aeea14)
                     ^ (uint)fVar25) & uRam0000000146aee974);
    fVar26 = (float)(((uint)fVar26 &
                      -(uint)((float)((uint)fVar39 & uRam0000000146aeea28) <= fRam0000000146aeea18)
                     ^ (uint)fVar26) & uRam0000000146aee978);
    fVar27 = (float)(((uint)fVar27 &
                      -(uint)((float)((uint)fVar42 & uRam0000000146aeea2c) <= fRam0000000146aeea1c)
                     ^ (uint)fVar27) & uRam0000000146aee97c);
    fVar49 = pfVar8[4] * fVar23;
    fVar50 = pfVar8[5] * fVar25;
    fVar51 = pfVar8[6] * fVar26;
    fVar52 = pfVar8[7] * fVar27;
    fVar32 = fVar51 * fVar57 - fVar50 * fVar58;
    fVar36 = fVar49 * fVar58 - fVar51 * fVar56;
    fVar39 = fVar50 * fVar56 - fVar49 * fVar57;
    fVar42 = fVar52 * fVar59 - fVar52 * fVar59;
    fVar32 = fVar32 + fVar32;
    fVar36 = fVar36 + fVar36;
    fVar39 = fVar39 + fVar39;
    fVar42 = fVar42 + fVar42;
    local_118 = (float)((uint)(0.0 - ((fVar39 * fVar57 - fVar36 * fVar58) + fVar32 * fVar59 + fVar49
                                     )) & _DAT_146aee970);
    fStack_114 = (float)((uint)(0.0 - ((fVar32 * fVar58 - fVar39 * fVar56) +
                                      fVar36 * fVar59 + fVar50)) & uRam0000000146aee974);
    fStack_110 = (float)((uint)(0.0 - ((fVar36 * fVar56 - fVar32 * fVar57) +
                                      fVar39 * fVar59 + fVar51)) & uRam0000000146aee978);
    fStack_10c = (float)((uint)(0.0 - ((fVar42 * fVar59 - fVar42 * fVar59) +
                                      fVar42 * fVar59 + fVar52)) & uRam0000000146aee97c);
  }
  plVar2 = (longlong *)(param_1 + 0x2b0);
  fStack_1f4 = 1.4013e-45;
  fVar32 = *(float *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_1f8 = 0.0;
  fStack_1e4 = 0.0;
  fStack_1e0 = 0.0;
  if (fVar32 != 0.0) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = *puVar13;
    fStack_1e0 = 0.0;
    local_1f8 = 0.0;
    while (uVar11 == 0) {
      lVar9 = (longlong)(int)local_1f8;
      fStack_1e0 = (float)((int)fStack_1e0 + 0x20);
      fVar36 = (float)((int)local_1f8 + 1);
      bVar4 = (int)(((int)((int)fVar32 - 1U) >> 0x1f & 0x1fU) + ((int)fVar32 - 1U)) >> 5 <=
              (int)local_1f8;
      local_1f8 = fVar36;
      if (bVar4) goto LAB_1422240f3;
      uVar11 = puVar13[lVar9 + 1];
    }
    fStack_1f4 = (float)(uVar11 - 1 & uVar11 ^ uVar11);
    iVar7 = 0x1f;
    if (fStack_1f4 != 0.0) {
      for (; (uint)fStack_1f4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (fStack_1f4 == 0.0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    fStack_1e4 = (float)(((int)fStack_1e0 - iVar7) + 0x1f);
    if ((int)fVar32 < (int)fStack_1e4) {
LAB_1422240f3:
      fStack_1e4 = fVar32;
    }
  }
  fVar36 = *(float *)(param_1 + 0x2d8);
  uStack_1b0 = CONCAT44(fStack_1e4,0xffffffff);
  uStack_1c0 = CONCAT44(fStack_1f4,local_1f8);
  local_1e8 = (float)(-1 << (SUB41(fVar36,0) & 0x1f));
  uVar11 = (uint)fVar36 & 0xffffffe0;
  fStack_1a8 = fStack_1e0;
  local_138 = fStack_1e0;
  uStack_140 = 0xffffffff;
  fStack_13c = fStack_1e4;
  uStack_1f0 = puVar1;
  fStack_1e4 = fVar36;
  local_1c8 = plVar2;
  uStack_1b8 = puVar1;
  local_158 = plVar2;
  uStack_150 = uStack_1c0;
  local_148 = puVar1;
  if (fVar36 != fVar32) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = puVar13[(int)fVar36 >> 5] & (uint)local_1e8;
    iVar7 = (int)fVar36 >> 5;
    while (uVar12 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)(((int)((int)fVar32 - 1U) >> 0x1f & 0x1fU) + ((int)fVar32 - 1U)) >> 5 <= iVar7)
      goto LAB_1422241d2;
      uVar12 = puVar13[(longlong)iVar7 + 1];
      local_1e8 = -NAN;
      iVar7 = iVar7 + 1;
    }
    uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar7 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    fStack_1e4 = (float)((uVar11 - iVar7) + 0x1f);
    fVar36 = fStack_1e4;
    if ((int)fVar32 < (int)fStack_1e4) {
LAB_1422241d2:
      fStack_1e4 = fVar32;
      fVar36 = fVar32;
    }
  }
  do {
    fVar49 = fStack_10c;
    fVar42 = fStack_110;
    fVar39 = fStack_114;
    fVar32 = local_118;
    if ((fStack_13c == fVar36) && (local_148 == puVar1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && (local_158 == plVar2)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return param_2;
    }
    plVar3 = *(longlong **)(*local_158 + (longlong)(int)fStack_13c * 0x10);
    if (plVar3 != (longlong *)0x0) {
      lVar10 = FUN_1429f11d0();
      iVar7 = *(int *)(lVar10 + 0x90);
      lVar9 = (longlong)iVar7;
      if ((*(int *)(plVar3[2] + 0x90) < iVar7) ||
         (lVar9 = *(longlong *)(plVar3[2] + 0x88),
         *(longlong *)(lVar9 + (longlong)iVar7 * 8) != lVar10 + 0x88)) {
        uVar11 = (uint)lVar9 & 0xffffff00;
      }
      else {
        uVar11 = (uint)CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
      }
      if (((char)uVar11 != '\0') && ((*(byte *)(plVar3 + 0x17) & 1) != 0)) {
        if (param_3 == '\0') {
          uVar11 = (**(code **)(*plVar3 + 0x4e8))(plVar3);
          if (uVar11 == 0) goto LAB_14222486b;
        }
        fVar41 = fRam0000000146aee968;
        fVar38 = fRam0000000146aee964;
        fVar35 = _DAT_146aee960;
        auVar24 = *(undefined1 (*) [16])(plVar3 + 0x46);
        fVar50 = auVar24._0_4_;
        fVar51 = auVar24._4_4_;
        fVar52 = auVar24._8_4_;
        local_108 = 0.0;
        fStack_104 = 0.0;
        fStack_100 = 0.0;
        fStack_fc = fRam0000000146aee96c;
        local_e8 = (float)((uint)_DAT_146aee960 & _DAT_146aee970);
        fStack_e4 = (float)((uint)fRam0000000146aee964 & uRam0000000146aee974);
        fStack_e0 = (float)((uint)fRam0000000146aee968 & uRam0000000146aee978);
        fStack_dc = (float)((uint)fRam0000000146aee96c & uRam0000000146aee97c);
        auVar6._4_4_ = fVar25;
        auVar6._0_4_ = fVar23;
        auVar6._8_4_ = fVar26;
        auVar6._12_4_ = fVar27;
        auVar14 = minps(auVar24,auVar6);
        local_1c8._0_4_ = _DAT_146aee9f0;
        local_1c8._0_4_ = _DAT_146aee9f0;
        local_1c8._4_4_ = fRam0000000146aee9f4;
        uStack_1c0 = CONCAT44(fRam0000000146aee9fc,fRam0000000146aee9f8);
        auVar15._4_4_ = -(uint)(auVar14._4_4_ < fRam0000000146aee9f4);
        auVar15._0_4_ = -(uint)(auVar14._0_4_ < _DAT_146aee9f0);
        auVar15._8_4_ = -(uint)(auVar14._8_4_ < fRam0000000146aee9f8);
        auVar15._12_4_ = -(uint)(auVar14._12_4_ < fRam0000000146aee9fc);
        iVar7 = movmskps(uVar11,auVar15);
        _local_f8 = ZEXT816(0);
        if (iVar7 == 0) {
          fVar35 = *(float *)(plVar3 + 0x42);
          fVar38 = *(float *)((longlong)plVar3 + 0x214);
          fVar41 = *(float *)(plVar3 + 0x43);
          fVar18 = *(float *)((longlong)plVar3 + 0x21c);
          fVar20 = *(float *)(plVar3 + 0x44) * fVar23;
          fVar28 = *(float *)((longlong)plVar3 + 0x224) * fVar25;
          fVar16 = *(float *)(plVar3 + 0x45) * fVar26;
          fVar19 = *(float *)((longlong)plVar3 + 0x22c) * fVar27;
          local_108 = fVar56 * fVar18 * _DAT_146aee9b0 + fVar59 * fVar35 +
                      fVar57 * fVar41 * _DAT_146aee9a0 + fVar58 * fVar38 * _DAT_146aee990;
          fStack_104 = fVar56 * fVar41 * fRam0000000146aee9b4 + fVar59 * fVar38 +
                       fVar57 * fVar18 * fRam0000000146aee9a4 +
                       fVar58 * fVar35 * fRam0000000146aee994;
          fStack_100 = fVar56 * fVar38 * fRam0000000146aee9b8 + fVar59 * fVar41 +
                       fVar57 * fVar35 * fRam0000000146aee9a8 +
                       fVar58 * fVar18 * fRam0000000146aee998;
          fStack_fc = fVar56 * fVar35 * fRam0000000146aee9bc + fVar59 * fVar18 +
                      fVar57 * fVar38 * fRam0000000146aee9ac +
                      fVar58 * fVar41 * fRam0000000146aee99c;
          fVar35 = fVar16 * fVar57 - fVar28 * fVar58;
          fVar38 = fVar20 * fVar58 - fVar16 * fVar56;
          fVar41 = fVar28 * fVar56 - fVar20 * fVar57;
          fVar18 = fVar19 * fVar59 - fVar19 * fVar59;
          fVar35 = fVar35 + fVar35;
          fVar38 = fVar38 + fVar38;
          fVar41 = fVar41 + fVar41;
          fVar18 = fVar18 + fVar18;
          local_f8._4_4_ = (fVar35 * fVar58 - fVar41 * fVar56) + fVar59 * fVar38 + fVar28 + fVar39;
          local_f8._0_4_ = (fVar41 * fVar57 - fVar38 * fVar58) + fVar59 * fVar35 + fVar20 + fVar32;
          fStack_f0 = (fVar38 * fVar56 - fVar35 * fVar57) + fVar59 * fVar41 + fVar16 + fVar42;
          fStack_ec = (fVar18 * fVar59 - fVar18 * fVar59) + fVar59 * fVar18 + fVar19 + fVar49;
        }
        else {
          fVar18 = fVar57 + fVar57;
          fVar20 = fVar58 + fVar58;
          fVar49 = fVar59 * (fVar56 + fVar56);
          fVar28 = (fVar56 + fVar56) * fVar56;
          fVar53 = (fVar59 * fVar20 + fVar56 * fVar18) * fVar23;
          fVar54 = (fVar49 + fVar57 * fVar20) * fVar25;
          fVar55 = (fVar59 * fVar18 + fVar56 * fVar20) * fVar26;
          fVar33 = fVar25 * (fVar56 * fVar18 - fVar59 * fVar20);
          fVar37 = fVar26 * (fVar57 * fVar20 - fVar49);
          fVar40 = fVar23 * (fVar56 * fVar20 - fVar59 * fVar18);
          fVar16 = (float)((uint)((_DAT_146aee960 - (fVar20 * fVar58 + fVar18 * fVar57)) * fVar23) &
                          _DAT_146aee970);
          fVar19 = (float)((uint)((fRam0000000146aee964 - (fVar20 * fVar58 + fVar28)) * fVar25) &
                          uRam0000000146aee974);
          fVar21 = (float)((uint)((fRam0000000146aee968 - (fVar18 * fVar57 + fVar28)) * fVar26) &
                          uRam0000000146aee978);
          fVar22 = (float)((uint)((fRam0000000146aee96c - (fVar28 + fVar28)) * fVar27) &
                          uRam0000000146aee97c);
          fVar49 = *(float *)(plVar3 + 0x42);
          fVar18 = *(float *)((longlong)plVar3 + 0x214);
          fVar20 = *(float *)(plVar3 + 0x43);
          fVar28 = *(float *)((longlong)plVar3 + 0x21c);
          fVar29 = fVar18 + fVar18;
          fVar31 = fVar20 + fVar20;
          fVar34 = fVar49 * (fVar49 + fVar49);
          fVar30 = (fVar49 + fVar49) * fVar28;
          fVar46 = (fVar31 * fVar28 + fVar29 * fVar49) * fVar50;
          fVar47 = (fVar30 + fVar31 * fVar18) * fVar51;
          fVar48 = (fVar29 * fVar28 + fVar31 * fVar49) * fVar52;
          fVar43 = fVar51 * (fVar29 * fVar49 - fVar31 * fVar28);
          fVar44 = fVar52 * (fVar31 * fVar18 - fVar30);
          fVar45 = fVar50 * (fVar31 * fVar49 - fVar29 * fVar28);
          fVar28 = (float)((uint)((_DAT_146aee960 - (fVar20 * fVar31 + fVar18 * fVar29)) * fVar50) &
                          _DAT_146aee970);
          fVar30 = (float)((uint)((fRam0000000146aee964 - (fVar20 * fVar31 + fVar34)) * fVar51) &
                          uRam0000000146aee974);
          fVar29 = (float)((uint)((fRam0000000146aee968 - (fVar18 * fVar29 + fVar34)) * fVar52) &
                          uRam0000000146aee978);
          fVar31 = (float)((uint)((fRam0000000146aee96c - (fVar34 + fVar34)) * auVar24._12_4_) &
                          uRam0000000146aee97c);
          fVar49 = *(float *)(plVar3 + 0x44);
          fVar18 = *(float *)((longlong)plVar3 + 0x224);
          fVar20 = *(float *)(plVar3 + 0x45);
          local_198 = fVar46 * fVar33 + fVar28 * fVar16 + fVar45 * fVar55 + fVar31 * fVar32;
          fStack_194 = fVar46 * fVar19 + fVar28 * fVar53 + fVar45 * fVar37 + fVar31 * fVar39;
          fStack_190 = fVar46 * fVar54 + fVar28 * fVar40 + fVar45 * fVar21 + fVar31 * fVar42;
          fStack_18c = fVar46 * fVar22 + fVar28 * fVar22 + fVar45 * fVar22 +
                       fVar31 * fRam0000000146aee96c;
          local_188 = fVar30 * fVar33 + fVar43 * fVar16 + fVar47 * fVar55 + fVar31 * fVar32;
          fStack_184 = fVar30 * fVar19 + fVar43 * fVar53 + fVar47 * fVar37 + fVar31 * fVar39;
          fStack_180 = fVar30 * fVar54 + fVar43 * fVar40 + fVar47 * fVar21 + fVar31 * fVar42;
          fStack_17c = fVar30 * fVar22 + fVar43 * fVar22 + fVar47 * fVar22 +
                       fVar31 * fRam0000000146aee96c;
          local_178 = fVar44 * fVar33 + fVar48 * fVar16 + fVar29 * fVar55 + fVar31 * fVar32;
          fStack_174 = fVar44 * fVar19 + fVar48 * fVar53 + fVar29 * fVar37 + fVar31 * fVar39;
          fStack_170 = fVar44 * fVar54 + fVar48 * fVar40 + fVar29 * fVar21 + fVar31 * fVar42;
          fStack_16c = fVar44 * fVar22 + fVar48 * fVar22 + fVar29 * fVar22 +
                       fVar31 * fRam0000000146aee96c;
          local_168 = fVar18 * fVar33 + fVar49 * fVar16 + fVar20 * fVar55 +
                      fRam0000000146aee96c * fVar32;
          fStack_164 = fVar18 * fVar19 + fVar49 * fVar53 + fVar20 * fVar37 +
                       fRam0000000146aee96c * fVar39;
          fStack_160 = fVar18 * fVar54 + fVar49 * fVar40 + fVar20 * fVar21 +
                       fRam0000000146aee96c * fVar42;
          fStack_15c = fVar18 * fVar22 + fVar49 * fVar22 + fVar20 * fVar22 +
                       fRam0000000146aee96c * fRam0000000146aee96c;
          FMatrix::RemoveScaling(&local_198);
          fVar32 = (float)(-(uint)((float)local_1c8 <= fVar50 * fVar23) &
                           (_DAT_146aee9e0 ^ (uint)fVar35) ^ _DAT_146aee9e0);
          fVar39 = (float)(-(uint)(local_1c8._4_4_ <= fVar51 * fVar25) &
                           (uRam0000000146aee9e4 ^ (uint)fVar38) ^ uRam0000000146aee9e4);
          fVar42 = (float)(-(uint)((float)uStack_1c0 <= fVar52 * fVar26) &
                           (uRam0000000146aee9e8 ^ (uint)fVar41) ^ uRam0000000146aee9e8);
          local_198 = local_198 * fVar32;
          fStack_194 = fStack_194 * fVar32;
          fStack_190 = fStack_190 * fVar32;
          fStack_180 = fStack_180 * fVar39;
          fStack_184 = fStack_184 * fVar39;
          local_188 = local_188 * fVar39;
          fStack_170 = fStack_170 * fVar42;
          local_178 = local_178 * fVar42;
          fStack_174 = fStack_174 * fVar42;
          FQuat::FQuat(&local_128,&local_198);
          local_1d8 = 0x322bcc77;
          auVar17._0_4_ = local_128 * local_128 + fStack_120 * fStack_120;
          auVar17._4_4_ = fStack_124 * fStack_124 + fStack_11c * fStack_11c;
          auVar17._8_4_ = fStack_120 * fStack_120 + local_128 * local_128;
          auVar17._12_4_ = fStack_11c * fStack_11c + fStack_124 * fStack_124;
          fVar35 = auVar17._4_4_ + auVar17._0_4_;
          fVar38 = auVar17._8_4_ + auVar17._4_4_;
          fVar41 = auVar17._12_4_ + auVar17._8_4_;
          fVar18 = auVar17._0_4_ + auVar17._12_4_;
          auVar5._4_4_ = fVar38;
          auVar5._0_4_ = fVar35;
          auVar5._8_4_ = fVar41;
          auVar5._12_4_ = fVar18;
          auVar14 = rsqrtps(auVar17,auVar5);
          fVar32 = auVar14._0_4_;
          fVar39 = auVar14._4_4_;
          fVar42 = auVar14._8_4_;
          fVar49 = auVar14._12_4_;
          fVar32 = (_DAT_146aee9d0 - fVar32 * fVar32 * fVar35 * _DAT_146aee9d0) * fVar32 + fVar32;
          fVar39 = (fRam0000000146aee9d4 - fVar39 * fVar39 * fVar38 * fRam0000000146aee9d4) * fVar39
                   + fVar39;
          fVar42 = (fRam0000000146aee9d8 - fVar42 * fVar42 * fVar41 * fRam0000000146aee9d8) * fVar42
                   + fVar42;
          fVar49 = (fRam0000000146aee9dc - fVar49 * fVar49 * fVar18 * fRam0000000146aee9dc) * fVar49
                   + fVar49;
          local_f8._4_4_ = fStack_164;
          local_f8._0_4_ = local_168;
          fStack_f0 = fStack_160;
          local_128 = (float)(((uint)(((_DAT_146aee9d0 - fVar32 * fVar32 * fVar35 * _DAT_146aee9d0)
                                       * fVar32 + fVar32) * local_128) ^ _DAT_146aee9c0) &
                              -(uint)(1e-08 <= fVar35) ^ _DAT_146aee9c0);
          fStack_124 = (float)(((uint)(((fRam0000000146aee9d4 -
                                        fVar39 * fVar39 * fVar38 * fRam0000000146aee9d4) * fVar39 +
                                       fVar39) * fStack_124) ^ uRam0000000146aee9c4) &
                               -(uint)(1e-08 <= fVar38) ^ uRam0000000146aee9c4);
          fStack_120 = (float)(((uint)(((fRam0000000146aee9d8 -
                                        fVar42 * fVar42 * fVar41 * fRam0000000146aee9d8) * fVar42 +
                                       fVar42) * fStack_120) ^ uRam0000000146aee9c8) &
                               -(uint)(1e-08 <= fVar41) ^ uRam0000000146aee9c8);
          fStack_11c = (float)(((uint)(((fRam0000000146aee9dc -
                                        fVar49 * fVar49 * fVar18 * fRam0000000146aee9dc) * fVar49 +
                                       fVar49) * fStack_11c) ^ uRam0000000146aee9cc) &
                               -(uint)(1e-08 <= fVar18) ^ uRam0000000146aee9cc);
          fStack_ec = 0.0;
          local_108 = local_128;
          fStack_104 = fStack_124;
          fStack_100 = fStack_120;
          fStack_fc = fStack_11c;
        }
        fStack_dc = auVar24._12_4_ * fVar27;
        fStack_e0 = fVar52 * fVar26;
        fStack_e4 = fVar51 * fVar25;
        local_e8 = fVar50 * fVar23;
        (**(code **)(*plVar3 + 0x4a8))(plVar3,&local_1f8,&local_108);
        fVar51 = fStack_1f4 + local_1e8;
        fVar49 = (float)uStack_1f0 + fStack_1e4;
        fVar32 = fStack_1f4 - local_1e8;
        fVar39 = (float)uStack_1f0 - fStack_1e4;
        uStack_1b0 = CONCAT71(uStack_1b0._1_7_,1);
        fVar42 = local_1f8 + uStack_1f0._4_4_;
        fVar50 = local_1f8 - uStack_1f0._4_4_;
        uStack_1b8 = (uint *)CONCAT44(fVar49,fVar51);
        local_1c8 = (longlong *)CONCAT44(fVar32,fVar50);
        uStack_1c0 = CONCAT44(fVar42,fVar39);
        if (*(char *)(param_2 + 6) == '\0') {
          *(longlong **)param_2 = local_1c8;
          *(longlong *)(param_2 + 2) = uStack_1c0;
          param_2[4] = fVar51;
          param_2[5] = fVar49;
          param_2[6] = (float)uStack_1b0;
        }
        else {
          if (param_2[1] <= fVar32) {
            fVar32 = param_2[1];
          }
          if (param_2[2] <= fVar39) {
            fVar39 = param_2[2];
          }
          if (fVar42 <= param_2[3]) {
            fVar42 = param_2[3];
          }
          if (fVar49 <= param_2[5]) {
            fVar49 = param_2[5];
          }
          fVar52 = *param_2;
          if (fVar50 <= *param_2) {
            fVar52 = fVar50;
          }
          param_2[1] = fVar32;
          param_2[2] = fVar39;
          param_2[3] = fVar42;
          param_2[5] = fVar49;
          *param_2 = fVar52;
          fVar32 = param_2[4];
          if (param_2[4] <= fVar51) {
            fVar32 = fVar51;
          }
          param_2[4] = fVar32;
        }
      }
    }
LAB_14222486b:
    uStack_140 = uStack_140 & ~uStack_150._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_150);
  } while( true );
}



// FUNCTION 142224910 FUN_142224910 body=84 status=ok
// SIG undefined FUN_142224910(void)

undefined8 * FUN_142224910(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_1440104d0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR_FUN_144ca0248;
    puVar2[3] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1422249e0 Call body=30 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_d9682d1287380040cd80883dc908dd76>,void___cdecl(void)>::Call
               (undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FSubtitleManager::GetSubtitleManager();
  FUN_142856960(uVar1,*param_1);
  return;
}



// FUNCTION 142224a10 FUN_142224a10 body=477 status=ok
// SIG undefined FUN_142224a10(void)

void FUN_142224a10(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_2 == 0) {
    return;
  }
  puVar8 = (undefined8 *)FUN_1425bd720(param_2,local_38,param_1);
  plVar13 = (longlong *)*puVar8;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if ((char)param_1[0x25] != '\x03') {
    if ((char)param_1[0x25] != '\x02') goto LAB_142224ac0;
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar6 = FUN_1428cfb20(uVar9);
    if (cVar6 == '\0') goto LAB_142224ac0;
  }
  (**(code **)(*param_1 + 0x2d8))(param_1,plVar13);
LAB_142224ac0:
  cVar6 = (**(code **)(*plVar13 + 0x10))(plVar13);
  if (cVar6 != '\0') {
    (**(code **)(*param_1 + 0x2e0))(param_1,plVar13);
  }
  uVar15 = 0;
  plVar13 = (longlong *)param_1[0x60];
  uVar14 = (longlong)(int)param_1[0x61] & 0x1fffffffffffffff;
  if (plVar13 + (int)param_1[0x61] < plVar13) {
    uVar14 = uVar15;
  }
  uVar12 = uVar15;
  if (uVar14 != 0) {
    do {
      plVar4 = (longlong *)*plVar13;
      if (plVar4 != (longlong *)0x0) {
        uVar7 = *(uint *)((longlong)plVar4 + 0xc);
        uVar10 = uVar15;
        if ((int)uVar7 < (int)DAT_1469e91c4) {
          uVar11 = uVar7 & 0xffff;
          if ((int)uVar7 < 0) {
            uVar7 = uVar7 + 0xffff;
            uVar11 = uVar11 - 0x10000;
          }
          uVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                   (longlong)(int)uVar11 * 0x18;
        }
        if ((*(uint *)(uVar10 + 8) >> 0x1d & 1) == 0) {
          puVar8 = (undefined8 *)FUN_1425bd720(param_2,local_28,plVar4);
          (**(code **)(*plVar4 + 0x2b8))(plVar4,*puVar8);
          plVar4 = local_20;
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_20 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_20)(local_20);
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
      }
      plVar13 = plVar13 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar14);
  }
  return;
}



// FUNCTION 142224bf0 FUN_142224bf0 body=168 status=ok
// SIG undefined FUN_142224bf0(void)

bool FUN_142224bf0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = param_1[0x24];
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 == 0x11a) {
    if (lVar2 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(lVar2 + 0x38);
    }
  }
  else {
    plVar3 = (longlong *)FUN_142873bb0(DAT_146b17150,lVar2,lVar1);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2e8))(plVar3,param_1,param_2,param_3,param_4,param_5,0);
  }
  return plVar3 != (longlong *)0x0;
}



// FUNCTION 142224cb0 FUN_142224cb0 body=763 status=ok
// SIG undefined FUN_142224cb0(void)

longlong FUN_142224cb0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  uStack_94 = 1;
  uVar2 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  uStack_84 = 0;
  iStack_80 = 0;
  local_98 = 0;
  lVar13 = 1;
  if (uVar2 != 0) {
    puVar15 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar3 = *puVar15;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar12 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar5) goto LAB_142224d8c;
      uVar3 = puVar15[lVar12 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar9 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (iStack_80 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142224d8c:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x2d8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar14 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar15 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar11 = puVar15[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar9 = (int)uVar3 >> 5;
    while (uVar11 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_142224e52;
      uVar11 = puVar15[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar9 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar14 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142224e52:
      uStack_84 = uVar2;
    }
  }
  lVar12 = 0;
  local_68 = puVar1;
  local_50 = (longlong *)(param_1 + 0x2b0);
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)(int)uStack_5c * 0x10);
    if ((lVar8 != 0) &&
       ((cVar6 = UObjectBaseUtility::IsTemplate(lVar8,0x30), cVar6 != '\0' &&
        (cVar6 = UObjectBaseUtility::IsTemplate(param_1,0x30), cVar6 == '\0')))) {
      lVar13 = lVar12;
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x328)) {
    do {
      lVar8 = *(longlong *)(lVar12 + *(longlong *)(param_1 + 800));
      if (lVar8 != 0) {
        lVar10 = 0;
        if (*(longlong *)(lVar8 + 0x20) == param_1) {
          lVar10 = lVar13;
        }
        lVar13 = lVar10;
        cVar6 = UObjectBaseUtility::IsTemplate(lVar8,0x30);
        if ((cVar6 != '\0') && (cVar6 = UObjectBaseUtility::IsTemplate(param_1,0x30), cVar6 == '\0')
           ) {
          lVar13 = 0;
        }
        lVar7 = FUN_14178ca30(lVar8);
        plVar4 = *(longlong **)(lVar8 + 0x10);
        lVar10 = plVar4[0x1f];
        if (lVar10 == 0) {
          (**(code **)(*plVar4 + 0x368))(plVar4);
          lVar10 = plVar4[0x1f];
        }
        if ((lVar7 != lVar10) &&
           (lVar8 = UClass::GetDefaultSubobjectByName
                              (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(lVar8 + 0x18)),
           lVar7 != lVar8)) {
          lVar13 = 0;
        }
      }
      iVar9 = iVar9 + 1;
      lVar12 = lVar12 + 8;
    } while (iVar9 < *(int *)(param_1 + 0x328));
  }
  return lVar13;
}



// FUNCTION 142224fb0 FUN_142224fb0 body=1146 status=ok
// SIG undefined FUN_142224fb0(void)

void FUN_142224fb0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  wchar_t *pwVar18;
  uint uVar19;
  wchar_t *pwVar20;
  longlong local_res10;
  longlong *local_res18;
  wchar_t *local_68;
  uint local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  
  if (((int)param_2 == 0) && ((int)((ulonglong)param_2 >> 0x20) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return;
  }
  uVar5 = UObject::GetPrivateStaticClass();
  pwVar12 = (wchar_t *)0x0;
  uVar4 = 0;
  uVar14 = 0;
  uVar19 = 0;
  plVar6 = (longlong *)FUN_141799680(uVar5,param_1,param_2,0,0,0,0);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  local_res18 = plVar6;
  lVar7 = FUN_1428e7a40();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  if (*(char *)((longlong)plVar6 + 0xca) != '\x03') {
    return;
  }
  local_res10 = plVar6[3];
  FName::ToString(&local_res10,&local_68);
  uVar13 = local_60 - 1;
  if (local_60 == 0) {
    uVar13 = uVar19;
  }
  iVar17 = uVar13 - 1;
  lVar7 = (longlong)iVar17;
  if (-1 < iVar17) {
    do {
      iVar2 = iswdigit(local_68[lVar7]);
      if (iVar2 == 0) break;
      iVar17 = iVar17 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  if (iVar17 < 0) goto LAB_142225409;
  uVar13 = local_60 - 1;
  if (local_60 == 0) {
    uVar13 = uVar19;
  }
  pwVar18 = pwVar12;
  if (iVar17 < (int)(uVar13 - 1)) {
    if (local_60 == 0) {
      pwVar18 = L"";
      uVar13 = uVar19;
    }
    else {
      pwVar18 = local_68;
      uVar13 = local_60 - 1;
    }
    uVar3 = (uVar13 - iVar17) - 1;
    if ((-1 < (int)uVar3) && (uVar4 = uVar13, (int)uVar3 < (int)uVar13)) {
      uVar4 = uVar3;
    }
    local_48 = (wchar_t *)0x0;
    local_40 = 0;
    pwVar18 = pwVar18 + ((longlong)(int)uVar13 - (longlong)(int)uVar4);
    pwVar20 = pwVar12;
    if ((pwVar18 == (wchar_t *)0x0) || (*pwVar18 == L'\0')) {
LAB_142225192:
      pwVar11 = L"";
    }
    else {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (pwVar18[lVar7] != L'\0');
      uVar13 = (int)lVar7 + 1;
      local_40 = (ulonglong)uVar13;
      uVar4 = uVar13;
      if (0 < (int)uVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        uVar4 = (uint)local_40;
      }
      pwVar11 = local_48;
      FGenericPlatformString::Memcpy(local_48,pwVar18,(longlong)(int)uVar13 * 2);
      pwVar20 = pwVar11;
      if (uVar4 == 0) goto LAB_142225192;
    }
    uVar4 = _wtoi(pwVar11);
    pwVar18 = (wchar_t *)(ulonglong)uVar4;
    if (pwVar20 != (wchar_t *)0x0) {
      FMemory::Free(pwVar20);
    }
    uVar4 = iVar17 + 1;
    if (local_60 == 0) {
      pwVar20 = L"";
      uVar13 = uVar19;
    }
    else {
      pwVar20 = local_68;
      uVar13 = local_60 - 1;
    }
    local_48 = (wchar_t *)0x0;
    if ((int)uVar4 < 0) {
LAB_1422251f0:
      uVar4 = uVar19;
    }
    else {
      uVar14 = uVar13;
      if ((int)uVar4 < (int)uVar13) {
        uVar14 = uVar4;
      }
      uVar4 = uVar14 + 1;
      if (uVar14 == 0) goto LAB_1422251f0;
    }
    local_40 = (ulonglong)uVar4;
    pwVar11 = pwVar12;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pwVar11 = local_48;
      uVar4 = (uint)local_40;
      if (0 < (int)(uint)local_40) {
        wcsncpy(local_48,pwVar20,(longlong)(int)uVar14);
        pwVar11[(int)uVar14] = L'\0';
      }
    }
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_5c = local_40._4_4_;
    local_68 = pwVar11;
    local_60 = uVar4;
  }
  do {
    pwVar18 = (wchar_t *)(ulonglong)((int)pwVar18 + 1);
    local_48 = (wchar_t *)0x0;
    local_40 = 0;
    FString::AppendInt(&local_48,pwVar18);
    pwVar11 = local_48;
    pwVar20 = local_68;
    lVar7 = (longlong)(int)local_60;
    iVar17 = (uint)local_40;
    if ((int)local_60 < 2) {
      local_48 = (wchar_t *)0x0;
      local_40 = 0;
    }
    else {
      iVar2 = 0;
      if ((uint)local_40 != 0) {
        iVar2 = (uint)local_40 + -1;
      }
      if ((local_60 != 0) || (iVar17 = 1, iVar2 == 0)) {
        iVar17 = 0;
      }
      local_58 = (wchar_t *)0x0;
      local_50 = CONCAT44(local_50._4_4_,local_60);
      if ((local_60 == 0) && (iVar17 + iVar2 == 0)) {
        local_50 = 0;
        uVar16 = 0;
        pwVar11 = (wchar_t *)0x0;
        iVar10 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_60 + iVar17 + iVar2,0);
        pwVar11 = local_58;
        _guard_xfg_dispatch_icall_nop(local_58,pwVar20,lVar7 * 2);
        uVar16 = local_50 & 0xffffffff;
        iVar10 = local_50._4_4_;
      }
      pwVar20 = local_48;
      iVar15 = (int)uVar16;
      iVar17 = iVar15;
      if (iVar2 != 0) {
        iVar17 = iVar15 + (uint)(iVar15 == 0) + iVar2;
        local_50 = CONCAT44(local_50._4_4_,iVar17);
        if (iVar10 < iVar17) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar16);
          pwVar11 = local_58;
          iVar17 = (int)local_50;
        }
        _guard_xfg_dispatch_icall_nop
                  (pwVar11 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0)),pwVar20,
                   (longlong)iVar2 * 2);
        (pwVar11 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0)))[iVar2] = L'\0';
      }
      local_58 = (wchar_t *)0x0;
      local_50 = 0;
    }
    if (pwVar12 != (wchar_t *)0x0) {
      FMemory::Free(pwVar12);
    }
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free(local_48);
    }
    pwVar12 = L"";
    if (iVar17 != 0) {
      pwVar12 = pwVar11;
    }
    puVar8 = (undefined8 *)FName::FName(&local_res10,pwVar12,1);
    uVar5 = *puVar8;
    uVar9 = UObject::GetPrivateStaticClass();
    lVar7 = FUN_141799680(uVar9,param_1,uVar5,0,0,0,0);
    pwVar12 = pwVar11;
  } while (lVar7 != 0);
  pwVar12 = L"";
  if (iVar17 != 0) {
    pwVar12 = pwVar11;
  }
  (**(code **)(*local_res18 + 0x138))(local_res18,pwVar12,param_1,0);
  if (pwVar11 != (wchar_t *)0x0) {
    FMemory::Free(pwVar11);
  }
LAB_142225409:
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142225430 FUN_142225430 body=37 status=ok
// SIG undefined FUN_142225430(void)

void FUN_142225430(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_141750920();
  if (cVar1 != '\0') {
    FUN_142224cb0(param_1);
    return;
  }
  return;
}



// FUNCTION 142225460 FUN_142225460 body=941 status=ok
// SIG undefined FUN_142225460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142225460(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  byte bVar10;
  bool bVar11;
  float fVar12;
  undefined4 uVar13;
  undefined1 auStack_1d8 [32];
  undefined1 *local_1b8;
  undefined *local_1b0;
  undefined1 local_1a8 [4];
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined1 *local_148 [2];
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined4 local_108;
  undefined1 local_f8 [72];
  longlong local_b0;
  longlong local_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  LOCK();
  bVar11 = param_1[0x29] == 0;
  if (bVar11) {
    param_1[0x29] = 0;
  }
  UNLOCK();
  if ((bVar11) &&
     (fVar12 = (float)param_1[0x2a] - (float)param_1[0x49],
     (float)param_1[0x48] <= fVar12 && fVar12 != (float)param_1[0x48])) {
    param_1[0x49] = param_1[0x2a];
    bVar10 = *(byte *)(param_4 + 0xa0) >> 6 & 1;
    bVar3 = *(byte *)(param_4 + 0xa4);
    if ((*(byte *)(param_1 + 0x26) & 1) == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146aeea98) &&
         (_Init_thread_header(&DAT_146aeea98), DAT_146aeea98 == -1)) {
        FName::FName(&DAT_146aeea90,"SoundOcclusion",1);
        _Init_thread_footer(&DAT_146aeea98);
      }
      local_1b8 = (undefined1 *)0x0;
      FUN_1422ffb20(local_f8,DAT_146aeea90,local_1a8,bVar10);
      if (param_1[10] != 0) {
        FCollisionQueryParams::AddIgnoredActor(local_f8);
      }
      lVar8 = FWeakObjectPtr::Get(param_1);
      if (lVar8 != 0) {
        local_1b0 = &DAT_146aefe68;
        local_1b8 = local_f8;
        cVar7 = UWorld::LineTraceTestByChannel(lVar8,param_3,param_2,bVar3);
        LOCK();
        param_1[0x28] = (uint)(cVar7 != '\0');
        UNLOCK();
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
      if (local_b0 != 0) {
        FMemory::Free();
      }
    }
    else {
      LOCK();
      param_1[0x29] = 1;
      UNLOCK();
      uVar1 = *param_3;
      uVar13 = *(undefined4 *)(param_3 + 1);
      uVar4 = *param_1;
      local_1a0 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x3c);
      local_1a4 = param_1[10];
      uVar5 = param_1[1];
      local_118 = 0;
      local_108 = 0;
      uVar2 = *param_2;
      uVar6 = *(undefined4 *)(param_2 + 1);
      uStack_198 = param_1;
      local_188 = uVar1;
      local_180 = uVar13;
      local_17c = uVar2;
      local_174 = uVar6;
      puVar9 = (undefined8 *)FUN_140438ef0(0x48,local_138);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &PTR_FUN_145010f08;
        *(undefined4 *)(puVar9 + 1) = uVar4;
        *(undefined4 *)((longlong)puVar9 + 0xc) = uVar5;
        puVar9[2] = uVar1;
        *(undefined8 *)((longlong)puVar9 + 0x1c) = uVar2;
        *(undefined4 *)(puVar9 + 3) = uVar13;
        *(undefined4 *)((longlong)puVar9 + 0x24) = uVar6;
        *(uint *)(puVar9 + 5) = (uint)bVar3;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = local_1a4;
        *(byte *)(puVar9 + 6) = bVar10;
        *(undefined4 *)(puVar9 + 7) = local_1a0;
        *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_19c;
        *(undefined4 *)(puVar9 + 8) = (undefined4)uStack_198;
        *(undefined4 *)((longlong)puVar9 + 0x44) = uStack_198._4_4_;
      }
      local_148[0] = &LAB_142224980;
      FUN_1422f8d80(local_148);
    }
  }
  if ((*(byte *)(param_1 + 0x26) & 1) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(param_4 + 0x1e8);
  }
  *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) | 1;
  LOCK();
  bVar11 = param_1[0x28] == 0;
  if (bVar11) {
    param_1[0x28] = 0;
  }
  UNLOCK();
  if (bVar11) {
    FDynamicParameter::Set(param_1 + 0x33,0x469c4000,uVar13);
    fVar12 = 1.0;
  }
  else {
    if (*(float *)(param_4 + 0x1e0) < (float)param_1[0x39]) {
      FDynamicParameter::Set(param_1 + 0x33,*(float *)(param_4 + 0x1e0),uVar13);
    }
    fVar12 = *(float *)(param_4 + 0x1e4);
    if ((float)param_1[0x40] <= fVar12) goto LAB_142225781;
  }
  FDynamicParameter::Set(param_1 + 0x3a,fVar12,uVar13);
LAB_142225781:
  fVar12 = (float)DAT_1464a97d0;
  FDynamicParameter::Update(param_1 + 0x33,fVar12);
  FDynamicParameter::Update(param_1 + 0x3a,fVar12);
  return;
}



// FUNCTION 142225810 FUN_142225810 body=616 status=ok
// SIG undefined FUN_142225810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142225810(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  float local_50;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar8 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar8;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if (((*(uint *)(lVar4 + 8) >> 0x1d & 1) != 0) ||
     (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 == 0)) {
    return 0;
  }
  lVar4 = UWorld::GetWorldSettings(lVar4,1);
  if ((*(byte *)(lVar4 + 0x460) & 1) == 0) {
    return 1;
  }
  lVar2 = param_1[0x2d];
  if (lVar2 == 0) {
    local_50 = DAT_1468b5d98;
  }
  else {
    local_50 = *(float *)(lVar2 + 0x228);
  }
  if (*(float *)(lVar4 + 0x470) <= local_50) {
    if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0xb8) & 1) == 0)) {
      return 1;
    }
    if ((((-1048576.0 <= *(float *)(lVar2 + 0x1d0) - *(float *)(lVar2 + 0x1dc)) &&
         (*(float *)(lVar2 + 0x1d0) + *(float *)(lVar2 + 0x1dc) <= 1048576.0)) &&
        (-1048576.0 <= *(float *)(lVar2 + 0x1d4) - *(float *)(lVar2 + 0x1e0))) &&
       (((*(float *)(lVar2 + 0x1d4) + *(float *)(lVar2 + 0x1e0) <= 1048576.0 &&
         (-1048576.0 <= *(float *)(lVar2 + 0x1d8) - *(float *)(lVar2 + 0x1e4))) &&
        (*(float *)(lVar2 + 0x1d8) + *(float *)(lVar2 + 0x1e4) <= 1048576.0)))) {
      return 1;
    }
    (**(code **)(*param_1 + 0x558))(param_1);
    FUN_14223c460(param_1,0);
    FUN_142227b80(param_1);
    return 0;
  }
  if (*(longlong *)(lVar4 + 0x478) != 0) {
    lVar5 = UDamageType::GetPrivateStaticClass();
    lVar2 = *(longlong *)(lVar4 + 0x478);
    for (lVar7 = lVar2; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar5) {
        if (lVar2 != 0) {
          if (lVar2 == 0) goto LAB_1422259a2;
          lVar7 = UDamageType::GetPrivateStaticClass();
          lVar4 = *(longlong *)(lVar4 + 0x478);
          lVar2 = lVar4;
          goto joined_r0x000142225992;
        }
        break;
      }
    }
  }
  uVar6 = GetDefault<UDamageType>();
  goto LAB_142225946;
joined_r0x000142225992:
  if (lVar2 == 0) goto LAB_1422259a2;
  if (lVar2 == lVar7) goto LAB_1422259a4;
  lVar2 = *(longlong *)(lVar2 + 0x30);
  goto joined_r0x000142225992;
LAB_1422259a2:
  lVar4 = 0;
LAB_1422259a4:
  uVar6 = UClass::GetDefaultObject<UDamageType>(lVar4);
LAB_142225946:
  (**(code **)(*param_1 + 0x550))(param_1,uVar6);
  return 0;
}



// FUNCTION 142225a80 FUN_142225a80 body=513 status=ok
// SIG undefined FUN_142225a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142225a80(undefined8 param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined1 auStack_318 [32];
  longlong local_2f8 [24];
  longlong *local_238;
  undefined8 local_230;
  undefined1 local_228 [480];
  undefined1 *local_48;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  puVar9 = (undefined1 *)0x0;
  local_238 = (longlong *)0x0;
  local_230 = 0;
  FUN_140725150(param_1,local_2f8,0);
  local_48 = (undefined1 *)0x0;
  plVar10 = local_2f8;
  if (local_238 != (longlong *)0x0) {
    plVar10 = local_238;
  }
  local_40 = 0;
  local_3c = 0;
  plVar1 = plVar10 + (int)local_230;
  puVar4 = puVar9;
  puVar8 = puVar9;
  if (plVar10 != plVar1) {
    do {
      lVar3 = *plVar10;
      local_40 = 0;
      puVar6 = puVar9;
      if (((int)puVar4 < 0) && (puVar6 = (undefined1 *)0x0, (int)puVar4 != 0)) {
        FUN_14223bf90(local_228);
        puVar4 = (undefined1 *)(ulonglong)local_3c;
        puVar6 = (undefined1 *)(ulonglong)local_40;
        puVar8 = local_48;
      }
      uVar5 = (uint)puVar6;
      iVar2 = *(int *)(lVar3 + 0x3a8);
      if (iVar2 != 0) {
        if ((int)puVar4 < (int)(uVar5 + iVar2)) {
          FUN_14223bf90(local_228,uVar5 + iVar2);
          puVar8 = local_48;
          uVar5 = local_40;
        }
        puVar4 = local_228;
        if (puVar8 != (undefined1 *)0x0) {
          puVar4 = puVar8;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar4 + (longlong)(int)uVar5 * 0xa0,*(void **)(lVar3 + 0x3a0),
                   (longlong)iVar2 * 0xa0);
        puVar4 = (undefined1 *)(ulonglong)local_3c;
        uVar5 = local_40 + iVar2;
        local_40 = uVar5;
        puVar8 = local_48;
      }
      puVar6 = local_228;
      if (puVar8 != (undefined1 *)0x0) {
        puVar6 = puVar8;
      }
      puVar7 = puVar6 + (longlong)(int)uVar5 * 0xa0;
      if (puVar6 != puVar7) {
        do {
          FUN_142389e30(lVar3,puVar6,1,0);
          puVar6 = puVar6 + 0xa0;
        } while (puVar6 != puVar7);
        puVar4 = (undefined1 *)(ulonglong)local_3c;
        puVar8 = local_48;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar1);
    if (puVar8 != (undefined1 *)0x0) {
      FMemory::Free(puVar8);
    }
  }
  if (local_238 != (longlong *)0x0) {
    FMemory::Free(local_238);
  }
  return;
}



// FUNCTION 142225c90 FUN_142225c90 body=99 status=ok
// SIG undefined FUN_142225c90(void)

void FUN_142225c90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x168) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x168) + 400) != 0)) {
    lVar1 = UObjectBaseUtility::GetOutermost();
    lVar2 = UObjectBaseUtility::GetOutermost(param_1);
    if (lVar2 != lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000142225ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x168) + 0x418))
                (*(longlong **)(param_1 + 0x168),&DAT_14653218c);
      return;
    }
  }
  return;
}



// FUNCTION 142225d00 FUN_142225d00 body=457 status=ok
// SIG undefined FUN_142225d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_142225d00(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int iVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined1 local_138 [8];
  undefined1 local_130 [192];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uVar4 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,0);
  }
  local_70 = (undefined1 *)0x0;
  local_68 = 0;
  FUN_140725150(param_1,local_130,0);
  uVar6 = uVar4;
  if (0 < (int)local_68) {
    do {
      puVar3 = local_130;
      if (local_70 != (undefined1 *)0x0) {
        puVar3 = local_70;
      }
      plVar1 = *(longlong **)(puVar3 + uVar4);
      if ((((*(byte *)(plVar1 + 0x17) & 1) != 0) &&
          (iVar2 = (**(code **)(*plVar1 + 0x4e8))(plVar1), iVar2 != 0)) &&
         (iVar2 = (**(code **)(*plVar1 + 0x4f0))(plVar1,param_4), iVar2 == 2)) {
        local_148 = param_6;
        (**(code **)(*plVar1 + 0x890))(plVar1,param_2,param_3,param_5);
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)local_68);
  }
  iVar2 = *(int *)(param_2 + 1);
  if (1 < iVar2) {
    AlgoImpl::
    IntroSortInternal<FSoAmbientControlPoint,FIdentityFunctor,TDereferenceWrapper<FSoAmbientControlPoint,<lambda_2b2e8abb43d614fdc616d7a9fccfbc1b>_>_>
              (*param_2,(longlong)iVar2,local_138[0],local_138);
    iVar2 = *(int *)(param_2 + 1);
  }
  if (local_70 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return 0 < iVar2;
}



// FUNCTION 142225ed0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142225f80 FUN_142225f80 body=72 status=ok
// SIG undefined FUN_142225f80(void)

void FUN_142225f80(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_2 + 0x95);
  *(char *)((longlong)param_1 + 0x95) = cVar1;
  if (cVar1 != '\0') {
    *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
    uVar2 = (**(code **)(*param_1 + 0x148))();
    FUN_1428c4d10(uVar2,param_1);
    FUN_14222cb50(param_1);
    return;
  }
  return;
}



// FUNCTION 142225fd0 FUN_142225fd0 body=133 status=ok
// SIG undefined FUN_142225fd0(void)

undefined8 * FUN_142225fd0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145010f08;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined8 *)((longlong)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142226060 FUN_142226060 body=4111 status=ok
// SIG undefined FUN_142226060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142226060(uint *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
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
  longlong local_res20;
  ulonglong in_stack_fffffffffffffe08;
  float local_1e8;
  undefined8 uStack_1e4;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined8 uStack_1cc;
  undefined8 uStack_1c4;
  float fStack_1bc;
  float fStack_1b8;
  float local_1b4;
  float local_1b0;
  float fStack_1ac;
  undefined8 local_1a8;
  undefined1 local_19f;
  byte local_19e;
  longlong local_198;
  undefined8 local_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_170;
  longlong *local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint local_128 [14];
  longlong local_f0;
  byte local_de;
  ulonglong uVar13;
  
  if ((param_2 != (longlong *)0x0) &&
     (lVar10 = (**(code **)(*param_2 + 0x6b8))(param_2), lVar10 != 0)) {
    uVar14 = 0;
    if (0 < *(int *)(lVar10 + 0x40)) {
      uVar13 = uVar14;
      do {
        FUN_142303f10((longlong)(int)uVar13 * 0xe0 + *(longlong *)(lVar10 + 0x38),&local_158,
                      &DAT_1468b5b70,0x3f800000);
        local_1e8 = (float)((uint)local_1e8 & 0xfffffffe);
        local_19e = local_19e & 0xfe;
        fStack_17c = (float)_DAT_1468b5d90;
        fStack_178 = (float)((ulonglong)_DAT_1468b5d90 >> 0x20);
        uStack_1c4 = CONCAT44(fStack_17c,DAT_1468b5d98);
        fStack_174 = DAT_1468b5d98;
        local_170 = (float)((uint)local_170 & 0xffffff00);
        local_188 = _DAT_1468b5d90;
        fStack_180 = DAT_1468b5d98;
        fStack_1dc = -NAN;
        uStack_1cc = _DAT_1468b5d90;
        local_1d8 = 0.0;
        fStack_1bc = fStack_178;
        fStack_1b8 = DAT_1468b5d98;
        fStack_1d4 = -NAN;
        fStack_1d0 = 0.0;
        local_1b0 = 0.0;
        fStack_1ac = 0.0;
        local_1a8 = 0;
        local_19f = 0;
        uStack_1e4 = 0;
        local_1b4 = local_170;
        FUN_14223d4d0(&local_1e8,param_3);
        FAreaNavModifier::SetBox(&local_1e8,&local_158,param_2 + 0x42);
        uVar12 = param_1[8];
        param_1[8] = uVar12 + 1;
        if ((int)param_1[9] < (int)(uVar12 + 1)) {
          TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 6,uVar12);
        }
        FAreaNavModifier::FAreaNavModifier
                  ((longlong)(int)uVar12 * 0x50 + *(longlong *)(param_1 + 6),&local_1e8);
        uVar12 = *param_1;
        *param_1 = (((uint)local_1e8 | uVar12) ^ uVar12) & 1 ^ uVar12;
        param_1[0x12] =
             (uint)local_19e + (uint)local_19e & 4 |
             (uint)local_19e + (uint)local_19e & 2 | param_1[0x12];
        if (CONCAT44(fStack_1ac,local_1b0) != 0) {
          FMemory::Free();
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
      } while ((int)uVar12 < *(int *)(lVar10 + 0x40));
    }
    iVar11 = 0;
    uVar13 = uVar14;
    if (0 < *(int *)(lVar10 + 0x50)) {
      do {
        fVar50 = fRam0000000146aee9f8;
        fVar49 = fRam0000000146aee9f4;
        fVar42 = _DAT_146aee9f0;
        fVar41 = fRam0000000146aee968;
        fVar38 = fRam0000000146aee964;
        fVar35 = _DAT_146aee960;
        local_198 = *(longlong *)(lVar10 + 0x48);
        auVar16 = *(undefined1 (*) [16])(param_2 + 0x46);
        fVar3 = auVar16._0_4_;
        fVar4 = auVar16._4_4_;
        fVar5 = auVar16._8_4_;
        fVar6 = auVar16._12_4_;
        fVar51 = (float)((uint)_DAT_146aee960 & _DAT_146aee970);
        fVar52 = (float)((uint)fRam0000000146aee964 & uRam0000000146aee974);
        fVar53 = (float)((uint)fRam0000000146aee968 & uRam0000000146aee978);
        fVar54 = (float)((uint)fRam0000000146aee96c & uRam0000000146aee97c);
        fVar20 = -*(float *)(uVar13 + 0xcc + local_198);
        fVar55 = *(float *)(param_2 + 0x42);
        fVar22 = *(float *)((longlong)param_2 + 0x214);
        fVar25 = *(float *)(param_2 + 0x43);
        fVar31 = *(float *)((longlong)param_2 + 0x21c);
        auVar15._4_4_ = fVar52;
        auVar15._0_4_ = fVar51;
        auVar15._8_4_ = fVar53;
        auVar15._12_4_ = fVar54;
        auVar16 = minps(auVar15,auVar16);
        auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146aee9f4);
        auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146aee9f0);
        auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146aee9f8);
        auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam0000000146aee9fc);
        iVar9 = movmskps((int)local_198,auVar17);
        if (iVar9 == 0) {
          fVar49 = fVar3 * 0.0;
          fVar50 = fVar4 * 0.0;
          fVar20 = fVar20 * fVar5;
          fVar29 = fVar6 * 0.0;
          local_158 = fRam0000000146aee96c * fVar55 * _DAT_146aee9b0 + fVar31 * 0.0 +
                      fVar22 * 0.0 * _DAT_146aee9a0 + fVar25 * 0.0 * _DAT_146aee990;
          fStack_154 = fVar55 * 0.0 * fRam0000000146aee9b4 + fVar31 * 0.0 +
                       fRam0000000146aee96c * fVar22 * fRam0000000146aee9a4 +
                       fVar25 * 0.0 * fRam0000000146aee994;
          fStack_150 = fVar55 * 0.0 * fRam0000000146aee9b8 + fVar31 * 0.0 +
                       fVar22 * 0.0 * fRam0000000146aee9a8 +
                       fRam0000000146aee96c * fVar25 * fRam0000000146aee998;
          fStack_14c = fVar55 * 0.0 * fRam0000000146aee9bc + fRam0000000146aee96c * fVar31 +
                       fVar22 * 0.0 * fRam0000000146aee9ac + fVar25 * 0.0 * fRam0000000146aee99c;
          fVar35 = fVar20 * fVar22 - fVar50 * fVar25;
          fVar38 = fVar49 * fVar25 - fVar20 * fVar55;
          fVar41 = fVar50 * fVar55 - fVar49 * fVar22;
          fVar42 = fVar29 * fVar31 - fVar29 * fVar31;
          fVar35 = fVar35 + fVar35;
          fVar38 = fVar38 + fVar38;
          fVar41 = fVar41 + fVar41;
          fVar42 = fVar42 + fVar42;
          local_148._4_4_ =
               (fVar35 * fVar25 - fVar41 * fVar55) + fVar38 * fVar31 + fVar50 +
               *(float *)((longlong)param_2 + 0x224);
          local_148._0_4_ =
               (fVar41 * fVar22 - fVar38 * fVar25) + fVar35 * fVar31 + fVar49 +
               *(float *)(param_2 + 0x44);
          fStack_140 = (fVar38 * fVar55 - fVar35 * fVar22) + fVar41 * fVar31 + fVar20 +
                       *(float *)(param_2 + 0x45);
          fStack_13c = (fVar42 * fVar31 - fVar42 * fVar31) + fVar42 * fVar31 + fVar29 +
                       *(float *)((longlong)param_2 + 0x22c);
        }
        else {
          fVar28 = fVar22 + fVar22;
          fVar30 = fVar25 + fVar25;
          fVar32 = fVar55 * (fVar55 + fVar55);
          fVar29 = (fVar55 + fVar55) * fVar31;
          fVar46 = (fVar30 * fVar31 + fVar28 * fVar55) * fVar3;
          fVar47 = (fVar29 + fVar30 * fVar22) * fVar4;
          fVar48 = (fVar28 * fVar31 + fVar30 * fVar55) * fVar5;
          fVar33 = fVar4 * (fVar28 * fVar55 - fVar30 * fVar31);
          fVar36 = fVar5 * (fVar30 * fVar22 - fVar29);
          fVar39 = fVar3 * (fVar30 * fVar55 - fVar28 * fVar31);
          fVar55 = *(float *)(param_2 + 0x44);
          fVar31 = *(float *)((longlong)param_2 + 0x224);
          fVar29 = *(float *)(param_2 + 0x45);
          fVar21 = (float)((uint)((_DAT_146aee960 - (fVar25 * fVar30 + fVar22 * fVar28)) * fVar3) &
                          _DAT_146aee970);
          fVar25 = (float)((uint)((fRam0000000146aee964 - (fVar25 * fVar30 + fVar32)) * fVar4) &
                          uRam0000000146aee974);
          fVar30 = (float)((uint)((fRam0000000146aee968 - (fVar22 * fVar28 + fVar32)) * fVar5) &
                          uRam0000000146aee978);
          fVar26 = (float)((uint)((fRam0000000146aee96c - (fVar32 + fVar32)) * fVar6) &
                          uRam0000000146aee97c);
          fVar43 = (fRam0000000146aee96c * 0.0 + 0.0) * fVar51;
          fVar44 = (fRam0000000146aee96c * 0.0 + 0.0) * fVar52;
          fVar45 = (fRam0000000146aee96c * 0.0 + 0.0) * fVar53;
          fVar34 = fVar52 * (0.0 - fRam0000000146aee96c * 0.0);
          fVar37 = fVar53 * (0.0 - fRam0000000146aee96c * 0.0);
          fVar40 = fVar51 * (0.0 - fRam0000000146aee96c * 0.0);
          fVar22 = (float)((uint)((_DAT_146aee960 - 0.0) * fVar51) & _DAT_146aee970);
          fVar28 = (float)((uint)((fRam0000000146aee964 - 0.0) * fVar52) & uRam0000000146aee974);
          fVar32 = (float)((uint)((fRam0000000146aee968 - 0.0) * fVar53) & uRam0000000146aee978);
          fVar27 = (float)((uint)((fRam0000000146aee96c - 0.0) * fVar54) & uRam0000000146aee97c);
          local_1e8 = fVar43 * fVar33 + fVar22 * fVar21 + fVar40 * fVar48 + fVar27 * fVar55;
          uStack_1e4._0_4_ = fVar43 * fVar25 + fVar22 * fVar46 + fVar40 * fVar36 + fVar27 * fVar31;
          uStack_1e4._4_4_ = fVar43 * fVar47 + fVar22 * fVar39 + fVar40 * fVar30 + fVar27 * fVar29;
          fStack_1dc = fVar43 * fVar26 + fVar22 * fVar26 + fVar40 * fVar26 +
                       fVar27 * fRam0000000146aee96c;
          local_1d8 = fVar28 * fVar33 + fVar34 * fVar21 + fVar44 * fVar48 + fVar27 * fVar55;
          fStack_1d4 = fVar28 * fVar25 + fVar34 * fVar46 + fVar44 * fVar36 + fVar27 * fVar31;
          fStack_1d0 = fVar28 * fVar47 + fVar34 * fVar39 + fVar44 * fVar30 + fVar27 * fVar29;
          uStack_1cc._0_4_ =
               fVar28 * fVar26 + fVar34 * fVar26 + fVar44 * fVar26 + fVar27 * fRam0000000146aee96c;
          uStack_1cc._4_4_ = fVar37 * fVar33 + fVar45 * fVar21 + fVar32 * fVar48 + fVar27 * fVar55;
          uStack_1c4._0_4_ = fVar37 * fVar25 + fVar45 * fVar46 + fVar32 * fVar36 + fVar27 * fVar31;
          uStack_1c4._4_4_ = fVar37 * fVar47 + fVar45 * fVar39 + fVar32 * fVar30 + fVar27 * fVar29;
          fStack_1bc = fVar37 * fVar26 + fVar45 * fVar26 + fVar32 * fVar26 +
                       fVar27 * fRam0000000146aee96c;
          fStack_1b8 = fVar33 * 0.0 + fVar21 * 0.0 + fVar20 * fVar48 + fRam0000000146aee96c * fVar55
          ;
          local_1b4 = fVar25 * 0.0 + fVar46 * 0.0 + fVar20 * fVar36 + fRam0000000146aee96c * fVar31;
          local_1b0 = fVar47 * 0.0 + fVar39 * 0.0 + fVar20 * fVar30 + fRam0000000146aee96c * fVar29;
          fStack_1ac = fVar26 * 0.0 + fVar26 * 0.0 + fVar20 * fVar26 +
                       fRam0000000146aee96c * fRam0000000146aee96c;
          FMatrix::RemoveScaling(&local_1e8);
          fVar55 = (float)(-(uint)(fVar42 <= fVar51 * fVar3) & (_DAT_146aee9e0 ^ (uint)fVar35) ^
                          _DAT_146aee9e0);
          fVar22 = (float)(-(uint)(fVar49 <= fVar52 * fVar4) & (uRam0000000146aee9e4 ^ (uint)fVar38)
                          ^ uRam0000000146aee9e4);
          fVar25 = (float)(-(uint)(fVar50 <= fVar53 * fVar5) & (uRam0000000146aee9e8 ^ (uint)fVar41)
                          ^ uRam0000000146aee9e8);
          local_1e8 = local_1e8 * fVar55;
          uStack_1e4 = CONCAT44(uStack_1e4._4_4_ * fVar55,(float)uStack_1e4 * fVar55);
          fStack_1d4 = fStack_1d4 * fVar22;
          fStack_1d0 = fStack_1d0 * fVar22;
          local_1d8 = local_1d8 * fVar22;
          uStack_1c4 = CONCAT44(uStack_1c4._4_4_ * fVar25,(float)uStack_1c4 * fVar25);
          uStack_1cc = CONCAT44(uStack_1cc._4_4_ * fVar25,(float)uStack_1cc);
          FQuat::FQuat(&local_188,&local_1e8);
          local_168 = (longlong *)CONCAT44(local_168._4_4_,0x322bcc77);
          auVar23._0_4_ = (float)local_188 * (float)local_188 + fStack_180 * fStack_180;
          auVar23._4_4_ = local_188._4_4_ * local_188._4_4_ + fStack_17c * fStack_17c;
          auVar23._8_4_ = fStack_180 * fStack_180 + (float)local_188 * (float)local_188;
          auVar23._12_4_ = fStack_17c * fStack_17c + local_188._4_4_ * local_188._4_4_;
          fVar35 = auVar23._4_4_ + auVar23._0_4_;
          fVar38 = auVar23._8_4_ + auVar23._4_4_;
          fVar41 = auVar23._12_4_ + auVar23._8_4_;
          fVar42 = auVar23._0_4_ + auVar23._12_4_;
          auVar16._4_4_ = fVar38;
          auVar16._0_4_ = fVar35;
          auVar16._8_4_ = fVar41;
          auVar16._12_4_ = fVar42;
          auVar16 = rsqrtps(auVar23,auVar16);
          fVar55 = auVar16._0_4_;
          fVar22 = auVar16._4_4_;
          fVar25 = auVar16._8_4_;
          fVar31 = auVar16._12_4_;
          fVar55 = (_DAT_146aee9d0 - fVar55 * fVar55 * fVar35 * _DAT_146aee9d0) * fVar55 + fVar55;
          fVar22 = (fRam0000000146aee9d4 - fVar22 * fVar22 * fVar38 * fRam0000000146aee9d4) * fVar22
                   + fVar22;
          fVar25 = (fRam0000000146aee9d8 - fVar25 * fVar25 * fVar41 * fRam0000000146aee9d8) * fVar25
                   + fVar25;
          fVar31 = (fRam0000000146aee9dc - fVar31 * fVar31 * fVar42 * fRam0000000146aee9dc) * fVar31
                   + fVar31;
          local_148._4_4_ = local_1b4;
          local_148._0_4_ = fStack_1b8;
          fStack_140 = local_1b0;
          local_158 = (float)(((uint)(((_DAT_146aee9d0 - fVar55 * fVar55 * fVar35 * _DAT_146aee9d0)
                                       * fVar55 + fVar55) * (float)local_188) ^ _DAT_146aee9c0) &
                              -(uint)(1e-08 <= fVar35) ^ _DAT_146aee9c0);
          fStack_154 = (float)(((uint)(((fRam0000000146aee9d4 -
                                        fVar22 * fVar22 * fVar38 * fRam0000000146aee9d4) * fVar22 +
                                       fVar22) * local_188._4_4_) ^ uRam0000000146aee9c4) &
                               -(uint)(1e-08 <= fVar38) ^ uRam0000000146aee9c4);
          fStack_180 = (float)(((uint)(((fRam0000000146aee9d8 -
                                        fVar25 * fVar25 * fVar41 * fRam0000000146aee9d8) * fVar25 +
                                       fVar25) * fStack_180) ^ uRam0000000146aee9c8) &
                               -(uint)(1e-08 <= fVar41) ^ uRam0000000146aee9c8);
          fStack_17c = (float)(((uint)(((fRam0000000146aee9dc -
                                        fVar31 * fVar31 * fVar42 * fRam0000000146aee9dc) * fVar31 +
                                       fVar31) * fStack_17c) ^ uRam0000000146aee9cc) &
                               -(uint)(1e-08 <= fVar42) ^ uRam0000000146aee9cc);
          fStack_13c = 0.0;
          local_188 = CONCAT44(fStack_154,local_158);
          fStack_150 = fStack_180;
          fStack_14c = fStack_17c;
        }
        fStack_12c = fVar54 * fVar6;
        fStack_130 = fVar53 * fVar5;
        fStack_134 = fVar52 * fVar4;
        local_138 = fVar51 * fVar3;
        in_stack_fffffffffffffe08 = param_3;
        FAreaNavModifier::FAreaNavModifier(local_128);
        uVar12 = param_1[8];
        local_168 = (longlong *)CONCAT44(local_168._4_4_,uVar12);
        param_1[8] = uVar12 + 1;
        if ((int)param_1[9] < (int)(uVar12 + 1)) {
          TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 6,uVar12);
          uVar12 = (uint)local_168;
        }
        FAreaNavModifier::FAreaNavModifier
                  ((longlong)(int)uVar12 * 0x50 + *(longlong *)(param_1 + 6),local_128);
        uVar12 = *param_1;
        *param_1 = ((local_128[0] | uVar12) ^ uVar12) & 1 ^ uVar12;
        uVar12 = param_1[0x12];
        uVar12 = (((uint)local_de + (uint)local_de | uVar12) ^ uVar12) & 2 ^ uVar12;
        param_1[0x12] = (((uint)local_de + (uint)local_de | uVar12) ^ uVar12) & 4 ^ uVar12;
        if (local_f0 != 0) {
          FMemory::Free();
        }
        iVar11 = iVar11 + 1;
        uVar13 = uVar13 + 0xd0;
      } while (iVar11 < *(int *)(lVar10 + 0x50));
    }
    iVar11 = 0;
    if (0 < *(int *)(lVar10 + 0x60)) {
      local_168 = param_2 + 0x42;
      local_198 = 0;
      do {
        lVar2 = *(longlong *)(lVar10 + 0x58);
        fStack_17c = (float)_DAT_1468b5d90;
        fStack_178 = (float)((ulonglong)_DAT_1468b5d90 >> 0x20);
        uStack_1c4 = CONCAT44(fStack_17c,DAT_1468b5d98);
        uVar1 = *(undefined4 *)(local_198 + 0x68 + lVar2);
        local_1e8 = (float)((uint)local_1e8 & 0xfffffffe);
        local_19e = local_19e & 0xfe;
        fStack_174 = DAT_1468b5d98;
        local_188 = _DAT_1468b5d90;
        fStack_180 = DAT_1468b5d98;
        local_170 = (float)((uint)local_170 & 0xffffff00);
        uStack_1cc = _DAT_1468b5d90;
        fStack_1dc = -NAN;
        fStack_1bc = fStack_178;
        fStack_1b8 = DAT_1468b5d98;
        local_1d8 = 0.0;
        fStack_1d4 = -NAN;
        fStack_1d0 = 0.0;
        local_1b0 = 0.0;
        fStack_1ac = 0.0;
        local_1a8 = 0;
        local_19f = 0;
        uStack_1e4 = 0;
        local_1b4 = local_170;
        FUN_14223d4d0(&local_1e8,param_3);
        lVar8 = local_198;
        in_stack_fffffffffffffe08 = in_stack_fffffffffffffe08 & 0xffffffff00000000;
        FUN_14223dc50(&local_1e8,*(undefined8 *)(local_198 + 0x60 + lVar2),0,uVar1,
                      in_stack_fffffffffffffe08,local_168);
        uVar12 = param_1[8];
        param_1[8] = uVar12 + 1;
        if ((int)param_1[9] < (int)(uVar12 + 1)) {
          TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 6,uVar12);
        }
        FAreaNavModifier::FAreaNavModifier
                  ((longlong)(int)uVar12 * 0x50 + *(longlong *)(param_1 + 6),&local_1e8);
        uVar12 = *param_1;
        *param_1 = (((uint)local_1e8 | uVar12) ^ uVar12) & 1 ^ uVar12;
        uVar12 = param_1[0x12];
        uVar12 = (((uint)local_19e + (uint)local_19e | uVar12) ^ uVar12) & 2 ^ uVar12;
        param_1[0x12] = (((uint)local_19e + (uint)local_19e | uVar12) ^ uVar12) & 4 ^ uVar12;
        if (CONCAT44(fStack_1ac,local_1b0) != 0) {
          FMemory::Free();
        }
        local_198 = lVar8 + 0xd0;
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar10 + 0x60));
    }
    if (0 < *(int *)(lVar10 + 0x30)) {
      local_res20 = 0;
      do {
        fVar50 = fRam0000000146aee9f8;
        fVar49 = fRam0000000146aee9f4;
        fVar42 = _DAT_146aee9f0;
        fVar41 = fRam0000000146aee968;
        fVar38 = fRam0000000146aee964;
        fVar35 = _DAT_146aee960;
        local_198 = *(longlong *)(lVar10 + 0x28);
        auVar16 = *(undefined1 (*) [16])(param_2 + 0x46);
        fVar3 = auVar16._0_4_;
        fVar4 = auVar16._4_4_;
        fVar5 = auVar16._8_4_;
        fVar6 = auVar16._12_4_;
        fVar51 = (float)((uint)_DAT_146aee960 & _DAT_146aee970);
        fVar52 = (float)((uint)fRam0000000146aee964 & uRam0000000146aee974);
        fVar53 = (float)((uint)fRam0000000146aee968 & uRam0000000146aee978);
        fVar54 = (float)((uint)fRam0000000146aee96c & uRam0000000146aee97c);
        fVar20 = -*(float *)(local_198 + 0xac + local_res20);
        fVar55 = *(float *)(param_2 + 0x42);
        fVar22 = *(float *)((longlong)param_2 + 0x214);
        fVar25 = *(float *)(param_2 + 0x43);
        fVar31 = *(float *)((longlong)param_2 + 0x21c);
        auVar18._4_4_ = fVar52;
        auVar18._0_4_ = fVar51;
        auVar18._8_4_ = fVar53;
        auVar18._12_4_ = fVar54;
        auVar16 = minps(auVar18,auVar16);
        auVar19._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146aee9f4);
        auVar19._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146aee9f0);
        auVar19._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146aee9f8);
        auVar19._12_4_ = -(uint)(auVar16._12_4_ < fRam0000000146aee9fc);
        iVar11 = movmskps((int)local_198,auVar19);
        if (iVar11 == 0) {
          fVar49 = fVar3 * 0.0;
          fVar50 = fVar4 * 0.0;
          fVar20 = fVar20 * fVar5;
          fVar29 = fVar6 * 0.0;
          local_158 = fRam0000000146aee96c * fVar55 * _DAT_146aee9b0 + fVar31 * 0.0 +
                      fVar22 * 0.0 * _DAT_146aee9a0 + fVar25 * 0.0 * _DAT_146aee990;
          fStack_154 = fVar55 * 0.0 * fRam0000000146aee9b4 + fVar31 * 0.0 +
                       fRam0000000146aee96c * fVar22 * fRam0000000146aee9a4 +
                       fVar25 * 0.0 * fRam0000000146aee994;
          fStack_150 = fVar55 * 0.0 * fRam0000000146aee9b8 + fVar31 * 0.0 +
                       fVar22 * 0.0 * fRam0000000146aee9a8 +
                       fRam0000000146aee96c * fVar25 * fRam0000000146aee998;
          fStack_14c = fVar55 * 0.0 * fRam0000000146aee9bc + fRam0000000146aee96c * fVar31 +
                       fVar22 * 0.0 * fRam0000000146aee9ac + fVar25 * 0.0 * fRam0000000146aee99c;
          fVar35 = fVar20 * fVar22 - fVar50 * fVar25;
          fVar38 = fVar49 * fVar25 - fVar20 * fVar55;
          fVar41 = fVar50 * fVar55 - fVar49 * fVar22;
          fVar42 = fVar29 * fVar31 - fVar29 * fVar31;
          fVar35 = fVar35 + fVar35;
          fVar38 = fVar38 + fVar38;
          fVar41 = fVar41 + fVar41;
          fVar42 = fVar42 + fVar42;
          local_148._4_4_ =
               (fVar35 * fVar25 - fVar41 * fVar55) + fVar38 * fVar31 + fVar50 +
               *(float *)((longlong)param_2 + 0x224);
          local_148._0_4_ =
               (fVar41 * fVar22 - fVar38 * fVar25) + fVar35 * fVar31 + fVar49 +
               *(float *)(param_2 + 0x44);
          fStack_140 = (fVar38 * fVar55 - fVar35 * fVar22) + fVar41 * fVar31 + fVar20 +
                       *(float *)(param_2 + 0x45);
          fStack_13c = (fVar42 * fVar31 - fVar42 * fVar31) + fVar42 * fVar31 + fVar29 +
                       *(float *)((longlong)param_2 + 0x22c);
        }
        else {
          fVar28 = fVar22 + fVar22;
          fVar30 = fVar25 + fVar25;
          fVar32 = (fVar55 + fVar55) * fVar55;
          fVar29 = fVar31 * (fVar55 + fVar55);
          fVar46 = (fVar31 * fVar30 + fVar28 * fVar55) * fVar3;
          fVar47 = (fVar29 + fVar30 * fVar22) * fVar4;
          fVar48 = (fVar31 * fVar28 + fVar30 * fVar55) * fVar5;
          fVar33 = fVar4 * (fVar28 * fVar55 - fVar31 * fVar30);
          fVar36 = fVar5 * (fVar30 * fVar22 - fVar29);
          fVar39 = fVar3 * (fVar30 * fVar55 - fVar31 * fVar28);
          fVar55 = *(float *)(param_2 + 0x44);
          fVar31 = *(float *)((longlong)param_2 + 0x224);
          fVar29 = *(float *)(param_2 + 0x45);
          fVar21 = (float)((uint)((_DAT_146aee960 - (fVar30 * fVar25 + fVar28 * fVar22)) * fVar3) &
                          _DAT_146aee970);
          fVar25 = (float)((uint)((fRam0000000146aee964 - (fVar30 * fVar25 + fVar32)) * fVar4) &
                          uRam0000000146aee974);
          fVar30 = (float)((uint)((fRam0000000146aee968 - (fVar28 * fVar22 + fVar32)) * fVar5) &
                          uRam0000000146aee978);
          fVar26 = (float)((uint)((fRam0000000146aee96c - (fVar32 + fVar32)) * fVar6) &
                          uRam0000000146aee97c);
          fVar43 = (fRam0000000146aee96c * 0.0 + 0.0) * fVar51;
          fVar44 = (fRam0000000146aee96c * 0.0 + 0.0) * fVar52;
          fVar45 = (fRam0000000146aee96c * 0.0 + 0.0) * fVar53;
          fVar34 = fVar52 * (0.0 - fRam0000000146aee96c * 0.0);
          fVar37 = fVar53 * (0.0 - fRam0000000146aee96c * 0.0);
          fVar40 = fVar51 * (0.0 - fRam0000000146aee96c * 0.0);
          fVar22 = (float)((uint)((_DAT_146aee960 - 0.0) * fVar51) & _DAT_146aee970);
          fVar28 = (float)((uint)((fRam0000000146aee964 - 0.0) * fVar52) & uRam0000000146aee974);
          fVar32 = (float)((uint)((fRam0000000146aee968 - 0.0) * fVar53) & uRam0000000146aee978);
          fVar27 = (float)((uint)((fRam0000000146aee96c - 0.0) * fVar54) & uRam0000000146aee97c);
          local_1e8 = fVar43 * fVar33 + fVar22 * fVar21 + fVar40 * fVar48 + fVar27 * fVar55;
          uStack_1e4._0_4_ = fVar43 * fVar25 + fVar22 * fVar46 + fVar40 * fVar36 + fVar27 * fVar31;
          uStack_1e4._4_4_ = fVar43 * fVar47 + fVar22 * fVar39 + fVar40 * fVar30 + fVar27 * fVar29;
          fStack_1dc = fVar43 * fVar26 + fVar22 * fVar26 + fVar40 * fVar26 +
                       fVar27 * fRam0000000146aee96c;
          local_1d8 = fVar28 * fVar33 + fVar34 * fVar21 + fVar44 * fVar48 + fVar27 * fVar55;
          fStack_1d4 = fVar28 * fVar25 + fVar34 * fVar46 + fVar44 * fVar36 + fVar27 * fVar31;
          fStack_1d0 = fVar28 * fVar47 + fVar34 * fVar39 + fVar44 * fVar30 + fVar27 * fVar29;
          uStack_1cc._0_4_ =
               fVar28 * fVar26 + fVar34 * fVar26 + fVar44 * fVar26 + fVar27 * fRam0000000146aee96c;
          uStack_1cc._4_4_ = fVar37 * fVar33 + fVar45 * fVar21 + fVar32 * fVar48 + fVar27 * fVar55;
          uStack_1c4._0_4_ = fVar37 * fVar25 + fVar45 * fVar46 + fVar32 * fVar36 + fVar27 * fVar31;
          uStack_1c4._4_4_ = fVar37 * fVar47 + fVar45 * fVar39 + fVar32 * fVar30 + fVar27 * fVar29;
          fStack_1bc = fVar37 * fVar26 + fVar45 * fVar26 + fVar32 * fVar26 +
                       fVar27 * fRam0000000146aee96c;
          fStack_1b8 = fVar33 * 0.0 + fVar21 * 0.0 + fVar20 * fVar48 + fRam0000000146aee96c * fVar55
          ;
          local_1b4 = fVar25 * 0.0 + fVar46 * 0.0 + fVar20 * fVar36 + fRam0000000146aee96c * fVar31;
          local_1b0 = fVar47 * 0.0 + fVar39 * 0.0 + fVar20 * fVar30 + fRam0000000146aee96c * fVar29;
          fStack_1ac = fVar26 * 0.0 + fVar26 * 0.0 + fVar20 * fVar26 +
                       fRam0000000146aee96c * fRam0000000146aee96c;
          FMatrix::RemoveScaling(&local_1e8);
          fVar55 = (float)(-(uint)(fVar42 <= fVar51 * fVar3) & (_DAT_146aee9e0 ^ (uint)fVar35) ^
                          _DAT_146aee9e0);
          fVar22 = (float)(-(uint)(fVar49 <= fVar52 * fVar4) & (uRam0000000146aee9e4 ^ (uint)fVar38)
                          ^ uRam0000000146aee9e4);
          fVar25 = (float)(-(uint)(fVar50 <= fVar53 * fVar5) & (uRam0000000146aee9e8 ^ (uint)fVar41)
                          ^ uRam0000000146aee9e8);
          local_1e8 = local_1e8 * fVar55;
          uStack_1e4 = CONCAT44(uStack_1e4._4_4_ * fVar55,(float)uStack_1e4 * fVar55);
          fStack_1d4 = fStack_1d4 * fVar22;
          fStack_1d0 = fStack_1d0 * fVar22;
          local_1d8 = local_1d8 * fVar22;
          uStack_1c4 = CONCAT44(uStack_1c4._4_4_ * fVar25,(float)uStack_1c4 * fVar25);
          uStack_1cc = CONCAT44(uStack_1cc._4_4_ * fVar25,(float)uStack_1cc);
          FQuat::FQuat(&local_188,&local_1e8);
          auVar24._0_4_ = (float)local_188 * (float)local_188 + fStack_180 * fStack_180;
          auVar24._4_4_ = local_188._4_4_ * local_188._4_4_ + fStack_17c * fStack_17c;
          auVar24._8_4_ = fStack_180 * fStack_180 + (float)local_188 * (float)local_188;
          auVar24._12_4_ = fStack_17c * fStack_17c + local_188._4_4_ * local_188._4_4_;
          fVar35 = auVar24._4_4_ + auVar24._0_4_;
          fVar38 = auVar24._8_4_ + auVar24._4_4_;
          fVar41 = auVar24._12_4_ + auVar24._8_4_;
          fVar42 = auVar24._0_4_ + auVar24._12_4_;
          auVar7._4_4_ = fVar38;
          auVar7._0_4_ = fVar35;
          auVar7._8_4_ = fVar41;
          auVar7._12_4_ = fVar42;
          auVar16 = rsqrtps(auVar24,auVar7);
          fVar55 = auVar16._0_4_;
          fVar22 = auVar16._4_4_;
          fVar25 = auVar16._8_4_;
          fVar31 = auVar16._12_4_;
          fVar55 = (_DAT_146aee9d0 - fVar55 * fVar55 * fVar35 * _DAT_146aee9d0) * fVar55 + fVar55;
          fVar22 = (fRam0000000146aee9d4 - fVar22 * fVar22 * fVar38 * fRam0000000146aee9d4) * fVar22
                   + fVar22;
          fVar25 = (fRam0000000146aee9d8 - fVar25 * fVar25 * fVar41 * fRam0000000146aee9d8) * fVar25
                   + fVar25;
          fVar31 = (fRam0000000146aee9dc - fVar31 * fVar31 * fVar42 * fRam0000000146aee9dc) * fVar31
                   + fVar31;
          local_148._4_4_ = local_1b4;
          local_148._0_4_ = fStack_1b8;
          fStack_140 = local_1b0;
          local_158 = (float)(((uint)(((_DAT_146aee9d0 - fVar55 * fVar55 * fVar35 * _DAT_146aee9d0)
                                       * fVar55 + fVar55) * (float)local_188) ^ _DAT_146aee9c0) &
                              -(uint)(1e-08 <= fVar35) ^ _DAT_146aee9c0);
          fStack_154 = (float)(((uint)(((fRam0000000146aee9d4 -
                                        fVar22 * fVar22 * fVar38 * fRam0000000146aee9d4) * fVar22 +
                                       fVar22) * local_188._4_4_) ^ uRam0000000146aee9c4) &
                               -(uint)(1e-08 <= fVar38) ^ uRam0000000146aee9c4);
          fStack_180 = (float)(((uint)(((fRam0000000146aee9d8 -
                                        fVar25 * fVar25 * fVar41 * fRam0000000146aee9d8) * fVar25 +
                                       fVar25) * fStack_180) ^ uRam0000000146aee9c8) &
                               -(uint)(1e-08 <= fVar41) ^ uRam0000000146aee9c8);
          fStack_17c = (float)(((uint)(((fRam0000000146aee9dc -
                                        fVar31 * fVar31 * fVar42 * fRam0000000146aee9dc) * fVar31 +
                                       fVar31) * fStack_17c) ^ uRam0000000146aee9cc) &
                               -(uint)(1e-08 <= fVar42) ^ uRam0000000146aee9cc);
          fStack_13c = 0.0;
          local_188 = CONCAT44(fStack_154,local_158);
          fStack_150 = fStack_180;
          fStack_14c = fStack_17c;
        }
        fStack_12c = fVar54 * fVar6;
        fStack_130 = fVar53 * fVar5;
        fStack_134 = fVar52 * fVar4;
        local_138 = fVar51 * fVar3;
        FAreaNavModifier::FAreaNavModifier(local_128);
        uVar12 = param_1[8];
        param_1[8] = uVar12 + 1;
        if ((int)param_1[9] < (int)(uVar12 + 1)) {
          TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 6,uVar12);
        }
        FAreaNavModifier::FAreaNavModifier
                  ((longlong)(int)uVar12 * 0x50 + *(longlong *)(param_1 + 6),local_128);
        uVar12 = *param_1;
        *param_1 = ((local_128[0] | uVar12) ^ uVar12) & 1 ^ uVar12;
        uVar12 = param_1[0x12];
        uVar12 = (((uint)local_de + (uint)local_de | uVar12) ^ uVar12) & 2 ^ uVar12;
        param_1[0x12] = (((uint)local_de + (uint)local_de | uVar12) ^ uVar12) & 4 ^ uVar12;
        if (local_f0 != 0) {
          FMemory::Free();
        }
        uVar12 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar12;
        local_res20 = local_res20 + 0xb0;
      } while ((int)uVar12 < *(int *)(lVar10 + 0x30));
    }
  }
  return;
}



// FUNCTION 142227070 FUN_142227070 body=200 status=ok
// SIG undefined FUN_142227070(void)

longlong FUN_142227070(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_res10;
  
  lVar3 = 0;
  if (param_2 != 0) {
    local_res10 = 0;
    if (param_3 == 0) {
      plVar2 = (longlong *)FindFirstFreeName(&local_res10,param_1,*(undefined8 *)(param_2 + 0x18));
      param_3 = *plVar2;
    }
    else {
      FUN_142224fb0(param_1,param_3);
    }
    lVar3 = FUN_1417987a0(param_2,param_1,param_3,0xefb7ffd6,0,0,0xff800000);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0xca) = 2;
      iVar1 = *(int *)(param_1 + 0x328);
      *(int *)(param_1 + 0x328) = iVar1 + 1;
      if (*(int *)(param_1 + 0x32c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_1 + 800),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 800) + (longlong)iVar1 * 8) = lVar3;
    }
  }
  return lVar3;
}



// FUNCTION 142227140 FUN_142227140 body=470 status=ok
// SIG undefined FUN_142227140(void)

longlong * FUN_142227140(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong local_res10;
  code *local_d8;
  ulonglong *puStack_d0;
  undefined **local_c8 [5];
  byte local_9f;
  byte local_9e;
  byte local_9d;
  ulonglong local_98;
  undefined8 local_60;
  undefined8 local_38;
  longlong local_30;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x20) != 0)) {
    local_res10 = 0;
    if (param_3 == 0) {
      plVar3 = (longlong *)FindFirstFreeName(&local_res10,param_1,*(undefined8 *)(param_2 + 0x18));
      param_3 = *plVar3;
    }
    else {
      FUN_142224fb0(param_1,param_3);
    }
    uVar2 = *(uint *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    local_res10 = 0;
    if (param_3 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    plVar3 = (longlong *)FUN_1417985e0(uVar4,param_1,param_3,uVar2 & 0xffb7ffd6,0,0,0,0,0);
    *(uint *)(plVar3 + 1) = *(uint *)(plVar3 + 1) | 0x3000;
    uVar4 = FBlueprintCookedComponentInstancingData::GetCachedPropertyList(param_2);
    FArchive::FArchive(local_c8);
    local_30 = param_2 + 0x40;
    local_38 = 0;
    local_c8[0] = &PTR_FUN_144f50fa8;
    FArchive::SetIsLoading(local_c8,1);
    FArchive::SetIsPersistent(local_c8,0);
    local_9e = local_9e & 0xfd;
    local_9f = local_9f & 0xdf;
    local_9d = local_9d | 0x10;
    local_c8[0] = &PTR_FUN_145010640;
    local_60 = uVar4;
    FUN_141695520(local_c8,1);
    local_98 = local_98 | 0x1000;
    (**(code **)(*plVar3 + 0xa8))(plVar3,local_c8);
    (**(code **)(*plVar3 + 200))(plVar3,0);
    puStack_d0 = &local_res10;
    local_res10 = local_res10 & 0xffffffffffffff00;
    local_d8 = FUN_1406ddef0;
    lVar5 = FUN_1415d8310(&local_d8,&DAT_14622e6dc);
    uVar1 = *(undefined1 *)(lVar5 + 0x58);
    *(undefined1 *)(lVar5 + 0x58) = 1;
    FUN_1417510e0(plVar3);
    *(undefined1 *)(lVar5 + 0x58) = uVar1;
    FUN_142238390(param_1,plVar3);
    FArchive::~FArchive(local_c8);
    return plVar3;
  }
  return (longlong *)0x0;
}



// FUNCTION 142227320 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145010f20;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 142227350 FUN_142227350 body=240 status=ok
// SIG undefined FUN_142227350(void)

undefined8 FUN_142227350(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if ((*(byte *)((longlong)param_1 + 0x94) & 2) == 0) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    lVar3 = lVar5;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if (((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) &&
       (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) {
      FUN_142543860(lVar3,param_1,param_2,param_3);
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x94) & 2) == 0) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142227440 FUN_142227440 body=1087 status=ok
// SIG undefined FUN_142227440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142227440(longlong param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [8];
  uint local_1f0;
  uint uStack_1ec;
  uint *puStack_1e8;
  int local_1e0;
  int iStack_1dc;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 *local_1d0;
  undefined1 **local_1c8;
  undefined1 ***local_1c0;
  undefined2 *local_1b8;
  int local_1b0;
  undefined2 *local_1a8;
  int local_1a0;
  longlong *local_198;
  uint uStack_190;
  uint uStack_18c;
  uint *local_188;
  uint uStack_180;
  int iStack_17c;
  undefined8 local_178;
  longlong *local_170;
  undefined8 uStack_168;
  uint *puStack_160;
  uint uStack_158;
  int iStack_154;
  undefined8 uStack_150;
  longlong local_148;
  int local_140;
  undefined4 local_13c;
  uint local_138 [4];
  uint *local_128;
  undefined8 local_120;
  undefined4 local_118;
  uint local_114;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8 [24];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  uVar8 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140a4ca80(param_1,local_f8,0);
  local_148 = 0;
  local_13c = 0;
  plVar10 = local_f8;
  if (local_38 != (longlong *)0x0) {
    plVar10 = local_38;
  }
  local_140 = 0;
  local_128 = (uint *)0x0;
  local_120 = 0;
  local_118 = 0xffffffff;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  uVar12 = (longlong)(int)local_30 & 0x1fffffffffffffff;
  if (plVar10 + (int)local_30 < plVar10) {
    uVar12 = uVar8;
  }
  uVar11 = uVar8;
  if (uVar12 != 0) {
    do {
      if (*plVar10 != 0) {
        FUN_142223d90(*plVar10,&local_148);
      }
      plVar10 = plVar10 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar12);
    uVar11 = (ulonglong)local_114;
  }
  local_1d0 = local_1f8;
  local_1f8[0] = 0;
  local_1c8 = &local_1d0;
  if (0 < local_140 - (int)uVar11) {
    TSparseArray<TSetElement<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Compact(&local_148);
    local_1c0 = &local_1c8;
    AlgoImpl::
    IntroSortInternal<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair,FIdentityFunctor,TDereferenceWrapper<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair,TLess<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair>_>_>
              (local_148,(longlong)(int)(local_140 - local_114),local_1f8[0],&local_1c0);
  }
  TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
  ::Rehash(&local_148);
  iVar2 = (int)local_120;
  puStack_1e8 = local_138;
  local_1f0 = 0;
  uStack_1ec = 1;
  iStack_1dc = 0;
  uStack_1d8 = 0;
  if ((int)local_120 != 0) {
    puVar13 = local_138;
    if (local_128 != (uint *)0x0) {
      puVar13 = local_128;
    }
    uVar1 = *puVar13;
    uVar12 = uVar8;
    while (uVar1 == 0) {
      iVar4 = (int)uVar8;
      uStack_1d8 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uStack_1d8;
      local_1f0 = iVar4 + 1;
      uVar8 = (ulonglong)local_1f0;
      if ((int)((int)local_120 + -1 + ((int)local_120 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) {
        iStack_1dc = (int)local_120;
        goto LAB_14222763a;
      }
      uVar1 = puVar13[(longlong)iVar4 + 1];
    }
    uStack_1ec = -uVar1 & uVar1;
    iVar4 = 0x1f;
    if (uStack_1ec != 0) {
      for (; uStack_1ec >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_1ec == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iStack_1dc = (uStack_1d8 - iVar4) + 0x1f;
    if ((int)local_120 < iStack_1dc) {
      iStack_1dc = (int)local_120;
    }
  }
LAB_14222763a:
  uStack_180 = 0xffffffff;
  iStack_17c = iStack_1dc;
  local_178 = CONCAT44(uStack_1d4,uStack_1d8);
  local_170 = &local_148;
  uStack_168 = CONCAT44(uStack_1ec,local_1f0);
  local_1e0 = -1 << ((byte)local_120 & 0x1f);
  iStack_1dc = (int)local_120;
  uStack_190 = local_1f0;
  uStack_18c = uStack_1ec;
  local_188 = puStack_1e8;
  puStack_160 = puStack_1e8;
  uStack_150 = local_178;
  local_198 = local_170;
  uStack_158 = uStack_180;
  iStack_154 = iStack_17c;
  do {
    if (((iStack_17c == iVar2) && (local_188 == local_138)) && (local_198 == &local_148)) {
      local_100 = 0;
      if (local_108 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_148);
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
    plVar10 = *(longlong **)(*local_198 + (longlong)iStack_17c * 0x18);
    if (plVar10 != (longlong *)0x0) {
      cVar3 = FUN_142340f60(plVar10);
      if (cVar3 == '\0') {
        uVar5 = FUN_1428e7a40();
        lVar6 = UObjectBaseUtility::GetTypedOuter(plVar10,uVar5);
        while (lVar6 != 0) {
          cVar3 = FUN_142340f60(lVar6);
          if (cVar3 != '\0') goto LAB_142227719;
          FUN_1428e7a40();
          lVar6 = UObjectBaseUtility::GetTypedOuter(lVar6);
        }
      }
      else {
LAB_142227719:
        if (plVar10 == *(longlong **)(param_1 + 0x168)) {
          *(undefined8 *)(param_1 + 0x168) = 0;
        }
        (**(code **)(*plVar10 + 0x3b0))(plVar10,0);
        local_1c0 = *(undefined1 ****)(plVar10[2] + 0x18);
        FName::ToString(&local_1c0,&local_1a8);
        puVar9 = &DAT_143f3eda8;
        if (local_1a0 != 0) {
          puVar9 = local_1a8;
        }
        FString::PrintfImpl(&local_1b8,L"TRASH_%s",puVar9);
        puVar9 = &DAT_143f3eda8;
        if (local_1b0 != 0) {
          puVar9 = local_1b8;
        }
        FName::FName(&local_1c8,puVar9,1);
        if (local_1b8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_1a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        FUN_141791c20(&local_1d0,param_1,*(undefined8 *)(param_1 + 0x10),local_1c8);
        puVar7 = (undefined8 *)FName::ToString(&local_1d0,&local_1f0);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar7;
        }
        (**(code **)(*plVar10 + 0x138))(plVar10,puVar9,param_1,0x31);
        if (CONCAT44(uStack_1ec,local_1f0) != 0) {
          FMemory::Free();
        }
      }
    }
    uStack_180 = uStack_180 & ~uStack_18c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_190);
  } while( true );
}



// FUNCTION 142227880 FUN_142227880 body=75 status=ok
// SIG undefined FUN_142227880(void)

void FUN_142227880(longlong param_1)

{
  longlong local_res8 [4];
  
  FUN_14223c120(param_1,0);
  if ((*(byte *)(param_1 + 0x340) & 2) != 0) {
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
              (param_1 + 0x348,0);
  }
  FUN_1428e0430(param_1);
  local_res8[0] = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x290,local_res8);
  return;
}



// FUNCTION 1422278d0 FUN_1422278d0 body=248 status=ok
// SIG undefined FUN_1422278d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422278d0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_118 [32];
  longlong local_f8 [24];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  if (param_2 != 0) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
    uVar3 = 0;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_140749cd0(param_1,local_f8,0);
    plVar2 = local_f8;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    uVar4 = (longlong)(int)local_30 & 0x1fffffffffffffff;
    if (plVar2 + (int)local_30 < plVar2) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      do {
        plVar1 = (longlong *)*plVar2;
        if (plVar1[0x32] == param_2) {
          (**(code **)(*plVar1 + 0x418))(plVar1,param_3);
        }
        plVar2 = plVar2 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar4);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1422279d0 FUN_1422279d0 body=23 status=ok
// SIG undefined FUN_1422279d0(void)

void FUN_1422279d0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x168) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001422279df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x168) + 0x418))();
    return;
  }
  return;
}



// FUNCTION 1422279f0 FUN_1422279f0 body=135 status=ok
// SIG undefined FUN_1422279f0(void)

void FUN_1422279f0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined4 uStack_1c;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x410))(plVar1,param_2,1);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = uStack_1c;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  return;
}



// FUNCTION 142227a80 DiagnosticMessage body=253 status=ok
// SIG undefined DiagnosticMessage(void)

longlong * FActorTickFunction::DiagnosticMessage(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0x50),local_18,0);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((0xc - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (0xc - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar2 * 2),L"[TickAct",8);
  lVar2 = local_28 + lVar2 * 2;
  *(undefined4 *)(lVar2 + 0x10) = 0x72006f;
  *(undefined2 *)(lVar2 + 0x14) = 0x5d;
  *(undefined2 *)(lVar2 + 0x16) = 0;
  *param_2 = local_28;
  *(int *)(param_2 + 1) = local_20;
  *(int *)((longlong)param_2 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142227b80 FUN_142227b80 body=209 status=ok
// SIG undefined FUN_142227b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142227b80(undefined8 param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8 [24];
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar3 = 0;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_140725150(param_1,local_e8,0);
  puVar1 = local_e8;
  if (local_28 != (undefined8 *)0x0) {
    puVar1 = local_28;
  }
  uVar2 = (longlong)(int)local_20 & 0x1fffffffffffffff;
  if (puVar1 + (int)local_20 < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x5b8))((longlong *)*puVar1,0);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142227c60 FUN_142227c60 body=141 status=ok
// SIG undefined FUN_142227c60(void)

void FUN_142227c60(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  if (param_1[0x26] != 0) {
    if (param_2 != 0) {
      FUN_142712050(param_2);
      return;
    }
    uVar1 = (**(code **)(*param_1 + 0x148))();
    UWorld::GetPlayerControllerIterator(uVar1,&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      lVar2 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if (lVar2 != 0) {
        FUN_142712050(lVar2,param_1[0x26]);
      }
    }
  }
  return;
}



// FUNCTION 142227cf0 FUN_142227cf0 body=197 status=ok
// SIG undefined FUN_142227cf0(void)

void FUN_142227cf0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((*(byte *)((longlong)param_1 + 0x94) & 0x18) != 0x10) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if (((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) &&
       (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), iVar1 = DAT_146aee950,
       DAT_146aee950 = iVar1, lVar3 != 0)) {
      DAT_146aee950 = DAT_146aee950 + 1;
      (**(code **)(*param_1 + 0x340))(param_1);
      DAT_146aee950 = iVar1;
      if ((*(byte *)((longlong)param_1 + 0x94) & 4) != 0) {
        FUN_142543860(lVar3,param_1,1);
      }
    }
  }
  return;
}



// FUNCTION 142227dc0 FUN_142227dc0 body=803 status=ok
// SIG undefined FUN_142227dc0(void)

void FUN_142227dc0(longlong *param_1,longlong param_2,longlong param_3,char param_4,byte *param_5)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 local_178;
  uint local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  byte local_148 [4];
  undefined4 local_144;
  uint local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  ulonglong local_11c;
  uint local_114;
  ulonglong local_110;
  uint local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [160];
  
  if (param_4 == '\0') {
    local_13c = *(undefined4 *)(param_5 + 0xc);
    local_138 = *(undefined4 *)(param_5 + 0x10);
    local_148[0] = local_148[0] ^ (*param_5 ^ local_148[0]) & 3;
    local_144 = *(undefined4 *)(param_5 + 4);
    local_134 = *(undefined8 *)(param_5 + 0x14);
    local_140 = local_140 ^ (*(uint *)(param_5 + 8) ^ local_140) & 1;
    local_12c = *(undefined4 *)(param_5 + 0x1c);
    local_120 = *(undefined4 *)(param_5 + 0x28);
    local_fc = *(undefined4 *)(param_5 + 0x4c);
    local_f0 = *(undefined4 *)(param_5 + 0x58);
    local_e8 = *(undefined4 *)(param_5 + 0x60);
    local_e4 = *(undefined4 *)(param_5 + 100);
    local_e0 = *(undefined4 *)(param_5 + 0x68);
    local_128 = *(undefined8 *)(param_5 + 0x20);
    local_dc = *(undefined4 *)(param_5 + 0x6c);
    local_104 = *(undefined8 *)(param_5 + 0x44);
    local_d8 = *(undefined4 *)(param_5 + 0x70);
    local_f8 = *(undefined8 *)(param_5 + 0x50);
    local_d4 = *(undefined4 *)(param_5 + 0x74);
    local_ec = *(undefined4 *)(param_5 + 0x5c);
    local_11c = CONCAT44(*(undefined4 *)(param_5 + 0x30),(int)*(undefined8 *)(param_5 + 0x2c)) ^
                0x8000000080000000;
    local_d0 = *(undefined4 *)(param_5 + 0x78);
    local_114 = *(uint *)(param_5 + 0x34) ^ 0x80000000;
    local_c8 = *(undefined8 *)(param_5 + 0x80);
    local_170 = *(uint *)(param_5 + 0x40) ^ 0x80000000;
    local_c0 = *(undefined8 *)(param_5 + 0x88);
    local_110 = CONCAT44(*(undefined4 *)(param_5 + 0x3c),(int)*(undefined8 *)(param_5 + 0x38)) ^
                0x8000000080000000;
    pbVar5 = local_148;
    local_108 = local_170;
  }
  else {
    pbVar5 = (byte *)FUN_140729f20(local_b8);
  }
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x118);
    cVar3 = FUN_142235710(param_1);
    if (cVar3 != '\0') {
      local_150 = 0;
      local_160 = *(undefined4 *)(pbVar5 + 0x40);
      local_170 = *(uint *)(pbVar5 + 0x28);
      local_158 = 0;
      local_168 = *(undefined8 *)(pbVar5 + 0x38);
      local_178 = *(undefined8 *)(pbVar5 + 0x20);
      (**(code **)(*param_1 + 0x398))
                (param_1,param_2,uVar2,param_3,param_4,&local_178,&local_168,&local_158,pbVar5);
    }
    cVar3 = FUN_142235710(param_1);
    if (cVar3 != '\0') {
      local_160 = 0;
      local_178 = 0;
      local_170 = 0;
      FUN_1422239b0(param_1 + 0x50,param_1,uVar2,&local_178,pbVar5);
    }
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      local_160 = 0;
      local_170 = 0;
      local_178 = 0;
      FUN_142223b20(param_2 + 0x560,param_2,uVar2,param_3,&local_178,pbVar5);
    }
  }
  return;
}



// FUNCTION 1422280f0 FUN_1422280f0 body=571 status=ok
// SIG undefined FUN_1422280f0(void)

void FUN_1422280f0(longlong *param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  byte local_b8 [12];
  undefined4 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [8];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar1 = (undefined8 *)*param_4;
  _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
  local_ac = 0x3f800000;
  local_a4 = *puVar1;
  local_9c = *(undefined4 *)(puVar1 + 1);
  local_8c = *(undefined8 *)((longlong)puVar1 + 0xc);
  local_84 = *(undefined4 *)((longlong)puVar1 + 0x14);
  local_5c = *(undefined4 *)(puVar1 + 3);
  local_98 = local_a4;
  local_90 = local_9c;
  local_80 = local_8c;
  local_78 = local_84;
  FWeakObjectPtr::operator=(local_54,puVar1[5]);
  local_4c = *param_3;
  local_d8 = param_4[2];
  local_b8[0] = local_b8[0] | 1;
  local_48 = param_3[1];
  local_44 = param_3[2];
  local_40 = param_3[3];
  local_58 = param_3[4];
  local_38 = *(undefined8 *)(param_3 + 6);
  local_30 = *(undefined8 *)(param_2 + 0x18);
  local_d0 = *(undefined4 *)(param_4 + 3);
  local_c8 = local_8c;
  local_c0 = local_84;
  local_e0 = local_9c;
  local_e8 = local_a4;
  uVar2 = FWeakObjectPtr::Get(param_3 + 2);
  uVar3 = FWeakObjectPtr::Get(param_3);
  uVar4 = FWeakObjectPtr::Get(param_2 + 8);
  (**(code **)(*param_1 + 0x398))
            (param_1,uVar4,uVar3,uVar2,1,&local_e8,&local_c8,&local_d8,local_b8);
  if (0 < (int)param_1[0x51]) {
    local_e8 = param_4[2];
    local_e0 = *(undefined4 *)(param_4 + 3);
    uVar2 = FWeakObjectPtr::Get(param_3);
    FUN_1422239b0(param_1 + 0x50,param_1,uVar2,&local_e8,local_b8);
  }
  lVar5 = FWeakObjectPtr::Get(param_2 + 8);
  if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x568))) {
    local_e8 = param_4[2];
    local_e0 = *(undefined4 *)(param_4 + 3);
    uVar2 = FWeakObjectPtr::Get(param_3 + 2);
    uVar3 = FWeakObjectPtr::Get(param_3);
    FUN_142223b20(lVar5 + 0x560,lVar5,uVar3,uVar2,&local_e8,local_b8);
  }
  return;
}



// FUNCTION 142228330 FUN_142228330 body=7705 status=ok
// SIG undefined FUN_142228330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142228330(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  double param_5)

{
  wchar_t *_Dst;
  float fVar1;
  float fVar2;
  wchar_t _C;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  void *pvVar6;
  double dVar7;
  wint_t wVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  float *pfVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  uint uVar21;
  longlong *plVar22;
  int iVar23;
  wchar_t *pwVar24;
  char *pcVar25;
  wchar_t *pwVar26;
  int iVar27;
  longlong *plVar28;
  longlong *plVar29;
  ulonglong uVar30;
  wchar_t *pwVar31;
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_398 [32];
  double local_378;
  wchar_t *local_368;
  undefined8 local_360;
  wchar_t *local_358;
  undefined8 local_350;
  wchar_t *local_348;
  undefined8 local_340;
  wchar_t *local_338;
  undefined8 local_330;
  undefined8 local_328;
  float local_320;
  wchar_t *local_318;
  uint local_310;
  int local_30c;
  float local_308 [2];
  float local_300 [2];
  longlong *local_2f8;
  longlong local_2f0 [2];
  longlong *local_2e0;
  longlong *local_2d8;
  wchar_t *local_2d0;
  undefined8 local_2c8;
  wchar_t *local_2c0;
  int local_2b8;
  wchar_t *local_2b0;
  int local_2a8;
  undefined4 local_2a0;
  void *local_298;
  int local_290;
  float local_288;
  float fStack_284;
  undefined1 *puStack_280;
  int local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong local_268;
  undefined8 local_260;
  double local_258;
  void *local_250;
  int local_248;
  void *local_240;
  int local_238;
  longlong *local_230;
  undefined8 uStack_228;
  undefined1 *local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  longlong local_1d8 [2];
  undefined1 local_1c8 [24];
  int local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong local_198;
  undefined4 local_190;
  undefined8 local_188 [24];
  undefined8 *local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  plVar28 = (longlong *)(param_2 + 0x98);
  pwVar24 = (wchar_t *)0x0;
  local_258 = param_5;
  iVar23 = 0;
  local_2a0 = 0;
  local_2f0[0] = 0x3f800000;
  local_2f0[1] = 0x3f80000000000000;
  local_2f8 = plVar28;
  local_2e0 = param_1;
  local_2d8 = param_3;
  local_268 = param_2;
  local_260 = param_4;
  (**(code **)(*plVar28 + 0x20))(plVar28,local_2f0);
  (**(code **)(*param_1 + 0x5e0))(param_1,&local_318);
  iVar10 = *(int *)((longlong)param_1 + 0xc);
  pwVar19 = pwVar24;
  if (iVar10 < (int)DAT_1469e91c4) {
    uVar21 = iVar10 >> 0x1f & 0xffff;
    uVar9 = iVar10 + uVar21;
    pwVar19 = (wchar_t *)
              (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
              (longlong)(int)((uVar9 & 0xffff) - uVar21) * 0x18);
  }
  if ((*(uint *)(pwVar19 + 4) >> 0x1d & 1) != 0) {
    pwVar19 = L"";
    if (local_310 != 0) {
      pwVar19 = local_318;
    }
    FString::PrintfImpl(&local_348,L"%s DELETED (IsPendingKill() == true)",pwVar19);
    if (local_318 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_318 = local_348;
    local_310 = (int)local_340;
    local_30c = local_340._4_4_;
  }
  pcVar25 = "";
  pwVar19 = L"";
  if (local_310 != 0) {
    pwVar19 = local_318;
  }
  do {
    _C = *pwVar19;
    if ((_C == L'\0') && (*pcVar25 == '\0')) goto LAB_1422284cf;
    if ((uint)(ushort)_C != (int)*pcVar25) {
      wVar8 = towlower(_C);
      iVar10 = tolower((int)*pcVar25);
      if ((uint)wVar8 != (int)(char)iVar10) break;
    }
    pwVar19 = pwVar19 + 1;
    pcVar25 = pcVar25 + 1;
  } while( true );
  local_308[0] = 0.0;
  FUN_1428a6fb0(plVar28,&local_318,local_308);
LAB_1422284cf:
  local_2f0[0] = 0x3f8000003f800000;
  local_2f0[1] = 0x3f8000003f800000;
  (**(code **)(*plVar28 + 0x20))(plVar28,local_2f0);
  plVar15 = (longlong *)FName::FName(&local_328,&DAT_14500e4b8,1);
  plVar22 = (longlong *)*param_3;
  lVar20 = *plVar15;
  plVar15 = plVar22 + (int)param_3[1];
  for (; plVar22 != plVar15; plVar22 = plVar22 + 1) {
    if (*plVar22 == lVar20) {
      lVar20 = FUN_142235230(param_1);
      if ((int)lVar20 != 0) {
        uVar11 = FUN_142235230(param_1);
        local_378 = (double)CONCAT44(local_378._4_4_,uVar11);
        FString::PrintfImpl(&local_348,L"ROLE: %i RemoteRole: %i NetNode: %i",(char)param_1[0x25],
                            *(undefined1 *)((longlong)param_1 + 0x95));
        if (local_318 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_318 = local_348;
        local_310 = (int)local_340;
        local_30c = local_340._4_4_;
        if ((*(byte *)(param_1 + 0x12) & 0x20) != 0) {
          local_338 = (wchar_t *)0x0;
          local_330 = 10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
          pwVar19 = local_338;
          FGenericPlatformString::Memcpy(local_338,L" Tear Off",0x14);
          pwVar31 = local_318;
          lVar20 = (longlong)(int)local_310;
          if ((int)local_310 < 2) {
            pwVar31 = pwVar24;
            pwVar26 = pwVar19;
            iVar27 = local_330._4_4_;
            iVar13 = (int)local_330;
          }
          else {
            iVar10 = iVar23;
            if ((int)local_330 != 0) {
              iVar10 = (int)local_330 + -1;
            }
            if ((local_310 != 0) || (iVar27 = 1, iVar10 == 0)) {
              iVar27 = iVar23;
            }
            local_368 = (wchar_t *)0x0;
            local_360 = CONCAT44(local_360._4_4_,local_310);
            if ((local_310 == 0) && (iVar10 + iVar27 == 0)) {
              local_360 = 0;
              uVar30 = 0;
              pwVar26 = pwVar24;
              iVar27 = iVar23;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                        (&local_368,iVar10 + iVar27 + local_310,0);
              pwVar26 = local_368;
              _guard_xfg_dispatch_icall_nop(local_368,pwVar31,lVar20 * 2);
              uVar30 = local_360 & 0xffffffff;
              iVar27 = local_360._4_4_;
            }
            iVar14 = (int)uVar30;
            pwVar31 = pwVar19;
            iVar13 = iVar14;
            if (iVar10 != 0) {
              iVar13 = iVar14 + (uint)(iVar14 == 0) + iVar10;
              local_360 = CONCAT44(local_360._4_4_,iVar13);
              if (iVar27 < iVar13) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,uVar30);
                pwVar26 = local_368;
                iVar27 = local_360._4_4_;
                iVar13 = (int)local_360;
              }
              _guard_xfg_dispatch_icall_nop
                        (pwVar26 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)),pwVar19,
                         (longlong)iVar10 * 2);
              (pwVar26 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)))[iVar10] = L'\0';
            }
          }
          if (local_318 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          param_1 = local_2e0;
          plVar28 = local_2f8;
          local_318 = pwVar26;
          local_310 = iVar13;
          local_30c = iVar27;
          if (pwVar31 != (wchar_t *)0x0) {
            FMemory::Free(pwVar31);
            param_1 = local_2e0;
            plVar28 = local_2f8;
          }
        }
        local_308[0] = 0.0;
        lVar20 = FUN_1428a6fb0(plVar28,&local_318,local_308);
      }
      break;
    }
  }
  lVar3 = param_1[0x2d];
  local_300[0] = 0.0;
  fVar12 = DAT_1468b5da8;
  local_328 = (void *)DAT_1468b5da0;
  if (lVar3 != 0) {
    local_288 = *(float *)(lVar3 + 0x210);
    fStack_284 = *(float *)(lVar3 + 0x214);
    fVar12 = *(float *)(lVar3 + 0x218);
    puStack_280 = *(undefined1 **)(lVar3 + 0x218);
    auVar33._4_4_ = -(uint)(fStack_284 != *(float *)(lVar3 + 0x254));
    auVar33._0_4_ = -(uint)(local_288 != *(float *)(lVar3 + 0x250));
    auVar33._8_4_ = -(uint)(fVar12 != *(float *)(lVar3 + 600));
    auVar33._12_4_ = -(uint)(*(float *)(lVar3 + 0x21c) != *(float *)(lVar3 + 0x25c));
    iVar10 = movmskps((int)lVar20,auVar33);
    if (iVar10 != 0) {
      *(float *)(lVar3 + 0x250) = local_288;
      *(float *)(lVar3 + 0x254) = fStack_284;
      *(float *)(lVar3 + 600) = fVar12;
      *(float *)(lVar3 + 0x25c) = *(float *)(lVar3 + 0x21c);
      puVar16 = (undefined8 *)FQuat::Rotator(&local_288,&local_2d0);
      *(undefined8 *)(lVar3 + 0x260) = *puVar16;
      *(undefined4 *)(lVar3 + 0x268) = *(undefined4 *)(puVar16 + 1);
    }
    fVar12 = *(float *)(lVar3 + 0x268);
    local_328 = (void *)*(undefined8 *)(lVar3 + 0x260);
  }
  fVar40 = (float)DAT_146aeea50;
  fVar41 = DAT_146aeea50._4_4_;
  fVar1 = DAT_146aeea50._8_4_;
  fVar2 = DAT_146aeea50._12_4_;
  fVar35 = (float)((ulonglong)local_328 >> 0x20);
  fVar5 = (float)local_328;
  local_308[0] = 0.0001;
  auVar32._8_4_ = fVar12;
  auVar32._0_8_ = local_328;
  auVar32._12_4_ = 0;
  auVar33 = divps(auVar32,_DAT_146aeea50);
  fVar36 = (float)local_328 - (float)(int)auVar33._0_4_ * fVar40;
  fVar37 = fVar35 - (float)(int)auVar33._4_4_ * fVar41;
  fVar38 = fVar12 - (float)(int)auVar33._8_4_ * fVar1;
  fVar39 = 0.0 - (float)(int)auVar33._12_4_ * fVar2;
  fVar36 = (float)(((uint)(fVar36 + fVar40) ^ (uint)fVar36) & -(uint)(0.0 <= fVar36) ^
                  (uint)(fVar36 + fVar40));
  fVar37 = (float)(((uint)(fVar37 + fVar41) ^ (uint)fVar37) & -(uint)(0.0 <= fVar37) ^
                  (uint)(fVar37 + fVar41));
  fVar38 = (float)(((uint)(fVar38 + fVar1) ^ (uint)fVar38) & -(uint)(0.0 <= fVar38) ^
                  (uint)(fVar38 + fVar1));
  fVar39 = (float)(((uint)(fVar39 + fVar2) ^ (uint)fVar39) & -(uint)(0.0 <= fVar39) ^
                  (uint)(fVar39 + fVar2));
  auVar34._4_4_ =
       -(uint)(0.0001 < (float)(uRam0000000146aeea24 &
                               (((uint)(fVar37 - fVar41) ^ (uint)fVar37) &
                                -(uint)(fRam0000000146aeea44 < fVar37) ^ (uint)fVar37)));
  auVar34._0_4_ =
       -(uint)(0.0001 < (float)(_DAT_146aeea20 &
                               (((uint)(fVar36 - fVar40) ^ (uint)fVar36) &
                                -(uint)(_DAT_146aeea40 < fVar36) ^ (uint)fVar36)));
  auVar34._8_4_ =
       -(uint)(0.0001 < (float)(uRam0000000146aeea28 &
                               (((uint)(fVar38 - fVar1) ^ (uint)fVar38) &
                                -(uint)(fRam0000000146aeea48 < fVar38) ^ (uint)fVar38)));
  auVar34._12_4_ =
       -(uint)(0.0001 < (float)(uRam0000000146aeea2c &
                               (((uint)(fVar39 - fVar2) ^ (uint)fVar39) &
                                -(uint)(fRam0000000146aeea4c < fVar39) ^ (uint)fVar39)));
  iVar10 = movmskps(fVar12,auVar34);
  local_320 = fVar12;
  if (iVar10 == 0) {
    FString::PrintfImpl(&local_338,L"R(0)");
    iVar10 = (int)local_330;
  }
  else {
    local_358 = (wchar_t *)0x0;
    local_350 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,0);
    pwVar19 = local_358;
    FGenericPlatformString::Memcpy(local_358,&DAT_145010374,6);
    bVar4 = true;
    if (1e-08 < ABS(fVar5)) {
      FString::PrintfImpl(&local_250,L"P=%.2f",(double)fVar5);
      pvVar6 = local_250;
      uVar30 = local_350;
      iVar10 = iVar23;
      if (local_248 != 0) {
        iVar10 = local_248 + -1;
      }
      if (iVar10 != 0) {
        iVar27 = (int)local_350;
        lVar20 = (longlong)(int)local_350;
        iVar13 = (uint)((int)local_350 == 0) + iVar10 + (int)local_350;
        local_350 = CONCAT44(local_350._4_4_,iVar13);
        if (local_350._4_4_ < iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar30 & 0xffffffff);
          pwVar19 = local_358;
        }
        _guard_xfg_dispatch_icall_nop
                  (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)),pvVar6,(longlong)iVar10 * 2);
        (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
      }
      if (local_250 != (void *)0x0) {
        FMemory::Free(local_250);
      }
      bVar4 = false;
    }
    if (1e-08 < ABS(fVar35)) {
      if (!bVar4) {
        local_368 = (wchar_t *)0x0;
        local_360 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
        pwVar31 = local_368;
        FGenericPlatformString::Memcpy(local_368,&DAT_144063aa8,6);
        uVar30 = local_350;
        if (((int)local_360 != 0) && (iVar10 = (int)local_360 + -1, iVar10 != 0)) {
          iVar27 = (int)local_350;
          lVar20 = (longlong)(int)local_350;
          iVar13 = (uint)((int)local_350 == 0) + (int)local_350 + iVar10;
          local_350 = CONCAT44(local_350._4_4_,iVar13);
          if (local_350._4_4_ < iVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar30 & 0xffffffff);
            pwVar19 = local_358;
          }
          _guard_xfg_dispatch_icall_nop
                    (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)),pwVar31,(longlong)iVar10 * 2);
          (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
        }
        if (pwVar31 != (wchar_t *)0x0) {
          FMemory::Free(pwVar31);
        }
      }
      FString::PrintfImpl(&local_240,L"Y=%.2f",(double)fVar35);
      pvVar6 = local_240;
      uVar30 = local_350;
      iVar10 = iVar23;
      if (local_238 != 0) {
        iVar10 = local_238 + -1;
      }
      if (iVar10 != 0) {
        iVar27 = (int)local_350;
        lVar20 = (longlong)(int)local_350;
        iVar13 = (uint)((int)local_350 == 0) + iVar10 + (int)local_350;
        local_350 = CONCAT44(local_350._4_4_,iVar13);
        if (local_350._4_4_ < iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar30 & 0xffffffff);
          pwVar19 = local_358;
        }
        _guard_xfg_dispatch_icall_nop
                  (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)),pvVar6,(longlong)iVar10 * 2);
        (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
      }
      if (local_240 != (void *)0x0) {
        FMemory::Free(local_240);
      }
      bVar4 = false;
    }
    if (1e-08 < ABS(fVar12)) {
      if (!bVar4) {
        local_368 = (wchar_t *)0x0;
        local_360 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
        pwVar31 = local_368;
        FGenericPlatformString::Memcpy(local_368,&DAT_144063aa8,6);
        uVar30 = local_350;
        if (((int)local_360 != 0) && (iVar10 = (int)local_360 + -1, iVar10 != 0)) {
          iVar27 = (int)local_350;
          lVar20 = (longlong)(int)local_350;
          iVar13 = (uint)((int)local_350 == 0) + iVar10 + (int)local_350;
          local_350 = CONCAT44(local_350._4_4_,iVar13);
          if (local_350._4_4_ < iVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar30 & 0xffffffff);
            pwVar19 = local_358;
          }
          _guard_xfg_dispatch_icall_nop
                    (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)),pwVar31,(longlong)iVar10 * 2);
          (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
        }
        if (pwVar31 != (wchar_t *)0x0) {
          FMemory::Free(pwVar31);
        }
      }
      FString::PrintfImpl(&local_298,L"R=%.2f",(double)fVar12);
      pvVar6 = local_298;
      uVar30 = local_350;
      iVar10 = iVar23;
      if (local_290 != 0) {
        iVar10 = local_290 + -1;
      }
      if (iVar10 != 0) {
        iVar27 = (int)local_350;
        lVar20 = (longlong)(int)local_350;
        iVar13 = (uint)((int)local_350 == 0) + iVar10 + (int)local_350;
        local_350 = CONCAT44(local_350._4_4_,iVar13);
        if (local_350._4_4_ < iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar30 & 0xffffffff);
          pwVar19 = local_358;
        }
        _guard_xfg_dispatch_icall_nop
                  (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)),pvVar6,(longlong)iVar10 * 2);
        (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
      }
      if (local_298 != (void *)0x0) {
        FMemory::Free(local_298);
      }
    }
    local_368 = (wchar_t *)0x0;
    local_360 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
    pwVar31 = local_368;
    FGenericPlatformString::Memcpy(local_368,&DAT_144063ad0,4);
    uVar30 = local_350;
    if (((int)local_360 != 0) && (iVar10 = (int)local_360 + -1, iVar10 != 0)) {
      iVar27 = (int)local_350;
      lVar20 = (longlong)(int)local_350;
      iVar13 = (uint)((int)local_350 == 0) + (int)local_350 + iVar10;
      local_350 = CONCAT44(local_350._4_4_,iVar13);
      if (local_350._4_4_ < iVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar30 & 0xffffffff);
        pwVar19 = local_358;
      }
      _guard_xfg_dispatch_icall_nop
                (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)),pwVar31,(longlong)iVar10 * 2);
      (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
    }
    if (pwVar31 != (wchar_t *)0x0) {
      FMemory::Free(pwVar31);
    }
    local_330 = local_350;
    param_1 = local_2e0;
    iVar10 = (int)local_350;
    local_338 = pwVar19;
  }
  lVar20 = param_1[0x2d];
  pwVar19 = L"";
  if (iVar10 != 0) {
    pwVar19 = local_338;
  }
  if (lVar20 == 0) {
    local_328 = _DAT_1468b5d90;
    local_320 = DAT_1468b5d98;
  }
  else {
    local_328 = *(void **)(lVar20 + 0x220);
    local_320 = *(float *)(lVar20 + 0x228);
  }
  fVar41 = SUB84(local_328,0);
  fVar40 = ABS(fVar41);
  fVar12 = local_328._4_4_;
  if (((0.0001 < fVar40) || (0.0001 < ABS(local_328._4_4_))) || (0.0001 < ABS(local_320))) {
    local_358 = (wchar_t *)0x0;
    local_350 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,0);
    pwVar31 = local_358;
    FGenericPlatformString::Memcpy(local_358,&DAT_144063a8c,6);
    bVar4 = true;
    if (1e-08 < fVar40) {
      FString::PrintfImpl(&local_2c0,L"X=%.2f",(double)fVar41);
      pwVar26 = local_2c0;
      uVar30 = local_350;
      iVar10 = iVar23;
      if (local_2b8 != 0) {
        iVar10 = local_2b8 + -1;
      }
      if (iVar10 != 0) {
        iVar27 = (int)local_350;
        lVar20 = (longlong)(int)local_350;
        iVar13 = (uint)((int)local_350 == 0) + (int)local_350 + iVar10;
        local_350 = CONCAT44(local_350._4_4_,iVar13);
        if (local_350._4_4_ < iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar30 & 0xffffffff);
          pwVar31 = local_358;
        }
        _guard_xfg_dispatch_icall_nop
                  (pwVar31 + (lVar20 - (ulonglong)(iVar27 != 0)),pwVar26,(longlong)iVar10 * 2);
        (pwVar31 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
      }
      if (local_2c0 != (wchar_t *)0x0) {
        FMemory::Free(local_2c0);
      }
      bVar4 = false;
    }
    if (1e-08 < ABS(fVar12)) {
      if (!bVar4) {
        local_368 = (wchar_t *)0x0;
        local_360 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
        pwVar26 = local_368;
        FGenericPlatformString::Memcpy(local_368,&DAT_144063aa8,6);
        uVar30 = local_350;
        if (((int)local_360 != 0) && (iVar10 = (int)local_360 + -1, iVar10 != 0)) {
          iVar27 = (int)local_350;
          lVar20 = (longlong)(int)local_350;
          iVar13 = (uint)((int)local_350 == 0) + (int)local_350 + iVar10;
          local_350 = CONCAT44(local_350._4_4_,iVar13);
          if (local_350._4_4_ < iVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar30 & 0xffffffff);
            pwVar31 = local_358;
          }
          _guard_xfg_dispatch_icall_nop
                    (pwVar31 + (lVar20 - (ulonglong)(iVar27 != 0)),pwVar26,(longlong)iVar10 * 2);
          (pwVar31 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
        }
        if (pwVar26 != (wchar_t *)0x0) {
          FMemory::Free(pwVar26);
        }
      }
      FString::PrintfImpl(&local_2b0,L"Y=%.2f",(double)fVar12);
      pwVar26 = local_2b0;
      uVar30 = local_350;
      iVar10 = iVar23;
      if (local_2a8 != 0) {
        iVar10 = local_2a8 + -1;
      }
      if (iVar10 != 0) {
        iVar27 = (int)local_350;
        lVar20 = (longlong)(int)local_350;
        iVar13 = (uint)((int)local_350 == 0) + (int)local_350 + iVar10;
        local_350 = CONCAT44(local_350._4_4_,iVar13);
        if (local_350._4_4_ < iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar30 & 0xffffffff);
          pwVar31 = local_358;
        }
        _guard_xfg_dispatch_icall_nop
                  (pwVar31 + (lVar20 - (ulonglong)(iVar27 != 0)),pwVar26,(longlong)iVar10 * 2);
        (pwVar31 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
      }
      if (local_2b0 != (wchar_t *)0x0) {
        FMemory::Free(local_2b0);
      }
      bVar4 = false;
    }
    if (1e-08 < ABS(local_320)) {
      if (!bVar4) {
        local_368 = (wchar_t *)0x0;
        local_360 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
        pwVar26 = local_368;
        FGenericPlatformString::Memcpy(local_368,&DAT_144063aa8,6);
        uVar30 = local_350;
        if (((int)local_360 != 0) && (iVar10 = (int)local_360 + -1, iVar10 != 0)) {
          iVar27 = (int)local_350;
          lVar20 = (longlong)(int)local_350;
          iVar13 = (uint)((int)local_350 == 0) + (int)local_350 + iVar10;
          local_350 = CONCAT44(local_350._4_4_,iVar13);
          if (local_350._4_4_ < iVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar30 & 0xffffffff);
            pwVar31 = local_358;
          }
          _guard_xfg_dispatch_icall_nop
                    (pwVar31 + (lVar20 - (ulonglong)(iVar27 != 0)),pwVar26,(longlong)iVar10 * 2);
          (pwVar31 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
        }
        if (pwVar26 != (wchar_t *)0x0) {
          FMemory::Free(pwVar26);
        }
      }
      FString::PrintfImpl(&local_328,L"Z=%.2f",(double)local_320);
      pvVar6 = local_328;
      uVar30 = local_350;
      iVar10 = iVar23;
      if (local_320 != 0.0) {
        iVar10 = (int)local_320 + -1;
      }
      if (iVar10 != 0) {
        iVar27 = (int)local_350;
        lVar20 = (longlong)(int)local_350;
        iVar13 = (uint)((int)local_350 == 0) + iVar10 + (int)local_350;
        local_350 = CONCAT44(local_350._4_4_,iVar13);
        if (local_350._4_4_ < iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar30 & 0xffffffff);
          pwVar31 = local_358;
        }
        _guard_xfg_dispatch_icall_nop
                  (pwVar31 + (lVar20 - (ulonglong)(iVar27 != 0)),pvVar6,(longlong)iVar10 * 2);
        (pwVar31 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
      }
      if (local_328 != (void *)0x0) {
        FMemory::Free(local_328);
      }
    }
    local_368 = (wchar_t *)0x0;
    local_360 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
    pwVar26 = local_368;
    FGenericPlatformString::Memcpy(local_368,&DAT_144063ad0,4);
    uVar30 = local_350;
    if (((int)local_360 != 0) && (iVar10 = (int)local_360 + -1, iVar10 != 0)) {
      iVar27 = (int)local_350;
      lVar20 = (longlong)(int)local_350;
      iVar13 = (uint)((int)local_350 == 0) + iVar10 + (int)local_350;
      local_350 = CONCAT44(local_350._4_4_,iVar13);
      if (local_350._4_4_ < iVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar30 & 0xffffffff);
        pwVar31 = local_358;
      }
      _guard_xfg_dispatch_icall_nop
                (pwVar31 + (lVar20 - (ulonglong)(iVar27 != 0)),pwVar26,(longlong)iVar10 * 2);
      (pwVar31 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
    }
    if (pwVar26 != (wchar_t *)0x0) {
      FMemory::Free(pwVar26);
    }
    local_340 = local_350;
    param_1 = local_2e0;
    iVar10 = (int)local_350;
    local_348 = pwVar31;
  }
  else {
    FString::PrintfImpl(&local_348,L"V(0)");
    iVar10 = (int)local_340;
  }
  pwVar31 = L"";
  if (iVar10 != 0) {
    pwVar31 = local_348;
  }
  FString::PrintfImpl(local_2f0,L"Location: %s Rotation: %s",pwVar31,pwVar19);
  plVar28 = local_2f8;
  FUN_1428a6fb0(local_2f8,local_2f0,local_300);
  if (local_2f0[0] != 0) {
    FMemory::Free();
  }
  if (local_348 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_338 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  plVar17 = (longlong *)FName::FName(&local_328,L"physics",1);
  plVar29 = local_2d8;
  plVar22 = (longlong *)*local_2d8;
  plVar15 = plVar22 + (int)local_2d8[1];
  for (; plVar22 != plVar15; plVar22 = plVar22 + 1) {
    if (*plVar22 == *plVar17) {
      local_300[0] = 0.0;
      pfVar18 = (float *)(**(code **)(*param_1 + 0x308))(param_1,&local_2d0);
      fVar12 = pfVar18[1];
      fVar40 = *pfVar18;
      pfVar18 = (float *)(**(code **)(*param_1 + 0x308))(param_1,&local_328);
      fVar41 = pfVar18[1];
      fVar1 = *pfVar18;
      fVar2 = pfVar18[2];
      pfVar18 = (float *)(**(code **)(*param_1 + 0x308))(param_1,&local_358);
      if (((0.0001 < ABS(*pfVar18)) || (0.0001 < ABS(pfVar18[1]))) || (0.0001 < ABS(pfVar18[2]))) {
        local_368 = (wchar_t *)0x0;
        local_360 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
        pwVar19 = local_368;
        FGenericPlatformString::Memcpy(local_368,&DAT_144063a8c,6);
        bVar4 = true;
        if (1e-08 < ABS(*pfVar18)) {
          FString::PrintfImpl(&local_2b0,L"X=%.2f",(double)*pfVar18);
          pwVar31 = local_2b0;
          uVar30 = local_360;
          iVar10 = iVar23;
          if (local_2a8 != 0) {
            iVar10 = local_2a8 + -1;
          }
          if (iVar10 != 0) {
            iVar27 = (int)local_360;
            lVar20 = (longlong)(int)local_360;
            iVar13 = (uint)((int)local_360 == 0) + iVar10 + (int)local_360;
            local_360 = CONCAT44(local_360._4_4_,iVar13);
            if (local_360._4_4_ < iVar13) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,uVar30 & 0xffffffff);
              pwVar19 = local_368;
            }
            _guard_xfg_dispatch_icall_nop
                      (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)),pwVar31,(longlong)iVar10 * 2);
            (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
          }
          if (local_2b0 != (wchar_t *)0x0) {
            FMemory::Free(local_2b0);
          }
          bVar4 = false;
        }
        if (1e-08 < ABS(pfVar18[1])) {
          if (!bVar4) {
            local_338 = (wchar_t *)0x0;
            local_330 = 3;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
            pwVar31 = local_338;
            FGenericPlatformString::Memcpy(local_338,&DAT_144063aa8,6);
            uVar30 = local_360;
            if (((int)local_330 != 0) && (iVar10 = (int)local_330 + -1, iVar10 != 0)) {
              iVar27 = (int)local_360;
              lVar20 = (longlong)(int)local_360;
              iVar13 = (uint)((int)local_360 == 0) + iVar10 + (int)local_360;
              local_360 = CONCAT44(local_360._4_4_,iVar13);
              if (local_360._4_4_ < iVar13) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,uVar30 & 0xffffffff);
                pwVar19 = local_368;
              }
              _guard_xfg_dispatch_icall_nop
                        (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)),pwVar31,(longlong)iVar10 * 2)
              ;
              (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
            }
            if (pwVar31 != (wchar_t *)0x0) {
              FMemory::Free(pwVar31);
            }
          }
          FString::PrintfImpl(&local_2c0,L"Y=%.2f",(double)pfVar18[1]);
          pwVar31 = local_2c0;
          uVar30 = local_360;
          iVar10 = iVar23;
          if (local_2b8 != 0) {
            iVar10 = local_2b8 + -1;
          }
          if (iVar10 != 0) {
            iVar27 = (int)local_360;
            lVar20 = (longlong)(int)local_360;
            iVar13 = (uint)((int)local_360 == 0) + iVar10 + (int)local_360;
            local_360 = CONCAT44(local_360._4_4_,iVar13);
            if (local_360._4_4_ < iVar13) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,uVar30 & 0xffffffff);
              pwVar19 = local_368;
            }
            _guard_xfg_dispatch_icall_nop
                      (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)),pwVar31,(longlong)iVar10 * 2);
            (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
          }
          if (local_2c0 != (wchar_t *)0x0) {
            FMemory::Free(local_2c0);
          }
          bVar4 = false;
        }
        if (1e-08 < ABS(pfVar18[2])) {
          if (!bVar4) {
            local_338 = (wchar_t *)0x0;
            local_330 = 3;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
            pwVar31 = local_338;
            FGenericPlatformString::Memcpy(local_338,&DAT_144063aa8,6);
            uVar30 = local_360;
            if (((int)local_330 != 0) && (iVar10 = (int)local_330 + -1, iVar10 != 0)) {
              iVar27 = (int)local_360;
              lVar20 = (longlong)(int)local_360;
              iVar13 = (uint)((int)local_360 == 0) + iVar10 + (int)local_360;
              local_360 = CONCAT44(local_360._4_4_,iVar13);
              if (local_360._4_4_ < iVar13) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,uVar30 & 0xffffffff);
                pwVar19 = local_368;
              }
              _guard_xfg_dispatch_icall_nop
                        (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)),pwVar31,(longlong)iVar10 * 2)
              ;
              (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
            }
            if (pwVar31 != (wchar_t *)0x0) {
              FMemory::Free(pwVar31);
            }
          }
          FString::PrintfImpl(&local_298,L"Z=%.2f",(double)pfVar18[2]);
          pvVar6 = local_298;
          uVar30 = local_360;
          iVar10 = iVar23;
          if (local_290 != 0) {
            iVar10 = local_290 + -1;
          }
          if (iVar10 != 0) {
            iVar27 = (int)local_360;
            lVar20 = (longlong)(int)local_360;
            iVar13 = (uint)((int)local_360 == 0) + iVar10 + (int)local_360;
            local_360 = CONCAT44(local_360._4_4_,iVar13);
            if (local_360._4_4_ < iVar13) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,uVar30 & 0xffffffff);
              pwVar19 = local_368;
            }
            _guard_xfg_dispatch_icall_nop
                      (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)),pvVar6,(longlong)iVar10 * 2);
            (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
          }
          if (local_298 != (void *)0x0) {
            FMemory::Free(local_298);
          }
        }
        local_338 = (wchar_t *)0x0;
        local_330 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
        pwVar31 = local_338;
        FGenericPlatformString::Memcpy(local_338,&DAT_144063ad0,4);
        uVar30 = local_360;
        if (((int)local_330 != 0) && (iVar10 = (int)local_330 + -1, iVar10 != 0)) {
          iVar27 = (int)local_360;
          lVar20 = (longlong)(int)local_360;
          iVar13 = (uint)((int)local_360 == 0) + iVar10 + (int)local_360;
          local_360 = CONCAT44(local_360._4_4_,iVar13);
          if (local_360._4_4_ < iVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,uVar30 & 0xffffffff);
            pwVar19 = local_368;
          }
          _guard_xfg_dispatch_icall_nop
                    (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)),pwVar31,(longlong)iVar10 * 2);
          (pwVar19 + (lVar20 - (ulonglong)(iVar27 != 0)))[iVar10] = L'\0';
        }
        if (pwVar31 != (wchar_t *)0x0) {
          FMemory::Free(pwVar31);
        }
        local_340 = local_360;
        param_1 = local_2e0;
        plVar29 = local_2d8;
        iVar10 = (int)local_360;
        local_348 = pwVar19;
      }
      else {
        FString::PrintfImpl(&local_348,L"V(0)");
        iVar10 = (int)local_340;
      }
      pwVar19 = L"";
      if (iVar10 != 0) {
        pwVar19 = local_348;
      }
      local_378 = (double)SQRT(fVar40 * fVar40 + fVar12 * fVar12);
      FString::PrintfImpl(local_2f0,L"Velocity: %s Speed: %f Speed2D: %f",pwVar19,
                          (double)SQRT(fVar1 * fVar1 + fVar41 * fVar41 + fVar2 * fVar2));
      plVar28 = local_2f8;
      FUN_1428a6fb0(local_2f8,local_2f0,local_300);
      if (local_2f0[0] != 0) {
        FMemory::Free();
      }
      if (local_348 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      break;
    }
  }
  plVar17 = (longlong *)FName::FName(&local_328,L"collision",1);
  plVar22 = (longlong *)*plVar29;
  plVar15 = plVar22 + (int)plVar29[1];
  if (plVar22 != plVar15) {
LAB_142229877:
    if (*plVar22 != *plVar17) goto code_r0x00014222987c;
    *(undefined1 *)(local_268 + 0x38) = 0;
    (**(code **)(*param_1 + 0x570))(param_1,local_308,local_300,0);
    local_328 = (void *)((ulonglong)local_328 & 0xffffffff00000000);
    FString::PrintfImpl(local_2f0,L"Collision Radius: %f Height: %f",(double)local_308[0],
                        (double)local_300[0]);
    FUN_1428a6fb0(plVar28,local_2f0,&local_328);
    if (local_2f0[0] != 0) {
      FMemory::Free();
    }
    if (param_1[0x2d] == 0) {
      local_328 = (void *)((ulonglong)local_328 & 0xffffffff00000000);
      local_348 = (wchar_t *)0x0;
      local_340 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,0);
      FGenericPlatformString::Memcpy(local_348,L"No RootComponent",0x22);
      FUN_1428a6fb0(plVar28,&local_348,&local_328);
      if (local_348 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    local_348 = (wchar_t *)0x0;
    local_340 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,0);
    pwVar19 = local_348;
    FGenericPlatformString::Memcpy(local_348,L"Overlapping ",0x1a);
    if (local_318 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_310 = (int)local_340;
    local_30c = local_340._4_4_;
    local_318 = pwVar19;
    local_1d8[0] = 0;
    local_1d8[1] = 0;
    TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_1c8,0,0);
    local_1a8 = 0xffffffff;
    local_1a4 = 0;
    local_198 = 0;
    local_190 = 0;
    AActor::GetOverlappingActors(param_1,local_1d8,0);
    puStack_280 = local_1c8;
    bVar4 = false;
    local_288 = 0.0;
    fStack_284 = 1.4013e-45;
    local_278 = 0xffffffff;
    uStack_274 = 0;
    uStack_270 = 0;
    iVar10 = local_1b0;
    if (local_1b0 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
      iVar10 = local_1b0;
    }
    uStack_218 = CONCAT44(uStack_274,local_278);
    local_210 = CONCAT44(uStack_26c,uStack_270);
    local_230 = local_1d8;
    uStack_228 = CONCAT44(fStack_284,local_288);
    local_278 = -1 << ((byte)iVar10 & 0x1f);
    puStack_1f8 = puStack_280;
    local_220 = puStack_280;
    local_208 = local_230;
    uStack_200 = uStack_228;
    uStack_1f0 = uStack_218;
    uStack_1e8 = local_210;
    while( true ) {
      if (((uStack_218._4_4_ == iVar10) && (local_220 == local_1c8)) && (local_230 == local_1d8))
      break;
      lVar20 = *(longlong *)(*local_230 + (longlong)uStack_218._4_4_ * 0x10);
      if (lVar20 != 0) {
        uVar9 = *(uint *)(lVar20 + 0xc);
        pwVar19 = pwVar24;
        if ((int)uVar9 < (int)DAT_1469e91c4) {
          uVar21 = uVar9 & 0xffff;
          if ((int)uVar9 < 0) {
            uVar9 = uVar9 + 0xffff;
            uVar21 = uVar21 - 0x10000;
          }
          pwVar19 = (wchar_t *)
                    (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                    (longlong)(int)uVar21 * 0x18);
        }
        if ((*(uint *)(pwVar19 + 4) >> 0x1d & 1) == 0) {
          local_2d0 = (wchar_t *)0x0;
          local_2c8 = 2;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d0,0);
          pwVar31 = local_2d0;
          local_378 = (double)CONCAT62(local_378._2_6_,0x3f);
          FGenericPlatformString::Convert<char,wchar_t>(local_2d0,2,&DAT_14500d0f4);
          local_328 = *(void **)(lVar20 + 0x18);
          FName::ToString(&local_328);
          pwVar19 = local_338;
          iVar27 = (int)local_330;
          if ((int)local_310 < 2) {
            uVar11 = local_330._4_4_;
            local_338 = (wchar_t *)0x0;
            local_330 = 0;
          }
          else {
            iVar27 = iVar23;
            if ((int)local_330 != 0) {
              iVar27 = (int)local_330 + -1;
            }
            if ((local_310 != 0) || (iVar13 = 1, iVar27 == 0)) {
              iVar13 = iVar23;
            }
            local_368 = (wchar_t *)0x0;
            local_378 = (double)CONCAT44(local_378._4_4_,iVar13 + iVar27);
            TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
                      (&local_368,local_318,local_310,0);
            pwVar26 = local_338;
            uVar30 = local_360;
            pwVar19 = local_368;
            if (iVar27 != 0) {
              iVar13 = (int)local_360;
              lVar20 = (longlong)(int)local_360;
              iVar14 = (uint)((int)local_360 == 0) + iVar27 + (int)local_360;
              local_360 = CONCAT44(local_360._4_4_,iVar14);
              if (local_360._4_4_ < iVar14) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,uVar30 & 0xffffffff);
              }
              pwVar19 = local_368;
              _Dst = local_368 + (lVar20 - (ulonglong)(iVar13 != 0));
              _guard_xfg_dispatch_icall_nop(_Dst,pwVar26,(longlong)iVar27 * 2);
              _Dst[iVar27] = L'\0';
            }
            iVar27 = (int)local_360;
            uVar11 = local_360._4_4_;
            local_360 = 0;
            local_368 = (wchar_t *)0x0;
          }
          iVar13 = (int)local_2c8;
          local_340 = CONCAT44(uVar11,iVar27);
          local_348 = pwVar19;
          if (iVar27 < 2) {
            iVar27 = local_2c8._4_4_;
            local_2c8 = 0;
            pwVar19 = pwVar31;
            pwVar31 = pwVar24;
          }
          else {
            iVar13 = iVar23;
            if ((int)local_2c8 != 0) {
              iVar13 = (int)local_2c8 + -1;
            }
            if ((iVar27 != 0) || (iVar27 = 1, iVar13 == 0)) {
              iVar27 = iVar23;
            }
            TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                      (&local_358,&local_348,iVar27 + iVar13);
            uVar30 = local_350;
            pwVar19 = local_358;
            if (iVar13 != 0) {
              iVar27 = (int)local_350;
              lVar20 = (longlong)(int)local_350;
              iVar14 = (uint)((int)local_350 == 0) + (int)local_350 + iVar13;
              local_350 = CONCAT44(local_350._4_4_,iVar14);
              if (local_350._4_4_ < iVar14) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,uVar30 & 0xffffffff);
              }
              pwVar19 = local_358;
              pwVar26 = local_358 + (lVar20 - (ulonglong)(iVar27 != 0));
              _guard_xfg_dispatch_icall_nop(pwVar26,pwVar31,(longlong)iVar13 * 2);
              pwVar26[iVar13] = L'\0';
            }
            iVar13 = (int)local_350;
            iVar27 = local_350._4_4_;
            local_350 = 0;
            local_358 = (wchar_t *)0x0;
          }
          pwVar26 = local_348;
          if (local_318 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          local_318 = pwVar19;
          local_310 = iVar13;
          local_30c = iVar27;
          if (pwVar26 != (wchar_t *)0x0) {
            FMemory::Free(pwVar26);
          }
          if (local_338 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          if (pwVar31 != (wchar_t *)0x0) {
            FMemory::Free(pwVar31);
          }
          bVar4 = true;
        }
      }
      uStack_218 = CONCAT44(uStack_218._4_4_,(uint)uStack_218 & ~uStack_228._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_228);
    }
    if ((!bVar4) && (local_318 != L"Overlapping nothing")) {
      local_310 = 0;
      pwVar19 = pwVar24;
      if (local_30c != 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_318,0x14);
        pwVar19 = (wchar_t *)(ulonglong)local_310;
      }
      local_310 = (int)pwVar19 + 0x14;
      if (local_30c < (int)local_310) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318);
      }
      builtin_wcsncpy(local_318,L"Overlapping nothing",0x14);
    }
    plVar28 = local_2f8;
    local_328 = (void *)((ulonglong)local_328 & 0xffffffff00000000);
    FUN_1428a6fb0(local_2f8,&local_318,&local_328);
    local_190 = 0;
    if (local_198 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_1d8);
    param_1 = local_2e0;
    plVar29 = local_2d8;
  }
LAB_142229e37:
  local_328 = (void *)((ulonglong)local_328 & 0xffffffff00000000);
  if (param_1[0x23] == 0) {
    pwVar19 = L"None";
    pwVar31 = pwVar24;
  }
  else {
    local_2d8 = *(longlong **)(param_1[0x23] + 0x18);
    FName::ToString(&local_2d8,&local_2c0);
    pwVar31 = (wchar_t *)0x1;
    pwVar19 = L"";
    if (local_2b8 != 0) {
      pwVar19 = local_2c0;
    }
  }
  if (param_1[0x2a] == 0) {
    pwVar26 = L"None";
  }
  else {
    local_2f8 = *(longlong **)(param_1[0x2a] + 0x18);
    pwVar31 = (wchar_t *)(ulonglong)((uint)pwVar31 | 2);
    FName::ToString(&local_2f8,&local_2b0);
    pwVar26 = L"";
    if (local_2a8 != 0) {
      pwVar26 = local_2b0;
    }
  }
  FString::PrintfImpl(local_2f0,L" Instigator: %s Owner: %s",pwVar26,pwVar19);
  FUN_1428a6fb0(plVar28,local_2f0,&local_328);
  if (local_2f0[0] != 0) {
    FMemory::Free();
  }
  if ((((ulonglong)pwVar31 & 2) != 0) &&
     (pwVar31 = (wchar_t *)(ulonglong)((uint)pwVar31 & 0xfffffffd), local_2b0 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if ((((ulonglong)pwVar31 & 1) != 0) && (local_2c0 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar20 + 0x38) < DAT_146aeeae8) &&
     (_Init_thread_header(&DAT_146aeeae8), DAT_146aeeae8 == -1)) {
    FName::FName(&DAT_146aeeae0,L"Animation",1);
    _Init_thread_footer(&DAT_146aeeae8);
  }
  if ((*(int *)(lVar20 + 0x38) < DAT_146aeeaf8) &&
     (_Init_thread_header(&DAT_146aeeaf8), DAT_146aeeaf8 == -1)) {
    FName::FName(&DAT_146aeeaf0,L"Bones",1);
    _Init_thread_footer(&DAT_146aeeaf8);
  }
  plVar15 = (longlong *)*plVar29;
  plVar28 = plVar15 + (int)plVar29[1];
  plVar22 = plVar15;
  if (plVar15 != plVar28) {
    do {
      if (*plVar22 == DAT_146aeeae0) goto LAB_142229f98;
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar28);
    for (; plVar15 != plVar28; plVar15 = plVar15 + 1) {
      if (*plVar15 == DAT_146aeeaf0) goto LAB_142229f98;
    }
  }
  goto LAB_14222a070;
code_r0x00014222987c:
  plVar22 = plVar22 + 1;
  if (plVar22 == plVar15) goto LAB_142229e37;
  goto LAB_142229877;
LAB_142229f98:
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  FUN_140609cc0(param_1,local_188,0);
  dVar7 = local_258;
  plVar15 = (longlong *)*plVar29;
  plVar28 = plVar15 + (int)plVar29[1];
  for (; plVar15 != plVar28; plVar15 = plVar15 + 1) {
    if (*plVar15 == DAT_146aeeae0) {
      puVar16 = local_188;
      if (local_c8 != (undefined8 *)0x0) {
        puVar16 = local_c8;
      }
      pwVar19 = (wchar_t *)((longlong)(int)local_c0 & 0x1fffffffffffffff);
      if (puVar16 + (int)local_c0 < puVar16) {
        pwVar19 = pwVar24;
      }
      if (pwVar19 != (wchar_t *)0x0) {
        do {
          lVar20 = FUN_1423ac7e0(*puVar16);
          if (lVar20 != 0) {
            local_378 = dVar7;
            AK::MemoryMgr::StartProfileThreadUsage((long)lVar20);
          }
          puVar16 = puVar16 + 1;
          pwVar24 = (wchar_t *)((longlong)pwVar24 + 1);
        } while (pwVar24 != pwVar19);
      }
      break;
    }
  }
  if (local_c8 != (undefined8 *)0x0) {
    FMemory::Free();
  }
LAB_14222a070:
  if (local_318 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14222a150 FUN_14222a150 body=246 status=ok
// SIG undefined FUN_14222a150(void)

void FUN_14222a150(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x130) == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar3 = FUN_142956f50();
      uVar3 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
      *(undefined8 *)(param_1 + 0x130) = uVar3;
      FUN_14234b150(uVar3);
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x130) + 0x1fc);
      *pbVar1 = *pbVar1 ^ (*(byte *)(param_1 + 0x91) >> 5 ^
                          *(byte *)(*(longlong *)(param_1 + 0x130) + 0x1fc)) & 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x130) + 0x1f8) = *(undefined4 *)(param_1 + 300);
      cVar2 = UInputDelegateBinding::SupportsInputDelegate(*(undefined8 *)(param_1 + 0x10));
      if (cVar2 != '\0') {
        FUN_1424e5130(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x130));
      }
    }
    else {
      FUN_142712050(param_2);
    }
    FUN_142713b70(param_2,*(undefined8 *)(param_1 + 0x130));
  }
  return;
}



// FUNCTION 14222a250 FUN_14222a250 body=335 status=ok
// SIG undefined FUN_14222a250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14222a250(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined1 local_100;
  longlong local_f8 [24];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if ((*(byte *)(param_1 + 0x340) & 2) != 0) {
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
              (param_1 + 0x348,0);
  }
  if ((*(byte *)(param_1 + 0x94) & 0x18) == 0x10) {
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0xe7;
    FUN_1428e0470(param_1,param_2);
    local_100 = (undefined1)param_2;
    local_108 = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x2a0,&local_108);
    uVar2 = 0;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_140a4ca80(param_1,local_f8,0);
    plVar4 = local_f8;
    if (local_38 != (longlong *)0x0) {
      plVar4 = local_38;
    }
    uVar3 = (longlong)(int)local_30 & 0x1fffffffffffffff;
    if (plVar4 + (int)local_30 < plVar4) {
      uVar3 = uVar2;
    }
    if (uVar3 != 0) {
      do {
        plVar1 = (longlong *)*plVar4;
        if ((*(byte *)(plVar1 + 0x19) & 0x20) != 0) {
          (**(code **)(*plVar1 + 0x340))(plVar1,param_2);
        }
        plVar4 = plVar4 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar3);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14222a3b0 FUN_14222a3b0 body=67 status=ok
// SIG undefined FUN_14222a3b0(void)

void FUN_14222a3b0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  
  bVar4 = *(byte *)(param_1 + 0x90);
  if ((bVar4 & 0x40) == 0) {
    if (param_2 != '\0') {
      puVar1 = (undefined1 *)(param_1 + 0x95);
      puVar2 = (undefined1 *)(param_1 + 0x128);
      if (puVar2 != puVar1) {
        uVar3 = *puVar2;
        *puVar2 = *puVar1;
        *puVar1 = uVar3;
        bVar4 = *(byte *)(param_1 + 0x90);
      }
    }
    *(byte *)(param_1 + 0x90) = bVar4 | 0x40;
  }
  return;
}



// FUNCTION 14222a400 FUN_14222a400 body=2481 status=ok
// SIG undefined FUN_14222a400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_14222a400(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                  char param_5)

{
  longlong *plVar1;
  uint *puVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong *plVar20;
  uint *puVar21;
  ulonglong uVar22;
  undefined1 auStack_3c8 [32];
  ulonglong local_3a8;
  undefined8 local_3a0;
  undefined1 local_398;
  undefined8 local_390;
  undefined1 local_388;
  char local_378;
  undefined1 local_377;
  longlong local_370;
  undefined8 local_368;
  longlong local_360;
  uint local_358;
  uint local_354;
  longlong *local_350;
  undefined8 local_348;
  uint local_340;
  uint uStack_33c;
  uint *puStack_338;
  uint local_330;
  uint uStack_32c;
  uint uStack_328;
  undefined4 uStack_324;
  undefined1 *local_320;
  undefined8 local_318;
  uint uStack_310;
  uint uStack_30c;
  uint *local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  longlong *local_2f0;
  undefined8 uStack_2e8;
  uint *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8 [24];
  longlong *local_208;
  undefined8 local_200;
  undefined1 local_1f8 [192];
  undefined1 *local_138;
  undefined8 local_130;
  longlong local_128 [24];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  uVar22 = param_1[0x2d];
  uVar13 = 0;
  local_370 = param_4;
  local_368 = param_2;
  if (uVar22 != 0) {
    iVar6 = *(int *)(uVar22 + 0xc);
    uVar18 = uVar13;
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar14 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar14;
      uVar18 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar14) * 0x18;
    }
    if ((*(uint *)(uVar18 + 8) >> 0x1d & 1) != 0) {
      (**(code **)(*param_1 + 0x70))(param_1,1);
      param_1[0x2d] = 0;
      uVar22 = uVar13;
    }
    if ((uVar22 != 0) && (param_5 == '\0')) {
      if (param_3 != 0) {
        FUN_1423985a0(uVar22,param_3);
        uVar22 = param_1[0x2d];
      }
      local_3a8 = local_3a8 & 0xffffffffffffff00;
      FUN_142399d60(uVar22,param_2,0,0);
    }
  }
  local_350 = (longlong *)0x0;
  local_348 = 0;
  local_378 = UBlueprintGeneratedClass::GetGeneratedClassesHierarchy(param_1[2],&local_350);
  lVar16 = param_1[2];
  local_360 = 0;
  iVar6 = 0;
  local_354 = 0;
  uVar22 = uVar13;
  for (; lVar16 != 0; lVar16 = *(longlong *)(lVar16 + 0x30)) {
    lVar7 = UDynamicClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar6 = (int)uVar13;
      local_358 = iVar6 + 1;
      if ((int)uVar22 < (int)local_358) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_360,uVar13);
        uVar22 = (ulonglong)local_354;
      }
      uVar13 = (ulonglong)local_358;
      *(longlong *)(local_360 + (longlong)iVar6 * 8) = lVar16;
    }
    iVar6 = (int)uVar13;
    param_2 = local_368;
  }
  lVar16 = (longlong)(iVar6 + -1);
  if (-1 < iVar6 + -1) {
    do {
      FUN_1422e8490(*(undefined8 *)(local_360 + lVar16 * 8),param_1);
      lVar16 = lVar16 + -1;
    } while (-1 < lVar16);
  }
  cVar4 = local_378;
  if ((int)local_348 < 1) {
    FUN_142239b90(param_1);
    FUN_1422e5a50(param_1[2],param_1);
    cVar4 = local_378;
  }
  else if (local_378 == '\0') {
    if (param_1[0x2d] == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_370 = 0;
      uVar10 = FUN_1429028f0();
      local_388 = 0;
      local_390 = 0;
      local_398 = 0;
      local_3a0 = 0;
      local_3a8 = local_3a8 & 0xffffffff00000000;
      lVar16 = FUN_1417985e0(uVar10,param_1,0,0);
      local_3a8 = local_3a8 & 0xffffffffffffff00;
      *(uint *)(lVar16 + 8) = *(uint *)(lVar16 + 8) | 8;
      *(undefined1 *)(lVar16 + 0xca) = 1;
      FUN_142398770(lVar16,param_2,0,0);
      if (*(longlong **)(lVar16 + 0x118) == param_1) {
        (**(code **)(*param_1 + 0x70))(param_1,1);
        param_1[0x2d] = lVar16;
      }
      FUN_14234b150(lVar16);
      iVar6 = (int)param_1[0x65];
      *(int *)(param_1 + 0x65) = iVar6 + 1;
      if (*(int *)((longlong)param_1 + 0x32c) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 100,iVar6);
      }
      *(longlong *)(param_1[100] + (longlong)iVar6 * 8) = lVar16;
    }
    if ((*(byte *)((longlong)param_1 + 0x93) & 0x20) != 0) {
      (**(code **)(*param_1 + 0x4c0))(param_1);
    }
  }
  else {
    local_208 = (longlong *)0x0;
    local_200 = 0;
    FUN_140a4ca80(param_1,local_2c8,0);
    local_138 = (undefined1 *)0x0;
    local_130 = 0;
    plVar17 = local_2c8;
    if (local_208 != (longlong *)0x0) {
      plVar17 = local_208;
    }
    plVar20 = plVar17 + (int)local_200;
    for (; plVar17 != plVar20; plVar17 = plVar17 + 1) {
      lVar16 = *plVar17;
      if (lVar16 != 0) {
        lVar7 = FUN_1429ff160();
        if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (*(char *)(lVar16 + 0xca) == '\0')) {
          lVar7 = *(longlong *)(lVar16 + 0x20);
          lVar8 = FUN_1428dfc70();
          lVar7 = *(longlong *)(lVar7 + 0x10);
          if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
              lVar8 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if ((param_1[0x2d] == 0) && (*(longlong *)(lVar16 + 400) == 0)) {
              lVar8 = 0;
              if (*(longlong **)(lVar16 + 0x118) == param_1) {
                (**(code **)(*param_1 + 0x70))(param_1,CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
                param_1[0x2d] = lVar16;
                lVar8 = lVar16;
              }
              if (param_5 == '\0') {
                if (param_3 != 0) {
                  FUN_1423985a0(lVar8,param_3);
                  lVar8 = param_1[0x2d];
                }
                local_3a8 = local_3a8 & 0xffffffffffffff00;
                FUN_142399d60(lVar8,local_368,0,0);
              }
            }
            uVar22 = local_130;
            lVar7 = (longlong)(int)local_130;
            iVar6 = (int)local_130 + 1;
            local_130 = CONCAT44(local_130._4_4_,iVar6);
            if (local_130._4_4_ < iVar6) {
              TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
              ::ResizeGrow(local_1f8,uVar22 & 0xffffffff);
            }
            puVar11 = local_1f8;
            if (local_138 != (undefined1 *)0x0) {
              puVar11 = local_138;
            }
            *(longlong *)(puVar11 + lVar7 * 8) = lVar16;
          }
        }
      }
    }
    lVar16 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar10 = local_368;
    local_320 = (undefined1 *)(lVar16 + 0x70d);
    local_377 = *local_320;
    *local_320 = 1;
    lVar16 = (longlong)((int)local_348 + -1);
    if (-1 < (int)local_348 + -1) {
      do {
        lVar7 = local_350[lVar16];
        lVar8 = *(longlong *)(lVar7 + 0x238);
        if (lVar8 != 0) {
          FUN_14276f340(lVar8);
          local_3a0 = CONCAT71(local_3a0._1_7_,param_5);
          local_3a8 = param_3;
          FUN_142770000(lVar8,param_1,local_1f8,uVar10);
        }
        FUN_1422e8490(lVar7,param_1);
        lVar16 = lVar16 + -1;
      } while (-1 < lVar16);
    }
    puVar11 = local_320;
    uVar22 = 0;
    if ((*(byte *)((longlong)param_1 + 0x93) & 0x20) != 0) {
      (**(code **)(*param_1 + 0x4c0))(param_1);
    }
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_140a4ca80(param_1,local_128,0);
    plVar17 = local_128;
    if (local_68 != (longlong *)0x0) {
      plVar17 = local_68;
    }
    uVar13 = (longlong)(int)local_60 & 0x1fffffffffffffff;
    if (plVar17 + (int)local_60 < plVar17) {
      uVar13 = uVar22;
    }
    uVar18 = uVar22;
    plVar20 = local_208;
    if (uVar13 != 0) {
      do {
        lVar16 = *plVar17;
        if (((*(byte *)(lVar16 + 0xb8) & 1) == 0) && ((*(byte *)(lVar16 + 0xb9) & 4) != 0)) {
          uVar5 = *(uint *)(lVar16 + 0xc);
          uVar9 = uVar22;
          if ((int)uVar5 < (int)DAT_1469e91c4) {
            uVar14 = uVar5 & 0xffff;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 0xffff;
              uVar14 = uVar14 - 0x10000;
            }
            uVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                    (longlong)(int)uVar14 * 0x18;
          }
          if ((*(uint *)(uVar9 + 8) >> 0x1d & 1) == 0) {
            if (*(char *)(lVar16 + 0xca) != '\x01') {
              plVar12 = local_2c8;
              if (plVar20 != (longlong *)0x0) {
                plVar12 = plVar20;
              }
              plVar1 = plVar12 + (int)local_200;
              for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
                if (*plVar12 == lVar16) goto LAB_14222a94d;
              }
            }
            FUN_1427800b0(lVar16);
            plVar20 = local_208;
          }
        }
LAB_14222a94d:
        plVar17 = plVar17 + 1;
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar13);
    }
    lVar16 = local_370;
    if (local_370 != 0) {
      FUN_14232ea00(local_370,param_1,0);
    }
    FUN_142239b90(param_1);
    uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar4 = UWorld::IsGameWorld(uVar10);
    if (cVar4 == '\0') {
      plVar17 = param_1 + 0x56;
      uStack_33c = 1;
      uVar5 = *(uint *)(param_1 + 0x5b);
      puVar2 = (uint *)(param_1 + 0x58);
      local_340 = 0;
      uStack_32c = 0;
      uStack_328 = 0;
      if (uVar5 != 0) {
        puVar21 = (uint *)param_1[0x5a];
        if ((uint *)param_1[0x5a] == (uint *)0x0) {
          puVar21 = puVar2;
        }
        uVar14 = *puVar21;
        uVar13 = uVar22;
        uVar18 = uVar22;
        while (uVar14 == 0) {
          iVar6 = (int)uVar13;
          uStack_328 = (int)uVar18 + 0x20;
          uVar18 = (ulonglong)uStack_328;
          local_340 = iVar6 + 1;
          uVar13 = (ulonglong)local_340;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
          goto LAB_14222aa4c;
          uVar14 = puVar21[(longlong)iVar6 + 1];
        }
        uStack_33c = -uVar14 & uVar14;
        iVar6 = 0x1f;
        if (uStack_33c != 0) {
          for (; uStack_33c >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uStack_33c == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        uStack_32c = (uStack_328 - iVar6) + 0x1f;
        if ((int)uVar5 < (int)uStack_32c) {
LAB_14222aa4c:
          uStack_32c = uVar5;
        }
      }
      uVar14 = *(uint *)(param_1 + 0x5b);
      uStack_300 = CONCAT44(uStack_32c,0xffffffff);
      local_2f8 = CONCAT44(uStack_324,uStack_328);
      uStack_2e8 = CONCAT44(uStack_33c,local_340);
      local_330 = -1 << ((byte)uVar14 & 0x1f);
      uVar19 = uVar14 & 0xffffffe0;
      uStack_310 = local_340;
      uStack_30c = uStack_33c;
      puStack_338 = puVar2;
      uStack_32c = uVar14;
      local_308 = puVar2;
      local_2f0 = plVar17;
      puStack_2e0 = puVar2;
      uStack_2d8 = uStack_300;
      uStack_2d0 = local_2f8;
      local_318 = plVar17;
      if (uVar14 != uVar5) {
        puVar21 = (uint *)param_1[0x5a];
        if ((uint *)param_1[0x5a] == (uint *)0x0) {
          puVar21 = puVar2;
        }
        uVar15 = puVar21[(int)uVar14 >> 5] & local_330;
        iVar6 = (int)uVar14 >> 5;
        while (uVar15 == 0) {
          uVar19 = uVar19 + 0x20;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
          goto LAB_14222ab24;
          uVar15 = puVar21[(longlong)iVar6 + 1];
          local_330 = 0xffffffff;
          iVar6 = iVar6 + 1;
        }
        uVar15 = -uVar15 & uVar15;
        iVar6 = 0x1f;
        if (uVar15 != 0) {
          for (; uVar15 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uVar15 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        uStack_32c = (uVar19 - iVar6) + 0x1f;
        uVar14 = uStack_32c;
        if ((int)uVar5 < (int)uStack_32c) {
LAB_14222ab24:
          uStack_32c = uVar5;
          uVar14 = uVar5;
        }
      }
      while( true ) {
        if ((uStack_300._4_4_ == uVar14) && (local_308 == puVar2)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (local_318 == plVar17)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        lVar16 = local_370;
        puVar11 = local_320;
        if (!bVar3) break;
        if (*(longlong *)(*local_318 + (longlong)(int)uStack_300._4_4_ * 0x10) != 0) {
          FUN_1423393a0();
        }
        uStack_300 = CONCAT44(uStack_300._4_4_,(uint)uStack_300 & ~uStack_30c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_310);
      }
    }
    if (lVar16 != 0) {
      FUN_14232ea00(lVar16,param_1,1);
    }
    FUN_1422e5a50(param_1[2],param_1);
    uVar13 = (ulonglong)((longlong)(local_350 + (int)local_348) + (7 - (longlong)local_350)) >> 3;
    if (local_350 + (int)local_348 < local_350) {
      uVar13 = uVar22;
    }
    plVar17 = local_350;
    if (uVar13 != 0) {
      do {
        if (*(longlong *)(*plVar17 + 0x238) != 0) {
          CAkSegmentCtx::RemoveReferences();
        }
        uVar22 = uVar22 + 1;
        plVar17 = plVar17 + 1;
      } while (uVar22 != uVar13);
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    *puVar11 = local_377;
    if (local_138 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    cVar4 = local_378;
    if (local_208 != (longlong *)0x0) {
      FMemory::Free();
      cVar4 = local_378;
    }
  }
  uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_1428daf80(uVar10,param_1,0);
  (**(code **)(*param_1 + 0x538))(param_1,local_368);
  if (local_360 != 0) {
    FMemory::Free();
  }
  if (local_350 != (longlong *)0x0) {
    FMemory::Free();
  }
  return cVar4;
}



// FUNCTION 14222adc0 FUN_14222adc0 body=165 status=ok
// SIG undefined FUN_14222adc0(void)

void FUN_14222adc0(longlong param_1,float param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)plVar2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      if ((param_3 == 1) && (cVar3 = (**(code **)(*plVar2 + 0x460))(plVar2), cVar3 == '\0')) {
        return;
      }
      plVar2 = *(longlong **)(param_1 + 0x50);
      (**(code **)(*plVar2 + 0x408))(plVar2,param_2 * *(float *)(plVar2 + 0x1a),param_3,param_1);
    }
  }
  return;
}



// FUNCTION 14222ae70 ExportGeometry body=85 status=ok
// SIG undefined ExportGeometry(void)

undefined1 UNavCollisionBase::ExportGeometry(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavCollisionBase.h"
             ,0x36,L"Pure virtual not implemented (%s)",L"UNavCollisionBase::ExportGeometry");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavCollisionBase.h"
             ,0x36,L"Pure virtual not implemented (%s)",L"UNavCollisionBase::ExportGeometry");
  return 0;
}



// FUNCTION 14222aed0 FUN_14222aed0 body=204 status=ok
// SIG undefined FUN_14222aed0(void)

void FUN_14222aed0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)((longlong)param_1 + 0x44c) = *(int *)((longlong)param_1 + 0x44c) + 1;
  bVar3 = false;
  iVar6 = *(int *)((longlong)param_1 + 0x44c);
  iVar5 = (int)param_1[0x88] + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = param_1[0x87];
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_14222af30:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
        if (cVar4 == '\0') goto LAB_14222af30;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)((longlong)param_1 + 0x44c);
  }
  *(int *)((longlong)param_1 + 0x44c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x87,0);
  }
  FUN_142227b80(param_1);
  (**(code **)(*param_1 + 0x310))(param_1,1);
  FUN_14223c460(param_1,0);
  FUN_142227350(param_1,0,1);
  return;
}



// FUNCTION 14222afa0 FUN_14222afa0 body=678 status=ok
// SIG undefined FUN_14222afa0(void)

void FUN_14222afa0(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_2 != 0) {
    lVar6 = UInterface::GetPrivateStaticClass();
    lVar10 = param_2;
    while (lVar10 != lVar6) {
      lVar10 = *(longlong *)(lVar10 + 0x30);
      if (lVar10 == 0) {
        return;
      }
    }
    plVar2 = (longlong *)(param_1 + 0x2b0);
    uVar3 = *(uint *)(param_1 + 0x2d8);
    puVar1 = (uint *)(param_1 + 0x2c0);
    local_78 = 0;
    uStack_74 = 1;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (uVar3 != 0) {
      puVar13 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar14 = *puVar13;
      uStack_60 = 0;
      local_78 = 0;
      while (uVar14 == 0) {
        lVar10 = (longlong)local_78;
        uStack_60 = uStack_60 + 0x20;
        iVar8 = local_78 + 1;
        bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar8;
        if (bVar4) goto LAB_14222b0a9;
        uVar14 = puVar13[lVar10 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      iVar8 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      local_68._4_4_ = (uStack_60 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)local_68._4_4_) {
LAB_14222b0a9:
        local_68._4_4_ = uVar3;
      }
    }
    uVar14 = *(uint *)(param_1 + 0x2d8);
    uStack_48 = CONCAT44(uStack_74,local_78);
    uStack_38 = CONCAT44(local_68._4_4_,0xffffffff);
    local_58 = CONCAT44(uStack_5c,uStack_60);
    uVar12 = uVar14 & 0xffffffe0;
    _iStack_70 = CONCAT44(uStack_74,local_78);
    uStack_60 = 0xffffffff;
    uStack_5c = local_68._4_4_;
    local_50 = plVar2;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    local_68 = puVar1;
    if (uVar14 != uVar3) {
      puVar13 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar9 = puVar13[(int)uVar14 >> 5] & -1 << ((byte)uVar14 & 0x1f);
      iVar8 = (int)uVar14 >> 5;
      while (uVar9 == 0) {
        uVar12 = uVar12 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_14222b169;
        uVar9 = puVar13[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uVar14 = (uVar12 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uVar14) {
LAB_14222b169:
        uVar14 = uVar3;
      }
    }
    while ((uStack_5c != uVar14 || (local_68 != puVar1))) {
      lVar10 = *(longlong *)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
      if (lVar10 != 0) {
        lVar7 = UInterface::GetPrivateStaticClass();
        lVar6 = param_2;
        do {
          lVar11 = param_2;
          if (lVar6 == lVar7) goto LAB_14222b1c8;
          lVar6 = *(longlong *)(lVar6 + 0x30);
        } while (lVar6 != 0);
        lVar11 = 0;
LAB_14222b1c8:
        cVar5 = UClass::ImplementsInterface(*(undefined8 *)(lVar10 + 0x10),lVar11);
        if (cVar5 != '\0') {
          iVar8 = *(int *)(param_3 + 200);
          *(int *)(param_3 + 200) = iVar8 + 1;
          if (*(int *)(param_3 + 0xcc) < iVar8 + 1) {
            TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
            ::ResizeGrow(param_3,iVar8);
          }
          lVar6 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar6 = param_3;
          }
          *(longlong *)(lVar6 + (longlong)iVar8 * 8) = lVar10;
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
  }
  return;
}



// FUNCTION 14222b250 FUN_14222b250 body=355 status=ok
// SIG undefined FUN_14222b250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14222b250(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0 [192];
  ulonglong local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  undefined1 *puVar7;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  if (param_2 != 0) {
    local_24 = 0;
    local_30 = 0;
    local_28 = 0;
    if (param_1 != (longlong *)0x0) {
      FUN_140749cd0(param_1,local_f0,0);
    }
    puVar7 = local_f0;
    if (local_30 != 0) {
      puVar7 = (undefined1 *)0x0;
    }
    plVar6 = (longlong *)((ulonglong)puVar7 | local_30);
    plVar5 = plVar6 + local_28;
    for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
      plVar1 = (longlong *)*plVar6;
      if ((plVar1 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar1 + 0x440))(plVar1,param_2), cVar3 != '\0')) {
        if (param_3 == '\0') {
LAB_14222b39c:
          if (local_30 == 0) {
            return plVar1;
          }
          FMemory::Free();
          return plVar1;
        }
        lVar4 = FUN_1429f11d0();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && ((*(byte *)(plVar1 + 0x73) & 1) != 0)) goto LAB_14222b39c;
      }
    }
    if (local_30 != 0) {
      FMemory::Free();
    }
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x3b8))(param_1);
  return plVar5;
}



// FUNCTION 14222b3c0 FUN_14222b3c0 body=12 status=ok
// SIG undefined FUN_14222b3c0(void)

void FUN_14222b3c0(longlong param_1)

{
  FAudioDevice::FindClosestListenerIndex(param_1 + 0x130);
  return;
}



// FUNCTION 14222b3d0 FindComponentByClass body=675 status=ok
// SIG undefined FindComponentByClass(void)

longlong AActor::FindComponentByClass(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
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
  
  if (param_2 != 0) {
    lVar6 = FUN_1428e7a40();
    lVar9 = param_2;
    do {
      if (lVar9 == lVar6) {
        plVar2 = (longlong *)(param_1 + 0x2b0);
        uVar3 = *(uint *)(param_1 + 0x2d8);
        puVar1 = (uint *)(param_1 + 0x2c0);
        local_88 = 0;
        uStack_84 = 1;
        uStack_74 = 0;
        iStack_70 = 0;
        if (uVar3 == 0) goto LAB_14222b4e2;
        puVar11 = *(uint **)(param_1 + 0x2d0);
        if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
          puVar11 = puVar1;
        }
        uVar4 = *puVar11;
        iStack_70 = 0;
        local_88 = 0;
        goto joined_r0x00014222b487;
      }
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  return 0;
joined_r0x00014222b487:
  if (uVar4 != 0) goto LAB_14222b4b4;
  lVar9 = (longlong)local_88;
  iStack_70 = iStack_70 + 0x20;
  iVar7 = local_88 + 1;
  bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
  local_88 = iVar7;
  if (bVar5) goto LAB_14222b4de;
  uVar4 = puVar11[lVar9 + 1];
  goto joined_r0x00014222b487;
LAB_14222b4b4:
  uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
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
  if ((int)uVar3 < (int)uStack_74) {
LAB_14222b4de:
    uStack_74 = uVar3;
  }
LAB_14222b4e2:
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14222b5b7;
      uVar8 = puVar11[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = uVar8 - 1 & uVar8 ^ uVar8;
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
    uStack_74 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14222b5b7:
      uStack_74 = uVar3;
    }
  }
  do {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      return 0;
    }
    lVar9 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (lVar9 != 0) {
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(param_2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(param_2 + 0x90) * 8) != param_2 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        return lVar9;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  } while( true );
}



// FUNCTION 14222b680 FindFirstFreeName body=336 status=ok
// SIG undefined FindFirstFreeName(void)

undefined8 * FindFirstFreeName(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)param_1 = param_3;
  iVar6 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  uVar2 = UObject::GetPrivateStaticClass();
  lVar3 = FUN_141799680(uVar2,param_2,CONCAT44(100,param_3),0,0,0,0);
  if (lVar3 == 0) {
    uVar2 = *param_1;
    uVar4 = UObject::GetPrivateStaticClass();
    lVar3 = FUN_141799680(uVar4,param_2,uVar2,0,0,0,0);
    while (lVar3 != 0) {
      iVar6 = iVar6 + 1;
      *param_1 = CONCAT44(iVar6,param_3);
      uVar2 = UObject::GetPrivateStaticClass();
      lVar3 = FUN_141799680(uVar2,param_2,CONCAT44(iVar6,param_3),0,0,0,0);
    }
  }
  else {
    iVar5 = 0x7fffffff;
    do {
      iVar1 = iVar6 + (iVar5 - iVar6) / 2;
      uVar2 = UObject::GetPrivateStaticClass();
      lVar3 = FUN_141799680(uVar2,param_2,CONCAT44(iVar1,param_3),0,0,0,0);
      if (lVar3 != 0) {
        iVar6 = iVar1 + 1;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
    } while (iVar5 != iVar6);
    *param_1 = CONCAT44(iVar6,param_3);
  }
  return param_1;
}



// FUNCTION 14222b7d0 FindId body=202 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint local_res8;
  uint local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar2 +
                    ((longlong)(int)(param_3[1] ^ *param_3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      lVar4 = *param_1;
      do {
        lVar3 = (longlong)iVar5;
        local_res8 = *param_3;
        local_res20 = *(undefined4 *)(lVar4 + lVar3 * 0x50);
        local_res24 = *(undefined4 *)(lVar4 + 4 + lVar3 * 0x50);
        local_resc = param_3[1];
        cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res20,&local_res8);
        if (cVar1 != '\0') {
          *param_2 = iVar5;
          return param_2;
        }
        lVar4 = *param_1;
        iVar5 = *(int *)(lVar4 + 0x40 + lVar3 * 0x50);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14222b8a0 FindOrAddNetworkObjectInfo body=53 status=ok
// SIG undefined FindOrAddNetworkObjectInfo(void)

undefined8 AActor::FindOrAddNetworkObjectInfo(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
    uVar2 = FUN_1425bd6a0(*(longlong *)(lVar1 + 0x38),param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14222b8e0 FindWaveInstance body=165 status=ok
// SIG undefined FindWaveInstance(void)

undefined8 FActiveSound::FindWaveInstance(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x470) != *(int *)(param_1 + 0x49c)) {
    lVar2 = *(longlong *)(param_1 + 0x4a8);
    if (*(longlong *)(param_1 + 0x4a8) == 0) {
      lVar2 = param_1 + 0x4a0;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x4b0) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x468) + (longlong)iVar1 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x468) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_14222b963;
          break;
        }
        iVar1 = *(int *)(puVar4 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_14222b963:
  puVar3 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar3;
}



// FUNCTION 14222b990 FUN_14222b990 body=94 status=ok
// SIG undefined FUN_14222b990(void)

void FUN_14222b990(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_14234b150(param_2);
  iVar1 = *(int *)(param_1 + 0x328);
  *(int *)(param_1 + 0x328) = iVar1 + 1;
  if (*(int *)(param_1 + 0x32c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 800,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 800) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 14222b9f0 FUN_14222b9f0 body=3562 status=ok
// SIG undefined FUN_14222b9f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14222b9f0(longlong param_1,float *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined *puVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar26;
  float fVar29;
  undefined1 auVar22 [16];
  float fVar27;
  float fVar30;
  float fVar34;
  undefined1 auVar23 [16];
  float fVar28;
  float fVar31;
  float fVar32;
  float fVar35;
  undefined1 auVar24 [16];
  undefined8 uVar33;
  undefined1 auVar25 [16];
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
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auStack_1e8 [32];
  char local_1c8;
  undefined8 local_1b8 [2];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined8 local_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined *local_138;
  undefined2 local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if ((*(byte *)(param_1 + 0x93) & 4) != 0) {
    return;
  }
  *(byte *)(param_1 + 0x93) = *(byte *)(param_1 + 0x93) | 4;
  lVar1 = *(longlong *)(param_1 + 0x168);
  pfVar12 = (float *)(lVar1 + 0x210);
  if (lVar1 == 0) {
    pfVar12 = param_2;
  }
  local_118 = *(undefined8 *)pfVar12;
  uStack_110 = *(undefined8 *)(pfVar12 + 2);
  auVar22 = *(undefined1 (*) [16])(pfVar12 + 4);
  local_f8 = *(undefined8 *)(pfVar12 + 8);
  uStack_f0 = *(undefined8 *)(pfVar12 + 10);
  _local_108 = auVar22;
  if ((lVar1 == 0) || (param_3 != '\0')) goto LAB_14222c7a0;
  FWeakObjectPtr::operator=(&local_128,param_1);
  local_168 = (longlong *)CONCAT44(fStack_124,local_128);
  TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform,0>,FDefaultSetAllocator>
  ::FindId(&DAT_146531890,local_1b8,&local_168);
  pfVar12 = (float *)0x0;
  if ((int)local_1b8[0] != -1) {
    pfVar12 = (float *)((longlong)(int)local_1b8[0] * 0x50 + _DAT_146531890);
  }
  pfVar13 = pfVar12 + 4;
  if (pfVar12 == (float *)0x0) {
    pfVar13 = (float *)0x0;
  }
  if (pfVar13 != (float *)0x0) {
    FWeakObjectPtr::operator=(&local_168,param_1);
    local_1b8[0] = local_168;
    uVar10 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform,0>,FDefaultSetAllocator>
             ::Remove(&DAT_146531890,local_1b8);
    fVar58 = fRam0000000146aee9f8;
    fVar45 = fRam0000000146aee9f4;
    fVar40 = _DAT_146aee9f0;
    fVar41 = fRam0000000146aee9dc;
    fVar39 = fRam0000000146aee9d8;
    fVar38 = fRam0000000146aee9d4;
    fVar36 = _DAT_146aee9d0;
    fVar73 = fRam0000000146aee968;
    fVar72 = fRam0000000146aee964;
    fVar71 = _DAT_146aee960;
    local_1b8[0] = CONCAT44(local_1b8[0]._4_4_,0x38d1b717);
    auVar22._0_4_ = (float)((uint)(pfVar13[4] - param_2[4]) & _DAT_146aeea20);
    auVar22._4_4_ = (float)((uint)(pfVar13[5] - param_2[5]) & uRam0000000146aeea24);
    auVar22._8_4_ = (float)((uint)(pfVar13[6] - param_2[6]) & uRam0000000146aeea28);
    auVar22._12_4_ = (float)((uint)(pfVar13[7] - param_2[7]) & uRam0000000146aeea2c);
    auVar14._4_4_ = -(uint)(0.0001 < auVar22._4_4_);
    auVar14._0_4_ = -(uint)(0.0001 < auVar22._0_4_);
    auVar14._8_4_ = -(uint)(0.0001 < auVar22._8_4_);
    auVar14._12_4_ = -(uint)(0.0001 < auVar22._12_4_);
    iVar11 = movmskps(uVar10,auVar14);
    if (iVar11 == 0) {
      auVar22._0_4_ = (float)((uint)(*pfVar13 - *param_2) & _DAT_146aeea20);
      auVar22._4_4_ = (float)((uint)(pfVar13[1] - param_2[1]) & uRam0000000146aeea24);
      auVar22._8_4_ = (float)((uint)(pfVar13[2] - param_2[2]) & uRam0000000146aeea28);
      auVar22._12_4_ = (float)((uint)(pfVar13[3] - param_2[3]) & uRam0000000146aeea2c);
      auVar15._4_4_ = -(uint)(0.0001 < auVar22._4_4_);
      auVar15._0_4_ = -(uint)(0.0001 < auVar22._0_4_);
      auVar15._8_4_ = -(uint)(0.0001 < auVar22._8_4_);
      auVar15._12_4_ = -(uint)(0.0001 < auVar22._12_4_);
      iVar11 = movmskps(0,auVar15);
      if (((iVar11 == 0) ||
          (auVar16._4_4_ =
                -(uint)(0.0001 < (float)((uint)(pfVar13[1] + param_2[1]) & uRam0000000146aeea24)),
          auVar16._0_4_ = -(uint)(0.0001 < (float)((uint)(*pfVar13 + *param_2) & _DAT_146aeea20)),
          auVar16._8_4_ =
               -(uint)(0.0001 < (float)((uint)(pfVar13[2] + param_2[2]) & uRam0000000146aeea28)),
          auVar16._12_4_ =
               -(uint)(0.0001 < (float)((uint)(pfVar13[3] + param_2[3]) & uRam0000000146aeea2c)),
          iVar11 = movmskps(iVar11,auVar16), iVar11 == 0)) &&
         (auVar2._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar13[9] - param_2[9]) &
                                                 uRam0000000146aeea24)),
         auVar2._0_4_ = -(uint)(0.0001 < (float)((uint)(pfVar13[8] - param_2[8]) & _DAT_146aeea20)),
         auVar2._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar13[10] - param_2[10]) &
                                                uRam0000000146aeea28)),
         auVar2._12_4_ =
              -(uint)(0.0001 < (float)((uint)(pfVar13[0xb] - param_2[0xb]) & uRam0000000146aeea2c)),
         iVar11 = movmskps(0,auVar2), iVar11 == 0)) goto LAB_14222c682;
    }
    auVar14 = *(undefined1 (*) [16])(pfVar13 + 8);
    fVar43 = auVar14._0_4_;
    fVar46 = auVar14._4_4_;
    fVar47 = auVar14._8_4_;
    fVar49 = auVar14._12_4_;
    fVar28 = *param_2;
    fVar32 = param_2[1];
    fVar35 = param_2[2];
    fVar37 = param_2[3];
    auVar17._4_4_ = -(uint)(fRam0000000146aeea14 < (float)((uint)fVar46 & uRam0000000146aeea24));
    auVar17._0_4_ = -(uint)(_DAT_146aeea10 < (float)((uint)fVar43 & _DAT_146aeea20));
    auVar17._8_4_ = -(uint)(fRam0000000146aeea18 < (float)((uint)fVar47 & uRam0000000146aeea28));
    auVar17._12_4_ = -(uint)(fRam0000000146aeea1c < (float)((uint)fVar49 & uRam0000000146aeea2c));
    iVar11 = movmskps(iVar11,auVar17);
    fVar50 = _DAT_1468b5b70;
    fVar51 = fRam00000001468b5b74;
    fVar53 = fRam00000001468b5b78;
    fVar55 = fRam00000001468b5b7c;
    fVar21 = _DAT_1468b5b90;
    fVar26 = fRam00000001468b5b94;
    fVar29 = fRam00000001468b5b98;
    fVar34 = fRam00000001468b5b9c;
    fVar56 = _DAT_1468b5b80;
    fVar59 = fRam00000001468b5b84;
    fVar61 = fRam00000001468b5b88;
    fVar63 = fRam00000001468b5b8c;
    if (iVar11 != 0) {
      fVar50 = *pfVar13 * _DAT_146aeea00;
      fVar51 = pfVar13[1] * fRam0000000146aeea04;
      fVar53 = pfVar13[2] * fRam0000000146aeea08;
      fVar55 = pfVar13[3] * fRam0000000146aeea0c;
      auVar22 = rcpps(auVar22,auVar14);
      fVar21 = auVar22._0_4_;
      fVar26 = auVar22._4_4_;
      fVar29 = auVar22._8_4_;
      fVar34 = auVar22._12_4_;
      fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar43;
      fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar46;
      fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar47;
      fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar49;
      fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar43;
      fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar46;
      fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar47;
      fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar49;
      fVar21 = (float)((-(uint)((float)((uint)fVar43 & _DAT_146aeea20) <= _DAT_146aeea10) &
                        (uint)fVar21 ^ (uint)fVar21) & _DAT_146aee970);
      fVar26 = (float)((-(uint)((float)((uint)fVar46 & uRam0000000146aeea24) <= fRam0000000146aeea14
                               ) & (uint)fVar26 ^ (uint)fVar26) & uRam0000000146aee974);
      fVar29 = (float)((-(uint)((float)((uint)fVar47 & uRam0000000146aeea28) <= fRam0000000146aeea18
                               ) & (uint)fVar29 ^ (uint)fVar29) & uRam0000000146aee978);
      fVar34 = (float)((-(uint)((float)((uint)fVar49 & uRam0000000146aeea2c) <= fRam0000000146aeea1c
                               ) & (uint)fVar34 ^ (uint)fVar34) & uRam0000000146aee97c);
      fVar56 = pfVar13[4] * fVar21;
      fVar59 = pfVar13[5] * fVar26;
      fVar61 = pfVar13[6] * fVar29;
      fVar63 = pfVar13[7] * fVar34;
      fVar43 = fVar61 * fVar51 - fVar59 * fVar53;
      fVar46 = fVar56 * fVar53 - fVar61 * fVar50;
      fVar47 = fVar59 * fVar50 - fVar56 * fVar51;
      fVar49 = fVar63 * fVar55 - fVar63 * fVar55;
      fVar43 = fVar43 + fVar43;
      fVar46 = fVar46 + fVar46;
      fVar47 = fVar47 + fVar47;
      fVar49 = fVar49 + fVar49;
      fVar56 = (float)((uint)(0.0 - ((fVar47 * fVar51 - fVar46 * fVar53) + fVar55 * fVar43 + fVar56)
                             ) & _DAT_146aee970);
      fVar59 = (float)((uint)(0.0 - ((fVar43 * fVar53 - fVar47 * fVar50) + fVar55 * fVar46 + fVar59)
                             ) & uRam0000000146aee974);
      fVar61 = (float)((uint)(0.0 - ((fVar46 * fVar50 - fVar43 * fVar51) + fVar55 * fVar47 + fVar61)
                             ) & uRam0000000146aee978);
      fVar63 = (float)((uint)(0.0 - ((fVar49 * fVar55 - fVar49 * fVar55) + fVar55 * fVar49 + fVar63)
                             ) & uRam0000000146aee97c);
    }
    lVar1 = *(longlong *)(param_1 + 0x168);
    auVar22 = *(undefined1 (*) [16])(lVar1 + 0x230);
    fVar43 = auVar22._0_4_;
    fVar46 = auVar22._4_4_;
    fVar47 = auVar22._8_4_;
    fVar49 = auVar22._12_4_;
    auVar5._4_4_ = fVar26;
    auVar5._0_4_ = fVar21;
    auVar5._8_4_ = fVar29;
    auVar5._12_4_ = fVar34;
    auVar22 = minps(auVar22,auVar5);
    auVar18._4_4_ = -(uint)(auVar22._4_4_ < fRam0000000146aee9f4);
    auVar18._0_4_ = -(uint)(auVar22._0_4_ < _DAT_146aee9f0);
    auVar18._8_4_ = -(uint)(auVar22._8_4_ < fRam0000000146aee9f8);
    auVar18._12_4_ = -(uint)(auVar22._12_4_ < fRam0000000146aee9fc);
    iVar11 = movmskps(iVar11,auVar18);
    if (iVar11 == 0) {
      fVar71 = *(float *)(lVar1 + 0x210);
      fVar72 = *(float *)(lVar1 + 0x214);
      fVar73 = *(float *)(lVar1 + 0x218);
      fVar40 = *(float *)(lVar1 + 0x21c);
      fVar49 = *(float *)(lVar1 + 0x23c);
      fVar68 = fVar21 * *(float *)(lVar1 + 0x230);
      fVar69 = fVar26 * *(float *)(lVar1 + 0x234);
      fVar70 = fVar29 * *(float *)(lVar1 + 0x238);
      fVar21 = *(float *)(lVar1 + 0x220) * fVar21;
      fVar26 = *(float *)(lVar1 + 0x224) * fVar26;
      fVar29 = *(float *)(lVar1 + 0x228) * fVar29;
      fVar45 = *(float *)(lVar1 + 0x22c) * fVar34;
      fVar58 = fVar40 * fVar50 * _DAT_146aee9b0 + fVar71 * fVar55 + fVar73 * fVar51 * _DAT_146aee9a0
               + fVar72 * fVar53 * _DAT_146aee990;
      fVar43 = fVar73 * fVar50 * fRam0000000146aee9b4 + fVar72 * fVar55 +
               fVar40 * fVar51 * fRam0000000146aee9a4 + fVar71 * fVar53 * fRam0000000146aee994;
      fVar46 = fVar72 * fVar50 * fRam0000000146aee9b8 + fVar73 * fVar55 +
               fVar71 * fVar51 * fRam0000000146aee9a8 + fVar40 * fVar53 * fRam0000000146aee998;
      fVar47 = fVar71 * fVar50 * fRam0000000146aee9bc + fVar40 * fVar55 +
               fVar72 * fVar51 * fRam0000000146aee9ac + fVar73 * fVar53 * fRam0000000146aee99c;
      fVar71 = fVar29 * fVar51 - fVar26 * fVar53;
      fVar72 = fVar21 * fVar53 - fVar29 * fVar50;
      fVar73 = fVar26 * fVar50 - fVar21 * fVar51;
      fVar40 = fVar45 * fVar55 - fVar45 * fVar55;
      fVar71 = fVar71 + fVar71;
      fVar72 = fVar72 + fVar72;
      fVar73 = fVar73 + fVar73;
      fVar40 = fVar40 + fVar40;
      fVar56 = (fVar73 * fVar51 - fVar72 * fVar53) + fVar71 * fVar55 + fVar21 + fVar56;
      fVar59 = (fVar71 * fVar53 - fVar73 * fVar50) + fVar72 * fVar55 + fVar26 + fVar59;
      fVar61 = (fVar72 * fVar50 - fVar71 * fVar51) + fVar73 * fVar55 + fVar29 + fVar61;
      fVar63 = (fVar40 * fVar55 - fVar40 * fVar55) + fVar40 * fVar55 + fVar45 + fVar63;
      uVar10 = 0;
    }
    else {
      fVar27 = fVar51 + fVar51;
      fVar30 = fVar53 + fVar53;
      fVar42 = fVar50 * (fVar50 + fVar50);
      fVar52 = fVar55 * (fVar50 + fVar50);
      fVar68 = fVar21 * fVar43;
      fVar69 = fVar26 * fVar46;
      fVar70 = fVar29 * fVar47;
      fVar63 = *(float *)(lVar1 + 0x210);
      fVar31 = *(float *)(lVar1 + 0x214);
      fVar64 = *(float *)(lVar1 + 0x218);
      fVar54 = *(float *)(lVar1 + 0x21c);
      fVar65 = (fVar55 * fVar30 + fVar50 * fVar27) * fVar21;
      fVar66 = (fVar52 + fVar51 * fVar30) * fVar26;
      fVar67 = (fVar55 * fVar27 + fVar50 * fVar30) * fVar29;
      fVar44 = fVar26 * (fVar50 * fVar27 - fVar55 * fVar30);
      fVar52 = fVar29 * (fVar51 * fVar30 - fVar52);
      fVar48 = fVar21 * (fVar50 * fVar30 - fVar55 * fVar27);
      fVar50 = (float)((uint)((_DAT_146aee960 - (fVar53 * fVar30 + fVar51 * fVar27)) * fVar21) &
                      _DAT_146aee970);
      fVar53 = (float)((uint)((fRam0000000146aee964 - (fVar53 * fVar30 + fVar42)) * fVar26) &
                      uRam0000000146aee974);
      fVar26 = (float)((uint)((fRam0000000146aee968 - (fVar51 * fVar27 + fVar42)) * fVar29) &
                      uRam0000000146aee978);
      fVar29 = (float)((uint)((fRam0000000146aee96c - (fVar42 + fVar42)) * fVar34) &
                      uRam0000000146aee97c);
      fVar55 = fVar31 + fVar31;
      fVar21 = fVar64 + fVar64;
      fVar27 = (fVar63 + fVar63) * fVar63;
      fVar51 = fVar54 * (fVar63 + fVar63);
      fVar57 = (fVar54 * fVar21 + fVar63 * fVar55) * fVar43;
      fVar60 = (fVar51 + fVar31 * fVar21) * fVar46;
      fVar62 = (fVar54 * fVar55 + fVar63 * fVar21) * fVar47;
      fVar30 = fVar46 * (fVar63 * fVar55 - fVar54 * fVar21);
      fVar42 = fVar47 * (fVar31 * fVar21 - fVar51);
      fVar54 = fVar43 * (fVar63 * fVar21 - fVar54 * fVar55);
      fVar51 = (float)((uint)((_DAT_146aee960 - (fVar21 * fVar64 + fVar55 * fVar31)) * fVar43) &
                      _DAT_146aee970);
      fVar21 = (float)((uint)((fRam0000000146aee964 - (fVar21 * fVar64 + fVar27)) * fVar46) &
                      uRam0000000146aee974);
      fVar55 = (float)((uint)((fRam0000000146aee968 - (fVar55 * fVar31 + fVar27)) * fVar47) &
                      uRam0000000146aee978);
      fVar63 = (float)((uint)((fRam0000000146aee96c - (fVar27 + fVar27)) * fVar49) &
                      uRam0000000146aee97c);
      fVar43 = *(float *)(lVar1 + 0x220);
      fVar46 = *(float *)(lVar1 + 0x224);
      fVar47 = *(float *)(lVar1 + 0x228);
      local_1a8._0_4_ = fVar57 * fVar44 + fVar51 * fVar50 + fVar54 * fVar67 + fVar63 * fVar56;
      local_1a8._4_4_ = fVar57 * fVar53 + fVar51 * fVar65 + fVar54 * fVar52 + fVar63 * fVar59;
      uStack_1a0._0_4_ = fVar57 * fVar66 + fVar51 * fVar48 + fVar54 * fVar26 + fVar63 * fVar61;
      uStack_1a0._4_4_ =
           fVar57 * fVar29 + fVar51 * fVar29 + fVar54 * fVar29 + fVar63 * fRam0000000146aee96c;
      fStack_198 = fVar21 * fVar44 + fVar30 * fVar50 + fVar60 * fVar67 + fVar63 * fVar56;
      fStack_194 = fVar21 * fVar53 + fVar30 * fVar65 + fVar60 * fVar52 + fVar63 * fVar59;
      fStack_190 = fVar21 * fVar66 + fVar30 * fVar48 + fVar60 * fVar26 + fVar63 * fVar61;
      fStack_18c = fVar21 * fVar29 + fVar30 * fVar29 + fVar60 * fVar29 +
                   fVar63 * fRam0000000146aee96c;
      fStack_188 = fVar42 * fVar44 + fVar62 * fVar50 + fVar55 * fVar67 + fVar63 * fVar56;
      fStack_184 = fVar42 * fVar53 + fVar62 * fVar65 + fVar55 * fVar52 + fVar63 * fVar59;
      local_180._0_4_ = fVar42 * fVar66 + fVar62 * fVar48 + fVar55 * fVar26 + fVar63 * fVar61;
      local_180._4_4_ =
           fVar42 * fVar29 + fVar62 * fVar29 + fVar55 * fVar29 + fVar63 * fRam0000000146aee96c;
      local_178 = fVar46 * fVar44 + fVar43 * fVar50 + fVar47 * fVar67 +
                  fRam0000000146aee96c * fVar56;
      fStack_174 = fVar46 * fVar53 + fVar43 * fVar65 + fVar47 * fVar52 +
                   fRam0000000146aee96c * fVar59;
      fStack_170 = fVar46 * fVar66 + fVar43 * fVar48 + fVar47 * fVar26 +
                   fRam0000000146aee96c * fVar61;
      fStack_16c = fVar46 * fVar29 + fVar43 * fVar29 + fVar47 * fVar29 +
                   fRam0000000146aee96c * fRam0000000146aee96c;
      local_168._0_4_ = fVar28;
      local_168._4_4_ = fVar32;
      uStack_160._0_4_ = fVar35;
      uStack_160._4_4_ = fVar37;
      FMatrix::RemoveScaling(&local_1a8);
      fVar71 = (float)(-(uint)(fVar40 <= fVar68) & (_DAT_146aee9e0 ^ (uint)fVar71) ^ _DAT_146aee9e0)
      ;
      fVar72 = (float)(-(uint)(fVar45 <= fVar69) & (uRam0000000146aee9e4 ^ (uint)fVar72) ^
                      uRam0000000146aee9e4);
      fVar73 = (float)(-(uint)(fVar58 <= fVar70) & (uRam0000000146aee9e8 ^ (uint)fVar73) ^
                      uRam0000000146aee9e8);
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0 * fVar71);
      fStack_190 = fStack_190 * fVar72;
      local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_ * fVar71,(float)local_1a8 * fVar71);
      fStack_194 = fStack_194 * fVar72;
      fStack_198 = fStack_198 * fVar72;
      fStack_188 = fStack_188 * fVar73;
      fStack_184 = fStack_184 * fVar73;
      local_180 = (undefined *)CONCAT44(local_180._4_4_,(float)local_180 * fVar73);
      uVar10 = FQuat::FQuat(&local_168,&local_1a8);
      fVar28 = *param_2;
      fVar32 = param_2[1];
      fVar35 = param_2[2];
      fVar37 = param_2[3];
      local_1b8[0] = CONCAT44(local_1b8[0]._4_4_,0x322bcc77);
      auVar23._0_4_ = (float)local_168 * (float)local_168 + (float)uStack_160 * (float)uStack_160;
      auVar23._4_4_ = local_168._4_4_ * local_168._4_4_ + uStack_160._4_4_ * uStack_160._4_4_;
      auVar23._8_4_ = (float)uStack_160 * (float)uStack_160 + (float)local_168 * (float)local_168;
      auVar23._12_4_ = uStack_160._4_4_ * uStack_160._4_4_ + local_168._4_4_ * local_168._4_4_;
      fVar45 = auVar23._4_4_ + auVar23._0_4_;
      fVar43 = auVar23._8_4_ + auVar23._4_4_;
      fVar46 = auVar23._12_4_ + auVar23._8_4_;
      fVar47 = auVar23._0_4_ + auVar23._12_4_;
      auVar3._4_4_ = fVar43;
      auVar3._0_4_ = fVar45;
      auVar3._8_4_ = fVar46;
      auVar3._12_4_ = fVar47;
      auVar22 = rsqrtps(auVar23,auVar3);
      fVar71 = auVar22._0_4_;
      fVar72 = auVar22._4_4_;
      fVar73 = auVar22._8_4_;
      fVar40 = auVar22._12_4_;
      fVar71 = (fVar36 - fVar71 * fVar71 * fVar45 * fVar36) * fVar71 + fVar71;
      fVar72 = (fVar38 - fVar72 * fVar72 * fVar43 * fVar38) * fVar72 + fVar72;
      fVar73 = (fVar39 - fVar73 * fVar73 * fVar46 * fVar39) * fVar73 + fVar73;
      fVar40 = (fVar41 - fVar40 * fVar40 * fVar47 * fVar41) * fVar40 + fVar40;
      fVar63 = 0.0;
      fVar58 = (float)(((uint)(((fVar36 - fVar71 * fVar71 * fVar45 * fVar36) * fVar71 + fVar71) *
                              (float)local_168) ^ _DAT_146aee9c0) & -(uint)(1e-08 <= fVar45) ^
                      _DAT_146aee9c0);
      fVar43 = (float)(((uint)(((fVar38 - fVar72 * fVar72 * fVar43 * fVar38) * fVar72 + fVar72) *
                              local_168._4_4_) ^ uRam0000000146aee9c4) & -(uint)(1e-08 <= fVar43) ^
                      uRam0000000146aee9c4);
      fVar46 = (float)(((uint)(((fVar39 - fVar73 * fVar73 * fVar46 * fVar39) * fVar73 + fVar73) *
                              (float)uStack_160) ^ uRam0000000146aee9c8) & -(uint)(1e-08 <= fVar46)
                      ^ uRam0000000146aee9c8);
      fVar47 = (float)(((uint)(((fVar41 - fVar40 * fVar40 * fVar47 * fVar41) * fVar40 + fVar40) *
                              uStack_160._4_4_) ^ uRam0000000146aee9cc) & -(uint)(1e-08 <= fVar47) ^
                      uRam0000000146aee9cc);
      fVar56 = local_178;
      fVar59 = fStack_174;
      fVar61 = fStack_170;
    }
    fVar21 = fRam0000000146aee9f8;
    fVar55 = fRam0000000146aee9f4;
    fVar53 = _DAT_146aee9f0;
    fVar51 = fRam0000000146aee968;
    fVar50 = fRam0000000146aee964;
    fVar45 = _DAT_146aee960;
    fVar34 = fVar34 * fVar49;
    auVar22 = *(undefined1 (*) [16])(param_2 + 8);
    fVar71 = auVar22._0_4_;
    fVar72 = auVar22._4_4_;
    fVar73 = auVar22._8_4_;
    fVar40 = auVar22._12_4_;
    auVar19._4_4_ = fVar69;
    auVar19._0_4_ = fVar68;
    auVar19._8_4_ = fVar70;
    auVar19._12_4_ = fVar34;
    auVar22 = minps(auVar19,auVar22);
    auVar20._4_4_ = -(uint)(auVar22._4_4_ < fRam0000000146aee9f4);
    auVar20._0_4_ = -(uint)(auVar22._0_4_ < _DAT_146aee9f0);
    auVar20._8_4_ = -(uint)(auVar22._8_4_ < fRam0000000146aee9f8);
    auVar20._12_4_ = -(uint)(auVar22._12_4_ < fRam0000000146aee9fc);
    iVar11 = movmskps(uVar10,auVar20);
    if (iVar11 == 0) {
      fVar56 = fVar56 * fVar71;
      fVar59 = fVar59 * fVar72;
      fVar61 = fVar61 * fVar73;
      fVar63 = fVar63 * fVar40;
      auVar22._4_4_ = fVar28;
      auVar22._0_4_ = fVar35;
      auVar22._8_4_ = fVar32;
      auVar22._12_4_ = fVar37;
      fVar45 = fVar47 * fVar28 * _DAT_146aee9b0 + fVar58 * fVar37 + fVar46 * fVar32 * _DAT_146aee9a0
               + fVar43 * fVar35 * _DAT_146aee990;
      fVar49 = fVar46 * fVar28 * fRam0000000146aee9b4 + fVar43 * fVar37 +
               fVar47 * fVar32 * fRam0000000146aee9a4 + fVar58 * fVar35 * fRam0000000146aee994;
      fVar50 = fVar43 * fVar28 * fRam0000000146aee9b8 + fVar46 * fVar37 +
               fVar58 * fVar32 * fRam0000000146aee9a8 + fVar47 * fVar35 * fRam0000000146aee998;
      fVar58 = fVar58 * fVar28 * fRam0000000146aee9bc + fVar47 * fVar37 +
               fVar43 * fVar32 * fRam0000000146aee9ac + fVar46 * fVar35 * fRam0000000146aee99c;
      fVar36 = fVar61 * fVar32 - fVar59 * fVar35;
      fVar38 = fVar56 * fVar35 - fVar61 * fVar28;
      fVar39 = fVar59 * fVar28 - fVar56 * fVar32;
      fVar41 = fVar63 * fVar37 - fVar63 * fVar37;
      fVar36 = fVar36 + fVar36;
      fVar38 = fVar38 + fVar38;
      fVar39 = fVar39 + fVar39;
      fVar41 = fVar41 + fVar41;
      local_168._0_4_ = fVar68 * fVar71;
      local_168._4_4_ = fVar69 * fVar72;
      uStack_160._0_4_ = fVar70 * fVar73;
      uStack_160._4_4_ = fVar34 * fVar40;
      local_108._0_4_ = (fVar39 * fVar32 - fVar38 * fVar35) + fVar36 * fVar37 + fVar56 + param_2[4];
      local_108._4_4_ = (fVar36 * fVar35 - fVar39 * fVar28) + fVar38 * fVar37 + fVar59 + param_2[5];
      fStack_100 = (fVar38 * fVar28 - fVar36 * fVar32) + fVar39 * fVar37 + fVar61 + param_2[6];
      fStack_fc = (fVar41 * fVar37 - fVar41 * fVar37) + fVar41 * fVar37 + fVar63 + param_2[7];
    }
    else {
      fVar63 = fVar32 + fVar32;
      fVar31 = fVar35 + fVar35;
      local_168._0_4_ = fVar68 * fVar71;
      local_168._4_4_ = fVar69 * fVar72;
      uStack_160._0_4_ = fVar70 * fVar73;
      uStack_160._4_4_ = fVar34 * fVar40;
      fVar54 = fVar28 * (fVar28 + fVar28);
      fVar64 = fVar37 * (fVar28 + fVar28);
      fVar49 = param_2[4];
      fVar26 = param_2[5];
      fVar29 = param_2[6];
      fVar57 = (fVar37 * fVar31 + fVar28 * fVar63) * fVar71;
      fVar60 = (fVar64 + fVar32 * fVar31) * fVar72;
      fVar62 = (fVar37 * fVar63 + fVar28 * fVar31) * fVar73;
      fVar27 = fVar72 * (fVar28 * fVar63 - fVar37 * fVar31);
      fVar30 = fVar73 * (fVar32 * fVar31 - fVar64);
      fVar42 = fVar71 * (fVar28 * fVar31 - fVar37 * fVar63);
      fVar37 = fVar43 + fVar43;
      fVar64 = fVar46 + fVar46;
      fVar71 = (float)((uint)((_DAT_146aee960 - (fVar35 * fVar31 + fVar32 * fVar63)) * fVar71) &
                      _DAT_146aee970);
      fVar28 = (float)((uint)((fRam0000000146aee964 - (fVar35 * fVar31 + fVar54)) * fVar72) &
                      uRam0000000146aee974);
      fVar32 = (float)((uint)((fRam0000000146aee968 - (fVar32 * fVar63 + fVar54)) * fVar73) &
                      uRam0000000146aee978);
      fVar35 = (float)((uint)((fRam0000000146aee96c - (fVar54 + fVar54)) * fVar40) &
                      uRam0000000146aee97c);
      fVar63 = fVar58 * (fVar58 + fVar58);
      fVar72 = (fVar58 + fVar58) * fVar47;
      fVar44 = (fVar64 * fVar47 + fVar37 * fVar58) * fVar68;
      fVar52 = (fVar72 + fVar64 * fVar43) * fVar69;
      fVar48 = (fVar37 * fVar47 + fVar64 * fVar58) * fVar70;
      fVar31 = fVar69 * (fVar37 * fVar58 - fVar64 * fVar47);
      fVar54 = fVar70 * (fVar64 * fVar43 - fVar72);
      fVar47 = fVar68 * (fVar64 * fVar58 - fVar37 * fVar47);
      fVar72 = (float)((uint)((_DAT_146aee960 - (fVar46 * fVar64 + fVar43 * fVar37)) * fVar68) &
                      _DAT_146aee970);
      fVar73 = (float)((uint)((fRam0000000146aee964 - (fVar46 * fVar64 + fVar63)) * fVar69) &
                      uRam0000000146aee974);
      fVar40 = (float)((uint)((fRam0000000146aee968 - (fVar43 * fVar37 + fVar63)) * fVar70) &
                      uRam0000000146aee978);
      fVar58 = (float)((uint)((fRam0000000146aee96c - (fVar63 + fVar63)) * fVar34) &
                      uRam0000000146aee97c);
      local_1a8._0_4_ = fVar44 * fVar27 + fVar72 * fVar71 + fVar47 * fVar62 + fVar58 * fVar49;
      local_1a8._4_4_ = fVar44 * fVar28 + fVar72 * fVar57 + fVar47 * fVar30 + fVar58 * fVar26;
      uStack_1a0._0_4_ = fVar44 * fVar60 + fVar72 * fVar42 + fVar47 * fVar32 + fVar58 * fVar29;
      uStack_1a0._4_4_ =
           fVar44 * fVar35 + fVar72 * fVar35 + fVar47 * fVar35 + fVar58 * fRam0000000146aee96c;
      fStack_198 = fVar73 * fVar27 + fVar31 * fVar71 + fVar52 * fVar62 + fVar58 * fVar49;
      fStack_194 = fVar73 * fVar28 + fVar31 * fVar57 + fVar52 * fVar30 + fVar58 * fVar26;
      fStack_190 = fVar73 * fVar60 + fVar31 * fVar42 + fVar52 * fVar32 + fVar58 * fVar29;
      fStack_18c = fVar73 * fVar35 + fVar31 * fVar35 + fVar52 * fVar35 +
                   fVar58 * fRam0000000146aee96c;
      fStack_188 = fVar54 * fVar27 + fVar48 * fVar71 + fVar40 * fVar62 + fVar58 * fVar49;
      fStack_184 = fVar54 * fVar28 + fVar48 * fVar57 + fVar40 * fVar30 + fVar58 * fVar26;
      local_180._0_4_ = fVar54 * fVar60 + fVar48 * fVar42 + fVar40 * fVar32 + fVar58 * fVar29;
      local_180._4_4_ =
           fVar54 * fVar35 + fVar48 * fVar35 + fVar40 * fVar35 + fVar58 * fRam0000000146aee96c;
      local_178 = fVar59 * fVar27 + fVar56 * fVar71 + fVar61 * fVar62 +
                  fRam0000000146aee96c * fVar49;
      fStack_174 = fVar59 * fVar28 + fVar56 * fVar57 + fVar61 * fVar30 +
                   fRam0000000146aee96c * fVar26;
      fStack_170 = fVar59 * fVar60 + fVar56 * fVar42 + fVar61 * fVar32 +
                   fRam0000000146aee96c * fVar29;
      fStack_16c = fVar59 * fVar35 + fVar56 * fVar35 + fVar61 * fVar35 +
                   fRam0000000146aee96c * fRam0000000146aee96c;
      FMatrix::RemoveScaling(&local_1a8);
      fVar71 = (float)(-(uint)(fVar53 <= (float)local_168) & (_DAT_146aee9e0 ^ (uint)fVar45) ^
                      _DAT_146aee9e0);
      fVar72 = (float)(-(uint)(fVar55 <= local_168._4_4_) & (uRam0000000146aee9e4 ^ (uint)fVar50) ^
                      uRam0000000146aee9e4);
      fVar73 = (float)(-(uint)(fVar21 <= (float)uStack_160) & (uRam0000000146aee9e8 ^ (uint)fVar51)
                      ^ uRam0000000146aee9e8);
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0 * fVar71);
      fStack_194 = fStack_194 * fVar72;
      local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_ * fVar71,(float)local_1a8 * fVar71);
      fStack_198 = fStack_198 * fVar72;
      fStack_190 = fVar72 * fStack_190;
      fStack_184 = fVar73 * fStack_184;
      fStack_188 = fVar73 * fStack_188;
      local_180 = (undefined *)CONCAT44(local_180._4_4_,fVar73 * (float)local_180);
      FQuat::FQuat(&local_128,&local_1a8);
      local_1b8[0] = CONCAT44(local_1b8[0]._4_4_,0x322bcc77);
      auVar24._0_4_ = local_128 * local_128 + fStack_120 * fStack_120;
      auVar24._4_4_ = fStack_124 * fStack_124 + fStack_11c * fStack_11c;
      auVar24._8_4_ = fStack_120 * fStack_120 + local_128 * local_128;
      auVar24._12_4_ = fStack_11c * fStack_11c + fStack_124 * fStack_124;
      fVar45 = auVar24._4_4_ + auVar24._0_4_;
      fVar58 = auVar24._8_4_ + auVar24._4_4_;
      fVar43 = auVar24._12_4_ + auVar24._8_4_;
      fVar46 = auVar24._0_4_ + auVar24._12_4_;
      auVar4._4_4_ = fVar58;
      auVar4._0_4_ = fVar45;
      auVar4._8_4_ = fVar43;
      auVar4._12_4_ = fVar46;
      auVar22 = rsqrtps(auVar24,auVar4);
      fVar71 = auVar22._0_4_;
      fVar72 = auVar22._4_4_;
      fVar73 = auVar22._8_4_;
      fVar40 = auVar22._12_4_;
      fVar71 = (fVar36 - fVar71 * fVar71 * fVar45 * fVar36) * fVar71 + fVar71;
      fVar72 = (fVar38 - fVar72 * fVar72 * fVar58 * fVar38) * fVar72 + fVar72;
      fVar73 = (fVar39 - fVar73 * fVar73 * fVar43 * fVar39) * fVar73 + fVar73;
      fVar40 = (fVar41 - fVar40 * fVar40 * fVar46 * fVar41) * fVar40 + fVar40;
      auVar22 = ZEXT816(0);
      fStack_fc = 0.0;
      fVar45 = (float)(((uint)(((fVar36 - fVar71 * fVar71 * fVar45 * fVar36) * fVar71 + fVar71) *
                              local_128) ^ _DAT_146aee9c0) & -(uint)(1e-08 <= fVar45) ^
                      _DAT_146aee9c0);
      fVar49 = (float)(((uint)(((fVar38 - fVar72 * fVar72 * fVar58 * fVar38) * fVar72 + fVar72) *
                              fStack_124) ^ uRam0000000146aee9c4) & -(uint)(1e-08 <= fVar58) ^
                      uRam0000000146aee9c4);
      fVar50 = (float)(((uint)(((fVar39 - fVar73 * fVar73 * fVar43 * fVar39) * fVar73 + fVar73) *
                              fStack_120) ^ uRam0000000146aee9c8) & -(uint)(1e-08 <= fVar43) ^
                      uRam0000000146aee9c8);
      fVar58 = (float)(((uint)(((fVar41 - fVar40 * fVar40 * fVar46 * fVar41) * fVar40 + fVar40) *
                              fStack_11c) ^ uRam0000000146aee9cc) & -(uint)(1e-08 <= fVar46) ^
                      uRam0000000146aee9cc);
      local_108._0_4_ = local_178;
      local_108._4_4_ = fStack_174;
      fStack_100 = fStack_170;
    }
    local_118 = CONCAT44(fVar49,fVar45);
    uStack_110 = CONCAT44(fVar58,fVar50);
    local_f8 = CONCAT44(local_168._4_4_,(float)local_168);
    uStack_f0 = CONCAT44(uStack_160._4_4_,(float)uStack_160);
  }
LAB_14222c682:
  uVar33 = auVar22._8_8_;
  fStack_154 = 0.0;
  fStack_150 = 0.0;
  uStack_160 = &DAT_1465318a0;
  local_168 = (longlong *)0x100000000;
  local_158 = -NAN;
  if (DAT_1465318b8 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_168);
    uVar33 = auVar22._8_8_;
  }
  fVar36 = fStack_154;
  fVar73 = local_158;
  puVar8 = uStack_160;
  uVar7 = local_168;
  local_180 = &DAT_146531890;
  fVar71 = (float)uStack_160;
  fVar72 = uStack_160._4_4_;
  local_1a8 = &DAT_146531890;
  fStack_190 = local_158;
  fStack_18c = fStack_154;
  fStack_188 = fStack_150;
  fStack_184 = fStack_14c;
  local_138 = &DAT_146531890;
  auVar6._4_8_ = uVar33;
  auVar6._0_4_ = fStack_154;
  auVar25._0_8_ = auVar6._0_8_ << 0x20;
  auVar25._8_4_ = fStack_150;
  auVar25._12_4_ = fStack_14c;
  uStack_1a0 = local_168;
  fStack_198 = (float)uStack_160;
  fStack_194 = uStack_160._4_4_;
  local_130 = 0;
  local_148 = auVar25._8_8_;
  local_168 = (longlong *)&DAT_146531890;
  uStack_160 = (undefined *)uVar7;
  local_158 = fVar71;
  fStack_154 = fVar72;
  fStack_150 = fVar73;
  fStack_14c = fVar36;
  uStack_140 = 0x46531890;
  uStack_13c = 1;
  if ((int)fVar36 < *(int *)(puVar8 + 0x18)) {
    do {
      fVar71 = fStack_14c;
      cVar9 = FWeakObjectPtr::IsValid((longlong)(int)fStack_14c * 0x50 + *local_168);
      if (cVar9 == '\0') {
        TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform,0>,FDefaultSetAllocator>
        ::Remove(CONCAT44(uStack_13c,uStack_140),fVar71);
        local_130 = CONCAT11(local_130._1_1_,1);
      }
      fStack_150 = (float)((uint)fStack_150 & ~(uint)uStack_160._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_160);
    } while ((int)fStack_14c < *(int *)(CONCAT44(fStack_154,local_158) + 0x18));
    if (((char)local_130 != '\0') && (local_130._1_1_ != '\0')) {
      TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FTransform,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_138,*(int *)(local_138 + 8) - *(int *)(local_138 + 0x34),1);
    }
  }
LAB_14222c7a0:
  local_1c8 = param_3;
  FUN_14222a400(param_1,&local_118,0,param_4);
  FUN_142237b80(param_1);
  return;
}



// FUNCTION 14222c7e0 FUN_14222c7e0 body=236 status=ok
// SIG undefined FUN_14222c7e0(void)

void FUN_14222c7e0(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = FUN_142235230(param_1);
  if (((iVar3 != 3) && (bVar1 = *(byte *)((longlong)param_1 + 0x129), 1 < bVar1)) &&
     (cVar2 = FUN_1407cd900(param_1), cVar2 == '\0')) {
    if (bVar1 == 4) {
      *(undefined1 *)((longlong)param_1 + 0x129) = 2;
    }
    if ((*(byte *)((longlong)param_1 + 0x92) & 0x40) != 0) {
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_1428c4d10(lVar4,param_1);
      lVar5 = FUN_1422325e0(param_1);
      if (lVar5 != 0) {
        FUN_1425bdd80(lVar5,param_1,0);
        lVar4 = *(longlong *)(lVar4 + 0x108);
        if ((lVar4 != 0) && (lVar4 != lVar5)) {
          FUN_1425bdd80(lVar4,param_1,bVar1 == 4);
        }
      }
    }
  }
  return;
}



// FUNCTION 14222c8d0 FUN_14222c8d0 body=184 status=ok
// SIG undefined FUN_14222c8d0(void)

void FUN_14222c8d0(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = (**(code **)(*param_1 + 0xd8))();
  if (cVar2 != '\0') {
    if (*(char *)((longlong)param_1 + 0x95) == '\0') {
      if ((char)param_1[0x25] == '\x03') {
        bVar1 = *(byte *)((longlong)param_1 + 0x92);
        *(undefined1 *)((longlong)param_1 + 0x95) = 1;
        *(byte *)((longlong)param_1 + 0x92) = bVar1 | 0x40;
        if ((~(bVar1 >> 6) & 1) != 0) {
          lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
          if (lVar3 != 0) {
            if ((*(byte *)((longlong)param_1 + 0x92) & 0x40) == 0) {
              FUN_1428d4e50(lVar3,param_1);
            }
            else {
              FUN_1428c4d10();
              FUN_14222cb50(param_1);
            }
          }
        }
      }
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
      if (*(float *)(param_1 + 0x28) == 0.0) {
        *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014222c97b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x600))(param_1);
    return;
  }
  return;
}



// FUNCTION 14222c990 FUN_14222c990 body=448 status=ok
// SIG undefined FUN_14222c990(void)

void FUN_14222c990(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar7 = param_1[0x24];
  lVar5 = (**(code **)(*param_1 + 0x148))();
  plVar6 = (longlong *)0x0;
  if (lVar7 == 0x11a) {
    if (lVar5 != 0) {
      plVar6 = *(longlong **)(lVar5 + 0x38);
    }
  }
  else {
    plVar6 = (longlong *)FUN_142873bb0(DAT_146b17150,lVar5,lVar7);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x330))(plVar6,param_1);
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    if (((lVar7 != 0) && (plVar2 = *(longlong **)(lVar7 + 0x108), plVar2 != (longlong *)0x0)) &&
       (plVar2 != plVar6)) {
      (**(code **)(*plVar2 + 0x330))(plVar2,param_1);
    }
    if (((1 < *(byte *)((longlong)param_1 + 0x129)) && (iVar4 = FUN_142235230(param_1), iVar4 != 3))
       && ((bVar1 = *(byte *)((longlong)param_1 + 0x129), 1 < bVar1 &&
           (cVar3 = FUN_1407cd900(param_1), cVar3 == '\0')))) {
      if (bVar1 == 4) {
        *(undefined1 *)((longlong)param_1 + 0x129) = 2;
      }
      if ((*(byte *)((longlong)param_1 + 0x92) & 0x40) != 0) {
        lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
        FUN_1428c4d10(lVar7,param_1);
        lVar5 = FUN_1422325e0(param_1);
        if (lVar5 != 0) {
          FUN_1425bdd80(lVar5,param_1,0);
          lVar7 = *(longlong *)(lVar7 + 0x108);
          if ((lVar7 != 0) && (lVar7 != lVar5)) {
            FUN_1425bdd80(lVar7,param_1,bVar1 == 4);
          }
        }
      }
    }
    if (((((*(byte *)((longlong)param_1 + 0x94) & 2) == 0) &&
         (lVar7 = (**(code **)(*param_1 + 0x148))(param_1), lVar7 != 0)) &&
        (*(longlong *)(lVar7 + 0x38) != 0)) &&
       (lVar7 = FUN_1425bd6a0(*(longlong *)(lVar7 + 0x38),param_1), lVar7 != 0)) {
      *(float *)(lVar7 + 0x20) = 1.0 / *(float *)(param_1 + 0x28);
    }
  }
  return;
}



// FUNCTION 14222cb50 FUN_14222cb50 body=152 status=ok
// SIG undefined FUN_14222cb50(void)

void FUN_14222cb50(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = FUN_142235230(param_1);
  if ((iVar1 != 3) && ((*(byte *)((longlong)param_1 + 0x92) & 0x40) != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_1422325e0(param_1);
    if (lVar3 != 0) {
      FUN_1425be9a0(lVar3,param_1);
      lVar2 = *(longlong *)(lVar2 + 0x108);
      if ((lVar2 != 0) && (lVar2 != lVar3)) {
        FUN_1425be9a0(lVar2,param_1);
      }
    }
  }
  return;
}



// FUNCTION 14222cbf0 FUN_14222cbf0 body=866 status=ok
// SIG undefined FUN_14222cbf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14222cbf0(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  byte bVar11;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  byte local_10;
  
  if (((*(byte *)(param_1 + 0x12) & 0x10) != 0) ||
     ((param_1[0x2d] != 0 && (*(longlong *)(param_1[0x2d] + 400) != 0)))) {
    bVar11 = 0;
    plVar10 = (longlong *)param_1[0x2d];
    param_1[0x1b] = 0;
    if (plVar10 != (longlong *)0x0) {
      lVar7 = FUN_1429f11d0();
      if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (cVar5 = (**(code **)(*plVar10 + 0x400))(plVar10,0), cVar5 != '\0')) {
        local_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0x3f800000;
        local_28 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        local_48 = 0;
        local_40 = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        local_10 = 0;
        UPrimitiveComponent::GetRigidBodyState(plVar10,&local_48,0);
        plVar8 = (longlong *)FUN_142436c50(&local_68,&local_48,param_1);
        param_1[0x16] = *plVar8;
        *(int *)(param_1 + 0x17) = (int)plVar8[1];
        puVar9 = (undefined8 *)FQuat::Rotator(&local_38,&local_68);
        *(undefined8 *)((longlong)param_1 + 0xbc) = *puVar9;
        uVar1 = *(undefined4 *)(puVar9 + 1);
        *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfe;
        *(undefined4 *)((longlong)param_1 + 0xc4) = uVar1;
        param_1[0x13] = local_28;
        *(undefined4 *)(param_1 + 0x14) = uStack_20;
        *(ulonglong *)((longlong)param_1 + 0xa4) = CONCAT44(uStack_18,uStack_1c);
        *(undefined4 *)((longlong)param_1 + 0xac) = uStack_14;
        *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | local_10 & 1 | 2;
        cVar5 = FUN_142390bd0(plVar10);
        if (cVar5 == '\0') {
          bVar11 = 2;
        }
        *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfd;
        *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | bVar11;
        return;
      }
    }
    lVar7 = param_1[0x2d];
    if (lVar7 != 0) {
      if (*(longlong *)(lVar7 + 400) == 0) {
        local_68 = *(float *)(lVar7 + 0x220);
        fStack_64 = *(float *)(lVar7 + 0x224);
        fStack_60 = *(float *)(lVar7 + 0x228);
        plVar10 = (longlong *)FUN_142436c50(local_58,&local_68,param_1);
        lVar7 = param_1[0x2d];
        param_1[0x16] = *plVar10;
        lVar4 = plVar10[1];
        *(int *)(param_1 + 0x17) = (int)lVar4;
        local_68 = *(float *)(lVar7 + 0x210);
        fStack_64 = *(float *)(lVar7 + 0x214);
        fStack_60 = *(float *)(lVar7 + 0x218);
        fStack_5c = *(float *)(lVar7 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_64);
        auVar2._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_68);
        auVar2._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_60);
        auVar2._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_5c);
        iVar6 = movmskps((int)lVar4,auVar2);
        if (iVar6 != 0) {
          *(float *)(lVar7 + 0x250) = local_68;
          *(float *)(lVar7 + 0x254) = fStack_64;
          *(float *)(lVar7 + 600) = fStack_60;
          *(float *)(lVar7 + 0x25c) = fStack_5c;
          puVar9 = (undefined8 *)FQuat::Rotator(&local_68,local_58);
          *(undefined8 *)(lVar7 + 0x260) = *puVar9;
          *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar9 + 1);
        }
        *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)(lVar7 + 0x260);
        *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(lVar7 + 0x268);
        plVar10 = (longlong *)(**(code **)(*param_1 + 0x308))(param_1,local_58);
        param_1[0x13] = *plVar10;
        *(int *)(param_1 + 0x14) = (int)plVar10[1];
        *(undefined8 *)((longlong)param_1 + 0xa4) = _DAT_1468b5d90;
        *(undefined4 *)((longlong)param_1 + 0xac) = DAT_1468b5d98;
      }
      else {
        lVar7 = FUN_14238b320();
        param_1[0x1b] = lVar7;
        if (lVar7 != 0) {
          lVar7 = param_1[0x2d];
          uVar1 = *(undefined4 *)(lVar7 + 500);
          param_1[0x1c] = *(longlong *)(lVar7 + 0x1ec);
          *(undefined4 *)(param_1 + 0x1d) = uVar1;
          param_1[0x1f] = *(longlong *)(lVar7 + 0x1f8);
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar7 + 0x200);
          uVar1 = *(undefined4 *)(lVar7 + 0x20c);
          *(undefined8 *)((longlong)param_1 + 0xec) = *(undefined8 *)(lVar7 + 0x204);
          *(undefined4 *)((longlong)param_1 + 0xf4) = uVar1;
          param_1[0x22] = *(longlong *)(lVar7 + 400);
          param_1[0x21] = *(longlong *)(lVar7 + 0x198);
        }
      }
      *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfd;
    }
  }
  return;
}



// FUNCTION 14222cf60 FUN_14222cf60 body=455 status=ok
// SIG undefined FUN_14222cf60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14222cf60(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (param_2 == '\0') {
    if (((*(byte *)((longlong)param_1 + 0x94) & 1) == 0) &&
       (((char)param_1[0x25] == '\x03' || ((*(byte *)(param_1 + 0x12) & 0x21) != 0)))) {
      *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) | 1;
      lVar1 = (**(code **)(*param_1 + 0x148))();
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      plVar2 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        plVar2[2] = (longlong)&LAB_14222d130;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar2[4] = lVar1;
        *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
      }
      local_88 = 0;
      local_80 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
      }
      FWeakObjectPtr::operator=(local_78,0);
      local_70 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      FUN_142880af0(uVar3,&local_88);
      if (local_28 != 0) {
        plVar4 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar4 = local_38;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar1 = FMemory::Realloc(plVar2,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
    }
  }
  else {
    FUN_142227350(param_1,0,1);
  }
  return;
}



// FUNCTION 14222d190 FUN_14222d190 body=465 status=ok
// SIG undefined FUN_14222d190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14222d190(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  int *piVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 uVar12;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  char local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [192];
  undefined1 *local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong uVar11;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar12 = 0;
  uVar9 = 0;
  local_130 = param_5;
  local_138 = param_6;
  local_60 = (undefined1 *)0x0;
  local_58 = 0;
  local_128 = param_4;
  FUN_140725150(param_1,local_120,1);
  uVar6 = local_58 & 0xffffffff;
  puVar7 = local_60;
  uVar11 = uVar9;
  if (0 < (int)local_58) {
    do {
      puVar5 = local_120;
      if (puVar7 != (undefined1 *)0x0) {
        puVar5 = puVar7;
      }
      plVar2 = *(longlong **)(puVar5 + uVar9);
      if ((*(byte *)(plVar2 + 0x17) & 1) != 0) {
        iVar4 = (**(code **)(*plVar2 + 0x4e8))(plVar2);
        if (iVar4 != 0) {
          iVar4 = *(int *)((longlong)plVar2 + 0xc);
          uVar6 = FUN_142311640(param_7);
          piVar8 = (int *)((ulonglong)(*(longlong *)(uVar6 + 0x20) != 0) - 1 & uVar6 |
                          *(ulonglong *)(uVar6 + 0x20));
          piVar1 = piVar8 + *(int *)(uVar6 + 0x28);
          for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
            if (*piVar8 == iVar4) goto LAB_14222d2d6;
          }
          local_150 = param_7;
          local_158 = local_138;
          local_148 = param_3;
          cVar3 = (**(code **)(*plVar2 + 0x8c0))(plVar2,param_2,local_128,local_130);
          if ((cVar3 != '\0') && (uVar12 = 1, param_3 == '\0')) {
            uVar12 = 1;
            puVar7 = local_60;
            break;
          }
        }
LAB_14222d2d6:
        uVar6 = local_58 & 0xffffffff;
        puVar7 = local_60;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar9 = uVar9 + 8;
    } while ((int)uVar10 < (int)uVar6);
  }
  if (puVar7 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return uVar12;
}



// FUNCTION 14222d370 FUN_14222d370 body=547 status=ok
// SIG undefined FUN_14222d370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte FUN_14222d370(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,char param_10)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  int local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [192];
  undefined1 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  bVar11 = 0;
  iVar4 = *(int *)(param_2 + 8);
  uVar8 = 0;
  local_138 = param_5;
  local_140 = param_6;
  local_148 = param_7;
  local_150 = param_8;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_158 = iVar4;
  local_130 = param_4;
  FUN_140725150(param_1,local_128,1);
  uVar10 = uVar8;
  if (0 < (int)local_60) {
    do {
      puVar5 = local_128;
      if (local_68 != (undefined1 *)0x0) {
        puVar5 = local_68;
      }
      plVar2 = *(longlong **)(puVar5 + uVar8);
      if (((*(byte *)(plVar2 + 0x17) & 1) != 0) &&
         (iVar4 = (**(code **)(*plVar2 + 0x4e8))(plVar2), iVar4 != 0)) {
        iVar4 = *(int *)((longlong)plVar2 + 0xc);
        uVar6 = FUN_142311640(param_9);
        piVar7 = (int *)((ulonglong)(*(longlong *)(uVar6 + 0x20) != 0) - 1 & uVar6 |
                        *(ulonglong *)(uVar6 + 0x20));
        piVar1 = piVar7 + *(int *)(uVar6 + 0x28);
        for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
          if (*piVar7 == iVar4) goto LAB_14222d4fc;
        }
        local_160 = 0;
        local_168 = param_9;
        local_170 = local_150;
        local_178 = local_148;
        local_180 = local_140;
        local_188 = local_138;
        bVar3 = (**(code **)(*plVar2 + 0x8b8))(plVar2,param_2,param_3,local_130);
        bVar11 = bVar11 | bVar3;
      }
LAB_14222d4fc:
      uVar9 = (int)uVar10 + 1;
      uVar8 = uVar8 + 8;
      uVar10 = (ulonglong)uVar9;
      iVar4 = local_158;
    } while ((int)uVar9 < (int)local_60);
  }
  if ((param_10 != '\0') && (iVar4 < *(int *)(param_2 + 8))) {
    FUN_1423560b0(param_2);
  }
  if (local_68 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return bVar11;
}



// FUNCTION 14222d5a0 FUN_14222d5a0 body=628 status=ok
// SIG undefined FUN_14222d5a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14222d5a0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             char param_9)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  char local_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined1 local_1b8 [12];
  float local_1ac;
  undefined1 local_128 [192];
  undefined1 *local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong uVar10;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  uVar10 = 0;
  local_1d8 = param_5;
  local_1e0 = param_6;
  local_1e8 = param_7;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_1d0 = param_4;
  local_1c8 = param_3;
  FUN_140725150(param_1,local_128);
  uVar13 = 0;
  uVar2 = *(undefined4 *)(param_3 + 1);
  uVar7 = local_60 & 0xffffffff;
  *(undefined8 *)(param_2 + 0x44) = *param_3;
  *(undefined4 *)(param_2 + 0x4c) = uVar2;
  uVar2 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(param_2 + 0x50) = *param_4;
  *(undefined4 *)(param_2 + 0x58) = uVar2;
  puVar8 = local_68;
  uVar11 = uVar10;
  if (0 < (int)local_60) {
    do {
      puVar6 = local_128;
      if (puVar8 != (undefined1 *)0x0) {
        puVar6 = puVar8;
      }
      plVar3 = *(longlong **)(puVar6 + uVar11);
      if ((*(byte *)(plVar3 + 0x17) & 1) != 0) {
        iVar5 = (**(code **)(*plVar3 + 0x4e8))(plVar3);
        if (iVar5 != 0) {
          iVar5 = *(int *)((longlong)plVar3 + 0xc);
          uVar7 = FUN_142311640(param_8);
          piVar12 = (int *)((ulonglong)(*(longlong *)(uVar7 + 0x20) != 0) - 1 & uVar7 |
                           *(ulonglong *)(uVar7 + 0x20));
          piVar1 = piVar12 + *(int *)(uVar7 + 0x28);
          for (; piVar12 != piVar1; piVar12 = piVar12 + 1) {
            if (*piVar12 == iVar5) goto LAB_14222d78a;
          }
          _guard_xfg_dispatch_icall_nop(local_1b8,0,0x90);
          local_1f8 = param_9;
          local_200 = param_8;
          local_208 = local_1e8;
          local_210 = local_1e0;
          local_1ac = 1.0;
          local_218 = local_1d8;
          cVar4 = (**(code **)(*plVar3 + 0x8b0))(plVar3,local_1b8,local_1c8,local_1d0);
          if ((cVar4 != '\0') && (local_1ac < *(float *)(param_2 + 0xc))) {
            uVar13 = 1;
            FUN_140729f20(param_2,local_1b8);
            puVar8 = local_68;
            if (param_9 != '\0') break;
          }
        }
LAB_14222d78a:
        uVar7 = local_60 & 0xffffffff;
        puVar8 = local_68;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 8;
    } while ((int)uVar9 < (int)uVar7);
  }
  if (puVar8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return uVar13;
}



// FUNCTION 14222d820 FUN_14222d820 body=273 status=ok
// SIG undefined FUN_14222d820(void)

undefined8 * FUN_14222d820(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  plVar3 = (longlong *)FUN_1428e6120();
  lVar6 = plVar3[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar6 = plVar3[0x1f];
    if (lVar6 != 0) goto LAB_14222d869;
  }
  else {
LAB_14222d869:
    lVar4 = FUN_1428e6120();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_20 = *(undefined8 *)(lVar6 + 0x28);
      bVar2 = true;
      bVar1 = false;
      FString::FString(local_18,lVar6 + 0x30);
      puVar5 = &local_20;
      goto LAB_14222d8db;
    }
  }
  bVar2 = false;
  bVar1 = true;
  local_38 = 0;
  local_30 = 0;
  puVar5 = &local_38;
  local_28 = 0;
LAB_14222d8db:
  *param_1 = *puVar5;
  FString::FString(param_1 + 1,puVar5 + 1);
  if (bVar1) {
    if (local_30 != 0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14222d940 FUN_14222d940 body=190 status=ok
// SIG undefined FUN_14222d940(void)

undefined8 * FUN_14222d940(undefined8 *param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  plVar2 = (longlong *)FUN_1428e6120();
  lVar5 = plVar2[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar5 = plVar2[0x1f];
    if (lVar5 == 0) goto LAB_14222d9ce;
  }
  lVar3 = FUN_1428e6120();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *param_1 = *(undefined8 *)(lVar5 + 0x40);
    return param_1;
  }
LAB_14222d9ce:
  puVar4 = (undefined8 *)FName::FName(local_res8,&DAT_14500d0b4,1);
  *param_1 = *puVar4;
  return param_1;
}



// FUNCTION 14222da00 FUN_14222da00 body=186 status=ok
// SIG undefined FUN_14222da00(void)

void FUN_14222da00(longlong *param_1,byte param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  (**(code **)(*param_1 + 0x560))(param_1,&local_38,param_2 ^ 1);
  *(ulonglong *)param_4 = CONCAT44((local_28 - local_34) * 0.5,(local_2c - local_38) * 0.5);
  param_4[2] = (local_24 - local_30) * 0.5;
  fVar1 = param_4[2];
  *param_3 = CONCAT44(local_34 + param_4[1],local_38 + *param_4);
  *(float *)(param_3 + 1) = local_30 + fVar1;
  return;
}



// FUNCTION 14222dac0 FUN_14222dac0 body=261 status=ok
// SIG undefined FUN_14222dac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14222dac0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x220);
    local_20 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_2 = local_28;
  *(undefined4 *)(param_2 + 1) = local_20;
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    uVar6 = (undefined4)DAT_1468b5da0;
    uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    uVar4 = DAT_1468b5da8;
  }
  else {
    local_18 = *(float *)(lVar1 + 0x210);
    fStack_14 = *(float *)(lVar1 + 0x214);
    fStack_10 = *(float *)(lVar1 + 0x218);
    fStack_c = *(float *)(lVar1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
    auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
    auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
    auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
    iVar3 = movmskps(local_20,auVar2);
    if (iVar3 != 0) {
      *(float *)(lVar1 + 0x250) = local_18;
      *(float *)(lVar1 + 0x254) = fStack_14;
      *(float *)(lVar1 + 600) = fStack_10;
      *(float *)(lVar1 + 0x25c) = fStack_c;
      puVar5 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
      *(undefined8 *)(lVar1 + 0x260) = *puVar5;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
    }
    uVar6 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    uVar4 = *(undefined4 *)(lVar1 + 0x268);
  }
  *param_3 = CONCAT44(uVar7,uVar6);
  *(undefined4 *)(param_3 + 1) = uVar4;
  return;
}



// FUNCTION 14222dbd0 FUN_14222dbd0 body=122 status=ok
// SIG undefined FUN_14222dbd0(void)

ulonglong FUN_14222dbd0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x168);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1429f11d0();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(plVar2[2] + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(plVar2[2] + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      lVar3 = (**(code **)(*plVar2 + 0x6d0))
                        (plVar2,0,CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1));
      in_RAX = 0;
      if (lVar3 != 0) {
        return (ulonglong)*(byte *)(lVar3 + 0xb);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14222dc50 FUN_14222dc50 body=61 status=ok
// SIG undefined FUN_14222dc50(void)

undefined8 * FUN_14222dc50(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x20c);
    *param_2 = *(undefined8 *)(lVar2 + 0x204);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  *(undefined4 *)param_2 = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
  *(undefined4 *)(param_2 + 1) = 0x3f800000;
  return param_2;
}



// FUNCTION 14222dc90 FUN_14222dc90 body=72 status=ok
// SIG undefined FUN_14222dc90(void)

undefined4 * FUN_14222dc90(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x234);
    uVar3 = *(undefined4 *)(lVar1 + 0x238);
    *param_2 = *(undefined4 *)(lVar1 + 0x230);
    param_2[2] = uVar3;
    param_2[1] = uVar2;
    return param_2;
  }
  *param_2 = 0x3f800000;
  param_2[1] = 0x3f800000;
  param_2[2] = 0x3f800000;
  return param_2;
}



// FUNCTION 14222dce0 GetActorTickInterval body=6 status=ok
// SIG undefined GetActorTickInterval(void)

undefined4 AActor::GetActorTickInterval(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// FUNCTION 14222dcf0 FUN_14222dcf0 body=74 status=ok
// SIG undefined FUN_14222dcf0(void)

float FUN_14222dcf0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = UWorld::GetWorldSettings(lVar1,0,1);
  }
  return *(float *)(lVar2 + 0x5e4) * *(float *)(lVar2 + 0x5e0) * *(float *)(lVar2 + 0x5e8) *
         *(float *)(param_1 + 0x1a);
}



// FUNCTION 14222dd40 FUN_14222dd40 body=563 status=ok
// SIG undefined FUN_14222dd40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14222dd40(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_148 [32];
  char local_128;
  longlong *local_120;
  longlong *local_118;
  longlong local_110 [24];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_48._0_4_ = 0;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_128 = param_3;
  if (param_1 != 0) {
    FUN_140749cd0(param_1,local_110,0);
  }
  iVar10 = (int)param_2[1] + (int)local_48;
  iVar6 = (int)local_48;
  if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,iVar10);
    iVar6 = (int)local_48;
  }
  local_120 = local_110;
  if (local_50 != (longlong *)0x0) {
    local_120 = local_50;
  }
  local_118 = local_120 + iVar6;
  if (local_120 != local_118) {
    do {
      cVar3 = local_128;
      uVar8 = 0;
      plVar9 = *(longlong **)(*local_120 + 0x1a0);
      uVar4 = (ulonglong)*(int *)(*local_120 + 0x1a8);
      uVar11 = uVar4 & 0x1fffffffffffffff;
      if (plVar9 + uVar4 < plVar9) {
        uVar11 = uVar8;
      }
      if (uVar11 != 0) {
        do {
          lVar7 = 0;
          lVar2 = *plVar9;
          if (lVar2 != 0) {
            lVar7 = *(longlong *)(lVar2 + 0x118);
          }
          if (((lVar7 != 0) && (lVar7 != param_1)) && (*(longlong *)(lVar7 + 0x168) == lVar2)) {
            plVar5 = (longlong *)*param_2;
            iVar6 = (int)param_2[1];
            plVar1 = plVar5 + iVar6;
            for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
              if (*plVar5 == lVar7) goto LAB_14222dedb;
            }
            *(int *)(param_2 + 1) = iVar6 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
            }
            *(longlong *)((longlong)iVar6 * 8 + *param_2) = lVar7;
            if (cVar3 != '\0') {
              FUN_14222dd40(lVar7,param_2,1);
            }
          }
LAB_14222dedb:
          plVar9 = plVar9 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar11);
      }
      local_120 = local_120 + 1;
    } while (local_120 != local_118);
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14222df80 FUN_14222df80 body=404 status=ok
// SIG undefined FUN_14222df80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14222df80(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_128 [32];
  longlong local_108 [24];
  longlong *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar2 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_3c = 0;
  if (param_1 != 0) {
    FUN_14221f2c0(param_1,local_108,0);
  }
  iVar3 = (int)param_2[1] + local_40;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,iVar3);
  }
  plVar4 = local_108;
  if (local_48 != (longlong *)0x0) {
    plVar4 = local_48;
  }
  uVar5 = (longlong)local_40 & 0x1fffffffffffffff;
  if (plVar4 + local_40 < plVar4) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    do {
      plVar1 = *(longlong **)(*plVar4 + 0x2d8);
      if (plVar1 != (longlong *)0x0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        *(longlong **)(*param_2 + (longlong)iVar3 * 8) = plVar1;
        if (param_3 != '\0') {
          (**(code **)(*plVar1 + 0x4b8))(plVar1,param_2,1);
        }
      }
      plVar4 = plVar4 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar5);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14222e120 FUN_14222e120 body=80 status=ok
// SIG undefined FUN_14222e120(void)

longlong FUN_14222e120(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 1000);
  if ((*(byte *)(param_1 + 0x3e0) & 1) == 0) {
    return lVar3;
  }
  if (lVar3 != 0) {
    uVar1 = FUN_1428e63f0();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014222e15b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 14222e170 FUN_14222e170 body=100 status=ok
// SIG undefined FUN_14222e170(void)

longlong * FUN_14222e170(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if ((*(byte *)(param_1 + 0x3e0) & 1) != 0) {
    lVar2 = *(longlong *)(param_1 + 1000);
  }
  param_2[1] = 0;
  *param_2 = lVar2;
  if (lVar2 == 0) {
    param_2[1] = 0;
    return param_2;
  }
  uVar1 = FUN_1428e63f0();
  lVar2 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar1);
  param_2[1] = lVar2;
  return param_2;
}



// FUNCTION 14222e1e0 FUN_14222e1e0 body=103 status=ok
// SIG undefined FUN_14222e1e0(void)

longlong FUN_14222e1e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x30);
  if (lVar1 == 0) {
    plVar2 = (longlong *)FNavigationSystem::GetDefaultWalkableArea(local_res8);
    if (*plVar2 != 0) {
      lVar3 = UNavAreaBase::GetPrivateStaticClass();
      for (lVar1 = *plVar2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar3) {
          return *plVar2;
        }
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 14222e250 FUN_14222e250 body=10 status=ok
// SIG undefined FUN_14222e250(void)

void FUN_14222e250(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014222e253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x678))();
  return;
}



// FUNCTION 14222e260 FUN_14222e260 body=10 status=ok
// SIG undefined FUN_14222e260(void)

void FUN_14222e260(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014222e263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x668))();
  return;
}



// FUNCTION 14222e270 FUN_14222e270 body=10 status=ok
// SIG undefined FUN_14222e270(void)

void FUN_14222e270(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014222e273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x688))();
  return;
}



// FUNCTION 14222e280 FUN_14222e280 body=10 status=ok
// SIG undefined FUN_14222e280(void)

void FUN_14222e280(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014222e283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x680))();
  return;
}



// FUNCTION 14222e290 ClientPing_Implementation body=10 status=ok
// SIG undefined ClientPing_Implementation(void)

void ATestBeaconClient::ClientPing_Implementation(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014222e293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x690))();
  return;
}



// FUNCTION 14222e2a0 FUN_14222e2a0 body=35 status=ok
// SIG undefined FUN_14222e2a0(void)

undefined8 FUN_14222e2a0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x168) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 400), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x118);
  }
  return 0;
}



// FUNCTION 14222e2d0 FUN_14222e2d0 body=45 status=ok
// SIG undefined FUN_14222e2d0(void)

undefined8 * FUN_14222e2d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 400) != 0)) {
    *param_2 = *(undefined8 *)(lVar1 + 0x198);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14222e300 FUN_14222e300 body=827 status=ok
// SIG undefined FUN_14222e300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14222e300(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8 [24];
  undefined8 *local_118;
  undefined8 local_110;
  longlong local_108 [24];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    local_118 = (undefined8 *)0x0;
    local_110 = 1;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>::
    ResizeGrow(local_1d8,0);
    puVar9 = local_1d8;
    if (local_118 != (undefined8 *)0x0) {
      puVar9 = local_118;
    }
    *puVar9 = *(undefined8 *)(param_1 + 0x168);
    uVar13 = local_110 & 0xffffffff;
    plVar11 = local_48;
    uVar3 = (uint)local_110;
    while (0 < (int)uVar3) {
      iVar6 = (int)uVar13;
      puVar9 = local_1d8;
      if (local_118 != (undefined8 *)0x0) {
        puVar9 = local_118;
      }
      iVar12 = iVar6 + -1;
      lVar2 = puVar9[iVar12];
      iVar5 = (iVar6 - iVar12) + -1;
      if (iVar5 != 0) {
        _guard_xfg_dispatch_icall_nop(puVar9 + iVar12,puVar9 + iVar6,(longlong)iVar5 << 3);
        plVar11 = local_48;
        iVar6 = (uint)local_110;
      }
      uVar13 = local_40;
      local_110 = CONCAT44(local_110._4_4_,iVar6 - 1U);
      plVar8 = local_108;
      if (plVar11 != (longlong *)0x0) {
        plVar8 = plVar11;
      }
      plVar7 = plVar8 + (int)local_40;
      for (; plVar8 != plVar7; plVar8 = plVar8 + 1) {
        uVar3 = iVar6 - 1U;
        if (*plVar8 == lVar2) goto LAB_14222e51f;
      }
      lVar10 = (longlong)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (local_40._4_4_ < iVar6) {
        TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
        ::ResizeGrow(local_108,uVar13 & 0xffffffff);
        plVar11 = local_48;
      }
      uVar13 = 0;
      plVar8 = local_108;
      if (plVar11 != (longlong *)0x0) {
        plVar8 = plVar11;
      }
      plVar8[lVar10] = lVar2;
      lVar10 = *(longlong *)(lVar2 + 0x118);
      plVar11 = local_48;
      if (lVar10 != 0) {
        if (lVar10 == param_1) {
          plVar8 = *(longlong **)(lVar2 + 0x1a0);
          uVar14 = (longlong)*(int *)(lVar2 + 0x1a8) & 0x1fffffffffffffff;
          if (plVar8 + *(int *)(lVar2 + 0x1a8) < plVar8) {
            uVar14 = uVar13;
          }
          if (uVar14 != 0) {
            do {
              uVar4 = local_110;
              lVar2 = *plVar8;
              if (lVar2 != 0) {
                plVar7 = local_108;
                if (plVar11 != (longlong *)0x0) {
                  plVar7 = plVar11;
                }
                plVar1 = plVar7 + (int)local_40;
                for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
                  if (*plVar7 == lVar2) goto LAB_14222e62a;
                }
                lVar10 = (longlong)(int)(uint)local_110;
                iVar6 = (uint)local_110 + 1;
                local_110 = CONCAT44(local_110._4_4_,iVar6);
                if (local_110._4_4_ < iVar6) {
                  TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
                  ::ResizeGrow(local_1d8,uVar4 & 0xffffffff);
                }
                puVar9 = local_1d8;
                if (local_118 != (undefined8 *)0x0) {
                  puVar9 = local_118;
                }
                puVar9[lVar10] = lVar2;
                plVar11 = local_48;
              }
LAB_14222e62a:
              plVar8 = plVar8 + 1;
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar14);
          }
        }
        else {
          plVar8 = (longlong *)*param_2;
          iVar6 = (int)param_2[1];
          for (plVar7 = plVar8; plVar7 != plVar8 + iVar6; plVar7 = plVar7 + 1) {
            if (*plVar7 == lVar10) {
              if ((int)((longlong)plVar7 - (longlong)plVar8 >> 3) != -1) goto LAB_14222e51c;
              break;
            }
          }
          *(int *)(param_2 + 1) = iVar6 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
          }
          *(longlong *)((longlong)iVar6 * 8 + *param_2) = lVar10;
          plVar11 = local_48;
        }
      }
LAB_14222e51c:
      uVar3 = (uint)local_110;
LAB_14222e51f:
      uVar13 = (ulonglong)uVar3;
    }
    if (plVar11 != (longlong *)0x0) {
      FMemory::Free(plVar11);
    }
    if (local_118 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14222e640 GetAttenuationFrequency body=604 status=ok
// SIG undefined GetAttenuationFrequency(void)

undefined8
FActiveSound::GetAttenuationFrequency
          (undefined8 param_1,longlong param_2,longlong param_3,float *param_4,undefined8 param_5)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  fVar3 = *param_4;
  uVar8 = 0;
  fVar7 = param_4[1];
  if (fVar3 == fVar7) goto LAB_14222e869;
  fVar6 = *(float *)(param_2 + 0xb0);
  fVar1 = *(float *)(param_2 + 0xb4);
  if (fVar6 == fVar1) {
    if (fVar6 < *(float *)(param_3 + 0x40)) {
      uVar8 = 0;
      fVar3 = fVar7;
    }
    goto LAB_14222e869;
  }
  if (*(char *)(param_2 + 0xa3) != '\0') {
    fVar9 = fVar7;
    if (fVar7 <= fVar3) {
      fVar9 = fVar3;
    }
    if (fVar3 <= fVar7) {
      fVar7 = fVar3;
    }
    fVar3 = (*(float *)(param_3 + 0x40) - fVar6) / (fVar1 - fVar6);
    uVar8 = 0;
    if (0.0 <= fVar3) {
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
    }
    else {
      fVar3 = 0.0;
    }
    uVar2 = FRuntimeFloatCurve::GetRichCurve(param_5);
    fVar3 = (float)FRichCurve::Eval(uVar2,fVar3,0);
    if (0.0 <= fVar3) {
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
    }
    else {
      fVar3 = 0.0;
    }
    if ((*(byte *)(param_2 + 0xa1) & 2) == 0) {
      fVar6 = 0.0;
      if ((0.0 <= fVar3) && (fVar6 = fVar3, 1.0 <= fVar3)) {
        fVar6 = 1.0;
      }
      fVar3 = (fVar9 - fVar7) * fVar6 + fVar7;
    }
    else {
      fVar6 = 0.0;
      if ((0.0 <= fVar3) && (fVar6 = fVar3, 1.0 <= fVar3)) {
        fVar6 = 1.0;
      }
      fVar3 = ::_guard_xfg_dispatch_icall_nop(fVar7);
      fVar7 = ::_guard_xfg_dispatch_icall_nop(fVar9);
      fVar3 = ::_guard_xfg_dispatch_icall_nop((fVar7 - fVar3) * fVar6 + fVar3);
      uVar8 = extraout_XMM0_Db_00;
    }
    goto LAB_14222e869;
  }
  fVar9 = *(float *)(param_3 + 0x40);
  if ((*(byte *)(param_2 + 0xa1) & 2) != 0) {
    fVar4 = fVar6;
    if ((fVar6 <= fVar9) && (fVar4 = fVar1, fVar9 <= fVar1)) {
      fVar4 = fVar9;
    }
    fVar3 = ::_guard_xfg_dispatch_icall_nop(fVar3);
    fVar7 = ::_guard_xfg_dispatch_icall_nop(fVar7);
    fVar3 = ::_guard_xfg_dispatch_icall_nop
                      (((fVar7 - fVar3) / (fVar1 - fVar6)) * (fVar4 - fVar6) + fVar3);
    uVar8 = extraout_XMM0_Db;
    goto LAB_14222e869;
  }
  if (1e-08 < ABS(fVar1 - fVar6)) {
    fVar4 = 0.0;
    fVar6 = (fVar9 - fVar6) / (fVar1 - fVar6);
    if (0.0 <= fVar6) goto LAB_14222e763;
  }
  else {
    if (fVar9 < fVar1) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = 1.0;
    }
LAB_14222e763:
    fVar4 = fVar6;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
  }
  fVar3 = (fVar7 - fVar3) * fVar4 + fVar3;
  uVar8 = 0;
LAB_14222e869:
  fVar7 = 20.0;
  uVar5 = 0;
  if ((20.0 <= fVar3) && (fVar7 = fVar3, uVar5 = uVar8, 20000.0 <= fVar3)) {
    fVar7 = 20000.0;
  }
  return CONCAT44(uVar5,fVar7);
}



// FUNCTION 14222e8a0 GetAvoidanceVelocityForComponent body=163 status=ok
// SIG undefined GetAvoidanceVelocityForComponent(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
UAvoidanceManager::GetAvoidanceVelocityForComponent
          (longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 local_res18 [4];
  undefined1 local_48 [64];
  
  if (param_3 != 0) {
    uVar1 = URVOAvoidanceInterface::GetPrivateStaticClass();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      FNavAvoidanceData::FNavAvoidanceData(local_48,param_1,plVar2);
      local_res18[0] = (**(code **)(*plVar2 + 0x18))(plVar2);
      FUN_14222e950(param_1,param_2,local_48,*(undefined4 *)(param_1 + 0x3c),local_res18);
      return param_2;
    }
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 14222e950 FUN_14222e950 body=4180 status=ok
// SIG undefined FUN_14222e950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_14222e950(longlong *param_1,float *param_2,float *param_3,float param_4,int *param_5)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  float *pfVar18;
  uint *puVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  undefined8 local_240;
  float local_238;
  undefined8 local_230;
  float local_228;
  float local_218;
  float fStack_214;
  uint *puStack_210;
  undefined4 local_208;
  uint uStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float fStack_1e4;
  float local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  float *local_1a8;
  longlong *local_1a0;
  float fStack_198;
  float fStack_194;
  uint *local_190;
  uint uStack_188;
  uint uStack_184;
  undefined8 local_180;
  longlong *local_178;
  undefined8 uStack_170;
  uint *puStack_168;
  uint uStack_160;
  uint uStack_15c;
  undefined8 uStack_158;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  if (0.0 < param_4) {
    lVar16 = param_1[4];
    fVar31 = param_4 * param_3[4];
    fVar30 = param_4 * param_3[3];
    fVar32 = param_4 * param_3[5];
    local_1f4 = fVar30 * fVar30 + fVar31 * fVar31;
    fVar27 = SQRT(local_1f4);
    if (lVar16 != 0) {
      local_254 = fVar31;
      local_250 = fVar30;
      local_248 = fVar32;
      local_230 = param_1;
      local_1f0 = param_4;
      local_1c0 = fVar27;
      local_1a8 = param_2;
      lVar10 = FUN_142a2f930();
      if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        bVar6 = true;
        bVar5 = true;
        local_1c8 = *(float *)(lVar16 + 0x790);
        if (0.01 <= fVar27) {
          plVar2 = param_1 + 0x17;
          *(undefined4 *)(param_1 + 0x18) = 0;
          if (*(int *)((longlong)param_1 + 0xc4) != *(int *)((longlong)param_1 + 0xc4)) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
            ResizeTo(plVar2);
          }
          local_240 = param_1 + 0xb;
          fStack_214 = 1.4013e-45;
          uVar3 = *(uint *)(param_1 + 0x10);
          puVar1 = (uint *)(param_1 + 0xd);
          local_218 = 0.0;
          uStack_204 = 0;
          fStack_200 = 0.0;
          if (uVar3 != 0) {
            puVar19 = (uint *)param_1[0xf];
            if ((uint *)param_1[0xf] == (uint *)0x0) {
              puVar19 = puVar1;
            }
            uVar17 = *puVar19;
            fStack_200 = 0.0;
            local_218 = 0.0;
            while (uVar17 == 0) {
              lVar16 = (longlong)(int)local_218;
              fStack_200 = (float)((int)fStack_200 + 0x20);
              fVar27 = (float)((int)local_218 + 1);
              bVar4 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_218
              ;
              local_218 = fVar27;
              if (bVar4) goto LAB_14222eb7b;
              uVar17 = puVar19[lVar16 + 1];
            }
            fStack_214 = (float)(-uVar17 & uVar17);
            iVar9 = 0x1f;
            if (fStack_214 != 0.0) {
              for (; (uint)fStack_214 >> iVar9 == 0; iVar9 = iVar9 + -1) {
              }
            }
            if (fStack_214 == 0.0) {
              iVar9 = 0x20;
            }
            else {
              iVar9 = 0x1f - iVar9;
            }
            uStack_204 = ((int)fStack_200 - iVar9) + 0x1f;
            if ((int)uVar3 < (int)uStack_204) {
LAB_14222eb7b:
              uStack_204 = uVar3;
            }
          }
          local_208 = 0xffffffff;
          uVar17 = *(uint *)(param_1 + 0x10);
          uStack_170 = CONCAT44(fStack_214,local_218);
          uStack_188 = 0xffffffff;
          uStack_184 = uStack_204;
          local_180 = CONCAT44(uStack_1fc,fStack_200);
          uVar12 = uVar17 & 0xffffffe0;
          fStack_198 = local_218;
          fStack_194 = fStack_214;
          puStack_210 = puVar1;
          local_190 = puVar1;
          local_178 = local_240;
          puStack_168 = puVar1;
          uStack_158 = local_180;
          uStack_160 = uStack_188;
          uStack_15c = uStack_184;
          local_1a0 = local_240;
          if (uVar17 != uVar3) {
            puVar19 = (uint *)param_1[0xf];
            if ((uint *)param_1[0xf] == (uint *)0x0) {
              puVar19 = puVar1;
            }
            uVar15 = puVar19[(int)uVar17 >> 5] & -1 << ((byte)uVar17 & 0x1f);
            iVar9 = (int)uVar17 >> 5;
            while (uVar15 == 0) {
              uVar12 = uVar12 + 0x20;
              if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar9)
              goto LAB_14222ec37;
              uVar15 = puVar19[(longlong)iVar9 + 1];
              iVar9 = iVar9 + 1;
            }
            uVar15 = -uVar15 & uVar15;
            iVar9 = 0x1f;
            if (uVar15 != 0) {
              for (; uVar15 >> iVar9 == 0; iVar9 = iVar9 + -1) {
              }
            }
            if (uVar15 == 0) {
              iVar9 = 0x20;
            }
            else {
              iVar9 = 0x1f - iVar9;
            }
            uVar17 = (uVar12 - iVar9) + 0x1f;
            if ((int)uVar3 < (int)uVar17) {
LAB_14222ec37:
              uVar17 = uVar3;
            }
          }
          while( true ) {
            plVar7 = local_230;
            fVar27 = local_248;
            lVar16 = (longlong)(int)uStack_184;
            if ((uStack_184 == uVar17) && (local_190 == puVar1)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if ((bVar4) && (local_1a0 == local_240)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) break;
            lVar10 = *local_1a0;
            if (((param_5 == (int *)0x0) || (*param_5 != *(int *)(lVar10 + lVar16 * 0x48))) &&
               (0.0 < *(float *)(lVar10 + 0x1c + lVar16 * 0x48))) {
              uVar3 = *(uint *)(lVar10 + 0x30 + lVar16 * 0x48);
              if ((((uint)param_3[0xc] & uVar3) == 0) || (((uint)param_3[0xd] & uVar3) != 0)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if (!bVar4) {
                fVar28 = *(float *)(lVar10 + 4 + lVar16 * 0x48);
                fVar29 = *(float *)(lVar10 + 8 + lVar16 * 0x48);
                fVar25 = fVar28 - *param_3;
                fVar24 = fVar29 - param_3[1];
                if (((fVar25 * fVar25 + fVar24 * fVar24 <= param_3[0xe] * param_3[0xe]) &&
                    (fVar23 = *(float *)(lVar10 + 0xc + lVar16 * 0x48) - param_3[2],
                    ABS(fVar23) <=
                    param_3[8] + *(float *)(lVar10 + 0x24 + lVar16 * 0x48) +
                    *(float *)(local_230 + 9))) &&
                   (0.0 < fVar30 * fVar25 + fVar24 * fVar31 + fVar23 * fVar32)) {
                  local_1b8 = *(undefined8 *)param_3;
                  fVar28 = fVar28 - (float)local_1b8;
                  local_1b0 = param_3[2];
                  fVar23 = param_3[7] + *(float *)(lVar10 + 0x20 + lVar16 * 0x48);
                  fVar29 = fVar29 - (float)((ulonglong)local_1b8 >> 0x20);
                  fVar31 = fVar28 * fVar28 + fVar29 * fVar29;
                  fVar24 = fVar29;
                  fVar25 = fVar28;
                  if (fVar31 == 1.0) {
LAB_14222ee55:
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = DAT_1468b5d98;
                    fVar24 = DAT_1468b5d94;
                    fVar25 = DAT_1468b5d90;
                    if (1e-08 <= fVar31) {
                      auVar26 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
                      local_24c = auVar26._0_4_;
                      local_24c = local_24c +
                                  local_24c * (0.5 - fVar31 * 0.5 * local_24c * local_24c);
                      local_24c = local_24c +
                                  local_24c * (0.5 - fVar31 * 0.5 * local_24c * local_24c);
                      fVar24 = fVar29 * local_24c;
                      fVar25 = fVar28 * local_24c;
                      goto LAB_14222ee55;
                    }
                  }
                  if (((fVar25 == 0.0) && (fVar24 == 0.0)) && (fVar20 == 0.0)) {
                    bVar4 = true;
                  }
                  else {
                    bVar4 = false;
                  }
                  fVar31 = local_254;
                  if (!bVar4) {
                    if (local_1c8 < *(float *)(lVar10 + 0x2c + lVar16 * 0x48)) {
LAB_14222eef8:
                      local_1f8 = *(float *)(lVar10 + 0x18 + lVar16 * 0x48);
                      local_1c4 = *(float *)(lVar10 + 0x14 + lVar16 * 0x48);
                      fVar32 = *(float *)(lVar10 + 0x10 + lVar16 * 0x48);
                    }
                    else {
                      fVar30 = *(float *)(lVar10 + 0x14 + lVar16 * 0x48);
                      fVar32 = *(float *)(lVar10 + 0x10 + lVar16 * 0x48);
                      if (0.0 <= fVar32 * fVar28 + fVar30 * fVar29) goto LAB_14222eef8;
                      fVar20 = ((1.0 - param_3[9]) + *(float *)(lVar10 + 0x28 + lVar16 * 0x48)) *
                               0.5;
                      fVar22 = 1.0 - fVar20;
                      fVar32 = fVar32 * fVar20 + fVar22 * param_3[3];
                      local_1c4 = fVar30 * fVar20 + fVar22 * param_3[4];
                      local_1f8 = *(float *)(lVar10 + 0x18 + lVar16 * 0x48) * fVar20 +
                                  fVar22 * param_3[5];
                    }
                    fVar32 = fVar32 * local_1f0;
                    local_1f8 = local_1f0 * local_1f8;
                    local_1c4 = local_1f0 * local_1c4;
                    fVar25 = fVar25 * fVar23;
                    local_1ec = -(fVar23 * fVar24);
                    fVar30 = (local_1f8 + 100.0) - local_1f8;
                    fVar24 = fVar28 + local_1ec + fVar32;
                    fVar23 = fVar29 + fVar25 + local_1c4;
                    fVar22 = fVar24 - fVar32;
                    fVar24 = fVar24 - fVar32;
                    fVar20 = fVar23 - local_1c4;
                    fVar23 = fVar23 - local_1c4;
                    local_1e8 = fVar30 * fVar20 - fVar23 * 0.0;
                    fStack_1e4 = fVar24 * 0.0 - fVar30 * fVar22;
                    local_1e0 = fVar23 * fVar22 - fVar24 * fVar20;
                    fVar30 = local_1e8 * local_1e8 + fStack_1e4 * fStack_1e4 + local_1e0 * local_1e0
                    ;
                    if (fVar30 != 1.0) {
                      if (1e-08 <= fVar30) {
                        auVar26 = rsqrtss(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30));
                        fVar24 = auVar26._0_4_;
                        fVar24 = fVar24 + fVar24 * (0.5 - fVar30 * 0.5 * fVar24 * fVar24);
                        fVar24 = fVar24 + fVar24 * (0.5 - fVar30 * 0.5 * fVar24 * fVar24);
                        local_1e8 = fVar24 * local_1e8;
                        local_1e0 = fVar24 * local_1e0;
                        fStack_1e4 = fVar24 * fStack_1e4;
                      }
                      else {
                        local_1e8 = DAT_1468b5d90;
                        fStack_1e4 = DAT_1468b5d94;
                        local_1e0 = DAT_1468b5d98;
                      }
                    }
                    fVar24 = (fVar28 - local_1ec) + fVar32;
                    fVar25 = (fVar29 - fVar25) + local_1c4;
                    fVar28 = fVar32 * local_1e8 + fStack_1e4 * local_1c4 + local_1f8 * local_1e0;
                    fVar23 = fVar25 - local_1c4;
                    fVar25 = fVar25 - local_1c4;
                    fVar30 = (local_1f8 - 100.0) - local_1f8;
                    fVar29 = fVar24 - fVar32;
                    fVar24 = fVar24 - fVar32;
                    local_218 = fVar30 * fVar23 - fVar25 * 0.0;
                    fStack_214 = fVar29 * 0.0 - fVar30 * fVar24;
                    fVar30 = fVar25 * fVar24 - fVar29 * fVar23;
                    fVar29 = local_218 * local_218 + fStack_214 * fStack_214 + fVar30 * fVar30;
                    if (fVar29 == 1.0) {
                      puStack_210 = (uint *)CONCAT44(puStack_210._4_4_,fVar30);
                    }
                    else if (1e-08 <= fVar29) {
                      auVar26 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
                      local_1ec = auVar26._0_4_;
                      local_1ec = local_1ec +
                                  local_1ec * (0.5 - fVar29 * 0.5 * local_1ec * local_1ec);
                      local_1ec = local_1ec +
                                  local_1ec * (0.5 - fVar29 * 0.5 * local_1ec * local_1ec);
                      local_218 = local_1ec * local_218;
                      fVar30 = local_1ec * fVar30;
                      fStack_214 = local_1ec * fStack_214;
                      puStack_210 = (uint *)CONCAT44(puStack_210._4_4_,fVar30);
                    }
                    else {
                      local_218 = DAT_1468b5d90;
                      fStack_214 = DAT_1468b5d94;
                      puStack_210 = (uint *)CONCAT44(puStack_210._4_4_,DAT_1468b5d98);
                      fVar30 = DAT_1468b5d98;
                    }
                    fVar32 = fVar32 * local_218 + fStack_214 * local_1c4 + local_1f8 * fVar30;
                    if ((0.0 < (local_250 * local_1e8 + local_254 * fStack_1e4 +
                               local_248 * local_1e0) - fVar28) &&
                       (bVar5 = bVar6,
                       0.0 < (local_250 * local_218 + local_254 * fStack_214 + local_248 * fVar30) -
                             fVar32)) {
                      bVar6 = false;
                      bVar5 = false;
                    }
                    iVar9 = (int)param_1[0x18];
                    *(int *)(param_1 + 0x18) = iVar9 + 1;
                    local_258 = fStack_1e4;
                    local_24c = fVar28;
                    if (*(int *)((longlong)param_1 + 0xc4) < iVar9 + 1) {
                      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                      ::ResizeGrow(plVar2,iVar9);
                    }
                    puVar14 = (undefined8 *)((longlong)iVar9 * 0x20 + *plVar2);
                    *puVar14 = CONCAT44(fStack_1e4,local_1e8);
                    *(float *)(puVar14 + 1) = local_1e0;
                    *(float *)((longlong)puVar14 + 0xc) = fVar28;
                    puVar14[2] = CONCAT44(fStack_214,local_218);
                    *(undefined4 *)(puVar14 + 3) = puStack_210._0_4_;
                    *(float *)((longlong)puVar14 + 0x1c) = fVar32;
                    fVar30 = local_250;
                    fVar32 = fVar27;
                  }
                }
              }
            }
            uStack_188 = uStack_188 & ~(uint)fStack_194;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_198);
          }
          param_2 = local_1a8;
          if (!bVar5) {
            local_1d8 = 0;
            local_1d0 = 0;
            cVar8 = FWeakObjectPtr::IsValid(local_230 + 0x19);
            if (cVar8 != '\0') {
              (**(code **)(*(longlong *)plVar7[0x1a] + 0x10))
                        ((longlong *)plVar7[0x1a],param_3,param_3[0xe],&local_1d8);
            }
            if ((int)plVar7[0x18] != 0) {
              fVar32 = fVar30;
              fVar27 = fVar31;
              if ((local_1f4 != 1.0) &&
                 (fVar32 = DAT_1468b5d90, fVar27 = DAT_1468b5d94, 1e-08 <= local_1f4)) {
                auVar26 = rsqrtss(ZEXT416((uint)local_1f4),ZEXT416((uint)local_1f4));
                fVar27 = auVar26._0_4_;
                fVar27 = fVar27 + fVar27 * (0.5 - local_1f4 * 0.5 * fVar27 * fVar27);
                fVar27 = fVar27 * (0.5 - local_1f4 * 0.5 * fVar27 * fVar27) + fVar27;
                fVar32 = fVar27 * fVar30;
                fVar27 = fVar27 * fVar31;
              }
              fVar28 = -1.0;
              if ((-1.0 <= fVar32) && (fVar28 = fVar32, 1.0 <= fVar32)) {
                fVar28 = 1.0;
              }
              fVar32 = _guard_xfg_dispatch_icall_nop(fVar28);
              if (fVar27 < 0.0) {
                fVar32 = -fVar32;
              }
              local_230 = (longlong *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
              fVar27 = 0.0;
              local_258 = 0.0;
              local_228 = DAT_1468b5d98;
              uVar21 = __libm_sse2_sincosf_(fVar32 - 0.40142572);
              local_148 = (undefined4)((ulonglong)uVar21 >> 0x20);
              local_144 = (undefined4)uVar21;
              local_140 = 0.0;
              uVar21 = __libm_sse2_sincosf_(fVar32 + 0.40142572);
              local_13c = (undefined4)((ulonglong)uVar21 >> 0x20);
              local_138 = (undefined4)uVar21;
              local_134 = 0;
              uVar21 = __libm_sse2_sincosf_(fVar32 - 0.6981317);
              local_130 = (undefined4)((ulonglong)uVar21 >> 0x20);
              local_12c = (undefined4)uVar21;
              local_128 = 0;
              uVar21 = __libm_sse2_sincosf_(fVar32 + 0.6981317);
              local_124 = (undefined4)((ulonglong)uVar21 >> 0x20);
              local_120 = (undefined4)uVar21;
              local_11c = 0;
              uVar21 = __libm_sse2_sincosf_(fVar32 - 0.9599311);
              local_118 = (undefined4)((ulonglong)uVar21 >> 0x20);
              local_114 = (undefined4)uVar21;
              local_110 = 0;
              uVar21 = __libm_sse2_sincosf_(fVar32 + 0.9599311);
              local_10c = (undefined4)((ulonglong)uVar21 >> 0x20);
              local_108 = (undefined4)uVar21;
              local_104 = 0;
              uVar21 = __libm_sse2_sincosf_(fVar32 - 1.4835298);
              local_100 = (undefined4)((ulonglong)uVar21 >> 0x20);
              local_fc = (undefined4)uVar21;
              local_f8 = 0;
              uVar21 = __libm_sse2_sincosf_(fVar32 + 1.4835298);
              pfVar18 = &local_140;
              lVar16 = 8;
              local_f4 = (int)((ulonglong)uVar21 >> 0x20);
              local_f0 = (int)uVar21;
              local_ec = 0;
              iVar9 = (int)local_1d0;
              do {
                fVar32 = *pfVar18;
                fVar29 = local_1c0 * pfVar18[-1];
                fVar28 = local_1c0 * pfVar18[-2];
                local_1b0 = fVar32 * local_1c0;
                local_1b8 = CONCAT44(fVar29,fVar28);
                if (fVar27 < (fVar29 * fVar29 + fVar28 * fVar28 + fVar32 * local_1f4 * fVar32) *
                             (fVar31 * fVar29 + fVar28 * fVar30 + local_1b0 * local_248)) {
                  if (0 < iVar9) {
                    pfVar11 = (float *)(local_1d8 + 4);
                    iVar13 = 0;
                    do {
                      fVar24 = pfVar11[2] - pfVar11[-1];
                      fVar23 = pfVar11[-1] - *param_3;
                      fVar25 = pfVar11[3] - *pfVar11;
                      fVar20 = *pfVar11 - param_3[1];
                      fVar32 = fVar24 * fVar29 - fVar25 * fVar28;
                      fVar27 = local_258;
                      fVar30 = local_250;
                      fVar31 = local_254;
                      if (0.0001 <= ABS(fVar32)) {
                        fVar32 = 1.0 / fVar32;
                        fVar24 = (fVar24 * fVar20 - fVar25 * fVar23) * fVar32;
                        fVar32 = (fVar20 * fVar28 - fVar23 * fVar29) * fVar32;
                        if ((((0.0 <= fVar32) && (fVar32 <= 1.0)) && (0.0 <= fVar24)) &&
                           ((fVar24 <= 1.0 &&
                            (ABS(param_3[2] - ((pfVar11[4] - pfVar11[1]) * fVar24 + pfVar11[1])) <=
                             param_3[8])))) goto LAB_14222f8cf;
                      }
                      iVar13 = iVar13 + 1;
                      pfVar11 = pfVar11 + 6;
                    } while (iVar13 < iVar9);
                  }
                  local_268 = (undefined4)plVar7[0x18];
                  AvoidCones(&local_240,plVar2,&DAT_1468b5d90,&local_1b8);
                  fVar32 = ((float)local_240 * (float)local_240 + local_240._4_4_ * local_240._4_4_
                           + local_238 * local_238) *
                           (fVar30 * (float)local_240 + fVar31 * local_240._4_4_ +
                           local_248 * local_238);
                  iVar9 = (int)local_1d0;
                  if (fVar27 < fVar32) {
                    local_230 = local_240;
                    local_228 = local_238;
                    fVar27 = fVar32;
                    local_258 = fVar32;
                  }
                }
LAB_14222f8cf:
                pfVar18 = pfVar18 + 3;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
              fVar30 = (float)local_230;
              fVar31 = local_230._4_4_;
              fVar32 = local_228;
            }
            pfVar18 = local_1a8;
            fVar27 = 1.0 / local_1f0;
            *local_1a8 = fVar30 * fVar27;
            local_1a8[1] = fVar31 * fVar27;
            local_1a8[2] = fVar32 * fVar27;
            if (local_1d8 == 0) {
              return local_1a8;
            }
            FMemory::Free();
            return pfVar18;
          }
        }
      }
    }
  }
  *(undefined8 *)param_2 = *(undefined8 *)(param_3 + 3);
  param_2[2] = param_3[5];
  return param_2;
}



// FUNCTION 14222f9b0 GetBoolParameter body=65 status=ok
// SIG undefined GetBoolParameter(void)

ulonglong FActiveSound::GetBoolParameter(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x518);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x520) * 4;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 4) {
      if (*plVar1 == param_2) {
        *param_3 = *(undefined1 *)((longlong)plVar1 + 0xc);
        return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      }
    }
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}



// FUNCTION 14222fa00 OnRep_GameModeClass body=10 status=ok
// SIG undefined OnRep_GameModeClass(void)

void AGameStateBase::OnRep_GameModeClass(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014222fa03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x628))();
  return;
}



// FUNCTION 14222fa10 FUN_14222fa10 body=677 status=ok
// SIG undefined FUN_14222fa10(void)

longlong FUN_14222fa10(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
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
  
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uStack_84 = 1;
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar14 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar4 = *puVar14;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar11 = local_88 + 1;
      bVar5 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= local_88;
      local_88 = iVar11;
      if (bVar5) goto LAB_14222faee;
      uVar4 = puVar14[lVar7 + 1];
    }
    uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar11 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_74 = (iStack_70 - iVar11) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14222faee:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar12 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar14 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = puVar14[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar11 = (int)uVar4 >> 5;
    while (uVar13 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar11)
      goto LAB_14222fbc0;
      uVar13 = puVar14[(longlong)iVar11 + 1];
      iVar11 = iVar11 + 1;
    }
    uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
    iVar11 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_74 = (uVar12 - iVar11) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14222fbc0:
      uStack_74 = uVar3;
    }
  }
  do {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      return 0;
    }
    lVar7 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if ((lVar7 != 0) && (cVar6 = UActorComponent::ComponentHasTag(lVar7,param_3), cVar6 != '\0')) {
      if (param_2 != 0) {
        lVar8 = FUN_1428e7a40();
        lVar9 = param_2;
        do {
          lVar10 = param_2;
          if (lVar9 == lVar8) goto LAB_14222fc41;
          lVar9 = *(longlong *)(lVar9 + 0x30);
        } while (lVar9 != 0);
      }
      lVar10 = 0;
LAB_14222fc41:
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        return lVar7;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  } while( true );
}



// FUNCTION 14222fcc0 FUN_14222fcc0 body=981 status=ok
// SIG undefined FUN_14222fcc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14222fcc0(longlong param_1,float *param_2,char param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_c8;
  uint uStack_c4;
  uint uStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  *(undefined8 *)(param_2 + 3) = _DAT_1468b5d90;
  fVar8 = DAT_1468b5d98;
  param_2[5] = DAT_1468b5d98;
  *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 3);
  param_2[2] = fVar8;
  *(undefined1 *)(param_2 + 6) = 0;
  local_c8 = 0.0;
  uStack_c4 = 1;
  uStack_b4 = 0;
  fStack_b0 = 0.0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    fStack_b0 = 0.0;
    local_c8 = 0.0;
    while (uVar4 == 0) {
      lVar10 = (longlong)(int)local_c8;
      fStack_b0 = (float)((int)fStack_b0 + 0x20);
      fVar8 = (float)((int)local_c8 + 1);
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_c8;
      local_c8 = fVar8;
      if (bVar6) goto LAB_14222fdbd;
      uVar4 = puVar12[lVar10 + 1];
    }
    uStack_c4 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar7 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_b4 = ((int)fStack_b0 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_b4) {
LAB_14222fdbd:
      uStack_b4 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_90 = 0xffffffff;
  uStack_8c = uStack_b4;
  local_88 = CONCAT44(uStack_ac,fStack_b0);
  uStack_78 = CONCAT44(uStack_c4,local_c8);
  uVar11 = uVar4 & 0xffffffe0;
  fStack_a0 = local_c8;
  uStack_9c = uStack_c4;
  local_98 = puVar1;
  local_80 = plVar2;
  puStack_70 = puVar1;
  uStack_60 = local_88;
  uStack_68 = uStack_90;
  uStack_64 = uStack_8c;
  uStack_b4 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14222fe95;
      uVar9 = puVar12[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar9 = uVar9 - 1 & uVar9 ^ uVar9;
    iVar7 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_b4 = (uVar11 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_b4) {
LAB_14222fe95:
      uStack_b4 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_8c == uStack_b4) && (local_98 == puVar1)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) break;
    plVar5 = *(longlong **)(*plVar2 + (longlong)(int)uStack_8c * 0x10);
    if (plVar5 != (longlong *)0x0) {
      lVar10 = FUN_1429f11d0();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((bVar6) && ((*(byte *)(plVar5 + 0x17) & 1) != 0)) &&
         ((param_3 != '\0' || (iVar7 = (**(code **)(*plVar5 + 0x4e8))(plVar5), iVar7 != 0)))) {
        fVar8 = *(float *)((longlong)plVar5 + 0x1dc) + *(float *)(plVar5 + 0x3a);
        fVar14 = *(float *)(plVar5 + 0x3c) + *(float *)((longlong)plVar5 + 0x1d4);
        fVar18 = *(float *)((longlong)plVar5 + 0x1e4) + *(float *)(plVar5 + 0x3b);
        fStack_b0 = (float)CONCAT31(fStack_b0._1_3_,1);
        fVar15 = *(float *)(plVar5 + 0x3a) - *(float *)((longlong)plVar5 + 0x1dc);
        fVar16 = *(float *)((longlong)plVar5 + 0x1d4) - *(float *)(plVar5 + 0x3c);
        fVar17 = *(float *)(plVar5 + 0x3b) - *(float *)((longlong)plVar5 + 0x1e4);
        if (*(char *)(param_2 + 6) == '\0') {
          *param_2 = fVar15;
          param_2[1] = fVar16;
          param_2[2] = fVar17;
          param_2[3] = fVar8;
          *(ulonglong *)(param_2 + 4) = CONCAT44(fVar18,fVar14);
          param_2[6] = fStack_b0;
        }
        else {
          fVar13 = *param_2;
          if (fVar15 <= *param_2) {
            fVar13 = fVar15;
          }
          if (fVar8 <= param_2[3]) {
            fVar8 = param_2[3];
          }
          if (fVar14 <= param_2[4]) {
            fVar14 = param_2[4];
          }
          fVar15 = param_2[1];
          if (fVar16 <= param_2[1]) {
            fVar15 = fVar16;
          }
          *param_2 = fVar13;
          fVar16 = param_2[2];
          if (fVar17 <= param_2[2]) {
            fVar16 = fVar17;
          }
          param_2[3] = fVar8;
          param_2[1] = fVar15;
          param_2[4] = fVar14;
          param_2[2] = fVar16;
          fVar8 = param_2[5];
          if (param_2[5] <= fVar18) {
            fVar8 = fVar18;
          }
          param_2[5] = fVar8;
        }
      }
    }
    uStack_90 = uStack_90 & ~uStack_9c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&fStack_a0);
  }
  return param_2;
}



// FUNCTION 1422300a0 FUN_1422300a0 body=734 status=ok
// SIG undefined FUN_1422300a0(void)

void FUN_1422300a0(longlong param_1,float *param_2,float *param_3,char param_4)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  float fVar12;
  float fVar13;
  float local_res8 [2];
  float *local_res10;
  float local_res18 [2];
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_c8 = 0;
  uStack_c4 = 1;
  fVar13 = 0.0;
  fVar12 = 0.0;
  uStack_b4 = 0;
  iStack_b0 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_b0 = 0;
    local_c8 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_c8;
      iStack_b0 = iStack_b0 + 0x20;
      iVar7 = local_c8 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar7;
      if (bVar6) goto LAB_14223018d;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_c4 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar7 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_b4 = (iStack_b0 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_b4) {
LAB_14223018d:
      uStack_b4 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_90 = 0xffffffff;
  uStack_8c = uStack_b4;
  local_88 = CONCAT44(uStack_ac,iStack_b0);
  uStack_78 = CONCAT44(uStack_c4,local_c8);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_a0 = local_c8;
  uStack_9c = uStack_c4;
  local_res10 = param_2;
  local_98 = puVar1;
  local_80 = plVar2;
  puStack_70 = puVar1;
  uStack_60 = local_88;
  uStack_68 = uStack_90;
  uStack_64 = uStack_8c;
  uStack_b4 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142230255;
      uVar8 = puVar11[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = uVar8 - 1 & uVar8 ^ uVar8;
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
    uStack_b4 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_b4) {
LAB_142230255:
      uStack_b4 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_8c == uStack_b4) && (local_98 == puVar1)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) break;
    plVar5 = *(longlong **)(*plVar2 + (longlong)(int)uStack_8c * 0x10);
    if (plVar5 != (longlong *)0x0) {
      lVar9 = FUN_1429f11d0();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((bVar6) && ((*(byte *)(plVar5 + 0x17) & 1) != 0)) &&
         ((param_4 != '\0' || (iVar7 = (**(code **)(*plVar5 + 0x4e8))(plVar5), iVar7 != 0)))) {
        (**(code **)(*plVar5 + 0x4b0))(plVar5,local_res8,local_res18);
        if (fVar13 < local_res8[0]) {
          fVar13 = local_res8[0];
        }
        if (fVar12 < local_res18[0]) {
          fVar12 = local_res18[0];
        }
      }
    }
    uStack_90 = uStack_90 & ~uStack_9c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
  }
  *local_res10 = fVar13;
  *param_3 = fVar12;
  return;
}



// FUNCTION 142230380 GetComponentsByClass body=1330 status=ok
// SIG undefined GetComponentsByClass(void)

longlong * AActor::GetComponentsByClass(longlong param_1,longlong *param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  longlong *plVar14;
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  uVar9 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar10 = uVar9;
  if (param_3 != 0) {
    uVar7 = FUN_1428e7a40();
    uVar8 = param_3;
    do {
      uVar10 = param_3;
      if (uVar8 == uVar7) break;
      uVar8 = *(ulonglong *)(uVar8 + 0x30);
      uVar10 = uVar9;
    } while (uVar8 != 0);
  }
  uVar8 = FUN_1428e7a40();
  if (uVar10 == uVar8) {
    plVar14 = (longlong *)(param_1 + 0x2b0);
    uStack_94 = 1;
    uVar2 = *(uint *)(param_1 + 0x2d8);
    puVar1 = (uint *)(param_1 + 0x2c0);
    local_98 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar2 != 0) {
      puVar12 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar3 = *puVar12;
      uVar10 = uVar9;
      while (uVar3 == 0) {
        iVar6 = (int)uVar9;
        uStack_80 = (int)uVar10 + 0x20;
        uVar10 = (ulonglong)uStack_80;
        local_98 = iVar6 + 1;
        uVar9 = (ulonglong)local_98;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_1422304b5;
        uVar3 = puVar12[(longlong)iVar6 + 1];
      }
      uStack_94 = -uVar3 & uVar3;
      iVar6 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_84 = (uStack_80 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_1422304b5:
        uStack_84 = uVar2;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x2d8);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,uStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar13 = uVar3 & 0xffffffe0;
    uStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar1;
    local_50 = plVar14;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar3;
    if (uVar3 != uVar2) {
      puVar12 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar11 = puVar12[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
      iVar6 = (int)uVar3 >> 5;
      while (uVar11 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_142230586;
        uVar11 = puVar12[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar6 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_84 = (uVar13 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_142230586:
        uStack_84 = uVar2;
      }
    }
    while( true ) {
      if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) break;
      lVar4 = *(longlong *)(*plVar14 + (longlong)(int)uStack_5c * 0x10);
      if (lVar4 != 0) {
        iVar6 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar6 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
        }
        *(longlong *)(*param_2 + (longlong)iVar6 * 8) = lVar4;
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
  else if (param_3 != 0) {
    uVar8 = FUN_1428e7a40();
    uVar10 = param_3;
    do {
      if (uVar10 == uVar8) {
        plVar14 = (longlong *)(param_1 + 0x2b0);
        uStack_94 = 1;
        uVar2 = *(uint *)(param_1 + 0x2d8);
        puVar1 = (uint *)(param_1 + 0x2c0);
        local_98 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        if (uVar2 == 0) goto LAB_142230702;
        puVar12 = *(uint **)(param_1 + 0x2d0);
        if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
          puVar12 = puVar1;
        }
        uVar3 = *puVar12;
        uVar10 = uVar9;
        uVar8 = uVar9;
        goto joined_r0x0001422306a8;
      }
      uVar10 = *(ulonglong *)(uVar10 + 0x30);
    } while (uVar10 != 0);
  }
  return param_2;
joined_r0x0001422306a8:
  if (uVar3 != 0) goto LAB_1422306d4;
  iVar6 = (int)uVar10;
  uStack_80 = (int)uVar8 + 0x20;
  uVar8 = (ulonglong)uStack_80;
  local_98 = iVar6 + 1;
  uVar10 = (ulonglong)local_98;
  if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1422306fe;
  uVar3 = puVar12[(longlong)iVar6 + 1];
  goto joined_r0x0001422306a8;
LAB_1422306d4:
  uStack_94 = uVar3 - 1 & uVar3 ^ uVar3;
  iVar6 = 0x1f;
  if (uStack_94 != 0) {
    for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  if (uStack_94 == 0) {
    iVar6 = 0x20;
  }
  else {
    iVar6 = 0x1f - iVar6;
  }
  uStack_84 = (uStack_80 - iVar6) + 0x1f;
  if ((int)uVar2 < (int)uStack_84) {
LAB_1422306fe:
    uStack_84 = uVar2;
  }
LAB_142230702:
  uVar3 = *(uint *)(param_1 + 0x2d8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,uStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar13 = uVar3 & 0xffffffe0;
  uStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar14;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = puVar12[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar6 = (int)uVar3 >> 5;
    while (uVar11 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1422307d7;
      uVar11 = puVar12[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
    iVar6 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (uVar13 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1422307d7:
      uStack_84 = uVar2;
    }
  }
  do {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      return param_2;
    }
    lVar4 = *(longlong *)(*plVar14 + (longlong)(int)uStack_5c * 0x10);
    if (lVar4 != 0) {
      uVar8 = FUN_1428e7a40();
      uVar10 = param_3;
      do {
        uVar7 = param_3;
        if (uVar10 == uVar8) break;
        uVar10 = *(ulonglong *)(uVar10 + 0x30);
        uVar7 = uVar9;
      } while (uVar10 != 0);
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(uVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(uVar7 + 0x90) * 8
           ) != uVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        iVar6 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar6 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
        }
        *(longlong *)(*param_2 + (longlong)iVar6 * 8) = lVar4;
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
  } while( true );
}



// FUNCTION 1422308c0 GetComponentsByTag body=188 status=ok
// SIG undefined GetComponentsByTag(void)

longlong *
AActor::GetComponentsByTag
          (undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *local_18;
  uint local_10;
  
  GetComponentsByClass(param_1,&local_18);
  *param_2 = 0;
  param_2[1] = 0;
  if ((0 < (int)local_10) &&
     (TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_10), 0 < (int)local_10)) {
    uVar4 = (ulonglong)local_10;
    puVar3 = local_18;
    do {
      cVar2 = UActorComponent::ComponentHasTag(*puVar3,param_4);
      if (cVar2 != '\0') {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *puVar3;
      }
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free(local_18);
  }
  return param_2;
}



// FUNCTION 142230980 FUN_142230980 body=660 status=ok
// SIG undefined FUN_142230980(void)

int FUN_142230980(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
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
  
  iVar11 = 0;
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar4 = *puVar12;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar8 = local_88 + 1;
      bVar6 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= local_88;
      local_88 = iVar8;
      if (bVar6) goto LAB_142230a5e;
      uVar4 = puVar12[lVar7 + 1];
    }
    uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar8 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_74 = (iStack_70 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142230a5e:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar10 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar8) goto LAB_142230b30;
      uVar10 = puVar12[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar10 = uVar10 - 1 & uVar10 ^ uVar10;
    iVar8 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_74 = (uVar9 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142230b30:
      uStack_74 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) break;
    plVar5 = *(longlong **)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (plVar5 != (longlong *)0x0) {
      lVar7 = FUN_1429f11d0();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((bVar6) && (iVar8 = (**(code **)(*plVar5 + 0x4e8))(plVar5), iVar8 != 0)) &&
         (iVar8 = (**(code **)(*plVar5 + 0x4f0))(plVar5,param_2), iVar11 <= iVar8)) {
        iVar11 = iVar8;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return iVar11;
}



// FUNCTION 142230c20 FUN_142230c20 body=257 status=ok
// SIG undefined FUN_142230c20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_142230c20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_1c;
  undefined4 local_14;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x168);
    if (lVar1 == 0) {
      local_1c = _DAT_1468b5d90;
      local_14 = DAT_1468b5d98;
    }
    else {
      local_1c = *(undefined8 *)(lVar1 + 0x220);
      local_14 = *(float *)(lVar1 + 0x228);
    }
    fVar3 = local_14;
    uVar2 = local_1c;
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 == 0) {
      local_1c = _DAT_1468b5d90;
      local_14 = DAT_1468b5d98;
    }
    else {
      local_1c = *(undefined8 *)(lVar1 + 0x220);
      local_14 = *(float *)(lVar1 + 0x228);
    }
    uStack_24 = (float)((ulonglong)uVar2 >> 0x20);
    uStack_24 = (float)((ulonglong)local_1c >> 0x20) - uStack_24;
    local_28 = (float)uVar2;
    local_28 = (float)local_1c - local_28;
    return SQRT(uStack_24 * uStack_24 + local_28 * local_28 +
                (local_14 - fVar3) * (local_14 - fVar3));
  }
  return 0.0;
}



// FUNCTION 142230d30 FUN_142230d30 body=568 status=ok
// SIG undefined FUN_142230d30(void)

float FUN_142230d30(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float local_58;
  float fStack_54;
  undefined8 local_48;
  float local_40;
  
  if (param_2 == 0) {
    fVar3 = -2.0;
  }
  else {
    if (*(longlong *)(param_1 + 0x168) == 0) {
      local_40 = (float)DAT_1464aa7b0;
      puVar1 = &local_48;
      local_48 = DAT_1464aa7a8;
      lVar2 = 0;
    }
    else {
      puVar1 = (undefined8 *)FUN_142369f10(*(longlong *)(param_1 + 0x168),&local_48);
      lVar2 = *(longlong *)(param_1 + 0x168);
    }
    if (lVar2 == 0) {
      local_40 = DAT_1468b5d98;
      local_48._0_4_ = DAT_1468b5d90;
      local_48._4_4_ = DAT_1468b5d94;
    }
    else {
      local_40 = *(float *)(lVar2 + 0x228);
      local_48._0_4_ = *(float *)(lVar2 + 0x220);
      local_48._4_4_ = *(float *)(lVar2 + 0x224);
    }
    fVar5 = local_40;
    fVar7 = local_48._4_4_;
    fVar3 = (float)local_48;
    lVar2 = *(longlong *)(param_2 + 0x168);
    if (lVar2 == 0) {
      local_40 = DAT_1468b5d98;
      local_48._0_4_ = DAT_1468b5d90;
      local_48._4_4_ = DAT_1468b5d94;
    }
    else {
      local_40 = *(float *)(lVar2 + 0x228);
      local_48._0_4_ = *(float *)(lVar2 + 0x220);
      local_48._4_4_ = *(float *)(lVar2 + 0x224);
    }
    local_48._4_4_ = local_48._4_4_ - fVar7;
    local_48._0_4_ = (float)local_48 - fVar3;
    local_40 = local_40 - fVar5;
    fVar4 = local_48._4_4_ * local_48._4_4_ + (float)local_48 * (float)local_48 +
            local_40 * local_40;
    fVar3 = local_48._4_4_;
    fVar7 = (float)local_48;
    fVar5 = local_40;
    if ((fVar4 != 1.0) &&
       (fVar3 = DAT_1468b5d94, fVar7 = DAT_1468b5d90, fVar5 = DAT_1468b5d98, 1e-08 <= fVar4)) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar3 = local_48._4_4_ * fVar5;
      fVar7 = (float)local_48 * fVar5;
      fVar5 = local_40 * fVar5;
    }
    fStack_54 = (float)((ulonglong)*puVar1 >> 0x20);
    local_58 = (float)*puVar1;
    fVar3 = fStack_54 * fVar3 + local_58 * fVar7 + *(float *)(puVar1 + 1) * fVar5;
  }
  return fVar3;
}



// FUNCTION 142230f70 GetFloatParameter body=64 status=ok
// SIG undefined GetFloatParameter(void)

ulonglong FActiveSound::GetFloatParameter(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x518);
    plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x520) * 4;
    for (; plVar2 != plVar3; plVar2 = plVar2 + 4) {
      if (*plVar2 == param_2) {
        lVar1 = plVar2[1];
        *param_3 = (int)lVar1;
        return CONCAT71((uint7)(uint3)((uint)(int)lVar1 >> 8),1);
      }
    }
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 142230fb0 FUN_142230fb0 body=777 status=ok
// SIG undefined FUN_142230fb0(void)

longlong FUN_142230fb0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((*(uint *)(param_2 + 0x88) & 0x2000) != 0) {
    return 2;
  }
  if (DAT_1468b6147 != '\0') {
    return 2;
  }
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if (lVar6 == 0) {
    return 2;
  }
  lVar6 = 0;
  if ((2 < *(byte *)(param_1 + 0x25)) || (lVar9 = lVar6, (*(uint *)(param_2 + 0x88) >> 2 & 1) == 0))
  {
    lVar9 = 2;
  }
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  if (iVar5 < (int)DAT_1469e91c4) {
    uVar8 = iVar5 >> 0x1f & 0xffff;
    uVar4 = iVar5 + uVar8;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
  }
  if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0) {
    return lVar9;
  }
  if ((*(uint *)(param_2 + 0x88) >> 8 & 1) != 0) {
    return 1;
  }
  if ((*(uint *)(param_2 + 0x88) >> 0xc & 1) == 0) {
    iVar5 = FUN_142235230(param_1);
    if (iVar5 == 0) {
      if ((2 < *(byte *)(param_1 + 0x25)) || ((*(uint *)(param_2 + 0x88) & 0x200000) == 0)) {
        if (*(char *)((longlong)param_1 + 0x95) == '\0') {
          return 2;
        }
        if ((*(uint *)(param_2 + 0x88) & 0x1000000) == 0) {
          return 2;
        }
        lVar6 = (**(code **)(*param_1 + 0x4a0))(param_1);
        if (lVar6 == 0) {
          return 2;
        }
        lVar9 = FUN_1429c30a0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          return 2;
        }
        return 0;
      }
    }
    else if ((iVar5 != 1) || ((*(uint *)(param_2 + 0x88) >> 3 & 1) == 0)) {
      if ((~(byte)(*(uint *)(param_2 + 0x88) >> 6) & 1) == 0) {
        bVar1 = 1 < iVar5 - 1U;
        lVar6 = *(longlong *)(param_2 + 0x30);
        while (lVar7 = lVar6, lVar7 != 0) {
          param_2 = lVar7;
          lVar6 = *(longlong *)(lVar7 + 0x30);
        }
        uVar4 = *(uint *)(param_2 + 0x88);
        if ((uVar4 >> 0xe & 1) == 0) {
          if (bVar1) {
            bVar2 = (byte)(uVar4 >> 0x15);
          }
          else {
            bVar2 = (byte)(uVar4 >> 0x18);
          }
          if ((~bVar2 & 1) == 0) {
            if ((char)param_1[0x25] == '\x03') {
              lVar6 = (**(code **)(*param_1 + 0x4a8))(param_1);
              if (lVar6 == 0) {
                lVar6 = (**(code **)(*param_1 + 0x4a0))(param_1);
                if (lVar6 == 0) {
                  cVar3 = (**(code **)(*param_1 + 0x290))(param_1);
                  if (cVar3 == '\0') {
                    return lVar9;
                  }
                  return 0;
                }
                lVar7 = ULocalPlayer::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  return lVar9;
                }
              }
              else {
                if (*(longlong *)(lVar6 + 0x58) == 0) {
                  return 0;
                }
                if (*(longlong *)(*(longlong *)(lVar6 + 0x58) + 0xd0) == 0) {
                  return 0;
                }
              }
            }
            if (*(char *)((longlong)param_1 + 0x95) == '\0') {
              return 0;
            }
            return 1;
          }
        }
        else if (!bVar1) {
          if (*(char *)((longlong)param_1 + 0x95) == '\0') {
            return 2;
          }
          return 3;
        }
      }
      return lVar9;
    }
  }
  else if (*(short *)(param_2 + 0x92) != 0) {
    return 2;
  }
  return 0;
}



// FUNCTION 1422312c0 FUN_1422312c0 body=54 status=ok
// SIG undefined FUN_1422312c0(void)

undefined8 FUN_1422312c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    return *(undefined8 *)(lVar1 + 400);
  }
  return 0;
}



// FUNCTION 142231300 FUN_142231300 body=54 status=ok
// SIG undefined FUN_142231300(void)

float FUN_142231300(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    return *(float *)(lVar1 + 0x790) - *(float *)((longlong)param_1 + 0xd4);
  }
  return 0.0;
}



// FUNCTION 142231340 FUN_142231340 body=214 status=ok
// SIG undefined FUN_142231340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_142231340(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x168) == 0) {
      local_28 = _DAT_1468b5d90;
    }
    else {
      local_28 = *(undefined8 *)(*(longlong *)(param_2 + 0x168) + 0x220);
    }
    uVar1 = local_28;
    if (*(longlong *)(param_1 + 0x168) == 0) {
      local_28 = _DAT_1468b5d90;
    }
    else {
      local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x220);
    }
    uStack_18 = (float)((ulonglong)uVar1 >> 0x20);
    local_1c = (float)uVar1;
    local_1c = (float)local_28 - local_1c;
    return SQRT((local_28._4_4_ - uStack_18) * (local_28._4_4_ - uStack_18) + local_1c * local_1c);
  }
  return 0.0;
}



// FUNCTION 142231420 FUN_142231420 body=560 status=ok
// SIG undefined FUN_142231420(void)

float FUN_142231420(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined8 *puVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float local_48;
  float fStack_44;
  undefined8 local_38;
  float local_30;
  
  if (param_2 == 0) {
    return -2.0;
  }
  if (*(longlong *)(param_1 + 0x168) == 0) {
    local_30 = (float)DAT_1464aa7b0;
    puVar2 = &local_38;
    local_38 = DAT_1464aa7a8;
    lVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_142369f10(*(longlong *)(param_1 + 0x168),&local_38);
    lVar3 = *(longlong *)(param_1 + 0x168);
  }
  if (lVar3 == 0) {
    local_30 = DAT_1468b5d98;
    local_38._0_4_ = DAT_1468b5d90;
    local_38._4_4_ = DAT_1468b5d94;
  }
  else {
    local_30 = *(float *)(lVar3 + 0x228);
    local_38._0_4_ = *(float *)(lVar3 + 0x220);
    local_38._4_4_ = *(float *)(lVar3 + 0x224);
  }
  fVar1 = local_30;
  fVar5 = local_38._4_4_;
  fVar4 = (float)local_38;
  lVar3 = *(longlong *)(param_2 + 0x168);
  if (lVar3 == 0) {
    local_30 = DAT_1468b5d98;
    local_38._0_4_ = DAT_1468b5d90;
    local_38._4_4_ = DAT_1468b5d94;
  }
  else {
    local_30 = *(float *)(lVar3 + 0x228);
    local_38._0_4_ = *(float *)(lVar3 + 0x220);
    local_38._4_4_ = *(float *)(lVar3 + 0x224);
  }
  local_38._4_4_ = local_38._4_4_ - fVar5;
  local_38._0_4_ = (float)local_38 - fVar4;
  fVar4 = local_38._4_4_ * local_38._4_4_ + (float)local_38 * (float)local_38;
  if (fVar4 == 1.0) {
    fVar5 = local_30 - fVar1;
    fVar7 = local_38._4_4_;
    fVar8 = (float)local_38;
    if (local_30 - fVar1 == 0.0) goto LAB_1422315f7;
  }
  else {
    fVar5 = DAT_1468b5d98;
    fVar7 = DAT_1468b5d94;
    fVar8 = DAT_1468b5d90;
    if (fVar4 < 1e-08) goto LAB_1422315f7;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    local_38._0_4_ = (float)local_38 * fVar5;
    local_38._4_4_ = local_38._4_4_ * fVar5;
  }
  fVar5 = 0.0;
  fVar7 = local_38._4_4_;
  fVar8 = (float)local_38;
LAB_1422315f7:
  fStack_44 = (float)((ulonglong)*puVar2 >> 0x20);
  local_48 = (float)*puVar2;
  return fStack_44 * fVar7 + local_48 * fVar8 + *(float *)(puVar2 + 1) * fVar5;
}



// FUNCTION 142231650 FUN_142231650 body=180 status=ok
// SIG undefined FUN_142231650(void)

undefined8 FUN_142231650(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  uVar6 = 0;
  lVar5 = *(longlong *)(param_1 + 0x130);
  if (lVar5 != 0) {
    local_38 = *param_2;
    local_30 = param_2[1];
    local_28 = param_2[2];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      lVar5 = *(longlong *)(param_1 + 0x130);
    }
    uVar6 = FUN_1423692d0(lVar5,&local_38);
  }
  plVar4 = (longlong *)param_2[2];
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 142231710 FUN_142231710 body=90 status=ok
// SIG undefined FUN_142231710(void)

undefined4 FUN_142231710(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x130);
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (((int)param_2 != 0) || ((int)((ulonglong)param_2 >> 0x20) != 0)) {
    lVar1 = *(longlong *)(lVar2 + 0x198);
    lVar2 = (longlong)*(int *)(lVar2 + 0x1a0) * 0x38 + lVar1;
    if (lVar1 != lVar2) {
      while (*(longlong *)(lVar1 + 8) != param_2) {
        lVar1 = lVar1 + 0x38;
        if (lVar1 == lVar2) {
          return 0;
        }
      }
      uVar3 = *(undefined4 *)(lVar1 + 0x30);
    }
  }
  return uVar3;
}



// FUNCTION 142231730 FUN_142231730 body=195 status=ok
// SIG undefined FUN_142231730(void)

undefined8 * FUN_142231730(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  lVar7 = *(longlong *)(param_1 + 0x130);
  if (lVar7 != 0) {
    local_28 = *param_3;
    local_20 = param_3[1];
    local_18 = param_3[2];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
      lVar7 = *(longlong *)(param_1 + 0x130);
    }
    puVar6 = (undefined8 *)FUN_142370590(lVar7,local_38,&local_28);
    uVar4 = *(undefined4 *)(puVar6 + 1);
    *param_2 = *puVar6;
    *(undefined4 *)(param_2 + 1) = uVar4;
  }
  plVar5 = (longlong *)param_3[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 142231800 FUN_142231800 body=37 status=ok
// SIG undefined FUN_142231800(void)

longlong FUN_142231800(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x150);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[0x92];
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014223181b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(*plVar1 + 0x668))();
      return lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 142231830 GetIntParameter body=64 status=ok
// SIG undefined GetIntParameter(void)

ulonglong FActiveSound::GetIntParameter(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x518);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x520) * 4;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 4) {
      if (*plVar1 == param_2) {
        *param_3 = (int)plVar1[2];
        return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      }
    }
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}



// FUNCTION 142231870 FUN_142231870 body=199 status=ok
// SIG undefined FUN_142231870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_142231870(longlong *param_1,undefined4 *param_2,float param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (((*(byte *)(param_1 + 0x80) & 4) != 0) && (0.0 < param_3)) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x970);
    }
    if (lVar1 != 0) {
      FUN_1424a1870(lVar1,param_2,param_3,param_1);
      return param_2;
    }
  }
  lVar1 = param_1[0x2d];
  if (lVar1 == 0) {
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar2 = _DAT_146aee960 & _DAT_146aee970;
    uVar3 = uRam0000000146aee964 & uRam0000000146aee974;
    uVar4 = uRam0000000146aee968 & uRam0000000146aee978;
    uVar5 = uRam0000000146aee96c & uRam0000000146aee97c;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = uRam0000000146aee96c;
  }
  else {
    uVar6 = *(undefined4 *)(lVar1 + 0x210);
    uVar7 = *(undefined4 *)(lVar1 + 0x214);
    uVar8 = *(undefined4 *)(lVar1 + 0x218);
    uVar10 = *(undefined4 *)(lVar1 + 0x220);
    uVar11 = *(undefined4 *)(lVar1 + 0x224);
    uVar12 = *(undefined4 *)(lVar1 + 0x228);
    uVar13 = *(undefined4 *)(lVar1 + 0x22c);
    uVar2 = *(uint *)(lVar1 + 0x230);
    uVar3 = *(uint *)(lVar1 + 0x234);
    uVar4 = *(uint *)(lVar1 + 0x238);
    uVar5 = *(uint *)(lVar1 + 0x23c);
    uVar9 = *(uint *)(lVar1 + 0x21c);
  }
  *param_2 = uVar6;
  param_2[1] = uVar7;
  param_2[2] = uVar8;
  param_2[3] = uVar9;
  param_2[4] = uVar10;
  param_2[5] = uVar11;
  param_2[6] = uVar12;
  param_2[7] = uVar13;
  param_2[8] = uVar2;
  param_2[9] = uVar3;
  param_2[10] = uVar4;
  param_2[0xb] = uVar5;
  return param_2;
}



// FUNCTION 142231970 FUN_142231970 body=648 status=ok
// SIG undefined FUN_142231970(void)

float FUN_142231970(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  float fVar12;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  fVar12 = -1000.0;
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar5) goto LAB_142231a4d;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_94 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar7 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (iStack_80 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_142231a4d:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142231b25;
      uVar8 = puVar11[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = uVar8 - 1 & uVar8 ^ uVar8;
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
    uStack_84 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_142231b25:
      uStack_84 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) break;
    lVar9 = *(longlong *)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
    if (lVar9 != 0) {
      lVar6 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (((bVar5) && ((*(byte *)(lVar9 + 0xb8) & 1) != 0)) && (fVar12 < *(float *)(lVar9 + 0x36c)))
      {
        fVar12 = *(float *)(lVar9 + 0x36c);
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return fVar12;
}



// FUNCTION 142231c00 GetLevel body=30 status=ok
// SIG undefined GetLevel(void)

void AActor::GetLevel(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1429a0270();
  UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
  return;
}



// FUNCTION 142231c20 FUN_142231c20 body=112 status=ok
// SIG undefined FUN_142231c20(void)

undefined8 FUN_142231c20(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_res8;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(lVar1 + 400) == 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
  }
  local_res8 = param_1[0x30];
  uVar2 = FTimerManager::FindTimer(uVar3,&local_res8,0);
  uVar3 = FTimerManager::InternalGetTimerRemaining(uVar3,uVar2);
  if ((float)uVar3 == -1.0) {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 142231c90 FUN_142231c90 body=2049 status=ok
// SIG undefined FUN_142231c90(void)

void FUN_142231c90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 local_res8 [8];
  short local_28 [2];
  undefined8 local_24;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x370))(plVar1,param_2);
    }
  }
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar8 < DAT_146aeeb08) && (_Init_thread_header(&DAT_146aeeb08), DAT_146aeeb08 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"bReplicateMovement",1);
    DAT_146aeeb00 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeeb08);
  }
  iVar7 = 0;
  iVar6 = iVar7;
  if (0 < *(int *)(DAT_146aeeb00 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aeeb00 + 0x40) + (short)iVar6;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_146aeeb00 + 0x30));
  }
  if ((*piVar8 < DAT_146aeeb18) && (_Init_thread_header(&DAT_146aeeb18), DAT_146aeeb18 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"Role",1);
    DAT_146aeeb10 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeeb18);
  }
  iVar6 = iVar7;
  if (0 < *(int *)(DAT_146aeeb10 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aeeb10 + 0x40) + (short)iVar6;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_146aeeb10 + 0x30));
  }
  if ((*piVar8 < DAT_146aeeb28) && (_Init_thread_header(&DAT_146aeeb28), DAT_146aeeb28 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"RemoteRole",1);
    DAT_146aeeb20 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeeb28);
  }
  iVar6 = iVar7;
  if (0 < *(int *)(DAT_146aeeb20 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aeeb20 + 0x40) + (short)iVar6;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_146aeeb20 + 0x30));
  }
  if ((*piVar8 < DAT_146aeeb38) && (_Init_thread_header(&DAT_146aeeb38), DAT_146aeeb38 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"Owner",1);
    DAT_146aeeb30 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeeb38);
  }
  iVar6 = iVar7;
  if (0 < *(int *)(DAT_146aeeb30 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aeeb30 + 0x40) + (short)iVar6;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_146aeeb30 + 0x30));
  }
  if ((*piVar8 < DAT_146aeeb48) && (_Init_thread_header(&DAT_146aeeb48), DAT_146aeeb48 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"bHidden",1);
    DAT_146aeeb40 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeeb48);
  }
  iVar6 = iVar7;
  if (0 < *(int *)(DAT_146aeeb40 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aeeb40 + 0x40) + (short)iVar6;
      local_24 = 8;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_146aeeb40 + 0x30));
  }
  if ((*piVar8 < DAT_146aeeb58) && (_Init_thread_header(&DAT_146aeeb58), DAT_146aeeb58 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"bTearOff",1);
    DAT_146aeeb50 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeeb58);
  }
  iVar6 = iVar7;
  if (0 < *(int *)(DAT_146aeeb50 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aeeb50 + 0x40) + (short)iVar6;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_146aeeb50 + 0x30));
  }
  if ((*piVar8 < DAT_146aeeb68) && (_Init_thread_header(&DAT_146aeeb68), DAT_146aeeb68 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"bCanBeDamaged",1);
    DAT_146aeeb60 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeeb68);
  }
  iVar6 = iVar7;
  if (0 < *(int *)(DAT_146aeeb60 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aeeb60 + 0x40) + (short)iVar6;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_146aeeb60 + 0x30));
  }
  if ((*piVar8 < DAT_146aeeb78) && (_Init_thread_header(&DAT_146aeeb78), DAT_146aeeb78 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"AttachmentReplication",1);
    DAT_146aeeb70 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeeb78);
  }
  iVar6 = iVar7;
  if (0 < *(int *)(DAT_146aeeb70 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aeeb70 + 0x40) + (short)iVar6;
      local_24 = 0x100000008;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_146aeeb70 + 0x30));
  }
  if ((*piVar8 < DAT_146aeeb88) && (_Init_thread_header(&DAT_146aeeb88), DAT_146aeeb88 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"Instigator",1);
    DAT_146aeeb80 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeeb88);
  }
  iVar6 = iVar7;
  if (0 < *(int *)(DAT_146aeeb80 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aeeb80 + 0x40) + (short)iVar6;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_146aeeb80 + 0x30));
  }
  if ((*piVar8 < DAT_146aeeb98) && (_Init_thread_header(&DAT_146aeeb98), DAT_146aeeb98 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"ReplicatedMovement",1);
    DAT_146aeeb90 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeeb98);
  }
  iVar6 = iVar7;
  if (0 < *(int *)(DAT_146aeeb90 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aeeb90 + 0x40) + (short)iVar6;
      local_24 = 0x100000006;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(DAT_146aeeb90 + 0x30));
  }
  if ((*piVar8 < DAT_146aeeba8) && (_Init_thread_header(&DAT_146aeeba8), DAT_146aeeba8 == -1)) {
    uVar4 = FUN_1428dfc70();
    FUN_1428dfc70();
    puVar5 = (undefined8 *)FName::FName(local_res8,L"bHiddenOnSpawn",1);
    DAT_146aeeba0 = FUN_1405dfb00(uVar4,*puVar5);
    _Init_thread_footer(&DAT_146aeeba8);
  }
  if (0 < *(int *)(DAT_146aeeba0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aeeba0 + 0x40) + (short)iVar7;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(DAT_146aeeba0 + 0x30));
  }
  return;
}



// FUNCTION 1422324a0 FUN_1422324a0 body=190 status=ok
// SIG undefined FUN_1422324a0(void)

undefined8 * FUN_1422324a0(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = param_1[0x1f];
    if (lVar1 == 0) {
      (**(code **)(*param_1 + 0x368))();
      lVar1 = param_1[0x1f];
      if (lVar1 == 0) goto LAB_1422324ea;
    }
    UNavLinkDefinition::InitializeAreaClass(lVar1);
    return (undefined8 *)(lVar1 + 0x28);
  }
LAB_1422324ea:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeebc0) {
    _Init_thread_header(&DAT_146aeebc0);
    if (DAT_146aeebc0 == -1) {
      atexit((_func_5014 *)&LAB_143ea7f10);
      _Init_thread_footer(&DAT_146aeebc0);
      return &DAT_146aeebb0;
    }
  }
  return &DAT_146aeebb0;
}



// FUNCTION 142232560 GetNavigationModifier body=83 status=ok
// SIG undefined GetNavigationModifier(void)

void UNavCollisionBase::GetNavigationModifier(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavCollisionBase.h"
             ,0x39,L"Pure virtual not implemented (%s)",L"UNavCollisionBase::GetNavigationModifier")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\AI/Navigation/NavCollisionBase.h"
             ,0x39,L"Pure virtual not implemented (%s)",L"UNavCollisionBase::GetNavigationModifier")
  ;
  return;
}



// FUNCTION 1422325c0 FUN_1422325c0 body=25 status=ok
// SIG undefined FUN_1422325c0(void)

undefined8 FUN_1422325c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001422325cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x4a8))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1422325e0 FUN_1422325e0 body=81 status=ok
// SIG undefined FUN_1422325e0(void)

undefined8 FUN_1422325e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[0x24];
  lVar2 = (**(code **)(*param_1 + 0x148))();
  uVar3 = 0;
  if (lVar1 == 0x11a) {
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x38);
    }
    return uVar3;
  }
  uVar3 = FUN_142873bb0(DAT_146b17150,lVar2,lVar1);
  return uVar3;
}



// FUNCTION 142232640 FUN_142232640 body=34 status=ok
// SIG undefined FUN_142232640(void)

undefined8 FUN_142232640(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x000142232658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x4a0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 142232670 FUN_142232670 body=352 status=ok
// SIG undefined FUN_142232670(void)

ulonglong FUN_142232670(longlong param_1,float *param_2,float *param_3,undefined8 param_4,
                       longlong param_5,undefined8 param_6,float param_7)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (((*(byte *)(param_1 + 0x91) & 1) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142232694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*plVar1 + 0x3d0))(plVar1);
    return uVar5;
  }
  if ((param_5 != 0) && ((param_1 == param_5 || (*(longlong *)(param_1 + 0x150) == param_5)))) {
    return (ulonglong)(uint)(param_7 * 4.0 * *(float *)(param_1 + 0x148));
  }
  if (((*(byte *)(param_1 + 0x80) & 1) == 0) && (lVar2 = *(longlong *)(param_1 + 0x168), lVar2 != 0)
     ) {
    fVar6 = *(float *)(lVar2 + 0x220) - *param_2;
    fVar9 = *(float *)(lVar2 + 0x224) - param_2[1];
    fVar7 = *(float *)(lVar2 + 0x228) - param_2[2];
    fVar8 = fVar9 * fVar9 + fVar6 * fVar6 + fVar7 * fVar7;
    fVar6 = fVar9 * param_3[1] + fVar6 * *param_3 + fVar7 * param_3[2];
    if (0.0 <= fVar6) {
      if ((fVar8 < 6.4e+07) && (fVar8 * 0.5 < fVar6 * fVar6)) {
        return (ulonglong)(uint)((param_7 + param_7) * *(float *)(param_1 + 0x148));
      }
      bVar4 = fVar8 == 9998244.0;
      bVar3 = fVar8 < 9998244.0;
    }
    else {
      if (4e+06 < fVar8) {
        return (ulonglong)(uint)(param_7 * 0.2 * *(float *)(param_1 + 0x148));
      }
      bVar4 = fVar8 == 250000.0;
      bVar3 = fVar8 < 250000.0;
    }
    if (!bVar3 && !bVar4) {
      return (ulonglong)(uint)(param_7 * 0.4 * *(float *)(param_1 + 0x148));
    }
  }
  return (ulonglong)(uint)(param_7 * *(float *)(param_1 + 0x148));
}



// FUNCTION 1422327d0 GetNewAvoidanceUID body=118 status=ok
// SIG undefined GetNewAvoidanceUID(void)

int UAvoidanceManager::GetNewAvoidanceUID(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c);
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    iVar6 = iVar1 + -1;
    iVar3 = *(int *)(lVar2 + (longlong)iVar6 * 4);
    iVar4 = *(int *)(param_1 + 0xb0);
    iVar5 = (iVar4 - iVar6) + -1;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar2 + (longlong)iVar6 * 4),(void *)(lVar2 + (longlong)iVar1 * 4),
                 (longlong)iVar5 << 2);
      iVar4 = *(int *)(param_1 + 0xb0);
    }
    *(int *)(param_1 + 0xb0) = iVar4 + -1;
  }
  return iVar3;
}



// FUNCTION 142232850 FUN_142232850 body=16 status=ok
// SIG undefined FUN_142232850(void)

void FUN_142232850(longlong param_1)

{
  *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 1;
  return;
}



// FUNCTION 142232860 GetObjectCount body=10 status=ok
// SIG undefined GetObjectCount(void)

int UAvoidanceManager::GetObjectCount(longlong param_1)

{
  return *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c);
}



// FUNCTION 142232870 GetOverlappingActors body=606 status=ok
// SIG undefined GetOverlappingActors(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AActor::GetOverlappingActors(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined1 auStack_118 [32];
  int local_f8;
  uint uStack_f4;
  uint *puStack_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  int iStack_d0;
  uint uStack_cc;
  uint *local_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  uint *puStack_a0;
  uint uStack_98;
  int iStack_94;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_88 = 0;
  local_80 = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_58 = 0xffffffff;
  GetOverlappingActors(param_1,&local_88);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < (int)local_80 - local_54) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  iVar3 = (int)local_60;
  puStack_f0 = local_78;
  local_f8 = 0;
  uStack_f4 = 1;
  iStack_e4 = 0;
  iStack_e0 = 0;
  if ((int)local_60 != 0) {
    puVar5 = local_78;
    if (local_68 != (uint *)0x0) {
      puVar5 = local_68;
    }
    uVar1 = *puVar5;
    iStack_e0 = 0;
    local_f8 = 0;
    while (uVar1 == 0) {
      iStack_e0 = iStack_e0 + 0x20;
      if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_f8) {
        iStack_e4 = (int)local_60;
        local_f8 = local_f8 + 1;
        goto LAB_1422329aa;
      }
      uVar1 = puVar5[(longlong)local_f8 + 1];
      local_f8 = local_f8 + 1;
    }
    uStack_f4 = -uVar1 & uVar1;
    iVar4 = 0x1f;
    if (uStack_f4 != 0) {
      for (; uStack_f4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_f4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iStack_e4 = (iStack_e0 - iVar4) + 0x1f;
    if ((int)local_60 < iStack_e4) {
      iStack_e4 = (int)local_60;
    }
  }
LAB_1422329aa:
  uStack_c0 = 0xffffffff;
  iStack_bc = iStack_e4;
  local_b8 = CONCAT44(uStack_dc,iStack_e0);
  local_b0 = &local_88;
  uStack_a8 = CONCAT44(uStack_f4,local_f8);
  local_e8 = -1 << ((byte)local_60 & 0x1f);
  iStack_e4 = (int)local_60;
  iStack_d0 = local_f8;
  uStack_cc = uStack_f4;
  local_c8 = puStack_f0;
  puStack_a0 = puStack_f0;
  uStack_90 = local_b8;
  local_d8 = local_b0;
  uStack_98 = uStack_c0;
  iStack_94 = iStack_bc;
  while (((iStack_bc != iVar3 || (local_c8 != local_78)) || (local_d8 != &local_88))) {
    iVar4 = (int)param_2[1];
    uVar2 = *(undefined8 *)(*local_d8 + (longlong)iStack_bc * 0x10);
    *(int *)(param_2 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = uVar2;
    uStack_c0 = uStack_c0 & ~uStack_cc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
}



// FUNCTION 142232ad0 GetOverlappingActors body=1337 status=ok
// SIG undefined GetOverlappingActors(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AActor::GetOverlappingActors(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  void *_Dst;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 auStack_158 [32];
  uint local_138;
  uint uStack_134;
  uint *puStack_130;
  int local_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined8 uStack_110;
  uint *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [8];
  longlong local_e8;
  longlong *local_e0;
  uint uStack_d8;
  uint uStack_d4;
  uint *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong local_88;
  undefined8 local_80;
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar8 = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x34) = 0;
  iVar4 = *(int *)(param_2 + 0x28) + 0x1f;
  _Dst = *(void **)(param_2 + 0x20);
  if (*(void **)(param_2 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_2 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_2 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_2 + 0x48)) {
    uVar12 = (ulonglong)*(uint *)(param_2 + 0x48);
    uVar10 = uVar8;
    do {
      lVar7 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar7 = param_2 + 0x38;
      }
      uVar5 = (longlong)*(int *)(param_2 + 0x48) - 1U & uVar10;
      uVar10 = uVar10 + 1;
      *(undefined4 *)(lVar7 + uVar5 * 4) = 0xffffffff;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  local_118 = (longlong *)(param_1 + 0x2b0);
  local_88 = 0;
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_80 = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar2 = *(uint *)(param_1 + 0x2d8);
  local_138 = 0;
  uStack_134 = 1;
  uStack_124 = 0;
  uStack_120 = 0;
  if (uVar2 != 0) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar14 = *puVar13;
    uVar10 = uVar8;
    while (uVar14 == 0) {
      iVar4 = (int)uVar8;
      uStack_120 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uStack_120;
      local_138 = iVar4 + 1;
      uVar8 = (ulonglong)local_138;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_142232c85;
      uVar14 = puVar13[(longlong)iVar4 + 1];
    }
    uStack_134 = uVar14 - 1 & uVar14 ^ uVar14;
    iVar4 = 0x1f;
    if (uStack_134 != 0) {
      for (; uStack_134 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_134 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_124 = (uStack_120 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)uStack_124) {
LAB_142232c85:
      uStack_124 = uVar2;
    }
  }
  local_128 = -1;
  uVar14 = *(uint *)(param_1 + 0x2d8);
  uStack_110 = CONCAT44(uStack_134,local_138);
  uStack_100 = CONCAT44(uStack_124,0xffffffff);
  uStack_f8 = CONCAT44(uStack_11c,uStack_120);
  uVar11 = uVar14 & 0xffffffe0;
  uStack_d8 = local_138;
  uStack_d4 = uStack_134;
  puStack_130 = puVar1;
  puStack_108 = puVar1;
  local_d0 = puVar1;
  uStack_c8 = uStack_100;
  local_c0 = uStack_f8;
  local_e0 = local_118;
  if (uVar14 != uVar2) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar9 = puVar13[(int)uVar14 >> 5] & -1 << ((byte)uVar14 & 0x1f);
    iVar4 = (int)uVar14 >> 5;
    while (uVar9 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_142232d60;
      uVar9 = puVar13[(longlong)iVar4 + 1];
      iVar4 = iVar4 + 1;
    }
    uVar9 = uVar9 - 1 & uVar9 ^ uVar9;
    iVar4 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uVar14 = (uVar11 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)uVar14) {
LAB_142232d60:
      uVar14 = uVar2;
    }
  }
  do {
    if ((uStack_c8._4_4_ == uVar14) && (local_d0 == puVar1)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_e0 == (longlong *)(param_1 + 0x2b0))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
      return;
    }
    lVar7 = *(longlong *)(*local_e0 + (longlong)(int)uStack_c8._4_4_ * 0x10);
    if (lVar7 != 0) {
      lVar6 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_14238c610(lVar7,&local_88,param_3);
        iVar4 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
        if (iVar4 < ((int)local_80 - local_54) + iVar4) {
          FUN_1405effc0(param_2);
        }
        uVar2 = (uint)local_60;
        puStack_130 = local_78;
        uStack_134 = 1;
        local_138 = 0;
        uStack_124 = 0;
        uStack_120 = 0;
        if ((uint)local_60 != 0) {
          puVar13 = local_78;
          if (local_68 != (uint *)0x0) {
            puVar13 = local_68;
          }
          uVar11 = *puVar13;
          uStack_120 = 0;
          local_138 = 0;
          while (uVar11 == 0) {
            uStack_120 = uStack_120 + 0x20;
            if ((int)(((uint)local_60 - 1) + ((int)((uint)local_60 - 1) >> 0x1f & 0x1fU)) >> 5 <=
                (int)local_138) {
              uStack_124 = (uint)local_60;
              local_138 = local_138 + 1;
              goto LAB_142232edd;
            }
            uVar11 = puVar13[(longlong)(int)local_138 + 1];
            local_138 = local_138 + 1;
          }
          uStack_134 = -uVar11 & uVar11;
          iVar4 = 0x1f;
          if (uStack_134 != 0) {
            for (; uStack_134 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          if (uStack_134 == 0) {
            iVar4 = 0x20;
          }
          else {
            iVar4 = 0x1f - iVar4;
          }
          uStack_124 = (uStack_120 - iVar4) + 0x1f;
          if ((int)(uint)local_60 < (int)uStack_124) {
            uStack_124 = (uint)local_60;
          }
        }
LAB_142232edd:
        uStack_100 = CONCAT44(uStack_124,0xffffffff);
        uStack_f8 = CONCAT44(uStack_11c,uStack_120);
        local_118 = &local_88;
        uStack_b0 = CONCAT44(uStack_134,local_138);
        uStack_124 = (uint)local_60;
        local_128 = -1 << ((byte)local_60 & 0x1f);
        uStack_110 = CONCAT44(uStack_134,local_138);
        puStack_108 = puStack_130;
        local_b8 = local_118;
        puStack_a8 = puStack_130;
        uStack_a0 = uStack_100;
        uStack_98 = uStack_f8;
        while( true ) {
          if ((uStack_100._4_4_ == uVar2) && (puStack_108 == local_78)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if ((bVar3) && (local_118 == &local_88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) break;
          local_e8 = *(longlong *)(*local_118 + (longlong)(int)uStack_100._4_4_ * 0x10);
          if (local_e8 != param_1) {
            FUN_14058c900(param_2,local_f0,&local_e8,0);
          }
          uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_100 & ~uStack_110._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_110);
        }
      }
    }
    uStack_c8 = CONCAT44(uStack_c8._4_4_,(uint)uStack_c8 & ~uStack_d4);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d8);
  } while( true );
}



// FUNCTION 142233010 GetOverlappingComponents body=606 status=ok
// SIG undefined GetOverlappingComponents(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AActor::GetOverlappingComponents(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined1 auStack_118 [32];
  int local_f8;
  uint uStack_f4;
  uint *puStack_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  int iStack_d0;
  uint uStack_cc;
  uint *local_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 uStack_a8;
  uint *puStack_a0;
  uint uStack_98;
  int iStack_94;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_88 = 0;
  local_80 = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_58 = 0xffffffff;
  GetOverlappingComponents(param_1,&local_88);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < (int)local_80 - local_54) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  iVar3 = (int)local_60;
  puStack_f0 = local_78;
  local_f8 = 0;
  uStack_f4 = 1;
  iStack_e4 = 0;
  iStack_e0 = 0;
  if ((int)local_60 != 0) {
    puVar5 = local_78;
    if (local_68 != (uint *)0x0) {
      puVar5 = local_68;
    }
    uVar1 = *puVar5;
    iStack_e0 = 0;
    local_f8 = 0;
    while (uVar1 == 0) {
      iStack_e0 = iStack_e0 + 0x20;
      if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_f8) {
        iStack_e4 = (int)local_60;
        local_f8 = local_f8 + 1;
        goto LAB_14223314a;
      }
      uVar1 = puVar5[(longlong)local_f8 + 1];
      local_f8 = local_f8 + 1;
    }
    uStack_f4 = -uVar1 & uVar1;
    iVar4 = 0x1f;
    if (uStack_f4 != 0) {
      for (; uStack_f4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_f4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iStack_e4 = (iStack_e0 - iVar4) + 0x1f;
    if ((int)local_60 < iStack_e4) {
      iStack_e4 = (int)local_60;
    }
  }
LAB_14223314a:
  uStack_c0 = 0xffffffff;
  iStack_bc = iStack_e4;
  local_b8 = CONCAT44(uStack_dc,iStack_e0);
  local_b0 = &local_88;
  uStack_a8 = CONCAT44(uStack_f4,local_f8);
  local_e8 = -1 << ((byte)local_60 & 0x1f);
  iStack_e4 = (int)local_60;
  iStack_d0 = local_f8;
  uStack_cc = uStack_f4;
  local_c8 = puStack_f0;
  puStack_a0 = puStack_f0;
  uStack_90 = local_b8;
  local_d8 = local_b0;
  uStack_98 = uStack_c0;
  iStack_94 = iStack_bc;
  while (((iStack_bc != iVar3 || (local_c8 != local_78)) || (local_d8 != &local_88))) {
    iVar4 = (int)param_2[1];
    uVar2 = *(undefined8 *)(*local_d8 + (longlong)iStack_bc * 0x10);
    *(int *)(param_2 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = uVar2;
    uStack_c0 = uStack_c0 & ~uStack_cc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
}



// FUNCTION 142233270 GetOverlappingComponents body=890 status=ok
// SIG undefined GetOverlappingComponents(void)

void AActor::GetOverlappingComponents(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Dst;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar7 = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x34) = 0;
  iVar4 = *(int *)(param_2 + 0x28) + 0x1f;
  _Dst = *(void **)(param_2 + 0x20);
  if (*(void **)(param_2 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_2 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_2 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_2 + 0x48)) {
    uVar14 = (ulonglong)*(uint *)(param_2 + 0x48);
    uVar11 = uVar7;
    do {
      uVar9 = (longlong)*(int *)(param_2 + 0x48) - 1U & uVar11;
      lVar5 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar5 = param_2 + 0x38;
      }
      uVar11 = uVar11 + 1;
      *(undefined4 *)(lVar5 + uVar9 * 4) = 0xffffffff;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  local_res10 = (longlong *)(param_1 + 0x2b0);
  local_98 = (undefined8 *)0x0;
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_90 = 0;
  uVar2 = *(uint *)(param_1 + 0x2d8);
  local_88._0_4_ = 0;
  local_88._4_4_ = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (uVar2 != 0) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar15 = *puVar13;
    uVar11 = uVar7;
    while (uVar15 == 0) {
      iVar4 = (int)uVar7;
      uStack_70 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uStack_70;
      local_88._0_4_ = iVar4 + 1;
      uVar7 = (ulonglong)(uint)local_88;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1422333ea;
      uVar15 = puVar13[(longlong)iVar4 + 1];
    }
    local_88._4_4_ = uVar15 - 1 & uVar15 ^ uVar15;
    iVar4 = 0x1f;
    if (local_88._4_4_ != 0) {
      for (; local_88._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (local_88._4_4_ == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)local_78._4_4_) {
LAB_1422333ea:
      local_78._4_4_ = uVar2;
    }
  }
  uVar15 = *(uint *)(param_1 + 0x2d8);
  uStack_58 = CONCAT44(local_88._4_4_,(uint)local_88);
  uStack_48 = CONCAT44(local_78._4_4_,0xffffffff);
  local_68 = CONCAT44(uStack_6c,uStack_70);
  uVar12 = uVar15 & 0xffffffe0;
  _uStack_80 = CONCAT44(local_88._4_4_,(uint)local_88);
  uStack_70 = 0xffffffff;
  uStack_6c = local_78._4_4_;
  local_60 = local_res10;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  local_88 = local_res10;
  local_78 = puVar1;
  if (uVar15 != uVar2) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar8 = puVar13[(int)uVar15 >> 5] & -1 << ((byte)uVar15 & 0x1f);
    iVar4 = (int)uVar15 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1422334ad;
      uVar8 = puVar13[(longlong)iVar4 + 1];
      iVar4 = iVar4 + 1;
    }
    uVar8 = uVar8 - 1 & uVar8 ^ uVar8;
    iVar4 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uVar15 = (uVar12 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)uVar15) {
LAB_1422334ad:
      uVar15 = uVar2;
    }
  }
  while( true ) {
    if ((uStack_6c == uVar15) && (local_78 == puVar1)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_88 == local_res10)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar5 = *(longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x10);
    if (lVar5 != 0) {
      lVar6 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_14238c7d0(lVar5,&local_98);
        iVar4 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
        if (iVar4 < (int)local_90 + iVar4) {
          FUN_1405effc0(param_2);
        }
        uVar11 = 0;
        uVar7 = (ulonglong)((longlong)(local_98 + (int)local_90) + (7 - (longlong)local_98)) >> 3;
        if (local_98 + (int)local_90 < local_98) {
          uVar7 = uVar11;
        }
        puVar10 = local_98;
        if (uVar7 != 0) {
          do {
            local_res18 = *puVar10;
            FUN_14058c900(param_2,local_res8,&local_res18,0);
            uVar11 = uVar11 + 1;
            puVar10 = puVar10 + 1;
          } while (uVar11 != uVar7);
        }
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
  }
  if (local_98 != (undefined8 *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}



// FUNCTION 1422335f0 GetOwnerName body=202 status=ok
// SIG undefined GetOwnerName(void)

longlong * FActiveSound::GetOwnerName(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong local_28 [4];
  
  bVar1 = *(int *)(param_1 + 0x28) == 0;
  if (bVar1) {
    local_28[0] = 0;
    local_28[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"None",10);
    plVar2 = local_28;
  }
  else {
    plVar2 = (longlong *)FName::ToString(param_1 + 0x38,local_28 + 2);
  }
  *param_2 = 0;
  *param_2 = *plVar2;
  *plVar2 = 0;
  *(int *)(param_2 + 1) = (int)plVar2[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  if (bVar1) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar1) && (local_28[2] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1422336c0 FUN_1422336c0 body=38 status=ok
// SIG undefined FUN_1422336c0(void)

undefined8 FUN_1422336c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x198);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x118);
  }
  return 0;
}



// FUNCTION 1422336f0 GetParentComponent body=12 status=ok
// SIG undefined GetParentComponent(void)

void AActor::GetParentComponent(longlong param_1)

{
  FWeakObjectPtr::Get(param_1 + 0x198);
  return;
}



// FUNCTION 142233820 FUN_142233820 body=209 status=ok
// SIG undefined FUN_142233820(void)

void FUN_142233820(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  plVar6 = *(longlong **)(param_1 + 0x158);
  uVar7 = (longlong)*(int *)(param_1 + 0x160) & 0x1fffffffffffffff;
  if (plVar6 + *(int *)(param_1 + 0x160) < plVar6) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        plVar3 = (longlong *)*param_3;
        iVar1 = (int)param_3[1];
        for (plVar4 = plVar3; plVar4 != plVar3 + iVar1; plVar4 = plVar4 + 1) {
          if (*plVar4 == lVar2) {
            if ((int)((longlong)plVar4 - (longlong)plVar3 >> 3) != -1) goto LAB_1422338cd;
            break;
          }
        }
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(longlong *)((longlong)iVar1 * 8 + *param_3) = lVar2;
      }
LAB_1422338cd:
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar7);
  }
  return;
}



// FUNCTION 142233900 FUN_142233900 body=190 status=ok
// SIG undefined FUN_142233900(void)

undefined8 * FUN_142233900(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = param_1[0x1f];
    if (lVar1 == 0) {
      (**(code **)(*param_1 + 0x368))();
      lVar1 = param_1[0x1f];
      if (lVar1 == 0) goto LAB_14223394a;
    }
    UNavLinkDefinition::InitializeAreaClass(lVar1);
    return (undefined8 *)(lVar1 + 0x38);
  }
LAB_14223394a:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeebd8) {
    _Init_thread_header(&DAT_146aeebd8);
    if (DAT_146aeebd8 == -1) {
      atexit((_func_5014 *)&LAB_143ea7f30);
      _Init_thread_footer(&DAT_146aeebd8);
      return &DAT_146aeebc8;
    }
  }
  return &DAT_146aeebc8;
}



// FUNCTION 1422339c0 FUN_1422339c0 body=283 status=ok
// SIG undefined FUN_1422339c0(void)

void FUN_1422339c0(longlong *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  cVar3 = (**(code **)(*param_1 + 0x580))();
  if (cVar3 != '\0') {
    lVar2 = param_1[0x2d];
    *param_2 = *(undefined8 *)(lVar2 + 0x1d0);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar2 + 0x1d8);
    lVar2 = param_1[0x2d];
    *(undefined8 *)param_3 = *(undefined8 *)(lVar2 + 0x1dc);
    param_3[2] = *(float *)(lVar2 + 0x1e4);
    return;
  }
  (**(code **)(*param_1 + 0x560))(param_1,&local_38,0);
  *(ulonglong *)param_3 = CONCAT44((local_28 - local_34) * 0.5,(local_2c - local_38) * 0.5);
  param_3[2] = (local_24 - local_30) * 0.5;
  fVar1 = param_3[2];
  *param_2 = CONCAT44(local_34 + param_3[1],local_38 + *param_3);
  *(float *)(param_2 + 1) = local_30 + fVar1;
  return;
}



// FUNCTION 142233ae0 FUN_142233ae0 body=106 status=ok
// SIG undefined FUN_142233ae0(void)

void FUN_142233ae0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x580))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142233b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0x2d] + 0x4b0))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142233b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x570))(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 142233b50 FUN_142233b50 body=138 status=ok
// SIG undefined FUN_142233b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142233b50(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  (**(code **)(*param_1 + 0x578))(param_1,param_3,param_4);
  lVar1 = param_1[0x2d];
  if (lVar1 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = local_10;
  return;
}



// FUNCTION 142233be0 FUN_142233be0 body=54 status=ok
// SIG undefined FUN_142233be0(void)

undefined4 FUN_142233be0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0xc);
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  if ((*(longlong *)(lVar1 + 0x38) != 0) && ((*(byte *)(lVar1 + 0x30) & 2) == 0)) {
    return *(undefined4 *)(*(longlong *)(lVar1 + 0x38) + 0xc);
  }
  return 0;
}



// FUNCTION 142233c00 FUN_142233c00 body=30 status=ok
// SIG undefined FUN_142233c00(void)

longlong FUN_142233c00(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    return *(longlong *)(param_1 + 0x50) + 0x28;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(byte *)(lVar1 + 0x30) & 2) != 0) {
    return lVar1 + 0x40;
  }
  if (*(longlong *)(lVar1 + 0x38) != 0) {
    return *(longlong *)(lVar1 + 0x38) + 0x28;
  }
  return 0;
}



// FUNCTION 142233c20 FUN_142233c20 body=253 status=ok
// SIG undefined FUN_142233c20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142233c20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_1c;
  undefined4 local_14;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x168);
    if (lVar1 == 0) {
      local_1c = _DAT_1468b5d90;
      local_14 = DAT_1468b5d98;
    }
    else {
      local_1c = *(undefined8 *)(lVar1 + 0x220);
      local_14 = *(float *)(lVar1 + 0x228);
    }
    fVar3 = local_14;
    uVar2 = local_1c;
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 == 0) {
      local_1c = _DAT_1468b5d90;
      local_14 = DAT_1468b5d98;
    }
    else {
      local_1c = *(undefined8 *)(lVar1 + 0x220);
      local_14 = *(float *)(lVar1 + 0x228);
    }
    fVar4 = (float)((ulonglong)local_1c >> 0x20);
    uStack_24 = (float)((ulonglong)uVar2 >> 0x20);
    uStack_24 = fVar4 - uStack_24;
    local_28 = (float)uVar2;
    local_28 = (float)local_1c - local_28;
    return CONCAT44(fVar4,uStack_24 * uStack_24 + local_28 * local_28 +
                          (local_14 - fVar3) * (local_14 - fVar3));
  }
  return 0;
}



// FUNCTION 142233d20 FUN_142233d20 body=668 status=ok
// SIG undefined FUN_142233d20(void)

void FUN_142233d20(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 local_res8 [8];
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uStack_94 = 1;
  uVar6 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar6 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = *puVar12;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar9 == 0) {
      lVar10 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar4 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar4) goto LAB_142233dec;
      uVar9 = puVar12[lVar10 + 1];
    }
    uStack_94 = -uVar9 & uVar9;
    iVar7 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (iStack_80 - iVar7) + 0x1f;
    if ((int)uVar6 < (int)uStack_84) {
LAB_142233dec:
      uStack_84 = uVar6;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x2d8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar11 = uVar9 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar9;
  if (uVar9 != uVar6) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar8 = puVar12[(int)uVar9 >> 5] & -1 << ((byte)uVar9 & 0x1f);
    iVar7 = (int)uVar9 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142233eb2;
      uVar8 = puVar12[(longlong)iVar7 + 1];
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
    uStack_84 = (uVar11 - iVar7) + 0x1f;
    if ((int)uVar6 < (int)uStack_84) {
LAB_142233eb2:
      uStack_84 = uVar6;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    plVar3 = *(longlong **)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
    if (plVar3 != (longlong *)0x0) {
      uVar6 = *(uint *)((longlong)plVar3 + 0xc);
      if ((int)uVar6 < (int)DAT_1469e91c4) {
        uVar9 = uVar6 & 0xffff;
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 + 0xffff;
          uVar9 = uVar9 - 0x10000;
        }
        lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                 (longlong)(int)uVar9 * 0x18;
      }
      else {
        lVar10 = 0;
      }
      if (((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) &&
         (cVar5 = (**(code **)(*plVar3 + 0x1b8))(plVar3), cVar5 != '\0')) {
        iVar7 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        *(longlong **)(*param_2 + (longlong)iVar7 * 8) = plVar3;
        (**(code **)(*plVar3 + 0x1d0))(plVar3,param_2);
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  FUN_141712a30(*param_2,(longlong)(int)param_2[1],local_res8[0],local_res8);
  return;
}



// FUNCTION 142233fc0 FUN_142233fc0 body=102 status=ok
// SIG undefined FUN_142233fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142233fc0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = local_10;
  return param_2;
}



// FUNCTION 142234030 GetTickableWhenPaused body=7 status=ok
// SIG undefined GetTickableWhenPaused(void)

byte AActor::GetTickableWhenPaused(longlong param_1)

{
  return *(byte *)(param_1 + 0x34) & 1;
}



// FUNCTION 142234040 FUN_142234040 body=197 status=ok
// SIG undefined FUN_142234040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_142234040(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined4 local_30;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x168) == 0) {
      local_30 = DAT_1468b5d98;
    }
    else {
      local_30 = *(float *)(*(longlong *)(param_1 + 0x168) + 0x228);
    }
    fVar1 = local_30;
    if (*(longlong *)(param_2 + 0x168) == 0) {
      local_30 = DAT_1468b5d98;
    }
    else {
      local_30 = *(float *)(*(longlong *)(param_2 + 0x168) + 0x228);
    }
    return ABS(fVar1 - local_30);
  }
  return 0.0;
}



// FUNCTION 142234110 GetWaveParameter body=65 status=ok
// SIG undefined GetWaveParameter(void)

ulonglong FActiveSound::GetWaveParameter(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)0x0;
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x518);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x520) * 4;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 4) {
      if (*plVar1 == param_2) {
        *param_3 = plVar1[3];
        return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      }
    }
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}



// FUNCTION 142234160 GetWorld body=140 status=ok
// SIG undefined GetWorld(void)

undefined8 AActor::GetWorld(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) >> 0xf & 1) == 0)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
      uVar3 = FUN_1429a0270();
      lVar4 = UObjectBaseUtility::GetTypedOuter(param_1,uVar3);
      if (lVar4 != 0) {
        return *(undefined8 *)(lVar4 + 0xc0);
      }
    }
  }
  return 0;
}


