// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141480f00 FUN_141480f00 body=624 status=ok
// SIG undefined FUN_141480f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141480f00(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 *local_b0;
  longlong *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70 [3];
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_38 = _DAT_146898750 & _DAT_146898760;
  uStack_34 = uRam0000000146898754 & uRam0000000146898764;
  uStack_30 = uRam0000000146898758 & uRam0000000146898768;
  uStack_2c = uRam000000014689875c & uRam000000014689876c;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = uRam000000014689875c;
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
  local_70[0] = 0;
  local_70[1] = 0;
  puVar2 = &local_58;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  local_a8 = local_70;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_a8 = *(longlong **)(param_2 + 0x38);
  }
  local_b8 = local_98;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_b0 = puVar2;
  uVar1 = FUN_140ec1f60(local_78,local_80,local_88,local_90);
  *param_3 = uVar1;
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414811b0 FUN_1414811b0 body=118 status=ok
// SIG undefined FUN_1414811b0(void)

void FUN_1414811b0(undefined8 param_1,longlong param_2)

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
  FUN_140ec6ba0(param_1,local_res10[0]);
  return;
}



// FUNCTION 141481230 FUN_141481230 body=128 status=ok
// SIG undefined FUN_141481230(void)

void FUN_141481230(undefined8 param_1,longlong param_2)

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
  ARawbotsBuildModePawn::AddToBuildPartList(param_1,local_res10);
  return;
}



// FUNCTION 1414812b0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140ec6bd0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141481370 execSetAllNavigationRules body=192 status=ok
// SIG undefined execSetAllNavigationRules(void)

void UWidget::execSetAllNavigationRules(undefined8 param_1,longlong param_2)

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
  FUN_140ec6cb0(param_1,local_res10[0],local_res20);
  return;
}



// FUNCTION 141481430 FUN_141481430 body=128 status=ok
// SIG undefined FUN_141481430(void)

void FUN_141481430(undefined8 param_1,longlong param_2)

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
  FUN_140ec6d00(param_1,local_res10);
  return;
}



// FUNCTION 1414814b0 FUN_1414814b0 body=53 status=ok
// SIG undefined FUN_1414814b0(void)

void FUN_1414814b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144b249b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414814f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGKeyBindEntryUW::GetPrivateStaticClass(void)

{
  if (DAT_146899510 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakStreamingInteractionEvent_Lootable",&DAT_146899510,
                  StaticRegisterNativesUUGKeyBindEntryUW,0x298,0x10000000,0,L"Engine",&LAB_141482340
                  ,TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                   ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414815e0,&LAB_140447700,0);
  }
  return DAT_146899510;
}



// FUNCTION 1414815a0 FUN_1414815a0 body=53 status=ok
// SIG undefined FUN_1414815a0(void)

void FUN_1414815a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144b24ad0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414815e0 FUN_1414815e0 body=162 status=ok
// SIG undefined FUN_1414815e0(void)

longlong FUN_1414815e0(void)

{
  if (DAT_146899470 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakStreamingInteractionEvent",&DAT_146899470,FUN_141482c00,
                  400,0x10000001,0,L"Engine",&LAB_1414822e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146899470;
}



// FUNCTION 141481690 FUN_141481690 body=47 status=ok
// SIG undefined FUN_141481690(void)

longlong FUN_141481690(void)

{
  if (DAT_146899468 == 0) {
    FUN_141786440(&DAT_146899468,&PTR_FUN_144b1beb0);
  }
  return DAT_146899468;
}



// FUNCTION 1414816c0 FUN_1414816c0 body=47 status=ok
// SIG undefined FUN_1414816c0(void)

longlong FUN_1414816c0(void)

{
  if (DAT_146899460 == 0) {
    FUN_141786a30(&DAT_146899460,&PTR_FUN_14641cd80);
  }
  return DAT_146899460;
}



// FUNCTION 1414816f0 FUN_1414816f0 body=162 status=ok
// SIG undefined FUN_1414816f0(void)

longlong FUN_1414816f0(void)

{
  if (DAT_146899410 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakStatusEffectsStatics",&DAT_146899410,FUN_141482ba0,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141482b90,&LAB_140447700,0);
  }
  return DAT_146899410;
}



// FUNCTION 1414817a0 FUN_1414817a0 body=47 status=ok
// SIG undefined FUN_1414817a0(void)

longlong FUN_1414817a0(void)

{
  if (DAT_146899408 == 0) {
    FUN_141786440(&DAT_146899408,&PTR_FUN_144b1ca00);
  }
  return DAT_146899408;
}



// FUNCTION 1414817d0 FUN_1414817d0 body=47 status=ok
// SIG undefined FUN_1414817d0(void)

longlong FUN_1414817d0(void)

{
  if (DAT_1468993f0 == 0) {
    FUN_141786a30(&DAT_1468993f0,&PTR_FUN_14641c5f0);
  }
  return DAT_1468993f0;
}



// FUNCTION 141481800 FUN_141481800 body=47 status=ok
// SIG undefined FUN_141481800(void)

longlong FUN_141481800(void)

{
  if (DAT_1468993f8 == 0) {
    FUN_141786a30(&DAT_1468993f8,&PTR_FUN_14641c670);
  }
  return DAT_1468993f8;
}



// FUNCTION 141481830 FUN_141481830 body=47 status=ok
// SIG undefined FUN_141481830(void)

longlong FUN_141481830(void)

{
  if (DAT_146899400 == 0) {
    FUN_141786a30(&DAT_146899400,&PTR_FUN_14641c8a0);
  }
  return DAT_146899400;
}



// FUNCTION 141481870 FUN_141481870 body=162 status=ok
// SIG undefined FUN_141481870(void)

longlong FUN_141481870(void)

{
  if (DAT_1468994c8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakStreamingInteractionEvent_Extraction",&DAT_1468994c8,
                  FUN_141482c60,0x2a0,0x10000000,0,L"Engine",&LAB_141482320,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUGKeyBindEntryUW::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468994c8;
}



// FUNCTION 141481930 FUN_141481930 body=47 status=ok
// SIG undefined FUN_141481930(void)

longlong FUN_141481930(void)

{
  if (DAT_1468994c0 == 0) {
    FUN_141786440(&DAT_1468994c0,&PTR_FUN_144b1cb10);
  }
  return DAT_1468994c0;
}



// FUNCTION 141481960 FUN_141481960 body=47 status=ok
// SIG undefined FUN_141481960(void)

longlong FUN_141481960(void)

{
  if (DAT_146899508 == 0) {
    FUN_141786440(&DAT_146899508,&PTR_GetPrivateStaticClass_144b1d1f0);
  }
  return DAT_146899508;
}



// FUNCTION 141481990 FUN_141481990 body=47 status=ok
// SIG undefined FUN_141481990(void)

longlong FUN_141481990(void)

{
  if (DAT_1468994b0 == 0) {
    FUN_141786a30(&DAT_1468994b0,&PTR_FUN_14641e0f0);
  }
  return DAT_1468994b0;
}



// FUNCTION 1414819c0 FUN_1414819c0 body=47 status=ok
// SIG undefined FUN_1414819c0(void)

longlong FUN_1414819c0(void)

{
  if (DAT_1468994b8 == 0) {
    FUN_141786a30(&DAT_1468994b8,&PTR_FUN_14641e170);
  }
  return DAT_1468994b8;
}



// FUNCTION 1414819f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerStateRemnant::GetPrivateStaticClass(void)

{
  if (DAT_1468994a8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakStreamingInteractionEvent_EnemySpawn",&DAT_1468994a8,
                  FUN_141482c30,0x4c0,0x10000000,0,L"Engine",&LAB_141482300,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414815e0,&LAB_140447700,0);
  }
  return DAT_1468994a8;
}



// FUNCTION 141481ac0 FUN_141481ac0 body=47 status=ok
// SIG undefined FUN_141481ac0(void)

longlong FUN_141481ac0(void)

{
  if (DAT_1468994e8 == 0) {
    FUN_141786a30(&DAT_1468994e8,&PTR_FUN_14641e610);
  }
  return DAT_1468994e8;
}



// FUNCTION 141481af0 FUN_141481af0 body=47 status=ok
// SIG undefined FUN_141481af0(void)

longlong FUN_141481af0(void)

{
  if (DAT_1468994f0 == 0) {
    FUN_141786a30(&DAT_1468994f0,&PTR_FUN_14641e690);
  }
  return DAT_1468994f0;
}



// FUNCTION 141481b20 FUN_141481b20 body=47 status=ok
// SIG undefined FUN_141481b20(void)

longlong FUN_141481b20(void)

{
  if (DAT_1468994f8 == 0) {
    FUN_141786a30(&DAT_1468994f8,&PTR_FUN_14641e750);
  }
  return DAT_1468994f8;
}



// FUNCTION 141481b50 FUN_141481b50 body=47 status=ok
// SIG undefined FUN_141481b50(void)

longlong FUN_141481b50(void)

{
  if (DAT_146899500 == 0) {
    FUN_141786a30(&DAT_146899500,&PTR_FUN_14641e790);
  }
  return DAT_146899500;
}



// FUNCTION 141481b80 FUN_141481b80 body=53 status=ok
// SIG undefined FUN_141481b80(void)

void FUN_141481b80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144b24740;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141481bd0 FUN_141481bd0 body=162 status=ok
// SIG undefined FUN_141481bd0(void)

longlong FUN_141481bd0(void)

{
  if (DAT_1468993e8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakStatusEffectPresentationData",&DAT_1468993e8,FUN_140447710
                  ,0xe0,0x10000000,0,L"Engine",FUN_141482260,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468993e8;
}



// FUNCTION 141481c80 FUN_141481c80 body=53 status=ok
// SIG undefined FUN_141481c80(void)

void FUN_141481c80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144b241a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141481cc0 FUN_141481cc0 body=47 status=ok
// SIG undefined FUN_141481cc0(void)

longlong FUN_141481cc0(void)

{
  if (DAT_1468994a0 == 0) {
    FUN_141786440(&DAT_1468994a0,&PTR_GetPrivateStaticClass_144b1ded0);
  }
  return DAT_1468994a0;
}



// FUNCTION 141481cf0 FUN_141481cf0 body=47 status=ok
// SIG undefined FUN_141481cf0(void)

longlong FUN_141481cf0(void)

{
  if (DAT_146899478 == 0) {
    FUN_141786a30(&DAT_146899478,&PTR_FUN_14641d360);
  }
  return DAT_146899478;
}



// FUNCTION 141481d20 FUN_141481d20 body=47 status=ok
// SIG undefined FUN_141481d20(void)

longlong FUN_141481d20(void)

{
  if (DAT_146899480 == 0) {
    FUN_141786a30(&DAT_146899480,&PTR_FUN_14641d420);
  }
  return DAT_146899480;
}



// FUNCTION 141481d50 FUN_141481d50 body=47 status=ok
// SIG undefined FUN_141481d50(void)

longlong FUN_141481d50(void)

{
  if (DAT_146899488 == 0) {
    FUN_141786a30(&DAT_146899488,&PTR_FUN_14641d4e0);
  }
  return DAT_146899488;
}



// FUNCTION 141481d80 FUN_141481d80 body=47 status=ok
// SIG undefined FUN_141481d80(void)

longlong FUN_141481d80(void)

{
  if (DAT_146899490 == 0) {
    FUN_141786a30(&DAT_146899490,&PTR_FUN_14641d520);
  }
  return DAT_146899490;
}



// FUNCTION 141481db0 FUN_141481db0 body=47 status=ok
// SIG undefined FUN_141481db0(void)

longlong FUN_141481db0(void)

{
  if (DAT_146899498 == 0) {
    FUN_141786a30(&DAT_146899498,&PTR_FUN_14641d5a0);
  }
  return DAT_146899498;
}



// FUNCTION 141481de0 FUN_141481de0 body=53 status=ok
// SIG undefined FUN_141481de0(void)

void FUN_141481de0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144b242c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141481e20 FUN_141481e20 body=53 status=ok
// SIG undefined FUN_141481e20(void)

void FUN_141481e20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144b243d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141481e80 FUN_141481e80 body=162 status=ok
// SIG undefined FUN_141481e80(void)

longlong FUN_141481e80(void)

{
  if (DAT_146899430 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakStreamerItemPickup",&DAT_146899430,FUN_140447710,0x778,
                  0x10000000,0,L"Engine",&LAB_141482240,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1413bab40,&LAB_140447700,0);
  }
  return DAT_146899430;
}



// FUNCTION 141481f30 FUN_141481f30 body=53 status=ok
// SIG undefined FUN_141481f30(void)

void FUN_141481f30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144b24520;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141481f80 FUN_141481f80 body=151 status=ok
// SIG undefined FUN_141481f80(void)

longlong FUN_141481f80(void)

{
  if (DAT_146899448 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakStreamingInteractionDirector",&DAT_146899448,FUN_141482bd0
                  ,0x90,0x10000000,0,L"Engine",&LAB_1414822c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146899448;
}



// FUNCTION 141482020 FUN_141482020 body=162 status=ok
// SIG undefined FUN_141482020(void)

longlong FUN_141482020(void)

{
  if (DAT_146899568 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakStreamingInteractionEvent_MoxxisDrink",&DAT_146899568,
                  FUN_141482cc0,0x578,0x10000000,0,L"Engine",&LAB_141482360,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414815e0,&LAB_140447700,0);
  }
  return DAT_146899568;
}



// FUNCTION 1414820d0 FUN_1414820d0 body=47 status=ok
// SIG undefined FUN_1414820d0(void)

longlong FUN_1414820d0(void)

{
  if (DAT_146899440 == 0) {
    FUN_141786440(&DAT_146899440,&PTR_FUN_144b23950);
  }
  return DAT_146899440;
}



// FUNCTION 141482100 FUN_141482100 body=47 status=ok
// SIG undefined FUN_141482100(void)

longlong FUN_141482100(void)

{
  if (DAT_146899438 == 0) {
    FUN_141786a30(&DAT_146899438,&PTR_FUN_14641ca50);
  }
  return DAT_146899438;
}



// FUNCTION 141482140 FUN_141482140 body=47 status=ok
// SIG undefined FUN_141482140(void)

longlong FUN_141482140(void)

{
  if (DAT_146899560 == 0) {
    FUN_141786440(&DAT_146899560,&PTR_FUN_144b1a4f0);
  }
  return DAT_146899560;
}



// FUNCTION 141482170 FUN_141482170 body=47 status=ok
// SIG undefined FUN_141482170(void)

longlong FUN_141482170(void)

{
  if (DAT_146899548 == 0) {
    FUN_141786a30(&DAT_146899548,&PTR_FUN_14641f100);
  }
  return DAT_146899548;
}



// FUNCTION 1414821a0 FUN_1414821a0 body=47 status=ok
// SIG undefined FUN_1414821a0(void)

longlong FUN_1414821a0(void)

{
  if (DAT_146899550 == 0) {
    FUN_141786a30(&DAT_146899550,&PTR_FUN_14641f140);
  }
  return DAT_146899550;
}



// FUNCTION 1414821d0 FUN_1414821d0 body=47 status=ok
// SIG undefined FUN_1414821d0(void)

longlong FUN_1414821d0(void)

{
  if (DAT_146899558 == 0) {
    FUN_141786a30(&DAT_146899558,&PTR_FUN_14641f2a0);
  }
  return DAT_146899558;
}



// FUNCTION 141482200 FUN_141482200 body=53 status=ok
// SIG undefined FUN_141482200(void)

void FUN_141482200(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144b248a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141482260 FUN_141482260 body=94 status=ok
// SIG undefined FUN_141482260(void)

void FUN_141482260(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144b23f28;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x11) = 0x42c80000;
    puVar1[0x14] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
  }
  return;
}



// FUNCTION 141482380 FUN_141482380 body=142 status=ok
// SIG undefined FUN_141482380(void)

void FUN_141482380(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 141482410 FUN_141482410 body=87 status=ok
// SIG undefined FUN_141482410(void)

longlong FUN_141482410(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141482470 FUN_141482470 body=77 status=ok
// SIG undefined FUN_141482470(void)

void FUN_141482470(undefined8 param_1,undefined8 *param_2)

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
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  return;
}



// FUNCTION 1414824c0 FUN_1414824c0 body=79 status=ok
// SIG undefined FUN_1414824c0(void)

void FUN_1414824c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)param_2 = 0x3f800000;
  FText::FText(param_2 + 1);
  FText::FText(param_2 + 4);
  *(undefined4 *)(param_2 + 7) = 0x41f00000;
  return;
}



// FUNCTION 141482510 FUN_141482510 body=83 status=ok
// SIG undefined FUN_141482510(void)

void FUN_141482510(undefined8 param_1,undefined4 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  UCheatManagerGunfire::GetAllCheats(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  return;
}



// FUNCTION 1414825d0 Copy body=126 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAfrRaceModeData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x28;
    do {
      FText::operator=(param_2 + -0x28,param_3 + -0x28 + param_2);
      FString::operator=(param_2 + -0x10,param_3 + -0x10 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10 + param_2);
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141482650 FUN_141482650 body=102 status=ok
// SIG undefined FUN_141482650(void)

undefined8 FUN_141482650(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20 + param_2);
      FText::operator=(param_2 + -0x18,param_3 + -0x18 + param_2);
      FText::operator=(param_2,param_3 + param_2);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18 + param_2);
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414826c0 Copy body=96 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSBZReplayEventInfo>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x18);
    do {
      *(undefined1 *)(puVar1 + -6) = *(undefined1 *)(param_3 + -0x18 + (longlong)puVar1);
      FString::operator=(puVar1 + -4,param_3 + -0x10 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar1);
      puVar1 = puVar1 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141482720 FUN_141482720 body=336 status=ok
// SIG undefined FUN_141482720(void)

undefined8 FUN_141482720(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    piVar3 = (int *)(param_3 + 0x10);
    do {
      *param_2 = piVar3[-4];
      piVar1 = param_2 + 2;
      *(char *)(param_2 + 1) = (char)piVar3[-3];
      if (piVar1 != piVar3 + -2) {
        iVar4 = *piVar3;
        _Src = *(void **)(piVar3 + -2);
        param_2[4] = iVar4;
        if ((iVar4 == 0) && (param_2[5] == 0)) {
          param_2[5] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar4);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar4 << 3);
        }
      }
      FString::operator=(param_2 + 6,piVar3 + 2);
      plVar2 = (longlong *)(param_2 + 0xe);
      param_2[10] = piVar3[6];
      param_2[0xb] = piVar3[7];
      *(char *)(param_2 + 0xc) = (char)piVar3[8];
      if (plVar2 != (longlong *)(piVar3 + 10)) {
        iVar4 = param_2[0x10];
        if (iVar4 != 0) {
          lVar5 = *plVar2 + 8;
          do {
            FUN_140dddf90(lVar5);
            lVar5 = lVar5 + 0x18;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_140dd8580(plVar2,*(longlong *)(piVar3 + 10),piVar3[0xc],param_2[0x11],0);
      }
      FString::operator=(param_2 + 0x12,piVar3 + 0xe);
      piVar1 = piVar3 + 0x12;
      piVar3 = piVar3 + 0x18;
      *(undefined8 *)(param_2 + 0x16) = *(undefined8 *)piVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x18;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141482870 FUN_141482870 body=204 status=ok
// SIG undefined FUN_141482870(void)

undefined8 FUN_141482870(undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      *param_2 = *(undefined1 *)(puVar3 + -1);
      puVar1 = (undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 8) = *puVar3;
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar3 + 1);
      if (puVar1 != puVar3 + 2) {
        iVar2 = *(int *)(puVar3 + 3);
        _Src = (void *)puVar3[2];
        *(int *)(param_2 + 0x20) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x24) == 0)) {
          *(undefined4 *)(param_2 + 0x24) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      puVar3 = puVar3 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x28;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141482940 FUN_141482940 body=214 status=ok
// SIG undefined FUN_141482940(void)

undefined8 FUN_141482940(undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      *param_2 = *(undefined1 *)(puVar3 + -1);
      puVar1 = (undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_2 + 8) = *puVar3;
      *(undefined8 *)(param_2 + 0x10) = puVar3[1];
      *(undefined8 *)(param_2 + 0x18) = puVar3[2];
      if (puVar1 != puVar3 + 3) {
        iVar2 = *(int *)(puVar3 + 4);
        _Src = (void *)puVar3[3];
        *(int *)(param_2 + 0x28) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x2c) == 0)) {
          *(undefined4 *)(param_2 + 0x2c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      puVar3 = puVar3 + 6;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x30;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141482a50 FUN_141482a50 body=55 status=ok
// SIG undefined FUN_141482a50(void)

void FUN_141482a50(void)

{
  undefined8 uVar1;
  
  if (DAT_146898f68 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146898f68 = GetStaticEnum(FUN_141483140,uVar1,L"EEventTriggerType");
  }
  return;
}



// FUNCTION 141482a90 FUN_141482a90 body=55 status=ok
// SIG undefined FUN_141482a90(void)

void FUN_141482a90(void)

{
  undefined8 uVar1;
  
  if (DAT_146898f70 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146898f70 = GetStaticEnum(FUN_141483170,uVar1,L"EStreamingInteractionEventState");
  }
  return;
}



// FUNCTION 141482ad0 FUN_141482ad0 body=6 status=ok
// SIG undefined FUN_141482ad0(void)

undefined8 FUN_141482ad0(void)

{
  return 0xa938a875;
}



// FUNCTION 141482ae0 FUN_141482ae0 body=6 status=ok
// SIG undefined FUN_141482ae0(void)

undefined8 FUN_141482ae0(void)

{
  return 0xd21eeef9;
}



// FUNCTION 141482af0 FUN_141482af0 body=6 status=ok
// SIG undefined FUN_141482af0(void)

undefined8 FUN_141482af0(void)

{
  return 0xf7739ddf;
}



// FUNCTION 141482b00 FUN_141482b00 body=6 status=ok
// SIG undefined FUN_141482b00(void)

undefined8 FUN_141482b00(void)

{
  return 0x16cc07ed;
}



// FUNCTION 141482b10 FUN_141482b10 body=6 status=ok
// SIG undefined FUN_141482b10(void)

undefined8 FUN_141482b10(void)

{
  return 0xcf1d74bc;
}



// FUNCTION 141482b20 FUN_141482b20 body=6 status=ok
// SIG undefined FUN_141482b20(void)

undefined8 FUN_141482b20(void)

{
  return 0xfe308dd7;
}



// FUNCTION 141482b30 FUN_141482b30 body=6 status=ok
// SIG undefined FUN_141482b30(void)

undefined8 FUN_141482b30(void)

{
  return 0x4e9b84d3;
}



// FUNCTION 141482b40 FUN_141482b40 body=6 status=ok
// SIG undefined FUN_141482b40(void)

undefined8 FUN_141482b40(void)

{
  return 0x4cf48321;
}



// FUNCTION 141482b50 FUN_141482b50 body=6 status=ok
// SIG undefined FUN_141482b50(void)

undefined8 FUN_141482b50(void)

{
  return 0x47effbfc;
}



// FUNCTION 141482b60 FUN_141482b60 body=6 status=ok
// SIG undefined FUN_141482b60(void)

undefined8 FUN_141482b60(void)

{
  return 0x95f4d59d;
}



// FUNCTION 141482ba0 FUN_141482ba0 body=34 status=ok
// SIG undefined FUN_141482ba0(void)

void FUN_141482ba0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414816f0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearAllElementalEffects_144b244f0,3);
  return;
}



// FUNCTION 141482bd0 FUN_141482bd0 body=34 status=ok
// SIG undefined FUN_141482bd0(void)

void FUN_141482bd0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141481f80();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_RegisterStreamingEvent_144b24638,1);
  return;
}



// FUNCTION 141482c00 FUN_141482c00 body=34 status=ok
// SIG undefined FUN_141482c00(void)

void FUN_141482c00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414815e0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EndEventFallback_144b246c0,1);
  return;
}



// FUNCTION 141482c30 FUN_141482c30 body=34 status=ok
// SIG undefined FUN_141482c30(void)

void FUN_141482c30(void)

{
  undefined8 uVar1;
  
  uVar1 = APlayerStateRemnant::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnEnemyDied_144b246d0,5);
  return;
}



// FUNCTION 141482c60 FUN_141482c60 body=34 status=ok
// SIG undefined FUN_141482c60(void)

void FUN_141482c60(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141481870();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnExtractionInitiated_144b24720,2);
  return;
}



// FUNCTION 141482c90 StaticRegisterNativesUUGKeyBindEntryUW body=34 status=ok
// SIG undefined StaticRegisterNativesUUGKeyBindEntryUW(void)

void UUGKeyBindEntryUW::StaticRegisterNativesUUGKeyBindEntryUW(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnLootableDied_144b24860,4);
  return;
}



// FUNCTION 141482cc0 FUN_141482cc0 body=34 status=ok
// SIG undefined FUN_141482cc0(void)

void FUN_141482cc0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141482020();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_FakeMoxxisDrinkAction_144b24be8,3);
  return;
}



// FUNCTION 141482cf0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899538 == 0) {
    uVar1 = FUN_141482ad0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899538 = GetStaticStruct(FUN_1414831a0,uVar2,L"BitProduct",0x40,uVar1);
  }
  return;
}



// FUNCTION 141482d50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899528 == 0) {
    uVar1 = FUN_141482ae0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899528 = GetStaticStruct(FUN_1414831d0,uVar2,L"DonationTier",0x40,uVar1);
  }
  return;
}



// FUNCTION 141482db0 FUN_141482db0 body=82 status=ok
// SIG undefined FUN_141482db0(void)

void FUN_141482db0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899518 == 0) {
    uVar1 = FUN_141482af0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899518 = GetStaticStruct(FUN_141483200,uVar2,L"Donator",0x20,uVar1);
  }
  return;
}



// FUNCTION 141482e10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899418 == 0) {
    uVar1 = FUN_141482b00();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899418 = GetStaticStruct(FUN_141483230,uVar2,L"DonorInfo",0x18,uVar1);
  }
  return;
}



// FUNCTION 141482e70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468994d8 == 0) {
    uVar1 = FUN_141482b10();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468994d8 = GetStaticStruct(FUN_141483260,uVar2,L"LootableEventResultItem",0x60,uVar1);
  }
  return;
}



// FUNCTION 141482ed0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899390 == 0) {
    uVar1 = FUN_141482b20();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899390 =
         GetStaticStruct(FUN_141483290,uVar2,L"OakStatusEffectPresentation_Audio",0x18,uVar1);
  }
  return;
}



// FUNCTION 141482f30 FUN_141482f30 body=82 status=ok
// SIG undefined FUN_141482f30(void)

void FUN_141482f30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468993a0 == 0) {
    uVar1 = FUN_141482b30();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468993a0 =
         GetStaticStruct(FUN_1414832c0,uVar2,L"OakStatusEffectPresentation_Material",0x28,uVar1);
  }
  return;
}



// FUNCTION 141482f90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468993b0 == 0) {
    uVar1 = FUN_141482b40();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468993b0 =
         GetStaticStruct(FUN_1414832f0,uVar2,L"OakStatusEffectPresentation_Material_TransitionData",
                         8,uVar1);
  }
  return;
}



// FUNCTION 141482ff0 FUN_141482ff0 body=82 status=ok
// SIG undefined FUN_141482ff0(void)

void FUN_141482ff0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468993d0 == 0) {
    uVar1 = FUN_141482b50();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468993d0 =
         GetStaticStruct(FUN_141483320,uVar2,L"OakStatusEffectPresentation_Particle",0x30,uVar1);
  }
  return;
}



// FUNCTION 141483050 FUN_141483050 body=82 status=ok
// SIG undefined FUN_141483050(void)

void FUN_141483050(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468993c0 == 0) {
    uVar1 = FUN_141482b60();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468993c0 =
         GetStaticStruct(FUN_141483350,uVar2,L"OakStatusEffectPresentation_ScreenParticle",0x20,
                         uVar1);
  }
  return;
}



// FUNCTION 1414830b0 FUN_1414830b0 body=47 status=ok
// SIG undefined FUN_1414830b0(void)

longlong FUN_1414830b0(void)

{
  if (DAT_146899428 == 0) {
    FUN_141786440(&DAT_146899428,&PTR_FUN_144b1efc0);
  }
  return DAT_146899428;
}



// FUNCTION 1414830e0 FUN_1414830e0 body=47 status=ok
// SIG undefined FUN_1414830e0(void)

longlong FUN_1414830e0(void)

{
  if (DAT_1468993e0 == 0) {
    FUN_141786440(&DAT_1468993e0,&PTR_FUN_144b1e210);
  }
  return DAT_1468993e0;
}



// FUNCTION 141483110 FUN_141483110 body=47 status=ok
// SIG undefined FUN_141483110(void)

longlong FUN_141483110(void)

{
  if (DAT_1468994d0 == 0) {
    FUN_141786a30(&DAT_1468994d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14641e250);
  }
  return DAT_1468994d0;
}



// FUNCTION 141483140 FUN_141483140 body=47 status=ok
// SIG undefined FUN_141483140(void)

longlong FUN_141483140(void)

{
  if (DAT_146899450 == 0) {
    FUN_1417866a0(&DAT_146899450,&PTR_Z_Construct_UPackage__Script_MechWarrior_14641fee0);
  }
  return DAT_146899450;
}



// FUNCTION 141483170 FUN_141483170 body=47 status=ok
// SIG undefined FUN_141483170(void)

longlong FUN_141483170(void)

{
  if (DAT_146899458 == 0) {
    FUN_1417866a0(&DAT_146899458,&PTR_Z_Construct_UPackage__Script_MechWarrior_14641ff30);
  }
  return DAT_146899458;
}



// FUNCTION 1414831a0 FUN_1414831a0 body=47 status=ok
// SIG undefined FUN_1414831a0(void)

longlong FUN_1414831a0(void)

{
  if (DAT_146899540 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146899540,&PTR_Z_Construct_UPackage__Script_MechWarrior_14641f040);
  }
  return DAT_146899540;
}



// FUNCTION 1414831d0 FUN_1414831d0 body=47 status=ok
// SIG undefined FUN_1414831d0(void)

longlong FUN_1414831d0(void)

{
  if (DAT_146899530 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146899530,&PTR_Z_Construct_UPackage__Script_MechWarrior_14641ef10);
  }
  return DAT_146899530;
}



// FUNCTION 141483200 FUN_141483200 body=47 status=ok
// SIG undefined FUN_141483200(void)

longlong FUN_141483200(void)

{
  if (DAT_146899520 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146899520,&PTR_Z_Construct_UPackage__Script_MechWarrior_14641ede0);
  }
  return DAT_146899520;
}



// FUNCTION 141483230 FUN_141483230 body=47 status=ok
// SIG undefined FUN_141483230(void)

longlong FUN_141483230(void)

{
  if (DAT_146899420 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146899420,&PTR_Z_Construct_UPackage__Script_MechWarrior_14641c900);
  }
  return DAT_146899420;
}



// FUNCTION 141483260 FUN_141483260 body=47 status=ok
// SIG undefined FUN_141483260(void)

longlong FUN_141483260(void)

{
  if (DAT_1468994e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468994e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14641e540);
  }
  return DAT_1468994e0;
}



// FUNCTION 141483290 FUN_141483290 body=47 status=ok
// SIG undefined FUN_141483290(void)

longlong FUN_141483290(void)

{
  if (DAT_146899398 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146899398,&PTR_Z_Construct_UPackage__Script_MechWarrior_14641bd70);
  }
  return DAT_146899398;
}



// FUNCTION 1414832c0 FUN_1414832c0 body=47 status=ok
// SIG undefined FUN_1414832c0(void)

longlong FUN_1414832c0(void)

{
  if (DAT_1468993a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468993a8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14641be70);
  }
  return DAT_1468993a8;
}



// FUNCTION 1414832f0 FUN_1414832f0 body=47 status=ok
// SIG undefined FUN_1414832f0(void)

longlong FUN_1414832f0(void)

{
  if (DAT_1468993b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468993b8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14641bef0);
  }
  return DAT_1468993b8;
}



// FUNCTION 141483320 FUN_141483320 body=47 status=ok
// SIG undefined FUN_141483320(void)

longlong FUN_141483320(void)

{
  if (DAT_1468993d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468993d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14641c240);
  }
  return DAT_1468993d8;
}



// FUNCTION 141483350 FUN_141483350 body=47 status=ok
// SIG undefined FUN_141483350(void)

longlong FUN_141483350(void)

{
  if (DAT_1468993c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468993c8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14641c0a0);
  }
  return DAT_1468993c8;
}



// FUNCTION 141483380 FUN_141483380 body=112 status=ok
// SIG undefined FUN_141483380(void)

void FUN_141483380(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_140ea5900(local_res10[0]);
  return;
}



// FUNCTION 141483410 FUN_141483410 body=308 status=ok
// SIG undefined FUN_141483410(void)

void FUN_141483410(undefined8 param_1,longlong param_2)

{
  ulonglong local_res10 [2];
  undefined8 local_res20;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_60;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_70 = 0xffffffff;
  local_60 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_6c = 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_res10[0] = local_res10[0] & 0xffffffff00000000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_30 = 0;
  local_28 = 0;
  local_res20 = 0;
  local_38 = 0;
  local_48 = local_70;
  local_44 = (undefined4)local_6c;
  local_40 = local_6c._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_88 = local_60;
  FString::FString(local_80,local_58);
  FSoftObjectPath::operator=(&local_38,&local_88);
  FUN_140dea6d0(param_1,&local_48,(undefined4)local_res10[0]);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141483550 FUN_141483550 body=490 status=ok
// SIG undefined FUN_141483550(void)

void FUN_141483550(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong local_res10;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  longlong local_90 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  local_a8 = 0xffffffff;
  local_98 = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_a4 = 0;
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10 = local_res10 & 0xffffffff00000000;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_58 = 0;
  local_50 = 0;
  local_90[2] = 0;
  local_60 = 0;
  local_70 = local_a8;
  local_6c = (undefined4)local_a4;
  local_68 = local_a4._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_48 = local_98;
  FString::FString(local_40,local_90);
  FSoftObjectPath::operator=(&local_60,&local_48);
  plVar1 = (longlong *)
           FUN_140dee130(param_1,local_90 + 2,&local_70,local_res20[0],local_res18[0],
                         (undefined4)local_res10);
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
  if (local_90[2] != 0) {
    FMemory::Free();
  }
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141483740 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140dfc210(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141483800 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140dfc530(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414838c0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140dfc760(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141483980 execGetPerceivedActors body=226 status=ok
// SIG undefined execGetPerceivedActors(void)

void UAIPerceptionComponent::execGetPerceivedActors(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140dfcbf0(param_1,local_res10,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141483a70 FUN_141483a70 body=128 status=ok
// SIG undefined FUN_141483a70(void)

void FUN_141483a70(undefined8 param_1,longlong param_2)

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
  FUN_140dfd350(param_1,local_res10);
  return;
}



// FUNCTION 141483af0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140dfea40(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141483bb0 FUN_141483bb0 body=128 status=ok
// SIG undefined FUN_141483bb0(void)

void FUN_141483bb0(undefined8 param_1,longlong param_2)

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
  FUN_140dfeac0(param_1,local_res10);
  return;
}



// FUNCTION 141483c30 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140dff270(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141483d30 FUN_141483d30 body=112 status=ok
// SIG undefined FUN_141483d30(void)

void FUN_141483d30(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_140e03f80(local_res10[0]);
  return;
}



// FUNCTION 141483da0 FUN_141483da0 body=523 status=ok
// SIG undefined FUN_141483da0(void)

void FUN_141483da0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
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
  puVar2 = (undefined8 *)
           FUN_140ec5f90(local_38,local_40,local_48,local_50,local_58,local_res20[0],local_res18[0],
                         local_res10[0] != 0);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  param_3[2] = puVar2[2];
  return;
}



// FUNCTION 141483fc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagAssetInterface::GetPrivateStaticClass(void)

{
  if (DAT_146899b18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakThroughCollisionHandlerInterface",&DAT_146899b18,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146899b18;
}



// FUNCTION 141484080 FUN_141484080 body=47 status=ok
// SIG undefined FUN_141484080(void)

longlong FUN_141484080(void)

{
  if (DAT_146899b80 == 0) {
    FUN_141786440(&DAT_146899b80,&PTR_GetPrivateStaticClass_144b27dc0);
  }
  return DAT_146899b80;
}



// FUNCTION 1414840b0 FUN_1414840b0 body=47 status=ok
// SIG undefined FUN_1414840b0(void)

longlong FUN_1414840b0(void)

{
  if (DAT_146899b78 == 0) {
    FUN_141786a30(&DAT_146899b78,&PTR_FUN_146422ef0);
  }
  return DAT_146899b78;
}



// FUNCTION 1414840e0 FUN_1414840e0 body=53 status=ok
// SIG undefined FUN_1414840e0(void)

void FUN_1414840e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144b30558;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141484120 FUN_141484120 body=53 status=ok
// SIG undefined FUN_141484120(void)

void FUN_141484120(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x710;
    *puVar1 = &PTR_FUN_144b30670;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141484160 FUN_141484160 body=53 status=ok
// SIG undefined FUN_141484160(void)

void FUN_141484160(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144b30788;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414841a0 FUN_1414841a0 body=53 status=ok
// SIG undefined FUN_1414841a0(void)

void FUN_1414841a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x670;
    *puVar1 = &PTR_FUN_144b308a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1414841e0 FUN_1414841e0 body=53 status=ok
// SIG undefined FUN_1414841e0(void)

void FUN_1414841e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_144b309b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141484230 FUN_141484230 body=162 status=ok
// SIG undefined FUN_141484230(void)

longlong FUN_141484230(void)

{
  if (DAT_146899bc8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakTravelStationTracker",&DAT_146899bc8,FUN_1414866a0,0x588,
                  0x10000008,0,L"Engine",FUN_141484fa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AGPracticeMode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146899bc8;
}



// FUNCTION 1414842e0 FUN_1414842e0 body=47 status=ok
// SIG undefined FUN_1414842e0(void)

longlong FUN_1414842e0(void)

{
  if (DAT_146899bc0 == 0) {
    FUN_141786440(&DAT_146899bc0,&PTR_FUN_144b2a170);
  }
  return DAT_146899bc0;
}



// FUNCTION 141484310 FUN_141484310 body=47 status=ok
// SIG undefined FUN_141484310(void)

longlong FUN_141484310(void)

{
  if (DAT_146899b90 == 0) {
    FUN_141786a30(&DAT_146899b90,&PTR_FUN_1464230d0);
  }
  return DAT_146899b90;
}



// FUNCTION 141484340 FUN_141484340 body=47 status=ok
// SIG undefined FUN_141484340(void)

longlong FUN_141484340(void)

{
  if (DAT_146899b98 == 0) {
    FUN_141786a30(&DAT_146899b98,&PTR_FUN_146423110);
  }
  return DAT_146899b98;
}



// FUNCTION 141484370 FUN_141484370 body=47 status=ok
// SIG undefined FUN_141484370(void)

longlong FUN_141484370(void)

{
  if (DAT_146899ba0 == 0) {
    FUN_141786a30(&DAT_146899ba0,&PTR_FUN_146423150);
  }
  return DAT_146899ba0;
}



// FUNCTION 1414843a0 FUN_1414843a0 body=47 status=ok
// SIG undefined FUN_1414843a0(void)

longlong FUN_1414843a0(void)

{
  if (DAT_146899ba8 == 0) {
    FUN_141786a30(&DAT_146899ba8,&PTR_FUN_146423190);
  }
  return DAT_146899ba8;
}



// FUNCTION 1414843d0 FUN_1414843d0 body=47 status=ok
// SIG undefined FUN_1414843d0(void)

longlong FUN_1414843d0(void)

{
  if (DAT_146899bb0 == 0) {
    FUN_141786a30(&DAT_146899bb0,&PTR_FUN_146423220);
  }
  return DAT_146899bb0;
}



// FUNCTION 141484400 FUN_141484400 body=47 status=ok
// SIG undefined FUN_141484400(void)

longlong FUN_141484400(void)

{
  if (DAT_146899bb8 == 0) {
    FUN_141786a30(&DAT_146899bb8,&PTR_FUN_146423370);
  }
  return DAT_146899bb8;
}



// FUNCTION 141484430 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USkeletalMesh::GetPrivateStaticClass(void)

{
  if (DAT_146899a50 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakStreamingInteractionManager",&DAT_146899a50,
                  StaticRegisterNativesUSkeletalMesh,0x300,0x10000000,0,L"Engine",&LAB_141485090,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146899a50;
}



// FUNCTION 1414844e0 Z_Construct_UClass_AZombieC body=47 status=ok
// SIG undefined Z_Construct_UClass_AZombieC(void)

longlong Z_Construct_UClass_AZombieC(void)

{
  if (DAT_146899a48 == 0) {
    FUN_141786440(&DAT_146899a48,&PTR_GetPrivateStaticClass_144b2b470);
  }
  return DAT_146899a48;
}



// FUNCTION 141484510 FUN_141484510 body=47 status=ok
// SIG undefined FUN_141484510(void)

longlong FUN_141484510(void)

{
  if (DAT_146899a00 == 0) {
    FUN_141786a30(&DAT_146899a00,&PTR_Z_Construct_UClass_AZombieC_146420aa0);
  }
  return DAT_146899a00;
}



// FUNCTION 141484540 FUN_141484540 body=47 status=ok
// SIG undefined FUN_141484540(void)

longlong FUN_141484540(void)

{
  if (DAT_146899a08 == 0) {
    FUN_141786a30(&DAT_146899a08,&PTR_Z_Construct_UClass_AZombieC_146420b20);
  }
  return DAT_146899a08;
}



// FUNCTION 141484570 FUN_141484570 body=47 status=ok
// SIG undefined FUN_141484570(void)

longlong FUN_141484570(void)

{
  if (DAT_146899a10 == 0) {
    FUN_141786a30(&DAT_146899a10,&PTR_Z_Construct_UClass_AZombieC_146420c10);
  }
  return DAT_146899a10;
}



// FUNCTION 1414845a0 FUN_1414845a0 body=47 status=ok
// SIG undefined FUN_1414845a0(void)

longlong FUN_1414845a0(void)

{
  if (DAT_146899a18 == 0) {
    FUN_141786a30(&DAT_146899a18,&PTR_Z_Construct_UClass_AZombieC_146420c90);
  }
  return DAT_146899a18;
}



// FUNCTION 1414845d0 FUN_1414845d0 body=47 status=ok
// SIG undefined FUN_1414845d0(void)

longlong FUN_1414845d0(void)

{
  if (DAT_146899a20 == 0) {
    FUN_141786a30(&DAT_146899a20,&PTR_Z_Construct_UClass_AZombieC_146420cd0);
  }
  return DAT_146899a20;
}



// FUNCTION 141484600 FUN_141484600 body=47 status=ok
// SIG undefined FUN_141484600(void)

longlong FUN_141484600(void)

{
  if (DAT_146899a28 == 0) {
    FUN_141786a30(&DAT_146899a28,&PTR_Z_Construct_UClass_AZombieC_146420e00);
  }
  return DAT_146899a28;
}



// FUNCTION 141484630 FUN_141484630 body=47 status=ok
// SIG undefined FUN_141484630(void)

longlong FUN_141484630(void)

{
  if (DAT_146899a30 == 0) {
    FUN_141786a30(&DAT_146899a30,&PTR_Z_Construct_UClass_AZombieC_146420e80);
  }
  return DAT_146899a30;
}



// FUNCTION 141484660 FUN_141484660 body=47 status=ok
// SIG undefined FUN_141484660(void)

longlong FUN_141484660(void)

{
  if (DAT_146899a38 == 0) {
    FUN_141786a30(&DAT_146899a38,&PTR_Z_Construct_UClass_AZombieC_146420f00);
  }
  return DAT_146899a38;
}



// FUNCTION 141484690 FUN_141484690 body=162 status=ok
// SIG undefined FUN_141484690(void)

longlong FUN_141484690(void)

{
  if (DAT_146899c68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakTriggerComponent",&DAT_146899c68,FUN_1414867c0,0x208,
                  0x10000000,0,L"Engine",&LAB_141485180,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146899c68;
}



// FUNCTION 141484740 FUN_141484740 body=47 status=ok
// SIG undefined FUN_141484740(void)

longlong FUN_141484740(void)

{
  if (DAT_146899a40 == 0) {
    FUN_141786a30(&DAT_146899a40,&PTR_Z_Construct_UClass_AZombieC_146420f40);
  }
  return DAT_146899a40;
}



// FUNCTION 141484770 FUN_141484770 body=47 status=ok
// SIG undefined FUN_141484770(void)

longlong FUN_141484770(void)

{
  if (DAT_146899be0 == 0) {
    FUN_141786440(&DAT_146899be0,&PTR_GetPrivateStaticClass_144b2aff0);
  }
  return DAT_146899be0;
}



// FUNCTION 1414847a0 FUN_1414847a0 body=47 status=ok
// SIG undefined FUN_1414847a0(void)

longlong FUN_1414847a0(void)

{
  if (DAT_146899bd0 == 0) {
    FUN_141786a30(&DAT_146899bd0,&PTR_FUN_146423530);
  }
  return DAT_146899bd0;
}



// FUNCTION 1414847d0 FUN_1414847d0 body=47 status=ok
// SIG undefined FUN_1414847d0(void)

longlong FUN_1414847d0(void)

{
  if (DAT_146899bd8 == 0) {
    FUN_141786a30(&DAT_146899bd8,&PTR_FUN_146423600);
  }
  return DAT_146899bd8;
}



// FUNCTION 141484810 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGRichTextBlock::GetPrivateStaticClass(void)

{
  if (DAT_146899c08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakTriggerCapsule",&DAT_146899c08,
                  StaticRegisterNativesUUGRichTextBlock,0x488,0x10000000,0,L"Engine",&LAB_141485030,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_141486690,&LAB_140447700,0);
  }
  return DAT_146899c08;
}



// FUNCTION 1414848c0 FUN_1414848c0 body=47 status=ok
// SIG undefined FUN_1414848c0(void)

longlong FUN_1414848c0(void)

{
  if (DAT_146899c00 == 0) {
    FUN_141786440(&DAT_146899c00,&PTR_GetPrivateStaticClass_144b2b6d0);
  }
  return DAT_146899c00;
}



// FUNCTION 1414848f0 FUN_1414848f0 body=47 status=ok
// SIG undefined FUN_1414848f0(void)

longlong FUN_1414848f0(void)

{
  if (DAT_146899bf0 == 0) {
    FUN_141786a30(&DAT_146899bf0,&PTR_FUN_1464237c0);
  }
  return DAT_146899bf0;
}



// FUNCTION 141484920 FUN_141484920 body=47 status=ok
// SIG undefined FUN_141484920(void)

longlong FUN_141484920(void)

{
  if (DAT_146899bf8 == 0) {
    FUN_141786a30(&DAT_146899bf8,&PTR_FUN_146423890);
  }
  return DAT_146899bf8;
}



// FUNCTION 141484960 FUN_141484960 body=47 status=ok
// SIG undefined FUN_141484960(void)

longlong FUN_141484960(void)

{
  if (DAT_146899c60 == 0) {
    FUN_141786440(&DAT_146899c60,&PTR_FUN_144b2c630);
  }
  return DAT_146899c60;
}



// FUNCTION 141484990 FUN_141484990 body=47 status=ok
// SIG undefined FUN_141484990(void)

longlong FUN_141484990(void)

{
  if (DAT_146899c30 == 0) {
    FUN_141786a30(&DAT_146899c30,&PTR_FUN_146423c30);
  }
  return DAT_146899c30;
}



// FUNCTION 1414849c0 FUN_1414849c0 body=47 status=ok
// SIG undefined FUN_1414849c0(void)

longlong FUN_1414849c0(void)

{
  if (DAT_146899c38 == 0) {
    FUN_141786a30(&DAT_146899c38,&PTR_FUN_146423ce0);
  }
  return DAT_146899c38;
}



// FUNCTION 1414849f0 FUN_1414849f0 body=47 status=ok
// SIG undefined FUN_1414849f0(void)

longlong FUN_1414849f0(void)

{
  if (DAT_146899c40 == 0) {
    FUN_141786a30(&DAT_146899c40,&PTR_FUN_146423e20);
  }
  return DAT_146899c40;
}



// FUNCTION 141484a20 FUN_141484a20 body=47 status=ok
// SIG undefined FUN_141484a20(void)

longlong FUN_141484a20(void)

{
  if (DAT_146899c48 == 0) {
    FUN_141786a30(&DAT_146899c48,&PTR_FUN_146423fe0);
  }
  return DAT_146899c48;
}



// FUNCTION 141484a50 FUN_141484a50 body=47 status=ok
// SIG undefined FUN_141484a50(void)

longlong FUN_141484a50(void)

{
  if (DAT_146899c50 == 0) {
    FUN_141786a30(&DAT_146899c50,&PTR_FUN_146424120);
  }
  return DAT_146899c50;
}



// FUNCTION 141484a80 FUN_141484a80 body=47 status=ok
// SIG undefined FUN_141484a80(void)

longlong FUN_141484a80(void)

{
  if (DAT_146899c58 == 0) {
    FUN_141786a30(&DAT_146899c58,&PTR_FUN_146424160);
  }
  return DAT_146899c58;
}



// FUNCTION 141484ac0 FUN_141484ac0 body=53 status=ok
// SIG undefined FUN_141484ac0(void)

void FUN_141484ac0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144b2fd00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141484b00 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialParameterCollectionInstance::GetPrivateStaticClass(void)

{
  if (DAT_146899b88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakThumbnailManager",&DAT_146899b88,FUN_141486790,0xf8,
                  0x10000000,0,L"Engine",&LAB_141485170,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146899b88;
}



// FUNCTION 141484ba0 FUN_141484ba0 body=53 status=ok
// SIG undefined FUN_141484ba0(void)

void FUN_141484ba0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_14499aa10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141484bf0 FUN_141484bf0 body=53 status=ok
// SIG undefined FUN_141484bf0(void)

void FUN_141484bf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144b2fe18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141484c30 FUN_141484c30 body=53 status=ok
// SIG undefined FUN_141484c30(void)

void FUN_141484c30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x158;
    *puVar1 = &PTR_FUN_144b2ff30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141484c70 FUN_141484c70 body=162 status=ok
// SIG undefined FUN_141484c70(void)

longlong FUN_141484c70(void)

{
  if (DAT_1468999d0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakStreamingInteractionGlobals",&DAT_1468999d0,FUN_140447710,
                  0x150,0x10000000,0,L"Engine",&LAB_141485070,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468999d0;
}



// FUNCTION 141484d20 FUN_141484d20 body=53 status=ok
// SIG undefined FUN_141484d20(void)

void FUN_141484d20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &PTR_FUN_144b30048;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141484d60 FUN_141484d60 body=53 status=ok
// SIG undefined FUN_141484d60(void)

void FUN_141484d60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_144b30160;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141484db0 FUN_141484db0 body=162 status=ok
// SIG undefined FUN_141484db0(void)

longlong FUN_141484db0(void)

{
  if (DAT_1468999c0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakStreamingInteractionEvent_Pinata",&DAT_1468999c0,
                  FUN_141486730,0x358,0x10000000,0,L"Engine",&LAB_141485050,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414815e0,&LAB_140447700,0);
  }
  return DAT_1468999c0;
}



// FUNCTION 141484e60 FUN_141484e60 body=151 status=ok
// SIG undefined FUN_141484e60(void)

longlong FUN_141484e60(void)

{
  if (DAT_146899b08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakSubtitleManager",&DAT_146899b08,FUN_140447710,0x78,
                  0x10000000,0,L"Engine",FUN_1414850a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146899b08;
}



// FUNCTION 141484f00 FUN_141484f00 body=47 status=ok
// SIG undefined FUN_141484f00(void)

longlong FUN_141484f00(void)

{
  if (DAT_1468999b8 == 0) {
    FUN_141786440(&DAT_1468999b8,&PTR_FUN_144b2f030);
  }
  return DAT_1468999b8;
}



// FUNCTION 141484f30 FUN_141484f30 body=47 status=ok
// SIG undefined FUN_141484f30(void)

longlong FUN_141484f30(void)

{
  if (DAT_1468999a8 == 0) {
    FUN_141786a30(&DAT_1468999a8,&PTR_FUN_146420090);
  }
  return DAT_1468999a8;
}



// FUNCTION 141484f60 FUN_141484f60 body=47 status=ok
// SIG undefined FUN_141484f60(void)

longlong FUN_141484f60(void)

{
  if (DAT_1468999b0 == 0) {
    FUN_141786a30(&DAT_1468999b0,&PTR_FUN_146420110);
  }
  return DAT_1468999b0;
}



// FUNCTION 141484fa0 FUN_141484fa0 body=97 status=ok
// SIG undefined FUN_141484fa0(void)

void FUN_141484fa0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142f3c180(puVar1,param_1);
    *puVar1 = &PTR_FUN_144b30ae0;
    puVar1[0xa9] = 0;
    *(undefined4 *)(puVar1 + 0xaa) = 0;
    puVar1[0xab] = 0;
    *(undefined4 *)(puVar1 + 0xac) = 0;
    puVar1[0xad] = 0;
    puVar1[0xae] = 0;
    *(undefined1 *)(puVar1 + 0xaf) = 1;
    puVar1[0xb0] = 0;
  }
  return;
}



// FUNCTION 1414850a0 FUN_1414850a0 body=197 status=ok
// SIG undefined FUN_1414850a0(void)

void FUN_1414850a0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_141781840(puVar3,param_1);
    puVar3[5] = &PTR_FUN_143ff3950;
    puVar1 = puVar3 + 6;
    *puVar1 = &PTR__purecall_143f740d8;
    plVar4 = (longlong *)FUN_1404cfca0();
    iVar2 = (int)plVar4[1];
    *(int *)(plVar4 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar2);
    }
    *(undefined8 **)(*plVar4 + (longlong)iVar2 * 8) = puVar1;
    *puVar3 = &PTR_FUN_144b30278;
    puVar3[5] = &PTR_LAB_144b304f0;
    *puVar1 = &PTR_FUN_144b30510;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 2;
    *(undefined4 *)(puVar3 + 10) = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    *(undefined1 *)(puVar3 + 0xd) = 0;
    puVar3[0xe] = 0;
  }
  return;
}



// FUNCTION 1414851a0 FUN_1414851a0 body=443 status=ok
// SIG undefined FUN_1414851a0(void)

undefined8 * FUN_1414851a0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_144b2f828;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40000000;
  *(undefined4 *)(param_1 + 9) = 0xf;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x74)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd,0);
  }
  if ((undefined2 *)param_1[0xd] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xd] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((*(int *)((longlong)param_1 + 0x74) < 0) && (*(int *)((longlong)param_1 + 0x74) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd,0);
  }
  if ((undefined2 *)param_1[0xd] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xd] = 0;
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1405e1750(param_1 + 0xf);
  FText::FText(param_1 + 0x17);
  FText::FText(param_1 + 0x1a);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1d,L"({COUNT} vote(s) / {TOTAL_PERCENT}%)",L"StreamingInteractionGlobals",
             L"PoolResultFormat");
  *(undefined4 *)(param_1 + 0x20) = 0x3cf5c28f;
  *(undefined4 *)((longlong)param_1 + 0x104) = 10;
  *(undefined4 *)(param_1 + 0x21) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x44160000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(int *)((longlong)param_1 + 0x144) < 0) && (*(int *)((longlong)param_1 + 0x144) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x27,0);
  }
  if ((undefined2 *)param_1[0x27] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x27] = 0;
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  return param_1;
}



// FUNCTION 141485360 FUN_141485360 body=168 status=ok
// SIG undefined FUN_141485360(void)

void FUN_141485360(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x18);
    do {
      FUN_140591060(plVar7 + 5);
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
      plVar7 = plVar7 + 0xc;
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



// FUNCTION 141485410 FUN_141485410 body=165 status=ok
// SIG undefined FUN_141485410(void)

void FUN_141485410(longlong param_1)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x518);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x500);
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1414854c0 FUN_1414854c0 body=663 status=ok
// SIG undefined FUN_1414854c0(void)

undefined4 * FUN_1414854c0(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar1 = (longlong *)(param_1 + 6);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  if (plVar1 != (longlong *)(param_2 + 6)) {
    iVar7 = param_1[8];
    if (iVar7 != 0) {
      plVar5 = (longlong *)(*plVar1 + 0x20);
      do {
        if (plVar5[6] != 0) {
          FMemory::Free();
        }
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        if (plVar5[-2] != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 0xd;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = param_2[8];
    lVar6 = *(longlong *)(param_2 + 6);
    param_1[8] = iVar7;
    if ((iVar7 == 0) && (param_1[9] == 0)) {
      param_1[9] = 0;
    }
    else {
      TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy(plVar1,iVar7);
      puVar8 = (undefined4 *)*plVar1;
      if (iVar7 != 0) {
        lVar6 = lVar6 + 0x10;
        do {
          *puVar8 = *(undefined4 *)(lVar6 + -0x10);
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(lVar6 + -8);
          FString::FString(puVar8 + 4,lVar6);
          FString::FString(puVar8 + 8,lVar6 + 0x10);
          *(undefined8 *)(puVar8 + 0xc) = *(undefined8 *)(lVar6 + 0x20);
          *(undefined1 *)(puVar8 + 0xe) = *(undefined1 *)(lVar6 + 0x28);
          *(undefined1 *)((longlong)puVar8 + 0x39) = *(undefined1 *)(lVar6 + 0x29);
          *(undefined1 *)((longlong)puVar8 + 0x3a) = *(undefined1 *)(lVar6 + 0x2a);
          puVar8[0xf] = *(undefined4 *)(lVar6 + 0x2c);
          puVar8[0x10] = *(undefined4 *)(lVar6 + 0x30);
          puVar8[0x11] = *(undefined4 *)(lVar6 + 0x34);
          puVar8[0x12] = *(undefined4 *)(lVar6 + 0x38);
          FString::FString(puVar8 + 0x14,lVar6 + 0x40);
          puVar2 = (undefined1 *)(lVar6 + 0x50);
          lVar6 = lVar6 + 0x68;
          *(undefined1 *)(puVar8 + 0x18) = *puVar2;
          puVar8 = puVar8 + 0x1a;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  puVar3 = (undefined8 *)(param_1 + 10);
  if (puVar3 != (undefined8 *)(param_2 + 10)) {
    iVar7 = param_2[0xc];
    pvVar4 = *(void **)(param_2 + 10);
    param_1[0xc] = iVar7;
    if ((iVar7 == 0) && (param_1[0xd] == 0)) {
      param_1[0xd] = 0;
    }
    else {
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar3,iVar7);
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar4,(longlong)iVar7 * 0xc);
    }
  }
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
            (param_1 + 0xe,param_2 + 0xe);
  param_1[0x22] = param_2[0x22];
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
            (param_1 + 0x24,param_2 + 0x24);
  puVar3 = (undefined8 *)(param_1 + 0x38);
  if (puVar3 != (undefined8 *)(param_2 + 0x38)) {
    iVar7 = param_2[0x3a];
    pvVar4 = *(void **)(param_2 + 0x38);
    param_1[0x3a] = iVar7;
    if ((iVar7 == 0) && (param_1[0x3b] == 0)) {
      param_1[0x3b] = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar3,iVar7);
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar4,(longlong)iVar7 << 3);
    }
  }
  puVar3 = (undefined8 *)(param_1 + 0x3c);
  if (puVar3 != (undefined8 *)(param_2 + 0x3c)) {
    iVar7 = param_2[0x3e];
    pvVar4 = *(void **)(param_2 + 0x3c);
    param_1[0x3e] = iVar7;
    if ((iVar7 == 0) && (param_1[0x3f] == 0)) {
      param_1[0x3f] = 0;
    }
    else {
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar3,iVar7);
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar4,(longlong)iVar7 * 0xc);
    }
  }
  param_1[0x40] = param_2[0x40];
  FUN_140de1050(param_1 + 0x42,param_2 + 0x42);
  return param_1;
}



// FUNCTION 141485770 FUN_141485770 body=97 status=ok
// SIG undefined FUN_141485770(void)

longlong FUN_141485770(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x558);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x548);
  FUN_141485410(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x588);
  }
  return param_1;
}



// FUNCTION 1414857e0 FUN_1414857e0 body=310 status=ok
// SIG undefined FUN_1414857e0(void)

longlong FUN_1414857e0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xf0);
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
  plVar4 = *(longlong **)(param_1 + 0xd8);
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
  plVar4 = *(longlong **)(param_1 + 0xc0);
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
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 141485920 FUN_141485920 body=93 status=ok
// SIG undefined FUN_141485920(void)

longlong FUN_141485920(longlong param_1,ulonglong param_2)

{
  FUN_141485360(param_1 + 0x58);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  FUN_1404bf750(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143ff3950;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 141485980 FUN_141485980 body=38 status=ok
// SIG undefined FUN_141485980(void)

void FUN_141485980(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x158);
  FUN_140ddc330(param_2);
  return;
}



// FUNCTION 1414859b0 FUN_1414859b0 body=73 status=ok
// SIG undefined FUN_1414859b0(void)

void FUN_1414859b0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x68);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined2 *)((longlong)param_2 + 0x38) = 0;
  *(undefined1 *)((longlong)param_2 + 0x3a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined1 *)((longlong)param_2 + 0x60) = 0;
  return;
}



// FUNCTION 141485a40 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FNetOrderStructDefenseSuccess>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x710);
  FUN_1411c87d0(param_2);
  return;
}



// FUNCTION 141485a90 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FCG2PlayerSaveData>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x670);
  FUN_1411c88f0(param_2);
  return;
}



// FUNCTION 141485ac0 Construct body=36 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FSubtitleInfo>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  FUN_140ddc720(param_2);
  return;
}



// FUNCTION 141485af0 Construct body=103 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FLevelSequenceBindingReferences>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0xa0);
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined4 *)((longlong)param_2 + 0x98) = 0;
  return;
}



// FUNCTION 141485b60 FUN_141485b60 body=45 status=ok
// SIG undefined FUN_141485b60(void)

void FUN_141485b60(undefined8 param_1,longlong param_2)

{
  FText::FText(param_2);
  *(undefined4 *)(param_2 + 0x18) = DAT_1464aa730;
  FText::FText(param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 141485b90 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FDonNavigationDynamicCollisionTask>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1414854c0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x158;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141485be0 FUN_141485be0 body=208 status=ok
// SIG undefined FUN_141485be0(void)

undefined8 FUN_141485be0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_2 + -0x10 + param_3);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      FString::operator=(param_2 + 0x10,param_3 + 0x10 + param_2);
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20 + param_2);
      *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x28 + param_2);
      *(undefined1 *)(param_2 + 0x29) = *(undefined1 *)(param_3 + 0x29 + param_2);
      *(undefined1 *)(param_2 + 0x2a) = *(undefined1 *)(param_3 + 0x2a + param_2);
      *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c + param_2);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30 + param_2);
      *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_3 + 0x34 + param_2);
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38 + param_2);
      FString::operator=(param_2 + 0x40,param_3 + 0x40 + param_2);
      *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_3 + 0x50 + param_2);
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141485d00 FUN_141485d00 body=351 status=ok
// SIG undefined FUN_141485d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141485d00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_4 != 0) {
    puVar9 = (undefined4 *)(param_3 + 4);
    do {
      uVar8 = FUN_1416f8720(puVar9[-1]);
      FUN_14170c210(param_2,uVar8);
      uVar8 = FUN_1416f8720(*puVar9);
      FUN_14170c210(param_2 + 4,uVar8);
      plVar5 = *(longlong **)(puVar9 + 3);
      puVar1 = (undefined8 *)(param_2 + 8);
      uVar8 = *(undefined8 *)(puVar9 + 1);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_48 = uVar8;
      plStack_40 = plVar5;
      if (&local_48 != puVar1) {
        local_48 = *puVar1;
        plStack_40 = *(longlong **)(param_2 + 0x10);
        *puVar1 = uVar8;
        *(longlong **)(param_2 + 0x10) = plVar5;
        local_30 = uVar8;
        plStack_28 = plVar5;
      }
      plVar5 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_40 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_40 + 8))(plStack_40,1);
          }
        }
      }
      *(undefined4 *)(param_2 + 0x18) = puVar9[5];
      lVar7 = *(longlong *)(puVar9 + 7);
      lVar6 = *(longlong *)(param_2 + 0x20);
      *(longlong *)(param_2 + 0x20) = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
        UNLOCK();
      }
      if (lVar6 != 0) {
        LOCK();
        piVar3 = (int *)(lVar6 + 0x48);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FGraphEvent::Recycle();
        }
      }
      puVar9 = puVar9 + 10;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x28;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141485e60 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimInstanceProxy>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1411cb630(param_2 + param_3,param_3);
      param_3 = param_3 + 0x710;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141485eb0 FUN_141485eb0 body=270 status=ok
// SIG undefined FUN_141485eb0(void)

undefined8 FUN_141485eb0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  
  if (param_4 != 0) {
    puVar7 = (undefined4 *)(param_3 + 0x10);
    do {
      uVar6 = *(undefined8 *)(puVar7 + -2);
      *param_2 = *(undefined8 *)(puVar7 + -4);
      param_2[1] = uVar6;
      puVar1 = param_2 + 9;
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *(undefined4 *)(param_2 + 2) = *puVar7;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
      *(undefined4 *)(param_2 + 3) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
      uVar6 = *(undefined8 *)(puVar7 + 6);
      param_2[4] = *(undefined8 *)(puVar7 + 4);
      param_2[5] = uVar6;
      uVar3 = puVar7[9];
      uVar4 = puVar7[10];
      uVar5 = puVar7[0xb];
      *(undefined4 *)(param_2 + 6) = puVar7[8];
      *(undefined4 *)((longlong)param_2 + 0x34) = uVar3;
      *(undefined4 *)(param_2 + 7) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uVar5;
      *(undefined4 *)(param_2 + 8) = puVar7[0xc];
      if (puVar1 != (undefined8 *)(puVar7 + 0xe)) {
        iVar2 = puVar7[0x10];
        _Src = *(void **)(puVar7 + 0xe);
        *(int *)(param_2 + 10) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x54) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x54) = 0;
        }
        else {
          FUN_1409b7fb0(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x14);
        }
      }
      uVar3 = puVar7[0x13];
      uVar4 = puVar7[0x14];
      uVar5 = puVar7[0x15];
      *(undefined4 *)(param_2 + 0xb) = puVar7[0x12];
      *(undefined4 *)((longlong)param_2 + 0x5c) = uVar3;
      *(undefined4 *)(param_2 + 0xc) = uVar4;
      *(undefined4 *)((longlong)param_2 + 100) = uVar5;
      FUN_140a296b0(param_2 + 0xe,puVar7 + 0x18);
      puVar7 = puVar7 + 0x19c;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xce;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141485fc0 FUN_141485fc0 body=206 status=ok
// SIG undefined FUN_141485fc0(void)

undefined8 FUN_141485fc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x10);
    do {
      *(undefined8 *)(puVar1 + -4) = *(undefined8 *)(param_3 + -0x10 + (longlong)puVar1);
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar1);
      FSoftObjectPath::operator=(puVar1 + 2,&local_28);
      FText::operator=(puVar1 + 8,param_3 + 0x20 + (longlong)puVar1);
      puVar1[0xe] = *(undefined4 *)(param_3 + 0x38 + (longlong)puVar1);
      puVar1[0xf] = *(undefined4 *)(param_3 + 0x3c + (longlong)puVar1);
      puVar1[0x10] = *(undefined4 *)(param_3 + 0x40 + (longlong)puVar1);
      puVar1[0x11] = *(undefined4 *)(param_3 + 0x44 + (longlong)puVar1);
      puVar1[0x12] = *(undefined4 *)(param_3 + 0x48 + (longlong)puVar1);
      puVar1[0x13] = *(undefined4 *)(param_3 + 0x4c + (longlong)puVar1);
      puVar1 = puVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141486090 Copy body=90 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FLatentActionManager>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,0>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,0>,0>,FDefaultSetAllocator>
      ::operator=(param_2,param_3 + param_2);
      TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,0>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FLatentActionManager::FObjectActions,0>,0>,FDefaultSetAllocator>
      ::operator=(param_2 + 0x50,param_3 + 0x50 + param_2);
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414860f0 FUN_1414860f0 body=118 status=ok
// SIG undefined FUN_1414860f0(void)

undefined8 FUN_1414860f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      FText::operator=(param_2 + -0x20,param_3 + -0x20 + param_2);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8 + param_2);
      FText::operator=(param_2,param_3 + param_2);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18 + param_2);
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141486180 FUN_141486180 body=62 status=ok
// SIG undefined FUN_141486180(void)

void FUN_141486180(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1414861d0 FUN_1414861d0 body=108 status=ok
// SIG undefined FUN_1414861d0(void)

void FUN_1414861d0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x6e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x6d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0xd8) != 0) {
    FMemory::Free();
  }
  FUN_140ddef50(param_2 + 0x58);
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141486240 FUN_141486240 body=68 status=ok
// SIG undefined FUN_141486240(void)

void FUN_141486240(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x658) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x648) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1414862b0 Destruct body=142 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FAbilityStat>::Destruct(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 0x28);
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
  plVar4 = *(longlong **)(param_2 + 8);
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



// FUNCTION 141486340 FUN_141486340 body=55 status=ok
// SIG undefined FUN_141486340(void)

void FUN_141486340(void)

{
  undefined8 uVar1;
  
  if (DAT_146899570 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899570 = GetStaticEnum(FUN_141486f70,uVar1,L"ECharacterProfileUpdateStep");
  }
  return;
}



// FUNCTION 141486380 FUN_141486380 body=55 status=ok
// SIG undefined FUN_141486380(void)

void FUN_141486380(void)

{
  undefined8 uVar1;
  
  if (DAT_146899580 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899580 = GetStaticEnum(FUN_141486fa0,uVar1,L"EEndEventReasons");
  }
  return;
}



// FUNCTION 1414863c0 FUN_1414863c0 body=55 status=ok
// SIG undefined FUN_1414863c0(void)

void FUN_1414863c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146899588 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899588 = GetStaticEnum(FUN_141486fd0,uVar1,L"EOakTriggerComponentEventType");
  }
  return;
}



// FUNCTION 141486400 FUN_141486400 body=55 status=ok
// SIG undefined FUN_141486400(void)

void FUN_141486400(void)

{
  undefined8 uVar1;
  
  if (DAT_146899578 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899578 = GetStaticEnum(FUN_141487000,uVar1,L"EStreamingManagerState");
  }
  return;
}



// FUNCTION 141486450 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGRichTextBlock::GetPrivateStaticClass(void)

{
  if (DAT_146899be8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakTriggerBox",&DAT_146899be8,
                  StaticRegisterNativesUUGRichTextBlock,0x488,0x10000000,0,L"Engine",&LAB_141485010,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_141486680,&LAB_140447700,0);
  }
  return DAT_146899be8;
}



// FUNCTION 141486500 FUN_141486500 body=6 status=ok
// SIG undefined FUN_141486500(void)

undefined8 FUN_141486500(void)

{
  return 0xbb892e72;
}



// FUNCTION 141486510 FUN_141486510 body=6 status=ok
// SIG undefined FUN_141486510(void)

undefined8 FUN_141486510(void)

{
  return 0x60b9df24;
}



// FUNCTION 141486520 FUN_141486520 body=6 status=ok
// SIG undefined FUN_141486520(void)

undefined8 FUN_141486520(void)

{
  return 0x638b85fa;
}



// FUNCTION 141486530 FUN_141486530 body=6 status=ok
// SIG undefined FUN_141486530(void)

undefined8 FUN_141486530(void)

{
  return 0xa2cf579e;
}



// FUNCTION 141486540 FUN_141486540 body=6 status=ok
// SIG undefined FUN_141486540(void)

undefined8 FUN_141486540(void)

{
  return 0x3227b674;
}



// FUNCTION 141486550 FUN_141486550 body=6 status=ok
// SIG undefined FUN_141486550(void)

undefined8 FUN_141486550(void)

{
  return 0x95d6cea4;
}



// FUNCTION 141486560 FUN_141486560 body=6 status=ok
// SIG undefined FUN_141486560(void)

undefined8 FUN_141486560(void)

{
  return 0x7c18ef57;
}



// FUNCTION 141486570 FUN_141486570 body=6 status=ok
// SIG undefined FUN_141486570(void)

undefined8 FUN_141486570(void)

{
  return 0x271743b3;
}



// FUNCTION 141486580 FUN_141486580 body=6 status=ok
// SIG undefined FUN_141486580(void)

undefined8 FUN_141486580(void)

{
  return 0xb2a70572;
}



// FUNCTION 141486590 FUN_141486590 body=6 status=ok
// SIG undefined FUN_141486590(void)

undefined8 FUN_141486590(void)

{
  return 0x1a08f4b6;
}



// FUNCTION 1414865a0 FUN_1414865a0 body=6 status=ok
// SIG undefined FUN_1414865a0(void)

undefined8 FUN_1414865a0(void)

{
  return 0xf7910977;
}



// FUNCTION 1414865b0 FUN_1414865b0 body=6 status=ok
// SIG undefined FUN_1414865b0(void)

undefined8 FUN_1414865b0(void)

{
  return 0xab121728;
}



// FUNCTION 1414865c0 FUN_1414865c0 body=6 status=ok
// SIG undefined FUN_1414865c0(void)

undefined8 FUN_1414865c0(void)

{
  return 0xd63aa570;
}



// FUNCTION 1414865d0 FUN_1414865d0 body=6 status=ok
// SIG undefined FUN_1414865d0(void)

undefined8 FUN_1414865d0(void)

{
  return 0x366508b6;
}



// FUNCTION 1414865e0 FUN_1414865e0 body=6 status=ok
// SIG undefined FUN_1414865e0(void)

undefined8 FUN_1414865e0(void)

{
  return 0xe25f58d;
}



// FUNCTION 1414865f0 FUN_1414865f0 body=106 status=ok
// SIG undefined FUN_1414865f0(void)

undefined8 FUN_1414865f0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + -0x24);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
    cVar2 = UObjectBaseUtility::IsTemplate(param_1 + -0x30,0x30);
    if (cVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141486670 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void AGPracticeMode::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1414866a0 FUN_1414866a0 body=34 status=ok
// SIG undefined FUN_1414866a0(void)

void FUN_1414866a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141484230();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_LockOutFastTravelAvailable_144b31200,6);
  return;
}



// FUNCTION 1414866d0 StaticRegisterNativesUUGRichTextBlock body=34 status=ok
// SIG undefined StaticRegisterNativesUUGRichTextBlock(void)

void UUGRichTextBlock::StaticRegisterNativesUUGRichTextBlock(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_NotifyTriggerTouched_144b31260,2);
  return;
}



// FUNCTION 141486700 StaticRegisterNativesUUGRichTextBlock body=34 status=ok
// SIG undefined StaticRegisterNativesUUGRichTextBlock(void)

void UUGRichTextBlock::StaticRegisterNativesUUGRichTextBlock(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_NotifyTriggerTouched_144b31280,2);
  return;
}



// FUNCTION 141486730 FUN_141486730 body=34 status=ok
// SIG undefined FUN_141486730(void)

void FUN_141486730(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141484db0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_HandleLevelChanged_144b2f808,2);
  return;
}



// FUNCTION 141486760 StaticRegisterNativesUSkeletalMesh body=34 status=ok
// SIG undefined StaticRegisterNativesUSkeletalMesh(void)

void USkeletalMesh::StaticRegisterNativesUSkeletalMesh(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DebugFakeIsStreaming_144b2fbe0,9);
  return;
}



// FUNCTION 141486790 FUN_141486790 body=34 status=ok
// SIG undefined FUN_141486790(void)

void FUN_141486790(void)

{
  undefined8 uVar1;
  
  uVar1 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnStreamedTextureLoaded_144b30ad0,1);
  return;
}



// FUNCTION 1414867c0 FUN_1414867c0 body=34 status=ok
// SIG undefined FUN_1414867c0(void)

void FUN_1414867c0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141484690();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnableTrigger_144b312c0,6);
  return;
}



// FUNCTION 1414867f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899af0 == 0) {
    uVar1 = FUN_141486500();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899af0 = GetStaticStruct(FUN_141487030,uVar2,L"MinimalAbilitSlotInfo",8,uVar1);
  }
  return;
}



// FUNCTION 141486850 FUN_141486850 body=82 status=ok
// SIG undefined FUN_141486850(void)

void FUN_141486850(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899ae0 == 0) {
    uVar1 = FUN_141486510();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899ae0 = GetStaticStruct(FUN_141487060,uVar2,L"MinimalAugmentSlotInfo",0xc,uVar1);
  }
  return;
}



// FUNCTION 1414868b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_SpringBone::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899aa0 == 0) {
    uVar1 = FUN_141486520();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899aa0 = GetStaticStruct(FUN_141487090,uVar2,L"MinimalCharacterInfo",0x158,uVar1);
  }
  return;
}



// FUNCTION 141486910 FUN_141486910 body=82 status=ok
// SIG undefined FUN_141486910(void)

void FUN_141486910(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899ac0 == 0) {
    uVar1 = FUN_141486530();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899ac0 = GetStaticStruct(FUN_1414870c0,uVar2,L"MinimalEquippedInventoryInfo",0xc,uVar1);
  }
  return;
}



// FUNCTION 141486970 FUN_141486970 body=82 status=ok
// SIG undefined FUN_141486970(void)

void FUN_141486970(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899ad0 == 0) {
    uVar1 = FUN_141486540();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899ad0 = GetStaticStruct(FUN_1414870f0,uVar2,L"MinimalInventoryInfo",0x68,uVar1);
  }
  return;
}



// FUNCTION 1414869d0 FUN_1414869d0 body=82 status=ok
// SIG undefined FUN_1414869d0(void)

void FUN_1414869d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899a70 == 0) {
    uVar1 = FUN_141486550();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899a70 = GetStaticStruct(FUN_141487120,uVar2,L"OakInteractiveEventStats",0x20,uVar1);
  }
  return;
}



// FUNCTION 141486a30 FUN_141486a30 body=82 status=ok
// SIG undefined FUN_141486a30(void)

void FUN_141486a30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899a80 == 0) {
    uVar1 = FUN_141486560();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899a80 = GetStaticStruct(FUN_141487150,uVar2,L"OakInteractiveSessionStats",0x20,uVar1);
  }
  return;
}



// FUNCTION 141486a90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899b28 == 0) {
    uVar1 = FUN_141486570();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899b28 = GetStaticStruct(FUN_141487180,uVar2,L"OakThumbnailManagerConfig",0x18,uVar1);
  }
  return;
}



// FUNCTION 141486af0 FUN_141486af0 body=82 status=ok
// SIG undefined FUN_141486af0(void)

void FUN_141486af0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899b48 == 0) {
    uVar1 = FUN_141486580();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899b48 = GetStaticStruct(FUN_1414871b0,uVar2,L"OakThumbnailManagerIcon",0x28,uVar1);
  }
  return;
}



// FUNCTION 141486b50 FUN_141486b50 body=82 status=ok
// SIG undefined FUN_141486b50(void)

void FUN_141486b50(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899b38 == 0) {
    uVar1 = FUN_141486590();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899b38 = GetStaticStruct(FUN_1414871e0,uVar2,L"OakThumbnailManagerItemInfo",0x710,uVar1);
  }
  return;
}



// FUNCTION 141486bb0 FUN_141486bb0 body=82 status=ok
// SIG undefined FUN_141486bb0(void)

void FUN_141486bb0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899b68 == 0) {
    uVar1 = FUN_1414865a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899b68 =
         GetStaticStruct(FUN_141487210,uVar2,L"OakThumbnailManagerLightProperties",0x14,uVar1);
  }
  return;
}



// FUNCTION 141486c10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneComponentTransformSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899b58 == 0) {
    uVar1 = FUN_1414865b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899b58 =
         GetStaticStruct(FUN_141487240,uVar2,L"OakThumbnailManagerRenderProperties",0x670,uVar1);
  }
  return;
}



// FUNCTION 141486c70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899a90 == 0) {
    uVar1 = FUN_1414865c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899a90 = GetStaticStruct(FUN_141487270,uVar2,L"PollActionInfo",0x60,uVar1);
  }
  return;
}



// FUNCTION 141486cd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899ab0 == 0) {
    uVar1 = FUN_1414865d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899ab0 = GetStaticStruct(FUN_1414872a0,uVar2,L"SkillTreeItemsStatValues",0xa0,uVar1);
  }
  return;
}



// FUNCTION 141486d30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146899a60 == 0) {
    uVar1 = FUN_1414865e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146899a60 = GetStaticStruct(FUN_1414872d0,uVar2,L"StreamingStatusInfo",0x40,uVar1);
  }
  return;
}



// FUNCTION 141486d90 FUN_141486d90 body=47 status=ok
// SIG undefined FUN_141486d90(void)

longlong FUN_141486d90(void)

{
  if (DAT_1468999c8 == 0) {
    FUN_141786440(&DAT_1468999c8,&PTR_FUN_144b2e8e0);
  }
  return DAT_1468999c8;
}



// FUNCTION 141486dc0 FUN_141486dc0 body=47 status=ok
// SIG undefined FUN_141486dc0(void)

longlong FUN_141486dc0(void)

{
  if (DAT_146899b00 == 0) {
    FUN_141786440(&DAT_146899b00,&PTR_FUN_144b24d30);
  }
  return DAT_146899b00;
}



// FUNCTION 141486df0 FUN_141486df0 body=47 status=ok
// SIG undefined FUN_141486df0(void)

longlong FUN_141486df0(void)

{
  if (DAT_146899b10 == 0) {
    FUN_141786440(&DAT_146899b10,&PTR_GetPrivateStaticClass_144b254b0);
  }
  return DAT_146899b10;
}



// FUNCTION 141486e20 FUN_141486e20 body=47 status=ok
// SIG undefined FUN_141486e20(void)

longlong FUN_141486e20(void)

{
  if (DAT_1468999e8 == 0) {
    FUN_141786a30(&DAT_1468999e8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146420a10);
  }
  return DAT_1468999e8;
}



// FUNCTION 141486e50 FUN_141486e50 body=47 status=ok
// SIG undefined FUN_141486e50(void)

longlong FUN_141486e50(void)

{
  if (DAT_1468999d8 == 0) {
    FUN_141786a30(&DAT_1468999d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464208f0);
  }
  return DAT_1468999d8;
}


