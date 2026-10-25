// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14079c740 execIsDeviceTracking body=147 status=ok
// SIG undefined execIsDeviceTracking(void)

void UHeadMountedDisplayFunctionLibrary::execIsDeviceTracking
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 local_18 [16];
  
  UCheatManagerGunfire::GetAllCheats(local_18);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar2 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140761aa0(puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14079c7e0 execMatchesTag body=240 status=ok
// SIG undefined execMatchesTag(void)

void UBlueprintGameplayTagLibrary::execMatchesTag
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  uVar1 = FUN_140761bb0(local_res20,local_res18,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14079c8f0 FUN_14079c8f0 body=128 status=ok
// SIG undefined FUN_14079c8f0(void)

void FUN_14079c8f0(undefined8 param_1,longlong param_2)

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
  FUN_140743ab0(param_1,local_res10);
  return;
}



// FUNCTION 14079c970 FUN_14079c970 body=53 status=ok
// SIG undefined FUN_14079c970(void)

void FUN_14079c970(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1440b7fa0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14079c9d0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UBTTask_MoveTo::StaticClass(void)

{
  if (DAT_14685ac00 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AITask_UseLookAtPoint",&DAT_14685ac00,FUN_140447710,0xb0,
                  0x10000004,0,L"Game",&LAB_14079e480,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079fea0,&LAB_140447700,0);
  }
  return DAT_14685ac00;
}



// FUNCTION 14079ca80 FUN_14079ca80 body=53 status=ok
// SIG undefined FUN_14079ca80(void)

void FUN_14079ca80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_1440b88f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14079cac0 FUN_14079cac0 body=53 status=ok
// SIG undefined FUN_14079cac0(void)

void FUN_14079cac0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x130;
    *puVar1 = &PTR_FUN_1440b8170;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14079cb00 FUN_14079cb00 body=53 status=ok
// SIG undefined FUN_14079cb00(void)

void FUN_14079cb00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1440b8a10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14079cb60 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAISenseConfig_Damage::StaticClass(void)

{
  if (DAT_14685ab48 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AISenseConfig_Proximity",&DAT_14685ab48,FUN_140447710,0x50,
                  0x10000004,0,L"Game",&LAB_14079e380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAISenseConfig::StaticClass,&LAB_140447700,0);
  }
  return DAT_14685ab48;
}



// FUNCTION 14079cc20 FUN_14079cc20 body=151 status=ok
// SIG undefined FUN_14079cc20(void)

longlong FUN_14079cc20(void)

{
  if (DAT_14685a9a0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIGroupState",&DAT_14685a9a0,FUN_14079ff00,0x2840,0x10000000,0,
                  L"Engine",&LAB_14079e350,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14685a9a0;
}



// FUNCTION 14079ccc0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryContext_Target::StaticClass(void)

{
  if (DAT_14685abf0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AITargetingBlueprintLibrary",&DAT_14685abf0,FUN_14079ff90,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_14685abf0;
}



// FUNCTION 14079cd80 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UBTTask_MoveTo::StaticClass(void)

{
  if (DAT_14685ac10 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AITask_UsePerch",&DAT_14685ac10,FUN_140447710,0xb0,0x10000004,0
                  ,L"Game",&LAB_14079e4a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079fea0,&LAB_140447700,0);
  }
  return DAT_14685ac10;
}



// FUNCTION 14079ce30 FUN_14079ce30 body=162 status=ok
// SIG undefined FUN_14079ce30(void)

longlong FUN_14079ce30(void)

{
  if (DAT_14685ab58 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AISenseConfig_Threat",&DAT_14685ab58,FUN_140447710,0x58,
                  0x10000004,0,L"Game",&LAB_14079e3a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAISenseConfig::StaticClass,&LAB_140447700,0);
  }
  return DAT_14685ab58;
}



// FUNCTION 14079cee0 FUN_14079cee0 body=53 status=ok
// SIG undefined FUN_14079cee0(void)

void FUN_14079cee0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_1440b8380;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14079cf20 FUN_14079cf20 body=47 status=ok
// SIG undefined FUN_14079cf20(void)

longlong FUN_14079cf20(void)

{
  if (DAT_14685abe8 == 0) {
    FUN_141786440(&DAT_14685abe8,&PTR_StaticClass_1440b6ac0);
  }
  return DAT_14685abe8;
}



// FUNCTION 14079cf50 FUN_14079cf50 body=47 status=ok
// SIG undefined FUN_14079cf50(void)

longlong FUN_14079cf50(void)

{
  if (DAT_14685ab70 == 0) {
    FUN_141786a30(&DAT_14685ab70,&PTR_FUN_146243d90);
  }
  return DAT_14685ab70;
}



// FUNCTION 14079cf80 FUN_14079cf80 body=47 status=ok
// SIG undefined FUN_14079cf80(void)

longlong FUN_14079cf80(void)

{
  if (DAT_14685ab78 == 0) {
    FUN_141786a30(&DAT_14685ab78,&PTR_FUN_146243e50);
  }
  return DAT_14685ab78;
}



// FUNCTION 14079cfb0 FUN_14079cfb0 body=47 status=ok
// SIG undefined FUN_14079cfb0(void)

longlong FUN_14079cfb0(void)

{
  if (DAT_14685ab80 == 0) {
    FUN_141786a30(&DAT_14685ab80,&PTR_FUN_146243ed0);
  }
  return DAT_14685ab80;
}



// FUNCTION 14079cfe0 FUN_14079cfe0 body=47 status=ok
// SIG undefined FUN_14079cfe0(void)

longlong FUN_14079cfe0(void)

{
  if (DAT_14685ab88 == 0) {
    FUN_141786a30(&DAT_14685ab88,&PTR_FUN_146243f90);
  }
  return DAT_14685ab88;
}



// FUNCTION 14079d010 FUN_14079d010 body=47 status=ok
// SIG undefined FUN_14079d010(void)

longlong FUN_14079d010(void)

{
  if (DAT_14685ab90 == 0) {
    FUN_141786a30(&DAT_14685ab90,&PTR_FUN_1462440e0);
  }
  return DAT_14685ab90;
}



// FUNCTION 14079d040 FUN_14079d040 body=47 status=ok
// SIG undefined FUN_14079d040(void)

longlong FUN_14079d040(void)

{
  if (DAT_14685ab98 == 0) {
    FUN_141786a30(&DAT_14685ab98,&PTR_FUN_1462441a0);
  }
  return DAT_14685ab98;
}



// FUNCTION 14079d080 FUN_14079d080 body=47 status=ok
// SIG undefined FUN_14079d080(void)

longlong FUN_14079d080(void)

{
  if (DAT_14685aba0 == 0) {
    FUN_141786a30(&DAT_14685aba0,&PTR_FUN_146244260);
  }
  return DAT_14685aba0;
}



// FUNCTION 14079d0b0 FUN_14079d0b0 body=47 status=ok
// SIG undefined FUN_14079d0b0(void)

longlong FUN_14079d0b0(void)

{
  if (DAT_14685aba8 == 0) {
    FUN_141786a30(&DAT_14685aba8,&PTR_FUN_146244360);
  }
  return DAT_14685aba8;
}



// FUNCTION 14079d0e0 FUN_14079d0e0 body=47 status=ok
// SIG undefined FUN_14079d0e0(void)

longlong FUN_14079d0e0(void)

{
  if (DAT_14685abb0 == 0) {
    FUN_141786a30(&DAT_14685abb0,&PTR_FUN_1462444e0);
  }
  return DAT_14685abb0;
}



// FUNCTION 14079d110 FUN_14079d110 body=47 status=ok
// SIG undefined FUN_14079d110(void)

longlong FUN_14079d110(void)

{
  if (DAT_14685abb8 == 0) {
    FUN_141786a30(&DAT_14685abb8,&PTR_FUN_146244630);
  }
  return DAT_14685abb8;
}



// FUNCTION 14079d140 FUN_14079d140 body=47 status=ok
// SIG undefined FUN_14079d140(void)

longlong FUN_14079d140(void)

{
  if (DAT_14685abc0 == 0) {
    FUN_141786a30(&DAT_14685abc0,&PTR_FUN_146244770);
  }
  return DAT_14685abc0;
}



// FUNCTION 14079d170 FUN_14079d170 body=47 status=ok
// SIG undefined FUN_14079d170(void)

longlong FUN_14079d170(void)

{
  if (DAT_14685abc8 == 0) {
    FUN_141786a30(&DAT_14685abc8,&PTR_FUN_146244860);
  }
  return DAT_14685abc8;
}



// FUNCTION 14079d1a0 FUN_14079d1a0 body=47 status=ok
// SIG undefined FUN_14079d1a0(void)

longlong FUN_14079d1a0(void)

{
  if (DAT_14685abd0 == 0) {
    FUN_141786a30(&DAT_14685abd0,&PTR_FUN_146244970);
  }
  return DAT_14685abd0;
}



// FUNCTION 14079d1d0 FUN_14079d1d0 body=47 status=ok
// SIG undefined FUN_14079d1d0(void)

longlong FUN_14079d1d0(void)

{
  if (DAT_14685abd8 == 0) {
    FUN_141786a30(&DAT_14685abd8,&PTR_FUN_146244a80);
  }
  return DAT_14685abd8;
}



// FUNCTION 14079d200 FUN_14079d200 body=47 status=ok
// SIG undefined FUN_14079d200(void)

longlong FUN_14079d200(void)

{
  if (DAT_14685abe0 == 0) {
    FUN_141786a30(&DAT_14685abe0,&PTR_FUN_146244b90);
  }
  return DAT_14685abe0;
}



// FUNCTION 14079d240 FUN_14079d240 body=162 status=ok
// SIG undefined FUN_14079d240(void)

longlong FUN_14079d240(void)

{
  if (DAT_14685ac20 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AITask_UseSmartObject",&DAT_14685ac20,FUN_140447710,0x70,
                  0x12000004,0,L"Game",InternalConstructor<UAITask_LockLogic>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079fea0,&LAB_140447700,0);
  }
  return DAT_14685ac20;
}



// FUNCTION 14079d2f0 FUN_14079d2f0 body=53 status=ok
// SIG undefined FUN_14079d2f0(void)

void FUN_14079d2f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1440b8498;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14079d340 FUN_14079d340 body=162 status=ok
// SIG undefined FUN_14079d340(void)

longlong FUN_14079d340(void)

{
  if (DAT_14685ac40 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AITicketDataAsset",&DAT_14685ac40,FUN_140447710,0x140,
                  0x10000000,0,L"Engine",&LAB_14079e4c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14685ac40;
}



// FUNCTION 14079d3f0 FUN_14079d3f0 body=47 status=ok
// SIG undefined FUN_14079d3f0(void)

longlong FUN_14079d3f0(void)

{
  if (DAT_14685a998 == 0) {
    FUN_141786440(&DAT_14685a998,&PTR_FUN_1440b6240);
  }
  return DAT_14685a998;
}



// FUNCTION 14079d420 FUN_14079d420 body=47 status=ok
// SIG undefined FUN_14079d420(void)

longlong FUN_14079d420(void)

{
  if (DAT_14685a990 == 0) {
    FUN_141786a30(&DAT_14685a990,&PTR_FUN_146241a60);
  }
  return DAT_14685a990;
}



// FUNCTION 14079d450 FUN_14079d450 body=53 status=ok
// SIG undefined FUN_14079d450(void)

void FUN_14079d450(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1440b85b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14079d490 FUN_14079d490 body=53 status=ok
// SIG undefined FUN_14079d490(void)

void FUN_14079d490(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1440b86c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14079d4d0 FUN_14079d4d0 body=53 status=ok
// SIG undefined FUN_14079d4d0(void)

void FUN_14079d4d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x108;
    *puVar1 = &PTR_FUN_1440b96e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14079d520 FUN_14079d520 body=53 status=ok
// SIG undefined FUN_14079d520(void)

void FUN_14079d520(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_1440b87e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14079d570 FUN_14079d570 body=53 status=ok
// SIG undefined FUN_14079d570(void)

void FUN_14079d570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2718;
    *puVar1 = &PTR_FUN_1440b9800;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14079d5b0 FUN_14079d5b0 body=162 status=ok
// SIG undefined FUN_14079d5b0(void)

longlong FUN_14079d5b0(void)

{
  if (DAT_14685ac60 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIUsableComponent",&DAT_14685ac60,FUN_140447710,0x1b0,
                  0x10000000,0,L"Engine",&LAB_14079e4d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_14685ac60;
}



// FUNCTION 14079d670 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGWeapon_Hook::GetPrivateStaticClass(void)

{
  if (DAT_14685aa60 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AINodeComponent",&DAT_14685aa60,FUN_14079ff60,0x790,0x10000000,
                  0,L"Engine",&LAB_14079e360,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_14685aa60;
}



// FUNCTION 14079d730 FUN_14079d730 body=162 status=ok
// SIG undefined FUN_14079d730(void)

longlong FUN_14079d730(void)

{
  if (DAT_14685ab08 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AISense_Proximity",&DAT_14685ab08,FUN_140447710,0x100,
                  0x10000004,0,L"Game",&LAB_14079e3c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c33440,&LAB_140447700,0);
  }
  return DAT_14685ab08;
}



// FUNCTION 14079d7e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoUIScrollingButtonArray::GetPrivateStaticClass(void)

{
  if (DAT_14685a9c0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AINode",&DAT_14685a9c0,
                  StaticRegisterNativesUSoUIScrollingButtonArray,0x498,0x10000000,0,L"Engine",
                  &LAB_14079e340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14685a9c0;
}



// FUNCTION 14079d890 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UTextureRenderTarget::StaticClass(void)

{
  if (DAT_14685ab68 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIStanceData",&DAT_14685ab68,FUN_140447710,0xb8,0x10000001,0,
                  L"Engine",FUN_14079e400,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079fec0,&LAB_140447700,0);
  }
  return DAT_14685ab68;
}



// FUNCTION 14079d960 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGMapIconAnimatorComponent::GetPrivateStaticClass(void)

{
  if (DAT_14685ab38 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AISense_Threat",&DAT_14685ab38,FUN_140447710,0x120,0x10000004,0
                  ,L"Game",&LAB_14079e3e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c33440,&LAB_140447700,0);
  }
  return DAT_14685ab38;
}



// FUNCTION 14079da10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoUICheckbox::GetPrivateStaticClass(void)

{
  if (DAT_14685acb8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIUseComponent",&DAT_14685acb8,
                  StaticRegisterNativesUSoUICheckbox,0x2d8,0x10000000,0,L"Engine",&LAB_14079e4e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_14685acb8;
}



// FUNCTION 14079dac0 FUN_14079dac0 body=47 status=ok
// SIG undefined FUN_14079dac0(void)

longlong FUN_14079dac0(void)

{
  if (DAT_14685a9b8 == 0) {
    FUN_141786440(&DAT_14685a9b8,&PTR_GetPrivateStaticClass_1440b7260);
  }
  return DAT_14685a9b8;
}



// FUNCTION 14079daf0 FUN_14079daf0 body=47 status=ok
// SIG undefined FUN_14079daf0(void)

longlong FUN_14079daf0(void)

{
  if (DAT_14685a9a8 == 0) {
    FUN_141786a30(&DAT_14685a9a8,&PTR_FUN_146241cd0);
  }
  return DAT_14685a9a8;
}



// FUNCTION 14079db20 FUN_14079db20 body=47 status=ok
// SIG undefined FUN_14079db20(void)

longlong FUN_14079db20(void)

{
  if (DAT_14685a9b0 == 0) {
    FUN_141786a30(&DAT_14685a9b0,&PTR_FUN_146241d90);
  }
  return DAT_14685a9b0;
}



// FUNCTION 14079db60 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryContext_Target::StaticClass(void)

{
  if (DAT_14685a9e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AINodeBlueprintLibrary",&DAT_14685a9e8,FUN_14079ff30,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_14685a9e8;
}



// FUNCTION 14079dc10 FUN_14079dc10 body=47 status=ok
// SIG undefined FUN_14079dc10(void)

longlong FUN_14079dc10(void)

{
  if (DAT_14685a9e0 == 0) {
    FUN_141786440(&DAT_14685a9e0,&PTR_StaticClass_1440b7620);
  }
  return DAT_14685a9e0;
}



// FUNCTION 14079dc40 FUN_14079dc40 body=47 status=ok
// SIG undefined FUN_14079dc40(void)

longlong FUN_14079dc40(void)

{
  if (DAT_14685a9c8 == 0) {
    FUN_141786a30(&DAT_14685a9c8,&PTR_FUN_146241f90);
  }
  return DAT_14685a9c8;
}



// FUNCTION 14079dc70 FUN_14079dc70 body=47 status=ok
// SIG undefined FUN_14079dc70(void)

longlong FUN_14079dc70(void)

{
  if (DAT_14685a9d0 == 0) {
    FUN_141786a30(&DAT_14685a9d0,&PTR_FUN_1462420e0);
  }
  return DAT_14685a9d0;
}



// FUNCTION 14079dca0 FUN_14079dca0 body=47 status=ok
// SIG undefined FUN_14079dca0(void)

longlong FUN_14079dca0(void)

{
  if (DAT_14685a9d8 == 0) {
    FUN_141786a30(&DAT_14685a9d8,&PTR_FUN_146242230);
  }
  return DAT_14685a9d8;
}



// FUNCTION 14079dcd0 FUN_14079dcd0 body=47 status=ok
// SIG undefined FUN_14079dcd0(void)

longlong FUN_14079dcd0(void)

{
  if (DAT_14685acb0 == 0) {
    FUN_141786440(&DAT_14685acb0,&PTR_GetPrivateStaticClass_1440b4180);
  }
  return DAT_14685acb0;
}



// FUNCTION 14079dd00 FUN_14079dd00 body=47 status=ok
// SIG undefined FUN_14079dd00(void)

longlong FUN_14079dd00(void)

{
  if (DAT_14685ac90 == 0) {
    FUN_141786a30(&DAT_14685ac90,&PTR_FUN_1462456d0);
  }
  return DAT_14685ac90;
}



// FUNCTION 14079dd30 FUN_14079dd30 body=47 status=ok
// SIG undefined FUN_14079dd30(void)

longlong FUN_14079dd30(void)

{
  if (DAT_14685ac98 == 0) {
    FUN_141786a30(&DAT_14685ac98,&PTR_FUN_1462457d0);
  }
  return DAT_14685ac98;
}



// FUNCTION 14079dd60 FUN_14079dd60 body=47 status=ok
// SIG undefined FUN_14079dd60(void)

longlong FUN_14079dd60(void)

{
  if (DAT_14685aca0 == 0) {
    FUN_141786a30(&DAT_14685aca0,&PTR_FUN_146245980);
  }
  return DAT_14685aca0;
}



// FUNCTION 14079dd90 FUN_14079dd90 body=47 status=ok
// SIG undefined FUN_14079dd90(void)

longlong FUN_14079dd90(void)

{
  if (DAT_14685aca8 == 0) {
    FUN_141786a30(&DAT_14685aca8,&PTR_FUN_146245a10);
  }
  return DAT_14685aca8;
}



// FUNCTION 14079ddc0 FUN_14079ddc0 body=53 status=ok
// SIG undefined FUN_14079ddc0(void)

void FUN_14079ddc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &PTR_FUN_1440b9918;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14079de10 FUN_14079de10 body=47 status=ok
// SIG undefined FUN_14079de10(void)

longlong FUN_14079de10(void)

{
  if (DAT_14685aa58 == 0) {
    FUN_141786440(&DAT_14685aa58,&PTR_GetPrivateStaticClass_1440b4630);
  }
  return DAT_14685aa58;
}



// FUNCTION 14079de40 FUN_14079de40 body=47 status=ok
// SIG undefined FUN_14079de40(void)

longlong FUN_14079de40(void)

{
  if (DAT_14685aa18 == 0) {
    FUN_141786a30(&DAT_14685aa18,&PTR_FUN_146242670);
  }
  return DAT_14685aa18;
}



// FUNCTION 14079de70 FUN_14079de70 body=47 status=ok
// SIG undefined FUN_14079de70(void)

longlong FUN_14079de70(void)

{
  if (DAT_14685aa20 == 0) {
    FUN_141786a30(&DAT_14685aa20,&PTR_FUN_146242730);
  }
  return DAT_14685aa20;
}



// FUNCTION 14079dea0 FUN_14079dea0 body=47 status=ok
// SIG undefined FUN_14079dea0(void)

longlong FUN_14079dea0(void)

{
  if (DAT_14685aa28 == 0) {
    FUN_141786a30(&DAT_14685aa28,&PTR_FUN_1462427f0);
  }
  return DAT_14685aa28;
}



// FUNCTION 14079ded0 FUN_14079ded0 body=47 status=ok
// SIG undefined FUN_14079ded0(void)

longlong FUN_14079ded0(void)

{
  if (DAT_14685aa30 == 0) {
    FUN_141786a30(&DAT_14685aa30,&PTR_FUN_146242870);
  }
  return DAT_14685aa30;
}



// FUNCTION 14079df00 FUN_14079df00 body=47 status=ok
// SIG undefined FUN_14079df00(void)

longlong FUN_14079df00(void)

{
  if (DAT_14685aa38 == 0) {
    FUN_141786a30(&DAT_14685aa38,&PTR_FUN_146242970);
  }
  return DAT_14685aa38;
}



// FUNCTION 14079df30 FUN_14079df30 body=47 status=ok
// SIG undefined FUN_14079df30(void)

longlong FUN_14079df30(void)

{
  if (DAT_14685aa40 == 0) {
    FUN_141786a30(&DAT_14685aa40,&PTR_FUN_146242a40);
  }
  return DAT_14685aa40;
}



// FUNCTION 14079df60 FUN_14079df60 body=47 status=ok
// SIG undefined FUN_14079df60(void)

longlong FUN_14079df60(void)

{
  if (DAT_14685aa48 == 0) {
    FUN_141786a30(&DAT_14685aa48,&PTR_FUN_146242b10);
  }
  return DAT_14685aa48;
}



// FUNCTION 14079df90 FUN_14079df90 body=47 status=ok
// SIG undefined FUN_14079df90(void)

longlong FUN_14079df90(void)

{
  if (DAT_14685aa50 == 0) {
    FUN_141786a30(&DAT_14685aa50,&PTR_FUN_146242b90);
  }
  return DAT_14685aa50;
}



// FUNCTION 14079dfc0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Sequence::StaticClass(void)

{
  if (DAT_14685aa88 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIPlanData",&DAT_14685aa88,FUN_140447710,0xc0,0x10000000,0,
                  L"Engine",&LAB_14079e370,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14685aa88;
}



// FUNCTION 14079e070 FUN_14079e070 body=53 status=ok
// SIG undefined FUN_14079e070(void)

void FUN_14079e070(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1440b7e88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14079e0b0 FUN_14079e0b0 body=643 status=ok
// SIG undefined FUN_14079e0b0(void)

int * FUN_14079e0b0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  iVar8 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  plVar9 = (longlong *)(*param_1 + (longlong)iVar11 * 0x28);
  FUN_14079e530(plVar9,param_3);
  *(undefined4 *)(plVar9 + 4) = 0xffffffff;
  bVar12 = false;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    lVar2 = *plVar9;
    iVar7 = iVar8;
    if (iVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          iVar7 = iVar5;
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x28) == lVar2) break;
          iVar5 = *(int *)(*param_1 + 0x20 + (longlong)iVar5 * 0x28);
          iVar7 = iVar8;
        } while (iVar5 != -1);
      }
    }
    bVar12 = iVar7 != -1;
    if (bVar12) {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + (longlong)iVar7 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar2 + (longlong)iVar7 * 0x28),plVar9,0x20);
      iVar11 = *param_2;
      bVar3 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar11;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + (longlong)iVar11 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar8 = (int)param_1[6];
      }
      *(int *)(lVar2 + 4 + (longlong)iVar11 * 0x28) = iVar8;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14079e30e;
    }
  }
  cVar4 = TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar4 == '\0') {
    uVar10 = (int)((ulonglong)*plVar9 >> 0x20) + (int)*plVar9 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar9 + 0x24) = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar9 + 4) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_14079e30e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 14079e400 FUN_14079e400 body=128 status=ok
// SIG undefined FUN_14079e400(void)

void FUN_14079e400(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined1 *)(puVar1 + 6) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x3f800000;
    *(undefined1 *)(puVar1 + 7) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
    *(undefined1 *)(puVar1 + 8) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0x4c) = 1;
    *(undefined4 *)(puVar1 + 10) = 0x3f800000;
    *(undefined1 *)(puVar1 + 0xb) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0x74) = 1;
    *(undefined4 *)(puVar1 + 0xf) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x10) = 0x45000000;
    puVar1[0x13] = 0;
    *puVar1 = &PTR_FUN_1440b9048;
  }
  return;
}



// FUNCTION 14079e4f0 InternalConstructor<UAITask_LockLogic> body=52 status=ok
// SIG undefined InternalConstructor<UAITask_LockLogic>(void)

void InternalConstructor<UAITask_LockLogic>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UAITask::UAITask(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440b93d0;
    puVar1[5] = &PTR_LAB_1440b96a0;
  }
  return;
}



// FUNCTION 14079e530 FUN_14079e530 body=150 status=ok
// SIG undefined FUN_14079e530(void)

undefined8 * FUN_14079e530(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = 0;
  iVar4 = *(int *)(param_2 + 3);
  lVar1 = param_2[2];
  *(int *)(param_1 + 3) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FRotator,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar4,0);
    puVar2 = (undefined4 *)param_1[2];
    puVar3 = (undefined4 *)(lVar1 + 8);
    do {
      *puVar2 = puVar3[-2];
      puVar2[1] = puVar3[-1];
      puVar2[2] = *puVar3;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 3;
      puVar3 = puVar3 + 3;
    } while (iVar4 != 0);
  }
  return param_1;
}



// FUNCTION 14079e5d0 FUN_14079e5d0 body=102 status=ok
// SIG undefined FUN_14079e5d0(void)

undefined8 * FUN_14079e5d0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0x101;
  FUN_142de2d20(param_1 + 2,0x437a0000,0);
  FUN_142de2d20(param_1 + 0x12,0x459c4000,0);
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  return param_1;
}



// FUNCTION 14079e640 FUN_14079e640 body=122 status=ok
// SIG undefined FUN_14079e640(void)

void FUN_14079e640(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x2708);
  iVar4 = *(int *)(param_1 + 10000);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1 + 8;
  }
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x260);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x4e;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar1 = *(longlong *)(param_1 + 0x2708);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14079e6c0 operator= body=113 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(undefined8 *param_1,undefined8 *param_2)

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
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 14079e740 FUN_14079e740 body=572 status=ok
// SIG undefined FUN_14079e740(void)

undefined8 * FUN_14079e740(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar9 = *(int *)(param_1 + 0x4e1);
  puVar5 = (undefined8 *)param_1[0x4e0];
  if ((undefined8 *)param_1[0x4e0] == (undefined8 *)0x0) {
    puVar5 = param_1;
  }
  if (iVar9 != 0) {
    plVar6 = puVar5 + 0x4c;
    do {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 0x4e;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = *(int *)(param_2 + 0x4e1);
  puVar5 = (undefined8 *)param_2[0x4e0];
  *(int *)(param_1 + 0x4e1) = iVar9;
  if ((iVar9 == 0) && (*(int *)((longlong)param_1 + 0x270c) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x270c) = 0;
  }
  else {
    FUN_14079fcc0(param_1,iVar9);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = param_2;
    }
    puVar2 = (undefined8 *)param_1[0x4e0];
    if ((undefined8 *)param_1[0x4e0] == (undefined8 *)0x0) {
      puVar2 = param_1;
    }
    if (iVar9 != 0) {
      lVar7 = (longlong)puVar5 - (longlong)puVar2;
      piVar10 = (int *)(puVar2 + 0x4d);
      do {
        *(undefined8 *)(piVar10 + -0x9a) = *puVar5;
        piVar10[-0x98] = *(int *)((longlong)piVar10 + lVar7 + -0x260);
        piVar10[-0x97] = *(int *)((longlong)piVar10 + lVar7 + -0x25c);
        piVar10[-0x96] = *(int *)((longlong)piVar10 + lVar7 + -600);
        piVar10[-0x95] = *(int *)((longlong)piVar10 + lVar7 + -0x254);
        piVar10[-0x94] = *(int *)((longlong)piVar10 + lVar7 + -0x250);
        piVar10[-2] = 0;
        piVar10[-1] = 0;
        iVar8 = *(int *)((longlong)piVar10 + lVar7);
        piVar11 = *(int **)((longlong)piVar10 + lVar7 + -8);
        *piVar10 = iVar8;
        if (iVar8 == 0) {
          piVar10[1] = 0;
        }
        else {
          FUN_140767c20(piVar10 + -0x92,iVar8,0);
          if (piVar11 == (int *)0x0) {
            piVar11 = (int *)(lVar7 + -0x248 + (longlong)piVar10);
          }
          piVar3 = *(int **)(piVar10 + -2);
          if (*(int **)(piVar10 + -2) == (int *)0x0) {
            piVar3 = piVar10 + -0x92;
          }
          lVar4 = (longlong)piVar11 - (longlong)piVar3;
          piVar3 = piVar3 + 8;
          do {
            iVar1 = *piVar11;
            piVar11 = piVar11 + 9;
            piVar3[-8] = iVar1;
            piVar3[-7] = *(int *)(lVar4 + -0x1c + (longlong)piVar3);
            piVar3[-6] = *(int *)(lVar4 + -0x18 + (longlong)piVar3);
            piVar3[-5] = *(int *)(lVar4 + -0x14 + (longlong)piVar3);
            *(undefined1 *)(piVar3 + -4) = *(undefined1 *)(lVar4 + -0x10 + (longlong)piVar3);
            piVar3[-3] = *(int *)(lVar4 + -0xc + (longlong)piVar3);
            piVar3[-2] = *(int *)(lVar4 + -8 + (longlong)piVar3);
            piVar3[-1] = *(int *)((longlong)piVar3 + lVar4 + -4);
            *piVar3 = *(int *)((longlong)piVar3 + lVar4);
            piVar3 = piVar3 + 9;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        puVar5 = puVar5 + 0x4e;
        piVar10 = piVar10 + 0x9c;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  return param_1;
}



// FUNCTION 14079e980 FUN_14079e980 body=785 status=ok
// SIG undefined FUN_14079e980(void)

undefined8 * FUN_14079e980(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  void *pvVar5;
  bool bVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  int *piVar13;
  undefined8 *local_res10;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  int local_68;
  undefined4 uStack_64;
  longlong *local_60;
  int iStack_58;
  uint uStack_54;
  uint *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  local_res10 = param_2;
  if (param_1 != param_2) {
    iVar10 = *(int *)(param_2 + 1);
    pvVar5 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar10;
    if ((iVar10 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar5,(longlong)iVar10 << 3);
    }
  }
  plVar1 = param_1 + 2;
  if (plVar1 != param_2 + 2) {
    iVar10 = *(int *)(param_1 + 3);
    if (iVar10 != 0) {
      lVar7 = *plVar1 + 8;
      do {
        if (*(longlong *)(lVar7 + 0x10) != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (lVar7);
        lVar7 = lVar7 + 0x38;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_2 + 3);
    lVar7 = param_2[2];
    *(int *)(param_1 + 3) = iVar10;
    if ((iVar10 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(plVar1,iVar10);
      piVar13 = (int *)*plVar1;
      if (iVar10 != 0) {
        piVar8 = piVar13 + 9;
        piVar11 = (int *)(lVar7 + 0x20);
        do {
          piVar2 = piVar8 + -7;
          *piVar13 = piVar11[-8];
          piVar8[-8] = piVar11[-7];
          piVar2[0] = 0;
          piVar2[1] = 0;
          FUN_140747320(piVar2,*(undefined8 *)(piVar11 + -6),piVar11[-4],0,0);
          piVar8[-3] = 0;
          piVar8[-2] = 0;
          iVar9 = *piVar11;
          pvVar5 = *(void **)(piVar11 + -2);
          piVar8[-1] = iVar9;
          if (iVar9 == 0) {
            *piVar8 = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (piVar8 + -3,iVar9,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(piVar8 + -3),pvVar5,(longlong)iVar9 << 3);
          }
          piVar13 = piVar13 + 0xe;
          *(char *)(piVar8 + 1) = (char)piVar11[2];
          piVar8[2] = piVar11[3];
          *(char *)(piVar8 + 3) = (char)piVar11[4];
          piVar2 = piVar11 + 5;
          piVar11 = piVar11 + 0xe;
          piVar8[4] = *piVar2;
          piVar8 = piVar8 + 0xe;
          iVar10 = iVar10 + -1;
          param_2 = local_res10;
        } while (iVar10 != 0);
      }
    }
  }
  plVar1 = param_2 + 5;
  plVar3 = param_1 + 5;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  if (plVar3 != plVar1) {
    TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
    ::Empty(plVar3,*(int *)(param_2 + 6) - *(int *)((longlong)param_2 + 0x5c));
    iVar10 = *(int *)(param_2 + 10);
    puStack_50 = (uint *)(param_2 + 7);
    local_88 = 0;
    uStack_84 = 1;
    local_78._4_4_ = 0;
    uStack_70 = 0;
    if (iVar10 != 0) {
      puVar12 = (uint *)param_2[9];
      if ((uint *)param_2[9] == (uint *)0x0) {
        puVar12 = puStack_50;
      }
      uVar4 = *puVar12;
      uStack_70 = 0;
      local_88 = 0;
      while (uVar4 == 0) {
        lVar7 = (longlong)local_88;
        uStack_70 = uStack_70 + 0x20;
        iVar9 = local_88 + 1;
        bVar6 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar9;
        if (bVar6) goto LAB_14079ebeb;
        uVar4 = puVar12[lVar7 + 1];
      }
      uStack_84 = -uVar4 & uVar4;
      iVar9 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      local_78._4_4_ = (uStack_70 - iVar9) + 0x1f;
      if (iVar10 < local_78._4_4_) {
LAB_14079ebeb:
        local_78._4_4_ = iVar10;
      }
    }
    uStack_48 = 0xffffffff;
    iStack_44 = local_78._4_4_;
    iStack_40 = uStack_70;
    uStack_3c = iStack_6c;
    iStack_58 = local_88;
    uStack_54 = uStack_84;
    iVar9 = local_78._4_4_;
    iStack_80 = local_88;
    uStack_7c = uStack_84;
    local_68 = uStack_70;
    uStack_64 = iStack_6c;
    bVar6 = local_78._4_4_ < iVar10;
    local_78 = puStack_50;
    local_60 = plVar1;
    uStack_70 = 0xffffffff;
    iStack_6c = iVar9;
    if (bVar6) {
      do {
        FUN_14079e0b0(plVar3,&local_res10,*plVar1 + (longlong)iStack_6c * 0x28,0);
        uStack_70 = uStack_70 & ~uStack_7c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
      } while (iStack_6c < (int)local_78[6]);
    }
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  return param_1;
}



// FUNCTION 14079eca0 FUN_14079eca0 body=52 status=ok
// SIG undefined FUN_14079eca0(void)

undefined8 FUN_14079eca0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14079ece0 FUN_14079ece0 body=63 status=ok
// SIG undefined FUN_14079ece0(void)

longlong FUN_14079ece0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14079ed20 FUN_14079ed20 body=52 status=ok
// SIG undefined FUN_14079ed20(void)

undefined8 FUN_14079ed20(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14079edc0 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FPrimitiveComponentInstanceData>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x130);
  FUN_14079e5d0(param_2);
  return;
}



// FUNCTION 14079ee80 FUN_14079ee80 body=203 status=ok
// SIG undefined FUN_14079ee80(void)

undefined8 FUN_14079ee80(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_3 + 4);
    do {
      *param_2 = puVar3[-1];
      puVar1 = (undefined8 *)(param_2 + 4);
      param_2[1] = *puVar3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar3 + 1);
      if (puVar1 != (undefined8 *)(puVar3 + 3)) {
        iVar2 = puVar3[5];
        _Src = *(void **)(puVar3 + 3);
        param_2[6] = iVar2;
        if ((iVar2 == 0) && (param_2[7] == 0)) {
          param_2[7] = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 4);
        }
      }
      puVar3 = puVar3 + 8;
      param_4 = param_4 + -1;
      param_2 = param_2 + 8;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14079ef50 FUN_14079ef50 body=71 status=ok
// SIG undefined FUN_14079ef50(void)

undefined1 FUN_14079ef50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_14079e980(param_2 + param_3,param_3);
      param_3 = param_3 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14079efa0 FUN_14079efa0 body=83 status=ok
// SIG undefined FUN_14079efa0(void)

undefined8 FUN_14079efa0(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = *(undefined4 *)(param_3 + (longlong)param_2);
      FUN_14079e740(param_2 + 2,param_3 + 8 + (longlong)param_2);
      param_2 = param_2 + 0x9c6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14079f1f0 FUN_14079f1f0 body=361 status=ok
// SIG undefined FUN_14079f1f0(void)

undefined8 FUN_14079f1f0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (param_4 != 0) {
    puVar7 = (undefined8 *)(param_3 + 0x3c);
    do {
      *param_2 = *(undefined8 *)((longlong)puVar7 + -0x3c);
      puVar1 = param_2 + 10;
      param_2[1] = *(undefined8 *)((longlong)puVar7 + -0x34);
      param_2[2] = *(undefined8 *)((longlong)puVar7 + -0x2c);
      uVar3 = *(undefined8 *)((longlong)puVar7 + -0x1c);
      param_2[3] = *(undefined8 *)((longlong)puVar7 + -0x24);
      param_2[4] = uVar3;
      param_2[5] = *(undefined8 *)((longlong)puVar7 + -0x14);
      *(undefined1 *)(param_2 + 6) = *(undefined1 *)((longlong)puVar7 + -0xc);
      *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(puVar7 + -1);
      *(undefined4 *)(param_2 + 7) = *(undefined4 *)((longlong)puVar7 + -4);
      *(undefined8 *)((longlong)param_2 + 0x3c) = *puVar7;
      *(undefined4 *)((longlong)param_2 + 0x44) = *(undefined4 *)(puVar7 + 1);
      *(undefined4 *)(param_2 + 9) = *(undefined4 *)((longlong)puVar7 + 0xc);
      if (puVar1 != (undefined8 *)((longlong)puVar7 + 0x14)) {
        iVar6 = *(int *)((longlong)puVar7 + 0x7c);
        puVar8 = *(undefined8 **)((longlong)puVar7 + 0x74);
        *(int *)(param_2 + 0x17) = iVar6;
        if ((iVar6 == 0) && (*(int *)((longlong)param_2 + 0xbc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xbc) = 0;
        }
        else {
          FUN_14079fd70(puVar1,iVar6);
          if (puVar8 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)((longlong)puVar7 + 0x14);
          }
          puVar4 = (undefined8 *)param_2[0x16];
          if ((undefined8 *)param_2[0x16] == (undefined8 *)0x0) {
            puVar4 = puVar1;
          }
          if (iVar6 != 0) {
            lVar5 = (longlong)puVar8 - (longlong)puVar4;
            puVar4 = puVar4 + 1;
            do {
              uVar2 = *(undefined4 *)puVar8;
              puVar8 = puVar8 + 3;
              *(undefined4 *)(puVar4 + -1) = uVar2;
              *(undefined4 *)((longlong)puVar4 + -4) =
                   *(undefined4 *)(lVar5 + -4 + (longlong)puVar4);
              *puVar4 = *(undefined8 *)((longlong)puVar4 + lVar5);
              *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((longlong)puVar4 + lVar5 + 8);
              *(undefined4 *)((longlong)puVar4 + 0xc) =
                   *(undefined4 *)((longlong)puVar4 + lVar5 + 0xc);
              puVar4 = puVar4 + 3;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
      }
      puVar7 = puVar7 + 0x18;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x18;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14079f360 Copy body=82 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSocketMapper>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = *(undefined8 *)(param_3 + (longlong)param_2);
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + 1,param_3 + 8 + (longlong)param_2);
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14079f650 FUN_14079f650 body=255 status=ok
// SIG undefined FUN_14079f650(void)

undefined8 FUN_14079f650(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  if (param_4 != 0) {
    plVar4 = (longlong *)(param_3 + 8);
    do {
      plVar1 = (longlong *)(param_2 + 2);
      *param_2 = (int)plVar4[-1];
      param_2[1] = *(undefined4 *)((longlong)plVar4 + -4);
      if (plVar1 != plVar4) {
        iVar5 = param_2[4];
        if (iVar5 != 0) {
          plVar3 = (longlong *)(*plVar1 + 8);
          do {
            if (*plVar3 != 0) {
              FMemory::Free();
            }
            plVar3 = plVar3 + 3;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_140747320(plVar1,*plVar4,(int)plVar4[1],param_2[5],0);
      }
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_2 + 6,plVar4 + 2);
      *(char *)(param_2 + 10) = (char)plVar4[4];
      param_2[0xb] = *(undefined4 *)((longlong)plVar4 + 0x24);
      *(char *)(param_2 + 0xc) = (char)plVar4[5];
      puVar2 = (undefined4 *)((longlong)plVar4 + 0x2c);
      plVar4 = plVar4 + 7;
      param_2[0xd] = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xe;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14079f790 FUN_14079f790 body=219 status=ok
// SIG undefined FUN_14079f790(void)

undefined8 FUN_14079f790(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  
  if (param_4 != 0) {
    plVar6 = (longlong *)(param_3 + 8);
    do {
      plVar1 = param_2 + 1;
      *param_2 = plVar6[-1];
      if (plVar1 != plVar6) {
        iVar5 = (int)plVar6[1];
        lVar2 = *plVar6;
        *(int *)(param_2 + 2) = iVar5;
        if ((iVar5 == 0) && (*(int *)((longlong)param_2 + 0x14) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          TArray<FRotator,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
          if (iVar5 != 0) {
            puVar3 = (undefined4 *)(lVar2 + 8);
            puVar4 = (undefined4 *)*plVar1;
            do {
              *puVar4 = puVar3[-2];
              puVar4[1] = puVar3[-1];
              puVar4[2] = *puVar3;
              iVar5 = iVar5 + -1;
              puVar3 = puVar3 + 3;
              puVar4 = puVar4 + 3;
            } while (iVar5 != 0);
          }
        }
      }
      plVar6 = plVar6 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14079f8b0 FUN_14079f8b0 body=204 status=ok
// SIG undefined FUN_14079f8b0(void)

undefined8 FUN_14079f8b0(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  if (param_4 != 0) {
    piVar6 = (int *)(param_3 + 8);
    do {
      if (param_2 != piVar6 + -2) {
        iVar5 = *piVar6;
        puVar3 = *(undefined4 **)(piVar6 + -2);
        param_2[2] = iVar5;
        if ((iVar5 == 0) && (param_2[3] == 0)) {
          param_2[3] = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(param_2,iVar5);
          puVar4 = *(undefined4 **)param_2;
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            uVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            *puVar4 = uVar2;
            puVar4 = puVar4 + 1;
          }
        }
      }
      param_2[4] = piVar6[2];
      piVar1 = piVar6 + 3;
      piVar6 = piVar6 + 6;
      param_2[5] = *piVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 6;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14079f9c0 Destruct body=37 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FEQSParametrizedQueryExecutionRequest>::Destruct
               (undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_2 + 8);
  return;
}



// FUNCTION 14079f9f0 FUN_14079f9f0 body=55 status=ok
// SIG undefined FUN_14079f9f0(void)

void FUN_14079f9f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14685a8d0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a8d0 = GetStaticEnum(FUN_1407a0800,uVar1,L"EPlanMemberReplacement");
  }
  return;
}



// FUNCTION 14079fa30 FUN_14079fa30 body=55 status=ok
// SIG undefined FUN_14079fa30(void)

void FUN_14079fa30(void)

{
  undefined8 uVar1;
  
  if (DAT_14685a8e0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a8e0 = GetStaticEnum(FUN_1407a0830,uVar1,L"EPlanStage");
  }
  return;
}



// FUNCTION 14079fa70 FUN_14079fa70 body=55 status=ok
// SIG undefined FUN_14079fa70(void)

void FUN_14079fa70(void)

{
  undefined8 uVar1;
  
  if (DAT_14685a8d8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a8d8 = GetStaticEnum(FUN_1407a0860,uVar1,L"EPlanValidityCode");
  }
  return;
}



// FUNCTION 14079fab0 GetWaterWaves body=4 status=ok
// SIG undefined GetWaterWaves(void)

undefined8 UWaterWaves::GetWaterWaves(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 14079fac0 FUN_14079fac0 body=6 status=ok
// SIG undefined FUN_14079fac0(void)

undefined8 FUN_14079fac0(void)

{
  return 0x9925100a;
}



// FUNCTION 14079fad0 FUN_14079fad0 body=6 status=ok
// SIG undefined FUN_14079fad0(void)

undefined8 FUN_14079fad0(void)

{
  return 0xb0dae765;
}



// FUNCTION 14079fae0 FUN_14079fae0 body=6 status=ok
// SIG undefined FUN_14079fae0(void)

undefined8 FUN_14079fae0(void)

{
  return 0xa93369f8;
}



// FUNCTION 14079faf0 FUN_14079faf0 body=6 status=ok
// SIG undefined FUN_14079faf0(void)

undefined8 FUN_14079faf0(void)

{
  return 0xca7d4a44;
}



// FUNCTION 14079fb00 FUN_14079fb00 body=6 status=ok
// SIG undefined FUN_14079fb00(void)

undefined8 FUN_14079fb00(void)

{
  return 0x14e1dc06;
}



// FUNCTION 14079fb10 FUN_14079fb10 body=6 status=ok
// SIG undefined FUN_14079fb10(void)

undefined8 FUN_14079fb10(void)

{
  return 0xa6114cec;
}



// FUNCTION 14079fb20 FUN_14079fb20 body=6 status=ok
// SIG undefined FUN_14079fb20(void)

undefined8 FUN_14079fb20(void)

{
  return 0xb8c4a54d;
}



// FUNCTION 14079fb30 FUN_14079fb30 body=6 status=ok
// SIG undefined FUN_14079fb30(void)

undefined8 FUN_14079fb30(void)

{
  return 0xabca0771;
}



// FUNCTION 14079fb40 FUN_14079fb40 body=6 status=ok
// SIG undefined FUN_14079fb40(void)

undefined8 FUN_14079fb40(void)

{
  return 0xefad51b7;
}



// FUNCTION 14079fb50 FUN_14079fb50 body=6 status=ok
// SIG undefined FUN_14079fb50(void)

undefined8 FUN_14079fb50(void)

{
  return 0xd197a91a;
}



// FUNCTION 14079fb60 FUN_14079fb60 body=6 status=ok
// SIG undefined FUN_14079fb60(void)

undefined8 FUN_14079fb60(void)

{
  return 0x872eca10;
}



// FUNCTION 14079fb70 FUN_14079fb70 body=6 status=ok
// SIG undefined FUN_14079fb70(void)

undefined8 FUN_14079fb70(void)

{
  return 0xa401d2b2;
}



// FUNCTION 14079fb80 FUN_14079fb80 body=6 status=ok
// SIG undefined FUN_14079fb80(void)

undefined8 FUN_14079fb80(void)

{
  return 0x942c7d3a;
}



// FUNCTION 14079fb90 FUN_14079fb90 body=6 status=ok
// SIG undefined FUN_14079fb90(void)

undefined8 FUN_14079fb90(void)

{
  return 0x53e98715;
}



// FUNCTION 14079fba0 FUN_14079fba0 body=6 status=ok
// SIG undefined FUN_14079fba0(void)

undefined8 FUN_14079fba0(void)

{
  return 0x2e790746;
}



// FUNCTION 14079fc50 ResizeForCopy body=111 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<int,FDefaultAllocator>::ResizeForCopy(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 2,0);
    iVar1 = (int)(uVar2 >> 2);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if ((iVar1 != param_3) && ((*param_1 != 0 || (iVar1 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 2,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}



// FUNCTION 14079fcc0 FUN_14079fcc0 body=176 status=ok
// SIG undefined FUN_14079fcc0(void)

void FUN_14079fcc0(longlong param_1,uint param_2,uint param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      uVar4 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x270,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      lVar5 = SUB168(ZEXT816(0xa41a41a41a41a41b) * auVar1,8);
      uVar4 = (uint)((uVar2 - lVar5 >> 1) + lVar5 >> 9);
      if ((int)uVar4 < (int)param_2) {
        uVar4 = 0x7fffffff;
      }
    }
  }
  if (uVar4 != param_3) {
    lVar5 = *(longlong *)(param_1 + 0x2700);
    if (uVar4 < 0x11) {
      if (lVar5 == 0) goto LAB_14079fd5a;
      lVar6 = 0;
    }
    else {
      if ((lVar5 == 0) && (uVar4 == 0)) goto LAB_14079fd5a;
      lVar6 = (longlong)(int)uVar4 * 0x270;
    }
    uVar3 = FMemory::Realloc(lVar5,lVar6,0);
    *(undefined8 *)(param_1 + 0x2700) = uVar3;
  }
LAB_14079fd5a:
  *(uint *)(param_1 + 0x270c) = uVar4;
  return;
}



// FUNCTION 14079fd70 FUN_14079fd70 body=160 status=ok
// SIG undefined FUN_14079fd70(void)

void FUN_14079fd70(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      uVar4 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x18,0);
      uVar4 = (uint)(uVar2 / 0x18);
      if ((int)uVar4 < (int)param_2) {
        uVar4 = 0x7fffffff;
      }
    }
  }
  if (uVar4 != param_3) {
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (uVar4 < 5) {
      if (lVar1 == 0) goto LAB_14079fdfd;
      lVar5 = 0;
    }
    else {
      if ((lVar1 == 0) && (uVar4 == 0)) goto LAB_14079fdfd;
      lVar5 = (longlong)(int)uVar4 * 0x18;
    }
    uVar3 = FMemory::Realloc(lVar1,lVar5,0);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
  }
LAB_14079fdfd:
  *(uint *)(param_1 + 0x6c) = uVar4;
  return;
}



// FUNCTION 14079fe10 Serialize body=112 status=ok
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
  FUN_14076aec0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 14079fe80 thunk_FUN_142c33440 body=5 status=ok
// SIG undefined thunk_FUN_142c33440(void)

void thunk_FUN_142c33440(void)

{
  FUN_142c33440();
  return;
}



// FUNCTION 14079fe90 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

void UAISenseConfig::StaticClass(void)

{
  StaticClass();
  return;
}



// FUNCTION 14079fed0 StaticRegisterNativesUSoUIScrollingButtonArray body=34 status=ok
// SIG undefined StaticRegisterNativesUSoUIScrollingButtonArray(void)

void USoUIScrollingButtonArray::StaticRegisterNativesUSoUIScrollingButtonArray(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnPawnArrivedNodeCB_1440b7e38,2);
  return;
}



// FUNCTION 14079ff00 FUN_14079ff00 body=34 status=ok
// SIG undefined FUN_14079ff00(void)

void FUN_14079ff00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14079cc20();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnThreatActorDied_1440b7e28,1);
  return;
}



// FUNCTION 14079ff30 FUN_14079ff30 body=34 status=ok
// SIG undefined FUN_14079ff30(void)

void FUN_14079ff30(void)

{
  undefined8 uVar1;
  
  uVar1 = UEnvQueryContext_Target::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ChooseRandomNode_1440b7e58,3);
  return;
}



// FUNCTION 14079ff60 FUN_14079ff60 body=34 status=ok
// SIG undefined FUN_14079ff60(void)

void FUN_14079ff60(void)

{
  undefined8 uVar1;
  
  uVar1 = AUGWeapon_Hook::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BreakLinkTo_1440b80c0,8);
  return;
}



// FUNCTION 14079ff90 FUN_14079ff90 body=34 status=ok
// SIG undefined FUN_14079ff90(void)

void FUN_14079ff90(void)

{
  undefined8 uVar1;
  
  uVar1 = UEnvQueryContext_Target::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AICanCommunicate_1440b92e0,0xf);
  return;
}



// FUNCTION 14079ffc0 StaticRegisterNativesUSoUICheckbox body=34 status=ok
// SIG undefined StaticRegisterNativesUSoUICheckbox(void)

void USoUICheckbox::StaticRegisterNativesUSoUICheckbox(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetCurrentObject_1440b9a30,4);
  return;
}



// FUNCTION 14079fff0 FUN_14079fff0 body=82 status=ok
// SIG undefined FUN_14079fff0(void)

void FUN_14079fff0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685a9f8 == 0) {
    uVar1 = FUN_14079fac0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685a9f8 = GetStaticStruct(FUN_1407a0890,uVar2,L"AINodeLink",0x20,uVar1);
  }
  return;
}



// FUNCTION 1407a0050 FUN_1407a0050 body=82 status=ok
// SIG undefined FUN_1407a0050(void)

void FUN_1407a0050(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685aa08 == 0) {
    uVar1 = FUN_14079fad0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685aa08 = GetStaticStruct(FUN_1407a08c0,uVar2,L"AINodeSmartObjectData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1407a00b0 FUN_1407a00b0 body=82 status=ok
// SIG undefined FUN_1407a00b0(void)

void FUN_1407a00b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685aaa0 == 0) {
    uVar1 = FUN_14079fae0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685aaa0 = GetStaticStruct(FUN_1407a08f0,uVar2,L"AIPlanManager",0x80,uVar1);
  }
  return;
}



// FUNCTION 1407a0110 FUN_1407a0110 body=82 status=ok
// SIG undefined FUN_1407a0110(void)

void FUN_1407a0110(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685ac48 == 0) {
    uVar1 = FUN_14079faf0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685ac48 = GetStaticStruct(FUN_1407a0920,uVar2,L"AITicketManager",0x2718,uVar1);
  }
  return;
}



// FUNCTION 1407a0170 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FEdGraphSchemaAction_NewNode::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685ac28 == 0) {
    uVar1 = FUN_14079fb00();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685ac28 = GetStaticStruct(FUN_1407a0950,uVar2,L"AITicketUseData",0x108,uVar1);
  }
  return;
}



// FUNCTION 1407a01d0 FUN_1407a01d0 body=82 status=ok
// SIG undefined FUN_1407a01d0(void)

void FUN_1407a01d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685ac80 == 0) {
    uVar1 = FUN_14079fb10();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685ac80 = GetStaticStruct(FUN_1407a0980,uVar2,L"ActionCooldownInfo",0x18,uVar1);
  }
  return;
}



// FUNCTION 1407a0230 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FRootMotionSource_MoveToForce::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685ac70 == 0) {
    uVar1 = FUN_14079fb20();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685ac70 = GetStaticStruct(FUN_1407a09b0,uVar2,L"ActionUseState",0xc0,uVar1);
  }
  return;
}



// FUNCTION 1407a0290 FUN_1407a0290 body=82 status=ok
// SIG undefined FUN_1407a0290(void)

void FUN_1407a0290(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685aac0 == 0) {
    uVar1 = FUN_14079fb30();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685aac0 = GetStaticStruct(FUN_1407a09e0,uVar2,L"PlanRoleMapping",0x18,uVar1);
  }
  return;
}



// FUNCTION 1407a02f0 FUN_1407a02f0 body=82 status=ok
// SIG undefined FUN_1407a02f0(void)

void FUN_1407a02f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685aa70 == 0) {
    uVar1 = FUN_14079fb40();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685aa70 = GetStaticStruct(FUN_1407a0a10,uVar2,L"PlanRoleRequirements",0x130,uVar1);
  }
  return;
}



// FUNCTION 1407a0350 FUN_1407a0350 body=82 status=ok
// SIG undefined FUN_1407a0350(void)

void FUN_1407a0350(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685aab0 == 0) {
    uVar1 = FUN_14079fb50();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685aab0 = GetStaticStruct(FUN_1407a0a40,uVar2,L"PlanState",0x38,uVar1);
  }
  return;
}



// FUNCTION 1407a03b0 FUN_1407a03b0 body=82 status=ok
// SIG undefined FUN_1407a03b0(void)

void FUN_1407a03b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685aaf0 == 0) {
    uVar1 = FUN_14079fb60();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685aaf0 = GetStaticStruct(FUN_1407a0a70,uVar2,L"ProximitySource",0xc,uVar1);
  }
  return;
}



// FUNCTION 1407a0410 FUN_1407a0410 body=82 status=ok
// SIG undefined FUN_1407a0410(void)

void FUN_1407a0410(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685aad0 == 0) {
    uVar1 = FUN_14079fb70();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685aad0 = GetStaticStruct(FUN_1407a0aa0,uVar2,L"RoleCandidates",0x18,uVar1);
  }
  return;
}



// FUNCTION 1407a0470 FUN_1407a0470 body=82 status=ok
// SIG undefined FUN_1407a0470(void)

void FUN_1407a0470(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685aae0 == 0) {
    uVar1 = FUN_14079fb80();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685aae0 = GetStaticStruct(FUN_1407a0ad0,uVar2,L"RoleController",0xc,uVar1);
  }
  return;
}



// FUNCTION 1407a04d0 FUN_1407a04d0 body=82 status=ok
// SIG undefined FUN_1407a04d0(void)

void FUN_1407a04d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685ab10 == 0) {
    uVar1 = FUN_14079fb90();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685ab10 = GetStaticStruct(FUN_1407a0b00,uVar2,L"ThreatSource",0xc,uVar1);
  }
  return;
}



// FUNCTION 1407a0530 FUN_1407a0530 body=82 status=ok
// SIG undefined FUN_1407a0530(void)

void FUN_1407a0530(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685ab20 == 0) {
    uVar1 = FUN_14079fba0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685ab20 = GetStaticStruct(FUN_1407a0b30,uVar2,L"ThreatTerritory",0x18,uVar1);
  }
  return;
}



// FUNCTION 1407a0590 FUN_1407a0590 body=47 status=ok
// SIG undefined FUN_1407a0590(void)

longlong FUN_1407a0590(void)

{
  if (DAT_14685aa80 == 0) {
    FUN_141786440(&DAT_14685aa80,&PTR_StaticClass_1440b4fe0);
  }
  return DAT_14685aa80;
}



// FUNCTION 1407a05c0 FUN_1407a05c0 body=47 status=ok
// SIG undefined FUN_1407a05c0(void)

longlong FUN_1407a05c0(void)

{
  if (DAT_14685ab40 == 0) {
    FUN_141786440(&DAT_14685ab40,&PTR_StaticClass_1440b5300);
  }
  return DAT_14685ab40;
}



// FUNCTION 1407a05f0 FUN_1407a05f0 body=47 status=ok
// SIG undefined FUN_1407a05f0(void)

longlong FUN_1407a05f0(void)

{
  if (DAT_14685ab50 == 0) {
    FUN_141786440(&DAT_14685ab50,&PTR_FUN_1440b5970);
  }
  return DAT_14685ab50;
}



// FUNCTION 1407a0620 FUN_1407a0620 body=47 status=ok
// SIG undefined FUN_1407a0620(void)

longlong FUN_1407a0620(void)

{
  if (DAT_14685ab00 == 0) {
    FUN_141786440(&DAT_14685ab00,&PTR_FUN_1440b7090);
  }
  return DAT_14685ab00;
}



// FUNCTION 1407a0650 FUN_1407a0650 body=47 status=ok
// SIG undefined FUN_1407a0650(void)

longlong FUN_1407a0650(void)

{
  if (DAT_14685ab30 == 0) {
    FUN_141786440(&DAT_14685ab30,&PTR_GetPrivateStaticClass_1440b4e70);
  }
  return DAT_14685ab30;
}



// FUNCTION 1407a0680 FUN_1407a0680 body=47 status=ok
// SIG undefined FUN_1407a0680(void)

longlong FUN_1407a0680(void)

{
  if (DAT_14685ab60 == 0) {
    FUN_141786440(&DAT_14685ab60,&PTR_StaticClass_1440b6ee0);
  }
  return DAT_14685ab60;
}



// FUNCTION 1407a06b0 FUN_1407a06b0 body=47 status=ok
// SIG undefined FUN_1407a06b0(void)

longlong FUN_1407a06b0(void)

{
  if (DAT_14685abf8 == 0) {
    FUN_141786440(&DAT_14685abf8,&PTR_StaticClass_1440b5120);
  }
  return DAT_14685abf8;
}



// FUNCTION 1407a06e0 FUN_1407a06e0 body=47 status=ok
// SIG undefined FUN_1407a06e0(void)

longlong FUN_1407a06e0(void)

{
  if (DAT_14685ac08 == 0) {
    FUN_141786440(&DAT_14685ac08,&PTR_StaticClass_1440b5850);
  }
  return DAT_14685ac08;
}



// FUNCTION 1407a0710 FUN_1407a0710 body=47 status=ok
// SIG undefined FUN_1407a0710(void)

longlong FUN_1407a0710(void)

{
  if (DAT_14685ac38 == 0) {
    FUN_141786440(&DAT_14685ac38,&PTR_FUN_1440b6540);
  }
  return DAT_14685ac38;
}



// FUNCTION 1407a0740 FUN_1407a0740 body=47 status=ok
// SIG undefined FUN_1407a0740(void)

longlong FUN_1407a0740(void)

{
  if (DAT_14685ac58 == 0) {
    FUN_141786440(&DAT_14685ac58,&PTR_FUN_1440b6d60);
  }
  return DAT_14685ac58;
}



// FUNCTION 1407a0770 FUN_1407a0770 body=47 status=ok
// SIG undefined FUN_1407a0770(void)

longlong FUN_1407a0770(void)

{
  if (DAT_14685ac18 == 0) {
    FUN_141786440(&DAT_14685ac18,&PTR_FUN_1440b5dc0);
  }
  return DAT_14685ac18;
}



// FUNCTION 1407a07a0 FUN_1407a07a0 body=47 status=ok
// SIG undefined FUN_1407a07a0(void)

longlong FUN_1407a07a0(void)

{
  if (DAT_14685a9f0 == 0) {
    FUN_141786a30(&DAT_14685a9f0,&PTR_Z_Construct_UPackage__Script_Engine_146242320);
  }
  return DAT_14685a9f0;
}



// FUNCTION 1407a07d0 FUN_1407a07d0 body=47 status=ok
// SIG undefined FUN_1407a07d0(void)

longlong FUN_1407a07d0(void)

{
  if (DAT_14685ac68 == 0) {
    FUN_141786a30(&DAT_14685ac68,&PTR_Z_Construct_UPackage__Script_Engine_146245370);
  }
  return DAT_14685ac68;
}



// FUNCTION 1407a0800 FUN_1407a0800 body=47 status=ok
// SIG undefined FUN_1407a0800(void)

longlong FUN_1407a0800(void)

{
  if (DAT_14685aa68 == 0) {
    FUN_1417866a0(&DAT_14685aa68,&PTR_Z_Construct_UPackage__Script_Engine_146245d90);
  }
  return DAT_14685aa68;
}



// FUNCTION 1407a0830 FUN_1407a0830 body=47 status=ok
// SIG undefined FUN_1407a0830(void)

longlong FUN_1407a0830(void)

{
  if (DAT_14685aa98 == 0) {
    FUN_1417866a0(&DAT_14685aa98,&PTR_Z_Construct_UPackage__Script_Engine_146245e30);
  }
  return DAT_14685aa98;
}



// FUNCTION 1407a0860 FUN_1407a0860 body=47 status=ok
// SIG undefined FUN_1407a0860(void)

longlong FUN_1407a0860(void)

{
  if (DAT_14685aa90 == 0) {
    FUN_1417866a0(&DAT_14685aa90,&PTR_Z_Construct_UPackage__Script_Engine_146245de0);
  }
  return DAT_14685aa90;
}



// FUNCTION 1407a0890 FUN_1407a0890 body=47 status=ok
// SIG undefined FUN_1407a0890(void)

longlong FUN_1407a0890(void)

{
  if (DAT_14685aa00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685aa00,&PTR_Z_Construct_UPackage__Script_Engine_146242490);
  }
  return DAT_14685aa00;
}



// FUNCTION 1407a08c0 FUN_1407a08c0 body=47 status=ok
// SIG undefined FUN_1407a08c0(void)

longlong FUN_1407a08c0(void)

{
  if (DAT_14685aa10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685aa10,&PTR_Z_Construct_UPackage__Script_Engine_146242590);
  }
  return DAT_14685aa10;
}



// FUNCTION 1407a08f0 FUN_1407a08f0 body=47 status=ok
// SIG undefined FUN_1407a08f0(void)

longlong FUN_1407a08f0(void)

{
  if (DAT_14685aaa8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685aaa8,&PTR_Z_Construct_UPackage__Script_Engine_1462436c0);
  }
  return DAT_14685aaa8;
}



// FUNCTION 1407a0920 FUN_1407a0920 body=47 status=ok
// SIG undefined FUN_1407a0920(void)

longlong FUN_1407a0920(void)

{
  if (DAT_14685ac50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ac50,&PTR_Z_Construct_UPackage__Script_Engine_146245140);
  }
  return DAT_14685ac50;
}



// FUNCTION 1407a0950 FUN_1407a0950 body=47 status=ok
// SIG undefined FUN_1407a0950(void)

longlong FUN_1407a0950(void)

{
  if (DAT_14685ac30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ac30,&PTR_Z_Construct_UPackage__Script_Engine_146244fc0);
  }
  return DAT_14685ac30;
}



// FUNCTION 1407a0980 FUN_1407a0980 body=47 status=ok
// SIG undefined FUN_1407a0980(void)

longlong FUN_1407a0980(void)

{
  if (DAT_14685ac88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ac88,&PTR_Z_Construct_UPackage__Script_Engine_146245640);
  }
  return DAT_14685ac88;
}



// FUNCTION 1407a09b0 FUN_1407a09b0 body=47 status=ok
// SIG undefined FUN_1407a09b0(void)

longlong FUN_1407a09b0(void)

{
  if (DAT_14685ac78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ac78,&PTR_Z_Construct_UPackage__Script_Engine_146245530);
  }
  return DAT_14685ac78;
}



// FUNCTION 1407a09e0 FUN_1407a09e0 body=47 status=ok
// SIG undefined FUN_1407a09e0(void)

longlong FUN_1407a09e0(void)

{
  if (DAT_14685aac8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685aac8,&PTR_Z_Construct_UPackage__Script_Engine_146243760);
  }
  return DAT_14685aac8;
}



// FUNCTION 1407a0a10 FUN_1407a0a10 body=47 status=ok
// SIG undefined FUN_1407a0a10(void)

longlong FUN_1407a0a10(void)

{
  if (DAT_14685aa78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685aa78,&PTR_Z_Construct_UPackage__Script_Engine_1462433e0);
  }
  return DAT_14685aa78;
}



// FUNCTION 1407a0a40 FUN_1407a0a40 body=47 status=ok
// SIG undefined FUN_1407a0a40(void)

longlong FUN_1407a0a40(void)

{
  if (DAT_14685aab8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685aab8,&PTR_Z_Construct_UPackage__Script_Engine_146243710);
  }
  return DAT_14685aab8;
}



// FUNCTION 1407a0a70 FUN_1407a0a70 body=47 status=ok
// SIG undefined FUN_1407a0a70(void)

longlong FUN_1407a0a70(void)

{
  if (DAT_14685aaf8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685aaf8,&PTR_Z_Construct_UPackage__Script_Engine_146243850);
  }
  return DAT_14685aaf8;
}



// FUNCTION 1407a0aa0 FUN_1407a0aa0 body=47 status=ok
// SIG undefined FUN_1407a0aa0(void)

longlong FUN_1407a0aa0(void)

{
  if (DAT_14685aad8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685aad8,&PTR_Z_Construct_UPackage__Script_Engine_1462437b0);
  }
  return DAT_14685aad8;
}



// FUNCTION 1407a0ad0 FUN_1407a0ad0 body=47 status=ok
// SIG undefined FUN_1407a0ad0(void)

longlong FUN_1407a0ad0(void)

{
  if (DAT_14685aae8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685aae8,&PTR_Z_Construct_UPackage__Script_Engine_146243800);
  }
  return DAT_14685aae8;
}



// FUNCTION 1407a0b00 FUN_1407a0b00 body=47 status=ok
// SIG undefined FUN_1407a0b00(void)

longlong FUN_1407a0b00(void)

{
  if (DAT_14685ab18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ab18,&PTR_Z_Construct_UPackage__Script_Engine_1462438c0);
  }
  return DAT_14685ab18;
}



// FUNCTION 1407a0b30 FUN_1407a0b30 body=47 status=ok
// SIG undefined FUN_1407a0b30(void)

longlong FUN_1407a0b30(void)

{
  if (DAT_14685ab28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ab28,&PTR_Z_Construct_UPackage__Script_Engine_146243910);
  }
  return DAT_14685ab28;
}



// FUNCTION 1407a0b60 execPhysics__UpdateCharacterCameraToRagdollLocation body=238 status=ok
// SIG undefined execPhysics__UpdateCharacterCameraToRagdollLocation(void)

void UVictoryBPFunctionLibrary::execPhysics__UpdateCharacterCameraToRagdollLocation
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
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
  uVar1 = FUN_140773f10(local_res20,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a0c50 FUN_1407a0c50 body=128 status=ok
// SIG undefined FUN_1407a0c50(void)

void FUN_1407a0c50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = AIndianaPlayerController::ToggleCharacterSummary(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a0cd0 FUN_1407a0cd0 body=112 status=ok
// SIG undefined FUN_1407a0cd0(void)

void FUN_1407a0cd0(undefined8 param_1,longlong param_2)

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
  FUN_1407742f0(local_res10[0]);
  return;
}



// FUNCTION 1407a0d40 FUN_1407a0d40 body=175 status=ok
// SIG undefined FUN_1407a0d40(void)

void FUN_1407a0d40(undefined8 param_1,longlong param_2)

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
  FUN_140774550(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1407a0df0 execSetUpdateScriptConstant body=316 status=ok
// SIG undefined execSetUpdateScriptConstant(void)

void UNiagaraFunctionLibrary::execSetUpdateScriptConstant(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_28;
  local_18 = local_30;
  FUN_140774700(local_38,local_res20,local_res10[0],&local_18);
  return;
}



// FUNCTION 1407a0f30 FUN_1407a0f30 body=180 status=ok
// SIG undefined FUN_1407a0f30(void)

void FUN_1407a0f30(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
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
  FUN_1407748d0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1407a0ff0 FUN_1407a0ff0 body=175 status=ok
// SIG undefined FUN_1407a0ff0(void)

void FUN_1407a0ff0(undefined8 param_1,longlong param_2)

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
  FUN_140774a70(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1407a10a0 FUN_1407a10a0 body=272 status=ok
// SIG undefined FUN_1407a10a0(void)

void FUN_1407a10a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18;
  undefined2 local_10;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_18 = 0;
  local_10 = 0xff00;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_140774aa0(local_res20,puVar1,local_res10[0]);
  return;
}



// FUNCTION 1407a11b0 FUN_1407a11b0 body=307 status=ok
// SIG undefined FUN_1407a11b0(void)

void FUN_1407a11b0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
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
  FUN_140775020(local_10,local_18,local_res10[0],local_res20[0]);
  return;
}



// FUNCTION 1407a12f0 FUN_1407a12f0 body=143 status=ok
// SIG undefined FUN_1407a12f0(void)

void FUN_1407a12f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1407528a0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a1380 FUN_1407a1380 body=268 status=ok
// SIG undefined FUN_1407a1380(void)

void FUN_1407a1380(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined1 local_18 [16];
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar2 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140775e50(local_res18,local_res10[0],puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a1490 FUN_1407a1490 body=192 status=ok
// SIG undefined FUN_1407a1490(void)

void FUN_1407a1490(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  uVar1 = FUN_140754550(local_res18,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a1550 FUN_1407a1550 body=196 status=ok
// SIG undefined FUN_1407a1550(void)

void FUN_1407a1550(undefined8 param_1,longlong param_2)

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
  FUN_140756d60(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1407a1620 FUN_1407a1620 body=289 status=ok
// SIG undefined FUN_1407a1620(void)

void FUN_1407a1620(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int local_res10 [2];
  undefined8 local_res20;
  longlong local_18 [2];
  
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
  local_res20 = 0;
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
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
  FUN_140758250(plVar1,local_res20,local_res10[0] != 0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407a1750 FUN_1407a1750 body=265 status=ok
// SIG undefined FUN_1407a1750(void)

void FUN_1407a1750(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int local_res10 [2];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  puVar2 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
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
  uVar1 = FUN_140758900(local_res18[0],puVar2,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a1860 execK2_DirectionBetweenSockets body=255 status=ok
// SIG undefined execK2_DirectionBetweenSockets(void)

void UKismetAnimationLibrary::execK2_DirectionBetweenSockets
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_28 [16];
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  puVar1 = (undefined8 *)FUN_140778ce0(local_28,local_res20,local_res18,local_res10);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1407a1960 FUN_1407a1960 body=44 status=ok
// SIG undefined FUN_1407a1960(void)

void FUN_1407a1960(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14075c800();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a1990 FUN_1407a1990 body=142 status=ok
// SIG undefined FUN_1407a1990(void)

void FUN_1407a1990(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_14075edf0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a1a20 FUN_1407a1a20 body=43 status=ok
// SIG undefined FUN_1407a1a20(void)

void FUN_1407a1a20(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UBaseDynamicMeshComponent::GetNumMaterials();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a1a50 FUN_1407a1a50 body=195 status=ok
// SIG undefined FUN_1407a1a50(void)

void FUN_1407a1a50(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  uVar1 = FUN_14077b910(local_res18,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a1b20 FUN_1407a1b20 body=253 status=ok
// SIG undefined FUN_1407a1b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407a1b20(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_3e8 [32];
  undefined8 local_3c8 [2];
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  FUN_142dc1ad0(local_3b8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3b8);
  }
  local_3c8[0] = 0;
  puVar1 = local_3b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3c8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_14077bc00(puVar1,local_3c8[0]);
  *param_3 = uVar2;
  return;
}



// FUNCTION 1407a1c20 execIsLocationBeneathLandscape body=217 status=ok
// SIG undefined execIsLocationBeneathLandscape(void)

void ADonNavigationManager::execIsLocationBeneathLandscape
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  uVar1 = FUN_140760160(param_1,&local_18,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a1d00 FUN_1407a1d00 body=143 status=ok
// SIG undefined FUN_1407a1d00(void)

void FUN_1407a1d00(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140760350(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a1d90 FUN_1407a1d90 body=143 status=ok
// SIG undefined FUN_1407a1d90(void)

void FUN_1407a1d90(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1407603e0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a1e20 FUN_1407a1e20 body=190 status=ok
// SIG undefined FUN_1407a1e20(void)

void FUN_1407a1e20(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  uVar1 = FUN_14077cc40(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a1ee0 FUN_1407a1ee0 body=252 status=ok
// SIG undefined FUN_1407a1ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407a1ee0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_3d8 [32];
  undefined8 local_3b8 [2];
  undefined1 local_3a8 [912];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  local_3b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3b8);
  }
  FUN_142dc1ad0(local_3a8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_3a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_3a8);
  }
  puVar2 = local_3a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14077cce0(local_3b8[0],puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a1fe0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_1407635e0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1407a20a0 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140763610(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1407a2160 execTestServerLevelVisibilityChange body=191 status=ok
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
  FUN_140763720(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1407a2220 execOnOwnerEndPlay body=192 status=ok
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
  thunk_FUN_14076d250(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1407a22e0 execPlayRandomVideoByTag body=349 status=ok
// SIG undefined execPlayRandomVideoByTag(void)

void UFlowVideoManager::execPlayRandomVideoByTag
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
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
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140767250(param_1,local_38[0],local_res20,bVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a2440 FUN_1407a2440 body=44 status=ok
// SIG undefined FUN_1407a2440(void)

void FUN_1407a2440(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14076aaa0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a2470 FUN_1407a2470 body=130 status=ok
// SIG undefined FUN_1407a2470(void)

void FUN_1407a2470(undefined8 param_1,longlong param_2)

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
  FUN_14076d250(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1407a2510 FUN_1407a2510 body=47 status=ok
// SIG undefined FUN_1407a2510(void)

longlong FUN_1407a2510(void)

{
  if (DAT_14685aec8 == 0) {
    FUN_141786440(&DAT_14685aec8,&PTR_LAB_1440b9b60);
  }
  return DAT_14685aec8;
}



// FUNCTION 1407a2550 FUN_1407a2550 body=53 status=ok
// SIG undefined FUN_1407a2550(void)

void FUN_1407a2550(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1440be7a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a25a0 FUN_1407a25a0 body=162 status=ok
// SIG undefined FUN_1407a25a0(void)

longlong FUN_1407a25a0(void)

{
  if (DAT_14685aef0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTTask_LookAt",&DAT_14685aef0,FUN_140447710,200,0x10000000,0,
                  L"Game",&LAB_1407a3bb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTTaskNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685aef0;
}



// FUNCTION 1407a2650 FUN_1407a2650 body=53 status=ok
// SIG undefined FUN_1407a2650(void)

void FUN_1407a2650(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_1440be8b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1407a26a0 FUN_1407a26a0 body=53 status=ok
// SIG undefined FUN_1407a26a0(void)

void FUN_1407a26a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1440be9d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1407a26e0 FUN_1407a26e0 body=47 status=ok
// SIG undefined FUN_1407a26e0(void)

longlong FUN_1407a26e0(void)

{
  if (DAT_14685b000 == 0) {
    FUN_141786440(&DAT_14685b000,&PTR_GetPrivateStaticClass_1440badf0);
  }
  return DAT_14685b000;
}



// FUNCTION 1407a2710 FUN_1407a2710 body=47 status=ok
// SIG undefined FUN_1407a2710(void)

longlong FUN_1407a2710(void)

{
  if (DAT_14685aff0 == 0) {
    FUN_141786a30(&DAT_14685aff0,&PTR_FUN_146248dd0);
  }
  return DAT_14685aff0;
}



// FUNCTION 1407a2740 FUN_1407a2740 body=47 status=ok
// SIG undefined FUN_1407a2740(void)

longlong FUN_1407a2740(void)

{
  if (DAT_14685aff8 == 0) {
    FUN_141786a30(&DAT_14685aff8,&PTR_FUN_146248e60);
  }
  return DAT_14685aff8;
}



// FUNCTION 1407a2770 FUN_1407a2770 body=162 status=ok
// SIG undefined FUN_1407a2770(void)

longlong FUN_1407a2770(void)

{
  if (DAT_14685af00 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTTask_MoveToComponent",&DAT_14685af00,FUN_140447710,0xa0,
                  0x10000000,0,L"Game",&LAB_1407a3bd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTTask_BlackboardBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_14685af00;
}



// FUNCTION 1407a2820 FUN_1407a2820 body=53 status=ok
// SIG undefined FUN_1407a2820(void)

void FUN_1407a2820(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_1440beb50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1407a2860 FUN_1407a2860 body=162 status=ok
// SIG undefined FUN_1407a2860(void)

longlong FUN_1407a2860(void)

{
  if (DAT_14685ae30 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BlackboardKeyType_SmartAction",&DAT_14685ae30,FUN_140447710,
                  0x30,0x10000000,0,L"Engine",&LAB_1407a3c10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBlackboardKeyType::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685ae30;
}



// FUNCTION 1407a2930 FUN_1407a2930 body=53 status=ok
// SIG undefined FUN_1407a2930(void)

void FUN_1407a2930(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1440bec68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a2970 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UBTTask_MoveTo::StaticClass(void)

{
  if (DAT_14685af10 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTTask_MoveToNode",&DAT_14685af10,FUN_140447710,0xb0,0x10000004
                  ,0,L"Game",&LAB_1407a3bf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  StaticClass,&LAB_140447700,0);
  }
  return DAT_14685af10;
}



// FUNCTION 1407a2a30 FUN_1407a2a30 body=53 status=ok
// SIG undefined FUN_1407a2a30(void)

void FUN_1407a2a30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &PTR_FUN_1440bed80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1407a2a70 FUN_1407a2a70 body=162 status=ok
// SIG undefined FUN_1407a2a70(void)

longlong FUN_1407a2a70(void)

{
  if (DAT_14685af20 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTTask_UseCover",&DAT_14685af20,FUN_140447710,0x70,0x12000000,0
                  ,L"Game",InternalConstructor<UBTT_RunAction>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTTaskNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685af20;
}



// FUNCTION 1407a2b30 FUN_1407a2b30 body=162 status=ok
// SIG undefined FUN_1407a2b30(void)

longlong FUN_1407a2b30(void)

{
  if (DAT_14685af30 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTTask_UseSmartObject",&DAT_14685af30,FUN_140447710,0x70,
                  0x12000000,0,L"Game",InternalConstructor<UBTT_RunAction>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTTaskNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685af30;
}



// FUNCTION 1407a2c00 FUN_1407a2c00 body=162 status=ok
// SIG undefined FUN_1407a2c00(void)

longlong FUN_1407a2c00(void)

{
  if (DAT_14685b018 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"CoverSlotData",&DAT_14685b018,FUN_140447710,200,0x10000000,0,
                  L"Engine",&LAB_1407a3c40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14685b018;
}



// FUNCTION 1407a2cb0 FUN_1407a2cb0 body=162 status=ok
// SIG undefined FUN_1407a2cb0(void)

longlong FUN_1407a2cb0(void)

{
  if (DAT_14685ae50 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTComposite_Random",&DAT_14685ae50,FUN_140447710,0xa0,
                  0x10000000,0,L"Game",&LAB_1407a3ae0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTComposite_Selector::StaticClass,&LAB_140447700,0);
  }
  return DAT_14685ae50;
}



// FUNCTION 1407a2d70 FUN_1407a2d70 body=162 status=ok
// SIG undefined FUN_1407a2d70(void)

longlong FUN_1407a2d70(void)

{
  if (DAT_14685b030 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"CoverStyleData",&DAT_14685b030,FUN_140447710,0x48,0x10000000,0,
                  L"Engine",&LAB_1407a3c60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14685b030;
}



// FUNCTION 1407a2e30 FUN_1407a2e30 body=53 status=ok
// SIG undefined FUN_1407a2e30(void)

void FUN_1407a2e30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x110;
    *puVar1 = &PTR_FUN_1440bdd90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a2e80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ACameraActor::GetPrivateStaticClass(void)

{
  if (DAT_14685b008 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"CoverSlotComponent",&DAT_14685b008,FUN_1407a4f10,0x840,
                  0x10000000,0,L"Engine",&LAB_1407a3c20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_14685b008;
}



// FUNCTION 1407a2f30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGHitTextureButton::GetPrivateStaticClass(void)

{
  if (DAT_14685adc0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIUseSlotComponent",&DAT_14685adc0,FUN_1407a4eb0,0x750,
                  0x10000000,0,L"Engine",&LAB_1407a3a70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_14685adc0;
}



// FUNCTION 1407a2fe0 FUN_1407a2fe0 body=47 status=ok
// SIG undefined FUN_1407a2fe0(void)

longlong FUN_1407a2fe0(void)

{
  if (DAT_14685adb8 == 0) {
    FUN_141786440(&DAT_14685adb8,&PTR_GetPrivateStaticClass_1440bbb70);
  }
  return DAT_14685adb8;
}



// FUNCTION 1407a3010 FUN_1407a3010 body=47 status=ok
// SIG undefined FUN_1407a3010(void)

longlong FUN_1407a3010(void)

{
  if (DAT_14685adb0 == 0) {
    FUN_141786a30(&DAT_14685adb0,&PTR_FUN_146245f30);
  }
  return DAT_14685adb0;
}



// FUNCTION 1407a3050 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UBTTask_SetTagCooldown::StaticClass(void)

{
  if (DAT_14685aee0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTTask_AIAction_Custom",&DAT_14685aee0,FUN_140447710,0x80,
                  0x10000000,0,L"Game",FUN_1407a3b70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407894b0,&LAB_140447700,0);
  }
  return DAT_14685aee0;
}



// FUNCTION 1407a3100 FUN_1407a3100 body=162 status=ok
// SIG undefined FUN_1407a3100(void)

longlong FUN_1407a3100(void)

{
  if (DAT_14685ae60 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTDecorator_AIAction",&DAT_14685ae60,FUN_140447710,0x68,
                  0x10000000,0,L"Game",&LAB_1407a3af0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTDecorator::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685ae60;
}



// FUNCTION 1407a31c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APostProcessVolume::GetPrivateStaticClass(void)

{
  if (DAT_14685adf8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIWeaponUserComponent",&DAT_14685adf8,FUN_1407a4ee0,0x8b0,
                  0x10000000,0,L"Engine",&LAB_1407a3a80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_14685adf8;
}



// FUNCTION 1407a3270 FUN_1407a3270 body=162 status=ok
// SIG undefined FUN_1407a3270(void)

longlong FUN_1407a3270(void)

{
  if (DAT_14685ae70 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"UBTDecorator_AITicket",&DAT_14685ae70,FUN_140447710,0x68,
                  0x12000000,0,L"Game",FUN_1407a3cc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTDecorator::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685ae70;
}



// FUNCTION 1407a3330 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UOnlineSessionClient::StaticClass(void)

{
  if (DAT_14685ae90 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTDecorator_GbxLoop",&DAT_14685ae90,FUN_140447710,400,
                  0x10000000,0,L"Game",&LAB_1407a3b00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTDecorator::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685ae90;
}



// FUNCTION 1407a33e0 FUN_1407a33e0 body=47 status=ok
// SIG undefined FUN_1407a33e0(void)

longlong FUN_1407a33e0(void)

{
  if (DAT_14685adf0 == 0) {
    FUN_141786440(&DAT_14685adf0,&PTR_GetPrivateStaticClass_1440bc6b0);
  }
  return DAT_14685adf0;
}



// FUNCTION 1407a3410 FUN_1407a3410 body=47 status=ok
// SIG undefined FUN_1407a3410(void)

longlong FUN_1407a3410(void)

{
  if (DAT_14685ade0 == 0) {
    FUN_141786a30(&DAT_14685ade0,&PTR_FUN_146246880);
  }
  return DAT_14685ade0;
}



// FUNCTION 1407a3440 FUN_1407a3440 body=47 status=ok
// SIG undefined FUN_1407a3440(void)

longlong FUN_1407a3440(void)

{
  if (DAT_14685ade8 == 0) {
    FUN_141786a30(&DAT_14685ade8,&PTR_FUN_146246910);
  }
  return DAT_14685ade8;
}



// FUNCTION 1407a3470 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x238;
    *puVar1 = &PTR_FUN_1440bd960;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a34b0 FUN_1407a34b0 body=162 status=ok
// SIG undefined FUN_1407a34b0(void)

longlong FUN_1407a34b0(void)

{
  if (DAT_14685af50 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"Cover",&DAT_14685af50,FUN_1407a4e80,0x510,0x10000006,0,L"Game",
                  &LAB_1407a3a50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14685af50;
}



// FUNCTION 1407a3570 FUN_1407a3570 body=47 status=ok
// SIG undefined FUN_1407a3570(void)

longlong FUN_1407a3570(void)

{
  if (DAT_14685af48 == 0) {
    FUN_141786440(&DAT_14685af48,&PTR_FUN_1440bc950);
  }
  return DAT_14685af48;
}



// FUNCTION 1407a35a0 FUN_1407a35a0 body=47 status=ok
// SIG undefined FUN_1407a35a0(void)

longlong FUN_1407a35a0(void)

{
  if (DAT_14685af38 == 0) {
    FUN_141786a30(&DAT_14685af38,&PTR_FUN_146247ac0);
  }
  return DAT_14685af38;
}



// FUNCTION 1407a35d0 FUN_1407a35d0 body=47 status=ok
// SIG undefined FUN_1407a35d0(void)

longlong FUN_1407a35d0(void)

{
  if (DAT_14685af40 == 0) {
    FUN_141786a30(&DAT_14685af40,&PTR_FUN_146247b50);
  }
  return DAT_14685af40;
}



// FUNCTION 1407a3600 FUN_1407a3600 body=162 status=ok
// SIG undefined FUN_1407a3600(void)

longlong FUN_1407a3600(void)

{
  if (DAT_14685aea0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTDecorator_IsInRange",&DAT_14685aea0,FUN_140447710,0x110,
                  0x10000000,0,L"Game",&LAB_1407a3b10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTDecorator_BlackboardBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_14685aea0;
}



// FUNCTION 1407a36e0 FUN_1407a36e0 body=162 status=ok
// SIG undefined FUN_1407a36e0(void)

longlong FUN_1407a36e0(void)

{
  if (DAT_14685aeb0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTService_GameFocus",&DAT_14685aeb0,FUN_140447710,0xa0,
                  0x10000000,0,L"Game",&LAB_1407a3b20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTService_DefaultFocus::StaticClass,&LAB_140447700,0);
  }
  return DAT_14685aeb0;
}



// FUNCTION 1407a3790 FUN_1407a3790 body=162 status=ok
// SIG undefined FUN_1407a3790(void)

longlong FUN_1407a3790(void)

{
  if (DAT_14685ae10 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AnimNotify_SmartObject",&DAT_14685ae10,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",InternalConstructor<UAIResource_Logic>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotifyState::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685ae10;
}



// FUNCTION 1407a3850 FUN_1407a3850 body=53 status=ok
// SIG undefined FUN_1407a3850(void)

void FUN_1407a3850(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = &PTR_FUN_1440be570;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 1407a38a0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong URemnantTrait::StaticClass(void)

{
  if (DAT_14685aec0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTService_GbxRunEQS",&DAT_14685aec0,FUN_140447710,0xf8,
                  0x10000000,0,L"Game",&LAB_1407a3b40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  StaticClass,&LAB_140447700,0);
  }
  return DAT_14685aec0;
}



// FUNCTION 1407a3950 FUN_1407a3950 body=162 status=ok
// SIG undefined FUN_1407a3950(void)

longlong FUN_1407a3950(void)

{
  if (DAT_14685ae20 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AnimNotify_UseSmartAction",&DAT_14685ae20,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",&LAB_1407a3ad0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotify::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685ae20;
}



// FUNCTION 1407a3a00 FUN_1407a3a00 body=53 status=ok
// SIG undefined FUN_1407a3a00(void)

void FUN_1407a3a00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &PTR_FUN_1440be688;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1407a3aa0 InternalConstructor<UAIResource_Logic> body=41 status=ok
// SIG undefined InternalConstructor<UAIResource_Logic>(void)

void InternalConstructor<UAIResource_Logic>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UAnimNotifyState::UAnimNotifyState(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440bda98;
  }
  return;
}



// FUNCTION 1407a3b70 FUN_1407a3b70 body=49 status=ok
// SIG undefined FUN_1407a3b70(void)

void FUN_1407a3b70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140727f00(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__1440969e0;
    puVar1[5] = &PTR_LAB_144096ce0;
  }
  return;
}


