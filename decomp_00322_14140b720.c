// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14140b720 thunk_FUN_14145f370 body=5 status=ok
// SIG undefined thunk_FUN_14145f370(void)

void thunk_FUN_14145f370(void)

{
  FUN_14145f370();
  return;
}



// FUNCTION 14140b730 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UBTTask_RunBehaviorDynamic::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 14140b740 FUN_14140b740 body=34 status=ok
// SIG undefined FUN_14140b740(void)

void FUN_14140b740(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14140ae40();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AbortActiveActionSkills_144a29f10,0x124);
  return;
}



// FUNCTION 14140b770 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688ff58 == 0) {
    uVar1 = FUN_14140b710();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ff58 = GetStaticStruct(FUN_14140b830,uVar2,L"CheatManagerItemPool",0x18,uVar1);
  }
  return;
}



// FUNCTION 14140b7d0 FUN_14140b7d0 body=47 status=ok
// SIG undefined FUN_14140b7d0(void)

longlong FUN_14140b7d0(void)

{
  if (DAT_14688ff38 == 0) {
    FUN_141786440(&DAT_14688ff38,&PTR_FUN_144a19a90);
  }
  return DAT_14688ff38;
}



// FUNCTION 14140b800 FUN_14140b800 body=47 status=ok
// SIG undefined FUN_14140b800(void)

longlong FUN_14140b800(void)

{
  if (DAT_14688ff48 == 0) {
    FUN_141786440(&DAT_14688ff48,&PTR_GetPrivateStaticClass_144a22f10);
  }
  return DAT_14688ff48;
}



// FUNCTION 14140b830 FUN_14140b830 body=47 status=ok
// SIG undefined FUN_14140b830(void)

longlong FUN_14140b830(void)

{
  if (DAT_14688ff60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688ff60,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b4690);
  }
  return DAT_14688ff60;
}



// FUNCTION 14140b860 FUN_14140b860 body=481 status=ok
// SIG undefined FUN_14140b860(void)

void FUN_14140b860(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UCheatManager::UCheatManager(puVar1,param_1);
    puVar1[0x10] = 0;
    *puVar1 = &PTR_FUN_144a29928;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x3d] = 0;
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    puVar1[0x49] = 0;
    puVar1[0x4a] = 0;
    puVar1[0x4b] = 0;
    puVar1[0x4c] = 0;
    puVar1[0x4d] = 0;
    puVar1[0x4e] = 0;
    puVar1[0x4f] = 0;
    puVar1[0x50] = 0;
    puVar1[0x51] = 0;
  }
  return;
}



// FUNCTION 14140ba50 FUN_14140ba50 body=123 status=ok
// SIG undefined FUN_14140ba50(void)

void FUN_14140ba50(long param_1,longlong param_2)

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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140bad0 execSkipToCampaignLevel body=126 status=ok
// SIG undefined execSkipToCampaignLevel(void)

void UUGCampaign::execSkipToCampaignLevel(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140bb50 execHandleOnLoadoutChangedChanged body=223 status=ok
// SIG undefined execHandleOnLoadoutChangedChanged(void)

void URefinementWidget::execHandleOnLoadoutChangedChanged(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_140b7b820(param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140bc50 execServerExec body=148 status=ok
// SIG undefined execServerExec(void)

void APlayerController::execServerExec(long param_1,longlong param_2)

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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140bcf0 execOnControllerConnectionChanged body=192 status=ok
// SIG undefined execOnControllerConnectionChanged(void)

void UConsoleCompatGameInstance::execOnControllerConnectionChanged
               (undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
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
  FUN_140b7e1f0(param_1,local_res20[0],local_res10[0] != 0);
  return;
}



// FUNCTION 14140bdb0 FUN_14140bdb0 body=214 status=ok
// SIG undefined FUN_14140bdb0(void)

void FUN_14140bdb0(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140be90 FUN_14140be90 body=209 status=ok
// SIG undefined FUN_14140be90(void)

void FUN_14140be90(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  FUN_140b7e200(param_1,local_res10[0],local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140bf70 FUN_14140bf70 body=196 status=ok
// SIG undefined FUN_14140bf70(void)

void FUN_14140bf70(long param_1,longlong param_2)

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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140c060 FUN_14140c060 body=130 status=ok
// SIG undefined FUN_14140c060(void)

void FUN_14140c060(undefined8 param_1,longlong param_2)

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
  FUN_140b7eb70(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14140c0f0 execAddChatMessage body=212 status=ok
// SIG undefined execAddChatMessage(void)

void AShipCharacter::execAddChatMessage(long param_1,longlong param_2)

{
  undefined1 local_res10 [8];
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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140c1d0 FUN_14140c1d0 body=331 status=ok
// SIG undefined FUN_14140c1d0(void)

void FUN_14140c1d0(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  _Src = local_38;
  local_28 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_30;
  local_20 = (int)local_30;
  if ((int)local_30 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_30 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar1 * 2);
  }
  FUN_140b7b820(param_1,&local_28,local_res20[0],local_res10[0]);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140c320 execOnControllerConnectionChanged body=192 status=ok
// SIG undefined execOnControllerConnectionChanged(void)

void UConsoleCompatGameInstance::execOnControllerConnectionChanged(long param_1,longlong param_2)

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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140c420 execSetBoolOptionValue body=420 status=ok
// SIG undefined execSetBoolOptionValue(void)

void UFGGameUserSettings::execSetBoolOptionValue(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int local_res10 [4];
  int local_res20 [2];
  int local_68 [2];
  void *local_60;
  ulonglong local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  
  local_60 = (void *)0x0;
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
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
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_68[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  _Src = local_60;
  bVar4 = local_68[0] != 0;
  local_50 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_58;
  local_48 = (int)local_58;
  if ((int)local_58 == 0) {
    local_44 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_58 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_50,_Src,lVar1 * 2);
  }
  FUN_140b7b820(param_1,&local_50,bVar2,bVar3,bVar4);
  if (local_60 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140c5d0 FUN_14140c5d0 body=284 status=ok
// SIG undefined FUN_14140c5d0(void)

void FUN_14140c5d0(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined4 local_res10 [2];
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_140b82df0(param_1,local_res10[0],&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140c710 execEnableGroupByName body=292 status=ok
// SIG undefined execEnableGroupByName(void)

void AMatineeActor::execEnableGroupByName(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  bool bVar2;
  int local_res10 [2];
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  _Src = local_38;
  bVar2 = local_res10[0] != 0;
  local_28 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_30;
  local_20 = (int)local_30;
  if ((int)local_30 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_30 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,_Src,lVar1 * 2);
  }
  FUN_140b7b820(param_1,&local_28,bVar2);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140c840 FUN_14140c840 body=210 status=ok
// SIG undefined FUN_14140c840(void)

void FUN_14140c840(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140c920 execString_Int__AddPair body=285 status=ok
// SIG undefined execString_Int__AddPair(void)

void UVictoryTMapComp::execString_Int__AddPair(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined4 local_res10 [2];
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
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
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_140b7b820(param_1,&local_18,local_res10[0]);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140ca60 FUN_14140ca60 body=231 status=ok
// SIG undefined FUN_14140ca60(void)

void FUN_14140ca60(long param_1,longlong param_2)

{
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140cb50 FUN_14140cb50 body=359 status=ok
// SIG undefined FUN_14140cb50(void)

void FUN_14140cb50(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  void *local_48;
  ulonglong local_40;
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pvVar1 = local_48;
  local_28 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_40;
  local_20 = (int)local_40;
  if ((int)local_40 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_40 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_38;
  lVar2 = (longlong)(int)local_30;
  local_18 = (void *)0x0;
  local_10 = (int)local_30;
  if ((int)local_30 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_30 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_18,pvVar1,lVar2 * 2);
  }
  FUN_140b83e60(param_1,&local_18,&local_28);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140ccc0 FUN_14140ccc0 body=387 status=ok
// SIG undefined FUN_14140ccc0(void)

void FUN_14140ccc0(long param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  
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
  FName::FName(local_48,&DAT_143f3eda8,1);
  local_3c = 0;
  local_40 = 0xffffffff;
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
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



// FUNCTION 14140ce50 FUN_14140ce50 body=209 status=ok
// SIG undefined FUN_14140ce50(void)

void FUN_14140ce50(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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



// FUNCTION 14140cf30 FUN_14140cf30 body=143 status=ok
// SIG undefined FUN_14140cf30(void)

void FUN_14140cf30(long param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140d020 execDropItemByID body=254 status=ok
// SIG undefined execDropItemByID(void)

void UInventoryComponent::execDropItemByID(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140d120 FUN_14140d120 body=390 status=ok
// SIG undefined FUN_14140d120(void)

void FUN_14140d120(long param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30;
  
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140d2d0 FUN_14140d2d0 body=181 status=ok
// SIG undefined FUN_14140d2d0(void)

void FUN_14140d2d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x460))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerCheatSwitchPlayerClass_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x468))(param_1,local_res8);
  return;
}



// FUNCTION 14140d390 FUN_14140d390 body=130 status=ok
// SIG undefined FUN_14140d390(void)

void FUN_14140d390(undefined8 param_1,longlong param_2)

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
  FUN_140b8cc90(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14140d420 FUN_14140d420 body=275 status=ok
// SIG undefined FUN_14140d420(void)

void FUN_14140d420(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140d540 execLockAIResources body=194 status=ok
// SIG undefined execLockAIResources(void)

void UAnimInstance::execLockAIResources(long param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140d610 FUN_14140d610 body=390 status=ok
// SIG undefined FUN_14140d610(void)

void FUN_14140d610(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  local_10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_10);
  }
  local_14 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_14);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140d7a0 FUN_14140d7a0 body=196 status=ok
// SIG undefined FUN_14140d7a0(void)

void FUN_14140d7a0(long param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140d870 FUN_14140d870 body=314 status=ok
// SIG undefined FUN_14140d870(void)

void FUN_14140d870(long param_1,longlong param_2)

{
  longlong local_38 [6];
  
  local_38[4] = 0;
  local_38[5] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 4);
  }
  local_38[2] = 0;
  local_38[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140d9b0 FUN_14140d9b0 body=216 status=ok
// SIG undefined FUN_14140d9b0(void)

void FUN_14140d9b0(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140db10 execOnOwnerEndPlay body=192 status=ok
// SIG undefined execOnOwnerEndPlay(void)

void UAIPerceptionComponent::execOnOwnerEndPlay(long param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined8 local_res20;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140dbd0 FUN_14140dbd0 body=321 status=ok
// SIG undefined FUN_14140dbd0(void)

void FUN_14140dbd0(long param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_24[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140dde0 execEnableHDRDisplayOutput body=190 status=ok
// SIG undefined execEnableHDRDisplayOutput(void)

void UGameUserSettings::execEnableHDRDisplayOutput(long param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140dea0 execHandleOnLoadoutChangedChanged body=223 status=ok
// SIG undefined execHandleOnLoadoutChangedChanged(void)

void URefinementWidget::execHandleOnLoadoutChangedChanged(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_140b8f3e0(param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140df80 FUN_14140df80 body=455 status=ok
// SIG undefined FUN_14140df80(void)

void FUN_14140df80(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  longlong local_48 [8];
  
  local_48[6] = 0;
  local_48[7] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48 + 6);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 6);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_48[4] = 0;
  local_48[5] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b8fc90(param_1,local_48 + 6,local_res10[0],local_48 + 4,local_48 + 2,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  if (local_48[4] != 0) {
    FMemory::Free();
  }
  if (local_48[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140e150 FUN_14140e150 body=148 status=ok
// SIG undefined FUN_14140e150(void)

void FUN_14140e150(undefined8 param_1,longlong param_2)

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
  FUN_140b8fe00(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140e210 FUN_14140e210 body=126 status=ok
// SIG undefined FUN_14140e210(void)

void FUN_14140e210(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
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
  FUN_140b905a0(param_1,local_res10[0]);
  return;
}



// FUNCTION 14140e290 FUN_14140e290 body=130 status=ok
// SIG undefined FUN_14140e290(void)

void FUN_14140e290(undefined8 param_1,longlong param_2)

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
  FUN_140b908c0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14140e340 execCreateRow body=315 status=ok
// SIG undefined execCreateRow(void)

void UProgressionManagerComponent::execCreateRow(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_18;
  undefined4 local_14 [3];
  
  local_14[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_14);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_14);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140e4a0 FUN_14140e4a0 body=126 status=ok
// SIG undefined FUN_14140e4a0(void)

void FUN_14140e4a0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
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
  FUN_140b91250(param_1,local_res10[0]);
  return;
}



// FUNCTION 14140e520 FUN_14140e520 body=364 status=ok
// SIG undefined FUN_14140e520(void)

void FUN_14140e520(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  FUN_140b91300(param_1,local_28 + 2,local_28,local_res20[0],local_res10[0]);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140e6b0 execOnRep_State body=118 status=ok
// SIG undefined execOnRep_State(void)

void AGrenade::execOnRep_State(long param_1,longlong param_2)

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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 14140e730 execEnableGroupByName body=292 status=ok
// SIG undefined execEnableGroupByName(void)

void AMatineeActor::execEnableGroupByName(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  bool bVar2;
  int local_res10 [2];
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  _Src = local_38;
  bVar2 = local_res10[0] != 0;
  local_28 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_30;
  local_20 = (int)local_30;
  if ((int)local_30 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_30 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,_Src,lVar1 * 2);
  }
  FUN_140b916c0(param_1,&local_28,bVar2);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140e880 execSetNewGalleryContent body=260 status=ok
// SIG undefined execSetNewGalleryContent(void)

void UGameData::execSetNewGalleryContent(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  int local_18 [4];
  
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
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b91b70(param_1,local_res20[0],local_res10[0],local_18[0] != 0);
  return;
}



// FUNCTION 14140e990 FUN_14140e990 body=335 status=ok
// SIG undefined FUN_14140e990(void)

void FUN_14140e990(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  longlong local_38 [4];
  
  local_38[2] = 0;
  local_38[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140eae0 FUN_14140eae0 body=314 status=ok
// SIG undefined FUN_14140eae0(void)

void FUN_14140eae0(undefined8 param_1,longlong param_2)

{
  longlong local_38 [6];
  
  local_38[4] = 0;
  local_38[5] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 4);
  }
  local_38[2] = 0;
  local_38[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b91ca0(param_1,local_38 + 4,local_38 + 2,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140ec20 FUN_14140ec20 body=314 status=ok
// SIG undefined FUN_14140ec20(void)

void FUN_14140ec20(undefined8 param_1,longlong param_2)

{
  longlong local_38 [6];
  
  local_38[4] = 0;
  local_38[5] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 4);
  }
  local_38[2] = 0;
  local_38[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b91df0(param_1,local_38 + 4,local_38 + 2,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140ed60 FUN_14140ed60 body=293 status=ok
// SIG undefined FUN_14140ed60(void)

void FUN_14140ed60(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  FUN_140b91f40(param_1,local_28 + 2,local_28,local_res10[0]);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140ee90 FUN_14140ee90 body=380 status=ok
// SIG undefined FUN_14140ee90(void)

void FUN_14140ee90(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  longlong local_38 [6];
  
  local_38[4] = 0;
  local_38[5] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 4);
  }
  local_38[2] = 0;
  local_38[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
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
  FUN_140b923c0(param_1,local_38 + 4,local_38 + 2,local_38,local_res10[0]);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140f030 FUN_14140f030 body=148 status=ok
// SIG undefined FUN_14140f030(void)

void FUN_14140f030(undefined8 param_1,longlong param_2)

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
  FUN_140b927c0(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140f0d0 FUN_14140f0d0 body=286 status=ok
// SIG undefined FUN_14140f0d0(void)

void FUN_14140f0d0(long param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  longlong local_28 [2];
  
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140f210 execHandleOnLoadoutChangedChanged body=223 status=ok
// SIG undefined execHandleOnLoadoutChangedChanged(void)

void URefinementWidget::execHandleOnLoadoutChangedChanged(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_140b933a0(param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140f2f0 FUN_14140f2f0 body=314 status=ok
// SIG undefined FUN_14140f2f0(void)

void FUN_14140f2f0(undefined8 param_1,longlong param_2)

{
  longlong local_38 [6];
  
  local_38[4] = 0;
  local_38[5] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 4);
  }
  local_38[2] = 0;
  local_38[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b936f0(param_1,local_38 + 4,local_38 + 2,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140f430 FUN_14140f430 body=224 status=ok
// SIG undefined FUN_14140f430(void)

void FUN_14140f430(long param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
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



// FUNCTION 14140f550 FUN_14140f550 body=126 status=ok
// SIG undefined FUN_14140f550(void)

void FUN_14140f550(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
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
  FUN_140b93c50(param_1,local_res10[0]);
  return;
}



// FUNCTION 14140f5d0 FUN_14140f5d0 body=188 status=ok
// SIG undefined FUN_14140f5d0(void)

void FUN_14140f5d0(undefined8 param_1,longlong param_2)

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
  FUN_140b93f40(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 14140f690 execString_Int__AddPair body=285 status=ok
// SIG undefined execString_Int__AddPair(void)

void UVictoryTMapComp::execString_Int__AddPair(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined4 local_res10 [2];
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
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
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_140b93fa0(param_1,&local_18,local_res10[0]);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14140f7b0 FUN_14140f7b0 body=162 status=ok
// SIG undefined FUN_14140f7b0(void)

longlong FUN_14140f7b0(void)

{
  if (DAT_146890af8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakClientFriendBeacon",&DAT_146890af8,FUN_140447710,0x198,
                  0x1000000c,0,L"Engine",&LAB_1414115d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1404e6f10,&LAB_140447700,0);
  }
  return DAT_146890af8;
}



// FUNCTION 14140f860 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ARemnantMiniMapDisplayActor::GetPrivateStaticClass(void)

{
  if (DAT_146890c68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCustomizationManager",&DAT_146890c68,FUN_140447710,0x470,
                  0x10000000,0,L"Engine",FUN_1414114c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_141412cf0,&LAB_140447700,0);
  }
  return DAT_146890c68;
}



// FUNCTION 14140f930 FUN_14140f930 body=162 status=ok
// SIG undefined FUN_14140f930(void)

longlong FUN_14140f930(void)

{
  if (DAT_146890b08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakClientLobbyBeacon",&DAT_146890b08,FUN_140447710,0x1e0,
                  0x1000000c,0,L"Engine",&LAB_1414115f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1404e6f10,&LAB_140447700,0);
  }
  return DAT_146890b08;
}



// FUNCTION 14140f9f0 FUN_14140f9f0 body=162 status=ok
// SIG undefined FUN_14140f9f0(void)

longlong FUN_14140f9f0(void)

{
  if (DAT_146890be0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakControlledMove_Player",&DAT_146890be0,FUN_140447710,0x8c0,
                  0x10000000,0,L"Engine",FUN_141411a30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141410cb0,&LAB_140447700,0);
  }
  return DAT_146890be0;
}



// FUNCTION 14140faa0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGFreezeCharacterCue::GetPrivateStaticClass(void)

{
  if (DAT_146890da8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDamageComponent",&DAT_146890da8,FUN_141412e40,0x9c0,
                  0x10000000,0,L"Engine",&LAB_141411b70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141412d30,&LAB_140447700,0);
  }
  return DAT_146890da8;
}



// FUNCTION 14140fb70 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULocalPlayer::GetPrivateStaticClass(void)

{
  if (DAT_146890b18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakClientMatchmakingBeacon",&DAT_146890b18,FUN_140447710,
                  0x1c8,0x1000000c,0,L"Engine",&LAB_141411610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1404e6f10,&LAB_140447700,0);
  }
  return DAT_146890b18;
}



// FUNCTION 14140fc20 FUN_14140fc20 body=47 status=ok
// SIG undefined FUN_14140fc20(void)

longlong FUN_14140fc20(void)

{
  if (DAT_146890da0 == 0) {
    FUN_141786440(&DAT_146890da0,&PTR_GetPrivateStaticClass_144a2d5e0);
  }
  return DAT_146890da0;
}



// FUNCTION 14140fc50 FUN_14140fc50 body=47 status=ok
// SIG undefined FUN_14140fc50(void)

longlong FUN_14140fc50(void)

{
  if (DAT_146890d48 == 0) {
    FUN_141786a30(&DAT_146890d48,&PTR_FUN_1463c0b00);
  }
  return DAT_146890d48;
}



// FUNCTION 14140fc80 FUN_14140fc80 body=47 status=ok
// SIG undefined FUN_14140fc80(void)

longlong FUN_14140fc80(void)

{
  if (DAT_146890d50 == 0) {
    FUN_141786a30(&DAT_146890d50,&PTR_FUN_1463c0bb0);
  }
  return DAT_146890d50;
}



// FUNCTION 14140fcb0 FUN_14140fcb0 body=47 status=ok
// SIG undefined FUN_14140fcb0(void)

longlong FUN_14140fcb0(void)

{
  if (DAT_146890d58 == 0) {
    FUN_141786a30(&DAT_146890d58,&PTR_FUN_1463c0c70);
  }
  return DAT_146890d58;
}



// FUNCTION 14140fce0 FUN_14140fce0 body=47 status=ok
// SIG undefined FUN_14140fce0(void)

longlong FUN_14140fce0(void)

{
  if (DAT_146890d60 == 0) {
    FUN_141786a30(&DAT_146890d60,&PTR_FUN_1463c0d80);
  }
  return DAT_146890d60;
}



// FUNCTION 14140fd10 FUN_14140fd10 body=47 status=ok
// SIG undefined FUN_14140fd10(void)

longlong FUN_14140fd10(void)

{
  if (DAT_146890d68 == 0) {
    FUN_141786a30(&DAT_146890d68,&PTR_FUN_1463c0e10);
  }
  return DAT_146890d68;
}



// FUNCTION 14140fd40 FUN_14140fd40 body=47 status=ok
// SIG undefined FUN_14140fd40(void)

longlong FUN_14140fd40(void)

{
  if (DAT_146890d70 == 0) {
    FUN_141786a30(&DAT_146890d70,&PTR_FUN_1463c0ea0);
  }
  return DAT_146890d70;
}



// FUNCTION 14140fd70 FUN_14140fd70 body=47 status=ok
// SIG undefined FUN_14140fd70(void)

longlong FUN_14140fd70(void)

{
  if (DAT_146890d78 == 0) {
    FUN_141786a30(&DAT_146890d78,&PTR_FUN_1463c0f30);
  }
  return DAT_146890d78;
}



// FUNCTION 14140fda0 FUN_14140fda0 body=47 status=ok
// SIG undefined FUN_14140fda0(void)

longlong FUN_14140fda0(void)

{
  if (DAT_146890d80 == 0) {
    FUN_141786a30(&DAT_146890d80,&PTR_FUN_1463c0fb0);
  }
  return DAT_146890d80;
}



// FUNCTION 14140fdd0 FUN_14140fdd0 body=47 status=ok
// SIG undefined FUN_14140fdd0(void)

longlong FUN_14140fdd0(void)

{
  if (DAT_146890d88 == 0) {
    FUN_141786a30(&DAT_146890d88,&PTR_FUN_1463c0ff0);
  }
  return DAT_146890d88;
}



// FUNCTION 14140fe00 FUN_14140fe00 body=47 status=ok
// SIG undefined FUN_14140fe00(void)

longlong FUN_14140fe00(void)

{
  if (DAT_146890d90 == 0) {
    FUN_141786a30(&DAT_146890d90,&PTR_FUN_1463c1100);
  }
  return DAT_146890d90;
}



// FUNCTION 14140fe30 FUN_14140fe30 body=47 status=ok
// SIG undefined FUN_14140fe30(void)

longlong FUN_14140fe30(void)

{
  if (DAT_146890d98 == 0) {
    FUN_141786a30(&DAT_146890d98,&PTR_FUN_1463c1200);
  }
  return DAT_146890d98;
}



// FUNCTION 14140fe70 FUN_14140fe70 body=53 status=ok
// SIG undefined FUN_14140fe70(void)

void FUN_14140fe70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144a35fb0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14140feb0 FUN_14140feb0 body=53 status=ok
// SIG undefined FUN_14140feb0(void)

void FUN_14140feb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2c;
    *puVar1 = &PTR_FUN_144a360c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14140fef0 FUN_14140fef0 body=53 status=ok
// SIG undefined FUN_14140fef0(void)

void FUN_14140fef0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144a361e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14140ff30 FUN_14140ff30 body=162 status=ok
// SIG undefined FUN_14140ff30(void)

longlong FUN_14140ff30(void)

{
  if (DAT_146890ae8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakClassModInventoryBalanceStateComponent",&DAT_146890ae8,
                  FUN_140447710,0x3c0,0x10000000,0,L"Engine",&LAB_1414115b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14142bde0,&LAB_140447700,0);
  }
  return DAT_146890ae8;
}



// FUNCTION 14140ffe0 FUN_14140ffe0 body=162 status=ok
// SIG undefined FUN_14140ffe0(void)

longlong FUN_14140ffe0(void)

{
  if (DAT_146890b28 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCondition_Grenade_Element",&DAT_146890b28,FUN_140447710,
                  0x90,0x10000000,0,L"Engine",FUN_141411630,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146890b28;
}



// FUNCTION 1414100a0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Sequence::StaticClass(void)

{
  if (DAT_146890b38 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCondition_IronBearOwner_TestModsSlotted",&DAT_146890b38,
                  FUN_140447710,0xc0,0x10000000,0,L"Engine",FUN_1414116a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146890b38;
}



// FUNCTION 141410160 FUN_141410160 body=47 status=ok
// SIG undefined FUN_141410160(void)

longlong FUN_141410160(void)

{
  if (DAT_146890a10 == 0) {
    FUN_141786440(&DAT_146890a10,&PTR_thunk_FUN_141412a50_144a2d400);
  }
  return DAT_146890a10;
}



// FUNCTION 141410190 FUN_141410190 body=47 status=ok
// SIG undefined FUN_141410190(void)

longlong FUN_141410190(void)

{
  if (DAT_146890a00 == 0) {
    FUN_141786a30(&DAT_146890a00,&PTR_FUN_1463bca40);
  }
  return DAT_146890a00;
}



// FUNCTION 1414101c0 FUN_1414101c0 body=47 status=ok
// SIG undefined FUN_1414101c0(void)

longlong FUN_1414101c0(void)

{
  if (DAT_146890a08 == 0) {
    FUN_141786a30(&DAT_146890a08,&PTR_FUN_1463bca80);
  }
  return DAT_146890a08;
}



// FUNCTION 141410200 FUN_141410200 body=162 status=ok
// SIG undefined FUN_141410200(void)

longlong FUN_141410200(void)

{
  if (DAT_146890b48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCondition_IsCharacterFrozen",&DAT_146890b48,FUN_140447710,
                  0x88,0x10000000,0,L"Engine",FUN_141411710,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146890b48;
}



// FUNCTION 1414102c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGAreaEffectActor::GetPrivateStaticClass(void)

{
  if (DAT_146890a98 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCinematicBrain",&DAT_146890a98,FUN_141412d80,0x4e8,
                  0x10000000,0,L"Engine",&LAB_1414114a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407b7f50,&LAB_140447700,0);
  }
  return DAT_146890a98;
}



// FUNCTION 141410380 FUN_141410380 body=162 status=ok
// SIG undefined FUN_141410380(void)

longlong FUN_141410380(void)

{
  if (DAT_146890b58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCondition_IsInHostileVehicle",&DAT_146890b58,FUN_140447710
                  ,0x88,0x10000000,0,L"Engine",FUN_141411770,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146890b58;
}



// FUNCTION 141410430 FUN_141410430 body=162 status=ok
// SIG undefined FUN_141410430(void)

longlong FUN_141410430(void)

{
  if (DAT_146890c78 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDamageBasedChallenge",&DAT_146890c78,FUN_140447710,0x288,
                  0x10000000,0,L"Engine",FUN_141411b00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1413f2350,&LAB_140447700,0);
  }
  return DAT_146890c78;
}



// FUNCTION 1414104f0 FUN_1414104f0 body=47 status=ok
// SIG undefined FUN_1414104f0(void)

longlong FUN_1414104f0(void)

{
  if (DAT_146890a90 == 0) {
    FUN_141786440(&DAT_146890a90,&PTR_GetPrivateStaticClass_144a2eb00);
  }
  return DAT_146890a90;
}



// FUNCTION 141410520 FUN_141410520 body=47 status=ok
// SIG undefined FUN_141410520(void)

longlong FUN_141410520(void)

{
  if (DAT_146890a40 == 0) {
    FUN_141786a30(&DAT_146890a40,&PTR_FUN_1463bcd60);
  }
  return DAT_146890a40;
}



// FUNCTION 141410550 FUN_141410550 body=47 status=ok
// SIG undefined FUN_141410550(void)

longlong FUN_141410550(void)

{
  if (DAT_146890a48 == 0) {
    FUN_141786a30(&DAT_146890a48,&PTR_FUN_1463bcde0);
  }
  return DAT_146890a48;
}



// FUNCTION 141410580 FUN_141410580 body=47 status=ok
// SIG undefined FUN_141410580(void)

longlong FUN_141410580(void)

{
  if (DAT_146890a50 == 0) {
    FUN_141786a30(&DAT_146890a50,&PTR_FUN_1463bce20);
  }
  return DAT_146890a50;
}



// FUNCTION 1414105b0 FUN_1414105b0 body=47 status=ok
// SIG undefined FUN_1414105b0(void)

longlong FUN_1414105b0(void)

{
  if (DAT_146890a58 == 0) {
    FUN_141786a30(&DAT_146890a58,&PTR_FUN_1463bce60);
  }
  return DAT_146890a58;
}



// FUNCTION 1414105e0 FUN_1414105e0 body=47 status=ok
// SIG undefined FUN_1414105e0(void)

longlong FUN_1414105e0(void)

{
  if (DAT_146890a60 == 0) {
    FUN_141786a30(&DAT_146890a60,&PTR_FUN_1463bcea0);
  }
  return DAT_146890a60;
}



// FUNCTION 141410610 FUN_141410610 body=47 status=ok
// SIG undefined FUN_141410610(void)

longlong FUN_141410610(void)

{
  if (DAT_146890a68 == 0) {
    FUN_141786a30(&DAT_146890a68,&PTR_FUN_1463bcf20);
  }
  return DAT_146890a68;
}



// FUNCTION 141410640 FUN_141410640 body=47 status=ok
// SIG undefined FUN_141410640(void)

longlong FUN_141410640(void)

{
  if (DAT_146890a70 == 0) {
    FUN_141786a30(&DAT_146890a70,&PTR_FUN_1463bcfa0);
  }
  return DAT_146890a70;
}



// FUNCTION 141410670 FUN_141410670 body=47 status=ok
// SIG undefined FUN_141410670(void)

longlong FUN_141410670(void)

{
  if (DAT_146890a78 == 0) {
    FUN_141786a30(&DAT_146890a78,&PTR_FUN_1463bcfe0);
  }
  return DAT_146890a78;
}



// FUNCTION 1414106a0 FUN_1414106a0 body=47 status=ok
// SIG undefined FUN_1414106a0(void)

longlong FUN_1414106a0(void)

{
  if (DAT_146890a80 == 0) {
    FUN_141786a30(&DAT_146890a80,&PTR_FUN_1463bd020);
  }
  return DAT_146890a80;
}



// FUNCTION 1414106d0 FUN_1414106d0 body=47 status=ok
// SIG undefined FUN_1414106d0(void)

longlong FUN_1414106d0(void)

{
  if (DAT_146890a88 == 0) {
    FUN_141786a30(&DAT_146890a88,&PTR_FUN_1463bd0a0);
  }
  return DAT_146890a88;
}



// FUNCTION 141410710 FUN_141410710 body=53 status=ok
// SIG undefined FUN_141410710(void)

void FUN_141410710(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_144a34070;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141410750 FUN_141410750 body=162 status=ok
// SIG undefined FUN_141410750(void)

longlong FUN_141410750(void)

{
  if (DAT_146890b70 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCondition_MayhemMode",&DAT_146890b70,FUN_140447710,200,
                  0x10000000,0,L"Engine",FUN_1414117d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146890b70;
}



// FUNCTION 141410800 FUN_141410800 body=53 status=ok
// SIG undefined FUN_141410800(void)

void FUN_141410800(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144a34188;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141410850 FUN_141410850 body=162 status=ok
// SIG undefined FUN_141410850(void)

longlong FUN_141410850(void)

{
  if (DAT_146890b80 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCondition_TeamworkDreamwork",&DAT_146890b80,FUN_140447710,
                  0x88,0x10000000,0,L"Engine",FUN_141411860,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146890b80;
}



// FUNCTION 141410920 FUN_141410920 body=162 status=ok
// SIG undefined FUN_141410920(void)

longlong FUN_141410920(void)

{
  if (DAT_146890b90 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCondition_VehicleIsDrivenByAI",&DAT_146890b90,
                  FUN_140447710,0x88,0x10000000,0,L"Engine",FUN_1414118c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146890b90;
}



// FUNCTION 1414109f0 FUN_1414109f0 body=162 status=ok
// SIG undefined FUN_1414109f0(void)

longlong FUN_1414109f0(void)

{
  if (DAT_146890ab8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCinematicBrainData",&DAT_146890ab8,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",FUN_141411550,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146890ab8;
}



// FUNCTION 141410aa0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleModuleTypeDataBeam2::GetPrivateStaticClass(void)

{
  if (DAT_146890c48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCustomizationData",&DAT_146890c48,FUN_140447710,0x168,
                  0x10000000,0,L"Engine",FUN_141411ac0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e498a0,&LAB_140447700,0);
  }
  return DAT_146890c48;
}



// FUNCTION 141410b50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCircularThrobber::GetPrivateStaticClass(void)

{
  if (DAT_146890c58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ECHOThemeCustomizationData",&DAT_146890c58,FUN_140447710,
                  0x1b8,0x10000000,0,L"Engine",FUN_141411500,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UParticleModuleTypeDataBeam2::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146890c58;
}



// FUNCTION 141410c00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AInteractiveFoliageActor::GetPrivateStaticClass(void)

{
  if (DAT_146890c18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCustomizationComponent",&DAT_146890c18,
                  StaticRegisterNativesAInteractiveFoliageActor,0x3a0,0x10000000,0,L"Engine",
                  InternalConstructor<USimpleWheeledVehicleMovementComponent>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141412d40,&LAB_140447700,0);
  }
  return DAT_146890c18;
}



// FUNCTION 141410cb0 FUN_141410cb0 body=162 status=ok
// SIG undefined FUN_141410cb0(void)

longlong FUN_141410cb0(void)

{
  if (DAT_146890ba0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakControlledMove",&DAT_146890ba0,FUN_140447710,0x8a8,
                  0x10000000,0,L"Engine",&LAB_141411920,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e07420,&LAB_140447700,0);
  }
  return DAT_146890ba0;
}



// FUNCTION 141410d60 FUN_141410d60 body=53 status=ok
// SIG undefined FUN_141410d60(void)

void FUN_141410d60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_144a32490;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141410da0 FUN_141410da0 body=47 status=ok
// SIG undefined FUN_141410da0(void)

longlong FUN_141410da0(void)

{
  if (DAT_146890b98 == 0) {
    FUN_141786440(&DAT_146890b98,&PTR_FUN_144a2f110);
  }
  return DAT_146890b98;
}



// FUNCTION 141410df0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APostProcessVolume::GetPrivateStaticClass(void)

{
  if (DAT_146890bb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakControlledMove_ActionAbility",&DAT_146890bb8,FUN_140447710
                  ,0x8b0,0x10000000,0,L"Engine",FUN_141411940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141410cb0,&LAB_140447700,0);
  }
  return DAT_146890bb8;
}



// FUNCTION 141410ea0 FUN_141410ea0 body=47 status=ok
// SIG undefined FUN_141410ea0(void)

longlong FUN_141410ea0(void)

{
  if (DAT_146890bb0 == 0) {
    FUN_141786440(&DAT_146890bb0,&PTR_GetPrivateStaticClass_144a2f490);
  }
  return DAT_146890bb0;
}



// FUNCTION 141410ed0 FUN_141410ed0 body=47 status=ok
// SIG undefined FUN_141410ed0(void)

longlong FUN_141410ed0(void)

{
  if (DAT_146890ba8 == 0) {
    FUN_141786a30(&DAT_146890ba8,&PTR_FUN_1463be2e0);
  }
  return DAT_146890ba8;
}



// FUNCTION 141410f00 FUN_141410f00 body=162 status=ok
// SIG undefined FUN_141410f00(void)

longlong FUN_141410f00(void)

{
  if (DAT_146890ac8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCinematicModeData",&DAT_146890ac8,FUN_140447710,0x68,
                  0x10000000,0,L"Engine",&LAB_141411590,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e03740,&LAB_140447700,0);
  }
  return DAT_146890ac8;
}



// FUNCTION 141410fb0 FUN_141410fb0 body=47 status=ok
// SIG undefined FUN_141410fb0(void)

longlong FUN_141410fb0(void)

{
  if (DAT_146890c10 == 0) {
    FUN_141786440(&DAT_146890c10,&PTR_GetPrivateStaticClass_144a2f800);
  }
  return DAT_146890c10;
}



// FUNCTION 141410fe0 FUN_141410fe0 body=47 status=ok
// SIG undefined FUN_141410fe0(void)

longlong FUN_141410fe0(void)

{
  if (DAT_146890c08 == 0) {
    FUN_141786a30(&DAT_146890c08,&PTR_FUN_1463bee40);
  }
  return DAT_146890c08;
}



// FUNCTION 141411030 FUN_141411030 body=47 status=ok
// SIG undefined FUN_141411030(void)

longlong FUN_141411030(void)

{
  if (DAT_146890c40 == 0) {
    FUN_141786440(&DAT_146890c40,&PTR_GetPrivateStaticClass_144a30b00);
  }
  return DAT_146890c40;
}



// FUNCTION 141411060 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong AUGFlyingMageAIController::StaticClass(void)

{
  if (DAT_146890bd0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakControlledMove_PhaseLock",&DAT_146890bd0,FUN_141412db0,
                  0xa68,0x10000000,0,L"Engine",FUN_141411970,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141410cb0,&LAB_140447700,0);
  }
  return DAT_146890bd0;
}



// FUNCTION 141411120 FUN_141411120 body=162 status=ok
// SIG undefined FUN_141411120(void)

longlong FUN_141411120(void)

{
  if (DAT_146890ad8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCinematicTag",&DAT_146890ad8,FUN_140447710,0x30,0x10000000
                  ,0,L"Engine",FUN_1405fc740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146890ad8;
}



// FUNCTION 1414111d0 FUN_1414111d0 body=47 status=ok
// SIG undefined FUN_1414111d0(void)

longlong FUN_1414111d0(void)

{
  if (DAT_146890bc8 == 0) {
    FUN_141786440(&DAT_146890bc8,&PTR_StaticClass_144a30230);
  }
  return DAT_146890bc8;
}



// FUNCTION 141411200 FUN_141411200 body=47 status=ok
// SIG undefined FUN_141411200(void)

longlong FUN_141411200(void)

{
  if (DAT_146890bc0 == 0) {
    FUN_141786a30(&DAT_146890bc0,&PTR_FUN_1463be3d0);
  }
  return DAT_146890bc0;
}



// FUNCTION 141411240 FUN_141411240 body=53 status=ok
// SIG undefined FUN_141411240(void)

void FUN_141411240(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144a34c98;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141411280 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGWallBladeTrap::GetPrivateStaticClass(void)

{
  if (DAT_146890cb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDamageCauserComponent",&DAT_146890cb8,FUN_141412e10,1000,
                  0x10000000,0,L"Engine",&LAB_141411b50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e0a580,&LAB_140447700,0);
  }
  return DAT_146890cb8;
}



// FUNCTION 141411360 FUN_141411360 body=47 status=ok
// SIG undefined FUN_141411360(void)

longlong FUN_141411360(void)

{
  if (DAT_146890c80 == 0) {
    FUN_141786a30(&DAT_146890c80,&PTR_FUN_1463bf7a0);
  }
  return DAT_146890c80;
}



// FUNCTION 141411390 FUN_141411390 body=47 status=ok
// SIG undefined FUN_141411390(void)

longlong FUN_141411390(void)

{
  if (DAT_146890cb0 == 0) {
    FUN_141786440(&DAT_146890cb0,&PTR_GetPrivateStaticClass_144a2b6f0);
  }
  return DAT_146890cb0;
}



// FUNCTION 1414113c0 FUN_1414113c0 body=47 status=ok
// SIG undefined FUN_1414113c0(void)

longlong FUN_1414113c0(void)

{
  if (DAT_146890c98 == 0) {
    FUN_141786a30(&DAT_146890c98,&PTR_FUN_1463bf9b0);
  }
  return DAT_146890c98;
}



// FUNCTION 1414113f0 FUN_1414113f0 body=47 status=ok
// SIG undefined FUN_1414113f0(void)

longlong FUN_1414113f0(void)

{
  if (DAT_146890ca0 == 0) {
    FUN_141786a30(&DAT_146890ca0,&PTR_FUN_1463bfa80);
  }
  return DAT_146890ca0;
}



// FUNCTION 141411420 FUN_141411420 body=47 status=ok
// SIG undefined FUN_141411420(void)

longlong FUN_141411420(void)

{
  if (DAT_146890ca8 == 0) {
    FUN_141786a30(&DAT_146890ca8,&PTR_FUN_1463bfb40);
  }
  return DAT_146890ca8;
}



// FUNCTION 141411450 FUN_141411450 body=53 status=ok
// SIG undefined FUN_141411450(void)

void FUN_141411450(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144a35e28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414114c0 FUN_1414114c0 body=63 status=ok
// SIG undefined FUN_1414114c0(void)

void FUN_1414114c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14221fbd0(puVar1,param_1);
    puVar1[0x8b] = 0;
    puVar1[0x8c] = 0;
    *(undefined1 *)(puVar1 + 0x8d) = 0;
    *puVar1 = &PTR_FUN_144a35498;
  }
  return;
}



// FUNCTION 141411500 FUN_141411500 body=74 status=ok
// SIG undefined FUN_141411500(void)

void FUN_141411500(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142d0be80(puVar1,param_1);
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    *puVar1 = &PTR_FUN_144a34558;
    FText::FText(puVar1 + 0x2d);
    return;
  }
  return;
}



// FUNCTION 141411550 FUN_141411550 body=51 status=ok
// SIG undefined FUN_141411550(void)

void FUN_141411550(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a32210;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 141411630 FUN_141411630 body=97 status=ok
// SIG undefined FUN_141411630(void)

void FUN_141411630(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x29) = 3;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
    *puVar1 = &PTR__scalar_deleting_destructor__144a325a8;
    puVar1[0x11] = 0;
  }
  return;
}



// FUNCTION 1414116a0 FUN_1414116a0 body=111 status=ok
// SIG undefined FUN_1414116a0(void)

void FUN_1414116a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x29) = 3;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
    *puVar1 = &PTR_FUN_144a32830;
    puVar1[0x11] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
  }
  return;
}



// FUNCTION 141411710 FUN_141411710 body=90 status=ok
// SIG undefined FUN_141411710(void)

void FUN_141411710(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x29) = 3;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144a32ab8;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 141411770 FUN_141411770 body=90 status=ok
// SIG undefined FUN_141411770(void)

void FUN_141411770(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x29) = 3;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144a32d40;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 1414117d0 FUN_1414117d0 body=141 status=ok
// SIG undefined FUN_1414117d0(void)

void FUN_1414117d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x29) = 3;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
    *puVar1 = &PTR_FUN_144a32fc8;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0x3f800000;
  }
  return;
}



// FUNCTION 141411860 FUN_141411860 body=90 status=ok
// SIG undefined FUN_141411860(void)

void FUN_141411860(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x29) = 3;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144a33270;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 1414118c0 FUN_1414118c0 body=90 status=ok
// SIG undefined FUN_1414118c0(void)

void FUN_1414118c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x29) = 3;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144a334f8;
    *(undefined4 *)(puVar1 + 0x10) = 0xbf800000;
  }
  return;
}



// FUNCTION 141411940 FUN_141411940 body=41 status=ok
// SIG undefined FUN_141411940(void)

void FUN_141411940(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140a50b10(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144a33780;
  }
  return;
}



// FUNCTION 141411970 FUN_141411970 body=190 status=ok
// SIG undefined FUN_141411970(void)

void FUN_141411970(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140a50b10(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a33a58;
    puVar1[0x115] = &PTR_LAB_144a33d30;
    FUN_142c8c260(puVar1 + 0x116,0x43480000);
    FRuntimeFloatCurve::FRuntimeFloatCurve(puVar1 + 0x11d);
    FRuntimeFloatCurve::FRuntimeFloatCurve(puVar1 + 300);
    puVar1[0x13b] = 0;
    *(undefined4 *)(puVar1 + 0x13c) = 0x3fa66666;
    *(undefined4 *)((longlong)puVar1 + 0x9e4) = 0x3f000000;
    *(undefined4 *)(puVar1 + 0x13d) = 0x41f00000;
    *(undefined4 *)((longlong)puVar1 + 0x9ec) = 0x41a00000;
    FName::FName(puVar1 + 0x13e,L"Root",1);
    puVar1[0x140] = 0;
  }
  return;
}



// FUNCTION 141411a30 FUN_141411a30 body=55 status=ok
// SIG undefined FUN_141411a30(void)

void FUN_141411a30(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140a50b10(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a33d68;
    puVar1[0x115] = &PTR_LAB_144a34040;
  }
  return;
}



// FUNCTION 141411a70 InternalConstructor<USimpleWheeledVehicleMovementComponent> body=66 status=ok
// SIG undefined InternalConstructor<USimpleWheeledVehicleMovementComponent>(void)

void InternalConstructor<USimpleWheeledVehicleMovementComponent>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142d0bc90(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144a34810;
    puVar1[5] = &PTR_LAB_144a34c40;
    puVar1[0x2f] = &PTR_LAB_144a34c70;
  }
  return;
}



// FUNCTION 141411ac0 FUN_141411ac0 body=57 status=ok
// SIG undefined FUN_141411ac0(void)

void FUN_141411ac0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142d0be80(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a342a0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
  }
  return;
}



// FUNCTION 141411b00 FUN_141411b00 body=77 status=ok
// SIG undefined FUN_141411b00(void)

void FUN_141411b00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413f3370(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144a35b80;
    puVar1[0x4c] = 0;
    puVar1[0x4d] = 0;
    puVar1[0x4e] = 0;
    puVar1[0x4f] = 0;
    *(undefined4 *)(puVar1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 141411b90 FUN_141411b90 body=100 status=ok
// SIG undefined FUN_141411b90(void)

void FUN_141411b90(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 141411c00 FUN_141411c00 body=182 status=ok
// SIG undefined FUN_141411c00(void)

void FUN_141411c00(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x28);
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar7 + 1);
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
      if (plVar7[-3] != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 8;
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



// FUNCTION 141411cc0 FUN_141411cc0 body=545 status=ok
// SIG undefined FUN_141411cc0(void)

void FUN_141411cc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  *(undefined4 *)(param_1 + 0x390) = 0;
  if (*(longlong *)(param_1 + 0x388) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x348);
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x308);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2f0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2d8);
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FMemory::Free();
  }
  iVar7 = *(int *)(param_1 + 0x2b8);
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  if (iVar7 != 0) {
    do {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    plVar6 = *(longlong **)(param_1 + 0x2b0);
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x290) = 0;
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1f0);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  FUN_141411b90(param_1 + 0x1a0);
  FUN_141411b90(param_1 + 400);
  iVar7 = *(int *)(param_1 + 0x188);
  plVar6 = *(longlong **)(param_1 + 0x180);
  if (iVar7 != 0) {
    do {
      plVar4 = (longlong *)plVar6[5];
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
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 7;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    plVar6 = *(longlong **)(param_1 + 0x180);
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 141411ef0 FUN_141411ef0 body=177 status=ok
// SIG undefined FUN_141411ef0(void)

void FUN_141411ef0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x230);
  iVar2 = *(int *)(param_1 + 0x238);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FUN_1413f34f0(lVar1);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x230);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  FUN_1413f34f0(param_1 + 0x220);
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  FUN_1413f36b0(param_1);
  return;
}



// FUNCTION 141411fe0 FUN_141411fe0 body=67 status=ok
// SIG undefined FUN_141411fe0(void)

longlong FUN_141411fe0(longlong param_1,ulonglong param_2)

{
  FUN_141411c00(param_1 + 0x458);
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 141412030 FUN_141412030 body=152 status=ok
// SIG undefined FUN_141412030(void)

longlong FUN_141412030(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x170);
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
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  FUN_140a51930(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 1414120d0 FUN_1414120d0 body=116 status=ok
// SIG undefined FUN_1414120d0(void)

longlong FUN_1414120d0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != 0) {
    puVar1 = (undefined8 *)(lVar2 + 0x38);
    do {
      *puVar1 = &PTR_FUN_1441d26b8;
      puVar1 = puVar1 + 0xd;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141412150 FUN_141412150 body=113 status=ok
// SIG undefined FUN_141412150(void)

longlong FUN_141412150(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1414121d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UUGGameInstance::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140a51490();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8b0);
  }
  return param_1;
}



// FUNCTION 141412210 FUN_141412210 body=93 status=ok
// SIG undefined FUN_141412210(void)

longlong FUN_141412210(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x960);
  FRichCurve::~FRichCurve(param_1 + 0x8e8);
  *(undefined ***)(param_1 + 0x8a8) = &PTR_FUN_144191f28;
  FUN_140a51490(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa68);
  }
  return param_1;
}



// FUNCTION 141412270 FUN_141412270 body=66 status=ok
// SIG undefined FUN_141412270(void)

longlong FUN_141412270(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x8a8) = &PTR_FUN_1441b56f0;
  FUN_140a51490();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8c0);
  }
  return param_1;
}



// FUNCTION 1414122c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FComboButtonStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141411cc0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a0);
  }
  return param_1;
}



// FUNCTION 141412300 FUN_141412300 body=73 status=ok
// SIG undefined FUN_141412300(void)

longlong FUN_141412300(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  FUN_140a51930(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 141412350 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGridPathFollowingComponent::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  FUN_141411ef0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x288);
  }
  return param_1;
}



// FUNCTION 1414123b0 FUN_1414123b0 body=75 status=ok
// SIG undefined FUN_1414123b0(void)

void FUN_1414123b0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x68);
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined **)((longlong)param_2 + 0x38) = &DAT_1441d2800;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  return;
}



// FUNCTION 141412400 FUN_141412400 body=103 status=ok
// SIG undefined FUN_141412400(void)

void FUN_141412400(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  return;
}



// FUNCTION 1414124c0 FUN_1414124c0 body=58 status=ok
// SIG undefined FUN_1414124c0(void)

void FUN_1414124c0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined1 *)((longlong)param_2 + 0x28) = 0xff;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined1 *)((longlong)param_2 + 0x50) = 0xff;
  return;
}



// FUNCTION 141412610 FUN_141412610 body=488 status=ok
// SIG undefined FUN_141412610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141412610(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_4 != 0) {
    plVar8 = (longlong *)(param_3 + 0x48);
    do {
      local_58 = param_2 + 0xb;
      *param_2 = plVar8[-9];
      plVar1 = param_2 + 3;
      param_2[1] = plVar8[-8];
      *(char *)(param_2 + 2) = (char)plVar8[-7];
      *(undefined1 *)((longlong)param_2 + 0x11) = *(undefined1 *)((longlong)plVar8 + -0x37);
      if (plVar1 != plVar8 + -6) {
        plVar4 = (longlong *)*plVar1;
        for (iVar6 = (int)param_2[4]; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 4;
        }
        iVar6 = (int)plVar8[-5];
        lVar3 = plVar8[-6];
        *(int *)(param_2 + 4) = iVar6;
        if ((iVar6 == 0) && (*(int *)((longlong)param_2 + 0x24) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x24) = 0;
        }
        else {
          TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
          lVar7 = *plVar1;
          if (iVar6 != 0) {
            puVar5 = (undefined8 *)(lVar3 + 0x18);
            do {
              FString::FString(lVar7,puVar5 + -3);
              *(undefined8 *)(lVar7 + 0x10) = puVar5[-1];
              *(undefined8 *)(lVar7 + 0x18) = *puVar5;
              lVar7 = lVar7 + 0x20;
              iVar6 = iVar6 + -1;
              puVar5 = puVar5 + 4;
            } while (iVar6 != 0);
          }
        }
      }
      plVar1 = param_2 + 8;
      *(char *)(param_2 + 5) = (char)plVar8[-4];
      param_2[6] = plVar8[-3];
      param_2[7] = plVar8[-2];
      plVar4 = (longlong *)*plVar8;
      lVar3 = plVar8[-1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      local_68 = lVar3;
      plStack_60 = plVar4;
      if (&local_68 != plVar1) {
        local_68 = *plVar1;
        plStack_60 = (longlong *)param_2[9];
        *plVar1 = lVar3;
        param_2[9] = (longlong)plVar4;
        local_50 = lVar3;
        plStack_48 = plVar4;
      }
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plStack_60 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
      plVar1 = plVar8 + 1;
      plVar8 = plVar8 + 0xb;
      *(char *)(param_2 + 10) = (char)*plVar1;
      param_4 = param_4 + -1;
      param_2 = local_58;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141412800 Copy body=107 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FGameplayAttribute>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x18);
    do {
      FString::operator=(puVar1 + -3,param_3 + -0x18 + (longlong)puVar1);
      puVar1[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1 = puVar1 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141412870 FUN_141412870 body=128 status=ok
// SIG undefined FUN_141412870(void)

undefined8 FUN_141412870(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x10);
    do {
      *(undefined1 *)(puVar1 + -4) = *(undefined1 *)(param_3 + -0x10 + (longlong)puVar1);
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar1);
      FSoftObjectPath::operator=(puVar1 + 2,&local_28);
      puVar1 = puVar1 + 0xc;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141412900 FUN_141412900 body=124 status=ok
// SIG undefined FUN_141412900(void)

void FUN_141412900(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = *(longlong **)(param_2 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  iVar3 = *(int *)(param_2 + 0x20);
  plVar2 = *(longlong **)(param_2 + 0x18);
  if (iVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = *(longlong **)(param_2 + 0x18);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 141412980 FUN_141412980 body=55 status=ok
// SIG undefined FUN_141412980(void)

void FUN_141412980(void)

{
  undefined8 uVar1;
  
  if (DAT_1468908a8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468908a8 = GetStaticEnum(FUN_141413800,uVar1,L"ECinematicState");
  }
  return;
}



// FUNCTION 1414129c0 FUN_1414129c0 body=55 status=ok
// SIG undefined FUN_1414129c0(void)

void FUN_1414129c0(void)

{
  undefined8 uVar1;
  
  if (DAT_1468908a0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468908a0 = GetStaticEnum(FUN_141413830,uVar1,L"EHealthTypeState");
  }
  return;
}



// FUNCTION 141412a00 FUN_141412a00 body=55 status=ok
// SIG undefined FUN_141412a00(void)

void FUN_141412a00(void)

{
  undefined8 uVar1;
  
  if (DAT_1468908b0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468908b0 = GetStaticEnum(FUN_141413860,uVar1,L"EOakMayhemModeConditionType");
  }
  return;
}



// FUNCTION 141412a50 FUN_141412a50 body=162 status=ok
// SIG undefined FUN_141412a50(void)

longlong FUN_141412a50(void)

{
  if (DAT_146890a18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCinematicActor",&DAT_146890a18,FUN_141412d50,0x4b8,
                  0x10000001,0,L"Engine",&LAB_141411490,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146890a18;
}



// FUNCTION 141412b00 FUN_141412b00 body=6 status=ok
// SIG undefined FUN_141412b00(void)

undefined8 FUN_141412b00(void)

{
  return 0x2044b0e9;
}



// FUNCTION 141412b10 FUN_141412b10 body=6 status=ok
// SIG undefined FUN_141412b10(void)

undefined8 FUN_141412b10(void)

{
  return 0x58ac8cee;
}



// FUNCTION 141412b20 FUN_141412b20 body=6 status=ok
// SIG undefined FUN_141412b20(void)

undefined8 FUN_141412b20(void)

{
  return 0xc6a29137;
}



// FUNCTION 141412b30 FUN_141412b30 body=6 status=ok
// SIG undefined FUN_141412b30(void)

undefined8 FUN_141412b30(void)

{
  return 0x83fd4fbb;
}



// FUNCTION 141412b40 FUN_141412b40 body=6 status=ok
// SIG undefined FUN_141412b40(void)

undefined8 FUN_141412b40(void)

{
  return 0x15fc1503;
}



// FUNCTION 141412b50 FUN_141412b50 body=6 status=ok
// SIG undefined FUN_141412b50(void)

undefined8 FUN_141412b50(void)

{
  return 0x9f6f10ee;
}



// FUNCTION 141412b60 FUN_141412b60 body=6 status=ok
// SIG undefined FUN_141412b60(void)

undefined8 FUN_141412b60(void)

{
  return 0xac4c56b7;
}



// FUNCTION 141412b70 FUN_141412b70 body=6 status=ok
// SIG undefined FUN_141412b70(void)

undefined8 FUN_141412b70(void)

{
  return 0xe02aa530;
}



// FUNCTION 141412b80 FUN_141412b80 body=6 status=ok
// SIG undefined FUN_141412b80(void)

undefined8 FUN_141412b80(void)

{
  return 0xea583111;
}



// FUNCTION 141412b90 FUN_141412b90 body=6 status=ok
// SIG undefined FUN_141412b90(void)

undefined8 FUN_141412b90(void)

{
  return 0x4aed5452;
}



// FUNCTION 141412ba0 FUN_141412ba0 body=6 status=ok
// SIG undefined FUN_141412ba0(void)

undefined8 FUN_141412ba0(void)

{
  return 0x1260edfb;
}



// FUNCTION 141412bb0 FUN_141412bb0 body=6 status=ok
// SIG undefined FUN_141412bb0(void)

undefined8 FUN_141412bb0(void)

{
  return 0xc09da820;
}



// FUNCTION 141412cb0 FUN_141412cb0 body=57 status=ok
// SIG undefined FUN_141412cb0(void)

void FUN_141412cb0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468909b0);
                    /* WARNING: Could not recover jumptable at 0x000141412ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141412d00 thunk_FUN_142e03740 body=5 status=ok
// SIG undefined thunk_FUN_142e03740(void)

void thunk_FUN_142e03740(void)

{
  FUN_142e03740();
  return;
}



// FUNCTION 141412d10 thunk_FUN_142e07420 body=5 status=ok
// SIG undefined thunk_FUN_142e07420(void)

void thunk_FUN_142e07420(void)

{
  FUN_142e07420();
  return;
}



// FUNCTION 141412d20 thunk_FUN_142e0a580 body=5 status=ok
// SIG undefined thunk_FUN_142e0a580(void)

void thunk_FUN_142e0a580(void)

{
  FUN_142e0a580();
  return;
}



// FUNCTION 141412d50 FUN_141412d50 body=34 status=ok
// SIG undefined FUN_141412d50(void)

void FUN_141412d50(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141412a50();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddSlaveViewLocation_144a32120,2);
  return;
}



// FUNCTION 141412d80 FUN_141412d80 body=34 status=ok
// SIG undefined FUN_141412d80(void)

void FUN_141412d80(void)

{
  undefined8 uVar1;
  
  uVar1 = AUGAreaEffectActor::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnIntroComplete_144a32170,10);
  return;
}



// FUNCTION 141412db0 FUN_141412db0 body=34 status=ok
// SIG undefined FUN_141412db0(void)

void FUN_141412db0(void)

{
  undefined8 uVar1;
  
  uVar1 = AUGFlyingMageAIController::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetSuperSkunkworksReplicationDat_144a33d58,1);
  return;
}



// FUNCTION 141412de0 StaticRegisterNativesAInteractiveFoliageActor body=34 status=ok
// SIG undefined StaticRegisterNativesAInteractiveFoliageActor(void)

void AInteractiveFoliageActor::StaticRegisterNativesAInteractiveFoliageActor(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetAvailableCustomizationData_144a34c88,1);
  return;
}



// FUNCTION 141412e10 FUN_141412e10 body=34 status=ok
// SIG undefined FUN_141412e10(void)

void FUN_141412e10(void)

{
  undefined8 uVar1;
  
  uVar1 = AUGWallBladeTrap::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_RegisterWeaponShotModifier_144a35f40,3);
  return;
}



// FUNCTION 141412e40 FUN_141412e40 body=34 status=ok
// SIG undefined FUN_141412e40(void)

void FUN_141412e40(void)

{
  undefined8 uVar1;
  
  uVar1 = AGFreezeCharacterCue::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_AddSectionPercentagesAtIndex_144a36300,0xb);
  return;
}



// FUNCTION 141412e70 FUN_141412e70 body=82 status=ok
// SIG undefined FUN_141412e70(void)

void FUN_141412e70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890aa0 == 0) {
    uVar1 = FUN_141412b00();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890aa0 = GetStaticStruct(FUN_141413890,uVar2,L"CinematicData",0x68,uVar1);
  }
  return;
}



// FUNCTION 141412ed0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890a30 == 0) {
    uVar1 = FUN_141412b10();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890a30 = GetStaticStruct(FUN_1414138c0,uVar2,L"CinematicState",0x10,uVar1);
  }
  return;
}



// FUNCTION 141412f30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890d28 == 0) {
    uVar1 = FUN_141412b20();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890d28 = GetStaticStruct(FUN_1414138f0,uVar2,L"DamageBlockEventDetails",0x10,uVar1);
  }
  return;
}



// FUNCTION 141412f90 FUN_141412f90 body=82 status=ok
// SIG undefined FUN_141412f90(void)

void FUN_141412f90(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890d08 == 0) {
    uVar1 = FUN_141412b30();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890d08 = GetStaticStruct(FUN_141413920,uVar2,L"GoreRegionEventSummary",0x2c,uVar1);
  }
  return;
}



// FUNCTION 141412ff0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890d18 == 0) {
    uVar1 = FUN_141412b40();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890d18 = GetStaticStruct(FUN_141413950,uVar2,L"GoreRegionState",0x60,uVar1);
  }
  return;
}



// FUNCTION 141413050 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890d38 == 0) {
    uVar1 = FUN_141412b50();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890d38 = GetStaticStruct(FUN_141413980,uVar2,L"HealthTypeDepletedDetails",0x18,uVar1);
  }
  return;
}



// FUNCTION 1414130b0 FUN_1414130b0 body=82 status=ok
// SIG undefined FUN_1414130b0(void)

void FUN_1414130b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890be8 == 0) {
    uVar1 = FUN_141412b70();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890be8 = GetStaticStruct(FUN_1414139b0,uVar2,L"OakCoordinatedEffectSwitch",0x58,uVar1);
  }
  return;
}



// FUNCTION 141413110 FUN_141413110 body=82 status=ok
// SIG undefined FUN_141413110(void)

void FUN_141413110(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890bf8 == 0) {
    uVar1 = FUN_141412b60();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890bf8 =
         GetStaticStruct(FUN_1414139e0,uVar2,L"OakCoordinatedEffectSwitchState",0x20,uVar1);
  }
  return;
}



// FUNCTION 141413170 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890c20 == 0) {
    uVar1 = FUN_141412b80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890c20 = GetStaticStruct(FUN_141413a10,uVar2,L"OakCustomizationInfo",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414131d0 FUN_1414131d0 body=82 status=ok
// SIG undefined FUN_1414131d0(void)

void FUN_1414131d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890c30 == 0) {
    uVar1 = FUN_141412b90();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890c30 = GetStaticStruct(FUN_141413a40,uVar2,L"OakCustomizationSaveGameData",0x30,uVar1);
  }
  return;
}



// FUNCTION 141413230 FUN_141413230 body=82 status=ok
// SIG undefined FUN_141413230(void)

void FUN_141413230(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890c88 == 0) {
    uVar1 = FUN_141412ba0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890c88 = GetStaticStruct(FUN_141413a70,uVar2,L"RegisteredWeaponShotModifier",0x20,uVar1);
  }
  return;
}



// FUNCTION 141413290 FUN_141413290 body=82 status=ok
// SIG undefined FUN_141413290(void)

void FUN_141413290(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146890cf8 == 0) {
    uVar1 = FUN_141412bb0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146890cf8 =
         GetStaticStruct(FUN_141413aa0,uVar2,L"SecondaryHealthDamageEventDetails",0x38,uVar1);
  }
  return;
}



// FUNCTION 1414132f0 FUN_1414132f0 body=91 status=ok
// SIG undefined FUN_1414132f0(void)

void FUN_1414132f0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_10 = *(undefined4 *)(param_2 + 5);
  local_28 = *(undefined4 *)(param_2 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_20 = *(undefined4 *)(param_2 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar1 = *param_1;
  local_18 = param_2[4];
  uVar2 = FUN_14178ac60((int)local_18,DAT_1468909f8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_38);
  return;
}



// FUNCTION 141413350 FUN_141413350 body=47 status=ok
// SIG undefined FUN_141413350(void)

longlong FUN_141413350(void)

{
  if (DAT_146890c60 == 0) {
    FUN_141786440(&DAT_146890c60,&PTR_GetPrivateStaticClass_144a2b600);
  }
  return DAT_146890c60;
}



// FUNCTION 141413380 FUN_141413380 body=47 status=ok
// SIG undefined FUN_141413380(void)

longlong FUN_141413380(void)

{
  if (DAT_146890c50 == 0) {
    FUN_141786440(&DAT_146890c50,&PTR_GetPrivateStaticClass_144a319e0);
  }
  return DAT_146890c50;
}



// FUNCTION 1414133b0 FUN_1414133b0 body=47 status=ok
// SIG undefined FUN_1414133b0(void)

longlong FUN_1414133b0(void)

{
  if (DAT_146890ab0 == 0) {
    FUN_141786440(&DAT_146890ab0,&PTR_FUN_144a2f260);
  }
  return DAT_146890ab0;
}



// FUNCTION 1414133e0 FUN_1414133e0 body=47 status=ok
// SIG undefined FUN_1414133e0(void)

longlong FUN_1414133e0(void)

{
  if (DAT_146890ac0 == 0) {
    FUN_141786440(&DAT_146890ac0,&PTR_FUN_144a2f780);
  }
  return DAT_146890ac0;
}



// FUNCTION 141413410 FUN_141413410 body=47 status=ok
// SIG undefined FUN_141413410(void)

longlong FUN_141413410(void)

{
  if (DAT_146890ad0 == 0) {
    FUN_141786440(&DAT_146890ad0,&PTR_FUN_144a2fbd0);
  }
  return DAT_146890ad0;
}



// FUNCTION 141413440 FUN_141413440 body=47 status=ok
// SIG undefined FUN_141413440(void)

longlong FUN_141413440(void)

{
  if (DAT_146890ae0 == 0) {
    FUN_141786440(&DAT_146890ae0,&PTR_FUN_144a2cd10);
  }
  return DAT_146890ae0;
}



// FUNCTION 141413470 FUN_141413470 body=47 status=ok
// SIG undefined FUN_141413470(void)

longlong FUN_141413470(void)

{
  if (DAT_146890af0 == 0) {
    FUN_141786440(&DAT_146890af0,&PTR_FUN_144a2b250);
  }
  return DAT_146890af0;
}



// FUNCTION 1414134a0 FUN_1414134a0 body=47 status=ok
// SIG undefined FUN_1414134a0(void)

longlong FUN_1414134a0(void)

{
  if (DAT_146890b00 == 0) {
    FUN_141786440(&DAT_146890b00,&PTR_FUN_144a2bbc0);
  }
  return DAT_146890b00;
}



// FUNCTION 1414134d0 FUN_1414134d0 body=47 status=ok
// SIG undefined FUN_1414134d0(void)

longlong FUN_1414134d0(void)

{
  if (DAT_146890b10 == 0) {
    FUN_141786440(&DAT_146890b10,&PTR_GetPrivateStaticClass_144a2bdd0);
  }
  return DAT_146890b10;
}



// FUNCTION 141413500 FUN_141413500 body=47 status=ok
// SIG undefined FUN_141413500(void)

longlong FUN_141413500(void)

{
  if (DAT_146890b20 == 0) {
    FUN_141786440(&DAT_146890b20,&PTR_FUN_144a2c910);
  }
  return DAT_146890b20;
}



// FUNCTION 141413530 FUN_141413530 body=47 status=ok
// SIG undefined FUN_141413530(void)

longlong FUN_141413530(void)

{
  if (DAT_146890b30 == 0) {
    FUN_141786440(&DAT_146890b30,&PTR_StaticClass_144a2d180);
  }
  return DAT_146890b30;
}



// FUNCTION 141413560 FUN_141413560 body=47 status=ok
// SIG undefined FUN_141413560(void)

longlong FUN_141413560(void)

{
  if (DAT_146890b40 == 0) {
    FUN_141786440(&DAT_146890b40,&PTR_FUN_144a2d9d0);
  }
  return DAT_146890b40;
}



// FUNCTION 141413590 FUN_141413590 body=47 status=ok
// SIG undefined FUN_141413590(void)

longlong FUN_141413590(void)

{
  if (DAT_146890b50 == 0) {
    FUN_141786440(&DAT_146890b50,&PTR_FUN_144a2dcd0);
  }
  return DAT_146890b50;
}



// FUNCTION 1414135c0 FUN_1414135c0 body=47 status=ok
// SIG undefined FUN_1414135c0(void)

longlong FUN_1414135c0(void)

{
  if (DAT_146890b68 == 0) {
    FUN_141786440(&DAT_146890b68,&PTR_FUN_144a2e4b0);
  }
  return DAT_146890b68;
}



// FUNCTION 1414135f0 FUN_1414135f0 body=47 status=ok
// SIG undefined FUN_1414135f0(void)

longlong FUN_1414135f0(void)

{
  if (DAT_146890b78 == 0) {
    FUN_141786440(&DAT_146890b78,&PTR_FUN_144a2e8c0);
  }
  return DAT_146890b78;
}



// FUNCTION 141413620 Z_Construct_UClass_UDaokaCheatManager body=47 status=ok
// SIG undefined Z_Construct_UClass_UDaokaCheatManager(void)

longlong Z_Construct_UClass_UDaokaCheatManager(void)

{
  if (DAT_146890b88 == 0) {
    FUN_141786440(&DAT_146890b88,&PTR_FUN_144a2edc0);
  }
  return DAT_146890b88;
}



// FUNCTION 141413650 FUN_141413650 body=47 status=ok
// SIG undefined FUN_141413650(void)

longlong FUN_141413650(void)

{
  if (DAT_146890bd8 == 0) {
    FUN_141786440(&DAT_146890bd8,&PTR_FUN_144a2ba70);
  }
  return DAT_146890bd8;
}



// FUNCTION 141413680 FUN_141413680 body=47 status=ok
// SIG undefined FUN_141413680(void)

longlong FUN_141413680(void)

{
  if (DAT_146890c70 == 0) {
    FUN_141786440(&DAT_146890c70,&PTR_FUN_144a2e670);
  }
  return DAT_146890c70;
}



// FUNCTION 1414136b0 FUN_1414136b0 body=47 status=ok
// SIG undefined FUN_1414136b0(void)

longlong FUN_1414136b0(void)

{
  if (DAT_146890cc8 == 0) {
    FUN_141786a30(&DAT_146890cc8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463bfe80);
  }
  return DAT_146890cc8;
}



// FUNCTION 1414136e0 FUN_1414136e0 body=47 status=ok
// SIG undefined FUN_1414136e0(void)

longlong FUN_1414136e0(void)

{
  if (DAT_146890cc0 == 0) {
    FUN_141786a30(&DAT_146890cc0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463bfe00);
  }
  return DAT_146890cc0;
}



// FUNCTION 141413710 FUN_141413710 body=47 status=ok
// SIG undefined FUN_141413710(void)

longlong FUN_141413710(void)

{
  if (DAT_146890cd8 == 0) {
    FUN_141786a30(&DAT_146890cd8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463bffc0);
  }
  return DAT_146890cd8;
}



// FUNCTION 141413740 FUN_141413740 body=47 status=ok
// SIG undefined FUN_141413740(void)

longlong FUN_141413740(void)

{
  if (DAT_146890ce8 == 0) {
    FUN_141786a30(&DAT_146890ce8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c01c0);
  }
  return DAT_146890ce8;
}



// FUNCTION 141413770 FUN_141413770 body=47 status=ok
// SIG undefined FUN_141413770(void)

longlong FUN_141413770(void)

{
  if (DAT_146890a20 == 0) {
    FUN_141786a30(&DAT_146890a20,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463bcbd0);
  }
  return DAT_146890a20;
}



// FUNCTION 1414137a0 FUN_1414137a0 body=47 status=ok
// SIG undefined FUN_1414137a0(void)

longlong FUN_1414137a0(void)

{
  if (DAT_146890ce0 == 0) {
    FUN_141786a30(&DAT_146890ce0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c0100);
  }
  return DAT_146890ce0;
}



// FUNCTION 1414137d0 FUN_1414137d0 body=47 status=ok
// SIG undefined FUN_1414137d0(void)

longlong FUN_1414137d0(void)

{
  if (DAT_146890cd0 == 0) {
    FUN_141786a30(&DAT_146890cd0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463bff40);
  }
  return DAT_146890cd0;
}



// FUNCTION 141413800 FUN_141413800 body=47 status=ok
// SIG undefined FUN_141413800(void)

longlong FUN_141413800(void)

{
  if (DAT_146890a28 == 0) {
    FUN_1417866a0(&DAT_146890a28,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c1910);
  }
  return DAT_146890a28;
}



// FUNCTION 141413830 FUN_141413830 body=47 status=ok
// SIG undefined FUN_141413830(void)

longlong FUN_141413830(void)

{
  if (DAT_146890cf0 == 0) {
    FUN_1417866a0(&DAT_146890cf0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c19b0);
  }
  return DAT_146890cf0;
}



// FUNCTION 141413860 FUN_141413860 body=47 status=ok
// SIG undefined FUN_141413860(void)

longlong FUN_141413860(void)

{
  if (DAT_146890b60 == 0) {
    FUN_1417866a0(&DAT_146890b60,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c1960);
  }
  return DAT_146890b60;
}



// FUNCTION 141413890 FUN_141413890 body=47 status=ok
// SIG undefined FUN_141413890(void)

longlong FUN_141413890(void)

{
  if (DAT_146890aa8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890aa8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463bd5b0);
  }
  return DAT_146890aa8;
}



// FUNCTION 1414138c0 FUN_1414138c0 body=47 status=ok
// SIG undefined FUN_1414138c0(void)

longlong FUN_1414138c0(void)

{
  if (DAT_146890a38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890a38,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463bcd10);
  }
  return DAT_146890a38;
}



// FUNCTION 1414138f0 FUN_1414138f0 body=47 status=ok
// SIG undefined FUN_1414138f0(void)

longlong FUN_1414138f0(void)

{
  if (DAT_146890d30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890d30,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c0910);
  }
  return DAT_146890d30;
}



// FUNCTION 141413920 FUN_141413920 body=47 status=ok
// SIG undefined FUN_141413920(void)

longlong FUN_141413920(void)

{
  if (DAT_146890d10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890d10,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c0510);
  }
  return DAT_146890d10;
}



// FUNCTION 141413950 FUN_141413950 body=47 status=ok
// SIG undefined FUN_141413950(void)

longlong FUN_141413950(void)

{
  if (DAT_146890d20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890d20,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c0840);
  }
  return DAT_146890d20;
}



// FUNCTION 141413980 FUN_141413980 body=47 status=ok
// SIG undefined FUN_141413980(void)

longlong FUN_141413980(void)

{
  if (DAT_146890d40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146890d40,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c0a10);
  }
  return DAT_146890d40;
}


