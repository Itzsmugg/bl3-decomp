// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1413bb200 FUN_1413bb200 body=47 status=ok
// SIG undefined FUN_1413bb200(void)

longlong FUN_1413bb200(void)

{
  if (DAT_14688a5d8 == 0) {
    FUN_1417866a0(&DAT_14688a5d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14636eec0);
  }
  return DAT_14688a5d8;
}



// FUNCTION 1413bb230 FUN_1413bb230 body=47 status=ok
// SIG undefined FUN_1413bb230(void)

longlong FUN_1413bb230(void)

{
  if (DAT_14688a5e0 == 0) {
    FUN_1417866a0(&DAT_14688a5e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14636ef10);
  }
  return DAT_14688a5e0;
}



// FUNCTION 1413bb260 FUN_1413bb260 body=47 status=ok
// SIG undefined FUN_1413bb260(void)

longlong FUN_1413bb260(void)

{
  if (DAT_14688a5d0 == 0) {
    FUN_1417866a0(&DAT_14688a5d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14636ee70);
  }
  return DAT_14688a5d0;
}



// FUNCTION 1413bb290 FUN_1413bb290 body=47 status=ok
// SIG undefined FUN_1413bb290(void)

longlong FUN_1413bb290(void)

{
  if (DAT_14688a5f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688a5f0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14636db70);
  }
  return DAT_14688a5f0;
}



// FUNCTION 1413bb2c0 FUN_1413bb2c0 body=47 status=ok
// SIG undefined FUN_1413bb2c0(void)

longlong FUN_1413bb2c0(void)

{
  if (DAT_14688a488 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688a488,&PTR_Z_Construct_UPackage__Script_MechWarrior_14636c3f0);
  }
  return DAT_14688a488;
}



// FUNCTION 1413bb2f0 FUN_1413bb2f0 body=47 status=ok
// SIG undefined FUN_1413bb2f0(void)

longlong FUN_1413bb2f0(void)

{
  if (DAT_14688a478 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688a478,&PTR_Z_Construct_UPackage__Script_MechWarrior_14636c320);
  }
  return DAT_14688a478;
}



// FUNCTION 1413bb320 FUN_1413bb320 body=47 status=ok
// SIG undefined FUN_1413bb320(void)

longlong FUN_1413bb320(void)

{
  if (DAT_14688a450 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688a450,&PTR_Z_Construct_UPackage__Script_MechWarrior_14636c0b0);
  }
  return DAT_14688a450;
}



// FUNCTION 1413bb350 FUN_1413bb350 body=128 status=ok
// SIG undefined FUN_1413bb350(void)

void FUN_1413bb350(undefined8 param_1,longlong param_2)

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
  FUN_140af4ff0(param_1,local_res10);
  return;
}



// FUNCTION 1413bb410 execGetGeometryCacheComponent body=44 status=ok
// SIG undefined execGetGeometryCacheComponent(void)

void AGeometryCacheActor::execGetGeometryCacheComponent
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetGeometryCacheComponent();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413bb440 execGetRoutineManager body=44 status=ok
// SIG undefined execGetRoutineManager(void)

void UEnemyUnit::execGetRoutineManager(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetRoutineManager();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413bb470 FUN_1413bb470 body=64 status=ok
// SIG undefined FUN_1413bb470(void)

void FUN_1413bb470(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x4c8))(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1413bb4b0 execGetAlarmZone body=44 status=ok
// SIG undefined execGetAlarmZone(void)

void UEnemyUnit::execGetAlarmZone(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetAlarmZone();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413bb4e0 execGetCurrentAcceleration body=60 status=ok
// SIG undefined execGetCurrentAcceleration(void)

void UCharacterMovementComponent::execGetCurrentAcceleration
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetCurrentAcceleration(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1413bb540 FUN_1413bb540 body=43 status=ok
// SIG undefined FUN_1413bb540(void)

void FUN_1413bb540(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_141084e70();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413bb570 FUN_1413bb570 body=43 status=ok
// SIG undefined FUN_1413bb570(void)

void FUN_1413bb570(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_141084e90();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413bb5a0 FUN_1413bb5a0 body=43 status=ok
// SIG undefined FUN_1413bb5a0(void)

void FUN_1413bb5a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140a8f2b0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413bb5d0 FUN_1413bb5d0 body=197 status=ok
// SIG undefined FUN_1413bb5d0(void)

void FUN_1413bb5d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 local_14;
  undefined1 local_12;
  
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_14 = 0;
  local_12 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar2 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1410874d0(param_1,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413bb6a0 FUN_1413bb6a0 body=143 status=ok
// SIG undefined FUN_1413bb6a0(void)

void FUN_1413bb6a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140a8f420(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413bb730 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140b01a40(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1413bb7f0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140b02650(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1413bb8b0 FUN_1413bb8b0 body=333 status=ok
// SIG undefined FUN_1413bb8b0(void)

void FUN_1413bb8b0(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
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
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  FUN_140b085d0(param_1,local_res20,local_res10[0],&local_28);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413bba00 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140b086e0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1413bbac0 FUN_1413bbac0 body=128 status=ok
// SIG undefined FUN_1413bbac0(void)

void FUN_1413bbac0(undefined8 param_1,longlong param_2)

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
  FUN_1410a5d30(param_1,local_res10);
  return;
}



// FUNCTION 1413bbb40 FUN_1413bbb40 body=123 status=ok
// SIG undefined FUN_1413bbb40(void)

void FUN_1413bbb40(undefined8 param_1,longlong param_2)

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
  FUN_1410a5e60(param_1,local_res10[0]);
  return;
}



// FUNCTION 1413bbbc0 FUN_1413bbbc0 body=132 status=ok
// SIG undefined FUN_1413bbbc0(void)

void FUN_1413bbbc0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x4c0))(param_1,local_res8);
  return;
}



// FUNCTION 1413bbc50 FUN_1413bbc50 body=128 status=ok
// SIG undefined FUN_1413bbc50(void)

void FUN_1413bbc50(undefined8 param_1,longlong param_2)

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
  FUN_1410a62e0(param_1,local_res10);
  return;
}



// FUNCTION 1413bbcd0 execSetActorScale3D body=133 status=ok
// SIG undefined execSetActorScale3D(void)

void AActor::execSetActorScale3D(undefined8 param_1,longlong param_2)

{
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
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_1410a6340(param_1,&local_18);
  return;
}



// FUNCTION 1413bbd60 FUN_1413bbd60 body=123 status=ok
// SIG undefined FUN_1413bbd60(void)

void FUN_1413bbd60(longlong param_1,longlong param_2)

{
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
  *(undefined4 *)(param_1 + 0x34c) = local_res8[0];
  return;
}



// FUNCTION 1413bbde0 FUN_1413bbde0 body=323 status=ok
// SIG undefined FUN_1413bbde0(void)

void FUN_1413bbde0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b0e760(param_1,local_10,local_18,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 1413bbf30 FUN_1413bbf30 body=313 status=ok
// SIG undefined FUN_1413bbf30(void)

void FUN_1413bbf30(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  undefined8 local_res10 [2];
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
  (**(code **)(*param_1 + 0x6e8))(param_1,local_28[0],local_res20,local_res10[0],local_res8[0] != 0)
  ;
  return;
}



// FUNCTION 1413bc0c0 FUN_1413bc0c0 body=53 status=ok
// SIG undefined FUN_1413bc0c0(void)

void FUN_1413bc0c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14499aa10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413bc100 FUN_1413bc100 body=162 status=ok
// SIG undefined FUN_1413bc100(void)

longlong FUN_1413bc100(void)

{
  if (DAT_14688aa88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"IronBearAnimInstance_FirstPerson",&DAT_14688aa88,
                  FUN_140447710,0xd10,0x10000008,0,L"Engine",FUN_1413bf960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,&LAB_1413c1cd0,
                  &LAB_14084f730,0);
  }
  return DAT_14688aa88;
}



// FUNCTION 1413bc1b0 FUN_1413bc1b0 body=53 status=ok
// SIG undefined FUN_1413bc1b0(void)

void FUN_1413bc1b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14499ab28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413bc1f0 FUN_1413bc1f0 body=162 status=ok
// SIG undefined FUN_1413bc1f0(void)

longlong FUN_1413bc1f0(void)

{
  if (DAT_14688aaa0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"IronBearAnimInstance_ThirdPerson",&DAT_14688aaa0,
                  FUN_1413c1d70,0xd00,0x10000008,0,L"Engine",FUN_1413bf990,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,&LAB_1413c1cd0,
                  &LAB_14084f730,0);
  }
  return DAT_14688aaa0;
}



// FUNCTION 1413bc2a0 FUN_1413bc2a0 body=47 status=ok
// SIG undefined FUN_1413bc2a0(void)

longlong FUN_1413bc2a0(void)

{
  if (DAT_14688aa98 == 0) {
    FUN_141786440(&DAT_14688aa98,&PTR_FUN_1449961b0);
  }
  return DAT_14688aa98;
}



// FUNCTION 1413bc2d0 FUN_1413bc2d0 body=47 status=ok
// SIG undefined FUN_1413bc2d0(void)

longlong FUN_1413bc2d0(void)

{
  if (DAT_14688aa90 == 0) {
    FUN_141786a30(&DAT_14688aa90,&PTR_FUN_1463725d0);
  }
  return DAT_14688aa90;
}



// FUNCTION 1413bc300 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x6e0;
    *puVar1 = &PTR_FUN_14499bf80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1413bc340 FUN_1413bc340 body=53 status=ok
// SIG undefined FUN_1413bc340(void)

void FUN_1413bc340(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_14499ac40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413bc390 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AEquipmentSkin::GetPrivateStaticClass(void)

{
  if (DAT_14688aa08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"InventoryShopComponent",&DAT_14688aa08,FUN_1413c1d40,0x4e0,
                  0x10000000,0,L"Engine",&LAB_1413bf900,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430255d0,&LAB_140447700,0);
  }
  return DAT_14688aa08;
}



// FUNCTION 1413bc450 FUN_1413bc450 body=162 status=ok
// SIG undefined FUN_1413bc450(void)

longlong FUN_1413bc450(void)

{
  if (DAT_14688aac8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"IronBearBubbleShieldAnimInstance",&DAT_14688aac8,
                  FUN_1413c1da0,0x480,0x10000008,0,L"Engine",&LAB_1413bf9d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,thunk_FUN_1428eccf0,
                  &LAB_14084f730,0);
  }
  return DAT_14688aac8;
}



// FUNCTION 1413bc510 FUN_1413bc510 body=47 status=ok
// SIG undefined FUN_1413bc510(void)

longlong FUN_1413bc510(void)

{
  if (DAT_14688aac0 == 0) {
    FUN_141786440(&DAT_14688aac0,&PTR_FUN_1449966b0);
  }
  return DAT_14688aac0;
}



// FUNCTION 1413bc540 FUN_1413bc540 body=47 status=ok
// SIG undefined FUN_1413bc540(void)

longlong FUN_1413bc540(void)

{
  if (DAT_14688aaa8 == 0) {
    FUN_141786a30(&DAT_14688aaa8,&PTR_FUN_1463726b0);
  }
  return DAT_14688aaa8;
}



// FUNCTION 1413bc570 FUN_1413bc570 body=47 status=ok
// SIG undefined FUN_1413bc570(void)

longlong FUN_1413bc570(void)

{
  if (DAT_14688aab0 == 0) {
    FUN_141786a30(&DAT_14688aab0,&PTR_FUN_1463726f0);
  }
  return DAT_14688aab0;
}



// FUNCTION 1413bc5a0 FUN_1413bc5a0 body=47 status=ok
// SIG undefined FUN_1413bc5a0(void)

longlong FUN_1413bc5a0(void)

{
  if (DAT_14688aab8 == 0) {
    FUN_141786a30(&DAT_14688aab8,&PTR_FUN_146372730);
  }
  return DAT_14688aab8;
}



// FUNCTION 1413bc5d0 FUN_1413bc5d0 body=162 status=ok
// SIG undefined FUN_1413bc5d0(void)

longlong FUN_1413bc5d0(void)

{
  if (DAT_14688a9e0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"InventoryMeshAttachmentAspectData",&DAT_14688a9e0,
                  FUN_1413c1d10,0x60,0x10000000,0,L"Engine",
                  InternalConstructor<USoAchievementSettings>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_14688a9e0;
}



// FUNCTION 1413bc680 FUN_1413bc680 body=47 status=ok
// SIG undefined FUN_1413bc680(void)

longlong FUN_1413bc680(void)

{
  if (DAT_14688a9d8 == 0) {
    FUN_141786440(&DAT_14688a9d8,&PTR_FUN_144996890);
  }
  return DAT_14688a9d8;
}



// FUNCTION 1413bc6b0 FUN_1413bc6b0 body=47 status=ok
// SIG undefined FUN_1413bc6b0(void)

longlong FUN_1413bc6b0(void)

{
  if (DAT_14688a9d0 == 0) {
    FUN_141786a30(&DAT_14688a9d0,&PTR_FUN_146371300);
  }
  return DAT_14688a9d0;
}



// FUNCTION 1413bc6f0 FUN_1413bc6f0 body=47 status=ok
// SIG undefined FUN_1413bc6f0(void)

longlong FUN_1413bc6f0(void)

{
  if (DAT_14688aa00 == 0) {
    FUN_141786440(&DAT_14688aa00,&PTR_GetPrivateStaticClass_144996e70);
  }
  return DAT_14688aa00;
}



// FUNCTION 1413bc720 FUN_1413bc720 body=47 status=ok
// SIG undefined FUN_1413bc720(void)

longlong FUN_1413bc720(void)

{
  if (DAT_14688a9e8 == 0) {
    FUN_141786a30(&DAT_14688a9e8,&PTR_FUN_1463714d0);
  }
  return DAT_14688a9e8;
}



// FUNCTION 1413bc750 FUN_1413bc750 body=47 status=ok
// SIG undefined FUN_1413bc750(void)

longlong FUN_1413bc750(void)

{
  if (DAT_14688a9f0 == 0) {
    FUN_141786a30(&DAT_14688a9f0,&PTR_FUN_146371580);
  }
  return DAT_14688a9f0;
}



// FUNCTION 1413bc780 FUN_1413bc780 body=47 status=ok
// SIG undefined FUN_1413bc780(void)

longlong FUN_1413bc780(void)

{
  if (DAT_14688a9f8 == 0) {
    FUN_141786a30(&DAT_14688a9f8,&PTR_FUN_1463715c0);
  }
  return DAT_14688a9f8;
}



// FUNCTION 1413bc7b0 FUN_1413bc7b0 body=162 status=ok
// SIG undefined FUN_1413bc7b0(void)

longlong FUN_1413bc7b0(void)

{
  if (DAT_14688aad8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"IronBearGunnersNestAnimInstance",&DAT_14688aad8,FUN_140447710
                  ,0x460,0x10000008,0,L"Engine",&LAB_1413bf9f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,thunk_FUN_1428eccf0,
                  &LAB_14084f730,0);
  }
  return DAT_14688aad8;
}



// FUNCTION 1413bc870 FUN_1413bc870 body=162 status=ok
// SIG undefined FUN_1413bc870(void)

longlong FUN_1413bc870(void)

{
  if (DAT_14688a978 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"InventoryCustomizationBalanceStateComponent",&DAT_14688a978,
                  FUN_140447710,0x388,0x10000000,0,L"Engine",&LAB_1413bf880,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14142bde0,&LAB_140447700,0);
  }
  return DAT_14688a978;
}



// FUNCTION 1413bc950 FUN_1413bc950 body=162 status=ok
// SIG undefined FUN_1413bc950(void)

longlong FUN_1413bc950(void)

{
  if (DAT_14688aa18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"InventorySlotAttributeContextResolver",&DAT_14688aa18,
                  FUN_140447710,0x58,0x10000000,0,L"Engine",FUN_1413bf920,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1413c1cb0,&LAB_140447700,0);
  }
  return DAT_14688aa18;
}



// FUNCTION 1413bca10 FUN_1413bca10 body=162 status=ok
// SIG undefined FUN_1413bca10(void)

longlong FUN_1413bca10(void)

{
  if (DAT_14688a948 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"TrapTriggerRenderingComponent",&DAT_14688a948,FUN_140447710,
                  0x710,0x10000008,0,L"Engine",&LAB_1413bfa10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_14688a948;
}



// FUNCTION 1413bcac0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieScene2DTransformSection::GetPrivateStaticClass(void)

{
  if (DAT_14688a848 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"HyperionProjectedShield",&DAT_14688a848,FUN_140447710,0x550,
                  0x10000000,0,L"Engine",FUN_1413bf780,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1412d9cf0,&LAB_140447700,0);
  }
  return DAT_14688a848;
}



// FUNCTION 1413bcb70 FUN_1413bcb70 body=47 status=ok
// SIG undefined FUN_1413bcb70(void)

longlong FUN_1413bcb70(void)

{
  if (DAT_14688a930 == 0) {
    FUN_141786440(&DAT_14688a930,&PTR_LAB_144998e00);
  }
  return DAT_14688a930;
}



// FUNCTION 1413bcbb0 FUN_1413bcbb0 body=47 status=ok
// SIG undefined FUN_1413bcbb0(void)

longlong FUN_1413bcbb0(void)

{
  if (DAT_14688a880 == 0) {
    FUN_141786a30(&DAT_14688a880,&PTR_FUN_14636f1c0);
  }
  return DAT_14688a880;
}



// FUNCTION 1413bcbe0 FUN_1413bcbe0 body=47 status=ok
// SIG undefined FUN_1413bcbe0(void)

longlong FUN_1413bcbe0(void)

{
  if (DAT_14688a888 == 0) {
    FUN_141786a30(&DAT_14688a888,&PTR_FUN_14636f280);
  }
  return DAT_14688a888;
}



// FUNCTION 1413bcc10 FUN_1413bcc10 body=47 status=ok
// SIG undefined FUN_1413bcc10(void)

longlong FUN_1413bcc10(void)

{
  if (DAT_14688a890 == 0) {
    FUN_141786a30(&DAT_14688a890,&PTR_FUN_14636f340);
  }
  return DAT_14688a890;
}



// FUNCTION 1413bcc40 FUN_1413bcc40 body=47 status=ok
// SIG undefined FUN_1413bcc40(void)

longlong FUN_1413bcc40(void)

{
  if (DAT_14688a898 == 0) {
    FUN_141786a30(&DAT_14688a898,&PTR_FUN_14636f3c0);
  }
  return DAT_14688a898;
}



// FUNCTION 1413bcc70 FUN_1413bcc70 body=47 status=ok
// SIG undefined FUN_1413bcc70(void)

longlong FUN_1413bcc70(void)

{
  if (DAT_14688a8a0 == 0) {
    FUN_141786a30(&DAT_14688a8a0,&PTR_FUN_14636f400);
  }
  return DAT_14688a8a0;
}



// FUNCTION 1413bcca0 FUN_1413bcca0 body=47 status=ok
// SIG undefined FUN_1413bcca0(void)

longlong FUN_1413bcca0(void)

{
  if (DAT_14688a8a8 == 0) {
    FUN_141786a30(&DAT_14688a8a8,&PTR_FUN_14636f440);
  }
  return DAT_14688a8a8;
}



// FUNCTION 1413bccd0 FUN_1413bccd0 body=47 status=ok
// SIG undefined FUN_1413bccd0(void)

longlong FUN_1413bccd0(void)

{
  if (DAT_14688a8b0 == 0) {
    FUN_141786a30(&DAT_14688a8b0,&PTR_FUN_14636f480);
  }
  return DAT_14688a8b0;
}



// FUNCTION 1413bcd00 FUN_1413bcd00 body=47 status=ok
// SIG undefined FUN_1413bcd00(void)

longlong FUN_1413bcd00(void)

{
  if (DAT_14688a8b8 == 0) {
    FUN_141786a30(&DAT_14688a8b8,&PTR_FUN_14636f4c0);
  }
  return DAT_14688a8b8;
}



// FUNCTION 1413bcd30 FUN_1413bcd30 body=47 status=ok
// SIG undefined FUN_1413bcd30(void)

longlong FUN_1413bcd30(void)

{
  if (DAT_14688a8c0 == 0) {
    FUN_141786a30(&DAT_14688a8c0,&PTR_FUN_14636f500);
  }
  return DAT_14688a8c0;
}



// FUNCTION 1413bcd60 FUN_1413bcd60 body=47 status=ok
// SIG undefined FUN_1413bcd60(void)

longlong FUN_1413bcd60(void)

{
  if (DAT_14688a8c8 == 0) {
    FUN_141786a30(&DAT_14688a8c8,&PTR_FUN_14636f540);
  }
  return DAT_14688a8c8;
}



// FUNCTION 1413bcd90 FUN_1413bcd90 body=47 status=ok
// SIG undefined FUN_1413bcd90(void)

longlong FUN_1413bcd90(void)

{
  if (DAT_14688a8d0 == 0) {
    FUN_141786a30(&DAT_14688a8d0,&PTR_FUN_14636f580);
  }
  return DAT_14688a8d0;
}



// FUNCTION 1413bcdc0 FUN_1413bcdc0 body=47 status=ok
// SIG undefined FUN_1413bcdc0(void)

longlong FUN_1413bcdc0(void)

{
  if (DAT_14688a8d8 == 0) {
    FUN_141786a30(&DAT_14688a8d8,&PTR_FUN_14636f5c0);
  }
  return DAT_14688a8d8;
}



// FUNCTION 1413bcdf0 FUN_1413bcdf0 body=47 status=ok
// SIG undefined FUN_1413bcdf0(void)

longlong FUN_1413bcdf0(void)

{
  if (DAT_14688a8e0 == 0) {
    FUN_141786a30(&DAT_14688a8e0,&PTR_FUN_14636f600);
  }
  return DAT_14688a8e0;
}



// FUNCTION 1413bce20 FUN_1413bce20 body=47 status=ok
// SIG undefined FUN_1413bce20(void)

longlong FUN_1413bce20(void)

{
  if (DAT_14688a8e8 == 0) {
    FUN_141786a30(&DAT_14688a8e8,&PTR_FUN_14636f640);
  }
  return DAT_14688a8e8;
}



// FUNCTION 1413bce50 FUN_1413bce50 body=47 status=ok
// SIG undefined FUN_1413bce50(void)

longlong FUN_1413bce50(void)

{
  if (DAT_14688a8f0 == 0) {
    FUN_141786a30(&DAT_14688a8f0,&PTR_FUN_14636f680);
  }
  return DAT_14688a8f0;
}



// FUNCTION 1413bce80 FUN_1413bce80 body=47 status=ok
// SIG undefined FUN_1413bce80(void)

longlong FUN_1413bce80(void)

{
  if (DAT_14688a8f8 == 0) {
    FUN_141786a30(&DAT_14688a8f8,&PTR_FUN_14636f6c0);
  }
  return DAT_14688a8f8;
}



// FUNCTION 1413bceb0 FUN_1413bceb0 body=47 status=ok
// SIG undefined FUN_1413bceb0(void)

longlong FUN_1413bceb0(void)

{
  if (DAT_14688a900 == 0) {
    FUN_141786a30(&DAT_14688a900,&PTR_FUN_14636f700);
  }
  return DAT_14688a900;
}



// FUNCTION 1413bcee0 FUN_1413bcee0 body=47 status=ok
// SIG undefined FUN_1413bcee0(void)

longlong FUN_1413bcee0(void)

{
  if (DAT_14688a908 == 0) {
    FUN_141786a30(&DAT_14688a908,&PTR_FUN_14636f740);
  }
  return DAT_14688a908;
}



// FUNCTION 1413bcf10 FUN_1413bcf10 body=47 status=ok
// SIG undefined FUN_1413bcf10(void)

longlong FUN_1413bcf10(void)

{
  if (DAT_14688a910 == 0) {
    FUN_141786a30(&DAT_14688a910,&PTR_FUN_14636f780);
  }
  return DAT_14688a910;
}



// FUNCTION 1413bcf40 FUN_1413bcf40 body=47 status=ok
// SIG undefined FUN_1413bcf40(void)

longlong FUN_1413bcf40(void)

{
  if (DAT_14688a918 == 0) {
    FUN_141786a30(&DAT_14688a918,&PTR_FUN_14636f810);
  }
  return DAT_14688a918;
}



// FUNCTION 1413bcf70 FUN_1413bcf70 body=47 status=ok
// SIG undefined FUN_1413bcf70(void)

longlong FUN_1413bcf70(void)

{
  if (DAT_14688a920 == 0) {
    FUN_141786a30(&DAT_14688a920,&PTR_FUN_14636f850);
  }
  return DAT_14688a920;
}



// FUNCTION 1413bcfa0 FUN_1413bcfa0 body=47 status=ok
// SIG undefined FUN_1413bcfa0(void)

longlong FUN_1413bcfa0(void)

{
  if (DAT_14688a928 == 0) {
    FUN_141786a30(&DAT_14688a928,&PTR_FUN_14636f910);
  }
  return DAT_14688a928;
}



// FUNCTION 1413bcfd0 FUN_1413bcfd0 body=53 status=ok
// SIG undefined FUN_1413bcfd0(void)

void FUN_1413bcfd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_14499a4e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413bd010 FUN_1413bd010 body=53 status=ok
// SIG undefined FUN_1413bd010(void)

void FUN_1413bd010(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &PTR_FUN_14499b2e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413bd050 FUN_1413bd050 body=53 status=ok
// SIG undefined FUN_1413bd050(void)

void FUN_1413bd050(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_14499b400;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413bd0c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_14688a968 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"InventoryAbilityAspectData",&DAT_14688a968,FUN_140447710,0x48
                  ,0x10000000,0,L"Engine",InternalConstructor<UDatasmithFBXSceneImportData>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_14688a968;
}



// FUNCTION 1413bd170 FUN_1413bd170 body=162 status=ok
// SIG undefined FUN_1413bd170(void)

longlong FUN_1413bd170(void)

{
  if (DAT_14688a9c8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"InventoryGlobals",&DAT_14688a9c8,FUN_140447710,0x260,
                  0x10000000,0,L"Engine",&LAB_1413bf8a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14688a9c8;
}



// FUNCTION 1413bd220 operator<int,FFastArraySerializerGuidReferences>_TTuple<int,FFastArraySerializerGuidReferences> body=324 status=ok
// SIG undefined operator<int,FFastArraySerializerGuidReferences>_TTuple<int,FFastArraySerializerGuidReferences>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
TKeyInitializer<int_const_&>::
operator<int,FFastArraySerializerGuidReferences>_TTuple<int,FFastArraySerializerGuidReferences>
          (undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  longlong local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_a8 = 0xffffffff;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_50 = 0;
  local_40 = 0;
  local_28 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  *param_2 = *(undefined4 *)*param_1;
  local_a4 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  TSet<FActiveGameplayEffectHandle,DefaultKeyFuncs<FActiveGameplayEffectHandle,0>,FDefaultSetAllocator>
  ::
  TSet<FActiveGameplayEffectHandle,DefaultKeyFuncs<FActiveGameplayEffectHandle,0>,FDefaultSetAllocator>
            (param_2 + 2,&local_d8);
  TSet<FActiveGameplayEffectHandle,DefaultKeyFuncs<FActiveGameplayEffectHandle,0>,FDefaultSetAllocator>
  ::
  TSet<FActiveGameplayEffectHandle,DefaultKeyFuncs<FActiveGameplayEffectHandle,0>,FDefaultSetAllocator>
            (param_2 + 0x16,&local_88);
  *(undefined8 *)(param_2 + 0x2a) = local_38;
  param_2[0x2c] = (undefined4)local_30;
  param_2[0x2d] = local_30._4_4_;
  param_2[0x2e] = (undefined4)local_28;
  local_38 = 0;
  local_30 = 0;
  local_40 = local_40 & 0xffffffff00000000;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  local_90 = local_90 & 0xffffffff00000000;
  if (local_98 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_d8);
  return param_2;
}



// FUNCTION 1413bd370 Append<FDefaultSetAllocator> body=544 status=ok
// SIG undefined Append<FDefaultSetAllocator>(void)

void TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
     Append<FDefaultSetAllocator>(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
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
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    FUN_1413c1970();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar5;
      if (bVar4) goto LAB_1413bd45d;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
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
    if ((int)uVar2 < (int)uStack_84) {
LAB_1413bd45d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar8 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1413bd523;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
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
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1413bd523:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    FUN_140ac3dd0(param_1,local_res8,*param_2 + (longlong)(int)uStack_5c * 0xc,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1413bd590 Emplace<int_const_&,int_const_&> body=62 status=ok
// SIG undefined Emplace<int_const_&,int_const_&>(void)

longlong TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
         Emplace<int_const_&,int_const_&>(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_&&>_>(param_1,local_res8,&local_18,0);
  return *param_1 + (longlong)local_res8[0] * 0x10 + 4;
}



// FUNCTION 1413bd5d0 Emplace<TKeyInitializer<int_const_&>_> body=418 status=ok
// SIG undefined Emplace<TKeyInitializer<int_const_&>_>(void)

int * TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                (longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_28 [2];
  uint *local_20;
  
  FUN_140acb440(param_1,local_28);
  *param_2 = local_28[0];
  TKeyInitializer<int_const_&>::
  operator<int,FFastArraySerializerGuidReferences>_TTuple<int,FFastArraySerializerGuidReferences>
            (param_3,local_20);
  local_20[0x30] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 200 + *param_1) == *local_20) goto LAB_1413bd691;
          iVar3 = *(int *)((longlong)iVar3 * 200 + 0xc0 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_1413bd691:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 200 + *param_1);
      FFastArraySerializerGuidReferences::~FFastArraySerializerGuidReferences((longlong)_Dst + 8);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0xc0);
      TSparseArray<TSetElement<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_1413bd747;
    }
  }
  cVar1 = ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_20;
    local_20[0x31] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_20[0x30] =
         *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_1413bd747:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 1413bd780 FUN_1413bd780 body=8177 status=ok
// SIG undefined FUN_1413bd780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1413bd780(uint *param_1,longlong *param_2,uint *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint **ppuVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint *puVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  longlong lVar24;
  longlong *plVar25;
  ulonglong uVar26;
  uint uVar27;
  int *piVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint *puVar32;
  ulonglong uVar33;
  uint *puVar34;
  undefined1 auStack_618 [32];
  uint *local_5f8;
  char *local_5f0;
  char local_5e8 [8];
  uint *local_5e0;
  uint local_5d8;
  char local_5d4;
  char local_5d3;
  undefined1 local_5d2 [2];
  longlong *local_5d0;
  undefined4 local_5c8;
  uint local_5c4;
  uint local_5c0;
  uint local_5bc;
  uint local_5b8;
  uint local_5b4;
  uint local_5b0;
  uint local_5ac;
  uint local_5a8;
  uint local_5a4;
  int local_5a0;
  int local_59c;
  uint *local_598;
  uint *local_590;
  undefined8 uStack_588;
  uint *puStack_580;
  undefined1 auStack_578 [16];
  longlong local_568;
  longlong local_560;
  uint *local_558;
  longlong local_550;
  int local_548;
  int local_544;
  int local_540;
  undefined4 uStack_53c;
  int local_538;
  undefined4 uStack_534;
  int local_530;
  int local_52c;
  int local_528 [2];
  uint *local_520;
  longlong *local_518;
  uint *local_510;
  undefined8 uStack_508;
  uint *local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  int local_4e8 [2];
  uint local_4e0;
  uint uStack_4dc;
  uint *puStack_4d8;
  undefined4 local_4d0;
  uint uStack_4cc;
  uint uStack_4c8;
  undefined4 uStack_4c4;
  uint local_4c0;
  uint uStack_4bc;
  uint *puStack_4b8;
  undefined4 local_4b0;
  uint uStack_4ac;
  uint uStack_4a8;
  undefined4 uStack_4a4;
  uint local_4a0;
  uint uStack_49c;
  uint *puStack_498;
  undefined4 local_490;
  uint uStack_48c;
  uint uStack_488;
  undefined4 uStack_484;
  uint local_480;
  uint uStack_47c;
  uint *puStack_478;
  undefined4 local_470;
  undefined8 uStack_46c;
  undefined4 uStack_464;
  uint *local_460;
  undefined8 uStack_458;
  uint *local_450;
  undefined8 uStack_448;
  undefined1 local_440 [12];
  undefined4 uStack_434;
  longlong *local_430;
  uint *local_428;
  uint *local_418;
  undefined8 uStack_410;
  uint *local_408;
  undefined8 uStack_400;
  undefined1 local_3f8 [16];
  uint *local_3e8;
  char local_3e0;
  char cStack_3df;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  uint *puStack_3d0;
  undefined4 local_3c8;
  undefined8 uStack_3c4;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  uint uStack_3b4;
  uint *puStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  uint *puStack_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  uint *local_378;
  undefined8 uStack_370;
  uint *local_368;
  undefined8 uStack_360;
  undefined1 local_358 [16];
  uint *local_348;
  undefined2 local_340;
  undefined8 local_338;
  undefined4 uStack_330;
  uint uStack_32c;
  uint *local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined1 local_310 [4];
  undefined1 local_30c [4];
  uint *local_308;
  uint uStack_300;
  uint uStack_2fc;
  uint *local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  uint *local_2e0;
  uint *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  uint *local_2c0;
  uint *local_2b8;
  int *local_2b0;
  uint *local_2a8;
  uint local_290;
  uint uStack_28c;
  uint local_270;
  uint uStack_26c;
  int local_250;
  int iStack_24c;
  int local_230;
  int iStack_22c;
  uint local_218 [36];
  longlong local_188;
  int local_158 [8];
  int *local_138;
  undefined8 local_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  undefined8 local_100;
  longlong local_f8 [4];
  longlong *local_d8;
  undefined8 local_d0;
  int local_c8 [8];
  int *local_a8;
  undefined8 local_a0;
  int local_98 [16];
  int *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_618;
  local_550 = DAT_14688aa50;
  local_5e0 = param_1;
  local_5d0 = param_2;
  local_598 = param_3;
  if (DAT_14688aa50 == 0) {
    uVar8 = FUN_1413c1030();
    uVar13 = Z_Construct_UPackage__Script_MechWarrior();
    local_5f8 = (uint *)CONCAT44(local_5f8._4_4_,uVar8);
    DAT_14688aa50 = GetStaticStruct(FUN_1413c24f0,uVar13,L"InventorySlotEntry",0x40);
  }
  puVar32 = (uint *)0x0;
  uVar11 = 0;
  local_550 = DAT_14688aa50;
  if ((((char)param_2[8] != '\0') || (*param_2 == 0)) &&
     (param_3[2] - param_3[0xd] != (int)*(longlong *)((longlong)param_1 + 8))) {
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty(param_3,0);
    local_5b0 = 0;
    puVar34 = puVar32;
    if (0 < (int)*(longlong *)((longlong)param_1 + 8)) {
      do {
        piVar28 = (int *)((longlong)(int)(uint)puVar34 * 0x40 + *(longlong *)param_1);
        if ((*piVar28 != -1) || (uVar21 = (uint)puVar34, *param_2 != 0)) {
          local_2a8 = &local_5b0;
          local_2b0 = piVar28;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_&&>_>(param_3,local_30c,&local_2b0,0);
          uVar21 = local_5b0;
        }
        local_5b0 = uVar21 + 1;
        puVar34 = (uint *)(ulonglong)local_5b0;
      } while ((int)local_5b0 < (int)*(longlong *)((longlong)param_1 + 8));
    }
  }
  if (param_2[10] == 0) {
    if ((int *)param_2[0xc] != (int *)0x0) {
      iVar9 = *(int *)param_2[0xc];
      local_5e0 = param_3 + 0x16;
      uVar11 = param_3[0x20];
      puVar34 = param_3 + 0x1a;
      uVar13 = 0;
      local_4c0 = 0;
      uStack_4bc = 1;
      uStack_4ac = 0;
      uStack_4a8 = 0;
      if (uVar11 != 0) {
        puVar22 = *(uint **)(param_3 + 0x1e);
        if (*(uint **)(param_3 + 0x1e) == (uint *)0x0) {
          puVar22 = puVar34;
        }
        uVar21 = *puVar22;
        puVar15 = puVar32;
        while (uVar21 == 0) {
          iVar10 = (int)puVar32;
          uStack_4a8 = (int)puVar15 + 0x20;
          puVar15 = (uint *)(ulonglong)uStack_4a8;
          local_4c0 = iVar10 + 1;
          puVar32 = (uint *)(ulonglong)local_4c0;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
          goto LAB_1413bdb8d;
          uVar21 = puVar22[(longlong)iVar10 + 1];
        }
        uStack_4bc = -uVar21 & uVar21;
        iVar10 = 0x1f;
        if (uStack_4bc != 0) {
          for (; uStack_4bc >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uStack_4bc == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_4ac = (uStack_4a8 - iVar10) + 0x1f;
        if ((int)uVar11 < (int)uStack_4ac) {
LAB_1413bdb8d:
          uStack_4ac = uVar11;
        }
      }
      local_4b0 = 0xffffffff;
      uStack_26c = param_3[0x20];
      uStack_588 = CONCAT44(uStack_4bc,local_4c0);
      uStack_4f8 = CONCAT44(uStack_4ac,0xffffffff);
      local_4f0 = CONCAT44(uStack_4a4,uStack_4a8);
      local_270 = -1 << ((byte)uStack_26c & 0x1f);
      uVar21 = uStack_26c & 0xffffffe0;
      auStack_578._8_8_ = local_4f0;
      auStack_578._0_8_ = uStack_4f8;
      uStack_508 = CONCAT44(uStack_4bc,local_4c0);
      local_590 = local_5e0;
      puStack_580 = puVar34;
      local_510 = local_5e0;
      local_500 = puVar34;
      local_4e8[0] = iVar9;
      puStack_4b8 = puVar34;
      uVar29 = uStack_26c;
      if (uStack_26c != uVar11) {
        puVar32 = *(uint **)(param_3 + 0x1e);
        if (*(uint **)(param_3 + 0x1e) == (uint *)0x0) {
          puVar32 = puVar34;
        }
        uVar29 = puVar32[(int)uStack_26c >> 5] & local_270;
        iVar10 = (int)uStack_26c >> 5;
        while (uVar29 == 0) {
          uVar21 = uVar21 + 0x20;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
          goto LAB_1413bdc69;
          uVar29 = puVar32[(longlong)iVar10 + 1];
          local_270 = 0xffffffff;
          iVar10 = iVar10 + 1;
        }
        uVar29 = -uVar29 & uVar29;
        iVar10 = 0x1f;
        if (uVar29 != 0) {
          for (; uVar29 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uVar29 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_26c = (uVar21 - iVar10) + 0x1f;
        uVar29 = uStack_26c;
        if ((int)uVar11 < (int)uStack_26c) {
LAB_1413bdc69:
          uStack_26c = uVar11;
          uVar29 = uVar11;
        }
      }
LAB_1413bdc80:
      if (((uStack_4f8._4_4_ == uVar29) && (local_500 == puVar34)) && (local_510 == local_5e0)) {
        return uVar13;
      }
      lVar24 = (longlong)(int)uStack_4f8._4_4_ * 200 + *(longlong *)local_510;
      if (*(int *)(lVar24 + 0x60) != *(int *)(lVar24 + 0x8c)) {
        lVar18 = *(longlong *)(lVar24 + 0x98);
        if (*(longlong *)(lVar24 + 0x98) == 0) {
          lVar18 = lVar24 + 0x90;
        }
        iVar10 = *(int *)(lVar18 + ((longlong)*(int *)(lVar24 + 0xa0) - 1U & (longlong)iVar9) * 4);
        if (iVar10 != -1) {
          lVar18 = *(longlong *)(lVar24 + 0x58);
          do {
            if (*(int *)(lVar18 + (longlong)iVar10 * 0xc) == iVar9) {
              if (iVar10 != -1) {
                lVar30 = *(longlong *)(lVar24 + 0x98);
                if (*(longlong *)(lVar24 + 0x98) == 0) {
                  lVar30 = lVar24 + 0x90;
                }
                uVar31 = (longlong)*(int *)(lVar24 + 0xa0) - 1;
                iVar10 = *(int *)(lVar30 + (uVar31 & (longlong)iVar9) * 4);
                goto joined_r0x0001413bdd40;
              }
              break;
            }
            iVar10 = *(int *)(lVar18 + 4 + (longlong)iVar10 * 0xc);
          } while (iVar10 != -1);
        }
      }
      goto LAB_1413bddc6;
    }
    if ((char)param_2[8] == '\0') {
      plVar25 = (longlong *)*param_2;
      local_430 = plVar25;
      if (plVar25 == (longlong *)0x0) {
        plVar25 = (longlong *)param_2[1];
        puVar34 = *(uint **)plVar25[1];
        if ((uint *)((undefined8 *)plVar25[1])[1] < puVar34 + 1) {
          (**(code **)(*plVar25 + 0x50))(plVar25,&local_5b4,4);
          if ((*(byte *)((longlong)plVar25 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar25,&local_5b4,4);
          }
        }
        else {
          local_5b4 = *puVar34;
          *(longlong *)plVar25[1] = *(longlong *)plVar25[1] + 4;
        }
        piVar28 = *(int **)plVar25[1];
        if ((int *)((undefined8 *)plVar25[1])[1] < piVar28 + 1) {
          (**(code **)(*plVar25 + 0x50))(plVar25,&local_59c,4);
          if ((*(byte *)((longlong)plVar25 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar25,&local_59c,4);
          }
        }
        else {
          local_59c = *piVar28;
          *(longlong *)plVar25[1] = *(longlong *)plVar25[1] + 4;
        }
        puVar34 = *(uint **)plVar25[1];
        if ((uint *)((undefined8 *)plVar25[1])[1] < puVar34 + 1) {
          (**(code **)(*plVar25 + 0x50))(plVar25,&local_5bc,4);
          if ((*(byte *)((longlong)plVar25 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar25,&local_5bc,4);
          }
        }
        else {
          local_5bc = *puVar34;
          *(longlong *)plVar25[1] = *(longlong *)plVar25[1] + 4;
        }
        if (0x800 < local_5bc) {
LAB_1413beca3:
          *(byte *)(plVar25 + 5) = *(byte *)(plVar25 + 5) | 0x80;
          return 0;
        }
        puVar34 = *(uint **)plVar25[1];
        if ((uint *)((undefined8 *)plVar25[1])[1] < puVar34 + 1) {
          (**(code **)(*plVar25 + 0x50))(plVar25,&local_5c4,4);
          if ((*(byte *)((longlong)plVar25 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar25,&local_5c4,4);
          }
        }
        else {
          local_5c4 = *puVar34;
          *(longlong *)plVar25[1] = *(longlong *)plVar25[1] + 4;
        }
        if (0x800 < local_5c4) goto LAB_1413beca3;
        local_138 = (int *)0x0;
        local_130 = 0;
        local_a8 = (int *)0x0;
        local_a0 = 0;
        local_d8 = (longlong *)0x0;
        local_d0 = 0;
        puVar34 = puVar32;
        if (local_5bc != 0) {
          do {
            plVar14 = (longlong *)plVar25[1];
            if ((uint *)plVar14[1] < (uint *)*plVar14 + 1) {
              (**(code **)(*plVar25 + 0x50))(plVar25,&local_5c0,4);
              if ((*(byte *)((longlong)plVar25 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar25,&local_5c0,4);
              }
            }
            else {
              local_5c0 = *(uint *)*plVar14;
              *plVar14 = *plVar14 + 4;
            }
            TSet<TTuple<enum_EAssetRegistryDependencyType::Type,int>,TDefaultMapHashableKeyFuncs<enum_EAssetRegistryDependencyType::Type,int,0>,FDefaultSetAllocator>
            ::FindId(param_3,&local_548,local_5c0);
            uVar31 = local_130;
            puVar22 = puVar32;
            if (local_548 != -1) {
              puVar22 = (uint *)((longlong)local_548 * 0x10 + *(longlong *)param_3);
            }
            puVar15 = puVar22 + 1;
            if (puVar22 == (uint *)0x0) {
              puVar15 = puVar32;
            }
            if (puVar15 != (uint *)0x0) {
              lVar24 = (longlong)(int)local_130;
              uVar21 = *puVar15;
              iVar9 = (int)local_130 + 1;
              local_130 = CONCAT44(local_130._4_4_,iVar9);
              if (local_130._4_4_ < iVar9) {
                FUN_140a95f50(local_158,uVar31 & 0xffffffff);
              }
              piVar28 = local_158;
              if (local_138 != (int *)0x0) {
                piVar28 = local_138;
              }
              piVar28[lVar24] = uVar21;
            }
            uVar21 = (int)puVar34 + 1;
            puVar34 = (uint *)(ulonglong)uVar21;
          } while (uVar21 < local_5bc);
          puVar34 = (uint *)(local_130 & 0xffffffff);
        }
        local_5c0 = 0;
        plVar14 = local_5d0;
        if (local_5c4 != 0) {
          do {
            plVar20 = (longlong *)plVar25[1];
            if ((uint *)plVar20[1] < (uint *)*plVar20 + 1) {
              (**(code **)(*plVar25 + 0x50))(plVar25,&local_5d8,4);
              if ((*(byte *)((longlong)plVar25 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar25,&local_5d8,4);
              }
            }
            else {
              local_5d8 = *(uint *)*plVar20;
              *plVar20 = *plVar20 + 4;
            }
            TSet<TTuple<enum_EAssetRegistryDependencyType::Type,int>,TDefaultMapHashableKeyFuncs<enum_EAssetRegistryDependencyType::Type,int,0>,FDefaultSetAllocator>
            ::FindId(param_3,&local_544,local_5d8);
            uVar31 = local_d0;
            puVar34 = puVar32;
            if (local_544 != -1) {
              puVar34 = (uint *)((longlong)local_544 * 0x10 + *(longlong *)param_3);
            }
            local_5b8 = 0;
            puVar22 = puVar34 + 1;
            if (puVar34 == (uint *)0x0) {
              puVar22 = puVar32;
            }
            if (puVar22 == (uint *)0x0) {
              iVar9 = (int)*(longlong *)((longlong)param_1 + 8);
              *(int *)((longlong)param_1 + 8) = iVar9 + 1;
              if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
                ResizeGrow(param_1,iVar9);
              }
              puVar22 = (uint *)((longlong)iVar9 * 0x40 + *(longlong *)param_1);
              puVar34 = puVar32;
              if (puVar22 != (uint *)0x0) {
                puVar22[0] = 0xffffffff;
                puVar22[1] = 0xffffffff;
                puVar22[2] = 0xffffffff;
                puVar22[4] = 0;
                puVar22[5] = 0;
                *(undefined2 *)(puVar22 + 6) = 1;
                puVar22[8] = 0;
                puVar22[9] = 0;
                puVar22[10] = 0;
                puVar22[0xb] = 0;
                puVar22[0xe] = 0;
                puVar22[0xf] = 0;
                puVar22[0xc] = 0;
                puVar22[0xd] = 0;
                puVar34 = puVar22;
              }
              *puVar34 = local_5d8;
              local_5b8 = (int)*(longlong *)((longlong)param_1 + 8) - 1;
              local_2c0 = &local_5d8;
              local_2b8 = &local_5b8;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_&&>_>(param_3,&local_540,&local_2c0,0);
              uVar31 = local_a0;
              lVar24 = (longlong)(int)local_a0;
              iVar9 = (int)local_a0 + 1;
              local_a0 = CONCAT44(local_a0._4_4_,iVar9);
              if (local_a0._4_4_ < iVar9) {
                FUN_140a95f50(local_c8,uVar31 & 0xffffffff);
              }
              piVar28 = local_c8;
              if (local_a8 != (int *)0x0) {
                piVar28 = local_a8;
              }
              piVar28[lVar24] = local_5b8;
            }
            else {
              local_5b8 = *puVar22;
              lVar24 = (longlong)(int)local_d0;
              puVar34 = (uint *)((longlong)(int)local_5b8 * 0x40 + *(longlong *)param_1);
              iVar9 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,iVar9);
              if (local_d0._4_4_ < iVar9) {
                FUN_140a95f50(local_f8,uVar31 & 0xffffffff);
              }
              plVar20 = local_f8;
              if (local_d8 != (longlong *)0x0) {
                plVar20 = local_d8;
              }
              *(uint *)((longlong)plVar20 + lVar24 * 4) = local_5b8;
            }
            puVar34[1] = puVar34[1] + 1;
            puVar34[2] = local_5b4;
            UPackageMap::ResetTrackedGuids(plVar14[4],1);
            local_598 = (uint *)plVar25[0x15];
            local_5f0 = &local_5d3;
            local_5d3 = '\0';
            local_5f8 = puVar34;
            (*(code *)**(undefined8 **)plVar14[7])((undefined8 *)plVar14[7],local_550,plVar25);
            if (-1 < (char)plVar25[5]) {
              lVar18 = plVar14[4];
              iVar9 = *(int *)(lVar18 + 0x38);
              lVar24 = lVar18 + 0x30;
              iVar10 = *(int *)(lVar18 + 100);
              local_560 = lVar18 + 0x80;
              local_568 = lVar24;
              if ((iVar9 == iVar10) && (*(int *)(lVar18 + 0x88) == *(int *)(lVar18 + 0xb4))) {
                TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
                ::Remove(param_3 + 0x16,local_5d8);
                param_1 = local_5e0;
              }
              else {
                TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
                ::FindId(param_3 + 0x16,&local_530,local_5d8);
                if ((local_530 == -1) ||
                   (lVar18 = (longlong)local_530 * 200 + *(longlong *)(param_3 + 0x16),
                   lVar24 = local_568, lVar18 == 0)) {
                  local_2e0 = &local_5d8;
                  TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
                  ::Emplace<TKeyInitializer<int_const_&>_>(param_3 + 0x16,&local_52c,&local_2e0,0);
                  iVar9 = *(int *)(lVar24 + 8);
                  iVar10 = *(int *)(lVar24 + 0x34);
                  lVar18 = (longlong)local_52c * 200 + *(longlong *)(param_3 + 0x16);
                }
                puVar34 = (uint *)(lVar18 + 8);
                lVar24 = local_568;
                if (*(int *)(lVar18 + 0x10) - *(int *)(lVar18 + 0x3c) == iVar9 - iVar10) {
                  puVar22 = (uint *)(lVar18 + 0x18);
                  local_3b8 = 0;
                  uStack_3b4 = 1;
                  local_3a8 = 0xffffffff;
                  uStack_3a4 = 0;
                  uStack_3a0 = 0;
                  iVar9 = 0;
                  puStack_3b0 = puVar22;
                  if (*(int *)(lVar18 + 0x30) != 0) {
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b8);
                    iVar9 = *(int *)(lVar18 + 0x30);
                  }
                  lVar24 = local_568;
                  uStack_508 = CONCAT44(uStack_3b4,local_3b8);
                  uStack_4f8 = CONCAT44(uStack_3a4,local_3a8);
                  local_4f0 = CONCAT44(uStack_39c,uStack_3a0);
                  local_500 = puStack_3b0;
                  local_250 = -1 << ((byte)iVar9 & 0x1f);
                  uStack_330 = local_3b8;
                  uStack_32c = uStack_3b4;
                  local_328 = puStack_3b0;
                  local_510 = puVar34;
                  uStack_320 = uStack_4f8;
                  local_318 = local_4f0;
                  iStack_24c = iVar9;
                  local_338 = puVar34;
                  while( true ) {
                    if (((uStack_320._4_4_ == iVar9) && (local_328 == puVar22)) &&
                       (local_338 == puVar34)) goto LAB_1413bf241;
                    piVar28 = (int *)TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                                     ::FindId(lVar24,&local_538,
                                              *(longlong *)local_338 +
                                              (longlong)uStack_320._4_4_ * 0xc);
                    if (*piVar28 == -1) break;
                    uStack_320 = CONCAT44(uStack_320._4_4_,(uint)uStack_320 & ~uStack_32c);
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_330);
                  }
                }
                TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                          (puVar34,lVar24);
                *(undefined1 *)((longlong)local_5d0 + 0x44) = 1;
LAB_1413bf241:
                puVar34 = (uint *)(lVar18 + 0x58);
                if (*(int *)(lVar18 + 0x60) - *(int *)(lVar18 + 0x8c) ==
                    *(int *)(local_560 + 8) - *(int *)(local_560 + 0x34)) {
                  puVar22 = (uint *)(lVar18 + 0x68);
                  local_398 = 0;
                  uStack_394 = 1;
                  local_388 = 0xffffffff;
                  uStack_384 = 0;
                  uStack_380 = 0;
                  iVar9 = 0;
                  puStack_390 = puVar22;
                  if (*(int *)(lVar18 + 0x80) != 0) {
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_398);
                    iVar9 = *(int *)(lVar18 + 0x80);
                  }
                  uStack_508 = CONCAT44(uStack_394,local_398);
                  uStack_4f8 = CONCAT44(uStack_384,local_388);
                  local_4f0 = CONCAT44(uStack_37c,uStack_380);
                  local_500 = puStack_390;
                  local_230 = -1 << ((byte)iVar9 & 0x1f);
                  uStack_588 = CONCAT44(uStack_394,local_398);
                  puStack_580 = puStack_390;
                  auStack_578._8_8_ = local_4f0;
                  auStack_578._0_8_ = uStack_4f8;
                  local_590 = puVar34;
                  local_510 = puVar34;
                  iStack_22c = iVar9;
                  while( true ) {
                    if (((auStack_578._4_4_ == iVar9) && (puStack_580 == puVar22)) &&
                       (local_590 == puVar34)) goto LAB_1413bf36c;
                    piVar28 = (int *)TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                                     ::FindId(local_560,&local_558,
                                              *(longlong *)local_590 +
                                              (longlong)(int)auStack_578._4_4_ * 0xc);
                    if (*piVar28 == -1) break;
                    auStack_578._0_4_ = auStack_578._0_4_ & ~uStack_588._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_588);
                  }
                }
                TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                          (puVar34,local_560);
                *(undefined1 *)((longlong)local_5d0 + 0x44) = 1;
LAB_1413bf36c:
                plVar14 = local_5d0;
                *(undefined4 *)(lVar18 + 0xb0) = 0;
                if (*(int *)(lVar18 + 0xb4) != 0) {
                  TArray<unsigned_char,FDefaultAllocator>::ResizeTo(lVar18 + 0xa8,0);
                }
                *(int *)(lVar18 + 0xb8) = (int)plVar25[0x15] - (int)local_598;
                FBitReaderMark::Copy(&local_598,plVar25,lVar18 + 0xa8);
                param_1 = local_5e0;
                if (*(int *)(local_568 + 8) != *(int *)(local_568 + 0x34)) {
                  *(undefined1 *)((longlong)plVar14 + 0x43) = 1;
                }
              }
            }
            UPackageMap::ResetTrackedGuids(plVar14[4],0);
            if ((char)plVar25[5] < '\0') {
              if (local_d8 != (longlong *)0x0) {
                FMemory::Free();
              }
              if (local_a8 != (int *)0x0) {
                FMemory::Free();
              }
              if (local_138 == (int *)0x0) {
                return 0;
              }
              FMemory::Free();
              return 0;
            }
            local_5c0 = local_5c0 + 1;
          } while (local_5c0 < local_5c4);
          puVar34 = (uint *)(local_130 & 0xffffffff);
        }
        iVar9 = (int)puVar34;
        piVar28 = local_138;
        puVar22 = puVar32;
        puVar15 = puVar32;
        if (0 < (int)*(longlong *)((longlong)param_1 + 8)) {
          do {
            iVar9 = *(int *)(*(longlong *)param_1 + 8 + (longlong)puVar15);
            iVar10 = (int)puVar22;
            if ((iVar9 < (int)local_5b4) && (local_59c < iVar9)) {
              iVar9 = (int)puVar34;
              piVar16 = local_158;
              if (piVar28 != (int *)0x0) {
                piVar16 = piVar28;
              }
              piVar2 = piVar16 + iVar9;
              for (; piVar16 != piVar2; piVar16 = piVar16 + 1) {
                if (*piVar16 == iVar10) goto LAB_1413bf49c;
              }
              local_130 = CONCAT44(local_130._4_4_,iVar9 + 1);
              if (local_130._4_4_ < iVar9 + 1) {
                FUN_140a95f50(local_158,puVar34);
                piVar28 = local_138;
              }
              piVar16 = local_158;
              if (piVar28 != (int *)0x0) {
                piVar16 = piVar28;
              }
              piVar16[iVar9] = iVar10;
              puVar34 = (uint *)(local_130 & 0xffffffff);
              piVar28 = local_138;
            }
LAB_1413bf49c:
            iVar9 = (int)puVar34;
            puVar22 = (uint *)(ulonglong)(iVar10 + 1U);
            puVar15 = puVar15 + 0x10;
          } while ((int)(iVar10 + 1U) < (int)*(longlong *)((longlong)param_1 + 8));
        }
        plVar25 = local_5d0;
        if ((0 < iVar9) || (local_5c4 != 0)) {
          uVar21 = param_3[0x15] + 1;
          if (param_3[0x15] + 1 == 0xffffffff) {
            uVar21 = uVar11;
          }
          param_3[0x15] = uVar21;
        }
        piVar16 = local_158;
        if (piVar28 != (int *)0x0) {
          piVar16 = piVar28;
        }
        puVar34 = (uint *)((longlong)iVar9 & 0x3fffffffffffffff);
        if (piVar16 + iVar9 < piVar16) {
          puVar34 = puVar32;
        }
        if (puVar34 != (uint *)0x0) {
          do {
            puVar22 = local_5e0;
            iVar9 = *piVar16;
            if ((-1 < iVar9) && (iVar9 < (int)*(longlong *)((longlong)local_5e0 + 8))) {
              iVar10 = TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
                       ::Remove(param_3 + 0x16,
                                *(undefined4 *)((longlong)iVar9 * 0x40 + *(longlong *)local_5e0));
              if (0 < iVar10) {
                *(undefined1 *)((longlong)plVar25 + 0x44) = 1;
              }
              FUN_140e8c570(*(longlong *)puVar22 + (longlong)iVar9 * 0x40,param_3);
            }
            piVar16 = piVar16 + 1;
            puVar32 = (uint *)((longlong)puVar32 + 1);
          } while (puVar32 != puVar34);
          piVar28 = local_138;
          iVar9 = (int)local_130;
        }
        puVar32 = local_5e0;
        uVar31 = 0;
        piVar16 = local_c8;
        if (local_a8 != (int *)0x0) {
          piVar16 = local_a8;
        }
        uVar33 = (longlong)(int)local_a0 & 0x3fffffffffffffff;
        if (piVar16 + (int)local_a0 < piVar16) {
          uVar33 = uVar31;
        }
        uVar26 = uVar31;
        if (uVar33 != 0) {
          do {
            FUN_140e8c320((longlong)*piVar16 * 0x40 + *(longlong *)puVar32,param_3);
            uVar26 = uVar26 + 1;
            piVar16 = piVar16 + 1;
          } while (uVar26 != uVar33);
          piVar28 = local_138;
          iVar9 = (int)local_130;
        }
        plVar25 = local_f8;
        if (local_d8 != (longlong *)0x0) {
          plVar25 = local_d8;
        }
        uVar33 = (longlong)(int)local_d0 & 0x3fffffffffffffff;
        if ((longlong *)((longlong)plVar25 + (longlong)(int)local_d0 * 4) < plVar25) {
          uVar33 = uVar31;
        }
        if (uVar33 != 0) {
          do {
            FUN_140e8c3a0((longlong)(int)*plVar25 * 0x40 + *(longlong *)puVar32,param_3);
            uVar31 = uVar31 + 1;
            plVar25 = (longlong *)((longlong)plVar25 + 4);
          } while (uVar31 != uVar33);
          piVar28 = local_138;
          iVar9 = (int)local_130;
        }
        if (0 < iVar9) {
          piVar16 = local_158;
          if (piVar28 != (int *)0x0) {
            piVar16 = piVar28;
          }
          AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
                    (piVar16,(longlong)iVar9,local_5d2[0],local_5d2);
          lVar24 = (longlong)((int)local_130 + -1);
          piVar28 = local_138;
          if (-1 < (int)local_130 + -1) {
            do {
              piVar16 = local_158;
              if (piVar28 != (int *)0x0) {
                piVar16 = piVar28;
              }
              iVar9 = piVar16[lVar24];
              if ((-1 < iVar9) && (iVar9 < (int)*(longlong *)((longlong)puVar32 + 8))) {
                TArray<FXActiveActionCue,FDefaultAllocator>::RemoveAtSwapImpl(puVar32,iVar9,1);
                piVar28 = local_138;
              }
              lVar24 = lVar24 + -1;
            } while (-1 < lVar24);
          }
          TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
                    (param_3,0);
          piVar28 = local_138;
        }
        if (local_d8 != (longlong *)0x0) {
          FMemory::Free();
          piVar28 = local_138;
        }
        if (local_a8 != (int *)0x0) {
          FMemory::Free();
          piVar28 = local_138;
        }
      }
      else {
        puVar34 = (uint *)operator_new(0x60);
        if (puVar34 == (uint *)0x0) {
          local_428 = (uint *)0x0;
          puVar34 = puVar32;
        }
        else {
          *(undefined ***)puVar34 = &PTR__scalar_deleting_destructor__144999a40;
          puVar34[2] = 0;
          puVar34[3] = 0;
          puVar34[4] = 0;
          puVar34[5] = 0;
          local_428 = puVar34;
          TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>
                    (puVar34 + 6,0,0);
          puVar34[0xe] = 0xffffffff;
          puVar34[0xf] = 0;
          puVar34[0x12] = 0;
          puVar34[0x13] = 0;
          puVar34[0x14] = 0;
          puVar34[0x16] = 0xffffffff;
        }
        local_520 = puVar34;
        plVar14 = (longlong *)FUN_1413bfd70(puVar34);
        local_518 = plVar14;
        SharedPointerInternals::EnableSharedFromThis(&local_520,puVar34,puVar34);
        ppuVar3 = (uint **)local_5d0[2];
        if (ppuVar3 != &local_520) {
          *ppuVar3 = local_520;
          local_520 = (uint *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(ppuVar3 + 1,&local_518);
          plVar14 = local_518;
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar20 = plVar14 + 1;
          lVar24 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar24 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar28 = (int *)((longlong)plVar14 + 0xc);
            iVar9 = *piVar28;
            *piVar28 = *piVar28 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        puVar22 = puVar34 + 2;
        puVar34[0x16] = param_3[0x15];
        lVar24 = local_5d0[3];
        if (lVar24 == 0) {
          local_5a8 = 0xffffffff;
          puVar34 = puVar32;
        }
        else {
          local_5a8 = *(uint *)(lVar24 + 0x58);
          puVar34 = (uint *)(lVar24 + 8);
        }
        local_2c8 = local_5d0;
        local_598 = puVar34;
        local_558 = puVar22;
        local_2d8 = param_3;
        local_2d0 = (longlong *)param_1;
        if ((lVar24 != 0) && (param_3[0x15] == local_5a8)) {
          if ((puVar34 != (uint *)0x0) &&
             (((param_3[0x2a] == 0xffffffff || (param_3[0x2a] != *(uint *)((longlong)param_1 + 8)))
              || (param_3[0x2b] == 0xffffffff)))) {
            param_3[0x2a] = *(uint *)((longlong)param_1 + 8);
            uVar11 = <lambda_0d4a0caff2d1d8f517f1a4a0ba43c808>::operator()(&local_2d8);
            param_3[0x2b] = uVar11;
            return 0;
          }
          return 0;
        }
        plVar14 = local_5d0;
        iVar9 = <lambda_0d4a0caff2d1d8f517f1a4a0ba43c808>::operator()(&local_2d8);
        local_58 = (int *)0x0;
        local_50 = 0;
        local_108 = (undefined1 *)0x0;
        local_100 = 0;
        if (puVar34 != (uint *)0x0) {
          uVar11 = puVar34[2] - puVar34[0xd];
        }
        iVar9 = uVar11 - iVar9;
        puVar15 = puVar32;
        puVar23 = puVar32;
        if (0 < (int)*(longlong *)((longlong)local_5e0 + 8)) {
          do {
            lVar24 = *(longlong *)local_5e0;
            iVar10 = (int)puVar23;
            if ((*(char *)((longlong)plVar14 + 0x45) == '\0') ||
               (*(int *)(lVar24 + (longlong)puVar15) != -1)) {
              if (*(int *)(lVar24 + (longlong)puVar15) == -1) {
                param_3[0x14] = param_3[0x14] + 1;
                *(uint *)(lVar24 + (longlong)puVar15) = param_3[0x14];
                uVar11 = param_3[0x14];
                if (param_3[0x14] == 0xffffffff) {
                  uVar11 = 0;
                }
                param_3[0x14] = uVar11;
                puVar23 = (uint *)(lVar24 + (longlong)puVar15) + 1;
                *puVar23 = *puVar23 + 1;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
                Reset(param_3);
                param_3[0x15] = param_3[0x15] + 1;
                if (param_3[0x15] == 0xffffffff) {
                  param_3[0x15] = 0;
                }
                param_3[0x2a] = 0xffffffff;
                param_3[0x2b] = 0xffffffff;
                lVar24 = *(longlong *)local_5e0;
              }
              lVar24 = (longlong)iVar10 * 0x40 + lVar24;
              TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
              Emplace<int_const_&,int_const_&>(puVar22,lVar24,lVar24 + 4);
              lVar24 = *(longlong *)local_5e0;
              puVar23 = puVar32;
              if (puVar34 != (uint *)0x0) {
                TSet<TTuple<enum_EAssetRegistryDependencyType::Type,int>,TDefaultMapHashableKeyFuncs<enum_EAssetRegistryDependencyType::Type,int,0>,FDefaultSetAllocator>
                ::FindId(puVar34,local_528,*(undefined4 *)(lVar24 + (longlong)puVar15));
                if (local_528[0] == -1) {
                  puVar23 = (uint *)0x0;
                }
                else {
                  lVar18 = (longlong)local_528[0] * 0x10 + *(longlong *)puVar34;
                  puVar23 = (uint *)(lVar18 + 4);
                  if (lVar18 == 0) {
                    puVar23 = puVar32;
                  }
                }
              }
              uVar31 = local_50;
              if (puVar23 == (uint *)0x0) {
                uStack_53c = *(undefined4 *)((longlong)puVar15 + lVar24);
                lVar24 = (longlong)(int)local_50;
                local_50._0_4_ = (int)local_50 + 1;
                local_540 = iVar10;
                if (local_50._4_4_ < (int)local_50) {
                  TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                            (local_98,uVar31 & 0xffffffff);
                }
                piVar28 = local_98;
                if (local_58 != (int *)0x0) {
                  piVar28 = local_58;
                }
                iVar9 = iVar9 + 1;
                *(ulonglong *)(piVar28 + lVar24 * 2) = CONCAT44(uStack_53c,local_540);
                puVar22 = local_558;
                plVar14 = local_5d0;
              }
              else {
                puVar22 = local_558;
                plVar14 = local_5d0;
                if (*puVar23 != *(uint *)((longlong)puVar15 + lVar24 + 4)) {
                  uStack_534 = *(undefined4 *)((longlong)puVar15 + lVar24);
                  lVar24 = (longlong)(int)local_50;
                  local_50._0_4_ = (int)local_50 + 1;
                  local_538 = iVar10;
                  if (local_50._4_4_ < (int)local_50) {
                    TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                              (local_98,uVar31 & 0xffffffff);
                  }
                  piVar28 = local_98;
                  if (local_58 != (int *)0x0) {
                    piVar28 = local_58;
                  }
                  *(ulonglong *)(piVar28 + lVar24 * 2) = CONCAT44(uStack_534,local_538);
                  puVar22 = local_558;
                  plVar14 = local_5d0;
                  puVar34 = local_598;
                }
              }
            }
            plVar25 = local_430;
            puVar15 = puVar15 + 0x10;
            puVar23 = (uint *)(ulonglong)(iVar10 + 1U);
          } while ((int)(iVar10 + 1U) < (int)*(longlong *)((longlong)local_5e0 + 8));
        }
        auVar6 = _local_440;
        if ((0 < iVar9) && (puVar34 != (uint *)0x0)) {
          puStack_3d0 = puVar34 + 4;
          local_3d8 = 0;
          uStack_3d4 = 1;
          local_3c8 = 0xffffffff;
          uStack_3c4 = 0;
          if (puVar34[10] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3d8);
          }
          puVar22 = local_558;
          auVar5._4_8_ = uStack_3c4;
          auVar5._0_4_ = local_3c8;
          auVar4._12_4_ = uStack_3bc;
          auVar4._0_12_ = auVar5;
          stack0xfffffffffffffbc8 = puVar34;
          auVar6 = _local_440;
          uStack_588 = CONCAT44(uStack_3d4,local_3d8);
          puStack_580 = puStack_3d0;
          local_340 = 0;
          auStack_578._0_8_ = auVar5._0_8_;
          local_440._8_4_ = SUB84(puVar34,0);
          uStack_434 = (undefined4)((ulonglong)puVar34 >> 0x20);
          local_368 = puStack_3d0;
          uStack_360 = auStack_578._0_8_;
          local_358._8_4_ = local_440._8_4_;
          local_358._0_8_ = auVar4._8_8_;
          local_358._12_4_ = uStack_434;
          iVar10 = (int)uStack_3c4;
          local_590 = puVar34;
          auStack_578 = auVar4;
          _local_440 = auVar6;
          local_378 = puVar34;
          uStack_370 = uStack_588;
          local_348 = puVar34;
          if (iVar10 < (int)puStack_3d0[6]) {
            do {
              lVar24 = *(longlong *)local_378;
              piVar28 = (int *)TSet<TTuple<enum_EAssetRegistryDependencyType::Type,int>,TDefaultMapHashableKeyFuncs<enum_EAssetRegistryDependencyType::Type,int,0>,FDefaultSetAllocator>
                               ::FindId(puVar22,&local_560,
                                        *(undefined4 *)(lVar24 + (longlong)iVar10 * 0x10));
              uVar31 = local_100;
              if (*piVar28 == -1) {
                lVar18 = (longlong)(int)local_100;
                iVar12 = (int)local_100 + 1;
                local_100 = CONCAT44(local_100._4_4_,iVar12);
                if (local_100._4_4_ < iVar12) {
                  FUN_140a95f50(local_128,uVar31 & 0xffffffff);
                }
                puVar19 = local_128;
                if (local_108 != (undefined1 *)0x0) {
                  puVar19 = local_108;
                }
                iVar9 = iVar9 + -1;
                *(undefined4 *)(puVar19 + lVar18 * 4) =
                     *(undefined4 *)(lVar24 + (longlong)iVar10 * 0x10);
                if (iVar9 < 1) break;
              }
              uStack_360 = CONCAT44(uStack_360._4_4_,(uint)uStack_360 & ~uStack_370._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_370);
              iVar10 = uStack_360._4_4_;
            } while (uStack_360._4_4_ < (int)local_368[6]);
            plVar25 = local_430;
            auVar6 = _local_440;
            if (((char)local_340 != '\0') && (local_340._1_1_ != '\0')) {
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
              ConditionalRehash(local_348,local_348[2] - local_348[0xd],1);
              auVar6 = _local_440;
            }
          }
        }
        _local_440 = auVar6;
        local_428[0x16] = param_3[0x15];
        local_5ac = param_3[0x15];
        puVar34 = *(uint **)plVar25[1];
        if ((uint *)((undefined8 *)plVar25[1])[1] < puVar34 + 1) {
          (**(code **)(*plVar25 + 0x50))(plVar25,&local_5ac,4);
          if ((*(byte *)((longlong)plVar25 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar25,&local_5ac,4);
          }
        }
        else {
          local_5ac = *puVar34;
          *(longlong *)plVar25[1] = *(longlong *)plVar25[1] + 4;
        }
        puVar34 = *(uint **)plVar25[1];
        if ((uint *)((undefined8 *)plVar25[1])[1] < puVar34 + 1) {
          (**(code **)(*plVar25 + 0x50))(plVar25,&local_5a8,4);
          if ((*(byte *)((longlong)plVar25 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar25,&local_5a8,4);
          }
        }
        else {
          local_5a8 = *puVar34;
          *(longlong *)plVar25[1] = *(longlong *)plVar25[1] + 4;
        }
        local_5c8 = (int)local_100;
        plVar14 = (longlong *)plVar25[1];
        if ((ulonglong)plVar14[1] < *plVar14 + 4U) {
          (**(code **)(*plVar25 + 0x50))(plVar25,&local_5c8,4);
          if ((*(byte *)((longlong)plVar25 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar25,&local_5c8,4);
          }
        }
        else {
          *plVar14 = *plVar14 + 4;
        }
        local_5c8 = (int)local_50;
        puVar1 = *(undefined4 **)plVar25[1];
        puVar34 = puVar32;
        if ((undefined4 *)((undefined8 *)plVar25[1])[1] < puVar1 + 1) {
          (**(code **)(*plVar25 + 0x50))(plVar25,&local_5c8,4);
          if ((*(byte *)((longlong)plVar25 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar25,&local_5c8,4);
          }
        }
        else {
          local_5c8 = *puVar1;
          *(longlong *)plVar25[1] = *(longlong *)plVar25[1] + 4;
        }
        while ((puVar22 = local_5e0, iVar9 = (int)puVar34, -1 < iVar9 && (iVar9 < (int)local_100)))
        {
          puVar19 = local_128;
          if (local_108 != (undefined1 *)0x0) {
            puVar19 = local_108;
          }
          local_5a4 = *(uint *)(puVar19 + (longlong)iVar9 * 4);
          plVar14 = (longlong *)plVar25[1];
          if ((uint *)plVar14[1] < (uint *)*plVar14 + 1) {
            (**(code **)(*plVar25 + 0x50))(plVar25,&local_5a4,4);
            if ((*(byte *)((longlong)plVar25 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(plVar25,&local_5a4,4);
            }
            puVar34 = (uint *)(ulonglong)(iVar9 + 1);
          }
          else {
            local_5a4 = *(uint *)*plVar14;
            *plVar14 = *plVar14 + 4;
            puVar34 = (uint *)(ulonglong)(iVar9 + 1);
          }
        }
        while ((iVar9 = (int)puVar32, -1 < iVar9 && (iVar9 < (int)local_50))) {
          piVar28 = local_98;
          if (local_58 != (int *)0x0) {
            piVar28 = local_58;
          }
          iVar10 = piVar28[(longlong)iVar9 * 2];
          local_5a0 = piVar28[(longlong)iVar9 * 2 + 1];
          plVar14 = (longlong *)plVar25[1];
          lVar24 = *(longlong *)puVar22;
          if ((int *)plVar14[1] < (int *)*plVar14 + 1) {
            (**(code **)(*plVar25 + 0x50))(plVar25,&local_5a0,4);
            if ((*(byte *)((longlong)plVar25 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(plVar25,&local_5a0,4);
            }
          }
          else {
            local_5a0 = *(int *)*plVar14;
            *plVar14 = *plVar14 + 4;
          }
          local_5f0 = local_5e8;
          local_5e8[0] = '\0';
          local_5f8 = (uint *)((longlong)iVar10 * 0x40 + lVar24);
          (*(code *)**(undefined8 **)local_5d0[7])
                    ((undefined8 *)local_5d0[7],local_550,plVar25,local_5d0[4]);
          puVar32 = (uint *)(ulonglong)(iVar9 + 1);
        }
        if (local_108 != (undefined1 *)0x0) {
          FMemory::Free();
        }
        piVar28 = local_58;
      }
      if (piVar28 != (int *)0x0) {
        FMemory::Free(piVar28);
      }
    }
    else {
      local_590 = param_3 + 0x16;
      uStack_49c = 1;
      uVar11 = param_3[0x20];
      puStack_580 = param_3 + 0x1a;
      local_4a0 = 0;
      uStack_48c = 0;
      uStack_488 = 0;
      if (uVar11 != 0) {
        puVar34 = *(uint **)(param_3 + 0x1e);
        if (*(uint **)(param_3 + 0x1e) == (uint *)0x0) {
          puVar34 = puStack_580;
        }
        uVar21 = *puVar34;
        puVar22 = puVar32;
        puVar15 = puVar32;
        while (uVar21 == 0) {
          iVar9 = (int)puVar22;
          uStack_488 = (int)puVar15 + 0x20;
          puVar15 = (uint *)(ulonglong)uStack_488;
          local_4a0 = iVar9 + 1;
          puVar22 = (uint *)(ulonglong)local_4a0;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
          goto LAB_1413bdeb8;
          uVar21 = puVar34[(longlong)iVar9 + 1];
        }
        uStack_49c = -uVar21 & uVar21;
        iVar9 = 0x1f;
        if (uStack_49c != 0) {
          for (; uStack_49c >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uStack_49c == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        uStack_48c = (uStack_488 - iVar9) + 0x1f;
        if ((int)uVar11 < (int)uStack_48c) {
LAB_1413bdeb8:
          uStack_48c = uVar11;
        }
      }
      local_490 = 0xffffffff;
      uStack_400 = CONCAT44(uStack_48c,0xffffffff);
      auStack_578._8_4_ = uStack_488;
      auStack_578._0_8_ = uStack_400;
      auStack_578._12_4_ = uStack_484;
      uStack_588 = CONCAT44(uStack_49c,local_4a0);
      local_3e0 = '\0';
      cStack_3df = '\0';
      local_440._8_4_ = SUB84(local_590,0);
      uStack_434 = (undefined4)((ulonglong)local_590 >> 0x20);
      local_440._0_8_ = auStack_578._8_8_;
      local_3f8._8_4_ = local_440._8_4_;
      local_3f8._0_8_ = auStack_578._8_8_;
      local_3f8._12_4_ = uStack_434;
      puStack_498 = puStack_580;
      local_418 = local_590;
      uStack_410 = uStack_588;
      local_408 = puStack_580;
      local_3e8 = local_590;
      uVar11 = uStack_48c;
      if ((int)uStack_48c < (int)param_3[0x20]) {
        do {
          plVar25 = local_5d0;
          uVar21 = *(uint *)((longlong)(int)uVar11 * 200 + *(longlong *)local_418);
          puVar34 = (uint *)(*(longlong *)local_418 + 8 + (longlong)(int)uVar11 * 200);
          if ((puVar34[2] == puVar34[0xd]) && (puVar34[0x16] == puVar34[0x21])) {
LAB_1413be310:
            TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
            ::Remove(local_3f8._8_8_,uVar11);
            local_3e0 = '\x01';
          }
          else {
            if (param_3[2] != param_3[0xd]) {
              puVar22 = *(uint **)(param_3 + 0x10);
              if (*(uint **)(param_3 + 0x10) == (uint *)0x0) {
                puVar22 = param_3 + 0xe;
              }
              uVar29 = puVar22[(longlong)(int)param_3[0x12] - 1U & (longlong)(int)uVar21];
              if (uVar29 != 0xffffffff) {
                do {
                  puVar22 = (uint *)(*(longlong *)param_3 + (longlong)(int)uVar29 * 0x10);
                  if (*puVar22 == uVar21) {
                    if (uVar29 != 0xffffffff) goto LAB_1413bdfd1;
                    break;
                  }
                  uVar29 = puVar22[2];
                } while (uVar29 != 0xffffffff);
              }
            }
            puVar22 = puVar32;
LAB_1413bdfd1:
            puVar15 = puVar22 + 1;
            if (puVar22 == (uint *)0x0) {
              puVar15 = puVar32;
            }
            if (puVar15 == (uint *)0x0) goto LAB_1413be310;
            uVar11 = puVar34[10];
            puStack_580 = puVar34 + 4;
            cVar7 = '\0';
            uStack_47c = 1;
            local_5e8[0] = '\0';
            local_480 = 0;
            uStack_46c = 0;
            if (uVar11 != 0) {
              puVar22 = *(uint **)(puVar34 + 8);
              if (*(uint **)(puVar34 + 8) == (uint *)0x0) {
                puVar22 = puStack_580;
              }
              uVar29 = *puVar22;
              puVar15 = puVar32;
              puVar23 = puVar32;
              uVar27 = 0;
              while (uVar29 == 0) {
                iVar9 = (int)puVar15;
                uVar27 = (int)puVar23 + 0x20;
                puVar23 = (uint *)(ulonglong)uVar27;
                local_480 = iVar9 + 1;
                puVar15 = (uint *)(ulonglong)local_480;
                uStack_46c = (ulonglong)uVar27 << 0x20;
                if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
                goto LAB_1413be0be;
                uVar29 = puVar22[(longlong)iVar9 + 1];
              }
              uStack_47c = -uVar29 & uVar29;
              iVar9 = 0x1f;
              if (uStack_47c != 0) {
                for (; uStack_47c >> iVar9 == 0; iVar9 = iVar9 + -1) {
                }
              }
              if (uStack_47c == 0) {
                iVar9 = 0x20;
              }
              else {
                iVar9 = 0x1f - iVar9;
              }
              iVar9 = (uVar27 - iVar9) + 0x1f;
              uStack_46c._4_4_ = (undefined4)((ulonglong)uStack_46c >> 0x20);
              uStack_46c = CONCAT44(uStack_46c._4_4_,iVar9);
              if ((int)uVar11 < iVar9) {
LAB_1413be0be:
                uStack_46c = CONCAT44(uStack_46c._4_4_,uVar11);
              }
            }
            local_470 = 0xffffffff;
            uStack_588 = CONCAT44(uStack_47c,local_480);
            auStack_578._4_4_ = (int)uStack_46c;
            auStack_578._0_4_ = 0xffffffff;
            auStack_578._8_4_ = uStack_46c._4_4_;
            auStack_578._12_4_ = uStack_464;
            local_440._4_4_ = uStack_464;
            local_440._0_4_ = uStack_46c._4_4_;
            stack0xfffffffffffffbc8 = puVar34;
            uStack_448 = auStack_578._0_8_;
            puVar22 = puVar34;
            iVar9 = (int)uStack_46c;
            local_590 = puVar34;
            puStack_478 = puStack_580;
            local_460 = puVar34;
            uStack_458 = uStack_588;
            local_450 = puStack_580;
            if ((int)uStack_46c < (int)uVar11) {
              while( true ) {
                plVar14 = (longlong *)plVar25[4];
                puVar15 = (uint *)(*(longlong *)local_460 + (longlong)iVar9 * 0xc);
                cVar7 = (**(code **)(*plVar14 + 0x2e8))(plVar14,puVar15,0);
                if (cVar7 == '\0') {
                  plVar14 = (longlong *)plVar25[4];
                  lVar24 = (**(code **)(*plVar14 + 0x2d8))(plVar14,puVar15,0);
                  if (lVar24 != 0) {
                    if ((*puVar15 != 0) && ((*puVar15 & 1) == 0)) {
                      FUN_140ac3dd0(puVar34 + 0x14,&local_568,puVar15,0);
                    }
                    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                              (puVar22,iVar9);
                    local_5e8[0] = '\x01';
                  }
                }
                else {
                  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                            (puVar22,iVar9);
                }
                cVar7 = local_5e8[0];
                uStack_448 = CONCAT44(uStack_448._4_4_,(uint)uStack_448 & ~uStack_458._4_4_);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_458);
                param_3 = local_598;
                if ((int)local_450[6] <= uStack_448._4_4_) break;
                puVar22 = stack0xfffffffffffffbc8;
                iVar9 = uStack_448._4_4_;
              }
            }
            param_2 = local_5d0;
            if (cVar7 != '\0') {
              *(undefined1 *)((longlong)local_5d0 + 0x41) = 1;
              if (*(char *)((longlong)local_5d0 + 0x42) == '\0') {
                (**(code **)(*(longlong *)local_5d0[9] + 0x1d8))();
                *(undefined1 *)((longlong)param_2 + 0x42) = 1;
              }
              if (param_3[2] != param_3[0xd]) {
                puVar22 = *(uint **)(param_3 + 0x10);
                if (*(uint **)(param_3 + 0x10) == (uint *)0x0) {
                  puVar22 = param_3 + 0xe;
                }
                uVar11 = puVar22[(longlong)(int)param_3[0x12] - 1U & (longlong)(int)uVar21];
                if (uVar11 != 0xffffffff) {
                  do {
                    puVar22 = (uint *)((longlong)(int)uVar11 * 0x10 + *(longlong *)param_3);
                    if (*puVar22 == uVar21) {
                      if (uVar11 != 0xffffffff) goto LAB_1413be271;
                      break;
                    }
                    uVar11 = puVar22[2];
                  } while (uVar11 != 0xffffffff);
                }
              }
              puVar22 = puVar32;
LAB_1413be271:
              puVar22 = (uint *)((longlong)(int)puVar22[1] * 0x40 + *(longlong *)local_5e0);
              FNetBitReader::FNetBitReader
                        (local_218,param_2[4],*(longlong *)(puVar34 + 0x28),
                         (longlong)(int)puVar34[0x2c]);
              local_5f0 = &local_5d4;
              local_5d4 = '\0';
              local_5f8 = puVar22;
              (*(code *)**(undefined8 **)param_2[7])
                        ((undefined8 *)param_2[7],local_550,local_218,param_2[4]);
              FUN_140e8c3a0(puVar22,param_3);
              if (local_188 != 0) {
                FMemory::Free();
              }
              FArchive::~FArchive(local_218);
            }
            if ((puVar34[2] == puVar34[0xd]) && (puVar34[0x16] == puVar34[0x21])) {
              uVar11 = uStack_400._4_4_;
              goto LAB_1413be310;
            }
          }
          uStack_400 = CONCAT44(uStack_400._4_4_,(uint)uStack_400 & ~uStack_410._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_410);
          uVar11 = uStack_400._4_4_;
        } while ((int)uStack_400._4_4_ < (int)local_408[6]);
        if ((local_3e0 != '\0') && (cStack_3df != '\0')) {
          TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_3e8,local_3e8[2] - local_3e8[0xd],1);
        }
      }
      if (0 < (int)(param_3[0x18] - param_3[0x23])) {
        *(undefined1 *)((longlong)param_2 + 0x43) = 1;
      }
    }
  }
  else {
    puVar22 = param_3 + 0x16;
    uStack_4dc = 1;
    uVar11 = param_3[0x20];
    puVar34 = param_3 + 0x1a;
    local_4e0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    if (uVar11 != 0) {
      puVar15 = *(uint **)(param_3 + 0x1e);
      if (*(uint **)(param_3 + 0x1e) == (uint *)0x0) {
        puVar15 = puVar34;
      }
      uVar21 = *puVar15;
      puVar23 = puVar32;
      while (uVar21 == 0) {
        iVar9 = (int)puVar32;
        uStack_4c8 = (int)puVar23 + 0x20;
        puVar23 = (uint *)(ulonglong)uStack_4c8;
        local_4e0 = iVar9 + 1;
        puVar32 = (uint *)(ulonglong)local_4e0;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1413bd95d;
        uVar21 = puVar15[(longlong)iVar9 + 1];
      }
      uStack_4dc = -uVar21 & uVar21;
      iVar9 = 0x1f;
      if (uStack_4dc != 0) {
        for (; uStack_4dc >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_4dc == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_4cc = (uStack_4c8 - iVar9) + 0x1f;
      if ((int)uVar11 < (int)uStack_4cc) {
LAB_1413bd95d:
        uStack_4cc = uVar11;
      }
    }
    local_4d0 = 0xffffffff;
    uStack_28c = param_3[0x20];
    uStack_588 = CONCAT44(uStack_4dc,local_4e0);
    uStack_2f0 = CONCAT44(uStack_4cc,0xffffffff);
    local_2e8 = CONCAT44(uStack_4c4,uStack_4c8);
    local_290 = -1 << ((byte)uStack_28c & 0x1f);
    uVar29 = uStack_28c & 0xffffffe0;
    auStack_578._8_8_ = local_2e8;
    auStack_578._0_8_ = uStack_2f0;
    uStack_300 = local_4e0;
    uStack_2fc = uStack_4dc;
    local_590 = puVar22;
    puStack_580 = puVar34;
    puStack_4d8 = puVar34;
    local_2f8 = puVar34;
    local_308 = puVar22;
    uVar21 = uStack_28c;
    if (uStack_28c != uVar11) {
      puVar32 = *(uint **)(param_3 + 0x1e);
      if (*(uint **)(param_3 + 0x1e) == (uint *)0x0) {
        puVar32 = puVar34;
      }
      uVar21 = puVar32[(int)uStack_28c >> 5] & local_290;
      iVar9 = (int)uStack_28c >> 5;
      while (uVar21 == 0) {
        uVar29 = uVar29 + 0x20;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1413bda38;
        uVar21 = puVar32[(longlong)iVar9 + 1];
        local_290 = 0xffffffff;
        iVar9 = iVar9 + 1;
      }
      uVar21 = -uVar21 & uVar21;
      iVar9 = 0x1f;
      if (uVar21 != 0) {
        for (; uVar21 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar21 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_28c = (uVar29 - iVar9) + 0x1f;
      uVar21 = uStack_28c;
      if ((int)uVar11 < (int)uStack_28c) {
LAB_1413bda38:
        uStack_28c = uVar11;
        uVar21 = uVar11;
      }
    }
    while( true ) {
      if (((uStack_2f0._4_4_ == uVar21) && (local_2f8 == puVar34)) && (local_308 == puVar22)) break;
      lVar24 = (longlong)(int)uStack_2f0._4_4_ * 200 + *(longlong *)local_308;
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>(param_2[10],lVar24 + 8);
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>(param_2[10],lVar24 + 0x58);
      piVar28 = (int *)param_2[0xb];
      if (piVar28 != (int *)0x0) {
        *piVar28 = *piVar28 + *(int *)(lVar24 + 0xb0);
      }
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(uint)uStack_2f0 & ~uStack_2fc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_300);
    }
  }
  return 1;
joined_r0x0001413bdd40:
  if (iVar10 == -1) goto LAB_1413bddac;
  lVar17 = (longlong)iVar10;
  if (*(int *)(lVar18 + lVar17 * 0xc) == iVar9) {
    uVar31 = (longlong)*(int *)(lVar18 + 8 + lVar17 * 0xc) & uVar31;
    puVar1 = (undefined4 *)(lVar30 + uVar31 * 4);
    iVar12 = *(int *)(lVar30 + uVar31 * 4);
    goto joined_r0x0001413bdd76;
  }
  iVar10 = *(int *)(lVar18 + 4 + lVar17 * 0xc);
  goto joined_r0x0001413bdd40;
joined_r0x0001413bdd76:
  if (iVar12 == -1) goto LAB_1413bdd9d;
  if (iVar12 == iVar10) {
    *puVar1 = *(undefined4 *)(lVar18 + lVar17 * 0xc + 4);
    goto LAB_1413bdd9d;
  }
  lVar30 = (longlong)iVar12 * 3 + 1;
  iVar12 = *(int *)(lVar18 + lVar30 * 4);
  puVar1 = (undefined4 *)(lVar18 + lVar30 * 4);
  goto joined_r0x0001413bdd76;
LAB_1413bdd9d:
  TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(lVar24 + 0x58,iVar10,1);
LAB_1413bddac:
  FUN_140ac3dd0(lVar24 + 8,local_310,local_4e8,0);
  uVar13 = 1;
LAB_1413bddc6:
  uStack_4f8 = CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8 & ~uStack_508._4_4_);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_508);
  goto LAB_1413bdc80;
}



// FUNCTION 1413bf780 FUN_1413bf780 body=157 status=ok
// SIG undefined FUN_1413bf780(void)

void FUN_1413bf780(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140aeb790(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144999a58;
    puVar1[0x8b] = &PTR_LAB_14499a1c8;
    puVar1[0x8c] = &PTR_LAB_14499a228;
    puVar1[0x8d] = &PTR_LAB_14499a250;
    puVar1[0x8e] = &PTR_LAB_14499a268;
    puVar1[0x8f] = &PTR_LAB_14499a290;
    puVar1[0x90] = &PTR_LAB_14499a2a0;
    puVar1[0x92] = &PTR_LAB_14499a2e0;
    puVar1[0x93] = &PTR_LAB_14499a2f8;
  }
  return;
}



// FUNCTION 1413bf840 InternalConstructor<UDatasmithFBXSceneImportData> body=51 status=ok
// SIG undefined InternalConstructor<UDatasmithFBXSceneImportData>(void)

void InternalConstructor<UDatasmithFBXSceneImportData>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14499a740;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  return;
}



// FUNCTION 1413bf8c0 InternalConstructor<USoAchievementSettings> body=59 status=ok
// SIG undefined InternalConstructor<USoAchievementSettings>(void)

void InternalConstructor<USoAchievementSettings>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14499ad58;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
  }
  return;
}



// FUNCTION 1413bf920 FUN_1413bf920 body=41 status=ok
// SIG undefined FUN_1413bf920(void)

void FUN_1413bf920(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UHoudiniLandscapePtr::UHoudiniLandscapePtr(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14499b068;
  }
  return;
}



// FUNCTION 1413bf960 FUN_1413bf960 body=41 status=ok
// SIG undefined FUN_1413bf960(void)

void FUN_1413bf960(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413bfe60(puVar1,param_1);
    *puVar1 = &PTR_FUN_14499b890;
  }
  return;
}



// FUNCTION 1413bf990 FUN_1413bf990 body=52 status=ok
// SIG undefined FUN_1413bf990(void)

void FUN_1413bf990(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413bfe60(puVar1,param_1);
    puVar1[0x19e] = 0;
    *puVar1 = &PTR_FUN_14499bc08;
  }
  return;
}



// FUNCTION 1413bfa30 IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_> body=818 status=ok
// SIG undefined IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
               (longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 4;
    fVar14 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar14 = fVar14 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar14 = ::_guard_xfg_dispatch_icall_nop(fVar14);
    local_318 = (undefined4)(longlong)(fVar14 + fVar14);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar7 = &local_328;
    do {
      piVar5 = (int *)*plVar7;
      piVar12 = (int *)plVar7[1];
      local_338 = (int)plVar7[2];
      lVar9 = ((longlong)piVar12 - (longlong)piVar5 >> 2) + 1;
      piVar8 = piVar5;
      if (local_338 != 0) {
LAB_1413bfaf0:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          iVar13 = piVar8[lVar9 >> 1];
          piVar8[lVar9 >> 1] = *piVar8;
          piVar10 = piVar12 + 1;
          *piVar8 = iVar13;
          piVar5 = piVar8;
LAB_1413bfb20:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar12) goto code_r0x0001413bfb29;
          goto LAB_1413bfb30;
        }
        for (; piVar10 = piVar8, piVar5 = piVar8, piVar8 < piVar12; piVar12 = piVar12 + -1) {
          while (piVar11 = piVar10, piVar5 = piVar5 + 1, piVar5 <= piVar12) {
            piVar10 = piVar5;
            if (*piVar5 <= *piVar11) {
              piVar10 = piVar11;
            }
          }
          iVar13 = *piVar11;
          *piVar11 = *piVar12;
          *piVar12 = iVar13;
        }
        goto LAB_1413bfcda;
      }
LAB_1413bfbde:
      iVar13 = (int)lVar9;
      iVar2 = (iVar13 + -2) / 2;
      if (-1 < iVar2) {
        iVar3 = iVar2 * 2 + 1;
        iVar1 = iVar3;
        iVar6 = iVar2;
joined_r0x0001413bfbf8:
        do {
          if (iVar3 < iVar13) {
            iVar3 = iVar2 * 2;
            iVar4 = iVar3 + 1;
            if (iVar3 + 2 < iVar13) {
              if (piVar5[(longlong)iVar3 + 2] < piVar5[iVar4]) {
                iVar4 = iVar3;
              }
              iVar4 = iVar4 + 1;
            }
            iVar3 = piVar5[iVar2];
            if (iVar3 < piVar5[iVar4]) {
              piVar5[iVar2] = piVar5[iVar4];
              piVar5[iVar4] = iVar3;
              iVar3 = iVar4 * 2 + 1;
              iVar2 = iVar4;
              goto joined_r0x0001413bfbf8;
            }
          }
          iVar3 = iVar1 + -2;
          iVar2 = iVar6 + -1;
          iVar1 = iVar3;
          iVar6 = iVar2;
        } while (-1 < iVar2);
      }
      iVar13 = iVar13 + -1;
      lVar9 = (longlong)iVar13;
      if (0 < iVar13) {
        do {
          iVar2 = *piVar5;
          iVar3 = 0;
          *piVar5 = piVar5[lVar9];
          piVar5[lVar9] = iVar2;
          if (1 < iVar13) {
            do {
              iVar1 = iVar3 * 2;
              iVar2 = iVar1 + 1;
              if (iVar1 + 2 < iVar13) {
                if (piVar5[(longlong)iVar1 + 2] < piVar5[iVar2]) {
                  iVar2 = iVar1;
                }
                iVar2 = iVar2 + 1;
              }
              iVar1 = piVar5[iVar3];
              if (piVar5[iVar2] <= iVar1) break;
              piVar5[iVar3] = piVar5[iVar2];
              piVar5[iVar2] = iVar1;
              iVar3 = iVar2;
            } while (iVar2 * 2 + 1 < iVar13);
          }
          iVar13 = iVar13 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_1413bfcda:
      plVar7 = plVar7 + -3;
    } while (&local_328 <= plVar7);
  }
  return;
code_r0x0001413bfb29:
  if (*piVar5 <= *piVar8) goto LAB_1413bfb20;
LAB_1413bfb30:
  do {
    piVar11 = piVar10;
    iVar13 = piVar11[-1];
    piVar10 = piVar11 + -1;
    if (piVar10 <= piVar8) break;
  } while (*piVar8 <= iVar13);
  if (piVar5 <= piVar10) {
    iVar2 = *piVar5;
    *piVar5 = iVar13;
    *piVar10 = iVar2;
    goto LAB_1413bfb20;
  }
  iVar2 = *piVar8;
  local_338 = local_338 + -1;
  *piVar8 = iVar13;
  *piVar10 = iVar2;
  if ((longlong)((longlong)piVar10 + (-4 - (longlong)piVar8) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar12 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar12) {
      *plVar7 = (longlong)piVar5;
      plVar7[1] = (longlong)piVar12;
      *(int *)(plVar7 + 2) = local_338;
      plVar7 = plVar7 + 3;
    }
    if (piVar10 <= piVar8 + 1) goto LAB_1413bfcda;
    piVar12 = piVar11 + -2;
    piVar5 = piVar8;
  }
  else {
    if (piVar8 + 1 < piVar10) {
      *plVar7 = (longlong)piVar8;
      plVar7[1] = (longlong)(piVar11 + -2);
      *(int *)(plVar7 + 2) = local_338;
      plVar7 = plVar7 + 3;
    }
    if (piVar12 <= piVar5) goto LAB_1413bfcda;
  }
  lVar9 = ((longlong)piVar12 - (longlong)piVar5 >> 2) + 1;
  piVar8 = piVar5;
  if (local_338 == 0) goto LAB_1413bfbde;
  goto LAB_1413bfaf0;
}



// FUNCTION 1413bfd70 FUN_1413bfd70 body=64 status=ok
// SIG undefined FUN_1413bfd70(void)

void FUN_1413bfd70(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_LAB_14499c0d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = param_1;
    return;
  }
  return;
}



// FUNCTION 1413bfdb0 TSet<FActiveGameplayEffectHandle,DefaultKeyFuncs<FActiveGameplayEffectHandle,0>,FDefaultSetAllocator> body=163 status=ok
// SIG undefined TSet<FActiveGameplayEffectHandle,DefaultKeyFuncs<FActiveGameplayEffectHandle,0>,FDefaultSetAllocator>(void)

undefined8 *
TSet<FActiveGameplayEffectHandle,DefaultKeyFuncs<FActiveGameplayEffectHandle,0>,FDefaultSetAllocator>
::
TSet<FActiveGameplayEffectHandle,DefaultKeyFuncs<FActiveGameplayEffectHandle,0>,FDefaultSetAllocator>
          (undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  TSparseArray<TSetElement<TTuple<FGameplayTag,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 7,(void *)(param_2 + 0x38),4);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1413bfe60 FUN_1413bfe60 body=1059 status=ok
// SIG undefined FUN_1413bfe60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1413bfe60(undefined8 *param_1)

{
  FUN_142cb33a0();
  *(undefined2 *)((longlong)param_1 + 0x96a) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x96c) = 0x3f800000;
  *param_1 = &PTR_FUN_14497c608;
  *(undefined1 *)(param_1 + 0x12e) = 0;
  *(undefined4 *)(param_1 + 0x132) = 0x3f800000;
  param_1[0x133] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x134) = DAT_1468b5d98;
  *(undefined2 *)((longlong)param_1 + 0x9a4) = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  *(undefined2 *)(param_1 + 0x13a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9e4) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x13d) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x9ec) = 0x44480000;
  *(undefined4 *)(param_1 + 0x13e) = 0x44c80000;
  *(undefined4 *)((longlong)param_1 + 0x9f4) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x9fc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xa02) = 0;
  param_1[0x141] = 0;
  *(undefined4 *)(param_1 + 0x142) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xa24) = 0;
  *(undefined4 *)(param_1 + 0x146) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xa44) = 0x45160000;
  *(undefined4 *)(param_1 + 0x149) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0xa4c) = 0x437a0000;
  *(undefined4 *)(param_1 + 0x14a) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xa54) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x14b) = 0x41700000;
  *(undefined4 *)(param_1 + 0x14c) = 0x41a00000;
  FName::FName(param_1 + 0x14d,"VehicleSlot",1);
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  *(undefined1 *)(param_1 + 0x159) = 0;
  *(undefined1 *)(param_1 + 0x15a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xad4) = 0x41a3771f;
  *(undefined1 *)((longlong)param_1 + 0xae4) = 0;
  *param_1 = &PTR_FUN_14499b518;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  *(undefined4 *)(param_1 + 0x16e) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb84) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb9c) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x174) = 0xc1a00000;
  *(undefined4 *)((longlong)param_1 + 0xba4) = 0x44160000;
  *(undefined4 *)(param_1 + 0x175) = 0xc57a0000;
  *(undefined4 *)((longlong)param_1 + 0xbac) = 0x440c0000;
  *(undefined4 *)(param_1 + 0x176) = 0x44160000;
  *(undefined4 *)((longlong)param_1 + 0xbb4) = 0x44070000;
  *(undefined4 *)(param_1 + 0x177) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0xbbc) = 0x44160000;
  *(undefined4 *)(param_1 + 0x178) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0xbc4) = 0x41200000;
  param_1[0x179] = 0x435b0000;
  *(undefined4 *)(param_1 + 0x17a) = 0x44070000;
  *(undefined4 *)((longlong)param_1 + 0xbd4) = 0x43c80000;
  *(undefined4 *)(param_1 + 0x17b) = 0x44228000;
  *(undefined4 *)((longlong)param_1 + 0xbe4) = 0xc2340000;
  *(undefined4 *)(param_1 + 0x17d) = 0x42f00000;
  *(undefined4 *)((longlong)param_1 + 0xbec) = 0xc2480000;
  *(undefined4 *)(param_1 + 0x17e) = 0x42f00000;
  *(undefined4 *)((longlong)param_1 + 0xbf4) = 0xc2340000;
  *(undefined4 *)(param_1 + 0x17f) = 0x43070000;
  *(undefined4 *)((longlong)param_1 + 0xbfc) = 0xc2480000;
  *(undefined4 *)(param_1 + 0x180) = 0x430c0000;
  *(undefined4 *)((longlong)param_1 + 0xc04) = 0xc2340000;
  *(undefined4 *)(param_1 + 0x181) = 0x43070000;
  *(undefined4 *)((longlong)param_1 + 0xc0c) = 0xc2340000;
  *(undefined4 *)(param_1 + 0x182) = 0x43070000;
  *(undefined8 *)((longlong)param_1 + 0xc14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1c) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0xc24) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc34) = 0;
  *(undefined2 *)(param_1 + 0x187) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc3c) = 0;
  *(undefined2 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18b) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc5c) = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  *(undefined4 *)(param_1 + 0x18e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc74) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc7c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc84) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc8c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc94) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc9c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xca4) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xcac) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xcb4) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xcbc) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xcc4) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xccc) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xcd4) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xcdc) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xce4) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcec) = 0xffffffff;
  return param_1;
}



// FUNCTION 1413c0290 operator= body=369 status=ok
// SIG undefined operator=(void)

longlong *
TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    Empty(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar1 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    uStack_40 = 0;
    local_48._4_4_ = 0;
    if (iVar1 != 0) {
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      local_58 = 0;
      uStack_40 = 0;
      while (uVar2 == 0) {
        lVar4 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar5 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar5;
        if (bVar3) goto LAB_1413c036d;
        uVar2 = puVar6[lVar4 + 1];
      }
      uStack_54 = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
      if (iVar1 < local_48._4_4_) {
LAB_1413c036d:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar5 = local_48._4_4_;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar3 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar5;
    if (bVar3) {
      do {
        TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<unsigned_int,bool>_const_&>
                  (param_1,local_res8,(longlong)iStack_3c * 0x10 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1413c0410 operator= body=209 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FGameplayTag,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1 + 2 != param_2 + 2) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(param_1 + 2,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1413c04f0 operator() body=76 status=ok
// SIG undefined operator()(void)

int <lambda_0d4a0caff2d1d8f517f1a4a0ba43c808>::operator()(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  iVar3 = 0;
  piVar2 = (int *)**(undefined8 **)(param_1 + 8);
  piVar4 = piVar2 + (longlong)*(int *)(*(undefined8 **)(param_1 + 8) + 1) * 0x10;
  if (piVar2 != piVar4) {
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x45) == '\0') {
        bVar5 = true;
      }
      else {
        bVar5 = *piVar2 != -1;
      }
      iVar1 = iVar3 + 1;
      if (!bVar5) {
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      piVar2 = piVar2 + 0x10;
    } while (piVar2 != piVar4);
  }
  return iVar3;
}



// FUNCTION 1413c05a0 FUN_1413c05a0 body=43 status=ok
// SIG undefined FUN_1413c05a0(void)

undefined8 * FUN_1413c05a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1413c05d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UMovieScene2DTransformSection::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1409c4a20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x550);
  }
  return param_1;
}



// FUNCTION 1413c0610 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FConveyorBeltItemsBaseState::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR_FUN_1447540b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1413c0680 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FVulkanTimingQueryPool::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1413c06d0 FUN_1413c06d0 body=73 status=ok
// SIG undefined FUN_1413c06d0(void)

longlong FUN_1413c06d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb00) != 0) {
    FMemory::Free();
  }
  FUN_1413ae0d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd10);
  }
  return param_1;
}



// FUNCTION 1413c0720 FUN_1413c0720 body=73 status=ok
// SIG undefined FUN_1413c0720(void)

longlong FUN_1413c0720(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb00) != 0) {
    FMemory::Free();
  }
  FUN_1413ae0d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd00);
  }
  return param_1;
}



// FUNCTION 1413c0770 FUN_1413c0770 body=73 status=ok
// SIG undefined FUN_1413c0770(void)

longlong FUN_1413c0770(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb00) != 0) {
    FMemory::Free();
  }
  FUN_1413ae0d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xcf0);
  }
  return param_1;
}



// FUNCTION 1413c07e0 FUN_1413c07e0 body=135 status=ok
// SIG undefined FUN_1413c07e0(void)

void FUN_1413c07e0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xe8);
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined4 *)((longlong)param_2 + 0x88) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  return;
}



// FUNCTION 1413c0900 FUN_1413c0900 body=411 status=ok
// SIG undefined FUN_1413c0900(void)

undefined8 FUN_1413c0900(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (param_4 != 0) {
    puVar5 = (undefined4 *)(param_3 + 0x50);
    do {
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
                (param_2,puVar5 + -0x14);
      *(undefined4 *)(param_2 + 0x50) = *puVar5;
      *(undefined4 *)(param_2 + 0x54) = puVar5[1];
      TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
      ::operator=(param_2 + 0x58,puVar5 + 2);
      plVar1 = (longlong *)(param_2 + 0xb0);
      *(undefined4 *)(param_2 + 0xa8) = puVar5[0x16];
      *(undefined4 *)(param_2 + 0xac) = puVar5[0x17];
      if (plVar1 != (longlong *)(puVar5 + 0x18)) {
        iVar6 = puVar5[0x1a];
        lVar2 = *(longlong *)(puVar5 + 0x18);
        *(int *)(param_2 + 0xb8) = iVar6;
        if ((iVar6 == 0) && (*(int *)(param_2 + 0xbc) == 0)) {
          *(undefined4 *)(param_2 + 0xbc) = 0;
        }
        else {
          TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
          if (iVar6 != 0) {
            puVar3 = (undefined8 *)*plVar1;
            puVar4 = (undefined1 *)(lVar2 + 0x18);
            do {
              *puVar3 = 0xffffffffffffffff;
              *(undefined4 *)(puVar3 + 1) = 0xffffffff;
              puVar3[2] = *(undefined8 *)(puVar4 + -8);
              *(undefined1 *)(puVar3 + 3) = *puVar4;
              *(undefined1 *)((longlong)puVar3 + 0x19) = puVar4[1];
              puVar3[4] = *(undefined8 *)(puVar4 + 8);
              puVar3[5] = *(undefined8 *)(puVar4 + 0x10);
              puVar3[6] = *(undefined8 *)(puVar4 + 0x18);
              puVar3[7] = *(undefined8 *)(puVar4 + 0x20);
              iVar6 = iVar6 + -1;
              puVar3 = puVar3 + 8;
              puVar4 = puVar4 + 0x40;
            } while (iVar6 != 0);
          }
        }
      }
      *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(puVar5 + 0x1c);
      *(undefined8 *)(param_2 + 200) = *(undefined8 *)(puVar5 + 0x1e);
      *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(puVar5 + 0x20);
      *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(puVar5 + 0x22);
      puVar3 = (undefined8 *)(puVar5 + 0x24);
      puVar5 = puVar5 + 0x3a;
      *(undefined8 *)(param_2 + 0xe0) = *puVar3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xe8;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c0b20 FUN_1413c0b20 body=130 status=ok
// SIG undefined FUN_1413c0b20(void)

undefined8 FUN_1413c0b20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x6c0);
    do {
      FUN_14084cff0(puVar1 + -0xd8,param_3 + -0x6c0 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      puVar1[2] = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar1);
      puVar1[3] = *(undefined8 *)(param_3 + 0x18 + (longlong)puVar1);
      puVar1 = puVar1 + 0xdc;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413c0c00 Destruct body=39 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FLobbyPlayerStateInfoArray>::Destruct
               (undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    FMemory::Free();
  }
  FFastArraySerializer::~FFastArraySerializer(param_2);
  return;
}



// FUNCTION 1413c0c30 FUN_1413c0c30 body=55 status=ok
// SIG undefined FUN_1413c0c30(void)

void FUN_1413c0c30(void)

{
  undefined8 uVar1;
  
  if (DAT_14688a680 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688a680 = GetStaticEnum(FUN_1413c23a0,uVar1,L"EInteractiveObjectInteractiveState");
  }
  return;
}



// FUNCTION 1413c0c70 FUN_1413c0c70 body=55 status=ok
// SIG undefined FUN_1413c0c70(void)

void FUN_1413c0c70(void)

{
  undefined8 uVar1;
  
  if (DAT_14688a688 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688a688 = GetStaticEnum(FUN_1413c23d0,uVar1,L"EInteractiveObjectLockState");
  }
  return;
}



// FUNCTION 1413c0cb0 FUN_1413c0cb0 body=55 status=ok
// SIG undefined FUN_1413c0cb0(void)

void FUN_1413c0cb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14688a690 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688a690 = GetStaticEnum(FUN_1413c2400,uVar1,L"EInteractiveObjectState");
  }
  return;
}



// FUNCTION 1413c0cf0 FUN_1413c0cf0 body=55 status=ok
// SIG undefined FUN_1413c0cf0(void)

void FUN_1413c0cf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14688a678 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688a678 = GetStaticEnum(FUN_1413c2430,uVar1,L"EInteractiveObjectTrapActivationType");
  }
  return;
}



// FUNCTION 1413c0d30 FindId body=102 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<enum_EAssetRegistryDependencyType::Type,int>,TDefaultMapHashableKeyFuncs<enum_EAssetRegistryDependencyType::Type,int,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1413c0da0 FindId body=119 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 200 + *param_1) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)((longlong)iVar1 * 200 + 0xc0 + *param_1);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1413c0e20 FindId body=115 status=ok
// SIG undefined FindId(void)

int * TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      FindId(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0xc) == *param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(*param_1 + 4 + (longlong)iVar1 * 0xc);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1413c0ea0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieScene2DTransformSection::GetPrivateStaticClass(void)

{
  if (DAT_14688a938 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"InteractiveObject",&DAT_14688a938,FUN_1413c1ce0,0x550,
                  0x10000000,0,L"Engine",&LAB_1413bf820,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14688a938;
}



// FUNCTION 1413c0f50 FUN_1413c0f50 body=162 status=ok
// SIG undefined FUN_1413c0f50(void)

longlong FUN_1413c0f50(void)

{
  if (DAT_14688aa68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"InventorySlotData",&DAT_14688aa68,FUN_140447710,0x78,
                  0x10000000,0,L"Engine",&LAB_1413bf950,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14688aa68;
}



// FUNCTION 1413c1000 FUN_1413c1000 body=6 status=ok
// SIG undefined FUN_1413c1000(void)

undefined8 FUN_1413c1000(void)

{
  return 0x9d80431b;
}



// FUNCTION 1413c1010 FUN_1413c1010 body=6 status=ok
// SIG undefined FUN_1413c1010(void)

undefined8 FUN_1413c1010(void)

{
  return 0x218f0206;
}



// FUNCTION 1413c1020 FUN_1413c1020 body=6 status=ok
// SIG undefined FUN_1413c1020(void)

undefined8 FUN_1413c1020(void)

{
  return 0x14eeff9b;
}



// FUNCTION 1413c1030 FUN_1413c1030 body=6 status=ok
// SIG undefined FUN_1413c1030(void)

undefined8 FUN_1413c1030(void)

{
  return 0xdb2c4ca2;
}



// FUNCTION 1413c1040 FUN_1413c1040 body=6 status=ok
// SIG undefined FUN_1413c1040(void)

undefined8 FUN_1413c1040(void)

{
  return 0xa97f687e;
}



// FUNCTION 1413c1050 FUN_1413c1050 body=6 status=ok
// SIG undefined FUN_1413c1050(void)

undefined8 FUN_1413c1050(void)

{
  return 0xb7a2cc17;
}



// FUNCTION 1413c1060 FUN_1413c1060 body=6 status=ok
// SIG undefined FUN_1413c1060(void)

undefined8 FUN_1413c1060(void)

{
  return 0x6e97ba06;
}



// FUNCTION 1413c1070 FUN_1413c1070 body=6 status=ok
// SIG undefined FUN_1413c1070(void)

undefined8 FUN_1413c1070(void)

{
  return 0xcee92aa2;
}



// FUNCTION 1413c1080 FUN_1413c1080 body=6 status=ok
// SIG undefined FUN_1413c1080(void)

undefined8 FUN_1413c1080(void)

{
  return 0xe41a70c;
}



// FUNCTION 1413c1090 FUN_1413c1090 body=565 status=ok
// SIG undefined FUN_1413c1090(void)

undefined8 FUN_1413c1090(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  int *piVar11;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  piVar9 = (int *)0x0;
  plVar1 = (longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x30);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  puStack_28 = (uint *)(param_1 + 0x18);
  local_78 = 0;
  uStack_74 = 1;
  if (iVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar10 = puStack_28;
    }
    uVar3 = *puVar10;
    piVar11 = piVar9;
    piVar7 = piVar9;
    while (uVar3 == 0) {
      iVar5 = (int)piVar11;
      uStack_60 = (int)piVar7 + 0x20;
      piVar7 = (int *)(ulonglong)uStack_60;
      local_78 = iVar5 + 1;
      piVar11 = (int *)(ulonglong)local_78;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1413c115f;
      uVar3 = puVar10[(longlong)iVar5 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_68._4_4_ = (uStack_60 - iVar5) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_1413c115f:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x30);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      piVar11 = (int *)((longlong)iStack_5c * 0x10 + *plVar1);
      iVar2 = *piVar11;
      if (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x3c)) {
        lVar6 = *(longlong *)(param_2 + 0x48);
        if (*(longlong *)(param_2 + 0x48) == 0) {
          lVar6 = param_2 + 0x40;
        }
        iVar5 = *(int *)(lVar6 + ((longlong)*(int *)(param_2 + 0x50) - 1U & (longlong)iVar2) * 4);
        if (iVar5 != -1) {
          do {
            piVar7 = (int *)((longlong)iVar5 * 0x10 + *(longlong *)(param_2 + 8));
            if (*piVar7 == iVar2) {
              if (iVar5 != -1) goto LAB_1413c1231;
              break;
            }
            iVar5 = piVar7[2];
          } while (iVar5 != -1);
        }
      }
      piVar7 = piVar9;
LAB_1413c1231:
      piVar8 = piVar7 + 1;
      if (piVar7 == (int *)0x0) {
        piVar8 = piVar9;
      }
      if ((piVar8 == (int *)0x0) || (*piVar8 != piVar11[1])) {
        if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
        }
        return 0;
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
      ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return 1;
}



// FUNCTION 1413c13c0 FUN_1413c13c0 body=57 status=ok
// SIG undefined FUN_1413c13c0(void)

void FUN_1413c13c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688a7a0);
                    /* WARNING: Could not recover jumptable at 0x0001413c13f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413c1400 FUN_1413c1400 body=57 status=ok
// SIG undefined FUN_1413c1400(void)

void FUN_1413c1400(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688a7a8);
                    /* WARNING: Could not recover jumptable at 0x0001413c1436. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413c1440 FUN_1413c1440 body=57 status=ok
// SIG undefined FUN_1413c1440(void)

void FUN_1413c1440(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688a7b0);
                    /* WARNING: Could not recover jumptable at 0x0001413c1476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413c1480 FUN_1413c1480 body=57 status=ok
// SIG undefined FUN_1413c1480(void)

void FUN_1413c1480(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688a7b8);
                    /* WARNING: Could not recover jumptable at 0x0001413c14b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413c14c0 FUN_1413c14c0 body=57 status=ok
// SIG undefined FUN_1413c14c0(void)

void FUN_1413c14c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688a7c0);
                    /* WARNING: Could not recover jumptable at 0x0001413c14f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413c1500 FUN_1413c1500 body=57 status=ok
// SIG undefined FUN_1413c1500(void)

void FUN_1413c1500(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688a7c8);
                    /* WARNING: Could not recover jumptable at 0x0001413c1536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413c1540 FUN_1413c1540 body=57 status=ok
// SIG undefined FUN_1413c1540(void)

void FUN_1413c1540(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688a7d8);
                    /* WARNING: Could not recover jumptable at 0x0001413c1576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413c1580 FUN_1413c1580 body=57 status=ok
// SIG undefined FUN_1413c1580(void)

void FUN_1413c1580(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688a7e0);
                    /* WARNING: Could not recover jumptable at 0x0001413c15b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413c15c0 FUN_1413c15c0 body=57 status=ok
// SIG undefined FUN_1413c15c0(void)

void FUN_1413c15c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688a7d0);
                    /* WARNING: Could not recover jumptable at 0x0001413c15f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413c1600 FUN_1413c1600 body=57 status=ok
// SIG undefined FUN_1413c1600(void)

void FUN_1413c1600(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688a7e8);
                    /* WARNING: Could not recover jumptable at 0x0001413c1636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413c1640 FUN_1413c1640 body=57 status=ok
// SIG undefined FUN_1413c1640(void)

void FUN_1413c1640(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688a7f0);
                    /* WARNING: Could not recover jumptable at 0x0001413c1676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413c1680 Remove body=263 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar7 + ((longlong)param_2 & uVar8) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 200;
      if (*(int *)(lVar3 + lVar2) == param_2) {
        lVar6 = (longlong)iVar5 * 200;
        lVar3 = lVar6 + lVar2;
        uVar8 = (longlong)*(int *)(lVar3 + 0xc4) & uVar8;
        piVar4 = (int *)((longlong)plVar7 + uVar8 * 4);
        iVar1 = *(int *)((longlong)plVar7 + uVar8 * 4);
        goto joined_r0x0001413c171a;
      }
      iVar5 = *(int *)(lVar3 + 0xc0 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x0001413c171a:
  if (iVar1 == -1) {
LAB_1413c1750:
    FFastArraySerializerGuidReferences::~FFastArraySerializerGuidReferences(*param_1 + 8 + lVar6);
    TSparseArray<TSetElement<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + 0xc0);
    goto LAB_1413c1750;
  }
  piVar4 = (int *)((longlong)iVar1 * 200 + 0xc0 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001413c171a;
}



// FUNCTION 1413c1790 Remove body=173 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar6 = (longlong)param_2 * 200;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0xc4 + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar6 + 0xc0 + lVar2);
        break;
      }
      piVar5 = (int *)(lVar2 + 0xc0 + (longlong)iVar1 * 200);
      iVar1 = *piVar5;
    }
  }
  FFastArraySerializerGuidReferences::~FFastArraySerializerGuidReferences
            ((longlong)param_2 * 200 + 8 + *param_1);
  TSparseArray<TSetElement<TStaticMeshDrawList<FPositionOnlyDepthDrawingPolicy>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1413c1840 Remove body=143 status=ok
// SIG undefined Remove(void)

void TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
               (longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar4 = *param_1;
    lVar1 = lVar4 + (longlong)param_2 * 0xc;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar1 + 8));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
    iVar3 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar3 != -1) {
      if (iVar3 == param_2) {
        *puVar2 = *(undefined4 *)(lVar1 + 4);
        break;
      }
      lVar6 = (longlong)iVar3 * 3 + 1;
      puVar2 = (undefined4 *)(lVar4 + lVar6 * 4);
      iVar3 = *(int *)(lVar4 + lVar6 * 4);
    }
  }
  TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1413c18d0 RemoveAtSwapImpl body=147 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<FXActiveActionCue,FDefaultAllocator>::RemoveAtSwapImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = (int)param_1[1];
    iVar1 = (iVar2 - param_2) - param_3;
    if (param_3 <= iVar1) {
      iVar1 = param_3;
    }
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x40 + *param_1),
                 (void *)((longlong)(iVar2 - iVar1) * 0x40 + *param_1),(longlong)iVar1 << 6);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      TArray<FRegionQosInstance,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1413c1970 FUN_1413c1970 body=376 status=ok
// SIG undefined FUN_1413c1970(void)

void FUN_1413c1970(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    iVar10 = param_2 + -1;
    lVar11 = (longlong)iVar10;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar8 = lVar11 * 0xc;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)(*param_1 + (longlong)(int)param_1[6] * 0xc) = iVar10;
        }
        *(undefined4 *)(lVar8 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar8 + 4 + *param_1) = uVar5;
        lVar8 = lVar8 + -0xc;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar10;
        iVar10 = iVar10 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar10 = (int)param_1[5];
        iVar6 = iVar10 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
          uVar2 = (int)(iVar10 + 0x20 + (iVar10 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar10;
        if (iVar10 < 0) {
          iVar6 = iVar10 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 1413c1af0 ResetTrackedGuids body=56 status=ok
// SIG undefined ResetTrackedGuids(void)

void UPackageMap::ResetTrackedGuids(longlong param_1,undefined1 param_2)

{
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(param_1 + 0x30,0);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(param_1 + 0x80,0);
  *(undefined1 *)(param_1 + 0x29) = param_2;
  return;
}



// FUNCTION 1413c1b30 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x48);
  if (uVar1 < 9) {
    uVar2 = 8;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x4c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x4c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x40);
  if (uVar2 < 9) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x40);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0x40) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar5;
  return;
}



// FUNCTION 1413c1c20 ResizeShrink body=137 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FRegionQosInstance,FDefaultAllocator>::ResizeShrink(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if ((0x3fff < (ulonglong)((longlong)(iVar4 - iVar3) << 6)) || (iVar3 * 3 < iVar4 * 2)) {
    if (0x40 < (uint)(iVar4 - iVar3)) {
      if (0 < iVar3) {
        uVar1 = FMemory::QuantizeSize((longlong)iVar3 << 6,0);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = (int)(uVar1 >> 6);
      }
      goto LAB_1413c1c7d;
    }
    if (iVar3 == 0) goto LAB_1413c1c7d;
  }
  iVar3 = iVar4;
LAB_1413c1c7d:
  if (iVar3 != iVar4) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 << 6,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1413c1cc0 thunk_FUN_1430255d0 body=5 status=ok
// SIG undefined thunk_FUN_1430255d0(void)

void thunk_FUN_1430255d0(void)

{
  FUN_1430255d0();
  return;
}



// FUNCTION 1413c1ce0 FUN_1413c1ce0 body=34 status=ok
// SIG undefined FUN_1413c1ce0(void)

void FUN_1413c1ce0(void)

{
  undefined8 uVar1;
  
  uVar1 = UMovieScene2DTransformSection::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ChangeInteractiveState_14499a600,0x14);
  return;
}



// FUNCTION 1413c1d10 FUN_1413c1d10 body=34 status=ok
// SIG undefined FUN_1413c1d10(void)

void FUN_1413c1d10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413bc5d0();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_EnumerateGestaltMeshPartNames_14499b028,1);
  return;
}



// FUNCTION 1413c1d40 FUN_1413c1d40 body=34 status=ok
// SIG undefined FUN_1413c1d40(void)

void FUN_1413c1d40(void)

{
  undefined8 uVar1;
  
  uVar1 = AEquipmentSkin::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_HandleActorDestroyed_14499b038,3);
  return;
}



// FUNCTION 1413c1d70 FUN_1413c1d70 body=34 status=ok
// SIG undefined FUN_1413c1d70(void)

void FUN_1413c1d70(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413bc1f0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_IsAugmentSlotted_14499c098,1);
  return;
}



// FUNCTION 1413c1da0 FUN_1413c1da0 body=34 status=ok
// SIG undefined FUN_1413c1da0(void)

void FUN_1413c1da0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413bc450();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRailgunFinishFiring_14499c0a8,3);
  return;
}



// FUNCTION 1413c1dd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688a870 == 0) {
    uVar1 = FUN_1413c1000();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688a870 = GetStaticStruct(FUN_1413c2460,uVar2,L"InteractiveObjectTrapEntry",0x10,uVar1);
  }
  return;
}



// FUNCTION 1413c1e30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688a950 == 0) {
    uVar1 = FUN_1413c1010();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688a950 = GetStaticStruct(FUN_1413c2490,uVar2,L"InventoryAspectAbilityInfo",8,uVar1);
  }
  return;
}



// FUNCTION 1413c1e90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStarSystemBlackboard::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688aa40 == 0) {
    uVar1 = FUN_1413c1020();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688aa40 = GetStaticStruct(FUN_1413c24c0,uVar2,L"InventorySlotContainer",0xe8,uVar1);
  }
  return;
}



// FUNCTION 1413c1ef0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688aa50 == 0) {
    uVar1 = FUN_1413c1030();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688aa50 = GetStaticStruct(FUN_1413c24f0,uVar2,L"InventorySlotEntry",0x40,uVar1);
  }
  return;
}



// FUNCTION 1413c1f50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimInstanceProxy::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688aa70 == 0) {
    uVar1 = FUN_1413c1040();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688aa70 =
         GetStaticStruct(FUN_1413c2520,uVar2,L"IronBearAnimInstanceProxy_FirstPerson",0x6e0,uVar1);
  }
  return;
}



// FUNCTION 1413c1fb0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688a9a0 == 0) {
    uVar1 = FUN_1413c1050();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688a9a0 = GetStaticStruct(FUN_1413c2550,uVar2,L"ManufacturerWeaponSightData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1413c2010 FUN_1413c2010 body=82 status=ok
// SIG undefined FUN_1413c2010(void)

void FUN_1413c2010(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688a990 == 0) {
    uVar1 = FUN_1413c1060();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688a990 = GetStaticStruct(FUN_1413c2580,uVar2,L"OakWeaponNamedNamingAttribute",0x20,uVar1)
    ;
  }
  return;
}



// FUNCTION 1413c2070 FUN_1413c2070 body=82 status=ok
// SIG undefined FUN_1413c2070(void)

void FUN_1413c2070(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688a980 == 0) {
    uVar1 = FUN_1413c1070();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688a980 = GetStaticStruct(FUN_1413c25b0,uVar2,L"VendingMachineRefillAmmoData",0x20,uVar1);
  }
  return;
}



// FUNCTION 1413c20d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688a9b0 == 0) {
    uVar1 = FUN_1413c1080();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688a9b0 = GetStaticStruct(FUN_1413c25e0,uVar2,L"WeaponSightEffectTableData",0x18,uVar1);
  }
  return;
}



// FUNCTION 1413c2130 FUN_1413c2130 body=47 status=ok
// SIG undefined FUN_1413c2130(void)

longlong FUN_1413c2130(void)

{
  if (DAT_14688a840 == 0) {
    FUN_141786440(&DAT_14688a840,&PTR_GetPrivateStaticClass_144997780);
  }
  return DAT_14688a840;
}



// FUNCTION 1413c2160 FUN_1413c2160 body=47 status=ok
// SIG undefined FUN_1413c2160(void)

longlong FUN_1413c2160(void)

{
  if (DAT_14688a960 == 0) {
    FUN_141786440(&DAT_14688a960,&PTR_GetPrivateStaticClass_1449996f0);
  }
  return DAT_14688a960;
}



// FUNCTION 1413c2190 FUN_1413c2190 body=47 status=ok
// SIG undefined FUN_1413c2190(void)

longlong FUN_1413c2190(void)

{
  if (DAT_14688a970 == 0) {
    FUN_141786440(&DAT_14688a970,&PTR_FUN_144996c70);
  }
  return DAT_14688a970;
}



// FUNCTION 1413c21c0 FUN_1413c21c0 body=47 status=ok
// SIG undefined FUN_1413c21c0(void)

longlong FUN_1413c21c0(void)

{
  if (DAT_14688a9c0 == 0) {
    FUN_141786440(&DAT_14688a9c0,&PTR_FUN_144995e60);
  }
  return DAT_14688a9c0;
}



// FUNCTION 1413c21f0 FUN_1413c21f0 body=47 status=ok
// SIG undefined FUN_1413c21f0(void)

longlong FUN_1413c21f0(void)

{
  if (DAT_14688aa10 == 0) {
    FUN_141786440(&DAT_14688aa10,&PTR_FUN_1449973e0);
  }
  return DAT_14688aa10;
}



// FUNCTION 1413c2220 FUN_1413c2220 body=47 status=ok
// SIG undefined FUN_1413c2220(void)

longlong FUN_1413c2220(void)

{
  if (DAT_14688aa60 == 0) {
    FUN_141786440(&DAT_14688aa60,&PTR_LAB_144998840);
  }
  return DAT_14688aa60;
}



// FUNCTION 1413c2250 FUN_1413c2250 body=47 status=ok
// SIG undefined FUN_1413c2250(void)

longlong FUN_1413c2250(void)

{
  if (DAT_14688aa80 == 0) {
    FUN_141786440(&DAT_14688aa80,&PTR_FUN_144995bc0);
  }
  return DAT_14688aa80;
}



// FUNCTION 1413c2280 FUN_1413c2280 body=47 status=ok
// SIG undefined FUN_1413c2280(void)

longlong FUN_1413c2280(void)

{
  if (DAT_14688aad0 == 0) {
    FUN_141786440(&DAT_14688aad0,&PTR_FUN_144996ce0);
  }
  return DAT_14688aad0;
}



// FUNCTION 1413c22b0 FUN_1413c22b0 body=47 status=ok
// SIG undefined FUN_1413c22b0(void)

longlong FUN_1413c22b0(void)

{
  if (DAT_14688a940 == 0) {
    FUN_141786440(&DAT_14688a940,&PTR_FUN_1449994b0);
  }
  return DAT_14688a940;
}



// FUNCTION 1413c22e0 FUN_1413c22e0 body=47 status=ok
// SIG undefined FUN_1413c22e0(void)

longlong FUN_1413c22e0(void)

{
  if (DAT_14688aa38 == 0) {
    FUN_141786a30(&DAT_14688aa38,&PTR_Z_Construct_UPackage__Script_MechWarrior_146371db0);
  }
  return DAT_14688aa38;
}



// FUNCTION 1413c2310 FUN_1413c2310 body=47 status=ok
// SIG undefined FUN_1413c2310(void)

longlong FUN_1413c2310(void)

{
  if (DAT_14688aa30 == 0) {
    FUN_141786a30(&DAT_14688aa30,&PTR_Z_Construct_UPackage__Script_MechWarrior_146371cf0);
  }
  return DAT_14688aa30;
}



// FUNCTION 1413c2340 FUN_1413c2340 body=47 status=ok
// SIG undefined FUN_1413c2340(void)

longlong FUN_1413c2340(void)

{
  if (DAT_14688aa28 == 0) {
    FUN_141786a30(&DAT_14688aa28,&PTR_Z_Construct_UPackage__Script_MechWarrior_146371c30);
  }
  return DAT_14688aa28;
}



// FUNCTION 1413c2370 FUN_1413c2370 body=47 status=ok
// SIG undefined FUN_1413c2370(void)

longlong FUN_1413c2370(void)

{
  if (DAT_14688aa20 == 0) {
    FUN_141786a30(&DAT_14688aa20,&PTR_Z_Construct_UPackage__Script_MechWarrior_146371b70);
  }
  return DAT_14688aa20;
}



// FUNCTION 1413c23a0 FUN_1413c23a0 body=47 status=ok
// SIG undefined FUN_1413c23a0(void)

longlong FUN_1413c23a0(void)

{
  if (DAT_14688a858 == 0) {
    FUN_1417866a0(&DAT_14688a858,&PTR_Z_Construct_UPackage__Script_MechWarrior_146372af0);
  }
  return DAT_14688a858;
}



// FUNCTION 1413c23d0 FUN_1413c23d0 body=47 status=ok
// SIG undefined FUN_1413c23d0(void)

longlong FUN_1413c23d0(void)

{
  if (DAT_14688a860 == 0) {
    FUN_1417866a0(&DAT_14688a860,&PTR_Z_Construct_UPackage__Script_MechWarrior_146372b40);
  }
  return DAT_14688a860;
}



// FUNCTION 1413c2400 FUN_1413c2400 body=47 status=ok
// SIG undefined FUN_1413c2400(void)

longlong FUN_1413c2400(void)

{
  if (DAT_14688a868 == 0) {
    FUN_1417866a0(&DAT_14688a868,&PTR_Z_Construct_UPackage__Script_MechWarrior_146372b90);
  }
  return DAT_14688a868;
}



// FUNCTION 1413c2430 FUN_1413c2430 body=47 status=ok
// SIG undefined FUN_1413c2430(void)

longlong FUN_1413c2430(void)

{
  if (DAT_14688a850 == 0) {
    FUN_1417866a0(&DAT_14688a850,&PTR_Z_Construct_UPackage__Script_MechWarrior_146372aa0);
  }
  return DAT_14688a850;
}



// FUNCTION 1413c2460 FUN_1413c2460 body=47 status=ok
// SIG undefined FUN_1413c2460(void)

longlong FUN_1413c2460(void)

{
  if (DAT_14688a878 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688a878,&PTR_Z_Construct_UPackage__Script_MechWarrior_14636f0f0);
  }
  return DAT_14688a878;
}



// FUNCTION 1413c2490 FUN_1413c2490 body=47 status=ok
// SIG undefined FUN_1413c2490(void)

longlong FUN_1413c2490(void)

{
  if (DAT_14688a958 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688a958,&PTR_Z_Construct_UPackage__Script_MechWarrior_146370450);
  }
  return DAT_14688a958;
}



// FUNCTION 1413c24c0 FUN_1413c24c0 body=47 status=ok
// SIG undefined FUN_1413c24c0(void)

longlong FUN_1413c24c0(void)

{
  if (DAT_14688aa48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688aa48,&PTR_Z_Construct_UPackage__Script_MechWarrior_146371e70);
  }
  return DAT_14688aa48;
}



// FUNCTION 1413c24f0 FUN_1413c24f0 body=47 status=ok
// SIG undefined FUN_1413c24f0(void)

longlong FUN_1413c24f0(void)

{
  if (DAT_14688aa58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688aa58,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463720a0);
  }
  return DAT_14688aa58;
}



// FUNCTION 1413c2520 FUN_1413c2520 body=47 status=ok
// SIG undefined FUN_1413c2520(void)

longlong FUN_1413c2520(void)

{
  if (DAT_14688aa78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688aa78,&PTR_Z_Construct_UPackage__Script_MechWarrior_146372320);
  }
  return DAT_14688aa78;
}



// FUNCTION 1413c2550 FUN_1413c2550 body=47 status=ok
// SIG undefined FUN_1413c2550(void)

longlong FUN_1413c2550(void)

{
  if (DAT_14688a9a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688a9a8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146370880);
  }
  return DAT_14688a9a8;
}



// FUNCTION 1413c2580 FUN_1413c2580 body=47 status=ok
// SIG undefined FUN_1413c2580(void)

longlong FUN_1413c2580(void)

{
  if (DAT_14688a998 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688a998,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463707b0);
  }
  return DAT_14688a998;
}



// FUNCTION 1413c25b0 FUN_1413c25b0 body=47 status=ok
// SIG undefined FUN_1413c25b0(void)

longlong FUN_1413c25b0(void)

{
  if (DAT_14688a988 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688a988,&PTR_Z_Construct_UPackage__Script_MechWarrior_146370660);
  }
  return DAT_14688a988;
}



// FUNCTION 1413c25e0 FUN_1413c25e0 body=47 status=ok
// SIG undefined FUN_1413c25e0(void)

longlong FUN_1413c25e0(void)

{
  if (DAT_14688a9b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688a9b8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146370910);
  }
  return DAT_14688a9b8;
}



// FUNCTION 1413c2610 FUN_1413c2610 body=122 status=ok
// SIG undefined FUN_1413c2610(void)

void FUN_1413c2610(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x740))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1413c2690 FUN_1413c2690 body=122 status=ok
// SIG undefined FUN_1413c2690(void)

void FUN_1413c2690(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x738))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1413c2710 FUN_1413c2710 body=122 status=ok
// SIG undefined FUN_1413c2710(void)

void FUN_1413c2710(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x730))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1413c2790 FUN_1413c2790 body=128 status=ok
// SIG undefined FUN_1413c2790(void)

void FUN_1413c2790(undefined8 param_1,longlong param_2)

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
  FUN_140b2f030(param_1,local_res10);
  return;
}



// FUNCTION 1413c2810 execMulticastChangeSkinAndColor body=188 status=ok
// SIG undefined execMulticastChangeSkinAndColor(void)

void ABattleHomePlayer::execMulticastChangeSkinAndColor(undefined8 param_1,longlong param_2)

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
  MulticastChangeSkinAndColor_Implementation(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1413c28d0 FUN_1413c28d0 body=143 status=ok
// SIG undefined FUN_1413c28d0(void)

void FUN_1413c28d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140e26f20(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413c2960 FUN_1413c2960 body=128 status=ok
// SIG undefined FUN_1413c2960(void)

void FUN_1413c2960(undefined8 param_1,longlong param_2)

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
  FUN_140b01990(param_1,local_res10);
  return;
}



// FUNCTION 1413c2ba0 FUN_1413c2ba0 body=130 status=ok
// SIG undefined FUN_1413c2ba0(void)

void FUN_1413c2ba0(undefined8 param_1,longlong param_2)

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
  FUN_140b09cf0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1413c2c50 execOnOwnerEndPlay body=192 status=ok
// SIG undefined execOnOwnerEndPlay(void)

void UAIPerceptionComponent::execOnOwnerEndPlay(undefined8 param_1,longlong param_2)

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
  FUN_140b0e2f0(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1413c2d10 FUN_1413c2d10 body=53 status=ok
// SIG undefined FUN_1413c2d10(void)

void FUN_1413c2d10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1449a1210;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c2d50 FUN_1413c2d50 body=162 status=ok
// SIG undefined FUN_1413c2d50(void)

longlong FUN_1413c2d50(void)

{
  if (DAT_14688ac58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"IronBearMinigunAnimInstance",&DAT_14688ac58,FUN_140447710,
                  0x480,0x10000008,0,L"Engine",&LAB_1413c3f30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,thunk_FUN_1428eccf0,
                  &LAB_14084f730,0);
  }
  return DAT_14688ac58;
}



// FUNCTION 1413c2e10 FUN_1413c2e10 body=162 status=ok
// SIG undefined FUN_1413c2e10(void)

longlong FUN_1413c2e10(void)

{
  if (DAT_14688ad20 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"LargeLiquidBody",&DAT_14688ad20,FUN_1413c4bd0,0x558,
                  0x10000000,0,L"Engine",&LAB_1413c3ed0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_14688ad20;
}



// FUNCTION 1413c2ed0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXSkinAnimationProfile::GetPrivateStaticClass(void)

{
  if (DAT_14688ad70 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"LevelAssetListData",&DAT_14688ad70,FUN_140447710,0x80,
                  0x10000000,0,L"Engine",&LAB_1413c4010,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1413c4b80,&LAB_140447700,0);
  }
  return DAT_14688ad70;
}



// FUNCTION 1413c2f80 FUN_1413c2f80 body=162 status=ok
// SIG undefined FUN_1413c2f80(void)

longlong FUN_1413c2f80(void)

{
  if (DAT_14688aea8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"LootSpawnPatternData",&DAT_14688aea8,FUN_140447710,0x108,
                  0x10000000,0,L"Engine",&LAB_1413c40e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1413c4b70,&LAB_140447700,0);
  }
  return DAT_14688aea8;
}



// FUNCTION 1413c3040 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGStreamInteractConnectionUW::GetPrivateStaticClass(void)

{
  if (DAT_14688ac80 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"IronBearWeaponUseComponent_Jackhammer",&DAT_14688ac80,
                  FUN_1413c4c60,0x248,0x10000000,0,L"Engine",&LAB_1413c3f60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUGStreamInteractSpawnedActorUW::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14688ac80;
}



// FUNCTION 1413c30f0 FUN_1413c30f0 body=162 status=ok
// SIG undefined FUN_1413c30f0(void)

longlong FUN_1413c30f0(void)

{
  if (DAT_14688aec8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"LostLootMachine",&DAT_14688aec8,FUN_1413c4c30,0x558,
                  0x10000000,0,L"Engine",&LAB_1413c3f10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1412d9cf0,&LAB_140447700,0);
  }
  return DAT_14688aec8;
}



// FUNCTION 1413c31a0 FUN_1413c31a0 body=47 status=ok
// SIG undefined FUN_1413c31a0(void)

longlong FUN_1413c31a0(void)

{
  if (DAT_14688ac78 == 0) {
    FUN_141786440(&DAT_14688ac78,&PTR_GetPrivateStaticClass_14499d470);
  }
  return DAT_14688ac78;
}



// FUNCTION 1413c31d0 FUN_1413c31d0 body=47 status=ok
// SIG undefined FUN_1413c31d0(void)

longlong FUN_1413c31d0(void)

{
  if (DAT_14688ac70 == 0) {
    FUN_141786a30(&DAT_14688ac70,&PTR_FUN_146372f20);
  }
  return DAT_14688ac70;
}



// FUNCTION 1413c3200 FUN_1413c3200 body=47 status=ok
// SIG undefined FUN_1413c3200(void)

longlong FUN_1413c3200(void)

{
  if (DAT_14688aec0 == 0) {
    FUN_141786440(&DAT_14688aec0,&PTR_FUN_14499d5e0);
  }
  return DAT_14688aec0;
}



// FUNCTION 1413c3230 FUN_1413c3230 body=47 status=ok
// SIG undefined FUN_1413c3230(void)

longlong FUN_1413c3230(void)

{
  if (DAT_14688aeb0 == 0) {
    FUN_141786a30(&DAT_14688aeb0,&PTR_FUN_1463767d0);
  }
  return DAT_14688aeb0;
}



// FUNCTION 1413c3260 FUN_1413c3260 body=47 status=ok
// SIG undefined FUN_1413c3260(void)

longlong FUN_1413c3260(void)

{
  if (DAT_14688aeb8 == 0) {
    FUN_141786a30(&DAT_14688aeb8,&PTR_FUN_146376850);
  }
  return DAT_14688aeb8;
}



// FUNCTION 1413c32b0 FUN_1413c32b0 body=53 status=ok
// SIG undefined FUN_1413c32b0(void)

void FUN_1413c32b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1449a06d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c32f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_14688ac68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"IronBearMinigunEffectCollectionData",&DAT_14688ac68,
                  FUN_140447710,0x48,0x10000000,0,L"Engine",&LAB_1413c3f50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14688ac68;
}



// FUNCTION 1413c33c0 FUN_1413c33c0 body=47 status=ok
// SIG undefined FUN_1413c33c0(void)

longlong FUN_1413c33c0(void)

{
  if (DAT_14688ad18 == 0) {
    FUN_141786440(&DAT_14688ad18,&PTR_FUN_14499e350);
  }
  return DAT_14688ad18;
}



// FUNCTION 1413c33f0 FUN_1413c33f0 body=47 status=ok
// SIG undefined FUN_1413c33f0(void)

longlong FUN_1413c33f0(void)

{
  if (DAT_14688acf0 == 0) {
    FUN_141786a30(&DAT_14688acf0,&PTR_FUN_146373990);
  }
  return DAT_14688acf0;
}



// FUNCTION 1413c3420 FUN_1413c3420 body=47 status=ok
// SIG undefined FUN_1413c3420(void)

longlong FUN_1413c3420(void)

{
  if (DAT_14688acf8 == 0) {
    FUN_141786a30(&DAT_14688acf8,&PTR_FUN_146373b50);
  }
  return DAT_14688acf8;
}



// FUNCTION 1413c3450 FUN_1413c3450 body=47 status=ok
// SIG undefined FUN_1413c3450(void)

longlong FUN_1413c3450(void)

{
  if (DAT_14688ad00 == 0) {
    FUN_141786a30(&DAT_14688ad00,&PTR_FUN_146373bd0);
  }
  return DAT_14688ad00;
}



// FUNCTION 1413c3480 FUN_1413c3480 body=47 status=ok
// SIG undefined FUN_1413c3480(void)

longlong FUN_1413c3480(void)

{
  if (DAT_14688ad08 == 0) {
    FUN_141786a30(&DAT_14688ad08,&PTR_FUN_146373c90);
  }
  return DAT_14688ad08;
}



// FUNCTION 1413c34b0 FUN_1413c34b0 body=47 status=ok
// SIG undefined FUN_1413c34b0(void)

longlong FUN_1413c34b0(void)

{
  if (DAT_14688ad10 == 0) {
    FUN_141786a30(&DAT_14688ad10,&PTR_FUN_146373dd0);
  }
  return DAT_14688ad10;
}



// FUNCTION 1413c34e0 FUN_1413c34e0 body=53 status=ok
// SIG undefined FUN_1413c34e0(void)

void FUN_1413c34e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1449a01e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c3520 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextureRenderTargetCube::GetPrivateStaticClass(void)

{
  if (DAT_14688ad80 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"LevelMultiplierAttributeValueResolver",&DAT_14688ad80,
                  FUN_140447710,0xd8,0x10000000,0,L"Engine",FUN_1413c4020,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14688ad80;
}



// FUNCTION 1413c35d0 FUN_1413c35d0 body=53 status=ok
// SIG undefined FUN_1413c35d0(void)

void FUN_1413c35d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1449a02f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c3620 FUN_1413c3620 body=53 status=ok
// SIG undefined FUN_1413c3620(void)

void FUN_1413c3620(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1449a0b00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c3670 FUN_1413c3670 body=53 status=ok
// SIG undefined FUN_1413c3670(void)

void FUN_1413c3670(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1449a0c18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c36c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagAssetInterface::GetPrivateStaticClass(void)

{
  if (DAT_14688ad40 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"LevelActorPersistenceInterface",&DAT_14688ad40,FUN_140447710,
                  0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_14688ad40;
}



// FUNCTION 1413c3780 FUN_1413c3780 body=162 status=ok
// SIG undefined FUN_1413c3780(void)

longlong FUN_1413c3780(void)

{
  if (DAT_14688acb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"JumpPad",&DAT_14688acb8,FUN_1413c4ba0,0x598,0x10000000,0,
                  L"Engine",&LAB_1413c3eb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1412d9cf0,&LAB_140447700,0);
  }
  return DAT_14688acb8;
}



// FUNCTION 1413c3830 FUN_1413c3830 body=162 status=ok
// SIG undefined FUN_1413c3830(void)

longlong FUN_1413c3830(void)

{
  if (DAT_14688acc8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"JumpPadRenderingComponent",&DAT_14688acc8,FUN_140447710,0x6f0
                  ,0x10000008,0,L"Engine",&LAB_1413c3f70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_14688acc8;
}



// FUNCTION 1413c38e0 FUN_1413c38e0 body=47 status=ok
// SIG undefined FUN_1413c38e0(void)

longlong FUN_1413c38e0(void)

{
  if (DAT_14688acb0 == 0) {
    FUN_141786440(&DAT_14688acb0,&PTR_FUN_14499ef70);
  }
  return DAT_14688acb0;
}



// FUNCTION 1413c3910 FUN_1413c3910 body=47 status=ok
// SIG undefined FUN_1413c3910(void)

longlong FUN_1413c3910(void)

{
  if (DAT_14688ac88 == 0) {
    FUN_141786a30(&DAT_14688ac88,&PTR_FUN_146373080);
  }
  return DAT_14688ac88;
}



// FUNCTION 1413c3940 FUN_1413c3940 body=47 status=ok
// SIG undefined FUN_1413c3940(void)

longlong FUN_1413c3940(void)

{
  if (DAT_14688ac90 == 0) {
    FUN_141786a30(&DAT_14688ac90,&PTR_FUN_146373100);
  }
  return DAT_14688ac90;
}



// FUNCTION 1413c3970 FUN_1413c3970 body=47 status=ok
// SIG undefined FUN_1413c3970(void)

longlong FUN_1413c3970(void)

{
  if (DAT_14688ac98 == 0) {
    FUN_141786a30(&DAT_14688ac98,&PTR_FUN_1463732c0);
  }
  return DAT_14688ac98;
}



// FUNCTION 1413c39a0 FUN_1413c39a0 body=47 status=ok
// SIG undefined FUN_1413c39a0(void)

longlong FUN_1413c39a0(void)

{
  if (DAT_14688aca0 == 0) {
    FUN_141786a30(&DAT_14688aca0,&PTR_FUN_146373340);
  }
  return DAT_14688aca0;
}



// FUNCTION 1413c39d0 FUN_1413c39d0 body=47 status=ok
// SIG undefined FUN_1413c39d0(void)

longlong FUN_1413c39d0(void)

{
  if (DAT_14688aca8 == 0) {
    FUN_141786a30(&DAT_14688aca8,&PTR_FUN_1463733d0);
  }
  return DAT_14688aca8;
}



// FUNCTION 1413c3a10 FUN_1413c3a10 body=162 status=ok
// SIG undefined FUN_1413c3a10(void)

longlong FUN_1413c3a10(void)

{
  if (DAT_14688ae98 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"LootableObject",&DAT_14688ae98,FUN_1413c4c00,0x7e8,0x10000000
                  ,0,L"Engine",&LAB_1413c3ef0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1412d9cf0,&LAB_140447700,0);
  }
  return DAT_14688ae98;
}



// FUNCTION 1413c3ad0 FUN_1413c3ad0 body=151 status=ok
// SIG undefined FUN_1413c3ad0(void)

longlong FUN_1413c3ad0(void)

{
  if (DAT_14688ad50 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"LevelActorPersistenceManager",&DAT_14688ad50,FUN_140447710,
                  0x90,0x10000008,0,L"Engine",FUN_1413c3fb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14688ad50;
}



// FUNCTION 1413c3b70 FUN_1413c3b70 body=162 status=ok
// SIG undefined FUN_1413c3b70(void)

longlong FUN_1413c3b70(void)

{
  if (DAT_14688ad30 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"LargeLiquidBodyConfigurationData",&DAT_14688ad30,
                  FUN_140447710,0x60,0x10000000,0,L"Engine",&LAB_1413c3f90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14688ad30;
}



// FUNCTION 1413c3c20 FUN_1413c3c20 body=47 status=ok
// SIG undefined FUN_1413c3c20(void)

longlong FUN_1413c3c20(void)

{
  if (DAT_14688ae90 == 0) {
    FUN_141786440(&DAT_14688ae90,&PTR_FUN_14499c9b0);
  }
  return DAT_14688ae90;
}



// FUNCTION 1413c3c50 FUN_1413c3c50 body=47 status=ok
// SIG undefined FUN_1413c3c50(void)

longlong FUN_1413c3c50(void)

{
  if (DAT_14688ae58 == 0) {
    FUN_141786a30(&DAT_14688ae58,&PTR_FUN_146375640);
  }
  return DAT_14688ae58;
}



// FUNCTION 1413c3c80 FUN_1413c3c80 body=47 status=ok
// SIG undefined FUN_1413c3c80(void)

longlong FUN_1413c3c80(void)

{
  if (DAT_14688ae60 == 0) {
    FUN_141786a30(&DAT_14688ae60,&PTR_FUN_146375680);
  }
  return DAT_14688ae60;
}



// FUNCTION 1413c3cb0 FUN_1413c3cb0 body=47 status=ok
// SIG undefined FUN_1413c3cb0(void)

longlong FUN_1413c3cb0(void)

{
  if (DAT_14688ae68 == 0) {
    FUN_141786a30(&DAT_14688ae68,&PTR_FUN_1463756c0);
  }
  return DAT_14688ae68;
}



// FUNCTION 1413c3ce0 FUN_1413c3ce0 body=47 status=ok
// SIG undefined FUN_1413c3ce0(void)

longlong FUN_1413c3ce0(void)

{
  if (DAT_14688ae70 == 0) {
    FUN_141786a30(&DAT_14688ae70,&PTR_FUN_146375700);
  }
  return DAT_14688ae70;
}



// FUNCTION 1413c3d10 FUN_1413c3d10 body=47 status=ok
// SIG undefined FUN_1413c3d10(void)

longlong FUN_1413c3d10(void)

{
  if (DAT_14688ae78 == 0) {
    FUN_141786a30(&DAT_14688ae78,&PTR_FUN_146375780);
  }
  return DAT_14688ae78;
}



// FUNCTION 1413c3d40 FUN_1413c3d40 body=47 status=ok
// SIG undefined FUN_1413c3d40(void)

longlong FUN_1413c3d40(void)

{
  if (DAT_14688ae80 == 0) {
    FUN_141786a30(&DAT_14688ae80,&PTR_FUN_1463757c0);
  }
  return DAT_14688ae80;
}



// FUNCTION 1413c3d70 FUN_1413c3d70 body=47 status=ok
// SIG undefined FUN_1413c3d70(void)

longlong FUN_1413c3d70(void)

{
  if (DAT_14688ae88 == 0) {
    FUN_141786a30(&DAT_14688ae88,&PTR_FUN_146375840);
  }
  return DAT_14688ae88;
}



// FUNCTION 1413c3da0 FUN_1413c3da0 body=53 status=ok
// SIG undefined FUN_1413c3da0(void)

void FUN_1413c3da0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_1449a0db0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1413c3de0 FUN_1413c3de0 body=53 status=ok
// SIG undefined FUN_1413c3de0(void)

void FUN_1413c3de0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1449a0ec8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c3e30 FUN_1413c3e30 body=53 status=ok
// SIG undefined FUN_1413c3e30(void)

void FUN_1413c3e30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_1449a0fe0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413c3e70 FUN_1413c3e70 body=53 status=ok
// SIG undefined FUN_1413c3e70(void)

void FUN_1413c3e70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1449a10f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}


