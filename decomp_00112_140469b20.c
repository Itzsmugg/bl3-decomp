// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140469b20 FUN_140469b20 body=91 status=ok
// SIG undefined FUN_140469b20(void)

undefined1 FUN_140469b20(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 140469b80 FUN_140469b80 body=849 status=ok
// SIG undefined FUN_140469b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140469b80(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  undefined1 *local_e0;
  int local_d8;
  int local_d4;
  ulonglong local_d0;
  longlong local_c8;
  int local_c0;
  int local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  longlong local_a0 [2];
  longlong *local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong local_78;
  char local_64;
  ulonglong local_58;
  longlong local_50;
  undefined8 local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_90 = (longlong *)UWorld::GetFirstPlayerController(param_2);
  if (local_90 != (longlong *)0x0) {
    uVar10 = 0;
    uVar2 = APlayerStateGunfire::GetPrivateStaticClass();
    local_d0 = uVar10;
    if (uVar2 != 0) {
      uVar3 = APlayerStateGunfire::GetPrivateStaticClass();
      uVar6 = uVar2;
      do {
        local_d0 = uVar2;
        if (uVar6 == uVar3) break;
        uVar6 = *(ulonglong *)(uVar6 + 0x30);
        local_d0 = uVar10;
      } while (uVar6 != 0);
    }
    local_88[0] = 5;
    local_30 = '\0';
    local_e0 = param_2;
    FUN_14044bc80(&local_80,&local_e0,&local_d0);
    FUN_14045a130(local_88);
    uVar2 = uVar10;
    if (local_64 == '\0') {
      uVar2 = local_58;
    }
    if (local_30 != '\0') {
      local_30 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_80,local_38);
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
    }
    if (uVar2 != 0) {
      local_e8[0] = 0xf;
      local_d0 = 0;
      local_a0[0] = 0;
      local_a0[1] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a0,0);
      FGenericPlatformString::Memcpy(local_a0[0],&DAT_143f422ec,6);
      plVar4 = (longlong *)FString::RightPad(local_a0,&local_c8,0xf);
      lVar7 = plVar4[1];
      local_e0 = (undefined1 *)*plVar4;
      *plVar4 = 0;
      local_d8 = (int)plVar4[1];
      local_d4 = *(int *)((longlong)plVar4 + 0xc);
      plVar4[1] = 0;
      iVar9 = local_d8;
      if (local_d4 < (int)((6 - (uint)((int)lVar7 != 0)) + local_d8)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e0);
        iVar9 = local_d8;
      }
      local_d8 = (6 - (uint)(iVar9 != 0)) + iVar9;
      if (local_d4 < local_d8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,iVar9);
      }
      lVar7 = (longlong)iVar9 - (ulonglong)(iVar9 != 0);
      builtin_wcsncpy((wchar_t *)(local_e0 + lVar7 * 2),L"titl",4);
      *(undefined2 *)(local_e0 + lVar7 * 2 + 8) = 0x65;
      *(undefined2 *)(local_e0 + lVar7 * 2 + 10) = 0;
      local_a8 = (longlong **)CONCAT44(local_d4,local_d8);
      local_b0 = local_e0;
      (**(code **)(*local_90 + 0xc60))(local_90,&local_b0,local_d0,0);
      if (local_b0 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      if (local_c8 != 0) {
        FMemory::Free();
      }
      if (local_a0[0] != 0) {
        FMemory::Free();
      }
      local_b0 = local_e8;
      local_a8 = &local_90;
      while ((iVar9 = (int)uVar10, -1 < iVar9 && (iVar9 < *(int *)(uVar2 + 0x490)))) {
        lVar7 = FWeakObjectPtr::Get(*(longlong *)(uVar2 + 0x488) + (longlong)iVar9 * 8);
        FUN_14045b040(&local_b0,*(undefined8 *)(*(longlong *)(lVar7 + 0x200) + 8));
        uVar10 = (ulonglong)(iVar9 + 1);
      }
      FUN_140450fe0(&local_c8,0x10,1);
      do {
        if ((local_b8 < 0) || (local_c0 <= local_b8)) {
          if (local_c8 == 0) {
            return;
          }
          FMemory::Free(local_c8);
          return;
        }
        puVar5 = (undefined1 *)
                 (**(code **)(**(longlong **)(local_c8 + (longlong)local_b8 * 8) + 0x148))();
        if (puVar5 == param_2) {
          lVar7 = *(longlong *)(local_c8 + (longlong)local_b8 * 8);
          lVar1 = *(longlong *)(lVar7 + 0x100);
          if (lVar1 == 0) {
            uVar8 = *(undefined8 *)(lVar7 + 0x110);
          }
          else {
            uVar8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x240) + 8);
          }
          FUN_14045b040(&local_b0,uVar8);
        }
        do {
          local_b8 = local_b8 + 1;
          if (local_c0 <= local_b8) break;
        } while (*(longlong *)(local_c8 + (longlong)local_b8 * 8) == 0);
      } while( true );
    }
  }
  return;
}



// FUNCTION 140469ee0 FUN_140469ee0 body=712 status=ok
// SIG undefined FUN_140469ee0(void)

void FUN_140469ee0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void **ppvVar4;
  void **ppvVar5;
  void **ppvVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  void *local_78;
  ulonglong local_70;
  void *local_68;
  undefined8 local_60;
  void **local_58;
  int local_50;
  
  iVar9 = (int)param_2[1];
  if (iVar9 == 0) {
    plVar7 = (longlong *)UWorld::GetFirstPlayerController(param_3);
    if (plVar7 != (longlong *)0x0) {
      local_60 = 0x20;
      local_68 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,L"cohtml.redirect requires an URL",0x40);
      (**(code **)(*plVar7 + 0xc60))(plVar7,&local_68,0,0);
      if (local_68 != (void *)0x0) {
        FMemory::Free();
        return;
      }
    }
  }
  else {
    puVar8 = (undefined8 *)*param_2;
    local_58 = (void **)0x0;
    local_50 = iVar9;
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,iVar9,0);
    ppvVar4 = local_58;
    lVar10 = (longlong)local_58 - (longlong)puVar8;
    do {
      *(undefined8 *)(lVar10 + (longlong)puVar8) = 0;
      iVar1 = *(int *)(puVar8 + 1);
      pvVar3 = (void *)*puVar8;
      *(int *)(lVar10 + 8 + (longlong)puVar8) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(lVar10 + 0xc + (longlong)puVar8) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  ((undefined8 *)(lVar10 + (longlong)puVar8),iVar1,0);
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(lVar10 + (longlong)puVar8),pvVar3,(longlong)iVar1 * 2);
      }
      puVar8 = puVar8 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    local_78 = (void *)0x0;
    local_70 = 0;
    if ((int)param_2[1] == 1) {
      if (&local_78 != ppvVar4) {
        uVar2 = *(uint *)(ppvVar4 + 1);
        pvVar3 = *ppvVar4;
        local_70 = (ulonglong)uVar2;
        if (uVar2 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,uVar2,0);
          _guard_xfg_dispatch_icall_nop(local_78,pvVar3,(longlong)(int)uVar2 * 2);
        }
      }
      local_68 = (void *)0x0;
      local_60 = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      pvVar3 = local_68;
      FGenericPlatformString::Convert<char,wchar_t>(local_68,3,&DAT_143f420b4,3,0x3f);
      if (ppvVar4 == &local_68) {
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
      }
      else {
        if (*ppvVar4 != (void *)0x0) {
          FMemory::Free();
        }
        *ppvVar4 = pvVar3;
        *(undefined4 *)(ppvVar4 + 1) = (undefined4)local_60;
        *(undefined4 *)((longlong)ppvVar4 + 0xc) = local_60._4_4_;
      }
    }
    else if ((1 < (int)param_2[1]) && (&local_78 != ppvVar4 + 2)) {
      uVar2 = *(uint *)(ppvVar4 + 3);
      pvVar3 = ppvVar4[2];
      local_70 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,uVar2,0);
        _guard_xfg_dispatch_icall_nop(local_78,pvVar3,(longlong)(int)uVar2 * 2);
      }
    }
    FString::ReplaceInline(&local_78,&DAT_143f422f4,&DAT_143f422dc,1);
    FUN_14044e1b0(param_1,&local_58,param_3,&local_78);
    ppvVar4 = local_58;
    ppvVar5 = local_58;
    iVar9 = local_50;
    if (local_78 != (void *)0x0) {
      FMemory::Free();
      ppvVar4 = local_58;
      ppvVar5 = local_58;
      iVar9 = local_50;
    }
    for (; ppvVar6 = local_58, iVar9 != 0; iVar9 = iVar9 + -1) {
      local_58 = ppvVar5;
      if (*ppvVar4 != (void *)0x0) {
        FMemory::Free();
      }
      ppvVar4 = ppvVar4 + 2;
      ppvVar5 = local_58;
      local_58 = ppvVar6;
    }
    if (local_58 != (void **)0x0) {
      local_58 = ppvVar5;
      FMemory::Free(ppvVar6);
    }
  }
  return;
}



// FUNCTION 14046a1c0 FUN_14046a1c0 body=252 status=ok
// SIG undefined FUN_14046a1c0(void)

void FUN_14046a1c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14045af60(param_1 + 2,uVar3);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_143f4d088;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
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



// FUNCTION 14046a2c0 FUN_14046a2c0 body=294 status=ok
// SIG undefined FUN_14046a2c0(void)

void FUN_14046a2c0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  DWORD *pDVar5;
  longlong *lpTlsValue;
  longlong *plVar6;
  longlong *plVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 2);
  if (cVar3 != '\0') {
    uVar4 = FWeakObjectPtr::Get(param_1 + 2);
    FUN_140473960(uVar4,param_1 + 3);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_143f4b3a0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar5);
  plVar7 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      lpTlsValue = plVar6;
    }
    TlsSetValue(*pDVar5,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar7 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar5 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14046a3f0 FUN_14046a3f0 body=237 status=ok
// SIG undefined FUN_14046a3f0(void)

void FUN_14046a3f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_140466470(param_1 + 2,param_3,param_1 + 6);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_143f4ced8;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
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



// FUNCTION 14046a4e0 FUN_14046a4e0 body=290 status=ok
// SIG undefined FUN_14046a4e0(void)

void FUN_14046a4e0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  FUN_140466510(param_1 + 2,param_3,param_1 + 6);
  plVar7 = (longlong *)param_1[4];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_143f4c960;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar5 = TlsGetValue(*pDVar4);
  plVar7 = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar5 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar5 = plVar6;
    }
    TlsSetValue(*pDVar4,plVar5);
  }
  if ((int)plVar5[2] < 0x20) {
    plVar7 = (longlong *)plVar5[1];
  }
  else {
    if (*plVar5 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *plVar5 = plVar5[1];
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  plVar5[1] = (longlong)param_1;
  return;
}



// FUNCTION 14046a610 FUN_14046a610 body=237 status=ok
// SIG undefined FUN_14046a610(void)

void FUN_14046a610(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1404666f0(param_1 + 2,param_3,param_1 + 6);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_143f4c998;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
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



// FUNCTION 14046a700 FUN_14046a700 body=237 status=ok
// SIG undefined FUN_14046a700(void)

void FUN_14046a700(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_140466a30(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_143f4c970;
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



// FUNCTION 14046a7f0 FUN_14046a7f0 body=237 status=ok
// SIG undefined FUN_14046a7f0(void)

void FUN_14046a7f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_140466ae0(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_143f4c930;
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



// FUNCTION 14046a8e0 FUN_14046a8e0 body=237 status=ok
// SIG undefined FUN_14046a8e0(void)

void FUN_14046a8e0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_140466b70(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_143f4cea8;
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



// FUNCTION 14046a9d0 FUN_14046a9d0 body=237 status=ok
// SIG undefined FUN_14046a9d0(void)

void FUN_14046a9d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_140466d10(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_143f4ceb8;
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



// FUNCTION 14046aac0 FUN_14046aac0 body=237 status=ok
// SIG undefined FUN_14046aac0(void)

void FUN_14046aac0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_140466dc0(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_143f4c950;
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



// FUNCTION 14046abb0 FUN_14046abb0 body=290 status=ok
// SIG undefined FUN_14046abb0(void)

void FUN_14046abb0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  FUN_140466eb0(param_1 + 2,param_3,param_1 + 7);
  plVar7 = (longlong *)param_1[5];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_143f4c940;
  if (param_1[7] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[7] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar5 = TlsGetValue(*pDVar4);
  plVar7 = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar5 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar5 = plVar6;
    }
    TlsSetValue(*pDVar4,plVar5);
  }
  if ((int)plVar5[2] < 0x20) {
    plVar7 = (longlong *)plVar5[1];
  }
  else {
    if (*plVar5 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *plVar5 = plVar5[1];
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  plVar5[1] = (longlong)param_1;
  return;
}



// FUNCTION 14046ace0 FUN_14046ace0 body=251 status=ok
// SIG undefined FUN_14046ace0(void)

void FUN_14046ace0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_140467030(param_1 + 2,param_3,param_1 + 8);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_143f4cec8;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
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



// FUNCTION 14046ade0 FUN_14046ade0 body=253 status=ok
// SIG undefined FUN_14046ade0(void)

void FUN_14046ade0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  cohtml::Library::HintThreadUsage(1);
  (**(code **)(*(longlong *)param_1[2] + 0x28))
            ((longlong *)param_1[2],1,0,*(undefined4 *)(param_1 + 3));
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_143f4c890;
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



// FUNCTION 14046aee0 FUN_14046aee0 body=247 status=ok
// SIG undefined FUN_14046aee0(void)

void FUN_14046aee0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  cohtml::Library::HintThreadUsage(0);
  (**(code **)(*(longlong *)param_1[2] + 0x28))((longlong *)param_1[2],0,0,0xffffffff);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_143f4c880;
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



// FUNCTION 14046afe0 ExecuteTask body=230 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<`UNiagaraSystem::PostLoadPrimePools'::`10'::FPrimePoolsTask>::ExecuteTask
               (undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14047fb40(param_1[2]);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_143f4be38;
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



// FUNCTION 14046b0d0 FUN_14046b0d0 body=579 status=ok
// SIG undefined FUN_14046b0d0(void)

void FUN_14046b0d0(undefined1 *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(int *)(param_2 + 8) == 0) {
    plVar1 = (longlong *)(param_1 + 8);
    puVar2 = (uint *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0x30);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar3 != 0) {
      puVar8 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar8 = puVar2;
      }
      uVar4 = *puVar8;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar4 == 0) {
        lVar7 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar9 = local_98 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar9;
        if (bVar5) goto LAB_14046b1bb;
        uVar4 = puVar8[lVar7 + 1];
      }
      uStack_94 = -uVar4 & uVar4;
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
      if ((int)uVar3 < (int)uStack_84) {
LAB_14046b1bb:
        uStack_84 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x30);
    uStack_60 = CONCAT44(uStack_84,0xffffffff);
    local_58 = CONCAT44(uStack_7c,iStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar10 = uVar4 & 0xffffffe0;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar2;
    local_50 = plVar1;
    puStack_40 = puVar2;
    uStack_38 = uStack_60;
    uStack_30 = local_58;
    uStack_84 = uVar4;
    if (uVar4 != uVar3) {
      puVar8 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar8 = puVar2;
      }
      uVar6 = puVar8[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar9 = (int)uVar4 >> 5;
      while (uVar6 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_14046b283;
        uVar6 = puVar8[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar9 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar6 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_84 = (uVar10 - iVar9) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_14046b283:
        uStack_84 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_60._4_4_ == uStack_84) && (local_68 == puVar2)) break;
      *(undefined1 *)(*plVar1 + 8 + (longlong)(int)uStack_60._4_4_ * 0x18) = 0;
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
    *param_1 = 0;
  }
  FUN_14044dec0(param_1,param_2,param_3,param_1);
  return;
}



// FUNCTION 14046b320 FUN_14046b320 body=1591 status=ok
// SIG undefined FUN_14046b320(void)

char FUN_14046b320(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (DAT_1469e9868 == lVar1) {
    return '\0';
  }
  if (DAT_1469e9880 == lVar1) {
    return '\x01';
  }
  if (DAT_1469e9898 == lVar1) {
    return '\x02';
  }
  if (DAT_1469e98b0 == lVar1) {
    return '\x03';
  }
  if (DAT_1469e98c8 == lVar1) {
    return '\x04';
  }
  if (DAT_1469e98e0 == lVar1) {
    return '\x05';
  }
  if (DAT_1469e98f8 == lVar1) {
    return '\x06';
  }
  if (DAT_1469e9910 == lVar1) {
    return '\a';
  }
  if (DAT_1469e9928 == lVar1) {
    return '\b';
  }
  if (DAT_1469e9940 == lVar1) {
    return '\t';
  }
  if (DAT_1469e9958 == lVar1) {
    return '\n';
  }
  if (DAT_1469e9970 == lVar1) {
    return '\v';
  }
  if (DAT_1469e9988 == lVar1) {
    return '\f';
  }
  if (DAT_1469e99a0 == lVar1) {
    return '\r';
  }
  if (DAT_1469e99b8 == lVar1) {
    return '\x0e';
  }
  if (DAT_1469e99d0 == lVar1) {
    return '\x0f';
  }
  if (DAT_1469e99e8 == lVar1) {
    return '\x10';
  }
  if (DAT_1469e9a00 == lVar1) {
    return '\x11';
  }
  if (DAT_1469e9a18 == lVar1) {
    return '\x12';
  }
  if (DAT_1469e9a30 == lVar1) {
    return '\x13';
  }
  if (DAT_1469e9a48 == lVar1) {
    return '\x14';
  }
  if (DAT_1469e9a60 == lVar1) {
    return '\x15';
  }
  if (DAT_1469e9a78 == lVar1) {
    return '\x16';
  }
  if (DAT_1469e9a90 == lVar1) {
    return '\x17';
  }
  if (DAT_1469e9aa8 == lVar1) {
    return '\x18';
  }
  if (DAT_1469e9ac0 == lVar1) {
    return '\x19';
  }
  if (DAT_1469e9ad8 == lVar1) {
    return '\x1a';
  }
  if (DAT_1469e9af0 == lVar1) {
    return '\x1b';
  }
  if (DAT_1469e9b08 == lVar1) {
    return '\x1c';
  }
  if (DAT_1469e9b20 == lVar1) {
    return '\x1d';
  }
  if (DAT_1469e9b38 == lVar1) {
    return '\x1e';
  }
  if (DAT_1469e9b50 == lVar1) {
    return '\x1f';
  }
  if (DAT_1469e9b68 == lVar1) {
    return ' ';
  }
  if (DAT_1469e9b80 == lVar1) {
    return '!';
  }
  if (DAT_1469e9b98 == lVar1) {
    return '\"';
  }
  if (DAT_1469e9bb0 == lVar1) {
    return '#';
  }
  if (DAT_1469e9bc8 == lVar1) {
    return '$';
  }
  if (DAT_1469e9be0 == lVar1) {
    return '%';
  }
  if (DAT_1469e9bf8 == lVar1) {
    return '&';
  }
  if (DAT_1469e9c10 == lVar1) {
    return '\'';
  }
  if (DAT_1469e9c28 == lVar1) {
    return '(';
  }
  if (DAT_1469e9c40 == lVar1) {
    return ')';
  }
  if (DAT_1469e9c58 == lVar1) {
    return '*';
  }
  if (DAT_1469e9c70 == lVar1) {
    return '+';
  }
  if (DAT_1469e9c88 == lVar1) {
    return ',';
  }
  if (DAT_1469e9ca0 == lVar1) {
    return '-';
  }
  if (DAT_1469e9cb8 == lVar1) {
    return '.';
  }
  if (DAT_1469e9cd0 == lVar1) {
    return '/';
  }
  if (DAT_1469e9ce8 == lVar1) {
    return '0';
  }
  if (DAT_1469e9d00 == lVar1) {
    return '1';
  }
  if (DAT_1469e9d18 == lVar1) {
    return '2';
  }
  if (DAT_1469e9d30 == lVar1) {
    return '3';
  }
  if (DAT_1469e9d48 == lVar1) {
    return '4';
  }
  if (DAT_1469e9d60 == lVar1) {
    return '5';
  }
  if (DAT_1469e9d78 == lVar1) {
    return '6';
  }
  if (DAT_1469e9d90 == lVar1) {
    return '7';
  }
  if (DAT_1469e9da8 == lVar1) {
    return '8';
  }
  if (DAT_1469e9dc0 == lVar1) {
    return '9';
  }
  if (DAT_1469e9dd8 == lVar1) {
    return ':';
  }
  if (DAT_1469e9df0 == lVar1) {
    return ';';
  }
  if (DAT_1469e9e08 == lVar1) {
    return '<';
  }
  if (DAT_1469e9e20 == lVar1) {
    return '=';
  }
  if (DAT_1469e9e38 == lVar1) {
    return '>';
  }
  if (DAT_1469e9e50 == lVar1) {
    return '?';
  }
  if (DAT_1469e9e68 == lVar1) {
    return '@';
  }
  if (DAT_1469e9e80 == lVar1) {
    return 'A';
  }
  if (DAT_1469e9e98 == lVar1) {
    return 'B';
  }
  if (DAT_1469e9eb0 == lVar1) {
    return 'C';
  }
  if (DAT_1469e9ec8 == lVar1) {
    return 'D';
  }
  if (DAT_1469e9ee0 == lVar1) {
    return 'E';
  }
  if (DAT_1469e9ef8 == lVar1) {
    return 'F';
  }
  if (DAT_1469e9f10 == lVar1) {
    return 'G';
  }
  if (DAT_1469e9f28 == lVar1) {
    return 'H';
  }
  if (DAT_1469e9f40 == lVar1) {
    return 'I';
  }
  if (DAT_1469e9f58 == lVar1) {
    return 'J';
  }
  if (DAT_1469e9f70 == lVar1) {
    return 'K';
  }
  if (DAT_1469e9f88 == lVar1) {
    return 'L';
  }
  if (DAT_1469e9fa0 == lVar1) {
    return 'M';
  }
  if (DAT_1469e9fb8 == lVar1) {
    return 'N';
  }
  if (DAT_1469e9fd0 == lVar1) {
    return 'O';
  }
  if (DAT_1469e9fe8 == lVar1) {
    return 'P';
  }
  if (DAT_1469ea000 == lVar1) {
    return 'Q';
  }
  if (DAT_1469ea018 == lVar1) {
    return 'R';
  }
  if (DAT_1469ea030 == lVar1) {
    return 'S';
  }
  if (DAT_1469ea048 == lVar1) {
    return 'T';
  }
  if (DAT_1469ea060 == lVar1) {
    return 'U';
  }
  if (DAT_1469ea078 == lVar1) {
    return 'V';
  }
  if (DAT_1469ea090 == lVar1) {
    return 'W';
  }
  if (DAT_1469ea0a8 == lVar1) {
    return 'X';
  }
  if (DAT_1469ea0c0 == lVar1) {
    return 'Y';
  }
  if (DAT_1469ea0d8 == lVar1) {
    return 'Z';
  }
  if (DAT_1469ea0f0 == lVar1) {
    return '[';
  }
  if (DAT_1469ea108 == lVar1) {
    return '\\';
  }
  if (DAT_1469ea120 == lVar1) {
    return ']';
  }
  if (DAT_1469ea138 == lVar1) {
    return '^';
  }
  if (DAT_1469ea150 == lVar1) {
    return '_';
  }
  if (DAT_1469ea168 == lVar1) {
    return '`';
  }
  if (DAT_1469ea180 == lVar1) {
    return 'a';
  }
  if (DAT_1469ea198 == lVar1) {
    return 'b';
  }
  if (DAT_1469ea1c8 == lVar1) {
    return 'c';
  }
  if (DAT_1469ea1e0 == lVar1) {
    return 'd';
  }
  if (DAT_1469ea1f8 == lVar1) {
    return 'e';
  }
  if (DAT_1469ea210 == lVar1) {
    return 'f';
  }
  if (DAT_1469ea240 == lVar1) {
    return 'g';
  }
  if (DAT_1469ea258 == lVar1) {
    return 'h';
  }
  return (DAT_1469ea2a0 != lVar1) + 'i';
}



// FUNCTION 14046b960 FUN_14046b960 body=263 status=ok
// SIG undefined FUN_14046b960(void)

undefined8 FUN_14046b960(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  
  plVar1 = (longlong *)(param_1 + 0x120);
  *(longlong *)(param_1 + 0x128) = *plVar1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar8 = 0;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      puVar7 = (undefined4 *)(param_1 + 0x2c);
      do {
        if (param_2[2] == puVar7[-4]) {
          puVar2 = *(undefined8 **)(param_1 + 0x128);
          if (*(undefined8 **)(param_1 + 0x130) == puVar2) {
            FUN_1404502f0(plVar1);
          }
          else {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            *(undefined4 *)((longlong)puVar2 + 0x11) = 0;
            *(undefined1 *)((longlong)puVar2 + 0x15) = 0;
            *(longlong *)(param_1 + 0x128) = *(longlong *)(param_1 + 0x128) + 0x20;
          }
          lVar6 = *(longlong *)(param_1 + 0x128);
          uVar3 = param_2[1];
          uVar4 = param_2[2];
          uVar5 = param_2[3];
          *(undefined4 *)(lVar6 + -0x20) = *param_2;
          *(undefined4 *)(lVar6 + -0x1c) = uVar3;
          *(undefined4 *)(lVar6 + -0x18) = uVar4;
          *(undefined4 *)(lVar6 + -0x14) = uVar5;
          *(undefined8 *)(lVar6 + -0x10) = *(undefined8 *)(param_2 + 4);
          *(undefined4 *)(lVar6 + -8) = *param_2;
          *(undefined4 *)(lVar6 + -4) = param_2[1];
          *puVar7 = *param_2;
          puVar7[1] = param_2[1];
        }
        uVar8 = uVar8 + 1;
        puVar7 = puVar7 + 8;
      } while (uVar8 < *(ulonglong *)(param_1 + 0x118));
    }
    param_2 = param_2 + 6;
  }
  lVar6 = *(longlong *)(param_1 + 0x128) - *plVar1;
  return CONCAT71((int7)(lVar6 >> 0xd),lVar6 >> 5 != 0);
}



// FUNCTION 14046ba70 Find body=139 status=ok
// SIG undefined Find(void)

ulonglong TArray<FString,FDefaultAllocator>::Find(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  
  puVar2 = (undefined8 *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  puVar6 = puVar2;
  while( true ) {
    if (puVar6 == puVar2 + (longlong)iVar1 * 2) {
      return 0xffffffff;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar6 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar6;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (iVar3 == 0) break;
    puVar6 = puVar6 + 2;
  }
  return (longlong)puVar6 - (longlong)puVar2 >> 4 & 0xffffffff;
}



// FUNCTION 14046bb00 FindId body=268 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x20 + *param_1) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *param_1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14046bc10 FindId body=269 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x18) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14046bd20 FindId body=269 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x28) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(*param_1 + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14046be30 FindId body=298 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_3;
    if (lVar2 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(lVar2 + 0xc);
    }
    uVar1 = *(uint *)(param_3 + 1);
    uVar6 = iVar8 - uVar1 ^ uVar1 >> 0xd;
    uVar7 = (-0x61c88647 - uVar6) - uVar1 ^ uVar6 << 8;
    uVar4 = (uVar1 - uVar7) - uVar6 ^ uVar7 >> 0xd;
    uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar4 >> 0xc;
    uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 << 0x10;
    uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 >> 5;
    uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar4 >> 3;
    uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 << 10;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    iVar8 = *(int *)((longlong)plVar9 +
                    (((longlong)(int)((uVar4 - uVar7) - uVar6) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar8 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar8 * 0x20;
        if ((*(longlong *)(lVar5 + lVar3) == lVar2) && (*(uint *)(lVar5 + 8 + lVar3) == uVar1)) {
          *param_2 = iVar8;
          return param_2;
        }
        iVar8 = *(int *)(lVar5 + 0x18 + lVar3);
      } while (iVar8 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14046bf60 FUN_14046bf60 body=269 status=ok
// SIG undefined FUN_14046bf60(void)

int * FUN_14046bf60(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(*param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x48) == *param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(*param_1 + 0x40 + (longlong)iVar4 * 0x48);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14046c070 FindId body=223 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_3;
    }
    iVar1 = FUN_140438070(puVar6);
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



// FUNCTION 14046c150 FindId body=223 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_3;
    }
    iVar1 = FUN_140438070(puVar6);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar7 = (longlong)iVar1 * 0x38;
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
        iVar1 = *(int *)(lVar7 + 0x30 + lVar4);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14046c230 FindId body=234 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    iVar2 = FUN_140438070(puVar5);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar7 = *param_1;
      do {
        lVar1 = (longlong)iVar2 * 0x28;
        if (*(int *)(param_3 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar1 + 8 + lVar7) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)(lVar1 + lVar7);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar5);
        if (iVar3 == 0) {
          *param_2 = iVar2;
          return param_2;
        }
        lVar7 = *param_1;
        iVar2 = *(int *)(lVar1 + 0x20 + lVar7);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14046c320 FUN_14046c320 body=190 status=ok
// SIG undefined FUN_14046c320(void)

longlong FUN_14046c320(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong **)(param_1 + 0x260) == (longlong *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0x6c8))();
  if (0 < iVar2) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0x560))
                      (*(longlong **)(param_1 + 0x260),0);
    if (lVar3 != 0) {
      lVar4 = FUN_1429ba110();
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
        return lVar3;
      }
    }
    lVar3 = UMaterialInstanceDynamic::Create(lVar3,*(undefined8 *)(param_1 + 0x260));
    (**(code **)(**(longlong **)(param_1 + 0x260) + 0x568))(*(longlong **)(param_1 + 0x260),0,lVar3)
    ;
    return lVar3;
  }
  return 0;
}



// FUNCTION 14046c3e0 FUN_14046c3e0 body=263 status=ok
// SIG undefined FUN_14046c3e0(void)

void FUN_14046c3e0(undefined8 *param_1,int param_2)

{
  int iVar1;
  void *_Src;
  ISyncStreamReader *this;
  
  if ((param_2 == 0) && (*(int *)(param_1 + 4) - 200U < 7)) {
    this = (ISyncStreamReader *)operator_new(0x18);
    if (this == (ISyncStreamReader *)0x0) {
      this = (ISyncStreamReader *)0x0;
    }
    else {
      cohtml::ISyncStreamReader::ISyncStreamReader(this);
      *(undefined ***)this = &PTR_FUN_143f4bda8;
      *(undefined8 *)(this + 8) = 0;
      iVar1 = *(int *)(param_1 + 2);
      _Src = (void *)param_1[1];
      *(int *)(this + 0x10) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(this + 0x14) = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(this + 8,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(this + 8),_Src,(longlong)iVar1);
      }
    }
    (**(code **)(*(longlong *)param_1[3] + 8))((longlong *)param_1[3],this);
    (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],0);
                    /* WARNING: Could not recover jumptable at 0x00014046c4c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],1);
                    /* WARNING: Could not recover jumptable at 0x00014046c4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 14046c4f0 FUN_14046c4f0 body=401 status=ok
// SIG undefined FUN_14046c4f0(void)

void FUN_14046c4f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x200);
  iVar6 = 0;
  if (lVar1 != 0) {
    if (*(longlong **)(lVar1 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    FUN_140465e20(lVar1);
    lVar1 = *(longlong *)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x200) = 0;
    if (lVar1 != 0) {
      FUN_1404580d0(lVar1);
      FMemory::Free(lVar1);
    }
  }
  if (((*(longlong *)(param_1 + 0x220) != 0) && (DAT_146850620 != 0)) && (DAT_146850628 != 0)) {
    LOCK();
    iVar4 = *(int *)(DAT_146850628 + 8);
    if (iVar4 == 0) {
      *(int *)(DAT_146850628 + 8) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      lVar1 = *(longlong *)(param_1 + 0x220);
      FWeakObjectPtr::operator=(local_res8,param_1);
      iVar4 = *(int *)(lVar1 + 0x490);
      if (iVar4 != 0) {
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(undefined8 *)(lVar1 + 0x488),local_res8);
        bVar7 = cVar3 == '\0';
        iVar5 = iVar6;
        do {
          iVar2 = iVar5;
          do {
            iVar2 = iVar2 + 1;
            if (iVar4 <= iVar2) break;
            cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                              (*(longlong *)(lVar1 + 0x488) + (longlong)iVar2 * 8,local_res8);
          } while (bVar7 == (cVar3 == '\0'));
          if (bVar7 != false) {
            if (iVar6 != iVar5) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(lVar1 + 0x488) + (longlong)iVar6 * 8),
                         (void *)(*(longlong *)(lVar1 + 0x488) + (longlong)iVar5 * 8),
                         (longlong)(iVar2 - iVar5) << 3);
            }
            iVar6 = iVar6 + (iVar2 - iVar5);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar5 = iVar2;
        } while (iVar2 < iVar4);
        *(int *)(lVar1 + 0x490) = iVar6;
      }
    }
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 14046c690 FUN_14046c690 body=253 status=ok
// SIG undefined FUN_14046c690(void)

void FUN_14046c690(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  plVar3 = (longlong *)(param_1 + 0x100);
  if ((*plVar3 != 0) && (lVar5 = *(longlong *)(*plVar3 + 0x240), lVar5 != 0)) {
    if (*(longlong **)(lVar5 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar5 + 8) + 8))();
      *(undefined8 *)(lVar5 + 8) = 0;
    }
    FUN_140465e20(lVar5);
    lVar5 = *(longlong *)(*plVar3 + 0x240);
    *(undefined8 *)(*plVar3 + 0x240) = 0;
    if (lVar5 != 0) {
      FUN_1404580d0(lVar5);
      FMemory::Free(lVar5);
    }
    local_10 = (longlong *)0x0;
    if (plVar3 != &local_18) {
      *plVar3 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x108,&local_10);
      plVar3 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  thunk_FUN_141755460(param_1);
  return;
}



// FUNCTION 14046c7e0 FUN_14046c7e0 body=137 status=ok
// SIG undefined FUN_14046c7e0(void)

undefined8 FUN_14046c7e0(undefined4 param_1)

{
  switch(param_1) {
  case 2:
  case 0x25:
    return 0;
  default:
    return 0x31;
  case 5:
    return 2;
  case 6:
    return 3;
  case 7:
    return 4;
  case 0x17:
    return 6;
  case 0x1b:
    return 1;
  case 0x27:
    return 5;
  case 0x2e:
    return 10;
  case 0x2f:
    return 0xb;
  case 0x32:
    return 0x14;
  case 0x33:
    return 0x18;
  case 0x34:
    return 0x1b;
  case 0x35:
    return 0x1f;
  case 0x36:
    return 0x21;
  case 0x37:
    return 7;
  case 0x38:
    return 8;
  }
}



// FUNCTION 14046c8f0 FUN_14046c8f0 body=802 status=ok
// SIG undefined FUN_14046c8f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14046c8f0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  size_t _Size;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  void *pvVar11;
  int iVar12;
  undefined1 auStack_188 [32];
  void *local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined2 *local_120;
  int local_118;
  undefined4 local_114;
  undefined8 *local_110;
  longlong *local_108;
  longlong local_100;
  longlong local_f8 [2];
  undefined1 local_e8 [128];
  longlong local_68;
  void *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *param_2;
  lVar10 = (longlong)(int)param_2[1] * 0x20 + lVar7;
  local_108 = param_1;
  local_100 = lVar10;
  if (lVar7 != lVar10) {
    do {
      iVar8 = 0;
      local_158 = 0;
      local_150 = 0;
      local_148 = (longlong *)0x0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = lVar7;
      plVar4 = (longlong *)FUN_14046cf90(local_f8,lVar7);
      if (&local_158 != plVar4) {
        local_158 = *plVar4;
        *plVar4 = 0;
        local_150 = plVar4[1];
        plVar4[1] = 0;
      }
      if (local_f8[0] != 0) {
        FMemory::Free();
      }
      puVar9 = *(undefined8 **)(lVar7 + 0x10);
      local_110 = puVar9 + (longlong)*(int *)(lVar7 + 0x18) * 2;
      if (puVar9 != local_110) {
        do {
          puVar6 = (undefined2 *)0x0;
          pvVar11 = (void *)*puVar9;
          local_120 = (undefined2 *)0x0;
          local_118 = *(int *)(puVar9 + 1);
          lVar7 = (longlong)local_118;
          if (local_118 == 0) {
            local_114 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_120,local_118,0);
            puVar6 = local_120;
            _guard_xfg_dispatch_icall_nop(local_120,pvVar11,lVar7 * 2);
          }
          puVar5 = &DAT_143f3eda8;
          if (local_118 != 0) {
            puVar5 = puVar6;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,puVar5);
          _Src = local_60;
          _Size = (size_t)local_58;
          pvVar11 = (void *)0x0;
          local_168 = (void *)0x0;
          local_160._0_4_ = local_58;
          if (local_58 == 0) {
            local_160._4_4_ = 0;
            iVar12 = local_58;
          }
          else {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_168,local_58,0);
            pvVar11 = local_168;
            _guard_xfg_dispatch_icall_nop(local_168,_Src,_Size);
            iVar12 = (int)local_160;
          }
          local_160._0_4_ = iVar12 + 1;
          if (local_160._4_4_ < (int)local_160) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_168,iVar12);
            pvVar11 = local_168;
          }
          iVar2 = local_160._4_4_;
          iVar1 = (int)local_160;
          *(undefined1 *)((longlong)iVar12 + (longlong)pvVar11) = 0;
          if (local_68 != 0) {
            FMemory::Free();
          }
          iVar12 = iVar8 + 1;
          local_140 = CONCAT44(local_140._4_4_,iVar12);
          if (local_140._4_4_ < iVar12) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_148,iVar8);
            iVar12 = (int)local_140;
          }
          plVar4 = local_148 + (longlong)iVar8 * 2;
          local_168 = (void *)0x0;
          local_160 = 0;
          *plVar4 = (longlong)pvVar11;
          *(int *)(plVar4 + 1) = iVar1;
          *(int *)((longlong)plVar4 + 0xc) = iVar2;
          if (puVar6 != (undefined2 *)0x0) {
            FMemory::Free(puVar6);
          }
          puVar9 = puVar9 + 2;
          lVar10 = local_100;
          param_1 = local_108;
          lVar7 = local_128;
          iVar8 = iVar12;
        } while (puVar9 != local_110);
      }
      iVar8 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
      }
      FUN_140452670((longlong)iVar8 * 0x30 + *param_1,&local_158);
      if (local_138 != 0) {
        FMemory::Free();
      }
      plVar3 = local_148;
      plVar4 = local_148;
      for (iVar8 = (int)local_140; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (plVar3 != (longlong *)0x0) {
        FMemory::Free(plVar3);
      }
      if (local_158 != 0) {
        FMemory::Free();
      }
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != lVar10);
  }
  return param_1;
}



// FUNCTION 14046cc20 FUN_14046cc20 body=10 status=ok
// SIG undefined FUN_14046cc20(void)

void FUN_14046cc20(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014046cc23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x610))();
  return;
}



// FUNCTION 14046cc50 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FMemoryReader::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FMemoryReader",0x1c);
  return param_2;
}



// FUNCTION 14046cc90 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FMemoryWriter::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FMemoryWriter",0x1c);
  return param_2;
}



// FUNCTION 14046ccd0 FUN_14046ccd0 body=132 status=ok
// SIG undefined FUN_14046ccd0(void)

longlong FUN_14046ccd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 *local_res18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x38);
  local_res10 = param_2;
  TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8);
  lVar3 = 0;
  if (local_res8[0] != -1) {
    lVar3 = *plVar1 + (longlong)local_res8[0] * 0x28;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  if (lVar2 == 0) {
    local_res18[0] = &local_res10;
    FUN_14044c100(plVar1,local_res8,local_res18,0);
    lVar2 = *plVar1 + (longlong)local_res8[0] * 0x28 + 8;
  }
  return lVar2;
}



// FUNCTION 14046cd80 FUN_14046cd80 body=168 status=ok
// SIG undefined FUN_14046cd80(void)

undefined8 * FUN_14046cd80(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  longlong local_18;
  longlong *local_10;
  
  FUN_14048f290(param_1,&local_18);
  if (local_18 != 0) {
    cVar8 = FWeakObjectPtr::IsValid(local_18 + 0x388);
    if (cVar8 != '\0') {
      lVar9 = FWeakObjectPtr::Get(local_18 + 0x388);
      uVar4 = *(undefined4 *)(lVar9 + 0x1e4);
      uVar5 = *(undefined4 *)(lVar9 + 0x1e8);
      uVar6 = *(undefined4 *)(lVar9 + 0x1ec);
      *(undefined4 *)param_2 = *(undefined4 *)(lVar9 + 0x1e0);
      *(undefined4 *)((longlong)param_2 + 4) = uVar4;
      *(undefined4 *)(param_2 + 1) = uVar5;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
      goto LAB_14046cdd6;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14046cdd6:
  plVar7 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
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



// FUNCTION 14046ce30 FUN_14046ce30 body=139 status=ok
// SIG undefined FUN_14046ce30(void)

undefined8 * FUN_14046ce30(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_18;
  longlong *local_10;
  
  FUN_14048f390(param_1,&local_18);
  plVar8 = local_10;
  if (local_18 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_18 + 0x21c);
    uVar5 = *(undefined4 *)(local_18 + 0x220);
    uVar6 = *(undefined4 *)(local_18 + 0x224);
    *(undefined4 *)param_2 = *(undefined4 *)(local_18 + 0x218);
    *(undefined4 *)((longlong)param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 1) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
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



// FUNCTION 14046cec0 FUN_14046cec0 body=6 status=ok
// SIG undefined FUN_14046cec0(void)

undefined8 FUN_14046cec0(void)

{
  return 0xffffffff;
}



// FUNCTION 14046ced0 FUN_14046ced0 body=11 status=ok
// SIG undefined FUN_14046ced0(void)

void FUN_14046ced0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014046ced7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  return;
}



// FUNCTION 14046cee0 FUN_14046cee0 body=67 status=ok
// SIG undefined FUN_14046cee0(void)

float FUN_14046cee0(longlong param_1)

{
  longlong *plVar1;
  undefined1 local_res8 [32];
  
  plVar1 = (longlong *)FDateTime::Now(local_res8);
  return (float)((*plVar1 - *(longlong *)(param_1 + 0x18)) / 10000);
}



// FUNCTION 14046cf90 FUN_14046cf90 body=218 status=ok
// SIG undefined FUN_14046cf90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14046cf90(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  longlong local_48;
  void *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,puVar2);
  iVar3 = 0;
  *param_1 = 0;
  *(int *)(param_1 + 1) = local_38;
  if (local_38 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    iVar1 = iVar3;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1,local_38,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,local_40,(longlong)local_38);
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (iVar1 < iVar3 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  *(undefined1 *)((longlong)iVar3 + *param_1) = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14046d070 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FIndexBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FIndexBuffer",0x1a);
  return param_2;
}



// FUNCTION 14046d0b0 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FRenderResource::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"undefined",0x14);
  return param_2;
}



// FUNCTION 14046d0f0 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FVertexBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FVertexBuffer",0x1c);
  return param_2;
}



// FUNCTION 14046d130 FUN_14046d130 body=637 status=ok
// SIG undefined FUN_14046d130(void)

longlong FUN_14046d130(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_2a8 [16];
  undefined1 local_298 [192];
  longlong local_1d8;
  undefined1 local_1c0 [112];
  undefined1 local_150 [120];
  undefined1 local_d8 [16];
  longlong local_c8;
  longlong local_b8;
  longlong local_a8;
  longlong local_90;
  longlong local_80;
  longlong local_70;
  longlong local_60;
  longlong local_48;
  longlong local_30;
  longlong local_18;
  
  if ((DAT_146b19a68 != 0) && (lVar2 = UWorld::GetGameViewport(), lVar2 != 0)) {
    return lVar2;
  }
  puVar3 = *(undefined8 **)(DAT_146b17150 + 0xc18);
  puVar1 = puVar3 + *(int *)(DAT_146b17150 + 0xc20);
  while( true ) {
    if (puVar3 == puVar1) {
      return 0;
    }
    FUN_140454b70(local_2a8,*puVar3);
    if (local_70 != 0) break;
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_30 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
    if (local_90 != 0) {
      FMemory::Free();
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
    if (local_c8 != 0) {
      FMemory::Free();
    }
    FUN_140456840(local_d8);
    FURL::~FURL(local_150);
    FURL::~FURL(local_1c0);
    if (local_1d8 != 0) {
      FMemory::Free();
    }
    FURL::~FURL(local_298);
    puVar3 = puVar3 + 1;
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  FUN_140456840(local_d8);
  FURL::~FURL(local_150);
  FURL::~FURL(local_1c0);
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  FURL::~FURL(local_298);
  return local_70;
}



// FUNCTION 14046d3b0 FUN_14046d3b0 body=128 status=ok
// SIG undefined FUN_14046d3b0(void)

longlong FUN_14046d3b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x218);
  if (lVar3 == 0) {
    puVar2 = (undefined8 *)operator_new(0x18);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_143f4a868;
      puVar2[2] = 0;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x218);
    *(undefined8 **)(param_1 + 0x218) = puVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      puVar2 = *(undefined8 **)(param_1 + 0x218);
    }
    FUN_140471340(puVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x200) + 8));
    lVar3 = *(longlong *)(param_1 + 0x218);
  }
  return lVar3;
}



// FUNCTION 14046d430 FUN_14046d430 body=11 status=ok
// SIG undefined FUN_14046d430(void)

undefined8 * FUN_14046d430(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  return param_2;
}



// FUNCTION 14046d440 GetWidgetType body=30 status=ok
// SIG undefined GetWidgetType(void)

undefined8 FSnapshotWidgetReflectorNode::GetWidgetType(longlong param_1,undefined8 param_2)

{
  FText::FText(param_2,param_1 + 0x58);
  return param_2;
}



// FUNCTION 14046d460 FUN_14046d460 body=417 status=ok
// SIG undefined FUN_14046d460(void)

uint * FUN_14046d460(uint *param_1,longlong param_2,uint *param_3)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar12;
  undefined2 uStack_32;
  ulonglong uVar11;
  
  puVar2 = *(uint **)(param_2 + 0xd8);
  uVar12 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 1;
  param_1[0xf] = 0;
  uVar10 = 0;
  uVar5 = uVar10;
  if (puVar2 != (uint *)0x0) {
    uVar5 = *puVar2;
  }
  *param_1 = uVar5;
  uVar11 = uVar12;
  if (puVar2 != (uint *)0x0) {
    uVar11 = (ulonglong)puVar2[1];
  }
  uVar9 = (uint)uVar11;
  param_1[1] = uVar9;
  uVar11 = uVar12;
  uVar4 = uVar10;
  if (param_3 != (uint *)0x0) {
    uVar9 = param_3[3];
    uVar5 = param_3[2];
    uVar11 = (ulonglong)*param_3;
    uVar4 = param_3[1];
  }
  param_1[2] = (uint)uVar11;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar9;
  lVar8 = *(longlong *)(param_2 + 0xd8);
  uVar5 = FUN_14046c7e0(*(undefined4 *)(lVar8 + 0xc));
  uVar3 = *(undefined8 *)param_1;
  param_1[9] = uVar5;
  param_1[8] = 0;
  *(longlong *)(param_1 + 10) = param_2;
  if (lVar8 != 0) {
    uVar10 = *(uint *)(lVar8 + 0x18);
  }
  uVar6 = FUN_1404a5d20();
  FUN_1417846f0(uVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = FUN_1404a5d20();
  lVar8 = FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
  *(longlong *)(lVar8 + 0x70) = param_2;
  *(undefined8 *)(lVar8 + 0x38) = uVar3;
  *(ulonglong *)(lVar8 + 0x40) = CONCAT44(1,uVar10);
  *(ulonglong *)(lVar8 + 0x48) = CONCAT26(uStack_32,0x100000000);
  *(ulonglong *)(lVar8 + 0x50) = (ulonglong)uVar5;
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined4 *)(lVar8 + 0x68) = 0;
  iVar1 = *(int *)(lVar8 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar10 = iVar1 >> 0x1f & 0xffff;
    uVar5 = iVar1 + uVar10;
    uVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
             (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
  }
  *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) | 0x40000000;
  *(longlong *)(param_1 + 0xc) = lVar8;
  return param_1;
}



// FUNCTION 14046d610 FUN_14046d610 body=677 status=ok
// SIG undefined FUN_14046d610(void)

undefined8 * FUN_14046d610(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined2 uStack_42;
  
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    if (iVar4 != 1) {
      lVar12 = 0;
      if (iVar4 != 2) {
        *param_2 = 0;
        param_2[3] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 1;
        return param_2;
      }
      lVar10 = *param_1;
      if (lVar10 != 0) {
        lVar7 = UTexture2D::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) goto LAB_14046d6b2;
      }
      lVar10 = lVar12;
LAB_14046d6b2:
      *param_2 = 0;
      param_2[3] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 1;
      uVar1 = *(undefined4 *)(lVar10 + 0xc0);
      *(undefined4 *)param_2 = uVar1;
      uVar2 = *(undefined4 *)(lVar10 + 0xc4);
      *(undefined4 *)((longlong)param_2 + 4) = uVar2;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = uVar1;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
      if (*(byte *)(lVar10 + 0xe2) == 0) {
        uVar6 = FUN_14046e310(*(undefined1 *)(lVar10 + 0xe1));
      }
      else {
        uVar6 = (uint)*(byte *)(lVar10 + 0xe2);
      }
      uVar6 = FUN_14046c7e0(uVar6);
      *(uint *)((longlong)param_2 + 0x24) = uVar6;
      *(undefined4 *)(param_2 + 4) = 0;
      uVar3 = *(undefined4 *)(lVar10 + 0xe4);
      uVar8 = FUN_1404a5d20();
      FUN_1417846f0(uVar8,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar9 = FUN_1404a5d20();
      lVar7 = FUN_1417985e0(uVar9,uVar8,0,0,0,0,0,0,0);
      *(longlong *)(lVar7 + 0x70) = lVar10;
      *(ulonglong *)(lVar7 + 0x38) = CONCAT44(uVar2,uVar1);
      *(ulonglong *)(lVar7 + 0x40) = CONCAT44(1,uVar3);
      *(ulonglong *)(lVar7 + 0x48) = CONCAT26(uStack_42,0x100000000);
      *(ulonglong *)(lVar7 + 0x50) = (ulonglong)uVar6;
      *(undefined8 *)(lVar7 + 0x58) = 0;
      *(undefined8 *)(lVar7 + 0x60) = 0;
      *(undefined4 *)(lVar7 + 0x68) = 0;
      iVar4 = *(int *)(lVar7 + 0xc);
      if (iVar4 < (int)DAT_1469e91c4) {
        uVar11 = iVar4 >> 0x1f & 0xffff;
        uVar6 = iVar4 + uVar11;
        lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                 (longlong)(int)((uVar6 & 0xffff) - uVar11) * 0x18;
      }
      *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) | 0x40000000;
      param_2[6] = lVar7;
      return param_2;
    }
    lVar12 = *param_1;
    if (lVar12 == 0) {
LAB_14046d851:
      lVar12 = 0;
    }
    else {
      lVar10 = UTexture2D::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14046d851;
    }
    lVar10 = (longlong)param_1 + 0xc;
    goto LAB_14046d89c;
  }
  lVar12 = *param_1;
  if (lVar12 == 0) {
LAB_14046d897:
    lVar12 = 0;
  }
  else {
    lVar10 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14046d897;
  }
  lVar10 = 0;
LAB_14046d89c:
  FUN_14046d460(param_2,lVar12,lVar10);
  return param_2;
}



// FUNCTION 14046d8c0 png_get_io_state body=7 status=ok
// SIG undefined png_get_io_state(void)

undefined4 png_get_io_state(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x4a8);
}



// FUNCTION 14046d8d0 CanContainContent body=8 status=ok
// SIG undefined CanContainContent(void)

undefined1 FPlugin::CanContainContent(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x153);
}



// FUNCTION 14046d8e0 FUN_14046d8e0 body=437 status=ok
// SIG undefined FUN_14046d8e0(void)

Library * FUN_14046d8e0(longlong param_1)

{
  undefined8 *puVar1;
  IAllocator *this;
  ILogHandler *this_00;
  longlong *plVar2;
  Library *pLVar3;
  longlong lVar4;
  ILogHandler *pIVar5;
  IAllocator *pIVar6;
  undefined8 local_58;
  uint local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined2 local_38;
  undefined4 local_34;
  undefined8 local_30;
  code *local_28;
  undefined8 local_20;
  char *local_10;
  
  pLVar3 = *(Library **)(param_1 + 200);
  if (pLVar3 == (Library *)0x0) {
    this = (IAllocator *)operator_new(8);
    pIVar5 = (ILogHandler *)0x0;
    pIVar6 = (IAllocator *)pIVar5;
    if (this != (IAllocator *)0x0) {
      *(undefined8 *)this = 0;
      cohtml::IAllocator::IAllocator(this);
      *(undefined ***)this = &PTR_LAB_143f4c8a0;
      pIVar6 = this;
    }
    plVar2 = *(longlong **)(param_1 + 0xb0);
    *(IAllocator **)(param_1 + 0xb0) = pIVar6;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,1);
    }
    this_00 = (ILogHandler *)operator_new(8);
    if (this_00 != (ILogHandler *)0x0) {
      *(undefined8 *)this_00 = 0;
      cohtml::Logging::ILogHandler::ILogHandler(this_00);
      *(undefined ***)this_00 = &PTR_FUN_143f4c860;
      pIVar5 = this_00;
    }
    puVar1 = *(undefined8 **)(param_1 + 0xb8);
    *(ILogHandler **)(param_1 + 0xb8) = pIVar5;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    plVar2 = (longlong *)FUN_140490060();
    lVar4 = plVar2[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar4 = plVar2[0x1f];
    }
    local_40 = &DAT_143f47cc0;
    local_10 = "Droid Sans";
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_38 = 0x101;
    local_34 = 1;
    local_30 = 0;
    local_20 = 0;
    local_50 = (uint)*(byte *)(lVar4 + 0x4d);
    local_58 = *(undefined8 *)(param_1 + 0xb0);
    local_28 = FUN_14047e760;
    plVar2 = (longlong *)FTaskGraphInterface::Get();
    local_34 = (**(code **)(*plVar2 + 0x18))(plVar2);
    pLVar3 = cohtml::Library::InitializeWithRenderingLibrary
                       (PTR_s_AAEAAJTq10XMDw_AeWi3bdD5ifMFGAXs_1461f6330,
                        (LibraryParamsWithExternalRenderingLibrary *)&local_58,
                        *(IRenderingLibrary **)(param_1 + 0xc0));
    plVar2 = *(longlong **)(param_1 + 200);
    *(Library **)(param_1 + 200) = pLVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,0);
      pLVar3 = *(Library **)(param_1 + 200);
    }
  }
  return pLVar3;
}



// FUNCTION 14046dac0 FUN_14046dac0 body=220 status=ok
// SIG undefined FUN_14046dac0(void)

undefined8 FUN_14046dac0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_14044f0b0(*(undefined8 *)(param_1 + 0x118),&local_18,0);
  plVar5 = local_18;
  if (((int)local_10 != 0) && (lVar3 = *local_18, lVar3 != 0)) {
    lVar6 = FUN_142a232e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FWeakObjectPtr::operator=(&local_res8,lVar3);
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar2 * 8);
      *puVar1 = local_res8;
      uVar7 = 1;
      puVar1[1] = local_resc;
      goto LAB_14046db7c;
    }
  }
  uVar7 = 0;
LAB_14046db7c:
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  return uVar7;
}



// FUNCTION 14046dba0 FUN_14046dba0 body=163 status=ok
// SIG undefined FUN_14046dba0(void)

ulonglong FUN_14046dba0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar3 = *(longlong *)(param_1 + 0x260);
  if (lVar3 != 0) {
    lVar4 = FUN_142a232e0();
    iVar2 = *(int *)(lVar4 + 0x90);
    uVar5 = (longlong)iVar2;
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar2) ||
       (uVar5 = *(ulonglong *)(*(longlong *)(lVar3 + 0x10) + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar2 * 8) != lVar4 + 0x88)) {
      in_RAX = uVar5 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      FWeakObjectPtr::operator=(&local_res8,lVar3);
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar2 * 8);
      *puVar1 = local_res8;
      puVar1[1] = local_resc;
      return CONCAT71((uint7)(uint3)((uint)local_resc >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14046dc50 FUN_14046dc50 body=710 status=ok
// SIG undefined FUN_14046dc50(void)

void FUN_14046dc50(int *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = param_4;
  *(bool *)(param_1 + 6) = (*(byte *)(param_3 + 8) & 3) != 0;
  *(bool *)((longlong)param_1 + 0x1a) = (*(byte *)(param_3 + 8) & 0x30) != 0;
  *(bool *)((longlong)param_1 + 0x19) = (*(byte *)(param_3 + 8) & 0xc) != 0;
  *(bool *)((longlong)param_1 + 0x1b) = (*(byte *)(param_3 + 8) & 0xc0) != 0;
  local_88 = DAT_1469e9868;
  local_80 = DAT_1469e9870;
  local_78 = DAT_1469e9878;
  if (DAT_1469e9878 != 0) {
    LOCK();
    *(int *)(DAT_1469e9878 + 8) = *(int *)(DAT_1469e9878 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_140472340(param_3,&local_88);
  if (cVar4 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x1e) = 1;
  }
  local_70 = DAT_1469e9898;
  local_68 = DAT_1469e98a0;
  local_60 = DAT_1469e98a8;
  if (DAT_1469e98a8 != 0) {
    LOCK();
    *(int *)(DAT_1469e98a8 + 8) = *(int *)(DAT_1469e98a8 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_140472340(param_3,&local_70);
  if (cVar4 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x1f) = 1;
  }
  local_58 = DAT_1469e9880;
  local_50 = DAT_1469e9888;
  local_48 = DAT_1469e9890;
  if (DAT_1469e9890 != 0) {
    LOCK();
    *(int *)(DAT_1469e9890 + 8) = *(int *)(DAT_1469e9890 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_140472340(param_3,&local_58);
  if (cVar4 != '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  local_40 = DAT_1469e98b0;
  local_38 = DAT_1469e98b8;
  local_30 = DAT_1469e98c0;
  if (DAT_1469e98c0 != 0) {
    LOCK();
    *(int *)(DAT_1469e98c0 + 8) = *(int *)(DAT_1469e98c0 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_140472340(param_3,&local_40);
  if (cVar4 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  }
  local_28 = DAT_1469e98c8;
  local_20 = DAT_1469e98d0;
  local_18 = DAT_1469e98d8;
  if (DAT_1469e98d8 != 0) {
    LOCK();
    *(int *)(DAT_1469e98d8 + 8) = *(int *)(DAT_1469e98d8 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_140472340(param_3,&local_28);
  if (cVar4 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  }
  if (param_4 == 3) {
    plVar5 = (longlong *)FUN_140490060();
    lVar6 = plVar5[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar6 = plVar5[0x1f];
    }
    fVar7 = (float)(int)-(*(float *)(lVar6 + 0x48) * *(float *)(param_3 + 100));
    if ((*(byte *)(param_3 + 8) & 3) == 0) {
      param_1[5] = (int)fVar7;
    }
    else {
      param_1[4] = (int)fVar7;
    }
  }
  else if (param_4 - 1U < 2) {
    plVar5 = *(longlong **)(param_3 + 0x48);
    lVar6 = *(longlong *)(param_3 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (lVar6 == DAT_1469e9868) {
      param_1[1] = 0;
    }
    else if (lVar6 == DAT_1469e9880) {
      param_1[1] = 2;
    }
    else if (lVar6 == DAT_1469e9898) {
      param_1[1] = 1;
    }
    else if (lVar6 == DAT_1469e98b0) {
      param_1[1] = 3;
    }
    else if (lVar6 == DAT_1469e98c8) {
      param_1[1] = 4;
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
    }
  }
  return;
}



// FUNCTION 14046df30 FUN_14046df30 body=82 status=ok
// SIG undefined FUN_14046df30(void)

longlong FUN_14046df30(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = _guard_xfg_dispatch_icall_nop();
  lVar2 = _guard_xfg_dispatch_icall_nop();
  return ((lVar2 / lVar1) * 1000000000 + ((lVar2 % lVar1) * 1000000000) / lVar1) / 1000000;
}



// FUNCTION 14046df90 FUN_14046df90 body=378 status=ok
// SIG undefined FUN_14046df90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14046df90(longlong param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  DWORD local_res8 [2];
  undefined1 local_res10 [8];
  longlong *local_res18 [2];
  DWORD *local_28;
  longlong **local_20;
  
  local_res8[0] = GetCurrentThreadId();
  local_res18[0] = (longlong *)0x0;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar4 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar4 = param_1 + 0x80;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x90) - 1U & (longlong)(int)local_res8[0]
                             ) * 4);
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x48);
      iVar7 = iVar2;
      do {
        if (*(DWORD *)(lVar4 + (longlong)iVar7 * 0x18) == local_res8[0]) {
          if (iVar7 != -1) {
            if (iVar2 != -1) goto LAB_14046e050;
            goto LAB_14046e07b;
          }
          break;
        }
        iVar7 = *(int *)(lVar4 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  uVar5 = FPlatformFileManager::Get();
  plVar6 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar5);
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = *(undefined2 **)(param_1 + 0x30);
  }
  local_res18[0] = (longlong *)(**(code **)(*plVar6 + 0xb8))(plVar6,puVar9,0);
  if (local_res18[0] != (longlong *)0x0) {
    local_28 = local_res8;
    local_20 = local_res18;
    FUN_14044cfc0(param_1 + 0x48,local_res10,&local_28,0);
  }
  goto LAB_14046e0cf;
  while (iVar2 = *(int *)(lVar8 + 0x10), iVar2 != -1) {
LAB_14046e050:
    lVar8 = lVar4 + (longlong)iVar2 * 0x18;
    if (*(DWORD *)(lVar4 + (longlong)iVar2 * 0x18) == local_res8[0]) {
      if (iVar2 == -1) {
LAB_14046e07b:
        lVar8 = 0;
      }
      local_res18[0] = *(longlong **)(lVar8 + 8);
      goto LAB_14046e0cf;
    }
  }
  local_res18[0] = _DAT_00000008;
LAB_14046e0cf:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_res18[0] != (longlong *)0x0) && (*(int *)(param_1 + 0x40) == 0)) {
    uVar3 = (**(code **)(*local_res18[0] + 0x40))();
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    return local_res18[0];
  }
  return local_res18[0];
}



// FUNCTION 14046e110 FUN_14046e110 body=509 status=ok
// SIG undefined FUN_14046e110(void)

longlong * FUN_14046e110(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  uint local_40;
  uint uStack_3c;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar10 = (undefined1 *)*param_2;
  puVar1 = puVar10 + (longlong)*(int *)(param_2 + 1) * 0x18;
  for (; puVar10 != puVar1; puVar10 = puVar10 + 0x18) {
    uVar4 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    uStack_3c = 0;
    plVar2 = (longlong *)FUN_140462170(local_78,*puVar10);
    if (&local_58 != plVar2) {
      local_58 = *plVar2;
      *plVar2 = 0;
      local_50 = plVar2[1];
      plVar2[1] = 0;
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    uVar8 = (ulonglong)*(int *)(puVar10 + 0x10);
    if (uVar8 + *(ulonglong *)(puVar10 + 8) < *(ulonglong *)(puVar10 + 8)) {
      uVar8 = 0;
    }
    uVar6 = uVar4;
    uVar9 = uVar4;
    if (uVar8 != 0) {
      do {
        plVar2 = (longlong *)FUN_140462170(local_68);
        iVar5 = (int)uVar6;
        local_40 = iVar5 + 1;
        if ((int)uVar9 < (int)local_40) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_48);
          uVar9 = (ulonglong)uStack_3c;
        }
        uVar6 = (ulonglong)local_40;
        plVar3 = local_48 + (longlong)iVar5 * 2;
        *plVar3 = 0;
        *plVar3 = *plVar2;
        *plVar2 = 0;
        *(int *)(plVar3 + 1) = (int)plVar2[1];
        *(undefined4 *)((longlong)plVar3 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
        plVar2[1] = 0;
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar8);
    }
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar5);
    }
    TTuple<FString,TArray<FString,FDefaultAllocator>_>::
    TTuple<FString,TArray<FString,FDefaultAllocator>_>((longlong)iVar5 * 0x20 + *param_1,&local_58);
    plVar3 = local_48;
    plVar2 = local_48;
    for (uVar7 = local_40; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 14046e310 FUN_14046e310 body=90 status=ok
// SIG undefined FUN_14046e310(void)

undefined8 FUN_14046e310(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 3;
  case 1:
    return 0x28;
  case 2:
    return 2;
  case 3:
    return 0x15;
  case 4:
    return 0xf;
  case 5:
    return 10;
  case 6:
    return 0xd;
  case 7:
    return 0x11;
  case 8:
    return 1;
  case 9:
    return 0x12;
  default:
    return 0;
  }
}



// FUNCTION 14046e3a0 FUN_14046e3a0 body=402 status=ok
// SIG undefined FUN_14046e3a0(void)

undefined8 FUN_14046e3a0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = UIntProperty::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  lVar2 = UBoolProperty::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 2;
  }
  lVar2 = UFloatProperty::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 1;
  }
  lVar2 = UStrProperty::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 3;
  }
  lVar2 = UStructProperty::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 4;
  }
  lVar2 = UObjectProperty::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar3 = 7;
  if (bVar1) {
    uVar3 = 5;
  }
  return uVar3;
}



// FUNCTION 14046e540 FUN_14046e540 body=9 status=ok
// SIG undefined FUN_14046e540(void)

undefined8 FUN_14046e540(void)

{
  return 0x3f800000;
}



// FUNCTION 14046e550 FUN_14046e550 body=21 status=ok
// SIG undefined FUN_14046e550(void)

undefined8 FUN_14046e550(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x268);
  }
  return 0;
}



// FUNCTION 14046e5b0 GetResourceDataSize body=4 status=ok
// SIG undefined GetResourceDataSize(void)

undefined4 TResourceArray<unsigned_char,0>::GetResourceDataSize(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 14046e5c0 FUN_14046e5c0 body=4 status=ok
// SIG undefined FUN_14046e5c0(void)

undefined4 FUN_14046e5c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// FUNCTION 14046e5d0 FUN_14046e5d0 body=68 status=ok
// SIG undefined FUN_14046e5d0(void)

undefined8 FUN_14046e5d0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar1 = (undefined8 *)(param_1 + 8);
  if (iVar2 < param_2) {
    *(int *)(param_1 + 0x10) = param_2;
    if (*(int *)(param_1 + 0x14) < param_2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar1,iVar2);
      return *puVar1;
    }
  }
  else if ((param_2 < iVar2) && (param_2 != iVar2)) {
    *(int *)(param_1 + 0x10) = param_2;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(puVar1);
  }
  return *puVar1;
}



// FUNCTION 14046e620 FUN_14046e620 body=311 status=ok
// SIG undefined FUN_14046e620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14046e620(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  longlong local_68;
  char local_54;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = APlayerStateGunfire::GetPrivateStaticClass();
  if (local_88 != 0) {
    lVar1 = APlayerStateGunfire::GetPrivateStaticClass();
    lVar2 = local_88;
    do {
      if (lVar2 == lVar1) goto LAB_14046e667;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  local_88 = 0;
LAB_14046e667:
  local_78[0] = 5;
  local_20 = '\0';
  local_80 = param_1;
  FUN_14044bc80(&local_70,&local_80,&local_88);
  FUN_14045a130(local_78);
  if (local_54 == '\0') {
    if (local_20 != '\0') {
      local_20 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_70,local_28);
      if (local_40 != 0) {
        FMemory::Free();
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
  }
  else {
    if (local_20 != '\0') {
      local_20 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_70,local_28);
      if (local_40 != 0) {
        FMemory::Free();
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
    local_48 = 0;
  }
  return local_48;
}



// FUNCTION 14046e760 GetBoundProgramCounterForTimerManager body=5 status=ok
// SIG undefined GetBoundProgramCounterForTimerManager(void)

undefined8
TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
::GetBoundProgramCounterForTimerManager(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 14046e770 GetFleetName body=30 status=ok
// SIG undefined GetFleetName(void)

undefined8 UFlareFleet::GetFleetName(longlong param_1,undefined8 param_2)

{
  FText::FText(param_2,param_1 + 0x40);
  return param_2;
}



// FUNCTION 14046e790 FUN_14046e790 body=431 status=ok
// SIG undefined FUN_14046e790(void)

ulonglong FUN_14046e790(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                       undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong in_RAX;
  float fVar3;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  
  puVar2 = param_5;
  param_4[0] = 0.0;
  param_4[1] = 0.0;
  *param_5 = 0;
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    if ((char)in_RAX != '\0') {
      in_RAX = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
      if ((char)in_RAX == '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),&local_28);
        in_RAX = (ulonglong)local_1c;
        *(ulonglong *)param_4 = CONCAT44((float)local_24,(float)local_28);
        *puVar2 = CONCAT44((float)in_RAX,(float)local_20);
        if (DAT_146b17150 != 0) {
          in_RAX = UObjectBase::IsValidLowLevel();
          if ((char)in_RAX != '\0') {
            in_RAX = DAT_146b17150;
            if (*(longlong *)(DAT_146b17150 + 0x7b0) != 0) {
              in_RAX = UGameViewportClient::IsFullScreenViewport();
              if ((char)in_RAX == '\0') {
                plVar1 = *(longlong **)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb0);
                in_RAX = DAT_146b17150;
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0x110))(plVar1,&param_5,0);
                  fVar3 = (float)(**(code **)(**(longlong **)
                                                (*(longlong *)
                                                  (*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb0) +
                                                0x50) + 0x1b8))();
                  in_RAX = (ulonglong)(uint)(int)((float)param_5._4_4_ * fVar3);
                  *param_4 = (float)(int)((float)(int)param_5 * fVar3) + *param_4;
                  param_4[1] = (float)(int)((float)param_5._4_4_ * fVar3) + param_4[1];
                }
              }
            }
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14046e940 FUN_14046e940 body=289 status=ok
// SIG undefined FUN_14046e940(void)

void FUN_14046e940(longlong param_1,uint param_2,int param_3,wchar_t **param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  wchar_t *local_28;
  int local_20;
  undefined4 local_1c;
  
  uVar1 = param_2 + param_3;
  iVar6 = *(int *)(param_1 + 0x20);
  uVar5 = iVar6 - 1;
  if (iVar6 == 0) {
    uVar5 = 0xffffffff;
  }
  pwVar7 = (wchar_t *)0x0;
  if (iVar6 == 0) {
    uVar5 = 0;
  }
  if (param_2 < uVar5) {
    uVar5 = param_2;
  }
  uVar2 = iVar6 - 1;
  if (iVar6 == 0) {
    uVar2 = 0;
  }
  uVar3 = uVar5;
  if ((uVar5 <= uVar1) && (uVar3 = uVar2, uVar1 < uVar2)) {
    uVar3 = uVar1;
  }
  if (iVar6 == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = *(undefined2 **)(param_1 + 0x18);
  }
  iVar4 = uVar3 - uVar5;
  local_28 = (wchar_t *)0x0;
  local_1c = 0;
  iVar6 = iVar4 + 1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  local_20 = iVar6;
  if ((0 < iVar6) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0), iVar6 = local_20,
     pwVar7 = local_28, 0 < local_20)) {
    wcsncpy(local_28,puVar8 + (int)uVar5,(longlong)iVar4);
    pwVar7[iVar4] = L'\0';
  }
  if (param_4 != &local_28) {
    if (*param_4 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *param_4 = pwVar7;
    *(int *)(param_4 + 1) = iVar6;
    *(undefined4 *)((longlong)param_4 + 0xc) = local_1c;
    return;
  }
  if (pwVar7 != (wchar_t *)0x0) {
    FMemory::Free(pwVar7);
  }
  return;
}



// FUNCTION 14046ea70 FUN_14046ea70 body=691 status=ok
// SIG undefined FUN_14046ea70(void)

void FUN_14046ea70(longlong param_1,uint param_2,int param_3,wchar_t **param_4)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  HKL pHVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  wchar_t **ppwVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint uVar11;
  uint uVar12;
  undefined2 *puVar13;
  wchar_t *local_50;
  uint local_48;
  undefined4 local_44;
  wchar_t *local_40;
  int local_38;
  undefined4 uStack_34;
  
  pwVar9 = (wchar_t *)0x0;
  uVar12 = 0;
  pHVar3 = GetKeyboardLayout(0);
  if (((ushort)pHVar3 & 0x3ff) == 4) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      iVar7 = *(int *)(param_1 + 0x20);
      uVar4 = param_2 + param_3;
      uVar11 = iVar7 - 1;
      if (iVar7 == 0) {
        uVar11 = uVar12;
      }
      if (param_2 < uVar11) {
        uVar11 = param_2;
      }
      uVar5 = iVar7 - 1;
      if (iVar7 == 0) {
        uVar5 = uVar12;
      }
      uVar6 = uVar11;
      if ((uVar11 <= uVar4) && (uVar6 = uVar5, uVar4 < uVar5)) {
        uVar6 = uVar4;
      }
      if (iVar7 == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = *(undefined2 **)(param_1 + 0x18);
      }
      iVar7 = uVar6 - uVar11;
      local_50 = (wchar_t *)0x0;
      local_44 = 0;
      local_48 = iVar7 + 1;
      if (iVar7 == 0) {
        local_48 = uVar12;
      }
      if ((0 < (int)local_48) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0), pwVar9 = local_50,
         0 < (int)local_48)) {
        wcsncpy(local_50,puVar13 + (int)uVar11,(longlong)iVar7);
        pwVar9[iVar7] = L'\0';
      }
      ppwVar8 = &local_50;
      bVar2 = false;
      bVar1 = true;
      pwVar10 = pwVar9;
      pwVar9 = local_40;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x40);
      _Src = *(void **)(param_1 + 0x38);
      local_40 = (wchar_t *)0x0;
      local_38 = iVar7;
      if (iVar7 == 0) {
        ppwVar8 = &local_40;
        uStack_34 = 0;
        bVar2 = true;
        bVar1 = false;
        pwVar10 = local_50;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,iVar7,0);
        pwVar9 = local_40;
        _guard_xfg_dispatch_icall_nop(local_40,_Src,(longlong)iVar7 * 2);
        ppwVar8 = &local_40;
        bVar2 = true;
        bVar1 = false;
        pwVar10 = local_50;
      }
    }
    if (param_4 != ppwVar8) {
      if (*param_4 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      pwVar9 = *ppwVar8;
      *ppwVar8 = (wchar_t *)0x0;
      *param_4 = pwVar9;
      *(undefined4 *)(param_4 + 1) = *(undefined4 *)(ppwVar8 + 1);
      ppwVar8[1] = (wchar_t *)0x0;
      *(undefined4 *)((longlong)param_4 + 0xc) = *(undefined4 *)((longlong)ppwVar8 + 0xc);
      pwVar10 = local_50;
      pwVar9 = local_40;
    }
    if ((bVar1) && (pwVar10 != (wchar_t *)0x0)) {
      FMemory::Free(pwVar10);
    }
    if (!bVar2) {
      return;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x20);
    uVar4 = param_2 + param_3;
    uVar11 = iVar7 - 1;
    if (iVar7 == 0) {
      uVar11 = 0;
    }
    if (param_2 < uVar11) {
      uVar11 = param_2;
    }
    uVar5 = iVar7 - 1;
    if (iVar7 == 0) {
      uVar5 = 0;
    }
    uVar6 = uVar11;
    if ((uVar11 <= uVar4) && (uVar6 = uVar5, uVar4 < uVar5)) {
      uVar6 = uVar4;
    }
    if (iVar7 == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = *(undefined2 **)(param_1 + 0x18);
    }
    iVar7 = uVar6 - uVar11;
    local_50 = (wchar_t *)0x0;
    local_44 = 0;
    uVar4 = iVar7 + 1;
    if (iVar7 == 0) {
      uVar4 = uVar12;
    }
    local_48 = uVar4;
    if ((0 < (int)uVar4) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0), uVar4 = local_48,
       pwVar9 = local_50, 0 < (int)local_48)) {
      wcsncpy(local_50,puVar13 + (int)uVar11,(longlong)iVar7);
      pwVar9[iVar7] = L'\0';
    }
    if (param_4 != &local_50) {
      if (*param_4 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_4 = pwVar9;
      *(uint *)(param_4 + 1) = uVar4;
      *(undefined4 *)((longlong)param_4 + 0xc) = local_44;
      return;
    }
  }
  if (pwVar9 != (wchar_t *)0x0) {
    FMemory::Free(pwVar9);
  }
  return;
}



// FUNCTION 14046ed40 FUN_14046ed40 body=106 status=ok
// SIG undefined FUN_14046ed40(void)

int FUN_14046ed40(longlong param_1)

{
  int iVar1;
  HKL pHVar2;
  
  pHVar2 = GetKeyboardLayout(0);
  if (((ushort)pHVar2 & 0x3ff) != 4) {
    iVar1 = *(int *)(param_1 + 0x20) + -1;
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar1 = 0;
    }
    return iVar1;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    iVar1 = *(int *)(param_1 + 0x40) + -1;
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar1 = 0;
    }
    return iVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    return *(int *)(param_1 + 0x20) + -1;
  }
  return 0;
}



// FUNCTION 14046edb0 FUN_14046edb0 body=315 status=ok
// SIG undefined FUN_14046edb0(void)

float * FUN_14046edb0(longlong param_1,float *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar6 = *(ulonglong *)(param_1 + 0x118);
  uVar9 = 0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  if (3 < uVar6) {
    piVar7 = (int *)(param_1 + 0x4c);
    lVar8 = (uVar6 - 4 >> 2) + 1;
    uVar9 = lVar8 * 4;
    do {
      fVar12 = fVar12 + 4.0;
      piVar1 = piVar7 + -7;
      fVar10 = (float)piVar7[-8] + fVar10 + (float)*piVar7 + (float)piVar7[8] + (float)piVar7[0x10];
      piVar2 = piVar7 + 1;
      piVar3 = piVar7 + 9;
      piVar4 = piVar7 + 0x11;
      piVar7 = piVar7 + 0x20;
      fVar11 = (float)*piVar1 + fVar11 + (float)*piVar2 + (float)*piVar3 + (float)*piVar4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (uVar9 < uVar6) {
    piVar7 = (int *)(param_1 + 0x30 + uVar9 * 0x20);
    lVar8 = uVar6 - uVar9;
    do {
      piVar1 = piVar7 + -1;
      fVar12 = fVar12 + 1.0;
      iVar5 = *piVar7;
      piVar7 = piVar7 + 8;
      fVar10 = fVar10 + (float)*piVar1;
      fVar11 = fVar11 + (float)iVar5;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (0.0 < fVar12) {
    param_2[1] = (1.0 / fVar12) * fVar11;
    *param_2 = (1.0 / fVar12) * fVar10;
    return param_2;
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  return param_2;
}



// FUNCTION 14046eef0 SetMonitoring body=6 status=ok
// SIG AKRESULT SetMonitoring(long param_1, bool param_2)

/* enum AKRESULT __cdecl AK::MemoryMgr::SetMonitoring(long,bool) */

AKRESULT __cdecl AK::MemoryMgr::SetMonitoring(long param_1,bool param_2)

{
                    /* 0x46eef0  428  ?SetMonitoring@MemoryMgr@AK@@YA?AW4AKRESULT@@J_N@Z
                       0x46eef0  436  ?SetPoolName@MemoryMgr@AK@@YA?AW4AKRESULT@@JPEB_W@Z */
  return 1;
}



// FUNCTION 14046ef00 FUN_14046ef00 body=141 status=ok
// SIG undefined FUN_14046ef00(void)

void FUN_14046ef00(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x198))();
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  uVar1 = (**(code **)(*plVar2 + 0x78))(plVar2);
  (**(code **)(*plVar2 + 0x70))(plVar2,2);
  FUN_140460180(plVar2,param_2,param_3);
  (**(code **)(*plVar2 + 0x70))(plVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00014046ef89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x40))(plVar2);
  return;
}



// FUNCTION 14046ef90 FUN_14046ef90 body=9 status=ok
// SIG undefined FUN_14046ef90(void)

void FUN_14046ef90(longlong param_1)

{
  FWeakObjectPtr::Get(param_1 + 8);
  return;
}



// FUNCTION 14046efa0 FUN_14046efa0 body=158 status=ok
// SIG undefined FUN_14046efa0(void)

ulonglong FUN_14046efa0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = *(ulonglong *)(param_1 + 0x118);
  uVar6 = 0;
  if (uVar5 != 0) {
    lVar3 = FUN_142950fd0();
    if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14046eff1;
  }
  uVar5 = uVar6;
LAB_14046eff1:
  plVar4 = (longlong *)FUN_1408c70a0(uVar5);
  if (plVar4 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar4 + 0x768))(plVar4);
    if (cVar2 != '\0') {
      lVar3 = FUN_14270bb10(plVar4);
      if (lVar3 != 0) {
        uVar6 = (ulonglong)*(uint *)(lVar3 + 0x108);
      }
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 14046f040 FUN_14046f040 body=97 status=ok
// SIG undefined FUN_14046f040(void)

undefined4 FUN_14046f040(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar1 = FUN_1428cfb10(uVar3);
    if (cVar1 == '\0') {
      lVar2 = (**(code **)(*param_1 + 0x2a0))(param_1);
      if (lVar2 != 0) {
        lVar2 = FUN_14270bb10(lVar2);
        if (lVar2 != 0) {
          return *(undefined4 *)(lVar2 + 0x108);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14046f0b0 FUN_14046f0b0 body=174 status=ok
// SIG undefined FUN_14046f0b0(void)

undefined8 FUN_14046f0b0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_18;
  longlong *local_10;
  
  FUN_14048f290(param_1,&local_18);
  if (local_18 != 0) {
    cVar5 = FWeakObjectPtr::IsValid(local_18 + 0x388);
    if (cVar5 != '\0') {
      lVar6 = FWeakObjectPtr::Get(local_18 + 0x388);
      uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 0x200) + 8);
      goto LAB_14046f0f8;
    }
  }
  uVar7 = 0;
LAB_14046f0f8:
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 14046f160 FUN_14046f160 body=143 status=ok
// SIG undefined FUN_14046f160(void)

undefined8 FUN_14046f160(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_18;
  longlong *local_10;
  
  FUN_14048f390(param_1,&local_18);
  plVar5 = local_10;
  if (local_18 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(longlong *)(local_18 + 0x240) + 8);
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 14046f210 FUN_14046f210 body=4 status=ok
// SIG undefined FUN_14046f210(void)

undefined4 FUN_14046f210(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// FUNCTION 14046f220 FUN_14046f220 body=561 status=ok
// SIG undefined FUN_14046f220(void)

undefined8 * FUN_14046f220(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar8 = iVar6 == 0;
    if (bVar8) {
      *(int *)(plVar4 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar6 == (int)plVar4[1];
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar8) {
        if (plVar4 == (longlong *)0x0) {
          return param_2;
        }
        lVar5 = *(longlong *)(param_1 + 8);
        if (lVar5 != 0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_48 = lVar5;
          local_40 = plVar4;
          FUN_141899f20(DAT_1469f4590,&local_38,&local_48);
          LOCK();
          plVar1 = plVar4 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
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
          bVar8 = local_38 == 0;
          if (bVar8) {
            puVar7 = &local_58;
            local_58 = 0;
            plStack_50 = (longlong *)0x0;
          }
          else {
            puVar7 = (undefined8 *)FUN_14183ac60(local_38,local_28);
          }
          if (param_2 != puVar7) {
            *param_2 = *puVar7;
            *puVar7 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,puVar7 + 1);
          }
          plVar1 = plStack_50;
          if ((bVar8) && (plStack_50 != (longlong *)0x0)) {
            LOCK();
            plVar3 = plStack_50 + 1;
            lVar5 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plStack_50)(plStack_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plStack_50 + 8))(plStack_50,1);
              }
            }
          }
          if ((!bVar8) && (local_20 != (longlong *)0x0)) {
            LOCK();
            plVar1 = local_20 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_20)(local_20);
              LOCK();
              piVar2 = (int *)((longlong)local_20 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_20 + 8))(local_20,1);
              }
            }
          }
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_30 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar2 = (int *)((longlong)local_30 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
        }
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return param_2;
        }
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return param_2;
        }
        (**(code **)(*plVar4 + 8))(plVar4,1);
        return param_2;
      }
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar8 = iVar6 == 0;
      if (bVar8) {
        *(int *)(plVar4 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 14046f460 FUN_14046f460 body=272 status=ok
// SIG undefined FUN_14046f460(void)

undefined8 * FUN_14046f460(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar10 = 0;
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    if (cVar8 != '\0') {
      puVar9 = (undefined8 *)FUN_14046f220(*(undefined8 *)(param_1 + 8),local_18);
      bVar6 = true;
      bVar5 = false;
      uVar10 = *puVar9;
      goto LAB_14046f4c2;
    }
  }
  puVar9 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar6 = false;
  bVar5 = true;
LAB_14046f4c2:
  *param_2 = uVar10;
  param_2[1] = puVar9[1];
  puVar9[1] = 0;
  *puVar9 = 0;
  plVar3 = plStack_20;
  if (bVar5) {
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  if ((bVar6) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14046f570 FUN_14046f570 body=17 status=ok
// SIG undefined FUN_14046f570(void)

longlong FUN_14046f570(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x120) != 0) {
    return *(longlong *)(param_1 + 0x120);
  }
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 4 & 1) == 0)) &&
     (lVar3 = (**(code **)(*plVar1 + 0x148))(), lVar3 != 0)) {
    return lVar3;
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar4 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 14046f590 FUN_14046f590 body=149 status=ok
// SIG undefined FUN_14046f590(void)

undefined8 * FUN_14046f590(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 0x3c;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar1 = local_28;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_28,0x3c,"Material\'/CohtmlPlugin/CohtmlHUDMaterial.CohtmlHUDMaterial\'",0x3c,0x3f
            );
  *param_1 = 0;
  local_10 = (undefined4)local_20;
  param_1[1] = 0;
  local_c = local_20._4_4_;
  param_1[2] = 0;
  local_18 = uVar1;
  FUN_1417978e0(param_1,&local_18);
  return param_1;
}



// FUNCTION 14046f630 FUN_14046f630 body=335 status=ok
// SIG undefined FUN_14046f630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14046f630(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_178;
  undefined8 local_170;
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
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  uint local_e4;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b8;
  undefined8 local_b0;
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
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  uint local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  bVar2 = (*(byte *)(param_1 + 0x376) & 1) == 0;
  if (bVar2) {
    local_e4 = local_e4 & 0xffffff00;
    puVar1 = local_198;
    local_190 = 0;
    local_188 = 0;
    local_178 = 0;
    local_170 = 0;
    local_118 = 0;
    local_110 = 0;
    local_198[0] = 1;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0x20702;
  }
  else {
    local_24 = local_24 & 0xffffff00;
    puVar1 = local_d8;
    local_d8[0] = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0x20702;
  }
  FReply::FReply(param_2,puVar1);
  if (bVar2) {
    FUN_140438c20(local_198);
  }
  else {
    FUN_140438c20(local_d8);
  }
  return param_2;
}



// FUNCTION 14046f780 FUN_14046f780 body=485 status=ok
// SIG undefined FUN_14046f780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14046f780(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined1 *puVar9;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_178;
  undefined8 local_170;
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
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  uint local_e4;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b8;
  undefined8 local_b0;
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
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  uint local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_1b8 = *(undefined8 *)(param_3 + 0x18);
  local_1b0 = *(undefined8 *)(param_3 + 0x20);
  local_1a8 = *(longlong **)(param_3 + 0x28);
  if (local_1a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
    UNLOCK();
  }
  if ((*(byte *)(param_1 + 0x376) & 2) == 0) {
LAB_14046f7f1:
    if ((*(byte *)(param_1 + 0x376) & 1) != 0) {
      cVar8 = FKey::IsGamepadKey(&local_1b8);
      if (cVar8 == '\0') goto LAB_14046f808;
    }
    local_198[0] = 1;
    local_e4 = local_e4 & 0xffffff00;
    puVar9 = local_198;
    local_190 = 0;
    local_188 = 0;
    local_178 = 0;
    bVar5 = false;
    local_170 = 0;
    local_118 = 0;
    local_110 = 0;
    bVar4 = true;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0x20702;
  }
  else {
    cVar8 = FKey::IsGamepadKey(&local_1b8);
    if (cVar8 == '\0') goto LAB_14046f7f1;
LAB_14046f808:
    local_d8[0] = 0;
    local_24 = local_24 & 0xffffff00;
    local_d0 = 0;
    local_c8 = 0;
    bVar4 = false;
    bVar5 = true;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0x20702;
    puVar9 = local_d8;
  }
  FReply::FReply(param_2,puVar9);
  if (bVar4) {
    FUN_140438c20(local_198);
  }
  if (bVar5) {
    FUN_140438c20(local_d8);
  }
  plVar7 = local_1a8;
  if (local_1a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1a8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_1a8)(local_1a8);
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
  return param_2;
}



// FUNCTION 14046f970 FUN_14046f970 body=940 status=ok
// SIG undefined FUN_14046f970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14046f970(undefined8 param_1,ulonglong param_2,float *param_3,char param_4,longlong param_5,
             undefined8 *param_6)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_f8 [32];
  char local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  float *local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  longlong local_98;
  char local_84;
  longlong local_78;
  longlong local_70;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_b0 = param_6;
  local_d8 = param_4;
  local_c0 = param_3;
  uVar3 = APlayerStateGunfire::GetPrivateStaticClass();
  uVar11 = 0;
  local_d0 = uVar11;
  if (uVar3 != 0) {
    uVar4 = APlayerStateGunfire::GetPrivateStaticClass();
    uVar8 = uVar3;
    do {
      local_d0 = uVar3;
      if (uVar8 == uVar4) break;
      uVar8 = *(ulonglong *)(uVar8 + 0x30);
      local_d0 = uVar11;
    } while (uVar8 != 0);
  }
  local_a8[0] = 5;
  local_50 = '\0';
  local_c8 = param_2;
  FUN_14044bc80(&local_a0,&local_c8,&local_d0);
  FUN_14045a130(local_a8);
  if (local_84 == '\0') {
    plVar12 = (longlong *)(local_78 + 0x488);
    if (local_50 != '\0') {
      local_50 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        FMemory::Free();
      }
    }
  }
  else {
    if (local_50 != '\0') {
      local_50 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        FMemory::Free();
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146850a08) &&
       (_Init_thread_header(&DAT_146850a08), DAT_146850a08 == -1)) {
      DAT_1468509f8 = 0;
      _DAT_146850a00 = 0;
      atexit((_func_5014 *)&LAB_143e3e3e0);
      _Init_thread_footer(&DAT_146850a08);
    }
    plVar12 = &DAT_1468509f8;
  }
  do {
    iVar10 = (int)uVar11;
    if ((iVar10 < 0) || ((int)plVar12[1] <= iVar10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    lVar9 = (longlong)iVar10;
    cVar1 = FWeakObjectPtr::IsValid(*plVar12 + lVar9 * 8);
    if (cVar1 != '\0') {
      lVar5 = FWeakObjectPtr::Get(*plVar12 + lVar9 * 8);
      uVar3 = *(ulonglong *)(lVar5 + 0x120);
      if (uVar3 == 0) {
        uVar3 = FUN_1423407b0(lVar5);
      }
      if (uVar3 == param_2) {
        lVar6 = FWeakObjectPtr::Get(*plVar12 + lVar9 * 8);
        lVar9 = *(longlong *)(lVar6 + 0x10);
        lVar5 = *(longlong *)(lVar6 + 0x118);
        lVar7 = FUN_140490eb0();
        if (lVar7 == lVar9) {
LAB_14046fb93:
          uVar3 = *(ulonglong *)(*(longlong *)(lVar6 + 0x200) + 8);
          if ((*(char *)(lVar6 + 0x1b9) != '\0') && (uVar3 != 0)) {
            if (lVar5 == 0) {
LAB_14046fbf0:
              lVar5 = 0;
            }
            else {
              lVar9 = UFGReplicationGraph::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_14046fbf0;
            }
            fVar15 = *local_c0 - (float)(int)*(undefined8 *)(lVar5 + 0x5f4);
            fVar14 = local_c0[1] - (float)(int)((ulonglong)*(undefined8 *)(lVar5 + 0x5f4) >> 0x20);
            *local_c0 = fVar15;
            local_c0[1] = fVar14;
            if ((0.0 <= fVar15) && (0.0 <= fVar14)) {
              fVar13 = 0.0;
              fVar16 = 0.0;
              if (local_d8 != '\0') {
                fVar13 = (float)*(int *)(param_5 + 0x130);
                fVar16 = (float)*(int *)(param_5 + 0x134);
              }
              local_d0 = CONCAT44(fVar14 - fVar16,fVar15 - fVar13);
              local_c8 = uVar3;
              local_b8 = lVar6;
              cVar1 = (*(code *)*local_b0)(local_b0[1],&local_d0,&local_b8,&local_c8);
              if (cVar1 != '\0') {
                return 1;
              }
            }
          }
        }
        else if (lVar5 != 0) {
          lVar9 = FUN_142950fd0();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) goto LAB_14046fb93;
        }
      }
    }
    uVar11 = (ulonglong)(iVar10 + 1);
  } while( true );
}



// FUNCTION 14046fd20 FUN_14046fd20 body=2531 status=ok
// SIG undefined FUN_14046fd20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14046fd20(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,char param_5,
             longlong param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  byte bVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar27 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_368 [32];
  longlong **local_348;
  float *local_340;
  undefined8 local_338;
  undefined4 *local_330;
  undefined4 *local_328;
  longlong *local_318;
  undefined4 local_310;
  undefined4 local_30c;
  uint local_308;
  undefined4 local_300 [2];
  float local_2f8;
  float local_2f4;
  float local_2f0;
  byte *local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  longlong *local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0 [2];
  int local_298;
  float local_290;
  float local_28c;
  float local_288;
  longlong *local_280;
  ulonglong local_278;
  undefined8 *local_270;
  byte local_268 [4];
  undefined4 local_264;
  uint local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  longlong *local_190;
  int local_188;
  undefined1 local_184;
  undefined1 local_180 [72];
  float local_138 [5];
  undefined2 local_124;
  undefined1 local_122;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined2 local_114;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_d0;
  undefined8 local_c8;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  local_270 = param_7;
  local_198 = param_8;
  if (param_5 != '\0') {
    lVar8 = FUN_140451540(local_180,*(undefined8 *)(param_3[0xe] + 0xb0),
                          *(undefined8 *)(param_2 + 0x1b8),param_3[0xe] + 0xa0);
    *(uint *)(lVar8 + 0x3c) = *(uint *)(lVar8 + 0x3c) | 1;
    FUN_142743490(local_268,lVar8);
    local_338 = (undefined4 *)((ulonglong)local_338._4_4_ << 0x20);
    local_340 = (float *)0x0;
    local_348 = *(longlong ***)(param_3[0xe] + 0xb0);
    lVar8 = (**(code **)(*param_3 + 0x288))(param_3,local_268,&local_290,&local_2c0);
    if (lVar8 == 0) {
      (*(code *)*param_7)(param_7[1]);
      FUN_142745e10(local_268);
      return 1;
    }
    local_338 = (undefined4 *)CONCAT71(local_338._1_7_,1);
    local_340 = &local_2d0;
    local_348 = (longlong **)&local_2f8;
    FUN_142749ba0(param_4,param_6 + 0x130,lVar8 + 0x550,lVar8 + 0x410);
    FUN_142745e10(local_268);
  }
  uVar15 = 0;
  cVar6 = '\0';
  local_2e8 = (byte *)0x0;
  local_2e0 = 0;
  local_138[2] = 0.0;
  local_138[3] = 0.0;
  local_f0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_120 = 0;
  local_138[4] = 9.21942e-41;
  local_124 = 0;
  local_114 = 0x101;
  local_11c = 0;
  local_122 = 0;
  local_118 = 0;
  local_318 = (longlong *)0x0;
  local_2b8 = local_2c8 * 2097152.0 + local_2f0;
  local_1b8 = CONCAT44(local_2cc * 2097152.0 + local_2f4,local_2d0 * 2097152.0 + local_2f8);
  local_138[0] = 0.0;
  local_138[1] = 0.0;
  local_1b0 = local_2b8;
  if (*(char *)(param_1 + 0x377) == '\0') {
    _guard_xfg_dispatch_icall_nop(local_268,0,0x90);
    local_2e0 = CONCAT44(local_2e0._4_4_,1);
    TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(&local_2e8,0);
    *local_2e8 = *local_2e8 & 0xfc;
    *(uint *)(local_2e8 + 8) = *(uint *)(local_2e8 + 8) & 0xfffffffe;
    *(undefined4 *)(local_2e8 + 4) = local_264;
    *(undefined4 *)(local_2e8 + 0x10) = local_258;
    *(undefined8 *)(local_2e8 + 0x20) = local_248;
    *(undefined8 *)(local_2e8 + 0x2c) = local_23c;
    *(undefined8 *)(local_2e8 + 0x38) = local_230;
    *(undefined8 *)(local_2e8 + 0x44) = local_224;
    *(undefined8 *)(local_2e8 + 0x50) = local_218;
    *(undefined8 *)(local_2e8 + 0x14) = local_254;
    *(undefined4 *)(local_2e8 + 0x1c) = local_24c;
    *(undefined4 *)(local_2e8 + 0x28) = local_240;
    *(undefined4 *)(local_2e8 + 0x34) = local_234;
    *(undefined4 *)(local_2e8 + 0x40) = local_228;
    *(undefined4 *)(local_2e8 + 0x4c) = local_21c;
    *(undefined4 *)(local_2e8 + 0x58) = local_210;
    *(undefined4 *)(local_2e8 + 0x60) = local_208;
    *(undefined4 *)(local_2e8 + 0x5c) = local_20c;
    local_2e8[0xc] = 0;
    local_2e8[0xd] = 0;
    local_2e8[0xe] = 0x80;
    local_2e8[0xf] = 0x3f;
    *(undefined4 *)(local_2e8 + 100) = local_204;
    *(undefined4 *)(local_2e8 + 0x68) = local_200;
    *(undefined4 *)(local_2e8 + 0x6c) = local_1fc;
    *(undefined4 *)(local_2e8 + 0x70) = local_1f8;
    *(undefined4 *)(local_2e8 + 0x74) = local_1f4;
    *(undefined4 *)(local_2e8 + 0x78) = local_1f0;
    *(undefined8 *)(local_2e8 + 0x80) = local_1e8;
    *(undefined8 *)(local_2e8 + 0x88) = local_1e0;
    local_340 = local_138;
    local_348 = &local_318;
    local_318._0_5_ = (uint5)(uint)(1 << ((byte)*(undefined4 *)(param_1 + 0x364) & 0x1f));
    cVar6 = UWorld::LineTraceSingleByObjectType(param_2,local_2e8,&local_2f8,&local_1b8);
  }
  else if (*(char *)(param_1 + 0x377) == '\x01') {
    local_340 = local_138;
    local_348 = &local_318;
    local_318 = (longlong *)(ulonglong)(uint)(1 << ((byte)*(undefined4 *)(param_1 + 0x364) & 0x1f));
    cVar6 = UWorld::LineTraceMultiByObjectType(param_2,&local_2e8,&local_2f8,&local_1b8);
  }
  local_308 = 0;
  uVar19 = uVar15;
  if (cVar6 != '\0') {
    while( true ) {
      local_278 = uVar15;
      if ((int)local_2e0 <= (int)(uint)uVar19) break;
      bVar14 = local_268[0] ^ (local_2e8[uVar15] ^ local_268[0]) & 1;
      local_268[0] = (local_2e8[uVar15] ^ bVar14) & 2 ^ bVar14;
      local_264 = *(undefined4 *)(local_2e8 + uVar15 + 4);
      local_260 = local_260 ^ (*(uint *)(local_2e8 + uVar15 + 8) ^ local_260) & 1;
      local_25c = *(undefined4 *)(local_2e8 + uVar15 + 0xc);
      local_258 = *(undefined4 *)(local_2e8 + uVar15 + 0x10);
      local_254 = *(undefined8 *)(local_2e8 + uVar15 + 0x14);
      local_24c = *(undefined4 *)(local_2e8 + uVar15 + 0x1c);
      local_248 = *(undefined8 *)(local_2e8 + uVar15 + 0x20);
      local_240 = *(undefined4 *)(local_2e8 + uVar15 + 0x28);
      local_23c = *(undefined8 *)(local_2e8 + uVar15 + 0x2c);
      local_234 = *(undefined4 *)(local_2e8 + uVar15 + 0x34);
      local_230 = *(undefined8 *)(local_2e8 + uVar15 + 0x38);
      local_228 = *(undefined4 *)(local_2e8 + uVar15 + 0x40);
      local_224 = *(undefined8 *)(local_2e8 + uVar15 + 0x44);
      local_21c = *(undefined4 *)(local_2e8 + uVar15 + 0x4c);
      local_218 = *(undefined8 *)(local_2e8 + uVar15 + 0x50);
      local_210 = *(undefined4 *)(local_2e8 + uVar15 + 0x58);
      local_20c = *(undefined4 *)(local_2e8 + uVar15 + 0x5c);
      local_208 = *(undefined4 *)(local_2e8 + uVar15 + 0x60);
      local_204 = *(undefined4 *)(local_2e8 + uVar15 + 100);
      local_200 = *(undefined4 *)(local_2e8 + uVar15 + 0x68);
      local_1fc = *(undefined4 *)(local_2e8 + uVar15 + 0x6c);
      local_1f8 = *(undefined4 *)(local_2e8 + uVar15 + 0x70);
      local_1f4 = *(undefined4 *)(local_2e8 + uVar15 + 0x74);
      local_1f0 = *(undefined4 *)(local_2e8 + uVar15 + 0x78);
      local_1e8 = *(undefined8 *)(local_2e8 + uVar15 + 0x80);
      local_1e0 = *(undefined8 *)(local_2e8 + uVar15 + 0x88);
      cVar6 = FUN_14044aea0(&local_1fc,0);
      if (cVar6 != '\0') {
        (*(code *)*local_270)(local_270[1]);
        uVar9 = 1;
        goto LAB_140470679;
      }
      local_2b0 = (longlong *)0x0;
      local_2a8 = 0;
      uVar9 = FWeakObjectPtr::Get(&local_1fc);
      FUN_14044ecb0(uVar9,&local_2b0,0);
      plVar13 = local_2b0;
      if ((int)local_2a8 == 0) {
        (*(code *)*local_270)(local_270[1]);
LAB_14047064c:
        if (plVar13 != (longlong *)0x0) {
          FMemory::Free(plVar13);
        }
        uVar9 = 1;
        goto LAB_140470679;
      }
      plVar13 = local_2b0 + (int)local_2a8;
      local_280 = local_2b0;
      plVar17 = local_2b0;
      uVar18 = (uint)uVar19;
      local_318 = plVar13;
      if (local_2b0 != plVar13) {
        do {
          lVar8 = *plVar17;
          if (((*(char *)(lVar8 + 0x1b9) != '\0') &&
              (local_280 = plVar17, cVar6 = FUN_140468e90(lVar8), plVar13 = local_318, cVar6 != '\0'
              )) && (*(longlong *)(*(longlong *)(lVar8 + 0x200) + 8) != 0)) {
            local_298 = *(int *)(lVar8 + 0x1c8);
            if (local_298 == 0) {
              (*(code *)*local_198)(local_198[1]);
              plVar13 = local_2b0;
              goto LAB_14047064c;
            }
            iVar16 = 0;
            do {
              lVar2 = *(longlong *)(lVar8 + 0x1c0);
              lVar10 = (longlong)iVar16;
              local_2d8 = *(undefined4 *)(lVar2 + lVar10 * 0x18);
              local_2d4 = *(undefined4 *)(lVar2 + 4 + lVar10 * 0x18);
              cVar6 = FWeakObjectPtr::IsValid(&local_2d8);
              if (cVar6 != '\0') {
                iVar7 = 0;
                lVar11 = FWeakObjectPtr::Get(&local_2d8);
                if (*(int *)(param_1 + 0x36c) == 0) {
                  iVar7 = *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x728) + 0x38) + 8) + -1;
                }
                else if (*(int *)(param_1 + 0x36c) == 1) {
                  iVar7 = *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x728) + 0x38) + 8) / 2;
                }
                lVar2 = *(longlong *)(lVar2 + 8 + lVar10 * 0x18);
                local_184 = 1;
                lVar10 = (longlong)iVar7 * 0x30;
                lVar11 = lVar2 + 0x20 + lVar10;
                local_190 = *(longlong **)(lVar10 + lVar2);
                local_188 = *(int *)(lVar10 + 8 + lVar2);
                if (((*(int *)(lVar10 + 0x18 + lVar2) != 0) && (local_188 != 0)) &&
                   (*(int *)(lVar11 + 8) != 0)) {
                  lVar12 = FWeakObjectPtr::Get(&local_2d8);
                  auVar1 = *(undefined1 (*) [16])(lVar12 + 0x230);
                  fVar3 = auVar1._0_4_;
                  fVar4 = auVar1._4_4_;
                  fVar5 = auVar1._8_4_;
                  fVar31 = *(float *)(lVar12 + 0x210) * _DAT_1468509c0;
                  fVar32 = *(float *)(lVar12 + 0x214) * fRam00000001468509c4;
                  fVar33 = *(float *)(lVar12 + 0x218) * fRam00000001468509c8;
                  fVar34 = *(float *)(lVar12 + 0x21c) * fRam00000001468509cc;
                  auVar27 = rcpps(unaff_XMM8,auVar1);
                  fVar23 = (float)((uint)(local_2f8 - *(float *)(lVar12 + 0x220)) & _DAT_146850570);
                  fVar24 = (float)((uint)(local_2f4 - *(float *)(lVar12 + 0x224)) &
                                  uRam0000000146850574);
                  fVar25 = (float)((uint)(local_2f0 - *(float *)(lVar12 + 0x228)) &
                                  uRam0000000146850578);
                  fVar20 = fVar25 * fVar32 - fVar24 * fVar33;
                  fVar21 = fVar23 * fVar33 - fVar25 * fVar31;
                  fVar22 = fVar24 * fVar31 - fVar23 * fVar32;
                  fVar26 = auVar27._0_4_;
                  fVar28 = auVar27._4_4_;
                  fVar29 = auVar27._8_4_;
                  fVar30 = auVar27._12_4_;
                  fVar20 = fVar20 + fVar20;
                  fVar21 = fVar21 + fVar21;
                  fVar22 = fVar22 + fVar22;
                  fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar3;
                  fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar4;
                  fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar5;
                  fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * auVar1._12_4_;
                  unaff_XMM8._0_4_ = (fVar26 + fVar26) - fVar26 * fVar26 * fVar3;
                  unaff_XMM8._4_4_ = (fVar28 + fVar28) - fVar28 * fVar28 * fVar4;
                  unaff_XMM8._8_4_ = (fVar29 + fVar29) - fVar29 * fVar29 * fVar5;
                  unaff_XMM8._12_4_ = (fVar30 + fVar30) - fVar30 * fVar30 * auVar1._12_4_;
                  local_2c0 = ((fVar22 * fVar32 - fVar21 * fVar33) + fVar20 * fVar34 + fVar23) *
                              (float)(-(uint)((float)((uint)fVar3 & _DAT_146850580) <=
                                             _DAT_1468509b0) & (uint)unaff_XMM8._0_4_ ^
                                     (uint)unaff_XMM8._0_4_);
                  local_2bc = ((fVar20 * fVar33 - fVar22 * fVar31) + fVar21 * fVar34 + fVar24) *
                              (float)(-(uint)((float)((uint)fVar4 & uRam0000000146850584) <=
                                             fRam00000001468509b4) & (uint)unaff_XMM8._4_4_ ^
                                     (uint)unaff_XMM8._4_4_);
                  local_2b8 = ((fVar21 * fVar31 - fVar20 * fVar32) + fVar22 * fVar34 + fVar25) *
                              (float)(-(uint)((float)((uint)fVar5 & uRam0000000146850588) <=
                                             fRam00000001468509b8) & (uint)unaff_XMM8._8_4_ ^
                                     (uint)unaff_XMM8._8_4_);
                  fVar20 = local_2c8 * fVar32 - local_2cc * fVar33;
                  fVar21 = local_2d0 * fVar33 - local_2c8 * fVar31;
                  fVar22 = local_2cc * fVar31 - local_2d0 * fVar32;
                  fVar20 = fVar20 + fVar20;
                  fVar21 = fVar21 + fVar21;
                  fVar22 = fVar22 + fVar22;
                  local_328 = &local_310;
                  local_330 = &local_30c;
                  local_338 = local_300;
                  local_340 = (float *)CONCAT44(local_340._4_4_,*(undefined4 *)(param_1 + 0x370));
                  local_348 = &local_190;
                  local_290 = ((fVar22 * fVar32 - fVar21 * fVar33) + fVar20 * fVar34 + local_2d0) *
                              (float)(-(uint)((float)((uint)fVar3 & _DAT_146850580) <=
                                             _DAT_1468509b0) & (uint)unaff_XMM8._0_4_ ^
                                     (uint)unaff_XMM8._0_4_);
                  local_28c = ((fVar20 * fVar33 - fVar22 * fVar31) + fVar21 * fVar34 + local_2cc) *
                              (float)(-(uint)((float)((uint)fVar4 & uRam0000000146850584) <=
                                             fRam00000001468509b4) & (uint)unaff_XMM8._4_4_ ^
                                     (uint)unaff_XMM8._4_4_);
                  local_288 = ((fVar21 * fVar31 - fVar20 * fVar32) + fVar22 * fVar34 + local_2c8) *
                              (float)(-(uint)((float)((uint)fVar5 & uRam0000000146850588) <=
                                             fRam00000001468509b8) & (uint)unaff_XMM8._8_4_ ^
                                     (uint)unaff_XMM8._8_4_);
                  cVar6 = FUN_140471d10(&local_2c0,&local_290,lVar10 + lVar2 + 0x10,lVar11);
                  if (cVar6 != '\0') {
                    FUN_14045ed80(*(undefined4 *)(param_1 + 0x368),&local_30c,&local_310);
                    local_2a0[0] = local_310;
                    local_1a8 = *(undefined8 *)(*(longlong *)(lVar8 + 0x200) + 8);
                    local_348 = (longlong **)local_2a0;
                    local_300[0] = local_30c;
                    local_1a0 = lVar8;
                    cVar6 = (*(code *)*param_9)(param_9[1],&local_1a0,&local_1a8,local_300);
                    plVar13 = local_2b0;
                    if (cVar6 != '\0') goto LAB_14047064c;
                  }
                }
              }
              iVar16 = iVar16 + 1;
              plVar13 = local_318;
              plVar17 = local_280;
            } while (iVar16 != local_298);
          }
          local_280 = plVar17 + 1;
          uVar15 = local_278;
          plVar17 = local_280;
          uVar18 = local_308;
        } while (local_280 != plVar13);
      }
      if (local_2b0 != (longlong *)0x0) {
        FMemory::Free(local_2b0);
      }
      local_308 = uVar18 + 1;
      uVar15 = uVar15 + 0x90;
      uVar19 = (ulonglong)local_308;
    }
  }
  uVar9 = 0;
LAB_140470679:
  if (local_d0 != 0) {
    FMemory::Free();
  }
  if (local_f0 != 0) {
    FMemory::Free();
  }
  if (local_2e8 != (byte *)0x0) {
    FMemory::Free();
  }
  return uVar9;
}



// FUNCTION 140470730 FUN_140470730 body=160 status=ok
// SIG undefined FUN_140470730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140470730(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x40) != '\0') {
    iVar2 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar2 = 0;
      puVar1 = &DAT_143f3eda8;
    }
    else {
      puVar1 = (undefined2 *)*param_3;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,puVar1);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
              (*(longlong **)(param_1 + 8),param_2,local_40,iVar2);
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1404707d0 FUN_1404707d0 body=153 status=ok
// SIG undefined FUN_1404707d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404707d0(longlong param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x40) != '\0') {
    iVar2 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar2 = 0;
      puVar1 = &DAT_143f3eda8;
    }
    else {
      puVar1 = (undefined2 *)*param_2;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_b8,puVar1);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),local_30,iVar2);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140470890 Handled body=126 status=ok
// SIG undefined Handled(void)

undefined1 * FReply::Handled(undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
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
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_1 + 0xb0) = 0x20702;
  return param_1;
}



// FUNCTION 140470910 FUN_140470910 body=15 status=ok
// SIG undefined FUN_140470910(void)

undefined1 FUN_140470910(longlong param_1)

{
  return *(undefined1 *)(*(longlong *)(param_1 + 0x200) + 0x130);
}



// FUNCTION 140470920 FUN_140470920 body=28 status=ok
// SIG undefined FUN_140470920(void)

undefined1 FUN_140470920(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    return *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240) + 0x130);
  }
  return 0;
}



// FUNCTION 140470940 FUN_140470940 body=168 status=ok
// SIG undefined FUN_140470940(void)

bool FUN_140470940(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    return plVar6 == param_2;
  }
  return plVar6 == param_2;
}



// FUNCTION 1404709f0 FUN_1404709f0 body=30 status=ok
// SIG undefined FUN_1404709f0(void)

bool FUN_1404709f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  return lVar1 == param_2;
}



// FUNCTION 140470a10 FUN_140470a10 body=456 status=ok
// SIG undefined FUN_140470a10(void)

void FUN_140470a10(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    local_res10 = param_1;
    FUN_140466b70(&local_res10,2,local_res20);
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar9 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar9 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar9);
    plVar6 = plVar9;
  }
  plVar9 = (longlong *)plVar6[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)*plVar6;
    if (plVar9 == (longlong *)0x0) {
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar7 = 0x1f;
        do {
          puVar2 = puVar8 + 0x20;
          *puVar8 = puVar2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar2;
        } while (lVar7 != 0);
        *puVar2 = 0;
      }
      plVar9 = (longlong *)plVar6[1];
      iVar10 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar6[1] = (longlong)plVar9;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar10 = (int)plVar6[2];
  }
  plVar6[1] = *plVar9;
  *(int *)(plVar6 + 2) = iVar10 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *(undefined1 *)(plVar9 + 3) = 0;
  *plVar9 = (longlong)&PTR_FUN_143f4cea8;
  plVar9[4] = 0;
  plVar9[2] = param_1;
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res18 = lVar7;
  FUN_14048a3d0(plVar9,0,0xff,1,0,0);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res18);
    }
  }
  return;
}



// FUNCTION 140470be0 FUN_140470be0 body=345 status=ok
// SIG undefined FUN_140470be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140470be0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 *local_78;
  longlong local_68 [2];
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
  local_34 = 0;
  local_78 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  lVar7 = 0;
  local_88 = *(undefined4 *)(param_1 + 0x40);
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_48 = 1;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_80 = 1;
  (**(code **)(*DAT_146ab6358 + 0x4f0))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x44));
  plVar1 = (longlong *)(param_1 + 0x30);
  if (plVar1 != local_68) {
    puVar4 = (undefined8 *)*plVar1;
    *plVar1 = local_68[0];
    local_68[0] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(puVar4 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
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
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return;
}



// FUNCTION 140470d40 FUN_140470d40 body=179 status=ok
// SIG undefined FUN_140470d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140470d40(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_48 = 1;
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_70 = &local_58;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_78 = 1;
  (**(code **)(*DAT_146ab6358 + 0x490))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x38));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return;
}



// FUNCTION 140470e00 FUN_140470e00 body=1338 status=ok
// SIG undefined FUN_140470e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140470e00(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong local_250;
  undefined4 local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined1 local_228;
  undefined1 local_220;
  longlong local_218;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong *plStack_1e8;
  undefined1 local_1e0;
  undefined1 local_1df;
  undefined8 local_1d8;
  undefined4 local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong local_170;
  longlong *plStack_168;
  undefined1 local_158 [272];
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_208 = param_4;
  local_204 = param_3;
  local_200 = param_2;
  uVar9 = (**(code **)(*param_1 + 0x148))();
  iVar8 = FUN_1428cf800(uVar9);
  if (iVar8 != 1) {
    plVar10 = (longlong *)(**(code **)(*param_1 + 0x6e8))(param_1,local_198);
    plVar3 = param_1 + 0x93;
    if (plVar3 != plVar10) {
      *plVar3 = *plVar10;
      *plVar10 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x94,plVar10 + 1);
    }
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_190 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)local_190 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_190 + 8))(local_190,1);
        }
      }
    }
    cVar6 = UObjectBase::IsValidLowLevel(DAT_146b17150);
    if (cVar6 != '\0') {
      plVar10 = (longlong *)param_1[0x94];
      lVar4 = *plVar3;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
      }
      local_1f8 = SOverlay::FArguments::FArguments(local_158);
      plVar11 = (longlong *)(local_1f8 + 0x108);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      local_1f0 = lVar4;
      plStack_1e8 = plVar10;
      if (&local_1f0 != plVar11) {
        local_1f0 = *plVar11;
        plStack_1e8 = *(longlong **)(local_1f8 + 0x110);
        *plVar11 = lVar4;
        *(longlong **)(local_1f8 + 0x110) = plVar10;
        local_170 = lVar4;
        plStack_168 = plVar10;
      }
      plVar11 = plStack_1e8;
      if (plStack_1e8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_1e8 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_1e8)(plStack_1e8);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plStack_1e8 + 8))(plStack_1e8,1);
          }
        }
      }
      lVar4 = local_1f8;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar10 + 1;
        lVar5 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      plVar11 = (longlong *)operator_new(0x238);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar11 + 1) = 1;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *plVar11 = (longlong)&PTR_FUN_143f4d490;
        if (plVar11 != (longlong *)0xfffffffffffffff0) {
          SWeakWidget::SWeakWidget();
        }
      }
      plVar2 = plVar11 + 2;
      local_188 = plVar2;
      local_180 = plVar11;
      FUN_14044f790(&local_188,plVar2);
      local_258 = 0x228;
      SWidget::SetDebugInfo
                (plVar2,"SWeakWidget",
                 "D:\\Oak\\main\\Engine\\Plugins\\Runtime\\Coherent\\CohtmlPlugin\\Source\\CohtmlPlugin\\Private\\CohtmlInputActor.cpp"
                 ,0x41);
      local_218 = lVar4 + 0xf8;
      local_230 = lVar4 + 0xe8;
      local_238 = lVar4 + 200;
      local_240 = lVar4 + 0x98;
      local_250 = lVar4 + 0x78;
      local_258 = lVar4 + 0x60;
      local_220 = *(undefined1 *)(local_1f8 + 0xf1);
      local_228 = *(undefined1 *)(local_1f8 + 0xf0);
      local_248 = *(undefined4 *)(local_1f8 + 0x90);
      SWidget::SWidgetConstruct(plVar2,local_1f8,local_1f8 + 0x30,local_1f8 + 0x40);
      FUN_141979700(plVar2,local_1f8);
      if (((char)plVar11[5] < '\0') ||
         (cVar6 = (**(code **)(*plVar2 + 0x1e8))(plVar2), cVar6 != '\0')) {
        bVar7 = 1;
      }
      else {
        bVar7 = 0;
      }
      *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
      *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar7;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_1c8 = plVar2;
      local_1c0 = plVar11;
      (**(code **)(**(longlong **)(DAT_146b17150 + 0x7b0) + 0x2a0))
                (*(longlong **)(DAT_146b17150 + 0x7b0),&local_1c8,0);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
        LOCK();
        plVar2 = plVar11 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_48 + 1;
        lVar4 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      FUN_140456c70(local_158);
      param_2 = local_200;
      param_3 = local_204;
      param_4 = local_208;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar10 + 1;
        lVar4 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          param_2 = local_200;
          param_3 = local_204;
          param_4 = local_208;
          if (iVar8 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
            param_2 = local_200;
            param_3 = local_204;
            param_4 = local_208;
          }
        }
      }
    }
    if (*plVar3 != 0) {
      local_1e0 = DAT_1464b9ee8;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1df = 1;
      SLeafWidget::SetVisibility(*plVar3,&local_1e0);
      *(undefined4 *)(*plVar3 + 0x364) = param_2;
      *(undefined4 *)(*plVar3 + 0x368) = param_3;
      *(undefined4 *)(*plVar3 + 0x36c) = param_4;
      *(undefined4 *)(*plVar3 + 0x370) = param_5;
      FUN_14044b020(*plVar3 + 0x2f0,local_1b8,param_1,FUN_140475ab0);
      FUN_14044b020(*plVar3 + 0x308,local_1b0,param_1,FUN_140475ae0);
      FUN_14044b020(*plVar3 + 800,local_1a8,param_1,FUN_140475a50);
      FUN_14044b020(*plVar3 + 0x338,local_1a0,param_1,FUN_140475a80);
    }
  }
  return;
}



// FUNCTION 140471340 FUN_140471340 body=1099 status=ok
// SIG undefined FUN_140471340(void)

void FUN_140471340(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_res8;
  ulonglong local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  
  local_res10 = param_2;
  puVar3 = (undefined8 *)operator_new(0x18);
  puVar8 = (undefined8 *)0x0;
  puVar5 = puVar8;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar5 = puVar3;
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(undefined8 **)(param_1 + 0x10) = puVar5;
  if (lVar4 != 0) {
    std::
    vector<std::unique_ptr<AiCooldown,std::default_delete<AiCooldown>_>,std::allocator<std::unique_ptr<AiCooldown,std::default_delete<AiCooldown>_>_>_>
    ::_Tidy(lVar4);
    FMemory::operator_delete(lVar4,0x18);
  }
  lVar4 = operator_new(0x180);
  puVar5 = puVar8;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)FUN_140454fa0(lVar4,*(undefined8 *)(param_1 + 0x10),2);
  }
  puVar5[0x28] = param_1;
  local_res8 = puVar5;
  puVar6 = (undefined8 *)operator_new(400);
  puVar3 = puVar8;
  if (puVar6 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar6 + 1) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *(undefined4 *)(puVar6 + 2) = 1;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
    *(undefined2 *)(puVar6 + 5) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined2 *)(puVar6 + 9) = 0;
    *(undefined4 *)((longlong)puVar6 + 100) = 0;
    *(undefined2 *)(puVar6 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x84) = 0;
    *(undefined2 *)(puVar6 + 0x11) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xa4) = 0;
    *(undefined2 *)(puVar6 + 0x15) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xc4) = 0;
    *(undefined2 *)(puVar6 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xe4) = 0;
    *(undefined2 *)(puVar6 + 0x1d) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x104) = 0;
    *(undefined2 *)(puVar6 + 0x21) = 0;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = uVar1;
    *puVar6 = &PTR__scalar_deleting_destructor__143f4c678;
    puVar6[0x29] = 1;
    puVar6[0x2a] = 2;
    *(undefined4 *)(puVar6 + 0x2b) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar6 + 0x15c) = 0x7f7fffff;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0x78;
    *(undefined4 *)(puVar6 + 0x2f) = 0x3e800000;
    *(undefined4 *)((longlong)puVar6 + 0x17c) = 0xff7fffff;
    *(undefined4 *)(puVar6 + 0x30) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar6 + 0x184) = 0x7f7fffff;
    *(undefined4 *)(puVar6 + 0x31) = 0x7f7fffff;
    puVar3 = puVar6;
  }
  puVar3[0x28] = param_1;
  local_res18 = puVar3;
  puVar7 = (undefined8 *)operator_new(0x168);
  puVar6 = puVar8;
  if (puVar7 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar7 + 1) = 0;
    *(undefined8 *)((longlong)puVar7 + 0xc) = 1;
    *(undefined4 *)((longlong)puVar7 + 0x24) = 0;
    *(undefined2 *)(puVar7 + 5) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x44) = 0;
    *(undefined2 *)(puVar7 + 9) = 0;
    *(undefined4 *)((longlong)puVar7 + 100) = 0;
    *(undefined2 *)(puVar7 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x84) = 0;
    *(undefined2 *)(puVar7 + 0x11) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xa4) = 0;
    *(undefined2 *)(puVar7 + 0x15) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xc4) = 0;
    *(undefined2 *)(puVar7 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xe4) = 0;
    *(undefined2 *)(puVar7 + 0x1d) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x104) = 0;
    *(undefined2 *)(puVar7 + 0x21) = 0;
    puVar7[0x23] = 0;
    puVar7[0x24] = 0;
    puVar7[0x25] = 0;
    puVar7[0x26] = 0;
    puVar7[0x27] = uVar1;
    *puVar7 = &PTR_FUN_143f4c6a8;
    *(undefined4 *)(puVar7 + 0x29) = 1;
    *(undefined4 *)((longlong)puVar7 + 0x14c) = 0xfa;
    *(undefined4 *)(puVar7 + 0x2a) = 0x28;
    puVar7[0x2c] = 0;
    puVar6 = puVar7;
  }
  puVar6[0x28] = param_1;
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar7 = (undefined8 *)plVar2[1];
  local_res20 = puVar6;
  if ((undefined8 *)plVar2[2] == puVar7) {
    FUN_140450500(plVar2,puVar7,&local_res8);
    puVar5 = local_res8;
  }
  else {
    *puVar7 = puVar5;
    plVar2[1] = plVar2[1] + 8;
    puVar5 = puVar8;
  }
  FUN_140450bc0(*plVar2,plVar2[1],plVar2[1] - *plVar2 >> 3,local_res10 & 0xff);
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar7 = (undefined8 *)plVar2[1];
  if ((undefined8 *)plVar2[2] == puVar7) {
    FUN_140450500(plVar2,puVar7,&local_res18);
    puVar3 = local_res18;
  }
  else {
    *puVar7 = puVar3;
    plVar2[1] = plVar2[1] + 8;
    puVar3 = puVar8;
  }
  FUN_140450bc0(*plVar2,plVar2[1],plVar2[1] - *plVar2 >> 3,local_res10 & 0xff);
  plVar2 = *(longlong **)(param_1 + 0x10);
  puVar7 = (undefined8 *)plVar2[1];
  if ((undefined8 *)plVar2[2] == puVar7) {
    FUN_140450500(plVar2,puVar7,&local_res20);
    puVar8 = local_res20;
  }
  else {
    *puVar7 = puVar6;
    plVar2[1] = plVar2[1] + 8;
  }
  FUN_140450bc0(*plVar2,plVar2[1],plVar2[1] - *plVar2 >> 3,local_res10 & 0xff);
  *(ulonglong *)(param_1 + 8) = local_res10;
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  return;
}



// FUNCTION 140471790 FUN_140471790 body=921 status=ok
// SIG undefined FUN_140471790(void)

void FUN_140471790(longlong *param_1)

{
  IViewListener **ppIVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  IViewListener *pIVar8;
  IViewListener *pIVar9;
  IViewListener *pIVar10;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined1 *in_stack_ffffffffffffff58;
  IViewListener *local_78;
  IViewListener *local_70;
  IViewListener *local_68;
  longlong local_60;
  IViewListener *local_58;
  longlong local_50;
  undefined1 local_48 [42];
  ushort local_1e;
  
  FUN_142340f20();
  lVar4 = param_1[0x24];
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  lVar5 = FUN_14046e620(lVar4);
  if (lVar5 == 0) {
    FActorSpawnParameters::FActorSpawnParameters(local_48);
    local_1e = local_1e | 8;
    uVar6 = APlayerStateGunfire::GetPrivateStaticClass();
    in_stack_ffffffffffffff58 = local_48;
    UWorld::SpawnActor(lVar4,uVar6,0,0,in_stack_ffffffffffffff58);
  }
  plVar7 = (longlong *)FName::FName(local_res10,L"UCohtmlBaseComponent Audio Wrapper",1);
  pIVar9 = (IViewListener *)0x0;
  local_res8 = 0;
  lVar4 = *plVar7;
  if (lVar4 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar6 = FUN_140491b60();
  lVar4 = FUN_1417985e0(uVar6,param_1,lVar4,0,
                        (ulonglong)in_stack_ffffffffffffff58 & 0xffffffff00000000,0,0,0,0);
  param_1[0x3b] = lVar4;
  *(longlong **)(lVar4 + 0x28) = param_1;
  pIVar8 = (IViewListener *)operator_new(0x40);
  pIVar10 = pIVar9;
  if (pIVar8 != (IViewListener *)0x0) {
    cohtml::IViewListener::IViewListener(pIVar8);
    cohtml::ITextInputHandler::ITextInputHandler((ITextInputHandler *)(pIVar8 + 8));
    *(undefined4 *)(pIVar8 + 0x10) = 0;
    *(undefined ***)pIVar8 = &PTR_FUN_143f48e50;
    *(undefined ***)(pIVar8 + 8) = &PTR_LAB_143f48f28;
    *(longlong **)(pIVar8 + 0x18) = param_1;
    *(undefined8 *)(pIVar8 + 0x20) = 0;
    *(undefined8 *)(pIVar8 + 0x28) = 0;
    *(undefined8 *)(pIVar8 + 0x30) = 0;
    *(undefined8 *)(pIVar8 + 0x38) = 0;
    pIVar10 = pIVar8;
  }
  local_78 = pIVar10;
  pIVar8 = (IViewListener *)operator_new(0x18);
  local_70 = pIVar9;
  if (pIVar8 != (IViewListener *)0x0) {
    *(undefined4 *)(pIVar8 + 8) = 1;
    *(undefined ***)pIVar8 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)(pIVar8 + 0xc) = 1;
    *(IViewListener **)(pIVar8 + 0x10) = pIVar10;
    local_70 = pIVar8;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_78,pIVar10,pIVar10);
  ppIVar1 = (IViewListener **)(param_1 + 0x3e);
  if (ppIVar1 != &local_78) {
    *ppIVar1 = local_78;
    local_78 = (IViewListener *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x3f,&local_70);
  }
  pIVar10 = local_70;
  if (local_70 != (IViewListener *)0x0) {
    LOCK();
    pIVar8 = local_70 + 8;
    iVar3 = *(int *)pIVar8;
    *(int *)pIVar8 = *(int *)pIVar8 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)local_70)(local_70);
      LOCK();
      pIVar8 = pIVar10 + 0xc;
      iVar3 = *(int *)pIVar8;
      *(int *)pIVar8 = *(int *)pIVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)pIVar10 + 8))(pIVar10,1);
      }
    }
  }
  lVar4 = FMemory::Malloc(0x150,0x80);
  if (lVar4 != 0) {
    local_60 = param_1[0x3f];
    local_68 = *ppIVar1 + 8;
    if (*ppIVar1 == (IViewListener *)0x0) {
      local_68 = pIVar9;
    }
    local_50 = 0;
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
      local_50 = param_1[0x3f];
    }
    local_58 = *ppIVar1;
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    pIVar9 = (IViewListener *)FUN_140452fc0(lVar4,&local_58,&local_68,param_1 + 0x36,param_1 + 0x37)
    ;
  }
  lVar4 = param_1[0x40];
  param_1[0x40] = (longlong)pIVar9;
  if (lVar4 != 0) {
    FUN_1404580d0(lVar4);
    FMemory::Free(lVar4);
    pIVar9 = (IViewListener *)param_1[0x40];
  }
  FWeakObjectPtr::operator=(pIVar9 + 0x148,param_1[0x23]);
  lVar4 = param_1[0x24];
  *(undefined2 *)(param_1 + 0x46) = 0;
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  lVar4 = FUN_14046e620(lVar4);
  param_1[0x44] = lVar4;
  FWeakObjectPtr::operator=(&local_res8,param_1);
  iVar3 = *(int *)(lVar4 + 0x490);
  *(int *)(lVar4 + 0x490) = iVar3 + 1;
  if (*(int *)(lVar4 + 0x494) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x488,iVar3);
  }
  puVar2 = (undefined4 *)(*(longlong *)(lVar4 + 0x488) + (longlong)iVar3 * 8);
  *puVar2 = (undefined4)local_res8;
  puVar2[1] = local_res8._4_4_;
  if (*(char *)((longlong)param_1 + 0x1ba) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x1ba) = 1;
    *(undefined1 *)(param_1[0x23] + 0x30) = 5;
    (**(code **)(*param_1 + 0x3c8))(param_1,param_1[0x23]);
  }
  FUN_14234b090(param_1);
  return;
}



// FUNCTION 140471b30 FUN_140471b30 body=180 status=ok
// SIG undefined FUN_140471b30(void)

void FUN_140471b30(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_140471790();
  *(undefined1 *)(param_1 + 0x268) = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_14044f0b0(*(undefined8 *)(param_1 + 0x118),&local_18,0);
  if (0 < (int)local_10) {
    if ((*(int *)(param_1 + 600) != 0) || (*(int *)(param_1 + 0x25c) != 0)) {
      for (plVar2 = local_18; plVar2 != local_18 + (int)local_10; plVar2 = plVar2 + 1) {
        lVar1 = *plVar2;
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) == *(longlong *)(param_1 + 600))) {
          *(longlong *)(param_1 + 0x260) = lVar1;
          break;
        }
      }
    }
    if (*(longlong *)(param_1 + 0x260) == 0) {
      *(longlong *)(param_1 + 0x260) = *local_18;
    }
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
    return;
  }
  return;
}



// FUNCTION 140471bf0 FUN_140471bf0 body=150 status=ok
// SIG undefined FUN_140471bf0(void)

void FUN_140471bf0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_140471790();
  lVar2 = *(longlong *)(param_1 + 0x250);
  *(undefined1 *)(param_1 + 0x260) = 0;
  if (lVar2 != 0) goto LAB_140471c69;
  lVar2 = FSoftObjectPath::TryLoad(param_1 + 0x238);
  if (lVar2 == 0) {
LAB_140471c5b:
    lVar2 = 0;
  }
  else {
    lVar3 = ACineCameraActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140471c5b;
  }
  *(longlong *)(param_1 + 0x250) = lVar2;
  if (lVar2 == 0) {
    return;
  }
LAB_140471c69:
  uVar4 = UMaterialInstanceDynamic::Create(lVar2,param_1);
  *(undefined8 *)(param_1 + 600) = uVar4;
  return;
}



// FUNCTION 140471c90 FUN_140471c90 body=119 status=ok
// SIG undefined FUN_140471c90(void)

undefined8 * FUN_140471c90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar1 + 1,0,0xe8);
    *puVar1 = &PTR_FUN_143f47b98;
    FUN_1404521e0(puVar1 + 1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140471d10 FUN_140471d10 body=1134 status=ok
// SIG undefined FUN_140471d10(void)

undefined8
FUN_140471d10(float *param_1,float *param_2,longlong *param_3,longlong *param_4,longlong *param_5,
             uint param_6,float *param_7,float *param_8,float *param_9)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
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
  float local_e8;
  float local_e4;
  float local_e0;
  
  fVar17 = 3.4028235e+38;
  iVar11 = 0;
  local_e0 = 3.4028235e+38;
  local_e8 = 0.0;
  iVar9 = -1;
  local_e4 = 0.0;
  if (0 < (int)param_5[1]) {
    lVar3 = *param_5;
    cVar2 = *(char *)((longlong)param_5 + 0xc);
    puVar10 = (uint *)(lVar3 + 4);
    lVar8 = *param_4;
    puVar7 = (ushort *)(lVar3 + 2);
    do {
      if (cVar2 == '\0') {
        uVar4 = (uint)puVar7[-1];
      }
      else {
        uVar4 = puVar10[-1];
      }
      lVar5 = (longlong)(int)uVar4;
      if (cVar2 == '\0') {
        uVar4 = (uint)puVar7[1];
      }
      else {
        uVar4 = puVar10[1];
      }
      lVar6 = (longlong)(int)uVar4;
      if (cVar2 == '\0') {
        uVar4 = (uint)*puVar7;
      }
      else {
        uVar4 = *puVar10;
      }
      fVar16 = *(float *)(lVar8 + 4 + lVar5 * 0xc);
      fVar14 = *(float *)(lVar8 + 8 + lVar5 * 0xc);
      fVar18 = *(float *)(lVar8 + lVar5 * 0xc);
      fVar23 = *(float *)(lVar8 + lVar6 * 0xc) - fVar18;
      fVar24 = *(float *)(lVar8 + 4 + lVar6 * 0xc) - fVar16;
      lVar5 = (longlong)(int)uVar4;
      fVar25 = *(float *)(lVar8 + 8 + lVar6 * 0xc) - fVar14;
      fVar13 = *(float *)(lVar8 + 4 + lVar5 * 0xc) - fVar16;
      fVar15 = *(float *)(lVar8 + 8 + lVar5 * 0xc) - fVar14;
      fVar26 = *(float *)(lVar8 + lVar5 * 0xc) - fVar18;
      fVar19 = param_2[1] * fVar15 - param_2[2] * fVar13;
      fVar21 = param_2[2] * fVar26 - fVar15 * *param_2;
      fVar22 = fVar13 * *param_2 - param_2[1] * fVar26;
      fVar20 = fVar21 * fVar24 + fVar19 * fVar23 + fVar22 * fVar25;
      if (0.001 <= fVar20) {
        fVar18 = *param_1 - fVar18;
        fVar16 = param_1[1] - fVar16;
        fVar14 = param_1[2] - fVar14;
        fVar19 = fVar16 * fVar21 + fVar18 * fVar19 + fVar14 * fVar22;
        fVar17 = local_e0;
        if ((0.0 <= fVar19) && (fVar19 <= fVar20)) {
          fVar21 = fVar16 * fVar25 - fVar14 * fVar24;
          fVar14 = fVar14 * fVar23 - fVar18 * fVar25;
          fVar18 = fVar18 * fVar24 - fVar16 * fVar23;
          fVar16 = fVar21 * *param_2 + param_2[1] * fVar14 + param_2[2] * fVar18;
          if ((0.0 <= fVar16) && (fVar19 + fVar16 <= fVar20)) {
            fVar20 = 1.0 / fVar20;
            fVar14 = (fVar14 * fVar13 + fVar21 * fVar26 + fVar18 * fVar15) * fVar20;
            if (fVar14 < local_e0) {
              fVar17 = fVar14;
              iVar9 = iVar11;
              local_e8 = fVar19 * fVar20;
              local_e4 = fVar16 * fVar20;
              local_e0 = fVar14;
            }
          }
        }
      }
      iVar11 = iVar11 + 3;
      puVar10 = puVar10 + 3;
      puVar7 = puVar7 + 3;
    } while (iVar11 < (int)param_5[1]);
    if (iVar9 != -1) {
      lVar8 = (longlong)iVar9;
      if (cVar2 == '\0') {
        uVar4 = (uint)*(ushort *)(lVar3 + 2 + lVar8 * 2);
      }
      else {
        uVar4 = *(uint *)(lVar3 + 4 + lVar8 * 4);
      }
      lVar6 = *param_3;
      uVar12 = (ulonglong)param_6;
      lVar5 = uVar12 + (longlong)(int)uVar4 * 8;
      fVar16 = *(float *)(lVar6 + 4 + lVar5 * 8);
      if (cVar2 == '\0') {
        uVar4 = (uint)*(ushort *)(lVar3 + 4 + lVar8 * 2);
      }
      else {
        uVar4 = *(uint *)(lVar3 + 8 + lVar8 * 4);
      }
      lVar1 = uVar12 + (longlong)(int)uVar4 * 8;
      fVar14 = *(float *)(lVar6 + 4 + lVar1 * 8);
      if (cVar2 == '\0') {
        uVar4 = (uint)*(ushort *)(lVar3 + lVar8 * 2);
      }
      else {
        uVar4 = *(uint *)(lVar3 + lVar8 * 4);
      }
      lVar3 = uVar12 + (longlong)(int)uVar4 * 8;
      fVar20 = (1.0 - local_e8) - local_e4;
      fVar18 = *(float *)(lVar6 + 4 + lVar3 * 8);
      *param_8 = fVar20 * *(float *)(lVar6 + lVar3 * 8) + local_e8 * *(float *)(lVar6 + lVar1 * 8) +
                 local_e4 * *(float *)(lVar6 + lVar5 * 8);
      *param_9 = fVar20 * fVar18 + local_e8 * fVar14 + local_e4 * fVar16;
      *param_7 = fVar17;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140472180 FUN_140472180 body=150 status=ok
// SIG undefined FUN_140472180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140472180(undefined8 *param_1,void *param_2,ulonglong *param_3)

{
  undefined2 *puVar1;
  ulonglong _Size;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  longlong local_48;
  void *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 1) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)*param_1;
  }
  TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
            (local_c8,puVar1);
  _Size = (ulonglong)local_38;
  if ((param_2 != (void *)0x0) && (_Size <= *param_3)) {
    _guard_xfg_dispatch_icall_nop(param_2,local_40,_Size);
  }
  *param_3 = _Size;
  if (local_48 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 140472220 FUN_140472220 body=34 status=ok
// SIG undefined FUN_140472220(void)

void FUN_140472220(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00014047223e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 140472250 IsNavigationRelevant body=13 status=ok
// SIG undefined IsNavigationRelevant(void)

byte UNavRelevantComponent::IsNavigationRelevant(longlong param_1)

{
  return *(byte *)(param_1 + 0xba) >> 2 & 1;
}



// FUNCTION 140472260 FUN_140472260 body=142 status=ok
// SIG undefined FUN_140472260(void)

bool FUN_140472260(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar4 = (longlong *)(**(code **)(*DAT_1469f4590 + 0x78))(DAT_1469f4590,local_18);
  bVar5 = *plVar4 == *(longlong *)(param_1 + 0x498);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return bVar5;
  }
  return bVar5;
}



// FUNCTION 1404722f0 FUN_1404722f0 body=26 status=ok
// SIG undefined FUN_1404722f0(void)

bool FUN_1404722f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8,1);
  return lVar1 == 0;
}



// FUNCTION 140472310 FUN_140472310 body=5 status=ok
// SIG undefined FUN_140472310(void)

undefined1 FUN_140472310(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



// FUNCTION 140472340 FUN_140472340 body=197 status=ok
// SIG undefined FUN_140472340(void)

bool FUN_140472340(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  iVar7 = -1;
  iVar5 = iVar7;
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    lVar3 = *param_2;
    plVar6 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar6 = plVar2 + 7;
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                    (longlong)(int)plVar2[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        iVar5 = iVar4;
        if (*(longlong *)((longlong)iVar4 * 0x20 + *plVar2) == lVar3) break;
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *plVar2);
        iVar5 = iVar7;
      } while (iVar4 != -1);
    }
  }
  plVar2 = (longlong *)param_2[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return iVar5 != -1;
}



// FUNCTION 140472420 FUN_140472420 body=125 status=ok
// SIG undefined FUN_140472420(void)

undefined ** FUN_140472420(undefined8 param_1,byte param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (((ulonglong)param_2 ^ 1) != 0xffffffffffffffee) {
    do {
      cVar1 = (*(code *)(&PTR_FUN_143f43eb0)[uVar2 * 2])(param_1,param_2);
      if (cVar1 != '\0') {
        return &PTR_FUN_143f43eb0 + uVar2 * 2;
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < ((ulonglong)param_2 ^ 1) + 0x12);
  }
  return (undefined **)0x0;
}



// FUNCTION 1404724a0 FUN_1404724a0 body=7 status=ok
// SIG undefined FUN_1404724a0(void)

bool FUN_1404724a0(longlong param_1,longlong param_2)

{
  return param_2 == param_1;
}



// FUNCTION 1404724b0 FUN_1404724b0 body=46 status=ok
// SIG undefined FUN_1404724b0(void)

undefined1 FUN_1404724b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  if ((param_2 != param_1) && (param_2 != (longlong *)param_1[0x12])) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x12] + 0xc0))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1404724e0 FUN_1404724e0 body=970 status=ok
// SIG undefined FUN_1404724e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1404724e0(undefined8 param_1,ulonglong *param_2,ulonglong *param_3,longlong *param_4)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  short *psVar14;
  wchar_t *_Str;
  uint uVar15;
  wchar_t *pwVar16;
  bool bVar17;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  short *local_1a8;
  ulonglong local_1a0;
  wchar_t *local_198;
  uint local_190;
  undefined4 local_18c;
  undefined2 *local_188;
  undefined8 local_180;
  ulonglong *local_178;
  ulonglong *local_170;
  undefined1 local_168 [256];
  longlong local_68;
  short *local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  pwVar16 = (wchar_t *)0x0;
  *param_2 = 0;
  *param_3 = 0xffffffffffffffff;
  local_178 = param_2;
  local_170 = param_3;
  lVar4 = (**(code **)(*param_4 + 0x40))(param_4,"Range");
  if (lVar4 != 0) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(lVar4 + lVar8) != '\0');
    if (lVar8 != 0) {
      local_188 = (undefined2 *)0x0;
      local_180 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
      puVar1 = local_188;
      FGenericPlatformString::Memcpy(local_188,L"bytes=",0xe);
      uVar5 = (**(code **)(*param_4 + 0x40))(param_4,"Range");
      TStringConversion<TStringConvert<char,wchar_t>,128>::
      TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,uVar5);
      local_1a8 = (short *)0x0;
      local_1a0 = 0;
      if ((local_60 != (short *)0x0) && (*local_60 != 0)) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (local_60[lVar4] != 0);
        uVar11 = (int)lVar4 + 1;
        local_1a0 = (ulonglong)uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
        }
        FGenericPlatformString::Memcpy(local_1a8,local_60,(longlong)(int)uVar11 * 2);
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      iVar12 = (int)local_180;
      local_1b8 = 0xffffffff;
      puVar10 = &DAT_143f3eda8;
      if ((int)local_180 != 0) {
        puVar10 = puVar1;
      }
      iVar2 = FUN_141592950(&local_1a8,puVar10,1);
      if (iVar2 != -1) {
        for (psVar14 = local_1a8; psVar14 != local_1a8 + (int)local_1a0; psVar14 = psVar14 + 1) {
          if (*psVar14 == 0x2d) {
            uVar11 = (uint)((longlong)psVar14 - (longlong)local_1a8 >> 1);
            if (uVar11 != 0xffffffff) {
              uVar15 = 0;
              uVar3 = iVar12 - 1;
              if (iVar12 == 0) {
                uVar3 = uVar15;
              }
              uVar7 = (int)local_1a0 - 1;
              if ((int)local_1a0 == 0) {
                uVar7 = uVar15;
              }
              if (uVar3 < uVar7) {
                uVar7 = uVar3;
              }
              uVar3 = (int)local_1a0 - 1;
              if ((int)local_1a0 == 0) {
                uVar3 = uVar15;
              }
              uVar15 = uVar7;
              if ((uVar7 <= uVar11) && (uVar15 = uVar3, uVar11 < uVar3)) {
                uVar15 = uVar11;
              }
              local_198 = (wchar_t *)0x0;
              local_18c = 0;
              psVar14 = &DAT_143f3eda8;
              if ((int)local_1a0 != 0) {
                psVar14 = local_1a8;
              }
              iVar12 = uVar15 - uVar7;
              uVar3 = iVar12 + 1;
              if (iVar12 == 0) {
                uVar3 = 0;
              }
              local_190 = uVar3;
              if ((0 < (int)uVar3) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198), uVar3 = local_190,
                 pwVar16 = local_198, 0 < (int)local_190)) {
                wcsncpy(local_198,psVar14 + (int)uVar7,(longlong)iVar12);
                pwVar16[iVar12] = L'\0';
              }
              pwVar9 = L"";
              if (uVar3 != 0) {
                pwVar9 = pwVar16;
              }
              uVar6 = _wcstoui64(pwVar9,(wchar_t **)0x0,10);
              pwVar9 = (wchar_t *)0x0;
              *local_178 = uVar6;
              uVar15 = 0;
              uVar3 = (int)local_1a0 - 1;
              if ((int)local_1a0 == 0) {
                uVar3 = uVar15;
              }
              uVar7 = uVar11 + 1;
              if ((int)uVar7 < (int)uVar3) {
                uVar11 = uVar11 + 0x80000000;
                uVar3 = (int)local_1a0 - 1;
                if ((int)local_1a0 == 0) {
                  uVar3 = uVar15;
                }
                if (uVar7 < uVar3) {
                  uVar3 = uVar7;
                }
                uVar7 = (int)local_1a0 - 1;
                if ((int)local_1a0 == 0) {
                  uVar7 = uVar15;
                }
                uVar13 = uVar3;
                if ((uVar3 <= uVar11) && (uVar13 = uVar7, uVar11 < uVar7)) {
                  uVar13 = uVar11;
                }
                local_198 = (wchar_t *)0x0;
                local_18c = 0;
                psVar14 = &DAT_143f3eda8;
                if ((int)local_1a0 != 0) {
                  psVar14 = local_1a8;
                }
                iVar12 = uVar13 - uVar3;
                local_190 = iVar12 + 1;
                if (iVar12 == 0) {
                  local_190 = uVar15;
                }
                bVar17 = local_190 == 0;
                if (0 < (int)local_190) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
                  uVar11 = local_190;
                  pwVar9 = local_198;
                  bVar17 = local_190 == 0;
                  if (0 < (int)local_190) {
                    wcsncpy(local_198,psVar14 + (int)uVar3,(longlong)iVar12);
                    pwVar9[iVar12] = L'\0';
                    bVar17 = uVar11 == 0;
                  }
                }
                _Str = L"";
                if (!bVar17) {
                  _Str = pwVar9;
                }
                uVar6 = _wcstoui64(_Str,(wchar_t **)0x0,10);
                *local_170 = uVar6;
                if (pwVar9 != (wchar_t *)0x0) {
                  FMemory::Free(pwVar9);
                }
              }
              if (pwVar16 != (wchar_t *)0x0) {
                FMemory::Free(pwVar16);
              }
            }
            break;
          }
        }
      }
      if (local_1a8 != (short *)0x0) {
        FMemory::Free();
      }
      if (local_188 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1404728b0 FUN_1404728b0 body=37 status=ok
// SIG undefined FUN_1404728b0(void)

undefined8 FUN_1404728b0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1404728e0 FUN_1404728e0 body=29 status=ok
// SIG undefined FUN_1404728e0(void)

ulonglong FUN_1404728e0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = *(longlong **)(*(ulonglong *)(param_1 + 0x200) + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001404728f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x168))();
    return uVar2;
  }
  return *(ulonglong *)(param_1 + 0x200) & 0xffffffffffffff00;
}



// FUNCTION 140472900 FUN_140472900 body=50 status=ok
// SIG undefined FUN_140472900(void)

ulonglong FUN_140472900(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x100) == 0) {
    plVar2 = *(longlong **)(param_1 + 0x110);
    uVar1 = 0;
  }
  else {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x100) + 0x240);
    plVar2 = *(longlong **)(uVar1 + 8);
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140472928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x168))();
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140472940 FUN_140472940 body=695 status=ok
// SIG undefined FUN_140472940(void)

undefined8 FUN_140472940(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_38;
  longlong *local_30;
  
  if (*(longlong *)(param_1 + 0x458) != 0) {
    if (0 < *(int *)(param_1 + 0x490)) {
      return 0;
    }
    if (*(char *)(param_1 + 0x480) == '\0') {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_res10);
        local_30 = (longlong *)0x0;
        if ((undefined8 *)(param_1 + 0x468) != &local_38) {
          *(undefined8 *)(param_1 + 0x468) = 0;
          local_38 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x470,&local_30);
          plVar10 = local_30;
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_30 + 1;
            lVar8 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
        }
        QueryPerformanceCounter(&local_res8);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res10._0_4_);
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
        local_res18 = 0;
        local_res20 = 0;
        *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
        *plVar10 = (longlong)&PTR_FUN_143f4c970;
        *(undefined1 *)(plVar10 + 3) = 0;
        plVar10[4] = 0;
        plVar10[2] = param_1 + 0x468;
        lVar8 = plVar10[4];
        piVar1 = (int *)(lVar8 + 0x48);
        if (lVar8 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_140445100(plVar10,0,0xff,1);
        if (lVar8 != 0) {
          LOCK();
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            FGraphEvent::Recycle(lVar8);
          }
        }
      }
      *(undefined1 *)(param_1 + 0x480) = 1;
      FUN_141edede0(param_1 + 0x478,0);
    }
  }
  cVar3 = FUN_142235ec0(param_1);
  cVar4 = FRenderCommandFence::IsFenceComplete(param_1 + 0x478);
  if (cVar4 != '\0') {
    *(undefined1 *)(param_1 + 0x480) = 0;
  }
  if ((cVar3 != '\0') && (cVar4 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140472c00 FUN_140472c00 body=42 status=ok
// SIG undefined FUN_140472c00(void)

bool FUN_140472c00(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x200) != 0) {
    cVar1 = FRenderCommandFence::IsFenceComplete(*(longlong *)(param_1 + 0x200) + 0x10);
    return cVar1 != '\0';
  }
  return true;
}



// FUNCTION 140472c30 FUN_140472c30 body=54 status=ok
// SIG undefined FUN_140472c30(void)

bool FUN_140472c30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x100) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240), lVar1 != 0)) {
    cVar2 = FRenderCommandFence::IsFenceComplete(lVar1 + 0x10);
    return cVar2 != '\0';
  }
  return true;
}



// FUNCTION 140472c70 FUN_140472c70 body=41 status=ok
// SIG undefined FUN_140472c70(void)

ulonglong FUN_140472c70(void)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if ((DAT_146850620 != 0) && (DAT_146850628 != 0)) {
    in_RAX = 0;
    LOCK();
    uVar1 = *(uint *)(DAT_146850628 + 8);
    if (uVar1 == 0) {
      *(uint *)(DAT_146850628 + 8) = 0;
    }
    else {
      in_RAX = (ulonglong)uVar1;
    }
    UNLOCK();
    if (0 < (int)in_RAX) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140472cd0 FUN_140472cd0 body=24 status=ok
// SIG undefined FUN_140472cd0(void)

bool FUN_140472cd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  return lVar1 != 0;
}



// FUNCTION 140472cf0 FUN_140472cf0 body=130 status=ok
// SIG undefined FUN_140472cf0(void)

bool FUN_140472cf0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_14048f290(param_1,&local_18);
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
    return local_18 != 0;
  }
  return local_18 != 0;
}



// FUNCTION 140472d80 FUN_140472d80 body=130 status=ok
// SIG undefined FUN_140472d80(void)

bool FUN_140472d80(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_14048f390(param_1,&local_18);
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
    return local_18 != 0;
  }
  return local_18 != 0;
}



// FUNCTION 140472e10 FUN_140472e10 body=207 status=ok
// SIG undefined FUN_140472e10(void)

void FUN_140472e10(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar3 == (longlong *)0x0) {
LAB_140472ecd:
    *param_1 = (longlong)plVar3;
    param_1[1] = lVar4;
    return;
  }
joined_r0x000140472e33:
  for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
    if (((*(uint *)(*(longlong *)(lVar4 + 0x10) + 0xb8) >> 0xf & 1) != 0) &&
       ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(uint *)(lVar4 + 0x38) >> 0x1d & 1) == 0)
        ))) goto LAB_140472ecd;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar1 = param_1[2];
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_1 + 2) = iVar2;
    if (iVar2 < (int)plVar3[0x35]) {
      lVar4 = *(longlong *)(plVar3[0x34] + ((longlong)(int)lVar1 + 1) * 0x10);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0x38);
      }
      goto joined_r0x000140472e33;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3), plVar3 == (longlong *)0x0))
  goto LAB_140472ecd;
  lVar4 = plVar3[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x000140472e33;
}



// FUNCTION 140472ee0 FUN_140472ee0 body=474 status=ok
// SIG undefined FUN_140472ee0(void)

void FUN_140472ee0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146850658);
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146850658);
  }
  puVar2 = DAT_1461f61e8;
  if (DAT_1461f61f0 != 0) {
    puVar1 = DAT_1461f61e8 + (longlong)DAT_1461f61f0 * 3;
    for (puVar9 = DAT_1461f61e8; puVar9 != puVar1; puVar9 = puVar9 + 3) {
      if (*(int *)(param_1 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*param_1;
      }
      if (*(int *)(puVar9 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar9;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
      if (iVar4 == 0) {
        lVar10 = ((longlong)puVar9 - (longlong)puVar2) / 6 +
                 ((longlong)puVar9 - (longlong)puVar2 >> 0x3f);
        iVar4 = (int)(lVar10 >> 2) - (int)(lVar10 >> 0x3f);
        goto LAB_140472f80;
      }
    }
    iVar4 = -1;
LAB_140472f80:
    iVar6 = DAT_1461f61d0;
    lVar10 = (longlong)DAT_1461f61d0;
    DAT_1461f61d0 = DAT_1461f61d0 + 1;
    if (DAT_1461f61d4 < DAT_1461f61d0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1461f61c8,iVar6);
    }
    FString::FString(lVar10 * 0x10 + DAT_1461f61c8,param_1);
    puVar2 = DAT_1461f61e8;
    iVar6 = DAT_1461f61e0;
    lVar10 = (longlong)DAT_1461f61e0;
    DAT_1461f61e0 = DAT_1461f61e0 + 1;
    if (DAT_1461f61e4 < DAT_1461f61e0) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_1461f61d8,iVar6);
    }
    lVar5 = (longlong)iVar4;
    *(undefined4 *)(DAT_1461f61d8 + lVar10 * 4) = *(undefined4 *)(puVar2 + lVar5 * 3 + 2);
    if (DAT_1461f61e8[lVar5 * 3] != 0) {
      FMemory::Free();
    }
    iVar6 = (DAT_1461f61f0 - iVar4) + -1;
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop
                (DAT_1461f61e8 + lVar5 * 3,DAT_1461f61e8 + (longlong)(iVar4 + 1) * 3,
                 (longlong)iVar6 * 0x18);
    }
    DAT_1461f61f0 = DAT_1461f61f0 + -1;
    TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(&DAT_1461f61e8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014047308d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146850658);
  return;
}



// FUNCTION 1404730c0 FUN_1404730c0 body=131 status=ok
// SIG undefined FUN_1404730c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404730c0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x200) + 8);
  if (plVar1 != (longlong *)0x0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_b8,puVar3);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(lVar2 + 0x88));
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140473150 FUN_140473150 body=508 status=ok
// SIG undefined FUN_140473150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140473150(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x240) + 8);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x170);
      plVar7 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x170);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_118 = *(undefined8 *)(param_1 + 0x188);
      lVar5 = *(longlong *)(param_1 + 0x100);
      local_108 = *(undefined8 *)(param_1 + 0x198);
      uStack_100 = *(undefined8 *)(param_1 + 0x1a0);
      local_f8 = *(undefined8 *)(param_1 + 0x1a8);
      uStack_f0 = *(undefined8 *)(param_1 + 0x1b0);
      local_e8 = *(undefined8 *)(param_1 + 0x1b8);
      uStack_e0 = *(undefined8 *)(param_1 + 0x1c0);
      uStack_110 = *(undefined8 *)(lVar5 + 0x260);
      local_d8 = *(undefined4 *)(param_1 + 0x1c8);
      uStack_d4 = *(undefined4 *)(param_1 + 0x1cc);
      uStack_d0 = *(undefined4 *)(param_1 + 0x1d0);
      uStack_cc = *(undefined4 *)(param_1 + 0x1d4);
      local_c8 = *(undefined8 *)(param_1 + 0x1d8);
      *(undefined1 *)(lVar5 + 0x281) = 1;
      FUN_140481380(*(undefined8 *)(lVar5 + 0x240),&local_118,param_2);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar4 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
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
    }
    else {
      if (*(int *)(param_2 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*param_2;
      }
      lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_b8,puVar6);
      (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(lVar5 + 0x88));
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
    return;
  }
  FString::operator=(param_1 + 0x1e0);
  return;
}



// FUNCTION 140473350 FUN_140473350 body=1543 status=ok
// SIG undefined FUN_140473350(void)

void FUN_140473350(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  undefined2 *puVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong *local_res20;
  undefined4 in_stack_fffffffffffffd78;
  undefined2 uVar17;
  undefined2 *local_258;
  int local_250;
  int local_24c;
  longlong local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  longlong *local_228;
  longlong local_220;
  undefined8 local_218;
  longlong *local_210;
  longlong *local_208;
  undefined2 *local_200;
  int local_1f8;
  undefined2 *local_1f0;
  int local_1e8;
  longlong *local_1e0;
  longlong **local_1d8;
  longlong *local_1d0;
  longlong **local_1c8;
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  longlong local_1b0 [3];
  undefined **local_198 [5];
  byte local_170;
  longlong *local_108;
  undefined1 local_100;
  undefined **local_f8 [18];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  
  TSet<TTuple<FString,AHomeCharacter_*>,TDefaultMapHashableKeyFuncs<FString,AHomeCharacter_*,0>,FDefaultSetAllocator>
  ::Empty(param_1,0);
  TSet<TTuple<FString,AHomeCharacter_*>,TDefaultMapHashableKeyFuncs<FString,AHomeCharacter_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x50,0);
  lVar3 = param_1 + 0xb0;
  TSet<TTuple<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo>,TDefaultMapHashableKeyFuncs<FString,FVoiceCaptureDeviceWindows::FCaptureDeviceInfo,0>,FDefaultSetAllocator>
  ::Empty(lVar3,0);
  uVar17 = (undefined2)((uint)in_stack_fffffffffffffd78 >> 0x10);
  plVar4 = (longlong *)(param_1 + 0xa0);
  iVar15 = *(int *)(param_1 + 0xa8);
  if (iVar15 != 0) {
    plVar16 = (longlong *)(*plVar4 + 8);
    do {
      plVar10 = (longlong *)*plVar16;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      uVar17 = (undefined2)((uint)in_stack_fffffffffffffd78 >> 0x10);
      plVar16 = plVar16 + 2;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  iVar15 = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar4,0);
  }
  local_248 = 0;
  local_240 = 0;
  local_220 = 0;
  local_218 = 0x23;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_220,0);
  lVar5 = local_220;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_220,0x23,"Atlases/AtlasMappingData.cohtmlamd",0x23,CONCAT22(uVar17,0x3f));
  puVar7 = (undefined8 *)FPaths::ProjectContentDir(local_1b0);
  iVar14 = iVar15;
  if ((int)local_218 != 0) {
    iVar14 = (int)local_218 + -1;
  }
  if ((*(int *)(puVar7 + 1) != 0) || (iVar12 = 2, iVar14 == -1)) {
    iVar12 = 1;
  }
  local_258 = (undefined2 *)*puVar7;
  *puVar7 = 0;
  local_250 = *(int *)(puVar7 + 1);
  local_24c = *(int *)((longlong)puVar7 + 0xc);
  puVar7[1] = 0;
  if (local_24c < iVar12 + local_250 + iVar14) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_258);
  }
  FString::PathAppend(&local_258,lVar5,iVar14);
  if (local_1b0[0] != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  uVar8 = FPlatformFileManager::Get();
  plVar16 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar8);
  puVar13 = &DAT_143f3eda8;
  if (local_250 != 0) {
    puVar13 = local_258;
  }
  cVar6 = (**(code **)(*plVar16 + 0x68))(plVar16,puVar13);
  if (cVar6 != '\0') {
    puVar13 = &DAT_143f3eda8;
    if (local_250 != 0) {
      puVar13 = local_258;
    }
    FUN_141676460(&local_248,puVar13,0);
  }
  if ((int)local_240 != 0) {
    FArchive::FArchive(local_f8);
    local_68 = 0;
    local_f8[0] = &PTR_FUN_143f4a3a0;
    local_60 = &local_248;
    local_58 = 0x7fffffffffffffff;
    FArchive::SetIsLoading(local_f8,1);
    FArchive::SetIsPersistent(local_f8,1);
    FArchiveProxy::FArchiveProxy(local_198,local_f8);
    local_100 = 1;
    local_198[0] = &PTR_FUN_143f4a5b0;
    FUN_140459c90(local_198,lVar3);
    if ((local_170 & 1) != 0) {
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        uVar8 = FMemory::Realloc(*(longlong *)(param_1 + 0xf0),0,0);
        *(undefined8 *)(param_1 + 0xf0) = uVar8;
      }
      *(undefined4 *)(param_1 + 0xf8) = 0;
      TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::ConditionalRehash(lVar3,*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xe4),0);
    }
    cVar6 = (**(code **)(*local_108 + 0xa0))();
    if (cVar6 == '\0') {
      local_1d8 = &local_res20;
      local_238 = 0;
      local_1c8 = &local_228;
      local_230 = 0;
      do {
        FString::PrintfImpl(&local_200,L"TextureAtlasDetails%d",iVar15);
        puVar13 = &DAT_143f3eda8;
        if (local_1f8 != 0) {
          puVar13 = local_200;
        }
        plVar16 = (longlong *)FName::FName(local_1c0,puVar13,1);
        lVar3 = *plVar16;
        uVar8 = GetTransientPackage();
        if (lVar3 == 0) {
          FUN_1417846f0(uVar8,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        uVar9 = FUN_140491900();
        local_res20 = (longlong *)FUN_1417985e0(uVar9,uVar8,lVar3,3,0,0,0,0,0);
        if (local_200 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        FString::PrintfImpl(&local_1f0,L"ContainedTextures%d",iVar15);
        puVar13 = &DAT_143f3eda8;
        if (local_1e8 != 0) {
          puVar13 = local_1f0;
        }
        plVar16 = (longlong *)FName::FName(local_1b8,puVar13,1);
        lVar3 = *plVar16;
        uVar8 = GetTransientPackage();
        if (lVar3 == 0) {
          FUN_1417846f0(uVar8,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        uVar9 = FUN_1404913f0();
        local_228 = (longlong *)FUN_1417985e0(uVar9,uVar8,lVar3,3,0,0,0,0,0);
        if (local_1f0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        (**(code **)(*local_res20 + 0xa8))(local_res20,local_198);
        (**(code **)(*local_228 + 0xa8))(local_228,local_198);
        local_1e0 = local_res20 + 5;
        FUN_14044dbe0(param_1 + 0x50,local_res10,&local_1e0,0);
        local_1d0 = local_res20 + 5;
        FUN_14044d970(param_1,local_res18,&local_1d0,0);
        plVar16 = local_res20;
        plVar10 = (longlong *)operator_new(0x30);
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar10 + 1) = 1;
          *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
          *plVar10 = (longlong)&PTR_FUN_143f4cf38;
          FString::FString(plVar10 + 2,plVar16 + 5);
          *(undefined1 *)(plVar10 + 4) = 0;
          plVar10[5] = 0;
        }
        local_210 = plVar10 + 2;
        local_208 = plVar10;
        SharedPointerInternals::EnableSharedFromThis(&local_210,local_210,local_210);
        plVar10 = local_208;
        plVar16 = local_210;
        if (local_208 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_208 + 1) = (int)local_208[1] + 1;
          UNLOCK();
        }
        iVar14 = *(int *)(param_1 + 0xa8);
        *(int *)(param_1 + 0xa8) = iVar14 + 1;
        if (*(int *)(param_1 + 0xac) < iVar14 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar14);
        }
        plVar1 = local_208;
        plVar11 = (longlong *)((longlong)iVar14 * 0x10 + *plVar4);
        *plVar11 = (longlong)plVar16;
        plVar11[1] = (longlong)plVar10;
        if (local_208 != (longlong *)0x0) {
          LOCK();
          plVar16 = local_208 + 1;
          lVar3 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_208)(local_208);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            iVar14 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
            }
          }
        }
        iVar15 = iVar15 + 1;
        cVar6 = (**(code **)(*local_108 + 0xa0))();
      } while (cVar6 == '\0');
    }
    FArchive::~FArchive(local_198);
    FArchive::~FArchive(local_f8);
  }
  if (local_258 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_248 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140473960 FUN_140473960 body=537 status=ok
// SIG undefined FUN_140473960(void)

void FUN_140473960(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined8 local_78;
  longlong local_70 [7];
  
  iVar3 = (int)param_2[1];
  plVar1 = (longlong *)(param_1 + 0x1c0);
  if (*(int *)(param_1 + 0x1cc) < iVar3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1,iVar3);
  }
  iVar11 = 0;
  if (iVar3 != 0) {
    do {
      cVar7 = FWeakObjectPtr::IsValid(*param_2 + (longlong)iVar11 * 8);
      if (cVar7 != '\0') {
        lVar9 = FWeakObjectPtr::Get(*param_2 + (longlong)iVar11 * 8);
        plVar5 = *(longlong **)(*(longlong *)(lVar9 + 0x728) + 0x38);
        iVar4 = (int)plVar5[1];
        local_84 = 0;
        local_80 = 0;
        local_78 = 0;
        local_88 = 0xffffffff;
        FWeakObjectPtr::operator=(&local_88,lVar9);
        if (local_78._4_4_ < iVar4) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(&local_80,iVar4);
        }
        iVar10 = 0;
        if (iVar4 != 0) {
          do {
            local_70[0] = 0;
            local_70[2] = 0;
            local_70[4] = 0;
            local_70[1] = 0;
            local_70[3] = 0;
            local_70[5] = 0;
            FUN_140473b80(*(undefined8 *)(*plVar5 + (longlong)iVar10 * 8),local_70);
            uVar6 = local_78;
            lVar9 = (longlong)(int)local_78;
            iVar8 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar8);
            if (local_78._4_4_ < iVar8) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_80,uVar6 & 0xffffffff);
            }
            FUN_140452ed0(lVar9 * 0x30 + local_80,local_70);
            if (local_70[4] != 0) {
              FMemory::Free();
            }
            if (local_70[2] != 0) {
              FMemory::Free();
            }
            if (local_70[0] != 0) {
              FMemory::Free();
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 != iVar4);
        }
        iVar4 = *(int *)(param_1 + 0x1c8);
        *(int *)(param_1 + 0x1c8) = iVar4 + 1;
        if (*(int *)(param_1 + 0x1cc) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1,iVar4);
        }
        puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar4 * 0x18);
        *puVar2 = local_88;
        puVar2[1] = local_84;
        *(undefined8 *)(puVar2 + 2) = 0;
        *(longlong *)(puVar2 + 2) = local_80;
        local_80 = 0;
        puVar2[4] = (int)local_78;
        puVar2[5] = local_78._4_4_;
        local_78 = 0;
        TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
        ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(&local_80);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar3);
  }
  *(undefined1 *)(param_1 + 0x231) = 1;
  return;
}



// FUNCTION 140473b80 FUN_140473b80 body=635 status=ok
// SIG undefined FUN_140473b80(void)

void FUN_140473b80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  void *_Src;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (((0x1d < DAT_146ab62cc) || ((0x303a0000U >> (DAT_146ab62cc & 0x1f) & 1) == 0)) ||
     ((*(longlong **)(param_1 + 0xa0) != (longlong *)0x0 &&
      (((*(longlong *)(param_1 + 0xb0) != 0 &&
        (cVar2 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x50))(), cVar2 != '\0')) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x50))(), cVar2 != '\0')))))) {
    uVar8 = 0;
    if ((DAT_146ab62cc < 0x1e) && ((0x303a0000U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
      FUN_14272bf80(param_1 + 0x208,param_2);
    }
    else {
      cVar2 = *(char *)(param_1 + 0x268);
      iVar3 = FUN_14281e810(param_1);
      iVar3 = iVar3 * 3;
      iVar7 = 4;
      if (cVar2 == '\0') {
        iVar7 = 2;
      }
      _Src = (void *)(**(code **)(*DAT_146ab6358 + 0x4f8))
                               (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x238),0,
                                iVar7 * iVar3,0);
      iVar7 = (int)param_2[1] + iVar3;
      *(int *)(param_2 + 1) = iVar7;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2);
      }
      if (cVar2 == '\0') {
        uVar5 = uVar8;
        if (iVar3 != 0) {
          do {
            *(uint *)(*param_2 + uVar5 * 4) = (uint)*(ushort *)((longlong)_Src + uVar5 * 2);
            uVar5 = uVar5 + 1;
          } while (uVar5 != (longlong)iVar3);
        }
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  ((void *)*param_2,_Src,(ulonglong)(uint)(*(int *)((longlong)param_2 + 0xc) << 2));
      }
      (**(code **)(*DAT_146ab6358 + 0x500))
                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x238));
    }
    FUN_140473e00(param_1,param_2 + 2);
    uVar4 = FStaticMeshLODResources::GetNumVertices(param_1);
    iVar3 = *(int *)(param_1 + 0x138);
    if ((DAT_146ab62cc < 0x1e) && ((0x303a0000U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
      lVar6 = *(longlong *)(param_1 + 0x130);
    }
    else {
      lVar6 = (**(code **)(*DAT_146ab6358 + 0x4b0))
                        (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x118),0,
                         uVar4 * iVar3,0);
    }
    iVar7 = (int)param_2[5] + uVar4;
    *(int *)(param_2 + 5) = iVar7;
    if (*(int *)((longlong)param_2 + 0x2c) < iVar7) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2 + 4);
    }
    if (uVar4 != 0) {
      do {
        iVar7 = (int)uVar8;
        uVar5 = (ulonglong)(uint)(iVar7 * iVar3);
        uVar8 = (ulonglong)(iVar7 + 1U);
        puVar1 = (undefined8 *)(param_2[4] + (longlong)iVar7 * 0xc);
        *puVar1 = *(undefined8 *)(uVar5 + lVar6);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(uVar5 + 8 + lVar6);
      } while (iVar7 + 1U != uVar4);
    }
    if ((0x1d < DAT_146ab62cc) || ((0x303a0000U >> (DAT_146ab62cc & 0x1f) & 1) == 0)) {
      (**(code **)(*DAT_146ab6358 + 0x4b8))
                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x118));
    }
  }
  return;
}



// FUNCTION 140473e00 FUN_140473e00 body=1098 status=ok
// SIG undefined FUN_140473e00(void)

void FUN_140473e00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  void *pvVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  uint local_res18;
  uint local_res20;
  int local_68;
  
  iVar7 = FStaticMeshLODResources::GetNumVertices();
  cVar4 = *(char *)(param_1 + 0xe0);
  iVar3 = *(int *)(param_1 + 0xd8) * 8;
  if (cVar4 == '\0') {
    iVar3 = *(int *)(param_1 + 0xd8) * 4;
  }
  if ((DAT_146ab62cc < 0x1e) && ((0x303a0000U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
    lVar8 = *(longlong *)(param_1 + 200);
  }
  else {
    lVar8 = (**(code **)(*DAT_146ab6358 + 0x4b0))
                      (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x98),0,iVar3 * iVar7,
                       0);
  }
  iVar9 = (int)param_2[1] + iVar7;
  *(int *)(param_2 + 1) = iVar9;
  if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow();
  }
  uVar6 = *(uint *)(param_1 + 0xd8);
  local_68 = 0;
  if (iVar7 != 0) {
    uVar10 = (ulonglong)_tls_index;
    pvVar13 = ThreadLocalStoragePointer;
    do {
      if (uVar6 != 0) {
        lVar14 = 0;
        lVar12 = (longlong)local_68 * 0x40;
        uVar15 = (ulonglong)uVar6;
        lVar1 = (ulonglong)(uint)(iVar3 * local_68) + (longlong)local_68 * -0x40 + lVar8;
        do {
          if (cVar4 == '\0') {
            lVar2 = (ulonglong)(uint)(iVar3 * local_68) + lVar8;
            uVar5 = *(ushort *)(lVar14 + 2 + lVar2);
            local_res20 = (uVar5 & 0xffff8000) << 0x10;
            if ((uVar5 & 0x7c00) == 0) {
              uVar11 = uVar5 & 0x3ff;
              if ((uVar5 & 0x3ff) != 0) {
                if ((*(int *)(*(longlong *)((longlong)pvVar13 + uVar10 * 8) + 0x38) < DAT_1468509dc)
                   && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                  DAT_1468509d8 = 1.442695;
                  _Init_thread_footer(&DAT_1468509dc);
                }
                fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar11);
                iVar9 = 10 - (int)(fVar16 * DAT_1468509d8);
                uVar10 = (ulonglong)_tls_index;
                local_res20 = uVar11 << ((char)iVar9 + 0xdU & 0x1f) & 0x7fffff |
                              (0x71U - iVar9 & 0xff) << 0x17 | local_res20;
                pvVar13 = ThreadLocalStoragePointer;
              }
            }
            else if ((uVar5 & 0x7c00) == 0x7c00) {
              local_res20 = local_res20 | 0x477fe000;
            }
            else {
              local_res20 = ((uVar5 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar5 & 0x3ff) << 0xd |
                            local_res20;
            }
            uVar5 = *(ushort *)(lVar14 + lVar2);
            local_res18 = (uVar5 & 0xffff8000) << 0x10;
            if ((uVar5 & 0x7c00) == 0) {
              uVar11 = uVar5 & 0x3ff;
              if ((uVar5 & 0x3ff) != 0) {
                if ((*(int *)(*(longlong *)((longlong)pvVar13 + uVar10 * 8) + 0x38) < DAT_1468509dc)
                   && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                  DAT_1468509d8 = 1.442695;
                  _Init_thread_footer(&DAT_1468509dc);
                }
                fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar11);
                iVar9 = 10 - (int)(fVar16 * DAT_1468509d8);
                local_res18 = uVar11 << ((char)iVar9 + 0xdU & 0x1f) & 0x7fffff |
                              (0x71U - iVar9 & 0xff) << 0x17 | local_res18;
              }
            }
            else if ((uVar5 & 0x7c00) == 0x7c00) {
              local_res18 = local_res18 | 0x477fe000;
            }
            else {
              local_res18 = ((uVar5 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar5 & 0x3ff) << 0xd |
                            local_res18;
            }
            uVar10 = (ulonglong)_tls_index;
            pvVar13 = ThreadLocalStoragePointer;
          }
          else {
            local_res18 = *(uint *)(lVar12 + lVar1);
            local_res20 = *(uint *)(lVar12 + 4 + lVar1);
          }
          lVar2 = *param_2;
          lVar14 = lVar14 + 4;
          *(uint *)(lVar12 + 4 + lVar2) = local_res20;
          *(uint *)(lVar12 + lVar2) = local_res18;
          lVar12 = lVar12 + 8;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      local_68 = local_68 + 1;
    } while (local_68 != iVar7);
  }
  if ((0x1d < DAT_146ab62cc) || ((0x303a0000U >> (DAT_146ab62cc & 0x1f) & 1) == 0)) {
    (**(code **)(*DAT_146ab6358 + 0x4b8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x98));
  }
  return;
}



// FUNCTION 140474250 FUN_140474250 body=2226 status=ok
// SIG undefined FUN_140474250(void)

uint * FUN_140474250(uint *param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 5) = 0;
  *(bool *)(param_1 + 2) = (*(byte *)(param_2 + 8) & 3) != 0;
  *(bool *)((longlong)param_1 + 10) = (*(byte *)(param_2 + 8) & 0x30) != 0;
  *(bool *)((longlong)param_1 + 9) = (*(byte *)(param_2 + 8) & 0xc) != 0;
  *(bool *)((longlong)param_1 + 0xb) = (*(byte *)(param_2 + 8) & 0xc0) != 0;
  if (1 < param_3 - 1) {
    if (param_3 == 3) {
      *param_1 = (uint)*(ushort *)(param_2 + 0x18);
      return param_1;
    }
    *param_1 = 0;
    return param_1;
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 10);
  lVar4 = *(longlong *)(param_2 + 0x18);
  plVar5 = *(longlong **)(param_2 + 0x28);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((((lVar4 == DAT_1469ea090) || (lVar4 == DAT_1469ea0c0)) || (lVar4 == DAT_1469ea0f0)) ||
     (lVar4 == DAT_1469ea120)) {
    param_1[4] = 1;
  }
  else if (((lVar4 == DAT_1469ea0a8) || (lVar4 == DAT_1469ea0d8)) ||
          ((lVar4 == DAT_1469ea108 || (lVar4 == DAT_1469ea138)))) {
    param_1[4] = 2;
  }
  else if (((lVar4 == DAT_1469ea060) || (lVar4 == DAT_1469e9dd8)) ||
          ((((lVar4 == DAT_1469e9df0 ||
             (((lVar4 == DAT_1469e9e08 || (lVar4 == DAT_1469e9e20)) || (lVar4 == DAT_1469e9e38))))
            || (((lVar4 == DAT_1469e9e50 || (lVar4 == DAT_1469e9e68)) || (lVar4 == DAT_1469e9e80))))
           || ((lVar4 == DAT_1469e9e98 || (lVar4 == DAT_1469e9eb0)))))) {
    param_1[4] = 3;
  }
  uVar6 = *param_1;
  if (lVar4 == DAT_1469e9868) {
    uVar6 = 0;
  }
  *param_1 = uVar6;
  uVar7 = 0;
  if (lVar4 == DAT_1469e9880) {
    uVar6 = uVar7;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9898) {
    uVar6 = uVar7;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e98b0) {
    uVar6 = uVar7;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e98c8) {
    uVar6 = uVar7;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e98e0) {
    uVar6 = 8;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e98f8) {
    uVar6 = 9;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9910) {
    uVar6 = 0xd;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9928) {
    uVar6 = 0x13;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9940) {
    uVar6 = 0x14;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9958) {
    uVar6 = 0x1b;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9970) {
    uVar6 = 0x20;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9988) {
    uVar6 = 0x21;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e99a0) {
    uVar6 = 0x22;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e99b8) {
    uVar6 = 0x23;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e99d0) {
    uVar6 = 0x24;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e99e8) {
    uVar6 = 0x25;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9a00) {
    uVar6 = 0x26;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9a18) {
    uVar6 = 0x27;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9a30) {
    uVar6 = 0x28;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9a48) {
    uVar6 = 0x2d;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9a60) {
    uVar6 = 0x2e;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9a78) {
    uVar6 = 0x30;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9a90) {
    uVar6 = 0x31;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9aa8) {
    uVar6 = 0x32;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9ac0) {
    uVar6 = 0x33;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9ad8) {
    uVar6 = 0x34;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9af0) {
    uVar6 = 0x35;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9b08) {
    uVar6 = 0x36;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9b20) {
    uVar6 = 0x37;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9b38) {
    uVar6 = 0x38;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9b50) {
    uVar6 = 0x39;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9b68) {
    uVar6 = 0x41;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9b80) {
    uVar6 = 0x42;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9b98) {
    uVar6 = 0x43;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9bb0) {
    uVar6 = 0x44;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9bc8) {
    uVar6 = 0x45;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9be0) {
    uVar6 = 0x46;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9bf8) {
    uVar6 = 0x47;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9c10) {
    uVar6 = 0x48;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9c28) {
    uVar6 = 0x49;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9c40) {
    uVar6 = 0x4a;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9c58) {
    uVar6 = 0x4b;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9c70) {
    uVar6 = 0x4c;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9c88) {
    uVar6 = 0x4d;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9ca0) {
    uVar6 = 0x4e;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9cb8) {
    uVar6 = 0x4f;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9cd0) {
    uVar6 = 0x50;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9ce8) {
    uVar6 = 0x51;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9d00) {
    uVar6 = 0x52;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9d18) {
    uVar6 = 0x53;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9d30) {
    uVar6 = 0x54;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9d48) {
    uVar6 = 0x55;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9d60) {
    uVar6 = 0x56;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9d78) {
    uVar6 = 0x57;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9d90) {
    uVar6 = 0x58;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9da8) {
    uVar6 = 0x59;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9dc0) {
    uVar6 = 0x5a;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9dd8) {
    uVar6 = 0x60;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9df0) {
    uVar6 = 0x61;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9e08) {
    uVar6 = 0x62;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9e20) {
    uVar6 = 99;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9e38) {
    uVar6 = 100;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9e50) {
    uVar6 = 0x65;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9e68) {
    uVar6 = 0x66;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9e80) {
    uVar6 = 0x67;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9e98) {
    uVar6 = 0x68;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9eb0) {
    uVar6 = 0x69;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9ec8) {
    uVar6 = 0x6a;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9ee0) {
    uVar6 = 0x6b;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9ef8) {
    uVar6 = 0x6d;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9f10) {
    uVar6 = 0x6e;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9f28) {
    uVar6 = 0x6f;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9f40) {
    uVar6 = 0x70;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9f58) {
    uVar6 = 0x71;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9f70) {
    uVar6 = 0x72;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9f88) {
    uVar6 = 0x73;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9fa0) {
    uVar6 = 0x74;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9fb8) {
    uVar6 = 0x75;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9fd0) {
    uVar6 = 0x76;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469e9fe8) {
    uVar6 = 0x77;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea000) {
    uVar6 = 0x78;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea018) {
    uVar6 = 0x79;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea030) {
    uVar6 = 0x7a;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea048) {
    uVar6 = 0x7b;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea060) {
    uVar6 = 0x90;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea078) {
    uVar6 = 0x91;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea090) {
    uVar6 = 0x10;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea0a8) {
    uVar6 = 0x10;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea0c0) {
    uVar6 = 0x11;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea0d8) {
    uVar6 = 0x11;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea0f0) {
    uVar6 = 0x12;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea108) {
    uVar6 = 0x12;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea120) {
    uVar6 = 0x5b;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea138) {
    uVar6 = 0x5c;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea150) {
    uVar6 = 0xba;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea168) {
    uVar6 = 0xbb;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea180) {
    uVar6 = 0xbc;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea198) {
    uVar6 = 0xbd;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea1c8) {
    uVar6 = 0xbe;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea1e0) {
    uVar6 = 0xbf;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea1f8) {
    uVar6 = 0xc0;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea210) {
    uVar6 = 0xdb;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea240) {
    uVar6 = 0xdc;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea258) {
    uVar6 = 0xdd;
  }
  *param_1 = uVar6;
  if (lVar4 == DAT_1469ea2a0) {
    uVar6 = 0xde;
  }
  *param_1 = uVar6;
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 140474b10 FUN_140474b10 body=380 status=ok
// SIG undefined FUN_140474b10(void)

undefined8 FUN_140474b10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar5 == DAT_1469ea4f8) {
    uVar6 = 0;
  }
  else if (lVar5 == DAT_1469ea510) {
    uVar6 = 1;
  }
  else if (lVar5 == DAT_1469ea528) {
    uVar6 = 2;
  }
  else if (lVar5 == DAT_1469ea540) {
    uVar6 = 3;
  }
  else if (lVar5 == DAT_1469ea558) {
    uVar6 = 4;
  }
  else if (lVar5 == DAT_1469ea570) {
    uVar6 = 5;
  }
  else if (lVar5 == DAT_1469ea588) {
    uVar6 = 6;
  }
  else if (lVar5 == DAT_1469ea5a0) {
    uVar6 = 7;
  }
  else if (lVar5 == DAT_1469ea498) {
    uVar6 = 8;
  }
  else if (lVar5 == DAT_1469ea4e0) {
    uVar6 = 9;
  }
  else if (lVar5 == DAT_1469ea468) {
    uVar6 = 10;
  }
  else if (lVar5 == DAT_1469ea480) {
    uVar6 = 0xb;
  }
  else if (lVar5 == DAT_1469ea5b8) {
    uVar6 = 0xc;
  }
  else if (lVar5 == DAT_1469ea5d0) {
    uVar6 = 0xd;
  }
  else if (lVar5 == DAT_1469ea600) {
    uVar6 = 0xe;
  }
  else {
    uVar6 = 0xf;
    if (lVar5 != DAT_1469ea5e8) {
      uVar6 = 0xffffffff;
    }
  }
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
  return uVar6;
}



// FUNCTION 140474d40 NeedsLoadForEditorGame body=20 status=ok
// SIG undefined NeedsLoadForEditorGame(void)

ulonglong UActorComponent::NeedsLoadForEditorGame(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xf8))();
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140474d60 FUN_140474d60 body=960 status=ok
// SIG undefined FUN_140474d60(void)

void FUN_140474d60(longlong param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  BOOL BVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  uint local_res8 [2];
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong *local_58;
  int iStack_50;
  uint uStack_4c;
  uint *local_48;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  
  BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  if (BVar8 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  }
  uStack_a4 = 1;
  plVar2 = (longlong *)(param_1 + 0x240);
  local_a8 = 0;
  uVar4 = *(uint *)(param_1 + 0x268);
  puVar1 = (uint *)(param_1 + 0x250);
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar4 != 0) {
    puVar13 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar5 = *puVar13;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar5 == 0) {
      lVar11 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar9 = local_a8 + 1;
      bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar9;
      if (bVar7) goto LAB_140474e5c;
      uVar5 = puVar13[lVar11 + 1];
    }
    uStack_a4 = -uVar5 & uVar5;
    iVar9 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_94 = (iStack_90 - iVar9) + 0x1f;
    if ((int)uVar4 < (int)uStack_94) {
LAB_140474e5c:
      uStack_94 = uVar4;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x268);
  uStack_40 = 0xffffffff;
  uStack_3c = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  local_res8[0] = -1 << ((byte)uVar5 & 0x1f);
  uVar12 = uVar5 & 0xffffffe0;
  iStack_50 = local_a8;
  uStack_4c = uStack_a4;
  local_88 = plVar2;
  puStack_78 = puVar1;
  local_48 = puVar1;
  local_38 = uStack_68;
  uStack_70 = uStack_40;
  uStack_6c = uStack_3c;
  local_58 = plVar2;
  uStack_94 = uVar5;
  if (uVar5 != uVar4) {
    puVar13 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = puVar13[(int)uVar5 >> 5] & local_res8[0];
    iVar9 = (int)uVar5 >> 5;
    while (uVar10 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_140474f32;
      uVar10 = puVar13[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar9 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_94 = (uVar12 - iVar9) + 0x1f;
    if ((int)uVar4 < (int)uStack_94) {
LAB_140474f32:
      uStack_94 = uVar4;
    }
  }
  while( true ) {
    if (((uStack_3c == uStack_94) && (local_48 == puVar1)) && (local_58 == plVar2)) {
      if ((*(int *)(param_1 + 0x2a8) == 0) || (lVar11 = *(longlong *)(param_1 + 0x298), lVar11 == 0)
         ) goto LAB_1404750f2;
      goto LAB_140474fb0;
    }
    puVar3 = (undefined8 *)(*local_58 + (longlong)(int)uStack_3c * 0x48);
    iVar9 = (**(code **)(**(longlong **)(*local_58 + 0x38 + (longlong)(int)uStack_3c * 0x48) + 8))()
    ;
    if (param_2 == iVar9) break;
    uStack_40 = uStack_40 & ~uStack_4c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
  }
  (**(code **)(*(longlong *)*puVar3 + 0x98))();
  (**(code **)(*(longlong *)puVar3[6] + 0x38))((longlong *)puVar3[6],0);
  FUN_14046bf60(plVar2,local_res8,puVar3);
  lVar11 = *plVar2 + (longlong)(int)local_res8[0] * 0x48;
  local_88 = *(longlong **)(lVar11 + 0x10);
  *(undefined8 *)(lVar11 + 0x10) = 0;
  uStack_80 = *(undefined8 *)(lVar11 + 0x18);
  *(undefined8 *)(lVar11 + 0x18) = 0;
  puStack_78 = *(uint **)(lVar11 + 0x20);
  *(undefined8 *)(lVar11 + 0x20) = 0;
  uStack_70 = *(uint *)(lVar11 + 0x28);
  uStack_6c = *(uint *)(lVar11 + 0x2c);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  uStack_68 = *(undefined8 *)(lVar11 + 0x30);
  local_60 = *(undefined8 *)(lVar11 + 0x38);
  FUN_1404836e0(plVar2);
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
            (&local_88);
  goto LAB_1404750f2;
  while (lVar11 = *(longlong *)(lVar11 + 0x40), lVar11 != 0) {
LAB_140474fb0:
    iVar9 = (**(code **)(**(longlong **)(lVar11 + 0x38) + 8))();
    if (param_2 == iVar9) {
      (**(code **)(**(longlong **)(lVar11 + 0x30) + 0x38))(*(longlong **)(lVar11 + 0x30),0);
      plVar2 = (longlong *)(param_1 + 0x290);
      if (*(int *)(param_1 + 0x2a8) == 1) {
        FUN_140467570(plVar2);
      }
      else {
        if (lVar11 == *(longlong *)(param_1 + 0x298)) {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x40);
          *(longlong *)(param_1 + 0x298) = lVar6;
          *(undefined8 *)(lVar6 + 0x48) = 0;
        }
        else if (lVar11 == *(longlong *)(param_1 + 0x2a0)) {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
          *(longlong *)(param_1 + 0x2a0) = lVar6;
          *(undefined8 *)(lVar6 + 0x40) = 0;
        }
        else {
          *(undefined8 *)(*(longlong *)(lVar11 + 0x40) + 0x48) = *(undefined8 *)(lVar11 + 0x48);
          *(undefined8 *)(*(longlong *)(lVar11 + 0x48) + 0x40) = *(undefined8 *)(lVar11 + 0x40);
        }
        FUN_14045d970(lVar11,1);
        (**(code **)(*plVar2 + 8))(plVar2,*(int *)(param_1 + 0x2a8) + -1);
      }
      break;
    }
  }
LAB_1404750f2:
                    /* WARNING: Could not recover jumptable at 0x000140475119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  return;
}



// FUNCTION 140475120 OnActorSpawned body=82 status=ok
// SIG undefined OnActorSpawned(void)

void FActorIteratorState::OnActorSpawned(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong local_res10 [3];
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x90);
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
      *(longlong *)(param_1 + 0x40) + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    local_res10[0] = param_2;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x30,local_res10);
  }
  return;
}



// FUNCTION 140475180 FUN_140475180 body=72 status=ok
// SIG undefined FUN_140475180(void)

undefined8
FUN_140475180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14048eb20(&DAT_1461f6280,param_4);
  FUN_14046f780(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 1404751d0 FUN_1404751d0 body=489 status=ok
// SIG undefined FUN_1404751d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1404751d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  undefined1 *puVar9;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188;
  undefined8 local_180;
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
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  uint local_f4;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
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
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_14048eb20(&DAT_1461f6280,param_4);
  local_1c8 = *(undefined8 *)(param_4 + 0x18);
  local_1c0 = *(undefined8 *)(param_4 + 0x20);
  local_1b8 = *(longlong **)(param_4 + 0x28);
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
    UNLOCK();
  }
  if ((*(byte *)(param_1 + 0x2d9) & 2) == 0) {
LAB_14047524b:
    if ((*(byte *)(param_1 + 0x2d9) & 1) != 0) {
      cVar8 = FKey::IsGamepadKey(&local_1c8);
      if (cVar8 == '\0') goto LAB_140475262;
    }
    local_1a8[0] = 1;
    local_f4 = local_f4 & 0xffffff00;
    puVar9 = local_1a8;
    local_1a0 = 0;
    local_198 = 0;
    local_188 = 0;
    bVar5 = false;
    local_180 = 0;
    local_128 = 0;
    local_120 = 0;
    bVar4 = true;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0x20702;
  }
  else {
    cVar8 = FKey::IsGamepadKey(&local_1c8);
    if (cVar8 == '\0') goto LAB_14047524b;
LAB_140475262:
    local_e8[0] = 0;
    local_34 = local_34 & 0xffffff00;
    local_e0 = 0;
    local_d8 = 0;
    bVar4 = false;
    bVar5 = true;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0x20702;
    puVar9 = local_e8;
  }
  FReply::FReply(param_2,puVar9);
  if (bVar4) {
    FUN_140438c20(local_1a8);
  }
  if (bVar5) {
    FUN_140438c20(local_e8);
  }
  plVar7 = local_1b8;
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1b8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_1b8)(local_1b8);
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
  return param_2;
}



// FUNCTION 140475460 FUN_140475460 body=146 status=ok
// SIG undefined FUN_140475460(void)

void FUN_140475460(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = plVar1[0x2c];
    if (*(longlong *)(lVar3 + 0x28) == 0) {
      lVar2 = plVar1[0x23];
      if (lVar2 == 0) {
        lVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1);
        lVar3 = plVar1[0x2c];
      }
      *(longlong *)(lVar3 + 0x28) = lVar2;
      if (*(longlong *)(plVar1[0x2c] + 0x28) == 0) {
        return;
      }
    }
    FUN_1404641b0(param_5,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 140475600 FUN_140475600 body=189 status=ok
// SIG undefined FUN_140475600(void)

void FUN_140475600(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x408))();
    if (DAT_1469f4590 != 0) {
      local_18 = 0;
      uStack_10 = 0;
      FUN_1418c3ef0(DAT_1469f4590,0,uVar6,&local_18);
    }
    local_20 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x28) != &local_28) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_20);
      plVar5 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
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
  return;
}



// FUNCTION 1404756c0 FUN_1404756c0 body=185 status=ok
// SIG undefined FUN_1404756c0(void)

void FUN_1404756c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar6 = FUN_14046f040();
    if (DAT_1469f4590 != 0) {
      local_18 = 0;
      uStack_10 = 0;
      FUN_1418c3ef0(DAT_1469f4590,0,uVar6,&local_18);
    }
    local_20 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x28) != &local_28) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_20);
      plVar5 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
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
  return;
}



// FUNCTION 140475780 FUN_140475780 body=51 status=ok
// SIG undefined FUN_140475780(void)

void FUN_140475780(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    *(ulonglong *)(lVar1 + 0x1e0) = CONCAT44(param_3,param_2);
    *(ulonglong *)(lVar1 + 0x1e8) = CONCAT44(param_5,param_4);
  }
  return;
}



// FUNCTION 1404757c0 FUN_1404757c0 body=62 status=ok
// SIG undefined FUN_1404757c0(void)

void FUN_1404757c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x100), lVar1 != 0)) {
    *(ulonglong *)(lVar1 + 0x218) = CONCAT44(param_3,param_2);
    *(ulonglong *)(lVar1 + 0x220) = CONCAT44(param_5,param_4);
  }
  return;
}



// FUNCTION 140475800 FUN_140475800 body=169 status=ok
// SIG undefined FUN_140475800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140475800(longlong param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    local_c8 = (undefined2 *)0x0;
    local_c0 = 0;
    FWindowsPlatformApplicationMisc::ClipboardPaste(&local_c8);
    puVar1 = &DAT_143f3eda8;
    if ((int)local_c0 != 0) {
      puVar1 = local_c8;
    }
    TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
              (local_b8,puVar1);
    (**(code **)*param_2)(param_2,local_30,local_28);
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_c8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1404758b0 FUN_1404758b0 body=416 status=ok
// SIG undefined FUN_1404758b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404758b0(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined1 auStack_178 [32];
  wchar_t *local_158;
  int local_150;
  undefined4 local_14c;
  wchar_t local_148 [128];
  wchar_t *local_48;
  wchar_t *local_40;
  uint local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    pwVar5 = (wchar_t *)0x0;
    local_48 = (wchar_t *)0x0;
    if (param_2 == 0) {
      local_40 = (wchar_t *)0x0;
      local_38 = 0;
    }
    else {
      local_158 = (wchar_t *)((ulonglong)local_158 & 0xffffffff00000000);
      FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                (&local_158,0x7fffffff,param_2,param_3);
      pwVar3 = local_158;
      local_38 = (uint)local_158;
      pwVar2 = pwVar5;
      if ((0x80 < (uint)local_158) && (pwVar2 = (wchar_t *)0x0, (uint)local_158 != 0)) {
        pwVar2 = (wchar_t *)FMemory::Realloc(0,(longlong)(int)(uint)local_158 * 2,0);
        local_48 = pwVar2;
      }
      local_158 = local_148;
      if (pwVar2 != (wchar_t *)0x0) {
        local_158 = pwVar2;
      }
      local_40 = local_158;
      FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>
                (&local_158,(ulonglong)pwVar3 & 0xffffffff,param_2,param_3);
    }
    uVar1 = local_38;
    pwVar3 = local_40;
    local_158 = (wchar_t *)0x0;
    local_14c = 0;
    iVar4 = local_38 + 1;
    if (local_38 == 0) {
      iVar4 = 0;
    }
    local_150 = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
      iVar4 = local_150;
      pwVar5 = local_158;
      if (0 < local_150) {
        wcsncpy(local_158,pwVar3,(longlong)(int)uVar1);
        pwVar5[(int)uVar1] = L'\0';
      }
    }
    pwVar3 = L"";
    if (iVar4 != 0) {
      pwVar3 = pwVar5;
    }
    FUN_1416cf5b0(pwVar3);
    if (pwVar5 != (wchar_t *)0x0) {
      FMemory::Free(pwVar5);
    }
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140475a50 FUN_140475a50 body=41 status=ok
// SIG undefined FUN_140475a50(void)

void FUN_140475a50(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = FUN_14046b320(param_2,param_2,param_1);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x478,local_res8);
  return;
}



// FUNCTION 140475a80 FUN_140475a80 body=41 status=ok
// SIG undefined FUN_140475a80(void)

void FUN_140475a80(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = FUN_14046b320(param_2,param_2,param_1);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x488,local_res8);
  return;
}



// FUNCTION 140475ab0 FUN_140475ab0 body=41 status=ok
// SIG undefined FUN_140475ab0(void)

void FUN_140475ab0(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = FUN_14046b320(param_2,param_2,param_1);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x458,local_res8);
  return;
}



// FUNCTION 140475ae0 FUN_140475ae0 body=41 status=ok
// SIG undefined FUN_140475ae0(void)

void FUN_140475ae0(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = FUN_14046b320(param_2,param_2,param_1);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x468,local_res8);
  return;
}



// FUNCTION 140475b10 FUN_140475b10 body=432 status=ok
// SIG undefined FUN_140475b10(void)

void FUN_140475b10(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar9 = 0;
  local_38 = 0;
  uStack_30 = 0xffffffff;
  local_48 = (undefined2 *)0x0;
  local_3c = 0;
  local_28 = 0;
  uStack_20 = 0;
  puVar8 = (undefined2 *)0x0;
  if ((param_2 != (char *)0x0) && (puVar8 = (undefined2 *)0x0, *param_2 != '\0')) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != '\0');
    iVar6 = (int)lVar7 + 1;
    local_40 = iVar6;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    iVar9 = local_40;
    puVar8 = local_48;
    FGenericPlatformString::Convert<char,wchar_t>(local_48,iVar6,param_2,iVar6,0x3f);
  }
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    puVar4 = &DAT_143f3eda8;
    if (iVar9 != 0) {
      puVar4 = puVar8;
    }
    iVar6 = FUN_140438070(puVar4);
    lVar7 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar7 = param_1 + 0x40;
    }
    iVar6 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)iVar6) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(param_1 + 8);
      do {
        lVar10 = (longlong)iVar6 * 0x38;
        puVar4 = &DAT_143f3eda8;
        if (iVar9 != 0) {
          puVar4 = puVar8;
        }
        if (*(int *)(lVar10 + 8 + lVar7) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar10 + lVar7);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar4);
        if (iVar3 == 0) {
          if (iVar6 != -1) {
            lVar7 = (longlong)iVar6 * 0x38;
            puVar1 = (undefined8 *)(lVar7 + 0x10 + *(longlong *)(param_1 + 8));
            local_38 = *puVar1;
            uStack_30 = *(undefined4 *)(puVar1 + 1);
            uStack_2c = *(undefined4 *)((longlong)puVar1 + 0xc);
            puVar1 = (undefined8 *)(lVar7 + 0x20 + *(longlong *)(param_1 + 8));
            local_28 = *puVar1;
            uStack_20 = puVar1[1];
            FUN_1404837d0(param_1 + 8,iVar6);
            bVar2 = false;
            goto LAB_140475c41;
          }
          break;
        }
        lVar7 = *(longlong *)(param_1 + 8);
        iVar6 = *(int *)(lVar10 + 0x30 + lVar7);
      } while (iVar6 != -1);
    }
  }
  bVar2 = true;
LAB_140475c41:
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
  }
  if (!bVar2) {
    FUN_140483c80(param_1,&local_38);
  }
  return;
}



// FUNCTION 140475cc0 FUN_140475cc0 body=87 status=ok
// SIG undefined FUN_140475cc0(void)

void FUN_140475cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x48);
  if (lVar1 != 0) {
    FUN_140453810(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 140475d20 FUN_140475d20 body=34 status=ok
// SIG undefined FUN_140475d20(void)

void FUN_140475d20(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = FUN_14048ce70(param_2);
    *(undefined4 *)(lVar1 + 0x1d0) = uVar2;
  }
  return;
}



// FUNCTION 140475d50 FUN_140475d50 body=46 status=ok
// SIG undefined FUN_140475d50(void)

void FUN_140475d50(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x100), lVar1 != 0)) {
    uVar2 = FUN_14048ce70(param_2);
    *(undefined4 *)(lVar1 + 0x228) = uVar2;
  }
  return;
}



// FUNCTION 140475d80 FUN_140475d80 body=99 status=ok
// SIG undefined FUN_140475d80(void)

undefined1 * FUN_140475d80(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x390);
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x390);
    uVar3 = *(undefined4 *)(lVar2 + 0x1d0);
  }
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = uVar3;
  return param_2;
}



// FUNCTION 140475e20 FUN_140475e20 body=378 status=ok
// SIG undefined FUN_140475e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_140475e20(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if ((*(char *)(param_1 + 0x374) == '\0') && (*(char *)(param_1 + 0x375) == '\0')) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  else {
    local_f8 = 0;
    if (*(char *)(param_4 + 0x5c) == '\0') {
      FUN_1404795c0(param_1,local_e8);
    }
    else {
      FUN_14047c0d0();
    }
    FUN_140438c20(local_e8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  return param_2;
}



// FUNCTION 140475fa0 HandleKeyUp body=126 status=ok
// SIG undefined HandleKeyUp(void)

undefined1 * FSlateEditableTextLayout::HandleKeyUp(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 140476020 FUN_140476020 body=3323 status=ok
// SIG undefined FUN_140476020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140476020(longlong param_1,longlong param_2,undefined8 *param_3,int *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  char *pcVar6;
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
  longlong lVar21;
  char cVar22;
  longlong *plVar23;
  WriteBytesMem *this;
  uchar *puVar24;
  longlong *plVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  longlong *plVar29;
  undefined8 *puVar30;
  longlong lVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  uint uVar34;
  longlong lVar35;
  void *pvVar36;
  bool bVar37;
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
  undefined1 auStack_3378 [32];
  int *local_3358;
  undefined1 *local_3350;
  undefined8 **local_3348;
  undefined4 local_3340;
  uint local_3338 [2];
  int *local_3330;
  undefined1 local_3328 [4];
  uint local_3324;
  undefined8 *local_3320;
  undefined8 local_3318;
  undefined4 local_3310;
  int local_330c;
  undefined8 *local_3308;
  int *local_3300;
  longlong local_32f8;
  ulonglong local_32f0;
  longlong local_32e8;
  undefined8 local_32e0;
  undefined1 local_32d8 [8];
  longlong local_32d0;
  undefined8 local_32c0;
  undefined8 uStack_32b8;
  undefined8 local_32b0;
  undefined8 local_32a8;
  undefined8 local_32a0;
  float local_3298;
  float local_3294;
  float local_3290;
  undefined8 local_328c;
  uint local_3284;
  undefined *local_3280;
  undefined4 local_3278;
  undefined *local_3270;
  undefined4 local_3268;
  undefined8 uStack_3254;
  undefined8 uStack_324c;
  undefined8 uStack_3240;
  undefined1 local_3218 [72];
  undefined4 uStack_31d0;
  undefined4 uStack_31cc;
  float local_31c8;
  float fStack_31c4;
  float fStack_31c0;
  float fStack_31bc;
  float local_31b8;
  float fStack_31b4;
  float fStack_31b0;
  float fStack_31ac;
  float local_31a8;
  float fStack_31a4;
  float fStack_31a0;
  float fStack_319c;
  float local_3198;
  float fStack_3194;
  float fStack_3190;
  float fStack_318c;
  undefined1 local_3188 [176];
  undefined1 local_30d8 [1392];
  undefined8 local_2b68;
  int *piStack_2b60;
  undefined8 local_2b58;
  undefined8 uStack_2b50;
  undefined8 local_2b48;
  undefined8 uStack_2b40;
  undefined8 local_2b38;
  undefined8 uStack_2b30;
  undefined8 local_2b28;
  undefined8 uStack_2b20;
  undefined8 local_2b18;
  undefined8 uStack_2b10;
  undefined8 local_2b08;
  undefined8 uStack_2b00;
  undefined8 local_2af8;
  undefined8 uStack_2af0;
  undefined8 local_2ae8;
  undefined8 uStack_2ae0;
  undefined4 local_2ad8;
  undefined4 uStack_2ad4;
  undefined4 uStack_2ad0;
  undefined4 uStack_2acc;
  undefined4 local_2ac8;
  undefined4 uStack_2ac4;
  undefined4 uStack_2ac0;
  undefined4 uStack_2abc;
  undefined8 local_2ab8;
  undefined1 local_2aa8 [32];
  undefined8 *local_2a88 [110];
  undefined1 local_2718 [5800];
  undefined4 local_1070;
  undefined1 local_1008 [3888];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_3378;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    pcVar6 = *(char **)(param_4 + 0x26);
    local_32f8 = 0;
    lVar35 = -1;
    local_32f0 = 0;
    local_3300 = param_4;
    local_32e8 = param_1;
    if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
      do {
        lVar35 = lVar35 + 1;
      } while (pcVar6[lVar35] != '\0');
      uVar34 = (int)lVar35 + 1;
      local_32f0 = (ulonglong)uVar34;
      if (0 < (int)uVar34) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_32f8,0);
      }
      local_3358 = (int *)CONCAT62(local_3358._2_6_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_32f8,uVar34,pcVar6,uVar34);
    }
    piVar1 = local_3300;
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x80,&local_330c,&local_32f8);
    plVar29 = (longlong *)0x0;
    if (local_330c != -1) {
      plVar29 = (longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)local_330c * 0x28);
    }
    plVar23 = plVar29 + 2;
    if (plVar29 == (longlong *)0x0) {
      plVar23 = (longlong *)0x0;
    }
    if (plVar23 != (longlong *)0x0) {
      puVar33 = (undefined8 *)*plVar23;
      puVar30 = puVar33 + (longlong)(int)plVar23[1] * 3;
      if (puVar33 != puVar30) {
        do {
          if (*(int *)(puVar33 + 1) == *piVar1) {
            this = (WriteBytesMem *)
                   (**(code **)(*(longlong *)*puVar33 + 0x300))
                             ((longlong *)*puVar33,
                              *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8),3);
            puVar24 = AK::WriteBytesMem::Bytes(this);
            if (puVar24 != (uchar *)0x0) {
              plVar29 = (longlong *)(puVar24 + 0x38);
              local_3280 = &DAT_146850680;
              local_3278 = 0;
              TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
              ::FindId(plVar29,&local_3324,&local_3280);
              plVar23 = (longlong *)0x0;
              if (local_3324 != 0xffffffff) {
                plVar23 = (longlong *)((longlong)(int)local_3324 * 0x20 + *plVar29);
              }
              plVar25 = plVar23 + 2;
              if (plVar23 == (longlong *)0x0) {
                plVar25 = (longlong *)0x0;
              }
              lVar35 = *plVar25;
              local_3270 = &DAT_1468507d0;
              local_3268 = 0;
              TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
              ::FindId(plVar29,local_3338,&local_3270);
              if (local_3338[0] == 0xffffffff) {
                lVar31 = 0;
              }
              else {
                lVar31 = (longlong)(int)local_3338[0] * 0x20 + *plVar29;
              }
              if (lVar35 != 0) {
                plVar29 = (longlong *)(lVar31 + 0x10);
                if (lVar31 == 0) {
                  plVar29 = (longlong *)0x0;
                }
                local_32d0 = *plVar29;
                if (local_32d0 != 0) {
                  puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  local_3330 = *(int **)(*(longlong *)(local_32e8 + 0x28) + 0x30);
                  puVar30 = puVar32 + 5;
                  if (*(undefined8 **)(param_2 + 0x38) < puVar30) {
                    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
                    puVar32 = (undefined8 *)
                              (*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar30 = puVar32 + 5;
                  }
                  *(undefined8 **)(param_2 + 0x30) = puVar30;
                  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                  **(undefined8 **)(param_2 + 8) = puVar32;
                  *(undefined8 **)(param_2 + 8) = puVar32 + 1;
                  puVar32[1] = 0;
                  *puVar32 = &PTR_LAB_143f489e0;
                  puVar32[3] = local_3330;
                  *(undefined4 *)(puVar32 + 2) = 0;
                  *(undefined4 *)(puVar32 + 4) = 0;
                  local_2b68 = *param_3;
                  piStack_2b60 = (int *)param_3[1];
                  local_2ab8 = param_3[0x16];
                  local_2b58 = param_3[2];
                  uStack_2b50 = param_3[3];
                  local_2b48 = param_3[4];
                  uStack_2b40 = param_3[5];
                  local_2b38 = param_3[6];
                  uStack_2b30 = param_3[7];
                  local_2b28 = param_3[8];
                  uStack_2b20 = param_3[9];
                  local_2b18 = param_3[10];
                  uStack_2b10 = param_3[0xb];
                  local_2b08 = param_3[0xc];
                  uStack_2b00 = param_3[0xd];
                  local_2ae8 = param_3[0x10];
                  uStack_2ae0 = param_3[0x11];
                  local_2af8 = param_3[0xe];
                  uStack_2af0 = param_3[0xf];
                  local_2ad8 = *(undefined4 *)(param_3 + 0x12);
                  uStack_2ad4 = *(undefined4 *)((longlong)param_3 + 0x94);
                  uStack_2ad0 = *(undefined4 *)(param_3 + 0x13);
                  uStack_2acc = *(undefined4 *)((longlong)param_3 + 0x9c);
                  local_2ac8 = *(undefined4 *)(param_3 + 0x14);
                  uStack_2ac4 = *(undefined4 *)((longlong)param_3 + 0xa4);
                  uStack_2ac0 = *(undefined4 *)(param_3 + 0x15);
                  uStack_2abc = *(undefined4 *)((longlong)param_3 + 0xac);
                  lVar31 = *(longlong *)(lVar35 + 0x48);
                  if (*(char *)(lVar31 + 0x28) == '\0') {
                    FUN_1419f3850(lVar31);
                  }
                  local_3330 = *(int **)(lVar31 + 0x38);
                  lVar31 = *(longlong *)(local_32d0 + 0x48);
                  if (*(char *)(lVar31 + 0x28) == '\0') {
                    FUN_1419f3850(lVar31);
                  }
                  local_2b48 = *(undefined8 *)(lVar31 + 0x40);
                  piStack_2b60 = local_3330;
                  FUN_141ed6ac0(param_2,&local_2b68,2,1);
                  iVar5 = piVar1[0x24];
                  puVar32 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar30 = puVar32 + 3;
                  if (*(undefined8 **)(param_2 + 0x38) < puVar30) {
                    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
                    puVar32 = (undefined8 *)
                              (*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar30 = puVar32 + 3;
                  }
                  *(undefined8 **)(param_2 + 0x30) = puVar30;
                  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                  local_32c0 = 0;
                  uStack_32b8 = 0;
                  **(undefined8 **)(param_2 + 8) = puVar32;
                  *(undefined8 **)(param_2 + 8) = puVar32 + 1;
                  puVar32[1] = 0;
                  *puVar32 = &PTR_LAB_143f489c0;
                  *(int *)(puVar32 + 2) = iVar5;
                  local_32a0 = 0;
                  local_3318 = 0xf9ffffffffffffff;
                  local_32b0 = 0xf9ffffffffffffff;
                  local_3284 = local_3284 & 0xfffffffc | 0xc;
                  local_3310 = 0xffffffff;
                  local_32a8 = 0xffffffffffffffff;
                  local_328c = 0x3f800000;
                  local_3298 = (float)(DAT_1468b5a78 - DAT_1468e2430);
                  local_3294 = (float)DAT_1464a97d0;
                  local_3290 = local_3298;
                  FUN_142743490(local_3188,&local_32c0);
                  FUN_14045acf0(local_3328,local_2aa8,piVar1 + 0xc,local_3188);
                  FUN_142745180(local_1008);
                  local_3348 = (undefined8 **)FUN_1404546d0(local_30d8);
                  local_3350 = local_2718;
                  local_3358 = piVar1 + 0xc;
                  FUN_14275c280(local_2aa8,local_1008,local_3300 + 0x10,1);
                  local_3358 = (int *)((ulonglong)local_3358 & 0xffffffff00000000);
                  (**(code **)(*DAT_146ab6358 + 0x110))
                            (DAT_146ab6358,&local_3320,local_1008,&DAT_146b09708);
                  local_3308 = local_3320;
                  if (local_3320 != (undefined8 *)0x0) {
                    LOCK();
                    *(int *)(local_3320 + 1) = *(int *)(local_3320 + 1) + 1;
                    UNLOCK();
                  }
                  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3320);
                  puVar30 = local_2a88[0];
                  local_2a88[0] = local_3320;
                  lVar31 = 0;
                  local_3308 = (undefined8 *)0x0;
                  if (puVar30 != (undefined8 *)0x0) {
                    LOCK();
                    piVar1 = (int *)(puVar30 + 1);
                    iVar5 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      if ((*(char *)(puVar30 + 2) == '\0') &&
                         ((DAT_146ab62f5 != '\0' ||
                          (cVar22 = FOutputDevice::CanBeUsedOnAnyThread(), cVar22 == '\0')))) {
                        LOCK();
                        bVar37 = *(int *)((longlong)puVar30 + 0xc) == 0;
                        if (bVar37) {
                          *(int *)((longlong)puVar30 + 0xc) = 1;
                        }
                        UNLOCK();
                        if (bVar37) {
                          uVar34 = FLockFreeLinkPolicy::AllocLockFreeLink();
                          if (uVar34 != 0) {
                            lVar31 = (&DAT_1468a81f8)[uVar34 >> 0xe] +
                                     (ulonglong)(uVar34 & 0x3fff) * 0x18;
                          }
                          *(undefined8 **)(lVar31 + 8) = puVar30;
                          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                        }
                      }
                      else {
                        (**(code **)*puVar30)(puVar30,1);
                      }
                    }
                  }
                  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_3308);
                  piVar1 = local_3300;
                  uStack_324c = 0;
                  fVar2 = (float)local_3300[10];
                  fVar44 = (float)local_3300[8];
                  fVar45 = (float)local_3300[9];
                  fVar3 = (float)local_3300[0xb];
                  uStack_3254 = 0;
                  uStack_31d0 = 0;
                  uStack_31cc = 0x3f800000;
                  uStack_3240 = 0;
                  fVar46 = fVar2 * 1.0 + 0.0 + 0.0 + fVar44 * 0.0;
                  fVar47 = fVar2 * 0.0 + 0.0 + 0.0 + fVar45 * 0.0;
                  fVar48 = fVar2 * 0.0 + 0.0 + 0.0 + 0.0;
                  fVar49 = fVar2 * 0.0 + 0.0 + 0.0 + 0.0;
                  fVar40 = fVar3 * 0.0 + 0.0 + 0.0 + fVar44 * 0.0;
                  fVar41 = fVar3 * 1.0 + 0.0 + 0.0 + fVar45 * 0.0;
                  fVar42 = fVar3 * 0.0 + 0.0 + 0.0 + 0.0;
                  fVar43 = fVar3 * 0.0 + 0.0 + 0.0 + 0.0;
                  fVar38 = fVar44 * 0.0 + 0.0;
                  fVar39 = fVar45 * 0.0 + 0.0;
                  fVar2 = (float)local_3300[0x1c];
                  fVar3 = (float)local_3300[0x1d];
                  fVar7 = (float)local_3300[0x1e];
                  fVar8 = (float)local_3300[0x1f];
                  fVar9 = (float)local_3300[0x20];
                  fVar10 = (float)local_3300[0x21];
                  fVar11 = (float)local_3300[0x22];
                  fVar12 = (float)local_3300[0x23];
                  fVar13 = (float)local_3300[0x14];
                  fVar14 = (float)local_3300[0x15];
                  fVar15 = (float)local_3300[0x16];
                  fVar16 = (float)local_3300[0x17];
                  fVar17 = (float)local_3300[0x18];
                  fVar18 = (float)local_3300[0x19];
                  fVar19 = (float)local_3300[0x1a];
                  fVar20 = (float)local_3300[0x1b];
                  fVar44 = fVar44 * 1.0 + 0.0;
                  fVar45 = fVar45 * 1.0 + 0.0;
                  local_31c8 = fVar46 * fVar13 + fVar47 * fVar17 + fVar48 * fVar2 + fVar49 * fVar9;
                  fStack_31c4 = fVar46 * fVar14 + fVar47 * fVar18 + fVar48 * fVar3 + fVar49 * fVar10
                  ;
                  fStack_31c0 = fVar46 * fVar15 + fVar47 * fVar19 + fVar48 * fVar7 + fVar49 * fVar11
                  ;
                  fStack_31bc = fVar46 * fVar16 + fVar47 * fVar20 + fVar48 * fVar8 + fVar49 * fVar12
                  ;
                  local_31b8 = fVar40 * fVar13 + fVar41 * fVar17 + fVar42 * fVar2 + fVar43 * fVar9;
                  fStack_31b4 = fVar40 * fVar14 + fVar41 * fVar18 + fVar42 * fVar3 + fVar43 * fVar10
                  ;
                  fStack_31b0 = fVar40 * fVar15 + fVar41 * fVar19 + fVar42 * fVar7 + fVar43 * fVar11
                  ;
                  fStack_31ac = fVar40 * fVar16 + fVar41 * fVar20 + fVar42 * fVar8 + fVar43 * fVar12
                  ;
                  local_31a8 = fVar38 * fVar13 + fVar39 * fVar17 + fVar2 * 1.0 + fVar9 * 0.0;
                  fStack_31a4 = fVar38 * fVar14 + fVar39 * fVar18 + fVar3 * 1.0 + fVar10 * 0.0;
                  fStack_31a0 = fVar38 * fVar15 + fVar39 * fVar19 + fVar7 * 1.0 + fVar11 * 0.0;
                  fStack_319c = fVar38 * fVar16 + fVar39 * fVar20 + fVar8 * 1.0 + fVar12 * 0.0;
                  local_3198 = fVar44 * fVar13 + fVar45 * fVar17 + fVar2 * 0.0 + fVar9 * 1.0;
                  fStack_3194 = fVar44 * fVar14 + fVar45 * fVar18 + fVar3 * 0.0 + fVar10 * 1.0;
                  fStack_3190 = fVar44 * fVar15 + fVar45 * fVar19 + fVar7 * 0.0 + fVar11 * 1.0;
                  fStack_318c = fVar44 * fVar16 + fVar45 * fVar20 + fVar8 * 0.0 + fVar12 * 1.0;
                  lVar31 = *(longlong *)(lVar35 + 0x48);
                  if (*(char *)(lVar31 + 0x28) == '\0') {
                    FUN_1419f3850(lVar31);
                  }
                  local_3330 = *(int **)(lVar31 + 0x38);
                  uVar34 = (uint)*(ushort *)(lVar35 + 0x114);
                  if (0x3f < *(ushort *)(lVar35 + 0x114)) {
                    uVar34 = 0x40;
                  }
                  if (uVar34 != 0) {
                    local_3324 = (uint)*(ushort *)(lVar35 + 0x112);
                    pvVar36 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
                    local_3338[0] = (uint)*(ushort *)(lVar35 + 0x110);
                    uVar26 = (ulonglong)uVar34 + (longlong)pvVar36;
                    if (*(ulonglong *)(param_2 + 0x38) < uVar26) {
                      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar34 + 0x10);
                      pvVar36 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
                      uVar26 = (ulonglong)uVar34 + (longlong)pvVar36;
                    }
                    *(ulonglong *)(param_2 + 0x30) = uVar26;
                    _guard_xfg_dispatch_icall_nop(pvVar36,&local_31c8,(ulonglong)uVar34);
                    puVar32 = (undefined8 *)
                              (*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar30 = puVar32 + 6;
                    if (*(undefined8 **)(param_2 + 0x38) < puVar30) {
                      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
                      puVar32 = (undefined8 *)
                                (*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                      puVar30 = puVar32 + 6;
                    }
                    *(undefined8 **)(param_2 + 0x30) = puVar30;
                    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                    **(undefined8 **)(param_2 + 8) = puVar32;
                    *(undefined8 **)(param_2 + 8) = puVar32 + 1;
                    puVar32[1] = 0;
                    *puVar32 = &PTR_LAB_143f4d340;
                    puVar32[2] = local_3330;
                    *(uint *)(puVar32 + 4) = local_3338[0];
                    *(uint *)((longlong)puVar32 + 0x24) = local_3324;
                    puVar32[3] = pvVar36;
                    *(uint *)(puVar32 + 5) = uVar34;
                  }
                  lVar31 = *(longlong *)(lVar35 + 0x48);
                  local_3330 = piVar1 + 4;
                  if (*(char *)(lVar31 + 0x28) == '\0') {
                    FUN_1419f3850(lVar31);
                  }
                  local_3320 = *(undefined8 **)(lVar31 + 0x38);
                  uVar34 = (uint)*(ushort *)(lVar35 + 0x11a);
                  if (0xf < *(ushort *)(lVar35 + 0x11a)) {
                    uVar34 = 0x10;
                  }
                  uVar26 = (ulonglong)uVar34;
                  if (uVar34 != 0) {
                    uVar4 = *(ushort *)(lVar35 + 0x116);
                    pvVar36 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
                    local_3338[0] = (uint)*(ushort *)(lVar35 + 0x118);
                    uVar27 = uVar26 + (longlong)pvVar36;
                    if (*(ulonglong *)(param_2 + 0x38) < uVar27) {
                      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar34 + 0x10);
                      pvVar36 = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
                      uVar27 = uVar26 + (longlong)pvVar36;
                    }
                    *(ulonglong *)(param_2 + 0x30) = uVar27;
                    _guard_xfg_dispatch_icall_nop(pvVar36,local_3330,uVar26);
                    puVar32 = (undefined8 *)
                              (*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar30 = puVar32 + 6;
                    if (*(undefined8 **)(param_2 + 0x38) < puVar30) {
                      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
                      puVar32 = (undefined8 *)
                                (*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                      puVar30 = puVar32 + 6;
                    }
                    *(undefined8 **)(param_2 + 0x30) = puVar30;
                    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                    **(undefined8 **)(param_2 + 8) = puVar32;
                    *(undefined8 **)(param_2 + 8) = puVar32 + 1;
                    puVar32[1] = 0;
                    *puVar32 = &PTR_LAB_143f4d340;
                    puVar32[2] = local_3320;
                    *(uint *)((longlong)puVar32 + 0x24) = local_3338[0];
                    puVar32[3] = pvVar36;
                    *(uint *)(puVar32 + 4) = (uint)uVar4;
                    *(uint *)(puVar32 + 5) = uVar34;
                  }
                  lVar31 = local_32e8;
                  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>
                            (local_32d8,*(undefined8 *)(local_32e8 + 0x18));
                  uVar28 = FUN_1404a1310(local_32d8,*(undefined4 *)(puVar33 + 1));
                  FTexture2DDynamicResource::GetTexture2DRHI(uVar28,&local_32e0);
                  FUN_141ed8ff0(&DAT_146ab6e78,*(undefined8 *)(puVar33[2] + 0x98),local_32e0);
                  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_32e0);
                  AK::MemoryMgr::StartProfileThreadUsage((long)local_32d8);
                  plVar29 = (longlong *)
                            (**(code **)(*(longlong *)*puVar33 + 0x2a8))((longlong *)*puVar33,0,0);
                  lVar21 = local_32d0;
                  lVar35 = *(longlong *)(local_32d0 + 0x48);
                  if (*(char *)(lVar35 + 0x28) == '\0') {
                    FUN_1419f3850(lVar35);
                  }
                  uVar28 = *(undefined8 *)(lVar35 + 0x40);
                  local_3330 = (int *)0x0;
                  (**(code **)(*plVar29 + 0x40))(plVar29,local_1070,local_3218,&local_3330);
                  local_3340 = 0;
                  local_3348 = local_2a88;
                  local_3350 = local_2aa8;
                  local_3358 = local_3330;
                  FUN_141d857a0(lVar21,param_2,uVar28,plVar29);
                  lVar35 = *(longlong *)(*(longlong *)(lVar31 + 0x28) + 0x70);
                  if (lVar35 == 0) {
                    LowLevelFatalErrorHandler
                              ("Unknown",0x8d8,
                               L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                    FDebug::AssertFailed
                              (&DAT_143f3f584,"Unknown",0x8d8,
                               L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
                  }
                  puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                  puVar30 = puVar33 + 7;
                  if (*(undefined8 **)(param_2 + 0x38) < puVar30) {
                    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x40);
                    puVar33 = (undefined8 *)
                              (*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
                    puVar30 = puVar33 + 7;
                  }
                  *(undefined8 **)(param_2 + 0x30) = puVar30;
                  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
                  **(undefined8 **)(param_2 + 8) = puVar33;
                  *(undefined8 **)(param_2 + 8) = puVar33 + 1;
                  puVar33[1] = 0;
                  *puVar33 = &PTR_LAB_143f489d0;
                  *(undefined4 *)(puVar33 + 6) = 1;
                  puVar33[2] = lVar35;
                  puVar33[3] = 0;
                  *(undefined4 *)(puVar33 + 4) = 0;
                  *(undefined8 *)((longlong)puVar33 + 0x24) = 4;
                  *(undefined4 *)((longlong)puVar33 + 0x2c) = 2;
                  FUN_142745bf0(local_2aa8);
                  FUN_142745dc0(local_3188);
                }
              }
            }
            break;
          }
          puVar33 = puVar33 + 3;
        } while (puVar33 != puVar30);
      }
    }
    if (local_32f8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140476d20 FUN_140476d20 body=621 status=ok
// SIG undefined FUN_140476d20(void)

void FUN_140476d20(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined8 *puVar41;
  int iVar42;
  longlong lVar43;
  uint uVar44;
  undefined8 uVar45;
  int iVar46;
  int iVar47;
  undefined8 local_128;
  int local_120;
  int local_11c;
  
  uVar44 = *(uint *)(param_1 + 0xa0) & 0x80000001;
  if ((int)uVar44 < 0) {
    uVar44 = (uVar44 - 1 | 0xfffffffe) + 1;
  }
  pcVar5 = (char *)*param_2;
  uVar45 = 0;
  local_128 = 0;
  iVar46 = 0;
  local_11c = 0;
  iVar47 = 0;
  if ((pcVar5 != (char *)0x0) && (iVar47 = iVar46, *pcVar5 != '\0')) {
    lVar43 = -1;
    do {
      lVar43 = lVar43 + 1;
    } while (pcVar5[lVar43] != '\0');
    iVar42 = (int)lVar43 + 1;
    local_120 = iVar42;
    if (0 < iVar42) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    iVar46 = local_11c;
    iVar47 = local_120;
    uVar45 = local_128;
    FGenericPlatformString::Convert<char,wchar_t>(local_128,iVar42,pcVar5,iVar42,0x3f);
  }
  uVar6 = param_2[1];
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar10 = *(undefined4 *)(param_2 + 3);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar12 = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar14 = *(undefined4 *)(param_2 + 5);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar16 = *(undefined4 *)(param_2 + 6);
  uVar7 = param_2[9];
  uVar17 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar18 = *(undefined4 *)(param_2 + 7);
  uVar19 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar20 = *(undefined4 *)(param_2 + 8);
  uVar8 = param_2[10];
  uVar21 = *(undefined4 *)(param_2 + 0xc);
  uVar22 = *(undefined4 *)((longlong)param_2 + 100);
  uVar23 = *(undefined4 *)(param_2 + 0xd);
  uVar24 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar25 = *(undefined4 *)(param_2 + 0xe);
  uVar26 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar27 = *(undefined4 *)(param_2 + 0xf);
  uVar28 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar3 = *(undefined4 *)(param_2 + 0x16);
  uVar29 = *(undefined4 *)(param_2 + 0x10);
  uVar30 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar31 = *(undefined4 *)(param_2 + 0x11);
  uVar32 = *(undefined4 *)((longlong)param_2 + 0x8c);
  uVar33 = *(undefined4 *)(param_2 + 0x12);
  uVar34 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar35 = *(undefined4 *)(param_2 + 0x13);
  uVar36 = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_1 = (longlong)(int)uVar44 * 0x10 + param_1;
  uVar37 = *(undefined4 *)(param_2 + 0x14);
  uVar38 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar39 = *(undefined4 *)(param_2 + 0x15);
  uVar40 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xb4);
  iVar42 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar42 + 1;
  if (*(int *)(param_1 + 100) < iVar42 + 1) {
    FUN_1404852a0(param_1 + 0x58,iVar42);
  }
  puVar41 = (undefined8 *)((longlong)iVar42 * 0xc0 + *(longlong *)(param_1 + 0x58));
  *puVar41 = uVar45;
  *(int *)(puVar41 + 1) = iVar47;
  *(int *)((longlong)puVar41 + 0xc) = iVar46;
  *(undefined4 *)((longlong)puVar41 + 0x1c) = uVar9;
  *(undefined4 *)(puVar41 + 4) = uVar10;
  *(undefined4 *)((longlong)puVar41 + 0x24) = uVar11;
  *(undefined4 *)(puVar41 + 5) = uVar12;
  puVar41[2] = uVar6;
  *(undefined4 *)((longlong)puVar41 + 0x2c) = uVar13;
  *(undefined4 *)(puVar41 + 6) = uVar14;
  *(undefined4 *)((longlong)puVar41 + 0x34) = uVar15;
  *(undefined4 *)(puVar41 + 7) = uVar16;
  *(undefined4 *)(puVar41 + 3) = uVar1;
  *(undefined4 *)((longlong)puVar41 + 0x3c) = uVar17;
  *(undefined4 *)(puVar41 + 8) = uVar18;
  *(undefined4 *)((longlong)puVar41 + 0x44) = uVar19;
  *(undefined4 *)(puVar41 + 9) = uVar20;
  *(undefined4 *)((longlong)puVar41 + 0x4c) = uVar2;
  puVar41[10] = uVar7;
  puVar41[0xb] = uVar8;
  *(undefined4 *)(puVar41 + 0xc) = uVar21;
  *(undefined4 *)((longlong)puVar41 + 100) = uVar22;
  *(undefined4 *)(puVar41 + 0xd) = uVar23;
  *(undefined4 *)((longlong)puVar41 + 0x6c) = uVar24;
  *(undefined4 *)(puVar41 + 0xe) = uVar25;
  *(undefined4 *)((longlong)puVar41 + 0x74) = uVar26;
  *(undefined4 *)(puVar41 + 0xf) = uVar27;
  *(undefined4 *)((longlong)puVar41 + 0x7c) = uVar28;
  *(undefined4 *)(puVar41 + 0x10) = uVar29;
  *(undefined4 *)((longlong)puVar41 + 0x84) = uVar30;
  *(undefined4 *)(puVar41 + 0x11) = uVar31;
  *(undefined4 *)((longlong)puVar41 + 0x8c) = uVar32;
  *(undefined4 *)(puVar41 + 0x12) = uVar33;
  *(undefined4 *)((longlong)puVar41 + 0x94) = uVar34;
  *(undefined4 *)(puVar41 + 0x13) = uVar35;
  *(undefined4 *)((longlong)puVar41 + 0x9c) = uVar36;
  *(undefined4 *)(puVar41 + 0x14) = uVar37;
  *(undefined4 *)((longlong)puVar41 + 0xa4) = uVar38;
  *(undefined4 *)(puVar41 + 0x15) = uVar39;
  *(undefined4 *)((longlong)puVar41 + 0xac) = uVar40;
  *(undefined4 *)(puVar41 + 0x16) = uVar3;
  *(undefined4 *)((longlong)puVar41 + 0xb4) = uVar4;
  return;
}



// FUNCTION 140476f90 FUN_140476f90 body=391 status=ok
// SIG undefined FUN_140476f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140476f90(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined1 **ppuVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_188 [32];
  undefined1 *local_168 [2];
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar7;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  if (param_2 == 0) {
    local_48 = 0;
    local_50 = (undefined1 *)0x0;
  }
  else {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
    } while (*(char *)(param_2 + uVar6) != '\0');
    local_168[0] = (undefined1 *)((ulonglong)local_168[0] & 0xffffffff00000000);
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (local_168,0x7fffffff,param_2,uVar6 & 0xffffffff);
    local_48 = (int)local_168[0];
    uVar1 = (int)local_168[0] + 1;
    puVar4 = (undefined1 *)0x0;
    if ((0x80 < uVar1) && (puVar4 = (undefined1 *)0x0, uVar1 != 0)) {
      puVar4 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar1 * 2,0);
      local_58 = puVar4;
    }
    local_168[0] = local_158;
    if (puVar4 != (undefined1 *)0x0) {
      local_168[0] = puVar4;
    }
    local_50 = local_168[0];
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(local_168,uVar1,param_2,(int)uVar7 + 2);
  }
  ppuVar2 = (undefined1 **)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*ppuVar2;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,local_50);
  if (local_58 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (iVar3 == 0) {
    if (ppuVar2 != local_168) {
      if (*ppuVar2 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      *ppuVar2 = (undefined1 *)0x0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  return;
}



// FUNCTION 140477120 FUN_140477120 body=96 status=ok
// SIG undefined FUN_140477120(void)

void FUN_140477120(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_res10 = (undefined4)param_2;
  uStackX_14 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_20 = local_res10;
  local_res18 = (undefined4)param_3;
  local_1c = uStackX_14;
  uStackX_1c = (undefined4)((ulonglong)param_3 >> 0x20);
  local_18 = local_res18;
  local_14 = uStackX_1c;
  local_10 = 1;
  local_28[0] = param_4;
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),local_28,0,0);
  return;
}



// FUNCTION 140477180 FUN_140477180 body=597 status=ok
// SIG undefined FUN_140477180(void)

void FUN_140477180(longlong param_1,undefined8 param_2)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x408))();
    plVar12 = (longlong *)0x0;
    pplVar1 = (longlong **)(param_1 + 0x28);
    local_50 = (longlong *)0x0;
    if (pplVar1 != &local_58) {
      *pplVar1 = (longlong *)0x0;
      local_58 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_50);
      plVar10 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_50 + 1;
        lVar9 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    puVar7 = (undefined8 *)FName::FName(local_res8,"CohtmlPlugin",1);
    uVar4 = *puVar7;
    uVar8 = FUN_14168dc80();
    FUN_141690010(uVar8,uVar4);
    if (((DAT_1468505c8 == 0) || (DAT_1468505c0 == (longlong *)0x0)) ||
       (cVar5 = (**(code **)(*DAT_1468505c0 + 0x18))(), cVar5 == '\0')) {
      lVar9 = operator_new(0x78);
      plVar10 = plVar12;
      if (lVar9 != 0) {
        plVar10 = (longlong *)
                  FUN_1404532f0(lVar9,*(undefined8 *)
                                       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x200) + 8),
                                param_2);
      }
      plVar11 = (longlong *)operator_new(0x18);
      if (plVar11 != (longlong *)0x0) {
        *(undefined4 *)(plVar11 + 1) = 1;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *plVar11 = (longlong)&PTR_FUN_143f3f2e0;
        plVar11[2] = (longlong)plVar10;
        plVar12 = plVar11;
      }
      local_48 = plVar10;
      local_40 = plVar12;
      SharedPointerInternals::EnableSharedFromThis(&local_48,plVar10,plVar10);
      if (pplVar1 != &local_48) {
        *pplVar1 = plVar10;
        local_48 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_40);
        plVar12 = local_40;
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar12 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      local_38 = *pplVar1;
      local_30 = *(longlong *)(param_1 + 0x30);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      FUN_1418c3ef0(DAT_1469f4590,1,uVar6,&local_38);
    }
    else {
      if (DAT_1468505c8 != 0) {
        plVar12 = DAT_1468505c0;
      }
      (**(code **)(*plVar12 + 0x38))
                (plVar12,pplVar1,uVar6,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x200) + 8),param_2);
    }
  }
  return;
}



// FUNCTION 1404773e0 FUN_1404773e0 body=647 status=ok
// SIG undefined FUN_1404773e0(void)

void FUN_1404773e0(longlong param_1,undefined8 param_2)

{
  undefined8 **ppuVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined1 local_res8 [8];
  undefined8 *local_58;
  longlong *local_50;
  undefined8 *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong local_30;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar7 = FUN_14046f040();
    plVar12 = (longlong *)0x0;
    ppuVar1 = (undefined8 **)(param_1 + 0x28);
    local_50 = (longlong *)0x0;
    if (ppuVar1 != &local_58) {
      *ppuVar1 = (undefined8 *)0x0;
      local_58 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_50);
      plVar11 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_50 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    puVar8 = (undefined8 *)FName::FName(local_res8,"CohtmlPlugin",1);
    uVar13 = *puVar8;
    uVar9 = FUN_14168dc80();
    FUN_141690010(uVar9,uVar13);
    if (((DAT_1468505c8 == 0) || (DAT_1468505c0 == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*DAT_1468505c0 + 0x18))(), cVar6 == '\0')) {
      lVar10 = operator_new(0x78);
      if (lVar10 == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x100);
        if (lVar5 == 0) {
          puVar8 = (undefined8 *)
                   FUN_1404532f0(lVar10,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x110),
                                 param_2);
        }
        else {
          puVar8 = (undefined8 *)
                   FUN_1404532f0(lVar10,*(undefined8 *)(*(longlong *)(lVar5 + 0x240) + 8),param_2);
        }
      }
      plVar11 = (longlong *)operator_new(0x18);
      if (plVar11 != (longlong *)0x0) {
        *(undefined4 *)(plVar11 + 1) = 1;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        *plVar11 = (longlong)&PTR_FUN_143f3f2e0;
        plVar11[2] = (longlong)puVar8;
        plVar12 = plVar11;
      }
      local_48 = puVar8;
      local_40 = plVar12;
      SharedPointerInternals::EnableSharedFromThis(&local_48,puVar8,puVar8);
      if (ppuVar1 != &local_48) {
        *ppuVar1 = puVar8;
        local_48 = (undefined8 *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,&local_40);
        plVar12 = local_40;
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar12 + 1;
        lVar10 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar3 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      local_38 = *ppuVar1;
      local_30 = *(longlong *)(param_1 + 0x30);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      FUN_1418c3ef0(DAT_1469f4590,1,uVar7,&local_38);
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x100);
      if (lVar10 == 0) {
        uVar13 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x110);
      }
      else {
        uVar13 = *(undefined8 *)(*(longlong *)(lVar10 + 0x240) + 8);
      }
      if (DAT_1468505c8 != 0) {
        plVar12 = DAT_1468505c0;
      }
      (**(code **)(*plVar12 + 0x38))(plVar12,ppuVar1,uVar7,uVar13,param_2);
    }
  }
  return;
}



// FUNCTION 140477670 FUN_140477670 body=358 status=ok
// SIG undefined FUN_140477670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140477670(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 local_18;
  longlong *local_10;
  
  *(undefined1 *)(param_1 + 0x374) = 0;
  uVar4 = *(undefined4 *)(param_2 + 4);
  FUN_1404865b0(&DAT_1461f6280,uVar4);
  if (((*(int *)(param_1 + 0x358) == 0) || (*(longlong **)(param_1 + 0x350) == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x18))(), cVar7 == '\0')) {
    uVar8 = 0;
  }
  else if (*(int *)(param_1 + 0x358) == 0) {
    uVar8 = (**(code **)(_DAT_00000000 + 0x38))(0,uVar4);
  }
  else {
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x38))
                      (*(longlong **)(param_1 + 0x350),uVar4);
  }
  *(uint *)(param_1 + 0x360) = uVar8;
  if ((uVar8 & 0xfffffffd) == 0) {
    FUN_140484130(&DAT_1461f6280,uVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x378);
  plVar9 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd8))();
  if (plVar9 != (longlong *)0x0) {
    local_18 = *(undefined8 *)(lVar5 + 0x18);
    plVar6 = *(longlong **)(lVar5 + 0x20);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_10 = plVar6;
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_18);
    plVar9 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
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
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar6 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar6)(plVar6);
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
  return;
}



// FUNCTION 1404777e0 FUN_1404777e0 body=426 status=ok
// SIG undefined FUN_1404777e0(void)

void FUN_1404777e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_18;
  longlong *local_10;
  
  plVar8 = (longlong *)0x0;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x240) + 8);
  if (lVar5 != 0) {
    plVar9 = (longlong *)(param_1 + 0x284);
    if (*(char *)(param_1 + 0x2c0) == '\0') {
      plVar9 = plVar8;
    }
    FUN_140461b60(lVar5,plVar9);
    *(undefined1 *)(param_1 + 0x2c0) = 0;
    plVar9 = (longlong *)(param_1 + 0x2a8);
    if (*(char *)(param_1 + 0x2c1) == '\0') {
      plVar9 = plVar8;
    }
    FUN_140461bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x240) + 8),plVar9);
    *(undefined1 *)(param_1 + 0x2c1) = 0;
  }
  uVar4 = *(undefined4 *)(param_2 + 4);
  FUN_1404865b0(&DAT_1461f6280,uVar4);
  if (((*(int *)(param_1 + 0x210) != 0) && (*(longlong **)(param_1 + 0x208) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0x18))(), cVar6 != '\0')) {
    if (*(int *)(param_1 + 0x210) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x208);
    }
    uVar7 = (**(code **)(*plVar8 + 0x38))(plVar8,uVar4);
    plVar8 = (longlong *)(ulonglong)uVar7;
  }
  *(int *)(param_1 + 0x278) = (int)plVar8;
  if (((ulonglong)plVar8 & 0xfffffffd) == 0) {
    FUN_140484130(&DAT_1461f6280,uVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x250);
  plVar8 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd8))();
  if (plVar8 != (longlong *)0x0) {
    local_18 = *(undefined8 *)(lVar5 + 0x18);
    plVar9 = *(longlong **)(lVar5 + 0x20);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_10 = plVar9;
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_18);
    plVar8 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
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



// FUNCTION 140477990 FUN_140477990 body=403 status=ok
// SIG undefined FUN_140477990(void)

undefined1 * FUN_140477990(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(int *)(param_1 + 0x360) == 2) {
    FUN_14045f0a0(&DAT_1461f6280,*(undefined4 *)(param_4 + 4));
  }
  *(undefined1 *)(param_1 + 0x374) = 1;
  lVar4 = *(longlong *)(param_1 + 0x378);
  plVar6 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd8))();
  if (plVar6 != (longlong *)0x0) {
    local_18 = *(undefined8 *)(lVar4 + 0x18);
    plVar5 = *(longlong **)(lVar4 + 0x20);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_10 = plVar5;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_18);
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
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 140477b30 FUN_140477b30 body=396 status=ok
// SIG undefined FUN_140477b30(void)

undefined1 * FUN_140477b30(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(int *)(param_1 + 0x278) == 2) {
    FUN_14045f0a0(&DAT_1461f6280,*(undefined4 *)(param_4 + 4));
  }
  lVar4 = *(longlong *)(param_1 + 0x250);
  plVar6 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd8))();
  if (plVar6 != (longlong *)0x0) {
    local_18 = *(undefined8 *)(lVar4 + 0x18);
    plVar5 = *(longlong **)(lVar4 + 0x20);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_10 = plVar5;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_18);
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
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 140477d10 FUN_140477d10 body=2561 status=ok
// SIG undefined FUN_140477d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140477e43) */
/* WARNING: Removing unreachable block (ram,0x000140477e50) */
/* WARNING: Removing unreachable block (ram,0x000140477e69) */

void FUN_140477d10(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  short *psVar2;
  undefined4 uVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  void *pvVar12;
  int iVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  undefined2 *puVar16;
  undefined8 uVar17;
  int iVar18;
  wchar_t *pwVar19;
  int iVar20;
  longlong *plVar21;
  void **ppvVar22;
  undefined2 *puVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  longlong *local_2e8;
  void *local_2e0;
  undefined8 local_2d8;
  void **local_2d0;
  undefined8 local_2c8;
  longlong *local_2c0;
  undefined8 uStack_2b8;
  wchar_t *local_2b0;
  int local_2a8;
  int local_2a4;
  undefined4 local_2a0;
  longlong local_298;
  undefined8 local_290;
  undefined2 *local_288;
  ulonglong local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined2 *local_268;
  undefined8 local_260;
  wchar_t *local_258;
  int local_250;
  undefined4 local_24c;
  longlong *local_248;
  int local_240;
  longlong *local_238;
  longlong *plStack_230;
  undefined8 local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [8];
  void **local_1f0;
  LPCRITICAL_SECTION local_1e8;
  longlong local_1e0;
  longlong **local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [128];
  longlong local_108;
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  local_2e8 = param_3;
  local_298 = param_2;
  local_1e0 = param_1;
  if ((*(longlong *)(param_1 + 0x2f0) == 0) || (*(longlong *)(param_1 + 0x2f8) == 0)) {
LAB_14047868a:
    plVar21 = *(longlong **)(param_2 + 8);
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar21 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
        }
      }
    }
    plVar21 = (longlong *)param_3[1];
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar21 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
        }
      }
    }
    return;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
  LOCK();
  iVar18 = *piVar1;
  if (iVar18 == 0) {
    *piVar1 = 0;
    iVar18 = 0;
  }
  UNLOCK();
  if (iVar18 < 1) goto LAB_14047868a;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x2b8);
  local_2e0 = (void *)0x0;
  local_2d8 = 0;
  local_2d0 = (void **)0x0;
  local_2c8 = 0;
  local_2c0 = (longlong *)0x0;
  uStack_2b8 = 0;
  local_1e8 = lpCriticalSection;
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)(param_1 + 0x2a8) != 0) {
    puVar11 = *(undefined8 **)(param_1 + 0x2a0);
    local_238 = (longlong *)*puVar11;
    plStack_230 = (longlong *)puVar11[1];
    if (plStack_230 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_230 + 1) = (int)plStack_230[1] + 1;
      UNLOCK();
    }
    local_278._0_4_ = SUB84(local_238,0);
    local_278._4_4_ = (undefined4)((ulonglong)local_238 >> 0x20);
    uStack_270._0_4_ = SUB84(plStack_230,0);
    uStack_270._4_4_ = (undefined4)((ulonglong)plStack_230 >> 0x20);
    uStack_18c = uStack_270._4_4_;
    uStack_190 = (undefined4)uStack_270;
    uStack_194 = local_278._4_4_;
    local_198 = (undefined4)local_278;
    uStack_200 = 0;
    local_208 = (longlong *)0x0;
    local_210 = 0;
    local_218 = (longlong *)0x0;
    local_220 = 0;
    local_228 = 0;
    uStack_270 = 0;
    local_278 = 0;
    FString::operator=(&local_228,puVar11 + 2);
    if (&local_218 != (longlong **)(puVar11 + 4)) {
      plVar21 = local_218;
      for (iVar18 = (int)local_210; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (*plVar21 != 0) {
          FMemory::Free();
        }
        plVar21 = plVar21 + 2;
      }
      local_2f8 = 0;
      TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
                (&local_218,(longlong *)puVar11[4],*(undefined4 *)(puVar11 + 5));
      param_2 = local_298;
    }
    local_208 = (longlong *)puVar11[6];
    plVar21 = (longlong *)(param_1 + 0x290);
    lVar10 = *(longlong *)(param_1 + 0x2a0);
    uStack_200 = puVar11[7];
    if (lVar10 != 0) {
      if (*(int *)(param_1 + 0x2a8) == 1) {
        FUN_140467570(plVar21);
      }
      else {
        if (lVar10 == *(longlong *)(param_1 + 0x298)) {
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x40);
          *(longlong *)(param_1 + 0x298) = lVar14;
          *(undefined8 *)(lVar14 + 0x48) = 0;
        }
        else if (lVar10 == *(longlong *)(param_1 + 0x2a0)) {
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
          *(longlong *)(param_1 + 0x2a0) = lVar14;
          *(undefined8 *)(lVar14 + 0x40) = 0;
        }
        else {
          *(undefined8 *)(*(longlong *)(lVar10 + 0x40) + 0x48) = *(undefined8 *)(lVar10 + 0x48);
          *(undefined8 *)(*(longlong *)(lVar10 + 0x48) + 0x40) = *(undefined8 *)(lVar10 + 0x40);
        }
        FUN_14045d970(lVar10,1);
        (**(code **)(*plVar21 + 8))(plVar21,*(int *)(param_1 + 0x2a8) + -1);
      }
    }
    cVar4 = (**(code **)(*local_238 + 0x78))();
    if (cVar4 == '\0') {
      (**(code **)(*local_208 + 0x38))(local_208,1);
    }
    else {
      local_1d8 = &local_238;
      local_1d0 = &local_228;
      FUN_14044d4d0(param_1 + 0x240,local_1f8,&local_1d8);
    }
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
              (&local_228);
    plVar21 = plStack_230;
    param_3 = local_2e8;
    if (plStack_230 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_230 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_230)(plStack_230);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        param_3 = local_2e8;
        if (iVar18 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
          param_3 = local_2e8;
        }
      }
    }
  }
  plVar21 = (longlong *)(param_1 + 0x240);
  FUN_14046bf60(plVar21,&local_2a8,param_2);
  lVar10 = 0;
  if (local_2a8 != -1) {
    lVar10 = *plVar21 + (longlong)local_2a8 * 0x48;
  }
  lVar14 = lVar10 + 0x10;
  if (lVar10 == 0) {
    lVar14 = 0;
  }
  if (lVar14 == 0) {
    LeaveCriticalSection(lpCriticalSection);
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
              (&local_2e0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
LAB_140478061:
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
    return;
  }
  FUN_14046bf60(plVar21,&local_2a4,param_2);
  lVar10 = *plVar21;
  lVar14 = (longlong)local_2a4;
  pvVar12 = *(void **)(lVar10 + 0x10 + lVar14 * 0x48);
  *(undefined8 *)(lVar10 + 0x10 + lVar14 * 0x48) = 0;
  uVar8 = *(undefined4 *)(lVar10 + 0x18 + lVar14 * 0x48);
  uVar3 = *(undefined4 *)(lVar10 + 0x1c + lVar14 * 0x48);
  *(undefined8 *)(lVar10 + 0x18 + lVar14 * 0x48) = 0;
  local_1f0 = *(void ***)(lVar10 + 0x20 + lVar14 * 0x48);
  *(undefined8 *)(lVar10 + 0x20 + lVar14 * 0x48) = 0;
  local_2a0 = *(undefined4 *)(lVar10 + 0x28 + lVar14 * 0x48);
  *(undefined8 *)(lVar10 + 0x28 + lVar14 * 0x48) = 0;
  plVar9 = *(longlong **)(lVar10 + 0x30 + lVar14 * 0x48);
  local_290 = *(undefined8 *)(lVar10 + 0x38 + lVar14 * 0x48);
  local_2b0 = (wchar_t *)CONCAT44(local_2b0._4_4_,*(undefined4 *)(lVar10 + 0x2c + lVar14 * 0x48));
  local_1a8 = plVar9;
  local_1a0 = local_290;
  FUN_1404836e0(plVar21);
  if (local_2e0 != (void *)0x0) {
    FMemory::Free();
  }
  local_1c8 = 0;
  local_2d8 = CONCAT44(uVar3,uVar8);
  local_1c0 = 0;
  local_2e0 = pvVar12;
  ppvVar22 = local_2d0;
  for (iVar18 = (int)local_2c8; iVar18 != 0; iVar18 = iVar18 + -1) {
    if (*ppvVar22 != (void *)0x0) {
      FMemory::Free();
    }
    ppvVar22 = ppvVar22 + 2;
  }
  if (local_2d0 != (void **)0x0) {
    FMemory::Free(local_2d0);
  }
  local_2d0 = local_1f0;
  local_2c8 = CONCAT44(local_2b0._0_4_,local_2a0);
  uStack_2b8 = local_290;
  local_1b8 = 0;
  local_1b0 = 0;
  local_2c0 = plVar9;
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
            (&local_1c8);
  LeaveCriticalSection(lpCriticalSection);
  param_3 = local_2e8;
  plVar21 = (longlong *)*local_2e8;
  if (plVar21 == (longlong *)0x0) {
    (**(code **)(*local_2c0 + 0x38))(local_2c0,1);
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
              (&local_2e0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_298);
    goto LAB_140478061;
  }
  (**(code **)(*plVar21 + 0x18))(plVar21,&local_248);
  plVar9 = local_248 + (longlong)local_240 * 2;
  for (plVar21 = local_248; plVar21 != plVar9; plVar21 = plVar21 + 2) {
    local_268 = (undefined2 *)0x0;
    local_260 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
    puVar23 = local_268;
    local_2f8 = CONCAT22(local_2f8._2_2_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_268,3,&DAT_143f40124);
    local_2f8 = 0xffffffff;
    puVar16 = &DAT_143f3eda8;
    if ((int)local_260 != 0) {
      puVar16 = puVar23;
    }
    iVar18 = FUN_141592950(plVar21,puVar16,1);
    if (puVar23 != (undefined2 *)0x0) {
      FMemory::Free(puVar23);
    }
    iVar13 = (int)plVar21[1];
    iVar7 = iVar13 + -1;
    if (iVar13 == 0) {
      puVar23 = &DAT_143f3eda8;
      iVar13 = 0;
      iVar7 = 0;
    }
    else {
      puVar23 = (undefined2 *)*plVar21;
      iVar13 = iVar13 + -1;
    }
    iVar6 = iVar13 - iVar18;
    if (iVar6 < 0) {
      iVar13 = 0;
    }
    else if (iVar6 < iVar13) {
      iVar13 = iVar6;
    }
    uVar25 = 0;
    local_288 = (undefined2 *)0x0;
    local_280 = 0;
    psVar2 = puVar23 + ((longlong)iVar7 - (longlong)iVar13);
    if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
      lVar10 = -1;
      do {
        lVar14 = lVar10 + 1;
        lVar10 = lVar10 + 1;
      } while (psVar2[lVar14] != 0);
      uVar24 = (int)lVar10 + 1;
      local_280 = (ulonglong)uVar24;
      uVar25 = uVar24;
      if (0 < (int)uVar24) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
        uVar25 = (uint)local_280;
      }
      FGenericPlatformString::Memcpy(local_288,psVar2,(longlong)(int)uVar24 * 2);
    }
    pwVar19 = (wchar_t *)0x0;
    iVar13 = (int)plVar21[1];
    if (iVar13 == 0) {
      local_2b0 = L"";
      iVar7 = -1;
    }
    else {
      local_2b0 = (wchar_t *)*plVar21;
      iVar7 = iVar13 + -1;
    }
    if (iVar13 == 0) {
      iVar7 = 0;
    }
    iVar20 = 0;
    iVar6 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar6 = iVar20;
    }
    iVar7 = iVar7 - iVar18;
    if ((-1 < iVar7) && (iVar20 = iVar6, iVar7 < iVar6)) {
      iVar20 = iVar7;
    }
    local_258 = (wchar_t *)0x0;
    local_24c = 0;
    pwVar15 = (wchar_t *)(ulonglong)(iVar20 + 1);
    if (iVar20 == 0) {
      pwVar15 = pwVar19;
    }
    iVar18 = (int)pwVar15;
    local_250 = iVar18;
    if ((0 < iVar18) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0), iVar18 = local_250,
       pwVar19 = local_258, 0 < local_250)) {
      wcsncpy(local_258,local_2b0,(longlong)iVar20);
      pwVar19[iVar20] = L'\0';
    }
    pwVar15 = L"";
    if (iVar18 != 0) {
      pwVar15 = pwVar19;
    }
    lVar10 = TStringConversion<FTCHARToUTF8_Convert,128>::
             TStringConversion<FTCHARToUTF8_Convert,128>(local_e8,pwVar15);
    puVar23 = local_288;
    uVar17 = *(undefined8 *)(lVar10 + 0x88);
    puVar16 = &DAT_143f3eda8;
    if (uVar25 != 0) {
      puVar16 = local_288;
    }
    lVar10 = TStringConversion<FTCHARToUTF8_Convert,128>::
             TStringConversion<FTCHARToUTF8_Convert,128>(local_188,puVar16);
    (**(code **)(*local_2c0 + 0x30))(local_2c0,*(undefined8 *)(lVar10 + 0x88),uVar17);
    if (local_108 != 0) {
      FMemory::Free();
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (pwVar19 != (wchar_t *)0x0) {
      FMemory::Free(pwVar19);
    }
    if (puVar23 != (undefined2 *)0x0) {
      FMemory::Free(puVar23);
    }
    lpCriticalSection = local_1e8;
    param_3 = local_2e8;
  }
  lVar10 = *local_2c0;
  uVar8 = (**(code **)(*(longlong *)*param_3 + 0x40))();
  (**(code **)(lVar10 + 0x20))(local_2c0,uVar8);
  puVar11 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 0x30))();
  pvVar12 = (void *)(**(code **)(*local_2c0 + 8))(local_2c0,(longlong)*(int *)(puVar11 + 1));
  _guard_xfg_dispatch_icall_nop(pvVar12,(void *)*puVar11,(longlong)*(int *)(puVar11 + 1));
  iVar18 = (**(code **)(*(longlong *)*param_3 + 0x40))();
  if (iVar18 - 200U < 7) {
    uVar17 = 0;
  }
  else {
    if (0 < (int)local_2c8) {
      BVar5 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar5 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      if (&local_2e0 != local_2d0) {
        iVar18 = *(int *)(local_2d0 + 1);
        pvVar12 = *local_2d0;
        local_2d8 = CONCAT44(local_2d8._4_4_,iVar18);
        if ((iVar18 == 0) && (local_2d8._4_4_ == 0)) {
          local_2d8 = 0;
          param_3 = local_2e8;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2e0,iVar18);
          _guard_xfg_dispatch_icall_nop(local_2e0,pvVar12,(longlong)iVar18 * 2);
          param_3 = local_2e8;
        }
      }
      if (*local_2d0 != (void *)0x0) {
        FMemory::Free(*local_2d0);
      }
      if ((int)local_2c8 + -1 != 0) {
        _guard_xfg_dispatch_icall_nop(local_2d0,local_2d0 + 2,(longlong)((int)local_2c8 + -1) << 4);
      }
      local_2c8 = CONCAT44(local_2c8._4_4_,(int)local_2c8 + -1);
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_2d0);
      FUN_14048d380(local_1e0,&local_2e0,uStack_2b8,local_2c0);
      LeaveCriticalSection(lpCriticalSection);
      plVar21 = local_248;
      iVar18 = local_240;
      goto joined_r0x0001404785d3;
    }
    uVar17 = 1;
  }
  (**(code **)(*local_2c0 + 0x38))(local_2c0,uVar17);
  plVar21 = local_248;
  iVar18 = local_240;
joined_r0x0001404785d3:
  for (; iVar18 != 0; iVar18 = iVar18 + -1) {
    if (*plVar21 != 0) {
      FMemory::Free();
    }
    plVar21 = plVar21 + 2;
  }
  if (local_248 != (longlong *)0x0) {
    FMemory::Free(local_248);
  }
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
            (&local_2e0);
  plVar21 = *(longlong **)(local_298 + 8);
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar21 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar21 + 8))(plVar21,1);
      }
    }
  }
  plVar21 = (longlong *)param_3[1];
  if (plVar21 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar9 = plVar21 + 1;
  lVar10 = *plVar9;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)lVar10 != 1) {
    return;
  }
  (**(code **)*plVar21)(plVar21);
  LOCK();
  piVar1 = (int *)((longlong)plVar21 + 0xc);
  iVar18 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar18 != 1) {
    return;
  }
  (**(code **)(*plVar21 + 8))(plVar21,1);
  return;
}



// FUNCTION 140478720 FUN_140478720 body=173 status=ok
// SIG undefined FUN_140478720(void)

undefined8 FUN_140478720(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_28 [32];
  
  FUN_140474250(local_28,param_4,3);
  cVar2 = FUN_14044af00(param_1 + 0x388,0);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x388);
    if (*(longlong *)(*(longlong *)(lVar3 + 0x200) + 8) != 0) {
      lVar3 = FWeakObjectPtr::Get(param_1 + 0x388);
      plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x200) + 8);
      (**(code **)(*plVar1 + 0xc0))(plVar1,local_28,0,0);
    }
  }
  FUN_14046f630(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 1404787d0 FUN_1404787d0 body=398 status=ok
// SIG undefined FUN_1404787d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1404787d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188;
  undefined8 local_180;
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
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  uint local_f4;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  undefined8 local_c0;
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
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  uint local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_140474250(local_1c8,param_4,3);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x240) + 8);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0x280) != '\0')) {
    (**(code **)(*plVar1 + 0xc0))(plVar1,local_1c8,0,0);
  }
  bVar3 = (*(byte *)(param_1 + 0x2d9) & 1) == 0;
  if (bVar3) {
    local_1a8[0] = 1;
    local_f4 = local_f4 & 0xffffff00;
    puVar2 = local_1a8;
    local_1a0 = 0;
    local_198 = 0;
    local_188 = 0;
    local_180 = 0;
    local_128 = 0;
    local_120 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0x20702;
  }
  else {
    local_e8[0] = 0;
    local_34 = local_34 & 0xffffff00;
    local_e0 = 0;
    local_d8 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0x20702;
    puVar2 = local_e8;
  }
  FReply::FReply(param_2,puVar2);
  if (bVar3) {
    FUN_140438c20(local_1a8);
  }
  else {
    FUN_140438c20(local_e8);
  }
  return param_2;
}



// FUNCTION 140478960 FUN_140478960 body=217 status=ok
// SIG undefined FUN_140478960(void)

undefined8 FUN_140478960(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  
  local_28 = *(undefined8 *)(param_4 + 0x18);
  local_20 = *(undefined8 *)(param_4 + 0x20);
  local_18 = *(longlong **)(param_4 + 0x28);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  cVar6 = FKey::IsGamepadKey(&local_28);
  if (cVar6 == '\0') {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 800,&local_28);
    FUN_14047f810(param_1,param_4,1);
  }
  else {
    FUN_14048edb0(&DAT_1461f6280,param_4,1);
  }
  FUN_14046f780(param_1,param_2,param_4);
  plVar5 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
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
  return param_2;
}



// FUNCTION 140478a40 FUN_140478a40 body=681 status=ok
// SIG undefined FUN_140478a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140478a40(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined1 *puVar9;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined8 local_1a0;
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
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint local_114;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_200 = *(undefined8 *)(param_4 + 0x18);
  local_1f8 = *(undefined8 *)(param_4 + 0x20);
  local_1f0 = *(longlong **)(param_4 + 0x28);
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
    UNLOCK();
  }
  cVar8 = FKey::IsGamepadKey(&local_200);
  plVar4 = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1f0)(local_1f0);
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
  if (cVar8 == '\0') {
    FUN_140474250(local_1e8,param_4,1);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + 8);
    if ((plVar4 != (longlong *)0x0) && (*(char *)(param_1 + 0x280) != '\0')) {
      (**(code **)(*plVar4 + 0xc0))(plVar4,local_1e8,0,0);
    }
  }
  else {
    FUN_14048edb0(&DAT_1461f6280,param_4,1);
  }
  local_218 = *(undefined8 *)(param_4 + 0x18);
  local_210 = *(undefined8 *)(param_4 + 0x20);
  local_208 = *(longlong **)(param_4 + 0x28);
  if (local_208 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_208 + 1) = (int)local_208[1] + 1;
    UNLOCK();
  }
  if ((*(byte *)(param_1 + 0x2d9) & 2) == 0) {
LAB_140478b74:
    if ((*(byte *)(param_1 + 0x2d9) & 1) != 0) {
      cVar8 = FKey::IsGamepadKey(&local_218);
      if (cVar8 == '\0') goto LAB_140478b90;
    }
    local_1c8[0] = 1;
    local_114 = local_114 & 0xffffff00;
    puVar9 = local_1c8;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1a8 = 0;
    bVar6 = false;
    local_1a0 = 0;
    local_148 = 0;
    local_140 = 0;
    bVar5 = true;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0x20702;
  }
  else {
    cVar8 = FKey::IsGamepadKey(&local_218);
    if (cVar8 == '\0') goto LAB_140478b74;
LAB_140478b90:
    local_108[0] = 0;
    local_54 = local_54 & 0xffffff00;
    puVar9 = local_108;
    local_100 = 0;
    local_f8 = 0;
    bVar5 = false;
    bVar6 = true;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0x20702;
  }
  FReply::FReply(param_2,puVar9);
  if (bVar5) {
    FUN_140438c20(local_1c8);
  }
  if (bVar6) {
    FUN_140438c20(local_108);
  }
  plVar4 = local_208;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_208 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_208)(local_208);
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
  return param_2;
}



// FUNCTION 140478cf0 FUN_140478cf0 body=217 status=ok
// SIG undefined FUN_140478cf0(void)

undefined8 FUN_140478cf0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  
  local_28 = *(undefined8 *)(param_4 + 0x18);
  local_20 = *(undefined8 *)(param_4 + 0x20);
  local_18 = *(longlong **)(param_4 + 0x28);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  cVar6 = FKey::IsGamepadKey(&local_28);
  if (cVar6 == '\0') {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x338,&local_28);
    FUN_14047f810(param_1,param_4,2);
  }
  else {
    FUN_14048edb0(&DAT_1461f6280,param_4,0);
  }
  FUN_14046f780(param_1,param_2,param_4);
  plVar5 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
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
  return param_2;
}



// FUNCTION 140478dd0 FUN_140478dd0 body=681 status=ok
// SIG undefined FUN_140478dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140478dd0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined1 *puVar9;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined8 local_1a0;
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
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint local_114;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined8 local_e0;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  uint local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_200 = *(undefined8 *)(param_4 + 0x18);
  local_1f8 = *(undefined8 *)(param_4 + 0x20);
  local_1f0 = *(longlong **)(param_4 + 0x28);
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
    UNLOCK();
  }
  cVar8 = FKey::IsGamepadKey(&local_200);
  plVar4 = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1f0)(local_1f0);
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
  if (cVar8 == '\0') {
    FUN_140474250(local_1e8,param_4,2);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + 8);
    if ((plVar4 != (longlong *)0x0) && (*(char *)(param_1 + 0x280) != '\0')) {
      (**(code **)(*plVar4 + 0xc0))(plVar4,local_1e8,0,0);
    }
  }
  else {
    FUN_14048edb0(&DAT_1461f6280,param_4,0);
  }
  local_218 = *(undefined8 *)(param_4 + 0x18);
  local_210 = *(undefined8 *)(param_4 + 0x20);
  local_208 = *(longlong **)(param_4 + 0x28);
  if (local_208 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_208 + 1) = (int)local_208[1] + 1;
    UNLOCK();
  }
  if ((*(byte *)(param_1 + 0x2d9) & 2) == 0) {
LAB_140478f04:
    if ((*(byte *)(param_1 + 0x2d9) & 1) != 0) {
      cVar8 = FKey::IsGamepadKey(&local_218);
      if (cVar8 == '\0') goto LAB_140478f20;
    }
    local_1c8[0] = 1;
    local_114 = local_114 & 0xffffff00;
    puVar9 = local_1c8;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1a8 = 0;
    bVar6 = false;
    local_1a0 = 0;
    local_148 = 0;
    local_140 = 0;
    bVar5 = true;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0x20702;
  }
  else {
    cVar8 = FKey::IsGamepadKey(&local_218);
    if (cVar8 == '\0') goto LAB_140478f04;
LAB_140478f20:
    local_108[0] = 0;
    local_54 = local_54 & 0xffffff00;
    puVar9 = local_108;
    local_100 = 0;
    local_f8 = 0;
    bVar5 = false;
    bVar6 = true;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0x20702;
  }
  FReply::FReply(param_2,puVar9);
  if (bVar5) {
    FUN_140438c20(local_1c8);
  }
  if (bVar6) {
    FUN_140438c20(local_108);
  }
  plVar4 = local_208;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_208 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_208)(local_208);
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
  return param_2;
}



// FUNCTION 140479080 FUN_140479080 body=369 status=ok
// SIG undefined FUN_140479080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140479080(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_188 [32];
  undefined1 *local_168 [2];
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar6;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  if (param_2 == 0) {
    local_50 = (undefined1 *)0x0;
    local_48 = 0;
  }
  else {
    uVar5 = 0xffffffffffffffff;
    do {
      uVar6 = uVar5;
      uVar5 = uVar6 + 1;
    } while (*(char *)(param_2 + uVar5) != '\0');
    local_168[0] = (undefined1 *)((ulonglong)local_168[0] & 0xffffffff00000000);
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (local_168,0x7fffffff,param_2,uVar5 & 0xffffffff);
    local_48 = (int)local_168[0];
    uVar1 = (int)local_168[0] + 1;
    puVar3 = (undefined1 *)0x0;
    if ((0x80 < uVar1) && (puVar3 = (undefined1 *)0x0, uVar1 != 0)) {
      puVar3 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar1 * 2,0);
      local_58 = puVar3;
    }
    local_168[0] = local_158;
    if (puVar3 != (undefined1 *)0x0) {
      local_168[0] = puVar3;
    }
    local_50 = local_168[0];
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(local_168,uVar1,param_2,(int)uVar6 + 2);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 0x20);
  }
  iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,local_50);
  if (local_58 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 3;
  }
  return;
}



// FUNCTION 140479200 FUN_140479200 body=188 status=ok
// SIG undefined FUN_140479200(void)

undefined1 * FUN_140479200(longlong param_1,undefined1 *param_2)

{
  if ((*(char *)(param_1 + 0x374) == '\0') && (*(char *)(param_1 + 0x375) == '\0')) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    return param_2;
  }
  FUN_1404795c0();
  return param_2;
}



// FUNCTION 1404792c0 FUN_1404792c0 body=31 status=ok
// SIG undefined FUN_1404792c0(void)

undefined8 FUN_1404792c0(undefined8 param_1,undefined8 param_2)

{
  FUN_140479ed0();
  return param_2;
}



// FUNCTION 1404792e0 FUN_1404792e0 body=350 status=ok
// SIG undefined FUN_1404792e0(void)

undefined1 * FUN_1404792e0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  
  if ((*(char *)(param_1 + 0x374) == '\0') && (*(char *)(param_1 + 0x375) == '\0')) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  else {
    local_38 = *(undefined8 *)(param_4 + 0x38);
    local_30 = *(undefined8 *)(param_4 + 0x40);
    local_28 = *(longlong **)(param_4 + 0x48);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x2f0,&local_38);
    plVar5 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_28)(local_28);
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
    FUN_1404795c0(param_1,param_2,param_3,param_4,1);
  }
  return param_2;
}



// FUNCTION 140479440 FUN_140479440 body=350 status=ok
// SIG undefined FUN_140479440(void)

undefined1 * FUN_140479440(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  
  if ((*(char *)(param_1 + 0x374) == '\0') && (*(char *)(param_1 + 0x375) == '\0')) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  else {
    local_38 = *(undefined8 *)(param_4 + 0x38);
    local_30 = *(undefined8 *)(param_4 + 0x40);
    local_28 = *(longlong **)(param_4 + 0x48);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x308,&local_38);
    plVar5 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_28)(local_28);
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
    FUN_1404795c0(param_1,param_2,param_3,param_4,2);
  }
  return param_2;
}



// FUNCTION 1404795a0 FUN_1404795a0 body=31 status=ok
// SIG undefined FUN_1404795a0(void)

undefined8 FUN_1404795a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140479ed0();
  return param_2;
}



// FUNCTION 1404795c0 FUN_1404795c0 body=2310 status=ok
// SIG undefined FUN_1404795c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1404795c0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_578 [32];
  undefined8 *local_558;
  undefined8 *local_550;
  undefined8 *local_548;
  undefined8 *local_540;
  code **local_538;
  undefined1 *local_528 [2];
  undefined8 local_518;
  undefined1 **ppuStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined4 *local_4f8;
  undefined1 *puStack_4f0;
  longlong local_4e8;
  float local_4d8;
  float local_4d4;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined2 local_4b0;
  undefined1 local_4ae;
  float local_4a8;
  float local_4a4;
  code *local_498;
  undefined1 **ppuStack_490;
  undefined1 local_488 [8];
  undefined8 local_480;
  undefined8 local_478;
  undefined1 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  uint local_3d4;
  undefined8 local_3c8 [26];
  undefined4 local_2f8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 *local_288 [2];
  longlong local_278 [4];
  longlong *local_258;
  int local_248;
  undefined1 *local_238 [2];
  longlong local_228 [4];
  longlong *local_208;
  int local_1f8;
  undefined1 *local_1e8 [2];
  longlong local_1d8 [4];
  longlong *local_1b8;
  int local_1a8;
  undefined1 *local_198 [2];
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_128;
  undefined8 local_120;
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
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint local_94;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_578;
  local_528[0]._0_4_ = param_5;
  cVar8 = FWeakObjectPtr::IsValid(param_1 + 0x380);
  if (cVar8 != '\0') {
    plVar10 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x380);
    lVar11 = (**(code **)(*plVar10 + 0x148))(plVar10);
    if (lVar11 != 0) {
      fVar1 = *(float *)(param_4 + 0x1c);
      fVar2 = *(float *)(param_4 + 0x18);
      fVar18 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                     *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
      fVar3 = *(float *)(param_3 + 0x28);
      fVar17 = -(fVar18 * *(float *)(param_3 + 0x24));
      fVar16 = fVar18 * *(float *)(param_3 + 0x1c);
      fVar4 = *(float *)(param_3 + 0x2c);
      fVar5 = *(float *)(param_3 + 0x30);
      fVar15 = -(fVar18 * *(float *)(param_3 + 0x20));
      fVar6 = *(float *)(param_4 + 0x18);
      lVar12 = UWorld::GetGameViewport(lVar11);
      if (lVar12 != 0) {
        FUN_142481d50(lVar12,&local_4a8);
        local_518 = (code *)CONCAT44((int)local_4a4,(int)local_4a8);
        plVar10 = (longlong *)UUserInterfaceSettings::GetPrivateStaticClass();
        lVar12 = plVar10[0x1f];
        if (lVar12 == 0) {
          (**(code **)(*plVar10 + 0x368))(plVar10);
          lVar12 = plVar10[0x1f];
        }
        local_4d8 = (float)UUserInterfaceSettings::GetDPIScaleBasedOnSize(lVar12,local_518);
        local_4d4 = (fVar2 * fVar15 + fVar1 * fVar16 + -fVar5 * fVar16 + -fVar4 * fVar15) *
                    local_4d8;
        local_4d8 = (fVar18 * fVar3 * (-fVar4 + fVar6) + fVar17 * -fVar5 + fVar1 * fVar17) *
                    local_4d8;
        lVar12 = FUN_142874910(DAT_146b17150,lVar11);
        if ((lVar12 != 0) && (plVar10 = *(longlong **)(lVar12 + 0x508), plVar10 != (longlong *)0x0))
        {
          lVar12 = ULocalPlayer::GetPrivateStaticClass();
          if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
              lVar12 + 0x88)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          local_2f8 = 0;
          local_2a8 = 0;
          uStack_2a0 = 0;
          plVar14 = (longlong *)0x0;
          if (bVar7) {
            plVar14 = plVar10;
          }
          local_298 = 0;
          uStack_290 = 0;
          uVar9 = (**(code **)(*plVar14 + 0x2d0))
                            (plVar14,*(undefined8 *)(plVar14[0xe] + 0xb0),0,local_3c8);
          local_4c0 = 0;
          local_4b8 = 0;
          local_4b0 = 0;
          local_4d0 = 0;
          uStack_4c8 = 0;
          local_4ae = 0;
          FUN_14046dc50(&local_4d0,param_3,param_4,local_528[0]._0_4_);
          local_94 = local_94 & 0xffffff00;
          local_508 = (code *)&local_4d0;
          local_148[0] = 0;
          local_140 = 0;
          uStack_500 = local_528;
          local_138 = 0;
          puStack_4f0 = local_148;
          local_128 = 0;
          local_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_c8 = 0;
          local_c0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0x20702;
          local_258 = (longlong *)0x0;
          local_248 = 0;
          local_4f8 = (undefined4 *)param_1;
          local_4e8 = param_4;
          puVar13 = (undefined8 *)FUN_140438ef0(0x30,local_278);
          if (puVar13 != (undefined8 *)0x0) {
            *puVar13 = &PTR_FUN_143f4d098;
            puVar13[1] = local_508;
            puVar13[2] = uStack_500;
            puVar13[3] = local_4f8;
            puVar13[4] = puStack_4f0;
            puVar13[5] = local_4e8;
          }
          local_288[0] = &LAB_140461160;
          ppuStack_510 = local_288;
          local_550 = &local_518;
          local_558 = local_3c8;
          local_518 = FUN_1404611b0;
          cVar8 = FUN_14046f970(param_1,lVar11,&local_4d8,uVar9);
          if (cVar8 == '\0') {
            local_3d4 = local_3d4 & 0xffffff00;
            local_488[0] = 0;
            local_458 = 0;
            uStack_450 = 0;
            local_448 = 0;
            uStack_440 = 0;
            local_438 = 0;
            uStack_430 = 0;
            local_428 = 0;
            uStack_420 = 0;
            local_418 = 0;
            uStack_410 = 0;
            local_3f8 = 0;
            uStack_3f0 = 0;
            local_3e8 = 0;
            uStack_3e0 = 0;
            local_480 = 0;
            local_478 = 0;
            local_468 = 0;
            local_460 = 0;
            local_408 = 0;
            local_400 = 0;
            local_3d8 = 0x20702;
            FUN_140439160(local_148,local_488);
            FUN_140438c20(local_488);
            local_508 = (code *)local_148;
            local_4f8 = (undefined4 *)local_528;
            local_168 = (longlong *)0x0;
            local_158 = 0;
            uStack_500 = (undefined1 **)param_1;
            puVar13 = (undefined8 *)FUN_140438ef0(0x20,local_188);
            if (puVar13 != (undefined8 *)0x0) {
              *(undefined4 *)(puVar13 + 1) = (undefined4)local_508;
              *(undefined4 *)((longlong)puVar13 + 0xc) = local_508._4_4_;
              *(undefined4 *)(puVar13 + 2) = (undefined4)uStack_500;
              *(undefined4 *)((longlong)puVar13 + 0x14) = uStack_500._4_4_;
              *puVar13 = &PTR_FUN_143f4d0b0;
              puVar13[3] = local_4f8;
            }
            local_198[0] = &LAB_140461110;
            local_508 = (code *)local_148;
            local_1b8 = (longlong *)0x0;
            local_1a8 = 0;
            uStack_500 = (undefined1 **)param_1;
            local_4f8 = (undefined4 *)param_4;
            puVar13 = (undefined8 *)FUN_140438ef0(0x20,local_1d8);
            if (puVar13 != (undefined8 *)0x0) {
              *(undefined4 *)(puVar13 + 1) = (undefined4)local_508;
              *(undefined4 *)((longlong)puVar13 + 0xc) = local_508._4_4_;
              *(undefined4 *)(puVar13 + 2) = (undefined4)uStack_500;
              *(undefined4 *)((longlong)puVar13 + 0x14) = uStack_500._4_4_;
              *puVar13 = &PTR_FUN_143f4d0b0;
              puVar13[3] = local_4f8;
            }
            local_1e8[0] = &LAB_140461140;
            local_508 = (code *)&local_4d0;
            uStack_500 = local_528;
            local_208 = (longlong *)0x0;
            puStack_4f0 = local_148;
            local_1f8 = 0;
            local_4f8 = (undefined4 *)param_1;
            local_4e8 = param_4;
            puVar13 = (undefined8 *)FUN_140438ef0(0x30,local_228);
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = &PTR_FUN_143f4d098;
              puVar13[1] = local_508;
              puVar13[2] = uStack_500;
              puVar13[3] = local_4f8;
              puVar13[4] = puStack_4f0;
              puVar13[5] = local_4e8;
            }
            local_238[0] = &LAB_140461120;
            ppuStack_490 = local_238;
            uStack_500 = local_1e8;
            ppuStack_510 = local_198;
            local_498 = FUN_140461220;
            local_538 = &local_498;
            local_540 = &local_508;
            local_548 = &local_518;
            local_550 = local_3c8;
            local_508 = UE4Function_Private::
                        TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>
                        ::Call;
            local_558 = (undefined8 *)CONCAT71(local_558._1_7_,uVar9);
            local_518 = UE4Function_Private::
                        TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>
                        ::Call;
            cVar8 = FUN_14046fd20(param_1,lVar11,plVar14,&local_4d8);
            if (cVar8 == '\0') {
              FUN_1404663d0(param_1,param_2,local_528[0]._0_4_);
              if (local_1f8 != 0) {
                plVar10 = local_228;
                if (local_208 != (longlong *)0x0) {
                  plVar10 = local_208;
                }
                if (plVar10 != (longlong *)0x0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10,0);
                }
              }
              if (local_208 != (longlong *)0x0) {
                FMemory::Free();
              }
              if (local_1a8 != 0) {
                plVar10 = local_1d8;
                if (local_1b8 != (longlong *)0x0) {
                  plVar10 = local_1b8;
                }
                if (plVar10 != (longlong *)0x0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10,0);
                }
              }
              if (local_1b8 != (longlong *)0x0) {
                FMemory::Free();
              }
              if (local_158 != 0) {
                plVar10 = local_188;
                if (local_168 != (longlong *)0x0) {
                  plVar10 = local_168;
                }
                if (plVar10 != (longlong *)0x0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10,0);
                }
              }
              if (local_168 != (longlong *)0x0) {
                FMemory::Free();
              }
            }
            else {
              FReply::FReply(param_2,local_148);
              if (local_1f8 != 0) {
                plVar10 = local_228;
                if (local_208 != (longlong *)0x0) {
                  plVar10 = local_208;
                }
                if (plVar10 != (longlong *)0x0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10,0);
                }
              }
              if (local_208 != (longlong *)0x0) {
                FMemory::Free();
              }
              if (local_1a8 != 0) {
                plVar10 = local_1d8;
                if (local_1b8 != (longlong *)0x0) {
                  plVar10 = local_1b8;
                }
                if (plVar10 != (longlong *)0x0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10,0);
                }
              }
              if (local_1b8 != (longlong *)0x0) {
                FMemory::Free();
              }
              if (local_158 != 0) {
                plVar10 = local_188;
                if (local_168 != (longlong *)0x0) {
                  plVar10 = local_168;
                }
                if (plVar10 != (longlong *)0x0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10,0);
                }
              }
              if (local_168 != (longlong *)0x0) {
                FMemory::Free();
              }
            }
          }
          else {
            FReply::FReply(param_2,local_148);
          }
          if (local_248 != 0) {
            plVar10 = local_278;
            if (local_258 != (longlong *)0x0) {
              plVar10 = local_258;
            }
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x10))(plVar10,0);
            }
          }
          if (local_258 != (longlong *)0x0) {
            FMemory::Free();
          }
          FUN_140438c20(local_148);
          return param_2;
        }
      }
      FUN_1404663d0(param_1,param_2,local_528[0]._0_4_);
      return param_2;
    }
  }
  FUN_1404663d0(param_1,param_2,local_528[0]._0_4_);
  return param_2;
}



// FUNCTION 140479ed0 FUN_140479ed0 body=1319 status=ok
// SIG undefined FUN_140479ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_140479ed0(longlong *param_1,undefined1 *param_2,longlong param_3,longlong param_4,int param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_238 [32];
  char local_218 [8];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  uint local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188;
  undefined8 local_180;
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
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  uint local_f4;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  plVar11 = *(longlong **)(param_1[0x48] + 8);
  if ((plVar11 == (longlong *)0x0) || ((char)param_1[0x50] == '\0')) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  else if (((param_5 == 0) && (*(float *)(param_4 + 0x28) == 0.0)) &&
          (*(float *)(param_4 + 0x2c) == 0.0)) {
    FReply::Handled(param_2);
  }
  else {
    fVar2 = *(float *)(param_3 + 0x30);
    fVar3 = *(float *)(param_3 + 0x24);
    fVar4 = *(float *)(param_3 + 0x2c);
    fVar5 = *(float *)(param_3 + 0x28);
    fVar6 = *(float *)((longlong)param_1 + 0x274);
    fVar7 = *(float *)(param_4 + 0x1c);
    fVar8 = *(float *)(param_3 + 0x20);
    fVar9 = *(float *)(param_4 + 0x18);
    local_200 = 0;
    fVar10 = *(float *)(param_3 + 0x1c);
    uStack_1f8 = 0;
    local_1f0 = local_1f0 & 0xff000000;
    local_210 = 0;
    uStack_208 = 0;
    fVar17 = 1.0 / (fVar10 * fVar5 - fVar8 * fVar3);
    FUN_14046dc50(&local_210,param_3,param_4,param_5);
    iVar12 = (int)((fVar5 * fVar17 * (fVar9 - fVar4) - fVar3 * fVar17 * (fVar7 - fVar2)) * fVar6);
    iVar13 = (int)((fVar10 * fVar17 * (fVar7 - fVar2) - fVar8 * fVar17 * (fVar9 - fVar4)) * fVar6);
    uStack_208 = CONCAT44(iVar13,iVar12);
    if (param_5 == 1) {
      *(undefined1 *)(param_1 + 0x58) = 1;
      *(undefined4 *)((longlong)param_1 + 0x284) = (undefined4)local_210;
      *(undefined4 *)(param_1 + 0x51) = local_210._4_4_;
      *(int *)((longlong)param_1 + 0x28c) = iVar12;
      *(int *)(param_1 + 0x52) = iVar13;
      *(undefined8 *)((longlong)param_1 + 0x294) = local_200;
      *(undefined8 *)((longlong)param_1 + 0x29c) = uStack_1f8;
      *(uint *)((longlong)param_1 + 0x2a4) = local_1f0;
    }
    else if (param_5 == 2) {
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
    (**(code **)(*param_1 + 0x208))(param_1,param_1,plVar11,&local_210);
    local_218[0] = '\0';
    (**(code **)(*plVar11 + 0xb8))(plVar11,&local_210,0,local_218);
    local_f4 = local_f4 & 0xffffff00;
    local_f8 = 0x20702;
    local_1a0 = 0;
    local_198 = 0;
    local_188 = 0;
    local_180 = 0;
    local_128 = 0;
    local_120 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_108 = 0;
    uStack_100 = 0;
    if (local_218[0] == '\0') {
      local_1a8[0] = 0;
      FReply::FReply(param_2,local_1a8);
    }
    else {
      local_1a8[0] = 1;
      puVar14 = (undefined8 *)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_1b8);
      local_1e8 = *puVar14;
      plVar11 = (longlong *)puVar14[1];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_1b0 + 1;
        lVar15 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar1 = (int *)((longlong)local_1b0 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
      plVar16 = plVar11 + 1;
      local_1e0 = local_1e8;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar16 = (int)*plVar16 + 1;
        UNLOCK();
      }
      local_1d0 = *(undefined8 *)(param_4 + 0x38);
      local_1c8 = *(undefined8 *)(param_4 + 0x40);
      local_1c0 = *(longlong *)(param_4 + 0x48);
      if (local_1c0 != 0) {
        LOCK();
        *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
        UNLOCK();
      }
      local_1d8 = plVar11;
      lVar15 = FUN_140466100(local_1a8,&local_1e0,&local_1d0);
      *(uint *)(lVar15 + 0xb4) = *(uint *)(lVar15 + 0xb4) | 0x40;
      FUN_140438260(param_2,lVar15);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        lVar15 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          lVar15 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
      }
    }
    FUN_140438c20(local_1a8);
  }
  return param_2;
}



// FUNCTION 14047a400 FUN_14047a400 body=386 status=ok
// SIG undefined FUN_14047a400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14047a400(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if ((*(char *)(param_1 + 0x374) != '\0') || (*(char *)(param_1 + 0x375) != '\0')) {
    if ((*(float *)(param_4 + 0x28) != 0.0) || (*(float *)(param_4 + 0x2c) != 0.0)) {
      local_f8 = 0;
      FUN_1404795c0(*(float *)(param_4 + 0x28),local_e8);
      FUN_140438c20(local_e8);
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
      *(undefined8 *)(param_2 + 0x68) = 0;
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined8 *)(param_2 + 0x90) = 0;
      *(undefined8 *)(param_2 + 0x98) = 0;
      *(undefined8 *)(param_2 + 0xa0) = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14047a590 FUN_14047a590 body=31 status=ok
// SIG undefined FUN_14047a590(void)

undefined8 FUN_14047a590(undefined8 param_1,undefined8 param_2)

{
  FUN_140479ed0();
  return param_2;
}



// FUNCTION 14047a5b0 FUN_14047a5b0 body=188 status=ok
// SIG undefined FUN_14047a5b0(void)

undefined1 * FUN_14047a5b0(longlong param_1,undefined1 *param_2)

{
  if ((*(char *)(param_1 + 0x374) == '\0') && (*(char *)(param_1 + 0x375) == '\0')) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    return param_2;
  }
  FUN_1404795c0();
  return param_2;
}



// FUNCTION 14047a670 FUN_14047a670 body=31 status=ok
// SIG undefined FUN_14047a670(void)

undefined8 FUN_14047a670(undefined8 param_1,undefined8 param_2)

{
  FUN_140479ed0();
  return param_2;
}



// FUNCTION 14047a690 FUN_14047a690 body=471 status=ok
// SIG undefined FUN_14047a690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14047a690(longlong param_1,longlong param_2)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  ulonglong uVar4;
  short *psVar5;
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
  psVar5 = (short *)0x0;
  iVar6 = 0;
  local_58 = (short *)0x0;
  uVar4 = 0xffffffffffffffff;
  uVar7 = uVar4;
  if (param_2 == 0) {
    local_50 = (short *)0x0;
    local_48 = 0;
  }
  else {
    do {
      uVar8 = uVar7;
      uVar7 = uVar8 + 1;
    } while (*(char *)(param_2 + uVar7) != '\0');
    local_168[0] = (short *)((ulonglong)local_168[0] & 0xffffffff00000000);
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (local_168,0x7fffffff,param_2,uVar7 & 0xffffffff);
    local_48 = (int)local_168[0];
    uVar1 = (int)local_168[0] + 1;
    psVar2 = psVar5;
    if ((0x80 < uVar1) && (psVar2 = (short *)0x0, uVar1 != 0)) {
      psVar2 = (short *)FMemory::Realloc(0,(longlong)(int)uVar1 * 2,0);
      local_58 = psVar2;
    }
    local_168[0] = local_158;
    if (psVar2 != (short *)0x0) {
      local_168[0] = psVar2;
    }
    local_50 = local_168[0];
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(local_168,uVar1,param_2,(int)uVar8 + 2);
  }
  psVar2 = local_50;
  if (*(short **)(param_1 + 0x20) != local_50) {
    if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
      do {
        uVar4 = uVar4 + 1;
      } while (local_50[uVar4] != 0);
      psVar5 = (short *)(ulonglong)((int)uVar4 + 1);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar3 = (int)psVar5;
    if (*(int *)(param_1 + 0x2c) != iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,psVar5);
      iVar6 = *(int *)(param_1 + 0x28);
    }
    *(int *)(param_1 + 0x28) = iVar6 + iVar3;
    if (*(int *)(param_1 + 0x2c) < iVar6 + iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar6);
    }
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x20),psVar2,(longlong)iVar3 * 2);
    }
  }
  if (local_58 != (short *)0x0) {
    FMemory::Free(local_58);
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}



// FUNCTION 14047a870 FUN_14047a870 body=594 status=ok
// SIG undefined FUN_14047a870(void)

undefined4
FUN_14047a870(undefined8 param_1,longlong *param_2,int *param_3,undefined1 *param_4,int param_5)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  bool bVar16;
  uint local_res18;
  undefined2 *local_50;
  int local_48;
  undefined4 local_44;
  
  bVar16 = false;
  if ((*param_3 == 0) || (*param_3 == 3)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 1;
    }
  }
  else {
    plVar6 = (longlong *)FUN_140490060();
    lVar14 = plVar6[0x1f];
    if (lVar14 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar14 = plVar6[0x1f];
    }
    if (((*(char *)(lVar14 + 0x32) == '\0') && (param_5 == 2)) &&
       (cVar3 = (**(code **)(*param_2 + 0x38))(param_2), cVar3 == '\n')) {
      if (param_4 == (undefined1 *)0x0) {
        return 1;
      }
      *param_4 = 0;
      return 1;
    }
    local_res18 = 0;
    iVar4 = (**(code **)(*param_2 + 8))(param_2);
    puVar11 = local_50;
    if (iVar4 != 0) {
      do {
        puVar12 = *(undefined8 **)(lVar14 + 0x38);
        puVar15 = puVar12 + (longlong)*(int *)(lVar14 + 0x40) * 2;
        for (; puVar12 != puVar15; puVar12 = puVar12 + 2) {
          if (param_5 == 2) {
            pcVar7 = (char *)(**(code **)(*param_2 + 0x10))(param_2,local_res18);
            puVar11 = (undefined2 *)0x0;
            iVar4 = 0;
            local_50 = (undefined2 *)0x0;
            local_44 = 0;
            if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
              lVar8 = -1;
              do {
                lVar2 = lVar8 + 1;
                lVar8 = lVar8 + 1;
              } while (pcVar7[lVar2] != '\0');
              iVar13 = (int)lVar8 + 1;
              local_48 = iVar13;
              if (0 < iVar13) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
              }
              iVar4 = local_48;
              puVar11 = local_50;
              FGenericPlatformString::Convert<char,wchar_t>(local_50,iVar13,pcVar7,iVar13,0x3f);
            }
            bVar16 = true;
            puVar10 = &DAT_143f3eda8;
            if (iVar4 != 0) {
              puVar10 = puVar11;
            }
            if (*(int *)(puVar12 + 1) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar12;
            }
            iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
            if (iVar4 != 0) goto LAB_14047aa21;
            bVar1 = true;
          }
          else {
LAB_14047aa21:
            bVar1 = false;
          }
          if ((bVar16) && (bVar16 = false, puVar11 != (undefined2 *)0x0)) {
            FMemory::Free(puVar11);
          }
          if (bVar1) {
            if (param_4 == (undefined1 *)0x0) {
              return 1;
            }
            *param_4 = 0;
            return 1;
          }
        }
        local_res18 = local_res18 + 1;
        uVar5 = (**(code **)(*param_2 + 8))(param_2);
      } while (local_res18 < uVar5);
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 1;
    }
  }
  return 0;
}



// FUNCTION 14047aad0 FUN_14047aad0 body=574 status=ok
// SIG undefined FUN_14047aad0(void)

undefined4
FUN_14047aad0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
             int param_5)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  char *pcVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  bool bVar17;
  uint local_48;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  bVar17 = false;
  plVar7 = (longlong *)FUN_140490060();
  lVar15 = plVar7[0x1f];
  if (lVar15 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar15 = plVar7[0x1f];
  }
  if (((*(char *)(lVar15 + 0x32) == '\0') && (param_5 == 2)) &&
     (cVar3 = (**(code **)(*param_2 + 0x38))(param_2), cVar3 == '\n')) {
    if (param_4 == (undefined1 *)0x0) {
LAB_14047acd0:
      uVar4 = 1;
    }
    else {
      *param_4 = 0;
      uVar4 = 1;
    }
  }
  else {
    local_48 = 0;
    iVar5 = (**(code **)(*param_2 + 8))(param_2);
    puVar12 = local_38;
    if (iVar5 != 0) {
      do {
        puVar13 = *(undefined8 **)(lVar15 + 0x38);
        puVar16 = puVar13 + (longlong)*(int *)(lVar15 + 0x40) * 2;
        for (; puVar13 != puVar16; puVar13 = puVar13 + 2) {
          if (param_5 == 2) {
            pcVar8 = (char *)(**(code **)(*param_2 + 0x10))(param_2,local_48);
            puVar12 = (undefined2 *)0x0;
            iVar5 = 0;
            local_38 = (undefined2 *)0x0;
            local_2c = 0;
            if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
              lVar9 = -1;
              do {
                lVar2 = lVar9 + 1;
                lVar9 = lVar9 + 1;
              } while (pcVar8[lVar2] != '\0');
              iVar14 = (int)lVar9 + 1;
              local_30 = iVar14;
              if (0 < iVar14) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
              }
              iVar5 = local_30;
              puVar12 = local_38;
              FGenericPlatformString::Convert<char,wchar_t>(local_38,iVar14,pcVar8,iVar14,0x3f);
            }
            bVar17 = true;
            puVar11 = &DAT_143f3eda8;
            if (iVar5 != 0) {
              puVar11 = puVar12;
            }
            if (*(int *)(puVar13 + 1) == 0) {
              puVar10 = &DAT_143f3eda8;
            }
            else {
              puVar10 = (undefined2 *)*puVar13;
            }
            iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
            if (iVar5 != 0) goto LAB_14047ac6e;
            bVar1 = true;
          }
          else {
LAB_14047ac6e:
            bVar1 = false;
          }
          if ((bVar17) && (bVar17 = false, puVar12 != (undefined2 *)0x0)) {
            FMemory::Free(puVar12);
          }
          if (bVar1) {
            if (param_4 != (undefined1 *)0x0) {
              *param_4 = 0;
            }
            goto LAB_14047acd0;
          }
        }
        local_48 = local_48 + 1;
        uVar6 = (**(code **)(*param_2 + 8))(param_2);
      } while (local_48 < uVar6);
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 1;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 14047ad10 FUN_14047ad10 body=421 status=ok
// SIG undefined FUN_14047ad10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_14047ad10(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 *local_c0;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined8 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  LOCK();
  bVar3 = **(int **)(param_1 + 0x240) == 0;
  if (bVar3) {
    **(int **)(param_1 + 0x240) = 0;
  }
  UNLOCK();
  if (!bVar3) {
    lVar1 = **(longlong **)(param_1 + 0x230);
    uVar2 = FSlateClippingZone::FSlateClippingZone(local_a8,param_4);
    FSlateWindowElementList::PushClip(param_5,uVar2);
    local_78 = 1.0 / *(float *)(param_1 + 0x274);
    local_74 = 0;
    local_4c = (*(byte *)(param_3 + 0x34) & 1) * '\x02' | local_4c & 0xfc;
    local_c0 = &DAT_1464aa6c0;
    local_c8 = 0;
    local_80 = *(undefined4 *)(param_3 + 0xc);
    local_64 = local_78 * *(float *)(param_3 + 0x1c);
    fStack_60 = local_78 * *(float *)(param_3 + 0x20);
    fStack_5c = local_78 * *(float *)(param_3 + 0x24);
    fStack_58 = local_78 * *(float *)(param_3 + 0x28);
    local_78 = local_78 * *(float *)(param_3 + 8);
    local_7c = *(undefined4 *)(param_3 + 0x10);
    local_6c = *(undefined4 *)(lVar1 + 8);
    local_54 = *(undefined8 *)(param_3 + 0x2c);
    local_68 = *(undefined4 *)(lVar1 + 0xc);
    FSlateDrawElement::MakeBox(param_5,param_6,&local_80,lVar1);
    FSlateWindowElementList::PopClip(param_5);
  }
  return param_6;
}



// FUNCTION 14047aec0 FUN_14047aec0 body=75 status=ok
// SIG undefined FUN_14047aec0(void)

void FUN_14047aec0(longlong param_1,undefined8 param_2)

{
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res10 = (undefined4)param_2;
  uStackX_14 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_20 = local_res10;
  local_1c = uStackX_14;
  local_18 = 0;
  local_10 = 3;
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),local_28,0,0);
  return;
}



// FUNCTION 14047af10 FUN_14047af10 body=115 status=ok
// SIG undefined FUN_14047af10(void)

void FUN_14047af10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined4 local_res20;
  undefined4 uStackX_24;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_res18 = (undefined4)param_3;
  uStackX_1c = (undefined4)((ulonglong)param_3 >> 0x20);
  local_20 = local_res18;
  local_res10 = (undefined4)param_2;
  local_1c = uStackX_1c;
  uStackX_14 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_18 = local_res10;
  local_res20 = (undefined4)param_4;
  local_14 = uStackX_14;
  uStackX_24 = (undefined4)((ulonglong)param_4 >> 0x20);
  local_28 = local_res20;
  local_24 = uStackX_24;
  local_10 = 2;
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),&local_28,0,0);
  return;
}



// FUNCTION 14047af90 FUN_14047af90 body=157 status=ok
// SIG undefined FUN_14047af90(void)

void FUN_14047af90(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    if ((*(uint *)(lVar3 + 8) >> 0xf & 1) == 0) {
      plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x200) + 8);
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_143f4cf48;
        puVar2[2] = &LAB_1404606c0;
      }
      puVar2[1] = lVar3 + 0x198;
      (**(code **)(*plVar1 + 0x150))(plVar1,"ScriptingReady");
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar3 + 0x178,0);
  }
  return;
}



// FUNCTION 14047b030 FUN_14047b030 body=168 status=ok
// SIG undefined FUN_14047b030(void)

void FUN_14047b030(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    if ((*(uint *)(lVar3 + 8) >> 0xf & 1) == 0) {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(lVar3 + 0x100) + 0x240) + 8);
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_143f4cf48;
        puVar2[2] = &LAB_1404606c0;
      }
      puVar2[1] = lVar3 + 0x140;
      (**(code **)(*plVar1 + 0x150))(plVar1,"ScriptingReady");
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar3 + 0x120,0);
  }
  return;
}



// FUNCTION 14047b0e0 FUN_14047b0e0 body=2296 status=ok
// SIG undefined FUN_14047b0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14047b0e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  void *pvVar10;
  char cVar11;
  DWORD DVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  DWORD *pDVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong *plVar20;
  int iVar21;
  longlong *plVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  int local_res20 [2];
  void *local_168;
  ulonglong local_160;
  longlong local_158;
  void *local_150;
  undefined8 local_148;
  longlong local_140;
  undefined4 local_138;
  longlong local_130;
  longlong local_128;
  undefined4 local_120;
  undefined8 local_11c;
  longlong local_110;
  int local_108;
  int local_104;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  void *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [32];
  
  if ((((*(char *)(param_1 + 0x18) == '\0') &&
       (cVar11 = FUN_1415ad720(&DAT_1468e2448), cVar11 == '\0')) && (DAT_1468c21ae != '\0')) &&
     (DVar12 = GetCurrentThreadId(), DVar12 != DAT_1468c21c0)) {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  puVar13 = (undefined8 *)FName::FName(local_88,"CohtmlPlugin",1);
  uVar19 = *puVar13;
  uVar14 = FUN_14168dc80();
  FUN_141690010(uVar14,uVar19);
  if (((DAT_1468505f8 != 0) && (DAT_1468505f0 != (longlong *)0x0)) &&
     (cVar11 = (**(code **)(*DAT_1468505f0 + 0x18))(), cVar11 != '\0')) {
    pcVar7 = *(char **)(param_2 + 0xd0);
    local_168 = (void *)0x0;
    local_160 = 0;
    lVar26 = -1;
    if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
      do {
        lVar26 = lVar26 + 1;
      } while (pcVar7[lVar26] != '\0');
      uVar25 = (int)lVar26 + 1;
      local_160 = (ulonglong)uVar25;
      if (0 < (int)uVar25) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(local_168,uVar25,pcVar7,uVar25,0x3f);
    }
    plVar22 = (longlong *)0x0;
    if (DAT_1468505f8 != 0) {
      plVar22 = DAT_1468505f0;
    }
    lVar26 = (**(code **)(*plVar22 + 0x38))(plVar22,&local_168);
    local_100 = lVar26;
    if (lVar26 != 0) {
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x28,local_res20,lVar26);
      if ((local_res20[0] == -1) ||
         (lVar24 = (longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0x28), lVar24 == 0)) {
        local_e8 = &local_100;
        FUN_14044c5c0(param_1 + 0x28,&local_108,&local_e8,0);
        lVar24 = (longlong)local_108 * 0x20 + *(longlong *)(param_1 + 0x28);
        lVar26 = local_100;
      }
      plVar22 = (longlong *)(lVar24 + 8);
      puVar13 = (undefined8 *)*plVar22;
      iVar21 = *(int *)(param_2 + 0x18);
      puVar16 = puVar13 + (longlong)*(int *)(lVar24 + 0x10) * 4;
      iVar4 = *(int *)(param_2 + 0x1c);
      uVar19 = *(undefined8 *)(param_2 + 0x18);
      local_104 = iVar21;
      if (puVar13 != puVar16) {
LAB_14047b2c2:
        if (*(int *)(puVar13 + 1) != *(int *)(param_2 + 0x14)) goto code_r0x00014047b2c7;
        if ((iVar21 != *(int *)((longlong)puVar13 + 0xc)) || (iVar4 != *(int *)(puVar13 + 2))) {
          if (puVar13[3] != 0) {
            iVar5 = *(int *)(puVar13[3] + 0xc);
            if (iVar5 < (int)DAT_1469e91c4) {
              uVar23 = iVar5 >> 0x1f & 0xffff;
              uVar25 = iVar5 + uVar23;
              puVar3 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar25 >> 0x10) * 8) +
                                8 + (longlong)(int)((uVar25 & 0xffff) - uVar23) * 0x18);
              *puVar3 = *puVar3 & 0xbfffffff;
              puVar13[3] = 0;
            }
            else {
              _DAT_00000008 = _DAT_00000008 & 0xbfffffff;
              puVar13[3] = 0;
            }
          }
          plVar20 = (longlong *)0x0;
          lVar26 = param_1 + -8;
          lVar24 = FUN_140465560(lVar26,iVar21,iVar4,*(undefined8 *)(param_1 + 0x10));
          puVar13[3] = lVar24;
          iVar21 = *(int *)(lVar24 + 0xc);
          plVar22 = plVar20;
          if (iVar21 < (int)DAT_1469e91c4) {
            uVar23 = iVar21 >> 0x1f & 0xffff;
            uVar25 = iVar21 + uVar23;
            plVar22 = (longlong *)
                      (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar25 >> 0x10) * 8) +
                      (longlong)(int)((uVar25 & 0xffff) - uVar23) * 0x18);
          }
          *(uint *)(plVar22 + 1) = *(uint *)(plVar22 + 1) | 0x40000000;
          if ((DAT_146ac3ac5 == '\0') &&
             (((cVar11 = FUN_1415ad720(&DAT_1468e2448), cVar11 != '\0' || (DAT_1468c21ae == '\0'))
              || (DVar12 = GetCurrentThreadId(), DVar12 == DAT_1468c21c0)))) {
            pvVar10 = local_168;
            uVar19 = puVar13[3];
            lVar24 = (longlong)(int)local_160;
            local_d8 = (void *)0x0;
            local_d0 = (int)local_160;
            local_e0 = lVar26;
            if ((int)local_160 == 0) {
              local_cc = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_160 & 0xffffffff,0);
              _guard_xfg_dispatch_icall_nop(local_d8,pvVar10,lVar24 * 2);
            }
            local_c8 = *(undefined4 *)(puVar13 + 1);
            local_c0 = uVar19;
            FUN_140467030(&local_e0,2,local_80);
            if (local_d8 != (void *)0x0) {
              FMemory::Free();
            }
          }
          else {
            pDVar15 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
            plVar22 = TlsGetValue(*pDVar15);
            if (plVar22 == (longlong *)0x0) {
              plVar22 = (longlong *)operator_new(0x18);
              if (plVar22 != (longlong *)0x0) {
                *plVar22 = 0;
                plVar22[1] = 0;
                *(undefined4 *)(plVar22 + 2) = 0;
                plVar20 = plVar22;
              }
              TlsSetValue(*pDVar15,plVar20);
              plVar22 = plVar20;
            }
            plVar20 = (longlong *)plVar22[1];
            if (plVar20 == (longlong *)0x0) {
              plVar20 = (longlong *)*plVar22;
              if (plVar20 == (longlong *)0x0) {
                plVar20 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar15 + 2);
                plVar22[1] = (longlong)plVar20;
                if (plVar20 == (longlong *)0x0) {
                  puVar16 = (undefined8 *)FMemory::Malloc(0x2000,0);
                  plVar22[1] = (longlong)puVar16;
                  lVar26 = 0x1f;
                  do {
                    puVar2 = puVar16 + 0x20;
                    *puVar16 = puVar2;
                    lVar26 = lVar26 + -1;
                    puVar16 = puVar2;
                  } while (lVar26 != 0);
                  *puVar2 = 0;
                  plVar20 = (longlong *)plVar22[1];
                }
                iVar21 = 0x20;
                *(undefined4 *)(plVar22 + 2) = 0x20;
              }
              else {
                iVar21 = 0x20;
                plVar22[1] = (longlong)plVar20;
                *(undefined4 *)(plVar22 + 2) = 0x20;
                *plVar22 = 0;
              }
            }
            else {
              iVar21 = (int)plVar22[2];
            }
            pvVar10 = local_168;
            plVar22[1] = *plVar20;
            *(int *)(plVar22 + 2) = iVar21 + -1;
            *(undefined4 *)(plVar20 + 1) = 0xff;
            *plVar20 = (longlong)&PTR_FUN_143f3edd8;
            local_78 = 0;
            local_70 = 0;
            *(undefined4 *)((longlong)plVar20 + 0xc) = 1;
            *plVar20 = (longlong)&PTR_FUN_143f4cec8;
            *(undefined1 *)(plVar20 + 7) = 0;
            plVar20[8] = 0;
            lVar26 = puVar13[3];
            plVar20[2] = param_1 + -8;
            plVar20[3] = 0;
            lVar24 = (longlong)(int)local_160;
            *(int *)(plVar20 + 4) = (int)local_160;
            if ((int)local_160 == 0) {
              *(undefined4 *)((longlong)plVar20 + 0x24) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar20 + 3,local_160 & 0xffffffff,0)
              ;
              _guard_xfg_dispatch_icall_nop((void *)plVar20[3],pvVar10,lVar24 * 2);
            }
            *(undefined4 *)(plVar20 + 5) = *(undefined4 *)(puVar13 + 1);
            plVar20[6] = lVar26;
            lVar26 = plVar20[8];
            piVar1 = (int *)(lVar26 + 0x48);
            if (lVar26 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_f8 = lVar26;
            FUN_14048a8b0(plVar20,0,0xff,1);
            if (lVar26 != 0) {
              LOCK();
              iVar21 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar21 == 1) {
                FGraphEvent::Recycle(local_f8);
              }
            }
          }
        }
        uVar19 = puVar13[3];
        puVar16 = (undefined8 *)FName::FName(local_68,L"CohCustomEffectTexParam",1);
        FUN_1425a28b0(*puVar13,*puVar16,uVar19);
        FUN_140487b20(param_1 + -8,*puVar13,param_2);
        goto LAB_14047b9ac;
      }
LAB_14047b2d0:
      lVar26 = UMaterialInstanceDynamic::Create(lVar26,0);
      iVar5 = *(int *)(lVar26 + 0xc);
      if (iVar5 < (int)DAT_1469e91c4) {
        uVar23 = iVar5 >> 0x1f & 0xffff;
        uVar25 = iVar5 + uVar23;
        lVar17 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar25 >> 0x10) * 8) +
                 (longlong)(int)((uVar25 & 0xffff) - uVar23) * 0x18;
      }
      else {
        lVar17 = 0;
      }
      *(uint *)(lVar17 + 8) = *(uint *)(lVar17 + 8) | 0x40000000;
      uVar6 = *(undefined4 *)(param_2 + 0x14);
      lVar17 = param_1 + -8;
      local_128 = lVar26;
      local_120 = uVar6;
      local_11c = uVar19;
      lVar18 = FUN_140465560(lVar17,iVar21,iVar4,*(undefined8 *)(param_1 + 0x10));
      iVar21 = *(int *)(lVar18 + 0xc);
      if (iVar21 < (int)DAT_1469e91c4) {
        uVar23 = iVar21 >> 0x1f & 0xffff;
        uVar25 = iVar21 + uVar23;
        lVar27 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar25 >> 0x10) * 8) +
                 (longlong)(int)((uVar25 & 0xffff) - uVar23) * 0x18;
      }
      else {
        lVar27 = 0;
      }
      *(uint *)(lVar27 + 8) = *(uint *)(lVar27 + 8) | 0x40000000;
      local_110 = lVar18;
      puVar13 = (undefined8 *)FName::FName(local_60,L"CohCustomEffectTexParam",1);
      FUN_1425a28b0(lVar26,*puVar13,lVar18);
      FUN_140487b20(lVar17,lVar26,param_2);
      pvVar10 = local_168;
      lVar27 = (longlong)(int)local_160;
      local_150 = (void *)0x0;
      local_148 = CONCAT44(local_148._4_4_,(int)local_160);
      local_158 = lVar17;
      if ((int)local_160 == 0) {
        local_148 = local_160 & 0xffffffff;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_150,local_160 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_150,pvVar10,lVar27 * 2);
      }
      local_140 = lVar26;
      local_138 = uVar6;
      local_130 = lVar18;
      if ((DAT_146ac3ac6 == '\0') || (cVar11 = IsInRenderingThread(), cVar11 == '\0')) {
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar11 = FUN_1415ad720(&DAT_1468e2448), cVar11 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar12 = GetCurrentThreadId(), DVar12 == DAT_1468c21c0)))) {
          local_b8 = local_158;
          local_b0 = local_150;
          local_a8 = (undefined4)local_148;
          local_a4 = local_148._4_4_;
          local_a0 = local_140;
          local_98 = local_138;
          local_90 = local_130;
          local_150 = (void *)0x0;
          local_148 = 0;
          uVar19 = FBaseGraphTask::GetSmallTaskAllocator();
          FUN_14045af60(&local_b8,uVar19);
          if (local_b0 != (void *)0x0) {
            FMemory::Free();
          }
        }
        else {
          plVar20 = (longlong *)FUN_140465150(local_58,0,0xff);
          lVar17 = *plVar20;
          *(longlong *)(lVar17 + 0x10) = local_158;
          *(undefined8 *)(lVar17 + 0x18) = 0;
          *(void **)(lVar17 + 0x18) = local_150;
          local_150 = (void *)0x0;
          *(undefined4 *)(lVar17 + 0x20) = (undefined4)local_148;
          *(undefined4 *)(lVar17 + 0x24) = local_148._4_4_;
          local_148 = 0;
          *(longlong *)(lVar17 + 0x28) = local_140;
          *(undefined4 *)(lVar17 + 0x30) = local_138;
          *(longlong *)(lVar17 + 0x38) = local_130;
          lVar17 = *plVar20;
          lVar9 = plVar20[2];
          lVar27 = plVar20[1];
          lVar8 = *(longlong *)(lVar17 + 0x48);
          piVar1 = (int *)(lVar8 + 0x48);
          if (lVar8 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            lVar26 = local_128;
            lVar18 = local_110;
          }
          local_f0 = lVar8;
          FUN_140489ef0(lVar17,lVar27,(int)lVar9,1);
          if (lVar8 != 0) {
            LOCK();
            iVar21 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            lVar26 = local_128;
            lVar18 = local_110;
            if (iVar21 == 1) {
              FGraphEvent::Recycle(local_f0);
              lVar26 = local_128;
              lVar18 = local_110;
            }
          }
        }
      }
      else {
        uVar19 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_14045af60(&local_158,uVar19);
      }
      if (local_150 != (void *)0x0) {
        FMemory::Free();
      }
      iVar21 = *(int *)(lVar24 + 0x10);
      *(int *)(lVar24 + 0x10) = iVar21 + 1;
      if (*(int *)(lVar24 + 0x14) < iVar21 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar22,iVar21);
      }
      plVar22 = (longlong *)((longlong)iVar21 * 0x20 + *plVar22);
      *(undefined4 *)(plVar22 + 1) = 0xffffffff;
      if (plVar22 != &local_128) {
        *(undefined4 *)(plVar22 + 1) = local_120;
        *(int *)((longlong)plVar22 + 0xc) = local_104;
        *(int *)(plVar22 + 2) = iVar4;
        *plVar22 = lVar26;
        plVar22[3] = lVar18;
        local_128 = 0;
        local_120 = 0xffffffff;
        local_11c = 0;
        local_110 = 0;
      }
      FUN_140458360(&local_128);
    }
LAB_14047b9ac:
    if (local_168 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
code_r0x00014047b2c7:
  puVar13 = puVar13 + 4;
  if (puVar13 == puVar16) goto LAB_14047b2d0;
  goto LAB_14047b2c2;
}



// FUNCTION 14047b9e0 FUN_14047b9e0 body=500 status=ok
// SIG undefined FUN_14047b9e0(void)

void FUN_14047b9e0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  void *_Src;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int local_res8 [2];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  void *local_38;
  ulonglong local_30;
  longlong *local_28;
  int local_20;
  
  if (*(longlong *)(param_1 + 0x2f0) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x2f8) == 0) {
    return;
  }
  plVar5 = (longlong *)0x0;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
  LOCK();
  iVar6 = *piVar1;
  if (iVar6 == 0) {
    *piVar1 = 0;
    iVar6 = 0;
  }
  UNLOCK();
  if (iVar6 < 1) {
    return;
  }
  uVar3 = (**(code **)(*param_2 + 0x68))(param_2,local_48);
  uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  FUN_1404545a0(&local_38,uVar4,uVar3);
  if (((*(int *)(param_1 + 0x2e8) != 0) && (*(longlong **)(param_1 + 0x2e0) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x2e8) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x2e0);
    }
    (**(code **)(*plVar5 + 0x38))(plVar5,&local_38);
  }
  cVar2 = FUN_14048df60(param_1,param_2,local_res8,&local_38);
  _Src = local_38;
  if (cVar2 == '\0') {
    (**(code **)(*param_3 + 0x38))(param_3,1);
    plVar5 = local_28;
    iVar6 = local_20;
    goto joined_r0x00014047bb82;
  }
  local_58 = (void *)0x0;
  iVar6 = (int)local_30;
  local_50 = iVar6;
  if (iVar6 == 0) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_30 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_58,_Src,(longlong)iVar6 * 2);
  }
  if (local_res8[0] == 2) {
    cVar2 = FUN_14048d380(param_1,&local_38,param_2,param_3);
LAB_14047bb47:
    if (cVar2 == '\0') {
      (**(code **)(*param_3 + 0x38))(param_3,1);
    }
  }
  else {
    if (local_res8[0] == 1) {
      cVar2 = FUN_14048dc90(param_1,&local_58);
      goto LAB_14047bb47;
    }
    FUN_140480080(param_1,param_2,param_3,&local_58);
  }
  plVar5 = local_28;
  iVar6 = local_20;
  if (local_58 != (void *)0x0) {
    FMemory::Free();
    plVar5 = local_28;
    iVar6 = local_20;
  }
joined_r0x00014047bb82:
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14047bbe0 FUN_14047bbe0 body=739 status=ok
// SIG undefined FUN_14047bbe0(void)

void FUN_14047bbe0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  IAsyncResourceResponse *this;
  ISyncStreamReader *this_00;
  int iVar6;
  longlong lVar7;
  ISyncStreamReader *pIVar8;
  ISyncStreamReader *pIVar9;
  int local_res8 [2];
  ISyncStreamReader *local_68;
  int local_60;
  undefined1 local_58 [16];
  void *local_48;
  ulonglong local_40;
  longlong *local_38;
  int local_30;
  
  if ((param_1[0x5e] != 0) && (param_1[0x5f] != 0)) {
    pIVar8 = (ISyncStreamReader *)0x0;
    piVar1 = (int *)(param_1[0x5f] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      uVar4 = (**(code **)(*param_2 + 0x68))(param_2,local_58);
      uVar5 = (**(code **)(*param_2 + 0x18))(param_2);
      FUN_1404545a0(&local_48,uVar5,uVar4);
      cVar3 = FUN_14048df60(param_1,param_2,local_res8,&local_48);
      _Src = local_48;
      if (cVar3 == '\0') {
        (**(code **)(*param_3 + 0x10))(param_3,1);
        plVar2 = local_38;
      }
      else if (local_res8[0] == 2) {
        this = (IAsyncResourceResponse *)operator_new(0x28);
        if (this == (IAsyncResourceResponse *)0x0) {
          (**(code **)(*param_1 + 8))(param_1,param_2,0);
          plVar2 = local_38;
        }
        else {
          cohtml::IAsyncResourceResponse::IAsyncResourceResponse(this);
          *(undefined ***)this = &PTR_FUN_143f4bdf8;
          *(undefined8 *)(this + 8) = 0;
          *(undefined8 *)(this + 0x10) = 0;
          *(longlong **)(this + 0x18) = param_3;
          (**(code **)(*param_1 + 8))(param_1,param_2,this);
          plVar2 = local_38;
        }
      }
      else {
        local_68 = (ISyncStreamReader *)0x0;
        iVar6 = (int)local_40;
        pIVar9 = pIVar8;
        local_60 = iVar6;
        if (iVar6 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_40 & 0xffffffff,0);
          pIVar9 = local_68;
          _guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)iVar6 * 2);
        }
        iVar6 = local_60;
        this_00 = (ISyncStreamReader *)operator_new(0x98);
        if (this_00 != (ISyncStreamReader *)0x0) {
          pIVar8 = (ISyncStreamReader *)&DAT_143f3eda8;
          if (iVar6 != 0) {
            pIVar8 = pIVar9;
          }
          cohtml::ISyncStreamReader::ISyncStreamReader(this_00);
          *(undefined ***)this_00 = &PTR_FUN_143f4bd88;
          InitializeCriticalSection((LPCRITICAL_SECTION)(this_00 + 8));
          SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(this_00 + 8),4000);
          *(undefined8 *)(this_00 + 0x30) = 0;
          *(undefined8 *)(this_00 + 0x38) = 0;
          if ((pIVar8 != (ISyncStreamReader *)0x0) && (*(short *)pIVar8 != 0)) {
            lVar7 = -1;
            do {
              lVar7 = lVar7 + 1;
            } while (*(short *)(pIVar8 + lVar7 * 2) != 0);
            iVar6 = (int)lVar7 + 1;
            *(int *)(this_00 + 0x38) = iVar6;
            if (0 < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(this_00 + 0x30,0);
            }
            FGenericPlatformString::Memcpy
                      (*(undefined8 *)(this_00 + 0x30),pIVar8,(longlong)iVar6 * 2);
          }
          *(undefined4 *)(this_00 + 0x40) = 0;
          *(undefined8 *)(this_00 + 0x48) = 0;
          *(undefined8 *)(this_00 + 0x50) = 0;
          *(undefined8 *)(this_00 + 0x68) = 0;
          *(undefined8 *)(this_00 + 0x70) = 0;
          *(undefined4 *)(this_00 + 0x78) = 0xffffffff;
          *(undefined4 *)(this_00 + 0x7c) = 0;
          *(undefined8 *)(this_00 + 0x88) = 0;
          *(undefined4 *)(this_00 + 0x90) = 0;
          FUN_14046df90(this_00);
          pIVar8 = this_00;
        }
        lVar7 = FUN_14046df90(pIVar8);
        if (lVar7 != 0) {
          (**(code **)(*param_3 + 8))(param_3,pIVar8);
        }
        else {
          (**(code **)(*(longlong *)pIVar8 + 0x18))(pIVar8);
        }
        (**(code **)(*param_3 + 0x10))(param_3,lVar7 == 0);
        plVar2 = local_38;
        if (pIVar9 != (ISyncStreamReader *)0x0) {
          FMemory::Free(pIVar9);
          plVar2 = local_38;
        }
      }
      for (; local_30 != 0; local_30 = local_30 + -1) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 2;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14047bed0 FUN_14047bed0 body=197 status=ok
// SIG undefined FUN_14047bed0(void)

undefined8 * FUN_14047bed0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  float local_res10;
  float local_res14;
  longlong local_18;
  longlong *local_10;
  
  plVar1 = DAT_1469f4590;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_18);
  if (local_18 != 0) {
    FUN_14183dbb0(local_18,&local_res10);
    *(undefined4 *)(param_2 + 2) = 0x18;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0x18;
    *(int *)(param_2 + 1) = (int)(longlong)local_res10;
    *(int *)param_2 = (int)(longlong)local_res10;
    *(int *)((longlong)param_2 + 0xc) = (int)(longlong)local_res14;
    *(int *)((longlong)param_2 + 4) = (int)(longlong)local_res14;
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



// FUNCTION 14047bfa0 FUN_14047bfa0 body=75 status=ok
// SIG undefined FUN_14047bfa0(void)

void FUN_14047bfa0(longlong param_1,undefined8 param_2)

{
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res10 = (undefined4)param_2;
  uStackX_14 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_20 = local_res10;
  local_1c = uStackX_14;
  local_18 = 0;
  local_10 = 4;
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),local_28,0,0);
  return;
}



// FUNCTION 14047bff0 FUN_14047bff0 body=188 status=ok
// SIG undefined FUN_14047bff0(void)

undefined1 * FUN_14047bff0(longlong param_1,undefined1 *param_2)

{
  if ((*(char *)(param_1 + 0x374) == '\0') && (*(char *)(param_1 + 0x375) == '\0')) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    return param_2;
  }
  FUN_14047c0d0();
  return param_2;
}



// FUNCTION 14047c0b0 FUN_14047c0b0 body=31 status=ok
// SIG undefined FUN_14047c0b0(void)

undefined8 FUN_14047c0b0(undefined8 param_1,undefined8 param_2)

{
  FUN_14047ca30();
  return param_2;
}



// FUNCTION 14047c0d0 FUN_14047c0d0 body=2390 status=ok
// SIG undefined FUN_14047c0d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14047c0d0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_598 [32];
  undefined8 *local_578;
  undefined8 *local_570;
  undefined8 *local_568;
  undefined8 *local_560;
  code **local_558;
  undefined8 local_548;
  undefined1 **ppuStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined4 *local_528;
  undefined1 *puStack_520;
  longlong local_518;
  float local_508;
  float local_504;
  undefined1 local_500 [8];
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined1 local_4f0;
  undefined1 local_4ef;
  undefined1 local_4ee;
  undefined1 local_4ed;
  undefined2 local_4ec;
  float local_4e8;
  float local_4e4;
  code *local_4d8;
  undefined1 **ppuStack_4d0;
  undefined1 local_4c8 [8];
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined1 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  uint local_414;
  undefined8 local_408 [26];
  undefined4 local_338;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined1 *local_2c8 [2];
  longlong local_2b8 [4];
  longlong *local_298;
  int local_288;
  undefined1 *local_278 [2];
  longlong local_268 [4];
  longlong *local_248;
  int local_238;
  undefined1 *local_228 [2];
  longlong local_218 [4];
  longlong *local_1f8;
  int local_1e8;
  undefined1 *local_1d8 [2];
  longlong local_1c8 [4];
  longlong *local_1a8;
  int local_198;
  undefined1 local_188 [8];
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_168;
  undefined8 local_160;
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
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  uint local_d4;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_598;
  cVar8 = FWeakObjectPtr::IsValid(param_1 + 0x380);
  if (cVar8 == '\0') {
LAB_14047ca0f:
    FUN_1404663d0(param_1,param_2,param_5);
    return param_2;
  }
  plVar10 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x380);
  lVar11 = (**(code **)(*plVar10 + 0x148))(plVar10);
  if (lVar11 == 0) goto LAB_14047ca0f;
  lVar12 = FUN_142874910(DAT_146b17150,lVar11);
  if (((lVar12 == 0) || (*(longlong *)(lVar12 + 0x508) == 0)) ||
     (lVar13 = UWorld::GetGameViewport(lVar11), lVar13 == 0)) {
    FUN_1404663d0(param_1,param_2,param_5);
    return param_2;
  }
  fVar1 = *(float *)(param_3 + 0x2c);
  fVar2 = *(float *)(param_3 + 0x30);
  fVar3 = *(float *)(param_3 + 0x28);
  fVar4 = *(float *)(param_4 + 0x18);
  fVar5 = *(float *)(param_4 + 0x1c);
  fVar19 = 1.0 / (*(float *)(param_3 + 0x1c) * fVar3 -
                 *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
  fVar17 = fVar19 * *(float *)(param_3 + 0x1c);
  fVar18 = -(fVar19 * *(float *)(param_3 + 0x24));
  fVar16 = -(fVar19 * *(float *)(param_3 + 0x20));
  FUN_142481d50(lVar13,&local_4e8);
  local_548 = (code *)CONCAT44((int)local_4e4,(int)local_4e8);
  uVar14 = GetDefault<UUserInterfaceSettings>();
  local_508 = (float)UUserInterfaceSettings::GetDPIScaleBasedOnSize(uVar14,local_548);
  local_504 = (fVar4 * fVar16 + fVar5 * fVar17 + -fVar2 * fVar17 + -fVar1 * fVar16) * local_508;
  local_508 = (fVar19 * fVar3 * (-fVar1 + fVar4) + fVar18 * -fVar2 + fVar5 * fVar18) * local_508;
  plVar10 = *(longlong **)(lVar12 + 0x508);
  if (plVar10 != (longlong *)0x0) {
    lVar12 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
        lVar12 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_14047c375;
  }
  plVar10 = (longlong *)0x0;
LAB_14047c375:
  local_338 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  uVar9 = (**(code **)(*plVar10 + 0x2d0))(plVar10,*(undefined8 *)(plVar10[0xe] + 0xb0),0,local_408);
  local_4f4 = param_5;
  uVar6 = *(ushort *)(param_4 + 8);
  local_4f8 = *(undefined4 *)(param_4 + 0x50);
  local_4f0 = (uVar6 & 3) != 0;
  local_4ec = 0;
  local_4ef = (uVar6 & 0xc) != 0;
  local_188[0] = 0;
  local_538 = (code *)local_500;
  local_180 = 0;
  local_4ee = (uVar6 & 0x30) != 0;
  local_178 = 0;
  uStack_530 = (undefined1 **)&param_5;
  local_168 = 0;
  local_4ed = (uVar6 & 0xc0) != 0;
  local_160 = 0;
  puStack_520 = local_188;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_d4 = local_d4 & 0xffffff00;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x20702;
  local_298 = (longlong *)0x0;
  local_288 = 0;
  local_528 = (undefined4 *)param_1;
  local_518 = param_4;
  puVar15 = (undefined8 *)FUN_140438ef0(0x30,local_2b8);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &PTR_FUN_143f4d098;
    puVar15[1] = local_538;
    puVar15[2] = uStack_530;
    puVar15[3] = local_528;
    puVar15[4] = puStack_520;
    puVar15[5] = local_518;
  }
  local_2c8[0] = &LAB_140461150;
  ppuStack_540 = local_2c8;
  local_570 = &local_548;
  local_578 = local_408;
  local_548 = FUN_1404611b0;
  cVar8 = FUN_14046f970(param_1,lVar11,&local_508,uVar9);
  if (cVar8 == '\0') {
    local_414 = local_414 & 0xffffff00;
    local_4c8[0] = 0;
    local_498 = 0;
    uStack_490 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_478 = 0;
    uStack_470 = 0;
    local_468 = 0;
    uStack_460 = 0;
    local_458 = 0;
    uStack_450 = 0;
    local_438 = 0;
    uStack_430 = 0;
    local_428 = 0;
    uStack_420 = 0;
    local_4c0 = 0;
    local_4b8 = 0;
    local_4a8 = 0;
    local_4a0 = 0;
    local_448 = 0;
    local_440 = 0;
    local_418 = 0x20702;
    FUN_140439160(local_188,local_4c8);
    FUN_140438c20(local_4c8);
    local_538 = (code *)local_188;
    local_528 = &param_5;
    local_1a8 = (longlong *)0x0;
    local_198 = 0;
    uStack_530 = (undefined1 **)param_1;
    puVar15 = (undefined8 *)FUN_140438ef0(0x20,local_1c8);
    if (puVar15 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar15 + 1) = (undefined4)local_538;
      *(undefined4 *)((longlong)puVar15 + 0xc) = local_538._4_4_;
      *(undefined4 *)(puVar15 + 2) = (undefined4)uStack_530;
      *(undefined4 *)((longlong)puVar15 + 0x14) = uStack_530._4_4_;
      *puVar15 = &PTR_FUN_143f4d0b0;
      puVar15[3] = local_528;
    }
    local_1d8[0] = &LAB_140461110;
    local_538 = (code *)local_188;
    local_1f8 = (longlong *)0x0;
    local_1e8 = 0;
    uStack_530 = (undefined1 **)param_1;
    local_528 = (undefined4 *)param_4;
    puVar15 = (undefined8 *)FUN_140438ef0(0x20,local_218);
    if (puVar15 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar15 + 1) = (undefined4)local_538;
      *(undefined4 *)((longlong)puVar15 + 0xc) = local_538._4_4_;
      *(undefined4 *)(puVar15 + 2) = (undefined4)uStack_530;
      *(undefined4 *)((longlong)puVar15 + 0x14) = uStack_530._4_4_;
      *puVar15 = &PTR_FUN_143f4d0b0;
      puVar15[3] = local_528;
    }
    local_228[0] = &LAB_140461140;
    local_538 = (code *)local_500;
    uStack_530 = (undefined1 **)&param_5;
    local_248 = (longlong *)0x0;
    puStack_520 = local_188;
    local_238 = 0;
    local_528 = (undefined4 *)param_1;
    local_518 = param_4;
    puVar15 = (undefined8 *)FUN_140438ef0(0x30,local_268);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &PTR_FUN_143f4d098;
      puVar15[1] = local_538;
      puVar15[2] = uStack_530;
      puVar15[3] = local_528;
      puVar15[4] = puStack_520;
      puVar15[5] = local_518;
    }
    local_278[0] = &LAB_1404610f0;
    ppuStack_4d0 = local_278;
    uStack_530 = local_228;
    ppuStack_540 = local_1d8;
    local_4d8 = FUN_140461220;
    local_558 = &local_4d8;
    local_560 = &local_538;
    local_568 = &local_548;
    local_570 = local_408;
    local_538 = UE4Function_Private::
                TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
                Call;
    local_578 = (undefined8 *)CONCAT71(local_578._1_7_,uVar9);
    local_548 = UE4Function_Private::
                TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
                Call;
    cVar8 = FUN_14046fd20(param_1,lVar11,plVar10,&local_508);
    if (cVar8 == '\0') {
      FUN_1404663d0(param_1,param_2,param_5);
      if (local_238 != 0) {
        plVar10 = local_268;
        if (local_248 != (longlong *)0x0) {
          plVar10 = local_248;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_248 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_1e8 != 0) {
        plVar10 = local_218;
        if (local_1f8 != (longlong *)0x0) {
          plVar10 = local_1f8;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_1f8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_198 != 0) {
        plVar10 = local_1c8;
        if (local_1a8 != (longlong *)0x0) {
          plVar10 = local_1a8;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_1a8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else {
      FReply::FReply(param_2,local_188);
      if (local_238 != 0) {
        plVar10 = local_268;
        if (local_248 != (longlong *)0x0) {
          plVar10 = local_248;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_248 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_1e8 != 0) {
        plVar10 = local_218;
        if (local_1f8 != (longlong *)0x0) {
          plVar10 = local_1f8;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_1f8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_198 != 0) {
        plVar10 = local_1c8;
        if (local_1a8 != (longlong *)0x0) {
          plVar10 = local_1a8;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_1a8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  else {
    FReply::FReply(param_2,local_188);
  }
  if (local_288 != 0) {
    plVar10 = local_2b8;
    if (local_298 != (longlong *)0x0) {
      plVar10 = local_298;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_298 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_140438c20(local_188);
  return param_2;
}



// FUNCTION 14047ca30 FUN_14047ca30 body=1182 status=ok
// SIG undefined FUN_14047ca30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_14047ca30(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 auStack_1d8 [32];
  int local_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined1 local_1a8;
  undefined1 uStack_1a7;
  undefined1 uStack_1a6;
  undefined1 uStack_1a5;
  undefined2 uStack_1a4;
  undefined2 uStack_1a2;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  char local_158 [192];
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x240) + 8);
  if ((lVar7 == 0) || (*(char *)(param_1 + 0x280) == '\0')) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  }
  else if (((param_5 == 0) && (*(float *)(param_4 + 0x28) == 0.0)) &&
          (*(float *)(param_4 + 0x2c) == 0.0)) {
    FReply::Handled(param_2);
  }
  else {
    uVar3 = *(ushort *)(param_4 + 8);
    local_1a8 = (uVar3 & 3) != 0;
    uStack_1a7 = (uVar3 & 0xc) != 0;
    uStack_1a6 = (uVar3 & 0x30) != 0;
    uStack_1a5 = (uVar3 & 0xc0) != 0;
    uStack_1b0 = *(undefined4 *)(param_4 + 0x50);
    uStack_1a4 = 0;
    iStack_1ac = param_5;
    fVar10 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                   *(float *)(param_3 + 0x20) * *(float *)(param_3 + 0x24));
    local_1b8 = (int)((*(float *)(param_3 + 0x28) * fVar10 *
                       (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c)) -
                      *(float *)(param_3 + 0x24) * fVar10 *
                      (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30))) *
                     *(float *)(param_1 + 0x274));
    iStack_1b4 = (int)((*(float *)(param_3 + 0x1c) * fVar10 *
                        (*(float *)(param_4 + 0x1c) - *(float *)(param_3 + 0x30)) -
                       *(float *)(param_3 + 0x20) * fVar10 *
                       (*(float *)(param_4 + 0x18) - *(float *)(param_3 + 0x2c))) *
                      *(float *)(param_1 + 0x274));
    if (param_5 == 1) {
      *(undefined1 *)(param_1 + 0x2c1) = 1;
      *(int *)(param_1 + 0x2a8) = local_1b8;
      *(int *)(param_1 + 0x2ac) = iStack_1b4;
      *(undefined4 *)(param_1 + 0x2b0) = uStack_1b0;
      *(undefined4 *)(param_1 + 0x2b4) = 1;
      *(ulonglong *)(param_1 + 0x2b8) =
           CONCAT26(uStack_1a2,
                    (uint6)CONCAT13(uStack_1a5,CONCAT12(uStack_1a6,CONCAT11(uStack_1a7,local_1a8))))
      ;
    }
    else if (param_5 == 2) {
      *(undefined1 *)(param_1 + 0x2c1) = 0;
    }
    lVar8 = *(longlong *)(param_1 + 0x248);
    if (lVar8 == 0) {
      puVar6 = (undefined8 *)operator_new(0x18);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_143f4a868;
        puVar6[1] = 0;
        puVar6[2] = 0;
      }
      puVar4 = *(undefined8 **)(param_1 + 0x248);
      *(undefined8 **)(param_1 + 0x248) = puVar6;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
        puVar6 = *(undefined8 **)(param_1 + 0x248);
      }
      FUN_140471340(puVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x240) + 8));
      lVar8 = *(longlong *)(param_1 + 0x248);
    }
    FUN_140486c20(local_158,lVar7,&local_1b8,lVar8);
    if (local_158[0] == '\0') {
      FReply::FReply(param_2,local_158);
      FUN_140438c20(local_158);
    }
    else {
      puVar6 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_170);
      local_1a0 = *puVar6;
      plVar5 = (longlong *)puVar6[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (local_168 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_168 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_168)(local_168);
          LOCK();
          piVar1 = (int *)((longlong)local_168 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_168 + 8))(local_168,1);
          }
        }
      }
      plVar9 = plVar5 + 1;
      local_198 = local_1a0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar9 = (int)*plVar9 + 1;
        UNLOCK();
      }
      local_188 = *(undefined8 *)(param_4 + 0x38);
      local_180 = *(undefined8 *)(param_4 + 0x40);
      local_178 = *(longlong *)(param_4 + 0x48);
      if (local_178 != 0) {
        LOCK();
        *(int *)(local_178 + 8) = *(int *)(local_178 + 8) + 1;
        UNLOCK();
      }
      local_190 = plVar5;
      lVar7 = FUN_140466100(local_158,&local_198,&local_188);
      *(uint *)(lVar7 + 0xb4) = *(uint *)(lVar7 + 0xb4) | 0x40;
      FUN_140438260(param_2,lVar7);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          lVar7 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar5)(plVar5);
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
      FUN_140438c20(local_158);
    }
  }
  return param_2;
}



// FUNCTION 14047ced0 FUN_14047ced0 body=386 status=ok
// SIG undefined FUN_14047ced0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_14047ced0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if ((*(char *)(param_1 + 0x374) != '\0') || (*(char *)(param_1 + 0x375) != '\0')) {
    if ((*(float *)(param_4 + 0x28) != 0.0) || (*(float *)(param_4 + 0x2c) != 0.0)) {
      local_f8 = 0;
      FUN_14047c0d0(*(float *)(param_4 + 0x28),local_e8);
      FUN_140438c20(local_e8);
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
      *(undefined8 *)(param_2 + 0x68) = 0;
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined8 *)(param_2 + 0x90) = 0;
      *(undefined8 *)(param_2 + 0x98) = 0;
      *(undefined8 *)(param_2 + 0xa0) = 0;
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 14047d060 FUN_14047d060 body=31 status=ok
// SIG undefined FUN_14047d060(void)

undefined8 FUN_14047d060(undefined8 param_1,undefined8 param_2)

{
  FUN_14047ca30();
  return param_2;
}



// FUNCTION 14047d080 FUN_14047d080 body=188 status=ok
// SIG undefined FUN_14047d080(void)

undefined1 * FUN_14047d080(longlong param_1,undefined1 *param_2)

{
  if ((*(char *)(param_1 + 0x374) == '\0') && (*(char *)(param_1 + 0x375) == '\0')) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    return param_2;
  }
  FUN_14047c0d0();
  return param_2;
}



// FUNCTION 14047d140 FUN_14047d140 body=31 status=ok
// SIG undefined FUN_14047d140(void)

undefined8 FUN_14047d140(undefined8 param_1,undefined8 param_2)

{
  FUN_14047ca30();
  return param_2;
}



// FUNCTION 14047d160 FUN_14047d160 body=437 status=ok
// SIG undefined FUN_14047d160(void)

ulonglong FUN_14047d160(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  
  uVar11 = *(ulonglong *)(param_1 + 0x118);
  uVar5 = uVar11 + param_3;
  if (*(ulonglong *)(param_1 + 0x150) < uVar5) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    return uVar5 & 0xffffffffffffff00;
  }
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 == 0) || (((iVar1 == 1 || (iVar1 == 4)) && (uVar11 < *(ulonglong *)(param_1 + 0x150))))
     ) {
    uVar12 = 0;
    if (param_3 != 0) {
      piVar10 = (int *)(param_2 + 8);
      do {
        if (piVar10[1] == 1) {
          uVar5 = 0;
          if (uVar11 != 0) {
            piVar8 = (int *)(param_1 + 0x1c);
            do {
              if (*piVar8 == *piVar10) break;
              uVar5 = uVar5 + 1;
              piVar8 = piVar8 + 8;
            } while (uVar5 < uVar11);
          }
          iVar2 = piVar10[-1];
          iVar3 = *piVar10;
          iVar4 = piVar10[1];
          lVar9 = uVar5 * 0x20 + param_1;
          *(int *)(lVar9 + 0x14) = piVar10[-2];
          *(int *)(lVar9 + 0x18) = iVar2;
          *(int *)(lVar9 + 0x1c) = iVar3;
          *(int *)(lVar9 + 0x20) = iVar4;
          *(undefined8 *)(lVar9 + 0x24) = *(undefined8 *)(piVar10 + 2);
          *(int *)(lVar9 + 0x2c) = piVar10[-2];
          *(int *)(lVar9 + 0x30) = piVar10[-1];
          uVar11 = *(ulonglong *)(param_1 + 0x118);
          if (uVar5 == uVar11) {
            uVar11 = uVar11 + 1;
            *(ulonglong *)(param_1 + 0x118) = uVar11;
          }
          if (uVar11 == *(ulonglong *)(param_1 + 0x150)) break;
        }
        uVar12 = uVar12 + 1;
        piVar10 = piVar10 + 6;
      } while (uVar12 < param_3);
    }
    if ((*(ulonglong *)(param_1 + 0x148) <= uVar11) && (uVar11 <= *(ulonglong *)(param_1 + 0x150)))
    {
      puVar6 = (undefined8 *)FUN_14046edb0(param_1,local_res8);
      *(undefined8 *)(param_1 + 0x158) = *puVar6;
      lVar9 = _guard_xfg_dispatch_icall_nop();
      lVar7 = _guard_xfg_dispatch_icall_nop();
      lVar9 = ((lVar7 / lVar9) * 1000000000 + ((lVar7 % lVar9) * 1000000000) / lVar9) / 1000000;
      uVar5 = *(ulonglong *)(param_1 + 0x158);
      *(ulonglong *)(param_1 + 0x17c) = uVar5;
      *(longlong *)(param_1 + 0x160) = lVar9;
      *(longlong *)(param_1 + 0x168) = lVar9;
      if (iVar1 != 4) {
        *(undefined4 *)(param_1 + 8) = 1;
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 14047d320 FUN_14047d320 body=449 status=ok
// SIG undefined FUN_14047d320(void)

ulonglong FUN_14047d320(longlong param_1,int *param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulonglong uVar9;
  float local_res8;
  float fStackX_c;
  
  lVar5 = 0;
  for (piVar8 = param_2; piVar8 != param_2 + param_3 * 6; piVar8 = piVar8 + 6) {
    lVar3 = lVar5 + 1;
    if (piVar8[3] != 1) {
      lVar3 = lVar5;
    }
    lVar5 = lVar3;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x118);
  puVar7 = (undefined8 *)((longlong)puVar6 + lVar5);
  if (*(undefined8 **)(param_1 + 0x150) < puVar7) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    return (ulonglong)puVar7 & 0xffffffffffffff00;
  }
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 == 0) ||
     (((iVar1 == 1 || (iVar1 == 4)) && (puVar6 < *(undefined8 **)(param_1 + 0x150))))) {
    uVar9 = 0;
    if (param_3 != 0) {
      piVar8 = param_2 + 2;
      do {
        if (piVar8[1] == 1) {
          puVar7 = (undefined8 *)0x0;
          if (puVar6 != (undefined8 *)0x0) {
            piVar4 = (int *)(param_1 + 0x1c);
            do {
              if (*piVar4 == *piVar8) break;
              puVar7 = (undefined8 *)((longlong)puVar7 + 1);
              piVar4 = piVar4 + 8;
            } while (puVar7 < puVar6);
          }
          uVar2 = *(undefined8 *)piVar8;
          lVar5 = (longlong)puVar7 * 0x20;
          puVar6 = (undefined8 *)(lVar5 + 0x14 + param_1);
          *puVar6 = *(undefined8 *)(piVar8 + -2);
          puVar6[1] = uVar2;
          *(undefined8 *)(lVar5 + 0x24 + param_1) = *(undefined8 *)(piVar8 + 2);
          *(int *)(lVar5 + 0x2c + param_1) = piVar8[-2];
          *(int *)(lVar5 + 0x30 + param_1) = piVar8[-1];
          puVar6 = *(undefined8 **)(param_1 + 0x118);
          if (puVar7 == puVar6) {
            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
            *(undefined8 **)(param_1 + 0x118) = puVar6;
          }
          local_res8 = (float)*param_2;
          fStackX_c = (float)param_2[1];
          puVar7 = (undefined8 *)CONCAT44(fStackX_c,local_res8);
          *(undefined8 **)(param_1 + 0x168) = puVar7;
          if (puVar6 == *(undefined8 **)(param_1 + 0x150)) break;
        }
        uVar9 = uVar9 + 1;
        piVar8 = piVar8 + 6;
      } while (uVar9 < param_3);
    }
    if ((*(undefined8 **)(param_1 + 0x148) <= puVar6) &&
       (puVar6 <= *(undefined8 **)(param_1 + 0x150))) {
      puVar7 = (undefined8 *)FUN_14046edb0(param_1,&local_res8);
      *(undefined8 *)(param_1 + 0x15c) = *puVar7;
      if (iVar1 != 4) {
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(undefined4 *)(param_1 + 8) = 1;
      }
    }
  }
  return (ulonglong)puVar7 & 0xffffffffffffff00;
}



// FUNCTION 14047d4f0 FUN_14047d4f0 body=254 status=ok
// SIG undefined FUN_14047d4f0(void)

ulonglong FUN_14047d4f0(longlong param_1,int *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  
  lVar2 = 0;
  for (piVar5 = param_2; piVar5 != param_2 + param_3 * 6; piVar5 = piVar5 + 6) {
    lVar3 = lVar2 + 1;
    if (piVar5[3] != 1) {
      lVar3 = lVar2;
    }
    lVar2 = lVar3;
  }
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x148);
  if ((ulonglong)(*(longlong *)(param_1 + 0x118) + lVar2) <= uVar4) {
    if (param_2[3] == 1) {
      *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 1;
      uVar1 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 0x1c) = uVar1;
      *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 4);
      *(int *)(param_1 + 0x2c) = *param_2;
      *(int *)(param_1 + 0x30) = param_2[1];
      *(ulonglong *)(param_1 + 0x154) = CONCAT44((float)param_2[1],(float)*param_2);
      lVar2 = _guard_xfg_dispatch_icall_nop();
      lVar3 = _guard_xfg_dispatch_icall_nop();
      uVar4 = ((lVar3 % lVar2) * 1000000000) / lVar2 + (lVar3 / lVar2) * 1000000000;
      *(ulonglong *)(param_1 + 0x160) = uVar4;
    }
    return uVar4 & 0xffffffffffffff00;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  return (ulonglong)(uint3)(*(uint *)(param_1 + 0x148) >> 8) << 8;
}



// FUNCTION 14047d5f0 FUN_14047d5f0 body=558 status=ok
// SIG undefined FUN_14047d5f0(void)

ulonglong FUN_14047d5f0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  undefined8 local_res8;
  
  puVar2 = (undefined8 *)FUN_14046edb0();
  *(undefined8 *)((longlong)param_1 + 0x184) = *puVar2;
  if (param_3 != 0) {
    piVar11 = (int *)(param_2 + 8);
    do {
      if (piVar11[1] == 2) {
        iVar9 = (int)param_1[0x23];
        iVar7 = 0;
        lVar6 = 0;
        if (0 < iVar9) {
          piVar3 = (int *)((longlong)param_1 + 0x1c);
          do {
            if (*piVar3 == *piVar11) {
              if (-1 < iVar7) {
                if (lVar6 < iVar9 + -1) {
                  puVar2 = (undefined8 *)((longlong)param_1 + lVar6 * 0x20 + 0x34);
                  puVar10 = (undefined8 *)((longlong)param_1 + lVar6 * 0x20 + 0x14);
                  for (uVar8 = ((iVar9 + -1) - lVar6) * 4 & 0x1ffffffffffffffc; uVar8 != 0;
                      uVar8 = uVar8 - 1) {
                    *puVar10 = *puVar2;
                    puVar2 = puVar2 + 1;
                    puVar10 = puVar10 + 1;
                  }
                }
                param_1[0x23] = param_1[0x23] + -1;
              }
              break;
            }
            iVar7 = iVar7 + 1;
            lVar6 = lVar6 + 1;
            piVar3 = piVar3 + 8;
          } while (lVar6 < iVar9);
        }
      }
      piVar11 = piVar11 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  iVar9 = (int)param_1[1];
  if ((ulonglong)param_1[0x29] <= (ulonglong)param_1[0x23]) {
    plVar4 = (longlong *)FUN_14046edb0(param_1,&local_res8);
    param_1[0x2b] = *plVar4;
    *(undefined4 *)(param_1 + 1) = 4;
    local_res8 = (**(code **)(*param_1 + 0x20))(param_1);
    goto LAB_14047d807;
  }
  lVar6 = _guard_xfg_dispatch_icall_nop();
  lVar5 = _guard_xfg_dispatch_icall_nop();
  lVar6 = ((lVar5 / lVar6) * 1000000000 + ((lVar5 % lVar6) * 1000000000) / lVar6) / 1000000;
  if (param_1[0x2e] < lVar6 - param_1[0x2c]) {
LAB_14047d78d:
    iVar9 = 2;
  }
  else {
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x17c);
    local_res8._0_4_ = (float)uVar1;
    fVar13 = *(float *)((longlong)param_1 + 0x184) - (float)local_res8;
    local_res8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    fVar12 = *(float *)(param_1 + 0x31) - local_res8._4_4_;
    local_res8 = uVar1;
    if ((fVar13 * fVar13 + fVar12 * fVar12) * 0.00025201563 < *(float *)(param_1 + 0x2f))
    goto LAB_14047d78d;
  }
  if ((iVar9 == 4) && (plVar4 = (longlong *)param_1[0x28], plVar4 != (longlong *)0x0)) {
    fVar12 = 0.0;
    if (param_1[0x2d] != 0) {
      fVar12 = (float)(lVar6 - param_1[0x2d]);
    }
    (**(code **)(*plVar4 + 0x18))
              (plVar4,*(undefined8 *)((longlong)param_1 + 0x184),
               *(undefined8 *)((longlong)param_1 + 0x17c),fVar12);
  }
  local_res8 = 0xff7fffffff7fffff;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xff7fffffff7fffff;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[0x23] = 0;
LAB_14047d807:
  return local_res8 & 0xffffffffffffff00;
}



// FUNCTION 14047d820 FUN_14047d820 body=333 status=ok
// SIG undefined FUN_14047d820(void)

ulonglong FUN_14047d820(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined1 local_res8 [8];
  
  plVar2 = (longlong *)FUN_14046edb0();
  param_1[0x2e] = *plVar2;
  if (param_3 != 0) {
    piVar9 = (int *)(param_2 + 8);
    do {
      if (piVar9[1] == 2) {
        iVar1 = (int)param_1[0x23];
        iVar7 = 0;
        lVar3 = 0;
        if (0 < iVar1) {
          piVar6 = (int *)((longlong)param_1 + 0x1c);
          do {
            if (*piVar6 == *piVar9) {
              if (-1 < iVar7) {
                if (lVar3 < iVar1 - iVar7) {
                  puVar4 = (undefined8 *)((longlong)param_1 + lVar3 * 0x20 + 0x34);
                  puVar8 = (undefined8 *)((longlong)param_1 + lVar3 * 0x20 + 0x14);
                  for (uVar5 = ((iVar1 - iVar7) - lVar3) * 4 & 0x1ffffffffffffffc; uVar5 != 0;
                      uVar5 = uVar5 - 1) {
                    *puVar8 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar8 = puVar8 + 1;
                  }
                }
                param_1[0x23] = param_1[0x23] + -1;
              }
              break;
            }
            iVar7 = iVar7 + 1;
            lVar3 = lVar3 + 1;
            piVar6 = piVar6 + 8;
          } while (lVar3 < iVar1);
        }
      }
      piVar9 = piVar9 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  uVar5 = param_1[0x29];
  if ((ulonglong)param_1[0x23] < uVar5) {
    if (((int)param_1[1] == 4) && (plVar2 = (longlong *)param_1[0x28], plVar2 != (longlong *)0x0)) {
      uVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1[0x2e]);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[0x23] = 0;
    return uVar5 & 0xffffffffffffff00;
  }
  puVar4 = (undefined8 *)FUN_14046edb0(param_1,local_res8);
  *(undefined8 *)((longlong)param_1 + 0x15c) = *puVar4;
  *(undefined4 *)(param_1 + 1) = 4;
  uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 14047d970 FUN_14047d970 body=270 status=ok
// SIG undefined FUN_14047d970(void)

ulonglong FUN_14047d970(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong lVar4;
  float local_res18;
  float fStackX_1c;
  
  if (param_3 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  param_1[0x23] = param_1[0x23] + -1;
  iVar1 = *param_2;
  iVar2 = param_2[1];
  lVar3 = _guard_xfg_dispatch_icall_nop();
  lVar4 = _guard_xfg_dispatch_icall_nop();
  if (((((lVar4 % lVar3) * 1000000000) / lVar3 - param_1[0x2c]) + (lVar4 / lVar3) * 1000000000) /
      1000000 < (longlong)(ulonglong)*(uint *)((longlong)param_1 + 0x14c)) {
    local_res18 = (float)*(undefined8 *)((longlong)param_1 + 0x154);
    fStackX_1c = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x154) >> 0x20);
    if (SQRT(((float)iVar1 - local_res18) * ((float)iVar1 - local_res18) +
             ((float)iVar2 - fStackX_1c) * ((float)iVar2 - fStackX_1c)) <
        (float)*(uint *)(param_1 + 0x2a)) {
      *(undefined4 *)(param_1 + 1) = 3;
      (**(code **)(*param_1 + 0x20))(param_1);
      goto LAB_14047da62;
    }
  }
  *(undefined4 *)(param_1 + 1) = 2;
LAB_14047da62:
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[0x23] = 0;
  return 0;
}



// FUNCTION 14047da80 FUN_14047da80 body=125 status=ok
// SIG undefined FUN_14047da80(void)

ulonglong FUN_14047da80(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong local_res8 [4];
  
  uVar2 = param_1[0x23];
  if (((ulonglong)param_1[0x29] <= uVar2) && (uVar2 <= (ulonglong)param_1[0x2a])) {
    FUN_14046edb0(param_1,local_res8);
    lVar1 = FUN_14046df30();
    if (param_1[0x2e] < lVar1 - param_1[0x2c]) {
      *(longlong *)((longlong)param_1 + 0x17c) = local_res8[0];
      param_1[0x2d] = lVar1;
    }
    param_1[0x2c] = lVar1;
    param_1[0x2b] = local_res8[0];
    *(undefined4 *)(param_1 + 1) = 4;
    uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14047db00 FUN_14047db00 body=257 status=ok
// SIG undefined FUN_14047db00(void)

ulonglong FUN_14047db00(longlong *param_1)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  undefined8 local_res8;
  undefined8 local_res20;
  
  local_res20 = param_1[0x23];
  if (((ulonglong)param_1[0x29] <= local_res20) && (local_res20 <= (ulonglong)param_1[0x2a])) {
    FUN_14046edb0(param_1,&local_res8);
    fVar2 = *(float *)((longlong)param_1 + 0x15c) - (float)local_res8;
    fVar3 = *(float *)(param_1 + 0x2c) - local_res8._4_4_;
    *(ulonglong *)((longlong)param_1 + 0x15c) = local_res8;
    local_res20 = CONCAT44(fVar3,fVar2);
    param_1[0x2f] = local_res20;
    local_res8 = local_res20;
    if ((int)param_1[1] == 1) {
      fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2) * 0.015875 + *(float *)(param_1 + 0x2b);
      *(float *)(param_1 + 0x2b) = fVar2;
      if (*(float *)((longlong)param_1 + 0x164) <= ABS(fVar2)) {
        uVar1 = FUN_140488e80(param_1,4);
        return uVar1 & 0xffffffffffffff00;
      }
    }
    else {
      *(undefined4 *)(param_1 + 1) = 4;
      local_res20 = (**(code **)(*param_1 + 0x20))(param_1);
    }
  }
  return local_res20 & 0xffffffffffffff00;
}



// FUNCTION 14047dc10 FUN_14047dc10 body=1858 status=ok
// SIG undefined FUN_14047dc10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14047dc10(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  BOOL BVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  bool bVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  int iVar18;
  void *pvVar19;
  ulonglong uVar20;
  undefined1 auStack_178 [32];
  undefined2 *local_158;
  int local_150;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  longlong local_128;
  void *local_120;
  int local_118;
  undefined1 local_108 [24];
  int local_f0;
  longlong local_d8;
  undefined8 local_c8;
  longlong local_c0 [2];
  undefined8 local_b0;
  longlong local_a8 [2];
  longlong *local_98;
  uint local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (*(longlong *)(param_1 + 0x2f0) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x2f8) == 0) {
    return;
  }
  uVar17 = 0;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
  LOCK();
  iVar8 = *piVar1;
  if (iVar8 == 0) {
    *piVar1 = 0;
    iVar8 = 0;
  }
  UNLOCK();
  if (iVar8 < 1) {
    return;
  }
  local_c8 = *param_2;
  FString::FString(local_c0,param_2 + 1);
  local_b0 = param_2[3];
  FString::FString(local_a8,param_2 + 4);
  local_98 = (longlong *)param_2[6];
  local_90 = *(uint *)(param_2 + 7);
  local_88 = param_2[8];
  local_80 = (longlong *)param_2[9];
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_78 = *(undefined4 *)(param_2 + 10);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x54);
  uStack_70 = *(undefined4 *)(param_2 + 0xb);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x5c);
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  }
  iVar8 = *(int *)(param_1 + 0x30);
  uVar20 = uVar17;
  if (0 < iVar8) {
    do {
      iVar18 = (int)uVar17;
      if (*(undefined8 **)(uVar20 + *(longlong *)(param_1 + 0x28)) == param_2) {
        local_128 = (longlong)iVar18 * 8;
        lVar10 = *(longlong *)(local_128 + *(longlong *)(param_1 + 0x28));
        if (lVar10 != 0) {
          FUN_140458770(lVar10);
          FMemory::operator_delete(lVar10,0x60);
          iVar8 = *(int *)(param_1 + 0x30);
        }
        iVar18 = (iVar8 - iVar18) + -1;
        if (0 < iVar18) {
          iVar18 = 1;
        }
        if (iVar18 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x28) + local_128),
                     (void *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar8 - iVar18) * 8),
                     (longlong)iVar18 << 3);
          iVar8 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar8 + -1;
        FUN_140485810(param_1 + 0x28);
      }
      else {
        uVar17 = (ulonglong)(iVar18 + 1);
        uVar20 = uVar20 + 8;
      }
      iVar8 = *(int *)(param_1 + 0x30);
    } while ((int)uVar17 < iVar8);
  }
  pvVar19 = (void *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  uVar4 = local_90;
  pvVar9 = (void *)FStreamableHandle::GetLoadedAsset();
  local_60 = uVar4;
  local_5c = local_78;
  uStack_58 = uStack_74;
  uStack_54 = uStack_70;
  uStack_50 = uStack_6c;
  local_68 = pvVar9;
  if (pvVar9 == (void *)0x0) {
LAB_14047de6d:
    bVar11 = false;
  }
  else {
    lVar10 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)((longlong)pvVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)((longlong)pvVar9 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11 != uVar4 < 2) goto LAB_14047de6d;
    lVar10 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)((longlong)pvVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (bVar11 = true,
       *(longlong *)
        (*(longlong *)(*(longlong *)((longlong)pvVar9 + 0x10) + 0x88) +
        (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar11 = false;
    }
    if (bVar11 != (uVar4 == 2)) goto LAB_14047de6d;
    bVar11 = true;
  }
  if (!bVar11) {
    (**(code **)(*local_98 + 0x38))(local_98,1);
    goto LAB_14047e2b4;
  }
  if ((int)uVar4 < 0) {
LAB_14047df60:
    iVar8 = 0x31;
  }
  else if ((int)uVar4 < 2) {
    if (pvVar9 == (void *)0x0) {
LAB_14047df4a:
      pvVar9 = pvVar19;
    }
    else {
      lVar10 = UTexture2D::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)((longlong)pvVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)((longlong)pvVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (!bVar11) goto LAB_14047df4a;
    }
    iVar8 = FUN_14046c7e0(*(undefined4 *)(*(longlong *)((longlong)pvVar9 + 0xd8) + 0xc));
  }
  else {
    if (uVar4 != 2) goto LAB_14047df60;
    if (pvVar9 == (void *)0x0) {
LAB_14047dedc:
      pvVar9 = pvVar19;
    }
    else {
      lVar10 = UTexture2D::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)((longlong)pvVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)((longlong)pvVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (!bVar11) goto LAB_14047dedc;
    }
    if (*(char *)((longlong)pvVar9 + 0xe2) == '\0') {
      uVar7 = FUN_14046e310(*(undefined1 *)((longlong)pvVar9 + 0xe1));
      iVar8 = FUN_14046c7e0(uVar7);
    }
    else {
      iVar8 = FUN_14046c7e0(*(char *)((longlong)pvVar9 + 0xe2));
    }
  }
  FSoftObjectPath::ToString(&local_c8,&local_158);
  if (iVar8 != 0x31) {
    FUN_14046d610(&local_68,local_108);
    if (uVar4 == 2) {
      puVar15 = DAT_1461f61e8 + (longlong)DAT_1461f61f0 * 3;
      for (puVar14 = DAT_1461f61e8; puVar14 != puVar15; puVar14 = puVar14 + 3) {
        puVar13 = &DAT_143f3eda8;
        if (local_150 != 0) {
          puVar13 = local_158;
        }
        if (*(int *)(puVar14 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar14;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
        if (iVar8 == 0) goto LAB_14047e07d;
      }
      puVar14 = DAT_1461f61c8 + (longlong)DAT_1461f61d0 * 2;
      for (puVar15 = DAT_1461f61c8; puVar15 != puVar14; puVar15 = puVar15 + 2) {
        puVar13 = &DAT_143f3eda8;
        if (local_150 != 0) {
          puVar13 = local_158;
        }
        if (*(int *)(puVar15 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar15;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
        if (iVar8 == 0) goto LAB_14047e07d;
      }
      bVar11 = false;
      goto LAB_14047e04c;
    }
    goto LAB_14047e284;
  }
  (**(code **)(*local_98 + 0x38))(local_98,1);
LAB_14047e2a5:
  if (local_158 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_14047e2b4:
  plVar5 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  if (local_c0[0] != 0) {
    FMemory::Free();
  }
  return;
LAB_14047e07d:
  bVar11 = true;
LAB_14047e04c:
  puVar13 = local_158;
  puVar15 = DAT_1461f61e8;
  if (bVar11) {
    puVar14 = DAT_1461f61e8 + (longlong)DAT_1461f61f0 * 3;
    for (puVar16 = DAT_1461f61e8; puVar16 != puVar14; puVar16 = puVar16 + 3) {
      puVar13 = &DAT_143f3eda8;
      if (local_150 != 0) {
        puVar13 = local_158;
      }
      if (*(int *)(puVar16 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*puVar16;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
      if (iVar8 == 0) {
        iVar8 = (int)(((longlong)puVar16 - (longlong)puVar15) / 0x18);
        if (iVar8 != -1) {
          local_f0 = *(int *)(DAT_1461f61e8 + (longlong)iVar8 * 3 + 2);
          goto LAB_14047e284;
        }
        break;
      }
    }
    puVar14 = DAT_1461f61c8;
    puVar16 = DAT_1461f61c8 + (longlong)DAT_1461f61d0 * 2;
    for (puVar15 = DAT_1461f61c8; puVar15 != puVar16; puVar15 = puVar15 + 2) {
      puVar13 = &DAT_143f3eda8;
      if (local_150 != 0) {
        puVar13 = local_158;
      }
      if (*(int *)(puVar15 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*puVar15;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
      if (iVar8 == 0) {
        iVar8 = (int)((longlong)puVar15 - (longlong)puVar14 >> 4);
        goto LAB_14047e274;
      }
    }
    iVar8 = -1;
LAB_14047e274:
    local_f0 = *(int *)(DAT_1461f61d8 + (longlong)iVar8 * 4);
  }
  else {
    local_f0 = DAT_1461f61f8;
    local_148 = (void *)0x0;
    local_140 = local_150;
    if (local_150 == 0) {
      local_13c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,local_150,0);
      _guard_xfg_dispatch_icall_nop(local_148,puVar13,(longlong)local_150 * 2);
    }
    iVar8 = DAT_1461f61f8;
    FString::FString(&local_120,&local_148);
    if (local_148 != (void *)0x0) {
      FMemory::Free();
    }
    local_138 = (void *)0x0;
    local_130 = local_118;
    if (local_118 == 0) {
      local_12c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_138,local_118,0);
      pvVar19 = local_138;
      _guard_xfg_dispatch_icall_nop(local_138,local_120,(longlong)local_118 * 2);
    }
    uVar7 = local_12c;
    iVar3 = local_130;
    iVar18 = DAT_1461f61f0;
    lVar10 = (longlong)DAT_1461f61f0;
    DAT_1461f61f0 = DAT_1461f61f0 + 1;
    if (DAT_1461f61f4 < DAT_1461f61f0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&DAT_1461f61e8,iVar18);
    }
    puVar15 = DAT_1461f61e8;
    DAT_1461f61e8[lVar10 * 3] = pvVar19;
    *(int *)(puVar15 + lVar10 * 3 + 1) = iVar3;
    *(undefined4 *)((longlong)puVar15 + lVar10 * 0x18 + 0xc) = uVar7;
    *(int *)(puVar15 + lVar10 * 3 + 2) = iVar8;
    if (local_120 != (void *)0x0) {
      FMemory::Free(local_120);
    }
    DAT_1461f61f8 = DAT_1461f61f8 + 1;
    FString::operator=(local_d8 + 0x28,&local_158);
  }
LAB_14047e284:
  (**(code **)(*local_98 + 0x10))(local_98,local_108);
  (**(code **)(*local_98 + 0x38))(local_98,0);
  goto LAB_14047e2a5;
}



// FUNCTION 14047e370 FUN_14047e370 body=53 status=ok
// SIG undefined FUN_14047e370(void)

void FUN_14047e370(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x240) + 8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    (**(code **)(*plVar1 + 0x78))(plVar1,1);
  }
  FUN_140462870(param_1);
  return;
}



// FUNCTION 14047e3b0 FUN_14047e3b0 body=293 status=ok
// SIG undefined FUN_14047e3b0(void)

void FUN_14047e3b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  uint uStackX_c;
  
  plVar8 = (longlong *)0x0;
  lVar5 = FUN_14046d130();
  if (((*(longlong *)(param_1 + 0x2d0) == 0) || (DAT_146b19a68 == 0)) || (lVar5 == 0)) {
    plVar7 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    plVar2 = *(longlong **)(lVar5 + 200);
    plVar7 = plVar2;
    plVar9 = plVar8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar7 = plVar8, plVar9 = (longlong *)0x0, !bVar10) {
        LOCK();
        bVar10 = iVar4 == (int)plVar2[1];
        if (bVar10) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar7 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar9 = *(longlong **)(lVar5 + 0xc0);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    plVar8 = (longlong *)0x1;
    cVar3 = SWindow::IsWindowMinimized(plVar9);
    if (cVar3 == '\0') {
      bVar10 = true;
      goto LAB_14047e447;
    }
  }
  bVar10 = false;
LAB_14047e447:
  if ((plVar8 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (bVar10) {
    if (*(longlong *)(DAT_146b19a68 + 400) == 0) {
      uVar6 = *(undefined8 *)(DAT_146b19a68 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(DAT_146b19a68 + 400) + 0x90);
    }
    FUN_142880530(uVar6,param_1 + 0x2d0);
    *(undefined8 *)(param_1 + 0x2d0) = 0;
  }
  return;
}



// FUNCTION 14047e4e0 FUN_14047e4e0 body=634 status=ok
// SIG undefined FUN_14047e4e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14047e4e0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  code *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  int local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar10 = (longlong *)0x0;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  lVar6 = FUN_14046d130();
  pcVar8 = local_d8;
  if (((0.0 < *(float *)(param_1 + 0x27c)) && (DAT_146b19a68 != 0)) && (lVar6 != 0)) {
    plVar3 = *(longlong **)(lVar6 + 200);
    pcVar8 = (code *)plVar3;
    plVar11 = plVar10;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (pcVar8 = (code *)plVar10, plVar11 = (longlong *)0x0, !bVar12) {
        LOCK();
        bVar12 = iVar5 == (int)plVar3[1];
        if (bVar12) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar12) {
          pcVar8 = (code *)plVar3;
          if (plVar3 != (longlong *)0x0) {
            plVar11 = *(longlong **)(lVar6 + 0xc0);
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar12 = iVar5 == 0;
        if (bVar12) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    plVar10 = (longlong *)0x1;
    cVar4 = SWindow::IsWindowMinimized(plVar11);
    if (cVar4 != '\0') {
      bVar12 = true;
      goto LAB_14047e599;
    }
  }
  bVar12 = false;
LAB_14047e599:
  if ((plVar10 != (longlong *)0x0) && (pcVar8 != (code *)0x0)) {
    LOCK();
    plVar10 = (longlong *)((longlong)pcVar8 + 8);
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (*(code *)**(undefined8 **)pcVar8)(pcVar8);
      LOCK();
      piVar1 = (int *)((longlong)pcVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*(longlong *)pcVar8 + 8))(pcVar8,1);
      }
    }
  }
  if (bVar12) {
    uStack_d0 = 0;
    local_d8 = FUN_14048c580;
    local_b8 = 0x4048c580;
    uStack_b4 = 1;
    uStack_b0 = 0;
    uStack_ac = uStack_cc;
    if (*(longlong *)(DAT_146b19a68 + 400) == 0) {
      uVar9 = *(undefined8 *)(DAT_146b19a68 + 0x3f8);
    }
    else {
      uVar9 = *(undefined8 *)(*(longlong *)(DAT_146b19a68 + 400) + 0x90);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x27c);
    uVar7 = FUN_14044bb20(&local_c8,param_1,&local_b8);
    local_a8 = 0;
    local_a0 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_a8,uVar7);
    FWeakObjectPtr::operator=(local_98,0);
    local_e0 = 0xbf800000;
    local_e8 = 1;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar9,param_1 + 0x2d0,&local_a8,uVar2);
    if (local_48 != 0) {
      plVar10 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar10 = local_58;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (local_c0 != 0) {
      if (local_c8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_c8 + 0x28))(local_c8,0);
      if (local_c8 != (longlong *)0x0) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
      local_c0 = 0;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  return;
}



// FUNCTION 14047e760 FUN_14047e760 body=761 status=ok
// SIG undefined FUN_14047e760(void)

void FUN_14047e760(undefined8 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  
  lVar3 = FUN_14046d8e0(DAT_146850550);
  if (param_2 == 0) {
    pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar5 = TlsGetValue(*pDVar4);
    plVar8 = (longlong *)0x0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        plVar8 = plVar5;
      }
      TlsSetValue(*pDVar4,plVar8);
      plVar5 = plVar8;
    }
    plVar8 = (longlong *)plVar5[1];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)*plVar5;
      if (plVar8 == (longlong *)0x0) {
        lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar4 + 2);
        plVar5[1] = lVar6;
        if (lVar6 == 0) {
          puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar5[1] = (longlong)puVar7;
          lVar6 = 0x1f;
          do {
            puVar2 = puVar7 + 0x20;
            *puVar7 = puVar2;
            lVar6 = lVar6 + -1;
            puVar7 = puVar2;
          } while (lVar6 != 0);
          *puVar2 = 0;
        }
        plVar8 = (longlong *)plVar5[1];
        iVar9 = 0x20;
        *(undefined4 *)(plVar5 + 2) = 0x20;
      }
      else {
        iVar9 = 0x20;
        plVar5[1] = (longlong)plVar8;
        *(undefined4 *)(plVar5 + 2) = 0x20;
        *plVar5 = 0;
      }
    }
    else {
      iVar9 = (int)plVar5[2];
    }
    plVar5[1] = *plVar8;
    *(int *)(plVar5 + 2) = iVar9 + -1;
    *plVar8 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar8 + 1) = 0xff;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *(undefined1 *)(plVar8 + 3) = 0;
    *plVar8 = (longlong)&PTR_FUN_143f4c880;
    plVar8[4] = 0;
    plVar8[2] = lVar3;
    lVar3 = plVar8[4];
    piVar1 = (int *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_14048ad90(plVar8,0,0xff,1);
    if (lVar3 == 0) {
      return;
    }
    LOCK();
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  else {
    if (param_2 != 1) {
      return;
    }
    pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar5 = TlsGetValue(*pDVar4);
    plVar8 = (longlong *)0x0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        plVar8 = plVar5;
      }
      TlsSetValue(*pDVar4,plVar8);
      plVar5 = plVar8;
    }
    plVar8 = (longlong *)plVar5[1];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)*plVar5;
      if (plVar8 == (longlong *)0x0) {
        lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar4 + 2);
        plVar5[1] = lVar6;
        if (lVar6 == 0) {
          puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar5[1] = (longlong)puVar7;
          lVar6 = 0x1f;
          do {
            puVar2 = puVar7 + 0x20;
            *puVar7 = puVar2;
            lVar6 = lVar6 + -1;
            puVar7 = puVar2;
          } while (lVar6 != 0);
          *puVar2 = 0;
        }
        plVar8 = (longlong *)plVar5[1];
        iVar9 = 0x20;
        *(undefined4 *)(plVar5 + 2) = 0x20;
      }
      else {
        iVar9 = 0x20;
        plVar5[1] = (longlong)plVar8;
        *(undefined4 *)(plVar5 + 2) = 0x20;
        *plVar5 = 0;
      }
    }
    else {
      iVar9 = (int)plVar5[2];
    }
    plVar5[1] = *plVar8;
    *(int *)(plVar5 + 2) = iVar9 + -1;
    *plVar8 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar8 + 1) = 0xff;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *(undefined1 *)(plVar8 + 4) = 0;
    *plVar8 = (longlong)&PTR_FUN_143f4c890;
    plVar8[5] = 0;
    plVar8[2] = lVar3;
    *(undefined4 *)(plVar8 + 3) = param_3;
    lVar3 = plVar8[5];
    piVar1 = (int *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_14048ab20(plVar8,0,0xff,1);
    if (lVar3 == 0) {
      return;
    }
    LOCK();
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar9 == 1) {
    FGraphEvent::Recycle(lVar3);
  }
  return;
}



// FUNCTION 14047ea60 FUN_14047ea60 body=574 status=ok
// SIG undefined FUN_14047ea60(void)

void FUN_14047ea60(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  uint uVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong local_res8;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  plVar11 = (longlong *)0x0;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
    local_res8 = param_1;
    FUN_140466dc0(&local_res8,2,local_res18);
  }
  else {
    pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar8 = TlsGetValue(*pDVar7);
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)operator_new(0x18);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = 0;
        plVar8[1] = 0;
        *(undefined4 *)(plVar8 + 2) = 0;
        plVar11 = plVar8;
      }
      TlsSetValue(*pDVar7,plVar11);
      plVar8 = plVar11;
    }
    plVar11 = (longlong *)plVar8[1];
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)*plVar8;
      if (plVar11 == (longlong *)0x0) {
        lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
        plVar8[1] = lVar9;
        if (lVar9 == 0) {
          puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar8[1] = (longlong)puVar10;
          lVar9 = 0x1f;
          do {
            puVar2 = puVar10 + 0x20;
            *puVar10 = puVar2;
            lVar9 = lVar9 + -1;
            puVar10 = puVar2;
          } while (lVar9 != 0);
          *puVar2 = 0;
        }
        plVar11 = (longlong *)plVar8[1];
        iVar12 = 0x20;
        *(undefined4 *)(plVar8 + 2) = 0x20;
      }
      else {
        iVar12 = 0x20;
        plVar8[1] = (longlong)plVar11;
        *(undefined4 *)(plVar8 + 2) = 0x20;
        *plVar8 = 0;
      }
    }
    else {
      iVar12 = (int)plVar8[2];
    }
    plVar8[1] = *plVar11;
    *(int *)(plVar8 + 2) = iVar12 + -1;
    *plVar11 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar11 + 1) = 0xff;
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_143f4c950;
    *(undefined1 *)(plVar11 + 3) = 0;
    plVar11[4] = 0;
    plVar11[2] = param_1;
    lVar9 = plVar11[4];
    piVar1 = (int *)(lVar9 + 0x48);
    if (lVar9 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res10 = lVar9;
    FUN_140445100(plVar11,0,0xff,1,0);
    if (lVar9 != 0) {
      LOCK();
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        FGraphEvent::Recycle(local_res10);
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),1);
  lVar9 = *(longlong *)(param_1 + 0x138);
  if (lVar9 != 0) {
    uVar6 = *(int *)(lVar9 + 0xa0) - 1U & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    lVar14 = (longlong)(int)uVar6 * 0x10 + lVar9;
    lVar13 = *(longlong *)(lVar14 + 0x78);
    lVar3 = lVar13 + (longlong)*(int *)(lVar14 + 0x80) * 0x18;
    for (; lVar13 != lVar3; lVar13 = lVar13 + 0x18) {
      FUN_14047f880(lVar9,lVar13);
    }
    *(undefined4 *)(lVar14 + 0x80) = 0;
    if (*(int *)(lVar14 + 0x84) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (lVar14 + 0x78,0);
    }
  }
  return;
}



// FUNCTION 14047eca0 FUN_14047eca0 body=134 status=ok
// SIG undefined FUN_14047eca0(void)

void FUN_14047eca0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar2 = param_1 + 0x68;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      do {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x28);
        if (*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x28) == param_2) {
          if (iVar1 != -1) goto LAB_14047ed03;
          break;
        }
        iVar1 = *(int *)(puVar4 + 4);
      } while (iVar1 != -1);
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_14047ed03:
  puVar3 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  *(undefined1 *)((longlong)puVar3 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014047ed1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*puVar3 + 0x560))();
  return;
}



// FUNCTION 14047ed30 FUN_14047ed30 body=194 status=ok
// SIG undefined FUN_14047ed30(void)

void FUN_14047ed30(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar2 = param_1 + 0x68;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)param_2) * 4);
    if (iVar1 != -1) {
      do {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x28);
        if (*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x28) == param_2) {
          if (iVar1 != -1) goto LAB_14047eda3;
          break;
        }
        iVar1 = *(int *)(puVar3 + 4);
      } while (iVar1 != -1);
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_14047eda3:
  puVar4 = puVar3 + 1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    iVar1 = USoundWaveProcedural::GetAvailableAudioByteCount(puVar4[1]);
    if (*(float *)(puVar4 + 2) <= (float)iVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014047eddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*puVar4 + 0x558))((longlong *)*puVar4,0);
      return;
    }
    *(undefined1 *)((longlong)puVar4 + 0x14) = 1;
  }
  return;
}



// FUNCTION 14047ee20 FUN_14047ee20 body=27 status=ok
// SIG undefined FUN_14047ee20(void)

void FUN_14047ee20(undefined8 param_1)

{
  FUN_1417931d0();
  FUN_1404606d0(param_1);
  return;
}



// FUNCTION 14047ee40 FUN_14047ee40 body=414 status=ok
// SIG undefined FUN_14047ee40(void)

void FUN_14047ee40(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  
  FUN_1424feef0();
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)FUN_140485f80;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
  }
  uVar5 = 0;
  uVar6 = uVar5;
  if (plVar2 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464aef80,1);
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_1464aef88;
    lVar3 = (longlong)DAT_1464aef88;
    uVar6 = *puVar4;
    DAT_1464aef88 = DAT_1464aef88 + 1;
    if (DAT_1464aef8c < DAT_1464aef88) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464aef80,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1464aef80);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x618) = uVar6;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f4d200;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)&LAB_14047e360;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f4d248;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465351a8,1);
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_1465351b0;
    lVar3 = (longlong)DAT_1465351b0;
    uVar5 = *puVar4;
    DAT_1465351b0 = DAT_1465351b0 + 1;
    if (DAT_1465351b4 < DAT_1465351b0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465351a8,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1465351a8);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x610) = uVar5;
  FUN_140485f80(param_1);
  return;
}



// FUNCTION 14047efe0 FUN_14047efe0 body=215 status=ok
// SIG undefined FUN_14047efe0(void)

void FUN_14047efe0(undefined8 param_1,longlong param_2)

{
  short sVar1;
  short sVar2;
  undefined2 *puVar3;
  short *psVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 local_res10;
  undefined2 *local_28;
  undefined8 local_20;
  short *local_18;
  int local_10;
  
  local_20 = 0x11;
  local_28 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  puVar3 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"ProtocolPathDefs",0x22);
  local_res10 = *(undefined8 *)(param_2 + 0x18);
  FName::ToString(&local_res10,&local_18);
  puVar5 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar5 = puVar3;
  }
  psVar4 = &DAT_143f3eda8;
  if (local_10 != 0) {
    psVar4 = local_18;
  }
  lVar6 = (longlong)puVar5 - (longlong)psVar4;
  do {
    sVar1 = *psVar4;
    sVar2 = *(short *)((longlong)psVar4 + lVar6);
    if (sVar1 != sVar2) break;
    psVar4 = psVar4 + 1;
  } while (sVar2 != 0);
  if (local_18 != (short *)0x0) {
    FMemory::Free();
  }
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  if (sVar1 == sVar2) {
    FUN_1404606d0(param_1);
  }
  return;
}



// FUNCTION 14047f0c0 FUN_14047f0c0 body=210 status=ok
// SIG undefined FUN_14047f0c0(void)

void FUN_14047f0c0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142239650();
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  iVar4 = FUN_1428cf800(uVar5);
  if (iVar4 != 1) {
    plVar6 = (longlong *)FUN_1404644d0(local_18);
    plVar2 = param_1 + 0x8b;
    if (plVar2 != plVar6) {
      *plVar2 = *plVar6;
      *plVar6 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x8c,plVar6 + 1);
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)local_10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    if (*plVar2 != 0) {
      FUN_140464f40(*plVar2,param_1 + 0x8d);
      return;
    }
  }
  return;
}



// FUNCTION 14047f1d0 FUN_14047f1d0 body=1596 status=ok
// SIG undefined FUN_14047f1d0(void)

void FUN_14047f1d0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  undefined2 *puVar17;
  longlong lVar18;
  ulonglong local_res8;
  int local_res10 [2];
  undefined4 local_res18;
  undefined1 local_res20 [8];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 *local_e8;
  longlong **local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong local_c0;
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
  undefined1 local_68 [40];
  
  plVar1 = (longlong *)(param_1 + 8);
  local_res18 = param_3;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res10,param_2);
  if (((local_res10[0] != -1) && (lVar18 = (longlong)local_res10[0] * 0x38 + *plVar1, lVar18 != 0))
     && ((undefined8 *)(lVar18 + 0x10) != (undefined8 *)0x0)) {
    FUN_1404881e0(param_1,*(undefined8 *)(lVar18 + 0x10),param_2);
    lVar10 = DAT_146850540;
    uVar5 = *(undefined8 *)(lVar18 + 0x28);
    if ((*(int *)(lVar18 + 0x18) != *(int *)(param_2 + 3)) && (DAT_146850540 != 0)) {
      lVar14 = 0;
      iVar4 = *(int *)(*(longlong *)(lVar18 + 0x20) + 0xc);
      lVar15 = lVar14;
      if (iVar4 < (int)DAT_1469e91c4) {
        uVar16 = iVar4 >> 0x1f & 0xffff;
        uVar9 = iVar4 + uVar16;
        lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                 (longlong)(int)((uVar9 & 0xffff) - uVar16) * 0x18;
      }
      *(uint *)(lVar15 + 8) = *(uint *)(lVar15 + 8) & 0xbfffffff;
      *(undefined8 *)(lVar18 + 0x20) = 0;
      local_108 = *(longlong *)(lVar10 + 0x468);
      plVar1 = *(longlong **)(lVar10 + 0x470);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
        UNLOCK();
      }
      local_100 = plVar1;
      lVar10 = FUN_1404652a0(param_1,param_2,*(undefined8 *)(local_108 + 8),param_3);
      *(longlong *)(lVar18 + 0x20) = lVar10;
      iVar4 = *(int *)(lVar10 + 0xc);
      if (iVar4 < (int)DAT_1469e91c4) {
        uVar16 = iVar4 >> 0x1f & 0xffff;
        uVar9 = iVar4 + uVar16;
        lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                 (longlong)(int)((uVar9 & 0xffff) - uVar16) * 0x18;
      }
      *(uint *)(lVar14 + 8) = *(uint *)(lVar14 + 8) | 0x40000000;
      uVar13 = *(undefined8 *)(lVar18 + 0x20);
      puVar11 = (undefined8 *)FName::FName(local_b8,L"MyCustomTextureParam",1);
      FUN_1425a28b0(uVar5,*puVar11,uVar13);
      plVar12 = local_100;
      *(undefined4 *)(lVar18 + 0x18) = *(undefined4 *)(param_2 + 3);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar1 + 1;
        lVar18 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
          }
        }
      }
    }
    uVar3 = *(undefined4 *)(param_2 + 10);
    puVar11 = (undefined8 *)FName::FName(local_b0,L"UVScaleX",1);
    FUN_1425a2750(uVar5,*puVar11,uVar3);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x54);
    puVar11 = (undefined8 *)FName::FName(local_a8,L"UVScaleY",1);
    FUN_1425a2750(uVar5,*puVar11,uVar3);
    uVar3 = *(undefined4 *)(param_2 + 0xb);
    puVar11 = (undefined8 *)FName::FName(local_a0,L"UVOffsetX",1);
    FUN_1425a2750(uVar5,*puVar11,uVar3);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x5c);
    puVar11 = (undefined8 *)FName::FName(local_98,L"UVOffsetY",1);
    FUN_1425a2750(uVar5,*puVar11,uVar3);
    return;
  }
  lVar18 = *(longlong *)(param_2[2] + 0x168);
  if (lVar18 == 0) {
    return;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*param_2;
  }
  uVar5 = *(undefined8 *)(lVar18 + 0x118);
  plVar12 = (longlong *)FName::FName(local_90,puVar17,1);
  lVar10 = 0;
  local_res8 = 0;
  lVar14 = *plVar12;
  if (lVar14 == 0) {
    FUN_1417846f0(uVar5,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar13 = FUN_142a232e0();
  plVar12 = (longlong *)FUN_1417985e0(uVar13,uVar5,lVar14,0,0,0,0,0,0);
  local_138 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_142382f60(plVar12,lVar18,&local_res8,0);
  FUN_14234b150(plVar12);
  local_148 = 0;
  local_140 = 0x2c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
  uVar5 = local_148;
  FGenericPlatformString::Memcpy(local_148,L"StaticMesh\'/Engine/BasicShapes/Plane.Plane\'",0x58);
  local_f0 = (undefined4)local_140;
  local_ec = local_140._4_4_;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_f8 = uVar5;
  FUN_1417978e0(&local_120,&local_f8);
  lVar18 = FSoftObjectPath::TryLoad(&local_120);
  if (lVar18 != 0) {
    lVar14 = UNodeMappingContainer::StaticClass();
    if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_14047f596;
  }
  lVar18 = lVar10;
LAB_14047f596:
  (**(code **)(*plVar12 + 0x928))(plVar12,lVar18);
  if (local_118 != 0) {
    FMemory::Free();
  }
  FUN_1404881e0(param_1,plVar12,param_2);
  lVar18 = 0;
  if (DAT_146850540 == 0) {
    lVar14 = 0;
  }
  else {
    local_130 = *(longlong *)(DAT_146850540 + 0x468);
    plVar6 = *(longlong **)(DAT_146850540 + 0x470);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_128 = plVar6;
    lVar18 = FUN_1404652a0(param_1,param_2,*(undefined8 *)(local_130 + 8),local_res18);
    lVar14 = UMaterialInstanceDynamic::Create(*(undefined8 *)(param_1 + 0x98),0);
    puVar11 = (undefined8 *)FName::FName(local_88,L"MyCustomTextureParam",1);
    FUN_1425a28b0(lVar14,*puVar11,lVar18);
    uVar3 = *(undefined4 *)(param_2 + 10);
    puVar11 = (undefined8 *)FName::FName(local_80,L"UVScaleX",1);
    FUN_1425a2750(lVar14,*puVar11,uVar3);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x54);
    puVar11 = (undefined8 *)FName::FName(local_78,L"UVScaleY",1);
    FUN_1425a2750(lVar14,*puVar11,uVar3);
    uVar3 = *(undefined4 *)(param_2 + 0xb);
    puVar11 = (undefined8 *)FName::FName(local_70,L"UVOffsetX",1);
    FUN_1425a2750(lVar14,*puVar11,uVar3);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x5c);
    puVar11 = (undefined8 *)FName::FName(local_68,L"UVOffsetY",1);
    FUN_1425a2750(lVar14,*puVar11,uVar3);
    (**(code **)(*plVar12 + 0x568))(plVar12,0,lVar14);
    plVar8 = local_128;
    iVar4 = *(int *)(lVar14 + 0xc);
    lVar15 = lVar10;
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar16 = iVar4 >> 0x1f & 0xffff;
      uVar9 = iVar4 + uVar16;
      lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
               (longlong)(int)((uVar9 & 0xffff) - uVar16) * 0x18;
    }
    *(uint *)(lVar15 + 8) = *(uint *)(lVar15 + 8) | 0x40000000;
    iVar4 = *(int *)(lVar18 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar16 = iVar4 >> 0x1f & 0xffff;
      uVar9 = iVar4 + uVar16;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
               (longlong)(int)((uVar9 & 0xffff) - uVar16) * 0x18;
    }
    *(uint *)(lVar10 + 8) = *(uint *)(lVar10 + 8) | 0x40000000;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar6 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
  }
  local_d0 = *(undefined4 *)(param_2 + 3);
  local_e0 = &local_d8;
  local_e8 = param_2;
  local_d8 = plVar12;
  local_c8 = lVar18;
  local_c0 = lVar14;
  FUN_14044d780(plVar1,local_res20,&local_e8,0);
  return;
}



// FUNCTION 14047f810 FUN_14047f810 body=107 status=ok
// SIG undefined FUN_14047f810(void)

void FUN_14047f810(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_28 [32];
  
  FUN_140474250(local_28);
  param_1 = param_1 + 0x388;
  cVar2 = FUN_14044af00(param_1,0);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1);
    if (*(longlong *)(*(longlong *)(lVar3 + 0x200) + 8) != 0) {
      lVar3 = FWeakObjectPtr::Get(param_1);
      plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x200) + 8);
      (**(code **)(*plVar1 + 0xc0))(plVar1,local_28,0,0);
    }
  }
  return;
}



// FUNCTION 14047f880 FUN_14047f880 body=699 status=ok
// SIG undefined FUN_14047f880(void)

void FUN_14047f880(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  DWORD DVar8;
  longlong lVar9;
  DWORD *pDVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  LARGE_INTEGER local_68;
  longlong local_60;
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  undefined8 local_20;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
    local_48 = *param_2;
    lStack_40 = param_2[1];
    local_28 = param_2[2];
    local_38 = local_48;
    lStack_30 = lStack_40;
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_68);
    SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(local_res18,local_48);
    lVar9 = FUN_1404a1310(local_res18,local_28 & 0xffffffff);
    if (lVar9 != 0) {
      FTexture2DDynamicResource::GetTexture2DRHI(lVar9,&local_res20);
      FUN_141ed8ff0(&DAT_146ab6e78,*(undefined8 *)(lStack_30 + 0x98),local_res20);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res20);
      AK::MemoryMgr::StartProfileThreadUsage((long)local_res18);
      QueryPerformanceCounter(&local_50);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_50.s.LowPart - local_68._0_4_);
      return;
    }
    AK::MemoryMgr::StartProfileThreadUsage((long)local_res18);
    QueryPerformanceCounter(&local_58);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_58.s.LowPart - local_68._0_4_);
    return;
  }
  pDVar10 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar11 = TlsGetValue(*pDVar10);
  plVar12 = (longlong *)0x0;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)operator_new(0x18);
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = 0;
      plVar11[1] = 0;
      *(undefined4 *)(plVar11 + 2) = 0;
      plVar12 = plVar11;
    }
    TlsSetValue(*pDVar10,plVar12);
    plVar11 = plVar12;
  }
  plVar12 = (longlong *)plVar11[1];
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)*plVar11;
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar10 + 2);
      plVar11[1] = (longlong)plVar12;
      if (plVar12 == (longlong *)0x0) {
        puVar13 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar11[1] = (longlong)puVar13;
        lVar9 = 0x1f;
        do {
          puVar2 = puVar13 + 0x20;
          *puVar13 = puVar2;
          lVar9 = lVar9 + -1;
          puVar13 = puVar2;
        } while (lVar9 != 0);
        *puVar2 = 0;
        plVar12 = (longlong *)plVar11[1];
      }
      iVar14 = 0x20;
      *(undefined4 *)(plVar11 + 2) = 0x20;
    }
    else {
      iVar14 = 0x20;
      plVar11[1] = (longlong)plVar12;
      *(undefined4 *)(plVar11 + 2) = 0x20;
      *plVar11 = 0;
    }
  }
  else {
    iVar14 = (int)plVar11[2];
  }
  plVar11[1] = *plVar12;
  *(int *)(plVar11 + 2) = iVar14 + -1;
  *plVar12 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar12 + 1) = 0xff;
  local_20 = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
  *(undefined1 *)(plVar12 + 5) = 0;
  *plVar12 = (longlong)&PTR_FUN_143f4ced8;
  plVar12[6] = 0;
  uVar3 = *(undefined4 *)param_2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(plVar12 + 2) = uVar3;
  *(undefined4 *)((longlong)plVar12 + 0x14) = uVar4;
  *(undefined4 *)(plVar12 + 3) = uVar5;
  *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar6;
  plVar12[4] = param_2[2];
  lVar9 = plVar12[6];
  piVar1 = (int *)(lVar9 + 0x48);
  if (lVar9 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_60 = lVar9;
  FUN_14048a160(uVar3,0,0xff,1);
  if (lVar9 != 0) {
    LOCK();
    iVar14 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      FGraphEvent::Recycle(local_60);
    }
  }
  return;
}



// FUNCTION 14047fb40 FUN_14047fb40 body=669 status=ok
// SIG undefined FUN_14047fb40(void)

void FUN_14047fb40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  DWORD DVar7;
  BOOL BVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((DAT_1469e7e10 == '\0') &&
     ((((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 == '\0' && (DAT_1468c21ae != '\0')) &&
       (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) ||
      (cVar6 = IsGarbageCollecting(), cVar6 == '\0')))) {
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
    }
    plVar13 = *(longlong **)(param_1 + 0x28);
    plVar3 = plVar13 + *(int *)(param_1 + 0x30);
    lVar10 = uStack_40;
    for (; plVar13 != plVar3; plVar13 = plVar13 + 1) {
      uStack_40 = *plVar13;
      if (*(longlong *)(uStack_40 + 0x40) == 0) {
        local_48 = param_1;
        plVar9 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_GetPoolName_143f4cf68;
          *(undefined4 *)(plVar9 + 1) = (undefined4)local_48;
          *(undefined4 *)((longlong)plVar9 + 0xc) = local_48._4_4_;
          *(undefined4 *)(plVar9 + 2) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)plVar9 + 0x14) = uStack_40._4_4_;
          lVar10 = FDelegateHandle::GenerateNewID();
          plVar9[4] = lVar10;
          *plVar9 = (longlong)&PTR_GetPoolName_143f4cfb0;
        }
        local_68 = 0;
        local_60 = 0x20;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        FGenericPlatformString::Memcpy(local_68,L"RequestAsyncLoad SingleDelegate",0x40);
        local_58 = 0;
        local_50 = 0;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x30))(plVar9,&local_58);
        }
        lVar10 = *plVar13;
        puVar11 = (undefined8 *)
                  FStreamableManager::RequestAsyncLoad
                            (param_1 + 0x38,local_38,lVar10,&local_58,0,0,0,&local_68);
        if ((undefined8 *)(lVar10 + 0x40) != puVar11) {
          *(undefined8 *)(lVar10 + 0x40) = *puVar11;
          *puVar11 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(lVar10 + 0x48,puVar11 + 1);
        }
        plVar5 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_30)(local_30);
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
        if (local_68 != 0) {
          FMemory::Free();
        }
        lVar10 = uStack_40;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          lVar12 = FMemory::Realloc(plVar9,0);
          lVar10 = uStack_40;
          if (lVar12 != 0) {
            FMemory::Free();
            lVar10 = uStack_40;
          }
        }
      }
      uStack_40 = lVar10;
      lVar10 = uStack_40;
    }
    uStack_40 = lVar10;
                    /* WARNING: Could not recover jumptable at 0x00014047fdc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
    return;
  }
  FUN_140486790(param_1);
  return;
}



// FUNCTION 14047fe00 FUN_14047fe00 body=37 status=ok
// SIG undefined FUN_14047fe00(void)

uint FUN_14047fe00(longlong param_1,uint param_2,void *param_3,uint param_4)

{
  _guard_xfg_dispatch_icall_nop
            (param_3,(void *)((ulonglong)param_2 + *(longlong *)(param_1 + 8)),(ulonglong)param_4);
  return param_4;
}



// FUNCTION 14047fe30 FUN_14047fe30 body=122 status=ok
// SIG undefined FUN_14047fe30(void)

uint FUN_14047fe30(undefined8 param_1,int param_2,longlong param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_14046df90();
  if ((((plVar4 == (longlong *)0x0) || (param_3 == 0)) ||
      (cVar1 = (**(code **)(*plVar4 + 0x10))(plVar4,param_2), cVar1 == '\0')) ||
     (cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,param_3,param_4), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    iVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
    uVar3 = iVar2 - param_2;
    if (param_4 <= (uint)(iVar2 - param_2)) {
      uVar3 = param_4;
    }
  }
  return uVar3;
}



// FUNCTION 14047feb0 FUN_14047feb0 body=382 status=ok
// SIG undefined FUN_14047feb0(void)

longlong FUN_14047feb0(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong local_48;
  longlong *local_40;
  int local_38;
  
  cVar3 = (**(code **)(*param_2 + 0x218))(param_2);
  if (cVar3 == '\0') {
    return param_3;
  }
  plVar7 = *(longlong **)(param_1 + 0x18);
  if (plVar7 != (longlong *)0x0) {
    lVar4 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14047ff30;
  }
  plVar7 = (longlong *)0x0;
LAB_14047ff30:
  if ((*(uint *)(plVar7 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar7 + 0x330))(plVar7,*(int *)((longlong)plVar7 + 0x44) + param_3);
  }
  else {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(int *)((longlong)plVar7 + 0x44) + param_3),0,
               (longlong)(*(int *)((longlong)plVar7 + 0x34) * (int)plVar7[6]));
  }
  local_48 = plVar7[0xe];
  plVar7 = (longlong *)(*(int *)((longlong)plVar7 + 0x44) + param_3);
  iVar1 = *(int *)(local_48 + 0x34);
  local_40 = plVar7;
  local_38 = iVar1;
  uVar5 = (**(code **)(*param_2 + 0x220))(param_2);
  if (uVar5 != 0) {
    FUN_1404845d0(&local_48,uVar5 & 0xffffffff);
  }
  uVar8 = 0;
  if (uVar5 != 0) {
    uVar6 = 0;
    iVar9 = 0;
    do {
      (**(code **)(*param_2 + 0x228))(param_2,uVar6);
      if ((int)plVar7[1] == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (longlong)iVar9 + *plVar7;
      }
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                (*(longlong **)(param_1 + 0x30),param_2,lVar4);
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + iVar1;
      uVar6 = (ulonglong)uVar8;
    } while (uVar6 < uVar5);
  }
  (**(code **)(*param_2 + 0x230))(param_2);
  return param_3;
}



// FUNCTION 140480030 FUN_140480030 body=77 status=ok
// SIG undefined FUN_140480030(void)

undefined8 FUN_140480030(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_140480500(param_1,param_2,param_3);
  }
  return param_3;
}



// FUNCTION 140480080 FUN_140480080 body=637 status=ok
// SIG undefined FUN_140480080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140480080(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  void *_Dst;
  undefined2 *puVar8;
  undefined8 uVar9;
  size_t _Size;
  undefined1 auStack_228 [32];
  longlong local_208;
  void **local_200;
  longlong *local_1f8;
  undefined2 *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  void *local_1c0;
  ulonglong local_1b8;
  undefined2 *local_1b0;
  int local_1a8;
  undefined1 local_198 [128];
  longlong local_118;
  undefined8 local_110;
  undefined1 local_f8 [128];
  longlong local_78;
  undefined8 local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_1d0 = 0;
      local_1d8 = 0;
      cVar5 = FUN_1404724e0(param_1,&local_1d0,&local_1d8,param_2);
      lVar3 = local_1d0;
      local_1f8 = &local_1c8;
      local_200 = &local_1c0;
      local_1c0 = (void *)0x0;
      local_208 = CONCAT71(local_208._1_7_,cVar5);
      local_1b8 = 0;
      local_1c8 = 0;
      cVar6 = FUN_14048e7d0(param_1,param_4,local_1d0,local_1d8);
      uVar4 = local_1b8;
      _Src = local_1c0;
      lVar2 = *param_3;
      if (cVar6 == '\0') {
        (**(code **)(lVar2 + 0x38))(param_3,1);
      }
      else {
        _Size = (size_t)(int)local_1b8;
        if (cVar5 == '\0') {
          (**(code **)(lVar2 + 0x20))(param_3,200);
        }
        else {
          (**(code **)(lVar2 + 0x30))(param_3,"Accept-Ranges","bytes");
          lVar2 = local_1c8;
          local_208 = local_1c8;
          FString::PrintfImpl(&local_1b0,L"bytes %d-%d/%d",lVar3,lVar3 + -1 + _Size);
          puVar8 = &DAT_143f3eda8;
          if (local_1a8 != 0) {
            puVar8 = local_1b0;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,puVar8);
          (**(code **)(*param_3 + 0x30))(param_3,"Content-Range",local_110);
          if (local_118 != 0) {
            FMemory::Free();
          }
          local_1e8 = (undefined2 *)0x0;
          local_1e0 = 0;
          FString::AppendInt(&local_1e8,uVar4 & 0xffffffff);
          puVar8 = &DAT_143f3eda8;
          if ((int)local_1e0 != 0) {
            puVar8 = local_1e8;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_f8,puVar8);
          (**(code **)(*param_3 + 0x30))(param_3,"Content-Length",local_70);
          if (local_78 != 0) {
            FMemory::Free();
          }
          uVar9 = 0x1a0;
          if (lVar3 < lVar2) {
            uVar9 = 0xce;
          }
          (**(code **)(*param_3 + 0x20))(param_3,uVar9);
          if (local_1e8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_1b0 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        _Dst = (void *)(**(code **)(*param_3 + 8))(param_3,_Size);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
        (**(code **)(*param_3 + 0x38))(param_3,0);
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
  return;
}



// FUNCTION 140480300 FUN_140480300 body=344 status=ok
// SIG undefined FUN_140480300(void)

longlong FUN_140480300(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong local_48;
  longlong *local_40;
  int local_38;
  
  plVar6 = *(longlong **)(param_1 + 0x18);
  if (plVar6 != (longlong *)0x0) {
    lVar3 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140480361;
  }
  plVar6 = (longlong *)0x0;
LAB_140480361:
  if ((*(uint *)(plVar6 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar6 + 0x330))(plVar6,*(int *)((longlong)plVar6 + 0x44) + param_3);
  }
  else {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(int *)((longlong)plVar6 + 0x44) + param_3),0,
               (longlong)(*(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6]));
  }
  local_48 = plVar6[0xe];
  plVar6 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_3);
  iVar1 = *(int *)(local_48 + 0x34);
  local_40 = plVar6;
  local_38 = iVar1;
  uVar4 = (**(code **)(*param_2 + 0x220))(param_2);
  if (uVar4 != 0) {
    FUN_1404845d0(&local_48,uVar4 & 0xffffffff);
  }
  uVar7 = 0;
  if (uVar4 != 0) {
    uVar5 = 0;
    iVar8 = 0;
    do {
      (**(code **)(*param_2 + 0x228))(param_2,uVar5);
      if ((int)plVar6[1] == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)iVar8 + *plVar6;
      }
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                (*(longlong **)(param_1 + 0x30),param_2,lVar3);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + iVar1;
      uVar5 = (ulonglong)uVar7;
    } while (uVar5 < uVar4);
  }
  (**(code **)(*param_2 + 0x230))(param_2);
  return param_3;
}



// FUNCTION 140480460 FUN_140480460 body=157 status=ok
// SIG undefined FUN_140480460(void)

longlong FUN_140480460(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UEnumProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1404804b7;
  }
  lVar3 = 0;
LAB_1404804b7:
  local_res8 = 0;
  (**(code **)(*param_2 + 0x1e8))(param_2,&local_res8);
  (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x388))
            (*(longlong **)(lVar3 + 0x70),*(int *)(lVar3 + 0x44) + param_3,local_res8);
  return param_3;
}



// FUNCTION 140480500 FUN_140480500 body=551 status=ok
// SIG undefined FUN_140480500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140480500(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  plVar7 = *(longlong **)(param_1 + 0x18);
  if (plVar7 != (longlong *)0x0) {
    lVar5 = UMapProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14048056d;
  }
  plVar7 = (longlong *)0x0;
LAB_14048056d:
  plVar1 = (longlong *)plVar7[0xe];
  plVar2 = (longlong *)plVar7[0xf];
  if ((*(uint *)(plVar7 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar7 + 0x330))(plVar7,*(int *)((longlong)plVar7 + 0x44) + param_3);
  }
  else {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(int *)((longlong)plVar7 + 0x44) + param_3),0,
               (longlong)(*(int *)((longlong)plVar7 + 0x34) * (int)plVar7[6]));
  }
  local_88 = plVar7[0xe];
  local_78 = (longlong *)(*(int *)((longlong)plVar7 + 0x44) + param_3);
  local_80 = plVar7[0xf];
  local_70 = (undefined4)plVar7[0x10];
  uStack_6c = *(undefined4 *)((longlong)plVar7 + 0x84);
  uStack_68 = (undefined4)plVar7[0x11];
  uStack_64 = *(undefined4 *)((longlong)plVar7 + 0x8c);
  local_60 = (undefined4)plVar7[0x12];
  uStack_5c = *(undefined4 *)((longlong)plVar7 + 0x94);
  uStack_58 = (undefined4)plVar7[0x13];
  uStack_54 = *(undefined4 *)((longlong)plVar7 + 0x9c);
  local_50 = (int)plVar7[0x14];
  uVar6 = (**(code **)(*param_2 + 0x238))(param_2);
  uVar8 = 0;
  if (uVar6 != 0) {
    do {
      iVar4 = FScriptMap::AddUninitialized(local_78,&local_70);
      if ((int)local_78[1] == *(int *)((longlong)local_78 + 0x34)) {
        lVar5 = 0;
      }
      else {
        lVar5 = (longlong)(local_50 * iVar4) + *local_78;
      }
      (**(code **)(*param_2 + 0x240))(param_2);
      if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
        (**(code **)(*plVar1 + 0x330))(plVar1);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(int *)((longlong)plVar1 + 0x44) + lVar5),0,
                   (longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
      }
      if ((*(uint *)(plVar2 + 7) >> 9 & 1) == 0) {
        (**(code **)(*plVar2 + 0x330))(plVar2,*(int *)((longlong)plVar2 + 0x44) + lVar5);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(int *)((longlong)plVar2 + 0x44) + lVar5),0,
                   (longlong)(*(int *)((longlong)plVar2 + 0x34) * (int)plVar2[6]));
      }
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                (*(longlong **)(param_1 + 0x30),param_2,lVar5);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))
                (*(longlong **)(param_1 + 0x38),param_2,lVar5);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  (**(code **)(*param_2 + 0x248))(param_2);
  FScriptMapHelper::Rehash(&local_88);
  return param_3;
}



// FUNCTION 140480730 FUN_140480730 body=322 status=ok
// SIG undefined FUN_140480730(void)

longlong FUN_140480730(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_res8;
  longlong local_18 [2];
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 != 0) {
    lVar4 = UObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14048078b;
  }
  lVar6 = 0;
LAB_14048078b:
  lVar4 = *(longlong *)(lVar6 + 0x70);
  lVar6 = *(longlong *)(*(int *)(lVar6 + 0x44) + param_3);
  if (lVar6 != 0) {
    iVar3 = (**(code **)(*param_2 + 0x250))(param_2);
    if (iVar3 == 0) {
      (**(code **)(*param_2 + 0x180))();
    }
    else {
      iVar3 = (**(code **)(*param_2 + 0x250))(param_2);
      if (iVar3 == 4) {
        (**(code **)(*param_2 + 0x38))(param_2);
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(&DAT_1461f6390,&local_res8,lVar4);
        if ((((int)local_res8 == -1) ||
            (lVar1 = DAT_1461f6390 + (longlong)(int)local_res8 * 0x18, lVar1 == 0)) ||
           (puVar5 = (undefined8 *)(lVar1 + 8), puVar5 == (undefined8 *)0x0)) {
          FUN_140481700(param_2,lVar6,lVar4);
        }
        else {
          (*(code *)*puVar5)(param_2,lVar6);
        }
        (**(code **)(*param_2 + 0x48))(param_2,lVar6);
      }
      else {
        local_res8 = *(undefined8 *)(lVar4 + 0x18);
        FName::ToString(&local_res8,local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return param_3;
}



// FUNCTION 140480880 FUN_140480880 body=229 status=ok
// SIG undefined FUN_140480880(void)

longlong FUN_140480880(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int local_res8 [2];
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 != 0) {
    lVar3 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1404808db;
  }
  lVar5 = 0;
LAB_1404808db:
  uVar1 = *(undefined8 *)(lVar5 + 0x70);
  lVar5 = *(int *)(lVar5 + 0x44) + param_3;
  if (lVar5 != 0) {
    (**(code **)(*param_2 + 0x38))(param_2);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1461f6340,local_res8,uVar1);
    if (((local_res8[0] == -1) ||
        (lVar3 = DAT_1461f6340 + (longlong)local_res8[0] * 0x18, lVar3 == 0)) ||
       (puVar4 = (undefined8 *)(lVar3 + 8), puVar4 == (undefined8 *)0x0)) {
      FUN_1404819f0(param_2,lVar5,uVar1);
    }
    else {
      (*(code *)*puVar4)(param_2,lVar5);
    }
    (**(code **)(*param_2 + 0x48))(param_2,lVar5);
  }
  return param_3;
}


