// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1414d2020 FUN_1414d2020 body=47 status=ok
// SIG undefined FUN_1414d2020(void)

longlong FUN_1414d2020(void)

{
  if (DAT_1468a07a0 == 0) {
    FUN_141786440(&DAT_1468a07a0,&PTR_FUN_144bdae10);
  }
  return DAT_1468a07a0;
}



// FUNCTION 1414d2050 FUN_1414d2050 body=47 status=ok
// SIG undefined FUN_1414d2050(void)

longlong FUN_1414d2050(void)

{
  if (DAT_1468a07b0 == 0) {
    FUN_141786440(&DAT_1468a07b0,&PTR_FUN_144bdb0e0);
  }
  return DAT_1468a07b0;
}



// FUNCTION 1414d2080 FUN_1414d2080 body=47 status=ok
// SIG undefined FUN_1414d2080(void)

longlong FUN_1414d2080(void)

{
  if (DAT_1468a07c0 == 0) {
    FUN_141786440(&DAT_1468a07c0,&PTR_FUN_144bdb2f0);
  }
  return DAT_1468a07c0;
}



// FUNCTION 1414d20b0 FUN_1414d20b0 body=47 status=ok
// SIG undefined FUN_1414d20b0(void)

longlong FUN_1414d20b0(void)

{
  if (DAT_1468a07f8 == 0) {
    FUN_1417866a0(&DAT_1468a07f8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464708d0);
  }
  return DAT_1468a07f8;
}



// FUNCTION 1414d20e0 FUN_1414d20e0 body=47 status=ok
// SIG undefined FUN_1414d20e0(void)

longlong FUN_1414d20e0(void)

{
  if (DAT_1468a0558 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0558,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646c280);
  }
  return DAT_1468a0558;
}



// FUNCTION 1414d2110 FUN_1414d2110 body=47 status=ok
// SIG undefined FUN_1414d2110(void)

longlong FUN_1414d2110(void)

{
  if (DAT_1468a0688 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0688,&PTR_Z_Construct_UPackage__Script_MechWarrior_14646dad0);
  }
  return DAT_1468a0688;
}



// FUNCTION 1414d2140 FUN_1414d2140 body=202 status=ok
// SIG undefined FUN_1414d2140(void)

void FUN_1414d2140(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = (**(code **)(*param_1 + 0x710))(param_1,local_res10[0],local_res8[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414d2210 FUN_1414d2210 body=78 status=ok
// SIG undefined FUN_1414d2210(void)

void FUN_1414d2210(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x718))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"CleanEventEnemy_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001414d2257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x720))(param_1);
  return;
}



// FUNCTION 1414d2260 FUN_1414d2260 body=358 status=ok
// SIG undefined FUN_1414d2260(void)

void FUN_1414d2260(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined8 local_48;
  longlong local_40 [3];
  undefined1 local_28 [16];
  
  local_48 = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
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
  local_40[2] = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FString::FString(local_28,local_40);
  cVar1 = (**(code **)(*param_1 + 0x748))(param_1,local_40 + 2,local_res10,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ExecutePollAction_Validate");
  }
  else {
    local_40[2] = local_48;
    FString::FString(local_28,local_40);
    (**(code **)(*param_1 + 0x750))(param_1,local_40 + 2,local_res10,local_res8[0]);
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414d23d0 FUN_1414d23d0 body=271 status=ok
// SIG undefined FUN_1414d23d0(void)

void FUN_1414d23d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  int local_res18 [2];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0;
  puVar2 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b5ad70(param_1,local_res20,puVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414d24e0 execGetAnimInstance body=44 status=ok
// SIG undefined execGetAnimInstance(void)

void USkeletalMeshComponent::execGetAnimInstance
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetAnimInstance();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414d2510 FUN_1414d2510 body=44 status=ok
// SIG undefined FUN_1414d2510(void)

void FUN_1414d2510(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b5c450();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414d2540 FUN_1414d2540 body=44 status=ok
// SIG undefined FUN_1414d2540(void)

void FUN_1414d2540(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140b5c920();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414d2570 FUN_1414d2570 body=78 status=ok
// SIG undefined FUN_1414d2570(void)

void FUN_1414d2570(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x6f8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"GetUpdatedSessionStats_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001414d25b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x700))(param_1);
  return;
}



// FUNCTION 1414d25c0 FUN_1414d25c0 body=255 status=ok
// SIG undefined FUN_1414d25c0(void)

void FUN_1414d25c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_res8;
  longlong local_18 [2];
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
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
  cVar1 = (**(code **)(*param_1 + 0x758))(param_1,local_res8,local_18);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"HookToEnemySpawnEvent_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x760))(param_1,local_res8,local_18);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414d26c0 FUN_1414d26c0 body=175 status=ok
// SIG undefined FUN_1414d26c0(void)

void FUN_1414d26c0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_140b61200(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1414d2770 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140dfc200(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414d2830 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140dfc4c0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414d28f0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140dfc750(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414d29b0 FUN_1414d29b0 body=130 status=ok
// SIG undefined FUN_1414d29b0(void)

void FUN_1414d29b0(undefined8 param_1,longlong param_2)

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
  FUN_140dfe500(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414d2a40 FUN_1414d2a40 body=711 status=ok
// SIG undefined FUN_1414d2a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414d2a40(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [2];
  undefined1 local_d8 [4];
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  void *pvStack_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  
  local_e8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_f0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_f0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  local_f8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_f8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_d4 = _DAT_1468b5d90;
  local_c8 = _DAT_1468b5d90;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  pvStack_a0 = (void *)0x0;
  local_90 = _DAT_1468b5d90;
  local_d8[0] = 0;
  local_cc = DAT_1468b5d98;
  local_c0 = DAT_1468b5d98;
  local_98 = 0;
  local_88 = DAT_1468b5d98;
  local_84 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  _Src = pvStack_a0;
  local_74 = local_d4;
  local_78[0] = local_d8[0];
  local_6c = local_cc;
  local_60 = local_c0;
  local_58 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_98;
  local_50 = uStack_b0;
  local_48 = local_a8;
  local_68 = local_c8;
  local_40 = (void *)0x0;
  local_38 = (int)local_98;
  if ((int)local_98 == 0) {
    local_34 = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_40,local_98 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_40,_Src,lVar1 << 4);
  }
  local_28 = local_88;
  local_20 = local_80;
  local_30 = local_90;
  local_24 = local_84;
  FUN_140dffa10(param_1,local_e8[0],local_res10[0],local_f0,local_f8,local_res20,local_78);
  if (pvStack_a0 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414d2d10 FUN_1414d2d10 body=318 status=ok
// SIG undefined FUN_1414d2d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414d2d10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_4c = _DAT_1468b5d90;
  local_40 = _DAT_1468b5d90;
  local_34 = _DAT_1468b5d90;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_44 = DAT_1468b5d98;
  local_38 = DAT_1468b5d98;
  local_2c = DAT_1468b5d98;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140dffa30(param_1,local_res10,puVar1);
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414d2e90 FUN_1414d2e90 body=263 status=ok
// SIG undefined FUN_1414d2e90(void)

void FUN_1414d2e90(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_a8 [16];
  undefined1 local_98 [12];
  undefined4 local_8c;
  
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
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_98;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar2 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b65f80(param_1,puVar1,puVar2);
  return;
}



// FUNCTION 1414d2fa0 FUN_1414d2fa0 body=178 status=ok
// SIG undefined FUN_1414d2fa0(void)

void FUN_1414d2fa0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
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
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b67a10(param_1,puVar1);
  return;
}



// FUNCTION 1414d3060 FUN_1414d3060 body=767 status=ok
// SIG undefined FUN_1414d3060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414d3060(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [4];
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  local_e0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_e0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_e8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_f0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_f0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  local_f8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_f8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_d4 = _DAT_1468b5d90;
  local_c8 = _DAT_1468b5d90;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = _DAT_1468b5d90;
  local_d8[0] = 0;
  local_cc = DAT_1468b5d98;
  local_c0 = DAT_1468b5d98;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_90 = DAT_1468b5d98;
  local_8c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  _Src = local_a8;
  local_74 = local_d4;
  local_78[0] = local_d8[0];
  local_6c = local_cc;
  local_60 = local_c0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_a0;
  local_58 = local_b8;
  local_50 = uStack_b0;
  local_68 = local_c8;
  local_48 = (void *)0x0;
  local_40 = (int)local_a0;
  if ((int)local_a0 == 0) {
    local_3c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_48,local_a0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar1 << 4);
  }
  local_30 = local_90;
  local_28 = local_88;
  local_38 = local_98;
  local_2c = local_8c;
  FUN_140b67ce0(param_1,local_e0,local_res10[0],local_e8,local_f0,local_f8,local_res20,local_78);
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414d33a0 FUN_1414d33a0 body=128 status=ok
// SIG undefined FUN_1414d33a0(void)

void FUN_1414d33a0(undefined8 param_1,longlong param_2)

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
  FUN_140e019f0(param_1,local_res10);
  return;
}



// FUNCTION 1414d3420 FUN_1414d3420 body=128 status=ok
// SIG undefined FUN_1414d3420(void)

void FUN_1414d3420(undefined8 param_1,longlong param_2)

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
  FUN_140e01b70(param_1,local_res10);
  return;
}



// FUNCTION 1414d34a0 FUN_1414d34a0 body=130 status=ok
// SIG undefined FUN_1414d34a0(void)

void FUN_1414d34a0(undefined8 param_1,longlong param_2)

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
  FUN_140b6ff30(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414d3530 FUN_1414d3530 body=167 status=ok
// SIG undefined FUN_1414d3530(void)

void FUN_1414d3530(longlong *param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = (undefined4)local_38;
  uStack_14 = local_38._4_4_;
  uStack_10 = (undefined4)uStack_30;
  uStack_c = uStack_30._4_4_;
  (**(code **)(*param_1 + 0x6f0))(param_1,&local_28);
  return;
}



// FUNCTION 1414d35e0 FUN_1414d35e0 body=128 status=ok
// SIG undefined FUN_1414d35e0(void)

void FUN_1414d35e0(undefined8 param_1,longlong param_2)

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
  FUN_140b712c0(param_1,local_res10);
  return;
}



// FUNCTION 1414d3660 FUN_1414d3660 body=181 status=ok
// SIG undefined FUN_1414d3660(void)

void FUN_1414d3660(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0x738))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"SetEventEnemy_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x740))(param_1,local_res8);
  return;
}



// FUNCTION 1414d3720 execServerChangeName body=187 status=ok
// SIG undefined execServerChangeName(void)

void APlayerController::execServerChangeName(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x728))(param_1,local_18);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"SetEventEnemyName_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x730))(param_1,local_18);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414d37e0 FUN_1414d37e0 body=425 status=ok
// SIG undefined FUN_1414d37e0(void)

void FUN_1414d37e0(undefined8 param_1,longlong param_2)

{
  ulonglong local_res10;
  undefined8 local_res20;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  local_78 = 0xffffffff;
  local_68 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_74 = 0;
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = local_res10 & 0xffffffff00000000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_38 = 0;
  local_30 = 0;
  local_80 = 0;
  local_40 = 0;
  local_50 = local_78;
  local_4c = (undefined4)local_74;
  local_48 = local_74._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = local_68;
  FString::FString(local_20,local_60);
  FSoftObjectPath::operator=(&local_40,&local_28);
  FUN_1405f0e60(&local_50,local_88,local_res20,(undefined4)local_res10);
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414d3990 execStopAnimMontage body=132 status=ok
// SIG undefined execStopAnimMontage(void)

void ACharacter::execStopAnimMontage(longlong *param_1,longlong param_2)

{
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
  (**(code **)(*param_1 + 0x788))(param_1,local_res8);
  return;
}



// FUNCTION 1414d3a20 FUN_1414d3a20 body=130 status=ok
// SIG undefined FUN_1414d3a20(void)

void FUN_1414d3a20(undefined8 param_1,longlong param_2)

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
  FUN_140b75c40(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414d3ab0 execRestartPlayerAtPlayerStart body=195 status=ok
// SIG undefined execRestartPlayerAtPlayerStart(void)

void AGameModeBase::execRestartPlayerAtPlayerStart(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x710))(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 1414d3b80 FUN_1414d3b80 body=162 status=ok
// SIG undefined FUN_1414d3b80(void)

longlong FUN_1414d3b80(void)

{
  if (DAT_1468a1048 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TrophyCaseProxy",&DAT_1468a1048,FUN_1414d6970,0x658,
                  0x10000008,0,L"Engine",&LAB_1414d52e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1412d7880
                  ,&LAB_140447700,0);
  }
  return DAT_1468a1048;
}



// FUNCTION 1414d3c30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerState::GetPrivateStaticClass(void)

{
  if (DAT_1468a0d20 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreWeaponBalanceStateComponent",&DAT_1468a0d20,
                  FUN_1414d69a0,0x478,0x10000000,0,L"Engine",FUN_1414d5370,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  APlayArea::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a0d20;
}



// FUNCTION 1414d3ce0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGActiveSkill::GetPrivateStaticClass(void)

{
  if (DAT_1468a0d48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TestMapsMenu",&DAT_1468a0d48,
                  StaticRegisterNativesUGActiveSkill,0x338,0x10000004,0,L"Game",FUN_1414d53e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGPasswordResetPage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a0d48;
}



// FUNCTION 1414d3d90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AMapFog::GetPrivateStaticClass(void)

{
  if (DAT_1468a0e88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TransporterCrane",&DAT_1468a0e88,StaticRegisterNativesAMapFog
                  ,0x490,0x10000000,0,L"Engine",&LAB_1414d5280,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_1468a0e88;
}



// FUNCTION 1414d3e40 FUN_1414d3e40 body=47 status=ok
// SIG undefined FUN_1414d3e40(void)

longlong FUN_1414d3e40(void)

{
  if (DAT_1468a0d40 == 0) {
    FUN_141786440(&DAT_1468a0d40,&PTR_GetPrivateStaticClass_144bde550);
  }
  return DAT_1468a0d40;
}



// FUNCTION 1414d3e70 FUN_1414d3e70 body=47 status=ok
// SIG undefined FUN_1414d3e70(void)

longlong FUN_1414d3e70(void)

{
  if (DAT_1468a0d28 == 0) {
    FUN_141786a30(&DAT_1468a0d28,&PTR_FUN_146470d30);
  }
  return DAT_1468a0d28;
}



// FUNCTION 1414d3ea0 FUN_1414d3ea0 body=47 status=ok
// SIG undefined FUN_1414d3ea0(void)

longlong FUN_1414d3ea0(void)

{
  if (DAT_1468a0d30 == 0) {
    FUN_141786a30(&DAT_1468a0d30,&PTR_FUN_146470df0);
  }
  return DAT_1468a0d30;
}



// FUNCTION 1414d3ed0 FUN_1414d3ed0 body=47 status=ok
// SIG undefined FUN_1414d3ed0(void)

longlong FUN_1414d3ed0(void)

{
  if (DAT_1468a0d38 == 0) {
    FUN_141786a30(&DAT_1468a0d38,&PTR_FUN_146470eb0);
  }
  return DAT_1468a0d38;
}



// FUNCTION 1414d3f00 FUN_1414d3f00 body=47 status=ok
// SIG undefined FUN_1414d3f00(void)

longlong FUN_1414d3f00(void)

{
  if (DAT_1468a0e80 == 0) {
    FUN_141786440(&DAT_1468a0e80,&PTR_GetPrivateStaticClass_144bdf1f0);
  }
  return DAT_1468a0e80;
}



// FUNCTION 1414d3f30 FUN_1414d3f30 body=47 status=ok
// SIG undefined FUN_1414d3f30(void)

longlong FUN_1414d3f30(void)

{
  if (DAT_1468a0e30 == 0) {
    FUN_141786a30(&DAT_1468a0e30,&PTR_FUN_1464721f0);
  }
  return DAT_1468a0e30;
}



// FUNCTION 1414d3f60 FUN_1414d3f60 body=47 status=ok
// SIG undefined FUN_1414d3f60(void)

longlong FUN_1414d3f60(void)

{
  if (DAT_1468a0e38 == 0) {
    FUN_141786a30(&DAT_1468a0e38,&PTR_FUN_1464722b0);
  }
  return DAT_1468a0e38;
}



// FUNCTION 1414d3f90 FUN_1414d3f90 body=47 status=ok
// SIG undefined FUN_1414d3f90(void)

longlong FUN_1414d3f90(void)

{
  if (DAT_1468a0e40 == 0) {
    FUN_141786a30(&DAT_1468a0e40,&PTR_FUN_146472370);
  }
  return DAT_1468a0e40;
}



// FUNCTION 1414d3fc0 FUN_1414d3fc0 body=47 status=ok
// SIG undefined FUN_1414d3fc0(void)

longlong FUN_1414d3fc0(void)

{
  if (DAT_1468a0e48 == 0) {
    FUN_141786a30(&DAT_1468a0e48,&PTR_FUN_1464723b0);
  }
  return DAT_1468a0e48;
}



// FUNCTION 1414d3ff0 FUN_1414d3ff0 body=47 status=ok
// SIG undefined FUN_1414d3ff0(void)

longlong FUN_1414d3ff0(void)

{
  if (DAT_1468a0e50 == 0) {
    FUN_141786a30(&DAT_1468a0e50,&PTR_FUN_1464723f0);
  }
  return DAT_1468a0e50;
}



// FUNCTION 1414d4020 FUN_1414d4020 body=47 status=ok
// SIG undefined FUN_1414d4020(void)

longlong FUN_1414d4020(void)

{
  if (DAT_1468a0e58 == 0) {
    FUN_141786a30(&DAT_1468a0e58,&PTR_FUN_146472430);
  }
  return DAT_1468a0e58;
}



// FUNCTION 1414d4050 FUN_1414d4050 body=47 status=ok
// SIG undefined FUN_1414d4050(void)

longlong FUN_1414d4050(void)

{
  if (DAT_1468a0e60 == 0) {
    FUN_141786a30(&DAT_1468a0e60,&PTR_FUN_146472470);
  }
  return DAT_1468a0e60;
}



// FUNCTION 1414d4080 FUN_1414d4080 body=47 status=ok
// SIG undefined FUN_1414d4080(void)

longlong FUN_1414d4080(void)

{
  if (DAT_1468a0e68 == 0) {
    FUN_141786a30(&DAT_1468a0e68,&PTR_FUN_1464724b0);
  }
  return DAT_1468a0e68;
}



// FUNCTION 1414d40b0 FUN_1414d40b0 body=47 status=ok
// SIG undefined FUN_1414d40b0(void)

longlong FUN_1414d40b0(void)

{
  if (DAT_1468a0e70 == 0) {
    FUN_141786a30(&DAT_1468a0e70,&PTR_FUN_146472540);
  }
  return DAT_1468a0e70;
}



// FUNCTION 1414d40e0 FUN_1414d40e0 body=47 status=ok
// SIG undefined FUN_1414d40e0(void)

longlong FUN_1414d40e0(void)

{
  if (DAT_1468a0e78 == 0) {
    FUN_141786a30(&DAT_1468a0e78,&PTR_FUN_146472580);
  }
  return DAT_1468a0e78;
}



// FUNCTION 1414d4110 FUN_1414d4110 body=53 status=ok
// SIG undefined FUN_1414d4110(void)

void FUN_1414d4110(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144be9c90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1414d4160 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass(void)

{
  if (DAT_1468a0d78 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TestSubMapsMenu",&DAT_1468a0d78,
                  StaticRegisterNativesUGFriendsPanelAllFriendsWidget,0x310,0x10000000,0,L"Game",
                  FUN_1414d5470,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGPasswordResetPage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a0d78;
}



// FUNCTION 1414d4210 FUN_1414d4210 body=47 status=ok
// SIG undefined FUN_1414d4210(void)

longlong FUN_1414d4210(void)

{
  if (DAT_1468a0d18 == 0) {
    FUN_141786440(&DAT_1468a0d18,&PTR_GetPrivateStaticClass_144bdea60);
  }
  return DAT_1468a0d18;
}



// FUNCTION 1414d4240 FUN_1414d4240 body=47 status=ok
// SIG undefined FUN_1414d4240(void)

longlong FUN_1414d4240(void)

{
  if (DAT_1468a0d10 == 0) {
    FUN_141786a30(&DAT_1468a0d10,&PTR_FUN_146470af0);
  }
  return DAT_1468a0d10;
}



// FUNCTION 1414d4270 FUN_1414d4270 body=47 status=ok
// SIG undefined FUN_1414d4270(void)

longlong FUN_1414d4270(void)

{
  if (DAT_1468a1040 == 0) {
    FUN_141786440(&DAT_1468a1040,&PTR_FUN_144be0be0);
  }
  return DAT_1468a1040;
}



// FUNCTION 1414d42a0 FUN_1414d42a0 body=47 status=ok
// SIG undefined FUN_1414d42a0(void)

longlong FUN_1414d42a0(void)

{
  if (DAT_1468a1000 == 0) {
    FUN_141786a30(&DAT_1468a1000,&PTR_FUN_146474550);
  }
  return DAT_1468a1000;
}



// FUNCTION 1414d42d0 FUN_1414d42d0 body=47 status=ok
// SIG undefined FUN_1414d42d0(void)

longlong FUN_1414d42d0(void)

{
  if (DAT_1468a1008 == 0) {
    FUN_141786a30(&DAT_1468a1008,&PTR_FUN_146474590);
  }
  return DAT_1468a1008;
}



// FUNCTION 1414d4300 FUN_1414d4300 body=47 status=ok
// SIG undefined FUN_1414d4300(void)

longlong FUN_1414d4300(void)

{
  if (DAT_1468a1010 == 0) {
    FUN_141786a30(&DAT_1468a1010,&PTR_FUN_1464745d0);
  }
  return DAT_1468a1010;
}



// FUNCTION 1414d4330 FUN_1414d4330 body=47 status=ok
// SIG undefined FUN_1414d4330(void)

longlong FUN_1414d4330(void)

{
  if (DAT_1468a1018 == 0) {
    FUN_141786a30(&DAT_1468a1018,&PTR_FUN_146474610);
  }
  return DAT_1468a1018;
}



// FUNCTION 1414d4360 FUN_1414d4360 body=47 status=ok
// SIG undefined FUN_1414d4360(void)

longlong FUN_1414d4360(void)

{
  if (DAT_1468a1020 == 0) {
    FUN_141786a30(&DAT_1468a1020,&PTR_FUN_146474650);
  }
  return DAT_1468a1020;
}



// FUNCTION 1414d4390 FUN_1414d4390 body=47 status=ok
// SIG undefined FUN_1414d4390(void)

longlong FUN_1414d4390(void)

{
  if (DAT_1468a1028 == 0) {
    FUN_141786a30(&DAT_1468a1028,&PTR_FUN_146474690);
  }
  return DAT_1468a1028;
}



// FUNCTION 1414d43c0 FUN_1414d43c0 body=47 status=ok
// SIG undefined FUN_1414d43c0(void)

longlong FUN_1414d43c0(void)

{
  if (DAT_1468a1030 == 0) {
    FUN_141786a30(&DAT_1468a1030,&PTR_FUN_1464746d0);
  }
  return DAT_1468a1030;
}



// FUNCTION 1414d43f0 FUN_1414d43f0 body=47 status=ok
// SIG undefined FUN_1414d43f0(void)

longlong FUN_1414d43f0(void)

{
  if (DAT_1468a1038 == 0) {
    FUN_141786a30(&DAT_1468a1038,&PTR_FUN_146474710);
  }
  return DAT_1468a1038;
}



// FUNCTION 1414d4420 FUN_1414d4420 body=162 status=ok
// SIG undefined FUN_1414d4420(void)

longlong FUN_1414d4420(void)

{
  if (DAT_1468a0cf8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreProjectileClassAspect",&DAT_1468a0cf8,FUN_140447710,
                  0x40,0x10000000,0,L"Engine",FUN_1414d5300,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_1468a0cf8;
}



// FUNCTION 1414d44e0 FUN_1414d44e0 body=53 status=ok
// SIG undefined FUN_1414d44e0(void)

void FUN_1414d44e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144be9ff0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414d4530 FUN_1414d4530 body=162 status=ok
// SIG undefined FUN_1414d4530(void)

longlong FUN_1414d4530(void)

{
  if (DAT_1468a0d08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TedioreWeaponAspectData",&DAT_1468a0d08,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",FUN_1414d5340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_1468a0d08;
}



// FUNCTION 1414d45f0 FUN_1414d45f0 body=47 status=ok
// SIG undefined FUN_1414d45f0(void)

longlong FUN_1414d45f0(void)

{
  if (DAT_1468a0d70 == 0) {
    FUN_141786440(&DAT_1468a0d70,&PTR_GetPrivateStaticClass_144be0750);
  }
  return DAT_1468a0d70;
}



// FUNCTION 1414d4620 FUN_1414d4620 body=47 status=ok
// SIG undefined FUN_1414d4620(void)

longlong FUN_1414d4620(void)

{
  if (DAT_1468a0d60 == 0) {
    FUN_141786a30(&DAT_1468a0d60,&PTR_FUN_146471190);
  }
  return DAT_1468a0d60;
}



// FUNCTION 1414d4650 FUN_1414d4650 body=47 status=ok
// SIG undefined FUN_1414d4650(void)

longlong FUN_1414d4650(void)

{
  if (DAT_1468a0d68 == 0) {
    FUN_141786a30(&DAT_1468a0d68,&PTR_FUN_146471250);
  }
  return DAT_1468a0d68;
}



// FUNCTION 1414d4680 FUN_1414d4680 body=53 status=ok
// SIG undefined FUN_1414d4680(void)

void FUN_1414d4680(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144bea108;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414d46d0 FUN_1414d46d0 body=53 status=ok
// SIG undefined FUN_1414d46d0(void)

void FUN_1414d46d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144bea220;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414d4730 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGBattleRoyaleGameState::GetPrivateStaticClass(void)

{
  if (DAT_1468a0e00 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TinkPile",&DAT_1468a0e00,FUN_1414d68b0,0x588,0x10000000,0,
                  L"Engine",&LAB_1414d5270,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AAfrPlayerState::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a0e00;
}



// FUNCTION 1414d47f0 FUN_1414d47f0 body=162 status=ok
// SIG undefined FUN_1414d47f0(void)

longlong FUN_1414d47f0(void)

{
  if (DAT_1468a0ef8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TransporterTrackComponent",&DAT_1468a0ef8,FUN_1414d6a30,0x210
                  ,0x10000000,0,L"Engine",&LAB_1414d5520,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_1468a0ef8;
}



// FUNCTION 1414d48a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFocusButtonWidget::GetPrivateStaticClass(void)

{
  if (DAT_1468a0fb0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TrophyCase",&DAT_1468a0fb0,FUN_1414d6940,0x6c8,0x10000000,0,
                  L"Engine",&LAB_1414d52c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1412fc140
                  ,&LAB_140447700,0);
  }
  return DAT_1468a0fb0;
}



// FUNCTION 1414d4950 FUN_1414d4950 body=47 status=ok
// SIG undefined FUN_1414d4950(void)

longlong FUN_1414d4950(void)

{
  if (DAT_1468a0ef0 == 0) {
    FUN_141786440(&DAT_1468a0ef0,&PTR_FUN_144be2c10);
  }
  return DAT_1468a0ef0;
}



// FUNCTION 1414d4980 FUN_1414d4980 body=47 status=ok
// SIG undefined FUN_1414d4980(void)

longlong FUN_1414d4980(void)

{
  if (DAT_1468a0ea8 == 0) {
    FUN_141786a30(&DAT_1468a0ea8,&PTR_FUN_146472910);
  }
  return DAT_1468a0ea8;
}



// FUNCTION 1414d49b0 FUN_1414d49b0 body=47 status=ok
// SIG undefined FUN_1414d49b0(void)

longlong FUN_1414d49b0(void)

{
  if (DAT_1468a0eb0 == 0) {
    FUN_141786a30(&DAT_1468a0eb0,&PTR_FUN_146472990);
  }
  return DAT_1468a0eb0;
}



// FUNCTION 1414d49e0 FUN_1414d49e0 body=47 status=ok
// SIG undefined FUN_1414d49e0(void)

longlong FUN_1414d49e0(void)

{
  if (DAT_1468a0eb8 == 0) {
    FUN_141786a30(&DAT_1468a0eb8,&PTR_FUN_146472a10);
  }
  return DAT_1468a0eb8;
}



// FUNCTION 1414d4a10 FUN_1414d4a10 body=47 status=ok
// SIG undefined FUN_1414d4a10(void)

longlong FUN_1414d4a10(void)

{
  if (DAT_1468a0ec0 == 0) {
    FUN_141786a30(&DAT_1468a0ec0,&PTR_FUN_146472aa0);
  }
  return DAT_1468a0ec0;
}



// FUNCTION 1414d4a40 FUN_1414d4a40 body=47 status=ok
// SIG undefined FUN_1414d4a40(void)

longlong FUN_1414d4a40(void)

{
  if (DAT_1468a0ec8 == 0) {
    FUN_141786a30(&DAT_1468a0ec8,&PTR_FUN_146472b30);
  }
  return DAT_1468a0ec8;
}



// FUNCTION 1414d4a70 FUN_1414d4a70 body=47 status=ok
// SIG undefined FUN_1414d4a70(void)

longlong FUN_1414d4a70(void)

{
  if (DAT_1468a0ed0 == 0) {
    FUN_141786a30(&DAT_1468a0ed0,&PTR_FUN_146472b70);
  }
  return DAT_1468a0ed0;
}



// FUNCTION 1414d4aa0 FUN_1414d4aa0 body=47 status=ok
// SIG undefined FUN_1414d4aa0(void)

longlong FUN_1414d4aa0(void)

{
  if (DAT_1468a0ed8 == 0) {
    FUN_141786a30(&DAT_1468a0ed8,&PTR_FUN_146472bb0);
  }
  return DAT_1468a0ed8;
}



// FUNCTION 1414d4ad0 FUN_1414d4ad0 body=47 status=ok
// SIG undefined FUN_1414d4ad0(void)

longlong FUN_1414d4ad0(void)

{
  if (DAT_1468a0ee0 == 0) {
    FUN_141786a30(&DAT_1468a0ee0,&PTR_FUN_146472bf0);
  }
  return DAT_1468a0ee0;
}



// FUNCTION 1414d4b00 FUN_1414d4b00 body=47 status=ok
// SIG undefined FUN_1414d4b00(void)

longlong FUN_1414d4b00(void)

{
  if (DAT_1468a0ee8 == 0) {
    FUN_141786a30(&DAT_1468a0ee8,&PTR_FUN_146472c70);
  }
  return DAT_1468a0ee8;
}



// FUNCTION 1414d4b30 FUN_1414d4b30 body=47 status=ok
// SIG undefined FUN_1414d4b30(void)

longlong FUN_1414d4b30(void)

{
  if (DAT_1468a0df8 == 0) {
    FUN_141786440(&DAT_1468a0df8,&PTR_GetPrivateStaticClass_144be3ef0);
  }
  return DAT_1468a0df8;
}



// FUNCTION 1414d4b60 FUN_1414d4b60 body=47 status=ok
// SIG undefined FUN_1414d4b60(void)

longlong FUN_1414d4b60(void)

{
  if (DAT_1468a0d90 == 0) {
    FUN_141786a30(&DAT_1468a0d90,&PTR_FUN_146471340);
  }
  return DAT_1468a0d90;
}



// FUNCTION 1414d4b90 FUN_1414d4b90 body=47 status=ok
// SIG undefined FUN_1414d4b90(void)

longlong FUN_1414d4b90(void)

{
  if (DAT_1468a0d98 == 0) {
    FUN_141786a30(&DAT_1468a0d98,&PTR_FUN_146471400);
  }
  return DAT_1468a0d98;
}



// FUNCTION 1414d4bc0 FUN_1414d4bc0 body=47 status=ok
// SIG undefined FUN_1414d4bc0(void)

longlong FUN_1414d4bc0(void)

{
  if (DAT_1468a0da0 == 0) {
    FUN_141786a30(&DAT_1468a0da0,&PTR_FUN_1464714c0);
  }
  return DAT_1468a0da0;
}



// FUNCTION 1414d4bf0 FUN_1414d4bf0 body=47 status=ok
// SIG undefined FUN_1414d4bf0(void)

longlong FUN_1414d4bf0(void)

{
  if (DAT_1468a0da8 == 0) {
    FUN_141786a30(&DAT_1468a0da8,&PTR_FUN_146471580);
  }
  return DAT_1468a0da8;
}



// FUNCTION 1414d4c20 FUN_1414d4c20 body=47 status=ok
// SIG undefined FUN_1414d4c20(void)

longlong FUN_1414d4c20(void)

{
  if (DAT_1468a0db0 == 0) {
    FUN_141786a30(&DAT_1468a0db0,&PTR_FUN_1464715c0);
  }
  return DAT_1468a0db0;
}



// FUNCTION 1414d4c50 FUN_1414d4c50 body=47 status=ok
// SIG undefined FUN_1414d4c50(void)

longlong FUN_1414d4c50(void)

{
  if (DAT_1468a0db8 == 0) {
    FUN_141786a30(&DAT_1468a0db8,&PTR_FUN_146471600);
  }
  return DAT_1468a0db8;
}



// FUNCTION 1414d4c80 FUN_1414d4c80 body=47 status=ok
// SIG undefined FUN_1414d4c80(void)

longlong FUN_1414d4c80(void)

{
  if (DAT_1468a0dc0 == 0) {
    FUN_141786a30(&DAT_1468a0dc0,&PTR_FUN_146471640);
  }
  return DAT_1468a0dc0;
}



// FUNCTION 1414d4cb0 FUN_1414d4cb0 body=47 status=ok
// SIG undefined FUN_1414d4cb0(void)

longlong FUN_1414d4cb0(void)

{
  if (DAT_1468a0dc8 == 0) {
    FUN_141786a30(&DAT_1468a0dc8,&PTR_FUN_146471680);
  }
  return DAT_1468a0dc8;
}



// FUNCTION 1414d4ce0 FUN_1414d4ce0 body=47 status=ok
// SIG undefined FUN_1414d4ce0(void)

longlong FUN_1414d4ce0(void)

{
  if (DAT_1468a0dd0 == 0) {
    FUN_141786a30(&DAT_1468a0dd0,&PTR_FUN_146471740);
  }
  return DAT_1468a0dd0;
}



// FUNCTION 1414d4d10 FUN_1414d4d10 body=47 status=ok
// SIG undefined FUN_1414d4d10(void)

longlong FUN_1414d4d10(void)

{
  if (DAT_1468a0dd8 == 0) {
    FUN_141786a30(&DAT_1468a0dd8,&PTR_FUN_1464717d0);
  }
  return DAT_1468a0dd8;
}



// FUNCTION 1414d4d40 FUN_1414d4d40 body=47 status=ok
// SIG undefined FUN_1414d4d40(void)

longlong FUN_1414d4d40(void)

{
  if (DAT_1468a0de0 == 0) {
    FUN_141786a30(&DAT_1468a0de0,&PTR_FUN_146471890);
  }
  return DAT_1468a0de0;
}



// FUNCTION 1414d4d70 FUN_1414d4d70 body=47 status=ok
// SIG undefined FUN_1414d4d70(void)

longlong FUN_1414d4d70(void)

{
  if (DAT_1468a0de8 == 0) {
    FUN_141786a30(&DAT_1468a0de8,&PTR_FUN_146471910);
  }
  return DAT_1468a0de8;
}



// FUNCTION 1414d4da0 FUN_1414d4da0 body=47 status=ok
// SIG undefined FUN_1414d4da0(void)

longlong FUN_1414d4da0(void)

{
  if (DAT_1468a0df0 == 0) {
    FUN_141786a30(&DAT_1468a0df0,&PTR_FUN_146471990);
  }
  return DAT_1468a0df0;
}



// FUNCTION 1414d4dd0 FUN_1414d4dd0 body=47 status=ok
// SIG undefined FUN_1414d4dd0(void)

longlong FUN_1414d4dd0(void)

{
  if (DAT_1468a0fa8 == 0) {
    FUN_141786440(&DAT_1468a0fa8,&PTR_GetPrivateStaticClass_144be2c80);
  }
  return DAT_1468a0fa8;
}



// FUNCTION 1414d4e00 FUN_1414d4e00 body=47 status=ok
// SIG undefined FUN_1414d4e00(void)

longlong FUN_1414d4e00(void)

{
  if (DAT_1468a0fa0 == 0) {
    FUN_141786a30(&DAT_1468a0fa0,&PTR_FUN_146473f00);
  }
  return DAT_1468a0fa0;
}



// FUNCTION 1414d4e70 FUN_1414d4e70 body=47 status=ok
// SIG undefined FUN_1414d4e70(void)

longlong FUN_1414d4e70(void)

{
  if (DAT_1468a0f60 == 0) {
    FUN_141786440(&DAT_1468a0f60,&PTR_GetPrivateStaticClass_144be7570);
  }
  return DAT_1468a0f60;
}



// FUNCTION 1414d4ea0 FUN_1414d4ea0 body=47 status=ok
// SIG undefined FUN_1414d4ea0(void)

longlong FUN_1414d4ea0(void)

{
  if (DAT_1468a0f00 == 0) {
    FUN_141786a30(&DAT_1468a0f00,&PTR_FUN_1464732f0);
  }
  return DAT_1468a0f00;
}



// FUNCTION 1414d4ed0 FUN_1414d4ed0 body=47 status=ok
// SIG undefined FUN_1414d4ed0(void)

longlong FUN_1414d4ed0(void)

{
  if (DAT_1468a0f08 == 0) {
    FUN_141786a30(&DAT_1468a0f08,&PTR_FUN_146473370);
  }
  return DAT_1468a0f08;
}



// FUNCTION 1414d4f00 FUN_1414d4f00 body=47 status=ok
// SIG undefined FUN_1414d4f00(void)

longlong FUN_1414d4f00(void)

{
  if (DAT_1468a0f10 == 0) {
    FUN_141786a30(&DAT_1468a0f10,&PTR_FUN_146473400);
  }
  return DAT_1468a0f10;
}



// FUNCTION 1414d4f30 FUN_1414d4f30 body=47 status=ok
// SIG undefined FUN_1414d4f30(void)

longlong FUN_1414d4f30(void)

{
  if (DAT_1468a0f18 == 0) {
    FUN_141786a30(&DAT_1468a0f18,&PTR_FUN_1464734d0);
  }
  return DAT_1468a0f18;
}



// FUNCTION 1414d4f60 FUN_1414d4f60 body=47 status=ok
// SIG undefined FUN_1414d4f60(void)

longlong FUN_1414d4f60(void)

{
  if (DAT_1468a0f20 == 0) {
    FUN_141786a30(&DAT_1468a0f20,&PTR_FUN_146473560);
  }
  return DAT_1468a0f20;
}



// FUNCTION 1414d4f90 FUN_1414d4f90 body=47 status=ok
// SIG undefined FUN_1414d4f90(void)

longlong FUN_1414d4f90(void)

{
  if (DAT_1468a0f28 == 0) {
    FUN_141786a30(&DAT_1468a0f28,&PTR_FUN_1464735f0);
  }
  return DAT_1468a0f28;
}



// FUNCTION 1414d4fc0 FUN_1414d4fc0 body=47 status=ok
// SIG undefined FUN_1414d4fc0(void)

longlong FUN_1414d4fc0(void)

{
  if (DAT_1468a0f30 == 0) {
    FUN_141786a30(&DAT_1468a0f30,&PTR_FUN_146473670);
  }
  return DAT_1468a0f30;
}



// FUNCTION 1414d4ff0 FUN_1414d4ff0 body=47 status=ok
// SIG undefined FUN_1414d4ff0(void)

longlong FUN_1414d4ff0(void)

{
  if (DAT_1468a0f38 == 0) {
    FUN_141786a30(&DAT_1468a0f38,&PTR_FUN_1464736f0);
  }
  return DAT_1468a0f38;
}



// FUNCTION 1414d5020 FUN_1414d5020 body=47 status=ok
// SIG undefined FUN_1414d5020(void)

longlong FUN_1414d5020(void)

{
  if (DAT_1468a0f40 == 0) {
    FUN_141786a30(&DAT_1468a0f40,&PTR_FUN_1464737b0);
  }
  return DAT_1468a0f40;
}



// FUNCTION 1414d5050 FUN_1414d5050 body=47 status=ok
// SIG undefined FUN_1414d5050(void)

longlong FUN_1414d5050(void)

{
  if (DAT_1468a0f48 == 0) {
    FUN_141786a30(&DAT_1468a0f48,&PTR_FUN_146473830);
  }
  return DAT_1468a0f48;
}



// FUNCTION 1414d5080 FUN_1414d5080 body=47 status=ok
// SIG undefined FUN_1414d5080(void)

longlong FUN_1414d5080(void)

{
  if (DAT_1468a0f50 == 0) {
    FUN_141786a30(&DAT_1468a0f50,&PTR_FUN_1464738b0);
  }
  return DAT_1468a0f50;
}



// FUNCTION 1414d50b0 FUN_1414d50b0 body=47 status=ok
// SIG undefined FUN_1414d50b0(void)

longlong FUN_1414d50b0(void)

{
  if (DAT_1468a0f58 == 0) {
    FUN_141786a30(&DAT_1468a0f58,&PTR_FUN_146473940);
  }
  return DAT_1468a0f58;
}



// FUNCTION 1414d50e0 FUN_1414d50e0 body=162 status=ok
// SIG undefined FUN_1414d50e0(void)

longlong FUN_1414d50e0(void)

{
  if (DAT_1468a0e10 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TireProjectileMovementComponent",&DAT_1468a0e10,FUN_140447710
                  ,0x370,0x10000000,0,L"Engine",FUN_1414d54e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1414d6890,&LAB_140447700,0);
  }
  return DAT_1468a0e10;
}



// FUNCTION 1414d51b0 FUN_1414d51b0 body=181 status=ok
// SIG undefined FUN_1414d51b0(void)

void FUN_1414d51b0(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FDungeonMarkerInfo,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  lVar2 = *param_1;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_2 + 0x30);
    do {
      FText::FText(lVar2,puVar1 + -6);
      FText::FText(lVar2 + 0x18,puVar1 + -3);
      *(undefined8 *)(lVar2 + 0x30) = *puVar1;
      *(undefined8 *)(lVar2 + 0x38) = puVar1[1];
      *(undefined8 *)(lVar2 + 0x40) = puVar1[2];
      *(undefined8 *)(lVar2 + 0x48) = puVar1[3];
      lVar2 = lVar2 + 0x50;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 10;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1414d5300 FUN_1414d5300 body=49 status=ok
// SIG undefined FUN_1414d5300(void)

void FUN_1414d5300(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144be7c20;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 1414d5340 FUN_1414d5340 body=41 status=ok
// SIG undefined FUN_1414d5340(void)

void FUN_1414d5340(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144be7ef0;
  }
  return;
}



// FUNCTION 1414d5370 FUN_1414d5370 body=110 status=ok
// SIG undefined FUN_1414d5370(void)

void FUN_1414d5370(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14128a450(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144be81c0;
    puVar1[5] = &PTR_LAB_144be8708;
    puVar1[0x2f] = &PTR_LAB_144be8738;
    puVar1[0x71] = &PTR_LAB_144be8750;
    puVar1[0x8a] = 0;
    puVar1[0x8b] = 0;
    puVar1[0x8c] = 0;
    puVar1[0x8d] = 0;
  }
  return;
}



// FUNCTION 1414d53e0 FUN_1414d53e0 body=134 status=ok
// SIG undefined FUN_1414d53e0(void)

void FUN_1414d53e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *puVar1 = &PTR_FUN_144be8778;
    puVar1[0x20] = &PTR_LAB_144be8c18;
    puVar1[0x41] = &PTR_LAB_144be8c40;
    puVar1[0x57] = &PTR_LAB_144be8c90;
    puVar1[0x5f] = 0;
    puVar1[0x60] = 0;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    puVar1[100] = 0;
  }
  return;
}



// FUNCTION 1414d5470 FUN_1414d5470 body=106 status=ok
// SIG undefined FUN_1414d5470(void)

void FUN_1414d5470(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *puVar1 = &PTR_FUN_144be8e40;
    puVar1[0x20] = &PTR_LAB_144be92e0;
    puVar1[0x41] = &PTR_LAB_144be9308;
    puVar1[0x57] = &PTR_LAB_144be9358;
    puVar1[0x5f] = 0;
    puVar1[0x60] = 0;
  }
  return;
}



// FUNCTION 1414d54e0 FUN_1414d54e0 body=59 status=ok
// SIG undefined FUN_1414d54e0(void)

void FUN_1414d54e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_143067b00(puVar1);
    *(undefined4 *)((longlong)puVar1 + 0x36c) = 0;
    *puVar1 = &PTR_FUN_144be9670;
    puVar1[5] = &PTR_LAB_144be9c20;
  }
  return;
}



// FUNCTION 1414d5540 FUN_1414d5540 body=491 status=ok
// SIG undefined FUN_1414d5540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414d5540(longlong *param_1)

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
    *puVar1 = &PTR_FUN_144aaed20;
  }
  return;
}



// FUNCTION 1414d5750 FUN_1414d5750 body=173 status=ok
// SIG undefined FUN_1414d5750(void)

void FUN_1414d5750(longlong *param_1)

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
      if (plVar7[2] != 0) {
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
      plVar7 = plVar7 + 5;
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



// FUNCTION 1414d5800 ~FHMPopupSetupData body=151 status=ok
// SIG undefined ~FHMPopupSetupData(void)

void FHMPopupSetupData::~FHMPopupSetupData(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_140aedd00(param_1 + 0x38);
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  return;
}



// FUNCTION 1414d58a0 FUN_1414d58a0 body=243 status=ok
// SIG undefined FUN_1414d58a0(void)

void FUN_1414d58a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0x250);
  lVar2 = *(longlong *)(param_1 + 0x248);
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x30);
    do {
      if ((int)plVar3[2] != 0) {
        plVar1 = (longlong *)*plVar3;
        if ((longlong *)*plVar3 == (longlong *)0x0) {
          plVar1 = plVar3 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar2 = *(longlong *)(param_1 + 0x248);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 1414d59a0 FUN_1414d59a0 body=239 status=ok
// SIG undefined FUN_1414d59a0(void)

void FUN_1414d59a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x398);
  lVar1 = *(longlong *)(param_1 + 0x390);
  if (iVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + 8);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x390);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x388) = &PTR_FUN_143fe0658;
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FMemory::Free();
  }
  FUN_140aee3c0(param_1);
  return;
}



// FUNCTION 1414d5a90 FUN_1414d5a90 body=536 status=ok
// SIG undefined FUN_1414d5a90(void)

longlong * FUN_1414d5a90(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    plVar9 = (longlong *)(*param_1 + 0x20);
    do {
      FUN_140aedd00(plVar9 + 3);
      plVar3 = (longlong *)*plVar9;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      plVar3 = (longlong *)plVar9[-3];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      plVar9 = plVar9 + 9;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = (int)param_2[1];
  lVar12 = *param_2;
  *(int *)(param_1 + 1) = iVar7;
  if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(param_1,iVar7);
    lVar11 = *param_1;
    if (iVar7 != 0) {
      lVar12 = lVar12 + 0x18;
      puVar8 = (undefined4 *)(lVar11 + 0x44);
      do {
        FText::FText(lVar11,lVar12 + -0x18);
        FText::FText(puVar8 + -0xb,lVar12);
        *(undefined8 *)(puVar8 + -5) = *(undefined8 *)(lVar12 + 0x18);
        *(undefined8 *)(puVar8 + -3) = 0;
        iVar6 = *(int *)(lVar12 + 0x28);
        lVar4 = *(longlong *)(lVar12 + 0x20);
        puVar8[-1] = iVar6;
        if (iVar6 == 0) {
          *puVar8 = 0;
        }
        else {
          TArray<FDungeonMarkerInfo,FDefaultAllocator>::ResizeForCopy(puVar8 + -3,iVar6,0);
          lVar10 = *(longlong *)(puVar8 + -3);
          puVar5 = (undefined8 *)(lVar4 + 0x30);
          do {
            FText::FText(lVar10,puVar5 + -6);
            FText::FText(lVar10 + 0x18,puVar5 + -3);
            *(undefined8 *)(lVar10 + 0x30) = *puVar5;
            *(undefined8 *)(lVar10 + 0x38) = puVar5[1];
            *(undefined8 *)(lVar10 + 0x40) = puVar5[2];
            *(undefined8 *)(lVar10 + 0x48) = puVar5[3];
            lVar10 = lVar10 + 0x50;
            iVar6 = iVar6 + -1;
            puVar5 = puVar5 + 10;
          } while (iVar6 != 0);
        }
        lVar11 = lVar11 + 0x48;
        puVar8 = puVar8 + 0x12;
        lVar12 = lVar12 + 0x48;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return param_1;
}



// FUNCTION 1414d5d20 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMAU_NotificationUILayer::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x450) != 0) {
    FMemory::Free();
  }
  FUN_1414d59a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x478);
  }
  return param_1;
}



// FUNCTION 1414d5d80 FUN_1414d5d80 body=125 status=ok
// SIG undefined FUN_1414d5d80(void)

longlong FUN_1414d5d80(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 0x308);
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 0x2f8);
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x338);
  }
  return param_1;
}



// FUNCTION 1414d5e00 FUN_1414d5e00 body=95 status=ok
// SIG undefined FUN_1414d5e00(void)

longlong FUN_1414d5e00(longlong param_1,ulonglong param_2)

{
  FUN_1414d5750(param_1 + 0x2f8);
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x310);
  }
  return param_1;
}



// FUNCTION 1414d5e60 FUN_1414d5e60 body=52 status=ok
// SIG undefined FUN_1414d5e60(void)

undefined8 FUN_1414d5e60(undefined8 param_1,ulonglong param_2)

{
  FUN_1414d58a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x370);
  }
  return param_1;
}



// FUNCTION 1414d5ea0 FUN_1414d5ea0 body=57 status=ok
// SIG undefined FUN_1414d5ea0(void)

void FUN_1414d5ea0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0c40);
                    /* WARNING: Could not recover jumptable at 0x0001414d5ed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414d5ee0 FUN_1414d5ee0 body=64 status=ok
// SIG undefined FUN_1414d5ee0(void)

void FUN_1414d5ee0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x50);
  FText::FText(param_2);
  FText::FText((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  return;
}



// FUNCTION 1414d5f20 FUN_1414d5f20 body=83 status=ok
// SIG undefined FUN_1414d5f20(void)

void FUN_1414d5f20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  FText::FText(param_2);
  FText::FText(param_2 + 3);
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



// FUNCTION 1414d5f80 FUN_1414d5f80 body=75 status=ok
// SIG undefined FUN_1414d5f80(void)

void FUN_1414d5f80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  FText::FText(param_2);
  FText::FText(param_2 + 3);
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 1414d5fd0 FUN_1414d5fd0 body=141 status=ok
// SIG undefined FUN_1414d5fd0(void)

undefined8 FUN_1414d5fd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x30);
    do {
      FText::operator=(puVar1 + -6,param_3 + -0x30 + (longlong)puVar1);
      FText::operator=(puVar1 + -3,param_3 + -0x18 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      puVar1[2] = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar1);
      puVar1[3] = *(undefined8 *)(param_3 + 0x18 + (longlong)puVar1);
      puVar1 = puVar1 + 10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414d6060 FUN_1414d6060 body=355 status=ok
// SIG undefined FUN_1414d6060(void)

undefined8 FUN_1414d6060(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (param_4 != 0) {
    plVar9 = (longlong *)(param_3 + 0x38);
    do {
      FText::operator=(param_2,plVar9 + -7);
      FText::operator=(param_2 + 0x18,plVar9 + -4);
      plVar1 = (longlong *)(param_2 + 0x38);
      *(longlong *)(param_2 + 0x30) = plVar9[-1];
      if (plVar1 != plVar9) {
        iVar7 = *(int *)(param_2 + 0x40);
        if (iVar7 != 0) {
          plVar8 = (longlong *)(*plVar1 + 8);
          do {
            plVar5 = (longlong *)plVar8[3];
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
            plVar5 = (longlong *)*plVar8;
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
            plVar8 = plVar8 + 10;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        FUN_1414d51b0(plVar1,*plVar9,(int)plVar9[1],*(undefined4 *)(param_2 + 0x44),0);
      }
      plVar9 = plVar9 + 9;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x48;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414d61d0 FUN_1414d61d0 body=119 status=ok
// SIG undefined FUN_1414d61d0(void)

undefined1 FUN_1414d61d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x30;
    do {
      FText::operator=(param_2 + -0x30,param_3 + -0x30 + param_2);
      FText::operator=(param_2 + -0x18,param_3 + -0x18 + param_2);
      FUN_1414d5a90(param_2,param_3 + param_2);
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414d6290 FUN_1414d6290 body=61 status=ok
// SIG undefined FUN_1414d6290(void)

void FUN_1414d6290(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0c58);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d62d0 FUN_1414d62d0 body=61 status=ok
// SIG undefined FUN_1414d62d0(void)

void FUN_1414d62d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0c60);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d6310 FUN_1414d6310 body=61 status=ok
// SIG undefined FUN_1414d6310(void)

void FUN_1414d6310(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0c68);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414d6370 FUN_1414d6370 body=55 status=ok
// SIG undefined FUN_1414d6370(void)

void FUN_1414d6370(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a0898 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0898 = GetStaticEnum(FUN_1414d6e80,uVar1,L"ETinkPileBuildOption");
  }
  return;
}



// FUNCTION 1414d63b0 FUN_1414d63b0 body=55 status=ok
// SIG undefined FUN_1414d63b0(void)

void FUN_1414d63b0(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a0890 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0890 = GetStaticEnum(FUN_1414d6eb0,uVar1,L"ETinkPileUseState");
  }
  return;
}



// FUNCTION 1414d63f0 FUN_1414d63f0 body=55 status=ok
// SIG undefined FUN_1414d63f0(void)

void FUN_1414d63f0(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a0880 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0880 = GetStaticEnum(FUN_1414d6ee0,uVar1,L"ETransporterCraneState");
  }
  return;
}



// FUNCTION 1414d6430 FUN_1414d6430 body=55 status=ok
// SIG undefined FUN_1414d6430(void)

void FUN_1414d6430(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a0888 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0888 = GetStaticEnum(FUN_1414d6f10,uVar1,L"ETrophyCaseViewingState");
  }
  return;
}



// FUNCTION 1414d6470 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AXUsableActorScriptedBotEncounter::GetPrivateStaticClass(void)

{
  if (DAT_1468a0f68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TravelStationObject",&DAT_1468a0f68,FUN_1414d6910,0x5d0,
                  0x10000001,0,L"Engine",&LAB_1414d52a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1412d9cf0,&LAB_140447700,0);
  }
  return DAT_1468a0f68;
}



// FUNCTION 1414d6520 FUN_1414d6520 body=162 status=ok
// SIG undefined FUN_1414d6520(void)

longlong FUN_1414d6520(void)

{
  if (DAT_1468a0f78 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TrooperAnimInstance",&DAT_1468a0f78,FUN_140447710,0xaf0,
                  0x10000008,0,L"Engine",FUN_1414d5540,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,&LAB_1413ae840,
                  &LAB_14084f730,0);
  }
  return DAT_1468a0f78;
}



// FUNCTION 1414d65d0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong AArchVisCharacter::StaticClass(void)

{
  if (DAT_1468a0fc0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TrophyCaseBaseComponent",&DAT_1468a0fc0,FUN_140447710,0x7c0,
                  0x10000000,0,L"Engine",&LAB_1414d5730,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1423c80f0,thunk_FUN_142a232e0,
                  &LAB_140447700,0);
  }
  return DAT_1468a0fc0;
}



// FUNCTION 1414d6680 FUN_1414d6680 body=6 status=ok
// SIG undefined FUN_1414d6680(void)

undefined8 FUN_1414d6680(void)

{
  return 0x1c37a469;
}



// FUNCTION 1414d6690 FUN_1414d6690 body=6 status=ok
// SIG undefined FUN_1414d6690(void)

undefined8 FUN_1414d6690(void)

{
  return 0xe6e093dc;
}



// FUNCTION 1414d66a0 FUN_1414d66a0 body=6 status=ok
// SIG undefined FUN_1414d66a0(void)

undefined8 FUN_1414d66a0(void)

{
  return 0x337f75ab;
}



// FUNCTION 1414d66b0 FUN_1414d66b0 body=6 status=ok
// SIG undefined FUN_1414d66b0(void)

undefined8 FUN_1414d66b0(void)

{
  return 0x988832fa;
}



// FUNCTION 1414d66c0 FUN_1414d66c0 body=6 status=ok
// SIG undefined FUN_1414d66c0(void)

undefined8 FUN_1414d66c0(void)

{
  return 0x5a74c358;
}



// FUNCTION 1414d66d0 FUN_1414d66d0 body=6 status=ok
// SIG undefined FUN_1414d66d0(void)

undefined8 FUN_1414d66d0(void)

{
  return 0xacf05a3c;
}



// FUNCTION 1414d66e0 FUN_1414d66e0 body=6 status=ok
// SIG undefined FUN_1414d66e0(void)

undefined8 FUN_1414d66e0(void)

{
  return 0xa346ee86;
}



// FUNCTION 1414d66f0 FUN_1414d66f0 body=6 status=ok
// SIG undefined FUN_1414d66f0(void)

undefined8 FUN_1414d66f0(void)

{
  return 0x37db8241;
}



// FUNCTION 1414d6700 FUN_1414d6700 body=57 status=ok
// SIG undefined FUN_1414d6700(void)

void FUN_1414d6700(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0c28);
                    /* WARNING: Could not recover jumptable at 0x0001414d6736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414d6740 FUN_1414d6740 body=57 status=ok
// SIG undefined FUN_1414d6740(void)

void FUN_1414d6740(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0c30);
                    /* WARNING: Could not recover jumptable at 0x0001414d6776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414d6780 FUN_1414d6780 body=57 status=ok
// SIG undefined FUN_1414d6780(void)

void FUN_1414d6780(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0c48);
                    /* WARNING: Could not recover jumptable at 0x0001414d67b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414d67c0 FUN_1414d67c0 body=57 status=ok
// SIG undefined FUN_1414d67c0(void)

void FUN_1414d67c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a0c50);
                    /* WARNING: Could not recover jumptable at 0x0001414d67f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414d6800 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x48,0);
    iVar3 = (int)(uVar1 / 0x48);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x48,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1414d68a0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void APlayArea::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1414d68b0 FUN_1414d68b0 body=34 status=ok
// SIG undefined FUN_1414d68b0(void)

void FUN_1414d68b0(void)

{
  undefined8 uVar1;
  
  uVar1 = AGBattleRoyaleGameState::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BuildObject_144be95c0,0xb);
  return;
}



// FUNCTION 1414d68e0 StaticRegisterNativesAMapFog body=34 status=ok
// SIG undefined StaticRegisterNativesAMapFog(void)

void AMapFog::StaticRegisterNativesAMapFog(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BeginTrack_144be9db0,10);
  return;
}



// FUNCTION 1414d6910 FUN_1414d6910 body=34 status=ok
// SIG undefined FUN_1414d6910(void)

void FUN_1414d6910(void)

{
  undefined8 uVar1;
  
  uVar1 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CheckTravelDependencies_144be9ee0,0xc);
  return;
}



// FUNCTION 1414d6940 FUN_1414d6940 body=34 status=ok
// SIG undefined FUN_1414d6940(void)

void FUN_1414d6940(void)

{
  undefined8 uVar1;
  
  uVar1 = UFocusButtonWidget::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_OnRep_TrophyCaseReplicatedSets_144be9fa0,1);
  return;
}



// FUNCTION 1414d6970 FUN_1414d6970 body=34 status=ok
// SIG undefined FUN_1414d6970(void)

void FUN_1414d6970(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414d3b80();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnAxisInput_144bea340,8);
  return;
}



// FUNCTION 1414d69a0 FUN_1414d69a0 body=34 status=ok
// SIG undefined FUN_1414d69a0(void)

void FUN_1414d69a0(void)

{
  undefined8 uVar1;
  
  uVar1 = APlayerState::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetTedioreProjectileClass_144be8768,1);
  return;
}



// FUNCTION 1414d69d0 StaticRegisterNativesUGActiveSkill body=34 status=ok
// SIG undefined StaticRegisterNativesUGActiveSkill(void)

void UGActiveSkill::StaticRegisterNativesUGActiveSkill(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnBackClicked_144be8e10,3);
  return;
}



// FUNCTION 1414d6a00 StaticRegisterNativesUGFriendsPanelAllFriendsWidget body=34 status=ok
// SIG undefined StaticRegisterNativesUGFriendsPanelAllFriendsWidget(void)

void UGFriendsPanelAllFriendsWidget::StaticRegisterNativesUGFriendsPanelAllFriendsWidget(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnBackClicked_144be94d8,2);
  return;
}



// FUNCTION 1414d6a30 FUN_1414d6a30 body=34 status=ok
// SIG undefined FUN_1414d6a30(void)

void FUN_1414d6a30(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414d47f0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CraneBeginTrack_144be9e50,9);
  return;
}



// FUNCTION 1414d6a60 FUN_1414d6a60 body=82 status=ok
// SIG undefined FUN_1414d6a60(void)

void FUN_1414d6a60(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0ff0 == 0) {
    uVar1 = FUN_1414d66a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0ff0 = GetStaticStruct(FUN_1414d6f40,uVar2,L"ChallengeTrophy",0x50,uVar1);
  }
  return;
}



// FUNCTION 1414d6ac0 FUN_1414d6ac0 body=82 status=ok
// SIG undefined FUN_1414d6ac0(void)

void FUN_1414d6ac0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0fe0 == 0) {
    uVar1 = FUN_1414d6680();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0fe0 = GetStaticStruct(FUN_1414d6f70,uVar2,L"ChallengeTrophyGroup",0x48,uVar1);
  }
  return;
}



// FUNCTION 1414d6b20 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0fd0 == 0) {
    uVar1 = FUN_1414d6690();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0fd0 = GetStaticStruct(FUN_1414d6fa0,uVar2,L"ChallengeTrophySet",0x40,uVar1);
  }
  return;
}



// FUNCTION 1414d6b80 FUN_1414d6b80 body=82 status=ok
// SIG undefined FUN_1414d6b80(void)

void FUN_1414d6b80(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0d50 == 0) {
    uVar1 = FUN_1414d66b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0d50 = GetStaticStruct(FUN_1414d6fd0,uVar2,L"TestMapMenuEntry",0x28,uVar1);
  }
  return;
}



// FUNCTION 1414d6be0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0e20 == 0) {
    uVar1 = FUN_1414d66c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0e20 = GetStaticStruct(FUN_1414d7000,uVar2,L"TransporterCraneRecord",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414d6c40 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0f90 == 0) {
    uVar1 = FUN_1414d66d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0f90 = GetStaticStruct(FUN_1414d7030,uVar2,L"TrophyCaseReplicatedBase",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414d6ca0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0f80 == 0) {
    uVar1 = FUN_1414d66e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0f80 = GetStaticStruct(FUN_1414d7060,uVar2,L"TrophyCaseReplicatedSet",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414d6d00 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a0e98 == 0) {
    uVar1 = FUN_1414d66f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a0e98 = GetStaticStruct(FUN_1414d7090,uVar2,L"WeightedTransporterCrane",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414d6d60 FUN_1414d6d60 body=47 status=ok
// SIG undefined FUN_1414d6d60(void)

longlong FUN_1414d6d60(void)

{
  if (DAT_1468a0cf0 == 0) {
    FUN_141786440(&DAT_1468a0cf0,&PTR_FUN_144bdf000);
  }
  return DAT_1468a0cf0;
}



// FUNCTION 1414d6d90 FUN_1414d6d90 body=47 status=ok
// SIG undefined FUN_1414d6d90(void)

longlong FUN_1414d6d90(void)

{
  if (DAT_1468a0d00 == 0) {
    FUN_141786440(&DAT_1468a0d00,&PTR_FUN_144bdfa60);
  }
  return DAT_1468a0d00;
}



// FUNCTION 1414d6dc0 FUN_1414d6dc0 body=47 status=ok
// SIG undefined FUN_1414d6dc0(void)

longlong FUN_1414d6dc0(void)

{
  if (DAT_1468a0e08 == 0) {
    FUN_141786440(&DAT_1468a0e08,&PTR_FUN_144be7480);
  }
  return DAT_1468a0e08;
}



// FUNCTION 1414d6df0 FUN_1414d6df0 body=47 status=ok
// SIG undefined FUN_1414d6df0(void)

longlong FUN_1414d6df0(void)

{
  if (DAT_1468a0f70 == 0) {
    FUN_141786440(&DAT_1468a0f70,&PTR_thunk_FUN_1414d6520_144be0f00);
  }
  return DAT_1468a0f70;
}



// FUNCTION 1414d6e20 FUN_1414d6e20 body=47 status=ok
// SIG undefined FUN_1414d6e20(void)

longlong FUN_1414d6e20(void)

{
  if (DAT_1468a0fb8 == 0) {
    FUN_141786440(&DAT_1468a0fb8,&PTR_LAB_144be40b0);
  }
  return DAT_1468a0fb8;
}



// FUNCTION 1414d6e50 FUN_1414d6e50 body=47 status=ok
// SIG undefined FUN_1414d6e50(void)

longlong FUN_1414d6e50(void)

{
  if (DAT_1468a0e90 == 0) {
    FUN_141786a30(&DAT_1468a0e90,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464727b0);
  }
  return DAT_1468a0e90;
}



// FUNCTION 1414d6e80 FUN_1414d6e80 body=47 status=ok
// SIG undefined FUN_1414d6e80(void)

longlong FUN_1414d6e80(void)

{
  if (DAT_1468a0d88 == 0) {
    FUN_1417866a0(&DAT_1468a0d88,&PTR_Z_Construct_UPackage__Script_MechWarrior_146474b30);
  }
  return DAT_1468a0d88;
}



// FUNCTION 1414d6eb0 FUN_1414d6eb0 body=47 status=ok
// SIG undefined FUN_1414d6eb0(void)

longlong FUN_1414d6eb0(void)

{
  if (DAT_1468a0d80 == 0) {
    FUN_1417866a0(&DAT_1468a0d80,&PTR_Z_Construct_UPackage__Script_MechWarrior_146474ae0);
  }
  return DAT_1468a0d80;
}



// FUNCTION 1414d6ee0 FUN_1414d6ee0 body=47 status=ok
// SIG undefined FUN_1414d6ee0(void)

longlong FUN_1414d6ee0(void)

{
  if (DAT_1468a0e18 == 0) {
    FUN_1417866a0(&DAT_1468a0e18,&PTR_Z_Construct_UPackage__Script_MechWarrior_146474b80);
  }
  return DAT_1468a0e18;
}



// FUNCTION 1414d6f10 FUN_1414d6f10 body=47 status=ok
// SIG undefined FUN_1414d6f10(void)

longlong FUN_1414d6f10(void)

{
  if (DAT_1468a0fc8 == 0) {
    FUN_1417866a0(&DAT_1468a0fc8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146474bd0);
  }
  return DAT_1468a0fc8;
}



// FUNCTION 1414d6f40 FUN_1414d6f40 body=47 status=ok
// SIG undefined FUN_1414d6f40(void)

longlong FUN_1414d6f40(void)

{
  if (DAT_1468a0ff8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0ff8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146474470);
  }
  return DAT_1468a0ff8;
}



// FUNCTION 1414d6f70 FUN_1414d6f70 body=47 status=ok
// SIG undefined FUN_1414d6f70(void)

longlong FUN_1414d6f70(void)

{
  if (DAT_1468a0fe8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0fe8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464742a0);
  }
  return DAT_1468a0fe8;
}



// FUNCTION 1414d6fa0 FUN_1414d6fa0 body=47 status=ok
// SIG undefined FUN_1414d6fa0(void)

longlong FUN_1414d6fa0(void)

{
  if (DAT_1468a0fd8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0fd8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146474130);
  }
  return DAT_1468a0fd8;
}



// FUNCTION 1414d6fd0 FUN_1414d6fd0 body=47 status=ok
// SIG undefined FUN_1414d6fd0(void)

longlong FUN_1414d6fd0(void)

{
  if (DAT_1468a0d58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0d58,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464710c0);
  }
  return DAT_1468a0d58;
}



// FUNCTION 1414d7000 FUN_1414d7000 body=47 status=ok
// SIG undefined FUN_1414d7000(void)

longlong FUN_1414d7000(void)

{
  if (DAT_1468a0e28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0e28,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464721a0);
  }
  return DAT_1468a0e28;
}



// FUNCTION 1414d7030 FUN_1414d7030 body=47 status=ok
// SIG undefined FUN_1414d7030(void)

longlong FUN_1414d7030(void)

{
  if (DAT_1468a0f98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0f98,&PTR_Z_Construct_UPackage__Script_MechWarrior_146473eb0);
  }
  return DAT_1468a0f98;
}



// FUNCTION 1414d7060 FUN_1414d7060 body=47 status=ok
// SIG undefined FUN_1414d7060(void)

longlong FUN_1414d7060(void)

{
  if (DAT_1468a0f88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0f88,&PTR_Z_Construct_UPackage__Script_MechWarrior_146473da0);
  }
  return DAT_1468a0f88;
}



// FUNCTION 1414d7090 FUN_1414d7090 body=47 status=ok
// SIG undefined FUN_1414d7090(void)

longlong FUN_1414d7090(void)

{
  if (DAT_1468a0ea0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a0ea0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146472880);
  }
  return DAT_1468a0ea0;
}



// FUNCTION 1414d7100 FUN_1414d7100 body=132 status=ok
// SIG undefined FUN_1414d7100(void)

void FUN_1414d7100(longlong *param_1,longlong param_2)

{
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
  (**(code **)(*param_1 + 0x400))(param_1,local_res8);
  return;
}



// FUNCTION 1414d7190 execMULTI_SetState body=132 status=ok
// SIG undefined execMULTI_SetState(void)

void UStateMachineComponent::execMULTI_SetState(longlong *param_1,longlong param_2)

{
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
  (**(code **)(*param_1 + 0x3f8))(param_1,local_res8);
  return;
}



// FUNCTION 1414d7220 FUN_1414d7220 body=130 status=ok
// SIG undefined FUN_1414d7220(void)

void FUN_1414d7220(undefined8 param_1,longlong param_2)

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
  FUN_140ea8590(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414d72b0 FUN_1414d72b0 body=122 status=ok
// SIG undefined FUN_1414d72b0(void)

void FUN_1414d72b0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_140afcfa0(param_1,local_18);
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



// FUNCTION 1414d7330 FUN_1414d7330 body=43 status=ok
// SIG undefined FUN_1414d7330(void)

void FUN_1414d7330(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140afdeb0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414d7360 FUN_1414d7360 body=52 status=ok
// SIG undefined FUN_1414d7360(void)

void FUN_1414d7360(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_140b5dda0(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 1414d73a0 execDoesObjectiveArrowRotate body=43 status=ok
// SIG undefined execDoesObjectiveArrowRotate(void)

void UMapIconComponent::execDoesObjectiveArrowRotate
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = DoesObjectiveArrowRotate();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414d73d0 FUN_1414d73d0 body=143 status=ok
// SIG undefined FUN_1414d73d0(void)

void FUN_1414d73d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_140aff3c0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414d7460 FUN_1414d7460 body=43 status=ok
// SIG undefined FUN_1414d7460(void)

void FUN_1414d7460(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140affa50();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414d7490 FUN_1414d7490 body=130 status=ok
// SIG undefined FUN_1414d7490(void)

void FUN_1414d7490(undefined8 param_1,longlong param_2)

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
  FUN_140eb3000(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414d7520 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140a0ca40(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414d75e0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140a0ca60(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414d76a0 FUN_1414d76a0 body=210 status=ok
// SIG undefined FUN_1414d76a0(void)

void FUN_1414d76a0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
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
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_140b01e10(param_1,&local_18,local_res10[0] != 0);
  return;
}



// FUNCTION 1414d7780 FUN_1414d7780 body=130 status=ok
// SIG undefined FUN_1414d7780(void)

void FUN_1414d7780(undefined8 param_1,longlong param_2)

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
  FUN_140b034c0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414d7810 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140eb8d40(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414d78d0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140eb8db0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414d7a10 FUN_1414d7a10 body=334 status=ok
// SIG undefined FUN_1414d7a10(void)

void FUN_1414d7a10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411b0ff0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 1414d7b60 FUN_1414d7b60 body=334 status=ok
// SIG undefined FUN_1414d7b60(void)

void FUN_1414d7b60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411b10f0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 1414d7cb0 FUN_1414d7cb0 body=334 status=ok
// SIG undefined FUN_1414d7cb0(void)

void FUN_1414d7cb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1411b11f0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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



// FUNCTION 1414d7e00 FUN_1414d7e00 body=128 status=ok
// SIG undefined FUN_1414d7e00(void)

void FUN_1414d7e00(undefined8 param_1,longlong param_2)

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
  FUN_140b0a090(param_1,local_res10);
  return;
}



// FUNCTION 1414d7e80 FUN_1414d7e80 body=154 status=ok
// SIG undefined FUN_1414d7e80(void)

void FUN_1414d7e80(long param_1,longlong param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 1414d7f20 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140b0a270(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414d8000 FUN_1414d8000 body=128 status=ok
// SIG undefined FUN_1414d8000(void)

void FUN_1414d8000(undefined8 param_1,longlong param_2)

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
  FUN_140b0a8c0(param_1,local_res10);
  return;
}



// FUNCTION 1414d8080 FUN_1414d8080 body=128 status=ok
// SIG undefined FUN_1414d8080(void)

void FUN_1414d8080(undefined8 param_1,longlong param_2)

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
  FUN_140b0a930(param_1,local_res10);
  return;
}



// FUNCTION 1414d8200 FUN_1414d8200 body=118 status=ok
// SIG undefined FUN_1414d8200(void)

void FUN_1414d8200(undefined8 param_1,longlong param_2)

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
  FUN_140a14a80(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414d8280 FUN_1414d8280 body=130 status=ok
// SIG undefined FUN_1414d8280(void)

void FUN_1414d8280(undefined8 param_1,longlong param_2)

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
  FUN_140a14ae0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414d8310 FUN_1414d8310 body=118 status=ok
// SIG undefined FUN_1414d8310(void)

void FUN_1414d8310(undefined8 param_1,longlong param_2)

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
  FUN_140a169b0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1414d8390 FUN_1414d8390 body=130 status=ok
// SIG undefined FUN_1414d8390(void)

void FUN_1414d8390(undefined8 param_1,longlong param_2)

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
  FUN_140b0e710(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414d8420 FUN_1414d8420 body=128 status=ok
// SIG undefined FUN_1414d8420(void)

void FUN_1414d8420(undefined8 param_1,longlong param_2)

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
  FUN_140a16fc0(param_1,local_res10);
  return;
}



// FUNCTION 1414d84a0 FUN_1414d84a0 body=130 status=ok
// SIG undefined FUN_1414d84a0(void)

void FUN_1414d84a0(undefined8 param_1,longlong param_2)

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
  FUN_140ec0720(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414d8530 FUN_1414d8530 body=128 status=ok
// SIG undefined FUN_1414d8530(void)

void FUN_1414d8530(undefined8 param_1,longlong param_2)

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
  FUN_140a1a090(param_1,local_res10);
  return;
}



// FUNCTION 1414d8630 FUN_1414d8630 body=53 status=ok
// SIG undefined FUN_1414d8630(void)

void FUN_1414d8630(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144bf5180;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1414d8680 FUN_1414d8680 body=53 status=ok
// SIG undefined FUN_1414d8680(void)

void FUN_1414d8680(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_144bf5298;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1414d86c0 FUN_1414d86c0 body=162 status=ok
// SIG undefined FUN_1414d86c0(void)

longlong FUN_1414d86c0(void)

{
  if (DAT_1468a1628 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"UMGGameOverScreen",&DAT_1468a1628,FUN_1414db4e0,0x2f8,
                  0x10000000,0,L"Engine",FUN_1414d9770,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGPasswordResetPage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a1628;
}



// FUNCTION 1414d8770 FUN_1414d8770 body=47 status=ok
// SIG undefined FUN_1414d8770(void)

longlong FUN_1414d8770(void)

{
  if (DAT_1468a1620 == 0) {
    FUN_141786440(&DAT_1468a1620,&PTR_FUN_144beb1b0);
  }
  return DAT_1468a1620;
}



// FUNCTION 1414d87a0 FUN_1414d87a0 body=47 status=ok
// SIG undefined FUN_1414d87a0(void)

longlong FUN_1414d87a0(void)

{
  if (DAT_1468a1618 == 0) {
    FUN_141786a30(&DAT_1468a1618,&PTR_FUN_146478c30);
  }
  return DAT_1468a1618;
}



// FUNCTION 1414d87e0 FUN_1414d87e0 body=53 status=ok
// SIG undefined FUN_1414d87e0(void)

void FUN_1414d87e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144bf39f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414d8830 FUN_1414d8830 body=53 status=ok
// SIG undefined FUN_1414d8830(void)

void FUN_1414d8830(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144bf3b08;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414d8880 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextureRenderTarget2D::GetPrivateStaticClass(void)

{
  if (DAT_1468a15c0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"UIStatData_Ability",&DAT_1468a15c0,FUN_140447710,0xf0,
                  0x10000000,0,L"Engine",FUN_1414d9680,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UCompositingElementInput::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a15c0;
}



// FUNCTION 1414d8940 FUN_1414d8940 body=162 status=ok
// SIG undefined FUN_1414d8940(void)

longlong FUN_1414d8940(void)

{
  if (DAT_1468a15d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"UIStatData_MayhemModifier",&DAT_1468a15d0,FUN_140447710,0x240
                  ,0x10000000,0,L"Engine",&LAB_1414d9720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UListViewBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a15d0;
}



// FUNCTION 1414d89f0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAIAsyncTaskBlueprintProxy::GetPrivateStaticClass(void)

{
  if (DAT_1468a1550 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"MessageStackManager",&DAT_1468a1550,
                  StaticRegisterNativesUAIAsyncTaskBlueprintProxy,0x68,0x10000000,0,L"Engine",
                  FUN_1414d9540,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468a1550;
}



// FUNCTION 1414d8aa0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCurveLinearColor::GetPrivateStaticClass(void)

{
  if (DAT_1468a15e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"UIStatData_WeaponAttribute",&DAT_1468a15e0,FUN_140447710,
                  0x250,0x10000000,0,L"Engine",&LAB_1414d9740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1414db430,&LAB_140447700,0);
  }
  return DAT_1468a15e0;
}



// FUNCTION 1414d8b50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXSkinAnimationProfile::GetPrivateStaticClass(void)

{
  if (DAT_1468a1638 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"VaultCardGeneralData",&DAT_1468a1638,FUN_140447710,0x80,
                  0x10000000,0,L"Engine",FUN_1414d97d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a1638;
}



// FUNCTION 1414d8c10 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGCampaignMutator::GetPrivateStaticClass(void)

{
  if (DAT_1468a1570 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"UIManager",&DAT_1468a1570,
                  StaticRegisterNativesUUGCampaignMutator,0x98,0x10000000,0,L"Engine",FUN_1414d9610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468a1570;
}



// FUNCTION 1414d8cb0 FUN_1414d8cb0 body=47 status=ok
// SIG undefined FUN_1414d8cb0(void)

longlong FUN_1414d8cb0(void)

{
  if (DAT_1468a1548 == 0) {
    FUN_141786440(&DAT_1468a1548,&PTR_GetPrivateStaticClass_144bee640);
  }
  return DAT_1468a1548;
}



// FUNCTION 1414d8ce0 FUN_1414d8ce0 body=47 status=ok
// SIG undefined FUN_1414d8ce0(void)

longlong FUN_1414d8ce0(void)

{
  if (DAT_1468a1540 == 0) {
    FUN_141786a30(&DAT_1468a1540,&PTR_FUN_1464778e0);
  }
  return DAT_1468a1540;
}



// FUNCTION 1414d8d10 FUN_1414d8d10 body=47 status=ok
// SIG undefined FUN_1414d8d10(void)

longlong FUN_1414d8d10(void)

{
  if (DAT_1468a1568 == 0) {
    FUN_141786440(&DAT_1468a1568,&PTR_GetPrivateStaticClass_144bee970);
  }
  return DAT_1468a1568;
}



// FUNCTION 1414d8d40 FUN_1414d8d40 body=47 status=ok
// SIG undefined FUN_1414d8d40(void)

longlong FUN_1414d8d40(void)

{
  if (DAT_1468a1558 == 0) {
    FUN_141786a30(&DAT_1468a1558,&PTR_FUN_146477b90);
  }
  return DAT_1468a1558;
}


