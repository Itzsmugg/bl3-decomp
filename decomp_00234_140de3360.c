// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140de3360 FUN_140de3360 body=73 status=ok
// SIG undefined FUN_140de3360(void)

longlong FUN_140de3360(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  FUN_140de01e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 140de33b0 FUN_140de33b0 body=161 status=ok
// SIG undefined FUN_140de33b0(void)

longlong FUN_140de33b0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x268);
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<UClass_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x218);
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  FUN_140de0de0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2b8);
  }
  return param_1;
}



// FUNCTION 140de3460 FUN_140de3460 body=85 status=ok
// SIG undefined FUN_140de3460(void)

longlong FUN_140de3460(longlong param_1,ulonglong param_2)

{
  FUN_140dde270(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FActorRepList::Release();
  }
  FUN_140de0f20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 140de34c0 FUN_140de34c0 body=135 status=ok
// SIG undefined FUN_140de34c0(void)

longlong FUN_140de34c0(longlong param_1,ulonglong param_2)

{
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
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 140de3550 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FLightVPLsCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140de0310();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 140de3590 FUN_140de3590 body=52 status=ok
// SIG undefined FUN_140de3590(void)

undefined8 FUN_140de3590(undefined8 param_1,ulonglong param_2)

{
  FUN_140de0470();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c0);
  }
  return param_1;
}



// FUNCTION 140de35d0 FUN_140de35d0 body=52 status=ok
// SIG undefined FUN_140de35d0(void)

undefined8 FUN_140de35d0(undefined8 param_1,ulonglong param_2)

{
  FUN_140de0830();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a0);
  }
  return param_1;
}



// FUNCTION 140de3610 FUN_140de3610 body=52 status=ok
// SIG undefined FUN_140de3610(void)

undefined8 FUN_140de3610(undefined8 param_1,ulonglong param_2)

{
  FUN_140de0830();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x298);
  }
  return param_1;
}



// FUNCTION 140de3650 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AARSharedWorldPlayerController::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140de09b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x578);
  }
  return param_1;
}



// FUNCTION 140de3690 FUN_140de3690 body=301 status=ok
// SIG undefined FUN_140de3690(void)

longlong FUN_140de3690(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x328);
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
  plVar4 = *(longlong **)(param_1 + 0x310);
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
  plVar4 = *(longlong **)(param_1 + 0x2f8);
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
  FUN_140ddefe0(param_1 + 0x290);
  FUN_140dde1c0(param_1 + 0x280);
  FUN_1406d8b70(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  FUN_140de0310(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x358);
  }
  return param_1;
}



// FUNCTION 140de37c0 FUN_140de37c0 body=222 status=ok
// SIG undefined FUN_140de37c0(void)

longlong FUN_140de37c0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_140ddee60(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x128,0);
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 200);
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
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 140de38a0 `scalar_deleting_destructor' body=184 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USBZTutorialPopUpDataAsset::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 140de3960 FUN_140de3960 body=107 status=ok
// SIG undefined FUN_140de3960(void)

void FUN_140de3960(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *local_res10;
  
  if (param_2 != (longlong *)0x0) {
    local_res10 = param_2;
    (**(code **)(*param_2 + 0x2d0))(param_2);
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x78,&local_res10);
    iVar1 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar1 + 1;
    if (*(int *)(param_1 + 100) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 140de39d0 FUN_140de39d0 body=1042 status=ok
// SIG undefined FUN_140de39d0(void)

void FUN_140de39d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined8 local_res8;
  
  pwVar15 = (wchar_t *)0x0;
  pwVar14 = pwVar15;
  pwVar8 = pwVar15;
  if ((*(longlong **)(param_1 + 0x470) != (longlong *)0x0) &&
     (pwVar5 = (wchar_t *)(**(code **)(**(longlong **)(param_1 + 0x470) + 0x678))(),
     pwVar5 != (wchar_t *)0x0)) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(pwVar5 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar5 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar7 = FUN_142e0a580();
      pwVar8 = (wchar_t *)(**(code **)(*(longlong *)pwVar5 + 0x628))(pwVar5,uVar7);
      pwVar14 = pwVar5;
    }
  }
  if ((*(longlong *)(param_1 + 0x470) != 0) && (lVar6 = FUN_140cff230(), lVar6 != 0)) {
    plVar1 = (longlong *)(lVar6 + 0x4e8);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_14419ca48;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      plVar9[2] = (longlong)FUN_140dfe500;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar10;
      *plVar9 = (longlong)&PTR_FUN_14419ca90;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_res8);
      iVar2 = *(int *)(lVar6 + 0x4f0);
      *(int *)(lVar6 + 0x4f0) = iVar2 + 1;
      if (*(int *)(lVar6 + 0x4f4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar11 = plVar9;
      *(undefined4 *)(puVar11 + 1) = 3;
    }
  }
  if (pwVar14 != (wchar_t *)0x0) {
    pwVar5 = pwVar14 + 0x6d4;
    lVar6 = (**(code **)(*(longlong *)pwVar5 + 0x28))(pwVar5);
    if (lVar6 != 0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&AStreamingEventDispatcher::OnPlayerInjured",L"::");
      pwVar13 = pwVar15;
      while (pwVar4 = pwVar12, pwVar4 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar13 = pwVar4;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      uVar7 = (**(code **)(*(longlong *)pwVar5 + 0x28))(pwVar5);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                (uVar7,param_1,&LAB_140dffd30,local_res8);
    }
    lVar6 = (**(code **)(*(longlong *)pwVar5 + 0x30))(pwVar5);
    if (lVar6 != 0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&AStreamingEventDispatcher::OnPlayerDead",L"::");
      pwVar13 = pwVar15;
      while (pwVar4 = pwVar12, pwVar4 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar13 = pwVar4;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      uVar7 = (**(code **)(*(longlong *)pwVar5 + 0x30))(pwVar5);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                (uVar7,param_1,&LAB_140dffa60,local_res8);
    }
    pwVar13 = _guard_xfg_dispatch_icall_nop(L"&AStreamingEventDispatcher::OnVehicleEntered",L"::");
    pwVar5 = pwVar15;
    while (pwVar12 = pwVar13, pwVar12 != (wchar_t *)0x0) {
      pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar12 + 1,L"::");
      pwVar5 = pwVar12;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
              (pwVar14 + 0xecc,param_1,FUN_140e019f0,local_res8);
    pwVar13 = _guard_xfg_dispatch_icall_nop(L"&AStreamingEventDispatcher::OnVehicleExited",L"::");
    pwVar5 = pwVar15;
    while (pwVar12 = pwVar13, pwVar12 != (wchar_t *)0x0) {
      pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar12 + 1,L"::");
      pwVar5 = pwVar12;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
              (pwVar14 + 0xedc,param_1,FUN_140e01b70,local_res8);
  }
  if (pwVar8 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop
                       (L"&AStreamingEventDispatcher::OnPlayerCausedDamage",L"::");
    pwVar14 = pwVar15;
    while (pwVar13 = pwVar5, pwVar13 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
      pwVar14 = pwVar13;
    }
    FName::FName(&local_res8,pwVar14 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
              (pwVar8 + 0xf4,param_1,FUN_140dffa10,local_res8);
    pwVar14 = _guard_xfg_dispatch_icall_nop
                        (L"&AStreamingEventDispatcher::OnPlayerCausedDeath",L"::");
    while (pwVar5 = pwVar14, pwVar5 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar15 = pwVar5;
    }
    FName::FName(&local_res8,pwVar15 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
              (pwVar8 + 0xfc,param_1,FUN_140dffa30,local_res8);
  }
  return;
}



// FUNCTION 140de3df0 FUN_140de3df0 body=467 status=ok
// SIG undefined FUN_140de3df0(void)

void FUN_140de3df0(longlong param_1,wchar_t *param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong local_res18 [2];
  undefined1 local_78 [8];
  longlong local_70;
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  if (param_2 != (wchar_t *)0x0) {
    lVar5 = FUN_1413c3a10();
    if ((*(int *)(*(longlong *)(param_2 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140de3e4a;
  }
  param_2 = (wchar_t *)0x0;
LAB_140de3e4a:
  lVar5 = *(longlong *)(param_2 + 0x2ac);
  local_38 = 0;
  local_30 = 0;
  local_50 = 0xffffffff;
  local_4c = 0;
  local_40 = 0;
  if (lVar5 == 0) {
    local_40 = 0;
  }
  else {
    uVar6 = FSoftObjectPath::FSoftObjectPath(local_68,lVar5);
    FSoftObjectPath::operator=(&local_40,uVar6);
    FWeakObjectPtr::operator=(&local_50,lVar5);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_4c = CONCAT44(DAT_1464b56f4,(undefined4)local_4c);
  }
  lVar8 = *(longlong *)(param_1 + 400);
  lVar5 = lVar8 + (longlong)*(int *)(param_1 + 0x198) * 0x28;
  while( true ) {
    if (lVar8 == lVar5) goto LAB_140de3fa1;
    cVar4 = FSoftObjectPath::operator==(lVar8 + 0x10,&local_40);
    if (cVar4 != '\0') break;
    lVar8 = lVar8 + 0x28;
  }
  *(int *)(param_1 + 0x294) = *(int *)(param_1 + 0x294) + 1;
  pwVar7 = _guard_xfg_dispatch_icall_nop
                     (L"&UOakStreamingInteractionEvent_Lootable::OnLootableObjectEventOpened",L"::")
  ;
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(local_res18,pwVar3 + 2,1);
  FWeakObjectPtr::operator=(local_78,0);
  local_70 = 0;
  FWeakObjectPtr::operator=(local_78,param_1);
  local_70 = local_res18[0];
  if ((local_res18[0] != 0) && (lVar5 = FWeakObjectPtr::Get(local_78), lVar5 != 0)) {
    UObject::FindFunction(lVar5,local_70);
  }
  FUN_1406a5aa0(param_2 + 0x3e0,local_78);
LAB_140de3fa1:
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140de3fd0 FUN_140de3fd0 body=112 status=ok
// SIG undefined FUN_140de3fd0(void)

void FUN_140de3fd0(longlong param_1,longlong param_2)

{
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 *local_res20;
  
  local_res10 = 0xffffffff;
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&local_res18);
    local_res10 = local_res18;
  }
  local_res20 = &local_res10;
  FUN_140dd8f40(param_1 + 0xb0,local_res8,&local_res20,0);
  *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 8 + (longlong)local_res8[0] * 0x14) = 1;
  return;
}



// FUNCTION 140de4040 FUN_140de4040 body=219 status=ok
// SIG undefined FUN_140de4040(void)

int * FUN_140de4040(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0xb0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0xb0 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0xb0 + *param_1;
  return param_2;
}



// FUNCTION 140de4120 AddUninitialized body=210 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FGuid,FSHAHash>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0x2c + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x2c + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x2c + *param_1;
  return param_2;
}



// FUNCTION 140de4200 FUN_140de4200 body=942 status=ok
// SIG undefined FUN_140de4200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140de4200(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_3f8 [32];
  undefined8 *local_3d8;
  undefined8 *local_3d0;
  code **local_3c8;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined2 local_398;
  undefined1 local_390 [8];
  undefined8 local_388;
  undefined8 local_380;
  undefined8 *local_378;
  undefined8 *local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined1 local_328 [16];
  undefined1 local_318 [40];
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  longlong local_2e0;
  undefined1 local_2d8 [40];
  undefined8 *local_2b0;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  code *local_288 [2];
  longlong local_278 [4];
  longlong *local_258;
  int local_248;
  undefined1 local_238 [520];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  if (param_1[0x31] == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x148))();
  puVar6 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar3 = FDateTime::Now(local_390);
  lVar4 = FDateTime::ToUnixTimestamp(uVar3);
  param_1[0x2d] = lVar4;
  local_368 = 0;
  uStack_360 = 0;
  local_388 = 0;
  local_380 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  local_340 = 0x400;
  local_338 = 0;
  local_330 = 0;
  puVar5 = (undefined8 *)operator_new(0x28);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0x10000;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar6 = puVar5;
  }
  local_2b0 = &local_2a0;
  local_2a0 = 0;
  local_298 = 0x3000000000000;
  local_378 = puVar6;
  local_370 = puVar6;
  local_2a8 = puVar6;
  (**(code **)(*param_1 + 0x2f0))(param_1,&local_2b0);
  (**(code **)(**(longlong **)(param_1[0x31] + 0x88) + 0x78))
            (*(longlong **)(param_1[0x31] + 0x88),&local_2b0);
  (**(code **)(*param_1 + 0x2e8))(param_1,3);
  plVar8 = param_1 + 0x10;
  lVar4 = FWeakObjectPtr::Get(plVar8);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == (int)param_1[0x11]) || (local_3b8 = 0, param_1[0x12] == 0))
    goto LAB_140de4533;
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar8,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x11) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(plVar8);
    if (lVar4 == 0) goto LAB_140de4533;
  }
  lVar7 = FUN_140600840();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = TSoftObjectPtr<UTexture2D>::TSoftObjectPtr<UTexture2D>(local_2d8,plVar8);
    FUN_1405e3130(param_1,uVar3,0);
    local_3b8 = 0;
    if ((param_1[0x1a] == 0) ||
       (((*(int *)((longlong)param_1 + 0xf4) == 0 && (int)param_1[0x1e] == 0) &&
        *(int *)((longlong)param_1 + 0xec) == 0) && (int)param_1[0x1d] == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_258 = (longlong *)0x0;
      local_288[0] = AK::MemoryMgr::StartProfileThreadUsage;
      local_248 = 0;
      local_3b0 = 0xffffffff00000000;
      local_3a0 = 0;
      local_398 = 0;
      local_3a8 = 0;
      local_238[0] = 0;
      local_30 = 0;
      local_28 = 0;
      TSoftObjectPtr<UTexture2D>::TSoftObjectPtr<UTexture2D>(local_318,param_1 + 0x18);
      local_2e0 = param_1[0x1f];
      local_2f0 = (undefined4)param_1[0x1d];
      uStack_2ec = *(undefined4 *)((longlong)param_1 + 0xec);
      uStack_2e8 = (undefined4)param_1[0x1e];
      uStack_2e4 = *(undefined4 *)((longlong)param_1 + 0xf4);
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      local_3c8 = local_288;
      local_3d0 = &local_3a0;
      local_3d8 = &local_3b0;
      FUN_1405f2e30(local_328,uVar3,local_318,local_238);
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_248 != 0) {
        plVar8 = local_278;
        if (local_258 != (longlong *)0x0) {
          plVar8 = local_258;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_258 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
LAB_140de4533:
  cVar2 = FText::IsEmpty(param_1 + 0x15);
  if (cVar2 == '\0') {
    local_3d8 = (undefined8 *)0x0;
    FUN_140de6a50(param_1[0x31],param_1 + 10,param_1 + 0x15,0x40a00000);
  }
  *(int *)((longlong)param_1 + 0x15c) = (int)param_1[0x2b];
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::
  ~GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
            (&local_388);
  return;
}



// FUNCTION 140de45b0 FUN_140de45b0 body=45 status=ok
// SIG undefined FUN_140de45b0(void)

void FUN_140de45b0(longlong param_1)

{
  int *piVar1;
  
  FUN_140de4200();
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x188) + 0x40);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 140de45e0 FUN_140de45e0 body=50 status=ok
// SIG undefined FUN_140de45e0(void)

void FUN_140de45e0(longlong param_1)

{
  int *piVar1;
  
  FUN_140de4200();
  if (*(longlong *)(param_1 + 0x188) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x188) + 0x38);
    *piVar1 = *piVar1 + 1;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x188) + 0x54);
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}



// FUNCTION 140de4620 FUN_140de4620 body=35 status=ok
// SIG undefined FUN_140de4620(void)

void FUN_140de4620(longlong param_1)

{
  int *piVar1;
  
  FUN_140de4200();
  if (*(longlong *)(param_1 + 0x188) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x188) + 0x38);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 140de4650 FUN_140de4650 body=46 status=ok
// SIG undefined FUN_140de4650(void)

void FUN_140de4650(longlong param_1)

{
  int *piVar1;
  
  FUN_140de4200();
  if (*(longlong *)(param_1 + 0x188) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x188) + 0x4c);
    *piVar1 = *piVar1 + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x188) + 0x58) = 0;
  }
  return;
}



// FUNCTION 140de4680 FUN_140de4680 body=86 status=ok
// SIG undefined FUN_140de4680(void)

void FUN_140de4680(longlong param_1)

{
  int *piVar1;
  
  FUN_140de4200();
  if (*(longlong *)(param_1 + 0x188) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x188) + 0x48);
    *piVar1 = *piVar1 + 1;
    FUN_140e08c20(*(undefined8 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x17c),0,
                  *(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x27c),param_1 + 0x280)
    ;
  }
  return;
}



// FUNCTION 140de46e0 FUN_140de46e0 body=132 status=ok
// SIG undefined FUN_140de46e0(void)

void FUN_140de46e0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142223710();
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return;
  }
  FUN_14223e980(param_1,0);
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140de474a;
  }
  lVar3 = 0;
LAB_140de474a:
  *(longlong *)(param_1 + 0x470) = lVar3;
  FUN_140de39d0(param_1);
  return;
}



// FUNCTION 140de4770 FUN_140de4770 body=95 status=ok
// SIG undefined FUN_140de4770(void)

longlong FUN_140de4770(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(param_1 + 8));
  if (*(int *)((longlong)*(int *)(param_1 + 0x18) + 8 + param_3) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(*(int *)(param_1 + 0x18) + param_3);
  }
  (**(code **)(*param_2 + 0xb0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 140de47d0 FUN_140de47d0 body=80 status=ok
// SIG undefined FUN_140de47d0(void)

longlong FUN_140de47d0(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined1 *)(*(int *)(param_1 + 0x18) + param_3));
  return param_3;
}



// FUNCTION 140de4820 FUN_140de4820 body=98 status=ok
// SIG undefined FUN_140de4820(void)

longlong FUN_140de4820(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(param_1 + 8));
  lVar1 = *(int *)(param_1 + 0x18) + param_3;
  (**(code **)(*param_2 + 0x28))(param_2);
  FUN_140de5980(param_2,lVar1);
  (**(code **)(*param_2 + 0x48))(param_2,lVar1);
  return param_3;
}



// FUNCTION 140de4890 FUN_140de4890 body=216 status=ok
// SIG undefined FUN_140de4890(void)

longlong FUN_140de4890(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(param_1 + 8));
  plVar4 = (longlong *)(*(int *)(param_1 + 0x18) + param_3);
  cVar1 = (**(code **)(*param_2 + 0x138))
                    (param_2,*plVar4,(longlong)(int)plVar4[1],FUN_140dd8420,FUN_140dd84d0);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x140))(param_2,(longlong)(int)plVar4[1]);
    for (iVar2 = 0; (-1 < iVar2 && (iVar2 < (int)plVar4[1])); iVar2 = iVar2 + 1) {
      lVar3 = (longlong)iVar2 * 0x58 + *plVar4;
      (**(code **)(*param_2 + 0x28))(param_2);
      FUN_140de5760(param_2,lVar3);
      (**(code **)(*param_2 + 0x48))(param_2,lVar3);
    }
    (**(code **)(*param_2 + 0x148))(param_2);
  }
  return param_3;
}



// FUNCTION 140de4970 FUN_140de4970 body=216 status=ok
// SIG undefined FUN_140de4970(void)

longlong FUN_140de4970(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  (**(code **)(*param_2 + 0x90))(param_2,*(undefined8 *)(param_1 + 8));
  plVar4 = (longlong *)(*(int *)(param_1 + 0x18) + param_3);
  cVar1 = (**(code **)(*param_2 + 0x138))
                    (param_2,*plVar4,(longlong)(int)plVar4[1],FUN_140dd8470,FUN_140dd8510);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x140))(param_2,(longlong)(int)plVar4[1]);
    for (iVar2 = 0; (-1 < iVar2 && (iVar2 < (int)plVar4[1])); iVar2 = iVar2 + 1) {
      lVar3 = (longlong)iVar2 * 0x40 + *plVar4;
      (**(code **)(*param_2 + 0x28))(param_2);
      FUN_140de5980(param_2,lVar3);
      (**(code **)(*param_2 + 0x48))(param_2,lVar3);
    }
    (**(code **)(*param_2 + 0x148))(param_2);
  }
  return param_3;
}



// FUNCTION 140de4a50 FUN_140de4a50 body=58 status=ok
// SIG undefined FUN_140de4a50(void)

longlong FUN_140de4a50(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  
  if (*(int *)((longlong)*(int *)(param_1 + 0x18) + 8 + param_3) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(*(int *)(param_1 + 0x18) + param_3);
  }
  (**(code **)(*param_2 + 0xb0))(param_2,puVar1);
  return param_3;
}



// FUNCTION 140de4a90 FUN_140de4a90 body=43 status=ok
// SIG undefined FUN_140de4a90(void)

longlong FUN_140de4a90(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined1 *)(*(int *)(param_1 + 0x18) + param_3));
  return param_3;
}



// FUNCTION 140de4ac0 FUN_140de4ac0 body=79 status=ok
// SIG undefined FUN_140de4ac0(void)

longlong FUN_140de4ac0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(int *)(param_1 + 0x18) + param_3;
  (**(code **)(*param_2 + 0x28))(param_2);
  FUN_140de5980(param_2,lVar1);
  (**(code **)(*param_2 + 0x48))(param_2,lVar1);
  return param_3;
}



// FUNCTION 140de4b10 FUN_140de4b10 body=197 status=ok
// SIG undefined FUN_140de4b10(void)

longlong FUN_140de4b10(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(*(int *)(param_1 + 0x18) + param_3);
  cVar1 = (**(code **)(*param_2 + 0x138))
                    (param_2,*plVar4,(longlong)(int)plVar4[1],FUN_140dd8420,FUN_140dd84d0);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x140))(param_2,(longlong)(int)plVar4[1]);
    for (iVar2 = 0; (-1 < iVar2 && (iVar2 < (int)plVar4[1])); iVar2 = iVar2 + 1) {
      lVar3 = (longlong)iVar2 * 0x58 + *plVar4;
      (**(code **)(*param_2 + 0x28))(param_2);
      FUN_140de5760(param_2,lVar3);
      (**(code **)(*param_2 + 0x48))(param_2,lVar3);
    }
    (**(code **)(*param_2 + 0x148))(param_2);
  }
  return param_3;
}



// FUNCTION 140de4be0 FUN_140de4be0 body=197 status=ok
// SIG undefined FUN_140de4be0(void)

longlong FUN_140de4be0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(*(int *)(param_1 + 0x18) + param_3);
  cVar1 = (**(code **)(*param_2 + 0x138))
                    (param_2,*plVar4,(longlong)(int)plVar4[1],FUN_140dd8470,FUN_140dd8510);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x140))(param_2,(longlong)(int)plVar4[1]);
    for (iVar2 = 0; (-1 < iVar2 && (iVar2 < (int)plVar4[1])); iVar2 = iVar2 + 1) {
      lVar3 = (longlong)iVar2 * 0x40 + *plVar4;
      (**(code **)(*param_2 + 0x28))(param_2);
      FUN_140de5980(param_2,lVar3);
      (**(code **)(*param_2 + 0x48))(param_2,lVar3);
    }
    (**(code **)(*param_2 + 0x148))(param_2);
  }
  return param_3;
}



// FUNCTION 140de4cc0 FUN_140de4cc0 body=116 status=ok
// SIG undefined FUN_140de4cc0(void)

void FUN_140de4cc0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong local_18 [2];
  
  local_18[1] = 0x15;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"crossplay_fbe_choice",0x2a);
  (**(code **)(*param_3 + 0x40))(param_3,local_18,*(undefined1 *)(*param_1 + 0x60));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140de4da0 FUN_140de4da0 body=501 status=ok
// SIG undefined FUN_140de4da0(void)

void FUN_140de4da0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  longlong *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  
  if (*(int *)(param_1 + 0x18) - 6U < 2) {
    return;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_140e06990(param_1,7);
    return;
  }
  FUN_1404d0c50(&local_48,0);
  plVar6 = local_48;
  if (local_48 == (longlong *)0x0) goto LAB_140de4f45;
  (**(code **)(*local_48 + 0x360))(local_48,param_1 + 0x50);
  FUN_140e06990(param_1,6);
  local_58 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_50 = 3;
  local_58 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_140dfbd00;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x388))(plVar6,local_res10,&local_58);
  *(undefined8 *)(param_1 + 0x58) = *puVar5;
  if (local_50 == 0) {
LAB_140de4ed4:
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  else if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
    goto LAB_140de4ed4;
  }
  local_38 = *(undefined8 *)(param_1 + 0x30);
  local_30 = *(longlong **)(param_1 + 0x38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    plVar6 = local_48;
  }
  (**(code **)(*plVar6 + 0x380))(plVar6,&local_38);
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
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
LAB_140de4f45:
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140de4fb0 FUN_140de4fb0 body=149 status=ok
// SIG undefined FUN_140de4fb0(void)

undefined8 FUN_140de4fb0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    return 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar3 + *(int *)(param_1 + 0x40);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    if ((longlong *)*plVar3 == param_2) break;
    plVar3 = plVar3 + 1;
  }
  plVar3 = *(longlong **)(param_1 + 0x78);
  plVar1 = plVar3 + *(int *)(param_1 + 0x80);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    if ((longlong *)*plVar3 == param_2) {
      return 0;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  plVar1 = plVar3 + *(int *)(param_1 + 0x50);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    if ((longlong *)*plVar3 == param_2) {
      return 0;
    }
  }
  cVar2 = (**(code **)(*param_2 + 0x298))(param_2);
  if (cVar2 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 140de5050 FUN_140de5050 body=528 status=ok
// SIG undefined FUN_140de5050(void)

void FUN_140de5050(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  uint uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong local_res10;
  undefined1 local_38 [8];
  longlong local_30;
  
  plVar1 = (longlong *)(param_1 + 0x110);
  pwVar9 = (wchar_t *)0x0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  pwVar5 = pwVar9;
  pwVar8 = pwVar9;
  if (0 < *(int *)(param_1 + 0x1b8)) {
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x1b0) + 0x60 + (longlong)pwVar5) == '\0') {
        iVar2 = *(int *)(param_1 + 0x118);
        *(int *)(param_1 + 0x118) = iVar2 + 1;
        if (*(int *)(param_1 + 0x11c) < iVar2 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        *(int *)(*plVar1 + (longlong)iVar2 * 4) = (int)pwVar8;
      }
      uVar7 = (int)pwVar8 + 1;
      pwVar5 = pwVar5 + 0x34;
      pwVar8 = (wchar_t *)(ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_1 + 0x1b8));
  }
  if (0 < *(int *)(param_1 + 0x118)) {
    if (*(longlong *)(param_1 + 0x108) == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar4 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
      uVar4 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
      *(undefined8 *)(param_1 + 0x108) = uVar4;
    }
    if (*(longlong *)(param_1 + 0x180) != 0) {
      if (*(longlong *)(param_1 + 0x108) != 0) {
        FUN_1411f9620(*(longlong *)(param_1 + 0x108),*(longlong *)(param_1 + 0x180) + 0x100);
        pwVar5 = _guard_xfg_dispatch_icall_nop
                           (L"&UOakStreamingInteractionManager::OnThumbnailLoaded",L"::");
        while (pwVar8 = pwVar5, pwVar8 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
          pwVar9 = pwVar8;
        }
        FName::FName(&local_res10,pwVar9 + 2,1);
        lVar3 = *(longlong *)(param_1 + 0x108);
        FWeakObjectPtr::operator=(local_38,0);
        local_30 = 0;
        FWeakObjectPtr::operator=(local_38,param_1);
        local_30 = local_res10;
        if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(local_38), lVar6 != 0)) {
          UObject::FindFunction(lVar6,local_30);
        }
        FUN_1406a5aa0(lVar3 + 0xe8,local_38);
      }
      if (*(longlong *)(param_1 + 0x178) != 0) {
        *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
        FUN_140decd50(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140de5260 FUN_140de5260 body=163 status=ok
// SIG undefined FUN_140de5260(void)

ulonglong FUN_140de5260(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  plVar1 = (longlong *)FDateTime::Now(local_res8);
  plVar2 = (longlong *)FDateTime::FDateTime(local_res10,0x7b2,1,1,0,0,0,0);
  lVar4 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(*plVar1 - *plVar2),8) + (*plVar1 - *plVar2);
  lVar4 = (lVar4 >> 0x17) - (lVar4 >> 0x3f);
  uVar3 = lVar4 - *(longlong *)(param_1 + 0x160);
  if ((longlong)uVar3 < 5) {
    return uVar3 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)(longlong)*(float *)(param_1 + 0x4c) >> 8),
                  (longlong)*(float *)(param_1 + 0x4c) < lVar4 - *(longlong *)(param_1 + 0x168));
}



// FUNCTION 140de5310 FUN_140de5310 body=131 status=ok
// SIG undefined FUN_140de5310(void)

ulonglong FUN_140de5310(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar2 = FUN_140de5260();
  if ((char)uVar2 != '\0') {
    lVar5 = *param_1;
    uVar3 = (**(code **)(lVar5 + 0x148))(param_1);
    uVar2 = (**(code **)(lVar5 + 0x280))(param_1,uVar3);
    if ((char)uVar2 != '\0') {
      uVar2 = param_1[0x31];
      if (uVar2 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(uVar2 + 0xf8);
      }
      if (((lVar5 == 0) || (*(int *)(lVar5 + 0x80) < 1)) &&
         ((uVar4 = 0, uVar2 == 0 ||
          (uVar1 = *(int *)(uVar2 + 0x70) - *(int *)((longlong)param_1 + 0x46c),
          uVar2 = (ulonglong)uVar1, uVar4 = uVar2, (int)param_1[0x3a] <= (int)uVar1)))) {
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140de53a0 FUN_140de53a0 body=240 status=ok
// SIG undefined FUN_140de53a0(void)

undefined8 FUN_140de53a0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  uint local_res10 [2];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  cVar2 = FUN_140de5260();
  if (cVar2 == '\0') {
    return 0;
  }
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar5 = FMistWorldUtils::GetDebugEntityDrawSystem(uVar4);
  local_res10[0] = local_res10[0] & 0xffffff00;
  bVar6 = false;
  if ((lVar5 != 0) && (lVar5 = FUN_142f416d0(lVar5,param_1,local_res10), bVar6 = false, lVar5 != 0))
  {
    uVar4 = FName::ToString(lVar5 + 0x78,local_18);
    bVar6 = true;
    iVar3 = FUN_141592950(uVar4,L"Sanctuary3",1,0,0xffffffff);
    if (iVar3 != -1) {
      bVar1 = true;
      goto LAB_140de5436;
    }
  }
  bVar1 = false;
LAB_140de5436:
  if ((bVar6) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  if (!bVar1) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar2 = FUN_140adac00(uVar4);
    if ((cVar2 == '\0') || ((char)param_1[0x47] != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140de5490 FUN_140de5490 body=52 status=ok
// SIG undefined FUN_140de5490(void)

ulonglong FUN_140de5490(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140de5260();
  if (((char)uVar1 != '\0') &&
     ((uVar1 = *(ulonglong *)(param_1 + 0x188), uVar1 == 0 || (*(char *)(uVar1 + 0x58) == '\0')))) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140de54d0 FUN_140de54d0 body=111 status=ok
// SIG undefined FUN_140de54d0(void)

void FUN_140de54d0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x458) != 0) && (*(longlong *)(param_1 + 0x468) != 0)) {
    FUN_142ccf490();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FUN_142f6c130(*(longlong *)(param_1 + 0x460),1);
    (**(code **)(**(longlong **)(param_1 + 0x460) + 0x3b0))(*(longlong **)(param_1 + 0x460),0);
    *(undefined8 *)(param_1 + 0x460) = 0;
  }
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  return;
}



// FUNCTION 140de5540 RemoveSection body=28 status=ok
// SIG undefined RemoveSection(void)

void UMovieSceneStringTrack::RemoveSection(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  FUN_140ddae60(param_1 + 0x78,local_res8);
  return;
}



// FUNCTION 140de5560 FUN_140de5560 body=105 status=ok
// SIG undefined FUN_140de5560(void)

void FUN_140de5560(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1411f8450();
    FUN_1407665e0(*(longlong *)(param_1 + 0x108) + 0xe8,param_1);
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x110,0);
  }
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x128,0);
  return;
}



// FUNCTION 140de55d0 FUN_140de55d0 body=78 status=ok
// SIG undefined FUN_140de55d0(void)

void FUN_140de55d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f47bd8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    *puVar1 = &PTR_FUN_144576140;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 140de5620 FUN_140de5620 body=78 status=ok
// SIG undefined FUN_140de5620(void)

void FUN_140de5620(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f47bd8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    *puVar1 = &PTR_FUN_1445760c0;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 140de5670 FUN_140de5670 body=78 status=ok
// SIG undefined FUN_140de5670(void)

void FUN_140de5670(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f47bd8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    *puVar1 = &PTR_FUN_144576240;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 140de56c0 FUN_140de56c0 body=78 status=ok
// SIG undefined FUN_140de56c0(void)

void FUN_140de56c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f47bd8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    *puVar1 = &PTR_FUN_1445762c0;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 140de5710 FUN_140de5710 body=78 status=ok
// SIG undefined FUN_140de5710(void)

void FUN_140de5710(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f47bd8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    *puVar1 = &PTR_FUN_1445761c0;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 140de5760 FUN_140de5760 body=529 status=ok
// SIG undefined FUN_140de5760(void)

void FUN_140de5760(longlong *param_1,undefined8 param_2)

{
  longlong *local_118;
  undefined8 local_110;
  undefined **local_108;
  char *local_100;
  undefined1 local_f8;
  undefined4 local_f0;
  undefined **local_e8;
  char *local_e0;
  undefined1 local_d8;
  undefined4 local_d0;
  undefined **local_c8;
  undefined *local_c0;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined **local_a8;
  char *local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined **local_88;
  char *local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined **local_68;
  char *local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined **local_48;
  char *local_40;
  undefined1 local_38;
  undefined4 local_30;
  undefined **local_28;
  char *local_20;
  undefined1 local_18;
  undefined4 local_10;
  
  (**(code **)(*param_1 + 0x10))(param_1,&local_118,"friend",param_2);
  if (local_118 != (longlong *)0x0) {
    local_100 = "__Type";
    local_108 = &PTR_FUN_144576140;
    local_f8 = 1;
    local_f0 = 0;
    (**(code **)(*local_118 + 0x18))(local_118,local_110,&local_108);
    local_108 = &PTR_FUN_143f47bd8;
    local_e0 = "serviceId";
    local_d8 = 1;
    local_e8 = &PTR_FUN_144576140;
    local_d0 = 0x10;
    (**(code **)(*local_118 + 0x18))(local_118,local_110,&local_e8);
    local_e8 = &PTR_FUN_143f47bd8;
    local_c0 = &DAT_14456d814;
    local_b8 = 1;
    local_c8 = &PTR_FUN_144576140;
    local_b0 = 0x20;
    (**(code **)(*local_118 + 0x18))(local_118,local_110,&local_c8);
    local_c8 = &PTR_FUN_143f47bd8;
    local_a0 = "description";
    local_98 = 1;
    local_a8 = &PTR_FUN_144576140;
    local_90 = 0x30;
    (**(code **)(*local_118 + 0x18))(local_118,local_110,&local_a8);
    local_a8 = &PTR_FUN_143f47bd8;
    local_80 = "platform";
    local_78 = 1;
    local_88 = &PTR_FUN_144576140;
    local_70 = 0x40;
    (**(code **)(*local_118 + 0x18))(local_118,local_110,&local_88);
    local_88 = &PTR_FUN_143f47bd8;
    local_60 = "isOnline";
    local_58 = 1;
    local_68 = &PTR_FUN_1445760c0;
    local_50 = 0x50;
    (**(code **)(*local_118 + 0x18))(local_118,local_110,&local_68);
    local_68 = &PTR_FUN_143f47bd8;
    local_40 = "already_friends";
    local_38 = 1;
    local_48 = &PTR_FUN_1445760c0;
    local_30 = 0x51;
    (**(code **)(*local_118 + 0x18))(local_118,local_110,&local_48);
    local_48 = &PTR_FUN_143f47bd8;
    local_20 = "already_blocked";
    local_18 = 1;
    local_28 = &PTR_FUN_1445760c0;
    local_10 = 0x52;
    (**(code **)(*local_118 + 0x18))(local_118,local_110,&local_28);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_118);
  return;
}



// FUNCTION 140de5980 FUN_140de5980 body=296 status=ok
// SIG undefined FUN_140de5980(void)

void FUN_140de5980(longlong *param_1,undefined8 param_2)

{
  longlong *local_98;
  undefined8 local_90;
  undefined **local_88;
  char *local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined **local_68;
  char *local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined **local_48;
  char *local_40;
  undefined1 local_38;
  undefined4 local_30;
  undefined **local_28;
  char *local_20;
  undefined1 local_18;
  undefined4 local_10;
  
  (**(code **)(*param_1 + 0x10))(param_1,&local_98,"invitation",param_2);
  if (local_98 != (longlong *)0x0) {
    local_80 = "invitationId";
    local_78 = 1;
    local_70 = 0;
    local_88 = &PTR_FUN_144576140;
    (**(code **)(*local_98 + 0x18))(local_98,local_90,&local_88);
    local_88 = &PTR_FUN_143f47bd8;
    local_60 = "title";
    local_58 = 1;
    local_68 = &PTR_FUN_144576140;
    local_50 = 0x10;
    (**(code **)(*local_98 + 0x18))(local_98,local_90,&local_68);
    local_68 = &PTR_FUN_143f47bd8;
    local_40 = "description";
    local_38 = 1;
    local_48 = &PTR_FUN_144576140;
    local_30 = 0x20;
    (**(code **)(*local_98 + 0x18))(local_98,local_90,&local_48);
    local_48 = &PTR_FUN_143f47bd8;
    local_20 = "invitationType";
    local_18 = 1;
    local_28 = &PTR_FUN_144576140;
    local_10 = 0x30;
    (**(code **)(*local_98 + 0x18))(local_98,local_90,&local_28);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_98);
  return;
}



// FUNCTION 140de5ab0 FUN_140de5ab0 body=177 status=ok
// SIG undefined FUN_140de5ab0(void)

void FUN_140de5ab0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined8 local_res10;
  ulonglong local_res18 [2];
  
  local_res18[0] = 0;
  local_res10 = 0;
  (**(code **)(*param_1 + 0x1a0))(param_1,&local_res10,local_res18);
  uVar4 = local_res18[0];
  uVar3 = local_res10;
  local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
  FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (&local_res8,0x7fffffff,local_res10,local_res18[0] & 0xffffffff);
  uVar2 = local_res8;
  lVar6 = (longlong)(int)local_res8;
  iVar1 = (int)param_2[1];
  iVar5 = (int)local_res8 + 1;
  if (iVar1 < iVar5) {
    *(int *)(param_2 + 1) = iVar5;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
  }
  else if ((iVar5 < iVar1) && (iVar5 != iVar1)) {
    *(int *)(param_2 + 1) = iVar5;
    TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_2);
  }
  *(undefined2 *)(*param_2 + lVar6 * 2) = 0;
  local_res8 = *param_2;
  FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>
            (&local_res8,uVar2 & 0xffffffff,uVar3,uVar4 & 0xffffffff);
  return;
}



// FUNCTION 140de5b70 FUN_140de5b70 body=299 status=ok
// SIG undefined FUN_140de5b70(void)

ulonglong FUN_140de5b70(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong in_RAX;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_2;
  lVar7 = 0;
  iVar4 = *(int *)(lVar2 + 0xc);
  lVar6 = lVar7;
  if (iVar4 < (int)DAT_1469e91c4) {
    uVar5 = iVar4 >> 0x1f & 0xffff;
    uVar3 = iVar4 + uVar5;
    in_RAX = *(ulonglong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8);
    lVar6 = in_RAX + (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  if (((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) && ((*(byte *)(lVar2 + 0x94) & 2) == 0)) {
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar5 = iVar4 >> 0x1f & 0xffff;
      uVar3 = iVar4 + uVar5;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    in_RAX = 0;
    if (((((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) && ((*(byte *)(lVar2 + 0x92) & 0x40) != 0)) &&
        ((*(byte *)(lVar2 + 0x90) & 0x20) == 0)) &&
       ((*(char *)(lVar2 + 0x129) != '\x04' ||
        (in_RAX = UAbilityTask::IsWaitingOnRemotePlayerdata(lVar2), (char)in_RAX == '\0')))) {
      iVar4 = (int)param_1[2];
      if (iVar4 == *(int *)((longlong)param_1 + 0x14)) {
        FActorRepListRefView::RequestNewList(param_1,*(int *)((longlong)param_1 + 0x14) + 1,1);
        iVar4 = (int)param_1[2];
      }
      *(longlong *)(param_1[1] + (longlong)iVar4 * 8) = *param_2;
      lVar7 = *param_1;
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      piVar1 = (int *)(lVar7 + 8);
      *piVar1 = *piVar1 + 1;
      return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140de5ca0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
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



// FUNCTION 140de5d50 FUN_140de5d50 body=161 status=ok
// SIG undefined FUN_140de5d50(void)

undefined8 FUN_140de5d50(longlong param_1,uint param_2,char param_3)

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
      FUN_140e041b0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140de5e00 FUN_140de5e00 body=161 status=ok
// SIG undefined FUN_140de5e00(void)

undefined8 FUN_140de5e00(longlong param_1,uint param_2,char param_3)

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
      FUN_140e04440(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140de5eb0 FUN_140de5eb0 body=858 status=ok
// SIG undefined FUN_140de5eb0(void)

undefined8 FUN_140de5eb0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
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
  
  local_res10 = param_2;
  plVar4 = (longlong *)FName::FName(local_res18,L"NULL",1);
  if (local_res10 == *plVar4) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c8,&DAT_1445565d4,L"Overlay",L"NullSubsystemName");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
  }
  else {
    plVar4 = (longlong *)FName::FName(local_res20,&DAT_14456b668,1);
    if ((local_res10 == *plVar4) ||
       (plVar4 = (longlong *)FName::FName(local_108,L"EPIC",1), local_res10 == *plVar4)) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,L"Epic Games Store",L"Overlay",L"McpSubsystemName");
      uVar5 = FText::ToString(uVar5);
      FString::FString(param_1,uVar5);
      local_c0 = local_30;
    }
    else {
      plVar4 = (longlong *)FName::FName(local_100,L"STEAM",1);
      if (local_res10 == *plVar4) {
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_b0,L"Steam",L"Overlay",L"SteamSubsystemName");
        uVar5 = FText::ToString(uVar5);
        FString::FString(param_1,uVar5);
        local_c0 = local_a8;
      }
      else {
        plVar4 = (longlong *)FName::FName(local_f8,&DAT_14456bcf0,1);
        if ((local_res10 == *plVar4) ||
           (plVar4 = (longlong *)FName::FName(local_f0,&DAT_14456bd10,1), local_res10 == *plVar4)) {
          uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_50,&DAT_14456be10,L"Overlay",L"PS4SubsystemName");
          uVar5 = FText::ToString(uVar5);
          FString::FString(param_1,uVar5);
          local_c0 = local_48;
        }
        else {
          plVar4 = (longlong *)FName::FName(local_e8,L"LIVE",1);
          if ((local_res10 == *plVar4) ||
             (plVar4 = (longlong *)FName::FName(local_e0,L"ANVIL",1), local_res10 == *plVar4)) {
            uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_68,L"Xbox Live",L"Overlay",L"LiveSubsystemName");
            uVar5 = FText::ToString(uVar5);
            FString::FString(param_1,uVar5);
            local_c0 = local_60;
          }
          else {
            plVar4 = (longlong *)FName::FName(local_d8,L"QUAIL",1);
            if (local_res10 == *plVar4) {
              uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_98,L"Stadia",L"Overlay",L"QuailSubsystemName");
              uVar5 = FText::ToString(uVar5);
              FString::FString(param_1,uVar5);
              local_c0 = local_90;
            }
            else {
              plVar4 = (longlong *)FName::FName(local_d0,L"SPARK",1);
              if (local_res10 != *plVar4) {
                FName::ToString(&local_res10,param_1);
                return param_1;
              }
              uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_80,L"SHiFT",L"Overlay",L"SparkSubsystemName");
              uVar5 = FText::ToString(uVar5);
              FString::FString(param_1,uVar5);
              local_c0 = local_78;
            }
          }
        }
      }
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_c0 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140de6210 FUN_140de6210 body=112 status=ok
// SIG undefined FUN_140de6210(void)

undefined8 * FUN_140de6210(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144575d48;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    FString::FString(puVar2 + 4,param_1 + 0x20);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140de6280 FUN_140de6280 body=71 status=ok
// SIG undefined FUN_140de6280(void)

void FUN_140de6280(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144575d30;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
      return;
    }
  }
  return;
}



// FUNCTION 140de62d0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144575f10;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144575f58;
  }
  return;
}



// FUNCTION 140de6320 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144575fa0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144575fe8;
  }
  return;
}



// FUNCTION 140de6370 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144576030;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144576078;
  }
  return;
}



// FUNCTION 140de63c0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144575e80;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144575ec8;
  }
  return;
}



// FUNCTION 140de6410 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144575d60;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144575da8;
  }
  return;
}



// FUNCTION 140de6460 FUN_140de6460 body=251 status=ok
// SIG undefined FUN_140de6460(void)

void FUN_140de6460(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144575df0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = 0;
    iVar4 = *(int *)(param_1 + 0x18);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *(int *)(puVar2 + 3) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 2,iVar4,0);
      puVar3 = (undefined8 *)puVar2[2];
      do {
        *puVar3 = 0;
        iVar1 = *(int *)(puVar5 + 1);
        _Src = (void *)*puVar5;
        *(int *)(puVar3 + 1) = iVar1;
        if (iVar1 == 0) {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
        }
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_144575e38;
  }
  return;
}



// FUNCTION 140de6560 FUN_140de6560 body=78 status=ok
// SIG undefined FUN_140de6560(void)

void FUN_140de6560(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144576470;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1445764b8;
  }
  return;
}



// FUNCTION 140de65b0 FUN_140de65b0 body=78 status=ok
// SIG undefined FUN_140de65b0(void)

void FUN_140de65b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1445763e0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_144576428;
  }
  return;
}



// FUNCTION 140de6600 FUN_140de6600 body=78 status=ok
// SIG undefined FUN_140de6600(void)

void FUN_140de6600(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144576350;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_144576398;
  }
  return;
}



// FUNCTION 140de6650 FUN_140de6650 body=84 status=ok
// SIG undefined FUN_140de6650(void)

void FUN_140de6650(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144576500;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144576548;
  }
  return;
}



// FUNCTION 140de66b0 FUN_140de66b0 body=84 status=ok
// SIG undefined FUN_140de66b0(void)

void FUN_140de66b0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144576620;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144576668;
  }
  return;
}



// FUNCTION 140de6710 FUN_140de6710 body=84 status=ok
// SIG undefined FUN_140de6710(void)

void FUN_140de6710(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144576590;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1445765d8;
  }
  return;
}



// FUNCTION 140de6770 FUN_140de6770 body=50 status=ok
// SIG undefined FUN_140de6770(void)

void FUN_140de6770(longlong *param_1)

{
  if (DAT_14686f688 != 0) {
    FUN_140e057f0();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140de67d0 FUN_140de67d0 body=14 status=ok
// SIG undefined FUN_140de67d0(void)

void FUN_140de67d0(longlong param_1)

{
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x10),0x28);
  return;
}



// FUNCTION 140de67e0 FUN_140de67e0 body=613 status=ok
// SIG undefined FUN_140de67e0(void)

void FUN_140de67e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong *plVar11;
  longlong *local_c0;
  longlong local_b0 [3];
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  undefined1 local_48 [32];
  
  plVar8 = *(longlong **)(param_1 + 0x10);
  plVar11 = (longlong *)0x0;
  plVar9 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar8[1];
    bVar10 = iVar6 == 0;
    if (bVar10) {
      *(int *)(plVar8 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar11 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar10) {
      LOCK();
      bVar10 = iVar6 == (int)plVar8[1];
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar10) {
        plVar9 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          plVar11 = *(longlong **)(param_1 + 8);
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar9 = plVar8 + 1;
          lVar2 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
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
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
          UNLOCK();
          LOCK();
          plVar9 = plVar8 + 1;
          lVar2 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          plVar9 = plVar8;
          if ((int)lVar2 == 1) {
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
        break;
      }
      LOCK();
      iVar6 = (int)plVar8[1];
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(plVar8 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
    UNLOCK();
  }
  FString::FString(local_b0,param_3);
  local_68 = (longlong *)0x0;
  local_58 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x30,local_88);
  local_c0 = plVar9;
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_144575d48;
    puVar7[1] = plVar11;
    puVar7[2] = plVar9;
    puVar7[3] = param_2;
    local_c0 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
    FString::FString(puVar7 + 4,local_b0);
  }
  local_98[0] = &LAB_140de4cb0;
  plVar8 = (longlong *)FUN_140596960(local_48,0,0xff);
  lVar2 = *plVar8;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar2 + 0x10,local_98);
  *(undefined4 *)(lVar2 + 0x60) = 0x10ff;
  lVar2 = *plVar8;
  lVar5 = plVar8[2];
  lVar3 = plVar8[1];
  lVar4 = *(longlong *)(lVar2 + 0x78);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    UNLOCK();
  }
  FUN_1405ab110(lVar2,lVar3,(int)lVar5,1,plVar11);
  if (local_58 != 0) {
    plVar8 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar8 = local_68;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0x48);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      FGraphEvent::Recycle(lVar4);
    }
  }
  if (local_b0[0] != 0) {
    FMemory::Free();
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*local_c0 + 8))(local_c0,1);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  return;
}



// FUNCTION 140de6a50 FUN_140de6a50 body=244 status=ok
// SIG undefined FUN_140de6a50(void)

void FUN_140de6a50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_5;
  if (param_5 == 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))();
    lVar4 = UGameplayStatics::GetPlayerController(uVar3,0);
    if (lVar4 == 0) {
      return;
    }
    lVar2 = FUN_14145f370();
    if ((*(int *)(lVar2 + 0x90) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x90)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        == lVar2 + 0x88)) {
      bVar1 = true;
      goto LAB_140de6af4;
    }
  }
  else {
    lVar2 = FUN_14145f370();
    if ((*(int *)(lVar2 + 0x90) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x90)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        == lVar2 + 0x88)) {
      bVar1 = true;
      goto LAB_140de6af4;
    }
  }
  bVar1 = false;
LAB_140de6af4:
  if (((bVar1) && (lVar4 != 0)) && (*(longlong *)(lVar4 + 0x1428) != 0)) {
    FUN_1411db4f0(*(longlong *)(lVar4 + 0x1428),&param_5,param_2,param_3,param_4,0,2);
  }
  return;
}



// FUNCTION 140de6b50 FUN_140de6b50 body=48 status=ok
// SIG undefined FUN_140de6b50(void)

void FUN_140de6b50(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  if ((DAT_14686f688 != 0) && (param_4 != 0)) {
    FUN_140de6a50(DAT_14686f688,param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 140de6b80 FUN_140de6b80 body=722 status=ok
// SIG undefined FUN_140de6b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140de6b80(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  longlong *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    if (*(int *)(param_1 + 0x18) == 3) {
      return;
    }
    *(undefined4 *)(param_1 + 0x18) = 3;
    if (*(int *)(param_1 + 0x10) == 0) {
      return;
    }
    if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
      return;
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar2 == '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),3);
      return;
    }
    (**(code **)(_DAT_00000000 + 0x40))(0,3);
    return;
  }
  plVar4 = (longlong *)0x0;
  FUN_1404d0c50(&local_58,0);
  plVar7 = local_58;
  if ((local_58 == (longlong *)0x0) ||
     (iVar3 = (**(code **)(*local_58 + 0x3a8))(local_58), iVar3 != 1)) {
    if ((*(int *)(param_1 + 0x18) != 3) &&
       (((*(undefined4 *)(param_1 + 0x18) = 3, *(int *)(param_1 + 0x10) != 0 &&
         (*(longlong **)(param_1 + 8) != (longlong *)0x0)) &&
        (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(), cVar2 != '\0')))) {
      if (*(int *)(param_1 + 0x10) != 0) {
        plVar4 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,3);
    }
    goto LAB_140de6e06;
  }
  FUN_140e06990(param_1,1);
  local_68 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_60 = 3;
  local_68 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140dff280;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x358))(plVar7,local_res10,&local_68);
  *(undefined8 *)(param_1 + 0x50) = *puVar6;
  if (local_60 == 0) {
LAB_140de6cfb:
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  else if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
    goto LAB_140de6cfb;
  }
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_30 = *(longlong **)(param_1 + 0x28);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    plVar7 = local_58;
  }
  local_48 = *(undefined8 *)(param_1 + 0x30);
  local_40 = *(longlong **)(param_1 + 0x38);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar7 = local_58;
  }
  (**(code **)(*plVar7 + 0x350))(plVar7,&local_48,*(undefined8 *)(param_1 + 0x40),&local_38);
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
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
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
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
LAB_140de6e06:
  plVar4 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140de6e60 FUN_140de6e60 body=209 status=ok
// SIG undefined FUN_140de6e60(void)

void FUN_140de6e60(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar3 = (longlong *)(*param_1 + 0x38);
    do {
      if (plVar3[2] != 0) {
        FMemory::Free();
      }
      iVar4 = (int)plVar3[1];
      lVar1 = *plVar3;
      if (iVar4 != 0) {
        lVar1 = lVar1 + 8;
        do {
          FUN_140dddf90(lVar1);
          lVar1 = lVar1 + 0x18;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = *plVar3;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      if (plVar3[-4] != 0) {
        FMemory::Free();
      }
      if (plVar3[-6] != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
  ResizeTo(param_1,param_2);
  return;
}



// FUNCTION 140de6f40 FUN_140de6f40 body=132 status=ok
// SIG undefined FUN_140de6f40(void)

void FUN_140de6f40(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x20);
    do {
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      if (plVar1[-2] != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xd;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 140de6fd0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140de7050();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 140de7050 FUN_140de7050 body=403 status=ok
// SIG undefined FUN_140de7050(void)

void FUN_140de7050(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
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
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_140de7121;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
LAB_140de7121:
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
      FConfigSection::~FConfigSection((longlong)iStack_1c * 0xb0 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140de71f0 FUN_140de71f0 body=1283 status=ok
// SIG undefined FUN_140de71f0(void)

void FUN_140de71f0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  longlong lVar15;
  bool bVar16;
  int local_res8 [2];
  undefined1 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong *local_138;
  int local_130;
  longlong local_128 [2];
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [72];
  
  bVar5 = true;
  bVar4 = true;
  uVar14 = 1;
  local_res10 = 1;
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x48);
  if (cVar6 == '\0') {
LAB_140de725b:
    lVar9 = 0;
  }
  else {
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x48);
    lVar9 = FUN_140bba5e0(uVar8);
    if (lVar9 == 0) goto LAB_140de725b;
    lVar9 = FUN_140d3a750(lVar9,param_1 + 0x50);
  }
  lVar15 = param_1 + 0x50;
  if (lVar9 == 0) goto LAB_140de7654;
  bVar16 = param_2 == '\0';
  bVar4 = bVar5;
  if (!bVar16) {
    local_res18 = 0;
    FUN_1404cf890(&local_f8,0);
    if (local_f8 == (longlong *)0x0) goto LAB_140de75fc;
    local_res8[0] = 1;
    (**(code **)(*local_f8 + 0x140))(local_f8,lVar15,2,local_res8);
    if (local_res8[0] == 3) {
      cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x48);
      if (cVar6 != '\0') {
        puVar12 = (undefined8 *)FName::FName(local_c0,L"SPARK",1);
        FUN_1404cf890(&local_108,*puVar12);
        if ((local_108 != (longlong *)0x0) &&
           ((**(code **)(*local_108 + 0x140))(local_108,lVar15,2,local_res8), local_res8[0] == 1)) {
          local_res10 = 0;
          cVar6 = '\0';
          FWeakObjectPtr::operator=(local_e8,0);
          FWeakObjectPtr::operator=(local_e0,0);
          FWeakObjectPtr::operator=(local_d8,0);
          local_d0 = 0;
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_a0,
                             L"Cross-play is temporarily unavailable and will be disabled in settings."
                             ,L"Overlay",L"GlobalCrossplayDisabled");
          uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_b8,L"Crossplay Unavailable",L"Overlay",L"CrossplayUnavilable");
          uVar8 = FUN_140b99a50(local_88,uVar13,uVar8);
          FUN_140c23780(1,uVar8,local_d8,local_e0,local_e8,2);
          FUN_140b9cdd0(local_88);
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_b0 + 1;
            lVar15 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar2 = (int *)((longlong)local_b0 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_b0 + 8))(local_b0,1);
              }
            }
          }
          param_2 = '\0';
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_98 + 1;
            lVar15 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            param_2 = cVar6;
            if ((int)lVar15 == 1) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar2 = (int *)((longlong)local_98 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_98 + 8))(local_98,1);
              }
            }
          }
        }
        plVar10 = local_100;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_100 + 1;
          lVar15 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            cVar6 = param_2;
            if (iVar3 != 1) goto LAB_140de75fc;
            goto LAB_140de75f1;
          }
        }
      }
    }
    else {
      local_res20 = 0;
      cVar6 = '\0';
      FUN_1404cf2e0(&local_118,0);
      if ((local_118 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*local_118 + 0x10))(local_118,2), cVar7 == '\0')) {
        bVar5 = true;
        local_res10 = 0;
      }
      else {
        local_138 = (longlong *)0x0;
        plVar10 = (longlong *)FMemory::Realloc(0,0x30,0);
        local_130 = 3;
        local_138 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          plVar10[1] = param_1;
          *plVar10 = (longlong)&PTR_GetPoolName_144553d80;
          plVar10[2] = (longlong)FUN_140e006d0;
          lVar11 = FDelegateHandle::GenerateNewID();
          plVar10[4] = lVar11;
          *plVar10 = (longlong)&PTR_GetPoolName_144553dc8;
        }
        puVar12 = (undefined8 *)(**(code **)(*local_118 + 0x138))(local_118,local_c8,&local_138);
        *(undefined8 *)(param_1 + 0x88) = *puVar12;
        if (local_130 == 0) {
LAB_140de73b6:
          if (local_138 != (longlong *)0x0) {
            FMemory::Free(local_138);
          }
        }
        else if (local_138 != (longlong *)0x0) {
          (**(code **)(*local_138 + 0x28))(local_138,0);
          if (local_138 != (longlong *)0x0) {
            local_138 = (longlong *)FMemory::Realloc(local_138,0,0);
          }
          local_130 = 0;
          goto LAB_140de73b6;
        }
        local_128[0] = 0;
        local_128[1] = 0;
        (**(code **)(*local_118 + 0x30))(local_118,lVar15,2,local_128);
        if (local_128[0] != 0) {
          FMemory::Free();
        }
        bVar5 = false;
      }
      plVar10 = local_110;
      param_2 = cVar6;
      bVar4 = bVar5;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        lVar15 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          local_100 = local_110;
          param_2 = '\0';
          if (iVar3 == 1) {
LAB_140de75f1:
            param_2 = cVar6;
            (**(code **)(*local_100 + 8))(local_100,1);
            bVar4 = bVar5;
          }
        }
      }
    }
LAB_140de75fc:
    plVar10 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    bVar16 = param_2 == '\0';
    uVar14 = local_res10;
  }
  *(undefined1 *)(lVar9 + 0x28) = 1;
  *(bool *)(lVar9 + 0x1e2) = !bVar16;
  *(bool *)(lVar9 + 0x1e3) = !bVar16;
LAB_140de7654:
  *(char *)(param_1 + 0x60) = param_2;
  if (((bVar4) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) &&
     (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))(), lVar9 != 0)) {
    plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x198))(plVar10);
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x50))(plVar10,"Enable_Cross_Platform_Notify_Response",1);
      (**(code **)(*plVar10 + 0x120))(plVar10,uVar14);
      (**(code **)(*plVar10 + 0x58))(plVar10);
    }
  }
  return;
}



// FUNCTION 140de7700 FUN_140de7700 body=318 status=ok
// SIG undefined FUN_140de7700(void)

void FUN_140de7700(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0x78);
    plVar1 = plVar7 + *(int *)(param_1 + 0x80);
    if (plVar7 != plVar1) {
      while ((longlong *)*plVar7 != param_2) {
        plVar7 = plVar7 + 1;
        if (plVar7 == plVar1) {
          return;
        }
      }
      (**(code **)(*param_2 + 0x2d8))(param_2);
      lVar2 = (longlong)*(int *)(param_1 + 0x80);
      if (*(int *)(param_1 + 0x80) != 0) {
        iVar8 = 0;
        bVar9 = (longlong *)**(undefined8 **)(param_1 + 0x78) != param_2;
        lVar4 = 0;
        iVar5 = 0;
        do {
          lVar4 = lVar4 + 1;
          iVar6 = iVar5 + 1;
          if (lVar4 < lVar2) {
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + lVar4 * 8);
            do {
              if (bVar9 != ((longlong *)*puVar3 != param_2)) break;
              iVar6 = iVar6 + 1;
              lVar4 = lVar4 + 1;
              puVar3 = puVar3 + 1;
            } while (lVar4 < lVar2);
          }
          if (bVar9 != false) {
            if (iVar8 != iVar5) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar8 * 8),
                         (void *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar5 * 8),
                         (longlong)(iVar6 - iVar5) << 3);
            }
            iVar8 = iVar8 + (iVar6 - iVar5);
          }
          bVar9 = (bool)(bVar9 ^ 1);
          iVar5 = iVar6;
        } while (lVar4 < lVar2);
        *(int *)(param_1 + 0x80) = iVar8;
      }
    }
  }
  return;
}



// FUNCTION 140de7840 FUN_140de7840 body=641 status=ok
// SIG undefined FUN_140de7840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140de7840(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  undefined8 *local_320;
  code **local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined2 local_2e8;
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [40];
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  longlong local_298;
  code *local_288 [2];
  longlong local_278 [4];
  longlong *local_258;
  int local_248;
  undefined1 local_238 [520];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  plVar6 = param_1 + 0x10;
  lVar3 = FWeakObjectPtr::Get(plVar6);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == (int)param_1[0x11]) || (local_308 = 0, param_1[0x12] == 0))
    goto LAB_140de7a55;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar6,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x11) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(plVar6);
    if (lVar3 == 0) goto LAB_140de7a55;
  }
  lVar4 = FUN_140600840();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_308 = 0;
    if ((param_1[0x25] == 0) ||
       (((*(int *)((longlong)param_1 + 0x14c) == 0 && (int)param_1[0x29] == 0) &&
        *(int *)((longlong)param_1 + 0x144) == 0) && (int)param_1[0x28] == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_258 = (longlong *)0x0;
      local_288[0] = AK::MemoryMgr::StartProfileThreadUsage;
      local_248 = 0;
      local_300 = 0xffffffff00000000;
      local_2f0 = 0;
      local_2e8 = 0;
      local_2f8 = 0;
      local_238[0] = 0;
      local_30 = 0;
      local_28 = 0;
      TSoftObjectPtr<UTexture2D>::TSoftObjectPtr<UTexture2D>(local_2d0,param_1 + 0x23);
      local_298 = param_1[0x2a];
      local_2a8 = (undefined4)param_1[0x28];
      uStack_2a4 = *(undefined4 *)((longlong)param_1 + 0x144);
      uStack_2a0 = (undefined4)param_1[0x29];
      uStack_29c = *(undefined4 *)((longlong)param_1 + 0x14c);
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      local_318 = local_288;
      local_320 = &local_2f0;
      local_328 = &local_300;
      FUN_1405f2e30(local_2e0,uVar5,local_2d0,local_238);
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_248 != 0) {
        plVar6 = local_278;
        if (local_258 != (longlong *)0x0) {
          plVar6 = local_258;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_258 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
LAB_140de7a55:
  cVar2 = FText::IsEmpty(param_1 + 0x20);
  if ((cVar2 == '\0') && (param_1[0x31] != 0)) {
    local_328 = (undefined8 *)0x0;
    FUN_140de6a50(param_1[0x31],param_1 + 10,param_1 + 0x20,0x40a00000);
  }
  (**(code **)(*param_1 + 0x2e0))(param_1);
  return;
}



// FUNCTION 140de7ad0 FUN_140de7ad0 body=57 status=ok
// SIG undefined FUN_140de7ad0(void)

void FUN_140de7ad0(longlong param_1)

{
  FUN_140de7840();
  if (*(longlong *)(param_1 + 0x188) != 0) {
    *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x70);
    return;
  }
  *(undefined4 *)(param_1 + 0x46c) = 0;
  return;
}



// FUNCTION 140de7bc0 FUN_140de7bc0 body=544 status=ok
// SIG undefined FUN_140de7bc0(void)

void FUN_140de7bc0(longlong param_1,longlong *param_2,char param_3)

{
  void *_Src;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 local_res20 [8];
  undefined2 *local_68;
  int local_60;
  int local_5c;
  longlong local_58 [2];
  longlong local_48 [2];
  
  cVar1 = FUN_140de4fb0();
  if (cVar1 != '\0') {
    plVar11 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x88);
    }
    if (plVar11 != (longlong *)0x0) {
      uVar4 = FDateTime::Now(local_res20);
      puVar5 = (undefined8 *)FDateTime::ToString(uVar4,local_48);
      puVar6 = (undefined8 *)(**(code **)(*plVar11 + 0x28))(plVar11,local_58);
      iVar12 = *(int *)(puVar6 + 1);
      if (iVar12 < 2) {
        puVar10 = (undefined2 *)*puVar5;
        *puVar5 = 0;
        iVar12 = *(int *)(puVar5 + 1);
        puVar5[1] = 0;
      }
      else {
        iVar9 = *(int *)(puVar5 + 1) + -1;
        if (*(int *)(puVar5 + 1) == 0) {
          iVar9 = 0;
        }
        if ((iVar12 != 0) || (iVar2 = 1, iVar9 == 0)) {
          iVar2 = 0;
        }
        local_68 = (undefined2 *)*puVar6;
        *puVar6 = 0;
        local_5c = *(int *)((longlong)puVar6 + 0xc);
        puVar6[1] = 0;
        local_60 = iVar12;
        if (local_5c < iVar12 + iVar9 + iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
        }
        iVar2 = local_60;
        _Src = (void *)*puVar5;
        puVar10 = local_68;
        iVar12 = local_60;
        if (iVar9 != 0) {
          lVar8 = (longlong)local_60;
          local_60 = local_60 + (uint)(local_60 == 0) + iVar9;
          if (local_5c < local_60) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar2);
          }
          iVar12 = local_60;
          puVar10 = local_68;
          puVar7 = local_68 + (lVar8 - (ulonglong)(iVar2 != 0));
          _guard_xfg_dispatch_icall_nop(puVar7,_Src,(longlong)iVar9 * 2);
          puVar7[iVar9] = 0;
        }
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      puVar7 = &DAT_143f3eda8;
      if (iVar12 != 0) {
        puVar7 = puVar10;
      }
      uVar3 = FUN_140438070(puVar7);
      (**(code **)(*param_2 + 0x2c8))(param_2,uVar3);
      if (param_3 == '\0') {
        iVar12 = *(int *)(param_1 + 0x50);
        *(int *)(param_1 + 0x50) = iVar12 + 1;
        if (*(int *)(param_1 + 0x54) < iVar12 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x48,iVar12);
        }
        *(longlong **)(*(longlong *)(param_1 + 0x48) + (longlong)iVar12 * 8) = param_2;
      }
      else {
        FUN_140de3960(param_1,param_2);
      }
      if (puVar10 != (undefined2 *)0x0) {
        FMemory::Free(puVar10);
      }
    }
  }
  return;
}



// FUNCTION 140de7df0 FUN_140de7df0 body=285 status=ok
// SIG undefined FUN_140de7df0(void)

void FUN_140de7df0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  lVar5 = lVar3 + 400;
  lVar4 = FWeakObjectPtr::Get(lVar5);
  lVar8 = 0;
  lVar7 = lVar8;
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar3 + 0x198)) || (*(longlong *)(lVar3 + 0x1a0) == 0))
    goto LAB_140de7ef1;
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x198) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar5);
    if (lVar4 == 0) goto LAB_140de7ef1;
  }
  lVar5 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar6 = FUN_1428dfc70();
    lVar5 = lVar4;
    do {
      lVar7 = lVar4;
      if (lVar5 == lVar6) break;
      lVar5 = *(longlong *)(lVar5 + 0x30);
      lVar7 = lVar8;
    } while (lVar5 != 0);
  }
LAB_140de7ef1:
  *(longlong *)(lVar3 + 0x338) = lVar7;
  return;
}



// FUNCTION 140de7f20 FUN_140de7f20 body=285 status=ok
// SIG undefined FUN_140de7f20(void)

void FUN_140de7f20(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  lVar5 = lVar3 + 0x330;
  lVar4 = FWeakObjectPtr::Get(lVar5);
  lVar8 = 0;
  lVar7 = lVar8;
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar3 + 0x338)) || (*(longlong *)(lVar3 + 0x340) == 0))
    goto LAB_140de8021;
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x338) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar5);
    if (lVar4 == 0) goto LAB_140de8021;
  }
  lVar5 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar6 = FUN_1428dfc70();
    lVar5 = lVar4;
    do {
      lVar7 = lVar4;
      if (lVar5 == lVar6) break;
      lVar5 = *(longlong *)(lVar5 + 0x30);
      lVar7 = lVar8;
    } while (lVar5 != 0);
  }
LAB_140de8021:
  *(longlong *)(lVar3 + 0x4c0) = lVar7;
  return;
}



// FUNCTION 140de8050 FUN_140de8050 body=198 status=ok
// SIG undefined FUN_140de8050(void)

void FUN_140de8050(longlong param_1,char param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar1 = (int)param_3[1], iVar1 != 0)) {
    lVar5 = 0;
    if (iVar1 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = rand();
      iVar4 = (int)((float)iVar3 * 3.051851e-05 * (float)iVar1);
      iVar3 = iVar1 + -1;
      if (iVar4 <= iVar1 + -1) {
        iVar3 = iVar4;
      }
    }
    FString::operator=(*(longlong *)(param_1 + 8) + 0x478,(longlong)iVar3 * 0x10 + *param_3);
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(lVar2 + 0x470) != 0) {
      if (*(longlong *)(lVar2 + 0x188) != 0) {
        lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x188) + 0x100);
      }
      if (lVar5 != 0) {
        FUN_1414d1ba0(lVar5,lVar2 + 0x478);
      }
    }
  }
  return;
}



// FUNCTION 140de8120 Execute body=48 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UAISystemBase,TTypeWrapper<void>___cdecl(FName)>::Execute
               (longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140de814d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 140de8150 Execute body=64 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UReplicationGraphNode_ConnectionDormanyNode,TTypeWrapper<void>___cdecl(FName,UWorld_*)>
     ::Execute(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140de818d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,*(code **)(param_1 + 0x10));
  return;
}



// FUNCTION 140de8190 FUN_140de8190 body=105 status=ok
// SIG undefined FUN_140de8190(void)

void FUN_140de8190(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140de81f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140de8200 FUN_140de8200 body=88 status=ok
// SIG undefined FUN_140de8200(void)

void FUN_140de8200(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140de8255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 140de8260 Execute body=86 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,ULobbyNetworkState,TTypeWrapper<void>___cdecl(bool,int)>::
     Execute(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140de82b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 140de82c0 FUN_140de82c0 body=286 status=ok
// SIG undefined FUN_140de82c0(void)

ulonglong FUN_140de82c0(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4,
                       undefined1 param_5,undefined8 param_6)

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



// FUNCTION 140de83e0 FUN_140de83e0 body=20 status=ok
// SIG undefined FUN_140de83e0(void)

undefined1 FUN_140de83e0(longlong param_1)

{
  FUN_140de1c10(param_1 + 8);
  return 1;
}



// FUNCTION 140de8400 FUN_140de8400 body=287 status=ok
// SIG undefined FUN_140de8400(void)

undefined8 FUN_140de8400(longlong param_1)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 == '\0') {
    return 1;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  lVar5 = lVar3 + 400;
  lVar4 = FWeakObjectPtr::Get(lVar5);
  lVar8 = 0;
  lVar7 = lVar8;
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar3 + 0x198)) || (*(longlong *)(lVar3 + 0x1a0) == 0))
    goto LAB_140de8501;
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x198) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar5);
    if (lVar4 == 0) goto LAB_140de8501;
  }
  lVar5 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar6 = FUN_1428dfc70();
    lVar5 = lVar4;
    do {
      lVar7 = lVar4;
      if (lVar5 == lVar6) break;
      lVar5 = *(longlong *)(lVar5 + 0x30);
      lVar7 = lVar8;
    } while (lVar5 != 0);
  }
LAB_140de8501:
  *(longlong *)(lVar3 + 0x338) = lVar7;
  return 1;
}



// FUNCTION 140de8520 FUN_140de8520 body=20 status=ok
// SIG undefined FUN_140de8520(void)

undefined1 FUN_140de8520(longlong param_1)

{
  FUN_140de2110(param_1 + 8);
  return 1;
}



// FUNCTION 140de8540 FUN_140de8540 body=287 status=ok
// SIG undefined FUN_140de8540(void)

undefined8 FUN_140de8540(longlong param_1)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 == '\0') {
    return 1;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  lVar5 = lVar3 + 0x330;
  lVar4 = FWeakObjectPtr::Get(lVar5);
  lVar8 = 0;
  lVar7 = lVar8;
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar3 + 0x338)) || (*(longlong *)(lVar3 + 0x340) == 0))
    goto LAB_140de8641;
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x338) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar5);
    if (lVar4 == 0) goto LAB_140de8641;
  }
  lVar5 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar6 = FUN_1428dfc70();
    lVar5 = lVar4;
    do {
      lVar7 = lVar4;
      if (lVar5 == lVar6) break;
      lVar5 = *(longlong *)(lVar5 + 0x30);
      lVar7 = lVar8;
    } while (lVar5 != 0);
  }
LAB_140de8641:
  *(longlong *)(lVar3 + 0x4c0) = lVar7;
  return 1;
}



// FUNCTION 140de8660 FUN_140de8660 body=20 status=ok
// SIG undefined FUN_140de8660(void)

undefined1 FUN_140de8660(longlong param_1)

{
  FUN_140de2600(param_1 + 8);
  return 1;
}



// FUNCTION 140de8680 FUN_140de8680 body=231 status=ok
// SIG undefined FUN_140de8680(void)

undefined8 FUN_140de8680(longlong param_1,char param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_2 == '\0') {
    return 1;
  }
  iVar1 = (int)param_3[1];
  if (iVar1 == 0) {
    return 1;
  }
  lVar5 = 0;
  if (iVar1 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = rand();
    iVar4 = (int)((float)iVar3 * 3.051851e-05 * (float)iVar1);
    iVar3 = iVar1 + -1;
    if (iVar4 <= iVar1 + -1) {
      iVar3 = iVar4;
    }
  }
  FString::operator=(*(longlong *)(param_1 + 8) + 0x478,(longlong)iVar3 * 0x10 + *param_3);
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar2 + 0x470) != 0) {
    if (*(longlong *)(lVar2 + 0x188) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x188) + 0x100);
    }
    if (lVar5 != 0) {
      FUN_1414d1ba0(lVar5,lVar2 + 0x478);
    }
  }
  return 1;
}



// FUNCTION 140de8770 FUN_140de8770 body=117 status=ok
// SIG undefined FUN_140de8770(void)

undefined1
FUN_140de8770(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3,param_4,param_5);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140de87f0 ExecuteIfSafe body=91 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,UAISystemBase,void___cdecl(FName)>::ExecuteIfSafe
          (longlong param_1,undefined8 param_2)

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



// FUNCTION 140de8850 ExecuteIfSafe body=91 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,UReplicationGraphNode_ConnectionDormanyNode,void___cdecl(FName,UWorld_*)>
::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  uVar2 = (undefined1)lVar3;
  if (lVar3 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))(uVar1,param_2,param_3);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140de88b0 FUN_140de88b0 body=133 status=ok
// SIG undefined FUN_140de88b0(void)

bool FUN_140de88b0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 140de8940 FUN_140de8940 body=114 status=ok
// SIG undefined FUN_140de8940(void)

bool FUN_140de8940(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3);
  }
  return lVar1 != 0;
}



// FUNCTION 140de89c0 ExecuteIfSafe body=112 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,ULobbyNetworkState,void___cdecl(bool,int)>::ExecuteIfSafe
               (longlong param_1,undefined1 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3);
  }
  return lVar1 != 0;
}



// FUNCTION 140de8a30 FUN_140de8a30 body=379 status=ok
// SIG undefined FUN_140de8a30(void)

void FUN_140de8a30(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_58;
  undefined8 local_54;
  longlong local_48;
  longlong local_40 [5];
  
  local_54 = 0;
  local_58 = 0xffffffff;
  local_48 = *param_2;
  FString::FString(local_40,param_2 + 1);
  if ((local_48 != 0) && (lVar2 = FUN_1405ec200(&local_58), lVar2 != 0)) {
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
      lVar4 = UCompositingElementInput::GetPrivateStaticClass();
      lVar3 = lVar2;
      do {
        if (lVar3 == lVar4) {
          uVar5 = GetTransientPackage();
          lVar2 = NewObject<USaveGame>(uVar5,lVar2,0,0,0,0,0);
          if (lVar2 != 0) {
            FUN_1414d1a80(lVar2);
            FUN_1414d1ac0(lVar2,*(undefined8 *)(param_1 + 0x470),param_3,param_4);
            UObject::ConditionalBeginDestroy(lVar2);
          }
          break;
        }
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  if (param_2[1] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140de8bb0 FUN_140de8bb0 body=25 status=ok
// SIG undefined FUN_140de8bb0(void)

undefined1 FUN_140de8bb0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 140de8bd0 FUN_140de8bd0 body=1052 status=ok
// SIG undefined FUN_140de8bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140de8bd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_138 [32];
  longlong local_118 [2];
  longlong local_108 [2];
  longlong local_f8 [2];
  undefined8 local_e8;
  undefined1 local_d8 [16];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar9 = (longlong *)FUN_1424503b0(*(undefined8 *)(param_1 + 0xf0));
  if (plVar9 != (longlong *)0x0) {
    lVar10 = FUN_14145f370();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_e8 = FUN_1414b0d60();
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x628))(plVar9,local_e8);
      if (plVar9 != (longlong *)0x0) {
        local_50 = *(undefined8 *)(param_2 + 8);
        local_98 = &local_88;
        local_80 = 0x3000000000000;
        local_88 = 0;
        plVar13 = (longlong *)plVar9[0x31];
        plVar12 = plVar13 + (longlong)(int)plVar9[0x32] * 4;
        local_90 = local_50;
        if (plVar13 != plVar12) {
          do {
            if (*plVar13 != 0) {
              FUN_142de2730(local_d8);
              cVar5 = FUN_140e4de30(plVar9,plVar13,local_d8);
              if (cVar5 != '\0') {
                uVar6 = (**(code **)(*(longlong *)*plVar13 + 0x278))();
                FString::PrintfImpl(local_118,&DAT_144555214,uVar6);
                uVar11 = FText::ToString(local_b8);
                FUN_142ab6360(&local_98,local_118,uVar11);
                if (local_118[0] != 0) {
                  FMemory::Free();
                }
              }
              plVar4 = local_b0;
              if (local_b0 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_b0 + 1;
                lVar10 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_b0)(local_b0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar4 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar4 + 8))(plVar4,1);
                  }
                }
              }
              plVar4 = local_c8;
              if (local_c8 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_c8 + 1;
                lVar10 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_c8)(local_c8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar4 + 0xc);
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar4 + 8))(plVar4,1);
                  }
                }
              }
            }
            plVar13 = plVar13 + 4;
          } while (plVar13 != plVar12);
          local_50 = *(undefined8 *)(param_2 + 8);
        }
        local_78 = &local_68;
        local_60 = 0x3000000000000;
        local_68 = 0;
        plVar12 = (longlong *)plVar9[0x37];
        plVar13 = plVar12 + (longlong)(int)plVar9[0x38] * 3;
        local_70 = local_50;
        if (plVar12 != plVar13) {
          do {
            if ((longlong *)*plVar12 != (longlong *)0x0) {
              uVar6 = (**(code **)(*(longlong *)*plVar12 + 0x278))();
              FString::PrintfImpl(local_108,&DAT_144555a04,uVar6);
              FUN_142ab6020(&local_78,local_108,(char)plVar12[2]);
              if (local_108[0] != 0) {
                FMemory::Free();
              }
            }
            plVar12 = plVar12 + 3;
          } while (plVar12 != plVar13);
          local_50 = *(undefined8 *)(param_2 + 8);
        }
        local_58 = &local_48;
        local_40 = 0x3000000000000;
        local_48 = 0;
        plVar13 = (longlong *)plVar9[0x3e];
        plVar12 = plVar13 + (longlong)(int)plVar9[0x3f] * 2;
        for (; plVar13 != plVar12; plVar13 = plVar13 + 2) {
          if ((longlong *)*plVar13 != (longlong *)0x0) {
            uVar6 = (**(code **)(*(longlong *)*plVar13 + 0x278))();
            FString::PrintfImpl(local_f8,&DAT_1445561c4,uVar6);
            FUN_142ab6080(&local_58,local_f8,(int)plVar13[1]);
            if (local_f8[0] != 0) {
              FMemory::Free();
            }
          }
        }
        FUN_142ab6190(param_2,"guardian_rank",(int)plVar9[0x2f]);
        FUN_142ab6190(param_2,"available_tokens",*(undefined4 *)((longlong)plVar9 + 0x17c));
        FUN_142ab62a0(param_2,"guardian_experience",plVar9[0x30]);
        iVar7 = (**(code **)(*plVar9 + 0x468))(plVar9);
        iVar8 = iVar7 + -1;
        if (iVar7 + -1 < 1) {
          iVar8 = 0;
        }
        uVar11 = FUN_140e476d0(plVar9,iVar8);
        FUN_142ab62a0(param_2,"previous_rank_experience",uVar11);
        uVar6 = (**(code **)(*plVar9 + 0x468))(plVar9);
        uVar11 = FUN_140e476d0(plVar9,uVar6);
        FUN_142ab62a0(param_2,"next_rank_experience",uVar11);
        UE4Function_Private::
        TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
        ::Call(param_2,"rank_rewards_value",&local_98);
        UE4Function_Private::
        TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
        ::Call(param_2,"rank_perks_unlocked",&local_78);
        UE4Function_Private::
        TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
        ::Call(param_2,"rank_reward_category_tokens",&local_58);
      }
    }
  }
  return;
}



// FUNCTION 140de8ff0 FUN_140de8ff0 body=996 status=ok
// SIG undefined FUN_140de8ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140de8ff0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_6d8 [32];
  longlong local_6b8;
  undefined8 local_6b0;
  undefined4 local_6a8 [2];
  undefined8 *local_6a0;
  undefined8 **local_698;
  longlong local_690;
  undefined8 local_688;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined1 local_638 [24];
  longlong local_620;
  longlong local_610;
  undefined8 *local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 *local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined1 local_5b8;
  undefined1 local_5b0 [608];
  undefined8 local_350;
  undefined8 local_348;
  undefined1 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_304;
  longlong local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_6d8;
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if ((lVar5 != 0) && (lVar5 = UWorld::GetGameState<APVPGameState>(lVar5), lVar5 != 0)) {
    lVar1 = lVar5 + 0x670;
    local_678 = 0;
    local_670 = 0;
    local_668 = 0;
    uStack_660 = 0;
    local_658 = 0;
    uStack_650 = 0;
    local_648 = 0;
    uStack_640 = 0;
    local_690 = 0;
    local_688 = 0;
    FUN_140b5b5c0(lVar1,&local_678,&local_690,0xffffffff);
    lVar6 = FUN_140b73d00(&local_678,local_638);
    puVar2 = *(undefined8 **)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    if (local_610 != 0) {
      FMemory::Free();
    }
    if (local_620 != 0) {
      FMemory::Free();
    }
    FUN_140b4e2b0(local_638);
    local_600 = &local_5f0;
    local_5f8 = *(undefined8 *)(param_2 + 8);
    local_5f0 = 0;
    local_5e8 = 0x3000000000000;
    local_6a0 = &local_5c0;
    local_698 = &local_600;
    local_5b8 = 1;
    local_350 = 0;
    local_348 = 0;
    local_340 = 1;
    local_338 = 0;
    local_330 = 0;
    local_318 = 0;
    local_310 = 0;
    local_308 = 0xffffffff;
    local_304 = 0;
    local_2f8 = 0;
    local_2f0 = 0;
    local_2e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_40 = 0;
    local_38 = 0;
    local_5c0 = param_3;
    FUN_140dd7e60(&local_6a0,*puVar2);
    FUN_140dd7e60(&local_6a0,puVar2[1]);
    FUN_140dd7e60(&local_6a0,puVar2[2]);
    FUN_140dd7e60(&local_6a0,puVar2[3]);
    FUN_140dd7e60(&local_6a0,puVar2[4]);
    FUN_140dd7e60(&local_6a0,puVar2[5]);
    local_6b8 = 0;
    local_6b0 = 0;
    local_6a8[0] = *(undefined4 *)(lVar5 + 0x690);
    FUN_140b70560(lVar1,local_6a8,&local_6b8);
    local_5e0 = &local_5d0;
    local_5d8 = *(undefined8 *)(param_2 + 8);
    local_5d0 = 0;
    local_5c8 = 0x4000000000000;
    lVar6 = (longlong)(int)local_6b0 * 0x38 + local_6b8;
    for (lVar5 = local_6b8; lVar5 != lVar6; lVar5 = lVar5 + 0x38) {
      uVar4 = FUN_140def950(lVar5);
      FUN_142ab4ed0(&local_5e0,uVar4);
    }
    uVar3 = FUN_1407c3030(lVar1);
    FUN_142ab6050(param_2,"is_active",uVar3);
    uVar4 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(lVar1);
    FUN_142ab6190(param_2,"mayhem_level",uVar4);
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(param_2,"core_modifiers",&local_600);
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(param_2,"modifier_sets_hashes",&local_5e0);
    if ((int)local_6b0 != 0) {
      plVar7 = (longlong *)(local_6b8 + 0x18);
      iVar8 = (int)local_6b0;
      do {
        if (plVar7[2] != 0) {
          FMemory::Free();
        }
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        FUN_140b4e2b0(plVar7 + -3);
        plVar7 = plVar7 + 7;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (local_6b8 != 0) {
      FMemory::Free();
    }
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (local_d0 != 0) {
      FMemory::Free();
    }
    if (local_1e0 != 0) {
      FMemory::Free();
    }
    local_2f0 = 0;
    if (local_2f8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_338);
    FUN_14099aac0(local_5b0);
    FMemory::Free(puVar2);
    if (local_690 != 0) {
      FMemory::Free();
    }
    FUN_140b4e2b0(&local_678);
  }
  return;
}



// FUNCTION 140de93e0 FUN_140de93e0 body=4835 status=ok
// SIG undefined FUN_140de93e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140de9f6b) */
/* WARNING: Removing unreachable block (ram,0x000140de9f20) */
/* WARNING: Removing unreachable block (ram,0x000140de9fc0) */

void FUN_140de93e0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong **pplVar18;
  longlong lVar19;
  longlong *plVar20;
  void **ppvVar21;
  undefined8 *puVar22;
  int *piVar23;
  int *piVar24;
  longlong *plVar25;
  uint uVar26;
  undefined1 auStack_808 [32];
  int local_7e8;
  uint local_7d8;
  undefined8 local_7d0;
  int local_7c8 [2];
  undefined8 local_7c0;
  undefined4 local_7b8;
  undefined8 local_7b0;
  longlong *local_7a8;
  longlong *local_7a0;
  longlong *local_798;
  longlong *local_790;
  int *local_788;
  undefined8 local_780;
  int *local_778;
  int local_768;
  undefined4 local_764;
  longlong local_760;
  ulonglong local_758;
  longlong local_750;
  longlong local_748;
  longlong local_740;
  undefined8 local_738;
  byte local_730;
  byte bStack_72f;
  undefined1 uStack_72e;
  undefined1 uStack_72d;
  int iStack_72c;
  int local_728;
  int iStack_724;
  int local_720 [2];
  longlong local_718;
  undefined8 local_710;
  undefined1 local_708;
  undefined4 *local_6f8;
  undefined8 *local_6f0;
  undefined8 local_6e8;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined4 local_6d8 [2];
  void *local_6d0;
  int local_6c8;
  undefined4 local_6c4;
  void *local_6c0;
  int local_6b8;
  undefined4 uStack_6b4;
  longlong *local_6b0;
  int local_6a8;
  undefined4 uStack_6a4;
  undefined4 *local_6a0;
  undefined8 **local_698;
  undefined1 local_690 [8];
  longlong *local_688;
  longlong local_680;
  undefined1 local_678 [8];
  longlong local_670;
  undefined1 local_668 [8];
  undefined8 *local_660 [2];
  undefined4 *local_650;
  undefined8 **local_648;
  undefined4 *local_640;
  longlong *local_638;
  longlong local_630 [2];
  longlong *local_620;
  undefined4 local_618;
  undefined4 *local_610;
  undefined8 **local_608;
  undefined8 *local_600;
  longlong *local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  longlong *local_5e0;
  undefined1 local_5d8;
  undefined1 local_5d0 [608];
  undefined8 local_370;
  undefined8 local_368;
  undefined1 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 local_324;
  longlong local_318;
  undefined4 local_310;
  undefined8 local_308;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_808;
  plVar25 = (longlong *)0x0;
  uVar9 = 0;
  local_7d8 = 0;
  local_6f8 = param_2;
  plVar10 = (longlong *)FUN_1424503b0(param_1[0x1e]);
  if (plVar10 != (longlong *)0x0) {
    lVar11 = FUN_14145f370();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140de9466;
  }
  plVar10 = plVar25;
LAB_140de9466:
  plVar12 = (longlong *)FUN_142dccd00(plVar10);
  if (plVar12 != (longlong *)0x0) {
    local_790 = plVar12;
    lVar11 = FUN_1413ffe00();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar13 = FUN_1414aa4c0();
      plVar14 = (longlong *)(**(code **)(*plVar12 + 0x628))(plVar12,uVar13);
      uVar13 = FUN_1412e9ee0();
      local_670 = (**(code **)(*plVar12 + 0x628))(plVar12,uVar13);
      uVar13 = (**(code **)(*param_1 + 0x148))(param_1);
      cVar5 = FUN_140adac00(uVar13);
      if (cVar5 == '\0') {
        lVar11 = (**(code **)(plVar12[0x1b0] + 0x18))();
      }
      else {
        lVar11 = FUN_140c430a0(plVar12,3);
      }
      if (lVar11 != 0) {
        uVar6 = FUN_140d00180(plVar10);
        *param_2 = uVar6;
        if (plVar14 == (longlong *)0x0) {
          uVar6 = *(undefined4 *)((longlong)param_1 + 0x19c);
        }
        else {
          uVar6 = (undefined4)plVar14[0x3b];
        }
        param_2[1] = uVar6;
        if (plVar14 == (longlong *)0x0) {
          uVar6 = (undefined4)param_1[0x34];
        }
        else {
          uVar6 = (**(code **)(*plVar14 + 0x408))(plVar14);
        }
        param_2[2] = uVar6;
        uVar6 = FUN_142b47070(lVar11);
        param_2[3] = uVar6;
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
          uVar6 = FUN_142ff7c90(lVar11,*(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2e0))
          ;
          param_2[4] = uVar6;
        }
        plVar10 = (longlong *)(param_2 + 0xe);
        local_7a0 = plVar10;
        TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty(plVar10,0);
        plVar12 = (longlong *)(param_2 + 6);
        local_7d0 = plVar12;
        FUN_140de6f40(plVar12,0);
        plVar14 = (longlong *)(param_2 + 10);
        param_2[0xc] = 0;
        local_7a8 = plVar14;
        if (param_2[0xd] != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(plVar14,0);
        }
        TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
                  (param_2 + 0x24,0);
        plVar15 = (longlong *)(param_2 + 0x38);
        param_2[0x3a] = 0;
        local_798 = plVar15;
        if (param_2[0x3b] != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15,0);
        }
        puVar1 = local_6f8;
        local_6f8[0x3e] = 0;
        if (local_6f8[0x3f] != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(local_6f8 + 0x3c,0);
        }
        local_688 = (longlong *)(puVar1 + 0x42);
        TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
        ::Empty(local_688,0);
        piVar24 = *(int **)(lVar11 + 0x228);
        local_778 = piVar24 + (longlong)*(int *)(lVar11 + 0x230) * 0x10;
        if (piVar24 != local_778) {
          do {
            plVar12 = *(longlong **)(piVar24 + 8);
            if (plVar12 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
              plVar14 = plVar25;
            }
            else {
              uVar13 = FUN_14301f8f0();
              plVar14 = (longlong *)(**(code **)(*plVar12 + 0x628))(plVar12,uVar13);
              plVar12 = *(longlong **)(piVar24 + 8);
            }
            plVar15 = plVar25;
            if (plVar12 != (longlong *)0x0) {
              uVar13 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
              plVar15 = (longlong *)(**(code **)(*plVar12 + 0x628))(plVar12,uVar13);
            }
            if (plVar14 == (longlong *)0x0) {
              plVar12 = local_7d0;
              if (*(longlong **)(piVar24 + 4) != (longlong *)0x0) {
                local_7c8[0] = (**(code **)(**(longlong **)(piVar24 + 4) + 0x278))();
                local_788 = local_7c8;
                local_780 = piVar24 + 6;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_&&>_>
                          (plVar10,(longlong)&local_7b0 + 4,&local_788,0);
                plVar12 = local_7d0;
              }
            }
            else {
              plVar12 = (longlong *)operator_new(0x28);
              plVar10 = plVar25;
              if (plVar12 != (longlong *)0x0) {
                *plVar12 = 0;
                plVar12[1] = 0x10000;
                plVar12[2] = 0;
                plVar12[3] = 0;
                plVar12[4] = 0;
                plVar10 = plVar12;
              }
              local_600 = &local_5f0;
              local_5e8 = 0x3000000000000;
              local_5f0 = 0;
              local_5f8 = plVar10;
              (**(code **)(*plVar14 + 0x448))(plVar14,&local_600);
              local_768 = piVar24[0xb];
              local_760 = *(longlong *)(piVar24 + 8);
              local_758 = 0;
              local_750 = 0;
              local_748 = 0;
              local_740 = 0;
              local_738 = 0;
              local_730 = 0;
              bStack_72f = 0;
              uStack_72e = 0;
              iStack_72c = 0;
              local_728 = 0;
              iStack_724 = 0;
              local_720[0] = 0;
              local_718 = 0;
              local_710 = 0;
              local_708 = 0;
              lVar11 = FUN_142ff9ec0(piVar24);
              if (lVar11 == 0) {
                local_738 = 0;
              }
              else {
                lVar11 = FUN_142ff9ec0(piVar24);
                local_738 = *(undefined8 *)(lVar11 + 0x1d8);
              }
              FUN_142ab6cb0(&local_600,"SerialNumber",&local_758);
              plVar12 = (longlong *)FUN_142ff5d60(plVar14,&local_6a0);
              if (&local_748 != plVar12) {
                if (local_748 != 0) {
                  FMemory::Free();
                }
                local_748 = *plVar12;
                *plVar12 = 0;
                local_740 = plVar12[1];
                plVar12[1] = 0;
              }
              if (local_6a0 != (undefined4 *)0x0) {
                FMemory::Free();
              }
              local_730 = *(byte *)(piVar24 + 0xc) >> 2 & 1;
              bStack_72f = *(byte *)(piVar24 + 0xc) >> 1 & 1;
              uStack_72e = plVar15 != (longlong *)0x0;
              FUN_142ab69b0(&local_600,"CurrentTrinketPartHash",&iStack_72c);
              FUN_142ab69b0(&local_600,"CurrentSkinPartHash",&local_728);
              FUN_142ab69b0(&local_600,"CurrentMayhemPartHash",&iStack_724);
              FUN_142ab69b0(&local_600,"CurrentMayhemPartUIStatHash",local_720);
              FUN_142ab6640(&local_600,&local_718);
              plVar12 = local_7d0;
              iVar8 = (int)local_7d0[1];
              *(int *)(local_7d0 + 1) = iVar8 + 1;
              if (*(int *)((longlong)local_7d0 + 0xc) < iVar8 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
                ResizeGrow(local_7d0,iVar8);
              }
              piVar23 = (int *)((longlong)iVar8 * 0x68 + *plVar12);
              *piVar23 = local_768;
              *(longlong *)(piVar23 + 2) = local_760;
              FString::FString(piVar23 + 4,&local_758);
              FString::FString(piVar23 + 8,&local_748);
              *(undefined8 *)(piVar23 + 0xc) = local_738;
              *(byte *)(piVar23 + 0xe) = local_730;
              *(byte *)((longlong)piVar23 + 0x39) = bStack_72f;
              *(undefined1 *)((longlong)piVar23 + 0x3a) = uStack_72e;
              piVar23[0xf] = iStack_72c;
              piVar23[0x10] = local_728;
              piVar23[0x11] = iStack_724;
              piVar23[0x12] = local_720[0];
              FString::FString(piVar23 + 0x14,&local_718);
              *(undefined1 *)(piVar23 + 0x18) = local_708;
              if (local_718 != 0) {
                FMemory::Free();
              }
              if (local_748 != 0) {
                FMemory::Free();
              }
              if (local_758 != 0) {
                FMemory::Free();
              }
              if (plVar10 != (longlong *)0x0) {
                if (*plVar10 != 0) {
                  do {
                    pvVar2 = (void *)*plVar10;
                    if (pvVar2 == (void *)plVar10[2]) break;
                    lVar11 = *(longlong *)((longlong)pvVar2 + 0x10);
                    free(pvVar2);
                    *plVar10 = lVar11;
                  } while (lVar11 != 0);
                  lVar11 = *plVar10;
                  if ((lVar11 != 0) && (lVar11 == plVar10[2])) {
                    *(undefined8 *)(lVar11 + 8) = 0;
                  }
                }
                FMemory::operator_delete(plVar10[4],1);
                FMemory::operator_delete(plVar10,0x28);
              }
              free((void *)0x0);
              FMemory::operator_delete(0,1);
              plVar10 = local_7a0;
            }
            piVar24 = piVar24 + 0x10;
            plVar15 = local_798;
            plVar14 = local_7a8;
          } while (piVar24 != local_778);
        }
        lVar16 = FUN_140c428a0(local_790);
        lVar11 = *(longlong *)(lVar16 + 0xb0);
        lVar16 = (longlong)*(int *)(lVar16 + 0xb8) * 0x40 + lVar11;
        for (; lVar11 != lVar16; lVar11 = lVar11 + 0x40) {
          plVar10 = (longlong *)*plVar12;
          plVar20 = plVar10 + (longlong)(int)plVar12[1] * 0xd;
          plVar17 = plVar25;
          if (plVar10 != plVar20) {
            do {
              plVar17 = plVar10;
              if (plVar10[1] == *(longlong *)(lVar11 + 0x10)) break;
              plVar10 = plVar10 + 0xd;
              plVar17 = plVar25;
            } while (plVar10 != plVar20);
          }
          if (*(longlong **)(lVar11 + 0x20) == (longlong *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)(**(longlong **)(lVar11 + 0x20) + 0x278))();
          }
          local_7b8 = CONCAT31(local_7b8._1_3_,*(undefined1 *)(lVar11 + 0x18));
          local_7c0 = (int *)CONCAT44(0xffffffff,uVar6);
          if (plVar17 != (longlong *)0x0) {
            local_7c0 = (int *)CONCAT44((int)*plVar17,uVar6);
          }
          iVar8 = (int)plVar14[1];
          *(int *)(plVar14 + 1) = iVar8 + 1;
          if (*(int *)((longlong)plVar14 + 0xc) < iVar8 + 1) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar14,iVar8);
          }
          lVar19 = *plVar14;
          *(int **)(lVar19 + (longlong)iVar8 * 0xc) = local_7c0;
          *(undefined4 *)(lVar19 + 8 + (longlong)iVar8 * 0xc) = local_7b8;
        }
        uVar13 = AGFireballProjectile::GetPrivateStaticClass();
        plVar10 = (longlong *)(**(code **)(*local_790 + 0x628))(local_790,uVar13);
        local_7a0 = plVar10;
        if (plVar10 != (longlong *)0x0) {
          local_764 = 0;
          local_760 = 0;
          local_758 = 0;
          local_750 = 0;
          local_748 = 0;
          local_740 = 0;
          local_738 = 0;
          local_730 = 0;
          bStack_72f = 0;
          uStack_72e = 0;
          uStack_72d = 0;
          iStack_72c = 0;
          local_728 = 0;
          iStack_724 = 0;
          FUN_1409b4c90(plVar10,&local_768);
          iVar8 = (int)local_758;
          lVar11 = (longlong)(int)local_758;
          puVar1 = local_6f8 + 0x24;
          local_6f8[0x22] = local_764;
          if ((int)(local_6f8[0x26] - local_6f8[0x31]) < (int)local_758) {
            FUN_1405effc0(puVar1,local_758 & 0xffffffff);
          }
          plVar12 = plVar25;
          if (0 < iVar8) {
            do {
              lVar16 = local_760 + (longlong)plVar12;
              plVar14 = (longlong *)FUN_140d3b240(lVar16);
              if (plVar14 != (longlong *)0x0) {
                local_7b0._0_4_ = *(int *)(lVar16 + 0x28);
                local_7c8[0] = (**(code **)(*plVar14 + 0x278))(plVar14);
                local_788 = local_7c8;
                local_780 = (int *)&local_7b0;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_&&>_>
                          (puVar1,(longlong)&local_7b0 + 4,&local_788,0);
              }
              lVar11 = lVar11 + -1;
              plVar12 = plVar12 + 7;
            } while (lVar11 != 0);
          }
          lVar16 = (longlong)(int)local_748 * 0x50 + local_750;
          puVar1 = local_6f8;
          for (lVar11 = local_750; local_6f8 = puVar1, lVar11 != lVar16; lVar11 = lVar11 + 0x50) {
            FUN_140d3a450(lVar11,&local_798);
            plVar12 = plVar25;
            if (local_798 != (longlong *)0x0) {
              plVar17 = (longlong *)FUN_14144bcb0();
              plVar14 = local_798;
joined_r0x000140de9c41:
              if (plVar14 != (longlong *)0x0) {
                if (plVar14 != plVar17) goto code_r0x000140de9c48;
                plVar14 = (longlong *)FUN_14144bcb0();
                for (plVar12 = local_798;
                    (plVar17 = plVar25, plVar12 != (longlong *)0x0 &&
                    (plVar17 = local_798, plVar12 != plVar14)); plVar12 = (longlong *)plVar12[6]) {
                }
                plVar12 = (longlong *)plVar17[0x1f];
                if ((longlong *)plVar17[0x1f] == (longlong *)0x0) {
                  (**(code **)(*plVar17 + 0x368))(plVar17);
                  plVar12 = (longlong *)plVar17[0x1f];
                }
              }
            }
            plVar14 = (longlong *)FUN_140d3bb40(lVar11);
            if (plVar14 == (longlong *)0x0) {
              local_7d0 = (longlong *)((ulonglong)local_7d0 & 0xffffffff00000000);
            }
            else {
              uVar6 = (**(code **)(*plVar14 + 0x278))(plVar14);
              local_7d0 = (longlong *)CONCAT44(local_7d0._4_4_,uVar6);
            }
            if (plVar12 == (longlong *)0x0) {
              local_7d0 = (longlong *)((ulonglong)local_7d0 & 0xffffffff);
            }
            else {
              uVar6 = FUN_1409ac010(plVar12);
              local_7d0 = (longlong *)CONCAT44(uVar6,(undefined4)local_7d0);
            }
            iVar8 = (int)plVar15[1];
            *(int *)(plVar15 + 1) = iVar8 + 1;
            if (*(int *)((longlong)plVar15 + 0xc) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar8);
            }
            *(longlong **)(*plVar15 + (longlong)iVar8 * 8) = local_7d0;
            puVar1 = local_6f8;
          }
          lVar16 = (longlong)(int)local_738 * 0x78 + local_740;
          for (lVar11 = local_740; lVar11 != lVar16; lVar11 = lVar11 + 0x78) {
            FUN_140d3a4e0(lVar11,&local_7d0);
            plVar10 = plVar25;
            if (local_7d0 != (longlong *)0x0) {
              plVar14 = (longlong *)UUGLoadoutBarUW::GetPrivateStaticClass();
              plVar12 = local_7d0;
joined_r0x000140de9d51:
              if (plVar12 != (longlong *)0x0) {
                if (plVar12 != plVar14) goto code_r0x000140de9d58;
                plVar12 = (longlong *)UUGLoadoutBarUW::GetPrivateStaticClass();
                for (plVar10 = local_7d0;
                    (plVar14 = plVar25, plVar10 != (longlong *)0x0 &&
                    (plVar14 = local_7d0, plVar10 != plVar12)); plVar10 = (longlong *)plVar10[6]) {
                }
                plVar10 = (longlong *)plVar14[0x1f];
                if ((longlong *)plVar14[0x1f] == (longlong *)0x0) {
                  (**(code **)(*plVar14 + 0x368))(plVar14);
                  plVar10 = (longlong *)plVar14[0x1f];
                }
              }
            }
            plVar12 = (longlong *)FUN_140d3ba80(lVar11);
            plVar14 = (longlong *)FUN_140d3a610(lVar11);
            if (plVar10 == (longlong *)0x0) {
              local_7c0 = (int *)((ulonglong)local_7c0 & 0xffffffff00000000);
            }
            else {
              uVar6 = FUN_1409ac010(plVar10);
              local_7c0 = (int *)CONCAT44(local_7c0._4_4_,uVar6);
            }
            if (plVar12 == (longlong *)0x0) {
              local_7c0 = (int *)((ulonglong)local_7c0 & 0xffffffff);
            }
            else {
              uVar6 = (**(code **)(*plVar12 + 0x278))(plVar12);
              local_7c0 = (int *)CONCAT44(uVar6,(undefined4)local_7c0);
            }
            uVar6 = uVar9;
            if (plVar14 != (longlong *)0x0) {
              uVar6 = (**(code **)(*plVar14 + 0x278))(plVar14);
            }
            iVar8 = puVar1[0x3e];
            puVar1[0x3e] = iVar8 + 1;
            if ((int)puVar1[0x3f] < iVar8 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(puVar1 + 0x3c,iVar8);
            }
            lVar19 = *(longlong *)(puVar1 + 0x3c);
            *(int **)(lVar19 + (longlong)iVar8 * 0xc) = local_7c0;
            *(undefined4 *)(lVar19 + 8 + (longlong)iVar8 * 0xc) = uVar6;
            plVar10 = local_7a0;
          }
          local_788 = (int *)0x0;
          iVar8 = *(int *)(plVar10[0x76] + 0xb8);
          pvVar2 = *(void **)(plVar10[0x76] + 0xb0);
          uVar4 = (ulonglong)local_780 >> 0x20;
          local_780 = (int *)CONCAT44((int)uVar4,iVar8);
          iVar7 = 0;
          if (iVar8 != 0) {
            TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_788,iVar8,0);
            _guard_xfg_dispatch_icall_nop(local_788,pvVar2,(longlong)iVar8 * 0x30);
            iVar7 = (int)local_780;
          }
          local_7c0 = local_788 + (longlong)iVar7 * 0xc;
          piVar24 = local_788;
          local_778 = local_788;
          if (local_788 != local_7c0) {
            do {
              plVar10 = *(longlong **)(piVar24 + 2);
              plVar12 = plVar10;
              plVar14 = plVar25;
              local_778 = piVar24;
              if (plVar10 != (longlong *)0x0) {
                lVar11 = FUN_14144ecc0();
                if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                    lVar11 + 0x88)) {
                  plVar12 = *(longlong **)(piVar24 + 2);
                  plVar14 = (longlong *)0x0;
                }
                else {
                  plVar12 = *(longlong **)(piVar24 + 2);
                  plVar14 = plVar10;
                }
              }
              local_7a0 = plVar14;
              if (plVar12 == (longlong *)0x0) {
                plVar15 = (longlong *)0x0;
                plVar10 = plVar12;
              }
              else {
                lVar11 = FUN_14144ee20();
                if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                    lVar11 + 0x88)) {
                  plVar15 = (longlong *)0x0;
                  plVar10 = *(longlong **)(piVar24 + 2);
                }
                else {
                  plVar10 = *(longlong **)(piVar24 + 2);
                  plVar15 = plVar12;
                }
              }
              plVar12 = plVar25;
              if (plVar10 != (longlong *)0x0) {
                lVar11 = FUN_14144ef80();
                if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (plVar12 = plVar10,
                   *(longlong *)
                    (*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                   lVar11 + 0x88)) {
                  plVar12 = (longlong *)0x0;
                }
              }
              if ((plVar14 == (longlong *)0x0) ||
                 (plVar10 = (longlong *)plVar14[0x11], plVar10 == (longlong *)0x0)) {
                lVar11 = 0;
              }
              else {
                lVar11 = plVar10[0x1f];
                if (lVar11 == 0) {
                  (**(code **)(*plVar10 + 0x368))(plVar10);
                  lVar11 = plVar10[0x1f];
                }
              }
              plVar10 = plVar25;
              if (plVar15 != (longlong *)0x0) {
                plVar10 = (longlong *)plVar15[0x11];
              }
              plVar17 = plVar25;
              if (plVar12 != (longlong *)0x0) {
                plVar17 = (longlong *)plVar12[0x11];
              }
              if (((lVar11 != 0) || (plVar10 != (longlong *)0x0)) || (plVar17 != (longlong *)0x0)) {
                if (plVar14 == (longlong *)0x0) {
                  if (plVar15 == (longlong *)0x0) {
                    lVar16 = *plVar12;
                  }
                  else {
                    lVar16 = *plVar15;
                    plVar12 = plVar15;
                  }
                }
                else {
                  lVar16 = *plVar14;
                  plVar12 = plVar14;
                }
                local_7b0._0_4_ = (**(code **)(lVar16 + 0x278))(plVar12);
                plVar12 = local_688;
                local_7a8 = &local_7b0;
                FUN_140dd9350(local_688,local_7c8,&local_7a8,0);
                lVar16 = *plVar12 + 8 + (longlong)local_7c8[0] * 0xb0;
                local_680 = lVar16;
                if (plVar10 == (longlong *)0x0) {
                  if (lVar11 == 0) {
                    iVar8 = (int)plVar17[0xd];
                    local_7d8 = local_7d8 | 4;
                    pvVar2 = (void *)plVar17[0xc];
                    local_6d0 = (void *)0x0;
                    local_6c8 = iVar8;
                    if (iVar8 == 0) {
                      local_6c4 = 0;
                    }
                    else {
                      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                                (&local_6d0,iVar8,0);
                      _guard_xfg_dispatch_icall_nop(local_6d0,pvVar2,(longlong)iVar8 << 3);
                    }
                    ppvVar21 = &local_6d0;
                  }
                  else {
                    iVar8 = *(int *)(lVar11 + 0x108);
                    pvVar2 = *(void **)(lVar11 + 0x100);
                    uVar26 = local_7d8 | 2;
                    local_6c0 = (void *)0x0;
                    local_6b8 = iVar8;
                    if (iVar8 == 0) {
                      uStack_6b4 = 0;
                      ppvVar21 = &local_6c0;
                      local_7d8 = uVar26;
                    }
                    else {
                      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                                (&local_6c0,iVar8,0);
                      _guard_xfg_dispatch_icall_nop(local_6c0,pvVar2,(longlong)iVar8 << 3);
                      ppvVar21 = &local_6c0;
                      local_7d8 = uVar26;
                    }
                  }
                  plVar10 = *ppvVar21;
                  uVar26 = local_7d8 | 8;
                  *ppvVar21 = (void *)0x0;
                  local_618 = *(undefined4 *)(ppvVar21 + 1);
                  pplVar18 = &local_620;
                  ppvVar21[1] = (void *)0x0;
                  local_7d8 = uVar26;
                  local_7a8 = plVar10;
                }
                else {
                  iVar8 = (int)plVar10[0xf];
                  pvVar2 = (void *)plVar10[0xe];
                  uVar26 = local_7d8 | 1;
                  local_7a8 = (longlong *)0x0;
                  local_6b0 = (longlong *)0x0;
                  local_6a8 = iVar8;
                  local_7d8 = uVar26;
                  if (iVar8 == 0) {
                    uStack_6a4 = 0;
                    pplVar18 = &local_6b0;
                    plVar10 = plVar25;
                  }
                  else {
                    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                              (&local_6b0,iVar8,0);
                    plVar10 = local_6b0;
                    local_7a8 = local_6b0;
                    _guard_xfg_dispatch_icall_nop(local_6b0,pvVar2,(longlong)iVar8 << 3);
                    pplVar18 = &local_6b0;
                  }
                }
                *pplVar18 = (longlong *)0x0;
                iVar8 = *(int *)(pplVar18 + 1);
                pplVar18[1] = (longlong *)0x0;
                if (((uVar26 & 8) != 0) &&
                   (uVar26 = uVar26 & 0xfffffff7, local_7d8 = uVar26, local_620 != (longlong *)0x0))
                {
                  FMemory::Free();
                }
                if (((uVar26 & 4) != 0) &&
                   (uVar26 = uVar26 & 0xfffffffb, local_7d8 = uVar26, local_6d0 != (void *)0x0)) {
                  FMemory::Free(local_6d0);
                }
                if (((uVar26 & 2) != 0) &&
                   (uVar26 = uVar26 & 0xfffffffd, local_7d8 = uVar26, local_6c0 != (void *)0x0)) {
                  FMemory::Free(local_6c0);
                }
                if (((uVar26 & 1) != 0) &&
                   (local_7d8 = uVar26 & 0xfffffffe, local_6b0 != (longlong *)0x0)) {
                  FMemory::Free();
                }
                plVar12 = plVar10 + iVar8;
                plVar14 = plVar10;
                local_7d0 = plVar12;
                if (plVar10 != plVar12) {
                  do {
                    plVar14 = (longlong *)*plVar10;
                    if (plVar14 != (longlong *)0x0) {
                      lVar19 = UListViewBase::GetPrivateStaticClass();
                      if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar19 + 0x90)) ||
                         (*(longlong *)
                           (*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar19 + 0x90) * 8
                           ) != lVar19 + 0x88)) {
                        bVar3 = false;
                      }
                      else {
                        bVar3 = true;
                      }
                      plVar12 = local_7d0;
                      if (bVar3) {
                        if (lVar11 == 0) {
LAB_140dea460:
                          local_7b0._4_4_ = (**(code **)(*plVar14 + 0x278))(plVar14);
                          plVar12 = local_790;
                          local_6f0 = (undefined8 *)0x0;
                          local_6e8 = 0;
                          do {
                            local_5e0 = plVar12;
                            local_5d8 = 1;
                            local_370 = 0;
                            local_368 = 0;
                            local_360 = 1;
                            local_358 = 0;
                            local_350 = 0;
                            local_338 = 0;
                            local_330 = 0;
                            local_328 = 0xffffffff;
                            local_324 = 0;
                            local_318 = 0;
                            local_310 = 0;
                            local_308 = 0;
                            local_200 = 0;
                            local_1f8 = 0;
                            local_f0 = 0;
                            local_e8 = 0;
                            local_60 = 0;
                            local_58 = 0;
                            uVar6 = (**(code **)(*plVar14 + 0x2c8))(plVar14,&local_5e0);
                            if (local_60 != 0) {
                              FMemory::Free();
                            }
                            if (local_f0 != 0) {
                              FMemory::Free();
                            }
                            if (local_200 != 0) {
                              FMemory::Free();
                            }
                            local_310 = 0;
                            if (local_318 != 0) {
                              FMemory::Free();
                            }
                            TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                            ::
                            ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                                      (&local_358);
                            FUN_14099aac0(local_5d0);
                            uVar4 = local_6e8;
                            lVar19 = (longlong)(int)local_6e8;
                            iVar8 = (int)local_6e8 + 1;
                            local_6e8 = CONCAT44(local_6e8._4_4_,iVar8);
                            if (local_6e8._4_4_ < iVar8) {
                              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow
                                        (&local_6f0,uVar4 & 0xffffffff);
                            }
                            lVar16 = local_680;
                            *(undefined4 *)((longlong)local_6f0 + lVar19 * 4) = uVar6;
                            plVar14 = (longlong *)plVar14[0x3e];
                          } while (plVar14 != (longlong *)0x0);
                          local_6a0 = (undefined4 *)((longlong)&local_7b0 + 4);
                          local_698 = &local_6f0;
                          FUN_140dd9500(local_680,&local_798,&local_6a0);
                          puVar22 = local_6f0;
                        }
                        else {
                          lVar19 = FUN_1414425d0();
                          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) <
                               *(int *)(lVar19 + 0x90)) ||
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                               (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
                            bVar3 = false;
                          }
                          else {
                            bVar3 = true;
                          }
                          if (!bVar3) goto LAB_140dea460;
                          iVar8 = local_778[10];
                          iVar7 = FUN_1409aa830(local_7a0);
                          if (iVar8 < 1) {
                            local_7e8 = 1;
                            FUN_1409abd50(lVar11,local_660,plVar14);
                            local_6e0 = (**(code **)(*plVar14 + 0x278))(plVar14);
                            local_610 = &local_6e0;
                            local_608 = local_660;
                            FUN_140dd9500(lVar16 + 0x50,local_678,&local_610);
                            puVar22 = local_660[0];
                          }
                          else {
                            local_7e8 = iVar8;
                            FUN_1409abd50(lVar11,&local_600,plVar14);
                            local_6dc = (**(code **)(*plVar14 + 0x278))(plVar14);
                            local_650 = &local_6dc;
                            local_648 = &local_600;
                            FUN_140dd9500(lVar16,local_668,&local_650);
                            puVar22 = local_600;
                            if (iVar8 != iVar7) {
                              local_7e8 = iVar8 + 1;
                              FUN_1409abd50(lVar11,local_630,plVar14);
                              local_6d8[0] = (**(code **)(*plVar14 + 0x278))(plVar14);
                              local_640 = local_6d8;
                              local_638 = local_630;
                              FUN_140dd9500(lVar16 + 0x50,local_690,&local_640);
                              puVar22 = local_600;
                              if (local_630[0] != 0) {
                                FMemory::Free();
                                puVar22 = local_600;
                              }
                            }
                          }
                        }
                        plVar12 = local_7d0;
                        if (puVar22 != (undefined8 *)0x0) {
                          FMemory::Free();
                          plVar12 = local_7d0;
                        }
                      }
                    }
                    plVar10 = plVar10 + 1;
                    plVar14 = local_7a8;
                  } while (plVar10 != plVar12);
                }
                if (plVar14 != (longlong *)0x0) {
                  FMemory::Free(plVar14);
                }
              }
              local_778 = local_778 + 0xc;
              piVar24 = local_778;
            } while (local_778 != local_7c0);
          }
          if (local_788 != (int *)0x0) {
            FMemory::Free();
          }
          FUN_14099a9b0(&local_730);
          FUN_14099aa40(&local_740);
          TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
                    (&local_750);
          FUN_14099a950(&local_760);
        }
        if (local_670 != 0) {
          if (*(longlong **)(local_670 + 0x3d8) != (longlong *)0x0) {
            uVar9 = (**(code **)(**(longlong **)(local_670 + 0x3d8) + 0x278))();
          }
          local_6f8[0x40] = uVar9;
        }
      }
    }
  }
  return;
code_r0x000140de9c48:
  plVar14 = (longlong *)plVar14[6];
  goto joined_r0x000140de9c41;
code_r0x000140de9d58:
  plVar12 = (longlong *)plVar12[6];
  goto joined_r0x000140de9d51;
}



// FUNCTION 140dea6d0 FUN_140dea6d0 body=14 status=ok
// SIG undefined FUN_140dea6d0(void)

void FUN_140dea6d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 140dea6e0 FUN_140dea6e0 body=69 status=ok
// SIG undefined FUN_140dea6e0(void)

int FUN_140dea6e0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar6 = 0;
  iVar3 = -1;
  if (0 < (int)param_1[1]) {
    piVar5 = (int *)(*param_1 + 0x1c);
    iVar2 = iVar3;
    do {
      iVar1 = *piVar5;
      piVar5 = piVar5 + 8;
      iVar3 = iVar6;
      if (iVar1 <= iVar4) {
        iVar1 = iVar4;
        iVar3 = iVar2;
      }
      iVar4 = iVar1;
      iVar6 = iVar6 + 1;
      iVar2 = iVar3;
    } while (iVar6 < (int)param_1[1]);
  }
  return iVar3;
}



// FUNCTION 140dea730 FUN_140dea730 body=175 status=ok
// SIG undefined FUN_140dea730(void)

ulonglong FUN_140dea730(longlong *param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  if (0 < (int)param_1[1]) {
    puVar6 = (undefined8 *)(*param_1 + 8);
    uVar8 = uVar7;
    do {
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      if (*(int *)(puVar6 + 1) == 0) {
        psVar3 = &DAT_143f3eda8;
      }
      else {
        psVar3 = (short *)*puVar6;
      }
      lVar5 = (longlong)puVar4 - (longlong)psVar3;
      do {
        sVar1 = *psVar3;
        sVar2 = *(short *)((longlong)psVar3 + lVar5);
        if (sVar1 != sVar2) break;
        psVar3 = psVar3 + 1;
      } while (sVar2 != 0);
      if (sVar1 == sVar2) {
        return uVar8;
      }
      uVar8 = (ulonglong)((int)uVar8 + 1);
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 4;
    } while ((longlong)uVar7 < (longlong)(int)param_1[1]);
  }
  return 0xffffffff;
}



// FUNCTION 140dea7e0 FUN_140dea7e0 body=50 status=ok
// SIG undefined FUN_140dea7e0(void)

ulonglong FUN_140dea7e0(undefined8 *param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    pcVar1 = (char *)*param_1;
    uVar3 = uVar2;
    do {
      if (*pcVar1 != '\0') {
        return uVar3;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      pcVar1 = pcVar1 + 0x20;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 1));
  }
  return 0xffffffff;
}



// FUNCTION 140dea820 FUN_140dea820 body=275 status=ok
// SIG undefined FUN_140dea820(void)

int * FUN_140dea820(longlong *param_1,int *param_2,ulonglong param_3)

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
        if (*(ulonglong *)((longlong)iVar4 * 0x690 + *param_1) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x690 + 0x680 + *param_1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140dea940 FindId body=302 status=ok
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



// FUNCTION 140deaa70 FUN_140deaa70 body=302 status=ok
// SIG undefined FUN_140deaa70(void)

int * FUN_140deaa70(longlong *param_1,int *param_2,int *param_3)

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
        lVar6 = (longlong)iVar3 * 0x2c;
        if ((*(int *)(lVar6 + lVar2) == *param_3) && (*(uint *)(lVar6 + 4 + lVar2) == uVar1)) {
          *param_2 = iVar3;
          return param_2;
        }
        iVar3 = *(int *)(lVar6 + 0x24 + lVar2);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140deaba0 FUN_140deaba0 body=528 status=ok
// SIG undefined FUN_140deaba0(void)

void FUN_140deaba0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  puVar5 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404cf890(&local_58,*puVar5);
  puVar5 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  Online::GetSessionInterface(&local_68,*puVar5);
  plVar6 = local_68;
  if ((local_68 != (longlong *)0x0) && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x60))(local_58,&local_28,param_2 + 0x10);
    local_38 = local_28;
    plStack_30 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    local_48 = *(undefined8 *)(param_1 + 0xa0);
    local_40 = *(longlong **)(param_1 + 0xa8);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x158))(plVar6,&local_48,&local_38);
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
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
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_20 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140deadb0 FUN_140deadb0 body=528 status=ok
// SIG undefined FUN_140deadb0(void)

void FUN_140deadb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  puVar5 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404cf890(&local_58,*puVar5);
  puVar5 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  Online::GetSessionInterface(&local_68,*puVar5);
  plVar6 = local_68;
  if ((local_68 != (longlong *)0x0) && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x60))(local_58,&local_28,param_2 + 0x10);
    local_38 = local_28;
    plStack_30 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    local_48 = *(undefined8 *)(param_1 + 0xa0);
    local_40 = *(longlong **)(param_1 + 0xa8);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x168))(plVar6,&local_48,&local_38);
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
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
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_20 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140deafc0 FUN_140deafc0 body=528 status=ok
// SIG undefined FUN_140deafc0(void)

void FUN_140deafc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  puVar5 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404cf890(&local_58,*puVar5);
  puVar5 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  Online::GetSessionInterface(&local_68,*puVar5);
  plVar6 = local_68;
  if ((local_68 != (longlong *)0x0) && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x60))(local_58,&local_28,param_2 + 0x10);
    local_38 = local_28;
    plStack_30 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    local_48 = *(undefined8 *)(param_1 + 0xa0);
    local_40 = *(longlong **)(param_1 + 0xa8);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x160))(plVar6,&local_48,&local_38);
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
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
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_20 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140deb1d0 FUN_140deb1d0 body=528 status=ok
// SIG undefined FUN_140deb1d0(void)

void FUN_140deb1d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  puVar5 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404cf890(&local_58,*puVar5);
  puVar5 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  Online::GetSessionInterface(&local_68,*puVar5);
  plVar6 = local_68;
  if ((local_68 != (longlong *)0x0) && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x60))(local_58,&local_28,param_2 + 0x10);
    local_38 = local_28;
    plStack_30 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    local_48 = *(undefined8 *)(param_1 + 0xa0);
    local_40 = *(longlong **)(param_1 + 0xa8);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x170))(plVar6,&local_48,&local_38);
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
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
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_20 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140deb3e0 FUN_140deb3e0 body=56 status=ok
// SIG undefined FUN_140deb3e0(void)

void FUN_140deb3e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_1430fe3f0();
  plVar1 = *(longlong **)(param_1 + 0x148);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x298))(plVar1,param_2);
  }
  return;
}



// FUNCTION 140deb420 FUN_140deb420 body=1779 status=ok
// SIG undefined FUN_140deb420(void)

void FUN_140deb420(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int local_res8;
  int local_res18 [2];
  int local_res20 [2];
  longlong local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 **local_68;
  undefined8 **local_60;
  undefined8 **local_58;
  
  FUN_1430fe3f0();
  plVar1 = (longlong *)(param_1 + 0x148);
  piVar2 = (int *)*plVar1;
  if (((piVar2 == (int *)0x0) || (*piVar2 != 1)) || (piVar2[1] < 0)) {
    FActorRepListRefView::RequestNewList(plVar1,*(undefined4 *)(param_1 + 0x158),0);
  }
  else {
    piVar2[2] = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  plVar11 = (longlong *)*param_2;
  local_res8 = 0;
  if (0 < (int)plVar11[1]) {
    lVar14 = 0;
    do {
      lVar15 = lVar14 * 0x30 + *plVar11;
      lVar8 = *(longlong *)(lVar15 + 8);
      iVar6 = *(int *)(lVar8 + 0xc);
      if (iVar6 < (int)DAT_1469e91c4) {
        uVar13 = iVar6 >> 0x1f & 0xffff;
        uVar5 = iVar6 + uVar13;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar13) * 0x18;
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
        if ((*(byte *)(lVar8 + 0x94) & 2) == 0) {
          if (iVar6 < (int)DAT_1469e91c4) {
            uVar13 = iVar6 >> 0x1f & 0xffff;
            uVar5 = iVar6 + uVar13;
            lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                    (longlong)(int)((uVar5 & 0xffff) - uVar13) * 0x18;
          }
          else {
            lVar7 = 0;
          }
          if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) goto LAB_140deb566;
          bVar3 = false;
        }
        else {
LAB_140deb566:
          bVar3 = true;
        }
        if (bVar3) goto LAB_140deb570;
        bVar3 = true;
      }
      else {
LAB_140deb570:
        bVar3 = false;
      }
      if (((bVar3) && ((*(byte *)(lVar8 + 0x92) & 0x40) != 0)) &&
         (((*(byte *)(lVar8 + 0x90) & 0x20) == 0 &&
          ((*(char *)(lVar8 + 0x129) != '\x04' ||
           (cVar4 = UAbilityTask::IsWaitingOnRemotePlayerdata(lVar8), cVar4 == '\0')))))) {
        iVar6 = *(int *)(param_1 + 0x158);
        if (iVar6 == *(int *)(param_1 + 0x15c)) {
          FActorRepListRefView::RequestNewList(plVar1,*(int *)(param_1 + 0x15c) + 1,1);
          iVar6 = *(int *)(param_1 + 0x158);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar6 * 8) =
             *(undefined8 *)(lVar15 + 8);
        *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
        *(int *)(*plVar1 + 8) = *(int *)(*plVar1 + 8) + 1;
      }
      lVar8 = *(longlong *)(lVar15 + 0x10);
      if (lVar8 != *(longlong *)(lVar15 + 8)) {
        iVar6 = *(int *)(lVar8 + 0xc);
        if (iVar6 < (int)DAT_1469e91c4) {
          uVar13 = iVar6 >> 0x1f & 0xffff;
          uVar5 = iVar6 + uVar13;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                  (longlong)(int)((uVar5 & 0xffff) - uVar13) * 0x18;
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
          if ((*(byte *)(lVar8 + 0x94) & 2) == 0) {
            if (iVar6 < (int)DAT_1469e91c4) {
              uVar13 = iVar6 >> 0x1f & 0xffff;
              uVar5 = iVar6 + uVar13;
              lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                      (longlong)(int)((uVar5 & 0xffff) - uVar13) * 0x18;
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) goto LAB_140deb67b;
            bVar3 = false;
          }
          else {
LAB_140deb67b:
            bVar3 = true;
          }
          if (bVar3) goto LAB_140deb685;
          bVar3 = true;
        }
        else {
LAB_140deb685:
          bVar3 = false;
        }
        if ((((bVar3) && ((*(byte *)(lVar8 + 0x92) & 0x40) != 0)) &&
            ((*(byte *)(lVar8 + 0x90) & 0x20) == 0)) &&
           ((*(char *)(lVar8 + 0x129) != '\x04' ||
            (cVar4 = UAbilityTask::IsWaitingOnRemotePlayerdata(lVar8), cVar4 == '\0')))) {
          iVar6 = *(int *)(param_1 + 0x158);
          if (iVar6 == *(int *)(param_1 + 0x15c)) {
            FActorRepListRefView::RequestNewList(plVar1,*(int *)(param_1 + 0x15c) + 1,1);
            iVar6 = *(int *)(param_1 + 0x158);
          }
          *(undefined8 *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar6 * 8) =
               *(undefined8 *)(lVar15 + 0x10);
          *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
          *(int *)(*plVar1 + 8) = *(int *)(*plVar1 + 8) + 1;
        }
      }
      lVar8 = *(longlong *)(lVar15 + 8);
      if (lVar8 != 0) {
        lVar7 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar8 = *(longlong *)(lVar8 + 0x488);
          if (lVar8 != 0) {
            if (lVar8 != *(longlong *)(param_1 + 0x160 + lVar14 * 8)) {
              *(longlong *)(param_1 + 0x160 + lVar14 * 8) = lVar8;
              lVar7 = param_2[2];
              local_b8 = lVar8;
              TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              ::FindId(lVar7 + 0x30,local_res18,lVar8);
              if (((local_res18[0] == -1) ||
                  (lVar12 = (longlong)local_res18[0] * 0x20 + *(longlong *)(lVar7 + 0x30),
                  lVar12 == 0)) ||
                 (puVar9 = (undefined8 *)(lVar12 + 8), puVar9 == (undefined8 *)0x0)) {
                puVar9 = (undefined8 *)operator_new(0x28);
                if (puVar9 == (undefined8 *)0x0) {
                  puVar9 = (undefined8 *)0x0;
                }
                else {
                  lVar12 = FUN_140decfc0(*(undefined8 *)(lVar7 + 0xd0),&local_b8);
                  puVar9[2] = 1;
                  *(byte *)((longlong)puVar9 + 0x24) = *(byte *)((longlong)puVar9 + 0x24) & 0xfc;
                  puVar9[1] = 0;
                  *puVar9 = 0;
                  puVar9[3] = 0;
                  *(undefined4 *)(puVar9 + 4) = 0;
                  *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(lVar12 + 0x3c);
                  *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar12 + 0x38);
                }
                local_a8 = puVar9;
                local_a0 = (longlong *)operator_new(0x18);
                if (local_a0 != (longlong *)0x0) {
                  *(undefined4 *)(local_a0 + 1) = 1;
                  *local_a0 = (longlong)&PTR_FUN_144576340;
                  *(undefined4 *)((longlong)local_a0 + 0xc) = 1;
                  local_a0[2] = (longlong)puVar9;
                }
                SharedPointerInternals::EnableSharedFromThis(&local_a8,puVar9,puVar9);
                local_70 = &local_b8;
                local_68 = &local_a8;
                FUN_140dd9ec0(lVar7 + 0x30,local_88,&local_70,0);
                plVar11 = local_a0;
                if (local_a0 != (longlong *)0x0) {
                  LOCK();
                  plVar10 = local_a0 + 1;
                  lVar7 = *plVar10;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)lVar7 == 1) {
                    (**(code **)*local_a0)(local_a0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar11 + 0xc);
                    iVar6 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*plVar11 + 8))(plVar11,1);
                    }
                  }
                }
              }
              else {
                puVar9 = (undefined8 *)*puVar9;
              }
              *(undefined4 *)(puVar9 + 1) = 0;
            }
            if (lVar8 != *(longlong *)(lVar15 + 0x10)) {
              local_80 = lVar8;
              FUN_140de5b70(plVar1,&local_80);
            }
            lVar7 = FUN_1414bbb50();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) && (*(longlong *)(lVar8 + 0x118) != 0)) {
              local_78 = *(longlong *)(lVar8 + 0x118);
              FUN_140de5b70(plVar1,&local_78);
            }
          }
          puVar9 = *(undefined8 **)(lVar15 + 0x10);
          if ((puVar9 != *(undefined8 **)(param_1 + 0x160 + lVar14 * 8)) &&
             (puVar9 != (undefined8 *)0x0)) {
            lVar8 = FUN_1429d7ab0();
            if ((*(int *)(puVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(puVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                lVar8 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              *(undefined8 **)(param_1 + 0x160 + lVar14 * 8) = puVar9;
              lVar8 = param_2[2];
              local_b0 = puVar9;
              TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              ::FindId(lVar8 + 0x30,local_res20,puVar9);
              if (((local_res20[0] == -1) ||
                  (lVar15 = (longlong)local_res20[0] * 0x20 + *(longlong *)(lVar8 + 0x30),
                  lVar15 == 0)) ||
                 (puVar9 = (undefined8 *)(lVar15 + 8), puVar9 == (undefined8 *)0x0)) {
                puVar9 = (undefined8 *)operator_new(0x28);
                if (puVar9 == (undefined8 *)0x0) {
                  puVar9 = (undefined8 *)0x0;
                }
                else {
                  lVar15 = FUN_140decfc0(*(undefined8 *)(lVar8 + 0xd0),&local_b0);
                  puVar9[2] = 1;
                  *(byte *)((longlong)puVar9 + 0x24) = *(byte *)((longlong)puVar9 + 0x24) & 0xfc;
                  puVar9[1] = 0;
                  *puVar9 = 0;
                  puVar9[3] = 0;
                  *(undefined4 *)(puVar9 + 4) = 0;
                  *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(lVar15 + 0x3c);
                  *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar15 + 0x38);
                }
                plVar11 = (longlong *)0x0;
                local_98 = puVar9;
                plVar10 = (longlong *)operator_new(0x18);
                if (plVar10 != (longlong *)0x0) {
                  *(undefined4 *)(plVar10 + 1) = 1;
                  *plVar10 = (longlong)&PTR_FUN_144576340;
                  *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
                  plVar10[2] = (longlong)puVar9;
                  plVar11 = plVar10;
                }
                local_90 = plVar11;
                SharedPointerInternals::EnableSharedFromThis(&local_98,puVar9,puVar9);
                local_60 = &local_b0;
                local_58 = &local_98;
                FUN_140dd9ec0(lVar8 + 0x30,local_84,&local_60,0);
                plVar11 = local_90;
                if (local_90 != (longlong *)0x0) {
                  LOCK();
                  plVar10 = local_90 + 1;
                  lVar8 = *plVar10;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)lVar8 == 1) {
                    (**(code **)*local_90)(local_90);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar11 + 0xc);
                    iVar6 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*plVar11 + 8))(plVar11,1);
                    }
                  }
                }
              }
              else {
                puVar9 = (undefined8 *)*puVar9;
              }
              *(undefined4 *)(puVar9 + 1) = 0;
            }
          }
        }
      }
      lVar14 = lVar14 + 1;
      plVar11 = (longlong *)*param_2;
      local_res8 = local_res8 + 1;
    } while (local_res8 < (int)plVar11[1]);
  }
  if (0 < *(int *)(param_1 + 0x158)) {
    plVar11 = (longlong *)param_2[4];
    lVar14 = *plVar1;
    iVar6 = (int)plVar11[1];
    *(int *)(plVar11 + 1) = iVar6 + 1;
    if (*(int *)((longlong)plVar11 + 0xc) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar6);
    }
    *(longlong *)(*plVar11 + (longlong)iVar6 * 8) = lVar14;
  }
  return;
}



// FUNCTION 140debb20 FUN_140debb20 body=157 status=ok
// SIG undefined FUN_140debb20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140debb20(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = &local_28;
  local_30 = *(undefined8 *)(param_2 + 8);
  local_28 = 0;
  local_20 = 0x3000000000000;
  FUN_142ab61f0(&local_38,"event_id",*(undefined4 *)(param_1 + 0x17c));
  FUN_142ab64b0(&local_38,&DAT_14456e9c4,param_1 + 0x38);
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(param_2,"event",&local_38);
  return;
}



// FUNCTION 140debbc0 FUN_140debbc0 body=934 status=ok
// SIG undefined FUN_140debbc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140debbc0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_c0;
  undefined4 local_b8 [2];
  longlong local_b0 [2];
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar15 = 0;
  local_b8[0] = 0;
  FUN_140debb20();
  local_a0 = &local_90;
  local_98 = *(undefined8 *)(param_2 + 8);
  local_90 = 0;
  local_88 = 0x3000000000000;
  if (*(char *)(param_1 + 0x4bd) == '\0') {
    FUN_142ab6250(&local_a0,"max_event_duration",*(undefined4 *)(param_1 + 0x1d4));
    FUN_142ab6250(&local_a0,"join_timer_duration",*(undefined4 *)(param_1 + 0x1d8));
    goto LAB_140debf38;
  }
  plVar7 = *(longlong **)(param_1 + 0x470);
  if (plVar7 == (longlong *)0x0) goto LAB_140debf38;
  uVar5 = UScrollBox::GetPrivateStaticClass();
  lVar6 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar5);
  plVar7 = *(longlong **)(param_1 + 0x470);
  uVar5 = FUN_142dfdf30();
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x628))(plVar7,uVar5);
  lVar13 = lVar15;
  if (*(int *)(param_1 + 0x480) < 2) {
LAB_140debd07:
    bVar1 = false;
  }
  else {
    puVar8 = (undefined8 *)FUN_142cc1270(*(undefined8 *)(param_1 + 0x470),local_b0);
    puVar10 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x480) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = *(undefined2 **)(param_1 + 0x478);
    }
    if (*(int *)(puVar8 + 1) != 0) {
      puVar10 = (undefined2 *)*puVar8;
    }
    lVar13 = 1;
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
    if (iVar3 == 0) goto LAB_140debd07;
    bVar1 = true;
  }
  if ((lVar13 != 0) && (local_b0[0] != 0)) {
    FMemory::Free();
  }
  if (bVar1) {
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x100);
    }
    if (lVar15 != 0) {
      FUN_1414d1ba0(lVar15,param_1 + 0x478);
    }
  }
  local_60 = &local_50;
  local_58 = *(undefined8 *)(param_2 + 8);
  local_50 = 0;
  local_48 = 0x4000000000000;
  if ((lVar6 != 0) && (plVar7 != (longlong *)0x0)) {
    plVar12 = *(longlong **)(lVar6 + 0x678);
    plVar16 = plVar12 + (longlong)*(int *)(lVar6 + 0x680) * 0xf;
    if (plVar12 != plVar16) {
      plVar14 = plVar12 + 0xc;
      do {
        local_80 = &local_70;
        local_78 = *(undefined8 *)(param_2 + 8);
        local_68 = 0x3000000000000;
        local_70 = 0;
        if ((*plVar12 != 0) && (cVar2 = FUN_142d52a00(plVar14), cVar2 != '\0')) {
          pbVar9 = (byte *)FLinearColor::ToFColor(*plVar12 + 0x30,local_b8,0);
          local_c0 = (uint)pbVar9[3];
          local_c8 = (uint)*pbVar9;
          FString::PrintfImpl(local_b0,L"%02X%02X%02X%02X",pbVar9[2],pbVar9[1]);
          FUN_142ab64b0(&local_80,"display_color",local_b0);
          if (local_b0[0] != 0) {
            FMemory::Free();
          }
          uVar5 = FUN_142d52a20(plVar14);
          uVar5 = FArchive::operator<<(uVar5);
          fVar17 = (float)FUN_142d5fed0(uVar5);
          FUN_142ab6190(&local_80,"current_value",(int)fVar17);
          uVar5 = FUN_142d52a20(plVar14);
          uVar5 = FArchive::operator<<(uVar5);
          FUN_142d61c30(uVar5);
          FUN_142ab6190(&local_80,"max_value");
          FUN_142ab4ae0(&local_60,&local_80);
        }
        plVar12 = plVar12 + 0xf;
        plVar14 = plVar14 + 0xf;
      } while (plVar12 != plVar16);
    }
    FUN_142ab61f0(&local_a0,"event_id",*(undefined4 *)(param_1 + 0x17c));
    FUN_142ab64b0(&local_a0,"enemy_name",param_1 + 0x478);
    uVar4 = (**(code **)(*plVar7 + 0x408))(plVar7);
    FUN_142ab6190(&local_a0,"enemy_level",uVar4);
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(&local_a0,"enemy_health_info",&local_60);
  }
LAB_140debf38:
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(param_2,&DAT_144567934,&local_a0);
  return;
}



// FUNCTION 140debf70 FUN_140debf70 body=1986 status=ok
// SIG undefined FUN_140debf70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140debf70(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined1 auStack_298 [32];
  longlong local_278;
  undefined8 local_270;
  undefined4 *local_268;
  longlong local_260 [7];
  longlong local_228 [2];
  undefined4 local_218 [2];
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong local_1f8;
  longlong local_1e8;
  longlong local_1d8;
  longlong local_1c8;
  undefined1 local_1a8 [8];
  longlong local_1a0;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  bVar2 = false;
  bVar1 = false;
  local_268 = (undefined4 *)((ulonglong)local_268 & 0xffffffff00000000);
  local_260[6] = param_1;
  FUN_140debb20();
  puVar12 = *(undefined4 **)(param_1 + 600);
  local_148 = &local_138;
  local_140 = *(undefined8 *)(param_2 + 8);
  local_78 = 0;
  local_138 = 0;
  local_130 = 0x3000000000000;
  local_68 = &local_58;
  local_268 = puVar12 + (longlong)*(int *)(param_1 + 0x260) * 0x18;
  local_58 = 0;
  local_50 = 0x4000000000000;
  local_88 = &local_78;
  local_70 = 0x4000000000000;
  local_80 = local_140;
  local_60 = local_140;
  if (puVar12 != local_268) {
    piVar13 = puVar12 + 4;
    do {
      uVar11 = 0;
      FUN_142fde710(local_1a8);
      _guard_xfg_dispatch_icall_nop(local_218,0,0x68);
      FUN_143001780(local_218,local_1a8);
      local_a8 = &local_98;
      local_a0 = *(undefined8 *)(param_2 + 8);
      local_90 = 0x3000000000000;
      local_98 = 0;
      uVar10 = uVar11;
      if (*(longlong *)(piVar13 + 0x12) != 0) {
        uVar10 = *(ulonglong *)(*(longlong *)(piVar13 + 0x12) + 0x118);
      }
      FUN_142deb0b0(piVar13 + 10,&local_a8,uVar10);
      local_278 = 0;
      local_c8 = &local_b8;
      local_b8 = 0;
      plVar7 = *(longlong **)(piVar13 + 0x12);
      local_c0 = *(undefined8 *)(param_2 + 8);
      local_270 = 0;
      local_b0 = 0x4000000000000;
      if (plVar7 != (longlong *)0x0) {
        local_108 = &local_f8;
        local_f8 = 0;
        local_128 = &local_118;
        local_f0 = 0x3000000000000;
        local_118 = 0;
        local_110 = 0x4000000000000;
        local_120 = local_c0;
        local_100 = local_c0;
        (**(code **)(*plVar7 + 0x448))(plVar7,&local_108);
        FUN_142ab6cb0(&local_108,"DamageType",&local_278);
        cVar3 = FUN_142ab6830(&local_108,"UseModes",&local_128);
        if ((cVar3 != '\0') && (iVar4 = FUN_142ab5710(&local_128), 0 < iVar4)) {
          do {
            local_e8 = &local_d8;
            local_e0 = *(undefined8 *)(param_2 + 8);
            local_d0 = 0x3000000000000;
            local_d8 = 0;
            cVar3 = FUN_142ab6c40(&local_128,&local_e8,uVar11);
            if (cVar3 != '\0') {
              local_168 = &local_158;
              local_260[2] = 0;
              local_160 = *(undefined8 *)(param_2 + 8);
              local_260[0] = 0;
              local_150 = 0x3000000000000;
              local_158 = 0;
              local_260[3] = 0;
              local_260[1] = 0;
              FUN_142ab6cb0(&local_e8,"UseModeName",local_260 + 2);
              FUN_142ab6cb0(&local_e8,"DamageType",local_260);
              FUN_142ab64b0(&local_168,"use_mode_name",local_260 + 2);
              FUN_142ab64b0(&local_168,"damage_type",local_260);
              FUN_142ab4ae0(&local_c8,&local_168);
              if (local_260[0] != 0) {
                FMemory::Free();
              }
              if (local_260[2] != 0) {
                FMemory::Free();
              }
            }
            uVar8 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar8;
            iVar4 = FUN_142ab5710(&local_128);
          } while ((int)uVar8 < iVar4);
        }
      }
      local_188 = &local_178;
      local_180 = *(undefined8 *)(param_2 + 8);
      local_178 = 0;
      local_170 = 0x3000000000000;
      FUN_142ab6190(&local_188,"order_index",*puVar12);
      FUN_142ab64b0(&local_188,"serial_number",piVar13 + 2);
      FUN_142ab6050(&local_188,"display_name_is_inventory_data_name",(char)piVar13[-3]);
      iVar4 = *piVar13;
      local_168 = &local_158;
      local_160 = local_180;
      local_150 = 0x4000000000000;
      local_158 = 0;
      if (0 < iVar4) {
        FUN_142ab5fa0(&local_168,iVar4);
        iVar4 = *piVar13;
      }
      puVar9 = *(undefined8 **)(piVar13 + -2);
      uVar11 = 0;
      uVar10 = (longlong)iVar4 & 0x1fffffffffffffff;
      if (puVar9 + iVar4 < puVar9) {
        uVar10 = 0;
      }
      if (uVar10 != 0) {
        do {
          uVar5 = (**(code **)(*(longlong *)*puVar9 + 0x278))();
          FUN_142ab4ed0(&local_168,uVar5);
          uVar11 = uVar11 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar11 != uVar10);
      }
      UE4Function_Private::
      TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
      ::Call(&local_188,"display_name_parts_hashes",&local_168);
      FUN_142ab6190(&local_188,"game_stage",local_218[0]);
      FUN_142ab6190(&local_188,"monetary_value",piVar13[6]);
      FUN_142ab6190(&local_188,"inventory_score",piVar13[7]);
      FUN_142ab6190(&local_188,"has_foil_part",(char)piVar13[8]);
      if (*(longlong *)(piVar13 + 0x12) == 0) {
        bVar1 = true;
        plVar7 = local_260 + 4;
        local_260[4] = 0;
        local_260[5] = 0;
      }
      else {
        bVar2 = true;
        plVar7 = (longlong *)FUN_142ff5d60(*(longlong *)(piVar13 + 0x12),local_228);
      }
      FUN_142ab64b0(&local_188,"thumbnail_name",plVar7);
      if ((bVar1) && (bVar1 = false, local_260[4] != 0)) {
        FMemory::Free();
      }
      if ((bVar2) && (bVar2 = false, local_228[0] != 0)) {
        FMemory::Free();
      }
      uVar6 = 0;
      uVar5 = uVar6;
      if (*(longlong **)(piVar13 + 0x12) != (longlong *)0x0) {
        uVar5 = (**(code **)(**(longlong **)(piVar13 + 0x12) + 0x478))();
      }
      FUN_142ab61f0(&local_188,"current_mayhem_part_hash",uVar5);
      uVar5 = uVar6;
      if (*(longlong **)(piVar13 + 0x12) != (longlong *)0x0) {
        uVar5 = (**(code **)(**(longlong **)(piVar13 + 0x12) + 0x480))();
      }
      FUN_142ab61f0(&local_188,"current_mayhem_part_ui_stat_hash",uVar5);
      if (1 < (int)local_270) {
        FUN_142ab64b0(&local_188,"damage_type",&local_278);
      }
      iVar4 = FUN_142ab5710(&local_c8);
      if (0 < iVar4) {
        UE4Function_Private::
        TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
        ::Call(&local_188,"use_modes",&local_c8);
      }
      uVar5 = uVar6;
      if (local_210 != (longlong *)0x0) {
        uVar5 = (**(code **)(*local_210 + 0x278))();
      }
      FUN_142ab61f0(&local_188,"inventory_data_hash",uVar5);
      uVar5 = uVar6;
      if (local_208 != (longlong *)0x0) {
        uVar5 = (**(code **)(*local_208 + 0x278))();
      }
      FUN_142ab61f0(&local_188,"balance_data_hash",uVar5);
      if (local_200 != (longlong *)0x0) {
        uVar6 = (**(code **)(*local_200 + 0x278))();
      }
      FUN_142ab61f0(&local_188,"manufacturer_data_hash",uVar6);
      UE4Function_Private::
      TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
      ::Call(&local_188,"stats",&local_a8);
      FUN_142ab4ae0(&local_68,&local_188);
      FUN_142ab5020(&local_88,piVar13 + 0xe);
      if (local_278 != 0) {
        FMemory::Free();
      }
      if (local_1c8 != 0) {
        FMemory::Free();
      }
      if (local_1d8 != 0) {
        FMemory::Free();
      }
      if (local_1e8 != 0) {
        FMemory::Free();
      }
      if (local_1f8 != 0) {
        FMemory::Free();
      }
      if (local_1a0 != 0) {
        FMemory::Free();
      }
      puVar12 = puVar12 + 0x18;
      piVar13 = piVar13 + 0x18;
      param_1 = local_260[6];
    } while (puVar12 != local_268);
  }
  FUN_142ab6250(&local_148,"join_timer_duration",*(undefined4 *)(param_1 + 0x1b0));
  FUN_142ab6250(&local_148,"prize_selection_duration",*(undefined4 *)(param_1 + 0x1b4));
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(&local_148,"thumbnails",&local_88);
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(&local_148,"items",&local_68);
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(param_2,&DAT_14455fa34,&local_148);
  return;
}



// FUNCTION 140dec740 FUN_140dec740 body=956 status=ok
// SIG undefined FUN_140dec740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dec740(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  int *piVar11;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_140debb20();
  local_b0 = *(undefined8 *)(param_2 + 8);
  local_b8 = &local_a8;
  local_a0 = 0x3000000000000;
  local_a8 = 0;
  if (*(char *)(param_1 + 0x184) != '\x03') {
    FUN_142ab6250(&local_b8,"max_event_duration",*(undefined4 *)(param_1 + 0x420));
    goto LAB_140decacf;
  }
  local_98 = &local_88;
  plVar1 = (longlong *)(param_1 + 0x540);
  iVar4 = 0;
  local_88 = 0;
  local_80 = 0x3000000000000;
  local_90 = local_b0;
  if (0 < *(int *)(param_1 + 0x548)) {
    pcVar7 = (char *)*plVar1;
    do {
      if (*pcVar7 != '\0') {
        if (-1 < iVar4) {
          lVar10 = (longlong)iVar4 * 0x20 + *plVar1;
          FUN_142ab64b0(&local_98,"donator_name",lVar10 + 8);
          FUN_142ab6190(&local_98,"number_of_donations",*(undefined4 *)(lVar10 + 0x18));
          FUN_142ab6190(&local_98);
        }
        break;
      }
      iVar4 = iVar4 + 1;
      pcVar7 = pcVar7 + 0x20;
    } while (iVar4 < *(int *)(param_1 + 0x548));
  }
  local_70 = *(undefined8 *)(param_2 + 8);
  local_78 = &local_68;
  iVar4 = 0;
  iVar8 = 0;
  local_68 = 0;
  local_60 = 0x3000000000000;
  lVar10 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x548)) {
    piVar11 = (int *)(*plVar1 + 0x1c);
    do {
      iVar2 = *piVar11;
      piVar11 = piVar11 + 8;
      iVar5 = iVar8;
      if (iVar2 <= iVar4) {
        iVar5 = (int)lVar10;
      }
      iVar8 = iVar8 + 1;
      lVar10 = (longlong)iVar5;
      if (iVar2 <= iVar4) {
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
    } while (iVar8 < *(int *)(param_1 + 0x548));
    if (-1 < iVar5) {
      lVar10 = lVar10 * 0x20 + *plVar1;
      FUN_142ab64b0(&local_78,"donator_name",lVar10 + 8);
      FUN_142ab6190(&local_78,"number_of_donations",*(undefined4 *)(lVar10 + 0x18));
      FUN_142ab6190(&local_78,"bits_donated_total",*(undefined4 *)(lVar10 + 0x1c));
    }
  }
  local_50 = *(undefined8 *)(param_2 + 8);
  local_58 = &local_48;
  local_40 = 0x3000000000000;
  local_48 = 0;
  iVar4 = FUN_140dea730(plVar1,param_1 + 0x550);
  if (-1 < iVar4) {
    lVar10 = (longlong)iVar4 * 0x20 + *plVar1;
    FUN_142ab64b0(&local_58,"donator_name",lVar10 + 8);
    FUN_142ab6190(&local_58,"number_of_donations",*(undefined4 *)(lVar10 + 0x18));
    FUN_142ab6190(&local_58,"bits_donated_total",*(undefined4 *)(lVar10 + 0x1c));
  }
  lVar10 = FUN_142dcfb00(*(undefined8 *)(param_1 + 0x188));
  if (lVar10 == 0) {
LAB_140dec9c2:
    lVar10 = 0;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140dec9c2;
  }
  FUN_142ab61f0(&local_b8,"event_id",*(undefined4 *)(param_1 + 0x17c));
  FUN_142ab6050(&local_b8,"donation_done",*(undefined1 *)(param_1 + 0x4ec));
  FUN_142ab6190(&local_b8,"number_of_donations",*(undefined4 *)(param_1 + 0x4d0));
  FUN_142ab62a0(&local_b8,"tier_timestamp",*(undefined8 *)(param_1 + 0x4e0));
  FUN_142ab6250(&local_b8,"tier_duration",*(undefined4 *)(param_1 + 0x4dc));
  FUN_142ab6190(&local_b8,"bits_donated_total",*(undefined4 *)(param_1 + 0x4d4));
  if (lVar10 == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = *(undefined4 *)(lVar10 + 0x19c0);
  }
  FUN_142ab6190(&local_b8,"event_tier",uVar9);
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(&local_b8,"first_donator",&local_98);
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(&local_b8,"biggest_donator",&local_78);
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(&local_b8,"latest_donator",&local_58);
  FUN_142ab62a0(&local_b8,"event_timestamp",*(undefined8 *)(param_1 + 0x170));
LAB_140decacf:
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(param_2,&DAT_144566c04,&local_b8);
  return;
}



// FUNCTION 140decb00 FUN_140decb00 body=146 status=ok
// SIG undefined FUN_140decb00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140decb00(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  FUN_140debb20();
  local_38 = &local_28;
  local_30 = *(undefined8 *)(param_2 + 8);
  local_28 = 0;
  local_20 = 0x3000000000000;
  FUN_142ab6250(&local_38,"max_event_duration",*(undefined4 *)(param_1 + 0x274));
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(param_2,&DAT_144554b04,&local_38);
  return;
}



// FUNCTION 140decba0 FUN_140decba0 body=423 status=ok
// SIG undefined FUN_140decba0(void)

void FUN_140decba0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  undefined1 local_res10 [16];
  undefined4 local_48;
  undefined4 local_44;
  longlong *local_38;
  longlong local_28;
  
  lVar5 = param_1[0x51];
  iVar2 = (int)lVar5 + 1;
  *(int *)(param_1 + 0x51) = iVar2;
  if (iVar2 < (int)param_1[0x50]) {
    lVar4 = param_1[0x4d];
    plVar1 = (longlong *)(lVar4 + 0x4b0);
    lVar5 = ((longlong)(int)lVar5 + 1) * 0x68 + param_1[0x4f];
    piVar3 = (int *)FUN_140dea820(plVar1,local_res10,*(undefined8 *)(lVar5 + 0x30));
    if (*piVar3 == -1) {
      lVar4 = lVar4 + 0x500;
    }
    else {
      FUN_140dea820(plVar1,local_res8,*(undefined8 *)(lVar5 + 0x30));
      if (local_res8[0] == -1) {
        lVar4 = 0x10;
      }
      else {
        lVar4 = (longlong)local_res8[0] * 0x690 + *plVar1 + 0x10;
      }
    }
    FUN_1411e2a40(param_1[0x4e],&local_48,*(undefined8 *)(lVar5 + 8),lVar4);
    if (local_28 != 0) {
      LOCK();
      piVar3 = (int *)(local_28 + 0x48);
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    FUN_1416f8340(local_44);
    FUN_1416f8340(local_48);
    return;
  }
  lVar5 = 0;
  if (param_1[0x4e] != 0) {
    FUN_1411f8450();
    FUN_1407665e0(param_1[0x4e] + 0xe8,param_1);
    param_1[0x4e] = 0;
  }
  FUN_140de6f40(param_1 + 0x4f,0);
  (**(code **)(*param_1 + 0x2e8))(param_1,1);
  if (param_1[0x31] != 0) {
    lVar5 = *(longlong *)(param_1[0x31] + 0xf8);
  }
  if (lVar5 != 0) {
    FUN_140de7bc0(lVar5,param_1,0);
  }
  return;
}



// FUNCTION 140decd50 FUN_140decd50 body=331 status=ok
// SIG undefined FUN_140decd50(void)

void FUN_140decd50(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res8 [2];
  undefined1 local_res10 [16];
  undefined4 local_48;
  undefined4 local_44;
  longlong *local_38;
  longlong local_28;
  
  iVar2 = *(int *)(param_1 + 0x120);
  iVar3 = iVar2 + 1;
  *(int *)(param_1 + 0x120) = iVar3;
  if (iVar3 < *(int *)(param_1 + 0x118)) {
    lVar5 = *(longlong *)(param_1 + 0x178);
    lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x110) + 4 + (longlong)iVar2 * 4) * 0x68 +
            *(longlong *)(param_1 + 0x1b0);
    piVar4 = (int *)FUN_140dea820(lVar5 + 0x4b0,local_res10,*(undefined8 *)(lVar6 + 0x30));
    if (*piVar4 == -1) {
      lVar5 = lVar5 + 0x500;
    }
    else {
      FUN_140dea820(lVar5 + 0x4b0,local_res8,*(undefined8 *)(lVar6 + 0x30));
      if (local_res8[0] == -1) {
        lVar5 = 0x10;
      }
      else {
        lVar5 = (longlong)local_res8[0] * 0x690 + *(longlong *)(lVar5 + 0x4b0) + 0x10;
      }
    }
    FUN_1411e2a40(*(undefined8 *)(param_1 + 0x108),&local_48,*(undefined8 *)(lVar6 + 8),lVar5);
    if (local_28 != 0) {
      LOCK();
      piVar4 = (int *)(local_28 + 0x48);
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar4 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    FUN_1416f8340(local_44);
    FUN_1416f8340(local_48);
    return;
  }
  FUN_140e00fa0(param_1);
  return;
}



// FUNCTION 140decea0 FUN_140decea0 body=121 status=ok
// SIG undefined FUN_140decea0(void)

undefined8 FUN_140decea0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x78))();
    (**(code **)(*param_1 + 0x70))(param_1,2);
    (**(code **)(*param_1 + 0x28))(param_1);
    FUN_140de5980(param_1,0);
    (**(code **)(*param_1 + 0x48))(param_1,0);
    (**(code **)(*param_1 + 0x70))(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000140decf0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140decf20 FUN_140decf20 body=159 status=ok
// SIG undefined FUN_140decf20(void)

void FUN_140decf20(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8;
  undefined4 uStackX_c;
  undefined8 local_res10;
  
  local_res10 = 0xffffffff;
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&local_res8);
    local_res10 = CONCAT44(uStackX_c,local_res8);
  }
  uVar1 = local_res10;
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(param_1,&local_res8,&local_res10);
  lVar3 = 0;
  if (local_res8 != -1) {
    lVar3 = *param_1 + (longlong)local_res8 * 0x18;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  if (lVar2 != 0) {
    return;
  }
  FUN_140ded340(param_1,uVar1,param_2);
  return;
}



// FUNCTION 140decfc0 FUN_140decfc0 body=539 status=ok
// SIG undefined FUN_140decfc0(void)

undefined8 * FUN_140decfc0(char *param_1,longlong *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int local_res8 [2];
  undefined8 *local_res10;
  longlong *local_38;
  undefined8 **local_30;
  
  lVar3 = *param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 8,local_res8,lVar3);
  puVar10 = (undefined8 *)0x0;
  puVar9 = puVar10;
  if (local_res8[0] != -1) {
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)local_res8[0] * 0x18);
  }
  puVar7 = puVar9 + 1;
  if (puVar9 == (undefined8 *)0x0) {
    puVar7 = puVar10;
  }
  if (puVar7 == (undefined8 *)0x0) {
    puVar8 = (undefined4 *)FUN_140ded2a0(param_1 + 0x58,*(undefined8 *)(lVar3 + 0x10));
    cVar2 = *param_1;
    puVar9 = (undefined8 *)operator_new(0x98);
    if (cVar2 == '\0') {
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined4 *)(puVar9 + 2) = 0;
        *(undefined1 *)((longlong)puVar9 + 0x14) = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        uVar1 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        *(undefined4 *)(puVar9 + 6) = *puVar8;
        *(undefined4 *)((longlong)puVar9 + 0x34) = uVar1;
        *(undefined4 *)(puVar9 + 7) = uVar4;
        *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar5;
        puVar9[8] = *(undefined8 *)(puVar8 + 4);
        *(undefined4 *)(puVar9 + 9) = puVar8[6];
        puVar9[10] = 0;
        puVar9[0xb] = 0;
        puVar9[0xc] = 2;
        puVar9[0xd] = 0;
        puVar9[0xe] = 0;
        puVar9[0xf] = 2;
        puVar9[0x10] = 0;
        puVar9[0x11] = 0;
        puVar9[0x12] = 2;
        puVar10 = puVar9;
      }
    }
    else if (puVar9 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 4);
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined4 *)(puVar9 + 2) = 0;
      *(undefined1 *)((longlong)puVar9 + 0x14) = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      uVar4 = puVar8[1];
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      *(undefined4 *)(puVar9 + 6) = *puVar8;
      *(undefined4 *)((longlong)puVar9 + 0x34) = uVar4;
      *(undefined4 *)(puVar9 + 7) = uVar5;
      *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar6;
      puVar9[8] = *(undefined8 *)(puVar8 + 4);
      *(undefined4 *)(puVar9 + 9) = puVar8[6];
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 2;
      puVar9[0xd] = 0;
      puVar9[0xe] = 0;
      puVar9[0xf] = 2;
      puVar9[0x10] = 0;
      puVar9[0x11] = 0;
      puVar9[0x12] = 2;
      FUN_143100360(puVar9 + 6,param_2,uVar1);
      puVar10 = puVar9;
    }
    local_30 = &local_res10;
    local_res10 = puVar10;
    local_38 = param_2;
    FUN_140dda160(param_1 + 8,local_res8,&local_38,0);
    puVar9 = local_res10;
    if (local_res10 != (undefined8 *)0x0) {
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>
                (local_res10 + 0x10);
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(puVar9 + 0xd);
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(puVar9 + 10);
      if (puVar9[3] != 0) {
        FActorRepList::Release();
      }
      FMemory::operator_delete(puVar9,0x98);
    }
    return puVar10;
  }
  return (undefined8 *)*puVar7;
}



// FUNCTION 140ded1e0 FUN_140ded1e0 body=56 status=ok
// SIG undefined FUN_140ded1e0(void)

void FUN_140ded1e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  UReplicationGraphNode_ActorList::GetAllActorsInNode_Debugging();
  plVar1 = *(longlong **)(param_1 + 0x148);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b8))(plVar1,param_2);
  }
  return;
}



// FUNCTION 140ded220 DiagnosticMessage body=62 status=ok
// SIG undefined DiagnosticMessage(void)

undefined8 *
FSkeletalMeshComponentEndPhysicsTickFunction::DiagnosticMessage
          (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x2d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"coui://UX/experience/First Run/FirstRun.html",0x5a);
  return param_2;
}



// FUNCTION 140ded260 FUN_140ded260 body=62 status=ok
// SIG undefined FUN_140ded260(void)

undefined8 * FUN_140ded260(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x2a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"coui://UX/experience/Friends/Friends.html",0x54);
  return param_2;
}



// FUNCTION 140ded2a0 FUN_140ded2a0 body=158 status=ok
// SIG undefined FUN_140ded2a0(void)

longlong FUN_140ded2a0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8;
  undefined4 uStackX_c;
  undefined8 local_res10;
  
  local_res10 = 0xffffffff;
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&local_res8);
    local_res10 = CONCAT44(uStackX_c,local_res8);
  }
  uVar1 = local_res10;
  FUN_140deaa70(param_1,&local_res8,&local_res10);
  lVar2 = 0;
  if (local_res8 != -1) {
    lVar2 = (longlong)local_res8 * 0x2c + *param_1;
  }
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  if (lVar3 == 0) {
    lVar2 = FUN_140ded420(param_1,uVar1,param_2);
    return lVar2;
  }
  return lVar3;
}



// FUNCTION 140ded340 FUN_140ded340 body=215 status=ok
// SIG undefined FUN_140ded340(void)

undefined8 * FUN_140ded340(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_res10;
  int local_res18;
  undefined4 uStackX_1c;
  undefined8 *local_res20;
  
  lVar1 = *(longlong *)(param_3 + 0x30);
  if (lVar1 == 0) {
    return (undefined8 *)0x0;
  }
  local_res10 = param_2;
  FWeakObjectPtr::operator=(&local_res18,lVar1);
  uVar2 = CONCAT44(uStackX_1c,local_res18);
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(param_1,&local_res18);
  puVar4 = (undefined8 *)0x0;
  if (local_res18 != -1) {
    puVar4 = (undefined8 *)(*param_1 + (longlong)local_res18 * 0x18);
  }
  puVar3 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_140ded340(param_1,uVar2,lVar1);
    return puVar4;
  }
  uVar2 = *puVar3;
  local_res20 = &local_res10;
  FUN_140dd8b50(param_1,&local_res18,&local_res20,0);
  puVar4 = (undefined8 *)(*param_1 + (longlong)local_res18 * 0x18 + 8);
  *puVar4 = uVar2;
  return puVar4;
}



// FUNCTION 140ded420 FUN_140ded420 body=250 status=ok
// SIG undefined FUN_140ded420(void)

undefined8 * FUN_140ded420(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res10;
  int local_res18;
  undefined4 uStackX_1c;
  undefined8 *local_res20;
  
  lVar3 = *(longlong *)(param_3 + 0x30);
  if (lVar3 == 0) {
    return (undefined8 *)0x0;
  }
  local_res10 = param_2;
  FWeakObjectPtr::operator=(&local_res18,lVar3);
  uVar1 = CONCAT44(uStackX_1c,local_res18);
  FUN_140deaa70(param_1,&local_res18,&local_res20);
  puVar6 = (undefined8 *)0x0;
  if (local_res18 != -1) {
    puVar6 = (undefined8 *)((longlong)local_res18 * 0x2c + *param_1);
  }
  puVar7 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (puVar7 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_140ded420(param_1,uVar1,lVar3);
    return puVar6;
  }
  uVar4 = *puVar7;
  uVar5 = puVar7[1];
  uVar2 = *(undefined4 *)(puVar7 + 3);
  local_res20 = &local_res10;
  uVar1 = puVar7[2];
  FUN_140dd8d30(param_1,&local_res18,&local_res20,0);
  puVar6 = (undefined8 *)(*param_1 + (longlong)local_res18 * 0x2c + 8);
  *puVar6 = uVar4;
  puVar6[1] = uVar5;
  puVar6[2] = uVar1;
  *(undefined4 *)(puVar6 + 3) = uVar2;
  return puVar6;
}



// FUNCTION 140ded520 FUN_140ded520 body=138 status=ok
// SIG undefined FUN_140ded520(void)

undefined * FUN_140ded520(longlong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686fc98) {
    _Init_thread_header(&DAT_14686fc98);
    if (DAT_14686fc98 == -1) {
      DAT_14629bd04 = DAT_14629bd04 & 0xf8;
      _Init_thread_footer(&DAT_14686fc98);
    }
  }
  puVar1 = (undefined *)FUN_140decf20(param_1 + 0x218,param_2);
  puVar2 = &DAT_14629bd00;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
  }
  return puVar2;
}



// FUNCTION 140ded5d0 FUN_140ded5d0 body=600 status=ok
// SIG undefined FUN_140ded5d0(void)

/* WARNING: Removing unreachable block (ram,0x000140ded742) */
/* WARNING: Removing unreachable block (ram,0x000140ded6be) */
/* WARNING: Removing unreachable block (ram,0x000140ded807) */

void FUN_140ded5d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  pwVar5 = L"";
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    pwVar6 = L"Idle";
    break;
  case 1:
    pwVar6 = L"Searching";
    break;
  case 2:
    pwVar6 = L"ResultFound";
    break;
  case 3:
    pwVar6 = L"Failed";
    break;
  case 4:
    pwVar6 = L"FailedRateLimit";
    break;
  case 5:
    pwVar6 = L"Expired";
    break;
  case 6:
    pwVar6 = L"Canceling";
    break;
  case 7:
    pwVar6 = L"Canceled";
    break;
  default:
    pwVar6 = L"";
  }
  FString::PrintfImpl(&local_38,L"SearchState: %s",pwVar6);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
  *puVar4 = 0;
  *puVar4 = local_38;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,local_28);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar4;
    }
    FString::PrintfImpl(&local_38,L"User:%s",puVar7);
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
    *puVar4 = 0;
    *puVar4 = local_38;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_30._4_4_;
    local_30 = 0;
    local_38 = 0;
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  iVar1 = *(int *)(lVar3 + 0x18);
  if (iVar1 == 0) {
    pwVar5 = L"NotStarted";
  }
  else if (iVar1 == 1) {
    pwVar5 = L"InProgress";
  }
  else if (iVar1 == 2) {
    pwVar5 = L"Done";
  }
  else if (iVar1 == 3) {
    pwVar5 = L"Failed";
  }
  FString::PrintfImpl(&local_38,L"SearchSettings: State:%s, Timeout:%fs, Results:%d",pwVar5,
                      (double)*(float *)(lVar3 + 0x80),*(undefined4 *)(lVar3 + 0x10));
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
  *puVar4 = 0;
  *puVar4 = local_38;
  *(undefined4 *)(puVar4 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar4 + 0xc) = local_30._4_4_;
  return;
}



// FUNCTION 140ded850 GetDesc body=37 status=ok
// SIG undefined GetDesc(void)

undefined8 UClass::GetDesc(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(local_res8);
  return param_2;
}



// FUNCTION 140ded880 FUN_140ded880 body=343 status=ok
// SIG undefined FUN_140ded880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140ded880(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong *plStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar8 = *(longlong *)(param_1 + 0x148);
  if (lVar8 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_28 = 0;
    uVar7 = FUN_14310e4a0();
    local_48 = 0;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    lVar8 = FUN_1417985e0(uVar7,param_1,0,0);
    plVar5 = *(longlong **)(param_1 + 0x40);
    puVar1 = (undefined8 *)(lVar8 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_38 = uVar7;
    plStack_30 = plVar5;
    if (&local_38 != puVar1) {
      local_38 = *puVar1;
      plStack_30 = *(longlong **)(lVar8 + 0x40);
      *puVar1 = uVar7;
      *(longlong **)(lVar8 + 0x40) = plVar5;
      local_20 = uVar7;
      plStack_18 = plVar5;
    }
    plVar5 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_30 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
    iVar4 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar4 + 1;
    if (*(int *)(param_1 + 0x34) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar4);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 8) = lVar8;
    *(longlong *)(param_1 + 0x148) = lVar8;
  }
  return lVar8;
}



// FUNCTION 140ded9e0 GetFormat body=4 status=ok
// SIG undefined GetFormat(void)

undefined4 FWmfMediaTextureSample::GetFormat(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// FUNCTION 140ded9f0 FUN_140ded9f0 body=242 status=ok
// SIG undefined FUN_140ded9f0(void)

void FUN_140ded9f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined8 local_18;
  longlong *local_10;
  
  if (((*(longlong *)(param_1 + 0xa0) != 0) && (*(longlong *)(param_1 + 0x38) == 0)) &&
     (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x98), cVar6 != '\0')) {
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x98);
    uVar7 = FUN_140bb74b0(uVar7);
    puVar8 = (undefined8 *)FUN_140634b70(uVar7,local_res8,param_1,FUN_140dfd390);
    *(undefined8 *)(param_1 + 0x38) = *puVar8;
    local_18 = *(undefined8 *)(param_1 + 0xa0);
    local_10 = *(longlong **)(param_1 + 0xa8);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x98);
    uVar7 = FUN_140bb74b0(uVar7);
    FUN_140d80f70(uVar7,&local_18);
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140dedaf0 FUN_140dedaf0 body=128 status=ok
// SIG undefined FUN_140dedaf0(void)

longlong FUN_140dedaf0(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142269f40();
  if (lVar2 != 0) {
    lVar2 = FUN_142269f40(param_1);
    if (*(longlong *)(lVar2 + 0x118) != 0) {
      lVar2 = FUN_142269f40(param_1);
      lVar2 = *(longlong *)(lVar2 + 0x118);
      if (lVar2 != 0) {
        lVar3 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return lVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140dedb70 FUN_140dedb70 body=236 status=ok
// SIG undefined FUN_140dedb70(void)

void FUN_140dedb70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686fce0) && (_Init_thread_header(&DAT_14686fce0), DAT_14686fce0 == -1))
  {
    uVar1 = FUN_1414cf540();
    FUN_1414cf540();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SpawnedEnemy",1);
    DAT_14686fcd8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686fce0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_14686fcd8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_14686fcd8 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686fcd8 + 0x30));
  }
  return;
}



// FUNCTION 140dedc60 FUN_140dedc60 body=116 status=ok
// SIG undefined FUN_140dedc60(void)

undefined8 * FUN_140dedc60(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x1f0);
  _Src = *(void **)(param_1 + 0x1e8);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1,0);
  _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
  return param_2;
}



// FUNCTION 140dedce0 FUN_140dedce0 body=109 status=ok
// SIG undefined FUN_140dedce0(void)

longlong FUN_140dedce0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 0x280))(param_2);
    if (lVar2 != 0) {
      param_2 = (longlong *)param_2[0x32e];
    }
    plVar3 = *(longlong **)(param_1 + 0x38);
    plVar1 = plVar3 + *(int *)(param_1 + 0x40);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*(longlong **)(*plVar3 + 0x28) == param_2) {
        return *plVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 140dedd50 FUN_140dedd50 body=678 status=ok
// SIG undefined FUN_140dedd50(void)

longlong * FUN_140dedd50(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((char)param_1[0x23] != '\0') {
    *(undefined4 *)(param_2 + 1) = 1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,0);
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = DAT_1469e9958;
    puVar3[1] = DAT_1469e9960;
    lVar4 = DAT_1469e9968;
    puVar3[2] = DAT_1469e9968;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469e98f8;
    puVar3[1] = DAT_1469e9900;
    lVar4 = DAT_1469e9908;
    puVar3[2] = DAT_1469e9908;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469ea510;
    puVar3[1] = DAT_1469ea518;
    lVar4 = DAT_1469ea520;
    puVar3[2] = DAT_1469ea520;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  cVar5 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar5 == '\0') {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469e9b98;
    puVar3[1] = DAT_1469e9ba0;
    lVar4 = DAT_1469e9ba8;
    puVar3[2] = DAT_1469e9ba8;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469e9dc0;
    puVar3[1] = DAT_1469e9dc8;
    lVar4 = DAT_1469e9dd0;
    puVar3[2] = DAT_1469e9dd0;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469ea030;
    puVar3[1] = DAT_1469ea038;
    lVar4 = DAT_1469ea040;
    puVar3[2] = DAT_1469ea040;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
  *puVar3 = DAT_1469ea558;
  puVar3[1] = DAT_1469ea560;
  lVar4 = DAT_1469ea568;
  puVar3[2] = DAT_1469ea568;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
  *puVar3 = DAT_1469ea570;
  puVar3[1] = DAT_1469ea578;
  lVar4 = DAT_1469ea580;
  puVar3[2] = DAT_1469ea580;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140dee000 FUN_140dee000 body=189 status=ok
// SIG undefined FUN_140dee000(void)

undefined8 FUN_140dee000(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x78);
  iVar1 = *(int *)(param_1 + 0x80);
  plVar4 = plVar2;
  while( true ) {
    if (plVar4 == plVar2 + (longlong)iVar1 * 6) {
      return 0;
    }
    if ((*plVar4 != 0) && (cVar3 = (*(code *)**(undefined8 **)*param_2)(), cVar3 != '\0')) break;
    plVar4 = plVar4 + 6;
  }
  iVar1 = (int)(((longlong)plVar4 - (longlong)plVar2) / 0x30);
  if (iVar1 < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x80) <= iVar1) {
    return 0;
  }
  FUN_140de18f0(param_3,(longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x78));
  return 1;
}



// FUNCTION 140dee0c0 FUN_140dee0c0 body=11 status=ok
// SIG undefined FUN_140dee0c0(void)

undefined8 * FUN_140dee0c0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x3c);
  return param_2;
}



// FUNCTION 140dee0d0 FUN_140dee0d0 body=68 status=ok
// SIG undefined FUN_140dee0d0(void)

void FUN_140dee0d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(int *)(param_1 + 0x18) == 2) && (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x10))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
    FUN_1404c0750(param_2,lVar1);
    *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(lVar1 + 0xb8);
  }
  return;
}



// FUNCTION 140dee130 FUN_140dee130 body=1151 status=ok
// SIG undefined FUN_140dee130(void)

longlong *
FUN_140dee130(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  void **ppvVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  undefined8 local_50;
  longlong local_48 [2];
  
  lVar7 = *(longlong *)(param_1 + 0x468);
  lVar9 = (longlong)*(int *)(param_1 + 0x470) * 0x60 + lVar7;
  do {
    if (lVar7 == lVar9) {
      *param_2 = 0;
      param_2[1] = 0x16;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"Could not find class!",0x2c);
      lVar7 = *(longlong *)(param_3 + 0x18);
LAB_140dee1c8:
      if (lVar7 != 0) {
        FMemory::Free();
      }
      return param_2;
    }
    cVar3 = FSoftObjectPath::operator==(lVar7 + 0x18,param_3 + 0x10);
    if (cVar3 != '\0') {
      puVar4 = (undefined8 *)FText::ToString(param_1 + 0x1a8);
      puVar8 = (undefined2 *)0x0;
      local_68 = (void *)0x0;
      local_60 = *(int *)(puVar4 + 1);
      lVar9 = (longlong)local_60;
      pvVar1 = (void *)*puVar4;
      iVar6 = 0;
      if (local_60 == 0) {
        local_5c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
        _guard_xfg_dispatch_icall_nop(local_68,pvVar1,lVar9 * 2);
      }
      local_58 = (undefined2 *)0x0;
      local_50 = 0;
      FString::AppendInt(&local_58,param_4);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar10 = local_58;
      }
      ppvVar5 = (void **)FString::Replace(&local_68,local_48,L"$RANK$",puVar10,1);
      if (&local_68 != ppvVar5) {
        if (local_68 != (void *)0x0) {
          FMemory::Free();
        }
        local_68 = *ppvVar5;
        *ppvVar5 = (void *)0x0;
        local_60 = *(int *)(ppvVar5 + 1);
        local_5c = *(undefined4 *)((longlong)ppvVar5 + 0xc);
        ppvVar5[1] = (void *)0x0;
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_58 = (undefined2 *)0x0;
      local_50 = 0;
      FString::AppendInt(&local_58,param_5);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar10 = local_58;
      }
      ppvVar5 = (void **)FString::Replace(&local_68,local_48,L"$TIER$",puVar10,1);
      if (&local_68 != ppvVar5) {
        if (local_68 != (void *)0x0) {
          FMemory::Free();
        }
        local_68 = *ppvVar5;
        *ppvVar5 = (void *)0x0;
        local_60 = *(int *)(ppvVar5 + 1);
        local_5c = *(undefined4 *)((longlong)ppvVar5 + 0xc);
        ppvVar5[1] = (void *)0x0;
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_58 = (undefined2 *)0x0;
      local_50 = 0;
      FString::AppendInt(&local_58,param_6);
      puVar10 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar10 = local_58;
      }
      ppvVar5 = (void **)FString::Replace(&local_68,local_48,L"$VALUE$",puVar10,1);
      if (&local_68 != ppvVar5) {
        if (local_68 != (void *)0x0) {
          FMemory::Free();
        }
        local_68 = *ppvVar5;
        *ppvVar5 = (void *)0x0;
        local_60 = *(int *)(ppvVar5 + 1);
        local_5c = *(undefined4 *)((longlong)ppvVar5 + 0xc);
        ppvVar5[1] = (void *)0x0;
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      puVar4 = (undefined8 *)FText::ToString(lVar7 + 0x30);
      local_58 = (undefined2 *)0x0;
      iVar12 = *(int *)(puVar4 + 1);
      pvVar1 = (void *)*puVar4;
      local_50._0_4_ = iVar12;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_58,(2 - (uint)(iVar12 != 0)) + iVar12,0);
      puVar10 = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,pvVar1,(longlong)iVar12 * 2);
      iVar12 = (int)local_50;
      lVar7 = (longlong)(int)local_50;
      local_50._0_4_ = (2 - (uint)((int)local_50 != 0)) + (int)local_50;
      if (local_50._4_4_ < (int)local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar12);
        puVar10 = local_58;
      }
      pvVar1 = local_68;
      puVar10[lVar7 - (ulonglong)(iVar12 != 0)] = 0x20;
      (puVar10 + (lVar7 - (ulonglong)(iVar12 != 0)))[1] = 0;
      if ((int)local_50 < 2) {
        lVar7 = (longlong)local_60;
        local_58 = (undefined2 *)0x0;
        local_50 = CONCAT44(local_50._4_4_,local_60);
        if (local_60 == 0) {
          iVar12 = 0;
          iVar11 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_60,0);
          puVar8 = local_58;
          _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar7 * 2);
          iVar12 = (int)local_50;
          iVar11 = local_50._4_4_;
        }
        if (puVar10 != (undefined2 *)0x0) {
          FMemory::Free(puVar10);
        }
      }
      else {
        if (local_60 != 0) {
          iVar6 = local_60 + -1;
        }
        if (((int)local_50 != 0) || (iVar12 = 1, iVar6 == 0)) {
          iVar12 = 0;
        }
        iVar11 = local_50._4_4_;
        iVar2 = (int)local_50;
        local_58 = puVar10;
        if (local_50._4_4_ < iVar12 + (int)local_50 + iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
          iVar11 = local_50._4_4_;
          iVar2 = (int)local_50;
        }
        pvVar1 = local_68;
        puVar8 = local_58;
        iVar12 = iVar2;
        if (iVar6 != 0) {
          iVar12 = iVar6 + (uint)(iVar2 == 0) + iVar2;
          local_50 = CONCAT44(local_50._4_4_,iVar12);
          if (iVar11 < iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar2);
            iVar11 = local_50._4_4_;
            iVar12 = (int)local_50;
          }
          puVar8 = local_58;
          puVar10 = local_58 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0));
          _guard_xfg_dispatch_icall_nop(puVar10,pvVar1,(longlong)iVar6 * 2);
          puVar10[iVar6] = 0;
        }
      }
      *param_2 = (longlong)puVar8;
      *(int *)(param_2 + 1) = iVar12;
      *(int *)((longlong)param_2 + 0xc) = iVar11;
      if (local_68 != (void *)0x0) {
        FMemory::Free();
      }
      lVar7 = *(longlong *)(param_3 + 0x18);
      goto LAB_140dee1c8;
    }
    lVar7 = lVar7 + 0x60;
  } while( true );
}



// FUNCTION 140dee5b0 FUN_140dee5b0 body=1230 status=ok
// SIG undefined FUN_140dee5b0(void)

longlong FUN_140dee5b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong *local_128;
  longlong *local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined4 local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if ((*(longlong *)(param_1 + 0xc0) != 0) && (*(longlong *)(param_1 + 200) != 0)) {
    plVar8 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(param_1 + 200) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar2 = *(longlong **)(param_1 + 200);
      plVar9 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar9 = plVar8, !bVar10) {
          LOCK();
          bVar10 = iVar5 == (int)plVar2[1];
          if (bVar10) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar9 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar8 = *(longlong **)(param_1 + 0xc0);
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar10 = iVar5 == 0;
          if (bVar10) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      local_128 = plVar8;
      local_120 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar9 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      lVar6 = FUN_142b45e90();
      cVar3 = FUN_142b549e0(*(undefined8 *)(lVar6 + 0x18),&local_128);
      lVar6 = FUN_142b45e90();
      cVar4 = FUN_142b54910(*(undefined8 *)(lVar6 + 0x18),&local_128);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_d8,L"Not Connected.",L"StreamingInteractionMgr",
                         L"ShiftAccountDisconnectText");
      FText::FText(local_118,uVar7);
      local_100 = DAT_1464aa744;
      FText::FText(local_f8);
      local_e0 = 0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_d0 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_c0,L"You must login to a SHiFT account to continue.",
                         L"StreamingInteractionMgr",L"ShiftAccountDisconnectDescriptionText");
      FText::operator=(local_f8,uVar7);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_b8 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      local_e0 = 1;
      if ((cVar3 == '\0') || (cVar4 == '\0')) {
        if (*(int *)(param_1 + 0xb8) == 1) {
          uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_78,L"No Shift Account.",L"StreamingInteractionMgr",
                             L"NoShiftAccount");
          FText::operator=(local_118,uVar7);
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_70 + 1;
            lVar6 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar1 = (int *)((longlong)local_70 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_70 + 8))(local_70,1);
              }
            }
          }
          local_100 = DAT_1464aa738;
          uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_60,
                             L"Please create and login to a SHiFT account to use the Twitch extension."
                             ,L"StreamingInteractionMgr",L"ShiftAccountNoAccountDescriptionText");
          FText::operator=(local_f8,uVar7);
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_58 + 1;
            lVar6 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar1 = (int *)((longlong)local_58 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_58 + 8))(local_58,1);
              }
            }
          }
        }
      }
      else {
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_a8,L"Logged In!",L"StreamingInteractionMgr",
                           L"ShiftAccountLoggedInText");
        FText::operator=(local_118,uVar7);
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_a0 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)local_a0 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
        }
        local_100 = DAT_1464aa73c;
        uVar7 = FText::FText(local_90);
        FText::operator=(local_f8,uVar7);
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_88 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar1 = (int *)((longlong)local_88 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_88 + 8))(local_88,1);
            }
          }
        }
        local_e0 = 0;
      }
      FText::FText(param_2,local_118);
      *(undefined4 *)(param_2 + 0x18) = local_100;
      FText::FText(param_2 + 0x20,local_f8);
      *(undefined1 *)(param_2 + 0x38) = local_e0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_f0 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)local_f0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
      local_40 = local_120;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_110 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)local_110 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          local_40 = local_120;
          if (iVar5 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
            local_40 = local_120;
          }
        }
      }
      goto joined_r0x000140deea3d;
    }
  }
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,&DAT_144555318,L"StreamingInteractionMgr",L"NotAvailableText");
  FText::FText(param_2,uVar7);
  *(undefined4 *)(param_2 + 0x18) = DAT_1464aa730;
  FText::FText(param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x38) = 0;
joined_r0x000140deea3d:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140deea80 FUN_140deea80 body=524 status=ok
// SIG undefined FUN_140deea80(void)

longlong FUN_140deea80(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_78;
  int local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_68,&DAT_144556118,L"StreamingInteractionMgr",L"NotAvailableText");
  FText::FText(param_2,uVar5);
  *(undefined4 *)(param_2 + 0x18) = DAT_1464aa8bc;
  FText::FText(param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x38) = 0;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_50,
                     L"Unexpected error happened while looking up Twitch account associated with this SHiFT Account."
                     ,L"StreamingInteractionMgr",L"StreamingAccountUnexpectedErrorDescriptionText");
  FText::operator=(param_2 + 0x20,uVar5);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x88);
  if (plVar3 == (longlong *)0x0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,
                       L"Enable ECHOCast Twitch extension in the Settings panel to continue.",
                       L"StreamingInteractionMgr",L"TwitchExtensionNotEnabledDescriptionText");
    FText::operator=(param_2 + 0x20,uVar5);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_18 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar1 = (int *)((longlong)local_18 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
    *(undefined1 *)(param_2 + 0x38) = 1;
  }
  else {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_78);
    if (1 < local_70) {
      uVar5 = FText::FromString(local_38,&local_78);
      FText::operator=(param_2,uVar5);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      *(undefined4 *)(param_2 + 0x18) = DAT_1464aa73c;
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 140deec90 FUN_140deec90 body=1218 status=ok
// SIG undefined FUN_140deec90(void)

longlong FUN_140deec90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_138,&DAT_144555760,L"StreamingInteractionMgr",L"NotAvailableText");
  FText::FText(param_2,uVar5);
  *(undefined4 *)(param_2 + 0x18) = DAT_1464aa8bc;
  FText::FText(param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x38) = 0;
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_130 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar2 = (int *)((longlong)local_130 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_120,
                     L"Unexpected error happened while looking up Twitch account associated with this SHiFT Account."
                     ,L"StreamingInteractionMgr",L"StreamingAccountUnexpectedErrorDescriptionText");
  FText::operator=(param_2 + 0x20,uVar5);
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_118 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar2 = (int *)((longlong)local_118 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  *(undefined1 *)(param_2 + 0x38) = 1;
  iVar3 = *(int *)(param_1 + 0xd0);
  if (iVar3 == 0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"Twitch account linked!",L"StreamingInteractionMgr",
                       L"StreamingAccountLinkedText");
    FText::operator=(param_2,uVar5);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    *(undefined4 *)(param_2 + 0x18) = DAT_1464aa73c;
    uVar5 = FText::FText(local_30);
    FText::operator=(param_2 + 0x20,uVar5);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  else {
    if (iVar3 == 1) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_78,L"Network failure.",L"StreamingInteractionMgr",
                         L"NetworkFailureText");
      FText::operator=(param_2,uVar5);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      *(undefined4 *)(param_2 + 0x18) = DAT_1464aa738;
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_60,L"Something went wrong with the network. Please try again later.",
                         L"StreamingInteractionMgr",L"NetworkFailureDescriptionText");
      FText::operator=(param_2 + 0x20,uVar5);
    }
    else if (iVar3 == 3) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_a8,L"No Twitch account linked.",L"StreamingInteractionMgr",
                         L"NoStreamingAccountText");
      FText::operator=(param_2,uVar5);
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar2 = (int *)((longlong)local_a0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      *(undefined4 *)(param_2 + 0x18) = DAT_1464aa744;
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_90,
                         L"You must link a Twitch account to your Shift account to continue.",
                         L"StreamingInteractionMgr",L"NoStreamingAccountDescriptionText");
      FText::operator=(param_2 + 0x20,uVar5);
      local_58 = local_88;
    }
    else {
      if (iVar3 != 6) {
        return param_2;
      }
      if (*(longlong *)(param_1 + 0x88) == 0) {
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_d8,L"Streaming service settings is off.",L"StreamingInteractionMgr"
                           ,L"StreamingServiceOffText");
        FText::operator=(param_2,uVar5);
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)local_d0 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_d0 + 8))(local_d0,1);
            }
          }
        }
        *(undefined4 *)(param_2 + 0x18) = DAT_1464aa738;
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_c0,
                           L"Enable ECHOCast Twitch extension in the Settings panel to continue.",
                           L"StreamingInteractionMgr",
                           L"StreamingServiceBadRequestButOffDescriptionText");
        FText::operator=(param_2 + 0x20,uVar5);
        local_58 = local_b8;
      }
      else {
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_108,L"Bad request.",L"StreamingInteractionMgr",L"BadRequestText");
        FText::operator=(param_2,uVar5);
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_100 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar2 = (int *)((longlong)local_100 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_100 + 8))(local_100,1);
            }
          }
        }
        *(undefined4 *)(param_2 + 0x18) = DAT_1464aa738;
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_f0,L"Bad request. Please try again later.",
                           L"StreamingInteractionMgr",L"BadRequestDescriptionText");
        FText::operator=(param_2 + 0x20,uVar5);
        local_58 = local_e8;
      }
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140def160 FUN_140def160 body=722 status=ok
// SIG undefined FUN_140def160(void)

longlong FUN_140def160(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong local_a8 [3];
  int local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_88,&DAT_144556920,L"StreamingInteractionMgr",L"NotAvailableText");
  FText::FText(param_2,uVar6);
  *(undefined4 *)(param_2 + 0x18) = DAT_1464aa8bc;
  FText::FText(param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x38) = 0;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_70,L"Unexpected error happened while looking up channel title.",
                     L"StreamingInteractionMgr",L"ChannelTitleUnexpectedErrorDescriptionText");
  FText::operator=(param_2 + 0x20,uVar6);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x58))();
    if (cVar5 == '\0') {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"Not live streaming.",L"StreamingInteractionMgr",
                         L"NotLiveStreamingText");
      FText::operator=(param_2,uVar6);
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
      *(undefined4 *)(param_2 + 0x18) = DAT_1464aa744;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x48))
                (*(longlong **)(param_1 + 0x88),local_a8 + 2);
      if (local_90 < 2) {
        local_a8[1] = 0xe;
        local_a8[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
        FGenericPlatformString::Memcpy(local_a8[0],L"(Empty Title)",0x1c);
        uVar6 = FText::FromString(local_40,local_a8);
        FText::operator=(param_2,uVar6);
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
            if (iVar3 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
      }
      else {
        uVar6 = FText::FromString(local_58,local_a8 + 2);
        FText::operator=(param_2,uVar6);
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
            if (iVar3 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
      }
      *(undefined4 *)(param_2 + 0x18) = DAT_1464aa73c;
      if (local_a8[2] != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 140def440 FUN_140def440 body=817 status=ok
// SIG undefined FUN_140def440(void)

longlong FUN_140def440(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong local_c8;
  int local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_b8,&DAT_144556450,L"StreamingInteractionMgr",L"NotAvailableText");
  FText::FText(param_2,uVar6);
  *(undefined4 *)(param_2 + 0x18) = DAT_1464aa8bc;
  FText::FText(param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x38) = 0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a0,
                     L"Unexpected error happened while looking up Twitch extension version.",
                     L"StreamingInteractionMgr",L"ExtensionVersionUnexpectedErrorDescriptionText");
  FText::operator=(param_2 + 0x20,uVar6);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  *(undefined1 *)(param_2 + 0x38) = 1;
  if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,
                       L"Enable ECHOCast Twitch extension in the Settings panel to continue.",
                       L"StreamingInteractionMgr",L"StreamingServiceOffDescriptionText");
    FText::operator=(param_2 + 0x20,uVar6);
  }
  else {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x40))();
    if (cVar5 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x38))
                (*(longlong **)(param_1 + 0x88),&local_c8);
      if (1 < local_c0) {
        uVar6 = FText::FromString(local_88,&local_c8);
        FText::operator=(param_2,uVar6);
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)local_80 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
        *(undefined4 *)(param_2 + 0x18) = DAT_1464aa73c;
        uVar6 = FText::FText(local_70);
        FText::operator=(param_2 + 0x20,uVar6);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)local_68 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
        *(undefined1 *)(param_2 + 0x38) = 0;
      }
      if (local_c8 == 0) {
        return param_2;
      }
      FMemory::Free();
      return param_2;
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"No extension installed.",L"StreamingInteractionMgr",
                       L"NoExtensionInstalledText");
    FText::operator=(param_2,uVar6);
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
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    *(undefined4 *)(param_2 + 0x18) = DAT_1464aa744;
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,
                       L"You must install the Twitch extension on your Twitch account to continue.",
                       L"StreamingInteractionMgr",L"NoExtensionInstalledDescriptionText");
    FText::operator=(param_2 + 0x20,uVar6);
    local_20 = local_38;
  }
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
  return param_2;
}



// FUNCTION 140def780 FUN_140def780 body=8 status=ok
// SIG undefined FUN_140def780(void)

undefined8 FUN_140def780(void)

{
  return DAT_14686f688;
}



// FUNCTION 140def790 FUN_140def790 body=445 status=ok
// SIG undefined FUN_140def790(void)

longlong FUN_140def790(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_58,&DAT_144556d38,L"StreamingInteractionMgr",L"NotAvailableText");
  FText::FText(param_2,uVar7);
  *(undefined4 *)(param_2 + 0x18) = DAT_1464aa8bc;
  FText::FText(param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x38) = 0;
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
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x58))();
    if (cVar5 == '\0') {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"Not live streaming.",L"StreamingInteractionMgr",
                         L"NotLiveStreamingText");
      FText::operator=(param_2,uVar7);
      uVar6 = DAT_1464aa744;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        uVar6 = DAT_1464aa744;
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          uVar6 = DAT_1464aa744;
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
            uVar6 = DAT_1464aa744;
          }
        }
      }
    }
    else {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x50))();
      FString::PrintfImpl(local_68,&DAT_144554c94,uVar6);
      uVar7 = FText::FromString(local_40,local_68);
      FText::operator=(param_2,uVar7);
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
          if (iVar3 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
      uVar6 = DAT_1464aa73c;
      if (local_68[0] != 0) {
        FMemory::Free();
        uVar6 = DAT_1464aa73c;
      }
    }
    *(undefined4 *)(param_2 + 0x18) = uVar6;
  }
  return param_2;
}



// FUNCTION 140def950 FUN_140def950 body=1011 status=ok
// SIG undefined FUN_140def950(void)

ulonglong FUN_140def950(longlong *param_1)

{
  undefined2 *puVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 local_res18;
  undefined2 *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  void *local_48;
  int local_40;
  
  lVar15 = *param_1;
  uVar18 = 0;
  local_68 = (undefined2 *)0x0;
  local_60 = 0;
  lVar17 = (longlong)(int)param_1[1] * 0x30 + lVar15;
joined_r0x000140def98a:
  if (lVar15 == lVar17) {
    plVar16 = (longlong *)param_1[5];
    uVar14 = (longlong)(int)param_1[6] & 0x1fffffffffffffff;
    if (plVar16 + (int)param_1[6] < plVar16) {
      uVar14 = uVar18;
    }
    if (uVar14 != 0) {
      do {
        if ((longlong *)*plVar16 != (longlong *)0x0) {
          uVar5 = (**(code **)(*(longlong *)*plVar16 + 0x278))();
          FString::PrintfImpl(&local_48,&DAT_144550a50,uVar5);
          pvVar4 = local_48;
          uVar9 = local_60;
          iVar13 = 0;
          if (local_40 != 0) {
            iVar13 = local_40 + -1;
          }
          if (iVar13 != 0) {
            iVar3 = (int)local_60;
            lVar15 = (longlong)(int)local_60;
            iVar6 = (uint)((int)local_60 == 0) + (int)local_60 + iVar13;
            local_60 = CONCAT44(local_60._4_4_,iVar6);
            if (local_60._4_4_ < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar9 & 0xffffffff);
            }
            puVar1 = local_68 + (lVar15 - (ulonglong)(iVar3 != 0));
            _guard_xfg_dispatch_icall_nop(puVar1,pvVar4,(longlong)iVar13 * 2);
            puVar1[iVar13] = 0;
          }
          if (local_48 != (void *)0x0) {
            FMemory::Free(local_48);
          }
        }
        plVar16 = plVar16 + 1;
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar14);
    }
    puVar1 = local_68;
    puVar12 = &DAT_143f3eda8;
    if ((int)local_60 != 0) {
      puVar12 = local_68;
    }
    uVar18 = FUN_140438070(puVar12);
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
      uVar18 = uVar18 & 0xffffffff;
    }
    return uVar18;
  }
  lVar7 = FUN_1405ec200(lVar15);
  if (lVar7 != 0) {
    lVar8 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar8 = FUN_1430f1090();
      do {
        if (lVar7 == lVar8) break;
        lVar7 = *(longlong *)(lVar7 + 0x30);
      } while (lVar7 != 0);
    }
  }
  lVar7 = FWeakObjectPtr::Get(lVar15);
  if (lVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar15 + 8)) && (*(longlong *)(lVar15 + 0x10) != 0)) {
      lVar7 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar15,lVar7);
      if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar15 + 8) = DAT_1464b56f4;
      }
      lVar7 = FWeakObjectPtr::Get(lVar15);
      if (lVar7 != 0) goto LAB_140defa67;
    }
  }
  else {
LAB_140defa67:
    lVar8 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar8 = FUN_1430f1090();
      do {
        if (lVar7 == lVar8) {
          uVar9 = FWeakObjectPtr::Get(lVar15);
          uVar14 = uVar18;
          if (uVar9 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 == *(int *)(lVar15 + 8)) || (*(longlong *)(lVar15 + 0x10) == 0))
            goto LAB_140defb81;
            lVar7 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar15,lVar7);
            if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar15 + 8) = DAT_1464b56f4;
            }
            uVar9 = FWeakObjectPtr::Get(lVar15);
            if (uVar9 == 0) goto LAB_140defb81;
          }
          lVar7 = FUN_14171bfe0();
          if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140defb81;
          uVar10 = FUN_1430f1090();
          uVar11 = uVar9;
          goto LAB_140defb70;
        }
        lVar7 = *(longlong *)(lVar7 + 0x30);
      } while (lVar7 != 0);
    }
  }
  goto LAB_140defc10;
  while (uVar11 = *(ulonglong *)(uVar11 + 0x30), uVar14 = uVar18, uVar11 != 0) {
LAB_140defb70:
    uVar14 = uVar9;
    if (uVar11 == uVar10) break;
  }
LAB_140defb81:
  local_res18 = *(undefined8 *)(uVar14 + 0x18);
  FName::ToString(&local_res18,&local_58);
  pvVar4 = local_58;
  uVar14 = local_60;
  iVar13 = 0;
  if (local_50 != 0) {
    iVar13 = local_50 + -1;
  }
  if (iVar13 != 0) {
    iVar3 = (int)local_60;
    lVar7 = (longlong)(int)local_60;
    iVar6 = (uint)((int)local_60 == 0) + (int)local_60 + iVar13;
    local_60 = CONCAT44(local_60._4_4_,iVar6);
    if (local_60._4_4_ < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar14 & 0xffffffff);
    }
    puVar1 = local_68 + (lVar7 - (ulonglong)(iVar3 != 0));
    _guard_xfg_dispatch_icall_nop(puVar1,pvVar4,(longlong)iVar13 * 2);
    puVar1[iVar13] = 0;
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
LAB_140defc10:
  lVar15 = lVar15 + 0x30;
  goto joined_r0x000140def98a;
}



// FUNCTION 140defd50 FUN_140defd50 body=416 status=ok
// SIG undefined FUN_140defd50(void)

ulonglong FUN_140defd50(longlong param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  undefined2 *local_28;
  int local_20;
  int local_1c;
  
  puVar2 = (undefined8 *)FTextInspector::GetSourceString(param_1 + 0x48);
  puVar3 = (undefined8 *)FTextInspector::GetSourceString(param_1 + 0x30);
  iVar10 = *(int *)(puVar2 + 1);
  puVar8 = (undefined2 *)0x0;
  local_20 = *(int *)(puVar3 + 1);
  lVar5 = (longlong)local_20;
  if (local_20 < 2) {
    pvVar1 = (void *)*puVar2;
    local_28 = (undefined2 *)0x0;
    local_20 = iVar10;
    if (iVar10 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,iVar10,0);
      puVar8 = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,pvVar1,(longlong)iVar10 * 2);
      iVar10 = local_20;
    }
  }
  else {
    iVar7 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar7 = 0;
    }
    if ((local_20 != 0) || (iVar10 = 1, iVar7 == 0)) {
      iVar10 = 0;
    }
    pvVar1 = (void *)*puVar3;
    local_28 = (undefined2 *)0x0;
    if ((local_20 == 0) && (iVar7 + iVar10 == 0)) {
      local_1c = 0;
      iVar9 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20 + iVar7 + iVar10,0);
      puVar8 = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar5 * 2);
      iVar9 = local_20;
    }
    pvVar1 = (void *)*puVar2;
    iVar10 = iVar9;
    if (iVar7 != 0) {
      local_20 = iVar7 + (uint)(iVar9 == 0) + iVar9;
      if (local_1c < local_20) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar9);
        puVar8 = local_28;
      }
      iVar10 = local_20;
      _guard_xfg_dispatch_icall_nop
                (puVar8 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),pvVar1,(longlong)iVar7 * 2);
      (puVar8 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[iVar7] = 0;
    }
  }
  puVar6 = &DAT_143f3eda8;
  if (iVar10 != 0) {
    puVar6 = puVar8;
  }
  uVar4 = FUN_140438070(puVar6);
  if (puVar8 != (undefined2 *)0x0) {
    FMemory::Free(puVar8);
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 140defef0 FUN_140defef0 body=136 status=ok
// SIG undefined FUN_140defef0(void)

void FUN_140defef0(longlong param_1)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((((*(float *)(param_1 + 0x4d8) != 0.0) || (*(longlong *)(param_1 + 0x4e0) != 0)) ||
      (*(int *)(param_1 + 0x4e8) != 0)) ||
     (((*(int *)(param_1 + 0x4ec) != 0 || (*(int *)(param_1 + 0x4f0) != 0)) ||
      (*(int *)(param_1 + 0x4f4) != 0)))) {
    local_28 = *(undefined4 *)(param_1 + 0x4d8);
    uStack_24 = *(undefined4 *)(param_1 + 0x4dc);
    uStack_20 = *(undefined4 *)(param_1 + 0x4e0);
    uStack_1c = *(undefined4 *)(param_1 + 0x4e4);
    local_18 = *(undefined4 *)(param_1 + 0x4e8);
    uStack_14 = *(undefined4 *)(param_1 + 0x4ec);
    uStack_10 = *(undefined4 *)(param_1 + 0x4f0);
    uStack_c = *(undefined4 *)(param_1 + 0x4f4);
    FUN_1414d1b10(local_28,&local_28);
    *(undefined4 *)(param_1 + 0x4d8) = 0;
    *(undefined8 *)(param_1 + 0x4e8) = 0;
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    *(undefined8 *)(param_1 + 0x4e0) = 0;
  }
  return;
}



// FUNCTION 140deffe0 GetWorld body=15 status=ok
// SIG undefined GetWorld(void)

undefined8 UReplicationGraphNode::GetWorld(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8);
  }
  return 0;
}



// FUNCTION 140defff0 FUN_140defff0 body=258 status=ok
// SIG undefined FUN_140defff0(void)

undefined8 * FUN_140defff0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_28 = *(longlong *)(param_1 + 0xa0);
  if (local_28 != 0) {
    local_20 = *(longlong **)(param_1 + 0xa8);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    lVar5 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_18,&local_28);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (local_18 != 0) {
      uVar6 = FUN_14057c410();
      FString::operator=(param_2,uVar6);
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_10 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 140df0100 FUN_140df0100 body=153 status=ok
// SIG undefined FUN_140df0100(void)

undefined4 FUN_140df0100(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  uVar6 = 0;
  FUN_1404cf890(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    uVar6 = (**(code **)(*local_18 + 0x68))(local_18,param_1 + 0x50);
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 140df01a0 FUN_140df01a0 body=327 status=ok
// SIG undefined FUN_140df01a0(void)

undefined4 FUN_140df01a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1404cf890(&local_28,0);
    plVar5 = local_20;
    if (local_28 != (longlong *)0x0) {
      local_18 = *(undefined8 *)(param_1 + 0xa0);
      local_10 = *(longlong **)(param_1 + 0xa8);
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      uVar6 = (**(code **)(*local_28 + 0x68))(local_28,&local_18);
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
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
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
      return uVar6;
    }
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
  return 0;
}



// FUNCTION 140df02f0 FUN_140df02f0 body=782 status=ok
// SIG undefined FUN_140df02f0(void)

void FUN_140df02f0(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  void **ppvVar6;
  longlong local_108;
  undefined8 local_100;
  char local_f8 [8];
  longlong local_f0 [10];
  void *local_a0;
  undefined8 local_98;
  longlong local_88;
  longlong local_80;
  longlong local_78 [5];
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48 [2];
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_88 = 0;
  local_80 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  plVar4 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x28))((longlong *)*param_3,local_48);
  if (&local_88 != plVar4) {
    local_88 = *plVar4;
    *plVar4 = 0;
    local_80 = plVar4[1];
    plVar4[1] = 0;
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_108 = 0;
  local_100 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  lVar3 = local_108;
  FGenericPlatformString::Memcpy(local_108,L"friend",0xe);
  local_50 = (undefined4)local_100;
  local_f8[0] = param_4 == 0;
  local_4c = local_100._4_4_;
  local_78[4] = lVar3;
  local_f0[0] = 0;
  local_f0[1] = 0;
  local_f0[2] = 0;
  local_f0[3] = 0;
  local_f0[4] = 0;
  local_f0[5] = 0;
  local_f0[6] = 0;
  local_f0[7] = 0;
  local_f0[8] = 0;
  local_f0[9] = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  FString::operator=(local_f0,&local_88);
  FString::operator=(local_f0 + 2,local_78);
  FString::operator=(local_f0 + 4,local_78 + 2);
  FString::operator=(local_f0 + 6,local_78 + 4);
  if (local_f8[0] == '\0') {
    plVar4 = (longlong *)FUN_140e22d20(local_38,param_4);
    if (local_f0 + 8 != plVar4) {
      if (local_f0[8] != 0) {
        FMemory::Free();
      }
      local_f0[8] = *plVar4;
      *plVar4 = 0;
      local_f0[9] = plVar4[1];
      plVar4[1] = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"You have accepted the SHiFT friend invite from the target user.",
                       L"Overlay",L"AcceptFriendRequestSuccess");
    ppvVar6 = (void **)FText::ToString(uVar5);
    if (&local_a0 != ppvVar6) {
      iVar2 = *(int *)(ppvVar6 + 1);
      _Src = *ppvVar6;
      local_98 = CONCAT44(local_98._4_4_,iVar2);
      if ((iVar2 == 0) && (local_98._4_4_ == 0)) {
        local_98 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a0,iVar2);
        _guard_xfg_dispatch_icall_nop(local_a0,_Src,(longlong)iVar2 * 2);
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
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  FUN_140ddb6a0(uVar5,"Invitation_Accept_Friend_Invite_Notify_Response",local_f8);
  if (local_a0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_f0[8] != 0) {
    FMemory::Free();
  }
  if (local_f0[6] != 0) {
    FMemory::Free();
  }
  if (local_f0[4] != 0) {
    FMemory::Free();
  }
  if (local_f0[2] != 0) {
    FMemory::Free();
  }
  if (local_f0[0] != 0) {
    FMemory::Free();
  }
  if (local_78[4] != 0) {
    FMemory::Free();
  }
  if (local_78[2] != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df0600 FUN_140df0600 body=411 status=ok
// SIG undefined FUN_140df0600(void)

void FUN_140df0600(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  void **ppvVar5;
  longlong *plVar6;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong local_28;
  longlong local_20;
  void *local_18;
  undefined8 local_10;
  
  local_30[0] = param_4 == 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  if (param_4 == 0) {
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"The target user has received your SHiFT friend request.",
                       L"OakGameInstance",L"AddFriendSuccess_Description");
    ppvVar5 = (void **)FText::ToString(uVar4);
    if (&local_18 != ppvVar5) {
      iVar2 = *(int *)(ppvVar5 + 1);
      _Src = *ppvVar5;
      local_10 = CONCAT44(local_10._4_4_,iVar2);
      if ((iVar2 == 0) && (local_10._4_4_ == 0)) {
        local_10 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,iVar2);
        _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)iVar2 * 2);
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  else {
    plVar6 = (longlong *)FUN_140e22d20(local_58,param_4);
    if (&local_28 != plVar6) {
      if (local_28 != 0) {
        FMemory::Free();
      }
      local_28 = *plVar6;
      *plVar6 = 0;
      local_20 = plVar6[1];
      plVar6[1] = 0;
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  FUN_140ddb9a0(uVar4,"Friend_Add_Friend_Notify_Response",local_30);
  FUN_140ded9f0(param_1);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df07a0 FUN_140df07a0 body=411 status=ok
// SIG undefined FUN_140df07a0(void)

void FUN_140df07a0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  void **ppvVar5;
  longlong *plVar6;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong local_28;
  longlong local_20;
  void *local_18;
  undefined8 local_10;
  
  local_30[0] = param_4 == 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  if (param_4 == 0) {
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"The target user has been blocked on the SHiFT network.",
                       L"OakGameInstance",L"BlockUserSuccess_Description");
    ppvVar5 = (void **)FText::ToString(uVar4);
    if (&local_18 != ppvVar5) {
      iVar2 = *(int *)(ppvVar5 + 1);
      _Src = *ppvVar5;
      local_10 = CONCAT44(local_10._4_4_,iVar2);
      if ((iVar2 == 0) && (local_10._4_4_ == 0)) {
        local_10 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,iVar2);
        _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)iVar2 * 2);
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  else {
    plVar6 = (longlong *)FUN_140e22d20(local_58,param_4);
    if (&local_28 != plVar6) {
      if (local_28 != 0) {
        FMemory::Free();
      }
      local_28 = *plVar6;
      *plVar6 = 0;
      local_20 = plVar6[1];
      plVar6[1] = 0;
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  FUN_140ddb9a0(uVar4,"Friend_Block_Friend_Notify_Response",local_30);
  FUN_140ded9f0(param_1);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df0940 FUN_140df0940 body=782 status=ok
// SIG undefined FUN_140df0940(void)

void FUN_140df0940(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  void **ppvVar6;
  longlong local_108;
  undefined8 local_100;
  char local_f8 [8];
  longlong local_f0 [10];
  void *local_a0;
  undefined8 local_98;
  longlong local_88;
  longlong local_80;
  longlong local_78 [5];
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48 [2];
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_88 = 0;
  local_80 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  plVar4 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x28))((longlong *)*param_3,local_48);
  if (&local_88 != plVar4) {
    local_88 = *plVar4;
    *plVar4 = 0;
    local_80 = plVar4[1];
    plVar4[1] = 0;
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_108 = 0;
  local_100 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  lVar3 = local_108;
  FGenericPlatformString::Memcpy(local_108,L"friend",0xe);
  local_50 = (undefined4)local_100;
  local_f8[0] = param_4 == 0;
  local_4c = local_100._4_4_;
  local_78[4] = lVar3;
  local_f0[0] = 0;
  local_f0[1] = 0;
  local_f0[2] = 0;
  local_f0[3] = 0;
  local_f0[4] = 0;
  local_f0[5] = 0;
  local_f0[6] = 0;
  local_f0[7] = 0;
  local_f0[8] = 0;
  local_f0[9] = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  FString::operator=(local_f0,&local_88);
  FString::operator=(local_f0 + 2,local_78);
  FString::operator=(local_f0 + 4,local_78 + 2);
  FString::operator=(local_f0 + 6,local_78 + 4);
  if (local_f8[0] == '\0') {
    plVar4 = (longlong *)FUN_140e22d20(local_38,param_4);
    if (local_f0 + 8 != plVar4) {
      if (local_f0[8] != 0) {
        FMemory::Free();
      }
      local_f0[8] = *plVar4;
      *plVar4 = 0;
      local_f0[9] = plVar4[1];
      plVar4[1] = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"You have declined the SHiFT friend invite from the target user.",
                       L"Overlay",L"DeclineFriendRequestSuccess");
    ppvVar6 = (void **)FText::ToString(uVar5);
    if (&local_a0 != ppvVar6) {
      iVar2 = *(int *)(ppvVar6 + 1);
      _Src = *ppvVar6;
      local_98 = CONCAT44(local_98._4_4_,iVar2);
      if ((iVar2 == 0) && (local_98._4_4_ == 0)) {
        local_98 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a0,iVar2);
        _guard_xfg_dispatch_icall_nop(local_a0,_Src,(longlong)iVar2 * 2);
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
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  FUN_140ddb6a0(uVar5,"Invitation_Decline_Friend_Invite_Notify_Response",local_f8);
  if (local_a0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_f0[8] != 0) {
    FMemory::Free();
  }
  if (local_f0[6] != 0) {
    FMemory::Free();
  }
  if (local_f0[4] != 0) {
    FMemory::Free();
  }
  if (local_f0[2] != 0) {
    FMemory::Free();
  }
  if (local_f0[0] != 0) {
    FMemory::Free();
  }
  if (local_78[4] != 0) {
    FMemory::Free();
  }
  if (local_78[2] != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df0c50 FUN_140df0c50 body=321 status=ok
// SIG undefined FUN_140df0c50(void)

void FUN_140df0c50(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined2 *local_18;
  undefined8 local_10;
  
  if (param_2 == 0) {
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    cVar4 = FUN_142ab6cb0(param_4,"event_type",&local_18);
    if (cVar4 != '\0') {
      plVar7 = *(longlong **)(param_1 + 0x38);
      plVar1 = plVar7 + *(int *)(param_1 + 0x40);
      for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
        lVar2 = *plVar7;
        if (lVar2 != 0) {
          puVar8 = &DAT_143f3eda8;
          if ((int)local_10 != 0) {
            puVar8 = local_18;
          }
          if (*(int *)(lVar2 + 0x40) == 0) {
            puVar6 = &DAT_143f3eda8;
          }
          else {
            puVar6 = *(undefined2 **)(lVar2 + 0x38);
          }
          iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar8);
          if (iVar5 == 0) {
            plVar7 = (longlong *)*plVar7;
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x2c0))(plVar7,param_3,param_4);
            }
            break;
          }
        }
      }
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
      return;
    }
  }
  else {
    plVar7 = *(longlong **)(param_1 + 0x78);
    plVar1 = plVar7 + *(int *)(param_1 + 0x80);
    if (plVar7 != plVar1) {
      while ((plVar3 = (longlong *)*plVar7, plVar3 == (longlong *)0x0 ||
             (*(int *)((longlong)plVar3 + 0x17c) != param_2))) {
        plVar7 = plVar7 + 1;
        if (plVar7 == plVar1) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2c0))(plVar3,param_3,param_4);
      }
    }
  }
  return;
}



// FUNCTION 140df0da0 FUN_140df0da0 body=829 status=ok
// SIG undefined FUN_140df0da0(void)

void FUN_140df0da0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  undefined2 *puVar7;
  short *psVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 *puVar12;
  short *psVar13;
  longlong lVar14;
  undefined1 local_res10 [8];
  undefined2 *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  local_80 = 0xd;
  lVar14 = 0;
  local_88 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  puVar7 = local_88;
  FGenericPlatformString::Memcpy(local_88,L"EventStarted",0x1a);
  psVar13 = &DAT_143f3eda8;
  puVar12 = &DAT_143f3eda8;
  if ((int)local_80 != 0) {
    puVar12 = puVar7;
  }
  if (*(int *)(param_2 + 1) == 0) {
    psVar8 = &DAT_143f3eda8;
  }
  else {
    psVar8 = (short *)*param_2;
  }
  lVar11 = (longlong)puVar12 - (longlong)psVar8;
  do {
    sVar4 = *psVar8;
    sVar5 = *(short *)((longlong)psVar8 + lVar11);
    if (sVar4 != sVar5) break;
    psVar8 = psVar8 + 1;
  } while (sVar5 != 0);
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  if (sVar4 == sVar5) {
    FUN_142ab6b40(param_3,"event_timestamp",param_1 + 0x170);
    *(undefined1 *)(param_1 + 0x178) = 1;
  }
  else {
    local_78 = (undefined2 *)0x0;
    local_70 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    puVar7 = local_78;
    FGenericPlatformString::Memcpy(local_78,L"EventEnded",0x16);
    puVar12 = &DAT_143f3eda8;
    if ((int)local_70 != 0) {
      puVar12 = puVar7;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar8 = &DAT_143f3eda8;
    }
    else {
      psVar8 = (short *)*param_2;
    }
    lVar11 = (longlong)puVar12 - (longlong)psVar8;
    do {
      sVar4 = *psVar8;
      sVar5 = *(short *)((longlong)psVar8 + lVar11);
      if (sVar4 != sVar5) break;
      psVar8 = psVar8 + 1;
    } while (sVar5 != 0);
    if (puVar7 != (undefined2 *)0x0) {
      FMemory::Free(puVar7);
    }
    if (sVar4 != sVar5) {
      local_68 = (undefined2 *)0x0;
      local_60 = 0x18;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      puVar7 = local_68;
      FGenericPlatformString::Memcpy(local_68,L"NoParticipationReceived",0x30);
      puVar12 = &DAT_143f3eda8;
      if ((int)local_60 != 0) {
        puVar12 = puVar7;
      }
      if (*(int *)(param_2 + 1) != 0) {
        psVar13 = (short *)*param_2;
      }
      lVar11 = (longlong)puVar12 - (longlong)psVar13;
      do {
        sVar4 = *psVar13;
        sVar5 = *(short *)((longlong)psVar13 + lVar11);
        if (sVar4 != sVar5) break;
        psVar13 = psVar13 + 1;
      } while (sVar5 != 0);
      if (puVar7 != (undefined2 *)0x0) {
        FMemory::Free(puVar7);
      }
      if (sVar4 == sVar5) {
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (local_40,L"No Participants",L"StreamingEvent",L"NoParticipantTitle");
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (local_58,L"Event ending, no participants joined.",L"StreamingEvent",
                   L"NoParticipantDesc");
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x148))();
        lVar11 = UGameplayStatics::GetPlayerController(uVar9,0);
        if (lVar11 != 0) {
          lVar10 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (*(longlong *)(lVar11 + 0x1428) != 0)) {
            FUN_1411db4f0(*(longlong *)(lVar11 + 0x1428),local_res10,local_40,local_58,0x40a00000,0,
                          2);
          }
        }
        if (*(longlong *)(param_1 + 0x188) != 0) {
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0xf8);
        }
        if (lVar14 != 0) {
          *(undefined4 *)(param_1 + 0x180) = 2;
          FUN_140de7700(lVar14,param_1);
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
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
    }
  }
  return;
}



// FUNCTION 140df10e0 FUN_140df10e0 body=2395 status=ok
// SIG undefined FUN_140df10e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140df10e0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  ulonglong uVar5;
  void *_Src;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  short *psVar10;
  undefined8 uVar11;
  undefined2 **ppuVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined2 *puVar15;
  code *pcVar16;
  code *pcVar17;
  undefined2 *puVar18;
  uint uVar19;
  undefined2 *puVar20;
  float fVar21;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  float local_210;
  undefined2 *local_208;
  undefined2 *local_200;
  longlong *local_1f8;
  int local_1f0;
  int local_1e8;
  int local_1e4;
  int local_1e0 [2];
  code *local_1d8;
  undefined8 local_1d0;
  code *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  code *local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  ulonglong local_1a0;
  undefined2 *local_198;
  undefined8 local_190;
  undefined2 *local_188;
  undefined8 local_180;
  undefined2 *local_178;
  undefined8 local_170;
  undefined2 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128;
  undefined1 local_120 [16];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  FUN_140df0da0();
  plVar9 = (longlong *)0x0;
  local_170 = 0x13;
  local_178 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  puVar18 = local_178;
  FGenericPlatformString::Memcpy(local_178,L"JoinEventCompleted",0x26);
  puVar20 = &DAT_143f3eda8;
  puVar15 = &DAT_143f3eda8;
  if ((int)local_170 != 0) {
    puVar15 = puVar18;
  }
  if (*(int *)(param_2 + 1) == 0) {
    psVar10 = &DAT_143f3eda8;
  }
  else {
    psVar10 = (short *)*param_2;
  }
  lVar14 = (longlong)puVar15 - (longlong)psVar10;
  do {
    sVar3 = *psVar10;
    sVar4 = *(short *)((longlong)psVar10 + lVar14);
    if (sVar3 != sVar4) break;
    psVar10 = psVar10 + 1;
  } while (sVar4 != 0);
  if (puVar18 != (undefined2 *)0x0) {
    FMemory::Free(puVar18);
  }
  if (sVar3 != sVar4) {
    local_168 = (undefined2 *)0x0;
    local_160 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
    puVar18 = local_168;
    FGenericPlatformString::Memcpy(local_168,L"PollChoiceSelected",0x26);
    puVar15 = &DAT_143f3eda8;
    if ((int)local_160 != 0) {
      puVar15 = puVar18;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar10 = &DAT_143f3eda8;
    }
    else {
      psVar10 = (short *)*param_2;
    }
    lVar14 = (longlong)puVar15 - (longlong)psVar10;
    do {
      sVar3 = *psVar10;
      sVar4 = *(short *)((longlong)psVar10 + lVar14);
      if (sVar3 != sVar4) break;
      psVar10 = psVar10 + 1;
    } while (sVar4 != 0);
    if (puVar18 != (undefined2 *)0x0) {
      FMemory::Free(puVar18);
    }
    if (sVar3 != sVar4) {
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x4bc) = 1;
    local_1e0[0] = -1;
    local_1e8 = -1;
    local_1e4 = -1;
    cVar6 = FUN_142ab6930(param_3,"winning_action_id",local_1e0);
    if (cVar6 == '\0') {
      return;
    }
    cVar6 = FUN_142ab6930(param_3,"vote_count",&local_1e8);
    if (cVar6 == '\0') {
      return;
    }
    cVar6 = FUN_142ab6930(param_3,"winning_vote_count",&local_1e4);
    if (cVar6 == '\0') {
      return;
    }
    if (local_1e8 < 1) {
      return;
    }
    if ((int)param_1[0x71] <= local_1e0[0]) {
      return;
    }
    local_1b8 = (code *)0x0;
    plVar9 = (longlong *)((longlong)local_1e0[0] * 0x60 + param_1[0x70]);
    local_1b0 = 0;
    if (*plVar9 == 0) {
      return;
    }
    if (param_1[0x31] == 0) {
      return;
    }
    *(int *)((longlong)plVar9 + 0x54) = *(int *)((longlong)plVar9 + 0x54) + 1;
    lVar14 = *(longlong *)(param_1[0x31] + 0x100);
    if (lVar14 != 0) {
      local_128 = plVar9[3];
      FString::FString(local_120,plVar9 + 4);
      FUN_1414d10a0(lVar14,&local_128,param_1[0x8e],(int)plVar9[0xb]);
    }
    cVar6 = FText::IsEmpty(plVar9 + 6);
    pcVar16 = local_1b8;
    if (cVar6 == '\0') {
      local_208 = (undefined2 *)0x0;
      local_200 = (undefined2 *)0x0;
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if (*(longlong *)(DAT_146b33f38 + 0xe0) != 0) {
        fVar21 = ((float)local_1e4 / (float)local_1e8) * 100.0;
        uVar11 = FText::ToString(*(longlong *)(DAT_146b33f38 + 0xe0) + 0xe8);
        FString::operator=(&local_208,uVar11);
        local_198 = (undefined2 *)0x0;
        local_190 = 0;
        FString::AppendInt(&local_198,local_1e4);
        local_218 = CONCAT44(local_218._4_4_,1);
        puVar18 = &DAT_143f3eda8;
        if ((int)local_190 != 0) {
          puVar18 = local_198;
        }
        ppuVar12 = (undefined2 **)FString::Replace(&local_208,local_148,L"{COUNT}",puVar18);
        if (&local_208 != ppuVar12) {
          if (local_208 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          local_208 = *ppuVar12;
          *ppuVar12 = (undefined2 *)0x0;
          local_200 = ppuVar12[1];
          ppuVar12[1] = (undefined2 *)0x0;
        }
        if (local_148[0] != 0) {
          FMemory::Free();
        }
        if (local_198 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_188 = (undefined2 *)0x0;
        local_180 = 0;
        FString::AppendInt(&local_188,(int)ROUND(fVar21 + fVar21 + 0.5) >> 1);
        local_218 = CONCAT44(local_218._4_4_,1);
        puVar18 = &DAT_143f3eda8;
        if ((int)local_180 != 0) {
          puVar18 = local_188;
        }
        ppuVar12 = (undefined2 **)FString::Replace(&local_208,local_138,L"{TOTAL_PERCENT}",puVar18);
        if (&local_208 != ppuVar12) {
          if (local_208 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          local_208 = *ppuVar12;
          *ppuVar12 = (undefined2 *)0x0;
          local_200 = ppuVar12[1];
          ppuVar12[1] = (undefined2 *)0x0;
        }
        if (local_138[0] != 0) {
          FMemory::Free();
        }
        if (local_188 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      puVar18 = &DAT_143f3eda8;
      if ((int)local_200 != 0) {
        puVar18 = local_208;
      }
      puVar13 = (undefined8 *)FText::ToString(plVar9 + 6);
      if (*(int *)(puVar13 + 1) != 0) {
        puVar20 = (undefined2 *)*puVar13;
      }
      FString::PrintfImpl(&local_1c8,L"%s %s",puVar20,puVar18);
      if (local_1b8 != (code *)0x0) {
        FMemory::Free();
      }
      local_1b8 = local_1c8;
      local_1b0 = CONCAT44(uStack_1bc,uStack_1c0);
      uVar11 = FText::FromString(local_110,&local_1b8);
      local_218 = 0;
      FUN_140de6a50(param_1[0x31],param_1 + 10,uVar11,0x40a00000);
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_108 + 1;
        lVar14 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar1 = (int *)((longlong)local_108 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_108 + 8))(local_108,1);
          }
        }
      }
      pcVar16 = local_1b8;
      if (local_208 != (undefined2 *)0x0) {
        FMemory::Free();
        pcVar16 = local_1b8;
      }
    }
    goto joined_r0x000140df1a0a;
  }
  *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)((longlong)param_1 + 0x1dc);
  local_f8 = &local_e8;
  *(undefined1 *)((longlong)param_1 + 0x4bd) = 1;
  local_f0 = *(undefined8 *)(param_3 + 8);
  local_e8 = 0;
  local_e0 = 0x4000000000000;
  cVar6 = FUN_142ab6830(param_3,"viewer_user_ids",&local_f8);
  if (cVar6 == '\0') {
    return;
  }
  local_1d8 = (code *)0x0;
  local_1d0 = 0;
  iVar7 = FUN_142ab5710(&local_f8);
  plVar8 = plVar9;
  if (0 < iVar7) {
    do {
      local_1a8 = (void *)0x0;
      local_1a0 = 0;
      cVar6 = FUN_142ab6e70(&local_f8,&local_1a8,plVar8);
      uVar5 = local_1d0;
      if (cVar6 != '\0') {
        lVar14 = (longlong)(int)local_1d0;
        iVar7 = (int)local_1d0 + 1;
        local_1d0 = CONCAT44(local_1d0._4_4_,iVar7);
        if (local_1d0._4_4_ < iVar7) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1d8,uVar5 & 0xffffffff);
        }
        _Src = local_1a8;
        pcVar16 = local_1d8 + lVar14 * 0x10;
        *(undefined8 *)pcVar16 = 0;
        lVar14 = (longlong)(int)local_1a0;
        *(int *)(pcVar16 + 8) = (int)local_1a0;
        if ((int)local_1a0 == 0) {
          *(undefined4 *)(pcVar16 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(pcVar16,local_1a0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(*(void **)pcVar16,_Src,lVar14 * 2);
        }
      }
      if (local_1a8 != (void *)0x0) {
        FMemory::Free();
      }
      uVar19 = (int)plVar8 + 1;
      plVar8 = (longlong *)(ulonglong)uVar19;
      iVar7 = FUN_142ab5710(&local_f8);
    } while ((int)uVar19 < iVar7);
  }
  if (param_1[0x31] != 0) {
    plVar9 = *(longlong **)(param_1[0x31] + 0x88);
  }
  if (plVar9 != (longlong *)0x0) {
    local_1f8 = (longlong *)0x0;
    local_1f0 = 0;
    local_1c8 = FUN_140e0eb10;
    uStack_1c0 = 0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 == (longlong *)0x0) {
      if (((local_1f0 != 0) && (local_1f8 != (longlong *)0x0)) &&
         ((**(code **)(*local_1f8 + 0x28))(local_1f8,0), local_1f8 != (longlong *)0x0)) {
        local_1f8 = (longlong *)FMemory::Realloc(local_1f8,0,0);
      }
    }
    else {
      *plVar8 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      plVar8[2] = (longlong)local_1c8;
      plVar8[3] = CONCAT44(uStack_1bc,uStack_1c0);
      lVar14 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar14;
      *plVar8 = (longlong)&PTR_FUN_143fcff08;
      FUN_1405967c0(plVar8,&local_1f8);
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      lVar14 = FMemory::Realloc(plVar8,0,0);
      if (lVar14 != 0) {
        FMemory::Free(lVar14);
      }
    }
    local_158 = 0;
    local_150 = 0;
    if ((local_1f0 != 0) && (local_1f8 != (longlong *)0x0)) {
      (**(code **)(*local_1f8 + 0x30))(local_1f8,&local_158);
    }
    (**(code **)(*plVar9 + 0xa0))(plVar9,&local_1d8,&local_158);
    if (local_1f0 != 0) {
      if (local_1f8 == (longlong *)0x0) goto LAB_140df143c;
      (**(code **)(*local_1f8 + 0x28))(local_1f8,0);
      if (local_1f8 != (longlong *)0x0) {
        local_1f8 = (longlong *)FMemory::Realloc(local_1f8,0,0);
      }
      local_1f0 = 0;
    }
    if (local_1f8 != (longlong *)0x0) {
      FMemory::Free(local_1f8);
    }
  }
LAB_140df143c:
  *(undefined1 *)((longlong)param_1 + 0x4bc) = 1;
  lVar14 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar14 != 0) {
    local_1c8 = FUN_140e09110;
    uStack_1c0 = 0;
    if (*(longlong *)(lVar14 + 400) == 0) {
      uVar11 = *(undefined8 *)(lVar14 + 0x3f8);
    }
    else {
      uVar11 = *(undefined8 *)(*(longlong *)(lVar14 + 400) + 0x90);
    }
    fVar21 = *(float *)((longlong)param_1 + 0x374);
    fVar2 = *(float *)(param_1 + 0x6e);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      plVar9[2] = (longlong)local_1c8;
      plVar9[3] = CONCAT44(uStack_1bc,uStack_1c0);
      lVar14 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar14;
      *plVar9 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_d8 = 0;
    local_d0 = 0;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_d8);
    }
    FWeakObjectPtr::operator=(local_c8,0);
    local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_c0 = 0;
    local_88 = (longlong *)0x0;
    local_78 = 0;
    local_218 = CONCAT71(local_218._1_7_,1);
    local_210 = fVar21;
    FUN_142880850(uVar11,param_1 + 0x96,&local_d8,fVar21 + fVar2);
    if (local_78 != 0) {
      plVar8 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar8 = local_88;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      lVar14 = FMemory::Realloc(plVar9,0,0);
      if (lVar14 != 0) {
        FMemory::Free(lVar14);
      }
    }
  }
  pcVar17 = local_1d8;
  for (iVar7 = (int)local_1d0; pcVar16 = local_1d8, iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*(longlong *)pcVar17 != 0) {
      FMemory::Free();
    }
    pcVar17 = pcVar17 + 0x10;
  }
joined_r0x000140df1a0a:
  if (pcVar16 != (code *)0x0) {
    FMemory::Free(pcVar16);
  }
  return;
}



// FUNCTION 140df1a40 FUN_140df1a40 body=645 status=ok
// SIG undefined FUN_140df1a40(void)

void FUN_140df1a40(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  undefined2 *puVar6;
  char cVar7;
  short *psVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined2 *local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_140df0da0();
  lVar14 = 0;
  local_80 = 0x12;
  local_88 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  puVar6 = local_88;
  FGenericPlatformString::Memcpy(local_88,L"SelectionReceived",0x24);
  puVar15 = &DAT_143f3eda8;
  puVar12 = &DAT_143f3eda8;
  if ((int)local_80 != 0) {
    puVar12 = puVar6;
  }
  if (*(int *)(param_2 + 1) == 0) {
    psVar8 = &DAT_143f3eda8;
  }
  else {
    psVar8 = (short *)*param_2;
  }
  lVar13 = (longlong)puVar12 - (longlong)psVar8;
  do {
    sVar4 = *psVar8;
    sVar5 = *(short *)((longlong)psVar8 + lVar13);
    if (sVar4 != sVar5) break;
    psVar8 = psVar8 + 1;
  } while (sVar5 != 0);
  if (puVar6 != (undefined2 *)0x0) {
    FMemory::Free(puVar6);
  }
  if (sVar4 == sVar5) {
    cVar7 = FUN_142ab6930(param_3,"winner_count",(longlong)param_1 + 0x28c);
    if (cVar7 != '\0') {
      if (0 < *(int *)((longlong)param_1 + 0x28c)) {
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (local_68,L"viewer(s) won an item!",L"StreamingEvent",L"NbWinners");
        puVar9 = (undefined8 *)FText::ToString(local_68);
        if (*(int *)(puVar9 + 1) != 0) {
          puVar15 = (undefined2 *)*puVar9;
        }
        FString::PrintfImpl(local_78,L"%d %s",*(undefined4 *)((longlong)param_1 + 0x28c),puVar15);
        (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined4 *)((longlong)param_1 + 0x28c));
        uVar10 = FText::FromString(local_38,local_78);
        uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_50,L"Winners",L"StreamingEvent",L"WinnersTitle");
        FUN_140de6a50(param_1[0x31],uVar11,uVar10,0x40a00000,0);
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)local_48 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_48 + 8))(local_48,1);
            }
          }
        }
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)local_30 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
        if (local_78[0] != 0) {
          FMemory::Free();
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
      }
      if (param_1[0x31] != 0) {
        lVar14 = *(longlong *)(param_1[0x31] + 0xf8);
      }
      if (lVar14 != 0) {
        *(undefined4 *)(param_1 + 0x30) = 1;
        FUN_140de7700(lVar14,param_1);
      }
    }
  }
  return;
}



// FUNCTION 140df1cd0 FUN_140df1cd0 body=1857 status=ok
// SIG undefined FUN_140df1cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140df1cd0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  short sVar1;
  short sVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  short *psVar13;
  int *piVar14;
  longlong *plVar15;
  uint uVar16;
  int *piVar17;
  longlong lVar18;
  int *piVar19;
  uint uVar20;
  int *piVar21;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  int *local_e0;
  undefined8 local_d8;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  int *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar10 = param_1[0x31];
  if (lVar10 == 0) {
    return;
  }
  cVar4 = (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x10))(lVar10 + 0x28);
  if (cVar4 == '\0') {
    return;
  }
  FUN_140df0da0(param_1,param_2,param_3);
  piVar14 = (int *)0x0;
  local_d8 = 0xe;
  local_e0 = (int *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
  piVar19 = local_e0;
  FGenericPlatformString::Memcpy(local_e0,L"EventDonation",0x1c);
  uVar16 = 0;
  psVar13 = &DAT_143f3eda8;
  piVar9 = (int *)&DAT_143f3eda8;
  if ((uint)local_d8 != 0) {
    piVar9 = piVar19;
  }
  if (*(int *)(param_2 + 1) == 0) {
    psVar7 = &DAT_143f3eda8;
  }
  else {
    psVar7 = (short *)*param_2;
  }
  lVar10 = (longlong)piVar9 - (longlong)psVar7;
  do {
    sVar1 = *psVar7;
    sVar2 = *(short *)((longlong)psVar7 + lVar10);
    if (sVar1 != sVar2) break;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  if (piVar19 != (int *)0x0) {
    FMemory::Free(piVar19);
  }
  local_e0 = (int *)0x0;
  if (sVar1 == sVar2) {
    local_a8 = (int *)0x0;
    local_a0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    cVar4 = FUN_142ab6cb0(param_3,"transaction_id",&local_a8);
    if (((cVar4 != '\0') &&
        (cVar4 = FUN_142ab6cb0(param_3,"donating_username",&local_b8), cVar4 != '\0')) &&
       (cVar4 = FUN_142ab6cb0(param_3,&DAT_1445560bc,&local_e0), cVar4 != '\0')) {
      FUN_140e03540(param_1,&local_b8,&local_e0,&local_a8);
    }
    if (local_e0 != (int *)0x0) {
      FMemory::Free();
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
    piVar9 = local_a8;
    if (local_a8 == (int *)0x0) {
      return;
    }
  }
  else {
    local_d8 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
    piVar19 = local_e0;
    FGenericPlatformString::Memcpy(local_e0,L"TimerExtended",0x1c);
    piVar9 = (int *)&DAT_143f3eda8;
    if ((uint)local_d8 != 0) {
      piVar9 = piVar19;
    }
    if (*(int *)(param_2 + 1) == 0) {
      psVar7 = &DAT_143f3eda8;
    }
    else {
      psVar7 = (short *)*param_2;
    }
    lVar10 = (longlong)piVar9 - (longlong)psVar7;
    do {
      sVar1 = *psVar7;
      sVar2 = *(short *)((longlong)psVar7 + lVar10);
      if (sVar1 != sVar2) break;
      psVar7 = psVar7 + 1;
    } while (sVar2 != 0);
    if (piVar19 != (int *)0x0) {
      FMemory::Free(piVar19);
    }
    if (sVar1 == sVar2) {
      local_c8 = 0;
      cVar4 = FUN_142ab6a30(param_3,"event_remaining_time",&local_c8);
      if (cVar4 == '\0') {
        return;
      }
      *(int *)((longlong)param_1 + 0x15c) = local_c8;
      return;
    }
    local_e0 = (int *)0x0;
    local_d8._0_4_ = 0x13;
    local_d8._4_4_ = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
    piVar19 = local_e0;
    FGenericPlatformString::Memcpy(local_e0,L"PollChoiceSelected",0x26);
    piVar9 = (int *)&DAT_143f3eda8;
    if ((uint)local_d8 != 0) {
      piVar9 = piVar19;
    }
    if (*(int *)(param_2 + 1) != 0) {
      psVar13 = (short *)*param_2;
    }
    lVar10 = (longlong)piVar9 - (longlong)psVar13;
    do {
      sVar1 = *psVar13;
      sVar2 = *(short *)((longlong)psVar13 + lVar10);
      if (sVar1 != sVar2) break;
      psVar13 = psVar13 + 1;
    } while (sVar2 != 0);
    if (piVar19 != (int *)0x0) {
      FMemory::Free(piVar19);
    }
    if (sVar1 != sVar2) {
      return;
    }
    piVar19 = piVar14;
    if (param_1[0x31] != 0) {
      piVar19 = *(int **)(param_1[0x31] + 0xf8);
    }
    if (piVar19 == (int *)0x0) {
      return;
    }
    plVar15 = *(longlong **)(piVar19 + 0x1e);
    plVar11 = plVar15 + piVar19[0x20];
    if (plVar15 == plVar11) {
      return;
    }
    while ((longlong *)*plVar15 != param_1) {
      plVar15 = plVar15 + 1;
      if (plVar15 == plVar11) {
        return;
      }
    }
    local_c8 = -1;
    local_98 = 0xffffffff;
    local_94 = 0xffffffff;
    local_a8 = piVar19;
    cVar4 = FUN_142ab6930(param_3,"winning_action_id",&local_c8);
    if (cVar4 == '\0') {
      return;
    }
    cVar4 = FUN_142ab6930(param_3,"vote_count",&local_98);
    if (cVar4 == '\0') {
      return;
    }
    cVar4 = FUN_142ab6930(param_3,"winning_vote_count",&local_94);
    if (cVar4 == '\0') {
      return;
    }
    if ((int)param_1[0x8e] <= local_c8) {
      (**(code **)(*param_1 + 0x2f8))(param_1);
      return;
    }
    local_90 = &local_80;
    local_e0 = (int *)0x0;
    local_88 = *(undefined8 *)(param_3 + 8);
    local_d8._4_4_ = 0;
    local_80 = 0;
    local_78 = 0x4000000000000;
    cVar4 = FUN_142ab6830(param_3,"results",&local_90);
    piVar9 = piVar14;
    if (cVar4 == '\0') {
      lVar10 = param_1[0x8d];
      lVar18 = (longlong)(int)param_1[0x8e] * 0x60 + lVar10;
      piVar17 = piVar14;
      uVar16 = 0;
      for (; piVar19 = local_a8, lVar10 != lVar18; lVar10 = lVar10 + 0x60) {
        uVar3 = (ulonglong)local_b8 >> 0x20;
        local_b8 = CONCAT44((int)uVar3,*(undefined4 *)(lVar10 + 0x50));
        iVar6 = rand();
        iVar12 = (int)piVar14;
        local_d8._0_4_ = iVar12 + 1;
        iVar5 = 999;
        if ((int)((float)iVar6 * 0.03051851) < 1000) {
          iVar5 = (int)((float)iVar6 * 0.03051851);
        }
        local_b8 = CONCAT44(iVar5 + 1,(undefined4)local_b8);
        if ((int)piVar17 < (int)(uint)local_d8) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e0,piVar14);
          piVar17 = (int *)(ulonglong)local_d8._4_4_;
          piVar9 = local_e0;
        }
        piVar14 = (int *)(ulonglong)(uint)local_d8;
        *(longlong *)(piVar9 + (longlong)iVar12 * 2) = local_b8;
        uVar16 = (uint)local_d8;
      }
    }
    else {
      iVar5 = FUN_142ab5710(&local_90);
      piVar17 = piVar14;
      piVar21 = piVar14;
      if (0 < iVar5) {
        do {
          local_70 = &local_60;
          local_68 = local_88;
          local_58 = 0x3000000000000;
          local_60 = 0;
          cVar4 = FUN_142ab6c40(&local_90,&local_70,piVar21);
          if (cVar4 != '\0') {
            local_c4 = 0xffffffff;
            local_c0[0] = 0xffffffff;
            cVar4 = FUN_142ab6930(&local_70,"action_id",&local_c4);
            if ((cVar4 != '\0') &&
               (cVar4 = FUN_142ab6930(&local_70,"votes",local_c0), cVar4 != '\0')) {
              iVar5 = (int)piVar14;
              local_b8 = CONCAT44(local_c0[0],local_c4);
              local_d8._0_4_ = iVar5 + 1;
              if ((int)piVar17 < (int)(uint)local_d8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e0,piVar14)
                ;
                piVar17 = (int *)(ulonglong)local_d8._4_4_;
                piVar9 = local_e0;
              }
              piVar14 = (int *)(ulonglong)(uint)local_d8;
              *(longlong *)(piVar9 + (longlong)iVar5 * 2) = local_b8;
            }
          }
          uVar16 = (uint)piVar14;
          uVar20 = (int)piVar21 + 1;
          iVar5 = FUN_142ab5710(&local_90);
          piVar19 = local_a8;
          piVar21 = (int *)(ulonglong)uVar20;
        } while ((int)uVar20 < iVar5);
      }
    }
    AlgoImpl::
    IntroSortInternal<StairConnectionWeight,FIdentityFunctor,TDereferenceWrapper<StairConnectionWeight,TLess<StairConnectionWeight>_>_>
              (piVar9,(longlong)(int)uVar16,local_e8[0],local_e8);
    if ((int)uVar16 < 2) {
      (**(code **)(*param_1 + 0x2f8))(param_1);
      if (piVar9 == (int *)0x0) {
        return;
      }
    }
    else {
      plVar11 = (longlong *)((longlong)*piVar9 * 0x60 + param_1[0x8d]);
      plVar15 = (longlong *)((longlong)piVar9[2] * 0x60 + param_1[0x8d]);
      if (((*plVar11 != 0) && (*plVar15 != 0)) && (param_1[0x31] != 0)) {
        *(int *)((longlong)plVar11 + 0x54) = *(int *)((longlong)plVar11 + 0x54) + 1;
        *(int *)((longlong)plVar15 + 0x54) = *(int *)((longlong)plVar15 + 0x54) + 1;
        lVar10 = *(longlong *)(param_1[0x31] + 0x100);
        if (lVar10 != 0) {
          local_e0 = (int *)plVar11[3];
          FString::FString(&local_d8,plVar11 + 4);
          FUN_1414d10a0(lVar10,&local_e0,param_1[0x99],0x3f800000);
          local_e0 = (int *)plVar15[3];
          FString::FString(&local_d8,plVar15 + 4);
          FUN_1414d10a0(lVar10,&local_e0,param_1[0x99],0x40000000);
        }
        if (param_1[0x99] != 0) {
          iVar5 = FUN_140dea7e0(param_1 + 0xa8);
          if (-1 < iVar5) {
            uVar8 = FString::FString(&local_e0,param_1[0xa8] + 8 + (longlong)iVar5 * 0x20);
            FUN_140b0e0c0(param_1[0x99],uVar8);
          }
          iVar5 = FUN_140dea6e0(param_1 + 0xa8);
          if (-1 < iVar5) {
            lVar10 = param_1[0xa8];
            uVar8 = FString::FString(&local_e0,lVar10 + 8 + (longlong)iVar5 * 0x20);
            FUN_140b0e480(param_1[0x99],uVar8,
                          *(undefined4 *)((longlong)iVar5 * 0x20 + 0x1c + lVar10));
          }
          *(undefined4 *)(param_1 + 0x30) = 1;
          FUN_140de7700(piVar19,param_1);
        }
      }
    }
  }
  FMemory::Free(piVar9);
  return;
}



// FUNCTION 140df2420 FUN_140df2420 body=1230 status=ok
// SIG undefined FUN_140df2420(void)

void FUN_140df2420(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined2 **ppuVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  float fVar15;
  int local_res10 [2];
  int local_res20 [2];
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar16;
  undefined2 *local_f8;
  undefined2 *local_f0;
  int local_e8 [2];
  longlong local_e0;
  undefined8 local_d8;
  undefined2 *local_d0;
  undefined8 local_c8;
  undefined2 *local_c0;
  undefined8 local_b8;
  undefined2 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90 [2];
  longlong local_80 [2];
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  longlong *local_38;
  
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  local_a8 = 0x13;
  lVar11 = 0;
  local_b0 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0,0);
  puVar14 = local_b0;
  FGenericPlatformString::Memcpy(local_b0,L"PollChoiceSelected",0x26);
  puVar9 = &DAT_143f3eda8;
  if ((int)local_a8 != 0) {
    puVar9 = puVar14;
  }
  if (*(int *)(param_2 + 1) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = (short *)*param_2;
  }
  lVar10 = (longlong)puVar9 - (longlong)psVar6;
  do {
    sVar3 = *psVar6;
    sVar4 = *(short *)((longlong)psVar6 + lVar10);
    if (sVar3 != sVar4) break;
    psVar6 = psVar6 + 1;
  } while (sVar4 != 0);
  if (puVar14 != (undefined2 *)0x0) {
    FMemory::Free(puVar14);
  }
  if (sVar3 == sVar4) {
    local_e8[0] = -1;
    local_res10[0] = -1;
    local_res20[0] = -1;
    cVar5 = FUN_142ab6930(param_3,"winning_action_id",local_e8);
    if (((cVar5 != '\0') && (cVar5 = FUN_142ab6930(param_3,"vote_count",local_res10), cVar5 != '\0')
        ) && (cVar5 = FUN_142ab6930(param_3,"winning_vote_count",local_res20), cVar5 != '\0')) {
      if (local_res10[0] < 1) {
        lVar10 = *(longlong *)(param_1 + 0x188);
        lVar12 = lVar11;
        if (lVar10 != 0) {
          lVar12 = *(longlong *)(lVar10 + 0x100);
        }
        if (lVar12 != 0) {
          local_70 = *(undefined8 *)(param_1 + 0x2a8);
          FString::FString(local_68,param_1 + 0x2b0);
          FUN_1414d10a0(lVar12,&local_70,*(undefined8 *)(param_1 + 0x340),0);
          lVar10 = *(longlong *)(param_1 + 0x188);
        }
        if (lVar10 != 0) {
          lVar11 = *(longlong *)(lVar10 + 0xf8);
        }
        if (lVar11 != 0) {
          *(undefined4 *)(param_1 + 0x180) = 2;
          FUN_140de7700(lVar11,param_1);
        }
      }
      else if (local_e8[0] < *(int *)(param_1 + 0x288)) {
        local_e0 = 0;
        plVar13 = (longlong *)((longlong)local_e8[0] * 0x60 + *(longlong *)(param_1 + 0x280));
        local_d8 = 0;
        if ((*plVar13 != 0) && (*(longlong *)(param_1 + 0x188) != 0)) {
          *(int *)((longlong)plVar13 + 0x54) = *(int *)((longlong)plVar13 + 0x54) + 1;
          lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x100);
          if (lVar11 != 0) {
            local_58 = plVar13[3];
            FString::FString(local_50,plVar13 + 4);
            FUN_1414d10a0(lVar11,&local_58,*(undefined8 *)(param_1 + 0x340),(int)plVar13[0xb]);
          }
          cVar5 = FText::IsEmpty(plVar13 + 6);
          if (cVar5 == '\0') {
            local_f8 = (undefined2 *)0x0;
            local_f0 = (undefined2 *)0x0;
            if (DAT_146b33f38 == 0) {
              FUN_142d7ebe0();
            }
            if (*(longlong *)(DAT_146b33f38 + 0xe0) != 0) {
              fVar15 = ((float)local_res20[0] / (float)local_res10[0]) * 100.0;
              uVar7 = FText::ToString(*(longlong *)(DAT_146b33f38 + 0xe0) + 0xe8);
              FString::operator=(&local_f8,uVar7);
              local_d0 = (undefined2 *)0x0;
              local_c8 = 0;
              FString::AppendInt(&local_d0,local_res20[0]);
              uVar7 = CONCAT44(uVar16,1);
              puVar14 = &DAT_143f3eda8;
              if ((int)local_c8 != 0) {
                puVar14 = local_d0;
              }
              ppuVar8 = (undefined2 **)FString::Replace(&local_f8,local_90,L"{COUNT}",puVar14,uVar7)
              ;
              uVar16 = (undefined4)((ulonglong)uVar7 >> 0x20);
              if (&local_f8 != ppuVar8) {
                if (local_f8 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
                local_f8 = *ppuVar8;
                *ppuVar8 = (undefined2 *)0x0;
                local_f0 = ppuVar8[1];
                ppuVar8[1] = (undefined2 *)0x0;
              }
              if (local_90[0] != 0) {
                FMemory::Free();
              }
              if (local_d0 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              local_c0 = (undefined2 *)0x0;
              local_b8 = 0;
              FString::AppendInt(&local_c0,(int)ROUND(fVar15 + fVar15 + 0.5) >> 1);
              puVar14 = &DAT_143f3eda8;
              if ((int)local_b8 != 0) {
                puVar14 = local_c0;
              }
              ppuVar8 = (undefined2 **)
                        FString::Replace(&local_f8,local_80,L"{TOTAL_PERCENT}",puVar14,
                                         CONCAT44(uVar16,1));
              if (&local_f8 != ppuVar8) {
                if (local_f8 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
                local_f8 = *ppuVar8;
                *ppuVar8 = (undefined2 *)0x0;
                local_f0 = ppuVar8[1];
                ppuVar8[1] = (undefined2 *)0x0;
              }
              if (local_80[0] != 0) {
                FMemory::Free();
              }
              if (local_c0 != (undefined2 *)0x0) {
                FMemory::Free();
              }
            }
            puVar14 = &DAT_143f3eda8;
            if ((int)local_f0 != 0) {
              puVar14 = local_f8;
            }
            FString::PrintfImpl(&local_a0,L"??????? %s",puVar14);
            if (local_e0 != 0) {
              FMemory::Free();
            }
            local_e0 = local_a0;
            local_d8 = CONCAT44(local_94,local_98);
            uVar7 = FText::FromString(local_40,&local_e0);
            FUN_140de6a50(*(undefined8 *)(param_1 + 0x188),param_1 + 0x50,uVar7,0x40a00000,0);
            if (local_38 != (longlong *)0x0) {
              LOCK();
              plVar13 = local_38 + 1;
              lVar11 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_38)(local_38);
                LOCK();
                piVar1 = (int *)((longlong)local_38 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*local_38 + 8))(local_38,1);
                }
              }
            }
            if (local_f8 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0xf8);
          if (lVar11 != 0) {
            *(undefined4 *)(param_1 + 0x180) = 1;
            FUN_140de7700(lVar11,param_1);
          }
          if (local_e0 != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140df28f0 FUN_140df28f0 body=278 status=ok
// SIG undefined FUN_140df28f0(void)

void FUN_140df28f0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar7;
  longlong local_28 [3];
  longlong *local_10;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar5 = FWeakObjectPtr::Get(param_1 + 0x98);
  uVar5 = FUN_140bb74b0(uVar5);
  FUN_140d7da70(uVar5,local_28 + 2,param_2,param_3,CONCAT44(uVar7,3));
  if (local_28[2] == 0) {
    cVar4 = (*(code *)**(undefined8 **)*param_2)
                      ((undefined8 *)*param_2,*(undefined8 *)(param_1 + 0xa0));
    if (cVar4 != '\0') {
      local_28[0] = 0;
      local_28[1] = 0;
      lVar6 = FWeakObjectPtr::Get(param_1 + 0x98);
      cVar4 = FUN_140d79f00(*(undefined8 *)(lVar6 + 0x478),param_3,1,1,local_28);
      if (cVar4 == '\0') {
        FUN_140e02ab0();
      }
      else {
        FUN_140e03070(param_1,param_3,local_28);
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  }
  return;
}



// FUNCTION 140df2a10 FUN_140df2a10 body=128 status=ok
// SIG undefined FUN_140df2a10(void)

void FUN_140df2a10(longlong param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  longlong local_30;
  undefined1 local_20 [24];
  
  FUN_140dfa140(param_1,local_38);
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x198))(plVar1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,"Load_Invitations_Notify_Response",1);
    FUN_140dd8110(plVar1,local_38);
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  TArray<FPIELoginSettingsInternal,FDefaultAllocator>::
  ~TArray<FPIELoginSettingsInternal,FDefaultAllocator>(local_20);
  if (local_30 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df2a90 FUN_140df2a90 body=63 status=ok
// SIG undefined FUN_140df2a90(void)

void FUN_140df2a90(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  
  if (param_2 < param_3) {
    lVar2 = 0;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0xf8);
    }
    if ((lVar2 != 0) && (cVar1 = FUN_140de4fb0(lVar2,param_1), cVar1 != '\0')) {
      FUN_140e08a70(param_1);
    }
  }
  return;
}



// FUNCTION 140df2ad0 FUN_140df2ad0 body=411 status=ok
// SIG undefined FUN_140df2ad0(void)

void FUN_140df2ad0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  void **ppvVar5;
  longlong *plVar6;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong local_28;
  longlong local_20;
  void *local_18;
  undefined8 local_10;
  
  local_30[0] = param_4 == 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  if (param_4 == 0) {
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"The target user been removed from your SHiFT friends list.",
                       L"OakGameInstance",L"RemoveFriendSuccess_Description");
    ppvVar5 = (void **)FText::ToString(uVar4);
    if (&local_18 != ppvVar5) {
      iVar2 = *(int *)(ppvVar5 + 1);
      _Src = *ppvVar5;
      local_10 = CONCAT44(local_10._4_4_,iVar2);
      if ((iVar2 == 0) && (local_10._4_4_ == 0)) {
        local_10 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,iVar2);
        _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)iVar2 * 2);
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  else {
    plVar6 = (longlong *)FUN_140e22d20(local_58,param_4);
    if (&local_28 != plVar6) {
      if (local_28 != 0) {
        FMemory::Free();
      }
      local_28 = *plVar6;
      *plVar6 = 0;
      local_20 = plVar6[1];
      plVar6[1] = 0;
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  FUN_140ddb9a0(uVar4,"Friend_Remove_Friend_Notify_Response",local_30);
  FUN_140ded9f0(param_1);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df2c70 FUN_140df2c70 body=411 status=ok
// SIG undefined FUN_140df2c70(void)

void FUN_140df2c70(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  void **ppvVar5;
  longlong *plVar6;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong local_28;
  longlong local_20;
  void *local_18;
  undefined8 local_10;
  
  local_30[0] = param_4 == 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  if (param_4 == 0) {
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"The target user has been unblocked on the SHiFT network.",
                       L"OakGameInstance",L"UnblockUserSuccess_Description");
    ppvVar5 = (void **)FText::ToString(uVar4);
    if (&local_18 != ppvVar5) {
      iVar2 = *(int *)(ppvVar5 + 1);
      _Src = *ppvVar5;
      local_10 = CONCAT44(local_10._4_4_,iVar2);
      if ((iVar2 == 0) && (local_10._4_4_ == 0)) {
        local_10 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,iVar2);
        _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)iVar2 * 2);
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  else {
    plVar6 = (longlong *)FUN_140e22d20(local_58,param_4);
    if (&local_28 != plVar6) {
      if (local_28 != 0) {
        FMemory::Free();
      }
      local_28 = *plVar6;
      *plVar6 = 0;
      local_20 = plVar6[1];
      plVar6[1] = 0;
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  FUN_140ddb9a0(uVar4,"Friend_Unblock_Friend_Notify_Response",local_30);
  FUN_140ded9f0(param_1);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df2e10 FUN_140df2e10 body=782 status=ok
// SIG undefined FUN_140df2e10(void)

void FUN_140df2e10(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  void **ppvVar6;
  longlong local_108;
  undefined8 local_100;
  char local_f8 [8];
  longlong local_f0 [10];
  void *local_a0;
  undefined8 local_98;
  longlong local_88;
  longlong local_80;
  longlong local_78 [5];
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48 [2];
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_88 = 0;
  local_80 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  plVar4 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x28))((longlong *)*param_3,local_48);
  if (&local_88 != plVar4) {
    local_88 = *plVar4;
    *plVar4 = 0;
    local_80 = plVar4[1];
    plVar4[1] = 0;
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_108 = 0;
  local_100 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  lVar3 = local_108;
  FGenericPlatformString::Memcpy(local_108,L"friend",0xe);
  local_50 = (undefined4)local_100;
  local_f8[0] = param_4 == 0;
  local_4c = local_100._4_4_;
  local_78[4] = lVar3;
  local_f0[0] = 0;
  local_f0[1] = 0;
  local_f0[2] = 0;
  local_f0[3] = 0;
  local_f0[4] = 0;
  local_f0[5] = 0;
  local_f0[6] = 0;
  local_f0[7] = 0;
  local_f0[8] = 0;
  local_f0[9] = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  FString::operator=(local_f0,&local_88);
  FString::operator=(local_f0 + 2,local_78);
  FString::operator=(local_f0 + 4,local_78 + 2);
  FString::operator=(local_f0 + 6,local_78 + 4);
  if (local_f8[0] == '\0') {
    plVar4 = (longlong *)FUN_140e22d20(local_38,param_4);
    if (local_f0 + 8 != plVar4) {
      if (local_f0[8] != 0) {
        FMemory::Free();
      }
      local_f0[8] = *plVar4;
      *plVar4 = 0;
      local_f0[9] = plVar4[1];
      plVar4[1] = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"The target user has been blocked on the SHiFT network.",
                       L"OakGameInstance",L"BlockUserSuccess_Description");
    ppvVar6 = (void **)FText::ToString(uVar5);
    if (&local_a0 != ppvVar6) {
      iVar2 = *(int *)(ppvVar6 + 1);
      _Src = *ppvVar6;
      local_98 = CONCAT44(local_98._4_4_,iVar2);
      if ((iVar2 == 0) && (local_98._4_4_ == 0)) {
        local_98 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a0,iVar2);
        _guard_xfg_dispatch_icall_nop(local_a0,_Src,(longlong)iVar2 * 2);
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
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  FUN_140ddb6a0(uVar5,"Invitation_Block_Friend_Invite_Notify_Response",local_f8);
  if (local_a0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_f0[8] != 0) {
    FMemory::Free();
  }
  if (local_f0[6] != 0) {
    FMemory::Free();
  }
  if (local_f0[4] != 0) {
    FMemory::Free();
  }
  if (local_f0[2] != 0) {
    FMemory::Free();
  }
  if (local_f0[0] != 0) {
    FMemory::Free();
  }
  if (local_78[4] != 0) {
    FMemory::Free();
  }
  if (local_78[2] != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df3120 FUN_140df3120 body=923 status=ok
// SIG undefined FUN_140df3120(void)

longlong FUN_140df3120(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
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
  
  plVar4 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x220);
  if ((*(uint *)(param_2 + 0x88) == *(uint *)(param_1 + 0x220)) &&
     (uVar3 = *(int *)(param_2 + 0x98) - *(int *)(param_2 + 0xc4),
     plVar4 = (longlong *)(ulonglong)uVar3,
     uVar3 == *(int *)(param_1 + 0x230) - *(int *)(param_1 + 0x25c))) {
    plVar1 = (longlong *)(param_2 + 0x90);
    uVar3 = *(uint *)(param_2 + 0xb8);
    puVar8 = (uint *)(param_2 + 0xa0);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar3 != 0) {
      puVar9 = *(uint **)(param_2 + 0xb0);
      if (*(uint **)(param_2 + 0xb0) == (uint *)0x0) {
        puVar9 = puVar8;
      }
      uVar6 = *puVar9;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar6 == 0) {
        lVar11 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar5 = local_98 + 1;
        bVar2 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar5;
        if (bVar2) goto LAB_140df322c;
        uVar6 = puVar9[lVar11 + 1];
      }
      uStack_94 = -uVar6 & uVar6;
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
      uStack_84 = (iStack_80 - iVar5) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_140df322c:
        uStack_84 = uVar3;
      }
    }
    uVar6 = *(uint *)(param_2 + 0xb8);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar12 = uVar6 & 0xffffffe0;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar8;
    local_50 = plVar1;
    puStack_40 = puVar8;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar6;
    if (uVar6 != uVar3) {
      puVar9 = *(uint **)(param_2 + 0xb0);
      if (*(uint **)(param_2 + 0xb0) == (uint *)0x0) {
        puVar9 = puVar8;
      }
      uVar10 = puVar9[(int)uVar6 >> 5] & -1 << ((byte)uVar6 & 0x1f);
      iVar5 = (int)uVar6 >> 5;
      while (uVar10 == 0) {
        uVar12 = uVar12 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_140df32f4;
        uVar10 = puVar9[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar10 = -uVar10 & uVar10;
      iVar5 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar10 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_84 = (uVar12 - iVar5) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_140df32f4:
        uStack_84 = uVar3;
      }
    }
    while ((uStack_5c != uStack_84 || (local_68 != puVar8))) {
      piVar13 = (int *)((longlong)(int)uStack_5c * 0x10 + *plVar1);
      iVar5 = *piVar13;
      uVar3 = *(int *)(param_1 + 0x230) - *(int *)(param_1 + 0x25c);
      plVar4 = (longlong *)(ulonglong)uVar3;
      if (uVar3 == 0) goto LAB_140df3396;
      lVar11 = *(longlong *)(param_1 + 0x268);
      if (*(longlong *)(param_1 + 0x268) == 0) {
        lVar11 = param_1 + 0x260;
      }
      uVar3 = *(uint *)(lVar11 + ((longlong)*(int *)(param_1 + 0x270) - 1U & (longlong)iVar5) * 4);
      plVar4 = (longlong *)(ulonglong)uVar3;
      if (uVar3 == 0xffffffff) goto LAB_140df3396;
      lVar11 = *(longlong *)(param_1 + 0x228);
      uVar6 = uVar3;
      while (*(int *)(lVar11 + (longlong)(int)uVar6 * 0x10) != iVar5) {
        uVar6 = *(uint *)(lVar11 + 8 + (longlong)(int)uVar6 * 0x10);
        if (uVar6 == 0xffffffff) goto LAB_140df3396;
      }
      if (uVar6 == 0xffffffff) goto LAB_140df3396;
      while (uVar3 != 0xffffffff) {
        piVar7 = (int *)((longlong)(int)plVar4 * 0x10 + lVar11);
        if (*piVar7 == iVar5) {
          if ((int)plVar4 != -1) goto LAB_140df33e0;
          break;
        }
        uVar3 = piVar7[2];
        plVar4 = (longlong *)(ulonglong)uVar3;
      }
      piVar7 = (int *)0x0;
LAB_140df33e0:
      uVar3 = piVar13[1];
      plVar4 = (longlong *)(ulonglong)uVar3;
      if (piVar7[1] != uVar3) goto LAB_140df3396;
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
    iVar5 = *(int *)(param_2 + 0xe8);
    plVar4 = plVar1;
    if (iVar5 == *(int *)(param_1 + 0x280)) {
      puVar8 = *(uint **)(param_1 + 0x278);
      if (iVar5 == 0) goto LAB_140df3446;
      lVar11 = *(longlong *)(param_2 + 0xe0) - (longlong)puVar8;
      goto LAB_140df3423;
    }
  }
  goto LAB_140df3396;
  while( true ) {
    puVar8 = puVar8 + 2;
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) break;
LAB_140df3423:
    uVar3 = *(uint *)((longlong)puVar8 + lVar11);
    plVar4 = (longlong *)(ulonglong)uVar3;
    if ((*puVar8 != uVar3) ||
       (uVar3 = *(uint *)((longlong)puVar8 + lVar11 + 4), plVar4 = (longlong *)(ulonglong)uVar3,
       puVar8[1] != uVar3)) goto LAB_140df3396;
  }
LAB_140df3446:
  iVar5 = *(int *)(param_2 + 0xf8);
  if (iVar5 == *(int *)(param_1 + 0x290)) {
    puVar8 = *(uint **)(param_1 + 0x288);
    if (iVar5 != 0) {
      puVar9 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
      do {
        plVar4 = (longlong *)(ulonglong)puVar9[-2];
        if (((*puVar8 != puVar9[-2]) ||
            (plVar4 = (longlong *)(ulonglong)puVar9[-1], puVar8[1] != puVar9[-1])) ||
           (plVar4 = (longlong *)(ulonglong)*puVar9, puVar8[2] != *puVar9)) goto LAB_140df3396;
        puVar8 = puVar8 + 3;
        puVar9 = puVar9 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar3 = *(uint *)(param_1 + 0x298);
    plVar4 = (longlong *)(ulonglong)uVar3;
    if (*(uint *)(param_2 + 0x100) == uVar3) {
      return (ulonglong)(uint3)(uVar3 >> 8) << 8;
    }
  }
LAB_140df3396:
  return CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
}



// FUNCTION 140df34c0 FUN_140df34c0 body=667 status=ok
// SIG undefined FUN_140df34c0(void)

void FUN_140df34c0(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  if (*(longlong *)(param_1 + 0x188) == 0) {
    return;
  }
  plVar4 = (longlong *)FUN_142dcfb00();
  if (plVar4 == (longlong *)0x0) {
LAB_140df35ba:
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_14145f370();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140df35ba;
    plVar6 = (longlong *)(**(code **)(*plVar4 + 0x678))(plVar4);
    if (plVar6 == (longlong *)0x0) {
LAB_140df3580:
      plVar6 = (longlong *)0x0;
    }
    else {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140df3580;
    }
    uVar7 = FUN_1414b0d60();
    lVar5 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar7);
    if (plVar6 != (longlong *)0x0) {
      uVar7 = FUN_142dfdf30();
      lVar8 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
      goto LAB_140df35c1;
    }
  }
  lVar8 = 0;
LAB_140df35c1:
  if (lVar5 != 0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop
                       (L"&UOakStreamingInteractionEvent_Pinata::HandleLevelChanged",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar10 = local_res10;
    FWeakObjectPtr::operator=(local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(local_28,param_1);
    local_20 = lVar10;
    if ((lVar10 != 0) && (lVar10 = FWeakObjectPtr::Get(local_28), lVar10 != 0)) {
      UObject::FindFunction(lVar10,local_20);
    }
    FUN_1406a5aa0(lVar5 + 0x210,local_28);
  }
  if (lVar8 != 0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop
                       (L"&UOakStreamingInteractionEvent_Pinata::HandleLevelChanged",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    FWeakObjectPtr::operator=(local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(local_28), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_20);
    }
    FUN_1406a5aa0(lVar8 + 0x1b0,local_28);
  }
  return;
}



// FUNCTION 140df3760 FUN_140df3760 body=618 status=ok
// SIG undefined FUN_140df3760(void)

void FUN_140df3760(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong local_res20;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [8];
  longlong local_70;
  undefined1 local_68 [8];
  longlong local_60;
  undefined1 local_58 [8];
  longlong local_50;
  
  pwVar7 = (wchar_t *)0x0;
  *(undefined8 *)(param_1 + 0x478) = param_2;
  plVar6 = (longlong *)*param_3;
  pwVar9 = (wchar_t *)((longlong)(int)param_3[1] & 0x1fffffffffffffff);
  if (plVar6 + (int)param_3[1] < plVar6) {
    pwVar9 = pwVar7;
  }
  pwVar8 = pwVar7;
  if (pwVar9 != (wchar_t *)0x0) {
    do {
      lVar1 = *plVar6;
      if (lVar1 != 0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AStreamingEventDispatcher::OnEnemySpawned",L"::");
        pwVar3 = pwVar7;
        while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
          pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res20,pwVar3 + 2,1);
        lVar5 = local_res20;
        FWeakObjectPtr::operator=(local_78,0);
        local_70 = 0;
        FWeakObjectPtr::operator=(local_78,param_1);
        local_70 = lVar5;
        if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(local_78), lVar5 != 0)) {
          UObject::FindFunction(lVar5,local_70);
        }
        FUN_1406a5aa0(lVar1 + 0x788,local_78);
        pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AStreamingEventDispatcher::OnEnemySuspend",L"::");
        pwVar3 = pwVar7;
        while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
          pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_88,pwVar3 + 2,1);
        lVar5 = local_88;
        FWeakObjectPtr::operator=(local_68,0);
        local_60 = 0;
        FWeakObjectPtr::operator=(local_68,param_1);
        local_60 = lVar5;
        if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(local_68), lVar5 != 0)) {
          UObject::FindFunction(lVar5,local_60);
        }
        FUN_1406a5aa0(lVar1 + 0x7a8,local_68);
        pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AStreamingEventDispatcher::OnEnemyDied",L"::");
        pwVar3 = pwVar7;
        while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
          pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_80,pwVar3 + 2,1);
        lVar5 = local_80;
        FWeakObjectPtr::operator=(local_58,0);
        local_50 = 0;
        FWeakObjectPtr::operator=(local_58,param_1);
        local_50 = lVar5;
        if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(local_58), lVar5 != 0)) {
          UObject::FindFunction(lVar5,local_50);
        }
        FUN_1406a5aa0(lVar1 + 0x798,local_58);
      }
      plVar6 = plVar6 + 1;
      pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
    } while (pwVar8 != pwVar9);
  }
  return;
}



// FUNCTION 140df39e0 FUN_140df39e0 body=1526 status=ok
// SIG undefined FUN_140df39e0(void)

void FUN_140df39e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 local_res20 [8];
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  longlong *local_48;
  longlong *local_38;
  
  if (DAT_14686f688 != 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  uVar7 = GetTransientPackage();
  FUN_1417846f0(uVar7,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar14 = 0;
  uVar8 = USkeletalMesh::GetPrivateStaticClass();
  DAT_14686f688 = FUN_1417985e0(uVar8,uVar7,0,0,0,0,0,0,0);
  iVar2 = *(int *)(DAT_14686f688 + 0xc);
  lVar9 = lVar14;
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar15 = iVar2 >> 0x1f & 0xffff;
    uVar6 = iVar2 + uVar15;
    lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
            (longlong)(int)((uVar6 & 0xffff) - uVar15) * 0x18;
  }
  *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 0x40000000;
  lVar9 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
      != lVar9 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    param_1 = lVar14;
  }
  *(longlong *)(DAT_14686f688 + 0xf0) = param_1;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  *(undefined8 *)(DAT_14686f688 + 0x178) = *(undefined8 *)(DAT_146b33f38 + 0x90);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  uStack_d0 = 0;
  *(undefined8 *)(DAT_14686f688 + 0x180) = *(undefined8 *)(DAT_146b33f38 + 0xe0);
  local_d8 = FUN_140dffd40;
  local_78 = 0x40dffd40;
  uStack_74 = 1;
  uStack_70 = 0;
  uStack_6c = uStack_cc;
  puVar10 = (undefined8 *)
            TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                      (*(longlong *)(DAT_14686f688 + 0xf0) + 0xa68,local_res20,DAT_14686f688,
                       &local_78);
  uStack_d0 = 0;
  *(undefined8 *)(DAT_14686f688 + 0xe0) = *puVar10;
  local_d8 = (code *)&LAB_140dffa40;
  local_68 = 0x40dffa40;
  uStack_64 = 1;
  uStack_60 = 0;
  uStack_5c = uStack_cc;
  puVar10 = (undefined8 *)
            TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                      (*(longlong *)(DAT_14686f688 + 0xf0) + 0x9c0,local_a8,DAT_14686f688,&local_68)
  ;
  uStack_d0 = 0;
  *(undefined8 *)(DAT_14686f688 + 0xe8) = *puVar10;
  local_d8 = FUN_140e00830;
  lVar9 = FUN_142b45e90();
  lVar4 = DAT_14686f688;
  lVar9 = *(longlong *)(lVar9 + 0x18);
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  lVar12 = lVar14;
  local_58 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_1443190e0;
    FWeakObjectPtr::operator=(plVar11 + 1,lVar4);
    *(undefined4 *)(plVar11 + 2) = (undefined4)local_d8;
    *(undefined4 *)((longlong)plVar11 + 0x14) = local_d8._4_4_;
    *(undefined4 *)(plVar11 + 3) = uStack_d0;
    *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_cc;
    lVar12 = FDelegateHandle::GenerateNewID();
    plVar11[5] = lVar12;
    *plVar11 = (longlong)&PTR_FUN_144319128;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar9 + 0x40,1);
    plVar13 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,local_a0);
    iVar2 = *(int *)(lVar9 + 0x48);
    lVar12 = *plVar13;
    *(int *)(lVar9 + 0x48) = iVar2 + 1;
    if (*(int *)(lVar9 + 0x4c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x40,iVar2);
    }
    puVar10 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar9 + 0x40));
    *puVar10 = plVar11;
    *(undefined4 *)(puVar10 + 1) = 3;
  }
  uStack_d0 = 0;
  *(longlong *)(DAT_14686f688 + 0xb0) = lVar12;
  lVar12 = DAT_14686f688;
  local_d8 = FUN_140e01dc0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  lVar9 = lVar14;
  local_48 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar11 + 1,lVar12);
    *(undefined4 *)(plVar11 + 2) = (undefined4)local_d8;
    *(undefined4 *)((longlong)plVar11 + 0x14) = local_d8._4_4_;
    *(undefined4 *)(plVar11 + 3) = uStack_d0;
    *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_cc;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[5] = lVar9;
    *plVar11 = (longlong)&PTR_FUN_143fcff08;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535868,1);
    plVar13 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,local_98);
    iVar2 = DAT_146535870;
    lVar12 = (longlong)DAT_146535870;
    lVar9 = *plVar13;
    DAT_146535870 = DAT_146535870 + 1;
    if (DAT_146535874 < DAT_146535870) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535868,iVar2);
    }
    puVar10 = (undefined8 *)(lVar12 * 0x10 + DAT_146535868);
    *puVar10 = plVar11;
    *(undefined4 *)(puVar10 + 1) = 3;
  }
  uStack_d0 = 0;
  *(longlong *)(DAT_14686f688 + 0x98) = lVar9;
  lVar9 = DAT_14686f688;
  local_d8 = FUN_140e01c10;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_38 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_144576500;
    FWeakObjectPtr::operator=(plVar11 + 1,lVar9);
    *(undefined4 *)(plVar11 + 2) = (undefined4)local_d8;
    *(undefined4 *)((longlong)plVar11 + 0x14) = local_d8._4_4_;
    *(undefined4 *)(plVar11 + 3) = uStack_d0;
    *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_cc;
    lVar14 = FDelegateHandle::GenerateNewID();
    plVar11[5] = lVar14;
    *plVar11 = (longlong)&PTR_FUN_144576548;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357a8,1);
    plVar13 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,local_90);
    iVar2 = DAT_1465357b0;
    lVar9 = (longlong)DAT_1465357b0;
    lVar14 = *plVar13;
    DAT_1465357b0 = DAT_1465357b0 + 1;
    if (DAT_1465357b4 < DAT_1465357b0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357a8,iVar2);
    }
    puVar10 = (undefined8 *)(lVar9 * 0x10 + DAT_1465357a8);
    *puVar10 = plVar11;
    *(undefined4 *)(puVar10 + 1) = 3;
  }
  *(longlong *)(DAT_14686f688 + 0xa0) = lVar14;
  FUN_1404cf890(&local_d8,0);
  pcVar5 = local_d8;
  lVar14 = DAT_14686f688;
  if (local_d8 != (code *)0x0) {
    local_b8 = FUN_140dfe9d0;
    uStack_b0 = 0;
    local_c8 = (longlong *)0x0;
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    local_c0 = 3;
    local_c8 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_144318830;
      FWeakObjectPtr::operator=(plVar11 + 1,lVar14);
      *(undefined4 *)(plVar11 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar11 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar11 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_ac;
      lVar14 = FDelegateHandle::GenerateNewID();
      plVar11[5] = lVar14;
      *plVar11 = (longlong)&PTR_FUN_144318878;
    }
    puVar10 = (undefined8 *)(**(code **)(*(longlong *)pcVar5 + 0x80))(pcVar5,local_88,&local_c8);
    *(undefined8 *)(DAT_14686f688 + 0xa8) = *puVar10;
    if (local_c0 != 0) {
      if (local_c8 == (longlong *)0x0) goto LAB_140df3f75;
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
LAB_140df3f75:
  if (CONCAT44(uStack_cc,uStack_d0) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_cc,uStack_d0) + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      puVar10 = (undefined8 *)CONCAT44(uStack_cc,uStack_d0);
      (**(code **)*puVar10)(puVar10);
      LOCK();
      piVar1 = (int *)((longlong)puVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_cc,uStack_d0) + 8))
                  ((longlong *)CONCAT44(uStack_cc,uStack_d0),1);
      }
    }
  }
  return;
}



// FUNCTION 140df3fe0 FUN_140df3fe0 body=593 status=ok
// SIG undefined FUN_140df3fe0(void)

void FUN_140df3fe0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  
  FUN_143100200();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar4 = UPlatformGameInstance::StaticClass();
  uVar4 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
  (**(code **)(*param_1 + 0x340))(param_1,uVar4);
  *(undefined8 *)(param_2 + 0x1c0) = uVar4;
  plVar1 = (longlong *)(param_2 + 0xf0);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_144576350;
    FWeakObjectPtr::operator=(plVar5 + 1,uVar4);
    plVar5[2] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_144576398;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_res8);
    iVar2 = *(int *)(param_2 + 0xf8);
    *(int *)(param_2 + 0xf8) = iVar2 + 1;
    if (*(int *)(param_2 + 0xfc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar7 = plVar5;
    *(undefined4 *)(puVar7 + 1) = 3;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x1c0);
  plVar1 = (longlong *)(param_2 + 0x158);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_1445763e0;
    FWeakObjectPtr::operator=(plVar5 + 1,uVar4);
    plVar5[2] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_144576428;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_res8);
    iVar2 = *(int *)(param_2 + 0x160);
    *(int *)(param_2 + 0x160) = iVar2 + 1;
    if (*(int *)(param_2 + 0x164) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar7 = plVar5;
    *(undefined4 *)(puVar7 + 1) = 3;
  }
  FUN_1430fc330(param_1,*(undefined8 *)(param_2 + 0x1c0),param_2);
  lVar6 = FUN_140dd8790(param_1);
  *(longlong *)(param_2 + 0x1b8) = lVar6;
  *(undefined4 *)(lVar6 + 0xa0) = DAT_14629b7f4;
  uVar3 = DAT_14629b7fc;
  lVar6 = *(longlong *)(param_2 + 0x1b8);
  *(undefined4 *)(lVar6 + 0xa4) = DAT_14629b7f8;
  *(undefined4 *)(lVar6 + 0xa8) = uVar3;
  if (DAT_14629b804 != 0) {
    uVar4 = FUN_1428dfc70();
    FUN_140de3fd0(*(undefined8 *)(param_2 + 0x1b8),uVar4);
  }
  FUN_1430fc330(param_1,*(undefined8 *)(param_2 + 0x1b8),param_2);
  return;
}



// FUNCTION 140df4240 FUN_140df4240 body=1350 status=ok
// SIG undefined FUN_140df4240(void)

void FUN_140df4240(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  ulonglong local_res20;
  ulonglong in_stack_ffffffffffffff58;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68 [2];
  longlong local_58 [3];
  
  param_1[6] = param_2;
  lVar5 = *(longlong *)(param_2 + 0x88);
  if (lVar5 == 0) {
    return;
  }
  plVar13 = (longlong *)(lVar5 + 8);
  plVar12 = (longlong *)0x0;
  local_88 = FUN_140df0c50;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  local_res8 = param_1;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_144318e60;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_88;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_88._4_4_;
    *(uint *)(plVar3 + 3) = (uint)uStack_80;
    *(int *)((longlong)plVar3 + 0x1c) = uStack_80._4_4_;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_144318ea8;
  }
  if (local_58 != plVar13) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x10) != 0) &&
         (plVar3 = (longlong *)*plVar13, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        if (*plVar13 != 0) {
          lVar4 = FMemory::Realloc(*plVar13,0,0);
          *plVar13 = lVar4;
        }
        *(undefined4 *)(lVar5 + 0x10) = 0;
      }
      goto LAB_140df4326;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,plVar13);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar5 = FMemory::Realloc(plVar3,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
LAB_140df4326:
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 7,0);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0);
  }
  local_88 = (code *)0x0;
  uStack_80 = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = *(longlong *)(DAT_146b33f38 + 0xe0);
  plVar3 = plVar12;
  if (lVar5 != 0) {
    iVar10 = *(int *)(lVar5 + 0x38);
    if (iVar10 != 0) {
      iVar9 = 0;
      if (0 < iVar10) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_88,iVar10);
        plVar3 = (longlong *)local_88;
        iVar9 = (uint)uStack_80;
      }
      _guard_xfg_dispatch_icall_nop(plVar3 + iVar9,*(void **)(lVar5 + 0x30),(longlong)iVar10 << 3);
      plVar12 = (longlong *)(ulonglong)(uint)(iVar9 + iVar10);
    }
    cVar2 = FText::IsEmpty(lVar5 + 0xd0);
    if (cVar2 == '\0') {
      in_stack_ffffffffffffff58 = 0;
      FUN_140de6a50(param_1[6],lVar5 + 0xb8,lVar5 + 0xd0,0x40a00000,0);
    }
  }
  iVar10 = (int)plVar12;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  puVar6 = (undefined8 *)FName::FName(&local_res10,"AssetRegistry",1);
  uVar8 = *puVar6;
  uVar7 = FUN_14168dc80();
  plVar13 = (longlong *)FUN_141690010(uVar7,uVar8);
  plVar13 = (longlong *)(**(code **)(*plVar13 + 0x48))(plVar13);
  lVar5 = *plVar13;
  puVar6 = (undefined8 *)FName::FName(&local_res10,"PatchExpansionData",1);
  (**(code **)(lVar5 + 0x28))(plVar13,*puVar6,&local_78,1);
  local_res18 = local_78;
  plVar13 = local_78 + (longlong)(int)local_70 * 0xb;
  local_res10 = plVar13;
  if (local_78 != plVar13) {
    local_res20 = 0;
    plVar17 = local_78;
    do {
      uVar18 = 0;
      if (*plVar17 != 0) {
        local_res18 = plVar17;
        puVar6 = (undefined8 *)FName::ToString(plVar17,local_68);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar6;
        }
        uVar8 = UObject::GetPrivateStaticClass();
        lVar5 = FUN_141799410(uVar8,0,puVar14,0);
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        if (lVar5 == 0) {
          puVar6 = (undefined8 *)FName::ToString(plVar17,local_58);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)*puVar6;
          }
          uVar8 = UObject::GetPrivateStaticClass();
          in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffff00000000;
          lVar5 = FUN_141799c90(uVar8,0,puVar14,0,in_stack_ffffffffffffff58,0,1);
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          plVar13 = local_res10;
          if (lVar5 == 0) goto LAB_140df465d;
        }
        lVar4 = FUN_1414a12b0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        plVar13 = local_res10;
        if (bVar1) {
          plVar16 = *(longlong **)(lVar5 + 0x1d8);
          uVar15 = (longlong)*(int *)(lVar5 + 0x1e0) & 0x1fffffffffffffff;
          if (plVar16 + *(int *)(lVar5 + 0x1e0) < plVar16) {
            uVar15 = uVar18;
          }
          plVar17 = local_res18;
          local_res20 = uVar15;
          if (uVar15 != 0) {
            do {
              lVar5 = *plVar16;
              if (lVar5 != 0) {
                iVar10 = (int)plVar12;
                for (plVar13 = plVar3; plVar13 != plVar3 + iVar10; plVar13 = plVar13 + 1) {
                  if (*plVar13 == lVar5) {
                    if ((int)((longlong)plVar13 - (longlong)plVar3 >> 3) != -1) goto LAB_140df4646;
                    break;
                  }
                }
                uVar11 = iVar10 + 1;
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar11);
                if (uStack_80._4_4_ < (int)uVar11) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_88,plVar12);
                  uVar15 = local_res20;
                  plVar3 = (longlong *)local_88;
                  uVar11 = (uint)uStack_80;
                }
                plVar12 = (longlong *)(ulonglong)uVar11;
                plVar3[iVar10] = lVar5;
              }
LAB_140df4646:
              plVar16 = plVar16 + 1;
              uVar18 = uVar18 + 1;
              plVar13 = local_res10;
              plVar17 = local_res18;
            } while (uVar18 != uVar15);
          }
        }
      }
LAB_140df465d:
      iVar10 = (int)plVar12;
      plVar17 = plVar17 + 0xb;
      param_1 = local_res8;
      local_res18 = plVar17;
    } while (plVar17 != plVar13);
  }
  uVar18 = 0;
  if (*(int *)((longlong)param_1 + 0x44) < iVar10) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 7,iVar10);
  }
  uVar15 = (ulonglong)((longlong)(plVar3 + iVar10) + (7 - (longlong)plVar3)) >> 3;
  if (plVar3 + iVar10 < plVar3) {
    uVar15 = uVar18;
  }
  plVar12 = plVar3;
  if (uVar15 != 0) {
    do {
      plVar12 = (longlong *)*plVar3;
      lVar5 = *plVar12;
      uVar8 = (**(code **)(*(longlong *)param_1[6] + 0x148))();
      cVar2 = (**(code **)(lVar5 + 0x280))(plVar12,uVar8);
      if (cVar2 != '\0') {
        local_res8 = plVar12;
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 7,&local_res8);
        (**(code **)(*plVar12 + 0x2b0))(plVar12,param_1[6]);
        if (((char)plVar12[9] == '\0') &&
           (cVar2 = (**(code **)(*plVar12 + 0x288))(plVar12), cVar2 != '\0')) {
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0xd,&local_res8);
        }
      }
      plVar3 = plVar3 + 1;
      uVar18 = uVar18 + 1;
      plVar12 = (longlong *)local_88;
    } while (uVar18 != uVar15);
  }
  if (*(char *)(param_1[6] + 0x90) == '\x03') {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  FUN_1404be960(&local_78);
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  return;
}



// FUNCTION 140df4790 FUN_140df4790 body=3543 status=ok
// SIG undefined FUN_140df4790(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140df4790(undefined8 *****param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 *******pppppppuVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 *****pppppuVar22;
  undefined8 *****pppppuVar23;
  longlong *plVar24;
  int iVar25;
  undefined8 *****pppppuVar26;
  undefined8 *****local_res8;
  undefined8 *******local_res10;
  undefined8 local_res18;
  undefined8 *******local_res20;
  longlong *local_118;
  int local_110;
  int local_10c;
  undefined8 *******local_108 [2];
  undefined8 local_f8;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 *****local_c8;
  undefined2 local_c0;
  longlong local_b8;
  uint local_b0;
  uint local_ac;
  undefined8 *****local_a8;
  undefined8 uStack_a0;
  undefined8 *****pppppuStack_98;
  undefined1 auStack_90 [16];
  undefined8 *****local_80;
  longlong local_78 [7];
  
  ppppuVar20 = (undefined8 ****)0x0;
  local_res10 = (undefined8 *******)((ulonglong)local_res10 & 0xffffffff00000000);
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(float *)((longlong)param_1 + 0xac) = (float)*(int *)(param_1[6] + 0xb);
  local_res8 = param_1;
  local_res18 = (undefined8 *******)param_1;
  uVar13 = FUN_1428dfc70();
  FUN_140de1af0(&local_res18,uVar13,4);
  uVar13 = AWarriorSkills1AIController::GetPrivateStaticClass();
  FUN_140de1af0(&local_res18,uVar13,1);
  uVar13 = FUN_14310dc30();
  FUN_140de1af0(&local_res18,uVar13,0);
  uVar13 = AXScriptedBotSpawner::GetPrivateStaticClass();
  FUN_140de1af0(&local_res18,uVar13,1);
  uVar13 = UFocusButtonWidget::GetPrivateStaticClass();
  FUN_140de1af0(&local_res18,uVar13,2);
  uVar13 = FUN_1429e18b0();
  FUN_140de1af0(&local_res18,uVar13,0);
  local_b8 = 0;
  local_ac = 0;
  local_f8._0_4_ = 0;
  local_f8._4_4_ = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8._0_4_ = -1;
  uVar13 = FUN_14171bfe0();
  FUN_1417a5560(uVar13,&local_f8,1,0x10,0);
  lVar14 = CONCAT44(local_f8._4_4_,(uint)local_f8);
  do {
    uStack_e8._0_4_ = (int)uStack_e8 + 1;
    ppppuVar19 = ppppuVar20;
    ppppuVar21 = ppppuVar20;
    ppppuVar15 = ppppuVar20;
    if ((int)uStack_f0 <= (int)uStack_e8) break;
  } while (*(longlong *)(lVar14 + (longlong)(int)uStack_e8 * 8) == 0);
LAB_140df48d0:
  if (((int)uStack_e8 < 0) || ((int)uStack_f0 <= (int)uStack_e8)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    plVar24 = *(longlong **)(lVar14 + (longlong)(int)uStack_e8 * 8);
    lVar18 = plVar24[0x1f];
    if (lVar18 == 0) {
      (**(code **)(*plVar24 + 0x368))(plVar24);
      lVar18 = plVar24[0x1f];
      lVar14 = CONCAT44(local_f8._4_4_,(uint)local_f8);
      if (lVar18 != 0) goto LAB_140df4922;
    }
    else {
LAB_140df4922:
      lVar14 = FUN_1428dfc70();
      if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && ((*(byte *)(lVar18 + 0x92) & 0x40) != 0)) {
        local_res20 = (undefined8 *******)plVar24[3];
        FName::ToString(&local_res20,local_78);
        cVar10 = FString::StartsWith(local_78,L"SKEL_",1);
        if (cVar10 == '\0') {
          local_res20 = (undefined8 *******)plVar24[3];
          ppppuVar19 = (undefined8 ****)0x2;
          FName::ToString(&local_res20,&local_118);
          cVar10 = FString::StartsWith(&local_118,L"REINST_",1);
          if (cVar10 != '\0') goto LAB_140df49d6;
          bVar4 = false;
        }
        else {
LAB_140df49d6:
          bVar4 = true;
        }
        uVar17 = (uint)ppppuVar19;
        if ((ppppuVar19 != (undefined8 ****)0x0) && (uVar17 = 0, local_118 != (longlong *)0x0)) {
          FMemory::Free();
        }
        ppppuVar19 = (undefined8 ****)(ulonglong)uVar17;
        if (local_78[0] != 0) {
          FMemory::Free();
        }
        if (!bVar4) {
          iVar25 = (int)ppppuVar21;
          local_b0 = iVar25 + 1;
          if ((int)ppppuVar15 < (int)local_b0) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,ppppuVar21);
          }
          ppppuVar21 = (undefined8 ****)(ulonglong)local_b0;
          *(longlong **)(local_b8 + (longlong)iVar25 * 8) = plVar24;
          pppppuVar26 = local_res8 + 0x43;
          FWeakObjectPtr::operator=(local_108,plVar24);
          local_res20 = local_108[0];
          TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindId(pppppuVar26,&local_res10,&local_res20);
          ppppuVar15 = ppppuVar20;
          if (((int)local_res10 != -1) &&
             (ppppuVar1 = *pppppuVar26 + (longlong)(int)local_res10 * 3,
             ppppuVar1 != (undefined8 ****)0x0)) {
            ppppuVar15 = ppppuVar1 + 1;
          }
          if (ppppuVar15 == (undefined8 ****)0x0) {
            plVar3 = (longlong *)plVar24[6];
            lVar14 = plVar3[0x1f];
            if (lVar14 == 0) {
              (**(code **)(*plVar3 + 0x368))(plVar3);
              lVar14 = plVar3[0x1f];
              if (lVar14 != 0) goto LAB_140df4abc;
            }
            else {
LAB_140df4abc:
              lVar16 = FUN_1428dfc70();
              if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if ((bVar4) && (((*(byte *)(lVar14 + 0x92) ^ *(byte *)(lVar18 + 0x92)) & 0x40) == 0))
              {
                if ((((*(byte *)(lVar18 + 0x90) ^ *(byte *)(lVar14 + 0x90)) & 8) == 0) &&
                   ((((*(byte *)(lVar18 + 0x90) ^ *(byte *)(lVar14 + 0x90)) & 4) == 0 &&
                    (((*(byte *)(lVar14 + 0x91) ^ *(byte *)(lVar18 + 0x91)) & 1) == 0))))
                goto LAB_140df4b69;
              }
            }
            if (((*(byte *)(lVar18 + 0x90) & 8) != 0) || (*(float *)(lVar18 + 0x138) <= 0.0)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            uVar13 = 4;
            if (!bVar4) {
              uVar13 = 1;
            }
            FUN_140de1af0(&local_res18,plVar24,uVar13);
          }
        }
      }
LAB_140df4b69:
      lVar14 = CONCAT44(local_f8._4_4_,(uint)local_f8);
      ppppuVar15 = (undefined8 ****)(ulonglong)local_ac;
    }
    do {
      uStack_e8._0_4_ = (int)uStack_e8 + 1;
      if ((int)uStack_f0 <= (int)uStack_e8) break;
    } while (*(longlong *)(lVar14 + (longlong)(int)uStack_e8 * 8) == 0);
    goto LAB_140df48d0;
  }
  if (lVar14 != 0) {
    FMemory::Free(lVar14);
  }
  local_118 = (longlong *)0x0;
  local_10c = 0;
  local_f8._4_4_ = 0x3f800000;
  uStack_f0 = 0;
  uStack_ec = 1;
  uStack_e8._0_4_ = 0;
  uStack_e8._4_4_ = 1;
  local_f8._0_4_ = 0;
  lVar14 = AFGRailroadVehicle::GetPrivateStaticClass();
  local_res18 = (undefined8 *******)0xffffffff;
  if (lVar14 != 0) {
    FWeakObjectPtr::operator=(&local_res20,lVar14);
    local_res18 = local_res20;
  }
  pppppuVar26 = local_res8;
  local_108[0] = (undefined8 *******)&local_res18;
  FUN_140dd8d30(local_res8 + 0x20,&local_res10,local_108,0);
  local_110 = 1;
  lVar18 = (longlong)(int)local_res10 * 0x2c;
  ppppuVar19 = pppppuVar26[0x20];
  puVar2 = (undefined8 *)(lVar18 + 8 + (longlong)ppppuVar19);
  *puVar2 = CONCAT44(local_f8._4_4_,(uint)local_f8);
  puVar2[1] = CONCAT44(uStack_ec,uStack_f0);
  *(ulonglong *)(lVar18 + 0x18 + (longlong)ppppuVar19) = CONCAT44(uStack_e8._4_4_,(int)uStack_e8);
  *(undefined4 *)(lVar18 + 0x20 + (longlong)ppppuVar19) = 0;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_118,0);
  plVar24 = local_118;
  local_f8._4_4_ = 0x3f800000;
  uStack_f0 = 0;
  uStack_ec = 1;
  uStack_e8._0_4_ = 4;
  *local_118 = lVar14;
  uStack_e8._4_4_ = 1;
  local_f8._0_4_ = 0;
  lVar14 = AXScriptedBotSpawner::GetPrivateStaticClass();
  local_res18 = (undefined8 *******)0xffffffff;
  if (lVar14 != 0) {
    FWeakObjectPtr::operator=(&local_res20,lVar14);
    local_res18 = local_res20;
  }
  local_108[0] = (undefined8 *******)&local_res18;
  FUN_140dd8d30(pppppuVar26 + 0x20,&local_res10,local_108,0);
  iVar25 = local_110;
  lVar16 = (longlong)local_110;
  uVar13 = CONCAT44(local_f8._4_4_,(uint)local_f8);
  uVar5 = CONCAT44(uStack_ec,uStack_f0);
  uVar6 = CONCAT44(uStack_e8._4_4_,(int)uStack_e8);
  lVar18 = (longlong)(int)local_res10 * 0x2c;
  ppppuVar19 = pppppuVar26[0x20];
  local_110 = local_110 + 1;
  puVar2 = (undefined8 *)(lVar18 + 8 + (longlong)ppppuVar19);
  *puVar2 = uVar13;
  puVar2[1] = uVar5;
  *(undefined8 *)(lVar18 + 0x18 + (longlong)ppppuVar19) = uVar6;
  *(undefined4 *)(lVar18 + 0x20 + (longlong)ppppuVar19) = 0;
  if (local_10c < local_110) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_118,iVar25);
    plVar24 = local_118;
  }
  iVar11 = local_10c;
  iVar25 = local_110;
  plVar24[lVar16] = lVar14;
  lVar14 = FUN_1429e18b0();
  local_res18 = (undefined8 *******)0xffffffff;
  if (lVar14 != 0) {
    FWeakObjectPtr::operator=(&local_res20,lVar14);
    local_res18 = local_res20;
  }
  pppppuVar26 = local_res8;
  local_108[0] = (undefined8 *******)&local_res18;
  FUN_140dd8d30(local_res8 + 0x20,&local_res10,local_108,0);
  local_110 = iVar25 + 1;
  lVar18 = (longlong)(int)local_res10 * 0x2c;
  ppppuVar19 = pppppuVar26[0x20];
  puVar2 = (undefined8 *)(lVar18 + 8 + (longlong)ppppuVar19);
  *puVar2 = uVar13;
  puVar2[1] = uVar5;
  *(undefined8 *)(lVar18 + 0x18 + (longlong)ppppuVar19) = uVar6;
  *(undefined4 *)(lVar18 + 0x20 + (longlong)ppppuVar19) = 0;
  if (iVar11 < local_110) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_118,iVar25);
    plVar24 = local_118;
    iVar11 = local_10c;
  }
  iVar9 = local_110;
  plVar24[iVar25] = lVar14;
  lVar14 = AWarriorSkills1AIController::GetPrivateStaticClass();
  local_res18 = (undefined8 *******)0xffffffff;
  if (lVar14 != 0) {
    FWeakObjectPtr::operator=(&local_res20,lVar14);
    local_res18 = local_res20;
  }
  pppppuVar26 = local_res8;
  local_108[0] = (undefined8 *******)&local_res18;
  FUN_140dd8d30(local_res8 + 0x20,&local_res10,local_108,0);
  local_110 = iVar9 + 1;
  lVar18 = (longlong)(int)local_res10 * 0x2c;
  ppppuVar19 = pppppuVar26[0x20];
  puVar2 = (undefined8 *)(lVar18 + 8 + (longlong)ppppuVar19);
  *puVar2 = uVar13;
  puVar2[1] = uVar5;
  *(undefined8 *)(lVar18 + 0x18 + (longlong)ppppuVar19) = uVar6;
  *(undefined4 *)(lVar18 + 0x20 + (longlong)ppppuVar19) = 0;
  if (iVar11 < local_110) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_118,iVar9);
    plVar24 = local_118;
    iVar11 = local_10c;
  }
  iVar25 = local_110;
  plVar24[iVar9] = lVar14;
  lVar14 = FUN_1430aee90();
  local_res18 = (undefined8 *******)0xffffffff;
  if (lVar14 != 0) {
    FWeakObjectPtr::operator=(&local_res20,lVar14);
    local_res18 = local_res20;
  }
  pppppuVar26 = local_res8;
  local_108[0] = (undefined8 *******)&local_res18;
  FUN_140dd8d30(local_res8 + 0x20,&local_res10,local_108,0);
  local_110 = iVar25 + 1;
  lVar18 = (longlong)(int)local_res10 * 0x2c;
  ppppuVar19 = pppppuVar26[0x20];
  puVar2 = (undefined8 *)(lVar18 + 8 + (longlong)ppppuVar19);
  *puVar2 = uVar13;
  puVar2[1] = uVar5;
  *(undefined8 *)(lVar18 + 0x18 + (longlong)ppppuVar19) = uVar6;
  *(undefined4 *)(lVar18 + 0x20 + (longlong)ppppuVar19) = 0;
  if (iVar11 < local_110) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_118,iVar25);
    plVar24 = local_118;
    iVar11 = local_10c;
  }
  iVar9 = local_110;
  plVar24[iVar25] = lVar14;
  lVar14 = AFGConveyorBeltHologram::GetPrivateStaticClass();
  local_res18 = (undefined8 *******)0xffffffff;
  if (lVar14 != 0) {
    FWeakObjectPtr::operator=(&local_res20,lVar14);
    local_res18 = local_res20;
  }
  pppppuVar26 = local_res8;
  local_108[0] = (undefined8 *******)&local_res18;
  FUN_140dd8d30(local_res8 + 0x20,&local_res10,local_108,0);
  local_110 = iVar9 + 1;
  lVar18 = (longlong)(int)local_res10 * 0x2c;
  ppppuVar19 = pppppuVar26[0x20];
  puVar2 = (undefined8 *)(lVar18 + 8 + (longlong)ppppuVar19);
  *puVar2 = uVar13;
  puVar2[1] = uVar5;
  *(undefined8 *)(lVar18 + 0x18 + (longlong)ppppuVar19) = uVar6;
  *(undefined4 *)(lVar18 + 0x20 + (longlong)ppppuVar19) = 0;
  if (iVar11 < local_110) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_118,iVar9);
    plVar24 = local_118;
    iVar11 = local_10c;
  }
  iVar25 = local_110;
  plVar24[iVar9] = lVar14;
  lVar14 = FUN_142e28330();
  local_res18 = (undefined8 *******)0xffffffff;
  if (lVar14 != 0) {
    FWeakObjectPtr::operator=(&local_res20,lVar14);
    local_res18 = local_res20;
  }
  pppppuVar26 = local_res8;
  local_108[0] = (undefined8 *******)&local_res18;
  FUN_140dd8d30(local_res8 + 0x20,&local_res10,local_108,0);
  local_110 = iVar25 + 1;
  lVar18 = (longlong)(int)local_res10 * 0x2c;
  ppppuVar19 = pppppuVar26[0x20];
  puVar2 = (undefined8 *)(lVar18 + 8 + (longlong)ppppuVar19);
  *puVar2 = uVar13;
  puVar2[1] = uVar5;
  *(undefined8 *)(lVar18 + 0x18 + (longlong)ppppuVar19) = uVar6;
  *(undefined4 *)(lVar18 + 0x20 + (longlong)ppppuVar19) = 0;
  if (iVar11 < local_110) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_118,iVar25);
    plVar24 = local_118;
    iVar11 = local_10c;
  }
  iVar9 = local_110;
  local_f8._0_4_ = 0x3f800000;
  local_f8._4_4_ = 0;
  uStack_f0 = 0;
  uStack_ec = 1;
  plVar24[iVar25] = lVar14;
  uStack_e8._0_4_ = 4;
  uStack_e8._4_4_ = 1;
  lVar14 = FUN_1413c3a10();
  local_res10 = (undefined8 *******)0xffffffff;
  if (lVar14 != 0) {
    FWeakObjectPtr::operator=(&local_res18,lVar14);
    local_res10 = local_res18;
  }
  pppppuVar26 = local_res8;
  local_res20 = &local_res10;
  FUN_140dd8d30(local_res8 + 0x20,&local_res8,&local_res20,0);
  lVar18 = (longlong)(int)local_res8 * 0x2c;
  ppppuVar19 = pppppuVar26[0x20];
  puVar2 = (undefined8 *)(lVar18 + 8 + (longlong)ppppuVar19);
  *puVar2 = CONCAT44(local_f8._4_4_,(uint)local_f8);
  puVar2[1] = CONCAT44(uStack_ec,uStack_f0);
  *(ulonglong *)(lVar18 + 0x18 + (longlong)ppppuVar19) = CONCAT44(uStack_e8._4_4_,(int)uStack_e8);
  *(undefined4 *)(lVar18 + 0x20 + (longlong)ppppuVar19) = 0;
  local_110 = iVar9 + 1;
  if (iVar11 < local_110) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_118,iVar9);
    plVar24 = local_118;
  }
  pppppuVar22 = pppppuVar26 + 0x43;
  local_f8._0_4_ = 0;
  pppppuStack_98 = pppppuVar26 + 0x45;
  local_f8._4_4_ = 1;
  plVar24[iVar9] = lVar14;
  DAT_1467bc370 = DAT_14629b800;
  DAT_1467bc374 = 0xc;
  iVar25 = *(int *)(pppppuVar26 + 0x48);
  uStack_e8._4_4_ = 0;
  uStack_e0 = 0;
  if (iVar25 != 0) {
    pppppuVar23 = (undefined8 *****)pppppuVar26[0x47];
    if ((undefined8 *****)pppppuVar26[0x47] == (undefined8 *****)0x0) {
      pppppuVar23 = pppppuStack_98;
    }
    uVar17 = *(uint *)pppppuVar23;
    ppppuVar19 = ppppuVar20;
    ppppuVar21 = ppppuVar20;
    while (uVar17 == 0) {
      iVar11 = (int)ppppuVar19;
      uStack_e0 = (int)ppppuVar21 + 0x20;
      ppppuVar21 = (undefined8 ****)(ulonglong)uStack_e0;
      local_f8._0_4_ = iVar11 + 1;
      ppppuVar19 = (undefined8 ****)(ulonglong)(uint)local_f8;
      if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11) goto LAB_140df51f2;
      uVar17 = *(uint *)((longlong)pppppuVar23 + ((longlong)iVar11 + 1) * 4);
    }
    local_f8._4_4_ = -uVar17 & uVar17;
    iVar11 = 0x1f;
    if (local_f8._4_4_ != 0) {
      for (; local_f8._4_4_ >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (local_f8._4_4_ == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_e8._4_4_ = (uStack_e0 - iVar11) + 0x1f;
    if (iVar25 < uStack_e8._4_4_) {
LAB_140df51f2:
      uStack_e8._4_4_ = iVar25;
    }
  }
  auVar7._8_4_ = uStack_e0;
  auVar7._0_8_ = CONCAT44(uStack_e8._4_4_,0xffffffff);
  auVar7._12_4_ = iStack_dc;
  uStack_a0 = CONCAT44(local_f8._4_4_,(uint)local_f8);
  local_c0 = 0;
  local_d8 = auVar7._8_8_;
  uStack_e0 = 0xffffffff;
  iStack_dc = uStack_e8._4_4_;
  uStack_f0 = (uint)local_f8;
  uStack_ec = local_f8._4_4_;
  auStack_90._8_8_ = local_d8;
  auStack_90._0_8_ = CONCAT44(uStack_e8._4_4_,0xffffffff);
  bVar4 = uStack_e8._4_4_ < *(int *)(pppppuVar26 + 0x48);
  local_c8 = pppppuVar22;
  local_a8 = pppppuVar22;
  local_80 = pppppuVar22;
  local_f8 = pppppuVar22;
  uStack_e8 = pppppuStack_98;
  pppppuStack_d0 = pppppuVar22;
  if (bVar4) {
    do {
      local_res18 = (undefined8 *******)
                    CONCAT44(*(undefined4 *)((longlong)*local_f8 + (longlong)iStack_dc * 0x18 + 4),
                             *(undefined4 *)(*local_f8 + (longlong)iStack_dc * 3));
      lVar14 = FWeakObjectPtr::Get(&local_res18);
      for (; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
        uVar17 = *(uint *)(lVar14 + 0xc);
        ppppuVar19 = ppppuVar20;
        if ((int)uVar17 < (int)DAT_1469e91c4) {
          uVar12 = uVar17 & 0xffff;
          if ((int)uVar17 < 0) {
            uVar17 = uVar17 + 0xffff;
            uVar12 = uVar12 - 0x10000;
          }
          ppppuVar19 = (undefined8 ****)
                       (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar17 >> 0x10) * 8) +
                       (longlong)(int)uVar12 * 0x18);
        }
        if ((*(uint *)(ppppuVar19 + 1) >> 0x19 & 1) != 0) break;
      }
      local_res10 = (undefined8 *******)0xffffffff;
      if (lVar14 != 0) {
        FWeakObjectPtr::operator=(&local_res20,lVar14);
        local_res10 = local_res20;
      }
      pppppppuVar8 = local_res10;
      TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::FindId(pppppuVar22,&local_res8,&local_res10);
      if ((((int)local_res8 == -1) ||
          (*pppppuVar22 + (longlong)(int)local_res8 * 3 == (undefined8 ****)0x0)) ||
         (*pppppuVar22 + (longlong)(int)local_res8 * 3 == (undefined8 ****)0xfffffffffffffff8)) {
        FUN_140ded340(pppppuVar22,pppppppuVar8,lVar14);
      }
      uStack_e0 = uStack_e0 & ~uStack_ec;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
    } while (iStack_dc < (int)*(uint *)(uStack_e8 + 3));
    if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
      FUN_140de5d50(local_c8,*(int *)(local_c8 + 1) - *(int *)((longlong)local_c8 + 0x34),1);
    }
  }
  local_c8 = pppppuVar26 + 0x20;
  local_f8._0_4_ = 0;
  iVar25 = *(int *)(pppppuVar26 + 0x25);
  pppppuStack_98 = pppppuVar26 + 0x22;
  local_f8._4_4_ = 1;
  uStack_e8._4_4_ = 0;
  uStack_e0 = 0;
  if (iVar25 != 0) {
    pppppuVar22 = (undefined8 *****)pppppuVar26[0x24];
    if ((undefined8 *****)pppppuVar26[0x24] == (undefined8 *****)0x0) {
      pppppuVar22 = pppppuStack_98;
    }
    uVar17 = *(uint *)pppppuVar22;
    ppppuVar19 = ppppuVar20;
    while (uVar17 == 0) {
      iVar11 = (int)ppppuVar19;
      uStack_e0 = (int)ppppuVar20 + 0x20;
      ppppuVar20 = (undefined8 ****)(ulonglong)uStack_e0;
      local_f8._0_4_ = iVar11 + 1;
      ppppuVar19 = (undefined8 ****)(ulonglong)(uint)local_f8;
      if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11) goto LAB_140df543e;
      uVar17 = *(uint *)((longlong)pppppuVar22 + ((longlong)iVar11 + 1) * 4);
    }
    local_f8._4_4_ = -uVar17 & uVar17;
    iVar11 = 0x1f;
    if (local_f8._4_4_ != 0) {
      for (; local_f8._4_4_ >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (local_f8._4_4_ == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_e8._4_4_ = (uStack_e0 - iVar11) + 0x1f;
    if (iVar25 < uStack_e8._4_4_) {
LAB_140df543e:
      uStack_e8._4_4_ = iVar25;
    }
  }
  auStack_90._4_4_ = uStack_e8._4_4_;
  auStack_90._0_4_ = 0xffffffff;
  auStack_90._8_4_ = uStack_e0;
  auStack_90._12_4_ = iStack_dc;
  uStack_a0 = CONCAT44(local_f8._4_4_,(uint)local_f8);
  local_c0 = 0;
  local_d8 = auStack_90._8_8_;
  uStack_e0 = 0xffffffff;
  iStack_dc = uStack_e8._4_4_;
  uStack_f0 = (uint)local_f8;
  uStack_ec = local_f8._4_4_;
  bVar4 = uStack_e8._4_4_ < *(int *)(pppppuVar26 + 0x25);
  local_a8 = local_c8;
  local_80 = local_c8;
  local_f8 = local_c8;
  uStack_e8 = pppppuStack_98;
  pppppuStack_d0 = local_c8;
  if (bVar4) {
    do {
      local_res8 = *(undefined8 ******)((longlong)iStack_dc * 0x2c + (longlong)*local_f8);
      FWeakObjectPtr::Get(&local_res8);
      uStack_e0 = uStack_e0 & ~uStack_ec;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
    } while (iStack_dc < (int)*(uint *)(uStack_e8 + 3));
    if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
      FUN_140de5e00(local_c8,*(int *)(local_c8 + 1) - *(int *)((longlong)local_c8 + 0x34),1);
    }
  }
  *(float *)(pppppuVar26 + 0xb) = DAT_14629b7f0 * DAT_14629b7f0;
  if (plVar24 != (longlong *)0x0) {
    FMemory::Free(plVar24);
  }
  if (local_b8 != 0) {
    FMemory::Free(local_b8);
  }
  return;
}



// FUNCTION 140df5570 FUN_140df5570 body=294 status=ok
// SIG undefined FUN_140df5570(void)

void FUN_140df5570(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_143105b80(3);
  FUN_143105b80(6);
  FUN_143105b80(0x80);
  FUN_143105b80(0x200,0x10);
  lVar2 = FUN_140dd8790(param_1);
  param_1[0x3f] = lVar2;
  *(undefined4 *)(lVar2 + 0xa0) = DAT_14629b7f4;
  uVar1 = DAT_14629b7fc;
  lVar2 = param_1[0x3f];
  *(undefined4 *)(lVar2 + 0xa4) = DAT_14629b7f8;
  *(undefined4 *)(lVar2 + 0xa8) = uVar1;
  if (DAT_14629b804 != 0) {
    uVar3 = FUN_1428dfc70();
    FUN_140de3fd0(param_1[0x3f],uVar3);
  }
  UMovieScenePropertyTrack::AddSection(param_1,param_1[0x3f]);
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = ULevelStreamingPersistent::GetPrivateStaticClass();
  lVar2 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  (**(code **)(*param_1 + 0x340))(param_1,lVar2);
  param_1[0x40] = lVar2;
  UMovieScenePropertyTrack::AddSection(param_1,lVar2);
  return;
}



// FUNCTION 140df56a0 FUN_140df56a0 body=1736 status=ok
// SIG undefined FUN_140df56a0(void)

void FUN_140df56a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong **pplVar18;
  char cVar19;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint uStack_dc;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong *local_98 [2];
  longlong *local_88 [2];
  longlong *local_78 [2];
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  
  lVar16 = 0;
  if (*(char *)(param_1 + 0x90) != '\0') {
    return;
  }
  puVar12 = (undefined8 *)FName::FName(local_res10,"StreamingInteraction",1);
  uVar3 = *puVar12;
  plVar13 = (longlong *)FUN_141593110();
  iVar10 = (**(code **)(*plVar13 + 8))(plVar13,uVar3);
  if (iVar10 < 1) {
    return;
  }
  lVar14 = FUN_142dcfb00(DAT_14686f688);
  if (lVar14 == 0) {
    return;
  }
  lVar15 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8)
      != lVar15 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  FUN_142450450(*(undefined8 *)(param_1 + 0xf0),&local_b8);
  lVar15 = FUN_142b45e90();
  uVar3 = *(undefined8 *)(lVar15 + 0x18);
  if (local_b8 == 0) {
    plVar13 = &local_c8;
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    local_a8 = local_b8;
    plStack_a0 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
      UNLOCK();
    }
    plVar13 = (longlong *)FUN_142b4a990(uVar3,local_58,&local_a8);
    lVar16 = *plVar13;
  }
  plVar4 = (longlong *)plVar13[1];
  plVar13[1] = 0;
  *plVar13 = 0;
  plVar13 = plStack_c0;
  if ((bVar5) && (plStack_c0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  if ((bVar6) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_50 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  plVar13 = plStack_a0;
  if ((bVar7) && (plStack_a0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    lVar15 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (lVar16 == 0) goto LAB_140df5c21;
  FUN_142b46360(lVar16,local_68);
  lVar16 = FUN_140cfbfb0(lVar14);
  if (lVar16 == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = *(undefined4 *)(lVar16 + 0x28);
  }
  *(undefined4 *)(param_1 + 0xd4) = uVar11;
  lVar16 = FUN_140cff230(lVar14);
  if (lVar16 == 0) {
    cVar19 = '\0';
  }
  else {
    cVar19 = *(char *)(lVar16 + 0x1f8);
  }
  plVar13 = (longlong *)FUN_141593110();
  lVar14 = *plVar13;
  puVar12 = (undefined8 *)FName::FName(local_res18,"StreamingInteraction",1);
  iVar10 = (**(code **)(lVar14 + 8))(plVar13,*puVar12);
  iVar17 = 0;
  if (0 < iVar10) {
    do {
      plVar13 = (longlong *)FUN_141593110();
      lVar14 = *plVar13;
      puVar12 = (undefined8 *)FName::FName(local_res20,"StreamingInteraction",1);
      lVar14 = (**(code **)(lVar14 + 0x10))(plVar13,*puVar12,iVar17);
      if (lVar14 == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = (longlong *)(lVar14 + -8);
      }
      cVar8 = (**(code **)(*plVar13 + 0x18))(plVar13);
      if (cVar8 == cVar19) {
        *(longlong **)(param_1 + 0x88) = plVar13;
        break;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < iVar10);
  }
  if (lVar16 == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = *(undefined1 *)(lVar16 + 0x1fb);
  }
  lVar16 = *(longlong *)(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x2f0) = uVar9;
  if ((lVar16 != 0) && (cVar19 != '\0')) {
    pplVar18 = (longlong **)(lVar16 + 0x18);
    plVar13 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_98[0] = plVar13;
    if (plVar13 != (longlong *)0x0) {
      *plVar13 = (longlong)&PTR_FUN_144576590;
      FWeakObjectPtr::operator=(plVar13 + 1,param_1);
      plVar13[2] = (longlong)FUN_140e00b90;
      plVar13[3] = (ulonglong)uStack_dc << 0x20;
      lVar14 = FDelegateHandle::GenerateNewID();
      plVar13[5] = lVar14;
      *plVar13 = (longlong)&PTR_FUN_1445765d8;
    }
    if (local_98 == pplVar18) {
LAB_140df5a50:
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        local_98[0] = (longlong *)FMemory::Realloc(plVar13,0,0);
        if (local_98[0] != (longlong *)0x0) {
          FMemory::Free(local_98[0]);
        }
      }
    }
    else {
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x30))(plVar13,pplVar18);
        goto LAB_140df5a50;
      }
      if ((*(int *)(lVar16 + 0x20) != 0) && (plVar13 = *pplVar18, plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        if (*pplVar18 != (longlong *)0x0) {
          plVar13 = (longlong *)FMemory::Realloc(*pplVar18,0,0);
          *pplVar18 = plVar13;
        }
        *(undefined4 *)(lVar16 + 0x20) = 0;
      }
    }
    lVar16 = *(longlong *)(param_1 + 0x88);
    pplVar18 = (longlong **)(lVar16 + 0x28);
    plVar13 = (longlong *)FMemory::Realloc(0,0x30);
    local_88[0] = plVar13;
    if (plVar13 != (longlong *)0x0) {
      *plVar13 = (longlong)&PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(plVar13 + 1,param_1);
      plVar13[2] = (longlong)&LAB_140dfe4d0;
      plVar13[3] = (ulonglong)uStack_dc << 0x20;
      lVar14 = FDelegateHandle::GenerateNewID();
      plVar13[5] = lVar14;
      *plVar13 = (longlong)&PTR_FUN_143fcff98;
    }
    if (local_88 == pplVar18) {
LAB_140df5b03:
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        local_88[0] = (longlong *)FMemory::Realloc(plVar13,0,0);
        if (local_88[0] != (longlong *)0x0) {
          FMemory::Free(local_88[0]);
        }
      }
    }
    else {
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x30))(plVar13,pplVar18);
        goto LAB_140df5b03;
      }
      if ((*(int *)(lVar16 + 0x30) != 0) && (plVar13 = *pplVar18, plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        if (*pplVar18 != (longlong *)0x0) {
          plVar13 = (longlong *)FMemory::Realloc(*pplVar18,0,0);
          *pplVar18 = plVar13;
        }
        *(undefined4 *)(lVar16 + 0x30) = 0;
      }
    }
    lVar16 = *(longlong *)(param_1 + 0x88);
    pplVar18 = (longlong **)(lVar16 + 0x48);
    plVar13 = (longlong *)FMemory::Realloc(0,0x30);
    local_78[0] = plVar13;
    if (plVar13 != (longlong *)0x0) {
      *plVar13 = (longlong)&PTR_FUN_144576620;
      FWeakObjectPtr::operator=(plVar13 + 1,param_1);
      plVar13[2] = (longlong)FUN_140dfca10;
      plVar13[3] = (ulonglong)uStack_dc << 0x20;
      lVar14 = FDelegateHandle::GenerateNewID();
      plVar13[5] = lVar14;
      *plVar13 = (longlong)&PTR_FUN_144576668;
    }
    if (local_78 == pplVar18) {
LAB_140df5bb6:
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        local_78[0] = (longlong *)FMemory::Realloc(plVar13,0,0);
        if (local_78[0] != (longlong *)0x0) {
          FMemory::Free(local_78[0]);
        }
      }
    }
    else {
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x30))(plVar13,pplVar18);
        goto LAB_140df5bb6;
      }
      if ((*(int *)(lVar16 + 0x50) != 0) && (plVar13 = *pplVar18, plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        if (*pplVar18 != (longlong *)0x0) {
          plVar13 = (longlong *)FMemory::Realloc(*pplVar18,0,0);
          *pplVar18 = plVar13;
        }
        *(undefined4 *)(lVar16 + 0x50) = 0;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x88) + 8))
              (*(longlong **)(param_1 + 0x88),*(undefined8 *)(DAT_14686f688 + 0xf0),local_68);
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
LAB_140df5c21:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar4 + 1;
    lVar16 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_b0 + 1;
    lVar16 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plStack_b0 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
      }
    }
  }
  return;
}



// FUNCTION 140df5d70 FUN_140df5d70 body=88 status=ok
// SIG undefined FUN_140df5d70(void)

void FUN_140df5d70(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res10 [24];
  
  if (param_2 != 0) {
    param_1[0x31] = param_2;
    uVar2 = FDateTime::Now(local_res10);
    lVar3 = FDateTime::ToUnixTimestamp(uVar2);
    param_1[0x2c] = lVar3;
    if (((int)param_1[0x30] != 8) ||
       (cVar1 = (**(code **)(*param_1 + 0x290))(param_1), cVar1 != '\0')) {
      (**(code **)(*param_1 + 0x2e0))(param_1);
    }
  }
  return;
}



// FUNCTION 140df5dd0 FUN_140df5dd0 body=3998 status=ok
// SIG undefined FUN_140df5dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140df5dd0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  undefined2 *puVar22;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStack_3a8 [32];
  undefined4 local_388;
  ulonglong local_380;
  undefined1 local_378;
  longlong *local_370;
  undefined8 *local_368;
  wchar_t *local_360;
  uint local_358;
  longlong *local_350;
  longlong local_348;
  int local_340;
  int local_33c;
  longlong *local_338;
  longlong *local_330;
  code *local_328;
  undefined4 uStack_320;
  uint uStack_31c;
  undefined8 *local_318;
  longlong local_310;
  undefined8 local_308;
  undefined8 *local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  wchar_t *local_2d8;
  undefined8 local_2d0;
  wchar_t *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  longlong local_290;
  longlong local_288;
  undefined8 local_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  longlong local_250;
  longlong local_248 [2];
  undefined4 local_238;
  undefined8 local_234;
  longlong local_228;
  longlong local_220 [2];
  undefined8 local_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  wchar_t *local_1e0;
  int local_1d8;
  undefined4 local_1d4;
  wchar_t *local_1d0;
  int local_1c8;
  undefined4 local_1c4;
  longlong local_1c0;
  longlong local_1b8 [2];
  code *local_1a8;
  longlong lStack_1a0;
  code *local_198;
  longlong lStack_190;
  code *local_188;
  longlong lStack_180;
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  longlong local_160;
  undefined1 local_158 [16];
  longlong local_148;
  undefined1 local_140 [16];
  longlong local_130 [2];
  longlong local_120 [2];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_100 [24];
  longlong local_e8;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  pwVar23 = (wchar_t *)0x0;
  local_358 = 0;
  local_350 = (longlong *)((ulonglong)local_350 & 0xffffffff00000000);
  local_330 = param_1;
  if (param_2 != 0) {
    param_1[0x31] = param_2;
    uVar9 = FDateTime::Now(local_168);
    lVar10 = FDateTime::ToUnixTimestamp(uVar9);
    param_1[0x2c] = lVar10;
    if (((int)param_1[0x30] != 8) ||
       (cVar6 = (**(code **)(*param_1 + 0x290))(param_1), cVar6 != '\0')) {
      (**(code **)(*param_1 + 0x2e0))(param_1);
    }
  }
  local_298 = (**(code **)(*param_1 + 0x148))(param_1);
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)((longlong)param_1 + 0x1d4);
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  lVar10 = FUN_142dcfb00(param_2);
  if (lVar10 != 0) {
    lVar11 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar10 = FUN_140cff230(lVar10), lVar10 != 0)) {
      *(float *)((longlong)param_1 + 0x4c) = (float)(*(int *)(lVar10 + 0x200) * 0x3c);
    }
  }
  local_2a8 = (longlong *)0x0;
  local_2a0 = 0;
  puVar12 = (undefined8 *)FName::FName(local_178,"AssetRegistry",1);
  uVar9 = *puVar12;
  uVar13 = FUN_14168dc80();
  plVar14 = (longlong *)FUN_141690010(uVar13,uVar9);
  plVar14 = (longlong *)(**(code **)(*plVar14 + 0x48))(plVar14);
  lVar10 = *plVar14;
  puVar12 = (undefined8 *)FName::FName(local_170,"PatchExpansionData",1);
  (**(code **)(lVar10 + 0x28))(plVar14,*puVar12,&local_2a8,1);
  local_338 = local_2a8;
  plVar14 = local_2a8 + (longlong)(int)local_2a0 * 0xb;
  pwVar24 = pwVar23;
  local_350 = plVar14;
  if (local_2a8 != plVar14) {
    local_368 = (undefined8 *)0x0;
    local_360 = (wchar_t *)0x0;
    plVar15 = local_2a8;
    do {
      if ((wchar_t *)*plVar15 != pwVar24) {
        local_338 = plVar15;
        puVar12 = (undefined8 *)FName::ToString(plVar15,local_130);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar12;
        }
        uVar9 = UObject::GetPrivateStaticClass();
        lVar10 = FUN_141799410(uVar9,0,puVar22,0);
        local_2f8 = lVar10;
        if (local_130[0] != 0) {
          FMemory::Free();
        }
        if (lVar10 == 0) {
          puVar12 = (undefined8 *)FName::ToString(plVar15,local_120);
          if (*(int *)(puVar12 + 1) == 0) {
            puVar22 = &DAT_143f3eda8;
          }
          else {
            puVar22 = (undefined2 *)*puVar12;
          }
          uVar9 = UObject::GetPrivateStaticClass();
          local_378 = 1;
          local_380 = 0;
          local_388 = 0;
          lVar10 = FUN_141799c90(uVar9,0,puVar22);
          local_2f8 = lVar10;
          if (local_120[0] != 0) {
            FMemory::Free();
          }
          plVar14 = local_350;
          if (lVar10 == 0) goto LAB_140df656c;
        }
        lVar11 = FUN_1414a12b0();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        plVar14 = local_350;
        if (bVar3) {
          puVar12 = *(undefined8 **)(lVar10 + 0x1f8);
          local_308 = puVar12 + (longlong)*(int *)(lVar10 + 0x200) * 2;
          if (puVar12 != local_308) {
            local_2f0 = 0;
            do {
              iVar8 = *(int *)(puVar12 + 1);
              pvVar2 = (void *)*puVar12;
              local_2d8 = (wchar_t *)0x0;
              pwVar24 = pwVar23;
              uVar7 = 0;
              local_368 = puVar12;
              if (iVar8 != 0) {
                local_2d0._0_4_ = iVar8;
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2d8,iVar8,0);
                pwVar24 = local_2d8;
                _guard_xfg_dispatch_icall_nop(local_2d8,pvVar2,(longlong)iVar8 * 2);
                iVar8 = (int)local_2d0;
                uVar7 = local_2d0._4_4_;
              }
              local_290 = 0;
              local_288 = 0;
              local_280 = 0;
              local_2d8 = (wchar_t *)0x0;
              local_2d0 = 0;
              local_1e0 = pwVar24;
              local_1d8 = iVar8;
              local_1d4 = uVar7;
              FUN_1417978e0(&local_290,&local_1e0);
              local_1c0 = local_290;
              FString::FString(local_1b8,&local_288);
              local_250 = local_1c0;
              local_260 = 0xffffffff;
              local_25c = 0;
              FString::FString(local_248,local_1b8);
              if (local_1b8[0] != 0) {
                FMemory::Free();
              }
              plVar14 = local_330;
              if (local_250 != 0) {
                plVar15 = local_330 + 0x3f;
                lVar10 = *plVar15;
                lVar18 = local_330[0x40];
                for (lVar11 = lVar10; lVar11 != (longlong)(int)lVar18 * 0x28 + lVar10;
                    lVar11 = lVar11 + 0x28) {
                  cVar6 = FSoftObjectPath::operator==(lVar11 + 0x10,&local_250);
                  if (cVar6 != '\0') {
                    puVar12 = local_368;
                    if ((int)((lVar11 - lVar10) / 0x28) != -1) goto LAB_140df62cd;
                    break;
                  }
                }
                iVar8 = (int)plVar14[0x40];
                lVar10 = (longlong)iVar8;
                *(int *)(plVar14 + 0x40) = iVar8 + 1;
                if (*(int *)((longlong)plVar14 + 0x204) < iVar8 + 1) {
                  TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar15,iVar8);
                }
                lVar18 = *plVar15;
                local_300 = (undefined8 *)0x0;
                *(undefined8 *)(lVar18 + 0x18 + lVar10 * 0x28) = 0;
                lVar11 = lVar18 + lVar10 * 0x28;
                *(undefined4 *)(lVar11 + 0x24) = 0;
                *(undefined4 *)(lVar18 + lVar10 * 0x28) = 0xffffffff;
                *(undefined4 *)(lVar18 + 4 + lVar10 * 0x28) = 0;
                *(undefined8 *)(lVar11 + 0x10) = 0;
                *(undefined4 *)(lVar11 + 0x20) = 0;
                if (*(int *)(lVar11 + 0x24) < 0) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar11 + 0x18,0);
                }
                if (*(undefined2 **)(lVar11 + 0x18) != (undefined2 *)0x0) {
                  **(undefined2 **)(lVar11 + 0x18) = 0;
                }
                *(undefined4 *)(lVar18 + 8 + lVar10 * 0x28) = 0;
                *(undefined4 *)(lVar18 + lVar10 * 0x28) = local_260;
                *(undefined4 *)(lVar18 + 4 + lVar10 * 0x28) = (undefined4)local_25c;
                *(undefined4 *)(lVar18 + 8 + lVar10 * 0x28) = local_25c._4_4_;
                local_160 = local_250;
                FString::FString(local_158,local_248);
                FSoftObjectPath::operator=(lVar11 + 0x10,&local_160);
                puVar12 = local_368;
              }
LAB_140df62cd:
              if (local_248[0] != 0) {
                FMemory::Free();
              }
              if (local_288 != 0) {
                FMemory::Free();
              }
              puVar12 = puVar12 + 2;
              lVar10 = local_2f8;
              pwVar24 = local_360;
              plVar15 = local_338;
            } while (puVar12 != local_308);
          }
          puVar12 = *(undefined8 **)(lVar10 + 0x1e8);
          local_308 = puVar12 + (longlong)*(int *)(lVar10 + 0x1f0) * 2;
          plVar14 = local_350;
          local_368 = puVar12;
          if (puVar12 != local_308) {
            local_318 = (undefined8 *)0x0;
            do {
              iVar8 = *(int *)(puVar12 + 1);
              pvVar2 = (void *)*puVar12;
              local_2c8 = (wchar_t *)0x0;
              pwVar24 = pwVar23;
              uVar7 = 0;
              local_368 = puVar12;
              if (iVar8 != 0) {
                local_2c0._0_4_ = iVar8;
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2c8,iVar8,0);
                pwVar24 = local_2c8;
                _guard_xfg_dispatch_icall_nop(local_2c8,pvVar2,(longlong)iVar8 * 2);
                iVar8 = (int)local_2c0;
                uVar7 = local_2c0._4_4_;
              }
              local_278 = 0;
              local_270 = 0;
              local_268 = 0;
              local_2c8 = (wchar_t *)0x0;
              local_2c0 = 0;
              local_1d0 = pwVar24;
              local_1c8 = iVar8;
              local_1c4 = uVar7;
              FUN_1417978e0(&local_278,&local_1d0);
              local_228 = local_278;
              local_238 = 0xffffffff;
              local_234 = 0;
              FString::FString(local_220,&local_270);
              plVar14 = local_330;
              if (local_228 != 0) {
                plVar15 = local_330 + 0x3d;
                lVar10 = *plVar15;
                lVar18 = local_330[0x3e];
                for (lVar11 = lVar10; lVar11 != (longlong)(int)lVar18 * 0x28 + lVar10;
                    lVar11 = lVar11 + 0x28) {
                  cVar6 = FSoftObjectPath::operator==(lVar11 + 0x10,&local_228);
                  if (cVar6 != '\0') {
                    puVar12 = local_368;
                    if ((int)((lVar11 - lVar10) / 0x28) != -1) goto LAB_140df652b;
                    break;
                  }
                }
                iVar8 = (int)plVar14[0x3e];
                lVar10 = (longlong)iVar8;
                *(int *)(plVar14 + 0x3e) = iVar8 + 1;
                if (*(int *)((longlong)plVar14 + 500) < iVar8 + 1) {
                  TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar15,iVar8);
                }
                lVar18 = *plVar15;
                local_310 = 0;
                *(undefined8 *)(lVar18 + 0x18 + lVar10 * 0x28) = 0;
                lVar11 = lVar18 + lVar10 * 0x28;
                *(undefined8 *)(lVar11 + 0x20) = 0;
                *(undefined4 *)(lVar18 + lVar10 * 0x28) = 0xffffffff;
                *(undefined4 *)(lVar18 + 4 + lVar10 * 0x28) = 0;
                *(undefined8 *)(lVar11 + 0x10) = 0;
                *(undefined4 *)(lVar11 + 0x20) = 0;
                if (*(int *)(lVar11 + 0x24) < 0) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar11 + 0x18,0);
                }
                if (*(undefined2 **)(lVar11 + 0x18) != (undefined2 *)0x0) {
                  **(undefined2 **)(lVar11 + 0x18) = 0;
                }
                *(undefined4 *)(lVar18 + 8 + lVar10 * 0x28) = 0;
                *(undefined4 *)(lVar18 + lVar10 * 0x28) = local_238;
                *(undefined4 *)(lVar18 + 4 + lVar10 * 0x28) = (undefined4)local_234;
                *(undefined4 *)(lVar18 + 8 + lVar10 * 0x28) = local_234._4_4_;
                local_148 = local_228;
                FString::FString(local_140,local_220);
                FSoftObjectPath::operator=(lVar11 + 0x10,&local_148);
                puVar12 = local_368;
              }
LAB_140df652b:
              if (local_220[0] != 0) {
                FMemory::Free();
              }
              if (local_270 != 0) {
                FMemory::Free();
              }
              puVar12 = puVar12 + 2;
              plVar14 = local_350;
              pwVar24 = local_360;
              plVar15 = local_338;
              local_368 = puVar12;
            } while (puVar12 != local_308);
          }
        }
      }
LAB_140df656c:
      plVar15 = plVar15 + 0xb;
    } while (plVar15 != plVar14);
    pwVar24 = (wchar_t *)(ulonglong)local_358;
    param_1 = local_330;
    local_338 = plVar15;
  }
  local_340 = 0;
  local_33c = 0;
  local_348 = 0;
  pwVar19 = pwVar23;
  pwVar17 = pwVar23;
  if (0 < (int)param_1[0x71]) {
    do {
      iVar8 = local_340;
      *(int *)(param_1[0x70] + 0x50 + (longlong)pwVar19) = (int)pwVar17;
      lVar10 = param_1[0x70];
      if ((*(longlong *)(lVar10 + (longlong)pwVar19) == 0) &&
         (local_360 = (wchar_t *)0x0, *(longlong *)(lVar10 + 0x18 + (longlong)pwVar19) != 0)) {
        lVar11 = (longlong)local_340;
        local_340 = local_340 + 1;
        if (local_33c < local_340) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_348,iVar8);
        }
        *(undefined8 *)(local_348 + lVar11 * 0x18) =
             *(undefined8 *)(lVar10 + 0x18 + (longlong)pwVar19);
        FString::FString(local_348 + lVar11 * 0x18 + 8,(longlong)pwVar19 + lVar10 + 0x20);
        param_1 = local_330;
      }
      uVar25 = (int)pwVar17 + 1;
      pwVar17 = (wchar_t *)(ulonglong)uVar25;
      pwVar19 = pwVar19 + 0x30;
    } while ((int)uVar25 < (int)param_1[0x71]);
  }
  iVar8 = local_340;
  if (param_1[0x41] == 0) {
    lVar10 = param_1[0x44];
    local_360 = (wchar_t *)0x0;
    if (lVar10 != 0) {
      local_340 = local_340 + 1;
      if (local_33c < local_340) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_348,iVar8);
        lVar10 = param_1[0x44];
      }
      lVar11 = (longlong)iVar8 * 3 + 1;
      *(longlong *)(local_348 + -8 + lVar11 * 8) = lVar10;
      FString::FString(local_348 + lVar11 * 8,param_1 + 0x45);
    }
  }
  FWeakObjectPtr::operator=(&local_1e8,param_1);
  local_308 = (undefined8 *)local_1e8;
  local_2b8 = 0;
  local_2b0 = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
  FGenericPlatformString::Memcpy(local_2b8,L"RequestAsyncLoad ArrayDelegate",0x3e);
  local_328 = (code *)0x0;
  uStack_320 = 0;
  puVar12 = (undefined8 *)operator_new(0x20,&local_328);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &PTR_GetPoolName_144575d60;
    *(int *)(puVar12 + 1) = (int)local_1e8;
    *(undefined4 *)((longlong)puVar12 + 0xc) = local_308._4_4_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar12[3] = uVar9;
    *puVar12 = &PTR_GetPoolName_144575da8;
  }
  lVar10 = FUN_1422ca050();
  local_370 = &local_2b8;
  local_378 = 0;
  local_380 = local_380 & 0xffffffffffffff00;
  local_388 = 0;
  FUN_142840b00(lVar10 + 0x178,local_110,&local_348,&local_328);
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_108 + 1;
    lVar10 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  if (local_2b8 != 0) {
    FMemory::Free();
  }
  local_210 = local_298;
  local_208 = &local_210;
  local_2e8 = 0;
  local_2e0 = 0;
  local_200 = FUN_14073d760(&local_210,DAT_14685c220);
  puVar12 = local_208;
  local_1f8 = &local_210;
  local_1f0 = 0;
  local_318 = local_208;
  plVar14 = (longlong *)FUN_14073d760(local_208,local_200);
  local_338 = plVar14;
  local_300 = (undefined8 *)FUN_14073d760(local_1f8,local_1f0);
  if (plVar14 != local_300) {
    do {
      local_2f8 = plVar14[2];
      bVar3 = false;
      plVar15 = (longlong *)FUN_1407cb710(local_2f8);
      if (plVar15 != (longlong *)0x0) {
        local_58 = (undefined1 *)0x0;
        local_50 = 0;
        (**(code **)(*plVar15 + 0x2f8))(plVar15,local_d8);
        uVar21 = local_50 & 0xffffffff;
        local_358 = 0;
        puVar20 = local_58;
        if (0 < (int)local_50) {
          local_310 = 0;
          pwVar19 = pwVar23;
          do {
            lVar10 = local_310;
            uVar25 = (uint)pwVar19;
            plVar14 = local_338;
            puVar12 = local_318;
            if (bVar3) break;
            puVar16 = local_d8;
            if (puVar20 != (undefined1 *)0x0) {
              puVar16 = puVar20;
            }
            lVar11 = *(longlong *)(puVar16 + local_310);
            if (lVar11 != 0) {
              iVar8 = ULevelVariantSets::GetNumVariantSets(lVar11);
              pwVar19 = pwVar23;
              if (0 < iVar8) {
                do {
                  lVar10 = local_310;
                  uVar25 = local_358;
                  if (bVar3) break;
                  plVar14 = (longlong *)FUN_1407cad00(lVar11,pwVar19);
                  if (plVar14 == (longlong *)0x0) {
LAB_140df6940:
                    pwVar17 = (wchar_t *)FUN_1407cad00(lVar11,pwVar19);
                  }
                  else {
                    lVar10 = FUN_1407e5b60();
                    if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
                        != lVar10 + 0x88)) {
                      bVar4 = false;
                    }
                    else {
                      bVar4 = true;
                    }
                    if (!bVar4) goto LAB_140df6940;
                    pwVar17 = (wchar_t *)(**(code **)(*plVar14 + 0x2b8))(plVar14,local_298);
                  }
                  if (pwVar17 == (wchar_t *)0x0) {
LAB_140df6989:
                    pwVar17 = pwVar23;
                  }
                  else {
                    lVar10 = FUN_1414c5770();
                    if ((*(int *)(*(longlong *)(pwVar17 + 8) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(pwVar17 + 8) + 0x88) +
                         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                      bVar4 = false;
                    }
                    else {
                      bVar4 = true;
                    }
                    if (!bVar4) goto LAB_140df6989;
                  }
                  if (pwVar17 != (wchar_t *)0x0) {
                    pwVar24 = (wchar_t *)(ulonglong)((uint)pwVar24 | 1);
                    lVar18 = (**(code **)(*(longlong *)pwVar17 + 0x310))(pwVar17,local_100);
                    lVar10 = FWeakObjectPtr::Get(lVar18);
                    if (lVar10 == 0) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      if ((DAT_1464b56f4 != *(int *)(lVar18 + 8)) &&
                         (local_360 = (wchar_t *)0x0, *(longlong *)(lVar18 + 0x10) != 0)) {
                        lVar10 = FUN_141796df0();
                        FWeakObjectPtr::operator=(lVar18,lVar10);
                        if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
                          LOCK();
                          if (DAT_1464b56f4 == 0) {
                            DAT_1464b56f4 = 0;
                          }
                          UNLOCK();
                          *(int *)(lVar18 + 8) = DAT_1464b56f4;
                        }
                        lVar10 = FWeakObjectPtr::Get(lVar18);
                        if (lVar10 != 0) goto LAB_140df6a23;
                      }
                    }
                    else {
LAB_140df6a23:
                      lVar18 = FUN_14171bfe0();
                      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
                        bVar4 = false;
                      }
                      else {
                        bVar4 = true;
                      }
                      if (bVar4) {
                        lVar18 = FUN_1428dfc70();
                        do {
                          if (lVar10 == lVar18) {
                            bVar4 = false;
                            goto LAB_140df6a74;
                          }
                          lVar10 = *(longlong *)(lVar10 + 0x30);
                        } while (lVar10 != 0);
                      }
                    }
                  }
                  bVar4 = true;
LAB_140df6a74:
                  if ((((ulonglong)pwVar24 & 1) != 0) && (pwVar24 = (wchar_t *)0x0, local_e8 != 0))
                  {
                    FMemory::Free();
                  }
                  uVar21 = local_2e0;
                  if (!bVar4) {
                    lVar10 = (longlong)(int)local_2e0;
                    bVar3 = true;
                    iVar8 = (int)local_2e0 + 1;
                    local_2e0 = CONCAT44(local_2e0._4_4_,iVar8);
                    if (local_2e0._4_4_ < iVar8) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (&local_2e8,uVar21 & 0xffffffff);
                    }
                    *(longlong *)(local_2e8 + lVar10 * 8) = local_2f8;
                    *(int *)(local_330 + 0x8d) = (int)local_330[0x8d] + 1;
                  }
                  uVar26 = (int)pwVar19 + 1;
                  iVar8 = ULevelVariantSets::GetNumVariantSets(lVar11);
                  lVar10 = local_310;
                  pwVar19 = (wchar_t *)(ulonglong)uVar26;
                  uVar25 = local_358;
                } while ((int)uVar26 < iVar8);
              }
              uVar21 = local_50 & 0xffffffff;
              puVar20 = local_58;
            }
            local_358 = uVar25 + 1;
            pwVar19 = (wchar_t *)(ulonglong)local_358;
            local_310 = lVar10 + 8;
            plVar14 = local_338;
            puVar12 = local_318;
          } while ((int)local_358 < (int)uVar21);
        }
        if (puVar20 != (undefined1 *)0x0) {
          FMemory::Free();
        }
      }
      plVar14 = (longlong *)FUN_14073d760(puVar12,*plVar14);
      param_1 = local_330;
      local_338 = plVar14;
    } while (plVar14 != local_300);
  }
  pwVar24 = pwVar23;
  if (param_1[0x31] != 0) {
    pwVar24 = *(wchar_t **)(param_1[0x31] + 0x100);
  }
  if (pwVar24 != (wchar_t *)0x0) {
    FUN_1414d11c0(pwVar24,param_1,&local_2e8);
    uStack_320 = 0;
    local_328 = FUN_140dfc530;
    lStack_1a0 = (ulonglong)uStack_31c << 0x20;
    local_1a8 = FUN_140dfc530;
    pwVar17 = _guard_xfg_dispatch_icall_nop
                        (L"&UOakStreamingInteractionEvent_EnemySpawn::OnEnemySpawned",L"::");
    pwVar19 = pwVar23;
    while (pwVar5 = pwVar17, pwVar5 != (wchar_t *)0x0) {
      pwVar17 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar19 = pwVar5;
    }
    FName::FName(&local_2f0,pwVar19 + 2,1);
    FUN_140ddbc10(pwVar24 + 0x244,param_1,&local_1a8,local_2f0);
    uStack_320 = 0;
    local_328 = FUN_140dfc760;
    lStack_190 = (ulonglong)uStack_31c << 0x20;
    local_198 = FUN_140dfc760;
    pwVar17 = _guard_xfg_dispatch_icall_nop
                        (L"&UOakStreamingInteractionEvent_EnemySpawn::OnEnemySuspend",L"::");
    pwVar19 = pwVar23;
    while (pwVar5 = pwVar17, pwVar5 != (wchar_t *)0x0) {
      pwVar17 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar19 = pwVar5;
    }
    FName::FName(&local_368,pwVar19 + 2,1);
    FUN_140ddbc10(pwVar24 + 0x254,param_1,&local_198,local_368);
    uStack_320 = 0;
    local_328 = FUN_140dfc210;
    lStack_180 = (ulonglong)uStack_31c << 0x20;
    local_188 = FUN_140dfc210;
    pwVar19 = _guard_xfg_dispatch_icall_nop
                        (L"&UOakStreamingInteractionEvent_EnemySpawn::OnEnemyDied",L"::");
    while (pwVar17 = pwVar19, pwVar17 != (wchar_t *)0x0) {
      pwVar19 = _guard_xfg_dispatch_icall_nop(pwVar17 + 1,L"::");
      pwVar23 = pwVar17;
    }
    FName::FName(&local_350,pwVar23 + 2,1);
    FUN_140ddbc10(pwVar24 + 0x24c,param_1,&local_188,local_350);
  }
  if (local_2e8 != 0) {
    FMemory::Free();
  }
  if (local_340 != 0) {
    plVar14 = (longlong *)(local_348 + 8);
    iVar8 = local_340;
    do {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (local_348 != 0) {
    FMemory::Free();
  }
  FUN_1404be960(&local_2a8);
  return;
}



// FUNCTION 140df6d70 FUN_140df6d70 body=587 status=ok
// SIG undefined FUN_140df6d70(void)

void FUN_140df6d70(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong local_res20;
  longlong local_78;
  undefined1 local_70 [8];
  longlong local_68;
  undefined1 local_60 [8];
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  
  FUN_140df6fc0();
  pwVar8 = (wchar_t *)0x0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar3 != 0) && (lVar3 = UWorld::GetGameState<APVPGameState>(lVar3), lVar3 != 0)) {
    local_50 = (longlong *)0x0;
    local_48 = 0;
    FUN_140ad4c10(lVar3,&local_50);
    pwVar7 = (wchar_t *)
             ((ulonglong)((longlong)(local_50 + (int)local_48) + (7 - (longlong)local_50)) >> 3);
    if (local_50 + (int)local_48 < local_50) {
      pwVar7 = pwVar8;
    }
    plVar6 = local_50;
    pwVar9 = pwVar8;
    if (pwVar7 != (wchar_t *)0x0) {
      do {
        lVar3 = *plVar6;
        if (lVar3 != 0) {
          *(int *)(param_1 + 0x53) = (int)param_1[0x53] + 1;
          pwVar4 = _guard_xfg_dispatch_icall_nop
                             (L"&UOakStreamingInteractionEvent_Extraction::OnExtractionInitiated",
                              L"::");
          pwVar2 = pwVar8;
          while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
            pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
            pwVar2 = pwVar1;
          }
          FName::FName(&local_res20,pwVar2 + 2,1);
          lVar5 = local_res20;
          FWeakObjectPtr::operator=(local_70,0);
          local_68 = 0;
          FWeakObjectPtr::operator=(local_70,param_1);
          local_68 = lVar5;
          if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(local_70), lVar5 != 0)) {
            UObject::FindFunction(lVar5,local_68);
          }
          FUN_1406a5aa0(lVar3 + 0x678,local_70);
          pwVar4 = _guard_xfg_dispatch_icall_nop
                             (L"&UOakStreamingInteractionEvent_Extraction::OnExtractorUnavailable",
                              L"::");
          pwVar2 = pwVar8;
          while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
            pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
            pwVar2 = pwVar1;
          }
          FName::FName(&local_78,pwVar2 + 2,1);
          lVar5 = local_78;
          FWeakObjectPtr::operator=(local_60,0);
          local_58 = 0;
          FWeakObjectPtr::operator=(local_60,param_1);
          local_58 = lVar5;
          if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(local_60), lVar5 != 0)) {
            UObject::FindFunction(lVar5,local_58);
          }
          FUN_1406a5aa0(lVar3 + 0x688,local_60);
        }
        pwVar9 = (wchar_t *)((longlong)pwVar9 + 1);
        plVar6 = plVar6 + 1;
      } while (pwVar9 != pwVar7);
    }
    if (local_50 != (longlong *)0x0) {
      FMemory::Free(local_50);
    }
  }
  return;
}



// FUNCTION 140df6fc0 FUN_140df6fc0 body=4189 status=ok
// SIG undefined FUN_140df6fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140df6fc0(longlong *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  undefined1 *puVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined2 *puVar28;
  wchar_t *pwVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  int iVar32;
  void *pvVar33;
  int iVar34;
  undefined1 auStack_3d8 [32];
  undefined4 local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8;
  longlong *local_398;
  uint local_390;
  longlong *local_388;
  longlong *local_380;
  undefined8 local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined8 local_360;
  void *local_358;
  undefined8 local_350;
  undefined1 local_348 [8];
  longlong local_340;
  undefined1 local_338 [8];
  longlong local_330;
  undefined4 local_328;
  undefined8 local_324;
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  int local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined8 *local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  longlong local_290;
  longlong local_288 [2];
  undefined8 local_278;
  undefined8 *local_270;
  undefined8 local_268;
  undefined8 *local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  void *local_228;
  int local_220;
  undefined4 local_21c;
  longlong local_218;
  longlong local_210 [2];
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  longlong local_1e8;
  longlong local_1e0 [2];
  longlong local_1d0 [2];
  longlong local_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [24];
  longlong local_190;
  undefined1 local_180 [24];
  longlong local_168;
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  uint local_128 [2];
  longlong local_120;
  longlong local_118;
  int local_110;
  int local_108;
  char local_104;
  int local_100;
  longlong local_f8;
  longlong local_f0;
  int local_e8;
  undefined8 local_d8;
  char local_d0;
  undefined1 local_c8 [128];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  puVar30 = (undefined8 *)0x0;
  local_390 = 0;
  local_388 = (longlong *)((ulonglong)local_388 & 0xffffffff00000000);
  local_380 = param_1;
  if (param_2 != 0) {
    param_1[0x31] = param_2;
    uVar10 = FDateTime::Now(local_200);
    lVar11 = FDateTime::ToUnixTimestamp(uVar10);
    param_1[0x2c] = lVar11;
    if (((int)param_1[0x30] != 8) ||
       (cVar7 = (**(code **)(*param_1 + 0x290))(param_1), cVar7 != '\0')) {
      (**(code **)(*param_1 + 0x2e0))(param_1);
    }
  }
  param_1[0x52] = 0;
  local_2d8 = (longlong *)0x0;
  local_2d0 = 0;
  *(float *)(param_1 + 0x2b) =
       *(float *)((longlong)param_1 + 0x1b4) + *(float *)(param_1 + 0x36) +
       *(float *)(param_1 + 0x37);
  puVar12 = (undefined8 *)FName::FName(local_1f8,"AssetRegistry",1);
  uVar10 = *puVar12;
  uVar13 = FUN_14168dc80();
  plVar14 = (longlong *)FUN_141690010(uVar13,uVar10);
  plVar14 = (longlong *)(**(code **)(*plVar14 + 0x48))(plVar14);
  lVar11 = *plVar14;
  puVar12 = (undefined8 *)FName::FName(local_1f0,"PatchExpansionData",1);
  (**(code **)(lVar11 + 0x28))(plVar14,*puVar12,&local_2d8,1);
  local_398 = local_2d8;
  plVar14 = local_2d8 + (longlong)(int)local_2d0 * 0xb;
  local_388 = plVar14;
  if (local_2d8 != plVar14) {
    local_378 = 0;
    local_368 = (undefined8 *)0x0;
    plVar19 = local_2d8;
    do {
      if ((undefined8 *)*plVar19 != puVar30) {
        local_398 = plVar19;
        puVar12 = (undefined8 *)FName::ToString(plVar19,local_1e0);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar28 = &DAT_143f3eda8;
        }
        else {
          puVar28 = (undefined2 *)*puVar12;
        }
        uVar10 = UObject::GetPrivateStaticClass();
        lVar11 = FUN_141799410(uVar10,0,puVar28,0);
        if (local_1e0[0] != 0) {
          FMemory::Free();
        }
        if (lVar11 == 0) {
          puVar12 = (undefined8 *)FName::ToString(plVar19,local_1d0);
          if (*(int *)(puVar12 + 1) == 0) {
            puVar28 = &DAT_143f3eda8;
          }
          else {
            puVar28 = (undefined2 *)*puVar12;
          }
          uVar10 = UObject::GetPrivateStaticClass();
          local_3a8 = 1;
          local_3b0 = 0;
          local_3b8 = 0;
          lVar11 = FUN_141799c90(uVar10,0,puVar28);
          if (local_1d0[0] != 0) {
            FMemory::Free();
          }
          plVar14 = local_388;
          if (lVar11 == 0) goto LAB_140df7499;
        }
        lVar15 = FUN_1414a12b0();
        plVar6 = local_380;
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        plVar14 = local_388;
        if (bVar3) {
          puVar12 = *(undefined8 **)(lVar11 + 0x208);
          puVar31 = puVar12 + (longlong)*(int *)(lVar11 + 0x210) * 2;
          local_370 = puVar31;
          if (puVar12 != puVar31) {
            local_378 = 0;
            do {
              pvVar33 = (void *)0x0;
              iVar34 = *(int *)(puVar12 + 1);
              _Src = (void *)*puVar12;
              local_358 = (void *)0x0;
              if (iVar34 == 0) {
                local_220 = iVar34;
                local_21c = 0;
              }
              else {
                local_350._0_4_ = iVar34;
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_358,iVar34,0);
                pvVar33 = local_358;
                _guard_xfg_dispatch_icall_nop(local_358,_Src,(longlong)iVar34 * 2);
                local_220 = (int)local_350;
                local_21c = local_350._4_4_;
              }
              local_2b0 = 0;
              local_358 = (void *)0x0;
              local_350 = 0;
              local_2b8 = 0;
              local_2a8 = 0;
              local_228 = pvVar33;
              FUN_1417978e0(&local_2b8,&local_228);
              local_218 = local_2b8;
              FString::FString(local_210,&local_2b0);
              local_290 = local_218;
              local_2a0 = 0xffffffff;
              local_29c = 0;
              FString::FString(local_288,local_210);
              if (local_210[0] != 0) {
                FMemory::Free();
              }
              if (local_290 != 0) {
                plVar14 = plVar6 + 0x32;
                lVar11 = *plVar14;
                lVar16 = plVar6[0x33];
                for (lVar15 = lVar11; lVar15 != lVar11 + (longlong)(int)lVar16 * 0x28;
                    lVar15 = lVar15 + 0x28) {
                  cVar7 = FSoftObjectPath::operator==(lVar15 + 0x10,&local_290);
                  if (cVar7 != '\0') {
                    puVar31 = local_370;
                    if ((int)((lVar15 - lVar11) / 0x28) != -1) goto LAB_140df7461;
                    break;
                  }
                }
                iVar34 = (int)plVar6[0x33];
                lVar11 = (longlong)iVar34;
                *(int *)(plVar6 + 0x33) = iVar34 + 1;
                if (*(int *)((longlong)plVar6 + 0x19c) < iVar34 + 1) {
                  TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar14,iVar34);
                }
                lVar16 = *plVar14;
                local_360 = 0;
                *(undefined8 *)(lVar16 + 0x18 + lVar11 * 0x28) = 0;
                lVar15 = lVar16 + lVar11 * 0x28;
                *(undefined4 *)(lVar15 + 0x24) = 0;
                *(undefined4 *)(lVar16 + lVar11 * 0x28) = 0xffffffff;
                *(undefined4 *)(lVar16 + 4 + lVar11 * 0x28) = 0;
                *(undefined8 *)(lVar15 + 0x10) = 0;
                *(undefined4 *)(lVar15 + 0x20) = 0;
                if (0x7fffffff < *(uint *)(lVar15 + 0x24)) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar15 + 0x18,0);
                }
                if (*(undefined2 **)(lVar15 + 0x18) != (undefined2 *)0x0) {
                  **(undefined2 **)(lVar15 + 0x18) = 0;
                }
                *(undefined4 *)(lVar16 + 8 + lVar11 * 0x28) = 0;
                *(undefined4 *)(lVar16 + lVar11 * 0x28) = local_2a0;
                *(undefined4 *)(lVar16 + 4 + lVar11 * 0x28) = (undefined4)local_29c;
                *(undefined4 *)(lVar16 + 8 + lVar11 * 0x28) = local_29c._4_4_;
                local_1c0 = local_290;
                FString::FString(local_1b8,local_288);
                FSoftObjectPath::operator=(lVar15 + 0x10,&local_1c0);
                puVar31 = local_370;
              }
LAB_140df7461:
              if (local_288[0] != 0) {
                FMemory::Free();
              }
              if (local_2b0 != 0) {
                FMemory::Free();
              }
              puVar12 = puVar12 + 2;
              plVar14 = local_388;
              plVar19 = local_398;
              puVar30 = local_368;
            } while (puVar12 != puVar31);
          }
        }
      }
LAB_140df7499:
      plVar19 = plVar19 + 0xb;
      param_1 = local_380;
      local_398 = plVar19;
    } while (plVar19 != plVar14);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  param_1[0x4d] = *(longlong *)(DAT_146b33f38 + 0x90);
  lVar11 = FUN_1413c3a10();
  local_1e8 = lVar11;
  local_248 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar11 != 0) {
    lVar16 = FUN_1413c3a10();
    lVar15 = lVar11;
    do {
      if (lVar15 == lVar16) goto LAB_140df7512;
      lVar15 = *(longlong *)(lVar15 + 0x30);
    } while (lVar15 != 0);
  }
  lVar11 = 0;
LAB_140df7512:
  local_128[0] = 5;
  local_d0 = '\0';
  local_250 = lVar11;
  FUN_14044bc80(&local_120,&local_248,&local_250);
  FUN_14045a130(local_128);
  if (local_104 == '\0') {
    local_398 = (longlong *)0x0;
    do {
      lVar15 = local_f8;
      lVar11 = 0;
      if (local_f8 != 0) {
        lVar11 = *(longlong *)(local_f8 + 0x558);
      }
      local_310 = 0;
      local_308 = 0;
      local_328 = 0xffffffff;
      local_324 = 0;
      local_318 = 0;
      if (lVar11 == 0) {
        local_398 = (longlong *)0x0;
        local_318 = 0;
      }
      else {
        uVar10 = FSoftObjectPath::FSoftObjectPath(local_158,lVar11);
        FSoftObjectPath::operator=(&local_318,uVar10);
        FWeakObjectPtr::operator=(&local_328,lVar11);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_324 = CONCAT44(DAT_1464b56f4,(undefined4)local_324);
      }
      lVar11 = FWeakObjectPtr::Get(&local_328);
      if (lVar11 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != local_324._4_4_) && (local_370 = (undefined8 *)0x0, local_318 != 0)) {
          lVar11 = FUN_141796df0(&local_318);
          FWeakObjectPtr::operator=(&local_328,lVar11);
          if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_324 = CONCAT44(DAT_1464b56f4,(undefined4)local_324);
          }
          lVar11 = FWeakObjectPtr::Get(&local_328);
          if (lVar11 != 0) goto LAB_140df7682;
        }
      }
      else {
LAB_140df7682:
        lVar16 = FUN_143029600();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar16 = param_1[0x32];
          lVar11 = lVar16 + (longlong)(int)param_1[0x33] * 0x28;
          for (; lVar16 != lVar11; lVar16 = lVar16 + 0x28) {
            cVar7 = FSoftObjectPath::operator==(lVar16 + 0x10,&local_318);
            if (cVar7 != '\0') {
              (**(code **)(*param_1 + 0x2f8))(param_1,lVar15);
              break;
            }
          }
        }
      }
      if (local_310 != 0) {
        FMemory::Free();
      }
      local_368 = (undefined8 *)local_120;
      iVar34 = local_108 + 1;
      if (iVar34 < local_e8 + local_110) {
        lVar11 = (longlong)iVar34 * 8;
        iVar32 = local_e8;
        iVar9 = local_110;
        do {
          lVar15 = 0;
          if (iVar34 < iVar9) {
            lVar16 = *(longlong *)(local_118 + lVar11);
          }
          else {
            lVar16 = *(longlong *)(local_f0 + (longlong)(iVar34 - iVar9) * 8);
          }
          local_100 = local_100 + 1;
          if ((lVar16 != 0) &&
             (lVar17 = AActor::GetLevel(lVar16), iVar32 = local_e8, iVar9 = local_110, lVar17 != 0))
          {
            if ((local_128[0] & 1) != 0) {
              iVar1 = *(int *)(lVar16 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar26 = iVar1 >> 0x1f & 0xffff;
                uVar8 = iVar1 + uVar26;
                lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                         (longlong)(int)((uVar8 & 0xffff) - uVar26) * 0x18;
              }
              if ((*(uint *)(lVar15 + 8) >> 0x1d & 1) != 0) goto LAB_140df78e4;
            }
            if (((local_128[0] >> 1 & 1) == 0) ||
               (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(lVar16), iVar32 = local_e8,
               iVar9 = local_110, cVar7 != '\0')) {
              if ((local_128[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar17 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar17 + 0x205) & 0x10) == 0)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                piVar2 = *(int **)(lVar17 + 600);
                if (((*(longlong *)(lVar17 + 0xc0) == 0) ||
                    (piVar18 = (int *)UWorld::GetActiveLevelCollection(), piVar18 == (int *)0x0)) ||
                   (piVar2 == piVar18)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar5 = true;
                }
                else {
                  bVar5 = false;
                }
                if ((bVar4) || (bVar4 = false, bVar5)) {
                  bVar4 = true;
                }
                iVar32 = local_e8;
                iVar9 = local_110;
                if ((!bVar3) || (!bVar4)) goto LAB_140df78e4;
              }
              lVar15 = ULevel::GetWorld(lVar17);
              puVar30 = local_368;
              iVar32 = local_e8;
              iVar9 = local_110;
              if ((undefined8 *)lVar15 == local_368) {
                lVar15 = AActor::GetLevel(lVar16);
                if (lVar15 == *(longlong *)((longlong)puVar30 + 0x30)) goto LAB_140df790d;
                lVar15 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                iVar32 = local_e8;
                iVar9 = local_110;
                if (!bVar3) goto LAB_140df790d;
              }
            }
          }
LAB_140df78e4:
          iVar34 = iVar34 + 1;
          lVar11 = lVar11 + 8;
        } while (iVar34 < iVar32 + iVar9);
      }
      local_f8 = 0;
      local_104 = '\x01';
      iVar34 = local_108;
      lVar16 = local_f8;
LAB_140df790d:
      local_f8 = lVar16;
      local_108 = iVar34;
      param_1 = local_380;
    } while (local_104 == '\0');
  }
  if (local_d0 != '\0') {
    local_d0 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_120,local_d8);
    if (local_f0 != 0) {
      FMemory::Free();
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
  }
  local_278 = (**(code **)(*param_1 + 0x148))(param_1);
  local_270 = &local_278;
  local_268 = FUN_14073d760(&local_278,DAT_14685c220);
  puVar30 = local_270;
  local_260 = &local_278;
  local_258 = 0;
  local_2c0 = local_270;
  plVar14 = (longlong *)FUN_14073d760(local_270,local_268);
  local_380 = plVar14;
  puVar12 = (undefined8 *)FUN_14073d760(local_260,local_258);
  local_368 = puVar12;
  if (plVar14 != puVar12) {
    do {
      local_238 = plVar14[2];
      bVar3 = false;
      plVar19 = (longlong *)FUN_1407cb710();
      if (plVar19 != (longlong *)0x0) {
        iVar34 = 0;
        local_48 = (undefined1 *)0x0;
        local_40 = 0;
        (**(code **)(*plVar19 + 0x2f8))(plVar19,local_c8);
        uVar27 = local_40 & 0xffffffff;
        local_388 = (longlong *)((ulonglong)local_388 & 0xffffffff00000000);
        puVar25 = local_48;
        if (0 < (int)local_40) {
          local_2c8 = 0;
          do {
            lVar11 = local_2c8;
            iVar32 = 0;
            puVar30 = local_2c0;
            plVar14 = local_380;
            puVar12 = local_368;
            if (bVar3) break;
            puVar20 = local_c8;
            if (puVar25 != (undefined1 *)0x0) {
              puVar20 = puVar25;
            }
            lVar15 = *(longlong *)(puVar20 + local_2c8);
            if (lVar15 != 0) {
              iVar9 = ULevelVariantSets::GetNumVariantSets(lVar15);
              if (0 < iVar9) {
                do {
                  if (bVar3) break;
                  plVar14 = (longlong *)FUN_1407cad00(lVar15,iVar32);
                  if (plVar14 == (longlong *)0x0) {
LAB_140df7aef:
                    plVar14 = (longlong *)0x0;
                  }
                  else {
                    lVar11 = UMaterialInstanceDynamic::GetPrivateStaticClass();
                    if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
                        != lVar11 + 0x88)) {
                      bVar4 = false;
                    }
                    else {
                      bVar4 = true;
                    }
                    if (!bVar4) goto LAB_140df7aef;
                  }
                  if (plVar14 != (longlong *)0x0) {
                    local_390 = local_390 | 1;
                    lVar16 = (**(code **)(*plVar14 + 0x310))(plVar14,local_1a8);
                    lVar11 = FWeakObjectPtr::Get();
                    if (lVar11 == 0) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      if ((DAT_1464b56f4 != *(int *)(lVar16 + 8)) &&
                         (local_398 = (longlong *)0x0, *(longlong *)(lVar16 + 0x10) != 0)) {
                        lVar11 = FUN_141796df0();
                        FWeakObjectPtr::operator=(lVar16,lVar11);
                        if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
                          LOCK();
                          if (DAT_1464b56f4 == 0) {
                            DAT_1464b56f4 = 0;
                          }
                          UNLOCK();
                          *(int *)(lVar16 + 8) = DAT_1464b56f4;
                        }
                        lVar11 = FWeakObjectPtr::Get(lVar16);
                        if (lVar11 != 0) goto LAB_140df7b90;
                      }
                    }
                    else {
LAB_140df7b90:
                      lVar16 = FUN_14171bfe0();
                      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
                        bVar4 = false;
                      }
                      else {
                        bVar4 = true;
                      }
                      if (bVar4) {
                        lVar16 = FUN_1428dfc70();
                        do {
                          if (lVar11 == lVar16) {
                            bVar4 = false;
                            goto LAB_140df7be4;
                          }
                          lVar11 = *(longlong *)(lVar11 + 0x30);
                        } while (lVar11 != 0);
                      }
                    }
                  }
                  bVar4 = true;
LAB_140df7be4:
                  if (((local_390 & 1) != 0) && (local_390 = local_390 & 0xfffffffe, local_190 != 0)
                     ) {
                    FMemory::Free();
                  }
                  if (!bVar4) {
                    lVar11 = (**(code **)(*plVar14 + 0x310))(plVar14,local_180);
                    pwVar21 = (wchar_t *)FWeakObjectPtr::Get(lVar11);
                    pwVar29 = (wchar_t *)0x0;
                    pwVar23 = pwVar29;
                    if (pwVar21 == (wchar_t *)0x0) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      if ((DAT_1464b56f4 != *(int *)(lVar11 + 8)) &&
                         (local_370 = (undefined8 *)0x0, *(longlong *)(lVar11 + 0x10) != 0)) {
                        lVar16 = FUN_141796df0();
                        FWeakObjectPtr::operator=(lVar11,lVar16);
                        if ((lVar16 != 0) || (DAT_1469e7e10 == '\0')) {
                          LOCK();
                          if (DAT_1464b56f4 == 0) {
                            DAT_1464b56f4 = 0;
                          }
                          UNLOCK();
                          *(int *)(lVar11 + 8) = DAT_1464b56f4;
                        }
                        pwVar21 = (wchar_t *)FWeakObjectPtr::Get(lVar11);
                        if (pwVar21 != (wchar_t *)0x0) goto LAB_140df7c97;
                      }
                    }
                    else {
LAB_140df7c97:
                      lVar11 = FUN_14171bfe0();
                      if ((*(int *)(*(longlong *)(pwVar21 + 8) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(pwVar21 + 8) + 0x88) +
                           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                        bVar4 = false;
                      }
                      else {
                        bVar4 = true;
                      }
                      if (bVar4) {
                        pwVar22 = (wchar_t *)FUN_1428dfc70();
                        pwVar24 = pwVar21;
                        do {
                          pwVar23 = pwVar21;
                          if (pwVar24 == pwVar22) break;
                          pwVar24 = *(wchar_t **)(pwVar24 + 0x18);
                          pwVar23 = pwVar29;
                        } while (pwVar24 != (wchar_t *)0x0);
                      }
                    }
                    lVar11 = *(longlong *)(pwVar23 + 0x7c);
                    if (lVar11 == 0) {
                      (**(code **)(*(longlong *)pwVar23 + 0x368))(pwVar23);
                      lVar11 = *(longlong *)(pwVar23 + 0x7c);
                    }
                    if (local_168 != 0) {
                      FMemory::Free();
                    }
                    lVar11 = *(longlong *)(lVar11 + 0x558);
                    local_2f0 = 0;
                    local_2e8 = 0;
                    local_2e0 = 0;
                    local_300 = 0xffffffff;
                    local_2fc = 0;
                    FSoftObjectPath::Reset(&local_2f0);
                    local_2f8 = 0;
                    if (lVar11 == 0) {
                      local_300 = 0xffffffff;
                      local_2fc = 0;
                      FSoftObjectPath::Reset(&local_2f0);
                      local_2f8 = 0;
                    }
                    else {
                      uVar10 = FSoftObjectPath::FSoftObjectPath(local_140,lVar11);
                      FSoftObjectPath::operator=(&local_2f0,uVar10);
                      FWeakObjectPtr::operator=(&local_300,lVar11);
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      local_2f8 = DAT_1464b56f4;
                    }
                    lVar16 = param_1[0x32];
                    lVar11 = lVar16 + (longlong)(int)param_1[0x33] * 0x28;
                    if (lVar16 != lVar11) {
LAB_140df7dc2:
                      cVar7 = FSoftObjectPath::operator==(lVar16 + 0x10,&local_2f0);
                      if (cVar7 == '\0') goto code_r0x000140df7dd3;
                      bVar3 = true;
                      pwVar21 = _guard_xfg_dispatch_icall_nop
                                          (L"&UOakStreamingInteractionEvent_Lootable::OnLootableSpawned"
                                           ,L"::");
                      pwVar23 = pwVar29;
                      while (pwVar24 = pwVar21, pwVar24 != (wchar_t *)0x0) {
                        pwVar21 = _guard_xfg_dispatch_icall_nop(pwVar24 + 1,L"::");
                        pwVar23 = pwVar24;
                      }
                      FName::FName(&local_240,pwVar23 + 2,1);
                      lVar11 = local_240;
                      FWeakObjectPtr::operator=(local_348,0);
                      local_340 = 0;
                      FWeakObjectPtr::operator=(local_348,param_1);
                      local_360 = 0;
                      local_340 = lVar11;
                      if ((lVar11 != 0) && (lVar11 = FWeakObjectPtr::Get(local_348), lVar11 != 0)) {
                        UObject::FindFunction(lVar11,local_340);
                      }
                      lVar11 = local_238;
                      FUN_1406a5aa0(local_238 + 0x788,local_348);
                      pwVar23 = _guard_xfg_dispatch_icall_nop
                                          (L"&UOakStreamingInteractionEvent_Lootable::OnLootableDied"
                                           ,L"::");
                      while (pwVar21 = pwVar23, pwVar21 != (wchar_t *)0x0) {
                        pwVar23 = _guard_xfg_dispatch_icall_nop(pwVar21 + 1,L"::");
                        pwVar29 = pwVar21;
                      }
                      FName::FName(&local_230,pwVar29 + 2,1);
                      lVar16 = local_230;
                      FWeakObjectPtr::operator=(local_338,0);
                      local_330 = 0;
                      FWeakObjectPtr::operator=(local_338,param_1);
                      local_378 = 0;
                      local_330 = lVar16;
                      if ((lVar16 != 0) && (lVar16 = FWeakObjectPtr::Get(local_338), lVar16 != 0)) {
                        UObject::FindFunction(lVar16,local_330);
                      }
                      FUN_1406a5aa0(lVar11 + 0x798,local_338);
                      *(int *)(param_1 + 0x52) = (int)param_1[0x52] + 1;
                    }
LAB_140df7f59:
                    if (local_2e8 != 0) {
                      FMemory::Free();
                    }
                  }
                  iVar32 = iVar32 + 1;
                  iVar34 = ULevelVariantSets::GetNumVariantSets(lVar15);
                } while (iVar32 < iVar34);
                lVar11 = local_2c8;
                iVar34 = (int)local_388;
              }
              uVar27 = local_40 & 0xffffffff;
              puVar25 = local_48;
            }
            iVar34 = iVar34 + 1;
            local_2c8 = lVar11 + 8;
            local_388 = (longlong *)CONCAT44(local_388._4_4_,iVar34);
            puVar30 = local_2c0;
            plVar14 = local_380;
            puVar12 = local_368;
          } while (iVar34 < (int)uVar27);
        }
        if (puVar25 != (undefined1 *)0x0) {
          FMemory::Free();
        }
      }
      plVar14 = (longlong *)FUN_14073d760(puVar30,*plVar14);
      local_380 = plVar14;
    } while (plVar14 != puVar12);
  }
  FUN_1404be960(&local_2d8);
  return;
code_r0x000140df7dd3:
  lVar16 = lVar16 + 0x28;
  if (lVar16 == lVar11) goto LAB_140df7f59;
  goto LAB_140df7dc2;
}



// FUNCTION 140df8020 FUN_140df8020 body=1293 status=ok
// SIG undefined FUN_140df8020(void)

void FUN_140df8020(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined4 uStackX_c;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8 [5];
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  if (param_2 != 0) {
    param_1[0x31] = param_2;
    uVar6 = FDateTime::Now(local_res20);
    lVar7 = FDateTime::ToUnixTimestamp(uVar6);
    param_1[0x2c] = lVar7;
    if (((int)param_1[0x30] != 8) ||
       (cVar4 = (**(code **)(*param_1 + 0x290))(param_1), cVar4 != '\0')) {
      (**(code **)(*param_1 + 0x2e0))(param_1);
    }
  }
  *(int *)(param_1 + 0x2b) = (int)param_1[0x84];
  *(undefined4 *)((longlong)param_1 + 0x4dc) = *(undefined4 *)((longlong)param_1 + 0x42c);
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar7 = FUN_142dcfb00(uVar6);
  uVar13 = 0;
  if (lVar7 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar7 = FUN_140cff230(lVar7), lVar7 != 0)) {
      if (*(int *)(lVar7 + 0x208) < (int)param_1[0x8a]) {
        plVar14 = (longlong *)((longlong)*(int *)(lVar7 + 0x208) * 0x40 + param_1[0x89]);
      }
      else {
        plVar14 = param_1 + 0x9e;
      }
      FText::operator=(param_1 + 0x9e,plVar14);
      FString::operator=(param_1 + 0xa1,plVar14 + 3);
      FString::operator=(param_1 + 0xa3);
      lVar7 = plVar14[7];
      *(int *)(param_1 + 0xa5) = (int)lVar7;
      if (0 < (int)lVar7) {
        iVar5 = (int)param_1[0x88];
        plVar14 = param_1 + 0xa6;
        iVar2 = (int)param_1[0xa7];
        if (iVar2 < iVar5) {
          *(int *)(param_1 + 0xa7) = iVar5;
          if (*(int *)((longlong)param_1 + 0x53c) < iVar5) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar14);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar14 + (longlong)iVar2 * 4),0,(longlong)(iVar5 - iVar2) << 2);
        }
        else if ((iVar5 < iVar2) && (iVar2 - iVar5 != 0)) {
          *(int *)(param_1 + 0xa7) = iVar2 - (iVar2 - iVar5);
          TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar14);
        }
        uVar11 = uVar13;
        uVar12 = uVar13;
        uVar15 = uVar13;
        if (0 < (int)param_1[0x88]) {
          do {
            uVar10 = (int)uVar11 + 1;
            *(float *)(uVar12 + *plVar14) =
                 (float)(int)param_1[0xa5] * *(float *)(uVar15 + param_1[0x87]);
            uVar11 = (ulonglong)uVar10;
            uVar12 = uVar12 + 4;
            uVar15 = uVar15 + 0x40;
          } while ((int)uVar10 < (int)param_1[0x88]);
        }
      }
    }
  }
  FWeakObjectPtr::operator=(&local_res10,param_1);
  uVar6 = local_res10;
  local_res18 = local_res10;
  local_a8[0] = 0;
  local_a8[1] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy(local_a8[0],L"RequestAsyncLoad SingleDelegate",0x40);
  local_a8[4] = 0;
  local_80 = 0;
  puVar9 = (undefined8 *)operator_new(0x20,local_a8 + 4);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_GetPoolName_144575e80;
    *(int *)(puVar9 + 1) = (int)uVar6;
    *(undefined4 *)((longlong)puVar9 + 0xc) = local_res18._4_4_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar9[3] = uVar6;
    *puVar9 = &PTR_GetPoolName_144575ec8;
  }
  lVar7 = FUN_1422ca050();
  FStreamableManager::RequestAsyncLoad
            (lVar7 + 0x178,local_68,param_1 + 0x68,local_a8 + 4,0,0,0,local_a8);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_60 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_b8 = 0;
  local_b0 = 0;
  uVar11 = uVar13;
  if (0 < (int)param_1[0x8e]) {
    do {
      uVar12 = local_b0;
      *(int *)(uVar13 + 0x50 + param_1[0x8d]) = (int)uVar11;
      lVar7 = param_1[0x8d];
      if ((*(longlong *)(uVar13 + lVar7) == 0) && (*(longlong *)(uVar13 + 0x18 + lVar7) != 0)) {
        lVar8 = (longlong)(int)local_b0;
        iVar5 = (int)local_b0 + 1;
        local_b0 = CONCAT44(local_b0._4_4_,iVar5);
        if (local_b0._4_4_ < iVar5) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_b8,uVar12 & 0xffffffff);
        }
        *(undefined8 *)(local_b8 + lVar8 * 0x18) = *(undefined8 *)(uVar13 + 0x18 + lVar7);
        FString::FString(local_b8 + lVar8 * 0x18 + 8,lVar7 + 0x20 + uVar13);
      }
      uVar10 = (int)uVar11 + 1;
      uVar13 = uVar13 + 0x60;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)param_1[0x8e]);
  }
  local_a8[2] = 0;
  local_a8[3] = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy(local_a8[2],L"RequestAsyncLoad ArrayDelegate",0x3e);
  local_78 = 0;
  local_70 = 0;
  puVar9 = (undefined8 *)operator_new(0x20,&local_78);
  if (puVar9 != (undefined8 *)0x0) {
    uStackX_c = (undefined4)((ulonglong)local_res10 >> 0x20);
    *puVar9 = &PTR_GetPoolName_144575f10;
    *(int *)(puVar9 + 1) = (int)local_res10;
    *(undefined4 *)((longlong)puVar9 + 0xc) = uStackX_c;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar9[3] = uVar6;
    *puVar9 = &PTR_GetPoolName_144575f58;
  }
  lVar7 = FUN_1422ca050();
  FUN_142840b00(lVar7 + 0x178,local_58,&local_b8,&local_78,0,0,0,local_a8 + 2);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_50 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if ((int)local_b0 != 0) {
    plVar14 = (longlong *)(local_b8 + 8);
    iVar5 = (int)local_b0;
    do {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df8530 FUN_140df8530 body=1013 status=ok
// SIG undefined FUN_140df8530(void)

void FUN_140df8530(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  longlong local_a8;
  int local_a0;
  int local_9c;
  longlong local_98 [5];
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (param_2 != 0) {
    param_1[0x31] = param_2;
    uVar5 = FDateTime::Now(local_res18);
    lVar6 = FDateTime::ToUnixTimestamp(uVar5);
    param_1[0x2c] = lVar6;
    if (((int)param_1[0x30] != 8) ||
       (cVar4 = (**(code **)(*param_1 + 0x290))(param_1), cVar4 != '\0')) {
      (**(code **)(*param_1 + 0x2e0))(param_1);
    }
  }
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)((longlong)param_1 + 0x274);
  FUN_140df34c0(param_1);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar3 = local_resc;
  uVar2 = local_res8;
  uVar8 = 0;
  local_98[0] = 0;
  local_98[1] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
  FGenericPlatformString::Memcpy(local_98[0],L"RequestAsyncLoad SingleDelegate",0x40);
  local_98[4] = 0;
  local_70 = 0;
  puVar7 = (undefined8 *)operator_new(0x20,local_98 + 4);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_GetPoolName_144575fa0;
    *(undefined4 *)(puVar7 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar7 + 0xc) = uVar3;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar7[3] = uVar5;
    *puVar7 = &PTR_GetPoolName_144575fe8;
  }
  lVar6 = FUN_1422ca050();
  FStreamableManager::RequestAsyncLoad
            (lVar6 + 0x178,local_58,param_1 + 0x34,local_98 + 4,0,0,0,local_98);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_50 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  local_a0 = 0;
  local_9c = 0;
  local_a8 = 0;
  uVar11 = uVar8;
  if (0 < (int)param_1[0x51]) {
    do {
      iVar12 = local_a0;
      *(int *)(param_1[0x50] + 0x50 + uVar8) = (int)uVar11;
      lVar6 = param_1[0x50];
      if ((*(longlong *)(lVar6 + uVar8) == 0) &&
         (local_res10 = 0, *(longlong *)(lVar6 + 0x18 + uVar8) != 0)) {
        lVar13 = (longlong)local_a0;
        local_a0 = local_a0 + 1;
        if (local_9c < local_a0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_a8,iVar12);
        }
        *(undefined8 *)(local_a8 + lVar13 * 0x18) = *(undefined8 *)(lVar6 + 0x18 + uVar8);
        FString::FString(local_a8 + lVar13 * 0x18 + 8,lVar6 + 0x20 + uVar8);
      }
      uVar10 = (int)uVar11 + 1;
      uVar8 = uVar8 + 0x60;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)param_1[0x51]);
  }
  iVar12 = local_a0;
  if (param_1[0x52] == 0) {
    lVar6 = param_1[0x55];
    local_res10 = 0;
    if (lVar6 != 0) {
      local_a0 = local_a0 + 1;
      if (local_9c < local_a0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_a8,iVar12);
        lVar6 = param_1[0x55];
      }
      lVar13 = (longlong)iVar12 * 3 + 1;
      *(longlong *)(local_a8 + -8 + lVar13 * 8) = lVar6;
      FString::FString(local_a8 + lVar13 * 8,param_1 + 0x56);
    }
  }
  local_98[2] = 0;
  local_98[3] = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 2,0);
  FGenericPlatformString::Memcpy(local_98[2],L"RequestAsyncLoad ArrayDelegate",0x3e);
  local_68 = 0;
  local_60 = 0;
  puVar7 = (undefined8 *)operator_new(0x20,&local_68);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_GetPoolName_144576030;
    *(undefined4 *)(puVar7 + 1) = local_res8;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_resc;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar7[3] = uVar5;
    *puVar7 = &PTR_GetPoolName_144576078;
  }
  lVar6 = FUN_1422ca050();
  FUN_142840b00(lVar6 + 0x178,local_48,&local_a8,&local_68,0,0,0,local_98 + 2);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_40 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_98[2] != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    plVar9 = (longlong *)(local_a8 + 8);
    iVar12 = local_a0;
    do {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 3;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df8930 FUN_140df8930 body=192 status=ok
// SIG undefined FUN_140df8930(void)

void FUN_140df8930(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x214)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x208,0);
  }
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x268);
  plVar4 = *(longlong **)(param_1 + 0x38);
  uVar3 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x40) < plVar4) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      lVar1 = *plVar4;
      *(undefined4 *)(lVar1 + 0x1d0) = 0;
      if ((*(int *)(lVar1 + 0x1d4) < 0) && (*(int *)(lVar1 + 0x1d4) != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(lVar1 + 0x1c8,0);
      }
      plVar4 = plVar4 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  FUN_143100db0(param_1,param_2);
  return;
}



// FUNCTION 140df89f0 FUN_140df89f0 body=527 status=ok
// SIG undefined FUN_140df89f0(void)

void FUN_140df89f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  puVar5 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404cf890(&local_58,*puVar5);
  puVar5 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  Online::GetSessionInterface(&local_68,*puVar5);
  plVar6 = local_68;
  if ((local_68 != (longlong *)0x0) && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x60))(local_58,&local_28,param_2);
    local_38 = local_28;
    plStack_30 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    local_48 = *(undefined8 *)(param_1 + 0xa0);
    local_40 = *(longlong **)(param_1 + 0xa8);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x178))(plVar6,&local_48,&local_38);
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
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
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_20 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140df8c00 FUN_140df8c00 body=527 status=ok
// SIG undefined FUN_140df8c00(void)

void FUN_140df8c00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  puVar5 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404cf890(&local_58,*puVar5);
  puVar5 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  Online::GetSessionInterface(&local_68,*puVar5);
  plVar6 = local_68;
  if ((local_68 != (longlong *)0x0) && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x60))(local_58,&local_28,param_2);
    local_38 = local_28;
    plStack_30 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    local_48 = *(undefined8 *)(param_1 + 0xa0);
    local_40 = *(longlong **)(param_1 + 0xa8);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x168))(plVar6,&local_48,&local_38);
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
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
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_20 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140df8e10 FUN_140df8e10 body=527 status=ok
// SIG undefined FUN_140df8e10(void)

void FUN_140df8e10(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  puVar5 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_1404cf890(&local_58,*puVar5);
  puVar5 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
  Online::GetSessionInterface(&local_68,*puVar5);
  plVar6 = local_68;
  if ((local_68 != (longlong *)0x0) && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x60))(local_58,&local_28,param_2);
    local_38 = local_28;
    plStack_30 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    local_48 = *(undefined8 *)(param_1 + 0xa0);
    local_40 = *(longlong **)(param_1 + 0xa8);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x180))(plVar6,&local_48,&local_38);
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
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
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_20 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140df9020 FUN_140df9020 body=690 status=ok
// SIG undefined FUN_140df9020(void)

void FUN_140df9020(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  void *_Src;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void **ppvVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined1 local_b8 [8];
  longlong local_b0 [10];
  void *local_60;
  undefined8 local_58;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x98);
  if (cVar5 == '\0') {
    uVar14 = 0;
    do {
      if (*(int *)(param_1 + 0xf0) <= (int)uVar14) break;
      plVar2 = *(longlong **)(uVar14 * 0xe8 + 0x10 + *(longlong *)(param_1 + 0xe8));
      puVar7 = (undefined8 *)(**(code **)(*plVar2 + 0x28))(plVar2,local_48);
      if (*(int *)(param_2 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*param_2;
      }
      if (*(int *)(puVar7 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar7;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (iVar6 == 0) {
        puVar7 = (undefined8 *)(uVar14 * 0xe8 + *(longlong *)(param_1 + 0xe8));
        uVar9 = *puVar7;
        uVar3 = puVar7[2];
        uVar8 = FWeakObjectPtr::Get(param_1 + 0x98);
        FUN_140ba9f70(uVar8,uVar3,uVar9);
        break;
      }
      bVar13 = (char)uVar14 + 1;
      uVar14 = (ulonglong)bVar13;
    } while (bVar13 < 5);
  }
  local_b8[0] = 1;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[3] = 0;
  local_b0[4] = 0;
  local_b0[5] = 0;
  local_b0[6] = 0;
  local_b0[7] = 0;
  local_b0[8] = 0;
  local_b0[9] = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  FString::operator=(local_b0,param_2);
  FString::operator=(local_b0 + 2,param_2 + 2);
  FString::operator=(local_b0 + 4,param_2 + 4);
  FString::operator=(local_b0 + 6,param_2 + 6);
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Game invite declined.",L"Overlay",L"DeclineGameInviteSuccess");
  ppvVar10 = (void **)FText::ToString(uVar9);
  if (&local_60 != ppvVar10) {
    iVar6 = *(int *)(ppvVar10 + 1);
    _Src = *ppvVar10;
    local_58 = CONCAT44(local_58._4_4_,iVar6);
    if ((iVar6 == 0) && (local_58._4_4_ == 0)) {
      local_58 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,iVar6);
      _guard_xfg_dispatch_icall_nop(local_60,_Src,(longlong)iVar6 * 2);
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  FUN_140ddb6a0(uVar9,"Invitation_Decline_Game_Notify_Response",local_b8);
  if (local_60 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_b0[8] != 0) {
    FMemory::Free();
  }
  if (local_b0[6] != 0) {
    FMemory::Free();
  }
  if (local_b0[4] != 0) {
    FMemory::Free();
  }
  if (local_b0[2] != 0) {
    FMemory::Free();
  }
  if (local_b0[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df92e0 FUN_140df92e0 body=799 status=ok
// SIG undefined FUN_140df92e0(void)

void FUN_140df92e0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void **ppvVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  byte bVar12;
  ulonglong uVar13;
  longlong *plVar14;
  char local_d8 [8];
  longlong local_d0 [10];
  void *local_80;
  undefined8 local_78;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x98);
  if (cVar5 != '\0') {
    local_d0[0] = 0;
    local_d0[1] = 0;
    local_d0[2] = 0;
    local_d0[3] = 0;
    local_d0[4] = 0;
    local_d0[5] = 0;
    local_d0[6] = 0;
    local_d0[7] = 0;
    local_d0[8] = 0;
    local_d0[9] = 0;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_d8[0] = '\0';
    FString::operator=(local_d0,param_2);
    FString::operator=(local_d0 + 2,param_2 + 2);
    FString::operator=(local_d0 + 4,param_2 + 4);
    FString::operator=(local_d0 + 6,param_2 + 6);
    uVar13 = 0;
    do {
      if (*(int *)(param_1 + 0xf0) <= (int)uVar13) break;
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x10 + uVar13 * 0xe8);
      puVar7 = (undefined8 *)(**(code **)(*plVar14 + 0x28))(plVar14,local_68);
      if (*(int *)(param_2 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*param_2;
      }
      if (*(int *)(puVar7 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar7;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (iVar6 == 0) {
        lVar4 = *(longlong *)(param_1 + 0xe8);
        uVar8 = FWeakObjectPtr::Get(param_1 + 0x98);
        local_d8[0] = FUN_140be8820(uVar8,uVar13 * 0xe8 + lVar4);
        break;
      }
      bVar12 = (char)uVar13 + 1;
      uVar13 = (ulonglong)bVar12;
    } while (bVar12 < 5);
    if (local_d8[0] == '\0') {
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_40,L"Unable to accept invite.",L"Overlay",L"JoinGameInviteFailure");
      ppvVar9 = (void **)FText::ToString(uVar8);
      plVar14 = local_38;
      if (&local_80 != ppvVar9) {
        iVar6 = *(int *)(ppvVar9 + 1);
        pvVar3 = *ppvVar9;
        local_78 = CONCAT44(local_78._4_4_,iVar6);
        if ((iVar6 == 0) && (local_78._4_4_ == 0)) {
          local_78 = 0;
          plVar14 = local_38;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,iVar6);
          _guard_xfg_dispatch_icall_nop(local_80,pvVar3,(longlong)iVar6 * 2);
          plVar14 = local_38;
        }
      }
    }
    else {
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Invite accepted.",L"Overlay",L"JoinGameInviteSuccess");
      ppvVar9 = (void **)FText::ToString(uVar8);
      plVar14 = local_50;
      if (&local_80 != ppvVar9) {
        iVar6 = *(int *)(ppvVar9 + 1);
        pvVar3 = *ppvVar9;
        local_78 = CONCAT44(local_78._4_4_,iVar6);
        if ((iVar6 == 0) && (local_78._4_4_ == 0)) {
          local_78 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,iVar6);
          _guard_xfg_dispatch_icall_nop(local_80,pvVar3,(longlong)iVar6 * 2);
          plVar14 = local_50;
        }
      }
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar14 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    FUN_140ddb6a0(uVar8,"Invitation_Join_Game_Notify_Response",local_d8);
    if (local_80 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_d0[8] != 0) {
      FMemory::Free();
    }
    if (local_d0[6] != 0) {
      FMemory::Free();
    }
    if (local_d0[4] != 0) {
      FMemory::Free();
    }
    if (local_d0[2] != 0) {
      FMemory::Free();
    }
    if (local_d0[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140df9600 FUN_140df9600 body=75 status=ok
// SIG undefined FUN_140df9600(void)

void FUN_140df9600(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x108))(plVar2,uVar1);
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  return;
}



// FUNCTION 140df9650 FUN_140df9650 body=112 status=ok
// SIG undefined FUN_140df9650(void)

void FUN_140df9650(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_140de5ab0(uVar2,local_18);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),local_18);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df96c0 FUN_140df96c0 body=90 status=ok
// SIG undefined FUN_140df96c0(void)

void FUN_140df96c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_res10 [24];
  
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x210))(plVar2,local_res10);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),local_res10[0]);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}



// FUNCTION 140df9720 FUN_140df9720 body=102 status=ok
// SIG undefined FUN_140df9720(void)

void FUN_140df9720(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_38 [8];
  longlong local_30;
  undefined1 local_20 [24];
  
  uVar1 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),local_38);
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar2 != 0) {
    FUN_140dd8110(lVar2,uVar1);
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  TArray<FPIELoginSettingsInternal,FDefaultAllocator>::
  ~TArray<FPIELoginSettingsInternal,FDefaultAllocator>(local_20);
  if (local_30 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df9790 FUN_140df9790 body=248 status=ok
// SIG undefined FUN_140df9790(void)

void FUN_140df9790(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong local_68 [12];
  
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  local_68[8] = 0;
  local_68[9] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x38))(plVar2);
  FUN_140de5760(plVar2,local_68);
  (**(code **)(*plVar2 + 0x48))(plVar2,local_68);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),local_68);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_68[8] != 0) {
    FMemory::Free();
  }
  if (local_68[6] != 0) {
    FMemory::Free();
  }
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df9890 FUN_140df9890 body=217 status=ok
// SIG undefined FUN_140df9890(void)

void FUN_140df9890(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong local_48 [8];
  
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x38))(plVar2);
  FUN_140de5980(plVar2,local_48);
  (**(code **)(*plVar2 + 0x48))(plVar2,local_48);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),local_48);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_48[6] != 0) {
    FMemory::Free();
  }
  if (local_48[4] != 0) {
    FMemory::Free();
  }
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140df9970 FUN_140df9970 body=18 status=ok
// SIG undefined FUN_140df9970(void)

undefined1 FUN_140df9970(longlong param_1)

{
  if ((*(int *)(param_1 + 0x40) != -1) && (*(int *)(param_1 + 0x3c) != -1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 140df9990 FUN_140df9990 body=5 status=ok
// SIG undefined FUN_140df9990(void)

undefined1 FUN_140df9990(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}



// FUNCTION 140df99c0 FUN_140df99c0 body=106 status=ok
// SIG undefined FUN_140df99c0(void)

ulonglong FUN_140df99c0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  lVar2 = FUN_142dcfb00(param_2);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_140cff230(lVar2);
      uVar4 = 0;
      if (lVar2 != 0) {
        return (ulonglong)*(byte *)(lVar2 + 0x1fd);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140df9a30 FUN_140df9a30 body=106 status=ok
// SIG undefined FUN_140df9a30(void)

ulonglong FUN_140df9a30(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  lVar2 = FUN_142dcfb00(param_2);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_140cff230(lVar2);
      uVar4 = 0;
      if (lVar2 != 0) {
        return (ulonglong)*(byte *)(lVar2 + 0x20c);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140df9aa0 FUN_140df9aa0 body=106 status=ok
// SIG undefined FUN_140df9aa0(void)

ulonglong FUN_140df9aa0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  lVar2 = FUN_142dcfb00(param_2);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_140cff230(lVar2);
      uVar4 = 0;
      if (lVar2 != 0) {
        return (ulonglong)*(byte *)(lVar2 + 0x1fc);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140df9b10 FUN_140df9b10 body=106 status=ok
// SIG undefined FUN_140df9b10(void)

ulonglong FUN_140df9b10(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  lVar2 = FUN_142dcfb00(param_2);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_140cff230(lVar2);
      uVar4 = 0;
      if (lVar2 != 0) {
        return (ulonglong)*(byte *)(lVar2 + 0x205);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140df9b80 FUN_140df9b80 body=106 status=ok
// SIG undefined FUN_140df9b80(void)

ulonglong FUN_140df9b80(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  lVar2 = FUN_142dcfb00(param_2);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FUN_140cff230(lVar2);
      uVar4 = 0;
      if (lVar2 != 0) {
        return (ulonglong)*(byte *)(lVar2 + 0x204);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140df9d00 FUN_140df9d00 body=1083 status=ok
// SIG undefined FUN_140df9d00(void)

undefined8 FUN_140df9d00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar6 = AHeoCon::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return 0;
  }
  uVar7 = UThrobber::GetPrivateStaticClass();
  lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar7);
  if (lVar6 == 0) {
    return 0;
  }
  plVar8 = (longlong *)(**(code **)(*(longlong *)(lVar6 + 0x178) + 0x30))();
  if (plVar8 == (longlong *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x198) == 0) {
    return 0;
  }
  plVar15 = *(longlong **)(param_1 + 400);
  plVar1 = plVar15 + *(int *)(param_1 + 0x198);
  if (plVar15 == plVar1) {
    return 0;
  }
  plVar3 = (longlong *)*plVar8;
  do {
    plVar2 = plVar3 + (int)plVar8[1];
    if (plVar3 != plVar2) {
      plVar9 = plVar3;
      do {
        if (*plVar9 == *plVar15) goto LAB_140df9e1c;
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar2);
    }
    plVar14 = (longlong *)plVar8[2];
    plVar9 = plVar14 + (int)plVar8[3];
    if (plVar14 != plVar9) {
      do {
        if (*plVar14 == *plVar15) goto LAB_140df9e1c;
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar9);
    }
    plVar15 = plVar15 + 1;
    if (plVar15 == plVar1) {
      return 0;
    }
  } while( true );
LAB_140df9e1c:
  if (*(int *)(param_1 + 0x1b8) != 0) {
    plVar15 = *(longlong **)(param_1 + 0x1b0);
    plVar1 = plVar15 + *(int *)(param_1 + 0x1b8);
    for (; plVar15 != plVar1; plVar15 = plVar15 + 1) {
      if (plVar3 != plVar2) {
        plVar9 = plVar3;
        do {
          if (*plVar9 == *plVar15) {
            return 0;
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar2);
      }
      plVar14 = (longlong *)plVar8[2];
      plVar9 = plVar14 + (int)plVar8[3];
      if (plVar14 != plVar9) {
        do {
          if (*plVar14 == *plVar15) {
            return 0;
          }
          plVar14 = plVar14 + 1;
        } while (plVar14 != plVar9);
      }
    }
  }
  lVar10 = FUN_142dcfb00(param_2);
  lVar6 = 0;
  if (lVar10 != 0) {
    lVar11 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140df9ec7;
  }
  lVar10 = lVar6;
LAB_140df9ec7:
  if (param_2[0x121] != 0) {
    lVar6 = *(longlong *)(param_2[0x121] + 0x180);
  }
  if ((((lVar10 != 0) && (*(longlong *)(lVar10 + 0x920) != 0)) &&
      (*(longlong *)(*(longlong *)(lVar10 + 0x920) + 0x180) != 0)) &&
     ((lVar6 != 0 && (iVar5 = FUN_142de8c20(), iVar5 != 2)))) {
    return 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x1e8);
  lVar6 = lVar10 + (longlong)*(int *)(param_1 + 0x1f0) * 0x28;
  for (; lVar10 != lVar6; lVar10 = lVar10 + 0x28) {
    lVar11 = FWeakObjectPtr::Get(lVar10);
    if (lVar11 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar10 + 8)) && (*(longlong *)(lVar10 + 0x10) != 0)) {
        lVar11 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar10,lVar11);
        if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar10 + 8) = DAT_1464b56f4;
        }
        lVar11 = FWeakObjectPtr::Get(lVar10);
        if (lVar11 != 0) goto LAB_140df9faa;
      }
    }
    else {
LAB_140df9faa:
      lVar12 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar13 = FUN_1413f82e0();
        lVar12 = lVar11;
        do {
          if (lVar12 == lVar13) {
            if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                lVar11 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              return 0;
            }
            break;
          }
          lVar12 = *(longlong *)(lVar12 + 0x30);
        } while (lVar12 != 0);
      }
    }
  }
  lVar11 = FUN_142cc12b0(param_2);
  lVar10 = *(longlong *)(param_1 + 0x1f8);
  lVar6 = lVar10 + (longlong)*(int *)(param_1 + 0x200) * 0x28;
  do {
    if (lVar10 == lVar6) {
      return 1;
    }
    lVar12 = FWeakObjectPtr::Get(lVar10);
    if (lVar12 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar10 + 8)) && (*(longlong *)(lVar10 + 0x10) != 0)) {
        lVar12 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar10,lVar12);
        if ((lVar12 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar10 + 8) = DAT_1464b56f4;
        }
        lVar12 = FWeakObjectPtr::Get(lVar10);
        if (lVar12 != 0) goto LAB_140dfa0d7;
      }
    }
    else {
LAB_140dfa0d7:
      lVar13 = UAsyncTaskDownloadImage::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && (lVar11 != 0)) && (lVar11 == lVar12)) {
        return 0;
      }
    }
    lVar10 = lVar10 + 0x28;
  } while( true );
}



// FUNCTION 140dfa140 FUN_140dfa140 body=4004 status=ok
// SIG undefined FUN_140dfa140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_140dfa140(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  void **ppvVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_428 [32];
  longlong *local_408;
  undefined1 local_3f8 [8];
  longlong local_3f0;
  undefined1 local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  longlong local_3d0;
  undefined8 local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  longlong local_3b0;
  undefined8 local_3a8;
  longlong local_398;
  longlong local_390;
  void *local_388;
  undefined8 local_380;
  void *local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_360;
  longlong local_358;
  longlong local_350;
  void *local_348;
  undefined8 local_340;
  void *local_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 local_320;
  longlong local_318;
  undefined8 *local_310;
  undefined8 local_308;
  longlong *local_300;
  longlong *local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined8 *local_2c8;
  ulonglong *puStack_2c0;
  longlong local_2b8;
  longlong *local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  longlong local_298;
  longlong *local_290;
  undefined8 local_288;
  longlong *local_280;
  longlong local_278;
  longlong *local_270;
  undefined1 local_268 [8];
  longlong *local_260;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong local_238;
  undefined1 local_230 [16];
  longlong local_220 [2];
  longlong local_210 [2];
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
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
  undefined1 local_e0 [16];
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined4 local_a0 [4];
  undefined1 local_90 [8];
  longlong *local_88;
  char local_78;
  undefined4 local_70 [4];
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  lVar8 = *(longlong *)(param_1 + 0xa0);
  local_3e0 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  local_3e8 = 1;
  local_310 = (undefined8 *)0x0;
  local_308 = 0;
  local_318 = param_1;
  if (lVar8 == 0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    local_3e8 = 0;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_310);
    TArray<FPIELoginSettingsInternal,FDefaultAllocator>::
    ~TArray<FPIELoginSettingsInternal,FDefaultAllocator>(&local_3d0);
  }
  else {
    local_2b0 = *(longlong **)(param_1 + 0xa8);
    if (local_2b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2b0 + 1) = (int)local_2b0[1] + 1;
      UNLOCK();
    }
    lVar14 = param_1 + 0x98;
    local_3f0 = lVar14;
    local_2b8 = lVar8;
    uVar7 = FWeakObjectPtr::Get(lVar14);
    uVar7 = FUN_140bb74b0(uVar7);
    FUN_140d80f80(uVar7,&local_2b8,&local_310,5);
    plVar9 = local_2b0;
    if (local_2b0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2b0 + 1;
      lVar8 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_2b0)(local_2b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    puVar17 = local_310 + (longlong)(int)local_308 * 2;
    for (puVar11 = local_310; puVar11 != puVar17; puVar11 = puVar11 + 2) {
      (**(code **)(*(longlong *)*puVar11 + 8))((longlong *)*puVar11,&local_300);
      local_2a8 = *(undefined8 *)(param_1 + 0xa0);
      local_2a0 = *(longlong **)(param_1 + 0xa8);
      if (local_2a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2a0 + 1) = (int)local_2a0[1] + 1;
        UNLOCK();
      }
      uVar7 = FWeakObjectPtr::Get(lVar14);
      uVar7 = FUN_140bb74b0(uVar7);
      local_408 = (longlong *)CONCAT44(local_408._4_4_,3);
      FUN_140d7da70(uVar7,&local_298,&local_2a8,&local_300);
      plVar9 = local_2a0;
      if (local_2a0 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_2a0 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_2a0)(local_2a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (local_298 == 0) {
        local_2e0 = 0;
        local_2d8 = 0;
        lVar8 = FWeakObjectPtr::Get(lVar14);
        local_408 = &local_2e0;
        cVar5 = FUN_140d79f00(*(undefined8 *)(lVar8 + 0x478),&local_300,1);
        if (cVar5 == '\0') {
          FUN_140e02ab0(param_1,&local_300);
        }
        else {
          local_358 = 0;
          local_350 = 0;
          local_348 = (void *)0x0;
          local_340 = 0;
          local_338 = (void *)0x0;
          local_330 = 0;
          local_328 = 0;
          local_320 = 0;
          plVar9 = (longlong *)(**(code **)(*local_300 + 0x28))(local_300,local_210);
          if (&local_358 != plVar9) {
            local_358 = *plVar9;
            *plVar9 = 0;
            local_350 = plVar9[1];
            plVar9[1] = 0;
          }
          if (local_210[0] != 0) {
            FMemory::Free();
          }
          uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_108,L"Friend Invitation",L"Overlay",L"FriendInviteTitle");
          ppvVar13 = (void **)FText::ToString(uVar7);
          if (&local_348 != ppvVar13) {
            iVar6 = *(int *)(ppvVar13 + 1);
            pvVar3 = *ppvVar13;
            local_340 = CONCAT44(local_340._4_4_,iVar6);
            if (iVar6 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_348,iVar6,0);
              _guard_xfg_dispatch_icall_nop(local_348,pvVar3,(longlong)iVar6 * 2);
            }
          }
          plVar9 = local_100;
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_100 + 1;
            lVar8 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          lVar8 = FText::FromString(local_d0,&local_2e0);
          uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_180,L"{0} has invited you to be a SHiFT friend.",L"Overlay",
                             L"FriendInviteDescription");
          puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_e0,uVar7);
          local_a0[0] = 4;
          FText::FText(local_90,lVar8);
          local_250 = *puVar10;
          local_2c8 = (undefined8 *)local_a0;
          puStack_2c0 = (ulonglong *)local_70;
          local_248 = puVar10[1];
          local_78 = '\x01';
          if (local_248 != 0) {
            LOCK();
            *(int *)(local_248 + 8) = *(int *)(local_248 + 8) + 1;
            UNLOCK();
          }
          local_1c8 = (undefined4 *)local_2c8;
          uStack_1c0 = puStack_2c0;
          uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8,&local_1c8);
          uVar7 = FText::Format(local_198,&local_250,uVar7);
          FText::FText(local_200,uVar7);
          plVar9 = local_190;
          if (local_190 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_190 + 1;
            lVar14 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_190)(local_190);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8);
          plVar9 = local_88;
          if ((local_78 != '\0') && (local_78 = '\0', local_88 != (longlong *)0x0)) {
            LOCK();
            plVar12 = local_88 + 1;
            lVar14 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_88)(local_88);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          plVar9 = (longlong *)puVar10[1];
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar9 + 1;
            lVar14 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          plVar9 = *(longlong **)(lVar8 + 8);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar9 + 1;
            lVar8 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          ppvVar13 = (void **)FText::ToString(local_200);
          if (&local_338 != ppvVar13) {
            iVar6 = *(int *)(ppvVar13 + 1);
            pvVar3 = *ppvVar13;
            local_330 = CONCAT44(local_330._4_4_,iVar6);
            if ((iVar6 == 0) && (local_330._4_4_ == 0)) {
              local_330 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_338,iVar6,local_330._4_4_);
              _guard_xfg_dispatch_icall_nop(local_338,pvVar3,(longlong)iVar6 * 2);
            }
          }
          plVar9 = local_1f8;
          if (local_1f8 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_1f8 + 1;
            lVar8 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_1f8)(local_1f8);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          plVar9 = local_178;
          if (local_178 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_178 + 1;
            lVar8 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_178)(local_178);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          local_3c0 = 0;
          local_3b8 = 7;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c0,0);
          lVar8 = local_3c0;
          FGenericPlatformString::Memcpy(local_3c0,L"friend",0xe);
          if (local_328 != 0) {
            FMemory::Free();
          }
          uVar18 = local_3c8;
          local_328 = lVar8;
          lVar8 = (longlong)(int)local_3c8;
          local_320 = local_3b8;
          local_3c0 = 0;
          local_3b8 = 0;
          iVar6 = (int)local_3c8 + 1;
          local_3c8 = CONCAT44(local_3c8._4_4_,iVar6);
          if (local_3c8._4_4_ < iVar6) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_3d0,uVar18 & 0xffffffff);
          }
          lVar8 = lVar8 * 0x40 + local_3d0;
          FString::FString(lVar8,&local_358);
          FString::FString(lVar8 + 0x10,&local_348);
          FString::FString(lVar8 + 0x20,&local_338);
          FString::FString(lVar8 + 0x30,&local_328);
          if (local_328 != 0) {
            FMemory::Free();
          }
          if (local_338 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_348 != (void *)0x0) {
            FMemory::Free();
          }
          lVar14 = local_3f0;
          param_1 = local_318;
          if (local_358 != 0) {
            FMemory::Free();
            lVar14 = local_3f0;
            param_1 = local_318;
          }
        }
        if (local_2e0 != 0) {
          FMemory::Free();
        }
      }
      plVar9 = local_290;
      if (local_290 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_290 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_290)(local_290);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar9 = local_2f8;
      if (local_2f8 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_2f8 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_2f8)(local_2f8);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    plVar9 = (longlong *)(param_1 + 0xe8);
    FUN_140be8c40(plVar9,0);
    local_288 = *(undefined8 *)(param_1 + 0xa0);
    local_280 = *(longlong **)(param_1 + 0xa8);
    if (local_280 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_280 + 1) = (int)local_280[1] + 1;
      UNLOCK();
    }
    uVar7 = FWeakObjectPtr::Get(lVar14);
    FUN_140bbc650(uVar7,plVar9,&local_288);
    plVar12 = local_280;
    if (local_280 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_280 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_280)(local_280);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    FUN_140ddb020(plVar9,local_3f8);
    uVar18 = 0;
    do {
      if (*(int *)(param_1 + 0xf0) <= (int)uVar18) break;
      local_2f0 = 0;
      lVar15 = uVar18 * 0xe8 + *plVar9;
      local_2e8 = 0;
      lVar8 = *(longlong *)(lVar15 + 0x10);
      if (lVar8 != 0) {
        local_270 = *(longlong **)(lVar15 + 0x18);
        if (local_270 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_270 + 1) = (int)local_270[1] + 1;
          UNLOCK();
        }
        local_278 = lVar8;
        lVar8 = FWeakObjectPtr::Get(lVar14);
        local_408 = &local_2f0;
        FUN_140d79f00(*(undefined8 *)(lVar8 + 0x478),&local_278,1);
        plVar12 = local_270;
        if (local_270 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_270 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_270)(local_270);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
      }
      FText::FText(local_268);
      if ((int)local_2e8 < 2) {
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_120,L"Join Player\'s Game",L"Overlay",L"SessionInviteJoinNoName");
        FText::operator=(local_268,uVar7);
        plVar12 = local_118;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_118 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
      }
      else {
        lVar8 = FText::FromString(local_b8,&local_2f0);
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_150,L"Join {0}",L"Overlay",L"SessionInviteJoin");
        puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar7);
        local_70[0] = 4;
        FText::FText(local_60,lVar8);
        local_240 = *puVar11;
        local_2c8 = (undefined8 *)local_70;
        puStack_2c0 = &local_40;
        local_238 = puVar11[1];
        local_48 = '\x01';
        if (local_238 != 0) {
          LOCK();
          *(int *)(local_238 + 8) = *(int *)(local_238 + 8) + 1;
          UNLOCK();
        }
        local_1a8 = (undefined4 *)local_2c8;
        uStack_1a0 = puStack_2c0;
        uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_230,&local_1a8);
        uVar7 = FText::Format(local_168,&local_240,uVar7);
        FText::FText(local_1e8,uVar7);
        plVar12 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_160 + 1;
          lVar14 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_230);
        plVar12 = local_58;
        if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_58 + 1;
          lVar14 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        plVar12 = (longlong *)puVar11[1];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar12 + 1;
          lVar14 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        plVar12 = *(longlong **)(lVar8 + 8);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar12 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        FText::operator=(local_268,local_1e8);
        plVar12 = local_1e0;
        if (local_1e0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_1e0 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_1e0)(local_1e0);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        plVar12 = local_148;
        lVar14 = local_3f0;
        if (local_148 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_148 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_148)(local_148);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            lVar14 = local_3f0;
            if (iVar6 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
              lVar14 = local_3f0;
            }
          }
        }
      }
      local_398 = 0;
      local_390 = 0;
      local_388 = (void *)0x0;
      local_380 = 0;
      local_378 = (void *)0x0;
      local_370 = 0;
      local_368 = 0;
      local_360 = 0;
      plVar12 = (longlong *)
                (**(code **)(**(longlong **)(lVar15 + 0x10) + 0x28))
                          (*(longlong **)(lVar15 + 0x10),local_220);
      if (&local_398 != plVar12) {
        local_398 = *plVar12;
        *plVar12 = 0;
        local_390 = plVar12[1];
        plVar12[1] = 0;
      }
      if (local_220[0] != 0) {
        FMemory::Free();
      }
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_138,L"Game Invitation",L"Overlay",L"GameInviteTitle");
      ppvVar13 = (void **)FText::ToString(uVar7);
      if (&local_388 != ppvVar13) {
        iVar6 = *(int *)(ppvVar13 + 1);
        pvVar3 = *ppvVar13;
        local_380 = CONCAT44(local_380._4_4_,iVar6);
        if (iVar6 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_388,iVar6,0);
          _guard_xfg_dispatch_icall_nop(local_388,pvVar3,(longlong)iVar6 * 2);
        }
      }
      plVar12 = local_130;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_130 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      ppvVar13 = (void **)FText::ToString(local_268);
      if (&local_378 != ppvVar13) {
        iVar6 = *(int *)(ppvVar13 + 1);
        pvVar3 = *ppvVar13;
        local_370 = CONCAT44(local_370._4_4_,iVar6);
        if ((iVar6 == 0) && (local_370._4_4_ == 0)) {
          local_370 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_378,iVar6,local_370._4_4_);
          _guard_xfg_dispatch_icall_nop(local_378,pvVar3,(longlong)iVar6 * 2);
        }
      }
      local_3b0 = 0;
      local_3a8 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3b0,0);
      lVar8 = local_3b0;
      FGenericPlatformString::Memcpy(local_3b0,L"game",10);
      if (local_368 != 0) {
        FMemory::Free();
      }
      uVar4 = local_3c8;
      local_368 = lVar8;
      lVar8 = (longlong)(int)local_3c8;
      local_360 = local_3a8;
      local_3b0 = 0;
      local_3a8 = 0;
      iVar6 = (int)local_3c8 + 1;
      local_3c8 = CONCAT44(local_3c8._4_4_,iVar6);
      if (local_3c8._4_4_ < iVar6) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_3d0,uVar4 & 0xffffffff);
      }
      lVar8 = lVar8 * 0x40 + local_3d0;
      FString::FString(lVar8,&local_398);
      FString::FString(lVar8 + 0x10,&local_388);
      FString::FString(lVar8 + 0x20,&local_378);
      FString::FString(lVar8 + 0x30,&local_368);
      if (local_368 != 0) {
        FMemory::Free();
      }
      if (local_378 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_388 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_398 != 0) {
        FMemory::Free();
      }
      plVar12 = local_260;
      if (local_260 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_260 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_260)(local_260);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (local_2f0 != 0) {
        FMemory::Free();
      }
      bVar16 = (char)uVar18 + 1;
      uVar18 = (ulonglong)bVar16;
      param_1 = local_318;
    } while (bVar16 < 5);
    *param_2 = local_3e8;
    *(longlong *)(param_2 + 8) = local_3e0;
    *(undefined4 *)(param_2 + 0x10) = (undefined4)local_3d8;
    *(undefined4 *)(param_2 + 0x14) = local_3d8._4_4_;
    *(longlong *)(param_2 + 0x18) = local_3d0;
    *(int *)(param_2 + 0x20) = (int)local_3c8;
    *(int *)(param_2 + 0x24) = local_3c8._4_4_;
    local_3c8 = 0;
    local_3e0 = 0;
    local_3d8 = 0;
    local_3d0 = 0;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_310);
    TArray<FPIELoginSettingsInternal,FDefaultAllocator>::
    ~TArray<FPIELoginSettingsInternal,FDefaultAllocator>(&local_3d0);
  }
  if (local_3e0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140dfb0f0 FUN_140dfb0f0 body=278 status=ok
// SIG undefined FUN_140dfb0f0(void)

void FUN_140dfb0f0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 3) != 0) {
    puVar1 = (undefined2 *)param_2[2];
  }
  FOutputDevice::LogfImpl(*param_2,L"%s%s",puVar1,puVar2);
  FUN_140e02840(param_2);
  local_18[1] = 7;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Active",0xe);
  UReplicationGraphNode_ActorList::LogNode(param_1,param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    local_18[0] = 0;
    local_18[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"Dormant",0x10);
    (**(code **)(**(longlong **)(param_1 + 0x148) + 0x2a8))
              (*(longlong **)(param_1 + 0x148),param_2,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  FUN_140e020c0(param_2);
  return;
}



// FUNCTION 140dfb210 FUN_140dfb210 body=173 status=ok
// SIG undefined FUN_140dfb210(void)

void FUN_140dfb210(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 local_18 [16];
  
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 3) != 0) {
    puVar2 = (undefined2 *)param_2[2];
  }
  FOutputDevice::LogfImpl(*param_2,L"%s%s",puVar2,puVar3);
  FUN_140e02840(param_2);
  uVar1 = FString::FString(local_18,param_3);
  FUN_143101590(param_2,uVar1,param_1 + 0xa0);
  uVar1 = FString::FString(local_18,param_3);
  FUN_143101590(param_2,uVar1,param_1 + 0x148);
  FUN_140e020c0(param_2);
  return;
}



// FUNCTION 140dfb2c0 FUN_140dfb2c0 body=35 status=ok
// SIG undefined FUN_140dfb2c0(void)

void FUN_140dfb2c0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_142ca61c0();
  uVar1 = FUN_140dedaf0(param_1);
  *(undefined8 *)(param_1 + 0x538) = uVar1;
  return;
}



// FUNCTION 140dfb2f0 FUN_140dfb2f0 body=145 status=ok
// SIG undefined FUN_140dfb2f0(void)

void FUN_140dfb2f0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_1 + 0x538) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x538) + 0x900);
    if (lVar1 != 0) {
      FUN_142cec500(lVar1,&local_28);
      *(undefined4 *)(param_1 + 0x540) = local_28;
      *(undefined4 *)(param_1 + 0x544) = local_24;
      puVar2 = (undefined8 *)FUN_142ced030(lVar1,local_18,1);
      *(undefined8 *)(param_1 + 0x548) = *puVar2;
      *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(puVar2 + 1);
    }
    return;
  }
  uVar3 = FUN_140dedaf0();
  *(undefined8 *)(param_1 + 0x538) = uVar3;
  return;
}



// FUNCTION 140dfb390 FUN_140dfb390 body=499 status=ok
// SIG undefined FUN_140dfb390(void)

void FUN_140dfb390(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  int local_res8 [2];
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x16,local_res8,param_2);
  if ((((local_res8[0] != -1) &&
       (lVar1 = param_1[0x16] + (longlong)local_res8[0] * 0x18, lVar1 != 0)) &&
      (plVar9 = (longlong *)(lVar1 + 8), plVar9 != (longlong *)0x0)) &&
     (lVar1 = *plVar9, lVar1 != 0)) {
    plVar9 = param_1 + 0x41;
    plVar7 = (longlong *)*plVar9;
    uVar10 = 0;
    plVar8 = plVar7 + (int)param_1[0x42];
    for (; plVar7 != plVar8; plVar7 = plVar7 + 1) {
      if (*plVar7 == param_2) goto LAB_140dfb4d4;
    }
    local_28 = *(undefined8 *)(param_2 + 0x10);
    local_30 = 0;
    lVar6 = *(longlong *)(param_2 + 0x20);
    local_38 = param_2;
    if (lVar6 != 0) {
      lVar5 = FUN_1429a0270();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (cVar4 = ULevel::IsPersistentLevel(lVar6), cVar4 == '\0')) {
        lVar6 = UObjectBaseUtility::GetOutermost(lVar6);
        local_30 = *(undefined8 *)(lVar6 + 0x18);
      }
    }
    (**(code **)(*param_1 + 0x330))(param_1,&local_38);
    iVar2 = (int)param_1[0x42];
    *(int *)(param_1 + 0x42) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x214) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar2);
    }
    *(longlong *)(*plVar9 + (longlong)iVar2 * 8) = param_2;
LAB_140dfb4d4:
    uVar12 = 0;
    if (((*(byte *)(param_2 + 0x90) & 8) == 0) && (0.0 < *(float *)(lVar1 + 0x30))) {
      uVar12 = *(undefined4 *)(param_2 + 0x138);
    }
    *(undefined4 *)(lVar1 + 0x38) = uVar12;
    plVar9 = (longlong *)param_1[7];
    uVar11 = (longlong)(int)param_1[8] & 0x1fffffffffffffff;
    if (plVar9 + (int)param_1[8] < plVar9) {
      uVar11 = uVar10;
    }
    if (uVar11 != 0) {
      do {
        lVar6 = *plVar9;
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(lVar6 + 0x30,local_res8,param_2);
        if ((((local_res8[0] != -1) &&
             (lVar6 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar6 + 0x30), lVar6 != 0)) &&
            (plVar8 = (longlong *)(lVar6 + 8), plVar8 != (longlong *)0x0)) &&
           (lVar6 = *plVar8, lVar6 != 0)) {
          *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(lVar1 + 0x38);
        }
        plVar9 = plVar9 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar11);
    }
  }
  return;
}



// FUNCTION 140dfb590 FUN_140dfb590 body=1038 status=ok
// SIG undefined FUN_140dfb590(void)

void FUN_140dfb590(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  byte bVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined4 uVar18;
  longlong *plVar19;
  undefined8 local_res8;
  longlong *local_res10;
  undefined8 local_res20;
  undefined1 local_50 [24];
  
  plVar14 = (longlong *)(param_1 + 0xb0);
  local_res10 = param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar14,&local_res8,param_2);
  plVar17 = (longlong *)0x0;
  plVar19 = plVar17;
  if ((int)local_res8 != -1) {
    plVar19 = (longlong *)(*plVar14 + (longlong)(int)local_res8 * 0x18);
  }
  plVar7 = plVar19 + 1;
  if (plVar19 == (longlong *)0x0) {
    plVar7 = plVar17;
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  if (*plVar7 == 0) {
    return;
  }
  plVar19 = (longlong *)(param_1 + 0x208);
  plVar15 = (longlong *)*plVar19;
  plVar7 = plVar15 + *(int *)(param_1 + 0x210);
  for (; plVar15 != plVar7; plVar15 = plVar15 + 1) {
    if ((longlong *)*plVar15 == param_2) {
      return;
    }
  }
  lVar3 = param_2[0x23];
  plVar7 = (longlong *)(param_1 + 0x268);
  local_res20 = ((ulonglong)local_res20._4_4_ & 0xfffffff8) << 0x20;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar7,&local_res8,param_2);
  plVar15 = plVar17;
  if ((int)local_res8 != -1) {
    plVar15 = (longlong *)(*plVar7 + (longlong)(int)local_res8 * 0x18);
  }
  plVar8 = plVar15 + 1;
  if (plVar15 == (longlong *)0x0) {
    plVar8 = plVar17;
  }
  plVar17 = plVar8;
  if (plVar8 == (longlong *)0x0) {
    plVar17 = (longlong *)param_2[2];
    local_res8 = (undefined4 *)FUN_140ded520(param_1,plVar17);
    lVar12 = plVar17[0x1f];
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x368))(plVar17);
      lVar12 = plVar17[0x1f];
    }
    uVar18 = *local_res8;
    bVar5 = local_res8._4_1_ & 0xf8;
    local_res8._0_5_ =
         CONCAT14((*(byte *)(lVar12 + 0x90) >> 2 & 2 | *(byte *)(lVar12 + 0x90) & 4) >> 1 |
                  (*(byte *)(lVar12 + 0x91) & 1) << 2 | bVar5,uVar18);
    local_res20 = (longlong)local_res8;
    plVar17 = &local_res20;
  }
  if ((param_3 != (longlong *)0x0) && ((*plVar17 & 0x500000000) == 0x400000000)) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(plVar14,&local_res8,param_3);
    plVar10 = (longlong *)0x0;
    plVar15 = plVar10;
    if ((int)local_res8 != -1) {
      plVar15 = (longlong *)(*plVar14 + (longlong)(int)local_res8 * 0x18);
    }
    plVar9 = plVar15 + 1;
    if (plVar15 == (longlong *)0x0) {
      plVar9 = plVar10;
    }
    if ((((plVar9 != (longlong *)0x0) && (lVar12 = *plVar9, lVar12 != 0)) &&
        (piVar4 = *(int **)(lVar12 + 0x18), piVar4 != (int *)0x0)) &&
       (plVar15 = plVar10, 0 < (longlong)piVar4[2])) {
      do {
        if (*(longlong **)(piVar4 + (longlong)plVar10 * 2 + 8) == param_2) {
          if ((int)plVar15 != -1) {
            if (1 < *piVar4) {
              FActorRepListRefView::RequestNewList
                        (lVar12 + 0x18,*(undefined4 *)(lVar12 + 0x28),
                         CONCAT71((int7)((ulonglong)piVar4 >> 8),1));
            }
            FUN_140e04ba0(lVar12 + 0x18,&local_res10);
          }
          break;
        }
        plVar10 = (longlong *)((longlong)plVar10 + 1);
        plVar15 = (longlong *)(ulonglong)((int)plVar15 + 1);
      } while ((longlong)plVar10 < (longlong)piVar4[2]);
    }
  }
  cVar6 = FUN_1407cd900(param_2);
  if (cVar6 != '\0') {
    return;
  }
  if ((*plVar17 & 0x200000000) != 0) {
    if (param_3 == (longlong *)0x0) {
      lVar12 = 0;
    }
    else {
      uVar11 = (**(code **)(*param_3 + 0x4a8))(param_3);
      lVar12 = FUN_140dedce0(param_1,uVar11);
    }
    lVar13 = 0;
    if (lVar3 != 0) {
      uVar11 = (**(code **)(*param_2 + 0x4a8))(param_2);
      lVar13 = FUN_140dedce0(param_1,uVar11);
    }
    if ((lVar12 != 0) && (lVar12 == lVar13)) {
      puVar16 = *(undefined8 **)(lVar12 + 0x1c8);
      puVar1 = puVar16 + *(int *)(lVar12 + 0x1d0);
      for (; puVar16 != puVar1; puVar16 = puVar16 + 1) {
        if ((longlong *)*puVar16 == param_2) goto LAB_140dfb901;
      }
    }
    FUN_140ddc410(local_50,&local_res10);
    if ((lVar12 == 0) || (cVar6 = FUN_140e04c30(param_1,lVar12,local_50,plVar17), cVar6 == '\0')) {
      puVar16 = *(undefined8 **)(param_1 + 0x38);
      puVar1 = puVar16 + *(int *)(param_1 + 0x40);
      while ((puVar16 != puVar1 &&
             (cVar6 = FUN_140e04c30(param_1,*puVar16,local_50,plVar17), cVar6 == '\0'))) {
        puVar16 = puVar16 + 1;
      }
    }
    if (plVar8 != (longlong *)0x0) {
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(plVar7,param_2);
    }
LAB_140dfb8c2:
    iVar2 = *(int *)(param_1 + 0x210);
    *(int *)(param_1 + 0x210) = iVar2 + 1;
    if (*(int *)(param_1 + 0x214) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar19,iVar2);
    }
    *(longlong **)(*plVar19 + (longlong)iVar2 * 8) = param_2;
    return;
  }
LAB_140dfb901:
  if (lVar3 == 0) {
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x91) & 1) == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 0x12) & 8) != 0) {
    return;
  }
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar14,&local_res8,lVar3);
  plVar17 = (longlong *)0x0;
  if ((int)local_res8 != -1) {
    plVar17 = (longlong *)(*plVar14 + (longlong)(int)local_res8 * 0x18);
  }
  plVar14 = plVar17 + 1;
  if (plVar17 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
  }
  if ((plVar14 == (longlong *)0x0) || (lVar3 = *plVar14, lVar3 == 0)) goto LAB_140dfb8c2;
  if (*(int **)(lVar3 + 0x18) == (int *)0x0) {
    uVar11 = 0;
    uVar18 = 4;
  }
  else {
    if (**(int **)(lVar3 + 0x18) < 2) goto LAB_140dfb98d;
    uVar18 = *(undefined4 *)(lVar3 + 0x28);
    uVar11 = 1;
  }
  FActorRepListRefView::RequestNewList(lVar3 + 0x18,uVar18,uVar11);
LAB_140dfb98d:
  FUN_140de5b70(lVar3 + 0x18,&local_res10);
  return;
}



// FUNCTION 140dfb9a0 FUN_140dfb9a0 body=335 status=ok
// SIG undefined FUN_140dfb9a0(void)

void FUN_140dfb9a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int local_res8 [2];
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x16,local_res8,param_2);
  if ((((local_res8[0] != -1) &&
       (lVar7 = param_1[0x16] + (longlong)local_res8[0] * 0x18, lVar7 != 0)) &&
      (plVar5 = (longlong *)(lVar7 + 8), plVar5 != (longlong *)0x0)) && (*plVar5 != 0)) {
    plVar5 = param_1 + 0x41;
    plVar8 = (longlong *)*plVar5;
    plVar1 = plVar8 + (int)param_1[0x42];
    for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      if (*plVar8 == param_2) {
        return;
      }
    }
    local_20 = 0;
    local_18 = *(undefined8 *)(param_2 + 0x10);
    lVar7 = *(longlong *)(param_2 + 0x20);
    local_28 = param_2;
    if (lVar7 != 0) {
      lVar6 = FUN_1429a0270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (cVar4 = ULevel::IsPersistentLevel(lVar7), cVar4 == '\0')) {
        lVar7 = UObjectBaseUtility::GetOutermost(lVar7);
        local_20 = *(undefined8 *)(lVar7 + 0x18);
      }
    }
    (**(code **)(*param_1 + 0x330))(param_1,&local_28);
    iVar2 = (int)param_1[0x42];
    *(int *)(param_1 + 0x42) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x214) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar2);
    }
    *(longlong *)(*plVar5 + (longlong)iVar2 * 8) = param_2;
  }
  return;
}



// FUNCTION 140dfbb00 FUN_140dfbb00 body=506 status=ok
// SIG undefined FUN_140dfbb00(void)

void FUN_140dfbb00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    iVar1 = *(int *)(lVar2 + 8);
    for (lVar13 = lVar2 + 0x20; lVar13 != lVar2 + ((longlong)iVar1 + 4) * 8; lVar13 = lVar13 + 8) {
      uVar12 = 0;
      lVar7 = FUN_140decfc0(**(undefined8 **)(param_1 + 0x38),lVar13);
      if (*(int *)(lVar7 + 100) < 1) {
        iVar9 = *(int *)(lVar7 + 0x58);
        uVar14 = uVar12;
        if (0 < iVar9) {
          do {
            if ((((*(int *)(uVar14 + 8 + *(longlong *)(lVar7 + 0x50)) == 0) ||
                 (plVar10 = *(longlong **)(uVar14 + *(longlong *)(lVar7 + 0x50)),
                 plVar10 == (longlong *)0x0)) ||
                (cVar5 = (**(code **)(*plVar10 + 8))(plVar10,param_1), cVar5 != '\0')) ||
               (cVar5 = (**(code **)(*plVar10 + 0x10))(plVar10), cVar5 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(lVar7 + 0x50,uVar12,1);
            }
            else {
              uVar12 = (ulonglong)((int)uVar12 + 1);
              uVar14 = uVar14 + 0x10;
            }
            iVar9 = *(int *)(lVar7 + 0x58);
          } while ((int)uVar12 < iVar9);
        }
        iVar6 = iVar9 * 2;
        if (iVar9 * 2 < 3) {
          iVar6 = 2;
        }
        *(int *)(lVar7 + 0x60) = iVar6;
        if (*(int *)(lVar7 + 0x5c) != iVar9) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar7 + 0x50,*(undefined4 *)(lVar7 + 0x58))
          ;
        }
      }
      else {
        plVar10 = *(longlong **)(lVar7 + 0x50);
        bVar4 = false;
        plVar11 = plVar10 + (longlong)*(int *)(lVar7 + 0x58) * 2;
        if (plVar10 != plVar11) {
          do {
            if ((((int)plVar10[1] != 0) &&
                (plVar3 = (longlong *)*plVar10, plVar3 != (longlong *)0x0)) &&
               (cVar5 = (**(code **)(*plVar3 + 8))(plVar3,param_1), cVar5 != '\0')) {
              if (((int)plVar10[1] != 0) &&
                 (plVar3 = (longlong *)*plVar10, plVar3 != (longlong *)0x0)) {
                (**(code **)(*plVar3 + 0x28))(plVar3,0);
                if (*plVar10 != 0) {
                  lVar8 = FMemory::Realloc(*plVar10,0,0);
                  *plVar10 = lVar8;
                }
                *(undefined4 *)(plVar10 + 1) = 0;
              }
              bVar4 = true;
            }
            plVar10 = plVar10 + 2;
          } while (plVar10 != plVar11);
          if (bVar4) {
            *(undefined4 *)(lVar7 + 0x60) = 0;
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x148) != 0) {
      FUN_143104f70(*(longlong *)(param_1 + 0x148),param_1);
    }
  }
  FUN_143104200(param_1);
  if (*(longlong **)(param_1 + 0x148) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140dfbcee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x148) + 0x288))();
    return;
  }
  return;
}



// FUNCTION 140dfbd00 FUN_140dfbd00 body=189 status=ok
// SIG undefined FUN_140dfbd00(void)

void FUN_140dfbd00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *local_18;
  longlong *local_10;
  
  plVar6 = (longlong *)0x0;
  FUN_1404d0c50(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x390))(local_18,param_1 + 0x58);
  }
  if (((*(int *)(param_1 + 0x18) != 7) &&
      (*(undefined4 *)(param_1 + 0x18) = 7, *(int *)(param_1 + 0x10) != 0)) &&
     (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar5 != '\0') {
      if (*(int *)(param_1 + 0x10) != 0) {
        plVar6 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,7);
    }
  }
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
  return;
}



// FUNCTION 140dfbdc0 FUN_140dfbdc0 body=225 status=ok
// SIG undefined FUN_140dfbdc0(void)

void FUN_140dfbdc0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_18;
  longlong *local_10;
  
  lVar5 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_18,param_1 + 0x50);
  if (((local_18 != 0) && (*(int *)(local_18 + 0x90) != 0)) &&
     (*(longlong **)(local_18 + 0x88) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(local_18 + 0x88) + 0x18))();
    if (((cVar4 != '\0') && (*(int *)(local_18 + 0x90) != 0)) &&
       (plVar3 = *(longlong **)(local_18 + 0x88), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      if (*(longlong *)(local_18 + 0x88) != 0) {
        uVar6 = FMemory::Realloc(*(longlong *)(local_18 + 0x88),0,0);
        *(undefined8 *)(local_18 + 0x88) = uVar6;
      }
      *(undefined4 *)(local_18 + 0x90) = 0;
    }
  }
  FUN_140804c50(param_1);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  }
  return;
}



// FUNCTION 140dfbeb0 FUN_140dfbeb0 body=130 status=ok
// SIG undefined FUN_140dfbeb0(void)

void FUN_140dfbeb0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x98);
  if (cVar3 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x98);
    uVar1 = FUN_140bb74b0(uVar1);
    TBaseMulticastDelegate<void>::Remove(uVar1,*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x98);
    FUN_140483870(*(longlong *)(lVar2 + 0x478) + 0x1e0,param_1);
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::Reset
              (param_1 + 0x48);
  }
  FUN_140804c50(param_1);
  return;
}



// FUNCTION 140dfbf40 FUN_140dfbf40 body=155 status=ok
// SIG undefined FUN_140dfbf40(void)

void FUN_140dfbf40(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong local_28 [3];
  longlong local_10;
  
  puVar1 = (undefined8 *)*param_3;
  if (puVar1 != (undefined8 *)0x0) {
    cVar2 = (**(code **)*puVar1)(puVar1,*(undefined8 *)(param_1 + 0x50));
    if (cVar2 != '\0') {
      local_28[0] = 0;
      local_28[1] = 0;
      local_28[2] = *(undefined8 *)(param_1 + 0x50);
      local_10 = *(longlong *)(param_1 + 0x58);
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      FUN_140de82c0(param_1 + 0x38,6,local_28 + 2,*(undefined1 *)(param_1 + 0x61),
                    *(undefined1 *)(param_1 + 0x60),local_28);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
                    /* WARNING: Could not recover jumptable at 0x000140dfbfce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf0))();
      return;
    }
  }
  return;
}



// FUNCTION 140dfbfe0 FUN_140dfbfe0 body=317 status=ok
// SIG undefined FUN_140dfbfe0(void)

void FUN_140dfbfe0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res8 [2];
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,local_28);
  TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x48,local_res8,uVar1);
  puVar3 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar3 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x48));
  }
  puVar4 = puVar3 + 2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (puVar4 != (undefined8 *)0x0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x98);
    TBaseMulticastDelegate<void>::Remove(*(longlong *)(lVar2 + 0x478) + 0x1e0,*puVar4);
    uVar1 = (**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,local_28);
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x48,uVar1);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    local_38 = 0;
    local_30 = 0;
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x98);
    FUN_140d79f00(*(undefined8 *)(lVar2 + 0x478),param_2,1,1,&local_38);
    if (1 < (int)local_30) {
      FUN_140e03070(param_1,param_2,&local_38);
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140dfc120 FUN_140dfc120 body=224 status=ok
// SIG undefined FUN_140dfc120(void)

void FUN_140dfc120(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong local_18 [2];
  
  if (param_2 != 0) {
    lVar2 = FUN_1414cfae0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140dfc16d;
  }
  param_2 = 0;
LAB_140dfc16d:
  *(longlong *)(param_1 + 0x4c8) = param_2;
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0xf8);
  }
  if ((param_2 != 0) && (lVar2 != 0)) {
    local_18[0] = 0;
    local_18[1] = 0;
    FUN_140e062c0(param_1,0,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    FUN_140e08c20(*(undefined8 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x17c),0,
                  *(undefined4 *)(param_1 + 0x460),*(undefined4 *)(param_1 + 0x464),param_1 + 0x468)
    ;
  }
  return;
}



// FUNCTION 140dfc200 FUN_140dfc200 body=14 status=ok
// SIG undefined FUN_140dfc200(void)

void FUN_140dfc200(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_18;
  longlong lStack_10;
  
  if (param_3 != param_1[0x8b]) {
    return;
  }
  lVar1 = *param_1;
  uStack_18 = param_2;
  lStack_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0430);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStack_18);
  return;
}



// FUNCTION 140dfc210 FUN_140dfc210 body=688 status=ok
// SIG undefined FUN_140dfc210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dfc210(longlong *param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  undefined8 *local_320;
  code **local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined2 local_2e8;
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [72];
  code *local_288 [2];
  longlong local_278 [4];
  longlong *local_258;
  int local_248;
  undefined1 local_238 [520];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  if (param_1[0x8e] == 0) {
    return;
  }
  if (param_3 != param_1[0x8e]) {
    return;
  }
  cVar2 = FText::IsEmpty(param_1 + 0x4d);
  lVar7 = 0;
  if (cVar2 == '\0') {
    local_328 = (undefined8 *)0x0;
    FUN_140de6a50(param_1[0x31],param_1 + 10,param_1 + 0x4d,0x40a00000);
  }
  plVar8 = param_1 + 0x10;
  lVar3 = FWeakObjectPtr::Get(plVar8);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == (int)param_1[0x11]) || (local_308 = 0, param_1[0x12] == 0))
    goto LAB_140dfc45a;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar8,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x11) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(plVar8);
    if (lVar3 == 0) goto LAB_140dfc45a;
  }
  lVar4 = FUN_140600840();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_308 = 0;
    if ((param_1[0x52] == 0) ||
       (((*(int *)((longlong)param_1 + 0x2b4) == 0 && (int)param_1[0x56] == 0) &&
        *(int *)((longlong)param_1 + 0x2ac) == 0) && (int)param_1[0x55] == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_258 = (longlong *)0x0;
      local_288[0] = AK::MemoryMgr::StartProfileThreadUsage;
      local_248 = 0;
      local_300 = 0xffffffff00000000;
      local_2f0 = 0;
      local_2e8 = 0;
      local_2f8 = 0;
      local_238[0] = 0;
      local_30 = 0;
      local_28 = 0;
      uVar5 = FUN_1405e1510(local_2d0,param_1 + 0x50);
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      local_318 = local_288;
      local_320 = &local_2f0;
      local_328 = &local_300;
      FUN_1405f2e30(local_2e0,uVar6,uVar5,local_238);
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_248 != 0) {
        plVar8 = local_278;
        if (local_258 != (longlong *)0x0) {
          plVar8 = local_258;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_258 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
LAB_140dfc45a:
  lVar3 = param_1[0x31];
  if (lVar3 != 0) {
    lVar7 = *(longlong *)(lVar3 + 0xf8);
  }
  if (lVar7 != 0) {
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x44) = *(int *)(lVar3 + 0x44) + 1;
    }
    *(undefined4 *)(param_1 + 0x30) = 5;
    FUN_140de7700(lVar7,param_1);
  }
  return;
}



// FUNCTION 140dfc4c0 FUN_140dfc4c0 body=98 status=ok
// SIG undefined FUN_140dfc4c0(void)

void FUN_140dfc4c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x478) != 0) {
    cVar1 = FUN_140df9d00(*(longlong *)(param_1 + 0x478),param_3);
    if (cVar1 != '\0') {
      *(undefined8 *)(param_1 + 0x480) = param_3;
      local_18 = param_2;
      local_10 = param_3;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x488,&local_18);
    }
  }
  return;
}



// FUNCTION 140dfc530 FUN_140dfc530 body=544 status=ok
// SIG undefined FUN_140dfc530(void)

void FUN_140dfc530(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar3 = (**(code **)(*param_1 + 0x298))();
  if (cVar3 == '\0') {
    return;
  }
  cVar3 = FUN_140df9d00(param_1,param_3);
  if (cVar3 == '\0') {
    return;
  }
  lVar7 = 0;
  if (param_3 == 0) {
LAB_140dfc5ab:
    param_3 = lVar7;
  }
  else {
    lVar4 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140dfc5ab;
  }
  param_1[0x8e] = param_3;
  lVar4 = lVar7;
  if (param_1[0x31] != 0) {
    lVar4 = *(longlong *)(param_1[0x31] + 0x100);
  }
  if (lVar4 == 0) goto LAB_140dfc6cb;
  uStack_20 = 0;
  local_28 = FUN_140dffa70;
  plVar1 = (longlong *)(lVar4 + 0x4c8);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar5 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_1c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_143f77bd0;
  }
  if (&local_28 == plVar1) {
LAB_140dfc659:
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar6 = FMemory::Realloc(plVar5,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
  }
  else {
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,plVar1);
      goto LAB_140dfc659;
    }
    if ((*(int *)(lVar4 + 0x4d0) != 0) && (plVar5 = (longlong *)*plVar1, plVar5 != (longlong *)0x0))
    {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      if (*plVar1 != 0) {
        lVar6 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar6;
      }
      *(undefined4 *)(lVar4 + 0x4d0) = 0;
    }
  }
  FUN_1414d1b60(lVar4,param_1[0x8e]);
  local_28 = (code *)param_1[0x44];
  FString::FString(&uStack_20,param_1 + 0x45);
  FUN_1414d10a0(lVar4,&local_28,param_1[0x8e],0);
LAB_140dfc6cb:
  (**(code **)(*param_1 + 0x2e8))(param_1,1);
  if (param_1[0x31] != 0) {
    lVar7 = *(longlong *)(param_1[0x31] + 0xf8);
  }
  if (lVar7 != 0) {
    FUN_140de7bc0(lVar7,param_1,0);
  }
  return;
}



// FUNCTION 140dfc750 FUN_140dfc750 body=14 status=ok
// SIG undefined FUN_140dfc750(void)

void FUN_140dfc750(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_18;
  longlong lStack_10;
  
  if (param_3 != param_1[0x8b]) {
    return;
  }
  lVar1 = *param_1;
  uStack_18 = param_2;
  lStack_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0438);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStack_18);
  return;
}



// FUNCTION 140dfc760 FUN_140dfc760 body=680 status=ok
// SIG undefined FUN_140dfc760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dfc760(longlong *param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  undefined8 *local_320;
  code **local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined2 local_2e8;
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [72];
  code *local_288 [2];
  longlong local_278 [4];
  longlong *local_258;
  int local_248;
  undefined1 local_238 [520];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  if (param_1[0x8e] == 0) {
    return;
  }
  if (param_3 != param_1[0x8e]) {
    return;
  }
  cVar2 = FText::IsEmpty(param_1 + 0x58);
  lVar7 = 0;
  if (cVar2 == '\0') {
    local_328 = (undefined8 *)0x0;
    FUN_140de6a50(param_1[0x31],param_1 + 10,param_1 + 0x58,0x40a00000);
  }
  plVar8 = param_1 + 0x10;
  lVar3 = FWeakObjectPtr::Get(plVar8);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == (int)param_1[0x11]) || (local_308 = 0, param_1[0x12] == 0))
    goto LAB_140dfc9aa;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar8,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x11) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(plVar8);
    if (lVar3 == 0) goto LAB_140dfc9aa;
  }
  lVar4 = FUN_140600840();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_308 = 0;
    if ((param_1[0x5d] == 0) ||
       (((*(int *)((longlong)param_1 + 0x30c) == 0 && (int)param_1[0x61] == 0) &&
        *(int *)((longlong)param_1 + 0x304) == 0) && (int)param_1[0x60] == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_258 = (longlong *)0x0;
      local_288[0] = AK::MemoryMgr::StartProfileThreadUsage;
      local_248 = 0;
      local_300 = 0xffffffff00000000;
      local_2f0 = 0;
      local_2e8 = 0;
      local_2f8 = 0;
      local_238[0] = 0;
      local_30 = 0;
      local_28 = 0;
      uVar5 = FUN_1405e1510(local_2d0,param_1 + 0x5b);
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      local_318 = local_288;
      local_320 = &local_2f0;
      local_328 = &local_300;
      FUN_1405f2e30(local_2e0,uVar6,uVar5,local_238);
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_248 != 0) {
        plVar8 = local_278;
        if (local_258 != (longlong *)0x0) {
          plVar8 = local_258;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_258 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
LAB_140dfc9aa:
  if (param_1[0x31] != 0) {
    lVar7 = *(longlong *)(param_1[0x31] + 0xf8);
  }
  if (lVar7 != 0) {
    *(undefined4 *)(param_1 + 0x30) = 6;
    FUN_140de7700(lVar7,param_1);
  }
  return;
}



// FUNCTION 140dfca10 FUN_140dfca10 body=465 status=ok
// SIG undefined FUN_140dfca10(void)

void FUN_140dfca10(longlong *param_1,char param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res20 [8];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_30,L"Extension Not Installed",L"StreamingInteractionMgr",L"NotInstalledTitle"
                );
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_48,L"The ECHOcast extension seems to not be installed on your channel.",
                 L"StreamingInteractionMgr",L"NotInstalledDesc");
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar7 = UGameplayStatics::GetPlayerController(uVar6,0);
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
        if ((bVar4) && (*(longlong *)(lVar7 + 0x1428) != 0)) {
          FUN_1411db4f0(*(longlong *)(lVar7 + 0x1428),local_res20,local_30,local_48,0x40e00000,0,2);
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
    }
  }
  else if (param_3 != '\0') goto LAB_140dfcb9d;
  if (((longlong *)param_1[0x11] != (longlong *)0x0) && (param_1[0x1f] != 0)) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x70))();
  }
LAB_140dfcb9d:
  if (((param_2 != '\0') && (param_3 != '\0')) && ((longlong *)param_1[0x11] != (longlong *)0x0)) {
    cVar5 = (**(code **)(*(longlong *)param_1[0x11] + 0x58))();
    if (cVar5 != '\0') {
      FUN_140e09170(param_1);
    }
  }
  return;
}



// FUNCTION 140dfcbf0 FUN_140dfcbf0 body=1879 status=ok
// SIG undefined FUN_140dfcbf0(void)

void FUN_140dfcbf0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  void *_Src;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  int local_res8 [2];
  undefined4 local_258;
  undefined8 local_254;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  void *local_230;
  ulonglong local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined2 local_1c0;
  undefined1 local_1be;
  undefined8 local_1bc;
  undefined8 local_1b4;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined4 local_188;
  byte local_184;
  longlong local_180;
  longlong local_178;
  void *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  byte local_158;
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined8 local_138;
  longlong *local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118 [2];
  undefined1 local_108 [32];
  longlong local_e8;
  longlong local_d8;
  longlong local_c8;
  longlong local_b8;
  undefined1 local_98 [32];
  longlong *local_78;
  undefined1 local_58 [32];
  
  lVar6 = 0;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0xf8);
  }
  if (((lVar6 != 0) && (cVar4 = FUN_140de4fb0(lVar6,param_1), cVar4 != '\0')) &&
     (lVar6 = FUN_142dcfb00(param_1), lVar6 != 0)) {
    lVar7 = FUN_14145f370();
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
      uVar8 = FUN_140ee5e20(lVar6);
      lVar6 = *param_3;
      local_128 = lVar6 + (longlong)(int)param_3[1] * 8;
      if (lVar6 != local_128) {
        do {
          lVar7 = 0;
          cVar4 = FWeakObjectPtr::IsValid(lVar6);
          if (cVar4 != '\0') {
            uVar9 = FWeakObjectPtr::Get(lVar6);
            FUN_142ffa6f0(uVar8,local_res8,uVar9);
            if (local_res8[0] != -1) {
              FUN_142fde510(local_98);
              cVar4 = FUN_142ffa4f0(uVar8,local_res8,local_98);
              plVar10 = local_78;
              if ((cVar4 != '\0') && (local_78 != (longlong *)0x0)) {
                local_120 = FUN_14301f8f0();
                plVar10 = (longlong *)(**(code **)(*plVar10 + 0x628))(plVar10,local_120);
                if (plVar10 != (longlong *)0x0) {
                  lVar2 = plVar10[0x41];
                  if (lVar2 != 0) {
                    lVar7 = *(longlong *)(lVar2 + 0x1d8);
                  }
                  local_220 = 0;
                  local_248 = 0;
                  local_240 = 0;
                  local_238 = 0;
                  local_258 = 0xffffffff;
                  local_254 = 0;
                  if (lVar7 == 0) {
                    local_218 = 0;
                    local_248 = 0;
                  }
                  else {
                    uVar9 = FSoftObjectPath::FSoftObjectPath(local_58,lVar7);
                    FSoftObjectPath::operator=(&local_248,uVar9);
                    FWeakObjectPtr::operator=(&local_258,lVar7);
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    local_254 = CONCAT44(DAT_1464b56f4,(undefined4)local_254);
                  }
                  lVar7 = FWeakObjectPtr::Get(&local_258);
                  if (lVar7 == 0) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    if ((DAT_1464b56f4 != local_254._4_4_) && (local_210 = 0, local_248 != 0)) {
                      lVar7 = FUN_141796df0(&local_248);
                      FWeakObjectPtr::operator=(&local_258,lVar7);
                      if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                        LOCK();
                        if (DAT_1464b56f4 == 0) {
                          DAT_1464b56f4 = 0;
                        }
                        UNLOCK();
                        local_254 = CONCAT44(DAT_1464b56f4,(undefined4)local_254);
                      }
                      lVar7 = FWeakObjectPtr::Get(&local_258);
                      if (lVar7 != 0) goto LAB_140dfce90;
                    }
                  }
                  else {
LAB_140dfce90:
                    lVar11 = FUN_1430228e0();
                    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (bVar3) {
                      lVar11 = *(longlong *)(param_1 + 0x1a0);
                      lVar7 = lVar11 + (longlong)*(int *)(param_1 + 0x1a8) * 0x28;
                      for (; lVar11 != lVar7; lVar11 = lVar11 + 0x28) {
                        cVar4 = FSoftObjectPath::operator==(lVar11 + 0x10,&local_248);
                        if (cVar4 != '\0') {
                          local_1f8 = 0;
                          local_1e8 = 0;
                          local_1e0 = 0;
                          local_1d8 = 0;
                          local_1d0 = 0;
                          local_1c0 = 0;
                          local_1be = 0;
                          local_1bc = 0;
                          local_1b4 = 0;
                          local_1a8 = 0;
                          local_1a0 = 0;
                          local_198 = 0;
                          lVar7 = FWeakObjectPtr::Get(&local_258);
                          if (lVar7 == 0) {
                            LOCK();
                            if (DAT_1464b56f4 == 0) {
                              DAT_1464b56f4 = 0;
                            }
                            UNLOCK();
                            if ((DAT_1464b56f4 != local_254._4_4_) &&
                               (local_208 = 0, local_248 != 0)) {
                              lVar7 = FUN_141796df0(&local_248);
                              FWeakObjectPtr::operator=(&local_258,lVar7);
                              if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                                LOCK();
                                if (DAT_1464b56f4 == 0) {
                                  DAT_1464b56f4 = 0;
                                }
                                UNLOCK();
                                local_254 = CONCAT44(DAT_1464b56f4,(undefined4)local_254);
                              }
                              lVar7 = FWeakObjectPtr::Get(&local_258);
                              if (lVar7 != 0) goto LAB_140dfcfdc;
                            }
LAB_140dfd016:
                            local_1c8 = 0;
                          }
                          else {
LAB_140dfcfdc:
                            lVar11 = FUN_1430228e0();
                            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) <
                                 *(int *)(lVar11 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                              bVar3 = false;
                            }
                            else {
                              bVar3 = true;
                            }
                            local_1c8 = lVar7;
                            if (!bVar3) goto LAB_140dfd016;
                          }
                          plVar12 = local_78;
                          iVar1 = *(int *)(param_1 + 0x280);
                          local_1f0 = local_78;
                          *(int *)(param_1 + 0x280) = iVar1 + 1;
                          if (*(int *)(param_1 + 0x284) < iVar1 + 1) {
                            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>
                            ::ResizeGrow(param_1 + 0x278,iVar1);
                          }
                          puVar13 = (undefined4 *)
                                    ((longlong)iVar1 * 0x68 + *(longlong *)(param_1 + 0x278));
                          *puVar13 = 0;
                          *(longlong **)(puVar13 + 2) = plVar12;
                          FString::FString(puVar13 + 4,&local_1e8);
                          FString::FString(puVar13 + 8,&local_1d8);
                          *(longlong *)(puVar13 + 0xc) = local_1c8;
                          *(undefined1 *)(puVar13 + 0xe) = (undefined1)local_1c0;
                          *(undefined1 *)((longlong)puVar13 + 0x39) = local_1c0._1_1_;
                          *(undefined1 *)((longlong)puVar13 + 0x3a) = local_1be;
                          puVar13[0xf] = (undefined4)local_1bc;
                          puVar13[0x10] = local_1bc._4_4_;
                          puVar13[0x11] = (undefined4)local_1b4;
                          puVar13[0x12] = local_1b4._4_4_;
                          FString::FString(puVar13 + 0x14);
                          *(undefined1 *)(puVar13 + 0x18) = local_198;
                          local_230 = (void *)0x0;
                          local_228 = 0;
                          _guard_xfg_dispatch_icall_nop(local_108,0,0x68);
                          FUN_142ff3000(plVar10,local_108);
                          FUN_142ff5c90(local_108,&local_230,1);
                          local_188 = 0xffffffff;
                          local_168 = 0;
                          uStack_160 = 0;
                          local_184 = 0;
                          local_180 = 0;
                          local_178 = 0;
                          local_170 = (void *)0x0;
                          local_158 = 0;
                          UCheatManagerGunfire::GetAllCheats(local_150);
                          _Src = local_230;
                          lVar7 = (longlong)(int)local_228;
                          local_188 = *(undefined4 *)(param_1 + 0x260);
                          local_140 = 0;
                          local_138 = 0;
                          local_168 = CONCAT44(local_168._4_4_,(int)local_228);
                          if (((int)local_228 == 0) && (local_168._4_4_ == 0)) {
                            local_168 = local_228 & 0xffffffff;
                          }
                          else {
                            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                                      (&local_170,local_228 & 0xffffffff);
                            _guard_xfg_dispatch_icall_nop(local_170,_Src,lVar7 * 2);
                          }
                          if (lVar2 == 0) {
                            local_184 = 0;
                          }
                          else {
                            local_184 = *(byte *)(lVar2 + 0x38) & 1;
                          }
                          plVar12 = (longlong *)FUN_140dedc60(plVar10,local_118);
                          if (&local_180 != plVar12) {
                            if (local_180 != 0) {
                              FMemory::Free();
                            }
                            local_180 = *plVar12;
                            *plVar12 = 0;
                            local_178 = plVar12[1];
                            plVar12[1] = 0;
                          }
                          if (local_118[0] != 0) {
                            FMemory::Free();
                          }
                          uStack_160 = CONCAT44(uStack_160._4_4_,
                                                *(undefined4 *)((longlong)plVar10 + 0x1fc));
                          uVar5 = FSceneViewport::GetMouseY(plVar10);
                          uStack_160 = CONCAT44(uVar5,(undefined4)uStack_160);
                          uVar9 = (**(code **)(*plVar10 + 0x530))(plVar10,0);
                          TArray<FAudioVolumeSubmixSendSettings,TSizedDefaultAllocator<32>_>::
                          operator=(local_150,uVar9);
                          local_158 = *(byte *)(plVar10 + 99) >> 1 & 1;
                          iVar1 = *(int *)(param_1 + 0x260);
                          *(int *)(param_1 + 0x260) = iVar1 + 1;
                          local_130 = plVar10;
                          if (*(int *)(param_1 + 0x264) < iVar1 + 1) {
                            TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow
                                      (param_1 + 600,iVar1);
                          }
                          FUN_140ddc040((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 600),
                                        &local_188);
                          FUN_140ddedd0(&local_188);
                          if (local_b8 != 0) {
                            FMemory::Free();
                          }
                          if (local_c8 != 0) {
                            FMemory::Free();
                          }
                          if (local_d8 != 0) {
                            FMemory::Free();
                          }
                          if (local_e8 != 0) {
                            FMemory::Free();
                          }
                          if (local_230 != (void *)0x0) {
                            FMemory::Free();
                          }
                          if (local_1a8 != 0) {
                            FMemory::Free();
                          }
                          if (local_1d8 != 0) {
                            FMemory::Free();
                          }
                          if (local_1e8 != 0) {
                            FMemory::Free();
                          }
                          break;
                        }
                      }
                    }
                  }
                  if (local_240 != 0) {
                    FMemory::Free();
                  }
                }
              }
            }
          }
          lVar6 = lVar6 + 8;
        } while (lVar6 != local_128);
      }
      if (0 < *(int *)(param_1 + 0x260)) {
        FUN_140e093f0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140dfd350 FUN_140dfd350 body=62 status=ok
// SIG undefined FUN_140dfd350(void)

void FUN_140dfd350(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1407665e0(param_2 + 0x678,param_1);
    FUN_1407665e0(param_2 + 0x688,param_1);
  }
  return;
}



// FUNCTION 140dfd390 FUN_140dfd390 body=80 status=ok
// SIG undefined FUN_140dfd390(void)

void FUN_140dfd390(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x98);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x98);
    uVar1 = FUN_140bb74b0(uVar1);
    TBaseMulticastDelegate<void>::Remove(uVar1,*(undefined8 *)(param_1 + 0x38));
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 140dfd3e0 FUN_140dfd3e0 body=1036 status=ok
// SIG undefined FUN_140dfd3e0(void)

void FUN_140dfd3e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  void **ppvVar9;
  uint uVar10;
  undefined1 local_1b8 [8];
  void *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  longlong local_180;
  longlong *local_178;
  longlong local_170;
  longlong *local_168;
  undefined **local_160;
  undefined **local_158;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined8 *local_120;
  int local_118;
  undefined4 local_114;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 *local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [2];
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [24];
  undefined1 local_48 [8];
  longlong *local_40;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x98);
  if (cVar4 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x98);
    uVar6 = FUN_140bb74b0(uVar6);
    TBaseMulticastDelegate<void>::Remove(uVar6,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar7 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),&local_170,param_2);
  if (local_170 != 0) {
    FUN_142b45fe0(local_170,&local_180);
    if (local_180 != 0) {
      Chaos::FPBDRigidSpringConstraints::FPBDRigidSpringConstraints(local_98);
      FString::operator=(local_80,param_1 + 0xb0);
      FUN_142b0e490(local_108);
      FString::operator=(local_f8,local_90);
      FString::operator=(local_e8,local_80);
      FString::operator=(local_d8,local_70);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&local_c8,local_60);
      local_190 = 0;
      local_188 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      puVar8 = (undefined8 *)operator_new(0x28,&local_190);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[1] = param_1;
        *puVar8 = &DAT_143f3ed00;
        puVar8[2] = FUN_140e0e000;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar8[4] = uVar6;
        *puVar8 = &PTR_GetPoolName_143f3ed48;
      }
      local_160 = &PTR_FUN_143fc0fa8;
      local_158 = &PTR_FUN_143fc0f88;
      FString::FString(local_150,local_f8);
      FString::FString(local_140,local_e8);
      FString::FString(local_130,local_d8);
      local_120 = (undefined8 *)0x0;
      local_118 = (int)local_c0;
      if (local_118 == 0) {
        local_114 = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_120,local_c0 & 0xffffffff,0);
        puVar8 = local_120;
        do {
          *puVar8 = 0;
          iVar5 = *(int *)(local_c8 + 1);
          pvVar3 = (void *)*local_c8;
          *(int *)(puVar8 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,iVar5,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar3,(longlong)iVar5 * 2);
          }
          puVar8 = puVar8 + 2;
          local_c8 = local_c8 + 2;
          uVar10 = (int)local_c0 - 1;
          local_c0 = (ulonglong)uVar10;
        } while (uVar10 != 0);
      }
      uVar6 = FUN_142b46360(local_170,local_a8);
      iVar5 = FUN_142ad4340(local_180,uVar6,&local_160,&local_190,&local_b8);
      if (local_a8[0] != 0) {
        FMemory::Free();
      }
      if (iVar5 < 1) {
        local_1b0 = (void *)0x0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_198 = 0;
        local_1b8[0] = 0;
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_48,L"Failed to retrieve SHiFT user list.",L"Overlay",
                           L"UsersSearchError");
        ppvVar9 = (void **)FText::ToString(uVar6);
        if (&local_1b0 != ppvVar9) {
          iVar5 = *(int *)(ppvVar9 + 1);
          pvVar3 = *ppvVar9;
          local_1a8 = CONCAT44(local_1a8._4_4_,iVar5);
          if ((iVar5 == 0) && (local_1a8._4_4_ == 0)) {
            local_1a8 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1b0,iVar5);
            _guard_xfg_dispatch_icall_nop(local_1b0,pvVar3,(longlong)iVar5 * 2);
          }
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)local_40 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
        FUN_140ddb840(uVar6,"Search_SHiFT_Friends_Call_RESPONSE",local_1b8);
        TArray<FShapeDataPaintSpline,TSizedDefaultAllocator<32>_>::
        ~TArray<FShapeDataPaintSpline,TSizedDefaultAllocator<32>_>(&local_1a0);
        if (local_1b0 != (void *)0x0) {
          FMemory::Free();
        }
      }
      FUN_142b0f5d0(local_108);
      FUN_142b0f600(local_98);
    }
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_178 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar2 = (int *)((longlong)local_178 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
  }
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_168 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar2 = (int *)((longlong)local_168 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_168 + 8))(local_168,1);
      }
    }
  }
  return;
}



// FUNCTION 140dfd7f0 FUN_140dfd7f0 body=1052 status=ok
// SIG undefined FUN_140dfd7f0(void)

void FUN_140dfd7f0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_d8;
  int local_d0;
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  int local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  longlong *local_60;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  uVar9 = 0;
  Online::GetIdentityInterface(&local_88,0);
  if (local_88 != (longlong *)0x0) {
    local_d8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_d0 = 3;
    local_d8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)IDelegateInstance::vftable;
      *plVar4 = (longlong)&DAT_143f3ed00;
      plVar4[2] = (longlong)FUN_140dfe510;
      plVar4[1] = param_1;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar6 = (undefined8 *)(**(code **)(*local_88 + 0x18))(local_88,local_res18,&local_d8);
    *(undefined8 *)(param_1 + 0x68) = *puVar6;
    if (local_d0 != 0) {
      if (local_d8 == (longlong *)0x0) goto LAB_140dfd8e6;
      (**(code **)(*local_d8 + 0x28))(local_d8,0);
      if (local_d8 != (longlong *)0x0) {
        local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
      }
      local_d0 = 0;
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
  }
LAB_140dfd8e6:
  FUN_1404cf890(&local_98,0);
  if (local_98 != (longlong *)0x0) {
    local_c8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_c0 = 3;
    local_c8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&DAT_143f3ed00;
      plVar4[1] = param_1;
      plVar4[2] = (longlong)FUN_140dfe930;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar6 = (undefined8 *)(**(code **)(*local_98 + 0x80))(local_98,local_res20,&local_c8);
    *(undefined8 *)(param_1 + 0x70) = *puVar6;
    if (local_c0 != 0) {
      if (local_c8 == (longlong *)0x0) goto LAB_140dfd9b5;
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
LAB_140dfd9b5:
  puVar6 = (undefined8 *)FName::FName(local_78,L"SPARK",1);
  FUN_1404cf890(&local_a8,*puVar6);
  if (local_a8 != (longlong *)0x0) {
    local_b8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_b0 = 3;
    local_b8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&DAT_143f3ed00;
      plVar4[1] = param_1;
      plVar4[2] = (longlong)FUN_140e008b0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar6 = (undefined8 *)(**(code **)(*local_a8 + 0x80))(local_a8,local_70,&local_b8);
    *(undefined8 *)(param_1 + 0x78) = *puVar6;
    if (local_b0 != 0) {
      if (local_b8 == (longlong *)0x0) goto LAB_140dfda88;
      (**(code **)(*local_b8 + 0x28))(local_b8,0);
      if (local_b8 != (longlong *)0x0) {
        local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
      }
      local_b0 = 0;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
  }
LAB_140dfda88:
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x48);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x48);
    plVar4 = (longlong *)(lVar5 + 0xbe0);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_60 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = param_1;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)FUN_140dfbf40;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
      puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_68);
      iVar2 = *(int *)(lVar5 + 0xbe8);
      uVar9 = *puVar6;
      *(int *)(lVar5 + 0xbe8) = iVar2 + 1;
      if (*(int *)(lVar5 + 0xbec) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar4);
      *puVar6 = plVar7;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 0x80) = uVar9;
  }
  plVar4 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_a0 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_90 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  plVar4 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_80 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}


