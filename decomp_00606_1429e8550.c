// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1429e8550 execServerCheckClientPossessionReliable body=78 status=ok
// SIG undefined execServerCheckClientPossessionReliable(void)

void APlayerController::execServerCheckClientPossessionReliable(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x908))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerCheckClientPossessionReliable_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001429e8597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x910))(param_1);
  return;
}



// FUNCTION 1429e85a0 FUN_1429e85a0 body=78 status=ok
// SIG undefined FUN_1429e85a0(void)

void FUN_1429e85a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x880))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerDestroy_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001429e85e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x888))(param_1);
  return;
}



// FUNCTION 1429e85f0 FUN_1429e85f0 body=332 status=ok
// SIG undefined FUN_1429e85f0(void)

void FUN_1429e85f0(longlong *param_1,longlong param_2)

{
  void *pvVar1;
  char cVar2;
  longlong lVar3;
  undefined4 local_38 [2];
  void *local_30;
  ulonglong local_28;
  undefined4 local_20 [2];
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_30 = (void *)0x0;
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  pvVar1 = local_30;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar3 = (longlong)(int)local_28;
  local_20[0] = local_38[0];
  local_10 = (int)local_28;
  if ((int)local_28 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_28 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_18,pvVar1,lVar3 * 2);
  }
  cVar2 = (**(code **)(*param_1 + 0x868))(param_1,local_20);
  pvVar1 = local_30;
  if (cVar2 == '\0') {
    RPC_ValidateFailed(L"ServerGbxConsoleCommand_Validate");
  }
  else {
    lVar3 = (longlong)(int)local_28;
    local_20[0] = local_38[0];
    local_18 = (void *)0x0;
    local_10 = (int)local_28;
    if ((int)local_28 == 0) {
      local_c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_28 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_18,pvVar1,lVar3 * 2);
    }
    (**(code **)(*param_1 + 0x870))(param_1,local_20);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429e8740 FUN_1429e8740 body=376 status=ok
// SIG undefined FUN_1429e8740(void)

void FUN_1429e8740(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined **local_88;
  undefined8 local_80;
  longlong *plStack_78;
  longlong local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_88 = &PTR_FUN_143f740c8;
  local_70 = 0;
  local_80 = 0;
  plStack_78 = (longlong *)0x0;
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_58 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_50 = plStack_78;
  if (plStack_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_78 + 1) = (int)plStack_78[1] + 1;
    UNLOCK();
  }
  local_60 = &PTR_FUN_143f740c8;
  local_48 = 0;
  local_40 = 0;
  cVar6 = (**(code **)(*param_1 + 0xad8))(param_1,&local_60);
  if (cVar6 == '\0') {
    RPC_ValidateFailed(L"ServerMutePlayer_Validate");
  }
  else {
    local_30 = local_80;
    local_28 = plStack_78;
    if (plStack_78 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_78 + 1) = (int)plStack_78[1] + 1;
      UNLOCK();
    }
    local_38 = &PTR_FUN_143f740c8;
    local_20 = 0;
    local_18 = 0;
    (**(code **)(*param_1 + 0xae0))(param_1,&local_38);
  }
  local_88 = &PTR_FUN_143f740c8;
  if (local_70 != 0) {
    FMemory::Free();
  }
  plVar5 = plStack_78;
  local_88 = &PTR_FUN_143f73d18;
  if (plStack_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_78 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_78)(plStack_78);
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



// FUNCTION 1429e88c0 execServerNotifyLoadedWorld body=173 status=ok
// SIG undefined execServerNotifyLoadedWorld(void)

void APlayerController::execServerNotifyLoadedWorld(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = ServerCamera_Validate(param_1,local_res10);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerNotifyLoadedWorld_Validate");
    return;
  }
  FUN_1427156e0(param_1,local_res10);
  return;
}



// FUNCTION 1429e8970 FUN_1429e8970 body=78 status=ok
// SIG undefined FUN_1429e8970(void)

void FUN_1429e8970(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x948))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerPause_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001429e89b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x950))(param_1);
  return;
}



// FUNCTION 1429e89c0 execServerRestartPlayer body=78 status=ok
// SIG undefined execServerRestartPlayer(void)

void APlayerController::execServerRestartPlayer(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x938))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerRestartPlayer_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001429e8a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x940))(param_1);
  return;
}



// FUNCTION 1429e8a10 FUN_1429e8a10 body=299 status=ok
// SIG undefined FUN_1429e8a10(void)

void FUN_1429e8a10(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28 = local_48;
  local_18 = local_38;
  local_20 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_30;
  cVar1 = (**(code **)(*param_1 + 0x928))(param_1,&local_18,&local_28);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetSpectatorLocation_Validate");
    return;
  }
  local_10 = local_40;
  local_20 = local_30;
  local_18 = local_48;
  local_28 = local_38;
  (**(code **)(*param_1 + 0x930))(param_1,&local_28,&local_18);
  return;
}



// FUNCTION 1429e8b40 FUN_1429e8b40 body=182 status=ok
// SIG undefined FUN_1429e8b40(void)

void FUN_1429e8b40(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar2 = local_res8[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xb18))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetSpectatorWaiting_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xb20))(param_1,bVar2);
  }
  return;
}



// FUNCTION 1429e8c00 execServerShortTimeout body=78 status=ok
// SIG undefined execServerShortTimeout(void)

void APlayerController::execServerShortTimeout(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x8f8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerShortTimeout_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001429e8c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x900))(param_1);
  return;
}



// FUNCTION 1429e8c50 execServerToggleAILogging body=78 status=ok
// SIG undefined execServerToggleAILogging(void)

void APlayerController::execServerToggleAILogging(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x890))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerToggleAILogging_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001429e8c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x898))(param_1);
  return;
}



// FUNCTION 1429e8ca0 FUN_1429e8ca0 body=376 status=ok
// SIG undefined FUN_1429e8ca0(void)

void FUN_1429e8ca0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined **local_88;
  undefined8 local_80;
  longlong *plStack_78;
  longlong local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_88 = &PTR_FUN_143f740c8;
  local_70 = 0;
  local_80 = 0;
  plStack_78 = (longlong *)0x0;
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_58 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_50 = plStack_78;
  if (plStack_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_78 + 1) = (int)plStack_78[1] + 1;
    UNLOCK();
  }
  local_60 = &PTR_FUN_143f740c8;
  local_48 = 0;
  local_40 = 0;
  cVar6 = (**(code **)(*param_1 + 0xac8))(param_1,&local_60);
  if (cVar6 == '\0') {
    RPC_ValidateFailed(L"ServerUnmutePlayer_Validate");
  }
  else {
    local_30 = local_80;
    local_28 = plStack_78;
    if (plStack_78 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_78 + 1) = (int)plStack_78[1] + 1;
      UNLOCK();
    }
    local_38 = &PTR_FUN_143f740c8;
    local_20 = 0;
    local_18 = 0;
    (**(code **)(*param_1 + 0xad0))(param_1,&local_38);
  }
  local_88 = &PTR_FUN_143f740c8;
  if (local_70 != 0) {
    FMemory::Free();
  }
  plVar5 = plStack_78;
  local_88 = &PTR_FUN_143f73d18;
  if (plStack_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_78 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_78)(plStack_78);
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



// FUNCTION 1429e8e20 FUN_1429e8e20 body=358 status=ok
// SIG undefined FUN_1429e8e20(void)

void FUN_1429e8e20(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  cVar1 = (**(code **)(*param_1 + 0x8e8))(param_1,&local_18,local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerUpdateCamera_Validate");
    return;
  }
  local_10 = local_20;
  local_18 = local_28;
  (**(code **)(*param_1 + 0x8f0))(param_1,&local_18,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 1429e8f90 FUN_1429e8f90 body=305 status=ok
// SIG undefined FUN_1429e8f90(void)

void FUN_1429e8f90(undefined8 param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  int local_res10 [4];
  undefined8 local_res20;
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = FUN_142716650(param_1,local_28[0],local_res20,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerUpdateLevelVisibility_Validate");
    return;
  }
  FUN_142716540(param_1,local_28[0],local_res20,bVar2);
  return;
}



// FUNCTION 1429e90d0 FUN_1429e90d0 body=247 status=ok
// SIG undefined FUN_1429e90d0(void)

void FUN_1429e90d0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = FUN_1427168f0(param_1,local_18,local_res10);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerUpdateMultipleLevelsVisibility_Validate");
  }
  else {
    FUN_142716780(param_1,local_18,local_res10);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429e91d0 execServerVerifyViewTarget body=78 status=ok
// SIG undefined execServerVerifyViewTarget(void)

void APlayerController::execServerVerifyViewTarget(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x8d8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerVerifyViewTarget_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001429e9217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8e0))(param_1);
  return;
}



// FUNCTION 1429e9220 execServerViewNextPlayer body=78 status=ok
// SIG undefined execServerViewNextPlayer(void)

void APlayerController::execServerViewNextPlayer(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x8c8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerViewNextPlayer_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001429e9267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8d0))(param_1);
  return;
}



// FUNCTION 1429e9270 FUN_1429e9270 body=78 status=ok
// SIG undefined FUN_1429e9270(void)

void FUN_1429e9270(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x8b8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerViewPrevPlayer_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001429e92b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8c0))(param_1);
  return;
}



// FUNCTION 1429e92c0 FUN_1429e92c0 body=290 status=ok
// SIG undefined FUN_1429e92c0(void)

void FUN_1429e92c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_1c = local_1c & 0xfffffffe;
  local_28 = 0;
  local_20 = 0x40000000;
  local_24 = 1;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  local_10 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_14 = local_24;
  local_c = local_c ^ (local_c ^ local_1c) & 1;
  cVar1 = (**(code **)(*param_1 + 0x8a8))(param_1,&local_18);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerViewSelf_Validate");
    return;
  }
  local_14 = local_24;
  local_18 = local_28;
  local_c = local_c ^ (local_c ^ local_1c) & 1;
  local_10 = local_20;
  (**(code **)(*param_1 + 0x8b0))(param_1,&local_18);
  return;
}



// FUNCTION 1429e93f0 FUN_1429e93f0 body=206 status=ok
// SIG undefined FUN_1429e93f0(void)

void FUN_1429e93f0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_142716dc0(param_1,local_res10,&local_18);
  return;
}



// FUNCTION 1429e94c0 execInitializeSocketFromLocation body=287 status=ok
// SIG undefined execInitializeSocketFromLocation(void)

void USkeletalMeshSocket::execInitializeSocketFromLocation(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28 = local_48;
  local_18 = local_38;
  local_20 = local_40;
  local_10 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142716e10(param_1,local_res10,&local_18,&local_28);
  return;
}



// FUNCTION 1429e95e0 FUN_1429e95e0 body=446 status=ok
// SIG undefined FUN_1429e95e0(void)

void FUN_1429e95e0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [4];
  int local_res20 [2];
  int local_48;
  int local_44 [3];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar1 = local_res8[0] != 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  bVar4 = local_48 != 0;
  local_44[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_44);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xba8))(param_1,bVar1,bVar2,bVar3,bVar4,local_44[0] != 0);
  return;
}



// FUNCTION 1429e97a0 FUN_1429e97a0 body=112 status=ok
// SIG undefined FUN_1429e97a0(void)

void FUN_1429e97a0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142717320(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429e9810 FUN_1429e9810 body=134 status=ok
// SIG undefined FUN_1429e9810(void)

void FUN_1429e9810(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xc78))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 1429e98a0 execSetHapticsByValue body=255 status=ok
// SIG undefined execSetHapticsByValue(void)

void APlayerController::execSetHapticsByValue(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142717690(param_1,local_18[0],local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1429e99a0 FUN_1429e99a0 body=274 status=ok
// SIG undefined FUN_1429e99a0(void)

void FUN_1429e99a0(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_18 = local_28;
  uStack_14 = uStack_24;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x860))(param_1,local_res10[0],&local_18,local_res8[0] != 0);
  return;
}



// FUNCTION 1429e9ac0 FUN_1429e9ac0 body=192 status=ok
// SIG undefined FUN_1429e9ac0(void)

void FUN_1429e9ac0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142717bc0(param_1,local_res10[0],local_res20);
  return;
}



// FUNCTION 1429e9b80 FUN_1429e9b80 body=188 status=ok
// SIG undefined FUN_1429e9b80(void)

void FUN_1429e9b80(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142717c40(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1429e9c40 FUN_1429e9c40 body=152 status=ok
// SIG undefined FUN_1429e9c40(void)

void FUN_1429e9c40(longlong *param_1,longlong param_2)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xb78))(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429e9ce0 FUN_1429e9ce0 body=130 status=ok
// SIG undefined FUN_1429e9ce0(void)

void FUN_1429e9ce0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142718310(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1429e9d70 FUN_1429e9d70 body=383 status=ok
// SIG undefined FUN_1429e9d70(void)

void FUN_1429e9d70(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  undefined8 local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xcd0))
            (param_1,local_20,local_28[0],local_res8[0],local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 1429e9ef0 FUN_1429e9ef0 body=134 status=ok
// SIG undefined FUN_1429e9ef0(void)

void FUN_1429e9ef0(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xcb8))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 1429e9f80 FUN_1429e9f80 body=456 status=ok
// SIG undefined FUN_1429e9f80(void)

void FUN_1429e9f80(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int local_res8 [2];
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_54 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_54);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar1 = local_res8[0] != 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_38 = local_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  (**(code **)(*param_1 + 0x850))
            (param_1,local_54,local_58,local_res20[0],&local_38,bVar1,local_res10[0] != 0);
  return;
}



// FUNCTION 1429ea150 FUN_1429ea150 body=122 status=ok
// SIG undefined FUN_1429ea150(void)

void FUN_1429ea150(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xbd8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1429ea1d0 execSetIsThrowing body=134 status=ok
// SIG undefined execSetIsThrowing(void)

void AUGWeapon_Hook::execSetIsThrowing(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x880))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 1429ea260 FUN_1429ea260 body=134 status=ok
// SIG undefined FUN_1429ea260(void)

void FUN_1429ea260(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x848))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 1429ea2f0 execSetSkeletalMesh body=198 status=ok
// SIG undefined execSetSkeletalMesh(void)

void USkinnedMeshComponent::execSetSkeletalMesh(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x870))(param_1,local_res10,local_res8[0] != 0);
  return;
}



// FUNCTION 1429ea3c0 FUN_1429ea3c0 body=198 status=ok
// SIG undefined FUN_1429ea3c0(void)

void FUN_1429ea3c0(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x840))(param_1,local_res10,local_res8[0] != 0);
  return;
}



// FUNCTION 1429ea490 execSetPhysicsAsset body=198 status=ok
// SIG undefined execSetPhysicsAsset(void)

void USkinnedMeshComponent::execSetPhysicsAsset(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x878))(param_1,local_res10,local_res8[0] != 0);
  return;
}



// FUNCTION 1429ea560 FUN_1429ea560 body=198 status=ok
// SIG undefined FUN_1429ea560(void)

void FUN_1429ea560(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x838))(param_1,local_res10,local_res8[0] != 0);
  return;
}



// FUNCTION 1429ea630 execStopHapticEffect body=118 status=ok
// SIG undefined execStopHapticEffect(void)

void APlayerController::execStopHapticEffect(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  StopHapticEffect(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429ea6b0 FUN_1429ea6b0 body=152 status=ok
// SIG undefined FUN_1429ea6b0(void)

void FUN_1429ea6b0(longlong *param_1,longlong param_2)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xb80))(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429ea750 FUN_1429ea750 body=134 status=ok
// SIG undefined FUN_1429ea750(void)

void FUN_1429ea750(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xc08))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 1429ea7e0 FUN_1429ea7e0 body=247 status=ok
// SIG undefined FUN_1429ea7e0(void)

void FUN_1429ea7e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_38 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_20 = local_38;
  local_18 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_14271b310(param_1,&local_20);
  plVar5 = plStack_28;
  *param_3 = uVar6;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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



// FUNCTION 1429ea8e0 FUN_1429ea8e0 body=247 status=ok
// SIG undefined FUN_1429ea8e0(void)

void FUN_1429ea8e0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_38 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_20 = local_38;
  local_18 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_14271b3d0(param_1,&local_20);
  plVar5 = plStack_28;
  *param_3 = uVar6;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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



// FUNCTION 1429ea9e0 FUN_1429ea9e0 body=47 status=ok
// SIG undefined FUN_1429ea9e0(void)

longlong FUN_1429ea9e0(void)

{
  if (DAT_146b26360 == 0) {
    FUN_141786440(&DAT_146b26360,&PTR_GetPrivateStaticClass_145308fb0);
  }
  return DAT_146b26360;
}



// FUNCTION 1429eaa10 FUN_1429eaa10 body=47 status=ok
// SIG undefined FUN_1429eaa10(void)

longlong FUN_1429eaa10(void)

{
  if (DAT_146b26358 == 0) {
    FUN_141786a30(&DAT_146b26358,&PTR_FUN_146631af0);
  }
  return DAT_146b26358;
}



// FUNCTION 1429eaa50 FUN_1429eaa50 body=151 status=ok
// SIG undefined FUN_1429eaa50(void)

longlong FUN_1429eaa50(void)

{
  if (DAT_146b26398 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PostProcessSettingsTemplate",&DAT_146b26398,FUN_140447710,
                  0x630,0x10000000,0,L"Engine",&LAB_1429ebd90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b26398;
}



// FUNCTION 1429eaaf0 FUN_1429eaaf0 body=53 status=ok
// SIG undefined FUN_1429eaaf0(void)

void FUN_1429eaaf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x610;
    *puVar1 = &PTR_FUN_14530d0b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1429eab30 FUN_1429eab30 body=53 status=ok
// SIG undefined FUN_1429eab30(void)

void FUN_1429eab30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x600;
    *puVar1 = &PTR_FUN_14530d1d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1429eab80 FUN_1429eab80 body=47 status=ok
// SIG undefined FUN_1429eab80(void)

longlong FUN_1429eab80(void)

{
  if (DAT_146b26288 == 0) {
    FUN_141786440(&DAT_146b26288,&PTR_GetPrivateStaticClass_145309ca0);
  }
  return DAT_146b26288;
}



// FUNCTION 1429eabb0 FUN_1429eabb0 body=47 status=ok
// SIG undefined FUN_1429eabb0(void)

longlong FUN_1429eabb0(void)

{
  if (DAT_146b26260 == 0) {
    FUN_141786a30(&DAT_146b26260,&PTR_FUN_146630540);
  }
  return DAT_146b26260;
}



// FUNCTION 1429eabe0 FUN_1429eabe0 body=47 status=ok
// SIG undefined FUN_1429eabe0(void)

longlong FUN_1429eabe0(void)

{
  if (DAT_146b26268 == 0) {
    FUN_141786a30(&DAT_146b26268,&PTR_FUN_146630580);
  }
  return DAT_146b26268;
}



// FUNCTION 1429eac10 FUN_1429eac10 body=47 status=ok
// SIG undefined FUN_1429eac10(void)

longlong FUN_1429eac10(void)

{
  if (DAT_146b26270 == 0) {
    FUN_141786a30(&DAT_146b26270,&PTR_FUN_146630630);
  }
  return DAT_146b26270;
}



// FUNCTION 1429eac40 FUN_1429eac40 body=47 status=ok
// SIG undefined FUN_1429eac40(void)

longlong FUN_1429eac40(void)

{
  if (DAT_146b26278 == 0) {
    FUN_141786a30(&DAT_146b26278,&PTR_FUN_146630670);
  }
  return DAT_146b26278;
}



// FUNCTION 1429eac70 FUN_1429eac70 body=47 status=ok
// SIG undefined FUN_1429eac70(void)

longlong FUN_1429eac70(void)

{
  if (DAT_146b26280 == 0) {
    FUN_141786a30(&DAT_146b26280,&PTR_FUN_146630730);
  }
  return DAT_146b26280;
}



// FUNCTION 1429eacb0 FUN_1429eacb0 body=47 status=ok
// SIG undefined FUN_1429eacb0(void)

longlong FUN_1429eacb0(void)

{
  if (DAT_146b26198 == 0) {
    FUN_141786440(&DAT_146b26198,&PTR_LAB_14530a580);
  }
  return DAT_146b26198;
}



// FUNCTION 1429eace0 FUN_1429eace0 body=47 status=ok
// SIG undefined FUN_1429eace0(void)

longlong FUN_1429eace0(void)

{
  if (DAT_146b26170 == 0) {
    FUN_141786a30(&DAT_146b26170,&PTR_FUN_14662f950);
  }
  return DAT_146b26170;
}



// FUNCTION 1429ead10 FUN_1429ead10 body=47 status=ok
// SIG undefined FUN_1429ead10(void)

longlong FUN_1429ead10(void)

{
  if (DAT_146b26178 == 0) {
    FUN_141786a30(&DAT_146b26178,&PTR_FUN_14662f990);
  }
  return DAT_146b26178;
}



// FUNCTION 1429ead40 FUN_1429ead40 body=47 status=ok
// SIG undefined FUN_1429ead40(void)

longlong FUN_1429ead40(void)

{
  if (DAT_146b26180 == 0) {
    FUN_141786a30(&DAT_146b26180,&PTR_FUN_14662fa10);
  }
  return DAT_146b26180;
}



// FUNCTION 1429ead70 FUN_1429ead70 body=47 status=ok
// SIG undefined FUN_1429ead70(void)

longlong FUN_1429ead70(void)

{
  if (DAT_146b26188 == 0) {
    FUN_141786a30(&DAT_146b26188,&PTR_FUN_14662fa50);
  }
  return DAT_146b26188;
}



// FUNCTION 1429eada0 FUN_1429eada0 body=47 status=ok
// SIG undefined FUN_1429eada0(void)

longlong FUN_1429eada0(void)

{
  if (DAT_146b26190 == 0) {
    FUN_141786a30(&DAT_146b26190,&PTR_FUN_14662fa90);
  }
  return DAT_146b26190;
}



// FUNCTION 1429eadd0 FUN_1429eadd0 body=53 status=ok
// SIG undefined FUN_1429eadd0(void)

void FUN_1429eadd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14530c278;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429eae10 FUN_1429eae10 body=53 status=ok
// SIG undefined FUN_1429eae10(void)

void FUN_1429eae10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_14530c390;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429eae50 FUN_1429eae50 body=53 status=ok
// SIG undefined FUN_1429eae50(void)

void FUN_1429eae50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14530c4a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429eae90 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UPolys::StaticClass(void)

{
  if (DAT_146b262a0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"Polys",&DAT_146b262a0,FUN_140447710,0x38,0x10000000,0,
                  L"Engine",FUN_1429ebcf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AddReferencedObjects,&LAB_140447700,
                  &LAB_140447700,0);
  }
  return DAT_146b262a0;
}



// FUNCTION 1429eaf30 FUN_1429eaf30 body=53 status=ok
// SIG undefined FUN_1429eaf30(void)

void FUN_1429eaf30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_14530c5c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1429eaf70 FUN_1429eaf70 body=53 status=ok
// SIG undefined FUN_1429eaf70(void)

void FUN_1429eaf70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_14530c6d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429eafc0 FUN_1429eafc0 body=162 status=ok
// SIG undefined FUN_1429eafc0(void)

longlong FUN_1429eafc0(void)

{
  if (DAT_146b26300 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PoseableMeshComponent",&DAT_146b26300,FUN_1429ed720,0xb70,
                  0x10000000,0,L"Engine",&LAB_1429ebd50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14062f840,&LAB_140447700,0);
  }
  return DAT_146b26300;
}



// FUNCTION 1429eb070 FUN_1429eb070 body=47 status=ok
// SIG undefined FUN_1429eb070(void)

longlong FUN_1429eb070(void)

{
  if (DAT_146b262f8 == 0) {
    FUN_141786440(&DAT_146b262f8,&PTR_FUN_14530ae50);
  }
  return DAT_146b262f8;
}



// FUNCTION 1429eb0a0 FUN_1429eb0a0 body=47 status=ok
// SIG undefined FUN_1429eb0a0(void)

longlong FUN_1429eb0a0(void)

{
  if (DAT_146b262a8 == 0) {
    FUN_141786a30(&DAT_146b262a8,&PTR_FUN_1466309b0);
  }
  return DAT_146b262a8;
}



// FUNCTION 1429eb0d0 FUN_1429eb0d0 body=47 status=ok
// SIG undefined FUN_1429eb0d0(void)

longlong FUN_1429eb0d0(void)

{
  if (DAT_146b262b0 == 0) {
    FUN_141786a30(&DAT_146b262b0,&PTR_FUN_146630a70);
  }
  return DAT_146b262b0;
}



// FUNCTION 1429eb100 FUN_1429eb100 body=47 status=ok
// SIG undefined FUN_1429eb100(void)

longlong FUN_1429eb100(void)

{
  if (DAT_146b262b8 == 0) {
    FUN_141786a30(&DAT_146b262b8,&PTR_FUN_146630ba0);
  }
  return DAT_146b262b8;
}



// FUNCTION 1429eb130 FUN_1429eb130 body=47 status=ok
// SIG undefined FUN_1429eb130(void)

longlong FUN_1429eb130(void)

{
  if (DAT_146b262c0 == 0) {
    FUN_141786a30(&DAT_146b262c0,&PTR_FUN_146630c60);
  }
  return DAT_146b262c0;
}



// FUNCTION 1429eb160 FUN_1429eb160 body=47 status=ok
// SIG undefined FUN_1429eb160(void)

longlong FUN_1429eb160(void)

{
  if (DAT_146b262c8 == 0) {
    FUN_141786a30(&DAT_146b262c8,&PTR_FUN_146630d90);
  }
  return DAT_146b262c8;
}



// FUNCTION 1429eb190 FUN_1429eb190 body=47 status=ok
// SIG undefined FUN_1429eb190(void)

longlong FUN_1429eb190(void)

{
  if (DAT_146b262d0 == 0) {
    FUN_141786a30(&DAT_146b262d0,&PTR_FUN_146630dd0);
  }
  return DAT_146b262d0;
}



// FUNCTION 1429eb1c0 FUN_1429eb1c0 body=47 status=ok
// SIG undefined FUN_1429eb1c0(void)

longlong FUN_1429eb1c0(void)

{
  if (DAT_146b262d8 == 0) {
    FUN_141786a30(&DAT_146b262d8,&PTR_FUN_146630f00);
  }
  return DAT_146b262d8;
}



// FUNCTION 1429eb1f0 FUN_1429eb1f0 body=47 status=ok
// SIG undefined FUN_1429eb1f0(void)

longlong FUN_1429eb1f0(void)

{
  if (DAT_146b262e0 == 0) {
    FUN_141786a30(&DAT_146b262e0,&PTR_FUN_146630fc0);
  }
  return DAT_146b262e0;
}



// FUNCTION 1429eb220 FUN_1429eb220 body=47 status=ok
// SIG undefined FUN_1429eb220(void)

longlong FUN_1429eb220(void)

{
  if (DAT_146b262e8 == 0) {
    FUN_141786a30(&DAT_146b262e8,&PTR_FUN_1466310f0);
  }
  return DAT_146b262e8;
}



// FUNCTION 1429eb250 FUN_1429eb250 body=47 status=ok
// SIG undefined FUN_1429eb250(void)

longlong FUN_1429eb250(void)

{
  if (DAT_146b262f0 == 0) {
    FUN_141786a30(&DAT_146b262f0,&PTR_FUN_1466311b0);
  }
  return DAT_146b262f0;
}



// FUNCTION 1429eb290 FUN_1429eb290 body=53 status=ok
// SIG undefined FUN_1429eb290(void)

void FUN_1429eb290(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_14530c840;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429eb2d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGRichTextBlock::GetPrivateStaticClass(void)

{
  if (DAT_146b261c0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PlayerStart",&DAT_146b261c0,FUN_140447710,0x488,0x10000000,0,
                  L"Engine",&LAB_1429ebc20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1429c1650
                  ,&LAB_140447700,0);
  }
  return DAT_146b261c0;
}



// FUNCTION 1429eb380 FUN_1429eb380 body=47 status=ok
// SIG undefined FUN_1429eb380(void)

longlong FUN_1429eb380(void)

{
  if (DAT_146b261b8 == 0) {
    FUN_141786440(&DAT_146b261b8,&PTR_GetPrivateStaticClass_14530abe0);
  }
  return DAT_146b261b8;
}



// FUNCTION 1429eb3c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGRichTextBlock::GetPrivateStaticClass(void)

{
  if (DAT_146b261d0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PlayerStartPIE",&DAT_146b261d0,FUN_140447710,0x488,0x10000000,
                  0,L"Engine",&LAB_1429ebc40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b261d0;
}



// FUNCTION 1429eb490 FUN_1429eb490 body=47 status=ok
// SIG undefined FUN_1429eb490(void)

longlong FUN_1429eb490(void)

{
  if (DAT_146b26220 == 0) {
    FUN_141786440(&DAT_146b26220,&PTR_GetPrivateStaticClass_14530b450);
  }
  return DAT_146b26220;
}



// FUNCTION 1429eb4c0 FUN_1429eb4c0 body=47 status=ok
// SIG undefined FUN_1429eb4c0(void)

longlong FUN_1429eb4c0(void)

{
  if (DAT_146b261d8 == 0) {
    FUN_141786a30(&DAT_146b261d8,&PTR_FUN_14662fcd0);
  }
  return DAT_146b261d8;
}



// FUNCTION 1429eb4f0 FUN_1429eb4f0 body=47 status=ok
// SIG undefined FUN_1429eb4f0(void)

longlong FUN_1429eb4f0(void)

{
  if (DAT_146b261e0 == 0) {
    FUN_141786a30(&DAT_146b261e0,&PTR_FUN_14662fd10);
  }
  return DAT_146b261e0;
}



// FUNCTION 1429eb520 FUN_1429eb520 body=47 status=ok
// SIG undefined FUN_1429eb520(void)

longlong FUN_1429eb520(void)

{
  if (DAT_146b261e8 == 0) {
    FUN_141786a30(&DAT_146b261e8,&PTR_FUN_14662fd50);
  }
  return DAT_146b261e8;
}



// FUNCTION 1429eb550 FUN_1429eb550 body=47 status=ok
// SIG undefined FUN_1429eb550(void)

longlong FUN_1429eb550(void)

{
  if (DAT_146b261f0 == 0) {
    FUN_141786a30(&DAT_146b261f0,&PTR_FUN_14662fd90);
  }
  return DAT_146b261f0;
}



// FUNCTION 1429eb580 FUN_1429eb580 body=47 status=ok
// SIG undefined FUN_1429eb580(void)

longlong FUN_1429eb580(void)

{
  if (DAT_146b261f8 == 0) {
    FUN_141786a30(&DAT_146b261f8,&PTR_FUN_14662fdd0);
  }
  return DAT_146b261f8;
}



// FUNCTION 1429eb5b0 FUN_1429eb5b0 body=47 status=ok
// SIG undefined FUN_1429eb5b0(void)

longlong FUN_1429eb5b0(void)

{
  if (DAT_146b26200 == 0) {
    FUN_141786a30(&DAT_146b26200,&PTR_FUN_14662fe10);
  }
  return DAT_146b26200;
}



// FUNCTION 1429eb5e0 FUN_1429eb5e0 body=47 status=ok
// SIG undefined FUN_1429eb5e0(void)

longlong FUN_1429eb5e0(void)

{
  if (DAT_146b26208 == 0) {
    FUN_141786a30(&DAT_146b26208,&PTR_FUN_14662fe50);
  }
  return DAT_146b26208;
}



// FUNCTION 1429eb610 FUN_1429eb610 body=47 status=ok
// SIG undefined FUN_1429eb610(void)

longlong FUN_1429eb610(void)

{
  if (DAT_146b26210 == 0) {
    FUN_141786a30(&DAT_146b26210,&PTR_FUN_14662fed0);
  }
  return DAT_146b26210;
}



// FUNCTION 1429eb640 FUN_1429eb640 body=47 status=ok
// SIG undefined FUN_1429eb640(void)

longlong FUN_1429eb640(void)

{
  if (DAT_146b26218 == 0) {
    FUN_141786a30(&DAT_146b26218,&PTR_FUN_14662ff50);
  }
  return DAT_146b26218;
}



// FUNCTION 1429eb680 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPoseAsset::GetPrivateStaticClass(void)

{
  if (DAT_146b26330 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PoseAsset",&DAT_146b26330,FUN_140447710,0x120,0x10000000,0,
                  L"Engine",&LAB_1429ebd30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimationAsset::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b26330;
}



// FUNCTION 1429eb730 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPluginCommandlet::StaticClass(void)

{
  if (DAT_146b26238 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PluginCommandlet",&DAT_146b26238,FUN_140447710,0xa0,0x10000008
                  ,0,L"Engine",&LAB_1429ebcb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14291cef0,&LAB_140447700,0);
  }
  return DAT_146b26238;
}



// FUNCTION 1429eb7f0 FUN_1429eb7f0 body=53 status=ok
// SIG undefined FUN_1429eb7f0(void)

void FUN_1429eb7f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_14530cd60;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429eb830 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ARemnantMiniMapDisplayActor::GetPrivateStaticClass(void)

{
  if (DAT_146b26258 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PointLight",&DAT_146b26258,
                  StaticRegisterNativesARemnantMiniMapDisplayActor,0x470,0x10000000,0,L"Engine",
                  &LAB_1429ebc80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_142925b70,&LAB_140447700,0);
  }
  return DAT_146b26258;
}



// FUNCTION 1429eb8e0 FUN_1429eb8e0 body=47 status=ok
// SIG undefined FUN_1429eb8e0(void)

longlong FUN_1429eb8e0(void)

{
  if (DAT_146b26250 == 0) {
    FUN_141786440(&DAT_146b26250,&PTR_GetPrivateStaticClass_14530bbc0);
  }
  return DAT_146b26250;
}



// FUNCTION 1429eb910 FUN_1429eb910 body=47 status=ok
// SIG undefined FUN_1429eb910(void)

longlong FUN_1429eb910(void)

{
  if (DAT_146b26240 == 0) {
    FUN_141786a30(&DAT_146b26240,&PTR_FUN_1466303b0);
  }
  return DAT_146b26240;
}



// FUNCTION 1429eb940 FUN_1429eb940 body=47 status=ok
// SIG undefined FUN_1429eb940(void)

longlong FUN_1429eb940(void)

{
  if (DAT_146b26248 == 0) {
    FUN_141786a30(&DAT_146b26248,&PTR_FUN_146630450);
  }
  return DAT_146b26248;
}



// FUNCTION 1429eb970 FUN_1429eb970 body=53 status=ok
// SIG undefined FUN_1429eb970(void)

void FUN_1429eb970(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_14530ce78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429eb9d0 FUN_1429eb9d0 body=53 status=ok
// SIG undefined FUN_1429eb9d0(void)

void FUN_1429eb9d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_14530cf90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429eba10 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UPoseWatch::StaticClass(void)

{
  if (DAT_146b26350 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PoseWatch",&DAT_146b26350,FUN_140447710,0x38,0x10000000,0,
                  L"Engine",&LAB_1405b6620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b26350;
}



// FUNCTION 1429ebac0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFGSoundSplineComponent::GetPrivateStaticClass(void)

{
  if (DAT_146b26290 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PointLightComponent",&DAT_146b26290,FUN_1429ed6f0,0x480,
                  0x10000004,0,L"Engine",&LAB_1429ebcd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1429a6600,&LAB_140447700,0);
  }
  return DAT_146b26290;
}



// FUNCTION 1429ebb70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ACineCameraActor::GetPrivateStaticClass(void)

{
  if (DAT_146b26368 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PostProcessComponent",&DAT_146b26368,
                  StaticRegisterNativesACineCameraActor,0x8f0,0x10000000,0,L"Engine",&LAB_1429ebd70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_146b26368;
}



// FUNCTION 1429ebcf0 FUN_1429ebcf0 body=51 status=ok
// SIG undefined FUN_1429ebcf0(void)

void FUN_1429ebcf0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14530ca40;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  return;
}



// FUNCTION 1429ebdb0 ~TArray<FPoly,FDefaultAllocator> body=101 status=ok
// SIG undefined ~TArray<FPoly,FDefaultAllocator>(void)

void TArray<FPoly,FDefaultAllocator>::~TArray<FPoly,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0xf0);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x2b;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1429ebe20 FUN_1429ebe20 body=455 status=ok
// SIG undefined FUN_1429ebe20(void)

longlong * FUN_1429ebe20(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  
  if (param_1 != param_2) {
    plVar4 = (longlong *)*param_1;
    for (iVar6 = (int)param_1[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (plVar4[4] != 0) {
        FMemory::Free();
      }
      if (plVar4[2] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 6;
    }
    iVar6 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,iVar6);
      puVar8 = (undefined8 *)*param_1;
      if (iVar6 != 0) {
        piVar7 = (int *)(lVar2 + 0x28);
        puVar5 = (undefined4 *)((longlong)puVar8 + 0x1c);
        do {
          *puVar8 = 0;
          iVar1 = piVar7[-8];
          pvVar3 = *(void **)(piVar7 + -10);
          puVar5[-5] = iVar1;
          if (iVar1 == 0) {
            puVar5[-4] = 0;
          }
          else {
            TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(puVar8,iVar1,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar3,(longlong)iVar1 * 0x30);
          }
          *(undefined8 *)(puVar5 + -3) = 0;
          iVar1 = piVar7[-4];
          pvVar3 = *(void **)(piVar7 + -6);
          puVar5[-1] = iVar1;
          if (iVar1 == 0) {
            *puVar5 = 0;
          }
          else {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar5 + -3,iVar1,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(puVar5 + -3),pvVar3,(longlong)iVar1);
          }
          *(undefined8 *)(puVar5 + 1) = 0;
          iVar1 = *piVar7;
          pvVar3 = *(void **)(piVar7 + -2);
          puVar5[3] = iVar1;
          if (iVar1 == 0) {
            puVar5[4] = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(puVar5 + 1,iVar1,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(puVar5 + 1),pvVar3,(longlong)iVar1 << 2);
          }
          puVar8 = puVar8 + 6;
          puVar5 = puVar5 + 0xc;
          piVar7 = piVar7 + 0xc;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1429ebff0 FUN_1429ebff0 body=520 status=ok
// SIG undefined FUN_1429ebff0(void)

longlong FUN_1429ebff0(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  FUN_140a296b0();
  *(uint *)(param_1 + 0x5f8) =
       *(uint *)(param_1 + 0x5f8) ^ (*(uint *)(param_1 + 0x5f8) ^ *(uint *)(param_2 + 0x5f8)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x5f8) ^ *(uint *)(param_2 + 0x5f8)) & 2 ^ *(uint *)(param_1 + 0x5f8)
  ;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x80000 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x100000 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x200000 ^ uVar1;
  *(uint *)(param_1 + 0x5f8) = uVar1;
  *(uint *)(param_1 + 0x5f8) = (uVar1 ^ *(uint *)(param_2 + 0x5f8)) & 0x400000 ^ uVar1;
  return param_1;
}



// FUNCTION 1429ec200 FUN_1429ec200 body=534 status=ok
// SIG undefined FUN_1429ec200(void)

longlong FUN_1429ec200(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  FUN_140a296b0();
  *(undefined8 *)(param_1 + 0x5f8) = *(undefined8 *)(param_2 + 0x5f8);
  *(uint *)(param_1 + 0x600) =
       *(uint *)(param_1 + 0x600) ^ (*(uint *)(param_1 + 0x600) ^ *(uint *)(param_2 + 0x600)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x600) ^ *(uint *)(param_2 + 0x600)) & 2 ^ *(uint *)(param_1 + 0x600)
  ;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 8 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x80 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x100 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x200 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x400 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x800 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x1000 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x2000 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x4000 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x8000 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x10000 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x20000 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x40000 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x80000 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x100000 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x200000 ^ uVar1;
  *(uint *)(param_1 + 0x600) = uVar1;
  *(uint *)(param_1 + 0x600) = (uVar1 ^ *(uint *)(param_2 + 0x600)) & 0x400000 ^ uVar1;
  return param_1;
}



// FUNCTION 1429ec420 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPolys::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FPoly,FDefaultAllocator>::~TArray<FPoly,FDefaultAllocator>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1429ec460 Construct body=94 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FInputActionKeyMapping>::Construct
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  local_28 = DAT_1469eae28;
  local_20 = DAT_1469eae30;
  local_18 = DAT_1469eae38;
  if (DAT_1469eae38 != 0) {
    LOCK();
    *(int *)(DAT_1469eae38 + 8) = *(int *)(DAT_1469eae38 + 8) + 1;
    UNLOCK();
  }
  FUN_1423e4980(param_2,0,&local_28,0,0,0,0);
  return;
}



// FUNCTION 1429ec4f0 Construct body=87 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FInputAxisKeyMapping>::Construct
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  local_28 = DAT_1469eae28;
  local_20 = DAT_1469eae30;
  local_18 = DAT_1469eae38;
  if (DAT_1469eae38 != 0) {
    LOCK();
    *(int *)(DAT_1469eae38 + 8) = *(int *)(DAT_1469eae38 + 8) + 1;
    UNLOCK();
  }
  FInputAxisKeyMapping::FInputAxisKeyMapping(param_2,0,&local_28,0x3f800000);
  return;
}



// FUNCTION 1429ec5b0 FUN_1429ec5b0 body=92 status=ok
// SIG undefined FUN_1429ec5b0(void)

void FUN_1429ec5b0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x90);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined4 *)((longlong)param_2 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  return;
}



// FUNCTION 1429ec640 FUN_1429ec640 body=38 status=ok
// SIG undefined FUN_1429ec640(void)

void FUN_1429ec640(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x600);
  FUN_142741540(param_2);
  return;
}



// FUNCTION 1429ec670 FUN_1429ec670 body=50 status=ok
// SIG undefined FUN_1429ec670(void)

void FUN_1429ec670(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x610);
  FUN_142741540(param_2);
  *(undefined8 *)((longlong)param_2 + 0x5f8) = 0;
  return;
}



// FUNCTION 1429ec6b0 FUN_1429ec6b0 body=133 status=ok
// SIG undefined FUN_1429ec6b0(void)

undefined8 FUN_1429ec6b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    pbVar2 = (byte *)(param_2 + 8);
    do {
      *(undefined8 *)(pbVar2 + -8) = *(undefined8 *)(pbVar2 + param_3 + -8);
      *pbVar2 = *pbVar2 ^ (pbVar2[param_3] ^ *pbVar2) & 1;
      bVar1 = (*pbVar2 ^ pbVar2[param_3]) & 2 ^ *pbVar2;
      *pbVar2 = bVar1;
      bVar1 = (bVar1 ^ pbVar2[param_3]) & 4 ^ bVar1;
      *pbVar2 = bVar1;
      *pbVar2 = (bVar1 ^ pbVar2[param_3]) & 8 ^ bVar1;
      FKey::operator=(pbVar2 + 8,pbVar2 + param_3 + 8);
      pbVar2 = pbVar2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1429ec740 Copy body=103 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FInputAxisKeyMapping>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10 + param_2);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8 + param_2);
      FKey::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1429ec7b0 FUN_1429ec7b0 body=348 status=ok
// SIG undefined FUN_1429ec7b0(void)

undefined8 FUN_1429ec7b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  void *_Src;
  byte bVar3;
  byte *pbVar4;
  
  if (param_4 != 0) {
    pbVar4 = (byte *)(param_3 + 0x28);
    do {
      FKey::operator=(param_2,pbVar4 + -0x28);
      pbVar1 = (byte *)(param_2 + 0x18);
      if (pbVar1 != pbVar4 + -0x10) {
        iVar2 = *(int *)(pbVar4 + -8);
        _Src = *(void **)(pbVar4 + -0x10);
        *(int *)(param_2 + 0x20) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x24) == 0)) {
          *(undefined4 *)(param_2 + 0x24) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(pbVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)pbVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      *(byte *)(param_2 + 0x28) =
           *(byte *)(param_2 + 0x28) ^ (*pbVar4 ^ *(byte *)(param_2 + 0x28)) & 1;
      bVar3 = (*pbVar4 ^ *(byte *)(param_2 + 0x28)) & 2 ^ *(byte *)(param_2 + 0x28);
      *(byte *)(param_2 + 0x28) = bVar3;
      bVar3 = (*pbVar4 ^ bVar3) & 4 ^ bVar3;
      *(byte *)(param_2 + 0x28) = bVar3;
      bVar3 = (*pbVar4 ^ bVar3) & 8 ^ bVar3;
      *(byte *)(param_2 + 0x28) = bVar3;
      bVar3 = (*pbVar4 ^ bVar3) & 0x10 ^ bVar3;
      *(byte *)(param_2 + 0x28) = bVar3;
      bVar3 = (*pbVar4 ^ bVar3) & 0x20 ^ bVar3;
      *(byte *)(param_2 + 0x28) = bVar3;
      bVar3 = (*pbVar4 ^ bVar3) & 0x40 ^ bVar3;
      *(byte *)(param_2 + 0x28) = bVar3;
      *(byte *)(param_2 + 0x28) = (*pbVar4 ^ bVar3) & 0x7f ^ *pbVar4;
      *(byte *)(param_2 + 0x29) =
           *(byte *)(param_2 + 0x29) ^ (*(byte *)(param_2 + 0x29) ^ pbVar4[1]) & 1;
      pbVar1 = pbVar4 + 1;
      pbVar4 = pbVar4 + 0x30;
      *(byte *)(param_2 + 0x29) =
           (*(byte *)(param_2 + 0x29) ^ *pbVar1) & 2 ^ *(byte *)(param_2 + 0x29);
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x30;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1429ec910 Copy body=134 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPlayerMuteList>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
                (param_2 + -0x20,param_3 + -0x20 + param_2);
      TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
                (param_2 + -0x10,param_3 + -0x10 + param_2);
      TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=
                (param_2,param_3 + param_2);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10 + param_2);
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x14 + param_2);
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1429ec9a0 FUN_1429ec9a0 body=270 status=ok
// SIG undefined FUN_1429ec9a0(void)

undefined8 FUN_1429ec9a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined8 *)(param_3 + 0x10);
    do {
      TArray<FTransform,FDefaultAllocator>::operator=(param_2,puVar4 + -2);
      puVar1 = (undefined8 *)(param_2 + 0x10);
      if (puVar1 != puVar4) {
        iVar2 = *(int *)(puVar4 + 1);
        pvVar3 = (void *)*puVar4;
        *(int *)(param_2 + 0x18) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2);
        }
      }
      puVar1 = (undefined8 *)(param_2 + 0x20);
      if (puVar1 != puVar4 + 2) {
        iVar2 = *(int *)(puVar4 + 3);
        pvVar3 = (void *)puVar4[2];
        *(int *)(param_2 + 0x28) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x2c) == 0)) {
          *(undefined4 *)(param_2 + 0x2c) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 << 2);
        }
      }
      puVar4 = puVar4 + 6;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x30;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1429ecab0 FUN_1429ecab0 body=303 status=ok
// SIG undefined FUN_1429ecab0(void)

undefined8 FUN_1429ecab0(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_4 != 0) {
    piVar4 = (int *)(param_3 + 8);
    do {
      if (param_2 != piVar4 + -2) {
        iVar1 = *piVar4;
        pvVar2 = *(void **)(piVar4 + -2);
        param_2[2] = iVar1;
        if ((iVar1 == 0) && (param_2[3] == 0)) {
          param_2[3] = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
          _guard_xfg_dispatch_icall_nop(*(void **)param_2,pvVar2,(longlong)iVar1 << 4);
        }
      }
      FUN_1429ebe20(param_2 + 4,piVar4 + 2);
      TArray<FName,FDefaultAllocator>::operator=(param_2 + 8,piVar4 + 6);
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      operator=(param_2 + 0xc,piVar4 + 10);
      piVar3 = param_2 + 0x20;
      if (piVar3 != piVar4 + 0x1e) {
        iVar1 = piVar4[0x20];
        pvVar2 = *(void **)(piVar4 + 0x1e);
        param_2[0x22] = iVar1;
        if ((iVar1 == 0) && (param_2[0x23] == 0)) {
          param_2[0x23] = 0;
        }
        else {
          TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(piVar3,iVar1);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar3,pvVar2,(longlong)iVar1 << 5);
        }
      }
      piVar4 = piVar4 + 0x24;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x24;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1429ecbe0 Copy body=131 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPoseSnapshot>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x20);
    do {
      TArray<FTransform,FDefaultAllocator>::operator=
                (puVar1 + -4,param_3 + -0x20 + (longlong)puVar1);
      TArray<FName,FDefaultAllocator>::operator=(puVar1 + -2,param_3 + -0x10 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_3 + 0x10 + (longlong)puVar1);
      puVar1 = puVar1 + 7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1429ecc70 FUN_1429ecc70 body=74 status=ok
// SIG undefined FUN_1429ecc70(void)

undefined1 FUN_1429ecc70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1429ebff0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x600;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1429eccc0 FUN_1429eccc0 body=74 status=ok
// SIG undefined FUN_1429eccc0(void)

undefined1 FUN_1429eccc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1429ec200(param_2 + param_3,param_3);
      param_3 = param_3 + 0x610;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1429ecd10 Destruct body=94 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FKeyBind>::Destruct(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_2 + 0x10);
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



// FUNCTION 1429ecd70 Destruct body=40 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FPlayerMuteList>::Destruct(undefined8 param_1,longlong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_2 + 0x20);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_2 + 0x10);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_2);
  return;
}



// FUNCTION 1429ecdb0 FUN_1429ecdb0 body=54 status=ok
// SIG undefined FUN_1429ecdb0(void)

void FUN_1429ecdb0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x5e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x5d8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1429ecdf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AFGRailroadVehicle::GetPrivateStaticClass(void)

{
  if (DAT_146b26228 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PlayerState",&DAT_146b26228,FUN_1429ed660,0x528,0x10000000,0,
                  L"Engine",&LAB_1429ebc60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407b7f50,&LAB_140447700,0);
  }
  return DAT_146b26228;
}



// FUNCTION 1429ecea0 FUN_1429ecea0 body=162 status=ok
// SIG undefined FUN_1429ecea0(void)

longlong FUN_1429ecea0(void)

{
  if (DAT_146b261a0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PlayerInput",&DAT_146b261a0,FUN_1429ed6c0,0x3c8,0x1000000c,0,
                  L"Input",&LAB_1429ebca0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,thunk_FUN_1429e18b0,0);
  }
  return DAT_146b261a0;
}



// FUNCTION 1429ecf50 Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_CRC(void)

{
  return 0x685dcdcf;
}



// FUNCTION 1429ecf60 Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_CRC(void)

{
  return 0x8462fcf8;
}



// FUNCTION 1429ecf70 Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_CRC(void)

{
  return 0x592900d9;
}



// FUNCTION 1429ecf80 Get_Z_Construct_UScriptStruct_FInputAxisProperties_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FInputAxisProperties_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FInputAxisProperties_CRC(void)

{
  return 0x3318ec6;
}



// FUNCTION 1429ecf90 FUN_1429ecf90 body=6 status=ok
// SIG undefined FUN_1429ecf90(void)

undefined8 FUN_1429ecf90(void)

{
  return 0xc386031;
}



// FUNCTION 1429ecfa0 Get_Z_Construct_UScriptStruct_FPlayerMuteList_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPlayerMuteList_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPlayerMuteList_CRC(void)

{
  return 0xb54234c6;
}



// FUNCTION 1429ecfb0 FUN_1429ecfb0 body=6 status=ok
// SIG undefined FUN_1429ecfb0(void)

undefined8 FUN_1429ecfb0(void)

{
  return 0x10acabc7;
}



// FUNCTION 1429ecfc0 FUN_1429ecfc0 body=6 status=ok
// SIG undefined FUN_1429ecfc0(void)

undefined8 FUN_1429ecfc0(void)

{
  return 0x9a6f8fe6;
}



// FUNCTION 1429ecfd0 Get_Z_Construct_UScriptStruct_FPoseSnapshot_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPoseSnapshot_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPoseSnapshot_CRC(void)

{
  return 0x21d71d68;
}



// FUNCTION 1429ecfe0 FUN_1429ecfe0 body=6 status=ok
// SIG undefined FUN_1429ecfe0(void)

undefined8 FUN_1429ecfe0(void)

{
  return 0xa30569e0;
}



// FUNCTION 1429ecff0 FUN_1429ecff0 body=6 status=ok
// SIG undefined FUN_1429ecff0(void)

undefined8 FUN_1429ecff0(void)

{
  return 0x65041b29;
}



// FUNCTION 1429ed420 FUN_1429ed420 body=61 status=ok
// SIG undefined FUN_1429ed420(void)

void FUN_1429ed420(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b260c0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1429ed460 FUN_1429ed460 body=61 status=ok
// SIG undefined FUN_1429ed460(void)

void FUN_1429ed460(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b260c8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1429ed4a0 Serialize body=112 status=ok
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
  FUN_142376160(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1429ed510 Serialize body=112 status=ok
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
  FUN_142715240(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1429ed580 Serialize body=112 status=ok
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
  UPoseAsset::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1429ed5f0 Serialize body=112 status=ok
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
  FUN_14288cec0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1429ed660 FUN_1429ed660 body=34 status=ok
// SIG undefined FUN_1429ed660(void)

void FUN_1429ed660(void)

{
  undefined8 uVar1;
  
  uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetPlayerName_14530c960,7);
  return;
}



// FUNCTION 1429ed690 StaticRegisterNativesARemnantMiniMapDisplayActor body=34 status=ok
// SIG undefined StaticRegisterNativesARemnantMiniMapDisplayActor(void)

void ARemnantMiniMapDisplayActor::StaticRegisterNativesARemnantMiniMapDisplayActor(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetLightFalloffExponent_14530c9d0,2);
  return;
}



// FUNCTION 1429ed6c0 FUN_1429ed6c0 body=34 status=ok
// SIG undefined FUN_1429ed6c0(void)

void FUN_1429ed6c0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1429ecea0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearSmoothing_14530c7f0,5);
  return;
}



// FUNCTION 1429ed6f0 FUN_1429ed6f0 body=34 status=ok
// SIG undefined FUN_1429ed6f0(void)

void FUN_1429ed6f0(void)

{
  undefined8 uVar1;
  
  uVar1 = UFGSoundSplineComponent::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetLightFalloffExponent_14530c9f0,5);
  return;
}



// FUNCTION 1429ed720 FUN_1429ed720 body=34 status=ok
// SIG undefined FUN_1429ed720(void)

void FUN_1429ed720(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1429eafc0();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_CopyPoseFromSkeletalComponent_14530ccc0,10);
  return;
}



// FUNCTION 1429ed750 StaticRegisterNativesACineCameraActor body=34 status=ok
// SIG undefined StaticRegisterNativesACineCameraActor(void)

void ACineCameraActor::StaticRegisterNativesACineCameraActor(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddOrUpdateBlendable_14530d0a8,1);
  return;
}



// FUNCTION 1429ed780 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FInputActionKeyMapping::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b26130 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FInputActionKeyMapping_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b26130 = GetStaticStruct(FUN_1429edcc0,uVar2,L"InputActionKeyMapping",0x28,uVar1);
  }
  return;
}



// FUNCTION 1429ed7e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FInputAxisConfigEntry::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b26140 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FInputAxisConfigEntry_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b26140 = GetStaticStruct(FUN_1429edcf0,uVar2,L"InputAxisConfigEntry",0x18,uVar1);
  }
  return;
}



// FUNCTION 1429ed840 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FInputAxisKeyMapping::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b26120 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FInputAxisKeyMapping_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b26120 = GetStaticStruct(FUN_1429edd20,uVar2,L"InputAxisKeyMapping",0x28,uVar1);
  }
  return;
}



// FUNCTION 1429ed8a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FInputAxisProperties::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b26150 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FInputAxisProperties_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b26150 = GetStaticStruct(FUN_1429edd50,uVar2,L"InputAxisProperties",0x10,uVar1);
  }
  return;
}



// FUNCTION 1429ed900 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FKeyBind::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b26160 == 0) {
    uVar1 = FUN_1429ecf90();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b26160 = GetStaticStruct(FUN_1429edd80,uVar2,L"KeyBind",0x30,uVar1);
  }
  return;
}



// FUNCTION 1429ed960 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPlayerMuteList::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b261a8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPlayerMuteList_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b261a8 = GetStaticStruct(FUN_1429eddb0,uVar2,L"PlayerMuteList",0x38,uVar1);
  }
  return;
}



// FUNCTION 1429ed9c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b26318 == 0) {
    uVar1 = FUN_1429ecfc0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b26318 = GetStaticStruct(FUN_1429edde0,uVar2,L"PoseData",0x30,uVar1);
  }
  return;
}



// FUNCTION 1429eda20 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDataContainer::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b26308 == 0) {
    uVar1 = FUN_1429ecfb0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b26308 = GetStaticStruct(FUN_1429ede10,uVar2,L"PoseDataContainer",0x90,uVar1);
  }
  return;
}



// FUNCTION 1429eda80 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseSnapshot::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b26338 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPoseSnapshot_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b26338 = GetStaticStruct(FUN_1429ede40,uVar2,L"PoseSnapshot",0x38,uVar1);
  }
  return;
}



// FUNCTION 1429edae0 FUN_1429edae0 body=82 status=ok
// SIG undefined FUN_1429edae0(void)

void FUN_1429edae0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b26380 == 0) {
    uVar1 = FUN_1429ecfe0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b26380 =
         GetStaticStruct(FUN_1429ede70,uVar2,L"PostProcessSettingsWithBlocker",0x600,uVar1);
  }
  return;
}



// FUNCTION 1429edb40 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTViewTarget::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b26370 == 0) {
    uVar1 = FUN_1429ecff0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b26370 =
         GetStaticStruct(FUN_1429edea0,uVar2,L"PostProcessSettingsWithInheritance",0x610,uVar1);
  }
  return;
}



// FUNCTION 1429edba0 FUN_1429edba0 body=47 status=ok
// SIG undefined FUN_1429edba0(void)

longlong FUN_1429edba0(void)

{
  if (DAT_146b261c8 == 0) {
    FUN_141786440(&DAT_146b261c8,&PTR_GetPrivateStaticClass_14530b000);
  }
  return DAT_146b261c8;
}



// FUNCTION 1429edbd0 FUN_1429edbd0 body=47 status=ok
// SIG undefined FUN_1429edbd0(void)

longlong FUN_1429edbd0(void)

{
  if (DAT_146b26230 == 0) {
    FUN_141786440(&DAT_146b26230,&PTR_StaticClass_14530b780);
  }
  return DAT_146b26230;
}



// FUNCTION 1429edc00 FUN_1429edc00 body=47 status=ok
// SIG undefined FUN_1429edc00(void)

longlong FUN_1429edc00(void)

{
  if (DAT_146b26298 == 0) {
    FUN_141786440(&DAT_146b26298,&PTR_StaticClass_14530a320);
  }
  return DAT_146b26298;
}



// FUNCTION 1429edc30 FUN_1429edc30 body=47 status=ok
// SIG undefined FUN_1429edc30(void)

longlong FUN_1429edc30(void)

{
  if (DAT_146b26328 == 0) {
    FUN_141786440(&DAT_146b26328,&PTR_GetPrivateStaticClass_14530bc30);
  }
  return DAT_146b26328;
}



// FUNCTION 1429edc60 FUN_1429edc60 body=47 status=ok
// SIG undefined FUN_1429edc60(void)

longlong FUN_1429edc60(void)

{
  if (DAT_146b26348 == 0) {
    FUN_141786440(&DAT_146b26348,&PTR_StaticClass_14530bf00);
  }
  return DAT_146b26348;
}



// FUNCTION 1429edc90 FUN_1429edc90 body=47 status=ok
// SIG undefined FUN_1429edc90(void)

longlong FUN_1429edc90(void)

{
  if (DAT_146b26390 == 0) {
    FUN_141786440(&DAT_146b26390,&PTR_FUN_145309960);
  }
  return DAT_146b26390;
}



// FUNCTION 1429edcc0 FUN_1429edcc0 body=47 status=ok
// SIG undefined FUN_1429edcc0(void)

longlong FUN_1429edcc0(void)

{
  if (DAT_146b26138 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b26138,&PTR_Z_Construct_UPackage__Script_Engine_14662f180);
  }
  return DAT_146b26138;
}



// FUNCTION 1429edcf0 FUN_1429edcf0 body=47 status=ok
// SIG undefined FUN_1429edcf0(void)

longlong FUN_1429edcf0(void)

{
  if (DAT_146b26148 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b26148,&PTR_Z_Construct_UPackage__Script_Engine_14662f240);
  }
  return DAT_146b26148;
}



// FUNCTION 1429edd20 FUN_1429edd20 body=47 status=ok
// SIG undefined FUN_1429edd20(void)

longlong FUN_1429edd20(void)

{
  if (DAT_146b26128 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b26128,&PTR_Z_Construct_UPackage__Script_Engine_14662eec0);
  }
  return DAT_146b26128;
}



// FUNCTION 1429edd50 FUN_1429edd50 body=47 status=ok
// SIG undefined FUN_1429edd50(void)

longlong FUN_1429edd50(void)

{
  if (DAT_146b26158 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b26158,&PTR_Z_Construct_UPackage__Script_Engine_14662f340);
  }
  return DAT_146b26158;
}



// FUNCTION 1429edd80 FUN_1429edd80 body=47 status=ok
// SIG undefined FUN_1429edd80(void)

longlong FUN_1429edd80(void)

{
  if (DAT_146b26168 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b26168,&PTR_Z_Construct_UPackage__Script_Engine_14662f8d0);
  }
  return DAT_146b26168;
}



// FUNCTION 1429eddb0 FUN_1429eddb0 body=47 status=ok
// SIG undefined FUN_1429eddb0(void)

longlong FUN_1429eddb0(void)

{
  if (DAT_146b261b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b261b0,&PTR_Z_Construct_UPackage__Script_Engine_14662fc50);
  }
  return DAT_146b261b0;
}



// FUNCTION 1429edde0 FUN_1429edde0 body=47 status=ok
// SIG undefined FUN_1429edde0(void)

longlong FUN_1429edde0(void)

{
  if (DAT_146b26320 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b26320,&PTR_Z_Construct_UPackage__Script_Engine_146631680);
  }
  return DAT_146b26320;
}



// FUNCTION 1429ede10 FUN_1429ede10 body=47 status=ok
// SIG undefined FUN_1429ede10(void)

longlong FUN_1429ede10(void)

{
  if (DAT_146b26310 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b26310,&PTR_Z_Construct_UPackage__Script_Engine_1466314d0);
  }
  return DAT_146b26310;
}



// FUNCTION 1429ede40 FUN_1429ede40 body=47 status=ok
// SIG undefined FUN_1429ede40(void)

longlong FUN_1429ede40(void)

{
  if (DAT_146b26340 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b26340,&PTR_Z_Construct_UPackage__Script_Engine_146631950);
  }
  return DAT_146b26340;
}



// FUNCTION 1429ede70 FUN_1429ede70 body=47 status=ok
// SIG undefined FUN_1429ede70(void)

longlong FUN_1429ede70(void)

{
  if (DAT_146b26388 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b26388,&PTR_Z_Construct_UPackage__Script_Engine_146632bc0);
  }
  return DAT_146b26388;
}



// FUNCTION 1429edea0 FUN_1429edea0 body=47 status=ok
// SIG undefined FUN_1429edea0(void)

longlong FUN_1429edea0(void)

{
  if (DAT_146b26378 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b26378,&PTR_Z_Construct_UPackage__Script_Engine_146632440);
  }
  return DAT_146b26378;
}



// FUNCTION 1429eded0 FUN_1429eded0 body=326 status=ok
// SIG undefined FUN_1429eded0(void)

void FUN_1429eded0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  longlong local_28 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  longlong lStack_10;
  
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  uVar4 = 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (local_28[0] != 0) {
    if (0 < *(int *)(param_1 + 0x8c0)) {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x8b8) + 8);
      uVar5 = uVar4;
      do {
        if (*plVar3 == local_28[0]) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x8b8) + (longlong)(int)uVar5 * 0x10) =
               local_res8[0];
          return;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 2;
      } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x8c0));
    }
    iVar2 = *(int *)(param_1 + 0x8c0);
    local_18 = local_res8[0];
    lStack_10 = local_28[0];
    *(int *)(param_1 + 0x8c0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x8c4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x8b8),iVar2);
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x8b8) + (longlong)iVar2 * 0x10);
    *puVar1 = CONCAT44(uStack_14,local_18);
    puVar1[1] = lStack_10;
  }
  return;
}



// FUNCTION 1429ee040 FUN_1429ee040 body=128 status=ok
// SIG undefined FUN_1429ee040(void)

void FUN_1429ee040(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423666d0(param_1,local_res10);
  return;
}



// FUNCTION 1429ee0c0 execGetBoneLocationByName body=208 status=ok
// SIG undefined execGetBoneLocationByName(void)

void UPoseableMeshComponent::execGetBoneLocationByName
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  undefined1 local_28 [16];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetBoneLocationByName(param_1,local_28,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1429ee190 execGetBoneRotationByName body=208 status=ok
// SIG undefined execGetBoneRotationByName(void)

void UPoseableMeshComponent::execGetBoneRotationByName
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  undefined1 local_28 [16];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetBoneRotationByName(param_1,local_28,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1429ee260 execGetBoneScaleByName body=208 status=ok
// SIG undefined execGetBoneScaleByName(void)

void UPoseableMeshComponent::execGetBoneScaleByName
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  undefined1 local_28 [16];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetBoneScaleByName(param_1,local_28,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1429ee330 execGetBoneTransformByName body=247 status=ok
// SIG undefined execGetBoneTransformByName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UPoseableMeshComponent::execGetBoneTransformByName
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_1423694f0(param_1,local_58,local_60,local_68[0]);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 1429ee430 FUN_1429ee430 body=122 status=ok
// SIG undefined FUN_1429ee430(void)

void FUN_1429ee430(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_14270d290(param_1,local_18);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429ee4b0 execInvertAxis body=128 status=ok
// SIG undefined execInvertAxis(void)

void UPlayerInput::execInvertAxis(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  InvertAxis(param_1,local_res10);
  return;
}



// FUNCTION 1429ee530 FUN_1429ee530 body=232 status=ok
// SIG undefined FUN_1429ee530(void)

void FUN_1429ee530(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_38 = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_20 = local_38;
  local_18 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_28 + 1) = (int)plStack_28[1] + 1;
    UNLOCK();
  }
  UPlayerInput::InvertAxisKey(param_1,&local_20);
  plVar5 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_28)(plStack_28);
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



// FUNCTION 1429ee620 FUN_1429ee620 body=128 status=ok
// SIG undefined FUN_1429ee620(void)

void FUN_1429ee620(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142374ca0(param_1,local_res10);
  return;
}



// FUNCTION 1429ee6a0 execSetBind body=211 status=ok
// SIG undefined execSetBind(void)

void UPlayerInput::execSetBind(long param_1,longlong param_2)

{
  undefined8 local_res10;
  longlong local_18 [2];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429ee780 execSetBoneLocationByName body=270 status=ok
// SIG undefined execSetBoneLocationByName(void)

void UPoseableMeshComponent::execSetBoneLocationByName(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined8 local_res20;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  SetBoneLocationByName(param_1,local_res20,&local_18,local_res10[0]);
  return;
}



// FUNCTION 1429ee890 execSetBoneRotationByName body=270 status=ok
// SIG undefined execSetBoneRotationByName(void)

void UPoseableMeshComponent::execSetBoneRotationByName(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined8 local_res20;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  SetBoneRotationByName(param_1,local_res20,&local_18,local_res10[0]);
  return;
}



// FUNCTION 1429ee9a0 execSetBoneScaleByName body=270 status=ok
// SIG undefined execSetBoneScaleByName(void)

void UPoseableMeshComponent::execSetBoneScaleByName(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined8 local_res20;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  SetBoneScaleByName(param_1,local_res20,&local_18,local_res10[0]);
  return;
}



// FUNCTION 1429eeab0 execSetBoneTransformByName body=338 status=ok
// SIG undefined execSetBoneTransformByName(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UPoseableMeshComponent::execSetBoneTransformByName(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_38 = _DAT_146b260a0 & _DAT_146b260b0;
  uStack_34 = uRam0000000146b260a4 & uRam0000000146b260b4;
  uStack_30 = uRam0000000146b260a8 & uRam0000000146b260b8;
  uStack_2c = uRam0000000146b260ac & uRam0000000146b260bc;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = uRam0000000146b260ac;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68[0] = 0;
  puVar1 = &local_58;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142376640(param_1,local_60,puVar1,local_68[0]);
  return;
}



// FUNCTION 1429eec10 FUN_1429eec10 body=123 status=ok
// SIG undefined FUN_1429eec10(void)

void FUN_1429eec10(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142550440(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429eec90 FUN_1429eec90 body=123 status=ok
// SIG undefined FUN_1429eec90(void)

void FUN_1429eec90(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423775e0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429eed10 FUN_1429eed10 body=123 status=ok
// SIG undefined FUN_1429eed10(void)

void FUN_1429eed10(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1428bc340(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429eed90 FUN_1429eed90 body=123 status=ok
// SIG undefined FUN_1429eed90(void)

void FUN_1429eed90(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142550700(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429eee10 FUN_1429eee10 body=123 status=ok
// SIG undefined FUN_1429eee10(void)

void FUN_1429eee10(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142378560(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429eee90 FUN_1429eee90 body=123 status=ok
// SIG undefined FUN_1429eee90(void)

void FUN_1429eee90(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1423785c0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429eef10 FUN_1429eef10 body=123 status=ok
// SIG undefined FUN_1429eef10(void)

void FUN_1429eef10(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142378610(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429eef90 FUN_1429eef90 body=130 status=ok
// SIG undefined FUN_1429eef90(void)

void FUN_1429eef90(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142378fb0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1429ef020 FUN_1429ef020 body=47 status=ok
// SIG undefined FUN_1429ef020(void)

longlong FUN_1429ef020(void)

{
  if (DAT_146b268e8 == 0) {
    FUN_141786440(&DAT_146b268e8,&PTR_LAB_14530e440);
  }
  return DAT_146b268e8;
}



// FUNCTION 1429ef050 FUN_1429ef050 body=47 status=ok
// SIG undefined FUN_1429ef050(void)

longlong FUN_1429ef050(void)

{
  if (DAT_146b26540 == 0) {
    FUN_141786a30(&DAT_146b26540,&PTR_FUN_1466343a0);
  }
  return DAT_146b26540;
}



// FUNCTION 1429ef080 FUN_1429ef080 body=47 status=ok
// SIG undefined FUN_1429ef080(void)

longlong FUN_1429ef080(void)

{
  if (DAT_146b26548 == 0) {
    FUN_141786a30(&DAT_146b26548,&PTR_FUN_1466344a0);
  }
  return DAT_146b26548;
}



// FUNCTION 1429ef0b0 FUN_1429ef0b0 body=47 status=ok
// SIG undefined FUN_1429ef0b0(void)

longlong FUN_1429ef0b0(void)

{
  if (DAT_146b26550 == 0) {
    FUN_141786a30(&DAT_146b26550,&PTR_FUN_1466345a0);
  }
  return DAT_146b26550;
}



// FUNCTION 1429ef0e0 FUN_1429ef0e0 body=47 status=ok
// SIG undefined FUN_1429ef0e0(void)

longlong FUN_1429ef0e0(void)

{
  if (DAT_146b26558 == 0) {
    FUN_141786a30(&DAT_146b26558,&PTR_FUN_1466346a0);
  }
  return DAT_146b26558;
}



// FUNCTION 1429ef110 FUN_1429ef110 body=47 status=ok
// SIG undefined FUN_1429ef110(void)

longlong FUN_1429ef110(void)

{
  if (DAT_146b26560 == 0) {
    FUN_141786a30(&DAT_146b26560,&PTR_FUN_146634760);
  }
  return DAT_146b26560;
}



// FUNCTION 1429ef140 FUN_1429ef140 body=47 status=ok
// SIG undefined FUN_1429ef140(void)

longlong FUN_1429ef140(void)

{
  if (DAT_146b26568 == 0) {
    FUN_141786a30(&DAT_146b26568,&PTR_FUN_146634890);
  }
  return DAT_146b26568;
}



// FUNCTION 1429ef170 FUN_1429ef170 body=47 status=ok
// SIG undefined FUN_1429ef170(void)

longlong FUN_1429ef170(void)

{
  if (DAT_146b26570 == 0) {
    FUN_141786a30(&DAT_146b26570,&PTR_FUN_146634990);
  }
  return DAT_146b26570;
}



// FUNCTION 1429ef1a0 FUN_1429ef1a0 body=47 status=ok
// SIG undefined FUN_1429ef1a0(void)

longlong FUN_1429ef1a0(void)

{
  if (DAT_146b26578 == 0) {
    FUN_141786a30(&DAT_146b26578,&PTR_FUN_146634a50);
  }
  return DAT_146b26578;
}



// FUNCTION 1429ef1d0 FUN_1429ef1d0 body=47 status=ok
// SIG undefined FUN_1429ef1d0(void)

longlong FUN_1429ef1d0(void)

{
  if (DAT_146b26580 == 0) {
    FUN_141786a30(&DAT_146b26580,&PTR_FUN_146634c00);
  }
  return DAT_146b26580;
}



// FUNCTION 1429ef200 FUN_1429ef200 body=47 status=ok
// SIG undefined FUN_1429ef200(void)

longlong FUN_1429ef200(void)

{
  if (DAT_146b26588 == 0) {
    FUN_141786a30(&DAT_146b26588,&PTR_FUN_146634d40);
  }
  return DAT_146b26588;
}



// FUNCTION 1429ef230 FUN_1429ef230 body=47 status=ok
// SIG undefined FUN_1429ef230(void)

longlong FUN_1429ef230(void)

{
  if (DAT_146b26590 == 0) {
    FUN_141786a30(&DAT_146b26590,&PTR_FUN_146634e40);
  }
  return DAT_146b26590;
}



// FUNCTION 1429ef260 FUN_1429ef260 body=47 status=ok
// SIG undefined FUN_1429ef260(void)

longlong FUN_1429ef260(void)

{
  if (DAT_146b26598 == 0) {
    FUN_141786a30(&DAT_146b26598,&PTR_FUN_146634f40);
  }
  return DAT_146b26598;
}



// FUNCTION 1429ef290 FUN_1429ef290 body=47 status=ok
// SIG undefined FUN_1429ef290(void)

longlong FUN_1429ef290(void)

{
  if (DAT_146b265a0 == 0) {
    FUN_141786a30(&DAT_146b265a0,&PTR_FUN_146635040);
  }
  return DAT_146b265a0;
}



// FUNCTION 1429ef2c0 FUN_1429ef2c0 body=47 status=ok
// SIG undefined FUN_1429ef2c0(void)

longlong FUN_1429ef2c0(void)

{
  if (DAT_146b265a8 == 0) {
    FUN_141786a30(&DAT_146b265a8,&PTR_FUN_146635140);
  }
  return DAT_146b265a8;
}



// FUNCTION 1429ef2f0 FUN_1429ef2f0 body=47 status=ok
// SIG undefined FUN_1429ef2f0(void)

longlong FUN_1429ef2f0(void)

{
  if (DAT_146b265b0 == 0) {
    FUN_141786a30(&DAT_146b265b0,&PTR_FUN_146635180);
  }
  return DAT_146b265b0;
}



// FUNCTION 1429ef320 FUN_1429ef320 body=47 status=ok
// SIG undefined FUN_1429ef320(void)

longlong FUN_1429ef320(void)

{
  if (DAT_146b265b8 == 0) {
    FUN_141786a30(&DAT_146b265b8,&PTR_FUN_1466351c0);
  }
  return DAT_146b265b8;
}



// FUNCTION 1429ef350 FUN_1429ef350 body=47 status=ok
// SIG undefined FUN_1429ef350(void)

longlong FUN_1429ef350(void)

{
  if (DAT_146b265c0 == 0) {
    FUN_141786a30(&DAT_146b265c0,&PTR_FUN_146635240);
  }
  return DAT_146b265c0;
}



// FUNCTION 1429ef380 FUN_1429ef380 body=47 status=ok
// SIG undefined FUN_1429ef380(void)

longlong FUN_1429ef380(void)

{
  if (DAT_146b265c8 == 0) {
    FUN_141786a30(&DAT_146b265c8,&PTR_FUN_146635330);
  }
  return DAT_146b265c8;
}



// FUNCTION 1429ef3b0 FUN_1429ef3b0 body=47 status=ok
// SIG undefined FUN_1429ef3b0(void)

longlong FUN_1429ef3b0(void)

{
  if (DAT_146b265d0 == 0) {
    FUN_141786a30(&DAT_146b265d0,&PTR_FUN_1466353b0);
  }
  return DAT_146b265d0;
}



// FUNCTION 1429ef3e0 FUN_1429ef3e0 body=47 status=ok
// SIG undefined FUN_1429ef3e0(void)

longlong FUN_1429ef3e0(void)

{
  if (DAT_146b265d8 == 0) {
    FUN_141786a30(&DAT_146b265d8,&PTR_FUN_1466354e0);
  }
  return DAT_146b265d8;
}



// FUNCTION 1429ef410 FUN_1429ef410 body=47 status=ok
// SIG undefined FUN_1429ef410(void)

longlong FUN_1429ef410(void)

{
  if (DAT_146b265e0 == 0) {
    FUN_141786a30(&DAT_146b265e0,&PTR_FUN_146635610);
  }
  return DAT_146b265e0;
}



// FUNCTION 1429ef440 FUN_1429ef440 body=47 status=ok
// SIG undefined FUN_1429ef440(void)

longlong FUN_1429ef440(void)

{
  if (DAT_146b265e8 == 0) {
    FUN_141786a30(&DAT_146b265e8,&PTR_FUN_146635650);
  }
  return DAT_146b265e8;
}



// FUNCTION 1429ef470 FUN_1429ef470 body=47 status=ok
// SIG undefined FUN_1429ef470(void)

longlong FUN_1429ef470(void)

{
  if (DAT_146b265f0 == 0) {
    FUN_141786a30(&DAT_146b265f0,&PTR_FUN_146635740);
  }
  return DAT_146b265f0;
}



// FUNCTION 1429ef4a0 FUN_1429ef4a0 body=47 status=ok
// SIG undefined FUN_1429ef4a0(void)

longlong FUN_1429ef4a0(void)

{
  if (DAT_146b265f8 == 0) {
    FUN_141786a30(&DAT_146b265f8,&PTR_FUN_146635870);
  }
  return DAT_146b265f8;
}



// FUNCTION 1429ef4d0 FUN_1429ef4d0 body=47 status=ok
// SIG undefined FUN_1429ef4d0(void)

longlong FUN_1429ef4d0(void)

{
  if (DAT_146b26600 == 0) {
    FUN_141786a30(&DAT_146b26600,&PTR_FUN_1466358f0);
  }
  return DAT_146b26600;
}



// FUNCTION 1429ef500 FUN_1429ef500 body=47 status=ok
// SIG undefined FUN_1429ef500(void)

longlong FUN_1429ef500(void)

{
  if (DAT_146b26608 == 0) {
    FUN_141786a30(&DAT_146b26608,&PTR_FUN_146635970);
  }
  return DAT_146b26608;
}



// FUNCTION 1429ef530 FUN_1429ef530 body=47 status=ok
// SIG undefined FUN_1429ef530(void)

longlong FUN_1429ef530(void)

{
  if (DAT_146b26610 == 0) {
    FUN_141786a30(&DAT_146b26610,&PTR_FUN_1466359b0);
  }
  return DAT_146b26610;
}



// FUNCTION 1429ef560 FUN_1429ef560 body=47 status=ok
// SIG undefined FUN_1429ef560(void)

longlong FUN_1429ef560(void)

{
  if (DAT_146b26618 == 0) {
    FUN_141786a30(&DAT_146b26618,&PTR_FUN_146635a70);
  }
  return DAT_146b26618;
}



// FUNCTION 1429ef590 FUN_1429ef590 body=47 status=ok
// SIG undefined FUN_1429ef590(void)

longlong FUN_1429ef590(void)

{
  if (DAT_146b26620 == 0) {
    FUN_141786a30(&DAT_146b26620,&PTR_FUN_146635af0);
  }
  return DAT_146b26620;
}



// FUNCTION 1429ef5c0 FUN_1429ef5c0 body=47 status=ok
// SIG undefined FUN_1429ef5c0(void)

longlong FUN_1429ef5c0(void)

{
  if (DAT_146b26628 == 0) {
    FUN_141786a30(&DAT_146b26628,&PTR_FUN_146635b70);
  }
  return DAT_146b26628;
}



// FUNCTION 1429ef5f0 FUN_1429ef5f0 body=47 status=ok
// SIG undefined FUN_1429ef5f0(void)

longlong FUN_1429ef5f0(void)

{
  if (DAT_146b26630 == 0) {
    FUN_141786a30(&DAT_146b26630,&PTR_FUN_146635c30);
  }
  return DAT_146b26630;
}



// FUNCTION 1429ef620 FUN_1429ef620 body=47 status=ok
// SIG undefined FUN_1429ef620(void)

longlong FUN_1429ef620(void)

{
  if (DAT_146b26638 == 0) {
    FUN_141786a30(&DAT_146b26638,&PTR_FUN_146635cb0);
  }
  return DAT_146b26638;
}



// FUNCTION 1429ef650 FUN_1429ef650 body=47 status=ok
// SIG undefined FUN_1429ef650(void)

longlong FUN_1429ef650(void)

{
  if (DAT_146b26640 == 0) {
    FUN_141786a30(&DAT_146b26640,&PTR_FUN_146635d60);
  }
  return DAT_146b26640;
}



// FUNCTION 1429ef680 FUN_1429ef680 body=47 status=ok
// SIG undefined FUN_1429ef680(void)

longlong FUN_1429ef680(void)

{
  if (DAT_146b26648 == 0) {
    FUN_141786a30(&DAT_146b26648,&PTR_FUN_146635da0);
  }
  return DAT_146b26648;
}



// FUNCTION 1429ef6b0 FUN_1429ef6b0 body=47 status=ok
// SIG undefined FUN_1429ef6b0(void)

longlong FUN_1429ef6b0(void)

{
  if (DAT_146b26650 == 0) {
    FUN_141786a30(&DAT_146b26650,&PTR_FUN_146635e50);
  }
  return DAT_146b26650;
}



// FUNCTION 1429ef6e0 FUN_1429ef6e0 body=47 status=ok
// SIG undefined FUN_1429ef6e0(void)

longlong FUN_1429ef6e0(void)

{
  if (DAT_146b26658 == 0) {
    FUN_141786a30(&DAT_146b26658,&PTR_FUN_146635f40);
  }
  return DAT_146b26658;
}



// FUNCTION 1429ef710 FUN_1429ef710 body=47 status=ok
// SIG undefined FUN_1429ef710(void)

longlong FUN_1429ef710(void)

{
  if (DAT_146b26660 == 0) {
    FUN_141786a30(&DAT_146b26660,&PTR_FUN_146636030);
  }
  return DAT_146b26660;
}



// FUNCTION 1429ef740 FUN_1429ef740 body=47 status=ok
// SIG undefined FUN_1429ef740(void)

longlong FUN_1429ef740(void)

{
  if (DAT_146b26668 == 0) {
    FUN_141786a30(&DAT_146b26668,&PTR_FUN_146636070);
  }
  return DAT_146b26668;
}



// FUNCTION 1429ef770 FUN_1429ef770 body=47 status=ok
// SIG undefined FUN_1429ef770(void)

longlong FUN_1429ef770(void)

{
  if (DAT_146b26670 == 0) {
    FUN_141786a30(&DAT_146b26670,&PTR_FUN_146636170);
  }
  return DAT_146b26670;
}



// FUNCTION 1429ef7a0 FUN_1429ef7a0 body=47 status=ok
// SIG undefined FUN_1429ef7a0(void)

longlong FUN_1429ef7a0(void)

{
  if (DAT_146b26678 == 0) {
    FUN_141786a30(&DAT_146b26678,&PTR_FUN_146636260);
  }
  return DAT_146b26678;
}



// FUNCTION 1429ef7d0 FUN_1429ef7d0 body=47 status=ok
// SIG undefined FUN_1429ef7d0(void)

longlong FUN_1429ef7d0(void)

{
  if (DAT_146b26680 == 0) {
    FUN_141786a30(&DAT_146b26680,&PTR_FUN_1466362e0);
  }
  return DAT_146b26680;
}



// FUNCTION 1429ef800 FUN_1429ef800 body=47 status=ok
// SIG undefined FUN_1429ef800(void)

longlong FUN_1429ef800(void)

{
  if (DAT_146b26688 == 0) {
    FUN_141786a30(&DAT_146b26688,&PTR_FUN_1466363d0);
  }
  return DAT_146b26688;
}



// FUNCTION 1429ef830 FUN_1429ef830 body=47 status=ok
// SIG undefined FUN_1429ef830(void)

longlong FUN_1429ef830(void)

{
  if (DAT_146b26690 == 0) {
    FUN_141786a30(&DAT_146b26690,&PTR_FUN_146636450);
  }
  return DAT_146b26690;
}



// FUNCTION 1429ef860 FUN_1429ef860 body=47 status=ok
// SIG undefined FUN_1429ef860(void)

longlong FUN_1429ef860(void)

{
  if (DAT_146b26698 == 0) {
    FUN_141786a30(&DAT_146b26698,&PTR_FUN_146636540);
  }
  return DAT_146b26698;
}


