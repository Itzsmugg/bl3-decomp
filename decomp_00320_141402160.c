// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141402160 FUN_141402160 body=156 status=ok
// SIG undefined FUN_141402160(void)

void FUN_141402160(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140e29d30(param_1,puVar1);
  return;
}



// FUNCTION 141402200 FUN_141402200 body=128 status=ok
// SIG undefined FUN_141402200(void)

void FUN_141402200(undefined8 param_1,longlong param_2)

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
  FUN_140e29fd0(param_1,local_res10);
  return;
}



// FUNCTION 1414022a0 FUN_1414022a0 body=159 status=ok
// SIG undefined FUN_1414022a0(void)

void FUN_1414022a0(undefined8 param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = CONCAT31(local_48._1_3_,0xff);
  uStack_40 = 0;
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a69fb0(param_1,&local_28);
  return;
}



// FUNCTION 141402340 FUN_141402340 body=159 status=ok
// SIG undefined FUN_141402340(void)

void FUN_141402340(undefined8 param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = CONCAT31(local_48._1_3_,0xff);
  uStack_40 = 0;
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_140a770f0(param_1,&local_28);
  return;
}



// FUNCTION 141402400 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  FUN_140a6a630(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414024c0 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  FUN_140a6a750(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141402580 FUN_141402580 body=229 status=ok
// SIG undefined FUN_141402580(void)

void FUN_141402580(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [2];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  local_28[0] = 0xff;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_140a6aca0(param_1,puVar1,local_res10[0]);
  return;
}



// FUNCTION 141402670 FUN_141402670 body=275 status=ok
// SIG undefined FUN_141402670(void)

void FUN_141402670(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  
  local_38[0] = 0xff;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res20[0] = 0;
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
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
  thunk_FUN_140a6aca0(param_1,puVar1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141402790 execGoSeed body=188 status=ok
// SIG undefined execGoSeed(void)

void UUGCheatManager::execGoSeed(long param_1,longlong param_2)

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



// FUNCTION 141402850 FUN_141402850 body=190 status=ok
// SIG undefined FUN_141402850(void)

void FUN_141402850(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
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
  FUN_140e2cc60(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141402910 FUN_141402910 body=188 status=ok
// SIG undefined FUN_141402910(void)

void FUN_141402910(undefined8 param_1,longlong param_2)

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
  FUN_140a6afe0(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141402a90 FUN_141402a90 body=190 status=ok
// SIG undefined FUN_141402a90(void)

void FUN_141402a90(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  FUN_140e2d480(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 141402b90 FUN_141402b90 body=128 status=ok
// SIG undefined FUN_141402b90(void)

void FUN_141402b90(undefined8 param_1,longlong param_2)

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
  FUN_140e2fee0(param_1,local_res10);
  return;
}



// FUNCTION 141402c10 FUN_141402c10 body=178 status=ok
// SIG undefined FUN_141402c10(void)

void FUN_141402c10(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  
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
  cVar1 = (**(code **)(*param_1 + 0xd00))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"PlayEquippedEmote_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xd08))(param_1,local_res8[0]);
  return;
}



// FUNCTION 141402cf0 FUN_141402cf0 body=166 status=ok
// SIG undefined FUN_141402cf0(void)

void FUN_141402cf0(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0xd30))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerEquipEchoDevice_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xd38))(param_1,local_res8[0]);
  return;
}



// FUNCTION 141402da0 FUN_141402da0 body=78 status=ok
// SIG undefined FUN_141402da0(void)

void FUN_141402da0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xcd8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerInterruptEmote_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141402de7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xce0))(param_1);
  return;
}



// FUNCTION 141402df0 FUN_141402df0 body=78 status=ok
// SIG undefined FUN_141402df0(void)

void FUN_141402df0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xd68))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerNotifyPhotoModeFailed_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141402e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd70))(param_1);
  return;
}



// FUNCTION 141402e40 FUN_141402e40 body=181 status=ok
// SIG undefined FUN_141402e40(void)

void FUN_141402e40(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0xd40))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerPlayEchoDeviceScreen_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xd48))(param_1,local_res8);
  return;
}



// FUNCTION 141402f00 FUN_141402f00 body=78 status=ok
// SIG undefined FUN_141402f00(void)

void FUN_141402f00(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xca0))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerPlayTeleportEffectsOnly_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141402f47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xca8))(param_1);
  return;
}



// FUNCTION 141402f50 FUN_141402f50 body=246 status=ok
// SIG undefined FUN_141402f50(void)

void FUN_141402f50(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
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
  cVar1 = (**(code **)(*param_1 + 0xcc8))(param_1,local_res8[0],local_res10);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetEquippedEmote_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xcd0))(param_1,local_res8[0],local_res10);
  return;
}



// FUNCTION 141403050 FUN_141403050 body=182 status=ok
// SIG undefined FUN_141403050(void)

void FUN_141403050(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0xd10))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetHasMenuOpen_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xd18))(param_1,bVar2);
  }
  return;
}



// FUNCTION 141403110 FUN_141403110 body=78 status=ok
// SIG undefined FUN_141403110(void)

void FUN_141403110(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xd88))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerTryEnterPhotoMode_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141403157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd90))(param_1);
  return;
}



// FUNCTION 141403160 FUN_141403160 body=78 status=ok
// SIG undefined FUN_141403160(void)

void FUN_141403160(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xd78))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerTryExitPhotoMode_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001414031a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd80))(param_1);
  return;
}



// FUNCTION 1414031b0 FUN_1414031b0 body=78 status=ok
// SIG undefined FUN_1414031b0(void)

void FUN_1414031b0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xd98))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerTryInitiateDuel_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001414031f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xda0))(param_1);
  return;
}



// FUNCTION 141403200 execServerSuicide body=78 status=ok
// SIG undefined execServerSuicide(void)

void AShooterPlayerController::execServerSuicide(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xcb0))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerTryThrowGrenade_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141403247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xcb8))(param_1);
  return;
}



// FUNCTION 141403250 FUN_141403250 body=182 status=ok
// SIG undefined FUN_141403250(void)

void FUN_141403250(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0xd20))(param_1,bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerUnequipEchoDevice_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xd28))(param_1,bVar2);
  }
  return;
}



// FUNCTION 141403310 FUN_141403310 body=128 status=ok
// SIG undefined FUN_141403310(void)

void FUN_141403310(undefined8 param_1,longlong param_2)

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
  FUN_140e36a80(param_1,local_res10);
  return;
}



// FUNCTION 141403390 FUN_141403390 body=128 status=ok
// SIG undefined FUN_141403390(void)

void FUN_141403390(undefined8 param_1,longlong param_2)

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
  FUN_140e36ba0(param_1,local_res10);
  return;
}



// FUNCTION 141403450 FUN_141403450 body=145 status=ok
// SIG undefined FUN_141403450(void)

void FUN_141403450(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_140e38d10(param_1,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414034f0 FUN_1414034f0 body=257 status=ok
// SIG undefined FUN_1414034f0(void)

void FUN_1414034f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int local_res10 [2];
  undefined8 local_res18;
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
  bVar2 = local_res10[0] != 0;
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e38d30(param_1,local_res20,bVar2,local_res18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141403600 FUN_141403600 body=44 status=ok
// SIG undefined FUN_141403600(void)

void FUN_141403600(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e391d0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141403650 FUN_141403650 body=123 status=ok
// SIG undefined FUN_141403650(void)

void FUN_141403650(undefined8 param_1,longlong param_2)

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
  FUN_140e3b670(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414036d0 FUN_1414036d0 body=43 status=ok
// SIG undefined FUN_1414036d0(void)

void FUN_1414036d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e3bde0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141403700 execSetEnableGravityOnAllBodiesBelow body=257 status=ok
// SIG undefined execSetEnableGravityOnAllBodiesBelow(void)

void USkeletalMeshComponent::execSetEnableGravityOnAllBodiesBelow
               (undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  undefined8 local_28 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_28[0] = 0;
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140e3c160(param_1,bVar1,local_28[0],local_res20[0] != 0);
  return;
}



// FUNCTION 141403810 FUN_141403810 body=142 status=ok
// SIG undefined FUN_141403810(void)

void FUN_141403810(longlong param_1,longlong param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  local_res10 = local_res8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142dbb5d0(param_1 + 0x2b00,&local_res10);
  return;
}



// FUNCTION 1414038a0 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  FUN_140e3ca20(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141403960 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  FUN_140a77850(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141403a20 FUN_141403a20 body=47 status=ok
// SIG undefined FUN_141403a20(void)

longlong FUN_141403a20(void)

{
  if (DAT_14688f7f0 == 0) {
    FUN_141786440(&DAT_14688f7f0,&PTR_FUN_144a0cf60);
  }
  return DAT_14688f7f0;
}



// FUNCTION 141403a50 FUN_141403a50 body=47 status=ok
// SIG undefined FUN_141403a50(void)

longlong FUN_141403a50(void)

{
  if (DAT_14688f7e8 == 0) {
    FUN_141786a30(&DAT_14688f7e8,&PTR_FUN_1463ae0f0);
  }
  return DAT_14688f7e8;
}



// FUNCTION 141403a90 FUN_141403a90 body=162 status=ok
// SIG undefined FUN_141403a90(void)

longlong FUN_141403a90(void)

{
  if (DAT_14688f808 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacterAbilityListData",&DAT_14688f808,FUN_140447710,
                  0x40,0x10000000,0,L"Engine",&LAB_141404950,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14688f808;
}



// FUNCTION 141403b50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USafeZone::GetPrivateStaticClass(void)

{
  if (DAT_14688f970 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacterInputAbility",&DAT_14688f970,
                  StaticRegisterNativesUSafeZone,0x130,0x10000000,0,L"Engine",FUN_141404b80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14142bd30,&LAB_140447700,0);
  }
  return DAT_14688f970;
}



// FUNCTION 141403c00 FUN_141403c00 body=47 status=ok
// SIG undefined FUN_141403c00(void)

longlong FUN_141403c00(void)

{
  if (DAT_14688f968 == 0) {
    FUN_141786440(&DAT_14688f968,&PTR_GetPrivateStaticClass_144a0f1f0);
  }
  return DAT_14688f968;
}



// FUNCTION 141403c30 FUN_141403c30 body=47 status=ok
// SIG undefined FUN_141403c30(void)

longlong FUN_141403c30(void)

{
  if (DAT_14688f960 == 0) {
    FUN_141786a30(&DAT_14688f960,&PTR_FUN_1463b1b50);
  }
  return DAT_14688f960;
}



// FUNCTION 141403c70 FUN_141403c70 body=162 status=ok
// SIG undefined FUN_141403c70(void)

longlong FUN_141403c70(void)

{
  if (DAT_14688fa58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacterMovementComponent",&DAT_14688fa58,FUN_141405f40,
                  0x2f90,0x10000004,0,L"Engine",&LAB_141404c00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142fc0410,&LAB_140447700,0);
  }
  return DAT_14688fa58;
}



// FUNCTION 141403d20 FUN_141403d20 body=162 status=ok
// SIG undefined FUN_141403d20(void)

longlong FUN_141403d20(void)

{
  if (DAT_14688f980 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacterMechAttributeContextResolver",&DAT_14688f980,
                  FUN_140447710,0x50,0x10000000,0,L"Engine",&LAB_141404be0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e03690,&LAB_140447700,0);
  }
  return DAT_14688f980;
}



// FUNCTION 141403dd0 FUN_141403dd0 body=47 status=ok
// SIG undefined FUN_141403dd0(void)

longlong FUN_141403dd0(void)

{
  if (DAT_14688f8a0 == 0) {
    FUN_141786440(&DAT_14688f8a0,&PTR_LAB_144a13d90);
  }
  return DAT_14688f8a0;
}



// FUNCTION 141403e00 FUN_141403e00 body=47 status=ok
// SIG undefined FUN_141403e00(void)

longlong FUN_141403e00(void)

{
  if (DAT_14688f828 == 0) {
    FUN_141786a30(&DAT_14688f828,&PTR_FUN_1463ae670);
  }
  return DAT_14688f828;
}



// FUNCTION 141403e30 FUN_141403e30 body=47 status=ok
// SIG undefined FUN_141403e30(void)

longlong FUN_141403e30(void)

{
  if (DAT_14688f830 == 0) {
    FUN_141786a30(&DAT_14688f830,&PTR_FUN_1463ae730);
  }
  return DAT_14688f830;
}



// FUNCTION 141403e60 FUN_141403e60 body=47 status=ok
// SIG undefined FUN_141403e60(void)

longlong FUN_141403e60(void)

{
  if (DAT_14688f838 == 0) {
    FUN_141786a30(&DAT_14688f838,&PTR_FUN_1463ae7b0);
  }
  return DAT_14688f838;
}



// FUNCTION 141403e90 FUN_141403e90 body=47 status=ok
// SIG undefined FUN_141403e90(void)

longlong FUN_141403e90(void)

{
  if (DAT_14688f840 == 0) {
    FUN_141786a30(&DAT_14688f840,&PTR_FUN_1463ae830);
  }
  return DAT_14688f840;
}



// FUNCTION 141403ec0 FUN_141403ec0 body=47 status=ok
// SIG undefined FUN_141403ec0(void)

longlong FUN_141403ec0(void)

{
  if (DAT_14688f848 == 0) {
    FUN_141786a30(&DAT_14688f848,&PTR_FUN_1463ae8b0);
  }
  return DAT_14688f848;
}



// FUNCTION 141403ef0 FUN_141403ef0 body=47 status=ok
// SIG undefined FUN_141403ef0(void)

longlong FUN_141403ef0(void)

{
  if (DAT_14688f850 == 0) {
    FUN_141786a30(&DAT_14688f850,&PTR_FUN_1463ae930);
  }
  return DAT_14688f850;
}



// FUNCTION 141403f20 FUN_141403f20 body=47 status=ok
// SIG undefined FUN_141403f20(void)

longlong FUN_141403f20(void)

{
  if (DAT_14688f858 == 0) {
    FUN_141786a30(&DAT_14688f858,&PTR_FUN_1463ae9b0);
  }
  return DAT_14688f858;
}



// FUNCTION 141403f50 FUN_141403f50 body=47 status=ok
// SIG undefined FUN_141403f50(void)

longlong FUN_141403f50(void)

{
  if (DAT_14688f860 == 0) {
    FUN_141786a30(&DAT_14688f860,&PTR_FUN_1463aea30);
  }
  return DAT_14688f860;
}



// FUNCTION 141403f80 FUN_141403f80 body=47 status=ok
// SIG undefined FUN_141403f80(void)

longlong FUN_141403f80(void)

{
  if (DAT_14688f868 == 0) {
    FUN_141786a30(&DAT_14688f868,&PTR_FUN_1463aebb0);
  }
  return DAT_14688f868;
}



// FUNCTION 141403fb0 FUN_141403fb0 body=47 status=ok
// SIG undefined FUN_141403fb0(void)

longlong FUN_141403fb0(void)

{
  if (DAT_14688f870 == 0) {
    FUN_141786a30(&DAT_14688f870,&PTR_FUN_1463aec70);
  }
  return DAT_14688f870;
}



// FUNCTION 141403fe0 FUN_141403fe0 body=47 status=ok
// SIG undefined FUN_141403fe0(void)

longlong FUN_141403fe0(void)

{
  if (DAT_14688f878 == 0) {
    FUN_141786a30(&DAT_14688f878,&PTR_FUN_1463aed30);
  }
  return DAT_14688f878;
}



// FUNCTION 141404010 FUN_141404010 body=47 status=ok
// SIG undefined FUN_141404010(void)

longlong FUN_141404010(void)

{
  if (DAT_14688f880 == 0) {
    FUN_141786a30(&DAT_14688f880,&PTR_FUN_1463aed70);
  }
  return DAT_14688f880;
}



// FUNCTION 141404040 FUN_141404040 body=47 status=ok
// SIG undefined FUN_141404040(void)

longlong FUN_141404040(void)

{
  if (DAT_14688f888 == 0) {
    FUN_141786a30(&DAT_14688f888,&PTR_FUN_1463aedb0);
  }
  return DAT_14688f888;
}



// FUNCTION 141404070 FUN_141404070 body=47 status=ok
// SIG undefined FUN_141404070(void)

longlong FUN_141404070(void)

{
  if (DAT_14688f890 == 0) {
    FUN_141786a30(&DAT_14688f890,&PTR_FUN_1463aee90);
  }
  return DAT_14688f890;
}



// FUNCTION 1414040b0 FUN_1414040b0 body=47 status=ok
// SIG undefined FUN_1414040b0(void)

longlong FUN_1414040b0(void)

{
  if (DAT_14688f898 == 0) {
    FUN_141786a30(&DAT_14688f898,&PTR_FUN_1463aef90);
  }
  return DAT_14688f898;
}



// FUNCTION 1414040e0 FUN_1414040e0 body=47 status=ok
// SIG undefined FUN_1414040e0(void)

longlong FUN_1414040e0(void)

{
  if (DAT_14688f988 == 0) {
    FUN_141786a30(&DAT_14688f988,&PTR_FUN_1463b1ce0);
  }
  return DAT_14688f988;
}



// FUNCTION 141404110 FUN_141404110 body=47 status=ok
// SIG undefined FUN_141404110(void)

longlong FUN_141404110(void)

{
  if (DAT_14688fa50 == 0) {
    FUN_141786440(&DAT_14688fa50,&PTR_FUN_144a158b0);
  }
  return DAT_14688fa50;
}



// FUNCTION 141404140 FUN_141404140 body=47 status=ok
// SIG undefined FUN_141404140(void)

longlong FUN_141404140(void)

{
  if (DAT_14688f990 == 0) {
    FUN_141786a30(&DAT_14688f990,&PTR_FUN_1463b1d60);
  }
  return DAT_14688f990;
}



// FUNCTION 141404170 FUN_141404170 body=47 status=ok
// SIG undefined FUN_141404170(void)

longlong FUN_141404170(void)

{
  if (DAT_14688f998 == 0) {
    FUN_141786a30(&DAT_14688f998,&PTR_FUN_1463b1da0);
  }
  return DAT_14688f998;
}



// FUNCTION 1414041a0 FUN_1414041a0 body=47 status=ok
// SIG undefined FUN_1414041a0(void)

longlong FUN_1414041a0(void)

{
  if (DAT_14688f9d8 == 0) {
    FUN_141786a30(&DAT_14688f9d8,&PTR_FUN_1463b2080);
  }
  return DAT_14688f9d8;
}



// FUNCTION 1414041d0 FUN_1414041d0 body=47 status=ok
// SIG undefined FUN_1414041d0(void)

longlong FUN_1414041d0(void)

{
  if (DAT_14688f9e0 == 0) {
    FUN_141786a30(&DAT_14688f9e0,&PTR_FUN_1463b2110);
  }
  return DAT_14688f9e0;
}



// FUNCTION 141404200 FUN_141404200 body=47 status=ok
// SIG undefined FUN_141404200(void)

longlong FUN_141404200(void)

{
  if (DAT_14688f9e8 == 0) {
    FUN_141786a30(&DAT_14688f9e8,&PTR_FUN_1463b21a0);
  }
  return DAT_14688f9e8;
}



// FUNCTION 141404230 FUN_141404230 body=47 status=ok
// SIG undefined FUN_141404230(void)

longlong FUN_141404230(void)

{
  if (DAT_14688f9f0 == 0) {
    FUN_141786a30(&DAT_14688f9f0,&PTR_FUN_1463b21e0);
  }
  return DAT_14688f9f0;
}



// FUNCTION 141404260 FUN_141404260 body=47 status=ok
// SIG undefined FUN_141404260(void)

longlong FUN_141404260(void)

{
  if (DAT_14688f9f8 == 0) {
    FUN_141786a30(&DAT_14688f9f8,&PTR_FUN_1463b2220);
  }
  return DAT_14688f9f8;
}



// FUNCTION 141404290 FUN_141404290 body=47 status=ok
// SIG undefined FUN_141404290(void)

longlong FUN_141404290(void)

{
  if (DAT_14688fa00 == 0) {
    FUN_141786a30(&DAT_14688fa00,&PTR_FUN_1463b2260);
  }
  return DAT_14688fa00;
}



// FUNCTION 1414042c0 FUN_1414042c0 body=47 status=ok
// SIG undefined FUN_1414042c0(void)

longlong FUN_1414042c0(void)

{
  if (DAT_14688fa08 == 0) {
    FUN_141786a30(&DAT_14688fa08,&PTR_FUN_1463b22a0);
  }
  return DAT_14688fa08;
}



// FUNCTION 1414042f0 FUN_1414042f0 body=47 status=ok
// SIG undefined FUN_1414042f0(void)

longlong FUN_1414042f0(void)

{
  if (DAT_14688fa10 == 0) {
    FUN_141786a30(&DAT_14688fa10,&PTR_FUN_1463b22e0);
  }
  return DAT_14688fa10;
}



// FUNCTION 141404320 FUN_141404320 body=47 status=ok
// SIG undefined FUN_141404320(void)

longlong FUN_141404320(void)

{
  if (DAT_14688fa18 == 0) {
    FUN_141786a30(&DAT_14688fa18,&PTR_FUN_1463b2360);
  }
  return DAT_14688fa18;
}



// FUNCTION 141404350 FUN_141404350 body=47 status=ok
// SIG undefined FUN_141404350(void)

longlong FUN_141404350(void)

{
  if (DAT_14688fa20 == 0) {
    FUN_141786a30(&DAT_14688fa20,&PTR_FUN_1463b23e0);
  }
  return DAT_14688fa20;
}



// FUNCTION 141404380 FUN_141404380 body=47 status=ok
// SIG undefined FUN_141404380(void)

longlong FUN_141404380(void)

{
  if (DAT_14688fa28 == 0) {
    FUN_141786a30(&DAT_14688fa28,&PTR_FUN_1463b2420);
  }
  return DAT_14688fa28;
}



// FUNCTION 1414043b0 FUN_1414043b0 body=47 status=ok
// SIG undefined FUN_1414043b0(void)

longlong FUN_1414043b0(void)

{
  if (DAT_14688fa30 == 0) {
    FUN_141786a30(&DAT_14688fa30,&PTR_FUN_1463b2460);
  }
  return DAT_14688fa30;
}



// FUNCTION 1414043e0 FUN_1414043e0 body=47 status=ok
// SIG undefined FUN_1414043e0(void)

longlong FUN_1414043e0(void)

{
  if (DAT_14688fa38 == 0) {
    FUN_141786a30(&DAT_14688fa38,&PTR_FUN_1463b2590);
  }
  return DAT_14688fa38;
}



// FUNCTION 141404410 FUN_141404410 body=47 status=ok
// SIG undefined FUN_141404410(void)

longlong FUN_141404410(void)

{
  if (DAT_14688fa40 == 0) {
    FUN_141786a30(&DAT_14688fa40,&PTR_FUN_1463b2620);
  }
  return DAT_14688fa40;
}



// FUNCTION 141404440 FUN_141404440 body=47 status=ok
// SIG undefined FUN_141404440(void)

longlong FUN_141404440(void)

{
  if (DAT_14688fa48 == 0) {
    FUN_141786a30(&DAT_14688fa48,&PTR_FUN_1463b2730);
  }
  return DAT_14688fa48;
}



// FUNCTION 141404470 FUN_141404470 body=53 status=ok
// SIG undefined FUN_141404470(void)

void FUN_141404470(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144a191a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414044b0 FUN_1414044b0 body=53 status=ok
// SIG undefined FUN_1414044b0(void)

void FUN_1414044b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144a192b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414044f0 FUN_1414044f0 body=53 status=ok
// SIG undefined FUN_1414044f0(void)

void FUN_1414044f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144a193d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141404540 FUN_141404540 body=47 status=ok
// SIG undefined FUN_141404540(void)

longlong FUN_141404540(void)

{
  if (DAT_14688f948 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f948,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b1a00);
  }
  return DAT_14688f948;
}



// FUNCTION 141404570 FUN_141404570 body=53 status=ok
// SIG undefined FUN_141404570(void)

void FUN_141404570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x248;
    *puVar1 = &PTR_FUN_144a18030;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414045b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGLoadoutBarUW::GetPrivateStaticClass(void)

{
  if (DAT_14688f818 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacterAbilityManagerComponent",&DAT_14688f818,
                  FUN_140447710,600,0x10000000,0,L"Engine",&LAB_141404970,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141405e70,&LAB_140447700,0);
  }
  return DAT_14688f818;
}



// FUNCTION 141404660 FUN_141404660 body=53 status=ok
// SIG undefined FUN_141404660(void)

void FUN_141404660(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_144a18148;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414046b0 FUN_1414046b0 body=53 status=ok
// SIG undefined FUN_1414046b0(void)

void FUN_1414046b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144a18260;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414046f0 FUN_1414046f0 body=53 status=ok
// SIG undefined FUN_1414046f0(void)

void FUN_1414046f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144a18378;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141404740 FUN_141404740 body=53 status=ok
// SIG undefined FUN_141404740(void)

void FUN_141404740(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144a18490;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141404780 FUN_141404780 body=53 status=ok
// SIG undefined FUN_141404780(void)

void FUN_141404780(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144a185a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414047c0 FUN_1414047c0 body=53 status=ok
// SIG undefined FUN_1414047c0(void)

void FUN_1414047c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x8c;
    *puVar1 = &PTR_FUN_144a186c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141404800 FUN_141404800 body=53 status=ok
// SIG undefined FUN_141404800(void)

void FUN_141404800(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_144a187d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141404840 FUN_141404840 body=162 status=ok
// SIG undefined FUN_141404840(void)

longlong FUN_141404840(void)

{
  if (DAT_14688f7f8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacter_StandIn",&DAT_14688f7f8,FUN_141405eb0,0x2390,
                  0x10000000,0,L"Game",&LAB_141404930,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1413f82e0
                  ,&LAB_140447700,0);
  }
  return DAT_14688f7f8;
}



// FUNCTION 1414048f0 FUN_1414048f0 body=53 status=ok
// SIG undefined FUN_1414048f0(void)

void FUN_1414048f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144a188f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141404990 FUN_141404990 body=481 status=ok
// SIG undefined FUN_141404990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141404990(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142cb33a0(puVar1,param_1);
    *(undefined2 *)((longlong)puVar1 + 0x96a) = 0x101;
    *(undefined4 *)((longlong)puVar1 + 0x96c) = 0x3f800000;
    *puVar1 = &PTR_FUN_14497c608;
    *(undefined1 *)(puVar1 + 0x12e) = 0;
    *(undefined4 *)(puVar1 + 0x132) = 0x3f800000;
    puVar1[0x133] = _DAT_1468b5d90;
    *(undefined4 *)(puVar1 + 0x134) = DAT_1468b5d98;
    *(undefined2 *)((longlong)puVar1 + 0x9a4) = 0;
    puVar1[0x135] = 0;
    puVar1[0x136] = 0;
    puVar1[0x137] = 0;
    puVar1[0x138] = 0;
    puVar1[0x139] = 0;
    *(undefined2 *)(puVar1 + 0x13a) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x9d4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x9dc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x9e4) = 0x3e99999a;
    *(undefined4 *)(puVar1 + 0x13d) = 0x3dcccccd;
    *(undefined4 *)((longlong)puVar1 + 0x9ec) = 0x44480000;
    *(undefined4 *)(puVar1 + 0x13e) = 0x44c80000;
    *(undefined4 *)((longlong)puVar1 + 0x9f4) = 0x44fa0000;
    *(undefined4 *)((longlong)puVar1 + 0x9fc) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0xa02) = 0;
    puVar1[0x141] = 0;
    *(undefined4 *)(puVar1 + 0x142) = 0xffffffff;
    *(undefined2 *)((longlong)puVar1 + 0xa24) = 0;
    *(undefined4 *)(puVar1 + 0x146) = 0x40000000;
    *(undefined4 *)((longlong)puVar1 + 0xa44) = 0x45160000;
    *(undefined4 *)(puVar1 + 0x149) = 0x3e99999a;
    *(undefined4 *)((longlong)puVar1 + 0xa4c) = 0x437a0000;
    *(undefined4 *)(puVar1 + 0x14a) = 0x3dcccccd;
    *(undefined4 *)((longlong)puVar1 + 0xa54) = 0x44bb8000;
    *(undefined4 *)(puVar1 + 0x14b) = 0x41700000;
    *(undefined4 *)(puVar1 + 0x14c) = 0x41a00000;
    FName::FName(puVar1 + 0x14d,"VehicleSlot",1);
    puVar1[0x14e] = 0;
    puVar1[0x14f] = 0;
    puVar1[0x150] = 0;
    puVar1[0x151] = 0;
    puVar1[0x152] = 0;
    puVar1[0x153] = 0;
    puVar1[0x154] = 0;
    puVar1[0x155] = 0;
    puVar1[0x156] = 0;
    puVar1[0x157] = 0;
    *(undefined1 *)(puVar1 + 0x159) = 0;
    *(undefined1 *)(puVar1 + 0x15a) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xae4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xad4) = 0x41a3771f;
  }
  return;
}



// FUNCTION 141404b80 FUN_141404b80 body=81 status=ok
// SIG undefined FUN_141404b80(void)

void FUN_141404b80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140999380(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x20) = 0x1010101;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    *puVar1 = &PTR_FUN_144a18d20;
    puVar1[0x1f] = &PTR_LAB_144a19010;
  }
  return;
}



// FUNCTION 141404c20 FUN_141404c20 body=141 status=ok
// SIG undefined FUN_141404c20(void)

undefined8 * FUN_141404c20(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_140a4f6b0((longlong)param_1 + 0x54);
  FUN_140a4f6b0(param_1 + 0x10);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  ATTLGameSession::GetLdnLastError(param_1 + 0x19);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_140a4f4e0((longlong)param_1 + 0xfc);
  FUN_140a4f660(param_1 + 0x31);
  FUN_140a4f610(param_1 + 0x3b);
  return param_1;
}



// FUNCTION 141404cb0 FUN_141404cb0 body=128 status=ok
// SIG undefined FUN_141404cb0(void)

void FUN_141404cb0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x108);
  iVar2 = *(int *)(param_1 + 0x110);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x40;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x108);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xf8) = &PTR_FUN_144038628;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FUN_14099ae30(param_1);
  return;
}



// FUNCTION 141404d30 FUN_141404d30 body=113 status=ok
// SIG undefined FUN_141404d30(void)

undefined8 * FUN_141404d30(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 141404db0 FUN_141404db0 body=1019 status=ok
// SIG undefined FUN_141404db0(void)

undefined8 * FUN_141404db0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  
  if (param_1 != param_2) {
    iVar12 = *(int *)(param_2 + 1);
    pvVar3 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar12;
    if ((iVar12 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_141405cc0(param_1,iVar12);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar3,(longlong)iVar12 * 0x8c);
    }
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_2 + 0x35);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_2 + 0x3c);
  FUN_141404d30(param_1 + 8,param_2 + 8);
  puVar11 = param_1 + 0x16;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x5c);
  *(undefined8 *)((longlong)param_1 + 0x54) = *(undefined8 *)((longlong)param_2 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x5c) = uVar8;
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x6c);
  *(undefined8 *)((longlong)param_1 + 100) = *(undefined8 *)((longlong)param_2 + 100);
  *(undefined8 *)((longlong)param_1 + 0x6c) = uVar8;
  *(undefined8 *)((longlong)param_1 + 0x74) = *(undefined8 *)((longlong)param_2 + 0x74);
  *(undefined1 *)((longlong)param_1 + 0x7c) = *(undefined1 *)((longlong)param_2 + 0x7c);
  uVar8 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar8;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar6 = *(undefined4 *)(param_2 + 0x13);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar5;
  *(undefined4 *)(param_1 + 0x13) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar7;
  param_1[0x14] = param_2[0x14];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  if (puVar11 != param_2 + 0x16) {
    iVar12 = *(int *)(param_2 + 0x17);
    pvVar3 = (void *)param_2[0x16];
    *(int *)(param_1 + 0x17) = iVar12;
    if ((iVar12 == 0) && (*(int *)((longlong)param_1 + 0xbc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
    }
    else {
      TArray<FDungeonMarkerInfo,FDefaultAllocator>::ResizeForCopy(puVar11,iVar12);
      _guard_xfg_dispatch_icall_nop((void *)*puVar11,pvVar3,(longlong)iVar12 * 0x50);
    }
  }
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FRBFInterpolatorBase::operator=(param_1 + 0x19,param_2 + 0x19);
  plVar1 = param_1 + 0x1d;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  if (plVar1 != param_2 + 0x1d) {
    iVar12 = *(int *)(param_1 + 0x1e);
    if (iVar12 != 0) {
      plVar9 = (longlong *)(*plVar1 + 0x60);
      do {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 0xe;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    iVar12 = *(int *)(param_2 + 0x1e);
    lVar4 = param_2[0x1d];
    *(int *)(param_1 + 0x1e) = iVar12;
    if ((iVar12 == 0) && (*(int *)((longlong)param_1 + 0xf4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
    }
    else {
      TArray<FSimpleLinkNavModifier,FDefaultAllocator>::ResizeForCopy(plVar1,iVar12);
      puVar11 = (undefined8 *)*plVar1;
      if (iVar12 != 0) {
        puVar13 = (undefined4 *)(lVar4 + 0x14);
        puVar10 = (undefined4 *)((longlong)puVar11 + 0x6c);
        do {
          uVar8 = *(undefined8 *)(puVar13 + -3);
          *puVar11 = *(undefined8 *)(puVar13 + -5);
          puVar11[1] = uVar8;
          *(undefined4 *)(puVar11 + 2) = puVar13[-1];
          puVar10[-0x16] = *puVar13;
          *(undefined1 *)(puVar10 + -0x15) = *(undefined1 *)(puVar13 + 1);
          uVar8 = *(undefined8 *)(puVar13 + 4);
          *(undefined8 *)(puVar10 + -0x14) = *(undefined8 *)(puVar13 + 2);
          *(undefined8 *)(puVar10 + -0x12) = uVar8;
          *(undefined1 *)(puVar10 + -0x10) = *(undefined1 *)(puVar13 + 6);
          uVar5 = puVar13[8];
          uVar6 = puVar13[9];
          uVar7 = puVar13[10];
          puVar10[-0xf] = puVar13[7];
          puVar10[-0xe] = uVar5;
          puVar10[-0xd] = uVar6;
          puVar10[-0xc] = uVar7;
          *(undefined1 *)(puVar10 + -0xb) = *(undefined1 *)(puVar13 + 0xb);
          *(undefined8 *)(puVar10 + -9) = *(undefined8 *)(puVar13 + 0xd);
          *(undefined8 *)(puVar10 + -7) = *(undefined8 *)(puVar13 + 0xf);
          *(undefined8 *)(puVar10 + -5) = *(undefined8 *)(puVar13 + 0x11);
          *(undefined8 *)(puVar10 + -3) = 0;
          iVar2 = puVar13[0x15];
          pvVar3 = *(void **)(puVar13 + 0x13);
          puVar10[-1] = iVar2;
          if (iVar2 == 0) {
            *puVar10 = 0;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar10 + -3,iVar2,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(puVar10 + -3),pvVar3,(longlong)iVar2 << 4);
          }
          puVar11 = puVar11 + 0xe;
          puVar10 = puVar10 + 0x1c;
          puVar13 = puVar13 + 0x1c;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x104);
  *(undefined8 *)((longlong)param_1 + 0xfc) = *(undefined8 *)((longlong)param_2 + 0xfc);
  *(undefined8 *)((longlong)param_1 + 0x104) = uVar8;
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x114);
  *(undefined8 *)((longlong)param_1 + 0x10c) = *(undefined8 *)((longlong)param_2 + 0x10c);
  *(undefined8 *)((longlong)param_1 + 0x114) = uVar8;
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x124);
  *(undefined8 *)((longlong)param_1 + 0x11c) = *(undefined8 *)((longlong)param_2 + 0x11c);
  *(undefined8 *)((longlong)param_1 + 0x124) = uVar8;
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x134);
  *(undefined8 *)((longlong)param_1 + 300) = *(undefined8 *)((longlong)param_2 + 300);
  *(undefined8 *)((longlong)param_1 + 0x134) = uVar8;
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x144);
  *(undefined8 *)((longlong)param_1 + 0x13c) = *(undefined8 *)((longlong)param_2 + 0x13c);
  *(undefined8 *)((longlong)param_1 + 0x144) = uVar8;
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x154);
  *(undefined8 *)((longlong)param_1 + 0x14c) = *(undefined8 *)((longlong)param_2 + 0x14c);
  *(undefined8 *)((longlong)param_1 + 0x154) = uVar8;
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x164);
  *(undefined8 *)((longlong)param_1 + 0x15c) = *(undefined8 *)((longlong)param_2 + 0x15c);
  *(undefined8 *)((longlong)param_1 + 0x164) = uVar8;
  uVar8 = *(undefined8 *)((longlong)param_2 + 0x174);
  *(undefined8 *)((longlong)param_1 + 0x16c) = *(undefined8 *)((longlong)param_2 + 0x16c);
  *(undefined8 *)((longlong)param_1 + 0x174) = uVar8;
  *(undefined8 *)((longlong)param_1 + 0x17c) = *(undefined8 *)((longlong)param_2 + 0x17c);
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
  uVar8 = param_2[0x32];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = uVar8;
  uVar8 = param_2[0x34];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = uVar8;
  uVar8 = param_2[0x36];
  param_1[0x35] = param_2[0x35];
  param_1[0x36] = uVar8;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1bc);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar7;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1cc);
  uVar6 = *(undefined4 *)(param_2 + 0x3a);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x39);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar5;
  *(undefined4 *)(param_1 + 0x3a) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar7;
  FUN_1414051b0(param_1 + 0x3b,param_2 + 0x3b);
  return param_1;
}



// FUNCTION 1414051b0 FUN_1414051b0 body=110 status=ok
// SIG undefined FUN_1414051b0(void)

undefined8 * FUN_1414051b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  FUN_141404d30(param_1 + 0xc,param_2 + 0xc);
  return param_1;
}



// FUNCTION 141405220 operator= body=115 status=ok
// SIG undefined operator=(void)

undefined8 * FRBFInterpolatorBase::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 2);
    }
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1414052b0 FUN_1414052b0 body=52 status=ok
// SIG undefined FUN_1414052b0(void)

undefined8 FUN_1414052b0(undefined8 param_1,ulonglong param_2)

{
  FUN_141404cb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 1414052f0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FBuildTileConesCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141404cb0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 141405330 FUN_141405330 body=67 status=ok
// SIG undefined FUN_141405330(void)

void FUN_141405330(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  local_resc = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_14688f7b8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414053d0 FUN_1414053d0 body=38 status=ok
// SIG undefined FUN_1414053d0(void)

void FUN_1414053d0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x248);
  FUN_141404c20(param_2);
  return;
}



// FUNCTION 141405530 FUN_141405530 body=74 status=ok
// SIG undefined FUN_141405530(void)

undefined1 FUN_141405530(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_141404db0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x248;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141405580 FUN_141405580 body=181 status=ok
// SIG undefined FUN_141405580(void)

undefined8 FUN_141405580(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar6 = (undefined1 *)(param_2 + 0x18);
    do {
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + -0x18) + 8);
      *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + param_3 + -0x18);
      *(undefined8 *)(puVar6 + -0x10) = uVar5;
      *(undefined4 *)(puVar6 + -8) = *(undefined4 *)(puVar6 + param_3 + -8);
      *(undefined4 *)(puVar6 + -4) = *(undefined4 *)(puVar6 + param_3 + -4);
      *puVar6 = puVar6[param_3];
      uVar5 = *(undefined8 *)((longlong)(puVar6 + param_3 + 4) + 8);
      *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar6 + param_3 + 4);
      *(undefined8 *)(puVar6 + 0xc) = uVar5;
      puVar6[0x14] = puVar6[param_3 + 0x14];
      puVar1 = (undefined4 *)(puVar6 + param_3 + 0x18);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar6 + 0x18) = *puVar1;
      *(undefined4 *)(puVar6 + 0x1c) = uVar2;
      *(undefined4 *)(puVar6 + 0x20) = uVar3;
      *(undefined4 *)(puVar6 + 0x24) = uVar4;
      puVar6[0x28] = puVar6[param_3 + 0x28];
      *(undefined8 *)(puVar6 + 0x30) = *(undefined8 *)(puVar6 + param_3 + 0x30);
      *(undefined8 *)(puVar6 + 0x38) = *(undefined8 *)(puVar6 + param_3 + 0x38);
      *(undefined8 *)(puVar6 + 0x40) = *(undefined8 *)(puVar6 + param_3 + 0x40);
      FUN_141404d30(puVar6 + 0x48,puVar6 + param_3 + 0x48);
      puVar6 = puVar6 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141405640 FUN_141405640 body=167 status=ok
// SIG undefined FUN_141405640(void)

undefined8 FUN_141405640(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar2 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar2;
      if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(param_2,iVar2);
        _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 2);
      }
    }
    puVar1 = param_3 + 2;
    param_3 = param_3 + 3;
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)puVar1;
    param_2 = param_2 + 3;
  }
  return 1;
}



// FUNCTION 1414056f0 FUN_1414056f0 body=157 status=ok
// SIG undefined FUN_1414056f0(void)

undefined8 FUN_1414056f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 8);
    do {
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 4 + (longlong)puVar1);
      puVar1[2] = *(undefined4 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_3 + 0xc + (longlong)puVar1);
      puVar1[4] = *(undefined4 *)(param_3 + 0x10 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_3 + 0x14 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + 0x15) = *(undefined1 *)(param_3 + 0x15 + (longlong)puVar1);
      puVar1[6] = *(undefined4 *)(param_3 + 0x18 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_3 + 0x1c + (longlong)puVar1);
      FUN_141404d30(puVar1 + 8,param_3 + 0x20 + (longlong)puVar1);
      puVar1 = puVar1 + 0xe;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414057b0 EJumpType_StaticEnum body=55 status=ok
// SIG undefined EJumpType_StaticEnum(void)

void EJumpType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_14688f380 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f380 = GetStaticEnum(FUN_141406540,uVar1,L"EJumpType");
  }
  return;
}



// FUNCTION 1414057f0 FUN_1414057f0 body=55 status=ok
// SIG undefined FUN_1414057f0(void)

void FUN_1414057f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14688f378 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f378 = GetStaticEnum(FUN_141406570,uVar1,L"EVehicleArchetype");
  }
  return;
}



// FUNCTION 141405840 FUN_141405840 body=162 status=ok
// SIG undefined FUN_141405840(void)

longlong FUN_141405840(void)

{
  if (DAT_14688f8a8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacterAnimInstance",&DAT_14688f8a8,FUN_141405ee0,0xaf0,
                  0x10000008,0,L"Engine",FUN_141404990,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,&LAB_141405e80,
                  &LAB_14084f730,0);
  }
  return DAT_14688f8a8;
}



// FUNCTION 1414058f0 FUN_1414058f0 body=6 status=ok
// SIG undefined FUN_1414058f0(void)

undefined8 FUN_1414058f0(void)

{
  return 0x8c5aefa3;
}



// FUNCTION 141405900 FUN_141405900 body=6 status=ok
// SIG undefined FUN_141405900(void)

undefined8 FUN_141405900(void)

{
  return 0x20ec2159;
}



// FUNCTION 141405910 FUN_141405910 body=6 status=ok
// SIG undefined FUN_141405910(void)

undefined8 FUN_141405910(void)

{
  return 0xb2416fc2;
}



// FUNCTION 141405920 FUN_141405920 body=6 status=ok
// SIG undefined FUN_141405920(void)

undefined8 FUN_141405920(void)

{
  return 0xf3a2064a;
}



// FUNCTION 141405930 FUN_141405930 body=6 status=ok
// SIG undefined FUN_141405930(void)

undefined8 FUN_141405930(void)

{
  return 0x14638e1f;
}



// FUNCTION 141405940 FUN_141405940 body=6 status=ok
// SIG undefined FUN_141405940(void)

undefined8 FUN_141405940(void)

{
  return 0x9f1afabf;
}



// FUNCTION 141405950 FUN_141405950 body=6 status=ok
// SIG undefined FUN_141405950(void)

undefined8 FUN_141405950(void)

{
  return 0x97626ac4;
}



// FUNCTION 141405960 FUN_141405960 body=6 status=ok
// SIG undefined FUN_141405960(void)

undefined8 FUN_141405960(void)

{
  return 0x4fddcb8e;
}



// FUNCTION 141405970 FUN_141405970 body=6 status=ok
// SIG undefined FUN_141405970(void)

undefined8 FUN_141405970(void)

{
  return 0xc7f54026;
}



// FUNCTION 141405980 FUN_141405980 body=6 status=ok
// SIG undefined FUN_141405980(void)

undefined8 FUN_141405980(void)

{
  return 0x2d60dcc5;
}



// FUNCTION 141405990 FUN_141405990 body=6 status=ok
// SIG undefined FUN_141405990(void)

undefined8 FUN_141405990(void)

{
  return 0xb21df366;
}



// FUNCTION 1414059a0 FUN_1414059a0 body=6 status=ok
// SIG undefined FUN_1414059a0(void)

undefined8 FUN_1414059a0(void)

{
  return 0x1b9ad2f5;
}



// FUNCTION 1414059b0 FUN_1414059b0 body=6 status=ok
// SIG undefined FUN_1414059b0(void)

undefined8 FUN_1414059b0(void)

{
  return 0xab1a01ac;
}



// FUNCTION 1414059c0 FUN_1414059c0 body=6 status=ok
// SIG undefined FUN_1414059c0(void)

undefined8 FUN_1414059c0(void)

{
  return 0xd98ac9db;
}



// FUNCTION 141405bf0 FUN_141405bf0 body=57 status=ok
// SIG undefined FUN_141405bf0(void)

void FUN_141405bf0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688f780);
                    /* WARNING: Could not recover jumptable at 0x000141405c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141405c30 FUN_141405c30 body=66 status=ok
// SIG undefined FUN_141405c30(void)

void FUN_141405c30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_14688f788);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 141405c80 FUN_141405c80 body=57 status=ok
// SIG undefined FUN_141405c80(void)

void FUN_141405c80(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688f790);
                    /* WARNING: Could not recover jumptable at 0x000141405cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141405cc0 FUN_141405cc0 body=130 status=ok
// SIG undefined FUN_141405cc0(void)

void FUN_141405cc0(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x8c,0);
    iVar3 = (int)(uVar1 / 0x8c);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x8c,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 141405d50 FUN_141405d50 body=60 status=ok
// SIG undefined FUN_141405d50(void)

void FUN_141405d50(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688f7c0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 141405d90 FUN_141405d90 body=57 status=ok
// SIG undefined FUN_141405d90(void)

void FUN_141405d90(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688f7c8);
                    /* WARNING: Could not recover jumptable at 0x000141405dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141405dd0 FUN_141405dd0 body=57 status=ok
// SIG undefined FUN_141405dd0(void)

void FUN_141405dd0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688f7d0);
                    /* WARNING: Could not recover jumptable at 0x000141405e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141405e10 FUN_141405e10 body=94 status=ok
// SIG undefined FUN_141405e10(void)

void FUN_141405e10(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined8 local_10;
  
  local_20 = *(undefined4 *)(param_2 + 1);
  local_28 = *param_2;
  lVar1 = *param_1;
  local_10 = param_5;
  local_1c = param_3;
  local_18 = param_4;
  uVar2 = FUN_14178ac60(local_28,DAT_14688f7d8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 141405e90 thunk_FUN_142fc0410 body=5 status=ok
// SIG undefined thunk_FUN_142fc0410(void)

void thunk_FUN_142fc0410(void)

{
  FUN_142fc0410();
  return;
}



// FUNCTION 141405ea0 thunk_FUN_14142bd30 body=5 status=ok
// SIG undefined thunk_FUN_14142bd30(void)

void thunk_FUN_14142bd30(void)

{
  FUN_14142bd30();
  return;
}



// FUNCTION 141405eb0 FUN_141405eb0 body=34 status=ok
// SIG undefined FUN_141405eb0(void)

void FUN_141405eb0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141404840();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnCustomizationApplied_144a17f08,1);
  return;
}



// FUNCTION 141405ee0 FUN_141405ee0 body=34 status=ok
// SIG undefined FUN_141405ee0(void)

void FUN_141405ee0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141405840();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnChangeVehicleSeat_Native_144a17f70,0xc)
  ;
  return;
}



// FUNCTION 141405f10 StaticRegisterNativesUSafeZone body=34 status=ok
// SIG undefined StaticRegisterNativesUSafeZone(void)

void USafeZone::StaticRegisterNativesUSafeZone(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CancelCrouchToggle_144a19038,1);
  return;
}



// FUNCTION 141405f40 FUN_141405f40 body=34 status=ok
// SIG undefined FUN_141405f40(void)

void FUN_141405f40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141403c70();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClientAckPlayerTeleport_144a194f0,0xf);
  return;
}



// FUNCTION 141405f70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f950 == 0) {
    uVar1 = FUN_1414058f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f950 = GetStaticStruct(FUN_1414065a0,uVar2,L"ColorRandomizer",0x10,uVar1);
  }
  return;
}



// FUNCTION 141405fd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f9c8 == 0) {
    uVar1 = FUN_141405900();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f9c8 = GetStaticStruct(FUN_1414065d0,uVar2,L"GroundSlamEndedDetails",8,uVar1);
  }
  return;
}



// FUNCTION 141406030 FUN_141406030 body=82 status=ok
// SIG undefined FUN_141406030(void)

void FUN_141406030(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f930 == 0) {
    uVar1 = FUN_141405910();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f930 = GetStaticStruct(FUN_141406600,uVar2,L"OakCharacterColorization",0x8c,uVar1);
  }
  return;
}



// FUNCTION 141406090 FUN_141406090 body=82 status=ok
// SIG undefined FUN_141406090(void)

void FUN_141406090(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f940 == 0) {
    uVar1 = FUN_141405930();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f940 = GetStaticStruct(FUN_141404540,uVar2,L"OakCharacterCustomization",0x14,uVar1);
  }
  return;
}



// FUNCTION 1414060f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FGameplayEffectExecutionScopedModifierInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f8b0 == 0) {
    uVar1 = FUN_141405920();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f8b0 =
         GetStaticStruct(FUN_141406630,uVar2,L"OakCharacterCustomizationData",0x248,uVar1);
  }
  return;
}



// FUNCTION 141406150 FUN_141406150 body=82 status=ok
// SIG undefined FUN_141406150(void)

void FUN_141406150(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f8c0 == 0) {
    uVar1 = FUN_141405940();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f8c0 = GetStaticStruct(FUN_141406660,uVar2,L"OakCharacterDecal",0x70,uVar1);
  }
  return;
}



// FUNCTION 1414061b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f8d0 == 0) {
    uVar1 = FUN_141405950();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f8d0 = GetStaticStruct(FUN_141406690,uVar2,L"OakCharacterEyes",0x18,uVar1);
  }
  return;
}



// FUNCTION 141406210 FUN_141406210 body=82 status=ok
// SIG undefined FUN_141406210(void)

void FUN_141406210(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f8e0 == 0) {
    uVar1 = FUN_141405960();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f8e0 = GetStaticStruct(FUN_1414066c0,uVar2,L"OakCharacterHair",0x50,uVar1);
  }
  return;
}



// FUNCTION 141406270 FUN_141406270 body=82 status=ok
// SIG undefined FUN_141406270(void)

void FUN_141406270(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f910 == 0) {
    uVar1 = FUN_141405970();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f910 = GetStaticStruct(FUN_1414066f0,uVar2,L"OakCharacterPattern",0x38,uVar1);
  }
  return;
}



// FUNCTION 1414062d0 FUN_1414062d0 body=82 status=ok
// SIG undefined FUN_1414062d0(void)

void FUN_1414062d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f900 == 0) {
    uVar1 = FUN_141405980();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f900 = GetStaticStruct(FUN_141406720,uVar2,L"OakCharacterSkinTone",0x28,uVar1);
  }
  return;
}



// FUNCTION 141406330 FUN_141406330 body=82 status=ok
// SIG undefined FUN_141406330(void)

void FUN_141406330(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f8f0 == 0) {
    uVar1 = FUN_141405990();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f8f0 = GetStaticStruct(FUN_141406750,uVar2,L"OakCharacterTattoos",0x28,uVar1);
  }
  return;
}



// FUNCTION 141406390 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f920 == 0) {
    uVar1 = FUN_1414059a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f920 = GetStaticStruct(FUN_141406780,uVar2,L"OakCharacterTexturePair",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414063f0 FUN_1414063f0 body=82 status=ok
// SIG undefined FUN_1414063f0(void)

void FUN_1414063f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f9a8 == 0) {
    uVar1 = FUN_1414059b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f9a8 = GetStaticStruct(FUN_1414067b0,uVar2,L"PlayerTeleportState",0x38,uVar1);
  }
  return;
}



// FUNCTION 141406450 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f9b8 == 0) {
    uVar1 = FUN_1414059c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f9b8 = GetStaticStruct(FUN_1414067e0,uVar2,L"SlideEndedDetails",0x18,uVar1);
  }
  return;
}



// FUNCTION 1414064b0 FUN_1414064b0 body=47 status=ok
// SIG undefined FUN_1414064b0(void)

longlong FUN_1414064b0(void)

{
  if (DAT_14688f800 == 0) {
    FUN_141786440(&DAT_14688f800,&PTR_FUN_144a0e980);
  }
  return DAT_14688f800;
}



// FUNCTION 1414064e0 FUN_1414064e0 body=47 status=ok
// SIG undefined FUN_1414064e0(void)

longlong FUN_1414064e0(void)

{
  if (DAT_14688f810 == 0) {
    FUN_141786440(&DAT_14688f810,&PTR_GetPrivateStaticClass_144a155b0);
  }
  return DAT_14688f810;
}



// FUNCTION 141406510 FUN_141406510 body=47 status=ok
// SIG undefined FUN_141406510(void)

longlong FUN_141406510(void)

{
  if (DAT_14688f978 == 0) {
    FUN_141786440(&DAT_14688f978,&PTR_FUN_144a114b0);
  }
  return DAT_14688f978;
}



// FUNCTION 141406540 FUN_141406540 body=47 status=ok
// SIG undefined FUN_141406540(void)

longlong FUN_141406540(void)

{
  if (DAT_14688f9a0 == 0) {
    FUN_1417866a0(&DAT_14688f9a0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b3ac0);
  }
  return DAT_14688f9a0;
}



// FUNCTION 141406570 FUN_141406570 body=47 status=ok
// SIG undefined FUN_141406570(void)

longlong FUN_141406570(void)

{
  if (DAT_14688f820 == 0) {
    FUN_1417866a0(&DAT_14688f820,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b3a70);
  }
  return DAT_14688f820;
}



// FUNCTION 1414065a0 FUN_1414065a0 body=47 status=ok
// SIG undefined FUN_1414065a0(void)

longlong FUN_1414065a0(void)

{
  if (DAT_14688f958 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f958,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b1b00);
  }
  return DAT_14688f958;
}



// FUNCTION 1414065d0 FUN_1414065d0 body=47 status=ok
// SIG undefined FUN_1414065d0(void)

longlong FUN_1414065d0(void)

{
  if (DAT_14688f9d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f9d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b1fc0);
  }
  return DAT_14688f9d0;
}



// FUNCTION 141406600 FUN_141406600 body=47 status=ok
// SIG undefined FUN_141406600(void)

longlong FUN_141406600(void)

{
  if (DAT_14688f938 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f938,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b1920);
  }
  return DAT_14688f938;
}



// FUNCTION 141406630 FUN_141406630 body=47 status=ok
// SIG undefined FUN_141406630(void)

longlong FUN_141406630(void)

{
  if (DAT_14688f8b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f8b8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b0920);
  }
  return DAT_14688f8b8;
}



// FUNCTION 141406660 FUN_141406660 body=47 status=ok
// SIG undefined FUN_141406660(void)

longlong FUN_141406660(void)

{
  if (DAT_14688f8c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f8c8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b0c40);
  }
  return DAT_14688f8c8;
}



// FUNCTION 141406690 FUN_141406690 body=47 status=ok
// SIG undefined FUN_141406690(void)

longlong FUN_141406690(void)

{
  if (DAT_14688f8d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f8d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b0d50);
  }
  return DAT_14688f8d8;
}



// FUNCTION 1414066c0 FUN_1414066c0 body=47 status=ok
// SIG undefined FUN_1414066c0(void)

longlong FUN_1414066c0(void)

{
  if (DAT_14688f8e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f8e8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b0f50);
  }
  return DAT_14688f8e8;
}



// FUNCTION 1414066f0 FUN_1414066f0 body=47 status=ok
// SIG undefined FUN_1414066f0(void)

longlong FUN_1414066f0(void)

{
  if (DAT_14688f918 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f918,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b14a0);
  }
  return DAT_14688f918;
}



// FUNCTION 141406720 FUN_141406720 body=47 status=ok
// SIG undefined FUN_141406720(void)

longlong FUN_141406720(void)

{
  if (DAT_14688f908 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f908,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b1110);
  }
  return DAT_14688f908;
}



// FUNCTION 141406750 FUN_141406750 body=47 status=ok
// SIG undefined FUN_141406750(void)

longlong FUN_141406750(void)

{
  if (DAT_14688f8f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f8f8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b1030);
  }
  return DAT_14688f8f8;
}



// FUNCTION 141406780 FUN_141406780 body=47 status=ok
// SIG undefined FUN_141406780(void)

longlong FUN_141406780(void)

{
  if (DAT_14688f928 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f928,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b1570);
  }
  return DAT_14688f928;
}



// FUNCTION 1414067b0 FUN_1414067b0 body=47 status=ok
// SIG undefined FUN_1414067b0(void)

longlong FUN_1414067b0(void)

{
  if (DAT_14688f9b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f9b0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b1e20);
  }
  return DAT_14688f9b0;
}



// FUNCTION 1414067e0 FUN_1414067e0 body=47 status=ok
// SIG undefined FUN_1414067e0(void)

longlong FUN_1414067e0(void)

{
  if (DAT_14688f9c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f9c0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463b1ef0);
  }
  return DAT_14688f9c0;
}



// FUNCTION 141406840 FUN_141406840 body=200 status=ok
// SIG undefined FUN_141406840(void)

void FUN_141406840(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xcc0))(param_1,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 1414069d0 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  FUN_140cbf380(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141406a90 FUN_141406a90 body=128 status=ok
// SIG undefined FUN_141406a90(void)

void FUN_141406a90(undefined8 param_1,longlong param_2)

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
  FUN_140e55f30(param_1,local_res10);
  return;
}



// FUNCTION 141406b10 FUN_141406b10 body=128 status=ok
// SIG undefined FUN_141406b10(void)

void FUN_141406b10(undefined8 param_1,longlong param_2)

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
  FUN_140cbf400(param_1,local_res10);
  return;
}



// FUNCTION 141406b90 FUN_141406b90 body=128 status=ok
// SIG undefined FUN_141406b90(void)

void FUN_141406b90(undefined8 param_1,longlong param_2)

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
  FUN_140cbf4a0(param_1,local_res10);
  return;
}



// FUNCTION 141406c10 FUN_141406c10 body=128 status=ok
// SIG undefined FUN_141406c10(void)

void FUN_141406c10(undefined8 param_1,longlong param_2)

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
  FUN_140cc02b0(param_1,local_res10);
  return;
}



// FUNCTION 141406c90 FUN_141406c90 body=128 status=ok
// SIG undefined FUN_141406c90(void)

void FUN_141406c90(undefined8 param_1,longlong param_2)

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
  FUN_140cc02d0(param_1,local_res10);
  return;
}



// FUNCTION 141406d10 FUN_141406d10 body=128 status=ok
// SIG undefined FUN_141406d10(void)

void FUN_141406d10(undefined8 param_1,longlong param_2)

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
  FUN_140cc02e0(param_1,local_res10);
  return;
}



// FUNCTION 141406d90 FUN_141406d90 body=128 status=ok
// SIG undefined FUN_141406d90(void)

void FUN_141406d90(undefined8 param_1,longlong param_2)

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
  FUN_140cc0320(param_1,local_res10);
  return;
}



// FUNCTION 141406e70 FUN_141406e70 body=128 status=ok
// SIG undefined FUN_141406e70(void)

void FUN_141406e70(undefined8 param_1,longlong param_2)

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
  FUN_140a6bb00(param_1,local_res10);
  return;
}



// FUNCTION 141406ef0 FUN_141406ef0 body=431 status=ok
// SIG undefined FUN_141406ef0(void)

void FUN_141406ef0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  local_d8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar1 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  local_b8 = local_d0;
  local_b0 = local_c8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140cc1a00(param_1,local_d8,local_res20,local_res10[0],&local_b8,puVar1);
  return;
}



// FUNCTION 1414070a0 FUN_1414070a0 body=195 status=ok
// SIG undefined FUN_1414070a0(void)

void FUN_1414070a0(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
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
  (**(code **)(*param_1 + 0x358))(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 141407170 FUN_141407170 body=178 status=ok
// SIG undefined FUN_141407170(void)

void FUN_141407170(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  
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
  cVar1 = (**(code **)(*param_1 + 0xcb0))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerAttemptGroundSlam_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xcb8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 141407230 FUN_141407230 body=78 status=ok
// SIG undefined FUN_141407230(void)

void FUN_141407230(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xcd8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerStartSliding_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141407277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xce0))(param_1);
  return;
}



// FUNCTION 141407280 FUN_141407280 body=78 status=ok
// SIG undefined FUN_141407280(void)

void FUN_141407280(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xce8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerStopSliding_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001414072c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xcf0))(param_1);
  return;
}



// FUNCTION 1414072d0 FUN_1414072d0 body=412 status=ok
// SIG undefined FUN_1414072d0(void)

void FUN_1414072d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
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
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  cVar1 = (**(code **)(*param_1 + 0xcc8))
                    (param_1,&local_28,local_res10[0],local_res8[0],local_res20);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerTeleportPlayer_Validate");
    return;
  }
  local_20 = local_30;
  local_28 = local_38;
  (**(code **)(*param_1 + 0xcd0))(param_1,&local_28,local_res10[0],local_res8[0],local_res20);
  return;
}



// FUNCTION 141407470 execLockAIResources body=194 status=ok
// SIG undefined execLockAIResources(void)

void UAnimInstance::execLockAIResources(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
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
  FUN_140ccf6b0(param_1,bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 141407540 FUN_141407540 body=138 status=ok
// SIG undefined FUN_141407540(void)

int FUN_141407540(longlong param_1,longlong param_2)

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
  *(uint *)(param_1 + 0x2ac0) = *(uint *)(param_1 + 0x2ac0) & 0xffffffef;
  *(uint *)(param_1 + 0x2ac0) = *(uint *)(param_1 + 0x2ac0) | -(uint)(local_res8[0] != 0) & 0x10;
  return -local_res8[0];
}



// FUNCTION 1414075d0 FUN_1414075d0 body=222 status=ok
// SIG undefined FUN_1414075d0(void)

void FUN_1414075d0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 local_res8;
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res8 = 0;
  puVar2 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0xd00))(param_1,puVar2,local_res8);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414076b0 FUN_1414076b0 body=325 status=ok
// SIG undefined FUN_1414076b0(void)

void FUN_1414076b0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 local_res10;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_a8 = local_b8;
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_a0 = local_b0;
  FUN_140cdc770(param_1,local_res10,&local_a8,puVar1);
  return;
}



// FUNCTION 141407800 FUN_141407800 body=162 status=ok
// SIG undefined FUN_141407800(void)

longlong FUN_141407800(void)

{
  if (DAT_14688ff40 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacterSoundData",&DAT_14688ff40,FUN_140447710,0x180,
                  0x10000000,0,L"Engine",FUN_14140b1a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d7a50,&LAB_140447700,0);
  }
  return DAT_14688ff40;
}



// FUNCTION 1414078c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AInteractiveFoliageActor::GetPrivateStaticClass(void)

{
  if (DAT_14688ff50 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacterSoundLogicComponent",&DAT_14688ff50,FUN_140447710
                  ,0x398,0x10000000,0,L"Engine",FUN_14140b240,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d79a0,&LAB_140447700,0);
  }
  return DAT_14688ff50;
}



// FUNCTION 141407990 FUN_141407990 body=47 status=ok
// SIG undefined FUN_141407990(void)

longlong FUN_141407990(void)

{
  if (DAT_146890890 == 0) {
    FUN_141786440(&DAT_146890890,&PTR_FUN_144a1d5d0);
  }
  return DAT_146890890;
}



// FUNCTION 1414079c0 FUN_1414079c0 body=47 status=ok
// SIG undefined FUN_1414079c0(void)

longlong FUN_1414079c0(void)

{
  if (DAT_14688ff68 == 0) {
    FUN_141786a30(&DAT_14688ff68,&PTR_FUN_1463b46e0);
  }
  return DAT_14688ff68;
}



// FUNCTION 1414079f0 FUN_1414079f0 body=47 status=ok
// SIG undefined FUN_1414079f0(void)

longlong FUN_1414079f0(void)

{
  if (DAT_14688ff70 == 0) {
    FUN_141786a30(&DAT_14688ff70,&PTR_FUN_1463b4720);
  }
  return DAT_14688ff70;
}



// FUNCTION 141407a20 FUN_141407a20 body=47 status=ok
// SIG undefined FUN_141407a20(void)

longlong FUN_141407a20(void)

{
  if (DAT_14688ff78 == 0) {
    FUN_141786a30(&DAT_14688ff78,&PTR_FUN_1463b4760);
  }
  return DAT_14688ff78;
}



// FUNCTION 141407a50 FUN_141407a50 body=47 status=ok
// SIG undefined FUN_141407a50(void)

longlong FUN_141407a50(void)

{
  if (DAT_14688ff80 == 0) {
    FUN_141786a30(&DAT_14688ff80,&PTR_FUN_1463b47a0);
  }
  return DAT_14688ff80;
}



// FUNCTION 141407a80 FUN_141407a80 body=47 status=ok
// SIG undefined FUN_141407a80(void)

longlong FUN_141407a80(void)

{
  if (DAT_14688ff88 == 0) {
    FUN_141786a30(&DAT_14688ff88,&PTR_FUN_1463b4820);
  }
  return DAT_14688ff88;
}



// FUNCTION 141407ab0 FUN_141407ab0 body=47 status=ok
// SIG undefined FUN_141407ab0(void)

longlong FUN_141407ab0(void)

{
  if (DAT_14688ff90 == 0) {
    FUN_141786a30(&DAT_14688ff90,&PTR_FUN_1463b48a0);
  }
  return DAT_14688ff90;
}



// FUNCTION 141407ae0 FUN_141407ae0 body=47 status=ok
// SIG undefined FUN_141407ae0(void)

longlong FUN_141407ae0(void)

{
  if (DAT_14688ff98 == 0) {
    FUN_141786a30(&DAT_14688ff98,&PTR_FUN_1463b4920);
  }
  return DAT_14688ff98;
}



// FUNCTION 141407b10 FUN_141407b10 body=47 status=ok
// SIG undefined FUN_141407b10(void)

longlong FUN_141407b10(void)

{
  if (DAT_14688ffa0 == 0) {
    FUN_141786a30(&DAT_14688ffa0,&PTR_FUN_1463b49b0);
  }
  return DAT_14688ffa0;
}



// FUNCTION 141407b40 FUN_141407b40 body=47 status=ok
// SIG undefined FUN_141407b40(void)

longlong FUN_141407b40(void)

{
  if (DAT_14688ffa8 == 0) {
    FUN_141786a30(&DAT_14688ffa8,&PTR_FUN_1463b49f0);
  }
  return DAT_14688ffa8;
}



// FUNCTION 141407b70 FUN_141407b70 body=47 status=ok
// SIG undefined FUN_141407b70(void)

longlong FUN_141407b70(void)

{
  if (DAT_14688ffb0 == 0) {
    FUN_141786a30(&DAT_14688ffb0,&PTR_FUN_1463b4a30);
  }
  return DAT_14688ffb0;
}



// FUNCTION 141407ba0 FUN_141407ba0 body=47 status=ok
// SIG undefined FUN_141407ba0(void)

longlong FUN_141407ba0(void)

{
  if (DAT_14688ffb8 == 0) {
    FUN_141786a30(&DAT_14688ffb8,&PTR_FUN_1463b4a70);
  }
  return DAT_14688ffb8;
}



// FUNCTION 141407bd0 FUN_141407bd0 body=47 status=ok
// SIG undefined FUN_141407bd0(void)

longlong FUN_141407bd0(void)

{
  if (DAT_14688ffc0 == 0) {
    FUN_141786a30(&DAT_14688ffc0,&PTR_FUN_1463b4af0);
  }
  return DAT_14688ffc0;
}



// FUNCTION 141407c00 FUN_141407c00 body=47 status=ok
// SIG undefined FUN_141407c00(void)

longlong FUN_141407c00(void)

{
  if (DAT_14688ffc8 == 0) {
    FUN_141786a30(&DAT_14688ffc8,&PTR_FUN_1463b4b70);
  }
  return DAT_14688ffc8;
}



// FUNCTION 141407c30 FUN_141407c30 body=47 status=ok
// SIG undefined FUN_141407c30(void)

longlong FUN_141407c30(void)

{
  if (DAT_14688ffd0 == 0) {
    FUN_141786a30(&DAT_14688ffd0,&PTR_FUN_1463b4bf0);
  }
  return DAT_14688ffd0;
}



// FUNCTION 141407c60 FUN_141407c60 body=47 status=ok
// SIG undefined FUN_141407c60(void)

longlong FUN_141407c60(void)

{
  if (DAT_14688ffd8 == 0) {
    FUN_141786a30(&DAT_14688ffd8,&PTR_FUN_1463b4c30);
  }
  return DAT_14688ffd8;
}



// FUNCTION 141407c90 FUN_141407c90 body=47 status=ok
// SIG undefined FUN_141407c90(void)

longlong FUN_141407c90(void)

{
  if (DAT_14688ffe0 == 0) {
    FUN_141786a30(&DAT_14688ffe0,&PTR_FUN_1463b4c70);
  }
  return DAT_14688ffe0;
}



// FUNCTION 141407cc0 FUN_141407cc0 body=47 status=ok
// SIG undefined FUN_141407cc0(void)

longlong FUN_141407cc0(void)

{
  if (DAT_14688ffe8 == 0) {
    FUN_141786a30(&DAT_14688ffe8,&PTR_FUN_1463b4cb0);
  }
  return DAT_14688ffe8;
}



// FUNCTION 141407cf0 FUN_141407cf0 body=47 status=ok
// SIG undefined FUN_141407cf0(void)

longlong FUN_141407cf0(void)

{
  if (DAT_14688fff0 == 0) {
    FUN_141786a30(&DAT_14688fff0,&PTR_FUN_1463b4cf0);
  }
  return DAT_14688fff0;
}



// FUNCTION 141407d20 FUN_141407d20 body=47 status=ok
// SIG undefined FUN_141407d20(void)

longlong FUN_141407d20(void)

{
  if (DAT_14688fff8 == 0) {
    FUN_141786a30(&DAT_14688fff8,&PTR_FUN_1463b4d30);
  }
  return DAT_14688fff8;
}



// FUNCTION 141407d50 FUN_141407d50 body=47 status=ok
// SIG undefined FUN_141407d50(void)

longlong FUN_141407d50(void)

{
  if (DAT_146890000 == 0) {
    FUN_141786a30(&DAT_146890000,&PTR_FUN_1463b4d70);
  }
  return DAT_146890000;
}



// FUNCTION 141407d80 FUN_141407d80 body=47 status=ok
// SIG undefined FUN_141407d80(void)

longlong FUN_141407d80(void)

{
  if (DAT_146890008 == 0) {
    FUN_141786a30(&DAT_146890008,&PTR_FUN_1463b4db0);
  }
  return DAT_146890008;
}



// FUNCTION 141407db0 FUN_141407db0 body=47 status=ok
// SIG undefined FUN_141407db0(void)

longlong FUN_141407db0(void)

{
  if (DAT_146890010 == 0) {
    FUN_141786a30(&DAT_146890010,&PTR_FUN_1463b4e30);
  }
  return DAT_146890010;
}



// FUNCTION 141407de0 FUN_141407de0 body=47 status=ok
// SIG undefined FUN_141407de0(void)

longlong FUN_141407de0(void)

{
  if (DAT_146890018 == 0) {
    FUN_141786a30(&DAT_146890018,&PTR_FUN_1463b4ec0);
  }
  return DAT_146890018;
}



// FUNCTION 141407e10 FUN_141407e10 body=47 status=ok
// SIG undefined FUN_141407e10(void)

longlong FUN_141407e10(void)

{
  if (DAT_146890020 == 0) {
    FUN_141786a30(&DAT_146890020,&PTR_FUN_1463b4f00);
  }
  return DAT_146890020;
}



// FUNCTION 141407e40 FUN_141407e40 body=47 status=ok
// SIG undefined FUN_141407e40(void)

longlong FUN_141407e40(void)

{
  if (DAT_146890028 == 0) {
    FUN_141786a30(&DAT_146890028,&PTR_FUN_1463b4f40);
  }
  return DAT_146890028;
}



// FUNCTION 141407e70 FUN_141407e70 body=47 status=ok
// SIG undefined FUN_141407e70(void)

longlong FUN_141407e70(void)

{
  if (DAT_146890030 == 0) {
    FUN_141786a30(&DAT_146890030,&PTR_FUN_1463b4f80);
  }
  return DAT_146890030;
}



// FUNCTION 141407ea0 FUN_141407ea0 body=47 status=ok
// SIG undefined FUN_141407ea0(void)

longlong FUN_141407ea0(void)

{
  if (DAT_146890038 == 0) {
    FUN_141786a30(&DAT_146890038,&PTR_FUN_1463b4fc0);
  }
  return DAT_146890038;
}



// FUNCTION 141407ed0 FUN_141407ed0 body=47 status=ok
// SIG undefined FUN_141407ed0(void)

longlong FUN_141407ed0(void)

{
  if (DAT_146890040 == 0) {
    FUN_141786a30(&DAT_146890040,&PTR_FUN_1463b5000);
  }
  return DAT_146890040;
}



// FUNCTION 141407f00 FUN_141407f00 body=47 status=ok
// SIG undefined FUN_141407f00(void)

longlong FUN_141407f00(void)

{
  if (DAT_146890048 == 0) {
    FUN_141786a30(&DAT_146890048,&PTR_FUN_1463b5080);
  }
  return DAT_146890048;
}



// FUNCTION 141407f30 FUN_141407f30 body=47 status=ok
// SIG undefined FUN_141407f30(void)

longlong FUN_141407f30(void)

{
  if (DAT_146890050 == 0) {
    FUN_141786a30(&DAT_146890050,&PTR_FUN_1463b50c0);
  }
  return DAT_146890050;
}



// FUNCTION 141407f60 FUN_141407f60 body=47 status=ok
// SIG undefined FUN_141407f60(void)

longlong FUN_141407f60(void)

{
  if (DAT_146890058 == 0) {
    FUN_141786a30(&DAT_146890058,&PTR_FUN_1463b5100);
  }
  return DAT_146890058;
}



// FUNCTION 141407f90 FUN_141407f90 body=47 status=ok
// SIG undefined FUN_141407f90(void)

longlong FUN_141407f90(void)

{
  if (DAT_146890060 == 0) {
    FUN_141786a30(&DAT_146890060,&PTR_FUN_1463b5140);
  }
  return DAT_146890060;
}



// FUNCTION 141407fc0 FUN_141407fc0 body=47 status=ok
// SIG undefined FUN_141407fc0(void)

longlong FUN_141407fc0(void)

{
  if (DAT_146890068 == 0) {
    FUN_141786a30(&DAT_146890068,&PTR_FUN_1463b5180);
  }
  return DAT_146890068;
}



// FUNCTION 141407ff0 FUN_141407ff0 body=47 status=ok
// SIG undefined FUN_141407ff0(void)

longlong FUN_141407ff0(void)

{
  if (DAT_146890070 == 0) {
    FUN_141786a30(&DAT_146890070,&PTR_FUN_1463b51c0);
  }
  return DAT_146890070;
}



// FUNCTION 141408020 FUN_141408020 body=47 status=ok
// SIG undefined FUN_141408020(void)

longlong FUN_141408020(void)

{
  if (DAT_146890078 == 0) {
    FUN_141786a30(&DAT_146890078,&PTR_FUN_1463b5200);
  }
  return DAT_146890078;
}



// FUNCTION 141408050 FUN_141408050 body=47 status=ok
// SIG undefined FUN_141408050(void)

longlong FUN_141408050(void)

{
  if (DAT_146890080 == 0) {
    FUN_141786a30(&DAT_146890080,&PTR_FUN_1463b5240);
  }
  return DAT_146890080;
}



// FUNCTION 141408080 FUN_141408080 body=47 status=ok
// SIG undefined FUN_141408080(void)

longlong FUN_141408080(void)

{
  if (DAT_146890088 == 0) {
    FUN_141786a30(&DAT_146890088,&PTR_FUN_1463b5280);
  }
  return DAT_146890088;
}



// FUNCTION 1414080b0 FUN_1414080b0 body=47 status=ok
// SIG undefined FUN_1414080b0(void)

longlong FUN_1414080b0(void)

{
  if (DAT_146890090 == 0) {
    FUN_141786a30(&DAT_146890090,&PTR_FUN_1463b52c0);
  }
  return DAT_146890090;
}



// FUNCTION 1414080e0 FUN_1414080e0 body=47 status=ok
// SIG undefined FUN_1414080e0(void)

longlong FUN_1414080e0(void)

{
  if (DAT_146890098 == 0) {
    FUN_141786a30(&DAT_146890098,&PTR_FUN_1463b5340);
  }
  return DAT_146890098;
}



// FUNCTION 141408110 FUN_141408110 body=47 status=ok
// SIG undefined FUN_141408110(void)

longlong FUN_141408110(void)

{
  if (DAT_1468900a0 == 0) {
    FUN_141786a30(&DAT_1468900a0,&PTR_FUN_1463b53c0);
  }
  return DAT_1468900a0;
}



// FUNCTION 141408140 FUN_141408140 body=47 status=ok
// SIG undefined FUN_141408140(void)

longlong FUN_141408140(void)

{
  if (DAT_1468900a8 == 0) {
    FUN_141786a30(&DAT_1468900a8,&PTR_FUN_1463b5400);
  }
  return DAT_1468900a8;
}



// FUNCTION 141408170 FUN_141408170 body=47 status=ok
// SIG undefined FUN_141408170(void)

longlong FUN_141408170(void)

{
  if (DAT_1468900b0 == 0) {
    FUN_141786a30(&DAT_1468900b0,&PTR_FUN_1463b5480);
  }
  return DAT_1468900b0;
}



// FUNCTION 1414081a0 FUN_1414081a0 body=47 status=ok
// SIG undefined FUN_1414081a0(void)

longlong FUN_1414081a0(void)

{
  if (DAT_1468900b8 == 0) {
    FUN_141786a30(&DAT_1468900b8,&PTR_FUN_1463b5500);
  }
  return DAT_1468900b8;
}



// FUNCTION 1414081d0 FUN_1414081d0 body=47 status=ok
// SIG undefined FUN_1414081d0(void)

longlong FUN_1414081d0(void)

{
  if (DAT_1468900c0 == 0) {
    FUN_141786a30(&DAT_1468900c0,&PTR_FUN_1463b5540);
  }
  return DAT_1468900c0;
}



// FUNCTION 141408200 FUN_141408200 body=47 status=ok
// SIG undefined FUN_141408200(void)

longlong FUN_141408200(void)

{
  if (DAT_1468900c8 == 0) {
    FUN_141786a30(&DAT_1468900c8,&PTR_FUN_1463b5580);
  }
  return DAT_1468900c8;
}



// FUNCTION 141408230 FUN_141408230 body=47 status=ok
// SIG undefined FUN_141408230(void)

longlong FUN_141408230(void)

{
  if (DAT_1468900d0 == 0) {
    FUN_141786a30(&DAT_1468900d0,&PTR_FUN_1463b55c0);
  }
  return DAT_1468900d0;
}



// FUNCTION 141408260 FUN_141408260 body=47 status=ok
// SIG undefined FUN_141408260(void)

longlong FUN_141408260(void)

{
  if (DAT_1468900d8 == 0) {
    FUN_141786a30(&DAT_1468900d8,&PTR_FUN_1463b5650);
  }
  return DAT_1468900d8;
}



// FUNCTION 141408290 FUN_141408290 body=47 status=ok
// SIG undefined FUN_141408290(void)

longlong FUN_141408290(void)

{
  if (DAT_1468900e0 == 0) {
    FUN_141786a30(&DAT_1468900e0,&PTR_FUN_1463b5690);
  }
  return DAT_1468900e0;
}



// FUNCTION 1414082c0 FUN_1414082c0 body=47 status=ok
// SIG undefined FUN_1414082c0(void)

longlong FUN_1414082c0(void)

{
  if (DAT_1468900e8 == 0) {
    FUN_141786a30(&DAT_1468900e8,&PTR_FUN_1463b56d0);
  }
  return DAT_1468900e8;
}



// FUNCTION 1414082f0 FUN_1414082f0 body=47 status=ok
// SIG undefined FUN_1414082f0(void)

longlong FUN_1414082f0(void)

{
  if (DAT_1468900f0 == 0) {
    FUN_141786a30(&DAT_1468900f0,&PTR_FUN_1463b5750);
  }
  return DAT_1468900f0;
}



// FUNCTION 141408320 FUN_141408320 body=47 status=ok
// SIG undefined FUN_141408320(void)

longlong FUN_141408320(void)

{
  if (DAT_1468900f8 == 0) {
    FUN_141786a30(&DAT_1468900f8,&PTR_FUN_1463b5860);
  }
  return DAT_1468900f8;
}



// FUNCTION 141408350 FUN_141408350 body=47 status=ok
// SIG undefined FUN_141408350(void)

longlong FUN_141408350(void)

{
  if (DAT_146890100 == 0) {
    FUN_141786a30(&DAT_146890100,&PTR_FUN_1463b5920);
  }
  return DAT_146890100;
}



// FUNCTION 141408380 FUN_141408380 body=47 status=ok
// SIG undefined FUN_141408380(void)

longlong FUN_141408380(void)

{
  if (DAT_146890108 == 0) {
    FUN_141786a30(&DAT_146890108,&PTR_FUN_1463b5960);
  }
  return DAT_146890108;
}


